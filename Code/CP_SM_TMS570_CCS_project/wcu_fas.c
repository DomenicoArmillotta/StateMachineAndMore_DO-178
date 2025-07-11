#include "lwiplib.h"

#include "HL_sys_common.h"
#include <strings.h>

#include "HL_het.h"
#include "HL_gio.h"
#include "display_text.h"


#include "StateMachine_State_Machine_TI.h"


void LED_StartUp(void);
void LED_Flash(void);

/******************************************************************************
**                      INTERNAL MACRO DEFINITIONS
*******************************************************************************/
#define WCU_PORT 2001
#define FAS_PORT 2000

#define MESSAGE_HEADER_LEN sizeof(uint32_t)
#define MESSAGE_ID_TYPE uint32_t
#define WCU_TRIGGER_EVENT_MSG_ID 123
#define WCU_MISSION_STATUS_MSG_ID 456
#define STATE_MACHINE_INPUT_MSG_ID 1001
#define STATE_MACHINE_OUTPUT_MSG_ID 1002

const uint8 ip_addr[4] = { 192, 168, 1, 136 };
const u32_t laptop_addr = htonl(ip_addr);

void *pcb = NULL;

inC_StateMachine_State_Machine_TI input_buf;
inC_StateMachine_State_Machine_TI input;
outC_StateMachine_State_Machine_TI output;

void Delay(void) {
      static volatile unsigned int delayval;
      delayval = 10000;   // 100000 are about 10ms
      while(delayval--);
}

void LED_StartUp(void)
{
    /** - NHET is configured as Master
     *  - NHET is turned On */
    hetREG1->GCR        = 0x01000001;

    /** - PULL functinality is enabled */
    hetREG1->PULDIS = 0x00000000;

    /** - Configure NHET pins as output */
    hetREG1->DIR    = 0xAA178035;
}

void LED_Flash(void)
{
    int temp,delay;

    /** - Delay Parameter */
    delay               = 0x200000;
    /** - Turn all LEDs off */
    hetREG1->DOUT       = 0x0;   //0x08110034;

    /** - Set only NHET[25,0] */
    hetREG1->DOUT       = 0 | (1 << 25) | (1 << 0); //0x0A110035;
    /** - Simple Delay */
    for(temp=0;temp<delay;temp++);

    /** - Set only NHET[18,31] */
    hetREG1->DOUT       = 0 | (1 << 31) | (1 << 18) ; //0x88150034;
    /** - Simple Dealy */
    for(temp=0;temp<delay;temp++);

    /** - Set only NHET[29,17] */
    hetREG1->DOUT       = 0 | (1 << 29) | (1 << 17);   //0x28130034;
    /** - Simple Dealy */
    for(temp=0;temp<delay;temp++);

    /** - Set only NHET[31,18] */
    hetREG1->DOUT       = 0 | (1 << 31) | ( 1 << 18);   //0x88150034;
    /** - Simple Dealy */
    for(temp=0;temp<delay;temp++);

    /** - Set only NHET[0,25] */
    hetREG1->DOUT       = 0 | (1 << 25) | (1 << 0); //0x0A118035;
    /** - Simple Dealy */
    for(temp=0;temp<delay;temp++);

    /** - Set only NHET[0,25,17,18,29,31] */
    hetREG1->DOUT       = 0 | (1<<25) | (1<<17) | (1<<18) | (1<<29) | (1 <<31) | (1 <<0); //0xAA178035;
    /** - Simple Dealy */
    for(temp=0;temp<delay;temp++);

    /** - Clr all NHET[0,25,17,18,29,31] pins */
    hetREG1->DOUT       = 0; //0x08110034;
}

static void UdpReceive(void *arg, struct udp_pcb *pcb, struct pbuf *p, const ip_addr_t *addr, u16_t port)
{
    /* Receive. */
    {
        /* Validate the contents of the received payload / request message ...
         * the expected length, the expected message type, the expected response type.
         */
        sciDisplayText_(sciREGx, txtCRLF_, sizeof(txtCRLF_));
        sciDisplayText_(sciREGx, "Received data..", sizeof("Received data.."));
        sciDisplayText_(sciREGx, txtCRLF_, sizeof(txtCRLF_));
        sciDisplayText_(sciREGx, p->payload, p->len);
        sciDisplayText_(sciREGx, txtCRLF_, sizeof(txtCRLF_));

        if (p->len >= MESSAGE_HEADER_LEN) {
            if (*((MESSAGE_ID_TYPE*)p->payload) == STATE_MACHINE_INPUT_MSG_ID) {
                if (p->len >= MESSAGE_HEADER_LEN + sizeof(inC_StateMachine_State_Machine_TI)) {
                    memcpy(&input_buf, p->payload + MESSAGE_HEADER_LEN, sizeof(inC_StateMachine_State_Machine_TI));

                    // <<< DEBUG: stampa il valore ricevuto >>>
                    char buffer[128];

                    // Stampa Input1
                    snprintf(buffer, sizeof(buffer), "Received Input1: %d\n", input_buf.Input1);
                    sciDisplayText_(sciREGx, buffer, strlen(buffer));

                    // Stampa Input2
                    snprintf(buffer, sizeof(buffer), "Received Input2: %d\n", input_buf.Input2);
                    sciDisplayText_(sciREGx, buffer, strlen(buffer));

                    // Stampa struct_int
                    snprintf(buffer, sizeof(buffer), "Received struct_int: %d\n", input_buf.Input3.struct_int);
                    sciDisplayText_(sciREGx, buffer, strlen(buffer));

                    // Stampa struct_bool
                    snprintf(buffer, sizeof(buffer), "Received struct_bool: %s\n", input_buf.Input3.struct_bool ? "true" : "false");
                    sciDisplayText_(sciREGx, buffer, strlen(buffer));
                }
            }
        }



        /* Free receive buffer. */
        pbuf_free(p);
    }
}

void UdpSend()
{
    LED_Flash();
    //Send the Mission Status
    struct pbuf *p_out = pbuf_alloc(PBUF_TRANSPORT, sizeof(output) + MESSAGE_HEADER_LEN, PBUF_RAM);
    if (p_out != NULL) {
        uint32_t message_id = STATE_MACHINE_OUTPUT_MSG_ID;
        memcpy(p_out->payload, &message_id, sizeof(message_id));
        memcpy(p_out->payload + MESSAGE_HEADER_LEN, &output, sizeof(output));
        udp_sendto(pcb, p_out, laptop_addr, WCU_PORT);
        pbuf_free(p_out);
    }


    /* Free send buffer. */
    pbuf_free(p_out);
}

void wcu_fas_init()
{
    LED_StartUp();
    /* Create a new UDP port for listening to comms requests. */
    pcb = udp_new();
    udp_bind(pcb, IP_ADDR_ANY, FAS_PORT); // Bind to ANY local address and assigned FAS_PORT.
    // open ended response udp_connect(pcb, IP_ADDR_ANY, WCU_PORT); // Bind to ANY remote address and assigned MCU_PORT.
    udp_recv(pcb, UdpReceive, NULL); // Set on receive callback to CommsReceive().
    StateMachine_init_State_Machine_TI(&output);
}

void wcu_fas_loop()
{
    outC_StateMachine_State_Machine_TI  prev_output = output;
    while (1)
    {
        //INPUT
        //inputs are written to input_buf when messages received in udp interrupt handler
        input = input_buf;

        // <<< DEBUG: stampa prima della logica >>>
        //char buffer[64];
        //snprintf(buffer, sizeof(buffer), "Loop Input1: %d", input.Input1);
        //sciDisplayText_(sciREGx, buffer, strlen(buffer));

        //PROCESS
        StateMachine_State_Machine_TI(&input, &output);

        //OUTPUT
        //send outputs only if something has changed
        if(memcmp(&prev_output,&output,sizeof(output)) != 0)
        {
            //send Mission_Status
            UdpSend();
        }
        prev_output = output;
        Delay();
    }
}

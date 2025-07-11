#include "display_text.h"

uint8_t txtCRLF_[] = {'\r', '\n'};

void sciDisplayText_(sciBASE_t *sci, uint8_t *text,uint32_t length)
{
    while(length--)
    {
        while ((sci->FLR & 0x4) == 4); /* wait until busy */
        sciSendByte(sci,*text++);      /* send out text   */
    };
}

import socket
from messages import WCU_Inputs, Type1_State_Machine_TI

udp_client = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
server_address = ('192.168.1.133', 2000)

input_msg = WCU_Inputs(
    Input1=5,
    Input2=10,
    Input3=Type1_State_Machine_TI(struct_bool=True, struct_int=1)
)

data = input_msg.pack_data()
udp_client.sendto(data, server_address)
print(f"Message sent: {input_msg}")
print(' '.join(f'{b:02X}' for b in data))
udp_client.close()


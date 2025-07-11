import socket
from messages import Header, WCU_Inputs, WCU_Outputs

# Create a UDP socket
udp_server = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Bind the socket to an address and port
server_address = ('192.168.1.136', 2001)
udp_server.bind(server_address)

print(f"✅ UDP server is listening on {server_address[0]}:{server_address[1]}...")

try:
    while True:
        # Receive data
        data, client_address = udp_server.recvfrom(1024)
        print(f"\n📥 Data received from {client_address}")
        print("Hex dump:", ' '.join(f'{b:02X}' for b in data))

        # Extract header
        header = Header.unpack_data(data)
        print(f"📄 Header: {header}")

        # Handle messages based on message ID
        if header.message_id == WCU_Inputs.MESSAGE_ID:
            msg = WCU_Inputs.unpack_data(data)
            print(f"✅ Received WCU_Inputs:\n  - Input1: {msg.Input1}\n  - Input2: {msg.Input2}\n  - Input3.struct_bool: {msg.Input3.struct_bool}\n  - Input3.struct_int: {msg.Input3.struct_int}")

        elif header.message_id == WCU_Inputs.MESSAGE_ID_OUTPUT:
            msg = WCU_Outputs.unpack_data(data)
            print(f"✅ Received WCU_Outputs:\n  - Output1: {msg.Output1}\n  - Output2.struct_bool: {msg.Output2.struct_bool}\n  - Output2.struct_int: {msg.Output2.struct_int}\n  - SM1_state_nxt: {msg.SM1_state_nxt}")

        else:
            print("⚠️ Unknown message ID received.")

finally:
    udp_server.close()
    print("🔒 UDP server closed.")

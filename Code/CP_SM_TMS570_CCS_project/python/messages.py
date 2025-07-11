import struct
from dataclasses import dataclass

@dataclass
class Header:
    message_id: int

    @staticmethod
    def size():
        return 4  # uint32_t

    def pack_data(self) -> bytes:
        return struct.pack('>I', self.message_id)

    @staticmethod
    def unpack_data(data: bytes) -> 'Header':
        message_id, = struct.unpack('>I', data[:Header.size()])
        return Header(message_id=message_id)

    def __repr__(self):
        return f"Header(message_id={self.message_id})"


@dataclass
class Type1_State_Machine_TI:
    struct_bool: bool  # bool -> '?'
    struct_int: int    # int8 -> 'b'

    def pack(self) -> bytes:
        return struct.pack('>?b', self.struct_bool, self.struct_int)

    @staticmethod
    def unpack(data: bytes) -> 'Type1_State_Machine_TI':
        struct_bool, struct_int = struct.unpack('>?b', data)
        return Type1_State_Machine_TI(struct_bool, struct_int)


@dataclass
class WCU_Inputs:
    Input1: int  # int8
    Input2: int  # int8
    Input3: Type1_State_Machine_TI

    MESSAGE_ID = 1001
    MESSAGE_ID_OUTPUT = 1002


    def pack_data(self) -> bytes:
        header = Header(self.MESSAGE_ID)
        payload = struct.pack('>bb', self.Input1, self.Input2) + self.Input3.pack()
        return header.pack_data() + payload

    @staticmethod
    def unpack_data(data: bytes) -> 'WCU_Inputs':
        input1, input2 = struct.unpack('>bb', data[Header.size():Header.size() + 2])
        input3 = Type1_State_Machine_TI.unpack(data[Header.size() + 2:Header.size() + 4])
        return WCU_Inputs(input1, input2, input3)

    def __repr__(self):
        return f"WCU_Inputs(Input1={self.Input1}, Input2={self.Input2}, Input3={self.Input3})"


@dataclass
class WCU_Outputs:
    Output1: int  # int8
    Output2: Type1_State_Machine_TI
    SM1_state_nxt: int  # int8

    MESSAGE_ID = 1001

    def pack_data(self) -> bytes:
        header = Header(self.MESSAGE_ID)
        payload = struct.pack('>b', self.Output1) + self.Output2.pack() + struct.pack('>b', self.SM1_state_nxt)
        return header.pack_data() + payload

    @staticmethod
    def unpack_data(data: bytes) -> 'WCU_Outputs':
        offset = Header.size()
        output1 = struct.unpack('>b', data[offset:offset+1])[0]
        output2 = Type1_State_Machine_TI.unpack(data[offset+1:offset+3])
        sm1_state = struct.unpack('>b', data[offset+3:offset+4])[0]
        return WCU_Outputs(output1, output2, sm1_state)

    def __repr__(self):
        return f"WCU_Outputs(Output1={self.Output1}, Output2={self.Output2}, SM1_state_nxt={self.SM1_state_nxt})"

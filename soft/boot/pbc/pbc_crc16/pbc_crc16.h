//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#ifndef pbc_crc16_H
#define pbc_crc16_H
//-----------------------------------------------------------------------------
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//------------------------------------------------------------------------------
//Task
//------------------------------------------------------------------------------
//Event
//------------------------------------------------------------------------------
//Status
//------------------------------------------------------------------------------
//Function
//名称: CRC16计算，Modbus标准
//功能: 
//入口: 
//      _In_ptr     计算CRC值的原始数据指针   <<----
//      _In_len     数据长度                  <<----
//出口: 16Bit CRC值

sdt_int16u Crc16_calculate(sdt_int8u* _In_ptr,sdt_int16u _In_len);
//-----------------------------------------------------------------------------
//名称: CRC16计算，Modbus标准
//功能: 按字节返回
//入口: 
//      _In_ptr     计算CRC值的原始数据指针   <<----
//      _In_len     数据长度                  <<----
//      _Out_CrcValue  Crc值的指针,大端模式, _Out_CrcValue[1]高位， _Out_CrcValue[0]低位， ---->>
//出口: 16Bit CRC值
void Crc16CalculateOfByte(sdt_int8u* _In_ptr,sdt_int16u _In_len,sdt_int8u* _Out_CrcValue);
#endif
//++++++++++++++++++++++++++++++++++End++++++++++++++++++++++++++++++++++++++++
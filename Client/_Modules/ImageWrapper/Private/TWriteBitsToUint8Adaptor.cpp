// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 3

// ReadAndWrite @ 14268d560

void __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TWriteBitsToUint8Adaptor<1>::ReadAndWrite
          (TWriteBitsToUint8Adaptor<1> *this,TArrayView<unsigned_char_const_,__int64> *param_1,
          long64 param_2,TArrayView<unsigned_char,__int64> *param_3,long64 param_4)

{
  byte *pbVar1;
  uchar *puVar2;
  ulonglong uVar3;
  byte bVar4;
  double dVar5;
  
  uVar3 = param_2 % (longlong)(ulonglong)*(uint *)&this->field_0x8;
  bVar4 = 7 - ((byte)uVar3 & 7);
  pbVar1 = TArrayView<unsigned_char_const_,__int64>::operator[]
                     (param_1,(param_2 / (longlong)(ulonglong)*(uint *)&this->field_0x8 &
                              0xffffffffU) * *(longlong *)this + ((uVar3 & 0xffffffff) >> 3));
  dVar5 = (double)(byte)(('\x01' << (bVar4 & 0x1f) & *pbVar1) >> (bVar4 & 0x1f)) *
          __real_406fe00000000000;
  puVar2 = TArrayView<unsigned_char,__int64>::operator[](param_3,param_4);
  *puVar2 = (uchar)(int)dVar5;
  return;
}

// ReadAndWrite @ 14268d5f0

void __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TWriteBitsToUint8Adaptor<2>::ReadAndWrite
          (TWriteBitsToUint8Adaptor<2> *this,TArrayView<unsigned_char_const_,__int64> *param_1,
          long64 param_2,TArrayView<unsigned_char,__int64> *param_3,long64 param_4)

{
  byte bVar1;
  byte *pbVar2;
  uchar *puVar3;
  ulonglong uVar4;
  double dVar5;
  
  uVar4 = param_2 % (longlong)(ulonglong)*(uint *)&this->field_0x8;
  bVar1 = ('\x03' - ((byte)uVar4 & 3)) * '\x02';
  pbVar2 = TArrayView<unsigned_char_const_,__int64>::operator[]
                     (param_1,(param_2 / (longlong)(ulonglong)*(uint *)&this->field_0x8 &
                              0xffffffffU) * *(longlong *)this + ((uVar4 & 0xffffffff) >> 2));
  dVar5 = (double)(byte)(('\x03' << (bVar1 & 0x1f) & *pbVar2) >> (bVar1 & 0x1f)) *
          __real_4055400000000000;
  puVar3 = TArrayView<unsigned_char,__int64>::operator[](param_3,param_4);
  *puVar3 = (uchar)(int)dVar5;
  return;
}

// ReadAndWrite @ 14268d690

void __thiscall
UE::ImageWrapper::Private::TiffImageWrapper::TWriteBitsToUint8Adaptor<4>::ReadAndWrite
          (TWriteBitsToUint8Adaptor<4> *this,TArrayView<unsigned_char_const_,__int64> *param_1,
          long64 param_2,TArrayView<unsigned_char,__int64> *param_3,long64 param_4)

{
  byte *pbVar1;
  uchar *puVar2;
  ulonglong uVar3;
  byte bVar4;
  double dVar5;
  
  uVar3 = param_2 % (longlong)(ulonglong)*(uint *)&this->field_0x8;
  bVar4 = ('\x01' - ((byte)uVar3 & 1)) * '\x04';
  pbVar1 = TArrayView<unsigned_char_const_,__int64>::operator[]
                     (param_1,(param_2 / (longlong)(ulonglong)*(uint *)&this->field_0x8 &
                              0xffffffffU) * *(longlong *)this + ((uVar3 & 0xffffffff) >> 1));
  dVar5 = (double)(byte)(('\x0f' << (bVar4 & 0x1f) & *pbVar1) >> (bVar4 & 0x1f)) *
          __real_4031000000000000;
  puVar2 = TArrayView<unsigned_char,__int64>::operator[](param_3,param_4);
  *puVar2 = (uchar)(int)dVar5;
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 64

// Dequantize @ 144329710

void __cdecl
UE::Net::Private::FIntNetSerializerBase<signed_char,FIntNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined1 *)param_2->Target = *(undefined1 *)param_2->Source;
  return;
}

// Dequantize @ 144329730

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_char,FUintNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined1 *)param_2->Target = *(undefined1 *)param_2->Source;
  return;
}

// Dequantize @ 144329750

void __cdecl
UE::Net::Private::FIntNetSerializerBase<short,FIntNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined2 *)param_2->Target = *(undefined2 *)param_2->Source;
  return;
}

// Dequantize @ 144329770

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_short,FUintNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined2 *)param_2->Target = *(undefined2 *)param_2->Source;
  return;
}

// Dequantize @ 144329790

void __cdecl
UE::Net::Private::FIntNetSerializerBase<int,FIntNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined4 *)param_2->Target = *(undefined4 *)param_2->Source;
  return;
}

// Dequantize @ 1443297b0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_int,FUintNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined4 *)param_2->Target = *(undefined4 *)param_2->Source;
  return;
}

// Dequantize @ 1443297d0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<__int64,FIntNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined8 *)param_2->Target = *(undefined8 *)param_2->Source;
  return;
}

// Dequantize @ 1443297f0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned___int64,FUintNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined8 *)param_2->Target = *(undefined8 *)param_2->Source;
  return;
}

// Deserialize @ 14432b620

void __cdecl
UE::Net::Private::FIntNetSerializerBase<signed_char,FIntNetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  byte bVar1;
  char *pcVar2;
  FNetBitStreamReader *this;
  uint uVar3;
  byte bVar4;
  
  pcVar2 = (char *)param_2->Target;
  this = param_1->BitStreamReader;
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  if ((0xf < bVar1) && (uVar3 = FNetBitStreamReader::ReadBits(this,1), (uVar3 & 1) != 0)) {
    *pcVar2 = '\0';
    return;
  }
  bVar4 = '\x01' << (bVar1 - 1 & 0x1f);
  uVar3 = FNetBitStreamReader::ReadBits(this,(uint)bVar1);
  *pcVar2 = ((byte)uVar3 ^ bVar4) - bVar4;
  return;
}

// Deserialize @ 14432b6a0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_char,FUintNetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined1 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x10);
  if (0xf < uVar3) {
    uVar2 = FNetBitStreamReader::ReadBits(this,1);
    if ((uVar2 & 1) != 0) {
      *puVar1 = 0;
      return;
    }
  }
  uVar3 = FNetBitStreamReader::ReadBits(this,uVar3);
  *puVar1 = (char)uVar3;
  return;
}

// Deserialize @ 14432b710

void __cdecl
UE::Net::Private::FIntNetSerializerBase<short,FIntNetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  byte bVar1;
  short *psVar2;
  FNetBitStreamReader *this;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  
  psVar2 = (short *)param_2->Target;
  this = param_1->BitStreamReader;
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  if (0xf < bVar1) {
    uVar4 = FNetBitStreamReader::ReadBits(this,1);
    if ((uVar4 & 1) != 0) {
      sVar3 = 0;
      goto LAB_14432b768;
    }
  }
  uVar5 = 1 << (bVar1 - 1 & 0x1f);
  uVar4 = FNetBitStreamReader::ReadBits(this,(uint)bVar1);
  sVar3 = ((ushort)uVar4 ^ uVar5) - uVar5;
LAB_14432b768:
  *psVar2 = sVar3;
  return;
}

// Deserialize @ 14432b790

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_short,FUintNetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined2 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined2 *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x10);
  if (0xf < uVar3) {
    uVar2 = FNetBitStreamReader::ReadBits(this,1);
    if ((uVar2 & 1) != 0) {
      *puVar1 = 0;
      return;
    }
  }
  uVar3 = FNetBitStreamReader::ReadBits(this,uVar3);
  *puVar1 = (short)uVar3;
  return;
}

// Deserialize @ 14432b800

void __cdecl
UE::Net::Private::FIntNetSerializerBase<int,FIntNetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  byte bVar1;
  int *piVar2;
  FNetBitStreamReader *this;
  uint uVar3;
  uint uVar4;
  
  piVar2 = (int *)param_2->Target;
  this = param_1->BitStreamReader;
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  if ((0xf < bVar1) && (uVar3 = FNetBitStreamReader::ReadBits(this,1), (uVar3 & 1) != 0)) {
    *piVar2 = 0;
    return;
  }
  uVar4 = 1 << (bVar1 - 1 & 0x1f);
  uVar3 = FNetBitStreamReader::ReadBits(this,(uint)bVar1);
  *piVar2 = (uVar3 ^ uVar4) - uVar4;
  return;
}

// Deserialize @ 14432b880

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_int,FUintNetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x10);
  if (0xf < uVar3) {
    uVar2 = FNetBitStreamReader::ReadBits(this,1);
    if ((uVar2 & 1) != 0) {
      *puVar1 = 0;
      return;
    }
  }
  uVar3 = FNetBitStreamReader::ReadBits(this,uVar3);
  *puVar1 = uVar3;
  return;
}

// Deserialize @ 14432b8f0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<__int64,FIntNetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  byte bVar1;
  longlong *plVar2;
  FNetBitStreamReader *this;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  plVar2 = (longlong *)param_2->Target;
  this = param_1->BitStreamReader;
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  if ((0xf < bVar1) && (uVar3 = FNetBitStreamReader::ReadBits(this,1), (uVar3 & 1) != 0)) {
    *plVar2 = 0;
    return;
  }
  uVar3 = 0x20;
  if (bVar1 < 0x20) {
    uVar3 = (uint)bVar1;
  }
  uVar3 = FNetBitStreamReader::ReadBits(this,uVar3);
  uVar5 = (ulonglong)uVar3;
  if (0x20 < bVar1) {
    uVar4 = FNetBitStreamReader::ReadBits(this,bVar1 - 0x20);
    uVar5 = CONCAT44(uVar4,uVar3);
  }
  uVar6 = 1L << (bVar1 - 1 & 0x3f);
  *plVar2 = (uVar6 ^ uVar5) - uVar6;
  return;
}

// Deserialize @ 14432b9a0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned___int64,FUintNetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  FNetBitStreamReader *this;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = (ulonglong *)param_2->Target;
  this = param_1->BitStreamReader;
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  if (0xf < bVar1) {
    uVar3 = FNetBitStreamReader::ReadBits(this,1);
    if ((uVar3 & 1) != 0) {
      *puVar2 = 0;
      return;
    }
  }
  uVar3 = 0x20;
  if (bVar1 < 0x20) {
    uVar3 = (uint)bVar1;
  }
  uVar3 = FNetBitStreamReader::ReadBits(this,uVar3);
  uVar5 = (ulonglong)uVar3;
  if (0x20 < bVar1) {
    uVar4 = FNetBitStreamReader::ReadBits(this,bVar1 - 0x20);
    uVar5 = CONCAT44(uVar4,uVar3);
  }
  *puVar2 = uVar5;
  return;
}

// DeserializeDelta @ 14432dd50

void __cdecl
UE::Net::Private::FIntNetSerializerBase<signed_char,FIntNetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_res10 [24];
  
  puVar2 = (undefined1 *)param_2->_padding_;
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 == '\0') {
    *puVar2 = 0;
    return;
  }
  uVar3 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeIntDelta(param_1->BitStreamReader,(int *)local_res10,(int)*(char *)param_2->Prev,
                      DeltaBitCountTable[uVar3],DeltaBitCountTableEntryCount[uVar3],uVar1);
  *puVar2 = local_res10[0];
  return;
}

// DeserializeDelta @ 14432dde0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_char,FUintNetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_res10 [24];
  
  puVar2 = (undefined1 *)param_2->_padding_;
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 == '\0') {
    *puVar2 = 0;
    return;
  }
  uVar3 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)local_res10,(uint)*(byte *)param_2->Prev,
             DeltaBitCountTable[uVar3],DeltaBitCountTableEntryCount[uVar3],uVar1);
  *puVar2 = local_res10[0];
  return;
}

// DeserializeDelta @ 14432de70

void __cdecl
UE::Net::Private::FIntNetSerializerBase<short,FIntNetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 local_res10 [12];
  
  puVar2 = (undefined2 *)param_2->_padding_;
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 == '\0') {
    *puVar2 = 0;
    return;
  }
  uVar3 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeIntDelta(param_1->BitStreamReader,(int *)local_res10,(int)*(short *)param_2->Prev,
                      DeltaBitCountTable[uVar3],DeltaBitCountTableEntryCount[uVar3],uVar1);
  *puVar2 = local_res10[0];
  return;
}

// DeserializeDelta @ 14432df00

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_short,FUintNetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 local_res10 [12];
  
  puVar2 = (undefined2 *)param_2->_padding_;
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 == '\0') {
    *puVar2 = 0;
    return;
  }
  uVar3 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)local_res10,(uint)*(ushort *)param_2->Prev,
             DeltaBitCountTable[uVar3],DeltaBitCountTableEntryCount[uVar3],uVar1);
  *puVar2 = local_res10[0];
  return;
}

// DeserializeDelta @ 14432df90

void __cdecl
UE::Net::Private::FIntNetSerializerBase<int,FIntNetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 == '\0') {
    *(int *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeIntDelta(param_1->BitStreamReader,(int *)param_2->_padding_,*(int *)param_2->Prev,
                      DeltaBitCountTable[uVar2],DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 14432e020

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_int,FUintNetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 == '\0') {
    *(uint *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)param_2->_padding_,*(uint *)param_2->Prev,
             DeltaBitCountTable[uVar2],DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 14432e0b0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<__int64,FIntNetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 == '\0') {
    *(long64 *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeIntDelta(param_1->BitStreamReader,(long64 *)param_2->_padding_,*(long64 *)param_2->Prev
                      ,DeltaBitCountTable[uVar2],DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 14432e140

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned___int64,FUintNetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 == '\0') {
    *(ulong64 *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(ulong64 *)param_2->_padding_,*(ulong64 *)param_2->Prev,
             DeltaBitCountTable[uVar2],DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// IsEqual @ 144332ec0

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<signed_char,FIntNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  byte bVar1;
  
  if (param_2->bStateIsQuantized != false) {
    return *(char *)param_2->Source0 == *(char *)param_2->Source1;
  }
  bVar1 = (byte)(0xff >> (8U - *(char *)(param_2->_padding_ + 0x10) & 0x1f));
  return (*(byte *)param_2->Source0 & bVar1) == (*(byte *)param_2->Source1 & bVar1);
}

// IsEqual @ 144332f10

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_char,FUintNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  byte bVar1;
  
  if (param_2->bStateIsQuantized != false) {
    return *(char *)param_2->Source0 == *(char *)param_2->Source1;
  }
  bVar1 = (byte)(0xff >> (8U - *(char *)(param_2->_padding_ + 0x10) & 0x1f));
  return (*(byte *)param_2->Source0 & bVar1) == (*(byte *)param_2->Source1 & bVar1);
}

// IsEqual @ 144332f60

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<short,FIntNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ushort uVar1;
  
  if (param_2->bStateIsQuantized != false) {
    return *(short *)param_2->Source0 == *(short *)param_2->Source1;
  }
  uVar1 = (ushort)(0xffff >> (0x10U - *(char *)(param_2->_padding_ + 0x10) & 0x1f));
  return (*(ushort *)param_2->Source0 & uVar1) == (*(ushort *)param_2->Source1 & uVar1);
}

// IsEqual @ 144332fc0

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_short,FUintNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ushort uVar1;
  
  if (param_2->bStateIsQuantized != false) {
    return *(short *)param_2->Source0 == *(short *)param_2->Source1;
  }
  uVar1 = (ushort)(0xffff >> (0x10U - *(char *)(param_2->_padding_ + 0x10) & 0x1f));
  return (*(ushort *)param_2->Source0 & uVar1) == (*(ushort *)param_2->Source1 & uVar1);
}

// IsEqual @ 144333020

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<int,FIntNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint uVar1;
  
  if (param_2->bStateIsQuantized != false) {
    return *(int *)param_2->Source0 == *(int *)param_2->Source1;
  }
  uVar1 = 0xffffffff >> (0x20U - *(char *)(param_2->_padding_ + 0x10) & 0x1f);
  return (*(uint *)param_2->Source0 & uVar1) == (*(uint *)param_2->Source1 & uVar1);
}

// IsEqual @ 144333070

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_int,FUintNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint uVar1;
  
  if (param_2->bStateIsQuantized != false) {
    return *(int *)param_2->Source0 == *(int *)param_2->Source1;
  }
  uVar1 = 0xffffffff >> (0x20U - *(char *)(param_2->_padding_ + 0x10) & 0x1f);
  return (*(uint *)param_2->Source0 & uVar1) == (*(uint *)param_2->Source1 & uVar1);
}

// IsEqual @ 1443330c0

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<__int64,FIntNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ulonglong uVar1;
  
  if (param_2->bStateIsQuantized != false) {
    return *(longlong *)param_2->Source0 == *(longlong *)param_2->Source1;
  }
  uVar1 = 0xffffffffffffffff >> (0x40U - *(char *)(param_2->_padding_ + 0x10) & 0x3f);
  return (*(ulonglong *)param_2->Source0 & uVar1) == (*(ulonglong *)param_2->Source1 & uVar1);
}

// IsEqual @ 144333120

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned___int64,FUintNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ulonglong uVar1;
  
  if (param_2->bStateIsQuantized != false) {
    return *(longlong *)param_2->Source0 == *(longlong *)param_2->Source1;
  }
  uVar1 = 0xffffffffffffffff >> (0x40U - *(char *)(param_2->_padding_ + 0x10) & 0x3f);
  return (*(ulonglong *)param_2->Source0 & uVar1) == (*(ulonglong *)param_2->Source1 & uVar1);
}

// Quantize @ 1443352d0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<signed_char,FIntNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  byte bVar1;
  
  bVar1 = '\x01' << (*(char *)(param_2->_padding_ + 0x10) - 1U & 0x1f);
  *(byte *)param_2->Target = ((bVar1 - 1 | bVar1) & *(byte *)param_2->Source ^ bVar1) - bVar1;
  return;
}

// Quantize @ 144335310

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_char,FUintNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  *(byte *)param_2->Target =
       (byte)(0xff >> (8U - *(char *)(param_2->_padding_ + 0x10) & 0x1f)) & *(byte *)param_2->Source
  ;
  return;
}

// Quantize @ 144335340

void __cdecl
UE::Net::Private::FIntNetSerializerBase<short,FIntNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ushort uVar1;
  
  uVar1 = 1 << (*(char *)(param_2->_padding_ + 0x10) - 1U & 0x1f);
  *(ushort *)param_2->Target = ((uVar1 - 1 | uVar1) & *(ushort *)param_2->Source ^ uVar1) - uVar1;
  return;
}

// Quantize @ 144335380

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_short,FUintNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  *(ushort *)param_2->Target =
       (ushort)(0xffff >> (0x10U - *(char *)(param_2->_padding_ + 0x10) & 0x1f)) &
       *(ushort *)param_2->Source;
  return;
}

// Quantize @ 1443353b0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<int,FIntNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (*(char *)(param_2->_padding_ + 0x10) - 1U & 0x1f);
  *(uint *)param_2->Target = ((uVar1 - 1 | uVar1) & *(uint *)param_2->Source ^ uVar1) - uVar1;
  return;
}

// Quantize @ 1443353f0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_int,FUintNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  *(uint *)param_2->Target =
       0xffffffffU >> (0x20U - *(char *)(param_2->_padding_ + 0x10) & 0x1f) &
       *(uint *)param_2->Source;
  return;
}

// Quantize @ 144335420

void __cdecl
UE::Net::Private::FIntNetSerializerBase<__int64,FIntNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ulonglong uVar1;
  
  uVar1 = 1L << (*(char *)(param_2->_padding_ + 0x10) - 1U & 0x3f);
  *(ulonglong *)param_2->Target =
       ((uVar1 - 1 | uVar1) & *(ulonglong *)param_2->Source ^ uVar1) - uVar1;
  return;
}

// Quantize @ 144335460

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned___int64,FUintNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  *(ulonglong *)param_2->Target =
       0xffffffffffffffffU >> (0x40U - *(char *)(param_2->_padding_ + 0x10) & 0x3f) &
       *(ulonglong *)param_2->Source;
  return;
}

// Serialize @ 14433aad0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<signed_char,FIntNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  bVar1 = *(byte *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x10);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(bVar1 == 0),1), bVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar1,uVar2);
  return;
}

// Serialize @ 14433ab50

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_char,FUintNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  bVar1 = *(byte *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x10);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(bVar1 == 0),1), bVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar1,uVar2);
  return;
}

// Serialize @ 14433abd0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<short,FIntNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ushort uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(ushort *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x10);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)uVar1,uVar2);
  return;
}

// Serialize @ 14433ac50

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_short,FUintNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ushort uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(ushort *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x10);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)uVar1,uVar2);
  return;
}

// Serialize @ 14433acd0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<int,FIntNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(uint *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x10);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,uVar1,uVar2);
  return;
}

// Serialize @ 14433ad50

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_int,FUintNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(uint *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x10);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,uVar1,uVar2);
  return;
}

// Serialize @ 14433add0

void __cdecl
UE::Net::Private::FIntNetSerializerBase<__int64,FIntNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  longlong lVar2;
  uint uVar3;
  
  this = param_1->BitStreamWriter;
  lVar2 = *(longlong *)param_2->Source;
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  if ((0xf < bVar1) && (FNetBitStreamWriter::WriteBits(this,(uint)(lVar2 == 0),1), lVar2 == 0)) {
    return;
  }
  uVar3 = 0x20;
  if (bVar1 < 0x20) {
    uVar3 = (uint)bVar1;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)lVar2,uVar3);
  if (0x20 < bVar1) {
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)lVar2 >> 0x20),bVar1 - 0x20);
  }
  return;
}

// Serialize @ 14433ae70

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned___int64,FUintNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  longlong lVar2;
  uint uVar3;
  
  this = param_1->BitStreamWriter;
  lVar2 = *(longlong *)param_2->Source;
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  if ((0xf < bVar1) && (FNetBitStreamWriter::WriteBits(this,(uint)(lVar2 == 0),1), lVar2 == 0)) {
    return;
  }
  uVar3 = 0x20;
  if (bVar1 < 0x20) {
    uVar3 = (uint)bVar1;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)lVar2,uVar3);
  if (0x20 < bVar1) {
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)lVar2 >> 0x20),bVar1 - 0x20);
  }
  return;
}

// SerializeDelta @ 14433ce00

void __cdecl
UE::Net::Private::FIntNetSerializerBase<signed_char,FIntNetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeIntDelta(param_1->BitStreamWriter,(int)*(char *)param_2->_padding_,
                      (int)*(char *)param_2->Prev,DeltaBitCountTable[uVar2],
                      DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433ce80

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_char,FUintNetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,(uint)*(byte *)param_2->_padding_,
                       (uint)*(byte *)param_2->Prev,DeltaBitCountTable[uVar2],
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433cf00

void __cdecl
UE::Net::Private::FIntNetSerializerBase<short,FIntNetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeIntDelta(param_1->BitStreamWriter,(int)*(short *)param_2->_padding_,
                      (int)*(short *)param_2->Prev,DeltaBitCountTable[uVar2],
                      DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433cf80

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_short,FUintNetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,(uint)*(ushort *)param_2->_padding_,
                       (uint)*(ushort *)param_2->Prev,DeltaBitCountTable[uVar2],
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433d000

void __cdecl
UE::Net::Private::FIntNetSerializerBase<int,FIntNetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeIntDelta(param_1->BitStreamWriter,*(int *)param_2->_padding_,*(int *)param_2->Prev,
                      DeltaBitCountTable[uVar2],DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433d080

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_int,FUintNetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,*(uint *)param_2->_padding_,*(uint *)param_2->Prev,
                       DeltaBitCountTable[uVar2],DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433d100

void __cdecl
UE::Net::Private::FIntNetSerializerBase<__int64,FIntNetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeIntDelta(param_1->BitStreamWriter,*(long64 *)param_2->_padding_,
                      *(long64 *)param_2->Prev,DeltaBitCountTable[uVar2],
                      DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433d180

void __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned___int64,FUintNetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x10);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,*(ulong64 *)param_2->_padding_,
                       *(ulong64 *)param_2->Prev,DeltaBitCountTable[uVar2],
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// Validate @ 14433efc0

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<signed_char,FIntNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  
  bVar2 = *(byte *)(param_2->_padding_ + 0x10);
  if (bVar2 - 1 < 8) {
    uVar1 = (ulonglong)(byte)((char)*(byte *)param_2->Source >> 7 ^ *(byte *)param_2->Source) * 2 +
            1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    return (int)lVar3 + 1U <= (uint)bVar2;
  }
  return false;
}

// Validate @ 14433f010

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_char,FUintNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  
  bVar2 = *(byte *)(param_2->_padding_ + 0x10);
  if (bVar2 - 1 < 8) {
    uVar1 = (ulonglong)*(byte *)param_2->Source * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    return (uint)lVar3 <= (uint)bVar2;
  }
  return false;
}

// Validate @ 14433f050

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<short,FIntNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  
  bVar2 = *(byte *)(param_2->_padding_ + 0x10);
  if (bVar2 - 1 < 0x10) {
    uVar1 = (ulonglong)
            (ushort)((short)*(ushort *)param_2->Source >> 0xf ^ *(ushort *)param_2->Source) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    return (int)lVar3 + 1U <= (uint)bVar2;
  }
  return false;
}

// Validate @ 14433f0a0

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_short,FUintNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  
  bVar2 = *(byte *)(param_2->_padding_ + 0x10);
  if (bVar2 - 1 < 0x10) {
    uVar1 = (ulonglong)*(ushort *)param_2->Source * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    return (uint)lVar3 <= (uint)bVar2;
  }
  return false;
}

// Validate @ 14433f0e0

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<int,FIntNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  
  bVar2 = *(byte *)(param_2->_padding_ + 0x10);
  if (bVar2 - 1 < 0x20) {
    uVar1 = (ulonglong)((int)*(uint *)param_2->Source >> 0x1f ^ *(uint *)param_2->Source) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    return (int)lVar3 + 1U <= (uint)bVar2;
  }
  return false;
}

// Validate @ 14433f120

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned_int,FUintNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  
  bVar2 = *(byte *)(param_2->_padding_ + 0x10);
  if (bVar2 - 1 < 0x20) {
    uVar1 = (ulonglong)*(uint *)param_2->Source * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    return (uint)lVar3 <= (uint)bVar2;
  }
  return false;
}

// Validate @ 14433f160

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<__int64,FIntNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  if (bVar1 - 1 < 0x40) {
    uVar4 = (longlong)*(ulonglong *)param_2->Source >> 0x3f ^ *(ulonglong *)param_2->Source;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar3 = (int)lVar2;
    if (uVar4 == 0) {
      iVar3 = -1;
    }
    return iVar3 + 2U <= (uint)bVar1;
  }
  return false;
}

// Validate @ 14433f1b0

bool __cdecl
UE::Net::Private::FIntNetSerializerBase<unsigned___int64,FUintNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  if (bVar1 - 1 < 0x40) {
    lVar2 = 0x3f;
    bVar4 = *(ulonglong *)param_2->Source != 0;
    if (bVar4) {
      for (; *(ulonglong *)param_2->Source >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar3 = (int)lVar2;
    if (!bVar4) {
      iVar3 = -1;
    }
    return iVar3 + 1U <= (uint)bVar1;
  }
  return false;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 121

// Dequantize @ 1442fe750

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FEnumInt8NetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FName FVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  FVar1 = GNetError_InvalidValue;
  cVar4 = *(char *)(param_2->_padding_ + 0x10);
  cVar3 = cVar4 + *(char *)param_2->Source;
  cVar2 = *(char *)(param_2->_padding_ + 0x11);
  if (cVar3 < cVar2) {
    cVar2 = cVar3;
  }
  if (cVar4 < cVar2) {
    cVar4 = cVar2;
  }
  if (cVar4 != cVar3) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
    return;
  }
  *(char *)param_2->Target = cVar4;
  return;
}

// Dequantize @ 1442fe7d0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::
Dequantize(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FName FVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  FVar1 = GNetError_InvalidValue;
  bVar4 = *(byte *)(param_2->_padding_ + 0x10);
  bVar3 = bVar4 + *(char *)param_2->Source;
  bVar2 = *(byte *)(param_2->_padding_ + 0x11);
  if (bVar3 < bVar2) {
    bVar2 = bVar3;
  }
  if (bVar4 < bVar2) {
    bVar4 = bVar2;
  }
  if (bVar4 != bVar3) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
    return;
  }
  *(byte *)param_2->Target = bVar4;
  return;
}

// Dequantize @ 1442fe850

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FEnumInt16NetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FName FVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  FVar1 = GNetError_InvalidValue;
  sVar4 = *(short *)(param_2->_padding_ + 0x10);
  sVar3 = sVar4 + *(short *)param_2->Source;
  sVar2 = *(short *)(param_2->_padding_ + 0x12);
  if (sVar3 < sVar2) {
    sVar2 = sVar3;
  }
  if (sVar4 < sVar2) {
    sVar4 = sVar2;
  }
  if (sVar4 != sVar3) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
    return;
  }
  *(short *)param_2->Target = sVar4;
  return;
}

// Dequantize @ 1442fe8d0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::
Dequantize(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FName FVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  FVar1 = GNetError_InvalidValue;
  uVar4 = *(ushort *)(param_2->_padding_ + 0x10);
  uVar3 = uVar4 + *(short *)param_2->Source;
  uVar2 = *(ushort *)(param_2->_padding_ + 0x12);
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  if (uVar4 < uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 != uVar3) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
    return;
  }
  *(ushort *)param_2->Target = uVar4;
  return;
}

// Dequantize @ 1442fe950

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FEnumInt32NetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FVar1 = GNetError_InvalidValue;
  iVar4 = *(int *)(param_2->_padding_ + 0x10);
  iVar3 = *(int *)param_2->Source + iVar4;
  iVar2 = *(int *)(param_2->_padding_ + 0x14);
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  if (iVar4 < iVar2) {
    iVar4 = iVar2;
  }
  if (iVar4 != iVar3) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
    return;
  }
  *(int *)param_2->Target = iVar4;
  return;
}

// Dequantize @ 1442fe9c0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::
Dequantize(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FVar1 = GNetError_InvalidValue;
  uVar4 = *(uint *)(param_2->_padding_ + 0x10);
  uVar3 = *(int *)param_2->Source + uVar4;
  uVar2 = *(uint *)(param_2->_padding_ + 0x14);
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  if (uVar4 < uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 != uVar3) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
    return;
  }
  *(uint *)param_2->Target = uVar4;
  return;
}

// Dequantize @ 1442fea30

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FEnumInt64NetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FName FVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FVar1 = GNetError_InvalidValue;
  lVar4 = *(longlong *)(param_2->_padding_ + 0x10);
  lVar2 = *(longlong *)(param_2->_padding_ + 0x18);
  lVar3 = *(longlong *)param_2->Source + lVar4;
  if (lVar3 < lVar2) {
    lVar2 = lVar3;
  }
  if (lVar4 < lVar2) {
    lVar4 = lVar2;
  }
  if (lVar4 != lVar3) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
    return;
  }
  *(longlong *)param_2->Target = lVar4;
  return;
}

// Dequantize @ 1442feaa0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::
Dequantize(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FName FVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  FVar1 = GNetError_InvalidValue;
  uVar4 = *(ulonglong *)(param_2->_padding_ + 0x10);
  uVar2 = *(ulonglong *)(param_2->_padding_ + 0x18);
  uVar3 = *(longlong *)param_2->Source + uVar4;
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  if (uVar4 < uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 != uVar3) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
    return;
  }
  *(ulonglong *)param_2->Target = uVar4;
  return;
}

// Deserialize @ 1442ff1a0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FEnumInt8NetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined1 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x12);
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

// Deserialize @ 1442ff210

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::
Deserialize(FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined1 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x12);
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

// Deserialize @ 1442ff280

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FEnumInt16NetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined2 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined2 *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x14);
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

// Deserialize @ 1442ff2f0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::
Deserialize(FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined2 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined2 *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x14);
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

// Deserialize @ 1442ff360

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FEnumInt32NetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x18);
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

// Deserialize @ 1442ff3d0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::
Deserialize(FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x18);
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

// Deserialize @ 1442ff440

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FEnumInt64NetSerializerConfig>::Deserialize
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
  bVar1 = *(byte *)(param_2->_padding_ + 0x20);
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

// Deserialize @ 1442ff4e0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::
Deserialize(FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  FNetBitStreamReader *this;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = (ulonglong *)param_2->Target;
  this = param_1->BitStreamReader;
  bVar1 = *(byte *)(param_2->_padding_ + 0x20);
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

// DeserializeDelta @ 1442fffe0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FEnumInt8NetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x12);
  if (uVar1 == '\0') {
    *(uchar *)param_2->_padding_ = '\0';
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta<unsigned_char,1>
            (param_1->BitStreamReader,(uchar *)param_2->_padding_,*(uchar *)param_2->Prev,
             FIntNetSerializerBase<unsigned_char,FEnumInt8NetSerializerConfig>::DeltaBitCountTable
             [uVar2],FIntNetSerializerBase<unsigned_char,FEnumInt8NetSerializerConfig>::
                     DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 144300070

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x12);
  if (uVar1 == '\0') {
    *(uchar *)param_2->_padding_ = '\0';
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta<unsigned_char,1>
            (param_1->BitStreamReader,(uchar *)param_2->_padding_,*(uchar *)param_2->Prev,
             FIntNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::DeltaBitCountTable
             [uVar2],FIntNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::
                     DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 144300100

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FEnumInt16NetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x14);
  if (uVar1 == '\0') {
    *(ushort *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta<unsigned_short,1>
            (param_1->BitStreamReader,(ushort *)param_2->_padding_,*(ushort *)param_2->Prev,
             FIntNetSerializerBase<unsigned_short,FEnumInt16NetSerializerConfig>::DeltaBitCountTable
             [uVar2],FIntNetSerializerBase<unsigned_short,FEnumInt16NetSerializerConfig>::
                     DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 144300190

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x14);
  if (uVar1 == '\0') {
    *(ushort *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta<unsigned_short,1>
            (param_1->BitStreamReader,(ushort *)param_2->_padding_,*(ushort *)param_2->Prev,
             FIntNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::
             DeltaBitCountTable[uVar2],
             FIntNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::
             DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 144300220

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FEnumInt32NetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x18);
  if (uVar1 == '\0') {
    *(uint *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)param_2->_padding_,*(uint *)param_2->Prev,
             FIntNetSerializerBase<unsigned_int,FEnumInt32NetSerializerConfig>::DeltaBitCountTable
             [uVar2],FIntNetSerializerBase<unsigned_int,FEnumInt32NetSerializerConfig>::
                     DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 1443002b0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x18);
  if (uVar1 == '\0') {
    *(uint *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)param_2->_padding_,*(uint *)param_2->Prev,
             FIntNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::DeltaBitCountTable
             [uVar2],FIntNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::
                     DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 144300340

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FEnumInt64NetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x20);
  if (uVar1 == '\0') {
    *(ulong64 *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(ulong64 *)param_2->_padding_,*(ulong64 *)param_2->Prev,
             FIntNetSerializerBase<unsigned___int64,FEnumInt64NetSerializerConfig>::
             DeltaBitCountTable[uVar2],
             FIntNetSerializerBase<unsigned___int64,FEnumInt64NetSerializerConfig>::
             DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 1443003d0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x20);
  if (uVar1 == '\0') {
    *(ulong64 *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(ulong64 *)param_2->_padding_,*(ulong64 *)param_2->Prev,
             FIntNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::
             DeltaBitCountTable[uVar2],
             FIntNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::
             DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// IsEqual @ 144308140

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FEnumInt8NetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(char *)param_2->Source0 == *(char *)param_2->Source1;
  }
  cVar3 = *(char *)(param_2->_padding_ + 0x11);
  cVar4 = *(char *)(param_2->_padding_ + 0x10);
  cVar1 = cVar3;
  if (*(char *)param_2->Source0 < cVar3) {
    cVar1 = *(char *)param_2->Source0;
  }
  if (*(char *)param_2->Source1 < cVar3) {
    cVar3 = *(char *)param_2->Source1;
  }
  cVar2 = cVar4;
  if (cVar4 < cVar3) {
    cVar2 = cVar3;
  }
  if (cVar4 < cVar1) {
    cVar4 = cVar1;
  }
  return cVar4 == cVar2;
}

// IsEqual @ 1443081b0

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(char *)param_2->Source0 == *(char *)param_2->Source1;
  }
  bVar3 = *(byte *)(param_2->_padding_ + 0x11);
  bVar4 = *(byte *)(param_2->_padding_ + 0x10);
  bVar1 = bVar3;
  if (*(byte *)param_2->Source0 < bVar3) {
    bVar1 = *(byte *)param_2->Source0;
  }
  if (*(byte *)param_2->Source1 < bVar3) {
    bVar3 = *(byte *)param_2->Source1;
  }
  bVar2 = bVar4;
  if (bVar4 < bVar3) {
    bVar2 = bVar3;
  }
  if (bVar4 < bVar1) {
    bVar4 = bVar1;
  }
  return bVar4 == bVar2;
}

// IsEqual @ 144308220

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FEnumInt16NetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(short *)param_2->Source0 == *(short *)param_2->Source1;
  }
  sVar2 = *(short *)(param_2->_padding_ + 0x12);
  sVar4 = *(short *)(param_2->_padding_ + 0x10);
  sVar3 = sVar2;
  if (*(short *)param_2->Source0 < sVar2) {
    sVar3 = *(short *)param_2->Source0;
  }
  if (*(short *)param_2->Source1 < sVar2) {
    sVar2 = *(short *)param_2->Source1;
  }
  sVar1 = sVar4;
  if (sVar4 < sVar2) {
    sVar1 = sVar2;
  }
  if (sVar4 < sVar3) {
    sVar4 = sVar3;
  }
  return sVar4 == sVar1;
}

// IsEqual @ 144308290

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(short *)param_2->Source0 == *(short *)param_2->Source1;
  }
  uVar2 = *(ushort *)(param_2->_padding_ + 0x12);
  uVar4 = *(ushort *)(param_2->_padding_ + 0x10);
  uVar3 = uVar2;
  if (*(ushort *)param_2->Source0 < uVar2) {
    uVar3 = *(ushort *)param_2->Source0;
  }
  if (*(ushort *)param_2->Source1 < uVar2) {
    uVar2 = *(ushort *)param_2->Source1;
  }
  uVar1 = uVar4;
  if (uVar4 < uVar2) {
    uVar1 = uVar2;
  }
  if (uVar4 < uVar3) {
    uVar4 = uVar3;
  }
  return uVar4 == uVar1;
}

// IsEqual @ 144308300

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FEnumInt32NetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(int *)param_2->Source0 == *(int *)param_2->Source1;
  }
  iVar1 = *(int *)param_2->Source0;
  iVar2 = *(int *)(param_2->_padding_ + 0x14);
  iVar4 = *(int *)(param_2->_padding_ + 0x10);
  iVar3 = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar1;
  }
  if (*(int *)param_2->Source1 < iVar2) {
    iVar2 = *(int *)param_2->Source1;
  }
  iVar1 = iVar4;
  if (iVar4 < iVar2) {
    iVar1 = iVar2;
  }
  if (iVar4 < iVar3) {
    iVar4 = iVar3;
  }
  return iVar4 == iVar1;
}

// IsEqual @ 144308360

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(uint *)param_2->Source0 == *(uint *)param_2->Source1;
  }
  uVar1 = *(uint *)param_2->Source0;
  uVar2 = *(uint *)(param_2->_padding_ + 0x14);
  uVar4 = *(uint *)(param_2->_padding_ + 0x10);
  uVar3 = uVar2;
  if (uVar1 < uVar2) {
    uVar3 = uVar1;
  }
  if (*(uint *)param_2->Source1 < uVar2) {
    uVar2 = *(uint *)param_2->Source1;
  }
  uVar1 = uVar4;
  if (uVar4 < uVar2) {
    uVar1 = uVar2;
  }
  if (uVar4 < uVar3) {
    uVar4 = uVar3;
  }
  return uVar4 == uVar1;
}

// IsEqual @ 1443083c0

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FEnumInt64NetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(longlong *)param_2->Source0 == *(longlong *)param_2->Source1;
  }
  lVar1 = *(longlong *)param_2->Source0;
  lVar2 = *(longlong *)(param_2->_padding_ + 0x18);
  lVar4 = *(longlong *)(param_2->_padding_ + 0x10);
  lVar3 = lVar2;
  if (lVar1 < lVar2) {
    lVar3 = lVar1;
  }
  if (*(longlong *)param_2->Source1 < lVar2) {
    lVar2 = *(longlong *)param_2->Source1;
  }
  lVar1 = lVar4;
  if (lVar4 < lVar2) {
    lVar1 = lVar2;
  }
  if (lVar4 < lVar3) {
    lVar4 = lVar3;
  }
  return lVar4 == lVar1;
}

// IsEqual @ 144308420

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::
IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(ulonglong *)param_2->Source0 == *(ulonglong *)param_2->Source1;
  }
  uVar1 = *(ulonglong *)param_2->Source0;
  uVar2 = *(ulonglong *)(param_2->_padding_ + 0x18);
  uVar4 = *(ulonglong *)(param_2->_padding_ + 0x10);
  uVar3 = uVar2;
  if (uVar1 < uVar2) {
    uVar3 = uVar1;
  }
  if (*(ulonglong *)param_2->Source1 < uVar2) {
    uVar2 = *(ulonglong *)param_2->Source1;
  }
  uVar1 = uVar4;
  if (uVar4 < uVar2) {
    uVar1 = uVar2;
  }
  if (uVar4 < uVar3) {
    uVar4 = uVar3;
  }
  return uVar4 == uVar1;
}

// Quantize @ 14430c5c0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FEnumInt8NetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = *(char *)(param_2->_padding_ + 0x11);
  cVar1 = *(char *)(param_2->_padding_ + 0x10);
  if (*(char *)param_2->Source < cVar2) {
    cVar2 = *(char *)param_2->Source;
  }
  cVar3 = cVar1;
  if (cVar1 < cVar2) {
    cVar3 = cVar2;
  }
  *(char *)param_2->Target = cVar3 - cVar1;
  return;
}

// Quantize @ 14430c600

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = *(byte *)(param_2->_padding_ + 0x11);
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  if (*(byte *)param_2->Source < bVar2) {
    bVar2 = *(byte *)param_2->Source;
  }
  bVar3 = bVar1;
  if (bVar1 < bVar2) {
    bVar3 = bVar2;
  }
  *(byte *)param_2->Target = bVar3 - bVar1;
  return;
}

// Quantize @ 14430c640

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FEnumInt16NetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar2 = *(short *)(param_2->_padding_ + 0x12);
  sVar1 = *(short *)(param_2->_padding_ + 0x10);
  if (*(short *)param_2->Source < sVar2) {
    sVar2 = *(short *)param_2->Source;
  }
  sVar3 = sVar1;
  if (sVar1 < sVar2) {
    sVar3 = sVar2;
  }
  *(short *)param_2->Target = sVar3 - sVar1;
  return;
}

// Quantize @ 14430c680

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::
Quantize(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *(ushort *)(param_2->_padding_ + 0x12);
  uVar1 = *(ushort *)(param_2->_padding_ + 0x10);
  if (*(ushort *)param_2->Source < uVar2) {
    uVar2 = *(ushort *)param_2->Source;
  }
  uVar3 = uVar1;
  if (uVar1 < uVar2) {
    uVar3 = uVar2;
  }
  *(ushort *)param_2->Target = uVar3 - uVar1;
  return;
}

// Quantize @ 14430c6c0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FEnumInt32NetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2->_padding_ + 0x14);
  iVar1 = *(int *)(param_2->_padding_ + 0x10);
  if (*(int *)param_2->Source < iVar3) {
    iVar3 = *(int *)param_2->Source;
  }
  iVar2 = iVar1;
  if (iVar1 < iVar3) {
    iVar2 = iVar3;
  }
  *(int *)param_2->Target = iVar2 - iVar1;
  return;
}

// Quantize @ 14430c700

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2->_padding_ + 0x14);
  uVar1 = *(uint *)(param_2->_padding_ + 0x10);
  if (*(uint *)param_2->Source < uVar3) {
    uVar3 = *(uint *)param_2->Source;
  }
  uVar2 = uVar1;
  if (uVar1 < uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)param_2->Target = uVar2 - uVar1;
  return;
}

// Quantize @ 14430c740

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FEnumInt64NetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2->_padding_ + 0x10);
  lVar2 = *(longlong *)(param_2->_padding_ + 0x18);
  if (*(longlong *)param_2->Source < lVar2) {
    lVar2 = *(longlong *)param_2->Source;
  }
  lVar3 = lVar1;
  if (lVar1 < lVar2) {
    lVar3 = lVar2;
  }
  *(longlong *)param_2->Target = lVar3 - lVar1;
  return;
}

// Quantize @ 14430c780

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::
Quantize(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_2->_padding_ + 0x10);
  uVar2 = *(ulonglong *)(param_2->_padding_ + 0x18);
  if (*(ulonglong *)param_2->Source < uVar2) {
    uVar2 = *(ulonglong *)param_2->Source;
  }
  uVar3 = uVar1;
  if (uVar1 < uVar2) {
    uVar3 = uVar2;
  }
  *(ulonglong *)param_2->Target = uVar3 - uVar1;
  return;
}

// Serialize @ 144310140

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FEnumInt8NetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  bVar1 = *(byte *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x12);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(bVar1 == 0),1), bVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar1,uVar2);
  return;
}

// Serialize @ 1443101c0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  bVar1 = *(byte *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x12);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(bVar1 == 0),1), bVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar1,uVar2);
  return;
}

// Serialize @ 144310240

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FEnumInt16NetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ushort uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(ushort *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x14);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)uVar1,uVar2);
  return;
}

// Serialize @ 1443102c0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::
Serialize(FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ushort uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(ushort *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x14);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)uVar1,uVar2);
  return;
}

// Serialize @ 144310340

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FEnumInt32NetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(uint *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x18);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,uVar1,uVar2);
  return;
}

// Serialize @ 1443103c0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(uint *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x18);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,uVar1,uVar2);
  return;
}

// Serialize @ 144310440

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FEnumInt64NetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  longlong lVar2;
  uint uVar3;
  
  this = param_1->BitStreamWriter;
  lVar2 = *(longlong *)param_2->Source;
  bVar1 = *(byte *)(param_2->_padding_ + 0x20);
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

// Serialize @ 1443104e0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::
Serialize(FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  longlong lVar2;
  uint uVar3;
  
  this = param_1->BitStreamWriter;
  lVar2 = *(longlong *)param_2->Source;
  bVar1 = *(byte *)(param_2->_padding_ + 0x20);
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

// SerializeDelta @ 144310d20

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FEnumInt8NetSerializerConfig>::
SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x12);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDeltaImpl<unsigned_int>
              (param_1->BitStreamWriter,(uint)*(byte *)param_2->_padding_,
               (uint)*(byte *)param_2->Prev,
               FIntNetSerializerBase<unsigned_char,FEnumInt8NetSerializerConfig>::DeltaBitCountTable
               [uVar2],FIntNetSerializerBase<unsigned_char,FEnumInt8NetSerializerConfig>::
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 144310da0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::
SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x12);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDeltaImpl<unsigned_int>
              (param_1->BitStreamWriter,(uint)*(byte *)param_2->_padding_,
               (uint)*(byte *)param_2->Prev,
               FIntNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::
               DeltaBitCountTable[uVar2],
               FIntNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::
               DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 144310e20

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FEnumInt16NetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x14);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDeltaImpl<unsigned_int>
              (param_1->BitStreamWriter,(uint)*(ushort *)param_2->_padding_,
               (uint)*(ushort *)param_2->Prev,
               FIntNetSerializerBase<unsigned_short,FEnumInt16NetSerializerConfig>::
               DeltaBitCountTable[uVar2],
               FIntNetSerializerBase<unsigned_short,FEnumInt16NetSerializerConfig>::
               DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 144310ea0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::
SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x14);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDeltaImpl<unsigned_int>
              (param_1->BitStreamWriter,(uint)*(ushort *)param_2->_padding_,
               (uint)*(ushort *)param_2->Prev,
               FIntNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::
               DeltaBitCountTable[uVar2],
               FIntNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::
               DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 144310f20

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FEnumInt32NetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x18);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDeltaImpl<unsigned_int>
              (param_1->BitStreamWriter,*(uint *)param_2->_padding_,*(uint *)param_2->Prev,
               FIntNetSerializerBase<unsigned_int,FEnumInt32NetSerializerConfig>::DeltaBitCountTable
               [uVar2],FIntNetSerializerBase<unsigned_int,FEnumInt32NetSerializerConfig>::
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 144310fa0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::
SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x18);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDeltaImpl<unsigned_int>
              (param_1->BitStreamWriter,*(uint *)param_2->_padding_,*(uint *)param_2->Prev,
               FIntNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::
               DeltaBitCountTable[uVar2],
               FIntNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::
               DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 144311020

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FEnumInt64NetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x20);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDeltaImpl<unsigned___int64>
              (param_1->BitStreamWriter,*(ulong64 *)param_2->_padding_,*(ulong64 *)param_2->Prev,
               FIntNetSerializerBase<unsigned___int64,FEnumInt64NetSerializerConfig>::
               DeltaBitCountTable[uVar2],
               FIntNetSerializerBase<unsigned___int64,FEnumInt64NetSerializerConfig>::
               DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 1443110a0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::
SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x20);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDeltaImpl<unsigned___int64>
              (param_1->BitStreamWriter,*(ulong64 *)param_2->_padding_,*(ulong64 *)param_2->Prev,
               FIntNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::
               DeltaBitCountTable[uVar2],
               FIntNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::
               DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// Dequantize @ 144329810

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FInt8RangeNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = *(char *)(param_2->_padding_ + 0x10);
  cVar2 = cVar3 + *(char *)param_2->Source;
  cVar1 = *(char *)(param_2->_padding_ + 0x11);
  if (cVar2 < cVar1) {
    cVar1 = cVar2;
  }
  if (cVar3 < cVar1) {
    cVar3 = cVar1;
  }
  if (cVar3 != cVar2) {
    FNetSerializationContext::SetError(param_1,GNetError_InvalidValue,true);
    return;
  }
  *(char *)param_2->Target = cVar3;
  return;
}

// Dequantize @ 144329860

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::
Dequantize(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_2->_padding_ + 0x10);
  bVar2 = bVar3 + *(char *)param_2->Source;
  bVar1 = *(byte *)(param_2->_padding_ + 0x11);
  if (bVar2 < bVar1) {
    bVar1 = bVar2;
  }
  if (bVar3 < bVar1) {
    bVar3 = bVar1;
  }
  if (bVar3 != bVar2) {
    FNetSerializationContext::SetError(param_1,GNetError_InvalidValue,true);
    return;
  }
  *(byte *)param_2->Target = bVar3;
  return;
}

// Dequantize @ 1443298b0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FInt16RangeNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = *(short *)(param_2->_padding_ + 0x10);
  sVar2 = sVar3 + *(short *)param_2->Source;
  sVar1 = *(short *)(param_2->_padding_ + 0x12);
  if (sVar2 < sVar1) {
    sVar1 = sVar2;
  }
  if (sVar3 < sVar1) {
    sVar3 = sVar1;
  }
  if (sVar3 != sVar2) {
    FNetSerializationContext::SetError(param_1,GNetError_InvalidValue,true);
    return;
  }
  *(short *)param_2->Target = sVar3;
  return;
}

// Dequantize @ 144329900

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
Dequantize(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_2->_padding_ + 0x10);
  uVar2 = uVar3 + *(short *)param_2->Source;
  uVar1 = *(ushort *)(param_2->_padding_ + 0x12);
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  if (uVar3 != uVar2) {
    FNetSerializationContext::SetError(param_1,GNetError_InvalidValue,true);
    return;
  }
  *(ushort *)param_2->Target = uVar3;
  return;
}

// Dequantize @ 144329950

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FInt32RangeNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2->_padding_ + 0x10);
  iVar2 = *(int *)param_2->Source + iVar3;
  iVar1 = *(int *)(param_2->_padding_ + 0x14);
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  if (iVar3 < iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 != iVar2) {
    FNetSerializationContext::SetError(param_1,GNetError_InvalidValue,true);
    return;
  }
  *(int *)param_2->Target = iVar3;
  return;
}

// Dequantize @ 1443299a0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::
Dequantize(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2->_padding_ + 0x10);
  uVar2 = *(int *)param_2->Source + uVar3;
  uVar1 = *(uint *)(param_2->_padding_ + 0x14);
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  if (uVar3 != uVar2) {
    FNetSerializationContext::SetError(param_1,GNetError_InvalidValue,true);
    return;
  }
  *(uint *)param_2->Target = uVar3;
  return;
}

// Dequantize @ 1443299f0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FInt64RangeNetSerializerConfig>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2->_padding_ + 0x10);
  lVar1 = *(longlong *)(param_2->_padding_ + 0x18);
  lVar2 = *(longlong *)param_2->Source + lVar3;
  if (lVar2 < lVar1) {
    lVar1 = lVar2;
  }
  if (lVar3 < lVar1) {
    lVar3 = lVar1;
  }
  if (lVar3 != lVar2) {
    FNetSerializationContext::SetError(param_1,GNetError_InvalidValue,true);
    return;
  }
  *(longlong *)param_2->Target = lVar3;
  return;
}

// Dequantize @ 144329a40

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
Dequantize(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_2->_padding_ + 0x10);
  uVar1 = *(ulonglong *)(param_2->_padding_ + 0x18);
  uVar2 = *(longlong *)param_2->Source + uVar3;
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  if (uVar3 != uVar2) {
    FNetSerializationContext::SetError(param_1,GNetError_InvalidValue,true);
    return;
  }
  *(ulonglong *)param_2->Target = uVar3;
  return;
}

// Deserialize @ 14432ba40

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FInt8RangeNetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined1 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x12);
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

// Deserialize @ 14432bab0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::
Deserialize(FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined1 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x12);
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

// Deserialize @ 14432bb20

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FInt16RangeNetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined2 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined2 *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x14);
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

// Deserialize @ 14432bb90

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
Deserialize(FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined2 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined2 *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x14);
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

// Deserialize @ 14432bc00

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FInt32RangeNetSerializerConfig>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x18);
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

// Deserialize @ 14432bc70

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::
Deserialize(FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x18);
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

// Deserialize @ 14432bce0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FInt64RangeNetSerializerConfig>::Deserialize
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
  bVar1 = *(byte *)(param_2->_padding_ + 0x20);
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

// Deserialize @ 14432bd80

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
Deserialize(FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  FNetBitStreamReader *this;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = (ulonglong *)param_2->Target;
  this = param_1->BitStreamReader;
  bVar1 = *(byte *)(param_2->_padding_ + 0x20);
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

// DeserializeDelta @ 14432e1d0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FInt8RangeNetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_res10 [24];
  
  puVar2 = (undefined1 *)param_2->_padding_;
  uVar1 = *(uchar *)(param_2->_padding_ + 0x12);
  if (uVar1 == '\0') {
    *puVar2 = 0;
    return;
  }
  uVar3 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)local_res10,(uint)*(byte *)param_2->Prev,
             FIntNetSerializerBase<unsigned_char,FInt8RangeNetSerializerConfig>::DeltaBitCountTable
             [uVar3],FIntNetSerializerBase<unsigned_char,FInt8RangeNetSerializerConfig>::
                     DeltaBitCountTableEntryCount[uVar3],uVar1);
  *puVar2 = local_res10[0];
  return;
}

// DeserializeDelta @ 14432e260

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_res10 [24];
  
  puVar2 = (undefined1 *)param_2->_padding_;
  uVar1 = *(uchar *)(param_2->_padding_ + 0x12);
  if (uVar1 == '\0') {
    *puVar2 = 0;
    return;
  }
  uVar3 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)local_res10,(uint)*(byte *)param_2->Prev,
             FIntNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::DeltaBitCountTable
             [uVar3],FIntNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::
                     DeltaBitCountTableEntryCount[uVar3],uVar1);
  *puVar2 = local_res10[0];
  return;
}

// DeserializeDelta @ 14432e2f0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FInt16RangeNetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 local_res10 [12];
  
  puVar2 = (undefined2 *)param_2->_padding_;
  uVar1 = *(uchar *)(param_2->_padding_ + 0x14);
  if (uVar1 == '\0') {
    *puVar2 = 0;
    return;
  }
  uVar3 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)local_res10,(uint)*(ushort *)param_2->Prev,
             FIntNetSerializerBase<unsigned_short,FInt16RangeNetSerializerConfig>::
             DeltaBitCountTable[uVar3],
             FIntNetSerializerBase<unsigned_short,FInt16RangeNetSerializerConfig>::
             DeltaBitCountTableEntryCount[uVar3],uVar1);
  *puVar2 = local_res10[0];
  return;
}

// DeserializeDelta @ 14432e380

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 local_res10 [12];
  
  puVar2 = (undefined2 *)param_2->_padding_;
  uVar1 = *(uchar *)(param_2->_padding_ + 0x14);
  if (uVar1 == '\0') {
    *puVar2 = 0;
    return;
  }
  uVar3 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)local_res10,(uint)*(ushort *)param_2->Prev,
             FIntNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
             DeltaBitCountTable[uVar3],
             FIntNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
             DeltaBitCountTableEntryCount[uVar3],uVar1);
  *puVar2 = local_res10[0];
  return;
}

// DeserializeDelta @ 14432e410

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FInt32RangeNetSerializerConfig>::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x18);
  if (uVar1 == '\0') {
    *(uint *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)param_2->_padding_,*(uint *)param_2->Prev,
             FIntNetSerializerBase<unsigned_int,FInt32RangeNetSerializerConfig>::DeltaBitCountTable
             [uVar2],FIntNetSerializerBase<unsigned_int,FInt32RangeNetSerializerConfig>::
                     DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 14432e4a0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x18);
  if (uVar1 == '\0') {
    *(uint *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)param_2->_padding_,*(uint *)param_2->Prev,
             FIntNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::DeltaBitCountTable
             [uVar2],FIntNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::
                     DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 14432e530

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FInt64RangeNetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x20);
  if (uVar1 == '\0') {
    *(ulong64 *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(ulong64 *)param_2->_padding_,*(ulong64 *)param_2->Prev,
             FIntNetSerializerBase<unsigned___int64,FInt64RangeNetSerializerConfig>::
             DeltaBitCountTable[uVar2],
             FIntNetSerializerBase<unsigned___int64,FInt64RangeNetSerializerConfig>::
             DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// DeserializeDelta @ 14432e5c0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
DeserializeDelta(FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x20);
  if (uVar1 == '\0') {
    *(ulong64 *)param_2->_padding_ = 0;
    return;
  }
  uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
  DeserializeUintDelta
            (param_1->BitStreamReader,(ulong64 *)param_2->_padding_,*(ulong64 *)param_2->Prev,
             FIntNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
             DeltaBitCountTable[uVar2],
             FIntNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
             DeltaBitCountTableEntryCount[uVar2],uVar1);
  return;
}

// IsEqual @ 144333180

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FInt8RangeNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(char *)param_2->Source0 == *(char *)param_2->Source1;
  }
  cVar3 = *(char *)(param_2->_padding_ + 0x11);
  cVar4 = *(char *)(param_2->_padding_ + 0x10);
  cVar1 = cVar3;
  if (*(char *)param_2->Source0 < cVar3) {
    cVar1 = *(char *)param_2->Source0;
  }
  if (*(char *)param_2->Source1 < cVar3) {
    cVar3 = *(char *)param_2->Source1;
  }
  cVar2 = cVar4;
  if (cVar4 < cVar3) {
    cVar2 = cVar3;
  }
  if (cVar4 < cVar1) {
    cVar4 = cVar1;
  }
  return cVar4 == cVar2;
}

// IsEqual @ 1443331f0

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(char *)param_2->Source0 == *(char *)param_2->Source1;
  }
  bVar3 = *(byte *)(param_2->_padding_ + 0x11);
  bVar4 = *(byte *)(param_2->_padding_ + 0x10);
  bVar1 = bVar3;
  if (*(byte *)param_2->Source0 < bVar3) {
    bVar1 = *(byte *)param_2->Source0;
  }
  if (*(byte *)param_2->Source1 < bVar3) {
    bVar3 = *(byte *)param_2->Source1;
  }
  bVar2 = bVar4;
  if (bVar4 < bVar3) {
    bVar2 = bVar3;
  }
  if (bVar4 < bVar1) {
    bVar4 = bVar1;
  }
  return bVar4 == bVar2;
}

// IsEqual @ 144333260

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FInt16RangeNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(short *)param_2->Source0 == *(short *)param_2->Source1;
  }
  sVar2 = *(short *)(param_2->_padding_ + 0x12);
  sVar4 = *(short *)(param_2->_padding_ + 0x10);
  sVar3 = sVar2;
  if (*(short *)param_2->Source0 < sVar2) {
    sVar3 = *(short *)param_2->Source0;
  }
  if (*(short *)param_2->Source1 < sVar2) {
    sVar2 = *(short *)param_2->Source1;
  }
  sVar1 = sVar4;
  if (sVar4 < sVar2) {
    sVar1 = sVar2;
  }
  if (sVar4 < sVar3) {
    sVar4 = sVar3;
  }
  return sVar4 == sVar1;
}

// IsEqual @ 1443332d0

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(short *)param_2->Source0 == *(short *)param_2->Source1;
  }
  uVar2 = *(ushort *)(param_2->_padding_ + 0x12);
  uVar4 = *(ushort *)(param_2->_padding_ + 0x10);
  uVar3 = uVar2;
  if (*(ushort *)param_2->Source0 < uVar2) {
    uVar3 = *(ushort *)param_2->Source0;
  }
  if (*(ushort *)param_2->Source1 < uVar2) {
    uVar2 = *(ushort *)param_2->Source1;
  }
  uVar1 = uVar4;
  if (uVar4 < uVar2) {
    uVar1 = uVar2;
  }
  if (uVar4 < uVar3) {
    uVar4 = uVar3;
  }
  return uVar4 == uVar1;
}

// IsEqual @ 144333340

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FInt32RangeNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(int *)param_2->Source0 == *(int *)param_2->Source1;
  }
  iVar1 = *(int *)param_2->Source0;
  iVar2 = *(int *)(param_2->_padding_ + 0x14);
  iVar4 = *(int *)(param_2->_padding_ + 0x10);
  iVar3 = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar1;
  }
  if (*(int *)param_2->Source1 < iVar2) {
    iVar2 = *(int *)param_2->Source1;
  }
  iVar1 = iVar4;
  if (iVar4 < iVar2) {
    iVar1 = iVar2;
  }
  if (iVar4 < iVar3) {
    iVar4 = iVar3;
  }
  return iVar4 == iVar1;
}

// IsEqual @ 1443333a0

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(uint *)param_2->Source0 == *(uint *)param_2->Source1;
  }
  uVar1 = *(uint *)param_2->Source0;
  uVar2 = *(uint *)(param_2->_padding_ + 0x14);
  uVar4 = *(uint *)(param_2->_padding_ + 0x10);
  uVar3 = uVar2;
  if (uVar1 < uVar2) {
    uVar3 = uVar1;
  }
  if (*(uint *)param_2->Source1 < uVar2) {
    uVar2 = *(uint *)param_2->Source1;
  }
  uVar1 = uVar4;
  if (uVar4 < uVar2) {
    uVar1 = uVar2;
  }
  if (uVar4 < uVar3) {
    uVar4 = uVar3;
  }
  return uVar4 == uVar1;
}

// IsEqual @ 144333400

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FInt64RangeNetSerializerConfig>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(longlong *)param_2->Source0 == *(longlong *)param_2->Source1;
  }
  lVar1 = *(longlong *)param_2->Source0;
  lVar2 = *(longlong *)(param_2->_padding_ + 0x18);
  lVar4 = *(longlong *)(param_2->_padding_ + 0x10);
  lVar3 = lVar2;
  if (lVar1 < lVar2) {
    lVar3 = lVar1;
  }
  if (*(longlong *)param_2->Source1 < lVar2) {
    lVar2 = *(longlong *)param_2->Source1;
  }
  lVar1 = lVar4;
  if (lVar4 < lVar2) {
    lVar1 = lVar2;
  }
  if (lVar4 < lVar3) {
    lVar4 = lVar3;
  }
  return lVar4 == lVar1;
}

// IsEqual @ 144333460

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(ulonglong *)param_2->Source0 == *(ulonglong *)param_2->Source1;
  }
  uVar1 = *(ulonglong *)param_2->Source0;
  uVar2 = *(ulonglong *)(param_2->_padding_ + 0x18);
  uVar4 = *(ulonglong *)(param_2->_padding_ + 0x10);
  uVar3 = uVar2;
  if (uVar1 < uVar2) {
    uVar3 = uVar1;
  }
  if (*(ulonglong *)param_2->Source1 < uVar2) {
    uVar2 = *(ulonglong *)param_2->Source1;
  }
  uVar1 = uVar4;
  if (uVar4 < uVar2) {
    uVar1 = uVar2;
  }
  if (uVar4 < uVar3) {
    uVar4 = uVar3;
  }
  return uVar4 == uVar1;
}

// Quantize @ 144335490

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FInt8RangeNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = *(char *)(param_2->_padding_ + 0x11);
  cVar1 = *(char *)(param_2->_padding_ + 0x10);
  if (*(char *)param_2->Source < cVar2) {
    cVar2 = *(char *)param_2->Source;
  }
  cVar3 = cVar1;
  if (cVar1 < cVar2) {
    cVar3 = cVar2;
  }
  *(char *)param_2->Target = cVar3 - cVar1;
  return;
}

// Quantize @ 1443354d0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = *(byte *)(param_2->_padding_ + 0x11);
  bVar1 = *(byte *)(param_2->_padding_ + 0x10);
  if (*(byte *)param_2->Source < bVar2) {
    bVar2 = *(byte *)param_2->Source;
  }
  bVar3 = bVar1;
  if (bVar1 < bVar2) {
    bVar3 = bVar2;
  }
  *(byte *)param_2->Target = bVar3 - bVar1;
  return;
}

// Quantize @ 144335510

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FInt16RangeNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar2 = *(short *)(param_2->_padding_ + 0x12);
  sVar1 = *(short *)(param_2->_padding_ + 0x10);
  if (*(short *)param_2->Source < sVar2) {
    sVar2 = *(short *)param_2->Source;
  }
  sVar3 = sVar1;
  if (sVar1 < sVar2) {
    sVar3 = sVar2;
  }
  *(short *)param_2->Target = sVar3 - sVar1;
  return;
}

// Quantize @ 144335550

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
Quantize(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *(ushort *)(param_2->_padding_ + 0x12);
  uVar1 = *(ushort *)(param_2->_padding_ + 0x10);
  if (*(ushort *)param_2->Source < uVar2) {
    uVar2 = *(ushort *)param_2->Source;
  }
  uVar3 = uVar1;
  if (uVar1 < uVar2) {
    uVar3 = uVar2;
  }
  *(ushort *)param_2->Target = uVar3 - uVar1;
  return;
}

// Quantize @ 144335590

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FInt32RangeNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2->_padding_ + 0x14);
  iVar1 = *(int *)(param_2->_padding_ + 0x10);
  if (*(int *)param_2->Source < iVar3) {
    iVar3 = *(int *)param_2->Source;
  }
  iVar2 = iVar1;
  if (iVar1 < iVar3) {
    iVar2 = iVar3;
  }
  *(int *)param_2->Target = iVar2 - iVar1;
  return;
}

// Quantize @ 1443355d0

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2->_padding_ + 0x14);
  uVar1 = *(uint *)(param_2->_padding_ + 0x10);
  if (*(uint *)param_2->Source < uVar3) {
    uVar3 = *(uint *)param_2->Source;
  }
  uVar2 = uVar1;
  if (uVar1 < uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)param_2->Target = uVar2 - uVar1;
  return;
}

// Quantize @ 144335610

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FInt64RangeNetSerializerConfig>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2->_padding_ + 0x10);
  lVar2 = *(longlong *)(param_2->_padding_ + 0x18);
  if (*(longlong *)param_2->Source < lVar2) {
    lVar2 = *(longlong *)param_2->Source;
  }
  lVar3 = lVar1;
  if (lVar1 < lVar2) {
    lVar3 = lVar2;
  }
  *(longlong *)param_2->Target = lVar3 - lVar1;
  return;
}

// Quantize @ 144335650

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
Quantize(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_2->_padding_ + 0x10);
  uVar2 = *(ulonglong *)(param_2->_padding_ + 0x18);
  if (*(ulonglong *)param_2->Source < uVar2) {
    uVar2 = *(ulonglong *)param_2->Source;
  }
  uVar3 = uVar1;
  if (uVar1 < uVar2) {
    uVar3 = uVar2;
  }
  *(ulonglong *)param_2->Target = uVar3 - uVar1;
  return;
}

// Serialize @ 14433af10

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FInt8RangeNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  bVar1 = *(byte *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x12);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(bVar1 == 0),1), bVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar1,uVar2);
  return;
}

// Serialize @ 14433af90

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FNetRoleNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  bVar1 = *(byte *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x1a);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(bVar1 == 0),1), bVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar1,uVar2);
  return;
}

// Serialize @ 14433b010

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::
Serialize(FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  bVar1 = *(byte *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x12);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(bVar1 == 0),1), bVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar1,uVar2);
  return;
}

// Serialize @ 14433b090

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FInt16RangeNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ushort uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(ushort *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x14);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)uVar1,uVar2);
  return;
}

// Serialize @ 14433b110

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
Serialize(FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ushort uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(ushort *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x14);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)uVar1,uVar2);
  return;
}

// Serialize @ 14433b190

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FInt32RangeNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(uint *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x18);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,uVar1,uVar2);
  return;
}

// Serialize @ 14433b210

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::
Serialize(FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint uVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(uint *)param_2->Source;
  uVar2 = (uint)*(byte *)(param_2->_padding_ + 0x18);
  if ((0xf < uVar2) && (FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 == 0),1), uVar1 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,uVar1,uVar2);
  return;
}

// Serialize @ 14433b290

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FInt64RangeNetSerializerConfig>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  longlong lVar2;
  uint uVar3;
  
  this = param_1->BitStreamWriter;
  lVar2 = *(longlong *)param_2->Source;
  bVar1 = *(byte *)(param_2->_padding_ + 0x20);
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

// Serialize @ 14433b330

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
Serialize(FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  longlong lVar2;
  uint uVar3;
  
  this = param_1->BitStreamWriter;
  lVar2 = *(longlong *)param_2->Source;
  bVar1 = *(byte *)(param_2->_padding_ + 0x20);
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

// SerializeDelta @ 14433d200

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FInt8RangeNetSerializerConfig>::
SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x12);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,(uint)*(byte *)param_2->_padding_,
                       (uint)*(byte *)param_2->Prev,
                       FIntNetSerializerBase<unsigned_char,FInt8RangeNetSerializerConfig>::
                       DeltaBitCountTable[uVar2],
                       FIntNetSerializerBase<unsigned_char,FInt8RangeNetSerializerConfig>::
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433d280

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::
SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x12);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,(uint)*(byte *)param_2->_padding_,
                       (uint)*(byte *)param_2->Prev,
                       FIntNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::
                       DeltaBitCountTable[uVar2],
                       FIntNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433d300

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FInt16RangeNetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x14);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,(uint)*(ushort *)param_2->_padding_,
                       (uint)*(ushort *)param_2->Prev,
                       FIntNetSerializerBase<unsigned_short,FInt16RangeNetSerializerConfig>::
                       DeltaBitCountTable[uVar2],
                       FIntNetSerializerBase<unsigned_short,FInt16RangeNetSerializerConfig>::
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433d380

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x14);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,(uint)*(ushort *)param_2->_padding_,
                       (uint)*(ushort *)param_2->Prev,
                       FIntNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
                       DeltaBitCountTable[uVar2],
                       FIntNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433d400

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FInt32RangeNetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x18);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,*(uint *)param_2->_padding_,*(uint *)param_2->Prev,
                       FIntNetSerializerBase<unsigned_int,FInt32RangeNetSerializerConfig>::
                       DeltaBitCountTable[uVar2],
                       FIntNetSerializerBase<unsigned_int,FInt32RangeNetSerializerConfig>::
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433d480

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::
SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x18);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,*(uint *)param_2->_padding_,*(uint *)param_2->Prev,
                       FIntNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::
                       DeltaBitCountTable[uVar2],
                       FIntNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433d500

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FInt64RangeNetSerializerConfig>::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x20);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,*(ulong64 *)param_2->_padding_,
                       *(ulong64 *)param_2->Prev,
                       FIntNetSerializerBase<unsigned___int64,FInt64RangeNetSerializerConfig>::
                       DeltaBitCountTable[uVar2],
                       FIntNetSerializerBase<unsigned___int64,FInt64RangeNetSerializerConfig>::
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// SerializeDelta @ 14433d580

void __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
SerializeDelta(FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *(uchar *)(param_2->_padding_ + 0x20);
  if (uVar1 != '\0') {
    uVar2 = (uint)(0xffa4L >> ((byte)(uVar1 - 1) >> 2 & 0x3e)) & 3;
    SerializeUintDelta(param_1->BitStreamWriter,*(ulong64 *)param_2->_padding_,
                       *(ulong64 *)param_2->Prev,
                       FIntNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
                       DeltaBitCountTable[uVar2],
                       FIntNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
                       DeltaBitCountTableEntryCount[uVar2],uVar1);
  }
  return;
}

// Validate @ 14433f1e0

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<signed_char,FInt8RangeNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  
  lVar2 = param_2->_padding_;
  if (8 < *(byte *)(lVar2 + 0x12)) {
    return false;
  }
  cVar1 = *(char *)param_2->Source;
  cVar3 = *(char *)(lVar2 + 0x11);
  if (cVar1 < *(char *)(lVar2 + 0x11)) {
    cVar3 = cVar1;
  }
  cVar4 = *(char *)(lVar2 + 0x10);
  if (*(char *)(lVar2 + 0x10) < cVar3) {
    cVar4 = cVar3;
  }
  return cVar1 == cVar4;
}

// Validate @ 14433f220

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_char,FUint8RangeNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  
  lVar2 = param_2->_padding_;
  if (8 < *(byte *)(lVar2 + 0x12)) {
    return false;
  }
  bVar1 = *(byte *)param_2->Source;
  bVar3 = *(byte *)(lVar2 + 0x11);
  if (bVar1 < *(byte *)(lVar2 + 0x11)) {
    bVar3 = bVar1;
  }
  bVar4 = *(byte *)(lVar2 + 0x10);
  if (*(byte *)(lVar2 + 0x10) < bVar3) {
    bVar4 = bVar3;
  }
  return bVar1 == bVar4;
}

// Validate @ 14433f260

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<short,FInt16RangeNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  short sVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  
  lVar2 = param_2->_padding_;
  if (0x10 < *(byte *)(lVar2 + 0x14)) {
    return false;
  }
  sVar1 = *(short *)param_2->Source;
  sVar4 = *(short *)(lVar2 + 0x12);
  if (sVar1 < *(short *)(lVar2 + 0x12)) {
    sVar4 = sVar1;
  }
  sVar3 = *(short *)(lVar2 + 0x10);
  if (*(short *)(lVar2 + 0x10) < sVar4) {
    sVar3 = sVar4;
  }
  return sVar1 == sVar3;
}

// Validate @ 14433f2a0

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_short,FUint16RangeNetSerializerConfig>::
Validate(FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  
  lVar2 = param_2->_padding_;
  if (0x10 < *(byte *)(lVar2 + 0x14)) {
    return false;
  }
  uVar1 = *(ushort *)param_2->Source;
  uVar4 = *(ushort *)(lVar2 + 0x12);
  if (uVar1 < *(ushort *)(lVar2 + 0x12)) {
    uVar4 = uVar1;
  }
  uVar3 = *(ushort *)(lVar2 + 0x10);
  if (*(ushort *)(lVar2 + 0x10) < uVar4) {
    uVar3 = uVar4;
  }
  return uVar1 == uVar3;
}

// Validate @ 14433f2e0

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<int,FInt32RangeNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = param_2->_padding_;
  if (0x20 < *(byte *)(lVar2 + 0x18)) {
    return false;
  }
  iVar1 = *(int *)param_2->Source;
  iVar4 = *(int *)(lVar2 + 0x14);
  if (iVar1 < *(int *)(lVar2 + 0x14)) {
    iVar4 = iVar1;
  }
  iVar3 = *(int *)(lVar2 + 0x10);
  if (*(int *)(lVar2 + 0x10) < iVar4) {
    iVar3 = iVar4;
  }
  return iVar1 == iVar3;
}

// Validate @ 14433f320

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned_int,FUint32RangeNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = param_2->_padding_;
  if (0x20 < *(byte *)(lVar2 + 0x18)) {
    return false;
  }
  uVar1 = *(uint *)param_2->Source;
  uVar4 = *(uint *)(lVar2 + 0x14);
  if (uVar1 < *(uint *)(lVar2 + 0x14)) {
    uVar4 = uVar1;
  }
  uVar3 = *(uint *)(lVar2 + 0x10);
  if (*(uint *)(lVar2 + 0x10) < uVar4) {
    uVar3 = uVar4;
  }
  return uVar1 == uVar3;
}

// Validate @ 14433f360

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<__int64,FInt64RangeNetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_2->_padding_;
  if (0x40 < *(byte *)(lVar1 + 0x20)) {
    return false;
  }
  lVar2 = *(longlong *)param_2->Source;
  lVar4 = *(longlong *)(lVar1 + 0x18);
  if (lVar2 < *(longlong *)(lVar1 + 0x18)) {
    lVar4 = lVar2;
  }
  lVar3 = *(longlong *)(lVar1 + 0x10);
  if (*(longlong *)(lVar1 + 0x10) < lVar4) {
    lVar3 = lVar4;
  }
  return lVar2 == lVar3;
}

// Validate @ 14433f3a0

bool __cdecl
UE::Net::Private::FIntRangeNetSerializerBase<unsigned___int64,FUint64RangeNetSerializerConfig>::
Validate(FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = param_2->_padding_;
  if (0x40 < *(byte *)(lVar1 + 0x20)) {
    return false;
  }
  uVar2 = *(ulonglong *)param_2->Source;
  uVar4 = *(ulonglong *)(lVar1 + 0x18);
  if (uVar2 < *(ulonglong *)(lVar1 + 0x18)) {
    uVar4 = uVar2;
  }
  uVar3 = *(ulonglong *)(lVar1 + 0x10);
  if (*(ulonglong *)(lVar1 + 0x10) < uVar4) {
    uVar3 = uVar4;
  }
  return uVar2 == uVar3;
}


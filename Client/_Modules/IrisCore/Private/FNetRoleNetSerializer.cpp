// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// Dequantize @ 14432aa40

void __cdecl
UE::Net::FNetRoleNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_2->_padding_ + 0x18);
  bVar2 = bVar3 + *(char *)param_2->Source;
  bVar1 = *(byte *)(param_2->_padding_ + 0x19);
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
  *(byte *)(param_2->Target + (longlong)*(int *)(param_2->_padding_ + 0x14)) = bVar3;
  return;
}

// Deserialize @ 14432d1b0

void __cdecl
UE::Net::FNetRoleNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined1 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)param_2->Target;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x1a);
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

// IsEqual @ 144333f10

bool __cdecl
UE::Net::FNetRoleNetSerializer::IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if (param_2->bStateIsQuantized != false) {
    return *(char *)param_2->Source0 == *(char *)param_2->Source1;
  }
  bVar4 = *(byte *)(param_2->_padding_ + 0x18);
  bVar3 = *(byte *)(param_2->_padding_ + 0x19);
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

// Quantize @ 144336930

void __cdecl
UE::Net::FNetRoleNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = *(byte *)(param_2->_padding_ + 0x19);
  bVar1 = *(byte *)(param_2->_padding_ + 0x18);
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

// Serialize @ 14433c4f0

void __cdecl
UE::Net::FNetRoleNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  FNetBitStreamWriter *this;
  
  lVar3 = param_2->_padding_;
  if ((*(uint *)&param_1->InternalContext->field_0x30 &
      (uint)(*(char *)param_2->Source == *(char *)(lVar3 + 0x1b))) == 0) {
    Net::Private::FIntRangeNetSerializerBase<unsigned_char,FNetRoleNetSerializerConfig>::Serialize
              (param_1,param_2);
    return;
  }
  this = param_1->BitStreamWriter;
  bVar1 = *(byte *)(lVar3 + 0x1a);
  bVar2 = *(byte *)(lVar3 + 0x1c);
  if ((0xf < bVar1) && (FNetBitStreamWriter::WriteBits(this,(uint)(bVar2 == 0),1), bVar2 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar2,(uint)bVar1);
  return;
}

// Validate @ 14433f620

bool __cdecl
UE::Net::FNetRoleNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  
  lVar3 = param_2->_padding_;
  bVar1 = *(byte *)param_2->Source;
  bVar2 = *(byte *)(lVar3 + 0x19);
  if (bVar1 < *(byte *)(lVar3 + 0x19)) {
    bVar2 = bVar1;
  }
  bVar5 = *(byte *)(lVar3 + 0x18);
  if (*(byte *)(lVar3 + 0x18) < bVar2) {
    bVar5 = bVar2;
  }
  if (bVar1 != bVar5) {
    return false;
  }
  bVar4 = UEnum::IsValidEnumValue(*(UEnum **)(lVar3 + 0x20),(ulonglong)bVar1);
  return bVar4;
}


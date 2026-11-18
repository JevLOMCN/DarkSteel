// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// Deserialize @ 1442ffb10

void __cdecl
UE::Net::FFloatNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  
  this = param_1->BitStreamReader;
  uVar1 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar1 & 1) != 0) {
    uVar1 = FNetBitStreamReader::ReadBits(this,0x20);
    *(uint *)param_2->Target = uVar1;
    return;
  }
  *(undefined4 *)param_2->Target = 0;
  return;
}

// DeserializeDelta @ 144300bf0

void __cdecl
UE::Net::FFloatNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  int iVar1;
  uint *puVar2;
  FNetBitStreamReader *this;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = (uint *)param_2->_padding_;
  this = param_1->BitStreamReader;
  iVar1 = *(int *)param_2->Prev;
  for (lVar3 = 0x3f; 7UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  uVar4 = FNetBitStreamReader::ReadBits(this,(uint)lVar3);
  if (uVar4 == 0) {
    uVar4 = FNetBitStreamReader::ReadBits(this,0x20);
    *puVar2 = uVar4;
    return;
  }
  uVar5 = 1 << (""[uVar4 - 1] - 1 & 0x1f);
  uVar4 = FNetBitStreamReader::ReadBits(this,(uint)""[uVar4 - 1]);
  *puVar2 = ((uVar4 ^ uVar5) - uVar5) + iVar1;
  return;
}

// Serialize @ 144310a90

void __cdecl
UE::Net::FFloatNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint uVar1;
  FNetBitStreamWriter *this;
  
  this = param_1->BitStreamWriter;
  uVar1 = *(uint *)param_2->Source;
  FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 != 0),1);
  if (uVar1 != 0) {
    FNetBitStreamWriter::WriteBits(this,uVar1,0x20);
  }
  return;
}

// SerializeDelta @ 144311980

void __cdecl
UE::Net::FFloatNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetBitStreamWriter *this;
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  this = param_1->BitStreamWriter;
  uVar3 = *(uint *)param_2->_padding_;
  for (lVar1 = 0x3f; 7UL >> lVar1 == 0; lVar1 = lVar1 + -1) {
  }
  uVar6 = (uVar3 - *(int *)param_2->Prev ^ 0x80000000) + 0x80000000;
  uVar4 = (ulonglong)((int)uVar6 >> 0x1f ^ uVar6) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar7 = (int)lVar2 + 1;
  if (uVar7 < 0x1a) {
    uVar3 = 0;
    while( true ) {
      uVar4 = (ulonglong)uVar3;
      uVar3 = uVar3 + 1;
      uVar5 = (uint)""[uVar4];
      if (uVar7 <= uVar5 || uVar6 == 0) break;
      if (uVar3 == 3) {
        return;
      }
    }
    FNetBitStreamWriter::WriteBits(this,uVar3,(uint)lVar1);
    uVar3 = uVar6;
  }
  else {
    FNetBitStreamWriter::WriteBits(this,0,(uint)lVar1);
    uVar5 = 0x20;
  }
  FNetBitStreamWriter::WriteBits(this,uVar3,uVar5);
  return;
}


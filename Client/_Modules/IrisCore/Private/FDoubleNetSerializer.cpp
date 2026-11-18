// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// Deserialize @ 1442ffa40

void __cdecl
UE::Net::FDoubleNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  uint uVar2;
  
  this = param_1->BitStreamReader;
  uVar1 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar1 & 1) != 0) {
    uVar1 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
    *(ulonglong *)param_2->Target = CONCAT44(uVar2,uVar1);
    return;
  }
  *(undefined8 *)param_2->Target = 0;
  return;
}

// DeserializeDelta @ 144300b60

void __cdecl
UE::Net::FDoubleNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  DeserializeUintDelta
            (param_1->BitStreamReader,(ulong64 *)param_2->_padding_,*(ulong64 *)param_2->Prev,"",3,
             '@');
  return;
}

// Serialize @ 1443109d0

void __cdecl
UE::Net::FDoubleNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetBitStreamWriter *this;
  longlong lVar1;
  
  this = param_1->BitStreamWriter;
  lVar1 = *(longlong *)param_2->Source;
  FNetBitStreamWriter::WriteBits(this,(uint)(lVar1 != 0),1);
  if (lVar1 != 0) {
    FNetBitStreamWriter::WriteBits(this,(uint)lVar1,0x20);
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)lVar1 >> 0x20),0x20);
  }
  return;
}

// SerializeDelta @ 144311800

void __cdecl
UE::Net::FDoubleNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  byte bVar1;
  FNetBitStreamWriter *this;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  this = param_1->BitStreamWriter;
  uVar6 = *(ulonglong *)param_2->_padding_;
  for (lVar2 = 0x3f; 7UL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  uVar8 = (uVar6 - *(longlong *)param_2->Prev ^ 0x8000000000000000) + 0x8000000000000000;
  uVar5 = (longlong)uVar8 >> 0x3f ^ uVar8;
  lVar3 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar9 = (int)lVar3;
  if (uVar5 == 0) {
    iVar9 = -1;
  }
  if (iVar9 + 2U < 0x37) {
    uVar4 = 0;
    while( true ) {
      uVar6 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      bVar1 = ""[uVar6];
      if (iVar9 + 2U <= (uint)bVar1 || uVar8 == 0) break;
      if (uVar4 == 3) {
        return;
      }
    }
    FNetBitStreamWriter::WriteBits(this,uVar4,(uint)lVar2);
    uVar7 = (uint)uVar8;
    if (bVar1 < 0x21) {
      uVar4 = (uint)bVar1;
      goto LAB_14431190b;
    }
    FNetBitStreamWriter::WriteBits(this,uVar7,0x20);
    uVar4 = bVar1 - 0x20;
    uVar6 = uVar8;
  }
  else {
    FNetBitStreamWriter::WriteBits(this,0,(uint)lVar2);
    FNetBitStreamWriter::WriteBits(this,(uint)uVar6,0x20);
    uVar4 = 0x20;
  }
  uVar7 = (uint)(uVar6 >> 0x20);
LAB_14431190b:
  FNetBitStreamWriter::WriteBits(this,uVar7,uVar4);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// Deserialize @ 14432d290

void __cdecl
UE::Net::FPackedInt64NetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  uint uVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  this = param_1->BitStreamReader;
  uVar2 = FNetBitStreamReader::ReadBits(this,3);
  uVar1 = uVar2 * 8 + 8;
  if (uVar1 < 0x21) {
    uVar2 = FNetBitStreamReader::ReadBits(this,uVar1);
    uVar5 = (ulonglong)uVar2;
  }
  else {
    uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar2 = FNetBitStreamReader::ReadBits(this,uVar2 * 8 - 0x18);
    uVar5 = CONCAT44(uVar2,uVar3);
  }
  uVar4 = 1L << ((char)uVar1 - 1U & 0x3f);
  *(ulonglong *)param_2->Target = (uVar4 ^ uVar5) - uVar4;
  return;
}

// DeserializeDelta @ 14432e9d0

void __cdecl
UE::Net::FPackedInt64NetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  DeserializeIntDelta(param_1->BitStreamReader,(long64 *)param_2->_padding_,*(long64 *)param_2->Prev
                      ,"",3,'@');
  return;
}

// Serialize @ 14433c620

void __cdecl
UE::Net::FPackedInt64NetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetBitStreamWriter *this;
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  this = param_1->BitStreamWriter;
  uVar5 = *(ulonglong *)param_2->Source;
  uVar2 = (longlong)uVar5 >> 0x3f ^ uVar5;
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar3 = (int)lVar1;
  if (uVar2 == 0) {
    iVar3 = -1;
  }
  uVar4 = iVar3 + 9U >> 3;
  uVar6 = uVar4 * 8;
  FNetBitStreamWriter::WriteBits(this,uVar4 - 1,3);
  if (0x20 < uVar6) {
    FNetBitStreamWriter::WriteBits(this,(uint)uVar5,0x20);
    uVar5 = uVar5 >> 0x20;
    uVar6 = uVar6 - 0x20;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)uVar5,uVar6);
  return;
}

// SerializeDelta @ 14433d940

void __cdecl
UE::Net::FPackedInt64NetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  SerializeIntDelta(param_1->BitStreamWriter,*(long64 *)param_2->_padding_,*(long64 *)param_2->Prev,
                    "",3,'@');
  return;
}


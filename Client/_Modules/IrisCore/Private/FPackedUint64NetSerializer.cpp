// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// Deserialize @ 14432d380

void __cdecl
UE::Net::FPackedUint64NetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  this = param_1->BitStreamReader;
  uVar1 = FNetBitStreamReader::ReadBits(this,3);
  uVar2 = uVar1 * 8 + 8;
  if (uVar2 < 0x21) {
    uVar2 = FNetBitStreamReader::ReadBits(this,uVar2);
    uVar3 = (ulonglong)uVar2;
  }
  else {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar1 = FNetBitStreamReader::ReadBits(this,uVar1 * 8 - 0x18);
    uVar3 = CONCAT44(uVar1,uVar2);
  }
  *(ulonglong *)param_2->Target = uVar3;
  return;
}

// DeserializeDelta @ 14432ea50

void __cdecl
UE::Net::FPackedUint64NetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  DeserializeUintDelta
            (param_1->BitStreamReader,(ulong64 *)param_2->_padding_,*(ulong64 *)param_2->Prev,"",3,
             '@');
  return;
}

// Serialize @ 14433c720

void __cdecl
UE::Net::FPackedUint64NetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetBitStreamWriter *this;
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  this = param_1->BitStreamWriter;
  uVar3 = *(ulonglong *)param_2->Source;
  lVar1 = 0x3f;
  if ((uVar3 | 1) != 0) {
    for (; (uVar3 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar2 = (int)lVar1 + 8U >> 3;
  uVar4 = uVar2 * 8;
  FNetBitStreamWriter::WriteBits(this,uVar2 - 1,3);
  if (0x20 < uVar4) {
    FNetBitStreamWriter::WriteBits(this,(uint)uVar3,0x20);
    uVar3 = uVar3 >> 0x20;
    uVar4 = uVar4 - 0x20;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)uVar3,uVar4);
  return;
}

// SerializeDelta @ 14433d9c0

void __cdecl
UE::Net::FPackedUint64NetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  SerializeUintDelta(param_1->BitStreamWriter,*(ulong64 *)param_2->_padding_,
                     *(ulong64 *)param_2->Prev,"",3,'@');
  return;
}


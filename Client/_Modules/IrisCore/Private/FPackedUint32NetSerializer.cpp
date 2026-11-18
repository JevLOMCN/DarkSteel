// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// Deserialize @ 14432d330

void __cdecl
UE::Net::FPackedUint32NetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  
  this = param_1->BitStreamReader;
  uVar1 = FNetBitStreamReader::ReadBits(this,2);
  uVar1 = FNetBitStreamReader::ReadBits(this,uVar1 * 8 + 8);
  *(uint *)param_2->Target = uVar1;
  return;
}

// DeserializeDelta @ 14432ea10

void __cdecl
UE::Net::FPackedUint32NetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  DeserializeUintDelta
            (param_1->BitStreamReader,(uint *)param_2->_padding_,*(uint *)param_2->Prev,"",3,' ');
  return;
}

// Serialize @ 14433c6b0

void __cdecl
UE::Net::FPackedUint32NetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  FNetBitStreamWriter *this;
  longlong lVar3;
  uint uVar4;
  
  this = param_1->BitStreamWriter;
  uVar2 = *(uint *)param_2->Source;
  uVar1 = ((ulonglong)uVar2 | 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar4 = (int)lVar3 + 7U >> 3;
  FNetBitStreamWriter::WriteBits(this,uVar4 - 1,2);
  FNetBitStreamWriter::WriteBits(this,uVar2,uVar4 * 8);
  return;
}

// SerializeDelta @ 14433d980

void __cdecl
UE::Net::FPackedUint32NetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  SerializeUintDelta(param_1->BitStreamWriter,*(uint *)param_2->_padding_,*(uint *)param_2->Prev,"",
                     3,' ');
  return;
}


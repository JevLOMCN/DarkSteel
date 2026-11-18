// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// Deserialize @ 1442ffb70

void __cdecl
UE::Net::FGuidNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  this = param_1->BitStreamReader;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar2 & 1) != 0) {
    uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar4 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar5 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar6 = FNetBitStreamReader::ReadBits(this,0x20);
  }
  puVar1 = (uint *)param_2->Target;
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  return;
}

// Serialize @ 144310b00

void __cdecl
UE::Net::FGuidNetSerializer::Serialize(FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  FNetBitStreamWriter *this;
  
  puVar5 = (uint *)param_2->Source;
  this = param_1->BitStreamWriter;
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  uVar3 = *puVar5;
  uVar4 = puVar5[1];
  FNetBitStreamWriter::WriteBits
            (this,(uint)(((uVar1 != 0 || uVar2 != 0) || uVar3 != 0) || uVar4 != 0),1);
  if (((uVar1 != 0 || uVar2 != 0) || uVar3 != 0) || uVar4 != 0) {
    FNetBitStreamWriter::WriteBits(this,*puVar5,0x20);
    FNetBitStreamWriter::WriteBits(this,puVar5[1],0x20);
    FNetBitStreamWriter::WriteBits(this,puVar5[2],0x20);
    FNetBitStreamWriter::WriteBits(this,puVar5[3],0x20);
  }
  return;
}


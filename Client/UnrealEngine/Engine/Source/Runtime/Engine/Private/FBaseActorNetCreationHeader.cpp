// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Deserialize @ 14802a640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Net::FBaseActorNetCreationHeader::Deserialize
          (FBaseActorNetCreationHeader *this,FCreationHeaderContext *param_1)

{
  FNetBitStreamReader *this_00;
  ushort uVar1;
  uint uVar2;
  
  this_00 = param_1->Serialization->BitStreamReader;
  uVar2 = FNetBitStreamReader::ReadBits(this_00,1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this_00,0x10);
    uVar1 = (short)uVar2 + 1;
    this->CustomCreationDataBitCount = uVar1;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->CustomCreationData,uVar1 + 0x1f >> 3 & 0x1ffffffc,Default);
    FNetBitStreamReader::ReadBitStream
              (this_00,(uint *)(this->CustomCreationData).AllocatorInstance.Data,
               (uint)this->CustomCreationDataBitCount);
  }
  return this_00->OverflowBitCount == 0;
}

// GetFactorySpawnFlags @ 148035780

EActorNetSpawnInfoFlags __thiscall
UE::Net::FBaseActorNetCreationHeader::GetFactorySpawnFlags
          (FBaseActorNetCreationHeader *this,UNetActorFactory *param_1)

{
  return param_1->SpawnInfoFlags;
}

// Serialize @ 148056da0

bool __thiscall
UE::Net::FBaseActorNetCreationHeader::Serialize
          (FBaseActorNetCreationHeader *this,FCreationHeaderContext *param_1)

{
  FNetBitStreamWriter *this_00;
  bool bVar1;
  
  bVar1 = this->CustomCreationDataBitCount != 0;
  this_00 = param_1->Serialization->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this_00,(uint)bVar1,1);
  if (bVar1) {
    FNetBitStreamWriter::WriteBits(this_00,this->CustomCreationDataBitCount - 1,0x10);
    FNetBitStreamWriter::WriteBitStream
              (this_00,(uint *)(this->CustomCreationData).AllocatorInstance.Data,0,
               (uint)this->CustomCreationDataBitCount);
  }
  return this_00->OverflowBitCount == 0;
}


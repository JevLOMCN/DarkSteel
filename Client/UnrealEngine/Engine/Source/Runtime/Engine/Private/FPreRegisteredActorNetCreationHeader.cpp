// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Deserialize @ 14802a890

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Net::FPreRegisteredActorNetCreationHeader::Deserialize
          (FPreRegisteredActorNetCreationHeader *this,FCreationHeaderContext *param_1)

{
  FNetBitStreamReader *this_00;
  ushort uVar1;
  uint uVar2;
  
  this_00 = param_1->Serialization->BitStreamReader;
  uVar2 = FNetBitStreamReader::ReadBits(this_00,1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this_00,0x10);
    uVar1 = (short)uVar2 + 1;
    *(ushort *)&this->field_0x20 = uVar1;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->field_0x10,
               uVar1 + 0x1f >> 3 & 0x1ffffffc,Default);
    FNetBitStreamReader::ReadBitStream
              (this_00,*(uint **)&this->field_0x10,(uint)*(ushort *)&this->field_0x20);
  }
  return this_00->OverflowBitCount == 0;
}

// IsDynamic @ 148041500

bool __thiscall
UE::Net::FPreRegisteredActorNetCreationHeader::IsDynamic(FPreRegisteredActorNetCreationHeader *this)

{
  return true;
}

// IsPreregistered @ 148041bb0

bool __thiscall
UE::Net::FPreRegisteredActorNetCreationHeader::IsPreregistered
          (FPreRegisteredActorNetCreationHeader *this)

{
  return true;
}

// Serialize @ 148057050

bool __thiscall
UE::Net::FPreRegisteredActorNetCreationHeader::Serialize
          (FPreRegisteredActorNetCreationHeader *this,FCreationHeaderContext *param_1)

{
  FNetBitStreamWriter *this_00;
  bool bVar1;
  
  bVar1 = *(short *)&this->field_0x20 != 0;
  this_00 = param_1->Serialization->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this_00,(uint)bVar1,1);
  if (bVar1) {
    FNetBitStreamWriter::WriteBits(this_00,*(ushort *)&this->field_0x20 - 1,0x10);
    FNetBitStreamWriter::WriteBitStream
              (this_00,*(uint **)&this->field_0x10,0,(uint)*(ushort *)&this->field_0x20);
  }
  return this_00->OverflowBitCount == 0;
}

// ToString @ 148067710

FString * __thiscall
UE::Net::FPreRegisteredActorNetCreationHeader::ToString
          (FPreRegisteredActorNetCreationHeader *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"\n\tFPreRegisteredActorNetCreationHeader (ProtocolId:0x%x):\n\tCustomCreationData=%u bits"
            );
  return __return_storage_ptr__;
}


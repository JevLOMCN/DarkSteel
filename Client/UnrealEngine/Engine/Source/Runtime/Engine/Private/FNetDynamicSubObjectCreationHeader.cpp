// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Deserialize @ 14802a7c0

bool __thiscall
UE::Net::FNetDynamicSubObjectCreationHeader::Deserialize
          (FNetDynamicSubObjectCreationHeader *this,FCreationHeaderContext *param_1)

{
  FNetBitStreamReader *this_00;
  uint uVar1;
  
  this_00 = param_1->Serialization->BitStreamReader;
  ReadFullNetObjectReference(param_1->Serialization,&this->TemplateReference);
  uVar1 = FNetBitStreamReader::ReadBits(this_00,1);
  this->field_0x30 = this->field_0x30 ^ ((char)uVar1 * '\x02' ^ this->field_0x30) & 2U;
  if ((uVar1 & 1) == 0) {
    uVar1 = FNetBitStreamReader::ReadBits(this_00,1);
    this->field_0x30 = this->field_0x30 ^ ((char)uVar1 << 2 ^ this->field_0x30) & 4U;
    if ((uVar1 & 1) == 0) {
      ReadFullNetObjectReference(param_1->Serialization,&this->OuterReference);
    }
  }
  return true;
}

// IsDynamic @ 1480414e0

bool __thiscall
UE::Net::FNetDynamicSubObjectCreationHeader::IsDynamic(FNetDynamicSubObjectCreationHeader *this)

{
  return true;
}

// Serialize @ 148056f60

bool __thiscall
UE::Net::FNetDynamicSubObjectCreationHeader::Serialize
          (FNetDynamicSubObjectCreationHeader *this,FCreationHeaderContext *param_1)

{
  FNetBitStreamWriter *this_00;
  byte bVar1;
  
  this_00 = param_1->Serialization->BitStreamWriter;
  WriteFullNetObjectReference(param_1->Serialization,&this->TemplateReference);
  bVar1 = this->bOuterIsTransientLevel;
  FNetBitStreamWriter::WriteBits(this_00,(uint)(bVar1 != 0),1);
  if (bVar1 == 0) {
    bVar1 = this->bOuterIsRootObject;
    FNetBitStreamWriter::WriteBits(this_00,(uint)(bVar1 != 0),1);
    if (bVar1 == 0) {
      WriteFullNetObjectReference(param_1->Serialization,&this->OuterReference);
    }
  }
  return true;
}

// ToString @ 148067430

FString * __thiscall
UE::Net::FNetDynamicSubObjectCreationHeader::ToString
          (FNetDynamicSubObjectCreationHeader *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28;
  
  FNetObjectReference::ToString(&this->OuterReference,&local_28);
  FNetObjectReference::ToString(&this->TemplateReference,&local_38);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"\n\tFNetDynamicSubObjectCreationHeader (ProtocolId:0x%x):\n\tTemplateReference=%s\n\tOuterReference=%s\n\tbUsePersistenLevel=%u\n\tbOuterIsTransientLevel=%u\n\tbOuterIsRootObject=%u\n\t"
            );
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}


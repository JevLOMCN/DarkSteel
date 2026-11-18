// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Deserialize @ 14802a860

bool __thiscall
UE::Net::FNetStaticSubObjectCreationHeader::Deserialize
          (FNetStaticSubObjectCreationHeader *this,FCreationHeaderContext *param_1)

{
  ReadFullNetObjectReference(param_1->Serialization,&this->ObjectReference);
  return true;
}

// IsDynamic @ 1480414f0

bool __thiscall
UE::Net::FNetStaticSubObjectCreationHeader::IsDynamic(FNetStaticSubObjectCreationHeader *this)

{
  return false;
}

// Serialize @ 148057020

bool __thiscall
UE::Net::FNetStaticSubObjectCreationHeader::Serialize
          (FNetStaticSubObjectCreationHeader *this,FCreationHeaderContext *param_1)

{
  WriteFullNetObjectReference(param_1->Serialization,&this->ObjectReference);
  return true;
}

// ToString @ 1480676a0

FString * __thiscall
UE::Net::FNetStaticSubObjectCreationHeader::ToString
          (FNetStaticSubObjectCreationHeader *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  FNetObjectReference::ToString(&this->ObjectReference,&local_18);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"\n\tFNetStaticSubObjectCreationHeader (ProtocolId:0x%x):\n\tObjectReference=%s\n\t");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}


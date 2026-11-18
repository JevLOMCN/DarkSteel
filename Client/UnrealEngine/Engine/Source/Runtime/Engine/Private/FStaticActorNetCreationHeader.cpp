// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Deserialize @ 14802a8a0

bool __thiscall
UE::Net::FStaticActorNetCreationHeader::Deserialize
          (FStaticActorNetCreationHeader *this,FCreationHeaderContext *param_1)

{
  bool bVar1;
  
  ReadFullNetObjectReference(param_1->Serialization,&this->ObjectReference);
  bVar1 = FBaseActorNetCreationHeader::Deserialize((FBaseActorNetCreationHeader *)this,param_1);
  return bVar1;
}

// IsDynamic @ 148041510

bool __thiscall
UE::Net::FStaticActorNetCreationHeader::IsDynamic(FStaticActorNetCreationHeader *this)

{
  return false;
}

// IsPreregistered @ 148041bc0

bool __thiscall
UE::Net::FStaticActorNetCreationHeader::IsPreregistered(FStaticActorNetCreationHeader *this)

{
  return false;
}

// Serialize @ 148057060

bool __thiscall
UE::Net::FStaticActorNetCreationHeader::Serialize
          (FStaticActorNetCreationHeader *this,FCreationHeaderContext *param_1)

{
  bool bVar1;
  
  WriteFullNetObjectReference(param_1->Serialization,&this->ObjectReference);
  bVar1 = FBaseActorNetCreationHeader::Serialize((FBaseActorNetCreationHeader *)this,param_1);
  return bVar1;
}

// ToString @ 148067740

FString * __thiscall
UE::Net::FStaticActorNetCreationHeader::ToString
          (FStaticActorNetCreationHeader *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  FNetObjectReference::ToString(&this->ObjectReference,&local_18);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"\n\tFStaticActorNetCreationHeader (ProtocolId:0x%x):\n\tObjectReference=%s\n\tCustomCreationData=%u bits"
            );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}


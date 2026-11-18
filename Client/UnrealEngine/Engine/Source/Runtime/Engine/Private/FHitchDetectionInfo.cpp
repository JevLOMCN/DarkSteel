// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToString @ 147879ef0

FString * __thiscall
FHitchDetectionInfo::ToString(FHitchDetectionInfo *this,FString *__return_storage_ptr__)

{
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (this->bInTM == false) {
    FCollisionQueryParams::ToString(this->Params,&local_28);
    ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(__return_storage_ptr__,L"Start:%s End:%s TraceChannel:%d Params:%s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    FCollisionQueryParams::ToString(this->Params,&local_48);
    UE::Math::TTransform<double>::ToString(&this->Pose,&local_38);
    ::FString::PrintfImpl(__return_storage_ptr__,L"Pose:%s TraceChannel:%d Params:%s");
    local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}


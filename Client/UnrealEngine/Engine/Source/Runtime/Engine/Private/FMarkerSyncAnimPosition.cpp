// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1473c93f0

UScriptStruct * __cdecl FMarkerSyncAnimPosition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMarkerSyncAnimPosition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMarkerSyncAnimPosition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition,(UObject *)pUVar1,
                         L"MarkerSyncAnimPosition");
  }
  return Z_Registration_Info_UScriptStruct_FMarkerSyncAnimPosition.OuterSingleton;
}

// ToString @ 1474fc300

FString * __thiscall
FMarkerSyncAnimPosition::ToString(FMarkerSyncAnimPosition *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28 [2];
  
  ::FName::ToString(&this->NextMarkerName,local_28);
  ::FName::ToString(&this->PreviousMarkerName,&local_38);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[PreviousMarker %s, NextMarker %s] : %0.2f ");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}


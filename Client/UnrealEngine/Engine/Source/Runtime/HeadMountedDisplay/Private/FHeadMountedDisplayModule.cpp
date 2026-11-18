// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 2

// CreateTrackingSystem @ 14594b9c0

TSharedPtr<IXRTrackingSystem,1> * __thiscall
FHeadMountedDisplayModule::CreateTrackingSystem
          (FHeadMountedDisplayModule *this,TSharedPtr<IXRTrackingSystem,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IXRTrackingSystem *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetModuleKeyName @ 14594b9e0

FString * __thiscall
FHeadMountedDisplayModule::GetModuleKeyName
          (FHeadMountedDisplayModule *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Default");
  return __return_storage_ptr__;
}


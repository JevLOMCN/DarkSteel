// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EyeTracker
// Functions: 3

// CreateEyeTracker @ 1446f26f0

TSharedPtr<IEyeTracker,1> * __thiscall
FEyeTrackerModule::CreateEyeTracker
          (FEyeTrackerModule *this,TSharedPtr<IEyeTracker,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IEyeTracker *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetModuleKeyName @ 1446f2710

FString * __thiscall
FEyeTrackerModule::GetModuleKeyName(FEyeTrackerModule *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Default");
  return __return_storage_ptr__;
}

// IsEyeTrackerConnected @ 1446f2740

bool __thiscall FEyeTrackerModule::IsEyeTrackerConnected(FEyeTrackerModule *this)

{
  return false;
}


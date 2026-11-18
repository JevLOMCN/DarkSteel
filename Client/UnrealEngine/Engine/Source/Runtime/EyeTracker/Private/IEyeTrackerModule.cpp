// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EyeTracker
// Functions: 2

// StartupModule @ 1446f25f0

void __thiscall IEyeTrackerModule::StartupModule(IEyeTrackerModule *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  IEyeTrackerModule *pIVar2;
  
  pIVar1 = IModularFeatures::Get();
  pIVar2 = this + 1;
  if (this == (IEyeTrackerModule *)0x0) {
    pIVar2 = (IEyeTrackerModule *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&EyeTrackerModularFeatureName,L"EyeTracker");
      _Init_thread_footer(&::_TSS0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001446f266a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,EyeTrackerModularFeatureName,pIVar2);
  return;
}

// GetModularFeatureName @ 1446f2d60

FName __cdecl IEyeTrackerModule::GetModularFeatureName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&EyeTrackerModularFeatureName,L"EyeTracker");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = EyeTrackerModularFeatureName;
  return in_RCX;
}


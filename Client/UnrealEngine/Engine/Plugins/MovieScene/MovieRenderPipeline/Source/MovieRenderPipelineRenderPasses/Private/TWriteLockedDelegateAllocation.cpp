// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~TWriteLockedDelegateAllocation<FThreadSafeDelegateMode> @ 14ddca990

void __thiscall
TWriteLockedDelegateAllocation<FThreadSafeDelegateMode>::
~TWriteLockedDelegateAllocation<FThreadSafeDelegateMode>
          (TWriteLockedDelegateAllocation<FThreadSafeDelegateMode> *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this->WriteScope).Lock.Mutex;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    (this->WriteScope).Lock.Mutex = (FWindowsRecursiveMutex *)0x0;
  }
  return;
}


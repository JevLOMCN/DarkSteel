// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// GetCriticalErrorDetectedDelegate @ 14420a120

TMulticastDelegate<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy> * __cdecl
UE::Net::FIrisDelegates::GetCriticalErrorDetectedDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Net::FIrisDelegates::GetCriticalErrorDetectedDelegate'::__l2::
             _dynamic_atexit_destructor_for__CriticalErrorDelegate__);
      _Init_thread_footer(&::_TSS0);
      return &CriticalErrorDelegate;
    }
  }
  return &CriticalErrorDelegate;
}


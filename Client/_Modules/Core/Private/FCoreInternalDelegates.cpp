// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// GetCurrentlyMountedPaksDelegate @ 141872d90

TDelegate<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
* __cdecl FCoreInternalDelegates::GetCurrentlyMountedPaksDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreInternalDelegates::GetCurrentlyMountedPaksDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Delegate;
}

// GetOnPakMountOperation @ 141874ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(EMountOperation,wchar_t_const_*,int),FDefaultTSDelegateUserPolicy> *
__cdecl FCoreInternalDelegates::GetOnPakMountOperation(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Delegate,4000);
      ::Delegate._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Delegate._56_8_ = _UNK_150631d48;
      ::Delegate._40_8_ = 0;
      atexit(`FCoreInternalDelegates::GetOnPakMountOperation'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// GetGarbageCollectReportGarbageReferencers @ 14226f780

TMulticastDelegate<void___cdecl(TArrayView<FGarbageReferenceInfo_const_,int>),FDefaultDelegateUserPolicy>
* __cdecl FCoreUObjectDelegates::GetGarbageCollectReportGarbageReferencers(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreUObjectDelegates::GetGarbageCollectReportGarbageReferencers'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}

// GetGarbageCollectStartedDelegate @ 14226f800

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
FCoreUObjectDelegates::GetGarbageCollectStartedDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreUObjectDelegates::GetGarbageCollectStartedDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}

// GetPostGarbageCollect @ 142270470

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
FCoreUObjectDelegates::GetPostGarbageCollect(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreUObjectDelegates::GetPostGarbageCollect'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}

// GetPostPurgeGarbageDelegate @ 1422704f0

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
FCoreUObjectDelegates::GetPostPurgeGarbageDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreUObjectDelegates::GetPostPurgeGarbageDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}

// GetPreGarbageCollectDelegate @ 142270570

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
FCoreUObjectDelegates::GetPreGarbageCollectDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreUObjectDelegates::GetPreGarbageCollectDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}


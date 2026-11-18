// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// Enter<FCpuSyncPoint_WaitFields> @ 145a3b470

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuSyncPoint_WaitFields>(TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuSyncPoint_WaitFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuSyncPoint_WaitFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuSyncPoint_WaitFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuSyncPoint_WaitFields::GetUid(void)'::__l2::Uid =
           FCpuSyncPoint_WaitFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuSyncPoint_WaitFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FCpuSyncPoint_WaitFields::GetUid(void)'::__l2::
              Uid,0);
  return __return_storage_ptr__;
}

// ScopedStampedEnter<FCpuSyncPoint_WaitFields> @ 145a43570

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuSyncPoint_WaitFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  longlong lVar1;
  FWriteBuffer *pFVar2;
  ulong64 uVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
  if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 10) {
    pFVar2 = Writer_NextBuffer();
  }
  uVar3 = TimeGetTimestamp();
  *(ulong64 *)pFVar2->Cursor = (uVar3 - GStartCycle) * 0x100 + 0x10;
  pFVar2->Cursor = pFVar2->Cursor + 8;
  pFVar2->Committed = pFVar2->Cursor;
  Enter<FCpuSyncPoint_WaitFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}


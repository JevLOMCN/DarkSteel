// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// Enter<FCpuSaveCacheFileFields> @ 142ab98d0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuSaveCacheFileFields>(TLogScope<1> *__return_storage_ptr__)

{
  longlong lVar1;
  ushort *puVar2;
  code *pcVar3;
  uint uVar4;
  FWriteBuffer *pFVar5;
  TLogScope<1> *pTVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuSaveCacheFileFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuSaveCacheFileFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuSaveCacheFileFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuSaveCacheFileFields::GetUid(void)'::__l2::Uid =
           FCpuSaveCacheFileFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuSaveCacheFileFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FCpuSaveCacheFileFields::GetUid(void)'::__l2::Uid;
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar5 = *(FWriteBuffer **)(lVar1 + 0x20);
  *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar5;
  if (pFVar5 < (FWriteBuffer *)(pFVar5->Cursor + 6)) {
    pFVar5 = Writer_NextBuffer();
    *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar5;
  }
  if (pFVar5->Size < 7) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TLogScope<1> *)(*pcVar3)();
    return pTVar6;
  }
  puVar2 = *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20);
  *(ushort **)__return_storage_ptr__ = puVar2 + 1;
  *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20) = puVar2 + 3;
  *puVar2 = (ushort)uVar4 | 1;
  return __return_storage_ptr__;
}

// ScopedStampedEnter<FCpuSaveCacheFileFields> @ 142ad1ae0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuSaveCacheFileFields>
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
  if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 0xe) {
    pFVar2 = Writer_NextBuffer();
  }
  uVar3 = TimeGetTimestamp();
  *(ulong64 *)pFVar2->Cursor = (uVar3 - GStartCycle) * 0x100 + 0x10;
  pFVar2->Cursor = pFVar2->Cursor + 8;
  pFVar2->Committed = pFVar2->Cursor;
  Enter<FCpuSaveCacheFileFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}


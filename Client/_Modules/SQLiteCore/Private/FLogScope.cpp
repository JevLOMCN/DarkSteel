// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SQLiteCore
// Functions: 2

// Enter<FCpuSqlite_PerformQuickIntegrityCheckFields> @ 14d11f440

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuSqlite_PerformQuickIntegrityCheckFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  ushort *puVar1;
  longlong lVar2;
  ushort *puVar3;
  code *pcVar4;
  uint uVar5;
  FWriteBuffer *pFVar6;
  TLogScope<1> *pTVar7;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuSqlite_PerformQuickIntegrityCheckFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuSqlite_PerformQuickIntegrityCheckFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuSqlite_PerformQuickIntegrityCheckFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuSqlite_PerformQuickIntegrityCheckFields::GetUid(void)'
      ::__l2::Uid = FCpuSqlite_PerformQuickIntegrityCheckFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuSqlite_PerformQuickIntegrityCheckFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar5 = `public:_static_unsigned_int___cdecl_FCpuSqlite_PerformQuickIntegrityCheckFields::GetUid(void)'
          ::__l2::Uid;
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar6 = *(FWriteBuffer **)(lVar2 + 0x20);
  *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  if (pFVar6 < (FWriteBuffer *)(pFVar6->Cursor + 2)) {
    pFVar6 = Writer_NextBuffer();
    *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  }
  if (pFVar6->Size < 3) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TLogScope<1> *)(*pcVar4)();
    return pTVar7;
  }
  puVar3 = *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20);
  puVar1 = puVar3 + 1;
  *(ushort **)__return_storage_ptr__ = puVar1;
  *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20) = puVar1;
  *puVar3 = (ushort)uVar5 | 1;
  return __return_storage_ptr__;
}

// ScopedStampedEnter<FCpuSqlite_PerformQuickIntegrityCheckFields> @ 14d11fe00

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuSqlite_PerformQuickIntegrityCheckFields>
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
  Enter<FCpuSqlite_PerformQuickIntegrityCheckFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}


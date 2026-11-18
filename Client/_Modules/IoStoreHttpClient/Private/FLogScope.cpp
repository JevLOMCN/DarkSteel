// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 1

// Enter<LaneTraceDetail::FCpuProfilerEventBatchFields> @ 144569fc0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<LaneTraceDetail::FCpuProfilerEventBatchFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  longlong lVar1;
  ushort *puVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  FWriteBuffer *pFVar6;
  TLogScope<1> *pTVar7;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:_static_unsigned_int___cdecl_LaneTraceDetail::FCpuProfilerEventBatchFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_LaneTraceDetail::FCpuProfilerEventBatchFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_LaneTraceDetail::FCpuProfilerEventBatchFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_LaneTraceDetail::FCpuProfilerEventBatchFields::GetUid(void)'
      ::__l2::Uid = LaneTraceDetail::FCpuProfilerEventBatchFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_LaneTraceDetail::FCpuProfilerEventBatchFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar4 = `public:_static_unsigned_int___cdecl_LaneTraceDetail::FCpuProfilerEventBatchFields::GetUid(void)'
          ::__l2::Uid;
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar6 = *(FWriteBuffer **)(lVar1 + 0x20);
  *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  if (pFVar6 < (FWriteBuffer *)(pFVar6->Cursor + 7)) {
    pFVar6 = Writer_NextBuffer();
    *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  }
  if (pFVar6->Size < 8) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TLogScope<1> *)(*pcVar3)();
    return pTVar7;
  }
  puVar2 = *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20);
  *(longlong *)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20) = (longlong)puVar2 + 7;
  *(longlong *)__return_storage_ptr__ = (longlong)puVar2 + 5;
  LOCK();
  UNLOCK();
  uVar5 = GLogSerial + 1;
  *(uint *)(puVar2 + 1) = GLogSerial;
  GLogSerial = uVar5;
  *puVar2 = (ushort)uVar4 | 1;
  return __return_storage_ptr__;
}


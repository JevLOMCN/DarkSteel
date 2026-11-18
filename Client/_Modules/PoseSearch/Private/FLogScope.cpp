// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// Enter<FPoseSearchMotionMatchingState3Fields> @ 14a911d70

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPoseSearchMotionMatchingState3Fields>
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
      `public:_static_unsigned_int___cdecl_FPoseSearchMotionMatchingState3Fields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPoseSearchMotionMatchingState3Fields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPoseSearchMotionMatchingState3Fields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPoseSearchMotionMatchingState3Fields::GetUid(void)'::
      __l2::Uid = FPoseSearchMotionMatchingState3Fields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPoseSearchMotionMatchingState3Fields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FPoseSearchMotionMatchingState3Fields::GetUid(void)'
          ::__l2::Uid;
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar6 = *(FWriteBuffer **)(lVar1 + 0x20);
  *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  if (pFVar6 < (FWriteBuffer *)(pFVar6->Cursor + 5)) {
    pFVar6 = Writer_NextBuffer();
    *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  }
  if (pFVar6->Size < 6) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TLogScope<1> *)(*pcVar3)();
    return pTVar7;
  }
  puVar2 = *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20);
  *(longlong *)__return_storage_ptr__ = (longlong)puVar2 + 5;
  *(longlong *)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20) = (longlong)puVar2 + 5;
  LOCK();
  UNLOCK();
  uVar5 = GLogSerial + 1;
  *(uint *)(puVar2 + 1) = GLogSerial;
  GLogSerial = uVar5;
  *puVar2 = (ushort)uVar4 | 1;
  return __return_storage_ptr__;
}


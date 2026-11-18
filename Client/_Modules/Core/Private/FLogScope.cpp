// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 102

// Enter<TaskTrace::FTaskTraceCompletedFields> @ 1414764a0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceCompletedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCompletedFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCompletedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCompletedFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCompletedFields::GetUid(void)'::__l2
      ::Uid = TaskTrace::FTaskTraceCompletedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCompletedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCompletedFields::GetUid(void)'::
        __l2::Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<TaskTrace::FTaskTraceCreatedFields> @ 141476520

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceCreatedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCreatedFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCreatedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCreatedFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCreatedFields::GetUid(void)'::__l2::
      Uid = TaskTrace::FTaskTraceCreatedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCreatedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceCreatedFields::GetUid(void)'::__l2
        ::Uid,0x18);
  return __return_storage_ptr__;
}

// Enter<TaskTrace::FTaskTraceDestroyedFields> @ 1414765a0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceDestroyedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceDestroyedFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceDestroyedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceDestroyedFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceDestroyedFields::GetUid(void)'::__l2
      ::Uid = TaskTrace::FTaskTraceDestroyedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceDestroyedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceDestroyedFields::GetUid(void)'::
        __l2::Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<TaskTrace::FTaskTraceFinishedFields> @ 141476620

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceFinishedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceFinishedFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceFinishedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceFinishedFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceFinishedFields::GetUid(void)'::__l2
      ::Uid = TaskTrace::FTaskTraceFinishedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceFinishedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceFinishedFields::GetUid(void)'::
        __l2::Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<TaskTrace::FTaskTraceInitFields> @ 1414766a0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceInitFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceInitFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceInitFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceInitFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceInitFields::GetUid(void)'::__l2::Uid
           = TaskTrace::FTaskTraceInitFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceInitFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceInitFields::GetUid(void)'::__l2::
        Uid,4);
  return __return_storage_ptr__;
}

// Enter<TaskTrace::FTaskTraceLaunchedFields> @ 141476720

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceLaunchedFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceLaunchedFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceLaunchedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceLaunchedFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceLaunchedFields::GetUid(void)'::__l2
      ::Uid = TaskTrace::FTaskTraceLaunchedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceLaunchedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceLaunchedFields::GetUid(void)'::
        __l2::Uid,0x1d);
  return __return_storage_ptr__;
}

// Enter<TaskTrace::FTaskTraceScheduledFields> @ 1414767a0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceScheduledFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceScheduledFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceScheduledFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceScheduledFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceScheduledFields::GetUid(void)'::__l2
      ::Uid = TaskTrace::FTaskTraceScheduledFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceScheduledFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceScheduledFields::GetUid(void)'::
        __l2::Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<TaskTrace::FTaskTraceStartedFields> @ 141476820

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceStartedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceStartedFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceStartedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceStartedFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceStartedFields::GetUid(void)'::__l2::
      Uid = TaskTrace::FTaskTraceStartedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceStartedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceStartedFields::GetUid(void)'::__l2
        ::Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<TaskTrace::FTaskTraceSubsequentAddedFields> @ 1414768a0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceSubsequentAddedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceSubsequentAddedFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceSubsequentAddedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceSubsequentAddedFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceSubsequentAddedFields::GetUid(void)'
      ::__l2::Uid = TaskTrace::FTaskTraceSubsequentAddedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceSubsequentAddedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceSubsequentAddedFields::GetUid(void)'
        ::__l2::Uid,0x18);
  return __return_storage_ptr__;
}

// Enter<TaskTrace::FTaskTraceWaitingFinishedFields> @ 141476920

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceWaitingFinishedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingFinishedFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingFinishedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingFinishedFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingFinishedFields::GetUid(void)'
      ::__l2::Uid = TaskTrace::FTaskTraceWaitingFinishedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingFinishedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingFinishedFields::GetUid(void)'
        ::__l2::Uid,8);
  return __return_storage_ptr__;
}

// Enter<TaskTrace::FTaskTraceWaitingStartedFields> @ 1414769a0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceWaitingStartedFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingStartedFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingStartedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingStartedFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingStartedFields::GetUid(void)'
      ::__l2::Uid = TaskTrace::FTaskTraceWaitingStartedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingStartedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_TaskTrace::FTaskTraceWaitingStartedFields::GetUid(void)'
        ::__l2::Uid,8);
  return __return_storage_ptr__;
}

// EnterImpl<2> @ 141476a20

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::EnterImpl<2>
          (TLogScope<1> *__return_storage_ptr__,uint param_1,uint param_2)

{
  Enter((FLogScope *)__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Enter<FCpuConsoleCmdFields> @ 141612670

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuConsoleCmdFields>(TLogScope<1> *__return_storage_ptr__)

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
      `public:_static_unsigned_int___cdecl_FCpuConsoleCmdFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuConsoleCmdFields::GetUid(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuConsoleCmdFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuConsoleCmdFields::GetUid(void)'::__l2::Uid =
           FCpuConsoleCmdFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuConsoleCmdFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar5 = `public:_static_unsigned_int___cdecl_FCpuConsoleCmdFields::GetUid(void)'::__l2::Uid;
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

// EnterImpl<6> @ 141612760

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::EnterImpl<6>
          (TLogScope<1> *__return_storage_ptr__,uint param_1,uint param_2)

{
  longlong lVar1;
  ushort *puVar2;
  code *pcVar3;
  FWriteBuffer *pFVar4;
  TLogScope<1> *pTVar5;
  uint uVar6;
  
  uVar6 = param_2 + 2;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar4 = *(FWriteBuffer **)(lVar1 + 0x20);
  *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar4;
  if (pFVar4 < (FWriteBuffer *)(pFVar4->Cursor + uVar6)) {
    pFVar4 = Writer_NextBuffer();
    *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar4;
  }
  if (pFVar4->Size <= uVar6) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TLogScope<1> *)(*pcVar3)();
    return pTVar5;
  }
  puVar2 = *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20);
  *(ushort **)__return_storage_ptr__ = puVar2 + 1;
  *(ulonglong *)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20) =
       (longlong)puVar2 + (ulonglong)uVar6;
  *puVar2 = (ushort)param_1 | 1;
  return __return_storage_ptr__;
}

// ScopedStampedEnter<FCpuConsoleCmdFields> @ 141616ff0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuConsoleCmdFields>
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
  Enter<FCpuConsoleCmdFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Enter<FLLMTagValueFields> @ 1416717a0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FLLMTagValueFields>(TLogScope<1> *__return_storage_ptr__)

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
      `public:_static_unsigned_int___cdecl_FLLMTagValueFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FLLMTagValueFields::GetUid(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FLLMTagValueFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FLLMTagValueFields::GetUid(void)'::__l2::Uid =
           FLLMTagValueFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FLLMTagValueFields::GetUid(void)'::
                           __l2::_thread_safe_static_guard_0__);
    }
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FLLMTagValueFields::GetUid(void)'::__l2::Uid;
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar6 = *(FWriteBuffer **)(lVar1 + 0x20);
  *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  if (pFVar6 < (FWriteBuffer *)(pFVar6->Cursor + 0xe)) {
    pFVar6 = Writer_NextBuffer();
    *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  }
  if (pFVar6->Size < 0xf) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TLogScope<1> *)(*pcVar3)();
    return pTVar7;
  }
  puVar2 = *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20);
  *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20) = puVar2 + 7;
  *(longlong *)__return_storage_ptr__ = (longlong)puVar2 + 5;
  LOCK();
  UNLOCK();
  uVar5 = GLogSerial + 1;
  *(uint *)(puVar2 + 1) = GLogSerial;
  GLogSerial = uVar5;
  *puVar2 = (ushort)uVar4 | 1;
  return __return_storage_ptr__;
}

// Enter<FLoggingLogMessageFields> @ 141791930

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FLoggingLogMessageFields>(TLogScope<1> *__return_storage_ptr__)

{
  longlong lVar1;
  ushort *puVar2;
  code *pcVar3;
  uint uVar4;
  FWriteBuffer *pFVar5;
  TLogScope<1> *pTVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:_static_unsigned_int___cdecl_FLoggingLogMessageFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FLoggingLogMessageFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FLoggingLogMessageFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FLoggingLogMessageFields::GetUid(void)'::__l2::Uid =
           FLoggingLogMessageFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FLoggingLogMessageFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FLoggingLogMessageFields::GetUid(void)'::__l2::Uid;
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar5 = *(FWriteBuffer **)(lVar1 + 0x20);
  *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar5;
  if (pFVar5 < (FWriteBuffer *)(pFVar5->Cursor + 0x12)) {
    pFVar5 = Writer_NextBuffer();
    *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar5;
  }
  if (pFVar5->Size < 0x13) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TLogScope<1> *)(*pcVar3)();
    return pTVar6;
  }
  puVar2 = *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20);
  *(ushort **)__return_storage_ptr__ = puVar2 + 1;
  *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20) = puVar2 + 9;
  *puVar2 = (ushort)uVar4 | 1;
  return __return_storage_ptr__;
}

// Enter<FMetadataAssetFields> @ 14184a5b0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMetadataAssetFields>(TLogScope<0> *__return_storage_ptr__)

{
  longlong lVar1;
  ushort *puVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  FWriteBuffer *pFVar6;
  TLogScope<0> *pTVar7;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMetadataAssetFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMetadataAssetFields::GetUid(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMetadataAssetFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMetadataAssetFields::GetUid(void)'::__l2::Uid =
           FMetadataAssetFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMetadataAssetFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMetadataAssetFields::GetUid(void)'::__l2::Uid;
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar6 = *(FWriteBuffer **)(lVar1 + 0x20);
  *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  if (pFVar6 < (FWriteBuffer *)(pFVar6->Cursor + 0x11)) {
    pFVar6 = Writer_NextBuffer();
    *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  }
  if (pFVar6->Size < 0x12) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TLogScope<0> *)(*pcVar3)();
    return pTVar7;
  }
  puVar2 = *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20);
  *(longlong *)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20) = (longlong)puVar2 + 0x11;
  *(longlong *)__return_storage_ptr__ = (longlong)puVar2 + 5;
  LOCK();
  UNLOCK();
  uVar5 = GLogSerial + 1;
  *(uint *)(puVar2 + 1) = GLogSerial;
  GLogSerial = uVar5;
  *puVar2 = (ushort)uVar4 | 1;
  return __return_storage_ptr__;
}

// ScopedEnter<FMetadataAssetFields> @ 141851450

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  longlong lVar1;
  FWriteBuffer *pFVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
  if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 0x12) {
    pFVar2 = Writer_NextBuffer();
  }
  *pFVar2->Cursor = '\b';
  pFVar2->Cursor = pFVar2->Cursor + 1;
  pFVar2->Committed = pFVar2->Cursor;
  Enter<FMetadataAssetFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Enter<FCountersSetValueFloatFields> @ 14190cd60

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCountersSetValueFloatFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCountersSetValueFloatFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCountersSetValueFloatFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCountersSetValueFloatFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCountersSetValueFloatFields::GetUid(void)'::__l2::Uid =
           FCountersSetValueFloatFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCountersSetValueFloatFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCountersSetValueFloatFields::GetUid(void)'::__l2::Uid,
        0x12);
  return __return_storage_ptr__;
}

// Enter<FCountersSetValueIntFields> @ 14190cde0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCountersSetValueIntFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCountersSetValueIntFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCountersSetValueIntFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCountersSetValueIntFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCountersSetValueIntFields::GetUid(void)'::__l2::Uid =
           FCountersSetValueIntFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCountersSetValueIntFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCountersSetValueIntFields::GetUid(void)'::__l2::Uid,
        0x12);
  return __return_storage_ptr__;
}

// Enter<FCpuLoadModuleFields> @ 14190cf00

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuLoadModuleFields>(TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuLoadModuleFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuLoadModuleFields::GetUid(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuLoadModuleFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuLoadModuleFields::GetUid(void)'::__l2::Uid =
           FCpuLoadModuleFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuLoadModuleFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FCpuLoadModuleFields::GetUid(void)'::__l2::Uid,0)
  ;
  return __return_storage_ptr__;
}

// Enter<FCpuProfilerEndThreadFields> @ 14190cf80

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuProfilerEndThreadFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuProfilerEndThreadFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuProfilerEndThreadFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuProfilerEndThreadFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuProfilerEndThreadFields::GetUid(void)'::__l2::Uid =
           FCpuProfilerEndThreadFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuProfilerEndThreadFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FCpuProfilerEndThreadFields::GetUid(void)'::__l2
              ::Uid,8);
  return __return_storage_ptr__;
}

// Enter<FCpuProfilerEventBatchV3Fields> @ 14190d000

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuProfilerEventBatchV3Fields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuProfilerEventBatchV3Fields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuProfilerEventBatchV3Fields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuProfilerEventBatchV3Fields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuProfilerEventBatchV3Fields::GetUid(void)'::__l2::Uid
           = FCpuProfilerEventBatchV3Fields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuProfilerEventBatchV3Fields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FCpuProfilerEventBatchV3Fields::GetUid(void)'::
              __l2::Uid,0);
  return __return_storage_ptr__;
}

// Enter<FCpuProfilerMetadataFields> @ 14190d120

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuProfilerMetadataFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuProfilerMetadataFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuProfilerMetadataFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuProfilerMetadataFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuProfilerMetadataFields::GetUid(void)'::__l2::Uid =
           FCpuProfilerMetadataFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuProfilerMetadataFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FCpuProfilerMetadataFields::GetUid(void)'::__l2::
              Uid,8);
  return __return_storage_ptr__;
}

// Enter<FCpuStartupModuleFields> @ 14190d240

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuStartupModuleFields>(TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuStartupModuleFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuStartupModuleFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuStartupModuleFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuStartupModuleFields::GetUid(void)'::__l2::Uid =
           FCpuStartupModuleFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuStartupModuleFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FCpuStartupModuleFields::GetUid(void)'::__l2::Uid
              ,0);
  return __return_storage_ptr__;
}

// ScopedStampedEnter<FCpuLoadModuleFields> @ 141913060

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuLoadModuleFields>
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
  Enter<FCpuLoadModuleFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ScopedStampedEnter<FCpuStartupModuleFields> @ 1419130f0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuStartupModuleFields>
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
  Enter<FCpuStartupModuleFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Enter<FCsvProfilerBeginCaptureFields> @ 1419805c0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCsvProfilerBeginCaptureFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCsvProfilerBeginCaptureFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCsvProfilerBeginCaptureFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCsvProfilerBeginCaptureFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCsvProfilerBeginCaptureFields::GetUid(void)'::__l2::Uid
           = FCsvProfilerBeginCaptureFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCsvProfilerBeginCaptureFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCsvProfilerBeginCaptureFields::GetUid(void)'::__l2::
        Uid,0x11);
  return __return_storage_ptr__;
}

// Enter<FCsvProfilerBeginExclusiveStatFields> @ 141980640

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCsvProfilerBeginExclusiveStatFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCsvProfilerBeginExclusiveStatFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCsvProfilerBeginExclusiveStatFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCsvProfilerBeginExclusiveStatFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCsvProfilerBeginExclusiveStatFields::GetUid(void)'::__l2
      ::Uid = FCsvProfilerBeginExclusiveStatFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCsvProfilerBeginExclusiveStatFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCsvProfilerBeginExclusiveStatFields::GetUid(void)'::
        __l2::Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<FCsvProfilerBeginStatFields> @ 1419806c0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCsvProfilerBeginStatFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCsvProfilerBeginStatFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCsvProfilerBeginStatFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCsvProfilerBeginStatFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCsvProfilerBeginStatFields::GetUid(void)'::__l2::Uid =
           FCsvProfilerBeginStatFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCsvProfilerBeginStatFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCsvProfilerBeginStatFields::GetUid(void)'::__l2::Uid,
        0x10);
  return __return_storage_ptr__;
}

// Enter<FCsvProfilerCustomStatFloatFields> @ 141980740

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCsvProfilerCustomStatFloatFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatFloatFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatFloatFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatFloatFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatFloatFields::GetUid(void)'::__l2::
      Uid = FCsvProfilerCustomStatFloatFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatFloatFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatFloatFields::GetUid(void)'::__l2
        ::Uid,0x15);
  return __return_storage_ptr__;
}

// Enter<FCsvProfilerCustomStatIntFields> @ 1419807c0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCsvProfilerCustomStatIntFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatIntFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatIntFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatIntFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatIntFields::GetUid(void)'::__l2::Uid
           = FCsvProfilerCustomStatIntFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatIntFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCsvProfilerCustomStatIntFields::GetUid(void)'::__l2::
        Uid,0x15);
  return __return_storage_ptr__;
}

// Enter<FCsvProfilerEndCaptureFields> @ 141980980

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCsvProfilerEndCaptureFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCsvProfilerEndCaptureFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCsvProfilerEndCaptureFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCsvProfilerEndCaptureFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCsvProfilerEndCaptureFields::GetUid(void)'::__l2::Uid =
           FCsvProfilerEndCaptureFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCsvProfilerEndCaptureFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCsvProfilerEndCaptureFields::GetUid(void)'::__l2::Uid,
        8);
  return __return_storage_ptr__;
}

// Enter<FCsvProfilerEndExclusiveStatFields> @ 141980a00

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCsvProfilerEndExclusiveStatFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCsvProfilerEndExclusiveStatFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCsvProfilerEndExclusiveStatFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCsvProfilerEndExclusiveStatFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCsvProfilerEndExclusiveStatFields::GetUid(void)'::__l2::
      Uid = FCsvProfilerEndExclusiveStatFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCsvProfilerEndExclusiveStatFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCsvProfilerEndExclusiveStatFields::GetUid(void)'::__l2
        ::Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<FCsvProfilerEndStatFields> @ 141980a80

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCsvProfilerEndStatFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCsvProfilerEndStatFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCsvProfilerEndStatFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCsvProfilerEndStatFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCsvProfilerEndStatFields::GetUid(void)'::__l2::Uid =
           FCsvProfilerEndStatFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCsvProfilerEndStatFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCsvProfilerEndStatFields::GetUid(void)'::__l2::Uid,
        0x10);
  return __return_storage_ptr__;
}

// Enter<FCsvProfilerEventFields> @ 141980b00

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCsvProfilerEventFields>(TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCsvProfilerEventFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCsvProfilerEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCsvProfilerEventFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCsvProfilerEventFields::GetUid(void)'::__l2::Uid =
           FCsvProfilerEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCsvProfilerEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCsvProfilerEventFields::GetUid(void)'::__l2::Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<FCsvProfilerMetadataFields> @ 141980b80

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCsvProfilerMetadataFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCsvProfilerMetadataFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCsvProfilerMetadataFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCsvProfilerMetadataFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCsvProfilerMetadataFields::GetUid(void)'::__l2::Uid =
           FCsvProfilerMetadataFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCsvProfilerMetadataFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FCsvProfilerMetadataFields::GetUid(void)'::__l2::Uid,0)
  ;
  return __return_storage_ptr__;
}

// Enter<FIoStoreBackendNameFields> @ 141980f00

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FIoStoreBackendNameFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FIoStoreBackendNameFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FIoStoreBackendNameFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FIoStoreBackendNameFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FIoStoreBackendNameFields::GetUid(void)'::__l2::Uid =
           FIoStoreBackendNameFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FIoStoreBackendNameFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FIoStoreBackendNameFields::GetUid(void)'::__l2::
              Uid,8);
  return __return_storage_ptr__;
}

// Enter<FIoStoreRequestCompletedFields> @ 141980f80

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FIoStoreRequestCompletedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FIoStoreRequestCompletedFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FIoStoreRequestCompletedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FIoStoreRequestCompletedFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FIoStoreRequestCompletedFields::GetUid(void)'::__l2::Uid
           = FIoStoreRequestCompletedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FIoStoreRequestCompletedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FIoStoreRequestCompletedFields::GetUid(void)'::__l2::
        Uid,0x18);
  return __return_storage_ptr__;
}

// Enter<FIoStoreRequestCreateFields> @ 141981000

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FIoStoreRequestCreateFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FIoStoreRequestCreateFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FIoStoreRequestCreateFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FIoStoreRequestCreateFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FIoStoreRequestCreateFields::GetUid(void)'::__l2::Uid =
           FIoStoreRequestCreateFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FIoStoreRequestCreateFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FIoStoreRequestCreateFields::GetUid(void)'::__l2::Uid,
        0x31);
  return __return_storage_ptr__;
}

// Enter<FIoStoreRequestFailedFields> @ 141981080

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FIoStoreRequestFailedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FIoStoreRequestFailedFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FIoStoreRequestFailedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FIoStoreRequestFailedFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FIoStoreRequestFailedFields::GetUid(void)'::__l2::Uid =
           FIoStoreRequestFailedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FIoStoreRequestFailedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FIoStoreRequestFailedFields::GetUid(void)'::__l2::Uid,
        0x10);
  return __return_storage_ptr__;
}

// Enter<FIoStoreRequestStartedFields> @ 141981100

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FIoStoreRequestStartedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FIoStoreRequestStartedFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FIoStoreRequestStartedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FIoStoreRequestStartedFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FIoStoreRequestStartedFields::GetUid(void)'::__l2::Uid =
           FIoStoreRequestStartedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FIoStoreRequestStartedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FIoStoreRequestStartedFields::GetUid(void)'::__l2::Uid,
        0x18);
  return __return_storage_ptr__;
}

// Enter<FIoStoreRequestUnresolvedFields> @ 141981180

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FIoStoreRequestUnresolvedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FIoStoreRequestUnresolvedFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FIoStoreRequestUnresolvedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FIoStoreRequestUnresolvedFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FIoStoreRequestUnresolvedFields::GetUid(void)'::__l2::Uid
           = FIoStoreRequestUnresolvedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FIoStoreRequestUnresolvedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FIoStoreRequestUnresolvedFields::GetUid(void)'::__l2::
        Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<FMemoryAllocFields> @ 141981200

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryAllocFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryAllocFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryAllocFields::GetUid(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryAllocFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryAllocFields::GetUid(void)'::__l2::Uid =
           FMemoryAllocFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryAllocFields::GetUid(void)'::
                           __l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryAllocFields::GetUid(void)'::__l2::Uid,0x12);
  return __return_storage_ptr__;
}

// Enter<FMemoryAllocSystemFields> @ 141981280

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryAllocSystemFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryAllocSystemFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryAllocSystemFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryAllocSystemFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryAllocSystemFields::GetUid(void)'::__l2::Uid =
           FMemoryAllocSystemFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryAllocSystemFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryAllocSystemFields::GetUid(void)'::__l2::Uid,0x11
       );
  return __return_storage_ptr__;
}

// Enter<FMemoryAllocVideoFields> @ 141981300

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryAllocVideoFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryAllocVideoFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryAllocVideoFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryAllocVideoFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryAllocVideoFields::GetUid(void)'::__l2::Uid =
           FMemoryAllocVideoFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryAllocVideoFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryAllocVideoFields::GetUid(void)'::__l2::Uid,0x11)
  ;
  return __return_storage_ptr__;
}

// Enter<FMemoryCallstackSpecFields> @ 141981380

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryCallstackSpecFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryCallstackSpecFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryCallstackSpecFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryCallstackSpecFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryCallstackSpecFields::GetUid(void)'::__l2::Uid =
           FMemoryCallstackSpecFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryCallstackSpecFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FMemoryCallstackSpecFields::GetUid(void)'::__l2::
              Uid,4);
  return __return_storage_ptr__;
}

// Enter<FMemoryFreeFields> @ 141981400

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryFreeFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryFreeFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryFreeFields::GetUid(void)'::__l2
                         ::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryFreeFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryFreeFields::GetUid(void)'::__l2::Uid =
           FMemoryFreeFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryFreeFields::GetUid(void)'::
                           __l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryFreeFields::GetUid(void)'::__l2::Uid,0xd);
  return __return_storage_ptr__;
}

// Enter<FMemoryFreeSystemFields> @ 141981480

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryFreeSystemFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryFreeSystemFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryFreeSystemFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryFreeSystemFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryFreeSystemFields::GetUid(void)'::__l2::Uid =
           FMemoryFreeSystemFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryFreeSystemFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryFreeSystemFields::GetUid(void)'::__l2::Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<FMemoryFreeVideoFields> @ 141981500

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryFreeVideoFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryFreeVideoFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryFreeVideoFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryFreeVideoFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryFreeVideoFields::GetUid(void)'::__l2::Uid =
           FMemoryFreeVideoFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryFreeVideoFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryFreeVideoFields::GetUid(void)'::__l2::Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<FMemoryHeapMarkAllocFields> @ 141981580

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryHeapMarkAllocFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryHeapMarkAllocFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryHeapMarkAllocFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryHeapMarkAllocFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryHeapMarkAllocFields::GetUid(void)'::__l2::Uid =
           FMemoryHeapMarkAllocFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryHeapMarkAllocFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryHeapMarkAllocFields::GetUid(void)'::__l2::Uid,
        0x12);
  return __return_storage_ptr__;
}

// Enter<FMemoryHeapUnmarkAllocFields> @ 1419816a0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryHeapUnmarkAllocFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryHeapUnmarkAllocFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryHeapUnmarkAllocFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryHeapUnmarkAllocFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryHeapUnmarkAllocFields::GetUid(void)'::__l2::Uid =
           FMemoryHeapUnmarkAllocFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryHeapUnmarkAllocFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryHeapUnmarkAllocFields::GetUid(void)'::__l2::Uid,
        0x10);
  return __return_storage_ptr__;
}

// Enter<FMemoryMarkerFields> @ 1419817a0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryMarkerFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryMarkerFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryMarkerFields::GetUid(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryMarkerFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryMarkerFields::GetUid(void)'::__l2::Uid =
           FMemoryMarkerFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryMarkerFields::GetUid(void)'::
                           __l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryMarkerFields::GetUid(void)'::__l2::Uid,8);
  return __return_storage_ptr__;
}

// Enter<FMemoryMemoryScopeFields> @ 141981820

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryMemoryScopeFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryMemoryScopeFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryMemoryScopeFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryMemoryScopeFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryMemoryScopeFields::GetUid(void)'::__l2::Uid =
           FMemoryMemoryScopeFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryMemoryScopeFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FMemoryMemoryScopeFields::GetUid(void)'::__l2::
              Uid,4);
  return __return_storage_ptr__;
}

// Enter<FMemoryMemoryScopePtrFields> @ 1419818a0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryMemoryScopePtrFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryMemoryScopePtrFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryMemoryScopePtrFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryMemoryScopePtrFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryMemoryScopePtrFields::GetUid(void)'::__l2::Uid =
           FMemoryMemoryScopePtrFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryMemoryScopePtrFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FMemoryMemoryScopePtrFields::GetUid(void)'::__l2
              ::Uid,9);
  return __return_storage_ptr__;
}

// Enter<FMemoryMemorySwapOpFields> @ 141981920

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryMemorySwapOpFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::GetUid(void)'::__l2::Uid =
           FMemoryMemorySwapOpFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::GetUid(void)'::__l2::Uid,
        0x11);
  return __return_storage_ptr__;
}

// Enter<FMemoryReallocAllocFields> @ 1419819a0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryReallocAllocFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryReallocAllocFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryReallocAllocFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryReallocAllocFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryReallocAllocFields::GetUid(void)'::__l2::Uid =
           FMemoryReallocAllocFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryReallocAllocFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryReallocAllocFields::GetUid(void)'::__l2::Uid,
        0x12);
  return __return_storage_ptr__;
}

// Enter<FMemoryReallocAllocSystemFields> @ 141981a20

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryReallocAllocSystemFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryReallocAllocSystemFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryReallocAllocSystemFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryReallocAllocSystemFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryReallocAllocSystemFields::GetUid(void)'::__l2::Uid
           = FMemoryReallocAllocSystemFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryReallocAllocSystemFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryReallocAllocSystemFields::GetUid(void)'::__l2::
        Uid,0x11);
  return __return_storage_ptr__;
}

// Enter<FMemoryReallocFreeFields> @ 141981aa0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryReallocFreeFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryReallocFreeFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryReallocFreeFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryReallocFreeFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryReallocFreeFields::GetUid(void)'::__l2::Uid =
           FMemoryReallocFreeFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryReallocFreeFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryReallocFreeFields::GetUid(void)'::__l2::Uid,0xd)
  ;
  return __return_storage_ptr__;
}

// Enter<FMemoryReallocFreeSystemFields> @ 141981b20

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryReallocFreeSystemFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryReallocFreeSystemFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryReallocFreeSystemFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryReallocFreeSystemFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryReallocFreeSystemFields::GetUid(void)'::__l2::Uid
           = FMemoryReallocFreeSystemFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryReallocFreeSystemFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryReallocFreeSystemFields::GetUid(void)'::__l2::
        Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<FMemoryUpdateAllocFields> @ 141981c40

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMemoryUpdateAllocFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMemoryUpdateAllocFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryUpdateAllocFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryUpdateAllocFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMemoryUpdateAllocFields::GetUid(void)'::__l2::Uid =
           FMemoryUpdateAllocFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryUpdateAllocFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMemoryUpdateAllocFields::GetUid(void)'::__l2::Uid,0xd)
  ;
  return __return_storage_ptr__;
}

// Enter<FMetadataStackClearScopeFields> @ 141981cc0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMetadataStackClearScopeFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMetadataStackClearScopeFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMetadataStackClearScopeFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMetadataStackClearScopeFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMetadataStackClearScopeFields::GetUid(void)'::__l2::Uid
           = FMetadataStackClearScopeFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMetadataStackClearScopeFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FMetadataStackClearScopeFields::GetUid(void)'::
              __l2::Uid,0);
  return __return_storage_ptr__;
}

// Enter<FMetadataStackRestoreStackFields> @ 141981d40

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMetadataStackRestoreStackFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMetadataStackRestoreStackFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMetadataStackRestoreStackFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMetadataStackRestoreStackFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMetadataStackRestoreStackFields::GetUid(void)'::__l2::
      Uid = FMetadataStackRestoreStackFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMetadataStackRestoreStackFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMetadataStackRestoreStackFields::GetUid(void)'::__l2::
        Uid,4);
  return __return_storage_ptr__;
}

// Enter<FMetadataStackSaveStackFields> @ 141981dc0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMetadataStackSaveStackFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMetadataStackSaveStackFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMetadataStackSaveStackFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMetadataStackSaveStackFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMetadataStackSaveStackFields::GetUid(void)'::__l2::Uid =
           FMetadataStackSaveStackFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMetadataStackSaveStackFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMetadataStackSaveStackFields::GetUid(void)'::__l2::Uid
        ,4);
  return __return_storage_ptr__;
}

// Enter<FMiscBeginFrameFields> @ 141981e40

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMiscBeginFrameFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMiscBeginFrameFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMiscBeginFrameFields::GetUid(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMiscBeginFrameFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMiscBeginFrameFields::GetUid(void)'::__l2::Uid =
           FMiscBeginFrameFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMiscBeginFrameFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMiscBeginFrameFields::GetUid(void)'::__l2::Uid,9);
  return __return_storage_ptr__;
}

// Enter<FMiscBookmarkFields> @ 141981ec0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMiscBookmarkFields>(TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMiscBookmarkFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMiscBookmarkFields::GetUid(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMiscBookmarkFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMiscBookmarkFields::GetUid(void)'::__l2::Uid =
           FMiscBookmarkFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMiscBookmarkFields::GetUid(void)'::
                           __l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMiscBookmarkFields::GetUid(void)'::__l2::Uid,0x14);
  return __return_storage_ptr__;
}

// Enter<FMiscEndFrameFields> @ 141981fe0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMiscEndFrameFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMiscEndFrameFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMiscEndFrameFields::GetUid(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMiscEndFrameFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMiscEndFrameFields::GetUid(void)'::__l2::Uid =
           FMiscEndFrameFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMiscEndFrameFields::GetUid(void)'::
                           __l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMiscEndFrameFields::GetUid(void)'::__l2::Uid,9);
  return __return_storage_ptr__;
}

// Enter<FMiscRegionBeginFields> @ 141982060

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMiscRegionBeginFields>(TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMiscRegionBeginFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMiscRegionBeginFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMiscRegionBeginFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMiscRegionBeginFields::GetUid(void)'::__l2::Uid =
           FMiscRegionBeginFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMiscRegionBeginFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMiscRegionBeginFields::GetUid(void)'::__l2::Uid,8);
  return __return_storage_ptr__;
}

// Enter<FMiscRegionBeginWithIdFields> @ 1419820e0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMiscRegionBeginWithIdFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMiscRegionBeginWithIdFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMiscRegionBeginWithIdFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMiscRegionBeginWithIdFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMiscRegionBeginWithIdFields::GetUid(void)'::__l2::Uid =
           FMiscRegionBeginWithIdFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMiscRegionBeginWithIdFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMiscRegionBeginWithIdFields::GetUid(void)'::__l2::Uid,
        8);
  return __return_storage_ptr__;
}

// Enter<FMiscRegionEndFields> @ 141982160

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMiscRegionEndFields>(TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMiscRegionEndFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMiscRegionEndFields::GetUid(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMiscRegionEndFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMiscRegionEndFields::GetUid(void)'::__l2::Uid =
           FMiscRegionEndFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMiscRegionEndFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMiscRegionEndFields::GetUid(void)'::__l2::Uid,8);
  return __return_storage_ptr__;
}

// Enter<FMiscRegionEndWithIdFields> @ 1419821e0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMiscRegionEndWithIdFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMiscRegionEndWithIdFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMiscRegionEndWithIdFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMiscRegionEndWithIdFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMiscRegionEndWithIdFields::GetUid(void)'::__l2::Uid =
           FMiscRegionEndWithIdFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMiscRegionEndWithIdFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMiscRegionEndWithIdFields::GetUid(void)'::__l2::Uid,
        0x10);
  return __return_storage_ptr__;
}

// Enter<FMiscScreenshotChunkFields> @ 141982260

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMiscScreenshotChunkFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMiscScreenshotChunkFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMiscScreenshotChunkFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMiscScreenshotChunkFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMiscScreenshotChunkFields::GetUid(void)'::__l2::Uid =
           FMiscScreenshotChunkFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMiscScreenshotChunkFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMiscScreenshotChunkFields::GetUid(void)'::__l2::Uid,10
       );
  return __return_storage_ptr__;
}

// Enter<FMiscScreenshotHeaderFields> @ 1419822e0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMiscScreenshotHeaderFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::GetUid(void)'::__l2::Uid =
           FMiscScreenshotHeaderFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FMiscScreenshotHeaderFields::GetUid(void)'::__l2::Uid,
        0x1c);
  return __return_storage_ptr__;
}

// Enter<FPlatformEventContextSwitchFields> @ 141982360

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformEventContextSwitchFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformEventContextSwitchFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformEventContextSwitchFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformEventContextSwitchFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformEventContextSwitchFields::GetUid(void)'::__l2::
      Uid = FPlatformEventContextSwitchFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformEventContextSwitchFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FPlatformEventContextSwitchFields::GetUid(void)'
              ::__l2::Uid,0x15);
  return __return_storage_ptr__;
}

// Enter<FPlatformEventStackSampleFields> @ 141982460

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformEventStackSampleFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformEventStackSampleFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformEventStackSampleFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformEventStackSampleFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformEventStackSampleFields::GetUid(void)'::__l2::Uid
           = FPlatformEventStackSampleFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformEventStackSampleFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FPlatformEventStackSampleFields::GetUid(void)'::
              __l2::Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<FPlatformEventThreadNameFields> @ 1419824e0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformEventThreadNameFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformEventThreadNameFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformEventThreadNameFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformEventThreadNameFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformEventThreadNameFields::GetUid(void)'::__l2::Uid
           = FPlatformEventThreadNameFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformEventThreadNameFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FPlatformEventThreadNameFields::GetUid(void)'::
              __l2::Uid,8);
  return __return_storage_ptr__;
}

// Enter<FPlatformFileBeginCloseFields> @ 141982560

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformFileBeginCloseFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformFileBeginCloseFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformFileBeginCloseFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformFileBeginCloseFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformFileBeginCloseFields::GetUid(void)'::__l2::Uid =
           FPlatformFileBeginCloseFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformFileBeginCloseFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FPlatformFileBeginCloseFields::GetUid(void)'::__l2::Uid
        ,0x10);
  return __return_storage_ptr__;
}

// Enter<FPlatformFileBeginOpenFields> @ 1419825e0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformFileBeginOpenFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformFileBeginOpenFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformFileBeginOpenFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformFileBeginOpenFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformFileBeginOpenFields::GetUid(void)'::__l2::Uid =
           FPlatformFileBeginOpenFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformFileBeginOpenFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FPlatformFileBeginOpenFields::GetUid(void)'::__l2::Uid,
        8);
  return __return_storage_ptr__;
}

// Enter<FPlatformFileBeginReOpenFields> @ 141982660

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformFileBeginReOpenFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformFileBeginReOpenFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformFileBeginReOpenFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformFileBeginReOpenFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformFileBeginReOpenFields::GetUid(void)'::__l2::Uid
           = FPlatformFileBeginReOpenFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformFileBeginReOpenFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FPlatformFileBeginReOpenFields::GetUid(void)'::__l2::
        Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<FPlatformFileBeginReadFields> @ 1419826e0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformFileBeginReadFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformFileBeginReadFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformFileBeginReadFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformFileBeginReadFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformFileBeginReadFields::GetUid(void)'::__l2::Uid =
           FPlatformFileBeginReadFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformFileBeginReadFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FPlatformFileBeginReadFields::GetUid(void)'::__l2::Uid,
        0x28);
  return __return_storage_ptr__;
}

// Enter<FPlatformFileBeginWriteFields> @ 141982760

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformFileBeginWriteFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformFileBeginWriteFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformFileBeginWriteFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformFileBeginWriteFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformFileBeginWriteFields::GetUid(void)'::__l2::Uid =
           FPlatformFileBeginWriteFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformFileBeginWriteFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FPlatformFileBeginWriteFields::GetUid(void)'::__l2::Uid
        ,0x28);
  return __return_storage_ptr__;
}

// Enter<FPlatformFileEndCloseFields> @ 1419827e0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformFileEndCloseFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformFileEndCloseFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformFileEndCloseFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformFileEndCloseFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformFileEndCloseFields::GetUid(void)'::__l2::Uid =
           FPlatformFileEndCloseFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformFileEndCloseFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FPlatformFileEndCloseFields::GetUid(void)'::__l2::Uid,8
       );
  return __return_storage_ptr__;
}

// Enter<FPlatformFileEndOpenFields> @ 141982860

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformFileEndOpenFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformFileEndOpenFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformFileEndOpenFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformFileEndOpenFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformFileEndOpenFields::GetUid(void)'::__l2::Uid =
           FPlatformFileEndOpenFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformFileEndOpenFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FPlatformFileEndOpenFields::GetUid(void)'::__l2::Uid,
        0x10);
  return __return_storage_ptr__;
}

// Enter<FPlatformFileEndReOpenFields> @ 1419828e0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformFileEndReOpenFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformFileEndReOpenFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformFileEndReOpenFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformFileEndReOpenFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformFileEndReOpenFields::GetUid(void)'::__l2::Uid =
           FPlatformFileEndReOpenFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformFileEndReOpenFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FPlatformFileEndReOpenFields::GetUid(void)'::__l2::Uid,
        0x10);
  return __return_storage_ptr__;
}

// Enter<FPlatformFileEndReadFields> @ 141982960

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformFileEndReadFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformFileEndReadFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformFileEndReadFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformFileEndReadFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformFileEndReadFields::GetUid(void)'::__l2::Uid =
           FPlatformFileEndReadFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformFileEndReadFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FPlatformFileEndReadFields::GetUid(void)'::__l2::Uid,
        0x18);
  return __return_storage_ptr__;
}

// Enter<FPlatformFileEndWriteFields> @ 1419829e0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FPlatformFileEndWriteFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FPlatformFileEndWriteFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FPlatformFileEndWriteFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FPlatformFileEndWriteFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FPlatformFileEndWriteFields::GetUid(void)'::__l2::Uid =
           FPlatformFileEndWriteFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FPlatformFileEndWriteFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FPlatformFileEndWriteFields::GetUid(void)'::__l2::Uid,
        0x18);
  return __return_storage_ptr__;
}

// Enter<FStringsStaticStringFields> @ 141982a60

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FStringsStaticStringFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  uint uVar1;
  
  uVar1 = FStringsStaticStringFields::GetUid();
  EnterNoSync((FLogScope *)__return_storage_ptr__,uVar1,8);
  return __return_storage_ptr__;
}

// EnterImpl<70> @ 141982a90

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::EnterImpl<70>
          (TLogScope<1> *__return_storage_ptr__,uint param_1,uint param_2)

{
  EnterNoSync((FLogScope *)__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ScopedEnter<FMemoryMemoryScopeFields> @ 1419856f0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::ScopedEnter<FMemoryMemoryScopeFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  longlong lVar1;
  FWriteBuffer *pFVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
  if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 7) {
    pFVar2 = Writer_NextBuffer();
  }
  *pFVar2->Cursor = '\b';
  pFVar2->Cursor = pFVar2->Cursor + 1;
  pFVar2->Committed = pFVar2->Cursor;
  Enter<FMemoryMemoryScopeFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ScopedEnter<FMemoryMemoryScopePtrFields> @ 141985770

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::ScopedEnter<FMemoryMemoryScopePtrFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  longlong lVar1;
  FWriteBuffer *pFVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
  if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 0xc) {
    pFVar2 = Writer_NextBuffer();
  }
  *pFVar2->Cursor = '\b';
  pFVar2->Cursor = pFVar2->Cursor + 1;
  pFVar2->Committed = pFVar2->Cursor;
  Enter<FMemoryMemoryScopePtrFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ScopedEnter<FMetadataStackClearScopeFields> @ 1419857f0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  longlong lVar1;
  FWriteBuffer *pFVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
  if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 3) {
    pFVar2 = Writer_NextBuffer();
  }
  *pFVar2->Cursor = '\b';
  pFVar2->Cursor = pFVar2->Cursor + 1;
  pFVar2->Committed = pFVar2->Cursor;
  Enter<FMetadataStackClearScopeFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ScopedEnter<FMetadataStackRestoreStackFields> @ 141985870

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackRestoreStackFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  longlong lVar1;
  FWriteBuffer *pFVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
  if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 10) {
    pFVar2 = Writer_NextBuffer();
  }
  *pFVar2->Cursor = '\b';
  pFVar2->Cursor = pFVar2->Cursor + 1;
  pFVar2->Committed = pFVar2->Cursor;
  Enter<FMetadataStackRestoreStackFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Enter<FLoadTimeBeginRequestGroupFields> @ 1419be190

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FLoadTimeBeginRequestGroupFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FLoadTimeBeginRequestGroupFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FLoadTimeBeginRequestGroupFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FLoadTimeBeginRequestGroupFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FLoadTimeBeginRequestGroupFields::GetUid(void)'::__l2::
      Uid = FLoadTimeBeginRequestGroupFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FLoadTimeBeginRequestGroupFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FLoadTimeBeginRequestGroupFields::GetUid(void)'::__l2::
        Uid,0);
  return __return_storage_ptr__;
}

// Enter<FLoadTimeEndRequestGroupFields> @ 1419be210

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FLoadTimeEndRequestGroupFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FLoadTimeEndRequestGroupFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FLoadTimeEndRequestGroupFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FLoadTimeEndRequestGroupFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FLoadTimeEndRequestGroupFields::GetUid(void)'::__l2::Uid
           = FLoadTimeEndRequestGroupFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FLoadTimeEndRequestGroupFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FLoadTimeEndRequestGroupFields::GetUid(void)'::__l2::
        Uid,0);
  return __return_storage_ptr__;
}

// Enter<FStatsEventBatch2Fields> @ 141a4dce0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FStatsEventBatch2Fields>(TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FStatsEventBatch2Fields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FStatsEventBatch2Fields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FStatsEventBatch2Fields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FStatsEventBatch2Fields::GetUid(void)'::__l2::Uid =
           FStatsEventBatch2Fields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FStatsEventBatch2Fields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FStatsEventBatch2Fields::GetUid(void)'::__l2::Uid,0);
  return __return_storage_ptr__;
}

// Enter<FStringsFNameFields> @ 141a4de70

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FStringsFNameFields>(TLogScope<1> *__return_storage_ptr__)

{
  uint uVar1;
  
  uVar1 = FStringsFNameFields::GetUid();
  EnterNoSync((FLogScope *)__return_storage_ptr__,uVar1,4);
  return __return_storage_ptr__;
}

// EnterImpl<38> @ 141a4dea0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::EnterImpl<38>
          (TLogScope<1> *__return_storage_ptr__,uint param_1,uint param_2)

{
  EnterNoSync((FLogScope *)__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Enter<FCpuResolveMissingImportsFields> @ 141a9b4c0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuResolveMissingImportsFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuResolveMissingImportsFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuResolveMissingImportsFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuResolveMissingImportsFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuResolveMissingImportsFields::GetUid(void)'::__l2::Uid
           = FCpuResolveMissingImportsFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuResolveMissingImportsFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl<6>(__return_storage_ptr__,
               `public:_static_unsigned_int___cdecl_FCpuResolveMissingImportsFields::GetUid(void)'::
               __l2::Uid,0);
  return __return_storage_ptr__;
}

// Enter<FCpuWindows_LoadLibraryFields> @ 141a9b540

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuWindows_LoadLibraryFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuWindows_LoadLibraryFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuWindows_LoadLibraryFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuWindows_LoadLibraryFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuWindows_LoadLibraryFields::GetUid(void)'::__l2::Uid =
           FCpuWindows_LoadLibraryFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuWindows_LoadLibraryFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl<6>(__return_storage_ptr__,
               `public:_static_unsigned_int___cdecl_FCpuWindows_LoadLibraryFields::GetUid(void)'::
               __l2::Uid,0);
  return __return_storage_ptr__;
}

// ScopedStampedEnter<FCpuResolveMissingImportsFields> @ 141a9b960

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuResolveMissingImportsFields>
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
  Enter<FCpuResolveMissingImportsFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ScopedStampedEnter<FCpuWindows_LoadLibraryFields> @ 141a9b9f0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuWindows_LoadLibraryFields>
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
  Enter<FCpuWindows_LoadLibraryFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}


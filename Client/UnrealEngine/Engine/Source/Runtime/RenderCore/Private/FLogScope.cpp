// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 10

// Enter<FCpuFRDGBufferPool_CreateBufferFields> @ 145d7efe0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuFRDGBufferPool_CreateBufferFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuFRDGBufferPool_CreateBufferFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuFRDGBufferPool_CreateBufferFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuFRDGBufferPool_CreateBufferFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuFRDGBufferPool_CreateBufferFields::GetUid(void)'::
      __l2::Uid = FCpuFRDGBufferPool_CreateBufferFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuFRDGBufferPool_CreateBufferFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FCpuFRDGBufferPool_CreateBufferFields::GetUid(void)'
              ::__l2::Uid,4);
  return __return_storage_ptr__;
}

// Enter<FRDGTraceBufferMessageFields> @ 145d7f060

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FRDGTraceBufferMessageFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::GetUid(void)'::__l2::Uid =
           FRDGTraceBufferMessageFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::GetUid(void)'::__l2::Uid,
        0x28);
  return __return_storage_ptr__;
}

// Enter<FRDGTraceGraphEndMessageFields> @ 145d7f0e0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FRDGTraceGraphEndMessageFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FRDGTraceGraphEndMessageFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FRDGTraceGraphEndMessageFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FRDGTraceGraphEndMessageFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FRDGTraceGraphEndMessageFields::GetUid(void)'::__l2::Uid
           = FRDGTraceGraphEndMessageFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FRDGTraceGraphEndMessageFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FRDGTraceGraphEndMessageFields::GetUid(void)'::__l2::
        Uid,0);
  return __return_storage_ptr__;
}

// Enter<FRDGTraceGraphMessageFields> @ 145d7f160

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FRDGTraceGraphMessageFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::GetUid(void)'::__l2::Uid =
           FRDGTraceGraphMessageFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::GetUid(void)'::__l2::Uid,
        0x14);
  return __return_storage_ptr__;
}

// Enter<FRDGTracePassMessageFields> @ 145d7f1e0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FRDGTracePassMessageFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::GetUid(void)'::__l2::Uid =
           FRDGTracePassMessageFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::GetUid(void)'::__l2::Uid,
        0x2b);
  return __return_storage_ptr__;
}

// Enter<FRDGTraceScopeMessageFields> @ 145d7f260

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FRDGTraceScopeMessageFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FRDGTraceScopeMessageFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FRDGTraceScopeMessageFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FRDGTraceScopeMessageFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FRDGTraceScopeMessageFields::GetUid(void)'::__l2::Uid =
           FRDGTraceScopeMessageFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FRDGTraceScopeMessageFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FRDGTraceScopeMessageFields::GetUid(void)'::__l2::Uid,
        0xb);
  return __return_storage_ptr__;
}

// Enter<FRDGTraceTextureMessageFields> @ 145d7f2e0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FRDGTraceTextureMessageFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::GetUid(void)'::__l2::Uid =
           FRDGTraceTextureMessageFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::GetUid(void)'::__l2::Uid
        ,0x52);
  return __return_storage_ptr__;
}

// ScopedStampedEnter<FCpuFRDGBufferPool_CreateBufferFields> @ 145d89da0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuFRDGBufferPool_CreateBufferFields>
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
  Enter<FCpuFRDGBufferPool_CreateBufferFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Enter<FCpuFRenderTargetPool_CreateTextureFields> @ 145de4320

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FCpuFRenderTargetPool_CreateTextureFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FCpuFRenderTargetPool_CreateTextureFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FCpuFRenderTargetPool_CreateTextureFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FCpuFRenderTargetPool_CreateTextureFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FCpuFRenderTargetPool_CreateTextureFields::GetUid(void)'
      ::__l2::Uid = FCpuFRenderTargetPool_CreateTextureFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FCpuFRenderTargetPool_CreateTextureFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FCpuFRenderTargetPool_CreateTextureFields::GetUid(void)'
              ::__l2::Uid,0);
  return __return_storage_ptr__;
}

// ScopedStampedEnter<FCpuFRenderTargetPool_CreateTextureFields> @ 145dea640

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuFRenderTargetPool_CreateTextureFields>
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
  Enter<FCpuFRenderTargetPool_CreateTextureFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}


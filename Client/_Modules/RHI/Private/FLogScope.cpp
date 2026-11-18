// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 9

// Enter<UE::RHI::GPUProfiler::FGpuProfilerEventBeginBreadcrumbFields> @ 145c3e840

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventBeginBreadcrumbFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginBreadcrumbFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginBreadcrumbFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginBreadcrumbFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginBreadcrumbFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerEventBeginBreadcrumbFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginBreadcrumbFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginBreadcrumbFields::GetUid(void)'
        ::__l2::Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<UE::RHI::GPUProfiler::FGpuProfilerEventBeginWorkFields> @ 145c3e8c0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventBeginWorkFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginWorkFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginWorkFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginWorkFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginWorkFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerEventBeginWorkFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginWorkFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBeginWorkFields::GetUid(void)'
        ::__l2::Uid,0x14);
  return __return_storage_ptr__;
}

// Enter<UE::RHI::GPUProfiler::FGpuProfilerEventEndBreadcrumbFields> @ 145c3e9e0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventEndBreadcrumbFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndBreadcrumbFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndBreadcrumbFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndBreadcrumbFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndBreadcrumbFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerEventEndBreadcrumbFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndBreadcrumbFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndBreadcrumbFields::GetUid(void)'
        ::__l2::Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<UE::RHI::GPUProfiler::FGpuProfilerEventEndWorkFields> @ 145c3ea60

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventEndWorkFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndWorkFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndWorkFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndWorkFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndWorkFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerEventEndWorkFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndWorkFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventEndWorkFields::GetUid(void)'
        ::__l2::Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<UE::RHI::GPUProfiler::FGpuProfilerEventFrameBoundaryFields> @ 145c3eae0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventFrameBoundaryFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventFrameBoundaryFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventFrameBoundaryFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventFrameBoundaryFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventFrameBoundaryFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerEventFrameBoundaryFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventFrameBoundaryFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventFrameBoundaryFields::GetUid(void)'
        ::__l2::Uid,8);
  return __return_storage_ptr__;
}

// Enter<UE::RHI::GPUProfiler::FGpuProfilerEventStatsFields> @ 145c3eb60

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventStatsFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventStatsFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventStatsFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventStatsFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventStatsFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerEventStatsFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventStatsFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventStatsFields::GetUid(void)'
        ::__l2::Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<UE::RHI::GPUProfiler::FGpuProfilerEventWaitFields> @ 145c3ebe0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventWaitFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventWaitFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventWaitFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventWaitFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventWaitFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerEventWaitFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventWaitFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventWaitFields::GetUid(void)'
        ::__l2::Uid,0x14);
  return __return_storage_ptr__;
}

// Enter<UE::RHI::GPUProfiler::FGpuProfilerSignalFenceFields> @ 145c3ed80

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerSignalFenceFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerSignalFenceFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerSignalFenceFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerSignalFenceFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerSignalFenceFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerSignalFenceFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerSignalFenceFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerSignalFenceFields::GetUid(void)'
        ::__l2::Uid,0x14);
  return __return_storage_ptr__;
}

// Enter<UE::RHI::GPUProfiler::FGpuProfilerWaitFenceFields> @ 145c3ee00

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerWaitFenceFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerWaitFenceFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerWaitFenceFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerWaitFenceFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerWaitFenceFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerWaitFenceFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerWaitFenceFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerWaitFenceFields::GetUid(void)'
        ::__l2::Uid,0x18);
  return __return_storage_ptr__;
}


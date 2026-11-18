// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// Enter<UE::RHI::GPUProfiler::FGpuProfilerEventBreadcrumbSpecFields> @ 145c3e940

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::
Enter<UE::RHI::GPUProfiler::FGpuProfilerEventBreadcrumbSpecFields>
          (FImportantLogScope *__return_storage_ptr__,uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBreadcrumbSpecFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBreadcrumbSpecFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBreadcrumbSpecFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBreadcrumbSpecFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerEventBreadcrumbSpecFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBreadcrumbSpecFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerEventBreadcrumbSpecFields::GetUid(void)'
            ::__l2::Uid >> 1,param_1 + 0x11);
  __return_storage_ptr__->AuxCursor = __return_storage_ptr__->AuxCursor + 4;
  __return_storage_ptr__->Ptr[__return_storage_ptr__->AuxCursor] = '\x03';
  return __return_storage_ptr__;
}

// Enter<UE::RHI::GPUProfiler::FGpuProfilerInitFields> @ 145c3ec60

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerInitFields>
          (FImportantLogScope *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerInitFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerInitFields::GetUid(void)'
            ::__l2::Uid >> 1,1);
  return __return_storage_ptr__;
}

// Enter<UE::RHI::GPUProfiler::FGpuProfilerQueueSpecFields> @ 145c3ece0

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerQueueSpecFields>
          (FImportantLogScope *__return_storage_ptr__,uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerQueueSpecFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerQueueSpecFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerQueueSpecFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerQueueSpecFields::GetUid(void)'
      ::__l2::Uid = RHI::GPUProfiler::FGpuProfilerQueueSpecFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerQueueSpecFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_UE::RHI::GPUProfiler::FGpuProfilerQueueSpecFields::GetUid(void)'
            ::__l2::Uid >> 1,param_1 + 9);
  __return_storage_ptr__->AuxCursor = __return_storage_ptr__->AuxCursor + 4;
  __return_storage_ptr__->Ptr[__return_storage_ptr__->AuxCursor] = '\x03';
  return __return_storage_ptr__;
}


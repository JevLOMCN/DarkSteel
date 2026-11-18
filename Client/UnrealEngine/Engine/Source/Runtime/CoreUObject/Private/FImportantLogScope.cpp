// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Enter<FLoadTimeClassInfoFields> @ 141f1e8d0

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<FLoadTimeClassInfoFields>
          (FImportantLogScope *__return_storage_ptr__,uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FLoadTimeClassInfoFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FLoadTimeClassInfoFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FLoadTimeClassInfoFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FLoadTimeClassInfoFields::GetUid(void)'::__l2::Uid =
           FLoadTimeClassInfoFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FLoadTimeClassInfoFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_FLoadTimeClassInfoFields::GetUid(void)'::__l2::Uid
            >> 1,param_1 + 0xd);
  __return_storage_ptr__->AuxCursor = __return_storage_ptr__->AuxCursor + 8;
  __return_storage_ptr__->Ptr[__return_storage_ptr__->AuxCursor] = '\x03';
  return __return_storage_ptr__;
}

// Enter<FLoadTimeStartAsyncLoadingFields> @ 141f1ef70

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<FLoadTimeStartAsyncLoadingFields>
          (FImportantLogScope *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'::__l2::
      Uid = FLoadTimeStartAsyncLoadingFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_FLoadTimeStartAsyncLoadingFields::GetUid(void)'::
            __l2::Uid >> 1,8);
  return __return_storage_ptr__;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// Enter<UE::IoStore::FIasChunkRequestFields> @ 14459aa00

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::IoStore::FIasChunkRequestFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::IoStore::FIasChunkRequestFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::IoStore::FIasChunkRequestFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::IoStore::FIasChunkRequestFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::IoStore::FIasChunkRequestFields::GetUid(void)'::__l2
      ::Uid = IoStore::FIasChunkRequestFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::IoStore::FIasChunkRequestFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_UE::IoStore::FIasChunkRequestFields::GetUid(void)'
              ::__l2::Uid,0x31);
  return __return_storage_ptr__;
}


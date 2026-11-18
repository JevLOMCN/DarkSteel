// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Get @ 141944ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPreloadFileRegistry * __cdecl FPreloadFileRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
                  ::__l2::Instance,4000);
      `public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
      ::__l2::Instance.Files._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
      ::__l2::Instance.Files._48_8_ = _UNK_150631d98;
      `public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
      ::__l2::Instance.Files._0_8_ = 0;
      `public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
      ::__l2::Instance.Files._8_8_ = 0;
      `public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
      ::__l2::Instance.Files._32_8_ = 0;
      `public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
      ::__l2::Instance.Files._64_8_ = 0;
      `public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
      ::__l2::Instance.Files._72_4_ = 0;
      atexit(`FPreloadFileRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
              ::__l2::Instance;
    }
  }
  return &`public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
          ::__l2::Instance;
}


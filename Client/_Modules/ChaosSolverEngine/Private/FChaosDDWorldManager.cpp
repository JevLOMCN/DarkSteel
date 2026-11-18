// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// Get @ 146312030

FChaosDDWorldManager * __cdecl FChaosDDWorldManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FChaosDDWorldManager&___ptr64___cdecl_FChaosDDWorldManager::Get(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FChaosDDWorldManager&___ptr64___cdecl_FChaosDDWorldManager::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FChaosDDWorldManager&___ptr64___cdecl_FChaosDDWorldManager::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_FChaosDDWorldManager&___ptr64___cdecl_FChaosDDWorldManager::Get(void)'
                  ::__l2::SManager,4000);
      `public:_static_class_FChaosDDWorldManager&___ptr64___cdecl_FChaosDDWorldManager::Get(void)'::
      __l2::SManager.CDDServerScene = (TSharedPtr<ChaosDD::Private::FChaosDDScene,1>)ZEXT816(0);
      atexit(`FChaosDDWorldManager::Get'::__l2::_dynamic_atexit_destructor_for__SManager__);
      _Init_thread_footer(&`public:_static_class_FChaosDDWorldManager&___ptr64___cdecl_FChaosDDWorldManager::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FChaosDDWorldManager&___ptr64___cdecl_FChaosDDWorldManager::Get(void)'
              ::__l2::SManager;
    }
  }
  return &`public:_static_class_FChaosDDWorldManager&___ptr64___cdecl_FChaosDDWorldManager::Get(void)'
          ::__l2::SManager;
}


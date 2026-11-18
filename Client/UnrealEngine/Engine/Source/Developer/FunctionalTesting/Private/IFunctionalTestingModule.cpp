// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 1

// Get @ 148c8fb50

IFunctionalTestingModule * __cdecl IFunctionalTestingModule::Get(void)

{
  FName FVar1;
  FModuleManager *this;
  IModuleInterface *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_IFunctionalTestingModule&___ptr64___cdecl_IFunctionalTestingModule::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_IFunctionalTestingModule&___ptr64___cdecl_IFunctionalTestingModule::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_IFunctionalTestingModule&___ptr64___cdecl_IFunctionalTestingModule::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_IFunctionalTestingModule&___ptr64___cdecl_IFunctionalTestingModule::Get(void)'
                      ::__l2::FunctionalTesting,L"FunctionalTesting");
      _Init_thread_footer(&`public:_static_class_IFunctionalTestingModule&___ptr64___cdecl_IFunctionalTestingModule::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FModuleManager::Get();
  FVar1 = `public:_static_class_IFunctionalTestingModule&___ptr64___cdecl_IFunctionalTestingModule::Get(void)'
          ::__l2::FunctionalTesting;
  this = FModuleManager::Get();
  pIVar2 = FModuleManager::LoadModuleChecked(this,FVar1);
  return (IFunctionalTestingModule *)pIVar2;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 1

// Get @ 146b31880

ILocalizationServiceModule * __cdecl ILocalizationServiceModule::Get(void)

{
  FName FVar1;
  FModuleManager *this;
  IModuleInterface *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
                      ::__l2::LocalizationServiceModule,"LocalizationService");
      _Init_thread_footer(&`public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar1 = `public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
          ::__l2::LocalizationServiceModule;
  this = FModuleManager::Get();
  pIVar2 = FModuleManager::LoadModuleChecked(this,FVar1);
  return (ILocalizationServiceModule *)pIVar2;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// GetModulePtr @ 142ea0450

FSlateReflectorModule * __cdecl FSlateReflectorModule::GetModulePtr(void)

{
  IModuleInterface *pIVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
                      ::__l2::ModuleName,"SlateReflector");
      _Init_thread_footer(&`public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar1 = FModuleManager::GetModulePtr_Internal
                     (`public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
                      ::__l2::ModuleName);
  return (FSlateReflectorModule *)pIVar1;
}


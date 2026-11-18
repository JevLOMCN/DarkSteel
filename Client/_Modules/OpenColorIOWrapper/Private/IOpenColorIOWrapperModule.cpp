// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIOWrapper
// Functions: 2

// ~IOpenColorIOWrapperModule @ 14d7605c0

void __thiscall
IOpenColorIOWrapperModule::~IOpenColorIOWrapperModule(IOpenColorIOWrapperModule *this)

{
  *this = (IOpenColorIOWrapperModule)IModuleInterface::vftable;
  return;
}

// Get @ 14d7623a0

IOpenColorIOWrapperModule * __cdecl IOpenColorIOWrapperModule::Get(void)

{
  FName FVar1;
  FModuleManager *this;
  IModuleInterface *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_IOpenColorIOWrapperModule&___ptr64___cdecl_IOpenColorIOWrapperModule::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_IOpenColorIOWrapperModule&___ptr64___cdecl_IOpenColorIOWrapperModule::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_IOpenColorIOWrapperModule&___ptr64___cdecl_IOpenColorIOWrapperModule::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_IOpenColorIOWrapperModule&___ptr64___cdecl_IOpenColorIOWrapperModule::Get(void)'
                      ::__l2::ModuleName,"OpenColorIOWrapper");
      _Init_thread_footer(&`public:_static_class_IOpenColorIOWrapperModule&___ptr64___cdecl_IOpenColorIOWrapperModule::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar1 = `public:_static_class_IOpenColorIOWrapperModule&___ptr64___cdecl_IOpenColorIOWrapperModule::Get(void)'
          ::__l2::ModuleName;
  this = FModuleManager::Get();
  pIVar2 = FModuleManager::LoadModuleChecked(this,FVar1);
  return (IOpenColorIOWrapperModule *)pIVar2;
}


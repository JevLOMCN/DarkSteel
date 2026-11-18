// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 2

// ~IWmfMediaModule @ 14ea97fe0

void __thiscall IWmfMediaModule::~IWmfMediaModule(IWmfMediaModule *this)

{
  WmfMediaCodecManager *pWVar1;
  
  this->_padding_ = (longlong)&___7IWmfMediaModule__6B_;
  pWVar1 = (this->CodecManager).Ptr;
  if (pWVar1 != (WmfMediaCodecManager *)0x0) {
    (**(code **)pWVar1->_padding_)(pWVar1,1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// Get @ 14eaac560

IWmfMediaModule * __cdecl IWmfMediaModule::Get(void)

{
  IWmfMediaModule *pIVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_IWmfMediaModule*___ptr64___cdecl_IWmfMediaModule::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_IWmfMediaModule*___ptr64___cdecl_IWmfMediaModule::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_IWmfMediaModule*___ptr64___cdecl_IWmfMediaModule::Get(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_IWmfMediaModule*___ptr64___cdecl_IWmfMediaModule::Get(void)'
                      ::__l2::ModuleName,"WmfMedia");
      _Init_thread_footer(&`public:_static_class_IWmfMediaModule*___ptr64___cdecl_IWmfMediaModule::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      pIVar1 = (IWmfMediaModule *)
               FModuleManager::GetModulePtr_Internal
                         (`public:_static_class_IWmfMediaModule*___ptr64___cdecl_IWmfMediaModule::Get(void)'
                          ::__l2::ModuleName);
      return pIVar1;
    }
  }
  pIVar1 = (IWmfMediaModule *)
           FModuleManager::GetModulePtr_Internal
                     (`public:_static_class_IWmfMediaModule*___ptr64___cdecl_IWmfMediaModule::Get(void)'
                      ::__l2::ModuleName);
  return pIVar1;
}


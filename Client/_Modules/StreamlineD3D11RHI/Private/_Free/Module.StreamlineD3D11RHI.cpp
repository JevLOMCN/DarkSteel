// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineD3D11RHI
// Functions: 11

// `dynamic_initializer_for_'LogStreamlineD3D11RHI'' @ 141401210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamlineD3D11RHI__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamlineD3D11RHI,L"LogStreamlineD3D11RHI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStreamlineD3D11RHI__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStreamlineD3D11RHI'' @ 141401250

void __cdecl _dynamic_initializer_for__ModuleRegistrantStreamlineD3D11RHI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StreamlineD3D11RHI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StreamlineD3D11RHI",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FStreamlineD3D11RHIModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14de65950

void * __thiscall
IStreamlineRHIModule::_scalar_deleting_destructor_(IStreamlineRHIModule *this,uint param_1)

{
  *this = (IStreamlineRHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de65f90

void * __thiscall
FStreamlineD3D11RHIModule::_scalar_deleting_destructor_
          (FStreamlineD3D11RHIModule *this,uint param_1)

{
  *this = (FStreamlineD3D11RHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IID_PPV_ARGS_Helper<IUnknown> @ 14de65fd0

void ** __cdecl IID_PPV_ARGS_Helper<IUnknown>(IUnknown **param_1)

{
  return param_1;
}

// get<1,TTuple<bool,wchar_t_const_*>_const_> @ 14de65fe0

wchar_t ** __cdecl get<1,TTuple<bool,wchar_t_const_*>_const_>(TTuple<bool,wchar_t_const_*> *param_1)

{
  return (wchar_t **)&param_1->field_0x8;
}

// get<0,TTuple<bool,wchar_t_const_*>_const_> @ 14de65ff0

bool * __cdecl get<0,TTuple<bool,wchar_t_const_*>_const_>(TTuple<bool,wchar_t_const_*> *param_1)

{
  return (bool *)param_1;
}

// `scalar_deleting_destructor' @ 14de665e0

void * __thiscall
FStreamlineD3D11DXGISwapchainProvider::_scalar_deleting_destructor_
          (FStreamlineD3D11DXGISwapchainProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de66610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FStreamlineD3D11RHI::_scalar_deleting_destructor_(FStreamlineD3D11RHI *this,uint param_1)

{
  code *pcVar1;
  FStreamlineD3D11DXGISwapchainProvider *pFVar2;
  IModularFeatures *pIVar3;
  FStreamlineRHI **ppFVar4;
  undefined1 auStack_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  this->_padding_ = (longlong)&___7FStreamlineD3D11RHI__6B_;
  if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FStreamlineD3D11RHI::~FStreamlineD3D11RHI",0x29,Yes);
    UE::Logging::Private::BasicLog<5>
              (&`public:_virtual___cdecl_FStreamlineD3D11RHI::~FStreamlineD3D11RHI(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  if ((this->CustomSwapchainProvider).Ptr != (FStreamlineD3D11DXGISwapchainProvider *)0x0) {
    if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual___cdecl_FStreamlineD3D11RHI::~FStreamlineD3D11RHI(void)___ptr64'
                  ::__l24::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
    }
    pIVar3 = IModularFeatures::Get();
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x30);
    pFVar2 = (this->CustomSwapchainProvider).Ptr;
    ppFVar4 = &pFVar2->StreamlineRHI;
    if (pFVar2 == (FStreamlineD3D11DXGISwapchainProvider *)0x0) {
      ppFVar4 = (FStreamlineRHI **)0x0;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'::
          __l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"DXGISwapchainProvider");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                     ::__l2::FeatureName,ppFVar4);
    pFVar2 = (this->CustomSwapchainProvider).Ptr;
    if (pFVar2 != (FStreamlineD3D11DXGISwapchainProvider *)0x0) {
      (this->CustomSwapchainProvider).Ptr = (FStreamlineD3D11DXGISwapchainProvider *)0x0;
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,1);
    }
  }
  if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FStreamlineD3D11RHI::~FStreamlineD3D11RHI",0x29,Yes);
    UE::Logging::Private::BasicLog<5>
              (&`public:_virtual___cdecl_FStreamlineD3D11RHI::~FStreamlineD3D11RHI(void)___ptr64'::
                __l42::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  pFVar2 = (this->CustomSwapchainProvider).Ptr;
  if (pFVar2 != (FStreamlineD3D11DXGISwapchainProvider *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,1);
  }
  FStreamlineRHI::~FStreamlineRHI((FStreamlineRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// IMPLEMENT_MODULE_StreamlineD3D11RHI @ 14de671a0

void __cdecl IMPLEMENT_MODULE_StreamlineD3D11RHI(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamlineD3D11RHI'' @ 15045fb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamlineD3D11RHI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamlineD3D11RHI);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineD3D12RHI
// Functions: 10

// `dynamic_initializer_for_'LogStreamlineD3D12RHI'' @ 1414012a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamlineD3D12RHI__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamlineD3D12RHI,L"LogStreamlineD3D12RHI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStreamlineD3D12RHI__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStreamlineD3D12RHI'' @ 1414012e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantStreamlineD3D12RHI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StreamlineD3D12RHI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StreamlineD3D12RHI",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FStreamlineD3D12RHIModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14de677b0

void * __thiscall
FStreamlineD3D12RHIModule::_scalar_deleting_destructor_
          (FStreamlineD3D12RHIModule *this,uint param_1)

{
  *this = (FStreamlineD3D12RHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de68020

void * __thiscall
FStreamlineD3D12DXGISwapchainProvider::_scalar_deleting_destructor_
          (FStreamlineD3D12DXGISwapchainProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de68050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FStreamlineD3D12RHI::_scalar_deleting_destructor_(FStreamlineD3D12RHI *this,uint param_1)

{
  code *pcVar1;
  FStreamlineD3D12DXGISwapchainProvider *pFVar2;
  IModularFeatures *pIVar3;
  FStreamlineRHI **ppFVar4;
  undefined1 auStack_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  this->_padding_ = (longlong)&___7FStreamlineD3D12RHI__6B_;
  if (4 < (byte)LogStreamlineD3D12RHI._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FStreamlineD3D12RHI::~FStreamlineD3D12RHI",0x29,Yes);
    UE::Logging::Private::BasicLog<5>
              (&`public:_virtual___cdecl_FStreamlineD3D12RHI::~FStreamlineD3D12RHI(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D12RHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  if ((this->CustomSwapchainProvider).Ptr != (FStreamlineD3D12DXGISwapchainProvider *)0x0) {
    if (4 < (byte)LogStreamlineD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual___cdecl_FStreamlineD3D12RHI::~FStreamlineD3D12RHI(void)___ptr64'
                  ::__l24::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D12RHI);
    }
    pIVar3 = IModularFeatures::Get();
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x30);
    pFVar2 = (this->CustomSwapchainProvider).Ptr;
    ppFVar4 = &pFVar2->StreamlineRHI;
    if (pFVar2 == (FStreamlineD3D12DXGISwapchainProvider *)0x0) {
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
    if (pFVar2 != (FStreamlineD3D12DXGISwapchainProvider *)0x0) {
      (this->CustomSwapchainProvider).Ptr = (FStreamlineD3D12DXGISwapchainProvider *)0x0;
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,1);
    }
  }
  if (4 < (byte)LogStreamlineD3D12RHI._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FStreamlineD3D12RHI::~FStreamlineD3D12RHI",0x29,Yes);
    UE::Logging::Private::BasicLog<5>
              (&`public:_virtual___cdecl_FStreamlineD3D12RHI::~FStreamlineD3D12RHI(void)___ptr64'::
                __l42::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D12RHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  pFVar2 = (this->CustomSwapchainProvider).Ptr;
  if (pFVar2 != (FStreamlineD3D12DXGISwapchainProvider *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,1);
  }
  FStreamlineRHI::~FStreamlineRHI((FStreamlineRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// IMPLEMENT_MODULE_StreamlineD3D12RHI @ 14de69960

void __cdecl IMPLEMENT_MODULE_StreamlineD3D12RHI(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15045fba0

void __cdecl
``FStreamlineD3D12RHI::TagTextures'::__l7::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015045fba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15045fbc0

void __cdecl
``FStreamlineD3D12RHI::TagTextures'::__l36::<lambda_2>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015045fbc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15045fbe0

void __cdecl
``FStreamlineD3D12RHI::TagTextures'::__l46::<lambda_3>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015045fbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
              ::__l2::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamlineD3D12RHI'' @ 15045fc00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamlineD3D12RHI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamlineD3D12RHI);
  return;
}


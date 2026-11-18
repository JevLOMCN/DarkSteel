// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineD3D12RHI
// Functions: 13

// FStreamlineD3D12RHI @ 14de67990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FStreamlineD3D12RHI * __thiscall
FStreamlineD3D12RHI::FStreamlineD3D12RHI
          (FStreamlineD3D12RHI *this,FStreamlineRHICreateArguments *param_1)

{
  TUniquePtr<FStreamlineD3D12DXGISwapchainProvider,TDefaultDelete<FStreamlineD3D12DXGISwapchainProvider>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ID3D12DynamicRHI *pIVar5;
  FStreamlineD3D12RHI *pFVar6;
  FStreamlineD3D12DXGISwapchainProvider *pFVar7;
  longlong lVar8;
  IModularFeatures *pIVar9;
  FStreamlineD3D12DXGISwapchainProvider *pFVar10;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  longlong local_3d0;
  void *local_3c8;
  int local_3c0;
  undefined1 local_3b8 [24];
  longlong local_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  FStreamlineRHI::FStreamlineRHI((FStreamlineRHI *)this,param_1);
  this->_padding_ = (longlong)&___7FStreamlineD3D12RHI__6B_;
  pIVar5 = (ID3D12DynamicRHI *)(**(code **)(param_1->DynamicRHI->_padding_ + 0x30))();
  this->D3D12RHI = pIVar5;
  (this->SLAdapterInfo)._padding_ = 0;
  pTVar1 = &this->CustomSwapchainProvider;
  *(undefined4 *)&(this->SLAdapterInfo)._padding_ = 0x677315f;
  *(undefined4 *)((longlong)&(this->SLAdapterInfo)._padding_ + 4) = 0x4492a746;
  *(undefined4 *)&(this->SLAdapterInfo)._padding_ = 0x61cb429f;
  *(undefined4 *)((longlong)&(this->SLAdapterInfo)._padding_ + 4) = 0xd4c3c942;
  (this->SLAdapterInfo)._padding_ = 1;
  (this->SLAdapterInfo).deviceLUID = (uchar *)0x0;
  (this->SLAdapterInfo).deviceLUIDSizeInBytes = 0;
  (this->SLAdapterInfo).vkPhysicalDevice = (void *)0x0;
  pTVar1->Ptr = (FStreamlineD3D12DXGISwapchainProvider *)0x0;
  if (4 < (byte)LogStreamlineD3D12RHI._0_1_) {
    local_398._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_398,"FStreamlineD3D12RHI::FStreamlineD3D12RHI",0x28,Yes);
    UE::Logging::Private::BasicLog<5>
              (&`public:___cdecl_FStreamlineD3D12RHI::FStreamlineD3D12RHI(FStreamlineRHICreateArguments_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D12RHI);
    if ((void *)local_398._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_398._padding_);
    }
  }
  if ((this->D3D12RHI == (ID3D12DynamicRHI *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("D3D12RHI != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineD3D12RHI\\Private\\StreamlineD3D12RHI.cpp"
                         ,0xb4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FStreamlineD3D12RHI *)(*pcVar2)();
    return pFVar6;
  }
  (**(code **)(*(longlong *)this->D3D12RHI + 0x4c8))(this->D3D12RHI,&local_3c8);
  if ((local_3c0 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AdapterDescs.Num() > 0",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineD3D12RHI\\Private\\StreamlineD3D12RHI.cpp"
                         ,0xb6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FStreamlineD3D12RHI *)(*pcVar2)();
    return pFVar6;
  }
  if ((1 < local_3c0) && (2 < (byte)LogStreamlineD3D12RHI._0_1_)) {
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"FStreamlineD3D12RHI::FStreamlineD3D12RHI",0x28,Yes);
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_FStreamlineD3D12RHI::FStreamlineD3D12RHI(FStreamlineRHICreateArguments_const&___ptr64)___ptr64'
                ::__l38::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D12RHI);
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
  }
  if (local_3c0 < 1) {
    local_3d0 = (longlong)local_3c0;
    local_3d8 = 0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FStreamlineD3D12RHI *)(*pcVar2)();
      return pFVar6;
    }
  }
  this->AdapterLuid = *(_LUID *)((longlong)local_3c8 + 0x128);
  (this->SLAdapterInfo).deviceLUID = (uchar *)&this->AdapterLuid;
  (this->SLAdapterInfo).deviceLUIDSizeInBytes = 8;
  (this->SLAdapterInfo).vkPhysicalDevice = (void *)0x0;
  bVar3 = IsStreamlineSupported();
  if (!bVar3) goto LAB_14de67ceb;
  FStreamlineRHI::IsSwapChainProviderRequired
            ((FStreamlineRHI *)this,(TTuple<bool,FString> *)local_3b8,&this->SLAdapterInfo);
  if (local_3b8[0] == '\0') {
    if (4 < (byte)LogStreamlineD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:___cdecl_FStreamlineD3D12RHI::FStreamlineD3D12RHI(FStreamlineRHICreateArguments_const&___ptr64)___ptr64'
                  ::__l82::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D12RHI);
    }
    uVar4 = 0;
  }
  else {
    if (4 < (byte)LogStreamlineD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:___cdecl_FStreamlineD3D12RHI::FStreamlineD3D12RHI(FStreamlineRHICreateArguments_const&___ptr64)___ptr64'
                  ::__l62::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D12RHI);
    }
    pFVar7 = ::operator_new(0x10);
    pFVar10 = (FStreamlineD3D12DXGISwapchainProvider *)0x0;
    if (pFVar7 != (FStreamlineD3D12DXGISwapchainProvider *)0x0) {
      pFVar7->StreamlineRHI = (FStreamlineRHI *)this;
      pFVar7->_padding_ = (longlong)&___7FStreamlineD3D12DXGISwapchainProvider__6B_;
      pFVar10 = pFVar7;
    }
    if (pTVar1 == (TUniquePtr<FStreamlineD3D12DXGISwapchainProvider,TDefaultDelete<FStreamlineD3D12DXGISwapchainProvider>_>
                   *)&local_3a0) {
      if (pFVar10 != (FStreamlineD3D12DXGISwapchainProvider *)0x0) {
        lVar8 = pFVar10->_padding_;
        goto LAB_14de67c4d;
      }
    }
    else {
      pFVar7 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar10;
      if (pFVar7 != (FStreamlineD3D12DXGISwapchainProvider *)0x0) {
        lVar8 = pFVar7->_padding_;
        pFVar10 = pFVar7;
LAB_14de67c4d:
        (**(code **)(lVar8 + 0x20))(pFVar10,1);
      }
    }
    pIVar9 = IModularFeatures::Get();
    pcVar2 = *(code **)((longlong)*pIVar9 + 0x28);
    pFVar10 = (FStreamlineD3D12DXGISwapchainProvider *)&pTVar1->Ptr->StreamlineRHI;
    if (pTVar1->Ptr == (FStreamlineD3D12DXGISwapchainProvider *)0x0) {
      pFVar10 = (FStreamlineD3D12DXGISwapchainProvider *)0x0;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'::
         __l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"DXGISwapchainProvider");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    (*pcVar2)(pIVar9,`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                     ::__l2::FeatureName,pFVar10);
    uVar4 = 1;
  }
  *(undefined1 *)&this->_padding_ = uVar4;
  if ((void *)local_3b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b8._8_8_);
  }
LAB_14de67ceb:
  if (4 < (byte)LogStreamlineD3D12RHI._0_1_) {
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FStreamlineD3D12RHI::FStreamlineD3D12RHI",0x28,Yes);
    UE::Logging::Private::BasicLog<5>
              (&`public:___cdecl_FStreamlineD3D12RHI::FStreamlineD3D12RHI(FStreamlineRHICreateArguments_const&___ptr64)___ptr64'
                ::__l100::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D12RHI);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  if (local_3c8 != (void *)0x0) {
    FMemory::Free(local_3c8);
  }
  return this;
}

// ~FStreamlineD3D12RHI @ 14de67de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineD3D12RHI::~FStreamlineD3D12RHI(FStreamlineD3D12RHI *this)

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
  return;
}

// APIErrorHandler @ 14de682b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineD3D12RHI::APIErrorHandler(FStreamlineD3D12RHI *this,APIError *param_1)

{
  undefined4 uVar1;
  ID3D12DynamicRHI *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 auStack_868 [32];
  char *local_848;
  undefined4 local_840;
  undefined8 *local_838;
  undefined8 local_828;
  undefined8 local_820;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_868;
  bVar4 = FStreamlineRHI::IsDXGIStatus((FStreamlineRHI *)this,(param_1->field0_0x0).hres);
  if (!bVar4) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,(param_1->field0_0x0).vkRes);
    if (4 < (byte)LogStreamlineD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_void___cdecl_FStreamlineD3D12RHI::APIErrorHandler(sl::APIError_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D12RHI);
    }
    pIVar2 = this->D3D12RHI;
    uVar1 = (param_1->field0_0x0).hres;
    pcVar3 = *(code **)(*(longlong *)pIVar2 + 0x580);
    local_828 = 0;
    local_820 = 0;
    uVar5 = (**(code **)(*(longlong *)pIVar2 + 0x388))(pIVar2);
    local_838 = &local_828;
    local_840 = 0x211;
    local_848 = 
    "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineD3D12RHI\\Private\\StreamlineD3D12RHI.cpp"
    ;
    (*pcVar3)(pIVar2,uVar5,uVar1,"Streamline/DLSSG present");
  }
  return;
}

// GetAdapterInfo @ 14de68700

AdapterInfo * __thiscall FStreamlineD3D12RHI::GetAdapterInfo(FStreamlineD3D12RHI *this)

{
  return &this->SLAdapterInfo;
}

// GetCommandBuffer @ 14de68710

void * __thiscall
FStreamlineD3D12RHI::GetCommandBuffer
          (FStreamlineD3D12RHI *this,FRHICommandList *param_1,FRHITexture *param_2)

{
  ID3D12DynamicRHI *pIVar1;
  longlong lVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  pIVar1 = this->D3D12RHI;
  lVar2 = *(longlong *)pIVar1;
  uVar3 = (**(code **)(lVar2 + 0x528))(pIVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014de68754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar4 = (void *)(**(code **)(lVar2 + 0x4f0))(pIVar1,param_1,uVar3);
  return pvVar4;
}

// GetNativeCommandList @ 14de68760

/* WARNING: Enum "EStreamlineResource": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ID3D12GraphicsCommandList * __thiscall
FStreamlineD3D12RHI::GetNativeCommandList
          (FStreamlineD3D12RHI *this,FRHICommandList *param_1,
          TArrayView<FRHIStreamlineResource_const_,int> *param_2)

{
  uint uVar1;
  ID3D12DynamicRHI *pIVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  ID3D12GraphicsCommandList *pIVar7;
  FRHIStreamlineResource *pFVar8;
  FRHIStreamlineResource *pFVar9;
  
  pFVar8 = param_2->DataPtr;
  pFVar9 = pFVar8 + param_2->ArrayNum;
  while( true ) {
    if (pFVar8 == pFVar9) {
      return (ID3D12GraphicsCommandList *)0x0;
    }
    if (pFVar8->Texture != (FRHITexture *)0x0) break;
    pFVar8 = pFVar8 + 1;
  }
  uVar1 = (uint)pFVar8->Texture->_padding_;
  if ((((uVar1 >> 0x1e & 1) != 0) || ((uVar1 & 0x3fffffff) == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource.Texture->IsValid()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineD3D12RHI\\Private\\StreamlineD3D12RHI.cpp"
                         ,0x137,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pIVar7 = (ID3D12GraphicsCommandList *)(*pcVar4)();
    return pIVar7;
  }
  pIVar2 = this->D3D12RHI;
  lVar3 = *(longlong *)pIVar2;
  uVar6 = (**(code **)(lVar3 + 0x528))(pIVar2,pFVar8->Texture);
                    /* WARNING: Could not recover jumptable at 0x00014de6881d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar7 = (ID3D12GraphicsCommandList *)(**(code **)(lVar3 + 0x4f0))(pIVar2,param_1,uVar6);
  return pIVar7;
}

// IsDLSSGSupportedByRHI @ 14de68870

bool __thiscall FStreamlineD3D12RHI::IsDLSSGSupportedByRHI(FStreamlineD3D12RHI *this)

{
  return true;
}

// IsDeepDVCSupportedByRHI @ 14de68880

bool __thiscall FStreamlineD3D12RHI::IsDeepDVCSupportedByRHI(FStreamlineD3D12RHI *this)

{
  return true;
}

// IsLatewarpSupportedByRHI @ 14de68890

bool __thiscall FStreamlineD3D12RHI::IsLatewarpSupportedByRHI(FStreamlineD3D12RHI *this)

{
  return true;
}

// IsReflexSupportedByRHI @ 14de688a0

bool __thiscall FStreamlineD3D12RHI::IsReflexSupportedByRHI(FStreamlineD3D12RHI *this)

{
  return true;
}

// IsStreamlineSwapchainProxy @ 14de688b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStreamlineD3D12RHI::IsStreamlineSwapchainProxy(FStreamlineD3D12RHI *this,void *param_1)

{
  Result RVar1;
  char *_Str;
  size_t sVar2;
  bool bVar3;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  longlong *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148[0] = (longlong *)0x0;
  RVar1 = SLgetNativeInterface(param_1,local_148);
  if (RVar1 == eOk) {
    bVar3 = local_148[0] != param_1;
  }
  else {
    if (4 < (byte)LogStreamlineD3D12RHI._0_1_) {
      _Str = sl::getResultAsStr(RVar1);
      local_138._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_138.Ptr = (wchar_t *)0x0;
        local_138.StringLength = 0;
      }
      else {
        sVar2 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar2,Yes);
      }
      local_158 = local_138.Ptr;
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FStreamlineD3D12RHI::IsStreamlineSwapchainProxy(void*___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D12RHI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = false;
  }
  if (local_148[0] != (longlong *)0x0) {
    (**(code **)(*local_148[0] + 0x10))();
  }
  return bVar3;
}

// PostStreamlineFeatureEvaluation @ 14de689f0

void __thiscall
FStreamlineD3D12RHI::PostStreamlineFeatureEvaluation
          (FStreamlineD3D12RHI *this,FRHICommandList *param_1,FRHITexture *param_2)

{
  ID3D12DynamicRHI *pIVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (**(code **)(*(longlong *)this->D3D12RHI + 0x528))(this->D3D12RHI,param_2);
  pIVar1 = this->D3D12RHI;
  lVar2 = *(longlong *)pIVar1;
  uVar4 = (**(code **)(lVar2 + 0x4f0))(pIVar1,param_1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00014de68a59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x560))(pIVar1,param_1,uVar3,uVar4);
  return;
}

// TagTextures @ 14de68bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamlineResource": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FStreamlineD3D12RHI::TagTextures
          (FStreamlineD3D12RHI *this,FRHICommandList *param_1,uint param_2,FrameToken *param_3,
          TArrayView<FRHIStreamlineResource_const_,int> *param_4)

{
  ERHIAccess EVar1;
  FRHITexture *pFVar2;
  ID3D12DynamicRHI *pIVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  atomic<unsigned_int> aVar10;
  undefined4 uVar11;
  FRHIBreadcrumbAllocator *pFVar12;
  FRHIBreadcrumbNode *pFVar13;
  ForElementType<sl::Resource> FVar14;
  ForElementType<sl::ResourceTag> FVar15;
  ResourceTag *pRVar16;
  ID3D12GraphicsCommandList *pIVar17;
  uint uVar18;
  longlong lVar19;
  uchar *puVar20;
  FRHIStreamlineResource *pFVar21;
  FRHIStreamlineResource *pFVar22;
  FRHIStreamlineResource *pFVar23;
  ulonglong uVar24;
  undefined1 auStackY_778 [32];
  undefined4 uStack_6f4;
  undefined4 uStack_6d4;
  undefined4 uStack_6b4;
  FRHIBreadcrumbScope local_6a0;
  char local_690;
  TArrayView<FRHIStreamlineResource_const_,int> local_688;
  TArrayView<FRHIStreamlineResource_const_,int> local_678;
  FRHIBreadcrumbScope local_668;
  undefined1 local_658;
  FRHIBreadcrumbScope local_650;
  undefined1 local_640;
  ResourceTag local_638;
  uchar local_5f8 [32];
  ulonglong local_5d8;
  uchar auStack_5d0 [24];
  undefined8 local_5b8;
  uchar auStack_5b0 [40];
  undefined1 local_588 [24];
  longlong local_570;
  uint local_568;
  undefined1 local_560 [24];
  longlong local_548;
  uint local_540;
  ForElementType<sl::ResourceTag> local_538;
  uint local_370;
  uint local_36c;
  ForElementType<sl::Resource> local_368;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_778;
  uVar24 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) <
       `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0x52d5aa10;
    `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = 1;
    `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0x154;
    `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = uStack_6f4;
    `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0;
    `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = 0;
    `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0x52d5aec0;
    `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)
               &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                ::__l2::Desc.Cs,4000);
    `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc.TraceGpuSpecId = 0;
    `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FStreamlineD3D12RHI::TagTextures'::__l7::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar13 = FMemStackBase::Alloc(&pFVar12->Inner,0x50,8);
  pFVar13->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar13->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar13->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar13->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar13->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar13->Data =
       (FRHIBreadcrumbData *)
       &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc;
  pFVar13->Allocator = pFVar12;
  pFVar13->TraceCpuSpecId = 0;
  pFVar13->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar9 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar13->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar13->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar13->ID = uVar9;
  pFVar13->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar13[1]._padding_ =
       (longlong)
       &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc;
  if ((`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
       ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar8 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar8)) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                ::__l2::Desc.Cs);
    if (`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar10 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)
                          CONCAT44(`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                   ::__l2::Desc._padding_._4_4_,
                                   (undefined4)
                                   `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                   ::__l2::Desc._padding_),
                          (char *)CONCAT44(`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                           ::__l2::Desc._padding_._4_4_,
                                           (undefined4)
                                           `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                           ::__l2::Desc._padding_),
                          (uint)`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                ::__l2::Desc._padding_);
      LOCK();
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceCpuSpecId = aVar10;
      UNLOCK();
    }
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)
               &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                ::__l2::Desc.Cs);
  }
  pFVar13->TraceCpuSpecId =
       (uint)`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
             ::__l2::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_6a0,(FRHIComputeCommandList *)param_1,pFVar13);
  local_690 = '\x01';
  if (param_4->ArrayNum != 0) {
    pFVar23 = param_4->DataPtr;
    pFVar21 = pFVar23 + param_4->ArrayNum;
    pFVar22 = pFVar23;
    if (pFVar23 == pFVar21) {
      local_4c = 7;
      local_368.SecondaryData = (ForElementType<sl::Resource>)0x0;
      local_50 = 0;
      local_538.SecondaryData = (ForElementType<sl::ResourceTag>)0x0;
      local_370 = 0;
      local_36c = 7;
    }
    else {
      do {
        pFVar2 = pFVar22->Texture;
        pIVar3 = this->D3D12RHI;
        if (pFVar2 != (FRHITexture *)0x0) {
          lVar19 = *(longlong *)pIVar3;
          uVar11 = (**(code **)(lVar19 + 0x528))(pIVar3,pFVar2);
          (**(code **)(lVar19 + 0x598))(pIVar3,param_1,uVar11,pFVar2);
        }
        pFVar22 = pFVar22 + 1;
      } while (pFVar22 != pFVar21);
      local_4c = 7;
      local_368.SecondaryData = (ForElementType<sl::Resource>)0x0;
      local_50 = 0;
      local_538.SecondaryData = (ForElementType<sl::ResourceTag>)0x0;
      local_370 = 0;
      local_36c = 7;
      do {
        local_638._padding_ = 0;
        local_638._padding_._0_1_ = 0xad;
        local_638._padding_._1_1_ = 'Z';
        local_638._padding_._2_1_ = 'j';
        local_638._padding_._3_1_ = 'L';
        local_638._padding_._4_1_ = 'E';
        local_638._padding_._5_1_ = 0xb4;
        local_638._padding_._6_1_ = 'l';
        local_638._padding_._7_1_ = 'I';
        local_638._padding_._0_1_ = 0x87;
        local_638._padding_._1_1_ = 0xff;
        local_638._padding_._2_1_ = '\x1a';
        local_638._padding_._3_1_ = 0xf3;
        local_638._padding_._4_1_ = 0x84;
        local_638._padding_._5_1_ = '[';
        local_638._padding_._6_1_ = 0xe6;
        local_638._padding_._7_1_ = 'S';
        local_638._padding_ = 1;
        local_638.resource = (Resource *)0x0;
        local_638.type = 0;
        local_638.lifecycle = eOnlyValidNow;
        local_638.extent.top = 0;
        local_638.extent.left = 0;
        local_638.extent.width = 0;
        local_638.extent.height = 0;
        auStack_5d0[0] = '\0';
        auStack_5d0[1] = '\0';
        auStack_5d0[2] = '\0';
        auStack_5d0[3] = '\0';
        auStack_5d0[4] = '\0';
        auStack_5d0[5] = '\0';
        auStack_5d0[6] = '\0';
        auStack_5d0[7] = '\0';
        local_5d8 = 9;
        local_5f8[0] = '\0';
        local_5f8[1] = '\0';
        local_5f8[2] = '\0';
        local_5f8[3] = '\0';
        local_5f8[4] = '\0';
        local_5f8[5] = '\0';
        local_5f8[6] = '\0';
        local_5f8[7] = '\0';
        local_5f8[8] = '\0';
        local_5f8[9] = '\0';
        local_5f8[10] = '\0';
        local_5f8[0xb] = '\0';
        local_5f8[0xc] = '\0';
        local_5f8[0xd] = '\0';
        local_5f8[0xe] = '\0';
        local_5f8[0xf] = '\0';
        local_5f8[0x10] = '\0';
        local_5f8[0x11] = '\0';
        local_5f8[0x12] = '\0';
        local_5f8[0x13] = '\0';
        local_5f8[0x14] = '\0';
        local_5f8[0x15] = '\0';
        local_5f8[0x16] = '\0';
        local_5f8[0x17] = '\0';
        local_5f8[0x18] = '\0';
        local_5f8[0x19] = '\0';
        local_5f8[0x1a] = '\0';
        local_5f8[0x1b] = '\0';
        local_5f8[0x1c] = '\0';
        local_5f8[0x1d] = '\0';
        local_5f8[0x1e] = '\0';
        local_5f8[0x1f] = '\0';
        auStack_5d0[8] = '\0';
        auStack_5d0[9] = '\0';
        auStack_5d0[10] = '\0';
        auStack_5d0[0xb] = '\0';
        auStack_5d0[0xc] = '\0';
        auStack_5d0[0xd] = '\0';
        auStack_5d0[0xe] = '\0';
        auStack_5d0[0xf] = '\0';
        auStack_5d0[0x10] = '\0';
        auStack_5d0[0x11] = '\0';
        auStack_5d0[0x12] = '\0';
        auStack_5d0[0x13] = '\0';
        auStack_5d0[0x14] = '\0';
        auStack_5d0[0x15] = '\0';
        auStack_5d0[0x16] = '\0';
        auStack_5d0[0x17] = '\0';
        local_5b8._0_1_ = '\0';
        local_5b8._1_1_ = '\0';
        local_5b8._2_1_ = '\0';
        local_5b8._3_1_ = '\0';
        local_5b8._4_1_ = '\0';
        local_5b8._5_1_ = '\0';
        local_5b8._6_1_ = '\0';
        local_5b8._7_1_ = '\0';
        auStack_5b0[0] = '\0';
        auStack_5b0[1] = '\0';
        auStack_5b0[2] = '\0';
        auStack_5b0[3] = '\0';
        auStack_5b0[4] = '\0';
        auStack_5b0[5] = '\0';
        auStack_5b0[6] = '\0';
        auStack_5b0[7] = '\0';
        auStack_5b0[8] = '\0';
        auStack_5b0[9] = '\0';
        auStack_5b0[10] = '\0';
        auStack_5b0[0xb] = '\0';
        auStack_5b0[0xc] = '\0';
        auStack_5b0[0xd] = '\0';
        auStack_5b0[0xe] = '\0';
        auStack_5b0[0xf] = '\0';
        auStack_5b0[0x10] = '\0';
        auStack_5b0[0x11] = '\0';
        auStack_5b0[0x12] = '\0';
        auStack_5b0[0x13] = '\0';
        auStack_5b0[0x14] = '\0';
        auStack_5b0[0x15] = '\0';
        auStack_5b0[0x16] = '\0';
        auStack_5b0[0x17] = '\0';
        auStack_5b0[0x18] = '\0';
        auStack_5b0[0x19] = '\0';
        auStack_5b0[0x1a] = '\0';
        auStack_5b0[0x1b] = '\0';
        auStack_5b0[0x1c] = '\0';
        auStack_5b0[0x1d] = '\0';
        auStack_5b0[0x1e] = '\0';
        auStack_5b0[0x1f] = '\0';
        auStack_5b0[0x20] = '\0';
        auStack_5b0[0x21] = '\0';
        auStack_5b0[0x22] = '\0';
        auStack_5b0[0x23] = '\0';
        auStack_5b0[0x24] = '\0';
        auStack_5b0[0x25] = '\0';
        auStack_5b0[0x26] = '\0';
        auStack_5b0[0x27] = '\0';
        switch(pFVar23->StreamlineTag) {
        case MotionVectors:
          local_638.type = 1;
          break;
        case NoWarpMask:
          local_638.type = 0x36;
          break;
        case HUDLessColor:
          local_638.type = 2;
          break;
        case UIColorAndAlpha:
          local_638.type = 0x17;
          break;
        case Backbuffer:
          local_638.type = 0x35;
          break;
        case Last:
          local_638.type = 4;
          break;
        default:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineConversions.h"
                             ,0x45,
                             L"unexpected EStreamlineResource enum value %u. This is a UE Streamline plugin developer bug"
                            );
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        case Depth:
          local_638.type = 0;
        }
        local_638.lifecycle = eOnlyValidNow;
        if (((pFVar23->Texture == (FRHITexture *)0x0) ||
            (uVar9 = (uint)pFVar23->Texture->_padding_, (uVar9 >> 0x1e & 1) != 0)) ||
           ((uVar9 & 0x3fffffff) == 0)) {
          auStack_5d0[0] = '\0';
          auStack_5d0[1] = '\0';
          auStack_5d0[2] = '\0';
          auStack_5d0[3] = '\0';
          auStack_5d0[4] = '\0';
          auStack_5d0[5] = '\0';
          auStack_5d0[6] = '\0';
          auStack_5d0[7] = '\0';
        }
        else {
          auStack_5d0._0_8_ = (**(code **)(pFVar23->Texture->_padding_ + 0x38))();
          local_5d8 = local_5d8 & 0xffffffffffffff00;
          if ((*(int *)&(pFVar23->ViewRect).field0_0x0 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InRect.Min.X >= 0",
                                 "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineConversions.h"
                                 ,0x36,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((*(int *)((longlong)&(pFVar23->ViewRect).field0_0x0 + 4) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InRect.Min.Y >= 0",
                                 "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineConversions.h"
                                 ,0x37,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((*(int *)((longlong)&(pFVar23->ViewRect).field0_0x0 + 8) -
               *(int *)&(pFVar23->ViewRect).field0_0x0 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InRect.Width() >= 0",
                                 "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineConversions.h"
                                 ,0x39,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((*(int *)((longlong)&(pFVar23->ViewRect).field0_0x0 + 0xc) -
               *(int *)((longlong)&(pFVar23->ViewRect).field0_0x0 + 4) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InRect.Height() >= 0",
                                 "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineConversions.h"
                                 ,0x3a,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_638.extent.left = *(uint *)&(pFVar23->ViewRect).field0_0x0;
          local_638.extent.top = *(uint *)((longlong)&(pFVar23->ViewRect).field0_0x0 + 4);
          local_638.extent.height =
               *(int *)((longlong)&(pFVar23->ViewRect).field0_0x0 + 0xc) - local_638.extent.top;
          local_638.extent.width =
               *(int *)((longlong)&(pFVar23->ViewRect).field0_0x0 + 8) - local_638.extent.left;
          if (((pFVar23->StreamlineTag != Backbuffer) && (pFVar23->ResourceRHIAccess == None)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Resource.StreamlineTag == EStreamlineResource::Backbuffer || Resource.ResourceRHIAccess != ERHIAccess::Unknown"
                                 ,
                                 "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineD3D12RHI\\Private\\StreamlineD3D12RHI.cpp"
                                 ,0x18b,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          EVar1 = pFVar23->ResourceRHIAccess;
          uVar18 = (EVar1 & CopySrc) << 4;
          uVar9 = uVar18 | 0x400;
          if ((EVar1 >> 0xd & 1) == 0) {
            uVar9 = uVar18;
          }
          uVar18 = uVar9 | 0x20;
          if ((EVar1 >> 9 & 1) == 0) {
            uVar18 = uVar9;
          }
          uVar9 = uVar18 | 0x10;
          if ((EVar1 >> 0xf & 1) == 0) {
            uVar9 = uVar18;
          }
          uVar18 = uVar9 | 0x40;
          if ((EVar1 & SRVCompute) == None) {
            uVar18 = uVar9;
          }
          uVar9 = uVar18 | 0x80;
          if ((EVar1 & SRVGraphics) == None) {
            uVar9 = uVar18;
          }
          uVar18 = uVar9 | 8;
          if ((EVar1 & UAVMask) == None) {
            uVar18 = uVar9;
          }
          uVar9 = uVar18 | 4;
          if ((EVar1 >> 0xc & 1) == 0) {
            uVar9 = uVar18;
          }
          uVar18 = uVar9 | 0x200;
          if ((EVar1 & IndirectArgs) == None) {
            uVar18 = uVar9;
          }
          local_5b8._0_1_ = (char)uVar18;
          local_5b8._1_1_ = (char)(uVar18 >> 8);
          local_5b8._2_1_ = (char)(uVar18 >> 0x10);
          local_5b8._3_1_ = (char)(uVar18 >> 0x18);
        }
        FVar14 = (ForElementType<sl::Resource>)&local_368;
        if (local_368.SecondaryData != (ForElementType<sl::Resource>)0x0) {
          FVar14 = local_368.SecondaryData;
        }
        if ((ulonglong)FVar14 <= local_5f8) {
          FVar14 = (ForElementType<sl::Resource>)&local_368;
          if (local_368.SecondaryData != (ForElementType<sl::Resource>)0x0) {
            FVar14 = local_368.SecondaryData;
          }
          if ((local_5f8 < (uchar *)((longlong)local_4c * 0x70 + (longlong)FVar14)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (local_50 == local_4c) {
          local_50 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<sl::Resource>_>
                               (0x870,&local_368,&local_4c);
        }
        lVar19 = (longlong)local_50;
        FVar14 = (ForElementType<sl::Resource>)&local_368;
        if (local_368.SecondaryData != (ForElementType<sl::Resource>)0x0) {
          FVar14 = local_368.SecondaryData;
        }
        local_50 = local_50 + 1;
        puVar20 = (uchar *)(lVar19 * 0x70 + (longlong)FVar14);
        *(undefined8 *)puVar20 = local_5f8._0_8_;
        *(undefined8 *)(puVar20 + 8) = local_5f8._8_8_;
        *(undefined8 *)(puVar20 + 0x10) = local_5f8._16_8_;
        *(undefined8 *)(puVar20 + 0x18) = local_5f8._24_8_;
        *(ulonglong *)(puVar20 + 0x20) = local_5d8;
        *(undefined8 *)(puVar20 + 0x28) = auStack_5d0._0_8_;
        *(undefined8 *)(puVar20 + 0x30) = auStack_5d0._8_8_;
        *(undefined8 *)(puVar20 + 0x38) = auStack_5d0._16_8_;
        *(undefined8 *)(puVar20 + 0x40) = local_5b8;
        *(undefined8 *)(puVar20 + 0x48) = auStack_5b0._0_8_;
        *(undefined8 *)(puVar20 + 0x50) = auStack_5b0._8_8_;
        *(undefined8 *)(puVar20 + 0x58) = auStack_5b0._16_8_;
        *(undefined8 *)(puVar20 + 0x60) = auStack_5b0._24_8_;
        *(undefined8 *)(puVar20 + 0x68) = auStack_5b0._32_8_;
        uVar9 = 0;
        if ((int)(local_50 - 1U) < local_50) {
          uVar9 = ~(local_50 - 1U) >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar14 = (ForElementType<sl::Resource>)&local_368;
        if (local_368.SecondaryData != (ForElementType<sl::Resource>)0x0) {
          FVar14 = local_368.SecondaryData;
        }
        local_638.resource = (Resource *)((longlong)(local_50 + -1) * 0x70 + (longlong)FVar14);
        FVar15 = (ForElementType<sl::ResourceTag>)&local_538;
        if (local_538.SecondaryData != (ForElementType<sl::ResourceTag>)0x0) {
          FVar15 = local_538.SecondaryData;
        }
        if ((ulonglong)FVar15 <= &local_638) {
          FVar15 = (ForElementType<sl::ResourceTag>)&local_538;
          if (local_538.SecondaryData != (ForElementType<sl::ResourceTag>)0x0) {
            FVar15 = local_538.SecondaryData;
          }
          if ((&local_638 < (ResourceTag *)((longlong)(int)local_36c * 0x40 + (longlong)FVar15)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (local_370 == local_36c) {
          local_370 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<sl::ResourceTag>_>
                                (0x840,&local_538,(int *)&local_36c);
        }
        FVar15 = (ForElementType<sl::ResourceTag>)&local_538;
        if (local_538.SecondaryData != (ForElementType<sl::ResourceTag>)0x0) {
          FVar15 = local_538.SecondaryData;
        }
        pRVar16 = (ResourceTag *)((longlong)(int)local_370 * 0x40 + (longlong)FVar15);
        pFVar23 = pFVar23 + 1;
        local_370 = local_370 + 1;
        pRVar16->_padding_ = local_638._padding_;
        pRVar16->_padding_ = CONCAT44(local_638._padding_._4_4_,(undefined4)local_638._padding_);
        pRVar16->_padding_ = CONCAT44(local_638._padding_._4_4_,(undefined4)local_638._padding_);
        pRVar16->_padding_ = local_638._padding_;
        pRVar16->resource = local_638.resource;
        pRVar16->type = local_638.type;
        pRVar16->lifecycle = local_638.lifecycle;
        (pRVar16->extent).top = local_638.extent.top;
        (pRVar16->extent).left = local_638.extent.left;
        (pRVar16->extent).width = local_638.extent.width;
        (pRVar16->extent).height = local_638.extent.height;
      } while (pFVar23 != pFVar21);
      uVar24 = (ulonglong)_tls_index;
    }
    cVar7 = local_690;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) <
         `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x52d5aa10;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = 1;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x1af;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = uStack_6d4;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x52d33960;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
                  ::__l2::Desc.Cs,4000);
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
      ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceGpuSpecId = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FStreamlineD3D12RHI::TagTextures'::__l36::<lambda_2>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar13 = FMemStackBase::Alloc(&pFVar12->Inner,0x50,8);
    pFVar13->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar13->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar13->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar13->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar13->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar13->Data =
         (FRHIBreadcrumbData *)
         &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    pFVar13->Allocator = pFVar12;
    pFVar13->TraceCpuSpecId = 0;
    pFVar13->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar9 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar13->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar13->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar13->ID = uVar9;
    pFVar13->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar13[1]._padding_ =
         (longlong)
         &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    if ((`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
         ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar8 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar8)) {
      EnterCriticalSection
                ((LPCRITICAL_SECTION)
                 &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
                  ::__l2::Desc.Cs);
      if (`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
          ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar10 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)
                            CONCAT44(`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
                                     ::__l2::Desc._padding_._4_4_,
                                     (undefined4)
                                     `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
                                     ::__l2::Desc._padding_),
                            (char *)CONCAT44(`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
                                             ::__l2::Desc._padding_._4_4_,
                                             (undefined4)
                                             `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
                                             ::__l2::Desc._padding_),
                            (uint)`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
                                  ::__l2::Desc._padding_);
        LOCK();
        `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = aVar10;
        UNLOCK();
      }
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)
                 &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
                  ::__l2::Desc.Cs);
    }
    pFVar13->TraceCpuSpecId =
         (uint)`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`36'::<lambda_2>::operator()<>(void)const___ptr64'
               ::__l2::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_668,(FRHIComputeCommandList *)param_1,pFVar13);
    uVar9 = *(uint *)&param_1->field_0x29c;
    iVar4 = 0;
    bVar8 = uVar9 != 0;
    if (bVar8) {
      for (; (uVar9 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
      }
    }
    local_658 = 1;
    while (bVar8) {
      (**(code **)(*(longlong *)this->D3D12RHI + 0x590))(this->D3D12RHI,param_1,iVar4);
      uVar9 = uVar9 & ~(1 << ((byte)iVar4 & 0x1f));
      iVar4 = 0;
      bVar8 = uVar9 != 0;
      if (bVar8) {
        for (; (uVar9 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
    }
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_668);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) <
         `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x52d5aa10;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = 1;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x1ce;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = uStack_6b4;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x52d55fe0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
                  ::__l2::Desc.Cs,4000);
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
      ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceGpuSpecId = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FStreamlineD3D12RHI::TagTextures'::__l46::<lambda_3>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar13 = FMemStackBase::Alloc(&pFVar12->Inner,0x50,8);
    pFVar13->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar13->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar13->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar13->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar13->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar13->Data =
         (FRHIBreadcrumbData *)
         &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    pFVar13->Allocator = pFVar12;
    pFVar13->TraceCpuSpecId = 0;
    pFVar13->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar9 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar13->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar13->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar13->ID = uVar9;
    pFVar13->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar13[1]._padding_ =
         (longlong)
         &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    if ((`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
         ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar8 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar8)) {
      EnterCriticalSection
                ((LPCRITICAL_SECTION)
                 &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
                  ::__l2::Desc.Cs);
      if (`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
          ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar10 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)
                            CONCAT44(`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
                                     ::__l2::Desc._padding_._4_4_,
                                     (undefined4)
                                     `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
                                     ::__l2::Desc._padding_),
                            (char *)CONCAT44(`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
                                             ::__l2::Desc._padding_._4_4_,
                                             (undefined4)
                                             `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
                                             ::__l2::Desc._padding_),
                            (uint)`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
                                  ::__l2::Desc._padding_);
        LOCK();
        `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = aVar10;
        UNLOCK();
      }
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)
                 &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
                  ::__l2::Desc.Cs);
    }
    pFVar13->TraceCpuSpecId =
         (uint)`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FStreamlineD3D12RHI::TagTextures(FRHICommandList&___ptr64,unsigned_int,sl::FrameToken_const&___ptr64,TArrayView<FRHIStreamlineResource_const_,int>)___ptr64'::`46'::<lambda_3>::operator()<>(void)const___ptr64'
               ::__l2::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_650,(FRHIComputeCommandList *)param_1,pFVar13);
    local_640 = 1;
    bVar8 = ShouldUseSlSetTag();
    uVar6._0_4_ = param_4->ArrayNum;
    uVar6._4_4_ = *(undefined4 *)&param_4->field_0xc;
    if (bVar8) {
      local_688.DataPtr = param_4->DataPtr;
      local_688._8_8_ = uVar6;
      pIVar17 = GetNativeCommandList(this,param_1,&local_688);
      local_588._0_8_ = 0;
      FVar15 = (ForElementType<sl::ResourceTag>)&local_538;
      if (local_538.SecondaryData != (ForElementType<sl::ResourceTag>)0x0) {
        FVar15 = local_538.SecondaryData;
      }
      local_570 = 1;
      local_588._8_4_ = sl::ViewportHandle::s_structType.data1;
      local_588._12_2_ = sl::ViewportHandle::s_structType.data2;
      local_588._14_2_ = sl::ViewportHandle::s_structType.data3;
      local_588[0x10] = sl::ViewportHandle::s_structType.data4[0];
      local_588[0x11] = sl::ViewportHandle::s_structType.data4[1];
      local_588[0x12] = sl::ViewportHandle::s_structType.data4[2];
      local_588[0x13] = sl::ViewportHandle::s_structType.data4[3];
      local_588[0x14] = sl::ViewportHandle::s_structType.data4[4];
      local_588[0x15] = sl::ViewportHandle::s_structType.data4[5];
      local_588[0x16] = sl::ViewportHandle::s_structType.data4[6];
      local_588[0x17] = sl::ViewportHandle::s_structType.data4[7];
      local_568 = param_2;
      SLsetTag((ViewportHandle *)local_588,(ResourceTag *)FVar15,local_370,pIVar17);
    }
    else {
      local_678.DataPtr = param_4->DataPtr;
      local_678._8_8_ = uVar6;
      pIVar17 = GetNativeCommandList(this,param_1,&local_678);
      FVar15 = (ForElementType<sl::ResourceTag>)&local_538;
      if (local_538.SecondaryData != (ForElementType<sl::ResourceTag>)0x0) {
        FVar15 = local_538.SecondaryData;
      }
      local_560._0_8_ = 0;
      local_560._8_4_ = sl::ViewportHandle::s_structType.data1;
      local_560._12_2_ = sl::ViewportHandle::s_structType.data2;
      local_560._14_2_ = sl::ViewportHandle::s_structType.data3;
      local_560[0x10] = sl::ViewportHandle::s_structType.data4[0];
      local_560[0x11] = sl::ViewportHandle::s_structType.data4[1];
      local_560[0x12] = sl::ViewportHandle::s_structType.data4[2];
      local_560[0x13] = sl::ViewportHandle::s_structType.data4[3];
      local_560[0x14] = sl::ViewportHandle::s_structType.data4[4];
      local_560[0x15] = sl::ViewportHandle::s_structType.data4[5];
      local_560[0x16] = sl::ViewportHandle::s_structType.data4[6];
      local_560[0x17] = sl::ViewportHandle::s_structType.data4[7];
      local_548 = 1;
      local_540 = param_2;
      SLsetTagForFrame(param_3,(ViewportHandle *)local_560,(ResourceTag *)FVar15,local_370,pIVar17);
    }
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_650);
    if (local_538.SecondaryData != (ForElementType<sl::ResourceTag>)0x0) {
      FMemory::Free((void *)local_538.SecondaryData);
    }
    if (local_368.SecondaryData != (ForElementType<sl::Resource>)0x0) {
      FMemory::Free((void *)local_368.SecondaryData);
    }
    if (cVar7 == '\0') {
      return;
    }
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_6a0);
  return;
}


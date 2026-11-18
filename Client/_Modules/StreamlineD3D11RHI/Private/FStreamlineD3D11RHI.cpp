// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineD3D11RHI
// Functions: 12

// FStreamlineD3D11RHI @ 14de66000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FStreamlineD3D11RHI * __thiscall
FStreamlineD3D11RHI::FStreamlineD3D11RHI
          (FStreamlineD3D11RHI *this,FStreamlineRHICreateArguments *param_1)

{
  TUniquePtr<FStreamlineD3D11DXGISwapchainProvider,TDefaultDelete<FStreamlineD3D11DXGISwapchainProvider>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ID3D11DynamicRHI *pIVar5;
  FStreamlineD3D11RHI *pFVar6;
  longlong *plVar7;
  FStreamlineD3D11DXGISwapchainProvider *pFVar8;
  longlong lVar9;
  IModularFeatures *pIVar10;
  FStreamlineD3D11DXGISwapchainProvider *pFVar11;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8 [24];
  longlong local_3b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  undefined1 local_168 [296];
  _LUID local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  FStreamlineRHI::FStreamlineRHI((FStreamlineRHI *)this,param_1);
  this->_padding_ = (longlong)&___7FStreamlineD3D11RHI__6B_;
  pIVar5 = (ID3D11DynamicRHI *)(**(code **)(param_1->DynamicRHI->_padding_ + 0x30))();
  this->D3D11RHI = pIVar5;
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
  pTVar1->Ptr = (FStreamlineD3D11DXGISwapchainProvider *)0x0;
  if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"FStreamlineD3D11RHI::FStreamlineD3D11RHI",0x28,Yes);
    UE::Logging::Private::BasicLog<5>
              (&`public:___cdecl_FStreamlineD3D11RHI::FStreamlineD3D11RHI(FStreamlineRHICreateArguments_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
    if ((void *)local_3a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3a8._padding_);
    }
  }
  if ((this->D3D11RHI == (ID3D11DynamicRHI *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("D3D11RHI != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineD3D11RHI\\Private\\StreamlineD3D11RHI.cpp"
                         ,0x7f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FStreamlineD3D11RHI *)(*pcVar2)();
    return pFVar6;
  }
  plVar7 = (longlong *)(**(code **)(*(longlong *)this->D3D11RHI + 0x4d8))();
  (**(code **)(*plVar7 + 0x40))(plVar7,local_168);
  this->AdapterLuid = local_40;
  (this->SLAdapterInfo).deviceLUID = (uchar *)&this->AdapterLuid;
  (this->SLAdapterInfo).deviceLUIDSizeInBytes = 8;
  (this->SLAdapterInfo).vkPhysicalDevice = (void *)0x0;
  bVar3 = IsStreamlineSupported();
  if (!bVar3) goto LAB_14de662af;
  FStreamlineRHI::IsSwapChainProviderRequired
            ((FStreamlineRHI *)this,(TTuple<bool,FString> *)local_3c8,&this->SLAdapterInfo);
  if (local_3c8[0] == '\0') {
    if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:___cdecl_FStreamlineD3D11RHI::FStreamlineD3D11RHI(FStreamlineRHICreateArguments_const&___ptr64)___ptr64'
                  ::__l54::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
    }
    uVar4 = 0;
  }
  else {
    if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:___cdecl_FStreamlineD3D11RHI::FStreamlineD3D11RHI(FStreamlineRHICreateArguments_const&___ptr64)___ptr64'
                  ::__l34::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
    }
    pFVar8 = ::operator_new(0x10);
    pFVar11 = (FStreamlineD3D11DXGISwapchainProvider *)0x0;
    if (pFVar8 != (FStreamlineD3D11DXGISwapchainProvider *)0x0) {
      pFVar8->StreamlineRHI = (FStreamlineRHI *)this;
      pFVar8->_padding_ = (longlong)&___7FStreamlineD3D11DXGISwapchainProvider__6B_;
      pFVar11 = pFVar8;
    }
    if (pTVar1 == (TUniquePtr<FStreamlineD3D11DXGISwapchainProvider,TDefaultDelete<FStreamlineD3D11DXGISwapchainProvider>_>
                   *)&local_3b0) {
      if (pFVar11 != (FStreamlineD3D11DXGISwapchainProvider *)0x0) {
        lVar9 = pFVar11->_padding_;
        goto LAB_14de6620a;
      }
    }
    else {
      pFVar8 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar11;
      if (pFVar8 != (FStreamlineD3D11DXGISwapchainProvider *)0x0) {
        lVar9 = pFVar8->_padding_;
        pFVar11 = pFVar8;
LAB_14de6620a:
        (**(code **)(lVar9 + 0x20))(pFVar11,1);
      }
    }
    pIVar10 = IModularFeatures::Get();
    pcVar2 = *(code **)((longlong)*pIVar10 + 0x28);
    pFVar11 = (FStreamlineD3D11DXGISwapchainProvider *)&pTVar1->Ptr->StreamlineRHI;
    if (pTVar1->Ptr == (FStreamlineD3D11DXGISwapchainProvider *)0x0) {
      pFVar11 = (FStreamlineD3D11DXGISwapchainProvider *)0x0;
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
    (*pcVar2)(pIVar10,`public:_static_class_FName___cdecl_IDXGISwapchainProvider::GetModularFeatureName(void)'
                      ::__l2::FeatureName,pFVar11);
    uVar4 = 1;
  }
  *(undefined1 *)&this->_padding_ = uVar4;
  if ((void *)local_3c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3c8._8_8_);
  }
LAB_14de662af:
  if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"FStreamlineD3D11RHI::FStreamlineD3D11RHI",0x28,Yes);
    UE::Logging::Private::BasicLog<5>
              (&`public:___cdecl_FStreamlineD3D11RHI::FStreamlineD3D11RHI(FStreamlineRHICreateArguments_const&___ptr64)___ptr64'
                ::__l72::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
  }
  return this;
}

// ~FStreamlineD3D11RHI @ 14de663a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineD3D11RHI::~FStreamlineD3D11RHI(FStreamlineD3D11RHI *this)

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
  return;
}

// APIErrorHandler @ 14de66870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineD3D11RHI::APIErrorHandler(FStreamlineD3D11RHI *this,APIError *param_1)

{
  undefined4 uVar1;
  ID3D11DynamicRHI *pIVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  bVar5 = FStreamlineRHI::IsDXGIStatus((FStreamlineRHI *)this,(param_1->field0_0x0).hres);
  if (!bVar5) {
    if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_void___cdecl_FStreamlineD3D11RHI::APIErrorHandler(sl::APIError_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
    }
    pIVar2 = this->D3D11RHI;
    uVar1 = (param_1->field0_0x0).hres;
    lVar3 = *(longlong *)pIVar2;
    uVar4 = (**(code **)(lVar3 + 0x4c8))(pIVar2);
    (**(code **)(lVar3 + 0x538))
              (pIVar2,uVar4,uVar1,"Streamline/DLSSG present",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineD3D11RHI\\Private\\StreamlineD3D11RHI.cpp"
               ,0x117);
  }
  return;
}

// GetAdapterInfo @ 14de66c60

AdapterInfo * __thiscall FStreamlineD3D11RHI::GetAdapterInfo(FStreamlineD3D11RHI *this)

{
  return &this->SLAdapterInfo;
}

// GetCommandBuffer @ 14de66c70

void * __thiscall
FStreamlineD3D11RHI::GetCommandBuffer
          (FStreamlineD3D11RHI *this,FRHICommandList *param_1,FRHITexture *param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014de66c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(*(longlong *)this->D3D11RHI + 0x4d0))();
  return pvVar1;
}

// IsDLSSGSupportedByRHI @ 14de66cd0

bool __thiscall FStreamlineD3D11RHI::IsDLSSGSupportedByRHI(FStreamlineD3D11RHI *this)

{
  return true;
}

// IsDeepDVCSupportedByRHI @ 14de66ce0

bool __thiscall FStreamlineD3D11RHI::IsDeepDVCSupportedByRHI(FStreamlineD3D11RHI *this)

{
  return true;
}

// IsLatewarpSupportedByRHI @ 14de66cf0

bool __thiscall FStreamlineD3D11RHI::IsLatewarpSupportedByRHI(FStreamlineD3D11RHI *this)

{
  return true;
}

// IsReflexSupportedByRHI @ 14de66d00

bool __thiscall FStreamlineD3D11RHI::IsReflexSupportedByRHI(FStreamlineD3D11RHI *this)

{
  return true;
}

// IsStreamlineSwapchainProxy @ 14de66d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStreamlineD3D11RHI::IsStreamlineSwapchainProxy(FStreamlineD3D11RHI *this,void *param_1)

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
    if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
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
                (&`public:_virtual_bool___cdecl_FStreamlineD3D11RHI::IsStreamlineSwapchainProxy(void*___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
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

// PostStreamlineFeatureEvaluation @ 14de66e50

void __thiscall
FStreamlineD3D11RHI::PostStreamlineFeatureEvaluation
          (FStreamlineD3D11RHI *this,FRHICommandList *param_1,FRHITexture *param_2)

{
  return;
}

// TagTextures @ 14de66e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamlineResource": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FStreamlineD3D11RHI::TagTextures
          (FStreamlineD3D11RHI *this,FRHICommandList *param_1,uint param_2,FrameToken *param_3,
          TArrayView<FRHIStreamlineResource_const_,int> *param_4)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  uint *puVar4;
  FRHIStreamlineResource *pFVar5;
  FRHIStreamlineResource *pFVar6;
  uint uVar7;
  undefined1 auStackY_178 [32];
  ResourceTag local_148;
  Resource local_108;
  undefined1 local_98 [24];
  longlong local_80;
  uint local_78;
  undefined1 local_70 [24];
  longlong local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pvVar3 = (void *)(**(code **)(*(longlong *)this->D3D11RHI + 0x4d0))();
  pFVar6 = param_4->DataPtr;
  pFVar5 = pFVar6 + param_4->ArrayNum;
  if (pFVar6 != pFVar5) {
    puVar4 = (uint *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 4);
    do {
      local_108._padding_ = 0;
      local_108._padding_ = 0;
      local_108._padding_ = 0;
      local_108._padding_ = 0;
      local_108._32_8_ = 0;
      local_108.native = (void *)0x0;
      local_108.memory = (void *)0x0;
      local_108.view = (void *)0x0;
      local_108.state = 0;
      local_108.width = 0;
      local_108.height = 0;
      local_108.nativeFormat = 0;
      local_108.mipLevels = 0;
      local_108.arrayLayers = 0;
      local_108.gpuVirtualAddress = 0;
      local_108.flags = 0;
      local_108.usage = 0;
      local_108.reserved = 0;
      local_108._108_4_ = 0;
      if (((pFVar6->Texture != (FRHITexture *)0x0) &&
          (uVar7 = (uint)pFVar6->Texture->_padding_, (uVar7 >> 0x1e & 1) == 0)) &&
         ((uVar7 & 0x3fffffff) != 0)) {
        local_108.native = (void *)(**(code **)(pFVar6->Texture->_padding_ + 0x38))();
      }
      local_148.resource = &local_108;
      local_108._32_8_ = local_108._32_8_ & 0xffffffffffffff00;
      uVar7 = 0;
      local_108._64_8_ = local_108._64_8_ & 0xffffffff00000000;
      local_148._padding_ = 0;
      local_148._padding_._0_4_ = 0x4c6a5aad;
      local_148._padding_._4_4_ = 0x496cb445;
      local_148._padding_._0_4_ = 0xf31aff87;
      local_148._padding_._4_4_ = 0x53e65b84;
      local_148._padding_ = 1;
      local_148.type = 0;
      local_148.lifecycle = eOnlyValidNow;
      local_148.extent.top = 0;
      local_148.extent.left = 0;
      local_148.extent.width = 0;
      local_148.extent.height = 0;
      switch(puVar4[3]) {
      case 1:
        uVar7 = 1;
        break;
      case 2:
        uVar7 = 0x36;
        break;
      case 3:
        uVar7 = 2;
        break;
      case 4:
        uVar7 = 0x17;
        break;
      case 5:
        uVar7 = 0x35;
        break;
      case 6:
        uVar7 = 4;
        break;
      default:
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineConversions.h"
                           ,0x45,
                           L"unexpected EStreamlineResource enum value %u. This is a UE Streamline plugin developer bug"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      case 0:
      }
      local_148.lifecycle = eOnlyValidNow;
      local_148.type = uVar7;
      if (((int)puVar4[-1] < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InRect.Min.X >= 0",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineConversions.h"
                             ,0x36,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((int)*puVar4 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InRect.Min.Y >= 0",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineConversions.h"
                             ,0x37,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((int)(puVar4[1] - puVar4[-1]) < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InRect.Width() >= 0",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineConversions.h"
                             ,0x39,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((int)(puVar4[2] - *puVar4) < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InRect.Height() >= 0",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineConversions.h"
                             ,0x3a,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_148.extent.left = puVar4[-1];
      local_148.extent.top = *puVar4;
      local_148.extent.height = puVar4[2] - *puVar4;
      local_148.extent.width = puVar4[1] - puVar4[-1];
      bVar2 = ShouldUseSlSetTag();
      if (bVar2) {
        local_98._0_8_ = 0;
        local_80 = 1;
        local_98._8_4_ = sl::ViewportHandle::s_structType.data1;
        local_98._12_2_ = sl::ViewportHandle::s_structType.data2;
        local_98._14_2_ = sl::ViewportHandle::s_structType.data3;
        local_98[0x10] = sl::ViewportHandle::s_structType.data4[0];
        local_98[0x11] = sl::ViewportHandle::s_structType.data4[1];
        local_98[0x12] = sl::ViewportHandle::s_structType.data4[2];
        local_98[0x13] = sl::ViewportHandle::s_structType.data4[3];
        local_98[0x14] = sl::ViewportHandle::s_structType.data4[4];
        local_98[0x15] = sl::ViewportHandle::s_structType.data4[5];
        local_98[0x16] = sl::ViewportHandle::s_structType.data4[6];
        local_98[0x17] = sl::ViewportHandle::s_structType.data4[7];
        local_78 = param_2;
        SLsetTag((ViewportHandle *)local_98,&local_148,1,pvVar3);
      }
      else {
        local_70._0_8_ = 0;
        local_58 = 1;
        local_70._8_4_ = sl::ViewportHandle::s_structType.data1;
        local_70._12_2_ = sl::ViewportHandle::s_structType.data2;
        local_70._14_2_ = sl::ViewportHandle::s_structType.data3;
        local_70[0x10] = sl::ViewportHandle::s_structType.data4[0];
        local_70[0x11] = sl::ViewportHandle::s_structType.data4[1];
        local_70[0x12] = sl::ViewportHandle::s_structType.data4[2];
        local_70[0x13] = sl::ViewportHandle::s_structType.data4[3];
        local_70[0x14] = sl::ViewportHandle::s_structType.data4[4];
        local_70[0x15] = sl::ViewportHandle::s_structType.data4[5];
        local_70[0x16] = sl::ViewportHandle::s_structType.data4[6];
        local_70[0x17] = sl::ViewportHandle::s_structType.data4[7];
        local_50 = param_2;
        SLsetTagForFrame(param_3,(ViewportHandle *)local_70,&local_148,1,pvVar3);
      }
      pFVar6 = pFVar6 + 1;
      puVar4 = puVar4 + 8;
    } while (pFVar6 != pFVar5);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXD3D12RHI
// Functions: 7

// FNGXD3D12RHI @ 14de16520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENGXBinariesSearchOrder": Some values do not have unique names */
/* WARNING: Enum "ENGXProjectIdentifier": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FNGXD3D12RHI * __thiscall
FNGXD3D12RHI::FNGXD3D12RHI(FNGXD3D12RHI *this,FNGXRHICreateArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  HRESULT HVar3;
  int iVar4;
  NVSDK_NGX_Result NVar5;
  ID3D12DynamicRHI *pIVar6;
  ID3D12Device *pIVar7;
  FNGXD3D12RHI *pFVar8;
  ForAnyElementType FVar9;
  undefined1 auStackY_78 [32];
  longlong *local_48;
  FString local_40;
  IID local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  NGXRHI::NGXRHI((NGXRHI *)this,param_1);
  this->_padding_ = (longlong)&___7FNGXD3D12RHI__6B_;
  pIVar6 = (ID3D12DynamicRHI *)(**(code **)(param_1->DynamicRHI->_padding_ + 0x30))();
  this->D3D12RHI = pIVar6;
  pIVar7 = (ID3D12Device *)(**(code **)(*(longlong *)pIVar6 + 0x4e0))(pIVar6);
  if ((this->D3D12RHI == (ID3D12DynamicRHI *)0x0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8935004268994232451>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D12RHI\\Private\\NGXD3D12RHI.cpp"
                         ,0x83,"D3D12RHI"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FNGXD3D12RHI *)(*pcVar1)();
    return pFVar8;
  }
  if ((pIVar7 == (ID3D12Device *)0x0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8935004268994232452>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D12RHI\\Private\\NGXD3D12RHI.cpp"
                         ,0x84,"Direct3DDevice"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FNGXD3D12RHI *)(*pcVar1)();
    return pFVar8;
  }
  HVar3 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_30);
  if (-1 < HVar3) {
    local_48 = (longlong *)0x0;
    iVar4 = (**(code **)*pIVar7)(pIVar7,&local_30,&local_48);
    if (-1 < iVar4) {
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
      }
      NGXRHI::bIsIncompatibleAPICaptureToolActive = true;
      goto LAB_14de16631;
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  NGXRHI::bIsIncompatibleAPICaptureToolActive = false;
LAB_14de16631:
  NGXRHI::GetNGXLogDirectory(&local_40);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_40.Data.ArrayNum != 0) {
    FVar9.Data = local_40.Data.AllocatorInstance.Data;
  }
  NVar5 = Init_NGX_D3D12(this,param_1,(wchar_t *)FVar9.Data,pIVar7,
                         (NVSDK_NGX_FeatureCommonInfo *)&this->_padding_);
  if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
    GetNGXResultAsString(NVar5);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
  }
  *(NVSDK_NGX_Result *)&this->_padding_ = NVar5;
  if (NVar5 == NVSDK_NGX_Result_FAIL_OutOfDate) {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  else if ((NVar5 & 0xfff00000) != NVSDK_NGX_Result_Fail) {
    NGXRHI::bNGXInitialized = true;
    NVar5 = NVSDK_NGX_D3D12_GetCapabilityParameters((NVSDK_NGX_Parameter **)&this->_padding_);
    if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
      GetNGXResultAsString(NVar5);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
    }
    if (NVar5 == NVSDK_NGX_Result_FAIL_OutOfDate) {
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    }
    else if ((NVar5 & 0xfff00000) != NVSDK_NGX_Result_Fail) {
      NGXRHI::FDLSSQueryFeature::QueryDLSSSupport((FDLSSQueryFeature *)&this->_padding_);
    }
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FNGXD3D12RHI @ 14de16920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNGXD3D12RHI::~FNGXD3D12RHI(FNGXD3D12RHI *this)

{
  bool bVar1;
  NVSDK_NGX_Result NVar2;
  ID3D12Device *pIVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->_padding_ = (longlong)&___7FNGXD3D12RHI__6B_;
  if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXD3D12RHI::~FNGXD3D12RHI",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (NGXRHI::bNGXInitialized != false) {
    NGXRHI::ReleaseAllocatedFeatures((NGXRHI *)this);
    if ((NVSDK_NGX_Parameter *)this->_padding_ != (NVSDK_NGX_Parameter *)0x0) {
      NVar2 = NVSDK_NGX_D3D12_DestroyParameters((NVSDK_NGX_Parameter *)this->_padding_);
      if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
      }
    }
    bVar1 = NGXRHI::IsSafeToShutdownNGX((NGXRHI *)this);
    if (bVar1) {
      pIVar3 = (ID3D12Device *)(**(code **)(*(longlong *)this->D3D12RHI + 0x4e0))(this->D3D12RHI,0);
      NVar2 = NVSDK_NGX_D3D12_Shutdown1(pIVar3);
      if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
      }
    }
    NGXRHI::bNGXInitialized = false;
  }
  if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXD3D12RHI::~FNGXD3D12RHI",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  NGXRHI::~NGXRHI((NGXRHI *)this);
  return;
}

// operator() @ 14de16af0

void __thiscall
`FNGXD3D12RHI::ExecuteDLSS'::__l2::<lambda_1>::operator()(void *this,FRHICommandList *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FRHIBreadcrumbScope local_38;
  undefined8 local_28;
  wchar_t *pwStack_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_38.Node._0_4_ = 0x183;
    local_38.RHICmdList = (FRHIComputeCommandList *)0x152d33040;
    local_28 = 0;
    pwStack_20 = L"FlushPendingRHIBarriers";
    ::Desc._padding_._0_4_ = 0x52d33040;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x183;
    ::Desc._padding_._4_4_ = local_38.Node._4_4_;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x52d33960;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(```FNGXD3D12RHI::ExecuteDLSS'::__l2::Desc::operator()'::__l7::<lambda_1>::operator()<>'::
           __l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar5 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x50,8);
  pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar6->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar6->Allocator = pFVar5;
  pFVar6->TraceCpuSpecId = 0;
  pFVar6->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar3 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar6->ID = uVar3;
  pFVar6->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar6[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar2 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar2)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar4 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar4;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar6->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_38,(FRHIComputeCommandList *)param_1,pFVar6);
  uVar3 = *(uint *)&param_1->field_0x29c;
  iVar1 = 0;
  bVar2 = uVar3 != 0;
  if (bVar2) {
    for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  local_28 = CONCAT71(local_28._1_7_,1);
  while (bVar2) {
    (**(code **)(**(longlong **)(*(longlong *)this + 0x110) + 0x590))
              (*(longlong **)(*(longlong *)this + 0x110),param_1,iVar1);
    uVar3 = uVar3 & ~(1 << ((byte)iVar1 & 0x1f));
    iVar1 = 0;
    bVar2 = uVar3 != 0;
    if (bVar2) {
      for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_38);
  return;
}

// ExecuteDLSS @ 14de16fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNGXD3D12RHI::ExecuteDLSS
          (FNGXD3D12RHI *this,FRHICommandList *param_1,FRHIDLSSArguments *param_2,
          TSharedPtr<FDLSSState,1> *param_3)

{
  uint uVar1;
  TSharedPtr<NGXDLSSFeature,1> *pTVar2;
  ID3D12DynamicRHI *pIVar3;
  ID3D12Resource *pIVar4;
  FRHITexture *pFVar5;
  NVSDK_NGX_Parameter *pNVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ID3D12Resource *pIVar19;
  NVSDK_NGX_Dimensions NVar20;
  ID3D12Resource *pIVar21;
  NVSDK_NGX_Coordinates NVar22;
  NVSDK_NGX_Coordinates NVar23;
  NVSDK_NGX_Coordinates NVar24;
  NVSDK_NGX_Coordinates NVar25;
  undefined8 uVar26;
  ID3D12Resource *pIVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  NVSDK_NGX_D3D12_DLSSD_Eval_Params *pNVar34;
  NVSDK_NGX_D3D12_DLSS_Eval_Params *pNVar35;
  bool bVar36;
  NVSDK_NGX_Result NVar37;
  undefined4 uVar38;
  TSharedPtr<NGXDLSSFeature,1> *pTVar39;
  TSharedRef<FD3D12NGXDLSSFeature,1> *pTVar40;
  FDLSSState *pFVar41;
  NGXDLSSFeature *pNVar42;
  NVSDK_NGX_D3D12_DLSS_Eval_Params *pNVar43;
  NVSDK_NGX_D3D12_DLSS_Eval_Params *pNVar44;
  ID3D12Resource *pIVar45;
  NVSDK_NGX_D3D12_DLSSD_Eval_Params *pNVar46;
  NVSDK_NGX_D3D12_DLSSD_Eval_Params *pNVar47;
  NVSDK_NGX_D3D12_DLSS_Eval_Params *pNVar48;
  NVSDK_NGX_D3D12_DLSSD_Eval_Params *pNVar49;
  longlong lVar50;
  FSharedReferencer<1> FVar51;
  uint uVar52;
  ID3D12GraphicsCommandList *pIVar53;
  undefined1 auStackY_c98 [32];
  NVSDK_NGX_Parameter *local_c38;
  NVSDK_NGX_Handle *local_c30;
  ID3D12GraphicsCommandList *local_c28;
  undefined4 local_c20;
  FDLSSState local_c18;
  FDLSSState local_c08;
  FDLSSState local_bf8;
  FDLSSState local_be8;
  FNGXD3D12RHI *local_bd8;
  FRHIDLSSArguments *local_bd0;
  TIntRect<int>_u_0 local_bc8;
  TIntPoint<int>_u_0 local_bb8;
  TIntPoint<int>_u_0 local_bb0;
  int local_ba8;
  int local_ba4;
  int local_ba0;
  undefined1 local_b9c;
  undefined1 local_b9b;
  undefined1 local_b9a;
  undefined1 local_b99;
  uint local_b98;
  uint local_b94;
  ENGXDLSSDenoiserMode local_b90;
  TIntRect<int>_u_0 local_b8c;
  TIntPoint<int>_u_0 local_b7c;
  TIntPoint<int>_u_0 local_b74;
  int local_b6c;
  int local_b68;
  int local_b64;
  undefined1 local_b60;
  undefined1 local_b5f;
  undefined1 local_b5e;
  undefined1 local_b5d;
  uint local_b5c;
  uint local_b58;
  ENGXDLSSDenoiserMode local_b54;
  TIntRect<int>_u_0 local_b50;
  TIntPoint<int>_u_0 local_b40;
  TIntPoint<int>_u_0 local_b38;
  int local_b30;
  int local_b2c;
  int local_b28;
  undefined1 local_b24;
  undefined1 local_b23;
  undefined1 local_b22;
  undefined1 local_b21;
  uint local_b20;
  uint local_b1c;
  ENGXDLSSDenoiserMode local_b18;
  TIntRect<int>_u_0 local_b14;
  TIntPoint<int>_u_0 local_b04;
  TIntPoint<int>_u_0 local_afc;
  int local_af4;
  int local_af0;
  int local_aec;
  undefined1 local_ae8;
  undefined1 local_ae7;
  undefined1 local_ae6;
  undefined1 local_ae5;
  uint local_ae4;
  uint local_ae0;
  ENGXDLSSDenoiserMode local_adc;
  TSharedPtr<NGXDLSSFeature,1> local_ad8;
  TSharedPtr<NGXDLSSFeature,1> local_ac8;
  TSharedRef<FD3D12NGXDLSSFeature,1> local_ab8;
  FString local_aa8;
  FString local_a98;
  TSharedRef<FD3D12NGXDLSSFeature,1> local_a88;
  FString local_a78;
  FString local_a68;
  NVSDK_NGX_D3D12_DLSSD_Eval_Params local_a58;
  NVSDK_NGX_D3D12_DLSS_Eval_Params local_6e8;
  NVSDK_NGX_D3D12_DLSS_Eval_Params local_578;
  NVSDK_NGX_D3D12_DLSSD_Eval_Params local_410;
  NVSDK_NGX_DLSS_Create_Params local_a0;
  NVSDK_NGX_DLSSD_Create_Params local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c98;
  if (((GIsRunningRHIInSeparateThread_InternalUseOnly) && (bVar36 = IsInRHIThread(), !bVar36)) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D12RHI\\Private\\NGXD3D12RHI.cpp"
                          ,0x123,L""), bVar36)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((char)this->_padding_ == '\0') {
    bVar36 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsDLSSAvailable()",
                        "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D12RHI\\Private\\NGXD3D12RHI.cpp"
                        ,0x124,L"");
    if (bVar36) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((char)this->_padding_ == '\0') goto LAB_14de1839f;
  }
  FRHIDLSSArguments::Validate(param_2);
  local_c20 = (**(code **)(*(longlong *)this->D3D12RHI + 0x528))(this->D3D12RHI,param_2->InputColor)
  ;
  local_c28 = (ID3D12GraphicsCommandList *)
              (**(code **)(*(longlong *)this->D3D12RHI + 0x4f0))(this->D3D12RHI,param_1,local_c20);
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar36)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar36 = FDLSSState::RequiresFeatureRecreation(param_3->Object,param_2);
  pIVar45 = (ID3D12Resource *)0x0;
  if (bVar36) {
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((param_3->Object->DLSSFeature).Object != (NGXDLSSFeature *)0x0) {
      if ((param_3->Object == (FDLSSState *)0x0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar36)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pNVar42 = (param_3->Object->DLSSFeature).Object;
      if ((((pNVar42 == (NGXDLSSFeature *)0x0) || (pNVar42->Feature == (NVSDK_NGX_Handle *)0x0)) ||
          (pNVar42->Parameter == (NVSDK_NGX_Parameter *)0x0)) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InDLSSState->DLSSFeature || InDLSSState->HasValidFeature()",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D12RHI\\Private\\NGXD3D12RHI.cpp"
                              ,0x12e,L""), bVar36)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar41 = param_3->Object;
    local_bf8.DLSSFeature.Object = (NGXDLSSFeature *)0x0;
    local_bf8.DLSSFeature.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pFVar41 != &local_bf8) {
      (pFVar41->DLSSFeature).Object = (NGXDLSSFeature *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar41->DLSSFeature).SharedReferenceCount,
                 &local_bf8.DLSSFeature.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bf8.DLSSFeature.SharedReferenceCount.ReferenceController);
  }
  if (param_2->bReset != false) {
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((param_3->Object->DLSSFeature).Object != (NGXDLSSFeature *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InDLSSState->DLSSFeature",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D12RHI\\Private\\NGXD3D12RHI.cpp"
                            ,0x134,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar39 = NGXRHI::FindFreeFeature((NGXRHI *)this,&local_ac8,param_2);
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar2 = &param_3->Object->DLSSFeature;
    if (pTVar2 != pTVar39) {
      pTVar2->Object = pTVar39->Object;
      pTVar39->Object = (NGXDLSSFeature *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&pTVar2->SharedReferenceCount,&pTVar39->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ac8.SharedReferenceCount.ReferenceController);
  }
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar36)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_3->Object->DLSSFeature).Object == (NGXDLSSFeature *)0x0) {
    local_c38 = (NVSDK_NGX_Parameter *)0x0;
    NVar37 = NVSDK_NGX_D3D12_AllocateParameters(&local_c38);
    if ((NVar37 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
      GetNGXResultAsString(NVar37);
      bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(((Result) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D12RHI\\Private\\NGXD3D12RHI.cpp"
                          ,0x13c,L"NVSDK_NGX_D3D12_AllocateParameters failed! (%u %s)");
      if (bVar36) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    NGXRHI::ApplyCommonNGXParameterSettings((NGXRHI *)this,local_c38,param_2);
    uVar1 = param_2->GPUVisibility;
    uVar52 = 1 << ((byte)param_2->GPUNode & 0x1f);
    local_c30 = (NVSDK_NGX_Handle *)0x0;
    if (param_2->DenoiserMode == DLSSRR) {
      FRHIDLSSArguments::GetNGXDLSSRRCreateParams(param_2,&local_80);
      pNVar6 = local_c38;
      NVSDK_NGX_Parameter_SetUI(local_c38,"CreationNodeMask",uVar52);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"VisibilityNodeMask",uVar1);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"Width",local_80.InWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"Height",local_80.InHeight);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"OutWidth",local_80.InTargetWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"OutHeight",local_80.InTargetHeight);
      NVSDK_NGX_Parameter_SetI(pNVar6,"PerfQualityValue",local_80.InPerfQualityValue);
      NVSDK_NGX_Parameter_SetI(pNVar6,"DLSS.Feature.Create.Flags",local_80.InFeatureCreateFlags);
      NVSDK_NGX_Parameter_SetI
                (pNVar6,"DLSS.Enable.Output.Subrects",
                 (uint)(local_80.InEnableOutputSubrects != false));
      NVSDK_NGX_Parameter_SetI(pNVar6,"DLSS.Denoise.Mode",1);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"DLSS.Roughness.Mode",local_80.InRoughnessMode);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"DLSS.Use.HW.Depth",local_80.InUseHWDepth);
      NVar37 = NVSDK_NGX_D3D12_CreateFeature
                         (local_c28,NVSDK_NGX_Feature_RayReconstruction,pNVar6,&local_c30);
      if ((NVar37 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
        if (1 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
          local_b8c._s_0.Min.field0_0x0 =
               (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
          local_b8c._s_0.Max.field0_0x0 =
               (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
          local_b7c = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
          local_b74 = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
          local_b6c = param_2->DLSSPreset;
          local_b68 = param_2->DLSSRRPreset;
          local_b64 = param_2->PerfQuality;
          local_b60 = param_2->bHighResolutionMotionVectors;
          local_b5f = param_2->bUseAutoExposure;
          local_b5e = param_2->bEnableAlphaUpscaling;
          local_b5d = param_2->bReleaseMemoryOnDelete;
          local_b5c = param_2->GPUNode;
          local_b58 = param_2->GPUVisibility;
          local_b54 = param_2->DenoiserMode;
          FDLSSFeatureDesc::GetDebugDescription((FDLSSFeatureDesc *)&local_b8c._s_0,&local_aa8);
          GetNGXResultAsString(NVar37);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
          if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
          }
        }
        pFVar41 = TSharedPtr<FDLSSState,1>::operator->(param_3);
        local_be8.DLSSFeature.Object = (NGXDLSSFeature *)0x0;
        local_be8.DLSSFeature.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pFVar41 != &local_be8) {
          (pFVar41->DLSSFeature).Object = (NGXDLSSFeature *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pFVar41->DLSSFeature).SharedReferenceCount,
                     &local_be8.DLSSFeature.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_be8.DLSSFeature.SharedReferenceCount.ReferenceController);
      }
      else {
        local_bc8._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
        local_bc8._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
        local_bb8 = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
        local_bb0 = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
        local_ba8 = param_2->DLSSPreset;
        local_ba4 = param_2->DLSSRRPreset;
        local_ba0 = param_2->PerfQuality;
        local_b9c = param_2->bHighResolutionMotionVectors;
        local_b9b = param_2->bUseAutoExposure;
        local_b9a = param_2->bEnableAlphaUpscaling;
        local_b99 = param_2->bReleaseMemoryOnDelete;
        local_b98 = param_2->GPUNode;
        local_b94 = param_2->GPUVisibility;
        local_b90 = param_2->DenoiserMode;
        pTVar40 = MakeShared<FD3D12NGXDLSSFeature,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&>
                            (&local_ab8,&local_c30,&local_c38,(FDLSSFeatureDesc *)&local_bc8._s_0,
                             (uint *)&this->_padding_);
        FVar51.ReferenceController = (pTVar40->SharedReferenceCount).ReferenceController;
        pNVar42 = (NGXDLSSFeature *)pTVar40->Object;
        if (FVar51.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar51.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar51.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_c18.DLSSFeature.Object = pNVar42;
        local_c18.DLSSFeature.SharedReferenceCount.ReferenceController = FVar51.ReferenceController;
        pFVar41 = TSharedPtr<FDLSSState,1>::operator->(param_3);
        if (pFVar41 != &local_c18) {
          (pFVar41->DLSSFeature).Object = pNVar42;
          local_c18.DLSSFeature.Object = (NGXDLSSFeature *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pFVar41->DLSSFeature).SharedReferenceCount,
                     &local_c18.DLSSFeature.SharedReferenceCount);
          FVar51.ReferenceController =
               local_c18.DLSSFeature.SharedReferenceCount.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar51.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_ab8.SharedReferenceCount.ReferenceController);
        pTVar39 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
        pNVar42 = TSharedPtr<NGXDLSSFeature,1>::operator->(pTVar39);
        pNVar42->bHasDLSSRR = true;
      }
    }
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((param_3->Object->DLSSFeature).Object == (NGXDLSSFeature *)0x0) {
      FRHIDLSSArguments::GetNGXDLSSCreateParams(param_2,&local_a0);
      pNVar6 = local_c38;
      NVSDK_NGX_Parameter_SetUI(local_c38,"CreationNodeMask",uVar52);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"VisibilityNodeMask",uVar1);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"Width",local_a0.Feature.InWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"Height",local_a0.Feature.InHeight);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"OutWidth",local_a0.Feature.InTargetWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar6,"OutHeight",local_a0.Feature.InTargetHeight);
      NVSDK_NGX_Parameter_SetI(pNVar6,"PerfQualityValue",local_a0.Feature.InPerfQualityValue);
      NVSDK_NGX_Parameter_SetI(pNVar6,"DLSS.Feature.Create.Flags",local_a0.InFeatureCreateFlags);
      NVSDK_NGX_Parameter_SetI
                (pNVar6,"DLSS.Enable.Output.Subrects",
                 (uint)(local_a0.InEnableOutputSubrects != false));
      NVar37 = NVSDK_NGX_D3D12_CreateFeature
                         (local_c28,NVSDK_NGX_Feature_SuperSampling,pNVar6,&local_c30);
      if ((NVar37 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
        local_b38 = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
        local_b50._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
        local_b30 = param_2->DLSSPreset;
        local_b2c = param_2->DLSSRRPreset;
        local_b28 = param_2->PerfQuality;
        local_b24 = param_2->bHighResolutionMotionVectors;
        local_b23 = param_2->bUseAutoExposure;
        local_b22 = param_2->bEnableAlphaUpscaling;
        local_b21 = param_2->bReleaseMemoryOnDelete;
        local_b50._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
        local_b20 = param_2->GPUNode;
        local_b40 = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
        local_b1c = param_2->GPUVisibility;
        local_b18 = param_2->DenoiserMode;
        FDLSSFeatureDesc::GetDebugDescription((FDLSSFeatureDesc *)&local_b50._s_0,&local_a98);
        GetNGXResultAsString(NVar37);
        bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("(((ResultCreate) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D12RHI\\Private\\NGXD3D12RHI.cpp"
                            ,0x16f,
                            L"NGX_D3D12_CREATE_DLSS_EXT (CreationNodeMask=0x%x VisibilityNodeMask=0x%x) failed! (%u %s), %s"
                           );
        if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a98.Data.AllocatorInstance.Data);
        }
        if (bVar36) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      local_b14._s_0.Min.field0_0x0 =
           (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
      local_b14._s_0.Max.field0_0x0 =
           (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
      local_b04 = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
      local_afc = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
      local_af4 = param_2->DLSSPreset;
      local_af0 = param_2->DLSSRRPreset;
      local_aec = param_2->PerfQuality;
      local_ae8 = param_2->bHighResolutionMotionVectors;
      local_ae7 = param_2->bUseAutoExposure;
      local_ae6 = param_2->bEnableAlphaUpscaling;
      local_ae5 = param_2->bReleaseMemoryOnDelete;
      local_ae4 = param_2->GPUNode;
      local_ae0 = param_2->GPUVisibility;
      local_adc = param_2->DenoiserMode;
      pTVar40 = MakeShared<FD3D12NGXDLSSFeature,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&>
                          (&local_a88,&local_c30,&local_c38,(FDLSSFeatureDesc *)&local_b14._s_0,
                           (uint *)&this->_padding_);
      FVar51.ReferenceController = (pTVar40->SharedReferenceCount).ReferenceController;
      pNVar42 = (NGXDLSSFeature *)pTVar40->Object;
      if (FVar51.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar51.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar51.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c08.DLSSFeature.Object = pNVar42;
      local_c08.DLSSFeature.SharedReferenceCount.ReferenceController = FVar51.ReferenceController;
      pFVar41 = TSharedPtr<FDLSSState,1>::operator->(param_3);
      if (pFVar41 != &local_c08) {
        (pFVar41->DLSSFeature).Object = pNVar42;
        local_c08.DLSSFeature.Object = (NGXDLSSFeature *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar41->DLSSFeature).SharedReferenceCount,
                   &local_c08.DLSSFeature.SharedReferenceCount);
        FVar51.ReferenceController = local_c08.DLSSFeature.SharedReferenceCount.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar51.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a88.SharedReferenceCount.ReferenceController);
    }
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_ad8.Object = (param_3->Object->DLSSFeature).Object;
    local_ad8.SharedReferenceCount.ReferenceController =
         (param_3->Object->DLSSFeature).SharedReferenceCount.ReferenceController;
    if (local_ad8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_ad8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_ad8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    NGXRHI::RegisterFeature((NGXRHI *)this,&local_ad8);
  }
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar36)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pNVar42 = (param_3->Object->DLSSFeature).Object;
  if ((((pNVar42 == (NGXDLSSFeature *)0x0) || (pNVar42->Feature == (NVSDK_NGX_Handle *)0x0)) ||
      (pNVar42->Parameter == (NVSDK_NGX_Parameter *)0x0)) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDLSSState->HasValidFeature()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D12RHI\\Private\\NGXD3D12RHI.cpp"
                          ,0x176,L""), bVar36)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_bd8 = this;
  local_bd0 = param_2;
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar36)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar41 = param_3->Object;
  if (((pFVar41->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar36)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((pFVar41->DLSSFeature).Object)->bHasDLSSRR == false) {
    pNVar43 = GetCommonEvalParams<NVSDK_NGX_D3D12_DLSS_Eval_Params>
                        (&local_578,this->D3D12RHI,param_1,param_2);
    lVar50 = 2;
    pNVar35 = &local_6e8;
    do {
      pNVar48 = pNVar35;
      pNVar44 = pNVar43;
      pNVar35 = (NVSDK_NGX_D3D12_DLSS_Eval_Params *)&pNVar48->InBiasCurrentColorSubrectBase;
      pIVar4 = (pNVar44->Feature).pInOutput;
      fVar28 = (pNVar44->Feature).InSharpness;
      uVar38 = *(undefined4 *)&(pNVar44->Feature).field_0x14;
      pIVar19 = pNVar44->pInDepth;
      pNVar43 = (NVSDK_NGX_D3D12_DLSS_Eval_Params *)&pNVar44->InBiasCurrentColorSubrectBase;
      (pNVar48->Feature).pInColor = (pNVar44->Feature).pInColor;
      (pNVar48->Feature).pInOutput = pIVar4;
      pIVar4 = pNVar44->pInMotionVectors;
      fVar29 = pNVar44->InJitterOffsetX;
      fVar30 = pNVar44->InJitterOffsetY;
      (pNVar48->Feature).InSharpness = fVar28;
      *(undefined4 *)&(pNVar48->Feature).field_0x14 = uVar38;
      pNVar48->pInDepth = pIVar19;
      NVar20 = pNVar44->InRenderSubrectDimensions;
      iVar31 = pNVar44->InReset;
      fVar28 = pNVar44->InMVScaleX;
      pNVar48->pInMotionVectors = pIVar4;
      pNVar48->InJitterOffsetX = fVar29;
      pNVar48->InJitterOffsetY = fVar30;
      fVar29 = pNVar44->InMVScaleY;
      uVar38 = *(undefined4 *)&pNVar44->field_0x44;
      pIVar4 = pNVar44->pInTransparencyMask;
      pNVar48->InRenderSubrectDimensions = NVar20;
      pNVar48->InReset = iVar31;
      pNVar48->InMVScaleX = fVar28;
      pIVar19 = pNVar44->pInExposureTexture;
      pIVar21 = pNVar44->pInBiasCurrentColorMask;
      pNVar48->InMVScaleY = fVar29;
      *(undefined4 *)&pNVar48->field_0x44 = uVar38;
      pNVar48->pInTransparencyMask = pIVar4;
      NVar22 = pNVar44->InColorSubrectBase;
      NVar23 = pNVar44->InDepthSubrectBase;
      pNVar48->pInExposureTexture = pIVar19;
      pNVar48->pInBiasCurrentColorMask = pIVar21;
      NVar24 = pNVar44->InMVSubrectBase;
      NVar25 = pNVar44->InTranslucencySubrectBase;
      pNVar48->InColorSubrectBase = NVar22;
      pNVar48->InDepthSubrectBase = NVar23;
      pNVar48->InMVSubrectBase = NVar24;
      pNVar48->InTranslucencySubrectBase = NVar25;
      lVar50 = lVar50 + -1;
    } while (lVar50 != 0);
    uVar26._0_4_ = ((NVSDK_NGX_Coordinates *)pNVar43)->X;
    uVar26._4_4_ = ((NVSDK_NGX_Coordinates *)pNVar43)->Y;
    NVar22 = pNVar44->InOutputSubrectBase;
    pIVar3 = this->D3D12RHI;
    fVar28 = pNVar44->InPreExposure;
    fVar29 = pNVar44->InExposureScale;
    iVar31 = pNVar44->InIndicatorInvertXAxis;
    iVar32 = pNVar44->InIndicatorInvertYAxis;
    ((NVSDK_NGX_Coordinates *)pNVar35)->X = (undefined4)uVar26;
    ((NVSDK_NGX_Coordinates *)pNVar35)->Y = (int)((ulonglong)uVar26 >> 0x20);
    pNVar48->InOutputSubrectBase = NVar22;
    pIVar4 = (pNVar44->GBufferSurface).pInAttrib[0];
    pIVar19 = (pNVar44->GBufferSurface).pInAttrib[1];
    pNVar48->InPreExposure = fVar28;
    pNVar48->InExposureScale = fVar29;
    pNVar48->InIndicatorInvertXAxis = iVar31;
    pNVar48->InIndicatorInvertYAxis = iVar32;
    pIVar21 = (pNVar44->GBufferSurface).pInAttrib[2];
    pIVar27 = (pNVar44->GBufferSurface).pInAttrib[3];
    (pNVar48->GBufferSurface).pInAttrib[0] = pIVar4;
    (pNVar48->GBufferSurface).pInAttrib[1] = pIVar19;
    uVar38 = *(undefined4 *)((pNVar44->GBufferSurface).pInAttrib + 4);
    uVar8 = *(undefined4 *)((longlong)(pNVar44->GBufferSurface).pInAttrib + 0x24);
    uVar9 = *(undefined4 *)((pNVar44->GBufferSurface).pInAttrib + 5);
    uVar10 = *(undefined4 *)((longlong)(pNVar44->GBufferSurface).pInAttrib + 0x2c);
    (pNVar48->GBufferSurface).pInAttrib[2] = pIVar21;
    (pNVar48->GBufferSurface).pInAttrib[3] = pIVar27;
    uVar11 = *(undefined4 *)((pNVar44->GBufferSurface).pInAttrib + 6);
    uVar12 = *(undefined4 *)((longlong)(pNVar44->GBufferSurface).pInAttrib + 0x34);
    uVar13 = *(undefined4 *)((pNVar44->GBufferSurface).pInAttrib + 7);
    uVar14 = *(undefined4 *)((longlong)(pNVar44->GBufferSurface).pInAttrib + 0x3c);
    pIVar4 = (pNVar44->GBufferSurface).pInAttrib[8];
    *(undefined4 *)((pNVar48->GBufferSurface).pInAttrib + 4) = uVar38;
    *(undefined4 *)((longlong)(pNVar48->GBufferSurface).pInAttrib + 0x24) = uVar8;
    *(undefined4 *)((pNVar48->GBufferSurface).pInAttrib + 5) = uVar9;
    *(undefined4 *)((longlong)(pNVar48->GBufferSurface).pInAttrib + 0x2c) = uVar10;
    *(undefined4 *)((pNVar48->GBufferSurface).pInAttrib + 6) = uVar11;
    *(undefined4 *)((longlong)(pNVar48->GBufferSurface).pInAttrib + 0x34) = uVar12;
    *(undefined4 *)((pNVar48->GBufferSurface).pInAttrib + 7) = uVar13;
    *(undefined4 *)((longlong)(pNVar48->GBufferSurface).pInAttrib + 0x3c) = uVar14;
    (pNVar48->GBufferSurface).pInAttrib[8] = pIVar4;
    pFVar5 = param_2->OutputColor;
    local_6e8.Feature.pInOutput = pIVar45;
    if (pFVar5 != (FRHITexture *)0x0) {
      lVar50 = *(longlong *)pIVar3;
      uVar38 = (**(code **)(lVar50 + 0x528))(pIVar3,pFVar5);
      (**(code **)(lVar50 + 0x598))(pIVar3,param_1,uVar38,pFVar5);
      local_6e8.Feature.pInOutput =
           (ID3D12Resource *)(**(code **)(*(longlong *)pIVar3 + 0x518))(pIVar3,pFVar5);
    }
    pFVar5 = param_2->InputColor;
    pIVar3 = this->D3D12RHI;
    if (pFVar5 != (FRHITexture *)0x0) {
      lVar50 = *(longlong *)pIVar3;
      uVar38 = (**(code **)(lVar50 + 0x528))(pIVar3,pFVar5);
      (**(code **)(lVar50 + 0x598))(pIVar3,param_1,uVar38,pFVar5);
      pIVar45 = (ID3D12Resource *)(**(code **)(*(longlong *)pIVar3 + 0x518))(pIVar3,pFVar5);
    }
    local_6e8.Feature.pInColor = pIVar45;
    `FNGXD3D12RHI::ExecuteDLSS'::__l2::<lambda_1>::operator()(&local_bd8,param_1);
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar41 = param_3->Object;
    if (((pFVar41->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pNVar6 = ((pFVar41->DLSSFeature).Object)->Parameter;
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar41 = param_3->Object;
    if (((pFVar41->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pIVar53 = local_c28;
    NVar37 = NGX_D3D12_EVALUATE_DLSS_EXT
                       (local_c28,((pFVar41->DLSSFeature).Object)->Feature,pNVar6,&local_6e8);
    if ((NVar37 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
      pTVar39 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
      pNVar42 = TSharedPtr<NGXDLSSFeature,1>::operator->(pTVar39);
      FDLSSFeatureDesc::GetDebugDescription(&pNVar42->Desc,&local_a78);
      GetNGXResultAsString(NVar37);
      bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(((ResultEvaluate) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D12RHI\\Private\\NGXD3D12RHI.cpp"
                          ,0x1ae,L"NGX_D3D12_EVALUATE_DLSS_EXT failed! (%u %s), %s");
      if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a78.Data.AllocatorInstance.Data);
      }
      if (bVar36) {
code_r0x00014de182ac:
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  else {
    pNVar46 = GetCommonEvalParams<NVSDK_NGX_D3D12_DLSSD_Eval_Params>
                        (&local_410,this->D3D12RHI,param_1,param_2);
    lVar50 = 6;
    pNVar34 = &local_a58;
    do {
      pNVar49 = pNVar34;
      pNVar47 = pNVar46;
      pIVar4 = pNVar47->pInSpecularAlbedo;
      pIVar19 = pNVar47->pInNormals;
      pIVar21 = pNVar47->pInRoughness;
      pNVar49->pInDiffuseAlbedo = pNVar47->pInDiffuseAlbedo;
      pNVar49->pInSpecularAlbedo = pIVar4;
      pIVar4 = pNVar47->pInColor;
      pIVar27 = pNVar47->pInAlpha;
      pNVar49->pInNormals = pIVar19;
      pNVar49->pInRoughness = pIVar21;
      pIVar19 = pNVar47->pInOutput;
      pIVar21 = pNVar47->pInOutputAlpha;
      pNVar49->pInColor = pIVar4;
      pNVar49->pInAlpha = pIVar27;
      pIVar4 = pNVar47->pInDepth;
      pIVar27 = pNVar47->pInMotionVectors;
      pNVar49->pInOutput = pIVar19;
      pNVar49->pInOutputAlpha = pIVar21;
      fVar28 = pNVar47->InJitterOffsetX;
      fVar29 = pNVar47->InJitterOffsetY;
      NVar20 = pNVar47->InRenderSubrectDimensions;
      pNVar49->pInDepth = pIVar4;
      pNVar49->pInMotionVectors = pIVar27;
      iVar31 = pNVar47->InReset;
      fVar30 = pNVar47->InMVScaleX;
      fVar33 = pNVar47->InMVScaleY;
      uVar38 = *(undefined4 *)&pNVar47->field_0x6c;
      pNVar49->InJitterOffsetX = fVar28;
      pNVar49->InJitterOffsetY = fVar29;
      pNVar49->InRenderSubrectDimensions = NVar20;
      pIVar4 = pNVar47->pInTransparencyMask;
      pIVar19 = pNVar47->pInExposureTexture;
      pNVar49->InReset = iVar31;
      pNVar49->InMVScaleX = fVar30;
      pNVar49->InMVScaleY = fVar33;
      *(undefined4 *)&pNVar49->field_0x6c = uVar38;
      pNVar49->pInTransparencyMask = pIVar4;
      pNVar49->pInExposureTexture = pIVar19;
      lVar50 = lVar50 + -1;
      pNVar46 = (NVSDK_NGX_D3D12_DLSSD_Eval_Params *)&pNVar47->pInBiasCurrentColorMask;
      pNVar34 = (NVSDK_NGX_D3D12_DLSSD_Eval_Params *)&pNVar49->pInBiasCurrentColorMask;
    } while (lVar50 != 0);
    NVar22 = pNVar47->InAlphaSubrectBase;
    pIVar3 = this->D3D12RHI;
    NVar23 = pNVar47->InOutputAlphaSubrectBase;
    NVar24 = pNVar47->InDiffuseAlbedoSubrectBase;
    pNVar49->pInBiasCurrentColorMask = pNVar47->pInBiasCurrentColorMask;
    pNVar49->InAlphaSubrectBase = NVar22;
    NVar22 = pNVar47->InSpecularAlbedoSubrectBase;
    NVar25 = pNVar47->InNormalsSubrectBase;
    pNVar49->InOutputAlphaSubrectBase = NVar23;
    pNVar49->InDiffuseAlbedoSubrectBase = NVar24;
    NVar23 = pNVar47->InRoughnessSubrectBase;
    NVar24 = pNVar47->InColorSubrectBase;
    pNVar49->InSpecularAlbedoSubrectBase = NVar22;
    pNVar49->InNormalsSubrectBase = NVar25;
    NVar22 = pNVar47->InDepthSubrectBase;
    NVar25 = pNVar47->InMVSubrectBase;
    pNVar49->InRoughnessSubrectBase = NVar23;
    pNVar49->InColorSubrectBase = NVar24;
    uVar1 = (pNVar47->InTranslucencySubrectBase).X;
    uVar52 = (pNVar47->InTranslucencySubrectBase).Y;
    uVar15 = (pNVar47->InBiasCurrentColorSubrectBase).X;
    uVar16 = (pNVar47->InBiasCurrentColorSubrectBase).Y;
    pNVar49->InDepthSubrectBase = NVar22;
    pNVar49->InMVSubrectBase = NVar25;
    uVar17 = (pNVar47->InOutputSubrectBase).X;
    uVar18 = (pNVar47->InOutputSubrectBase).Y;
    uVar38 = *(undefined4 *)&pNVar47->pInReflectedAlbedo;
    uVar8 = *(undefined4 *)((longlong)&pNVar47->pInReflectedAlbedo + 4);
    pFVar5 = param_2->OutputColor;
    (pNVar49->InTranslucencySubrectBase).X = uVar1;
    (pNVar49->InTranslucencySubrectBase).Y = uVar52;
    (pNVar49->InBiasCurrentColorSubrectBase).X = uVar15;
    (pNVar49->InBiasCurrentColorSubrectBase).Y = uVar16;
    (pNVar49->InOutputSubrectBase).X = uVar17;
    (pNVar49->InOutputSubrectBase).Y = uVar18;
    *(undefined4 *)&pNVar49->pInReflectedAlbedo = uVar38;
    *(undefined4 *)((longlong)&pNVar49->pInReflectedAlbedo + 4) = uVar8;
    local_a58.pInOutput = pIVar45;
    if (pFVar5 != (FRHITexture *)0x0) {
      lVar50 = *(longlong *)pIVar3;
      uVar38 = (**(code **)(lVar50 + 0x528))(pIVar3,pFVar5);
      (**(code **)(lVar50 + 0x598))(pIVar3,param_1,uVar38,pFVar5);
      local_a58.pInOutput =
           (ID3D12Resource *)(**(code **)(*(longlong *)pIVar3 + 0x518))(pIVar3,pFVar5);
    }
    pIVar3 = this->D3D12RHI;
    pFVar5 = param_2->InputColor;
    local_a58.pInColor = pIVar45;
    if (pFVar5 != (FRHITexture *)0x0) {
      lVar50 = *(longlong *)pIVar3;
      uVar38 = (**(code **)(lVar50 + 0x528))(pIVar3,pFVar5);
      (**(code **)(lVar50 + 0x598))(pIVar3,param_1,uVar38,pFVar5);
      local_a58.pInColor =
           (ID3D12Resource *)(**(code **)(*(longlong *)pIVar3 + 0x518))(pIVar3,pFVar5);
    }
    pIVar3 = this->D3D12RHI;
    pFVar5 = param_2->InputDiffuseAlbedo;
    local_a58.pInDiffuseAlbedo = pIVar45;
    if (pFVar5 != (FRHITexture *)0x0) {
      lVar50 = *(longlong *)pIVar3;
      uVar38 = (**(code **)(lVar50 + 0x528))(pIVar3,pFVar5);
      (**(code **)(lVar50 + 0x598))(pIVar3,param_1,uVar38,pFVar5);
      local_a58.pInDiffuseAlbedo =
           (ID3D12Resource *)(**(code **)(*(longlong *)pIVar3 + 0x518))(pIVar3,pFVar5);
    }
    pIVar3 = this->D3D12RHI;
    pFVar5 = param_2->InputSpecularAlbedo;
    local_a58.InDiffuseAlbedoSubrectBase.X = 0;
    local_a58.InDiffuseAlbedoSubrectBase.Y = 0;
    local_a58.pInSpecularAlbedo = pIVar45;
    if (pFVar5 != (FRHITexture *)0x0) {
      lVar50 = *(longlong *)pIVar3;
      uVar38 = (**(code **)(lVar50 + 0x528))(pIVar3,pFVar5);
      (**(code **)(lVar50 + 0x598))(pIVar3,param_1,uVar38,pFVar5);
      local_a58.pInSpecularAlbedo =
           (ID3D12Resource *)(**(code **)(*(longlong *)pIVar3 + 0x518))(pIVar3,pFVar5);
    }
    pIVar3 = this->D3D12RHI;
    pFVar5 = param_2->InputNormals;
    local_a58.InSpecularAlbedoSubrectBase.X = 0;
    local_a58.InSpecularAlbedoSubrectBase.Y = 0;
    local_a58.pInNormals = pIVar45;
    if (pFVar5 != (FRHITexture *)0x0) {
      lVar50 = *(longlong *)pIVar3;
      uVar38 = (**(code **)(lVar50 + 0x528))(pIVar3,pFVar5);
      (**(code **)(lVar50 + 0x598))(pIVar3,param_1,uVar38,pFVar5);
      local_a58.pInNormals =
           (ID3D12Resource *)(**(code **)(*(longlong *)pIVar3 + 0x518))(pIVar3,pFVar5);
    }
    pFVar5 = param_2->InputRoughness;
    pIVar3 = this->D3D12RHI;
    local_a58.InNormalsSubrectBase.X = 0;
    local_a58.InNormalsSubrectBase.Y = 0;
    if (pFVar5 != (FRHITexture *)0x0) {
      lVar50 = *(longlong *)pIVar3;
      uVar38 = (**(code **)(lVar50 + 0x528))(pIVar3,pFVar5);
      (**(code **)(lVar50 + 0x598))(pIVar3,param_1,uVar38,pFVar5);
      pIVar45 = (ID3D12Resource *)(**(code **)(*(longlong *)pIVar3 + 0x518))(pIVar3,pFVar5);
    }
    local_a58.InRoughnessSubrectBase.X = 0;
    local_a58.InRoughnessSubrectBase.Y = 0;
    local_a58.pInRoughness = pIVar45;
    `FNGXD3D12RHI::ExecuteDLSS'::__l2::<lambda_1>::operator()(&local_bd8,param_1);
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar41 = param_3->Object;
    if (((pFVar41->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pNVar6 = ((pFVar41->DLSSFeature).Object)->Parameter;
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar41 = param_3->Object;
    if (((pFVar41->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pIVar53 = local_c28;
    NVar37 = NGX_D3D12_EVALUATE_DLSSD_EXT
                       (local_c28,((pFVar41->DLSSFeature).Object)->Feature,pNVar6,&local_a58);
    if ((NVar37 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
      pTVar39 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
      pNVar42 = TSharedPtr<NGXDLSSFeature,1>::operator->(pTVar39);
      FDLSSFeatureDesc::GetDebugDescription(&pNVar42->Desc,&local_a68);
      GetNGXResultAsString(NVar37);
      bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(((ResultEvaluate) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D12RHI\\Private\\NGXD3D12RHI.cpp"
                          ,0x1ee,L"NGX_D3D12_EVALUATE_DLSSD_EXT failed! (%u %s), %s");
      if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a68.Data.AllocatorInstance.Data);
      }
      if (bVar36) goto code_r0x00014de182ac;
    }
  }
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar36)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar41 = param_3->Object;
  if (((pFVar41->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar36)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pNVar42 = (pFVar41->DLSSFeature).Object;
  lVar50 = this->_padding_;
  if ((pNVar42->Feature == (NVSDK_NGX_Handle *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("Feature",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                          ,0x124,L""), bVar36)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((pNVar42->Parameter == (NVSDK_NGX_Parameter *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parameter",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                          ,0x125,L""), bVar36)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pNVar42->LastUsedFrame = (uint)lVar50;
  (**(code **)(*(longlong *)this->D3D12RHI + 0x560))(this->D3D12RHI,param_1,local_c20,pIVar53);
LAB_14de1839f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// Init_NGX_D3D12 @ 14de183d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENGXBinariesSearchOrder": Some values do not have unique names */
/* WARNING: Enum "ENGXProjectIdentifier": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

NVSDK_NGX_Result __thiscall
FNGXD3D12RHI::Init_NGX_D3D12
          (FNGXD3D12RHI *this,FNGXRHICreateArguments *param_1,wchar_t *param_2,ID3D12Device *param_3
          ,NVSDK_NGX_FeatureCommonInfo *param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  NVSDK_NGX_Version NVar3;
  bool bVar4;
  NVSDK_NGX_Result NVar5;
  size_t sVar6;
  NVSDK_NGX_Result NVar7;
  wchar_t *pwVar8;
  uint uVar9;
  NVSDK_NGX_Version NVar10;
  undefined1 auStackY_1f8 [32];
  FScriptContainerElement local_198 [128];
  ForAnyElementType local_118;
  FScriptContainerElement *local_110;
  int local_108;
  FScriptContainerElement local_f8 [128];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  NVar3 = NVSDK_NGX_Version_API;
  do {
    NVar10 = NVar3;
    if (param_1->ProjectIdentifier == MinValue) {
      if (param_1->NGXAppId == 0) goto LAB_14de1843f;
LAB_14de18470:
      NVar5 = NVSDK_NGX_D3D12_Init((ulonglong)param_1->NGXAppId,param_2,param_3,param_4,NVar10);
      if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
        GetNGXResultAsString(NVar5);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
      }
    }
    else {
      if (param_1->ProjectIdentifier == ForceNGXApplicationID) goto LAB_14de18470;
LAB_14de1843f:
      local_78.Data = (FScriptContainerElement *)0x0;
      if ((param_1->UnrealEngineVersion).Data.ArrayNum == 0) {
        pwVar8 = L"";
LAB_14de184d0:
        sVar6 = wcslen(pwVar8);
        local_68 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar8,(int)sVar6);
        uVar1 = local_68 + 1;
        uVar9 = uVar1;
        if (uVar1 < 0x81) {
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            uVar9 = 0;
            goto LAB_14de1850d;
          }
        }
        else {
LAB_14de1850d:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar9,1);
        }
        local_70 = local_f8;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          local_70 = local_78.Data;
        }
        UE::Core::Private::Convert((uchar *)local_70,uVar1,pwVar8,(int)sVar6 + 1);
      }
      else {
        pwVar8 = (wchar_t *)(param_1->UnrealEngineVersion).Data.AllocatorInstance.Data;
        if ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0) goto LAB_14de184d0;
        local_70 = (FScriptContainerElement *)0x0;
        local_68 = 0;
      }
      pFVar2 = local_70;
      local_118.Data = (FScriptContainerElement *)0x0;
      if ((param_1->UnrealProjectID).Data.ArrayNum == 0) {
        pwVar8 = L"";
LAB_14de18579:
        sVar6 = wcslen(pwVar8);
        local_108 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar8,(int)sVar6);
        uVar1 = local_108 + 1;
        uVar9 = uVar1;
        if (uVar1 < 0x81) {
          if (local_118.Data != (FScriptContainerElement *)0x0) {
            uVar9 = 0;
            goto LAB_14de185b2;
          }
        }
        else {
LAB_14de185b2:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_118,0,uVar9,1)
          ;
        }
        local_110 = local_198;
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          local_110 = local_118.Data;
        }
        UE::Core::Private::Convert((uchar *)local_110,uVar1,pwVar8,(int)sVar6 + 1);
      }
      else {
        pwVar8 = (wchar_t *)(param_1->UnrealProjectID).Data.AllocatorInstance.Data;
        if ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0) goto LAB_14de18579;
        local_108 = 0;
        local_110 = (FScriptContainerElement *)0x0;
      }
      NVar5 = NVSDK_NGX_D3D12_Init_with_ProjectID
                        ((char *)local_110,NVSDK_NGX_ENGINE_TYPE_UNREAL,(char *)pFVar2,param_2,
                         param_3,param_4,NVar10);
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      if (4 < (byte)LogDLSSNGXD3D12RHI._0_1_) {
        GetNGXResultAsString(NVar5);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
      }
    }
    NVar7 = NVar5 & 0xfff00000;
    if ((NVar7 == NVSDK_NGX_Result_Fail) &&
       (bVar4 = NGXRHI::IsSafeToShutdownNGX((NGXRHI *)this), bVar4)) {
      NVSDK_NGX_D3D12_Shutdown1(param_3);
    }
    else if (NVar7 != NVSDK_NGX_Result_Fail) goto LAB_14de186ed;
    NVar3 = NVar10 - 1;
  } while (0x12 < (int)(NVar10 - 1));
  if (NVar7 != NVSDK_NGX_Result_Fail) {
LAB_14de186ed:
    if ((NVar10 < 0x14) && (4 < (byte)LogDLSSNGXD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D12RHI);
    }
  }
  return NVar5;
}

// IsIncompatibleAPICaptureToolActive @ 14de18770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FNGXD3D12RHI::IsIncompatibleAPICaptureToolActive(ID3D12Device *param_1)

{
  HRESULT HVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  IID local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  HVar1 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_20);
  if (-1 < HVar1) {
    local_28 = (longlong *)0x0;
    iVar2 = (**(code **)*param_1)(param_1,&local_20,&local_28);
    if (-1 < iVar2) {
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x10))();
      }
      return true;
    }
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  return false;
}

// IsRRSupportedByRHI @ 14de18810

bool __thiscall FNGXD3D12RHI::IsRRSupportedByRHI(FNGXD3D12RHI *this)

{
  return true;
}


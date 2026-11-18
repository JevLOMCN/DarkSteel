// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXD3D11RHI
// Functions: 6

// FNGXD3D11RHI @ 14de12940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENGXBinariesSearchOrder": Some values do not have unique names */
/* WARNING: Enum "ENGXProjectIdentifier": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FNGXD3D11RHI * __thiscall
FNGXD3D11RHI::FNGXD3D11RHI(FNGXD3D11RHI *this,FNGXRHICreateArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  HRESULT HVar3;
  int iVar4;
  NVSDK_NGX_Result NVar5;
  ID3D11DynamicRHI *pIVar6;
  ID3D11Device *pIVar7;
  ID3D11DeviceContext *pIVar8;
  FNGXD3D11RHI *pFVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_78 [32];
  longlong *local_48;
  FString local_40;
  IID local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  NGXRHI::NGXRHI((NGXRHI *)this,param_1);
  this->_padding_ = (longlong)&___7FNGXD3D11RHI__6B_;
  pIVar6 = (ID3D11DynamicRHI *)(**(code **)(param_1->DynamicRHI->_padding_ + 0x30))();
  this->D3D11RHI = pIVar6;
  pIVar7 = (ID3D11Device *)(**(code **)(*(longlong *)pIVar6 + 0x4c8))(pIVar6);
  this->Direct3DDevice = pIVar7;
  pIVar8 = (ID3D11DeviceContext *)(**(code **)(*(longlong *)this->D3D11RHI + 0x4d0))();
  this->Direct3DDeviceIMContext = pIVar8;
  if ((this->D3D11RHI == (ID3D11DynamicRHI *)0x0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<946229575036174458>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                         ,0x7a,"D3D11RHI"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FNGXD3D11RHI *)(*pcVar1)();
    return pFVar9;
  }
  if ((this->Direct3DDevice == (ID3D11Device *)0x0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<946229575036174459>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                         ,0x7b,"Direct3DDevice"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FNGXD3D11RHI *)(*pcVar1)();
    return pFVar9;
  }
  pIVar7 = this->Direct3DDevice;
  HVar3 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_30);
  if (-1 < HVar3) {
    local_48 = (longlong *)0x0;
    iVar4 = (**(code **)*pIVar7)(pIVar7,&local_30,&local_48);
    if (-1 < iVar4) {
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
      }
      NGXRHI::bIsIncompatibleAPICaptureToolActive = true;
      goto LAB_14de12a76;
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  NGXRHI::bIsIncompatibleAPICaptureToolActive = false;
LAB_14de12a76:
  NGXRHI::GetNGXLogDirectory(&local_40);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_40.Data.ArrayNum != 0) {
    FVar10.Data = local_40.Data.AllocatorInstance.Data;
  }
  NVar5 = Init_NGX_D3D11(this,param_1,(wchar_t *)FVar10.Data,this->Direct3DDevice,
                         (NVSDK_NGX_FeatureCommonInfo *)&this->_padding_);
  if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
    GetNGXResultAsString(NVar5);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
  }
  *(NVSDK_NGX_Result *)&this->_padding_ = NVar5;
  if (NVar5 == NVSDK_NGX_Result_FAIL_OutOfDate) {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  else if ((NVar5 & 0xfff00000) != NVSDK_NGX_Result_Fail) {
    NGXRHI::bNGXInitialized = true;
    NVar5 = NVSDK_NGX_D3D11_GetCapabilityParameters((NVSDK_NGX_Parameter **)&this->_padding_);
    if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
      GetNGXResultAsString(NVar5);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
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

// ~FNGXD3D11RHI @ 14de12d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNGXD3D11RHI::~FNGXD3D11RHI(FNGXD3D11RHI *this)

{
  bool bVar1;
  NVSDK_NGX_Result NVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->_padding_ = (longlong)&___7FNGXD3D11RHI__6B_;
  if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXD3D11RHI::~FNGXD3D11RHI",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (NGXRHI::bNGXInitialized != false) {
    NGXRHI::ReleaseAllocatedFeatures((NGXRHI *)this);
    if ((NVSDK_NGX_Parameter *)this->_padding_ != (NVSDK_NGX_Parameter *)0x0) {
      NVar2 = NVSDK_NGX_D3D11_DestroyParameters((NVSDK_NGX_Parameter *)this->_padding_);
      if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
      }
    }
    bVar1 = NGXRHI::IsSafeToShutdownNGX((NGXRHI *)this);
    if (bVar1) {
      NVar2 = NVSDK_NGX_D3D11_Shutdown1(this->Direct3DDevice);
      if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
      }
    }
    NGXRHI::bNGXInitialized = false;
  }
  if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXD3D11RHI::~FNGXD3D11RHI",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  NGXRHI::~NGXRHI((NGXRHI *)this);
  return;
}

// ExecuteDLSS @ 14de132e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNGXD3D11RHI::ExecuteDLSS
          (FNGXD3D11RHI *this,FRHICommandList *param_1,FRHIDLSSArguments *param_2,
          TSharedPtr<FDLSSState,1> *param_3)

{
  ID3D11DeviceContext *pIVar1;
  ID3D11DynamicRHI *pIVar2;
  FRHITexture *pFVar3;
  NVSDK_NGX_Parameter *pNVar4;
  NVSDK_NGX_Coordinates NVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  ID3D11Resource *pIVar17;
  ID3D11Resource *pIVar18;
  ID3D11Resource *pIVar19;
  ID3D11Resource *pIVar20;
  undefined8 uVar21;
  NVSDK_NGX_Dimensions NVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  NVSDK_NGX_Coordinates NVar25;
  NVSDK_NGX_Coordinates NVar26;
  NVSDK_NGX_Coordinates NVar27;
  NVSDK_NGX_Coordinates *pNVar28;
  NVSDK_NGX_D3D11_DLSSD_Eval_Params *pNVar29;
  NVSDK_NGX_D3D11_DLSS_Eval_Params *pNVar30;
  undefined8 *puVar31;
  bool bVar32;
  NVSDK_NGX_Result NVar33;
  FDLSSState *pFVar34;
  TSharedPtr<NGXDLSSFeature,1> *pTVar35;
  TSharedRef<FD3D11NGXFeatureHandle,1> *pTVar36;
  NGXDLSSFeature *pNVar37;
  NVSDK_NGX_D3D11_DLSSD_Eval_Params *pNVar38;
  NVSDK_NGX_Coordinates *pNVar39;
  undefined8 *puVar40;
  NVSDK_NGX_D3D11_DLSS_Eval_Params *pNVar41;
  longlong lVar42;
  int iVar43;
  int iVar44;
  undefined1 auStackY_c58 [32];
  NVSDK_NGX_Parameter *local_c18;
  NVSDK_NGX_Handle *local_c10;
  NVSDK_NGX_Handle *local_c08;
  FDLSSState *local_c00;
  TSharedPtr<NGXDLSSFeature,1> local_bf8;
  TSharedPtr<NGXDLSSFeature,1> local_be8;
  TIntRect<int>_u_0 local_bd8;
  TIntPoint<int>_u_0 local_bc8;
  TIntPoint<int>_u_0 local_bc0;
  int local_bb8;
  int local_bb4;
  int local_bb0;
  undefined1 local_bac;
  undefined1 local_bab;
  undefined1 local_baa;
  undefined1 local_ba9;
  uint local_ba8;
  uint local_ba4;
  ENGXDLSSDenoiserMode local_ba0;
  TIntRect<int>_u_0 local_b9c;
  TIntPoint<int>_u_0 local_b8c;
  TIntPoint<int>_u_0 local_b84;
  int local_b7c;
  int local_b78;
  int local_b74;
  undefined1 local_b70;
  undefined1 local_b6f;
  undefined1 local_b6e;
  undefined1 local_b6d;
  uint local_b6c;
  uint local_b68;
  ENGXDLSSDenoiserMode local_b64;
  TIntRect<int>_u_0 local_b60;
  TIntPoint<int>_u_0 local_b50;
  TIntPoint<int>_u_0 local_b48;
  int local_b40;
  int local_b3c;
  int local_b38;
  undefined1 local_b34;
  undefined1 local_b33;
  undefined1 local_b32;
  undefined1 local_b31;
  uint local_b30;
  uint local_b2c;
  ENGXDLSSDenoiserMode local_b28;
  TIntRect<int>_u_0 local_b24;
  TIntPoint<int>_u_0 local_b14;
  TIntPoint<int>_u_0 local_b0c;
  int local_b04;
  int local_b00;
  int local_afc;
  undefined1 local_af8;
  undefined1 local_af7;
  undefined1 local_af6;
  undefined1 local_af5;
  uint local_af4;
  uint local_af0;
  ENGXDLSSDenoiserMode local_aec;
  TSharedPtr<NGXDLSSFeature,1> local_ae8;
  TSharedPtr<NGXDLSSFeature,1> local_ad8;
  TSharedPtr<NGXDLSSFeature,1> local_ac8;
  TSharedPtr<NGXDLSSFeature,1> local_ab8;
  TSharedRef<FD3D11NGXFeatureHandle,1> local_aa8;
  FString local_a98;
  FString local_a88;
  TSharedRef<FD3D11NGXFeatureHandle,1> local_a78;
  FString local_a68;
  FString local_a58;
  NVSDK_NGX_Coordinates local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  float fStack_a20;
  float fStack_a1c;
  int local_a18;
  int iStack_a14;
  uint uStack_a10;
  float fStack_a0c;
  float local_a08;
  undefined8 uStack_a04;
  undefined4 uStack_9fc;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined4 local_9e8;
  undefined4 uStack_9e4;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined4 local_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  float local_9b8;
  undefined1 auStack_9b4 [188];
  float local_8f8;
  undefined8 local_8f4;
  undefined8 uStack_8ec;
  undefined4 local_8e4;
  undefined8 local_8e0 [8];
  undefined8 local_8a0;
  undefined8 uStack_898;
  float local_890;
  float fStack_88c;
  int iStack_888;
  int iStack_884;
  uint local_880;
  float fStack_87c;
  float fStack_878;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined8 uStack_818;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  float local_688;
  float local_5c8;
  NVSDK_NGX_D3D11_DLSSD_Eval_Params local_568;
  NVSDK_NGX_D3D11_DLSS_Eval_Params local_1f8;
  NVSDK_NGX_DLSS_Create_Params local_88;
  NVSDK_NGX_DLSSD_Create_Params local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c58;
  if (((GIsRunningRHIInSeparateThread_InternalUseOnly) && (bVar32 = IsInRHIThread(), !bVar32)) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                          ,0xe4,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((char)this->_padding_ == '\0') {
    bVar32 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsDLSSAvailable()",
                        "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                        ,0xe5,L"");
    if (bVar32) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((char)this->_padding_ == '\0') goto LAB_14de1467c;
  }
  FRHIDLSSArguments::Validate(param_2);
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar32 = FDLSSState::RequiresFeatureRecreation(param_3->Object,param_2);
  if (bVar32) {
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_3->Object->DLSSFeature).Object != (NGXDLSSFeature *)0x0) {
      pFVar34 = TSharedPtr<FDLSSState,1>::operator->(param_3);
      pNVar37 = (pFVar34->DLSSFeature).Object;
      if ((((pNVar37 == (NGXDLSSFeature *)0x0) || (pNVar37->Feature == (NVSDK_NGX_Handle *)0x0)) ||
          (pNVar37->Parameter == (NVSDK_NGX_Parameter *)0x0)) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InDLSSState->DLSSFeature || InDLSSState->HasValidFeature()",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                              ,0xec,L""), bVar32)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_ae8.Object = (NGXDLSSFeature *)0x0;
    local_ae8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TSharedPtr<NGXDLSSFeature,1>::operator=(&param_3->Object->DLSSFeature,&local_ae8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ae8.SharedReferenceCount.ReferenceController);
  }
  if (param_2->bReset != false) {
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((param_3->Object->DLSSFeature).Object != (NGXDLSSFeature *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InDLSSState->DLSSFeature",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                            ,0xf2,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar35 = NGXRHI::FindFreeFeature((NGXRHI *)this,&local_ab8,param_2);
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TSharedPtr<NGXDLSSFeature,1>::operator=(&param_3->Object->DLSSFeature,pTVar35);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ab8.SharedReferenceCount.ReferenceController);
  }
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_3->Object->DLSSFeature).Object == (NGXDLSSFeature *)0x0) {
    local_c18 = (NVSDK_NGX_Parameter *)0x0;
    NVar33 = NVSDK_NGX_D3D11_AllocateParameters(&local_c18);
    if ((NVar33 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
      GetNGXResultAsString(NVar33);
      bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(((Result) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                          ,0xfb,L"NVSDK_NGX_D3D11_AllocateParameters failed! (%u %s)");
      if (bVar32) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    NGXRHI::ApplyCommonNGXParameterSettings((NGXRHI *)this,local_c18,param_2);
    if (param_2->DenoiserMode == DLSSRR) {
      FRHIDLSSArguments::GetNGXDLSSRRCreateParams(param_2,&local_68);
      pNVar4 = local_c18;
      pIVar1 = this->Direct3DDeviceIMContext;
      local_c10 = (NVSDK_NGX_Handle *)0x0;
      NVSDK_NGX_Parameter_SetUI(local_c18,"Width",local_68.InWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"Height",local_68.InHeight);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"OutWidth",local_68.InTargetWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"OutHeight",local_68.InTargetHeight);
      NVSDK_NGX_Parameter_SetI(pNVar4,"PerfQualityValue",local_68.InPerfQualityValue);
      NVSDK_NGX_Parameter_SetI(pNVar4,"DLSS.Feature.Create.Flags",local_68.InFeatureCreateFlags);
      NVSDK_NGX_Parameter_SetI
                (pNVar4,"DLSS.Enable.Output.Subrects",
                 (uint)(local_68.InEnableOutputSubrects != false));
      NVSDK_NGX_Parameter_SetI(pNVar4,"DLSS.Denoise.Mode",1);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"DLSS.Roughness.Mode",local_68.InRoughnessMode);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"DLSS.Use.HW.Depth",local_68.InUseHWDepth);
      NVar33 = NVSDK_NGX_D3D11_CreateFeature
                         (pIVar1,NVSDK_NGX_Feature_RayReconstruction,pNVar4,&local_c10);
      if ((NVar33 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
        if (1 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
          local_b9c._s_0.Min.field0_0x0 =
               (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
          local_b9c._s_0.Max.field0_0x0 =
               (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
          local_b8c = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
          local_b84 = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
          local_b7c = param_2->DLSSPreset;
          local_b78 = param_2->DLSSRRPreset;
          local_b74 = param_2->PerfQuality;
          local_b70 = param_2->bHighResolutionMotionVectors;
          local_b6f = param_2->bUseAutoExposure;
          local_b6e = param_2->bEnableAlphaUpscaling;
          local_b6d = param_2->bReleaseMemoryOnDelete;
          local_b6c = param_2->GPUNode;
          local_b68 = param_2->GPUVisibility;
          local_b64 = param_2->DenoiserMode;
          FDLSSFeatureDesc::GetDebugDescription((FDLSSFeatureDesc *)&local_b9c._s_0,&local_a98);
          GetNGXResultAsString(NVar33);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
          if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a98.Data.AllocatorInstance.Data);
          }
        }
        pTVar35 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
        local_ad8.Object = (NGXDLSSFeature *)0x0;
        local_ad8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        TSharedPtr<NGXDLSSFeature,1>::operator=(pTVar35,&local_ad8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_ad8.SharedReferenceCount.ReferenceController);
      }
      else {
        local_bd8._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
        local_bd8._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
        local_bc8 = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
        local_bc0 = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
        local_bb8 = param_2->DLSSPreset;
        local_bb4 = param_2->DLSSRRPreset;
        local_bb0 = param_2->PerfQuality;
        local_bac = param_2->bHighResolutionMotionVectors;
        local_bab = param_2->bUseAutoExposure;
        local_baa = param_2->bEnableAlphaUpscaling;
        local_ba9 = param_2->bReleaseMemoryOnDelete;
        local_ba8 = param_2->GPUNode;
        local_ba4 = param_2->GPUVisibility;
        local_ba0 = param_2->DenoiserMode;
        pTVar36 = MakeShared<FD3D11NGXFeatureHandle,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&>
                            (&local_aa8,&local_c10,&local_c18,(FDLSSFeatureDesc *)&local_bd8._s_0,
                             (uint *)&this->_padding_);
        local_bf8.Object = (NGXDLSSFeature *)pTVar36->Object;
        local_bf8.SharedReferenceCount.ReferenceController =
             (pTVar36->SharedReferenceCount).ReferenceController;
        if (local_bf8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_bf8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_bf8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar35 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
        TSharedPtr<NGXDLSSFeature,1>::operator=(pTVar35,&local_bf8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_bf8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_aa8.SharedReferenceCount.ReferenceController);
        pTVar35 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
        pNVar37 = TSharedPtr<NGXDLSSFeature,1>::operator->(pTVar35);
        pNVar37->bHasDLSSRR = true;
      }
    }
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_3->Object->DLSSFeature).Object == (NGXDLSSFeature *)0x0) {
      FRHIDLSSArguments::GetNGXDLSSCreateParams(param_2,&local_88);
      pNVar4 = local_c18;
      pIVar1 = this->Direct3DDeviceIMContext;
      local_c08 = (NVSDK_NGX_Handle *)0x0;
      NVSDK_NGX_Parameter_SetUI(local_c18,"Width",local_88.Feature.InWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"Height",local_88.Feature.InHeight);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"OutWidth",local_88.Feature.InTargetWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"OutHeight",local_88.Feature.InTargetHeight);
      NVSDK_NGX_Parameter_SetI(pNVar4,"PerfQualityValue",local_88.Feature.InPerfQualityValue);
      NVSDK_NGX_Parameter_SetI(pNVar4,"DLSS.Feature.Create.Flags",local_88.InFeatureCreateFlags);
      NVSDK_NGX_Parameter_SetI
                (pNVar4,"DLSS.Enable.Output.Subrects",
                 (uint)(local_88.InEnableOutputSubrects != false));
      NVar33 = NVSDK_NGX_D3D11_CreateFeature
                         (pIVar1,NVSDK_NGX_Feature_SuperSampling,pNVar4,&local_c08);
      if ((NVar33 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
        local_b48 = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
        local_b60._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
        local_b40 = param_2->DLSSPreset;
        local_b3c = param_2->DLSSRRPreset;
        local_b38 = param_2->PerfQuality;
        local_b34 = param_2->bHighResolutionMotionVectors;
        local_b33 = param_2->bUseAutoExposure;
        local_b32 = param_2->bEnableAlphaUpscaling;
        local_b31 = param_2->bReleaseMemoryOnDelete;
        local_b60._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
        local_b30 = param_2->GPUNode;
        local_b50 = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
        local_b2c = param_2->GPUVisibility;
        local_b28 = param_2->DenoiserMode;
        FDLSSFeatureDesc::GetDebugDescription((FDLSSFeatureDesc *)&local_b60._s_0,&local_a88);
        GetNGXResultAsString(NVar33);
        bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("(((ResultCreate) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                            ,0x126,L"NGX_D3D11_CREATE_DLSS_EXT failed! (%u %s), %s");
        if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a88.Data.AllocatorInstance.Data);
        }
        if (bVar32) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      local_b24._s_0.Min.field0_0x0 =
           (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
      local_b24._s_0.Max.field0_0x0 =
           (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
      local_b14 = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
      local_b0c = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
      local_b04 = param_2->DLSSPreset;
      local_b00 = param_2->DLSSRRPreset;
      local_afc = param_2->PerfQuality;
      local_af8 = param_2->bHighResolutionMotionVectors;
      local_af7 = param_2->bUseAutoExposure;
      local_af6 = param_2->bEnableAlphaUpscaling;
      local_af5 = param_2->bReleaseMemoryOnDelete;
      local_af4 = param_2->GPUNode;
      local_af0 = param_2->GPUVisibility;
      local_aec = param_2->DenoiserMode;
      pTVar36 = MakeShared<FD3D11NGXFeatureHandle,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&>
                          (&local_a78,&local_c08,&local_c18,(FDLSSFeatureDesc *)&local_b24._s_0,
                           (uint *)&this->_padding_);
      local_be8.Object = (NGXDLSSFeature *)pTVar36->Object;
      local_be8.SharedReferenceCount.ReferenceController =
           (pTVar36->SharedReferenceCount).ReferenceController;
      if (local_be8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_be8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_be8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar35 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
      TSharedPtr<NGXDLSSFeature,1>::operator=(pTVar35,&local_be8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_be8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a78.SharedReferenceCount.ReferenceController);
    }
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_ac8.Object = (param_3->Object->DLSSFeature).Object;
    local_ac8.SharedReferenceCount.ReferenceController =
         (param_3->Object->DLSSFeature).SharedReferenceCount.ReferenceController;
    if (local_ac8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_ac8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_ac8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    NGXRHI::RegisterFeature((NGXRHI *)this,&local_ac8);
  }
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pNVar37 = (param_3->Object->DLSSFeature).Object;
  if ((((pNVar37 == (NGXDLSSFeature *)0x0) || (pNVar37->Feature == (NVSDK_NGX_Handle *)0x0)) ||
      (pNVar37->Parameter == (NVSDK_NGX_Parameter *)0x0)) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDLSSState->HasValidFeature()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                          ,0x12d,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (**(code **)(*(longlong *)this->D3D11RHI + 0x530))();
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_c00 = param_3->Object;
  if (((local_c00->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar2 = this->D3D11RHI;
  iVar43 = *(int *)((longlong)&(param_2->SrcRect).field0_0x0 + 8) -
           *(int *)&(param_2->SrcRect).field0_0x0;
  iVar44 = *(int *)((longlong)&(param_2->SrcRect).field0_0x0 + 0xc) -
           *(int *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
  lVar42 = *(longlong *)pIVar2;
  if (((local_c00->DLSSFeature).Object)->bHasDLSSRR == false) {
    local_a38 = 0;
    uStack_a04 = 0;
    local_a48.X = 0;
    local_a48.Y = 0;
    uStack_a40 = 0;
    uStack_9fc = 0;
    uStack_9d0 = 0;
    memset(auStack_9b4,0,0xbc);
    local_8e4 = 0;
    uStack_9c0 = *(undefined4 *)&(param_2->DestRect).field0_0x0;
    uStack_9bc = *(undefined4 *)((longlong)&(param_2->DestRect).field0_0x0 + 4);
    local_9e8 = *(undefined4 *)&(param_2->SrcRect).field0_0x0;
    uStack_9e4 = *(undefined4 *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    local_8f4 = 0;
    uStack_8ec = 0;
    local_a18 = iVar43;
    iStack_a14 = iVar44;
    uStack_a30 = (**(code **)(lVar42 + 0x508))(pIVar2,param_2->InputDepth);
    uStack_9e0 = *(undefined4 *)&(param_2->SrcRect).field0_0x0;
    uStack_9dc = *(undefined4 *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    local_a28 = (**(code **)(*(longlong *)pIVar2 + 0x508))(pIVar2,param_2->InputMotionVectors);
    local_9d8 = 0;
    if (param_2->bUseBiasCurrentColorMask == false) {
      uStack_9f0 = 0;
    }
    else {
      uStack_9f0 = (**(code **)(*(longlong *)pIVar2 + 0x508))
                             (pIVar2,param_2->InputBiasCurrentColorMask);
    }
    local_9c8 = *(undefined4 *)&(param_2->SrcRect).field0_0x0;
    uStack_9c4 = *(undefined4 *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    if (param_2->bUseAutoExposure == false) {
      local_9f8 = (**(code **)(*(longlong *)pIVar2 + 0x508))(pIVar2,param_2->InputExposure);
    }
    else {
      local_9f8 = 0;
    }
    lVar42 = 2;
    local_9b8 = param_2->PreExposure;
    fStack_a1c = (param_2->JitterOffset).field0_0x0._s_0.Y;
    local_a08 = (param_2->MotionVectorScale).field0_0x0._s_0.Y;
    fStack_a20 = (param_2->JitterOffset).field0_0x0._s_0.X;
    uStack_a10 = (uint)param_2->bReset;
    local_8f8 = param_2->DeltaTimeMS;
    fStack_a0c = (param_2->MotionVectorScale).field0_0x0._s_0.X;
    pNVar28 = &local_a48;
    pNVar30 = &local_1f8;
    do {
      pNVar41 = pNVar30;
      pNVar39 = pNVar28;
      NVar5 = pNVar39[1];
      uVar7 = pNVar39[2].X;
      uVar8 = pNVar39[2].Y;
      NVar25 = pNVar39[3];
      (pNVar41->Feature).pInColor = (ID3D11Resource *)*pNVar39;
      (pNVar41->Feature).pInOutput = (ID3D11Resource *)NVar5;
      NVar5 = pNVar39[4];
      uVar9 = pNVar39[5].X;
      uVar10 = pNVar39[5].Y;
      (pNVar41->Feature).InSharpness = (float)uVar7;
      *(uint *)&(pNVar41->Feature).field_0x14 = uVar8;
      pNVar41->pInDepth = (ID3D11Resource *)NVar25;
      NVar22 = *(NVSDK_NGX_Dimensions *)(pNVar39 + 6);
      uVar7 = pNVar39[7].X;
      uVar8 = pNVar39[7].Y;
      pNVar41->pInMotionVectors = (ID3D11Resource *)NVar5;
      pNVar41->InJitterOffsetX = (float)uVar9;
      pNVar41->InJitterOffsetY = (float)uVar10;
      uVar9 = pNVar39[8].X;
      uVar10 = pNVar39[8].Y;
      NVar5 = pNVar39[9];
      pNVar41->InRenderSubrectDimensions = NVar22;
      pNVar41->InReset = uVar7;
      pNVar41->InMVScaleX = (float)uVar8;
      NVar25 = pNVar39[10];
      NVar26 = pNVar39[0xb];
      pNVar41->InMVScaleY = (float)uVar9;
      *(uint *)&pNVar41->field_0x44 = uVar10;
      pNVar41->pInTransparencyMask = (ID3D11Resource *)NVar5;
      NVar5 = pNVar39[0xc];
      NVar27 = pNVar39[0xd];
      pNVar41->pInExposureTexture = (ID3D11Resource *)NVar25;
      pNVar41->pInBiasCurrentColorMask = (ID3D11Resource *)NVar26;
      NVar25 = pNVar39[0xe];
      NVar26 = pNVar39[0xf];
      pNVar41->InColorSubrectBase = NVar5;
      pNVar41->InDepthSubrectBase = NVar27;
      pNVar41->InMVSubrectBase = NVar25;
      pNVar41->InTranslucencySubrectBase = NVar26;
      lVar42 = lVar42 + -1;
      pNVar28 = pNVar39 + 0x10;
      pNVar30 = (NVSDK_NGX_D3D11_DLSS_Eval_Params *)&pNVar41->InBiasCurrentColorSubrectBase;
    } while (lVar42 != 0);
    NVar5 = pNVar39[0x11];
    pFVar3 = param_2->OutputColor;
    uVar7 = pNVar39[0x12].X;
    uVar8 = pNVar39[0x12].Y;
    uVar9 = pNVar39[0x13].X;
    uVar10 = pNVar39[0x13].Y;
    *(NVSDK_NGX_Coordinates *)&(pNVar41->InBiasCurrentColorSubrectBase).X = pNVar39[0x10];
    pNVar41->InOutputSubrectBase = NVar5;
    NVar5 = pNVar39[0x14];
    NVar25 = pNVar39[0x15];
    pNVar41->InPreExposure = (float)uVar7;
    pNVar41->InExposureScale = (float)uVar8;
    pNVar41->InIndicatorInvertXAxis = uVar9;
    pNVar41->InIndicatorInvertYAxis = uVar10;
    NVar26 = pNVar39[0x16];
    NVar27 = pNVar39[0x17];
    (pNVar41->GBufferSurface).pInAttrib[0] = (ID3D11Resource *)NVar5;
    *(NVSDK_NGX_Coordinates *)((pNVar41->GBufferSurface).pInAttrib + 1) = NVar25;
    uVar7 = pNVar39[0x18].X;
    uVar8 = pNVar39[0x18].Y;
    uVar9 = pNVar39[0x19].X;
    uVar10 = pNVar39[0x19].Y;
    *(NVSDK_NGX_Coordinates *)((pNVar41->GBufferSurface).pInAttrib + 2) = NVar26;
    *(NVSDK_NGX_Coordinates *)((pNVar41->GBufferSurface).pInAttrib + 3) = NVar27;
    uVar11 = pNVar39[0x1a].X;
    uVar12 = pNVar39[0x1a].Y;
    uVar15 = pNVar39[0x1b].X;
    uVar16 = pNVar39[0x1b].Y;
    NVar5 = pNVar39[0x1c];
    *(uint *)((pNVar41->GBufferSurface).pInAttrib + 4) = uVar7;
    *(uint *)((longlong)(pNVar41->GBufferSurface).pInAttrib + 0x24) = uVar8;
    *(uint *)((pNVar41->GBufferSurface).pInAttrib + 5) = uVar9;
    *(uint *)((longlong)(pNVar41->GBufferSurface).pInAttrib + 0x2c) = uVar10;
    *(uint *)((pNVar41->GBufferSurface).pInAttrib + 6) = uVar11;
    *(uint *)((longlong)(pNVar41->GBufferSurface).pInAttrib + 0x34) = uVar12;
    *(uint *)((pNVar41->GBufferSurface).pInAttrib + 7) = uVar15;
    *(uint *)((longlong)(pNVar41->GBufferSurface).pInAttrib + 0x3c) = uVar16;
    *(NVSDK_NGX_Coordinates *)((pNVar41->GBufferSurface).pInAttrib + 8) = NVar5;
    local_1f8.Feature.pInOutput =
         (ID3D11Resource *)(**(code **)(*(longlong *)this->D3D11RHI + 0x508))(this->D3D11RHI,pFVar3)
    ;
    local_1f8.Feature.pInColor =
         (ID3D11Resource *)
         (**(code **)(*(longlong *)this->D3D11RHI + 0x508))(this->D3D11RHI,param_2->InputColor);
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar34 = param_3->Object;
    if (((pFVar34->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pNVar4 = ((pFVar34->DLSSFeature).Object)->Parameter;
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar34 = param_3->Object;
    if (((pFVar34->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    NVar33 = NGX_D3D11_EVALUATE_DLSS_EXT
                       (this->Direct3DDeviceIMContext,((pFVar34->DLSSFeature).Object)->Feature,
                        pNVar4,&local_1f8);
    if ((NVar33 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
      pTVar35 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
      pNVar37 = TSharedPtr<NGXDLSSFeature,1>::operator->(pTVar35);
      FDLSSFeatureDesc::GetDebugDescription(&pNVar37->Desc,&local_a58);
      GetNGXResultAsString(NVar33);
      bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(((ResultEvaluate) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                          ,0x17f,L"NGX_D3D11_EVALUATE_DLSS_EXT failed! (%u %s), %s");
      if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a58.Data.AllocatorInstance.Data);
      }
      if (bVar32) goto code_r0x00014de1459c;
    }
  }
  else {
    memset(local_8e0,0,0x370);
    local_800 = *(undefined4 *)&(param_2->DestRect).field0_0x0;
    uStack_7fc = *(undefined4 *)((longlong)&(param_2->DestRect).field0_0x0 + 4);
    uStack_828 = *(undefined4 *)&(param_2->SrcRect).field0_0x0;
    uStack_824 = *(undefined4 *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    iStack_888 = iVar43;
    iStack_884 = iVar44;
    local_8a0 = (**(code **)(lVar42 + 0x508))(pIVar2,param_2->InputDepth);
    local_820 = *(undefined4 *)&(param_2->SrcRect).field0_0x0;
    uStack_81c = *(undefined4 *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    uStack_898 = (**(code **)(*(longlong *)pIVar2 + 0x508))(pIVar2,param_2->InputMotionVectors);
    uStack_818 = 0;
    if (param_2->bUseBiasCurrentColorMask == false) {
      local_860 = 0;
    }
    else {
      local_860 = (**(code **)(*(longlong *)pIVar2 + 0x508))
                            (pIVar2,param_2->InputBiasCurrentColorMask);
    }
    uStack_808 = *(undefined4 *)&(param_2->SrcRect).field0_0x0;
    uStack_804 = *(undefined4 *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    if (param_2->bUseAutoExposure == false) {
      uStack_868 = (**(code **)(*(longlong *)pIVar2 + 0x508))(pIVar2,param_2->InputExposure);
    }
    else {
      uStack_868 = 0;
    }
    lVar42 = 6;
    local_688 = param_2->PreExposure;
    fStack_88c = (param_2->JitterOffset).field0_0x0._s_0.Y;
    fStack_878 = (param_2->MotionVectorScale).field0_0x0._s_0.Y;
    local_890 = (param_2->JitterOffset).field0_0x0._s_0.X;
    local_880 = (uint)param_2->bReset;
    local_5c8 = param_2->DeltaTimeMS;
    fStack_87c = (param_2->MotionVectorScale).field0_0x0._s_0.X;
    pNVar29 = &local_568;
    puVar31 = local_8e0;
    do {
      puVar40 = puVar31;
      pNVar38 = pNVar29;
      pIVar17 = (ID3D11Resource *)puVar40[1];
      pIVar18 = (ID3D11Resource *)puVar40[2];
      pIVar19 = (ID3D11Resource *)puVar40[3];
      pNVar38->pInDiffuseAlbedo = (ID3D11Resource *)*puVar40;
      pNVar38->pInSpecularAlbedo = pIVar17;
      pIVar17 = (ID3D11Resource *)puVar40[4];
      pIVar20 = (ID3D11Resource *)puVar40[5];
      pNVar38->pInNormals = pIVar18;
      pNVar38->pInRoughness = pIVar19;
      pIVar18 = (ID3D11Resource *)puVar40[6];
      pIVar19 = (ID3D11Resource *)puVar40[7];
      pNVar38->pInColor = pIVar17;
      pNVar38->pInAlpha = pIVar20;
      pIVar17 = (ID3D11Resource *)puVar40[8];
      pIVar20 = (ID3D11Resource *)puVar40[9];
      pNVar38->pInOutput = pIVar18;
      pNVar38->pInOutputAlpha = pIVar19;
      uVar21 = puVar40[10];
      NVar22 = *(NVSDK_NGX_Dimensions *)(puVar40 + 0xb);
      pNVar38->pInDepth = pIVar17;
      pNVar38->pInMotionVectors = pIVar20;
      uVar23 = puVar40[0xc];
      uVar24 = puVar40[0xd];
      pNVar38->InJitterOffsetX = (float)(int)uVar21;
      pNVar38->InJitterOffsetY = (float)(int)((ulonglong)uVar21 >> 0x20);
      pNVar38->InRenderSubrectDimensions = NVar22;
      pIVar17 = (ID3D11Resource *)puVar40[0xe];
      pIVar18 = (ID3D11Resource *)puVar40[0xf];
      pNVar38->InReset = (int)uVar23;
      pNVar38->InMVScaleX = (float)(int)((ulonglong)uVar23 >> 0x20);
      *(undefined8 *)&pNVar38->InMVScaleY = uVar24;
      pNVar38->pInTransparencyMask = pIVar17;
      pNVar38->pInExposureTexture = pIVar18;
      lVar42 = lVar42 + -1;
      pNVar29 = (NVSDK_NGX_D3D11_DLSSD_Eval_Params *)&pNVar38->pInBiasCurrentColorMask;
      puVar31 = puVar40 + 0x10;
    } while (lVar42 != 0);
    NVar5 = *(NVSDK_NGX_Coordinates *)(puVar40 + 0x11);
    pFVar3 = param_2->OutputColor;
    NVar25 = *(NVSDK_NGX_Coordinates *)(puVar40 + 0x12);
    NVar26 = *(NVSDK_NGX_Coordinates *)(puVar40 + 0x13);
    pNVar38->pInBiasCurrentColorMask = (ID3D11Resource *)puVar40[0x10];
    pNVar38->InAlphaSubrectBase = NVar5;
    NVar5 = *(NVSDK_NGX_Coordinates *)(puVar40 + 0x14);
    NVar27 = *(NVSDK_NGX_Coordinates *)(puVar40 + 0x15);
    pNVar38->InOutputAlphaSubrectBase = NVar25;
    pNVar38->InDiffuseAlbedoSubrectBase = NVar26;
    NVar25 = *(NVSDK_NGX_Coordinates *)(puVar40 + 0x16);
    NVar26 = *(NVSDK_NGX_Coordinates *)(puVar40 + 0x17);
    pNVar38->InSpecularAlbedoSubrectBase = NVar5;
    pNVar38->InNormalsSubrectBase = NVar27;
    NVar5 = *(NVSDK_NGX_Coordinates *)(puVar40 + 0x18);
    NVar27 = *(NVSDK_NGX_Coordinates *)(puVar40 + 0x19);
    pNVar38->InRoughnessSubrectBase = NVar25;
    pNVar38->InColorSubrectBase = NVar26;
    uVar7 = *(uint *)(puVar40 + 0x1a);
    uVar8 = *(uint *)((longlong)puVar40 + 0xd4);
    uVar9 = *(uint *)(puVar40 + 0x1b);
    uVar10 = *(uint *)((longlong)puVar40 + 0xdc);
    pNVar38->InDepthSubrectBase = NVar5;
    pNVar38->InMVSubrectBase = NVar27;
    uVar11 = *(uint *)(puVar40 + 0x1c);
    uVar12 = *(uint *)((longlong)puVar40 + 0xe4);
    uVar13 = *(undefined4 *)(puVar40 + 0x1d);
    uVar14 = *(undefined4 *)((longlong)puVar40 + 0xec);
    pIVar2 = this->D3D11RHI;
    (pNVar38->InTranslucencySubrectBase).X = uVar7;
    (pNVar38->InTranslucencySubrectBase).Y = uVar8;
    (pNVar38->InBiasCurrentColorSubrectBase).X = uVar9;
    (pNVar38->InBiasCurrentColorSubrectBase).Y = uVar10;
    (pNVar38->InOutputSubrectBase).X = uVar11;
    (pNVar38->InOutputSubrectBase).Y = uVar12;
    *(undefined4 *)&pNVar38->pInReflectedAlbedo = uVar13;
    *(undefined4 *)((longlong)&pNVar38->pInReflectedAlbedo + 4) = uVar14;
    local_568.pInOutput =
         (ID3D11Resource *)(**(code **)(*(longlong *)pIVar2 + 0x508))(pIVar2,pFVar3);
    local_568.pInColor =
         (ID3D11Resource *)
         (**(code **)(*(longlong *)this->D3D11RHI + 0x508))(this->D3D11RHI,param_2->InputColor);
    local_568.pInDiffuseAlbedo =
         (ID3D11Resource *)
         (**(code **)(*(longlong *)this->D3D11RHI + 0x508))
                   (this->D3D11RHI,param_2->InputDiffuseAlbedo);
    local_568.InDiffuseAlbedoSubrectBase.X = 0;
    local_568.InDiffuseAlbedoSubrectBase.Y = 0;
    local_568.pInSpecularAlbedo =
         (ID3D11Resource *)
         (**(code **)(*(longlong *)this->D3D11RHI + 0x508))
                   (this->D3D11RHI,param_2->InputSpecularAlbedo);
    local_568.InSpecularAlbedoSubrectBase.X = 0;
    local_568.InSpecularAlbedoSubrectBase.Y = 0;
    local_568.pInNormals =
         (ID3D11Resource *)
         (**(code **)(*(longlong *)this->D3D11RHI + 0x508))(this->D3D11RHI,param_2->InputNormals);
    local_568.InNormalsSubrectBase.X = 0;
    local_568.InNormalsSubrectBase.Y = 0;
    local_568.pInRoughness =
         (ID3D11Resource *)
         (**(code **)(*(longlong *)this->D3D11RHI + 0x508))(this->D3D11RHI,param_2->InputRoughness);
    local_568.InRoughnessSubrectBase.X = 0;
    local_568.InRoughnessSubrectBase.Y = 0;
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar34 = param_3->Object;
    if (((pFVar34->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pNVar4 = ((pFVar34->DLSSFeature).Object)->Parameter;
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar34 = param_3->Object;
    if (((pFVar34->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    NVar33 = NGX_D3D11_EVALUATE_DLSSD_EXT
                       (this->Direct3DDeviceIMContext,((pFVar34->DLSSFeature).Object)->Feature,
                        pNVar4,&local_568);
    if ((NVar33 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
      pTVar35 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
      pNVar37 = TSharedPtr<NGXDLSSFeature,1>::operator->(pTVar35);
      FDLSSFeatureDesc::GetDebugDescription(&pNVar37->Desc,&local_a68);
      GetNGXResultAsString(NVar33);
      bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(((ResultEvaluate) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                          ,0x170,L"NGX_D3D11_EVALUATE_DLSSD_EXT failed! (%u %s), %s");
      if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a68.Data.AllocatorInstance.Data);
      }
      if (bVar32) {
code_r0x00014de1459c:
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar34 = param_3->Object;
  if (((pFVar34->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pNVar37 = (pFVar34->DLSSFeature).Object;
  lVar42 = this->_padding_;
  if ((pNVar37->Feature == (NVSDK_NGX_Handle *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Feature",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                          ,0x124,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pNVar37->Parameter == (NVSDK_NGX_Parameter *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parameter",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                          ,0x125,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pNVar37->LastUsedFrame = (uint)lVar42;
LAB_14de1467c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// Init_NGX_D3D11 @ 14de146b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENGXBinariesSearchOrder": Some values do not have unique names */
/* WARNING: Enum "ENGXProjectIdentifier": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

NVSDK_NGX_Result __thiscall
FNGXD3D11RHI::Init_NGX_D3D11
          (FNGXD3D11RHI *this,FNGXRHICreateArguments *param_1,wchar_t *param_2,ID3D11Device *param_3
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
      if (param_1->NGXAppId == 0) goto LAB_14de1471f;
LAB_14de14750:
      NVar5 = NVSDK_NGX_D3D11_Init((ulonglong)param_1->NGXAppId,param_2,param_3,param_4,NVar10);
      if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
        GetNGXResultAsString(NVar5);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
      }
    }
    else {
      if (param_1->ProjectIdentifier == ForceNGXApplicationID) goto LAB_14de14750;
LAB_14de1471f:
      local_78.Data = (FScriptContainerElement *)0x0;
      if ((param_1->UnrealEngineVersion).Data.ArrayNum == 0) {
        pwVar8 = L"";
LAB_14de147ab:
        sVar6 = wcslen(pwVar8);
        local_68 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar8,(int)sVar6);
        uVar1 = local_68 + 1;
        uVar9 = uVar1;
        if (uVar1 < 0x81) {
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            uVar9 = 0;
            goto LAB_14de147e8;
          }
        }
        else {
LAB_14de147e8:
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
        if ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0) goto LAB_14de147ab;
        local_70 = (FScriptContainerElement *)0x0;
        local_68 = 0;
      }
      pFVar2 = local_70;
      local_118.Data = (FScriptContainerElement *)0x0;
      if ((param_1->UnrealProjectID).Data.ArrayNum == 0) {
        pwVar8 = L"";
LAB_14de14854:
        sVar6 = wcslen(pwVar8);
        local_108 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar8,(int)sVar6);
        uVar1 = local_108 + 1;
        uVar9 = uVar1;
        if (uVar1 < 0x81) {
          if (local_118.Data != (FScriptContainerElement *)0x0) {
            uVar9 = 0;
            goto LAB_14de1488d;
          }
        }
        else {
LAB_14de1488d:
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
        if ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0) goto LAB_14de14854;
        local_108 = 0;
        local_110 = (FScriptContainerElement *)0x0;
      }
      NVar5 = NVSDK_NGX_D3D11_Init_with_ProjectID
                        ((char *)local_110,NVSDK_NGX_ENGINE_TYPE_UNREAL,(char *)pFVar2,param_2,
                         param_3,param_4,NVar10);
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      if (4 < (byte)LogDLSSNGXD3D11RHI._0_1_) {
        GetNGXResultAsString(NVar5);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
      }
    }
    NVar7 = NVar5 & 0xfff00000;
    if ((NVar7 == NVSDK_NGX_Result_Fail) &&
       (bVar4 = NGXRHI::IsSafeToShutdownNGX((NGXRHI *)this), bVar4)) {
      NVSDK_NGX_D3D11_Shutdown1(param_3);
    }
    else if (NVar7 != NVSDK_NGX_Result_Fail) goto LAB_14de149c3;
    NVar3 = NVar10 - 1;
  } while (0x12 < (int)(NVar10 - 1));
  if (NVar7 != NVSDK_NGX_Result_Fail) {
LAB_14de149c3:
    if ((NVar10 < 0x14) && (4 < (byte)LogDLSSNGXD3D11RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXD3D11RHI);
    }
  }
  return NVar5;
}

// IsIncompatibleAPICaptureToolActive @ 14de14a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FNGXD3D11RHI::IsIncompatibleAPICaptureToolActive(ID3D11Device *param_1)

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

// IsRRSupportedByRHI @ 14de14ae0

bool __thiscall FNGXD3D11RHI::IsRRSupportedByRHI(FNGXD3D11RHI *this)

{
  return false;
}


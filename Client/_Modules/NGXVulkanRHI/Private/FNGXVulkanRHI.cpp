// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXVulkanRHI
// Functions: 7

// FNGXVulkanRHI @ 14de19db0

/* WARNING: Enum "ENGXBinariesSearchOrder": Some values do not have unique names */
/* WARNING: Enum "ENGXProjectIdentifier": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FNGXVulkanRHI * __thiscall
FNGXVulkanRHI::FNGXVulkanRHI(FNGXVulkanRHI *this,FNGXRHICreateArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  NVSDK_NGX_Result NVar3;
  IVulkanDynamicRHI *pIVar4;
  FNGXVulkanRHI *pFVar5;
  VkInstance_T *pVVar6;
  VkPhysicalDevice_T *pVVar7;
  VkDevice_T *pVVar8;
  ForAnyElementType FVar9;
  FString local_18;
  
  NGXRHI::NGXRHI((NGXRHI *)this,param_1);
  this->_padding_ = (longlong)&___7FNGXVulkanRHI__6B_;
  pIVar4 = (IVulkanDynamicRHI *)(**(code **)(param_1->DynamicRHI->_padding_ + 0x30))();
  this->VulkanRHI = pIVar4;
  if ((pIVar4 == (IVulkanDynamicRHI *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("VulkanRHI",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FNGXVulkanRHI *)(*pcVar1)();
    return pFVar5;
  }
  NGXRHI::GetNGXLogDirectory(&local_18);
  NGXRHI::bIsIncompatibleAPICaptureToolActive = false;
  pVVar6 = (VkInstance_T *)(**(code **)(*(longlong *)this->VulkanRHI + 0x4d0))();
  pVVar7 = (VkPhysicalDevice_T *)(**(code **)(*(longlong *)this->VulkanRHI + 0x4e8))();
  pVVar8 = (VkDevice_T *)(**(code **)(*(longlong *)this->VulkanRHI + 0x4d8))();
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar9.Data = local_18.Data.AllocatorInstance.Data;
  }
  NVar3 = Init_NGX_VK(this,param_1,(wchar_t *)FVar9.Data,pVVar6,pVVar7,pVVar8,
                      (NVSDK_NGX_FeatureCommonInfo *)&this->_padding_);
  if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
    GetNGXResultAsString(NVar3);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
  }
  *(NVSDK_NGX_Result *)&this->_padding_ = NVar3;
  if (NVar3 == NVSDK_NGX_Result_FAIL_OutOfDate) {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  else if ((NVar3 & 0xfff00000) != NVSDK_NGX_Result_Fail) {
    NGXRHI::bNGXInitialized = true;
    NVar3 = NVSDK_NGX_VULKAN_GetCapabilityParameters((NVSDK_NGX_Parameter **)&this->_padding_);
    if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
      GetNGXResultAsString(NVar3);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
    }
    if (NVar3 == NVSDK_NGX_Result_FAIL_OutOfDate) {
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    }
    else if ((NVar3 & 0xfff00000) != NVSDK_NGX_Result_Fail) {
      NGXRHI::FDLSSQueryFeature::QueryDLSSSupport((FDLSSQueryFeature *)&this->_padding_);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FNGXVulkanRHI @ 14de19f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNGXVulkanRHI::~FNGXVulkanRHI(FNGXVulkanRHI *this)

{
  bool bVar1;
  NVSDK_NGX_Result NVar2;
  VkDevice_T *pVVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->_padding_ = (longlong)&___7FNGXVulkanRHI__6B_;
  if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXVulkanRHI::~FNGXVulkanRHI",0x1d,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if (NGXRHI::bNGXInitialized != false) {
    NGXRHI::ReleaseAllocatedFeatures((NGXRHI *)this);
    if ((NVSDK_NGX_Parameter *)this->_padding_ != (NVSDK_NGX_Parameter *)0x0) {
      NVar2 = NVSDK_NGX_VULKAN_DestroyParameters((NVSDK_NGX_Parameter *)this->_padding_);
      if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
      }
    }
    bVar1 = NGXRHI::IsSafeToShutdownNGX((NGXRHI *)this);
    if (bVar1) {
      pVVar3 = (VkDevice_T *)(**(code **)(*(longlong *)this->VulkanRHI + 0x4d8))();
      NVar2 = NVSDK_NGX_VULKAN_Shutdown1(pVVar3);
      if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
        GetNGXResultAsString(NVar2);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
      }
    }
    NGXRHI::bNGXInitialized = false;
  }
  if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXVulkanRHI::~FNGXVulkanRHI",0x1d,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  NGXRHI::~NGXRHI((NGXRHI *)this);
  return;
}

// operator() @ 14de1a320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkFormat": Some values do not have unique names */

NVSDK_NGX_Resource_VK * __thiscall
`FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
          (void *this,NVSDK_NGX_Resource_VK *__return_storage_ptr__,FRHITexture *param_1)

{
  code *pcVar1;
  bool bVar2;
  NVSDK_NGX_Resource_VK *pNVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  VkImageView_T *local_68;
  VkImage_T *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  VkFormat local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1 == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRHITexture",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                       ,0x10d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pNVar3 = (NVSDK_NGX_Resource_VK *)(*pcVar1)();
      return pNVar3;
    }
  }
  lVar4 = (**(code **)(param_1->_padding_ + 0x28))(param_1);
  if ((lVar4 != 0) && (param_1 = *(FRHITexture **)(lVar4 + 0x138), param_1 == (FRHITexture *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRHITexture",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                       ,0x111,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pNVar3 = (NVSDK_NGX_Resource_VK *)(*pcVar1)();
      return pNVar3;
    }
  }
  (**(code **)(**(longlong **)this + 0x5a0))(*(longlong **)this,&local_68,param_1);
  *(undefined8 *)((longlong)&__return_storage_ptr__->Resource + 0x10) = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->Resource + 0x18) = 0;
  (__return_storage_ptr__->Resource).ImageViewInfo.SubresourceRange.layerCount = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x35 = 0;
  __return_storage_ptr__->field_0x37 = 0;
  __return_storage_ptr__->Type = NVSDK_NGX_RESOURCE_VK_TYPE_VK_IMAGEVIEW;
  __return_storage_ptr__->ReadWrite = (local_30 & 0x60000) != 0;
  (__return_storage_ptr__->Resource).ImageViewInfo.ImageView = local_68;
  (__return_storage_ptr__->Resource).ImageViewInfo.Image = local_60;
  (__return_storage_ptr__->Resource).ImageViewInfo.Format = local_44;
  (__return_storage_ptr__->Resource).ImageViewInfo.Width = local_40;
  (__return_storage_ptr__->Resource).ImageViewInfo.Height = local_3c;
  if (local_38 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ImageViewInfo.Depth == 1",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                       ,0x124,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pNVar3 = (NVSDK_NGX_Resource_VK *)(*pcVar1)();
      return pNVar3;
    }
  }
  *(undefined8 *)((longlong)&__return_storage_ptr__->Resource + 0x10) = local_58;
  *(undefined8 *)((longlong)&__return_storage_ptr__->Resource + 0x18) = uStack_50;
  (__return_storage_ptr__->Resource).ImageViewInfo.SubresourceRange.layerCount = local_48;
  if (local_48 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NGXTexture.Resource.ImageViewInfo.SubresourceRange.layerCount == 1",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                       ,0x129,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pNVar3 = (NVSDK_NGX_Resource_VK *)(*pcVar1)();
      return pNVar3;
    }
  }
  if ((__return_storage_ptr__->Resource).ImageViewInfo.SubresourceRange.levelCount != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NGXTexture.Resource.ImageViewInfo.SubresourceRange.levelCount == 1",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                       ,0x12a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pNVar3 = (NVSDK_NGX_Resource_VK *)(*pcVar1)();
      return pNVar3;
    }
  }
  return __return_storage_ptr__;
}

// ExecuteDLSS @ 14de1a740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNGXVulkanRHI::ExecuteDLSS
          (FNGXVulkanRHI *this,FRHICommandList *param_1,FRHIDLSSArguments *param_2,
          TSharedPtr<FDLSSState,1> *param_3)

{
  uint uVar1;
  FDLSSState *pFVar2;
  FRHITexture *pFVar3;
  NVSDK_NGX_Parameter *pNVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  NVSDK_NGX_Result NVar8;
  VkCommandBuffer_T *pVVar9;
  TSharedPtr<NGXDLSSFeature,1> *pTVar10;
  VkDevice_T *pVVar11;
  TSharedRef<FVulkanNGXDLSSFeature,1> *pTVar12;
  NGXDLSSFeature *pNVar13;
  uint *puVar14;
  NVSDK_NGX_Resource_VK *pNVar15;
  <unnamed_type_Resource> *p<Var16;
  undefined1 auStackY_b18 [32];
  IVulkanDynamicRHI *local_ac8;
  NVSDK_NGX_Parameter *local_ac0;
  VkCommandBuffer_T *local_ab8;
  NVSDK_NGX_Handle *local_ab0;
  NVSDK_NGX_Handle *local_aa8;
  TSharedPtr<NGXDLSSFeature,1> local_aa0;
  TSharedPtr<NGXDLSSFeature,1> local_a90;
  TIntRect<int>_u_0 local_a80;
  TIntPoint<int>_u_0 local_a70;
  TIntPoint<int>_u_0 local_a68;
  int local_a60;
  int local_a5c;
  int local_a58;
  undefined1 local_a54;
  undefined1 local_a53;
  undefined1 local_a52;
  undefined1 local_a51;
  uint local_a50;
  uint local_a4c;
  ENGXDLSSDenoiserMode local_a48;
  TIntRect<int>_u_0 local_a44;
  TIntPoint<int>_u_0 local_a34;
  TIntPoint<int>_u_0 local_a2c;
  int local_a24;
  int local_a20;
  int local_a1c;
  undefined1 local_a18;
  undefined1 local_a17;
  undefined1 local_a16;
  undefined1 local_a15;
  uint local_a14;
  uint local_a10;
  ENGXDLSSDenoiserMode local_a0c;
  TIntRect<int>_u_0 local_a08;
  TIntPoint<int>_u_0 local_9f8;
  TIntPoint<int>_u_0 local_9f0;
  int local_9e8;
  int local_9e4;
  int local_9e0;
  undefined1 local_9dc;
  undefined1 local_9db;
  undefined1 local_9da;
  undefined1 local_9d9;
  uint local_9d8;
  uint local_9d4;
  ENGXDLSSDenoiserMode local_9d0;
  TIntRect<int>_u_0 local_9cc;
  TIntPoint<int>_u_0 local_9bc;
  TIntPoint<int>_u_0 local_9b4;
  int local_9ac;
  int local_9a8;
  int local_9a4;
  undefined1 local_9a0;
  undefined1 local_99f;
  undefined1 local_99e;
  undefined1 local_99d;
  uint local_99c;
  uint local_998;
  ENGXDLSSDenoiserMode local_994;
  TSharedPtr<NGXDLSSFeature,1> local_990;
  TSharedPtr<NGXDLSSFeature,1> local_980;
  TSharedPtr<NGXDLSSFeature,1> local_970;
  TSharedPtr<NGXDLSSFeature,1> local_960;
  TSharedRef<FVulkanNGXDLSSFeature,1> local_950;
  FString local_940;
  FString local_930;
  TSharedRef<FVulkanNGXDLSSFeature,1> local_920;
  FString local_910;
  FString local_900;
  NVSDK_NGX_VK_DLSS_Eval_Params local_8e8;
  NVSDK_NGX_VK_DLSSD_Eval_Params local_778;
  NVSDK_NGX_Resource_VK local_408;
  NVSDK_NGX_DLSS_Create_Params local_3d0;
  NVSDK_NGX_DLSSD_Create_Params local_3b0;
  <unnamed_type_Resource> local_388;
  undefined8 local_358;
  NVSDK_NGX_Resource_VK local_350;
  NVSDK_NGX_Resource_VK local_318;
  NVSDK_NGX_Resource_VK local_2e0;
  NVSDK_NGX_Resource_VK local_2a8;
  <unnamed_type_Resource> local_270;
  NVSDK_NGX_Resource_VK local_238;
  NVSDK_NGX_Resource_VK local_200;
  NVSDK_NGX_Resource_VK local_1c8;
  NVSDK_NGX_Resource_VK local_190;
  NVSDK_NGX_Resource_VK local_158;
  NVSDK_NGX_Resource_VK local_120;
  NVSDK_NGX_Resource_VK local_e8;
  <unnamed_type_Resource> local_b0;
  NVSDK_NGX_Resource_VK local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b18;
  if (((GIsRunningRHIInSeparateThread_InternalUseOnly) && (bVar7 = IsInRHIThread(), !bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                         ,0xaf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((char)this->_padding_ == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDLSSAvailable()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                       ,0xb0,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((char)this->_padding_ == '\0') goto LAB_14de1bc7a;
  }
  FRHIDLSSArguments::Validate(param_2);
  pVVar9 = (VkCommandBuffer_T *)(**(code **)(*(longlong *)this->VulkanRHI + 0x510))();
  local_ab8 = pVVar9;
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar7 = FDLSSState::RequiresFeatureRecreation(param_3->Object,param_2);
  if (bVar7) {
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_3->Object->DLSSFeature).Object != (NGXDLSSFeature *)0x0) {
      if ((param_3->Object == (FDLSSState *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pNVar13 = (param_3->Object->DLSSFeature).Object;
      if ((((pNVar13 == (NGXDLSSFeature *)0x0) || (pNVar13->Feature == (NVSDK_NGX_Handle *)0x0)) ||
          (pNVar13->Parameter == (NVSDK_NGX_Parameter *)0x0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InDLSSState->DLSSFeature || InDLSSState->HasValidFeature()",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                             ,0xb9,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_990.Object = (NGXDLSSFeature *)0x0;
    local_990.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TSharedPtr<NGXDLSSFeature,1>::operator=(&param_3->Object->DLSSFeature,&local_990);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_990.SharedReferenceCount.ReferenceController);
  }
  if (param_2->bReset != false) {
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((param_3->Object->DLSSFeature).Object != (NGXDLSSFeature *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InDLSSState->DLSSFeature",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                           ,0xbf,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar10 = NGXRHI::FindFreeFeature((NGXRHI *)this,&local_960,param_2);
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TSharedPtr<NGXDLSSFeature,1>::operator=(&param_3->Object->DLSSFeature,pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_960.SharedReferenceCount.ReferenceController);
  }
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_3->Object->DLSSFeature).Object == (NGXDLSSFeature *)0x0) {
    pVVar11 = (VkDevice_T *)(**(code **)(*(longlong *)this->VulkanRHI + 0x4d8))();
    local_ac0 = (NVSDK_NGX_Parameter *)0x0;
    NVar8 = NVSDK_NGX_VULKAN_AllocateParameters(&local_ac0);
    if ((NVar8 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
      GetNGXResultAsString(NVar8);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((Result) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                         ,200,L"NVSDK_NGX_VULKAN_AllocateParameters failed! (%u %s)");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    NGXRHI::ApplyCommonNGXParameterSettings((NGXRHI *)this,local_ac0,param_2);
    if (param_2->DenoiserMode == DLSSRR) {
      FRHIDLSSArguments::GetNGXDLSSRRCreateParams(param_2,&local_3b0);
      pNVar4 = local_ac0;
      local_ab0 = (NVSDK_NGX_Handle *)0x0;
      uVar1 = param_2->GPUVisibility;
      NVSDK_NGX_Parameter_SetUI(local_ac0,"CreationNodeMask",1 << ((byte)param_2->GPUNode & 0x1f));
      NVSDK_NGX_Parameter_SetUI(pNVar4,"VisibilityNodeMask",uVar1);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"Width",local_3b0.InWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"Height",local_3b0.InHeight);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"OutWidth",local_3b0.InTargetWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"OutHeight",local_3b0.InTargetHeight);
      NVSDK_NGX_Parameter_SetI(pNVar4,"PerfQualityValue",local_3b0.InPerfQualityValue);
      NVSDK_NGX_Parameter_SetI(pNVar4,"DLSS.Feature.Create.Flags",local_3b0.InFeatureCreateFlags);
      NVSDK_NGX_Parameter_SetI
                (pNVar4,"DLSS.Enable.Output.Subrects",
                 (uint)(local_3b0.InEnableOutputSubrects != false));
      NVSDK_NGX_Parameter_SetI(pNVar4,"DLSS.Denoise.Mode",1);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"DLSS.Roughness.Mode",local_3b0.InRoughnessMode);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"DLSS.Use.HW.Depth",local_3b0.InUseHWDepth);
      if (pVVar11 == (VkDevice_T *)0x0) {
        NVar8 = NVSDK_NGX_VULKAN_CreateFeature
                          (local_ab8,NVSDK_NGX_Feature_RayReconstruction,pNVar4,&local_ab0);
      }
      else {
        NVar8 = NVSDK_NGX_VULKAN_CreateFeature1
                          (pVVar11,local_ab8,NVSDK_NGX_Feature_RayReconstruction,pNVar4,&local_ab0);
      }
      if ((NVar8 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
        if (1 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
          local_a44._s_0.Min.field0_0x0 =
               (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
          local_a44._s_0.Max.field0_0x0 =
               (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
          local_a34 = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
          local_a2c = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
          local_a24 = param_2->DLSSPreset;
          local_a20 = param_2->DLSSRRPreset;
          local_a1c = param_2->PerfQuality;
          local_a18 = param_2->bHighResolutionMotionVectors;
          local_a17 = param_2->bUseAutoExposure;
          local_a16 = param_2->bEnableAlphaUpscaling;
          local_a15 = param_2->bReleaseMemoryOnDelete;
          local_a14 = param_2->GPUNode;
          local_a10 = param_2->GPUVisibility;
          local_a0c = param_2->DenoiserMode;
          FDLSSFeatureDesc::GetDebugDescription((FDLSSFeatureDesc *)&local_a44._s_0,&local_940);
          GetNGXResultAsString(NVar8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
          if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_940.Data.AllocatorInstance.Data);
          }
        }
        pTVar10 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
        local_980.Object = (NGXDLSSFeature *)0x0;
        local_980.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        TSharedPtr<NGXDLSSFeature,1>::operator=(pTVar10,&local_980);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_980.SharedReferenceCount.ReferenceController);
      }
      else {
        local_a08._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
        local_a08._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
        local_9f8 = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
        local_9f0 = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
        local_9e8 = param_2->DLSSPreset;
        local_9e4 = param_2->DLSSRRPreset;
        local_9e0 = param_2->PerfQuality;
        local_9dc = param_2->bHighResolutionMotionVectors;
        local_9db = param_2->bUseAutoExposure;
        local_9da = param_2->bEnableAlphaUpscaling;
        local_9d9 = param_2->bReleaseMemoryOnDelete;
        local_9d8 = param_2->GPUNode;
        local_9d4 = param_2->GPUVisibility;
        local_9d0 = param_2->DenoiserMode;
        pTVar12 = MakeShared<FVulkanNGXDLSSFeature,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&>
                            (&local_950,&local_ab0,&local_ac0,(FDLSSFeatureDesc *)&local_a08._s_0,
                             (uint *)&this->_padding_);
        local_aa0.Object = (NGXDLSSFeature *)pTVar12->Object;
        local_aa0.SharedReferenceCount.ReferenceController =
             (pTVar12->SharedReferenceCount).ReferenceController;
        if (local_aa0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_aa0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_aa0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar10 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
        TSharedPtr<NGXDLSSFeature,1>::operator=(pTVar10,&local_aa0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_aa0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_950.SharedReferenceCount.ReferenceController);
        pTVar10 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
        pNVar13 = TSharedPtr<NGXDLSSFeature,1>::operator->(pTVar10);
        pNVar13->bHasDLSSRR = true;
      }
    }
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_3->Object->DLSSFeature).Object == (NGXDLSSFeature *)0x0) {
      FRHIDLSSArguments::GetNGXDLSSCreateParams(param_2,&local_3d0);
      pNVar4 = local_ac0;
      local_aa8 = (NVSDK_NGX_Handle *)0x0;
      uVar1 = param_2->GPUVisibility;
      NVSDK_NGX_Parameter_SetUI(local_ac0,"CreationNodeMask",1 << ((byte)param_2->GPUNode & 0x1f));
      NVSDK_NGX_Parameter_SetUI(pNVar4,"VisibilityNodeMask",uVar1);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"Width",local_3d0.Feature.InWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"Height",local_3d0.Feature.InHeight);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"OutWidth",local_3d0.Feature.InTargetWidth);
      NVSDK_NGX_Parameter_SetUI(pNVar4,"OutHeight",local_3d0.Feature.InTargetHeight);
      NVSDK_NGX_Parameter_SetI(pNVar4,"PerfQualityValue",local_3d0.Feature.InPerfQualityValue);
      NVSDK_NGX_Parameter_SetI(pNVar4,"DLSS.Feature.Create.Flags",local_3d0.InFeatureCreateFlags);
      NVSDK_NGX_Parameter_SetI
                (pNVar4,"DLSS.Enable.Output.Subrects",
                 (uint)(local_3d0.InEnableOutputSubrects != false));
      NVar8 = NVSDK_NGX_VULKAN_CreateFeature
                        (local_ab8,NVSDK_NGX_Feature_SuperSampling,pNVar4,&local_aa8);
      if ((NVar8 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
        local_a68 = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
        local_a80._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
        local_a60 = param_2->DLSSPreset;
        local_a5c = param_2->DLSSRRPreset;
        local_a58 = param_2->PerfQuality;
        local_a54 = param_2->bHighResolutionMotionVectors;
        local_a53 = param_2->bUseAutoExposure;
        local_a52 = param_2->bEnableAlphaUpscaling;
        local_a51 = param_2->bReleaseMemoryOnDelete;
        local_a80._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
        local_a50 = param_2->GPUNode;
        local_a70 = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
        local_a4c = param_2->GPUVisibility;
        local_a48 = param_2->DenoiserMode;
        FDLSSFeatureDesc::GetDebugDescription((FDLSSFeatureDesc *)&local_a80._s_0,&local_930);
        GetNGXResultAsString(NVar8);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(((ResultCreate) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                           ,0x101,
                           L"NGX_VULKAN_CREATE_DLSS failed! (CreationNodeMask=0x%x VisibilityNodeMask=0x%x) (%u %s), %s"
                          );
        if (local_930.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_930.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_9cc._s_0.Min.field0_0x0 =
           (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Min.field0_0x0;
      local_9cc._s_0.Max.field0_0x0 =
           (TIntPoint<int>)(param_2->SrcRect).field0_0x0._s_0.Max.field0_0x0;
      local_9bc = (param_2->DestRect).field0_0x0._s_0.Min.field0_0x0;
      local_9b4 = (param_2->DestRect).field0_0x0._s_0.Max.field0_0x0;
      local_9ac = param_2->DLSSPreset;
      local_9a8 = param_2->DLSSRRPreset;
      local_9a4 = param_2->PerfQuality;
      local_9a0 = param_2->bHighResolutionMotionVectors;
      local_99f = param_2->bUseAutoExposure;
      local_99e = param_2->bEnableAlphaUpscaling;
      local_99d = param_2->bReleaseMemoryOnDelete;
      local_99c = param_2->GPUNode;
      local_998 = param_2->GPUVisibility;
      local_994 = param_2->DenoiserMode;
      pTVar12 = MakeShared<FVulkanNGXDLSSFeature,1,NVSDK_NGX_Handle_*_&,NVSDK_NGX_Parameter_*_&,FDLSSFeatureDesc,unsigned_int_&>
                          (&local_920,&local_aa8,&local_ac0,(FDLSSFeatureDesc *)&local_9cc._s_0,
                           (uint *)&this->_padding_);
      local_a90.Object = (NGXDLSSFeature *)pTVar12->Object;
      local_a90.SharedReferenceCount.ReferenceController =
           (pTVar12->SharedReferenceCount).ReferenceController;
      if (local_a90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar10 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
      TSharedPtr<NGXDLSSFeature,1>::operator=(pTVar10,&local_a90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a90.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_920.SharedReferenceCount.ReferenceController);
    }
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_970.Object = (param_3->Object->DLSSFeature).Object;
    local_970.SharedReferenceCount.ReferenceController =
         (param_3->Object->DLSSFeature).SharedReferenceCount.ReferenceController;
    if (local_970.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_970.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_970.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    NGXRHI::RegisterFeature((NGXRHI *)this,&local_970);
    pVVar9 = local_ab8;
  }
  p<Var16 = (<unnamed_type_Resource> *)0x0;
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pNVar13 = (param_3->Object->DLSSFeature).Object;
  if ((((pNVar13 == (NGXDLSSFeature *)0x0) || (pNVar13->Feature == (NVSDK_NGX_Handle *)0x0)) ||
      (pNVar13->Parameter == (NVSDK_NGX_Parameter *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDLSSState->HasValidFeature()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                         ,0x108,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_ac8 = this->VulkanRHI;
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = param_3->Object;
  if (((pFVar2->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = param_2->OutputColor;
  if (((pFVar2->DLSSFeature).Object)->bHasDLSSRR == false) {
    local_8e8.Feature.InSharpness = 0.0;
    local_8e8.Feature._20_4_ = 0;
    local_8e8._68_8_ = 0;
    local_8e8.pInTransparencyMask._4_4_ = 0;
    local_8e8.InTranslucencySubrectBase.X = 0;
    local_8e8.InTranslucencySubrectBase.Y = 0;
    memset(&local_8e8.InExposureScale,0,0xbc);
    local_8e8.pInMotionVectorsReflections._4_4_ = 0;
    local_8e8._340_8_ = 0;
    local_8e8._348_8_ = 0;
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()(&local_ac8,&local_350,pFVar3);
    local_8e8.Feature.pInOutput = &local_350;
    puVar14 = (uint *)(**(code **)(param_2->OutputColor->_padding_ + 0x20))();
    if (((*puVar14 & 0x60000) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InArguments.OutputColor->GetFlags() & (ETextureCreateFlags::UAV | ETextureCreateFlags::Presentable)"
                           ,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                           ,0x19f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((local_350.ReadWrite != true) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOutput.ReadWrite == true",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                           ,0x1a0,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_8e8.InOutputSubrectBase.X = *(uint *)&(param_2->DestRect).field0_0x0;
    local_8e8.InOutputSubrectBase.Y = *(uint *)((longlong)&(param_2->DestRect).field0_0x0 + 4);
    local_8e8.InRenderSubrectDimensions.Width =
         *(int *)((longlong)&(param_2->SrcRect).field0_0x0 + 8) -
         *(int *)&(param_2->SrcRect).field0_0x0;
    local_8e8.InRenderSubrectDimensions.Height =
         *(int *)((longlong)&(param_2->SrcRect).field0_0x0 + 0xc) -
         *(int *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,&local_158,param_2->InputColor);
    local_8e8.Feature.pInColor = &local_158;
    local_8e8.InColorSubrectBase.X = *(uint *)&(param_2->SrcRect).field0_0x0;
    local_8e8.InColorSubrectBase.Y = *(uint *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,&local_120,param_2->InputDepth);
    local_8e8.pInDepth = &local_120;
    local_8e8.InDepthSubrectBase.X = *(uint *)&(param_2->SrcRect).field0_0x0;
    local_8e8.InDepthSubrectBase.Y = *(uint *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,&local_e8,param_2->InputMotionVectors);
    local_8e8.pInMotionVectors = &local_e8;
    local_8e8.InMVSubrectBase.X = 0;
    local_8e8.InMVSubrectBase.Y = 0;
    if (param_2->bUseBiasCurrentColorMask != false) {
      pNVar15 = `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
                          (&local_ac8,&local_408,param_2->InputBiasCurrentColorMask);
      local_388.ImageViewInfo.ImageView = (pNVar15->Resource).ImageViewInfo.ImageView;
      local_388.ImageViewInfo.Image = (pNVar15->Resource).ImageViewInfo.Image;
      local_388._16_8_ = *(undefined8 *)((longlong)&pNVar15->Resource + 0x10);
      local_388._24_8_ = *(undefined8 *)((longlong)&pNVar15->Resource + 0x18);
      local_388._32_8_ = *(undefined8 *)((longlong)&pNVar15->Resource + 0x20);
      local_388._40_8_ = *(undefined8 *)((longlong)&pNVar15->Resource + 0x28);
      local_358._0_4_ = pNVar15->Type;
      local_358._4_1_ = pNVar15->ReadWrite;
      local_358._5_3_ = *(undefined3 *)&pNVar15->field_0x35;
    }
    local_8e8.pInBiasCurrentColorMask = (NVSDK_NGX_Resource_VK *)&local_388;
    if (param_2->bUseBiasCurrentColorMask == false) {
      local_8e8.pInBiasCurrentColorMask = (NVSDK_NGX_Resource_VK *)p<Var16;
    }
    local_8e8.InBiasCurrentColorSubrectBase.X = *(uint *)&(param_2->SrcRect).field0_0x0;
    local_8e8.InBiasCurrentColorSubrectBase.Y =
         *(uint *)((longlong)&(param_2->DestRect).field0_0x0 + 4);
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,(NVSDK_NGX_Resource_VK *)&local_b0.ImageViewInfo,param_2->InputExposure);
    local_8e8.InPreExposure = param_2->PreExposure;
    local_8e8.InJitterOffsetX = (param_2->JitterOffset).field0_0x0._s_0.X;
    local_8e8.pInExposureTexture = (NVSDK_NGX_Resource_VK *)&local_b0;
    if (param_2->bUseAutoExposure != false) {
      local_8e8.pInExposureTexture = (NVSDK_NGX_Resource_VK *)p<Var16;
    }
    local_8e8.InJitterOffsetY = (param_2->JitterOffset).field0_0x0._s_0.Y;
    local_8e8.InMVScaleY = (param_2->MotionVectorScale).field0_0x0._s_0.Y;
    local_8e8.InFrameTimeDeltaInMsec = param_2->DeltaTimeMS;
    local_8e8.InMVScaleX = (param_2->MotionVectorScale).field0_0x0._s_0.X;
    local_8e8.InReset = (int)param_2->bReset;
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = param_3->Object;
    if (((pFVar2->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pNVar4 = ((pFVar2->DLSSFeature).Object)->Parameter;
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = param_3->Object;
    if (((pFVar2->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    NVar8 = NGX_VULKAN_EVALUATE_DLSS_EXT
                      (pVVar9,((pFVar2->DLSSFeature).Object)->Feature,pNVar4,&local_8e8);
    if ((NVar8 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
      pTVar10 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
      pNVar13 = TSharedPtr<NGXDLSSFeature,1>::operator->(pTVar10);
      FDLSSFeatureDesc::GetDebugDescription(&pNVar13->Desc,&local_900);
      GetNGXResultAsString(NVar8);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((ResultEvaluate) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                         ,0x1d6,L"NGX_Vulkan_EVALUATE_DLSS_EXT failed! (%u %s), %s");
      if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_900.Data.AllocatorInstance.Data);
      }
      if (bVar7) goto code_r0x00014de1bb72;
    }
  }
  else {
    local_778.pInAlpha = (NVSDK_NGX_Resource_VK *)0x0;
    local_778.pInOutputAlpha = (NVSDK_NGX_Resource_VK *)0x0;
    local_778._108_8_ = 0;
    local_778.pInTransparencyMask._4_4_ = 0;
    local_778.pInBiasCurrentColorMask = (NVSDK_NGX_Resource_VK *)0x0;
    local_778.InAlphaSubrectBase.X = 0;
    local_778.InAlphaSubrectBase.Y = 0;
    local_778.InOutputAlphaSubrectBase.X = 0;
    local_778.InOutputAlphaSubrectBase.Y = 0;
    local_778.InTranslucencySubrectBase.X = 0;
    local_778.InTranslucencySubrectBase.Y = 0;
    local_778.InBiasCurrentColorSubrectBase.X = 0;
    local_778.InBiasCurrentColorSubrectBase.Y = 0;
    memset(&local_778.InExposureScale,0,0x22c);
    local_778.InDisocclusionMaskSubrectBase.Y = 0;
    local_778._796_8_ = 0;
    local_778._804_8_ = 0;
    local_778._812_8_ = 0;
    local_778._820_8_ = 0;
    local_778._828_8_ = 0;
    local_778._836_8_ = 0;
    local_778._844_8_ = 0;
    local_778._852_8_ = 0;
    local_778._860_8_ = 0;
    local_778._868_8_ = 0;
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()(&local_ac8,&local_318,pFVar3);
    local_778.pInOutput = &local_318;
    puVar14 = (uint *)(**(code **)(param_2->OutputColor->_padding_ + 0x20))();
    if (((*puVar14 & 0x60000) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InArguments.OutputColor->GetFlags() & (ETextureCreateFlags::UAV | ETextureCreateFlags::Presentable)"
                           ,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                           ,0x135,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((local_318.ReadWrite != true) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOutput.ReadWrite == true",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                           ,0x136,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_778.InOutputSubrectBase.X = *(uint *)&(param_2->DestRect).field0_0x0;
    local_778.InOutputSubrectBase.Y = *(uint *)((longlong)&(param_2->DestRect).field0_0x0 + 4);
    local_778.InRenderSubrectDimensions.Width =
         *(int *)((longlong)&(param_2->SrcRect).field0_0x0 + 8) -
         *(int *)&(param_2->SrcRect).field0_0x0;
    local_778.InRenderSubrectDimensions.Height =
         *(int *)((longlong)&(param_2->SrcRect).field0_0x0 + 0xc) -
         *(int *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,&local_78,param_2->InputColor);
    local_778.pInColor = &local_78;
    local_778.InColorSubrectBase.X = *(uint *)&(param_2->SrcRect).field0_0x0;
    local_778.InColorSubrectBase.Y = *(uint *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,&local_2e0,param_2->InputDepth);
    local_778.pInDepth = &local_2e0;
    local_778.InDepthSubrectBase.X = *(uint *)&(param_2->SrcRect).field0_0x0;
    local_778.InDepthSubrectBase.Y = *(uint *)((longlong)&(param_2->SrcRect).field0_0x0 + 4);
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,&local_2a8,param_2->InputMotionVectors);
    local_778.pInMotionVectors = &local_2a8;
    local_778.InMVSubrectBase.X = 0;
    local_778.InMVSubrectBase.Y = 0;
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,(NVSDK_NGX_Resource_VK *)&local_270.ImageViewInfo,param_2->InputExposure);
    local_778.InPreExposure = param_2->PreExposure;
    local_778.InJitterOffsetX = (param_2->JitterOffset).field0_0x0._s_0.X;
    local_778.pInExposureTexture = (NVSDK_NGX_Resource_VK *)&local_270;
    if (param_2->bUseAutoExposure != false) {
      local_778.pInExposureTexture = (NVSDK_NGX_Resource_VK *)p<Var16;
    }
    local_778.InJitterOffsetY = (param_2->JitterOffset).field0_0x0._s_0.Y;
    local_778.InMVScaleY = (param_2->MotionVectorScale).field0_0x0._s_0.Y;
    local_778.InFrameTimeDeltaInMsec = param_2->DeltaTimeMS;
    local_778.InMVScaleX = (param_2->MotionVectorScale).field0_0x0._s_0.X;
    local_778.InReset = (int)param_2->bReset;
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,&local_238,param_2->InputDiffuseAlbedo);
    local_778.pInDiffuseAlbedo = &local_238;
    local_778.InDiffuseAlbedoSubrectBase.X = 0;
    local_778.InDiffuseAlbedoSubrectBase.Y = 0;
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,&local_200,param_2->InputSpecularAlbedo);
    local_778.pInSpecularAlbedo = &local_200;
    local_778.InSpecularAlbedoSubrectBase.X = 0;
    local_778.InSpecularAlbedoSubrectBase.Y = 0;
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,&local_1c8,param_2->InputNormals);
    local_778.pInNormals = &local_1c8;
    local_778.InNormalsSubrectBase.X = 0;
    local_778.InNormalsSubrectBase.Y = 0;
    `FNGXVulkanRHI::ExecuteDLSS'::__l2::<lambda_1>::operator()
              (&local_ac8,&local_190,param_2->InputRoughness);
    local_778.pInRoughness = &local_190;
    local_778.InRoughnessSubrectBase.X = 0;
    local_778.InRoughnessSubrectBase.Y = 0;
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = param_3->Object;
    if (((pFVar2->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pNVar4 = ((pFVar2->DLSSFeature).Object)->Parameter;
    if ((param_3->Object == (FDLSSState *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = param_3->Object;
    if (((pFVar2->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    NVar8 = NGX_VULKAN_EVALUATE_DLSSD_EXT
                      (pVVar9,((pFVar2->DLSSFeature).Object)->Feature,pNVar4,&local_778);
    if ((NVar8 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
      pTVar10 = &TSharedPtr<FDLSSState,1>::operator->(param_3)->DLSSFeature;
      pNVar13 = TSharedPtr<NGXDLSSFeature,1>::operator->(pTVar10);
      FDLSSFeatureDesc::GetDebugDescription(&pNVar13->Desc,&local_910);
      GetNGXResultAsString(NVar8);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(((ResultEvaluate) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXVulkanRHI\\Private\\NGXVulkanRHI.cpp"
                         ,0x197,L"NGX_Vulkan_EVALUATE_DLSSD_EXT failed! (%u %s), %s");
      if (local_910.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_910.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
code_r0x00014de1bb72:
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  if ((param_3->Object == (FDLSSState *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = param_3->Object;
  if (((pFVar2->DLSSFeature).Object == (NGXDLSSFeature *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pNVar13 = (pFVar2->DLSSFeature).Object;
  lVar6 = this->_padding_;
  if ((pNVar13->Feature == (NVSDK_NGX_Handle *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Feature",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                         ,0x124,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pNVar13->Parameter == (NVSDK_NGX_Parameter *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parameter",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Public\\NGXRHI.h"
                         ,0x125,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pNVar13->LastUsedFrame = (uint)lVar6;
  (**(code **)(*(longlong *)this->VulkanRHI + 0x5c0))(this->VulkanRHI,1);
  (**(code **)(*(longlong *)this->VulkanRHI + 0x5b8))(this->VulkanRHI,pVVar9);
LAB_14de1bc7a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// Init_NGX_VK @ 14de1bcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENGXBinariesSearchOrder": Some values do not have unique names */
/* WARNING: Enum "ENGXProjectIdentifier": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

NVSDK_NGX_Result __thiscall
FNGXVulkanRHI::Init_NGX_VK
          (FNGXVulkanRHI *this,FNGXRHICreateArguments *param_1,wchar_t *param_2,
          VkInstance_T *param_3,VkPhysicalDevice_T *param_4,VkDevice_T *param_5,
          NVSDK_NGX_FeatureCommonInfo *param_6)

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
  undefined1 auStackY_228 [32];
  FScriptContainerElement local_198 [128];
  ForAnyElementType local_118;
  FScriptContainerElement *local_110;
  int local_108;
  FScriptContainerElement local_f8 [128];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  NVar3 = NVSDK_NGX_Version_API;
  do {
    NVar10 = NVar3;
    if (param_1->ProjectIdentifier == MinValue) {
      if (param_1->NGXAppId == 0) goto LAB_14de1bd2f;
LAB_14de1bd68:
      NVar5 = NVSDK_NGX_VULKAN_Init
                        ((ulonglong)param_1->NGXAppId,param_2,param_3,param_4,param_5,
                         (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0,
                         (_func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr *)0x0,param_6
                         ,NVar10);
      if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
        GetNGXResultAsString(NVar5);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
      }
    }
    else {
      if (param_1->ProjectIdentifier == ForceNGXApplicationID) goto LAB_14de1bd68;
LAB_14de1bd2f:
      local_78.Data = (FScriptContainerElement *)0x0;
      if ((param_1->UnrealEngineVersion).Data.ArrayNum == 0) {
        pwVar8 = L"";
LAB_14de1bdd7:
        sVar6 = wcslen(pwVar8);
        local_68 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar8,(int)sVar6);
        uVar1 = local_68 + 1;
        uVar9 = uVar1;
        if (uVar1 < 0x81) {
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            uVar9 = 0;
            goto LAB_14de1be14;
          }
        }
        else {
LAB_14de1be14:
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
        if ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0) goto LAB_14de1bdd7;
        local_70 = (FScriptContainerElement *)0x0;
        local_68 = 0;
      }
      pFVar2 = local_70;
      local_118.Data = (FScriptContainerElement *)0x0;
      if ((param_1->UnrealProjectID).Data.ArrayNum == 0) {
        pwVar8 = L"";
LAB_14de1be80:
        sVar6 = wcslen(pwVar8);
        local_108 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar8,(int)sVar6);
        uVar1 = local_108 + 1;
        uVar9 = uVar1;
        if (uVar1 < 0x81) {
          if (local_118.Data != (FScriptContainerElement *)0x0) {
            uVar9 = 0;
            goto LAB_14de1beb9;
          }
        }
        else {
LAB_14de1beb9:
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
        if ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0) goto LAB_14de1be80;
        local_108 = 0;
        local_110 = (FScriptContainerElement *)0x0;
      }
      NVar5 = NVSDK_NGX_VULKAN_Init_with_ProjectID
                        ((char *)local_110,NVSDK_NGX_ENGINE_TYPE_UNREAL,(char *)pFVar2,param_2,
                         param_3,param_4,param_5,
                         (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0,
                         (_func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr *)0x0,param_6
                         ,NVar10);
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      if (4 < (byte)LogDLSSNGXVulkanRHI._0_1_) {
        GetNGXResultAsString(NVar5);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
      }
    }
    NVar7 = NVar5 & 0xfff00000;
    if ((NVar7 == NVSDK_NGX_Result_Fail) &&
       (bVar4 = NGXRHI::IsSafeToShutdownNGX((NGXRHI *)this), bVar4)) {
      NVSDK_NGX_VULKAN_Shutdown1(param_5);
    }
    else if (NVar7 != NVSDK_NGX_Result_Fail) goto LAB_14de1c016;
    NVar3 = NVar10 - 1;
  } while (0x12 < (int)(NVar10 - 1));
  if (NVar7 != NVSDK_NGX_Result_Fail) {
LAB_14de1c016:
    if ((NVar10 < 0x14) && (4 < (byte)LogDLSSNGXVulkanRHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHI);
    }
  }
  return NVar5;
}

// IsIncompatibleAPICaptureToolActive @ 14de1c0a0

bool __cdecl FNGXVulkanRHI::IsIncompatibleAPICaptureToolActive(void)

{
  return false;
}

// IsRRSupportedByRHI @ 14de1c0b0

bool __thiscall FNGXVulkanRHI::IsRRSupportedByRHI(FNGXVulkanRHI *this)

{
  return false;
}


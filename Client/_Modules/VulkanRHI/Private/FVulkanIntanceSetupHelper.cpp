// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// operator() @ 145b07940

bool __thiscall
`FVulkanIntanceSetupHelper::AddDebugLayers'::__l89::<lambda_2>::operator()(void *this,char *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = FVulkanExtensionBase::FindExtension<FVulkanInstanceExtension>
                    (*(TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
                       **)this,param_1);
  if (uVar5 == 0xffffffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtensionIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
                       ,0x1bb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)this;
  uVar6 = 0;
  if ((int)uVar5 < (int)plVar1[1]) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)(*(longlong *)(*plVar1 + (longlong)(int)uVar5 * 8) + 0x15) == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)this;
    uVar6 = 0;
    if ((int)uVar5 < (int)plVar1[1]) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar3 = true;
    *(undefined1 *)(*(longlong *)(*plVar1 + (longlong)(int)uVar5 * 8) + 0x16) = 1;
  }
  return bVar3;
}

// AddDebugLayers @ 145b09fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanIntanceSetupHelper::AddDebugLayers
          (FVulkanIntanceSetupHelper *this,
          TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<char_const_*,TSizedDefaultAllocator<32>_> *param_3)

{
  EActiveDebugLayerExtension EVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FDateTime this_00;
  ForAnyElementType FVar5;
  longlong lVar6;
  undefined1 auStack_1c8 [32];
  TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
  *local_1a8;
  FString local_1a0;
  FString local_190;
  FString local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pwVar4 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar4,L"vktrace");
  if (bVar3) {
    bVar3 = AddRequestedLayer<FVulkanInstanceExtension>
                      ("VK_LAYER_LUNARG_gfxreconstruct",param_1,param_2,param_3);
    if (bVar3) {
      this->ActiveDebugLayerExtension = GfxReconstructLayer;
    }
    else {
      bVar3 = AddRequestedLayer<FVulkanInstanceExtension>
                        ("VK_LAYER_LUNARG_vktrace",param_1,param_2,param_3);
      if (bVar3) {
        this->ActiveDebugLayerExtension = VkTraceLayer;
      }
    }
  }
  EVar1 = this->ActiveDebugLayerExtension;
  pwVar4 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar4,L"vulkanapidump");
  lVar6 = 0;
  if (!bVar3) goto LAB_145b0a1ef;
  if (EVar1 != None) {
    if (2 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    goto LAB_145b0a23a;
  }
  bVar3 = AddRequestedLayer<FVulkanInstanceExtension>
                    ("VK_LAYER_LUNARG_api_dump",param_1,param_2,param_3);
  if (bVar3) {
    this_00 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)this_00.Ticks,&local_180);
    FPaths::ProjectLogDir(&local_190);
    ::FString::PrintfImpl(&local_1a0,L"%s/vk_apidump.%s.txt");
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_1a0.Data.ArrayNum != 0) {
      FVar5.Data = local_1a0.Data.AllocatorInstance.Data;
    }
    FWindowsPlatformMisc::SetEnvironmentVar(L"VK_APIDUMP_LOG_FILENAME",(wchar_t *)FVar5.Data);
    FWindowsPlatformMisc::SetEnvironmentVar(L"VK_APIDUMP_DETAILED",L"true");
    FWindowsPlatformMisc::SetEnvironmentVar(L"VK_APIDUMP_FLUSH",L"true");
    FWindowsPlatformMisc::SetEnvironmentVar(L"VK_APIDUMP_OUTPUT_FORMAT",L"text");
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (2 < (byte)LogVulkanRHI._0_1_) {
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"VK_LAYER_LUNARG_api_dump",0x18,Yes);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
        goto LAB_145b0a1fa;
      }
    }
LAB_145b0a1ef:
    if (EVar1 != None) goto LAB_145b0a23a;
  }
LAB_145b0a1fa:
  if (((GRHIGlobals.IsDebugLayerEnabled != false) &&
      (bVar3 = AddRequestedLayer<FVulkanInstanceExtension>
                         ("VK_LAYER_KHRONOS_validation",param_1,param_2,param_3), !bVar3)) &&
     (2 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
LAB_145b0a23a:
  if (this->ActiveDebugLayerExtension == None) {
    local_1a8 = param_2;
    bVar3 = `FVulkanIntanceSetupHelper::AddDebugLayers'::__l89::<lambda_2>::operator()
                      (&local_1a8,"VK_EXT_debug_utils");
    if (bVar3) {
      this->ActiveDebugLayerExtension = DebugUtilsExtension;
    }
    pTVar2 = GGPUValidationCvar.Ref;
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      lVar6 = 4;
    }
    if (*(int *)((longlong)pTVar2->ShadowedValue + lVar6) == 0) {
      pwVar4 = FCommandLine::Get();
      bVar3 = FParse::Param(pwVar4,L"vulkanbestpractices");
      if (!bVar3) {
        pwVar4 = FCommandLine::Get();
        bVar3 = FParse::Param(pwVar4,L"vulkandebugsync");
        if (!bVar3) {
          return;
        }
      }
    }
    `FVulkanIntanceSetupHelper::AddDebugLayers'::__l89::<lambda_2>::operator()
              (&local_1a8,"VK_EXT_validation_features");
  }
  return;
}

// EnumerateLayerProperties @ 145b192b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> * __thiscall
FVulkanIntanceSetupHelper::EnumerateLayerProperties
          (FVulkanIntanceSetupHelper *this,
          TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  char *pcVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  VkResult VVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *pTVar16;
  size_t sVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  longlong lVar21;
  TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *pTVar22;
  FScriptContainerElement *pFVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined8 *puVar26;
  longlong lVar27;
  uint uVar28;
  int *piVar29;
  longlong lVar30;
  undefined1 auStackY_a98 [32];
  undefined1 local_a58 [4];
  uint local_a54;
  TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *local_a50;
  ForAnyElementType local_a48;
  int local_a40 [2];
  int *local_a38;
  TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> local_a30;
  char local_a18 [272];
  undefined8 local_908 [66];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a98;
  uVar28 = 0;
  piVar29 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar29 = 0;
  *piVar1 = 0;
  local_a48.Data = (FScriptContainerElement *)0x0;
  local_a40[0] = 0;
  local_a40[1] = 0;
  local_a54 = 0;
  local_a50 = __return_storage_ptr__;
  local_a38 = piVar29;
  VVar11 = (*VulkanDynamicAPI::vkEnumerateInstanceLayerProperties)
                     (&local_a54,(VkLayerProperties *)0x0);
  if (VVar11 == VK_ERROR_INITIALIZATION_FAILED) {
    if (1 < (byte)LogVulkanRHI._0_1_) {
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
                 ,0x52,Yes);
      local_5d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5d8,"VulkanRHI::vkEnumerateInstanceLayerProperties(&Count, nullptr)",0x3e,
                 Yes);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_>___cdecl_FVulkanIntanceSetupHelper::EnumerateLayerProperties(void)const___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_5d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5d8._padding_);
      }
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
    }
  }
  else if ((int)VVar11 < 0) {
    VulkanRHI::VerifyVulkanResult
              (VVar11,"VulkanRHI::vkEnumerateInstanceLayerProperties(&Count, nullptr)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
               ,0x50);
  }
  lVar21 = (longlong)(int)local_a54;
  pTVar15 = __return_storage_ptr__;
  if (local_a54 != 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x208,4,local_a54,&local_a48,local_a40,local_a40 + 1);
    memset(local_a48.Data + (longlong)iVar12 * 0x208,0,lVar21 * 0x208);
    VVar11 = (*VulkanDynamicAPI::vkEnumerateInstanceLayerProperties)
                       (&local_a54,(VkLayerProperties *)local_a48.Data);
    if (VVar11 == VK_ERROR_INITIALIZATION_FAILED) {
      if (1 < (byte)LogVulkanRHI._0_1_) {
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
                   ,0x52,Yes);
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,
                   "VulkanRHI::vkEnumerateInstanceLayerProperties(&Count, TempLayerProperties.GetData())"
                   ,0x54,Yes);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_>___cdecl_FVulkanIntanceSetupHelper::EnumerateLayerProperties(void)const___ptr64'
                    ::__l36::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
    else if ((int)VVar11 < 0) {
      VulkanRHI::VerifyVulkanResult
                (VVar11,
                 "VulkanRHI::vkEnumerateInstanceLayerProperties(&Count, TempLayerProperties.GetData())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
                 ,0x54);
    }
    uVar14 = local_a54;
    iVar12 = *piVar29;
    if (iVar12 < (int)local_a54) {
      iVar12 = local_a54 - iVar12;
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x218,8,iVar12,&__return_storage_ptr__->AllocatorInstance,piVar29,piVar1);
      DefaultConstructItems<FLayerWithExtensions,int>
                ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 0x218,iVar12)
      ;
    }
    else {
      if ((int)local_a54 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_a54);
      }
      if ((int)local_a54 < iVar12) {
        uVar25 = iVar12 - local_a54;
        if (((int)(local_a54 | uVar25) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        __return_storage_ptr__ = local_a50;
        if (uVar25 != 0) {
          TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (local_a50,uVar14,uVar25);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x218,8,&__return_storage_ptr__->AllocatorInstance,*piVar29,piVar1);
        }
      }
    }
    pTVar15 = local_a50;
    if (local_a54 != 0) {
      do {
        uVar25 = ~uVar28 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar28 < local_a40[0]) {
          uVar14 = uVar25;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        lVar21 = 4;
        lVar27 = (longlong)(int)uVar28 * 0x208;
        pFVar23 = local_a48.Data + lVar27;
        puVar24 = local_908;
        do {
          puVar26 = puVar24 + 0x10;
          uVar6 = *(undefined8 *)(pFVar23 + 8);
          uVar7 = *(undefined8 *)(pFVar23 + 0x10);
          uVar8 = *(undefined8 *)(pFVar23 + 0x18);
          pFVar2 = pFVar23 + 0x80;
          *puVar24 = *(undefined8 *)pFVar23;
          puVar24[1] = uVar6;
          uVar6 = *(undefined8 *)(pFVar23 + 0x20);
          uVar9 = *(undefined8 *)(pFVar23 + 0x28);
          puVar24[2] = uVar7;
          puVar24[3] = uVar8;
          uVar7 = *(undefined8 *)(pFVar23 + 0x30);
          uVar8 = *(undefined8 *)(pFVar23 + 0x38);
          puVar24[4] = uVar6;
          puVar24[5] = uVar9;
          uVar6 = *(undefined8 *)(pFVar23 + 0x40);
          uVar9 = *(undefined8 *)(pFVar23 + 0x48);
          puVar24[6] = uVar7;
          puVar24[7] = uVar8;
          uVar7 = *(undefined8 *)(pFVar23 + 0x50);
          uVar8 = *(undefined8 *)(pFVar23 + 0x58);
          puVar24[8] = uVar6;
          puVar24[9] = uVar9;
          uVar6 = *(undefined8 *)(pFVar23 + 0x60);
          uVar9 = *(undefined8 *)(pFVar23 + 0x68);
          puVar24[10] = uVar7;
          puVar24[0xb] = uVar8;
          uVar7 = *(undefined8 *)(pFVar23 + 0x70);
          uVar8 = *(undefined8 *)(pFVar23 + 0x78);
          puVar24[0xc] = uVar6;
          puVar24[0xd] = uVar9;
          puVar24[0xe] = uVar7;
          puVar24[0xf] = uVar8;
          lVar21 = lVar21 + -1;
          pFVar23 = pFVar2;
          puVar24 = puVar26;
        } while (lVar21 != 0);
        *puVar26 = *(undefined8 *)pFVar2;
        uVar14 = 0;
        if ((int)uVar28 < *piVar29) {
          uVar14 = uVar25;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        lVar30 = (longlong)(int)uVar28 * 0x218;
        lVar21 = 4;
        puVar24 = local_908;
        pFVar23 = (__return_storage_ptr__->AllocatorInstance).Data + lVar30;
        do {
          pFVar2 = pFVar23 + 0x80;
          uVar6 = puVar24[1];
          uVar7 = puVar24[2];
          uVar8 = puVar24[3];
          puVar26 = puVar24 + 0x10;
          *(undefined8 *)pFVar23 = *puVar24;
          *(undefined8 *)(pFVar23 + 8) = uVar6;
          uVar6 = puVar24[4];
          uVar9 = puVar24[5];
          *(undefined8 *)(pFVar23 + 0x10) = uVar7;
          *(undefined8 *)(pFVar23 + 0x18) = uVar8;
          uVar7 = puVar24[6];
          uVar8 = puVar24[7];
          *(undefined8 *)(pFVar23 + 0x20) = uVar6;
          *(undefined8 *)(pFVar23 + 0x28) = uVar9;
          uVar6 = puVar24[8];
          uVar9 = puVar24[9];
          *(undefined8 *)(pFVar23 + 0x30) = uVar7;
          *(undefined8 *)(pFVar23 + 0x38) = uVar8;
          uVar7 = puVar24[10];
          uVar8 = puVar24[0xb];
          *(undefined8 *)(pFVar23 + 0x40) = uVar6;
          *(undefined8 *)(pFVar23 + 0x48) = uVar9;
          uVar6 = puVar24[0xc];
          uVar9 = puVar24[0xd];
          *(undefined8 *)(pFVar23 + 0x50) = uVar7;
          *(undefined8 *)(pFVar23 + 0x58) = uVar8;
          uVar7 = puVar24[0xe];
          uVar8 = puVar24[0xf];
          *(undefined8 *)(pFVar23 + 0x60) = uVar6;
          *(undefined8 *)(pFVar23 + 0x68) = uVar9;
          *(undefined8 *)(pFVar23 + 0x70) = uVar7;
          *(undefined8 *)(pFVar23 + 0x78) = uVar8;
          lVar21 = lVar21 + -1;
          puVar24 = puVar26;
          pFVar23 = pFVar2;
        } while (lVar21 != 0);
        *(undefined8 *)pFVar2 = *puVar26;
        uVar14 = 0;
        if ((int)uVar28 < local_a40[0]) {
          uVar14 = uVar25;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        pTVar16 = FVulkanInstanceExtension::GetDriverSupportedInstanceExtensions
                            (&local_a30,(char *)(local_a48.Data + lVar27));
        uVar14 = 0;
        if ((int)uVar28 < *local_a38) {
          uVar14 = uVar25;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        pTVar22 = (TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *)
                  ((local_a50->AllocatorInstance).Data + lVar30 + 0x208);
        if (pTVar22 != pTVar16) {
          pFVar23 = (pTVar22->AllocatorInstance).Data;
          if (pFVar23 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar23);
          }
          (pTVar22->AllocatorInstance).Data = (pTVar16->AllocatorInstance).Data;
          (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar22->ArrayNum = pTVar16->ArrayNum;
          pTVar22->ArrayMax = pTVar16->ArrayMax;
          pTVar16->ArrayNum = 0;
          pTVar16->ArrayMax = 0;
        }
        if (local_a30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a30.AllocatorInstance.Data);
        }
        if (3 < (byte)LogVulkanRHI._0_1_) {
          uVar14 = 0;
          if ((int)uVar28 < *local_a38) {
            uVar14 = uVar25;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar15;
          }
          uVar14 = 0;
          if ((int)uVar28 < local_a40[0]) {
            uVar14 = uVar25;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar15;
          }
          local_6f8._padding_ = 0;
          pFVar23 = local_a48.Data + lVar27;
          if (pFVar23 == (FScriptContainerElement *)0x0) {
            local_6f8.Ptr = (wchar_t *)0x0;
            local_6f8.StringLength = 0;
          }
          else {
            sVar17 = strlen((char *)pFVar23);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_6f8,(char *)pFVar23,(int)sVar17,Yes);
          }
          UE::Logging::Private::BasicLog<4>
                    (&`public:_class_TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_>___cdecl_FVulkanIntanceSetupHelper::EnumerateLayerProperties(void)const___ptr64'
                      ::__l60::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          if ((void *)local_6f8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_6f8._padding_);
          }
        }
        uVar14 = 0;
        if ((int)uVar28 < *local_a38) {
          uVar14 = uVar25;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        __return_storage_ptr__ = local_a50;
        pFVar23 = (local_a50->AllocatorInstance).Data;
        iVar12 = *(int *)(pFVar23 + lVar30 + 0x210);
        puVar24 = *(undefined8 **)(pFVar23 + lVar30 + 0x208);
        puVar26 = (undefined8 *)((longlong)iVar12 * 0x104 + (longlong)puVar24);
        while( true ) {
          if (*(int *)(pFVar23 + lVar30 + 0x210) != iVar12) {
            local_a58[0] = 0;
            `TCheckedPointerIterator<VkExtensionProperties,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_a58);
          }
          if (puVar24 == puVar26) break;
          puVar20 = &DAT_00000002;
          pcVar18 = local_a18;
          puVar19 = puVar24;
          do {
            pcVar3 = pcVar18 + 0x80;
            uVar6 = puVar19[1];
            uVar7 = puVar19[2];
            uVar8 = puVar19[3];
            puVar4 = puVar19 + 0x10;
            *(undefined8 *)pcVar18 = *puVar19;
            *(undefined8 *)(pcVar18 + 8) = uVar6;
            uVar6 = puVar19[4];
            uVar9 = puVar19[5];
            *(undefined8 *)(pcVar18 + 0x10) = uVar7;
            *(undefined8 *)(pcVar18 + 0x18) = uVar8;
            uVar7 = puVar19[6];
            uVar8 = puVar19[7];
            *(undefined8 *)(pcVar18 + 0x20) = uVar6;
            *(undefined8 *)(pcVar18 + 0x28) = uVar9;
            uVar6 = puVar19[8];
            uVar9 = puVar19[9];
            *(undefined8 *)(pcVar18 + 0x30) = uVar7;
            *(undefined8 *)(pcVar18 + 0x38) = uVar8;
            uVar7 = puVar19[10];
            uVar8 = puVar19[0xb];
            *(undefined8 *)(pcVar18 + 0x40) = uVar6;
            *(undefined8 *)(pcVar18 + 0x48) = uVar9;
            uVar6 = puVar19[0xc];
            uVar9 = puVar19[0xd];
            *(undefined8 *)(pcVar18 + 0x50) = uVar7;
            *(undefined8 *)(pcVar18 + 0x58) = uVar8;
            uVar7 = puVar19[0xe];
            uVar8 = puVar19[0xf];
            *(undefined8 *)(pcVar18 + 0x60) = uVar6;
            *(undefined8 *)(pcVar18 + 0x68) = uVar9;
            *(undefined8 *)(pcVar18 + 0x70) = uVar7;
            *(undefined8 *)(pcVar18 + 0x78) = uVar8;
            puVar20 = puVar20 + -1;
            pcVar18 = pcVar3;
            puVar19 = puVar4;
          } while (puVar20 != (undefined1 *)0x0);
          *(undefined4 *)pcVar3 = *(undefined4 *)puVar4;
          if (3 < (byte)LogVulkanRHI._0_1_) {
            local_158._padding_ = (longlong)puVar20;
            sVar17 = strlen(local_a18);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,local_a18,(int)sVar17,Yes);
            UE::Logging::Private::BasicLog<4>
                      (&`public:_class_TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_>___cdecl_FVulkanIntanceSetupHelper::EnumerateLayerProperties(void)const___ptr64'
                        ::__l82::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
            if ((undefined1 *)local_158._padding_ != (undefined1 *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
          puVar24 = (undefined8 *)((longlong)puVar24 + 0x104);
        }
        uVar28 = uVar28 + 1;
        piVar29 = &__return_storage_ptr__->ArrayNum;
        pTVar15 = __return_storage_ptr__;
      } while (uVar28 < local_a54);
    }
  }
  if ((VkLayerProperties *)local_a48.Data != (VkLayerProperties *)0x0) {
    FMemory::Free(local_a48.Data);
  }
  return pTVar15;
}


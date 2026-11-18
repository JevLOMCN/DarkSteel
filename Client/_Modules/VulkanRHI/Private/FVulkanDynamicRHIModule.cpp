// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// StartupModule @ 145b85180

void __thiscall FVulkanDynamicRHIModule::StartupModule(FVulkanDynamicRHIModule *this)

{
  FLowLevelMemTracker *this_00;
  FName *pFVar1;
  int iVar2;
  
  iVar2 = 0x6f;
  pFVar1 = &ELLMTagNamesVulkan[0].StatName;
  do {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::RegisterPlatformTag
              (this_00,iVar2,(wchar_t *)pFVar1[-1],*pFVar1,pFVar1[1],-1);
    iVar2 = iVar2 + 1;
    pFVar1 = pFVar1 + 3;
  } while ((longlong)pFVar1 < 0x155169a70);
  return;
}

// IsSupported @ 145b85190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

bool __thiscall FVulkanDynamicRHIModule::IsSupported(FVulkanDynamicRHIModule *this)

{
  size_t sVar1;
  ForAnyElementType FVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  if (FVulkanWindowsPlatform::bAttemptedLoad) {
    return GVulkanDLLModule != (HINSTANCE__ *)0x0;
  }
  FVulkanWindowsPlatform::bAttemptedLoad = true;
  FWindowsPlatformMisc::GetEnvironmentVariable(&FStack_18,L"VULKAN_SDK");
  if (2 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  pwVar3 = L"VK_LAYER_PATH";
  if (1 < FStack_18.Data.ArrayNum) {
    pwVar3 = L"VK_ADD_LAYER_PATH";
  }
  ::FString::FString(&FStack_38,pwVar3);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (FStack_38.Data.ArrayNum != 0) {
    FVar4.Data = FStack_38.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformMisc::GetEnvironmentVariable(&FStack_48,(wchar_t *)FVar4.Data);
  FPaths::EngineDir(&FStack_28);
  ::FString::AppendChars(&FStack_28,L"Binaries/ThirdParty/Vulkan/",0x1b);
  ::FString::AppendChars(&FStack_28,L"Win64",5);
  if (1 < FStack_48.Data.ArrayNum) {
    ::FString::AppendChars(&FStack_48,L";",1);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (FStack_28.Data.ArrayNum != 0) {
    FVar4.Data = FStack_28.Data.AllocatorInstance.Data;
  }
  sVar1 = wcslen((wchar_t *)FVar4.Data);
  ::FString::AppendChars(&FStack_48,(wchar_t *)FVar4.Data,(int)sVar1);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (FStack_48.Data.ArrayNum != 0) {
    FVar4.Data = FStack_48.Data.AllocatorInstance.Data;
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (FStack_38.Data.ArrayNum != 0) {
    FVar2.Data = FStack_38.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformMisc::SetEnvironmentVar((wchar_t *)FVar2.Data,(wchar_t *)FVar4.Data);
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  GVulkanDLLModule = (HINSTANCE__ *)LoadLibraryW(L"vulkan-1.dll");
  if (GVulkanDLLModule != (HINSTANCE__ *)0x0) {
    VulkanDynamicAPI::vkCreateInstance =
         FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkCreateInstance");
    VulkanDynamicAPI::vkGetInstanceProcAddr =
         FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkGetInstanceProcAddr");
    VulkanDynamicAPI::vkGetDeviceProcAddr =
         FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkGetDeviceProcAddr");
    VulkanDynamicAPI::vkEnumerateInstanceExtensionProperties =
         FWindowsPlatformProcess::GetDllExport
                   (GVulkanDLLModule,L"vkEnumerateInstanceExtensionProperties");
    VulkanDynamicAPI::vkEnumerateInstanceLayerProperties =
         FWindowsPlatformProcess::GetDllExport
                   (GVulkanDLLModule,L"vkEnumerateInstanceLayerProperties");
    bVar5 = true;
    if ((VulkanDynamicAPI::vkCreateInstance ==
         (_func___cdecl_VkResult_VkInstanceCreateInfo_ptr_VkAllocationCallbacks_ptr_VkInstance_T_ptr_ptr
          *)0x0) && (bVar5 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetInstanceProcAddr ==
         (_func___cdecl__func___cdecl_void_ptr_VkInstance_T_ptr_char_ptr *)0x0) &&
       (bVar5 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkGetDeviceProcAddr ==
         (_func___cdecl__func___cdecl_void_ptr_VkDevice_T_ptr_char_ptr *)0x0) &&
       (bVar5 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((VulkanDynamicAPI::vkEnumerateInstanceExtensionProperties ==
         (_func___cdecl_VkResult_char_ptr_uint_ptr_VkExtensionProperties_ptr *)0x0) &&
       (bVar5 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510dce00,
                 (FLogCategoryBase *)&LogRHI);
    }
    if (VulkanDynamicAPI::vkEnumerateInstanceLayerProperties ==
        (_func___cdecl_VkResult_uint_ptr_VkLayerProperties_ptr *)0x0) {
      if (2 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    else if (bVar5) {
      VulkanDynamicAPI::vkEnumerateInstanceVersion =
           FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkEnumerateInstanceVersion");
      VulkanDynamicAPI::vkGetPhysicalDeviceDisplayPropertiesKHR =
           FWindowsPlatformProcess::GetDllExport
                     (GVulkanDLLModule,L"vkGetPhysicalDeviceDisplayPropertiesKHR");
      VulkanDynamicAPI::vkGetPhysicalDeviceDisplayPlanePropertiesKHR =
           FWindowsPlatformProcess::GetDllExport
                     (GVulkanDLLModule,L"vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
      VulkanDynamicAPI::vkGetDisplayPlaneSupportedDisplaysKHR =
           FWindowsPlatformProcess::GetDllExport
                     (GVulkanDLLModule,L"vkGetDisplayPlaneSupportedDisplaysKHR");
      VulkanDynamicAPI::vkGetDisplayModePropertiesKHR =
           FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkGetDisplayModePropertiesKHR");
      VulkanDynamicAPI::vkCreateDisplayModeKHR =
           FWindowsPlatformProcess::GetDllExport(GVulkanDLLModule,L"vkCreateDisplayModeKHR");
      VulkanDynamicAPI::vkGetDisplayPlaneCapabilitiesKHR =
           FWindowsPlatformProcess::GetDllExport
                     (GVulkanDLLModule,L"vkGetDisplayPlaneCapabilitiesKHR");
      bVar5 = true;
      goto LAB_145bd3535;
    }
    if (GVulkanDLLModule != (HINSTANCE__ *)0x0) {
      FreeLibrary((HMODULE)GVulkanDLLModule);
      GVulkanDLLModule = (HINSTANCE__ *)0x0;
    }
    FVulkanWindowsPlatform::bAttemptedLoad = false;
  }
  bVar5 = false;
LAB_145bd3535:
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// IsSupported @ 145b851a0

bool __thiscall FVulkanDynamicRHIModule::IsSupported(FVulkanDynamicRHIModule *this,Type param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)((longlong)*this + 0x48))();
  if (cVar1 == '\0') {
    return false;
  }
  if (param_1 != ES3_1) {
    bVar2 = FVulkanGenericPlatform::SupportsProfileChecks();
    if (bVar2) {
      bVar2 = CheckVulkanProfile(param_1,false);
      return bVar2;
    }
  }
  return true;
}

// CreateRHI @ 145b851f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FDynamicRHI * __thiscall
FVulkanDynamicRHIModule::CreateRHI(FVulkanDynamicRHIModule *this,Type param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  FDynamicRHI *pFVar4;
  FString *pFVar5;
  FVulkanDynamicRHI *pFVar6;
  wchar_t *pwVar7;
  FValidationRHI *this_00;
  EShaderPlatform *pEVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  FScriptContainerElement *local_a8;
  EShaderPlatform *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  TArrayView<EShaderPlatform,int> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  EShaderPlatform local_48 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  GMaxRHIFeatureLevel = FVulkanGenericPlatform::GetFeatureLevel(param_1);
  if ((GMaxRHIFeatureLevel == Num) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GMaxRHIFeatureLevel != ERHIFeatureLevel::Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                         ,0x184,L"Invalid feature level requested!"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDynamicRHI *)(*pcVar2)();
    return pFVar4;
  }
  local_98 = local_48;
  lVar9 = 5;
  uStack_90 = 5;
  local_88._12_4_ = uStack_8c;
  local_88.ArrayNum = 5;
  local_88.DataPtr = local_98;
  FVulkanGenericPlatform::SetupFeatureLevels(&local_88);
  GMaxRHIShaderPlatform = local_48[(int)GMaxRHIFeatureLevel];
  if (GMaxRHIShaderPlatform == SP_NumPlatforms) {
    pFVar5 = ::LexToString(&local_78,param_1);
    if ((pFVar5->Data).ArrayNum == 0) {
      local_a8 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_a8 = (pFVar5->Data).AllocatorInstance.Data;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GMaxRHIShaderPlatform != SP_NumPlatforms",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                       ,0x189,L"Requested feature level [%s] mapped to unsupported shader platform!"
                      );
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDynamicRHI *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    ::LexToString(&local_58,GMaxRHIShaderPlatform,false);
    ::LexToString(&local_68,param_1);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::operator_new(0x200);
  if (pFVar6 == (FVulkanDynamicRHI *)0x0) {
    pFVar6 = (FVulkanDynamicRHI *)0x0;
  }
  else {
    pFVar6 = FVulkanDynamicRHI::FVulkanDynamicRHI(pFVar6);
  }
  GVulkanRHI = pFVar6;
  pwVar7 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar7,L"RHIValidation");
  if (bVar3) {
    this_00 = ::operator_new(0x90);
    if (this_00 == (FValidationRHI *)0x0) {
      pFVar6 = (FVulkanDynamicRHI *)0x0;
    }
    else {
      pFVar6 = (FVulkanDynamicRHI *)FValidationRHI::FValidationRHI(this_00,(FDynamicRHI *)pFVar6);
    }
  }
  pEVar8 = local_48;
  do {
    EVar1 = *pEVar8;
    if (EVar1 != SP_NumPlatforms) {
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Platform)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                             ,0x33b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDynamicRHI *)(*pcVar2)();
        return pFVar4;
      }
      if ((GRHIGlobals.MaxTextureSamplers <
           (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxSamplers) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("GRHIGlobals.MaxTextureSamplers >= (int32)FDataDrivenShaderPlatformInfo::GetMaxSamplers(ShaderPlatformForFeatureLevel[Index])"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                             ,0x19b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDynamicRHI *)(*pcVar2)();
        return pFVar4;
      }
      EVar1 = *pEVar8;
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Platform)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                             ,0x33b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FDynamicRHI *)(*pcVar2)();
        return pFVar4;
      }
      if ((GRHIGlobals.MaxTextureSamplers <
           (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxSamplers) &&
         (1 < (byte)LogVulkanRHI._0_1_)) {
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[*pEVar8].bContainsValidPlatformInfo == 0)
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid(Platform)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                  ,0x33b,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FDynamicRHI *)(*pcVar2)();
          return pFVar4;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
    }
    pEVar8 = pEVar8 + 1;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      return (FDynamicRHI *)pFVar6;
    }
  } while( true );
}


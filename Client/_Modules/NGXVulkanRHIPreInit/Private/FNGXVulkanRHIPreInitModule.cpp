// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXVulkanRHIPreInit
// Functions: 2

// StartupModule @ 14de38de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNGXVulkanRHIPreInitModule::StartupModule(FNGXVulkanRHIPreInitModule *this)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  NVSDK_NGX_Result NVar5;
  wchar_t *pwVar6;
  FString *pFVar7;
  FString *pFVar8;
  FName *pFVar9;
  IModuleInterface *pIVar10;
  FStaticBasicLogRecord *pFVar11;
  bool bVar12;
  undefined1 auStack_338 [32];
  uint local_318;
  uint local_314;
  char **local_310;
  char **local_308 [2];
  char **local_2f8;
  uint uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  FName local_2c8;
  FString local_2c0;
  FString local_2b0;
  TArrayView<char_const_*_const,int> local_298;
  TArrayView<char_const_*_const,int> local_288;
  TArrayView<char_const_*_const,int> local_278;
  TArrayView<char_const_*_const,int> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_338;
  if (4 < (byte)LogDLSSNGXVulkanRHIPreInit._0_1_) {
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"FNGXVulkanRHIPreInitModule::StartupModule",0x29,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHIPreInit)
    ;
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar6 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar6,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    pwVar6 = GetSelectedDynamicRHIModuleName(false);
    if (4 < (byte)LogDLSSNGXVulkanRHIPreInit._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHIPreInit);
    }
    pFVar7 = ::FString::FString(&local_2b0,pwVar6);
    pFVar8 = ::FString::FString(&local_2c0,L"VulkanRHI");
    iVar4 = (pFVar7->Data).ArrayNum;
    iVar1 = (pFVar8->Data).ArrayNum;
    if (iVar1 == iVar4) {
      if (iVar1 < 2) {
        bVar12 = true;
      }
      else {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
        bVar12 = iVar4 == 0;
      }
    }
    else {
      bVar12 = iVar4 + iVar1 == 1;
    }
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pFVar9 = ::FName::FName(&local_2c8,L"VulkanRHI");
      pIVar10 = FModuleManager::GetModulePtr_Internal(*pFVar9);
      if (pIVar10 != (IModuleInterface *)0x0) {
        cVar3 = (**(code **)((longlong)*pIVar10 + 0x48))(pIVar10);
        if (cVar3 != '\0') {
          local_318 = 0;
          local_310 = (char **)0x0;
          local_314 = 0;
          local_308[0] = (char **)0x0;
          NVar5 = NVSDK_NGX_VULKAN_RequiredExtensions(&local_318,&local_310,&local_314,local_308);
          if (4 < (byte)LogDLSSNGXVulkanRHIPreInit._0_1_) {
            GetNGXResultAsString(NVar5);
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHIPreInit);
          }
          local_2f8 = local_310;
          uStack_2f0 = local_318;
          if ((int)local_318 < 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L"");
            if (bVar12) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          local_288._12_4_ = uStack_2ec;
          local_288.ArrayNum = uStack_2f0;
          local_2e8 = 0;
          uStack_2e0 = 0;
          local_298._8_8_ = (ulonglong)uStack_2dc << 0x20;
          local_298.DataPtr = (char **)0x0;
          local_288.DataPtr = local_2f8;
          IVulkanDynamicRHI::AddEnabledInstanceExtensionsAndLayers(&local_288,&local_298);
          local_2f8 = local_308[0];
          uStack_2f0 = local_314;
          if ((int)local_314 < 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L"");
            if (bVar12) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          local_268._12_4_ = uStack_2ec;
          local_268.ArrayNum = uStack_2f0;
          local_2d8 = 0;
          uStack_2d0 = 0;
          local_278._8_8_ = (ulonglong)uStack_2cc << 0x20;
          local_278.DataPtr = (char **)0x0;
          local_268.DataPtr = local_2f8;
          IVulkanDynamicRHI::AddEnabledDeviceExtensionsAndLayers(&local_268,&local_278);
          if (4 < (byte)LogDLSSNGXVulkanRHIPreInit._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHIPreInit);
          }
          goto LAB_14de3910d;
        }
      }
      if ((byte)LogDLSSNGXVulkanRHIPreInit._0_1_ < 5) goto LAB_14de3910d;
      pFVar11 = &::LOG_Static;
    }
    else {
      if ((byte)LogDLSSNGXVulkanRHIPreInit._0_1_ < 5) goto LAB_14de3910d;
      pFVar11 = &::LOG_Static;
    }
  }
  else {
    if ((byte)LogDLSSNGXVulkanRHIPreInit._0_1_ < 5) goto LAB_14de3910d;
    pFVar11 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<5>(pFVar11,(FLogCategoryBase *)&LogDLSSNGXVulkanRHIPreInit);
LAB_14de3910d:
  if (4 < (byte)LogDLSSNGXVulkanRHIPreInit._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXVulkanRHIPreInitModule::StartupModule",0x29,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHIPreInit)
    ;
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// ShutdownModule @ 14de391e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNGXVulkanRHIPreInitModule::ShutdownModule(FNGXVulkanRHIPreInitModule *this)

{
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (4 < (byte)LogDLSSNGXVulkanRHIPreInit._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXVulkanRHIPreInitModule::ShutdownModule",0x2a,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHIPreInit)
    ;
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (4 < (byte)LogDLSSNGXVulkanRHIPreInit._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FNGXVulkanRHIPreInitModule::ShutdownModule",0x2a,Yes);
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXVulkanRHIPreInit);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}


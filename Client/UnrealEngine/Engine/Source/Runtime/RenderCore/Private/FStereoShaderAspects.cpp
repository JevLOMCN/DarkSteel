// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FStereoShaderAspects @ 145e82f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FStereoShaderAspects * __thiscall
UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects
          (FStereoShaderAspects *this,EShaderPlatform param_1)

{
  FStereoShaderAspects FVar1;
  Type TVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FStereoShaderAspects *pFVar8;
  wchar_t *pwVar9;
  undefined1 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  int *piVar13;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  this->bInstancedStereoEnabled = false;
  this->bMobileMultiViewFallback = false;
  this->bMobileMultiViewNative = false;
  this->bInstancedStereoNative = false;
  this->bInstancedMultiViewportEnabled = false;
  this->bMobileMultiViewEnabled = false;
  if ((SP_CUSTOM_PLATFORM_LAST < param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Platform < EShaderPlatform::SP_NumPlatforms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\StereoRenderUtils.cpp"
                         ,0x37,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FStereoShaderAspects *)(*pcVar3)();
    return pFVar8;
  }
  bVar4 = false;
  uVar12 = (ulonglong)_tls_index;
  if ((LastLogged[0] != param_1) && (LastLogged[1] != param_1)) {
    LastLogged[1] = LastLogged[0];
    LastLogged[0] = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar9 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar9,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      bVar4 = true;
    }
  }
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c);
  if ((*piVar13 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&CVarInstancedStereo.CVarName,L"vr.InstancedStereo");
    CVarInstancedStereo.CVar = (IConsoleVariable *)0x0;
    atexit(`UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects'::__l2::
           _dynamic_atexit_destructor_for__CVarInstancedStereo__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar13 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&CVarMobileMultiView.CVarName,L"vr.MobileMultiView");
    CVarMobileMultiView.CVar = (IConsoleVariable *)0x0;
    atexit(`UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects'::__l2::
           _dynamic_atexit_destructor_for__CVarMobileMultiView__);
    _Init_thread_footer(&::_TSS1);
  }
  bVar5 = FShaderPlatformCachedIniValue<bool>::Get(&CVarInstancedStereo,param_1);
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FStereoShaderAspects *)(*pcVar3)();
    return pFVar8;
  }
  TVar2 = FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel;
  bVar6 = FShaderPlatformCachedIniValue<bool>::Get(&CVarMobileMultiView,param_1);
  if (GRHIGlobals.SupportsArrayIndexFromAnyShader == false) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar9 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar9,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
        false)) goto LAB_145e8320c;
LAB_145e8325d:
    bVar7 = false;
  }
  else {
LAB_145e8320c:
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x13c,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FStereoShaderAspects *)(*pcVar3)();
      return pFVar8;
    }
    bVar7 = true;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].SupportsMultiViewport == 0)
    goto LAB_145e8325d;
  }
  if (((TVar2 == ES3_1) || (!bVar5)) ||
     (bVar5 = RHISupportsInstancedStereo((FStaticShaderPlatform)param_1), !bVar5)) {
    bVar11 = 0;
  }
  else {
    bVar11 = 8;
  }
  this->bInstancedStereoNative = false;
  *this = (FStereoShaderAspects)((byte)*this | bVar11);
  if (bVar4) {
    if (4 < (byte)LogInit._0_1_) {
      ::FString::PrintfImpl(&local_1b8,L"--- StereoAspects begin ---");
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogInit._0_1_) {
        ::LexToString(&local_78,param_1,true);
        ::FString::PrintfImpl(&local_1a8,L"Platform=%s (%d)");
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogInit._0_1_) {
          ::FString::PrintfImpl(&local_198,L"bInstancedStereo = %d");
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          if (4 < (byte)LogInit._0_1_) {
            ::FString::PrintfImpl(&local_188,L"bMobilePlatform = %d");
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (4 < (byte)LogInit._0_1_) {
              ::FString::PrintfImpl(&local_178,L"bMobilePostprocessing = %d");
              Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              if (4 < (byte)LogInit._0_1_) {
                ::FString::PrintfImpl(&local_168,L"bMobileMultiView = %d");
                Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)&PTR_u_FStereoShaderAs_15116f520,
                           (FLogCategoryBase *)&LogInit);
                if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_168.Data.AllocatorInstance.Data);
                }
              }
            }
          }
        }
      }
    }
    if (4 < (byte)LogInit._0_1_) {
      ::FString::PrintfImpl(&local_158,L"bMultiViewportCapable = %d");
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogInit._0_1_) {
        ::FString::PrintfImpl(&local_148,L"bInstancedStereoNative = %d");
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogInit._0_1_) {
          ::FString::PrintfImpl(&local_138,L"---");
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  if ((TVar2 != ES3_1) || (!bVar6)) goto LAB_145e83830;
  if ((bVar4) && (4 < (byte)LogInit._0_1_)) {
    RHISupportsMobileMultiView((FStaticShaderPlatform)param_1);
    ::LexToString(&local_68,param_1,true);
    ::FString::PrintfImpl(&local_128,L"RHISupportsMobileMultiView(%s) = %d.");
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogInit._0_1_) {
      RHISupportsInstancedStereo((FStaticShaderPlatform)param_1);
      ::LexToString(&local_58,param_1,true);
      ::FString::PrintfImpl(&local_118,L"RHISupportsInstancedStereo(%s) = %d.");
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar5 = RHISupportsMobileMultiView((FStaticShaderPlatform)param_1);
  if (bVar5) {
    this->bMobileMultiViewNative = true;
    goto LAB_145e83830;
  }
  bVar5 = RHISupportsInstancedStereo((FStaticShaderPlatform)param_1);
  if (!bVar5) goto LAB_145e83830;
  if (GRHIGlobals.SupportsArrayIndexFromAnyShader == false) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar9 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar9,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
        false)) goto LAB_145e8378c;
LAB_145e837d6:
    bVar5 = false;
  }
  else {
LAB_145e8378c:
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x2e6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FStereoShaderAspects *)(*pcVar3)();
      return pFVar8;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsVertexShaderLayer == 0)
    goto LAB_145e837d6;
    bVar5 = true;
  }
  if ((bVar4) && (4 < (byte)LogInit._0_1_)) {
    ::FString::PrintfImpl(&local_108,L"bVertexShaderLayerCapable = %d");
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if (bVar5) {
    this->bMobileMultiViewFallback = true;
  }
LAB_145e83830:
  if ((bVar4) && (4 < (byte)LogInit._0_1_)) {
    ::FString::PrintfImpl(&local_f8,L"bMobileMultiViewCoreSupport = %d");
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogInit._0_1_) {
      ::FString::PrintfImpl(&local_e8,L"bMobileMultiViewNative = %d");
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogInit._0_1_) {
        ::FString::PrintfImpl(&local_d8,L"bMobileMultiViewFallback = %d");
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogInit._0_1_) {
          ::FString::PrintfImpl(&local_c8,L"---");
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  FVar1 = *this;
  if ((this->bInstancedStereoNative) && (bVar7)) {
    bVar11 = 4;
  }
  else {
    bVar11 = 0;
  }
  bVar11 = (byte)FVar1 & 0xfb | bVar11;
  bVar11 = (this->bInstancedStereoNative ^ bVar11) & 1 ^ bVar11;
  *this = (FStereoShaderAspects)((bVar11 ^ (byte)FVar1 >> 3) & 2 ^ bVar11);
  if ((bVar4) && (4 < (byte)LogInit._0_1_)) {
    ::FString::PrintfImpl(&local_b8,L"bInstancedMultiViewportEnabled = %d");
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogInit._0_1_) {
      ::FString::PrintfImpl(&local_a8,L"bInstancedStereoEnabled = %d");
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogInit._0_1_) {
        ::FString::PrintfImpl(&local_98,L"bMobileMultiViewEnabled = %d");
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogInit._0_1_) {
          ::FString::PrintfImpl(&local_88,L"--- StereoAspects end ---");
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  if ((this->bInstancedStereoEnabled == true && this->bMobileMultiViewNative == true) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bMobileMultiViewNative || !bInstancedStereoEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\StereoRenderUtils.cpp"
                         ,0x86,L"When a platform supports MMV natively, ISR should not be enabled.")
     , bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FStereoShaderAspects *)(*pcVar3)();
    return pFVar8;
  }
  if ((this->bInstancedStereoEnabled == true && !this->bInstancedMultiViewportEnabled) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bInstancedStereoEnabled || bInstancedMultiViewportEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\StereoRenderUtils.cpp"
                         ,0x8c,
                         L"If ISR is enabled, we need either multi-viewport (since we no longer support clip-distance method)."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FStereoShaderAspects *)(*pcVar3)();
    return pFVar8;
  }
  return this;
}

// FStereoShaderAspects @ 145e83b80

FStereoShaderAspects * __thiscall
UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects(FStereoShaderAspects *this)

{
  this->bInstancedStereoEnabled = false;
  this->bMobileMultiViewFallback = false;
  this->bMobileMultiViewNative = false;
  this->bInstancedStereoNative = false;
  this->bInstancedMultiViewportEnabled = false;
  this->bMobileMultiViewEnabled = false;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// Initialize @ 145dbe7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FReadOnlyCVARCache::Initialize(void)

{
  code *pcVar1;
  EShaderPlatform EVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  IConsoleManager *pIVar15;
  TConsoleVariableData<int> *pTVar16;
  TConsoleVariableData<int> *pTVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int *piVar20;
  TConsoleVariableData<int> *pTVar21;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_58;
  
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.SupportStationarySkylight",1);
  lVar13 = 0;
  lVar7 = lVar13;
  if (plVar6 != (longlong *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.SupportLowQualityLightmaps",1);
  if (plVar6 == (longlong *)0x0) {
    local_res8 = 0;
  }
  else {
    local_res8 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.SupportPointLightWholeSceneShadows",1);
  lVar8 = lVar13;
  if (plVar6 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.SupportAllShaderPermutations",1);
  lVar9 = lVar13;
  if (plVar6 != (longlong *)0x0) {
    lVar9 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.VertexFoggingForOpaque",1);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.AllowStaticLighting",1);
  if (plVar6 == (longlong *)0x0) {
    local_res10 = 0;
  }
  else {
    local_res10 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.SupportSkyAtmosphere",1);
  lVar10 = lVar13;
  if (plVar6 != (longlong *)0x0) {
    lVar10 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.MobileHDR",1);
  if (plVar6 == (longlong *)0x0) {
    local_res18 = 0;
  }
  else {
    local_res18 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Mobile.EnableStaticAndCSMShadowReceivers",1);
  lVar11 = lVar13;
  if (plVar6 != (longlong *)0x0) {
    lVar11 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Mobile.EnableMovableLightCSMShaderCulling",1);
  lVar12 = lVar13;
  if (plVar6 != (longlong *)0x0) {
    lVar12 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Mobile.AllowDistanceFieldShadows",1);
  if (plVar6 != (longlong *)0x0) {
    lVar13 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Mobile.SupportGPUScene",1);
  if (plVar6 == (longlong *)0x0) {
    local_res20 = 0;
  }
  else {
    local_res20 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Mobile.Forward.DecalLighting",1);
  if (plVar6 == (longlong *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if (lVar9 == 0) {
LAB_145dbee1e:
    bVar4 = false;
  }
  else {
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar14 = 0;
    }
    else {
      lVar14 = 4;
    }
    if (*(int *)(lVar14 + lVar9) == 0) goto LAB_145dbee1e;
    bVar4 = true;
  }
  if (lVar7 == 0) {
LAB_145dbee4f:
    bEnableStationarySkylight = true;
  }
  else {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar9 = 0;
    }
    else {
      lVar9 = 4;
    }
    if ((*(int *)(lVar9 + lVar7) != 0) || (bVar4)) goto LAB_145dbee4f;
    bEnableStationarySkylight = false;
  }
  if (lVar8 == 0) {
LAB_145dbee85:
    bEnablePointLightShadows = true;
  }
  else {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    if ((*(int *)(lVar7 + lVar8) != 0) || (bVar4)) goto LAB_145dbee85;
    bEnablePointLightShadows = false;
  }
  if (local_res8 == 0) {
LAB_145dbeec3:
    bEnableLowQualityLightmaps = true;
  }
  else {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    if ((*(int *)(lVar7 + local_res8) != 0) || (bVar4)) goto LAB_145dbeec3;
    bEnableLowQualityLightmaps = false;
  }
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  pTVar21 = (TConsoleVariableData<int> *)0x0;
  bAllowStaticLighting = *(int *)(lVar7 + local_res10) != 0;
  if (lVar10 == 0) {
LAB_145dbef2a:
    bSupportSkyAtmosphere = true;
  }
  else {
    bVar5 = IsInParallelGameThread();
    if (bVar5) {
LAB_145dbef18:
      pTVar16 = pTVar21;
    }
    else {
      bVar5 = IsInGameThread();
      pTVar16 = (TConsoleVariableData<int> *)&DAT_00000004;
      if (bVar5) goto LAB_145dbef18;
    }
    if ((*(int *)((longlong)pTVar16->ShadowedValue + lVar10) != 0) || (bVar4)) goto LAB_145dbef2a;
    bSupportSkyAtmosphere = false;
  }
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_145dbef47:
    pTVar16 = pTVar21;
  }
  else {
    bVar4 = IsInGameThread();
    pTVar16 = (TConsoleVariableData<int> *)&DAT_00000004;
    if (bVar4) goto LAB_145dbef47;
  }
  bMobileHDR = *(int *)((longlong)pTVar16->ShadowedValue + local_res18) == 1;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_145dbef72:
    pTVar16 = pTVar21;
  }
  else {
    bVar4 = IsInGameThread();
    pTVar16 = (TConsoleVariableData<int> *)&DAT_00000004;
    if (bVar4) goto LAB_145dbef72;
  }
  bMobileAllowDistanceFieldShadows = *(int *)((longlong)pTVar16->ShadowedValue + lVar13) != 0;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_145dbef95:
    pTVar16 = pTVar21;
  }
  else {
    bVar4 = IsInGameThread();
    pTVar16 = (TConsoleVariableData<int> *)&DAT_00000004;
    if (bVar4) goto LAB_145dbef95;
  }
  bMobileEnableStaticAndCSMShadowReceivers =
       *(int *)((longlong)pTVar16->ShadowedValue + lVar11) != 0;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_145dbefb9:
    pTVar16 = pTVar21;
  }
  else {
    bVar4 = IsInGameThread();
    pTVar16 = (TConsoleVariableData<int> *)&DAT_00000004;
    if (bVar4) goto LAB_145dbefb9;
  }
  uVar3 = _tls_index;
  EVar2 = GMaxRHIShaderPlatform;
  bMobileEnableMovableLightCSMShaderCulling =
       *(int *)((longlong)pTVar16->ShadowedValue + lVar12) != 0;
  uVar18 = (ulonglong)_tls_index;
  piVar20 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x9d4c);
  if ((*piVar20 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&::CVar.CVarName,L"r.Mobile.EarlyZPass");
    ::CVar.CVar = (IConsoleVariable *)0x0;
    atexit(`FReadOnlyCVARCache::MobileEarlyZPassIniValue'::__l2::
           _dynamic_atexit_destructor_for__CVar__);
    _Init_thread_footer(&::_TSS0);
  }
  MobileEarlyZPassValue = FShaderPlatformCachedIniValue<int>::Get(&::CVar,EVar2);
  EVar2 = GMaxRHIShaderPlatform;
  if ((*piVar20 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&::CVar.CVarName,L"r.Mobile.Forward.EnableLocalLights");
    ::CVar.CVar = (IConsoleVariable *)0x0;
    atexit(`FReadOnlyCVARCache::MobileForwardLocalLightsIniValue'::__l2::
           _dynamic_atexit_destructor_for__CVar__);
    _Init_thread_footer(&::_TSS0);
  }
  MobileForwardLocalLightsValue = FShaderPlatformCachedIniValue<int>::Get(&::CVar,EVar2);
  EVar2 = GMaxRHIShaderPlatform;
  uVar19 = (ulonglong)GMaxRHIShaderPlatform;
  if ((*piVar20 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&MobileShadingPathIniValue.CVarName,L"r.Mobile.ShadingPath");
    MobileShadingPathIniValue.CVar = (IConsoleVariable *)0x0;
    atexit(`FReadOnlyCVARCache::MobileDeferredShadingIniValue'::__l2::
           _dynamic_atexit_destructor_for__MobileShadingPathIniValue__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar20 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar15 = IConsoleManager::Get();
    plVar6 = (longlong *)
             (**(code **)((longlong)*pIVar15 + 0xc0))
                       (pIVar15,L"r.Mobile.AllowDeferredShadingOpenGL",1);
    pTVar16 = pTVar21;
    if (plVar6 != (longlong *)0x0) {
      pTVar16 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
    }
    MobileAllowDeferredShadingOpenGL = pTVar16;
    _Init_thread_footer(&::_TSS1);
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar19].bContainsValidPlatformInfo == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xc1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar16 = MobileAllowDeferredShadingOpenGL;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar19].Language == LANGUAGE_OpenGL) {
    if (MobileAllowDeferredShadingOpenGL != (TConsoleVariableData<int> *)0x0) {
      bVar4 = IsInParallelGameThread();
      if (bVar4) {
LAB_145dbf1ee:
        pTVar17 = pTVar21;
      }
      else {
        bVar4 = IsInGameThread();
        pTVar17 = (TConsoleVariableData<int> *)&DAT_00000004;
        if (bVar4) goto LAB_145dbf1ee;
      }
      if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar16->ShadowedValue) != 0)
      goto LAB_145dbf1fc;
    }
    bVar4 = false;
  }
  else {
LAB_145dbf1fc:
    bVar4 = true;
  }
  bVar5 = FShaderPlatformCachedIniValue<bool>::Get(&MobileShadingPathIniValue,EVar2);
  EVar2 = GMaxRHIShaderPlatform;
  if ((bVar5) && (bVar4)) {
    bMobileDeferredShadingValue = true;
  }
  else {
    bMobileDeferredShadingValue = false;
  }
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8);
  if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&::CVar.CVarName,L"r.Mobile.EnableMovableSpotlightsShadow");
    ::CVar.CVar = (IConsoleVariable *)0x0;
    atexit(`FReadOnlyCVARCache::MobileEnableMovableSpotlightsShadowIniValue'::__l2::
           _dynamic_atexit_destructor_for__CVar__);
    _Init_thread_footer(&::_TSS0);
  }
  bMobileEnableMovableSpotlightsShadowValue =
       FShaderPlatformCachedIniValue<bool>::Get(&::CVar,EVar2);
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    pTVar16 = (TConsoleVariableData<int> *)&DAT_00000004;
    if (!bVar4) goto LAB_145dbf2b9;
  }
  pTVar16 = pTVar21;
LAB_145dbf2b9:
  EVar2 = GMaxRHIShaderPlatform;
  bMobileSupportsGPUScene = *(int *)((longlong)pTVar16->ShadowedValue + local_res20) != 0;
  if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&::CVar.CVarName,L"r.Mobile.Forward.EnableParticleLights");
    ::CVar.CVar = (IConsoleVariable *)0x0;
    atexit(`FReadOnlyCVARCache::MobileForwardParticleLightsIniValue'::__l2::
           _dynamic_atexit_destructor_for__CVar__);
    _Init_thread_footer(&::_TSS0);
  }
  bMobileForwardParticleLights = FShaderPlatformCachedIniValue<bool>::Get(&::CVar,EVar2);
  bVar4 = IsInParallelGameThread();
  if ((bVar4) ||
     (bVar4 = IsInGameThread(), pTVar16 = (TConsoleVariableData<int> *)&DAT_00000004, bVar4)) {
    pTVar16 = pTVar21;
  }
  EVar2 = GMaxRHIShaderPlatform;
  MobileForwardDecalLightingValue = *(int *)((longlong)pTVar16->ShadowedValue + local_58);
  if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&::CVar.CVarName,L"r.Mobile.AllowDitheredLODTransition");
    ::CVar.CVar = (IConsoleVariable *)0x0;
    atexit(`FReadOnlyCVARCache::MobileAllowDitheredLODTransitionValueIniValue'::__l2::
           _dynamic_atexit_destructor_for__CVar__);
    _Init_thread_footer(&::_TSS0);
  }
  bMobileAllowDitheredLODTransitionValue = FShaderPlatformCachedIniValue<bool>::Get(&::CVar,EVar2);
  EVar2 = GMaxRHIShaderPlatform;
  bVar4 = IsVulkanMobilePlatform((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  if ((!bVar4) && (bVar4 = IsMetalMobilePlatform((FStaticShaderPlatform)EVar2), !bVar4)) {
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x100,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bIsAndroidOpenGLES == 0) {
      bInitialized = true;
      bMobileAllowFramebufferFetchValue = false;
      return;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar3 * 8) + 0x9d4c)
       < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&::CVar.CVarName,L"r.Mobile.AllowFramebufferFetch");
    ::CVar.CVar = (IConsoleVariable *)0x0;
    atexit(`FReadOnlyCVARCache::MobileAllowFramebufferFetchIniValue'::__l5::
           _dynamic_atexit_destructor_for__CVar__);
    _Init_thread_footer(&::_TSS0);
  }
  if (((bMobileDeferredShadingValue != false) && (bMobileHDR != false)) &&
     (bVar4 = FShaderPlatformCachedIniValue<bool>::Get(&::CVar,EVar2), !bVar4)) {
    bInitialized = true;
    bMobileAllowFramebufferFetchValue = false;
    return;
  }
  bMobileAllowFramebufferFetchValue = true;
  bInitialized = true;
  return;
}

// MobileAllowDitheredLODTransitionValueIniValue @ 145dc1f00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FReadOnlyCVARCache::MobileAllowDitheredLODTransitionValueIniValue(EShaderPlatform param_1)

{
  bool bVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::CVar.CVarName,L"r.Mobile.AllowDitheredLODTransition");
      ::CVar.CVar = (IConsoleVariable *)0x0;
      atexit(`FReadOnlyCVARCache::MobileAllowDitheredLODTransitionValueIniValue'::__l2::
             _dynamic_atexit_destructor_for__CVar__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = FShaderPlatformCachedIniValue<bool>::Get(&::CVar,param_1);
  return bVar1;
}

// MobileAllowFramebufferFetchIniValue @ 145dc1fa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FReadOnlyCVARCache::MobileAllowFramebufferFetchIniValue(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsVulkanMobilePlatform((FStaticShaderPlatform)param_1);
  if ((!bVar2) && (bVar2 = IsMetalMobilePlatform((FStaticShaderPlatform)param_1), !bVar2)) {
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x100,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bIsAndroidOpenGLES == 0) {
      return false;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&::CVar.CVarName,L"r.Mobile.AllowFramebufferFetch");
    ::CVar.CVar = (IConsoleVariable *)0x0;
    atexit(`FReadOnlyCVARCache::MobileAllowFramebufferFetchIniValue'::__l5::
           _dynamic_atexit_destructor_for__CVar__);
    _Init_thread_footer(&::_TSS0);
  }
  if (((bMobileDeferredShadingValue != false) && (bMobileHDR != false)) &&
     (bVar2 = FShaderPlatformCachedIniValue<bool>::Get(&::CVar,param_1), !bVar2)) {
    return false;
  }
  return true;
}

// MobileDeferredShadingIniValue @ 145dc20d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FReadOnlyCVARCache::MobileDeferredShadingIniValue(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  int *piVar9;
  
  pTVar8 = (TConsoleVariableData<int> *)0x0;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&MobileShadingPathIniValue.CVarName,L"r.Mobile.ShadingPath");
    MobileShadingPathIniValue.CVar = (IConsoleVariable *)0x0;
    atexit(`FReadOnlyCVARCache::MobileDeferredShadingIniValue'::__l2::
           _dynamic_atexit_destructor_for__MobileShadingPathIniValue__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar9 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar5 = IConsoleManager::Get();
    plVar6 = (longlong *)
             (**(code **)((longlong)*pIVar5 + 0xc0))
                       (pIVar5,L"r.Mobile.AllowDeferredShadingOpenGL",1);
    pTVar7 = pTVar8;
    if (plVar6 != (longlong *)0x0) {
      pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
    }
    MobileAllowDeferredShadingOpenGL = pTVar7;
    _Init_thread_footer(&::_TSS1);
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xc1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar7 = MobileAllowDeferredShadingOpenGL;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].Language == LANGUAGE_OpenGL) {
    if (MobileAllowDeferredShadingOpenGL != (TConsoleVariableData<int> *)0x0) {
      bVar2 = IsInParallelGameThread();
      if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
        pTVar8 = (TConsoleVariableData<int> *)&DAT_00000004;
      }
      if (*(int *)((longlong)pTVar7->ShadowedValue + (longlong)pTVar8->ShadowedValue) != 0)
      goto LAB_145dc2196;
    }
    bVar2 = false;
  }
  else {
LAB_145dc2196:
    bVar2 = true;
  }
  bVar4 = FShaderPlatformCachedIniValue<bool>::Get(&MobileShadingPathIniValue,param_1);
  if ((bVar4) && (bVar2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// MobileEarlyZPassIniValue @ 145dc2290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl FReadOnlyCVARCache::MobileEarlyZPassIniValue(EShaderPlatform param_1)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::CVar.CVarName,L"r.Mobile.EarlyZPass");
      ::CVar.CVar = (IConsoleVariable *)0x0;
      atexit(`FReadOnlyCVARCache::MobileEarlyZPassIniValue'::__l2::
             _dynamic_atexit_destructor_for__CVar__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar1 = FShaderPlatformCachedIniValue<int>::Get(&::CVar,param_1);
  return iVar1;
}

// MobileEnableMovableSpotlightsShadowIniValue @ 145dc2330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FReadOnlyCVARCache::MobileEnableMovableSpotlightsShadowIniValue(EShaderPlatform param_1)

{
  bool bVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::CVar.CVarName,L"r.Mobile.EnableMovableSpotlightsShadow");
      ::CVar.CVar = (IConsoleVariable *)0x0;
      atexit(`FReadOnlyCVARCache::MobileEnableMovableSpotlightsShadowIniValue'::__l2::
             _dynamic_atexit_destructor_for__CVar__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = FShaderPlatformCachedIniValue<bool>::Get(&::CVar,param_1);
  return bVar1;
}

// MobileForwardLocalLightsIniValue @ 145dc23d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl FReadOnlyCVARCache::MobileForwardLocalLightsIniValue(EShaderPlatform param_1)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::CVar.CVarName,L"r.Mobile.Forward.EnableLocalLights");
      ::CVar.CVar = (IConsoleVariable *)0x0;
      atexit(`FReadOnlyCVARCache::MobileForwardLocalLightsIniValue'::__l2::
             _dynamic_atexit_destructor_for__CVar__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar1 = FShaderPlatformCachedIniValue<int>::Get(&::CVar,param_1);
  return iVar1;
}

// MobileForwardParticleLightsIniValue @ 145dc2470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FReadOnlyCVARCache::MobileForwardParticleLightsIniValue(EShaderPlatform param_1)

{
  bool bVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::CVar.CVarName,L"r.Mobile.Forward.EnableParticleLights");
      ::CVar.CVar = (IConsoleVariable *)0x0;
      atexit(`FReadOnlyCVARCache::MobileForwardParticleLightsIniValue'::__l2::
             _dynamic_atexit_destructor_for__CVar__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = FShaderPlatformCachedIniValue<bool>::Get(&::CVar,param_1);
  return bVar1;
}


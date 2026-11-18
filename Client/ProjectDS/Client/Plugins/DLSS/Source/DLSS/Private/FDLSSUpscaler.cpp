// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 12

// FDLSSUpscaler @ 14de20de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FDLSSUpscaler * __thiscall FDLSSUpscaler::FDLSSUpscaler(FDLSSUpscaler *this,NGXRHI *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  TIntPoint<int>_u_0 *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  TIntPoint<int>_u_0 TVar8;
  TIntPoint<int>_u_0 TVar9;
  undefined8 uVar10;
  bool bVar11;
  NVSDK_NGX_PerfQuality_Value NVar12;
  FDLSSUpscaler *pFVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong *puVar16;
  float fVar17;
  undefined1 auStackY_368 [32];
  FDLSSResolutionParameters local_318;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  TIntPoint<int>_u_0 local_2e0;
  TIntPoint<int>_u_0 TStack_2d8;
  undefined8 local_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  float local_2c0;
  float fStack_2bc;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60 [7];
  
  local_60[0] = __security_cookie.value ^ (ulonglong)auStackY_368;
  this->PreviousResolutionFraction = -1.0;
  this->_padding_ = (longlong)&___7FDLSSUpscaler__6B_;
  if (6 < (byte)LogDLSS._0_1_) {
    local_2b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_2b8,"FDLSSUpscaler::FDLSSUpscaler",0x1c,Yes);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    if ((void *)local_2b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._padding_);
    }
  }
  if ((NGXRHIExtensions != (NGXRHI *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!NGXRHIExtensions",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0x27e,
                          L"static member NGXRHIExtensions should only be assigned once by this ctor when called during module startup"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
    return pFVar13;
  }
  local_2e8 = 0;
  local_308 = 0;
  uStack_300 = 0;
  ResolutionSettings.ArrayNum = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  NGXRHIExtensions = param_1;
  if (ResolutionSettings.ArrayMax != 6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,6,&ResolutionSettings.AllocatorInstance,0,&ResolutionSettings.ArrayMax);
  }
  if (((ResolutionSettings.AllocatorInstance.Data <= (FScriptContainerElement *)&local_308) &&
      ((FScriptContainerElement *)&local_308 <
       ResolutionSettings.AllocatorInstance.Data + (longlong)ResolutionSettings.ArrayMax * 0x28)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
    return pFVar13;
  }
  if (ResolutionSettings.ArrayNum == ResolutionSettings.ArrayMax) {
    ResolutionSettings.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x428,&ResolutionSettings.AllocatorInstance,&ResolutionSettings.ArrayMax);
  }
  FVar7.Data = ResolutionSettings.AllocatorInstance.Data;
  lVar14 = (longlong)ResolutionSettings.ArrayNum;
  ResolutionSettings.ArrayNum = ResolutionSettings.ArrayNum + 1;
  pFVar2 = ResolutionSettings.AllocatorInstance.Data + lVar14 * 0x28;
  *(undefined8 *)pFVar2 = local_308;
  *(undefined8 *)(pFVar2 + 8) = uStack_300;
  pFVar2 = FVar7.Data + lVar14 * 0x28 + 0x10;
  *(undefined8 *)pFVar2 = local_2f8;
  *(undefined8 *)(pFVar2 + 8) = uStack_2f0;
  *(undefined8 *)(FVar7.Data + lVar14 * 0x28 + 0x20) = local_2e8;
  if (((ResolutionSettings.AllocatorInstance.Data <= (FScriptContainerElement *)&local_308) &&
      ((FScriptContainerElement *)&local_308 <
       ResolutionSettings.AllocatorInstance.Data + (longlong)ResolutionSettings.ArrayMax * 0x28)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
    return pFVar13;
  }
  if (ResolutionSettings.ArrayNum == ResolutionSettings.ArrayMax) {
    ResolutionSettings.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x428,&ResolutionSettings.AllocatorInstance,&ResolutionSettings.ArrayMax);
  }
  FVar7.Data = ResolutionSettings.AllocatorInstance.Data;
  lVar14 = (longlong)ResolutionSettings.ArrayNum;
  pFVar2 = ResolutionSettings.AllocatorInstance.Data + lVar14 * 0x28;
  ResolutionSettings.ArrayNum = ResolutionSettings.ArrayNum + 1;
  *(undefined8 *)pFVar2 = local_308;
  *(undefined8 *)(pFVar2 + 8) = uStack_300;
  pFVar2 = FVar7.Data + lVar14 * 0x28 + 0x10;
  *(undefined8 *)pFVar2 = local_2f8;
  *(undefined8 *)(pFVar2 + 8) = uStack_2f0;
  *(undefined8 *)(FVar7.Data + lVar14 * 0x28 + 0x20) = local_2e8;
  if (((ResolutionSettings.AllocatorInstance.Data <= (FScriptContainerElement *)&local_308) &&
      ((FScriptContainerElement *)&local_308 <
       ResolutionSettings.AllocatorInstance.Data + (longlong)ResolutionSettings.ArrayMax * 0x28)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
    return pFVar13;
  }
  if (ResolutionSettings.ArrayNum == ResolutionSettings.ArrayMax) {
    ResolutionSettings.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x428,&ResolutionSettings.AllocatorInstance,&ResolutionSettings.ArrayMax);
  }
  FVar7.Data = ResolutionSettings.AllocatorInstance.Data;
  lVar14 = (longlong)ResolutionSettings.ArrayNum;
  pFVar2 = ResolutionSettings.AllocatorInstance.Data + lVar14 * 0x28;
  ResolutionSettings.ArrayNum = ResolutionSettings.ArrayNum + 1;
  *(undefined8 *)pFVar2 = local_308;
  *(undefined8 *)(pFVar2 + 8) = uStack_300;
  pFVar2 = FVar7.Data + lVar14 * 0x28 + 0x10;
  *(undefined8 *)pFVar2 = local_2f8;
  *(undefined8 *)(pFVar2 + 8) = uStack_2f0;
  *(undefined8 *)(FVar7.Data + lVar14 * 0x28 + 0x20) = local_2e8;
  if (((ResolutionSettings.AllocatorInstance.Data <= (FScriptContainerElement *)&local_308) &&
      ((FScriptContainerElement *)&local_308 <
       ResolutionSettings.AllocatorInstance.Data + (longlong)ResolutionSettings.ArrayMax * 0x28)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
    return pFVar13;
  }
  if (ResolutionSettings.ArrayNum == ResolutionSettings.ArrayMax) {
    ResolutionSettings.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x428,&ResolutionSettings.AllocatorInstance,&ResolutionSettings.ArrayMax);
  }
  FVar7.Data = ResolutionSettings.AllocatorInstance.Data;
  lVar14 = (longlong)ResolutionSettings.ArrayNum;
  pFVar2 = ResolutionSettings.AllocatorInstance.Data + lVar14 * 0x28;
  ResolutionSettings.ArrayNum = ResolutionSettings.ArrayNum + 1;
  *(undefined8 *)pFVar2 = local_308;
  *(undefined8 *)(pFVar2 + 8) = uStack_300;
  pFVar2 = FVar7.Data + lVar14 * 0x28 + 0x10;
  *(undefined8 *)pFVar2 = local_2f8;
  *(undefined8 *)(pFVar2 + 8) = uStack_2f0;
  *(undefined8 *)(FVar7.Data + lVar14 * 0x28 + 0x20) = local_2e8;
  if (((ResolutionSettings.AllocatorInstance.Data <= (FScriptContainerElement *)&local_308) &&
      ((FScriptContainerElement *)&local_308 <
       ResolutionSettings.AllocatorInstance.Data + (longlong)ResolutionSettings.ArrayMax * 0x28)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
    return pFVar13;
  }
  if (ResolutionSettings.ArrayNum == ResolutionSettings.ArrayMax) {
    ResolutionSettings.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x428,&ResolutionSettings.AllocatorInstance,&ResolutionSettings.ArrayMax);
  }
  FVar7.Data = ResolutionSettings.AllocatorInstance.Data;
  lVar14 = (longlong)ResolutionSettings.ArrayNum;
  pFVar2 = ResolutionSettings.AllocatorInstance.Data + lVar14 * 0x28;
  ResolutionSettings.ArrayNum = ResolutionSettings.ArrayNum + 1;
  *(undefined8 *)pFVar2 = local_308;
  *(undefined8 *)(pFVar2 + 8) = uStack_300;
  pFVar2 = FVar7.Data + lVar14 * 0x28 + 0x10;
  *(undefined8 *)pFVar2 = local_2f8;
  *(undefined8 *)(pFVar2 + 8) = uStack_2f0;
  *(undefined8 *)(FVar7.Data + lVar14 * 0x28 + 0x20) = local_2e8;
  if (((ResolutionSettings.AllocatorInstance.Data <= (FScriptContainerElement *)&local_308) &&
      ((FScriptContainerElement *)&local_308 <
       ResolutionSettings.AllocatorInstance.Data + (longlong)ResolutionSettings.ArrayMax * 0x28)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
    return pFVar13;
  }
  if (ResolutionSettings.ArrayNum == ResolutionSettings.ArrayMax) {
    ResolutionSettings.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x428,&ResolutionSettings.AllocatorInstance,&ResolutionSettings.ArrayMax);
  }
  FVar7.Data = ResolutionSettings.AllocatorInstance.Data;
  local_68 = 2;
  puVar16 = (ulonglong *)local_78;
  lVar14 = (longlong)ResolutionSettings.ArrayNum;
  local_64 = 3;
  pFVar2 = ResolutionSettings.AllocatorInstance.Data + lVar14 * 0x28;
  ResolutionSettings.ArrayNum = ResolutionSettings.ArrayNum + 1;
  *(undefined8 *)pFVar2 = local_308;
  *(undefined8 *)(pFVar2 + 8) = uStack_300;
  pFVar2 = FVar7.Data + lVar14 * 0x28 + 0x10;
  *(undefined8 *)pFVar2 = local_2f8;
  *(undefined8 *)(pFVar2 + 8) = uStack_2f0;
  local_78 = ___xmm_0000000100000000fffffffffffffffe;
  *(undefined8 *)(FVar7.Data + lVar14 * 0x28 + 0x20) = local_2e8;
  do {
    uVar1 = (int)*puVar16 + 2;
    switch(uVar1) {
    case 0:
      NVar12 = NVSDK_NGX_PerfQuality_Value_UltraPerformance;
      break;
    case 2:
      NVar12 = NVSDK_NGX_PerfQuality_Value_Balanced;
      break;
    case 3:
      NVar12 = NVSDK_NGX_PerfQuality_Value_MaxQuality;
      break;
    case 4:
      NVar12 = NVSDK_NGX_PerfQuality_Value_UltraQuality;
      break;
    case 5:
      NVar12 = NVSDK_NGX_PerfQuality_Value_DLAA;
      break;
    default:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0x1d8,
                          L"ToNGXQuality should not be called with an out of range EDLSSQualityMode from the higher level code"
                         );
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
        return pFVar13;
      }
    case 1:
      NVar12 = NVSDK_NGX_PerfQuality_Value_MaxPerf;
    }
    if ((ResolutionSettings.ArrayNum <= (int)NVar12) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ToNGXQuality(QualityMode) < ResolutionSettings.Num()",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                            ,0x286,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
      return pFVar13;
    }
    switch(uVar1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
switchD_14de21507_caseD_0:
      switch(switchD_1501dbc7b::caseD_1.e_magic +
             (&switchD_14de21542::switchdataD_14de21994)[(int)uVar1]) {
      case (char *)0x14de21544:
        local_318.PerfQuality = NVSDK_NGX_PerfQuality_Value_UltraPerformance;
        break;
      case (char *)0x14de2154b:
        local_318.PerfQuality = NVSDK_NGX_PerfQuality_Value_Balanced;
        break;
      case (char *)0x14de21552:
        local_318.PerfQuality = NVSDK_NGX_PerfQuality_Value_MaxQuality;
        break;
      case (char *)0x14de21559:
        local_318.PerfQuality = NVSDK_NGX_PerfQuality_Value_UltraQuality;
        break;
      case (char *)0x14de21560:
        local_318.PerfQuality = NVSDK_NGX_PerfQuality_Value_DLAA;
        break;
      case (char *)0x14de2158d:
        goto switchD_14de21542_caseD_4de2158d;
      }
      break;
    default:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0x1d8,
                          L"ToNGXQuality should not be called with an out of range EDLSSQualityMode from the higher level code"
                         );
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
        return pFVar13;
      }
      if (uVar1 < 6) goto switchD_14de21507_caseD_0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0x1d8,
                          L"ToNGXQuality should not be called with an out of range EDLSSQualityMode from the higher level code"
                         );
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
        return pFVar13;
      }
switchD_14de21542_caseD_4de2158d:
      local_318.PerfQuality = NVSDK_NGX_PerfQuality_Value_MaxPerf;
    }
    local_318.Width = 1000;
    local_318.Height = 1000;
    NGXRHI::FDLSSQueryFeature::GetDLSSOptimalSettings
              (&NGXRHIExtensions->NGXQueryFeature,(FDLSSOptimalSettings *)&local_2e0._s_0,&local_318
              );
    uVar10 = local_2d0;
    TVar9 = TStack_2d8;
    TVar8 = local_2e0;
    uVar6 = CONCAT44(fStack_2bc,local_2c0);
    uVar5 = CONCAT44(uStack_2c4,uStack_2c8);
    switch(uVar1) {
    case 0:
      lVar14 = 3;
      lVar15 = 0x78;
      break;
    case 2:
      lVar14 = 1;
      lVar15 = 0x28;
      break;
    case 3:
      lVar14 = 2;
      lVar15 = 0x50;
      break;
    case 4:
      lVar14 = 4;
      lVar15 = 0xa0;
      break;
    case 5:
      lVar14 = 5;
      lVar15 = 200;
      break;
    default:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0x1d8,
                          L"ToNGXQuality should not be called with an out of range EDLSSQualityMode from the higher level code"
                         );
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
        return pFVar13;
      }
    case 1:
      lVar14 = 0;
      lVar15 = 0;
    }
    if ((ResolutionSettings.ArrayNum <= (int)lVar14) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
      return pFVar13;
    }
    FVar7.Data = ResolutionSettings.AllocatorInstance.Data;
    pTVar3 = (TIntPoint<int>_u_0 *)(ResolutionSettings.AllocatorInstance.Data + lVar15);
    *pTVar3 = TVar8;
    pTVar3[1] = TVar9;
    pFVar2 = FVar7.Data + lVar15 + 0x10;
    *(undefined8 *)pFVar2 = uVar10;
    *(undefined8 *)(pFVar2 + 8) = uVar5;
    *(undefined8 *)(FVar7.Data + lVar15 + 0x20) = uVar6;
    if ((char)uStack_2c8 != '\0') {
      fVar17 = MaxDynamicResolutionFraction;
      if (local_2c0 != fStack_2bc) {
        fVar17 = local_2c0;
        if (MinDynamicResolutionFraction <= local_2c0) {
          fVar17 = MinDynamicResolutionFraction;
        }
        MinDynamicResolutionFraction = fVar17;
        fVar17 = fStack_2bc;
        if (fStack_2bc <= MaxDynamicResolutionFraction) {
          fVar17 = MaxDynamicResolutionFraction;
        }
      }
      MaxDynamicResolutionFraction = fVar17;
      NumRuntimeQualityModes = NumRuntimeQualityModes + 1;
    }
    if (4 < (byte)LogDLSS._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    }
    puVar16 = (ulonglong *)((longlong)puVar16 + 4);
    if (puVar16 == local_60) {
      if (4 < (byte)LogDLSS._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
      }
      if ((ResolutionSettings.ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
        return pFVar13;
      }
      if ((ResolutionSettings.AllocatorInstance.Data[0x18] == (FScriptContainerElement)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsQualityModeSupported(EDLSSQualityMode::Performance)",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                              ,0x2a1,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
        return pFVar13;
      }
      if ((ResolutionSettings.ArrayNum < 2) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
        return pFVar13;
      }
      if ((ResolutionSettings.AllocatorInstance.Data[0x40] == (FScriptContainerElement)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsQualityModeSupported(EDLSSQualityMode::Balanced)",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                              ,0x2a2,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
        return pFVar13;
      }
      if ((ResolutionSettings.ArrayNum < 3) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
        return pFVar13;
      }
      if ((ResolutionSettings.AllocatorInstance.Data[0x68] == (FScriptContainerElement)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsQualityModeSupported(EDLSSQualityMode::Quality)",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                              ,0x2a3,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FDLSSUpscaler *)(*pcVar4)();
        return pFVar13;
      }
      if (6 < (byte)LogDLSS._0_1_) {
        local_198._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_198,"FDLSSUpscaler::FDLSSUpscaler",0x1c,Yes);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
        if ((void *)local_198._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_198._padding_);
        }
      }
      return this;
    }
  } while( true );
}

// EnableDLSSInPlayInEditorViewports @ 14de25d00

bool __thiscall FDLSSUpscaler::EnableDLSSInPlayInEditorViewports(FDLSSUpscaler *this)

{
  UClass *pUVar1;
  
  pUVar1 = UDLSSOverrideSettings::StaticClass();
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x3 == '\x02') {
    pUVar1 = UDLSSSettings::StaticClass();
    if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar1);
    }
    return (bool)(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0xe;
  }
  pUVar1 = UDLSSOverrideSettings::StaticClass();
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  return (pUVar1->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x3 == '\0';
}

// GetAutoQualityModeFromPixels @ 14de26890

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

TOptional<EDLSSQualityMode> __thiscall
FDLSSUpscaler::GetAutoQualityModeFromPixels(FDLSSUpscaler *this,int param_1)

{
  bool bVar1;
  undefined4 in_register_00000014;
  TOptional<EDLSSQualityMode> TVar2;
  int in_R8D;
  
  TVar2._4_4_ = in_register_00000014;
  TVar2.TypedValue = param_1;
  if (in_R8D < 8300000) {
    if (0x384e0f < in_R8D) goto LAB_14de268d8;
    if (in_R8D < 0x1ef9b0) goto LAB_14de26933;
  }
  else {
    bVar1 = IsQualityModeSupported(this,MinValue);
    if (bVar1) {
      *(undefined4 *)TVar2 = 0xfffffffe;
      *(undefined1 *)((longlong)TVar2 + 4) = 1;
      return TVar2;
    }
LAB_14de268d8:
    bVar1 = IsQualityModeSupported(this,Performance);
    if (bVar1) {
      *(undefined4 *)TVar2 = 0xffffffff;
      *(undefined1 *)((longlong)TVar2 + 4) = 1;
      return TVar2;
    }
  }
  bVar1 = IsQualityModeSupported(this,Quality);
  if (bVar1) {
    *(undefined4 *)TVar2 = 1;
    *(undefined1 *)((longlong)TVar2 + 4) = 1;
    return TVar2;
  }
LAB_14de26933:
  *(undefined1 *)((longlong)TVar2 + 4) = 0;
  return TVar2;
}

// GetMaxResolutionFractionForQuality @ 14de26da0

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

float __thiscall
FDLSSUpscaler::GetMaxResolutionFractionForQuality(FDLSSUpscaler *this,EDLSSQualityMode param_1)

{
  code *pcVar1;
  bool bVar2;
  NVSDK_NGX_PerfQuality_Value NVar3;
  uint uVar4;
  float fVar5;
  
  bVar2 = IsQualityModeSupported(this,param_1);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsQualityModeSupported(Quality)",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x573,L"%u is not a valid Quality mode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  NVar3 = ToNGXQuality(param_1);
  uVar4 = 0;
  if ((int)NVar3 < ResolutionSettings.ArrayNum) {
    uVar4 = ~NVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  return *(float *)(ResolutionSettings.AllocatorInstance.Data + (longlong)(int)NVar3 * 0x28 + 0x24);
}

// GetMinResolutionFractionForQuality @ 14de26e70

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

float __thiscall
FDLSSUpscaler::GetMinResolutionFractionForQuality(FDLSSUpscaler *this,EDLSSQualityMode param_1)

{
  code *pcVar1;
  bool bVar2;
  NVSDK_NGX_PerfQuality_Value NVar3;
  uint uVar4;
  float fVar5;
  
  bVar2 = IsQualityModeSupported(this,param_1);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsQualityModeSupported(Quality)",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x56d,L"%u is not a valid Quality mode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  NVar3 = ToNGXQuality(param_1);
  uVar4 = 0;
  if ((int)NVar3 < ResolutionSettings.ArrayNum) {
    uVar4 = ~NVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  return *(float *)(ResolutionSettings.AllocatorInstance.Data + (longlong)(int)NVar3 * 0x28 + 0x20);
}

// GetOptimalResolutionFractionForQuality @ 14de273e0

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

float __thiscall
FDLSSUpscaler::GetOptimalResolutionFractionForQuality(FDLSSUpscaler *this,EDLSSQualityMode param_1)

{
  code *pcVar1;
  bool bVar2;
  NVSDK_NGX_PerfQuality_Value NVar3;
  uint uVar4;
  float fVar5;
  
  bVar2 = IsQualityModeSupported(this,param_1);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsQualityModeSupported(Quality)",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x567,L"%u is not a valid Quality mode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  NVar3 = ToNGXQuality(param_1);
  uVar4 = 0;
  if ((int)NVar3 < ResolutionSettings.ArrayNum) {
    uVar4 = ~NVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  return *(float *)(ResolutionSettings.AllocatorInstance.Data + (longlong)(int)NVar3 * 0x28 + 0x1c);
}

// IsDLSSActive @ 14de27d60

bool __thiscall FDLSSUpscaler::IsDLSSActive(FDLSSUpscaler *this)

{
  FName FVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  IConsoleManager *pIVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  int *piVar11;
  FName local_res10 [3];
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar11 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar9 = IConsoleManager::Get();
    CVarTemporalAAUpscaler =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,L"r.TemporalAA.Upscaler",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar11 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar10 = ::FName::FName(local_res10,L"DLSS");
    FVar1 = *pFVar10;
    this_00 = FModuleManager::Get();
    DLSSModule = (IDLSSModuleInterface *)FModuleManager::LoadModuleChecked(this_00,FVar1);
    _Init_thread_footer(&::_TSS1);
  }
  if ((DLSSModule == (IDLSSModuleInterface *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DLSSModule",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                         ,0x4e7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((CVarTemporalAAUpscaler == (IConsoleVariable *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CVarTemporalAAUpscaler",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                         ,0x4e8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  cVar6 = (**(code **)((longlong)*DLSSModule + 0x40))();
  if (cVar6 != '\0') {
    return false;
  }
  if (CVarTemporalAAUpscaler != (IConsoleVariable *)0x0) {
    iVar7 = (**(code **)(*(longlong *)CVarTemporalAAUpscaler + 200))();
    pTVar3 = CVarNGXDLSSEnable.Ref;
    if (iVar7 == 0) {
      return false;
    }
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar8 = 0;
    }
    else {
      lVar8 = 4;
    }
    if (*(int *)((longlong)pTVar3->ShadowedValue + lVar8) == 0) {
      return false;
    }
    return true;
  }
  return false;
}

// IsFixedResolutionFraction @ 14de28080

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

bool __thiscall
FDLSSUpscaler::IsFixedResolutionFraction(FDLSSUpscaler *this,EDLSSQualityMode param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  NVSDK_NGX_PerfQuality_Value NVar4;
  uint uVar5;
  
  bVar2 = IsQualityModeSupported(this,param_1);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsQualityModeSupported(Quality)",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x579,L"%u is not a valid Quality mode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  NVar4 = ToNGXQuality(param_1);
  uVar5 = 0;
  if ((int)NVar4 < ResolutionSettings.ArrayNum) {
    uVar5 = ~NVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(float *)(ResolutionSettings.AllocatorInstance.Data + (longlong)(int)NVar4 * 0x28 + 0x24) ==
      *(float *)(ResolutionSettings.AllocatorInstance.Data + (longlong)(int)NVar4 * 0x28 + 0x20)) {
    return true;
  }
  return false;
}

// IsQualityModeSupported @ 14de28140

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

bool __thiscall FDLSSUpscaler::IsQualityModeSupported(FDLSSUpscaler *this,EDLSSQualityMode param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  NVSDK_NGX_PerfQuality_Value NVar4;
  uint uVar5;
  
  NVar4 = ToNGXQuality(param_1);
  uVar5 = 0;
  if ((int)NVar4 < ResolutionSettings.ArrayNum) {
    uVar5 = ~NVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)ResolutionSettings.AllocatorInstance.Data[(longlong)(int)NVar4 * 0x28 + 0x18];
}

// ReleaseStaticResources @ 14de29090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDLSSUpscaler::ReleaseStaticResources(void)

{
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (6 < (byte)LogDLSS._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDLSSUpscaler::ReleaseStaticResources",0x25,Yes);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  ResolutionSettings.ArrayNum = 0;
  if (ResolutionSettings.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,&ResolutionSettings.AllocatorInstance,0,&ResolutionSettings.ArrayMax);
  }
  if (6 < (byte)LogDLSS._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDLSSUpscaler::ReleaseStaticResources",0x25,Yes);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// SetupViewFamily @ 14de29500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

void __thiscall FDLSSUpscaler::SetupViewFamily(FDLSSUpscaler *this,FSceneViewFamily *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  EDLSSQualityMode EVar3;
  FSceneView *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  FDLSSTemporalUpscalerModularFeature *pFVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  NVSDK_NGX_PerfQuality_Value NVar14;
  longlong lVar15;
  FInstancedPropertyBag *pFVar16;
  TOptional<EDLSSQualityMode> TVar17;
  ITemporalUpscaler *pIVar18;
  uint uVar19;
  undefined1 *puVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  EDLSSQualityMode *pEVar23;
  EDLSSQualityMode EVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [8];
  EDLSSQualityMode local_1f0 [2];
  FInstancedPropertyBag local_1e8 [16];
  void *local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  ulonglong local_b8 [16];
  
  local_b8[0] = __security_cookie.value ^ (ulonglong)auStack_228;
  pFVar21 = (param_1->Views).AllocatorInstance.Data;
  iVar12 = (param_1->Views).ArrayNum;
  pFVar1 = pFVar21 + (longlong)iVar12 * 8;
  while( true ) {
    if ((param_1->Views).ArrayNum != iVar12) {
      local_1f8[0] = 0;
      `TCheckedPointerIterator<FSceneView_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1f8);
    }
    if (pFVar21 == pFVar1) break;
    lVar15 = *(longlong *)pFVar21;
    if ((*(int *)(lVar15 + 0x388) - *(int *)(lVar15 + 0x380) < 0x20) ||
       (*(int *)(lVar15 + 0x38c) - *(int *)(lVar15 + 900) < 0x20)) {
      if ((byte)LogDLSS._0_1_ < 3) {
        return;
      }
      local_200 = CONCAT44(local_200._4_4_,0x20);
      local_208 = CONCAT44(local_208._4_4_,0x20);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
      return;
    }
    pFVar21 = pFVar21 + 8;
  }
  lVar15 = (**(code **)((longlong)*param_1->ScreenPercentageInterface + 8))
                     (param_1->ScreenPercentageInterface,&local_1e8[0].Value.StructMemory);
  iVar12 = DynamicRenderScaling::FBudget::GetGlobalListSize();
  if ((*(int *)(lVar15 + 0x108) != iVar12) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Array.Num() == FBudget::GetGlobalListSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                          ,0xd5,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar22 = (longlong)GDynamicPrimaryResolutionFraction.BudgetId;
  uVar13 = 0;
  if (GDynamicPrimaryResolutionFraction.BudgetId < *(int *)(lVar15 + 0x108)) {
    uVar13 = (uint)~GDynamicPrimaryResolutionFraction.BudgetId >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (local_208 = lVar22, local_200 = (longlong)*(int *)(lVar15 + 0x108),
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(longlong *)(lVar15 + 0x100) != 0) {
    lVar15 = *(longlong *)(lVar15 + 0x100);
  }
  fVar2 = *(float *)(lVar15 + 8 + lVar22 * 0x10);
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  pFVar9 = FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton.Object;
  bVar6 = false;
  bVar10 = true;
  if (((FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton.Object !=
        (FDLSSTemporalUpscalerModularFeature *)0x0) && (0 < (param_1->Views).ArrayNum)) &&
     (*(longlong *)(param_1->Views).AllocatorInstance.Data != 0)) {
    iVar12 = (param_1->Views).ArrayNum;
    if (iVar12 < 1) {
      local_208 = 0;
      local_200 = (longlong)iVar12;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this_00 = *(FSceneView **)(param_1->Views).AllocatorInstance.Data;
    bVar11 = IsInGameThread();
    if ((!bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscalerModularFeature.cpp"
                            ,0x10d,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = FSceneView::GetViewKey(this_00);
    if (*(int *)&(pFVar9->CustomSettings).field_0x8 != *(int *)&(pFVar9->CustomSettings).field_0x34)
    {
      puVar20 = *(undefined1 **)&(pFVar9->CustomSettings).field_0x40;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = &(pFVar9->CustomSettings).field_0x38;
      }
      iVar12 = *(int *)(puVar20 +
                       (ulonglong)(*(int *)&(pFVar9->CustomSettings).field_0x48 - 1U & uVar13) * 4);
      if (iVar12 != -1) {
        do {
          if (*(uint *)((longlong)iVar12 * 0x20 + *(longlong *)&pFVar9->CustomSettings) == uVar13) {
            pFVar16 = TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
                      ::FindChecked((TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
                                     *)&pFVar9->CustomSettings,uVar13);
            if (pFVar16 != (FInstancedPropertyBag *)0x0) {
              iVar12 = (param_1->Views).ArrayNum;
              if (iVar12 < 1) {
                local_208 = 0;
                local_200 = (longlong)iVar12;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar10) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              TVar17 = FDLSSTemporalUpscalerModularFeature::GetQualityMode(local_1e8,(int)pFVar16);
              if ((TVar17 == (TOptional<EDLSSQualityMode>)local_1f0) ||
                 (*(char *)((longlong)TVar17 + 4) == '\0')) {
                bVar10 = false;
              }
              else {
                local_1f0[0] = *(EDLSSQualityMode *)TVar17;
                bVar6 = true;
                bVar10 = false;
              }
            }
            break;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *(longlong *)&pFVar9->CustomSettings);
        } while (iVar12 != -1);
      }
    }
  }
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = __real_3f800000;
  fVar7 = __real_3c23d70a;
  pEVar23 = (EDLSSQualityMode *)&local_d0;
  local_d0 = ___xmm_0000000100000000fffffffffffffffe;
  uStack_c8 = _UNK_152d3c788;
  local_c0 = 2;
  local_bc = 3;
  EVar24 = local_1f0[0];
  do {
    EVar3 = *pEVar23;
    if (!bVar10) break;
    NVar14 = ToNGXQuality(EVar3);
    uVar19 = 0;
    if ((int)NVar14 < ResolutionSettings.ArrayNum) {
      uVar19 = ~NVar14 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (local_208 = (longlong)(int)NVar14, local_200 = (longlong)ResolutionSettings.ArrayNum,
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (ResolutionSettings.AllocatorInstance.Data[(longlong)(int)NVar14 * 0x28 + 0x18] !=
        (FScriptContainerElement)0x0) {
      fVar25 = GetMinResolutionFractionForQuality(this,EVar3);
      fVar26 = GetMaxResolutionFractionForQuality(this,EVar3);
      fVar27 = GetOptimalResolutionFractionForQuality(this,EVar3);
      if (((fVar8 < fVar2) || (fVar2 < fVar25 - fVar7)) || (fVar26 + fVar7 < fVar2)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      bVar5 = bVar11;
      if (bVar6) {
        fVar25 = GetOptimalResolutionFractionForQuality(this,EVar24);
        bVar5 = (float)((uint)(fVar27 - fVar2) & uVar13) < (float)((uint)(fVar25 - fVar2) & uVar13);
        if (!bVar11) goto LAB_14de299c7;
      }
      if (bVar5) {
        bVar6 = true;
        EVar24 = EVar3;
      }
    }
LAB_14de299c7:
    pEVar23 = pEVar23 + 1;
  } while (pEVar23 != (EDLSSQualityMode *)local_b8);
  if (bVar6) {
    pIVar18 = ::operator_new(0x18);
    if (pIVar18 == (ITemporalUpscaler *)0x0) {
      pIVar18 = (ITemporalUpscaler *)0x0;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTemporalUpscalerInterface",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                          ,0xa55,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pIVar18[1] = (ITemporalUpscaler)this;
      *pIVar18 = (ITemporalUpscaler)&___7FDLSSSceneViewFamilyUpscaler__6B_;
      *(EDLSSQualityMode *)(pIVar18 + 2) = EVar24;
    }
    if ((param_1->TemporalUpscalerInterface != (ITemporalUpscaler *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TemporalUpscalerInterface == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                            ,0xa56,L"View family already had a temporal upscaler assigned."), bVar10
       )) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_1->TemporalUpscalerInterface = pIVar18;
  }
  else if ((fVar2 != this->PreviousResolutionFraction) && (2 < (byte)LogDLSS._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
  }
  this->PreviousResolutionFraction = fVar2;
  return;
}

// Tick @ 14de29d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDLSSUpscaler::Tick(FDLSSUpscaler *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (NGXRHIExtensions == (NGXRHI *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NGXRHIExtensions",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x4d4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x4d5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar3;
    *(undefined8 **)&param_1->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,`FDLSSUpscaler::Tick'::`2'::<lambda_1>_>::
               _vftable_;
    puVar3[3] = L"TRHILambdaCommand";
    puVar3[2] = this;
    return;
  }
  NGXRHI::TickPoolElements(NGXRHIExtensions);
  return;
}


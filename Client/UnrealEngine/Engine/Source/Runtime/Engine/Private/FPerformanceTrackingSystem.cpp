// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FPerformanceTrackingSystem @ 1476e7f50

FPerformanceTrackingSystem * __thiscall
FPerformanceTrackingSystem::FPerformanceTrackingSystem(FPerformanceTrackingSystem *this)

{
  this->FPSChartStartTime = 0.0;
  this->FPSChartStopTime = 0.0;
  this->LastTimeChartCreationTicked = 0.0;
  this->LastDeltaSeconds = 0.0;
  this->LastHitchTime = 0.0;
  return this;
}

// AnalyzeFrame @ 1476eda50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FFrameData * __thiscall
FPerformanceTrackingSystem::AnalyzeFrame
          (FPerformanceTrackingSystem *this,FFrameData *__return_storage_ptr__,float param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  atomic<double> aVar7;
  TConsoleVariableData<int> *pTVar8;
  UEngine *pUVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FFrameData *pFVar16;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  uint uVar21;
  longlong lVar22;
  TMulticastDelegate<void___cdecl(EFrameHitchType,float),FDefaultDelegateUserPolicy> *this_00;
  float fVar23;
  float fVar24;
  undefined1 auStackY_348 [32];
  ForAnyElementType local_300;
  int local_2f8;
  int local_2f4;
  uint local_2f0;
  uint local_2ec;
  LARGE_INTEGER local_2e8;
  FPerformanceTrackingSystem *local_2e0;
  FDestructionSentinel local_2d8;
  uint local_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  uint uStack_2b4;
  FDynamicResolutionStateInfos local_2b0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_348;
  uVar19 = 0;
  __return_storage_ptr__->DeltaSeconds = 0.0;
  __return_storage_ptr__->TrueDeltaSeconds = 0.0;
  __return_storage_ptr__->IdleSeconds = 0.0;
  __return_storage_ptr__->IdleOvershootSeconds = 0.0;
  __return_storage_ptr__->GameThreadTimeSeconds = 0.0;
  __return_storage_ptr__->RenderThreadTimeSeconds = 0.0;
  __return_storage_ptr__->RHIThreadTimeSeconds = 0.0;
  __return_storage_ptr__->GPUTimeSeconds = 0.0;
  __return_storage_ptr__->GameDriverTickFlushTimeSeconds = 0.0;
  __return_storage_ptr__->DemoDriverTickFlushTimeSeconds = 0.0;
  __return_storage_ptr__->DynamicResolutionScreenPercentage = 0.0;
  __return_storage_ptr__->FlushAsyncLoadingTime = 0.0;
  __return_storage_ptr__->FlushAsyncLoadingCount = 0;
  __return_storage_ptr__->SyncLoadCount = 0;
  __return_storage_ptr__->NumAsyncPackages = 0;
  __return_storage_ptr__->bBinThisFrame = false;
  __return_storage_ptr__->bGameThreadBound = false;
  __return_storage_ptr__->bRenderThreadBound = false;
  __return_storage_ptr__->bRHIThreadBound = false;
  __return_storage_ptr__->bGPUBound = false;
  uVar15 = GRenderThreadTime;
  __return_storage_ptr__->HitchStatus = NoHitch;
  local_2f0 = GRHIThreadTime;
  local_2e0 = this;
  uVar13 = RHIGetGPUFrameCycles(0);
  local_2ec = uVar13;
  QueryPerformanceCounter(&local_2e8);
  dVar6 = (double)local_2e8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (0.0 < this->LastTimeChartCreationTicked) {
    param_1 = (float)(dVar6 - this->LastTimeChartCreationTicked);
  }
  this->LastTimeChartCreationTicked = dVar6;
  dVar5 = (double)param_1;
  __return_storage_ptr__->TrueDeltaSeconds = dVar5;
  aVar7 = FApp::IdleTime;
  __return_storage_ptr__->IdleSeconds = (double)FApp::IdleTime;
  __return_storage_ptr__->IdleOvershootSeconds = (double)FApp::IdleTimeOvershoot;
  __return_storage_ptr__->GameDriverTickFlushTimeSeconds = GTickFlushGameDriverTimeSeconds;
  __return_storage_ptr__->DemoDriverTickFlushTimeSeconds = GTickFlushDemoDriverTimeSeconds;
  pTVar8 = GFPSChartExcludeIdleTime.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar4 = (code *)swi(3);
    pFVar16 = (FFrameData *)(*pcVar4)();
    return pFVar16;
  }
  uVar21 = 0;
  if (pTVar8->ShadowedValue[0] != 0) {
    if (dVar5 <= (double)aVar7) {
      if (2 < (byte)LogChartCreation._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChartCreation);
      }
    }
    else {
      param_1 = (float)(dVar5 - (double)aVar7);
    }
  }
  uVar18 = local_2f0;
  lVar22 = 4;
  local_2c0 = uVar15;
  uStack_2b4 = local_2f0;
  local_300.Data = (FScriptContainerElement *)0x0;
  local_2f8 = 4;
  __return_storage_ptr__->DeltaSeconds = (double)param_1;
  uStack_2bc = GGameThreadTime;
  uStack_2b8 = uVar13;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_300,4,&local_2f4);
  *(ulonglong *)local_300.Data = CONCAT44(uStack_2bc,local_2c0);
  *(ulonglong *)(local_300.Data + 8) = CONCAT44(uStack_2b4,uStack_2b8);
  if (local_2f8 != 0) {
    if ((local_2f8 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar16 = (FFrameData *)(*pcVar4)();
      return pFVar16;
    }
    uVar13 = 1;
    uVar19 = *(uint *)local_300.Data;
    uVar18 = local_2f0;
    iVar14 = local_2f8;
    if (1 < local_2f8) {
      do {
        uVar18 = uVar21;
        if ((int)uVar13 < iVar14) {
          uVar18 = ~uVar13 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar14 = local_2f8, bVar10)) {
          pcVar4 = (code *)swi(3);
          pFVar16 = (FFrameData *)(*pcVar4)();
          return pFVar16;
        }
        if (uVar19 < *(uint *)(local_300.Data + lVar22)) {
          uVar19 = *(uint *)(local_300.Data + lVar22);
        }
        uVar13 = uVar13 + 1;
        lVar22 = lVar22 + 4;
        uVar18 = local_2f0;
      } while ((int)uVar13 < iVar14);
    }
  }
  if (local_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data);
  }
  fVar23 = FEnginePerformanceTargets::GetTargetFrameTimeThresholdMS();
  uVar13 = local_2ec;
  __return_storage_ptr__->IdleSeconds = (double)FApp::IdleTime;
  __return_storage_ptr__->GameThreadTimeSeconds =
       (double)(float)((double)GGameThreadTime * FGenericPlatformTime::SecondsPerCycle);
  __return_storage_ptr__->RenderThreadTimeSeconds =
       (double)(float)((double)uVar15 * FGenericPlatformTime::SecondsPerCycle);
  __return_storage_ptr__->RHIThreadTimeSeconds =
       (double)(float)((double)uVar18 * FGenericPlatformTime::SecondsPerCycle);
  __return_storage_ptr__->GPUTimeSeconds =
       (double)(float)((double)local_2ec * FGenericPlatformTime::SecondsPerCycle);
  __return_storage_ptr__->FlushAsyncLoadingTime = GFlushAsyncLoadingTime;
  __return_storage_ptr__->FlushAsyncLoadingCount = GFlushAsyncLoadingCount;
  __return_storage_ptr__->SyncLoadCount = GSyncLoadCount;
  iVar14 = GetNumAsyncPackages();
  fVar24 = __real_3a83126f;
  __return_storage_ptr__->NumAsyncPackages = iVar14;
  if ((param_1 < GMaximumFrameTimeToConsiderForHitchesAndBinning) ||
     (GMaximumFrameTimeToConsiderForHitchesAndBinning <= 0.0)) {
    __return_storage_ptr__->bBinThisFrame = true;
    if (fVar23 * fVar24 < param_1) {
      dVar5 = (double)(fVar23 * fVar24);
      if (dVar5 < __return_storage_ptr__->GameThreadTimeSeconds ||
          dVar5 == __return_storage_ptr__->GameThreadTimeSeconds) {
        __return_storage_ptr__->bGameThreadBound = true;
      }
      if (dVar5 < __return_storage_ptr__->RenderThreadTimeSeconds ||
          dVar5 == __return_storage_ptr__->RenderThreadTimeSeconds) {
        __return_storage_ptr__->bRenderThreadBound = true;
      }
      if (dVar5 < __return_storage_ptr__->RHIThreadTimeSeconds ||
          dVar5 == __return_storage_ptr__->RHIThreadTimeSeconds) {
        __return_storage_ptr__->bRHIThreadBound = true;
      }
      if (dVar5 < __return_storage_ptr__->GPUTimeSeconds ||
          dVar5 == __return_storage_ptr__->GPUTimeSeconds) {
        __return_storage_ptr__->bGPUBound = true;
      }
    }
  }
  else {
    __return_storage_ptr__->bBinThisFrame = false;
  }
  fVar23 = FEnginePerformanceTargets::GetHitchFrameTimeThresholdMS();
  if (fVar23 * fVar24 <= param_1) {
    dVar5 = this->LastHitchTime;
    fVar23 = FEnginePerformanceTargets::GetMinTimeBetweenHitchesMS();
    if (fVar23 * fVar24 <= (float)(dVar6 - dVar5)) {
      fVar24 = FEnginePerformanceTargets::GetHitchToNonHitchRatio();
      if (fVar24 * this->LastDeltaSeconds < param_1) {
        fVar24 = (float)uVar19 - __real_3e800000;
        if ((float)GGameThreadTime < fVar24) {
          if ((float)uVar15 < fVar24) {
            if ((float)uVar18 < fVar24) {
              if ((float)uVar13 < fVar24) {
                __return_storage_ptr__->HitchStatus = UnknownUnit;
                uVar20 = 1;
              }
              else {
                __return_storage_ptr__->HitchStatus = GPU;
                uVar20 = 5;
              }
            }
            else {
              __return_storage_ptr__->HitchStatus = RHIThread;
              uVar20 = 4;
            }
          }
          else {
            __return_storage_ptr__->HitchStatus = RenderThread;
            uVar20 = 3;
          }
        }
        else {
          __return_storage_ptr__->HitchStatus = GameThread;
          uVar20 = 2;
        }
        pUVar9 = GEngine;
        this_00 = &GEngine->OnHitchDetectedDelegate;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_2d8);
        puVar1 = &(pUVar9->OnHitchDetectedDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar10 = false;
        uVar19 = *(int *)&(pUVar9->OnHitchDetectedDelegate).field_0x10 - 1;
        if (-1 < (int)uVar19) {
          lVar22 = (longlong)(int)uVar19 << 4;
          bVar10 = false;
          do {
            uVar15 = uVar21;
            if ((int)uVar19 < *(int *)&(pUVar9->OnHitchDetectedDelegate).field_0x10) {
              uVar15 = ~uVar19 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar4 = (code *)swi(3);
              pFVar16 = (FFrameData *)(*pcVar4)();
              return pFVar16;
            }
            lVar2 = *(longlong *)&(pUVar9->OnHitchDetectedDelegate).field_0x8;
            if (((*(int *)(lVar22 + 8 + lVar2) == 0) ||
                (plVar3 = *(longlong **)(lVar22 + lVar2), plVar3 == (longlong *)0x0)) ||
               (cVar12 = (**(code **)(*plVar3 + 0x68))(plVar3,uVar20,param_1), cVar12 == '\0')) {
              bVar10 = true;
            }
            lVar22 = lVar22 + -0x10;
            uVar19 = uVar19 - 1;
            this = local_2e0;
          } while (-1 < (int)uVar19);
        }
        puVar1 = &(pUVar9->OnHitchDetectedDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar10) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_2d8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
        }
        this->LastHitchTime = dVar6;
      }
    }
  }
  this->LastDeltaSeconds = param_1;
  __return_storage_ptr__->DynamicResolutionScreenPercentage = 100.0;
  DynamicRenderScaling::TMap<float>::TMap<float>(&local_2b0.ResolutionFractionApproximations);
  DynamicRenderScaling::TMap<float>::TMap<float>(&local_2b0.ResolutionFractionUpperBounds);
  UEngine::GetDynamicResolutionCurrentStateInfos(GEngine,&local_2b0);
  if (local_2b0.Status - Enabled < 2) {
    iVar14 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    if ((local_2b0.ResolutionFractionApproximations.Array.ArrayNum != iVar14) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Array.Num() == FBudget::GetGlobalListSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                            ,0xd5,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar16 = (FFrameData *)(*pcVar4)();
      return pFVar16;
    }
    lVar22 = (longlong)GDynamicPrimaryResolutionFraction.BudgetId;
    if (GDynamicPrimaryResolutionFraction.BudgetId <
        local_2b0.ResolutionFractionApproximations.Array.ArrayNum) {
      uVar21 = (uint)~GDynamicPrimaryResolutionFraction.BudgetId >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      pFVar16 = (FFrameData *)(*pcVar4)();
      return pFVar16;
    }
    FVar17 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
             &local_2b0.ResolutionFractionApproximations;
    if (local_2b0.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FVar17 = local_2b0.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData;
    }
    __return_storage_ptr__->DynamicResolutionScreenPercentage =
         (double)(*(float *)((uchar *)((longlong)FVar17 + 8) + lVar22 * 0x10) * __real_42c80000);
  }
  if (local_2b0.ResolutionFractionUpperBounds.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FMemory::Free((void *)local_2b0.ResolutionFractionUpperBounds.Array.AllocatorInstance.
                          SecondaryData);
  }
  if (local_2b0.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FMemory::Free((void *)local_2b0.ResolutionFractionApproximations.Array.AllocatorInstance.
                          SecondaryData);
  }
  return __return_storage_ptr__;
}

// CreateFileNameForChart @ 1476fa9b0

FString * __cdecl
FPerformanceTrackingSystem::CreateFileNameForChart
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,FString *param_3)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_18,"Windows");
  ::FString::ConcatFC(&local_28,param_2,L"-FPS-");
  ::FString::ConcatFF(&local_38,&local_28,&local_18);
  ::FString::ConcatFF(__return_storage_ptr__,&local_38,param_3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateOutputDirectory @ 1476faa60

FString * __cdecl
FPerformanceTrackingSystem::CreateOutputDirectory
          (FString *__return_storage_ptr__,FDateTime *param_1)

{
  int iVar1;
  FString *pFVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  IFileManager *pIVar4;
  wchar_t *pwVar5;
  int iVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = FDateTime::ToString(param_1,&local_18);
  pTVar3 = &FPaths::ProfilingDir(&local_28)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,pTVar3,0xf - (uint)(pTVar3->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_38,L"FPSChartStats",0xd);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if ((local_38.ArrayNum != 0) || (iVar1 = 2, iVar6 == -1)) {
    iVar1 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,&local_38,iVar6 + iVar1);
  ::FString::PathAppend
            (__return_storage_ptr__,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar6);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pIVar4 = IFileManager::Get();
  if ((__return_storage_ptr__->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar4 + 0x60))(pIVar4,pwVar5,1);
  return __return_storage_ptr__;
}

// ShouldExcludeIdleTimeFromCharts @ 147729cd0

bool __cdecl FPerformanceTrackingSystem::ShouldExcludeIdleTimeFromCharts(void)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = GFPSChartExcludeIdleTime.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0] != 0;
}

// StartCharting @ 14772b010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPerformanceTrackingSystem::StartCharting(FPerformanceTrackingSystem *this)

{
  void *_Src;
  code *pcVar1;
  TConsoleVariableData<FString> *pTVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType _Str;
  longlong lVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  int local_78 [2];
  FString local_70;
  TArray<FString,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  
  QueryPerformanceCounter(&local_res10);
  dVar8 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->LastTimeChartCreationTicked = 0.0;
  this->FPSChartStartTime = dVar8 + __real_4170000000000000;
  GTargetFrameRatesForSummary.ArrayNum = 0;
  if ((GTargetFrameRatesForSummary.ArrayMax < 0) && (GTargetFrameRatesForSummary.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&GTargetFrameRatesForSummary.AllocatorInstance,0,
               &GTargetFrameRatesForSummary.ArrayMax);
  }
  pTVar2 = GFPSChartInterestingFramerates.Ref;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = pTVar2->ShadowedValue[0].Data.ArrayNum;
  lVar5 = (longlong)local_50.Data.ArrayNum;
  pFVar7 = pTVar2->ShadowedValue[0].Data.AllocatorInstance.Data;
  if (local_50.Data.ArrayNum == 0) {
    local_50.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50.Data.ArrayNum,0,(ForAnyElementType *)&local_50,local_50.Data.ArrayNum,
               &local_50.Data.ArrayMax);
    memcpy(local_50.Data.AllocatorInstance.Data,pFVar7,lVar5 * 2);
  }
  ::FString::ParseIntoArray(&local_50,&local_60,L",",true);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  iVar3 = local_60.ArrayNum;
  pFVar7 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 0x10;
  FVar6.Data = local_60.AllocatorInstance.Data;
  while( true ) {
    if (local_60.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar6.Data == pFVar7) {
      if (4 < (byte)LogChartCreation._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChartCreation);
      }
      DestructItems<FString,int>((FString *)local_60.AllocatorInstance.Data,local_60.ArrayNum);
      if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AllocatorInstance.Data);
      }
      return;
    }
    local_70.Data.ArrayNum = *(int *)(FVar6.Data + 8);
    lVar5 = (longlong)local_70.Data.ArrayNum;
    _Src = *(void **)FVar6.Data;
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_70.Data.ArrayNum == 0) {
      local_70.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_70.Data.ArrayNum,0,(ForAnyElementType *)&local_70,local_70.Data.ArrayNum,
                 &local_70.Data.ArrayMax);
      memcpy(local_70.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    }
    ::FString::TrimStartAndEndInline(&local_70);
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      _Str.Data = local_70.Data.AllocatorInstance.Data;
    }
    local_78[0] = _wtoi((wchar_t *)_Str.Data);
    if (((GTargetFrameRatesForSummary.AllocatorInstance.Data <= (FScriptContainerElement *)local_78)
        && ((FScriptContainerElement *)local_78 <
            GTargetFrameRatesForSummary.AllocatorInstance.Data +
            (longlong)GTargetFrameRatesForSummary.ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    if (GTargetFrameRatesForSummary.ArrayNum == GTargetFrameRatesForSummary.ArrayMax) {
      GTargetFrameRatesForSummary.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&GTargetFrameRatesForSummary.AllocatorInstance,
                      &GTargetFrameRatesForSummary.ArrayMax);
    }
    lVar5 = (longlong)GTargetFrameRatesForSummary.ArrayNum;
    GTargetFrameRatesForSummary.ArrayNum = GTargetFrameRatesForSummary.ArrayNum + 1;
    *(int *)(GTargetFrameRatesForSummary.AllocatorInstance.Data + lVar5 * 4) = local_78[0];
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    FVar6.Data = FVar6.Data + 0x10;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// StopCharting @ 14772cc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPerformanceTrackingSystem::StopCharting(FPerformanceTrackingSystem *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  this->FPSChartStopTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  if (4 < (byte)LogChartCreation._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChartCreation);
    return;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 14

// FNavRegenTimeSliceManager @ 146d73bd0

FNavRegenTimeSliceManager * __thiscall
FNavRegenTimeSliceManager::FNavRegenTimeSliceManager(FNavRegenTimeSliceManager *this)

{
  *(undefined8 *)&(this->TimeSlicer).DebugLongTimeSliceFunction = 0;
  *(undefined8 *)&(this->TimeSlicer).DebugLongTimeSliceFunction.field_0x28 = 0;
  (this->TimeSlicer).OriginalDuration = 0.0;
  (this->TimeSlicer).RemainingDuration = 0.0;
  (this->TimeSlicer).StartTime = 0.0;
  (this->TimeSlicer).TimeLastTested = 0.0;
  (this->TimeSlicer).bTimeSliceFinishedCached = false;
  (this->TimeSlicer).DebugLongTimeSliceDuration = 0.0;
  (this->TimeSlicer).DebugSectionName = FNavigationSystem::DebugTimeSliceDefaultSectionName;
  this->MinTimeSliceDuration = 0.00075;
  this->MaxTimeSliceDuration = 0.004;
  this->FrameNumOld = 0x7ffffffffffffffe;
  this->TimeLastCall = -1.0;
  (this->MovingWindowTileRegenTime).TotalValues = 0.0;
  (this->MovingWindowTileRegenTime).AverageValue = 0.0;
  (this->MovingWindowTileRegenTime).RemoveNextIdx = 0;
  (this->MovingWindowTileRegenTime).NumValuesUsed = 0;
  (this->MovingWindowDeltaTime).TotalValues = 0.0;
  (this->MovingWindowDeltaTime).AverageValue = 0.0;
  (this->MovingWindowDeltaTime).RemoveNextIdx = 0;
  (this->MovingWindowDeltaTime).NumValuesUsed = 0;
  (this->TileWaitTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileWaitTimes).ArrayNum = 0;
  (this->TileWaitTimes).ArrayMax = 0;
  (this->TileHistoryData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileHistoryData).ArrayNum = 0;
  (this->TileHistoryData).ArrayMax = 0;
  this->TileHistoryStartTime = 0.0;
  this->MaxDesiredTileRegenDuration = 0.7;
  this->NavDataIdx = 0;
  this->bDoTimeSlicedUpdate = false;
  return this;
}

// ~FNavRegenTimeSliceManager @ 146d782b0

void __thiscall
FNavRegenTimeSliceManager::~FNavRegenTimeSliceManager(FNavRegenTimeSliceManager *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  DestructItems<TArray<FTileHistoryData,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FTileHistoryData,TSizedDefaultAllocator<32>_> *)
             (this->TileHistoryData).AllocatorInstance.Data,(this->TileHistoryData).ArrayNum);
  pFVar1 = (this->TileHistoryData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<double,TSizedDefaultAllocator<32>_>,int>
            ((TArray<double,TSizedDefaultAllocator<32>_> *)
             (this->TileWaitTimes).AllocatorInstance.Data,(this->TileWaitTimes).ArrayNum);
  pFVar1 = (this->TileWaitTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&(this->TimeSlicer).DebugLongTimeSliceFunction != 0) {
    plVar2 = *(longlong **)&(this->TimeSlicer).DebugLongTimeSliceFunction.field_0x28;
    plVar3 = (longlong *)&(this->TimeSlicer).DebugLongTimeSliceFunction.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000146d7831d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// CalcAverageDeltaTime @ 146d85c20

void __thiscall
FNavRegenTimeSliceManager::CalcAverageDeltaTime(FNavRegenTimeSliceManager *this,ulong64 param_1)

{
  int *piVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar4 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (this->FrameNumOld + 1 == param_1) {
    uVar2 = (this->MovingWindowDeltaTime).NumValuesUsed;
    dVar5 = 0.0;
    dVar3 = dVar4 - this->TimeLastCall;
    if (uVar2 == 0x100) {
      uVar2 = (this->MovingWindowDeltaTime).RemoveNextIdx;
      dVar5 = (this->MovingWindowDeltaTime).ValuesArray.Elements[uVar2];
      (this->MovingWindowDeltaTime).ValuesArray.Elements[uVar2] = dVar3;
      uVar2 = (this->MovingWindowDeltaTime).RemoveNextIdx + 1U & 0x800000ff;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffff00) + 1;
      }
      (this->MovingWindowDeltaTime).RemoveNextIdx = uVar2;
    }
    else {
      (this->MovingWindowDeltaTime).ValuesArray.Elements[uVar2] = dVar3;
      piVar1 = &(this->MovingWindowDeltaTime).NumValuesUsed;
      *piVar1 = *piVar1 + 1;
    }
    dVar3 = ((this->MovingWindowDeltaTime).TotalValues - dVar5) + dVar3;
    (this->MovingWindowDeltaTime).TotalValues = dVar3;
    (this->MovingWindowDeltaTime).AverageValue =
         dVar3 / (double)(this->MovingWindowDeltaTime).NumValuesUsed;
  }
  this->TimeLastCall = dVar4;
  this->FrameNumOld = param_1;
  return;
}

// CalcTimeSliceDuration @ 146d85e40

void __thiscall
FNavRegenTimeSliceManager::CalcTimeSliceDuration
          (FNavRegenTimeSliceManager *this,
          TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  double *pdVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_> *pTVar16;
  double dVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar21 [16];
  undefined1 local_res8 [8];
  TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  FName local_b8;
  FString local_b0;
  FString local_a0 [2];
  
  dVar17 = (this->MovingWindowDeltaTime).AverageValue;
  fVar18 = (float)dVar17;
  dVar17 = (double)fVar18 - dVar17;
  local_res10 = param_1;
  if ((__real_3fb0000000000000 <
       (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (fVar18 <= 0.0) {
    fVar18 = __real_3d088889;
  }
  dVar17 = (this->MovingWindowTileRegenTime).AverageValue;
  uVar19 = SUB84(dVar17,0);
  uVar20 = (undefined4)((ulonglong)dVar17 >> 0x20);
  if (dVar17 <= 0.0) {
    uVar19 = (undefined4)__real_3f647ae147ae147b;
    uVar20 = (undefined4)((ulonglong)__real_3f647ae147ae147b >> 0x20);
  }
  iVar12 = 0;
  pFVar9 = (param_3->AllocatorInstance).Data;
  iVar2 = param_3->ArrayNum;
  pFVar13 = pFVar9 + (longlong)iVar2 * 8;
  auVar21 = roundps(unaff_XMM8,ZEXT416((uint)(this->MaxDesiredTileRegenDuration / fVar18)),1);
  while( true ) {
    if (param_3->ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar9 == pFVar13) break;
    if (*(double *)pFVar9 <= 0.0) {
      pFVar9 = pFVar9 + 8;
    }
    else {
      iVar12 = iVar12 + (int)(*(double *)pFVar9 / (double)CONCAT44(uVar20,uVar19));
      pFVar9 = pFVar9 + 8;
    }
  }
  uVar11 = 0;
  lVar14 = 0;
  bVar6 = __CsvProfilerStat633 == false;
  dVar17 = ((double)(iVar12 + param_2) * (double)CONCAT44(uVar20,uVar19)) / (double)auVar21._0_4_;
  if (this->MaxTimeSliceDuration <= dVar17) {
    dVar17 = this->MaxTimeSliceDuration;
  }
  if (dVar17 <= this->MinTimeSliceDuration) {
    dVar17 = this->MinTimeSliceDuration;
  }
  (this->TimeSlicer).TimeLastTested = 0.0;
  (this->TimeSlicer).StartTime = 0.0;
  (this->TimeSlicer).bTimeSliceFinishedCached = false;
  (this->TimeSlicer).OriginalDuration = dVar17;
  (this->TimeSlicer).RemainingDuration = dVar17;
  if (bVar6) {
    FCsvProfilerTrace::OutputInlineStat
              ("NavTileRegenTimeSliceTimeMs",_GCsvCategory_NavigationSystem.Index);
    __CsvProfilerStat633 = true;
  }
  dVar5 = __real_408f400000000000;
  FCsvProfiler::RecordCustomStat
            ("NavTileRegenTimeSliceTimeMs",_GCsvCategory_NavigationSystem.Index,
             (float)(dVar17 * __real_408f400000000000),Set);
  if (__CsvProfilerStat634 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("NavTileNumTilesToRegen",_GCsvCategory_NavigationSystem.Index);
    __CsvProfilerStat634 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NavTileNumTilesToRegen",_GCsvCategory_NavigationSystem.Index,param_2,Set);
  if (__CsvProfilerStat635 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("NavTilesToAddForLongCurrentTileRegen",_GCsvCategory_NavigationSystem.Index);
    __CsvProfilerStat635 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NavTilesToAddForLongCurrentTileRegen",_GCsvCategory_NavigationSystem.Index,iVar12,Set)
  ;
  if (__CsvProfilerStat636 == false) {
    FCsvProfilerTrace::OutputInlineStat("NavTileAvRegenTimeMs",_GCsvCategory_NavigationSystem.Index)
    ;
    __CsvProfilerStat636 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NavTileAvRegenTimeMs",_GCsvCategory_NavigationSystem.Index,
             (float)((this->MovingWindowTileRegenTime).AverageValue * dVar5),Set);
  if (__CsvProfilerStat637 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("NavTileAvRegenDeltaTimeMs",_GCsvCategory_NavigationSystem.Index);
    __CsvProfilerStat637 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NavTileAvRegenDeltaTimeMs",_GCsvCategory_NavigationSystem.Index,
             (float)((this->MovingWindowDeltaTime).AverageValue * dVar5),Set);
  lVar15 = lVar14;
  pTVar16 = local_res10;
  if (0 < local_res10->ArrayNum) {
    do {
      if ((-1 < (int)uVar11) && ((int)uVar11 < (this->TileWaitTimes).ArrayNum)) {
        dVar17 = 0.0;
        uVar7 = 0;
        if ((int)uVar11 < (this->TileWaitTimes).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (this->TileWaitTimes).AllocatorInstance.Data;
        iVar2 = *(int *)(pFVar13 + lVar15 + 8);
        if (iVar2 == 0) {
          dVar17 = 0.0;
        }
        else {
          pdVar10 = *(double **)(pFVar13 + lVar15);
          pdVar1 = pdVar10 + iVar2;
          while( true ) {
            if (*(int *)(pFVar13 + lVar15 + 8) != iVar2) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res8);
            }
            if (pdVar10 == pdVar1) break;
            dVar17 = dVar17 + *pdVar10;
            pdVar10 = pdVar10 + 1;
          }
          dVar17 = dVar17 / (double)*(int *)(pFVar13 + lVar15 + 8);
          pTVar16 = local_res10;
        }
        uVar7 = 0;
        if ((int)uVar11 < pTVar16->ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)((pTVar16->AllocatorInstance).Data + lVar14);
        if (lVar3 == 0) {
          ::FString::FString(&local_b0,L"None");
        }
        else {
          local_res20 = *(FName *)(lVar3 + 0x18);
          ::FName::ToString(&local_res20,&local_b0);
        }
        ::FString::PrintfImpl(local_a0,L"NavTileAvTileWaitTimeMs_%s");
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        uVar7 = _GCsvCategory_NavTasksDelays.Index;
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_a0[0].Data.ArrayNum != 0) {
          FVar8.Data = local_a0[0].Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_b8,(wchar_t *)FVar8.Data);
        FCsvProfiler::RecordCustomStat(&local_b8,uVar7,(float)(dVar17 * dVar5),Set);
        if ((int)uVar11 < (this->TileWaitTimes).ArrayNum) {
          uVar7 = 0;
          if ((int)uVar11 < (this->TileWaitTimes).ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar13 = (this->TileWaitTimes).AllocatorInstance.Data + lVar15;
          iVar2 = *(int *)(pFVar13 + 0xc);
          *(undefined4 *)&pFVar13[8].field_0x0 = 0;
          if (iVar2 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)pFVar13,0,(int *)(pFVar13 + 0xc));
          }
        }
        if (local_a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0[0].Data.AllocatorInstance.Data);
        }
      }
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 8;
      lVar15 = lVar15 + 0x10;
    } while ((int)uVar11 < pTVar16->ArrayNum);
  }
  return;
}

// GetAverageTileWaitTime @ 146d99960

double __thiscall
FNavRegenTimeSliceManager::GetAverageTileWaitTime(FNavRegenTimeSliceManager *this,int param_1)

{
  double *pdVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  double *pdVar8;
  double dVar9;
  undefined1 local_res10 [8];
  
  dVar9 = 0.0;
  lVar7 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < (this->TileWaitTimes).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (this->TileWaitTimes).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      dVar9 = (double)(*pcVar4)();
      return dVar9;
    }
    pFVar3 = (this->TileWaitTimes).AllocatorInstance.Data;
    iVar2 = *(int *)(pFVar3 + lVar7 * 0x10 + 8);
    if (iVar2 != 0) {
      pdVar8 = *(double **)(pFVar3 + lVar7 * 0x10);
      pdVar1 = pdVar8 + iVar2;
      while( true ) {
        if (*(int *)(pFVar3 + lVar7 * 0x10 + 8) != iVar2) {
          `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pdVar8 == pdVar1) break;
        dVar9 = dVar9 + *pdVar8;
        pdVar8 = pdVar8 + 1;
      }
      return dVar9 / (double)*(int *)(pFVar3 + lVar7 * 0x10 + 8);
    }
  }
  return 0.0;
}

// LogTileStatistics @ 146da6cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavRegenTimeSliceManager::LogTileStatistics
          (FNavRegenTimeSliceManager *this,
          TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  double dVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  FIdentityFunctor local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  uint local_138;
  longlong local_130;
  longlong local_128;
  uint local_120;
  longlong local_118;
  FString local_110;
  LARGE_INTEGER local_100;
  longlong local_f8;
  FName local_f0;
  longlong local_e8;
  FLogScopedCategoryAndVerbosityOverride local_e0 [13];
  
  if (4 < (byte)LogNavigationHistory._0_1_) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (local_e0,(FName)LogNavigationHistory._4_8_,Log);
    uVar8 = GFrameCounter % 0x3c;
    QueryPerformanceCounter(&local_100);
    dVar3 = __real_3feccccccccccccd;
    uVar12 = 0;
    if (uVar8 == 0) {
      local_128 = 0;
      lVar10 = 0;
      for (; local_130 = lVar10, (int)uVar12 < param_1->ArrayNum; uVar12 = uVar12 + 1) {
        if ((-1 < (int)uVar12) && ((int)uVar12 < (this->TileHistoryData).ArrayNum)) {
          uVar6 = 0;
          if ((int)uVar12 < (this->TileHistoryData).ArrayNum) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->TileHistoryData).AllocatorInstance.Data;
          local_148.Data = (FScriptContainerElement *)0x0;
          local_140 = *(int *)(pFVar1 + lVar10 + 8);
          lVar9 = (longlong)local_140;
          _Src = *(void **)(pFVar1 + lVar10);
          if (local_140 == 0) {
            local_13c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,local_140,0,&local_148,local_140,&local_13c);
            memcpy(local_148.Data,_Src,lVar9 << 5);
          }
          if (0 < local_140) {
            uVar7 = local_140 / 2;
            local_138 = (uint)((double)local_140 * dVar3);
            AlgoImpl::
            IntroSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,_FNavRegenTimeSliceManager::LogTileStatistics_::__l18::<lambda_1>_>_>
                      ((FTileHistoryData *)local_148.Data,local_140,local_res18[0],
                       (<lambda_1> *)local_res18);
            uVar11 = ~uVar7 >> 0x1f;
            uVar6 = 0;
            if ((int)uVar7 < local_140) {
              uVar6 = uVar11;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar10 = (longlong)(int)local_138;
            local_118 = (longlong)(int)uVar7 * 0x20;
            local_120 = ~local_138 >> 0x1f;
            uVar6 = 0;
            if ((int)local_138 < local_140) {
              uVar6 = local_120;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_f8 = lVar10 * 0x20;
            uVar6 = 0;
            if ((int)uVar7 < local_140) {
              uVar6 = uVar11;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar4.Data = local_148.Data;
            uVar6 = 0;
            if ((int)uVar7 < local_140) {
              uVar6 = uVar11;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_e8 = *(longlong *)(FVar4.Data + local_118 + 0x18) -
                       *(longlong *)(local_148.Data + local_118 + 0x10);
            AlgoImpl::
            IntroSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,_FNavRegenTimeSliceManager::LogTileStatistics_::__l18::<lambda_2>_>_>
                      ((FTileHistoryData *)local_148.Data,local_140,local_res18[0],
                       (<lambda_2> *)local_res20);
            uVar6 = 0;
            if ((int)uVar7 < local_140) {
              uVar6 = uVar11;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar6 = 0;
            if ((int)local_138 < local_140) {
              uVar6 = local_120;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar10 = local_130;
            if (4 < (byte)LogNavigationHistory._0_1_) {
              uVar6 = 0;
              if ((int)uVar12 < param_1->ArrayNum) {
                uVar6 = ~uVar12 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              lVar10 = *(longlong *)((param_1->AllocatorInstance).Data + local_128);
              if (lVar10 == 0) {
                ::FString::FString(&local_110,L"None");
              }
              else {
                local_f0 = *(FName *)(lVar10 + 0x18);
                ::FName::ToString(&local_f0,&local_110);
              }
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogNavigationHistory);
              lVar10 = local_130;
              if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110.Data.AllocatorInstance.Data);
                lVar10 = local_130;
              }
            }
          }
          if ((FTileHistoryData *)local_148.Data != (FTileHistoryData *)0x0) {
            FMemory::Free(local_148.Data);
          }
        }
        lVar10 = lVar10 + 0x10;
        local_128 = local_128 + 8;
      }
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigationHistory,Log);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(local_e0);
  }
  return;
}

// PushTileHistoryData @ 146dad520

void __thiscall
FNavRegenTimeSliceManager::PushTileHistoryData
          (FNavRegenTimeSliceManager *this,int param_1,FTileHistoryData *param_2)

{
  undefined8 *puVar1;
  long64 *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long64 lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  if ((-1 < param_1) && (param_1 < (this->TileHistoryData).ArrayNum)) {
    uVar8 = 0;
    if (param_1 < (this->TileHistoryData).ArrayNum) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10 = (this->TileHistoryData).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    if (((*(FTileHistoryData **)&pFVar10->field_0x0 <= param_2) &&
        (param_2 < *(FTileHistoryData **)&pFVar10->field_0x0 + *(int *)(pFVar10 + 0xc))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = *(int *)&pFVar10[8].field_0x0;
    if (iVar9 == *(int *)(pFVar10 + 0xc)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 0xc));
    }
    *(int *)&pFVar10[8].field_0x0 = iVar9 + 1;
    uVar5 = *(undefined8 *)&param_2->TileRegenTime;
    lVar3 = *(longlong *)&pFVar10->field_0x0;
    puVar1 = (undefined8 *)(lVar3 + (longlong)iVar9 * 0x20);
    *puVar1 = *(undefined8 *)param_2;
    puVar1[1] = uVar5;
    lVar6 = param_2->EndRegenFrame;
    plVar2 = (long64 *)(lVar3 + (longlong)iVar9 * 0x20 + 0x10);
    *plVar2 = param_2->StartRegenFrame;
    plVar2[1] = lVar6;
  }
  return;
}

// PushTileWaitTime @ 146dad660

void __thiscall
FNavRegenTimeSliceManager::PushTileWaitTime
          (FNavRegenTimeSliceManager *this,int param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double local_res18 [2];
  
  if ((-1 < param_1) && (param_1 < (this->TileWaitTimes).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->TileWaitTimes).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    local_res18[0] = param_2;
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = (this->TileWaitTimes).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    if (((*(double **)&pFVar5->field_0x0 <= local_res18) &&
        (local_res18 < *(double **)&pFVar5->field_0x0 + *(int *)(pFVar5 + 0xc))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = *(int *)&pFVar5[8].field_0x0;
    if (iVar4 == *(int *)(pFVar5 + 0xc)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar5,(int *)(pFVar5 + 0xc));
    }
    *(int *)&pFVar5[8].field_0x0 = iVar4 + 1;
    *(double *)(*(longlong *)&pFVar5->field_0x0 + (longlong)iVar4 * 8) = local_res18[0];
  }
  return;
}

// ResetTileHistoryData @ 146db7e80

void __thiscall
FNavRegenTimeSliceManager::ResetTileHistoryData
          (FNavRegenTimeSliceManager *this,
          TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TArray<FTileHistoryData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  
  uVar2 = param_1->ArrayNum;
  this_00 = &this->TileHistoryData;
  iVar3 = (this->TileHistoryData).ArrayNum;
  piVar1 = &(this->TileHistoryData).ArrayNum;
  if (iVar3 < (int)uVar2) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar2 - iVar3,&this_00->AllocatorInstance,piVar1,
                       &(this->TileHistoryData).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
           (longlong)(int)(uVar2 - iVar3) << 4);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar3) {
      uVar8 = iVar3 - uVar2;
      if ((int)(uVar8 | uVar2) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar8 != 0) {
        TArray<TArray<FTileHistoryData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_00,uVar2,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,&(this->TileHistoryData).ArrayMax);
      }
    }
  }
  pFVar7 = (this_00->AllocatorInstance).Data;
  iVar3 = *piVar1;
  pFVar9 = pFVar7 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TArray<FTileHistoryData,TSizedDefaultAllocator<32>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    *(undefined4 *)&pFVar7[8].field_0x0 = 0;
    if (*(int *)(pFVar7 + 0xc) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
    }
    pFVar7 = pFVar7 + 0x10;
  }
  QueryPerformanceCounter(&local_res10);
  this->TileHistoryStartTime =
       (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}

// ResetTileWaitTime @ 146db8020

void __thiscall
FNavRegenTimeSliceManager::ResetTileWaitTime(FNavRegenTimeSliceManager *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  
  if ((-1 < param_1) && (param_1 < (this->TileWaitTimes).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->TileWaitTimes).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = (this->TileWaitTimes).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    iVar1 = *(int *)(pFVar5 + 0xc);
    *(undefined4 *)&pFVar5[8].field_0x0 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pFVar5,0,(int *)(pFVar5 + 0xc));
    }
  }
  return;
}

// ResetTileWaitTimeArrays @ 146db80e0

void __thiscall
FNavRegenTimeSliceManager::ResetTileWaitTimeArrays
          (FNavRegenTimeSliceManager *this,
          TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TArray<double,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  uVar2 = param_1->ArrayNum;
  this_00 = &this->TileWaitTimes;
  iVar3 = (this->TileWaitTimes).ArrayNum;
  piVar1 = &(this->TileWaitTimes).ArrayNum;
  if (iVar3 < (int)uVar2) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar2 - iVar3,&this_00->AllocatorInstance,piVar1,
                       &(this->TileWaitTimes).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
           (longlong)(int)(uVar2 - iVar3) << 4);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar3) {
      uVar8 = iVar3 - uVar2;
      if ((int)(uVar8 | uVar2) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar8 != 0) {
        TArray<TArray<double,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar2,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,&(this->TileWaitTimes).ArrayMax);
      }
    }
  }
  pFVar7 = (this_00->AllocatorInstance).Data;
  iVar3 = *piVar1;
  pFVar9 = pFVar7 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TArray<double,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    *(undefined4 *)&pFVar7[8].field_0x0 = 0;
    if (*(int *)(pFVar7 + 0xc) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
    }
    pFVar7 = pFVar7 + 0x10;
  }
  return;
}

// SetMaxDesiredTileRegenDuration @ 146db8ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavRegenTimeSliceManager::SetMaxDesiredTileRegenDuration
          (FNavRegenTimeSliceManager *this,float param_1)

{
  this->MaxDesiredTileRegenDuration = param_1;
  if (5 < (byte)LogNavigationDataBuild._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDataBuild);
    return;
  }
  return;
}

// SetMaxTimeSliceDuration @ 146db8fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavRegenTimeSliceManager::SetMaxTimeSliceDuration(FNavRegenTimeSliceManager *this,double param_1)

{
  this->MaxTimeSliceDuration = param_1;
  if (5 < (byte)LogNavigationDataBuild._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDataBuild);
    return;
  }
  return;
}

// SetMinTimeSliceDuration @ 146db8fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavRegenTimeSliceManager::SetMinTimeSliceDuration(FNavRegenTimeSliceManager *this,double param_1)

{
  this->MinTimeSliceDuration = param_1;
  if (5 < (byte)LogNavigationDataBuild._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDataBuild);
    return;
  }
  return;
}


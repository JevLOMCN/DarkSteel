// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// DoTask @ 148638370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParallelClothTask::DoTask
          (FParallelClothTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  USkeletalMeshComponent *pUVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  USkeletalMesh *pUVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ClothTotalTime> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FNameEntryId FVar16;
  FScriptContainerElement *pFVar17;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FName local_58;
  byte local_50;
  FStatMessage local_48;
  
  pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(this->SkeletalMeshComponent);
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_58,(UObjectBaseUtility *)pUVar10);
  FVar16.Value = 0;
  FVar12 = StatPtr_STAT_ClothTotalTime;
  if (StatPtr_STAT_ClothTotalTime == (FThreadSafeStaticStat<FStat_STAT_ClothTotalTime>)0x0) {
    pFVar11 = ::FName::FName(&local_res20,"STAT_ClothTotalTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ClothTotalTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothTotalTime,*pFVar11,
                        L"Cloth Total","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshComponentPhysics.cpp"
                   ,0xd63);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      FVar16.Value = FVar14.Value;
      goto LAB_1486384e5;
    }
  }
  bVar7 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_1486384e5:
  if (`public:_void___cdecl_FParallelClothTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat3428 == false) {
    FCsvProfilerTrace::OutputInlineStat("Cloth",_GCsvCategory_Animation.Index);
    `public:_void___cdecl_FParallelClothTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat3428 = true;
  }
  uVar13 = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat("Cloth",_GCsvCategory_Animation.Index,"CSV_Cloth");
  pUVar4 = this->SkeletalMeshComponent;
  iVar3 = (pUVar4->ClothingSimulationInstances).ArrayNum;
  pFVar17 = (pUVar4->ClothingSimulationInstances).AllocatorInstance.Data;
  pFVar2 = pFVar17 + (longlong)iVar3 * 0x28;
  while( true ) {
    if ((pUVar4->ClothingSimulationInstances).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FClothingSimulationInstance,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar17 == pFVar2) break;
    cVar9 = (**(code **)(**(longlong **)pFVar17 + 0x38))
                      (*(longlong **)pFVar17,*(undefined4 *)(pFVar17 + 0x20));
    lVar5 = **(longlong **)pFVar17;
    if (cVar9 == '\0') {
      (**(code **)(lVar5 + 0x48))();
      pFVar17 = pFVar17 + 0x28;
    }
    else {
      (**(code **)(lVar5 + 0x40))(*(longlong **)pFVar17,*(undefined8 *)(pFVar17 + 8));
      pFVar17 = pFVar17 + 0x28;
    }
  }
  FCsvProfiler::EndStat("Cloth",uVar13);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if ((local_50 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_50 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_50 & 4) != 0) {
    FThreadStats::AddMessage(local_58,CycleScopeEnd);
  }
  return;
}

// GetDesiredThread @ 148648ae0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl FParallelClothTask::GetDesiredThread(void)

{
  code *pcVar1;
  int iVar2;
  TConsoleVariableData<int> *pTVar3;
  Type TVar4;
  bool bVar5;
  Type TVar6;
  longlong lVar7;
  Type TVar8;
  
  pTVar3 = CVarEnableClothPhysicsUseTaskThread.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  TVar8 = CPrio_FParallelClothTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar4 = CPrio_FParallelClothTask.TaskPriority;
  TVar6 = CPrio_FParallelClothTask.ThreadPriority;
  if (*(int *)((longlong)pTVar3->ShadowedValue + lVar7) != 0) {
    iVar2 = ENamedThreads::bHasHighPriorityThreads;
    if (((CPrio_FParallelClothTask.ThreadPriority == HighThreadPriority) ||
        (iVar2 = ENamedThreads::bHasBackgroundThreads,
        CPrio_FParallelClothTask.ThreadPriority == BackgroundThreadPriority)) && (iVar2 == 0)) {
      if (((CPrio_FParallelClothTask.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority)
           != MainQueue) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                             ,0xcd,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        TVar6 = (*pcVar1)();
        return TVar6;
      }
    }
    else {
      if ((((CPrio_FParallelClothTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
            (CPrio_FParallelClothTask.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask) ||
          ((CPrio_FParallelClothTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                             ,0xb1,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        TVar6 = (*pcVar1)();
        return TVar6;
      }
      TVar8 = TVar6 | TVar4;
    }
    return TVar8 | AnyNormalThreadNormalTask;
  }
  return GameThread;
}


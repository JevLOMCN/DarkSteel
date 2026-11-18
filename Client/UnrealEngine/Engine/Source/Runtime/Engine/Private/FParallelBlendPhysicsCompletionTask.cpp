// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoTask @ 1482f4b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParallelBlendPhysicsCompletionTask::DoTask
          (FParallelBlendPhysicsCompletionTask *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FBaseGraphTask *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_AnimGameThreadTime> FVar9;
  USkeletalMeshComponent *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  bool bVar14;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_38;
  
  if (!`public:_void___cdecl_FParallelBlendPhysicsCompletionTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
       ::__l2::__CsvProfilerStat99) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Physics");
    `public:_void___cdecl_FParallelBlendPhysicsCompletionTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat99 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Physics","CSV_Physics");
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Yellow,"FParallelBlendPhysicsCompletionTask_DoTask");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FParallelBlendPhysicsCompletionTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId100,"FParallelBlendPhysicsCompletionTask_DoTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysAnim.cpp"
               ,100);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FParallelBlendPhysicsCompletionTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId100);
  }
  FVar13.Value = 0;
  FVar9 = StatPtr_STAT_AnimGameThreadTime;
  if (StatPtr_STAT_AnimGameThreadTime == (FThreadSafeStaticStat<FStat_STAT_AnimGameThreadTime>)0x0)
  {
    pFVar8 = ::FName::FName(&local_res20,"STAT_AnimGameThreadTime");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_AnimGameThreadTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimGameThreadTime,*pFVar8,
                       L"AnimGameThreadTime","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysAnim.cpp"
                   ,0x65);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
      FVar13.Value = FVar11.Value;
      goto LAB_1482f4d00;
    }
  }
  bVar6 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_1482f4d00:
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    USkeletalMeshComponent::SwapEvaluationContextBuffers(this_00);
    USkeletalMeshComponent::FinalizeAnimationUpdate(this_00);
    pFVar4 = (this_00->ParallelAnimationEvaluationTask).Reference;
    if (pFVar4 != (FBaseGraphTask *)0x0) {
      (this_00->ParallelAnimationEvaluationTask).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar4->field_0x30;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
      }
    }
    pFVar4 = (this_00->ParallelBlendPhysicsCompletionTask).Reference;
    if (pFVar4 != (FBaseGraphTask *)0x0) {
      (this_00->ParallelBlendPhysicsCompletionTask).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar4->field_0x30;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FCsvProfiler::EndExclusiveStat("Physics");
  return;
}


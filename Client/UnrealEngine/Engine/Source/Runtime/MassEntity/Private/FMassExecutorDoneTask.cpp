// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// DoTask @ 147213cc0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Mass::Executor::FMassExecutorDoneTask::DoTask
          (FMassExecutorDoneTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  FMassEntityManager *pFVar2;
  FMassCommandBuffer *this_00;
  FMassCommandBuffer *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Mass_Total> FVar10;
  undefined8 uVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar12;
  longlong *plVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FNameEntryId FVar16;
  bool bVar17;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_38;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId132,"Flush Deferred Commands Parallel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
               ,0x84);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId132);
  }
  FVar16.Value = 0;
  FVar10 = StatPtr_STAT_Mass_Total;
  if (StatPtr_STAT_Mass_Total == (FThreadSafeStaticStat<FStat_STAT_Mass_Total>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_Mass_Total");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Mass_Total>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Mass_Total,*pFVar9,
                        L"Mass Total Frame Time","STATGROUP_Mass","STATCAT_Advanced",L"Mass",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar6 = false;
  bVar8 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                   ,0x85);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      FVar16.Value = FVar14.Value;
      goto LAB_147213e65;
    }
  }
  bVar7 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_147213e65:
  pFVar2 = (this->ExecutionContext).EntityManager.Object;
  this_00 = (this->ExecutionContext).DeferredCommandBuffer.Object;
  pFVar3 = (pFVar2->DeferredCommandBuffers).Elements[pFVar2->OpenedCommandBufferIndex].Object;
  if (this_00 != pFVar3) {
    FMassCommandBuffer::MoveAppend(this_00,pFVar3);
  }
  if (5 < (byte)LogMass._0_1_) {
    Logging::Private::BasicLog<6>
              (&`public:_void___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogMass);
  }
  (this->ExecutionContext).bFlushDeferredCommands = true;
  if ((this->ExecutionContext).DeferredCommandBuffer.Object != (FMassCommandBuffer *)0x0) {
    FMassEntityManager::FlushCommands
              ((this->ExecutionContext).EntityManager.Object,
               &(this->ExecutionContext).DeferredCommandBuffer);
  }
  Core::Private::Function::CheckCallable(*(void **)&this->OnDoneNotification);
  pcVar4 = *(code **)&this->OnDoneNotification;
  plVar5 = *(longlong **)&(this->OnDoneNotification).field_0x28;
  plVar13 = (longlong *)&(this->OnDoneNotification).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar13 = plVar5;
  }
  uVar11 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar11);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar16.Value;
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
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}


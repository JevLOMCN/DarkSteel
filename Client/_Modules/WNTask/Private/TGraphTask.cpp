// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 1

// ExecuteTask @ 14a6ad6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FWN_GraphTaskForStep>::ExecuteTask(TGraphTask<FWN_GraphTaskForStep> *this)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  EWN_TaskCallbackResult EVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FWN_GraphTaskForStep> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  FVar9 = StatPtr_STAT_TaskGraph_OtherTasks;
  if (StatPtr_STAT_TaskGraph_OtherTasks ==
      (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"STAT_TaskGraph_OtherTasks");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_OtherTasks,*pFVar8,
                       L"Other TaskGraph Tasks","STATGROUP_Threading","STATCAT_Advanced",
                       L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a6ad850;
    }
  }
  bVar4 = false;
  FVar12 = local_48;
  FVar11.Value = 0;
LAB_14a6ad850:
  EVar7 = FWN_Task::TryInvokeCallback
                    (*(FWN_Task **)(this->TaskStorage).Pad,(this->TaskStorage).Pad[8]);
  *(undefined8 *)(*(longlong *)(this->TaskStorage).Pad + 0x138) = 0;
  if (EVar7 == Continued) {
    FWN_GraphTaskForStep::CreateGraphTask
              (*(FWN_Task **)(this->TaskStorage).Pad,(this->TaskStorage).Pad[8],
               (uint)(this->TaskStorage).Pad[0xc]);
  }
  LOCK();
  FWN_Task::S_Statistics.NumGraphTasks = FWN_Task::S_Statistics.NumGraphTasks + -1;
  UNLOCK();
  LOCK();
  piVar2 = (int *)(*(longlong *)(this->TaskStorage).Pad + 0xf8);
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (this != (TGraphTask<FWN_GraphTaskForStep> *)0x0) {
    LOCK();
    plVar1 = &this->_padding_;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}


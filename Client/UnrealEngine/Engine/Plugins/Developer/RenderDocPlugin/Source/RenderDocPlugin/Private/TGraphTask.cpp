// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 1

// ExecuteTask @ 14e2c9c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderDocAsyncGraphTask>::ExecuteTask(TGraphTask<FRenderDocAsyncGraphTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  uchar *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks> FVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  uchar *puVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uchar *puVar16;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FRenderDocAsyncGraphTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  FVar10 = StatPtr_STAT_TaskGraph_OtherTasks;
  if (StatPtr_STAT_TaskGraph_OtherTasks ==
      (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_TaskGraph_OtherTasks");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_OtherTasks,*pFVar9,
                        L"Other TaskGraph Tasks","STATGROUP_Threading","STATCAT_Advanced",
                        L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_14e2c9dbf;
    }
  }
  bVar6 = false;
  FVar15 = local_48;
  FVar14.Value = 0;
LAB_14e2c9dbf:
  UE::Core::Private::Function::CheckCallable(*(void **)((this->TaskStorage).Pad + 0x10));
  pcVar3 = *(code **)((this->TaskStorage).Pad + 0x10);
  puVar16 = (this->TaskStorage).Pad + 0x20;
  puVar4 = *(uchar **)((this->TaskStorage).Pad + 0x38);
  puVar13 = puVar16;
  if (puVar4 != (uchar *)0x0) {
    puVar13 = puVar4;
  }
  uVar11 = (**(code **)(*(longlong *)puVar13 + 8))();
  (*pcVar3)(uVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar14.Value;
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
  if (*(longlong *)((this->TaskStorage).Pad + 0x10) != 0) {
    puVar4 = *(uchar **)((this->TaskStorage).Pad + 0x38);
    if (puVar4 != (uchar *)0x0) {
      puVar16 = puVar4;
    }
    (**(code **)(*(longlong *)puVar16 + 0x10))(puVar16);
  }
  if (this != (TGraphTask<FRenderDocAsyncGraphTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}


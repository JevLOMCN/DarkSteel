// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// ExecuteTask @ 141493fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::ExecuteTask
          (TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_> *this)

{
  int *piVar1;
  longlong *plVar2;
  FName *pFVar3;
  code *pcVar4;
  uchar *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar *puVar12;
  FName FVar13;
  FNameEntryId FVar14;
  uchar *puVar15;
  LARGE_INTEGER local_res8;
  FName local_38;
  FStatMessage local_28;
  
  if (this != (TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  pFVar3 = *(FName **)(this->TaskStorage).Pad;
  bVar6 = false;
  bVar8 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pFVar3[2]);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar7 = true;
      goto LAB_14149409a;
    }
  }
  bVar7 = false;
  FVar13 = local_38;
  FVar14.Value = 0;
LAB_14149409a:
  UE::Core::Private::Function::CheckCallable(*(void **)((this->TaskStorage).Pad + 0x10));
  pcVar4 = *(code **)((this->TaskStorage).Pad + 0x10);
  puVar15 = (this->TaskStorage).Pad + 0x20;
  puVar5 = *(uchar **)((this->TaskStorage).Pad + 0x38);
  puVar12 = puVar15;
  if (puVar5 != (uchar *)0x0) {
    puVar12 = puVar5;
  }
  uVar11 = (**(code **)(*(longlong *)puVar12 + 8))();
  (*pcVar4)(uVar11);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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
    puVar5 = *(uchar **)((this->TaskStorage).Pad + 0x38);
    if (puVar5 != (uchar *)0x0) {
      puVar15 = puVar5;
    }
    (**(code **)(*(longlong *)puVar15 + 0x10))(puVar15);
  }
  if (this != (TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 141494200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FAsyncGraphTask>::ExecuteTask(TGraphTask<FAsyncGraphTask> *this)

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
  
  if (this != (TGraphTask<FAsyncGraphTask> *)0x0) {
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
      goto LAB_14149436f;
    }
  }
  bVar6 = false;
  FVar15 = local_48;
  FVar14.Value = 0;
LAB_14149436f:
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
  if (this != (TGraphTask<FAsyncGraphTask> *)0x0) {
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

// ExecuteTask @ 1414944e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FBroadcastTask>::ExecuteTask(TGraphTask<FBroadcastTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  TTypeCompatibleBytes<FBroadcastTask> *this_00;
  uchar *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_FBroadcastTask> FVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  uchar *puVar11;
  FNameEntryId FVar12;
  FName FVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FBroadcastTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  this_00 = &this->TaskStorage;
  FVar9 = StatPtr_STAT_FBroadcastTask;
  if (StatPtr_STAT_FBroadcastTask == (FThreadSafeStaticStat<FStat_STAT_FBroadcastTask>)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"STAT_FBroadcastTask");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_FBroadcastTask>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FBroadcastTask,*pFVar8,
                       L"FBroadcastTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                       L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar10 == 0)) {
    FBroadcastTask::DoTask
              ((FBroadcastTask *)this_00,*(Type *)((this->TaskStorage).Pad + 0x30),
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar13.ComparisonIndex.Value = 0;
      FVar13.Number = 0;
      FVar12.Value = 0;
    }
    FBroadcastTask::DoTask
              ((FBroadcastTask *)this_00,*(Type *)((this->TaskStorage).Pad + 0x30),
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
        local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar12.Value;
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
  }
  if (*(longlong *)this_00->Pad != 0) {
    puVar3 = *(uchar **)((this->TaskStorage).Pad + 0x28);
    puVar11 = (this->TaskStorage).Pad + 0x10;
    if (puVar3 != (uchar *)0x0) {
      puVar11 = puVar3;
    }
    (**(code **)(*(longlong *)puVar11 + 0x10))();
  }
  if (this != (TGraphTask<FBroadcastTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1414947c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FReturnGraphTask>::ExecuteTask(TGraphTask<FReturnGraphTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_FReturnGraphTask> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FReturnGraphTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  FVar8 = StatPtr_STAT_FReturnGraphTask;
  if (StatPtr_STAT_FReturnGraphTask == (FThreadSafeStaticStat<FStat_STAT_FReturnGraphTask>)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_FReturnGraphTask");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_FReturnGraphTask>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FReturnGraphTask,*pFVar7,
                       L"FReturnGraphTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                       L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    (**(code **)((longlong)*TaskGraphImplementationSingleton + 0x58))
              (TaskGraphImplementationSingleton,*(undefined4 *)(this->TaskStorage).Pad);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18 = FVar10.Value;
      uStackX_1c = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
      FVar10.Value = 0;
    }
    (**(code **)((longlong)*TaskGraphImplementationSingleton + 0x58))
              (TaskGraphImplementationSingleton,*(undefined4 *)(this->TaskStorage).Pad);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar10.Value;
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
  }
  if (this != (TGraphTask<FReturnGraphTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1415c10f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FFileCachePreloadTask>::ExecuteTask(TGraphTask<FFileCachePreloadTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FFileCache *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  int iVar11;
  TAtomic<FMinimalName> TVar12;
  uint uVar13;
  longlong lVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  TAtomic<FMinimalName> local_58;
  FStatMessage local_48;
  
  if (this != (TGraphTask<FFileCachePreloadTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar12 = TStatId::TStatId_NAME_None.Name;
  bVar6 = false;
  bVar8 = false;
  local_58 = (TAtomic<FMinimalName>)0x0;
  uVar13 = TStatId::TStatId_NAME_None.Name._0_4_;
  uVar10 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar13 != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = uVar13;
        local_res10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = uVar13;
      local_res18[0]._4_4_ = uVar10;
      FThreadStats::AddMessage((FName)TVar12,CycleScopeStart);
      bVar7 = true;
      goto LAB_1415c11e5;
    }
  }
  bVar7 = false;
  TVar12 = local_58;
LAB_1415c11e5:
  this_00 = GetCache();
  if (this_00 == (FFileCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  iVar11 = *(int *)((this->TaskStorage).Pad + 8);
  uVar13 = 0;
  if (0 < iVar11) {
    lVar14 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < iVar11) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)(this->TaskStorage).Pad;
      if ((*(int *)(lVar3 + lVar14) == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("SlotID.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                             ,0x334,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FFileCache::UnlockSlot
                (this_00,(StrongBlockIdentifier<CacheSlotStrongType>)*(int *)(lVar3 + lVar14));
      iVar11 = *(int *)((this->TaskStorage).Pad + 8);
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 4;
    } while ((int)uVar13 < iVar11);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (TVar12 != (TAtomic<FMinimalName>)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Index.Value = TVar12._0_4_;
      local_48.NameAndInfo.Number = TVar12._4_4_ & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
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
  pvVar4 = *(void **)(this->TaskStorage).Pad;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (this != (TGraphTask<FFileCachePreloadTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14193a3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<TAsyncGraphTask<void>_>::ExecuteTask(TGraphTask<TAsyncGraphTask<void>_> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<TAsyncGraphTask<void>_> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  FVar8 = StatPtr_STAT_TaskGraph_OtherTasks;
  if (StatPtr_STAT_TaskGraph_OtherTasks ==
      (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_TaskGraph_OtherTasks");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_OtherTasks,*pFVar7,
                       L"Other TaskGraph Tasks","STATGROUP_Threading","STATCAT_Advanced",
                       L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    SetPromise<TUniqueFunction<void___cdecl(void)>_&>
              ((TPromise<void> *)((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<void___cdecl(void)> *)&this->TaskStorage);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
      FVar10.Value = 0;
    }
    SetPromise<TUniqueFunction<void___cdecl(void)>_&>
              ((TPromise<void> *)((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<void___cdecl(void)> *)&this->TaskStorage);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar10.Value;
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
  }
  TAsyncGraphTask<void>::~TAsyncGraphTask<void>((TAsyncGraphTask<void> *)&this->TaskStorage);
  if (this != (TGraphTask<TAsyncGraphTask<void>_> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1419f6fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FNullGraphTask>::ExecuteTask(TGraphTask<FNullGraphTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  FName *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  FThreadStats *this_00;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FNullGraphTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  pFVar3 = *(FName **)(this->TaskStorage).Pad;
  bVar4 = false;
  bVar6 = false;
  FVar9 = *pFVar3;
  FVar10 = FVar9.ComparisonIndex.Value;
  uVar8 = FVar9.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pFVar3[2]);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar9.ComparisonIndex.Value = 0;
      FVar9.Number = 0;
      FVar10.Value = 0;
    }
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = FThreadStats::GetThreadStats();
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  }
  LOCK();
  plVar2 = &this->_padding_;
  lVar7 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar7 == 1) {
    (**(code **)this->_padding_)(this,1);
  }
  return;
}

// ExecuteTask @ 1419f7180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FSimpleDelegateGraphTask>::ExecuteTask(TGraphTask<FSimpleDelegateGraphTask> *this)

{
  int *piVar1;
  FName *pFVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  FThreadStats *this_00;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_48;
  undefined1 local_38 [12];
  uint local_2c;
  
  if (this != (TGraphTask<FSimpleDelegateGraphTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  pFVar2 = *(FName **)(this->TaskStorage).Pad;
  bVar4 = false;
  bVar6 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar9 = *pFVar2;
  FVar10 = FVar9.ComparisonIndex.Value;
  uVar8 = FVar9.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pFVar2[2]);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pFVar2[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar5 = true;
      goto LAB_1419f726a;
    }
  }
  bVar5 = false;
  FVar9 = local_48;
  FVar10.Value = 0;
LAB_1419f726a:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((this->TaskStorage).Pad + 8)
             ,(FReadAccessScope *)local_38);
  if ((*(int *)((this->TaskStorage).Pad + 0x18) != 0) &&
     (plVar3 = *(longlong **)((this->TaskStorage).Pad + 0x10), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_38);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = FThreadStats::GetThreadStats();
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_2c = FVar9.Number & 0xffff6fff | 0x6000;
      local_38._8_4_ = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_38[4] = '\0';
      local_38[5] = '\0';
      local_38[6] = '\0';
      local_38[7] = '\0';
      local_38[0] = local_res8.s.LowPart._0_1_;
      local_38[1] = local_res8.s.LowPart._1_1_;
      local_38[2] = local_res8.s.LowPart._2_1_;
      local_38[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_38);
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
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->TaskStorage).Pad + 8));
  if (this != (TGraphTask<FSimpleDelegateGraphTask> *)0x0) {
    LOCK();
    plVar3 = &this->_padding_;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 141b3fa50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<`TaskGraphTests::FTaskGraphBasicTest::TestBody'[::G]::FTask>::ExecuteTask(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar5;
  int iVar6;
  TAtomic<FMinimalName> TVar7;
  LARGE_INTEGER local_res8;
  FStatMessage local_18;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  TVar7 = TStatId::TStatId_NAME_None.Name;
  bVar2 = false;
  bVar4 = false;
  uVar5 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar6 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar5 != 0) || (iVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = uVar5;
        local_res8.s.HighPart = iVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar2 = true;
        bVar4 = true;
      }
    }
    bVar3 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = uVar5;
      local_res8.s.HighPart = iVar6;
      FThreadStats::AddMessage((FName)TVar7,CycleScopeStart);
      bVar3 = true;
    }
    else {
      TVar7 = (TAtomic<FMinimalName>)0x0;
      uVar5 = 0;
    }
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar3) && (TVar7 != (TAtomic<FMinimalName>)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_18.NameAndInfo.Number = TVar7._4_4_ & 0xffff6fff | 0x6000;
        local_18.NameAndInfo.Index.Value = uVar5;
        QueryPerformanceCounter(&local_res8);
        local_18.StatData.Pad[4] = '\0';
        local_18.StatData.Pad[5] = '\0';
        local_18.StatData.Pad[6] = '\0';
        local_18.StatData.Pad[7] = '\0';
        local_18.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_18.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_18.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_18.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_18);
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
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 141b3fc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<TAsyncGraphTask<int>_>::ExecuteTask(TGraphTask<TAsyncGraphTask<int>_> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<TAsyncGraphTask<int>_> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  FVar8 = StatPtr_STAT_TaskGraph_OtherTasks;
  if (StatPtr_STAT_TaskGraph_OtherTasks ==
      (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_TaskGraph_OtherTasks");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_OtherTasks,*pFVar7,
                       L"Other TaskGraph Tasks","STATGROUP_Threading","STATCAT_Advanced",
                       L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    SetPromise<int,TUniqueFunction<int___cdecl(void)>_&>
              ((TPromise<int> *)((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<int___cdecl(void)> *)&this->TaskStorage);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
      FVar10.Value = 0;
    }
    SetPromise<int,TUniqueFunction<int___cdecl(void)>_&>
              ((TPromise<int> *)((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<int___cdecl(void)> *)&this->TaskStorage);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar10.Value;
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
  }
  TAsyncGraphTask<int>::~TAsyncGraphTask<int>((TAsyncGraphTask<int> *)&this->TaskStorage);
  if (this != (TGraphTask<TAsyncGraphTask<int>_> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 141b3ff10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<TFunctionGraphTaskImpl<void___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&),0>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  undefined8 *local_res10;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  pFVar3 = *(FName **)((longlong)this + 0xe0);
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar11 = *pFVar3;
  FVar12 = FVar11.ComparisonIndex.Value;
  uVar8 = FVar11.Number;
  local_res10 = this;
  if ((FVar12.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar6 = true;
      goto LAB_141b3fff7;
    }
  }
  bVar6 = false;
  FVar11 = local_48;
  FVar12.Value = 0;
LAB_141b3fff7:
  local_res8.s.LowPart = *(uint *)((longlong)this + 0x120);
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar10 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar10 = *(longlong **)((longlong)this + 0x118);
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  (*pcVar4)(uVar9,&local_res8);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar10 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar10 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (local_res10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res10 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res10 != (undefined8 *)0x0)) {
      (**(code **)*local_res10)(local_res10,1);
    }
  }
  return;
}

// ExecuteTask @ 141cfd750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<TAsyncGraphTask<TTwoSmoothies<1>_>_>::ExecuteTask
          (TGraphTask<TAsyncGraphTask<TTwoSmoothies<1>_>_> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<TAsyncGraphTask<TTwoSmoothies<1>_>_> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  FVar8 = StatPtr_STAT_TaskGraph_OtherTasks;
  if (StatPtr_STAT_TaskGraph_OtherTasks ==
      (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_TaskGraph_OtherTasks");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_OtherTasks,*pFVar7,
                       L"Other TaskGraph Tasks","STATGROUP_Threading","STATCAT_Advanced",
                       L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    SetPromise<TTwoSmoothies<1>,TUniqueFunction<TTwoSmoothies<1>___cdecl(void)>_&>
              ((TPromise<TTwoSmoothies<1>_> *)((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<TTwoSmoothies<1>___cdecl(void)> *)&this->TaskStorage);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
      FVar10.Value = 0;
    }
    SetPromise<TTwoSmoothies<1>,TUniqueFunction<TTwoSmoothies<1>___cdecl(void)>_&>
              ((TPromise<TTwoSmoothies<1>_> *)((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<TTwoSmoothies<1>___cdecl(void)> *)&this->TaskStorage);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar10.Value;
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
  }
  TAsyncGraphTask<TTwoSmoothies<1>_>::~TAsyncGraphTask<TTwoSmoothies<1>_>
            ((TAsyncGraphTask<TTwoSmoothies<1>_> *)&this->TaskStorage);
  if (this != (TGraphTask<TAsyncGraphTask<TTwoSmoothies<1>_>_> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 141cfda10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<TAsyncGraphTask<bool>_>::ExecuteTask(TGraphTask<TAsyncGraphTask<bool>_> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<TAsyncGraphTask<bool>_> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  FVar8 = StatPtr_STAT_TaskGraph_OtherTasks;
  if (StatPtr_STAT_TaskGraph_OtherTasks ==
      (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_TaskGraph_OtherTasks");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_OtherTasks,*pFVar7,
                       L"Other TaskGraph Tasks","STATGROUP_Threading","STATCAT_Advanced",
                       L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>
              ((TPromise<bool> *)((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<bool___cdecl(void)> *)&this->TaskStorage);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
      FVar10.Value = 0;
    }
    SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>
              ((TPromise<bool> *)((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<bool___cdecl(void)> *)&this->TaskStorage);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar10.Value;
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
  }
  TAsyncGraphTask<bool>::~TAsyncGraphTask<bool>((TAsyncGraphTask<bool> *)&this->TaskStorage);
  if (this != (TGraphTask<TAsyncGraphTask<bool>_> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}


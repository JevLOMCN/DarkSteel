// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 2

// ExecuteTask @ 148c46bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<TAsyncGraphTask<FImageComparisonResult>_>::ExecuteTask
          (TGraphTask<TAsyncGraphTask<FImageComparisonResult>_> *this)

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
  
  if (this != (TGraphTask<TAsyncGraphTask<FImageComparisonResult>_> *)0x0) {
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
    SetPromise<FImageComparisonResult,TUniqueFunction<FImageComparisonResult___cdecl(void)>_&>
              ((TPromise<FImageComparisonResult> *)((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<FImageComparisonResult___cdecl(void)> *)&this->TaskStorage);
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
    SetPromise<FImageComparisonResult,TUniqueFunction<FImageComparisonResult___cdecl(void)>_&>
              ((TPromise<FImageComparisonResult> *)((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<FImageComparisonResult___cdecl(void)> *)&this->TaskStorage);
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
  TAsyncGraphTask<FImageComparisonResult>::~TAsyncGraphTask<FImageComparisonResult>
            ((TAsyncGraphTask<FImageComparisonResult> *)&this->TaskStorage);
  if (this != (TGraphTask<TAsyncGraphTask<FImageComparisonResult>_> *)0x0) {
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

// ExecuteTask @ 148c46e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<TAsyncGraphTask<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>_>::
ExecuteTask(TGraphTask<TAsyncGraphTask<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>_>
            *this)

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
  
  if (this != (TGraphTask<TAsyncGraphTask<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>_>
               *)0x0) {
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
    SetPromise<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>,TUniqueFunction<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>___cdecl(void)>_&>
              ((TPromise<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
               ((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>___cdecl(void)>
                *)&this->TaskStorage);
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
    SetPromise<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>,TUniqueFunction<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>___cdecl(void)>_&>
              ((TPromise<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
               ((this->TaskStorage).Pad + 0x30),
               (TUniqueFunction<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>___cdecl(void)>
                *)&this->TaskStorage);
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
  TAsyncGraphTask<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::
  ~TAsyncGraphTask<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
            ((TAsyncGraphTask<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
              *)&this->TaskStorage);
  if (this != (TGraphTask<TAsyncGraphTask<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>_>
               *)0x0) {
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


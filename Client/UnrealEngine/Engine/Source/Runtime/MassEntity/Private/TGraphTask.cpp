// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 3

// ExecuteTask @ 147217780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TGraphTask<UE::Mass::Executor::FMassExecutorDoneTask>::ExecuteTask
          (TGraphTask<UE::Mass::Executor::FMassExecutorDoneTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  TTypeCompatibleBytes<UE::Mass::Executor::FMassExecutorDoneTask> *this_00;
  void *pvVar3;
  uchar *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)_::_2_::FStat_FMassExecutorDoneTask>
  FVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  uchar *puVar12;
  FNameEntryId FVar13;
  FName FVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::Mass::Executor::FMassExecutorDoneTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  this_00 = &this->TaskStorage;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)'
    ::__l2::StatPtr_FMassExecutorDoneTask =
         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)_::_2_::FStat_FMassExecutorDoneTask>
          )0x0;
    pFVar9 = ::FName::FName((FName *)&local_res8.s,"FMassExecutorDoneTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)'
                ::__l2::StatPtr_FMassExecutorDoneTask,*pFVar9,L"FMassExecutorDoneTask",
               "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,
               true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar10 = `public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)'
           ::__l2::StatPtr_FMassExecutorDoneTask;
  if (`public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)'
      ::__l2::StatPtr_FMassExecutorDoneTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)_::_2_::FStat_FMassExecutorDoneTask>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res10,"FMassExecutorDoneTask");
    FVar10 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)_::_2_::FStat_FMassExecutorDoneTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_struct_TStatId___cdecl_UE::Mass::Executor::FMassExecutorDoneTask::GetStatId(void)'
                           ::__l2::StatPtr_FMassExecutorDoneTask,*pFVar9,L"FMassExecutorDoneTask",
                          "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar11 == 0)) {
    UE::Mass::Executor::FMassExecutorDoneTask::DoTask
              ((FMassExecutorDoneTask *)this_00,*(Type *)((this->TaskStorage).Pad + 0x5e0),
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    bVar6 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
    }
    else {
      FVar14.ComparisonIndex.Value = 0;
      FVar14.Number = 0;
      FVar13.Value = 0;
    }
    UE::Mass::Executor::FMassExecutorDoneTask::DoTask
              ((FMassExecutorDoneTask *)this_00,*(Type *)((this->TaskStorage).Pad + 0x5e0),
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
        local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
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
  pvVar3 = *(void **)((this->TaskStorage).Pad + 0x5d0);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (*(longlong *)((this->TaskStorage).Pad + 0x5a0) != 0) {
    puVar4 = *(uchar **)((this->TaskStorage).Pad + 0x5c8);
    puVar12 = (this->TaskStorage).Pad + 0x5b0;
    if (puVar4 != (uchar *)0x0) {
      puVar12 = puVar4;
    }
    (**(code **)(*(longlong *)puVar12 + 0x10))();
  }
  FMassExecutionContext::~FMassExecutionContext((FMassExecutionContext *)this_00);
  if (this != (TGraphTask<UE::Mass::Executor::FMassExecutorDoneTask> *)0x0) {
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

// ExecuteTask @ 147217b40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FMassProcessorTask>::ExecuteTask(TGraphTask<FMassProcessorTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  TAtomic<FMinimalName> TVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  TStatId TVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8 [2];
  FStatMessage local_38;
  
  if (this != (TGraphTask<FMassProcessorTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar9 = FMassProcessorTask::GetStatId();
  bVar4 = false;
  bVar6 = false;
  TVar3 = (TVar9.StatIdPtr)->Name;
  FVar10 = *(FName *)TVar3;
  FVar11 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar11.Value == 0) && (uVar8 == 0)) {
    FMassProcessorTask::DoTask
              ((FMassProcessorTask *)&this->TaskStorage,AnyHiPriThreadHiPriTask,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8[0].s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0].s,(char *)*(FName *)((longlong)TVar3 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8[0]._0_4_ = FVar11.Value;
        local_res8[0]._4_4_ = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8[0].s,(wchar_t *)*(FName *)((longlong)TVar3 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8[0]._0_4_ = FVar11.Value;
      local_res8[0]._4_4_ = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar10.ComparisonIndex.Value = 0;
      FVar10.Number = 0;
      FVar11.Value = 0;
    }
    FMassProcessorTask::DoTask
              ((FMassProcessorTask *)&this->TaskStorage,AnyHiPriThreadHiPriTask,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8[0].s);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar11.Value;
        QueryPerformanceCounter(local_res8);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res8[0]._0_1_;
        local_38.StatData.Pad[1] = local_res8[0]._1_1_;
        local_38.StatData.Pad[2] = local_res8[0]._2_1_;
        local_38.StatData.Pad[3] = local_res8[0]._3_1_;
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
  FMassExecutionContext::~FMassExecutionContext
            ((FMassExecutionContext *)((this->TaskStorage).Pad + 0x10));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 8));
  if (this != (TGraphTask<FMassProcessorTask> *)0x0) {
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

// ExecuteTask @ 147217d80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FMassProcessorsTask_GameThread>::ExecuteTask
          (TGraphTask<FMassProcessorsTask_GameThread> *this)

{
  int *piVar1;
  longlong *plVar2;
  TAtomic<FMinimalName> TVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  TStatId TVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8 [2];
  FStatMessage local_38;
  
  if (this != (TGraphTask<FMassProcessorsTask_GameThread> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar9 = FMassProcessorTask::GetStatId();
  bVar4 = false;
  bVar6 = false;
  TVar3 = (TVar9.StatIdPtr)->Name;
  FVar10 = *(FName *)TVar3;
  FVar11 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar11.Value == 0) && (uVar8 == 0)) {
    FMassProcessorTask::DoTask
              ((FMassProcessorTask *)&this->TaskStorage,HighTaskPriority|GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8[0].s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0].s,(char *)*(FName *)((longlong)TVar3 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8[0]._0_4_ = FVar11.Value;
        local_res8[0]._4_4_ = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8[0].s,(wchar_t *)*(FName *)((longlong)TVar3 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8[0]._0_4_ = FVar11.Value;
      local_res8[0]._4_4_ = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar10.ComparisonIndex.Value = 0;
      FVar10.Number = 0;
      FVar11.Value = 0;
    }
    FMassProcessorTask::DoTask
              ((FMassProcessorTask *)&this->TaskStorage,HighTaskPriority|GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8[0].s);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar11.Value;
        QueryPerformanceCounter(local_res8);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res8[0]._0_1_;
        local_38.StatData.Pad[1] = local_res8[0]._1_1_;
        local_38.StatData.Pad[2] = local_res8[0]._2_1_;
        local_38.StatData.Pad[3] = local_res8[0]._3_1_;
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
  FMassExecutionContext::~FMassExecutionContext
            ((FMassExecutionContext *)((this->TaskStorage).Pad + 0x10));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 8));
  if (this != (TGraphTask<FMassProcessorsTask_GameThread> *)0x0) {
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


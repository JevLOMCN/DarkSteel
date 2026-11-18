// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 1

// ExecuteTask @ 1462f5b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::Dataflow::Private::FDataflowSimulationTask>::ExecuteTask
          (TGraphTask<UE::Dataflow::Private::FDataflowSimulationTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_58;
  undefined1 local_48 [12];
  uint local_3c;
  
  if (this != (TGraphTask<UE::Dataflow::Private::FDataflowSimulationTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_UE::Dataflow::Private::FDataflowSimulationTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_UE::Dataflow::Private::FDataflowSimulationTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_UE::Dataflow::Private::FDataflowSimulationTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FDataflowSimulationProxyParallelTask = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&local_res8.s,"FDataflowSimulationProxyParallelTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_UE::Dataflow::Private::FDataflowSimulationTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FDataflowSimulationProxyParallelTask,*pFVar7,
               L"FDataflowSimulationProxyParallelTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced"
               ,L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_UE::Dataflow::Private::FDataflowSimulationTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_FDataflowSimulationProxyParallelTask;
  if (_StatPtr_FDataflowSimulationProxyParallelTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FDataflowSimulationProxyParallelTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_UE::Dataflow::Private::FDataflowSimulationTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FDataflowSimulationProxyParallelTask,*pFVar7,
                        L"FDataflowSimulationProxyParallelTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1462f5c98;
    }
  }
  bVar4 = false;
  FVar11 = local_58;
  FVar10.Value = 0;
LAB_1462f5c98:
  UE::Dataflow::Private::FDataflowSimulationTask::GetDesiredThread();
  ChaosDD::Private::FChaosDDScopeTaskContext::FChaosDDScopeTaskContext
            ((FChaosDDScopeTaskContext *)local_48,
             (FChaosDDTaskParentContext *)((this->TaskStorage).Pad + 0x20));
  UE::Dataflow::EvaluateSimulationGraph
            ((TObjectPtr<UDataflow> *)&this->TaskStorage,
             (TSharedPtr<UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>,1> *)
             ((this->TaskStorage).Pad + 8),*(float *)((this->TaskStorage).Pad + 0x18),
             *(float *)((this->TaskStorage).Pad + 0x1c));
  ChaosDD::Private::FChaosDDScopeTaskContext::~FChaosDDScopeTaskContext
            ((FChaosDDScopeTaskContext *)local_48);
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
      local_3c = FVar11.Number & 0xffff6fff | 0x6000;
      local_48._8_4_ = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      local_48[0] = local_res8.s.LowPart._0_1_;
      local_48[1] = local_res8.s.LowPart._1_1_;
      local_48[2] = local_res8.s.LowPart._2_1_;
      local_48[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_48);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 0x10));
  if (this != (TGraphTask<UE::Dataflow::Private::FDataflowSimulationTask> *)0x0) {
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


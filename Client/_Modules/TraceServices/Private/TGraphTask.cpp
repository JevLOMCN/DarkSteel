// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// ExecuteTask @ 14d45e160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<TraceServices::FAllocationsQueryAsyncTask>::ExecuteTask
          (TGraphTask<TraceServices::FAllocationsQueryAsyncTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  FName FVar3;
  FAllocationsQuery *this_00;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (this != (TGraphTask<TraceServices::FAllocationsQueryAsyncTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_TraceServices::FAllocationsQueryAsyncTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_TraceServices::FAllocationsQueryAsyncTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_TraceServices::FAllocationsQueryAsyncTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`TraceServices::FAllocationsQueryAsyncTask::GetStatId'::__l2::FStat_FAllocationsQueryAsyncTask>
    ::
    FThreadSafeStaticStat<_TraceServices::FAllocationsQueryAsyncTask::GetStatId_::__l2::FStat_FAllocationsQueryAsyncTask>
              (&`public:_struct_TStatId___cdecl_TraceServices::FAllocationsQueryAsyncTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FAllocationsQueryAsyncTask);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_TraceServices::FAllocationsQueryAsyncTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  FVar13.Value = 0;
  pTVar9 = _StatPtr_FAllocationsQueryAsyncTask;
  if (_StatPtr_FAllocationsQueryAsyncTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FAllocationsQueryAsyncTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_TraceServices::FAllocationsQueryAsyncTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FAllocationsQueryAsyncTask,*pFVar8,
                        L"FAllocationsQueryAsyncTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar3.ComparisonIndex.Value;
  uVar10 = FVar3.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar5 = true;
      FVar12 = FVar3;
      FVar13.Value = FVar11.Value;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
    }
  }
  this_00 = *(FAllocationsQuery **)(this->TaskStorage).Pad;
  if (this_00 != (FAllocationsQuery *)0x0) {
    TraceServices::FAllocationsQuery::Run(this_00);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_28.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_28);
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
  if (this != (TGraphTask<TraceServices::FAllocationsQueryAsyncTask> *)0x0) {
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


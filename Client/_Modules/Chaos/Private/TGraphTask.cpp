// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ExecuteTask @ 143b1c9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<Chaos::FPhysicsSolverAdvanceTask>::ExecuteTask
          (TGraphTask<Chaos::FPhysicsSolverAdvanceTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  uint *puVar9;
  FChaosVDThreadContext *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<Chaos::FPhysicsSolverAdvanceTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverAdvanceTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverAdvanceTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverAdvanceTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FPhysicsSolverAdvanceTask = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&local_res8.s,"FPhysicsSolverAdvanceTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverAdvanceTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FPhysicsSolverAdvanceTask,*pFVar7,L"FPhysicsSolverAdvanceTask",
               "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,
               true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverAdvanceTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_FPhysicsSolverAdvanceTask;
  if (_StatPtr_FPhysicsSolverAdvanceTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FPhysicsSolverAdvanceTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverAdvanceTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FPhysicsSolverAdvanceTask,*pFVar7,
                        L"FPhysicsSolverAdvanceTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar11;
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
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_143b1cb7c;
    }
  }
  bVar4 = false;
  FVar13 = local_48;
LAB_143b1cb7c:
  Chaos::FPhysicsSolverAdvanceTask::GetDesiredThread();
  puVar9 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_38.NameAndInfo = (FStatNameAndInfo)&local_res8;
  local_38.StatData.Pad =
       (uchar  [8])
       UE::Core::Private::Function::
       TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
       ::Call;
  pFVar10 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar9);
  FChaosVDThreadContext::PushContext(pFVar10,(FChaosVDContext *)((this->TaskStorage).Pad + 0x10));
  Chaos::FPhysicsSolverAdvanceTask::AdvanceSolver((FPhysicsSolverAdvanceTask *)&this->TaskStorage);
  puVar9 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_38.NameAndInfo = (FStatNameAndInfo)&local_res8;
  local_38.StatData.Pad =
       (uchar  [8])
       UE::Core::Private::Function::
       TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
       ::Call;
  pFVar10 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar9);
  FChaosVDThreadContext::PopContext(pFVar10);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar13 & 0xffff6fffffffffff | 0x600000000000);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->TaskStorage).Pad + 0x28));
  if (this != (TGraphTask<Chaos::FPhysicsSolverAdvanceTask> *)0x0) {
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

// ExecuteTask @ 143b1cdb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<Chaos::FPhysicsSolverFrozenGTPreSimCallbacks>::ExecuteTask
          (TGraphTask<Chaos::FPhysicsSolverFrozenGTPreSimCallbacks> *this)

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
  FStatMessage local_28;
  
  if (this != (TGraphTask<Chaos::FPhysicsSolverFrozenGTPreSimCallbacks> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverFrozenGTPreSimCallbacks::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverFrozenGTPreSimCallbacks::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverFrozenGTPreSimCallbacks::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FPhysicsSolverFrozenGTPreSimCallbacks = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&local_res8.s,"FPhysicsSolverFrozenGTPreSimCallbacks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverFrozenGTPreSimCallbacks::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FPhysicsSolverFrozenGTPreSimCallbacks,*pFVar7,
               L"FPhysicsSolverFrozenGTPreSimCallbacks","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverFrozenGTPreSimCallbacks::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_FPhysicsSolverFrozenGTPreSimCallbacks;
  if (_StatPtr_FPhysicsSolverFrozenGTPreSimCallbacks == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FPhysicsSolverFrozenGTPreSimCallbacks");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverFrozenGTPreSimCallbacks::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FPhysicsSolverFrozenGTPreSimCallbacks,*pFVar7,
                        L"FPhysicsSolverFrozenGTPreSimCallbacks","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    Chaos::FPhysicsSolverFrozenGTPreSimCallbacks::GTPreSimCallbacks
              ((FPhysicsSolverFrozenGTPreSimCallbacks *)&this->TaskStorage);
  }
  else {
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
    Chaos::FPhysicsSolverFrozenGTPreSimCallbacks::GTPreSimCallbacks
              ((FPhysicsSolverFrozenGTPreSimCallbacks *)&this->TaskStorage);
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
        local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
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
  if (this != (TGraphTask<Chaos::FPhysicsSolverFrozenGTPreSimCallbacks> *)0x0) {
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

// ExecuteTask @ 143b1d120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<Chaos::FPhysicsSolverProcessPushDataTask>::ExecuteTask
          (TGraphTask<Chaos::FPhysicsSolverProcessPushDataTask> *this)

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
  FStatMessage local_28;
  
  if (this != (TGraphTask<Chaos::FPhysicsSolverProcessPushDataTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverProcessPushDataTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverProcessPushDataTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverProcessPushDataTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FPhysicsSolverProcessPushDataTask = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName((FName *)&local_res8.s,"FPhysicsSolverProcessPushDataTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverProcessPushDataTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FPhysicsSolverProcessPushDataTask,*pFVar7,
               L"FPhysicsSolverProcessPushDataTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverProcessPushDataTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_FPhysicsSolverProcessPushDataTask;
  if (_StatPtr_FPhysicsSolverProcessPushDataTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FPhysicsSolverProcessPushDataTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_Chaos::FPhysicsSolverProcessPushDataTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FPhysicsSolverProcessPushDataTask,*pFVar7,
                        L"FPhysicsSolverProcessPushDataTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    Chaos::FPhysicsSolverProcessPushDataTask::GetDesiredThread();
    Chaos::FPhysicsSolverProcessPushDataTask::ProcessPushData
              ((FPhysicsSolverProcessPushDataTask *)&this->TaskStorage);
  }
  else {
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
    Chaos::FPhysicsSolverProcessPushDataTask::GetDesiredThread();
    Chaos::FPhysicsSolverProcessPushDataTask::ProcessPushData
              ((FPhysicsSolverProcessPushDataTask *)&this->TaskStorage);
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
        local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
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
  if (this != (TGraphTask<Chaos::FPhysicsSolverProcessPushDataTask> *)0x0) {
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

// ExecuteTask @ 143d4ead0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask>::ExecuteTask
          (TGraphTask<Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId(void)_::_2_::FStat_FChaosAccelerationStructureTask>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  uchar *puVar10;
  FNameEntryId FVar11;
  FName FVar12;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStatId___cdecl_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStatId___cdecl_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStatId___cdecl_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId'::__l2::FStat_FChaosAccelerationStructureTask>
      ::
      FThreadSafeStaticStat<_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId_::__l2::FStat_FChaosAccelerationStructureTask>
                (&`public:_static_struct_TStatId___cdecl_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId(void)'
                  ::__l2::StatPtr_FChaosAccelerationStructureTask);
      _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pIVar13 = (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  FVar8 = `public:_static_struct_TStatId___cdecl_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId(void)'
          ::__l2::StatPtr_FChaosAccelerationStructureTask;
  if (`public:_static_struct_TStatId___cdecl_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId(void)'
      ::__l2::StatPtr_FChaosAccelerationStructureTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId(void)_::_2_::FStat_FChaosAccelerationStructureTask>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FChaosAccelerationStructureTask");
    FVar8 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId(void)_::_2_::FStat_FChaosAccelerationStructureTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_static_struct_TStatId___cdecl_Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::GetStatId(void)'
                          ::__l2::StatPtr_FChaosAccelerationStructureTask,*pFVar7,
                         L"FChaosAccelerationStructureTask","STATGROUP_Chaos","STATCAT_Advanced",
                         L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_143d4ec6b;
    }
  }
  bVar4 = false;
  FVar12 = local_48;
  FVar11.Value = 0;
LAB_143d4ec6b:
  LOCK();
  (this->TaskStorage).Pad[0x23] = '\x01';
  UNLOCK();
  if ((this->TaskStorage).Pad[0x24] == '\0') {
    FLLMScope::FLLMScope((FLLMScope *)&local_res8.s,ChaosAcceleration,false,None,Default,true);
    FMemScope::FMemScope((FMemScope *)&local_res10,ChaosAcceleration,true);
    puVar10 = (this->TaskStorage).Pad + 0x10;
    if (Chaos::AccelerationStructureSplitStaticAndDynamic == 1) {
      pIVar13 = *(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **)
                 ((this->TaskStorage).Pad + 0x18);
    }
    else {
      Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::UpdateStructure
                ((FChaosAccelerationStructureTask *)&this->TaskStorage,
                 *(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **)
                  puVar10,(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>
                           *)0x0);
      puVar10 = (this->TaskStorage).Pad + 0x18;
    }
    Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask::UpdateStructure
              ((FChaosAccelerationStructureTask *)&this->TaskStorage,
               *(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **)
                puVar10,pIVar13);
    FMemScope::~FMemScope((FMemScope *)&local_res10);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8.s);
  }
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
  if (this != (TGraphTask<Chaos::FPBDRigidsEvolutionBase::FChaosAccelerationStructureTask> *)0x0) {
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


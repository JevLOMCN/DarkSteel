// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// ExecuteTask @ 145ca2a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FCompileComputePipelineStateTask>::ExecuteTask
          (TGraphTask<FCompileComputePipelineStateTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  TTypeCompatibleBytes<FCompileComputePipelineStateTask> *this_00;
  void *pvVar3;
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
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FCompileComputePipelineStateTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  this_00 = &this->TaskStorage;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId'::__l2::FStat_FCompilePipelineStateTask>
      ::
      FThreadSafeStaticStat<_TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId_::__l2::FStat_FCompilePipelineStateTask>
                (&`public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCompilePipelineStateTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FCompilePipelineStateTask;
  if (_StatPtr_FCompilePipelineStateTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FCompilePipelineStateTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FCompilePipelineStateTask,*pFVar8,
                        L"FCompilePipelineStateTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
    ::GetDesiredThread((TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
                        *)this_00);
    TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
    ::CompilePSO((TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
                  *)this_00,(EPSOPrecacheCompileType *)0x0);
  }
  else {
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
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      FVar11.Value = 0;
    }
    TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
    ::GetDesiredThread((TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
                        *)this_00);
    TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
    ::CompilePSO((TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
                  *)this_00,(EPSOPrecacheCompileType *)0x0);
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
  if ((char)(this->TaskStorage).Pad[0x10] < '\0') {
    LOCK();
    GPipelinePrecompileTasksInFlight = (atomic<int>)((int)GPipelinePrecompileTasksInFlight + -1);
    UNLOCK();
  }
  pvVar3 = *(void **)((this->TaskStorage).Pad + 0x20);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (this != (TGraphTask<FCompileComputePipelineStateTask> *)0x0) {
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

// ExecuteTask @ 145ca2dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
TGraphTask<FCompileGraphicsPipelineStateTask>::ExecuteTask
          (TGraphTask<FCompileGraphicsPipelineStateTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  TTypeCompatibleBytes<FCompileGraphicsPipelineStateTask> *this_00;
  void *pvVar3;
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
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FCompileGraphicsPipelineStateTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  this_00 = &this->TaskStorage;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId'::__l2::FStat_FCompilePipelineStateTask>
      ::
      FThreadSafeStaticStat<_TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId_::__l2::FStat_FCompilePipelineStateTask>
                (&`public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCompilePipelineStateTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FCompilePipelineStateTask;
  if (_StatPtr_FCompilePipelineStateTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FCompilePipelineStateTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FCompilePipelineStateTask,*pFVar8,
                        L"FCompilePipelineStateTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
    ::GetDesiredThread((TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
                        *)this_00);
    TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
    ::CompilePSO((TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
                  *)this_00,(EPSOPrecacheCompileType *)0x0);
  }
  else {
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
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      FVar11.Value = 0;
    }
    TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
    ::GetDesiredThread((TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
                        *)this_00);
    TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
    ::CompilePSO((TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
                  *)this_00,(EPSOPrecacheCompileType *)0x0);
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
  if ((*(ushort *)((this->TaskStorage).Pad + 0xda) & 0x1000) != 0) {
    LOCK();
    GPipelinePrecompileTasksInFlight = (atomic<int>)((int)GPipelinePrecompileTasksInFlight + -1);
    UNLOCK();
  }
  pvVar3 = *(void **)((this->TaskStorage).Pad + 0xf0);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (this != (TGraphTask<FCompileGraphicsPipelineStateTask> *)0x0) {
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

// ExecuteTask @ 145ca3100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FCompileRayTracingPipelineStateTask>::ExecuteTask
          (TGraphTask<FCompileRayTracingPipelineStateTask> *this)

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
  Type TVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FCompileRayTracingPipelineStateTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FCompileRayTracingPipelineStateTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FCompileRayTracingPipelineStateTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FCompileRayTracingPipelineStateTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FCompileRayTracingPipelineStateTask::GetStatId'::__l2::FStat_FCompileRayTracingPipelineStateTask>
      ::
      FThreadSafeStaticStat<_FCompileRayTracingPipelineStateTask::GetStatId_::__l2::FStat_FCompileRayTracingPipelineStateTask>
                (&`public:_struct_TStatId___cdecl_FCompileRayTracingPipelineStateTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCompileRayTracingPipelineStateTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FCompileRayTracingPipelineStateTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar8 = _StatPtr_FCompileRayTracingPipelineStateTask;
  if (_StatPtr_FCompileRayTracingPipelineStateTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FCompileRayTracingPipelineStateTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FCompileRayTracingPipelineStateTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FCompileRayTracingPipelineStateTask,*pFVar7,
                        L"FCompileRayTracingPipelineStateTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar9 == 0)) {
    TVar10 = AnyNormalThreadNormalTask;
    if ((this->TaskStorage).Pad[0x88] != '\0') {
      TVar10 = AnyBackgroundThreadNormalTask;
    }
    FCompileRayTracingPipelineStateTask::DoTask
              ((FCompileRayTracingPipelineStateTask *)&this->TaskStorage,TVar10,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
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
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      FVar11.Value = 0;
    }
    TVar10 = AnyNormalThreadNormalTask;
    if ((this->TaskStorage).Pad[0x88] != '\0') {
      TVar10 = AnyBackgroundThreadNormalTask;
    }
    FCompileRayTracingPipelineStateTask::DoTask
              ((FCompileRayTracingPipelineStateTask *)&this->TaskStorage,TVar10,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
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
  }
  FCompileRayTracingPipelineStateTask::~FCompileRayTracingPipelineStateTask
            ((FCompileRayTracingPipelineStateTask *)&this->TaskStorage);
  if (this != (TGraphTask<FCompileRayTracingPipelineStateTask> *)0x0) {
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


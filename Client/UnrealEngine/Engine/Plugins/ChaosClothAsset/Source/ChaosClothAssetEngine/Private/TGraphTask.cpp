// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 2

// TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> @ 14dc31710

TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> * __thiscall
TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask>::
TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask>
          (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulong64 uVar3;
  
  this->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  uVar3 = TaskTrace::GenerateTaskId();
  this->_padding_ = uVar3;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  this->_padding_ = -0x17ffffffffffffe0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
  if (param_1 !=
      (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    UE::Tasks::Private::FTaskBase::
    AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
              ((FTaskBase *)this,param_1,false);
  }
  LOCK();
  plVar1 = &this->_padding_;
  lVar2 = *plVar1;
  *(char *)plVar1 = (char)*plVar1 + -1;
  UNLOCK();
  if ((lVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)&this->_padding_);
  }
  this->_padding_ =
       (longlong)&___7__TGraphTask_VFClothSimulationProxyParallelTask_ClothAsset_Chaos_UE____6B_;
  return this;
}

// ExecuteTask @ 14dc45cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask>::ExecuteTask
          (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  Type TVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (this != (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FClothSimulationProxyParallelTask = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName((FName *)&local_res8.s,"FClothSimulationProxyParallelTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FClothSimulationProxyParallelTask,*pFVar8,
               L"FClothSimulationProxyParallelTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_FClothSimulationProxyParallelTask;
  if (_StatPtr_FClothSimulationProxyParallelTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FClothSimulationProxyParallelTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FClothSimulationProxyParallelTask,*pFVar8,
                        L"FClothSimulationProxyParallelTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    TVar7 = UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetDesiredThread();
    UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::DoTask
              ((FClothSimulationProxyParallelTask *)&this->TaskStorage,TVar7,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
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
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      FVar11.Value = 0;
    }
    TVar7 = UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::GetDesiredThread();
    UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask::DoTask
              ((FClothSimulationProxyParallelTask *)&this->TaskStorage,TVar7,
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
        local_28.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar11.Value;
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
  if (this != (TGraphTask<UE::Chaos::ClothAsset::FClothSimulationProxyParallelTask> *)0x0) {
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


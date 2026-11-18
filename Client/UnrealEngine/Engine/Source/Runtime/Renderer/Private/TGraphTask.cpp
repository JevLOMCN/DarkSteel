// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ExecuteTask @ 144b1eed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TGraphTask<FUpdateCachePrimitivesTask>::ExecuteTask(TGraphTask<FUpdateCachePrimitivesTask> *this)

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
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FUpdateCachePrimitivesTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FUpdateCachePrimitivesTask::GetStatId(void)const___ptr64'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FUpdateCachePrimitivesTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FUpdateCachePrimitivesTask::GetStatId(void)const___ptr64'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FUpdateCachePrimitivesTask::GetStatId'::__l2::FStat_FUpdateCachePrimitivesTask>
      ::
      FThreadSafeStaticStat<_FUpdateCachePrimitivesTask::GetStatId_::__l2::FStat_FUpdateCachePrimitivesTask>
                (&`public:_struct_TStatId___cdecl_FUpdateCachePrimitivesTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FUpdateCachePrimitivesTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FUpdateCachePrimitivesTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar8 = _StatPtr_FUpdateCachePrimitivesTask;
  if (_StatPtr_FUpdateCachePrimitivesTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FUpdateCachePrimitivesTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FUpdateCachePrimitivesTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FUpdateCachePrimitivesTask,*pFVar7,
                        L"FUpdateCachePrimitivesTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
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
      goto LAB_144b1f068;
    }
  }
  bVar4 = false;
  FVar11 = local_48;
  FVar10.Value = 0;
LAB_144b1f068:
  FUpdateCachePrimitivesTask::GetDesiredThread((FUpdateCachePrimitivesTask *)&this->TaskStorage);
  FIndirectLightingCache::UpdateCachePrimitivesInternal
            (*(FIndirectLightingCache **)(this->TaskStorage).Pad,
             *(FScene **)((this->TaskStorage).Pad + 8),
             *(FSceneRenderer **)((this->TaskStorage).Pad + 0x10),
             (bool)(this->TaskStorage).Pad[0x30],
             *(TMap<UE::Math::TIntVector3<int>,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>_>
               **)((this->TaskStorage).Pad + 0x18),
             *(TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_> **)
              ((this->TaskStorage).Pad + 0x20),
             *(TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> **)
              ((this->TaskStorage).Pad + 0x28));
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
  if (this != (TGraphTask<FUpdateCachePrimitivesTask> *)0x0) {
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

// ExecuteTask @ 144f0ba00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TGraphTask<FDrawVisibleMeshCommandsAnyThreadTask>::ExecuteTask
          (TGraphTask<FDrawVisibleMeshCommandsAnyThreadTask> *this)

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
  
  if (this != (TGraphTask<FDrawVisibleMeshCommandsAnyThreadTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FDrawVisibleMeshCommandsAnyThreadTask::GetStatId'::__l2::FStat_FDrawVisibleMeshCommandsAnyThreadTask>
      ::
      FThreadSafeStaticStat<_FDrawVisibleMeshCommandsAnyThreadTask::GetStatId_::__l2::FStat_FDrawVisibleMeshCommandsAnyThreadTask>
                (&`public:_struct_TStatId___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FDrawVisibleMeshCommandsAnyThreadTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FDrawVisibleMeshCommandsAnyThreadTask;
  if (_StatPtr_FDrawVisibleMeshCommandsAnyThreadTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FDrawVisibleMeshCommandsAnyThreadTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FDrawVisibleMeshCommandsAnyThreadTask,*pFVar8,
                        L"FDrawVisibleMeshCommandsAnyThreadTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    TVar7 = FRenderTask::GetDesiredThread();
    FDrawVisibleMeshCommandsAnyThreadTask::DoTask
              ((FDrawVisibleMeshCommandsAnyThreadTask *)&this->TaskStorage,TVar7,
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
    TVar7 = FRenderTask::GetDesiredThread();
    FDrawVisibleMeshCommandsAnyThreadTask::DoTask
              ((FDrawVisibleMeshCommandsAnyThreadTask *)&this->TaskStorage,TVar7,
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
  if (this != (TGraphTask<FDrawVisibleMeshCommandsAnyThreadTask> *)0x0) {
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

// ExecuteTask @ 144f0bd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TGraphTask<FMeshDrawCommandInitResourcesTask>::ExecuteTask
          (TGraphTask<FMeshDrawCommandInitResourcesTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_38;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FMeshDrawCommandInitResourcesTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FMeshDrawCommandInitResourcesTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FMeshDrawCommandInitResourcesTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FMeshDrawCommandInitResourcesTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FMeshDrawCommandInitResourcesTask::GetStatId'::__l2::FStat_FMeshDrawCommandInitResourcesTask>
      ::
      FThreadSafeStaticStat<_FMeshDrawCommandInitResourcesTask::GetStatId_::__l2::FStat_FMeshDrawCommandInitResourcesTask>
                (&`public:_struct_TStatId___cdecl_FMeshDrawCommandInitResourcesTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FMeshDrawCommandInitResourcesTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FMeshDrawCommandInitResourcesTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FMeshDrawCommandInitResourcesTask;
  if (_StatPtr_FMeshDrawCommandInitResourcesTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FMeshDrawCommandInitResourcesTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FMeshDrawCommandInitResourcesTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FMeshDrawCommandInitResourcesTask,*pFVar8,
                        L"FMeshDrawCommandInitResourcesTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar7 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_144f0beb3;
    }
  }
  bVar4 = false;
  FVar11 = local_38;
  FVar10.Value = 0;
LAB_144f0beb3:
  FMeshDrawCommandInitResourcesTask::AnyThreadTask
            ((FMeshDrawCommandInitResourcesTask *)&this->TaskStorage);
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
  if (this != (TGraphTask<FMeshDrawCommandInitResourcesTask> *)0x0) {
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

// ExecuteTask @ 144f0c010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TGraphTask<FMeshDrawCommandPassSetupTask>::ExecuteTask
          (TGraphTask<FMeshDrawCommandPassSetupTask> *this)

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
  FStatMessage local_38;
  
  if (this != (TGraphTask<FMeshDrawCommandPassSetupTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FMeshDrawCommandPassSetupTask::GetStatId(void)const___ptr64'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FMeshDrawCommandPassSetupTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FMeshDrawCommandPassSetupTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FMeshDrawCommandPassSetupTask::GetStatId'::__l2::FStat_FMeshDrawCommandPassSetupTask>
      ::
      FThreadSafeStaticStat<_FMeshDrawCommandPassSetupTask::GetStatId_::__l2::FStat_FMeshDrawCommandPassSetupTask>
                (&`public:_struct_TStatId___cdecl_FMeshDrawCommandPassSetupTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FMeshDrawCommandPassSetupTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FMeshDrawCommandPassSetupTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar8 = _StatPtr_FMeshDrawCommandPassSetupTask;
  if (_StatPtr_FMeshDrawCommandPassSetupTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FMeshDrawCommandPassSetupTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FMeshDrawCommandPassSetupTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FMeshDrawCommandPassSetupTask,*pFVar7,
                        L"FMeshDrawCommandPassSetupTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    FMeshDrawCommandPassSetupTask::GetDesiredThread
              ((FMeshDrawCommandPassSetupTask *)&this->TaskStorage);
    FMeshDrawCommandPassSetupTask::AnyThreadTask
              ((FMeshDrawCommandPassSetupTask *)&this->TaskStorage);
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
    FMeshDrawCommandPassSetupTask::GetDesiredThread
              ((FMeshDrawCommandPassSetupTask *)&this->TaskStorage);
    FMeshDrawCommandPassSetupTask::AnyThreadTask
              ((FMeshDrawCommandPassSetupTask *)&this->TaskStorage);
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
  if (this != (TGraphTask<FMeshDrawCommandPassSetupTask> *)0x0) {
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

// ExecuteTask @ 14562eb00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TGraphTask<FGatherShadowPrimitivesPrepareTask>::ExecuteTask
          (TGraphTask<FGatherShadowPrimitivesPrepareTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  Type TVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  int iVar9;
  TAtomic<FMinimalName> TVar10;
  LARGE_INTEGER local_res8;
  TRefCountPtr<FBaseGraphTask> local_res10;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FGatherShadowPrimitivesPrepareTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar10 = TStatId::TStatId_NAME_None.Name;
  bVar3 = false;
  bVar5 = false;
  uVar8 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar9 = TStatId::TStatId_NAME_None.Name._4_4_;
  local_res10.Reference = (FBaseGraphTask *)this;
  if ((uVar8 == 0) && (iVar9 == 0)) {
    TVar7 = FGatherShadowPrimitivesPrepareTask::GetDesiredThread();
    FGatherShadowPrimitivesPrepareTask::DoTask
              ((FGatherShadowPrimitivesPrepareTask *)&this->TaskStorage,TVar7,&local_res10);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = uVar8;
        local_res8.s.HighPart = iVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = uVar8;
      local_res8.s.HighPart = iVar9;
      FThreadStats::AddMessage((FName)TVar10,CycleScopeStart);
      bVar4 = true;
    }
    else {
      TVar10 = (TAtomic<FMinimalName>)0x0;
      uVar8 = 0;
    }
    TVar7 = FGatherShadowPrimitivesPrepareTask::GetDesiredThread();
    FGatherShadowPrimitivesPrepareTask::DoTask
              ((FGatherShadowPrimitivesPrepareTask *)&this->TaskStorage,TVar7,&local_res10);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (TVar10 != (TAtomic<FMinimalName>)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = TVar10._4_4_ & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = uVar8;
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
  if ((TGraphTask<FGatherShadowPrimitivesPrepareTask> *)local_res10.Reference !=
      (TGraphTask<FGatherShadowPrimitivesPrepareTask> *)0x0) {
    LOCK();
    plVar2 = (longlong *)&(local_res10.Reference)->field_0x30;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (*(code *)**(undefined8 **)local_res10.Reference)(local_res10.Reference,1);
    }
  }
  return;
}

// ExecuteTask @ 1458f3c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FFeedbackAnalysisTask>::ExecuteTask(TGraphTask<FFeedbackAnalysisTask> *this)

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
  
  if (this != (TGraphTask<FFeedbackAnalysisTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FFeedbackAnalysisTask::GetStatId(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FFeedbackAnalysisTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FFeedbackAnalysisTask::GetStatId(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FFeedbackAnalysisTask::GetStatId'::__l2::FStat_FFeedbackAnalysisTask>::
      FThreadSafeStaticStat<_FFeedbackAnalysisTask::GetStatId_::__l2::FStat_FFeedbackAnalysisTask>
                (&`public:_struct_TStatId___cdecl_FFeedbackAnalysisTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FFeedbackAnalysisTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FFeedbackAnalysisTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar8 = _StatPtr_FFeedbackAnalysisTask;
  if (_StatPtr_FFeedbackAnalysisTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FFeedbackAnalysisTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FFeedbackAnalysisTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FFeedbackAnalysisTask,*pFVar7,L"FFeedbackAnalysisTask",
                        "STATGROUP_VirtualTexturing","STATCAT_Advanced",L"Virtual Texturing",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    FTaskTagScope::FTaskTagScope((FTaskTagScope *)&local_28,EParallelRenderingThread);
    FFeedbackAnalysisTask::DoTask((FFeedbackAnalysisParameters *)&this->TaskStorage);
    FTaskTagScope::~FTaskTagScope((FTaskTagScope *)&local_28);
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
    FTaskTagScope::FTaskTagScope((FTaskTagScope *)&local_28,EParallelRenderingThread);
    FFeedbackAnalysisTask::DoTask((FFeedbackAnalysisParameters *)&this->TaskStorage);
    FTaskTagScope::~FTaskTagScope((FTaskTagScope *)&local_28);
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
  if (this != (TGraphTask<FFeedbackAnalysisTask> *)0x0) {
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

// ExecuteTask @ 1458f3fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FGatherRequestsTask>::ExecuteTask(TGraphTask<FGatherRequestsTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  void *_Dst;
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
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FGatherRequestsTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_FGatherRequestsTask::GetStatId(void)const___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FGatherRequestsTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FGatherRequestsTask::GetStatId(void)const___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FGatherRequestsTask::GetStatId'::__l2::FStat_FGatherRequestsTask>::
    FThreadSafeStaticStat<_FGatherRequestsTask::GetStatId_::__l2::FStat_FGatherRequestsTask>
              (&`public:_struct_TStatId___cdecl_FGatherRequestsTask::GetStatId(void)const___ptr64'::
                __l2::StatPtr_FGatherRequestsTask);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FGatherRequestsTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_FGatherRequestsTask;
  if (_StatPtr_FGatherRequestsTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FGatherRequestsTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FGatherRequestsTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FGatherRequestsTask,*pFVar7,L"FGatherRequestsTask",
                        "STATGROUP_VirtualTexturing","STATCAT_Advanced",L"Virtual Texturing",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
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
      goto LAB_1458f413c;
    }
  }
  bVar4 = false;
  FVar11 = local_48;
  FVar10.Value = 0;
LAB_1458f413c:
  FTaskTagScope::FTaskTagScope((FTaskTagScope *)&local_38,EParallelRenderingThread);
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FGatherRequestsTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId334,"FVirtualTextureSystem::GatherRequestsTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0x14e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FGatherRequestsTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId334);
  }
  _Dst = *(void **)((this->TaskStorage).Pad + 0x18);
  memset(_Dst,0xff,0x800);
  memset((void *)((longlong)_Dst + 0x2800),0xff,0x800);
  memset((void *)((longlong)_Dst + 0x6e00),0xff,0x400);
  memset((void *)((longlong)_Dst + 0xb000),0xff,0x800);
  FVirtualTextureSystem::GatherRequestsTask
            (*(FVirtualTextureSystem **)(this->TaskStorage).Pad,
             (FGatherRequestsParameters *)&this->TaskStorage);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FTaskTagScope::~FTaskTagScope((FTaskTagScope *)&local_38);
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
  if (this != (TGraphTask<FGatherRequestsTask> *)0x0) {
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


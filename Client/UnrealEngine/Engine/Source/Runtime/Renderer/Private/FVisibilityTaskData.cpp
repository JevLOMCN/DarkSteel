// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 17

// FVisibilityTaskData @ 14551f2e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVisibilityTaskData * __thiscall
FVisibilityTaskData::FVisibilityTaskData
          (FVisibilityTaskData *this,FRHICommandListImmediate *param_1,FSceneRenderer *param_2)

{
  int iVar1;
  EVisibilityTaskSchedule EVar2;
  code *pcVar3;
  bool bVar4;
  FVisibilityTaskData *pFVar5;
  undefined4 uStack_1c;
  TArrayView<FViewInfo_*_const,int> local_18;
  
  this->SceneRenderer = param_2;
  this->_padding_ = (longlong)&___7FVisibilityTaskData__6B_;
  this->RHICmdList = param_1;
  this->Scene = *(FScene **)&param_2->field_0x8;
  (this->Views).DataPtr = (FViewInfo **)(param_2->AllViews).AllocatorInstance.Data;
  iVar1 = (param_2->AllViews).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FVisibilityTaskData *)(*pcVar3)();
      return pFVar5;
    }
  }
  (this->Views).ArrayNum = iVar1;
  this->ViewFamily = &this->SceneRenderer->ViewFamily;
  iVar1 = *(int *)&this->Scene->field_0x8;
  (this->Allocator).Next =
       (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
        )0x0;
  (this->ViewPackets).AllocatorInstance.Data = (FVisibilityViewPacket *)0x0;
  this->ShadingPath = (uint)(2 < iVar1);
  (this->ViewPackets).ArrayNum = 0;
  (this->ViewPackets).ArrayMax = 0;
  (this->DynamicMeshElements).CommandPipe = (TCommandPipe<FDynamicPrimitiveIndexList> *)0x0;
  (this->DynamicMeshElements).PrimitiveViewMasks = (FDynamicPrimitiveViewMasks *)0x0;
  (this->DynamicMeshElements).ContextContainer.Views.DataPtr = (FViewInfo **)0x0;
  (this->DynamicMeshElements).ContextContainer.Views.ArrayNum = 0;
  (this->DynamicMeshElements).ContextContainer.Contexts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DynamicMeshElements).ContextContainer.Contexts.ArrayNum = 0;
  (this->DynamicMeshElements).ContextContainer.Contexts.ArrayMax = 0;
  (this->DynamicMeshElements).ContextContainer.CommandLists.AllocatorInstance.Data =
       (FQueuedCommandList *)0x0;
  (this->DynamicMeshElements).ContextContainer.CommandLists.ArrayNum = 0;
  (this->DynamicMeshElements).ContextContainer.CommandLists.ArrayMax = 0;
  (this->DynamicMeshElements).ContextContainer.bFinished = false;
  (this->DynamicMeshElements).ViewCommandsPerView.AllocatorInstance.SecondaryData =
       (ForElementType<FViewCommands>)0x0;
  (this->DynamicMeshElements).ViewCommandsPerView.ArrayNum = 0;
  (this->DynamicMeshElements).ViewCommandsPerView.ArrayMax = 4;
  (this->DynamicMeshElements).DynamicPrimitives.AllocatorInstance.Data = (FDynamicPrimitive *)0x0;
  (this->DynamicMeshElements).DynamicPrimitives.ArrayNum = 0;
  (this->DynamicMeshElements).DynamicPrimitives.ArrayMax = 0;
  (this->DynamicMeshElements).DynamicPrimitiveTaskPipes.AllocatorInstance.Data = (FPipe *)0x0;
  (this->DynamicMeshElements).DynamicPrimitiveTaskPipes.ArrayNum = 0;
  (this->DynamicMeshElements).DynamicPrimitiveTaskPipes.ArrayMax = 0;
  (this->Tasks).FrustumCullLegacyTask.Reference = (FBaseGraphTask *)0x0;
  (this->Tasks).ComputeRelevanceLegacyTask.Reference = (FBaseGraphTask *)0x0;
  (this->Tasks).DynamicMeshElementsPipe.Reference = (FBaseGraphTask *)0x0;
  (this->Tasks).DynamicMeshElementsRenderThread.Reference = (FBaseGraphTask *)0x0;
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).LightVisibility,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(596)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).BeginInitVisibility,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(597)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).FrustumCull,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(598)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).OcclusionCull,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(599)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).ComputeRelevance,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(600)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).DynamicMeshElementsPrerequisites,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(601)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).DynamicMeshElements,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(602)"
            );
  (this->Tasks).FinalizeRelevance.Pimpl.Reference = (FTaskBase *)0x0;
  (this->Tasks).MeshPassSetup.Pimpl.Reference = (FTaskBase *)0x0;
  (this->Tasks).bDynamicMeshElementsPrerequisitesTriggered = false;
  (this->Tasks).bWaitingAllowed = false;
  local_18.DataPtr = (this->Views).DataPtr;
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = (this->Views).ArrayNum;
  FVisibilityTaskConfig::FVisibilityTaskConfig(&this->TaskConfig,this->Scene,&local_18);
  bVar4 = (bool)(**(code **)(*(longlong *)param_2 + 0x60))(param_2);
  this->bAddNaniteRelevance = bVar4;
  if ((this->ViewFamily->_padding_ & 0x800000000) != 0) {
    bVar4 = AllowDebugViewmodes();
    if (bVar4) {
      bVar4 = true;
      goto LAB_14551f4ea;
    }
  }
  bVar4 = false;
LAB_14551f4ea:
  EVar2 = (this->TaskConfig).Schedule;
  this->bAddLightmapDensityCommands = bVar4;
  this->bFinished = false;
  (this->Tasks).bWaitingAllowed = EVar2 == Parallel;
  return this;
}

// ~FVisibilityTaskData @ 145520e20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FVisibilityTaskData::~FVisibilityTaskData(FVisibilityTaskData *this)

{
  FView *pFVar1;
  FVisibilityViewPacket *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FVisibilityTaskData__6B_;
  if (this->bFinished == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFinished",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                       ,0x200,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->TaskConfig).OcclusionCull.Views.AllocatorInstance.SecondaryData.Data;
  if (pFVar1 != (FView *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
  }
  FTasks::~FTasks(&this->Tasks);
  FDynamicMeshElements::~FDynamicMeshElements(&this->DynamicMeshElements);
  DestructItems<FVisibilityViewPacket,int>
            ((this->ViewPackets).AllocatorInstance.Data,(this->ViewPackets).ArrayNum);
  pFVar2 = (this->ViewPackets).AllocatorInstance.Data;
  if (pFVar2 != (FVisibilityViewPacket *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::BulkDelete
            (&this->Allocator);
  this->_padding_ = (longlong)&___7IVisibilityTaskData__6B_;
  return;
}

// operator() @ 1455230e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FVisibilityTaskData::GatherDynamicMeshElements'::__l5::<lambda_1>::operator()
          (void *this,TArrayView<FPrimitiveSceneProxy_*,int> *param_1,
          TArray<FDynamicPrimitiveIndex,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_2,TArray<FDynamicPrimitiveIndex,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                   *param_3)

{
  FDynamicPrimitiveIndex FVar1;
  FDynamicPrimitiveIndex *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar5 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar5) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1 = *(FDynamicPrimitiveIndex *)
               ((longlong)&((param_2->AllocatorInstance).Data)->Index + lVar8);
      uVar6 = (uint)FVar1 & 0xffffff;
      if ((param_1->ArrayNum <= (int)uVar6) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((bool)param_1->DataPtr[uVar6]->bSupportsParallelGDME) {
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 4;
      }
      else {
        iVar5 = param_3->ArrayNum;
        if (iVar5 == param_3->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_>
                            (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar5 + 1;
        (param_3->AllocatorInstance).Data[iVar5] = FVar1;
        uVar6 = 0;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        iVar5 = ~uVar7 + param_2->ArrayNum;
        if (1 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          memmove(pFVar2 + (int)uVar7,pFVar2 + (param_2->ArrayNum - iVar5),(longlong)iVar5 << 2);
        }
        param_2->ArrayNum = param_2->ArrayNum + -1;
      }
      iVar5 = param_2->ArrayNum;
    } while ((int)uVar7 < iVar5);
  }
  return;
}

// operator() @ 145524920

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FVisibilityTaskData::LaunchVisibilityTasks'::__l25::<lambda_5>::operator()(void *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4540,"FSceneRenderer_FinalizeStaticRelevance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x11bc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4540);
  }
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x50);
  lVar4 = *(longlong *)(lVar2 + 0x48);
  lVar3 = (longlong)iVar1 * 0x230 + lVar4;
  while( true ) {
    if (*(int *)(lVar2 + 0x50) != iVar1) {
      `TCheckedPointerIterator<FVisibilityViewPacket,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar4 == lVar3) break;
    FComputeAndMarkRelevance::Finalize(*(FComputeAndMarkRelevance **)(lVar4 + 0x130));
    lVar4 = lVar4 + 0x230;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Finish @ 145540380

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FVisibilityTaskData::Finish(FVisibilityTaskData *this)

{
  int *piVar1;
  FTaskEvent FVar2;
  FTaskBase *pFVar3;
  bool bVar4;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FinishVisibility");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4902,"FinishVisibility",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x1326);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4902);
  }
  FVar2 = (this->Tasks).ComputeRelevance;
  if (FVar2 != (FTaskEvent)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)FVar2);
  }
  pFVar3 = (this->Tasks).FinalizeRelevance.Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar3);
  }
  FVar2 = (this->Tasks).DynamicMeshElements;
  if (FVar2 != (FTaskEvent)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)FVar2);
  }
  pFVar3 = (this->Tasks).MeshPassSetup.Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar3);
  }
  DestructItems<FVisibilityViewPacket,int>
            ((this->ViewPackets).AllocatorInstance.Data,(this->ViewPackets).ArrayNum);
  piVar1 = &(this->ViewPackets).ArrayMax;
  (this->ViewPackets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibilityViewPacket>_>
              (0x230,0x10,0,&(this->ViewPackets).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DynamicMeshElements).DynamicPrimitives.ArrayMax;
  (this->DynamicMeshElements).DynamicPrimitives.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitive>_>
              (0x10,4,0,&(this->DynamicMeshElements).DynamicPrimitives.AllocatorInstance,0,piVar1);
  }
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::BulkDelete
            (&this->Allocator);
  this->bFinished = true;
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// FinishGatherDynamicMeshElements @ 1455404e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVisibilityTaskData::FinishGatherDynamicMeshElements
          (FVisibilityTaskData *this,Type param_1,FInstanceCullingManager *param_2,
          FVirtualTextureUpdater *param_3)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  FTaskHandle *pFVar3;
  FScriptContainerElement *pFVar4;
  atomic<unsigned_int> aVar5;
  ETaskPriority EVar6;
  int iVar7;
  FTaskEvent this_00;
  FRHICommandListImmediate *this_01;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  FVirtualTextureSystem *this_02;
  FTaskBase *pFVar12;
  undefined8 *puVar13;
  FTaskBase *this_03;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  Type local_res10;
  FInstanceCullingManager *local_res18;
  longlong local_88 [2];
  FQueuedCommandList *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_68;
  FVisibilityTaskData *local_58;
  Type TStack_50;
  undefined4 uStack_4c;
  FInstanceCullingManager *local_48;
  
  local_res10 = param_1;
  local_res18 = param_2;
  bVar10 = IsInRenderingThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                          ,0x1313,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FinishDynamicMeshElements");
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4884,"FinishDynamicMeshElements",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x1314);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4884);
  }
  this_02 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::WaitForTasks(this_02,param_3);
  this_00 = (this->Tasks).DynamicMeshElements;
  if (this_00 != (FTaskEvent)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this_00);
  }
  pFVar14 = (this->DynamicMeshElements).ContextContainer.Contexts.AllocatorInstance.Data;
  iVar7 = (this->DynamicMeshElements).ContextContainer.Contexts.ArrayNum;
  this_01 = this->RHICmdList;
  pFVar4 = pFVar14 + (longlong)iVar7 * 8;
  while( true ) {
    if ((this->DynamicMeshElements).ContextContainer.Contexts.ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDynamicMeshElementContext_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar14 == pFVar4) break;
    lVar8 = *(longlong *)pFVar14;
    FMeshElementCollector::Finish((FMeshElementCollector *)(lVar8 + 0x5e8));
    FGlobalDynamicVertexBuffer::Commit((FGlobalDynamicVertexBuffer *)(lVar8 + 0x758));
    FGlobalDynamicIndexBuffer::Commit((FGlobalDynamicIndexBuffer *)(lVar8 + 0x770));
    FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)(lVar8 + 0x750));
    UE::Tasks::FPipe::WaitUntilEmpty((FPipe *)(lVar8 + 0x798),(FTimespan)0x7fffffffffffffff);
    pFVar14 = pFVar14 + 8;
  }
  local_78 = (this->DynamicMeshElements).ContextContainer.CommandLists.AllocatorInstance.Data;
  iVar7 = (this->DynamicMeshElements).ContextContainer.CommandLists.ArrayNum;
  if ((iVar7 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_68._12_4_ = uStack_6c;
  local_68.ArrayNum = iVar7;
  local_68.DataPtr = local_78;
  iStack_70 = iVar7;
  FRHICommandListImmediate::QueueAsyncCommandListSubmit(this_01,&local_68,Disabled,0);
  this_03 = (FTaskBase *)0x0;
  piVar2 = &(this->DynamicMeshElements).ContextContainer.CommandLists.ArrayMax;
  (this->DynamicMeshElements).ContextContainer.CommandLists.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
              (8,8,0,&(this->DynamicMeshElements).ContextContainer.CommandLists.AllocatorInstance,0,
               piVar2);
  }
  EVar6 = (this->TaskConfig).TaskPriority;
  TStack_50 = local_res10;
  local_48 = local_res18;
  local_58 = this;
  pFVar12 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar12 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar12,2,true);
    pFVar12->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FVisibilityTaskData::FinishGatherDynamicMeshElements'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar12,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(4890)"
               ,EVar6,None,None);
    pFVar12[1]._padding_ = (longlong)local_58;
    pFVar12[1]._padding_ = CONCAT44(uStack_4c,TStack_50);
    pFVar12[1]._padding_ = (longlong)local_48;
    pFVar12->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FVisibilityTaskData::FinishGatherDynamicMeshElements'::`2'::<lambda_1>_>
          ::_vftable_;
    this_03 = pFVar12;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_03,0x100);
  pFVar3 = &(this->Tasks).MeshPassSetup;
  if (pFVar3 == (FTaskHandle *)local_88) {
    if (this_03 == (FTaskBase *)0x0) goto LAB_1455407c3;
    LOCK();
    paVar1 = &this_03->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 != (atomic<unsigned_int>)0x1) goto LAB_1455407c3;
    puVar13 = (undefined8 *)this_03->_padding_;
  }
  else {
    pFVar12 = (pFVar3->Pimpl).Reference;
    (pFVar3->Pimpl).Reference = this_03;
    if (pFVar12 == (FTaskBase *)0x0) goto LAB_1455407c3;
    LOCK();
    paVar1 = &pFVar12->RefCount;
    aVar5 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar5 != (atomic<unsigned_int>)0x1) goto LAB_1455407c3;
    puVar13 = (undefined8 *)pFVar12->_padding_;
    this_03 = pFVar12;
  }
  (*(code *)*puVar13)(this_03,1);
LAB_1455407c3:
  FGlobalDynamicReadBuffer::Commit
            ((FGlobalDynamicReadBuffer *)&FSceneRenderer::DynamicReadBufferForInitViews,
             this->RHICmdList);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// GatherDynamicMeshElements @ 145541870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVisibilityTaskData::GatherDynamicMeshElements
          (FVisibilityTaskData *this,FDynamicPrimitiveIndexList *param_1)

{
  undefined1 *puVar1;
  ForElementType<FDynamicPrimitiveIndex> *pFVar2;
  atomic<unsigned_int> *paVar3;
  TRefCountPtr<FBaseGraphTask> *pTVar4;
  int iVar5;
  FDynamicPrimitiveIndex FVar6;
  atomic<unsigned_int> aVar7;
  ETaskPriority EVar8;
  FBaseGraphTask *pFVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  TRefCountPtr<FBaseGraphTask> TVar14;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar15;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar16;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar17;
  FTaskBase *this_02;
  FDynamicPrimitiveIndex *pFVar18;
  int *piVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 local_res8 [8];
  ForElementType<FDynamicPrimitiveIndex> local_res10;
  TArray<FDynamicPrimitiveIndex,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FPrimitiveSceneProxy_*,int> local_58;
  FDynamicPrimitiveIndexList local_48;
  
  iVar22 = 0;
  local_78.AllocatorInstance.Data = (FDynamicPrimitiveIndex *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  if ((this->DynamicMeshElements).ContextContainer.Contexts.ArrayNum + -1 < 1) {
    if (&local_78 != &param_1->Primitives) {
      local_78.AllocatorInstance.Data = (param_1->Primitives).AllocatorInstance.Data;
      (param_1->Primitives).AllocatorInstance.Data = (FDynamicPrimitiveIndex *)0x0;
      iVar22 = (param_1->Primitives).ArrayNum;
      local_78.ArrayNum = (param_1->Primitives).ArrayNum;
      local_78.ArrayMax = (param_1->Primitives).ArrayMax;
      (param_1->Primitives).ArrayNum = 0;
      (param_1->Primitives).ArrayMax = 0;
    }
    if (param_1 != &local_48) {
      pFVar18 = (param_1->Primitives).AllocatorInstance.Data;
      if (pFVar18 != (FDynamicPrimitiveIndex *)0x0) {
        pFVar18 = pFVar18 + -2;
        MemoryTrace_Free((ulong64)pFVar18,0,0);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          this_00 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this_00 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar18,FMalloc,true);
        }
        piVar19 = (int *)((longlong)pFVar18 - (ulonglong)(uint)*pFVar18);
        LOCK();
        iVar5 = *piVar19;
        *piVar19 = *piVar19 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          lVar10 = *(longlong *)(piVar19 + 0x10);
          MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar19,0,0);
          if (lVar10 - (longlong)piVar19 == 0x10000) {
            this_01 = FPageAllocator::Get();
            FPageAllocator::Free(this_01,piVar19);
          }
          else {
            (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar19);
          }
        }
      }
      (param_1->Primitives).AllocatorInstance.Data = (FDynamicPrimitiveIndex *)0x0;
      (param_1->Primitives).ArrayNum = 0;
      (param_1->Primitives).ArrayMax = 0;
    }
  }
  else {
    local_68 = (this->Scene->PrimitiveSceneProxies).AllocatorInstance.Data;
    iVar22 = (this->Scene->PrimitiveSceneProxies).ArrayNum;
    if ((iVar22 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_58._12_4_ = uStack_5c;
    local_58.ArrayNum = iVar22;
    local_58.DataPtr = (FPrimitiveSceneProxy **)local_68;
    iStack_60 = iVar22;
    `FVisibilityTaskData::GatherDynamicMeshElements'::__l5::<lambda_1>::operator()
              (local_res8,&local_58,&param_1->Primitives,&local_78);
    iVar22 = local_78.ArrayNum;
  }
  uVar20 = 0;
  if (iVar22 != 0) {
    TVar14 = FDynamicMeshElementContextContainer::LaunchRenderThreadTask
                       (&(this->DynamicMeshElements).ContextContainer,
                        (FDynamicPrimitiveIndexList *)&local_res10);
    pTVar4 = &(this->Tasks).DynamicMeshElementsRenderThread;
    if ((FBaseGraphTask *)pTVar4 != TVar14.Reference) {
      pFVar9 = pTVar4->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar4->Reference = *TVar14.Reference;
      *(undefined8 *)TVar14.Reference = 0;
      if (pFVar9 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar9->field_0x30;
        iVar22 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar22 == 1) {
          (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
        }
      }
    }
    if (local_res10.Data != (FDynamicPrimitiveIndex *)0x0) {
      LOCK();
      pFVar18 = local_res10.Data + 0xc;
      FVar6 = *pFVar18;
      *pFVar18 = (FDynamicPrimitiveIndex)((int)*pFVar18 + -1);
      UNLOCK();
      if ((FVar6 == (FDynamicPrimitiveIndex)0x1) &&
         (local_res10.Data != (FDynamicPrimitiveIndex *)0x0)) {
        (*(code *)**(undefined8 **)local_res10.Data)(local_res10.Data,1);
      }
    }
  }
  if ((param_1->Primitives).ArrayNum != 0) {
    aVar15 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x28,8);
    *(undefined8 *)((longlong)aVar15 + 8) = 0;
    *(undefined ***)aVar15 =
         &
         ___7__TObject_VFDynamicPrimitiveIndexQueue_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
    ;
    pFVar2 = (ForElementType<FDynamicPrimitiveIndex> *)((longlong)aVar15 + 0x10);
    aVar16 = (this->Allocator).Next;
    do {
      *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
        *)((longlong)aVar15 + 8) = aVar16;
      LOCK();
      aVar17 = (this->Allocator).Next;
      bVar12 = aVar16 == aVar17;
      if (bVar12) {
        (this->Allocator).Next = aVar15;
        aVar17 = aVar16;
      }
      UNLOCK();
      aVar16 = aVar17;
    } while (!bVar12);
    pFVar2->Data = (FDynamicPrimitiveIndex *)0x0;
    iVar22 = (param_1->Primitives).ArrayNum;
    pFVar18 = (param_1->Primitives).AllocatorInstance.Data;
    *(int *)((longlong)aVar15 + 0x18) = iVar22;
    if (iVar22 == 0) {
      *(int *)((longlong)aVar15 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_>
                (4,4,iVar22,0,pFVar2,iVar22,(int *)((longlong)aVar15 + 0x1c));
      memcpy(pFVar2->Data,pFVar18,(longlong)iVar22 << 2);
    }
    *(undefined4 *)((longlong)aVar15 + 0x20) = 0;
    iVar22 = (this->DynamicMeshElements).ContextContainer.Contexts.ArrayNum;
    uVar23 = uVar20;
    if (0 < iVar22 + -1) {
      do {
        EVar8 = (this->TaskConfig).TaskPriority;
        uVar21 = (uint)uVar20;
        uVar13 = 0;
        if ((int)uVar21 < iVar22) {
          uVar13 = ~uVar21 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar10 = *(longlong *)
                  ((this->DynamicMeshElements).ContextContainer.Contexts.AllocatorInstance.Data +
                  uVar23);
        this_02 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        if (this_02 == (FTaskBase *)0x0) {
          this_02 = (FTaskBase *)0x0;
        }
        else {
          UE::Tasks::Private::FTaskBase::FTaskBase(this_02,2,true);
          this_02->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`FDynamicMeshElementContext::LaunchAsyncTask'::`2'::<lambda_1>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    (this_02,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(4122)"
                     ,EVar8,None,None);
          this_02[1]._padding_ = lVar10;
          this_02[1]._padding_ = (longlong)pFVar2;
          this_02->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FDynamicMeshElementContext::LaunchAsyncTask'::`2'::<lambda_1>_>::
                _vftable_;
        }
        LOCK();
        *(longlong *)(lVar10 + 0x7a0) = *(longlong *)(lVar10 + 0x7a0) + 1;
        UNLOCK();
        LOCK();
        this_02->NumLocks = (atomic<unsigned_int>)((int)this_02->NumLocks + 1);
        UNLOCK();
        this_02->Pipe = (FPipe *)(lVar10 + 0x798);
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x100);
        UE::Tasks::Private::FTaskBase::AddPrerequisites
                  ((FTaskBase *)(this->Tasks).DynamicMeshElements,this_02);
        LOCK();
        paVar3 = &this_02->RefCount;
        aVar7 = *paVar3;
        *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar7 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
        iVar22 = (this->DynamicMeshElements).ContextContainer.Contexts.ArrayNum;
        uVar20 = (ulonglong)(uVar21 + 1);
        uVar23 = uVar23 + 8;
      } while ((int)(uVar21 + 1) < iVar22 + -1);
    }
  }
  if (local_78.AllocatorInstance.Data != (FDynamicPrimitiveIndex *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_78.AllocatorInstance.Data)
    ;
  }
  return;
}

// GatherDynamicMeshElements @ 145541ce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVisibilityTaskData::GatherDynamicMeshElements
          (FVisibilityTaskData *this,FDynamicPrimitiveViewMasks *param_1)

{
  FDynamicPrimitiveIndex *pFVar1;
  atomic<bool> aVar2;
  FTaskEvent FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  longlong local_res20;
  FDynamicPrimitiveIndexList local_60 [2];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"GatherDynamicMeshElements");
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4613,"GatherDynamicMeshElements",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x1205);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4613);
  }
  FVar3 = (this->Tasks).DynamicMeshElementsPrerequisites;
  if (FVar3 != (FTaskEvent)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)FVar3);
  }
  local_60[0].Primitives.AllocatorInstance.Data = (FDynamicPrimitiveIndex *)0x0;
  local_60[0].Primitives.ArrayNum = 0;
  local_60[0].Primitives.ArrayMax = 0;
  UE::Core::Private::
  ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_>
            (4,4,0x80,(ForElementType<FDynamicPrimitiveIndex> *)local_60,0,
             &local_60[0].Primitives.ArrayMax);
  lVar15 = (longlong)(param_1->Primitives).ArrayNum;
  uVar13 = 0;
  if (0 < lVar15) {
    local_res20 = 0;
    iVar8 = local_60[0].Primitives.ArrayNum;
    do {
      uVar14 = 1;
      uVar11 = 0;
      if ((int)uVar13 < (param_1->Primitives).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar10 = (param_1->Primitives).AllocatorInstance.Data[local_res20];
      uVar11 = (uint)bVar10;
      if (bVar10 != 0) {
        uVar9 = 0;
        iVar7 = iVar8;
        if (0 < (this->Views).ArrayNum) {
          lVar16 = 0;
          uVar12 = uVar11;
          do {
            uVar6 = 0;
            if ((int)uVar9 < (this->Views).ArrayNum) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (((uVar14 & uVar11) != 0) &&
               (bVar5 = IStereoRendering::IsASecondaryView
                                  (*(FSceneView **)(lVar16 + (longlong)(this->Views).DataPtr)),
               bVar5)) {
              uVar6 = 0;
              if ((int)uVar9 < (this->Views).ArrayNum) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar12 = uVar12 & 0xff |
                       1 << (*(uint *)(*(longlong *)(lVar16 + (longlong)(this->Views).DataPtr) +
                                      0xdd8) & 0x1f);
            }
            bVar10 = (byte)uVar12;
            uVar9 = uVar9 + 1;
            uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
            lVar16 = lVar16 + 8;
          } while ((int)uVar9 < (this->Views).ArrayNum);
          iVar7 = local_60[0].Primitives.ArrayNum;
        }
        if (iVar7 == local_60[0].Primitives.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_>
                            (0x404,(ForElementType<FDynamicPrimitiveIndex> *)local_60,
                             &local_60[0].Primitives.ArrayMax);
        }
        iVar8 = iVar7 + 1;
        pFVar1 = local_60[0].Primitives.AllocatorInstance.Data + iVar7;
        local_60[0].Primitives.ArrayNum = iVar8;
        *pFVar1 = (FDynamicPrimitiveIndex)((uint)*pFVar1 ^ ((uint)*pFVar1 ^ uVar13) & 0xffffff);
        pFVar1->ViewMask = bVar10;
      }
      local_res20 = local_res20 + 1;
      uVar13 = uVar13 + 1;
    } while (local_res20 < lVar15);
  }
  GatherDynamicMeshElements(this,local_60);
  FVar3 = (this->Tasks).DynamicMeshElements;
  if ((FVar3 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar3 + 0xd0) == '\0')) {
    FVar3 = (this->Tasks).DynamicMeshElements;
    LOCK();
    aVar2 = *(atomic<bool> *)((longlong)FVar3 + 0x45);
    *(atomic<bool> *)((longlong)FVar3 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar3 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar3 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar3,0xd8);
    }
  }
  if (local_60[0].Primitives.AllocatorInstance.Data != (FDynamicPrimitiveIndex *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_60[0].Primitives.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// GetComputeRelevanceTask @ 145543780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FTaskHandle __thiscall FVisibilityTaskData::GetComputeRelevanceTask(FVisibilityTaskData *this)

{
  FTaskBase *pFVar1;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> in_RDX;
  
  (in_RDX.Reference)->_padding_ = 0;
  pFVar1 = (this->Tasks).FinalizeRelevance.Pimpl.Reference;
  (in_RDX.Reference)->_padding_ = (longlong)pFVar1;
  if (pFVar1 != (FTaskBase *)0x0) {
    LOCK();
    pFVar1->RefCount = (atomic<unsigned_int>)((int)pFVar1->RefCount + 1);
    UNLOCK();
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
}

// GetFrustumCullTask @ 145543e50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FTaskHandle __thiscall FVisibilityTaskData::GetFrustumCullTask(FVisibilityTaskData *this)

{
  FTaskEvent FVar1;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> in_RDX;
  
  (in_RDX.Reference)->_padding_ = 0;
  FVar1 = (this->Tasks).FrustumCull;
  (in_RDX.Reference)->_padding_ = (longlong)FVar1;
  if (FVar1 != (FTaskEvent)0x0) {
    LOCK();
    *(int *)((longlong)FVar1 + 0x30) = *(int *)((longlong)FVar1 + 0x30) + 1;
    UNLOCK();
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
}

// GetLightVisibilityTask @ 145543e80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FTaskHandle __thiscall FVisibilityTaskData::GetLightVisibilityTask(FVisibilityTaskData *this)

{
  FTaskEvent FVar1;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> in_RDX;
  
  (in_RDX.Reference)->_padding_ = 0;
  FVar1 = (this->Tasks).LightVisibility;
  (in_RDX.Reference)->_padding_ = (longlong)FVar1;
  if (FVar1 != (FTaskEvent)0x0) {
    LOCK();
    *(int *)((longlong)FVar1 + 0x30) = *(int *)((longlong)FVar1 + 0x30) + 1;
    UNLOCK();
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
}

// GetViewCommandsPerView @ 1455467f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TArrayView<FViewCommands,int> * __thiscall
FVisibilityTaskData::GetViewCommandsPerView
          (FVisibilityTaskData *this,TArrayView<FViewCommands,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FViewCommands> FVar4;
  TArrayView<FViewCommands,int> *pTVar5;
  
  FVar4 = (this->DynamicMeshElements).ViewCommandsPerView.AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FViewCommands>)0x0) {
    FVar4 = (ForElementType<FViewCommands>)&(this->DynamicMeshElements).ViewCommandsPerView;
  }
  iVar1 = (this->DynamicMeshElements).ViewCommandsPerView.ArrayNum;
  __return_storage_ptr__->DataPtr = (FViewCommands *)FVar4;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FViewCommands,int> *)(*pcVar2)();
      return pTVar5;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsTaskWaitingAllowed @ 145547720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall FVisibilityTaskData::IsTaskWaitingAllowed(FVisibilityTaskData *this)

{
  return (this->Tasks).bWaitingAllowed;
}

// LaunchVisibilityTasks @ 145548060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVisibilityTaskData::LaunchVisibilityTasks(FVisibilityTaskData *this,FTaskHandle *param_1)

{
  undefined1 *puVar1;
  FDynamicPrimitiveViewMasks *pFVar2;
  atomic<unsigned_int> *paVar3;
  TRefCountPtr<FBaseGraphTask> *pTVar4;
  atomic<int> *paVar5;
  TArray<FViewCommands,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this_00;
  FTaskHandle *pFVar6;
  atomic<bool> aVar7;
  ETaskPriority EVar8;
  FScene *pFVar9;
  FViewInfo *pFVar10;
  FTaskEvent FVar11;
  FBaseGraphTask *pFVar12;
  TCommandPipe<FDynamicPrimitiveIndexList> *pTVar13;
  FGPUOcclusionParallel *this_01;
  FRHICommandListImmediate *pFVar14;
  FTaskBase *pFVar15;
  code *pcVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  FVisibilityViewPacket *pFVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_DecompressPrecomputedOcclusion> FVar25;
  uchar *puVar26;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar27;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar28;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar29;
  TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
  *this_04;
  FBaseGraphTask *this_05;
  FTask *pFVar30;
  undefined8 uVar31;
  FTaskBase *pFVar32;
  FRHICommandListBase *pFVar33;
  undefined8 *puVar34;
  longlong *plVar35;
  ForElementType<FViewCommands> FVar36;
  ulonglong uVar37;
  atomic<unsigned_int> aVar38;
  uint uVar39;
  FNameEntryId FVar40;
  FName FVar41;
  longlong lVar42;
  FVisibilityViewPacket *pFVar43;
  atomic<unsigned_int> aVar44;
  uint uVar45;
  int *piVar46;
  uint uVar47;
  bool bVar48;
  undefined1 auStackY_178 [32];
  undefined1 local_117 [7];
  int *local_110;
  uint local_108;
  FColor_u_0 local_104;
  FName local_100;
  uint local_f8;
  uint uStack_f4;
  FName local_f0;
  LARGE_INTEGER local_e0;
  FTaskHandle *local_d8;
  FStatMessage local_d0;
  FName local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_d8 = param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"LaunchVisibilityTasks");
  bVar48 = -1 < CpuChannel->Enabled;
  if (bVar48) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4422,"LaunchVisibilityTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x1146);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4422);
  }
  uVar45 = (this->Views).ArrayNum;
  if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
  }
  piVar46 = &(this->ViewPackets).ArrayMax;
  local_110 = piVar46;
  if (*piVar46 < (int)uVar45) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibilityViewPacket>_>
              (0x230,0x10,uVar45,&(this->ViewPackets).AllocatorInstance,(this->ViewPackets).ArrayNum
               ,piVar46);
  }
  uVar45 = 0;
  if (0 < (this->Views).ArrayNum) {
    lVar42 = 0;
    do {
      uVar39 = ~uVar45 >> 0x1f;
      uVar47 = 0;
      if ((int)uVar45 < (this->Views).ArrayNum) {
        uVar47 = uVar39;
      }
      if ((uVar47 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if (*(char *)(*(longlong *)(lVar42 + (longlong)(this->Views).DataPtr) + 0x11f7) == '\0') {
LAB_14554821a:
        uVar47 = 0;
        if ((int)uVar45 < (this->Views).ArrayNum) {
          uVar47 = uVar39;
        }
        if ((uVar47 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar20)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar9 = this->Scene;
        pFVar10 = *(FViewInfo **)(lVar42 + (longlong)(this->Views).DataPtr);
        iVar21 = (this->ViewPackets).ArrayNum;
        if (iVar21 == *piVar46) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibilityViewPacket>_>
                             (0x230,0x10,&(this->ViewPackets).AllocatorInstance,piVar46);
        }
        (this->ViewPackets).ArrayNum = iVar21 + 1;
        pFVar23 = FVisibilityViewPacket::FVisibilityViewPacket
                            ((this->ViewPackets).AllocatorInstance.Data + iVar21,this,pFVar9,pFVar10
                             ,uVar45);
        FVar11 = (pFVar23->Tasks).LightVisibility;
        if (FVar11 != (FTaskEvent)0x0) {
          UE::Tasks::Private::FTaskBase::AddPrerequisites
                    ((FTaskBase *)(this->Tasks).LightVisibility,(FTaskBase *)FVar11);
        }
        FVar11 = (pFVar23->Tasks).FrustumCull;
        if (FVar11 != (FTaskEvent)0x0) {
          UE::Tasks::Private::FTaskBase::AddPrerequisites
                    ((FTaskBase *)(this->Tasks).FrustumCull,(FTaskBase *)FVar11);
        }
        FVar11 = (pFVar23->Tasks).OcclusionCull;
        if (FVar11 != (FTaskEvent)0x0) {
          UE::Tasks::Private::FTaskBase::AddPrerequisites
                    ((FTaskBase *)(this->Tasks).OcclusionCull,(FTaskBase *)FVar11);
        }
        FVar11 = (pFVar23->Tasks).ComputeRelevance;
        if (FVar11 != (FTaskEvent)0x0) {
          UE::Tasks::Private::FTaskBase::AddPrerequisites
                    ((FTaskBase *)(this->Tasks).ComputeRelevance,(FTaskBase *)FVar11);
        }
        if (pFVar23->ViewState == (FSceneViewState *)0x0) {
          piVar46 = &(this->ViewPackets).ArrayMax;
        }
        else {
          FVar25 = StatPtr_STAT_DecompressPrecomputedOcclusion;
          if (StatPtr_STAT_DecompressPrecomputedOcclusion ==
              (FThreadSafeStaticStat<FStat_STAT_DecompressPrecomputedOcclusion>)0x0) {
            pFVar24 = ::FName::FName(&local_c0,"STAT_DecompressPrecomputedOcclusion");
            FVar25 = (FThreadSafeStaticStat<FStat_STAT_DecompressPrecomputedOcclusion>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_DecompressPrecomputedOcclusion,*pFVar24,
                                L"Decompress Occlusion","STATGROUP_InitViews","STATCAT_Advanced",
                                L"Init Views",true,true,ST_int64,true,false,MCR_Invalid);
          }
          FVar41 = *(FName *)FVar25;
          bVar20 = false;
          bVar19 = false;
          local_f0.ComparisonIndex.Value = 0;
          local_f0.Number = 0;
          FVar40 = FVar41.ComparisonIndex.Value;
          uVar47 = FVar41.Number;
          if ((FVar40.Value == 0) && (uVar47 == 0)) {
LAB_14554843c:
            bVar18 = false;
            FVar41 = local_f0;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_104.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_104._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
              bVar20 = false;
              bVar19 = true;
              if (-1 < CpuChannel->Enabled) {
                local_100.ComparisonIndex.Value = FVar40.Value;
                local_100.Number = uVar47;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_100,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                           ,0x115b);
                bVar20 = true;
                bVar19 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_14554843c;
            local_f8 = FVar40.Value;
            uStack_f4 = uVar47;
            local_f0 = FVar41;
            FThreadStats::AddMessage(FVar41,CycleScopeStart);
            bVar18 = true;
          }
          puVar26 = FSceneViewState::ResolvePrecomputedVisibilityData
                              (pFVar23->ViewState,pFVar23->View,this->Scene);
          pFVar23->View->PrecomputedVisibilityData = puVar26;
          if (pFVar23->View->PrecomputedVisibilityData != (uchar *)0x0) {
            this->SceneRenderer->bUsedPrecomputedVisibility = true;
          }
          if (bVar19) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar20) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          piVar46 = local_110;
          if ((((bVar18) && (FVar41 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_02 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_02 == (FThreadStats *)0x0) {
              this_03 = FThreadStatsPool::Get();
              this_02 = FThreadStatsPool::GetFromPool(this_03);
            }
            piVar46 = local_110;
            if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
              local_d0.NameAndInfo.Index = FVar41.ComparisonIndex.Value;
              local_d0.NameAndInfo.Number = FVar41.Number & 0xffff6fff | 0x6000;
              QueryPerformanceCounter(&local_e0);
              local_d0.StatData.Pad[4] = '\0';
              local_d0.StatData.Pad[5] = '\0';
              local_d0.StatData.Pad[6] = '\0';
              local_d0.StatData.Pad[7] = '\0';
              local_d0.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
              local_d0.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
              local_d0.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
              local_d0.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(this_02,&local_d0);
              piVar46 = &this_02->ScopeCount;
              *piVar46 = *piVar46 + -1;
              if (*piVar46 == 0) {
                FThreadStats::Flush(this_02,false,false);
                piVar46 = local_110;
              }
              else {
                piVar46 = local_110;
                if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(this_02,false,false);
                  piVar46 = local_110;
                }
              }
            }
          }
        }
      }
      else {
        uVar47 = 0;
        if ((int)uVar45 < (this->Views).ArrayNum) {
          uVar47 = uVar39;
        }
        if ((uVar47 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar20)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        if (*(int *)(*(longlong *)(lVar42 + (longlong)(this->Views).DataPtr) + 0xdd0) != 2)
        goto LAB_14554821a;
      }
      uVar45 = uVar45 + 1;
      lVar42 = lVar42 + 8;
    } while ((int)uVar45 < (this->Views).ArrayNum);
  }
  pFVar32 = (this->Scene->CacheMeshDrawCommandsTask).Pimpl.Reference;
  if (pFVar32 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::AddPrerequisites
              ((FTaskBase *)(this->Tasks).ComputeRelevance,pFVar32);
  }
  pFVar32 = (this->Scene->GPUSkinUpdateTask).Pimpl.Reference;
  if (pFVar32 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::AddPrerequisites
              ((FTaskBase *)(this->Tasks).DynamicMeshElementsPrerequisites,pFVar32);
  }
  if (((this->TaskConfig).Schedule == Parallel) && ((this->ViewPackets).ArrayNum == 1)) {
    aVar27 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xd0,0x10);
    *(undefined8 *)((longlong)aVar27 + 8) = 0;
    *(undefined ***)aVar27 =
         &
         ___7__TObject_V__TCommandPipe_UFDynamicPrimitiveIndexList_______TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
    ;
    aVar28 = (this->Allocator).Next;
    do {
      *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
        *)((longlong)aVar27 + 8) = aVar28;
      LOCK();
      aVar29 = (this->Allocator).Next;
      bVar20 = aVar28 == aVar29;
      if (bVar20) {
        (this->Allocator).Next = aVar27;
        aVar29 = aVar28;
      }
      UNLOCK();
      aVar28 = aVar29;
    } while (!bVar20);
    (((TCommandPipe<FDynamicPrimitiveIndexList> *)((longlong)aVar27 + 0x10))->PrerequisiteTask).
    Pimpl.Reference = (FTaskBase *)0x0;
    *(undefined8 *)((longlong)aVar27 + 0x20) = 0;
    *(undefined8 *)((longlong)aVar27 + 0x48) = 0;
    *(undefined8 *)((longlong)aVar27 + 0x50) = 0;
    *(undefined8 *)((longlong)aVar27 + 0x78) = 0;
    *(undefined1 *)((longlong)aVar27 + 0x80) = 0;
    *(undefined8 *)((longlong)aVar27 + 0x88) = 0;
    *(undefined8 *)((longlong)aVar27 + 0x90) = 0;
    UE::Tasks::FPipe::FPipe((FPipe *)((longlong)aVar27 + 0x98),L"GatherDynamicMeshElements");
    *(undefined4 *)((longlong)aVar27 + 0xc0) = 0;
    (this->DynamicMeshElements).CommandPipe =
         (TCommandPipe<FDynamicPrimitiveIndexList> *)((longlong)aVar27 + 0x10);
    local_a8 = *(longlong *)((longlong)aVar27 + 0x20);
    uVar17 = *(undefined8 *)((longlong)aVar27 + 0x28);
    local_98 = *(longlong *)((longlong)aVar27 + 0x30);
    uStack_90 = *(undefined8 *)((longlong)aVar27 + 0x38);
    uVar31 = *(undefined8 *)((longlong)aVar27 + 0x40);
    plStack_80 = *(longlong **)((longlong)aVar27 + 0x48);
    *(code **)((longlong)aVar27 + 0x20) =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FVisibilityTaskData::LaunchVisibilityTasks'::__l19::<lambda_1>,void,FDynamicPrimitiveIndexList_&&>
         ::Call;
    *(undefined8 *)((longlong)aVar27 + 0x28) = uStack_a0;
    *(undefined4 *)((longlong)aVar27 + 0x30) = 0x50fc5888;
    *(undefined4 *)((longlong)aVar27 + 0x34) = 1;
    *(FVisibilityTaskData **)((longlong)aVar27 + 0x38) = this;
    *(undefined4 *)((longlong)aVar27 + 0x40) = (undefined4)local_88;
    *(undefined4 *)((longlong)aVar27 + 0x44) = local_88._4_4_;
    *(undefined4 *)((longlong)aVar27 + 0x48) = 0;
    *(undefined4 *)((longlong)aVar27 + 0x4c) = 0;
    local_88 = uVar31;
    uStack_a0 = uVar17;
    if (local_a8 != 0) {
      plVar35 = &local_98;
      if (plStack_80 != (longlong *)0x0) {
        plVar35 = plStack_80;
      }
      (**(code **)(*plVar35 + 0x10))();
    }
    UE::Tasks::Private::FTaskHandle::operator=
              (&((this->DynamicMeshElements).CommandPipe)->PrerequisiteTask,
               (FTaskHandle *)&(this->Tasks).DynamicMeshElementsPrerequisites);
    this_04 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               *)GetGraphEventImplAllocator();
    this_05 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate(this_04);
    if (this_05 == (FBaseGraphTask *)0x0) {
      this_05 = (FBaseGraphTask *)0x0;
    }
    else {
      FBaseGraphTask::FBaseGraphTask
                (this_05,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                          *)0x0);
      *(undefined ***)this_05 = &___7FGraphEventImpl__6B_;
      TaskTrace::Created(*(ulong64 *)&this_05->field_0x50,0xd8);
      if (((*(ulonglong *)&this_05->field_0xb0 & 0x20) == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsCompleted()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                              ,0x1dd,L"State: %d"), bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      (**(code **)(*(longlong *)&this_05->field_0xa0 + 0x18))
                (&this_05->field_0xa0,&this_05->field_0x78);
      *(FBaseGraphTask **)&this_05->field_0x78 = this_05;
      *(undefined ***)&this_05->field_0xa0 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FBaseGraphTask **)&this_05->field_0x80 = this_05;
      pFVar30 = LowLevelTasks::FTask::GetActiveTask();
      uVar31 = 0;
      if (pFVar30 != (FTask *)0x0) {
        uVar31 = *(undefined8 *)&pFVar30->field_0x30;
      }
      *(undefined8 *)&this_05->field_0xa8 = uVar31;
      *(undefined8 *)&this_05->field_0xb0 = 0xc8000054184c7c00;
      this_05->field_0x44 = 2;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&this_05->field_0x8);
    }
    pTVar4 = &(this->Tasks).DynamicMeshElementsPipe;
    if (pTVar4 == (TRefCountPtr<FBaseGraphTask> *)&local_b8) {
      if (this_05 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &this_05->field_0x30;
        iVar21 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          puVar34 = *(undefined8 **)this_05;
          goto LAB_14554882a;
        }
      }
    }
    else {
      pFVar12 = pTVar4->Reference;
      pTVar4->Reference = this_05;
      if (pFVar12 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar12->field_0x30;
        iVar21 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          puVar34 = *(undefined8 **)pFVar12;
          this_05 = pFVar12;
LAB_14554882a:
          (*(code *)*puVar34)(this_05,1);
        }
      }
    }
    pTVar13 = (this->DynamicMeshElements).CommandPipe;
    local_78 = *(longlong *)&pTVar13->EmptyFunction;
    uVar17 = *(undefined8 *)&(pTVar13->EmptyFunction).field_0x8;
    local_68 = *(longlong *)&(pTVar13->EmptyFunction).field_0x10;
    uStack_60 = *(undefined8 *)&(pTVar13->EmptyFunction).field_0x18;
    uVar31 = *(undefined8 *)&(pTVar13->EmptyFunction).field_0x20;
    plStack_50 = *(longlong **)&(pTVar13->EmptyFunction).field_0x28;
    *(code **)&pTVar13->EmptyFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FVisibilityTaskData::LaunchVisibilityTasks'::__l19::<lambda_2>,void>::
         Call;
    *(undefined8 *)&(pTVar13->EmptyFunction).field_0x8 = uStack_70;
    *(undefined4 *)&(pTVar13->EmptyFunction).field_0x10 = 0x50fc58a8;
    *(undefined4 *)&(pTVar13->EmptyFunction).field_0x14 = 1;
    *(FVisibilityTaskData **)&(pTVar13->EmptyFunction).field_0x18 = this;
    *(undefined4 *)&(pTVar13->EmptyFunction).field_0x20 = (undefined4)local_58;
    *(undefined4 *)&(pTVar13->EmptyFunction).field_0x24 = local_58._4_4_;
    *(undefined4 *)&(pTVar13->EmptyFunction).field_0x28 = 0;
    *(undefined4 *)&(pTVar13->EmptyFunction).field_0x2c = 0;
    uStack_70 = uVar17;
    local_58 = uVar31;
    if (local_78 != 0) {
      plVar35 = &local_68;
      if (plStack_50 != (longlong *)0x0) {
        plVar35 = plStack_50;
      }
      (**(code **)(*plVar35 + 0x10))();
    }
    LOCK();
    paVar5 = &((this->DynamicMeshElements).CommandPipe)->NumCommands;
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  else {
    aVar27 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x20,8);
    *(undefined8 *)((longlong)aVar27 + 8) = 0;
    *(undefined ***)aVar27 =
         &
         ___7__TObject_UFDynamicPrimitiveViewMasks_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
    ;
    pFVar2 = (FDynamicPrimitiveViewMasks *)((longlong)aVar27 + 0x10);
    aVar28 = (this->Allocator).Next;
    do {
      *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
        *)((longlong)aVar27 + 8) = aVar28;
      LOCK();
      aVar29 = (this->Allocator).Next;
      bVar20 = aVar28 == aVar29;
      if (bVar20) {
        (this->Allocator).Next = aVar27;
        aVar29 = aVar28;
      }
      UNLOCK();
      aVar28 = aVar29;
    } while (!bVar20);
    *(int *)((longlong)aVar27 + 0x18) = 0;
    *(int *)((longlong)aVar27 + 0x1c) = 0;
    (pFVar2->Primitives).AllocatorInstance.Data = (uchar *)0x0;
    pFVar9 = this->Scene;
    (this->DynamicMeshElements).PrimitiveViewMasks = pFVar2;
    iVar21 = (pFVar9->Primitives).ArrayNum;
    iVar22 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_char>_>
                       (1,1,iVar21,(ForElementType<unsigned_char> *)pFVar2,
                        (int *)((longlong)aVar27 + 0x18),(int *)((longlong)aVar27 + 0x1c));
    memset((pFVar2->Primitives).AllocatorInstance.Data + iVar22,0,(longlong)iVar21);
  }
  bVar20 = IsParallelGatherDynamicMeshElementsEnabled();
  aVar44 = (atomic<unsigned_int>)0x0;
  if (bVar20) {
    aVar38 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
    if (GNumDynamicMeshElementTasks < (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers) {
      aVar38 = (atomic<unsigned_int>)GNumDynamicMeshElementTasks;
    }
    aVar44 = (atomic<unsigned_int>)0x0;
    if (0 < (int)aVar38) {
      aVar44 = aVar38;
    }
  }
  FDynamicMeshElementContextContainer::Init
            (&(this->DynamicMeshElements).ContextContainer,this->SceneRenderer,(int)aVar44);
  uVar45 = (this->Views).ArrayNum;
  this_00 = &(this->DynamicMeshElements).ViewCommandsPerView;
  piVar46 = &(this->DynamicMeshElements).ViewCommandsPerView.ArrayNum;
  iVar21 = *piVar46;
  if (iVar21 < (int)uVar45) {
    iVar22 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewCommands>_>
                       (0x7f0,8,uVar45 - iVar21,&this_00->AllocatorInstance,piVar46,
                        &(this->DynamicMeshElements).ViewCommandsPerView.ArrayMax);
    FVar36 = (this->DynamicMeshElements).ViewCommandsPerView.AllocatorInstance.SecondaryData;
    if (FVar36 == (ForElementType<FViewCommands>)0x0) {
      FVar36 = (ForElementType<FViewCommands>)this_00;
    }
    DefaultConstructItems<FViewCommands,int>
              ((void *)((longlong)FVar36 + (longlong)iVar22 * 0x7f0),uVar45 - iVar21);
  }
  else {
    if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
    }
    if ((int)uVar45 < iVar21) {
      uVar47 = iVar21 - uVar45;
      if (((int)(uVar47 | uVar45) < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if (uVar47 != 0) {
        TArray<FViewCommands,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
                  (this_00,uVar45,uVar47);
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FViewCommands>_>
                  (0x7f0,8,&this_00->AllocatorInstance,
                   (this->DynamicMeshElements).ViewCommandsPerView.ArrayNum,
                   &(this->DynamicMeshElements).ViewCommandsPerView.ArrayMax);
      }
    }
  }
  EVar8 = (this->TaskConfig).TaskPriority;
  pFVar32 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar32 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar32,2,true);
    pFVar32->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FVisibilityTaskData::LaunchVisibilityTasks'::`2'::<lambda_3>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar32,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(4507)"
               ,EVar8,None,None);
    pFVar32[1]._padding_ = (longlong)this;
    pFVar32->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FVisibilityTaskData::LaunchVisibilityTasks'::`2'::<lambda_3>_>::_vftable_
    ;
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar32,0x100);
    UE::Tasks::Private::FTaskBase::AddPrerequisites
              ((FTaskBase *)(this->Tasks).LightVisibility,pFVar32);
    LOCK();
    paVar3 = &pFVar32->RefCount;
    aVar44 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar44 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar32->_padding_)(pFVar32,1);
    }
  }
  if ((this->TaskConfig).Schedule != Parallel) goto LAB_145548e2e;
  FSceneRenderer::WaitOcclusionTests(this->SceneRenderer,this->RHICmdList);
  if (((this->Views).ArrayNum == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Views.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                          ,0x11a7,L""), bVar20)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (((this->Views).ArrayNum < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar20)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if ((*(char *)((longlong)&(*(this->Views).DataPtr)->_padding_ + 5) != '\0') &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Views[0]->bIsMobileMultiViewEnabled",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                          ,0x11a8,L"This culling path was not tested with MMV"), bVar20)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  local_108 = (this->ViewPackets).ArrayNum;
  uVar37 = (ulonglong)(int)local_108;
  pFVar23 = (this->ViewPackets).AllocatorInstance.Data;
  pFVar43 = pFVar23 + uVar37;
  while( true ) {
    if ((this->ViewPackets).ArrayNum != (int)uVar37) {
      local_117[0] = 0;
      `TCheckedPointerIterator<FVisibilityViewPacket,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_117);
    }
    if (pFVar23 == pFVar43) break;
    this_01 = (pFVar23->OcclusionCull).ContextIfParallel;
    if (this_01 != (FGPUOcclusionParallel *)0x0) {
      pFVar14 = this->RHICmdList;
      FGPUOcclusion::Map((FGPUOcclusion *)this_01,pFVar14);
      pFVar33 = ::operator_new(0x1bb0);
      if (pFVar33 == (FRHICommandListBase *)0x0) {
        pFVar33 = (FRHICommandListBase *)0x0;
      }
      else {
        FRHICommandListBase::FRHICommandListBase
                  (pFVar33,(FRHIGPUMask)*(uint *)&pFVar14->field_0x29c,false);
      }
      this_01->RHICmdList = (FRHICommandList *)pFVar33;
      FRHICommandListBase::SwitchPipeline(pFVar33,Graphics);
      pFVar33 = (FRHICommandListBase *)this_01->RHICmdList;
      if (((int)this_01->_padding_ != 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("VertexBuffers.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalRenderResources.h"
                              ,0xe9,L""), bVar20)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      ((FGlobalDynamicVertexBuffer *)&this_01->_padding_)->RHICmdList = pFVar33;
    }
    EVar8 = (this->TaskConfig).TaskPriority;
    pFVar32 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (pFVar32 == (FTaskBase *)0x0) {
      pFVar32 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar32,2,true);
      pFVar32->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FVisibilityTaskData::LaunchVisibilityTasks'::`45'::<lambda_4>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (pFVar32,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(4529)"
                 ,EVar8,None,None);
      pFVar32[1]._padding_ = (longlong)pFVar23;
      pFVar32->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`FVisibilityTaskData::LaunchVisibilityTasks'::`45'::<lambda_4>_>::
            _vftable_;
    }
    pFVar15 = (local_d8->Pimpl).Reference;
    if (pFVar15 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites(pFVar32,pFVar15);
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar32,0x100);
    if (pFVar32 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites
                ((FTaskBase *)(this->Tasks).BeginInitVisibility,pFVar32);
      LOCK();
      paVar3 = &pFVar32->RefCount;
      aVar44 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar44 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar32->_padding_)(pFVar32,1);
      }
    }
    uVar37 = (ulonglong)local_108;
    pFVar23 = pFVar23 + 1;
  }
  EVar8 = (this->TaskConfig).TaskPriority;
  pFVar32 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar32 == (FTaskBase *)0x0) {
    pFVar32 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar32,2,true);
    pFVar32->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FVisibilityTaskData::LaunchVisibilityTasks'::`25'::<lambda_5>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar32,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(4538)"
               ,EVar8,None,None);
    pFVar32[1]._padding_ = (longlong)this;
    pFVar32->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FVisibilityTaskData::LaunchVisibilityTasks'::`25'::<lambda_5>_>::
          _vftable_;
  }
  FVar11 = (this->Tasks).ComputeRelevance;
  if (FVar11 != (FTaskEvent)0x0) {
    UE::Tasks::Private::FTaskBase::AddPrerequisites(pFVar32,(FTaskBase *)FVar11);
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar32,0x100);
  pFVar6 = &(this->Tasks).FinalizeRelevance;
  if (pFVar6 == (FTaskHandle *)&local_b0) {
    if (pFVar32 == (FTaskBase *)0x0) goto LAB_145548e2e;
    LOCK();
    paVar3 = &pFVar32->RefCount;
    aVar44 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar44 != (atomic<unsigned_int>)0x1) goto LAB_145548e2e;
    puVar34 = (undefined8 *)pFVar32->_padding_;
  }
  else {
    pFVar15 = (pFVar6->Pimpl).Reference;
    (pFVar6->Pimpl).Reference = pFVar32;
    if (pFVar15 == (FTaskBase *)0x0) goto LAB_145548e2e;
    LOCK();
    paVar3 = &pFVar15->RefCount;
    aVar44 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar44 != (atomic<unsigned_int>)0x1) goto LAB_145548e2e;
    puVar34 = (undefined8 *)pFVar15->_padding_;
    pFVar32 = pFVar15;
  }
  (*(code *)*puVar34)(pFVar32,1);
LAB_145548e2e:
  FVar11 = (this->Tasks).BeginInitVisibility;
  if ((FVar11 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar11 + 0xd0) == '\0')) {
    FVar11 = (this->Tasks).BeginInitVisibility;
    LOCK();
    aVar7 = *(atomic<bool> *)((longlong)FVar11 + 0x45);
    *(atomic<bool> *)((longlong)FVar11 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar7 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar11 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar11 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar11,0xd8);
    }
  }
  FVar11 = (this->Tasks).LightVisibility;
  if ((FVar11 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar11 + 0xd0) == '\0')) {
    FVar11 = (this->Tasks).LightVisibility;
    LOCK();
    aVar7 = *(atomic<bool> *)((longlong)FVar11 + 0x45);
    *(atomic<bool> *)((longlong)FVar11 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar7 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar11 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar11 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar11,0xd8);
    }
  }
  FVar11 = (this->Tasks).FrustumCull;
  if ((FVar11 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar11 + 0xd0) == '\0')) {
    FVar11 = (this->Tasks).FrustumCull;
    LOCK();
    aVar7 = *(atomic<bool> *)((longlong)FVar11 + 0x45);
    *(atomic<bool> *)((longlong)FVar11 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar7 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar11 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar11 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar11,0xd8);
    }
  }
  FVar11 = (this->Tasks).OcclusionCull;
  if ((FVar11 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar11 + 0xd0) == '\0')) {
    FVar11 = (this->Tasks).OcclusionCull;
    LOCK();
    aVar7 = *(atomic<bool> *)((longlong)FVar11 + 0x45);
    *(atomic<bool> *)((longlong)FVar11 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar7 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar11 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar11 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar11,0xd8);
    }
  }
  FVar11 = (this->Tasks).ComputeRelevance;
  if ((FVar11 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar11 + 0xd0) == '\0')) {
    FVar11 = (this->Tasks).ComputeRelevance;
    LOCK();
    aVar7 = *(atomic<bool> *)((longlong)FVar11 + 0x45);
    *(atomic<bool> *)((longlong)FVar11 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar7 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar11 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar11 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar11,0xd8);
    }
  }
  if (bVar48) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// ProcessRenderThreadTasks @ 14554d810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FVisibilityTaskData::ProcessRenderThreadTasks(FVisibilityTaskData *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  char cVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  undefined4 uVar6;
  FSceneViewState *pFVar7;
  FGPUOcclusionSerial *pFVar8;
  FRHICommandListBase *pFVar9;
  FRHICommandListImmediate *pFVar10;
  undefined4 uVar18;
  FVisibilityTaskConfig *pFVar11;
  FTaskEvent FVar12;
  FScene *pFVar13;
  FTaskBase *pFVar14;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar15;
  FDynamicPrimitiveViewMasks *pFVar16;
  FGPUOcclusionParallel *this_00;
  FBaseGraphTask *this_01;
  FViewInfo *pFVar17;
  code *pcVar19;
  FPrimitiveRange FVar20;
  bool bVar21;
  bool bVar22;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar23;
  bool bVar24;
  bool bVar25;
  ushort uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_ViewVisibilityTime> FVar31;
  FThreadSafeStaticStat<FStat_STAT_ProcessedPrimitives> FVar32;
  FThreadStats *pFVar33;
  FThreadStatsPool *pFVar34;
  FThreadSafeStaticStat<FStat_STAT_CulledPrimitives> FVar35;
  FThreadSafeStaticStat<FStat_STAT_OccludedPrimitives> FVar36;
  ulonglong uVar37;
  longlong lVar38;
  uint uVar39;
  FVisibilityViewPacket *pFVar40;
  FName FVar41;
  int iVar42;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar43;
  uchar auVar44 [8];
  uchar auVar45 [8];
  uint uVar46;
  FVisibilityViewPacket *pFVar47;
  bool bVar48;
  bool bVar49;
  undefined1 local_res20 [8];
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  uint local_124;
  undefined4 local_120;
  uint uStack_11c;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *local_118;
  FName local_110;
  FColor_u_0 local_108 [2];
  FName local_100;
  FName local_f8;
  FVisibilityViewPacket *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [40];
  int local_a8;
  uint local_a4;
  FStatMessage local_a0;
  FStatMessage local_90;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68 [2];
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_58;
  
  FVar31 = StatPtr_STAT_ViewVisibilityTime;
  if (StatPtr_STAT_ViewVisibilityTime == (FThreadSafeStaticStat<FStat_STAT_ViewVisibilityTime>)0x0)
  {
    pFVar30 = ::FName::FName(&local_80,"STAT_ViewVisibilityTime");
    FVar31 = (FThreadSafeStaticStat<FStat_STAT_ViewVisibilityTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ViewVisibilityTime,*pFVar30,
                        L"View Visibility","STATGROUP_InitViews","STATCAT_Advanced",L"Init Views",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar31;
  bVar22 = false;
  bVar21 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  bVar48 = false;
  bVar24 = false;
  if ((FVar41.ComparisonIndex.Value.Value != 0) || (FVar41.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar22 = false;
      bVar21 = true;
      bVar48 = false;
      bVar24 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_100.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                   ,0x1296);
        bVar22 = true;
        bVar21 = true;
        bVar48 = true;
        bVar24 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_110 = FVar41;
      FThreadStats::AddMessage(FVar41,CycleScopeStart);
      bVar24 = true;
      goto LAB_14554d97a;
    }
  }
  bVar22 = bVar48;
  bVar21 = bVar24;
  bVar24 = false;
  local_110 = local_f8;
LAB_14554d97a:
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"ProcessVisibilityTasks");
  bVar48 = -1 < CpuChannel->Enabled;
  if (bVar48) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4759,"ProcessVisibilityTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x1297);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4759);
  }
  (**(code **)(this->_padding_ + 8))(this);
  local_120 = 0;
  uStack_11c = (this->TaskConfig).NumTestedPrimitives;
  if ((this->TaskConfig).Schedule == RenderThread) {
    iVar27 = (this->ViewPackets).ArrayNum;
    pFVar40 = (this->ViewPackets).AllocatorInstance.Data;
    FVar20 = (FPrimitiveRange)((ulonglong)uStack_11c << 0x20);
    pFVar47 = pFVar40 + iVar27;
    while( true ) {
      if ((this->ViewPackets).ArrayNum != iVar27) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FVisibilityViewPacket,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar40 == pFVar47) break;
      pFVar7 = pFVar40->ViewState;
      if (pFVar7 != (FSceneViewState *)0x0) {
        (**(code **)(pFVar7->_padding_ + 0x40))(pFVar7,pFVar40->View);
      }
      FVisibilityViewPacket::BeginInitVisibility(pFVar40);
      UpdatePrimitiveFading(this->Scene,pFVar40->View,pFVar40->ViewState,FVar20);
      pFVar40 = pFVar40 + 1;
    }
    FSceneRenderer::WaitOcclusionTests(this->SceneRenderer,this->RHICmdList);
    local_124 = (this->ViewPackets).ArrayNum;
    uVar37 = (ulonglong)(int)local_124;
    pFVar40 = (this->ViewPackets).AllocatorInstance.Data;
    pFVar47 = pFVar40 + uVar37;
    while( true ) {
      if ((this->ViewPackets).ArrayNum != (int)uVar37) {
        local_128 = 0;
        `TCheckedPointerIterator<FVisibilityViewPacket,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_128);
      }
      if (pFVar40 == pFVar47) break;
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"OcclusionCull");
      bVar49 = -1 < CpuChannel->Enabled;
      if (bVar49) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId4788,"OcclusionCull",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                   ,0x12b4);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4788);
      }
      iVar27 = PrecomputedOcclusionCull(pFVar40,FVar20);
      pFVar8 = (pFVar40->OcclusionCull).ContextIfSerial;
      local_118 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)CONCAT44(local_118._4_4_,iVar27);
      if (pFVar8 != (FGPUOcclusionSerial *)0x0) {
        pFVar9 = (FRHICommandListBase *)this->RHICmdList;
        FGPUOcclusion::Map((FGPUOcclusion *)pFVar8,(FRHICommandListImmediate *)pFVar9);
        if (((int)pFVar8->_padding_ != 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("VertexBuffers.IsEmpty()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalRenderResources.h"
                                ,0xe9,L""), bVar25)) {
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        ((FGlobalDynamicVertexBuffer *)&pFVar8->_padding_)->RHICmdList = pFVar9;
        FGPUOcclusionSerial::AddPrimitives((pFVar40->OcclusionCull).ContextIfSerial,FVar20);
        pFVar8 = (pFVar40->OcclusionCull).ContextIfSerial;
        pFVar10 = this->RHICmdList;
        FGlobalDynamicVertexBuffer::Commit((FGlobalDynamicVertexBuffer *)&pFVar8->_padding_);
        FGPUOcclusionPacket::FProcessVisitor::SubmitThrottledOcclusionQueries
                  (&pFVar8->ProcessVisitor);
        uVar6 = (pFVar8->OcclusionCullResult).NumCulledPrimitives;
        uVar18 = (pFVar8->OcclusionCullResult).NumTestedQueries;
        pFVar11 = ((pFVar8->Packet).ViewPacket)->TaskConfig;
        LOCK();
        paVar1 = &(pFVar11->OcclusionCull).NumCulledPrimitives;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + uVar6);
        UNLOCK();
        LOCK();
        paVar1 = &(pFVar11->OcclusionCull).NumTestedQueries;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + uVar18);
        UNLOCK();
        FGPUOcclusion::Unmap((FGPUOcclusion *)pFVar8,pFVar10);
        iVar27 = (int)local_118;
      }
      if (0 < iVar27) {
        LOCK();
        paVar1 = &(this->TaskConfig).OcclusionCull.NumCulledPrimitives;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + iVar27);
        UNLOCK();
      }
      FVar12 = (pFVar40->Tasks).OcclusionCull;
      if ((FVar12 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar12 + 0xd0) == '\0')) {
        FVar12 = (pFVar40->Tasks).OcclusionCull;
        LOCK();
        aVar2 = *(atomic<bool> *)((longlong)FVar12 + 0x45);
        *(atomic<bool> *)((longlong)FVar12 + 0x45) = (atomic<bool>)0x1;
        UNLOCK();
        if (aVar2 == (atomic<bool>)0x0) {
          LOCK();
          *(atomic<unsigned_int> *)((longlong)FVar12 + 0x30) =
               (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar12 + 0x30) + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar12,0xd8);
        }
      }
      if (bVar49) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      uVar37 = (ulonglong)local_124;
      pFVar40 = pFVar40 + 1;
    }
    pFVar13 = this->Scene;
    if (`public:_void___cdecl_FScene::WaitForCacheMeshDrawCommandsTask(void)___ptr64'::__l2::
        __CsvProfilerStat3823 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/CacheMeshDrawCommands");
      `public:_void___cdecl_FScene::WaitForCacheMeshDrawCommandsTask(void)___ptr64'::__l2::
      __CsvProfilerStat3823 = true;
    }
    FCsvProfiler::BeginSetWaitStat
              ("EventWait/CacheMeshDrawCommands","CsvEventWait/CacheMeshDrawCommands",
               "CsvEventWait/CacheMeshDrawCommands (Non-CP)");
    pFVar14 = (pFVar13->CacheMeshDrawCommandsTask).Pimpl.Reference;
    if (pFVar14 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(pFVar14);
    }
    FCsvProfiler::EndSetWaitStat();
    local_124 = (this->ViewPackets).ArrayNum;
    uVar37 = (ulonglong)(int)local_124;
    pFVar40 = (this->ViewPackets).AllocatorInstance.Data;
    local_e8 = pFVar40 + uVar37;
    while( true ) {
      pFVar47 = local_e8;
      if ((this->ViewPackets).ArrayNum != (int)uVar37) {
        local_127 = 0;
        `TCheckedPointerIterator<FVisibilityViewPacket,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_127);
      }
      FVar41 = local_110;
      if (pFVar40 == pFVar47) break;
      iVar27 = 0;
      iVar42 = 0;
      uVar28 = 1;
      uVar46 = 0xffffffff;
      local_118 = &pFVar40->View->PrimitiveVisibilityMap;
      if (((pFVar40->View->PrimitiveVisibilityMap).NumBits < 0) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar49)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      pTVar23 = local_118;
      iVar4 = local_118->NumBits;
      iVar29 = 0;
      if (iVar4 != 0) {
        pTVar15 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)(local_118->AllocatorInstance).SecondaryData.Data;
        pTVar43 = local_118;
        if (pTVar15 !=
            (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar43 = pTVar15;
        }
        uVar39 = *(uint *)(pTVar43->AllocatorInstance).InlineData;
        while (uVar39 == 0) {
          lVar38 = (longlong)iVar27;
          iVar42 = iVar42 + 0x20;
          iVar27 = iVar27 + 1;
          iVar29 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_14554dd7d;
          uVar39 = *(uint *)((pTVar43->AllocatorInstance).InlineData + lVar38 * 4 + 4);
        }
        uVar28 = -uVar39 & uVar39;
        uVar37 = (ulonglong)uVar28 * 2 + 1;
        lVar38 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar38 == 0; lVar38 = lVar38 + -1) {
          }
        }
        local_d8 = (int)lVar38;
        iVar29 = iVar42 + -1 + local_d8;
        if (iVar4 < iVar29) {
          iVar29 = iVar4;
        }
      }
LAB_14554dd7d:
      if (iVar29 < (int)uStack_11c) {
        do {
          FComputeAndMarkRelevance::AddPrimitive((pFVar40->Relevance).Context,iVar29);
          iVar4 = pTVar23->NumBits;
          uVar46 = uVar46 & ~uVar28;
          pTVar15 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)(pTVar23->AllocatorInstance).SecondaryData.Data;
          pTVar43 = pTVar23;
          if (pTVar15 !=
              (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)0x0) {
            pTVar43 = pTVar15;
          }
          uVar39 = uVar46 & *(uint *)((pTVar43->AllocatorInstance).InlineData + (longlong)iVar27 * 4
                                     );
          while (uVar39 == 0) {
            lVar38 = (longlong)iVar27;
            iVar42 = iVar42 + 0x20;
            iVar27 = iVar27 + 1;
            iVar29 = iVar4;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_14554de14;
            uVar46 = 0xffffffff;
            uVar39 = *(uint *)((pTVar43->AllocatorInstance).InlineData + lVar38 * 4 + 4);
          }
          uVar28 = -uVar39 & uVar39;
          uVar37 = (ulonglong)uVar28 * 2 + 1;
          lVar38 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar38 == 0; lVar38 = lVar38 + -1) {
            }
          }
          local_d4 = (int)lVar38;
          iVar29 = iVar42 + -1 + local_d4;
          if (iVar4 < iVar29) {
            iVar29 = iVar4;
          }
LAB_14554de14:
        } while (iVar29 < (int)uStack_11c);
      }
      FComputeAndMarkRelevance::Finalize((pFVar40->Relevance).Context);
      lVar38 = *(longlong *)&(pFVar40->Tasks).ComputeRelevance.field_0x0;
      if ((lVar38 != 0) && (*(char *)(lVar38 + 0xd0) == '\0')) {
        pFVar14 = *(FTaskBase **)&(pFVar40->Tasks).ComputeRelevance.field_0x0;
        LOCK();
        cVar3 = (pFVar14->TaskTriggered).field_0x0;
        (pFVar14->TaskTriggered).field_0x0 = 1;
        UNLOCK();
        if (cVar3 == '\0') {
          LOCK();
          pFVar14->RefCount = (atomic<unsigned_int>)((int)pFVar14->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch(pFVar14,0xd8);
        }
      }
      pFVar40 = pFVar40 + 1;
      uVar37 = (ulonglong)local_124;
    }
    pFVar16 = (this->DynamicMeshElements).PrimitiveViewMasks;
    (this->Tasks).bWaitingAllowed = true;
    if ((pFVar16 == (FDynamicPrimitiveViewMasks *)0x0) &&
       (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                           ("DynamicMeshElements.PrimitiveViewMasks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                            ,0x12d5,L""), bVar49)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    GatherDynamicMeshElements(this,(this->DynamicMeshElements).PrimitiveViewMasks);
    iVar27 = (this->ViewPackets).ArrayNum;
    pFVar40 = (this->ViewPackets).AllocatorInstance.Data;
    pFVar47 = pFVar40 + iVar27;
    while( true ) {
      if ((this->ViewPackets).ArrayNum != iVar27) {
        `TCheckedPointerIterator<FVisibilityViewPacket,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_125);
      }
      if (pFVar40 == pFVar47) break;
      if (pFVar40->ViewState != (FSceneViewState *)0x0) {
        (**(code **)(pFVar40->ViewState->_padding_ + 0x48))();
      }
      pFVar40 = pFVar40 + 1;
    }
  }
  else {
    if ((this->DynamicMeshElements).CommandPipe == (TCommandPipe<FDynamicPrimitiveIndexList> *)0x0)
    {
      FVar12 = (this->Tasks).ComputeRelevance;
      if (FVar12 != (FTaskEvent)0x0) {
        UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)FVar12);
      }
      if (((this->DynamicMeshElements).PrimitiveViewMasks == (FDynamicPrimitiveViewMasks *)0x0) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("DynamicMeshElements.PrimitiveViewMasks",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                              ,0x12ef,L""), bVar49)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      GatherDynamicMeshElements(this,(this->DynamicMeshElements).PrimitiveViewMasks);
    }
    else {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"WaitForVisibilityTasks");
      bVar49 = -1 < CpuChannel->Enabled;
      if (bVar49) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId4838,"WaitForVisibilityTasks",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                   ,0x12e6);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4838);
      }
      if (__CsvProfilerStat4839 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/Visibility");
        __CsvProfilerStat4839 = true;
      }
      FCsvProfiler::BeginSetWaitStat
                ("EventWait/Visibility","CsvEventWait/Visibility","CsvEventWait/Visibility (Non-CP)"
                );
      FBaseGraphTask::Wait
                ((this->Tasks).DynamicMeshElementsPipe.Reference,
                 (Type)ENamedThreads::FRenderThreadStatics::RenderThread_Local);
      FCsvProfiler::EndSetWaitStat();
      if (bVar49) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
    iVar27 = (this->ViewPackets).ArrayNum;
    pFVar40 = (this->ViewPackets).AllocatorInstance.Data;
    pFVar47 = pFVar40 + iVar27;
    while( true ) {
      if ((this->ViewPackets).ArrayNum != iVar27) {
        local_126 = 0;
        `TCheckedPointerIterator<FVisibilityViewPacket,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_126);
      }
      FVar41 = local_110;
      if (pFVar40 == pFVar47) break;
      this_00 = (pFVar40->OcclusionCull).ContextIfParallel;
      if (this_00 != (FGPUOcclusionParallel *)0x0) {
        pFVar10 = this->RHICmdList;
        if (this_00->FinalizeTask != (FTaskEvent)0x0) {
          UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this_00->FinalizeTask);
        }
        if ((this_00->bFinalized == false) &&
           (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                               ("bFinalized",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                                ,0xd7f,L""), bVar49)) {
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        local_d0._0_8_ = this_00->RHICmdList;
        local_e8 = (FVisibilityViewPacket *)local_d0;
        uStack_e0 = 1;
        local_58._12_4_ = uStack_dc;
        local_58.ArrayNum = 1;
        local_58.DataPtr = (FQueuedCommandList *)local_e8;
        FRHICommandListImmediate::QueueAsyncCommandListSubmit(pFVar10,&local_58,Disabled,0);
        FGPUOcclusion::Unmap((FGPUOcclusion *)this_00,pFVar10);
      }
      pFVar40 = pFVar40 + 1;
    }
  }
  this_01 = (this->Tasks).DynamicMeshElementsRenderThread.Reference;
  if (this_01 != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::Wait(this_01,(Type)ENamedThreads::FRenderThreadStatics::RenderThread_Local);
  }
  FVar12 = (this->Tasks).LightVisibility;
  if (FVar12 != (FTaskEvent)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)FVar12);
  }
  pFVar14 = (this->Tasks).FinalizeRelevance.Pimpl.Reference;
  if (pFVar14 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar14);
  }
  iVar27 = uStack_11c * (this->Views).ArrayNum;
  if ((iVar27 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar32 = StatPtr_STAT_ProcessedPrimitives;
    if (StatPtr_STAT_ProcessedPrimitives ==
        (FThreadSafeStaticStat<FStat_STAT_ProcessedPrimitives>)0x0) {
      pFVar30 = ::FName::FName(&local_78,"STAT_ProcessedPrimitives");
      FVar32 = (FThreadSafeStaticStat<FStat_STAT_ProcessedPrimitives>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessedPrimitives,*pFVar30,
                          L"Processed primitives","STATGROUP_InitViews","STATCAT_Advanced",
                          L"Init Views",true,true,ST_int64,false,false,MCR_Invalid);
    }
    pFVar11 = *(FVisibilityTaskConfig **)FVar32;
    if (((pFVar11 != (FVisibilityTaskConfig *)0x0) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar33 == (FThreadStats *)0x0) {
        pFVar34 = FThreadStatsPool::Get();
        pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
      }
      local_a4 = (uint)((ulonglong)pFVar11 >> 0x20) & 0xffffafff | 0xa000;
      local_d0._8_8_ = pFVar11;
      local_d0._32_8_ = (FSceneViewState *)(longlong)iVar27;
      local_a8 = (int)pFVar11;
      FThreadStats::AddStatMessage(pFVar33,(FStatMessage *)(local_d0 + 0x20));
      FStatsTrace::Add((FName *)(local_d0 + 8),(long64)(longlong)iVar27);
      if (pFVar33->ScopeCount == 0) {
        FThreadStats::Flush(pFVar33,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar33,false,false);
      }
    }
  }
  aVar5 = (this->TaskConfig).FrustumCull.NumCulledPrimitives;
  auVar44[4] = '\0';
  auVar44[5] = '\0';
  auVar44[6] = '\0';
  auVar44[7] = '\0';
  auVar44._0_4_ = aVar5;
  if ((aVar5 != (atomic<unsigned_int>)0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar35 = StatPtr_STAT_CulledPrimitives;
    if (StatPtr_STAT_CulledPrimitives == (FThreadSafeStaticStat<FStat_STAT_CulledPrimitives>)0x0) {
      pFVar30 = ::FName::FName(&local_70,"STAT_CulledPrimitives");
      FVar35 = (FThreadSafeStaticStat<FStat_STAT_CulledPrimitives>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CulledPrimitives,*pFVar30,
                          L"Frustum Culled primitives","STATGROUP_InitViews","STATCAT_Advanced",
                          L"Init Views",true,true,ST_int64,false,false,MCR_Invalid);
    }
    pFVar13 = *(FScene **)FVar35;
    if (((pFVar13 != (FScene *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar33 == (FThreadStats *)0x0) {
        pFVar34 = FThreadStatsPool::Get();
        pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
      }
      local_a0.NameAndInfo.Number = (uint)((ulonglong)pFVar13 >> 0x20) & 0xffffafff | 0xa000;
      local_d0._16_8_ = pFVar13;
      local_a0.StatData.Pad = auVar44;
      local_a0.NameAndInfo.Index.Value = (uint)pFVar13;
      FThreadStats::AddStatMessage(pFVar33,&local_a0);
      FStatsTrace::Add((FName *)(local_d0 + 0x10),(long64)auVar44);
      if (pFVar33->ScopeCount == 0) {
        FThreadStats::Flush(pFVar33,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar33,false,false);
      }
    }
  }
  aVar5 = (this->TaskConfig).OcclusionCull.NumCulledPrimitives;
  auVar45[4] = '\0';
  auVar45[5] = '\0';
  auVar45[6] = '\0';
  auVar45[7] = '\0';
  auVar45._0_4_ = aVar5;
  if ((aVar5 != (atomic<unsigned_int>)0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar36 = StatPtr_STAT_OccludedPrimitives;
    if (StatPtr_STAT_OccludedPrimitives == (FThreadSafeStaticStat<FStat_STAT_OccludedPrimitives>)0x0
       ) {
      pFVar30 = ::FName::FName(local_68,"STAT_OccludedPrimitives");
      FVar36 = (FThreadSafeStaticStat<FStat_STAT_OccludedPrimitives>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OccludedPrimitives,*pFVar30,
                          L"Occluded primitives","STATGROUP_InitViews","STATCAT_Advanced",
                          L"Init Views",true,true,ST_int64,false,false,MCR_Invalid);
    }
    pFVar17 = *(FViewInfo **)FVar36;
    if (((pFVar17 != (FViewInfo *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar33 == (FThreadStats *)0x0) {
        pFVar34 = FThreadStatsPool::Get();
        pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
      }
      local_90.NameAndInfo.Number = (uint)((ulonglong)pFVar17 >> 0x20) & 0xffffafff | 0xa000;
      local_d0._24_8_ = pFVar17;
      local_90.StatData.Pad = auVar45;
      local_90.NameAndInfo.Index.Value = (uint)pFVar17;
      FThreadStats::AddStatMessage(pFVar33,&local_90);
      FStatsTrace::Add((FName *)(local_d0 + 0x18),(long64)auVar45);
      if (pFVar33->ScopeCount == 0) {
        FThreadStats::Flush(pFVar33,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar33,false,false);
      }
    }
  }
  lVar38 = (longlong)(int)(uStack_11c * (this->Views).ArrayNum);
  if ((__GTraceCounterScene_Visibility_NumProcessedPrimitives.Value != lVar38) &&
     (__GTraceCounterScene_Visibility_NumProcessedPrimitives.Value = lVar38,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterScene_Visibility_NumProcessedPrimitives.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar26 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterScene_Visibility_NumProcessedPrimitives.CounterName,
                          TraceCounterType_Int,
                          __GTraceCounterScene_Visibility_NumProcessedPrimitives.CounterFlags & 0xf)
      ;
      LOCK();
      if (__GTraceCounterScene_Visibility_NumProcessedPrimitives.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterScene_Visibility_NumProcessedPrimitives.CounterId._2_2_ = 0;
        __GTraceCounterScene_Visibility_NumProcessedPrimitives.CounterId._0_2_ = uVar26;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterScene_Visibility_NumProcessedPrimitives.CounterId._0_2_,
               __GTraceCounterScene_Visibility_NumProcessedPrimitives.Value);
  }
  uVar37 = (ulonglong)(this->TaskConfig).FrustumCull.NumPrimitivesPerTask;
  if ((__GTraceCounterScene_Visibility_FrustumCull_NumPrimitivesPerTask.Value != uVar37) &&
     (__GTraceCounterScene_Visibility_FrustumCull_NumPrimitivesPerTask.Value = uVar37,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterScene_Visibility_FrustumCull_NumPrimitivesPerTask.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar26 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterScene_Visibility_FrustumCull_NumPrimitivesPerTask.
                          CounterName,TraceCounterType_Int,
                          __GTraceCounterScene_Visibility_FrustumCull_NumPrimitivesPerTask.
                          CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterScene_Visibility_FrustumCull_NumPrimitivesPerTask.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterScene_Visibility_FrustumCull_NumPrimitivesPerTask.CounterId._2_2_ = 0;
        __GTraceCounterScene_Visibility_FrustumCull_NumPrimitivesPerTask.CounterId._0_2_ = uVar26;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterScene_Visibility_FrustumCull_NumPrimitivesPerTask.CounterId._0_2_,
               __GTraceCounterScene_Visibility_FrustumCull_NumPrimitivesPerTask.Value);
  }
  uVar37 = (ulonglong)(uint)(this->TaskConfig).FrustumCull.NumCulledPrimitives;
  if ((__GTraceCounterScene_Visibility_FrustumCull_NumCulledPrimitives.Value != uVar37) &&
     (__GTraceCounterScene_Visibility_FrustumCull_NumCulledPrimitives.Value = uVar37,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterScene_Visibility_FrustumCull_NumCulledPrimitives.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar26 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterScene_Visibility_FrustumCull_NumCulledPrimitives.
                          CounterName,TraceCounterType_Int,
                          __GTraceCounterScene_Visibility_FrustumCull_NumCulledPrimitives.
                          CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterScene_Visibility_FrustumCull_NumCulledPrimitives.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterScene_Visibility_FrustumCull_NumCulledPrimitives.CounterId._2_2_ = 0;
        __GTraceCounterScene_Visibility_FrustumCull_NumCulledPrimitives.CounterId._0_2_ = uVar26;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterScene_Visibility_FrustumCull_NumCulledPrimitives.CounterId._0_2_,
               __GTraceCounterScene_Visibility_FrustumCull_NumCulledPrimitives.Value);
  }
  uVar37 = (ulonglong)(uint)(this->TaskConfig).OcclusionCull.NumCulledPrimitives;
  if ((__GTraceCounterScene_Visibility_OcclusionCull_NumCulledPrimitives.Value != uVar37) &&
     (__GTraceCounterScene_Visibility_OcclusionCull_NumCulledPrimitives.Value = uVar37,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterScene_Visibility_OcclusionCull_NumCulledPrimitives.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar26 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterScene_Visibility_OcclusionCull_NumCulledPrimitives.
                          CounterName,TraceCounterType_Int,
                          __GTraceCounterScene_Visibility_OcclusionCull_NumCulledPrimitives.
                          CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterScene_Visibility_OcclusionCull_NumCulledPrimitives.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterScene_Visibility_OcclusionCull_NumCulledPrimitives.CounterId._2_2_ = 0;
        __GTraceCounterScene_Visibility_OcclusionCull_NumCulledPrimitives.CounterId._0_2_ = uVar26;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterScene_Visibility_OcclusionCull_NumCulledPrimitives.CounterId._0_2_,
               __GTraceCounterScene_Visibility_OcclusionCull_NumCulledPrimitives.Value);
  }
  uVar37 = (ulonglong)(uint)(this->TaskConfig).OcclusionCull.NumTestedQueries;
  if ((__GTraceCounterScene_Visibility_OcclusionCull_NumTestedQueries.Value != uVar37) &&
     (__GTraceCounterScene_Visibility_OcclusionCull_NumTestedQueries.Value = uVar37,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterScene_Visibility_OcclusionCull_NumTestedQueries.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar26 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterScene_Visibility_OcclusionCull_NumTestedQueries.CounterName
                          ,TraceCounterType_Int,
                          __GTraceCounterScene_Visibility_OcclusionCull_NumTestedQueries.
                          CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterScene_Visibility_OcclusionCull_NumTestedQueries.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterScene_Visibility_OcclusionCull_NumTestedQueries.CounterId._2_2_ = 0;
        __GTraceCounterScene_Visibility_OcclusionCull_NumTestedQueries.CounterId._0_2_ = uVar26;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterScene_Visibility_OcclusionCull_NumTestedQueries.CounterId._0_2_,
               __GTraceCounterScene_Visibility_OcclusionCull_NumTestedQueries.Value);
  }
  uVar37 = (ulonglong)(this->TaskConfig).Relevance.NumPrimitivesPerPacket;
  if ((__GTraceCounterScene_Visibility_Relevance_NumPrimitivesPerPacket.Value != uVar37) &&
     (__GTraceCounterScene_Visibility_Relevance_NumPrimitivesPerPacket.Value = uVar37,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterScene_Visibility_Relevance_NumPrimitivesPerPacket.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar26 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterScene_Visibility_Relevance_NumPrimitivesPerPacket.
                          CounterName,TraceCounterType_Int,
                          __GTraceCounterScene_Visibility_Relevance_NumPrimitivesPerPacket.
                          CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterScene_Visibility_Relevance_NumPrimitivesPerPacket.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterScene_Visibility_Relevance_NumPrimitivesPerPacket.CounterId._2_2_ = 0;
        __GTraceCounterScene_Visibility_Relevance_NumPrimitivesPerPacket.CounterId._0_2_ = uVar26;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterScene_Visibility_Relevance_NumPrimitivesPerPacket.CounterId._0_2_,
               __GTraceCounterScene_Visibility_Relevance_NumPrimitivesPerPacket.Value);
  }
  if (bVar48) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar24) {
    FThreadStats::AddMessage(FVar41,CycleScopeEnd);
  }
  return;
}

// SetupMeshPasses @ 1455514a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVisibilityTaskData::SetupMeshPasses
          (FVisibilityTaskData *this,Type param_1,FInstanceCullingManager *param_2)

{
  int *piVar1;
  TArray<FMeshPassMask,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar2;
  FMeshPassMask *_Dst;
  FViewInfo *pFVar3;
  FScene *pFVar4;
  FPrimitiveSceneInfo *pFVar5;
  FMeshBatchAndRelevance *pFVar6;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar7;
  ForElementType<FViewCommands> FVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  FPrimitiveBounds *pFVar17;
  int iVar18;
  FDynamicPrimitive *pFVar19;
  ForElementType<FViewCommands> FVar20;
  FViewCommands *pFVar21;
  FViewInfo **ppFVar22;
  uint uVar23;
  FPrimitiveViewRelevance *pFVar24;
  FDynamicPrimitive *pFVar25;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar26;
  FViewInfo **ppFVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  bool bVar31;
  undefined1 local_res20 [8];
  uint local_a4;
  longlong local_a0;
  FPrimitiveComponentId local_74;
  int local_70;
  FPrimitiveViewRelevance *local_68;
  int local_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  
  FDynamicMeshElementContextContainer::MergeContexts
            (&(this->DynamicMeshElements).ContextContainer,
             &(this->DynamicMeshElements).DynamicPrimitives);
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"DynamicRelevance");
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4676,"DynamicRelevance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x1244);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4676);
  }
  ppFVar22 = (this->Views).DataPtr;
  ppFVar27 = ppFVar22 + (this->Views).ArrayNum;
  for (; ppFVar22 != ppFVar27; ppFVar22 = ppFVar22 + 1) {
    pFVar3 = *ppFVar22;
    uVar14 = (pFVar3->DynamicMeshElements).ArrayNum;
    pTVar2 = &pFVar3->DynamicMeshElementsPassRelevance;
    iVar13 = (pFVar3->DynamicMeshElementsPassRelevance).ArrayNum;
    piVar1 = &(pFVar3->DynamicMeshElementsPassRelevance).ArrayNum;
    if (iVar13 < (int)uVar14) {
      iVar12 = UE::Core::Private::
               ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshPassMask>_>
                         (8,8,uVar14 - iVar13,&pTVar2->AllocatorInstance,piVar1,
                          &(pFVar3->DynamicMeshElementsPassRelevance).ArrayMax);
      DefaultConstructItems<FMeshPassMask,int>
                ((pTVar2->AllocatorInstance).Data + iVar12,uVar14 - iVar13);
    }
    else {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      if ((int)uVar14 < iVar13) {
        uVar23 = iVar13 - uVar14;
        if (((int)(uVar23 | uVar14) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (uVar23 != 0) {
          _Dst = (pTVar2->AllocatorInstance).Data + (int)uVar14;
          iVar13 = (*piVar1 - uVar23) - uVar14;
          if (iVar13 != 0) {
            memmove(_Dst,_Dst + (int)uVar23,(longlong)iVar13 << 3);
          }
          *piVar1 = *piVar1 - uVar23;
          UE::Core::Private::
          ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshPassMask>_>
                    (8,8,&pTVar2->AllocatorInstance,*piVar1,
                     &(pFVar3->DynamicMeshElementsPassRelevance).ArrayMax);
        }
      }
    }
  }
  bVar10 = IsTranslucencyLightingVolumeUsingVoxelMarking();
  pFVar19 = (this->DynamicMeshElements).DynamicPrimitives.AllocatorInstance.Data;
  uVar14 = (this->DynamicMeshElements).DynamicPrimitives.ArrayNum;
  uVar16 = (ulonglong)(int)uVar14;
  pFVar25 = pFVar19 + uVar16;
  while( true ) {
    if ((this->DynamicMeshElements).DynamicPrimitives.ArrayNum != (int)uVar16) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FDynamicPrimitive,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar19 == pFVar25) break;
    iVar13 = pFVar19->PrimitiveIndex;
    iStack_5c = pFVar19->ViewIndex;
    uStack_58 = pFVar19->StartElementIndex;
    iStack_54 = pFVar19->EndElementIndex;
    pFVar4 = this->Scene;
    local_60 = iVar13;
    if ((iVar13 < 0 || (pFVar4->Primitives).ArrayNum <= iVar13) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar5 = *(FPrimitiveSceneInfo **)
              ((pFVar4->Primitives).AllocatorInstance.Data + (longlong)iVar13 * 8);
    pFVar17 = TScenePrimitiveArray<FPrimitiveBounds>::Get(&this->Scene->PrimitiveBounds,iVar13);
    iVar12 = iStack_5c;
    if ((iStack_5c < 0 || (this->Views).ArrayNum <= iStack_5c) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar3 = (this->Views).DataPtr[iVar12];
    if ((iVar13 < 0 || (pFVar3->PrimitiveViewRelevanceMap).ArrayNum <= iVar13) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar12 = iStack_54;
    pFVar24 = (pFVar3->PrimitiveViewRelevanceMap).AllocatorInstance.Data + iVar13;
    local_68 = pFVar24;
    if ((int)uStack_58 < iStack_54) {
      lVar29 = (longlong)(int)uStack_58;
      lVar30 = lVar29 * 0x18;
      uVar23 = uStack_58;
      do {
        uVar28 = 0;
        if ((int)uVar23 < (pFVar3->DynamicMeshElements).ArrayNum) {
          uVar28 = ~uVar23 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = (pFVar3->DynamicMeshElements).AllocatorInstance.Data;
        uVar28 = 0;
        if ((int)uVar23 < (pFVar3->DynamicMeshElementsPassRelevance).ArrayNum) {
          uVar28 = ~uVar23 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        ComputeDynamicMeshRelevance
                  (this->ShadingPath,this->bAddLightmapDensityCommands,bVar10,pFVar24,
                   (FMeshBatchAndRelevance *)((longlong)&pFVar6->Mesh + lVar30),pFVar3,
                   (pFVar3->DynamicMeshElementsPassRelevance).AllocatorInstance.Data + lVar29,pFVar5
                   ,pFVar17);
        uVar23 = uVar23 + 1;
        lVar29 = lVar29 + 1;
        lVar30 = lVar30 + 0x18;
      } while ((int)uVar23 < iVar12);
    }
    pFVar19 = pFVar19 + 1;
    uVar16 = (ulonglong)uVar14;
  }
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  local_a4 = 0;
  if (0 < (this->Views).ArrayNum) {
    local_a0 = 0;
    do {
      uVar14 = 0;
      if ((int)local_a4 < (this->Views).ArrayNum) {
        uVar14 = ~local_a4 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar31)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar3 = *(FViewInfo **)(local_a0 + (longlong)(this->Views).DataPtr);
      lVar29 = pFVar3->_padding_;
      if ((lVar29 != 0) && ((*(byte *)(lVar29 + 0x5a0) & 1) != 0)) {
        iVar18 = 0;
        iVar13 = (pFVar3->PrimitiveVisibilityMap).NumBits;
        iVar12 = 0;
        if (iVar13 != 0) {
          pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    *)(pFVar3->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
          pTVar26 = &pFVar3->PrimitiveVisibilityMap;
          if (pTVar7 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                         *)0x0) {
            pTVar26 = pTVar7;
          }
          uVar14 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
          while (uVar14 == 0) {
            lVar30 = (longlong)iVar18;
            iVar12 = iVar12 + 0x20;
            iVar18 = iVar18 + 1;
            if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18)
            goto LAB_145551bae;
            uVar14 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar30 * 4 + 4);
          }
          uVar14 = -uVar14 & uVar14;
          uVar16 = (ulonglong)uVar14 * 2 + 1;
          lVar30 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          uVar23 = (int)lVar30 + -1 + iVar12;
          if ((int)uVar23 < iVar13) {
            uVar28 = 0xffffffff;
            do {
              pFVar4 = this->Scene;
              uVar15 = 0;
              if ((int)uVar23 < (pFVar4->PrimitiveComponentIds).ArrayNum) {
                uVar15 = ~uVar23 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
              ::Emplace<FPrimitiveComponentId_const_&>
                        ((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                          *)(lVar29 + 0x5a8),&local_74,
                         (bool *)((pFVar4->PrimitiveComponentIds).AllocatorInstance.Data +
                                 (longlong)(int)uVar23 * 4));
              uVar28 = ~uVar14 & uVar28;
              pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)(pFVar3->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
              iVar13 = (pFVar3->PrimitiveVisibilityMap).NumBits;
              pTVar26 = &pFVar3->PrimitiveVisibilityMap;
              if (pTVar7 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                             *)0x0) {
                pTVar26 = pTVar7;
              }
              uVar14 = uVar28 & *(uint *)((pTVar26->AllocatorInstance).InlineData +
                                         (longlong)iVar18 * 4);
              while (uVar14 == 0) {
                lVar30 = (longlong)iVar18;
                iVar12 = iVar12 + 0x20;
                iVar18 = iVar18 + 1;
                if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18)
                goto LAB_145551bae;
                uVar28 = 0xffffffff;
                uVar14 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar30 * 4 + 4);
              }
              uVar14 = -uVar14 & uVar14;
              uVar16 = (ulonglong)uVar14 * 2 + 1;
              lVar30 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                }
              }
              local_70 = (int)lVar30;
              uVar23 = local_70 + -1 + iVar12;
            } while (((int)uVar23 <= iVar13) && ((int)uVar23 < iVar13));
          }
        }
      }
LAB_145551bae:
      if ((pFVar3->bHasNoVisiblePrimitive == 0) &&
         ((*(char *)((longlong)&pFVar3->_padding_ + 7) == '\0' || ((int)pFVar3->_padding_ != 2)))) {
        uVar14 = 0;
        if ((int)local_a4 < (this->DynamicMeshElements).ViewCommandsPerView.ArrayNum) {
          uVar14 = ~local_a4 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->DynamicMeshElements).ViewCommandsPerView.AllocatorInstance.SecondaryData;
        FVar20 = (ForElementType<FViewCommands>)&(this->DynamicMeshElements).ViewCommandsPerView;
        if (FVar8 != (ForElementType<FViewCommands>)0x0) {
          FVar20 = FVar8;
        }
        pFVar21 = (FViewCommands *)((longlong)FVar20 + (longlong)(int)local_a4 * 0x7f0);
        FViewDebugInfo::ProcessPrimitives(&FViewDebugInfo::Instance,this->Scene,pFVar3,pFVar21);
        FSceneRenderer::SetupMeshPass(this->SceneRenderer,pFVar3,param_1,pFVar21,param_2);
      }
      local_a4 = local_a4 + 1;
      local_a0 = local_a0 + 8;
    } while ((int)local_a4 < (this->Views).ArrayNum);
  }
  return;
}

// StartGatherDynamicMeshElements @ 145552d20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FVisibilityTaskData::StartGatherDynamicMeshElements(FVisibilityTaskData *this)

{
  atomic<bool> aVar1;
  FTaskEvent FVar2;
  
  if ((this->Tasks).bDynamicMeshElementsPrerequisitesTriggered == false) {
    FVar2 = (this->Tasks).DynamicMeshElementsPrerequisites;
    if ((FVar2 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar2 + 0xd0) == '\0')) {
      FVar2 = (this->Tasks).DynamicMeshElementsPrerequisites;
      LOCK();
      aVar1 = *(atomic<bool> *)((longlong)FVar2 + 0x45);
      *(atomic<bool> *)((longlong)FVar2 + 0x45) = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar1 == (atomic<bool>)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)FVar2 + 0x30) =
             (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar2 + 0x30) + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar2,0xd8);
      }
    }
    (this->Tasks).bDynamicMeshElementsPrerequisitesTriggered = true;
  }
  return;
}


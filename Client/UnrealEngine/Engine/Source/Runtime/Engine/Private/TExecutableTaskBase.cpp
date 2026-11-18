// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 33

// ExecuteTask @ 14734cd00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FAsyncAddPrimitiveQueue::FAddPrimitivesTask::Launch'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1476a7660

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FAudioAsyncBatcher::Flush'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)((longlong)this + 0xd8);
  `FAudioAsyncBatcher::Flush'::__l2::<lambda_1>::operator()(this_00);
  DestructItems<TUniqueFunction<void___cdecl(void)>,int>
            ((TUniqueFunction<void___cdecl(void)> *)*this_00,*(int *)((longlong)this + 0xe0));
  if ((void *)*this_00 != (void *)0x0) {
    FMemory::Free((void *)*this_00);
    return;
  }
  return;
}

// ExecuteTask @ 1476a76a0

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<TUniqueFunction<void___cdecl(void)>,void,void>::ExecuteTask
          (TExecutableTaskBase<TUniqueFunction<void___cdecl(void)>,void,void> *this)

{
  code *pcVar1;
  uchar *puVar2;
  undefined8 uVar3;
  uchar *puVar4;
  uchar *puVar5;
  
  Core::Private::Function::CheckCallable(*(void **)(this->TaskBodyStorage).Pad);
  pcVar1 = *(code **)(this->TaskBodyStorage).Pad;
  puVar5 = (this->TaskBodyStorage).Pad + 0x10;
  puVar2 = *(uchar **)((this->TaskBodyStorage).Pad + 0x28);
  puVar4 = puVar5;
  if (puVar2 != (uchar *)0x0) {
    puVar4 = puVar2;
  }
  uVar3 = (**(code **)(*(longlong *)puVar4 + 8))();
  (*pcVar1)(uVar3);
  if (*(longlong *)(this->TaskBodyStorage).Pad != 0) {
    puVar2 = *(uchar **)((this->TaskBodyStorage).Pad + 0x28);
    if (puVar2 != (uchar *)0x0) {
      puVar5 = puVar2;
    }
    (**(code **)(*(longlong *)puVar5 + 0x10))(puVar5);
  }
  return;
}

// ExecuteTask @ 147c4faf0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 147c4fb10

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FRDGBuilder::
  AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>'::__l2
  ::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 147cf3570

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`DispatchInstanceDataUpdateTask<FUpdatableInstanceDataSceneProxy,`FInstanceDataManager::FlushChanges'::__l73::<lambda_1>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `DispatchInstanceDataUpdateTask<FUpdatableInstanceDataSceneProxy,`FInstanceDataManager::FlushChanges'::__l73::<lambda_1>_>'
  ::__l2::<lambda_1>::operator()((FInstanceUpdateChangeSet *)((longlong)this + 0xe0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2b8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x288));
  FInstanceUpdateChangeSet::~FInstanceUpdateChangeSet
            ((FInstanceUpdateChangeSet *)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 147cf35b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`DispatchInstanceDataUpdateTask<FUpdatableInstanceDataSceneProxy,`FInstanceDataManager::FlushChanges'::__l78::<lambda_2>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `DispatchInstanceDataUpdateTask<FUpdatableInstanceDataSceneProxy,`FInstanceDataManager::FlushChanges'::__l78::<lambda_2>_>'
  ::__l2::<lambda_1>::operator()((FInstanceUpdateChangeSet *)((longlong)this + 0xe0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2b8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x288));
  FInstanceUpdateChangeSet::~FInstanceUpdateChangeSet
            ((FInstanceUpdateChangeSet *)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 147d9af70

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,`FPrimitiveInstanceDataManager::FlushChanges'::__l14::<lambda_1>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,`FPrimitiveInstanceDataManager::FlushChanges'::__l14::<lambda_1>_>'
  ::__l2::<lambda_1>::operator()((FLegacyRebuildChangeSet *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x1b0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 400));
  FLegacyRebuildChangeSet::~FLegacyRebuildChangeSet
            ((FLegacyRebuildChangeSet *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 147d9afb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,`FPrimitiveInstanceDataManager::FlushChanges'::__l124::<lambda_2>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,`FPrimitiveInstanceDataManager::FlushChanges'::__l124::<lambda_2>_>'
  ::__l2::<lambda_1>::operator()((FInstanceUpdateChangeSet *)((longlong)this + 0xe0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2c8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x298));
  if (*(void **)((longlong)this + 0x278) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x278));
  }
  FInstanceUpdateChangeSet::~FInstanceUpdateChangeSet
            ((FInstanceUpdateChangeSet *)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 147d9b010

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,`FPrimitiveInstanceDataManager::FlushChanges'[::A]::<lambda_3>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,`FPrimitiveInstanceDataManager::FlushChanges'[::A]::<lambda_3>_>'
  ::__l2::<lambda_1>::operator()((FInstanceUpdateChangeSet *)((longlong)this + 0xe0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2c8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x298));
  if (*(void **)((longlong)this + 0x278) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x278));
  }
  FInstanceUpdateChangeSet::~FInstanceUpdateChangeSet
            ((FInstanceUpdateChangeSet *)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 147d9b070

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,`FPrimitiveInstanceDataManager::FlushChanges'::__l147::<lambda_4>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `DispatchInstanceDataUpdateTask<FISMCInstanceDataSceneProxy,`FPrimitiveInstanceDataManager::FlushChanges'::__l147::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()((FInstanceUpdateChangeSet *)((longlong)this + 0xe0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2c8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x298));
  if (*(void **)((longlong)this + 0x278) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x278));
  }
  FInstanceUpdateChangeSet::~FInstanceUpdateChangeSet
            ((FInstanceUpdateChangeSet *)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 147eb9d30

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l62::<lambda_5>,void,void>::
ExecuteTask(void *this)

{
  `UWorld::SendAllEndOfFrameUpdatesInternal'::__l62::<lambda_5>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 147f777d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FUniformExpressionCacheAsyncUpdater::Update'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)((longlong)this + 0xd8);
  `FUniformExpressionCacheAsyncUpdater::Update'::__l2::<lambda_1>::operator()(this_00);
  DestructItems<FUniformExpressionCacheAsyncUpdater::FItem,int>
            ((FItem *)*this_00,*(int *)((longlong)this + 0xe0));
  if ((void *)*this_00 != (void *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free((void *)*this_00);
    return;
  }
  return;
}

// ExecuteTask @ 147f77810

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  *(undefined4 *)((longlong)this + 0x130) = 0;
  if (*(void **)((longlong)this + 0x128) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x128));
  }
  TSparseArray<TSparseSetElement<FMaterialRenderProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMaterialRenderProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FMaterialRenderProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0xe8));
  return;
}

// ExecuteTask @ 14827d820

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FPhysScene_AsyncPhysicsStateJobQueue::LaunchAsyncJobTask'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FPhysScene_AsyncPhysicsStateJobQueue::ExecuteJobsAsync
            (*(FPhysScene_AsyncPhysicsStateJobQueue **)((longlong)this + 0xd8),
             *(double *)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 148400770

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`TraceScreenshotInternal<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,unsigned_char>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `TraceScreenshotInternal<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,unsigned_char>'::__l2::
  <lambda_1>::operator()((void *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe8));
    return;
  }
  return;
}

// ExecuteTask @ 1484007b0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`TraceScreenshotInternal<FLinearColor,TArray<FLinearColor,TSizedDefaultAllocator<64>_>,float>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `TraceScreenshotInternal<FLinearColor,TArray<FLinearColor,TSizedDefaultAllocator<64>_>,float>'::
  __l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe8));
    return;
  }
  return;
}

// ExecuteTask @ 1484007f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`ULevelStreamingProfilingSubsystem::StopTrackingAndReport'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `ULevelStreamingProfilingSubsystem::StopTrackingAndReport'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1484d5d80

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`ISaveGameSystem::DeleteGameAsync'::__l2::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  longlong *plVar1;
  
  `ISaveGameSystem::DeleteGameAsync'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0x110) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x120);
    if (*(longlong **)((longlong)this + 0x138) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x138);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf0));
    return;
  }
  return;
}

// ExecuteTask @ 1484d5de0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`ISaveGameSystem::DoesSaveGameExistAsync'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  longlong *plVar1;
  
  `ISaveGameSystem::DoesSaveGameExistAsync'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0x100) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x110);
    if (*(longlong **)((longlong)this + 0x128) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x128);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe8));
    return;
  }
  return;
}

// ExecuteTask @ 1484d5e40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`ISaveGameSystem::GetSaveGameNamesAsync'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  longlong *plVar1;
  
  `ISaveGameSystem::GetSaveGameNamesAsync'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x118);
    }
                    /* WARNING: Could not recover jumptable at 0x0001484d5e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ExecuteTask @ 1484d5e90

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`ISaveGameSystem::LoadGameAsync'::__l2::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  longlong *plVar1;
  
  `ISaveGameSystem::LoadGameAsync'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0x110) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x120);
    if (*(longlong **)((longlong)this + 0x138) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x138);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf0));
    return;
  }
  return;
}

// ExecuteTask @ 1484d5ef0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`ISaveGameSystem::LoadGameIfExistsAsync'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  longlong *plVar1;
  
  `ISaveGameSystem::LoadGameIfExistsAsync'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0x110) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x120);
    if (*(longlong **)((longlong)this + 0x138) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x138);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf0));
    return;
  }
  return;
}

// ExecuteTask @ 1484d5f50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`ISaveGameSystem::SaveGameAsync'::__l2::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  longlong *plVar1;
  
  `ISaveGameSystem::SaveGameAsync'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0x120) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x130);
    if (*(longlong **)((longlong)this + 0x148) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x148);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x110));
  if (*(void **)((longlong)this + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf0));
    return;
  }
  return;
}

// ExecuteTask @ 1485251d0

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`WN_GameThreadWaitForTask'::__l20::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  (**(code **)(**(longlong **)((longlong)this + 0xd8) + 0x10))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 148525200

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`PrecacheComputePipelineStatesForGlobalShaders'::__l52::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  undefined1 *puVar1;
  int iVar2;
  FRHIComputeShader *pFVar3;
  FShaderType *pFVar4;
  FPSOPrecacheRequestResult local_18;
  
  pFVar3 = (FRHIComputeShader *)
           TShaderRefBase<FShader,FShaderMapPointerTable>::GetRHIShaderBase
                     (*(TShaderRefBase<FShader,FShaderMapPointerTable> **)((longlong)this + 0xd8),
                      SF_Compute,false);
  if (pFVar3 != (FRHIComputeShader *)0x0) {
    pFVar4 = TShaderRefBase<FShader,FShaderMapPointerTable>::GetType
                       (*(TShaderRefBase<FShader,FShaderMapPointerTable> **)((longlong)this + 0xd8))
    ;
    PipelineStateCache::PrecacheComputePipelineState(&local_18,pFVar3,pFVar4->Name,false);
    if (local_18.AsyncCompileEvent.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_18.AsyncCompileEvent.Reference)->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)local_18.AsyncCompileEvent.Reference)
                  (local_18.AsyncCompileEvent.Reference,1);
      }
    }
  }
  return;
}

// ExecuteTask @ 148525280

void __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FShaderJobCache::SubmitJobs'::__l14::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FShaderCommonCompileJob *this_00;
  
  `FShaderJobCache::SubmitJobs'::__l14::<lambda_1>::operator()
            ((undefined8 *)((longlong)this + 0xd8));
  this_00 = *(FShaderCommonCompileJob **)((longlong)this + 0xd8);
  if (this_00 != (FShaderCommonCompileJob *)0x0) {
    FShaderCommonCompileJob::Release(this_00);
    return;
  }
  return;
}

// ExecuteTask @ 14863a390

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSkeletalMeshUpdater::Submit'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FSkeletalMeshUpdater::Submit'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14863a3d0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FSkeletalMeshUpdater::Submit'::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FSkeletalMeshUpdater::Submit'::__l2::<lambda_2>::operator()((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// ExecuteTask @ 14863a410

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FSkeletalMeshUpdater::AddPushCommandsTask'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `FSkeletalMeshUpdater::AddPushCommandsTask'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1486b40f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  void *pvVar1;
  
  `FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline'::__l5::<lambda_1>::operator()
            ((undefined8 *)((longlong)this + 0xd8));
  pvVar1 = *(void **)((longlong)this + 0xd8);
  if (pvVar1 != (void *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pvVar1);
    return;
  }
  return;
}

// ExecuteTask @ 14888a300

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FLoadingTests_Flush_InvalidFromWorker::RunTest'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  byte bVar1;
  byte *pbVar2;
  
  FlushAsyncLoading(-1);
  pbVar2 = *(byte **)((longlong)this + 0xd8);
  LOCK();
  bVar1 = *pbVar2;
  *pbVar2 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    ParkingLot::WakeAll(pbVar2);
    return;
  }
  return;
}

// ExecuteTask @ 148ac9910

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UWorldPartitionStreamingPolicy::OnStreamingStateUpdated'::__l14::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UWorldPartitionStreamingPolicy::OnStreamingStateUpdated'::__l14::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe0));
  if (*(char *)((longlong)this + 0x390) != '\0') {
    FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates
              ((FWorldDataLayersEffectiveStates *)((longlong)this + 0x1a0));
    return;
  }
  return;
}


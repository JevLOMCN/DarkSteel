// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 40

// ~TObject<FGPUSceneWriteDelegate> @ 1448edf80

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FGPUSceneWriteDelegate>::~TObject<FGPUSceneWriteDelegate>
          (TObject<FGPUSceneWriteDelegate> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFGPUSceneWriteDelegate_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this[1].field_0x8);
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

// ~TObject<FLumenDirectLightingTaskData> @ 144d422b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FLumenDirectLightingTaskData>::~TObject<FLumenDirectLightingTaskData>
          (TObject<FLumenDirectLightingTaskData> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FViewBatchedLightParameters *pFVar4;
  FLumenGatheredLight *pFVar5;
  
  *(undefined ***)this =
       &
       ___7__TObject_UFLumenDirectLightingTaskData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(FRHIResource **)&this[0x21b].field_0x8 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this[0x21b].field_0x8);
  }
  if (*(void **)&this[0x21a].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x21a].field_0x8);
  }
  pFVar4 = *(FViewBatchedLightParameters **)&this[0x218].field_0x8;
  if (*(FViewBatchedLightParameters **)&this[0x218].field_0x8 == (FViewBatchedLightParameters *)0x0)
  {
    pFVar4 = (FViewBatchedLightParameters *)&this[0x214].field_0x8;
  }
  DestructItems<FViewBatchedLightParameters,int>(pFVar4,*(int *)(this + 0x219));
  if (*(void **)&this[0x218].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x218].field_0x8);
  }
  if (*(void **)&this[0x213].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x213].field_0x8);
  }
  if (*(void **)&this[0x212].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x212].field_0x8);
  }
  pFVar5 = *(FLumenGatheredLight **)&this[0x181].field_0x8;
  if (*(FLumenGatheredLight **)&this[0x181].field_0x8 == (FLumenGatheredLight *)0x0) {
    pFVar5 = (FLumenGatheredLight *)&this[1].field_0x8;
  }
  DestructItems<FLumenGatheredLight,int>(pFVar5,*(int *)(this + 0x182));
  if (*(void **)&this[0x181].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x181].field_0x8);
  }
  puVar3 = *(undefined8 **)(this + 1);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// ~TObject<FColoredMaterialRenderProxy> @ 144e73e70

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FColoredMaterialRenderProxy>::~TObject<FColoredMaterialRenderProxy>
          (TObject<FColoredMaterialRenderProxy> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFColoredMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FMaterialRenderProxy::~FMaterialRenderProxy((FMaterialRenderProxy *)(this + 1));
  return;
}

// ~TObject<FNaniteVisibilityQuery> @ 145037a40

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FNaniteVisibilityQuery>::~TObject<FNaniteVisibilityQuery>
          (TObject<FNaniteVisibilityQuery> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &
       ___7__TObject_UFNaniteVisibilityQuery_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined4 *)(this + 0x14) = 0;
  if (*(void **)&this[0x13].field_0x8 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&this[0x13].field_0x8)
    ;
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
              *)&this[0xe].field_0x8);
  if (*(void **)&this[0xd].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0xd].field_0x8);
  }
  if (*(void **)&this[0xb].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0xb].field_0x8);
  }
  *(undefined4 *)(this + 10) = 0;
  if (*(void **)&this[9].field_0x8 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&this[9].field_0x8);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
              *)&this[4].field_0x8);
  if (*(void **)&this[3].field_0x8 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&this[3].field_0x8);
  }
  if (*(void **)&this[2].field_0x8 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&this[2].field_0x8);
  }
  DestructItems<FConvexVolume,int>(*(FConvexVolume **)&this[1].field_0x8,*(int *)(this + 2));
  if (*(void **)&this[1].field_0x8 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&this[1].field_0x8);
  }
  puVar3 = *(undefined8 **)(this + 1);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// ~TObject<RayTracing::FGatherInstancesTaskData> @ 1452ff2c0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<RayTracing::FGatherInstancesTaskData>::~TObject<RayTracing::FGatherInstancesTaskData>
          (TObject<RayTracing::FGatherInstancesTaskData> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFGatherInstancesTaskData_RayTracing_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  RayTracing::FGatherInstancesTaskData::~FGatherInstancesTaskData
            ((FGatherInstancesTaskData *)(this + 1));
  return;
}

// ~TObject<RayTracing::FRayTracingMeshBatchTaskPage> @ 1452ff2e0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<RayTracing::FRayTracingMeshBatchTaskPage>::
~TObject<RayTracing::FRayTracingMeshBatchTaskPage>
          (TObject<RayTracing::FRayTracingMeshBatchTaskPage> *this)

{
  TObject<RayTracing::FRayTracingMeshBatchTaskPage> *pTVar1;
  TObject<RayTracing::FRayTracingMeshBatchTaskPage> *pTVar2;
  longlong lVar3;
  
  lVar3 = 0x80;
  *(undefined ***)this = &_vftable_;
  pTVar2 = this + 0x1c2;
  do {
    pTVar1 = pTVar2 + -3;
    pTVar2 = (TObject<RayTracing::FRayTracingMeshBatchTaskPage> *)&pTVar2[-4].field_0x8;
    lVar3 = lVar3 + -1;
    DestructItems<FMeshBatch,int>(*(FMeshBatch **)pTVar2,*(int *)pTVar1);
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
  } while (lVar3 != 0);
  return;
}

// ~TObject<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 1452ff340

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::
~TObject<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TObject<TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *this)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar4;
  
  *(undefined ***)this =
       &
       ___7__TObject_V__TArray_VFRayTracingShaderBindingData__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A________TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  lVar3 = *(longlong *)(this + 1);
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 != 0) {
    puVar1 = (uint *)(lVar3 + -8);
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    piVar4 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar3 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014475b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar4);
      return;
    }
  }
  return;
}

// ~TObject<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>_> @ 1452ff360

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>_>::
~TObject<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>_>
          (TObject<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>_> *this)

{
  void *pvVar1;
  
  *(undefined ***)this =
       &
       ___7__TObject_V__TChunkedArray_VFRayTracingMeshCommand___0EAAA_V__TSizedDefaultAllocator__0CA________TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TIndirectArray<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)(this + 1),0);
  pvVar1 = *(void **)(this + 1);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// ~TObject<TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>_> @ 1452ff3a0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>_>
::
~TObject<TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>_>
          (TObject<TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>_>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_V__TSet_PEAVFPrimitiveSceneInfo__U__DefaultKeyFuncs_PEAVFPrimitiveSceneInfo___0A___VFDefaultSetAllocator_______TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined4 *)&this[5].field_0x8 = 0;
  if (*(void **)(this + 5) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 5));
  }
  TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this + 1));
  return;
}

// ~TObject<RayTracing::FDynamicRayTracingInstancesContext> @ 1452ff3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<RayTracing::FDynamicRayTracingInstancesContext>::
~TObject<RayTracing::FDynamicRayTracingInstancesContext>
          (TObject<RayTracing::FDynamicRayTracingInstancesContext> *this)

{
  *(undefined ***)this = &_vftable_;
  if (*(void **)(this + 0x39) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 0x39));
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 0x38));
  }
  FRayTracingInstanceCollector::~FRayTracingInstanceCollector
            ((FRayTracingInstanceCollector *)(this + 9));
  FGlobalDynamicIndexBuffer::Commit((FGlobalDynamicIndexBuffer *)&this[6].field_0x8);
  if (*(void **)(this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 8));
  }
  if (*(void **)(this + 7) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 7));
  }
  FGlobalDynamicVertexBuffer::Commit((FGlobalDynamicVertexBuffer *)(this + 5));
  if (*(void **)&this[5].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[5].field_0x8);
  }
  return;
}

// ~TObject<FSceneRenderProcessor::FGroupNode> @ 145478ba0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
TObject<FSceneRenderProcessor::FGroupNode>::~TObject<FSceneRenderProcessor::FGroupNode>
          (TObject<FSceneRenderProcessor::FGroupNode> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TObject_UFGroupNode_FSceneRenderProcessor_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  pvVar1 = *(void **)(this + 3);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TObject<FSceneRenderProcessor::FRenderNode> @ 145478bc0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
TObject<FSceneRenderProcessor::FRenderNode>::~TObject<FSceneRenderProcessor::FRenderNode>
          (TObject<FSceneRenderProcessor::FRenderNode> *this)

{
  TObject<FSceneRenderProcessor::FRenderNode> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TObject_UFRenderNode_FSceneRenderProcessor_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  if (*(longlong *)(this + 4) != 0) {
    pTVar1 = this + 5;
    if (*(TObject<FSceneRenderProcessor::FRenderNode> **)&this[6].field_0x8 !=
        (TObject<FSceneRenderProcessor::FRenderNode> *)0x0) {
      pTVar1 = *(TObject<FSceneRenderProcessor::FRenderNode> **)&this[6].field_0x8;
    }
    (**(code **)(*(longlong *)pTVar1 + 0x10))();
  }
  if (*(void **)&this[2].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[2].field_0x8);
    return;
  }
  return;
}

// ~TObject<TUniqueFunction<void___cdecl(void)>_> @ 145478c10

void __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::
TObject<TUniqueFunction<void___cdecl(void)>_>::~TObject<TUniqueFunction<void___cdecl(void)>_>
          (TObject<TUniqueFunction<void___cdecl(void)>_> *this)

{
  TObject<TUniqueFunction<void___cdecl(void)>_> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TObject_V__TUniqueFunction___A6AXXZ_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  if (*(longlong *)(this + 1) != 0) {
    pTVar1 = this + 2;
    if (*(TObject<TUniqueFunction<void___cdecl(void)>_> **)&this[3].field_0x8 !=
        (TObject<TUniqueFunction<void___cdecl(void)>_> *)0x0) {
      pTVar1 = *(TObject<TUniqueFunction<void___cdecl(void)>_> **)&this[3].field_0x8;
    }
                    /* WARNING: Could not recover jumptable at 0x000145478c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pTVar1 + 0x10))();
    return;
  }
  return;
}

// ~TObject<FHairStrandsViewData> @ 1454d6930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FHairStrandsViewData>::~TObject<FHairStrandsViewData>(TObject<FHairStrandsViewData> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFHairStrandsViewData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  DestructItems<FHairStrandsViewData::FDirectionalLightCullData,int>
            (*(FDirectionalLightCullData **)&this[0x58].field_0x8,*(int *)(this + 0x59));
  if (*(void **)&this[0x58].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x58].field_0x8);
  }
  if (*(void **)&this[0x57].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x57].field_0x8);
  }
  if (*(void **)(this + 0x54) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 0x54));
  }
  if (*(void **)(this + 0x42) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 0x42));
  }
  DestructItems<FHairStrandsDebugData::FCullData::FLight,int>
            (*(FLight **)&this[0x34].field_0x8,*(int *)(this + 0x35));
  if (*(void **)&this[0x34].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x34].field_0x8);
  }
  DestructItems<FHairStrandsMacroGroupData,int>
            (*(FHairStrandsMacroGroupData **)(this + 0x18),*(int *)&this[0x18].field_0x8);
  if (*(void **)(this + 0x18) != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)(this + 0x18));
    return;
  }
  return;
}

// ~TObject<FLocalFogVolumeViewData> @ 1454d69f0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FLocalFogVolumeViewData>::~TObject<FLocalFogVolumeViewData>
          (TObject<FLocalFogVolumeViewData> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFLocalFogVolumeViewData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  return;
}

// ~TObject<FPreviousViewInfo> @ 1454d6a10

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::TObject<FPreviousViewInfo>
::~TObject<FPreviousViewInfo>(TObject<FPreviousViewInfo> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFPreviousViewInfo_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FPreviousViewInfo::~FPreviousViewInfo((FPreviousViewInfo *)(this + 1));
  return;
}

// ~TObject<FSubstrateViewData> @ 1454d6a30

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::TObject<FSubstrateViewData>
::~TObject<FSubstrateViewData>(TObject<FSubstrateViewData> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFSubstrateViewData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  return;
}

// ~TObject<FBatchedElements> @ 1454d6a50

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::TObject<FBatchedElements>::
~TObject<FBatchedElements>(TObject<FBatchedElements> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFBatchedElements_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(void **)&this[9].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[9].field_0x8);
  }
  DestructItems<FBatchedElements::FBatchedMeshElement,int>
            (*(FBatchedMeshElement **)&this[8].field_0x8,*(int *)(this + 9));
  if (*(void **)&this[8].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[8].field_0x8);
  }
  if (*(void **)(this + 7) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 7));
  }
  if (*(void **)(this + 6) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 6));
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this[4].field_0x8);
  *(undefined ***)(this + 4) = &___7FResourceArrayUploadInterface__6B_;
  if (*(void **)(this + 3) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 3));
  }
  if (*(void **)(this + 2) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 2));
  }
  if (*(void **)(this + 1) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 1));
    return;
  }
  return;
}

// ~TObject<FGlobalDistanceFieldInfo> @ 1454d6b10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FGlobalDistanceFieldInfo>::~TObject<FGlobalDistanceFieldInfo>
          (TObject<FGlobalDistanceFieldInfo> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFGlobalDistanceFieldInfo_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FGlobalDistanceFieldInfo::~FGlobalDistanceFieldInfo((FGlobalDistanceFieldInfo *)(this + 1));
  return;
}

// ~TObject<FLumenTranslucencyGIVolume> @ 1454d6b30

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FLumenTranslucencyGIVolume>::~TObject<FLumenTranslucencyGIVolume>
          (TObject<FLumenTranslucencyGIVolume> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFLumenTranslucencyGIVolume_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  return;
}

// ~TObject<FParallelMeshDrawCommandPass> @ 1454d6b50

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
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FParallelMeshDrawCommandPass>::~TObject<FParallelMeshDrawCommandPass>
          (TObject<FParallelMeshDrawCommandPass> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFParallelMeshDrawCommandPass_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FParallelMeshDrawCommandPass::~FParallelMeshDrawCommandPass
            ((FParallelMeshDrawCommandPass *)(this + 1));
  return;
}

// ~TObject<FSimpleElementCollector> @ 1454d6b70

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FSimpleElementCollector>::~TObject<FSimpleElementCollector>
          (TObject<FSimpleElementCollector> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFSimpleElementCollector_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FSimpleElementCollector::~FSimpleElementCollector((FSimpleElementCollector *)(this + 1));
  return;
}

// ~TObject<FDynamicPrimitiveViewMasks> @ 145520190

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicPrimitiveViewMasks>::~TObject<FDynamicPrimitiveViewMasks>
          (TObject<FDynamicPrimitiveViewMasks> *this)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar4;
  
  *(undefined ***)this =
       &
       ___7__TObject_UFDynamicPrimitiveViewMasks_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  lVar3 = *(longlong *)(this + 1);
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 != 0) {
    puVar1 = (uint *)(lVar3 + -8);
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    piVar4 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar3 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014475b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar4);
      return;
    }
  }
  return;
}

// ~TObject<FILCUpdatePrimTaskData> @ 1455201b0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FILCUpdatePrimTaskData>::~TObject<FILCUpdatePrimTaskData>
          (TObject<FILCUpdatePrimTaskData> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &
       ___7__TObject_UFILCUpdatePrimTaskData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(void **)&this[7].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[7].field_0x8);
  }
  if (*(void **)&this[6].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[6].field_0x8);
  }
  *(undefined4 *)(this + 6) = 0;
  if (*(void **)&this[5].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[5].field_0x8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x8);
  puVar3 = *(undefined8 **)(this + 1);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// ~TObject<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 145520240

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<TArray<bool,TSizedDefaultAllocator<32>_>_>::
~TObject<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TObject<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TObject_V__TArray__NV__TSizedDefaultAllocator__0CA________TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  pvVar1 = *(void **)(this + 1);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TObject<TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_> @ 145520260

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
::
~TObject<TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
          (TObject<TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
           *this)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar4;
  
  *(undefined ***)this =
       &
       ___7__TObject_V__TBitArray_V__TSizedInlineAllocator__03_0CA_V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A__________TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  lVar3 = *(longlong *)(this + 2);
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 != 0) {
    puVar1 = (uint *)(lVar3 + -8);
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    piVar4 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar3 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014475b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar4);
      return;
    }
  }
  return;
}

// ~TObject<TCommandPipe<FDynamicPrimitiveIndexList>_> @ 145520280

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<TCommandPipe<FDynamicPrimitiveIndexList>_>::
~TObject<TCommandPipe<FDynamicPrimitiveIndexList>_>
          (TObject<TCommandPipe<FDynamicPrimitiveIndexList>_> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TObject<TCommandPipe<FDynamicPrimitiveIndexList>_> *pTVar6;
  
  *(undefined ***)this =
       &
       ___7__TObject_V__TCommandPipe_UFDynamicPrimitiveIndexList_______TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(int *)(this + 9) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                       ,0x29,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::Tasks::FPipe::WaitUntilEmpty((FPipe *)&this[9].field_0x8,(FTimespan)0x7fffffffffffffff);
  if (*(longlong *)(this + 10) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                       ,0x2a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(this + 0xb));
  DestructItems<FDynamicPrimitiveIndexList,int>
            (*(FDynamicPrimitiveIndexList **)&this[8].field_0x8,*(int *)(this + 9));
  if (*(void **)&this[8].field_0x8 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&this[8].field_0x8);
  }
  if (*(longlong *)(this + 5) != 0) {
    pTVar6 = this + 6;
    if (*(TObject<TCommandPipe<FDynamicPrimitiveIndexList>_> **)&this[7].field_0x8 !=
        (TObject<TCommandPipe<FDynamicPrimitiveIndexList>_> *)0x0) {
      pTVar6 = *(TObject<TCommandPipe<FDynamicPrimitiveIndexList>_> **)&this[7].field_0x8;
    }
    (**(code **)(*(longlong *)pTVar6 + 0x10))();
  }
  if (*(longlong *)(this + 2) != 0) {
    pTVar6 = this + 3;
    if (*(TObject<TCommandPipe<FDynamicPrimitiveIndexList>_> **)&this[4].field_0x8 !=
        (TObject<TCommandPipe<FDynamicPrimitiveIndexList>_> *)0x0) {
      pTVar6 = *(TObject<TCommandPipe<FDynamicPrimitiveIndexList>_> **)&this[4].field_0x8;
    }
    (**(code **)(*(longlong *)pTVar6 + 0x10))();
  }
  puVar3 = *(undefined8 **)(this + 1);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145520396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TObject<FColoredTexturedMaterialRenderProxy> @ 1455203b0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FColoredTexturedMaterialRenderProxy>::~TObject<FColoredTexturedMaterialRenderProxy>
          (TObject<FColoredTexturedMaterialRenderProxy> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFColoredTexturedMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FMaterialRenderProxy::~FMaterialRenderProxy((FMaterialRenderProxy *)(this + 1));
  return;
}

// ~TObject<FComputeAndMarkRelevance> @ 1455203d0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FComputeAndMarkRelevance>::~TObject<FComputeAndMarkRelevance>
          (TObject<FComputeAndMarkRelevance> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  
  *(undefined ***)this =
       &
       ___7__TObject_VFComputeAndMarkRelevance_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(int *)&this[7].field_0x8 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Packets.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                       ,0x323,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this[8].field_0x9 == '\0') || (this[8].field_0xa == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFinished && bFinalized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                       ,0x324,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar3 = *(undefined8 **)(this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (*(void **)(this + 7) != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)(this + 7));
    return;
  }
  return;
}

// ~TObject<FDynamicMeshElementContext> @ 145520490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicMeshElementContext>::~TObject<FDynamicMeshElementContext>
          (TObject<FDynamicMeshElementContext> *this)

{
  code *pcVar1;
  bool bVar2;
  FViewMeshArrays *pFVar3;
  
  *(undefined ***)this =
       &
       ___7__TObject_VFDynamicMeshElementContext_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(longlong *)(this + 0x7b) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                       ,0x2a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(this + 0x7c));
  FGlobalDynamicIndexBuffer::Commit((FGlobalDynamicIndexBuffer *)(this + 0x78));
  if (*(void **)&this[0x79].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x79].field_0x8);
  }
  if (*(void **)&this[0x78].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x78].field_0x8);
  }
  FGlobalDynamicVertexBuffer::Commit((FGlobalDynamicVertexBuffer *)&this[0x76].field_0x8);
  if (*(void **)(this + 0x77) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 0x77));
  }
  FMeshElementCollector::~FMeshElementCollector((FMeshElementCollector *)&this[0x5f].field_0x8);
  if (*(void **)&this[0x5e].field_0x8 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&this[0x5e].field_0x8)
    ;
  }
  pFVar3 = *(FViewMeshArrays **)&this[0x5d].field_0x8;
  if (*(FViewMeshArrays **)&this[0x5d].field_0x8 == (FViewMeshArrays *)0x0) {
    pFVar3 = (FViewMeshArrays *)&this[5].field_0x8;
  }
  DestructItems<FDynamicMeshElementContext::FViewMeshArrays,int>(pFVar3,*(int *)(this + 0x5e));
  if (*(void **)&this[0x5d].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x5d].field_0x8);
  }
  if (*(void **)&this[4].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[4].field_0x8);
  }
  return;
}

// ~TObject<FDynamicPrimitiveIndexQueue> @ 1455205a0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicPrimitiveIndexQueue>::~TObject<FDynamicPrimitiveIndexQueue>
          (TObject<FDynamicPrimitiveIndexQueue> *this)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar4;
  
  *(undefined ***)this =
       &
       ___7__TObject_VFDynamicPrimitiveIndexQueue_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  lVar3 = *(longlong *)(this + 1);
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 != 0) {
    puVar1 = (uint *)(lVar3 + -8);
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    piVar4 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar3 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014475b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar4);
      return;
    }
  }
  return;
}

// ~TObject<FGPUOcclusionParallel> @ 1455205c0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FGPUOcclusionParallel>::~TObject<FGPUOcclusionParallel>
          (TObject<FGPUOcclusionParallel> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFGPUOcclusionParallel_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FGPUOcclusionParallel::~FGPUOcclusionParallel((FGPUOcclusionParallel *)(this + 1));
  return;
}

// ~TObject<FGPUOcclusionSerial> @ 1455205e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FGPUOcclusionSerial>::~TObject<FGPUOcclusionSerial>(TObject<FGPUOcclusionSerial> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFGPUOcclusionSerial_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(void **)&this[0xf].field_0x8 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&this[0xf].field_0x8);
  }
  FGlobalDynamicVertexBuffer::Commit((FGlobalDynamicVertexBuffer *)&this[1].field_0x8);
  if (*(void **)(this + 2) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 2));
    return;
  }
  return;
}

// ~TObject<FVisibilityTaskData> @ 145520630

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
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FVisibilityTaskData>::~TObject<FVisibilityTaskData>(TObject<FVisibilityTaskData> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFVisibilityTaskData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FVisibilityTaskData::~FVisibilityTaskData((FVisibilityTaskData *)(this + 1));
  return;
}

// ~TObject<FDynamicShadowsTaskData> @ 14560acc0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicShadowsTaskData>::~TObject<FDynamicShadowsTaskData>
          (TObject<FDynamicShadowsTaskData> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFDynamicShadowsTaskData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FDynamicShadowsTaskData::~FDynamicShadowsTaskData((FDynamicShadowsTaskData *)(this + 1));
  return;
}

// ~TObject<FProjectedShadowInfo> @ 14560ace0

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
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FProjectedShadowInfo>::~TObject<FProjectedShadowInfo>(TObject<FProjectedShadowInfo> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFProjectedShadowInfo_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FProjectedShadowInfo::~FProjectedShadowInfo((FProjectedShadowInfo *)(this + 1));
  return;
}

// ~TObject<FShadowMeshCollector> @ 14560ad00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FShadowMeshCollector>::~TObject<FShadowMeshCollector>(TObject<FShadowMeshCollector> *this)

{
  code *pcVar1;
  bool bVar2;
  
  *(undefined ***)this =
       &
       ___7__TObject_VFShadowMeshCollector_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(longlong *)(this + 0x1c) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                       ,0x2a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(this + 0x1d));
  FGlobalDynamicIndexBuffer::Commit((FGlobalDynamicIndexBuffer *)(this + 0x19));
  if (*(void **)&this[0x1a].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x1a].field_0x8);
  }
  if (*(void **)&this[0x19].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x19].field_0x8);
  }
  FGlobalDynamicVertexBuffer::Commit((FGlobalDynamicVertexBuffer *)&this[0x17].field_0x8);
  if (*(void **)(this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 0x18));
  }
  FMeshElementCollector::~FMeshElementCollector((FMeshElementCollector *)(this + 1));
  return;
}

// ~TObject<RuntimeVirtualTexture::FDynamicMeshCollector> @ 1458ced60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<RuntimeVirtualTexture::FDynamicMeshCollector>::
~TObject<RuntimeVirtualTexture::FDynamicMeshCollector>
          (TObject<RuntimeVirtualTexture::FDynamicMeshCollector> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFDynamicMeshCollector_RuntimeVirtualTexture_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(void **)(this + 0x32) != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)(this + 0x32));
  }
  FSimpleElementCollector::~FSimpleElementCollector
            ((FSimpleElementCollector *)&this[0x1c].field_0x8);
  FGlobalDynamicIndexBuffer::Commit((FGlobalDynamicIndexBuffer *)(this + 0x1a));
  if (*(void **)&this[0x1b].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x1b].field_0x8);
  }
  if (*(void **)&this[0x1a].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x1a].field_0x8);
  }
  FGlobalDynamicVertexBuffer::Commit((FGlobalDynamicVertexBuffer *)&this[0x18].field_0x8);
  if (*(void **)(this + 0x19) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 0x19));
  }
  FMeshElementCollector::~FMeshElementCollector((FMeshElementCollector *)(this + 2));
  return;
}

// ~TObject<FUniquePageList> @ 1458cee00

void __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::TObject<FUniquePageList>::
~TObject<FUniquePageList>(TObject<FUniquePageList> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFUniquePageList_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  return;
}

// ~TObject<FUniqueRequestList> @ 1458cee20

void __thiscall
TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::TObject<FUniqueRequestList>::
~TObject<FUniqueRequestList>(TObject<FUniqueRequestList> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFUniqueRequestList_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  return;
}


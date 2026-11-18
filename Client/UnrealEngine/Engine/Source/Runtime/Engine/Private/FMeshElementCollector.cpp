// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// AllocateMesh @ 1478b3b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FMeshBatch * __thiscall FMeshElementCollector::AllocateMesh(FMeshElementCollector *this)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FMeshBatch *pFVar6;
  
  iVar4 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
          Add(&this->MeshBatchStorage,1);
  uVar2 = iVar4 / 0x49;
  uVar5 = 0;
  if ((int)uVar2 < (this->MeshBatchStorage).Chunks.Array.ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMeshBatch *)(*pcVar1)();
      return pFVar6;
    }
  }
  return (FMeshBatch *)
         ((ulonglong)(uint)(iVar4 % 0x49) * 0xe0 +
         (longlong)(this->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar2]);
}

// AllocateOneFrameResource<FDynamicBeamTrailCollectorResources,enum_ERHIFeatureLevel::Type_&> @ 1481bcec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDynamicBeamTrailCollectorResources * __thiscall
FMeshElementCollector::
AllocateOneFrameResource<FDynamicBeamTrailCollectorResources,enum_ERHIFeatureLevel::Type_&>
          (FMeshElementCollector *this,Type *param_1)

{
  Type TVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar5;
  bool bVar6;
  
  paVar2 = &this->OneFrameResources->Next;
  aVar3 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x180,8);
  *(undefined8 *)((longlong)aVar3 + 8) = 0;
  *(undefined ***)aVar3 =
       &
       ___7__TObject_VFDynamicBeamTrailCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TVar4.Next = *paVar2;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar3 + 8) = TVar4.Next;
    LOCK();
    aVar5 = *paVar2;
    bVar6 = TVar4.Next == aVar5;
    if (bVar6) {
      *paVar2 = aVar3;
      aVar5 = TVar4.Next;
    }
    UNLOCK();
    TVar4.Next = aVar5;
  } while (!bVar6);
  TVar1 = *param_1;
  ((FDynamicBeamTrailCollectorResources *)((longlong)aVar3 + 0x10))->_padding_ =
       (longlong)&___7FDynamicBeamTrailCollectorResources__6B_;
  FVertexFactory::FVertexFactory((FVertexFactory *)((longlong)aVar3 + 0x18),TVar1);
  *(undefined ***)((longlong)aVar3 + 0x18) = &___7FParticleBeamTrailVertexFactory__6B_;
  *(undefined8 *)((longlong)aVar3 + 0x160) = 0;
  *(undefined8 *)((longlong)aVar3 + 0x168) = 0;
  *(undefined8 *)((longlong)aVar3 + 0x170) = 0;
  *(undefined1 *)((longlong)aVar3 + 0x178) = 1;
  return (FDynamicBeamTrailCollectorResources *)((longlong)aVar3 + 0x10);
}

// GetDynamicIndexBuffer @ 1481f6c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGlobalDynamicIndexBuffer * __thiscall
FMeshElementCollector::GetDynamicIndexBuffer(FMeshElementCollector *this)

{
  code *pcVar1;
  bool bVar2;
  FGlobalDynamicIndexBuffer *pFVar3;
  
  if (this->DynamicIndexBuffer != (FGlobalDynamicIndexBuffer *)0x0) {
    return this->DynamicIndexBuffer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DynamicIndexBuffer",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                     ,0x31,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGlobalDynamicIndexBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return this->DynamicIndexBuffer;
}

// GetDynamicVertexBuffer @ 1481fa420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGlobalDynamicVertexBuffer * __thiscall
FMeshElementCollector::GetDynamicVertexBuffer(FMeshElementCollector *this)

{
  code *pcVar1;
  bool bVar2;
  FGlobalDynamicVertexBuffer *pFVar3;
  
  if (this->DynamicVertexBuffer != (FGlobalDynamicVertexBuffer *)0x0) {
    return this->DynamicVertexBuffer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DynamicVertexBuffer",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                     ,0x38,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGlobalDynamicVertexBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return this->DynamicVertexBuffer;
}

// FMeshElementCollector @ 1484ba730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMeshElementCollector * __thiscall
FMeshElementCollector::FMeshElementCollector
          (FMeshElementCollector *this,Type param_1,
          TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *param_2,
          ECommitFlags param_3)

{
  bool bVar1;
  
  TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
  TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
            (&this->MeshBatchStorage,0);
  (this->MeshBatches).AllocatorInstance.SecondaryData.Data =
       (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        **)0x0;
  (this->MeshBatches).ArrayNum = 0;
  (this->MeshBatches).ArrayMax = 2;
  (this->NumMeshBatchElementsPerView).AllocatorInstance.SecondaryData.Data = (int *)0x0;
  (this->NumMeshBatchElementsPerView).ArrayNum = 0;
  (this->NumMeshBatchElementsPerView).ArrayMax = 2;
  (this->SimpleElementCollectors).AllocatorInstance.SecondaryData.Data =
       (FSimpleElementCollector **)0x0;
  (this->SimpleElementCollectors).ArrayNum = 0;
  (this->SimpleElementCollectors).ArrayMax = 2;
  (this->DebugSimpleElementCollectors).AllocatorInstance.SecondaryData.Data =
       (FSimpleElementCollector **)0x0;
  (this->DebugSimpleElementCollectors).ArrayNum = 0;
  (this->DebugSimpleElementCollectors).ArrayMax = 2;
  (this->Views).AllocatorInstance.SecondaryData.Data = (FSceneView **)0x0;
  (this->Views).ArrayNum = 0;
  (this->Views).ArrayMax = 2;
  (this->MeshIdInPrimitivePerView).AllocatorInstance.SecondaryData.Data = (ushort *)0x0;
  (this->MeshIdInPrimitivePerView).ArrayNum = 0;
  (this->MeshIdInPrimitivePerView).ArrayMax = 2;
  (this->MaterialProxiesToDelete).AllocatorInstance.Data = (FMaterialRenderProxy **)0x0;
  (this->MaterialProxiesToDelete).ArrayNum = 0;
  (this->MaterialProxiesToDelete).ArrayMax = 0;
  (this->MaterialProxiesToInvalidate).AllocatorInstance.Data =
       (TTuple<FMaterialRenderProxy_*,bool> *)0x0;
  (this->MaterialProxiesToInvalidate).ArrayNum = 0;
  (this->MaterialProxiesToInvalidate).ArrayMax = 0;
  (this->MaterialProxiesToUpdate).AllocatorInstance.Data = (FMaterialRenderProxy **)0x0;
  (this->MaterialProxiesToUpdate).ArrayNum = 0;
  (this->MaterialProxiesToUpdate).ArrayMax = 0;
  (this->MeshBatchesForGPUScene).AllocatorInstance.Data =
       (TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*> *)0x0;
  (this->MeshBatchesForGPUScene).ArrayNum = 0;
  (this->MeshBatchesForGPUScene).ArrayMax = 0;
  this->OneFrameResources = param_2;
  this->PrimitiveSceneProxy = (FPrimitiveSceneProxy *)0x0;
  this->DynamicIndexBuffer = (FGlobalDynamicIndexBuffer *)0x0;
  this->DynamicVertexBuffer = (FGlobalDynamicVertexBuffer *)0x0;
  this->DynamicReadBuffer = (FGlobalDynamicReadBuffer *)0x0;
  this->RHICmdList = (FRHICommandList *)0x0;
  this->FeatureLevel = param_1;
  this->CommitFlags = param_3;
  bVar1 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)param_1);
  this->bUseGPUScene = bVar1;
  (this->DynamicPrimitiveCollectorPerView).AllocatorInstance.SecondaryData.Data =
       (FGPUScenePrimitiveCollector **)0x0;
  (this->DynamicPrimitiveCollectorPerView).ArrayNum = 0;
  (this->DynamicPrimitiveCollectorPerView).ArrayMax = 2;
  return this;
}

// ~FMeshElementCollector @ 1484bd780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FMeshElementCollector::~FMeshElementCollector(FMeshElementCollector *this)

{
  TArray<FMaterialRenderProxy_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar1;
  int iVar2;
  FGPUScenePrimitiveCollector **ppFVar3;
  TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*> *pTVar4;
  FMaterialRenderProxy **ppFVar5;
  TTuple<FMaterialRenderProxy_*,bool> *pTVar6;
  ushort *puVar7;
  FSceneView **ppFVar8;
  FSimpleElementCollector **ppFVar9;
  int *piVar10;
  TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  **ppTVar11;
  void **ppvVar12;
  FMaterialRenderProxy **ppFVar13;
  undefined1 local_res8 [8];
  
  pTVar1 = &this->MaterialProxiesToDelete;
  ppFVar13 = (pTVar1->AllocatorInstance).Data;
  iVar2 = (this->MaterialProxiesToDelete).ArrayNum;
  ppFVar5 = ppFVar13 + iVar2;
  while( true ) {
    if ((this->MaterialProxiesToDelete).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMaterialRenderProxy_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (ppFVar13 == ppFVar5) break;
    if (*ppFVar13 != (FMaterialRenderProxy *)0x0) {
      (**(code **)(*ppFVar13)->_padding_)();
    }
    ppFVar13 = ppFVar13 + 1;
  }
  piVar10 = &(this->MaterialProxiesToDelete).ArrayMax;
  (this->MaterialProxiesToDelete).ArrayNum = 0;
  if (*piVar10 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialRenderProxy_*>_>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar10);
  }
  ppFVar3 = (this->DynamicPrimitiveCollectorPerView).AllocatorInstance.SecondaryData.Data;
  if (ppFVar3 != (FGPUScenePrimitiveCollector **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar3);
  }
  pTVar4 = (this->MeshBatchesForGPUScene).AllocatorInstance.Data;
  if (pTVar4 != (TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar4);
  }
  ppFVar5 = (this->MaterialProxiesToUpdate).AllocatorInstance.Data;
  if (ppFVar5 != (FMaterialRenderProxy **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar5);
  }
  pTVar6 = (this->MaterialProxiesToInvalidate).AllocatorInstance.Data;
  if (pTVar6 != (TTuple<FMaterialRenderProxy_*,bool> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar6);
  }
  ppFVar5 = (pTVar1->AllocatorInstance).Data;
  if (ppFVar5 != (FMaterialRenderProxy **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar5);
  }
  puVar7 = (this->MeshIdInPrimitivePerView).AllocatorInstance.SecondaryData.Data;
  if (puVar7 != (ushort *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar7);
  }
  ppFVar8 = (this->Views).AllocatorInstance.SecondaryData.Data;
  if (ppFVar8 != (FSceneView **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar8);
  }
  ppFVar9 = (this->DebugSimpleElementCollectors).AllocatorInstance.SecondaryData.Data;
  if (ppFVar9 != (FSimpleElementCollector **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar9);
  }
  ppFVar9 = (this->SimpleElementCollectors).AllocatorInstance.SecondaryData.Data;
  if (ppFVar9 != (FSimpleElementCollector **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar9);
  }
  piVar10 = (this->NumMeshBatchElementsPerView).AllocatorInstance.SecondaryData.Data;
  if (piVar10 != (int *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar10);
  }
  ppTVar11 = (this->MeshBatches).AllocatorInstance.SecondaryData.Data;
  if (ppTVar11 !=
      (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
       **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppTVar11);
  }
  TIndirectArray<TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
  ::Empty((TIndirectArray<TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           *)this,0);
  ppvVar12 = (this->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data;
  if (ppvVar12 != (void **)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(ppvVar12);
  }
  return;
}

// AddMesh @ 1484c10e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMeshElementCollector::AddMesh(FMeshElementCollector *this,int param_1,FMeshBatch *param_2)

{
  int *piVar1;
  uchar *puVar2;
  FGenericStaticFeatureLevel FVar3;
  longlong lVar4;
  FPrimitiveSceneProxy *pFVar5;
  ForElementType<FMeshBatchElement> FVar6;
  ForElementType<FMeshBatchAndRelevance> *pFVar7;
  code *pcVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  IRendererModule *pIVar19;
  TArray<FGPUScenePrimitiveCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar20;
  TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar21;
  TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar22;
  TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar23;
  TArray<FSceneView_const_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar24;
  ForElementType<FMeshBatchElement> FVar25;
  TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*> *pTVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  
  lVar27 = (longlong)param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FLogCategoryBase::FLogCategoryBase
              ((FLogCategoryBase *)&FMeshElementCollector_AddMesh,L"FMeshElementCollector_AddMesh",
               Warning,All);
    atexit(`FMeshElementCollector::AddMesh'::__l2::
           _dynamic_atexit_destructor_for__FMeshElementCollector_AddMesh__);
    _Init_thread_footer(&::_TSS0);
  }
  uVar30 = 0;
  if (param_2->bCanApplyViewModeOverrides != 0) {
    uVar17 = 0;
    if (param_1 < (this->Views).ArrayNum) {
      uVar17 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar24 = (TArray<FSceneView_const_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(this->Views).AllocatorInstance.SecondaryData.Data;
    if (pTVar24 ==
        (TArray<FSceneView_const_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar24 = &this->Views;
    }
    lVar4 = *(longlong *)((pTVar24->AllocatorInstance).InlineData + lVar27 * 8);
    ApplyViewModeOverrides
              (param_1,(FEngineShowFlags *)(*(longlong *)(lVar4 + 8) + 0x48),
               *(Type *)(lVar4 + 0x1bf8),this->PrimitiveSceneProxy,
               param_2->bUseWireframeSelectionColoring,param_2,this);
  }
  bVar16 = FMeshBatch::Validate(param_2,this->PrimitiveSceneProxy,this->FeatureLevel);
  if (bVar16) {
    FVar3.FeatureLevel = this->FeatureLevel;
    pFVar5 = this->PrimitiveSceneProxy;
    bVar16 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,FVar3);
    if (((!bVar16) || (FVar3.FeatureLevel == ES3_1)) &&
       (iVar18 = (param_2->Elements).ArrayNum, uVar31 = uVar30, 0 < iVar18)) {
      do {
        uVar28 = (uint)uVar30;
        uVar17 = 0;
        if ((int)uVar28 < iVar18) {
          uVar17 = ~uVar28 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar6 = (param_2->Elements).AllocatorInstance.SecondaryData;
        FVar25 = (ForElementType<FMeshBatchElement>)param_2;
        if (FVar6 != (ForElementType<FMeshBatchElement>)0x0) {
          FVar25 = FVar6;
        }
        if ((*(longlong *)(uVar31 + (longlong)FVar25) == 0) &&
           (*(longlong *)(uVar31 + 8 + (longlong)FVar25) == 0)) {
          *(TUniformBufferRef<FPrimitiveUniformShaderParameters> *)(uVar31 + (longlong)FVar25) =
               pFVar5->UniformBuffer;
        }
        iVar18 = (param_2->Elements).ArrayNum;
        uVar30 = (ulonglong)(uVar28 + 1);
        uVar31 = uVar31 + 0x98;
      } while ((int)(uVar28 + 1) < iVar18);
    }
    uVar17 = 0;
    if ((this->bUseGPUScene != false) && (-1 < param_2->VertexFactory->PrimitiveIdStreamIndex[0])) {
      if ((this->CommitFlags & DeferGPUScene) == None) {
        pIVar19 = GetRendererModule();
        pcVar8 = *(code **)((longlong)*pIVar19 + 0x250);
        uVar28 = uVar17;
        if (param_1 < (this->DynamicPrimitiveCollectorPerView).ArrayNum) {
          uVar28 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar20 = (TArray<FGPUScenePrimitiveCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)(this->DynamicPrimitiveCollectorPerView).AllocatorInstance.SecondaryData.Data;
        if (pTVar20 ==
            (TArray<FGPUScenePrimitiveCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar20 = &this->DynamicPrimitiveCollectorPerView;
        }
        (*pcVar8)(pIVar19,*(undefined8 *)((pTVar20->AllocatorInstance).InlineData + lVar27 * 8),
                  param_2);
      }
      else {
        uVar28 = uVar17;
        if (param_1 < (this->DynamicPrimitiveCollectorPerView).ArrayNum) {
          uVar28 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar20 = (TArray<FGPUScenePrimitiveCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)(this->DynamicPrimitiveCollectorPerView).AllocatorInstance.SecondaryData.Data;
        piVar1 = &(this->MeshBatchesForGPUScene).ArrayMax;
        iVar18 = (this->MeshBatchesForGPUScene).ArrayNum;
        if (pTVar20 ==
            (TArray<FGPUScenePrimitiveCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar20 = &this->DynamicPrimitiveCollectorPerView;
        }
        puVar2 = (pTVar20->AllocatorInstance).InlineData + lVar27 * 8;
        if (iVar18 == *piVar1) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*>_>_>
                             (0x810,&(this->MeshBatchesForGPUScene).AllocatorInstance,piVar1);
        }
        (this->MeshBatchesForGPUScene).ArrayNum = iVar18 + 1;
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        uVar12 = puVar2[4];
        uVar13 = puVar2[5];
        uVar14 = puVar2[6];
        uVar15 = puVar2[7];
        pTVar26 = (this->MeshBatchesForGPUScene).AllocatorInstance.Data + iVar18;
        pTVar26->field_0x0 = puVar2[0];
        pTVar26->field_0x1 = uVar9;
        pTVar26->field_0x2 = uVar10;
        pTVar26->field_0x3 = uVar11;
        pTVar26->field_0x4 = uVar12;
        pTVar26->field_0x5 = uVar13;
        pTVar26->field_0x6 = uVar14;
        pTVar26->field_0x7 = uVar15;
        *(FMeshBatch **)&pTVar26->field_0x8 = param_2;
      }
    }
    if ((this->CommitFlags & DeferMaterials) == None) {
      FMaterialRenderProxy::UpdateUniformExpressionCacheIfNeeded
                (param_2->MaterialRenderProxy,(FRHICommandListBase *)this->RHICmdList,
                 this->FeatureLevel);
    }
    else {
      iVar18 = (this->MaterialProxiesToUpdate).ArrayNum;
      piVar1 = &(this->MaterialProxiesToUpdate).ArrayMax;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialRenderProxy_const_*>_>
                           (0x808,&(this->MaterialProxiesToUpdate).AllocatorInstance,piVar1);
      }
      (this->MaterialProxiesToUpdate).ArrayNum = iVar18 + 1;
      (this->MaterialProxiesToUpdate).AllocatorInstance.Data[iVar18] = param_2->MaterialRenderProxy;
    }
    uVar29 = (uint)~param_1 >> 0x1f;
    uVar28 = uVar17;
    if (param_1 < (this->MeshIdInPrimitivePerView).ArrayNum) {
      uVar28 = uVar29;
    }
    if ((uVar28 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar21 = (TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(this->MeshIdInPrimitivePerView).AllocatorInstance.SecondaryData.Data;
    if (pTVar21 ==
        (TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar21 = &this->MeshIdInPrimitivePerView;
    }
    param_2->MeshIdInPrimitive = *(ushort *)((pTVar21->AllocatorInstance).InlineData + lVar27 * 2);
    uVar28 = uVar17;
    if (param_1 < (this->MeshIdInPrimitivePerView).ArrayNum) {
      uVar28 = uVar29;
    }
    if ((uVar28 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar21 = (TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(this->MeshIdInPrimitivePerView).AllocatorInstance.SecondaryData.Data;
    if (pTVar21 ==
        (TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar21 = &this->MeshIdInPrimitivePerView;
    }
    puVar2 = (pTVar21->AllocatorInstance).InlineData + lVar27 * 2;
    *(short *)puVar2 = *(short *)puVar2 + 1;
    iVar18 = (param_2->Elements).ArrayNum;
    uVar28 = uVar17;
    if (param_1 < (this->NumMeshBatchElementsPerView).ArrayNum) {
      uVar28 = uVar29;
    }
    if ((uVar28 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar22 = (TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(this->NumMeshBatchElementsPerView).AllocatorInstance.SecondaryData.Data;
    if (pTVar22 ==
        (TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar22 = &this->NumMeshBatchElementsPerView;
    }
    puVar2 = (pTVar22->AllocatorInstance).InlineData + lVar27 * 4;
    *(int *)puVar2 = *(int *)puVar2 + iVar18;
    uVar28 = uVar17;
    if (param_1 < (this->MeshBatches).ArrayNum) {
      uVar28 = uVar29;
    }
    if ((uVar28 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar23 = (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(this->MeshBatches).AllocatorInstance.SecondaryData.Data;
    if (pTVar23 ==
        (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar23 = &this->MeshBatches;
    }
    if (*(longlong *)((pTVar23->AllocatorInstance).InlineData + lVar27 * 8) != 0) {
      if (param_1 < (this->MeshBatches).ArrayNum) {
        uVar17 = uVar29;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar23 = (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)(this->MeshBatches).AllocatorInstance.SecondaryData.Data;
      if (pTVar23 ==
          (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        pTVar23 = &this->MeshBatches;
      }
      pFVar7 = *(ForElementType<FMeshBatchAndRelevance> **)
                ((pTVar23->AllocatorInstance).InlineData + lVar27 * 8);
      piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
      iVar18 = *(int *)&pFVar7[1].Data;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_>
                           (0x818,pFVar7,piVar1);
      }
      *(int *)&pFVar7[1].Data = iVar18 + 1;
      FMeshBatchAndRelevance::FMeshBatchAndRelevance
                (pFVar7->Data + iVar18,param_2,this->PrimitiveSceneProxy,this->FeatureLevel);
    }
  }
  return;
}

// AddViewMeshArrays @ 1484c27b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshElementCollector::AddViewMeshArrays
          (FMeshElementCollector *this,FSceneView *param_1,
          TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_2,FSimpleElementCollector *param_3,FGPUScenePrimitiveCollector *param_4,
          FSimpleElementCollector *param_5)

{
  int *piVar1;
  TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar3;
  TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar4;
  TArray<FSceneView_const_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar5;
  TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar6;
  TArray<FGPUScenePrimitiveCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TArray<FSceneView_const_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar12;
  ForElementType<unsigned_short> *pFVar13;
  TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar14;
  TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar15;
  TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar16;
  TArray<FGPUScenePrimitiveCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar17;
  TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar18;
  FSceneView *local_res10;
  TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *local_res18;
  ForElementType<FSceneView_const_*> local_res20;
  ForElementType<unsigned_short> local_28;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20.Data = (FSceneView **)param_3;
  if (this->RHICmdList == (FRHICommandList *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("RHICmdList",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneManagement.cpp"
                        ,500,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar12 = (TArray<FSceneView_const_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->Views).AllocatorInstance.SecondaryData.Data;
  pTVar5 = &this->Views;
  if (pTVar12 ==
      (TArray<FSceneView_const_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar12 = pTVar5;
  }
  if ((pTVar12 <= &local_res10) &&
     (&local_res10 < (pTVar12->AllocatorInstance).InlineData + (longlong)(this->Views).ArrayMax * 8)
     ) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = (this->Views).ArrayNum;
  piVar1 = &(this->Views).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FSceneView_const_*>_>
                       (0x808,&pTVar5->AllocatorInstance,piVar1);
  }
  (this->Views).ArrayNum = iVar11 + 1;
  pTVar12 = (TArray<FSceneView_const_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->Views).AllocatorInstance.SecondaryData.Data;
  if (pTVar12 ==
      (TArray<FSceneView_const_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar12 = pTVar5;
  }
  pTVar6 = &this->MeshIdInPrimitivePerView;
  local_28.InlineData[0] = '\0';
  local_28.InlineData[1] = '\0';
  *(FSceneView **)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 8) = local_res10;
  pFVar13 = (ForElementType<unsigned_short> *)
            (this->MeshIdInPrimitivePerView).AllocatorInstance.SecondaryData.Data;
  if (pFVar13 == (ForElementType<unsigned_short> *)0x0) {
    pFVar13 = &pTVar6->AllocatorInstance;
  }
  if ((pFVar13 <= &local_28) &&
     (&local_28 <
      (ForElementType<unsigned_short> *)
      (((ForElementType<unsigned_short> *)pFVar13->InlineData)->InlineData +
      (longlong)(this->MeshIdInPrimitivePerView).ArrayMax * 2))) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = (this->MeshIdInPrimitivePerView).ArrayNum;
  piVar1 = &(this->MeshIdInPrimitivePerView).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_short>_>
                       (0x202,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->MeshIdInPrimitivePerView).ArrayNum = iVar11 + 1;
  pTVar18 = (TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->MeshIdInPrimitivePerView).AllocatorInstance.SecondaryData.Data;
  if (pTVar18 ==
      (TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar18 = pTVar6;
  }
  pTVar2 = &this->MeshBatches;
  *(undefined2 *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar11 * 2) =
       local_28.InlineData._0_2_;
  pTVar14 = (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->MeshBatches).AllocatorInstance.SecondaryData.Data;
  if (pTVar14 ==
      (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar14 = pTVar2;
  }
  if ((pTVar14 <= &local_res18) &&
     (&local_res18 <
      (pTVar14->AllocatorInstance).InlineData + (longlong)(this->MeshBatches).ArrayMax * 8)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = (this->MeshBatches).ArrayNum;
  piVar1 = &(this->MeshBatches).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>_>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  local_28._4_4_ = 0;
  (this->MeshBatches).ArrayNum = iVar11 + 1;
  pTVar14 = (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->MeshBatches).AllocatorInstance.SecondaryData.Data;
  if (pTVar14 ==
      (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar14 = pTVar2;
  }
  pTVar3 = &this->NumMeshBatchElementsPerView;
  *(TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
    **)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar11 * 8) = local_res18;
  pTVar15 = (TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->NumMeshBatchElementsPerView).AllocatorInstance.SecondaryData.Data;
  if (pTVar15 ==
      (TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar15 = pTVar3;
  }
  if ((pTVar15 <= &local_28.field_0x4) &&
     (&local_28.field_0x4 <
      (pTVar15->AllocatorInstance).InlineData +
      (longlong)(this->NumMeshBatchElementsPerView).ArrayMax * 4)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = (this->NumMeshBatchElementsPerView).ArrayNum;
  piVar1 = &(this->NumMeshBatchElementsPerView).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<int>_>
                       (0x404,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->NumMeshBatchElementsPerView).ArrayNum = iVar11 + 1;
  pTVar15 = (TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->NumMeshBatchElementsPerView).AllocatorInstance.SecondaryData.Data;
  if (pTVar15 ==
      (TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar15 = pTVar3;
  }
  pTVar4 = &this->SimpleElementCollectors;
  puVar8 = (pTVar15->AllocatorInstance).InlineData + (longlong)iVar11 * 4;
  puVar8[0] = local_28._4_1_;
  puVar8[1] = local_28._5_1_;
  puVar8[2] = local_28._6_1_;
  puVar8[3] = local_28._7_1_;
  pTVar16 = (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->SimpleElementCollectors).AllocatorInstance.SecondaryData.Data;
  if (pTVar16 ==
      (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar16 = pTVar4;
  }
  if ((pTVar16 <= &local_res20) &&
     (&local_res20 <
      (pTVar16->AllocatorInstance).InlineData +
      (longlong)(this->SimpleElementCollectors).ArrayMax * 8)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = (this->SimpleElementCollectors).ArrayNum;
  piVar1 = &(this->SimpleElementCollectors).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FSimpleElementCollector_*>_>
                       (0x808,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->SimpleElementCollectors).ArrayNum = iVar11 + 1;
  pTVar16 = (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->SimpleElementCollectors).AllocatorInstance.SecondaryData.Data;
  if (pTVar16 ==
      (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar16 = pTVar4;
  }
  pTVar7 = &this->DynamicPrimitiveCollectorPerView;
  *(FSceneView ***)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar11 * 8) =
       local_res20.Data;
  pTVar17 = (TArray<FGPUScenePrimitiveCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->DynamicPrimitiveCollectorPerView).AllocatorInstance.SecondaryData.Data;
  if (pTVar17 ==
      (TArray<FGPUScenePrimitiveCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar17 = pTVar7;
  }
  if ((pTVar17 <= &param_4) &&
     (&param_4 <
      (pTVar17->AllocatorInstance).InlineData +
      (longlong)(this->DynamicPrimitiveCollectorPerView).ArrayMax * 8)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = (this->DynamicPrimitiveCollectorPerView).ArrayNum;
  piVar1 = &(this->DynamicPrimitiveCollectorPerView).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FGPUScenePrimitiveCollector_*>_>
                       (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  (this->DynamicPrimitiveCollectorPerView).ArrayNum = iVar11 + 1;
  pTVar17 = (TArray<FGPUScenePrimitiveCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->DynamicPrimitiveCollectorPerView).AllocatorInstance.SecondaryData.Data;
  if (pTVar17 ==
      (TArray<FGPUScenePrimitiveCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar17 = pTVar7;
  }
  *(FGPUScenePrimitiveCollector **)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar11 * 8)
       = param_4;
  if (param_5 != (FSimpleElementCollector *)0x0) {
    pTVar16 = (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(this->DebugSimpleElementCollectors).AllocatorInstance.SecondaryData.Data;
    pTVar4 = &this->DebugSimpleElementCollectors;
    if (pTVar16 ==
        (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar16 = pTVar4;
    }
    if ((pTVar16 <= &param_5) &&
       (&param_5 <
        (pTVar16->AllocatorInstance).InlineData +
        (longlong)(this->DebugSimpleElementCollectors).ArrayMax * 8)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar11 = (this->DebugSimpleElementCollectors).ArrayNum;
    piVar1 = &(this->DebugSimpleElementCollectors).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FSimpleElementCollector_*>_>
                         (0x808,&pTVar4->AllocatorInstance,piVar1);
    }
    (this->DebugSimpleElementCollectors).ArrayNum = iVar11 + 1;
    pTVar16 = (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(this->DebugSimpleElementCollectors).AllocatorInstance.SecondaryData.Data;
    if (pTVar16 ==
        (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar16 = pTVar4;
    }
    *(FSimpleElementCollector **)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar11 * 8) =
         param_5;
  }
  return;
}

// CacheUniformExpressions @ 1484c5920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshElementCollector::CacheUniformExpressions
          (FMeshElementCollector *this,FMaterialRenderProxy *param_1,bool param_2)

{
  int *piVar1;
  TTuple<FMaterialRenderProxy_*,bool> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (param_1 == (FMaterialRenderProxy *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneManagement.cpp"
                       ,0x23a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->CommitFlags & DeferMaterials) != None) {
    iVar5 = (this->MaterialProxiesToInvalidate).ArrayNum;
    piVar1 = &(this->MaterialProxiesToInvalidate).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TTuple<FMaterialRenderProxy_*,bool>_>_>
                        (0x810,&(this->MaterialProxiesToInvalidate).AllocatorInstance,piVar1);
    }
    (this->MaterialProxiesToInvalidate).ArrayNum = iVar5 + 1;
    pTVar2 = (this->MaterialProxiesToInvalidate).AllocatorInstance.Data;
    *(FMaterialRenderProxy **)(pTVar2 + iVar5) = param_1;
    pTVar2[iVar5].field_0x8 = param_2;
    return;
  }
  FMaterialRenderProxy::InvalidateUniformExpressionCache(param_1,param_2);
  return;
}

// ClearViewMeshArrays @ 1484c6b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FMeshElementCollector::ClearViewMeshArrays(FMeshElementCollector *this)

{
  (this->Views).ArrayNum = 0;
  if ((this->Views).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FSceneView_const_*>_>
              (8,8,0,&(this->Views).AllocatorInstance,0,&(this->Views).ArrayMax);
  }
  (this->MeshIdInPrimitivePerView).ArrayNum = 0;
  if ((this->MeshIdInPrimitivePerView).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_short>_>
              (2,2,0,&(this->MeshIdInPrimitivePerView).AllocatorInstance,0,
               &(this->MeshIdInPrimitivePerView).ArrayMax);
  }
  (this->MeshBatches).ArrayNum = 0;
  if ((this->MeshBatches).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>_>
              (8,8,0,&(this->MeshBatches).AllocatorInstance,0,&(this->MeshBatches).ArrayMax);
  }
  (this->NumMeshBatchElementsPerView).ArrayNum = 0;
  if ((this->NumMeshBatchElementsPerView).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<int>_>
              (4,4,0,&(this->NumMeshBatchElementsPerView).AllocatorInstance,0,
               &(this->NumMeshBatchElementsPerView).ArrayMax);
  }
  (this->SimpleElementCollectors).ArrayNum = 0;
  if ((this->SimpleElementCollectors).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FSimpleElementCollector_*>_>
              (8,8,0,&(this->SimpleElementCollectors).AllocatorInstance,0,
               &(this->SimpleElementCollectors).ArrayMax);
  }
  (this->DynamicPrimitiveCollectorPerView).ArrayNum = 0;
  if ((this->DynamicPrimitiveCollectorPerView).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FGPUScenePrimitiveCollector_*>_>
              (8,8,0,&(this->DynamicPrimitiveCollectorPerView).AllocatorInstance,0,
               &(this->DynamicPrimitiveCollectorPerView).ArrayMax);
  }
  (this->DebugSimpleElementCollectors).ArrayNum = 0;
  if ((this->DebugSimpleElementCollectors).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FSimpleElementCollector_*>_>
              (8,8,0,&(this->DebugSimpleElementCollectors).AllocatorInstance,0,
               &(this->DebugSimpleElementCollectors).ArrayMax);
  }
  return;
}

// Commit @ 1484c71c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FMeshElementCollector::Commit(FMeshElementCollector *this)

{
  int *piVar1;
  FMaterialRenderProxy **ppFVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  IRendererModule *pIVar7;
  TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*> *pTVar8;
  TTuple<FMaterialRenderProxy_*,bool> *pTVar9;
  TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*> *pTVar10;
  TTuple<FMaterialRenderProxy_*,bool> *pTVar11;
  FMaterialRenderProxy **ppFVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId533,"FMeshElementCollector::Commit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneManagement.cpp"
               ,0x215);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId533);
  }
  if ((this->RHICmdList == (FRHICommandList *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RHICmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneManagement.cpp"
                         ,0x216,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = (this->MeshBatchesForGPUScene).ArrayNum;
  pTVar10 = (this->MeshBatchesForGPUScene).AllocatorInstance.Data;
  pTVar8 = pTVar10 + iVar3;
  while( true ) {
    if ((this->MeshBatchesForGPUScene).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar10 == pTVar8) break;
    uVar5 = *(undefined8 *)pTVar10;
    pIVar7 = GetRendererModule();
    (**(code **)((longlong)*pIVar7 + 0x250))(pIVar7,uVar5);
    pTVar10 = pTVar10 + 1;
  }
  iVar3 = (this->MaterialProxiesToInvalidate).ArrayNum;
  pTVar11 = (this->MaterialProxiesToInvalidate).AllocatorInstance.Data;
  pTVar9 = pTVar11 + iVar3;
  while( true ) {
    if ((this->MaterialProxiesToInvalidate).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TTuple<FMaterialRenderProxy_*,bool>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pTVar11 == pTVar9) break;
    FMaterialRenderProxy::InvalidateUniformExpressionCache
              (*(FMaterialRenderProxy **)pTVar11,SUB41(*(undefined4 *)&pTVar11->field_0x8,0));
    pTVar11 = pTVar11 + 1;
  }
  ppFVar12 = (this->MaterialProxiesToUpdate).AllocatorInstance.Data;
  iVar3 = (this->MaterialProxiesToUpdate).ArrayNum;
  ppFVar2 = ppFVar12 + iVar3;
  while( true ) {
    if ((this->MaterialProxiesToUpdate).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FMaterialRenderProxy_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (ppFVar12 == ppFVar2) break;
    FMaterialRenderProxy::UpdateUniformExpressionCacheIfNeeded
              (*ppFVar12,(FRHICommandListBase *)this->RHICmdList,this->FeatureLevel);
    ppFVar12 = ppFVar12 + 1;
  }
  piVar1 = &(this->MeshBatchesForGPUScene).ArrayMax;
  (this->MeshBatchesForGPUScene).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TTuple<FGPUScenePrimitiveCollector_*,FMeshBatch_*>_>_>
              (0x10,8,0,&(this->MeshBatchesForGPUScene).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->MaterialProxiesToInvalidate).ArrayMax;
  (this->MaterialProxiesToInvalidate).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TTuple<FMaterialRenderProxy_*,bool>_>_>
              (0x10,8,0,&(this->MaterialProxiesToInvalidate).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->MaterialProxiesToUpdate).ArrayMax;
  (this->MaterialProxiesToUpdate).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialRenderProxy_const_*>_>
              (8,8,0,&(this->MaterialProxiesToUpdate).AllocatorInstance,0,piVar1);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Finish @ 1484d76b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FMeshElementCollector::Finish(FMeshElementCollector *this)

{
  bool bVar1;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FMeshElementCollector_Finish");
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId558,"FMeshElementCollector_Finish",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneManagement.cpp"
               ,0x22e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId558);
  }
  Commit(this);
  ClearViewMeshArrays(this);
  this->DynamicIndexBuffer = (FGlobalDynamicIndexBuffer *)0x0;
  this->DynamicVertexBuffer = (FGlobalDynamicVertexBuffer *)0x0;
  this->DynamicReadBuffer = (FGlobalDynamicReadBuffer *)0x0;
  this->RHICmdList = (FRHICommandList *)0x0;
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// GetDebugPDI @ 1484d8470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPrimitiveDrawInterface * __thiscall
FMeshElementCollector::GetDebugPDI(FMeshElementCollector *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrimitiveDrawInterface *pFVar4;
  TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar5;
  
  uVar3 = 0;
  if (param_1 < (this->DebugSimpleElementCollectors).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPrimitiveDrawInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar5 = (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->DebugSimpleElementCollectors).AllocatorInstance.SecondaryData.Data;
  if (pTVar5 == (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar5 = &this->DebugSimpleElementCollectors;
  }
  return *(FPrimitiveDrawInterface **)
          ((pTVar5->AllocatorInstance).InlineData + (longlong)param_1 * 8);
}

// GetPDI @ 1484d9380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPrimitiveDrawInterface * __thiscall
FMeshElementCollector::GetPDI(FMeshElementCollector *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrimitiveDrawInterface *pFVar4;
  TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar5;
  
  uVar3 = 0;
  if (param_1 < (this->SimpleElementCollectors).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPrimitiveDrawInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  pTVar5 = (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->SimpleElementCollectors).AllocatorInstance.SecondaryData.Data;
  if (pTVar5 == (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar5 = &this->SimpleElementCollectors;
  }
  return *(FPrimitiveDrawInterface **)
          ((pTVar5->AllocatorInstance).InlineData + (longlong)param_1 * 8);
}

// RegisterOneFrameMaterialProxy @ 1484ef800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshElementCollector::RegisterOneFrameMaterialProxy
          (FMeshElementCollector *this,FMaterialRenderProxy *param_1)

{
  int *piVar1;
  FMaterialRenderProxy **ppFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FMaterialRenderProxy_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar6;
  FMaterialRenderProxy *local_res10 [3];
  
  local_res10[0] = param_1;
  if ((param_1 == (FMaterialRenderProxy *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneManagement.cpp"
                         ,0x1b2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res10[0]->bMarkedTransient = '\x01';
  pTVar6 = &this->MaterialProxiesToDelete;
  ppFVar2 = (pTVar6->AllocatorInstance).Data;
  if (((ppFVar2 <= local_res10) &&
      (local_res10 < ppFVar2 + (this->MaterialProxiesToDelete).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->MaterialProxiesToDelete).ArrayNum;
  piVar1 = &(this->MaterialProxiesToDelete).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialRenderProxy_*>_>
                      (0x808,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->MaterialProxiesToDelete).ArrayNum = iVar5 + 1;
  (pTVar6->AllocatorInstance).Data[iVar5] = local_res10[0];
  return;
}

// SetPrimitive @ 1484fc250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshElementCollector::SetPrimitive
          (FMeshElementCollector *this,FPrimitiveSceneProxy *param_1,FHitProxyId *param_2)

{
  uchar *puVar1;
  int iVar2;
  TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar3;
  TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar4;
  code *pcVar5;
  bool bVar6;
  TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar7;
  TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  if ((param_1 == (FPrimitiveSceneProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPrimitiveSceneProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneManagement.cpp"
                         ,0x1c5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = 0;
  uVar14 = 0;
  this->PrimitiveSceneProxy = param_1;
  uVar10 = uVar13;
  uVar11 = uVar13;
  if (0 < (this->SimpleElementCollectors).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar12 = uVar14;
      if ((int)uVar9 < (this->SimpleElementCollectors).ArrayNum) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)(this->SimpleElementCollectors).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->SimpleElementCollectors;
      if (pTVar3 != (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar7 = pTVar3;
      }
      if (*(longlong *)((pTVar7->AllocatorInstance).InlineData + uVar11) != 0) {
        iVar2 = param_2->Index;
        uVar12 = uVar14;
        if ((int)uVar9 < (this->SimpleElementCollectors).ArrayNum) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar3 = (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(this->SimpleElementCollectors).AllocatorInstance.SecondaryData.Data;
        pTVar7 = &this->SimpleElementCollectors;
        if (pTVar3 != (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar7 = pTVar3;
        }
        *(int *)(*(longlong *)((pTVar7->AllocatorInstance).InlineData + uVar11) + 0x140) = iVar2;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar9 + 1) < (this->SimpleElementCollectors).ArrayNum);
  }
  uVar10 = uVar13;
  uVar11 = uVar13;
  if (0 < (this->MeshIdInPrimitivePerView).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar12 = uVar14;
      if ((int)uVar9 < (this->MeshIdInPrimitivePerView).ArrayNum) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar4 = (TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)(this->MeshIdInPrimitivePerView).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->MeshIdInPrimitivePerView;
      if (pTVar4 != (TArray<unsigned_short,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar8 = pTVar4;
      }
      puVar1 = (pTVar8->AllocatorInstance).InlineData + uVar11;
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 2;
    } while ((int)(uVar9 + 1) < (this->MeshIdInPrimitivePerView).ArrayNum);
  }
  uVar10 = uVar13;
  if (0 < (this->DebugSimpleElementCollectors).ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      iVar2 = param_2->Index;
      uVar14 = 0;
      if ((int)uVar12 < (this->DebugSimpleElementCollectors).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)(this->DebugSimpleElementCollectors).AllocatorInstance.SecondaryData.Data;
      pTVar7 = &this->DebugSimpleElementCollectors;
      if (pTVar3 != (TArray<FSimpleElementCollector_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar7 = pTVar3;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      *(int *)(*(longlong *)((pTVar7->AllocatorInstance).InlineData + uVar10) + 0x140) = iVar2;
      uVar10 = uVar10 + 8;
    } while ((int)(uVar12 + 1) < (this->DebugSimpleElementCollectors).ArrayNum);
  }
  return;
}

// Start @ 1484fcef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshElementCollector::Start
          (FMeshElementCollector *this,FRHICommandList *param_1,FGlobalDynamicVertexBuffer *param_2,
          FGlobalDynamicIndexBuffer *param_3,FGlobalDynamicReadBuffer *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->RHICmdList != (FRHICommandList *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!RHICmdList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneManagement.cpp"
                       ,0x1e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->RHICmdList = param_1;
  this->DynamicVertexBuffer = param_2;
  this->DynamicReadBuffer = param_4;
  this->DynamicIndexBuffer = param_3;
  return;
}


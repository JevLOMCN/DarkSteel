// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FRelevancePacket @ 14551e8b0

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

FRelevancePacket * __thiscall
FRelevancePacket::FRelevancePacket
          (FRelevancePacket *this,FVisibilityTaskData *param_1,FViewInfo *param_2,int param_3,
          FFilterStaticMeshesForViewData *param_4,uchar *param_5,FTaskHandle *param_6)

{
  float fVar1;
  FDynamicPrimitiveViewMasks *pFVar2;
  FTaskBase *pFVar3;
  FVisibilityTaskConfig *pFVar4;
  FVisibilityTaskData *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FRelevancePacket *pFVar9;
  int *piVar10;
  TArray<FStaticMeshBatch_const_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<EMeshDrawCommandCullingPayloadFlags,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  ForElementType<FViewCommands> FVar14;
  longlong lVar15;
  
  this->CurrentWorldTime = (float)*(double *)(param_2->_padding_ + 0x90);
  fVar1 = *(float *)(param_2->_padding_ + 0x9c);
  this->TaskConfig = &param_1->TaskConfig;
  this->DeltaWorldTime = fVar1;
  this->TaskData = param_1;
  this->Scene = param_1->Scene;
  this->View = param_2;
  uVar8 = 0;
  if (param_3 < (param_1->DynamicMeshElements).ViewCommandsPerView.ArrayNum) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FRelevancePacket *)(*pcVar6)();
      return pFVar9;
    }
  }
  FVar14 = (param_1->DynamicMeshElements).ViewCommandsPerView.AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<FViewCommands>)0x0) {
    FVar14 = (ForElementType<FViewCommands>)&(param_1->DynamicMeshElements).ViewCommandsPerView;
  }
  this->ViewBit = '\x01' << ((byte)param_3 & 0x1f);
  this->ViewData = param_4;
  this->ViewCommands = (FViewCommands *)((longlong)FVar14 + (longlong)param_3 * 0x7f0);
  pFVar2 = (this->TaskData->DynamicMeshElements).PrimitiveViewMasks;
  this->MarkMasks = param_5;
  this->DynamicPrimitiveViewMasks = pFVar2;
  (this->PrerequisitesTask).Pimpl.Reference = (FTaskBase *)0x0;
  pFVar3 = (param_6->Pimpl).Reference;
  (this->PrerequisitesTask).Pimpl.Reference = pFVar3;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
    UNLOCK();
  }
  (this->Input).MaxOutputPrims = (this->TaskConfig->Relevance).NumPrimitivesPerPacket;
  (this->Input).Prims.AllocatorInstance.Data = (int *)0x0;
  (this->Input).Prims.ArrayNum = 0;
  (this->Input).Prims.ArrayMax = 0;
  (this->NotDrawRelevant).MaxOutputPrims = (this->TaskConfig->Relevance).NumPrimitivesPerPacket;
  (this->NotDrawRelevant).Prims.AllocatorInstance.Data = (int *)0x0;
  (this->NotDrawRelevant).Prims.ArrayNum = 0;
  (this->NotDrawRelevant).Prims.ArrayMax = 0;
  (this->TranslucentSelfShadowPrimitives).MaxOutputPrims =
       (this->TaskConfig->Relevance).NumPrimitivesPerPacket;
  (this->TranslucentSelfShadowPrimitives).Prims.AllocatorInstance.Data = (int *)0x0;
  (this->TranslucentSelfShadowPrimitives).Prims.ArrayNum = 0;
  (this->TranslucentSelfShadowPrimitives).Prims.ArrayMax = 0;
  (this->VisibleDynamicPrimitivesWithSimpleLights).MaxOutputPrims =
       (this->TaskConfig->Relevance).NumPrimitivesPerPacket;
  (this->VisibleDynamicPrimitivesWithSimpleLights).Prims.AllocatorInstance.Data =
       (FPrimitiveSceneInfo **)0x0;
  (this->VisibleDynamicPrimitivesWithSimpleLights).Prims.ArrayNum = 0;
  (this->VisibleDynamicPrimitivesWithSimpleLights).Prims.ArrayMax = 0;
  (this->VisibleDynamicMeshesPassMask).Data = 0;
  this->NumVisibleDynamicPrimitives = 0;
  this->NumVisibleDynamicEditorPrimitives = 0;
  (this->TranslucentPrimCount).Count[0] = 0;
  (this->TranslucentPrimCount).Count[1] = 0;
  *(undefined8 *)((this->TranslucentPrimCount).Count + 6) = 0;
  (this->TranslucentPrimCount).Count[2] = 0;
  (this->TranslucentPrimCount).Count[3] = 0;
  (this->TranslucentPrimCount).Count[4] = 0;
  (this->TranslucentPrimCount).Count[5] = 0;
  (this->TranslucentPrimCount).UseSceneColorCopyPerPass[4] = false;
  (this->TranslucentPrimCount).UseSceneColorCopyPerPass[5] = false;
  (this->TranslucentPrimCount).UseSceneColorCopyPerPass[6] = false;
  piVar10 = &(this->DrawCommandPacket).VisibleCachedDrawCommands[0].ArrayMax;
  (this->DirtyIndirectLightingCacheBufferPrimitives).MaxOutputPrims =
       (this->TaskConfig->Relevance).NumPrimitivesPerPacket;
  lVar13 = 0x27;
  lVar15 = 0x27;
  (this->DirtyIndirectLightingCacheBufferPrimitives).Prims.AllocatorInstance.Data =
       (FPrimitiveSceneInfo **)0x0;
  (this->DirtyIndirectLightingCacheBufferPrimitives).Prims.ArrayNum = 0;
  (this->DirtyIndirectLightingCacheBufferPrimitives).Prims.ArrayMax = 0;
  (this->VolumetricMeshBatches).AllocatorInstance.Data = (FVolumetricMeshBatch *)0x0;
  (this->VolumetricMeshBatches).ArrayNum = 0;
  (this->VolumetricMeshBatches).ArrayMax = 0;
  (this->HeterogeneousVolumesMeshBatches).AllocatorInstance.Data = (FVolumetricMeshBatch *)0x0;
  (this->HeterogeneousVolumesMeshBatches).ArrayNum = 0;
  (this->HeterogeneousVolumesMeshBatches).ArrayMax = 0;
  (this->SkyMeshBatches).AllocatorInstance.Data = (FSkyMeshBatch *)0x0;
  (this->SkyMeshBatches).ArrayNum = 0;
  (this->SkyMeshBatches).ArrayMax = 0;
  (this->SortedTrianglesMeshBatches).AllocatorInstance.Data = (FSortedTrianglesMeshBatch *)0x0;
  (this->SortedTrianglesMeshBatches).ArrayNum = 0;
  (this->SortedTrianglesMeshBatches).ArrayMax = 0;
  do {
    (((TArray<FVisibleMeshDrawCommand,TSizedDefaultAllocator<32>_> *)(piVar10 + -3))->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)(piVar10 + -1) = 0;
    piVar10 = piVar10 + 4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  pTVar11 = (this->DrawCommandPacket).DynamicBuildRequests;
  lVar15 = 0x27;
  do {
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar11->ArrayNum = 0;
    pTVar11->ArrayMax = 0;
    pTVar11 = pTVar11 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  pTVar12 = (this->DrawCommandPacket).DynamicBuildFlags;
  do {
    (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar12->ArrayNum = 0;
    pTVar12->ArrayMax = 0;
    pTVar12 = pTVar12 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  bVar7 = UseCachedMeshDrawCommands();
  (this->DrawCommandPacket).bUseCachedMeshDrawCommands = bVar7;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[1] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[2] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[3] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[4] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[5] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[6] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[7] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[8] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[9] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[10] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0xb] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0xc] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0xd] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0xe] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0xf] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x10] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x11] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x12] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x13] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x14] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x15] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x16] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x17] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x18] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x19] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x1a] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x1b] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x1c] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x1d] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x1e] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x1f] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x20] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x21] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x22] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x23] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x24] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x25] = 0;
  (this->DrawCommandPacket).NumDynamicBuildRequestElements[0x26] = 0;
  *(undefined8 *)&(this->CustomDepthStencilValues).Elements = 0;
  *(undefined8 *)&(this->CustomDepthStencilValues).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CustomDepthStencilValues).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CustomDepthStencilValues).Elements.field_0x30 = 0xffffffff;
  (this->CustomDepthStencilValues).Hash.SecondaryData.SecondaryData.Data = (FSetElementId *)0x0;
  (this->CustomDepthStencilValues).HashSize = 0;
  pFVar4 = this->TaskConfig;
  (this->NaniteCustomDepthInstances).MaxOutputPrims = (pFVar4->Relevance).NumPrimitivesPerPacket;
  (this->NaniteCustomDepthInstances).Prims.AllocatorInstance.Data = (FPrimitiveInstanceRange *)0x0;
  (this->NaniteCustomDepthInstances).Prims.ArrayNum = 0;
  (this->NaniteCustomDepthInstances).Prims.ArrayMax = 0;
  (this->PrimitivesLODMask).MaxOutputPrims = (pFVar4->Relevance).NumPrimitivesPerPacket;
  pFVar5 = this->TaskData;
  (this->PrimitivesLODMask).Prims.AllocatorInstance.Data = (FPrimitiveLODMask *)0x0;
  (this->PrimitivesLODMask).Prims.ArrayNum = 0;
  (this->PrimitivesLODMask).Prims.ArrayMax = 0;
  (this->ComputeRelevanceTask).Pimpl.Reference = (FTaskBase *)0x0;
  this->CombinedShadingModelMask = 0;
  this->SubstrateUintPerPixel = '\0';
  this->SubstrateClosureCountMask = '\0';
  this->SubstrateTileTypeMask = '\0';
  this->bUsesAnisotropy = false;
  this->bHasDistortionPrimitives = false;
  this->bHasCustomDepthPrimitives = false;
  this->bUsesGlobalDistanceField = false;
  this->bUsesLightingChannels = false;
  this->bTranslucentSurfaceLighting = false;
  this->bUsesCustomDepth = false;
  this->bUsesCustomStencil = false;
  this->bUsesMotionVectorWorldOffset = false;
  this->bSceneHasSkyMaterial = false;
  this->bHasSingleLayerWaterMaterial = false;
  this->bUsesSecondStageDepthPass = false;
  bVar7 = pFVar5->bAddLightmapDensityCommands;
  this->bComputeRelevanceTaskLaunched = false;
  this->bAddLightmapDensityCommands = bVar7;
  return this;
}

// ~FRelevancePacket @ 145520a40

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

void __thiscall FRelevancePacket::~FRelevancePacket(FRelevancePacket *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  FPrimitiveLODMask *pFVar4;
  FPrimitiveInstanceRange *pFVar5;
  FSetElementId *pFVar6;
  FSortedTrianglesMeshBatch *pFVar7;
  FSkyMeshBatch *pFVar8;
  FVolumetricMeshBatch *pFVar9;
  FPrimitiveSceneInfo **ppFVar10;
  int *piVar11;
  
  pFVar3 = (this->ComputeRelevanceTask).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar4 = (this->PrimitivesLODMask).Prims.AllocatorInstance.Data;
  if (pFVar4 != (FPrimitiveLODMask *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar4);
  }
  pFVar5 = (this->NaniteCustomDepthInstances).Prims.AllocatorInstance.Data;
  if (pFVar5 != (FPrimitiveInstanceRange *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar5);
  }
  (this->CustomDepthStencilValues).HashSize = 0;
  pFVar6 = (this->CustomDepthStencilValues).Hash.SecondaryData.SecondaryData.Data;
  if (pFVar6 != (FSetElementId *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar6);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
            (&(this->CustomDepthStencilValues).Elements);
  FDrawCommandRelevancePacket::~FDrawCommandRelevancePacket(&this->DrawCommandPacket);
  pFVar7 = (this->SortedTrianglesMeshBatches).AllocatorInstance.Data;
  if (pFVar7 != (FSortedTrianglesMeshBatch *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar7);
  }
  pFVar8 = (this->SkyMeshBatches).AllocatorInstance.Data;
  if (pFVar8 != (FSkyMeshBatch *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar8);
  }
  pFVar9 = (this->HeterogeneousVolumesMeshBatches).AllocatorInstance.Data;
  if (pFVar9 != (FVolumetricMeshBatch *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar9);
  }
  pFVar9 = (this->VolumetricMeshBatches).AllocatorInstance.Data;
  if (pFVar9 != (FVolumetricMeshBatch *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar9);
  }
  ppFVar10 = (this->DirtyIndirectLightingCacheBufferPrimitives).Prims.AllocatorInstance.Data;
  if (ppFVar10 != (FPrimitiveSceneInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar10);
  }
  ppFVar10 = (this->VisibleDynamicPrimitivesWithSimpleLights).Prims.AllocatorInstance.Data;
  if (ppFVar10 != (FPrimitiveSceneInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar10);
  }
  piVar11 = (this->TranslucentSelfShadowPrimitives).Prims.AllocatorInstance.Data;
  if (piVar11 != (int *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar11);
  }
  piVar11 = (this->NotDrawRelevant).Prims.AllocatorInstance.Data;
  if (piVar11 != (int *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar11);
  }
  piVar11 = (this->Input).Prims.AllocatorInstance.Data;
  if (piVar11 != (int *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar11);
  }
  pFVar3 = (this->PrerequisitesTask).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

// operator() @ 145523950

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
`FRelevancePacket::LaunchComputeRelevanceTask'::__l12::<lambda_1>::operator()(void *this)

{
  int iVar1;
  TCommandPipe<FDynamicPrimitiveIndexList> *this_00;
  longlong lVar2;
  FLowLevelMemTracker *this_01;
  FPageAllocator *this_02;
  FDynamicPrimitiveIndex *pFVar3;
  int *piVar4;
  FTaskTagScope local_28;
  FDynamicPrimitiveIndexList local_18;
  
  FTaskTagScope::FTaskTagScope(&local_28,EParallelRenderingThread);
  local_18.Primitives.AllocatorInstance.Data = (FDynamicPrimitiveIndex *)0x0;
  local_18.Primitives.ArrayNum = 0;
  local_18.Primitives.ArrayMax = 0;
  FRelevancePacket::ComputeRelevance(*(FRelevancePacket **)this,&local_18);
  this_00 = *(TCommandPipe<FDynamicPrimitiveIndexList> **)
             (*(longlong *)(*(longlong *)this + 8) + 0x58);
  if (this_00 != (TCommandPipe<FDynamicPrimitiveIndexList> *)0x0) {
    if (local_18.Primitives.ArrayNum == 0) {
      TCommandPipe<FDynamicPrimitiveIndexList>::ReleaseNumCommands(this_00,1);
    }
    else {
      TCommandPipe<FDynamicPrimitiveIndexList>::EnqueueCommand<FDynamicPrimitiveIndexList>
                (this_00,&local_18);
    }
  }
  if (local_18.Primitives.AllocatorInstance.Data != (FDynamicPrimitiveIndex *)0x0) {
    pFVar3 = local_18.Primitives.AllocatorInstance.Data + -2;
    MemoryTrace_Free((ulong64)pFVar3,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_01 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_01 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_01,Default,pFVar3,FMalloc,true);
    }
    piVar4 = (int *)((longlong)pFVar3 - (ulonglong)(uint)*pFVar3);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar2 - (longlong)piVar4 == 0x10000) {
        this_02 = FPageAllocator::Get();
        FPageAllocator::Free(this_02,piVar4);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
      }
    }
  }
  FTaskTagScope::~FTaskTagScope(&local_28);
  return;
}

// operator() @ 145523ca0

void __thiscall
`FRelevancePacket::ComputeRelevance'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  int *piVar1;
  FDynamicPrimitiveIndex *pFVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  ForElementType<FDynamicPrimitiveIndex> *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  
  *(int *)(*(longlong *)this + 0xb8) = *(int *)(*(longlong *)this + 0xb8) + 1;
  lVar4 = *(longlong *)this;
  plVar5 = *(longlong **)(lVar4 + 0x40);
  if (plVar5 == (longlong *)0x0) {
    pFVar6 = *(ForElementType<FDynamicPrimitiveIndex> **)((longlong)this + 8);
    piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
    iVar10 = *(int *)&pFVar6[1].Data;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_>
                         (0x404,pFVar6,piVar1);
    }
    *(int *)&pFVar6[1].Data = iVar10 + 1;
    bVar3 = *(byte *)(lVar4 + 0x30);
    pFVar2 = pFVar6->Data + iVar10;
    *pFVar2 = (FDynamicPrimitiveIndex)
              ((uint)*pFVar2 ^ ((uint)pFVar6->Data[iVar10] ^ param_1) & 0xffffff);
    pFVar2->ViewMask = bVar3;
    return;
  }
  bVar3 = *(byte *)(lVar4 + 0x30);
  uVar9 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  LOCK();
  *(byte *)((longlong)param_1 + *plVar5) = *(byte *)((longlong)param_1 + *plVar5) | bVar3;
  UNLOCK();
  return;
}

// ComputeRelevance @ 14552c810

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
FRelevancePacket::ComputeRelevance(FRelevancePacket *this,FDynamicPrimitiveIndexList *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FRelevancePrimSet<FRelevancePacket::FPrimitiveLODMask,1> *pFVar3;
  FRelevancePrimSet<FPrimitiveSceneInfo_*,1> *pFVar4;
  bool *pbVar5;
  FRelevancePrimSet<FPrimitiveInstanceRange,1> *pFVar6;
  FRelevancePrimSet<int,1> *pFVar7;
  FStaticMeshBatchRelevance *pFVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  FViewInfo *pFVar12;
  FPrimitiveSceneInfo *this_00;
  FPrimitiveSceneProxy *pFVar13;
  uint *puVar14;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar15;
  FPrimitiveLODMask *pFVar16;
  FFilterStaticMeshesForViewData *pFVar17;
  FSkyMeshBatch *pFVar18;
  FSortedTrianglesMeshBatch *pFVar19;
  FDynamicPrimitiveViewMasks *pFVar20;
  FDynamicPrimitiveIndex *pFVar21;
  FPrimitiveSceneInfo **ppFVar22;
  FPrimitiveInstanceRange *pFVar23;
  FPrimitiveInstanceRange *pFVar24;
  code *pcVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  undefined8 uVar35;
  float fVar36;
  FRelevancePacket *pFVar37;
  FDynamicPrimitiveIndexList *pFVar38;
  uchar auVar39 [8];
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  Type TVar52;
  bool bVar53;
  EShaderPlatform EVar54;
  FStaticShaderPlatform FVar55;
  FLODMask FVar56;
  int iVar57;
  uint uVar58;
  EDebugViewShaderMode EVar59;
  FName *pFVar60;
  FThreadSafeStaticStat<FStat_STAT_ComputeViewRelevance> FVar61;
  FCachedSystemScalabilityCVars *pFVar62;
  undefined4 *puVar63;
  FPrimitiveBounds *pFVar64;
  undefined6 extraout_var;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles> FVar65;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FVolumetricMeshBatch *pFVar66;
  longlong lVar67;
  byte *pbVar68;
  byte bVar69;
  longlong lVar70;
  byte bVar71;
  FPrimitiveViewRelevance *pFVar72;
  FScene *pFVar73;
  bool bVar74;
  EDecalRenderTargetMode EVar75;
  FViewInfo **ppFVar76;
  FDrawCommandRelevancePacket *pFVar77;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar78;
  Type TVar79;
  ushort uVar80;
  EMeshDrawCommandCullingPayloadFlags EVar81;
  uint uVar82;
  FStaticMeshBatch *this_03;
  EMeshDrawCommandCullingPayloadFlags EVar83;
  uint uVar84;
  int *piVar85;
  FNameEntryId FVar86;
  FName FVar87;
  bool bVar88;
  float fVar89;
  double dVar90;
  float fVar91;
  double dVar92;
  float fVar93;
  float fVar94;
  FScene *in_stack_fffffffffffffd88;
  longlong in_stack_fffffffffffffd98;
  undefined7 uVar95;
  uint7 uVar96;
  bool local_213;
  byte local_20c;
  uint local_208;
  byte local_200;
  char local_1ff;
  FPrimitiveSceneProxy *local_1f8;
  ushort local_1f0;
  uint local_1e8 [2];
  uint local_1e0 [2];
  uint local_1d8 [2];
  ushort local_1d0;
  uint local_1cc;
  int local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  FPrimitiveInstanceRange local_1b8;
  FPrimitiveLODMask local_1a8;
  longlong local_1a0;
  FPrimitiveSceneInfo *local_198;
  FPrimitiveSceneInfo *local_190;
  TArray<FStaticMeshBatchRelevance,TSizedDefaultAllocator<32>_> local_188;
  uint local_178;
  FColor_u_0 local_174;
  undefined4 local_170 [2];
  FRelevancePacket *local_168;
  FDynamicPrimitiveIndexList *local_160;
  uint local_158;
  ushort uStack_154;
  undefined2 uStack_152;
  longlong local_150;
  uint local_148;
  uint uStack_144;
  FName local_140;
  longlong local_138;
  FName local_130;
  FName local_128;
  FName local_118;
  longlong local_110;
  FViewInfo *local_108;
  uint local_100 [2];
  uchar local_f8 [8];
  FStatMessage local_f0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_c0;
  FName local_b8;
  FName local_b0;
  undefined1 local_a8 [104];
  
  bVar88 = -1 < CpuChannel->Enabled;
  if (bVar88) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1405,"ComputeViewRelevance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x57d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1405);
  }
  FVar61 = StatPtr_STAT_ComputeViewRelevance;
  if (StatPtr_STAT_ComputeViewRelevance ==
      (FThreadSafeStaticStat<FStat_STAT_ComputeViewRelevance>)0x0) {
    pFVar60 = ::FName::FName(&local_b8,"STAT_ComputeViewRelevance");
    in_stack_fffffffffffffd98 = 0;
    in_stack_fffffffffffffd88 =
         (FScene *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd88 >> 8),1);
    FVar61 = (FThreadSafeStaticStat<FStat_STAT_ComputeViewRelevance>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComputeViewRelevance,*pFVar60,
                        L"Compute View Relevance","STATGROUP_InitViews","STATCAT_Advanced",
                        L"Init Views",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar87 = *(FName *)FVar61;
  bVar29 = false;
  bVar34 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar40 = false;
  bVar41 = false;
  if ((FVar87.ComparisonIndex.Value.Value == 0) && (FVar87.Number == 0)) {
LAB_14552c9cc:
    bVar34 = bVar41;
    bVar29 = bVar40;
    bVar40 = false;
    local_140 = local_128;
    FVar87 = local_128;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_174.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_174._s_0,(char *)*(FName *)((longlong)FVar61 + 0x10));
      bVar29 = false;
      bVar34 = true;
      bVar40 = false;
      bVar41 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar87.ComparisonIndex.Value.Value;
        local_130.Number = FVar87.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar61 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                   ,0x57e);
        bVar29 = true;
        bVar34 = true;
        bVar40 = true;
        bVar41 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14552c9cc;
    local_140 = FVar87;
    FThreadStats::AddMessage(FVar87,CycleScopeStart);
    bVar40 = true;
  }
  this->CombinedShadingModelMask = 0;
  this->SubstrateUintPerPixel = '\0';
  this->SubstrateClosureCountMask = '\0';
  this->SubstrateTileTypeMask = '\0';
  this->bUsesAnisotropy = false;
  this->bSceneHasSkyMaterial = false;
  this->bHasSingleLayerWaterMaterial = false;
  this->bUsesSecondStageDepthPass = false;
  this->bUsesGlobalDistanceField = false;
  this->bUsesLightingChannels = false;
  this->bTranslucentSurfaceLighting = false;
  TVar79 = *(Type *)&this->Scene->field_0x8;
  local_188.ArrayMax = TVar79;
  EVar54 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->Scene);
  bVar41 = IsHairStrandsEnabled(All,EVar54);
  bVar42 = IsTranslucencyLightingVolumeUsingVoxelMarking();
  pFVar73 = this->Scene;
  local_108 = this->View;
  local_1c8 = 0;
  lVar67 = local_108->_padding_;
  if (((int)TVar79 < 3) && (pFVar73->EarlyZPassMode == DDM_MaskedOnly)) {
    bVar33 = true;
LAB_14552ca81:
    FVar55.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)pFVar73);
    bVar43 = MobileBasePassAlwaysUsesCSM(FVar55);
    if (bVar43) {
      bVar43 = true;
      goto LAB_14552caa8;
    }
  }
  else {
    bVar33 = false;
    if ((int)TVar79 < 3) goto LAB_14552ca81;
  }
  bVar43 = false;
LAB_14552caa8:
  ppFVar76 = &this->View;
  local_188.ArrayNum = this->Scene->EarlyZPassMode;
  bVar44 = IsPrimitiveAlphaHoldoutEnabled(*ppFVar76);
  bVar45 = NeedTSRThinGeometryDetectionPass(*ppFVar76);
  iVar57 = *(int *)&(this->Scene->SceneLODHierarchy).SceneNodes.field_0x8;
  iVar10 = *(int *)&(this->Scene->SceneLODHierarchy).SceneNodes.field_0x34;
  if ((int)TVar79 < 3) {
    local_213 = FMobileSceneRenderer::ShouldRenderCustomDepth(*ppFVar76);
  }
  else {
    local_213 = true;
  }
  FVar55.Platform = FSceneView::GetShaderPlatform((FSceneView *)*ppFVar76);
  bVar46 = MobileSupportsSM5MaterialNodes(FVar55);
  if ((iVar57 - iVar10 < 1) || (lVar67 == 0)) {
    local_150 = 0;
  }
  else {
    local_150 = lVar67 + 0xe80;
  }
  pFVar62 = GetCachedScalabilityCVars();
  fVar9 = pFVar62->ViewDistanceScale;
  pFVar62 = GetCachedScalabilityCVars();
  fVar36 = __real_7f7fffff;
  uVar35 = __real_3ff0000000000000;
  fVar91 = pFVar62->FieldOfViewMaxAngleScale;
  fVar93 = fVar91 - pFVar62->FieldOfViewMinAngleScale;
  if (__real_322bcc77 < (float)((uint)fVar93 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar91 = pFVar62->FieldOfViewMinAngle;
    fVar94 = pFVar62->FieldOfViewMaxAngle;
    fVar89 = *(float *)((longlong)&(*ppFVar76)->_padding_ + 4);
    if (fVar94 <= fVar89) {
      fVar89 = fVar94;
    }
    if (fVar89 <= fVar91) {
      fVar89 = fVar91;
    }
    fVar91 = ((fVar89 - fVar91) / (fVar94 - fVar91)) * fVar93 + pFVar62->FieldOfViewMinAngleScale;
  }
  local_1c4 = 0;
  local_168 = this;
  local_160 = param_1;
  if (0 < (this->Input).Prims.ArrayNum) {
    local_138 = 0;
    do {
      lVar67 = local_138;
      uVar58 = local_1c4;
      uVar84 = 0;
      if ((int)local_1c4 < (this->Input).Prims.ArrayNum) {
        uVar84 = ~local_1c4 >> 0x1f;
      }
      if ((uVar84 == 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar47)) {
        pcVar25 = (code *)swi(3);
        (*pcVar25)();
        return;
      }
      uVar84 = (this->Input).Prims.AllocatorInstance.Data[lVar67];
      if ((int)(uVar58 + 1) < (this->Input).Prims.ArrayNum) {
        if (((int)(uVar58 + 1) < 0) &&
           (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar47)) {
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        uVar58 = (this->Input).Prims.AllocatorInstance.Data[lVar67 + 1];
        uVar82 = 0;
        if ((int)uVar58 < (this->Scene->Primitives).ArrayNum) {
          uVar82 = ~uVar58 >> 0x1f;
        }
        if ((uVar82 == 0) &&
           (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar47)) {
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        uVar82 = 0;
        if ((int)uVar58 < (this->Scene->PrimitiveSceneProxies).ArrayNum) {
          uVar82 = ~uVar58 >> 0x1f;
        }
        if ((uVar82 == 0) &&
           (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar47)) {
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
      }
      pFVar73 = this->Scene;
      uVar58 = 0;
      if ((int)uVar84 < (pFVar73->Primitives).ArrayNum) {
        uVar58 = ~uVar84 >> 0x1f;
      }
      if ((uVar58 == 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar47)) {
        pcVar25 = (code *)swi(3);
        (*pcVar25)();
        return;
      }
      pFVar12 = this->View;
      this_00 = *(FPrimitiveSceneInfo **)
                 ((pFVar73->Primitives).AllocatorInstance.Data + (longlong)(int)uVar84 * 8);
      uVar58 = 0;
      if ((int)uVar84 < (pFVar12->PrimitiveViewRelevanceMap).ArrayNum) {
        uVar58 = ~uVar84 >> 0x1f;
      }
      if ((uVar58 == 0) &&
         (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar47)) {
        pcVar25 = (code *)swi(3);
        (*pcVar25)();
        return;
      }
      pFVar72 = (pFVar12->PrimitiveViewRelevanceMap).AllocatorInstance.Data + (int)uVar84;
      pFVar13 = this_00->Proxy;
      local_1f8 = pFVar13;
      puVar63 = (undefined4 *)(**(code **)(pFVar13->_padding_ + 0xd0))(pFVar13,local_a8,this->View);
      uVar11 = puVar63[1];
      uVar27 = puVar63[2];
      uVar28 = puVar63[3];
      *(undefined4 *)&pFVar72->_padding_ = *puVar63;
      *(undefined4 *)((longlong)&pFVar72->_padding_ + 4) = uVar11;
      *(undefined4 *)&pFVar72->field_0x8 = uVar27;
      *(undefined4 *)&pFVar72->field_0xc = uVar28;
      pFVar72->bInitializedThisFrame = 1;
      puVar1 = &pFVar72->field_0x8;
      uVar11 = *(undefined4 *)puVar1;
      local_1c0 = (uint)uVar11 >> 2 & 0xffffff01;
      local_1bc = CONCAT31(SUB43(uVar11,1) >> 1,(char)((uint)uVar11 >> 1)) & 0xffffff01;
      local_1cc = (uint)uVar11 >> 8 & 0xffffff01;
      if ((((pFVar72->_padding_ & 0x40000000000) != 0) ||
          (*(char *)((longlong)&pFVar72->_padding_ + 4) < '\0')) ||
         (bVar47 = false, (pFVar72->_padding_ & 0x30000000000) != 0)) {
        bVar47 = true;
      }
      if ((!bVar41) || (bVar53 = true, (pFVar72->_padding_ & 0x2000000000) == 0)) {
        bVar53 = false;
      }
      if ((*(char *)((longlong)&this->View->_padding_ + 4) == '\0') ||
         ((bool)pFVar13->bVisibleInReflectionCaptures)) {
        if (pFVar72->bStaticRelevance == 0) {
LAB_14552e5da:
          pFVar38 = local_160;
          pFVar37 = local_168;
          if ((char)local_1c0 != '\0') {
            if ((char)local_1cc == '\0') {
              if ((char)local_1bc == '\0') {
                if ((pFVar72->bStaticRelevance == 0) && (bVar53)) {
                  `FRelevancePacket::ComputeRelevance'::__l2::<lambda_2>::operator()
                            (&local_168,uVar84);
                }
              }
              else {
                local_168->NumVisibleDynamicPrimitives = local_168->NumVisibleDynamicPrimitives + 1;
                pFVar20 = local_168->DynamicPrimitiveViewMasks;
                if (pFVar20 == (FDynamicPrimitiveViewMasks *)0x0) {
                  piVar85 = &(local_160->Primitives).ArrayMax;
                  iVar57 = (local_160->Primitives).ArrayNum;
                  if (iVar57 == *piVar85) {
                    iVar57 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveIndex>_>
                                       (0x404,(ForElementType<FDynamicPrimitiveIndex> *)local_160,
                                        piVar85);
                  }
                  (pFVar38->Primitives).ArrayNum = iVar57 + 1;
                  bVar69 = pFVar37->ViewBit;
                  pFVar21 = (local_160->Primitives).AllocatorInstance.Data;
                  pFVar21[iVar57] =
                       (FDynamicPrimitiveIndex)
                       ((uint)pFVar21[iVar57] ^ ((uint)pFVar21[iVar57] ^ uVar84) & 0xffffff);
                  pFVar21[iVar57].ViewMask = bVar69;
                }
                else {
                  bVar69 = local_168->ViewBit;
                  uVar58 = 0;
                  if ((int)uVar84 < (pFVar20->Primitives).ArrayNum) {
                    uVar58 = ~uVar84 >> 0x1f;
                  }
                  if ((uVar58 == 0) &&
                     (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar53)) {
                    pcVar25 = (code *)swi(3);
                    (*pcVar25)();
                    return;
                  }
                  pbVar68 = (pFVar20->Primitives).AllocatorInstance.Data + (int)uVar84;
                  LOCK();
                  *pbVar68 = *pbVar68 | bVar69;
                  UNLOCK();
                }
                if (pFVar72->bHasSimpleLights != 0) {
                  pFVar4 = &this->VisibleDynamicPrimitivesWithSimpleLights;
                  local_198 = this_00;
                  if ((this->VisibleDynamicPrimitivesWithSimpleLights).Prims.ArrayNum == 0) {
                    uVar58 = (this->VisibleDynamicPrimitivesWithSimpleLights).MaxOutputPrims;
                    if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
                    }
                    if ((this->VisibleDynamicPrimitivesWithSimpleLights).Prims.ArrayMax <
                        (int)uVar58) {
                      UE::Core::Private::
                      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
                                (8,8,uVar58,(ForElementType<FPrimitiveSceneInfo_*> *)pFVar4,0,
                                 &(this->VisibleDynamicPrimitivesWithSimpleLights).Prims.ArrayMax);
                    }
                  }
                  ppFVar22 = (pFVar4->Prims).AllocatorInstance.Data;
                  if ((ppFVar22 <= &local_198) &&
                     (pFVar73 = (FScene *)
                                (longlong)
                                (this->VisibleDynamicPrimitivesWithSimpleLights).Prims.ArrayMax,
                     &local_198 < ppFVar22 + (longlong)pFVar73)) {
                    in_stack_fffffffffffffd98 = 0;
                    bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       );
                    in_stack_fffffffffffffd88 = pFVar73;
                    if (bVar53) {
                      pcVar25 = (code *)swi(3);
                      (*pcVar25)();
                      return;
                    }
                  }
                  iVar57 = (this->VisibleDynamicPrimitivesWithSimpleLights).Prims.ArrayNum;
                  piVar85 = &(this->VisibleDynamicPrimitivesWithSimpleLights).Prims.ArrayMax;
                  if (iVar57 == *piVar85) {
                    iVar57 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
                                       (0x808,(ForElementType<FPrimitiveSceneInfo_*> *)pFVar4,
                                        piVar85);
                  }
                  (this->VisibleDynamicPrimitivesWithSimpleLights).Prims.ArrayNum = iVar57 + 1;
                  (pFVar4->Prims).AllocatorInstance.Data[iVar57] = local_198;
                }
              }
            }
            if (((bVar47) && ((char)local_1cc == '\0')) && (pFVar72->bRenderInMainPass != 0)) {
              bVar69 = *(byte *)((longlong)&pFVar72->_padding_ + 5);
              if (*(char *)(this->View->_padding_ + 0x1b0) == '\0') {
                puVar14 = (this->TranslucentPrimCount).Count + 6;
                *puVar14 = *puVar14 + 1;
                pbVar5 = (this->TranslucentPrimCount).UseSceneColorCopyPerPass + 6;
                *pbVar5 = (bool)(*pbVar5 | bVar69 >> 3 & 1);
              }
              else {
                if (((bVar69 & 4) != 0) ||
                   ((0.0 < this->View->AutoBeforeDOFTranslucencyBoundary &&
                    (*(char *)((longlong)&pFVar72->_padding_ + 4) < '\0')))) {
                  (this->TranslucentPrimCount).Count[0] = (this->TranslucentPrimCount).Count[0] + 1;
                  pbVar5 = (this->TranslucentPrimCount).UseSceneColorCopyPerPass;
                  *pbVar5 = (bool)(*pbVar5 | bVar69 >> 3 & 1);
                }
                bVar69 = *(byte *)((longlong)&pFVar72->_padding_ + 5);
                if ((bVar69 & 4) == 0) {
                  if (this->View->AutoBeforeDOFTranslucencyBoundary <= 0.0) goto LAB_14552e940;
                  if (*(char *)((longlong)&pFVar72->_padding_ + 4) < '\0') goto LAB_14552e916;
                }
                else {
LAB_14552e916:
                  if (((bVar69 & 1) != 0) && (*(char *)(this->View->_padding_ + 0x1b1) != '\0')) {
                    puVar14 = (this->TranslucentPrimCount).Count + 1;
                    *puVar14 = *puVar14 + 1;
                    pbVar5 = (this->TranslucentPrimCount).UseSceneColorCopyPerPass + 1;
                    *pbVar5 = (bool)(*pbVar5 | bVar69 >> 3 & 1);
                  }
LAB_14552e940:
                  if (*(char *)((longlong)&pFVar72->_padding_ + 4) < '\0') {
                    bVar69 = *(byte *)((longlong)&pFVar72->_padding_ + 5);
                    puVar14 = (this->TranslucentPrimCount).Count + 2;
                    *puVar14 = *puVar14 + 1;
                    pbVar5 = (this->TranslucentPrimCount).UseSceneColorCopyPerPass + 2;
                    *pbVar5 = (bool)(*pbVar5 | bVar69 >> 3 & 1);
                    if ((*(char *)((longlong)&pFVar72->_padding_ + 4) < '\0') &&
                       (bVar69 = *(byte *)((longlong)&pFVar72->_padding_ + 5), (bVar69 & 1) != 0)) {
                      puVar14 = (this->TranslucentPrimCount).Count + 3;
                      *puVar14 = *puVar14 + 1;
                      pbVar5 = (this->TranslucentPrimCount).UseSceneColorCopyPerPass + 3;
                      *pbVar5 = (bool)(*pbVar5 | bVar69 >> 3 & 1);
                    }
                  }
                }
                bVar69 = *(byte *)((longlong)&pFVar72->_padding_ + 5);
                if ((bVar69 & 2) != 0) {
                  puVar14 = (this->TranslucentPrimCount).Count + 4;
                  *puVar14 = *puVar14 + 1;
                  pbVar5 = (this->TranslucentPrimCount).UseSceneColorCopyPerPass + 4;
                  *pbVar5 = (bool)(*pbVar5 | bVar69 >> 3 & 1);
                }
              }
              if (bVar44) {
                puVar14 = (this->TranslucentPrimCount).Count + 5;
                *puVar14 = *puVar14 + 1;
                pbVar5 = (this->TranslucentPrimCount).UseSceneColorCopyPerPass + 5;
                *pbVar5 = (bool)(*pbVar5 | 1);
              }
              if ((pFVar72->_padding_ & 0x1000000000) != 0) {
                this->bHasDistortionPrimitives = true;
              }
            }
            this->CombinedShadingModelMask =
                 this->CombinedShadingModelMask | (ushort)pFVar72->_padding_ & 0x3fff;
            bVar69 = (byte)((uint)pFVar72->_padding_ >> 0x12) & 0x3f;
            if (bVar69 < this->SubstrateUintPerPixel) {
              bVar69 = this->SubstrateUintPerPixel;
            }
            this->SubstrateUintPerPixel = bVar69;
            this->SubstrateTileTypeMask =
                 this->SubstrateTileTypeMask | (byte)((uint)pFVar72->_padding_ >> 0xe) & 0xf;
            this->bUsesAnisotropy =
                 (bool)(this->bUsesAnisotropy |
                       *(byte *)((longlong)&pFVar72->_padding_ + 7) >> 3 & 1);
            this->SubstrateClosureCountMask =
                 this->SubstrateClosureCountMask | *(byte *)((longlong)&pFVar72->_padding_ + 3);
            this->bUsesGlobalDistanceField =
                 (bool)(this->bUsesGlobalDistanceField |
                       *(byte *)((longlong)&pFVar72->_padding_ + 5) >> 5 & 1);
            this->bUsesLightingChannels =
                 (bool)(this->bUsesLightingChannels | pFVar72->bUsesLightingChannels);
            this->bTranslucentSurfaceLighting =
                 (bool)(this->bTranslucentSurfaceLighting |
                       *(byte *)((longlong)&pFVar72->_padding_ + 6) >> 4 & 1);
            this->bUsesCustomDepth =
                 (bool)(this->bUsesCustomDepth | *(byte *)((longlong)&pFVar72->_padding_ + 4) & 1);
            this->bUsesCustomStencil =
                 (bool)(this->bUsesCustomStencil | (pFVar72->_padding_ & 0x200000000) != 0);
            this->bSceneHasSkyMaterial =
                 (bool)(this->bSceneHasSkyMaterial |
                       *(byte *)((longlong)&pFVar72->_padding_ + 6) >> 6 & 1);
            this->bHasSingleLayerWaterMaterial =
                 (bool)(this->bHasSingleLayerWaterMaterial |
                       *(byte *)((longlong)&pFVar72->_padding_ + 6) >> 7);
            if ((pFVar72->bRenderInSecondStageDepthPass == 0) || ((int)TVar79 < 3)) {
              bVar69 = 0;
            }
            else {
              bVar69 = 1;
            }
            this->bUsesSecondStageDepthPass = (bool)(this->bUsesSecondStageDepthPass | bVar69);
            if (pFVar72->bRenderCustomDepth != 0) {
              this->bHasCustomDepthPrimitives = true;
              local_178 = (uint)this_00->Proxy->CustomDepthStencilValue;
              TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
              ::Emplace<unsigned_int>(&this->CustomDepthStencilValues,local_100,(bool *)&local_178);
              if (this_00->Proxy->bIsNaniteMesh != '\0') {
                if (((this_00->PackedIndex == -1) || (this_00->PackedIndex == 0x7fffffff)) &&
                   (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                       ("PrimitiveSceneInfo->IsIndexValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                                        ,0x825,L""), bVar47)) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
                pFVar6 = &this->NaniteCustomDepthInstances;
                local_1b8.PrimitiveIndex = this_00->PackedIndex;
                local_1b8.InstanceSceneDataOffset = this_00->InstanceSceneDataOffset;
                local_1b8.NumInstances = this_00->NumInstanceSceneDataEntries;
                if ((this->NaniteCustomDepthInstances).Prims.ArrayNum == 0) {
                  uVar58 = (this->NaniteCustomDepthInstances).MaxOutputPrims;
                  if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
                  }
                  if ((this->NaniteCustomDepthInstances).Prims.ArrayMax < (int)uVar58) {
                    UE::Core::Private::
                    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveInstanceRange>_>
                              (0xc,4,uVar58,(ForElementType<FPrimitiveInstanceRange> *)pFVar6,0,
                               &(this->NaniteCustomDepthInstances).Prims.ArrayMax);
                  }
                }
                pFVar23 = (pFVar6->Prims).AllocatorInstance.Data;
                if ((pFVar23 <= &local_1b8) &&
                   (pFVar73 = (FScene *)(longlong)(this->NaniteCustomDepthInstances).Prims.ArrayMax,
                   &local_1b8 < pFVar23 + (longlong)pFVar73)) {
                  in_stack_fffffffffffffd98 = 0;
                  bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  in_stack_fffffffffffffd88 = pFVar73;
                  if (bVar47) {
                    pcVar25 = (code *)swi(3);
                    (*pcVar25)();
                    return;
                  }
                }
                iVar57 = (this->NaniteCustomDepthInstances).Prims.ArrayNum;
                piVar85 = &(this->NaniteCustomDepthInstances).Prims.ArrayMax;
                if (iVar57 == *piVar85) {
                  iVar57 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveInstanceRange>_>
                                     (0x40c,(ForElementType<FPrimitiveInstanceRange> *)pFVar6,
                                      piVar85);
                }
                (this->NaniteCustomDepthInstances).Prims.ArrayNum = iVar57 + 1;
                pFVar24 = (pFVar6->Prims).AllocatorInstance.Data;
                pFVar23 = pFVar24 + iVar57;
                pFVar23->PrimitiveIndex = local_1b8.PrimitiveIndex;
                pFVar23->InstanceSceneDataOffset = local_1b8.InstanceSceneDataOffset;
                pFVar24[iVar57].NumInstances = local_1b8.NumInstances;
              }
            }
            if ((GUseTranslucencyShadowDepths != false) && (pFVar72->bTranslucentSelfShadow != 0)) {
              pFVar7 = &this->TranslucentSelfShadowPrimitives;
              local_1e8[0] = uVar84;
              if ((this->TranslucentSelfShadowPrimitives).Prims.ArrayNum == 0) {
                uVar58 = (this->TranslucentSelfShadowPrimitives).MaxOutputPrims;
                if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
                }
                if ((this->TranslucentSelfShadowPrimitives).Prims.ArrayMax < (int)uVar58) {
                  UE::Core::Private::
                  ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                            (4,4,uVar58,(ForElementType<int> *)pFVar7,0,
                             &(this->TranslucentSelfShadowPrimitives).Prims.ArrayMax);
                }
              }
              puVar14 = (uint *)(pFVar7->Prims).AllocatorInstance.Data;
              if ((puVar14 <= local_1e8) &&
                 (pFVar73 = (FScene *)
                            (longlong)(this->TranslucentSelfShadowPrimitives).Prims.ArrayMax,
                 local_1e8 < puVar14 + (longlong)pFVar73)) {
                in_stack_fffffffffffffd98 = 0;
                bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                in_stack_fffffffffffffd88 = pFVar73;
                if (bVar47) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
              }
              iVar57 = (this->TranslucentSelfShadowPrimitives).Prims.ArrayNum;
              piVar85 = &(this->TranslucentSelfShadowPrimitives).Prims.ArrayMax;
              if (iVar57 == *piVar85) {
                iVar57 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                                   (0x404,(ForElementType<int> *)pFVar7,piVar85);
              }
              (this->TranslucentSelfShadowPrimitives).Prims.ArrayNum = iVar57 + 1;
              (pFVar7->Prims).AllocatorInstance.Data[iVar57] = local_1e8[0];
            }
            this_00->LastRenderTime = this->CurrentWorldTime;
            pFVar12 = this->View;
            if ((((int)uVar84 < 0) ||
                ((pFVar12->PrimitiveDefinitelyUnoccludedMap).NumBits <= (int)uVar84)) &&
               (bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar47)) {
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            pTVar15 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)(pFVar12->PrimitiveDefinitelyUnoccludedMap).AllocatorInstance.SecondaryData
                         .Data;
            pTVar78 = &pFVar12->PrimitiveDefinitelyUnoccludedMap;
            if (pTVar15 !=
                (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
              pTVar78 = pTVar15;
            }
            uVar58 = uVar84 & 0x1f;
            if ((int)uVar84 < 0) {
              uVar84 = uVar84 + 0x1f;
            }
            if ((((*(uint *)((pTVar78->AllocatorInstance).InlineData +
                            (longlong)((int)uVar84 >> 5) * 4) >> uVar58 & 1) != 0) ||
                ((*(byte *)(this->View->_padding_ + 0x58) & 2) != 0)) &&
               (local_1f8->bIsAlwaysVisible == '\0')) {
              FPrimitiveSceneInfo::UpdateComponentLastRenderTime
                        (this_00,this->CurrentWorldTime,true);
            }
            bVar47 = FPrimitiveSceneInfo::NeedsReflectionCaptureUpdate(this_00);
            if (bVar47) {
              FPrimitiveSceneInfo::CacheReflectionCaptures(this_00);
            }
            if (this_00->bIndirectLightingCacheBufferDirty) {
              pFVar4 = &this->DirtyIndirectLightingCacheBufferPrimitives;
              local_190 = this_00;
              if ((this->DirtyIndirectLightingCacheBufferPrimitives).Prims.ArrayNum == 0) {
                uVar58 = (this->DirtyIndirectLightingCacheBufferPrimitives).MaxOutputPrims;
                if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
                }
                if ((this->DirtyIndirectLightingCacheBufferPrimitives).Prims.ArrayMax < (int)uVar58)
                {
                  UE::Core::Private::
                  ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
                            (8,8,uVar58,(ForElementType<FPrimitiveSceneInfo_*> *)pFVar4,0,
                             &(this->DirtyIndirectLightingCacheBufferPrimitives).Prims.ArrayMax);
                }
              }
              ppFVar22 = (pFVar4->Prims).AllocatorInstance.Data;
              if ((ppFVar22 <= &local_190) &&
                 (pFVar73 = (FScene *)
                            (longlong)
                            (this->DirtyIndirectLightingCacheBufferPrimitives).Prims.ArrayMax,
                 &local_190 < ppFVar22 + (longlong)pFVar73)) {
                in_stack_fffffffffffffd98 = 0;
                bVar47 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                in_stack_fffffffffffffd88 = pFVar73;
                if (bVar47) {
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
              }
              iVar57 = (this->DirtyIndirectLightingCacheBufferPrimitives).Prims.ArrayNum;
              piVar85 = &(this->DirtyIndirectLightingCacheBufferPrimitives).Prims.ArrayMax;
              if (iVar57 == *piVar85) {
                iVar57 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
                                   (0x808,(ForElementType<FPrimitiveSceneInfo_*> *)pFVar4,piVar85);
              }
              (this->DirtyIndirectLightingCacheBufferPrimitives).Prims.ArrayNum = iVar57 + 1;
              (pFVar4->Prims).AllocatorInstance.Data[iVar57] = local_190;
            }
            goto LAB_14552eedb;
          }
        }
        else if ((pFVar72->bDrawRelevance != 0) || (ZPULL(uVar11,3,1) != 0)) {
          (**(code **)(pFVar13->_padding_ + 0x208))(pFVar13,&local_200);
          pFVar64 = TScenePrimitiveArray<FPrimitiveBounds>::Get
                              (&this->Scene->PrimitiveBounds,uVar84);
          pFVar12 = this->View;
          if ((((int)uVar84 < 0) ||
              ((pFVar12->PrimitiveFadeUniformBufferMap).NumBits <= (int)uVar84)) &&
             (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar48)) {
            pcVar25 = (code *)swi(3);
            (*pcVar25)();
            return;
          }
          pTVar15 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)(pFVar12->PrimitiveFadeUniformBufferMap).AllocatorInstance.SecondaryData.Data
          ;
          pTVar78 = &pFVar12->PrimitiveFadeUniformBufferMap;
          if (pTVar15 !=
              (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)0x0) {
            pTVar78 = pTVar15;
          }
          uVar58 = uVar84;
          if ((int)uVar84 < 0) {
            uVar58 = uVar84 + 0x1f;
          }
          local_188.AllocatorInstance.Data._4_4_ =
               1 << ((byte)uVar84 & 0x1f) &
               *(uint *)((pTVar78->AllocatorInstance).InlineData + (longlong)((int)uVar58 >> 5) * 4)
          ;
          local_170[0] = 0;
          if (local_1ff == '\x01') {
            uVar80 = (local_200 & 0x7f | 0x80) << 7 | (ushort)(local_200 & 0x7f);
          }
          else {
            local_d8 = (pFVar64->BoxSphereBounds).Origin.field0_0x0._s_0.X;
            dStack_d0 = (pFVar64->BoxSphereBounds).Origin.field0_0x0._s_0.Y;
            in_stack_fffffffffffffd98 =
                 CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),local_200);
            in_stack_fffffffffffffd88 =
                 (FScene *)
                 CONCAT44((int)((ulonglong)in_stack_fffffffffffffd88 >> 0x20),
                          this->ViewData->ForcedLODLevel);
            local_c8 = (pFVar64->BoxSphereBounds).Origin.field0_0x0._s_0.Z;
            local_c0 = uVar35;
            FVar56 = ComputeLODForMeshes(&local_188,(FSceneView *)&this_00->StaticMeshRelevances,
                                         (TVector4<double> *)this->View,fVar93,
                                         (float)(pFVar64->BoxSphereBounds).SphereRadius,
                                         (int)this_00->GpuLodInstanceRadius,
                                         (float *)in_stack_fffffffffffffd88,(schar)local_170,
                                         (float)in_stack_fffffffffffffd98);
            uVar80 = *(ushort *)CONCAT62(extraout_var,FVar56);
          }
          pFVar3 = &this->PrimitivesLODMask;
          local_1a8.LODMask = (FLODMask)uVar80;
          local_1a8.PrimitiveIndex = uVar84;
          local_1a8._6_2_ = uStack_152;
          local_1f0 = uVar80;
          local_158 = uVar84;
          uStack_154 = uVar80;
          if ((this->PrimitivesLODMask).Prims.ArrayNum == 0) {
            uVar58 = (this->PrimitivesLODMask).MaxOutputPrims;
            if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
            }
            if ((this->PrimitivesLODMask).Prims.ArrayMax < (int)uVar58) {
              UE::Core::Private::
              ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket::FPrimitiveLODMask>_>
                        (8,4,uVar58,(ForElementType<FRelevancePacket::FPrimitiveLODMask> *)pFVar3,0,
                         &(this->PrimitivesLODMask).Prims.ArrayMax);
            }
          }
          pFVar16 = (pFVar3->Prims).AllocatorInstance.Data;
          if ((pFVar16 <= &local_1a8) &&
             (pFVar73 = (FScene *)(longlong)(this->PrimitivesLODMask).Prims.ArrayMax,
             &local_1a8 < pFVar16 + (longlong)pFVar73)) {
            in_stack_fffffffffffffd98 = 0;
            bVar48 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            in_stack_fffffffffffffd88 = pFVar73;
            if (bVar48) {
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
          }
          iVar57 = (this->PrimitivesLODMask).Prims.ArrayNum;
          piVar85 = &(this->PrimitivesLODMask).Prims.ArrayMax;
          if (iVar57 == *piVar85) {
            iVar57 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket::FPrimitiveLODMask>_>
                               (0x408,(ForElementType<FRelevancePacket::FPrimitiveLODMask> *)pFVar3,
                                piVar85);
          }
          lVar67 = local_150;
          (this->PrimitivesLODMask).Prims.ArrayNum = iVar57 + 1;
          (pFVar3->Prims).AllocatorInstance.Data[iVar57] = local_1a8;
          if (local_150 == 0) {
            bVar48 = false;
            bVar49 = false;
          }
          else {
            if ((((int)uVar84 < 0) || (*(int *)(local_150 + 0x18) <= (int)uVar84)) &&
               (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar48)) {
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            lVar70 = lVar67;
            if (*(longlong *)(lVar67 + 0x10) != 0) {
              lVar70 = *(longlong *)(lVar67 + 0x10);
            }
            uVar58 = uVar84;
            if ((int)uVar84 < 0) {
              uVar58 = uVar84 + 0x1f;
            }
            bVar48 = (*(uint *)(lVar70 + (longlong)((int)uVar58 >> 5) * 4) >> (uVar84 & 0x1f) & 1)
                     != 0;
            if ((((int)uVar84 < 0) || (*(int *)(lVar67 + 0x38) <= (int)uVar84)) &&
               (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar49)) {
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            lVar70 = lVar67 + 0x20;
            if (*(longlong *)(lVar67 + 0x30) != 0) {
              lVar70 = *(longlong *)(lVar67 + 0x30);
            }
            uVar58 = uVar84;
            if ((int)uVar84 < 0) {
              uVar58 = uVar84 + 0x1f;
            }
            bVar49 = (*(uint *)(lVar70 + (longlong)((int)uVar58 >> 5) * 4) >> (uVar84 & 0x1f) & 1)
                     != 0;
          }
          bVar69 = (byte)(uVar80 >> 0xe) & 1;
          if (((bVar69 == 0) || ((short)uVar80 < 0)) ||
             (bVar30 = true, (((byte)(uVar80 >> 7) ^ (byte)uVar80) & 0x7f) == 0)) {
            bVar30 = false;
          }
          if (((bVar69 == 0) || (-1 < (short)uVar80)) ||
             ((((byte)(uVar80 >> 7) ^ (byte)uVar80) & 0x7f) == 0)) {
            bVar31 = false;
          }
          else {
            bVar31 = true;
          }
          pFVar17 = this->ViewData;
          dVar92 = (pFVar64->BoxSphereBounds).Origin.field0_0x0._s_0.Y -
                   (pFVar17->ViewOrigin).field0_0x0._s_0.Y;
          dVar90 = (pFVar64->BoxSphereBounds).Origin.field0_0x0._s_0.X -
                   (pFVar17->ViewOrigin).field0_0x0._s_0.X;
          dVar26 = (pFVar64->BoxSphereBounds).Origin.field0_0x0._s_0.Z -
                   (pFVar17->ViewOrigin).field0_0x0._s_0.Z;
          fVar93 = pFVar17->LODScale;
          fVar94 = (float)(dVar92 * dVar92 + dVar90 * dVar90 + dVar26 * dVar26);
          if ((pFVar17->bFullEarlyZPass != false) ||
             ((2 < (int)TVar79 &&
              (dVar26 = (pFVar64->BoxSphereBounds).SphereRadius,
              fVar93 = fVar93 * fVar93 * fVar94 *
                       GMinScreenRadiusForDepthPrepass * GMinScreenRadiusForDepthPrepass,
              (double)fVar93 < dVar26 * dVar26)))) {
            bVar32 = true;
          }
          else {
            bVar32 = false;
          }
          local_1a0 = 0;
          local_208 = 0;
          local_110 = (longlong)(this_00->StaticMeshRelevances).ArrayNum;
          if (0 < local_110) {
            local_1d0 = uVar80 >> 0xe;
            do {
              lVar67 = local_1a0;
              uVar58 = 0;
              if ((int)local_208 < (this_00->StaticMeshRelevances).ArrayNum) {
                uVar58 = ~local_208 >> 0x1f;
              }
              if ((uVar58 == 0) &&
                 (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar50)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              pFVar8 = (FStaticMeshBatchRelevance *)
                       ((this_00->StaticMeshRelevances).AllocatorInstance.Data + lVar67 * 0x18);
              uVar58 = 0;
              if ((int)local_208 < (this_00->StaticMeshes).ArrayNum) {
                uVar58 = ~local_208 >> 0x1f;
              }
              if ((uVar58 == 0) &&
                 (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar50)) {
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              this_03 = (FStaticMeshBatch *)
                        ((this_00->StaticMeshes).AllocatorInstance.Data + lVar67 * 0xf0);
              if ((((pFVar8->bOverlayMaterial == 0) ||
                   ((*(uint *)(this->View->_padding_ + 0x58) & 0x2000000) != 0)) ||
                  ((fVar89 = GOverlayMaterialMaxDrawDistanceOverride,
                   GOverlayMaterialMaxDrawDistanceOverride <= 0.0 &&
                   (fVar89 = pFVar8->ScreenSize, fVar89 <= 0.0)))) ||
                 ((fVar89 == fVar36 || (fVar89 = fVar89 * fVar9 * fVar91, fVar94 <= fVar89 * fVar89)
                  ))) {
                if (pFVar8->bInvalidLODIndex == '\0') {
                  bVar69 = pFVar8->UnsignedLODIndex;
                }
                else {
                  bVar69 = 0xff;
                }
                if ((local_1d0 & 1) != 0) {
                  uVar58 = (uint)(char)bVar69;
                  uVar82 = uVar80 & 0x7f;
                  if ((short)uVar80 < 0) {
                    if (((int)uVar82 <= (int)uVar58) && ((int)uVar58 <= (int)(uVar80 >> 7 & 0x7f)))
                    {
LAB_14552d57a:
                      bVar50 = false;
                      local_20c = 0;
                      if (bVar48) {
                        if (bVar49) {
                          if ((bVar30) && ((uVar80 >> 7 & 0x7f) == uVar58)) {
                            bVar50 = true;
                          }
                          else {
                            local_20c = 0x10;
                          }
                        }
                        else if ((bVar30) && (uVar82 == uVar58)) {
                          bVar50 = true;
                        }
                        else {
                          local_20c = 0x20;
                        }
                      }
                      else if ((bVar30) && (local_20c = 0x20, uVar82 == uVar58)) {
                        local_20c = 0x10;
                      }
                      if ((pFVar8->bDitheredLODTransition == '\0') || (local_20c == 0)) {
                        bVar74 = false;
                      }
                      else {
                        bVar74 = true;
                      }
                      if ((local_188.AllocatorInstance.Data._4_4_ != 0) || (bVar74)) {
                        bVar74 = false;
                      }
                      else {
                        bVar74 = true;
                      }
                      bVar69 = (byte)uVar80;
                      if (bVar31) {
                        if (pFVar8->bInvalidLODIndex == '\0') {
                          bVar71 = pFVar8->UnsignedLODIndex;
                        }
                        else {
                          bVar71 = 0xff;
                        }
                        if ((((short)uVar80 < 0) && ((((byte)(uVar80 >> 7) ^ bVar69) & 0x7f) != 0))
                           && (bVar71 == ((byte)(uVar80 >> 7) & 0x7f))) goto LAB_14552d647;
                        EVar81 = MinScreenSizeCull;
LAB_14552d64f:
                        if (pFVar8->bInvalidLODIndex == '\0') {
                          bVar71 = pFVar8->UnsignedLODIndex;
                        }
                        else {
                          bVar71 = 0xff;
                        }
                        if ((((short)uVar80 < 0) && ((((byte)(uVar80 >> 7) ^ bVar69) & 0x7f) != 0))
                           && (bVar71 == (bVar69 & 0x7f))) goto LAB_14552d682;
                        EVar83 = MaxScreenSizeCull;
                      }
                      else {
LAB_14552d647:
                        EVar81 = Default;
                        if (bVar31) goto LAB_14552d64f;
LAB_14552d682:
                        EVar83 = Default;
                      }
                      EVar83 = EVar83 | EVar81;
                      if (pFVar72->bDrawRelevance != 0) {
                        if (((pFVar8->bUseForMaterial != '\0') || (pFVar8->bUseAsOccluder != '\0'))
                           && (((pFVar72->bRenderCustomDepth != 0 || pFVar72->bRenderInMainPass != 0
                                || (pFVar72->bRenderInDepthPass != 0)) && (!bVar50)))) {
                          bVar50 = false;
                          if (((pFVar8->bUseForMaterial != '\0') &&
                              ((char)(pFVar72->bRenderInMainPass << 7) < '\0')) &&
                             (((pFVar72->bVelocityRelevance != 0 ||
                               ((pFVar72->_padding_ & 0x100000000000) != 0)) &&
                              (bVar51 = FVelocityMeshProcessor::PrimitiveHasVelocityForView
                                                  (this->View,local_1f8), bVar51)))) {
                            if (pFVar72->bVelocityRelevance != 0) {
                              EVar54 = FSceneView::GetShaderPlatform((FSceneView *)this->View);
                              pFVar13 = local_1f8;
                              bVar51 = FOpaqueVelocityMeshProcessor::PrimitiveCanHaveVelocity
                                                 (EVar54,local_1f8);
                              if (bVar51) {
                                EVar54 = FSceneView::GetShaderPlatform((FSceneView *)this->View);
                                bVar51 = FOpaqueVelocityMeshProcessor::PrimitiveHasVelocityForFrame
                                                   (EVar54,pFVar13);
                                if (bVar51) {
                                  in_stack_fffffffffffffd88 = this->Scene;
                                  in_stack_fffffffffffffd98 =
                                       CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),
                                                0xb);
                                  FDrawCommandRelevancePacket::AddCommandsForMesh
                                            (&this->DrawCommandPacket,uVar84,this_00,pFVar8,this_03,
                                             EVar83,in_stack_fffffffffffffd88,bVar74,Velocity);
                                  bVar50 = true;
                                  if (local_1f8->bAnyMaterialUsesMotionVectorWorldOffset != '\0') {
                                    this->bUsesMotionVectorWorldOffset = true;
                                  }
                                }
                              }
                            }
                            pFVar13 = local_1f8;
                            if ((pFVar72->_padding_ & 0x100000000000) != 0) {
                              EVar54 = FSceneView::GetShaderPlatform((FSceneView *)this->View);
                              bVar51 = FTranslucentVelocityMeshProcessor::PrimitiveCanHaveVelocity
                                                 (EVar54,pFVar13);
                              if ((bVar51) &&
                                 (bVar51 = FTranslucentVelocityMeshProcessor::
                                           PrimitiveHasVelocityForFrame(pFVar13), bVar51)) {
                                in_stack_fffffffffffffd88 = this->Scene;
                                uVar95 = (undefined7)((ulonglong)in_stack_fffffffffffffd98 >> 8);
                                in_stack_fffffffffffffd98 = CONCAT71(uVar95,0xc);
                                FDrawCommandRelevancePacket::AddCommandsForMesh
                                          (&this->DrawCommandPacket,uVar84,this_00,pFVar8,this_03,
                                           EVar83,in_stack_fffffffffffffd88,bVar74,
                                           TranslucentVelocity);
                                if (((pFVar72->_padding_ & 0x40000000000) != 0) &&
                                   ((bVar45 &&
                                    (local_1f8->bAnyMaterialUsesTemporalResponsiveness != '\0')))) {
                                  in_stack_fffffffffffffd88 = this->Scene;
                                  in_stack_fffffffffffffd98 = CONCAT71(uVar95,0xd);
                                  FDrawCommandRelevancePacket::AddCommandsForMesh
                                            (&this->DrawCommandPacket,uVar84,this_00,pFVar8,this_03,
                                             EVar83,in_stack_fffffffffffffd88,bVar74,
                                             TranslucentVelocityClippedDepth);
                                }
                              }
                            }
                          }
                          if ((pFVar8->bUseForDepthPass != '\0') &&
                             ((bVar32 || ((bVar33 && ((pFVar72->_padding_ & 0x800000000) != 0))))))
                          {
                            if ((!bVar50) || (local_188.ArrayNum != DDM_AllOpaqueNoVelocity)) {
                              uVar96 = (uint7)((ulonglong)in_stack_fffffffffffffd98 >> 8);
                              if ((pFVar72->bRenderInSecondStageDepthPass == 0) || ((int)TVar79 < 3)
                                 ) {
                                in_stack_fffffffffffffd98 = (ulonglong)uVar96 << 8;
                              }
                              else {
                                in_stack_fffffffffffffd98 = CONCAT71(uVar96,1);
                              }
                              in_stack_fffffffffffffd88 = this->Scene;
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (&this->DrawCommandPacket,uVar84,this_00,pFVar8,this_03,
                                         EVar83,in_stack_fffffffffffffd88,bVar74,
                                         (Type)in_stack_fffffffffffffd98);
                            }
                            bVar50 = IsRayTracingEnabled();
                            if (((((bVar50) &&
                                  (pFVar12 = this->View, pFVar12->bHasRayTracingShadows != false))
                                 && ((char)pFVar12->_padding_ != '\0')) &&
                                (((char)pFVar12->_padding_ == '\0' ||
                                 (*(char *)((longlong)&pFVar12->_padding_ + 3) != '\0')))) &&
                               ((local_20c & 0x10) != 0)) {
                              in_stack_fffffffffffffd88 = this->Scene;
                              in_stack_fffffffffffffd98 =
                                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),0x1e);
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (&this->DrawCommandPacket,uVar84,this_00,pFVar8,this_03,
                                         EVar83,in_stack_fffffffffffffd88,bVar74,
                                         DitheredLODFadingOutMaskPass);
                            }
                          }
                          if ((pFVar8->bUseForMaterial != '\0') &&
                             (((char)(pFVar72->bRenderInMainPass << 7) < '\0' ||
                              (pFVar72->bRenderCustomDepth != 0)))) {
                            uVar95 = (undefined7)((ulonglong)in_stack_fffffffffffffd98 >> 8);
                            if ((int)TVar79 < 3) {
                              if ((pFVar8->bUseSingleLayerWaterMaterial == '\0') || (!bVar46)) {
                                in_stack_fffffffffffffd88 = this->Scene;
                                if (pFVar8->bUseSkyMaterial == '\0') {
                                  in_stack_fffffffffffffd98 = CONCAT71(uVar95,2);
                                  FDrawCommandRelevancePacket::AddCommandsForMesh
                                            (&this->DrawCommandPacket,uVar84,this_00,pFVar8,this_03,
                                             EVar83,in_stack_fffffffffffffd88,bVar74,BasePass);
                                  if (bVar43) goto LAB_14552dbd0;
                                  in_stack_fffffffffffffd88 = this->Scene;
                                  in_stack_fffffffffffffd98 = CONCAT71(uVar95,0x18);
                                }
                                else {
                                  in_stack_fffffffffffffd98 = CONCAT71(uVar95,4);
                                }
                              }
                              else {
                                in_stack_fffffffffffffd88 = this->Scene;
                                in_stack_fffffffffffffd98 = CONCAT71(uVar95,5);
                              }
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (&this->DrawCommandPacket,uVar84,this_00,pFVar8,this_03,
                                         EVar83,in_stack_fffffffffffffd88,bVar74,
                                         (Type)in_stack_fffffffffffffd98);
                            }
                            else {
                              in_stack_fffffffffffffd88 = this->Scene;
                              pFVar77 = &this->DrawCommandPacket;
                              in_stack_fffffffffffffd98 = CONCAT71(uVar95,2);
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                         in_stack_fffffffffffffd88,bVar74,BasePass);
                              if (pFVar8->bUseSkyMaterial != '\0') {
                                in_stack_fffffffffffffd88 = this->Scene;
                                in_stack_fffffffffffffd98 = CONCAT71(uVar95,4);
                                FDrawCommandRelevancePacket::AddCommandsForMesh
                                          (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                           in_stack_fffffffffffffd88,bVar74,SkyPass);
                              }
                              if (pFVar8->bUseSingleLayerWaterMaterial != '\0') {
                                FDrawCommandRelevancePacket::AddCommandsForMesh
                                          (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,this->Scene,
                                           bVar74,SingleLayerWaterPass);
                                in_stack_fffffffffffffd88 = this->Scene;
                                in_stack_fffffffffffffd98 =
                                     CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),6);
                                FDrawCommandRelevancePacket::AddCommandsForMesh
                                          (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                           in_stack_fffffffffffffd88,bVar74,NumBits);
                              }
                            }
LAB_14552dbd0:
                            local_20c = local_20c | 2;
                            pFVar77 = &this->DrawCommandPacket;
                            if ((bool)pFVar8->bUseAnisotropy) {
                              in_stack_fffffffffffffd88 = this->Scene;
                              in_stack_fffffffffffffd98 =
                                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),3);
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                         in_stack_fffffffffffffd88,bVar74,AnisotropyPass);
                            }
                            if ((pFVar72->bRenderCustomDepth != 0) && (local_213 != false)) {
                              in_stack_fffffffffffffd88 = this->Scene;
                              in_stack_fffffffffffffd98 =
                                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),0x17);
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                         in_stack_fffffffffffffd88,bVar74,CustomDepth);
                            }
                            uVar95 = (undefined7)((ulonglong)in_stack_fffffffffffffd98 >> 8);
                            if (this->bAddLightmapDensityCommands == false) {
                              EVar59 = FSceneViewFamily::GetDebugViewShaderMode
                                                 ((FSceneViewFamily *)this->View->_padding_);
                              if (EVar59 != DVSM_None) {
                                in_stack_fffffffffffffd98 = CONCAT71(uVar95,0x16);
                                goto LAB_14552dc74;
                              }
                            }
                            else {
                              in_stack_fffffffffffffd98 = CONCAT71(uVar95,0x15);
LAB_14552dc74:
                              in_stack_fffffffffffffd88 = this->Scene;
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                         in_stack_fffffffffffffd88,bVar74,
                                         (Type)in_stack_fffffffffffffd98);
                            }
                            local_1c8 = local_1c8 + 1;
                            iVar57 = FMeshBatch::GetNumPrimitives((FMeshBatch *)this_03);
                            local_f8 = (uchar  [8])(longlong)iVar57;
                            if ((local_f8 != (uchar  [8])0x0) &&
                               (FThreadStats::bPrimaryEnable != false)) {
                              FVar65 = StatPtr_STAT_StaticMeshTriangles;
                              if (StatPtr_STAT_StaticMeshTriangles ==
                                  (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)0x0) {
                                pFVar60 = ::FName::FName(&local_b0,"STAT_StaticMeshTriangles");
                                in_stack_fffffffffffffd98 = 0;
                                in_stack_fffffffffffffd88 =
                                     (FScene *)
                                     CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd88 >> 8),1);
                                FVar65 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)
                                         FThreadSafeStaticStatBase::DoSetup
                                                   ((FThreadSafeStaticStatBase *)
                                                    &StatPtr_STAT_StaticMeshTriangles,*pFVar60,
                                                    L"Static Mesh Tris","STATGROUP_Engine",
                                                    "STATCAT_Advanced",L"Engine",true,true,ST_int64,
                                                    false,false,MCR_Invalid);
                              }
                              FVar87 = *(FName *)FVar65;
                              FVar86 = FVar87.ComparisonIndex.Value;
                              uVar58 = FVar87.Number;
                              local_148 = FVar86.Value;
                              uStack_144 = uVar58;
                              if (((FVar87 != (FName)0x0) &&
                                  (FThreadStats::bPrimaryDisableForever == false)) &&
                                 (FThreadStats::TlsSlot != 0xffffffff)) {
                                this_01 = TlsGetValue(FThreadStats::TlsSlot);
                                if (this_01 == (FThreadStats *)0x0) {
                                  this_02 = FThreadStatsPool::Get();
                                  this_01 = FThreadStatsPool::GetFromPool(this_02);
                                }
                                auVar39 = local_f8;
                                local_f0.NameAndInfo.Number = uVar58 & 0xffffafff | 0xa000;
                                local_f0.StatData.Pad[0] = local_f8[0];
                                local_f0.StatData.Pad[1] = local_f8[1];
                                local_f0.StatData.Pad[2] = local_f8[2];
                                local_f0.StatData.Pad[3] = local_f8[3];
                                local_f0.StatData.Pad[4] = local_f8[4];
                                local_f0.StatData.Pad[5] = local_f8[5];
                                local_f0.StatData.Pad[6] = local_f8[6];
                                local_f0.StatData.Pad[7] = local_f8[7];
                                local_118 = FVar87;
                                local_f0.NameAndInfo.Index.Value = FVar86.Value;
                                FThreadStats::AddStatMessage(this_01,&local_f0);
                                FStatsTrace::Add(&local_118,(long64)auVar39);
                                if (this_01->ScopeCount == 0) {
                                  FThreadStats::Flush(this_01,false,false);
                                }
                                else if (FThreadStats::bIsRawStatsActive != false) {
                                  FThreadStats::FlushRawStats(this_01,false,false);
                                }
                              }
                            }
                          }
                        }
                        if (pFVar8->bUseForMaterial != '\0') {
                          bVar69 = *(byte *)((longlong)&pFVar72->_padding_ + 5);
                          bVar71 = bVar69 & 4;
                          if ((((bVar71 != 0) ||
                               (*(char *)((longlong)&pFVar72->_padding_ + 4) < '\0')) ||
                              ((bVar69 & 3) != 0)) &&
                             (pFVar72->bRenderInMainPass == 1 &&
                              pFVar72->bEditorPrimitiveRelevance == 0)) {
                            uVar95 = (undefined7)((ulonglong)in_stack_fffffffffffffd98 >> 8);
                            if (*(char *)(this->View->_padding_ + 0x1b0) == '\0') {
                              in_stack_fffffffffffffd88 = this->Scene;
                              in_stack_fffffffffffffd98 = CONCAT71(uVar95,0x14);
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (&this->DrawCommandPacket,uVar84,this_00,pFVar8,this_03,
                                         EVar83,in_stack_fffffffffffffd88,bVar74,TranslucencyAll);
                            }
                            else {
                              if ((bVar71 != 0) ||
                                 ((0.0 < this->View->AutoBeforeDOFTranslucencyBoundary &&
                                  (*(char *)((longlong)&pFVar72->_padding_ + 4) < '\0')))) {
                                in_stack_fffffffffffffd88 = this->Scene;
                                in_stack_fffffffffffffd98 = CONCAT71(uVar95,0xe);
                                FDrawCommandRelevancePacket::AddCommandsForMesh
                                          (&this->DrawCommandPacket,uVar84,this_00,pFVar8,this_03,
                                           EVar83,in_stack_fffffffffffffd88,bVar74,
                                           TranslucencyStandard);
                              }
                              if (((((pFVar72->_padding_ & 0x40000000000) != 0) ||
                                   ((0.0 < this->View->AutoBeforeDOFTranslucencyBoundary &&
                                    (*(char *)((longlong)&pFVar72->_padding_ + 4) < '\0')))) &&
                                  ((pFVar72->_padding_ & 0x10000000000) != 0)) &&
                                 (*(char *)(this->View->_padding_ + 0x1b1) != '\0')) {
                                in_stack_fffffffffffffd88 = this->Scene;
                                in_stack_fffffffffffffd98 =
                                     CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),0xf)
                                ;
                                FDrawCommandRelevancePacket::AddCommandsForMesh
                                          (&this->DrawCommandPacket,uVar84,this_00,pFVar8,this_03,
                                           EVar83,in_stack_fffffffffffffd88,bVar74,
                                           TranslucencyStandardModulate);
                              }
                              pFVar77 = &this->DrawCommandPacket;
                              if (*(char *)((longlong)&pFVar72->_padding_ + 4) < '\0') {
                                in_stack_fffffffffffffd98 =
                                     CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),0x10
                                             );
                                in_stack_fffffffffffffd88 = this->Scene;
                                FDrawCommandRelevancePacket::AddCommandsForMesh
                                          (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                           in_stack_fffffffffffffd88,bVar74,TranslucencyAfterDOF);
                              }
                              if ((*(char *)((longlong)&pFVar72->_padding_ + 4) < '\0') &&
                                 ((pFVar72->_padding_ & 0x10000000000) != 0)) {
                                in_stack_fffffffffffffd88 = this->Scene;
                                in_stack_fffffffffffffd98 =
                                     CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),0x11
                                             );
                                FDrawCommandRelevancePacket::AddCommandsForMesh
                                          (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                           in_stack_fffffffffffffd88,bVar74,
                                           TranslucencyAfterDOFModulate);
                              }
                              if ((pFVar72->_padding_ & 0x20000000000) != 0) {
                                in_stack_fffffffffffffd88 = this->Scene;
                                in_stack_fffffffffffffd98 =
                                     CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),0x12
                                             );
                                FDrawCommandRelevancePacket::AddCommandsForMesh
                                          (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                           in_stack_fffffffffffffd88,bVar74,
                                           TranslucencyAfterMotionBlur);
                              }
                            }
                            pFVar77 = &this->DrawCommandPacket;
                            if (bVar44) {
                              in_stack_fffffffffffffd88 = this->Scene;
                              in_stack_fffffffffffffd98 =
                                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),0x13);
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                         in_stack_fffffffffffffd88,bVar74,TranslucencyHoldout);
                            }
                            if (((pFVar72->_padding_ & 0x10000000000000) != 0) || (bVar42)) {
                              in_stack_fffffffffffffd88 = this->Scene;
                              in_stack_fffffffffffffd98 =
                                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),0x1c);
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                         in_stack_fffffffffffffd88,bVar74,
                                         LumenTranslucencyRadianceCacheMark);
                            }
                            if ((pFVar72->_padding_ & 0x10000000000000) != 0) {
                              in_stack_fffffffffffffd88 = this->Scene;
                              in_stack_fffffffffffffd98 =
                                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),0x1d);
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                         in_stack_fffffffffffffd88,bVar74,
                                         LumenFrontLayerTranslucencyGBuffer);
                            }
                            if ((pFVar72->_padding_ & 0x1000000000) != 0) {
                              in_stack_fffffffffffffd88 = this->Scene;
                              in_stack_fffffffffffffd98 =
                                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),10);
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (pFVar77,uVar84,this_00,pFVar8,this_03,EVar83,
                                         in_stack_fffffffffffffd88,bVar74,Distortion);
                            }
                          }
                        }
                        if ((pFVar72->_padding_ & 0x100000000000000) != 0) {
                          bVar50 = ShouldRenderMeshBatchWithHeterogeneousVolumes
                                             ((FMeshBatch *)this_03,local_1f8,
                                              (Type)this->View->_padding_);
                          if (bVar50) {
                            piVar85 = &(this->HeterogeneousVolumesMeshBatches).ArrayNum;
                            UE::Core::Private::
                            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVolumetricMeshBatch>_>
                                      (0x10,8,1,&(this->HeterogeneousVolumesMeshBatches).
                                                 AllocatorInstance,piVar85,
                                       &(this->HeterogeneousVolumesMeshBatches).ArrayMax);
                            uVar82 = *piVar85 - 1;
                            uVar58 = 0;
                            if ((int)uVar82 < *piVar85) {
                              uVar58 = ~uVar82 >> 0x1f;
                            }
                            if ((uVar58 == 0) &&
                               (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar50)) {
                              pcVar25 = (code *)swi(3);
                              (*pcVar25)();
                              return;
                            }
                            pFVar66 = (this->HeterogeneousVolumesMeshBatches).AllocatorInstance.Data
                            ;
                          }
                          else {
                            piVar85 = &(this->VolumetricMeshBatches).ArrayNum;
                            UE::Core::Private::
                            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVolumetricMeshBatch>_>
                                      (0x10,8,1,&(this->VolumetricMeshBatches).AllocatorInstance,
                                       piVar85,&(this->VolumetricMeshBatches).ArrayMax);
                            uVar82 = *piVar85 - 1;
                            uVar58 = 0;
                            if ((int)uVar82 < *piVar85) {
                              uVar58 = ~uVar82 >> 0x1f;
                            }
                            if ((uVar58 == 0) &&
                               (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar50)) {
                              pcVar25 = (code *)swi(3);
                              (*pcVar25)();
                              return;
                            }
                            pFVar66 = (this->VolumetricMeshBatches).AllocatorInstance.Data;
                          }
                          iVar57 = *piVar85;
                          pFVar66[(longlong)iVar57 + -1].Mesh = (FMeshBatch *)this_03;
                          pFVar66[(longlong)iVar57 + -1].Proxy = local_1f8;
                        }
                        if ((pFVar72->_padding_ & 0x40000000000000) != 0) {
                          piVar85 = &(this->SkyMeshBatches).ArrayNum;
                          UE::Core::Private::
                          ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSkyMeshBatch>_>
                                    (0x18,8,1,&(this->SkyMeshBatches).AllocatorInstance,piVar85,
                                     &(this->SkyMeshBatches).ArrayMax);
                          uVar82 = *piVar85 - 1;
                          uVar58 = 0;
                          if ((int)uVar82 < *piVar85) {
                            uVar58 = ~uVar82 >> 0x1f;
                          }
                          if ((uVar58 == 0) &&
                             (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar50)) {
                            pcVar25 = (code *)swi(3);
                            (*pcVar25)();
                            return;
                          }
                          lVar67 = (longlong)*piVar85;
                          pFVar18 = (this->SkyMeshBatches).AllocatorInstance.Data;
                          pFVar18[lVar67 + -1].Mesh = (FMeshBatch *)this_03;
                          pFVar18[lVar67 + -1].Proxy = local_1f8;
                          bVar69 = (pFVar72->bRenderInMainPass ^
                                   pFVar18[lVar67 + -1].bVisibleInMainPass) & 1 ^
                                   pFVar18[lVar67 + -1].field_0x10;
                          pFVar18[lVar67 + -1].field_0x10 = bVar69;
                          pFVar18[lVar67 + -1].field_0x10 =
                               ((byte)this_00->field_0x1a3 >> 2 ^ bVar69) & 2 ^ bVar69;
                        }
                        if (((((pFVar72->_padding_ & 0x40000000000) != 0) ||
                             (*(char *)((longlong)&pFVar72->_padding_ + 4) < '\0')) ||
                            ((pFVar72->_padding_ & 0x30000000000) != 0)) &&
                           (local_1f8->bSupportsSortedTriangles != '\0')) {
                          piVar85 = &(this->SortedTrianglesMeshBatches).ArrayNum;
                          UE::Core::Private::
                          ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSortedTrianglesMeshBatch>_>
                                    (0x10,8,1,&(this->SortedTrianglesMeshBatches).AllocatorInstance,
                                     piVar85,&(this->SortedTrianglesMeshBatches).ArrayMax);
                          uVar82 = *piVar85 - 1;
                          uVar58 = 0;
                          if ((int)uVar82 < *piVar85) {
                            uVar58 = ~uVar82 >> 0x1f;
                          }
                          if ((uVar58 == 0) &&
                             (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar50)) {
                            pcVar25 = (code *)swi(3);
                            (*pcVar25)();
                            return;
                          }
                          iVar57 = *piVar85;
                          pFVar19 = (this->SortedTrianglesMeshBatches).AllocatorInstance.Data;
                          pFVar19[(longlong)iVar57 + -1].Mesh = (FMeshBatch *)this_03;
                          pFVar19[(longlong)iVar57 + -1].Proxy = local_1f8;
                        }
                        if (((pFVar72->bRenderInMainPass != 0) &&
                            ((pFVar72->_padding_ & 0x8000000000000) != 0)) &&
                           (pFVar8->bUseForMaterial != '\0')) {
                          EVar75 = None;
                          do {
                            bVar50 = DecalRendering::IsCompatibleWithRenderTargetMode
                                               (pFVar8->DecalRenderTargetModeMask,EVar75);
                            if (bVar50) {
                              TVar52 = DecalRendering::GetMeshPassType(EVar75);
                              in_stack_fffffffffffffd98 =
                                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd98 >> 8),TVar52
                                           );
                              in_stack_fffffffffffffd88 = this->Scene;
                              FDrawCommandRelevancePacket::AddCommandsForMesh
                                        (&this->DrawCommandPacket,uVar84,this_00,pFVar8,this_03,
                                         EVar83,in_stack_fffffffffffffd88,bVar74,TVar52);
                            }
                            EVar75 = EVar75 + DBuffer;
                            TVar79 = local_188.ArrayMax;
                            uVar80 = local_1f0;
                          } while (EVar75 < Num);
                        }
                      }
                      lVar67 = local_1a0;
                      if (local_20c != 0) {
                        this->MarkMasks[pFVar8->Id] = local_20c;
                      }
                    }
                  }
                  else if ((uVar82 == uVar58) || ((uVar80 >> 7 & 0x7f) == uVar58))
                  goto LAB_14552d57a;
                }
              }
              local_208 = local_208 + 1;
              local_1a0 = lVar67 + 1;
              FVar87 = local_140;
            } while (local_1a0 < local_110);
          }
          goto LAB_14552e5da;
        }
        local_1e0[0] = uVar84;
        if ((this->NotDrawRelevant).Prims.ArrayNum == 0) {
          uVar58 = (this->NotDrawRelevant).MaxOutputPrims;
          if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
          }
          if ((this->NotDrawRelevant).Prims.ArrayMax < (int)uVar58) {
            UE::Core::Private::
            ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                      (4,4,uVar58,(ForElementType<int> *)&this->NotDrawRelevant,0,
                       &(this->NotDrawRelevant).Prims.ArrayMax);
          }
        }
        puVar14 = (uint *)(this->NotDrawRelevant).Prims.AllocatorInstance.Data;
        if ((puVar14 <= local_1e0) &&
           (pFVar73 = (FScene *)(longlong)(this->NotDrawRelevant).Prims.ArrayMax,
           local_1e0 < puVar14 + (longlong)pFVar73)) {
          in_stack_fffffffffffffd98 = 0;
          bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          in_stack_fffffffffffffd88 = pFVar73;
          if (bVar47) {
            pcVar25 = (code *)swi(3);
            (*pcVar25)();
            return;
          }
        }
        iVar57 = (this->NotDrawRelevant).Prims.ArrayNum;
        piVar85 = &(this->NotDrawRelevant).Prims.ArrayMax;
        if (iVar57 == *piVar85) {
          iVar57 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                             (0x404,(ForElementType<int> *)&this->NotDrawRelevant,piVar85);
        }
        (this->NotDrawRelevant).Prims.ArrayNum = iVar57 + 1;
        (this->NotDrawRelevant).Prims.AllocatorInstance.Data[iVar57] = local_1e0[0];
      }
      else {
        local_1d8[0] = uVar84;
        if ((this->NotDrawRelevant).Prims.ArrayNum == 0) {
          uVar58 = (this->NotDrawRelevant).MaxOutputPrims;
          if ((int)uVar58 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar58);
          }
          if ((this->NotDrawRelevant).Prims.ArrayMax < (int)uVar58) {
            UE::Core::Private::
            ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                      (4,4,uVar58,(ForElementType<int> *)&this->NotDrawRelevant,0,
                       &(this->NotDrawRelevant).Prims.ArrayMax);
          }
        }
        puVar14 = (uint *)(this->NotDrawRelevant).Prims.AllocatorInstance.Data;
        if ((puVar14 <= local_1d8) &&
           (pFVar73 = (FScene *)(longlong)(this->NotDrawRelevant).Prims.ArrayMax,
           local_1d8 < puVar14 + (longlong)pFVar73)) {
          in_stack_fffffffffffffd98 = 0;
          bVar47 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          in_stack_fffffffffffffd88 = pFVar73;
          if (bVar47) {
            pcVar25 = (code *)swi(3);
            (*pcVar25)();
            return;
          }
        }
        iVar57 = (this->NotDrawRelevant).Prims.ArrayNum;
        piVar85 = &(this->NotDrawRelevant).Prims.ArrayMax;
        if (iVar57 == *piVar85) {
          iVar57 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                             (0x404,(ForElementType<int> *)&this->NotDrawRelevant,piVar85);
        }
        (this->NotDrawRelevant).Prims.ArrayNum = iVar57 + 1;
        (this->NotDrawRelevant).Prims.AllocatorInstance.Data[iVar57] = local_1d8[0];
      }
LAB_14552eedb:
      local_1c4 = local_1c4 + 1;
      local_138 = local_138 + 1;
    } while ((int)local_1c4 < (this->Input).Prims.ArrayNum);
  }
  LOCK();
  local_108->NumVisibleStaticMeshElements = local_108->NumVisibleStaticMeshElements + local_1c8;
  UNLOCK();
  if (bVar34) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar40) {
    FThreadStats::AddMessage(FVar87,CycleScopeEnd);
  }
  if (bVar88) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Finalize @ 14553f5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall FRelevancePacket::Finalize(FRelevancePacket *this)

{
  uchar *puVar1;
  bool *pbVar2;
  TArray<FSkyMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar3;
  TArray<FSortedTrianglesMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar4;
  int *piVar5;
  FPrimitiveLODMask *pFVar6;
  ForElementType<FVisibleMeshDrawCommand> *pFVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  FViewInfo *pFVar11;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar12;
  FSubstrateViewData *pFVar13;
  FScriptContainerElement *_Src;
  FRHIUniformBuffer *this_00;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  FPrimitiveLODMask FVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  TRefCountPtr<FRHIUniformBuffer> *pTVar22;
  FShaderParametersMetadata *pFVar23;
  uint uVar24;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar25;
  TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar26;
  FPrimitiveLODMask *pFVar27;
  longlong lVar28;
  uint *puVar29;
  int *piVar30;
  TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar31;
  undefined1 auStackY_128 [32];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6 [6];
  FPrimitiveLODMask local_f0;
  TRefCountPtr<FRHIUniformBuffer> local_e8;
  uint local_e0;
  int local_dc;
  undefined1 local_d8 [120];
  ForAnyElementType FStack_60;
  FRHISamplerState *local_58;
  FRHISamplerState *pFStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_f0 = (FPrimitiveLODMask)this->ViewCommands;
  piVar30 = (this->NotDrawRelevant).Prims.AllocatorInstance.Data;
  iVar9 = (this->NotDrawRelevant).Prims.ArrayNum;
  pFVar11 = this->View;
  iVar21 = *(int *)&this->Scene->field_0x8;
  piVar5 = piVar30 + iVar9;
  while( true ) {
    if ((this->NotDrawRelevant).Prims.ArrayNum != iVar9) {
      local_f8 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_f8);
    }
    FVar17 = local_f0;
    if (piVar30 == piVar5) break;
    iVar10 = *piVar30;
    if ((iVar10 < 0) || ((pFVar11->PrimitiveVisibilityMap).NumBits <= iVar10)) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L"");
      if (bVar18) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    pTVar12 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(pFVar11->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
    pTVar25 = &pFVar11->PrimitiveVisibilityMap;
    if (pTVar12 !=
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar25 = pTVar12;
    }
    iVar19 = iVar10;
    if (iVar10 < 0) {
      iVar19 = iVar10 + 0x1f;
    }
    puVar1 = (pTVar25->AllocatorInstance).InlineData + (longlong)(iVar19 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
    piVar30 = piVar30 + 1;
  }
  puVar8 = &(this->TaskConfig->Relevance).NumPrimitivesProcessed;
  *puVar8 = *puVar8 + (this->Input).Prims.ArrayNum;
  pFVar11->ShadingModelMaskInView = pFVar11->ShadingModelMaskInView | this->CombinedShadingModelMask
  ;
  uVar24 = ((uint)this->bUsesGlobalDistanceField << 6 | *(uint *)&pFVar11->field_0x24b8) & 0x40 ^
           *(uint *)&pFVar11->field_0x24b8 & 0xffffffbf;
  *(uint *)&pFVar11->field_0x24b8 = uVar24;
  uVar24 = ((uint)this->bUsesLightingChannels << 7 | uVar24) & 0x80 ^ uVar24 & 0xffffff7f;
  *(uint *)&pFVar11->field_0x24b8 = uVar24;
  uVar24 = ((uint)this->bTranslucentSurfaceLighting << 8 | uVar24) & 0x100 ^ uVar24 & 0xfffffeff;
  *(uint *)&pFVar11->field_0x24b8 = uVar24;
  uVar24 = ((uint)this->bSceneHasSkyMaterial << 0xe | uVar24) & 0x4000 ^ uVar24 & 0xffffbfff;
  *(uint *)&pFVar11->field_0x24b8 = uVar24;
  uVar24 = ((uint)this->bHasSingleLayerWaterMaterial << 0xf | uVar24) & 0x8000 ^ uVar24 & 0xffff7fff
  ;
  *(uint *)&pFVar11->field_0x24b8 = uVar24;
  if ((this->bUsesSecondStageDepthPass == false) || (iVar21 < 3)) {
    uVar20 = 0;
  }
  else {
    uVar20 = 0x10000;
  }
  *(uint *)&pFVar11->field_0x24b8 = (uVar20 | uVar24 & 0x10000) ^ uVar24 & 0xfffeffff;
  TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  Append<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            (&pFVar11->VisibleDynamicPrimitivesWithSimpleLights,
             &(this->VisibleDynamicPrimitivesWithSimpleLights).Prims);
  pFVar11->NumVisibleDynamicPrimitives =
       pFVar11->NumVisibleDynamicPrimitives + this->NumVisibleDynamicPrimitives;
  pFVar11->NumVisibleDynamicEditorPrimitives =
       pFVar11->NumVisibleDynamicEditorPrimitives + this->NumVisibleDynamicEditorPrimitives;
  (pFVar11->TranslucentPrimCount).Count[0] =
       (pFVar11->TranslucentPrimCount).Count[0] + (this->TranslucentPrimCount).Count[0];
  pbVar2 = (pFVar11->TranslucentPrimCount).UseSceneColorCopyPerPass;
  *pbVar2 = (bool)(*pbVar2 | (this->TranslucentPrimCount).UseSceneColorCopyPerPass[0]);
  puVar8 = (pFVar11->TranslucentPrimCount).Count + 1;
  *puVar8 = *puVar8 + (this->TranslucentPrimCount).Count[1];
  pbVar2 = (pFVar11->TranslucentPrimCount).UseSceneColorCopyPerPass + 1;
  *pbVar2 = (bool)(*pbVar2 | (this->TranslucentPrimCount).UseSceneColorCopyPerPass[1]);
  puVar8 = (pFVar11->TranslucentPrimCount).Count + 2;
  *puVar8 = *puVar8 + (this->TranslucentPrimCount).Count[2];
  pbVar2 = (pFVar11->TranslucentPrimCount).UseSceneColorCopyPerPass + 2;
  *pbVar2 = (bool)(*pbVar2 | (this->TranslucentPrimCount).UseSceneColorCopyPerPass[2]);
  puVar8 = (pFVar11->TranslucentPrimCount).Count + 3;
  *puVar8 = *puVar8 + (this->TranslucentPrimCount).Count[3];
  pbVar2 = (pFVar11->TranslucentPrimCount).UseSceneColorCopyPerPass + 3;
  *pbVar2 = (bool)(*pbVar2 | (this->TranslucentPrimCount).UseSceneColorCopyPerPass[3]);
  puVar8 = (pFVar11->TranslucentPrimCount).Count + 4;
  *puVar8 = *puVar8 + (this->TranslucentPrimCount).Count[4];
  pbVar2 = (pFVar11->TranslucentPrimCount).UseSceneColorCopyPerPass + 4;
  *pbVar2 = (bool)(*pbVar2 | (this->TranslucentPrimCount).UseSceneColorCopyPerPass[4]);
  puVar8 = (pFVar11->TranslucentPrimCount).Count + 5;
  *puVar8 = *puVar8 + (this->TranslucentPrimCount).Count[5];
  pbVar2 = (pFVar11->TranslucentPrimCount).UseSceneColorCopyPerPass + 5;
  *pbVar2 = (bool)(*pbVar2 | (this->TranslucentPrimCount).UseSceneColorCopyPerPass[5]);
  puVar8 = (pFVar11->TranslucentPrimCount).Count + 6;
  *puVar8 = *puVar8 + (this->TranslucentPrimCount).Count[6];
  pbVar2 = (pFVar11->TranslucentPrimCount).UseSceneColorCopyPerPass + 6;
  *pbVar2 = (bool)(*pbVar2 | (this->TranslucentPrimCount).UseSceneColorCopyPerPass[6]);
  pFVar11->bHasDistortionPrimitives =
       (bool)(pFVar11->bHasDistortionPrimitives | this->bHasDistortionPrimitives);
  pFVar11->bHasCustomDepthPrimitives =
       (bool)(pFVar11->bHasCustomDepthPrimitives | this->bHasCustomDepthPrimitives);
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
  ::
  Append<TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
            (&pFVar11->CustomDepthStencilValues,&this->CustomDepthStencilValues);
  TArray<FPrimitiveInstanceRange,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  Append<FPrimitiveInstanceRange,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            (&pFVar11->NaniteCustomDepthInstances,&(this->NaniteCustomDepthInstances).Prims);
  uVar24 = ((uint)this->bUsesCustomDepth << 10 | *(uint *)&pFVar11->field_0x24b8) & 0x400 ^
           *(uint *)&pFVar11->field_0x24b8 & 0xfffffbff;
  *(uint *)&pFVar11->field_0x24b8 = uVar24;
  uVar24 = ((uint)this->bUsesMotionVectorWorldOffset << 0xc | uVar24) & 0x1000 ^ uVar24 & 0xffffefff
  ;
  *(uint *)&pFVar11->field_0x24b8 = uVar24;
  *(uint *)&pFVar11->field_0x24b8 =
       ((uint)this->bUsesCustomStencil << 0xb | uVar24) & 0x800 ^ uVar24 & 0xfffff7ff;
  uVar24 = (uint)this->SubstrateClosureCountMask * 2 + 1;
  local_dc = 0x1f;
  if (uVar24 != 0) {
    for (; uVar24 >> local_dc == 0; local_dc = local_dc + -1) {
    }
  }
  uVar24 = 8 - (byte)(8 - (char)local_dc);
  pFVar13 = pFVar11->SubstrateViewData;
  if (uVar24 < pFVar13->MaxClosurePerPixel) {
    uVar24 = pFVar13->MaxClosurePerPixel;
  }
  pFVar13->MaxClosurePerPixel = uVar24;
  pFVar13 = pFVar11->SubstrateViewData;
  uVar24 = (uint)this->SubstrateUintPerPixel << 2;
  if (uVar24 < pFVar13->MaxBytesPerPixel) {
    uVar24 = pFVar13->MaxBytesPerPixel;
  }
  pFVar13->MaxBytesPerPixel = uVar24;
  puVar1 = &pFVar11->SubstrateViewData->UsesTileTypeMask;
  *puVar1 = *puVar1 | this->SubstrateTileTypeMask;
  pbVar2 = &pFVar11->SubstrateViewData->bUsesAnisotropy;
  *pbVar2 = (bool)(*pbVar2 | this->bUsesAnisotropy);
  TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  Append<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            (&pFVar11->DirtyIndirectLightingCacheBufferPrimitives,
             &(this->DirtyIndirectLightingCacheBufferPrimitives).Prims);
  TArray<FVolumetricMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  Append<FVolumetricMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            (&pFVar11->VolumetricMeshBatches,&this->VolumetricMeshBatches);
  TArray<FVolumetricMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  Append<FVolumetricMeshBatch,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            (&pFVar11->HeterogeneousVolumesMeshBatches,&this->HeterogeneousVolumesMeshBatches);
  pTVar3 = &pFVar11->SkyMeshBatches;
  if (pTVar3 == &this->SkyMeshBatches) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  iVar9 = (this->SkyMeshBatches).ArrayNum;
  if (iVar9 != 0) {
    iVar21 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSkyMeshBatch>_>
                       (0x18,8,iVar9,&pTVar3->AllocatorInstance,&(pFVar11->SkyMeshBatches).ArrayNum,
                        &(pFVar11->SkyMeshBatches).ArrayMax);
    memcpy((pTVar3->AllocatorInstance).Data + iVar21,(this->SkyMeshBatches).AllocatorInstance.Data,
           (longlong)iVar9 * 0x18);
  }
  pTVar4 = &pFVar11->SortedTrianglesMeshBatches;
  if (pTVar4 == &this->SortedTrianglesMeshBatches) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  iVar9 = (this->SortedTrianglesMeshBatches).ArrayNum;
  if (iVar9 != 0) {
    iVar21 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSortedTrianglesMeshBatch>_>
                       (0x10,8,iVar9,&pTVar4->AllocatorInstance,
                        &(pFVar11->SortedTrianglesMeshBatches).ArrayNum,
                        &(pFVar11->SortedTrianglesMeshBatches).ArrayMax);
    memcpy((pTVar4->AllocatorInstance).Data + iVar21,
           (this->SortedTrianglesMeshBatches).AllocatorInstance.Data,(longlong)iVar9 << 4);
  }
  pFVar27 = (this->PrimitivesLODMask).Prims.AllocatorInstance.Data;
  iVar9 = (this->PrimitivesLODMask).Prims.ArrayNum;
  pFVar6 = pFVar27 + iVar9;
  while( true ) {
    if ((this->PrimitivesLODMask).Prims.ArrayNum != iVar9) {
      local_f7 = 0;
      `TCheckedPointerIterator<FRelevancePacket::FPrimitiveLODMask,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_f7);
    }
    if (pFVar27 == pFVar6) break;
    local_f0 = *pFVar27;
    uVar20 = local_f0.PrimitiveIndex;
    uVar24 = 0;
    if ((int)uVar20 < (pFVar11->PrimitivesLODMask).ArrayNum) {
      uVar24 = ~uVar20 >> 0x1f;
    }
    if (uVar24 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    pFVar27 = pFVar27 + 1;
    (pFVar11->PrimitivesLODMask).AllocatorInstance.Data[(int)uVar20] = local_f0.LODMask;
  }
  lVar28 = 0;
  do {
    if ((lVar28 != 0x1f) || (this->Scene->PrimitivesAlwaysVisibleOffset == 0xffffffff)) {
      pFVar7 = (ForElementType<FVisibleMeshDrawCommand> *)((longlong)FVar17 + lVar28 * 0x10);
      if (0 < *(int *)((longlong)(&this->TranslucentPrimCount + 3) + (lVar28 * 4 + 7) * 4)) {
        uVar24 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
                           (0x48,8,*(int *)((longlong)(&this->TranslucentPrimCount + 3) +
                                           (lVar28 * 4 + 7) * 4),pFVar7,(int *)(pFVar7 + 1),
                            (int *)((longlong)&pFVar7[1].Data + 4));
        iVar9 = *(int *)((longlong)(&this->TranslucentPrimCount + 3) + (lVar28 * 4 + 7) * 4);
        if (iVar9 < 1) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        local_f0 = *(FPrimitiveLODMask *)
                    ((this->DrawCommandPacket).VisibleCachedDrawCommands + lVar28);
        uVar20 = 0;
        if ((int)uVar24 < *(int *)&pFVar7[1].Data) {
          uVar20 = ~uVar24 >> 0x1f;
        }
        if (uVar20 == 0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        memcpy(pFVar7->Data + (int)uVar24,(void *)local_f0,(longlong)iVar9 * 0x48);
      }
      iVar9 = (this->DrawCommandPacket).DynamicBuildRequests[lVar28].ArrayNum;
      pTVar31 = ((TStaticArray<TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,39,4294967295>
                  *)((longlong)FVar17 + 0x310))->Elements + lVar28;
      if (0 < iVar9) {
        uVar24 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_>
                           (8,8,iVar9,&pTVar31->AllocatorInstance,&pTVar31->ArrayNum,
                            &pTVar31->ArrayMax);
        iVar9 = (this->DrawCommandPacket).DynamicBuildRequests[lVar28].ArrayNum;
        if (iVar9 < 1) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        local_f0 = *(FPrimitiveLODMask *)((this->DrawCommandPacket).DynamicBuildRequests + lVar28);
        uVar20 = 0;
        if ((int)uVar24 < pTVar31->ArrayNum) {
          uVar20 = ~uVar24 >> 0x1f;
        }
        if (uVar20 == 0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        memcpy((pTVar31->AllocatorInstance).Data + (int)uVar24,(void *)local_f0,(longlong)iVar9 * 8)
        ;
      }
      iVar9 = (this->DrawCommandPacket).DynamicBuildFlags[lVar28].ArrayNum;
      pTVar26 = ((TStaticArray<TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,39,4294967295>
                  *)((longlong)FVar17 + 0x580))->Elements + lVar28;
      if (0 < iVar9) {
        uVar24 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
                           (1,1,iVar9,&pTVar26->AllocatorInstance,&pTVar26->ArrayNum,
                            &pTVar26->ArrayMax);
        iVar9 = (this->DrawCommandPacket).DynamicBuildFlags[lVar28].ArrayNum;
        if (iVar9 < 1) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        _Src = (this->DrawCommandPacket).DynamicBuildFlags[lVar28].AllocatorInstance.Data;
        uVar20 = 0;
        if ((int)uVar24 < pTVar26->ArrayNum) {
          uVar20 = ~uVar24 >> 0x1f;
        }
        if (uVar20 == 0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        memcpy((pTVar26->AllocatorInstance).Data + (int)uVar24,_Src,(longlong)iVar9);
      }
      piVar5 = ((TStaticArray<int,39,4294967295> *)((longlong)FVar17 + 0x270))->Elements + lVar28;
      *piVar5 = *piVar5 + (this->DrawCommandPacket).NumDynamicBuildRequestElements[lVar28];
    }
    uVar16 = _UNK_150689648;
    uVar15 = ___xmm_3f800000000000000000000000000000;
    lVar28 = lVar28 + 1;
  } while (lVar28 < 0x27);
  puVar29 = (uint *)(this->TranslucentSelfShadowPrimitives).Prims.AllocatorInstance.Data;
  iVar9 = (this->TranslucentSelfShadowPrimitives).Prims.ArrayNum;
  puVar8 = puVar29 + iVar9;
  do {
    if ((this->TranslucentSelfShadowPrimitives).Prims.ArrayNum != iVar9) {
      local_f6[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f6);
    }
    if (puVar29 == puVar8) {
      return;
    }
    local_e0 = *puVar29;
    pTVar22 = TMapBase<int,TRefCountPtr<FRHIUniformBuffer>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,TRefCountPtr<FRHIUniformBuffer>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>,TDefaultMapHashableKeyFuncs<int,TRefCountPtr<FRHIUniformBuffer>,0>_>
                          *)&pFVar11->TranslucentSelfShadowUniformBufferMap,local_e0,
                         (int *)&local_e0);
    if (pTVar22->Reference == (FRHIUniformBuffer *)0x0) {
      local_d8._64_8_ = uVar15;
      local_d8._72_8_ = uVar16;
      local_d8._112_8_ = (FRHITexture *)0x0;
      FStack_60.Data = (FScriptContainerElement *)0x0;
      local_58 = (FRHISamplerState *)0x0;
      pFStack_50 = (FRHISamplerState *)0x0;
      local_d8._80_8_ = uVar15;
      local_d8._88_8_ = uVar16;
      local_d8._96_8_ = uVar15;
      local_d8._104_8_ = uVar16;
      SetupTranslucentSelfShadowUniformParameters
                ((FProjectedShadowInfo *)0x0,(FTranslucentSelfShadowUniformParameters *)local_d8);
      pFVar23 = FTranslucentSelfShadowUniformParameters::GetStructMetadata();
      if ((pFVar23->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L"");
        if (bVar18) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      RHICreateUniformBuffer
                (&local_e8,(FRHIUniformBufferLayout *)local_d8,
                 (EUniformBufferUsage)(pFVar23->Layout).Reference,ValidateResources);
      if (pTVar22 != &local_e8) {
        this_00 = pTVar22->Reference;
        pTVar22->Reference = local_e8.Reference;
        local_e8.Reference = (FRHIUniformBuffer *)0x0;
        if (this_00 == (FRHIUniformBuffer *)0x0) goto LAB_14553ff88;
        FRHIResource::Release((FRHIResource *)this_00);
      }
      if (local_e8.Reference != (FRHIUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_e8.Reference);
      }
    }
LAB_14553ff88:
    puVar29 = puVar29 + 1;
  } while( true );
}

// LaunchComputeRelevanceTask @ 145547940

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

void __thiscall FRelevancePacket::LaunchComputeRelevanceTask(FRelevancePacket *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  ETaskPriority EVar4;
  TCommandPipe<FDynamicPrimitiveIndexList> *pTVar5;
  FTaskBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  FTaskBase *this_00;
  FTaskHandle *pFVar9;
  longlong local_18 [2];
  
  if ((this->bComputeRelevanceTaskLaunched != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bComputeRelevanceTaskLaunched",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                         ,0x4f1,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->Input).Prims.ArrayNum != 0) {
    this->bComputeRelevanceTaskLaunched = true;
    pTVar5 = (this->TaskData->DynamicMeshElements).CommandPipe;
    if (pTVar5 != (TCommandPipe<FDynamicPrimitiveIndexList> *)0x0) {
      LOCK();
      paVar2 = &pTVar5->NumCommands;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
    }
    EVar4 = (this->TaskConfig->Relevance).ComputeRelevanceTaskPriority;
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 == (FTaskBase *)0x0) {
      this_00 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FRelevancePacket::LaunchComputeRelevanceTask'::`12'::<lambda_1>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (this_00,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(1276)"
                 ,EVar4,None,None);
      this_00[1]._padding_ = (longlong)this;
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`FRelevancePacket::LaunchComputeRelevanceTask'::`12'::<lambda_1>_>::
            _vftable_;
    }
    pFVar6 = (this->PrerequisitesTask).Pimpl.Reference;
    if (pFVar6 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00,pFVar6);
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    pFVar9 = &this->ComputeRelevanceTask;
    if (pFVar9 == (FTaskHandle *)local_18) {
      if (this_00 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &this_00->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
      }
    }
    else {
      pFVar6 = (pFVar9->Pimpl).Reference;
      (pFVar9->Pimpl).Reference = this_00;
      if (pFVar6 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar6->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000145547a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)pFVar6->_padding_)(pFVar6,1);
          return;
        }
      }
    }
  }
  return;
}


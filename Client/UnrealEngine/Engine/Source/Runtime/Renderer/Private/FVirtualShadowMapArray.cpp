// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 53

// FVirtualShadowMapArray @ 14560a660

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVirtualShadowMapArray * __thiscall
FVirtualShadowMapArray::FVirtualShadowMapArray
          (FVirtualShadowMapArray *this,FVirtualShadowMapArray *param_1)

{
  int *piVar1;
  TArray<FVirtualShadowMapPerViewParameters,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FVirtualShadowMapVisualizeLightSearch,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::HLSL::FNextVirtualShadowMapData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar5;
  TArray<TRDGUniformBuffer<FVirtualShadowMapUniformParameters>_*,TSizedDefaultAllocator<32>_>
  *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  IPooledRenderTarget *pIVar9;
  FNextVirtualShadowMapData *_Src;
  float fVar10;
  float fVar11;
  longlong lVar12;
  undefined8 uVar13;
  TIntPoint<int>_u_0 TVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  float fVar19;
  int iVar20;
  FVirtualShadowMapUniformParameters *pFVar21;
  FVirtualShadowMapUniformParameters *pFVar22;
  FVirtualShadowMapUniformParameters *pFVar23;
  longlong lVar24;
  FVirtualShadowMapUniformParameters *pFVar25;
  
  this->CacheManager = param_1->CacheManager;
  lVar24 = 2;
  pFVar21 = &param_1->UniformParameters;
  pFVar22 = &this->UniformParameters;
  do {
    pFVar25 = pFVar22;
    pFVar23 = pFVar21;
    uVar15 = pFVar23->NumSinglePageShadowMaps;
    uVar16 = pFVar23->MaxPhysicalPages;
    uVar17 = pFVar23->NumShadowMapSlots;
    pFVar25->NumFullShadowMaps = pFVar23->NumFullShadowMaps;
    pFVar25->NumSinglePageShadowMaps = uVar15;
    pFVar25->MaxPhysicalPages = uVar16;
    pFVar25->NumShadowMapSlots = uVar17;
    uVar15 = pFVar23->StaticHZBArrayIndex;
    uVar16 = pFVar23->PhysicalPageRowMask;
    uVar17 = pFVar23->PhysicalPageRowShift;
    pFVar25->StaticCachedArrayIndex = pFVar23->StaticCachedArrayIndex;
    pFVar25->StaticHZBArrayIndex = uVar15;
    pFVar25->PhysicalPageRowMask = uVar16;
    pFVar25->PhysicalPageRowShift = uVar17;
    uVar18 = *(undefined4 *)&pFVar23->field_0x24;
    lVar12 = pFVar23->_padding_;
    pFVar25->PackedShadowMaskMaxLightCount = pFVar23->PackedShadowMaskMaxLightCount;
    *(undefined4 *)&pFVar25->field_0x24 = uVar18;
    pFVar25->_padding_ = lVar12;
    uVar13 = *(undefined8 *)((longlong)&(pFVar23->RecPhysicalPoolSize).field0_0x0 + 8);
    *(undefined8 *)&(pFVar25->RecPhysicalPoolSize).field0_0x0 =
         *(undefined8 *)&(pFVar23->RecPhysicalPoolSize).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar25->RecPhysicalPoolSize).field0_0x0 + 8) = uVar13;
    TVar14 = (pFVar23->PhysicalPoolSizePages).field0_0x0;
    (pFVar25->PhysicalPoolSize).field0_0x0 = (pFVar23->PhysicalPoolSize).field0_0x0;
    (pFVar25->PhysicalPoolSizePages).field0_0x0 = TVar14;
    uVar15 = pFVar23->PageTableRowMask;
    lVar12 = pFVar23->_padding_;
    pFVar25->PageTableRowShift = pFVar23->PageTableRowShift;
    pFVar25->PageTableRowMask = uVar15;
    pFVar25->_padding_ = lVar12;
    uVar13 = *(undefined8 *)((longlong)&(pFVar23->PageTableTextureSizeInvSize).field0_0x0 + 8);
    *(undefined8 *)&(pFVar25->PageTableTextureSizeInvSize).field0_0x0 =
         *(undefined8 *)&(pFVar23->PageTableTextureSizeInvSize).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar25->PageTableTextureSizeInvSize).field0_0x0 + 8) = uVar13;
    uVar13 = *(undefined8 *)
              ((longlong)&(pFVar23->PageReceiverMaskTextureSizeInvSize).field0_0x0 + 8);
    *(undefined8 *)&(pFVar25->PageReceiverMaskTextureSizeInvSize).field0_0x0 =
         *(undefined8 *)&(pFVar23->PageReceiverMaskTextureSizeInvSize).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar25->PageReceiverMaskTextureSizeInvSize).field0_0x0 + 8) =
         uVar13;
    lVar24 = lVar24 + -1;
    pFVar21 = (FVirtualShadowMapUniformParameters *)&pFVar23->bExcludeNonNaniteFromCoarsePages;
    pFVar22 = (FVirtualShadowMapUniformParameters *)&pFVar25->bExcludeNonNaniteFromCoarsePages;
  } while (lVar24 != 0);
  fVar10 = pFVar23->CoarsePagePixelThresholdDynamic;
  fVar11 = pFVar23->CoarsePagePixelThresholdStatic;
  fVar19 = pFVar23->CoarsePagePixelThresholdDynamicNanite;
  pTVar2 = &this->PerViewParameters;
  pFVar25->bExcludeNonNaniteFromCoarsePages = pFVar23->bExcludeNonNaniteFromCoarsePages;
  pFVar25->CoarsePagePixelThresholdDynamic = fVar10;
  pFVar25->CoarsePagePixelThresholdStatic = fVar11;
  pFVar25->CoarsePagePixelThresholdDynamicNanite = fVar19;
  fVar10 = pFVar23->GlobalResolutionLodBias;
  iVar7 = pFVar23->MipModeLocal;
  fVar11 = pFVar23->ScreenRayLength;
  pFVar25->SceneFrameNumber = pFVar23->SceneFrameNumber;
  pFVar25->GlobalResolutionLodBias = fVar10;
  pFVar25->MipModeLocal = iVar7;
  pFVar25->ScreenRayLength = fVar11;
  uVar15 = pFVar23->SMRTAdaptiveRayCount;
  iVar7 = pFVar23->SMRTRayCountLocal;
  iVar20 = pFVar23->SMRTSamplesPerRayLocal;
  pFVar25->NormalBias = pFVar23->NormalBias;
  pFVar25->SMRTAdaptiveRayCount = uVar15;
  pFVar25->SMRTRayCountLocal = iVar7;
  pFVar25->SMRTSamplesPerRayLocal = iVar20;
  fVar10 = pFVar23->SMRTTexelDitherScaleLocal;
  fVar11 = pFVar23->SMRTMaxSlopeBiasLocal;
  fVar19 = pFVar23->SMRTCotMaxRayAngleFromLight;
  pFVar25->SMRTExtrapolateMaxSlopeLocal = pFVar23->SMRTExtrapolateMaxSlopeLocal;
  pFVar25->SMRTTexelDitherScaleLocal = fVar10;
  pFVar25->SMRTMaxSlopeBiasLocal = fVar11;
  pFVar25->SMRTCotMaxRayAngleFromLight = fVar19;
  iVar7 = pFVar23->SMRTSamplesPerRayDirectional;
  fVar10 = pFVar23->SMRTExtrapolateMaxSlopeDirectional;
  fVar11 = pFVar23->SMRTTexelDitherScaleDirectional;
  piVar1 = &(this->PerViewParameters).ArrayMax;
  pFVar25->SMRTRayCountDirectional = pFVar23->SMRTRayCountDirectional;
  pFVar25->SMRTSamplesPerRayDirectional = iVar7;
  pFVar25->SMRTExtrapolateMaxSlopeDirectional = fVar10;
  pFVar25->SMRTTexelDitherScaleDirectional = fVar11;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->PerViewParameters).ArrayNum;
  pFVar8 = (param_1->PerViewParameters).AllocatorInstance.Data;
  (this->PerViewParameters).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,iVar7,0,&pTVar2->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x30);
  }
  this->PhysicalPagePoolRDG = param_1->PhysicalPagePoolRDG;
  (this->HZBPhysicalArray).Reference = (IPooledRenderTarget *)0x0;
  pIVar9 = (param_1->HZBPhysicalArray).Reference;
  (this->HZBPhysicalArray).Reference = pIVar9;
  if (pIVar9 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar9->_padding_ + 0x30))();
  }
  pTVar3 = &this->DebugVisualizationOutput;
  this->HZBPhysicalArrayRDG = param_1->HZBPhysicalArrayRDG;
  this->PhysicalPageMetaDataRDG = param_1->PhysicalPageMetaDataRDG;
  this->PageTableRDG = param_1->PageTableRDG;
  this->PageRequestFlagsRDG = param_1->PageRequestFlagsRDG;
  this->PageFlagsRDG = param_1->PageFlagsRDG;
  this->PageReceiverMasksRDG = param_1->PageReceiverMasksRDG;
  this->NanitePerformanceFeedbackRDG = param_1->NanitePerformanceFeedbackRDG;
  this->ThrottleBufferRDG = param_1->ThrottleBufferRDG;
  this->bThrottlingEnabled = param_1->bThrottlingEnabled;
  this->PhysicalPageListsRDG = param_1->PhysicalPageListsRDG;
  this->CachedPageInfosRDG = param_1->CachedPageInfosRDG;
  this->UncachedPageRectBoundsRDG = param_1->UncachedPageRectBoundsRDG;
  this->AllocatedPageRectBoundsRDG = param_1->AllocatedPageRectBoundsRDG;
  this->ProjectionDataRDG = param_1->ProjectionDataRDG;
  this->DirtyPageFlagsRDG = param_1->DirtyPageFlagsRDG;
  this->bHZBBuiltThisFrame = param_1->bHZBBuiltThisFrame;
  this->StatsBufferRDG = param_1->StatsBufferRDG;
  this->StatsBufferUAV = param_1->StatsBufferUAV;
  this->StatsNaniteBufferRDG = param_1->StatsNaniteBufferRDG;
  piVar1 = &(this->DebugVisualizationOutput).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->DebugVisualizationOutput).ArrayNum;
  pFVar8 = (param_1->DebugVisualizationOutput).AllocatorInstance.Data;
  (this->DebugVisualizationOutput).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
  }
  pTVar4 = &this->VisualizeLight;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->VisualizeLight).ArrayMax;
  iVar7 = (param_1->VisualizeLight).ArrayNum;
  pFVar8 = (param_1->VisualizeLight).AllocatorInstance.Data;
  (this->VisualizeLight).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x18);
  }
  pTVar5 = &this->NextData;
  this->bEnableVisualization = param_1->bEnableVisualization;
  this->bEnableNaniteVisualization = param_1->bEnableNaniteVisualization;
  piVar1 = &(this->NextData).ArrayMax;
  (pTVar5->AllocatorInstance).Data = (FNextVirtualShadowMapData *)0x0;
  iVar7 = (param_1->NextData).ArrayNum;
  _Src = (param_1->NextData).AllocatorInstance.Data;
  (this->NextData).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FNextVirtualShadowMapData>_>
              (0x10,4,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,_Src,(longlong)iVar7 << 4);
  }
  pTVar6 = &this->CachedUniformBuffers;
  this->VirtualShadowMapSetupContext = param_1->VirtualShadowMapSetupContext;
  this->NumDirectionalShadowMaps = param_1->NumDirectionalShadowMaps;
  this->NumLocalShadowMaps = param_1->NumLocalShadowMaps;
  this->NumUnreferencedShadowMaps = param_1->NumUnreferencedShadowMaps;
  this->NumSinglePageShadowMaps = param_1->NumSinglePageShadowMaps;
  this->NumShadowMapSlots = param_1->NumShadowMapSlots;
  piVar1 = &(this->CachedUniformBuffers).ArrayMax;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->CachedUniformBuffers).ArrayNum;
  pFVar8 = (param_1->CachedUniformBuffers).AllocatorInstance.Data;
  (this->CachedUniformBuffers).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar6->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
  }
  this->Scene = param_1->Scene;
  this->bUseHzbOcclusion = param_1->bUseHzbOcclusion;
  this->bInitialized = param_1->bInitialized;
  this->bEnabled = param_1->bEnabled;
  this->bCullBackfacingPixels = param_1->bCullBackfacingPixels;
  this->PageTableDummyRDG = param_1->PageTableDummyRDG;
  this->PrevProjectionData = param_1->PrevProjectionData;
  return this;
}

// <lambda_2> @ 1457c09c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

<lambda_2> * __thiscall
`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_2>::<lambda_2>
          (void *this,<lambda_2> *param_1)

{
  ForElementType<FProjectedShadowInfo_*> *pFVar1;
  int iVar2;
  FProjectedShadowInfo **_Src;
  undefined8 uVar3;
  
  pFVar1 = (ForElementType<FProjectedShadowInfo_*> *)((longlong)this + 0x18);
  *(FVirtualShadowMapArray **)this = param_1->__this;
  uVar3 = *(undefined8 *)&(param_1->Views).ArrayNum;
  *(FViewInfo **)((longlong)this + 8) = (param_1->Views).DataPtr;
  *(undefined8 *)((longlong)this + 0x10) = uVar3;
  pFVar1->Data = (FProjectedShadowInfo **)0x0;
  iVar2 = (param_1->ShadowsToAddRenderViews).ArrayNum;
  _Src = (param_1->ShadowsToAddRenderViews).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x20) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x24) = 0;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
              (8,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x24));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
  }
  *(bool *)((longlong)this + 0x28) = param_1->bHasHZBTexture;
  return this;
}

// FVirtualShadowMapArray @ 1457c17f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVirtualShadowMapArray * __thiscall
FVirtualShadowMapArray::FVirtualShadowMapArray(FVirtualShadowMapArray *this,FScene *param_1)

{
  (this->UniformParameters).RecPhysicalPoolSize.field0_0x0._s_0.W = 1.0;
  (this->UniformParameters).ProjectionData = (FRDGBufferSRV *)0x0;
  (this->UniformParameters).PageTableSampler = (FRHISamplerState *)0x0;
  (this->UniformParameters).PageTable = (FRDGTexture *)0x0;
  (this->UniformParameters).PageFlags = (FRDGTexture *)0x0;
  (this->UniformParameters).PageReceiverMasks = (FRDGTexture *)0x0;
  (this->UniformParameters).AllocatedPageRectBounds = (FRDGBufferSRV *)0x0;
  (this->UniformParameters).UncachedPageRectBounds = (FRDGBufferSRV *)0x0;
  (this->UniformParameters).PhysicalPagePool = (FRDGTexture *)0x0;
  (this->UniformParameters).CachePrimitiveAsDynamic = (FRDGBufferSRV *)0x0;
  (this->UniformParameters).PerViewData.LightGridData = (FRDGBufferSRV *)0x0;
  (this->UniformParameters).PerViewData.NumCulledLightsGrid = (FRDGBufferSRV *)0x0;
  (this->UniformParameters).PerViewData.DirectionalLightIds = (FRDGBufferSRV *)0x0;
  (this->PerViewParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerViewParameters).ArrayNum = 0;
  (this->PerViewParameters).ArrayMax = 0;
  *(undefined8 *)&(this->UniformParameters).RecPhysicalPoolSize.field0_0x0 = 0;
  (this->UniformParameters).RecPhysicalPoolSize.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->UniformParameters).PageTableTextureSizeInvSize.field0_0x0 = 0;
  (this->UniformParameters).PageTableTextureSizeInvSize.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)
   ((longlong)&(this->UniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->UniformParameters).PageTableTextureSizeInvSize.field0_0x0 + 0xc)
       = 0x3f800000;
  (this->UniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0._s_0.W = 1.0;
  this->CacheManager = (FVirtualShadowMapArrayCacheManager *)0x0;
  this->PhysicalPagePoolRDG = (FRDGTexture *)0x0;
  (this->HZBPhysicalArray).Reference = (IPooledRenderTarget *)0x0;
  this->HZBPhysicalArrayRDG = (FRDGTexture *)0x0;
  this->PhysicalPageMetaDataRDG = (FRDGBuffer *)0x0;
  this->PageTableRDG = (FRDGTexture *)0x0;
  this->PageRequestFlagsRDG = (FRDGTexture *)0x0;
  this->PageFlagsRDG = (FRDGTexture *)0x0;
  this->PageReceiverMasksRDG = (FRDGTexture *)0x0;
  this->NanitePerformanceFeedbackRDG = (FRDGBuffer *)0x0;
  this->ThrottleBufferRDG = (FRDGBuffer *)0x0;
  this->bThrottlingEnabled = false;
  this->PhysicalPageListsRDG = (FRDGBuffer *)0x0;
  this->CachedPageInfosRDG = (FRDGBuffer *)0x0;
  this->UncachedPageRectBoundsRDG = (FRDGBuffer *)0x0;
  this->AllocatedPageRectBoundsRDG = (FRDGBuffer *)0x0;
  this->ProjectionDataRDG = (FRDGBuffer *)0x0;
  this->DirtyPageFlagsRDG = (FRDGBuffer *)0x0;
  this->bHZBBuiltThisFrame = false;
  this->StatsBufferRDG = (FRDGBuffer *)0x0;
  this->StatsBufferUAV = (FRDGBufferUAV *)0x0;
  this->StatsNaniteBufferRDG = (FRDGBuffer *)0x0;
  (this->DebugVisualizationOutput).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugVisualizationOutput).ArrayNum = 0;
  (this->DebugVisualizationOutput).ArrayMax = 0;
  (this->VisualizeLight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisualizeLight).ArrayNum = 0;
  (this->VisualizeLight).ArrayMax = 0;
  this->bEnableVisualization = false;
  this->bEnableNaniteVisualization = false;
  (this->NextData).AllocatorInstance.Data = (FNextVirtualShadowMapData *)0x0;
  (this->NextData).ArrayNum = 0;
  (this->NextData).ArrayMax = 0;
  this->VirtualShadowMapSetupContext = (FVirtualShadowMapSetupContext *)0x0;
  this->NumDirectionalShadowMaps = 0;
  this->NumLocalShadowMaps = 0;
  this->NumUnreferencedShadowMaps = 0;
  this->NumSinglePageShadowMaps = 0;
  this->NumShadowMapSlots = 0;
  (this->CachedUniformBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedUniformBuffers).ArrayNum = 0;
  (this->CachedUniformBuffers).ArrayMax = 0;
  this->PageTableDummyRDG = (FRDGTexture *)0x0;
  this->PrevProjectionData = (FRDGBuffer *)0x0;
  this->Scene = param_1;
  this->bUseHzbOcclusion = true;
  this->bInitialized = false;
  this->bEnabled = false;
  this->bCullBackfacingPixels = false;
  return this;
}

// ~FVirtualShadowMapArray @ 1457c3ef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FVirtualShadowMapArray::~FVirtualShadowMapArray(FVirtualShadowMapArray *this)

{
  FScriptContainerElement *pFVar1;
  FNextVirtualShadowMapData *pFVar2;
  IPooledRenderTarget *pIVar3;
  
  pFVar1 = (this->CachedUniformBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->NextData).AllocatorInstance.Data;
  if (pFVar2 != (FNextVirtualShadowMapData *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  pFVar1 = (this->VisualizeLight).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugVisualizationOutput).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->HZBPhysicalArray).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pFVar1 = (this->PerViewParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 1457c9920

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

void __thiscall
`FVirtualShadowMapArray::RenderShadowCasterBounds'::__l19::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  RenderShadowCasterBoundsRHI
            (param_2,*(FViewInfo **)((longlong)this + 0x10),(TIntRect<int> *)((longlong)this + 0x18)
             ,*(FShadowCasterBoundsParameters **)this,*(int *)((longlong)this + 8),true);
  return;
}

// operator() @ 1457c9d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
`FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_2>::operator()
          (void *this,bool param_1,EPixelFormat param_2,wchar_t *param_3,uint param_4)

{
  FRDGTexture *pFVar1;
  undefined1 auStack_b8 [32];
  int local_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  undefined1 local_68 [64];
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_68._8_8_ = 2;
  local_68._44_4_ = 0x10001;
  local_68._49_2_ = 1;
  local_68[0x30] = '\x01';
  if (param_1) {
    local_68[0x30] = (char)(param_4 >> 1) + '\a';
  }
  local_68._52_2_ = 0xff00;
  local_68._16_4_ = 0;
  local_68._32_4_ = 0;
  local_28 = (void *)0x0;
  iStack_94 = (int)((ulonglong)**(undefined8 **)((longlong)this + 8) >> 0x20);
  iStack_8c = iStack_94 * param_4;
  local_90 = (int)**(undefined8 **)((longlong)this + 8) * param_4;
  local_20 = 0;
  local_1c = 1;
  _local_98 = CONCAT44(iStack_8c,local_90);
  local_68._0_8_ = 0x200020008;
  local_68._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_68._40_4_ = iStack_8c;
  local_68._36_4_ = local_90;
  local_68[0x33] = param_2;
  pFVar1 = FRDGBuilder::CreateTexture
                     (*(FRDGBuilder **)this,(FRDGTextureDesc *)local_68,param_3,None);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return pFVar1;
}

// operator() @ 1457cc3d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FVirtualShadowMapArray::AddVisualizePass'::__l20::<lambda_2>::operator()(void *this)

{
  uint uVar1;
  FGlobalShaderMap *this_00;
  longlong lVar2;
  code *pcVar3;
  TRefCountPtr<FRHIDepthStencilState> TVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FShaderType *pFVar8;
  FName this_01;
  undefined8 *puVar9;
  FRDGEventName *pFVar10;
  FShaderParametersMetadata *pFVar11;
  TRefCountPtr<FRHIBlendState> TVar12;
  undefined8 *puVar13;
  FParameters *pFVar14;
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined2 local_1d3;
  undefined1 local_1d1;
  FRenderTargetBinding local_1d0;
  FRDGBuilder *local_1b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1b0;
  TShaderMapRef<FScreenPassVS> local_1a0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_190;
  longlong local_178;
  undefined8 uStack_170;
  FShader *local_168;
  FShaderMapBase *pFStack_160;
  FRHIBlendState *local_158;
  FRHIDepthStencilState *pFStack_150;
  undefined8 local_148;
  undefined1 uStack_140;
  uint7 uStack_13f;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined2 local_12b;
  undefined1 local_129;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  FShader *local_e8;
  FShaderMapBase *pFStack_e0;
  FRHIBlendState *local_d8;
  FRHIDepthStencilState *pFStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  FShader *local_b8;
  FShaderMapBase *local_b0;
  FParameters *local_a8;
  undefined1 local_a0;
  undefined1 local_98 [8];
  FString local_90;
  initializer_list<FRDGResource_*> local_78;
  FRDGEventName local_68;
  
  puVar13 = (undefined8 *)0x0;
  if ((*(int *)(*(longlong *)this + 0x220) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!DebugVisualizationOutput.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                         ,0x1429,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TShaderMapRef<FScreenPassVS>::TShaderMapRef<FScreenPassVS>
            (&local_1a0,*(FGlobalShaderMap **)(*(longlong *)((longlong)this + 8) + 0x26c0));
  this_00 = *(FGlobalShaderMap **)(*(longlong *)((longlong)this + 8) + 0x26c0);
  pFVar8 = (FShaderType *)FTonemapProjectionDebugTexturePS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_1b0,pFVar8,0);
  if (local_1b0.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_98);
    ::FName::ToString((FName *)this_01,&local_90);
    FTonemapProjectionDebugTexturePS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FTonemapProjectionDebugTexturePS::GetStaticType();
  lVar2 = *(longlong *)((longlong)this + 0x18);
  puVar9 = FMemStackBase::Alloc((FMemStackBase *)(lVar2 + 0x18),0x130,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    puVar9[2] = 0;
    *puVar9 = &___7__TObject_VFParameters_FTonemapProjectionDebugTexturePS___FRDGAllocator__6B_;
    puVar9[3] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar9 + 6));
    puVar13 = puVar9;
  }
  local_1e8 = puVar13;
  if (((*(undefined8 ***)(lVar2 + 0x40) <= &local_1e8) &&
      (&local_1e8 < *(undefined8 ***)(lVar2 + 0x40) + *(int *)(lVar2 + 0x4c))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)(lVar2 + 0x48);
  if (iVar6 == *(int *)(lVar2 + 0x4c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar2 + 0x40),(int *)(lVar2 + 0x4c));
  }
  pFVar14 = (FParameters *)(puVar13 + 2);
  *(int *)(lVar2 + 0x48) = iVar6 + 1;
  *(undefined8 **)(*(longlong *)(lVar2 + 0x40) + (longlong)iVar6 * 8) = local_1e8;
  uVar1 = *(uint *)((longlong)this + 0x10);
  lVar2 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x220)) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar14->DebugTexture = *(FRDGTexture **)(*(longlong *)(lVar2 + 0x218) + (longlong)(int)uVar1 * 8)
  ;
  puVar13[3] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  *(undefined4 *)(puVar13 + 4) = *(undefined4 *)((longlong)this + 0x38);
  *(undefined4 *)((longlong)puVar13 + 0x24) = *(undefined4 *)((longlong)this + 0x3c);
  *(float *)(puVar13 + 5) = (float)GNaniteVisualizeOverdrawScale;
  local_1d0.Texture = (FRDGTexture *)**(undefined8 **)((longlong)this + 0x20);
  local_1d0.ResolveTexture = (FRDGTexture *)0x0;
  local_1d0.LoadAction = ENoAction;
  local_1d0.MipIndex = '\0';
  local_1d0.ArraySlice = -1;
  bVar5 = FRenderTargetBinding::Validate(&local_1d0);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x216,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar13[6] = local_1d0.Texture;
  puVar13[7] = local_1d0.ResolveTexture;
  puVar13[8] = CONCAT44(local_1d0._20_4_,local_1d0._16_4_);
  TVar4 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
          ::StaticResource.StateRHI;
  lVar2 = *(longlong *)((longlong)this + 8);
  TVar12 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
  if (*(int *)((longlong)this + 0x40) == 0) {
    TVar12 = TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource.StateRHI;
  }
  puVar13 = *(undefined8 **)((longlong)this + 0x30);
  puVar9 = *(undefined8 **)((longlong)this + 0x28);
  local_1e0 = *(undefined4 *)(lVar2 + 0x1bf8);
  local_1dc = *(undefined4 *)(lVar2 + 0xdd4);
  local_1d8 = *(undefined4 *)(lVar2 + 0x1bfc);
  local_1d4 = *(undefined1 *)(lVar2 + 0xde6);
  pFVar10 = FRDGEventName::FRDGEventName(&local_68,1,L"DrawTexture");
  local_1b8 = *(FRDGBuilder **)((longlong)this + 0x18);
  if ((local_1a0._0_8_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertexShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x206,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((local_1b0.ShaderContent == (FShader *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x207,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar14 == (FParameters *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShaderParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                         ,0x208,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar11 = FTonemapProjectionDebugTexturePS::FParameters::FTypeInfo::GetStructMetadata();
  local_190.ShaderContent = local_1b0.ShaderContent;
  local_190.ShaderMap = local_1b0.ShaderMap;
  ValidateShaderParameters(&local_190,pFVar11,pFVar14);
  local_78._First = (FRDGResource **)0x0;
  local_78._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl(&(local_1b0.ShaderContent)->Bindings,pFVar11,pFVar14,&local_78);
  uStack_170 = local_1a0._8_8_;
  pFStack_150 = TVar4.Reference;
  local_148 = GFilterVertexDeclaration._32_8_;
  local_138 = local_1e0;
  local_134 = local_1dc;
  local_130 = local_1d8;
  local_12c = local_1d4;
  local_12b = local_1d3;
  local_129 = local_1d1;
  local_128 = *puVar9;
  local_120 = puVar9[1];
  local_118 = puVar9[2];
  local_110 = *puVar13;
  local_108 = puVar13[1];
  pFStack_160 = local_1b0.ShaderMap;
  local_100 = puVar13[2];
  local_178 = local_1a0._0_8_;
  local_f8 = local_1a0._0_8_;
  uStack_f0 = local_1a0._8_8_;
  local_168 = local_1b0.ShaderContent;
  local_e8 = local_1b0.ShaderContent;
  pFStack_e0 = local_1b0.ShaderMap;
  uStack_140 = 0;
  lStack_c0 = (ulonglong)uStack_13f << 8;
  pFStack_d0 = TVar4.Reference;
  local_b8 = local_1b0.ShaderContent;
  local_c8 = GFilterVertexDeclaration._32_8_;
  local_b0 = local_1b0.ShaderMap;
  local_a0 = 0;
  local_158 = TVar12.Reference;
  local_d8 = TVar12.Reference;
  local_a8 = pFVar14;
  pFVar11 = FTonemapProjectionDebugTexturePS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGBuilder::
  AddPassInternal<FTonemapProjectionDebugTexturePS::FParameters,_AddDrawScreenPass<FTonemapProjectionDebugTexturePS>_::__l2::<lambda_1>_>
            (local_1b8,pFVar10,pFVar11,pFVar14,Raster,(<lambda_1> *)&local_138);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1457cc970

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

void __thiscall
`FVirtualShadowMapArray::RenderShadowCasterBounds'::__l20::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  RenderShadowCasterBoundsRHI
            (param_2,*(FViewInfo **)((longlong)this + 0x10),(TIntRect<int> *)((longlong)this + 0x18)
             ,*(FShadowCasterBoundsParameters **)this,*(int *)((longlong)this + 8),false);
  return;
}

// operator() @ 1457cc9b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_2>::operator()
          (void *this,
          TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FViewInfo *pFVar4;
  FProjectedShadowInfo *pFVar5;
  FVirtualShadowMapArray *this_00;
  code *pcVar6;
  float fVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  undefined4 uStack_5c;
  TArrayView<FViewInfo_const_,int> local_58 [2];
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4066,"AddNonNaniteRenderViews",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
               ,0xfe2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4066);
  }
  fVar7 = __real_3f800000;
  puVar10 = *(undefined8 **)((longlong)this + 0x18);
  iVar2 = *(int *)((longlong)this + 0x20);
  local_res20 = puVar10 + iVar2;
  while( true ) {
    puVar8 = local_res20;
    if (*(int *)((longlong)this + 0x20) != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FProjectedShadowInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (puVar10 == puVar8) break;
    pFVar4 = *(FViewInfo **)((longlong)this + 8);
    pFVar5 = (FProjectedShadowInfo *)*puVar10;
    this_00 = *(FVirtualShadowMapArray **)this;
    bVar1 = *(bool *)((longlong)this + 0x28);
    iVar3 = *(int *)((longlong)this + 0x10);
    if ((pFVar5->bWholeSceneShadow == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ProjectedShadowInfo->bWholeSceneShadow",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                           ,0x1245,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar5->VirtualShadowMapClipmap).Object == (FVirtualShadowMapClipmap *)0x0) {
      local_58[0]._12_4_ = uStack_5c;
      local_58[0].ArrayNum = iVar3;
      local_58[0].DataPtr = pFVar4;
      FVirtualShadowMapArray::AddRenderViewsLocal(this_00,pFVar5,local_58,fVar7,bVar1,false,param_1)
      ;
      puVar10 = puVar10 + 1;
    }
    else {
      if ((pFVar5->DependentView == (FViewInfo *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ProjectedShadowInfo->DependentView != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                             ,0x1249,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVirtualShadowMapArray::AddRenderViewsClipmap
                (this_00,&pFVar5->VirtualShadowMapClipmap,pFVar5->DependentView,fVar7,bVar1,false,
                 param_1);
      puVar10 = puVar10 + 1;
    }
  }
  FVirtualShadowMapArray::CreateMipViews(*(FVirtualShadowMapArray **)this,param_1);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1457ccd90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
`FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_3>::operator()
          (void *this,FRDGTexture *param_1,uint param_2,uint param_3,bool param_4)

{
  FParameters *pFVar1;
  EUniformBufferBindingFlags EVar2;
  longlong lVar3;
  longlong lVar4;
  FPerPageShaderDispatcher *this_00;
  code *pcVar5;
  FRDGTexture *pFVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FRDGTextureUAV *pFVar10;
  undefined8 *puVar11;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar12;
  FShaderParametersMetadata *pFVar13;
  FGlobalShaderMap *this_01;
  FShaderType *pFVar14;
  FName this_02;
  FRDGEventName *pFVar15;
  byte bVar16;
  undefined8 *puVar17;
  uint uVar18;
  FRDGTextureUAVDesc local_108;
  undefined8 *local_f0;
  FRDGTextureUAVDesc local_e8;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *local_c8;
  EUniformBufferBindingFlags EStack_c0;
  undefined7 uStack_bf;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b8;
  TShaderRefBase<FClearPageTableCS,FShaderMapPointerTable> local_a8;
  undefined1 local_98 [8];
  FString local_90;
  FRDGEventName local_80;
  FRDGEventName local_68;
  
  local_e8._padding_._0_1_ = (param_1->Desc).field_0x34;
  puVar17 = (undefined8 *)0x0;
  local_e8._padding_._1_1_ = 0;
  local_e8._padding_._2_4_ = 0;
  local_e8._padding_._6_1_ = 0;
  local_e8._padding_._0_1_ = 0;
  local_e8.Texture = param_1;
  pFVar10 = FRDGBuilder::CreateUAV(*(FRDGBuilder **)this,&local_e8,None);
  lVar3 = *(longlong *)this;
  puVar11 = FMemStackBase::Alloc((FMemStackBase *)(lVar3 + 0x18),0x90,0x10);
  if (puVar11 == (undefined8 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    puVar11[2] = 0;
    *puVar11 = &___7__TObject_VFParameters_FClearPageTableCS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar11 + 3) = 1;
    puVar11[4] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar17 = puVar11;
  }
  local_f0 = puVar17;
  if (((*(undefined8 ***)(lVar3 + 0x40) <= &local_f0) &&
      (&local_f0 < *(undefined8 ***)(lVar3 + 0x40) + *(int *)(lVar3 + 0x4c))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar3 + 0x48);
  if (iVar8 == *(int *)(lVar3 + 0x4c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar3 + 0x40),(int *)(lVar3 + 0x4c));
  }
  pFVar1 = (FParameters *)(puVar17 + 2);
  *(int *)(lVar3 + 0x48) = iVar8 + 1;
  *(undefined8 **)(*(longlong *)(lVar3 + 0x40) + (longlong)iVar8 * 8) = local_f0;
  pTVar12 = FVirtualShadowMapArray::GetUncachedUniformBuffer
                      (*(FVirtualShadowMapArray **)((longlong)this + 8),*(FRDGBuilder **)this);
  pFVar13 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  EVar2 = pFVar13->BindingFlags;
  *(uint *)(puVar17 + 8) = param_2;
  EStack_c0 = Static;
  if (EVar2 != StaticAndShader) {
    EStack_c0 = EVar2;
  }
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)&pFVar1->VirtualShadowMap = pTVar12;
  puVar17[3] = CONCAT71(uStack_bf,EStack_c0);
  puVar17[9] = pFVar10;
  *(uint *)((longlong)puVar17 + 0x44) = param_3;
  bVar16 = (param_1->Desc).field_0x30;
  local_c8 = pTVar12;
  if (1 < bVar16) {
    if ((8 < bVar16) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("int(Dest->Desc.NumMips) - 1 <= PassParameters->OutDestBufferMips.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                           ,0x8e4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar16 = (param_1->Desc).field_0x30;
    uVar18 = 1;
    if (1 < bVar16) {
      do {
        local_108._padding_._0_1_ = (param_1->Desc).field_0x34;
        lVar3 = *(longlong *)this;
        local_108._padding_._2_4_ = 0;
        local_108._padding_._6_1_ = 0;
        local_108._padding_._0_1_ = '\0';
        local_108._padding_._1_1_ = (undefined1)uVar18;
        local_108.Texture = param_1;
        FRDGUserValidation::ValidateCreateUAV((FRDGUserValidation *)(lVar3 + 0x700),&local_108);
        pFVar6 = local_108.Texture;
        pFVar10 = FMemStackBase::Alloc((FMemStackBase *)(lVar3 + 0x18),0x50,8);
        lVar4 = pFVar6->_padding_;
        *(byte *)&pFVar10->_padding_ = (byte)pFVar10->_padding_ & 0xfe;
        pFVar10->_padding_ = lVar4;
        pFVar10->_padding_ = 0;
        *(undefined1 *)&pFVar10->_padding_ = 0;
        *(undefined8 *)((longlong)&pFVar10->_padding_ + 4) = 0xffffffffffffffff;
        *(undefined1 *)&pFVar10->_padding_ = 0;
        pFVar10->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
        *(undefined1 *)&(pFVar10->Desc)._padding_ = (undefined1)local_108._padding_;
        *(undefined1 *)((longlong)&(pFVar10->Desc)._padding_ + 1) = local_108._padding_._1_1_;
        *(undefined2 *)((longlong)&(pFVar10->Desc)._padding_ + 2) = local_108._padding_._2_2_;
        *(undefined2 *)((longlong)&(pFVar10->Desc)._padding_ + 4) = local_108._padding_._4_2_;
        *(undefined1 *)&(pFVar10->Desc)._padding_ = 0;
        *(undefined1 *)((longlong)&(pFVar10->Desc)._padding_ + 6) = local_108._padding_._6_1_;
        *(char *)&(pFVar10->Desc)._padding_ = (char)local_108._padding_;
        if ((char)local_108._padding_ != '\0') {
          *(undefined1 *)((longlong)&(pFVar10->Desc)._padding_ + 7) = local_108._padding_._7_1_;
        }
        (pFVar10->Desc).Texture = local_108.Texture;
        iVar8 = *(int *)(lVar3 + 0x1e0);
        if (iVar8 == *(int *)(lVar3 + 0x1e4)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                            (0x808,(ForElementType<FRDGView_*> *)(lVar3 + 0x1d8),
                             (int *)(lVar3 + 0x1e4));
        }
        *(int *)(lVar3 + 0x1e0) = iVar8 + 1;
        ((ForElementType<FRDGView_*> *)(lVar3 + 0x1d8))->Data[iVar8] = (FRDGView *)pFVar10;
        *(int *)((longlong)&pFVar10->_padding_ + 4) = *(int *)(lVar3 + 0x1e0) + -1;
        FRDGUserValidation::ValidateCreateUAV((FRDGUserValidation *)(lVar3 + 0x700),pFVar10);
        uVar9 = uVar18 - 1;
        uVar18 = uVar18 + 1;
        puVar17[(ulonglong)uVar9 + 10] = pFVar10;
        bVar16 = (param_1->Desc).field_0x30;
      } while (uVar18 < bVar16);
    }
  }
  this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                               [*(int *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x280) +
                                        8)]);
  if (bVar16 == 1) {
    iVar8 = 2;
  }
  else if (bVar16 == 7) {
    iVar8 = 1;
  }
  else {
    if ((bVar16 != 8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = 0;
  }
  pFVar14 = (FShaderType *)FClearPageTableCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_01,&local_b8,pFVar14,iVar8);
  if (local_b8.ShaderContent == (FShader *)0x0) {
    this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_98);
    ::FName::ToString((FName *)this_02,&local_90);
    FClearPageTableCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FClearPageTableCS::GetStaticType();
  local_a8.ShaderContent = (FClearPageTableCS *)local_b8.ShaderContent;
  local_a8.ShaderMap = local_b8.ShaderMap;
  this_00 = *(FPerPageShaderDispatcher **)(*(longlong *)((longlong)this + 8) + 0x250);
  if (param_4) {
    pFVar15 = FRDGEventName::FRDGEventName(&local_80,L"ClearPageTableDir(%s Size=%ux%u texels)");
    FPerPageShaderDispatcher::AddPass<FClearPageTableCS>
              (this_00 + 1,*(FRDGBuilder **)this,pFVar15,&local_a8,pFVar1);
  }
  else {
    pFVar15 = FRDGEventName::FRDGEventName(&local_68,L"ClearPageTable(%s Size=%ux%u texels)");
    FPerPageShaderDispatcher::AddPass<FClearPageTableCS>
              (this_00,*(FRDGBuilder **)this,pFVar15,&local_a8,pFVar1);
    local_80.FormattedEventName.Data.AllocatorInstance.Data =
         local_68.FormattedEventName.Data.AllocatorInstance.Data;
  }
  if (local_80.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1457cdec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
`FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_4>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FRDGTexture *pFVar4;
  FRDGTextureUAV *pFVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_c8 [32];
  FRDGTextureUAVDesc local_a8;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88 [64];
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  plVar6 = *(longlong **)this;
  if (plVar6[0x52] == 0) {
    if (((TRefCountPtr<IPooledRenderTarget> *)(*plVar6 + 0x3e0))->Reference ==
        (IPooledRenderTarget *)0x0) {
      uVar7 = 0;
      local_3c = 1;
      local_90 = 0x80;
      local_88._0_8_ = 0x200020008;
      local_88._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      uStack_8c = 0xc0;
      local_88._36_8_ = 0xc000000080;
      local_88._8_8_ = 2;
      local_88._16_4_ = 0;
      local_88._32_4_ = 0;
      local_88._44_4_ = 0x10001;
      local_88._48_4_ = 0x1c000108;
      local_88._52_2_ = 0xff00;
      local_48 = (void *)0x0;
      local_40 = 0;
      pFVar4 = FRDGBuilder::CreateTexture
                         (*(FRDGBuilder **)((longlong)this + 8),(FRDGTextureDesc *)local_88,
                          L"Shadow.Virtual.PageTableDummy",None);
      *(FRDGTexture **)(*(longlong *)this + 0x290) = pFVar4;
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      plVar6 = *(longlong **)this;
      if (*(char *)(plVar6[0x52] + 0xb0) != '\0') {
        do {
          lVar1 = plVar6[0x52];
          lVar2 = *(longlong *)((longlong)this + 8);
          local_a8._padding_._0_1_ = *(undefined1 *)(lVar1 + 0xb4);
          local_a8.Texture._0_4_ = (undefined4)lVar1;
          local_a8.Texture._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
          local_a8._padding_._1_1_ = (undefined1)uVar7;
          local_a8._padding_._2_4_ = 0;
          local_a8._padding_._6_1_ = 0;
          local_a8._padding_._0_1_ = '\0';
          FRDGUserValidation::ValidateCreateUAV((FRDGUserValidation *)(lVar2 + 0x700),&local_a8);
          lVar1 = CONCAT44(local_a8.Texture._4_4_,local_a8.Texture._0_4_);
          pFVar5 = FMemStackBase::Alloc((FMemStackBase *)(lVar2 + 0x18),0x50,8);
          lVar1 = *(longlong *)(lVar1 + 8);
          *(byte *)&pFVar5->_padding_ = (byte)pFVar5->_padding_ & 0xfe;
          pFVar5->_padding_ = lVar1;
          pFVar5->_padding_ = 0;
          *(undefined1 *)&pFVar5->_padding_ = 0;
          *(undefined8 *)((longlong)&pFVar5->_padding_ + 4) = 0xffffffffffffffff;
          *(undefined1 *)&pFVar5->_padding_ = 0;
          pFVar5->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
          *(undefined1 *)&(pFVar5->Desc)._padding_ = (undefined1)local_a8._padding_;
          *(undefined1 *)((longlong)&(pFVar5->Desc)._padding_ + 1) = local_a8._padding_._1_1_;
          *(undefined2 *)((longlong)&(pFVar5->Desc)._padding_ + 2) = local_a8._padding_._2_2_;
          *(undefined2 *)((longlong)&(pFVar5->Desc)._padding_ + 4) = local_a8._padding_._4_2_;
          *(undefined1 *)&(pFVar5->Desc)._padding_ = 0;
          *(undefined1 *)((longlong)&(pFVar5->Desc)._padding_ + 6) = local_a8._padding_._6_1_;
          *(char *)&(pFVar5->Desc)._padding_ = (char)local_a8._padding_;
          if ((char)local_a8._padding_ != '\0') {
            *(undefined1 *)((longlong)&(pFVar5->Desc)._padding_ + 7) = local_a8._padding_._7_1_;
          }
          (pFVar5->Desc).Texture =
               (FRDGTexture *)CONCAT44(local_a8.Texture._4_4_,local_a8.Texture._0_4_);
          iVar3 = *(int *)(lVar2 + 0x1e0);
          if (iVar3 == *(int *)(lVar2 + 0x1e4)) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                              (0x808,(ForElementType<FRDGView_*> *)(lVar2 + 0x1d8),
                               (int *)(lVar2 + 0x1e4));
          }
          *(int *)(lVar2 + 0x1e0) = iVar3 + 1;
          ((ForElementType<FRDGView_*> *)(lVar2 + 0x1d8))->Data[iVar3] = (FRDGView *)pFVar5;
          *(int *)((longlong)&pFVar5->_padding_ + 4) = *(int *)(lVar2 + 0x1e0) + -1;
          FRDGUserValidation::ValidateCreateUAV((FRDGUserValidation *)(lVar2 + 0x700),pFVar5);
          AddClearUAVPass(*(FRDGBuilder **)((longlong)this + 8),pFVar5,0,Compute);
          plVar6 = *(longlong **)this;
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(byte *)(plVar6[0x52] + 0xb0));
      }
      FRDGBuilder::QueueTextureExtraction
                (*(FRDGBuilder **)((longlong)this + 8),(FRDGTexture *)plVar6[0x52],
                 (TRefCountPtr<IPooledRenderTarget> *)(*plVar6 + 0x3e0),None);
    }
    else {
      pFVar4 = FRDGBuilder::RegisterExternalTexture
                         (*(FRDGBuilder **)((longlong)this + 8),
                          (TRefCountPtr<IPooledRenderTarget> *)(*plVar6 + 0x3e0),None);
      *(FRDGTexture **)(*(longlong *)this + 0x290) = pFVar4;
    }
    plVar6 = *(longlong **)this;
  }
  return (FRDGTexture *)plVar6[0x52];
}

// operator() @ 1457ce1c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGUniformBuffer<FShadowDepthPassUniformParameters> * __thiscall
`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l2::<lambda_4>::operator()
          (void *this,bool param_1)

{
  FShadowDepthPassUniformParameters *pFVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  TRDGUniformBuffer<FShadowDepthPassUniformParameters> *pTVar9;
  FRDGBufferSRV *pFVar10;
  FRDGTextureUAV *pFVar11;
  FShaderParametersMetadata *pFVar12;
  undefined8 *puVar13;
  undefined8 *local_98;
  FRDGTextureUAVDesc local_90;
  FRDGBufferSRVDesc local_78;
  FRDGBufferSRVDesc local_58;
  FRDGBufferSRVDesc local_38;
  
  lVar2 = *(longlong *)((longlong)this + 0x10);
  puVar8 = FMemStackBase::Alloc((FMemStackBase *)(lVar2 + 0x18),0x460,0x10);
  puVar13 = (undefined8 *)0x0;
  if (puVar8 == (undefined8 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TRDGUniformBuffer<FShadowDepthPassUniformParameters> *)(*pcVar4)();
      return pTVar9;
    }
  }
  else {
    puVar8[2] = 0;
    *puVar8 = &___7__TObject_VFShadowDepthPassUniformParameters___FRDGAllocator__6B_;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0x10] = 0;
    puVar8[0x22] = 0;
    *(undefined4 *)(puVar8 + 0x23) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x11c) = 0x3f800000;
    puVar8[0x87] = 0;
    puVar8[0x88] = 0;
    puVar8[0x89] = 0;
    puVar8[0x8a] = 0;
    puVar8[0x8b] = 0;
    puVar13 = puVar8;
  }
  local_98 = puVar13;
  if ((*(undefined8 ***)(lVar2 + 0x40) <= &local_98) &&
     (&local_98 < *(undefined8 ***)(lVar2 + 0x40) + *(int *)(lVar2 + 0x4c))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TRDGUniformBuffer<FShadowDepthPassUniformParameters> *)(*pcVar4)();
      return pTVar9;
    }
  }
  iVar7 = *(int *)(lVar2 + 0x48);
  if (iVar7 == *(int *)(lVar2 + 0x4c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar2 + 0x40),(int *)(lVar2 + 0x4c));
  }
  pFVar1 = (FShadowDepthPassUniformParameters *)(puVar13 + 2);
  *(int *)(lVar2 + 0x48) = iVar7 + 1;
  *(undefined8 **)(*(longlong *)(lVar2 + 0x40) + (longlong)iVar7 * 8) = local_98;
  if (*(longlong *)(*(longlong *)this + 0x170) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhysicalPagePoolRDG != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0xff4,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TRDGUniformBuffer<FShadowDepthPassUniformParameters> *)(*pcVar4)();
      return pTVar9;
    }
  }
  uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  puVar13[0x12] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  puVar13[0x13] = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  puVar13[0x14] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  puVar13[0x15] = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  puVar13[0x16] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  puVar13[0x17] = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  puVar13[0x18] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  puVar13[0x19] = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  puVar13[0x1a] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  puVar13[0x1b] = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  puVar13[0x1c] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  puVar13[0x1d] = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  puVar13[0x1e] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  puVar13[0x1f] = uVar5;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  puVar13[0x20] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  puVar13[0x21] = uVar5;
  puVar13[0x22] = 0;
  *(undefined4 *)(puVar13 + 0x23) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x11c) = 0x3f800000;
  *(undefined4 *)(puVar13 + 0x86) = 1;
  puVar13[0x87] = *(undefined8 *)(*(longlong *)this + 400);
  local_78.Buffer = (FRDGBuffer *)**(longlong **)((longlong)this + 8);
  local_78._padding_._4_4_ = 0;
  local_78._padding_._0_4_ = 0xffffffff;
  local_78._padding_ = 0;
  local_78._padding_._0_1_ = 0;
  if ((((local_78.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_78._padding_._0_1_ = 0x1c;
  }
  pFVar10 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)((longlong)this + 0x10),&local_78);
  puVar13[0x88] = pFVar10;
  local_58.Buffer = *(FRDGBuffer **)(*(longlong *)this + 0x1e0);
  local_58._padding_._0_1_ = 0;
  local_58._padding_._4_4_ = 0;
  local_58._padding_._0_4_ = 0xffffffff;
  local_58._padding_ = 0;
  if ((((local_58.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_58._padding_._0_1_ = 0x1c;
  }
  pFVar10 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)((longlong)this + 0x10),&local_58);
  puVar13[0x89] = pFVar10;
  local_38.Buffer = *(FRDGBuffer **)(*(longlong *)this + 0x1d8);
  local_38._padding_._0_1_ = 0;
  local_38._padding_._4_4_ = 0;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_38._padding_._0_1_ = 0x1c;
  }
  pFVar10 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)((longlong)this + 0x10),&local_38);
  puVar13[0x8a] = pFVar10;
  local_90._padding_._1_1_ = 0;
  local_90._padding_._2_4_ = 0;
  local_90._padding_._6_1_ = 0;
  local_90.Texture = *(FRDGTexture **)(*(longlong *)this + 0x170);
  local_90._padding_._0_1_ = 0;
  local_90._padding_._0_1_ = ((local_90.Texture)->Desc).field_0x34;
  pFVar11 = FRDGBuilder::CreateUAV(*(FRDGBuilder **)((longlong)this + 0x10),&local_90,SkipBarrier);
  puVar13[0x8b] = pFVar11;
  SetupSceneTextureUniformParameters
            (*(FRDGBuilder **)((longlong)this + 0x10),*(FSceneTextures **)((longlong)this + 0x18),
             *(Type *)(*(longlong *)(*(longlong *)this + 0x280) + 8),None,
             (FSceneTextureUniformParameters *)pFVar1);
  *(float *)(puVar13 + 0x24) = (float)param_1;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  pFVar12 = FShadowDepthPassUniformParameters::GetStructMetadata();
  FRDGUserValidation::ValidateCreateUniformBuffer
            ((FRDGUserValidation *)(lVar2 + 0x700),pFVar1,pFVar12);
  pFVar12 = FShadowDepthPassUniformParameters::GetStructMetadata();
  pwVar3 = pFVar12->ShaderVariableName;
  pTVar9 = FMemStackBase::Alloc((FMemStackBase *)(lVar2 + 0x18),0x50,8);
  pTVar9 = TRDGUniformBuffer<FShadowDepthPassUniformParameters>::
           TRDGUniformBuffer<FShadowDepthPassUniformParameters>(pTVar9,pFVar1,pwVar3);
  iVar7 = *(int *)(lVar2 + 0x1f0);
  if (iVar7 == *(int *)(lVar2 + 500)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_>
                      (0x808,(ForElementType<FRDGUniformBuffer_*> *)(lVar2 + 0x1e8),
                       (int *)(lVar2 + 500));
  }
  *(int *)(lVar2 + 0x1f0) = iVar7 + 1;
  ((ForElementType<FRDGUniformBuffer_*> *)(lVar2 + 0x1e8))->Data[iVar7] =
       (FRDGUniformBuffer *)pTVar9;
  *(int *)&pTVar9->_padding_ = *(int *)(lVar2 + 0x1f0) + -1;
  FRDGUserValidation::ValidateCreateUniformBuffer
            ((FRDGUserValidation *)(lVar2 + 0x700),(FRDGUniformBuffer *)pTVar9);
  return pTVar9;
}

// operator() @ 1457ce650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l87::<lambda_7>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FRHIBreadcrumbAllocator *this_00;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStackY_238 [32];
  FString local_1f8;
  FRHIBreadcrumbScope local_1e8;
  undefined1 local_1d8;
  FInstanceCullingDrawParams local_1c8;
  uint uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  FRHIRenderPassInfo local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  FRHIRenderPassInfo::FRHIRenderPassInfo(&local_148);
  uVar9 = 0;
  local_148.ResolveRect.X2 = 0x4000;
  local_148.ResolveRect.X1 = 0;
  local_148.ResolveRect.Y1 = 0;
  local_148.ResolveRect.Y2 = 0x4000;
  FRHICommandList::BeginRenderPass(param_2,&local_148,L"RasterizeVirtualShadowMaps(Non-Nanite)");
  FRHICommandList::SetViewport(param_2,0.0,0.0,0.0,__real_46800000,__real_46800000,__real_3f800000);
  uVar11 = 0;
  uVar12 = uVar9;
  if (0 < *(int *)((longlong)this + 0x20)) {
    do {
      uVar8 = (uint)uVar9;
      uVar10 = ~uVar8 >> 0x1f;
      uVar5 = uVar11;
      if ((int)uVar8 < *(int *)((longlong)this + 0x20)) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)(uVar12 + *(longlong *)((longlong)this + 0x18));
      lVar2 = *(longlong *)this;
      local_1c8.DrawIndirectArgsBuffer._0_8_ = *(undefined8 *)(lVar2 + 0x30);
      local_1c8.DrawIndirectArgsBuffer._8_8_ = *(undefined8 *)(lVar2 + 0x38);
      local_1c8.InstanceIdOffsetBuffer._0_8_ = *(undefined8 *)(lVar2 + 0x40);
      local_1c8.InstanceIdOffsetBuffer._8_8_ = *(undefined8 *)(lVar2 + 0x48);
      local_1c8._32_8_ = *(undefined8 *)(lVar2 + 0x50);
      local_1c8._padding_ = *(longlong *)(lVar2 + 0x58);
      local_1c8.InstanceCulling._0_8_ = *(undefined8 *)(lVar2 + 0x60);
      local_1c8.InstanceCulling._8_8_ = *(undefined8 *)(lVar2 + 0x68);
      local_1c8.Scene._0_8_ = *(undefined8 *)(lVar2 + 0x70);
      local_1c8.Scene._8_8_ = *(undefined8 *)(lVar2 + 0x78);
      local_1c8.BatchedPrimitive._0_8_ = *(undefined8 *)(lVar2 + 0x80);
      local_1c8.BatchedPrimitive._8_8_ = *(undefined8 *)(lVar2 + 0x88);
      uVar5 = uVar11;
      if ((int)uVar8 < *(int *)((longlong)this + 0x10)) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 8) + uVar12) + 0x54);
      uVar6 = uVar11;
      if ((int)uVar8 < *(int *)((longlong)this + 0x10)) {
        uVar6 = uVar10;
      }
      local_1c8.IndirectArgsByteOffset = uVar5;
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
      local_1c8.InstanceDataByteOffset =
           *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 8) + uVar12) + 0x50);
      local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Data.ArrayNum = 0;
      local_1f8.Data.ArrayMax = 0;
      if (GVSMShowLightDrawEvents != 0) {
        FSceneRenderer::GetLightNameForDrawEvent
                  (*(FLightSceneProxy **)(*(longlong *)(lVar1 + 0xb70) + 0x28),&local_1f8);
      }
      local_1d8 = 0;
      if (GVSMShowLightDrawEvents == 0) {
        FParallelMeshDrawCommandPass::Draw
                  ((FParallelMeshDrawCommandPass *)(lVar1 + 0xc70),param_2,&local_1c8);
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          local_158 = 0;
          uStack_154 = 0;
          ::Desc._12_8_ = ZEXT48(uStack_15c);
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_BatchedNonNanit;
          ::Desc._padding_ = (longlong)u__s;
          ::Desc._padding_._0_4_ = 0x1075;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l87::<lambda_7>::
                 operator()'::__l13::<lambda_1>::operator()<FString_&>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        this_00 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_2);
        pTVar7 = FRHIBreadcrumbAllocator::
                 Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_&,FString_&>
                           (this_00,this_00,&::Desc,&local_1f8);
        FRHIBreadcrumbScope::FRHIBreadcrumbScope
                  (&local_1e8,(FRHIComputeCommandList *)param_2,(FRHIBreadcrumbNode *)pTVar7);
        local_1d8 = 1;
        FParallelMeshDrawCommandPass::Draw
                  ((FParallelMeshDrawCommandPass *)(lVar1 + 0xc70),param_2,&local_1c8);
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_1e8);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar8 + 1) < *(int *)((longlong)this + 0x20));
  }
  FRHICommandList::EndRenderPass(param_2);
  if (local_148.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_148.ShadingRateTexture.Reference);
  }
  return;
}

// operator() @ 1457cea50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FVirtualShadowMapArray::BeginMarkPages'::__l166::<lambda_7>::operator()
          (void *this,EVirtualShadowMapProjectionInputType param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  FRDGBuffer *pFVar7;
  FRDGBuilder *pFVar8;
  code *pcVar9;
  FRDGTextureUAV *pFVar10;
  undefined8 uVar11;
  TIntPoint<int>_u_0 TVar12;
  float fVar13;
  float fVar14;
  TConsoleVariableData<int> *pTVar15;
  TConsoleVariableData<int> *pTVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  FParameters *pFVar21;
  longlong lVar22;
  FRDGTexture *pFVar23;
  TRDGUniformBuffer<FHairStrandsViewUniformParameters> *pTVar24;
  FShaderParametersMetadata *pFVar25;
  FRDGBufferSRV *pFVar26;
  FRDGEventName *pFVar27;
  int iVar28;
  uint uVar29;
  longlong *plVar30;
  bool bVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_198 [32];
  TShaderPermutationDomain<FGeneratePageFlagsFromPixelsCS::FInputType,FGeneratePageFlagsFromPixelsCS::FWaterDepth,FGeneratePageFlagsFromPixelsCS::FTranslucencyDepth,FGeneratePageFlagsFromPixelsCS::FThrottling>
  local_150;
  TShaderPermutationDomain<FGeneratePageFlagsFromPixelsCS::FInputType,FGeneratePageFlagsFromPixelsCS::FWaterDepth,FGeneratePageFlagsFromPixelsCS::FTranslucencyDepth,FGeneratePageFlagsFromPixelsCS::FThrottling>
  local_148 [2];
  undefined8 local_138;
  EUniformBufferBindingFlags EStack_130;
  undefined7 uStack_12f;
  longlong local_128;
  TIntVector3<int>_u_0 local_118;
  undefined4 uStack_10c;
  FRDGBufferSRVDesc local_108;
  TShaderRefBase<FGeneratePageFlagsFromPixelsCS,FShaderMapPointerTable> local_e8;
  TShaderRefBase<FGeneratePageFlagsFromPixelsCS,FShaderMapPointerTable> local_d8;
  FRDGEventName local_c8;
  FRDGEventName local_b0;
  undefined1 local_98 [40];
  longlong *local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar18 = 0;
  pFVar21 = FRDGAllocator::Alloc<FGeneratePageFlagsFromPixelsCS::FParameters>
                      ((FRDGAllocator *)(*(longlong *)this + 0x18));
  puVar4 = *(undefined8 **)((longlong)this + 8);
  uVar5 = puVar4[1];
  *(undefined8 *)&(pFVar21->Base).MarkingParameters.VirtualShadowMap = *puVar4;
  *(undefined8 *)&(pFVar21->Base).MarkingParameters.VirtualShadowMap.field_0x8 = uVar5;
  pFVar10 = (FRDGTextureUAV *)puVar4[3];
  (pFVar21->Base).MarkingParameters.OutPageRequestFlags = (FRDGTextureUAV *)puVar4[2];
  (pFVar21->Base).MarkingParameters.OutPageReceiverMasks = pFVar10;
  uVar5 = puVar4[5];
  *(undefined8 *)&(pFVar21->Base).SceneTexturesStruct = puVar4[4];
  *(undefined8 *)&(pFVar21->Base).SceneTexturesStruct.field_0x8 = uVar5;
  uVar5 = puVar4[7];
  *(undefined8 *)&(pFVar21->Base).View = puVar4[6];
  *(undefined8 *)&(pFVar21->Base).View.field_0x8 = uVar5;
  uVar5 = puVar4[9];
  *(undefined8 *)&(pFVar21->Base).ForwardLightStruct = puVar4[8];
  *(undefined8 *)&(pFVar21->Base).ForwardLightStruct.field_0x8 = uVar5;
  lVar6 = puVar4[0xb];
  (pFVar21->Base).DirectionalLightIds = (FRDGBufferSRV *)puVar4[10];
  (pFVar21->Base)._padding_ = lVar6;
  uVar5 = puVar4[0xd];
  *(undefined8 *)&(pFVar21->Base).Substrate = puVar4[0xc];
  *(undefined8 *)&(pFVar21->Base).Substrate.field_0x8 = uVar5;
  uVar5 = puVar4[0xe];
  uVar11 = puVar4[0xf];
  (pFVar21->Base).PageDilationBorderSizeDirectional = (float)(int)uVar5;
  (pFVar21->Base).PageDilationBorderSizeLocal = (float)(int)((ulonglong)uVar5 >> 0x20);
  (pFVar21->Base).bCullBackfacingPixels = (int)uVar11;
  (pFVar21->Base).MipModeLocal = (int)((ulonglong)uVar11 >> 0x20);
  uVar5 = puVar4[0x10];
  uVar11 = puVar4[0x11];
  (pFVar21->Base).FirstPersonPixelRequestBias = (float)(int)uVar5;
  (pFVar21->Base).FirstPersonPixelRequestLevelClamp = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined8 *)&(pFVar21->Base).DOFBiasStrength = uVar11;
  uVar5 = puVar4[0x12];
  pFVar23 = (FRDGTexture *)puVar4[0x13];
  (pFVar21->Base).CocModel.CocInfinityRadius = (float)(int)uVar5;
  (pFVar21->Base).CocModel.CocInFocusRadius = (float)(int)((ulonglong)uVar5 >> 0x20);
  (pFVar21->Base).CocModel.DynamicRadiusOffsetLUT = pFVar23;
  uVar5 = puVar4[0x15];
  (pFVar21->Base).CocModel.DynamicRadiusOffsetLUTSampler = (FRHISamplerState *)puVar4[0x14];
  (pFVar21->Base).CocModel.bCocEnableDynamicRadiusOffset = (int)uVar5;
  (pFVar21->Base).CocModel.CocMinRadius = (float)(int)((ulonglong)uVar5 >> 0x20);
  uVar5 = puVar4[0x16];
  uVar11 = puVar4[0x17];
  (pFVar21->Base).CocModel.CocMaxRadius = (float)(int)uVar5;
  (pFVar21->Base).CocModel.CocSqueeze = (float)(int)((ulonglong)uVar5 >> 0x20);
  (pFVar21->Base).CocModel.CocInvSqueeze = (float)(int)uVar11;
  (pFVar21->Base).CocModel.DepthBlurRadius = (float)(int)((ulonglong)uVar11 >> 0x20);
  uVar5 = puVar4[0x19];
  *(undefined8 *)&(pFVar21->Base).CocModel.DepthBlurExponent = puVar4[0x18];
  *(undefined8 *)&(pFVar21->Base).CocModel.field_0x38 = uVar5;
  pTVar16 = CVarVirtualShadowMapPageMarkingPixelStrideY.Ref;
  bVar17 = IsInParallelRenderingThread();
  if ((!bVar17) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar15 = CVarVirtualShadowMapPageMarkingPixelStrideX.Ref;
  iVar19 = 0x80;
  if (pTVar16->ShadowedValue[1] < 0x80) {
    iVar19 = pTVar16->ShadowedValue[1];
  }
  iVar20 = 1;
  if (1 < iVar19) {
    iVar20 = iVar19;
  }
  bVar17 = IsInParallelRenderingThread();
  if ((!bVar17) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar16 = CVarVSMTranslucentQuality.Ref;
  iVar19 = 0x80;
  if (pTVar15->ShadowedValue[1] < 0x80) {
    iVar19 = pTVar15->ShadowedValue[1];
  }
  iVar32 = 1;
  if (1 < iVar19) {
    iVar32 = iVar19;
  }
  bVar31 = false;
  bVar17 = IsInParallelRenderingThread();
  if ((!bVar17) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (0 < pTVar16->ShadowedValue[1]) {
    if (**(longlong **)((longlong)this + 0x10) == 0) {
      bVar17 = IsLumenFrontLayerHistoryValid(*(FViewInfo **)((longlong)this + 0x18));
      if (!bVar17) goto LAB_1457cede2;
      lVar6 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x1c40);
      lVar22 = (**(code **)(**(longlong **)(lVar6 + 0x20a0) + 0x10))();
      fVar14 = __real_3f000000;
      fVar13 = __real_3f800000;
      uVar5 = *(undefined8 *)(lVar22 + 0x2c);
      fVar34 = __real_3f800000 / (float)*(int *)(*(longlong *)((longlong)this + 0x20) + 0x20);
      iVar19 = *(int *)(*(longlong *)((longlong)this + 0x20) + 0x24);
      pFVar21->FrontLayerMode = 1;
      iVar28 = *(int *)(lVar6 + 0x20b8);
      iVar1 = *(int *)(lVar6 + 0x20bc);
      iVar2 = *(int *)(lVar6 + 0x20c0);
      fVar33 = fVar13 / (float)iVar19;
      (pFVar21->FrontLayerHistoryUVMinMax).field0_0x0._s_0.X =
           ((float)*(int *)(lVar6 + 0x20b4) + fVar14) * fVar34;
      (pFVar21->FrontLayerHistoryUVMinMax).field0_0x0._s_0.Y = ((float)iVar28 + fVar14) * fVar33;
      (pFVar21->FrontLayerHistoryUVMinMax).field0_0x0._s_0.Z = ((float)iVar1 - fVar14) * fVar34;
      (pFVar21->FrontLayerHistoryUVMinMax).field0_0x0._s_0.W = ((float)iVar2 - fVar14) * fVar33;
      uVar11 = *(undefined8 *)(lVar6 + 0x20d8);
      iVar28 = (int)uVar5;
      *(undefined8 *)&(pFVar21->FrontLayerHistoryScreenPositionScaleBias).field0_0x0 =
           *(undefined8 *)(lVar6 + 0x20d0);
      *(undefined8 *)((longlong)&(pFVar21->FrontLayerHistoryScreenPositionScaleBias).field0_0x0 + 8)
           = uVar11;
      iVar19 = (int)((ulonglong)uVar5 >> 0x20);
      (pFVar21->FrontLayerHistoryBufferSizeAndInvSize).field0_0x0._s_0.X = (float)iVar28;
      (pFVar21->FrontLayerHistoryBufferSizeAndInvSize).field0_0x0._s_0.Y = (float)iVar19;
      (pFVar21->FrontLayerHistoryBufferSizeAndInvSize).field0_0x0._s_0.Z = fVar13 / (float)iVar28;
      (pFVar21->FrontLayerHistoryBufferSizeAndInvSize).field0_0x0._s_0.W = fVar13 / (float)iVar19;
      pFVar23 = FRDGBuilder::RegisterExternalTexture
                          (*(FRDGBuilder **)this,
                           (TRefCountPtr<IPooledRenderTarget> *)
                           (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x1c40) + 0x20a0),
                           L"VSM.FrontLayerHistoryDepth",None);
      pFVar21->FrontLayerTranslucencyDepthTexture = pFVar23;
      pFVar23 = FRDGBuilder::RegisterExternalTexture
                          (*(FRDGBuilder **)this,
                           (TRefCountPtr<IPooledRenderTarget> *)
                           (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x1c40) + 0x20a8),
                           L"VSM.FrontLayerHistoryNormal",None);
      pFVar21->FrontLayerTranslucencyNormalTexture = pFVar23;
    }
    else {
      pFVar21->FrontLayerMode = 0;
      pFVar21->FrontLayerTranslucencyDepthTexture =
           (FRDGTexture *)**(undefined8 **)((longlong)this + 0x10);
      pFVar21->FrontLayerTranslucencyNormalTexture =
           *(FRDGTexture **)(*(longlong *)((longlong)this + 0x10) + 8);
    }
    bVar31 = true;
  }
LAB_1457cede2:
  pTVar24 = HairStrands::BindHairStrandsViewUniformParameters
                      (*(FViewInfo **)((longlong)this + 0x18));
  pFVar25 = FHairStrandsViewUniformParameters::GetStructMetadata();
  EStack_130 = Static;
  if (pFVar25->BindingFlags != StaticAndShader) {
    EStack_130 = pFVar25->BindingFlags;
  }
  local_148[0].Tail.DimensionValue = false;
  *(TRDGUniformBuffer<FHairStrandsViewUniformParameters> **)&pFVar21->HairStrands = pTVar24;
  *(ulonglong *)&(pFVar21->HairStrands).field_0x8 = CONCAT71(uStack_12f,EStack_130);
  local_138 = (FRDGBuilder *)pTVar24;
  if ((**(longlong **)((longlong)this + 0x28) != 0) && (param_1 == GBuffer)) {
    pFVar21->SingleLayerWaterDepthTexture =
         *(FRDGTexture **)(**(longlong **)((longlong)this + 0x28) + 0x18);
    local_138 = *(FRDGBuilder **)this;
    local_128 = **(longlong **)((longlong)this + 0x28);
    uVar3 = **(uint **)((longlong)this + 0x30);
    uVar29 = uVar18;
    if ((int)uVar3 < *(int *)(local_128 + 0x38)) {
      uVar29 = ~uVar3 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (*(longlong *)((longlong)(int)uVar3 * 0x60 + 0x50 + *(longlong *)(local_128 + 0x30)) == 0) {
      local_108.Buffer =
           FSystemTextures::GetDefaultStructuredBuffer
                     ((FSystemTextures *)&GSystemTextures,*(FRDGBuilder **)this,4,0xffffffff);
    }
    else {
      local_128 = **(longlong **)((longlong)this + 0x28);
      uVar3 = **(uint **)((longlong)this + 0x30);
      uVar29 = uVar18;
      if ((int)uVar3 < *(int *)(local_128 + 0x38)) {
        uVar29 = ~uVar3 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_108.Buffer =
           *(FRDGBuffer **)((longlong)(int)uVar3 * 0x60 + 0x50 + *(longlong *)(local_128 + 0x30));
    }
    local_108._padding_._4_4_ = 0;
    local_108._padding_._0_4_ = 0xffffffff;
    local_108._padding_ = 0;
    local_108._padding_._0_1_ = 0;
    if ((((local_108.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_108._padding_._0_1_ = 0x1c;
    }
    pFVar26 = FRDGBuilder::CreateSRV(local_138,&local_108);
    pFVar21->SingleLayerWaterTileMask = pFVar26;
    local_138 = (FRDGBuilder *)**(longlong **)((longlong)this + 0x28);
    uVar3 = **(uint **)((longlong)this + 0x30);
    if ((int)uVar3 <
        (int)((TRDGUniformBuffer<FHairStrandsViewUniformParameters> *)local_138)->_padding_) {
      uVar18 = ~uVar3 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_148[0].Tail.DimensionValue = true;
    (pFVar21->SingleLayerWaterTileViewRes).field0_0x0 =
         *(TIntPoint<int>_u_0 *)
          ((longlong)(int)uVar3 * 0x60 + 0x58 +
          ((TRDGUniformBuffer<FHairStrandsViewUniformParameters> *)local_138)->_padding_);
  }
  TVar12._s_0.Y = iVar20;
  TVar12._s_0.X = iVar32;
  (pFVar21->PixelStride).field0_0x0 = TVar12;
  lVar6 = *(longlong *)((longlong)this + 0x18);
  iVar19 = ((*(int *)(lVar6 + 0x1c38) - *(int *)(lVar6 + 0x1c30)) + -1 + iVar32) / iVar32 + 7;
  iVar20 = (iVar20 + -1 + (*(int *)(lVar6 + 0x1c3c) - *(int *)(lVar6 + 0x1c34))) / iVar20 + 7;
  local_150.Tail.Tail.Tail.DimensionValue = *(bool *)(*(longlong *)((longlong)this + 0x38) + 0x1c0);
  if (param_1 == HairStrands) {
    local_150.Tail.DimensionValue = false;
    local_150.Tail.Tail.DimensionValue = false;
    local_150.DimensionValue = param_1;
    FGlobalShaderMap::GetShader<FGeneratePageFlagsFromPixelsCS>
              (*(FGlobalShaderMap **)(lVar6 + 0x26c0),&local_e8,&local_150);
    lVar6 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x2340);
    if (((*(int *)(lVar6 + 0xd8) == 0) || (*(longlong *)(lVar6 + 0x108) == 0)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("View.HairStrandsViewData.VisibilityData.TileData.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                            ,0xaae,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_98._0_8_ = 0;
    local_70 = (longlong *)0x0;
    local_118._s_0.Z = 4;
    local_118._0_8_ =
         *(undefined8 *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x2340) + 0x140);
    *(undefined8 *)&pFVar21->IndirectBufferArgs = local_118._0_8_;
    *(ulonglong *)&(pFVar21->IndirectBufferArgs).field_0x8 = CONCAT44(uStack_10c,4);
    pFVar7 = *(FRDGBuffer **)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x2340) + 0x140);
    pFVar27 = FRDGEventName::FRDGEventName
                        (&local_c8,1,L"GeneratePageFlagsFromPixels(HairStrands,Tile)");
    FComputeShaderUtils::AddPass<FGeneratePageFlagsFromPixelsCS>
              (*(FRDGBuilder **)this,pFVar27,Compute,&local_e8,pFVar21,pFVar7,0,
               (TFunction<void___cdecl(void)> *)local_98);
    if (local_c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_98._0_8_ != 0) {
      plVar30 = (longlong *)(local_98 + 0x10);
      if (local_70 != (longlong *)0x0) {
        plVar30 = local_70;
      }
      (**(code **)(*plVar30 + 0x10))();
    }
  }
  else {
    local_148[0].DimensionValue = param_1;
    local_148[0].Tail.Tail.DimensionValue = bVar31;
    local_148[0].Tail.Tail.Tail.DimensionValue = local_150.Tail.Tail.Tail.DimensionValue;
    FGlobalShaderMap::GetShader<FGeneratePageFlagsFromPixelsCS>
              (*(FGlobalShaderMap **)(lVar6 + 0x26c0),&local_d8,local_148);
    local_138 = (FRDGBuilder *)
                CONCAT44((int)(iVar20 + (iVar20 >> 0x1f & 7U)) >> 3,
                         (int)((iVar19 >> 0x1f & 7U) + iVar19) >> 3);
    if (param_1 == GBuffer) {
      Substrate::IsSubstrateEnabled();
    }
    pFVar27 = FRDGEventName::FRDGEventName
                        (&local_b0,L"GeneratePageFlagsFromPixels(%s,%s%sNumShadowMaps=%d,{%d,%d})");
    pFVar8 = *(FRDGBuilder **)this;
    pFVar25 = FGeneratePageFlagsFromPixelsCS::FParameters::FTypeInfo::GetStructMetadata();
    local_118._0_8_ = local_138;
    local_118._s_0.Z = 1;
    FComputeShaderUtils::AddPass<FGeneratePageFlagsFromPixelsCS>
              (pFVar8,pFVar27,Compute,&local_d8,pFVar25,pFVar21,(TIntVector3<int> *)&local_118._s_0)
    ;
    if (local_b0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1457cf2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`FVirtualShadowMapArray::BeginMarkPages'::__l174::<lambda_8>::operator()
          (void *this,FViewData *param_1,int param_2,bool param_3)

{
  EShaderPlatform EVar1;
  uint uVar2;
  undefined8 *puVar3;
  FGlobalShaderMap *this_00;
  FRDGBuffer *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  FRDGTextureUAV *pFVar7;
  longlong lVar8;
  undefined8 uVar9;
  FRDGTexture *pFVar10;
  FRDGBufferSRV *pFVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  TConsoleVariableData<int> *pTVar15;
  TConsoleVariableData<int> *pTVar16;
  TConsoleVariableData<float> *pTVar17;
  bool bVar18;
  EShaderPermutationPrecacheRequest EVar19;
  FParameters *pFVar20;
  FParameters *pFVar21;
  FShaderType *pFVar22;
  FName this_01;
  FGlobalShaderType *pFVar23;
  FRDGEventName *pFVar24;
  longlong *plVar25;
  int iVar26;
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [4];
  undefined1 local_164 [8];
  FGlobalShaderPermutationParameters local_15c;
  FRDGBuffer *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_138;
  FString local_128;
  TShaderRefBase<FGeneratePageFlagsFromFroxelsCS,FShaderMapPointerTable> local_118;
  FRDGEventName local_108;
  FParameters local_e8;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  if (param_1 == (FViewData *)0x0) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  iVar26 = 0;
  pFVar20 = FRDGAllocator::Alloc<FGeneratePageFlagsFromFroxelsCS::FParameters>
                      ((FRDGAllocator *)(*(longlong *)this + 0x18));
  puVar3 = *(undefined8 **)((longlong)this + 8);
  uVar6 = puVar3[1];
  *(undefined8 *)&(pFVar20->Base).MarkingParameters.VirtualShadowMap = *puVar3;
  *(undefined8 *)&(pFVar20->Base).MarkingParameters.VirtualShadowMap.field_0x8 = uVar6;
  pFVar7 = (FRDGTextureUAV *)puVar3[3];
  (pFVar20->Base).MarkingParameters.OutPageRequestFlags = (FRDGTextureUAV *)puVar3[2];
  (pFVar20->Base).MarkingParameters.OutPageReceiverMasks = pFVar7;
  uVar6 = puVar3[5];
  *(undefined8 *)&(pFVar20->Base).SceneTexturesStruct = puVar3[4];
  *(undefined8 *)&(pFVar20->Base).SceneTexturesStruct.field_0x8 = uVar6;
  uVar6 = puVar3[7];
  *(undefined8 *)&(pFVar20->Base).View = puVar3[6];
  *(undefined8 *)&(pFVar20->Base).View.field_0x8 = uVar6;
  uVar6 = puVar3[9];
  *(undefined8 *)&(pFVar20->Base).ForwardLightStruct = puVar3[8];
  *(undefined8 *)&(pFVar20->Base).ForwardLightStruct.field_0x8 = uVar6;
  lVar8 = puVar3[0xb];
  (pFVar20->Base).DirectionalLightIds = (FRDGBufferSRV *)puVar3[10];
  (pFVar20->Base)._padding_ = lVar8;
  uVar6 = puVar3[0xd];
  *(undefined8 *)&(pFVar20->Base).Substrate = puVar3[0xc];
  *(undefined8 *)&(pFVar20->Base).Substrate.field_0x8 = uVar6;
  uVar6 = puVar3[0xe];
  uVar9 = puVar3[0xf];
  (pFVar20->Base).PageDilationBorderSizeDirectional = (float)(int)uVar6;
  (pFVar20->Base).PageDilationBorderSizeLocal = (float)(int)((ulonglong)uVar6 >> 0x20);
  (pFVar20->Base).bCullBackfacingPixels = (int)uVar9;
  (pFVar20->Base).MipModeLocal = (int)((ulonglong)uVar9 >> 0x20);
  uVar6 = puVar3[0x10];
  uVar9 = puVar3[0x11];
  (pFVar20->Base).FirstPersonPixelRequestBias = (float)(int)uVar6;
  (pFVar20->Base).FirstPersonPixelRequestLevelClamp = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined8 *)&(pFVar20->Base).DOFBiasStrength = uVar9;
  uVar6 = puVar3[0x12];
  pFVar10 = (FRDGTexture *)puVar3[0x13];
  (pFVar20->Base).CocModel.CocInfinityRadius = (float)(int)uVar6;
  (pFVar20->Base).CocModel.CocInFocusRadius = (float)(int)((ulonglong)uVar6 >> 0x20);
  (pFVar20->Base).CocModel.DynamicRadiusOffsetLUT = pFVar10;
  uVar6 = puVar3[0x15];
  (pFVar20->Base).CocModel.DynamicRadiusOffsetLUTSampler = (FRHISamplerState *)puVar3[0x14];
  (pFVar20->Base).CocModel.bCocEnableDynamicRadiusOffset = (int)uVar6;
  (pFVar20->Base).CocModel.CocMinRadius = (float)(int)((ulonglong)uVar6 >> 0x20);
  uVar6 = puVar3[0x16];
  uVar9 = puVar3[0x17];
  (pFVar20->Base).CocModel.CocMaxRadius = (float)(int)uVar6;
  (pFVar20->Base).CocModel.CocSqueeze = (float)(int)((ulonglong)uVar6 >> 0x20);
  (pFVar20->Base).CocModel.CocInvSqueeze = (float)(int)uVar9;
  (pFVar20->Base).CocModel.DepthBlurRadius = (float)(int)((ulonglong)uVar9 >> 0x20);
  uVar6 = puVar3[0x18];
  uVar9 = puVar3[0x19];
  pFVar20->PassId = param_2;
  pFVar20->bShouldMarkLocaLights = (uint)param_3;
  *(undefined8 *)&(pFVar20->Base).CocModel.DepthBlurExponent = uVar6;
  *(undefined8 *)&(pFVar20->Base).CocModel.field_0x38 = uVar9;
  pTVar17 = CVarDebugDrawFroxelRange.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar20->DebugRange = pTVar17->ShadowedValue[1];
  pFVar21 = Froxel::FViewData::GetShaderParameters(param_1,&local_e8,*(FRDGBuilder **)this);
  uStack_140 = 4;
  uVar6 = *(undefined8 *)
           ((longlong)&(pFVar21->FroxelParameters).FroxelToViewScaleBias.field0_0x0 + 8);
  *(undefined8 *)&(pFVar20->FroxelParameters).FroxelParameters.FroxelToViewScaleBias.field0_0x0 =
       *(undefined8 *)&(pFVar21->FroxelParameters).FroxelToViewScaleBias.field0_0x0;
  *(undefined8 *)
   ((longlong)&(pFVar20->FroxelParameters).FroxelParameters.FroxelToViewScaleBias.field0_0x0 + 8) =
       uVar6;
  uVar6 = *(undefined8 *)
           ((longlong)&(pFVar21->FroxelParameters).FroxelToClipScaleBias.field0_0x0 + 8);
  *(undefined8 *)&(pFVar20->FroxelParameters).FroxelParameters.FroxelToClipScaleBias.field0_0x0 =
       *(undefined8 *)&(pFVar21->FroxelParameters).FroxelToClipScaleBias.field0_0x0;
  *(undefined8 *)
   ((longlong)&(pFVar20->FroxelParameters).FroxelParameters.FroxelToClipScaleBias.field0_0x0 + 8) =
       uVar6;
  fVar12 = (pFVar21->FroxelParameters).FroxelRecLog2DepthScale1;
  fVar13 = (pFVar21->FroxelParameters).FroxelRecNearScale;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelClipToViewScale.field0_0x0 =
       (pFVar21->FroxelParameters).FroxelClipToViewScale.field0_0x0;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelRecLog2DepthScale1 = fVar12;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelRecNearScale = fVar13;
  fVar12 = (pFVar21->FroxelParameters).FroxelNear;
  fVar13 = (pFVar21->FroxelParameters).FroxelViewToClipTransformScale;
  fVar14 = (pFVar21->FroxelParameters).FroxelClipToViewTransformScale;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelDepthScale1 =
       (pFVar21->FroxelParameters).FroxelDepthScale1;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelNear = fVar12;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelViewToClipTransformScale = fVar13;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelClipToViewTransformScale = fVar14;
  fVar12 = (pFVar21->FroxelParameters).FroxelRadius;
  fVar13 = (pFVar21->FroxelParameters).FroxelInvRadius;
  uVar2 = (pFVar21->FroxelParameters).bFroxelIsOrtho;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelClipToViewTransformBias =
       (pFVar21->FroxelParameters).FroxelClipToViewTransformBias;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelRadius = fVar12;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelInvRadius = fVar13;
  (pFVar20->FroxelParameters).FroxelParameters.bFroxelIsOrtho = uVar2;
  uVar2 = (pFVar21->FroxelParameters).FroxelArgsStride;
  uVar6 = *(undefined8 *)&(pFVar21->FroxelParameters).field_0x58;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelArgsOffset =
       (pFVar21->FroxelParameters).FroxelArgsOffset;
  (pFVar20->FroxelParameters).FroxelParameters.FroxelArgsStride = uVar2;
  *(undefined8 *)&(pFVar20->FroxelParameters).FroxelParameters.field_0x58 = uVar6;
  pFVar11 = pFVar21->FroxelArgs;
  (pFVar20->FroxelParameters).Froxels = pFVar21->Froxels;
  (pFVar20->FroxelParameters).FroxelArgs = pFVar11;
  local_148 = param_1->FroxelArgsRDG;
  *(FRDGBuffer **)&pFVar20->IndirectBufferArgs = local_148;
  *(ulonglong *)&(pFVar20->IndirectBufferArgs).field_0x8 = CONCAT44(uStack_13c,4);
  pTVar15 = CVarDebugDrawFroxels.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar16 = CVarDebugDrawFroxels.Ref;
  if (-1 < pTVar15->ShadowedValue[1]) {
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (pTVar16->ShadowedValue[1] != param_2 + 1) goto LAB_1457cf525;
  }
  ShaderPrint::SetParameters
            (*(FRDGBuilder **)this,
             (FShaderPrintData *)(*(longlong *)((longlong)this + 0x10) + 0x2720),
             &pFVar20->ShaderPrintStruct);
  iVar26 = 1;
LAB_1457cf525:
  this_00 = *(FGlobalShaderMap **)(*(longlong *)((longlong)this + 0x10) + 0x26c0);
  iVar26 = (-(uint)(*(char *)(*(longlong *)((longlong)this + 0x18) + 0x1c0) != '\0') & 2) + iVar26;
  pFVar22 = (FShaderType *)FGeneratePageFlagsFromFroxelsCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_138,pFVar22,iVar26);
  if (local_138.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_164);
    ::FName::ToString((FName *)this_01,&local_128);
    FGeneratePageFlagsFromFroxelsCS::GetStaticType();
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar1 = this_00->Platform;
  pFVar23 = FGeneratePageFlagsFromFroxelsCS::GetStaticType();
  local_15c._8_4_ = 1;
  local_15c.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar23->field_0x20;
  local_15c.GlobalShaderName.Number = *(uint *)&pFVar23->field_0x24;
  local_15c._0_2_ = EVar1;
  local_15c._4_4_ = iVar26;
  EVar19 = FGeneratePageFlagsFromFroxelsCS::ShouldPrecachePermutation(&local_15c);
  if (EVar19 == NotUsed) {
    `FGlobalShaderMap::GetShader<FGeneratePageFlagsFromFroxelsCS>'::__l2::<lambda_1>::operator()
              (local_168);
  }
  uVar2 = param_1->ArgsOffset;
  pFVar4 = param_1->FroxelArgsRDG;
  local_78._0_8_ = 0;
  local_50 = (longlong *)0x0;
  local_118.ShaderContent = (FGeneratePageFlagsFromFroxelsCS *)local_138.ShaderContent;
  local_118.ShaderMap = local_138.ShaderMap;
  pFVar24 = FRDGEventName::FRDGEventName
                      (&local_108,L"GeneratePageFlagsFromFroxels(NumShadowMaps=%d)");
  FComputeShaderUtils::AddPass<FGeneratePageFlagsFromFroxelsCS>
            (*(FRDGBuilder **)this,pFVar24,Compute,&local_118,pFVar20,pFVar4,uVar2,
             (TFunction<void___cdecl(void)> *)local_78);
  if (local_108.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_78._0_8_ != 0) {
    plVar25 = (longlong *)(local_78 + 0x10);
    if (local_50 != (longlong *)0x0) {
      plVar25 = local_50;
    }
    (**(code **)(*plVar25 + 0x10))();
  }
  return;
}

// AddRenderViews @ 1457d2ae0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::AddRenderViews
          (FVirtualShadowMapArray *this,FProjectedShadowInfo *param_1,
          TArrayView<FViewInfo_const_,int> *param_2,float param_3,bool param_4,bool param_5,
          TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_6)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FViewInfo_const_,int> local_28 [2];
  
  if (param_1->bWholeSceneShadow == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProjectedShadowInfo->bWholeSceneShadow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x1245,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->VirtualShadowMapClipmap).Object == (FVirtualShadowMapClipmap *)0x0) {
    local_28[0].DataPtr = param_2->DataPtr;
    local_28[0].ArrayNum = param_2->ArrayNum;
    local_28[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
    AddRenderViewsLocal(this,param_1,local_28,param_3,param_4,param_5,param_6);
  }
  else {
    if (param_1->DependentView == (FViewInfo *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProjectedShadowInfo->DependentView != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                         ,0x1249,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    AddRenderViewsClipmap
              (this,&param_1->VirtualShadowMapClipmap,param_1->DependentView,param_3,param_4,param_5
               ,param_6);
  }
  return;
}

// AddRenderViewsClipmap @ 1457d2c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::AddRenderViewsClipmap
          (FVirtualShadowMapArray *this,TSharedPtr<FVirtualShadowMapClipmap,1> *param_1,
          FViewInfo *param_2,float param_3,bool param_4,bool param_5,
          TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_6)

{
  FVirtualShadowMapPerLightCacheEntry *pFVar1;
  ForElementType<FVirtualShadowMapClipmap::FLevelData> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  TIntPoint<int>_u_0 TVar5;
  TIntPoint<int>_u_0 TVar6;
  TConsoleVariableData<int> *pTVar7;
  FPackedView *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FPackedView *pFVar13;
  FPackedView *pFVar14;
  longlong lVar15;
  FPackedView *pFVar16;
  FVirtualShadowMapClipmap *pFVar17;
  longlong lVar18;
  uint uVar19;
  FScriptContainerElement *_Src;
  ForElementType<FVirtualShadowMapClipmap::FLevelData> FVar20;
  TIntPoint<int>_u_0 TVar21;
  uint uVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auStack_35e8 [32];
  FPackedView *local_35c8;
  FPackedView *local_35c0;
  longlong local_35b8;
  longlong local_35b0;
  undefined8 local_35a8;
  TIntPoint<int>_u_0 local_3598;
  int local_3590;
  FVirtualShadowMapClipmap *local_3588;
  FPackedView local_3578;
  FMinimalInitializer local_31a8;
  FPackedViewParams local_3058;
  undefined1 local_1e98 [2048];
  TVector<double>_u_0 local_1698 [5];
  undefined1 local_1618 [2176];
  TIntRect<int>_u_0 local_d98;
  TIntPoint<int>_u_0 local_d88;
  uint local_d80;
  float local_d7c;
  float local_d78;
  float local_d74;
  uint local_d70;
  int local_d6c;
  int local_d68;
  int local_d64;
  int local_d60;
  float local_d5c;
  TIntRect<int>_u_0 local_d58;
  float local_d48;
  bool local_d44;
  TVector<double>_u_0 local_d40;
  float local_d28;
  float local_d24;
  longlong local_d18;
  longlong lStack_d10;
  longlong local_d08;
  double dStack_d00;
  uint local_cf8;
  uint local_cf4;
  bool local_cf0;
  bool local_cef;
  int local_cec;
  TVector2<float>_u_0 local_ce8;
  FPackedView local_cd8;
  FViewMatrices local_908;
  ulonglong local_88;
  undefined8 uStack_48;
  
  uStack_48 = 0x1457d2c2f;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_35e8;
  Nanite::FPackedViewParams::FPackedViewParams(&local_3058);
  TVar6 = _UNK_151030628;
  TVar5 = ___xmm_00004000000040000000000000000000;
  local_3058.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)___xmm_00004000000040000000000000000000;
  local_3058.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)_UNK_151030628;
  local_3058.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)_UNK_151030628;
  local_3058.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)___xmm_00004000000040000000000000000000;
  if ((this->bInitialized == false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                         ,0x421,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar23 = 0;
  local_3598 = (this->UniformParameters).PhysicalPoolSize.field0_0x0;
  local_3058.MaxPixelsPerEdgeMultipler = __real_3f800000 / param_3;
  local_3058.PrevTargetLayerIndex = -1;
  local_3058.TargetMipLevel = 0;
  local_3058.TargetMipCount = 1;
  local_3058.Flags = 0;
  local_3058.RasterContextSize.field0_0x0 = local_3598;
  if ((param_1->Object == (FVirtualShadowMapClipmap *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar17 = param_1->Object;
  if (pFVar17->LightSceneInfo->Proxy != (FLightSceneProxy *)0x0) {
    local_3058.bUseLightingChannelMask = true;
    if ((pFVar17 == (FVirtualShadowMapClipmap *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar17 = param_1->Object;
    local_3058.LightingChannelMask = (uint)pFVar17->LightSceneInfo->Proxy->LightingChannelMask;
  }
  if ((pFVar17 == (FVirtualShadowMapClipmap *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar17 = param_1->Object;
  pFVar1 = (pFVar17->PerLightCacheEntry).Object;
  local_3588 = pFVar17;
  if (pFVar1 != (FVirtualShadowMapPerLightCacheEntry *)0x0) {
    iVar10 = (**(code **)(*(longlong *)this->Scene + 0x4e8))();
    pFVar1->RenderedFrameNumber = iVar10;
    if (((pFVar17->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((pFVar17->PerLightCacheEntry).Object)->bIsUncached != false) {
      local_3058.Flags = local_3058.Flags | 8;
    }
    if (((pFVar17->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((pFVar17->PerLightCacheEntry).Object)->bUseReceiverMask != false) {
      local_3058.Flags = local_3058.Flags | 0x40;
    }
  }
  pTVar7 = CVarNonNaniteUseRadiusThreshold.Ref;
  bVar9 = IsInParallelGameThread();
  if (!bVar9) {
    bVar9 = IsInGameThread();
    uVar26 = 4;
    if (!bVar9) goto LAB_1457d2eac;
  }
  uVar26 = uVar23;
LAB_1457d2eac:
  if ((*(int *)((longlong)pTVar7->ShadowedValue + uVar26) != 0) &&
     ((pFVar1 = (pFVar17->PerLightCacheEntry).Object,
      pFVar1 == (FVirtualShadowMapPerLightCacheEntry *)0x0 || (pFVar1->bIsUncached != false)))) {
    local_3058.Flags = local_3058.Flags | 0x20;
    local_3058.MinBoundsRadius = GMinScreenRadiusForShadowCaster;
  }
  Nanite::SetCullingViewOverrides(param_2,&local_3058);
  if ((param_1->Object == (FVirtualShadowMapClipmap *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar17 = param_1->Object;
  if (((pFVar17->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_3598 = (TIntPoint<int>_u_0)0x0;
  local_3590 = ((pFVar17->PerLightCacheEntry).Object)->VirtualShadowMapId;
  uVar26 = uVar23;
  do {
    iVar10 = local_3590;
    if ((param_1->Object == (FVirtualShadowMapClipmap *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar17 = param_1->Object;
    uVar22 = (uint)uVar23;
    if ((pFVar17->LevelData).ArrayNum <= (int)uVar22) {
      return;
    }
    memcpy(local_1e98,&local_3058,0x880);
    memcpy(local_1e98 + 0x880,&local_3058.PrevViewMatrices,0x880);
    local_d98._s_0.Min.field0_0x0 = local_3058.ViewRect.field0_0x0._s_0.Min.field0_0x0;
    local_d98._s_0.Max.field0_0x0 = local_3058.ViewRect.field0_0x0._s_0.Max.field0_0x0;
    local_d88 = local_3058.RasterContextSize.field0_0x0;
    local_d80 = local_3058.StreamingPriorityCategory;
    local_d70 = local_3058.Flags;
    local_d68 = local_3058.PrevTargetLayerIndex;
    local_d64 = local_3058.TargetMipLevel;
    local_d60 = local_3058.TargetMipCount;
    local_d58._s_0.Min.field0_0x0 = local_3058.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0;
    local_d58._s_0.Max.field0_0x0 = local_3058.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0;
    local_d44 = local_3058.bUseCullingViewOverrides;
    local_d7c = local_3058.MinBoundsRadius;
    local_cf8 = local_3058.InstanceOcclusionQueryMask;
    local_d74 = local_3058.ViewLODDistanceFactor;
    local_cf4 = local_3058.LightingChannelMask;
    local_d5c = local_3058.RangeBasedCullingDistance;
    local_cf0 = local_3058.bUseLightingChannelMask;
    local_d48 = local_3058.MaxPixelsPerEdgeMultipler;
    local_d78 = local_3058.LODScaleFactor;
    local_cef = local_3058.bUseCurrentPreTranslationForHZB;
    local_cec = local_3058.SceneRendererPrimaryViewId;
    local_d40._s_0.Z = local_3058.CullingViewOrigin.field0_0x0._s_0.Z;
    local_ce8 = local_3058.DynamicDepthCullRange.field0_0x0;
    local_d6c = uVar22 + iVar10;
    local_d24 = local_3058.CullingViewMinRadiusTestFactorSq;
    local_d08 = local_3058.GlobalClippingPlane._padding_;
    dStack_d00 = local_3058.GlobalClippingPlane.W;
    local_d40._s_0.X = local_3058.CullingViewOrigin.field0_0x0._s_0.X;
    local_d40._s_0.Y = local_3058.CullingViewOrigin.field0_0x0._s_0.Y;
    local_d28 = local_3058.CullingViewScreenMultipleSq;
    local_d18 = local_3058.GlobalClippingPlane._padding_;
    lStack_d10 = local_3058.GlobalClippingPlane._padding_;
    if ((pFVar17 == (FVirtualShadowMapClipmap *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar17 = param_1->Object;
    if ((((int)uVar22 < 0) || ((pFVar17->LevelData).ArrayNum <= (int)uVar22)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClipmapIndex >= 0 && ClipmapIndex < LevelData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapClipmap.cpp"
                           ,0x1e7,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = (pFVar17->LevelData).ArrayNum;
    uVar19 = ~uVar22 >> 0x1f;
    uVar11 = 0;
    if ((int)uVar22 < iVar10) {
      uVar11 = uVar19;
    }
    if (uVar11 == 0) {
      local_35c8 = (FPackedView *)(longlong)(int)uVar22;
      local_35c0 = (FPackedView *)(longlong)iVar10;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar2 = (pFVar17->LevelData).AllocatorInstance.SecondaryData;
    FVar20 = (ForElementType<FVirtualShadowMapClipmap::FLevelData>)&pFVar17->LevelData;
    if (FVar2 != (ForElementType<FVirtualShadowMapClipmap::FLevelData>)0x0) {
      FVar20 = FVar2;
    }
    local_31a8.CameraToViewTarget.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_31a8.StereoPass = eSSP_FULL;
    local_31a8.FirstPersonParams.FOVCorrectionFactor = 1.0;
    local_31a8.CameraToViewTarget.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_31a8.CameraToViewTarget.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_31a8.FirstPersonParams.Scale = 1.0;
    local_31a8.FirstPersonParams.bUseParameters = false;
    local_31a8.FirstPersonParams._9_3_ = 0;
    local_31a8.ViewOrigin.field0_0x0._s_0.X =
         (double)*(undefined8 *)((uchar *)((longlong)FVar20 + 0x80) + uVar26);
    local_31a8.ViewOrigin.field0_0x0._s_0.Y =
         (double)*(undefined8 *)((uchar *)((longlong)FVar20 + 0x80) + uVar26 + 8);
    local_31a8.ViewOrigin.field0_0x0._s_0.Z =
         (double)*(undefined8 *)((uchar *)((longlong)FVar20 + 0x90) + uVar26);
    local_31a8.ViewRotationMatrix.M[0][0] = (pFVar17->WorldToLightViewRotationMatrix).M[0][0];
    local_31a8.ViewRotationMatrix.M[0][1] = (pFVar17->WorldToLightViewRotationMatrix).M[0][1];
    local_31a8.ViewRotationMatrix.M[0][2] = (pFVar17->WorldToLightViewRotationMatrix).M[0][2];
    local_31a8.ViewRotationMatrix.M[0][3] = (pFVar17->WorldToLightViewRotationMatrix).M[0][3];
    local_31a8.ViewRotationMatrix.M[1][0] = (pFVar17->WorldToLightViewRotationMatrix).M[1][0];
    local_31a8.ViewRotationMatrix.M[1][1] = (pFVar17->WorldToLightViewRotationMatrix).M[1][1];
    local_31a8.ViewRotationMatrix.M[1][2] = (pFVar17->WorldToLightViewRotationMatrix).M[1][2];
    local_31a8.ViewRotationMatrix.M[1][3] = (pFVar17->WorldToLightViewRotationMatrix).M[1][3];
    local_31a8.ViewRotationMatrix.M[2][0] = (pFVar17->WorldToLightViewRotationMatrix).M[2][0];
    local_31a8.ViewRotationMatrix.M[2][1] = (pFVar17->WorldToLightViewRotationMatrix).M[2][1];
    local_31a8.ViewRotationMatrix.M[2][2] = (pFVar17->WorldToLightViewRotationMatrix).M[2][2];
    local_31a8.ViewRotationMatrix.M[2][3] = (pFVar17->WorldToLightViewRotationMatrix).M[2][3];
    local_31a8.ViewRotationMatrix.M[3][0] = (pFVar17->WorldToLightViewRotationMatrix).M[3][0];
    local_31a8.ViewRotationMatrix.M[3][1] = (pFVar17->WorldToLightViewRotationMatrix).M[3][1];
    local_31a8.ViewRotationMatrix.M[3][2] = (pFVar17->WorldToLightViewRotationMatrix).M[3][2];
    local_31a8.ViewRotationMatrix.M[3][3] = (pFVar17->WorldToLightViewRotationMatrix).M[3][3];
    local_31a8.ProjectionMatrix.M[0][0] = *(double *)((longlong)FVar20 + uVar26);
    local_31a8.ProjectionMatrix.M[0][1] = ((double *)((longlong)FVar20 + uVar26))[1];
    local_31a8.ProjectionMatrix.M[0][2] = *(double *)((uchar *)((longlong)FVar20 + 0x10) + uVar26);
    local_31a8.ProjectionMatrix.M[0][3] =
         *(double *)((uchar *)((longlong)FVar20 + 0x10) + uVar26 + 8);
    local_31a8.ProjectionMatrix.M[1][0] = *(double *)((uchar *)((longlong)FVar20 + 0x20) + uVar26);
    local_31a8.ProjectionMatrix.M[1][1] =
         *(double *)((uchar *)((longlong)FVar20 + 0x20) + uVar26 + 8);
    local_31a8.ProjectionMatrix.M[1][2] = *(double *)((uchar *)((longlong)FVar20 + 0x30) + uVar26);
    local_31a8.ProjectionMatrix.M[1][3] =
         *(double *)((uchar *)((longlong)FVar20 + 0x30) + uVar26 + 8);
    local_31a8.ProjectionMatrix.M[2][0] = *(double *)((uchar *)((longlong)FVar20 + 0x40) + uVar26);
    local_31a8.ProjectionMatrix.M[2][1] =
         *(double *)((uchar *)((longlong)FVar20 + 0x40) + uVar26 + 8);
    local_31a8.ProjectionMatrix.M[2][2] = *(double *)((uchar *)((longlong)FVar20 + 0x50) + uVar26);
    local_31a8.ProjectionMatrix.M[2][3] =
         *(double *)((uchar *)((longlong)FVar20 + 0x50) + uVar26 + 8);
    local_31a8.ProjectionMatrix.M[3][0] = *(double *)((uchar *)((longlong)FVar20 + 0x60) + uVar26);
    local_31a8.ProjectionMatrix.M[3][1] =
         *(double *)((uchar *)((longlong)FVar20 + 0x60) + uVar26 + 8);
    local_31a8.ProjectionMatrix.M[3][2] = *(double *)((uchar *)((longlong)FVar20 + 0x70) + uVar26);
    local_31a8.ProjectionMatrix.M[3][3] =
         *(double *)((uchar *)((longlong)FVar20 + 0x70) + uVar26 + 8);
    local_31a8.ConstrainedViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>)TVar6;
    local_31a8.ConstrainedViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>)TVar5;
    FViewMatrices::FViewMatrices(&local_908,&local_31a8);
    memcpy(local_1e98,&local_908,0x880);
    local_d68 = -1;
    memcpy(local_1e98 + 0x880,&local_908,0x880);
    if ((param_1->Object == (FVirtualShadowMapClipmap *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar17 = param_1->Object;
    if ((((int)uVar22 < 0) || ((pFVar17->LevelData).ArrayNum <= (int)uVar22)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClipmapIndex >= 0 && ClipmapIndex < LevelData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapClipmap.h"
                           ,0x3a,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = (pFVar17->LevelData).ArrayNum;
    uVar11 = 0;
    if ((int)uVar22 < iVar10) {
      uVar11 = uVar19;
    }
    if (uVar11 == 0) {
      local_35c8 = (FPackedView *)(longlong)(int)uVar22;
      local_35c0 = (FPackedView *)(longlong)iVar10;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar2 = (pFVar17->LevelData).AllocatorInstance.SecondaryData;
    FVar20 = (ForElementType<FVirtualShadowMapClipmap::FLevelData>)&pFVar17->LevelData;
    if (FVar2 != (ForElementType<FVirtualShadowMapClipmap::FLevelData>)0x0) {
      FVar20 = FVar2;
    }
    local_ce8 = *(TVector2<float>_u_0 *)((uchar *)((longlong)FVar20 + 0xb8) + uVar26);
    pFVar1 = (local_3588->PerLightCacheEntry).Object;
    TVar21 = local_3598;
    if (pFVar1 != (FVirtualShadowMapPerLightCacheEntry *)0x0) {
      iVar10 = (pFVar1->ShadowMapEntries).ArrayNum;
      uVar11 = 0;
      if ((int)uVar22 < iVar10) {
        uVar11 = uVar19;
      }
      if (uVar11 == 0) {
        local_35c8 = (FPackedView *)(longlong)(int)uVar22;
        local_35c0 = (FPackedView *)(longlong)iVar10;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TVar21 = local_3598;
      _Src = (pFVar1->ShadowMapEntries).AllocatorInstance.Data + (longlong)local_3598;
      if (param_4) {
        local_d68 = *(int *)(_Src + 0x890);
        memcpy(local_1e98 + 0x880,_Src,0x880);
        local_d70 = local_d70 | 1;
      }
      if (param_5) {
        *(TIntPoint<int> *)(_Src + 0x1120) = local_d98._s_0.Min.field0_0x0;
        *(TIntPoint<int> *)(_Src + 0x1128) = local_d98._s_0.Max.field0_0x0;
        *(int *)(_Src + 0x1130) = local_d6c;
        if ((((double)local_1698[0]._0_8_ == *(double *)(_Src + 0x10a0)) &&
            ((double)local_1698[0]._8_8_ == *(double *)(_Src + 0x10a8))) &&
           ((double)local_1698[0]._16_8_ == *(double *)(_Src + 0x10b0))) {
          pFVar24 = _Src + 0xea0;
          lVar25 = 0;
          lVar18 = 0x600 - (longlong)pFVar24;
          do {
            lVar15 = 0;
            pFVar12 = pFVar24;
            do {
              if (*(double *)pFVar12 != *(double *)(pFVar12 + (longlong)(local_1e98 + lVar18)))
              goto LAB_1457d36a3;
              lVar15 = lVar15 + 1;
              pFVar12 = pFVar12 + 8;
            } while (lVar15 < 4);
            lVar25 = lVar25 + 1;
            pFVar24 = pFVar24 + 0x20;
          } while (lVar25 < 4);
          _Src[0x1134] = (FScriptContainerElement)0x0;
        }
        else {
LAB_1457d36a3:
          _Src[0x1134] = (FScriptContainerElement)0x1;
          memcpy(_Src + 0x8a0,local_1e98,0x880);
        }
      }
    }
    pFVar13 = CreateNanitePackedView(&local_3578,(FPackedViewParams *)local_1e98);
    lVar18 = 7;
    pFVar8 = &local_cd8;
    do {
      pFVar16 = pFVar8;
      pFVar14 = pFVar13;
      uVar4 = *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar16->SVPositionToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar16->SVPositionToTranslatedWorld).M[0] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar16->SVPositionToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar16->SVPositionToTranslatedWorld).M[1] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar16->SVPositionToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar16->SVPositionToTranslatedWorld).M[2] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar16->SVPositionToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar16->SVPositionToTranslatedWorld).M[3] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar16->ViewToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar16->ViewToTranslatedWorld).M[0] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar16->ViewToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar16->ViewToTranslatedWorld).M[1] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar16->ViewToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar16->ViewToTranslatedWorld).M[2] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar16->ViewToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar16->ViewToTranslatedWorld).M[3] + 2) = uVar4;
      lVar18 = lVar18 + -1;
      pFVar13 = (FPackedView *)&pFVar14->TranslatedWorldToView;
      pFVar8 = (FPackedView *)&pFVar16->TranslatedWorldToView;
    } while (lVar18 != 0);
    uVar4 = *(undefined8 *)((pFVar14->TranslatedWorldToView).M[0] + 2);
    *(undefined8 *)(pFVar16->TranslatedWorldToView).M[0] =
         *(undefined8 *)(pFVar14->TranslatedWorldToView).M[0];
    *(undefined8 *)((pFVar16->TranslatedWorldToView).M[0] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar14->TranslatedWorldToView).M[1] + 2);
    *(undefined8 *)(pFVar16->TranslatedWorldToView).M[1] =
         *(undefined8 *)(pFVar14->TranslatedWorldToView).M[1];
    *(undefined8 *)((pFVar16->TranslatedWorldToView).M[1] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar14->TranslatedWorldToView).M[2] + 2);
    *(undefined8 *)(pFVar16->TranslatedWorldToView).M[2] =
         *(undefined8 *)(pFVar14->TranslatedWorldToView).M[2];
    *(undefined8 *)((pFVar16->TranslatedWorldToView).M[2] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar14->TranslatedWorldToView).M[3] + 2);
    *(undefined8 *)(pFVar16->TranslatedWorldToView).M[3] =
         *(undefined8 *)(pFVar14->TranslatedWorldToView).M[3];
    *(undefined8 *)((pFVar16->TranslatedWorldToView).M[3] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar14->TranslatedWorldToClip).M[0] + 2);
    *(undefined8 *)(pFVar16->TranslatedWorldToClip).M[0] =
         *(undefined8 *)(pFVar14->TranslatedWorldToClip).M[0];
    *(undefined8 *)((pFVar16->TranslatedWorldToClip).M[0] + 2) = uVar4;
    pFVar13 = (param_6->AllocatorInstance).Data;
    if ((pFVar13 <= &local_cd8) && (&local_cd8 < pFVar13 + param_6->ArrayMax)) {
      local_35b0 = (longlong)param_6->ArrayNum;
      local_35a8 = 0x3d0;
      local_35c8 = &local_cd8;
      local_35c0 = pFVar13;
      local_35b8 = (longlong)param_6->ArrayMax;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar10 = param_6->ArrayNum;
    if (iVar10 == param_6->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_>
                         (0x3d0,0x10,&param_6->AllocatorInstance,&param_6->ArrayMax);
    }
    param_6->ArrayNum = iVar10 + 1;
    lVar18 = 7;
    pFVar13 = &local_cd8;
    pFVar8 = (param_6->AllocatorInstance).Data + iVar10;
    do {
      pFVar16 = pFVar8;
      pFVar14 = pFVar13;
      uVar4 = *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar16->SVPositionToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar16->SVPositionToTranslatedWorld).M[0] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar16->SVPositionToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar16->SVPositionToTranslatedWorld).M[1] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar16->SVPositionToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar16->SVPositionToTranslatedWorld).M[2] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar16->SVPositionToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar16->SVPositionToTranslatedWorld).M[3] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar16->ViewToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar16->ViewToTranslatedWorld).M[0] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar16->ViewToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar16->ViewToTranslatedWorld).M[1] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar16->ViewToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar16->ViewToTranslatedWorld).M[2] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar16->ViewToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar16->ViewToTranslatedWorld).M[3] + 2) = uVar4;
      lVar18 = lVar18 + -1;
      pFVar13 = (FPackedView *)&pFVar14->TranslatedWorldToView;
      pFVar8 = (FPackedView *)&pFVar16->TranslatedWorldToView;
    } while (lVar18 != 0);
    uVar4 = *(undefined8 *)((pFVar14->TranslatedWorldToView).M[0] + 2);
    uVar23 = (ulonglong)(uVar22 + 1);
    uVar26 = uVar26 + 0xc0;
    local_3598._s_0 = TVar21._s_0 + 0x12b0;
    *(undefined8 *)(pFVar16->TranslatedWorldToView).M[0] =
         *(undefined8 *)(pFVar14->TranslatedWorldToView).M[0];
    *(undefined8 *)((pFVar16->TranslatedWorldToView).M[0] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar14->TranslatedWorldToView).M[1] + 2);
    *(undefined8 *)(pFVar16->TranslatedWorldToView).M[1] =
         *(undefined8 *)(pFVar14->TranslatedWorldToView).M[1];
    *(undefined8 *)((pFVar16->TranslatedWorldToView).M[1] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar14->TranslatedWorldToView).M[2] + 2);
    *(undefined8 *)(pFVar16->TranslatedWorldToView).M[2] =
         *(undefined8 *)(pFVar14->TranslatedWorldToView).M[2];
    *(undefined8 *)((pFVar16->TranslatedWorldToView).M[2] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar14->TranslatedWorldToView).M[3] + 2);
    *(undefined8 *)(pFVar16->TranslatedWorldToView).M[3] =
         *(undefined8 *)(pFVar14->TranslatedWorldToView).M[3];
    *(undefined8 *)((pFVar16->TranslatedWorldToView).M[3] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar14->TranslatedWorldToClip).M[0] + 2);
    *(undefined8 *)(pFVar16->TranslatedWorldToClip).M[0] =
         *(undefined8 *)(pFVar14->TranslatedWorldToClip).M[0];
    *(undefined8 *)((pFVar16->TranslatedWorldToClip).M[0] + 2) = uVar4;
  } while( true );
}

// AddRenderViewsLocal @ 1457d3900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::AddRenderViewsLocal
          (FVirtualShadowMapArray *this,FProjectedShadowInfo *param_1,
          TArrayView<FViewInfo_const_,int> *param_2,float param_3,bool param_4,bool param_5,
          TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_6)

{
  FVirtualShadowMapPerLightCacheEntry *pFVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  TConsoleVariableData<int> *pTVar5;
  FProjectedShadowInfo *this_00;
  FPackedView *pFVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FViewMatrices *pFVar10;
  longlong lVar11;
  FViewInfo *pFVar12;
  FScriptContainerElement *pFVar13;
  FPackedView *pFVar14;
  FPackedView *pFVar15;
  longlong lVar16;
  FPackedView *pFVar17;
  longlong lVar18;
  uint uVar19;
  FScriptContainerElement *_Src;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_3488 [32];
  FPackedView *local_3468;
  FPackedView *local_3460;
  longlong local_3458;
  longlong local_3450;
  undefined8 local_3448;
  TIntPoint<int>_u_0 local_3438;
  FProjectedShadowInfo *local_3430;
  FPackedView local_3408;
  FPackedViewParams local_3038;
  undefined1 local_1e78 [2048];
  TVector<double>_u_0 local_1678 [5];
  undefined1 local_15f8 [2176];
  TIntRect<int>_u_0 local_d78;
  TIntPoint<int>_u_0 local_d68;
  uint local_d60;
  float local_d5c;
  float local_d58;
  float local_d54;
  uint local_d50;
  int local_d4c;
  int local_d48;
  int local_d44;
  int local_d40;
  float local_d3c;
  TIntRect<int>_u_0 local_d38;
  float local_d28;
  bool local_d24;
  TVector<double>_u_0 local_d20;
  float local_d08;
  float local_d04;
  longlong local_cf8;
  longlong lStack_cf0;
  longlong local_ce8;
  double dStack_ce0;
  uint local_cd8;
  uint local_cd4;
  bool local_cd0;
  bool local_ccf;
  int local_ccc;
  TVector2<float>_u_0 local_cc8;
  FPackedView local_cb8;
  FViewMatrices local_8e8;
  ulonglong local_68;
  undefined8 uStack_48;
  
  uStack_48 = 0x1457d391f;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3488;
  local_3430 = param_1;
  Nanite::FPackedViewParams::FPackedViewParams(&local_3038);
  local_3038.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)_UNK_151030628;
  local_3038.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)_UNK_151030628;
  local_3038.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)___xmm_00004000000040000000000000000000;
  local_3038.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)___xmm_00004000000040000000000000000000;
  if ((this->bInitialized == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                         ,0x421,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_3438 = (this->UniformParameters).PhysicalPoolSize.field0_0x0;
  local_3038.MaxPixelsPerEdgeMultipler = __real_3f800000 / param_3;
  local_3038.PrevTargetLayerIndex = -1;
  local_3038.TargetMipLevel = 0;
  local_3038.TargetMipCount = 8;
  local_3038.Flags = 6;
  if (param_1->LightSceneInfo->Proxy != (FLightSceneProxy *)0x0) {
    local_3038.bUseLightingChannelMask = true;
    local_3038.LightingChannelMask = (uint)param_1->LightSceneInfo->Proxy->LightingChannelMask;
  }
  uVar20 = 0;
  local_3038.RasterContextSize.field0_0x0 = local_3438;
  if (param_2->ArrayNum < 1) {
    local_3468 = (FPackedView *)0x0;
    local_3460 = (FPackedView *)(longlong)param_2->ArrayNum;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar10 = FSceneView::GetShadowViewMatrices((FSceneView *)param_2->DataPtr);
  uVar19 = 1;
  iVar8 = param_2->ArrayNum;
  dVar25 = (param_1->PreShadowTranslation).field0_0x0._s_0.Y +
           (pFVar10->ViewOrigin).field0_0x0._s_0.Y;
  dVar3 = (pFVar10->ViewOrigin).field0_0x0._s_0.X +
          (param_1->PreShadowTranslation).field0_0x0._s_0.X;
  dVar23 = (param_1->PreShadowTranslation).field0_0x0._s_0.Z +
           (pFVar10->ViewOrigin).field0_0x0._s_0.Z;
  dVar3 = dVar25 * dVar25 + dVar3 * dVar3 + dVar23 * dVar23;
  uVar9 = 0;
  if (1 < iVar8) {
    do {
      uVar20 = 0;
      if ((int)uVar19 < iVar8) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_3460 = (FPackedView *)(longlong)iVar8;
        local_3468 = (FPackedView *)(longlong)(int)uVar19;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar10 = FSceneView::GetShadowViewMatrices((FSceneView *)(param_2->DataPtr + (int)uVar19));
      dVar25 = (pFVar10->ViewOrigin).field0_0x0._s_0.Z +
               (param_1->PreShadowTranslation).field0_0x0._s_0.Z;
      dVar24 = (pFVar10->ViewOrigin).field0_0x0._s_0.Y +
               (param_1->PreShadowTranslation).field0_0x0._s_0.Y;
      dVar23 = (pFVar10->ViewOrigin).field0_0x0._s_0.X +
               (param_1->PreShadowTranslation).field0_0x0._s_0.X;
      dVar25 = dVar24 * dVar24 + dVar23 * dVar23 + dVar25 * dVar25;
      uVar20 = uVar19;
      if (dVar3 <= dVar25) {
        uVar20 = uVar9;
        dVar25 = dVar3;
      }
      dVar3 = dVar25;
      uVar19 = uVar19 + 1;
      uVar9 = uVar20;
    } while ((int)uVar19 < iVar8);
  }
  pFVar1 = (param_1->VirtualShadowMapPerLightCacheEntry).Object;
  local_3438 = (TIntPoint<int>_u_0)
               (local_3430->VirtualShadowMapPerLightCacheEntry).SharedReferenceCount.
               ReferenceController;
  if (local_3438 != (TIntPoint<int>_u_0)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_3438)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_3438)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FVirtualShadowMapPerLightCacheEntry *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CacheEntry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x1219,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar8 = (**(code **)(*(longlong *)this->Scene + 0x4e8))();
  pFVar1->RenderedFrameNumber = iVar8;
  pTVar5 = CVarNonNaniteUseRadiusThreshold.Ref;
  bVar7 = IsInParallelGameThread();
  if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
    lVar11 = 0;
  }
  else {
    lVar11 = 4;
  }
  if ((*(int *)((longlong)pTVar5->ShadowedValue + lVar11) != 0) && (pFVar1->bIsUncached != false)) {
    local_3038.Flags = local_3038.Flags | 0x20;
    local_3038.MinBoundsRadius = GMinScreenRadiusForShadowCaster;
  }
  local_3038.Flags =
       -(uint)(pFVar1->bUseReceiverMask != false) & 0x40 |
       local_3038.Flags | -(uint)(pFVar1->bIsUncached != false) & 8;
  pFVar12 = TArrayView<FViewInfo_const_,int>::operator[](param_2,uVar20);
  Nanite::SetCullingViewOverrides(pFVar12,&local_3038);
  this_00 = local_3430;
  uVar20 = 0;
  lVar11 = 0;
  do {
    if ((pFVar1->ShadowMapEntries).ArrayNum <= (int)uVar20) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_3438);
      return;
    }
    iVar8 = (pFVar1->ShadowMapEntries).ArrayNum;
    uVar9 = 0;
    if ((int)uVar20 < iVar8) {
      uVar9 = ~uVar20 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_3468 = (FPackedView *)(longlong)(int)uVar20;
      local_3460 = (FPackedView *)(longlong)iVar8;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    _Src = (pFVar1->ShadowMapEntries).AllocatorInstance.Data + lVar11;
    memcpy(local_1e78,&local_3038,0x880);
    memcpy(local_1e78 + 0x880,&local_3038.PrevViewMatrices,0x880);
    local_d78._s_0.Min.field0_0x0 = local_3038.ViewRect.field0_0x0._s_0.Min.field0_0x0;
    local_d78._s_0.Max.field0_0x0 = local_3038.ViewRect.field0_0x0._s_0.Max.field0_0x0;
    local_d68 = local_3038.RasterContextSize.field0_0x0;
    local_d60 = local_3038.StreamingPriorityCategory;
    local_d50 = local_3038.Flags;
    local_d48 = local_3038.PrevTargetLayerIndex;
    local_d44 = local_3038.TargetMipLevel;
    local_d40 = local_3038.TargetMipCount;
    local_d38._s_0.Min.field0_0x0 = local_3038.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0;
    local_d38._s_0.Max.field0_0x0 = local_3038.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0;
    local_d5c = local_3038.MinBoundsRadius;
    local_d24 = local_3038.bUseCullingViewOverrides;
    local_d54 = local_3038.ViewLODDistanceFactor;
    local_cd8 = local_3038.InstanceOcclusionQueryMask;
    local_d3c = local_3038.RangeBasedCullingDistance;
    local_cd4 = local_3038.LightingChannelMask;
    local_d28 = local_3038.MaxPixelsPerEdgeMultipler;
    local_cd0 = local_3038.bUseLightingChannelMask;
    local_d58 = local_3038.LODScaleFactor;
    local_d20._s_0.X = local_3038.CullingViewOrigin.field0_0x0._s_0.X;
    local_d20._s_0.Y = local_3038.CullingViewOrigin.field0_0x0._s_0.Y;
    local_ccf = local_3038.bUseCurrentPreTranslationForHZB;
    local_d20._s_0.Z = local_3038.CullingViewOrigin.field0_0x0._s_0.Z;
    local_ccc = local_3038.SceneRendererPrimaryViewId;
    local_d08 = local_3038.CullingViewScreenMultipleSq;
    local_d04 = local_3038.CullingViewMinRadiusTestFactorSq;
    local_cc8 = local_3038.DynamicDepthCullRange.field0_0x0;
    local_cf8 = local_3038.GlobalClippingPlane._padding_;
    lStack_cf0 = local_3038.GlobalClippingPlane._padding_;
    local_ce8 = local_3038.GlobalClippingPlane._padding_;
    dStack_ce0 = local_3038.GlobalClippingPlane.W;
    local_d4c = pFVar1->VirtualShadowMapId + uVar20;
    pFVar10 = FProjectedShadowInfo::GetShadowDepthRenderingViewMatrices
                        (this_00,&local_8e8,uVar20,true);
    memcpy(local_1e78,pFVar10,0x880);
    local_d3c = (float)(**(code **)(this_00->LightSceneInfo->Proxy->_padding_ + 0x18))();
    if (param_4) {
      local_d48 = *(int *)(_Src + 0x890);
      memcpy(local_1e78 + 0x880,_Src,0x880);
      local_d50 = local_d50 | 1;
    }
    if (param_5) {
      *(TIntPoint<int> *)(_Src + 0x1120) = local_d78._s_0.Min.field0_0x0;
      *(TIntPoint<int> *)(_Src + 0x1128) = local_d78._s_0.Max.field0_0x0;
      *(int *)(_Src + 0x1130) = local_d4c;
      if ((((double)local_1678[0]._0_8_ == *(double *)(_Src + 0x10a0)) &&
          ((double)local_1678[0]._8_8_ == *(double *)(_Src + 0x10a8))) &&
         ((double)local_1678[0]._16_8_ == *(double *)(_Src + 0x10b0))) {
        pFVar21 = _Src + 0xea0;
        lVar22 = 0;
        lVar18 = 0x600 - (longlong)pFVar21;
        do {
          lVar16 = 0;
          pFVar13 = pFVar21;
          do {
            if (*(double *)pFVar13 != *(double *)(pFVar13 + (longlong)(local_1e78 + lVar18)))
            goto LAB_1457d4023;
            lVar16 = lVar16 + 1;
            pFVar13 = pFVar13 + 8;
          } while (lVar16 < 4);
          lVar22 = lVar22 + 1;
          pFVar21 = pFVar21 + 0x20;
        } while (lVar22 < 4);
        _Src[0x1134] = (FScriptContainerElement)0x0;
      }
      else {
LAB_1457d4023:
        _Src[0x1134] = (FScriptContainerElement)0x1;
        memcpy(_Src + 0x8a0,local_1e78,0x880);
      }
    }
    pFVar14 = CreateNanitePackedView(&local_3408,(FPackedViewParams *)local_1e78);
    lVar18 = 7;
    pFVar6 = &local_cb8;
    do {
      pFVar17 = pFVar6;
      pFVar15 = pFVar14;
      uVar4 = *(undefined8 *)((pFVar15->SVPositionToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar17->SVPositionToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar15->SVPositionToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar17->SVPositionToTranslatedWorld).M[0] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->SVPositionToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar17->SVPositionToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar15->SVPositionToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar17->SVPositionToTranslatedWorld).M[1] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->SVPositionToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar17->SVPositionToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar15->SVPositionToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar17->SVPositionToTranslatedWorld).M[2] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->SVPositionToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar17->SVPositionToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar15->SVPositionToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar17->SVPositionToTranslatedWorld).M[3] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->ViewToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar17->ViewToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar15->ViewToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar17->ViewToTranslatedWorld).M[0] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->ViewToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar17->ViewToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar15->ViewToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar17->ViewToTranslatedWorld).M[1] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->ViewToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar17->ViewToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar15->ViewToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar17->ViewToTranslatedWorld).M[2] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->ViewToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar17->ViewToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar15->ViewToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar17->ViewToTranslatedWorld).M[3] + 2) = uVar4;
      lVar18 = lVar18 + -1;
      pFVar14 = (FPackedView *)&pFVar15->TranslatedWorldToView;
      pFVar6 = (FPackedView *)&pFVar17->TranslatedWorldToView;
    } while (lVar18 != 0);
    uVar4 = *(undefined8 *)((pFVar15->TranslatedWorldToView).M[0] + 2);
    *(undefined8 *)(pFVar17->TranslatedWorldToView).M[0] =
         *(undefined8 *)(pFVar15->TranslatedWorldToView).M[0];
    *(undefined8 *)((pFVar17->TranslatedWorldToView).M[0] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar15->TranslatedWorldToView).M[1] + 2);
    *(undefined8 *)(pFVar17->TranslatedWorldToView).M[1] =
         *(undefined8 *)(pFVar15->TranslatedWorldToView).M[1];
    *(undefined8 *)((pFVar17->TranslatedWorldToView).M[1] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar15->TranslatedWorldToView).M[2] + 2);
    *(undefined8 *)(pFVar17->TranslatedWorldToView).M[2] =
         *(undefined8 *)(pFVar15->TranslatedWorldToView).M[2];
    *(undefined8 *)((pFVar17->TranslatedWorldToView).M[2] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar15->TranslatedWorldToView).M[3] + 2);
    *(undefined8 *)(pFVar17->TranslatedWorldToView).M[3] =
         *(undefined8 *)(pFVar15->TranslatedWorldToView).M[3];
    *(undefined8 *)((pFVar17->TranslatedWorldToView).M[3] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar15->TranslatedWorldToClip).M[0] + 2);
    *(undefined8 *)(pFVar17->TranslatedWorldToClip).M[0] =
         *(undefined8 *)(pFVar15->TranslatedWorldToClip).M[0];
    *(undefined8 *)((pFVar17->TranslatedWorldToClip).M[0] + 2) = uVar4;
    pFVar14 = (param_6->AllocatorInstance).Data;
    if ((pFVar14 <= &local_cb8) && (&local_cb8 < pFVar14 + param_6->ArrayMax)) {
      local_3450 = (longlong)param_6->ArrayNum;
      local_3448 = 0x3d0;
      local_3468 = &local_cb8;
      local_3460 = pFVar14;
      local_3458 = (longlong)param_6->ArrayMax;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar8 = param_6->ArrayNum;
    if (iVar8 == param_6->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_>
                        (0x3d0,0x10,&param_6->AllocatorInstance,&param_6->ArrayMax);
    }
    param_6->ArrayNum = iVar8 + 1;
    lVar18 = 7;
    pFVar14 = &local_cb8;
    pFVar6 = (param_6->AllocatorInstance).Data + iVar8;
    do {
      pFVar17 = pFVar6;
      pFVar15 = pFVar14;
      uVar4 = *(undefined8 *)((pFVar15->SVPositionToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar17->SVPositionToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar15->SVPositionToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar17->SVPositionToTranslatedWorld).M[0] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->SVPositionToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar17->SVPositionToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar15->SVPositionToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar17->SVPositionToTranslatedWorld).M[1] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->SVPositionToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar17->SVPositionToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar15->SVPositionToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar17->SVPositionToTranslatedWorld).M[2] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->SVPositionToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar17->SVPositionToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar15->SVPositionToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar17->SVPositionToTranslatedWorld).M[3] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->ViewToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar17->ViewToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar15->ViewToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar17->ViewToTranslatedWorld).M[0] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->ViewToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar17->ViewToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar15->ViewToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar17->ViewToTranslatedWorld).M[1] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->ViewToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar17->ViewToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar15->ViewToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar17->ViewToTranslatedWorld).M[2] + 2) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->ViewToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar17->ViewToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar15->ViewToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar17->ViewToTranslatedWorld).M[3] + 2) = uVar4;
      lVar18 = lVar18 + -1;
      pFVar14 = (FPackedView *)&pFVar15->TranslatedWorldToView;
      pFVar6 = (FPackedView *)&pFVar17->TranslatedWorldToView;
    } while (lVar18 != 0);
    uVar4 = *(undefined8 *)((pFVar15->TranslatedWorldToView).M[0] + 2);
    uVar20 = uVar20 + 1;
    lVar11 = lVar11 + 0x12b0;
    *(undefined8 *)(pFVar17->TranslatedWorldToView).M[0] =
         *(undefined8 *)(pFVar15->TranslatedWorldToView).M[0];
    *(undefined8 *)((pFVar17->TranslatedWorldToView).M[0] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar15->TranslatedWorldToView).M[1] + 2);
    *(undefined8 *)(pFVar17->TranslatedWorldToView).M[1] =
         *(undefined8 *)(pFVar15->TranslatedWorldToView).M[1];
    *(undefined8 *)((pFVar17->TranslatedWorldToView).M[1] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar15->TranslatedWorldToView).M[2] + 2);
    *(undefined8 *)(pFVar17->TranslatedWorldToView).M[2] =
         *(undefined8 *)(pFVar15->TranslatedWorldToView).M[2];
    *(undefined8 *)((pFVar17->TranslatedWorldToView).M[2] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar15->TranslatedWorldToView).M[3] + 2);
    *(undefined8 *)(pFVar17->TranslatedWorldToView).M[3] =
         *(undefined8 *)(pFVar15->TranslatedWorldToView).M[3];
    *(undefined8 *)((pFVar17->TranslatedWorldToView).M[3] + 2) = uVar4;
    uVar4 = *(undefined8 *)((pFVar15->TranslatedWorldToClip).M[0] + 2);
    *(undefined8 *)(pFVar17->TranslatedWorldToClip).M[0] =
         *(undefined8 *)(pFVar15->TranslatedWorldToClip).M[0];
    *(undefined8 *)((pFVar17->TranslatedWorldToClip).M[0] + 2) = uVar4;
  } while( true );
}

// AddVisualizePass @ 1457d4260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FScreenPassTexture * __thiscall
FVirtualShadowMapArray::AddVisualizePass
          (FVirtualShadowMapArray *this,FScreenPassTexture *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,int param_3,EVSMVisualizationPostPass param_4,
          FSceneUniformBuffer *param_5,FScreenPassTexture *param_6,FScreenPassTexture *param_7,
          FScreenPassRenderTarget *param_8)

{
  ulonglong *puVar1;
  longlong *plVar2;
  EUniformBufferBindingFlags EVar3;
  char cVar4;
  float fVar5;
  TVector2<float>_u_0 TVar6;
  FGlobalShaderMap *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  TVector2<float>_u_0 TVar10;
  TVector2<float> TVar11;
  TVector2<float> TVar12;
  TVector2<float>_u_0 TVar13;
  TVector2<float> TVar14;
  TVector2<float>_u_0 TVar15;
  TVector2<float>_u_0 TVar16;
  FRenderTargetBindingSlots *pFVar17;
  char cVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  Type TVar22;
  EDebugViewShaderMode EVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  FScreenPassTexture *pFVar27;
  FCanvas *this_00;
  FRDGTexture *pFVar28;
  FShaderType *pFVar29;
  FName FVar30;
  undefined8 *puVar31;
  FViewShaderParameters *pFVar32;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar33;
  FShaderParametersMetadata *pFVar34;
  FRDGTexture *pFVar35;
  FScreenPassTextureViewportParameters *pFVar36;
  FScreenTransform *pFVar37;
  FScreenTransform *pFVar38;
  FLowLevelMemTracker *pFVar39;
  FPageAllocator *this_01;
  FRDGScope *pFVar40;
  int iVar41;
  longlong lVar42;
  float fVar43;
  FVirtualShadowMapArrayCacheManager *pFVar44;
  TIntPoint<int>_u_0 TVar45;
  FVisualizationDataLegendEntry *pFVar46;
  ulonglong *puVar47;
  float *pfVar48;
  int *piVar49;
  longlong lVar50;
  FParameters *pFVar51;
  undefined1 auStackY_958 [32];
  TArray<FVisualizationDataLegendEntry,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_900;
  FVirtualShadowMapArrayCacheManager *local_8f0;
  TIntPoint<int>_u_0_s_0 local_8e8;
  TVector2<float>_u_0 local_8e0;
  TVector2<float>_u_0 local_8d8;
  TVector2<float>_u_0 local_8d0;
  float local_8c8;
  float fStack_8c4;
  TVector2<float>_u_0 local_8c0;
  undefined8 local_8b8;
  TVector2<float>_u_0 local_8b0;
  TIntPoint<int>_u_0_s_0 local_8a8;
  float local_8a0;
  float fStack_89c;
  undefined8 *local_898;
  undefined8 *local_890;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_880;
  undefined1 local_87c;
  undefined2 local_87b;
  undefined1 local_879;
  FRDGTexture *local_878;
  EUniformBufferBindingFlags EStack_870;
  undefined7 uStack_86f;
  undefined4 local_868;
  undefined4 local_864;
  undefined4 local_860;
  undefined1 local_85c;
  undefined2 local_85b;
  undefined1 local_859;
  TArray<FVisualizationDataLegendEntry,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_858;
  undefined1 local_848 [24];
  FString local_830;
  FString local_820;
  TVector2<float>_u_0 local_808;
  TVector2<float>_u_0 TStack_800;
  TVector2<float>_u_0 local_7f8;
  TVector2<float>_u_0 TStack_7f0;
  TVector2<float>_u_0 local_7e8;
  TIntPoint<int>_u_0_s_0 TStack_7e0;
  undefined8 local_7d8;
  undefined1 uStack_7d0;
  uint7 uStack_7cf;
  float local_7c8;
  float fStack_7c4;
  float local_7c0;
  float fStack_7bc;
  FRDGTexture *local_7b8;
  TIntRect<int>_u_0 local_7b0;
  undefined1 local_7a0;
  FRenderTargetBinding local_798;
  TIntPoint<int>_u_0 local_780;
  TIntRect<int>_u_0 local_778;
  TIntPoint<int>_u_0 local_768;
  TIntRect<int>_u_0 local_760;
  FRenderTargetBinding local_750;
  FString local_738;
  Type local_728;
  int iStack_724;
  int iStack_720;
  undefined4 uStack_71c;
  undefined8 local_718;
  TIntPoint<int>_u_0 local_710;
  undefined8 local_708;
  FVirtualShadowMapArrayCacheManager *local_700;
  undefined8 local_6f8;
  FScreenPassTexture *local_6f0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_6e8;
  char local_6d8;
  TVector2<float>_u_0 local_6d0;
  TVector2<float>_u_0 local_6c8;
  TVector2<float>_u_0 local_6c0;
  TVector2<float>_u_0 local_6b8;
  FString local_6b0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_6a0;
  char local_690;
  TVector2<float>_u_0 local_688;
  TVector2<float>_u_0 local_680;
  TVector2<float>_u_0 local_678;
  TVector2<float>_u_0 local_670;
  TVector2<float>_u_0 local_668;
  TVector2<float>_u_0 local_660;
  FString local_658;
  TVector2<float>_u_0 local_648;
  TVector2<float>_u_0 local_640;
  FVirtualShadowMapArray *local_638;
  FViewInfo *local_630;
  int local_628;
  FRDGBuilder *local_620;
  undefined1 *local_618;
  undefined8 *local_610;
  undefined8 *local_608;
  uint local_600;
  int local_5fc;
  int local_5f8;
  FScreenPassRenderTarget local_5e8;
  FScreenPassRenderTarget local_5c8;
  FText local_5a8;
  undefined8 local_598;
  undefined8 uStack_590;
  FText local_588;
  undefined8 local_578;
  undefined8 uStack_570;
  FText local_568;
  undefined8 local_558;
  undefined8 uStack_550;
  FText local_548;
  undefined8 local_538;
  undefined8 uStack_530;
  FText local_528;
  undefined8 local_518;
  undefined8 uStack_510;
  FText local_508;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  FScreenPassRenderTarget local_4e8;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined1 local_4bc;
  undefined2 local_4bb;
  undefined1 local_4b9;
  undefined8 local_4b8;
  TVector2<float>_u_0 local_4b0;
  TIntPoint<int>_u_0_s_0 local_4a8;
  undefined8 local_4a0;
  TVector2<float>_u_0 local_498;
  TIntPoint<int>_u_0_s_0 local_490;
  TVector2<float>_u_0 local_488;
  TVector2<float>_u_0 TStack_480;
  TVector2<float>_u_0 local_478;
  TVector2<float>_u_0 TStack_470;
  TVector2<float>_u_0 local_468;
  TIntPoint<int>_u_0_s_0 TStack_460;
  undefined8 local_458;
  longlong lStack_450;
  TVector2<float>_u_0 local_448;
  TVector2<float>_u_0 local_440;
  FParameters *local_438;
  undefined1 local_430;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined1 local_41c;
  undefined2 local_41b;
  undefined1 local_419;
  undefined8 local_418;
  TVector2<float>_u_0 local_410;
  TIntPoint<int>_u_0_s_0 local_408;
  undefined8 local_400;
  TVector2<float>_u_0 local_3f8;
  TIntPoint<int>_u_0_s_0 local_3f0;
  TVector2<float>_u_0 local_3e8;
  TVector2<float>_u_0 TStack_3e0;
  TVector2<float>_u_0 local_3d8;
  TVector2<float>_u_0 TStack_3d0;
  TVector2<float>_u_0 local_3c8;
  TIntPoint<int>_u_0_s_0 TStack_3c0;
  undefined8 local_3b8;
  longlong lStack_3b0;
  TVector2<float>_u_0 local_3a8;
  TVector2<float>_u_0 local_3a0;
  FParameters *local_398;
  undefined1 local_390;
  initializer_list<FRDGResource_*> local_388;
  FString local_378;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_> local_368;
  initializer_list<FRDGResource_*> local_358;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_> local_348;
  FString local_338;
  undefined1 local_328 [8];
  undefined1 local_320 [8];
  FScreenPassViewInfo local_318;
  TIntPoint<int>_u_0 local_300;
  undefined8 uStack_2f8;
  TIntPoint<int>_u_0 local_2e8;
  undefined8 uStack_2e0;
  FScreenPassTexture local_2d8;
  uint uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  uint uStack_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  FRDGEventName local_280;
  FRDGEventName local_268;
  FRDGEventName local_250;
  FScreenTransform local_238;
  FScreenTransform local_228;
  FScreenTransform local_218;
  FScreenTransform local_208;
  FScreenPassTextureViewportParameters local_1f8;
  FScreenPassTextureViewportParameters local_188;
  FVisualizationDataLegendEntry local_118;
  FText local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  FText local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  FText local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  FText local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  FText local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_958;
  lVar50 = (longlong)param_3;
  local_8d0 = (TVector2<float>_u_0)param_5;
  local_8e0 = (TVector2<float>_u_0)param_6->Texture;
  TVar6 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&(param_6->ViewRect).field0_0x0;
  local_8e8 = *(TIntPoint<int>_u_0_s_0 *)((longlong)&(param_6->ViewRect).field0_0x0 + 8);
  local_8d8 = (TVector2<float>_u_0)param_6;
  fVar43 = (float)local_8e8.Y;
  local_8c0 = TVar6;
  local_848._0_8_ = local_8e0;
  local_848._8_8_ = TVar6;
  local_848._16_8_ = local_8e8;
  local_6f0 = __return_storage_ptr__;
  if (((local_8e0 == (TVector2<float>_u_0)0x0) ||
      (((float)local_8e8.X == TVar6._s_0.X && (fVar43 == TVar6._s_0.Y)))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                          ,0xab,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    pFVar27 = (FScreenPassTexture *)(*pcVar8)();
    return pFVar27;
  }
  uVar9 = local_848._0_8_;
  local_8b8 = *(undefined8 *)&((FRDGTextureDesc *)((longlong)local_8e0 + 0x80))->field_0x24;
  local_878 = (FRDGTexture *)local_848._0_8_;
  if ((FRDGTexture *)local_848._0_8_ != (FRDGTexture *)0x0) {
    iVar24 = (((TIntPoint<int> *)(local_848._0_8_ + 0x150))->field0_0x0)._s_0.X;
    iVar41 = local_8e8.X;
    if (local_8e8.X < iVar24) {
      iVar41 = iVar24;
    }
    (((TIntPoint<int> *)(local_848._0_8_ + 0x150))->field0_0x0)._s_0.X = iVar41;
    fVar5 = (float)(((TIntPoint<int> *)(local_848._0_8_ + 0x150))->field0_0x0)._s_0.Y;
    if ((int)fVar43 < (int)fVar5) {
      fVar43 = fVar5;
    }
    (((TIntPoint<int> *)(local_848._0_8_ + 0x150))->field0_0x0)._s_0.Y = (int)fVar43;
  }
  pFVar44 = this->CacheManager;
  local_8f0 = pFVar44;
  local_8b0 = TVar6;
  local_8a8 = local_8e8;
  if ((pFVar44 != (FVirtualShadowMapArrayCacheManager *)0x0) && (param_4 == PostEditorPrimitives)) {
    local_8e0 = (TVector2<float>_u_0)CVarShowStatsVisible.Ref;
    bVar19 = IsInParallelGameThread();
    if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
      lVar42 = 0;
    }
    else {
      lVar42 = 1;
    }
    TVar22 = GVSMStatSectionsEnabled;
    if (*(char *)((longlong)(longlong *)local_8e0 + lVar42) == '\0') {
      TVar22 = None;
    }
    if ((TVar22 & Clusters) != None) {
      local_7b0._0_8_ = local_8c0;
      local_7b0._8_4_ = local_8e8.X;
      local_7b0._12_4_ = local_8e8.Y;
      local_7b8 = (FRDGTexture *)uVar9;
      local_7a0 = 1;
      FRDGEventName::FRDGEventName(&local_268,1,L"NPFDiagnostics");
      local_700 = pFVar44;
      if (local_7b8 == (FRDGTexture *)0x0) {
LAB_1457d4453:
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Output.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                            ,0x2dd,L"");
        if (bVar19) {
          pcVar8 = (code *)swi(3);
          pFVar27 = (FScreenPassTexture *)(*pcVar8)();
          return pFVar27;
        }
      }
      else if (local_7b0._8_4_ == local_7b0._0_4_) {
        if (local_7b0._12_4_ == local_7b0._4_4_) goto LAB_1457d4453;
      }
      this_00 = FCanvas::Create(param_1,local_7b8,(FHitProxyConsumer *)0x0,
                                (FGameTime *)(param_2->_padding_ + 0x88),(Type)param_2->_padding_,
                                *(float *)(param_2->_padding_ + 0xd8));
      FCanvas::SetRenderTargetRect(this_00,(TIntRect<int> *)&local_7b0._s_0);
      `FVirtualShadowMapArrayCacheManager::AddVisualizePass'::__l5::<lambda_1>::operator()
                (&local_700,this_00);
      FCanvas::Flush_RenderThread(this_00,param_1,false);
      if (local_268.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_268.FormattedEventName.Data.AllocatorInstance.Data);
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_8f0->NPFDiagnosticMessages,0,No);
    }
  }
  local_848._0_8_ = uVar9;
  local_8e0 = (TVector2<float>_u_0)GetVirtualShadowMapVisualizationData();
  plVar2 = (longlong *)(param_2->_padding_ + 800);
  if (((*(char *)(param_2->_padding_ + 200) == '\0') || (*(char *)(*plVar2 + 8) == '\0')) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                          ,0x7c0,
                          L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                         ), bVar19)) {
    pcVar8 = (code *)swi(3);
    pFVar27 = (FScreenPassTexture *)(*pcVar8)();
    return pFVar27;
  }
  pFVar44 = *(FVirtualShadowMapArrayCacheManager **)(*plVar2 + 0x2a8);
  local_8f0 = pFVar44;
  EVar23 = FSceneViewFamily::GetDebugViewShaderMode((FSceneViewFamily *)param_2->_padding_);
  if (((EVar23 != DVSM_ShadowCasters) || (pFVar44 == (FVirtualShadowMapArrayCacheManager *)0x0)) ||
     (bVar19 = true, (((FRDGTexture *)pFVar44)->_padding_ & 0x400) == 0)) {
    bVar19 = false;
  }
  if (((*(int *)(param_2->_padding_ + 0x48) < 0) &&
      (bVar20 = FVirtualShadowMapVisualizationData::IsActive
                          ((FVirtualShadowMapVisualizationData *)local_8e0), bVar20)) &&
     ((this->PhysicalPagePoolRDG != (FRDGTexture *)0x0 &&
      ((this->PageTableRDG != (FRDGTexture *)0x0 && ((this->DebugVisualizationOutput).ArrayNum != 0)
       ))))) {
    bVar20 = true;
  }
  else {
    bVar20 = false;
  }
  if (!bVar19) {
    if (!bVar20) goto LAB_1457d6138;
    uVar25 = 0;
    if (param_3 < (this->DebugVisualizationOutput).ArrayNum) {
      uVar25 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar8 = (code *)swi(3);
      pFVar27 = (FScreenPassTexture *)(*pcVar8)();
      return pFVar27;
    }
    local_718 = *(undefined8 *)
                 (*(longlong *)
                   ((this->DebugVisualizationOutput).AllocatorInstance.Data + lVar50 * 8) + 0xa4);
    local_710 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    uVar25 = *(int *)((longlong)local_8e0 + 0x58);
    uVar26 = 0;
    if (param_3 < (this->VisualizeLight).ArrayNum) {
      uVar26 = (uint)~param_3 >> 0x1f;
    }
    local_708 = local_718;
    if ((uVar26 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar8 = (code *)swi(3);
      pFVar27 = (FScreenPassTexture *)(*pcVar8)();
      return pFVar27;
    }
    iVar24 = *(int *)((this->VisualizeLight).AllocatorInstance.Data + lVar50 * 0x18 + 0x10);
    local_8d0 = (TVector2<float>_u_0)CVarVisualizeLayout.Ref;
    local_8f0 = (FVirtualShadowMapArrayCacheManager *)CONCAT44(local_8f0._4_4_,iVar24);
    bVar19 = IsInParallelRenderingThread();
    if ((!bVar19) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
      pcVar8 = (code *)swi(3);
      pFVar27 = (FScreenPassTexture *)(*pcVar8)();
      return pFVar27;
    }
    local_5f8 = *(int *)((longlong)local_8d0 + 4);
    if (local_5f8 == 1) {
      local_6f8 = local_8b0._s_0;
      TVar6._s_0 = local_6f8;
      iVar41 = (int)param_2->_padding_ - (int)param_2->_padding_;
      local_6f8._4_4_ = local_8b0._s_0.Y;
      local_8a8.Y = (*(int *)((longlong)&param_2->_padding_ + 4) -
                    *(int *)((longlong)&param_2->_padding_ + 4)) / 3 + (int)local_6f8._4_4_;
      local_8a8.X = (int)(((longlong)iVar41 / 3 + ((longlong)iVar41 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    + iVar41 / 3 + (iVar41 >> 0x1f) + local_8b0._0_4_;
      local_6f8 = TVar6._s_0;
    }
    else if (local_5f8 == 2) {
      local_708 = CONCAT44(local_708._4_4_,((int)local_708 - local_710._0_4_) / 2 + local_710._0_4_)
      ;
      local_8a8.X = (local_8a8.X - local_8b0._0_4_) / 2 + local_8b0._0_4_;
    }
    local_638 = this;
    local_618 = local_848;
    local_610 = &local_8b8;
    local_608 = &local_718;
    local_630 = param_2;
    local_628 = param_3;
    local_620 = param_1;
    local_600 = uVar25;
    local_5fc = iVar24;
    if (param_4 == PreEditorPrimitives) {
      cVar21 = '\0';
      local_6d8 = '\0';
      cVar4 = *(char *)((longlong)&param_1->_padding_ + 6);
      cVar18 = cVar21;
      if ((cVar4 != '\0') &&
         ((cVar4 != '\x01' || (cVar18 = local_6d8, (param_1->_padding_ & 4) == 0)))) {
        local_6d8 = cVar21;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::Desc._padding_._0_4_ = 0x1443;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          local_2b0 = 0;
          uStack_2ac = 0;
          ::Desc._12_8_ = ZEXT48(uStack_2b4);
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)::u_VirtualShadowMa;
          ::Desc._padding_ = (longlong)::u_VirtualShadowMa;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FVirtualShadowMapArray::AddVisualizePass'::__l36::<lambda_3>::operator()<>'::
                 __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_368._Myfirst._Val = &::Desc;
        local_6e8.State = (FRDGScopeState *)param_1;
        pFVar40 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)pFVar40;
        local_6e8.Scope = pFVar40;
        TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
        Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_>_>
                  (&(pFVar40->Impl).Impl,(FRDGScopeState *)param_1,&local_368);
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(pFVar40,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(pFVar40,(FRHIComputeCommandList *)param_1->_padding_);
        }
        local_6d8 = '\x01';
        cVar18 = local_6d8;
      }
      local_6d8 = cVar18;
      TShaderMapRef<FScreenPassVS>::TShaderMapRef<FScreenPassVS>
                ((TShaderMapRef<FScreenPassVS> *)&local_648._s_0,param_2->ShaderMap);
      pFVar7 = param_2->ShaderMap;
      pFVar29 = (FShaderType *)FDesaturatePS::GetStaticType();
      FGlobalShaderMap::GetShader
                (pFVar7,(TShaderRefBase<FShader,FShaderMapPointerTable> *)&local_6c0._s_0,pFVar29,0)
      ;
      if (local_6c0 == (TVector2<float>_u_0)0x0) {
        FVar30 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_328);
        ::FName::ToString((FName *)FVar30,&local_378);
        FDesaturatePS::GetStaticType();
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_378.Data.AllocatorInstance.Data);
        }
        if (bVar19) {
          pcVar8 = (code *)swi(3);
          pFVar27 = (FScreenPassTexture *)(*pcVar8)();
          return pFVar27;
        }
      }
      FDesaturatePS::GetStaticType();
      TVar6 = local_8d8;
      local_8c0 = local_6b8;
      local_8d0 = (TVector2<float>_u_0)
                  FRDGBuilder::CreateTexture
                            (param_1,(FRDGTextureDesc *)(*(longlong *)local_8d8 + 0x80),
                             L"SceneColorCopy",None);
      AddCopyTexturePass(param_1,*(FRDGTexture **)TVar6,(FRDGTexture *)local_8d0,
                         UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue,
                         UE::Math::TIntPoint<int>::ZeroValue);
      puVar31 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x120,0x10);
      if (puVar31 == (undefined8 *)0x0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar19) {
          pcVar8 = (code *)swi(3);
          pFVar27 = (FScreenPassTexture *)(*pcVar8)();
          return pFVar27;
        }
      }
      else {
        *puVar31 = &___7__TObject_VFParameters_FDesaturatePS___FRDGAllocator__6B_;
        puVar31[2] = 0;
        puVar31[3] = 0;
        FRenderTargetBindingSlots::FRenderTargetBindingSlots
                  ((FRenderTargetBindingSlots *)(puVar31 + 4));
      }
      local_890 = puVar31;
      if ((((undefined8 **)param_1->_padding_ <= &local_890) &&
          (&local_890 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar27 = (FScreenPassTexture *)(*pcVar8)();
        return pFVar27;
      }
      iVar24 = (int)param_1->_padding_;
      piVar49 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar24 == *piVar49) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,piVar49);
      }
      pFVar51 = (FParameters *)(puVar31 + 2);
      *(int *)&param_1->_padding_ = iVar24 + 1;
      local_750.LoadAction = ENoAction;
      local_750.MipIndex = '\0';
      local_750.ArraySlice = -1;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar24 * 8) = local_890;
      pFVar51->InputTexture = (FRDGTexture *)local_8d0;
      puVar31[3] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                   ::StaticResource.StateRHI.Reference;
      local_750.Texture = (FRDGTexture *)local_848._0_8_;
      local_750.ResolveTexture = (FRDGTexture *)0x0;
      bVar19 = FRenderTargetBinding::Validate(&local_750);
      if ((!bVar19) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x216,L""), bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar27 = (FScreenPassTexture *)(*pcVar8)();
        return pFVar27;
      }
      puVar31[4] = local_750.Texture;
      puVar31[5] = local_750.ResolveTexture;
      local_8d8 = local_640;
      puVar31[6] = CONCAT44(local_750._20_4_,local_750._16_4_);
      local_888 = (undefined4)param_2->_padding_;
      local_884 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_880 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_87c = *(undefined1 *)((longlong)&param_2->_padding_ + 6);
      local_8d0 = local_648;
      local_8f0 = (FVirtualShadowMapArrayCacheManager *)
                  FRDGEventName::FRDGEventName(&local_280,1,L"Desaturate");
      local_8e0._s_0 =
           (TVector2<float>_u_0_s_0)
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      local_8e8 = (TIntPoint<int>_u_0_s_0)
                  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                  ::StaticResource.StateRHI.Reference;
      if ((local_648 == (TVector2<float>_u_0)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("VertexShader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                              ,0x206,L""), bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar27 = (FScreenPassTexture *)(*pcVar8)();
        return pFVar27;
      }
      if ((local_6c0 == (TVector2<float>_u_0)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("PixelShader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                              ,0x207,L""), bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar27 = (FScreenPassTexture *)(*pcVar8)();
        return pFVar27;
      }
      if ((pFVar51 == (FParameters *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("PixelShaderParameters",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                              ,0x208,L""), bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar27 = (FScreenPassTexture *)(*pcVar8)();
        return pFVar27;
      }
      pFVar34 = FDesaturatePS::FParameters::FTypeInfo::GetStructMetadata();
      TVar6 = local_8c0;
      local_680 = local_8c0;
      local_688 = local_6c0;
      ValidateShaderParameters
                ((TShaderRefBase<FShader,FShaderMapPointerTable> *)&local_688._s_0,pFVar34,pFVar51);
      local_388._First = (FRDGResource **)0x0;
      local_388._Last = (FRDGResource **)0x0;
      ClearUnusedGraphResourcesImpl
                ((FShaderParameterBindings *)local_6c0,pFVar34,pFVar51,&local_388);
      local_808 = local_8d0;
      TStack_800 = local_8d8;
      local_7e8 = local_8e0;
      TStack_7e0 = local_8e8;
      local_7d8 = GFilterVertexDeclaration._32_8_;
      local_428 = local_888;
      local_424 = local_884;
      local_420 = local_880;
      local_41c = local_87c;
      local_41b = local_87b;
      local_419 = local_879;
      local_3e8 = local_8d0;
      TStack_3e0 = local_8d8;
      local_7f8 = local_6c0;
      TStack_7f0 = TVar6;
      local_3d8 = local_6c0;
      TStack_3d0 = TVar6;
      uStack_7d0 = 0;
      lStack_3b0 = (ulonglong)uStack_7cf << 8;
      local_408 = local_8a8;
      local_3f0 = local_8a8;
      local_418 = local_8b8;
      local_410 = local_8b0;
      local_400 = local_8b8;
      local_3f8 = local_8b0;
      local_3c8 = local_8e0;
      TStack_3c0 = local_8e8;
      local_3a8 = local_6c0;
      local_3b8 = GFilterVertexDeclaration._32_8_;
      local_3a0 = TVar6;
      local_390 = 0;
      local_398 = pFVar51;
      pFVar34 = FDesaturatePS::FParameters::FTypeInfo::GetStructMetadata();
      FRDGBuilder::
      AddPassInternal<FDesaturatePS::FParameters,_AddDrawScreenPass<FDesaturatePS>_::__l2::<lambda_1>_>
                (param_1,(FRDGEventName *)local_8f0,pFVar34,pFVar51,Raster,(<lambda_1> *)&local_428)
      ;
      if (local_280.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_280.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (((((uVar25 < 0x11) && ((0x10116U >> (uVar25 & 0x1f) & 1) != 0)) || (uVar25 == 0x80)) ||
          ((uVar25 == 0x100 || (uVar25 == 0x200)))) || (uVar25 == 0x400)) {
        `FVirtualShadowMapArray::AddVisualizePass'::__l20::<lambda_2>::operator()(&local_638);
      }
      if (local_6d8 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_6e8);
      }
      goto LAB_1457d6138;
    }
    if (param_4 != PostEditorPrimitives) goto LAB_1457d6138;
    cVar4 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_690 = '\0';
    if ((cVar4 != '\0') && ((cVar4 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x1464;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_290 = 0;
        uStack_28c = 0;
        ::Desc._12_8_ = ZEXT48(uStack_294);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)::u_VirtualShadowMa;
        ::Desc._padding_ = (longlong)::u_VirtualShadowMa;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FVirtualShadowMapArray::AddVisualizePass'::__l49::<lambda_4>::operator()<>'::__l3
               ::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_348._Myfirst._Val = &::Desc;
      local_6a0.State = (FRDGScopeState *)param_1;
      pFVar40 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar40;
      local_6a0.Scope = pFVar40;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_>_>
                (&(pFVar40->Impl).Impl,(FRDGScopeState *)param_1,&local_348);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar40,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar40,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_690 = '\x01';
      iVar24 = (int)local_8f0;
    }
    if ((uVar25 - 0x20 & 0xffffffdf) == 0) {
      `FVirtualShadowMapArray::AddVisualizePass'::__l20::<lambda_2>::operator()(&local_638);
    }
    ::FName::ToString((FName *)((longlong)local_8e0 + 0x5c),&local_738);
    ::FString::FString(&local_820,&local_738);
    uVar26 = 0;
    if (param_3 < (this->VisualizeLight).ArrayNum) {
      uVar26 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar8 = (code *)swi(3);
      pFVar27 = (FScreenPassTexture *)(*pcVar8)();
      return pFVar27;
    }
    if (*(longlong *)((this->VisualizeLight).AllocatorInstance.Data + lVar50 * 0x18 + 8) != 0) {
      uVar26 = 0;
      if (param_3 < (this->VisualizeLight).ArrayNum) {
        uVar26 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        pFVar27 = (FScreenPassTexture *)(*pcVar8)();
        return pFVar27;
      }
      ::FString::FString(&local_6b0,
                         (FString *)
                         (*(longlong *)
                           ((this->VisualizeLight).AllocatorInstance.Data + lVar50 * 0x18 + 8) +
                         0x240));
      ::FString::PrintfImpl(&local_830,L"%s (%s)");
      if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_820.Data.AllocatorInstance.Data);
      }
      local_820.Data.AllocatorInstance.Data = local_830.Data.AllocatorInstance.Data;
      local_820.Data.ArrayNum = local_830.Data.ArrayNum;
      local_820.Data.ArrayMax = local_830.Data.ArrayMax;
      local_830.Data.ArrayNum = 0;
      local_830.Data.ArrayMax = 0;
      local_830.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
      }
    }
    local_8d8 = (TVector2<float>_u_0)0x41f0000042c80000;
    local_900.AllocatorInstance.Data = (FVisualizationDataLegendEntry *)0x0;
    local_900.ArrayNum = 0;
    local_900.ArrayMax = 0;
    local_8c8 = (float)(local_8b0._0_4_ + 8);
    fStack_8c4 = (float)(local_8a8.Y + -100);
    if (uVar25 == 1) {
      FText::AsLocalizable_Advanced_LocText
                (&local_5a8,L"VirtualShadowMap",L"VisualizeShadowFactorLit",L"Lit");
      local_598 = ___xmm_3f800000000000003f8000003f800000;
      uStack_590 = _UNK_150a07f68;
      iVar24 = local_900.ArrayNum;
      if (local_900.ArrayNum == local_900.ArrayMax) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisualizationDataLegendEntry>_>
                           (0x820,&local_900.AllocatorInstance,&local_900.ArrayMax);
      }
      local_900.ArrayNum = iVar24 + 1;
      pFVar46 = local_900.AllocatorInstance.Data + iVar24;
      FText::FText(&pFVar46->Label,&local_5a8);
      *(undefined8 *)&(pFVar46->Color).field0_0x0 = local_598;
      *(undefined8 *)((longlong)&(pFVar46->Color).field0_0x0 + 8) = uStack_590;
      if (local_5a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_5a8.TextData.Reference + 0x10))();
      }
      FText::AsLocalizable_Advanced_LocText
                (&local_588,L"VirtualShadowMap",L"VisualizeShadowFactorShadow",L"Shadow");
      local_578 = ___xmm_3f8000003f8000000000000000000000;
      uStack_570 = _UNK_15076b1e8;
      iVar24 = local_900.ArrayNum;
      if (local_900.ArrayNum == local_900.ArrayMax) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisualizationDataLegendEntry>_>
                           (0x820,&local_900.AllocatorInstance,&local_900.ArrayMax);
      }
      pFVar46 = local_900.AllocatorInstance.Data + iVar24;
      local_900.ArrayNum = iVar24 + 1;
      FText::FText(&pFVar46->Label,&local_588);
      *(undefined8 *)&(pFVar46->Color).field0_0x0 = local_578;
      *(undefined8 *)((longlong)&(pFVar46->Color).field0_0x0 + 8) = uStack_570;
LAB_1457d6007:
      if (local_588.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_588.TextData.Reference + 0x10))();
      }
    }
    else if (uVar25 == 8) {
      if ((iVar24 != -1) || (GVisualizeCachedPagesOnly != 0)) {
        FText::AsLocalizable_Advanced_LocText
                  (&local_568,L"VirtualShadowMap",L"VisualizeShadowCacheCached",L"Cached");
        local_558 = ___xmm_3f800000000000003f80000000000000;
        uStack_550 = _UNK_15076b198;
        iVar24 = local_900.ArrayNum;
        if (local_900.ArrayNum == local_900.ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisualizationDataLegendEntry>_>
                             (0x820,&local_900.AllocatorInstance,&local_900.ArrayMax);
        }
        local_900.ArrayNum = iVar24 + 1;
        pFVar46 = local_900.AllocatorInstance.Data + iVar24;
        FText::FText(&pFVar46->Label,&local_568);
        *(undefined8 *)&(pFVar46->Color).field0_0x0 = local_558;
        *(undefined8 *)((longlong)&(pFVar46->Color).field0_0x0 + 8) = uStack_550;
        if (local_568.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_568.TextData.Reference + 0x10))();
        }
        if (GVisualizeCachedPagesOnly != 0) goto LAB_1457d6012;
      }
      FText::AsLocalizable_Advanced_LocText
                (&local_548,L"VirtualShadowMap",L"VisualizeShadowCacheAll",L"All Invalidated");
      local_538 = ___xmm_3f80000000000000000000003f800000;
      uStack_530 = _UNK_15076b188;
      iVar24 = local_900.ArrayNum;
      if (local_900.ArrayNum == local_900.ArrayMax) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisualizationDataLegendEntry>_>
                           (0x820,&local_900.AllocatorInstance,&local_900.ArrayMax);
      }
      local_900.ArrayNum = iVar24 + 1;
      pFVar46 = local_900.AllocatorInstance.Data + iVar24;
      FText::FText(&pFVar46->Label,&local_548);
      *(undefined8 *)&(pFVar46->Color).field0_0x0 = local_538;
      *(undefined8 *)((longlong)&(pFVar46->Color).field0_0x0 + 8) = uStack_530;
      if (local_548.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_548.TextData.Reference + 0x10))();
      }
      FText::AsLocalizable_Advanced_LocText
                (&local_528,L"VirtualShadowMap",L"VisualizeShadowCacheDynamic",
                 L"Dynamic Invalidated");
      local_518 = ___xmm_3f8000003f8000000000000000000000;
      uStack_510 = _UNK_15076b1e8;
      iVar24 = local_900.ArrayNum;
      if (local_900.ArrayNum == local_900.ArrayMax) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisualizationDataLegendEntry>_>
                           (0x820,&local_900.AllocatorInstance,&local_900.ArrayMax);
      }
      local_900.ArrayNum = iVar24 + 1;
      pFVar46 = local_900.AllocatorInstance.Data + iVar24;
      FText::FText(&pFVar46->Label,&local_528);
      *(undefined8 *)&(pFVar46->Color).field0_0x0 = local_518;
      *(undefined8 *)((longlong)&(pFVar46->Color).field0_0x0 + 8) = uStack_510;
      if (local_528.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_528.TextData.Reference + 0x10))();
      }
      FText::AsLocalizable_Advanced_LocText
                (&local_508,L"VirtualShadowMap",L"VisualizeShadowCacheForce",L"Force cached");
      local_4f8 = ___xmm_3f800000000000003f8000003f400000;
      uStack_4f0 = _UNK_151030648;
      iVar24 = local_900.ArrayNum;
      if (local_900.ArrayNum == local_900.ArrayMax) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisualizationDataLegendEntry>_>
                           (0x820,&local_900.AllocatorInstance,&local_900.ArrayMax);
      }
      pFVar46 = local_900.AllocatorInstance.Data + iVar24;
      local_900.ArrayNum = iVar24 + 1;
      FText::FText(&pFVar46->Label,&local_508);
      *(undefined8 *)&(pFVar46->Color).field0_0x0 = local_4f8;
      *(undefined8 *)((longlong)&(pFVar46->Color).field0_0x0 + 8) = uStack_4f0;
      local_588.TextData.Reference = local_508.TextData.Reference;
      goto LAB_1457d6007;
    }
LAB_1457d6012:
    local_5c8._padding_ = (longlong)local_878;
    local_5c8._padding_ = (longlong)local_8c0;
    local_5c8._padding_._0_4_ = local_8e8.X;
    local_5c8._padding_._4_4_ = local_8e8.Y;
    TVar12.field0_0x0._s_0.Y = fStack_8c4;
    TVar12.field0_0x0._s_0.X = local_8c8;
    local_5c8.LoadAction = ELoad;
    AddLegendCanvasPass<TArray<FVisualizationDataLegendEntry,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              (param_1,param_2,&local_5c8,&local_820,TVar12,(TVector2<float>)local_8d8._s_0,
               &local_900);
    DestructItems<FVisualizationDataLegendEntry,int>
              (local_900.AllocatorInstance.Data,local_900.ArrayNum);
    if (local_900.AllocatorInstance.Data != (FVisualizationDataLegendEntry *)0x0) {
      pfVar48 = &local_900.AllocatorInstance.Data[-1].Color.field0_0x0._s_0.B;
      MemoryTrace_Free((ulong64)pfVar48,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar39 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar39 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar39,Default,pfVar48,FMalloc,true);
      }
      piVar49 = (int *)((longlong)pfVar48 - (ulonglong)(uint)*pfVar48);
      LOCK();
      iVar24 = *piVar49;
      *piVar49 = *piVar49 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        lVar50 = *(longlong *)(piVar49 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar49,0,0);
        TBlockAllocationLockFreeCache<65536,FAlignedAllocator>::Free
                  (piVar49,lVar50 - (longlong)piVar49);
      }
    }
    if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_820.Data.AllocatorInstance.Data);
    }
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
    if (local_690 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_6a0);
    }
    goto LAB_1457d6138;
  }
  if (param_4 != PreEditorPrimitives) {
    ::FString::FString(&local_658,L"Shadow Casters");
    local_8c8 = 100.0;
    fStack_8c4 = 30.0;
    local_8a0 = (float)(local_8b0._0_4_ + 8);
    fStack_89c = (float)(local_8a8.Y + -100);
    FText::AsLocalizable_Advanced_LocText
              (&local_118.Label,L"VirtualShadowMap",L"ShadowCastersStatic",
               L"Static, Not Invalidating");
    local_118.Color.field0_0x0._0_8_ = ___xmm_3f800000000000003f80000000000000;
    local_118.Color.field0_0x0._8_8_ = _UNK_15076b198;
    FText::AsLocalizable_Advanced_LocText
              (&local_f8,L"VirtualShadowMap",L"ShadowCastersStaticInvalidating",
               L"Static, Invalidating");
    local_e8 = ___xmm_3f80000000000000000000003f800000;
    uStack_e0 = _UNK_15076b188;
    FText::AsLocalizable_Advanced_LocText
              (&local_d8,L"VirtualShadowMap",L"ShadowCastersDynamic",L"Dynamic, Not Invalidating");
    local_c8 = ___xmm_3f8000003f8000003f80000000000000;
    uStack_c0 = _UNK_15090c6e8;
    FText::AsLocalizable_Advanced_LocText
              (&local_b8,L"VirtualShadowMap",L"ShadowCastersDynamicInvalidating",
               L"Dynamic, Invalidating");
    local_a8 = ___xmm_3f8000003f000000000000003f000000;
    uStack_a0 = _UNK_1509252e8;
    FText::AsLocalizable_Advanced_LocText
              (&local_98,L"VirtualShadowMap",L"ShadowCastersDynamicUnknown",
               L"Dynamic, Maybe Invalidating");
    local_88 = ___xmm_3f8000003f8000000000000000000000;
    uStack_80 = _UNK_15076b1e8;
    FText::AsLocalizable_Advanced_LocText
              (&local_78,L"VirtualShadowMap",L"ShadowCastersContact",L"Contact Shadow");
    local_858.AllocatorInstance.Data = (FVisualizationDataLegendEntry *)0x0;
    lVar50 = 6;
    local_68 = ___xmm_3f800000000000003f8000003f800000;
    uStack_60 = _UNK_150a07f68;
    local_858.ArrayNum = 6;
    UE::Core::Private::
    ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisualizationDataLegendEntry>_>
              (0x20,8,6,0,&local_858.AllocatorInstance,6,&local_858.ArrayMax);
    ConstructItems<FVisualizationDataLegendEntry,FVisualizationDataLegendEntry,int>
              (local_858.AllocatorInstance.Data,&local_118,6);
    puVar47 = local_58;
    do {
      puVar1 = puVar47 + -4;
      puVar47 = puVar47 + -4;
      lVar50 = lVar50 + -1;
      if ((longlong *)*puVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*puVar1 + 0x10))();
      }
    } while (lVar50 != 0);
    local_5e8._padding_ = (longlong)local_8c0;
    local_5e8._padding_._0_4_ = local_8e8.X;
    local_5e8._padding_._4_4_ = local_8e8.Y;
    local_5e8._padding_ = uVar9;
    TVar11.field0_0x0._s_0.Y = fStack_8c4;
    TVar11.field0_0x0._s_0.X = local_8c8;
    TVar14.field0_0x0._s_0.Y = fStack_89c;
    TVar14.field0_0x0._s_0.X = local_8a0;
    local_5e8.LoadAction = ELoad;
    AddLegendCanvasPass<TArray<FVisualizationDataLegendEntry,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              (param_1,param_2,&local_5e8,&local_658,TVar14,TVar11,&local_858);
    DestructItems<FVisualizationDataLegendEntry,int>
              (local_858.AllocatorInstance.Data,local_858.ArrayNum);
    if (local_858.AllocatorInstance.Data != (FVisualizationDataLegendEntry *)0x0) {
      pfVar48 = &local_858.AllocatorInstance.Data[-1].Color.field0_0x0._s_0.B;
      MemoryTrace_Free((ulong64)pfVar48,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar39 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar39 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar39,Default,pfVar48,FMalloc,true);
      }
      piVar49 = (int *)((longlong)pfVar48 - (ulonglong)(uint)*pfVar48);
      LOCK();
      iVar24 = *piVar49;
      *piVar49 = *piVar49 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        lVar50 = *(longlong *)(piVar49 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar49,0,0);
        if (lVar50 - (longlong)piVar49 == 0x10000) {
          this_01 = FPageAllocator::Get();
          FPageAllocator::Free(this_01,piVar49);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar49);
        }
      }
    }
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
    goto LAB_1457d6138;
  }
  pFVar35 = *(FRDGTexture **)local_8d8;
  pFVar28 = pFVar35;
  if (pFVar35 == (FRDGTexture *)local_848._0_8_) {
    pFVar28 = FRDGBuilder::CreateTexture(param_1,&pFVar35->Desc,L"SceneColorCopy",None);
    AddCopyTexturePass(param_1,pFVar35,pFVar28,UE::Math::TIntPoint<int>::ZeroValue,
                       UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue);
    pFVar44 = local_8f0;
  }
  local_300 = (TIntPoint<int>_u_0)0x0;
  uStack_2f8 = 0;
  if (pFVar44 == (FVirtualShadowMapArrayCacheManager *)0x0) {
    TVar45 = (TIntPoint<int>_u_0)0x0;
LAB_1457d465a:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("InTexture.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                        ,0xab,L"");
    if (bVar19) {
      pcVar8 = (code *)swi(3);
      pFVar27 = (FScreenPassTexture *)(*pcVar8)();
      return pFVar27;
    }
  }
  else {
    TVar45 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(((FRDGTexture *)pFVar44)->Desc).field_0x24
    ;
    if ((TVar45._s_0.X == 0) && (TVar45._s_0.Y == 0)) goto LAB_1457d465a;
  }
  local_2e8 = (TIntPoint<int>_u_0)0x0;
  uStack_2e0 = 0;
  local_768 = *(TIntPoint<int>_u_0 *)&((FRDGTextureDesc *)((longlong)local_8f0 + 0x80))->field_0x24;
  local_760._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_300;
  local_760._8_8_ = TVar45;
  if (pFVar28 == (FRDGTexture *)0x0) {
    TVar45 = (TIntPoint<int>_u_0)0x0;
LAB_1457d46d3:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("InTexture.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                        ,0xab,L"");
    if (bVar19) {
      pcVar8 = (code *)swi(3);
      pFVar27 = (FScreenPassTexture *)(*pcVar8)();
      return pFVar27;
    }
  }
  else {
    TVar45 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(pFVar28->Desc).field_0x24;
    if ((TVar45._s_0.X == 0) && (TVar45._s_0.Y == 0)) goto LAB_1457d46d3;
  }
  local_780 = *(TIntPoint<int>_u_0 *)&(pFVar28->Desc).field_0x24;
  local_778._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_2e8;
  local_778._8_8_ = TVar45;
  TShaderMapRef<FScreenPassVS>::TShaderMapRef<FScreenPassVS>
            ((TShaderMapRef<FScreenPassVS> *)&local_678._s_0,param_2->ShaderMap);
  pFVar7 = param_2->ShaderMap;
  pFVar29 = (FShaderType *)FDrawShadowCastersFalseColor::GetStaticType();
  FGlobalShaderMap::GetShader
            (pFVar7,(TShaderRefBase<FShader,FShaderMapPointerTable> *)&local_6d0._s_0,pFVar29,0);
  if (local_6d0 == (TVector2<float>_u_0)0x0) {
    FVar30 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_320);
    ::FName::ToString((FName *)FVar30,&local_338);
    FDrawShadowCastersFalseColor::GetStaticType();
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    if (bVar19) {
      pcVar8 = (code *)swi(3);
      pFVar27 = (FScreenPassTexture *)(*pcVar8)();
      return pFVar27;
    }
  }
  FDrawShadowCastersFalseColor::GetStaticType();
  local_8e0 = local_6c8;
  local_8c0 = local_6d0;
  puVar31 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x260,0x10);
  if (puVar31 == (undefined8 *)0x0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar19) {
      pcVar8 = (code *)swi(3);
      pFVar27 = (FScreenPassTexture *)(*pcVar8)();
      return pFVar27;
    }
  }
  else {
    *(undefined1 *)(puVar31 + 0x25) = 1;
    *puVar31 = &___7__TObject_VFParameters_FDrawShadowCastersFalseColor___FRDGAllocator__6B_;
    *(undefined1 *)(puVar31 + 0x27) = 1;
    puVar31[2] = 0;
    puVar31[3] = 0;
    puVar31[0x24] = 0;
    puVar31[0x26] = 0;
    puVar31[0x28] = 0;
    puVar31[0x2a] = 0;
    *(undefined1 *)(puVar31 + 0x29) = 1;
    *(undefined1 *)(puVar31 + 0x2b) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar31 + 0x2c));
  }
  local_8e8 = (TIntPoint<int>_u_0_s_0)&param_1->_padding_;
  local_898 = puVar31;
  if ((((undefined8 **)param_1->_padding_ <= &local_898) &&
      (&local_898 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
    pcVar8 = (code *)swi(3);
    pFVar27 = (FScreenPassTexture *)(*pcVar8)();
    return pFVar27;
  }
  iVar24 = (int)*(longlong *)((longlong)local_8e8 + 8);
  if (iVar24 == *(int *)((longlong)local_8e8 + 0xc)) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)local_8e8,(int *)((longlong)local_8e8 + 0xc));
  }
  *(int *)((longlong)local_8e8 + 8) = iVar24 + 1;
  *(undefined8 **)(*(longlong *)local_8e8 + (longlong)iVar24 * 8) = local_898;
  local_8d8 = (TVector2<float>_u_0)(puVar31 + 2);
  pFVar32 = FViewInfo::GetShaderParameters(param_2,(FViewShaderParameters *)&local_808._s_0);
  uVar9 = *(undefined8 *)&(pFVar32->View).field_0x8;
  puVar31[0x24] = *(undefined8 *)&pFVar32->View;
  puVar31[0x25] = uVar9;
  uVar9 = *(undefined8 *)&(pFVar32->InstancedView).field_0x8;
  puVar31[0x26] = *(undefined8 *)&pFVar32->InstancedView;
  puVar31[0x27] = uVar9;
  pTVar33 = GetUniformBuffer(this,param_3);
  pFVar34 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  TVar6 = local_8d8;
  EStack_870 = Static;
  if (pFVar34->BindingFlags != StaticAndShader) {
    EStack_870 = pFVar34->BindingFlags;
  }
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)((longlong)local_8d8 + 0x140) = pTVar33
  ;
  *(ulonglong *)
   &((TRDGUniformBufferBinding<FVirtualShadowMapUniformParameters> *)((longlong)local_8d8 + 0x140))
    ->field_0x8 = CONCAT71(uStack_86f,EStack_870);
  local_878 = (FRDGTexture *)pTVar33;
  pFVar35 = (FRDGTexture *)FSceneUniformBuffer::GetBuffer((FSceneUniformBuffer *)local_8d0,param_1);
  pFVar34 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  EVar3 = pFVar34->BindingFlags;
  *(FRDGTexture **)TVar6 = (FRDGTexture *)local_8f0;
  EStack_870 = Static;
  if (EVar3 != StaticAndShader) {
    EStack_870 = EVar3;
  }
  *(FRDGTexture **)((longlong)TVar6 + 8) = pFVar28;
  *(FRDGTexture **)((longlong)TVar6 + 0x130) = pFVar35;
  *(ulonglong *)
   &((TRDGUniformBufferBinding<FSceneUniformParameters> *)((longlong)TVar6 + 0x130))->field_0x8 =
       CONCAT71(uStack_86f,EStack_870);
  local_878 = pFVar35;
  pFVar36 = GetScreenPassTextureViewportParameters
                      (&local_1f8,(FScreenPassTextureViewport *)&local_768._s_0);
  TVar10 = (pFVar36->ExtentInverse).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->Extent).field0_0x0 =
       (pFVar36->Extent).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->ExtentInverse).field0_0x0 =
       TVar10;
  TVar10 = (pFVar36->ScreenPosToViewportBias).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->ScreenPosToViewportScale).
  field0_0x0 = (pFVar36->ScreenPosToViewportScale).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->ScreenPosToViewportBias).
  field0_0x0 = TVar10;
  TVar45 = (pFVar36->ViewportMax).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->ViewportMin).field0_0x0 =
       (pFVar36->ViewportMin).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->ViewportMax).field0_0x0 =
       TVar45;
  TVar10 = (pFVar36->ViewportSizeInverse).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->ViewportSize).field0_0x0 =
       (pFVar36->ViewportSize).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->ViewportSizeInverse).
  field0_0x0 = TVar10;
  TVar10 = (pFVar36->UVViewportMax).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->UVViewportMin).field0_0x0 =
       (pFVar36->UVViewportMin).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->UVViewportMax).field0_0x0 =
       TVar10;
  TVar10 = (pFVar36->UVViewportSizeInverse).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->UVViewportSize).field0_0x0 =
       (pFVar36->UVViewportSize).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->UVViewportSizeInverse).
  field0_0x0 = TVar10;
  TVar10 = (pFVar36->UVViewportBilinearMax).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->UVViewportBilinearMin).
  field0_0x0 = (pFVar36->UVViewportBilinearMin).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x10))->UVViewportBilinearMax).
  field0_0x0 = TVar10;
  pFVar36 = GetScreenPassTextureViewportParameters
                      (&local_188,(FScreenPassTextureViewport *)&local_780._s_0);
  TVar10 = (pFVar36->ExtentInverse).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->Extent).field0_0x0 =
       (pFVar36->Extent).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->ExtentInverse).field0_0x0 =
       TVar10;
  TVar10 = (pFVar36->ScreenPosToViewportBias).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->ScreenPosToViewportScale).
  field0_0x0 = (pFVar36->ScreenPosToViewportScale).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->ScreenPosToViewportBias).
  field0_0x0 = TVar10;
  TVar45 = (pFVar36->ViewportMax).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->ViewportMin).field0_0x0 =
       (pFVar36->ViewportMin).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->ViewportMax).field0_0x0 =
       TVar45;
  TVar10 = (pFVar36->ViewportSizeInverse).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->ViewportSize).field0_0x0 =
       (pFVar36->ViewportSize).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->ViewportSizeInverse).
  field0_0x0 = TVar10;
  TVar10 = (pFVar36->UVViewportMax).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->UVViewportMin).field0_0x0 =
       (pFVar36->UVViewportMin).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->UVViewportMax).field0_0x0 =
       TVar10;
  TVar10 = (pFVar36->UVViewportSizeInverse).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->UVViewportSize).field0_0x0 =
       (pFVar36->UVViewportSize).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->UVViewportSizeInverse).
  field0_0x0 = TVar10;
  TVar10 = (pFVar36->UVViewportBilinearMax).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->UVViewportBilinearMin).
  field0_0x0 = (pFVar36->UVViewportBilinearMin).field0_0x0;
  (((FScreenPassTextureViewportParameters *)((longlong)TVar6 + 0x80))->UVViewportBilinearMax).
  field0_0x0 = TVar10;
  pFVar37 = FScreenTransform::ChangeTextureBasisFromTo
                      (&local_228,(TIntPoint<int> *)&local_768._s_0,(TIntRect<int> *)&local_760._s_0
                       ,TexelPosition,TextureUV);
  pFVar38 = FScreenTransform::ChangeTextureBasisFromTo
                      (&local_238,(TIntPoint<int> *)&local_768._s_0,(TIntRect<int> *)&local_760._s_0
                       ,ViewportUV,TexelPosition);
  fVar43 = (pFVar37->Scale).field0_0x0._s_0.X;
  fVar5 = (pFVar37->Scale).field0_0x0._s_0.Y;
  local_7c8 = fVar43 * (pFVar38->Scale).field0_0x0._s_0.X;
  fStack_7c4 = fVar5 * (pFVar38->Scale).field0_0x0._s_0.Y;
  local_7c0 = fVar43 * (pFVar38->Bias).field0_0x0._s_0.X + (pFVar37->Bias).field0_0x0._s_0.X;
  fStack_7bc = fVar5 * (pFVar38->Bias).field0_0x0._s_0.Y + (pFVar37->Bias).field0_0x0._s_0.Y;
  TVar15._s_0.Y = fStack_7c4;
  TVar15._s_0.X = local_7c8;
  (((FScreenTransform *)((longlong)TVar6 + 0xf0))->Scale).field0_0x0 = TVar15;
  TVar16._s_0.Y = fStack_7bc;
  TVar16._s_0.X = local_7c0;
  (((FScreenTransform *)((longlong)TVar6 + 0xf0))->Bias).field0_0x0 = TVar16;
  pFVar37 = FScreenTransform::ChangeTextureBasisFromTo
                      (&local_218,(TIntPoint<int> *)&local_780._s_0,(TIntRect<int> *)&local_778._s_0
                       ,TexelPosition,TextureUV);
  pFVar38 = FScreenTransform::ChangeTextureBasisFromTo
                      (&local_208,(TIntPoint<int> *)&local_780._s_0,(TIntRect<int> *)&local_778._s_0
                       ,ViewportUV,TexelPosition);
  fVar43 = (pFVar37->Scale).field0_0x0._s_0.X;
  fVar5 = (pFVar37->Scale).field0_0x0._s_0.Y;
  local_8a0 = fVar43 * (pFVar38->Scale).field0_0x0._s_0.X;
  fStack_89c = fVar5 * (pFVar38->Scale).field0_0x0._s_0.Y;
  local_8c8 = fVar43 * (pFVar38->Bias).field0_0x0._s_0.X + (pFVar37->Bias).field0_0x0._s_0.X;
  fStack_8c4 = fVar5 * (pFVar38->Bias).field0_0x0._s_0.Y + (pFVar37->Bias).field0_0x0._s_0.Y;
  TVar13._s_0.Y = fStack_89c;
  TVar13._s_0.X = local_8a0;
  (((FScreenTransform *)((longlong)TVar6 + 0x100))->Scale).field0_0x0 = TVar13;
  TVar10._s_0.Y = fStack_8c4;
  TVar10._s_0.X = local_8c8;
  (((FScreenTransform *)((longlong)TVar6 + 0x100))->Bias).field0_0x0 = TVar10;
  local_798.Texture = (FRDGTexture *)local_848._0_8_;
  local_798.ResolveTexture = (FRDGTexture *)0x0;
  local_798.LoadAction = ENoAction;
  local_798.MipIndex = '\0';
  local_798.ArraySlice = -1;
  bVar19 = FRenderTargetBinding::Validate(&local_798);
  if ((!bVar19) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x216,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    pFVar27 = (FScreenPassTexture *)(*pcVar8)();
    return pFVar27;
  }
  (((FRenderTargetBindingSlots *)((longlong)TVar6 + 0x150))->Output).Elements[0].Texture =
       local_798.Texture;
  (((FRenderTargetBindingSlots *)((longlong)TVar6 + 0x150))->Output).Elements[0].ResolveTexture =
       local_798.ResolveTexture;
  local_8d0 = local_670;
  pFVar17 = (FRenderTargetBindingSlots *)((longlong)TVar6 + 0x150);
  (pFVar17->Output).Elements[0].LoadAction = local_798.LoadAction;
  (pFVar17->Output).Elements[0].MipIndex = local_798.MipIndex;
  (pFVar17->Output).Elements[0].ArraySlice = local_798.ArraySlice;
  *(undefined4 *)&(pFVar17->Output).Elements[0].field_0x14 = local_798._20_4_;
  local_868 = (undefined4)param_2->_padding_;
  local_864 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_860 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_85c = *(undefined1 *)((longlong)&param_2->_padding_ + 6);
  local_8f0 = (FVirtualShadowMapArrayCacheManager *)
              FRDGEventName::FRDGEventName(&local_250,1,L"DrawShadowCastersFalseColor");
  local_8d8._s_0 =
       (TVector2<float>_u_0_s_0)
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_8e8 = (TIntPoint<int>_u_0_s_0)
              TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource.StateRHI.Reference;
  if ((local_678 == (TVector2<float>_u_0)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("VertexShader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                          ,0x206,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    pFVar27 = (FScreenPassTexture *)(*pcVar8)();
    return pFVar27;
  }
  TVar10 = local_8c0;
  if ((local_8c0 == (TVector2<float>_u_0)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("PixelShader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                          ,0x207,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    pFVar27 = (FScreenPassTexture *)(*pcVar8)();
    return pFVar27;
  }
  if ((TVar6 == (TVector2<float>_u_0)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("PixelShaderParameters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                          ,0x208,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    pFVar27 = (FScreenPassTexture *)(*pcVar8)();
    return pFVar27;
  }
  pFVar34 = FDrawShadowCastersFalseColor::FParameters::FTypeInfo::GetStructMetadata();
  TVar13 = local_8e0;
  local_660 = local_8e0;
  local_668 = TVar10;
  ValidateShaderParameters
            ((TShaderRefBase<FShader,FShaderMapPointerTable> *)&local_668._s_0,pFVar34,(void *)TVar6
            );
  local_358._First = (FRDGResource **)0x0;
  local_358._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl((FShaderParameterBindings *)TVar10,pFVar34,(void *)TVar6,&local_358)
  ;
  TStack_800 = local_8d0;
  local_7e8 = local_8d8;
  TStack_7e0 = local_8e8;
  local_7d8 = GFilterVertexDeclaration._32_8_;
  local_4c8 = local_868;
  local_4c4 = local_864;
  local_4c0 = local_860;
  local_4bc = local_85c;
  local_4bb = local_85b;
  local_4b9 = local_859;
  local_808 = local_678;
  local_488 = local_678;
  TStack_480 = local_8d0;
  local_7f8 = TVar10;
  TStack_7f0 = TVar13;
  local_478 = TVar10;
  TStack_470 = TVar13;
  uStack_7d0 = 0;
  lStack_450 = (ulonglong)uStack_7cf << 8;
  local_4a8 = local_8a8;
  local_490 = local_8a8;
  local_4b8 = local_8b8;
  local_4b0 = local_8b0;
  local_4a0 = local_8b8;
  local_498 = local_8b0;
  local_468 = local_8d8;
  TStack_460 = local_8e8;
  local_448 = TVar10;
  local_458 = GFilterVertexDeclaration._32_8_;
  local_440 = TVar13;
  local_438 = (FParameters *)TVar6;
  local_430 = 0;
  pFVar34 = FDrawShadowCastersFalseColor::FParameters::FTypeInfo::GetStructMetadata();
  FRDGBuilder::
  AddPassInternal<FDrawShadowCastersFalseColor::FParameters,_AddDrawScreenPass<FDrawShadowCastersFalseColor>_::__l2::<lambda_1>_>
            (param_1,(FRDGEventName *)local_8f0,pFVar34,(FParameters *)TVar6,Raster,
             (<lambda_1> *)&local_4c8);
  if (local_250.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.FormattedEventName.Data.AllocatorInstance.Data);
  }
LAB_1457d6138:
  local_4e8._padding_ = param_8->_padding_;
  if ((local_4e8._padding_ == 0) ||
     (((int)param_8->_padding_ == (int)param_8->_padding_ &&
      (*(int *)((longlong)&param_8->_padding_ + 4) == *(int *)((longlong)&param_8->_padding_ + 4))))
     ) {
    param_8 = (FScreenPassRenderTarget *)local_848;
  }
  else {
    local_4e8._padding_ = param_8->_padding_;
    local_4e8._padding_ = param_8->_padding_;
    local_4e8.LoadAction = param_8->LoadAction;
    local_728 = (Type)param_2->_padding_;
    iStack_724 = *(int *)((longlong)&param_2->_padding_ + 4);
    iStack_720 = *(int *)((longlong)&param_2->_padding_ + 4);
    uStack_71c = CONCAT31(uStack_71c._1_3_,*(undefined1 *)((longlong)&param_2->_padding_ + 6));
    local_2d8.Texture = (FRDGTexture *)local_848._0_8_;
    local_2d8.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>)local_848._8_8_;
    local_318.StereoViewIndex = iStack_724;
    local_318.FeatureLevel = local_728;
    local_318._12_4_ = uStack_71c;
    local_318.InstanceCount = iStack_720;
    local_2d8.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>)local_848._16_8_;
    AddDrawTexturePass(param_1,&local_318,&local_2d8,&local_4e8,1);
  }
  local_6f0->Texture = (FRDGTexture *)param_8->_padding_;
  (local_6f0->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)param_8->_padding_;
  (local_6f0->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)param_8->_padding_;
  return local_6f0;
}

// AllocateDirectional @ 1457d6560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FVirtualShadowMapArray::AllocateDirectional(FVirtualShadowMapArray *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->bEnabled == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEnabled()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x3f1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (this->NumUnreferencedShadowMaps != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumUnreferencedShadowMaps == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x3f2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (this->NumLocalShadowMaps != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumLocalShadowMaps == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x3f3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  this->NumDirectionalShadowMaps = this->NumDirectionalShadowMaps + param_1;
  if (this->bEnabled == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEnabled()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x3dc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->NumShadowMapSlots;
  this->NumShadowMapSlots = iVar3 + param_1;
  return iVar3;
}

// AllocateLocal @ 1457d6660

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FVirtualShadowMapArray::AllocateLocal(FVirtualShadowMapArray *this,bool param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->bEnabled == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEnabled()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x3fa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (this->NumUnreferencedShadowMaps != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumUnreferencedShadowMaps == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x3fb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  this->NumLocalShadowMaps = this->NumLocalShadowMaps + param_2;
  iVar3 = AllocateShadowMapSlots(this,param_1,param_2);
  return iVar3;
}

// AllocateShadowMapSlots @ 1457d6700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FVirtualShadowMapArray::AllocateShadowMapSlots
          (FVirtualShadowMapArray *this,bool param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (this->bEnabled == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEnabled()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x3dc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (!param_1) {
    iVar3 = this->NumShadowMapSlots;
    this->NumShadowMapSlots = iVar3 + param_2;
    return iVar3;
  }
  iVar3 = this->NumSinglePageShadowMaps;
  uVar4 = iVar3 + param_2;
  if (uVar4 < 0x2001) {
    this->NumSinglePageShadowMaps = uVar4;
    return iVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6505494329396558880>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                     ,0x3e0,"(NumSinglePageShadowMaps + Count) <= (1024U * 8U)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return -1;
}

// AllocateUnreferenced @ 1457d67e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FVirtualShadowMapArray::AllocateUnreferenced(FVirtualShadowMapArray *this,bool param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->bEnabled == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEnabled()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x402,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  this->NumUnreferencedShadowMaps = this->NumUnreferencedShadowMaps + param_2;
  iVar3 = AllocateShadowMapSlots(this,param_1,param_2);
  return iVar3;
}

// AppendPhysicalPageList @ 1457d6860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::AppendPhysicalPageList
          (FVirtualShadowMapArray *this,FRDGBuilder *param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  FGlobalShaderMap *this_00;
  FGlobalShaderType *pFVar6;
  FShaderType *pFVar7;
  FName this_01;
  FParameters *pFVar8;
  FShader *pFVar9;
  FShaderParametersMetadata *pFVar10;
  FRDGBufferUAV *pFVar11;
  FRDGEventName *pFVar12;
  FParameters *pFVar13;
  byte bVar14;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FRDGBufferUAVDesc local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  TIntVector3<int>_u_0 local_98;
  TIntVector3<int>_u_0 local_88;
  TShaderRefBase<FAppendPhysicalPageListsCS,FShaderMapPointerTable> local_78;
  FString local_68;
  FRDGEventName local_58;
  FRDGEventName local_40;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                               [*(int *)&this->Scene->field_0x8]);
  pFVar6 = FAppendPhysicalPageListsCS::GetStaticType();
  if (*(int *)&pFVar6->field_0x50 != 1) {
    local_res18[0] = 0;
    `FGlobalShaderMap::GetShader<FAppendPhysicalPageListsCS>'::__l2::<lambda_1>::operator()
              (local_res18);
  }
  pFVar7 = (FShaderType *)FAppendPhysicalPageListsCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_a8,pFVar7,0);
  if (local_a8.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_01,&local_68);
    FAppendPhysicalPageListsCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FAppendPhysicalPageListsCS::GetStaticType();
  local_78.ShaderContent = (FAppendPhysicalPageListsCS *)local_a8.ShaderContent;
  pFVar8 = FRDGBuilder::AllocParameters<FAppendPhysicalPageListsCS::FParameters>(param_1);
  pFVar9 = (FShader *)GetUncachedUniformBuffer(this,param_1);
  pFVar10 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  local_a8.ShaderMap._0_1_ = Static;
  if (pFVar10->BindingFlags != StaticAndShader) {
    local_a8.ShaderMap._0_1_ = pFVar10->BindingFlags;
  }
  bVar14 = 0;
  local_b8._padding_._2_1_ = 0;
  *(FShader **)&pFVar8->VirtualShadowMap = pFVar9;
  *(ulonglong *)&(pFVar8->VirtualShadowMap).field_0x8 =
       CONCAT71(local_a8.ShaderMap._1_7_,(EUniformBufferBindingFlags)local_a8.ShaderMap);
  local_b8.Buffer = this->PhysicalPageListsRDG;
  if ((((local_b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar14 = 0x1c;
  }
  local_b8._padding_._0_2_ = (ushort)bVar14;
  local_a8.ShaderContent = pFVar9;
  pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_b8,None);
  pFVar8->OutPhysicalPageLists = pFVar11;
  pFVar8->bAppendEmptyToAvailable = (uint)param_2;
  pFVar8->bUpdateCounts = 0;
  uVar1 = (this->UniformParameters).MaxPhysicalPages;
  pFVar12 = FRDGEventName::FRDGEventName(&local_58,1,L"AppendPhysicalPageList");
  pFVar10 = FAppendPhysicalPageListsCS::FParameters::FTypeInfo::GetStructMetadata();
  local_98._s_0.Y = 1;
  local_98._s_0.Z = 1;
  local_98._s_0.X = uVar1 + 0xff >> 8;
  FComputeShaderUtils::AddPass<FAppendPhysicalPageListsCS>
            (param_1,pFVar12,Compute,&local_78,pFVar10,pFVar8,(TIntVector3<int> *)&local_98._s_0);
  if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
  }
  pFVar13 = FRDGBuilder::AllocParameters<FAppendPhysicalPageListsCS::FParameters>(param_1);
  uVar3 = *(undefined8 *)&(pFVar8->VirtualShadowMap).field_0x8;
  *(undefined8 *)&pFVar13->VirtualShadowMap = *(undefined8 *)&pFVar8->VirtualShadowMap;
  *(undefined8 *)&(pFVar13->VirtualShadowMap).field_0x8 = uVar3;
  uVar1 = pFVar8->bAppendEmptyToAvailable;
  uVar4 = pFVar8->bUpdateCounts;
  pFVar13->OutPhysicalPageLists = pFVar8->OutPhysicalPageLists;
  pFVar13->bAppendEmptyToAvailable = uVar1;
  pFVar13->bUpdateCounts = uVar4;
  pFVar13->bUpdateCounts = 1;
  pFVar12 = FRDGEventName::FRDGEventName(&local_40,1,L"AppendPhysicalPageList(Counts)");
  pFVar10 = FAppendPhysicalPageListsCS::FParameters::FTypeInfo::GetStructMetadata();
  local_88._s_0.X = 1;
  local_88._s_0.Y = 1;
  local_88._s_0.Z = 1;
  FComputeShaderUtils::AddPass<FAppendPhysicalPageListsCS>
            (param_1,pFVar12,Compute,&local_78,pFVar10,pFVar13,(TIntVector3<int> *)&local_88._s_0);
  if (local_40.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// BeginMarkPages @ 1457d6b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001457d9cc3) */
/* WARNING: Removing unreachable block (ram,0x0001457d9cd0) */
/* WARNING: Removing unreachable block (ram,0x0001457da244) */
/* WARNING: Removing unreachable block (ram,0x0001457da250) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::BeginMarkPages
          (FVirtualShadowMapArray *this,FRDGBuilder *param_1,FSceneRenderer *param_2,
          FSingleLayerWaterPrePassResult *param_3,FFrontLayerTranslucencyData *param_4,
          FRenderer *param_5,bool param_6)

{
  longlong *plVar1;
  FParameters *pFVar2;
  FParameters *pFVar3;
  FParameters *pFVar4;
  int *piVar5;
  int *piVar6;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FViewInfo *pFVar8;
  char cVar9;
  FVirtualShadowMapArrayCacheManager *pFVar10;
  longlong lVar11;
  undefined8 uVar12;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar13;
  FForwardLightUniformParameters *pFVar14;
  code *pcVar15;
  undefined4 uVar16;
  TConsoleVariableData<int> *pTVar17;
  TConsoleVariableData<float> *pTVar18;
  TConsoleVariableData<float> *pTVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  FSceneRenderer *pFVar23;
  FSingleLayerWaterPrePassResult *pFVar24;
  FSingleLayerWaterPrePassResult *pFVar25;
  FSceneTextures *pFVar26;
  FRenderer *pFVar27;
  bool bVar28;
  bool bVar29;
  undefined1 uVar30;
  EShaderPlatform EVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  undefined8 *puVar35;
  FRDGScope *pFVar36;
  FVirtualShadowMapVisualizationData *this_00;
  FViewInfo *pFVar37;
  FRDGTexture *pFVar38;
  FRDGTextureUAV *pFVar39;
  FRDGBuffer *pFVar40;
  longlong lVar41;
  TStatId TVar42;
  FRDGBufferSRV *pFVar43;
  FCsvProfiler *pFVar44;
  FRDGBufferUAV *pFVar45;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar46;
  FShaderParametersMetadata *pFVar47;
  FGlobalShaderMap *pFVar48;
  FGlobalShaderType *pFVar49;
  FShaderType *pFVar50;
  FName FVar51;
  FRDGEventName *pFVar52;
  FRHIBreadcrumbAllocator *pFVar53;
  FRHIBreadcrumbNode *pFVar54;
  FVirtualShadowMapPerViewParameters *pFVar55;
  ulong64 uVar56;
  undefined8 *puVar57;
  TRDGUniformBuffer<FForwardLightUniformParameters> *pTVar58;
  FVirtualShadowMapMarkingParameters *pFVar59;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *pTVar60;
  byte bVar61;
  int iVar62;
  uint uVar63;
  EUniformBufferBindingFlags EVar64;
  TRefCountPtr<FRDGPooledBuffer> *pTVar65;
  ForElementType<int> FVar66;
  FViewData *pFVar67;
  longlong lVar68;
  uint uVar69;
  TIntPoint<int>_u_0_s_0 *pTVar70;
  undefined1 *puVar71;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar72;
  longlong lVar73;
  ulonglong uVar74;
  FScriptContainerElement *pFVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auStackY_c98 [32];
  uint local_c44;
  uint local_c40;
  undefined1 local_c3c;
  undefined1 local_c3b;
  undefined1 local_c3a;
  undefined1 local_c39;
  undefined1 local_c38 [8];
  FName local_c30;
  uint local_c28;
  FIdBinIndex local_c24;
  FIdBinIndex local_c20 [2];
  undefined8 local_c18;
  undefined8 uStack_c10;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_c08;
  uint uStack_c00;
  int iStack_bfc;
  int iStack_bf8;
  undefined4 uStack_bf4;
  TArrayView<FViewInfo_const_,int> local_be8;
  FSceneRenderer *local_bd8;
  longlong *local_bd0;
  FRDGBuilder *local_bc8;
  uint local_bc0;
  undefined8 *local_bb8;
  FRDGTexture *local_bb0;
  undefined8 *local_ba8;
  undefined8 *local_ba0;
  undefined8 *local_b98;
  undefined8 *local_b90;
  undefined8 *local_b88;
  FSingleLayerWaterPrePassResult *local_b80;
  undefined8 local_b78;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined8 local_b68;
  FRDGBufferUAVDesc local_b58;
  int local_b48;
  int iStack_b44;
  FRDGBufferUAVDesc local_b40;
  FRDGBufferUAVDesc local_b30;
  FRDGBufferUAVDesc local_b20;
  int local_b10;
  int iStack_b0c;
  int local_b08;
  int iStack_b04;
  FShadowSceneRenderer *local_b00;
  FRDGBufferUAVDesc local_af8;
  FRDGBufferUAVDesc local_ae8;
  FRDGBufferUAVDesc local_ad8;
  FRDGBufferUAVDesc local_ac8;
  FRDGBufferUAVDesc local_ab8;
  FRDGBufferUAVDesc local_aa8;
  FRDGBufferUAVDesc local_a98;
  FRDGBufferUAVDesc local_a88;
  FRDGBufferUAVDesc local_a78;
  FRDGBuilder *local_a68;
  int *local_a60;
  FRDGBuilder *local_a58;
  FVirtualShadowMapArray *local_a50;
  TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> local_a48;
  TRDGEventScopeGuard<FRDGScope_RHI> local_a38;
  char local_a28;
  TRDGUniformBuffer<FForwardLightUniformParameters> *local_a18;
  EUniformBufferBindingFlags EStack_a10;
  undefined7 uStack_a0f;
  TUniformBufferRef<FViewUniformShaderParameters> local_a08;
  EUniformBufferBindingFlags EStack_a00;
  undefined7 uStack_9ff;
  TRDGUniformBuffer<FForwardLightUniformParameters> *local_9f8;
  EUniformBufferBindingFlags EStack_9f0;
  undefined7 uStack_9ef;
  TIntVector3<int>_u_0 local_9e8;
  TIntVector3<int>_u_0 local_9d8;
  TIntVector3<int>_u_0 local_9c8;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  FShaderParametersMetadata *local_9a8;
  FRDGTextureUAVDesc local_9a0;
  FRDGBufferDesc local_988;
  TIntVector3<int>_u_0 local_968;
  TIntVector3<int>_u_0 local_958;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *local_948;
  EUniformBufferBindingFlags EStack_940;
  undefined7 uStack_93f;
  FRDGBufferSRVDesc local_938;
  FRDGBufferSRVDesc local_918;
  FRDGBufferSRVDesc local_8f8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_8d8;
  char local_8c8;
  FRDGScatterUploadBuffer local_8c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_888;
  uint local_868;
  undefined4 local_864;
  TIntPoint<int>_u_0 local_860;
  FSceneTextures *local_858;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *local_850;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_848;
  undefined1 local_828 [8];
  FRenderer *local_820;
  TRDGEventScopeGuard<FRDGScope_RHI> local_818;
  char local_808;
  FRDGBufferSRVDesc local_800;
  FRDGBufferSRVDesc local_7e0;
  FRDGBufferSRVDesc local_7c0;
  FRDGBufferSRVDesc local_7a0;
  FRDGBufferSRVDesc local_780;
  FRDGBufferDesc local_760;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_748;
  FVirtualShadowMapArray *local_738;
  FRDGBuilder *local_730;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_728;
  TArrayView<FVisibleLightInfo_const_,int> local_718;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_708;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_6f8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
  local_6e8;
  FRDGBuilder *local_6d8;
  undefined8 *local_6d0;
  FViewInfo *local_6c8;
  FVirtualShadowMapArray *local_6c0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
  local_6b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_6a8;
  FRDGEventName local_698;
  FRDGBuilder *local_678;
  undefined8 *local_670;
  FFrontLayerTranslucencyData *local_668;
  FViewInfo *local_660;
  FSceneTextures *local_658;
  FSingleLayerWaterPrePassResult **local_650;
  uint *local_648;
  FVirtualShadowMapArray *local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  FRDGTextureUAV *local_628;
  FRDGTextureUAV *pFStack_620;
  TRDGUniformBuffer<FForwardLightUniformParameters> *local_618;
  undefined8 uStack_610;
  TUniformBufferRef<FViewUniformShaderParameters> local_608;
  undefined8 uStack_600;
  TRDGUniformBuffer<FForwardLightUniformParameters> *local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *local_5d8;
  undefined8 uStack_5d0;
  float local_5c8;
  float local_5c4;
  uint local_5c0;
  int local_5bc;
  float local_5b8;
  int local_5b4;
  float local_5b0;
  FDOFCocModelShaderParameters local_5a8;
  FString local_568;
  TShaderRefBase<FMarkCoarsePagesCS,FShaderMapPointerTable> local_558;
  initializer_list<FRDGResource_*> local_548 [2];
  undefined1 local_528 [8];
  undefined1 local_520 [8];
  undefined1 local_518 [8];
  undefined1 local_510 [8];
  FRDGBufferDesc local_508;
  FRDGBufferDesc local_4f0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_> local_4d8;
  FRDGBufferDesc local_4c8;
  FRDGBufferDesc local_4b0;
  FRDGBufferDesc local_498;
  FRDGBufferDesc local_480;
  FLinearColor_u_0 local_468;
  FString local_458;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_448;
  initializer_list<FRDGResource_*> local_438;
  TShaderRefBase<FInitPageRectBoundsCS,FShaderMapPointerTable> local_428;
  FString local_418;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_408;
  TShaderRefBase<FProcessPrevFramePerfDataCS,FShaderMapPointerTable> local_3f8;
  FString local_3e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3d8;
  initializer_list<FRDGResource_*> local_3c8;
  FRDGBufferDesc local_3b8;
  TShaderRefBase<FUpdateThrottleParametersCS,FShaderMapPointerTable> local_398;
  FString local_388;
  TShaderRefBase<FPruneLightGridCS,FShaderMapPointerTable> local_378;
  uint uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  uint uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  uint uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  FRDGEventName local_308;
  FRDGEventName local_2f0;
  FRDGEventName local_2d8;
  FRDGEventName local_2c0 [2];
  FVirtualShadowMapMarkingParameters local_288;
  FVirtualShadowMapMarkingParameters local_268;
  FVirtualShadowMapPerViewParameters local_248;
  FBuilder local_218;
  FBuilder local_1e8;
  undefined1 local_1b8 [64];
  void *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168 [64];
  void *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  FPhysicalCocModel local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_c98;
  puVar57 = (undefined8 *)0x0;
  local_820 = param_5;
  local_bc0 = 0;
  local_bd8 = param_2;
  local_bc8 = param_1;
  local_b80 = param_3;
  if ((this->bEnabled == false) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsEnabled()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                          ,0x842,L""), bVar28)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((this->VirtualShadowMapSetupContext != (FVirtualShadowMapSetupContext *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("!VirtualShadowMapSetupContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                          ,0x843,L""), bVar28)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar62 = this->NumShadowMapSlots + -0x2000;
  iVar32 = 0;
  if (0 < iVar62) {
    iVar32 = iVar62;
  }
  if (iVar32 + this->NumSinglePageShadowMaps == 0) {
    return;
  }
  puVar35 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x58,0x10);
  if (puVar35 == (undefined8 *)0x0) {
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar28) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  else {
    *puVar35 = &___7__TObject_VFVirtualShadowMapSetupContext___FRDGAllocator__6B_;
    puVar35[1] = 0;
    puVar35[2] = 0;
    puVar35[3] = 0;
    puVar35[4] = 0;
    puVar35[5] = 0;
    puVar35[6] = 0;
    puVar35[7] = 0;
    puVar35[8] = 0;
    puVar35[9] = 0;
    puVar35[10] = 0;
    puVar57 = puVar35;
  }
  plVar1 = &param_1->_padding_;
  local_bd0 = plVar1;
  local_bb8 = puVar57;
  if ((((undefined8 **)param_1->_padding_ <= &local_bb8) &&
      (&local_bb8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar32 = (int)param_1->_padding_;
  if (iVar32 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar32 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar1,(int *)((longlong)&param_1->_padding_ + 4)
                       );
  }
  *(int *)&param_1->_padding_ = iVar32 + 1;
  *(undefined8 **)(*plVar1 + (longlong)iVar32 * 8) = local_bb8;
  this->VirtualShadowMapSetupContext = (FVirtualShadowMapSetupContext *)(puVar57 + 1);
  local_858 = FViewFamilyInfo::GetSceneTextures(&param_2->ViewFamily);
  TArrayView<FViewInfo_const_,int>::
  TArrayView<FViewInfo_const_,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_const_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
            (&local_be8,(TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&param_2->field_0x10);
  local_718.DataPtr = (param_2->VisibleLightInfos).AllocatorInstance.Data;
  local_718.ArrayNum = (param_2->VisibleLightInfos).ArrayNum;
  if ((local_718.ArrayNum < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar28)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar16 = FShadowScene::ExtensionRegistration._8_4_;
  lVar68 = (longlong)(int)FShadowScene::ExtensionRegistration._8_4_;
  if (((int)FShadowScene::ExtensionRegistration._8_4_ < 0) ||
     (*(int *)&param_2->field_0x98 <= (int)FShadowScene::ExtensionRegistration._8_4_)) {
LAB_1457d6dff:
    local_b00 = (FShadowSceneRenderer *)0x0;
  }
  else {
    if ((*(int *)&param_2->field_0x98 <= (int)FShadowScene::ExtensionRegistration._8_4_) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar28)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    puVar71 = &param_2->field_0x80;
    if (*(undefined1 **)&param_2->field_0x90 != (undefined1 *)0x0) {
      puVar71 = *(undefined1 **)&param_2->field_0x90;
    }
    if ((*(uint *)(puVar71 + (longlong)((int)(uVar16 + ((int)uVar16 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar16 & 0x1f) & 1) == 0) goto LAB_1457d6dff;
    local_b00 = *(FShadowSceneRenderer **)(*(longlong *)&param_2->field_0x70 + lVar68 * 8);
    if (local_b00 != (FShadowSceneRenderer *)0x0) goto LAB_1457d6e2c;
  }
  bVar28 = ::FDebug::CheckVerifyFailedImpl2
                     ("Renderer != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.h"
                      ,0x123,L"");
  if (bVar28) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
LAB_1457d6e2c:
  iVar32 = local_be8.ArrayNum;
  if ((local_be8.ArrayNum < 1) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("Views.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                          ,0x852,L""), bVar28)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  cVar9 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_808 = '\0';
  if ((cVar9 != '\0') && ((cVar9 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_358 = 0;
      uStack_354 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_35c);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)::u_FVirtualShadowM;
      ::Desc._padding_ = (longlong)::u_FVirtualShadowM;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x854;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FVirtualShadowMapArray::BeginMarkPages'::__l31::Desc::operator()<>'::__l3::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_4d8._Myfirst._Val = &::Desc;
    local_818.State = (FRDGScopeState *)param_1;
    pFVar36 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar36;
    local_818.Scope = pFVar36;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_>_>
              (&(pFVar36->Impl).Impl,(FRDGScopeState *)param_1,&local_4d8);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar36,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar36,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_808 = '\x01';
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FVirtualShadowMapArray_BeginMarkPages");
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2133,"FVirtualShadowMapArray_BeginMarkPages",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
               ,0x855);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2133);
  }
  iVar62 = local_be8.ArrayNum;
  if (iVar32 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)iVar32);
  }
  piVar5 = &(this->VisualizeLight).ArrayMax;
  piVar6 = &(this->VisualizeLight).ArrayNum;
  *piVar6 = 0;
  if (*piVar5 < local_be8.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_be8.ArrayNum,&(this->VisualizeLight).AllocatorInstance,0,piVar5);
  }
  iVar32 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x18,8,iVar62,&(this->VisualizeLight).AllocatorInstance,piVar6,piVar5);
  DefaultConstructItems<FVirtualShadowMapVisualizeLightSearch,int>
            ((this->VisualizeLight).AllocatorInstance.Data + (longlong)iVar32 * 0x18,iVar62);
  iVar32 = local_be8.ArrayNum;
  piVar5 = &(this->PerViewParameters).ArrayNum;
  piVar6 = &(this->PerViewParameters).ArrayMax;
  *piVar5 = 0;
  local_948 = (TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *)piVar5;
  if (*piVar6 < local_be8.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,local_be8.ArrayNum,&(this->PerViewParameters).AllocatorInstance,0,piVar6);
  }
  iVar62 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x30,0x10,iVar32,&(this->PerViewParameters).AllocatorInstance,piVar5,piVar6);
  DefaultConstructItems<FVirtualShadowMapPerViewParameters,int>
            ((this->PerViewParameters).AllocatorInstance.Data + (longlong)iVar62 * 0x30,iVar32);
  if ((GDumpVSMLightNames != false) && (3 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  if (this->bEnableVisualization != false) {
    this_00 = GetVirtualShadowMapVisualizationData();
    pFVar37 = local_be8.DataPtr + iVar32;
    if (local_be8.DataPtr != pFVar37) {
      pTVar70 = (TIntPoint<int>_u_0_s_0 *)(((local_be8.DataPtr)->ViewRect).field0_0x0.MinMax + 1);
      do {
        FVirtualShadowMapVisualizationData::Update(this_00,(FName *)&pTVar70[-0x1c4].Y);
        bVar29 = FVirtualShadowMapVisualizationData::IsActive(this_00);
        if (bVar29) {
          local_860._s_0 = *pTVar70;
          pTVar7 = &this->DebugVisualizationOutput;
          local_b10 = local_860._0_4_ - pTVar70[-1].X;
          iStack_b0c = local_860._4_4_ - pTVar70[-1].Y;
          local_1b8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
          local_1b8._32_4_ = 0;
          local_1b8._40_4_ = iStack_b0c;
          local_1b8._36_4_ = local_b10;
          local_178 = (void *)0x0;
          local_170 = 0;
          local_468._0_8_ = 0;
          local_468._8_8_ = 0;
          local_1b8._0_8_ = 0x20008;
          local_1b8._8_8_ = 1;
          local_1b8._16_8_ = 0;
          local_1b8._24_4_ = 0;
          local_1b8._44_4_ = 0x10001;
          local_1b8._48_4_ = 0xa000101;
          local_1b8._52_2_ = 0xff00;
          local_16c = 1;
          pFVar38 = FRDGBuilder::CreateTexture
                              (param_1,(FRDGTextureDesc *)local_1b8,
                               L"Shadow.Virtual.DebugProjection",None);
          local_9a0._padding_._1_1_ = 0;
          local_9a0._padding_._0_1_ = (pFVar38->Desc).field_0x34;
          local_9a0._padding_._2_4_ = 0;
          local_9a0._padding_._6_1_ = 0;
          local_9a0._padding_._0_1_ = 0;
          local_9a0.Texture = pFVar38;
          pFVar39 = FRDGBuilder::CreateUAV(param_1,&local_9a0,None);
          AddClearUAVPass(param_1,pFVar39,(FLinearColor *)&local_468._s_0,Compute);
          if (local_178 != (void *)0x0) {
            FMemory::Free(local_178);
          }
          pFVar75 = (pTVar7->AllocatorInstance).Data;
          local_bb0 = pFVar38;
          if (((pFVar75 <= (FScriptContainerElement *)&local_bb0) &&
              ((FScriptContainerElement *)&local_bb0 <
               pFVar75 + (longlong)(this->DebugVisualizationOutput).ArrayMax * 8)) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar29)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar32 = (this->DebugVisualizationOutput).ArrayNum;
          piVar5 = &(this->DebugVisualizationOutput).ArrayMax;
          if (iVar32 == *piVar5) {
            iVar32 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar7->AllocatorInstance,piVar5);
          }
          (this->DebugVisualizationOutput).ArrayNum = iVar32 + 1;
          *(FRDGTexture **)((pTVar7->AllocatorInstance).Data + (longlong)iVar32 * 8) = local_bb0;
        }
        pFVar8 = (FViewInfo *)(pTVar70 + 0x1a7);
        pTVar70 = pTVar70 + 0x52e;
      } while (pFVar8 != pFVar37);
    }
  }
  UpdateVisualizeLight(this,&local_be8,&local_718);
  local_760.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess;
  local_1e8.Tmp.AllocatorInstance.Data = (FIdBinIndex *)0x0;
  local_1e8.Tmp.ArrayNum = 0;
  local_1e8.Tmp.ArrayMax = 0;
  local_218.Tmp.AllocatorInstance.Data = (FIdBinIndex *)0x0;
  local_760.NumElements = (uint)(this->NumShadowMapSlots * 0x130) >> 2;
  local_1e8.Bins.Elements[0].VirtualShadowMapIdsOffset = 0;
  local_1e8.Bins.Elements[0].NumVirtualShadowMapIds = 0;
  local_1e8.Bins.Elements[1].VirtualShadowMapIdsOffset = 0;
  local_1e8.Bins.Elements[1].NumVirtualShadowMapIds = 0;
  local_218.Tmp.ArrayNum = 0;
  local_218.Tmp.ArrayMax = 0;
  local_1e8.Bins.Elements[2].VirtualShadowMapIdsOffset = 0;
  local_1e8.Bins.Elements[2].NumVirtualShadowMapIds = 0;
  local_1e8.Bins.Elements[3].VirtualShadowMapIdsOffset = 0;
  local_1e8.Bins.Elements[3].NumVirtualShadowMapIds = 0;
  local_760.Metadata = (FShaderParametersMetadata *)0x0;
  local_218.Bins.Elements[0].VirtualShadowMapIdsOffset = 0;
  local_218.Bins.Elements[0].NumVirtualShadowMapIds = 0;
  local_218.Bins.Elements[1].VirtualShadowMapIdsOffset = 0;
  local_218.Bins.Elements[1].NumVirtualShadowMapIds = 0;
  local_760.BytesPerElement = 4;
  local_218.Bins.Elements[2].VirtualShadowMapIdsOffset = 0;
  local_218.Bins.Elements[2].NumVirtualShadowMapIds = 0;
  local_218.Bins.Elements[3].VirtualShadowMapIdsOffset = 0;
  local_218.Bins.Elements[3].NumVirtualShadowMapIds = 0;
  pFVar40 = FRDGBuilder::CreateBuffer(param_1,&local_760,L"Shadow.Virtual.ProjectionData",None);
  this->ProjectionDataRDG = pFVar40;
  iVar62 = this->NumShadowMapSlots + -0x2000;
  local_8c0._padding_ = 0;
  local_8c0._padding_._0_4_ = 0;
  local_8c0.bFloat4Buffer = false;
  iVar32 = 0;
  if (0 < iVar62) {
    iVar32 = iVar62;
  }
  local_8c0._padding_ = 0;
  local_8c0._padding_ = 0;
  local_8c0.ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  local_8c0.UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  FRDGScatterUploadBuffer::Init
            (&local_8c0,param_1,iVar32 + this->NumSinglePageShadowMaps,0x130,false,
             L"Shadow.Virtual.ProjectionData.UploadBuffer");
  pFVar10 = this->CacheManager;
  local_888._padding_._0_4_ = 0;
  local_888._padding_._4_4_ = 1;
  local_888.UnvisitedBitMask = 0xffffffff;
  local_888.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar10->CacheEntries).field_0x10;
  local_888.CurrentBitIndex = 0;
  local_888.BaseBitIndex = 0;
  local_c18 = &pFVar10->CacheEntries;
  if (*(int *)&(pFVar10->CacheEntries).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_888);
  }
  uStack_c10 = CONCAT44(local_888._padding_._4_4_,(undefined4)local_888._padding_);
  uStack_c00 = local_888.UnvisitedBitMask;
  iStack_bfc = local_888.CurrentBitIndex;
  iStack_bf8 = local_888.BaseBitIndex;
  uStack_bf4 = local_888._28_4_;
  pTStack_c08 = local_888.Array;
  TStack_848.UnvisitedBitMask = local_888.UnvisitedBitMask;
  TStack_848.CurrentBitIndex = local_888.CurrentBitIndex;
  TStack_848._padding_._0_4_ = (undefined4)local_888._padding_;
  TStack_848._padding_._4_4_ = local_888._padding_._4_4_;
  TStack_848.Array = local_888.Array;
  TStack_848.BaseBitIndex = local_888.BaseBitIndex;
  TStack_848._28_4_ = local_888._28_4_;
  local_850 = local_c18;
  if (local_888.CurrentBitIndex < (local_888.Array)->NumBits) {
    do {
      lVar73 = 0;
      lVar41 = (longlong)TStack_848.CurrentBitIndex;
      lVar68 = *(longlong *)local_850;
      if ((*(longlong *)(lVar68 + 0x10 + lVar41 * 0x28) == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar69 = *(uint *)(*(longlong *)(lVar68 + 0x10 + lVar41 * 0x28) + 0xc);
      uVar63 = uVar69;
      local_c40 = uVar69;
      if (((int)uVar69 < 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("VirtualShadowMapId >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                              ,0x88a,L""), bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      while( true ) {
        if ((*(longlong *)(lVar68 + 0x10 + lVar41 * 0x28) == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar29)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar11 = *(longlong *)(lVar68 + 0x10 + lVar41 * 0x28);
        uVar69 = uVar63 - uVar69;
        if (*(int *)(lVar11 + 0x40) <= (int)uVar69) break;
        if ((lVar11 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar29)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar11 = *(longlong *)(lVar68 + 0x10 + lVar41 * 0x28);
        uVar33 = 0;
        if ((int)uVar69 < *(int *)(lVar11 + 0x40)) {
          uVar33 = ~uVar69 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar11 = *(longlong *)(lVar11 + 0x38);
        *(uint *)(local_8c0._padding_ + (local_8c0._padding_ & 0xffffffffU) * 4) = uVar63;
        uVar69 = (uint)local_8c0._padding_ * (int)local_8c0._padding_;
        local_8c0._padding_ = CONCAT44(local_8c0._padding_._4_4_,(int)local_8c0._padding_ + 1);
        memcpy((void *)((ulonglong)uVar69 + local_8c0._padding_),(void *)(lVar11 + 0x1150 + lVar73),
               (ulonglong)(uint)local_8c0._padding_);
        iVar32 = *(int *)(lVar11 + 0x126c + lVar73);
        if (uVar63 != 0xffffffff) {
          if (((int)uVar63 < 0x2000) || (5 < iVar32)) {
            iVar32 = 3;
          }
          else {
            iVar32 = iVar32 / 2;
          }
          local_c24.BinIndex = iVar32;
          local_c24.VirtualShadowMapId = uVar63;
          if (((local_1e8.Tmp.AllocatorInstance.Data <= &local_c24) &&
              (&local_c24 < local_1e8.Tmp.AllocatorInstance.Data + local_1e8.Tmp.ArrayMax)) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar29)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar32 = local_1e8.Tmp.ArrayNum;
          if (local_1e8.Tmp.ArrayNum == local_1e8.Tmp.ArrayMax) {
            iVar32 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPerPageShaderDispatcher::FBuilder::FIdBinIndex>_>
                               (0x404,&local_1e8.Tmp.AllocatorInstance,&local_1e8.Tmp.ArrayMax);
          }
          local_1e8.Tmp.ArrayNum = iVar32 + 1;
          local_1e8.Tmp.AllocatorInstance.Data[iVar32] = local_c24;
          piVar5 = &local_1e8.Bins.Elements[local_c24.BinIndex].NumVirtualShadowMapIds;
          *piVar5 = *piVar5 + 1;
        }
        uVar69 = local_c40;
        if (((-1 < (int)(local_c40 - 0x2000)) &&
            ((int)(local_c40 - 0x2000) < this->NumDirectionalShadowMaps)) &&
           (iVar32 = *(int *)(lVar11 + 0x126c + lVar73), uVar63 != 0xffffffff)) {
          if (((int)uVar63 < 0x2000) || (5 < iVar32)) {
            iVar32 = 3;
          }
          else {
            iVar32 = iVar32 / 2;
          }
          INSERT(0,iVar32,0x1c,4);
          INSERT(local_c20[0],uVar63,0,0x1c);
          if (((local_218.Tmp.AllocatorInstance.Data <= local_c20) &&
              (local_c20 < local_218.Tmp.AllocatorInstance.Data + local_218.Tmp.ArrayMax)) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar29)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar32 = local_218.Tmp.ArrayNum;
          if (local_218.Tmp.ArrayNum == local_218.Tmp.ArrayMax) {
            iVar32 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPerPageShaderDispatcher::FBuilder::FIdBinIndex>_>
                               (0x404,&local_218.Tmp.AllocatorInstance,&local_218.Tmp.ArrayMax);
          }
          local_218.Tmp.ArrayNum = iVar32 + 1;
          local_218.Tmp.AllocatorInstance.Data[iVar32] = local_c20[0];
          piVar5 = &local_218.Bins.Elements[ZPULL(local_c20[0],0x1c,4)].NumVirtualShadowMapIds;
          *piVar5 = *piVar5 + 1;
        }
        lVar73 = lVar73 + 0x12b0;
        uVar63 = uVar63 + 1;
      }
      TStack_848.UnvisitedBitMask = TStack_848.UnvisitedBitMask & ~TStack_848._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_848);
      param_1 = local_bc8;
    } while (TStack_848.CurrentBitIndex < (TStack_848.Array)->NumBits);
  }
  puVar57 = (undefined8 *)0x0;
  FRDGScatterUploadBuffer::ResourceUploadToInternal
            (&local_8c0,param_1,(FRDGViewableResource *)this->ProjectionDataRDG);
  FPerPageShaderDispatcher::Init
            (&this->VirtualShadowMapSetupContext->PerPageShaderDispatcher,param_1,&local_1e8);
  FPerPageShaderDispatcher::Init
            (&this->VirtualShadowMapSetupContext->PerPageShaderDispatcherDirectionalOnly,param_1,
             &local_218);
  if (local_8c0.UploadBuffer.Reference != (FRDGPooledBuffer *)0x0) {
    FRefCountBase::Release((FRefCountBase *)local_8c0.UploadBuffer.Reference);
  }
  if (local_8c0.ScatterBuffer.Reference != (FRDGPooledBuffer *)0x0) {
    FRefCountBase::Release((FRefCountBase *)local_8c0.ScatterBuffer.Reference);
  }
  if (local_218.Tmp.AllocatorInstance.Data != (FIdBinIndex *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_218.Tmp.AllocatorInstance.Data);
  }
  if (local_1e8.Tmp.AllocatorInstance.Data != (FIdBinIndex *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_1e8.Tmp.AllocatorInstance.Data);
  }
  if (FThreadStats::bPrimaryEnable != false) {
    TVar42 = FThreadSafeStaticStatInner<FStat_STAT_VSMSinglePageCount,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_VSMSinglePageCount,1> *)
                        &StatPtr_STAT_VSMSinglePageCount);
    local_c30 = *(FName *)(TVar42.StatIdPtr)->Name;
    FThreadStats::AddMessage<__int64>(local_c30,Set,(longlong)this->NumSinglePageShadowMaps,false);
    if (FThreadStats::bPrimaryEnable != false) {
      TVar42 = FThreadSafeStaticStatInner<FStat_STAT_VSMFullCount,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_VSMFullCount,1> *)
                          &StatPtr_STAT_VSMFullCount);
      local_c30 = *(FName *)(TVar42.StatIdPtr)->Name;
      iVar62 = this->NumShadowMapSlots + -0x2000;
      iVar32 = 0;
      if (0 < iVar62) {
        iVar32 = iVar62;
      }
      FThreadStats::AddMessage<__int64>(local_c30,Set,(longlong)iVar32,false);
    }
  }
  if (__CsvProfilerStat2211 == false) {
    FCsvProfilerTrace::OutputInlineStat("SinglePageCount",_GCsvCategory_VSM.Index);
    __CsvProfilerStat2211 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("SinglePageCount",_GCsvCategory_VSM.Index,this->NumSinglePageShadowMaps,Set);
  if (__CsvProfilerStat2212 == false) {
    FCsvProfilerTrace::OutputInlineStat("FullCount",_GCsvCategory_VSM.Index);
    __CsvProfilerStat2212 = true;
  }
  uVar33 = this->NumShadowMapSlots - 0x2000;
  uVar63 = 0;
  uVar69 = uVar63;
  if (0 < (int)uVar33) {
    uVar69 = uVar33;
  }
  FCsvProfiler::RecordCustomStat("FullCount",_GCsvCategory_VSM.Index,uVar69,Set);
  uVar69 = this->NumShadowMapSlots;
  (this->UniformParameters).NumShadowMapSlots = uVar69;
  local_7e0._padding_._4_4_ = 0;
  local_7e0._padding_._0_4_ = 0xffffffff;
  uVar69 = uVar69 - 0x2000;
  local_7e0._padding_ = 0;
  uVar33 = uVar63;
  if (0 < (int)uVar69) {
    uVar33 = uVar69;
  }
  (this->UniformParameters).NumFullShadowMaps = uVar33;
  (this->UniformParameters).NumSinglePageShadowMaps = this->NumSinglePageShadowMaps;
  local_7e0.Buffer = this->ProjectionDataRDG;
  local_7e0._padding_._0_1_ = 0;
  if ((((local_7e0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_7e0._padding_._0_1_ = 0x1c;
  }
  pFVar43 = FRDGBuilder::CreateSRV(param_1,&local_7e0);
  (this->UniformParameters).ProjectionData = pFVar43;
  iVar32 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarCoarsePagesIncludeNonNanite);
  (this->UniformParameters).bExcludeNonNaniteFromCoarsePages = (uint)(iVar32 == 0);
  fVar76 = TConsoleVariableData<float>::GetValueOnRenderThread
                     (CVarCoarsePagePixelThresholdDynamic.Ref);
  (this->UniformParameters).CoarsePagePixelThresholdDynamic = fVar76;
  fVar76 = TConsoleVariableData<float>::GetValueOnRenderThread
                     (CVarCoarsePagePixelThresholdStatic.Ref);
  (this->UniformParameters).CoarsePagePixelThresholdStatic = fVar76;
  fVar76 = TConsoleVariableData<float>::GetValueOnRenderThread
                     (CVarCoarsePagePixelThresholdDynamicNanite.Ref);
  (this->UniformParameters).CoarsePagePixelThresholdDynamicNanite = fVar76;
  pFVar44 = FCsvProfiler::Get();
  bVar29 = FCsvProfiler::IsCapturing_Renderthread(pFVar44);
  if (bVar29) {
    pFVar44 = FCsvProfiler::Get();
    FCsvProfiler::IsCategoryEnabled(pFVar44,_GCsvCategory_VSM.Index);
  }
  uStack_c10._0_4_ = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_c18 = (TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
               *)0x5a00000004;
  pTStack_c08 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_508.BytesPerElement = 4;
  local_508.NumElements = 0x5a;
  local_508.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_508._12_4_ = uStack_c10._4_4_;
  local_508.Metadata = (FShaderParametersMetadata *)0x0;
  local_b30.Buffer =
       FRDGBuilder::CreateBuffer(param_1,&local_508,L"Shadow.Virtual.StatsBuffer",None);
  this->StatsBufferRDG = local_b30.Buffer;
  bVar61 = 0;
  local_b30._padding_._2_1_ = 0;
  if ((((local_b30.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar61 = 0x1c;
  }
  local_b30._padding_._0_2_ = (ushort)bVar61;
  pFVar45 = FRDGBuilder::CreateUAV(param_1,&local_b30,None);
  AddClearUAVPass(param_1,pFVar45,0,Compute);
  local_b20.Buffer = this->StatsBufferRDG;
  bVar61 = 0;
  local_b20._padding_._2_1_ = 0;
  if ((((local_b20.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar61 = 0x1c;
  }
  local_b20._padding_._0_2_ = (ushort)bVar61;
  pFVar45 = FRDGBuilder::CreateUAV(param_1,&local_b20,SkipBarrier);
  this->StatsBufferUAV = pFVar45;
  uVar33 = this->NumShadowMapSlots - 0x2000;
  uVar69 = uVar63;
  if (0 < (int)uVar33) {
    uVar69 = uVar33;
  }
  uVar33 = (uint)GRHIGlobals.MaxTextureDimensions.Value >> 8;
  if (((uVar33 & uVar33 - 1) != 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("FMath::IsPowerOfTwo(NumPageTablesEntriesPerRow)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                          ,0x8c5,L""), bVar29)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  (this->UniformParameters).PageTableRowMask = uVar33 - 1;
  local_b48 = uVar33 << 7;
  iStack_b44 = ((uVar33 + uVar69) / uVar33) * 0xc0;
  local_868 = 0x1f;
  if (uVar33 != 0) {
    for (; uVar33 >> local_868 == 0; local_868 = local_868 - 1) {
    }
  }
  if (uVar33 != 0) {
    uVar63 = local_868;
  }
  (this->UniformParameters).PageTableRowShift = uVar63;
  (this->UniformParameters).PageTableTextureSizeInvSize.field0_0x0._s_0.X = (float)local_b48;
  local_a60 = &local_b48;
  (this->UniformParameters).PageTableTextureSizeInvSize.field0_0x0._s_0.Y = (float)iStack_b44;
  fVar76 = __real_3f800000;
  (this->UniformParameters).PageTableTextureSizeInvSize.field0_0x0._s_0.Z =
       __real_3f800000 / (float)local_b48;
  (this->UniformParameters).PageTableTextureSizeInvSize.field0_0x0._s_0.W =
       fVar76 / (float)iStack_b44;
  local_a68 = param_1;
  local_a58 = param_1;
  local_a50 = this;
  local_738 = this;
  local_730 = param_1;
  pFVar38 = `FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_2>::operator()
                      (&local_a68,false,PF_R32_UINT,L"Shadow.Virtual.PageRequestFlags",1);
  this->PageRequestFlagsRDG = pFVar38;
  `FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_3>::operator()
            (&local_a58,pFVar38,0,1,false);
  bVar29 = IsVirtualShadowMapDirectionalReceiverMaskEnabled();
  if ((bVar29) || (bVar29 = IsVirtualShadowMapLocalReceiverMaskEnabled(), bVar29)) {
    bVar29 = IsVirtualShadowMapLocalReceiverMaskEnabled();
    if (bVar29) {
      pFVar38 = `FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_2>::operator()
                          (&local_a68,true,PF_R32_UINT,L"Shadow.Virtual.PageReceiverMasks",2);
      this->PageReceiverMasksRDG = pFVar38;
      bVar29 = false;
    }
    else {
      uVar63 = this->NumDirectionalShadowMaps + 1;
      local_168._8_8_ = 2;
      local_168._16_4_ = 0;
      local_168._32_4_ = 0;
      uVar69 = ((uVar33 - 1) + uVar63) / uVar33;
      local_168._44_4_ = 0x10001;
      local_168._48_4_ = 0x1c000108;
      local_168._52_2_ = 0xff00;
      if (uVar69 == 1) {
        uVar33 = uVar63;
      }
      local_128 = (void *)0x0;
      iStack_b04 = uVar69 * 0x180;
      local_168._0_8_ = 0x200020008;
      local_168._20_8_ = local_2c0[1].FormattedEventName.Data._4_8_;
      local_168._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_b08 = uVar33 << 8;
      local_168._40_4_ = iStack_b04;
      local_168._36_4_ = local_b08;
      local_120 = 0;
      local_11c = 1;
      pFVar38 = FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_168,L"Shadow.Virtual.PageReceiverMasks",
                           None);
      this->PageReceiverMasksRDG = pFVar38;
      if (local_128 != (void *)0x0) {
        FMemory::Free(local_128);
      }
      pFVar38 = this->PageReceiverMasksRDG;
      bVar29 = true;
    }
    `FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_3>::operator()
              (&local_a58,pFVar38,0,2,bVar29);
    uVar12 = *(undefined8 *)&(this->PageReceiverMasksRDG->Desc).field_0x24;
    iVar62 = (int)uVar12;
    iVar32 = (int)((ulonglong)uVar12 >> 0x20);
    fVar79 = fVar76 / (float)iVar32;
    fVar77 = fVar76 / (float)iVar62;
    fVar78 = (float)iVar32;
    fVar80 = (float)iVar62;
  }
  else {
    pFVar38 = `FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_4>::operator()(&local_738);
    this->PageReceiverMasksRDG = pFVar38;
    fVar80 = fVar76;
    fVar77 = fVar76;
    fVar78 = fVar76;
    fVar79 = fVar76;
  }
  (this->UniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0._s_0.X = fVar80;
  (this->UniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0._s_0.Y = fVar78;
  (this->UniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0._s_0.Z = fVar77;
  (this->UniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0._s_0.W = fVar79;
  uStack_c10._0_4_ = 0x10109;
  pTStack_c08 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_c18._4_4_ = (this->UniformParameters).MaxPhysicalPages * 5;
  local_c18._0_4_ = 4;
  local_4f0.Metadata = (FShaderParametersMetadata *)0x0;
  local_4f0.BytesPerElement = 4;
  local_4f0.NumElements = local_c18._4_4_;
  local_4f0.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_4f0._12_4_ = uStack_c10._4_4_;
  local_af8.Buffer =
       FRDGBuilder::CreateBuffer(param_1,&local_4f0,L"Shadow.Virtual.DirtyPageFlags",None);
  this->DirtyPageFlagsRDG = local_af8.Buffer;
  local_af8._padding_._2_1_ = 0;
  bVar61 = 0;
  if ((((local_af8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar61 = 0x1c;
  }
  local_af8._padding_._0_2_ = (ushort)bVar61;
  pFVar45 = FRDGBuilder::CreateUAV(param_1,&local_af8,None);
  AddClearUAVPass(param_1,pFVar45,0,Compute);
  uStack_c10._0_4_ = 0x10109;
  pTStack_c08 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_c18._4_4_ = (this->UniformParameters).MaxPhysicalPages * 4 + 4;
  local_c18._0_4_ = 4;
  local_3b8.Metadata = (FShaderParametersMetadata *)0x0;
  local_3b8.BytesPerElement = 4;
  local_3b8.NumElements = local_c18._4_4_;
  local_3b8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3b8._12_4_ = uStack_c10._4_4_;
  pFVar40 = FRDGBuilder::CreateBuffer(param_1,&local_3b8,L"Shadow.Virtual.PhysicalPageLists",None);
  this->PhysicalPageListsRDG = pFVar40;
  uStack_c10._0_4_ = 0x10109;
  iVar32 = 1;
  if ((this->NumShadowMapSlots & 0x1fffffffU) != 0) {
    iVar32 = this->NumShadowMapSlots << 3;
  }
  pTStack_c08 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_4c8.Metadata = (FShaderParametersMetadata *)0x0;
  uVar74 = (ulonglong)(iVar32 - 1) * 2 + 1;
  lVar68 = 0x3f;
  if (uVar74 != 0) {
    for (; uVar74 >> lVar68 == 0; lVar68 = lVar68 + -1) {
    }
  }
  uVar69 = 1 << ((byte)lVar68 & 0x1f);
  local_c18._4_4_ = uVar69;
  local_c18._0_4_ = 0x10;
  local_864 = (undefined4)lVar68;
  local_4c8.BytesPerElement = 0x10;
  local_4c8.NumElements = uVar69;
  local_4c8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_4c8._12_4_ = uStack_c10._4_4_;
  pFVar40 = FRDGBuilder::CreateBuffer(param_1,&local_4c8,L"Shadow.Virtual.PageRectBounds",None);
  uStack_c10._0_4_ = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_c18._0_4_ = 0x10;
  pTStack_c08 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_4b0.BytesPerElement = 0x10;
  local_4b0.NumElements = uVar69;
  local_4b0.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_4b0._12_4_ = uStack_c10._4_4_;
  this->UncachedPageRectBoundsRDG = pFVar40;
  local_4b0.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar40 = FRDGBuilder::CreateBuffer
                      (param_1,&local_4b0,L"Shadow.Virtual.AllocatedPageRectBounds",None);
  this->AllocatedPageRectBoundsRDG = pFVar40;
  iVar62 = this->NumShadowMapSlots + -0x2000;
  iVar32 = 0;
  if (0 < iVar62) {
    iVar32 = iVar62;
  }
  iVar32 = (iVar32 + this->NumSinglePageShadowMaps) * 8;
  puVar35 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
  if (puVar35 == (undefined8 *)0x0) {
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar29) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  else {
    puVar35[2] = 0;
    *puVar35 = &___7__TObject_VFParameters_FInitPageRectBoundsCS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar35 + 3) = 1;
    puVar35[4] = 0;
    puVar35[5] = 0;
    puVar35[7] = 0;
    puVar35[8] = 0;
    puVar57 = puVar35;
  }
  plVar1 = local_bd0;
  local_ba8 = puVar57;
  if ((((undefined8 **)*local_bd0 <= &local_ba8) &&
      (&local_ba8 < (undefined8 **)*local_bd0 + *(int *)((longlong)local_bd0 + 0xc))) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar29)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar62 = (int)plVar1[1];
  if (iVar62 == *(int *)((longlong)plVar1 + 0xc)) {
    iVar62 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar1,(int *)((longlong)plVar1 + 0xc));
  }
  pFVar2 = (FParameters *)(puVar57 + 2);
  *(int *)(plVar1 + 1) = iVar62 + 1;
  *(undefined8 **)(*plVar1 + (longlong)iVar62 * 8) = local_ba8;
  pTVar46 = GetUncachedUniformBuffer(this,param_1);
  pFVar47 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  EVar64 = Static;
  if (pFVar47->BindingFlags != StaticAndShader) {
    EVar64 = pFVar47->BindingFlags;
  }
  bVar61 = 0;
  uStack_b70 = CONCAT31(uStack_b70._1_3_,EVar64);
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)&pFVar2->VirtualShadowMap = pTVar46;
  puVar57[3] = CONCAT44(uStack_b6c,uStack_b70);
  local_ae8.Buffer = this->UncachedPageRectBoundsRDG;
  local_ae8._padding_._2_1_ = 0;
  if ((((local_ae8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar61 = 0x1c;
  }
  local_ae8._padding_._0_2_ = (ushort)bVar61;
  local_b78 = pTVar46;
  pFVar45 = FRDGBuilder::CreateUAV(param_1,&local_ae8,None);
  puVar57[4] = pFVar45;
  local_ad8.Buffer = this->AllocatedPageRectBoundsRDG;
  local_ad8._padding_._2_1_ = 0;
  bVar61 = 0;
  if ((((local_ad8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar61 = 0x1c;
  }
  local_ad8._padding_._0_2_ = (ushort)bVar61;
  pFVar45 = FRDGBuilder::CreateUAV(param_1,&local_ad8,None);
  puVar57[5] = pFVar45;
  *(int *)(puVar57 + 6) = iVar32;
  local_ac8.Buffer = this->PhysicalPageListsRDG;
  local_ac8._padding_._2_1_ = 0;
  bVar61 = 0;
  if ((((local_ac8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar61 = 0x1c;
  }
  local_ac8._padding_._0_2_ = (ushort)bVar61;
  pFVar45 = FRDGBuilder::CreateUAV(param_1,&local_ac8,None);
  puVar57[7] = pFVar45;
  pFVar48 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                               [*(int *)&this->Scene->field_0x8]);
  pFVar49 = FInitPageRectBoundsCS::GetStaticType();
  if (*(int *)&pFVar49->field_0x50 != 1) {
    local_c3c = 0;
    `FGlobalShaderMap::GetShader<FInitPageRectBoundsCS>'::__l2::<lambda_1>::operator()(&local_c3c);
  }
  pFVar50 = (FShaderType *)FInitPageRectBoundsCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar48,&local_728,pFVar50,0);
  if (local_728.ShaderContent == (FShader *)0x0) {
    FVar51 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_528);
    ::FName::ToString((FName *)FVar51,&local_458);
    FInitPageRectBoundsCS::GetStaticType();
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    if (bVar29) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  FInitPageRectBoundsCS::GetStaticType();
  local_428.ShaderContent = (FInitPageRectBoundsCS *)local_728.ShaderContent;
  local_428.ShaderMap = local_728.ShaderMap;
  pFVar47 = FInitPageRectBoundsCS::FParameters::FTypeInfo::GetStructMetadata();
  local_448.ShaderContent = local_728.ShaderContent;
  local_448.ShaderMap = local_728.ShaderMap;
  ValidateShaderParameters(&local_448,pFVar47,pFVar2);
  local_438._First = (FRDGResource **)0x0;
  local_438._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl(&(local_728.ShaderContent)->Bindings,pFVar47,pFVar2,&local_438);
  pFVar52 = FRDGEventName::FRDGEventName(&local_308,1,L"InitPageRectBounds");
  pFVar47 = FInitPageRectBoundsCS::FParameters::FTypeInfo::GetStructMetadata();
  local_968._s_0.X = iVar32 + 0xffU >> 8;
  local_968._s_0.Y = 1;
  local_968._s_0.Z = 1;
  FComputeShaderUtils::AddPass<FInitPageRectBoundsCS>
            (param_1,pFVar52,Compute,&local_428,pFVar47,pFVar2,(TIntVector3<int> *)&local_968._s_0);
  if (local_308.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FRDGSystemTextures::Get(param_1);
  fVar77 = TConsoleVariableData<float>::GetValueOnRenderThread(CVarTimeBudgetMs.Ref);
  if ((0.0 < fVar77) ||
     (fVar77 = TConsoleVariableData<float>::GetValueOnRenderThread(CVarThrottleLoadBudget.Ref),
     0.0 < fVar77)) {
    bVar29 = true;
  }
  else {
    bVar29 = false;
  }
  this->bThrottlingEnabled = bVar29;
  if (bVar29 == false) {
    pFVar40 = FSystemTextures::GetDefaultStructuredBuffer
                        ((FSystemTextures *)&GSystemTextures,param_1,4,0);
    this->ThrottleBufferRDG = pFVar40;
  }
  else {
    pTStack_c08 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    uStack_c10._0_4_ = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_c18._4_4_ = this->NumShadowMapSlots * 3 + 5;
    local_498.Metadata = (FShaderParametersMetadata *)0x0;
    local_c18._0_4_ = 4;
    local_498.BytesPerElement = 4;
    local_498.NumElements = local_c18._4_4_;
    local_498.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_498._12_4_ = uStack_c10._4_4_;
    local_ab8.Buffer = FRDGBuilder::CreateBuffer(param_1,&local_498,L"ThrottleBuffer",None);
    this->ThrottleBufferRDG = local_ab8.Buffer;
    local_ab8._padding_._2_1_ = 0;
    bVar61 = 0;
    if ((((local_ab8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar61 = 0x1c;
    }
    local_ab8._padding_._0_2_ = (ushort)bVar61;
    pFVar45 = FRDGBuilder::CreateUAV(param_1,&local_ab8,None);
    AddClearUAVPass(param_1,pFVar45,0,Compute);
  }
  bVar29 = DynamicRenderScaling::FHeuristicSettings::IsEnabled
                     (&GDynamicResolutionVSMNaniteBudget.CachedSettings);
  pFVar23 = local_bd8;
  if (bVar29) {
    FVar72 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
             &local_bd8->DynamicResolutionFractions;
    iVar32 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    if (((pFVar23->DynamicResolutionFractions).Array.ArrayNum != iVar32) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("Array.Num() == FBudget::GetGlobalListSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                            ,0xcf,L""), bVar29)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    lVar68 = (longlong)GDynamicResolutionVSMNaniteBudget.BudgetId;
    uVar69 = 0;
    if (GDynamicResolutionVSMNaniteBudget.BudgetId <
        (pFVar23->DynamicResolutionFractions).Array.ArrayNum) {
      uVar69 = (uint)~GDynamicResolutionVSMNaniteBudget.BudgetId >> 0x1f;
    }
    if ((uVar69 == 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    FVar13 = (pFVar23->DynamicResolutionFractions).Array.AllocatorInstance.SecondaryData;
    if (FVar13 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FVar72 = FVar13;
    }
    fVar77 = fVar76 - *(float *)((uchar *)((longlong)FVar72 + 8) + lVar68 * 0x10);
    if (fVar76 <= fVar77) {
      fVar77 = fVar76;
    }
    if (fVar77 <= 0.0) {
      fVar77 = 0.0;
    }
    local_c18 = (TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
                 *)CONCAT44(local_c18._4_4_,fVar77);
  }
  else {
    local_c18 = (TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
                 *)CONCAT44(local_c18._4_4_,0xbf800000);
  }
  fVar76 = TConsoleVariableData<float>::GetValueOnRenderThread(CVarThrottleLoadBudget.Ref);
  if (fVar76 <= 0.0) {
    fVar76 = __real_7f7fffff;
  }
  local_c18 = (TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
               *)CONCAT44(fVar76,(uint)local_c18);
  fVar78 = TAutoConsoleVariable<float>::GetValueOnRenderThread(&CVarVSMDynamicResolutionMaxLodBias);
  fVar76 = TAutoConsoleVariable<float>::GetValueOnRenderThread
                     (&CVarVSMDynamicResolutionMaxLodBiasDirectional);
  fVar77 = TAutoConsoleVariable<float>::GetValueOnRenderThread
                     (&CVarVSMDynamicResolutionMaxLodBiasLocal);
  if (fVar78 <= fVar76) {
    fVar76 = fVar78;
  }
  if (fVar78 <= fVar77) {
    fVar77 = fVar78;
  }
  fVar78 = this->CacheManager->GlobalResolutionLodBias;
  fVar76 = fVar76 - fVar78;
  fVar77 = fVar77 - fVar78;
  if (fVar76 <= 0.0) {
    fVar76 = 0.0;
  }
  if (fVar77 <= 0.0) {
    fVar77 = 0.0;
  }
  pTStack_c08 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(pTStack_c08._4_4_,fVar77);
  uStack_c10._4_4_ = fVar76;
  fVar76 = TConsoleVariableData<float>::GetValueOnRenderThread(CVarThrottleEMAHistoryWeight.Ref);
  pTVar65 = &(this->CacheManager->PrevBuffers).ProjectionData;
  uStack_c10 = CONCAT44(uStack_c10._4_4_,fVar76);
  if (pTVar65->Reference == (FRDGPooledBuffer *)0x0) {
    pFVar40 = FSystemTextures::GetDefaultByteAddressBuffer
                        ((FSystemTextures *)&GSystemTextures,param_1,0x130);
  }
  else {
    pFVar40 = FRDGBuilder::RegisterExternalBuffer(param_1,pTVar65,None);
  }
  pTVar22 = pTStack_c08;
  uVar21 = uStack_c10;
  uVar20 = local_c18;
  this->PrevProjectionData = pFVar40;
  uVar12 = CONCAT44(iStack_bfc,uStack_c00);
  if ((this->bThrottlingEnabled != false) &&
     ((this->CacheManager->PrevBuffers).NanitePerformanceFeedback.Reference !=
      (FRDGPooledBuffer *)0x0)) {
    puVar35 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x60,0x10);
    puVar57 = (undefined8 *)0x0;
    if (puVar35 == (undefined8 *)0x0) {
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar29) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    else {
      puVar35[2] = 0;
      *puVar35 = &___7__TObject_VFParameters_FProcessPrevFramePerfDataCS___FRDGAllocator__6B_;
      puVar35[3] = 0;
      puVar35[4] = 0;
      puVar35[10] = 0;
      puVar57 = puVar35;
    }
    local_ba0 = puVar57;
    if ((((undefined8 **)*plVar1 <= &local_ba0) &&
        (&local_ba0 < (undefined8 **)*plVar1 + *(int *)((longlong)plVar1 + 0xc))) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar29)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar32 = (int)plVar1[1];
    if (iVar32 == *(int *)((longlong)plVar1 + 0xc)) {
      iVar32 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)plVar1,(int *)((longlong)plVar1 + 0xc));
    }
    pFVar3 = (FParameters *)(puVar57 + 2);
    *(int *)(plVar1 + 1) = iVar32 + 1;
    *(undefined8 **)(*plVar1 + (longlong)iVar32 * 8) = local_ba0;
    if (((this->CacheManager->PrevBuffers).ThrottleBuffer.Reference == (FRDGPooledBuffer *)0x0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("CacheManager->GetPrevBuffers().ThrottleBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                            ,0x9a9,L""), bVar29)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    local_7c0.Buffer =
         FRDGBuilder::RegisterExternalBuffer
                   (param_1,&(this->CacheManager->PrevBuffers).ThrottleBuffer,None);
    local_7c0._padding_._4_4_ = 0;
    local_7c0._padding_._0_4_ = 0xffffffff;
    local_7c0._padding_ = 0;
    local_7c0._padding_._0_1_ = 0;
    if ((((local_7c0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_7c0._padding_._0_1_ = 0x1c;
    }
    pFVar43 = FRDGBuilder::CreateSRV(param_1,&local_7c0);
    pFVar3->PrevThrottleBuffer = pFVar43;
    local_7a0.Buffer =
         FRDGBuilder::RegisterExternalBuffer
                   (param_1,&(this->CacheManager->PrevBuffers).NanitePerformanceFeedback,None);
    local_7a0._padding_._0_1_ = 0;
    local_7a0._padding_._4_4_ = 0;
    local_7a0._padding_._0_4_ = 0xffffffff;
    local_7a0._padding_ = 0;
    if ((((local_7a0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_7a0._padding_._0_1_ = 0x1c;
    }
    pFVar43 = FRDGBuilder::CreateSRV(param_1,&local_7a0);
    puVar57[3] = pFVar43;
    local_800.Buffer =
         CreateStructuredBuffer<UE::HLSL::FNextVirtualShadowMapData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                   (param_1,L"Shadow.Virtual.NextVirtualShadowMapData",&this->NextData,None);
    local_800._padding_._0_1_ = 0;
    local_800._padding_._4_4_ = 0;
    local_800._padding_._0_4_ = 0xffffffff;
    local_800._padding_ = 0;
    if ((((local_800.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_800._padding_._0_1_ = 0x1c;
    }
    pFVar43 = FRDGBuilder::CreateSRV(param_1,&local_800);
    puVar57[4] = pFVar43;
    *(int *)(puVar57 + 5) = (this->NextData).ArrayNum;
    puVar57[6] = uVar20;
    puVar57[7] = uVar21;
    puVar57[8] = pTVar22;
    puVar57[9] = uVar12;
    local_aa8.Buffer = this->ThrottleBufferRDG;
    bVar61 = 0;
    local_aa8._padding_._2_1_ = 0;
    if ((((local_aa8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar61 = 0x1c;
    }
    local_aa8._padding_._0_2_ = (ushort)bVar61;
    pFVar45 = FRDGBuilder::CreateUAV(param_1,&local_aa8,None);
    puVar57[10] = pFVar45;
    pFVar48 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [*(int *)&this->Scene->field_0x8]);
    pFVar49 = FProcessPrevFramePerfDataCS::GetStaticType();
    if (*(int *)&pFVar49->field_0x50 != 1) {
      local_c3b = 0;
      `FGlobalShaderMap::GetShader<FProcessPrevFramePerfDataCS>'::__l2::<lambda_1>::operator()
                (&local_c3b);
    }
    pFVar50 = (FShaderType *)FProcessPrevFramePerfDataCS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar48,&local_748,pFVar50,0);
    if (local_748.ShaderContent == (FShader *)0x0) {
      FVar51 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_520);
      ::FName::ToString((FName *)FVar51,&local_418);
      FProcessPrevFramePerfDataCS::GetStaticType();
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.Data.AllocatorInstance.Data);
      }
      if (bVar29) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    FProcessPrevFramePerfDataCS::GetStaticType();
    local_3f8.ShaderContent = (FProcessPrevFramePerfDataCS *)local_748.ShaderContent;
    local_3f8.ShaderMap = local_748.ShaderMap;
    pFVar47 = FProcessPrevFramePerfDataCS::FParameters::FTypeInfo::GetStructMetadata();
    local_408.ShaderContent = local_748.ShaderContent;
    local_408.ShaderMap = local_748.ShaderMap;
    ValidateShaderParameters(&local_408,pFVar47,pFVar3);
    local_548[0]._First = (FRDGResource **)0x0;
    local_548[0]._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_748.ShaderContent)->Bindings,pFVar47,pFVar3,local_548);
    iVar32 = (this->NextData).ArrayNum + 0x3f;
    iVar32 = (int)((iVar32 >> 0x1f & 0x3fU) + iVar32) >> 6;
    pFVar52 = FRDGEventName::FRDGEventName(&local_2f0,1,L"ProcessPrevFramePerfData");
    pFVar47 = FProcessPrevFramePerfDataCS::FParameters::FTypeInfo::GetStructMetadata();
    local_958._s_0.Y = 1;
    local_958._s_0.Z = 1;
    local_958._s_0.X = iVar32;
    if (iVar32 < 1) {
      local_958._s_0.X = 1;
    }
    FComputeShaderUtils::AddPass<FProcessPrevFramePerfDataCS>
              (param_1,pFVar52,Compute,&local_3f8,pFVar47,pFVar3,(TIntVector3<int> *)&local_958._s_0
              );
    if (local_2f0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_2f0.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  if ((this->bThrottlingEnabled != false) &&
     ((this->CacheManager->PrevBuffers).ThrottleBuffer.Reference != (FRDGPooledBuffer *)0x0)) {
    puVar35 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x60,0x10);
    puVar57 = (undefined8 *)0x0;
    if (puVar35 == (undefined8 *)0x0) {
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar29) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    else {
      puVar35[2] = 0;
      *puVar35 = &___7__TObject_VFParameters_FUpdateThrottleParametersCS___FRDGAllocator__6B_;
      puVar35[9] = 0;
      puVar35[10] = 0;
      puVar57 = puVar35;
    }
    local_b98 = puVar57;
    if ((((undefined8 **)*plVar1 <= &local_b98) &&
        (&local_b98 < (undefined8 **)*plVar1 + *(int *)((longlong)plVar1 + 0xc))) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar29)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar32 = (int)plVar1[1];
    if (iVar32 == *(int *)((longlong)plVar1 + 0xc)) {
      iVar32 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)plVar1,(int *)((longlong)plVar1 + 0xc));
    }
    pFVar4 = (FParameters *)(puVar57 + 2);
    *(int *)(plVar1 + 1) = iVar32 + 1;
    *(undefined8 **)(*plVar1 + (longlong)iVar32 * 8) = local_b98;
    local_780.Buffer =
         FRDGBuilder::RegisterExternalBuffer
                   (param_1,&(this->CacheManager->PrevBuffers).ThrottleBuffer,None);
    local_780._padding_._4_4_ = 0;
    local_780._padding_._0_4_ = 0xffffffff;
    local_780._padding_ = 0;
    local_780._padding_._0_1_ = 0;
    if ((((local_780.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_780._padding_._0_1_ = 0x1c;
    }
    pFVar43 = FRDGBuilder::CreateSRV(param_1,&local_780);
    pFVar4->PrevThrottleBuffer = pFVar43;
    puVar57[4] = uVar20;
    puVar57[5] = uVar21;
    puVar57[6] = pTVar22;
    puVar57[7] = uVar12;
    *(int *)(puVar57 + 8) = this->NumShadowMapSlots;
    local_a98.Buffer = this->ThrottleBufferRDG;
    bVar61 = 0;
    local_a98._padding_._2_1_ = 0;
    if ((((local_a98.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar61 = 0x1c;
    }
    local_a98._padding_._0_2_ = (ushort)bVar61;
    pFVar45 = FRDGBuilder::CreateUAV(param_1,&local_a98,None);
    puVar57[9] = pFVar45;
    local_a88.Buffer = this->ProjectionDataRDG;
    bVar61 = 0;
    local_a88._padding_._2_1_ = 0;
    if ((((local_a88.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar61 = 0x1c;
    }
    local_a88._padding_._0_2_ = (ushort)bVar61;
    pFVar45 = FRDGBuilder::CreateUAV(param_1,&local_a88,None);
    puVar57[10] = pFVar45;
    pFVar48 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [*(int *)&this->Scene->field_0x8]);
    pFVar49 = FUpdateThrottleParametersCS::GetStaticType();
    if (*(int *)&pFVar49->field_0x50 != 1) {
      local_c3a = 0;
      `FGlobalShaderMap::GetShader<FUpdateThrottleParametersCS>'::__l2::<lambda_1>::operator()
                (&local_c3a);
    }
    pFVar50 = (FShaderType *)FUpdateThrottleParametersCS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar48,&local_708,pFVar50,0);
    if (local_708.ShaderContent == (FShader *)0x0) {
      FVar51 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_518);
      ::FName::ToString((FName *)FVar51,&local_3e8);
      FUpdateThrottleParametersCS::GetStaticType();
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
      if (bVar29) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    FUpdateThrottleParametersCS::GetStaticType();
    local_398.ShaderContent = (FUpdateThrottleParametersCS *)local_708.ShaderContent;
    local_398.ShaderMap = local_708.ShaderMap;
    pFVar47 = FUpdateThrottleParametersCS::FParameters::FTypeInfo::GetStructMetadata();
    local_3d8.ShaderContent = local_708.ShaderContent;
    local_3d8.ShaderMap = local_708.ShaderMap;
    ValidateShaderParameters(&local_3d8,pFVar47,pFVar4);
    local_3c8._First = (FRDGResource **)0x0;
    local_3c8._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_708.ShaderContent)->Bindings,pFVar47,pFVar4,&local_3c8);
    iVar32 = this->NumShadowMapSlots + 0x3f;
    pFVar52 = FRDGEventName::FRDGEventName(&local_2d8,1,L"UpdateThrottleParameters");
    pFVar47 = FUpdateThrottleParametersCS::FParameters::FTypeInfo::GetStructMetadata();
    local_9e8._s_0.Y = 1;
    local_9e8._s_0.Z = 1;
    local_9e8._s_0.X = (int)((iVar32 >> 0x1f & 0x3fU) + iVar32) >> 6;
    FComputeShaderUtils::AddPass<FUpdateThrottleParametersCS>
              (param_1,pFVar52,Compute,&local_398,pFVar47,pFVar4,(TIntVector3<int> *)&local_9e8._s_0
              );
    if (local_2d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_2d8.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  uStack_c10._0_4_ = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  pTStack_c08 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_c18._4_4_ = this->NumShadowMapSlots * 2 + 2;
  local_c18._0_4_ = 4;
  local_480.Metadata = (FShaderParametersMetadata *)0x0;
  local_480.BytesPerElement = 4;
  local_480.NumElements = local_c18._4_4_;
  local_480.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_480._12_4_ = uStack_c10._4_4_;
  local_a78.Buffer = FRDGBuilder::CreateBuffer(param_1,&local_480,L"NanitePerformanceFeedback",None)
  ;
  this->NanitePerformanceFeedbackRDG = local_a78.Buffer;
  bVar61 = 0;
  local_a78._padding_._2_1_ = 0;
  if ((((local_a78.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar61 = 0x1c;
  }
  local_a78._padding_._0_2_ = (ushort)bVar61;
  pFVar45 = FRDGBuilder::CreateUAV(param_1,&local_a78,None);
  AddClearUAVPass(param_1,pFVar45,0,Compute);
  pFVar38 = `FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_2>::operator()
                      (&local_a68,false,PF_R32_UINT,L"Shadow.Virtual.PageTable",1);
  this->PageTableRDG = pFVar38;
  pFVar38 = `FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_2>::operator()
                      (&local_a68,true,PF_R32_UINT,L"Shadow.Virtual.PageFlags",1);
  this->PageFlagsRDG = pFVar38;
  `FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_3>::operator()
            (&local_a58,this->PageTableRDG,0,1,false);
  `FVirtualShadowMapArray::BeginMarkPages'::__l2::<lambda_3>::operator()
            (&local_a58,this->PageFlagsRDG,0,1,false);
  local_c28 = 0;
  if (0 < local_be8.ArrayNum) {
    local_c40 = 0;
    do {
      local_a28 = '\0';
      if (((1 < local_be8.ArrayNum) &&
          (cVar9 = *(char *)((longlong)&param_1->_padding_ + 6), cVar9 != '\0')) &&
         ((cVar9 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          local_338 = 0;
          uStack_334 = 0;
          ::Desc._12_8_ = ZEXT48(uStack_33c);
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_._0_4_ = 0x9ee;
          ::Desc._padding_ = (longlong)u_View_d;
          ::Desc._padding_ = (longlong)u_View_d;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FVirtualShadowMapArray::BeginMarkPages'::__l149::<lambda_5>::operator()<int_&>'
                 ::__l3::<lambda_1>::operator()<int_&>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_6b8._padding_ = (longlong)&local_c28;
        local_6b8._Myfirst._Val = &::Desc;
        local_a38.State = (FRDGScopeState *)param_1;
        pFVar36 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)pFVar36;
        uVar74 = (ulonglong)(pFVar36->Impl).Impl.TypeIndex;
        local_a38.Scope = pFVar36;
        if ((3 < uVar74) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar29)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar74])(&pFVar36->Impl);
        pFVar53 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
        pFVar54 = FRHIBreadcrumbAllocator::
                  AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
                            (pFVar53,&local_6b8);
        FRDGScope_RHI::FRDGScope_RHI
                  ((FRDGScope_RHI *)&pFVar36->Impl,(FRDGScopeState *)param_1,pFVar54);
        (pFVar36->Impl).Impl.TypeIndex = '\x02';
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(pFVar36,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(pFVar36,(FRHIComputeCommandList *)param_1->_padding_);
        }
        local_a28 = '\x01';
      }
      lVar68 = (longlong)(int)local_c28;
      uVar69 = 0;
      if ((int)local_c28 < local_be8.ArrayNum) {
        uVar69 = ~local_c28 >> 0x1f;
      }
      if ((uVar69 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      lVar41 = (longlong)(int)local_c28;
      pFVar37 = local_be8.DataPtr + lVar68;
      uVar69 = 0;
      if ((int)local_c28 < (int)local_948->_padding_) {
        uVar69 = ~local_c28 >> 0x1f;
      }
      if ((uVar69 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar75 = (this->PerViewParameters).AllocatorInstance.Data + lVar41 * 0x30;
      FShadowSceneRenderer::GatherClipmapIds(local_b00,&local_a48,local_c28);
      if (((pFVar37->ForwardLightingResources).ForwardLightUniformParameters)->NumLocalLights +
          local_a48.ArrayNum == 0) {
        pFVar55 = MakeEmptyVirtualShadowMapPerViewParameters(&local_248,param_1);
        pFVar43 = pFVar55->NumCulledLightsGrid;
        *(FRDGBufferSRV **)pFVar75 = pFVar55->LightGridData;
        *(FRDGBufferSRV **)(pFVar75 + 8) = pFVar43;
        pFVar43 = pFVar55->DirectionalLightIds;
        *(undefined8 *)(pFVar75 + 0x10) = *(undefined8 *)&pFVar55->MaxLightGridEntryIndex;
        *(FRDGBufferSRV **)(pFVar75 + 0x18) = pFVar43;
        uVar12 = *(undefined8 *)&pFVar55->field_0x28;
        *(undefined8 *)(pFVar75 + 0x20) = *(undefined8 *)&pFVar55->DirectionalLightIdCount;
        *(undefined8 *)(pFVar75 + 0x28) = uVar12;
        if (local_a48.AllocatorInstance.Data != (int *)0x0) {
          TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                    (local_a48.AllocatorInstance.Data);
        }
        if (local_a28 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_a38);
        }
      }
      else {
        if (local_a48.ArrayNum != 0U) {
          uVar56 = (ulong64)(uint)(local_a48.ArrayNum * 4);
          FVar66.Data = local_a48.AllocatorInstance.Data;
          uVar69 = local_a48.ArrayNum;
        }
        else {
          uVar56 = 4;
          FVar66.Data = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const&___ptr64,ERDGInitialDataFlags)'
                         ::__l2::DummyElement;
          uVar69 = 1;
        }
        local_938._padding_._0_4_ = (uint)local_938._padding_ & 0xffffff00;
        local_938._padding_._4_4_ = 0;
        local_938._padding_._0_4_ = 0xffffffff;
        local_938._padding_ = 0;
        local_938.Buffer =
             CreateStructuredBuffer
                       (param_1,L"Shadow.Virtual.DirectionalLightIds",4,uVar69,FVar66.Data,uVar56,
                        local_a48.ArrayNum == 0U);
        uVar30 = 0;
        if ((((local_938.Buffer)->Desc).Usage & DrawIndirect) != None) {
          uVar30 = 0x1c;
        }
        local_938._padding_._0_4_ = CONCAT31(local_938._padding_._1_3_,uVar30);
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_938);
        pFVar40 = local_938.Buffer;
        pFVar43 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
        lVar68 = pFVar40->_padding_;
        piVar5 = &(param_1->Views).Array.ArrayMax;
        *(byte *)&pFVar43->_padding_ = (byte)pFVar43->_padding_ & 0xfe;
        *(undefined8 *)((longlong)&pFVar43->_padding_ + 4) = 0xffffffffffffffff;
        pFVar43->_padding_ = lVar68;
        pFVar43->_padding_ = 0;
        *(undefined1 *)&pFVar43->_padding_ = 3;
        pFVar43->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
        (pFVar43->Desc)._padding_ = CONCAT44(local_938._padding_._4_4_,(uint)local_938._padding_);
        (pFVar43->Desc)._padding_ =
             CONCAT44(local_938._padding_._4_4_,(undefined4)local_938._padding_);
        (pFVar43->Desc)._padding_ = local_938._padding_;
        (pFVar43->Desc).Buffer = local_938.Buffer;
        iVar32 = (param_1->Views).Array.ArrayNum;
        if (iVar32 == *piVar5) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                             (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar5);
        }
        (param_1->Views).Array.ArrayNum = iVar32 + 1;
        (param_1->Views).Array.AllocatorInstance.Data[iVar32] = (FRDGView *)pFVar43;
        *(int *)((longlong)&pFVar43->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar43);
        *(FRDGBufferSRV **)(pFVar75 + 0x18) = pFVar43;
        *(int *)(pFVar75 + 0x20) = local_a48.ArrayNum;
        EVar31 = FSceneView::GetShaderPlatform((FSceneView *)pFVar37);
        bVar29 = LightGridUses16BitBuffers(EVar31);
        uStack_b70 = 0x10109;
        local_b68 = 0;
        local_9a8 = (FShaderParametersMetadata *)0x0;
        local_b78 = (TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *)
                    CONCAT44(((((*(FRDGBufferSRV **)
                                  ((longlong)
                                   (&((pFVar37->ForwardLightingResources).
                                     ForwardLightUniformParameters)->
                                     DirectionalLightTranslatedWorldToStaticShadow + 2) +
                                  ((ulonglong)bVar29 + 2) * 8))->Desc).Buffer)->Desc).NumElements,4)
        ;
        uStack_b6c = local_698.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
        uStack_9b0._4_4_ = local_698.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
        uStack_9b0._0_4_ = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
        local_9b8 = local_b78;
        FRDGUserValidation::ValidateCreateBuffer
                  (&param_1->UserValidation,(FRDGBufferDesc *)&local_9b8,
                   L"Shadow.Virtual.LightGridData",None);
        uVar69 = (uint)local_9b8;
        if ((uint)local_9b8 == 0) {
          uVar69 = 1;
        }
        if (local_9b8._4_4_ == 0) {
          local_9b8._4_4_ = 1;
        }
        local_9b8._0_4_ = uVar69;
        pFVar40 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,8);
        local_bc8 = (FRDGBuilder *)
                    FRDGBuffer::FRDGBuffer
                              (pFVar40,L"Shadow.Virtual.LightGridData",(FRDGBufferDesc *)&local_9b8,
                               None);
        TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2>::Insert
                  (&param_1->Buffers,(FRDGBuffer *)local_bc8);
        FRDGUserValidation::ValidateCreateBuffer(&param_1->UserValidation,(FRDGBuffer *)local_bc8);
        FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)local_bc8);
        pFVar14 = (pFVar37->ForwardLightingResources).ForwardLightUniformParameters;
        local_c40 = pFVar14->NumGridCells;
        if (*(bool *)((longlong)&pFVar37->_padding_ + 7) != false) {
          local_c40 = local_c40 + pFVar14->CulledBufferOffsetISR;
        }
        local_c18._4_4_ = local_c40;
        local_c18._0_4_ = 4;
        uStack_c10._4_4_ = (float)local_698.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
        uStack_c10._0_4_ = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
        pTStack_c08 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
        local_988.BytesPerElement = 4;
        local_988.NumElements = local_c40;
        local_988.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
        local_988._12_4_ = local_698.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
        local_988.Metadata = (FShaderParametersMetadata *)0x0;
        FRDGUserValidation::ValidateCreateBuffer
                  (&param_1->UserValidation,&local_988,L"Shadow.Virtual.NumCulledLightsGrid",None);
        uVar69 = local_988.BytesPerElement;
        if (local_988.BytesPerElement == 0) {
          uVar69 = 1;
        }
        if (local_988.NumElements == 0) {
          local_988.NumElements = 1;
        }
        local_988.BytesPerElement = uVar69;
        pFVar40 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,8);
        local_c30 = (FName)FRDGBuffer::FRDGBuffer
                                     (pFVar40,L"Shadow.Virtual.NumCulledLightsGrid",&local_988,None)
        ;
        TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2>::Insert
                  (&param_1->Buffers,(FRDGBuffer *)local_c30);
        FRDGUserValidation::ValidateCreateBuffer(&param_1->UserValidation,(FRDGBuffer *)local_c30);
        FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)local_c30);
        uVar69 = 0;
        if (param_6) {
          uVar69 = ((pFVar37->ForwardLightingResources).ForwardLightUniformParameters)->
                   NumLocalLights;
        }
        local_bc0 = uVar69;
        puVar57 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x60,0x10);
        if (puVar57 == (undefined8 *)0x0) {
          puVar57 = (undefined8 *)0x0;
          bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar29) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
        }
        else {
          *(undefined1 *)(puVar57 + 3) = 1;
          *puVar57 = &___7__TObject_VFParameters_FPruneLightGridCS___FRDGAllocator__6B_;
          puVar57[2] = 0;
          puVar57[4] = 0;
          puVar57[6] = 0;
          puVar57[10] = 0;
          puVar57[0xb] = 0;
          *(undefined1 *)(puVar57 + 5) = 1;
          *(undefined1 *)(puVar57 + 7) = 1;
        }
        local_b90 = puVar57;
        if ((((undefined8 **)*local_bd0 <= &local_b90) &&
            (&local_b90 < (undefined8 **)*local_bd0 + *(int *)((longlong)local_bd0 + 0xc))) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar29)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar32 = (int)local_bd0[1];
        if (iVar32 == *(int *)((longlong)local_bd0 + 0xc)) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)local_bd0,
                              (int *)((longlong)local_bd0 + 0xc));
        }
        *(int *)(local_bd0 + 1) = iVar32 + 1;
        *(undefined8 **)(*local_bd0 + (longlong)iVar32 * 8) = local_b90;
        local_bd8 = (FSceneRenderer *)(puVar57 + 2);
        pTVar58 = (TRDGUniformBuffer<FForwardLightUniformParameters> *)
                  GetUncachedUniformBuffer(this,param_1);
        pFVar47 = FVirtualShadowMapUniformParameters::GetStructMetadata();
        pFVar23 = local_bd8;
        EStack_a10 = Static;
        if (pFVar47->BindingFlags != StaticAndShader) {
          EStack_a10 = pFVar47->BindingFlags;
        }
        *(TRDGUniformBuffer<FForwardLightUniformParameters> **)local_bd8 = pTVar58;
        *(ulonglong *)&local_bd8->field_0x8 = CONCAT71(uStack_a0f,EStack_a10);
        local_a18 = pTVar58;
        pFVar47 = FViewUniformShaderParameters::GetStructMetadata();
        local_a08 = *(TUniformBufferRef<FViewUniformShaderParameters> *)&pFVar37->_padding_;
        EStack_a00 = Static;
        if (pFVar47->BindingFlags != StaticAndShader) {
          EStack_a00 = pFVar47->BindingFlags;
        }
        *(TUniformBufferRef<FViewUniformShaderParameters> *)&pFVar23->field_0x10 = local_a08;
        *(ulonglong *)&pFVar23->field_0x18 = CONCAT71(uStack_9ff,EStack_a00);
        pTVar58 = (pFVar37->ForwardLightingResources).ForwardLightUniformBuffer;
        pFVar47 = FForwardLightUniformParameters::GetStructMetadata();
        pFVar23 = local_bd8;
        EVar64 = pFVar47->BindingFlags;
        *(undefined4 *)&local_bd8->field_0x30 = 0;
        EStack_9f0 = Static;
        if (EVar64 != StaticAndShader) {
          EStack_9f0 = EVar64;
        }
        *(uint *)&local_bd8->field_0x34 = uVar69;
        *(TRDGUniformBuffer<FForwardLightUniformParameters> **)&local_bd8->field_0x20 = pTVar58;
        *(ulonglong *)&local_bd8->field_0x28 = CONCAT71(uStack_9ef,EStack_9f0);
        local_9f8 = pTVar58;
        bVar29 = MegaLights::IsMarkingVSMPages();
        local_b40._padding_._2_1_ = 0;
        *(uint *)&pFVar23->field_0x38 = bVar29 ^ 1;
        local_b40.Buffer = (FRDGBuffer *)local_bc8;
        local_b40._padding_._1_1_ = 0;
        local_b40._padding_._0_1_ = 0;
        if ((*(EBufferUsageFlags *)&local_bc8->_padding_ & DrawIndirect) != None) {
          local_b40._padding_._0_1_ = 0x1c;
        }
        FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_b40);
        pFVar40 = local_b40.Buffer;
        pFVar45 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
        lVar68 = pFVar40->_padding_;
        *(byte *)&pFVar45->_padding_ = (byte)pFVar45->_padding_ & 0xfe;
        pFVar45->_padding_ = lVar68;
        *(undefined8 *)((longlong)&pFVar45->_padding_ + 4) = 0xffffffffffffffff;
        pFVar45->_padding_ = 0;
        *(undefined1 *)&pFVar45->_padding_ = 2;
        *(undefined1 *)&pFVar45->_padding_ = 0;
        pFVar45->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
        (pFVar45->Desc)._padding_ =
             CONCAT53(local_b40._padding_._3_5_,
                      CONCAT12(local_b40._padding_._2_1_,
                               CONCAT11(local_b40._padding_._1_1_,(undefined1)local_b40._padding_)))
        ;
        (pFVar45->Desc).Buffer = local_b40.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                  (&param_1->Views,(FRDGView *)pFVar45);
        FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar45);
        local_b58._padding_._1_1_ = 0;
        local_b58._padding_._2_1_ = 0;
        *(FRDGBufferUAV **)&local_bd8->field_0x40 = pFVar45;
        local_b58.Buffer = (FRDGBuffer *)local_c30;
        local_b58._padding_._0_1_ = 0;
        if ((*(byte *)((longlong)local_c30 + 0x88) & 0x80) != 0) {
          local_b58._padding_._0_1_ = 0x1c;
        }
        FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_b58);
        pFVar40 = local_b58.Buffer;
        pFVar45 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
        lVar68 = *(longlong *)((longlong)pFVar40 + 8);
        *(byte *)&pFVar45->_padding_ = (byte)pFVar45->_padding_ & 0xfe;
        pFVar45->_padding_ = lVar68;
        *(undefined8 *)((longlong)&pFVar45->_padding_ + 4) = 0xffffffffffffffff;
        pFVar45->_padding_ = 0;
        *(undefined1 *)&pFVar45->_padding_ = 2;
        *(undefined1 *)&pFVar45->_padding_ = 0;
        pFVar45->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
        (pFVar45->Desc)._padding_ =
             CONCAT53(local_b58._padding_._3_5_,
                      CONCAT12(local_b58._padding_._2_1_,
                               CONCAT11(local_b58._padding_._1_1_,(undefined1)local_b58._padding_)))
        ;
        (pFVar45->Desc).Buffer = local_b58.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                  (&param_1->Views,(FRDGView *)pFVar45);
        FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar45);
        *(FRDGBufferUAV **)&local_bd8->field_0x48 = pFVar45;
        pFVar48 = pFVar37->ShaderMap;
        pFVar49 = FPruneLightGridCS::GetStaticType();
        if (*(int *)&pFVar49->field_0x50 != 1) {
          local_c39 = 0;
          `FGlobalShaderMap::GetShader<FPruneLightGridCS>'::__l2::<lambda_1>::operator()(&local_c39)
          ;
        }
        pFVar50 = (FShaderType *)FPruneLightGridCS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar48,&local_6f8,pFVar50,0);
        if (local_6f8.ShaderContent == (FShader *)0x0) {
          FVar51 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_510);
          ::FName::ToString((FName *)FVar51,&local_388);
          FPruneLightGridCS::GetStaticType();
          bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data.AllocatorInstance.Data);
          }
          if (bVar29) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
        }
        FPruneLightGridCS::GetStaticType();
        local_378.ShaderContent = (FPruneLightGridCS *)local_6f8.ShaderContent;
        local_378.ShaderMap = local_6f8.ShaderMap;
        pFVar52 = FRDGEventName::FRDGEventName(local_2c0,L"PruneLightGrid(Min=%d,Max=%d)");
        pFVar47 = FPruneLightGridCS::FParameters::FTypeInfo::GetStructMetadata();
        local_9d8._s_0.X = (int)(local_c40 + 0xff + ((int)(local_c40 + 0xff) >> 0x1f & 0xffU)) >> 8;
        local_9d8._s_0.Y = 1;
        local_9d8._s_0.Z = 1;
        FComputeShaderUtils::AddPass<FPruneLightGridCS>
                  (param_1,pFVar52,Compute,&local_378,pFVar47,(FParameters *)local_bd8,
                   (TIntVector3<int> *)&local_9d8._s_0);
        if (local_2c0[0].FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0[0].FormattedEventName.Data.AllocatorInstance.Data);
        }
        local_8f8._padding_._0_4_ = 0xffffffff;
        local_8f8._padding_._4_4_ = 0;
        local_8f8._padding_ = 0;
        local_8f8.Buffer = (FRDGBuffer *)local_bc8;
        uVar30 = 0;
        if ((*(EBufferUsageFlags *)&local_bc8->_padding_ & DrawIndirect) != None) {
          uVar30 = 0x1c;
        }
        local_8f8._padding_._0_4_ =
             CONCAT31((int3)((uint)(undefined4)local_8f8._padding_ >> 8),uVar30);
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_8f8);
        pFVar40 = local_8f8.Buffer;
        pFVar43 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
        lVar68 = pFVar40->_padding_;
        *(byte *)&pFVar43->_padding_ = (byte)pFVar43->_padding_ & 0xfe;
        *(undefined8 *)((longlong)&pFVar43->_padding_ + 4) = 0xffffffffffffffff;
        pFVar43->_padding_ = lVar68;
        pFVar43->_padding_ = 0;
        *(undefined1 *)&pFVar43->_padding_ = 3;
        pFVar43->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
        (pFVar43->Desc)._padding_ =
             CONCAT44(local_8f8._padding_._4_4_,(undefined4)local_8f8._padding_);
        (pFVar43->Desc)._padding_ =
             CONCAT44(local_8f8._padding_._4_4_,(undefined4)local_8f8._padding_);
        (pFVar43->Desc)._padding_ = local_8f8._padding_;
        (pFVar43->Desc).Buffer = local_8f8.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                  (&param_1->Views,(FRDGView *)pFVar43);
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar43);
        local_918.Buffer = (FRDGBuffer *)local_c30;
        *(FRDGBufferSRV **)pFVar75 = pFVar43;
        local_918._padding_._4_4_ = 0;
        local_918._padding_._0_4_ = 0xffffffff;
        local_918._padding_ = 0;
        uVar30 = 0;
        if ((*(byte *)((longlong)local_c30 + 0x88) & 0x80) != 0) {
          uVar30 = 0x1c;
        }
        local_918._padding_._0_4_ =
             CONCAT31((int3)((uint)(undefined4)local_918._padding_ >> 8),uVar30);
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_918);
        pFVar40 = local_918.Buffer;
        pFVar43 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
        lVar68 = *(longlong *)((longlong)pFVar40 + 8);
        *(byte *)&pFVar43->_padding_ = (byte)pFVar43->_padding_ & 0xfe;
        *(undefined8 *)((longlong)&pFVar43->_padding_ + 4) = 0xffffffffffffffff;
        pFVar43->_padding_ = lVar68;
        pFVar43->_padding_ = 0;
        *(undefined1 *)&pFVar43->_padding_ = 3;
        pFVar43->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
        (pFVar43->Desc)._padding_ =
             CONCAT44(local_918._padding_._4_4_,(undefined4)local_918._padding_);
        (pFVar43->Desc)._padding_ =
             CONCAT44(local_918._padding_._4_4_,(undefined4)local_918._padding_);
        (pFVar43->Desc)._padding_ = local_918._padding_;
        (pFVar43->Desc).Buffer = local_918.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                  (&param_1->Views,(FRDGView *)pFVar43);
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar43);
        *(FRDGBufferSRV **)(pFVar75 + 8) = pFVar43;
        *(uint *)(pFVar75 + 0x10) = local_c40 - 1;
        if (local_a48.AllocatorInstance.Data != (int *)0x0) {
          TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                    (local_a48.AllocatorInstance.Data);
        }
        if (local_a28 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_a38);
        }
      }
      local_c28 = local_c28 + 1;
    } while ((int)local_c28 < local_be8.ArrayNum);
    local_c40 = 0;
  }
  puVar57 = (undefined8 *)0x0;
  UpdateCachedUniformBuffers(this,param_1);
  puVar35 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
  if (puVar35 == (undefined8 *)0x0) {
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar29) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  else {
    puVar35[2] = 0;
    *puVar35 = &___7__TObject_VFParameters_FMarkCoarsePagesCS___FRDGAllocator__6B_;
    *(undefined1 *)(puVar35 + 3) = 1;
    puVar35[4] = 0;
    puVar35[5] = 0;
    puVar57 = puVar35;
  }
  plVar1 = local_bd0;
  local_b88 = puVar57;
  if ((((undefined8 **)*local_bd0 <= &local_b88) &&
      (&local_b88 < (undefined8 **)*local_bd0 + *(int *)((longlong)local_bd0 + 0xc))) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar29)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar32 = (int)plVar1[1];
  if (iVar32 == *(int *)((longlong)plVar1 + 0xc)) {
    iVar32 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar1,(int *)((longlong)plVar1 + 0xc));
  }
  *(int *)(plVar1 + 1) = iVar32 + 1;
  *(undefined8 **)(*plVar1 + (longlong)iVar32 * 8) = local_b88;
  pFVar59 = GetMarkingParameters(this,&local_268,param_1,0);
  uVar12 = *(undefined8 *)&(pFVar59->VirtualShadowMap).field_0x8;
  *(undefined8 *)&(((FParameters *)(puVar57 + 2))->MarkingParameters).VirtualShadowMap =
       *(undefined8 *)&pFVar59->VirtualShadowMap;
  puVar57[3] = uVar12;
  pFVar39 = pFVar59->OutPageReceiverMasks;
  puVar57[4] = pFVar59->OutPageRequestFlags;
  puVar57[5] = pFVar39;
  pTVar17 = CVarMarkCoarsePagesLocal.Ref;
  bVar29 = IsInParallelRenderingThread();
  if ((!bVar29) &&
     (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  *(uint *)(puVar57 + 6) = (uint)(pTVar17->ShadowedValue[1] != 0);
  pTVar17 = CVarCoarsePagesIncludeNonNanite.Ref;
  bVar29 = IsInParallelRenderingThread();
  if ((!bVar29) &&
     (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  *(int *)((longlong)puVar57 + 0x34) = pTVar17->ShadowedValue[1];
  pFVar48 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                               [*(int *)&this->Scene->field_0x8]);
  pFVar49 = FMarkCoarsePagesCS::GetStaticType();
  if (*(int *)&pFVar49->field_0x50 != 1) {
    local_c38[0] = 0;
    `FGlobalShaderMap::GetShader<FMarkCoarsePagesCS>'::__l2::<lambda_1>::operator()(local_c38);
  }
  pFVar50 = (FShaderType *)FMarkCoarsePagesCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar48,&local_6a8,pFVar50,0);
  if (local_6a8.ShaderContent == (FShader *)0x0) {
    FVar51 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_828);
    ::FName::ToString((FName *)FVar51,&local_568);
    FMarkCoarsePagesCS::GetStaticType();
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
    if (bVar29) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  FMarkCoarsePagesCS::GetStaticType();
  iVar32 = this->NumSinglePageShadowMaps;
  iVar34 = this->NumShadowMapSlots + -0x2000;
  local_558.ShaderContent = (FMarkCoarsePagesCS *)local_6a8.ShaderContent;
  local_558.ShaderMap = local_6a8.ShaderMap;
  iVar62 = 0;
  if (0 < iVar34) {
    iVar62 = iVar34;
  }
  pFVar52 = FRDGEventName::FRDGEventName(&local_698,1,L"MarkCoarsePages");
  pFVar47 = FMarkCoarsePagesCS::FParameters::FTypeInfo::GetStructMetadata();
  local_9c8._s_0.Y = 1;
  local_9c8._s_0.Z = 1;
  local_9c8._s_0.X = (uint)(iVar32 + 0xff + iVar62) >> 8;
  FComputeShaderUtils::AddPass<FMarkCoarsePagesCS>
            (param_1,pFVar52,Compute,&local_558,pFVar47,(FParameters *)(puVar57 + 2),
             (TIntVector3<int> *)&local_9c8._s_0);
  if ((void *)CONCAT44(local_698.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                       local_698.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_698.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                                   local_698.FormattedEventName.Data.AllocatorInstance.Data._0_4_));
  }
  pTVar17 = CVarMarkPixelPages.Ref;
  bVar29 = IsInParallelRenderingThread();
  if ((!bVar29) &&
     (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((pTVar17->ShadowedValue[1] != 0) && (local_c44 = 0, 0 < local_be8.ArrayNum)) {
    do {
      pFVar67 = (FViewData *)0x0;
      local_8c8 = '\0';
      if (((1 < local_be8.ArrayNum) &&
          (cVar9 = *(char *)((longlong)&param_1->_padding_ + 6), cVar9 != '\0')) &&
         ((cVar9 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          local_318 = 0;
          uStack_314 = 0;
          ::Desc._12_8_ = ZEXT48(uStack_31c);
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_View_d;
          ::Desc._padding_ = (longlong)u_View_d;
          ::Desc._padding_._0_4_ = 0xa55;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FVirtualShadowMapArray::BeginMarkPages'::__l171::<lambda_6>::operator()<int_&>'
                 ::__l3::<lambda_1>::operator()<int_&>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_6e8._padding_ = (longlong)&local_c44;
        local_6e8._Myfirst._Val = &::Desc;
        local_8d8.State = (FRDGScopeState *)param_1;
        pFVar36 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)pFVar36;
        uVar74 = (ulonglong)(pFVar36->Impl).Impl.TypeIndex;
        local_8d8.Scope = pFVar36;
        if ((3 < uVar74) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar29)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar74])(&pFVar36->Impl);
        pFVar53 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
        pFVar54 = FRHIBreadcrumbAllocator::
                  AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
                            (pFVar53,&local_6e8);
        FRDGScope_RHI::FRDGScope_RHI
                  ((FRDGScope_RHI *)&pFVar36->Impl,(FRDGScopeState *)param_1,pFVar54);
        (pFVar36->Impl).Impl.TypeIndex = '\x02';
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(pFVar36,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(pFVar36,(FRHIComputeCommandList *)param_1->_padding_);
        }
        local_8c8 = '\x01';
      }
      lVar68 = (longlong)(int)local_c44;
      uVar69 = 0;
      if ((int)local_c44 < local_be8.ArrayNum) {
        uVar69 = ~local_c44 >> 0x1f;
      }
      if ((uVar69 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      local_638 = 0;
      uStack_630 = CONCAT71(uStack_630._1_7_,1);
      local_628 = (FRDGTextureUAV *)0x0;
      pFStack_620 = (FRDGTextureUAV *)0x0;
      local_618 = (TRDGUniformBuffer<FForwardLightUniformParameters> *)0x0;
      pFVar37 = local_be8.DataPtr + lVar68;
      uStack_610 = CONCAT71(uStack_610._1_7_,1);
      local_608 = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
      uStack_600 = CONCAT71(uStack_600._1_7_,1);
      local_5f8 = (TRDGUniformBuffer<FForwardLightUniformParameters> *)0x0;
      uStack_5f0 = CONCAT71(uStack_5f0._1_7_,1);
      local_5e8 = 0;
      local_5d8 = (TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *)0x0;
      uStack_5d0 = CONCAT71(uStack_5d0._1_7_,1);
      local_5a8.DynamicRadiusOffsetLUT = (FRDGTexture *)0x0;
      local_5a8.DynamicRadiusOffsetLUTSampler = (FRHISamplerState *)0x0;
      pFVar59 = GetMarkingParameters(this,&local_288,param_1,local_c44);
      pFVar26 = local_858;
      local_638 = *(undefined8 *)&pFVar59->VirtualShadowMap;
      uStack_630 = *(undefined8 *)&(pFVar59->VirtualShadowMap).field_0x8;
      pTVar58 = (TRDGUniformBuffer<FForwardLightUniformParameters> *)local_858->_padding_;
      local_628 = pFVar59->OutPageRequestFlags;
      pFStack_620 = pFVar59->OutPageReceiverMasks;
      pFVar47 = FSceneTextureUniformParameters::GetStructMetadata();
      EStack_9f0 = Static;
      if (pFVar47->BindingFlags != StaticAndShader) {
        EStack_9f0 = pFVar47->BindingFlags;
      }
      uStack_610 = CONCAT71(uStack_9ef,EStack_9f0);
      local_9f8 = pTVar58;
      local_618 = pTVar58;
      pFVar47 = FViewUniformShaderParameters::GetStructMetadata();
      local_a08 = (TUniformBufferRef<FViewUniformShaderParameters>)pFVar37->_padding_;
      EStack_a00 = Static;
      if (pFVar47->BindingFlags != StaticAndShader) {
        EStack_a00 = pFVar47->BindingFlags;
      }
      uStack_600 = CONCAT71(uStack_9ff,EStack_a00);
      pTVar58 = (pFVar37->ForwardLightingResources).ForwardLightUniformBuffer;
      local_608 = local_a08;
      pFVar47 = FForwardLightUniformParameters::GetStructMetadata();
      pTVar19 = CVarPageDilationBorderSizeLocal.Ref;
      EStack_a10 = Static;
      if (pFVar47->BindingFlags != StaticAndShader) {
        EStack_a10 = pFVar47->BindingFlags;
      }
      uStack_5f0 = CONCAT71(uStack_a0f,EStack_a10);
      local_a18 = pTVar58;
      local_5f8 = pTVar58;
      bVar29 = IsInParallelRenderingThread();
      if ((!bVar29) &&
         (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pTVar18 = CVarPageDilationBorderSizeDirectional.Ref;
      local_5c4 = pTVar19->ShadowedValue[1];
      bVar29 = IsInParallelRenderingThread();
      if ((!bVar29) &&
         (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      local_5c8 = pTVar18->ShadowedValue[1];
      local_5c0 = (uint)(this->bCullBackfacingPixels != false);
      pTVar60 = Substrate::BindSubstrateGlobalUniformParameters(pFVar37);
      pFVar47 = FSubstrateGlobalUniformParameters::GetStructMetadata();
      pTVar17 = CVarMarkPixelPagesMipModeLocal.Ref;
      EStack_940 = Static;
      if (pFVar47->BindingFlags != StaticAndShader) {
        EStack_940 = pFVar47->BindingFlags;
      }
      uStack_5d0 = CONCAT71(uStack_93f,EStack_940);
      local_948 = pTVar60;
      local_5d8 = pTVar60;
      bVar29 = IsInParallelRenderingThread();
      if ((!bVar29) &&
         (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pTVar19 = CVarFirstPersonPixelRequestBias.Ref;
      local_5bc = pTVar17->ShadowedValue[1];
      bVar29 = IsInParallelRenderingThread();
      if ((!bVar29) &&
         (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pTVar17 = CVarFirstPersonPixelRequestLevelClamp.Ref;
      local_5b8 = pTVar19->ShadowedValue[1];
      bVar29 = IsInParallelRenderingThread();
      if ((!bVar29) &&
         (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      local_5b4 = pTVar17->ShadowedValue[1];
      local_118.MatteBoxFlags.Elements[1].Pitch = 0.0;
      local_118.MatteBoxFlags.Elements[1].Roll = 0.0;
      local_118.MatteBoxFlags.Elements[1].Length = 0.0;
      local_118.MatteBoxFlags.Elements[2].Pitch = 0.0;
      local_118.MatteBoxFlags.Elements[0].Pitch = 0.0;
      local_118.MatteBoxFlags.Elements[0].Roll = 0.0;
      local_118.MatteBoxFlags.Elements[0].Length = 0.0;
      local_118.MatteBoxFlags.Elements[2].Roll = 0.0;
      local_118.MatteBoxFlags.Elements[2].Length = 0.0;
      DiaphragmDOF::FPhysicalCocModel::Compile(&local_118,pFVar37);
      DiaphragmDOF::SetCocModelParameters
                (param_1,&local_5a8,&local_118,
                 (float)(*(int *)((longlong)&(pFVar37->ViewRect).field0_0x0 + 8) -
                        *(int *)&(pFVar37->ViewRect).field0_0x0));
      bVar29 = DiaphragmDOF::IsEnabled(pFVar37);
      pTVar19 = CVarMaxDOFResolutionBias.Ref;
      if (bVar29) {
        bVar29 = IsInParallelRenderingThread();
        if ((!bVar29) &&
           (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007955>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        local_5b0 = pTVar19->ShadowedValue[1];
      }
      else {
        local_5b0 = 0.0;
      }
      pFVar27 = local_820;
      pTVar17 = CVarMarkPagesUseFroxels.Ref;
      local_670 = &local_638;
      local_658 = pFVar26;
      if (local_5b0 <= 0.0) {
        local_5b0 = 0.0;
      }
      local_650 = &local_b80;
      local_648 = &local_c44;
      local_668 = param_4;
      local_678 = param_1;
      local_660 = pFVar37;
      local_640 = this;
      if ((local_820->Views).ArrayNum == 0) {
LAB_1457daa29:
        `FVirtualShadowMapArray::BeginMarkPages'::__l166::<lambda_7>::operator()(&local_678,GBuffer)
        ;
      }
      else {
        bVar29 = IsInParallelRenderingThread();
        if ((!bVar29) &&
           (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007955>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        if (pTVar17->ShadowedValue[1] == 0) goto LAB_1457daa29;
        lVar68 = (longlong)(int)local_c44;
        local_6d0 = &local_638;
        local_6d8 = param_1;
        local_6c8 = pFVar37;
        local_6c0 = this;
        if ((-1 < (int)local_c44) && ((int)local_c44 < (pFVar27->Views).ArrayNum)) {
          if (((int)local_c44 < 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar67 = (FViewData *)((pFVar27->Views).AllocatorInstance.Data + lVar68 * 0x90);
        }
        `FVirtualShadowMapArray::BeginMarkPages'::__l174::<lambda_8>::operator()
                  (&local_6d8,pFVar67,0,true);
        pFVar24 = local_b80;
        if (((local_b80 != (FSingleLayerWaterPrePassResult *)0x0) &&
            (lVar68 = (longlong)(int)local_c44, -1 < (int)local_c44)) &&
           ((int)local_c44 < (local_b80->Froxels).Views.ArrayNum)) {
          if (((int)local_c44 < 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar25 = local_b80;
          if ((pFVar24->Froxels).Views.AllocatorInstance.Data + lVar68 * 0x90 !=
              (FScriptContainerElement *)0x0) {
            lVar68 = (longlong)(int)local_c44;
            if (((int)local_c44 < 0) || ((local_b80->Froxels).Views.ArrayNum <= (int)local_c44)) {
              pFVar67 = (FViewData *)0x0;
            }
            else {
              if (((int)local_c44 < 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pFVar67 = (FViewData *)
                        ((pFVar25->Froxels).Views.AllocatorInstance.Data + lVar68 * 0x90);
            }
            `FVirtualShadowMapArray::BeginMarkPages'::__l174::<lambda_8>::operator()
                      (&local_6d8,pFVar67,1,false);
          }
        }
      }
      bVar29 = HairStrands::HasViewHairStrandsData(pFVar37);
      if (bVar29) {
        `FVirtualShadowMapArray::BeginMarkPages'::__l166::<lambda_7>::operator()
                  (&local_678,HairStrands);
      }
      if (local_8c8 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_8d8);
      }
      local_c44 = local_c44 + 1;
    } while ((int)local_c44 < local_be8.ArrayNum);
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_808 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_818);
  }
  return;
}

// BuildPageAllocations @ 1457dacf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::BuildPageAllocations
          (FVirtualShadowMapArray *this,FRDGBuilder *param_1,FMinimalSceneTextures *param_2,
          TArrayView<FViewInfo_const_,int> *param_3)

{
  FRHIGPUMask *pFVar1;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *this_00;
  char cVar2;
  FRHIGPUMask FVar3;
  FVirtualShadowMapArrayCacheManager *pFVar4;
  FVirtualShadowMapSetupContext *pFVar5;
  longlong lVar6;
  FRHIComputeCommandList *this_01;
  code *pcVar7;
  undefined8 uVar8;
  TConsoleVariableData<int> *pTVar9;
  FParameters *pFVar10;
  TArrayView<FViewInfo_const_,int> *pTVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  FRDGScope *pFVar17;
  FViewInfo *pFVar18;
  undefined8 *puVar19;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar20;
  FShaderParametersMetadata *pFVar21;
  FRDGBufferUAV *pFVar22;
  FRDGTextureUAV *pFVar23;
  FRDGBufferSRV *pFVar24;
  FShaderType *pFVar25;
  FName FVar26;
  FRDGEventName *pFVar27;
  undefined8 *puVar28;
  FGlobalShaderType *pFVar29;
  FRDGUserValidation *pFVar30;
  FRDGTextureSRVDesc *pFVar31;
  FRDGTextureSRV *pFVar32;
  FGlobalShaderMap *pFVar33;
  FParameters *pFVar34;
  FRDGBuffer *pFVar35;
  byte bVar36;
  FRDGTexture *pFVar37;
  longlong *plVar38;
  EUniformBufferBindingFlags EVar39;
  uint uVar40;
  FRHIGPUMask FVar41;
  FParameters *pFVar42;
  uint uVar43;
  FRDGBuilder *this_02;
  undefined1 auStackY_7e8 [32];
  byte local_798;
  undefined1 local_795;
  undefined1 local_794;
  undefined1 local_793;
  undefined1 local_792;
  undefined1 local_791 [9];
  FParameters *local_788;
  EUniformBufferBindingFlags EStack_780;
  undefined7 uStack_77f;
  undefined8 local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined8 local_768;
  uint local_758;
  FRDGBuffer *local_748;
  EUniformBufferBindingFlags EStack_740;
  undefined7 uStack_73f;
  TArrayView<FViewInfo_const_,int> *local_738;
  FRDGBuilder *local_730;
  FRDGTextureUAVDesc local_728;
  undefined8 *local_710;
  undefined8 *local_708;
  undefined8 *local_700;
  undefined8 *local_6f8;
  undefined8 *local_6f0;
  undefined8 *local_6e8;
  undefined8 *local_6e0;
  undefined8 *local_6d8;
  FRDGTextureSRVDesc local_6d0;
  FRDGTextureSRVDesc local_6b8;
  FRDGTextureUAVDesc local_6a0;
  FRDGBufferUAVDesc local_688;
  FRDGBufferUAVDesc local_678;
  FRDGBufferUAVDesc local_668;
  FRDGBufferUAVDesc local_658;
  FRDGBufferUAVDesc local_648;
  FRDGBufferUAVDesc local_638;
  FRDGBufferUAVDesc local_628;
  FRDGBufferUAVDesc local_618;
  FRDGBufferUAVDesc local_608;
  FRDGBufferUAVDesc local_5f8;
  FRDGTextureUAVDesc local_5e8;
  FRDGTextureUAVDesc local_5d0;
  FRDGTextureUAVDesc local_5b8;
  TIntVector3<int>_u_0 local_598;
  TIntVector3<int>_u_0 local_588;
  TIntVector3<int>_u_0 local_578;
  TIntVector3<int>_u_0 local_568;
  FRDGTextureUAVDesc local_558;
  TIntVector3<int>_u_0 local_538;
  TIntVector3<int>_u_0 local_528;
  FRDGTextureUAVDesc local_518;
  FRDGTextureUAVDesc local_500;
  FRDGTextureUAVDesc local_4e8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_4d0;
  char local_4c0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_4b8;
  char local_4a8;
  FRDGBufferSRVDesc local_4a0;
  FRDGBufferSRVDesc local_480;
  FRDGBufferSRVDesc local_460;
  FRDGBufferSRVDesc local_440;
  FRDGBufferSRVDesc local_420;
  FRDGBufferSRVDesc local_400;
  FRDGBufferSRVDesc local_3e0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_398;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_388;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_378;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_368;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_358;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_348;
  FString local_338;
  TShaderRefBase<FSelectPagesToInitializeCS,FShaderMapPointerTable> local_328;
  FString local_318;
  TShaderRefBase<FInitializePhysicalPagesIndirectCS,FShaderMapPointerTable> local_308;
  FString local_2f8;
  TShaderRefBase<FVirtualSmFeedbackStatusCS,FShaderMapPointerTable> local_2e8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_> local_2d8;
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [8];
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44>_const_*,std::tuple<>_> local_288;
  FString local_278;
  TShaderRefBase<FUpdatePhysicalPages,FShaderMapPointerTable> local_268;
  FString local_258;
  TShaderRefBase<FPackAvailablePagesCS,FShaderMapPointerTable> local_248;
  FRDGBufferDesc local_238;
  FString local_220;
  TShaderRefBase<FAllocateNewPageMappingsCS,FShaderMapPointerTable> local_208;
  FString local_1f8;
  TShaderRefBase<FGenerateHierarchicalPageFlagsCS,FShaderMapPointerTable> local_1e8;
  FString local_1d8;
  TShaderRefBase<FPropagateMappedMipsCS,FShaderMapPointerTable> local_1c8;
  uint uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  uint uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  FRDGEventName local_178;
  FRDGEventName local_160;
  FRDGEventName local_148;
  FRDGEventName local_130;
  FRDGEventName local_118;
  FRDGEventName local_100;
  FRDGEventName local_e8;
  FRDGEventName local_d0;
  FParameters local_b8;
  FRDGTextureSRVDesc local_a8;
  FRDGTextureSRVDesc local_90;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7e8;
  puVar28 = (undefined8 *)0x0;
  local_738 = param_3;
  local_730 = param_1;
  if ((this->bEnabled == false) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsEnabled()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                          ,0xb07,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = this->NumShadowMapSlots + -0x2000;
  iVar16 = 0;
  if (0 < iVar15) {
    iVar16 = iVar15;
  }
  if (iVar16 + this->NumSinglePageShadowMaps == 0) {
    return;
  }
  if (this->VirtualShadowMapSetupContext == (FVirtualShadowMapSetupContext *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6505494329396557040>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                        ,0xb10,"VirtualShadowMapSetupContext");
    if (!bVar12) {
      return;
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_4a8 = '\0';
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_1a8 = 0;
      uStack_1a4 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_1ac);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)::u_FVirtualShadowM;
      ::Desc._padding_ = (longlong)::u_FVirtualShadowM;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0xb15;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FVirtualShadowMapArray::BuildPageAllocations'::__l20::Desc::operator()<>'::__l3::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_288._Myfirst._Val = &::Desc;
    local_4b8.State = (FRDGScopeState *)param_1;
    pFVar17 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar17;
    local_4b8.Scope = pFVar17;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44>_const_*,std::tuple<>_>_>
              (&(pFVar17->Impl).Impl,(FRDGScopeState *)param_1,&local_288);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_4a8 = '\x01';
  }
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Emerald,"FVirtualShadowMapArray_BuildPageAllocation");
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2838,"FVirtualShadowMapArray_BuildPageAllocation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
               ,0xb16);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2838);
  }
  local_758 = local_758 & 0xffffff00;
  bVar13 = FVirtualShadowMapArrayCacheManager::IsCacheDataAvailable(this->CacheManager);
  if (bVar13) {
    uVar43 = (this->CacheManager->CacheValidGPUMask).GPUMask;
    pFVar18 = TArrayView<FViewInfo_const_,int>::operator[](param_3,0);
    local_798 = 1;
    uVar40 = (uint)pFVar18->_padding_;
    if ((uVar40 & uVar43) == uVar40) goto LAB_1457daf2a;
  }
  local_798 = 0;
LAB_1457daf2a:
  local_778 = (FRDGBuffer *)&param_1->_padding_;
  puVar19 = FMemStackBase::Alloc((FMemStackBase *)local_778,0x70,0x10);
  if (puVar19 == (undefined8 *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    puVar19[2] = 0;
    *puVar19 = &___7__TObject_VFParameters_FUpdatePhysicalPages___FRDGAllocator__6B_;
    *(undefined1 *)(puVar19 + 3) = 1;
    puVar19[4] = 0;
    puVar19[5] = 0;
    puVar19[6] = 0;
    puVar19[7] = 0;
    puVar19[8] = 0;
    puVar19[9] = 0;
    puVar19[0xc] = 0;
    puVar28 = puVar19;
  }
  plVar38 = &param_1->_padding_;
  local_710 = puVar28;
  if ((((undefined8 **)param_1->_padding_ <= &local_710) &&
      (&local_710 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = (int)param_1->_padding_;
  if (iVar16 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar38,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  *(int *)&param_1->_padding_ = iVar16 + 1;
  *(undefined8 **)(*plVar38 + (longlong)iVar16 * 8) = local_710;
  local_748 = (FRDGBuffer *)(puVar28 + 2);
  pTVar20 = GetUncachedUniformBuffer(this,param_1);
  pFVar21 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  EStack_780 = Static;
  if (pFVar21->BindingFlags != StaticAndShader) {
    EStack_780 = pFVar21->BindingFlags;
  }
  bVar36 = 0;
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
   &((FParameters *)(puVar28 + 2))->VirtualShadowMap = pTVar20;
  puVar28[3] = CONCAT71(uStack_77f,EStack_780);
  local_658.Buffer = this->PhysicalPageMetaDataRDG;
  local_658._padding_._2_1_ = 0;
  if ((((local_658.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar36 = 0x1c;
  }
  local_658._padding_._0_2_ = (ushort)bVar36;
  local_788 = (FParameters *)pTVar20;
  pFVar22 = FRDGBuilder::CreateUAV(param_1,&local_658,None);
  puVar28[4] = pFVar22;
  local_648.Buffer = this->PhysicalPageListsRDG;
  local_648._padding_._2_1_ = 0;
  bVar36 = 0;
  if ((((local_648.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar36 = 0x1c;
  }
  local_648._padding_._0_2_ = (ushort)bVar36;
  pFVar22 = FRDGBuilder::CreateUAV(param_1,&local_648,None);
  puVar28[5] = pFVar22;
  if (local_798 != 0) {
    puVar28[6] = this->PageRequestFlagsRDG;
    local_5b8.Texture = this->PageTableRDG;
    local_5b8._padding_._1_1_ = 0;
    local_5b8._padding_._2_4_ = 0;
    local_5b8._padding_._0_1_ = ((local_5b8.Texture)->Desc).field_0x34;
    local_5b8._padding_._6_1_ = 0;
    local_5b8._padding_._0_1_ = 0;
    pFVar23 = FRDGBuilder::CreateUAV(param_1,&local_5b8,None);
    puVar28[8] = pFVar23;
    local_5d0.Texture = this->PageFlagsRDG;
    local_5d0._padding_._1_1_ = 0;
    local_5d0._padding_._2_4_ = 0;
    local_5d0._padding_._0_1_ = ((local_5d0.Texture)->Desc).field_0x34;
    local_5d0._padding_._6_1_ = 0;
    local_5d0._padding_._0_1_ = 0;
    pFVar23 = FRDGBuilder::CreateUAV(param_1,&local_5d0,None);
    puVar28[7] = pFVar23;
    local_4a0.Buffer =
         FRDGBuilder::RegisterExternalBuffer
                   (param_1,&(this->CacheManager->PrevBuffers).PhysicalPageLists,None);
    local_4a0._padding_._4_4_ = 0;
    local_4a0._padding_._0_4_ = 0xffffffff;
    local_4a0._padding_ = 0;
    local_4a0._padding_._0_1_ = 0;
    if ((((local_4a0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_4a0._padding_._0_1_ = 0x1c;
    }
    pFVar24 = FRDGBuilder::CreateSRV(param_1,&local_4a0);
    puVar28[9] = pFVar24;
    *(int *)(puVar28 + 10) = GVSMMaxPageAgeSinceLastRequest;
    *(undefined4 *)((longlong)puVar28 + 0x54) = 1;
    iVar16 = TAutoConsoleVariable<int>::GetValueOnRenderThread
                       (&CVarDebugSkipDynamicPageInvalidation);
    *(uint *)((longlong)puVar28 + 0x54) = (uint)(iVar16 == 0);
    iVar16 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarCacheAllocateViaLRU);
    *(int *)(puVar28 + 0xb) = iVar16;
  }
  pFVar22 = this->StatsBufferUAV;
  bVar14 = ShouldGenerateStats(this);
  local_748->_padding_ = (longlong)pFVar22;
  pFVar18 = TArrayView<FViewInfo_const_,int>::operator[](local_738,0);
  local_788 = (FParameters *)pFVar18->ShaderMap;
  pFVar25 = (FShaderType *)FUpdatePhysicalPages::GetStaticType();
  FGlobalShaderMap::GetShader
            ((FGlobalShaderMap *)local_788,&local_378,pFVar25,(uint)local_798 + (uint)bVar14 * 2);
  if (local_378.ShaderContent == (FShader *)0x0) {
    FVar26 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_290);
    ::FName::ToString((FName *)FVar26,&local_278);
    FUpdatePhysicalPages::GetStaticType();
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUpdatePhysicalPages::GetStaticType();
  uVar43 = (this->UniformParameters).MaxPhysicalPages;
  local_268.ShaderContent = (FUpdatePhysicalPages *)local_378.ShaderContent;
  local_268.ShaderMap = local_378.ShaderMap;
  pFVar27 = FRDGEventName::FRDGEventName(&local_160,1,L"UpdatePhysicalPages");
  pFVar21 = FUpdatePhysicalPages::FParameters::FTypeInfo::GetStructMetadata();
  local_538._s_0.Y = 1;
  local_538._s_0.Z = 1;
  local_538._s_0.X = uVar43 + 0xff >> 8;
  FComputeShaderUtils::AddPass<FUpdatePhysicalPages>
            (param_1,pFVar27,Compute,&local_268,pFVar21,(FParameters *)local_748,
             (TIntVector3<int> *)&local_538._s_0);
  if (local_160.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if ((this->CacheManager->PrevBuffers).PhysicalPageLists.Reference != (FRDGPooledBuffer *)0x0) {
    pFVar18 = TArrayView<FViewInfo_const_,int>::operator[](local_738,0);
    uVar40 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    uVar43 = (uint)pFVar18->_padding_;
    if ((uVar43 != uVar40) &&
       (local_758 = local_758 & 0xff,
       (uVar40 & ~uVar43 & (this->CacheManager->CacheValidGPUMask).GPUMask) != 0)) {
      local_758 = 1;
    }
  }
  pFVar4 = this->CacheManager;
  pFVar18 = TArrayView<FViewInfo_const_,int>::operator[](local_738,0);
  uVar43 = (uint)pFVar18->_padding_;
  if (bVar13) {
    pFVar1 = &pFVar4->CacheValidGPUMask;
    pFVar1->GPUMask = pFVar1->GPUMask | uVar43;
  }
  else {
    (pFVar4->CacheValidGPUMask).GPUMask = uVar43;
  }
  puVar28 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar28 == (undefined8 *)0x0) {
    puVar28 = (undefined8 *)0x0;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar28 + 3) = 1;
    *puVar28 = &___7__TObject_VFParameters_FPackAvailablePagesCS___FRDGAllocator__6B_;
    puVar28[2] = 0;
    puVar28[4] = 0;
    puVar28[5] = 0;
  }
  local_708 = puVar28;
  if ((((undefined8 **)*plVar38 <= &local_708) &&
      (&local_708 < (undefined8 **)*plVar38 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = (int)param_1->_padding_;
  if (iVar16 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar38,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  *(int *)&param_1->_padding_ = iVar16 + 1;
  *(undefined8 **)(*plVar38 + (longlong)iVar16 * 8) = local_708;
  local_748 = (FRDGBuffer *)(puVar28 + 2);
  pTVar20 = GetUncachedUniformBuffer(this,param_1);
  pFVar21 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  pFVar35 = local_748;
  EStack_780 = Static;
  if (pFVar21->BindingFlags != StaticAndShader) {
    EStack_780 = pFVar21->BindingFlags;
  }
  bVar36 = 0;
  local_638._padding_._2_1_ = 0;
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)&local_748->_padding_ = pTVar20;
  *(ulonglong *)
   &((TRDGUniformBufferBinding<FVirtualShadowMapUniformParameters> *)&local_748->_padding_)->
    field_0x8 = CONCAT71(uStack_77f,EStack_780);
  local_638.Buffer = this->PhysicalPageListsRDG;
  if ((((local_638.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar36 = 0x1c;
  }
  local_638._padding_._0_2_ = (ushort)bVar36;
  local_788 = (FParameters *)pTVar20;
  pFVar22 = FRDGBuilder::CreateUAV(param_1,&local_638,None);
  pFVar35->_padding_ = (longlong)pFVar22;
  pFVar18 = TArrayView<FViewInfo_const_,int>::operator[](local_738,0);
  pFVar33 = pFVar18->ShaderMap;
  pFVar29 = FPackAvailablePagesCS::GetStaticType();
  if (*(int *)&pFVar29->field_0x50 != 1) {
    local_795 = 0;
    `FGlobalShaderMap::GetShader<FPackAvailablePagesCS>'::__l2::<lambda_1>::operator()(&local_795);
  }
  pFVar25 = (FShaderType *)FPackAvailablePagesCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar33,&local_368,pFVar25,0);
  if (local_368.ShaderContent == (FShader *)0x0) {
    FVar26 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_298);
    ::FName::ToString((FName *)FVar26,&local_258);
    FPackAvailablePagesCS::GetStaticType();
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FPackAvailablePagesCS::GetStaticType();
  local_248.ShaderContent = (FPackAvailablePagesCS *)local_368.ShaderContent;
  local_248.ShaderMap = local_368.ShaderMap;
  pFVar27 = FRDGEventName::FRDGEventName(&local_148,1,L"PackAvailablePages");
  pFVar21 = FPackAvailablePagesCS::FParameters::FTypeInfo::GetStructMetadata();
  local_528._s_0.X = 1;
  local_528._s_0.Y = 1;
  local_528._s_0.Z = 1;
  FComputeShaderUtils::AddPass<FPackAvailablePagesCS>
            (param_1,pFVar27,Compute,&local_248,pFVar21,(FParameters *)local_748,
             (TIntVector3<int> *)&local_528._s_0);
  if (local_148.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.FormattedEventName.Data.AllocatorInstance.Data);
  }
  AppendPhysicalPageList(this,param_1,true);
  puVar28 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x70,0x10);
  if (puVar28 == (undefined8 *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar28 + 3) = 1;
    *puVar28 = &___7__TObject_VFParameters_FAllocateNewPageMappingsCS___FRDGAllocator__6B_;
    puVar28[2] = 0;
    puVar28[4] = 0;
    puVar28[8] = 0;
    puVar28[9] = 0;
    puVar28[10] = 0;
    puVar28[0xb] = 0;
    puVar28[0xc] = 0;
    puVar28[0xd] = 0;
  }
  local_700 = puVar28;
  if ((((undefined8 **)*plVar38 <= &local_700) &&
      (&local_700 < (undefined8 **)*plVar38 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = (int)param_1->_padding_;
  if (iVar16 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar38,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  *(int *)&param_1->_padding_ = iVar16 + 1;
  *(undefined8 **)(*plVar38 + (longlong)iVar16 * 8) = local_700;
  local_748 = (FRDGBuffer *)(puVar28 + 2);
  pTVar20 = GetUncachedUniformBuffer(this,param_1);
  pFVar21 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  local_5e8._padding_._1_1_ = 0;
  EStack_780 = Static;
  if (pFVar21->BindingFlags != StaticAndShader) {
    EStack_780 = pFVar21->BindingFlags;
  }
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
   &((FParameters *)(puVar28 + 2))->VirtualShadowMap = pTVar20;
  puVar28[3] = CONCAT71(uStack_77f,EStack_780);
  puVar28[8] = this->PageRequestFlagsRDG;
  local_5e8.Texture = this->PageTableRDG;
  local_5e8._padding_._2_4_ = 0;
  local_5e8._padding_._6_1_ = 0;
  local_5e8._padding_._0_1_ = ((local_5e8.Texture)->Desc).field_0x34;
  local_5e8._padding_._0_1_ = 0;
  local_788 = (FParameters *)pTVar20;
  pFVar23 = FRDGBuilder::CreateUAV(param_1,&local_5e8,None);
  puVar28[10] = pFVar23;
  local_558.Texture = this->PageFlagsRDG;
  local_558._padding_._1_1_ = 0;
  local_558._padding_._2_4_ = 0;
  local_558._padding_._0_1_ = ((local_558.Texture)->Desc).field_0x34;
  local_558._padding_._6_1_ = 0;
  local_558._padding_._0_1_ = 0;
  pFVar23 = FRDGBuilder::CreateUAV(param_1,&local_558,None);
  puVar28[9] = pFVar23;
  local_628.Buffer = this->PhysicalPageListsRDG;
  local_628._padding_._2_1_ = 0;
  bVar36 = 0;
  if ((((local_628.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar36 = 0x1c;
  }
  local_628._padding_._0_2_ = (ushort)bVar36;
  pFVar22 = FRDGBuilder::CreateUAV(param_1,&local_628,None);
  puVar28[0xb] = pFVar22;
  local_618.Buffer = this->PhysicalPageMetaDataRDG;
  bVar36 = 0;
  local_618._padding_._2_1_ = 0;
  if ((((local_618.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar36 = 0x1c;
  }
  local_618._padding_._0_2_ = (ushort)bVar36;
  pFVar22 = FRDGBuilder::CreateUAV(param_1,&local_618,None);
  puVar28[0xc] = pFVar22;
  pFVar22 = this->StatsBufferUAV;
  bVar13 = ShouldGenerateStats(this);
  local_748->_padding_ = (longlong)pFVar22;
  pFVar18 = TArrayView<FViewInfo_const_,int>::operator[](local_738,0);
  local_788 = (FParameters *)pFVar18->ShaderMap;
  pFVar25 = (FShaderType *)FAllocateNewPageMappingsCS::GetStaticType();
  FGlobalShaderMap::GetShader((FGlobalShaderMap *)local_788,&local_358,pFVar25,(uint)bVar13);
  if (local_358.ShaderContent == (FShader *)0x0) {
    FVar26 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2a0);
    ::FName::ToString((FName *)FVar26,&local_220);
    FAllocateNewPageMappingsCS::GetStaticType();
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FAllocateNewPageMappingsCS::GetStaticType();
  pFVar5 = this->VirtualShadowMapSetupContext;
  local_208.ShaderContent = (FAllocateNewPageMappingsCS *)local_358.ShaderContent;
  local_208.ShaderMap = local_358.ShaderMap;
  pFVar27 = FRDGEventName::FRDGEventName(&local_130,1,L"AllocateNewPageMappings");
  FPerPageShaderDispatcher::AddPass<FAllocateNewPageMappingsCS>
            (&pFVar5->PerPageShaderDispatcher,param_1,pFVar27,&local_208,(FParameters *)local_748);
  if (local_130.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.FormattedEventName.Data.AllocatorInstance.Data);
  }
  puVar28 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0xb0,0x10);
  if (puVar28 == (undefined8 *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar28 + 3) = 1;
    *puVar28 = &___7__TObject_VFParameters_FGenerateHierarchicalPageFlagsCS___FRDGAllocator__6B_;
    puVar28[2] = 0;
    puVar28[4] = 0;
    puVar28[5] = 0;
    puVar28[6] = 0;
    puVar28[7] = 0;
    puVar28[8] = 0;
    puVar28[9] = 0;
    puVar28[10] = 0;
    puVar28[0xb] = 0;
    puVar28[0xc] = 0;
    puVar28[0xd] = 0;
    puVar28[0xe] = 0;
    puVar28[0xf] = 0;
    puVar28[0x10] = 0;
    puVar28[0x11] = 0;
    puVar28[0x12] = 0;
    puVar28[0x13] = 0;
    puVar28[0x14] = 0;
    puVar28[0x15] = 0;
  }
  local_6f8 = puVar28;
  if ((((undefined8 **)*plVar38 <= &local_6f8) &&
      (&local_6f8 < (undefined8 **)*plVar38 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = (int)param_1->_padding_;
  if (iVar16 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar38,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  *(int *)&param_1->_padding_ = iVar16 + 1;
  pFVar42 = (FParameters *)(puVar28 + 2);
  *(undefined8 **)(*plVar38 + (longlong)iVar16 * 8) = local_6f8;
  local_788 = pFVar42;
  pFVar30 = (FRDGUserValidation *)GetUncachedUniformBuffer(this,param_1);
  pFVar21 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  local_480._padding_._0_4_ = 0xffffffff;
  EStack_740 = Static;
  if (pFVar21->BindingFlags != StaticAndShader) {
    EStack_740 = pFVar21->BindingFlags;
  }
  local_480._padding_._0_1_ = 0;
  *(FRDGUserValidation **)&pFVar42->VirtualShadowMap = pFVar30;
  puVar28[3] = CONCAT71(uStack_73f,EStack_740);
  local_480.Buffer = this->PhysicalPageMetaDataRDG;
  local_480._padding_._4_4_ = 0;
  local_480._padding_ = 0;
  if ((((local_480.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_480._padding_._0_1_ = 0x1c;
  }
  local_748 = (FRDGBuffer *)pFVar30;
  pFVar24 = FRDGBuilder::CreateSRV(param_1,&local_480);
  puVar28[4] = pFVar24;
  pFVar37 = this->PageFlagsRDG;
  if (GRHIGlobals.SupportsTextureViews == false) {
    local_6b8._padding_._0_2_ = 0;
    local_6b8._padding_._3_1_ = 0;
    local_6b8._padding_._4_4_ = 0;
    local_6b8._padding_._0_1_ = 0;
    local_6b8._padding_._2_1_ = 0;
    local_6b8._padding_._2_1_ = (pFVar37->Desc).field_0x30;
    cVar2 = (pFVar37->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      local_6b8._padding_._4_4_ = (uint)*(ushort *)&(pFVar37->Desc).field_0x2e << 0x10;
    }
    pFVar31 = &local_6b8;
    local_6b8.Texture = pFVar37;
  }
  else {
    pFVar31 = FRDGTextureSRVDesc::CreateForMipLevel(&local_a8,pFVar37,0);
  }
  pFVar32 = FRDGBuilder::CreateSRV(param_1,pFVar31);
  puVar28[0x12] = pFVar32;
  pFVar37 = this->PageReceiverMasksRDG;
  if (GRHIGlobals.SupportsTextureViews == false) {
    local_6d0._padding_._0_2_ = 0;
    local_6d0._padding_._3_1_ = 0;
    local_6d0._padding_._4_4_ = 0;
    local_6d0._padding_._0_1_ = 0;
    local_6d0._padding_._2_1_ = 0;
    local_6d0._padding_._2_1_ = (pFVar37->Desc).field_0x30;
    cVar2 = (pFVar37->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      local_6d0._padding_._4_4_ = (uint)*(ushort *)&(pFVar37->Desc).field_0x2e << 0x10;
    }
    pFVar31 = &local_6d0;
    local_6d0.Texture = pFVar37;
  }
  else {
    pFVar31 = FRDGTextureSRVDesc::CreateForMipLevel(&local_90,pFVar37,0);
  }
  pFVar32 = FRDGBuilder::CreateSRV(param_1,pFVar31);
  puVar28[0x13] = pFVar32;
  local_608.Buffer = this->UncachedPageRectBoundsRDG;
  local_608._padding_._2_1_ = 0;
  bVar36 = 0;
  if ((((local_608.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar36 = 0x1c;
  }
  local_608._padding_._0_2_ = (ushort)bVar36;
  pFVar22 = FRDGBuilder::CreateUAV(param_1,&local_608,None);
  puVar28[0x14] = pFVar22;
  local_5f8.Buffer = this->AllocatedPageRectBoundsRDG;
  local_5f8._padding_._2_1_ = 0;
  bVar36 = 0;
  if ((((local_5f8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar36 = 0x1c;
  }
  local_5f8._padding_._0_2_ = (ushort)bVar36;
  pFVar22 = FRDGBuilder::CreateUAV(param_1,&local_5f8,None);
  pTVar20 = (TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *)local_778;
  puVar28[0x15] = pFVar22;
  uVar43 = 1;
  pFVar37 = this->PageFlagsRDG;
  if (1 < (byte)(pFVar37->Desc).field_0x30) {
    this_00 = &param_1->Views;
    pFVar30 = &param_1->UserValidation;
    do {
      local_6a0._padding_._0_1_ = (pFVar37->Desc).field_0x34;
      local_6a0._padding_._1_1_ = (undefined1)uVar43;
      local_6a0._padding_._2_4_ = 0;
      local_6a0._padding_._6_1_ = 0;
      local_6a0._padding_._0_1_ = 0;
      local_6a0.Texture = pFVar37;
      FRDGUserValidation::ValidateCreateUAV(pFVar30,&local_6a0);
      pFVar37 = local_6a0.Texture;
      pFVar23 = FMemStackBase::Alloc((FMemStackBase *)pTVar20,0x50,8);
      pFVar23 = FRDGTextureUAV::FRDGTextureUAV
                          (pFVar23,(wchar_t *)pFVar37->_padding_,&local_6a0,None);
      TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert(this_00,(FRDGView *)pFVar23);
      FRDGUserValidation::ValidateCreateUAV(pFVar30,pFVar23);
      uVar40 = uVar43 - 1;
      uVar43 = uVar43 + 1;
      puVar28[(ulonglong)uVar40 + 5] = pFVar23;
      pFVar37 = this->PageFlagsRDG;
      param_1 = local_730;
    } while (uVar43 < (byte)(pFVar37->Desc).field_0x30);
  }
  pFVar10 = local_788;
  FVar41.GPUMask = 1;
  pFVar37 = this->PageReceiverMasksRDG;
  this_02 = param_1;
  if (1 < (byte)(pFVar37->Desc).field_0x30) {
    local_778 = (FRDGBuffer *)&param_1->_padding_;
    local_748 = (FRDGBuffer *)&param_1->UserValidation;
    uVar43 = 1;
    do {
      pTVar20 = (TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *)local_778;
      local_728._padding_._0_1_ = (pFVar37->Desc).field_0x34;
      local_728._padding_._1_1_ = (undefined1)uVar43;
      local_728._padding_._2_4_ = 0;
      local_728._padding_._6_1_ = 0;
      local_728._padding_._0_1_ = '\0';
      local_728.Texture = pFVar37;
      FRDGUserValidation::ValidateCreateUAV((FRDGUserValidation *)local_748,&local_728);
      pFVar37 = local_728.Texture;
      pFVar23 = FMemStackBase::Alloc((FMemStackBase *)pTVar20,0x50,8);
      lVar6 = pFVar37->_padding_;
      *(byte *)&pFVar23->_padding_ = (byte)pFVar23->_padding_ & 0xfe;
      pFVar23->_padding_ = lVar6;
      pFVar23->_padding_ = 0;
      *(undefined1 *)&pFVar23->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar23->_padding_ + 4) = 0xffffffffffffffff;
      *(undefined1 *)&pFVar23->_padding_ = 0;
      pFVar23->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
      *(undefined1 *)&(pFVar23->Desc)._padding_ = (undefined1)local_728._padding_;
      *(undefined1 *)((longlong)&(pFVar23->Desc)._padding_ + 1) = local_728._padding_._1_1_;
      *(undefined2 *)((longlong)&(pFVar23->Desc)._padding_ + 2) = local_728._padding_._2_2_;
      *(undefined2 *)((longlong)&(pFVar23->Desc)._padding_ + 4) = local_728._padding_._4_2_;
      *(undefined1 *)&(pFVar23->Desc)._padding_ = 0;
      *(undefined1 *)((longlong)&(pFVar23->Desc)._padding_ + 6) = local_728._padding_._6_1_;
      *(char *)&(pFVar23->Desc)._padding_ = (char)local_728._padding_;
      if ((char)local_728._padding_ != '\0') {
        *(undefined1 *)((longlong)&(pFVar23->Desc)._padding_ + 7) = local_728._padding_._7_1_;
      }
      (pFVar23->Desc).Texture = local_728.Texture;
      iVar16 = (param_1->Views).Array.ArrayNum;
      if (iVar16 == (param_1->Views).Array.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar16 + 1;
      (param_1->Views).Array.AllocatorInstance.Data[iVar16] = (FRDGView *)pFVar23;
      *(int *)((longlong)&pFVar23->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV((FRDGUserValidation *)local_748,pFVar23);
      uVar40 = uVar43 - 1;
      uVar43 = uVar43 + 1;
      *(FRDGTextureUAV **)(&(pFVar10->OutPageReceiverMaskMips).field_0x0 + (ulonglong)uVar40 * 8) =
           pFVar23;
      pFVar37 = this->PageReceiverMasksRDG;
      pFVar42 = local_788;
      this_02 = local_730;
    } while (uVar43 < (byte)(pFVar37->Desc).field_0x30);
  }
  pTVar11 = local_738;
  if ((local_738->ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar33 = pTVar11->DataPtr->ShaderMap;
  pFVar29 = FGenerateHierarchicalPageFlagsCS::GetStaticType();
  if (*(int *)&pFVar29->field_0x50 != 1) {
    local_794 = 0;
    `FGlobalShaderMap::GetShader<FGenerateHierarchicalPageFlagsCS>'::__l2::<lambda_1>::operator()
              (&local_794);
  }
  pFVar25 = (FShaderType *)FGenerateHierarchicalPageFlagsCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar33,&local_348,pFVar25,0);
  if (local_348.ShaderContent == (FShader *)0x0) {
    FVar26 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2a8);
    ::FName::ToString((FName *)FVar26,&local_1f8);
    FGenerateHierarchicalPageFlagsCS::GetStaticType();
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FGenerateHierarchicalPageFlagsCS::GetStaticType();
  iVar16 = (this->UniformParameters).MaxPhysicalPages + 0xff;
  local_1e8.ShaderContent = (FGenerateHierarchicalPageFlagsCS *)local_348.ShaderContent;
  local_1e8.ShaderMap = local_348.ShaderMap;
  pFVar27 = FRDGEventName::FRDGEventName(&local_118,1,L"GenerateHierarchicalPageFlags");
  pFVar21 = FGenerateHierarchicalPageFlagsCS::FParameters::FTypeInfo::GetStructMetadata();
  local_598._s_0.Y = 1;
  local_598._s_0.Z = 1;
  local_598._s_0.X = (int)((iVar16 >> 0x1f & 0xffU) + iVar16) >> 8;
  FComputeShaderUtils::AddPass<FGenerateHierarchicalPageFlagsCS>
            (this_02,pFVar27,Compute,&local_1e8,pFVar21,pFVar42,(TIntVector3<int> *)&local_598._s_0)
  ;
  if (local_118.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.FormattedEventName.Data.AllocatorInstance.Data);
  }
  puVar28 = (undefined8 *)0x0;
  iVar15 = this->NumShadowMapSlots + -0x2000;
  iVar16 = 0;
  if (0 < iVar15) {
    iVar16 = iVar15;
  }
  if (0 < iVar16) {
    puVar19 = FMemStackBase::Alloc((FMemStackBase *)&this_02->_padding_,0x50,0x10);
    if (puVar19 == (undefined8 *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      puVar19[2] = 0;
      *puVar19 = &___7__TObject_VFParameters_FPropagateMappedMipsCS___FRDGAllocator__6B_;
      *(undefined1 *)(puVar19 + 3) = 1;
      puVar19[4] = 0;
      puVar19[8] = 0;
      puVar28 = puVar19;
    }
    local_6f0 = puVar28;
    if ((((undefined8 **)this_02->_padding_ <= &local_6f0) &&
        (&local_6f0 <
         (undefined8 **)this_02->_padding_ + *(int *)((longlong)&this_02->_padding_ + 4))) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar16 = (int)this_02->_padding_;
    if (iVar16 == *(int *)((longlong)&this_02->_padding_ + 4)) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&this_02->_padding_,
                          (int *)((longlong)&this_02->_padding_ + 4));
    }
    *(int *)&this_02->_padding_ = iVar16 + 1;
    *(undefined8 **)(this_02->_padding_ + (longlong)iVar16 * 8) = local_6f0;
    pTVar20 = GetUncachedUniformBuffer(this,this_02);
    pFVar21 = FVirtualShadowMapUniformParameters::GetStructMetadata();
    local_518._padding_._1_1_ = 0;
    local_518._padding_._2_4_ = 0;
    local_518._padding_._6_1_ = 0;
    local_518._padding_._0_1_ = 0;
    EVar39 = Static;
    if (pFVar21->BindingFlags != StaticAndShader) {
      EVar39 = pFVar21->BindingFlags;
    }
    uStack_770 = CONCAT31(uStack_770._1_3_,EVar39);
    *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
     &((FParameters *)(puVar28 + 2))->VirtualShadowMap = pTVar20;
    puVar28[3] = CONCAT44(uStack_76c,uStack_770);
    local_518.Texture = this->PageTableRDG;
    local_518._padding_._0_1_ = ((local_518.Texture)->Desc).field_0x34;
    local_778 = (FRDGBuffer *)pTVar20;
    pFVar23 = FRDGBuilder::CreateUAV(this_02,&local_518,None);
    puVar28[8] = pFVar23;
    pFVar18 = TArrayView<FViewInfo_const_,int>::operator[](local_738,0);
    pFVar33 = pFVar18->ShaderMap;
    pFVar29 = FPropagateMappedMipsCS::GetStaticType();
    if (*(int *)&pFVar29->field_0x50 != 1) {
      local_793 = 0;
      `FGlobalShaderMap::GetShader<FPropagateMappedMipsCS>'::__l2::<lambda_1>::operator()
                (&local_793);
    }
    pFVar25 = (FShaderType *)FPropagateMappedMipsCS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar33,&local_3b8,pFVar25,0);
    if (local_3b8.ShaderContent == (FShader *)0x0) {
      FVar26 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2b0);
      ::FName::ToString((FName *)FVar26,&local_1d8);
      FPropagateMappedMipsCS::GetStaticType();
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FPropagateMappedMipsCS::GetStaticType();
    pFVar5 = this->VirtualShadowMapSetupContext;
    local_1c8.ShaderContent = (FPropagateMappedMipsCS *)local_3b8.ShaderContent;
    local_1c8.ShaderMap = local_3b8.ShaderMap;
    pFVar27 = FRDGEventName::FRDGEventName(&local_100,1,L"PropagateMappedMips");
    FPerPageShaderDispatcher::AddPass<FPropagateMappedMipsCS>
              (&pFVar5->PerPageShaderDispatcher,this_02,pFVar27,&local_1c8,
               (FParameters *)(puVar28 + 2));
    if (local_100.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_100.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  local_588._s_0.X = 0;
  local_588._s_0.Y = 1;
  local_588._s_0.Z = 1;
  local_730 = (FRDGBuilder *)
              CreateAndClearIndirectDispatchArgs
                        (this_02,*(Type *)&this->Scene->field_0x8,
                         L"Shadow.Virtual.InitializePagesIndirectArgs",
                         (TIntVector3<int> *)&local_588._s_0,1,3);
  if ((this->PhysicalPagePoolRDG == (FRDGTexture *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PhysicalPagePoolRDG != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                          ,0xbab,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  cVar2 = *(char *)((longlong)&this_02->_padding_ + 6);
  local_4c0 = '\0';
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((this_02->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_188 = 0;
      uStack_184 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_18c);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_InitializePhysi;
      ::Desc._padding_ = (longlong)u_InitializePhysi;
      ::Desc._padding_._0_4_ = 0xbad;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FVirtualShadowMapArray::BuildPageAllocations'::__l50::<lambda_2>::operator()<>'::
             __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_2d8._Myfirst._Val = &::Desc;
    local_4d0.State = (FRDGScopeState *)this_02;
    pFVar17 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&this_02->_padding_,(FRDGScope **)this_02);
    this_02->_padding_ = (longlong)pFVar17;
    local_4d0.Scope = pFVar17;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>_>
              (&(pFVar17->Impl).Impl,(FRDGScopeState *)this_02,&local_2d8);
    if (*(char *)((longlong)&this_02->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar17,(FRHIComputeCommandList *)this_02->_padding_,false);
      FRDGScope::BeginGPU(pFVar17,(FRHIComputeCommandList *)this_02->_padding_);
    }
    local_4c0 = '\x01';
  }
  if ((this->bInitialized == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("bInitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                          ,0x430,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar43 = (this->UniformParameters).MaxPhysicalPages;
  uStack_770 = 0x10109;
  local_768 = 0;
  uVar40 = uVar43 * 2;
  if ((this->UniformParameters).StaticCachedArrayIndex == 0) {
    uVar40 = uVar43;
  }
  local_238.Metadata = (FShaderParametersMetadata *)0x0;
  local_778._4_4_ = uVar40 + 1;
  local_778._0_4_ = 4;
  local_238._12_4_ = uStack_76c;
  local_238.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_238.BytesPerElement = 4;
  local_238.NumElements = uVar40 + 1;
  local_748 = FRDGBuilder::CreateBuffer
                        (this_02,&local_238,L"Shadow.Virtual.PhysicalPagesToInitialize",None);
  puVar28 = FMemStackBase::Alloc((FMemStackBase *)&this_02->_padding_,0x50,0x10);
  if (puVar28 == (undefined8 *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar28 + 3) = 1;
    *puVar28 = &___7__TObject_VFParameters_FSelectPagesToInitializeCS___FRDGAllocator__6B_;
    puVar28[2] = 0;
    puVar28[4] = 0;
    puVar28[5] = 0;
    puVar28[6] = 0;
    puVar28[7] = 0;
  }
  local_6e8 = puVar28;
  if ((((undefined8 **)this_02->_padding_ <= &local_6e8) &&
      (&local_6e8 < (undefined8 **)this_02->_padding_ + *(int *)((longlong)&this_02->_padding_ + 4))
      ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = (int)this_02->_padding_;
  if (iVar16 == *(int *)((longlong)&this_02->_padding_ + 4)) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&this_02->_padding_,
                        (int *)((longlong)&this_02->_padding_ + 4));
  }
  *(int *)&this_02->_padding_ = iVar16 + 1;
  *(undefined8 **)(this_02->_padding_ + (longlong)iVar16 * 8) = local_6e8;
  local_788 = (FParameters *)(puVar28 + 2);
  pTVar20 = GetUncachedUniformBuffer(this,this_02);
  pFVar21 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  EVar39 = Static;
  if (pFVar21->BindingFlags != StaticAndShader) {
    EVar39 = pFVar21->BindingFlags;
  }
  bVar36 = 0;
  uStack_770 = CONCAT31(uStack_770._1_3_,EVar39);
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
   &((FParameters *)(puVar28 + 2))->VirtualShadowMap = pTVar20;
  puVar28[3] = CONCAT44(uStack_76c,uStack_770);
  local_688.Buffer = this->PhysicalPageMetaDataRDG;
  local_688._padding_._2_1_ = 0;
  if ((((local_688.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar36 = 0x1c;
  }
  local_688._padding_._0_2_ = (ushort)bVar36;
  local_778 = (FRDGBuffer *)pTVar20;
  pFVar22 = FRDGBuilder::CreateUAV(this_02,&local_688,None);
  puVar28[4] = pFVar22;
  local_678.Buffer = (FRDGBuffer *)local_730;
  local_678._padding_._2_1_ = 0;
  bVar36 = 0;
  if ((((FRDGBufferDesc *)&local_730->_padding_)->Usage & DrawIndirect) != None) {
    bVar36 = 0x1c;
  }
  local_678._padding_._0_2_ = (ushort)bVar36;
  pFVar22 = FRDGBuilder::CreateUAV(this_02,&local_678,None);
  puVar28[5] = pFVar22;
  local_668.Buffer = local_748;
  local_668._padding_._2_1_ = 0;
  bVar36 = 0;
  if (((local_748->Desc).Usage & DrawIndirect) != None) {
    bVar36 = 0x1c;
  }
  local_668._padding_._0_2_ = (ushort)bVar36;
  pFVar22 = FRDGBuilder::CreateUAV(this_02,&local_668,None);
  puVar28[6] = pFVar22;
  pTVar9 = CVarShadowsVirtualForceFullPageClears.Ref;
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(uint *)(puVar28 + 8) = (uint)(pTVar9->ShadowedValue[1] == 0);
  pFVar22 = this->StatsBufferUAV;
  bVar13 = ShouldGenerateStats(this);
  *(FRDGBufferUAV **)((longlong)local_788 + 0x28) = pFVar22;
  local_778 = (FRDGBuffer *)
              GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [*(int *)&this->Scene->field_0x8]);
  pFVar25 = (FShaderType *)FSelectPagesToInitializeCS::GetStaticType();
  FGlobalShaderMap::GetShader((FGlobalShaderMap *)local_778,&local_3a8,pFVar25,(uint)bVar13);
  if (local_3a8.ShaderContent == (FShader *)0x0) {
    FVar26 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2b8);
    ::FName::ToString((FName *)FVar26,&local_338);
    FSelectPagesToInitializeCS::GetStaticType();
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FSelectPagesToInitializeCS::GetStaticType();
  uVar43 = (this->UniformParameters).MaxPhysicalPages;
  local_328.ShaderContent = (FSelectPagesToInitializeCS *)local_3a8.ShaderContent;
  local_328.ShaderMap = local_3a8.ShaderMap;
  pFVar27 = FRDGEventName::FRDGEventName(&local_e8,1,L"SelectPagesToInitialize");
  pFVar21 = FSelectPagesToInitializeCS::FParameters::FTypeInfo::GetStructMetadata();
  local_578._s_0.Y = 1;
  local_578._s_0.Z = 1;
  local_578._s_0.X = uVar43 + 0xff >> 8;
  FComputeShaderUtils::AddPass<FSelectPagesToInitializeCS>
            (this_02,pFVar27,Compute,&local_328,pFVar21,(FParameters *)local_788,
             (TIntVector3<int> *)&local_578._s_0);
  if (local_e8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  puVar28 = FMemStackBase::Alloc((FMemStackBase *)&this_02->_padding_,0x50,0x10);
  if (puVar28 == (undefined8 *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar28 + 3) = 1;
    *puVar28 = &___7__TObject_VFParameters_FInitializePhysicalPagesIndirectCS___FRDGAllocator__6B_;
    puVar28[2] = 0;
    puVar28[4] = 0;
    puVar28[5] = 0;
    puVar28[6] = 0;
    puVar28[7] = 0;
    *(undefined4 *)(puVar28 + 8) = 4;
  }
  local_6e0 = puVar28;
  if ((((undefined8 **)this_02->_padding_ <= &local_6e0) &&
      (&local_6e0 < (undefined8 **)this_02->_padding_ + *(int *)((longlong)&this_02->_padding_ + 4))
      ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = (int)this_02->_padding_;
  if (iVar16 == *(int *)((longlong)&this_02->_padding_ + 4)) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&this_02->_padding_,
                        (int *)((longlong)&this_02->_padding_ + 4));
  }
  *(int *)&this_02->_padding_ = iVar16 + 1;
  *(undefined8 **)(this_02->_padding_ + (longlong)iVar16 * 8) = local_6e0;
  pTVar20 = GetUncachedUniformBuffer(this,this_02);
  pFVar21 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  local_460._padding_._0_4_ = 0xffffffff;
  EVar39 = Static;
  if (pFVar21->BindingFlags != StaticAndShader) {
    EVar39 = pFVar21->BindingFlags;
  }
  local_460._padding_._0_1_ = 0;
  uStack_770 = CONCAT31(uStack_770._1_3_,EVar39);
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
   &((FParameters *)(puVar28 + 2))->VirtualShadowMap = pTVar20;
  puVar28[3] = CONCAT44(uStack_76c,uStack_770);
  local_460.Buffer = this->PhysicalPageMetaDataRDG;
  local_460._padding_._4_4_ = 0;
  local_460._padding_ = 0;
  if ((((local_460.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_460._padding_._0_1_ = 0x1c;
  }
  local_778 = (FRDGBuffer *)pTVar20;
  pFVar24 = FRDGBuilder::CreateSRV(this_02,&local_460);
  puVar28[4] = pFVar24;
  local_500.Texture = this->PhysicalPagePoolRDG;
  local_500._padding_._1_1_ = 0;
  local_500._padding_._2_4_ = 0;
  local_500._padding_._0_1_ = ((local_500.Texture)->Desc).field_0x34;
  local_500._padding_._6_1_ = 0;
  local_500._padding_._0_1_ = 0;
  pFVar23 = FRDGBuilder::CreateUAV(this_02,&local_500,None);
  puVar28[6] = pFVar23;
  local_778 = (FRDGBuffer *)local_730;
  local_440.Buffer = local_748;
  local_440._padding_._4_4_ = 0;
  local_440._padding_._0_4_ = 0xffffffff;
  local_440._padding_ = 0;
  uStack_770 = 4;
  puVar28[7] = local_730;
  puVar28[8] = CONCAT44(uStack_76c,4);
  local_440._padding_._0_1_ = 0;
  if (((local_748->Desc).Usage & DrawIndirect) != None) {
    local_440._padding_._0_1_ = 0x1c;
  }
  pFVar24 = FRDGBuilder::CreateSRV(this_02,&local_440);
  puVar28[5] = pFVar24;
  pFVar33 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                               [*(int *)&this->Scene->field_0x8]);
  pFVar29 = FInitializePhysicalPagesIndirectCS::GetStaticType();
  if (*(int *)&pFVar29->field_0x50 != 1) {
    local_792 = 0;
    `FGlobalShaderMap::GetShader<FInitializePhysicalPagesIndirectCS>'::__l2::<lambda_1>::operator()
              (&local_792);
  }
  pFVar25 = (FShaderType *)FInitializePhysicalPagesIndirectCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar33,&local_398,pFVar25,0);
  if (local_398.ShaderContent == (FShader *)0x0) {
    FVar26 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2c0);
    ::FName::ToString((FName *)FVar26,&local_318);
    FInitializePhysicalPagesIndirectCS::GetStaticType();
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FInitializePhysicalPagesIndirectCS::GetStaticType();
  pFVar35 = (FRDGBuffer *)puVar28[7];
  local_308.ShaderContent = (FInitializePhysicalPagesIndirectCS *)local_398.ShaderContent;
  local_308.ShaderMap = local_398.ShaderMap;
  local_78._0_8_ = 0;
  local_50 = (longlong *)0x0;
  pFVar27 = FRDGEventName::FRDGEventName(&local_d0,1,L"InitializePhysicalMemoryIndirect");
  FComputeShaderUtils::AddPass<FInitializePhysicalPagesIndirectCS>
            (this_02,pFVar27,Compute,&local_308,(FParameters *)(puVar28 + 2),pFVar35,0,
             (TFunction<void___cdecl(void)> *)local_78);
  if (local_d0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_78._0_8_ != 0) {
    plVar38 = (longlong *)(local_78 + 0x10);
    if (local_50 != (longlong *)0x0) {
      plVar38 = local_50;
    }
    (**(code **)(*plVar38 + 0x10))();
  }
  if (local_4c0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_4d0);
  }
  pFVar37 = this->PhysicalPagePoolRDG;
  if (2 < *(ushort *)&(pFVar37->Desc).field_0x2e) {
    local_4e8._padding_._0_1_ = (pFVar37->Desc).field_0x34;
    local_4e8._padding_._1_1_ = 0;
    local_4e8._padding_._2_4_ = 0x10002;
    local_4e8._padding_._6_1_ = 0;
    local_4e8._padding_._0_1_ = 0;
    local_4e8.Texture = pFVar37;
    pFVar23 = FRDGBuilder::CreateUAV(this_02,&local_4e8,None);
    AddClearUAVPass(this_02,pFVar23,0,Compute);
  }
  (this->UniformParameters).PageTable = this->PageTableRDG;
  (this->UniformParameters).PageFlags = this->PageFlagsRDG;
  (this->UniformParameters).PageReceiverMasks = this->PageReceiverMasksRDG;
  local_420.Buffer = this->AllocatedPageRectBoundsRDG;
  local_420._padding_._4_4_ = 0;
  local_420._padding_._0_4_ = 0xffffffff;
  local_420._padding_ = 0;
  local_420._padding_._0_1_ = 0;
  if ((((local_420.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_420._padding_._0_1_ = 0x1c;
  }
  pFVar24 = FRDGBuilder::CreateSRV(this_02,&local_420);
  (this->UniformParameters).AllocatedPageRectBounds = pFVar24;
  local_400.Buffer = this->UncachedPageRectBoundsRDG;
  local_400._padding_._0_1_ = 0;
  local_400._padding_._4_4_ = 0;
  local_400._padding_._0_4_ = 0xffffffff;
  local_400._padding_ = 0;
  if ((((local_400.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_400._padding_._0_1_ = 0x1c;
  }
  pFVar24 = FRDGBuilder::CreateSRV(this_02,&local_400);
  (this->UniformParameters).UncachedPageRectBounds = pFVar24;
  puVar28 = FMemStackBase::Alloc((FMemStackBase *)&this_02->_padding_,0x50,0x10);
  if (puVar28 == (undefined8 *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar28 + 3) = 1;
    *puVar28 = &___7__TObject_VFParameters_FVirtualSmFeedbackStatusCS___FRDGAllocator__6B_;
    puVar28[2] = 0;
    puVar28[4] = 0;
    puVar28[6] = 0;
  }
  local_6d8 = puVar28;
  if ((((undefined8 **)this_02->_padding_ <= &local_6d8) &&
      (&local_6d8 < (undefined8 **)this_02->_padding_ + *(int *)((longlong)&this_02->_padding_ + 4))
      ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = (int)this_02->_padding_;
  if (iVar16 == *(int *)((longlong)&this_02->_padding_ + 4)) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&this_02->_padding_,
                        (int *)((longlong)&this_02->_padding_ + 4));
  }
  *(int *)&this_02->_padding_ = iVar16 + 1;
  local_3e0._padding_._0_4_ = 0xffffffff;
  *(undefined8 **)(this_02->_padding_ + (longlong)iVar16 * 8) = local_6d8;
  local_3e0._padding_._4_4_ = 0;
  local_3e0._padding_ = 0;
  local_3e0.Buffer = this->PhysicalPageListsRDG;
  local_3e0._padding_._0_1_ = 0;
  if ((((local_3e0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_3e0._padding_._0_1_ = 0x1c;
  }
  pFVar24 = FRDGBuilder::CreateSRV(this_02,&local_3e0);
  puVar28[4] = pFVar24;
  pFVar34 = GPUMessage::GetShaderParameters(&local_b8,this_02);
  uVar8 = *(undefined8 *)&pFVar34->GPUMessageDataBufferSize;
  puVar28[6] = pFVar34->GPUMessageDataBuffer;
  puVar28[7] = uVar8;
  uVar43 = (this->CacheManager->StatusFeedbackSocket).MessageId.Index;
  if ((uVar43 == 0xffffffff) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                          ,0x166,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(uint *)(puVar28 + 8) = uVar43;
  pTVar20 = GetUncachedUniformBuffer(this,this_02);
  pFVar21 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  EVar39 = Static;
  if (pFVar21->BindingFlags != StaticAndShader) {
    EVar39 = pFVar21->BindingFlags;
  }
  uStack_770 = CONCAT31(uStack_770._1_3_,EVar39);
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
   &((FParameters *)(puVar28 + 2))->VirtualShadowMap = pTVar20;
  puVar28[3] = CONCAT44(uStack_76c,uStack_770);
  local_778 = (FRDGBuffer *)pTVar20;
  pFVar33 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                               [*(int *)&this->Scene->field_0x8]);
  pFVar29 = FVirtualSmFeedbackStatusCS::GetStaticType();
  if (*(int *)&pFVar29->field_0x50 != 1) {
    local_791[0] = 0;
    `FGlobalShaderMap::GetShader<FVirtualSmFeedbackStatusCS>'::__l2::<lambda_1>::operator()
              (local_791);
  }
  pFVar25 = (FShaderType *)FVirtualSmFeedbackStatusCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar33,&local_388,pFVar25,0);
  if (local_388.ShaderContent == (FShader *)0x0) {
    FVar26 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2c8);
    ::FName::ToString((FName *)FVar26,&local_2f8);
    FVirtualSmFeedbackStatusCS::GetStaticType();
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FVirtualSmFeedbackStatusCS::GetStaticType();
  local_2e8.ShaderContent = (FVirtualSmFeedbackStatusCS *)local_388.ShaderContent;
  local_2e8.ShaderMap = local_388.ShaderMap;
  pFVar27 = FRDGEventName::FRDGEventName(&local_178,1,L"Feedback Status");
  pFVar21 = FVirtualSmFeedbackStatusCS::FParameters::FTypeInfo::GetStructMetadata();
  local_568._s_0.X = 1;
  local_568._s_0.Y = 1;
  local_568._s_0.Z = 1;
  FComputeShaderUtils::AddPass<FVirtualSmFeedbackStatusCS>
            (this_02,pFVar27,Compute,&local_2e8,pFVar21,(FParameters *)(puVar28 + 2),
             (TIntVector3<int> *)&local_568._s_0);
  if (local_178.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.FormattedEventName.Data.AllocatorInstance.Data);
  }
  AppendPhysicalPageList(this,this_02,false);
  UpdateCachedUniformBuffers(this,this_02);
  if ((char)local_758 != '\0') {
    pFVar18 = TArrayView<FViewInfo_const_,int>::operator[](local_738,0);
    uVar40 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    uVar43 = (uint)pFVar18->_padding_;
    if (uVar43 != uVar40) {
      FVar41.GPUMask = ~uVar43 & uVar40;
    }
    this_01 = (FRHIComputeCommandList *)this_02->_padding_;
    FVar3.GPUMask = *(uint *)&this_01->field_0x29c;
    FRHIComputeCommandList::SetGPUMask(this_01,FVar41);
    pFVar35 = FRDGBuilder::RegisterExternalBuffer
                        (this_02,&(this->CacheManager->PrevBuffers).PhysicalPageLists,None);
    AddCopyBufferPass(this_02,this->PhysicalPageListsRDG,pFVar35);
    FRHIComputeCommandList::SetGPUMask(this_01,FVar3);
  }
  GDumpVSMLightNames = false;
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_4a8 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_4b8);
  }
  return;
}

// CreateDummySamplingParameters @ 1457e1ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVirtualShadowMapSamplingParameters * __cdecl
FVirtualShadowMapArray::CreateDummySamplingParameters
          (FVirtualShadowMapSamplingParameters *__return_storage_ptr__,FRDGBuilder *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  FVirtualShadowMapUniformParameters *pFVar4;
  FRDGTexture *pFVar5;
  FRDGBufferSRV *pFVar6;
  FVirtualShadowMapPerViewParameters *pFVar7;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar8;
  FShaderParametersMetadata *pFVar9;
  EUniformBufferBindingFlags EVar10;
  FVirtualShadowMapPerViewParameters local_48;
  
  pFVar4 = FRDGAllocator::Alloc<FVirtualShadowMapUniformParameters>
                     ((FRDGAllocator *)&param_1->_padding_);
  pFVar4->NumFullShadowMaps = 0;
  pFVar4->NumSinglePageShadowMaps = 0;
  pFVar4->MaxPhysicalPages = 0;
  pFVar4->NumShadowMapSlots = 0;
  pFVar4->StaticCachedArrayIndex = 0;
  pFVar4->StaticHZBArrayIndex = 0;
  pFVar4->bExcludeNonNaniteFromCoarsePages = 0;
  pFVar4->CoarsePagePixelThresholdDynamic = 0.0;
  pFVar4->CoarsePagePixelThresholdStatic = 0.0;
  pFVar4->CoarsePagePixelThresholdDynamicNanite = 0.0;
  pFVar4->MipModeLocal = 0;
  pFVar4->ScreenRayLength = 0.0;
  pFVar4->SceneFrameNumber = 0;
  pFVar4->NormalBias = 0.0;
  pFVar4->SMRTAdaptiveRayCount = 0;
  pFVar4->SMRTRayCountLocal = 0;
  pFVar4->SMRTSamplesPerRayLocal = 0;
  pFVar4->SMRTExtrapolateMaxSlopeLocal = 0.0;
  pFVar4->SMRTTexelDitherScaleLocal = 0.0;
  pFVar4->SMRTMaxSlopeBiasLocal = 0.0;
  pFVar4->SMRTCotMaxRayAngleFromLight = 0.0;
  pFVar4->SMRTRayCountDirectional = 0;
  pFVar4->SMRTSamplesPerRayDirectional = 0;
  pFVar4->SMRTExtrapolateMaxSlopeDirectional = 0.0;
  pFVar4->SMRTTexelDitherScaleDirectional = 0.0;
  pFVar4->SMRTRayLengthScale = 0.0;
  pFVar4->SMRTHairRayCount = 0;
  pFVar4->PageTableSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pFVar5 = FSystemTextures::GetDefaultTexture2D
                     ((FSystemTextures *)&GSystemTextures,param_1,PF_R32_UINT,0xffffffff);
  pFVar4->PageTable = pFVar5;
  local_48.DirectionalLightIds =
       (FRDGBufferSRV *)
       FSystemTextures::GetDefaultByteAddressBuffer
                 ((FSystemTextures *)&GSystemTextures,param_1,0x130);
  local_48.LightGridData._4_4_ = 0;
  local_48.NumCulledLightsGrid._0_4_ = 0xffffffff;
  local_48.MaxLightGridEntryIndex = 0;
  local_48._20_4_ = 0;
  local_48.LightGridData._0_1_ = 0;
  if (((((FRDGBuffer *)local_48.DirectionalLightIds)->Desc).Usage & DrawIndirect) != None) {
    local_48.LightGridData._0_1_ = 0x1c;
  }
  pFVar6 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_48);
  pFVar4->ProjectionData = pFVar6;
  pFVar5 = FSystemTextures::GetDefaultTexture2D
                     ((FSystemTextures *)&GSystemTextures,param_1,PF_R32_UINT,0);
  pFVar4->PageFlags = pFVar5;
  pFVar5 = FSystemTextures::GetDefaultTexture2D
                     ((FSystemTextures *)&GSystemTextures,param_1,PF_R32_UINT,0xffffffff);
  pFVar4->PageReceiverMasks = pFVar5;
  local_48.DirectionalLightIds =
       (FRDGBufferSRV *)
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,0x10)
  ;
  local_48.LightGridData._0_1_ = 0;
  local_48.LightGridData._4_4_ = 0;
  local_48.NumCulledLightsGrid._0_4_ = 0xffffffff;
  local_48.MaxLightGridEntryIndex = 0;
  local_48._20_4_ = 0;
  if (((((FRDGBuffer *)local_48.DirectionalLightIds)->Desc).Usage & DrawIndirect) != None) {
    local_48.LightGridData._0_1_ = 0x1c;
  }
  pFVar6 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_48);
  pFVar4->UncachedPageRectBounds = pFVar6;
  local_48.DirectionalLightIds =
       (FRDGBufferSRV *)
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,0x10)
  ;
  local_48.LightGridData._0_1_ = 0;
  local_48.LightGridData._4_4_ = 0;
  local_48.NumCulledLightsGrid._0_4_ = 0xffffffff;
  local_48.MaxLightGridEntryIndex = 0;
  local_48._20_4_ = 0;
  if (((((FRDGBuffer *)local_48.DirectionalLightIds)->Desc).Usage & DrawIndirect) != None) {
    local_48.LightGridData._0_1_ = 0x1c;
  }
  pFVar6 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_48);
  pFVar4->AllocatedPageRectBounds = pFVar6;
  pFVar7 = MakeEmptyVirtualShadowMapPerViewParameters(&local_48,param_1);
  pFVar6 = pFVar7->NumCulledLightsGrid;
  (pFVar4->PerViewData).LightGridData = pFVar7->LightGridData;
  (pFVar4->PerViewData).NumCulledLightsGrid = pFVar6;
  uVar2 = *(undefined4 *)&pFVar7->field_0x14;
  pFVar6 = pFVar7->DirectionalLightIds;
  (pFVar4->PerViewData).MaxLightGridEntryIndex = pFVar7->MaxLightGridEntryIndex;
  *(undefined4 *)&(pFVar4->PerViewData).field_0x14 = uVar2;
  (pFVar4->PerViewData).DirectionalLightIds = pFVar6;
  uVar2 = *(undefined4 *)&pFVar7->field_0x24;
  uVar1 = *(undefined8 *)&pFVar7->field_0x28;
  (pFVar4->PerViewData).DirectionalLightIdCount = pFVar7->DirectionalLightIdCount;
  *(undefined4 *)&(pFVar4->PerViewData).field_0x24 = uVar2;
  *(undefined8 *)&(pFVar4->PerViewData).field_0x28 = uVar1;
  local_48.DirectionalLightIds =
       (FRDGBufferSRV *)
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
  local_48.LightGridData._0_1_ = 0;
  local_48.LightGridData._4_4_ = 0;
  local_48.NumCulledLightsGrid._0_4_ = 0xffffffff;
  local_48.MaxLightGridEntryIndex = 0;
  local_48._20_4_ = 0;
  if (((((FRDGBuffer *)local_48.DirectionalLightIds)->Desc).Usage & DrawIndirect) != None) {
    local_48.LightGridData._0_1_ = 0x1c;
  }
  pFVar6 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_48);
  uVar3 = _UNK_15076b1f8;
  uVar1 = ___xmm_3f8000003f8000003f8000003f800000;
  pFVar4->CachePrimitiveAsDynamic = pFVar6;
  (pFVar4->PhysicalPoolSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (pFVar4->PhysicalPoolSizePages).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  pFVar4->PhysicalPageRowMask = 0;
  pFVar4->PhysicalPageRowShift = 0;
  *(undefined8 *)&(pFVar4->RecPhysicalPoolSize).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(pFVar4->RecPhysicalPoolSize).field0_0x0 + 8) = uVar3;
  pFVar4->GlobalResolutionLodBias = 0.0;
  pFVar4->PageTableRowShift = 0;
  pFVar4->PageTableRowMask = 0;
  *(undefined8 *)&(pFVar4->PageTableTextureSizeInvSize).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(pFVar4->PageTableTextureSizeInvSize).field0_0x0 + 8) = uVar3;
  pFVar4->PackedShadowMaskMaxLightCount = 0;
  *(undefined8 *)&(pFVar4->PageReceiverMaskTextureSizeInvSize).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(pFVar4->PageReceiverMaskTextureSizeInvSize).field0_0x0 + 8) = uVar3;
  pFVar4->StaticHZBArrayIndex = 0;
  pFVar5 = FSystemTextures::GetZeroUIntArrayAtomicCompatDummy
                     ((FSystemTextures *)&GSystemTextures,param_1);
  pFVar4->PhysicalPagePool = pFVar5;
  pTVar8 = FRDGBuilder::CreateUniformBuffer<FVirtualShadowMapUniformParameters>(param_1,pFVar4);
  pFVar9 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
   &__return_storage_ptr__->VirtualShadowMap = pTVar8;
  EVar10 = Static;
  if (pFVar9->BindingFlags != StaticAndShader) {
    EVar10 = pFVar9->BindingFlags;
  }
  (__return_storage_ptr__->VirtualShadowMap).field_0x8 = EVar10;
  return __return_storage_ptr__;
}

// CreateMipViews @ 1457e1fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::CreateMipViews
          (FVirtualShadowMapArray *this,
          TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_a8;
  longlong local_a0;
  longlong local_80;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4692,"CreateMipViews",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
               ,0x1254);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4692);
  }
  iVar1 = param_1->ArrayNum;
  iVar10 = UE::Core::Private::
           ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_>
                     (0x3d0,0x10,iVar1 * 7,&param_1->AllocatorInstance,&param_1->ArrayNum,
                      &param_1->ArrayMax);
  DefaultConstructItems<Nanite::FPackedView,int>
            ((param_1->AllocatorInstance).Data + iVar10,iVar1 * 7);
  uVar6 = _UNK_151030658;
  uVar5 = ___xmm_c1f8000041f800004200000042000000;
  fVar4 = __real_3f800000;
  local_a8 = 0;
  if (0 < iVar1) {
    local_80 = 0;
    local_a0 = (longlong)iVar1 * 0x3d0;
    do {
      uVar16 = 0;
      if ((int)local_a8 < param_1->ArrayNum) {
        uVar16 = ~local_a8 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar17 = (undefined8 *)
                ((longlong)(((param_1->AllocatorInstance).Data)->SVPositionToTranslatedWorld).M[0] +
                local_80);
      if (((*(int *)(puVar17 + 0x6c) < 0) || (this->NumShadowMapSlots <= *(int *)(puVar17 + 0x6c)))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("PrimaryView.TargetLayerIdX_AndMipLevelY_AndNumMipLevelsZ.X >= 0 && PrimaryView.TargetLayerIdX_AndMipLevelY_AndNumMipLevelsZ.X < GetNumShadowMapSlots()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                                ,0x1265,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(int *)((longlong)puVar17 + 0x364) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrimaryView.TargetLayerIdX_AndMipLevelY_AndNumMipLevelsZ.Y == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                             ,0x1266,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((((int)*(uint *)(puVar17 + 0x6d) < 1) || (8 < *(uint *)(puVar17 + 0x6d))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrimaryView.TargetLayerIdX_AndMipLevelY_AndNumMipLevelsZ.Z > 0 && PrimaryView.TargetLayerIdX_AndMipLevelY_AndNumMipLevelsZ.Z <= FVirtualShadowMap::MaxMipLevels"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                             ,0x1267,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(int *)(puVar17 + 0x50) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrimaryView.ViewRect.X == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                             ,0x1268,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(int *)((longlong)puVar17 + 0x284) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrimaryView.ViewRect.Y == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                             ,0x1269,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(int *)(puVar17 + 0x51) != 0x4000) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrimaryView.ViewRect.Z == FVirtualShadowMap::VirtualMaxResolutionXY",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                             ,0x126a,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(int *)((longlong)puVar17 + 0x28c) != 0x4000) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrimaryView.ViewRect.W == FVirtualShadowMap::VirtualMaxResolutionXY",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                             ,0x126b,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)((longlong)puVar17 + 0x35c) = *(uint *)((longlong)puVar17 + 0x35c) & 0xfffffffc;
      iVar19 = 1;
      iVar10 = *(int *)(puVar17 + 0x6d);
      puVar17[0x54] = uVar5;
      puVar17[0x55] = uVar6;
      if (1 < iVar10) {
        lVar15 = local_a0;
        uVar20 = 2;
        uVar16 = local_a8;
        do {
          uVar16 = uVar16 + iVar1;
          uVar11 = 0;
          if ((int)uVar16 < param_1->ArrayNum) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar18 = (undefined8 *)
                    ((longlong)
                     (((param_1->AllocatorInstance).Data)->SVPositionToTranslatedWorld).M[0] +
                    lVar15);
          lVar14 = 7;
          puVar7 = puVar18;
          puVar8 = puVar17;
          do {
            puVar13 = puVar8;
            puVar12 = puVar7;
            uVar3 = puVar13[1];
            *puVar12 = *puVar13;
            puVar12[1] = uVar3;
            uVar3 = puVar13[3];
            puVar12[2] = puVar13[2];
            puVar12[3] = uVar3;
            uVar3 = puVar13[5];
            puVar12[4] = puVar13[4];
            puVar12[5] = uVar3;
            uVar3 = puVar13[7];
            puVar12[6] = puVar13[6];
            puVar12[7] = uVar3;
            uVar3 = puVar13[9];
            puVar12[8] = puVar13[8];
            puVar12[9] = uVar3;
            uVar3 = puVar13[0xb];
            puVar12[10] = puVar13[10];
            puVar12[0xb] = uVar3;
            uVar3 = puVar13[0xd];
            puVar12[0xc] = puVar13[0xc];
            puVar12[0xd] = uVar3;
            uVar3 = puVar13[0xf];
            puVar12[0xe] = puVar13[0xe];
            puVar12[0xf] = uVar3;
            lVar14 = lVar14 + -1;
            puVar7 = puVar12 + 0x10;
            puVar8 = puVar13 + 0x10;
          } while (lVar14 != 0);
          uVar3 = puVar13[0x11];
          lVar15 = lVar15 + (longlong)iVar1 * 0x3d0;
          puVar12[0x10] = puVar13[0x10];
          puVar12[0x11] = uVar3;
          uVar3 = puVar13[0x13];
          puVar12[0x12] = puVar13[0x12];
          puVar12[0x13] = uVar3;
          uVar3 = puVar13[0x15];
          puVar12[0x14] = puVar13[0x14];
          puVar12[0x15] = uVar3;
          uVar3 = puVar13[0x17];
          puVar12[0x16] = puVar13[0x16];
          puVar12[0x17] = uVar3;
          uVar3 = puVar13[0x19];
          puVar12[0x18] = puVar13[0x18];
          puVar12[0x19] = uVar3;
          *(int *)((longlong)puVar18 + 0x364) = iVar19;
          uVar11 = 0x4000 >> ((byte)iVar19 & 0x1f);
          iVar19 = iVar19 + 1;
          fVar22 = (float)(int)uVar11;
          *(float *)(puVar18 + 0x52) = fVar22;
          *(float *)((longlong)puVar18 + 0x294) = fVar22;
          *(float *)(puVar18 + 0x53) = fVar4 / fVar22;
          *(float *)((longlong)puVar18 + 0x29c) = fVar4 / fVar22;
          puVar18[0x50] = 0;
          *(uint *)(puVar18 + 0x51) = uVar11;
          *(uint *)((longlong)puVar18 + 0x28c) = uVar11;
          puVar18[0x6e] = puVar18[0x50];
          puVar18[0x6f] = puVar18[0x51];
          fVar23 = fVar4 / (float)(int)uVar20;
          puVar18[0x6a] =
               CONCAT44(fVar23 * *(float *)((longlong)puVar17 + 0x354),
                        fVar23 * *(float *)(puVar17 + 0x6a));
          fVar22 = *(float *)(puVar17 + 0x54);
          *(float *)(puVar18 + 0x54) = fVar23 * fVar22;
          fVar24 = fVar23 * *(float *)((longlong)puVar17 + 0x2a4);
          *(float *)(puVar18 + 0x55) = fVar23 * fVar22 - fVar4;
          *(float *)((longlong)puVar18 + 0x2a4) = fVar24;
          *(float *)((longlong)puVar18 + 0x2ac) = fVar4 - fVar24;
          uVar20 = uVar20 << 1 | (uint)((int)uVar20 < 0);
        } while (iVar19 < iVar10);
      }
      local_a8 = local_a8 + 1;
      local_a0 = local_a0 + 0x3d0;
      local_80 = local_80 + 0x3d0;
    } while ((int)local_a8 < iVar1);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetHZBPhysicalPoolSize @ 1457f4ad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntPoint<int> __thiscall
FVirtualShadowMapArray::GetHZBPhysicalPoolSize(FVirtualShadowMapArray *this)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TIntPoint<int> TVar6;
  int iVar7;
  uint uVar8;
  TIntPoint<int>_u_0 in_RDX;
  uint uVar9;
  uint uVar10;
  
  if (this->bInitialized == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x427,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      TVar6.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar4)();
      return (TIntPoint<int>)TVar6.field0_0x0;
    }
  }
  if (this->bInitialized == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x421,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      TVar6.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar4)();
      return (TIntPoint<int>)TVar6.field0_0x0;
    }
  }
  iVar2 = (this->UniformParameters).PhysicalPoolSize.field0_0x0._s_0.Y;
  iVar7 = 1;
  if (iVar2 != 0) {
    iVar7 = iVar2;
  }
  uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar2 = (this->UniformParameters).PhysicalPoolSize.field0_0x0._s_0.X;
  uVar9 = (uint)(1 << ((byte)lVar3 & 0x1f)) >> 1;
  iVar7 = 1;
  if (iVar2 != 0) {
    iVar7 = iVar2;
  }
  uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar8 = (uint)(1 << ((byte)lVar3 & 0x1f)) >> 1;
  uVar10 = 1;
  if (1 < uVar8) {
    uVar10 = uVar8;
  }
  *(uint *)in_RDX = uVar10;
  uVar10 = 1;
  if (1 < uVar9) {
    uVar10 = uVar9;
  }
  *(uint *)((longlong)in_RDX + 4) = uVar10;
  return (TIntPoint<int>)in_RDX;
}

// GetMarkingParameters @ 1457f4cd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVirtualShadowMapMarkingParameters * __thiscall
FVirtualShadowMapArray::GetMarkingParameters
          (FVirtualShadowMapArray *this,FVirtualShadowMapMarkingParameters *__return_storage_ptr__,
          FRDGBuilder *param_1,int param_2)

{
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar1;
  FShaderParametersMetadata *pFVar2;
  FRDGTextureUAV *pFVar3;
  EUniformBufferBindingFlags EVar4;
  FRDGTextureUAVDesc local_28;
  
  (__return_storage_ptr__->VirtualShadowMap).field_0x8 = 1;
  *(undefined8 *)&__return_storage_ptr__->VirtualShadowMap = 0;
  __return_storage_ptr__->OutPageRequestFlags = (FRDGTextureUAV *)0x0;
  __return_storage_ptr__->OutPageReceiverMasks = (FRDGTextureUAV *)0x0;
  pTVar1 = GetUniformBuffer(this,param_2);
  pFVar2 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  EVar4 = Static;
  if (pFVar2->BindingFlags != StaticAndShader) {
    EVar4 = pFVar2->BindingFlags;
  }
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
   &__return_storage_ptr__->VirtualShadowMap = pTVar1;
  *(ulonglong *)&(__return_storage_ptr__->VirtualShadowMap).field_0x8 =
       CONCAT71(local_28._padding_._1_7_,EVar4);
  local_28.Texture = this->PageRequestFlagsRDG;
  local_28._padding_._7_1_ = (undefined1)((ulonglong)pTVar1 >> 0x38);
  local_28._padding_._0_7_ = (uint7)(byte)((local_28.Texture)->Desc).field_0x34;
  local_28._padding_._0_1_ = 0;
  pFVar3 = FRDGBuilder::CreateUAV(param_1,&local_28,None);
  __return_storage_ptr__->OutPageRequestFlags = pFVar3;
  local_28.Texture = this->PageReceiverMasksRDG;
  local_28._padding_._0_7_ = (uint7)(byte)((local_28.Texture)->Desc).field_0x34;
  local_28._padding_._0_1_ = 0;
  pFVar3 = FRDGBuilder::CreateUAV(param_1,&local_28,None);
  __return_storage_ptr__->OutPageReceiverMasks = pFVar3;
  return __return_storage_ptr__;
}

// GetPackedShadowMaskFormat @ 1457f4ef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EPixelFormat __thiscall
FVirtualShadowMapArray::GetPackedShadowMaskFormat(FVirtualShadowMapArray *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EPixelFormat EVar4;
  
  if (this->bInitialized == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x40e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  uVar1 = (this->UniformParameters).PackedShadowMaskMaxLightCount;
  if (uVar1 < 9) {
    return PF_R32_UINT;
  }
  if (uVar1 < 0x11) {
    return PF_R32G32_UINT;
  }
  if (0x20 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformParameters.PackedShadowMaskMaxLightCount <= 32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x41a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return PF_R32G32B32A32_UINT;
}

// GetPhysicalPoolSize @ 1457f4f90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntPoint<int> __thiscall FVirtualShadowMapArray::GetPhysicalPoolSize(FVirtualShadowMapArray *this)

{
  code *pcVar1;
  bool bVar2;
  TIntPoint<int> TVar3;
  TIntPoint<int>_u_0 in_RDX;
  
  if (this->bInitialized == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x421,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
      return (TIntPoint<int>)TVar3.field0_0x0;
    }
  }
  *(int *)in_RDX = (this->UniformParameters).PhysicalPoolSize.field0_0x0._s_0.X;
  *(int *)((longlong)in_RDX + 4) = (this->UniformParameters).PhysicalPoolSize.field0_0x0._s_0.Y;
  return (TIntPoint<int>)in_RDX;
}

// GetSamplingParameters @ 1457f5300

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVirtualShadowMapSamplingParameters * __thiscall
FVirtualShadowMapArray::GetSamplingParameters
          (FVirtualShadowMapArray *this,FVirtualShadowMapSamplingParameters *__return_storage_ptr__,
          FRDGBuilder *param_1,int param_2)

{
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar1;
  FShaderParametersMetadata *pFVar2;
  EUniformBufferBindingFlags EVar3;
  
  pTVar1 = GetUniformBuffer(this,param_2);
  pFVar2 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
   &__return_storage_ptr__->VirtualShadowMap = pTVar1;
  EVar3 = Static;
  if (pFVar2->BindingFlags != StaticAndShader) {
    EVar3 = pFVar2->BindingFlags;
  }
  (__return_storage_ptr__->VirtualShadowMap).field_0x8 = EVar3;
  return __return_storage_ptr__;
}

// GetTotalAllocatedPhysicalPages @ 145800380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall FVirtualShadowMapArray::GetTotalAllocatedPhysicalPages(FVirtualShadowMapArray *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (this->bInitialized == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x430,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = (this->UniformParameters).MaxPhysicalPages;
  uVar4 = uVar3 * 2;
  if ((this->UniformParameters).StaticCachedArrayIndex == 0) {
    uVar4 = uVar3;
  }
  return uVar4;
}

// GetUncachedUniformBuffer @ 1458006e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGUniformBuffer<FVirtualShadowMapUniformParameters> * __thiscall
FVirtualShadowMapArray::GetUncachedUniformBuffer(FVirtualShadowMapArray *this,FRDGBuilder *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  TIntPoint<int>_u_0 TVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  FVirtualShadowMapUniformParameters *pFVar13;
  FVirtualShadowMapUniformParameters *pFVar14;
  FVirtualShadowMapUniformParameters *pFVar15;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar16;
  FVirtualShadowMapUniformParameters *pFVar17;
  FVirtualShadowMapUniformParameters *pFVar18;
  longlong lVar19;
  
  pFVar15 = FRDGAllocator::Alloc<FVirtualShadowMapUniformParameters>
                      ((FRDGAllocator *)&param_1->_padding_);
  lVar19 = 2;
  pFVar13 = &this->UniformParameters;
  pFVar14 = pFVar15;
  do {
    pFVar18 = pFVar14;
    pFVar17 = pFVar13;
    uVar4 = pFVar17->NumSinglePageShadowMaps;
    uVar5 = pFVar17->MaxPhysicalPages;
    uVar6 = pFVar17->NumShadowMapSlots;
    pFVar18->NumFullShadowMaps = pFVar17->NumFullShadowMaps;
    pFVar18->NumSinglePageShadowMaps = uVar4;
    pFVar18->MaxPhysicalPages = uVar5;
    pFVar18->NumShadowMapSlots = uVar6;
    uVar4 = pFVar17->StaticHZBArrayIndex;
    uVar5 = pFVar17->PhysicalPageRowMask;
    uVar6 = pFVar17->PhysicalPageRowShift;
    pFVar18->StaticCachedArrayIndex = pFVar17->StaticCachedArrayIndex;
    pFVar18->StaticHZBArrayIndex = uVar4;
    pFVar18->PhysicalPageRowMask = uVar5;
    pFVar18->PhysicalPageRowShift = uVar6;
    uVar7 = *(undefined4 *)&pFVar17->field_0x24;
    lVar1 = pFVar17->_padding_;
    pFVar18->PackedShadowMaskMaxLightCount = pFVar17->PackedShadowMaskMaxLightCount;
    *(undefined4 *)&pFVar18->field_0x24 = uVar7;
    pFVar18->_padding_ = lVar1;
    uVar2 = *(undefined8 *)((longlong)&(pFVar17->RecPhysicalPoolSize).field0_0x0 + 8);
    *(undefined8 *)&(pFVar18->RecPhysicalPoolSize).field0_0x0 =
         *(undefined8 *)&(pFVar17->RecPhysicalPoolSize).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar18->RecPhysicalPoolSize).field0_0x0 + 8) = uVar2;
    TVar3 = (pFVar17->PhysicalPoolSizePages).field0_0x0;
    (pFVar18->PhysicalPoolSize).field0_0x0 = (pFVar17->PhysicalPoolSize).field0_0x0;
    (pFVar18->PhysicalPoolSizePages).field0_0x0 = TVar3;
    uVar4 = pFVar17->PageTableRowMask;
    lVar1 = pFVar17->_padding_;
    pFVar18->PageTableRowShift = pFVar17->PageTableRowShift;
    pFVar18->PageTableRowMask = uVar4;
    pFVar18->_padding_ = lVar1;
    uVar2 = *(undefined8 *)((longlong)&(pFVar17->PageTableTextureSizeInvSize).field0_0x0 + 8);
    *(undefined8 *)&(pFVar18->PageTableTextureSizeInvSize).field0_0x0 =
         *(undefined8 *)&(pFVar17->PageTableTextureSizeInvSize).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar18->PageTableTextureSizeInvSize).field0_0x0 + 8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)&(pFVar17->PageReceiverMaskTextureSizeInvSize).field0_0x0 + 8)
    ;
    *(undefined8 *)&(pFVar18->PageReceiverMaskTextureSizeInvSize).field0_0x0 =
         *(undefined8 *)&(pFVar17->PageReceiverMaskTextureSizeInvSize).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar18->PageReceiverMaskTextureSizeInvSize).field0_0x0 + 8) = uVar2
    ;
    lVar19 = lVar19 + -1;
    pFVar13 = (FVirtualShadowMapUniformParameters *)&pFVar17->bExcludeNonNaniteFromCoarsePages;
    pFVar14 = (FVirtualShadowMapUniformParameters *)&pFVar18->bExcludeNonNaniteFromCoarsePages;
  } while (lVar19 != 0);
  fVar8 = pFVar17->CoarsePagePixelThresholdDynamic;
  fVar9 = pFVar17->CoarsePagePixelThresholdStatic;
  fVar10 = pFVar17->CoarsePagePixelThresholdDynamicNanite;
  pFVar18->bExcludeNonNaniteFromCoarsePages = pFVar17->bExcludeNonNaniteFromCoarsePages;
  pFVar18->CoarsePagePixelThresholdDynamic = fVar8;
  pFVar18->CoarsePagePixelThresholdStatic = fVar9;
  pFVar18->CoarsePagePixelThresholdDynamicNanite = fVar10;
  fVar8 = pFVar17->GlobalResolutionLodBias;
  iVar11 = pFVar17->MipModeLocal;
  fVar9 = pFVar17->ScreenRayLength;
  pFVar18->SceneFrameNumber = pFVar17->SceneFrameNumber;
  pFVar18->GlobalResolutionLodBias = fVar8;
  pFVar18->MipModeLocal = iVar11;
  pFVar18->ScreenRayLength = fVar9;
  uVar4 = pFVar17->SMRTAdaptiveRayCount;
  iVar11 = pFVar17->SMRTRayCountLocal;
  iVar12 = pFVar17->SMRTSamplesPerRayLocal;
  pFVar18->NormalBias = pFVar17->NormalBias;
  pFVar18->SMRTAdaptiveRayCount = uVar4;
  pFVar18->SMRTRayCountLocal = iVar11;
  pFVar18->SMRTSamplesPerRayLocal = iVar12;
  fVar8 = pFVar17->SMRTTexelDitherScaleLocal;
  fVar9 = pFVar17->SMRTMaxSlopeBiasLocal;
  fVar10 = pFVar17->SMRTCotMaxRayAngleFromLight;
  pFVar18->SMRTExtrapolateMaxSlopeLocal = pFVar17->SMRTExtrapolateMaxSlopeLocal;
  pFVar18->SMRTTexelDitherScaleLocal = fVar8;
  pFVar18->SMRTMaxSlopeBiasLocal = fVar9;
  pFVar18->SMRTCotMaxRayAngleFromLight = fVar10;
  iVar11 = pFVar17->SMRTSamplesPerRayDirectional;
  fVar8 = pFVar17->SMRTExtrapolateMaxSlopeDirectional;
  fVar9 = pFVar17->SMRTTexelDitherScaleDirectional;
  pFVar18->SMRTRayCountDirectional = pFVar17->SMRTRayCountDirectional;
  pFVar18->SMRTSamplesPerRayDirectional = iVar11;
  pFVar18->SMRTExtrapolateMaxSlopeDirectional = fVar8;
  pFVar18->SMRTTexelDitherScaleDirectional = fVar9;
  pTVar16 = FRDGBuilder::CreateUniformBuffer<FVirtualShadowMapUniformParameters>(param_1,pFVar15);
  return pTVar16;
}

// GetUniformBuffer @ 1458007b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRDGUniformBuffer<FVirtualShadowMapUniformParameters> * __thiscall
FVirtualShadowMapArray::GetUniformBuffer(FVirtualShadowMapArray *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar6;
  
  iVar1 = (this->CachedUniformBuffers).ArrayNum;
  if (iVar1 == 0) {
    return (TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *)0x0;
  }
  uVar3 = iVar1 - 1U;
  if (param_1 < (int)(iVar1 - 1U)) {
    uVar3 = param_1;
  }
  uVar5 = 0;
  if ((int)uVar3 < iVar1) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
          ((this->CachedUniformBuffers).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
}

// Initialize @ 145801410

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::Initialize
          (FVirtualShadowMapArray *this,FRDGBuilder *param_1,
          FVirtualShadowMapArrayCacheManager *param_2,bool param_3,FEngineShowFlags *param_4)

{
  longlong *plVar1;
  TRefCountPtr<IPooledRenderTarget> *pTVar2;
  ulonglong uVar3;
  FGenericStaticFeatureLevel FVar4;
  FVirtualShadowMapArrayCacheManager *pFVar5;
  IPooledRenderTarget *pIVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 uVar9;
  TIntPoint<int>_u_0 TVar10;
  TIntPoint<int>_u_0 TVar11;
  undefined4 uVar12;
  longlong lVar13;
  float fVar14;
  TConsoleVariableData<int> *pTVar15;
  TConsoleVariableData<int> *pTVar16;
  TConsoleVariableData<float> *pTVar17;
  bool bVar18;
  bool bVar19;
  EShaderPlatform EVar20;
  uint uVar21;
  uint uVar22;
  FRDGTexture *pFVar23;
  FRDGBufferSRV *pFVar24;
  FVirtualShadowMapPerViewParameters *pFVar25;
  FVirtualShadowMapVisualizationData *pFVar26;
  FRDGBuffer *pFVar27;
  TRefCountPtr<IPooledRenderTarget> TVar28;
  FRDGTexture *pFVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  float fVar35;
  TRefCountPtr<IPooledRenderTarget> local_130;
  TRefCountPtr<FRDGPooledBuffer> local_128;
  undefined1 local_120 [12];
  undefined4 local_114;
  undefined4 local_110;
  longlong local_108;
  FRDGBuffer *local_100;
  FRDGBufferSRVDesc local_f8;
  FRDGBufferSRVDesc local_d8;
  FRDGBufferSRVDesc local_b8;
  FRDGBufferSRVDesc local_98;
  FVirtualShadowMapPerViewParameters local_78;
  
  this->bInitialized = true;
  this->bEnabled = param_3;
  this->CacheManager = param_2;
  FVar4.FeatureLevel = *(Type *)&this->Scene->field_0x8;
  EVar20 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->Scene);
  bVar18 = UseVirtualShadowMaps(EVar20,FVar4);
  pTVar15 = CVarCullBackfacingPixels.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this->bCullBackfacingPixels = pTVar15->ShadowedValue[1] != 0;
  pTVar15 = CVarShadowsVirtualUseHZB.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar34 = pTVar15->ShadowedValue[1];
  pFVar29 = (FRDGTexture *)0x0;
  (this->UniformParameters).NumFullShadowMaps = 0;
  (this->UniformParameters).NumSinglePageShadowMaps = 0;
  (this->UniformParameters).MaxPhysicalPages = 0;
  (this->UniformParameters).NumShadowMapSlots = 0;
  (this->UniformParameters).StaticCachedArrayIndex = 0;
  (this->UniformParameters).StaticHZBArrayIndex = 0;
  this->bUseHzbOcclusion = iVar34 != 0;
  pTVar15 = CVarCoarsePagesIncludeNonNanite.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).bExcludeNonNaniteFromCoarsePages =
       (uint)(pTVar15->ShadowedValue[1] == 0);
  pTVar17 = CVarCoarsePagePixelThresholdDynamic.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).CoarsePagePixelThresholdDynamic = pTVar17->ShadowedValue[1];
  pTVar17 = CVarCoarsePagePixelThresholdStatic.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).CoarsePagePixelThresholdStatic = pTVar17->ShadowedValue[1];
  pTVar17 = CVarCoarsePagePixelThresholdDynamicNanite.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).CoarsePagePixelThresholdDynamicNanite = pTVar17->ShadowedValue[1];
  pTVar15 = CVarMarkPixelPagesMipModeLocal.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).MipModeLocal = pTVar15->ShadowedValue[1];
  (this->UniformParameters).SceneFrameNumber = this->Scene->SceneFrameNumberRenderThread;
  pTVar17 = CVarScreenRayLength.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).ScreenRayLength = pTVar17->ShadowedValue[1];
  pTVar17 = CVarNormalBias.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).NormalBias = pTVar17->ShadowedValue[1] * __real_3a83126f;
  pTVar15 = CVarSMRTAdaptiveRayCount.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTAdaptiveRayCount = pTVar15->ShadowedValue[1];
  pTVar15 = CVarSMRTRayCountLocal.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTRayCountLocal = pTVar15->ShadowedValue[1];
  pTVar15 = CVarSMRTSamplesPerRayLocal.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTSamplesPerRayLocal = pTVar15->ShadowedValue[1];
  pTVar17 = CVarSMRTExtrapolateMaxSlopeLocal.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTExtrapolateMaxSlopeLocal = pTVar17->ShadowedValue[1];
  pTVar17 = CVarSMRTTexelDitherScaleLocal.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTTexelDitherScaleLocal = pTVar17->ShadowedValue[1];
  pTVar17 = CVarSMRTMaxSlopeBiasLocal.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTMaxSlopeBiasLocal = pTVar17->ShadowedValue[1];
  pTVar17 = CVarSMRTMaxRayAngleFromLight.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar35 = tanf(pTVar17->ShadowedValue[1]);
  fVar14 = __real_3f800000;
  (this->UniformParameters).SMRTCotMaxRayAngleFromLight = __real_3f800000 / fVar35;
  pTVar15 = CVarSMRTRayCountDirectional.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTRayCountDirectional = pTVar15->ShadowedValue[1];
  pTVar15 = CVarSMRTSamplesPerRayDirectional.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTSamplesPerRayDirectional = pTVar15->ShadowedValue[1];
  pTVar17 = CVarSMRTExtrapolateMaxSlopeDirectional.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTExtrapolateMaxSlopeDirectional = pTVar17->ShadowedValue[1];
  pTVar17 = CVarSMRTTexelDitherScaleDirectional.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTTexelDitherScaleDirectional = pTVar17->ShadowedValue[1];
  pTVar17 = CVarSMRTRayLengthScaleDirectional.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTRayLengthScale = pTVar17->ShadowedValue[1];
  pTVar15 = CVarSMRTRayCountHair.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->UniformParameters).SMRTHairRayCount = pTVar15->ShadowedValue[1];
  (this->UniformParameters).PageTableSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pFVar23 = FSystemTextures::GetDefaultTexture2D
                      ((FSystemTextures *)&GSystemTextures,param_1,PF_R32_UINT,0xffffffff);
  (this->UniformParameters).PageTable = pFVar23;
  local_100 = FSystemTextures::GetDefaultByteAddressBuffer
                        ((FSystemTextures *)&GSystemTextures,param_1,0x130);
  local_114 = 0;
  local_110 = 0xffffffff;
  local_108 = 0;
  local_120[8] = 0;
  if (((local_100->Desc).Usage & DrawIndirect) != None) {
    local_120[8] = 0x1c;
  }
  pFVar24 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)(local_120 + 8));
  (this->UniformParameters).ProjectionData = pFVar24;
  pFVar23 = FSystemTextures::GetDefaultTexture2D
                      ((FSystemTextures *)&GSystemTextures,param_1,PF_R32_UINT,0);
  (this->UniformParameters).PageFlags = pFVar23;
  pFVar23 = FSystemTextures::GetDefaultTexture2D
                      ((FSystemTextures *)&GSystemTextures,param_1,PF_R32_UINT,0xffffffff);
  (this->UniformParameters).PageReceiverMasks = pFVar23;
  local_f8.Buffer =
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,0x10)
  ;
  local_f8._padding_._0_1_ = 0;
  local_f8._padding_._4_4_ = 0;
  local_f8._padding_._0_4_ = 0xffffffff;
  local_f8._padding_ = 0;
  if ((((local_f8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_f8._padding_._0_1_ = 0x1c;
  }
  pFVar24 = FRDGBuilder::CreateSRV(param_1,&local_f8);
  (this->UniformParameters).UncachedPageRectBounds = pFVar24;
  local_d8.Buffer =
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,0x10)
  ;
  local_d8._padding_._0_1_ = 0;
  local_d8._padding_._4_4_ = 0;
  local_d8._padding_._0_4_ = 0xffffffff;
  local_d8._padding_ = 0;
  if ((((local_d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_d8._padding_._0_1_ = 0x1c;
  }
  pFVar24 = FRDGBuilder::CreateSRV(param_1,&local_d8);
  (this->UniformParameters).AllocatedPageRectBounds = pFVar24;
  pFVar25 = MakeEmptyVirtualShadowMapPerViewParameters(&local_78,param_1);
  pFVar24 = pFVar25->NumCulledLightsGrid;
  (this->UniformParameters).PerViewData.LightGridData = pFVar25->LightGridData;
  (this->UniformParameters).PerViewData.NumCulledLightsGrid = pFVar24;
  uVar12 = *(undefined4 *)&pFVar25->field_0x14;
  pFVar24 = pFVar25->DirectionalLightIds;
  (this->UniformParameters).PerViewData.MaxLightGridEntryIndex = pFVar25->MaxLightGridEntryIndex;
  *(undefined4 *)&(this->UniformParameters).PerViewData.field_0x14 = uVar12;
  (this->UniformParameters).PerViewData.DirectionalLightIds = pFVar24;
  uVar12 = *(undefined4 *)&pFVar25->field_0x24;
  uVar9 = *(undefined8 *)&pFVar25->field_0x28;
  (this->UniformParameters).PerViewData.DirectionalLightIdCount = pFVar25->DirectionalLightIdCount;
  *(undefined4 *)&(this->UniformParameters).PerViewData.field_0x24 = uVar12;
  *(undefined8 *)&(this->UniformParameters).PerViewData.field_0x28 = uVar9;
  local_b8.Buffer =
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
  local_b8._padding_._0_1_ = 0;
  local_b8._padding_._4_4_ = 0;
  local_b8._padding_._0_4_ = 0xffffffff;
  local_b8._padding_ = 0;
  if ((((local_b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_b8._padding_._0_1_ = 0x1c;
  }
  pFVar24 = FRDGBuilder::CreateSRV(param_1,&local_b8);
  (this->UniformParameters).CachePrimitiveAsDynamic = pFVar24;
  if (bVar18) {
    this->NumShadowMapSlots = 0x2000;
    uVar33 = (uint)GRHIGlobals.MaxTextureDimensions.Value >> 7;
    if (((uVar33 & uVar33 - 1) != 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("FMath::IsPowerOfTwo(PhysicalPagesX)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                            ,0x379,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar15 = CVarMaxPhysicalPages.Ref;
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar34 = pTVar15->ShadowedValue[1];
    if (pTVar15->ShadowedValue[1] < 1) {
      iVar34 = 1;
    }
    uVar21 = (iVar34 + -1 + uVar33) / uVar33;
    (this->UniformParameters).MaxPhysicalPages = uVar21 * uVar33;
    pTVar15 = CVarCacheVirtualSMs.Ref;
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar16 = CVarBuildDynamicHZB.Ref;
    if (pTVar15->ShadowedValue[1] != 0) {
      bVar18 = IsInParallelRenderingThread();
      if ((!bVar18) &&
         (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (pTVar16->ShadowedValue[1] != 0) {
        (this->UniformParameters).StaticHZBArrayIndex = 1;
      }
      (this->UniformParameters).StaticCachedArrayIndex = 1;
    }
    uVar31 = uVar21 << 7;
    uVar32 = uVar33 << 7;
    if (((uint)GRHIGlobals.MaxTextureDimensions.Value < uVar32) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("PhysicalX <= GetMax2DTextureDimension()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                            ,0x392,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((uint)GRHIGlobals.MaxTextureDimensions.Value < uVar31) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("PhysicalY <= GetMax2DTextureDimension()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                            ,0x393,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar7 = 0x1f;
    if (uVar33 != 0) {
      for (; uVar33 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    (this->UniformParameters).PhysicalPageRowMask = uVar33 - 1;
    uVar22 = 0;
    if (uVar33 != 0) {
      uVar22 = uVar7;
    }
    (this->UniformParameters).PhysicalPageRowShift = uVar22;
    (this->UniformParameters).RecPhysicalPoolSize.field0_0x0._s_0.X = fVar14 / (float)uVar32;
    TVar10._s_0.Y = uVar31;
    TVar10._s_0.X = uVar32;
    (this->UniformParameters).RecPhysicalPoolSize.field0_0x0._s_0.Y = fVar14 / (float)uVar31;
    (this->UniformParameters).RecPhysicalPoolSize.field0_0x0._s_0.Z = 1.0;
    (this->UniformParameters).RecPhysicalPoolSize.field0_0x0._s_0.W = 1.0;
    pFVar5 = this->CacheManager;
    (this->UniformParameters).PhysicalPoolSize.field0_0x0 = TVar10;
    TVar11._s_0.Y = uVar21;
    TVar11._s_0.X = uVar33;
    (this->UniformParameters).PhysicalPoolSizePages.field0_0x0 = TVar11;
    (this->UniformParameters).GlobalResolutionLodBias = pFVar5->GlobalResolutionLodBias;
    (this->UniformParameters).PageTableRowMask = (pFVar5->PrevUniformParameters).PageTableRowMask;
    (this->UniformParameters).PageTableRowShift = (pFVar5->PrevUniformParameters).PageTableRowShift;
    uVar9 = *(undefined8 *)
             ((longlong)&(pFVar5->PrevUniformParameters).PageTableTextureSizeInvSize.field0_0x0 + 8)
    ;
    *(undefined8 *)&(this->UniformParameters).PageTableTextureSizeInvSize.field0_0x0 =
         *(undefined8 *)&(pFVar5->PrevUniformParameters).PageTableTextureSizeInvSize.field0_0x0;
    *(undefined8 *)((longlong)&(this->UniformParameters).PageTableTextureSizeInvSize.field0_0x0 + 8)
         = uVar9;
    uVar9 = *(undefined8 *)
             ((longlong)
              &(pFVar5->PrevUniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0 + 8);
    *(undefined8 *)&(this->UniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0 =
         *(undefined8 *)
          &(pFVar5->PrevUniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->UniformParameters).PageReceiverMaskTextureSizeInvSize.field0_0x0 + 8) =
         uVar9;
    pTVar15 = CVarVirtualShadowOnePassProjectionMaxLights.Ref;
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar33 = 0x20;
    if (pTVar15->ShadowedValue[1] < 0x20) {
      uVar33 = pTVar15->ShadowedValue[1];
    }
    (this->UniformParameters).PackedShadowMaskMaxLightCount = uVar33;
    if ((BADTYPE)param_4->VisualizeVirtualShadowMap) {
      this->bEnableVisualization = true;
      pFVar26 = GetVirtualShadowMapVisualizationData();
      if (pFVar26->ActiveVisualizationModeID == 0x400) {
        this->bEnableNaniteVisualization = true;
      }
    }
    if (this->bEnableNaniteVisualization == false) {
      iVar34 = ((this->UniformParameters).StaticCachedArrayIndex != 0) + 1;
    }
    else {
      iVar34 = 3;
    }
    pFVar5 = this->CacheManager;
    uVar33 = (this->UniformParameters).MaxPhysicalPages;
    if ((this->bInitialized == false) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("bInitialized",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                            ,0x421,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVirtualShadowMapArrayCacheManager::SetPhysicalPoolSize
              (pFVar5,param_1,
               (TIntPoint<int>)(this->UniformParameters).PhysicalPoolSize.field0_0x0._s_0,iVar34,
               uVar33);
    local_130.Reference = (this->CacheManager->PhysicalPagePool).Reference;
    if (local_130.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_130.Reference)->_padding_ + 0x30))();
    }
    pFVar23 = FRDGBuilder::RegisterExternalTexture(param_1,&local_130,None);
    this->PhysicalPagePoolRDG = pFVar23;
    if (local_130.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_130.Reference)->_padding_ + 0x38))();
    }
    local_128.Reference = (this->CacheManager->PhysicalPageMetaData).Reference;
    if (local_128.Reference != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&(local_128.Reference)->_padding_ = (int)(local_128.Reference)->_padding_ + 1;
      UNLOCK();
    }
    pFVar27 = FRDGBuilder::RegisterExternalBuffer(param_1,&local_128,None);
    this->PhysicalPageMetaDataRDG = pFVar27;
    if (local_128.Reference != (FRDGPooledBuffer *)0x0) {
      plVar1 = &(local_128.Reference)->_padding_;
      LOCK();
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) &&
         (local_128.Reference != (FRDGPooledBuffer *)0x0)) {
        (**(code **)(local_128.Reference)->_padding_)(local_128.Reference,1);
      }
    }
    pFVar5 = this->CacheManager;
    (this->UniformParameters).PhysicalPagePool = this->PhysicalPagePoolRDG;
    local_98.Buffer =
         FVirtualShadowMapArrayCacheManager::UploadCachePrimitiveAsDynamic(pFVar5,param_1);
    local_98._padding_._4_4_ = 0;
    local_98._padding_._0_4_ = 0xffffffff;
    local_98._padding_ = 0;
    local_98._padding_._0_1_ = 0;
    if ((((local_98.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_98._padding_._0_1_ = 0x1c;
    }
    pFVar24 = FRDGBuilder::CreateSRV(param_1,&local_98);
    (this->UniformParameters).CachePrimitiveAsDynamic = pFVar24;
    if (this->bUseHzbOcclusion != false) {
      uVar33 = (this->UniformParameters).StaticHZBArrayIndex;
      pFVar5 = this->CacheManager;
      if (this->bInitialized == false) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("bInitialized",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                            ,0x427,L"");
        if (bVar18) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this->bInitialized == false) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("bInitialized",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                                ,0x421,L""), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar34 = (this->UniformParameters).PhysicalPoolSize.field0_0x0._s_0.Y;
      iVar30 = 1;
      if (iVar34 != 0) {
        iVar30 = iVar34;
      }
      uVar3 = (ulonglong)(iVar30 - 1) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar34 = (this->UniformParameters).PhysicalPoolSize.field0_0x0._s_0.X;
      iVar30 = 1;
      if (iVar34 != 0) {
        iVar30 = iVar34;
      }
      uVar3 = (ulonglong)(iVar30 - 1) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar31 = (uint)(1 << ((byte)lVar13 & 0x1f)) >> 1;
      uVar21 = 1;
      if (1 < uVar31) {
        uVar21 = uVar31;
      }
      TVar28 = FVirtualShadowMapArrayCacheManager::SetHZBPhysicalPoolSize
                         (pFVar5,(FRDGBuilder *)local_120,(TIntPoint<int>)param_1,uVar21,
                          (uVar33 != 0) + PF_A32B32G32R32F);
      pTVar2 = &this->HZBPhysicalArray;
      if ((IPooledRenderTarget *)pTVar2 != TVar28.Reference) {
        pIVar6 = pTVar2->Reference;
        pTVar2->Reference = (IPooledRenderTarget *)(TVar28.Reference)->_padding_;
        (TVar28.Reference)->_padding_ = 0;
        if (pIVar6 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar6->_padding_ + 0x38))();
        }
      }
      if ((longlong *)local_120._0_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_120._0_8_ + 0x38))();
      }
      pFVar29 = FRDGBuilder::RegisterExternalTexture(param_1,pTVar2,None);
      goto LAB_145802212;
    }
  }
  else {
    if (this->CacheManager != (FVirtualShadowMapArrayCacheManager *)0x0) {
      FVirtualShadowMapArrayCacheManager::FreePhysicalPool(this->CacheManager,param_1);
    }
    pFVar23 = FSystemTextures::GetZeroUIntArrayAtomicCompatDummy
                        ((FSystemTextures *)&GSystemTextures,param_1);
    (this->UniformParameters).PhysicalPagePool = pFVar23;
  }
  pFVar5 = this->CacheManager;
  if ((pFVar5 != (FVirtualShadowMapArrayCacheManager *)0x0) &&
     (pIVar6 = (pFVar5->HZBPhysicalPagePoolArray).Reference, pIVar6 != (IPooledRenderTarget *)0x0))
  {
    (pFVar5->HZBPhysicalPagePoolArray).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar6->_padding_ + 0x38))();
    FVirtualShadowMapArrayCacheManager::Invalidate(pFVar5,param_1);
  }
  pIVar6 = (this->HZBPhysicalArray).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (this->HZBPhysicalArray).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
LAB_145802212:
  this->HZBPhysicalArrayRDG = pFVar29;
  UpdateCachedUniformBuffers(this,param_1);
  return;
}

// InterpolateResolutionBias @ 145802e10

float __cdecl
FVirtualShadowMapArray::InterpolateResolutionBias(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_1;
  if (param_1 <= param_2) {
    fVar1 = param_2;
  }
  return (fVar1 - param_1) * param_3 + param_1;
}

// IsCsvLogEnabled @ 1458031b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FVirtualShadowMapArray::IsCsvLogEnabled(FVirtualShadowMapArray *this)

{
  bool bVar1;
  FCsvProfiler *pFVar2;
  
  pFVar2 = FCsvProfiler::Get();
  bVar1 = FCsvProfiler::IsCapturing_Renderthread(pFVar2);
  if (bVar1) {
    pFVar2 = FCsvProfiler::Get();
    bVar1 = FCsvProfiler::IsCategoryEnabled(pFVar2,_GCsvCategory_VSM.Index);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsVisualizePassEnabled @ 145803350

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FVirtualShadowMapArray::IsVisualizePassEnabled
          (FVirtualShadowMapArray *this,FViewInfo *param_1,int param_2,
          EVSMVisualizationPostPass param_3)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  EDebugViewShaderMode EVar3;
  longlong lVar4;
  
  EVar3 = FSceneViewFamily::GetDebugViewShaderMode((FSceneViewFamily *)param_1->_padding_);
  pTVar1 = CVarShowStatsVisible.Ref;
  if ((*(int *)(param_1->_padding_ + 0x48) < 0) || (EVar3 == DVSM_ShadowCasters)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (this->CacheManager == (FVirtualShadowMapArrayCacheManager *)0x0) {
    return bVar2;
  }
  if (bVar2 == false) {
    if (param_3 != PostEditorPrimitives) {
      return false;
    }
    bVar2 = IsInParallelGameThread();
    if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
      lVar4 = 0;
    }
    else {
      lVar4 = 1;
    }
    if ((pTVar1->ShadowedValue[lVar4] == false) ||
       (((undefined1)GVSMStatSectionsEnabled & Clusters) == None)) {
      return false;
    }
  }
  return true;
}

// LogStats @ 1458035b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::LogStats
          (FVirtualShadowMapArray *this,FRDGBuilder *param_1,FViewInfo *param_2)

{
  int *piVar1;
  uint uVar2;
  FRDGBuffer *pFVar3;
  FGlobalShaderMap *this_00;
  code *pcVar4;
  undefined8 uVar5;
  TConsoleVariableData<bool> *pTVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  Type TVar10;
  uint uVar11;
  undefined8 *puVar12;
  FRDGBufferSRV *pFVar13;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar14;
  FShaderParametersMetadata *pFVar15;
  FParameters *pFVar16;
  FShaderType *pFVar17;
  FName this_01;
  FRDGEventName *pFVar18;
  longlong lVar19;
  FRDGBufferSRVDesc *pFVar20;
  undefined8 *puVar21;
  FLLMScope local_res8 [2];
  FName local_res20;
  undefined8 *local_1a8 [2];
  TIntVector3<int>_u_0 local_198;
  FMemScope local_188;
  FRDGBufferSRVDesc local_180;
  FRDGBufferSRVDesc local_160;
  FRDGBufferSRVDesc local_140;
  FRDGBufferSRVDesc local_120;
  FRDGBufferSRVDesc local_100;
  FRDGBufferSRVDesc local_e0;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *local_b8;
  EUniformBufferBindingFlags EStack_b0;
  undefined7 uStack_af;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  undefined1 local_98 [8];
  FString local_90;
  TShaderRefBase<FVirtualSmLogStatsCS,FShaderMapPointerTable> local_78;
  FRDGEventName local_68;
  FParameters local_48;
  
  puVar21 = (undefined8 *)0x0;
  if ((this->bEnabled == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEnabled()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                         ,0xc92,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_188,&local_res20,true);
  if (this->StatsBufferRDG != (FRDGBuffer *)0x0) {
    puVar12 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x90,0x10);
    if (puVar12 == (undefined8 *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      puVar12[2] = 0;
      *puVar12 = &___7__TObject_VFParameters_FVirtualSmLogStatsCS___FRDGAllocator__6B_;
      *(undefined1 *)(puVar12 + 3) = 1;
      puVar12[4] = 0;
      puVar12[6] = 0;
      *(undefined1 *)(puVar12 + 7) = 1;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0xf] = 0;
      puVar21 = puVar12;
    }
    local_1a8[0] = puVar21;
    if ((((undefined8 **)param_1->_padding_ <= local_1a8) &&
        (local_1a8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar9 + 1;
    local_180._padding_._4_4_ = 0;
    local_180._padding_._0_4_ = 0xffffffff;
    local_180._padding_ = 0;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar9 * 8) = local_1a8[0];
    local_180.Buffer = this->StatsBufferRDG;
    local_180._padding_._0_1_ = 0;
    if ((((local_180.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_180._padding_._0_1_ = 0x1c;
    }
    pFVar13 = FRDGBuilder::CreateSRV(param_1,&local_180);
    puVar21[10] = pFVar13;
    pTVar14 = GetUncachedUniformBuffer(this,param_1);
    pFVar15 = FVirtualShadowMapUniformParameters::GetStructMetadata();
    EStack_b0 = Static;
    if (pFVar15->BindingFlags != StaticAndShader) {
      EStack_b0 = pFVar15->BindingFlags;
    }
    *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
     &((FParameters *)(puVar21 + 2))->VirtualShadowMap = pTVar14;
    puVar21[3] = CONCAT71(uStack_af,EStack_b0);
    local_b8 = pTVar14;
    pFVar16 = GPUMessage::GetShaderParameters(&local_48,param_1);
    uVar5 = *(undefined8 *)&pFVar16->GPUMessageDataBufferSize;
    puVar21[4] = pFVar16->GPUMessageDataBuffer;
    puVar21[5] = uVar5;
    uVar2 = (this->CacheManager->StatusFeedbackSocket).MessageId.Index;
    if ((uVar2 == 0xffffffff) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                           ,0x166,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)(puVar21 + 0x11) = uVar2;
    bVar7 = ShouldGenerateStats(this);
    if (bVar7) {
      ShaderPrint::SetEnabled(true);
      ShaderPrint::SetParameters
                (param_1,&param_2->ShaderPrintData,(FShaderParameters *)(puVar21 + 6));
      ShaderPrint::RequestSpaceForTriangles(0x2000);
      pTVar6 = CVarShowStatsVisible.Ref;
      bVar8 = IsInParallelGameThread();
      if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
        lVar19 = 0;
      }
      else {
        lVar19 = 1;
      }
      TVar10 = GVSMStatSectionsEnabled;
      if (pTVar6->ShadowedValue[lVar19] == false) {
        TVar10 = None;
      }
      *(Type *)((longlong)puVar21 + 0x84) = TVar10;
      uVar2 = (this->CacheManager->StatsFeedbackSocket).MessageId.Index;
      uVar11 = 0xffffffff;
      if (uVar2 != 0xffffffff) {
        uVar11 = uVar2;
      }
      *(uint *)((longlong)puVar21 + 0x8c) = uVar11;
      pFVar3 = this->StatsNaniteBufferRDG;
      if (pFVar3 == (FRDGBuffer *)0x0) {
        local_140.Buffer =
             FSystemTextures::GetDefaultStructuredBuffer
                       ((FSystemTextures *)&GSystemTextures,param_1,0x9c);
        pFVar20 = &local_140;
        local_140._padding_._4_4_ = 0;
        local_140._padding_._0_4_ = 0xffffffff;
        local_140._padding_ = 0;
        local_140._padding_._0_1_ = 0;
        if ((((local_140.Buffer)->Desc).Usage & DrawIndirect) != None) {
          local_140._padding_._0_1_ = 0x1c;
        }
      }
      else {
        pFVar20 = &local_160;
        local_160._padding_._4_4_ = 0;
        local_160._padding_._0_4_ = 0xffffffff;
        local_160._padding_ = 0;
        local_160._padding_._0_1_ = 0;
        local_160.Buffer = pFVar3;
        if (((pFVar3->Desc).Usage & DrawIndirect) != None) {
          local_160._padding_._0_1_ = 0x1c;
        }
      }
      pFVar13 = FRDGBuilder::CreateSRV(param_1,pFVar20);
      puVar21[0xb] = pFVar13;
      local_120.Buffer = this->PrevProjectionData;
      local_120._padding_._4_4_ = 0;
      local_120._padding_._0_4_ = 0xffffffff;
      local_120._padding_ = 0;
      local_120._padding_._0_1_ = 0;
      if ((((local_120.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_120._padding_._0_1_ = 0x1c;
      }
      pFVar13 = FRDGBuilder::CreateSRV(param_1,&local_120);
      puVar21[0xd] = pFVar13;
      local_100.Buffer = this->NanitePerformanceFeedbackRDG;
      local_100._padding_._4_4_ = 0;
      local_100._padding_._0_4_ = 0xffffffff;
      local_100._padding_ = 0;
      local_100._padding_._0_1_ = 0;
      if ((((local_100.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_100._padding_._0_1_ = 0x1c;
      }
      pFVar13 = FRDGBuilder::CreateSRV(param_1,&local_100);
      puVar21[0xc] = pFVar13;
      *(int *)(puVar21 + 0xe) = this->NumShadowMapSlots;
      local_e0.Buffer = this->ThrottleBufferRDG;
      local_e0._padding_._4_4_ = 0;
      local_e0._padding_._0_4_ = 0xffffffff;
      local_e0._padding_ = 0;
      local_e0._padding_._0_1_ = 0;
      if ((((local_e0.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_e0._padding_._0_1_ = 0x1c;
      }
      pFVar13 = FRDGBuilder::CreateSRV(param_1,&local_e0);
      puVar21[0xf] = pFVar13;
      *(uint *)(puVar21 + 0x10) = (uint)this->bThrottlingEnabled;
    }
    this_00 = param_2->ShaderMap;
    pFVar17 = (FShaderType *)FVirtualSmLogStatsCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_a8,pFVar17,(uint)bVar7);
    if (local_a8.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_98);
      ::FName::ToString((FName *)this_01,&local_90);
      FVirtualSmLogStatsCS::GetStaticType();
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVirtualSmLogStatsCS::GetStaticType();
    local_78.ShaderContent = (FVirtualSmLogStatsCS *)local_a8.ShaderContent;
    local_78.ShaderMap = local_a8.ShaderMap;
    pFVar18 = FRDGEventName::FRDGEventName(&local_68,1,L"VSM Log Stats And Status");
    pFVar15 = FVirtualSmLogStatsCS::FParameters::FTypeInfo::GetStructMetadata();
    local_198._s_0.X = 1;
    local_198._s_0.Y = 1;
    local_198._s_0.Z = 1;
    FComputeShaderUtils::AddPass<FVirtualSmLogStatsCS>
              (param_1,pFVar18,Compute,&local_78,pFVar15,(FParameters *)(puVar21 + 2),
               (TIntVector3<int> *)&local_198._s_0);
    if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  FMemScope::~FMemScope(&local_188);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PostRender @ 145804de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::PostRender(FVirtualShadowMapArray *this,FRDGBuilder *param_1)

{
  char cVar1;
  FRDGBuffer *pFVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar10;
  FShaderParametersMetadata *pFVar11;
  FRDGBufferUAV *pFVar12;
  FGlobalShaderMap *pFVar13;
  FGlobalShaderType *pFVar14;
  FShaderType *pFVar15;
  FName FVar16;
  FRDGEventName *pFVar17;
  FRDGScope *this_00;
  undefined8 *puVar18;
  FRDGBufferSRV *pFVar19;
  FRDGTextureUAV *pFVar20;
  EUniformBufferBindingFlags EVar21;
  byte bVar22;
  longlong *plVar23;
  undefined1 auStackY_358 [32];
  undefined1 local_308;
  undefined1 local_307 [15];
  undefined8 local_2f8;
  EBufferUsageFlags EStack_2f0;
  undefined4 uStack_2ec;
  FShaderParametersMetadata *local_2e8;
  undefined8 *local_2d8;
  undefined8 *local_2d0;
  undefined8 *local_2c8;
  FRDGBuffer *local_2c0;
  FParameters *local_2b8;
  FRDGBuffer *local_2b0;
  FRDGBufferUAVDesc local_2a8;
  FRDGBufferUAVDesc local_298;
  FRDGBufferUAVDesc local_288;
  FRDGBufferUAVDesc local_278;
  FRDGTextureUAVDesc local_268;
  TIntVector3<int>_u_0 local_248;
  TIntVector3<int>_u_0 local_238;
  TIntVector3<int>_u_0 local_228;
  TRDGEventScopeGuard<FRDGScope_RHI> local_218;
  char local_208;
  FRDGBufferSRVDesc local_200;
  FRDGBufferSRVDesc local_1e0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_198;
  TShaderRefBase<FUpdateAndClearDirtyFlagsCS,FShaderMapPointerTable> local_188;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49>_const_*,std::tuple<>_> local_178;
  FString local_168;
  TShaderRefBase<FSelectPagesToMergeCS,FShaderMapPointerTable> local_158;
  FString local_148;
  TShaderRefBase<FMergeStaticPhysicalPagesIndirectCS,FShaderMapPointerTable> local_138;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  FRDGBufferDesc local_118;
  undefined1 local_100 [8];
  FString local_f8;
  uint uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  FRDGEventName local_c8;
  FRDGEventName local_b0;
  FRDGEventName local_98;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  puVar18 = (undefined8 *)0x0;
  if ((this->bEnabled == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEnabled()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                         ,0x6c3,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = this->NumShadowMapSlots + -0x2000;
  iVar7 = 0;
  if (0 < iVar6) {
    iVar7 = iVar6;
  }
  if (iVar7 + this->NumSinglePageShadowMaps != 0) {
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
    if (puVar9 == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      puVar9[2] = 0;
      *puVar9 = &___7__TObject_VFParameters_FUpdateAndClearDirtyFlagsCS___FRDGAllocator__6B_;
      *(undefined1 *)(puVar9 + 3) = 1;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar18 = puVar9;
    }
    local_2d8 = puVar18;
    if ((((undefined8 **)param_1->_padding_ <= &local_2d8) &&
        (&local_2d8 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (int)param_1->_padding_;
    if (iVar7 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,
                         (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_2d8;
    local_2c0 = (FRDGBuffer *)(puVar18 + 2);
    pTVar10 = GetUncachedUniformBuffer(this,param_1);
    pFVar11 = FVirtualShadowMapUniformParameters::GetStructMetadata();
    EVar21 = Static;
    if (pFVar11->BindingFlags != StaticAndShader) {
      EVar21 = pFVar11->BindingFlags;
    }
    EStack_2f0 = CONCAT31(EStack_2f0._1_3_,EVar21);
    bVar22 = 0;
    *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
     &((FParameters *)(puVar18 + 2))->VirtualShadowMap = pTVar10;
    puVar18[3] = CONCAT44(uStack_2ec,EStack_2f0);
    local_2a8.Buffer = this->PhysicalPageMetaDataRDG;
    local_2a8._padding_._2_1_ = 0;
    if ((((local_2a8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar22 = 0x1c;
    }
    local_2a8._padding_._0_2_ = (ushort)bVar22;
    local_2f8 = (FRDGBuffer *)pTVar10;
    pFVar12 = FRDGBuilder::CreateUAV(param_1,&local_2a8,None);
    puVar18[5] = pFVar12;
    local_298.Buffer = this->DirtyPageFlagsRDG;
    local_298._padding_._2_1_ = 0;
    bVar22 = 0;
    if ((((local_298.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar22 = 0x1c;
    }
    local_298._padding_._0_2_ = (ushort)bVar22;
    pFVar12 = FRDGBuilder::CreateUAV(param_1,&local_298,None);
    puVar18[4] = pFVar12;
    pFVar13 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [*(int *)&this->Scene->field_0x8]);
    pFVar14 = FUpdateAndClearDirtyFlagsCS::GetStaticType();
    if (*(int *)&pFVar14->field_0x50 != 1) {
      local_308 = 0;
      `FGlobalShaderMap::GetShader<FUpdateAndClearDirtyFlagsCS>'::__l2::<lambda_1>::operator()
                (&local_308);
    }
    pFVar15 = (FShaderType *)FUpdateAndClearDirtyFlagsCS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar13,&local_198,pFVar15,0);
    if (local_198.ShaderContent == (FShader *)0x0) {
      FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_100);
      ::FName::ToString((FName *)FVar16,&local_f8);
      FUpdateAndClearDirtyFlagsCS::GetStaticType();
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FUpdateAndClearDirtyFlagsCS::GetStaticType();
    uVar8 = (this->UniformParameters).MaxPhysicalPages;
    local_188.ShaderContent = (FUpdateAndClearDirtyFlagsCS *)local_198.ShaderContent;
    local_188.ShaderMap = local_198.ShaderMap;
    pFVar17 = FRDGEventName::FRDGEventName(&local_c8,1,L"UpdateAndClearDirtyFlags");
    pFVar11 = FUpdateAndClearDirtyFlagsCS::FParameters::FTypeInfo::GetStructMetadata();
    local_248._s_0.Y = 1;
    local_248._s_0.Z = 1;
    local_248._s_0.X = uVar8 + 0xff >> 8;
    FComputeShaderUtils::AddPass<FUpdateAndClearDirtyFlagsCS>
              (param_1,pFVar17,Compute,&local_188,pFVar11,(FParameters *)local_2c0,
               (TIntVector3<int> *)&local_248._s_0);
    if (local_c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    pTVar4 = CVarDebugSkipMergePhysical.Ref;
    if ((this->UniformParameters).StaticCachedArrayIndex != 0) {
      bVar5 = IsInParallelRenderingThread();
      if ((!bVar5) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pTVar4->ShadowedValue[1] == 0) {
        cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
        local_208 = '\0';
        if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::Desc._padding_._0_4_ = 0x6e1;
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            local_d8 = 0;
            uStack_d4 = 0;
            ::Desc._12_8_ = ZEXT48(uStack_dc);
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_ = (longlong)::u_FVirtualShadowM;
            ::Desc._padding_ = (longlong)::u_FVirtualShadowM;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FVirtualShadowMapArray::PostRender'::__l21::Desc::operator()<>'::__l3::
                   <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_178._Myfirst._Val = &::Desc;
          local_218.State = (FRDGScopeState *)param_1;
          this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
          param_1->_padding_ = (longlong)this_00;
          local_218.Scope = this_00;
          TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
          Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49>_const_*,std::tuple<>_>_>
                    (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_178);
          if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
            FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
            FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
          }
          local_208 = '\x01';
        }
        EStack_2f0 = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
        local_2e8 = (FShaderParametersMetadata *)0x0;
        local_2f8 = (FRDGBuffer *)CONCAT44(local_2f8._4_4_,4);
        uVar8 = GetTotalAllocatedPhysicalPages(this);
        local_118.Metadata = local_2e8;
        local_2f8._4_4_ = uVar8 + 1;
        local_118._12_4_ = uStack_2ec;
        local_118.Usage = EStack_2f0;
        local_118.BytesPerElement = (uint)local_2f8;
        local_118.NumElements = uVar8 + 1;
        local_2c0 = FRDGBuilder::CreateBuffer
                              (param_1,&local_118,L"Shadow.Virtual.PhysicalPagesToMerge",None);
        local_238._s_0.X = 0;
        local_238._s_0.Y = 1;
        local_238._s_0.Z = 1;
        local_2b0 = CreateAndClearIndirectDispatchArgs
                              (param_1,*(Type *)&this->Scene->field_0x8,
                               L"Shadow.Virtual.MergePagesIndirectArgs",
                               (TIntVector3<int> *)&local_238._s_0,1,3);
        puVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
        if (puVar18 == (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                             ,0x61,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          *(undefined1 *)(puVar18 + 3) = 1;
          *puVar18 = &___7__TObject_VFParameters_FSelectPagesToMergeCS___FRDGAllocator__6B_;
          puVar18[2] = 0;
          puVar18[4] = 0;
          puVar18[5] = 0;
          puVar18[6] = 0;
          puVar18[7] = 0;
        }
        local_2d0 = puVar18;
        if ((((undefined8 **)param_1->_padding_ <= &local_2d0) &&
            (&local_2d0 <
             (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (int)param_1->_padding_;
        if (iVar7 == *(int *)((longlong)&param_1->_padding_ + 4)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&param_1->_padding_,
                             (int *)((longlong)&param_1->_padding_ + 4));
        }
        *(int *)&param_1->_padding_ = iVar7 + 1;
        *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_2d0;
        local_2b8 = (FParameters *)(puVar18 + 2);
        pTVar10 = GetUncachedUniformBuffer(this,param_1);
        pFVar11 = FVirtualShadowMapUniformParameters::GetStructMetadata();
        local_200._padding_._0_4_ = 0xffffffff;
        EVar21 = Static;
        if (pFVar11->BindingFlags != StaticAndShader) {
          EVar21 = pFVar11->BindingFlags;
        }
        local_200._padding_._4_4_ = 0;
        local_200._padding_._0_1_ = 0;
        local_200._padding_ = 0;
        EStack_2f0 = CONCAT31(EStack_2f0._1_3_,EVar21);
        *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
         &((FParameters *)(puVar18 + 2))->VirtualShadowMap = pTVar10;
        puVar18[3] = CONCAT44(uStack_2ec,EStack_2f0);
        local_200.Buffer = this->PhysicalPageMetaDataRDG;
        if ((((local_200.Buffer)->Desc).Usage & DrawIndirect) != None) {
          local_200._padding_._0_1_ = 0x1c;
        }
        local_2f8 = (FRDGBuffer *)pTVar10;
        pFVar19 = FRDGBuilder::CreateSRV(param_1,&local_200);
        puVar18[4] = pFVar19;
        local_288.Buffer = local_2b0;
        local_288._padding_._2_1_ = 0;
        bVar22 = 0;
        if (((local_2b0->Desc).Usage & DrawIndirect) != None) {
          bVar22 = 0x1c;
        }
        local_288._padding_._0_2_ = (ushort)bVar22;
        pFVar12 = FRDGBuilder::CreateUAV(param_1,&local_288,None);
        puVar18[5] = pFVar12;
        local_278.Buffer = local_2c0;
        local_278._padding_._2_1_ = 0;
        bVar22 = 0;
        if (((local_2c0->Desc).Usage & DrawIndirect) != None) {
          bVar22 = 0x1c;
        }
        local_278._padding_._0_2_ = (ushort)bVar22;
        pFVar12 = FRDGBuilder::CreateUAV(param_1,&local_278,None);
        puVar18[6] = pFVar12;
        pFVar12 = this->StatsBufferUAV;
        bVar5 = ShouldGenerateStats(this);
        local_2b8->OutStatsBuffer = pFVar12;
        local_2f8 = (FRDGBuffer *)
                    GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                       [*(int *)&this->Scene->field_0x8]);
        pFVar15 = (FShaderType *)FSelectPagesToMergeCS::GetStaticType();
        FGlobalShaderMap::GetShader((FGlobalShaderMap *)local_2f8,&local_1b8,pFVar15,(uint)bVar5);
        if (local_1b8.ShaderContent == (FShader *)0x0) {
          FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_120);
          ::FName::ToString((FName *)FVar16,&local_168);
          FSelectPagesToMergeCS::GetStaticType();
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FSelectPagesToMergeCS::GetStaticType();
        uVar8 = (this->UniformParameters).MaxPhysicalPages;
        local_158.ShaderContent = (FSelectPagesToMergeCS *)local_1b8.ShaderContent;
        local_158.ShaderMap = local_1b8.ShaderMap;
        pFVar17 = FRDGEventName::FRDGEventName(&local_b0,1,L"SelectPagesToMerge");
        pFVar11 = FSelectPagesToMergeCS::FParameters::FTypeInfo::GetStructMetadata();
        local_228._s_0.Y = 1;
        local_228._s_0.Z = 1;
        local_228._s_0.X = uVar8 + 0xff >> 8;
        FComputeShaderUtils::AddPass<FSelectPagesToMergeCS>
                  (param_1,pFVar17,Compute,&local_158,pFVar11,local_2b8,
                   (TIntVector3<int> *)&local_228._s_0);
        if (local_b0.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.FormattedEventName.Data.AllocatorInstance.Data);
        }
        puVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
        if (puVar18 == (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                             ,0x61,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          *(undefined1 *)(puVar18 + 3) = 1;
          *puVar18 = &
                     ___7__TObject_VFParameters_FMergeStaticPhysicalPagesIndirectCS___FRDGAllocator__6B_
          ;
          puVar18[2] = 0;
          puVar18[4] = 0;
          puVar18[5] = 0;
          puVar18[6] = 0;
          *(undefined4 *)(puVar18 + 7) = 4;
        }
        local_2c8 = puVar18;
        if ((((undefined8 **)param_1->_padding_ <= &local_2c8) &&
            (&local_2c8 <
             (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (int)param_1->_padding_;
        if (iVar7 == *(int *)((longlong)&param_1->_padding_ + 4)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&param_1->_padding_,
                             (int *)((longlong)&param_1->_padding_ + 4));
        }
        *(int *)&param_1->_padding_ = iVar7 + 1;
        *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_2c8;
        pTVar10 = GetUncachedUniformBuffer(this,param_1);
        pFVar11 = FVirtualShadowMapUniformParameters::GetStructMetadata();
        local_268._padding_._1_1_ = 0;
        local_268._padding_._2_4_ = 0;
        local_268._padding_._6_1_ = 0;
        local_268._padding_._0_1_ = 0;
        EVar21 = Static;
        if (pFVar11->BindingFlags != StaticAndShader) {
          EVar21 = pFVar11->BindingFlags;
        }
        EStack_2f0 = CONCAT31(EStack_2f0._1_3_,EVar21);
        *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
         &((FParameters *)(puVar18 + 2))->VirtualShadowMap = pTVar10;
        puVar18[3] = CONCAT44(uStack_2ec,EStack_2f0);
        local_268.Texture = this->PhysicalPagePoolRDG;
        local_268._padding_._0_1_ = ((local_268.Texture)->Desc).field_0x34;
        local_2f8 = (FRDGBuffer *)pTVar10;
        pFVar20 = FRDGBuilder::CreateUAV(param_1,&local_268,None);
        puVar18[5] = pFVar20;
        local_2f8 = local_2b0;
        local_1e0.Buffer = local_2c0;
        local_1e0._padding_._4_4_ = 0;
        local_1e0._padding_._0_4_ = 0xffffffff;
        local_1e0._padding_ = 0;
        EStack_2f0 = 4;
        puVar18[6] = local_2b0;
        puVar18[7] = CONCAT44(uStack_2ec,4);
        local_1e0._padding_._0_1_ = 0;
        if (((local_2c0->Desc).Usage & DrawIndirect) != None) {
          local_1e0._padding_._0_1_ = 0x1c;
        }
        pFVar19 = FRDGBuilder::CreateSRV(param_1,&local_1e0);
        puVar18[4] = pFVar19;
        pFVar13 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                     [*(int *)&this->Scene->field_0x8]);
        pFVar14 = FMergeStaticPhysicalPagesIndirectCS::GetStaticType();
        if (*(int *)&pFVar14->field_0x50 != 1) {
          local_307[0] = 0;
          `FGlobalShaderMap::GetShader<FMergeStaticPhysicalPagesIndirectCS>'::__l2::<lambda_1>::
          operator()(local_307);
        }
        pFVar15 = (FShaderType *)FMergeStaticPhysicalPagesIndirectCS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar13,&local_1a8,pFVar15,0);
        if (local_1a8.ShaderContent == (FShader *)0x0) {
          FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_128);
          ::FName::ToString((FName *)FVar16,&local_148);
          FMergeStaticPhysicalPagesIndirectCS::GetStaticType();
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FMergeStaticPhysicalPagesIndirectCS::GetStaticType();
        pFVar2 = (FRDGBuffer *)puVar18[6];
        local_138.ShaderContent = (FMergeStaticPhysicalPagesIndirectCS *)local_1a8.ShaderContent;
        local_138.ShaderMap = local_1a8.ShaderMap;
        local_78._0_8_ = 0;
        local_50 = (longlong *)0x0;
        pFVar17 = FRDGEventName::FRDGEventName(&local_98,1,L"MergeStaticPhysicalPagesIndirect");
        FComputeShaderUtils::AddPass<FMergeStaticPhysicalPagesIndirectCS>
                  (param_1,pFVar17,Compute,&local_138,(FParameters *)(puVar18 + 2),pFVar2,0,
                   (TFunction<void___cdecl(void)> *)local_78);
        if (local_98.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
        }
        if (local_78._0_8_ != 0) {
          plVar23 = (longlong *)(local_78 + 0x10);
          if (local_50 != (longlong *)0x0) {
            plVar23 = local_50;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        if (local_208 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_218);
        }
      }
    }
  }
  return;
}

// RenderDebugInfo @ 145808740

/* WARNING: Removing unreachable block (ram,0x000145808cf9) */
/* WARNING: Removing unreachable block (ram,0x000145808d09) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::RenderDebugInfo
          (FVirtualShadowMapArray *this,FRDGBuilder *param_1,TArrayView<FViewInfo,int> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  FRDGBuilder *this_00;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FViewInfo *pFVar8;
  undefined8 *puVar9;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar10;
  FShaderParametersMetadata *pFVar11;
  FRDGBufferSRV *pFVar12;
  FRDGTextureUAV *pFVar13;
  FGlobalShaderMap *this_01;
  FGlobalShaderType *pFVar14;
  FShaderType *pFVar15;
  FName this_02;
  FRDGEventName *pFVar16;
  uint uVar17;
  uint uVar18;
  uint local_res8 [2];
  FRDGBuilder *local_res10;
  TArrayView<FViewInfo,int> *local_res18;
  longlong local_res20;
  undefined8 *local_118;
  longlong local_110;
  undefined8 local_108;
  TIntVector3<int>_u_0 local_f8;
  FRDGTextureUAVDesc local_e8;
  FVirtualShadowMapVisualizationData *local_d0;
  FRDGBufferSRVDesc local_c8;
  TShaderRefBase<FDebugVisualizeVirtualSmCS,FShaderMapPointerTable> local_a8;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *local_98;
  EUniformBufferBindingFlags EStack_90;
  undefined7 uStack_8f;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_88;
  undefined1 local_78 [8];
  FString local_70;
  FRDGEventName local_60;
  
  uVar17 = 0;
  local_res8[0] = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  if ((this->bEnabled == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEnabled()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                         ,0xc36,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = param_2->ArrayNum;
  if (0 < iVar7) {
    pFVar8 = TArrayView<FViewInfo,int>::operator[](param_2,0);
    LogStats(this,param_1,pFVar8);
  }
  if (((((this->DebugVisualizationOutput).ArrayNum != 0) && ((this->VisualizeLight).ArrayNum != 0))
      && (local_d0 = GetVirtualShadowMapVisualizationData(),
         local_d0->ActiveVisualizationModeID == 0x20)) && (0 < iVar7)) {
    local_res20 = 0;
    local_110 = 0;
    do {
      lVar4 = local_110;
      uVar18 = ~uVar17 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar17 < (this->VisualizeLight).ArrayNum) {
        uVar6 = uVar18;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((this->VisualizeLight).AllocatorInstance.Data + lVar4 + 8) != 0) {
        TArrayView<FViewInfo,int>::operator[](local_res18,uVar17);
        uVar6 = 0;
        if ((int)uVar17 < (this->DebugVisualizationOutput).ArrayNum) {
          uVar6 = uVar18;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar2 = *(undefined8 *)
                 (*(longlong *)
                   ((this->DebugVisualizationOutput).AllocatorInstance.Data + local_res20) + 0xa4);
        local_108 = uVar2;
        puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                             ,0x61,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          *(undefined1 *)(puVar9 + 3) = 1;
          *puVar9 = &___7__TObject_VFParameters_FDebugVisualizeVirtualSmCS___FRDGAllocator__6B_;
          puVar9[2] = 0;
          puVar9[4] = 0;
          puVar9[8] = 0;
        }
        local_118 = puVar9;
        if ((((undefined8 **)param_1->_padding_ <= &local_118) &&
            (&local_118 <
             (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (int)param_1->_padding_;
        piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
        }
        *(int *)&param_1->_padding_ = iVar7 + 1;
        *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_118;
        pTVar10 = GetUniformBuffer(this,uVar17);
        pFVar11 = FVirtualShadowMapUniformParameters::GetStructMetadata();
        this_00 = local_res10;
        local_c8._padding_._0_4_ = 0xffffffff;
        EStack_90 = Static;
        if (pFVar11->BindingFlags != StaticAndShader) {
          EStack_90 = pFVar11->BindingFlags;
        }
        local_c8._padding_._0_1_ = 0;
        local_c8._padding_._4_4_ = 0;
        local_c8._padding_ = 0;
        *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
         &(((FParameters *)(puVar9 + 2))->ProjectionParameters).VirtualShadowMap = pTVar10;
        puVar9[3] = CONCAT71(uStack_8f,EStack_90);
        local_c8.Buffer = this->PhysicalPageMetaDataRDG;
        if ((((local_c8.Buffer)->Desc).Usage & DrawIndirect) != None) {
          local_c8._padding_._0_1_ = 0x1c;
        }
        local_98 = pTVar10;
        pFVar12 = FRDGBuilder::CreateSRV(local_res10,&local_c8);
        puVar9[4] = pFVar12;
        *(int *)((longlong)puVar9 + 0x2c) = local_108._4_4_;
        iVar7 = (int)uVar2;
        *(int *)(puVar9 + 5) = iVar7;
        *(undefined4 *)(puVar9 + 6) = 2;
        *(int *)((longlong)puVar9 + 0x34) = local_d0->ActiveVisualizationModeID;
        uVar6 = 0;
        if ((int)uVar17 < (this->VisualizeLight).ArrayNum) {
          uVar6 = uVar18;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)(puVar9 + 7) =
             *(undefined4 *)((this->VisualizeLight).AllocatorInstance.Data + local_110 + 0x10);
        uVar6 = 0;
        if ((int)uVar17 < (this->DebugVisualizationOutput).ArrayNum) {
          uVar6 = uVar18;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_e8._padding_._1_1_ = 0;
        local_e8.Texture =
             *(FRDGTexture **)
              ((this->DebugVisualizationOutput).AllocatorInstance.Data + local_res20);
        local_e8._padding_._0_1_ = ((local_e8.Texture)->Desc).field_0x34;
        local_e8._padding_._2_4_ = 0;
        local_e8._padding_._6_1_ = 0;
        local_e8._padding_._0_1_ = 0;
        pFVar13 = FRDGBuilder::CreateUAV(this_00,&local_e8,None);
        puVar9[8] = pFVar13;
        this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                     [*(int *)&this->Scene->field_0x8]);
        pFVar14 = FDebugVisualizeVirtualSmCS::GetStaticType();
        if (*(int *)&pFVar14->field_0x50 != 1) {
          local_res8[0] = local_res8[0] & 0xffffff00;
          `FGlobalShaderMap::GetShader<FDebugVisualizeVirtualSmCS>'::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        pFVar15 = (FShaderType *)FDebugVisualizeVirtualSmCS::GetStaticType();
        FGlobalShaderMap::GetShader(this_01,&local_88,pFVar15,0);
        if (local_88.ShaderContent == (FShader *)0x0) {
          this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
          ::FName::ToString((FName *)this_02,&local_70);
          FDebugVisualizeVirtualSmCS::GetStaticType();
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FDebugVisualizeVirtualSmCS::GetStaticType();
        local_a8.ShaderContent = (FDebugVisualizeVirtualSmCS *)local_88.ShaderContent;
        local_a8.ShaderMap = local_88.ShaderMap;
        pFVar16 = FRDGEventName::FRDGEventName(&local_60,1,L"DebugVisualizeVirtualShadowMap");
        pFVar11 = FDebugVisualizeVirtualSmCS::FParameters::FTypeInfo::GetStructMetadata();
        param_1 = local_res10;
        local_f8._s_0.Z = 1;
        iVar7 = iVar7 + 7;
        local_f8._s_0.X = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
        local_f8._s_0.Y = (int)(local_108._4_4_ + 7 + (local_108._4_4_ + 7 >> 0x1f & 7U)) >> 3;
        FComputeShaderUtils::AddPass<FDebugVisualizeVirtualSmCS>
                  (local_res10,pFVar16,Compute,&local_a8,pFVar11,(FParameters *)(puVar9 + 2),
                   (TIntVector3<int> *)&local_f8._s_0);
        if (local_60.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.FormattedEventName.Data.AllocatorInstance.Data);
        }
      }
      local_110 = local_110 + 0x18;
      local_res20 = local_res20 + 8;
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < local_res18->ArrayNum);
  }
  return;
}

// RenderShadowCasterBounds @ 145808d70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::RenderShadowCasterBounds
          (FVirtualShadowMapArray *this,FRDGBuilder *param_1,FViewInfo *param_2,int param_3,
          FSceneUniformBuffer *param_4,TIntRect<int> *param_5,FRDGTexture *param_6,
          FRDGTexture *param_7,FRDGTexture *param_8)

{
  TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *pTVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  TIntPoint<int>_u_0 TVar5;
  TIntPoint<int>_u_0 TVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  FShadowCasterBoundsParameters *pFVar12;
  FShadowCasterBoundsParameters *pFVar13;
  bool bVar14;
  ERDGPassFlags EVar15;
  int iVar16;
  longlong lVar17;
  FShadowCasterBoundsParameters *pFVar18;
  FViewShaderParameters *pFVar19;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar20;
  FShaderParametersMetadata *pFVar21;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar22;
  FRDGTextureSRV *pFVar23;
  FShadowCasterBoundsParameters *pFVar24;
  FRDGEventName *pFVar25;
  wchar_t *pwVar26;
  FRDGPass *pFVar27;
  FGPUScene *this_00;
  FShadowCasterBoundsParameters *pFVar28;
  EUniformBufferBindingFlags EVar29;
  FShadowCasterBoundsParameters *pFVar30;
  int iVar31;
  float *pfVar32;
  uint uVar33;
  FRDGTextureSRVDesc local_1e8;
  FRDGTextureSRVDesc local_1c8;
  FRDGTextureSRVDesc local_1b0;
  FDepthStencilBinding local_198;
  FRenderTargetBinding local_180;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  FRDGParameterStruct local_138;
  FRDGParameterStruct local_120;
  FRDGEventName local_108;
  FRDGEventName local_f0;
  FViewShaderParameters local_d8;
  FViewShaderParameters local_b8;
  FGPUSceneResourceParameters local_98;
  
  if ((param_6 == (FRDGTexture *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputColor",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                          ,0x1358,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_7 == (FRDGTexture *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputDepth",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                          ,0x1359,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = &this->Scene->GPUScene;
  lVar17 = 0x28c;
  if ((this->Scene->GPUScene).InstanceSceneDataAllocator.bGrowOnly != false) {
    lVar17 = 0x290;
  }
  uVar4 = *(undefined4 *)
           ((this_00->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
           lVar17 + -0x48);
  FGPUScene::GetShaderParameters(this_00,&local_98,param_1);
  pFVar18 = FRDGAllocator::Alloc<FShadowCasterBoundsParameters>
                      ((FRDGAllocator *)&param_1->_padding_);
  pFVar19 = FViewInfo::GetShaderParameters(param_2,&local_d8);
  uVar8 = *(undefined8 *)&(pFVar19->View).field_0x8;
  uVar9 = *(undefined8 *)&pFVar19->InstancedView;
  uVar10 = *(undefined8 *)&(pFVar19->InstancedView).field_0x8;
  *(undefined8 *)&(pFVar18->VS).View.View = *(undefined8 *)&pFVar19->View;
  *(undefined8 *)&(pFVar18->VS).View.View.field_0x8 = uVar8;
  *(undefined8 *)&(pFVar18->VS).View.InstancedView = uVar9;
  *(undefined8 *)&(pFVar18->VS).View.InstancedView.field_0x8 = uVar10;
  pTVar20 = FSceneUniformBuffer::GetBuffer(param_4,param_1);
  pFVar21 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  local_1e8._padding_._0_1_ = Static;
  if (pFVar21->BindingFlags != StaticAndShader) {
    local_1e8._padding_._0_1_ = pFVar21->BindingFlags;
  }
  *(TRDGUniformBuffer<FSceneUniformParameters> **)&(pFVar18->VS).Scene = pTVar20;
  *(ulonglong *)&(pFVar18->VS).Scene.field_0x8 =
       CONCAT53(local_1e8._padding_._3_5_,
                CONCAT12(local_1e8._padding_._2_1_,
                         CONCAT11(local_1e8._padding_._1_1_,
                                  (EUniformBufferBindingFlags)local_1e8._padding_)));
  local_1e8._padding_ = (longlong)pTVar20;
  pTVar22 = GetUniformBuffer(this,param_3);
  pFVar21 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  local_1e8._padding_._0_1_ = Static;
  if (pFVar21->BindingFlags != StaticAndShader) {
    local_1e8._padding_._0_1_ = pFVar21->BindingFlags;
  }
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)&(pFVar18->VS).VirtualShadowMap =
       pTVar22;
  *(ulonglong *)&(pFVar18->VS).VirtualShadowMap.field_0x8 =
       CONCAT53(local_1e8._padding_._3_5_,
                CONCAT12(local_1e8._padding_._2_1_,
                         CONCAT11(local_1e8._padding_._1_1_,
                                  (EUniformBufferBindingFlags)local_1e8._padding_)));
  local_1e8._padding_ = (longlong)pTVar22;
  pFVar19 = FViewInfo::GetShaderParameters(param_2,&local_b8);
  uVar8 = *(undefined8 *)&(pFVar19->View).field_0x8;
  uVar9 = *(undefined8 *)&pFVar19->InstancedView;
  uVar10 = *(undefined8 *)&(pFVar19->InstancedView).field_0x8;
  *(undefined8 *)&(pFVar18->PS).View.View = *(undefined8 *)&pFVar19->View;
  *(undefined8 *)&(pFVar18->PS).View.View.field_0x8 = uVar8;
  *(undefined8 *)&(pFVar18->PS).View.InstancedView = uVar9;
  *(undefined8 *)&(pFVar18->PS).View.InstancedView.field_0x8 = uVar10;
  pTVar20 = FSceneUniformBuffer::GetBuffer(param_4,param_1);
  pFVar21 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  EVar29 = Static;
  if (pFVar21->BindingFlags != StaticAndShader) {
    EVar29 = pFVar21->BindingFlags;
  }
  iVar31 = 0;
  *(TRDGUniformBuffer<FSceneUniformParameters> **)&(pFVar18->PS).Scene = pTVar20;
  *(ulonglong *)&(pFVar18->PS).Scene.field_0x8 =
       CONCAT53(local_1e8._padding_._3_5_,
                CONCAT12(local_1e8._padding_._2_1_,CONCAT11(local_1e8._padding_._1_1_,EVar29)));
  cVar2 = (param_8->Desc).field_0x32;
  local_1e8._padding_ = (ulonglong)(byte)(param_8->Desc).field_0x30 << 0x10;
  local_1e8._padding_._0_1_ = 0;
  local_1e8._padding_._2_1_ = 0;
  local_1e8.Texture = param_8;
  if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
    local_1e8._padding_ =
         CONCAT26(*(undefined2 *)&(param_8->Desc).field_0x2e,(undefined6)local_1e8._padding_);
  }
  pFVar23 = FRDGBuilder::CreateSRV(param_1,&local_1e8);
  (pFVar18->PS).SceneDepth = pFVar23;
  bVar3 = (param_6->Desc).field_0x31;
  uVar33 = 8;
  if (bVar3 < 8) {
    uVar33 = (uint)bVar3;
  }
  (pFVar18->PS).NumMSAASamples = uVar33;
  if (uVar33 != 0) {
    pfVar32 = &(pFVar18->PS).SampleOffsetArray.Elements[0].field0_0x0._s_0.Y;
    do {
      iVar16 = CalculateMSAASampleArrayIndex(uVar33,iVar31);
      param_8._0_4_ =
           (*(TVector2<float>_u_0 *)&GRHIGlobals.DefaultMSAASampleOffsets[iVar16].field0_0x0._s_0).X
      ;
      ((TVector4<float>_u_0_s_0 *)(pfVar32 + -1))->X = param_8._0_4_;
      iVar16 = CalculateMSAASampleArrayIndex(uVar33,iVar31);
      iVar31 = iVar31 + 1;
      param_8._4_4_ =
           (*(TVector2<float>_u_0 *)&GRHIGlobals.DefaultMSAASampleOffsets[iVar16].field0_0x0._s_0).Y
      ;
      *pfVar32 = param_8._4_4_;
      pfVar32 = pfVar32 + 4;
    } while (iVar31 < (int)uVar33);
  }
  pFVar24 = FRDGAllocator::Alloc<FShadowCasterBoundsParameters>
                      ((FRDGAllocator *)&param_1->_padding_);
  lVar17 = 4;
  pFVar12 = pFVar24;
  pFVar13 = pFVar18;
  do {
    pFVar30 = pFVar13;
    pFVar28 = pFVar12;
    uVar8 = *(undefined8 *)&(pFVar30->VS).View.View.field_0x8;
    *(undefined8 *)&(pFVar28->VS).View.View = *(undefined8 *)&(pFVar30->VS).View.View;
    *(undefined8 *)&(pFVar28->VS).View.View.field_0x8 = uVar8;
    uVar8 = *(undefined8 *)&(pFVar30->VS).View.InstancedView.field_0x8;
    *(undefined8 *)&(pFVar28->VS).View.InstancedView =
         *(undefined8 *)&(pFVar30->VS).View.InstancedView;
    *(undefined8 *)&(pFVar28->VS).View.InstancedView.field_0x8 = uVar8;
    uVar8 = *(undefined8 *)&(pFVar30->VS).Scene.field_0x8;
    *(undefined8 *)&(pFVar28->VS).Scene = *(undefined8 *)&(pFVar30->VS).Scene;
    *(undefined8 *)&(pFVar28->VS).Scene.field_0x8 = uVar8;
    uVar8 = *(undefined8 *)&(pFVar30->VS).VirtualShadowMap.field_0x8;
    *(undefined8 *)&(pFVar28->VS).VirtualShadowMap = *(undefined8 *)&(pFVar30->VS).VirtualShadowMap;
    *(undefined8 *)&(pFVar28->VS).VirtualShadowMap.field_0x8 = uVar8;
    uVar8 = *(undefined8 *)&(pFVar30->PS).View.View.field_0x8;
    *(undefined8 *)&(pFVar28->PS).View.View = *(undefined8 *)&(pFVar30->PS).View.View;
    *(undefined8 *)&(pFVar28->PS).View.View.field_0x8 = uVar8;
    uVar8 = *(undefined8 *)&(pFVar30->PS).View.InstancedView.field_0x8;
    *(undefined8 *)&(pFVar28->PS).View.InstancedView =
         *(undefined8 *)&(pFVar30->PS).View.InstancedView;
    *(undefined8 *)&(pFVar28->PS).View.InstancedView.field_0x8 = uVar8;
    uVar8 = *(undefined8 *)&(pFVar30->PS).Scene.field_0x8;
    *(undefined8 *)&(pFVar28->PS).Scene = *(undefined8 *)&(pFVar30->PS).Scene;
    *(undefined8 *)&(pFVar28->PS).Scene.field_0x8 = uVar8;
    pFVar23 = (pFVar30->PS).DebugDepth;
    (pFVar28->PS).SceneDepth = (pFVar30->PS).SceneDepth;
    (pFVar28->PS).DebugDepth = pFVar23;
    lVar17 = lVar17 + -1;
    pFVar12 = (FShadowCasterBoundsParameters *)&(pFVar28->PS).NumMSAASamples;
    pFVar13 = (FShadowCasterBoundsParameters *)&(pFVar30->PS).NumMSAASamples;
  } while (lVar17 != 0);
  uVar11 = *(undefined4 *)&(pFVar30->PS).field_0x44;
  lVar17 = (pFVar30->PS)._padding_;
  (pFVar28->PS).NumMSAASamples = (pFVar30->PS).NumMSAASamples;
  *(undefined4 *)&(pFVar28->PS).field_0x44 = uVar11;
  (pFVar28->PS)._padding_ = lVar17;
  local_1c8.Texture = FSystemTextures::GetDepthDummy((FSystemTextures *)&GSystemTextures,param_1);
  local_1c8._padding_._0_2_ = 0;
  local_1c8._padding_._3_1_ = 0;
  local_1c8._padding_._4_4_ = 0;
  local_1c8._padding_._0_1_ = 0;
  local_1c8._padding_._2_1_ = 0;
  local_1c8._padding_._2_1_ = ((local_1c8.Texture)->Desc).field_0x30;
  cVar2 = ((local_1c8.Texture)->Desc).field_0x32;
  if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
    local_1c8._padding_._4_4_ = (uint)*(ushort *)&((local_1c8.Texture)->Desc).field_0x2e << 0x10;
  }
  pFVar23 = FRDGBuilder::CreateSRV(param_1,&local_1c8);
  (pFVar24->PS).DebugDepth = pFVar23;
  (pFVar24->RenderTargets).Output.Elements[0].Texture = (FRDGTexture *)0x0;
  (pFVar24->RenderTargets).Output.Elements[0].ResolveTexture = (FRDGTexture *)0x0;
  uStack_154 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0xffff0000;
  (pFVar24->RenderTargets).Output.Elements[0].LoadAction = ENoAction;
  (pFVar24->RenderTargets).Output.Elements[0].MipIndex = '\0';
  (pFVar24->RenderTargets).Output.Elements[0].ArraySlice = -1;
  *(undefined4 *)&(pFVar24->RenderTargets).Output.Elements[0].field_0x14 = 0;
  local_198.ResolveTexture = (FRDGTexture *)0x0;
  local_198.DepthLoadAction = ELoad;
  local_198.StencilLoadAction = ENoAction;
  local_198.DepthStencilAccess.Value = DepthWrite;
  local_198.Texture = param_7;
  bVar14 = FDepthStencilBinding::Validate(&local_198);
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x289,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (pFVar24->RenderTargets).DepthStencil.Texture = local_198.Texture;
  (pFVar24->RenderTargets).DepthStencil.ResolveTexture = local_198.ResolveTexture;
  (pFVar24->RenderTargets).DepthStencil.DepthLoadAction = local_198.DepthLoadAction;
  (pFVar24->RenderTargets).DepthStencil.StencilLoadAction = local_198.StencilLoadAction;
  *(undefined2 *)&(pFVar24->RenderTargets).DepthStencil.field_0x12 = local_198._18_2_;
  (pFVar24->RenderTargets).DepthStencil.DepthStencilAccess =
       (FExclusiveDepthStencil)local_198.DepthStencilAccess.Value;
  TVar5 = (param_5->field0_0x0)._s_0.Min.field0_0x0;
  TVar6 = (param_5->field0_0x0)._s_0.Max.field0_0x0;
  pFVar25 = FRDGEventName::FRDGEventName(&local_108,1,L"RenderShadowCasterBounds_Depth");
  pFVar21 = FShadowCasterBoundsParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass
            (&param_1->UserValidation,pFVar24,pFVar21,pFVar25,NeverCull|Raster);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar26 = FRDGEventName::GetTCHAR(pFVar25);
  EVar15 = FRDGBuilder::OverridePassFlags(param_1,pwVar26,NeverCull|Raster);
  pFVar27 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
  local_138.Contents = (uchar *)pFVar24;
  if (((pFVar21->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_138.Layout.Reference = (pFVar21->Layout).Reference;
  if (local_138.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_138.Layout.Reference);
  }
  local_138.Metadata = pFVar21;
  FRDGPass::FRDGPass(pFVar27,pFVar25,&local_138,EVar15,Async);
  pFVar27->_padding_ =
       (longlong)
       &TRDGLambdaPass<FShadowCasterBoundsParameters,`FVirtualShadowMapArray::RenderShadowCasterBounds'::`19'::<lambda_1>_>
        ::_vftable_;
  *(undefined4 *)&pFVar27[1].FullPathIfDebug.Data.AllocatorInstance.Data = uVar4;
  *(FViewInfo **)&pFVar27[1].FullPathIfDebug.Data.ArrayNum = param_2;
  pFVar27[1]._padding_ = (longlong)pFVar24;
  pFVar27[1].Name.EventFormat = (wchar_t *)TVar5;
  pFVar27[1].Name.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)TVar6;
  *(FShadowCasterBoundsParameters **)&pFVar27[1].Name.FormattedEventName.Data.ArrayNum = pFVar24;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar27);
  pTVar1 = &param_1->Passes;
  iVar31 = (param_1->Passes).Array.ArrayNum;
  if (iVar31 == (param_1->Passes).Array.ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)pTVar1,&(param_1->Passes).Array.ArrayMax
                       );
  }
  (param_1->Passes).Array.ArrayNum = iVar31 + 1;
  (pTVar1->Array).AllocatorInstance.Data[iVar31] = pFVar27;
  (pFVar27->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar27);
  if (local_108.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.FormattedEventName.Data.AllocatorInstance.Data);
  }
  local_1b0._padding_._2_1_ = (param_7->Desc).field_0x30;
  cVar2 = (param_7->Desc).field_0x32;
  local_1b0._padding_._0_2_ = 0;
  local_1b0._padding_._3_1_ = 0;
  local_1b0._padding_._4_4_ = 0;
  local_1b0._padding_._0_1_ = 0;
  local_1b0._padding_._2_1_ = 0;
  if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
    local_1b0._padding_._4_4_ = (uint)*(ushort *)&(param_7->Desc).field_0x2e << 0x10;
  }
  local_1b0.Texture = param_7;
  pFVar23 = FRDGBuilder::CreateSRV(param_1,&local_1b0);
  (pFVar18->PS).DebugDepth = pFVar23;
  local_180.ResolveTexture = (FRDGTexture *)0x0;
  local_180.LoadAction = ELoad;
  local_180.MipIndex = '\0';
  local_180.ArraySlice = -1;
  local_180.Texture = param_6;
  bVar14 = FRenderTargetBinding::Validate(&local_180);
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x216,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (pFVar18->RenderTargets).Output.Elements[0].Texture = local_180.Texture;
  (pFVar18->RenderTargets).Output.Elements[0].ResolveTexture = local_180.ResolveTexture;
  local_140 = 0;
  (pFVar18->RenderTargets).Output.Elements[0].LoadAction = local_180.LoadAction;
  (pFVar18->RenderTargets).Output.Elements[0].MipIndex = local_180.MipIndex;
  (pFVar18->RenderTargets).Output.Elements[0].ArraySlice = local_180.ArraySlice;
  *(undefined4 *)&(pFVar18->RenderTargets).Output.Elements[0].field_0x14 = local_180._20_4_;
  (pFVar18->RenderTargets).DepthStencil.Texture = (FRDGTexture *)0x0;
  (pFVar18->RenderTargets).DepthStencil.ResolveTexture = (FRDGTexture *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  (pFVar18->RenderTargets).DepthStencil.DepthLoadAction = ENoAction;
  (pFVar18->RenderTargets).DepthStencil.StencilLoadAction = ENoAction;
  *(undefined2 *)&(pFVar18->RenderTargets).DepthStencil.field_0x12 = 0;
  (pFVar18->RenderTargets).DepthStencil.DepthStencilAccess = DepthNop;
  TVar5 = (param_5->field0_0x0)._s_0.Min.field0_0x0;
  TVar6 = (param_5->field0_0x0)._s_0.Max.field0_0x0;
  pFVar25 = FRDGEventName::FRDGEventName(&local_f0,1,L"RenderShadowCasterBounds");
  pFVar21 = FShadowCasterBoundsParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass
            (&param_1->UserValidation,pFVar18,pFVar21,pFVar25,NeverCull|Raster);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar26 = FRDGEventName::GetTCHAR(pFVar25);
  EVar15 = FRDGBuilder::OverridePassFlags(param_1,pwVar26,NeverCull|Raster);
  pFVar27 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
  local_120.Contents = (uchar *)pFVar18;
  if (((pFVar21->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_120.Layout.Reference = (pFVar21->Layout).Reference;
  if (local_120.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_120.Layout.Reference);
  }
  local_120.Metadata = pFVar21;
  FRDGPass::FRDGPass(pFVar27,pFVar25,&local_120,EVar15,Async);
  pFVar27->_padding_ =
       (longlong)
       &TRDGLambdaPass<FShadowCasterBoundsParameters,`FVirtualShadowMapArray::RenderShadowCasterBounds'::`20'::<lambda_2>_>
        ::_vftable_;
  *(undefined4 *)&pFVar27[1].FullPathIfDebug.Data.AllocatorInstance.Data = uVar4;
  *(FViewInfo **)&pFVar27[1].FullPathIfDebug.Data.ArrayNum = param_2;
  pFVar27[1]._padding_ = (longlong)pFVar18;
  pFVar27[1].Name.EventFormat = (wchar_t *)TVar5;
  pFVar27[1].Name.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)TVar6;
  *(FShadowCasterBoundsParameters **)&pFVar27[1].Name.FormattedEventName.Data.ArrayNum = pFVar18;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar27);
  iVar31 = (param_1->Passes).Array.ArrayNum;
  if (iVar31 == (param_1->Passes).Array.ArrayMax) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)pTVar1,&(param_1->Passes).Array.ArrayMax
                       );
  }
  (param_1->Passes).Array.ArrayNum = iVar31 + 1;
  (pTVar1->Array).AllocatorInstance.Data[iVar31] = pFVar27;
  (pFVar27->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar27);
  if (local_f0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// RenderVirtualShadowMapsNanite @ 14580ab80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::RenderVirtualShadowMapsNanite
          (FVirtualShadowMapArray *this,FRDGBuilder *param_1,FSceneRenderer *param_2,bool param_3,
          FNaniteVisibilityQuery *param_4,
          TArrayView<FNaniteVirtualShadowMapRenderPass_const_,int> *param_5)

{
  TIntPoint<int> *pTVar1;
  ulonglong uVar2;
  FRDGUserValidation *this_00;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *this_01;
  char cVar3;
  uint *puVar4;
  longlong lVar5;
  code *pcVar6;
  TIntPoint<int>_u_0_s_0 TVar7;
  TIntPoint<int>_u_0 *pTVar8;
  TVector2<float>_u_0 TVar9;
  TRefCountPtr<IPooledRenderTarget> *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  FRDGScope *pFVar17;
  FRasterContext *pFVar18;
  TStatId TVar19;
  FThreadStats *this_02;
  FRDGBuffer *pFVar20;
  FRDGBufferUAV *pFVar21;
  undefined8 *puVar22;
  FShaderParametersMetadata *pFVar23;
  FRDGBufferSRV *pFVar24;
  FRDGBufferUAV *pFVar25;
  FGlobalShaderType *pFVar26;
  FShaderType *pFVar27;
  FName FVar28;
  FRDGEventName *pFVar29;
  FVirtualShadowMapArray *pFVar30;
  undefined ***pppuVar31;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  longlong *plVar35;
  FNameEntryId FVar36;
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *pTVar37;
  FParameters *pFVar38;
  uchar auVar39 [8];
  bool bVar40;
  undefined1 auStackY_578 [32];
  FViewDrawGroup *pFVar41;
  ulong64 uVar42;
  undefined1 local_4f7;
  undefined1 local_4f6 [2];
  uint local_4f4;
  FRDGBuffer *local_4f0;
  uint local_4e8;
  TIntRect<int>_u_0 local_4e0;
  undefined8 *local_4d0;
  undefined8 *local_4c8;
  longlong *local_4c0;
  undefined4 local_4b8;
  int iStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 local_4a8;
  int local_4a0;
  uint local_49c;
  TArrayView<FNaniteVirtualShadowMapRenderPass_const_,int> *local_498;
  TIntPoint<int>_u_0 *local_490;
  FVirtualShadowMapArray *local_488;
  FRDGBufferUAVDesc local_480;
  FRDGBufferUAVDesc local_470;
  FRDGBufferUAVDesc local_460;
  FRDGBufferUAVDesc local_450;
  TVector2<float>_u_0 local_440;
  undefined8 uStack_438;
  TIntPoint<int>_u_0 local_430;
  int local_428;
  int iStack_424;
  uint local_420;
  uint uStack_41c;
  FViewInfo *local_418;
  FRDGBuffer *local_410;
  undefined1 local_408 [28];
  int iStack_3ec;
  longlong lStack_3e8;
  longlong local_3e0;
  FRDGBufferDesc local_3d8;
  TIntVector3<int>_u_0 local_3b8;
  FRDGBufferSRVDesc local_3a8;
  FRDGBufferSRVDesc local_388;
  undefined4 local_368;
  FName local_360;
  TRefCountPtr<IPooledRenderTarget> *local_358;
  FSharedContext *local_350;
  FStatMessage local_348;
  FNaniteVisibilityQuery *local_338;
  FRDGScope *local_330;
  void *local_328;
  TRDGEventScopeGuard<FRDGScope_RHI> local_320;
  char local_310;
  TIntVector3<int>_u_0 local_308;
  TIntVector3<int>_u_0 local_2f8;
  TIntRect<int>_u_0 local_2e8;
  FTaskHandle local_2d8;
  EUniformBufferBindingFlags EStack_2d0;
  undefined7 uStack_2cf;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2b8;
  FRDGEventName local_2a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32>_const_*,std::tuple<>_> local_290;
  FString local_280;
  FString local_270;
  TShaderRefBase<FComputeExplicitChunkDrawsViewMask_CS,FShaderMapPointerTable> local_258;
  undefined1 local_240 [8];
  TShaderRefBase<FCompactViewsVSM_CS,FShaderMapPointerTable> local_238;
  uint uStack_21c;
  int local_218;
  int iStack_214;
  FRDGEventName local_208;
  TVector2<float>_u_0 local_1e8;
  TIntPoint<int>_u_0 TStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  FRDGTextureUAV *local_1c8;
  FRDGTextureUAV *pFStack_1c0;
  FRDGTextureUAV *local_1b8;
  FRDGTextureUAV *pFStack_1b0;
  FRDGTextureUAV *local_1a8;
  undefined8 uStack_1a0;
  FRDGTexture *local_198;
  FRDGTexture *pFStack_190;
  FRDGTexture *local_188;
  FRDGTexture *pFStack_180;
  undefined1 local_178 [144];
  code *local_e8 [2];
  undefined **local_d8;
  int local_d0;
  undefined ***local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  uint *local_a0;
  undefined ***local_90;
  code *local_88 [2];
  undefined **local_78;
  uint *local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_578;
  local_338 = param_4;
  local_498 = param_5;
  local_4f4 = 0;
  local_488 = this;
  IsCsvLogEnabled(this);
  bVar40 = -1 < CpuChannel->Enabled;
  if (bVar40) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3798,"FVirtualShadowMapArray::RenderVirtualShadowMapsNanite"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
               ,0xed6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3798);
  }
  cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_310 = '\0';
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_218 = 0;
      iStack_214 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_21c);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_RenderVirtualSh;
      ::Desc._padding_ = (longlong)u_RenderVirtualSh;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0xed7;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l7::Desc::operator()<>'::
             __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_290._Myfirst._Val = &::Desc;
    local_320.State = (FRDGScopeState *)param_1;
    pFVar17 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar17;
    local_320.Scope = pFVar17;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32>_const_*,std::tuple<>_>_>
              (&(pFVar17->Impl).Impl,(FRDGScopeState *)param_1,&local_290);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_310 = '\x01';
  }
  pFVar17 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)pFVar17;
  local_330 = pFVar17;
  UE::Core::Private::
  TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
  Destruct((ulonglong)(pFVar17->Impl).Impl.TypeIndex,&pFVar17->Impl);
  FRDGScope_Budget::FRDGScope_Budget
            ((FRDGScope_Budget *)&pFVar17->Impl,(FRDGScopeState *)param_1,
             &GDynamicResolutionVSMNaniteBudget);
  (pFVar17->Impl).Impl.TypeIndex = '\x01';
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_);
  }
  if ((this->bInitialized == false) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bInitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                          ,0x421,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_424 = (this->UniformParameters).PhysicalPoolSize.field0_0x0._s_0.Y;
  pTVar1 = &(this->UniformParameters).PhysicalPoolSize;
  local_428 = (pTVar1->field0_0x0)._s_0.X;
  TVar7 = (pTVar1->field0_0x0)._s_0;
  local_430 = (TIntPoint<int>_u_0)0x0;
  local_440 = (TVector2<float>_u_0)0x0;
  uStack_438 = (ulonglong)param_2->FeatureLevel;
  local_440 = (TVector2<float>_u_0)
              GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [(int)param_2->FeatureLevel]);
  uStack_438._0_5_ = CONCAT14(1,(undefined4)uStack_438);
  if ((this->PhysicalPagePoolRDG == (FRDGTexture *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("PhysicalPagePoolRDG != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                          ,0xee2,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_2e8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_430;
  local_2e8._12_4_ = iStack_424;
  local_2e8._8_4_ = local_428;
  pFVar18 = Nanite::InitRasterContext
                      ((FRasterContext *)(local_178 + 0x10),param_1,
                       (FSharedContext *)&local_440._s_0,&param_2->ViewFamily,(TIntPoint<int>)TVar7,
                       (TIntRect<int> *)&local_2e8._s_0,DepthOnly,false,true,(FRDGBufferSRV *)0x0,0,
                       this->PhysicalPagePoolRDG,false,this->bEnableNaniteVisualization,
                       this->bEnableNaniteVisualization,false);
  local_1e8 = (pFVar18->RcpViewSize).field0_0x0;
  TStack_1e0 = (pFVar18->TextureSize).field0_0x0;
  local_1d8._0_1_ = pFVar18->RasterMode;
  local_1d8._1_1_ = pFVar18->RasterScheduling;
  local_1d8._2_6_ = *(undefined6 *)&pFVar18->field_0x12;
  uStack_1d0 = *(undefined8 *)&pFVar18->field_0x18;
  local_1c8 = (pFVar18->Parameters).OutDepthBuffer;
  pFStack_1c0 = (pFVar18->Parameters).OutDepthBufferArray;
  local_1b8 = (pFVar18->Parameters).OutVisBuffer64;
  pFStack_1b0 = (pFVar18->Parameters).OutDbgBuffer64;
  local_1a8 = (pFVar18->Parameters).OutDbgBuffer32;
  uStack_1a0 = *(undefined8 *)&(pFVar18->Parameters).field_0x28;
  local_198 = pFVar18->DepthBuffer;
  pFStack_190 = pFVar18->VisBuffer64;
  local_188 = pFVar18->DbgBuffer64;
  pFStack_180 = pFVar18->DbgBuffer32;
  local_178[0] = pFVar18->VisualizeActive;
  local_178[1] = pFVar18->VisualizeModeOverdraw;
  local_178[2] = pFVar18->bCustomPass;
  local_178[3] = pFVar18->bEnableAssemblyMeta;
  local_178._4_4_ = *(undefined4 *)&pFVar18->field_0x74;
  local_178._8_8_ = *(undefined8 *)&pFVar18->field_0x78;
  if ((*(int *)&param_2->field_0x18 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_418 = *(FViewInfo **)&param_2->field_0x10;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&VirtualFilterName,L"VirtualShadowMaps");
    atexit(`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l2::
           _dynamic_atexit_destructor_for__VirtualFilterName__);
    _Init_thread_footer(&::_TSS0);
  }
  local_4e8 = 0;
  iVar15 = local_498->ArrayNum;
  if (0 < iVar15) {
    local_408._8_8_ = 0;
    plVar35 = &param_1->_padding_;
    local_49c = (param_3 | 0x40) * 2;
    local_358 = &this->HZBPhysicalArray;
    local_350 = (FSharedContext *)&param_2->field_0x20;
    local_4c0 = plVar35;
    do {
      uVar34 = local_408._8_8_;
      uVar14 = 0;
      if ((int)local_4e8 < iVar15) {
        uVar14 = ~local_4e8 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_490 = (TIntPoint<int>_u_0 *)
                  ((longlong)&local_498->DataPtr->SceneInstanceCullingQuery + uVar34);
      uVar34 = *local_490;
      puVar4 = *(uint **)local_490[4].XY;
      auVar39[4] = '\0';
      auVar39[5] = '\0';
      auVar39[6] = '\0';
      auVar39[7] = '\0';
      auVar39._0_4_ = *puVar4;
      local_4e0._s_0.Max.field0_0x0 = (TIntPoint<int>)uVar34;
      if ((auVar39 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
        TVar19 = FThreadSafeStaticStatInner<FStat_STAT_VSMNaniteViewsPrimary,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_VSMNaniteViewsPrimary,1> *)
                            &StatPtr_STAT_VSMNaniteViewsPrimary);
        FVar28 = *(FName *)(TVar19.StatIdPtr)->Name;
        FVar36 = FVar28.ComparisonIndex.Value;
        uVar14 = FVar28.Number;
        local_420 = FVar36.Value;
        uStack_41c = uVar14;
        if ((FVar28 != (FName)0x0) &&
           ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))
           )) {
          this_02 = FThreadStats::GetThreadStats();
          local_348.NameAndInfo.Number = uVar14 & 0xffffafff | 0xa000;
          local_360 = FVar28;
          local_348.StatData.Pad = auVar39;
          local_348.NameAndInfo.Index.Value = FVar36.Value;
          FThreadStats::AddStatMessage(this_02,&local_348);
          FStatsTrace::Add(&local_360,(long64)auVar39);
          if (this_02->ScopeCount == 0) {
            FThreadStats::Flush(this_02,false,false);
            uVar34 = local_4e0._s_0.Max.field0_0x0;
          }
          else {
            uVar34 = local_4e0._s_0.Max.field0_0x0;
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_02,false,false);
              uVar34 = local_4e0._s_0.Max.field0_0x0;
            }
          }
        }
      }
      pTVar37 = &param_1->Buffers;
      this_00 = &param_1->UserValidation;
      local_4b8 = 0x3d0;
      uStack_4b0 = 0x10109;
      local_4a8 = 0;
      iStack_4b4 = *(int *)((longlong)local_490 + 0x1c);
      uStack_4ac = local_2a8.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
      local_408._24_4_ = 0x3d0;
      lStack_3e8 = CONCAT44(local_2a8.FormattedEventName.Data.AllocatorInstance.Data._4_4_,0x10109);
      local_3e0 = 0;
      iStack_3ec = iStack_4b4;
      FRDGUserValidation::ValidateCreateBuffer
                (this_00,(FRDGBufferDesc *)(local_408 + 0x18),L"Shadow.Virtual.CompactedViews",None)
      ;
      if (local_408._24_4_ == 0) {
        local_408._24_4_ = 1;
      }
      if (iStack_3ec == 0) {
        iStack_3ec = 1;
      }
      pFVar20 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,8);
      pFVar20 = FRDGBuffer::FRDGBuffer
                          (pFVar20,L"Shadow.Virtual.CompactedViews",
                           (FRDGBufferDesc *)(local_408 + 0x18),None);
      iVar15 = (param_1->Buffers).Array.ArrayNum;
      local_410 = pFVar20;
      if (iVar15 == (param_1->Buffers).Array.ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                           (0x808,(ForElementType<FRDGBuffer_*> *)pTVar37,
                            &(param_1->Buffers).Array.ArrayMax);
      }
      (param_1->Buffers).Array.ArrayNum = iVar15 + 1;
      (pTVar37->Array).AllocatorInstance.Data[iVar15] = pFVar20;
      (pFVar20->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
      FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar20);
      FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar20);
      local_4a0 = *(int *)(uVar34 + 0x10);
      if ((local_4a0 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar41 = *(FViewDrawGroup **)(uVar34 + 8);
      uVar14 = *(uint *)((longlong)local_4e0._s_0.Max.field0_0x0 + 0x10);
      if (((int)uVar14 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
                               ::__l2::_thread_safe_static_guard_0__),
         `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
        ::__l2::DummyElement.FirstView = 0;
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
        ::__l2::DummyElement.NumViews = 0;
        _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      bVar11 = uVar14 != 0;
      if (bVar11) {
        uVar42 = (longlong)(int)uVar14 << 3;
      }
      else {
        uVar42 = 8;
        uVar14 = 1;
        pFVar41 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
                   ::__l2::DummyElement;
      }
      local_4f0 = CreateStructuredBuffer
                            (param_1,L"Shadow.ViewDrawRanges",8,uVar14,pFVar41,uVar42,!bVar11);
      uStack_4ac = local_2a8.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
      local_4b8 = 4;
      iStack_4b4 = 2;
      uStack_4b0 = 0x10109;
      local_3d8.BytesPerElement = 4;
      local_3d8.NumElements = 2;
      local_3d8._8_8_ =
           CONCAT44(local_2a8.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                    StructuredBuffer|ShaderResource|UnorderedAccess|Static);
      local_4a8 = 0;
      local_3d8.Metadata = (FShaderParametersMetadata *)0x0;
      FRDGUserValidation::ValidateCreateBuffer
                (this_00,&local_3d8,L"Shadow.Virtual.CompactedViewsAllocation",None);
      if (local_3d8.BytesPerElement == 0) {
        local_3d8.BytesPerElement = 1;
      }
      if (local_3d8.NumElements == 0) {
        local_3d8.NumElements = 1;
      }
      pFVar20 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,8);
      pFVar20 = FRDGBuffer::FRDGBuffer
                          (pFVar20,L"Shadow.Virtual.CompactedViewsAllocation",&local_3d8,None);
      iVar15 = (param_1->Buffers).Array.ArrayNum;
      if (iVar15 == (param_1->Buffers).Array.ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                           (0x808,(ForElementType<FRDGBuffer_*> *)pTVar37,
                            &(param_1->Buffers).Array.ArrayMax);
      }
      (param_1->Buffers).Array.ArrayNum = iVar15 + 1;
      (pTVar37->Array).AllocatorInstance.Data[iVar15] = pFVar20;
      (pFVar20->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
      FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar20);
      FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar20);
      local_470._padding_._1_1_ = 0;
      local_470._padding_._2_1_ = 0;
      local_470._padding_._0_1_ = 0;
      if (((pFVar20->Desc).Usage & DrawIndirect) != None) {
        local_470._padding_._0_1_ = 0x1c;
      }
      local_470.Buffer = pFVar20;
      FRDGUserValidation::ValidateCreateUAV(this_00,&local_470);
      pFVar20 = local_470.Buffer;
      pFVar21 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
      lVar5 = pFVar20->_padding_;
      *(byte *)&pFVar21->_padding_ = (byte)pFVar21->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&pFVar21->_padding_ + 4) = 0xffffffffffffffff;
      pFVar21->_padding_ = lVar5;
      pFVar21->_padding_ = 0;
      *(undefined1 *)&pFVar21->_padding_ = 2;
      *(undefined1 *)&pFVar21->_padding_ = 0;
      pFVar21->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
      (pFVar21->Desc)._padding_ =
           CONCAT53(local_470._padding_._3_5_,
                    CONCAT12(local_470._padding_._2_1_,
                             CONCAT11(local_470._padding_._1_1_,(undefined1)local_470._padding_)));
      (pFVar21->Desc).Buffer = local_470.Buffer;
      iVar15 = (param_1->Views).Array.ArrayNum;
      if (iVar15 == (param_1->Views).Array.ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar15 + 1;
      (param_1->Views).Array.AllocatorInstance.Data[iVar15] = (FRDGView *)pFVar21;
      *(int *)((longlong)&pFVar21->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV(this_00,pFVar21);
      AddClearUAVPass(param_1,pFVar21,0,Compute);
      uVar14 = 1;
      if (*puVar4 != 0) {
        uVar14 = *puVar4;
      }
      puVar33 = (undefined8 *)0x0;
      local_60 = (undefined ***)0x0;
      local_90 = (undefined ***)0x0;
      local_c0 = (undefined ***)0x0;
      uVar2 = (ulonglong)(uVar14 - 1) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::`24'::<lambda_4>,0,0>
                  ::_vftable_;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_4>,unsigned___int64>
                    ::Call;
      local_a8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::`24'::<lambda_3>,0,0>
                  ::_vftable_;
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_3>,void_const_*>
                    ::Call;
      local_d8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::`24'::<lambda_2>,0,0>
                  ::_vftable_;
      local_d0 = 1 << ((byte)lVar5 & 0x1f);
      local_e8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_2>,unsigned_int>
                    ::Call;
      local_368 = (undefined4)lVar5;
      local_a0 = puVar4;
      local_70 = puVar4;
      pFVar20 = CreateStructuredBuffer
                          (param_1,L"Shadow.Virtual.InputViews",0x3d0,
                           (TFunction<unsigned_int___cdecl(void)> *)local_e8,
                           (TFunction<void_const_*___cdecl(void)> *)local_b8,
                           (TFunction<unsigned___int64___cdecl(void)> *)local_88);
      if (local_e8[0] != (code *)0x0) {
        pppuVar31 = &local_d8;
        if (local_c0 != (undefined ***)0x0) {
          pppuVar31 = local_c0;
        }
        (*(code *)(*pppuVar31)[2])();
      }
      if (local_b8[0] != (code *)0x0) {
        pppuVar31 = &local_a8;
        if (local_90 != (undefined ***)0x0) {
          pppuVar31 = local_90;
        }
        (*(code *)(*pppuVar31)[2])();
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar31 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar31 = local_60;
        }
        (*(code *)(*pppuVar31)[2])();
      }
      puVar22 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
      if (puVar22 == (undefined8 *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        puVar22[2] = 0;
        *puVar22 = &___7__TObject_VFParameters_FCompactViewsVSM_CS___FRDGAllocator__6B_;
        *(undefined1 *)(puVar22 + 3) = 1;
        puVar22[4] = 0;
        puVar22[5] = 0;
        puVar22[6] = 0;
        puVar22[8] = 0;
        puVar22[9] = 0;
        puVar33 = puVar22;
      }
      local_4d0 = puVar33;
      if ((((undefined8 **)*plVar35 <= &local_4d0) &&
          (&local_4d0 < (undefined8 **)*plVar35 + *(int *)((longlong)plVar35 + 0xc))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar15 = (int)plVar35[1];
      if (iVar15 == *(int *)((longlong)plVar35 + 0xc)) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar35,(int *)((longlong)plVar35 + 0xc));
      }
      pFVar30 = local_488;
      *(int *)(plVar35 + 1) = iVar15 + 1;
      *(undefined8 **)(*plVar35 + (longlong)iVar15 * 8) = local_4d0;
      iVar15 = (local_488->CachedUniformBuffers).ArrayNum;
      if (iVar15 == 0) {
        TVar32.Reference = (FTaskBase *)0x0;
      }
      else {
        uVar14 = iVar15 - 1U;
        if (0 < (int)(iVar15 - 1U)) {
          uVar14 = 0;
        }
        uVar16 = 0;
        if ((int)uVar14 < iVar15) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TVar32.Reference =
             *(FTaskBase **)
              ((pFVar30->CachedUniformBuffers).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
      }
      pFVar23 = FVirtualShadowMapUniformParameters::GetStructMetadata();
      local_3a8._padding_._4_4_ = 0;
      local_3a8._padding_._0_4_ = 0xffffffff;
      local_3a8._padding_ = 0;
      EStack_2d0 = Static;
      if (pFVar23->BindingFlags != StaticAndShader) {
        EStack_2d0 = pFVar23->BindingFlags;
      }
      uVar12 = 0;
      *(FTaskBase **)&((FParameters *)(puVar33 + 2))->VirtualShadowMap = TVar32.Reference;
      puVar33[3] = CONCAT71(uStack_2cf,EStack_2d0);
      if (((pFVar20->Desc).Usage & DrawIndirect) != None) {
        uVar12 = 0x1c;
      }
      local_3a8._padding_._0_4_ =
           CONCAT31((int3)((uint)(undefined4)local_3a8._padding_ >> 8),uVar12);
      local_3a8.Buffer = pFVar20;
      local_2d8.Pimpl.Reference =
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar32.Reference;
      FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_3a8);
      pFVar20 = local_3a8.Buffer;
      pFVar24 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
      lVar5 = pFVar20->_padding_;
      *(byte *)&pFVar24->_padding_ = (byte)pFVar24->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&pFVar24->_padding_ + 4) = 0xffffffffffffffff;
      pFVar24->_padding_ = 0;
      this_01 = &param_1->Views;
      pFVar24->_padding_ = lVar5;
      *(undefined1 *)&pFVar24->_padding_ = 3;
      pFVar24->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      (pFVar24->Desc)._padding_ =
           CONCAT44(local_3a8._padding_._4_4_,(undefined4)local_3a8._padding_);
      (pFVar24->Desc)._padding_ =
           CONCAT44(local_3a8._padding_._4_4_,(undefined4)local_3a8._padding_);
      (pFVar24->Desc)._padding_ = local_3a8._padding_;
      (pFVar24->Desc).Buffer = local_3a8.Buffer;
      iVar15 = (param_1->Views).Array.ArrayNum;
      if (iVar15 == (param_1->Views).Array.ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)this_01,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar15 + 1;
      (this_01->Array).AllocatorInstance.Data[iVar15] = (FRDGView *)pFVar24;
      *(int *)((longlong)&pFVar24->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar24);
      local_480.Buffer = local_410;
      local_480._padding_._2_1_ = 0;
      local_480._padding_._1_1_ = 0;
      puVar33[4] = pFVar24;
      local_480._padding_._0_1_ = 0;
      if (((local_410->Desc).Usage & DrawIndirect) != None) {
        local_480._padding_._0_1_ = 0x1c;
      }
      FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_480);
      pFVar20 = local_480.Buffer;
      pFVar25 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
      pFVar25->_padding_ = pFVar20->_padding_;
      *(byte *)&pFVar25->_padding_ = (byte)pFVar25->_padding_ & 0xfe;
      pFVar25->_padding_ = 0;
      *(undefined1 *)&pFVar25->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar25->_padding_ + 4) = 0xffffffffffffffff;
      pFVar25->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
      *(undefined1 *)&pFVar25->_padding_ = 2;
      (pFVar25->Desc)._padding_ =
           CONCAT53(local_480._padding_._3_5_,
                    CONCAT12(local_480._padding_._2_1_,
                             CONCAT11(local_480._padding_._1_1_,(undefined1)local_480._padding_)));
      (pFVar25->Desc).Buffer = local_480.Buffer;
      iVar15 = (param_1->Views).Array.ArrayNum;
      if (iVar15 == (param_1->Views).Array.ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)this_01,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar15 + 1;
      (this_01->Array).AllocatorInstance.Data[iVar15] = (FRDGView *)pFVar25;
      *(int *)((longlong)&pFVar25->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar25);
      puVar33[8] = pFVar21;
      local_460._padding_._2_1_ = 0;
      local_460._padding_._1_1_ = 0;
      puVar33[5] = pFVar25;
      local_460.Buffer = local_4f0;
      local_460._padding_._0_1_ = 0;
      if (((local_4f0->Desc).Usage & DrawIndirect) != None) {
        local_460._padding_._0_1_ = 0x1c;
      }
      FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_460);
      pFVar20 = local_460.Buffer;
      pFVar21 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
      pFVar21->_padding_ = pFVar20->_padding_;
      *(byte *)&pFVar21->_padding_ = (byte)pFVar21->_padding_ & 0xfe;
      pFVar21->_padding_ = 0;
      *(undefined1 *)&pFVar21->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar21->_padding_ + 4) = 0xffffffffffffffff;
      pFVar21->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
      *(undefined1 *)&pFVar21->_padding_ = 2;
      (pFVar21->Desc)._padding_ =
           CONCAT53(local_460._padding_._3_5_,
                    CONCAT12(local_460._padding_._2_1_,
                             CONCAT11(local_460._padding_._1_1_,(undefined1)local_460._padding_)));
      (pFVar21->Desc).Buffer = local_460.Buffer;
      iVar15 = (param_1->Views).Array.ArrayNum;
      if (iVar15 == (param_1->Views).Array.ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)this_01,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar15 + 1;
      (this_01->Array).AllocatorInstance.Data[iVar15] = (FRDGView *)pFVar21;
      *(int *)((longlong)&pFVar21->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar21);
      TVar9 = local_440;
      puVar33[6] = pFVar21;
      pFVar26 = FCompactViewsVSM_CS::GetStaticType();
      if (*(int *)&pFVar26->field_0x50 != 1) {
        local_4f7 = 0;
        `FGlobalShaderMap::GetShader<FCompactViewsVSM_CS>'::__l2::<lambda_1>::operator()(&local_4f7)
        ;
      }
      pFVar27 = (FShaderType *)FCompactViewsVSM_CS::GetStaticType();
      FGlobalShaderMap::GetShader((FGlobalShaderMap *)TVar9,&local_2c8,pFVar27,0);
      if (local_2c8.ShaderContent == (FShader *)0x0) {
        FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_240);
        ::FName::ToString((FName *)FVar28,&local_280);
        FCompactViewsVSM_CS::GetStaticType();
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FCompactViewsVSM_CS::GetStaticType();
      local_238.ShaderContent = (FCompactViewsVSM_CS *)local_2c8.ShaderContent;
      local_238.ShaderMap = local_2c8.ShaderMap;
      pFVar29 = FRDGEventName::FRDGEventName(&local_208,1,L"CompactViewsVSM");
      pFVar23 = FCompactViewsVSM_CS::FParameters::FTypeInfo::GetStructMetadata();
      local_3b8._s_0.X = local_4a0;
      local_3b8._s_0.Y = 1;
      local_3b8._s_0.Z = 1;
      FComputeShaderUtils::AddPass<FCompactViewsVSM_CS>
                (param_1,pFVar29,Compute,&local_238,pFVar23,(FParameters *)(puVar33 + 2),
                 (TIntVector3<int> *)&local_3b8._s_0);
      uVar14 = local_4f4;
      local_4f4 = local_4f4 & 0xfffffffd;
      if ((FExtractedBuffer *)local_208.FormattedEventName.Data.AllocatorInstance.Data !=
          (FExtractedBuffer *)0x0) {
        FMemory::Free(local_208.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (((uVar14 & 1) != 0) &&
         (local_4f4 = uVar14 & 0xfffffffc, (void *)local_408._16_8_ != (void *)0x0)) {
        FMemory::Free((void *)local_408._16_8_);
      }
      TVar9 = local_440;
      if (local_490[5] != (TIntPoint<int>_u_0)0x0) {
        pFVar26 = FComputeExplicitChunkDrawsViewMask_CS::GetStaticType();
        if (*(int *)&pFVar26->field_0x50 != 1) {
          local_4f6[0] = 0;
          `FGlobalShaderMap::GetShader<FComputeExplicitChunkDrawsViewMask_CS>'::__l2::<lambda_1>::
          operator()(local_4f6);
        }
        pFVar27 = (FShaderType *)FComputeExplicitChunkDrawsViewMask_CS::GetStaticType();
        FGlobalShaderMap::GetShader((FGlobalShaderMap *)TVar9,&local_2b8,pFVar27,0);
        if (local_2b8.ShaderContent == (FShader *)0x0) {
          FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_328);
          ::FName::ToString((FName *)FVar28,&local_270);
          FComputeExplicitChunkDrawsViewMask_CS::GetStaticType();
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_270.Data.AllocatorInstance.Data);
          }
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FComputeExplicitChunkDrawsViewMask_CS::GetStaticType();
        local_258.ShaderContent = (FComputeExplicitChunkDrawsViewMask_CS *)local_2b8.ShaderContent;
        local_258.ShaderMap = local_2b8.ShaderMap;
        puVar22 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
        puVar33 = (undefined8 *)0x0;
        if (puVar22 == (undefined8 *)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          puVar22[3] = 0;
          *puVar22 = &
                     ___7__TObject_VFParameters_FComputeExplicitChunkDrawsViewMask_CS___FRDGAllocator__6B_
          ;
          puVar22[4] = 0;
          puVar33 = puVar22;
        }
        plVar35 = local_4c0;
        local_4c8 = puVar33;
        if ((((undefined8 **)*local_4c0 <= &local_4c8) &&
            (&local_4c8 < (undefined8 **)*local_4c0 + *(int *)((longlong)local_4c0 + 0xc))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar15 = (int)plVar35[1];
        if (iVar15 == *(int *)((longlong)plVar35 + 0xc)) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)plVar35,(int *)((longlong)plVar35 + 0xc));
        }
        pTVar8 = local_490;
        pFVar38 = (FParameters *)(puVar33 + 2);
        *(int *)(plVar35 + 1) = iVar15 + 1;
        local_388._padding_._4_4_ = 0;
        local_388._padding_._0_4_ = 0xffffffff;
        *(undefined8 **)(*plVar35 + (longlong)iVar15 * 8) = local_4c8;
        local_388._padding_ = 0;
        pFVar38->NumWorkGroups = *(uint *)local_490[5];
        local_388.Buffer = local_4f0;
        uVar12 = 0;
        if (((local_4f0->Desc).Usage & DrawIndirect) != None) {
          uVar12 = 0x1c;
        }
        local_388._padding_._0_4_ =
             CONCAT31((int3)((uint)(undefined4)local_388._padding_ >> 8),uVar12);
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_388);
        pFVar20 = local_388.Buffer;
        pFVar24 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
        pFVar24->_padding_ = pFVar20->_padding_;
        *(byte *)&pFVar24->_padding_ = (byte)pFVar24->_padding_ & 0xfe;
        *(undefined8 *)((longlong)&pFVar24->_padding_ + 4) = 0xffffffffffffffff;
        pFVar24->_padding_ = 0;
        pFVar24->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
        *(undefined1 *)&pFVar24->_padding_ = 3;
        (pFVar24->Desc)._padding_ =
             CONCAT44(local_388._padding_._4_4_,(undefined4)local_388._padding_);
        (pFVar24->Desc)._padding_ =
             CONCAT44(local_388._padding_._4_4_,(undefined4)local_388._padding_);
        (pFVar24->Desc)._padding_ = local_388._padding_;
        (pFVar24->Desc).Buffer = local_388.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert(this_01,(FRDGView *)pFVar24)
        ;
        FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar24);
        puVar33[3] = pFVar24;
        local_450.Buffer = *(FRDGBuffer **)((longlong)pTVar8[5] + 8);
        local_450._padding_._2_1_ = 0;
        local_450._padding_._1_1_ = 0;
        local_450._padding_._0_1_ = 0;
        if ((((local_450.Buffer)->Desc).Usage & DrawIndirect) != None) {
          local_450._padding_._0_1_ = 0x1c;
        }
        FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_450);
        pFVar20 = local_450.Buffer;
        pFVar21 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
        pFVar21->_padding_ = pFVar20->_padding_;
        *(byte *)&pFVar21->_padding_ = (byte)pFVar21->_padding_ & 0xfe;
        pFVar21->_padding_ = 0;
        *(undefined1 *)&pFVar21->_padding_ = 0;
        *(undefined1 *)&pFVar21->_padding_ = 2;
        *(undefined8 *)((longlong)&pFVar21->_padding_ + 4) = 0xffffffffffffffff;
        pFVar21->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
        (pFVar21->Desc)._padding_ =
             CONCAT53(local_450._padding_._3_5_,
                      CONCAT12(local_450._padding_._2_1_,
                               CONCAT11(local_450._padding_._1_1_,(undefined1)local_450._padding_)))
        ;
        (pFVar21->Desc).Buffer = local_450.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert(this_01,(FRDGView *)pFVar21)
        ;
        FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar21);
        iVar15 = pFVar38->NumWorkGroups + 0x3f;
        puVar33[4] = pFVar21;
        FComputeShaderUtils::GetGroupCountWrapped
                  ((TIntVector3<int> *)&local_308._s_0,(int)((iVar15 >> 0x1f & 0x3fU) + iVar15) >> 6
                  );
        pFVar29 = FRDGEventName::FRDGEventName(&local_2a8,1,L"ComputeExplicitChunkDrawsViewMask");
        pFVar23 = FComputeExplicitChunkDrawsViewMask_CS::FParameters::FTypeInfo::GetStructMetadata()
        ;
        local_2f8._s_0.Z = local_308._s_0.Z;
        local_2f8._0_8_ = local_308._0_8_;
        FComputeShaderUtils::AddPass<FComputeExplicitChunkDrawsViewMask_CS>
                  (param_1,pFVar29,Compute,&local_258,pFVar23,pFVar38,
                   (TIntVector3<int> *)&local_2f8._s_0);
        uVar14 = local_4f4;
        local_4f4 = local_4f4 & 0xfffffff7;
        if ((void *)CONCAT44(local_2a8.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                             local_2a8.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
            (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_2a8.FormattedEventName.Data.AllocatorInstance.Data.
                                         _4_4_,local_2a8.FormattedEventName.Data.AllocatorInstance.
                                               Data._0_4_));
        }
        plVar35 = local_4c0;
        if (((uVar14 & 4) != 0) && (local_4f4 = uVar14 & 0xfffffff3, local_328 != (void *)0x0)) {
          FMemory::Free(local_328);
          plVar35 = local_4c0;
        }
      }
      pTVar10 = local_358;
      this = local_488;
      if ((local_358->Reference == (IPooledRenderTarget *)0x0) ||
         ((local_488->CacheManager->PrevBuffers).PageTable.Reference == (IPooledRenderTarget *)0x0))
      {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      local_4e0._0_4_ = local_488->bUseHzbOcclusion & 1 | local_49c;
      local_4e0._4_4_ = 0;
      bVar13 = Nanite::IsStatFilterActive(&VirtualFilterName);
      local_4e0._s_0.Min.field0_0x0 =
           (TIntPoint<int>)
           (CONCAT44(local_4e0._4_4_,(uint)bVar13 << 0x11 | local_4e0._0_4_ & 0xfffdffff) | 0x10000)
      ;
      Nanite::FConfiguration::SetViewFlags((FConfiguration *)&local_4e0._s_0,local_418);
      if (bVar11) {
        pFVar30 = (FVirtualShadowMapArray *)
                  FRDGBuilder::RegisterExternalTexture(param_1,pTVar10,None);
      }
      else {
        pFVar30 = (FVirtualShadowMapArray *)0x0;
      }
      Nanite::IRenderer::Create
                ((FRDGBuilder *)local_408,(FScene *)param_1,(FViewInfo *)this->Scene,
                 (FSceneUniformBuffer *)local_418,local_350,(FRasterContext *)&local_440._s_0,
                 (FConfiguration *)&local_1e8._s_0,(TIntRect<int> *)&local_4e0._s_0,
                 (FRDGTexture *)&local_430._s_0,pFVar30);
      (**(code **)(*(longlong *)local_408._0_8_ + 0x10))
                (local_408._0_8_,this->Scene->NaniteRasterPipelines,local_338);
      if ((longlong *)local_408._0_8_ != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_408._0_8_)(local_408._0_8_,1);
      }
      local_4e8 = local_4e8 + 1;
      local_408._8_8_ = local_408._8_8_ + 0x30;
      iVar15 = local_498->ArrayNum;
    } while ((int)local_4e8 < iVar15);
  }
  if (this->bUseHzbOcclusion != false) {
    UpdateHZB(this,param_1);
  }
  pFVar17 = local_330;
  if (local_330 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(local_330,(FRHIComputeCommandList *)param_1->_padding_);
      FRDGScope::EndCPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_,false);
    }
    FRDGScope::ImmediateEnd(pFVar17,(FRDGScopeState *)param_1);
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffffd;
    param_1->_padding_ = *(longlong *)param_1->_padding_;
  }
  if (local_310 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_320);
  }
  if (bVar40) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RenderVirtualShadowMapsNonNanite @ 14580c350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014580d98f) */
/* WARNING: Removing unreachable block (ram,0x00014580d99f) */
/* WARNING: Removing unreachable block (ram,0x00014580e2c2) */
/* WARNING: Removing unreachable block (ram,0x00014580e2d4) */
/* WARNING: Removing unreachable block (ram,0x00014580e79e) */
/* WARNING: Removing unreachable block (ram,0x00014580e7b0) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite
          (FVirtualShadowMapArray *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2,
          TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_3,TArrayView<FViewInfo,int> *param_4)

{
  int *piVar1;
  FInstanceCullingContext *this_00;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar2;
  char cVar3;
  int iVar4;
  FScene *pFVar5;
  FRDGTexture *pFVar6;
  FRDGTexture *pFVar7;
  undefined8 uVar8;
  FVirtualShadowMapClipmap *pFVar9;
  FUploadData *pFVar10;
  FRDGView **ppFVar11;
  FGlobalShaderMap *this_01;
  code *pcVar12;
  FRDGBuffer *pFVar13;
  code *pcVar14;
  uint *puVar15;
  FVSMCullingBatchInfo FVar16;
  FVSMCullingBatchInfo FVar17;
  TConsoleVariableData<int> *pTVar18;
  FVirtualShadowMapArray *this_02;
  bool bVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  FRDGScope *pFVar24;
  FVSMRenderViewCount FVar25;
  ForElementType<FProjectedShadowInfo_*> FVar26;
  FRDGBuffer *pFVar27;
  FViewInfo *pFVar28;
  TArrayView<unsigned_int_const_,int> *pTVar29;
  FCullingResult *pFVar30;
  FInstanceCullingGlobalUniforms *pFVar31;
  FRDGBufferSRV *pFVar32;
  TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *pTVar33;
  FVirtualShadowDepthPassParameters *pFVar34;
  FShaderParametersMetadata *pFVar35;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar36;
  FRDGEventName *pFVar37;
  undefined8 *puVar38;
  FGlobalShaderType *pFVar39;
  FShaderType *pFVar40;
  FName this_03;
  undefined1 uVar41;
  longlong lVar42;
  FProjectedShadowInfo *pFVar43;
  code **ppcVar44;
  undefined ***pppuVar45;
  int iVar46;
  EUniformBufferBindingFlags EVar47;
  uint uVar48;
  Type TVar49;
  uint uVar50;
  FViewInfo *pFVar51;
  ulonglong uVar52;
  Type TVar53;
  TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar54;
  Type TVar55;
  uint uVar56;
  longlong lVar57;
  ulonglong uVar58;
  bool bVar59;
  undefined1 auStackY_978 [32];
  FProjectedShadowInfo *local_8e0;
  undefined1 local_8d8 [8];
  undefined8 local_8d0;
  ForElementType<FProjectedShadowInfo_*> local_8c8;
  int local_8c0;
  int iStack_8bc;
  uint local_8b8;
  ForElementType<FVirtualShadowDepthPassParameters_*> local_8b0;
  int local_8a8;
  int aiStack_8a4 [3];
  FRDGBuffer *local_898;
  int iStack_890;
  undefined4 uStack_88c;
  Type local_888;
  FVSMCullingBatchInfo local_880;
  FVirtualShadowMapArray *local_878;
  ForElementType<FProjectedShadowInfo_*> local_870;
  int local_868;
  int iStack_864;
  ForElementType<FProjectedShadowInfo_*> local_860;
  int local_858;
  int iStack_854;
  ForElementType<UE::HLSL::FVSMCullingBatchInfo> local_850;
  int local_848;
  int iStack_844;
  ForElementType<UE::HLSL::FVSMCullingBatchInfo> local_840;
  int local_838;
  int iStack_834;
  FViewInfo *local_830;
  undefined1 local_828 [8];
  FRDGBufferSRV *local_820;
  FRDGBuffer *local_818;
  FViewInfo *local_810;
  FProjectedShadowInfo *local_808;
  TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *local_800;
  FProjectedShadowInfo *local_7f8;
  undefined8 *local_7f0;
  FSceneUniformBuffer *local_7e8;
  TRDGUniformBuffer<FSceneUniformParameters> *local_7e0;
  longlong local_7d8;
  TReferenceControllerBase<1> *local_7d0;
  FString local_7c8;
  FString local_7b8;
  TRDGUniformBuffer<FShadowDepthPassUniformParameters> *local_7a8;
  FScene *local_7a0;
  FVirtualShadowMapClipmap *local_798;
  FRDGBuilder *local_790;
  TIntVector3<int>_u_0 local_788;
  FRDGBufferSRVDesc local_778;
  FRDGBufferSRVDesc local_758;
  FRDGBufferSRVDesc local_738;
  FHZBShaderParameters local_718;
  undefined1 local_6e8 [8];
  FInstanceProcessingGPULoadBalancer *local_6e0;
  FRDGBuffer *local_6d8;
  TRDGUniformBuffer<FShadowDepthPassUniformParameters> *local_6d0;
  undefined1 local_6c8 [40];
  FRDGScope *local_6a0;
  char local_698;
  TRDGEventScopeGuard<FRDGScope_RHI> local_690;
  char local_680;
  TRDGEventScopeGuard<FRDGScope_RHI> local_678;
  char local_668;
  TRDGEventScopeGuard<FRDGScope_RHI> local_660;
  char local_650;
  TRDGEventScopeGuard<FRDGScope_RHI> local_648;
  char local_638;
  <lambda_7> local_630;
  FRDGBufferSRVDesc local_608;
  FRDGBufferSRVDesc local_5e8;
  FRDGBufferSRVDesc local_5c8;
  FRDGBufferSRVDesc local_5a8;
  TArrayView<UE::Math::TIntVector2<unsigned_int>_const_,int> local_588;
  TArrayView<FRHIDrawIndexedIndirectParameters_const_,int> local_578;
  FContextBatchInfoPacked *local_568;
  int iStack_560;
  undefined4 uStack_55c;
  TArrayView<unsigned_int_const_,int> local_558;
  TArrayView<UE::Math::TIntVector2<unsigned_int>_const_,int> local_548;
  TArrayView<FRHIDrawIndexedIndirectParameters_const_,int> local_538;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_528;
  TArrayView<unsigned_int_const_,int> local_518;
  FVSMCullingBatchInfo *local_508;
  int iStack_500;
  undefined4 uStack_4fc;
  FVirtualShadowMapArray *local_4f8;
  FRDGBuffer **local_4f0;
  FRDGBuilder *local_4e8;
  FSceneTextures *local_4e0;
  FContextBatchInfoPacked *local_4d8;
  int iStack_4d0;
  undefined4 uStack_4cc;
  TArrayView<unsigned_int_const_,int> local_4c8;
  FCullingResult local_4b8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_>
  local_490;
  TArrayView<UE::HLSL::FVSMCullingBatchInfo_const_,int> local_468;
  TArrayView<FInstanceCullingMergedContext::FContextBatchInfoPacked_const_,int> local_458;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13>_const_*,std::tuple<>_> local_448;
  TArrayView<unsigned_int_const_,int> local_438;
  TArrayView<UE::HLSL::FVSMCullingBatchInfo_const_,int> local_428;
  TArrayView<FInstanceCullingMergedContext::FContextBatchInfoPacked_const_,int> local_418;
  FString local_408;
  TShaderRefBase<FVirtualSmPrintClipmapStatsCS,FShaderMapPointerTable> local_3f8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_const_*,std::tuple<>_> local_3e8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<8>_const_*,std::tuple<>_> local_3d8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<14>_const_*,std::tuple<>_> local_3c8;
  FCullingResult local_3b8;
  TArrayView<unsigned_int_const_,int> local_388;
  uint uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  uint uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  uint uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  uint uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  uint uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  FRDGEventName local_2d8;
  FRDGEventName local_2c0;
  FRDGEventName local_2a8;
  FRDGEventName local_290;
  FCullingResult local_278;
  FCullingResult local_250;
  FInstanceCullingMergedContext local_228;
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  FPackedViewArray *local_a0;
  undefined ***local_90;
  FContextBatchInfoPacked local_88;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_978;
  TVar49 = ES2_REMOVED;
  local_800 = (TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *)param_4;
  if (param_3->ArrayNum != 0) {
    bVar59 = -1 < CpuChannel->Enabled;
    local_878 = this;
    local_7e8 = param_2;
    local_790 = param_1;
    if (bVar59) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3963,
                 "FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                 ,0xf7b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3963);
    }
    cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_638 = '\0';
    if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_348 = 0;
        uStack_344 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_34c);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_RenderVirtualSh;
        ::Desc._padding_ = (longlong)u_RenderVirtualSh;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0xf7c;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l10::Desc::
               operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_3e8._Myfirst._Val = &::Desc;
      local_648.State = (FRDGScopeState *)param_1;
      pFVar24 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar24;
      local_648.Scope = pFVar24;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_const_*,std::tuple<>_>_>
                (&(pFVar24->Impl).Impl,(FRDGScopeState *)param_1,&local_3e8);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar24,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar24,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_638 = '\x01';
      this = local_878;
    }
    pFVar5 = this->Scene;
    local_830 = (FViewInfo *)0x0;
    local_7a0 = pFVar5;
    if (((this->bHZBBuiltThisFrame != false) && (this->HZBPhysicalArrayRDG != (FRDGTexture *)0x0))
       && (iVar21 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarNonNaniteVsmUseHzb),
          iVar21 != 0)) {
      local_830 = (FViewInfo *)this->HZBPhysicalArrayRDG;
    }
    uVar56 = param_3->ArrayNum;
    local_840.Data = (FVSMCullingBatchInfo *)0x0;
    local_838 = 0;
    iStack_834 = 0;
    local_8c8.Data = (FProjectedShadowInfo **)0x0;
    local_8c0 = 0;
    iStack_8bc = 0;
    local_870.Data = (FProjectedShadowInfo **)0x0;
    local_868 = 0;
    iStack_864 = 0;
    if ((int)uVar56 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar56);
    }
    if (0 < (int)uVar56) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FVSMCullingBatchInfo>_>
                (8,4,uVar56,&local_840,0,&iStack_834);
    }
    uVar56 = param_3->ArrayNum;
    if ((int)uVar56 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar56);
    }
    if (0 < (int)uVar56) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
                (8,8,uVar56,&local_8c8,0,&iStack_8bc);
    }
    uVar56 = param_3->ArrayNum;
    if ((int)uVar56 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar56);
    }
    if (0 < (int)uVar56) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
                (8,8,uVar56,&local_870,0,&iStack_864);
    }
    uVar56 = param_3->ArrayNum;
    local_860.Data = (FProjectedShadowInfo **)0x0;
    local_858 = 0;
    iStack_854 = 0;
    local_850.Data = (FVSMCullingBatchInfo *)0x0;
    local_848 = 0;
    iStack_844 = 0;
    if ((int)uVar56 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar56);
    }
    if (0 < (int)uVar56) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FVSMCullingBatchInfo>_>
                (8,4,uVar56,&local_850,0,&iStack_844);
    }
    uVar56 = param_3->ArrayNum;
    local_8b0.Data = (FVirtualShadowDepthPassParameters **)0x0;
    local_8a8 = 0;
    aiStack_8a4[0] = 0;
    if ((int)uVar56 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar56);
    }
    if (0 < (int)uVar56) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualShadowDepthPassParameters_*>_>
                (8,8,uVar56,&local_8b0,0,aiStack_8a4);
    }
    local_8b8 = 0;
    FInstanceCullingMergedContext::FInstanceCullingMergedContext
              (&local_228,
               GRHIGlobals.ShaderPlatformForFeatureLevel[(int)(pFVar5->GPUScene).FeatureLevel],true,
               2);
    iVar21 = param_3->ArrayNum;
    local_228.NumCullingViews = -1;
    local_888 = ES2_REMOVED;
    local_8d0 = (FInstanceCullingGlobalUniforms *)((ulonglong)local_8d0._4_4_ << 0x20);
    if (0 < iVar21) {
      lVar57 = 0;
      TVar53 = TVar49;
      TVar55 = TVar49;
      do {
        uVar56 = 0;
        if ((int)TVar49 < iVar21) {
          uVar56 = ~TVar49 >> 0x1f;
        }
        if ((uVar56 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_8e0 = *(FProjectedShadowInfo **)(lVar57 + (longlong)(param_3->AllocatorInstance).Data)
        ;
        if (local_8e0->bShouldRenderVSM != 0) {
          FProjectedShadowInfo::BeginRenderView(local_8e0,param_1,this->Scene);
          local_880.FirstPrimaryView = local_8b8;
          local_880.NumPrimaryViews = 0;
          if ((((local_8e0->VirtualShadowMapClipmap).Object == (FVirtualShadowMapClipmap *)0x0) &&
              ((local_8e0->VirtualShadowMapPerLightCacheEntry).Object ==
               (FVirtualShadowMapPerLightCacheEntry *)0x0)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Clipmap.IsValid() || ProjectedShadowInfo->HasVirtualShadowMap()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                                  ,0xfb0,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar43 = local_8e0;
          this_00 = &(local_8e0->ShadowDepthPass).TaskContext.InstanceCullingContext;
          FInstanceCullingContext::WaitForSetupTask(this_00);
          TVar53 = TVar53 + (pFVar43->ShadowDepthPass).TaskContext.InstanceCullingContext.
                            TotalInstances;
          local_888 = TVar53;
          bVar19 = FInstanceCullingContext::HasCullingCommands(this_00);
          this = local_878;
          if (bVar19) {
            FVar25 = GetRenderViewCount(local_8e0);
            local_880.NumPrimaryViews = FVar25.NumPrimaryViews;
            local_8b8 = local_8b8 + local_880.NumPrimaryViews;
            TVar55 = TVar55 + FVar25.NumMipLevels *
                              (pFVar43->ShadowDepthPass).TaskContext.InstanceCullingContext.
                              TotalInstances * local_880.NumPrimaryViews;
            if (((local_860.Data <= &local_8e0) && (&local_8e0 < local_860.Data + iStack_854)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (local_858 == iStack_854) {
              local_858 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
                                    (0x808,&local_860,&iStack_854);
            }
            lVar42 = (longlong)local_858;
            local_858 = local_858 + 1;
            local_860.Data[lVar42] = local_8e0;
            iVar21 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarDoNonNaniteBatching);
            if (iVar21 == 0) {
              if (((local_840.Data <= &local_880) && (&local_880 < local_840.Data + iStack_834)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (local_838 == iStack_834) {
                local_838 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FVSMCullingBatchInfo>_>
                                      (0x408,&local_840,&iStack_834);
              }
              lVar42 = (longlong)local_838;
              local_838 = local_838 + 1;
              FVar17.NumPrimaryViews = local_880.NumPrimaryViews;
              FVar17.FirstPrimaryView = local_880.FirstPrimaryView;
              local_840.Data[lVar42] = FVar17;
              if (((local_870.Data <= &local_8e0) && (&local_8e0 < local_870.Data + iStack_864)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (local_868 == iStack_864) {
                local_868 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
                                      (0x808,&local_870,&iStack_864);
              }
              FVar26.Data = local_870.Data;
              pFVar43 = local_8e0;
              iVar21 = local_868;
              local_868 = local_868 + 1;
            }
            else {
              if (((local_850.Data <= &local_880) && (&local_880 < local_850.Data + iStack_844)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (local_848 == iStack_844) {
                local_848 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FVSMCullingBatchInfo>_>
                                      (0x408,&local_850,&iStack_844);
              }
              lVar42 = (longlong)local_848;
              local_848 = local_848 + 1;
              FVar16.NumPrimaryViews = local_880.NumPrimaryViews;
              FVar16.FirstPrimaryView = local_880.FirstPrimaryView;
              local_850.Data[lVar42] = FVar16;
              local_7f8 = (FProjectedShadowInfo *)
                          FRDGBuilder::AllocParameters<FVirtualShadowDepthPassParameters>(param_1);
              FInstanceCullingMergedContext::AddBatch
                        (&local_228,param_1,this_00,
                         (FInstanceCullingDrawParams *)&local_7f8->CacheMode);
              if (((local_8c8.Data <= &local_8e0) && (&local_8e0 < local_8c8.Data + iStack_8bc)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (local_8c0 == iStack_8bc) {
                local_8c0 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
                                      (0x808,&local_8c8,&iStack_8bc);
              }
              lVar42 = (longlong)local_8c0;
              local_8c0 = local_8c0 + 1;
              local_8c8.Data[lVar42] = local_8e0;
              if (((local_8b0.Data <= &local_7f8) && (&local_7f8 < local_8b0.Data + aiStack_8a4[0]))
                 && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar19)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (local_8a8 == aiStack_8a4[0]) {
                local_8a8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualShadowDepthPassParameters_*>_>
                                      (0x808,&local_8b0,aiStack_8a4);
              }
              FVar26.Data = (FProjectedShadowInfo **)local_8b0.Data;
              pFVar43 = local_7f8;
              iVar21 = local_8a8;
              TVar53 = local_888;
              local_8a8 = local_8a8 + 1;
            }
            FVar26.Data[iVar21] = pFVar43;
            this = local_878;
          }
        }
        iVar21 = param_3->ArrayNum;
        TVar49 = TVar49 + ES3_1;
        lVar57 = lVar57 + 8;
      } while ((int)TVar49 < iVar21);
      local_8d0 = (FInstanceCullingGlobalUniforms *)CONCAT44(local_8d0._4_4_,TVar55);
      param_4 = (TArrayView<FViewInfo,int> *)local_800;
    }
    iVar46 = iStack_854;
    iVar21 = local_858;
    FVar26.Data = local_860.Data;
    local_818 = (FRDGBuffer *)0x0;
    pFVar51 = local_830;
    pFVar27 = local_818;
    if (local_858 != 0) {
      local_860.Data = (FProjectedShadowInfo **)0x0;
      local_858 = 0;
      iStack_854 = 0;
      local_e8[0] = (code *)0x0;
      local_c0 = FMemory::Malloc(0x38,8);
      pFVar51 = local_830;
      pcVar12 = (code *)((TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *)param_4)->_padding_;
      pcVar14 = (code *)((TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *)param_4)->_padding_;
      *local_c0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::`37'::<lambda_2>,0,1>
                           ::_vftable_;
      local_c0[1] = (code *)local_878;
      local_c0[2] = pcVar12;
      local_c0[3] = pcVar14;
      local_c0[4] = (code *)FVar26.Data;
      *(int *)(local_c0 + 5) = iVar21;
      *(int *)((longlong)local_c0 + 0x2c) = iVar46;
      *(bool *)(local_c0 + 6) = local_830 != (FViewInfo *)0x0;
      if (local_c0 + 1 != (code **)0x0) {
        local_e8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_2>,void,TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
                      ::Call;
      }
      local_a0 = Nanite::FPackedViewArray::CreateWithSetupTask
                           (param_1,local_8b8 * 8,
                            (TFunction<void___cdecl(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)>
                             *)local_e8,(FPipe *)0x0,true);
      if (local_e8[0] != (code *)0x0) {
        ppcVar44 = local_e8 + 2;
        if (local_c0 != (code **)0x0) {
          ppcVar44 = local_c0;
        }
        (**(code **)(*ppcVar44 + 0x10))();
      }
      local_a8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::`37'::<lambda_3>,0,0>
                  ::_vftable_;
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_3>,TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>
                    ::Call;
      local_90 = (undefined ***)0x0;
      pFVar27 = CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>
                          (param_1,L"Shadow.Virtual.VirtualShadowViews",
                           (TFunction<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&___cdecl(void)>
                            *)local_b8);
      if (local_b8[0] != (code *)0x0) {
        pppuVar45 = &local_a8;
        if (local_90 != (undefined ***)0x0) {
          pppuVar45 = local_90;
        }
        (*(code *)(*pppuVar45)[2])();
      }
    }
    local_818 = pFVar27;
    if (__CsvProfilerStat4077 == false) {
      FCsvProfilerTrace::OutputInlineStat("NonNanitePreCullInstanceCount",_GCsvCategory_VSM.Index);
      __CsvProfilerStat4077 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("NonNanitePreCullInstanceCount",_GCsvCategory_VSM.Index,local_888,Set);
    iVar21 = (int)((TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *)param_4)->_padding_;
    if (iVar21 != 1) {
      TArrayView<FViewInfo,int>::RangeCheck(param_4,iVar21 + -1);
      pFVar28 = TArrayView<FViewInfo,int>::operator[](param_4,0);
      if ((pFVar28->_padding_ !=
           *(longlong *)
            ((longlong)iVar21 * 0x2970 + -0x2968 +
            ((TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *)param_4)->_padding_)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Views.Num() == 1 || Views[0].Family == Views.Last().Family",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                              ,0xc2e,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    pFVar28 = TArrayView<FViewInfo,int>::operator[](param_4,0);
    local_4e0 = FViewFamilyInfo::GetSceneTextures((FViewFamilyInfo *)pFVar28->_padding_);
    this_02 = local_878;
    local_4f0 = &local_818;
    local_718.HZBPageTable = (FRDGTexture *)0x0;
    local_718.HZBPageFlags = (FRDGTexture *)0x0;
    local_4f8 = local_878;
    local_718.HZBPageRectBounds = (FRDGBufferSRV *)0x0;
    local_718.HZBSampler = (FRHISamplerState *)0x0;
    local_4e8 = param_1;
    if (pFVar51 == (FViewInfo *)0x0) {
      local_718.HZBTextureArray = (FRDGTexture *)0x0;
    }
    else {
      local_608.Buffer = local_878->AllocatedPageRectBoundsRDG;
      pFVar6 = local_878->PageTableRDG;
      pFVar7 = local_878->PageFlagsRDG;
      local_608._padding_._4_4_ = 0;
      local_608._padding_ = 0;
      local_608._padding_._0_4_ = 0xffffffff;
      local_608._padding_._0_1_ = 0;
      if ((((local_608.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_608._padding_._0_1_ = 0x1c;
      }
      local_718.HZBPageTable = pFVar6;
      local_718.HZBPageFlags = pFVar7;
      local_718.HZBPageRectBounds = FRDGBuilder::CreateSRV(param_1,&local_608);
      if ((pFVar6 == (FRDGTexture *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("HZBShaderParameters.HZBPageTable",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                              ,0x100c,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((pFVar7 == (FRDGTexture *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("HZBShaderParameters.HZBPageFlags",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                              ,0x100d,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((local_718.HZBPageRectBounds == (FRDGBufferSRV *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("HZBShaderParameters.HZBPageRectBounds",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                              ,0x100e,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar8 = *(undefined8 *)((longlong)&pFVar51->_padding_ + 4);
      local_718.HZBSize.field0_0x0._s_0.X = (float)(int)uVar8;
      local_718.HZBSize.field0_0x0._s_0.Y = (float)(int)((ulonglong)uVar8 >> 0x20);
      local_718.HZBSampler =
           TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      local_718.HZBTextureArray = (FRDGTexture *)pFVar51;
    }
    local_7e0 = FSceneUniformBuffer::GetBuffer(local_7e8,param_1);
    if (local_228.Batches.ArrayNum != 0) {
      cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
      local_668 = '\0';
      if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          local_328 = 0;
          uStack_324 = 0;
          ::Desc._12_8_ = ZEXT48(uStack_32c);
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_Batched;
          ::Desc._padding_ = (longlong)u_Batched;
          ::Desc._padding_._0_4_ = 0x101e;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l75::<lambda_5>::
                 operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_3d8._Myfirst._Val = &::Desc;
        local_678.State = (FRDGScopeState *)param_1;
        pFVar24 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)pFVar24;
        local_678.Scope = pFVar24;
        TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
        Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<8>_const_*,std::tuple<>_>_>
                  (&(pFVar24->Impl).Impl,(FRDGScopeState *)param_1,&local_3d8);
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(pFVar24,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(pFVar24,(FRHIComputeCommandList *)param_1->_padding_);
        }
        local_668 = '\x01';
      }
      FInstanceCullingMergedContext::MergeBatches(&local_228);
      cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
      local_698 = '\0';
      if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          local_368 = 0;
          uStack_364 = 0;
          ::Desc._12_8_ = ZEXT48(uStack_36c);
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_CullingPasses;
          ::Desc._padding_ = (longlong)u_CullingPasses;
          ::Desc._padding_._0_4_ = 0x1024;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l81::<lambda_6>::
                 operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_3c8._Myfirst._Val = &::Desc;
        local_6c8._32_8_ = param_1;
        pFVar24 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)pFVar24;
        local_6a0 = pFVar24;
        TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
        Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<14>_const_*,std::tuple<>_>_>
                  (&(pFVar24->Impl).Impl,(FRDGScopeState *)param_1,&local_3c8);
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(pFVar24,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(pFVar24,(FRHIComputeCommandList *)param_1->_padding_);
        }
        local_698 = '\x01';
      }
      pFVar27 = local_818;
      TVar49 = (local_7a0->GPUScene).FeatureLevel;
      if ((local_228.BatchInds.ArrayNum < 2) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar29 = TArrayView<unsigned_int_const_,int>::
                TArrayView<unsigned_int_const_,int><TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                          (&local_518,local_228.BatchInds.AllocatorInstance.Data + 1);
      iStack_500 = local_848;
      puVar15 = pTVar29->DataPtr;
      uVar8._0_4_ = pTVar29->ArrayNum;
      uVar8._4_4_ = *(undefined4 *)&pTVar29->field_0xc;
      local_508 = local_850.Data;
      if ((local_848 < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_4d8 = local_228.BatchInfos.AllocatorInstance.Data;
      if ((local_228.BatchInfos.ArrayNum < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iStack_4d0 = local_228.BatchInfos.ArrayNum;
      if ((local_228.LoadBalancers.ArrayNum < 2) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar54 = local_228.LoadBalancers.AllocatorInstance.Data + 1;
      local_4c8.DataPtr = local_228.InstanceIdOffsets.AllocatorInstance.Data;
      if ((local_228.InstanceIdOffsets.ArrayNum < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_4c8.ArrayNum = local_228.InstanceIdOffsets.ArrayNum;
      local_588.DataPtr = local_228.DrawCommandDescs.AllocatorInstance.Data;
      if ((local_228.DrawCommandDescs.ArrayNum < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_588.ArrayNum = local_228.DrawCommandDescs.ArrayNum;
      local_578.DataPtr = local_228.IndirectArgs.AllocatorInstance.Data;
      if ((local_228.IndirectArgs.ArrayNum < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_468._12_4_ = uStack_4fc;
      local_468.ArrayNum = iStack_500;
      local_458._12_4_ = uStack_4cc;
      local_458.ArrayNum = iStack_4d0;
      local_578.ArrayNum = local_228.IndirectArgs.ArrayNum;
      local_468.DataPtr = local_508;
      local_458.DataPtr = local_4d8;
      local_388.DataPtr = puVar15;
      local_388._8_8_ = uVar8;
      pFVar30 = AddCullingPasses<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                          (&local_278,param_1,&local_578,&local_588,&local_4c8,pTVar54,&local_458,
                           &local_468,&local_388,local_228.TotalInstances,(uint)local_8d0,local_8b8,
                           pFVar27,&local_718,this_02,local_7e8,TVar49);
      local_4b8.DrawIndirectArgsRDG = pFVar30->DrawIndirectArgsRDG;
      local_4b8.InstanceIdOffsetBufferRDG = pFVar30->InstanceIdOffsetBufferRDG;
      pFVar27 = pFVar30->InstanceIdsBuffer;
      pFVar13 = pFVar30->PageInfoBuffer;
      local_4b8.MaxNumInstancesPerPass = pFVar30->MaxNumInstancesPerPass;
      local_4b8._36_4_ = *(undefined4 *)&pFVar30->field_0x24;
      local_4b8.InstanceIdsBuffer = pFVar27;
      local_4b8.PageInfoBuffer = pFVar13;
      if (local_698 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>
                  ((TRDGEventScopeGuard<FRDGScope_RHI> *)(local_6c8 + 0x20));
      }
      local_7a8 = `FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l2::<lambda_4>::
                  operator()(&local_4f8,false);
      pFVar31 = FRDGBuilder::AllocParameters<FInstanceCullingGlobalUniforms>(param_1);
      local_5e8._padding_._0_4_ = 0xffffffff;
      uVar52 = 0;
      local_5e8._padding_._4_4_ = 0;
      local_5e8._padding_ = 0;
      local_5e8._padding_._0_1_ = 0;
      if (((pFVar27->Desc).Usage & DrawIndirect) != None) {
        local_5e8._padding_._0_1_ = 0x1c;
      }
      local_5e8.Buffer = pFVar27;
      pFVar32 = FRDGBuilder::CreateSRV(param_1,&local_5e8);
      pFVar31->InstanceIdsBuffer = pFVar32;
      local_5c8._padding_._0_1_ = 0;
      local_5c8._padding_._4_4_ = 0;
      local_5c8._padding_._0_4_ = 0xffffffff;
      local_5c8._padding_ = 0;
      if (((pFVar13->Desc).Usage & DrawIndirect) != None) {
        local_5c8._padding_._0_1_ = 0x1c;
      }
      local_5c8.Buffer = pFVar13;
      pFVar32 = FRDGBuilder::CreateSRV(param_1,&local_5c8);
      pFVar31->PageInfoBuffer = pFVar32;
      pFVar31->BufferCapacity = local_4b8.MaxNumInstancesPerPass;
      pTVar33 = FRDGBuilder::CreateUniformBuffer<FInstanceCullingGlobalUniforms>(param_1,pFVar31);
      pTVar18 = CVarVirtualShadowSinglePassBatched.Ref;
      local_800 = pTVar33;
      if (local_8c0 != 0) {
        bVar19 = IsInParallelRenderingThread();
        if ((!bVar19) &&
           (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007955>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (pTVar18->ShadowedValue[1] == 0) {
          cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
          cVar20 = '\0';
          local_680 = '\0';
          if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              local_308 = 0;
              uStack_304 = 0;
              ::Desc._12_8_ = ZEXT48(uStack_30c);
              ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
              ::Desc._padding_._4_4_ = 0;
              ::Desc._padding_ = (longlong)u_RasterPasses;
              ::Desc._padding_ = (longlong)u_RasterPasses;
              ::Desc._padding_._0_4_ = 0x1080;
              InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
              ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
              ::Desc.TraceGpuSpecId = 0;
              ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
              atexit(```FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l94::<lambda_8>
                     ::operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
                     _dynamic_atexit_destructor_for__Desc__);
              _Init_thread_footer(&::_TSS0);
            }
            local_448._Myfirst._Val = &::Desc;
            local_690.State = (FRDGScopeState *)param_1;
            pFVar24 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                                ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
            param_1->_padding_ = (longlong)pFVar24;
            local_690.Scope = pFVar24;
            TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
            Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13>_const_*,std::tuple<>_>_>
                      (&(pFVar24->Impl).Impl,(FRDGScopeState *)param_1,&local_448);
            if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
              FRDGScope::BeginCPU(pFVar24,(FRHIComputeCommandList *)param_1->_padding_,false);
              FRDGScope::BeginGPU(pFVar24,(FRHIComputeCommandList *)param_1->_padding_);
            }
            cVar20 = '\x01';
            local_680 = '\x01';
          }
          uVar58 = uVar52;
          if (0 < local_8c0) {
            do {
              uVar50 = (uint)uVar52;
              uVar56 = 0;
              if ((int)uVar50 < local_8c0) {
                uVar56 = ~uVar50 >> 0x1f;
              }
              if ((uVar56 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              lVar57 = *(longlong *)((longlong)local_8c8.Data + uVar58);
              local_810 = *(FViewInfo **)(lVar57 + 0x10);
              local_7c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_7c8.Data.ArrayNum = 0;
              local_7c8.Data.ArrayMax = 0;
              FSceneRenderer::GetLightNameForDrawEvent
                        (*(FLightSceneProxy **)(*(longlong *)(lVar57 + 0xb70) + 0x28),&local_7c8);
              uVar56 = 0;
              if ((int)uVar50 < local_8a8) {
                uVar56 = ~uVar50 >> 0x1f;
              }
              if ((uVar56 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar27 = local_818;
              pFVar34 = *(FVirtualShadowDepthPassParameters **)(uVar58 + (longlong)local_8b0.Data);
              pFVar37 = FRDGEventName::FRDGEventName(&local_2c0,L"Rasterize[%s]");
              AddRasterPass(param_1,pFVar37,local_810,&local_7a8,local_878,pFVar27,&local_4b8,
                            (FParallelMeshDrawCommandPass *)(lVar57 + 0xc70),pFVar34,local_800,
                            local_7e0);
              if (local_2c0.FormattedEventName.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c0.FormattedEventName.Data.AllocatorInstance.Data);
              }
              if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
              }
              uVar52 = (ulonglong)(uVar50 + 1);
              uVar58 = uVar58 + 8;
              cVar20 = local_680;
            } while ((int)(uVar50 + 1) < local_8c0);
          }
          if (cVar20 != '\0') {
            TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_690);
          }
        }
        else {
          pFVar34 = FRDGBuilder::AllocParameters<FVirtualShadowDepthPassParameters>(param_1);
          if ((local_8c0 < 1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FVar26.Data = local_8c8.Data;
          pFVar51 = (*local_8c8.Data)->ShadowDepthView;
          pFVar35 = FViewUniformShaderParameters::GetStructMetadata();
          local_898 = (FRDGBuffer *)pFVar51->_padding_;
          EVar47 = Static;
          if (pFVar35->BindingFlags != StaticAndShader) {
            EVar47 = pFVar35->BindingFlags;
          }
          iStack_890 = CONCAT31(iStack_890._1_3_,EVar47);
          *(FRDGBuffer **)&pFVar34->View = local_898;
          *(ulonglong *)&(pFVar34->View).field_0x8 = CONCAT44(uStack_88c,iStack_890);
          pFVar35 = FShadowDepthPassUniformParameters::GetStructMetadata();
          local_898 = (FRDGBuffer *)local_7a8;
          EVar47 = Static;
          if (pFVar35->BindingFlags != StaticAndShader) {
            EVar47 = pFVar35->BindingFlags;
          }
          iStack_890 = CONCAT31(iStack_890._1_3_,EVar47);
          *(TRDGUniformBuffer<FShadowDepthPassUniformParameters> **)&pFVar34->ShadowDepthPass =
               local_7a8;
          *(ulonglong *)&(pFVar34->ShadowDepthPass).field_0x8 = CONCAT44(uStack_88c,iStack_890);
          pTVar36 = GetUniformBuffer(this_02,0);
          pFVar35 = FVirtualShadowMapUniformParameters::GetStructMetadata();
          local_5a8._padding_._0_4_ = 0xffffffff;
          EVar47 = Static;
          if (pFVar35->BindingFlags != StaticAndShader) {
            EVar47 = pFVar35->BindingFlags;
          }
          local_5a8._padding_._0_1_ = 0;
          iStack_890 = CONCAT31(iStack_890._1_3_,EVar47);
          *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)&pFVar34->VirtualShadowMap =
               pTVar36;
          *(ulonglong *)&(pFVar34->VirtualShadowMap).field_0x8 = CONCAT44(uStack_88c,iStack_890);
          local_5a8.Buffer = local_818;
          local_5a8._padding_._4_4_ = 0;
          local_5a8._padding_ = 0;
          if (((local_818->Desc).Usage & DrawIndirect) != None) {
            local_5a8._padding_._0_1_ = 0x1c;
          }
          local_898 = (FRDGBuffer *)pTVar36;
          pFVar32 = FRDGBuilder::CreateSRV(param_1,&local_5a8);
          pFVar34->InViews = pFVar32;
          local_898 = local_4b8.InstanceIdOffsetBufferRDG;
          iStack_890 = 8;
          *(FRDGBuffer **)&(pFVar34->InstanceCullingDrawParams).DrawIndirectArgsBuffer =
               local_4b8.DrawIndirectArgsRDG;
          *(ulonglong *)&(pFVar34->InstanceCullingDrawParams).DrawIndirectArgsBuffer.field_0x8 =
               CONCAT44(uStack_88c,4);
          *(FRDGBuffer **)&(pFVar34->InstanceCullingDrawParams).InstanceIdOffsetBuffer =
               local_4b8.InstanceIdOffsetBufferRDG;
          *(ulonglong *)&(pFVar34->InstanceCullingDrawParams).InstanceIdOffsetBuffer.field_0x8 =
               CONCAT44(uStack_88c,8);
          pFVar35 = FInstanceCullingGlobalUniforms::GetStructMetadata();
          EVar47 = Static;
          if (pFVar35->BindingFlags != StaticAndShader) {
            EVar47 = pFVar35->BindingFlags;
          }
          iStack_890 = CONCAT31(iStack_890._1_3_,EVar47);
          *(TRDGUniformBuffer<FInstanceCullingGlobalUniforms> **)
           &(pFVar34->InstanceCullingDrawParams).InstanceCulling = pTVar33;
          *(ulonglong *)&(pFVar34->InstanceCullingDrawParams).InstanceCulling.field_0x8 =
               CONCAT44(uStack_88c,iStack_890);
          local_898 = (FRDGBuffer *)pTVar33;
          pFVar35 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
          EVar47 = Static;
          if (pFVar35->BindingFlags != StaticAndShader) {
            EVar47 = pFVar35->BindingFlags;
          }
          local_898 = (FRDGBuffer *)local_7e0;
          iStack_890 = CONCAT31(iStack_890._1_3_,EVar47);
          local_630.BatchedPassParameters.AllocatorInstance.Data = local_8b0.Data;
          local_630.BatchedPassParameters.ArrayNum = local_8a8;
          local_630.BatchedPassParameters.ArrayMax = aiStack_8a4[0];
          local_630.BatchedVirtualSmMeshCommandPasses.ArrayNum = local_8c0;
          local_630.BatchedVirtualSmMeshCommandPasses.ArrayMax = iStack_8bc;
          local_8c0 = 0;
          iStack_8bc = 0;
          *(TRDGUniformBuffer<FSceneUniformParameters> **)
           &(pFVar34->InstanceCullingDrawParams).Scene = local_7e0;
          *(ulonglong *)&(pFVar34->InstanceCullingDrawParams).Scene.field_0x8 =
               CONCAT44(uStack_88c,iStack_890);
          (pFVar34->InstanceCullingDrawParams).InstanceDataByteOffset = 0;
          (pFVar34->InstanceCullingDrawParams).IndirectArgsByteOffset = 0;
          local_8b0.Data = (FVirtualShadowDepthPassParameters **)0x0;
          local_8a8 = 0;
          aiStack_8a4[0] = 0;
          local_630.BatchedVirtualSmMeshCommandPasses.AllocatorInstance.Data = FVar26.Data;
          local_8c8.Data = (FProjectedShadowInfo **)0x0;
          local_630.PassParameters = pFVar34;
          pFVar37 = FRDGEventName::FRDGEventName(&local_2d8,1,L"RasterPasses");
          pFVar35 = FVirtualShadowDepthPassParameters::FTypeInfo::GetStructMetadata();
          FRDGBuilder::
          AddPassInternal<FVirtualShadowDepthPassParameters,_FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite_::__l87::<lambda_7>_>
                    (param_1,pFVar37,pFVar35,pFVar34,SkipRenderPass|Raster,&local_630);
          if (local_2d8.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.FormattedEventName.Data.AllocatorInstance.Data);
          }
          if (local_630.BatchedVirtualSmMeshCommandPasses.AllocatorInstance.Data !=
              (FProjectedShadowInfo **)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                      (local_630.BatchedVirtualSmMeshCommandPasses.AllocatorInstance.Data);
          }
          if ((FProjectedShadowInfo **)local_630.BatchedPassParameters.AllocatorInstance.Data !=
              (FProjectedShadowInfo **)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                      (local_630.BatchedPassParameters.AllocatorInstance.Data);
          }
        }
      }
      if (local_668 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_678);
      }
    }
    uVar56 = 0;
    if (0 < local_868) {
      local_7d8 = 0;
      local_800 = (TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *)0x0;
      do {
        pTVar33 = local_800;
        uVar50 = 0;
        if ((int)uVar56 < local_838) {
          uVar50 = ~uVar56 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_6c8._0_8_ =
             *(longlong *)((longlong)pTVar33 + (longlong)&(local_840.Data)->FirstPrimaryView);
        uVar50 = 0;
        if ((int)uVar56 < local_868) {
          uVar50 = ~uVar56 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar43 = local_870.Data[local_7d8];
        local_88.IndirectArgsOffset = 0;
        local_88.InstanceDataWriteOffset = 0;
        local_88.PayloadDataOffset = 0;
        local_88.CompactionDataOffset = 0;
        local_88.ItemDataOffset[0] = 0;
        local_88.ItemDataOffset[1] = 0;
        local_88.ViewIdsOffset = 0;
        local_88.NumViewIds_bAllowOcclusionCulling = 0;
        local_88.DynamicInstanceIdOffset = 0;
        local_88.DynamicInstanceIdMax = 0;
        local_798 = (pFVar43->VirtualShadowMapClipmap).Object;
        pFVar51 = (FViewInfo *)&pFVar43->ShadowDepthPass;
        local_7d0 = (pFVar43->VirtualShadowMapClipmap).SharedReferenceCount.ReferenceController;
        if (local_7d0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_7d0->SharedReferenceCount = (atomic<int>)((int)local_7d0->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_830 = pFVar43->ShadowDepthView;
        local_810 = pFVar51;
        local_808 = pFVar43;
        FParallelMeshDrawCommandPass::WaitForSetupTask((FParallelMeshDrawCommandPass *)pFVar51);
        bVar19 = FInstanceCullingContext::HasCullingCommands
                           (&(pFVar43->ShadowDepthPass).TaskContext.InstanceCullingContext);
        if (bVar19) {
          local_7b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_7b8.Data.ArrayNum = 0;
          local_7b8.Data.ArrayMax = 0;
          FSceneRenderer::GetLightNameForDrawEvent(pFVar43->LightSceneInfo->Proxy,&local_7b8);
          cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
          local_650 = '\0';
          if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
            local_6c8._8_8_ = L"";
            if (local_7b8.Data.ArrayNum != 0) {
              local_6c8._8_8_ = local_7b8.Data.AllocatorInstance.Data;
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              local_2e8 = 0;
              uStack_2e4 = 0;
              ::Desc._12_8_ = ZEXT48(uStack_2ec);
              ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
              ::Desc._padding_._4_4_ = 0;
              ::Desc._padding_._0_4_ = 0x10a2;
              ::Desc._padding_ = (longlong)u__s;
              InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
              ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
              ::Desc.TraceGpuSpecId = 0;
              ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
              atexit(```FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l106::
                     <lambda_9>::operator()<wchar_t_const_*>'::__l3::<lambda_2>::
                     operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>'
                     ::__l2::_dynamic_atexit_destructor_for__Desc__);
              _Init_thread_footer(&::_TSS0);
            }
            local_490._Myfirst._Val = &::Desc;
            local_490._padding_ = 0x150613404;
            local_660.State = (FRDGScopeState *)param_1;
            local_490._padding_ = (longlong)(local_6c8 + 8);
            local_490._padding_ = (longlong)local_828;
            pFVar24 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                                ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
            param_1->_padding_ = (longlong)pFVar24;
            local_660.Scope = pFVar24;
            TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
            Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_>_>
                      (&(pFVar24->Impl).Impl,(FRDGScopeState *)param_1,&local_490);
            if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
              FRDGScope::BeginCPU(pFVar24,(FRHIComputeCommandList *)param_1->_padding_,false);
              FRDGScope::BeginGPU(pFVar24,(FRHIComputeCommandList *)param_1->_padding_);
            }
            local_650 = '\x01';
            pFVar43 = local_808;
            pFVar51 = local_810;
          }
          pFVar9 = (pFVar43->VirtualShadowMapClipmap).Object;
          if (pFVar9 == (FVirtualShadowMapClipmap *)0x0) {
            iVar21 = 1;
            if (pFVar43->bOnePassPointLightShadow != 0) {
              iVar21 = 6;
            }
            iVar46 = 8;
          }
          else {
            iVar21 = (pFVar9->LevelData).ArrayNum;
            iVar46 = 1;
          }
          iVar4 = *(int *)((longlong)&pFVar51->_padding_ + 4);
          if ((((local_830->DynamicPrimitiveCollector).bCommitted == false) &&
              ((local_830->DynamicPrimitiveCollector).UploadData != (FUploadData *)0x0)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bCommitted || UploadData == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                                  ,0x74,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar10 = (local_830->DynamicPrimitiveCollector).UploadData;
          uVar50 = 0;
          if (pFVar10 != (FUploadData *)0x0) {
            uVar50 = pFVar10->InstanceSceneDataOffset;
          }
          pFVar10 = (local_830->DynamicPrimitiveCollector).UploadData;
          if (pFVar10 == (FUploadData *)0x0) {
            uVar48 = 0;
          }
          else {
            uVar48 = pFVar10->TotalInstanceCount;
          }
          local_6c8._16_8_ = (uint *)0x0;
          local_88.DynamicInstanceIdMax = uVar50 + uVar48;
          local_88.DynamicInstanceIdOffset = uVar50;
          local_6c8._24_4_ = 0;
          local_6c8._28_4_ = local_518._12_4_;
          iStack_890 = 1;
          local_888 = (local_7a0->GPUScene).FeatureLevel;
          local_6d8 = local_818;
          local_820 = (FRDGBufferSRV *)
                      CONCAT44(local_820._4_4_,*(undefined4 *)((longlong)&pFVar51->_padding_ + 4));
          local_898 = (FRDGBuffer *)local_6c8;
          local_568 = &local_88;
          local_6e0 = (FInstanceProcessingGPULoadBalancer *)pFVar51->_padding_;
          local_558.DataPtr = (uint *)pFVar51->_padding_;
          iVar22 = (int)pFVar51->_padding_;
          uStack_88c = local_518._12_4_;
          iStack_560 = 1;
          if ((iVar22 < 0) &&
             (local_8d0._0_4_ = iVar22,
             bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), iVar22 = (uint)local_8d0, bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_548.DataPtr = (TIntVector2<unsigned_int> *)pFVar51->_padding_;
          iVar23 = (int)pFVar51->_padding_;
          local_8d0 = (FInstanceCullingGlobalUniforms *)CONCAT44(local_8d0._4_4_,iVar23);
          local_558.ArrayNum = iVar22;
          if (iVar23 < 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L"");
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar23 = (uint)local_8d0;
          }
          local_538.DataPtr = (FRHIDrawIndexedIndirectParameters *)pFVar51->_padding_;
          iVar22 = (int)pFVar51->_padding_;
          local_548.ArrayNum = iVar23;
          if ((iVar22 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_438._12_4_ = local_6c8._28_4_;
          local_438.ArrayNum = local_6c8._24_4_;
          local_428._12_4_ = uStack_88c;
          local_428.ArrayNum = iStack_890;
          local_438.DataPtr = (uint *)local_6c8._16_8_;
          local_418._12_4_ = uStack_55c;
          local_418.ArrayNum = iStack_560;
          local_428.DataPtr = (FVSMCullingBatchInfo *)local_898;
          local_418.DataPtr = local_568;
          local_538.ArrayNum = iVar22;
          pFVar30 = AddCullingPasses<FInstanceProcessingGPULoadBalancer>
                              (&local_250,param_1,&local_538,&local_548,&local_558,local_6e0,
                               &local_418,&local_428,&local_438,(uint)local_820,
                               iVar46 * iVar21 * iVar4,local_8b8,local_6d8,&local_718,local_878,
                               local_7e8,local_888);
          pFVar43 = local_808;
          local_3b8.DrawIndirectArgsRDG = pFVar30->DrawIndirectArgsRDG;
          local_3b8.InstanceIdOffsetBufferRDG = pFVar30->InstanceIdOffsetBufferRDG;
          pFVar27 = pFVar30->InstanceIdsBuffer;
          pFVar13 = pFVar30->PageInfoBuffer;
          local_3b8.MaxNumInstancesPerPass = pFVar30->MaxNumInstancesPerPass;
          local_3b8._36_4_ = *(undefined4 *)&pFVar30->field_0x24;
          local_3b8.InstanceIdsBuffer = pFVar27;
          local_3b8.PageInfoBuffer = pFVar13;
          bVar19 = FProjectedShadowInfo::IsWholeSceneDirectionalShadow(local_808);
          if ((bVar19) || (pFVar43->bDirectionalLight == 1 && pFVar43->bPreShadow == 1)) {
            bVar19 = true;
          }
          else {
            bVar19 = false;
          }
          local_6d0 = `FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l2::<lambda_4>::
                      operator()(&local_4f8,bVar19);
          local_8d0 = FRDGBuilder::AllocParameters<FInstanceCullingGlobalUniforms>(param_1);
          local_778._padding_._4_4_ = 0;
          local_778._padding_ = 0;
          local_778._padding_._0_4_ = 0xffffffff;
          uVar41 = 0;
          if (((pFVar27->Desc).Usage & DrawIndirect) != None) {
            uVar41 = 0x1c;
          }
          local_778._padding_._0_4_ =
               CONCAT31((int3)((uint)(undefined4)local_778._padding_ >> 8),uVar41);
          local_778.Buffer = pFVar27;
          FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_778);
          pFVar27 = local_778.Buffer;
          pTVar2 = &param_1->Views;
          local_820 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
          lVar57 = pFVar27->_padding_;
          *(byte *)&local_820->_padding_ = (byte)local_820->_padding_ & 0xfe;
          *(undefined8 *)((longlong)&local_820->_padding_ + 4) = 0xffffffffffffffff;
          local_820->_padding_ = lVar57;
          local_820->_padding_ = 0;
          *(undefined1 *)&local_820->_padding_ = 3;
          local_820->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
          (local_820->Desc)._padding_ =
               CONCAT44(local_778._padding_._4_4_,(undefined4)local_778._padding_);
          (local_820->Desc)._padding_ =
               CONCAT44(local_778._padding_._4_4_,(undefined4)local_778._padding_);
          (local_820->Desc)._padding_ = local_778._padding_;
          (local_820->Desc).Buffer = local_778.Buffer;
          iVar21 = (param_1->Views).Array.ArrayNum;
          if (iVar21 == (param_1->Views).Array.ArrayMax) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                               (0x808,(ForElementType<FRDGView_*> *)pTVar2,
                                &(param_1->Views).Array.ArrayMax);
          }
          ppFVar11 = (pTVar2->Array).AllocatorInstance.Data;
          (param_1->Views).Array.ArrayNum = iVar21 + 1;
          ppFVar11[iVar21] = (FRDGView *)local_820;
          *(int *)((longlong)&local_820->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
          FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,local_820);
          local_758._padding_._0_4_ = 0xffffffff;
          local_8d0->InstanceIdsBuffer = local_820;
          local_758._padding_._4_4_ = 0;
          local_758._padding_ = 0;
          uVar41 = 0;
          if (((pFVar13->Desc).Usage & DrawIndirect) != None) {
            uVar41 = 0x1c;
          }
          local_758._padding_._0_4_ =
               CONCAT31((int3)((uint)(undefined4)local_758._padding_ >> 8),uVar41);
          local_758.Buffer = pFVar13;
          FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_758);
          pFVar27 = local_758.Buffer;
          local_820 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
          lVar57 = pFVar27->_padding_;
          piVar1 = &(param_1->Views).Array.ArrayMax;
          *(byte *)&local_820->_padding_ = (byte)local_820->_padding_ & 0xfe;
          *(undefined8 *)((longlong)&local_820->_padding_ + 4) = 0xffffffffffffffff;
          local_820->_padding_ = lVar57;
          local_820->_padding_ = 0;
          *(undefined1 *)&local_820->_padding_ = 3;
          local_820->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
          (local_820->Desc)._padding_ =
               CONCAT44(local_758._padding_._4_4_,(undefined4)local_758._padding_);
          (local_820->Desc)._padding_ =
               CONCAT44(local_758._padding_._4_4_,(undefined4)local_758._padding_);
          (local_820->Desc)._padding_ = local_758._padding_;
          (local_820->Desc).Buffer = local_758.Buffer;
          iVar21 = (param_1->Views).Array.ArrayNum;
          if (iVar21 == *piVar1) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                               (0x808,(ForElementType<FRDGView_*> *)pTVar2,piVar1);
          }
          (param_1->Views).Array.ArrayNum = iVar21 + 1;
          (pTVar2->Array).AllocatorInstance.Data[iVar21] = (FRDGView *)local_820;
          *(int *)((longlong)&local_820->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
          FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,local_820);
          local_8d0->PageInfoBuffer = local_820;
          local_8d0->BufferCapacity = local_3b8.MaxNumInstancesPerPass;
          pTVar33 = FRDGBuilder::CreateUniformBuffer<FInstanceCullingGlobalUniforms>
                              (param_1,local_8d0);
          pFVar34 = FRDGBuilder::AllocParameters<FVirtualShadowDepthPassParameters>(local_790);
          pFVar27 = local_818;
          (pFVar34->InstanceCullingDrawParams).InstanceDataByteOffset = 0;
          (pFVar34->InstanceCullingDrawParams).IndirectArgsByteOffset = 0;
          pFVar37 = FRDGEventName::FRDGEventName(&local_2a8,1,L"Rasterize");
          param_1 = local_790;
          AddRasterPass(local_790,pFVar37,local_830,&local_6d0,local_878,pFVar27,&local_3b8,
                        (FParallelMeshDrawCommandPass *)local_810,pFVar34,pTVar33,local_7e0);
          if (local_2a8.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.FormattedEventName.Data.AllocatorInstance.Data);
          }
          if (local_650 != '\0') {
            TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_660);
          }
          if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
          }
        }
        pTVar18 = CVarShowClipmapStats.Ref;
        bVar19 = IsInParallelRenderingThread();
        if ((!bVar19) &&
           (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007955>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (uVar56 == pTVar18->ShadowedValue[1]) {
          local_810 = local_808->DependentView;
          puVar38 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
          if (puVar38 == (undefined8 *)0x0) {
            puVar38 = (undefined8 *)0x0;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                ,0x61,L"");
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          else {
            *(undefined1 *)(puVar38 + 3) = 1;
            *puVar38 = &
                       ___7__TObject_VFParameters_FVirtualSmPrintClipmapStatsCS___FRDGAllocator__6B_
            ;
            puVar38[2] = 0;
            puVar38[4] = 0;
            puVar38[5] = 0;
            puVar38[6] = 0;
          }
          local_7f0 = puVar38;
          if ((((undefined8 **)param_1->_padding_ <= &local_7f0) &&
              (&local_7f0 <
               (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar21 = (int)param_1->_padding_;
          piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
          if (iVar21 == *piVar1) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
          }
          local_808 = (FProjectedShadowInfo *)(puVar38 + 2);
          *(int *)&param_1->_padding_ = iVar21 + 1;
          *(undefined8 **)(param_1->_padding_ + (longlong)iVar21 * 8) = local_7f0;
          ShaderPrint::SetParameters
                    (param_1,&local_810->ShaderPrintData,(FShaderParameters *)local_808);
          pFVar9 = local_798;
          if ((local_798 == (FVirtualShadowMapClipmap *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (((pFVar9->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          *(int *)(puVar38 + 7) = ((pFVar9->PerLightCacheEntry).Object)->VirtualShadowMapId;
          if (((pFVar9->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_738._padding_._0_4_ = 0xffffffff;
          local_738._padding_._4_4_ = 0;
          local_738._padding_ = 0;
          *(int *)((longlong)puVar38 + 0x3c) =
               ((pFVar9->PerLightCacheEntry).Object)->VirtualShadowMapId +
               (pFVar9->LevelData).ArrayNum;
          local_738.Buffer = local_878->AllocatedPageRectBoundsRDG;
          uVar41 = 0;
          if ((((local_738.Buffer)->Desc).Usage & DrawIndirect) != None) {
            uVar41 = 0x1c;
          }
          local_738._padding_._0_4_ =
               CONCAT31((int3)((uint)(undefined4)local_738._padding_ >> 8),uVar41);
          FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_738);
          pFVar27 = local_738.Buffer;
          pFVar32 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
          lVar57 = pFVar27->_padding_;
          piVar1 = &(param_1->Views).Array.ArrayMax;
          *(byte *)&pFVar32->_padding_ = (byte)pFVar32->_padding_ & 0xfe;
          *(undefined8 *)((longlong)&pFVar32->_padding_ + 4) = 0xffffffffffffffff;
          pFVar32->_padding_ = lVar57;
          pFVar32->_padding_ = 0;
          *(undefined1 *)&pFVar32->_padding_ = 3;
          pFVar32->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
          (pFVar32->Desc)._padding_ =
               CONCAT44(local_738._padding_._4_4_,(undefined4)local_738._padding_);
          (pFVar32->Desc)._padding_ =
               CONCAT44(local_738._padding_._4_4_,(undefined4)local_738._padding_);
          (pFVar32->Desc)._padding_ = local_738._padding_;
          (pFVar32->Desc).Buffer = local_738.Buffer;
          iVar21 = (param_1->Views).Array.ArrayNum;
          if (iVar21 == *piVar1) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                               (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
          }
          (param_1->Views).Array.ArrayNum = iVar21 + 1;
          (param_1->Views).Array.AllocatorInstance.Data[iVar21] = (FRDGView *)pFVar32;
          *(int *)((longlong)&pFVar32->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
          FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar32);
          *(FRDGBufferSRV **)&(local_808->RenderTargets).ColorTargets.ArrayNum = pFVar32;
          this_01 = local_810->ShaderMap;
          pFVar39 = FVirtualSmPrintClipmapStatsCS::GetStaticType();
          if (*(int *)&pFVar39->field_0x50 != 1) {
            local_8d8[0] = 0;
            `FGlobalShaderMap::GetShader<FVirtualSmPrintClipmapStatsCS>'::__l2::<lambda_1>::
            operator()(local_8d8);
          }
          pFVar40 = (FShaderType *)FVirtualSmPrintClipmapStatsCS::GetStaticType();
          FGlobalShaderMap::GetShader(this_01,&local_528,pFVar40,0);
          if (local_528.ShaderContent == (FShader *)0x0) {
            this_03 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_6e8);
            ::FName::ToString((FName *)this_03,&local_408);
            FVirtualSmPrintClipmapStatsCS::GetStaticType();
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_408.Data.AllocatorInstance.Data);
            }
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          FVirtualSmPrintClipmapStatsCS::GetStaticType();
          local_3f8.ShaderContent = (FVirtualSmPrintClipmapStatsCS *)local_528.ShaderContent;
          local_3f8.ShaderMap = local_528.ShaderMap;
          pFVar37 = FRDGEventName::FRDGEventName(&local_290,1,L"PrintClipmapStats");
          pFVar35 = FVirtualSmPrintClipmapStatsCS::FParameters::FTypeInfo::GetStructMetadata();
          local_788._s_0.X = 1;
          local_788._s_0.Y = 1;
          local_788._s_0.Z = 1;
          FComputeShaderUtils::AddPass<FVirtualSmPrintClipmapStatsCS>
                    (param_1,pFVar37,Compute,&local_3f8,pFVar35,(FParameters *)local_808,
                     (TIntVector3<int> *)&local_788._s_0);
          if (local_290.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_290.FormattedEventName.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_7d0);
        uVar56 = uVar56 + 1;
        local_7d8 = local_7d8 + 1;
        local_800 = (TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *)((longlong)local_800 + 8);
      } while ((int)uVar56 < local_868);
    }
    if (local_228.TotalItems.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_228.TotalItems.AllocatorInstance.SecondaryData);
    }
    if (local_228.TotalBatches.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_228.TotalBatches.AllocatorInstance.SecondaryData);
    }
    if (local_228.BatchInfos.AllocatorInstance.Data != (FContextBatchInfoPacked *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.BatchInfos.AllocatorInstance.Data);
    }
    DestructItems<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int>
              (local_228.BatchInds.AllocatorInstance.Data,local_228.BatchInds.ArrayNum);
    if (local_228.BatchInds.AllocatorInstance.Data !=
        (TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)0x0)
    {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.BatchInds.AllocatorInstance.Data);
    }
    DestructItems<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int>
              (local_228.LoadBalancers.AllocatorInstance.Data,local_228.LoadBalancers.ArrayNum);
    if (local_228.LoadBalancers.AllocatorInstance.Data !=
        (TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
         *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.LoadBalancers.AllocatorInstance.Data);
    }
    if (local_228.CompactionBlockDataIndices.AllocatorInstance.Data != (uint *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.CompactionBlockDataIndices.AllocatorInstance.Data);
    }
    if (local_228.DrawCommandCompactionData.AllocatorInstance.Data != (FCompactionData *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.DrawCommandCompactionData.AllocatorInstance.Data);
    }
    if (local_228.InstanceIdOffsets.AllocatorInstance.Data != (uint *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.InstanceIdOffsets.AllocatorInstance.Data);
    }
    if (local_228.PayloadData.AllocatorInstance.Data != (FPayloadData *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.PayloadData.AllocatorInstance.Data);
    }
    if (local_228.DrawCommandDescs.AllocatorInstance.Data != (TIntVector2<unsigned_int> *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.DrawCommandDescs.AllocatorInstance.Data);
    }
    if (local_228.IndirectArgs.AllocatorInstance.Data != (FRHIDrawIndexedIndirectParameters *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.IndirectArgs.AllocatorInstance.Data);
    }
    if (local_228.ViewIds.AllocatorInstance.Data != (int *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.ViewIds.AllocatorInstance.Data);
    }
    if (local_228.AsyncBatches.AllocatorInstance.Data != (FBatchItem *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.AsyncBatches.AllocatorInstance.Data);
    }
    if (local_228.Batches.AllocatorInstance.Data != (FBatchItem *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_228.Batches.AllocatorInstance.Data);
    }
    if ((FProjectedShadowInfo **)local_8b0.Data != (FProjectedShadowInfo **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_8b0.Data);
    }
    if (local_850.Data != (FVSMCullingBatchInfo *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_850.Data);
    }
    if (local_860.Data != (FProjectedShadowInfo **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_860.Data);
    }
    if (local_870.Data != (FProjectedShadowInfo **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_870.Data);
    }
    if (local_8c8.Data != (FProjectedShadowInfo **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_8c8.Data);
    }
    if (local_840.Data != (FVSMCullingBatchInfo *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_840.Data);
    }
    if (local_638 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_648);
    }
    if (bVar59) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// SetShaderDefines @ 14580fd80

void __cdecl FVirtualShadowMapArray::SetShaderDefines(FShaderCompilerEnvironment *param_1)

{
  FShaderCompilerEnvironment::SetDefine(param_1,L"ENABLE_NON_NANITE_VSM",GEnableNonNaniteVSM);
  FShaderCompilerEnvironment::SetDefine(param_1,L"MAX_PAGE_AREA_DIAGNOSTIC_SLOTS",0x20);
  FShaderCompilerEnvironment::SetDefine(param_1,L"MAX_NPF_DIAGNOSTIC_SLOTS_SINGLEPAGE",0x20);
  FShaderCompilerEnvironment::SetDefine(param_1,L"MAX_NPF_DIAGNOSTIC_SLOTS_MULTIPAGE",0x60);
  FShaderCompilerEnvironment::SetDefine(param_1,L"INDEX_NONE",-1);
  return;
}

// ShouldGenerateStats @ 145810850

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FVirtualShadowMapArray::ShouldGenerateStats(FVirtualShadowMapArray *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  
  pTVar5 = CVarNumPageAreaDiagSlots.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pTVar4 = CVarShowStatsVisible.Ref;
  iVar1 = pTVar5->ShadowedValue[1];
  iVar2 = VSMChannel->Enabled;
  bVar6 = IsInParallelGameThread();
  if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 1;
  }
  if ((((pTVar4->ShadowedValue[lVar8] == false) || (GVSMStatSectionsEnabled == None)) &&
      (GVSMAccumulateStats == 0)) &&
     (((iVar1 == 0 && (bVar6 = IsCsvLogEnabled(this), !bVar6)) && (iVar2 < 0)))) {
    return bVar6;
  }
  return true;
}

// UpdateCachedUniformBuffers @ 145816190

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::UpdateCachedUniformBuffers
          (FVirtualShadowMapArray *this,FRDGBuilder *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<TRDGUniformBuffer<FVirtualShadowMapUniformParameters>_*,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  TIntPoint<int>_u_0 TVar8;
  FRDGBufferSRV *pFVar9;
  uint uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  FVirtualShadowMapUniformParameters *pFVar15;
  FVirtualShadowMapUniformParameters *pFVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  FVirtualShadowMapUniformParameters *pFVar21;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar22;
  FVirtualShadowMapUniformParameters *pFVar23;
  FVirtualShadowMapUniformParameters *pFVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *local_48 [2];
  
  pTVar3 = &this->CachedUniformBuffers;
  uVar25 = 0;
  piVar1 = &(this->CachedUniformBuffers).ArrayMax;
  (this->CachedUniformBuffers).ArrayNum = 0;
  piVar2 = &(this->CachedUniformBuffers).ArrayNum;
  if ((this->CachedUniformBuffers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  uVar20 = (this->PerViewParameters).ArrayNum;
  if (uVar20 == 0) {
    local_48[0] = GetUncachedUniformBuffer(this,param_1);
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar4 + (longlong)*piVar1 * 8)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar18 = *piVar2;
    if (iVar18 == *piVar1) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar3->AllocatorInstance,piVar1);
    }
    *piVar2 = iVar18 + 1;
    *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
     ((pTVar3->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_48[0];
    return;
  }
  iVar18 = *piVar2;
  if (iVar18 < (int)uVar20) {
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar20 - iVar18,&pTVar3->AllocatorInstance,piVar2,piVar1);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 8,0,
           (longlong)(int)(uVar20 - iVar18) << 3);
  }
  else {
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if ((int)uVar20 < iVar18) {
      uVar26 = iVar18 - uVar20;
      if (((int)(uVar26 | uVar20) < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar26 != 0) {
        pFVar4 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar20 * 8;
        iVar18 = (*piVar2 - uVar20) - uVar26;
        if (iVar18 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(int)uVar26 * 8,(longlong)iVar18 << 3);
        }
        *piVar2 = *piVar2 - uVar26;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar3->AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  if (0 < (this->PerViewParameters).ArrayNum) {
    uVar28 = uVar25;
    uVar29 = uVar25;
    do {
      pFVar21 = FRDGAllocator::Alloc<FVirtualShadowMapUniformParameters>
                          ((FRDGAllocator *)&param_1->_padding_);
      lVar27 = 2;
      pFVar15 = &this->UniformParameters;
      pFVar16 = pFVar21;
      do {
        pFVar24 = pFVar16;
        pFVar23 = pFVar15;
        uVar20 = pFVar23->NumSinglePageShadowMaps;
        uVar26 = pFVar23->MaxPhysicalPages;
        uVar10 = pFVar23->NumShadowMapSlots;
        pFVar24->NumFullShadowMaps = pFVar23->NumFullShadowMaps;
        pFVar24->NumSinglePageShadowMaps = uVar20;
        pFVar24->MaxPhysicalPages = uVar26;
        pFVar24->NumShadowMapSlots = uVar10;
        uVar20 = pFVar23->StaticHZBArrayIndex;
        uVar26 = pFVar23->PhysicalPageRowMask;
        uVar10 = pFVar23->PhysicalPageRowShift;
        pFVar24->StaticCachedArrayIndex = pFVar23->StaticCachedArrayIndex;
        pFVar24->StaticHZBArrayIndex = uVar20;
        pFVar24->PhysicalPageRowMask = uVar26;
        pFVar24->PhysicalPageRowShift = uVar10;
        uVar11 = *(undefined4 *)&pFVar23->field_0x24;
        lVar6 = pFVar23->_padding_;
        pFVar24->PackedShadowMaskMaxLightCount = pFVar23->PackedShadowMaskMaxLightCount;
        *(undefined4 *)&pFVar24->field_0x24 = uVar11;
        pFVar24->_padding_ = lVar6;
        uVar7 = *(undefined8 *)((longlong)&(pFVar23->RecPhysicalPoolSize).field0_0x0 + 8);
        *(undefined8 *)&(pFVar24->RecPhysicalPoolSize).field0_0x0 =
             *(undefined8 *)&(pFVar23->RecPhysicalPoolSize).field0_0x0;
        *(undefined8 *)((longlong)&(pFVar24->RecPhysicalPoolSize).field0_0x0 + 8) = uVar7;
        TVar8 = (pFVar23->PhysicalPoolSizePages).field0_0x0;
        (pFVar24->PhysicalPoolSize).field0_0x0 = (pFVar23->PhysicalPoolSize).field0_0x0;
        (pFVar24->PhysicalPoolSizePages).field0_0x0 = TVar8;
        uVar20 = pFVar23->PageTableRowMask;
        lVar6 = pFVar23->_padding_;
        pFVar24->PageTableRowShift = pFVar23->PageTableRowShift;
        pFVar24->PageTableRowMask = uVar20;
        pFVar24->_padding_ = lVar6;
        uVar7 = *(undefined8 *)((longlong)&(pFVar23->PageTableTextureSizeInvSize).field0_0x0 + 8);
        *(undefined8 *)&(pFVar24->PageTableTextureSizeInvSize).field0_0x0 =
             *(undefined8 *)&(pFVar23->PageTableTextureSizeInvSize).field0_0x0;
        *(undefined8 *)((longlong)&(pFVar24->PageTableTextureSizeInvSize).field0_0x0 + 8) = uVar7;
        uVar7 = *(undefined8 *)
                 ((longlong)&(pFVar23->PageReceiverMaskTextureSizeInvSize).field0_0x0 + 8);
        *(undefined8 *)&(pFVar24->PageReceiverMaskTextureSizeInvSize).field0_0x0 =
             *(undefined8 *)&(pFVar23->PageReceiverMaskTextureSizeInvSize).field0_0x0;
        *(undefined8 *)((longlong)&(pFVar24->PageReceiverMaskTextureSizeInvSize).field0_0x0 + 8) =
             uVar7;
        lVar27 = lVar27 + -1;
        pFVar15 = (FVirtualShadowMapUniformParameters *)&pFVar23->bExcludeNonNaniteFromCoarsePages;
        pFVar16 = (FVirtualShadowMapUniformParameters *)&pFVar24->bExcludeNonNaniteFromCoarsePages;
      } while (lVar27 != 0);
      fVar12 = pFVar23->CoarsePagePixelThresholdDynamic;
      fVar13 = pFVar23->CoarsePagePixelThresholdStatic;
      fVar14 = pFVar23->CoarsePagePixelThresholdDynamicNanite;
      uVar26 = (uint)uVar25;
      pFVar24->bExcludeNonNaniteFromCoarsePages = pFVar23->bExcludeNonNaniteFromCoarsePages;
      pFVar24->CoarsePagePixelThresholdDynamic = fVar12;
      pFVar24->CoarsePagePixelThresholdStatic = fVar13;
      pFVar24->CoarsePagePixelThresholdDynamicNanite = fVar14;
      fVar12 = pFVar23->GlobalResolutionLodBias;
      iVar18 = pFVar23->MipModeLocal;
      fVar13 = pFVar23->ScreenRayLength;
      pFVar24->SceneFrameNumber = pFVar23->SceneFrameNumber;
      pFVar24->GlobalResolutionLodBias = fVar12;
      pFVar24->MipModeLocal = iVar18;
      pFVar24->ScreenRayLength = fVar13;
      uVar20 = pFVar23->SMRTAdaptiveRayCount;
      iVar18 = pFVar23->SMRTRayCountLocal;
      iVar19 = pFVar23->SMRTSamplesPerRayLocal;
      pFVar24->NormalBias = pFVar23->NormalBias;
      pFVar24->SMRTAdaptiveRayCount = uVar20;
      pFVar24->SMRTRayCountLocal = iVar18;
      pFVar24->SMRTSamplesPerRayLocal = iVar19;
      fVar12 = pFVar23->SMRTTexelDitherScaleLocal;
      fVar13 = pFVar23->SMRTMaxSlopeBiasLocal;
      fVar14 = pFVar23->SMRTCotMaxRayAngleFromLight;
      pFVar24->SMRTExtrapolateMaxSlopeLocal = pFVar23->SMRTExtrapolateMaxSlopeLocal;
      pFVar24->SMRTTexelDitherScaleLocal = fVar12;
      pFVar24->SMRTMaxSlopeBiasLocal = fVar13;
      pFVar24->SMRTCotMaxRayAngleFromLight = fVar14;
      iVar18 = pFVar23->SMRTSamplesPerRayDirectional;
      fVar12 = pFVar23->SMRTExtrapolateMaxSlopeDirectional;
      fVar13 = pFVar23->SMRTTexelDitherScaleDirectional;
      pFVar24->SMRTRayCountDirectional = pFVar23->SMRTRayCountDirectional;
      pFVar24->SMRTSamplesPerRayDirectional = iVar18;
      pFVar24->SMRTExtrapolateMaxSlopeDirectional = fVar12;
      pFVar24->SMRTTexelDitherScaleDirectional = fVar13;
      uVar20 = 0;
      if ((int)uVar26 < (this->PerViewParameters).ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->PerViewParameters).AllocatorInstance.Data;
      pFVar9 = *(FRDGBufferSRV **)(pFVar4 + uVar29 + 8);
      (pFVar21->PerViewData).LightGridData = *(FRDGBufferSRV **)(pFVar4 + uVar29);
      (pFVar21->PerViewData).NumCulledLightsGrid = pFVar9;
      pFVar9 = *(FRDGBufferSRV **)(pFVar4 + uVar29 + 0x10 + 8);
      *(undefined8 *)&(pFVar21->PerViewData).MaxLightGridEntryIndex =
           *(undefined8 *)(pFVar4 + uVar29 + 0x10);
      (pFVar21->PerViewData).DirectionalLightIds = pFVar9;
      uVar7 = *(undefined8 *)(pFVar4 + uVar29 + 0x20 + 8);
      *(undefined8 *)&(pFVar21->PerViewData).DirectionalLightIdCount =
           *(undefined8 *)(pFVar4 + uVar29 + 0x20);
      *(undefined8 *)&(pFVar21->PerViewData).field_0x28 = uVar7;
      pTVar22 = FRDGBuilder::CreateUniformBuffer<FVirtualShadowMapUniformParameters>
                          (param_1,pFVar21);
      uVar20 = 0;
      if ((int)uVar26 < *piVar2) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar25 = (ulonglong)(uVar26 + 1);
      uVar29 = uVar29 + 0x30;
      *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
       ((pTVar3->AllocatorInstance).Data + uVar28) = pTVar22;
      uVar28 = uVar28 + 8;
    } while ((int)(uVar26 + 1) < (this->PerViewParameters).ArrayNum);
  }
  return;
}

// UpdateHZB @ 1458168d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall FVirtualShadowMapArray::UpdateHZB(FVirtualShadowMapArray *this,FRDGBuilder *param_1)

{
  FParameters *pFVar1;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar2;
  char cVar3;
  longlong lVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  FRDGTexture *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FRDGBuffer *pFVar12;
  undefined8 *puVar13;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar14;
  FShaderParametersMetadata *pFVar15;
  FRDGBufferUAV *pFVar16;
  FShaderType *pFVar17;
  FName FVar18;
  FRDGEventName *pFVar19;
  undefined8 *puVar20;
  FRDGTextureUAV *pFVar21;
  ulonglong uVar22;
  FRDGBufferSRV *pFVar23;
  FGlobalShaderMap *pFVar24;
  FGlobalShaderType *pFVar25;
  FRDGTextureSRV *pFVar26;
  byte bVar27;
  longlong *plVar28;
  longlong *plVar29;
  EUniformBufferBindingFlags EVar30;
  FMemStackBase *this_00;
  uint uVar31;
  undefined1 auStackY_3c8 [32];
  undefined1 local_378;
  undefined1 local_377 [7];
  FRDGTextureUAVDesc local_370;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  FRDGUserValidation *local_338;
  EUniformBufferBindingFlags EStack_330;
  undefined7 uStack_32f;
  FRDGTextureUAVDesc local_328;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined8 *local_300;
  FParameters *local_2f8;
  EUniformBufferBindingFlags EStack_2f0;
  undefined7 uStack_2ef;
  FRDGBuffer *local_2e8;
  FRDGBuffer *local_2e0;
  FRDGTextureSRVDesc local_2d8;
  FMemStackBase *local_2c0;
  float local_2b8;
  float fStack_2b4;
  longlong *local_2a8;
  FRDGBufferUAVDesc local_2a0;
  FRDGBufferUAVDesc local_290;
  FRDGBufferUAVDesc local_280;
  FRDGBufferUAVDesc local_270;
  TIntVector3<int>_u_0 local_260 [2];
  TIntVector3<int>_u_0 local_248;
  FRDGBufferSRVDesc local_238;
  FRDGBufferSRVDesc local_218;
  FRDGBufferSRVDesc local_1f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1b8;
  TShaderRefBase<FVirtualSmBuildHZBPerPageCS,FShaderMapPointerTable> local_1a8;
  FString local_198;
  TShaderRefBase<FVirtualSmBBuildHZBPerPageTopCS,FShaderMapPointerTable> local_188;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  FRDGBufferDesc local_160;
  FRDGBufferDesc local_148;
  FString local_130;
  TShaderRefBase<FSelectPagesForHZBAndUpdateDirtyFlagsCS,FShaderMapPointerTable> local_118;
  FString local_108;
  FRDGEventName local_f8;
  FRDGEventName local_e0;
  FRDGEventName local_c8;
  undefined1 local_a8 [40];
  longlong *local_80;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  puVar20 = (undefined8 *)0x0;
  if ((this->bInitialized == false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                         ,0x421,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->bInitialized == false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                         ,0x421,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uStack_350 = 0x4189;
  local_358 = (FRDGBuffer *)0x800000004;
  local_160._12_4_ = uStack_34c;
  local_160.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  local_348 = 0;
  local_160.BytesPerElement = 4;
  local_160.NumElements = 8;
  local_160.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar12 = FRDGBuilder::CreateBuffer
                      (param_1,&local_160,L"Shadow.Virtual.PagesForHZBIndirectArgs",None);
  local_2e8 = pFVar12;
  if ((this->bInitialized == false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                         ,0x430,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar31 = (this->UniformParameters).MaxPhysicalPages;
  uStack_350 = 0x10109;
  local_348 = 0;
  uVar9 = uVar31 * 2;
  if ((this->UniformParameters).StaticCachedArrayIndex == 0) {
    uVar9 = uVar31;
  }
  local_148.Metadata = (FShaderParametersMetadata *)0x0;
  local_358._4_4_ = uVar9 + 1;
  local_358._0_4_ = 4;
  local_148._12_4_ = uStack_34c;
  local_148.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_148.BytesPerElement = 4;
  local_148.NumElements = uVar9 + 1;
  local_2e0 = FRDGBuilder::CreateBuffer
                        (param_1,&local_148,L"Shadow.Virtual.PhysicalPagesForHZB",None);
  local_260[0]._s_0.X = 0;
  local_260[0]._s_0.Y = 1;
  local_260[0]._s_0.Z = 1;
  AddClearIndirectDispatchArgsPass
            (param_1,*(Type *)&this->Scene->field_0x8,pFVar12,(TIntVector3<int> *)&local_260[0]._s_0
             ,2,4);
  local_2c0 = (FMemStackBase *)&param_1->_padding_;
  puVar13 = FMemStackBase::Alloc(local_2c0,0x50,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    puVar13[2] = 0;
    *puVar13 = &
               ___7__TObject_VFParameters_FSelectPagesForHZBAndUpdateDirtyFlagsCS___FRDGAllocator__6B_
    ;
    *(undefined1 *)(puVar13 + 3) = 1;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[9] = 0;
    puVar20 = puVar13;
  }
  plVar29 = &param_1->_padding_;
  local_310 = puVar20;
  local_2a8 = plVar29;
  if ((((undefined8 **)param_1->_padding_ <= &local_310) &&
      (&local_310 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = (int)param_1->_padding_;
  if (iVar10 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar29,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  *(int *)&param_1->_padding_ = iVar10 + 1;
  *(undefined8 **)(*plVar29 + (longlong)iVar10 * 8) = local_310;
  local_338 = (FRDGUserValidation *)(puVar20 + 2);
  pTVar14 = GetUncachedUniformBuffer(this,param_1);
  pFVar15 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  local_2a0.Buffer = local_2e8;
  EStack_2f0 = Static;
  if (pFVar15->BindingFlags != StaticAndShader) {
    EStack_2f0 = pFVar15->BindingFlags;
  }
  bVar27 = 0;
  local_2a0._padding_._2_1_ = 0;
  *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
   &((FParameters *)(puVar20 + 2))->VirtualShadowMap = pTVar14;
  puVar20[3] = CONCAT71(uStack_2ef,EStack_2f0);
  if (((local_2e8->Desc).Usage & DrawIndirect) != None) {
    bVar27 = 0x1c;
  }
  local_2a0._padding_._0_2_ = (ushort)bVar27;
  local_2f8 = (FParameters *)pTVar14;
  pFVar16 = FRDGBuilder::CreateUAV(param_1,&local_2a0,None);
  puVar20[5] = pFVar16;
  local_290.Buffer = local_2e0;
  local_290._padding_._2_1_ = 0;
  bVar27 = 0;
  if (((local_2e0->Desc).Usage & DrawIndirect) != None) {
    bVar27 = 0x1c;
  }
  local_290._padding_._0_2_ = (ushort)bVar27;
  pFVar16 = FRDGBuilder::CreateUAV(param_1,&local_290,None);
  puVar20[6] = pFVar16;
  local_280.Buffer = this->DirtyPageFlagsRDG;
  local_280._padding_._2_1_ = 0;
  bVar27 = 0;
  if ((((local_280.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar27 = 0x1c;
  }
  local_280._padding_._0_2_ = (ushort)bVar27;
  pFVar16 = FRDGBuilder::CreateUAV(param_1,&local_280,None);
  puVar20[7] = pFVar16;
  local_270.Buffer = this->PhysicalPageMetaDataRDG;
  bVar27 = 0;
  local_270._padding_._2_1_ = 0;
  if ((((local_270.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar27 = 0x1c;
  }
  local_270._padding_._0_2_ = (ushort)bVar27;
  pFVar16 = FRDGBuilder::CreateUAV(param_1,&local_270,None);
  puVar20[4] = pFVar16;
  *(uint *)(puVar20 + 8) = (uint)(this->bHZBBuiltThisFrame == false);
  pTVar6 = CVarShadowsVirtualForceFullHZBUpdate.Ref;
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(int *)((longlong)puVar20 + 0x44) = pTVar6->ShadowedValue[1];
  pFVar16 = this->StatsBufferUAV;
  bVar8 = ShouldGenerateStats(this);
  *(FRDGBufferUAV **)((longlong)local_338 + 0x38) = pFVar16;
  local_2f8 = (FParameters *)
              GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [*(int *)&this->Scene->field_0x8]);
  pFVar17 = (FShaderType *)FSelectPagesForHZBAndUpdateDirtyFlagsCS::GetStaticType();
  FGlobalShaderMap::GetShader((FGlobalShaderMap *)local_2f8,&local_1b8,pFVar17,(uint)bVar8);
  if (local_1b8.ShaderContent == (FShader *)0x0) {
    FVar18 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_170);
    ::FName::ToString((FName *)FVar18,&local_130);
    FSelectPagesForHZBAndUpdateDirtyFlagsCS::GetStaticType();
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FSelectPagesForHZBAndUpdateDirtyFlagsCS::GetStaticType();
  uVar31 = (this->UniformParameters).MaxPhysicalPages;
  local_118.ShaderContent = (FSelectPagesForHZBAndUpdateDirtyFlagsCS *)local_1b8.ShaderContent;
  local_118.ShaderMap = local_1b8.ShaderMap;
  pFVar19 = FRDGEventName::FRDGEventName(&local_f8,1,L"SelectPagesForHZB");
  pFVar15 = FSelectPagesForHZBAndUpdateDirtyFlagsCS::FParameters::FTypeInfo::GetStructMetadata();
  local_248._s_0.Y = 1;
  local_248._s_0.Z = 1;
  local_248._s_0.X = uVar31 + 0xff >> 8;
  FComputeShaderUtils::AddPass<FSelectPagesForHZBAndUpdateDirtyFlagsCS>
            (param_1,pFVar19,Compute,&local_118,pFVar15,(FParameters *)local_338,
             (TIntVector3<int> *)&local_248._s_0);
  if (local_f8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  this->bHZBBuiltThisFrame = true;
  puVar20 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x80,0x10);
  if (puVar20 == (undefined8 *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    *(undefined4 *)(puVar20 + 3) = 4;
    *puVar20 = &___7__TObject_VFParameters_FVirtualSmBuildHZBPerPageCS___FRDGAllocator__6B_;
    puVar20[2] = 0;
    puVar20[4] = 0;
    *(undefined1 *)(puVar20 + 5) = 1;
    puVar20[6] = 0;
    puVar20[7] = 0;
    puVar20[8] = 0;
    puVar20[9] = 0;
    puVar20[10] = 0;
    puVar20[0xb] = 0;
    puVar20[0xc] = 0;
    puVar20[0xd] = 0;
    puVar20[0xe] = 0;
  }
  local_308 = puVar20;
  if ((((undefined8 **)*plVar29 <= &local_308) &&
      (&local_308 < (undefined8 **)*plVar29 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = (int)param_1->_padding_;
  if (iVar10 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar29,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  *(int *)&param_1->_padding_ = iVar10 + 1;
  *(undefined8 **)(*plVar29 + (longlong)iVar10 * 8) = local_308;
  local_2f8 = (FParameters *)(puVar20 + 2);
  pTVar14 = GetUncachedUniformBuffer(this,param_1);
  pFVar15 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  local_338 = &param_1->UserValidation;
  pTVar2 = &param_1->Views;
  EStack_330 = Static;
  if (pFVar15->BindingFlags != StaticAndShader) {
    EStack_330 = pFVar15->BindingFlags;
  }
  uVar31 = 0;
  puVar20[4] = pTVar14;
  puVar20[5] = CONCAT71(uStack_32f,EStack_330);
  this_00 = (FMemStackBase *)&param_1->_padding_;
  do {
    local_328.Texture = this->HZBPhysicalArrayRDG;
    local_328._padding_._0_1_ = ((local_328.Texture)->Desc).field_0x34;
    local_328._padding_._1_1_ = (undefined1)uVar31;
    local_328._padding_._2_4_ = 0;
    local_328._padding_._6_1_ = 0;
    local_328._padding_._0_1_ = '\0';
    FRDGUserValidation::ValidateCreateUAV(local_338,&local_328);
    pFVar7 = local_328.Texture;
    pFVar21 = FMemStackBase::Alloc(this_00,0x50,8);
    lVar4 = pFVar7->_padding_;
    *(byte *)&pFVar21->_padding_ = (byte)pFVar21->_padding_ & 0xfe;
    pFVar21->_padding_ = lVar4;
    pFVar21->_padding_ = 0;
    *(undefined1 *)&pFVar21->_padding_ = 0;
    *(undefined8 *)((longlong)&pFVar21->_padding_ + 4) = 0xffffffffffffffff;
    *(undefined1 *)&pFVar21->_padding_ = 0;
    pFVar21->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
    *(undefined1 *)&(pFVar21->Desc)._padding_ = (undefined1)local_328._padding_;
    *(undefined1 *)((longlong)&(pFVar21->Desc)._padding_ + 1) = local_328._padding_._1_1_;
    *(undefined2 *)((longlong)&(pFVar21->Desc)._padding_ + 2) = local_328._padding_._2_2_;
    *(undefined2 *)((longlong)&(pFVar21->Desc)._padding_ + 4) = local_328._padding_._4_2_;
    *(undefined1 *)&(pFVar21->Desc)._padding_ = 0;
    *(undefined1 *)((longlong)&(pFVar21->Desc)._padding_ + 6) = local_328._padding_._6_1_;
    *(char *)&(pFVar21->Desc)._padding_ = (char)local_328._padding_;
    if ((char)local_328._padding_ != '\0') {
      *(undefined1 *)((longlong)&(pFVar21->Desc)._padding_ + 7) = local_328._padding_._7_1_;
    }
    (pFVar21->Desc).Texture = local_328.Texture;
    iVar10 = (param_1->Views).Array.ArrayNum;
    if (iVar10 == (param_1->Views).Array.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                         (0x808,(ForElementType<FRDGView_*> *)pTVar2,
                          &(param_1->Views).Array.ArrayMax);
    }
    (param_1->Views).Array.ArrayNum = iVar10 + 1;
    (pTVar2->Array).AllocatorInstance.Data[iVar10] = (FRDGView *)pFVar21;
    *(int *)((longlong)&pFVar21->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateUAV(local_338,pFVar21);
    uVar22 = (ulonglong)uVar31;
    uVar31 = uVar31 + 1;
    puVar20[uVar22 + 10] = pFVar21;
    this_00 = local_2c0;
  } while (uVar31 < 5);
  puVar20[9] = this->PhysicalPagePoolRDG;
  puVar20[8] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  local_238.Buffer = this->PhysicalPageMetaDataRDG;
  local_238._padding_._4_4_ = 0;
  local_238._padding_._0_4_ = 0xffffffff;
  local_238._padding_ = 0;
  local_238._padding_._0_1_ = 0;
  if ((((local_238.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_238._padding_._0_1_ = 0x1c;
  }
  pFVar23 = FRDGBuilder::CreateSRV(param_1,&local_238);
  puVar20[6] = pFVar23;
  local_358 = local_2e8;
  local_218._padding_._0_1_ = 0;
  local_218.Buffer = local_2e0;
  local_218._padding_._4_4_ = 0;
  local_218._padding_._0_4_ = 0xffffffff;
  local_218._padding_ = 0;
  uStack_350 = 4;
  *(FRDGBuffer **)&((FParameters *)(puVar20 + 2))->IndirectArgs = local_2e8;
  puVar20[3] = CONCAT44(uStack_34c,4);
  if (((local_2e0->Desc).Usage & DrawIndirect) != None) {
    local_218._padding_._0_1_ = 0x1c;
  }
  pFVar23 = FRDGBuilder::CreateSRV(param_1,&local_218);
  puVar20[7] = pFVar23;
  pFVar24 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                               [*(int *)&this->Scene->field_0x8]);
  pFVar25 = FVirtualSmBuildHZBPerPageCS::GetStaticType();
  plVar29 = local_2a8;
  if (*(int *)&pFVar25->field_0x50 != 1) {
    local_378 = 0;
    `FGlobalShaderMap::GetShader<FVirtualSmBuildHZBPerPageCS>'::__l2::<lambda_1>::operator()
              (&local_378);
  }
  pFVar17 = (FShaderType *)FVirtualSmBuildHZBPerPageCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar24,&local_1d8,pFVar17,0);
  if (local_1d8.ShaderContent == (FShader *)0x0) {
    FVar18 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_178);
    ::FName::ToString((FName *)FVar18,&local_108);
    FVirtualSmBuildHZBPerPageCS::GetStaticType();
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVirtualSmBuildHZBPerPageCS::GetStaticType();
  local_1a8.ShaderContent = (FVirtualSmBuildHZBPerPageCS *)local_1d8.ShaderContent;
  local_1a8.ShaderMap = local_1d8.ShaderMap;
  local_a8._0_8_ = 0;
  local_80 = (longlong *)0x0;
  pFVar12 = *(FRDGBuffer **)&local_2f8->IndirectArgs;
  pFVar19 = FRDGEventName::FRDGEventName(&local_e0,1,L"BuildHZBPerPage");
  FComputeShaderUtils::AddPass<FVirtualSmBuildHZBPerPageCS>
            (param_1,pFVar19,Compute,&local_1a8,local_2f8,pFVar12,0,
             (TFunction<void___cdecl(void)> *)local_a8);
  if (local_e0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_a8._0_8_ != 0) {
    plVar28 = (longlong *)(local_a8 + 0x10);
    if (local_80 != (longlong *)0x0) {
      plVar28 = local_80;
    }
    (**(code **)(*plVar28 + 0x10))();
  }
  puVar20 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x60,0x10);
  if (puVar20 == (undefined8 *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    *(undefined4 *)(puVar20 + 3) = 4;
    *puVar20 = &___7__TObject_VFParameters_FVirtualSmBBuildHZBPerPageTopCS___FRDGAllocator__6B_;
    puVar20[2] = 0;
    puVar20[4] = 0;
    *(undefined1 *)(puVar20 + 5) = 1;
    puVar20[6] = 0;
    puVar20[7] = 0;
    puVar20[8] = 0;
    puVar20[10] = 0;
    puVar20[0xb] = 0;
  }
  local_300 = puVar20;
  if ((((undefined8 **)*plVar29 <= &local_300) &&
      (&local_300 < (undefined8 **)*plVar29 + *(int *)((longlong)plVar29 + 0xc))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = (int)plVar29[1];
  if (iVar10 == *(int *)((longlong)plVar29 + 0xc)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar29,(int *)((longlong)plVar29 + 0xc));
  }
  *(int *)(plVar29 + 1) = iVar10 + 1;
  pFVar1 = (FParameters *)(puVar20 + 2);
  *(undefined8 **)(*plVar29 + (longlong)iVar10 * 8) = local_300;
  pTVar14 = GetUncachedUniformBuffer(this,param_1);
  pFVar15 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  EVar30 = Static;
  if (pFVar15->BindingFlags != StaticAndShader) {
    EVar30 = pFVar15->BindingFlags;
  }
  uStack_350 = CONCAT31(uStack_350._1_3_,EVar30);
  puVar20[4] = pTVar14;
  puVar20[5] = CONCAT44(uStack_34c,uStack_350);
  local_370.Texture = this->HZBPhysicalArrayRDG;
  local_370._padding_._0_1_ = ((local_370.Texture)->Desc).field_0x34;
  local_370._padding_._2_4_ = 0;
  local_370._padding_._6_1_ = 0;
  local_370._padding_._0_1_ = '\0';
  local_370._padding_._1_1_ = 5;
  local_358 = (FRDGBuffer *)pTVar14;
  FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_370);
  pFVar7 = local_370.Texture;
  pFVar21 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
  pFVar21->_padding_ = pFVar7->_padding_;
  *(byte *)&pFVar21->_padding_ = (byte)pFVar21->_padding_ & 0xfe;
  pFVar21->_padding_ = 0;
  *(undefined1 *)&pFVar21->_padding_ = 0;
  *(undefined1 *)&pFVar21->_padding_ = 0;
  pFVar21->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
  *(undefined8 *)((longlong)&pFVar21->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)&(pFVar21->Desc)._padding_ = (undefined1)local_370._padding_;
  *(undefined1 *)((longlong)&(pFVar21->Desc)._padding_ + 1) = local_370._padding_._1_1_;
  *(undefined2 *)((longlong)&(pFVar21->Desc)._padding_ + 2) = local_370._padding_._2_2_;
  *(undefined2 *)((longlong)&(pFVar21->Desc)._padding_ + 4) = local_370._padding_._4_2_;
  *(undefined1 *)&(pFVar21->Desc)._padding_ = 0;
  *(undefined1 *)((longlong)&(pFVar21->Desc)._padding_ + 6) = local_370._padding_._6_1_;
  *(char *)&(pFVar21->Desc)._padding_ = (char)local_370._padding_;
  if ((char)local_370._padding_ != '\0') {
    *(undefined1 *)((longlong)&(pFVar21->Desc)._padding_ + 7) = local_370._padding_._7_1_;
  }
  (pFVar21->Desc).Texture = local_370.Texture;
  iVar10 = (param_1->Views).Array.ArrayNum;
  if (iVar10 == (param_1->Views).Array.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                       (0x808,(ForElementType<FRDGView_*> *)pTVar2,&(param_1->Views).Array.ArrayMax)
    ;
  }
  (param_1->Views).Array.ArrayNum = iVar10 + 1;
  (pTVar2->Array).AllocatorInstance.Data[iVar10] = (FRDGView *)pFVar21;
  *(int *)((longlong)&pFVar21->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUAV(local_338,pFVar21);
  puVar20[10] = pFVar21;
  local_370.Texture = this->HZBPhysicalArrayRDG;
  local_370._padding_._0_1_ = ((local_370.Texture)->Desc).field_0x34;
  local_370._padding_._2_4_ = 0;
  local_370._padding_._6_1_ = 0;
  local_370._padding_._0_1_ = '\0';
  local_370._padding_._1_1_ = 6;
  FRDGUserValidation::ValidateCreateUAV(local_338,&local_370);
  pFVar7 = local_370.Texture;
  pFVar21 = FMemStackBase::Alloc(local_2c0,0x50,8);
  pFVar21->_padding_ = pFVar7->_padding_;
  pFVar21->_padding_ = 0;
  *(byte *)&pFVar21->_padding_ = (byte)pFVar21->_padding_ & 0xfe;
  *(undefined1 *)&pFVar21->_padding_ = 0;
  *(undefined8 *)((longlong)&pFVar21->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)&pFVar21->_padding_ = 0;
  pFVar21->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
  *(undefined1 *)&(pFVar21->Desc)._padding_ = (undefined1)local_370._padding_;
  *(undefined1 *)((longlong)&(pFVar21->Desc)._padding_ + 1) = local_370._padding_._1_1_;
  *(undefined2 *)((longlong)&(pFVar21->Desc)._padding_ + 2) = local_370._padding_._2_2_;
  *(undefined2 *)((longlong)&(pFVar21->Desc)._padding_ + 4) = local_370._padding_._4_2_;
  *(undefined1 *)((longlong)&(pFVar21->Desc)._padding_ + 6) = local_370._padding_._6_1_;
  *(undefined1 *)&(pFVar21->Desc)._padding_ = 0;
  *(char *)&(pFVar21->Desc)._padding_ = (char)local_370._padding_;
  if ((char)local_370._padding_ != '\0') {
    *(undefined1 *)((longlong)&(pFVar21->Desc)._padding_ + 7) = local_370._padding_._7_1_;
  }
  (pFVar21->Desc).Texture = local_370.Texture;
  iVar10 = (param_1->Views).Array.ArrayNum;
  if (iVar10 == (param_1->Views).Array.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                       (0x808,(ForElementType<FRDGView_*> *)pTVar2,&(param_1->Views).Array.ArrayMax)
    ;
  }
  (param_1->Views).Array.ArrayNum = iVar10 + 1;
  (pTVar2->Array).AllocatorInstance.Data[iVar10] = (FRDGView *)pFVar21;
  *(int *)((longlong)&pFVar21->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUAV(local_338,pFVar21);
  fStack_2b4 = __real_3f800000;
  puVar20[0xb] = pFVar21;
  local_2d8._padding_._0_1_ = 0;
  local_2d8._padding_._3_1_ = 0;
  local_2d8._padding_._4_4_ = 0;
  iVar10 = *(int *)&(this->HZBPhysicalArrayRDG->Desc).field_0x24 + 0xf;
  local_2d8._padding_._0_1_ = 0;
  local_2d8._padding_._2_1_ = 0;
  iVar11 = *(int *)&(this->HZBPhysicalArrayRDG->Desc).field_0x28 + 0xf;
  local_2b8 = fStack_2b4 / (float)((int)(iVar10 + (iVar10 >> 0x1f & 0xfU)) >> 4);
  fStack_2b4 = fStack_2b4 / (float)((int)(iVar11 + (iVar11 >> 0x1f & 0xfU)) >> 4);
  puVar20[9] = CONCAT44(fStack_2b4,local_2b8);
  local_2d8.Texture = this->HZBPhysicalArrayRDG;
  cVar3 = ((local_2d8.Texture)->Desc).field_0x32;
  if ((cVar3 == '\x01') || (cVar3 == '\x04')) {
    local_2d8._padding_._4_4_ = (uint)*(ushort *)&((local_2d8.Texture)->Desc).field_0x2e << 0x10;
  }
  local_2d8._padding_._1_2_ = 0x104;
  pFVar26 = FRDGBuilder::CreateSRV(param_1,&local_2d8);
  puVar20[8] = pFVar26;
  puVar20[7] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  local_358 = local_2e8;
  local_1f8.Buffer = local_2e0;
  local_1f8._padding_._4_4_ = 0;
  local_1f8._padding_._0_4_ = 0xffffffff;
  local_1f8._padding_ = 0;
  uStack_350 = 4;
  *(FRDGBuffer **)&pFVar1->IndirectArgs = local_2e8;
  puVar20[3] = CONCAT44(uStack_34c,4);
  local_1f8._padding_._0_1_ = 0;
  if (((local_2e0->Desc).Usage & DrawIndirect) != None) {
    local_1f8._padding_._0_1_ = 0x1c;
  }
  pFVar23 = FRDGBuilder::CreateSRV(param_1,&local_1f8);
  puVar20[6] = pFVar23;
  pFVar24 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                               [*(int *)&this->Scene->field_0x8]);
  pFVar25 = FVirtualSmBBuildHZBPerPageTopCS::GetStaticType();
  if (*(int *)&pFVar25->field_0x50 != 1) {
    local_377[0] = 0;
    `FGlobalShaderMap::GetShader<FVirtualSmBBuildHZBPerPageTopCS>'::__l2::<lambda_1>::operator()
              (local_377);
  }
  pFVar17 = (FShaderType *)FVirtualSmBBuildHZBPerPageTopCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar24,&local_1c8,pFVar17,0);
  if (local_1c8.ShaderContent == (FShader *)0x0) {
    FVar18 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_168);
    ::FName::ToString((FName *)FVar18,&local_198);
    FVirtualSmBBuildHZBPerPageTopCS::GetStaticType();
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVirtualSmBBuildHZBPerPageTopCS::GetStaticType();
  pFVar12 = *(FRDGBuffer **)&pFVar1->IndirectArgs;
  local_188.ShaderContent = (FVirtualSmBBuildHZBPerPageTopCS *)local_1c8.ShaderContent;
  local_188.ShaderMap = local_1c8.ShaderMap;
  local_78._0_8_ = 0;
  local_50 = (longlong *)0x0;
  pFVar19 = FRDGEventName::FRDGEventName(&local_c8,1,L"BuildHZBPerPageTop");
  FComputeShaderUtils::AddPass<FVirtualSmBBuildHZBPerPageTopCS>
            (param_1,pFVar19,Compute,&local_188,pFVar1,pFVar12,0x10,
             (TFunction<void___cdecl(void)> *)local_78);
  if (local_c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_78._0_8_ != 0) {
    plVar29 = (longlong *)(local_78 + 0x10);
    if (local_50 != (longlong *)0x0) {
      plVar29 = local_50;
    }
    (**(code **)(*plVar29 + 0x10))();
  }
  return;
}

// UpdateNextData @ 145817c40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::UpdateNextData
          (FVirtualShadowMapArray *this,int param_1,FNextVirtualShadowMapData *param_2)

{
  TArray<UE::HLSL::FNextVirtualShadowMapData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  FNextVirtualShadowMapData *pFVar8;
  uint uVar9;
  uint uVar10;
  
  piVar7 = &(this->NextData).ArrayNum;
  iVar6 = *piVar7;
  if (iVar6 <= param_1) {
    uVar9 = param_1 + 1;
    pTVar1 = &this->NextData;
    if (iVar6 < (int)uVar9) {
      iVar5 = UE::Core::Private::
              ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FNextVirtualShadowMapData>_>
                        (0x10,4,uVar9 - iVar6,&pTVar1->AllocatorInstance,piVar7,
                         &(this->NextData).ArrayMax);
      memset((pTVar1->AllocatorInstance).Data + iVar5,0,(longlong)(int)(uVar9 - iVar6) << 4);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < iVar6) {
        uVar10 = iVar6 - uVar9;
        if (((int)(uVar10 | uVar9) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar10 != 0) {
          pFVar8 = (pTVar1->AllocatorInstance).Data + (int)uVar9;
          iVar6 = ((this->NextData).ArrayNum - uVar10) - uVar9;
          if (iVar6 != 0) {
            memmove(pFVar8,pFVar8 + (int)uVar10,(longlong)iVar6 << 4);
          }
          piVar7 = &(this->NextData).ArrayNum;
          *piVar7 = *piVar7 - uVar10;
          UE::Core::Private::
          ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FNextVirtualShadowMapData>_>
                    (0x10,4,&pTVar1->AllocatorInstance,(this->NextData).ArrayNum,
                     &(this->NextData).ArrayMax);
        }
      }
    }
  }
  uVar9 = param_2->Flags;
  iVar6 = param_2->NextVirtualShadowMapId;
  iVar5 = (param_2->PageAddressOffset).field0_0x0._s_0.X;
  iVar3 = (param_2->PageAddressOffset).field0_0x0._s_0.Y;
  uVar10 = 0;
  if (param_1 < (this->NextData).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar8 = (this->NextData).AllocatorInstance.Data + param_1;
  pFVar8->Flags = uVar9;
  pFVar8->NextVirtualShadowMapId = iVar6;
  (pFVar8->PageAddressOffset).field0_0x0._s_0.X = iVar5;
  (pFVar8->PageAddressOffset).field0_0x0._s_0.Y = iVar3;
  return;
}

// UpdatePhysicalPageAddresses @ 145817e10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::UpdatePhysicalPageAddresses
          (FVirtualShadowMapArray *this,FRDGBuilder *param_1)

{
  int *piVar1;
  FRHIGPUMask FVar2;
  FRHIComputeCommandList *this_00;
  code *pcVar3;
  TRefCountPtr<IPooledRenderTarget> TVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar9;
  FShaderParametersMetadata *pFVar10;
  FRDGBufferUAV *pFVar11;
  ulong64 uVar12;
  FRDGBufferSRV *pFVar13;
  FRDGTexture *pFVar14;
  FGlobalShaderMap *this_01;
  FShaderType *pFVar15;
  FName this_02;
  FRDGEventName *pFVar16;
  EUniformBufferBindingFlags EVar17;
  byte bVar18;
  FNextVirtualShadowMapData *pFVar19;
  undefined8 *puVar20;
  uint uVar21;
  TRefCountPtr<IPooledRenderTarget> local_res8;
  undefined8 *local_e8;
  FRDGBufferUAVDesc local_e0;
  TIntVector3<int>_u_0 local_c8;
  FRDGBufferSRVDesc local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  undefined1 local_88 [8];
  FString local_80;
  TShaderRefBase<FUpdatePhysicalPageAddresses,FShaderMapPointerTable> local_68;
  FRDGEventName local_58;
  
  puVar20 = (undefined8 *)0x0;
  if (this->bEnabled != false) {
    this_00 = (FRHIComputeCommandList *)param_1->_padding_;
    FVar2.GPUMask = *(uint *)&this_00->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
    if (puVar8 == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      puVar8[2] = 0;
      *puVar8 = &___7__TObject_VFParameters_FUpdatePhysicalPageAddresses___FRDGAllocator__6B_;
      *(undefined1 *)(puVar8 + 3) = 1;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar20 = puVar8;
    }
    local_e8 = puVar20;
    if ((((undefined8 **)param_1->_padding_ <= &local_e8) &&
        (&local_e8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_e8;
    pTVar9 = GetUniformBuffer(this,0);
    pFVar10 = FVirtualShadowMapUniformParameters::GetStructMetadata();
    EVar17 = Static;
    if (pFVar10->BindingFlags != StaticAndShader) {
      EVar17 = pFVar10->BindingFlags;
    }
    local_b8._padding_._0_4_ = CONCAT31(local_b8._padding_._1_3_,EVar17);
    bVar18 = 0;
    *(TRDGUniformBuffer<FVirtualShadowMapUniformParameters> **)
     &((FParameters *)(puVar20 + 2))->VirtualShadowMap = pTVar9;
    puVar20[3] = CONCAT44(local_b8._padding_._4_4_,(undefined4)local_b8._padding_);
    local_e0.Buffer = this->PhysicalPageMetaDataRDG;
    local_e0._padding_._2_1_ = 0;
    if ((((local_e0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar18 = 0x1c;
    }
    local_e0._padding_._0_2_ = (ushort)bVar18;
    local_b8._padding_ = (longlong)pTVar9;
    pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_e0,None);
    puVar20[4] = pFVar11;
    uVar21 = (this->NextData).ArrayNum;
    bVar5 = uVar21 != 0;
    if (bVar5) {
      pFVar19 = (this->NextData).AllocatorInstance.Data;
      uVar12 = (ulong64)(uVar21 << 4);
    }
    else {
      uVar21 = 1;
      pFVar19 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FNextVirtualShadowMapData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::HLSL::FNextVirtualShadowMapData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const&___ptr64,ERDGInitialDataFlags)'
                 ::__l2::DummyElement;
      uVar12 = 0x10;
    }
    local_b8._padding_ = ((ulonglong)local_b8._padding_ >> 8 & 0xffffff) << 8;
    local_b8._padding_._0_4_ = 0xffffffff;
    local_b8._padding_ = 0;
    local_b8.Buffer =
         CreateStructuredBuffer
                   (param_1,L"Shadow.Virtual.NextVirtualShadowMapData",0x10,uVar21,pFVar19,uVar12,
                    !bVar5);
    uVar6 = 0;
    if ((((local_b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar6 = 0x1c;
    }
    local_b8._padding_ = CONCAT71(local_b8._padding_._1_7_,uVar6);
    pFVar13 = FRDGBuilder::CreateSRV(param_1,&local_b8);
    puVar20[5] = pFVar13;
    *(int *)(puVar20 + 6) = (this->NextData).ArrayNum;
    local_res8.Reference = (this->CacheManager->PrevBuffers).PageRequestFlags.Reference;
    if ((local_res8.Reference != (IPooledRenderTarget *)0x0) &&
       ((**(code **)((local_res8.Reference)->_padding_ + 0x30))(local_res8.Reference),
       local_res8.Reference != (IPooledRenderTarget *)0x0)) {
      pFVar14 = FRDGBuilder::RegisterExternalTexture
                          (param_1,&local_res8,L"Shadow.Virtual.PrevPageRequestFlags",None);
      puVar20[7] = pFVar14;
    }
    TVar4.Reference = local_res8.Reference;
    pFVar11 = this->StatsBufferUAV;
    bVar5 = ShouldGenerateStats(this);
    puVar20[8] = pFVar11;
    this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [*(int *)&this->Scene->field_0x8]);
    pFVar15 = (FShaderType *)FUpdatePhysicalPageAddresses::GetStaticType();
    FGlobalShaderMap::GetShader
              (this_01,&local_98,pFVar15,
               (uint)(TVar4.Reference != (IPooledRenderTarget *)0x0) + (uint)bVar5 * 2);
    if (local_98.ShaderContent == (FShader *)0x0) {
      this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
      ::FName::ToString((FName *)this_02,&local_80);
      FUpdatePhysicalPageAddresses::GetStaticType();
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FUpdatePhysicalPageAddresses::GetStaticType();
    uVar21 = (this->UniformParameters).MaxPhysicalPages;
    local_68.ShaderContent = (FUpdatePhysicalPageAddresses *)local_98.ShaderContent;
    local_68.ShaderMap = local_98.ShaderMap;
    pFVar16 = FRDGEventName::FRDGEventName
                        (&local_58,1,L"FVirtualShadowMapArray::UpdatePhysicalPageAddresses");
    pFVar10 = FUpdatePhysicalPageAddresses::FParameters::FTypeInfo::GetStructMetadata();
    local_c8._s_0.Y = 1;
    local_c8._s_0.Z = 1;
    local_c8._s_0.X = uVar21 + 0xff >> 8;
    FComputeShaderUtils::AddPass<FUpdatePhysicalPageAddresses>
              (param_1,pFVar16,Compute,&local_68,pFVar10,(FParameters *)(puVar20 + 2),
               (TIntVector3<int> *)&local_c8._s_0);
    if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_res8.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_res8.Reference)->_padding_ + 0x38))();
    }
    FRHIComputeCommandList::SetGPUMask(this_00,FVar2);
  }
  return;
}

// UpdateVisualizeLight @ 1458188f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArray::UpdateVisualizeLight
          (FVirtualShadowMapArray *this,TArrayView<FViewInfo_const_,int> *param_1,
          TArrayView<FVisibleLightInfo_const_,int> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FLightSceneProxy *pFVar3;
  longlong lVar4;
  code *pcVar5;
  FVirtualShadowMapClipmap *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FVirtualShadowMapVisualizationData *pFVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FVisibleLightInfo *this_00;
  longlong local_res10;
  TSharedPtr<FVirtualShadowMapClipmap,1> local_48;
  
  iVar9 = param_2->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  uVar11 = 0;
  if (0 < iVar9) {
    local_res10 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar11 < iVar9) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *piVar1;
      this_00 = (FVisibleLightInfo *)
                ((longlong)&(param_2->DataPtr->AllProjectedShadows).AllocatorInstance.Data +
                local_res10);
      if ((this_00->VirtualShadowMapClipmaps).ArrayNum < 1) {
        if ((iVar9 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = FVisibleLightInfo::GetVirtualShadowMapId(this_00,param_1->DataPtr);
        if ((iVar9 != -1) && (0 < (this_00->AllProjectedShadows).ArrayNum)) {
          uVar13 = 0;
          pFVar3 = (*(this_00->AllProjectedShadows).AllocatorInstance.Data)->LightSceneInfo->Proxy;
          if (0 < *piVar1) {
            do {
              uVar8 = 0;
              if ((int)uVar13 < (this->VisualizeLight).ArrayNum) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVirtualShadowMapVisualizeLightSearch::CheckLight
                        ((FVirtualShadowMapVisualizeLightSearch *)
                         ((this->VisualizeLight).AllocatorInstance.Data +
                         (longlong)(int)uVar13 * 0x18),pFVar3,iVar9);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < *piVar1);
          }
        }
      }
      else {
        uVar13 = 0;
        if (0 < iVar9) {
          do {
            uVar8 = 0;
            if ((int)uVar13 < iVar9) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVisibleLightInfo::FindVirtualShadowMapShadowClipmapForView
                      (this_00,&local_48,param_1->DataPtr + (int)uVar13);
            if (local_48.Object != (FVirtualShadowMapClipmap *)0x0) {
              uVar8 = 0;
              if ((int)uVar13 < (this->VisualizeLight).ArrayNum) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar2 = (this->VisualizeLight).AllocatorInstance.Data;
              if ((local_48.Object == (FVirtualShadowMapClipmap *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar6 = local_48.Object;
              if ((((local_48.Object)->PerLightCacheEntry).Object ==
                   (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar9 = ((pFVar6->PerLightCacheEntry).Object)->VirtualShadowMapId;
              if ((local_48.Object == (FVirtualShadowMapClipmap *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVirtualShadowMapVisualizeLightSearch::CheckLight
                        ((FVirtualShadowMapVisualizeLightSearch *)
                         (pFVar2 + (longlong)(int)uVar13 * 0x18),
                         (local_48.Object)->LightSceneInfo->Proxy,iVar9);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_48.SharedReferenceCount.ReferenceController);
            iVar9 = *piVar1;
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar9);
        }
      }
      uVar11 = uVar11 + 1;
      local_res10 = local_res10 + 0x60;
      iVar9 = param_2->ArrayNum;
    } while ((int)uVar11 < iVar9);
  }
  uVar11 = 0;
  if (0 < *piVar1) {
    lVar12 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar11 < (this->VisualizeLight).ArrayNum) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->VisualizeLight).AllocatorInstance.Data;
      pFVar10 = GetVirtualShadowMapVisualizationData();
      iVar9 = pFVar10->SelectAdjacentVisualizeLight;
      pFVar10 = GetVirtualShadowMapVisualizationData();
      pFVar10->SelectAdjacentVisualizeLight = 0;
      lVar4 = *(longlong *)(pFVar2 + lVar12 + 8);
      if (lVar4 == 0) {
        if (iVar9 != 0) {
          GVirtualShadowMapVisualizeLightId = 0;
        }
      }
      else {
        GVirtualShadowMapVisualizeLightId = *(ulong64 *)(lVar4 + 8);
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x18;
    } while ((int)uVar11 < *piVar1);
  }
  return;
}


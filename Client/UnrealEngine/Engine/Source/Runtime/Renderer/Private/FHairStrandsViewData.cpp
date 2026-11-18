// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// operator= @ 14499f5a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FHairStrandsViewData * __thiscall
FHairStrandsViewData::operator=(FHairStrandsViewData *this,FHairStrandsViewData *param_1)

{
  int *piVar1;
  TArray<FHairStrandsMacroGroupData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  TArray<FHairStrandsDebugData::FCullData::FLight,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FHairStrandsDebugData::FCullData::FLight,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FLightSceneInfo_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FHairStrandsViewData::FDirectionalLightCullData,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  int iVar8;
  FHairStrandsMacroGroupData *pFVar9;
  FLight *pFVar10;
  FScriptContainerElement *_Src;
  FDirectionalLightCullData *pFVar11;
  FRDGTexture *pFVar12;
  FRDGBuffer *pFVar13;
  undefined8 uVar14;
  FRDGBufferSRV *pFVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  FHairStrandsVoxelResources *pFVar23;
  FHairStrandsVisibilityData *pFVar24;
  FHairStrandsVoxelResources *pFVar25;
  FHairStrandsVisibilityData *pFVar26;
  FHairStrandsVisibilityData *pFVar27;
  FHairStrandsVoxelResources *pFVar28;
  longlong lVar29;
  FHairStrandsVoxelResources *pFVar30;
  longlong lVar31;
  FHairStrandsVisibilityData *pFVar32;
  
  this->UniformBuffer = param_1->UniformBuffer;
  lVar31 = 2;
  this->bIsValid = param_1->bIsValid;
  lVar29 = 2;
  pFVar24 = &param_1->VisibilityData;
  pFVar26 = &this->VisibilityData;
  do {
    pFVar32 = pFVar26;
    pFVar27 = pFVar24;
    pFVar12 = pFVar27->ResolveMaskTexture;
    pFVar32->VelocityTexture = pFVar27->VelocityTexture;
    pFVar32->ResolveMaskTexture = pFVar12;
    pFVar12 = pFVar27->ViewHairCountTexture;
    pFVar32->CoverageTexture = pFVar27->CoverageTexture;
    pFVar32->ViewHairCountTexture = pFVar12;
    pFVar12 = pFVar27->HairOnlyDepthTexture;
    pFVar32->ViewHairCountUintTexture = pFVar27->ViewHairCountUintTexture;
    pFVar32->HairOnlyDepthTexture = pFVar12;
    pFVar12 = pFVar27->HairOnlyDepthFurthestHZBTexture;
    pFVar32->HairOnlyDepthClosestHZBTexture = pFVar27->HairOnlyDepthClosestHZBTexture;
    pFVar32->HairOnlyDepthFurthestHZBTexture = pFVar12;
    uVar16 = pFVar27->MaxSampleCount;
    uVar17 = pFVar27->MaxNodeCount;
    pFVar32->LightChannelMaskTexture = pFVar27->LightChannelMaskTexture;
    pFVar32->MaxSampleCount = uVar16;
    pFVar32->MaxNodeCount = uVar17;
    pFVar12 = pFVar27->NodeIndex;
    pFVar32->NodeCount = pFVar27->NodeCount;
    pFVar32->NodeIndex = pFVar12;
    pFVar13 = pFVar27->NodeVisData;
    pFVar32->NodeData = pFVar27->NodeData;
    pFVar32->NodeVisData = pFVar13;
    pFVar13 = pFVar27->NodeIndirectArg;
    pFVar32->NodeCoord = pFVar27->NodeCoord;
    pFVar32->NodeIndirectArg = pFVar13;
    lVar29 = lVar29 + -1;
    pFVar24 = (FHairStrandsVisibilityData *)&pFVar27->NodeGroupSize;
    pFVar26 = (FHairStrandsVisibilityData *)&pFVar32->NodeGroupSize;
  } while (lVar29 != 0);
  uVar18 = *(undefined4 *)&pFVar27->field_0x84;
  uVar14 = *(undefined8 *)&pFVar27->field_0x88;
  pTVar2 = &this->MacroGroupDatas;
  pFVar32->NodeGroupSize = pFVar27->NodeGroupSize;
  *(undefined4 *)&pFVar32->field_0x84 = uVar18;
  *(undefined8 *)&pFVar32->field_0x88 = uVar14;
  uVar14 = *(undefined8 *)((longlong)&(pFVar27->HairOnlyDepthHZBParameters).field0_0x0 + 8);
  *(undefined8 *)&(pFVar32->HairOnlyDepthHZBParameters).field0_0x0 =
       *(undefined8 *)&(pFVar27->HairOnlyDepthHZBParameters).field0_0x0;
  *(undefined8 *)((longlong)&(pFVar32->HairOnlyDepthHZBParameters).field0_0x0 + 8) = uVar14;
  uVar16 = pFVar27->MaxControlPointCount;
  pFVar15 = pFVar27->ControlPointsSRV;
  pFVar32->RasterizedInstanceCount = pFVar27->RasterizedInstanceCount;
  pFVar32->MaxControlPointCount = uVar16;
  pFVar32->ControlPointsSRV = pFVar15;
  pFVar15 = pFVar27->ControlPointVelocitySRV;
  pFVar32->ControlPointCount = pFVar27->ControlPointCount;
  pFVar32->ControlPointVelocitySRV = pFVar15;
  uVar14 = *(undefined8 *)&(pFVar27->TileData).TileCount;
  (pFVar32->TileData).BufferResolution.field0_0x0 = (pFVar27->TileData).BufferResolution.field0_0x0;
  *(undefined8 *)&(pFVar32->TileData).TileCount = uVar14;
  pFVar15 = (pFVar27->TileData).TileDataSRV[0];
  *(undefined8 *)((longlong)&(pFVar32->TileData).TileCountXY.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(pFVar27->TileData).TileCountXY.field0_0x0 + 4);
  (pFVar32->TileData).TileDataSRV[0] = pFVar15;
  if (pTVar2 != &param_1->MacroGroupDatas) {
    DestructItems<FHairStrandsMacroGroupData,int>
              ((pTVar2->AllocatorInstance).Data,(this->MacroGroupDatas).ArrayNum);
    iVar7 = (param_1->MacroGroupDatas).ArrayNum;
    piVar1 = &(this->MacroGroupDatas).ArrayMax;
    pFVar9 = (param_1->MacroGroupDatas).AllocatorInstance.Data;
    (this->MacroGroupDatas).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FHairStrandsMacroGroupData>_>
                (0x78,8,iVar7,*piVar1,&pTVar2->AllocatorInstance,iVar7,piVar1);
      ConstructItems<FHairStrandsMacroGroupData,FHairStrandsMacroGroupData,int>
                ((pTVar2->AllocatorInstance).Data,pFVar9,iVar7);
    }
  }
  uVar14 = *(undefined8 *)
            ((longlong)&(param_1->DeepShadowResources).AtlasSlotResolution.field0_0x0 + 4);
  *(undefined8 *)&this->DeepShadowResources = *(undefined8 *)&param_1->DeepShadowResources;
  *(undefined8 *)((longlong)&(this->DeepShadowResources).AtlasSlotResolution.field0_0x0 + 4) =
       uVar14;
  pFVar12 = (param_1->DeepShadowResources).LayersAtlasTexture;
  (this->DeepShadowResources).DepthAtlasTexture = (param_1->DeepShadowResources).DepthAtlasTexture;
  (this->DeepShadowResources).LayersAtlasTexture = pFVar12;
  (this->DeepShadowResources).DeepShadowViewInfoBuffer =
       (param_1->DeepShadowResources).DeepShadowViewInfoBuffer;
  pFVar23 = &this->VirtualVoxelResources;
  pFVar25 = &param_1->VirtualVoxelResources;
  do {
    pFVar30 = pFVar25;
    pFVar28 = pFVar23;
    pFVar23 = (FHairStrandsVoxelResources *)&(pFVar28->Parameters).Common.TranslatedWorldOffset;
    uVar14 = *(undefined8 *)
              ((longlong)&(pFVar30->Parameters).Common.PageCountResolution.field0_0x0 + 8);
    pFVar25 = (FHairStrandsVoxelResources *)&(pFVar30->Parameters).Common.TranslatedWorldOffset;
    *(undefined8 *)&(pFVar28->Parameters).Common.PageCountResolution.field0_0x0 =
         *(undefined8 *)&(pFVar30->Parameters).Common.PageCountResolution.field0_0x0;
    *(undefined8 *)((longlong)&(pFVar28->Parameters).Common.PageCountResolution.field0_0x0 + 8) =
         uVar14;
    uVar14 = *(undefined8 *)
              ((longlong)&(pFVar30->Parameters).Common.PageTextureResolution.field0_0x0 + 8);
    *(undefined8 *)&(pFVar28->Parameters).Common.PageTextureResolution.field0_0x0 =
         *(undefined8 *)&(pFVar30->Parameters).Common.PageTextureResolution.field0_0x0;
    *(undefined8 *)((longlong)&(pFVar28->Parameters).Common.PageTextureResolution.field0_0x0 + 8) =
         uVar14;
    uVar16 = (pFVar30->Parameters).Common.PageResolutionLog2;
    uVar17 = (pFVar30->Parameters).Common.PageIndexCount;
    uVar19 = (pFVar30->Parameters).Common.IndirectDispatchGroupSize;
    (pFVar28->Parameters).Common.PageResolution = (pFVar30->Parameters).Common.PageResolution;
    (pFVar28->Parameters).Common.PageResolutionLog2 = uVar16;
    (pFVar28->Parameters).Common.PageIndexCount = uVar17;
    (pFVar28->Parameters).Common.IndirectDispatchGroupSize = uVar19;
    uVar16 = (pFVar30->Parameters).Common.JitterMode;
    fVar20 = (pFVar30->Parameters).Common.DensityScale;
    fVar21 = (pFVar30->Parameters).Common.DensityScale_AO;
    (pFVar28->Parameters).Common.NodeDescCount = (pFVar30->Parameters).Common.NodeDescCount;
    (pFVar28->Parameters).Common.JitterMode = uVar16;
    (pFVar28->Parameters).Common.DensityScale = fVar20;
    (pFVar28->Parameters).Common.DensityScale_AO = fVar21;
    fVar20 = (pFVar30->Parameters).Common.DensityScale_Transmittance;
    fVar21 = (pFVar30->Parameters).Common.DensityScale_Environment;
    fVar22 = (pFVar30->Parameters).Common.DensityScale_Raytracing;
    (pFVar28->Parameters).Common.DensityScale_Shadow =
         (pFVar30->Parameters).Common.DensityScale_Shadow;
    (pFVar28->Parameters).Common.DensityScale_Transmittance = fVar20;
    (pFVar28->Parameters).Common.DensityScale_Environment = fVar21;
    (pFVar28->Parameters).Common.DensityScale_Raytracing = fVar22;
    fVar20 = (pFVar30->Parameters).Common.DepthBiasScale_Transmittance;
    fVar21 = (pFVar30->Parameters).Common.DepthBiasScale_Environment;
    fVar22 = (pFVar30->Parameters).Common.SteppingScale_Shadow;
    (pFVar28->Parameters).Common.DepthBiasScale_Shadow =
         (pFVar30->Parameters).Common.DepthBiasScale_Shadow;
    (pFVar28->Parameters).Common.DepthBiasScale_Transmittance = fVar20;
    (pFVar28->Parameters).Common.DepthBiasScale_Environment = fVar21;
    (pFVar28->Parameters).Common.SteppingScale_Shadow = fVar22;
    fVar20 = (pFVar30->Parameters).Common.SteppingScale_Environment;
    fVar21 = (pFVar30->Parameters).Common.SteppingScale_Raytracing;
    fVar22 = (pFVar30->Parameters).Common.HairCoveragePixelRadiusAtDepth1;
    (pFVar28->Parameters).Common.SteppingScale_Transmittance =
         (pFVar30->Parameters).Common.SteppingScale_Transmittance;
    (pFVar28->Parameters).Common.SteppingScale_Environment = fVar20;
    (pFVar28->Parameters).Common.SteppingScale_Raytracing = fVar21;
    (pFVar28->Parameters).Common.HairCoveragePixelRadiusAtDepth1 = fVar22;
    fVar20 = (pFVar30->Parameters).Common.Raytracing_SkyOcclusionThreshold;
    lVar29 = (pFVar30->Parameters).Common._padding_;
    (pFVar28->Parameters).Common.Raytracing_ShadowOcclusionThreshold =
         (pFVar30->Parameters).Common.Raytracing_ShadowOcclusionThreshold;
    (pFVar28->Parameters).Common.Raytracing_SkyOcclusionThreshold = fVar20;
    (pFVar28->Parameters).Common._padding_ = lVar29;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  uVar14 = *(undefined8 *)
            ((longlong)&(pFVar30->Parameters).Common.TranslatedWorldOffset.field0_0x0 + 8);
  pTVar3 = &(param_1->DebugData).CullData.DirectionalLights;
  pTVar4 = &(this->DebugData).CullData.DirectionalLights;
  *(undefined8 *)&((TVector<float> *)pFVar23)->field0_0x0 =
       *(undefined8 *)&((TVector<float> *)pFVar25)->field0_0x0;
  *(undefined8 *)((longlong)&(pFVar28->Parameters).Common.TranslatedWorldOffset.field0_0x0 + 8) =
       uVar14;
  uVar14 = *(undefined8 *)
            ((longlong)
             &(pFVar30->Parameters).Common.TranslatedWorldOffsetStereoCorrection.field0_0x0 + 8);
  *(undefined8 *)&(pFVar28->Parameters).Common.TranslatedWorldOffsetStereoCorrection.field0_0x0 =
       *(undefined8 *)&(pFVar30->Parameters).Common.TranslatedWorldOffsetStereoCorrection.field0_0x0
  ;
  *(undefined8 *)
   ((longlong)&(pFVar28->Parameters).Common.TranslatedWorldOffsetStereoCorrection.field0_0x0 + 8) =
       uVar14;
  uVar18 = *(undefined4 *)&(param_1->MacroGroupResources).field_0x4;
  pFVar13 = (param_1->MacroGroupResources).MacroGroupAABBsBuffer;
  (this->MacroGroupResources).MacroGroupCount = (param_1->MacroGroupResources).MacroGroupCount;
  *(undefined4 *)&(this->MacroGroupResources).field_0x4 = uVar18;
  (this->MacroGroupResources).MacroGroupAABBsBuffer = pFVar13;
  pFVar13 = (param_1->MacroGroupResources).MacroGroupVoxelSizeBuffer;
  (this->MacroGroupResources).MacroGroupVoxelAlignedAABBsBuffer =
       (param_1->MacroGroupResources).MacroGroupVoxelAlignedAABBsBuffer;
  (this->MacroGroupResources).MacroGroupVoxelSizeBuffer = pFVar13;
  pFVar13 = (param_1->DebugData).PlotData.ShadingPointCounter;
  (this->DebugData).PlotData.ShadingPointBuffer = (param_1->DebugData).PlotData.ShadingPointBuffer;
  (this->DebugData).PlotData.ShadingPointCounter = pFVar13;
  pFVar13 = (param_1->DebugData).PlotData.SampleCounter;
  (this->DebugData).PlotData.SampleBuffer = (param_1->DebugData).PlotData.SampleBuffer;
  (this->DebugData).PlotData.SampleCounter = pFVar13;
  pFVar12 = (param_1->DebugData).PPLLData.NodeIndexTexture;
  (this->DebugData).PPLLData.NodeCounterTexture = (param_1->DebugData).PPLLData.NodeCounterTexture;
  (this->DebugData).PPLLData.NodeIndexTexture = pFVar12;
  (this->DebugData).PPLLData.NodeDataBuffer = (param_1->DebugData).PPLLData.NodeDataBuffer;
  (this->DebugData).CullData.bIsValid = (param_1->DebugData).CullData.bIsValid;
  if (pTVar4 != pTVar3) {
    DestructItems<FHairStrandsDebugData::FCullData::FLight,int>
              ((FLight *)(pTVar4->AllocatorInstance).Data,
               (this->DebugData).CullData.DirectionalLights.ArrayNum);
    iVar7 = (param_1->DebugData).CullData.DirectionalLights.ArrayNum;
    piVar1 = &(this->DebugData).CullData.DirectionalLights.ArrayMax;
    pFVar10 = (FLight *)(pTVar3->AllocatorInstance).Data;
    iVar8 = *piVar1;
    (this->DebugData).CullData.DirectionalLights.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x350,0x10,iVar7,iVar8,&pTVar4->AllocatorInstance,iVar7,piVar1);
      ConstructItems<FHairStrandsDebugData::FCullData::FLight,FHairStrandsDebugData::FCullData::FLight,int>
                ((pTVar4->AllocatorInstance).Data,pFVar10,iVar7);
    }
  }
  FConvexVolume::operator=
            (&(this->DebugData).CullData.ViewFrustum,&(param_1->DebugData).CullData.ViewFrustum);
  (this->DebugData).Common.SceneDepthTextureBeforeCompsition =
       (param_1->DebugData).Common.SceneDepthTextureBeforeCompsition;
  pTVar5 = &this->VisibleShadowCastingLights;
  this->Flags = param_1->Flags;
  if (pTVar5 != &param_1->VisibleShadowCastingLights) {
    iVar7 = (param_1->VisibleShadowCastingLights).ArrayNum;
    piVar1 = &(this->VisibleShadowCastingLights).ArrayMax;
    _Src = (param_1->VisibleShadowCastingLights).AllocatorInstance.Data;
    (this->VisibleShadowCastingLights).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,*piVar1,&pTVar5->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,_Src,(longlong)iVar7 << 3);
      }
    }
  }
  pTVar6 = &this->VisibleShadowCastingDirectionalLights;
  if (pTVar6 != &param_1->VisibleShadowCastingDirectionalLights) {
    DestructItems<FHairStrandsViewData::FDirectionalLightCullData,int>
              ((FDirectionalLightCullData *)(pTVar6->AllocatorInstance).Data,
               (this->VisibleShadowCastingDirectionalLights).ArrayNum);
    iVar7 = (param_1->VisibleShadowCastingDirectionalLights).ArrayNum;
    piVar1 = &(this->VisibleShadowCastingDirectionalLights).ArrayMax;
    pFVar11 = (FDirectionalLightCullData *)
              (param_1->VisibleShadowCastingDirectionalLights).AllocatorInstance.Data;
    (this->VisibleShadowCastingDirectionalLights).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x210,0x10,iVar7,*piVar1,&pTVar6->AllocatorInstance,iVar7,piVar1);
      ConstructItems<FHairStrandsViewData::FDirectionalLightCullData,FHairStrandsViewData::FDirectionalLightCullData,int>
                ((pTVar6->AllocatorInstance).Data,pFVar11,iVar7);
    }
  }
  return this;
}

// FHairStrandsViewData @ 1454d1230

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FHairStrandsViewData * __thiscall
FHairStrandsViewData::FHairStrandsViewData(FHairStrandsViewData *this)

{
  (this->VisibilityData).MaxSampleCount = 8;
  (this->VisibilityData).MaxNodeCount = 0;
  this->UniformBuffer = (TRDGUniformBuffer<FHairStrandsViewUniformParameters> *)0x0;
  this->bIsValid = false;
  (this->VisibilityData).TileData.BufferResolution.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->VisibilityData).TileData.TileCountXY.field0_0x0._s_0.Y = 0;
  (this->VisibilityData).VelocityTexture = (FRDGTexture *)0x0;
  (this->VisibilityData).ResolveMaskTexture = (FRDGTexture *)0x0;
  (this->VisibilityData).CoverageTexture = (FRDGTexture *)0x0;
  (this->VisibilityData).ViewHairCountTexture = (FRDGTexture *)0x0;
  (this->VisibilityData).ViewHairCountUintTexture = (FRDGTexture *)0x0;
  (this->VisibilityData).HairOnlyDepthTexture = (FRDGTexture *)0x0;
  (this->VisibilityData).HairOnlyDepthClosestHZBTexture = (FRDGTexture *)0x0;
  (this->VisibilityData).HairOnlyDepthFurthestHZBTexture = (FRDGTexture *)0x0;
  (this->VisibilityData).LightChannelMaskTexture = (FRDGTexture *)0x0;
  (this->VisibilityData).NodeCount = (FRDGBuffer *)0x0;
  (this->VisibilityData).NodeIndex = (FRDGTexture *)0x0;
  (this->VisibilityData).NodeData = (FRDGBuffer *)0x0;
  (this->VisibilityData).NodeVisData = (FRDGBuffer *)0x0;
  (this->VisibilityData).NodeCoord = (FRDGBuffer *)0x0;
  (this->VisibilityData).NodeIndirectArg = (FRDGBuffer *)0x0;
  (this->VisibilityData).NodeGroupSize = 0;
  (this->VisibilityData).RasterizedInstanceCount = 0;
  (this->VisibilityData).MaxControlPointCount = 0;
  (this->VisibilityData).ControlPointsSRV = (FRDGBufferSRV *)0x0;
  (this->VisibilityData).ControlPointCount = (FRDGBufferSRV *)0x0;
  (this->VisibilityData).ControlPointVelocitySRV = (FRDGBufferSRV *)0x0;
  *(undefined8 *)&(this->VisibilityData).TileData.TileCount = 0;
  (this->VisibilityData).TileData.bRectPrimitive = false;
  (this->VisibilityData).TileData.TileDataSRV[0] = (FRDGBufferSRV *)0x0;
  (this->VisibilityData).TileData.TileDataSRV[1] = (FRDGBufferSRV *)0x0;
  *(undefined8 *)&(this->VisibilityData).HairOnlyDepthHZBParameters.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->VisibilityData).HairOnlyDepthHZBParameters.field0_0x0 + 8) = 0;
  (this->VisibilityData).TileData.TileDataSRV[2] = (FRDGBufferSRV *)0x0;
  (this->VisibilityData).TileData.TileDataSRV[3] = (FRDGBufferSRV *)0x0;
  (this->VisibilityData).TileData.TileDataBuffer[0] = (FRDGBuffer *)0x0;
  (this->VisibilityData).TileData.TileDataBuffer[1] = (FRDGBuffer *)0x0;
  (this->VisibilityData).TileData.TileDataBuffer[2] = (FRDGBuffer *)0x0;
  (this->VisibilityData).TileData.TileDataBuffer[3] = (FRDGBuffer *)0x0;
  (this->VisibilityData).TileData.TileCountSRV = (FRDGBufferSRV *)0x0;
  (this->VisibilityData).TileData.TileCountBuffer = (FRDGBuffer *)0x0;
  (this->VisibilityData).TileData.TileIndirectDrawBuffer = (FRDGBuffer *)0x0;
  (this->VisibilityData).TileData.TileIndirectDispatchBuffer = (FRDGBuffer *)0x0;
  (this->VisibilityData).TileData.TileIndirectRayDispatchBuffer = (FRDGBuffer *)0x0;
  (this->VisibilityData).TileData.TilePerThreadIndirectDispatchBuffer = (FRDGBuffer *)0x0;
  (this->VisibilityData).SampleLightingTexture = (FRDGTexture *)0x0;
  (this->MacroGroupDatas).AllocatorInstance.Data = (FHairStrandsMacroGroupData *)0x0;
  (this->MacroGroupDatas).ArrayNum = 0;
  (this->MacroGroupDatas).ArrayMax = 0;
  (this->DeepShadowResources).TotalAtlasSlotCount = 0;
  (this->DeepShadowResources).DepthAtlasTexture = (FRDGTexture *)0x0;
  (this->DeepShadowResources).LayersAtlasTexture = (FRDGTexture *)0x0;
  (this->DeepShadowResources).DeepShadowViewInfoBuffer = (FRDGBuffer *)0x0;
  (this->VirtualVoxelResources).Parameters.Common.AllocatedPageCountBuffer = (FRDGBufferSRV *)0x0;
  (this->VirtualVoxelResources).Parameters.Common.PageIndexBuffer = (FRDGBufferSRV *)0x0;
  (this->VirtualVoxelResources).Parameters.Common.PageIndexCoordBuffer = (FRDGBufferSRV *)0x0;
  (this->VirtualVoxelResources).Parameters.Common.NodeDescBuffer = (FRDGBufferSRV *)0x0;
  (this->VirtualVoxelResources).Parameters.Common.CurrGPUMinVoxelSize = (FRDGBufferSRV *)0x0;
  (this->VirtualVoxelResources).Parameters.Common.NextGPUMinVoxelSize = (FRDGBufferSRV *)0x0;
  (this->VirtualVoxelResources).Parameters.PageTexture = (FRDGTexture *)0x0;
  (this->VirtualVoxelResources).PageTexture = (FRDGTexture *)0x0;
  (this->VirtualVoxelResources).PageIndexBuffer = (FRDGBuffer *)0x0;
  (this->VirtualVoxelResources).NodeDescBuffer = (FRDGBuffer *)0x0;
  (this->VirtualVoxelResources).PageIndexCoordBuffer = (FRDGBuffer *)0x0;
  (this->VirtualVoxelResources).IndirectArgsBuffer = (FRDGBuffer *)0x0;
  (this->VirtualVoxelResources).PageIndexGlobalCounter = (FRDGBuffer *)0x0;
  (this->MacroGroupResources).MacroGroupCount = 0;
  (this->MacroGroupResources).MacroGroupAABBsBuffer = (FRDGBuffer *)0x0;
  (this->MacroGroupResources).MacroGroupVoxelAlignedAABBsBuffer = (FRDGBuffer *)0x0;
  (this->MacroGroupResources).MacroGroupVoxelSizeBuffer = (FRDGBuffer *)0x0;
  (this->DebugData).PlotData.ShadingPointBuffer = (FRDGBuffer *)0x0;
  (this->DebugData).PlotData.ShadingPointCounter = (FRDGBuffer *)0x0;
  (this->DebugData).PlotData.SampleBuffer = (FRDGBuffer *)0x0;
  (this->DebugData).PlotData.SampleCounter = (FRDGBuffer *)0x0;
  (this->DebugData).PPLLData.NodeCounterTexture = (FRDGTexture *)0x0;
  (this->DebugData).PPLLData.NodeIndexTexture = (FRDGTexture *)0x0;
  (this->DebugData).PPLLData.NodeDataBuffer = (FRDGBuffer *)0x0;
  (this->DebugData).CullData.bIsValid = false;
  (this->DebugData).CullData.DirectionalLights.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DebugData).CullData.DirectionalLights.ArrayNum = 0;
  (this->DebugData).CullData.DirectionalLights.ArrayMax = 0;
  (this->DebugData).CullData.ViewFrustum.Planes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->DebugData).CullData.ViewFrustum.Planes.ArrayNum = 0;
  (this->DebugData).CullData.ViewFrustum.Planes.ArrayMax = 6;
  (this->DebugData).CullData.ViewFrustum.PermutedPlanes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->DebugData).CullData.ViewFrustum.PermutedPlanes.ArrayNum = 0;
  (this->DebugData).CullData.ViewFrustum.PermutedPlanes.ArrayMax = 8;
  (this->DebugData).Common.SceneDepthTextureBeforeCompsition = (FRDGTexture *)0x0;
  this->Flags = 0;
  (this->VisibleShadowCastingLights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibleShadowCastingLights).ArrayNum = 0;
  (this->VisibleShadowCastingLights).ArrayMax = 0;
  (this->VisibleShadowCastingDirectionalLights).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VisibleShadowCastingDirectionalLights).ArrayNum = 0;
  (this->VisibleShadowCastingDirectionalLights).ArrayMax = 0;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FPreviousViewInfo @ 1447f4a00

FPreviousViewInfo * __thiscall FPreviousViewInfo::FPreviousViewInfo(FPreviousViewInfo *this)

{
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  FViewMatrices::FViewMatrices(&this->ViewMatrices);
  this->SceneColorPreExposure = 1.0;
  this->bUsesGlobalDistanceField = false;
  (this->DepthBuffer).Reference = (IPooledRenderTarget *)0x0;
  (this->GBufferA).Reference = (IPooledRenderTarget *)0x0;
  (this->GBufferB).Reference = (IPooledRenderTarget *)0x0;
  (this->GBufferC).Reference = (IPooledRenderTarget *)0x0;
  (this->HZB).Reference = (IPooledRenderTarget *)0x0;
  (this->NaniteHZB).Reference = (IPooledRenderTarget *)0x0;
  (this->DistortingDisplacementTexture).Reference = (IPooledRenderTarget *)0x0;
  this->InstanceOcclusionQueryMask = 0;
  (this->CompressedDepthViewNormal).Reference = (IPooledRenderTarget *)0x0;
  (this->CompressedOpaqueDepth).Reference = (IPooledRenderTarget *)0x0;
  (this->CompressedOpaqueShadingModel).Reference = (IPooledRenderTarget *)0x0;
  (this->ScreenSpaceRayTracingInput).Reference = (IPooledRenderTarget *)0x0;
  (this->TemporalAAHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->TemporalAAHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->TemporalAAHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TemporalAAHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TemporalAAHistory).OutputSliceIndex = 0;
  (this->TSRHistory).ColorArray.Reference = (IPooledRenderTarget *)0x0;
  (this->TSRHistory).MetadataArray.Reference = (IPooledRenderTarget *)0x0;
  (this->TSRHistory).GuideArray.Reference = (IPooledRenderTarget *)0x0;
  (this->TSRHistory).MoireArray.Reference = (IPooledRenderTarget *)0x0;
  (this->TSRHistory).CoverageArray.Reference = (IPooledRenderTarget *)0x0;
  (this->TSRHistory).InputViewportRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TSRHistory).InputViewportRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TSRHistory).OutputViewportRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TSRHistory).OutputViewportRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TSRHistory).FormatBit = 0;
  (this->TSRHistory).FrameStorageCount = 1;
  (this->TSRHistory).FrameStoragePeriod = 1;
  (this->TSRHistory).AccumulatedFrameCount = 1;
  (this->TSRHistory).LastFrameRollingIndex = 0;
  (this->TSRHistory).ViewMatrices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TSRHistory).ViewMatrices.ArrayNum = 0;
  (this->TSRHistory).ViewMatrices.ArrayMax = 0;
  (this->TSRHistory).SceneColorPreExposures.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TSRHistory).SceneColorPreExposures.ArrayNum = 0;
  (this->TSRHistory).SceneColorPreExposures.ArrayMax = 0;
  (this->TSRHistory).InputViewportRects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TSRHistory).InputViewportRects.ArrayNum = 0;
  (this->TSRHistory).InputViewportRects.ArrayMax = 0;
  (this->TSRHistory).DistortingDisplacementTextures.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TSRHistory).DistortingDisplacementTextures.ArrayNum = 0;
  (this->TSRHistory).DistortingDisplacementTextures.ArrayMax = 0;
  (this->ThirdPartyTemporalUpscalerHistory).Reference = (IHistory *)0x0;
  (this->HalfResTemporalAAHistory).Reference = (IPooledRenderTarget *)0x0;
  (this->DOFSetupHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->DOFSetupHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->DOFSetupHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->DOFSetupHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->DOFSetupHistory).OutputSliceIndex = 0;
  (this->SSRHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->SSRHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->SSRHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SSRHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SSRHistory).OutputSliceIndex = 0;
  (this->WaterSSRHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->WaterSSRHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->WaterSSRHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->WaterSSRHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->WaterSSRHistory).OutputSliceIndex = 0;
  (this->RoughRefractionHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->RoughRefractionHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->RoughRefractionHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->RoughRefractionHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->RoughRefractionHistory).OutputSliceIndex = 0;
  (this->HairHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->HairHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->HairHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->HairHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->HairHistory).OutputSliceIndex = 0;
  (this->CompositePrimitiveDepthHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->CompositePrimitiveDepthHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->CompositePrimitiveDepthHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->CompositePrimitiveDepthHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->CompositePrimitiveDepthHistory).OutputSliceIndex = 0;
  (this->CustomSSRInput).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->CustomSSRInput).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->CustomSSRInput).ViewportRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CustomSSRInput).ViewportRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CustomSSRInput).OutputSliceIndex = 0;
  (this->ReflectionsHistory).Scissors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TIntRect<int>_>)0x0;
  (this->ReflectionsHistory).Scissors.ArrayNum = 0;
  (this->ReflectionsHistory).Scissors.ArrayMax = 1;
  (this->ReflectionsHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->ReflectionsHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->ReflectionsHistory).RT.Elements[2].Reference = (IPooledRenderTarget *)0x0;
  (this->ReflectionsHistory).TileClassification.Reference = (IPooledRenderTarget *)0x0;
  (this->WaterReflectionsHistory).Scissors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TIntRect<int>_>)0x0;
  (this->WaterReflectionsHistory).Scissors.ArrayNum = 0;
  (this->WaterReflectionsHistory).Scissors.ArrayMax = 1;
  (this->WaterReflectionsHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->WaterReflectionsHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->WaterReflectionsHistory).RT.Elements[2].Reference = (IPooledRenderTarget *)0x0;
  (this->WaterReflectionsHistory).TileClassification.Reference = (IPooledRenderTarget *)0x0;
  (this->AmbientOcclusionHistory).Scissors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TIntRect<int>_>)0x0;
  (this->AmbientOcclusionHistory).Scissors.ArrayNum = 0;
  (this->AmbientOcclusionHistory).Scissors.ArrayMax = 1;
  (this->AmbientOcclusionHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->AmbientOcclusionHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->AmbientOcclusionHistory).RT.Elements[2].Reference = (IPooledRenderTarget *)0x0;
  (this->AmbientOcclusionHistory).TileClassification.Reference = (IPooledRenderTarget *)0x0;
  (this->GTAOHistory).RT.Reference = (IPooledRenderTarget *)0x0;
  (this->GTAOHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->GTAOHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->DiffuseIndirectHistory).Scissors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TIntRect<int>_>)0x0;
  (this->DiffuseIndirectHistory).Scissors.ArrayNum = 0;
  (this->DiffuseIndirectHistory).Scissors.ArrayMax = 1;
  (this->DiffuseIndirectHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->DiffuseIndirectHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->DiffuseIndirectHistory).RT.Elements[2].Reference = (IPooledRenderTarget *)0x0;
  (this->DiffuseIndirectHistory).TileClassification.Reference = (IPooledRenderTarget *)0x0;
  (this->SkyLightHistory).Scissors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TIntRect<int>_>)0x0;
  (this->SkyLightHistory).Scissors.ArrayNum = 0;
  (this->SkyLightHistory).Scissors.ArrayMax = 1;
  (this->SkyLightHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->SkyLightHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->SkyLightHistory).RT.Elements[2].Reference = (IPooledRenderTarget *)0x0;
  (this->SkyLightHistory).TileClassification.Reference = (IPooledRenderTarget *)0x0;
  (this->ReflectedSkyLightHistory).Scissors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TIntRect<int>_>)0x0;
  (this->ReflectedSkyLightHistory).Scissors.ArrayNum = 0;
  (this->ReflectedSkyLightHistory).Scissors.ArrayMax = 1;
  (this->ReflectedSkyLightHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->ReflectedSkyLightHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->ReflectedSkyLightHistory).RT.Elements[2].Reference = (IPooledRenderTarget *)0x0;
  (this->ReflectedSkyLightHistory).TileClassification.Reference = (IPooledRenderTarget *)0x0;
  *(undefined8 *)&this->ShadowHistories = 0;
  *(undefined8 *)&(this->ShadowHistories).field_0x8 = 0;
  *(undefined8 *)&(this->ShadowHistories).field_0x20 = 0;
  *(undefined4 *)&(this->ShadowHistories).field_0x28 = 0;
  *(undefined4 *)&(this->ShadowHistories).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShadowHistories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShadowHistories).field_0x34 = 0;
  *(undefined8 *)&(this->ShadowHistories).field_0x40 = 0;
  *(undefined4 *)&(this->ShadowHistories).field_0x48 = 0;
  (this->PolychromaticPenumbraHarmonicsHistory).Scissors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TIntRect<int>_>)0x0;
  (this->PolychromaticPenumbraHarmonicsHistory).Scissors.ArrayNum = 0;
  (this->PolychromaticPenumbraHarmonicsHistory).Scissors.ArrayMax = 1;
  (this->PolychromaticPenumbraHarmonicsHistory).RT.Elements[0].Reference =
       (IPooledRenderTarget *)0x0;
  (this->PolychromaticPenumbraHarmonicsHistory).RT.Elements[1].Reference =
       (IPooledRenderTarget *)0x0;
  (this->PolychromaticPenumbraHarmonicsHistory).RT.Elements[2].Reference =
       (IPooledRenderTarget *)0x0;
  (this->PolychromaticPenumbraHarmonicsHistory).TileClassification.Reference =
       (IPooledRenderTarget *)0x0;
  (this->LuminanceHistory).Reference = (IPooledRenderTarget *)0x0;
  (this->LuminanceViewRectHistory).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->LuminanceViewRectHistory).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->MobileBloomSetup_EyeAdaptation).Reference = (IPooledRenderTarget *)0x0;
  (this->VisualizeMotionVectors).Reference = (IPooledRenderTarget *)0x0;
  (this->VisualizeMotionVectorsRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->VisualizeMotionVectorsRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->bIsVisualizeMotionVectorsDistorted = false;
  return this;
}

// ~FPreviousViewInfo @ 1447f6340

void __thiscall FPreviousViewInfo::~FPreviousViewInfo(FPreviousViewInfo *this)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  IPooledRenderTarget *pIVar2;
  void *pvVar3;
  IHistory *pIVar4;
  longlong lVar5;
  longlong lVar6;
  TRefCountPtr<IPooledRenderTarget> *pTVar7;
  
  pIVar2 = (this->VisualizeMotionVectors).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->MobileBloomSetup_EyeAdaptation).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->LuminanceHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  FScreenSpaceDenoiserHistory::~FScreenSpaceDenoiserHistory
            (&this->PolychromaticPenumbraHarmonicsHistory);
  *(undefined4 *)&(this->ShadowHistories).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ShadowHistories).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ShadowHistories);
  FScreenSpaceDenoiserHistory::~FScreenSpaceDenoiserHistory(&this->ReflectedSkyLightHistory);
  FScreenSpaceDenoiserHistory::~FScreenSpaceDenoiserHistory(&this->SkyLightHistory);
  FScreenSpaceDenoiserHistory::~FScreenSpaceDenoiserHistory(&this->DiffuseIndirectHistory);
  pIVar2 = (this->GTAOHistory).RT.Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  FScreenSpaceDenoiserHistory::~FScreenSpaceDenoiserHistory(&this->AmbientOcclusionHistory);
  FScreenSpaceDenoiserHistory::~FScreenSpaceDenoiserHistory(&this->WaterReflectionsHistory);
  FScreenSpaceDenoiserHistory::~FScreenSpaceDenoiserHistory(&this->ReflectionsHistory);
  lVar5 = 2;
  pTVar7 = (TRefCountPtr<IPooledRenderTarget> *)&(this->CustomSSRInput).ReferenceBufferSize;
  lVar6 = 2;
  do {
    pTVar1 = pTVar7 + -1;
    pTVar7 = pTVar7 + -1;
    lVar6 = lVar6 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar6 != 0);
  pTVar7 = (TRefCountPtr<IPooledRenderTarget> *)
           &(this->CompositePrimitiveDepthHistory).ReferenceBufferSize;
  lVar6 = 2;
  do {
    pTVar1 = pTVar7 + -1;
    pTVar7 = pTVar7 + -1;
    lVar6 = lVar6 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar6 != 0);
  pTVar7 = (TRefCountPtr<IPooledRenderTarget> *)&(this->HairHistory).ReferenceBufferSize;
  lVar6 = 2;
  do {
    pTVar1 = pTVar7 + -1;
    pTVar7 = pTVar7 + -1;
    lVar6 = lVar6 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar6 != 0);
  pTVar7 = (TRefCountPtr<IPooledRenderTarget> *)&(this->RoughRefractionHistory).ReferenceBufferSize;
  lVar6 = 2;
  do {
    pTVar1 = pTVar7 + -1;
    pTVar7 = pTVar7 + -1;
    lVar6 = lVar6 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar6 != 0);
  pTVar7 = (TRefCountPtr<IPooledRenderTarget> *)&(this->WaterSSRHistory).ReferenceBufferSize;
  lVar6 = 2;
  do {
    pTVar1 = pTVar7 + -1;
    pTVar7 = pTVar7 + -1;
    lVar6 = lVar6 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar6 != 0);
  pTVar7 = (TRefCountPtr<IPooledRenderTarget> *)&(this->SSRHistory).ReferenceBufferSize;
  lVar6 = 2;
  do {
    pTVar1 = pTVar7 + -1;
    pTVar7 = pTVar7 + -1;
    lVar6 = lVar6 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar6 != 0);
  pTVar7 = (TRefCountPtr<IPooledRenderTarget> *)&(this->DOFSetupHistory).ReferenceBufferSize;
  lVar6 = 2;
  do {
    pTVar1 = pTVar7 + -1;
    pTVar7 = pTVar7 + -1;
    lVar6 = lVar6 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar6 != 0);
  pIVar2 = (this->HalfResTemporalAAHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar4 = (this->ThirdPartyTemporalUpscalerHistory).Reference;
  if (pIVar4 != (IHistory *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  FTSRHistory::~FTSRHistory(&this->TSRHistory);
  pTVar7 = (TRefCountPtr<IPooledRenderTarget> *)&(this->TemporalAAHistory).ReferenceBufferSize;
  do {
    pTVar1 = pTVar7 + -1;
    pTVar7 = pTVar7 + -1;
    lVar5 = lVar5 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar5 != 0);
  pIVar2 = (this->ScreenSpaceRayTracingInput).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->CompressedOpaqueShadingModel).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->CompressedOpaqueDepth).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->CompressedDepthViewNormal).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->DistortingDisplacementTexture).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->NaniteHZB).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->HZB).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->GBufferC).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->GBufferB).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->GBufferA).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->DepthBuffer).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  return;
}

// operator= @ 1447f94f0

FPreviousViewInfo * __thiscall
FPreviousViewInfo::operator=(FPreviousViewInfo *this,FPreviousViewInfo *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  TRefCountPtr<IPooledRenderTarget> *pTVar2;
  TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory> *pTVar3;
  TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory> *pTVar4;
  FGTAOTAAHistory *pFVar5;
  FGTAOTAAHistory *pFVar6;
  TMap<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>,0>_>
  *pTVar7;
  TMap<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>,0>_>
  *this_00;
  IPooledRenderTarget *pIVar8;
  IHistory *pIVar9;
  void *pvVar10;
  
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  memcpy(&this->ViewMatrices,&param_1->ViewMatrices,0x880);
  pTVar1 = &param_1->DepthBuffer;
  this->SceneColorPreExposure = param_1->SceneColorPreExposure;
  pTVar2 = &this->DepthBuffer;
  this->bUsesGlobalDistanceField = param_1->bUsesGlobalDistanceField;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->GBufferA;
  pTVar2 = &this->GBufferA;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->GBufferB;
  pTVar2 = &this->GBufferB;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->GBufferC;
  pTVar2 = &this->GBufferC;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->HZB;
  pTVar2 = &this->HZB;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->NaniteHZB;
  pTVar2 = &this->NaniteHZB;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->DistortingDisplacementTexture;
  pTVar2 = &this->DistortingDisplacementTexture;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->CompressedDepthViewNormal;
  pTVar2 = &this->CompressedDepthViewNormal;
  this->InstanceOcclusionQueryMask = param_1->InstanceOcclusionQueryMask;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->CompressedOpaqueDepth;
  pTVar2 = &this->CompressedOpaqueDepth;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->CompressedOpaqueShadingModel;
  pTVar2 = &this->CompressedOpaqueShadingModel;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->ScreenSpaceRayTracingInput;
  pTVar2 = &this->ScreenSpaceRayTracingInput;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  FTemporalAAHistory::operator=(&this->TemporalAAHistory,&param_1->TemporalAAHistory);
  FTSRHistory::operator=(&this->TSRHistory,&param_1->TSRHistory);
  pTVar3 = &param_1->ThirdPartyTemporalUpscalerHistory;
  pTVar4 = &this->ThirdPartyTemporalUpscalerHistory;
  if (pTVar4 != pTVar3) {
    pIVar9 = pTVar4->Reference;
    pTVar4->Reference = pTVar3->Reference;
    pTVar3->Reference = (IHistory *)0x0;
    if (pIVar9 != (IHistory *)0x0) {
      (**(code **)((longlong)*pIVar9 + 0x10))();
    }
  }
  pTVar1 = &param_1->HalfResTemporalAAHistory;
  pTVar2 = &this->HalfResTemporalAAHistory;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  FTemporalAAHistory::operator=(&this->DOFSetupHistory,&param_1->DOFSetupHistory);
  FTemporalAAHistory::operator=(&this->SSRHistory,&param_1->SSRHistory);
  FTemporalAAHistory::operator=(&this->WaterSSRHistory,&param_1->WaterSSRHistory);
  FTemporalAAHistory::operator=(&this->RoughRefractionHistory,&param_1->RoughRefractionHistory);
  FTemporalAAHistory::operator=(&this->HairHistory,&param_1->HairHistory);
  FTemporalAAHistory::operator=
            (&this->CompositePrimitiveDepthHistory,&param_1->CompositePrimitiveDepthHistory);
  FTemporalAAHistory::operator=(&this->CustomSSRInput,&param_1->CustomSSRInput);
  FScreenSpaceDenoiserHistory::operator=(&this->ReflectionsHistory,&param_1->ReflectionsHistory);
  FScreenSpaceDenoiserHistory::operator=
            (&this->WaterReflectionsHistory,&param_1->WaterReflectionsHistory);
  FScreenSpaceDenoiserHistory::operator=
            (&this->AmbientOcclusionHistory,&param_1->AmbientOcclusionHistory);
  pFVar5 = &param_1->GTAOHistory;
  pFVar6 = &this->GTAOHistory;
  if (pFVar6 != pFVar5) {
    pIVar8 = (pFVar6->RT).Reference;
    (pFVar6->RT).Reference = (pFVar5->RT).Reference;
    (pFVar5->RT).Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  (this->GTAOHistory).ReferenceBufferSize.field0_0x0 =
       (param_1->GTAOHistory).ReferenceBufferSize.field0_0x0;
  (this->GTAOHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->GTAOHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0;
  (this->GTAOHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->GTAOHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0;
  FScreenSpaceDenoiserHistory::operator=
            (&this->DiffuseIndirectHistory,&param_1->DiffuseIndirectHistory);
  FScreenSpaceDenoiserHistory::operator=(&this->SkyLightHistory,&param_1->SkyLightHistory);
  FScreenSpaceDenoiserHistory::operator=
            (&this->ReflectedSkyLightHistory,&param_1->ReflectedSkyLightHistory);
  pTVar7 = &param_1->ShadowHistories;
  this_00 = &this->ShadowHistories;
  if (this_00 != pTVar7) {
    TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->ShadowHistories).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    _Src = &(param_1->ShadowHistories).field_0x10;
    *(undefined8 *)this_00 = *(undefined8 *)pTVar7;
    _Dst = &(this->ShadowHistories).field_0x10;
    *(undefined8 *)pTVar7 = 0;
    *(undefined4 *)&(this->ShadowHistories).field_0x8 =
         *(undefined4 *)&(param_1->ShadowHistories).field_0x8;
    *(undefined4 *)&(this->ShadowHistories).field_0xc =
         *(undefined4 *)&(param_1->ShadowHistories).field_0xc;
    *(undefined8 *)&(param_1->ShadowHistories).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->ShadowHistories).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar10 = *(void **)&(this->ShadowHistories).field_0x20;
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
      *(undefined8 *)&(this->ShadowHistories).field_0x20 =
           *(undefined8 *)&(param_1->ShadowHistories).field_0x20;
      *(undefined8 *)&(param_1->ShadowHistories).field_0x20 = 0;
      *(undefined4 *)&(this->ShadowHistories).field_0x28 =
           *(undefined4 *)&(param_1->ShadowHistories).field_0x28;
      *(undefined4 *)&(this->ShadowHistories).field_0x2c =
           *(undefined4 *)&(param_1->ShadowHistories).field_0x2c;
      *(undefined8 *)&(param_1->ShadowHistories).field_0x28 = 0;
    }
    *(undefined4 *)&(this->ShadowHistories).field_0x30 =
         *(undefined4 *)&(param_1->ShadowHistories).field_0x30;
    *(undefined4 *)&(this->ShadowHistories).field_0x34 =
         *(undefined4 *)&(param_1->ShadowHistories).field_0x34;
    *(undefined4 *)&(param_1->ShadowHistories).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ShadowHistories).field_0x34 = 0;
    if (*(longlong *)&(param_1->ShadowHistories).field_0x40 == 0) {
      *(undefined4 *)&(this->ShadowHistories).field_0x38 =
           *(undefined4 *)&(param_1->ShadowHistories).field_0x38;
    }
    pvVar10 = *(void **)&(this->ShadowHistories).field_0x40;
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
    *(undefined8 *)&(this->ShadowHistories).field_0x40 =
         *(undefined8 *)&(param_1->ShadowHistories).field_0x40;
    *(undefined8 *)&(param_1->ShadowHistories).field_0x40 = 0;
    *(undefined4 *)&(this->ShadowHistories).field_0x48 =
         *(undefined4 *)&(param_1->ShadowHistories).field_0x48;
    *(undefined4 *)&(param_1->ShadowHistories).field_0x48 = 0;
  }
  FScreenSpaceDenoiserHistory::operator=
            (&this->PolychromaticPenumbraHarmonicsHistory,
             &param_1->PolychromaticPenumbraHarmonicsHistory);
  pTVar1 = &param_1->LuminanceHistory;
  pTVar2 = &this->LuminanceHistory;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->MobileBloomSetup_EyeAdaptation;
  (this->LuminanceViewRectHistory).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->LuminanceViewRectHistory).field0_0x0._s_0.Min.field0_0x0;
  pTVar2 = &this->MobileBloomSetup_EyeAdaptation;
  (this->LuminanceViewRectHistory).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->LuminanceViewRectHistory).field0_0x0._s_0.Max.field0_0x0;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->VisualizeMotionVectors;
  pTVar2 = &this->VisualizeMotionVectors;
  if (pTVar2 != pTVar1) {
    pIVar8 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))();
    }
  }
  (this->VisualizeMotionVectorsRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->VisualizeMotionVectorsRect).field0_0x0._s_0.Min.field0_0x0;
  (this->VisualizeMotionVectorsRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->VisualizeMotionVectorsRect).field0_0x0._s_0.Max.field0_0x0;
  this->bIsVisualizeMotionVectorsDistorted = param_1->bIsVisualizeMotionVectorsDistorted;
  return this;
}

// GetGPUSizeBytes @ 1454f4c60

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FPreviousViewInfo::GetGPUSizeBytes(FPreviousViewInfo *this,bool param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  IPooledRenderTarget *pIVar3;
  FScreenSpaceDenoiserHistory *this_00;
  IHistory *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  ulong64 uVar22;
  ulong64 uVar23;
  FScriptContainerElement *pFVar24;
  ulong64 uVar25;
  ulong64 uVar26;
  ulong64 uVar27;
  ulong64 uVar28;
  ulong64 uVar29;
  ulong64 uVar30;
  ulong64 uVar31;
  ulong64 uVar32;
  ulong64 uVar33;
  ulong64 uVar34;
  ulong64 uVar35;
  ulong64 uVar36;
  ulong64 uVar37;
  ulong64 uVar38;
  int iVar39;
  FScriptContainerElement *pFVar40;
  int iVar41;
  undefined1 *puVar42;
  uint *puVar43;
  longlong lVar44;
  int iVar45;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  uint local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar45 = 0;
  pIVar3 = (this->HalfResTemporalAAHistory).Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar7 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->HalfResTemporalAAHistory).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  uVar20 = GetRenderTargetGPUSizeBytes(&(this->TSRHistory).ColorArray,param_1);
  uVar21 = GetRenderTargetGPUSizeBytes(&(this->TSRHistory).MetadataArray,param_1);
  uVar22 = GetRenderTargetGPUSizeBytes(&(this->TSRHistory).GuideArray,param_1);
  uVar23 = GetRenderTargetGPUSizeBytes(&(this->TSRHistory).MoireArray,param_1);
  pIVar3 = (this->TSRHistory).CoverageArray.Reference;
  lVar44 = uVar22 + uVar23 + uVar21 + uVar20;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    uVar8 = (**(code **)(pIVar3->_padding_ + 0x18))();
    if (((param_1) && (uVar8 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)(((this->TSRHistory).CoverageArray.Reference)->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    lVar44 = lVar44 + (ulonglong)uVar8;
  }
  pFVar40 = (this->TSRHistory).DistortingDisplacementTextures.AllocatorInstance.Data;
  iVar9 = (this->TSRHistory).DistortingDisplacementTextures.ArrayNum;
  pFVar24 = pFVar40 + (longlong)iVar9 * 8;
  local_res18 = pFVar24;
  while( true ) {
    if ((this->TSRHistory).DistortingDisplacementTextures.ArrayNum != iVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<IPooledRenderTarget>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
      pFVar24 = local_res18;
    }
    if (pFVar40 == pFVar24) break;
    if (*(longlong **)pFVar40 != (longlong *)0x0) {
      uVar8 = (**(code **)(**(longlong **)pFVar40 + 0x18))();
      if (((param_1) && (uVar8 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
        (**(code **)(**(longlong **)pFVar40 + 0x10))();
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      lVar44 = lVar44 + (ulonglong)uVar8;
      pFVar24 = local_res18;
    }
    pFVar40 = pFVar40 + 8;
  }
  pIVar3 = (this->ScreenSpaceRayTracingInput).Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar8 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->ScreenSpaceRayTracingInput).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar3 = (this->CompressedOpaqueShadingModel).Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    local_res20 = 0;
  }
  else {
    local_res20 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  if (((param_1) && (local_res20 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->CompressedOpaqueShadingModel).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar3 = (this->CompressedOpaqueDepth).Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  local_res18 = (FScriptContainerElement *)CONCAT44(local_res18._4_4_,iVar9);
  if (((param_1) && (iVar9 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->CompressedOpaqueDepth).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar3 = (this->CompressedDepthViewNormal).Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar10 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->CompressedDepthViewNormal).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar3 = (this->GTAOHistory).RT.Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar11 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->GTAOHistory).RT.Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar3 = (this->NaniteHZB).Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar12 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->NaniteHZB).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar3 = (this->HZB).Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar13 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->HZB).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar3 = (this->GBufferC).Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar14 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->GBufferC).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar3 = (this->GBufferB).Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar15 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->GBufferB).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar3 = (this->GBufferA).Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar16 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar16 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->GBufferA).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar3 = (this->DepthBuffer).Reference;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    uVar17 = 0;
  }
  else {
    uVar17 = (**(code **)(pIVar3->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar17 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->DepthBuffer).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  uVar20 = GetRenderTargetGPUSizeBytes(&this->VisualizeMotionVectors,param_1);
  uVar21 = GetRenderTargetGPUSizeBytes(&this->MobileBloomSetup_EyeAdaptation,param_1);
  uVar22 = GetRenderTargetGPUSizeBytes(&this->DistortingDisplacementTexture,param_1);
  uVar23 = FScreenSpaceDenoiserHistory::GetGPUSizeBytes
                     (&this->PolychromaticPenumbraHarmonicsHistory,param_1);
  uVar25 = FScreenSpaceDenoiserHistory::GetGPUSizeBytes(&this->ReflectedSkyLightHistory,param_1);
  uVar26 = FScreenSpaceDenoiserHistory::GetGPUSizeBytes(&this->SkyLightHistory,param_1);
  uVar27 = FScreenSpaceDenoiserHistory::GetGPUSizeBytes(&this->DiffuseIndirectHistory,param_1);
  uVar28 = FScreenSpaceDenoiserHistory::GetGPUSizeBytes(&this->AmbientOcclusionHistory,param_1);
  uVar29 = FScreenSpaceDenoiserHistory::GetGPUSizeBytes(&this->WaterReflectionsHistory,param_1);
  uVar30 = FScreenSpaceDenoiserHistory::GetGPUSizeBytes(&this->ReflectionsHistory,param_1);
  uVar31 = FTemporalAAHistory::GetGPUSizeBytes(&this->CustomSSRInput,param_1);
  uVar32 = FTemporalAAHistory::GetGPUSizeBytes(&this->CompositePrimitiveDepthHistory,param_1);
  uVar33 = FTemporalAAHistory::GetGPUSizeBytes(&this->HairHistory,param_1);
  uVar34 = FTemporalAAHistory::GetGPUSizeBytes(&this->RoughRefractionHistory,param_1);
  uVar35 = FTemporalAAHistory::GetGPUSizeBytes(&this->WaterSSRHistory,param_1);
  uVar36 = FTemporalAAHistory::GetGPUSizeBytes(&this->SSRHistory,param_1);
  uVar37 = FTemporalAAHistory::GetGPUSizeBytes(&this->DOFSetupHistory,param_1);
  uVar38 = FTemporalAAHistory::GetGPUSizeBytes(&this->TemporalAAHistory,param_1);
  puVar1 = &(this->ShadowHistories).field_0x10;
  uVar18 = 1;
  iVar41 = 0;
  iVar9 = *(int *)&(this->ShadowHistories).field_0x28;
  uVar20 = (ulonglong)uVar10 +
           (ulonglong)uVar11 +
           uVar20 + uVar21 + uVar22 + uVar23 + uVar25 + uVar26 + uVar27 + uVar28 + uVar29 + uVar30 +
           uVar31 + uVar32 + uVar33 + uVar34 + uVar35 + uVar36 + uVar37 +
           ((ulonglong)local_res18 & 0xffffffff) + uVar38 + (ulonglong)local_res20 +
           (ulonglong)uVar8 + (ulonglong)uVar17 + (ulonglong)uVar16 + (ulonglong)uVar15 +
           (ulonglong)uVar14 + (ulonglong)uVar13 + (ulonglong)uVar12 + lVar44 + (ulonglong)uVar7;
  iVar39 = 0;
  iVar19 = 0;
  if (iVar9 != 0) {
    puVar43 = *(uint **)&(this->ShadowHistories).field_0x20;
    if (puVar43 == (uint *)0x0) {
      puVar43 = (uint *)puVar1;
    }
    uVar7 = *puVar43;
    iVar41 = 0;
    while (uVar7 == 0) {
      lVar44 = (longlong)iVar45;
      iVar41 = iVar41 + 0x20;
      iVar45 = iVar45 + 1;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar45) {
        iVar39 = *(int *)&(this->ShadowHistories).field_0x28;
        iVar19 = iVar9;
        goto LAB_1454f5464;
      }
      uVar7 = puVar43[lVar44 + 1];
    }
    iVar39 = *(int *)&(this->ShadowHistories).field_0x28;
    uVar18 = -uVar7 & uVar7;
    uVar2 = (ulonglong)uVar18 * 2 + 1;
    lVar44 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar44 == 0; lVar44 = lVar44 + -1) {
      }
    }
    local_res20 = (uint)lVar44;
    iVar19 = iVar41 + -1 + local_res20;
    if (iVar39 < iVar19) {
      iVar19 = iVar9;
    }
  }
LAB_1454f5464:
  uVar7 = *(uint *)&(this->ShadowHistories).field_0x28;
  TStack_78._padding_ = CONCAT44(uVar18,iVar45);
  uVar8 = uVar7 & 0xffffffe0;
  TStack_78.CurrentBitIndex = iVar19;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar45 = (int)uVar7 >> 5;
  TStack_78._28_4_ = iVar19;
  TStack_78.BaseBitIndex = iVar41;
  uStack_58 = CONCAT44(uStack_84,
                       *(int *)&(this->ShadowHistories).field_0x8 -
                       *(int *)&(this->ShadowHistories).field_0x34);
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar7 < 0) || (iVar39 < (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar20 = (*pcVar5)();
    return uVar20;
  }
  uVar10 = *(uint *)&(this->ShadowHistories).field_0x28;
  if (uVar7 != uVar10) {
    puVar42 = *(undefined1 **)&(this->ShadowHistories).field_0x20;
    if (puVar42 == (undefined1 *)0x0) {
      puVar42 = &(this->ShadowHistories).field_0x10;
    }
    uVar7 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar42 + (longlong)iVar45 * 4);
    while (uVar7 == 0) {
      lVar44 = (longlong)iVar45;
      uVar8 = uVar8 + 0x20;
      iVar45 = iVar45 + 1;
      uVar7 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar45)
      goto LAB_1454f5580;
      uVar7 = *(uint *)(puVar42 + lVar44 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar44 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar44 == 0; lVar44 = lVar44 + -1) {
      }
    }
    uVar7 = (int)lVar44 + -1 + uVar8;
    if ((int)uVar10 < (int)uVar7) {
      uVar7 = uVar10;
    }
  }
LAB_1454f5580:
  while( true ) {
    if (*(int *)&(this->ShadowHistories).field_0x8 - *(int *)&(this->ShadowHistories).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res18);
    }
    if ((TStack_78.CurrentBitIndex == uVar7) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(FScreenSpaceDenoiserHistory **)
               ((longlong)TStack_78.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->ShadowHistories
               );
    if (this_00 != (FScreenSpaceDenoiserHistory *)0x0) {
      uVar21 = FScreenSpaceDenoiserHistory::GetGPUSizeBytes(this_00,param_1);
      uVar20 = uVar20 + uVar21;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  pIVar4 = (this->ThirdPartyTemporalUpscalerHistory).Reference;
  if (pIVar4 != (IHistory *)0x0) {
    lVar44 = (**(code **)((longlong)*pIVar4 + 0x28))();
    uVar20 = uVar20 + lVar44;
    if ((param_1) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)((longlong)*(this->ThirdPartyTemporalUpscalerHistory).Reference + 0x28))();
      (**(code **)((longlong)*(this->ThirdPartyTemporalUpscalerHistory).Reference + 0x20))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
  }
  return uVar20;
}

// operator= @ 145521090

FPreviousViewInfo * __thiscall
FPreviousViewInfo::operator=(FPreviousViewInfo *this,FPreviousViewInfo *param_1)

{
  uint uVar1;
  IPooledRenderTarget *pIVar2;
  IPooledRenderTarget *pIVar3;
  IHistory *pIVar4;
  IHistory *pIVar5;
  void *_Dst;
  void *_Src;
  uint uVar6;
  undefined1 local_res8 [8];
  
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  memcpy(&this->ViewMatrices,&param_1->ViewMatrices,0x880);
  this->SceneColorPreExposure = param_1->SceneColorPreExposure;
  this->bUsesGlobalDistanceField = param_1->bUsesGlobalDistanceField;
  pIVar2 = (param_1->DepthBuffer).Reference;
  pIVar3 = (this->DepthBuffer).Reference;
  if (pIVar3 != pIVar2) {
    (this->DepthBuffer).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  pIVar2 = (param_1->GBufferA).Reference;
  pIVar3 = (this->GBufferA).Reference;
  if (pIVar3 != pIVar2) {
    (this->GBufferA).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  pIVar2 = (param_1->GBufferB).Reference;
  pIVar3 = (this->GBufferB).Reference;
  if (pIVar3 != pIVar2) {
    (this->GBufferB).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  pIVar2 = (param_1->GBufferC).Reference;
  pIVar3 = (this->GBufferC).Reference;
  if (pIVar3 != pIVar2) {
    (this->GBufferC).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  pIVar2 = (param_1->HZB).Reference;
  pIVar3 = (this->HZB).Reference;
  if (pIVar3 != pIVar2) {
    (this->HZB).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  pIVar2 = (param_1->NaniteHZB).Reference;
  pIVar3 = (this->NaniteHZB).Reference;
  if (pIVar3 != pIVar2) {
    (this->NaniteHZB).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  pIVar2 = (param_1->DistortingDisplacementTexture).Reference;
  pIVar3 = (this->DistortingDisplacementTexture).Reference;
  if (pIVar3 != pIVar2) {
    (this->DistortingDisplacementTexture).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  this->InstanceOcclusionQueryMask = param_1->InstanceOcclusionQueryMask;
  pIVar2 = (param_1->CompressedDepthViewNormal).Reference;
  pIVar3 = (this->CompressedDepthViewNormal).Reference;
  if (pIVar3 != pIVar2) {
    (this->CompressedDepthViewNormal).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  pIVar2 = (param_1->CompressedOpaqueDepth).Reference;
  pIVar3 = (this->CompressedOpaqueDepth).Reference;
  if (pIVar3 != pIVar2) {
    (this->CompressedOpaqueDepth).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  pIVar2 = (param_1->CompressedOpaqueShadingModel).Reference;
  pIVar3 = (this->CompressedOpaqueShadingModel).Reference;
  if (pIVar3 != pIVar2) {
    (this->CompressedOpaqueShadingModel).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  pIVar2 = (param_1->ScreenSpaceRayTracingInput).Reference;
  pIVar3 = (this->ScreenSpaceRayTracingInput).Reference;
  if (pIVar3 != pIVar2) {
    (this->ScreenSpaceRayTracingInput).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  FTemporalAAHistory::operator=(&this->TemporalAAHistory,&param_1->TemporalAAHistory);
  FTSRHistory::operator=(&this->TSRHistory,&param_1->TSRHistory);
  pIVar4 = (param_1->ThirdPartyTemporalUpscalerHistory).Reference;
  pIVar5 = (this->ThirdPartyTemporalUpscalerHistory).Reference;
  if (pIVar5 != pIVar4) {
    (this->ThirdPartyTemporalUpscalerHistory).Reference = pIVar4;
    if (pIVar4 != (IHistory *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
    }
    if (pIVar5 != (IHistory *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  pIVar2 = (param_1->HalfResTemporalAAHistory).Reference;
  pIVar3 = (this->HalfResTemporalAAHistory).Reference;
  if (pIVar3 != pIVar2) {
    (this->HalfResTemporalAAHistory).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  FTemporalAAHistory::operator=(&this->DOFSetupHistory,&param_1->DOFSetupHistory);
  FTemporalAAHistory::operator=(&this->SSRHistory,&param_1->SSRHistory);
  FTemporalAAHistory::operator=(&this->WaterSSRHistory,&param_1->WaterSSRHistory);
  FTemporalAAHistory::operator=(&this->RoughRefractionHistory,&param_1->RoughRefractionHistory);
  FTemporalAAHistory::operator=(&this->HairHistory,&param_1->HairHistory);
  FTemporalAAHistory::operator=
            (&this->CompositePrimitiveDepthHistory,&param_1->CompositePrimitiveDepthHistory);
  FTemporalAAHistory::operator=(&this->CustomSSRInput,&param_1->CustomSSRInput);
  FScreenSpaceDenoiserHistory::operator=(&this->ReflectionsHistory,&param_1->ReflectionsHistory);
  FScreenSpaceDenoiserHistory::operator=
            (&this->WaterReflectionsHistory,&param_1->WaterReflectionsHistory);
  FScreenSpaceDenoiserHistory::operator=
            (&this->AmbientOcclusionHistory,&param_1->AmbientOcclusionHistory);
  pIVar2 = (param_1->GTAOHistory).RT.Reference;
  pIVar3 = (this->GTAOHistory).RT.Reference;
  if (pIVar3 != pIVar2) {
    (this->GTAOHistory).RT.Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  (this->GTAOHistory).ReferenceBufferSize.field0_0x0 =
       (param_1->GTAOHistory).ReferenceBufferSize.field0_0x0;
  (this->GTAOHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->GTAOHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0;
  (this->GTAOHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->GTAOHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0;
  FScreenSpaceDenoiserHistory::operator=
            (&this->DiffuseIndirectHistory,&param_1->DiffuseIndirectHistory);
  FScreenSpaceDenoiserHistory::operator=(&this->SkyLightHistory,&param_1->SkyLightHistory);
  FScreenSpaceDenoiserHistory::operator=
            (&this->ReflectedSkyLightHistory,&param_1->ReflectedSkyLightHistory);
  if (&this->ShadowHistories == &param_1->ShadowHistories) goto LAB_14552159f;
  uVar1 = *(uint *)&(param_1->ShadowHistories).field_0x48;
  uVar6 = uVar1;
  if (uVar1 < 2) {
    if (*(longlong *)&(this->ShadowHistories).field_0x40 != 0) {
      uVar6 = 0;
      goto LAB_14552154a;
    }
  }
  else {
LAB_14552154a:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ShadowHistories).field_0x40,0,uVar6,4);
  }
  _Src = *(void **)&(param_1->ShadowHistories).field_0x40;
  _Dst = *(void **)&(this->ShadowHistories).field_0x40;
  if (uVar1 != 0) {
    if (_Src == (void *)0x0) {
      _Src = &(param_1->ShadowHistories).field_0x38;
    }
    if (_Dst == (void *)0x0) {
      _Dst = &(this->ShadowHistories).field_0x38;
    }
    memcpy(_Dst,_Src,(longlong)(int)uVar1 << 2);
  }
  *(uint *)&(this->ShadowHistories).field_0x48 = uVar1;
  TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=((TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->ShadowHistories,
              (TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&param_1->ShadowHistories);
LAB_14552159f:
  FScreenSpaceDenoiserHistory::operator=
            (&this->PolychromaticPenumbraHarmonicsHistory,
             &param_1->PolychromaticPenumbraHarmonicsHistory);
  pIVar2 = (param_1->LuminanceHistory).Reference;
  pIVar3 = (this->LuminanceHistory).Reference;
  if (pIVar3 != pIVar2) {
    (this->LuminanceHistory).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  (this->LuminanceViewRectHistory).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->LuminanceViewRectHistory).field0_0x0._s_0.Min.field0_0x0;
  (this->LuminanceViewRectHistory).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->LuminanceViewRectHistory).field0_0x0._s_0.Max.field0_0x0;
  pIVar2 = (param_1->MobileBloomSetup_EyeAdaptation).Reference;
  pIVar3 = (this->MobileBloomSetup_EyeAdaptation).Reference;
  if (pIVar3 != pIVar2) {
    (this->MobileBloomSetup_EyeAdaptation).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  pIVar2 = (param_1->VisualizeMotionVectors).Reference;
  pIVar3 = (this->VisualizeMotionVectors).Reference;
  if (pIVar3 != pIVar2) {
    (this->VisualizeMotionVectors).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  (this->VisualizeMotionVectorsRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->VisualizeMotionVectorsRect).field0_0x0._s_0.Min.field0_0x0;
  (this->VisualizeMotionVectorsRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->VisualizeMotionVectorsRect).field0_0x0._s_0.Max.field0_0x0;
  this->bIsVisualizeMotionVectorsDistorted = param_1->bIsVisualizeMotionVectorsDistorted;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FPackedViewParams @ 145037130

FPackedViewParams * __thiscall Nanite::FPackedViewParams::FPackedViewParams(FPackedViewParams *this)

{
  undefined8 uVar1;
  
  FViewMatrices::FViewMatrices(&this->ViewMatrices);
  FViewMatrices::FViewMatrices(&this->PrevViewMatrices);
  this->LODScaleFactor = 1.0;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->HZBTestViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->HZBTestViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->StreamingPriorityCategory = 0;
  this->MinBoundsRadius = 0.0;
  this->TargetMipLevel = 0;
  this->bUseCullingViewOverrides = false;
  this->ViewLODDistanceFactor = 1.0;
  this->Flags = 2;
  this->TargetLayerIndex = -1;
  this->PrevTargetLayerIndex = -1;
  this->TargetMipCount = 1;
  this->RangeBasedCullingDistance = 0.0;
  this->MaxPixelsPerEdgeMultipler = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CullingViewOrigin).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CullingViewOrigin).field0_0x0._s_0.Y = (double)uVar1;
  (this->CullingViewOrigin).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->GlobalClippingPlane)._padding_ = 0;
  (this->GlobalClippingPlane)._padding_ = 0;
  (this->GlobalClippingPlane)._padding_ = 0;
  (this->GlobalClippingPlane).W = 0.0;
  (this->DynamicDepthCullRange).field0_0x0._s_0.X = 0.0;
  this->CullingViewScreenMultipleSq = 0.0;
  this->CullingViewMinRadiusTestFactorSq = 0.0;
  this->InstanceOcclusionQueryMask = 0;
  this->bUseLightingChannelMask = false;
  this->bUseCurrentPreTranslationForHZB = false;
  this->LightingChannelMask = 7;
  this->SceneRendererPrimaryViewId = -1;
  (this->DynamicDepthCullRange).field0_0x0._s_0.Y = 3.4028235e+38;
  return this;
}

// FPackedViewParams @ 145609c20

FPackedViewParams * __thiscall
Nanite::FPackedViewParams::FPackedViewParams(FPackedViewParams *this,FPackedViewParams *param_1)

{
  double dVar1;
  longlong lVar2;
  
  memcpy(this,param_1,0x880);
  memcpy(&this->PrevViewMatrices,&param_1->PrevViewMatrices,0x880);
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->RasterContextSize).field0_0x0 = (param_1->RasterContextSize).field0_0x0;
  this->StreamingPriorityCategory = param_1->StreamingPriorityCategory;
  this->MinBoundsRadius = param_1->MinBoundsRadius;
  this->LODScaleFactor = param_1->LODScaleFactor;
  this->ViewLODDistanceFactor = param_1->ViewLODDistanceFactor;
  this->Flags = param_1->Flags;
  this->TargetLayerIndex = param_1->TargetLayerIndex;
  this->PrevTargetLayerIndex = param_1->PrevTargetLayerIndex;
  this->TargetMipLevel = param_1->TargetMipLevel;
  this->TargetMipCount = param_1->TargetMipCount;
  this->RangeBasedCullingDistance = param_1->RangeBasedCullingDistance;
  (this->HZBTestViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->HZBTestViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->HZBTestViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->HZBTestViewRect).field0_0x0._s_0.Max.field0_0x0;
  this->MaxPixelsPerEdgeMultipler = param_1->MaxPixelsPerEdgeMultipler;
  this->bUseCullingViewOverrides = param_1->bUseCullingViewOverrides;
  dVar1 = (param_1->CullingViewOrigin).field0_0x0._s_0.Y;
  (this->CullingViewOrigin).field0_0x0._s_0.X = (param_1->CullingViewOrigin).field0_0x0._s_0.X;
  (this->CullingViewOrigin).field0_0x0._s_0.Y = dVar1;
  (this->CullingViewOrigin).field0_0x0._s_0.Z = (param_1->CullingViewOrigin).field0_0x0._s_0.Z;
  this->CullingViewScreenMultipleSq = param_1->CullingViewScreenMultipleSq;
  this->CullingViewMinRadiusTestFactorSq = param_1->CullingViewMinRadiusTestFactorSq;
  lVar2 = (param_1->GlobalClippingPlane)._padding_;
  (this->GlobalClippingPlane)._padding_ = (param_1->GlobalClippingPlane)._padding_;
  (this->GlobalClippingPlane)._padding_ = lVar2;
  dVar1 = (param_1->GlobalClippingPlane).W;
  (this->GlobalClippingPlane)._padding_ = (param_1->GlobalClippingPlane)._padding_;
  (this->GlobalClippingPlane).W = dVar1;
  this->InstanceOcclusionQueryMask = param_1->InstanceOcclusionQueryMask;
  this->LightingChannelMask = param_1->LightingChannelMask;
  this->bUseLightingChannelMask = param_1->bUseLightingChannelMask;
  this->bUseCurrentPreTranslationForHZB = param_1->bUseCurrentPreTranslationForHZB;
  this->SceneRendererPrimaryViewId = param_1->SceneRendererPrimaryViewId;
  (this->DynamicDepthCullRange).field0_0x0 = (param_1->DynamicDepthCullRange).field0_0x0;
  return this;
}


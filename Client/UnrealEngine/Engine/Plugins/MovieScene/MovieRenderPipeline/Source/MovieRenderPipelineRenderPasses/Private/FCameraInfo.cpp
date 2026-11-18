// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// ~FCameraInfo @ 14ddcab20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::MovieGraph::DefaultRenderer::FCameraInfo::~FCameraInfo(FCameraInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CameraName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ViewInfo).PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 14ddcbfb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCameraInfo * __thiscall
UE::MovieGraph::DefaultRenderer::FCameraInfo::operator=(FCameraInfo *this,FCameraInfo *param_1)

{
  TOptional<EAspectRatioAxisConstraint> *pTVar1;
  TOptional<UE::Math::TTransform<double>_> *pTVar2;
  TOptional<UE::Math::TTransform<double>_> *pTVar3;
  FString *pFVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  undefined8 uVar8;
  TIntPoint<int>_u_0 TVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  TOptional<EAspectRatioAxisConstraint> *pTVar14;
  
  dVar7 = (param_1->ViewInfo).Location.field0_0x0._s_0.Y;
  (this->ViewInfo).Location.field0_0x0._s_0.X = (param_1->ViewInfo).Location.field0_0x0._s_0.X;
  (this->ViewInfo).Location.field0_0x0._s_0.Y = dVar7;
  (this->ViewInfo).Location.field0_0x0._s_0.Z = (param_1->ViewInfo).Location.field0_0x0._s_0.Z;
  dVar7 = (param_1->ViewInfo).Rotation.Yaw;
  (this->ViewInfo).Rotation.Pitch = (param_1->ViewInfo).Rotation.Pitch;
  (this->ViewInfo).Rotation.Yaw = dVar7;
  (this->ViewInfo).Rotation.Roll = (param_1->ViewInfo).Rotation.Roll;
  (this->ViewInfo).FOV = (param_1->ViewInfo).FOV;
  (this->ViewInfo).DesiredFOV = (param_1->ViewInfo).DesiredFOV;
  (this->ViewInfo).FirstPersonFOV = (param_1->ViewInfo).FirstPersonFOV;
  (this->ViewInfo).FirstPersonScale = (param_1->ViewInfo).FirstPersonScale;
  (this->ViewInfo).OrthoWidth = (param_1->ViewInfo).OrthoWidth;
  (this->ViewInfo).bAutoCalculateOrthoPlanes = (param_1->ViewInfo).bAutoCalculateOrthoPlanes;
  (this->ViewInfo).AutoPlaneShift = (param_1->ViewInfo).AutoPlaneShift;
  (this->ViewInfo).bUpdateOrthoPlanes = (param_1->ViewInfo).bUpdateOrthoPlanes;
  (this->ViewInfo).bUseCameraHeightAsViewTarget = (param_1->ViewInfo).bUseCameraHeightAsViewTarget;
  (this->ViewInfo).OrthoNearClipPlane = (param_1->ViewInfo).OrthoNearClipPlane;
  (this->ViewInfo).OrthoFarClipPlane = (param_1->ViewInfo).OrthoFarClipPlane;
  (this->ViewInfo).PerspectiveNearClipPlane = (param_1->ViewInfo).PerspectiveNearClipPlane;
  (this->ViewInfo).AspectRatio = (param_1->ViewInfo).AspectRatio;
  pTVar1 = &(param_1->ViewInfo).AspectRatioAxisConstraint;
  pTVar14 = &(this->ViewInfo).AspectRatioAxisConstraint;
  if (pTVar1 != pTVar14) {
    if ((param_1->ViewInfo).AspectRatioAxisConstraint.bIsSet == false) {
      if ((this->ViewInfo).AspectRatioAxisConstraint.bIsSet != false) {
        (this->ViewInfo).AspectRatioAxisConstraint.bIsSet = false;
      }
    }
    else {
      pTVar14->TypedValue = pTVar1->TypedValue;
      (this->ViewInfo).AspectRatioAxisConstraint.bIsSet = true;
    }
  }
  uVar13 = ((this->ViewInfo).bConstrainAspectRatio ^ (param_1->ViewInfo).bConstrainAspectRatio) & 1
           ^ *(uint *)&(this->ViewInfo).field_0x68;
  *(uint *)&(this->ViewInfo).field_0x68 = uVar13;
  uVar13 = (uVar13 ^ *(uint *)&(param_1->ViewInfo).field_0x68) & 2 ^ uVar13;
  *(uint *)&(this->ViewInfo).field_0x68 = uVar13;
  *(uint *)&(this->ViewInfo).field_0x68 =
       (uVar13 ^ *(uint *)&(param_1->ViewInfo).field_0x68) & 4 ^ uVar13;
  (this->ViewInfo).ProjectionMode.Value = (param_1->ViewInfo).ProjectionMode.Value;
  (this->ViewInfo).PostProcessBlendWeight = (param_1->ViewInfo).PostProcessBlendWeight;
  FPostProcessSettings::operator=
            (&(this->ViewInfo).PostProcessSettings,&(param_1->ViewInfo).PostProcessSettings);
  dVar7 = (param_1->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.Y;
  pTVar2 = &(param_1->ViewInfo).PreviousViewTransform;
  pTVar3 = &(this->ViewInfo).PreviousViewTransform;
  (this->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.X =
       (param_1->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.X;
  (this->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.Y = dVar7;
  if (pTVar2 != pTVar3) {
    if ((param_1->ViewInfo).PreviousViewTransform.bIsSet == false) {
      if ((this->ViewInfo).PreviousViewTransform.bIsSet != false) {
        (this->ViewInfo).PreviousViewTransform.bIsSet = false;
      }
    }
    else {
      dVar7 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Rotation.XY.m128d_f64[1];
      (pTVar3->TypedValue).Rotation.XY.m128d_f64[0] = (pTVar2->TypedValue).Rotation.XY.m128d_f64[0];
      (this->ViewInfo).PreviousViewTransform.TypedValue.Rotation.XY.m128d_f64[1] = dVar7;
      dVar7 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64[1];
      (this->ViewInfo).PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64[0] =
           (param_1->ViewInfo).PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64[0];
      (this->ViewInfo).PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64[1] = dVar7;
      dVar7 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Translation.XY.m128d_f64[1];
      (this->ViewInfo).PreviousViewTransform.TypedValue.Translation.XY.m128d_f64[0] =
           (param_1->ViewInfo).PreviousViewTransform.TypedValue.Translation.XY.m128d_f64[0];
      (this->ViewInfo).PreviousViewTransform.TypedValue.Translation.XY.m128d_f64[1] = dVar7;
      dVar7 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Translation.ZW.m128d_f64[1];
      (this->ViewInfo).PreviousViewTransform.TypedValue.Translation.ZW.m128d_f64[0] =
           (param_1->ViewInfo).PreviousViewTransform.TypedValue.Translation.ZW.m128d_f64[0];
      (this->ViewInfo).PreviousViewTransform.TypedValue.Translation.ZW.m128d_f64[1] = dVar7;
      dVar7 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[1];
      (this->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[0] =
           (param_1->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[0];
      (this->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[1] = dVar7;
      dVar7 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64[1];
      (this->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64[0] =
           (param_1->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64[0];
      (this->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64[1] = dVar7;
      (this->ViewInfo).PreviousViewTransform.bIsSet = true;
    }
  }
  pFVar4 = &param_1->CameraName;
  (this->ViewInfo).OverscanResolutionFraction = (param_1->ViewInfo).OverscanResolutionFraction;
  pFVar5 = &this->CameraName;
  (this->ViewInfo).CropFraction = (param_1->ViewInfo).CropFraction;
  uVar8 = *(undefined8 *)((longlong)&(param_1->ViewInfo).AsymmetricCropFraction.field0_0x0 + 8);
  *(undefined8 *)&(this->ViewInfo).AsymmetricCropFraction.field0_0x0 =
       *(undefined8 *)&(param_1->ViewInfo).AsymmetricCropFraction.field0_0x0;
  *(undefined8 *)((longlong)&(this->ViewInfo).AsymmetricCropFraction.field0_0x0 + 8) = uVar8;
  (this->ViewInfo).Overscan = (param_1->ViewInfo).Overscan;
  uVar8 = *(undefined8 *)((longlong)&(param_1->ViewInfo).AsymmetricOverscan.field0_0x0 + 8);
  *(undefined8 *)&(this->ViewInfo).AsymmetricOverscan.field0_0x0 =
       *(undefined8 *)&(param_1->ViewInfo).AsymmetricOverscan.field0_0x0;
  *(undefined8 *)((longlong)&(this->ViewInfo).AsymmetricOverscan.field0_0x0 + 8) = uVar8;
  dVar7 = (param_1->ViewInfo).CameraToViewTarget.field0_0x0._s_0.Y;
  (this->ViewInfo).CameraToViewTarget.field0_0x0._s_0.X =
       (param_1->ViewInfo).CameraToViewTarget.field0_0x0._s_0.X;
  (this->ViewInfo).CameraToViewTarget.field0_0x0._s_0.Y = dVar7;
  (this->ViewInfo).CameraToViewTarget.field0_0x0._s_0.Z =
       (param_1->ViewInfo).CameraToViewTarget.field0_0x0._s_0.Z;
  this->ViewActor = param_1->ViewActor;
  if (pFVar5 != pFVar4) {
    pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CameraName).Data.ArrayNum = (param_1->CameraName).Data.ArrayNum;
    (this->CameraName).Data.ArrayMax = (param_1->CameraName).Data.ArrayMax;
    (param_1->CameraName).Data.ArrayNum = 0;
    (param_1->CameraName).Data.ArrayMax = 0;
  }
  this->bAllowCameraAspectRatio = param_1->bAllowCameraAspectRatio;
  this->DoFSensorScale = param_1->DoFSensorScale;
  TVar9 = (param_1->TilingParams).TileSize.field0_0x0;
  (this->TilingParams).OverlapPad.field0_0x0 = (param_1->TilingParams).OverlapPad.field0_0x0;
  (this->TilingParams).TileSize.field0_0x0 = TVar9;
  TVar9 = (param_1->TilingParams).TileCount.field0_0x0;
  (this->TilingParams).TileIndexes.field0_0x0 = (param_1->TilingParams).TileIndexes.field0_0x0;
  (this->TilingParams).TileCount.field0_0x0 = TVar9;
  iVar10 = (param_1->SamplingParams).TemporalSampleCount;
  iVar11 = (param_1->SamplingParams).SpatialSampleIndex;
  iVar12 = (param_1->SamplingParams).SpatialSampleCount;
  (this->SamplingParams).TemporalSampleIndex = (param_1->SamplingParams).TemporalSampleIndex;
  (this->SamplingParams).TemporalSampleCount = iVar10;
  (this->SamplingParams).SpatialSampleIndex = iVar11;
  (this->SamplingParams).SpatialSampleCount = iVar12;
  (this->SamplingParams).SeedOffset = (param_1->SamplingParams).SeedOffset;
  dVar7 = (param_1->ProjectionMatrixJitterAmount).field0_0x0._s_0.Y;
  (this->ProjectionMatrixJitterAmount).field0_0x0._s_0.X =
       (param_1->ProjectionMatrixJitterAmount).field0_0x0._s_0.X;
  (this->ProjectionMatrixJitterAmount).field0_0x0._s_0.Y = dVar7;
  this->bUseCameraManagerPostProcess = param_1->bUseCameraManagerPostProcess;
  return this;
}


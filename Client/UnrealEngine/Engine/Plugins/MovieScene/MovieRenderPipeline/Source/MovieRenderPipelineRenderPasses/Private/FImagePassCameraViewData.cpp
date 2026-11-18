// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 3

// FImagePassCameraViewData @ 14ddc5300

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

FImagePassCameraViewData * __thiscall
UE::MoviePipeline::FImagePassCameraViewData::FImagePassCameraViewData
          (FImagePassCameraViewData *this,FImagePassCameraViewData *param_1)

{
  bool bVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  
  dVar2 = (param_1->ViewInfo).Location.field0_0x0._s_0.Y;
  (this->ViewInfo).Location.field0_0x0._s_0.X = (param_1->ViewInfo).Location.field0_0x0._s_0.X;
  (this->ViewInfo).Location.field0_0x0._s_0.Y = dVar2;
  (this->ViewInfo).Location.field0_0x0._s_0.Z = (param_1->ViewInfo).Location.field0_0x0._s_0.Z;
  dVar2 = (param_1->ViewInfo).Rotation.Yaw;
  (this->ViewInfo).Rotation.Pitch = (param_1->ViewInfo).Rotation.Pitch;
  (this->ViewInfo).Rotation.Yaw = dVar2;
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
  (this->ViewInfo).AspectRatioAxisConstraint.bIsSet = false;
  bVar1 = (param_1->ViewInfo).AspectRatioAxisConstraint.bIsSet;
  (this->ViewInfo).AspectRatioAxisConstraint.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->ViewInfo).AspectRatioAxisConstraint.TypedValue =
         (param_1->ViewInfo).AspectRatioAxisConstraint.TypedValue;
  }
  uVar4 = ((this->ViewInfo).bConstrainAspectRatio ^ (param_1->ViewInfo).bConstrainAspectRatio) & 1 ^
          *(uint *)&(this->ViewInfo).field_0x68;
  *(uint *)&(this->ViewInfo).field_0x68 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&(param_1->ViewInfo).field_0x68) & 2 ^ uVar4;
  *(uint *)&(this->ViewInfo).field_0x68 = uVar4;
  *(uint *)&(this->ViewInfo).field_0x68 =
       (uVar4 ^ *(uint *)&(param_1->ViewInfo).field_0x68) & 4 ^ uVar4;
  (this->ViewInfo).ProjectionMode.Value = (param_1->ViewInfo).ProjectionMode.Value;
  (this->ViewInfo).PostProcessBlendWeight = (param_1->ViewInfo).PostProcessBlendWeight;
  FPostProcessSettings::FPostProcessSettings
            (&(this->ViewInfo).PostProcessSettings,&(param_1->ViewInfo).PostProcessSettings);
  dVar2 = (param_1->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.Y;
  (this->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.X =
       (param_1->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.X;
  (this->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.Y = dVar2;
  (this->ViewInfo).PreviousViewTransform.bIsSet = false;
  bVar1 = (param_1->ViewInfo).PreviousViewTransform.bIsSet;
  (this->ViewInfo).PreviousViewTransform.bIsSet = bVar1;
  if (bVar1 != false) {
    dVar2 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Rotation.XY.m128d_f64[1];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Rotation.XY.m128d_f64[0] =
         (param_1->ViewInfo).PreviousViewTransform.TypedValue.Rotation.XY.m128d_f64[0];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64[1];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64[0] =
         (param_1->ViewInfo).PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64[0];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Translation.XY.m128d_f64[1];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Translation.XY.m128d_f64[0] =
         (param_1->ViewInfo).PreviousViewTransform.TypedValue.Translation.XY.m128d_f64[0];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Translation.ZW.m128d_f64[1];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Translation.ZW.m128d_f64[0] =
         (param_1->ViewInfo).PreviousViewTransform.TypedValue.Translation.ZW.m128d_f64[0];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[1];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[0] =
         (param_1->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[0];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64[1];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64[0] =
         (param_1->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64[0];
    (this->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64[1] = dVar2;
  }
  (this->ViewInfo).OverscanResolutionFraction = (param_1->ViewInfo).OverscanResolutionFraction;
  (this->ViewInfo).CropFraction = (param_1->ViewInfo).CropFraction;
  uVar3 = *(undefined8 *)((longlong)&(param_1->ViewInfo).AsymmetricCropFraction.field0_0x0 + 8);
  *(undefined8 *)&(this->ViewInfo).AsymmetricCropFraction.field0_0x0 =
       *(undefined8 *)&(param_1->ViewInfo).AsymmetricCropFraction.field0_0x0;
  *(undefined8 *)((longlong)&(this->ViewInfo).AsymmetricCropFraction.field0_0x0 + 8) = uVar3;
  (this->ViewInfo).Overscan = (param_1->ViewInfo).Overscan;
  uVar3 = *(undefined8 *)((longlong)&(param_1->ViewInfo).AsymmetricOverscan.field0_0x0 + 8);
  *(undefined8 *)&(this->ViewInfo).AsymmetricOverscan.field0_0x0 =
       *(undefined8 *)&(param_1->ViewInfo).AsymmetricOverscan.field0_0x0;
  *(undefined8 *)((longlong)&(this->ViewInfo).AsymmetricOverscan.field0_0x0 + 8) = uVar3;
  dVar2 = (param_1->ViewInfo).CameraToViewTarget.field0_0x0._s_0.Y;
  (this->ViewInfo).CameraToViewTarget.field0_0x0._s_0.X =
       (param_1->ViewInfo).CameraToViewTarget.field0_0x0._s_0.X;
  (this->ViewInfo).CameraToViewTarget.field0_0x0._s_0.Y = dVar2;
  (this->ViewInfo).CameraToViewTarget.field0_0x0._s_0.Z =
       (param_1->ViewInfo).CameraToViewTarget.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->FileMetadata).field_0x0 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->FileMetadata,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata);
  this->ViewActor = param_1->ViewActor;
  this->bUseCustomProjectionMatrix = param_1->bUseCustomProjectionMatrix;
  dVar2 = (param_1->CustomProjectionMatrix).M[0][1];
  (this->CustomProjectionMatrix).M[0][0] = (param_1->CustomProjectionMatrix).M[0][0];
  (this->CustomProjectionMatrix).M[0][1] = dVar2;
  dVar2 = (param_1->CustomProjectionMatrix).M[0][3];
  (this->CustomProjectionMatrix).M[0][2] = (param_1->CustomProjectionMatrix).M[0][2];
  (this->CustomProjectionMatrix).M[0][3] = dVar2;
  dVar2 = (param_1->CustomProjectionMatrix).M[1][1];
  (this->CustomProjectionMatrix).M[1][0] = (param_1->CustomProjectionMatrix).M[1][0];
  (this->CustomProjectionMatrix).M[1][1] = dVar2;
  dVar2 = (param_1->CustomProjectionMatrix).M[1][3];
  (this->CustomProjectionMatrix).M[1][2] = (param_1->CustomProjectionMatrix).M[1][2];
  (this->CustomProjectionMatrix).M[1][3] = dVar2;
  dVar2 = (param_1->CustomProjectionMatrix).M[2][1];
  (this->CustomProjectionMatrix).M[2][0] = (param_1->CustomProjectionMatrix).M[2][0];
  (this->CustomProjectionMatrix).M[2][1] = dVar2;
  dVar2 = (param_1->CustomProjectionMatrix).M[2][3];
  (this->CustomProjectionMatrix).M[2][2] = (param_1->CustomProjectionMatrix).M[2][2];
  (this->CustomProjectionMatrix).M[2][3] = dVar2;
  dVar2 = (param_1->CustomProjectionMatrix).M[3][1];
  (this->CustomProjectionMatrix).M[3][0] = (param_1->CustomProjectionMatrix).M[3][0];
  (this->CustomProjectionMatrix).M[3][1] = dVar2;
  dVar2 = (param_1->CustomProjectionMatrix).M[3][3];
  (this->CustomProjectionMatrix).M[3][2] = (param_1->CustomProjectionMatrix).M[3][2];
  (this->CustomProjectionMatrix).M[3][3] = dVar2;
  return this;
}

// FImagePassCameraViewData @ 14ddc55a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FImagePassCameraViewData * __thiscall
UE::MoviePipeline::FImagePassCameraViewData::FImagePassCameraViewData
          (FImagePassCameraViewData *this)

{
  FMinimalViewInfo::FMinimalViewInfo(&this->ViewInfo);
  *(undefined8 *)&this->FileMetadata = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  this->ViewActor = (AActor *)0x0;
  this->bUseCustomProjectionMatrix = false;
  return this;
}

// ~FImagePassCameraViewData @ 14ddcae90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MoviePipeline::FImagePassCameraViewData::~FImagePassCameraViewData
          (FImagePassCameraViewData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileMetadata).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileMetadata);
  pFVar2 = (this->ViewInfo).PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}


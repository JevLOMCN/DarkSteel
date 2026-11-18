// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// operator= @ 14ac718a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FMinimalViewInfo * __thiscall
FMinimalViewInfo::operator=(FMinimalViewInfo *this,FMinimalViewInfo *param_1)

{
  double dVar1;
  undefined8 uVar2;
  uint uVar3;
  
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar1;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar1 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar1;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
  this->FOV = param_1->FOV;
  this->DesiredFOV = param_1->DesiredFOV;
  this->FirstPersonFOV = param_1->FirstPersonFOV;
  this->FirstPersonScale = param_1->FirstPersonScale;
  this->OrthoWidth = param_1->OrthoWidth;
  this->bAutoCalculateOrthoPlanes = param_1->bAutoCalculateOrthoPlanes;
  this->AutoPlaneShift = param_1->AutoPlaneShift;
  this->bUpdateOrthoPlanes = param_1->bUpdateOrthoPlanes;
  this->bUseCameraHeightAsViewTarget = param_1->bUseCameraHeightAsViewTarget;
  this->OrthoNearClipPlane = param_1->OrthoNearClipPlane;
  this->OrthoFarClipPlane = param_1->OrthoFarClipPlane;
  this->PerspectiveNearClipPlane = param_1->PerspectiveNearClipPlane;
  this->AspectRatio = param_1->AspectRatio;
  if (&param_1->AspectRatioAxisConstraint != &this->AspectRatioAxisConstraint) {
    if ((param_1->AspectRatioAxisConstraint).bIsSet == false) {
      if ((this->AspectRatioAxisConstraint).bIsSet != false) {
        (this->AspectRatioAxisConstraint).bIsSet = false;
      }
    }
    else {
      (this->AspectRatioAxisConstraint).TypedValue = (param_1->AspectRatioAxisConstraint).TypedValue
      ;
      (this->AspectRatioAxisConstraint).bIsSet = true;
    }
  }
  uVar3 = (this->bConstrainAspectRatio ^ param_1->bConstrainAspectRatio) & 1 ^
          *(uint *)&this->field_0x68;
  *(uint *)&this->field_0x68 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x68) & 2 ^ uVar3;
  *(uint *)&this->field_0x68 = uVar3;
  *(uint *)&this->field_0x68 = (uVar3 ^ *(uint *)&param_1->field_0x68) & 4 ^ uVar3;
  (this->ProjectionMode).Value = (param_1->ProjectionMode).Value;
  this->PostProcessBlendWeight = param_1->PostProcessBlendWeight;
  FPostProcessSettings::operator=(&this->PostProcessSettings,&param_1->PostProcessSettings);
  dVar1 = (param_1->OffCenterProjectionOffset).field0_0x0._s_0.Y;
  (this->OffCenterProjectionOffset).field0_0x0._s_0.X =
       (param_1->OffCenterProjectionOffset).field0_0x0._s_0.X;
  (this->OffCenterProjectionOffset).field0_0x0._s_0.Y = dVar1;
  if (&param_1->PreviousViewTransform != &this->PreviousViewTransform) {
    if ((param_1->PreviousViewTransform).bIsSet == false) {
      if ((this->PreviousViewTransform).bIsSet != false) {
        (this->PreviousViewTransform).bIsSet = false;
      }
    }
    else {
      dVar1 = (param_1->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1];
      (this->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0] =
           (param_1->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0];
      (this->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1];
      (this->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
           (param_1->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0];
      (this->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1];
      (this->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0] =
           (param_1->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0];
      (this->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1];
      (this->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0] =
           (param_1->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0];
      (this->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1];
      (this->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
           (param_1->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0];
      (this->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
      (this->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
           (param_1->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
      (this->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar1;
      (this->PreviousViewTransform).bIsSet = true;
    }
  }
  this->OverscanResolutionFraction = param_1->OverscanResolutionFraction;
  this->CropFraction = param_1->CropFraction;
  uVar2 = *(undefined8 *)((longlong)&(param_1->AsymmetricCropFraction).field0_0x0 + 8);
  *(undefined8 *)&(this->AsymmetricCropFraction).field0_0x0 =
       *(undefined8 *)&(param_1->AsymmetricCropFraction).field0_0x0;
  *(undefined8 *)((longlong)&(this->AsymmetricCropFraction).field0_0x0 + 8) = uVar2;
  this->Overscan = param_1->Overscan;
  uVar2 = *(undefined8 *)((longlong)&(param_1->AsymmetricOverscan).field0_0x0 + 8);
  *(undefined8 *)&(this->AsymmetricOverscan).field0_0x0 =
       *(undefined8 *)&(param_1->AsymmetricOverscan).field0_0x0;
  *(undefined8 *)((longlong)&(this->AsymmetricOverscan).field0_0x0 + 8) = uVar2;
  dVar1 = (param_1->CameraToViewTarget).field0_0x0._s_0.Y;
  (this->CameraToViewTarget).field0_0x0._s_0.X = (param_1->CameraToViewTarget).field0_0x0._s_0.X;
  (this->CameraToViewTarget).field0_0x0._s_0.Y = dVar1;
  (this->CameraToViewTarget).field0_0x0._s_0.Z = (param_1->CameraToViewTarget).field0_0x0._s_0.Z;
  return this;
}


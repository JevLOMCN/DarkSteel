// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticStruct @ 147269210

UScriptStruct * __cdecl FMinimalViewInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMinimalViewInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMinimalViewInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMinimalViewInfo,(UObject *)pUVar1,
                         L"MinimalViewInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMinimalViewInfo.OuterSingleton;
}

// FMinimalViewInfo @ 14726c8b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FMinimalViewInfo * __thiscall FMinimalViewInfo::FMinimalViewInfo(FMinimalViewInfo *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  this->bConstrainAspectRatio = 0;
  this->bUseFirstPersonParameters = 0;
  this->bUseFieldOfViewForLOD = 1;
  (this->Location).field0_0x0._s_0.X = 0.0;
  (this->Location).field0_0x0._s_0.Y = 0.0;
  (this->Location).field0_0x0._s_0.Z = 0.0;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  this->AutoPlaneShift = 0.0;
  this->bUpdateOrthoPlanes = false;
  this->bUseCameraHeightAsViewTarget = false;
  this->OrthoNearClipPlane = 0.0;
  (this->AspectRatioAxisConstraint).bIsSet = false;
  (this->ProjectionMode).Value = '\0';
  this->PostProcessBlendWeight = 0.0;
  this->FOV = 90.0;
  this->DesiredFOV = 90.0;
  this->FirstPersonFOV = 90.0;
  this->FirstPersonScale = 1.0;
  this->OrthoWidth = 512.0;
  this->bAutoCalculateOrthoPlanes = true;
  this->OrthoFarClipPlane = 2097152.0;
  this->PerspectiveNearClipPlane = -1.0;
  this->AspectRatio = 1.3333334;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  (this->OffCenterProjectionOffset).field0_0x0._s_0.X = 0.0;
  (this->OffCenterProjectionOffset).field0_0x0._s_0.Y = 0.0;
  (this->PreviousViewTransform).bIsSet = false;
  (this->AsymmetricCropFraction).field0_0x0._s_0.X = 1.0;
  (this->AsymmetricCropFraction).field0_0x0._s_0.Y = 1.0;
  (this->AsymmetricCropFraction).field0_0x0._s_0.Z = 1.0;
  *(undefined8 *)((longlong)&(this->AsymmetricCropFraction).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)&(this->AsymmetricOverscan).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->AsymmetricOverscan).field0_0x0 + 8) = 0;
  this->OverscanResolutionFraction = 1.0;
  this->CropFraction = 1.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraToViewTarget).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraToViewTarget).field0_0x0._s_0.Y = (double)uVar2;
  (this->CameraToViewTarget).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// FMinimalViewInfo @ 1476e7c70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FMinimalViewInfo * __thiscall
FMinimalViewInfo::FMinimalViewInfo(FMinimalViewInfo *this,FMinimalViewInfo *param_1)

{
  bool bVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  uint uVar5;
  
  dVar3 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar3;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar3 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar3;
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
  fVar2 = param_1->AspectRatio;
  (this->AspectRatioAxisConstraint).bIsSet = false;
  this->AspectRatio = fVar2;
  bVar1 = (param_1->AspectRatioAxisConstraint).bIsSet;
  (this->AspectRatioAxisConstraint).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->AspectRatioAxisConstraint).TypedValue = (param_1->AspectRatioAxisConstraint).TypedValue;
  }
  uVar5 = (this->bConstrainAspectRatio ^ param_1->bConstrainAspectRatio) & 1 ^
          *(uint *)&this->field_0x68;
  *(uint *)&this->field_0x68 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&param_1->field_0x68) & 2 ^ uVar5;
  *(uint *)&this->field_0x68 = uVar5;
  *(uint *)&this->field_0x68 = (uVar5 ^ *(uint *)&param_1->field_0x68) & 4 ^ uVar5;
  (this->ProjectionMode).Value = (param_1->ProjectionMode).Value;
  this->PostProcessBlendWeight = param_1->PostProcessBlendWeight;
  FPostProcessSettings::FPostProcessSettings
            (&this->PostProcessSettings,&param_1->PostProcessSettings);
  dVar3 = (param_1->OffCenterProjectionOffset).field0_0x0._s_0.Y;
  (this->OffCenterProjectionOffset).field0_0x0._s_0.X =
       (param_1->OffCenterProjectionOffset).field0_0x0._s_0.X;
  (this->OffCenterProjectionOffset).field0_0x0._s_0.Y = dVar3;
  (this->PreviousViewTransform).bIsSet = false;
  bVar1 = (param_1->PreviousViewTransform).bIsSet;
  (this->PreviousViewTransform).bIsSet = bVar1;
  if (bVar1 != false) {
    dVar3 = (param_1->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_1->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (param_1->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_1->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (param_1->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_1->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
    (this->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
         (param_1->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
    (this->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar3;
  }
  this->OverscanResolutionFraction = param_1->OverscanResolutionFraction;
  this->CropFraction = param_1->CropFraction;
  uVar4 = *(undefined8 *)((longlong)&(param_1->AsymmetricCropFraction).field0_0x0 + 8);
  *(undefined8 *)&(this->AsymmetricCropFraction).field0_0x0 =
       *(undefined8 *)&(param_1->AsymmetricCropFraction).field0_0x0;
  *(undefined8 *)((longlong)&(this->AsymmetricCropFraction).field0_0x0 + 8) = uVar4;
  this->Overscan = param_1->Overscan;
  uVar4 = *(undefined8 *)((longlong)&(param_1->AsymmetricOverscan).field0_0x0 + 8);
  *(undefined8 *)&(this->AsymmetricOverscan).field0_0x0 =
       *(undefined8 *)&(param_1->AsymmetricOverscan).field0_0x0;
  *(undefined8 *)((longlong)&(this->AsymmetricOverscan).field0_0x0 + 8) = uVar4;
  dVar3 = (param_1->CameraToViewTarget).field0_0x0._s_0.Y;
  (this->CameraToViewTarget).field0_0x0._s_0.X = (param_1->CameraToViewTarget).field0_0x0._s_0.X;
  (this->CameraToViewTarget).field0_0x0._s_0.Y = dVar3;
  (this->CameraToViewTarget).field0_0x0._s_0.Z = (param_1->CameraToViewTarget).field0_0x0._s_0.Z;
  return this;
}

// operator= @ 1476e94b0

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

// AddWeightedViewInfo @ 1476ed210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FMinimalViewInfo::AddWeightedViewInfo
          (FMinimalViewInfo *this,FMinimalViewInfo *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  undefined1 auStack_908 [32];
  TVector<double>_u_0 local_8e8;
  double local_8d0;
  double local_8c8;
  double local_8c0;
  float local_8b8;
  float local_8b0;
  float local_8ac;
  float local_8a8;
  float local_898;
  float local_894;
  float local_890;
  float local_88c;
  uint local_880;
  void *local_110;
  double local_f8;
  double local_f0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_908;
  FMinimalViewInfo((FMinimalViewInfo *)&local_8e8._s_0,param_1);
  ApplyBlendWeight((FMinimalViewInfo *)&local_8e8._s_0,param_2);
  dVar1 = (this->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = local_8e8._s_0.X + (this->Location).field0_0x0._s_0.X;
  dVar2 = (this->Location).field0_0x0._s_0.Z;
  (this->Location).field0_0x0._s_0.Y = local_8e8._s_0.Y + dVar1;
  (this->Location).field0_0x0._s_0.Z = local_8e8._s_0.Z + dVar2;
  (this->Rotation).Pitch = local_8d0 + (this->Rotation).Pitch;
  (this->Rotation).Yaw = local_8c8 + (this->Rotation).Yaw;
  (this->Rotation).Roll = local_8c0 + (this->Rotation).Roll;
  this->FOV = local_8b8 + this->FOV;
  this->FirstPersonFOV = local_8b0 + this->FirstPersonFOV;
  this->FirstPersonScale = local_8ac + this->FirstPersonScale;
  this->OrthoWidth = local_8a8 + this->OrthoWidth;
  this->OrthoNearClipPlane = local_898 + this->OrthoNearClipPlane;
  this->OrthoFarClipPlane = local_894 + this->OrthoFarClipPlane;
  this->PerspectiveNearClipPlane = local_890 + this->PerspectiveNearClipPlane;
  dVar1 = (this->OffCenterProjectionOffset).field0_0x0._s_0.X;
  this->AspectRatio = local_88c + this->AspectRatio;
  dVar2 = (this->OffCenterProjectionOffset).field0_0x0._s_0.Y;
  (this->OffCenterProjectionOffset).field0_0x0._s_0.X = local_f8 + dVar1;
  (this->OffCenterProjectionOffset).field0_0x0._s_0.Y = local_f0 + dVar2;
  uVar3 = (ZPULL(*(undefined4 *)&this->field_0x68,0,1) | local_880) & 1 ^
          *(undefined4 *)&this->field_0x68 & 0xfffffffe;
  uVar3 = (uVar3 | local_880) & 2 ^ uVar3 & 0xfffffffd;
  *(uint *)&this->field_0x68 = (uVar3 | local_880) & 4 ^ uVar3 & 0xfffffffb;
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  return;
}

// ApplyAsymmetricOverscan @ 1476ee300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FMinimalViewInfo::ApplyAsymmetricOverscan
          (FMinimalViewInfo *this,TVector4<float> *param_1,bool param_2,bool param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_94;
  undefined8 uStack_90;
  
  fVar2 = __real_40000000;
  fVar10 = __real_3f800000;
  fVar3 = (param_1->field0_0x0)._s_0.W;
  fVar11 = (param_1->field0_0x0)._s_0.Z;
  fVar7 = (param_1->field0_0x0)._s_0.X;
  fVar15 = (param_1->field0_0x0)._s_0.Y;
  if (__real_322bcc77 < SQRT(fVar15 * fVar15 + fVar7 * fVar7 + fVar11 * fVar11 + fVar3 * fVar3)) {
    fVar9 = (this->AsymmetricOverscan).field0_0x0._s_0.W;
    fVar13 = (this->AsymmetricOverscan).field0_0x0._s_0.Z;
    fVar8 = (this->AsymmetricOverscan).field0_0x0._s_0.X;
    fVar1 = (this->AsymmetricOverscan).field0_0x0._s_0.Y;
    fVar5 = __real_3f800000 / (fVar1 + fVar8 + __real_40000000);
    fVar4 = __real_3f800000 / (fVar9 + fVar13 + __real_40000000);
    fVar6 = ((fVar13 - fVar9) + __real_40000000) * fVar4 - __real_3f800000;
    fVar9 = ((fVar9 - fVar13) + __real_40000000) * fVar4 - __real_3f800000;
    if (fVar6 <= fVar3) {
      fVar6 = fVar3;
    }
    if (fVar9 <= fVar11) {
      fVar9 = fVar11;
    }
    fVar3 = ((fVar8 - fVar1) + __real_40000000) * fVar5 - __real_3f800000;
    fVar11 = ((fVar1 - fVar8) + __real_40000000) * fVar5 - __real_3f800000;
    fVar13 = fVar9 + __real_3f800000;
    if (fVar3 <= fVar15) {
      fVar3 = fVar15;
    }
    fVar15 = fVar6 + __real_3f800000;
    if (fVar11 <= fVar7) {
      fVar11 = fVar7;
    }
    fVar7 = (this->AsymmetricOverscan).field0_0x0._s_0.Z;
    fVar12 = fVar3 + __real_3f800000;
    fVar1 = (this->AsymmetricOverscan).field0_0x0._s_0.W;
    fVar14 = fVar11 + __real_3f800000;
    fVar4 = (this->AsymmetricOverscan).field0_0x0._s_0.Y;
    fVar5 = fVar12 + fVar14;
    (this->AsymmetricOverscan).field0_0x0._s_0.X = fVar14 * fVar8 + fVar11;
    (this->AsymmetricOverscan).field0_0x0._s_0.Y = fVar12 * fVar4 + fVar3;
    (this->AsymmetricOverscan).field0_0x0._s_0.Z = fVar13 * fVar7 + fVar9;
    (this->AsymmetricOverscan).field0_0x0._s_0.W = fVar15 * fVar1 + fVar6;
    fVar9 = fVar5 * __real_3f000000;
    fVar3 = tanf(this->FOV * __real_3c0efa35);
    fVar3 = atanf(fVar3 * fVar9);
    this->FOV = fVar3 * ___real_42e52ee0;
    this->OrthoWidth = fVar9 * this->OrthoWidth;
    fVar7 = fVar15 + fVar13;
    fVar3 = fVar10 / fVar5;
    fStack_94 = ((fVar14 - fVar12) + fVar2) * fVar3;
    fVar11 = fVar10 / fVar7;
    this->AspectRatio = (fVar5 / fVar7) * this->AspectRatio;
    (this->OffCenterProjectionOffset).field0_0x0._s_0.X =
         (double)(fVar3 * (fVar12 - fVar14)) + (this->OffCenterProjectionOffset).field0_0x0._s_0.X;
    (this->OffCenterProjectionOffset).field0_0x0._s_0.Y =
         (double)(fVar11 * (fVar13 - fVar15)) + (this->OffCenterProjectionOffset).field0_0x0._s_0.Y;
    if (param_2) {
      fVar8 = fVar7 * __real_3f000000;
      if (fVar7 * __real_3f000000 <= fVar9) {
        fVar8 = fVar9;
      }
      fVar8 = fVar8 * this->OverscanResolutionFraction;
      if (fVar2 <= fVar8) {
        fVar8 = fVar2;
      }
      if (fVar8 <= fVar10) {
        fVar8 = fVar10;
      }
      this->OverscanResolutionFraction = fVar8;
    }
    if (param_3) {
      uStack_90 = CONCAT44(((fVar13 - fVar15) + fVar2) * fVar11,((fVar15 - fVar13) + fVar2) * fVar11
                          );
      fVar10 = ((fVar12 - fVar14) + fVar2) * fVar3;
    }
    else {
      fStack_94 = (float)((ulonglong)___xmm_3f8000003f8000003f8000003f800000 >> 0x20);
      uStack_90 = _UNK_15076b1f8;
    }
    (this->AsymmetricCropFraction).field0_0x0._s_0.X =
         fVar10 * (this->AsymmetricCropFraction).field0_0x0._s_0.X;
    (this->AsymmetricCropFraction).field0_0x0._s_0.Y =
         fStack_94 * (this->AsymmetricCropFraction).field0_0x0._s_0.Y;
    (this->AsymmetricCropFraction).field0_0x0._s_0.Z =
         (this->AsymmetricCropFraction).field0_0x0._s_0.Z * (float)uStack_90;
    (this->AsymmetricCropFraction).field0_0x0._s_0.W =
         (this->AsymmetricCropFraction).field0_0x0._s_0.W * uStack_90._4_4_;
  }
  return;
}

// ApplyBlendWeight @ 1476ee730

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall FMinimalViewInfo::ApplyBlendWeight(FMinimalViewInfo *this,float *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar15;
  undefined1 auVar13 [16];
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  dVar16 = (this->Location).field0_0x0._s_0.Y;
  dVar21 = (double)*param_1;
  dVar22 = (this->Location).field0_0x0._s_0.Z;
  (this->Location).field0_0x0._s_0.X = (this->Location).field0_0x0._s_0.X * dVar21;
  (this->Location).field0_0x0._s_0.Y = dVar16 * dVar21;
  (this->Location).field0_0x0._s_0.Z = dVar21 * dVar22;
  auVar18._0_8_ = (this->Rotation).Pitch;
  auVar18._8_8_ = (this->Rotation).Yaw;
  dVar22 = (this->Rotation).Roll;
  auVar10 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar10 = roundpd(in_XMM1,auVar10,3);
  dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar17._0_8_ = auVar10._0_8_ * dVar4;
  dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar17._8_8_ = auVar10._8_8_ * dVar5;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar22;
  auVar10 = divpd(auVar11,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar16 = (double)auVar18._0_8_ - auVar17._0_8_;
  dVar21 = (double)auVar18._8_8_ - auVar17._8_8_;
  auVar18 = roundpd(auVar17,auVar10,3);
  dVar2 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar12._8_4_ = SUB84(dVar21,0);
  auVar12._0_8_ = dVar16;
  auVar12._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  dVar15 = auVar12._8_8_ + dVar5;
  dVar22 = dVar22 - auVar18._0_8_ * dVar2;
  dVar3 = 0.0 - auVar18._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar6 = -(ulonglong)(0.0 <= dVar16);
  uVar8 = -(ulonglong)(0.0 <= dVar21);
  auVar19._0_8_ = uVar6 & (ulonglong)dVar16;
  auVar19._8_4_ = (undefined4)(uVar8 & (ulonglong)dVar21);
  auVar19._12_4_ = (undefined4)((uVar8 & (ulonglong)dVar21) >> 0x20);
  auVar24._0_4_ = ~(uint)uVar6 & SUB84(dVar16 + dVar4,0);
  auVar24._4_4_ = ~(uint)(uVar6 >> 0x20) & (uint)((ulonglong)(dVar16 + dVar4) >> 0x20);
  auVar24._8_4_ = ~(uint)uVar8 & SUB84(dVar15,0);
  auVar24._12_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)dVar15 >> 0x20);
  auVar24 = auVar24 | auVar19;
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar22;
  auVar13._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar16 = auVar13._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar6 = -(ulonglong)(0.0 <= dVar22);
  uVar8 = -(ulonglong)(0.0 <= dVar3);
  auVar23._0_8_ = (ulonglong)dVar22 & uVar6;
  auVar23._8_4_ = (undefined4)(uVar8 & (ulonglong)dVar3);
  auVar23._12_4_ = (undefined4)((uVar8 & (ulonglong)dVar3) >> 0x20);
  auVar20._0_4_ = ~(uint)uVar6 & SUB84(dVar22 + dVar2,0);
  auVar20._4_4_ = ~(uint)(uVar6 >> 0x20) & (uint)((ulonglong)(dVar22 + dVar2) >> 0x20);
  auVar20._8_4_ = ~(uint)uVar8 & SUB84(dVar16,0);
  auVar20._12_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)dVar16 >> 0x20);
  auVar20 = auVar20 | auVar23;
  uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar20._0_8_);
  uVar7 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar24._0_8_);
  uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar24._8_8_);
  auVar14._0_8_ = uVar7 & (ulonglong)(auVar24._0_8_ - dVar4);
  uVar6 = uVar9 & (ulonglong)(auVar24._8_8_ - dVar5);
  auVar14._8_4_ = (undefined4)uVar6;
  auVar14._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar10._4_4_ = ~(uint)(uVar7 >> 0x20) & auVar24._4_4_;
  auVar10._0_4_ = ~(uint)uVar7 & auVar24._0_4_;
  auVar10._8_4_ = ~(uint)uVar9 & auVar24._8_4_;
  auVar10._12_4_ = ~(uint)(uVar9 >> 0x20) & auVar24._12_4_;
  (this->Rotation).Pitch = (double)SUB168(auVar14 | auVar10,0);
  (this->Rotation).Yaw = (double)SUB168(auVar14 | auVar10,8);
  (this->Rotation).Roll =
       (double)(uVar8 & (ulonglong)(auVar20._0_8_ - dVar2) |
               CONCAT44(~(uint)(uVar8 >> 0x20) & auVar20._4_4_,~(uint)uVar8 & auVar20._0_4_));
  dVar22 = (double)*param_1;
  (this->Rotation).Pitch = (this->Rotation).Pitch * dVar22;
  (this->Rotation).Yaw = (this->Rotation).Yaw * dVar22;
  (this->Rotation).Roll = dVar22 * (this->Rotation).Roll;
  this->FOV = *param_1 * this->FOV;
  this->FirstPersonFOV = *param_1 * this->FirstPersonFOV;
  this->FirstPersonScale = *param_1 * this->FirstPersonScale;
  this->OrthoWidth = *param_1 * this->OrthoWidth;
  this->OrthoNearClipPlane = this->OrthoNearClipPlane * *param_1;
  this->OrthoFarClipPlane = this->OrthoFarClipPlane * *param_1;
  this->PerspectiveNearClipPlane = this->PerspectiveNearClipPlane * *param_1;
  this->AspectRatio = this->AspectRatio * *param_1;
  fVar1 = *param_1;
  dVar22 = (this->OffCenterProjectionOffset).field0_0x0._s_0.Y;
  (this->OffCenterProjectionOffset).field0_0x0._s_0.X =
       (this->OffCenterProjectionOffset).field0_0x0._s_0.X * (double)fVar1;
  (this->OffCenterProjectionOffset).field0_0x0._s_0.Y = dVar22 * (double)fVar1;
  return;
}

// ApplyOverscan @ 1476eede0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FMinimalViewInfo::ApplyOverscan(FMinimalViewInfo *this,float param_1,bool param_2,bool param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = __real_3f800000;
  if (__real_322bcc77 < (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar1 = this->Overscan;
    fVar2 = (float)((uint)(fVar1 / (fVar1 + __real_3f800000)) ^
                   __xmm_80000000800000008000000080000000);
    if (fVar2 <= param_1) {
      fVar2 = param_1;
    }
    fVar4 = fVar2 + __real_3f800000;
    this->Overscan = fVar4 * fVar1 + fVar2;
    fVar1 = tanf(this->FOV * __real_3c0efa35);
    fVar1 = atanf(fVar1 * fVar4);
    this->FOV = fVar1 * ___real_42e52ee0;
    this->OrthoWidth = fVar4 * this->OrthoWidth;
    if (param_2) {
      fVar1 = fVar4 * this->OverscanResolutionFraction;
      if (__real_40000000 <= fVar1) {
        fVar1 = __real_40000000;
      }
      if (fVar1 <= fVar3) {
        fVar1 = fVar3;
      }
      this->OverscanResolutionFraction = fVar1;
    }
    if (param_3) {
      fVar3 = fVar3 / fVar4;
    }
    this->CropFraction = fVar3 * this->CropFraction;
  }
  return;
}

// AutoCalculateOrthoPlanes @ 1476eff20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
FMinimalViewInfo::AutoCalculateOrthoPlanes(FMinimalViewInfo *this,FSceneViewProjectionData *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  TConsoleVariableData<bool> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 in_XMM5 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  TVector<double>_u_0 local_128;
  undefined1 local_108 [48];
  double local_d8;
  double local_b8;
  
  pTVar5 = CVarOrthoAllowAutoPlanes.Ref;
  if ((this->ProjectionMode).Value != '\x01') {
    return false;
  }
  bVar8 = IsInParallelGameThread();
  lVar13 = 1;
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar12 = 0;
  }
  else {
    lVar12 = 1;
  }
  pTVar6 = CVarOrthoClampToMaxFPBuffer.Ref;
  if (pTVar5->ShadowedValue[lVar12] == false) {
    return false;
  }
  if (this->bAutoCalculateOrthoPlanes == false) {
    return false;
  }
  bVar8 = IsInParallelGameThread();
  lVar12 = 4;
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar10 = 0;
  }
  else {
    lVar10 = 4;
  }
  pTVar5 = CVarOrthoScaleIncrementingUnits.Ref;
  iVar11 = *(int *)((longlong)pTVar6->ShadowedValue + lVar10);
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar13 = 0;
  }
  pTVar7 = CVarOrthoAutoDepthScale.Ref;
  if ((pTVar5->ShadowedValue[lVar13] == false) || (iVar11 != 1)) {
    bVar8 = false;
    fVar17 = __real_4a000000;
    fVar18 = __real_4a000000;
    bVar9 = false;
    if (iVar11 != 1) goto LAB_1476f0040;
  }
  else {
    fVar18 = __real_55000000;
    bVar9 = true;
  }
  bVar8 = bVar9;
  fVar17 = __real_477fe000;
LAB_1476f0040:
  bVar9 = IsInParallelGameThread();
  if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
    lVar13 = 0;
  }
  else {
    lVar13 = 4;
  }
  fVar4 = __real_3f800000;
  fVar20 = __real_3727c5ac;
  fVar19 = *(float *)((longlong)pTVar7->ShadowedValue + lVar13);
  if (0.0 < fVar19) {
    if (fVar19 <= fVar17) {
      fVar17 = fVar19;
    }
    if (fVar17 <= __real_3f800000) {
      fVar17 = __real_3f800000;
    }
  }
  fVar19 = this->AspectRatio;
  if (this->AspectRatio == 0.0) {
    fVar19 = __real_3727c5ac;
  }
  fVar19 = this->OrthoWidth / fVar19;
  UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
            ((TRotationMatrix<double> *)local_108,&this->Rotation);
  local_128._s_0.X = (double)local_108._16_8_;
  local_128._s_0.Y = local_d8;
  local_128._s_0.Z = local_b8;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_128._s_0,__real_3e45798ee0000000);
  fVar21 = (float)(double)CONCAT44((uint)((ulonglong)local_128._16_8_ >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_128._s_0.Z,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (((iVar11 != 1) || (fVar19 <= 0.0)) ||
     (iVar11 = *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 0xc) -
               *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 4),
     (*(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 8) -
     *(int *)&(param_1->ViewRect).field0_0x0) * iVar11 < 1)) {
    if (fVar21 != 0.0) {
      fVar20 = fVar21;
    }
    fVar20 = fVar19 / fVar20;
  }
  else {
    auVar16 = roundps(in_XMM5,ZEXT416((uint)(fVar19 / (float)iVar11)),1);
    fVar14 = auVar16._0_4_;
    if (bVar8) {
      fVar14 = logf(fVar14);
      fVar14 = fVar14 * __real_3fb8aa3b;
    }
    fVar20 = fVar14 * fVar17;
    if (fVar18 <= fVar14 * fVar17) {
      fVar20 = fVar18;
    }
    if (fVar20 <= fVar17) {
      fVar20 = fVar17;
    }
  }
  pTVar7 = CVarOrthoAutoPlaneShift.Ref;
  dVar1 = (this->CameraToViewTarget).field0_0x0._s_0.Y;
  dVar2 = (this->CameraToViewTarget).field0_0x0._s_0.X;
  fVar17 = this->OrthoWidth;
  if (this->OrthoWidth <= fVar19) {
    fVar17 = fVar19;
  }
  dVar3 = (this->CameraToViewTarget).field0_0x0._s_0.Z;
  fVar14 = fVar21;
  if (fVar4 <= fVar21) {
    fVar14 = fVar4;
  }
  fVar15 = fVar4 - fVar21;
  if (fVar4 <= fVar4 - fVar21) {
    fVar15 = fVar4;
  }
  if (fVar14 <= __real_3f3504f7) {
    fVar14 = __real_3f3504f7;
  }
  if (fVar15 <= __real_3f3504f7) {
    fVar15 = __real_3f3504f7;
  }
  fVar14 = fVar14 - fVar4 / fVar15;
  if (fVar14 <= __real_bf000000) {
    fVar14 = __real_bf000000;
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
  auVar16 = sqrtpd(ZEXT416((uint)fVar17),auVar16);
  fVar17 = fVar14 * fVar17 - (float)auVar16._0_8_ * fVar21;
  fVar18 = fVar17 + fVar18;
  if (fVar20 <= fVar18) {
    fVar18 = fVar20;
  }
  if (fVar18 <= fVar19) {
    fVar18 = fVar19;
  }
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar12 = 0;
  }
  fVar19 = *(float *)((longlong)pTVar7->ShadowedValue + lVar12);
  this->OrthoFarClipPlane = this->AutoPlaneShift + fVar18 + fVar19;
  this->OrthoNearClipPlane = this->AutoPlaneShift + fVar17 + fVar19;
  dVar1 = (this->CameraToViewTarget).field0_0x0._s_0.Y;
  (param_1->CameraToViewTarget).field0_0x0._s_0.X = (this->CameraToViewTarget).field0_0x0._s_0.X;
  (param_1->CameraToViewTarget).field0_0x0._s_0.Y = dVar1;
  (param_1->CameraToViewTarget).field0_0x0._s_0.Z = (this->CameraToViewTarget).field0_0x0._s_0.Z;
  return true;
}

// BlendViewInfo @ 1476f06a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FMinimalViewInfo::BlendViewInfo(FMinimalViewInfo *this,FMinimalViewInfo *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  
  dVar14 = (this->Location).field0_0x0._s_0.X;
  dVar21 = (this->Location).field0_0x0._s_0.Y;
  dVar1 = (param_1->Location).field0_0x0._s_0.Z;
  dVar2 = (this->Location).field0_0x0._s_0.Z;
  dVar23 = (param_1->Location).field0_0x0._s_0.Y;
  dVar4 = (double)param_2;
  dVar3 = (this->Location).field0_0x0._s_0.Z;
  (this->Location).field0_0x0._s_0.X =
       ((param_1->Location).field0_0x0._s_0.X - dVar14) * dVar4 + dVar14;
  (this->Location).field0_0x0._s_0.Y = (dVar23 - dVar21) * dVar4 + dVar21;
  (this->Location).field0_0x0._s_0.Z = (dVar1 - dVar2) * dVar4 + dVar3;
  auVar11._0_8_ = (param_1->Rotation).Roll - (this->Rotation).Roll;
  dVar21 = (param_1->Rotation).Pitch - (this->Rotation).Pitch;
  auVar15._0_8_ = (param_1->Rotation).Yaw - (this->Rotation).Yaw;
  auVar15._8_8_ = 0;
  auVar10._8_4_ = SUB84(auVar15._0_8_,0);
  auVar10._0_8_ = dVar21;
  auVar10._12_4_ = (int)((ulonglong)auVar15._0_8_ >> 0x20);
  auVar10 = divpd(auVar10,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar16 = roundpd(auVar15,auVar10,3);
  auVar11._8_8_ = 0;
  auVar10 = divpd(auVar11,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar1 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar17._0_8_ = auVar16._0_8_ * dVar1;
  dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar17._8_8_ = auVar16._8_8_ * dVar2;
  dVar21 = dVar21 - auVar17._0_8_;
  dVar23 = auVar15._0_8_ - auVar17._8_8_;
  auVar10 = roundpd(auVar17,auVar10,3);
  dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar16._8_4_ = SUB84(dVar23,0);
  auVar16._0_8_ = dVar21;
  auVar16._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  dVar24 = auVar11._0_8_ - auVar10._0_8_ * dVar3;
  dVar26 = 0.0 - auVar10._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  dVar14 = auVar16._8_8_ + dVar2;
  uVar6 = -(ulonglong)(0.0 <= dVar24);
  uVar8 = -(ulonglong)(0.0 <= dVar26);
  uVar7 = -(ulonglong)(0.0 <= dVar21);
  uVar9 = -(ulonglong)(0.0 <= dVar23);
  auVar18._0_8_ = uVar7 & (ulonglong)dVar21;
  auVar18._8_4_ = (undefined4)(uVar9 & (ulonglong)dVar23);
  auVar18._12_4_ = (undefined4)((uVar9 & (ulonglong)dVar23) >> 0x20);
  auVar20._0_4_ = ~(uint)uVar7 & SUB84(dVar21 + dVar1,0);
  auVar20._4_4_ = ~(uint)(uVar7 >> 0x20) & (uint)((ulonglong)(dVar21 + dVar1) >> 0x20);
  auVar20._8_4_ = ~(uint)uVar9 & SUB84(dVar14,0);
  auVar20._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar14 >> 0x20);
  auVar19._0_8_ = uVar6 & (ulonglong)dVar24;
  auVar19._8_4_ = (undefined4)(uVar8 & (ulonglong)dVar26);
  auVar19._12_4_ = (undefined4)((uVar8 & (ulonglong)dVar26) >> 0x20);
  auVar12._8_4_ = SUB84(dVar26,0);
  auVar12._0_8_ = dVar24;
  auVar12._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  dVar14 = auVar12._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar20 = auVar20 | auVar18;
  auVar22._0_4_ = ~(uint)uVar6 & SUB84(dVar24 + dVar3,0);
  auVar22._4_4_ = ~(uint)(uVar6 >> 0x20) & (uint)((ulonglong)(dVar24 + dVar3) >> 0x20);
  auVar22._8_4_ = ~(uint)uVar8 & SUB84(dVar14,0);
  auVar22._12_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)dVar14 >> 0x20);
  auVar22 = auVar22 | auVar19;
  uVar7 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar20._0_8_);
  uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar20._8_8_);
  uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar22._0_8_);
  auVar25._0_8_ = uVar7 & (ulonglong)(auVar20._0_8_ - dVar1);
  uVar6 = uVar9 & (ulonglong)(auVar20._8_8_ - dVar2);
  auVar25._8_4_ = (undefined4)uVar6;
  auVar25._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar13._0_4_ = ~(uint)uVar7 & auVar20._0_4_;
  auVar13._4_4_ = ~(uint)(uVar7 >> 0x20) & auVar20._4_4_;
  auVar13._8_4_ = ~(uint)uVar9 & auVar20._8_4_;
  auVar13._12_4_ = ~(uint)(uVar9 >> 0x20) & auVar20._12_4_;
  (this->Rotation).Pitch = SUB168(auVar25 | auVar13,0) * dVar4 + (this->Rotation).Pitch;
  (this->Rotation).Yaw = SUB168(auVar25 | auVar13,8) * dVar4 + (this->Rotation).Yaw;
  (this->Rotation).Roll =
       (double)(uVar8 & (ulonglong)(auVar22._0_8_ - dVar3) |
               CONCAT44(~(uint)(uVar8 >> 0x20) & auVar22._4_4_,~(uint)uVar8 & auVar22._0_4_)) *
       dVar4 + (this->Rotation).Roll;
  this->FOV = (param_1->FOV - this->FOV) * param_2 + this->FOV;
  this->FirstPersonFOV =
       (param_1->FirstPersonFOV - this->FirstPersonFOV) * param_2 + this->FirstPersonFOV;
  this->FirstPersonScale =
       (param_1->FirstPersonScale - this->FirstPersonScale) * param_2 + this->FirstPersonScale;
  this->OrthoWidth = (param_1->OrthoWidth - this->OrthoWidth) * param_2 + this->OrthoWidth;
  this->OrthoNearClipPlane =
       (param_1->OrthoNearClipPlane - this->OrthoNearClipPlane) * param_2 + this->OrthoNearClipPlane
  ;
  this->OrthoFarClipPlane =
       (param_1->OrthoFarClipPlane - this->OrthoFarClipPlane) * param_2 + this->OrthoFarClipPlane;
  this->PerspectiveNearClipPlane =
       (param_1->PerspectiveNearClipPlane - this->PerspectiveNearClipPlane) * param_2 +
       this->PerspectiveNearClipPlane;
  dVar1 = (this->OffCenterProjectionOffset).field0_0x0._s_0.X;
  dVar2 = (this->OffCenterProjectionOffset).field0_0x0._s_0.Y;
  dVar3 = (param_1->OffCenterProjectionOffset).field0_0x0._s_0.Y;
  (this->OffCenterProjectionOffset).field0_0x0._s_0.X =
       ((param_1->OffCenterProjectionOffset).field0_0x0._s_0.X - dVar1) * dVar4 + dVar1;
  (this->OffCenterProjectionOffset).field0_0x0._s_0.Y = (dVar3 - dVar2) * dVar4 + dVar2;
  this->AspectRatio = (param_1->AspectRatio - this->AspectRatio) * param_2 + this->AspectRatio;
  uVar5 = (ZPULL(*(undefined4 *)&this->field_0x68,0,1) | param_1->bConstrainAspectRatio) & 1 ^
          *(undefined4 *)&this->field_0x68 & 0xfffffffe;
  *(uint *)&this->field_0x68 = uVar5;
  uVar5 = (uVar5 | *(uint *)&param_1->field_0x68) & 2 ^ uVar5 & 0xfffffffd;
  *(uint *)&this->field_0x68 = uVar5;
  *(uint *)&this->field_0x68 = (uVar5 | *(uint *)&param_1->field_0x68) & 4 ^ uVar5 & 0xfffffffb;
  return;
}

// CalculateFirstPersonFOVCorrectionFactor @ 1476f50a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

float __thiscall FMinimalViewInfo::CalculateFirstPersonFOVCorrectionFactor(FMinimalViewInfo *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = tanf(this->FOV * __real_3c0efa35);
  fVar2 = tanf(this->FirstPersonFOV * __real_3c0efa35);
  return fVar1 / fVar2;
}

// CalculateProjectionMatrix @ 1476f50f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TMatrix<double> * __thiscall
FMinimalViewInfo::CalculateProjectionMatrix
          (FMinimalViewInfo *this,TMatrix<double> *__return_storage_ptr__)

{
  uchar uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  fVar3 = __real_3f000000;
  fVar2 = __real_3f800000;
  uVar1 = (this->ProjectionMode).Value;
  if (uVar1 == '\x01') {
    fVar4 = this->OrthoWidth * __real_3f000000;
    dVar8 = (double)(__real_3f800000 / (this->OrthoFarClipPlane - this->OrthoNearClipPlane));
    uVar13 = SUB84(__real_3ff0000000000000,0);
    uVar14 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar10 = (double)fVar4;
    dVar5 = (double)((__real_3f800000 / this->AspectRatio) * fVar4);
    dVar9 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar8 = __real_3ff0000000000000 -
            (double)(float)((uint)this->OrthoNearClipPlane ^ __xmm_80000000800000008000000080000000)
            * dVar8;
    dVar6 = __real_3ff0000000000000;
    if (dVar5 != 0.0) {
      dVar6 = __real_3ff0000000000000 / dVar5;
    }
    dVar5 = __real_3ff0000000000000;
    if (dVar10 != 0.0) {
      dVar5 = __real_3ff0000000000000 / dVar10;
    }
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    fVar4 = this->PerspectiveNearClipPlane;
    if (this->PerspectiveNearClipPlane <= 0.0) {
      fVar4 = GNearClippingPlane;
    }
    fVar7 = this->FOV;
    if (this->FOV <= __real_3a83126f) {
      fVar7 = __real_3a83126f;
    }
    dVar5 = tan((double)(fVar7 * __real_3c0efa36));
    uVar13 = 0;
    uVar14 = 0;
    uVar11 = SUB84(__real_3ff0000000000000,0);
    uVar12 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar5 = __real_3ff0000000000000 / dVar5;
    dVar8 = (double)fVar4;
    dVar6 = (double)this->AspectRatio * dVar5;
    dVar9 = 0.0;
  }
  dVar10 = __real_3ff0000000000000;
  __return_storage_ptr__->M[0][0] = dVar5;
  __return_storage_ptr__->M[0][1] = 0.0;
  __return_storage_ptr__->M[0][2] = 0.0;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][0] = 0.0;
  __return_storage_ptr__->M[1][1] = dVar6;
  __return_storage_ptr__->M[1][2] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][0] = 0.0;
  __return_storage_ptr__->M[2][1] = 0.0;
  __return_storage_ptr__->M[2][2] = dVar9;
  __return_storage_ptr__->M[2][3] = (double)CONCAT44(uVar12,uVar11);
  __return_storage_ptr__->M[3][0] = 0.0;
  __return_storage_ptr__->M[3][1] = 0.0;
  __return_storage_ptr__->M[3][2] = dVar8;
  __return_storage_ptr__->M[3][3] = (double)CONCAT44(uVar14,uVar13);
  dVar8 = (this->OffCenterProjectionOffset).field0_0x0._s_0.X;
  if ((dVar8 != 0.0) || ((this->OffCenterProjectionOffset).field0_0x0._s_0.Y != 0.0)) {
    fVar4 = (float)(dVar8 - dVar10);
    fVar7 = (float)((this->OffCenterProjectionOffset).field0_0x0._s_0.Y - dVar10);
    dVar5 = (double)(fVar4 * __real_bf000000 - (fVar4 * fVar3 + fVar2));
    dVar8 = (double)(fVar7 * __real_bf000000 - (fVar7 * fVar3 + fVar2));
    if (uVar1 == '\x01') {
      __return_storage_ptr__->M[3][0] = dVar5;
      __return_storage_ptr__->M[3][1] = dVar8;
    }
    else {
      __return_storage_ptr__->M[2][0] = dVar5;
      __return_storage_ptr__->M[2][1] = dVar8;
    }
  }
  return __return_storage_ptr__;
}

// CalculateProjectionMatrixGivenView @ 1476f5460

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
FMinimalViewInfo::CalculateProjectionMatrixGivenView
          (FMinimalViewInfo *param_1,TEnumAsByte<EAspectRatioAxisConstraint> param_2,
          FViewport *param_3,FSceneViewProjectionData *param_4)

{
  TIntRect<int> local_18;
  
  FViewport::CalculateViewExtents
            (param_3,&local_18,
             (((param_1->AsymmetricCropFraction).field0_0x0._s_0.Y +
              (param_1->AsymmetricCropFraction).field0_0x0._s_0.X) /
             ((param_1->AsymmetricCropFraction).field0_0x0._s_0.W +
             (param_1->AsymmetricCropFraction).field0_0x0._s_0.Z)) * param_1->AspectRatio,
             &param_4->ViewRect);
  CalculateProjectionMatrixGivenViewRectangle(param_1,param_2,&local_18,param_4);
  return;
}

// CalculateProjectionMatrixGivenViewRectangle @ 1476f54e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
FMinimalViewInfo::CalculateProjectionMatrixGivenViewRectangle
          (FMinimalViewInfo *param_1,TEnumAsByte<EAspectRatioAxisConstraint> param_2,
          TIntRect<int> *param_3,FSceneViewProjectionData *param_4)

{
  uchar uVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  TConsoleVariableData<bool> *pTVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  longlong lVar9;
  TMatrix<double> *pTVar10;
  TReversedZOrthoMatrix<double> *pTVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float local_res8 [2];
  float local_1a8 [4];
  TMatrix<double> local_198;
  TReversedZOrthoMatrix<double> local_118;
  
  pTVar6 = CVarDebugForceAllCamerasToOrtho.Ref;
  bVar8 = IsInParallelGameThread();
  lVar14 = 0;
  if (bVar8) {
LAB_1476f5543:
    lVar9 = lVar14;
  }
  else {
    bVar8 = IsInGameThread();
    lVar9 = 1;
    if (bVar8) goto LAB_1476f5543;
  }
  if (pTVar6->ShadowedValue[lVar9] != false) {
    (param_1->ProjectionMode).Value = '\x01';
    pTVar7 = CVarDebugForceCameraOrthoWidth.Ref;
    bVar8 = IsInParallelGameThread();
    if (bVar8) {
LAB_1476f557e:
      lVar9 = lVar14;
    }
    else {
      bVar8 = IsInGameThread();
      lVar9 = 4;
      if (bVar8) goto LAB_1476f557e;
    }
    param_1->OrthoWidth = *(float *)((longlong)pTVar7->ShadowedValue + lVar9);
    pTVar6 = CVarDebugForceUseOrthoAutoPlanes.Ref;
    bVar8 = IsInParallelGameThread();
    if ((bVar8) || (bVar8 = IsInGameThread(), lVar9 = 1, bVar8)) {
      lVar9 = lVar14;
    }
    param_1->bAutoCalculateOrthoPlanes = pTVar6->ShadowedValue[lVar9];
    pTVar7 = CVarDebugForceCameraOrthoNearPlane.Ref;
    bVar8 = IsInParallelGameThread();
    if (bVar8) {
LAB_1476f55c7:
      lVar9 = lVar14;
    }
    else {
      bVar8 = IsInGameThread();
      lVar9 = 4;
      if (bVar8) goto LAB_1476f55c7;
    }
    param_1->OrthoNearClipPlane = *(float *)((longlong)pTVar7->ShadowedValue + lVar9);
    pTVar7 = CVarDebugForceCameraOrthoFarPlane.Ref;
    bVar8 = IsInParallelGameThread();
    if ((bVar8) || (bVar8 = IsInGameThread(), lVar9 = 4, bVar8)) {
      lVar9 = lVar14;
    }
    param_1->OrthoFarClipPlane = *(float *)((longlong)pTVar7->ShadowedValue + lVar9);
  }
  uVar1 = (param_1->ProjectionMode).Value;
  if (uVar1 == '\x01') {
    AutoCalculateOrthoPlanes(param_1,param_4);
  }
  pTVar6 = CVarUseLegacyMaintainYFOV.Ref;
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  dVar3 = __real_3ff0000000000000;
  if (param_1->bConstrainAspectRatio != 0) {
    (param_4->ConstrainedViewRect).field0_0x0._s_0.Min.field0_0x0 =
         (param_3->field0_0x0)._s_0.Min.field0_0x0;
    (param_4->ConstrainedViewRect).field0_0x0._s_0.Max.field0_0x0 =
         (param_3->field0_0x0)._s_0.Max.field0_0x0;
    if (uVar1 == '\x01') {
      FSceneViewProjectionData::UpdateOrthoPlanes(param_4,param_1);
    }
    pTVar10 = CalculateProjectionMatrix(param_1,&local_198);
    dVar17 = pTVar10->M[0][1];
    (param_4->ProjectionMatrix).M[0][0] = pTVar10->M[0][0];
    (param_4->ProjectionMatrix).M[0][1] = dVar17;
    dVar17 = pTVar10->M[0][3];
    (param_4->ProjectionMatrix).M[0][2] = pTVar10->M[0][2];
    (param_4->ProjectionMatrix).M[0][3] = dVar17;
    dVar17 = pTVar10->M[1][1];
    (param_4->ProjectionMatrix).M[1][0] = pTVar10->M[1][0];
    (param_4->ProjectionMatrix).M[1][1] = dVar17;
    dVar17 = pTVar10->M[1][3];
    (param_4->ProjectionMatrix).M[1][2] = pTVar10->M[1][2];
    (param_4->ProjectionMatrix).M[1][3] = dVar17;
    dVar17 = pTVar10->M[2][1];
    (param_4->ProjectionMatrix).M[2][0] = pTVar10->M[2][0];
    (param_4->ProjectionMatrix).M[2][1] = dVar17;
    dVar17 = pTVar10->M[2][3];
    (param_4->ProjectionMatrix).M[2][2] = pTVar10->M[2][2];
    (param_4->ProjectionMatrix).M[2][3] = dVar17;
    dVar17 = pTVar10->M[3][1];
    (param_4->ProjectionMatrix).M[3][0] = pTVar10->M[3][0];
    (param_4->ProjectionMatrix).M[3][1] = dVar17;
    dVar17 = pTVar10->M[3][3];
    (param_4->ProjectionMatrix).M[3][2] = pTVar10->M[3][2];
    (param_4->ProjectionMatrix).M[3][3] = dVar17;
    goto LAB_1476f59bc;
  }
  iVar12 = *(int *)((longlong)&(param_4->ViewRect).field0_0x0 + 8) -
           *(int *)&(param_4->ViewRect).field0_0x0;
  iVar13 = *(int *)((longlong)&(param_4->ViewRect).field0_0x0 + 0xc) -
           *(int *)((longlong)&(param_4->ViewRect).field0_0x0 + 4);
  if ((param_1->AspectRatioAxisConstraint).bIsSet != false) {
    param_2.Value = (uchar)(param_1->AspectRatioAxisConstraint).TypedValue;
  }
  if (((iVar13 < iVar12) && (param_2.Value == '\x02')) || (param_2.Value == '\x01')) {
    bVar8 = true;
    fVar16 = (float)iVar12 / (float)iVar13;
    fVar15 = __real_3f800000;
  }
  else {
    bVar8 = false;
    fVar15 = (float)iVar13 / (float)iVar12;
    fVar16 = __real_3f800000;
  }
  if (uVar1 == '\x01') {
    local_1a8[0] = param_1->OrthoFarClipPlane;
    local_res8[0] = param_1->OrthoNearClipPlane;
    fVar19 = param_1->OrthoWidth * __real_3f000000;
    fVar15 = fVar19 / fVar15;
    FSceneViewProjectionData::UpdateOrthoPlanes
              (param_4,local_res8,local_1a8,fVar15,param_1->bUseCameraHeightAsViewTarget);
    pTVar11 = UE::Math::TReversedZOrthoMatrix<double>::TReversedZOrthoMatrix<double>
                        (&local_118,(double)fVar15,(double)(fVar19 / fVar16),
                         (double)(fVar4 / (local_1a8[0] - local_res8[0])),
                         (double)(float)((uint)local_res8[0] ^
                                        __xmm_80000000800000008000000080000000));
    dVar17 = *(double *)&pTVar11->field_0x8;
    (param_4->ProjectionMatrix).M[0][0] = *(double *)pTVar11;
    (param_4->ProjectionMatrix).M[0][1] = dVar17;
    dVar17 = *(double *)&pTVar11->field_0x18;
    (param_4->ProjectionMatrix).M[0][2] = *(double *)&pTVar11->field_0x10;
    (param_4->ProjectionMatrix).M[0][3] = dVar17;
    dVar17 = *(double *)&pTVar11->field_0x28;
    (param_4->ProjectionMatrix).M[1][0] = *(double *)&pTVar11->field_0x20;
    (param_4->ProjectionMatrix).M[1][1] = dVar17;
    dVar17 = *(double *)&pTVar11->field_0x38;
    (param_4->ProjectionMatrix).M[1][2] = *(double *)&pTVar11->field_0x30;
    (param_4->ProjectionMatrix).M[1][3] = dVar17;
    dVar17 = *(double *)&pTVar11->field_0x48;
    (param_4->ProjectionMatrix).M[2][0] = *(double *)&pTVar11->field_0x40;
    (param_4->ProjectionMatrix).M[2][1] = dVar17;
    dVar17 = *(double *)&pTVar11->field_0x58;
    (param_4->ProjectionMatrix).M[2][2] = *(double *)&pTVar11->field_0x50;
    (param_4->ProjectionMatrix).M[2][3] = dVar17;
    dVar17 = *(double *)&pTVar11->field_0x68;
    (param_4->ProjectionMatrix).M[3][0] = *(double *)&pTVar11->field_0x60;
    (param_4->ProjectionMatrix).M[3][1] = dVar17;
    dVar17 = *(double *)&pTVar11->field_0x78;
    (param_4->ProjectionMatrix).M[3][2] = *(double *)&pTVar11->field_0x70;
    (param_4->ProjectionMatrix).M[3][3] = dVar17;
    goto LAB_1476f59bc;
  }
  if ((bVar8) || (param_1->AspectRatio == 0.0)) {
LAB_1476f58d2:
    fVar19 = param_1->FOV;
    if (param_1->FOV <= __real_3a83126f) {
      fVar19 = __real_3a83126f;
    }
    fVar19 = fVar19 * __real_3c0efa36;
  }
  else {
    bVar8 = IsInParallelGameThread();
    if ((!bVar8) &&
       ((bVar8 = IsInGameThread(), !bVar8 &&
        (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar8)))) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pTVar6->ShadowedValue[0] != false) goto LAB_1476f58d2;
    fVar19 = param_1->FOV;
    if (param_1->FOV <= __real_3a83126f) {
      fVar19 = __real_3a83126f;
    }
    fVar19 = tanf(fVar19 * __real_3c0efa35);
    fVar19 = atanf(fVar19 / param_1->AspectRatio);
  }
  fVar18 = param_1->PerspectiveNearClipPlane;
  if (param_1->PerspectiveNearClipPlane <= 0.0) {
    fVar18 = GNearClippingPlane;
  }
  dVar17 = tan((double)fVar19);
  (param_4->ProjectionMatrix).M[0][0] = (double)fVar15 * (dVar3 / dVar17);
  (param_4->ProjectionMatrix).M[0][1] = 0.0;
  (param_4->ProjectionMatrix).M[0][2] = 0.0;
  (param_4->ProjectionMatrix).M[0][3] = 0.0;
  (param_4->ProjectionMatrix).M[1][0] = 0.0;
  (param_4->ProjectionMatrix).M[1][1] = (double)fVar16 * (dVar3 / dVar17);
  (param_4->ProjectionMatrix).M[1][2] = 0.0;
  (param_4->ProjectionMatrix).M[1][3] = 0.0;
  (param_4->ProjectionMatrix).M[2][0] = 0.0;
  (param_4->ProjectionMatrix).M[2][1] = 0.0;
  (param_4->ProjectionMatrix).M[2][2] = 0.0;
  (param_4->ProjectionMatrix).M[2][3] = 1.0;
  (param_4->ProjectionMatrix).M[3][0] = 0.0;
  (param_4->ProjectionMatrix).M[3][1] = 0.0;
  (param_4->ProjectionMatrix).M[3][2] = (double)fVar18;
  (param_4->ProjectionMatrix).M[3][3] = 0.0;
LAB_1476f59bc:
  dVar17 = (param_1->OffCenterProjectionOffset).field0_0x0._s_0.X;
  if ((dVar17 != 0.0) || ((param_1->OffCenterProjectionOffset).field0_0x0._s_0.Y != 0.0)) {
    fVar15 = (float)(dVar17 - dVar3);
    fVar16 = (float)((param_1->OffCenterProjectionOffset).field0_0x0._s_0.Y - dVar3);
    dVar17 = (double)(fVar15 * __real_bf000000 - (fVar15 * fVar5 + fVar4));
    dVar3 = (double)(fVar16 * __real_bf000000 - (fVar16 * fVar5 + fVar4));
    if (uVar1 == '\x01') {
      (param_4->ProjectionMatrix).M[3][0] = dVar17;
      (param_4->ProjectionMatrix).M[3][1] = dVar3;
    }
    else {
      (param_4->ProjectionMatrix).M[2][0] = dVar17;
      (param_4->ProjectionMatrix).M[2][1] = dVar3;
    }
  }
  return;
}

// ClearOverscan @ 1476f7510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall FMinimalViewInfo::ClearOverscan(FMinimalViewInfo *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TVector4<float>_u_0 local_58 [5];
  
  fVar2 = __real_3f800000;
  fVar3 = this->Overscan;
  if ((0.0 < fVar3) &&
     (fVar4 = fVar3 / (fVar3 + __real_3f800000),
     __real_322bcc77 < (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar6 = __real_3f800000 - fVar4;
    this->Overscan = fVar6 * fVar3 - fVar4;
    fVar3 = tanf(this->FOV * __real_3c0efa35);
    fVar3 = atanf(fVar3 * fVar6);
    this->FOV = fVar3 * ___real_42e52ee0;
    this->OrthoWidth = fVar6 * this->OrthoWidth;
  }
  fVar3 = (this->AsymmetricOverscan).field0_0x0._s_0.X;
  fVar4 = (this->AsymmetricOverscan).field0_0x0._s_0.Y;
  fVar6 = (this->AsymmetricOverscan).field0_0x0._s_0.W;
  fVar1 = (this->AsymmetricOverscan).field0_0x0._s_0.Z;
  if (0.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1 + fVar6 * fVar6)) {
    fVar5 = fVar2 / (fVar4 + fVar3 + __real_40000000);
    local_58[0]._0_4_ = ((fVar4 - fVar3) + __real_40000000) * fVar5 - fVar2;
    local_58[0]._4_4_ = ((fVar3 - fVar4) + __real_40000000) * fVar5 - fVar2;
    fVar3 = fVar2 / (fVar6 + fVar1 + __real_40000000);
    local_58[0]._8_4_ = ((fVar6 - fVar1) + __real_40000000) * fVar3 - fVar2;
    local_58[0]._12_4_ = ((fVar1 - fVar6) + __real_40000000) * fVar3 - fVar2;
    ApplyAsymmetricOverscan(this,(TVector4<float> *)&local_58[0]._s_0,false,false);
  }
  this->OverscanResolutionFraction = 1.0;
  this->CropFraction = 1.0;
  (this->AsymmetricCropFraction).field0_0x0._s_0.X = 1.0;
  (this->AsymmetricCropFraction).field0_0x0._s_0.Y = 1.0;
  (this->AsymmetricCropFraction).field0_0x0._s_0.Z = 1.0;
  (this->AsymmetricCropFraction).field0_0x0._s_0.W = 1.0;
  return;
}

// Equals @ 147703950

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall FMinimalViewInfo::Equals(FMinimalViewInfo *this,FMinimalViewInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((((((param_1->Location).field0_0x0._s_0.X == (this->Location).field0_0x0._s_0.X) &&
        ((param_1->Location).field0_0x0._s_0.Y == (this->Location).field0_0x0._s_0.Y)) &&
       ((param_1->Location).field0_0x0._s_0.Z == (this->Location).field0_0x0._s_0.Z)) &&
      ((((param_1->Rotation).Pitch == (this->Rotation).Pitch &&
        ((param_1->Rotation).Yaw == (this->Rotation).Yaw)) &&
       (((param_1->Rotation).Roll == (this->Rotation).Roll &&
        ((param_1->FOV == this->FOV && (param_1->FirstPersonFOV == this->FirstPersonFOV)))))))) &&
     ((param_1->FirstPersonScale == this->FirstPersonScale &&
      (((param_1->OrthoWidth == this->OrthoWidth &&
        (param_1->OrthoNearClipPlane == this->OrthoNearClipPlane)) &&
       (param_1->OrthoFarClipPlane == this->OrthoFarClipPlane)))))) {
    if (((this->PerspectiveNearClipPlane == param_1->PerspectiveNearClipPlane) ||
        ((this->PerspectiveNearClipPlane <= 0.0 && (param_1->PerspectiveNearClipPlane <= 0.0)))) &&
       (param_1->AspectRatio == this->AspectRatio)) {
      uVar1 = *(undefined4 *)&this->field_0x68;
      uVar2 = *(undefined4 *)&param_1->field_0x68;
      if (((((ZPULL(uVar1,0,1) ^ ZPULL(uVar2,0,1)) & 1) == 0) && (((uVar1 ^ uVar2) & 2) == 0)) &&
         ((((uVar1 ^ uVar2) & 4) == 0 &&
          ((((this->ProjectionMode).Value == (param_1->ProjectionMode).Value &&
            ((param_1->OffCenterProjectionOffset).field0_0x0._s_0.X ==
             (this->OffCenterProjectionOffset).field0_0x0._s_0.X)) &&
           ((param_1->OffCenterProjectionOffset).field0_0x0._s_0.Y ==
            (this->OffCenterProjectionOffset).field0_0x0._s_0.Y)))))) {
        return true;
      }
    }
  }
  return false;
}

// TransformWorldToFirstPerson @ 147730a60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TVector<double> * __thiscall
FMinimalViewInfo::TransformWorldToFirstPerson
          (FMinimalViewInfo *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TVector<double>_u_0 *pTVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88 [5];
  
  if ((this->ProjectionMode).Value == '\0') {
    UE::Math::TRotator<double>::Vector(&this->Rotation,(TVector<double> *)&local_a0._s_0);
    dVar1 = (this->Location).field0_0x0._s_0.X;
    dVar5 = (param_1->field0_0x0)._s_0.X - dVar1;
    dVar2 = (this->Location).field0_0x0._s_0.Z;
    dVar8 = (param_1->field0_0x0)._s_0.Z - dVar2;
    dVar3 = (this->Location).field0_0x0._s_0.Y;
    dVar7 = (param_1->field0_0x0)._s_0.Y - dVar3;
    dVar6 = dVar7 * local_a0._s_0.Y + dVar5 * local_a0._s_0.X + dVar8 * local_a0._s_0.Z;
    fVar10 = tanf(this->FOV * __real_3c0efa35);
    fVar11 = tanf(this->FirstPersonFOV * __real_3c0efa35);
    pTVar9 = local_88;
    if (!param_2) {
      pTVar9 = &local_a0;
    }
    dVar12 = (double)(fVar10 / fVar11 - __real_3f800000);
    dVar4 = (double)this->FirstPersonScale;
    local_88[0]._0_8_ = (dVar5 - dVar6 * local_a0._s_0.X) * dVar12 + dVar5;
    local_88[0]._16_8_ = (dVar8 - dVar6 * local_a0._s_0.Z) * dVar12 + dVar8;
    local_88[0]._8_8_ = (dVar7 - dVar6 * local_a0._s_0.Y) * dVar12 + dVar7;
    local_a0._s_0.X = (double)local_88[0]._0_8_ * dVar4;
    local_a0._s_0.Z = (double)local_88[0]._16_8_ * dVar4;
    local_a0._s_0.Y = (double)local_88[0]._8_8_ * dVar4;
    dVar5 = pTVar9->XYZ[2];
    dVar6 = pTVar9->XYZ[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 + (pTVar9->_s_0).X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 + dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 + dVar5;
  }
  else {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  return __return_storage_ptr__;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 29

// StaticStruct @ 14d56b7a0

UScriptStruct * __cdecl FCameraPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraPose.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraPose,(UObject *)pUVar1,L"CameraPose");
  }
  return Z_Registration_Info_UScriptStruct_FCameraPose.OuterSingleton;
}

// FCameraPose @ 14d58cd80

FCameraPose * __thiscall FCameraPose::FCameraPose(FCameraPose *this)

{
  undefined1 *puVar1;
  
  (this->ChangedFlags).ProjectionMode = false;
  (this->Location).field0_0x0._s_0.X = 0.0;
  this->TargetDistance = 1000.0;
  (this->Location).field0_0x0._s_0.Y = 0.0;
  (this->Location).field0_0x0._s_0.Z = 0.0;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  this->FieldOfView = -1.0;
  this->FocalLength = 35.0;
  this->OrthographicWidth = 1536.0;
  this->Aperture = 2.8;
  this->ShutterSpeed = 60.0;
  this->FocusDistance = -1.0;
  this->SensorWidth = 24.89;
  this->SensorHeight = 18.67;
  this->SensorHorizontalOffset = 0.0;
  this->SensorVerticalOffset = 0.0;
  this->ISO = 100.0;
  this->SqueezeFactor = 1.0;
  this->Overscan = 0.0;
  this->DiaphragmBladeCount = 8;
  this->NearClippingPlane = 10.0;
  this->FarClippingPlane = -1.0;
  this->PhysicalCameraBlendWeight = 0.0;
  this->EnablePhysicalCamera = false;
  this->ConstrainAspectRatio = false;
  this->OverrideAspectRatioAxisConstraint = false;
  this->AspectRatioAxisConstraint = '\0';
  *(undefined4 *)&this->ProjectionMode = 0;
  return this;
}

// ApplyPhysicalCameraSettings @ 14d59a230

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
FCameraPose::ApplyPhysicalCameraSettings
          (FCameraPose *this,FPostProcessSettings *param_1,bool param_2)

{
  byte bVar1;
  float fVar2;
  
  if ((this->EnablePhysicalCamera != false) && (0.0 < this->PhysicalCameraBlendWeight)) {
    bVar1 = param_1->field_0x8;
    if ((!(bool)param_1->bOverride_CameraISO) || (param_2)) {
      bVar1 = bVar1 | 0x80;
      param_1->field_0x8 = bVar1;
      param_1->CameraISO =
           (this->ISO - param_1->CameraISO) * this->PhysicalCameraBlendWeight + param_1->CameraISO;
    }
    if (((bVar1 & 0x40) == 0) || (param_2)) {
      param_1->field_0x8 = bVar1 | 0x40;
      param_1->CameraShutterSpeed =
           (this->ShutterSpeed - param_1->CameraShutterSpeed) * this->PhysicalCameraBlendWeight +
           param_1->CameraShutterSpeed;
    }
    bVar1 = param_1->field_0x1a;
    if ((param_1->bOverride_DepthOfFieldFstop == '\0') || (param_2)) {
      bVar1 = bVar1 | 0x10;
      param_1->field_0x1a = bVar1;
      param_1->DepthOfFieldFstop =
           (this->Aperture - param_1->DepthOfFieldFstop) * this->PhysicalCameraBlendWeight +
           param_1->DepthOfFieldFstop;
    }
    if (((bVar1 & 0x40) == 0) || (param_2)) {
      bVar1 = bVar1 | 0x40;
      param_1->field_0x1a = bVar1;
      param_1->DepthOfFieldBladeCount =
           (int)((float)(this->DiaphragmBladeCount - param_1->DepthOfFieldBladeCount) *
                 this->PhysicalCameraBlendWeight + (float)param_1->DepthOfFieldBladeCount);
    }
    if (((bVar1 & 0x20) == 0) || (param_2)) {
      bVar1 = bVar1 | 0x20;
      param_1->field_0x1a = bVar1;
      param_1->DepthOfFieldMinFstop =
           (GGameplayCamerasDefaultMinFstop - param_1->DepthOfFieldMinFstop) *
           this->PhysicalCameraBlendWeight + param_1->DepthOfFieldMinFstop;
    }
    if (((bVar1 & 8) == 0) || (param_2)) {
      bVar1 = bVar1 | 8;
      param_1->field_0x1a = bVar1;
      param_1->DepthOfFieldFocalDistance =
           (this->FocusDistance - param_1->DepthOfFieldFocalDistance) *
           this->PhysicalCameraBlendWeight + param_1->DepthOfFieldFocalDistance;
    }
    fVar2 = this->Overscan + __real_3f800000;
    if ((-1 < (char)bVar1) || (param_2)) {
      param_1->field_0x1a = bVar1 | 0x80;
      param_1->DepthOfFieldSensorWidth =
           (fVar2 * this->SensorWidth - param_1->DepthOfFieldSensorWidth) *
           this->PhysicalCameraBlendWeight + param_1->DepthOfFieldSensorWidth;
    }
    if ((param_1->bOverride_DepthOfFieldSqueezeFactor == 0) || (param_2)) {
      param_1->field_0x1b = param_1->field_0x1b | 1;
      param_1->DepthOfFieldSqueezeFactor =
           (this->SqueezeFactor - param_1->DepthOfFieldSqueezeFactor) *
           this->PhysicalCameraBlendWeight + param_1->DepthOfFieldSqueezeFactor;
    }
    return true;
  }
  return false;
}

// ClearAllChangedFlags @ 14d59be20

void __thiscall FCameraPose::ClearAllChangedFlags(FCameraPose *this)

{
  undefined1 *puVar1;
  FCameraPoseFlags *pFVar2;
  
  (this->ChangedFlags).ProjectionMode = false;
  pFVar2 = &this->ChangedFlags;
  pFVar2->Location = false;
  pFVar2->NearClippingPlane = false;
  pFVar2->PhysicalCameraBlendWeight = false;
  pFVar2->DiaphragmBladeCount = false;
  pFVar2->Overscan = false;
  pFVar2->SqueezeFactor = false;
  pFVar2->ISO = false;
  pFVar2->SensorVerticalOffset = false;
  pFVar2->SensorHorizontalOffset = false;
  pFVar2->SensorHeight = false;
  pFVar2->SensorWidth = false;
  pFVar2->FocusDistance = false;
  pFVar2->ShutterSpeed = false;
  pFVar2->Aperture = false;
  pFVar2->TargetDistance = false;
  pFVar2->Rotation = false;
  puVar1 = &(this->ChangedFlags).field_0x2;
  (this->ChangedFlags).FarClippingPlane = false;
  (this->ChangedFlags).AspectRatioAxisConstraint = false;
  (this->ChangedFlags).OverrideAspectRatioAxisConstraint = false;
  (this->ChangedFlags).ConstrainAspectRatio = false;
  (this->ChangedFlags).EnablePhysicalCamera = false;
  (this->ChangedFlags).FocalLength = false;
  (this->ChangedFlags).FieldOfView = false;
  (this->ChangedFlags).OrthographicWidth = false;
  return;
}

// GetAimDir @ 14d5a5e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
FCameraPose::GetAimDir(FCameraPose *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689518;
  local_28._s_0.Z = 0.0;
  UE::Math::TRotator<double>::RotateVector
            (&this->Rotation,__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetAimRay @ 14d5a5ed0

TRay<double> * __thiscall
FCameraPose::GetAimRay(FCameraPose *this,TRay<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double> *pTVar4;
  double dVar5;
  TVector<double>_u_0 local_48;
  TVector<double> local_30;
  
  local_48._s_0.X = this->TargetDistance;
  local_48._s_0.Y = 0.0;
  local_48._s_0.Z = 0.0;
  pTVar4 = UE::Math::TRotator<double>::RotateVector
                     (&this->Rotation,&local_30,(TVector<double> *)&local_48._s_0);
  dVar1 = (this->Location).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (this->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (this->Location).field0_0x0._s_0.Z;
  dVar1 = (pTVar4->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = dVar1;
  dVar1 = (pTVar4->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = dVar1;
  dVar2 = (__return_storage_ptr__->Direction).field0_0x0._s_0.X;
  dVar3 = (__return_storage_ptr__->Direction).field0_0x0._s_0.Y;
  dVar5 = dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
  if (__real_3e45798ee0000000 < dVar5) {
    dVar5 = __real_3ff0000000000000 / SQRT(dVar5);
    (__return_storage_ptr__->Direction).field0_0x0._s_0.X = dVar2 * dVar5;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = dVar3 * dVar5;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = dVar1 * dVar5;
  }
  return __return_storage_ptr__;
}

// GetDefaultSensorSize @ 14d5a7a00

void __cdecl FCameraPose::GetDefaultSensorSize(float *param_1,float *param_2)

{
  *param_1 = 24.89;
  *param_2 = 18.67;
  return;
}

// GetEffectiveFieldOfView @ 14d5a7c20

double __thiscall FCameraPose::GetEffectiveFieldOfView(FCameraPose *this,bool param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = __real_3f800000;
  if (param_1) {
    fVar1 = this->Overscan;
  }
  dVar2 = GetEffectiveFieldOfView
                    (this->FocalLength,this->FieldOfView,this->SensorWidth,this->SensorHeight,
                     this->SqueezeFactor,fVar1);
  return dVar2;
}

// GetEffectiveFieldOfView @ 14d5a7c70

/* WARNING: Enum "Type": Some values do not have unique names */

double __cdecl
FCameraPose::GetEffectiveFieldOfView
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  double dVar1;
  double dVar2;
  
  if (0.0 < param_1) {
    if ((0.0 < param_2) && (GEmitFocalLengthPrioritizationWarning)) {
      if (2 < (byte)LogCameraSystem._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      }
      GEmitFocalLengthPrioritizationWarning = false;
    }
  }
  else if (0.0 >= param_2) {
    param_1 = __real_420c0000;
    if (GEmitZeroFocalLenthAndFieldOfViewWarning) {
      if (2 < (byte)LogCameraSystem._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      }
      GEmitZeroFocalLenthAndFieldOfViewWarning = false;
      param_1 = __real_420c0000;
    }
    goto LAB_14d5a7d22;
  }
  if (param_1 <= 0.0) {
    return (double)param_2;
  }
LAB_14d5a7d22:
  dVar2 = (double)(param_3 * param_5);
  if (((0.0 < param_4) && (dVar1 = (double)(param_3 / param_4), 0.0 < dVar1)) &&
     (dVar1 < (double)param_5 * dVar1)) {
    dVar2 = dVar2 * (dVar1 / ((double)param_5 * dVar1));
  }
  dVar2 = atan(((double)param_6 + __real_3ff0000000000000) * dVar2 *
               (__real_3fe0000000000000 / (double)param_1));
  return dVar2 * __real_405ca5dc1a63c1f8;
}

// GetHorizontalProjectionOffset @ 14d5a85b0

double __thiscall FCameraPose::GetHorizontalProjectionOffset(FCameraPose *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)(this->SqueezeFactor * this->SensorWidth);
  if (((0.0 < this->SensorHeight) &&
      (dVar2 = (double)(this->SensorWidth / this->SensorHeight), 0.0 < dVar2)) &&
     (dVar1 = (double)this->SqueezeFactor * dVar2, dVar2 < dVar1)) {
    dVar3 = dVar3 * (dVar2 / dVar1);
  }
  return ((double)this->SensorHorizontalOffset + (double)this->SensorHorizontalOffset) /
         ((double)(this->Overscan + __real_3f800000) * dVar3);
}

// GetSensorAspectRatio @ 14d5ab270

double __thiscall FCameraPose::GetSensorAspectRatio(FCameraPose *this)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 < this->SensorHeight) {
    dVar1 = (double)(this->SensorWidth / this->SensorHeight);
  }
  return dVar1;
}

// GetSensorAspectRatio @ 14d5ab290

double __cdecl FCameraPose::GetSensorAspectRatio(float param_1,float param_2)

{
  if (0.0 < param_2) {
    return (double)(param_1 / param_2);
  }
  return 0.0;
}

// GetTarget @ 14d5ab540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
FCameraPose::GetTarget(FCameraPose *this,TVector<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  local_30._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_30._s_0.Y = _UNK_150689518;
  local_30._s_0.Z = 0.0;
  UE::Math::TRotator<double>::RotateVector
            (&this->Rotation,(TVector<double> *)&local_48._s_0,(TVector<double> *)&local_30._s_0);
  dVar1 = (this->Location).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       local_48._s_0.X * param_1 + (this->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_48._s_0.Y * param_1 + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       local_48._s_0.Z * param_1 + (this->Location).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetTarget @ 14d5ab5e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
FCameraPose::GetTarget(FCameraPose *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  local_20._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_20._s_0.Y = _UNK_150689518;
  local_20._s_0.Z = 0.0;
  UE::Math::TRotator<double>::RotateVector
            (&this->Rotation,(TVector<double> *)&local_38._s_0,(TVector<double> *)&local_20._s_0);
  dVar1 = this->TargetDistance;
  dVar2 = (this->Location).field0_0x0._s_0.Y;
  dVar3 = (this->Location).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar1 * local_38._s_0.X + (this->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 * local_38._s_0.Y + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * local_38._s_0.Z + dVar3;
  return __return_storage_ptr__;
}

// GetTransform @ 14d5ab7b0

TTransform<double> * __thiscall
FCameraPose::GetTransform(FCameraPose *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  TQuat<double> *pTVar12;
  TQuat<double> local_28;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  dVar10 = (this->Location).field0_0x0._s_0.Y;
  dVar1 = (this->Location).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (this->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  pTVar12 = UE::Math::TRotator<double>::Quaternion(&this->Rotation,&local_28);
  dVar1 = pTVar12->Y;
  dVar10 = pTVar12->Z;
  dVar11 = pTVar12->W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar12->X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar10;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
  return __return_storage_ptr__;
}

// GetVerticalProjectionOffset @ 14d5acf10

double __thiscall FCameraPose::GetVerticalProjectionOffset(FCameraPose *this)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  fVar1 = this->SensorHeight;
  dVar4 = (double)fVar1;
  if (((0.0 < fVar1) && (dVar3 = (double)(this->SensorWidth / fVar1), 0.0 < dVar3)) &&
     (dVar2 = (double)this->SqueezeFactor * dVar3, dVar2 < dVar3)) {
    dVar4 = dVar4 * (dVar2 / dVar3);
  }
  return ((double)this->SensorVerticalOffset + (double)this->SensorVerticalOffset) /
         ((double)(this->Overscan + __real_3f800000) * dVar4);
}

// InternalLerpChanged @ 14d5b17a0

void __thiscall
FCameraPose::InternalLerpChanged
          (FCameraPose *this,FCameraPose *param_1,float param_2,FCameraPoseFlags *param_3,
          bool param_4,FCameraPoseFlags *param_5,bool param_6)

{
  undefined1 *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uchar uVar5;
  int iVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  bool bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  undefined8 in_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  undefined1 local_res18 [8];
  
  fVar2 = __real_3f000000;
  if (param_2 == 0.0) {
    return;
  }
  bVar12 = param_3->Location;
  if (param_2 != __real_3f800000) {
    if (param_4) {
      if (bVar12 == false) goto LAB_14d5b1f0a;
LAB_14d5b1f9f:
      if (!param_3->Rotation) goto LAB_14d5b1fa9;
LAB_14d5b2134:
      if (!param_4) goto LAB_14d5b2139;
      if (!param_3->TargetDistance) goto LAB_14d5b214c;
LAB_14d5b21a0:
      if (!param_3->Aperture) goto LAB_14d5b21a6;
LAB_14d5b21f2:
      if (!param_3->ShutterSpeed) goto LAB_14d5b21f8;
LAB_14d5b2244:
      if (!param_3->FocusDistance) goto LAB_14d5b224a;
LAB_14d5b2296:
      if (!param_3->SensorWidth) goto LAB_14d5b229c;
LAB_14d5b22e8:
      if (!param_3->SensorHeight) goto LAB_14d5b22ee;
LAB_14d5b233f:
      if (!param_3->SensorHorizontalOffset) goto LAB_14d5b234a;
LAB_14d5b2398:
      if (!param_3->SensorVerticalOffset) goto LAB_14d5b23a0;
LAB_14d5b23f1:
      if (!param_3->ISO) goto LAB_14d5b23f9;
LAB_14d5b244a:
      if (!param_3->SqueezeFactor) goto LAB_14d5b2452;
LAB_14d5b24a3:
      if (!param_3->Overscan) goto LAB_14d5b24ab;
LAB_14d5b24fc:
      if (!param_3->DiaphragmBladeCount) goto LAB_14d5b2504;
LAB_14d5b255e:
      if (!param_3->PhysicalCameraBlendWeight) goto LAB_14d5b2566;
LAB_14d5b25b4:
      if (!param_3->NearClippingPlane) goto LAB_14d5b25b9;
LAB_14d5b260a:
      if (!param_3->FarClippingPlane) goto LAB_14d5b2615;
LAB_14d5b2663:
      if (!param_3->OrthographicWidth) goto LAB_14d5b266b;
LAB_14d5b26bd:
      if (param_3->FieldOfView != true || param_3->FocalLength != true) goto LAB_14d5b26ca;
LAB_14d5b288c:
      if (!param_3->EnablePhysicalCamera) goto LAB_14d5b2896;
LAB_14d5b28d6:
      if (!param_3->ConstrainAspectRatio) goto LAB_14d5b28db;
LAB_14d5b291b:
      if (!param_3->OverrideAspectRatioAxisConstraint) goto LAB_14d5b2920;
LAB_14d5b2960:
      if (!param_3->AspectRatioAxisConstraint) goto LAB_14d5b2965;
LAB_14d5b29a2:
      if (param_3->ProjectionMode) {
        return;
      }
    }
    else {
      if (bVar12 != false) {
LAB_14d5b1f0a:
        if ((!param_6) || ((param_1->ChangedFlags).Location)) {
          dVar17 = (this->Location).field0_0x0._s_0.X;
          dVar35 = (this->Location).field0_0x0._s_0.Y;
          dVar28 = (double)param_2;
          dVar29 = ((param_1->Location).field0_0x0._s_0.Z - (this->Location).field0_0x0._s_0.Z) *
                   dVar28 + (this->Location).field0_0x0._s_0.Z;
          dVar17 = ((param_1->Location).field0_0x0._s_0.X - dVar17) * dVar28 + dVar17;
          dVar35 = ((param_1->Location).field0_0x0._s_0.Y - dVar35) * dVar28 + dVar35;
          if ((dVar17 != (this->Location).field0_0x0._s_0.X) ||
             ((dVar35 != (this->Location).field0_0x0._s_0.Y ||
              (dVar29 != (this->Location).field0_0x0._s_0.Z)))) {
            (this->ChangedFlags).Location = true;
            (this->Location).field0_0x0._s_0.X = dVar17;
            (this->Location).field0_0x0._s_0.Y = dVar35;
            (this->Location).field0_0x0._s_0.Z = dVar29;
          }
        }
        param_5->Location = true;
        if (param_4) goto LAB_14d5b1f9f;
      }
      if ((param_3->Rotation) || (param_4)) {
LAB_14d5b1fa9:
        if ((!param_6) || ((param_1->ChangedFlags).Rotation)) {
          auVar30._0_8_ = (param_1->Rotation).Roll - (this->Rotation).Roll;
          auVar30._8_8_ = 0;
          dVar29 = (this->Rotation).Pitch;
          dVar34 = (this->Rotation).Yaw;
          dVar39 = (param_1->Rotation).Pitch - dVar29;
          dVar33 = (param_1->Rotation).Yaw - dVar34;
          auVar20._8_4_ = SUB84(dVar33,0);
          auVar20._0_8_ = dVar39;
          auVar20._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
          auVar20 = divpd(auVar20,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
          auVar20 = roundpd(auVar30,auVar20,3);
          dVar17 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
          auVar31._0_8_ = auVar20._0_8_ * dVar17;
          dVar35 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
          auVar31._8_8_ = auVar20._8_8_ * dVar35;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = auVar30._0_8_;
          dVar39 = dVar39 - auVar31._0_8_;
          dVar33 = dVar33 - auVar31._8_8_;
          auVar20 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
          auVar20 = roundpd(auVar31,auVar20,3);
          dVar28 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
          auVar22._8_4_ = SUB84(dVar33,0);
          auVar22._0_8_ = dVar39;
          auVar22._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
          dVar41 = auVar30._0_8_ - auVar20._0_8_ * dVar28;
          dVar42 = 0.0 - auVar20._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
          dVar25 = auVar22._8_8_ + dVar35;
          uVar13 = -(ulonglong)(0.0 <= dVar41);
          uVar15 = -(ulonglong)(0.0 <= dVar42);
          uVar14 = -(ulonglong)(0.0 <= dVar39);
          uVar16 = -(ulonglong)(0.0 <= dVar33);
          auVar32._0_8_ = uVar14 & (ulonglong)dVar39;
          auVar32._8_4_ = (undefined4)(uVar16 & (ulonglong)dVar33);
          auVar32._12_4_ = (undefined4)((uVar16 & (ulonglong)dVar33) >> 0x20);
          auVar38._0_4_ = ~(uint)uVar14 & SUB84(dVar39 + dVar17,0);
          auVar38._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar39 + dVar17) >> 0x20);
          auVar38._8_4_ = ~(uint)uVar16 & SUB84(dVar25,0);
          auVar38._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar25 >> 0x20);
          auVar38 = auVar38 | auVar32;
          auVar36._0_8_ = uVar13 & (ulonglong)dVar41;
          auVar36._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar42);
          auVar36._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar42) >> 0x20);
          auVar23._8_4_ = SUB84(dVar42,0);
          auVar23._0_8_ = dVar41;
          auVar23._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
          dVar25 = auVar23._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
          auVar40._0_4_ = ~(uint)uVar13 & SUB84(dVar41 + dVar28,0);
          auVar40._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar41 + dVar28) >> 0x20);
          auVar40._8_4_ = ~(uint)uVar15 & SUB84(dVar25,0);
          auVar40._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar25 >> 0x20);
          auVar40 = auVar40 | auVar36;
          uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar38._0_8_);
          uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar38._8_8_);
          uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar40._0_8_);
          auVar37._0_8_ = uVar14 & (ulonglong)(auVar38._0_8_ - dVar17);
          uVar13 = uVar16 & (ulonglong)(auVar38._8_8_ - dVar35);
          auVar37._8_4_ = (undefined4)uVar13;
          auVar37._12_4_ = (undefined4)(uVar13 >> 0x20);
          auVar24._0_4_ = ~(uint)uVar14 & auVar38._0_4_;
          auVar24._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar38._4_4_;
          auVar24._8_4_ = ~(uint)uVar16 & auVar38._8_4_;
          auVar24._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar38._12_4_;
          dVar17 = (double)param_2;
          dVar29 = SUB168(auVar37 | auVar24,0) * dVar17 + dVar29;
          dVar34 = SUB168(auVar37 | auVar24,8) * dVar17 + dVar34;
          dVar17 = (double)(uVar15 & (ulonglong)(auVar40._0_8_ - dVar28) |
                           CONCAT44(~(uint)(uVar15 >> 0x20) & auVar40._4_4_,
                                    ~(uint)uVar15 & auVar40._0_4_)) * dVar17 + (this->Rotation).Roll
          ;
          if (((dVar29 != (this->Rotation).Pitch) || (dVar34 != (this->Rotation).Yaw)) ||
             (dVar17 != (this->Rotation).Roll)) {
            (this->ChangedFlags).Rotation = true;
            (this->Rotation).Pitch = dVar29;
            (this->Rotation).Yaw = dVar34;
            (this->Rotation).Roll = dVar17;
          }
        }
        param_5->Rotation = true;
        goto LAB_14d5b2134;
      }
LAB_14d5b2139:
      if ((param_3->TargetDistance) || (param_4)) {
LAB_14d5b214c:
        if ((!param_6) || ((param_1->ChangedFlags).TargetDistance)) {
          dVar17 = this->TargetDistance;
          dVar35 = (param_1->TargetDistance - dVar17) * (double)param_2 + dVar17;
          if (dVar17 != dVar35) {
            (this->ChangedFlags).TargetDistance = true;
            this->TargetDistance = dVar35;
          }
        }
        param_5->TargetDistance = true;
        if (param_4) goto LAB_14d5b21a0;
      }
      if ((param_3->Aperture) || (param_4)) {
LAB_14d5b21a6:
        if ((!param_6) || ((param_1->ChangedFlags).Aperture)) {
          fVar27 = this->Aperture;
          fVar26 = (param_1->Aperture - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).Aperture = true;
            this->Aperture = fVar26;
          }
        }
        param_5->Aperture = true;
        if (param_4) goto LAB_14d5b21f2;
      }
      if ((param_3->ShutterSpeed) || (param_4)) {
LAB_14d5b21f8:
        if ((!param_6) || ((param_1->ChangedFlags).ShutterSpeed)) {
          fVar27 = this->ShutterSpeed;
          fVar26 = (param_1->ShutterSpeed - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).ShutterSpeed = true;
            this->ShutterSpeed = fVar26;
          }
        }
        param_5->ShutterSpeed = true;
        if (param_4) goto LAB_14d5b2244;
      }
      if ((param_3->FocusDistance) || (param_4)) {
LAB_14d5b224a:
        if ((!param_6) || ((param_1->ChangedFlags).FocusDistance)) {
          fVar27 = this->FocusDistance;
          fVar26 = (param_1->FocusDistance - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).FocusDistance = true;
            this->FocusDistance = fVar26;
          }
        }
        param_5->FocusDistance = true;
        if (param_4) goto LAB_14d5b2296;
      }
      if ((param_3->SensorWidth) || (param_4)) {
LAB_14d5b229c:
        if ((!param_6) || ((param_1->ChangedFlags).SensorWidth)) {
          fVar27 = this->SensorWidth;
          fVar26 = (param_1->SensorWidth - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).SensorWidth = true;
            this->SensorWidth = fVar26;
          }
        }
        param_5->SensorWidth = true;
        if (param_4) goto LAB_14d5b22e8;
      }
      if ((param_3->SensorHeight) || (param_4)) {
LAB_14d5b22ee:
        if ((!param_6) || ((param_1->ChangedFlags).SensorHeight)) {
          fVar27 = this->SensorHeight;
          fVar26 = (param_1->SensorHeight - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).SensorHeight = true;
            this->SensorHeight = fVar26;
          }
        }
        param_5->SensorHeight = true;
        if (param_4) goto LAB_14d5b233f;
      }
      if ((param_3->SensorHorizontalOffset) || (param_4)) {
LAB_14d5b234a:
        if ((!param_6) || ((param_1->ChangedFlags).SensorHorizontalOffset)) {
          fVar27 = this->SensorHorizontalOffset;
          fVar26 = (param_1->SensorHorizontalOffset - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).SensorHorizontalOffset = true;
            this->SensorHorizontalOffset = fVar26;
          }
        }
        param_5->SensorHorizontalOffset = true;
        if (param_4) goto LAB_14d5b2398;
      }
      if ((param_3->SensorVerticalOffset) || (param_4)) {
LAB_14d5b23a0:
        if ((!param_6) || ((param_1->ChangedFlags).SensorVerticalOffset)) {
          fVar27 = this->SensorVerticalOffset;
          fVar26 = (param_1->SensorVerticalOffset - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).SensorVerticalOffset = true;
            this->SensorVerticalOffset = fVar26;
          }
        }
        param_5->SensorVerticalOffset = true;
        if (param_4) goto LAB_14d5b23f1;
      }
      if ((param_3->ISO) || (param_4)) {
LAB_14d5b23f9:
        if ((!param_6) || ((param_1->ChangedFlags).ISO)) {
          fVar27 = this->ISO;
          fVar26 = (param_1->ISO - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).ISO = true;
            this->ISO = fVar26;
          }
        }
        param_5->ISO = true;
        if (param_4) goto LAB_14d5b244a;
      }
      if ((param_3->SqueezeFactor) || (param_4)) {
LAB_14d5b2452:
        if ((!param_6) || ((param_1->ChangedFlags).SqueezeFactor)) {
          fVar27 = this->SqueezeFactor;
          fVar26 = (param_1->SqueezeFactor - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).SqueezeFactor = true;
            this->SqueezeFactor = fVar26;
          }
        }
        param_5->SqueezeFactor = true;
        if (param_4) goto LAB_14d5b24a3;
      }
      if ((param_3->Overscan) || (param_4)) {
LAB_14d5b24ab:
        if ((!param_6) || ((param_1->ChangedFlags).Overscan)) {
          fVar27 = this->Overscan;
          fVar26 = (param_1->Overscan - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).Overscan = true;
            this->Overscan = fVar26;
          }
        }
        param_5->Overscan = true;
        if (param_4) goto LAB_14d5b24fc;
      }
      if ((param_3->DiaphragmBladeCount) || (param_4)) {
LAB_14d5b2504:
        if ((!param_6) || ((param_1->ChangedFlags).DiaphragmBladeCount)) {
          iVar6 = this->DiaphragmBladeCount;
          iVar9 = (int)((float)(param_1->DiaphragmBladeCount - iVar6) * param_2 + (float)iVar6);
          if (iVar6 != iVar9) {
            (this->ChangedFlags).DiaphragmBladeCount = true;
            this->DiaphragmBladeCount = iVar9;
          }
        }
        param_5->DiaphragmBladeCount = true;
        if (param_4) goto LAB_14d5b255e;
      }
      if ((param_3->PhysicalCameraBlendWeight) || (param_4)) {
LAB_14d5b2566:
        if ((!param_6) || ((param_1->ChangedFlags).PhysicalCameraBlendWeight)) {
          fVar27 = this->PhysicalCameraBlendWeight;
          fVar26 = (param_1->PhysicalCameraBlendWeight - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).PhysicalCameraBlendWeight = true;
            this->PhysicalCameraBlendWeight = fVar26;
          }
        }
        param_5->PhysicalCameraBlendWeight = true;
        if (param_4) goto LAB_14d5b25b4;
      }
      if ((param_3->NearClippingPlane) || (param_4)) {
LAB_14d5b25b9:
        if ((!param_6) || ((param_1->ChangedFlags).NearClippingPlane)) {
          fVar27 = this->NearClippingPlane;
          fVar26 = (param_1->NearClippingPlane - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).NearClippingPlane = true;
            this->NearClippingPlane = fVar26;
          }
        }
        param_5->NearClippingPlane = true;
        if (param_4) goto LAB_14d5b260a;
      }
      if ((param_3->FarClippingPlane) || (param_4)) {
LAB_14d5b2615:
        if ((!param_6) || ((param_1->ChangedFlags).FarClippingPlane)) {
          fVar27 = this->FarClippingPlane;
          fVar26 = (param_1->FarClippingPlane - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).FarClippingPlane = true;
            this->FarClippingPlane = fVar26;
          }
        }
        param_5->FarClippingPlane = true;
        if (param_4) goto LAB_14d5b2663;
      }
      if ((param_3->OrthographicWidth) || (param_4)) {
LAB_14d5b266b:
        if ((!param_6) || ((param_1->ChangedFlags).OrthographicWidth)) {
          fVar27 = this->OrthographicWidth;
          fVar26 = (param_1->OrthographicWidth - fVar27) * param_2 + fVar27;
          if (fVar27 != fVar26) {
            (this->ChangedFlags).OrthographicWidth = true;
            this->OrthographicWidth = fVar26;
          }
        }
        param_5->OrthographicWidth = true;
        if (param_4) goto LAB_14d5b26bd;
      }
      if (((bool)param_3->FieldOfView || (bool)param_3->FocalLength) || (param_4)) {
LAB_14d5b26ca:
        if (((0.0 < this->FocalLength) && (0.0 < this->FieldOfView)) ||
           ((0.0 < param_1->FocalLength && (0.0 < param_1->FieldOfView)))) {
          `FCameraPose::InternalLerpChanged'::__l265::<lambda_1>::operator()(local_res18);
        }
        if ((!param_6) ||
           ((bool)(param_1->ChangedFlags).FieldOfView || (bool)(param_1->ChangedFlags).FocalLength))
        {
          pfVar11 = &this->FocalLength;
          fVar27 = *pfVar11;
          if ((fVar27 <= 0.0) || (fVar26 = param_1->FocalLength, fVar26 <= 0.0)) {
            pfVar10 = &this->FieldOfView;
            dVar17 = GetEffectiveFieldOfView
                               (fVar27,*pfVar10,this->SensorWidth,this->SensorHeight,
                                this->SqueezeFactor,this->Overscan);
            dVar35 = GetEffectiveFieldOfView
                               (param_1->FocalLength,param_1->FieldOfView,param_1->SensorWidth,
                                param_1->SensorHeight,param_1->SqueezeFactor,param_1->Overscan);
            fVar27 = ((float)dVar35 - (float)dVar17) * param_2 + (float)dVar17;
            if (fVar27 != *pfVar10) {
              (this->ChangedFlags).FieldOfView = true;
              *pfVar10 = fVar27;
            }
            if (__real_bf800000 != *pfVar11) {
              (this->ChangedFlags).FocalLength = true;
              this->FocalLength = -1.0;
            }
          }
          else {
            fVar26 = (fVar26 - fVar27) * param_2 + fVar27;
            if (fVar27 != fVar26) {
              (this->ChangedFlags).FocalLength = true;
              *pfVar11 = fVar26;
            }
          }
          param_5->FieldOfView = true;
          param_5->FocalLength = true;
        }
        if (param_4) goto LAB_14d5b288c;
      }
      if ((param_3->EnablePhysicalCamera) || (param_4)) {
LAB_14d5b2896:
        if (((!param_6) || ((param_1->ChangedFlags).EnablePhysicalCamera)) &&
           ((fVar2 <= param_2 &&
            (bVar12 = param_1->EnablePhysicalCamera, this->EnablePhysicalCamera != bVar12)))) {
          (this->ChangedFlags).EnablePhysicalCamera = true;
          this->EnablePhysicalCamera = bVar12;
        }
        param_5->EnablePhysicalCamera = true;
        if (param_4) goto LAB_14d5b28d6;
      }
      if ((param_3->ConstrainAspectRatio) || (param_4)) {
LAB_14d5b28db:
        if (((!param_6) || ((param_1->ChangedFlags).ConstrainAspectRatio)) &&
           ((fVar2 <= param_2 &&
            (bVar12 = param_1->ConstrainAspectRatio, this->ConstrainAspectRatio != bVar12)))) {
          (this->ChangedFlags).ConstrainAspectRatio = true;
          this->ConstrainAspectRatio = bVar12;
        }
        param_5->ConstrainAspectRatio = true;
        if (param_4) goto LAB_14d5b291b;
      }
      if ((param_3->OverrideAspectRatioAxisConstraint) || (param_4)) {
LAB_14d5b2920:
        if (((!param_6) || ((param_1->ChangedFlags).OverrideAspectRatioAxisConstraint)) &&
           ((fVar2 <= param_2 &&
            (bVar12 = param_1->OverrideAspectRatioAxisConstraint,
            this->OverrideAspectRatioAxisConstraint != bVar12)))) {
          (this->ChangedFlags).OverrideAspectRatioAxisConstraint = true;
          this->OverrideAspectRatioAxisConstraint = bVar12;
        }
        param_5->OverrideAspectRatioAxisConstraint = true;
        if (param_4) goto LAB_14d5b2960;
      }
      if ((param_3->AspectRatioAxisConstraint) || (param_4)) {
LAB_14d5b2965:
        if (((!param_6) || ((param_1->ChangedFlags).AspectRatioAxisConstraint)) &&
           ((fVar2 <= param_2 &&
            (uVar5 = (param_1->AspectRatioAxisConstraint).Value,
            (this->AspectRatioAxisConstraint).Value != uVar5)))) {
          (this->ChangedFlags).AspectRatioAxisConstraint = true;
          (this->AspectRatioAxisConstraint).Value = uVar5;
        }
        param_5->AspectRatioAxisConstraint = true;
        if (param_4) goto LAB_14d5b29a2;
      }
      if ((!param_3->ProjectionMode) && (!param_4)) {
        return;
      }
    }
    if ((((!param_6) || ((param_1->ChangedFlags).ProjectionMode)) && (fVar2 <= param_2)) &&
       (uVar5 = (param_1->ProjectionMode).Value, (this->ProjectionMode).Value != uVar5)) {
      (this->ChangedFlags).ProjectionMode = true;
      (this->ProjectionMode).Value = uVar5;
    }
    param_5->ProjectionMode = true;
    return;
  }
  if (param_4) {
    if (bVar12 == false) goto LAB_14d5b1810;
LAB_14d5b186f:
    if (!param_3->Rotation) goto LAB_14d5b1875;
LAB_14d5b18c7:
    if (!param_4) goto LAB_14d5b18cb;
    if (!param_3->TargetDistance) goto LAB_14d5b18dd;
LAB_14d5b1916:
    if (!param_3->Aperture) goto LAB_14d5b191c;
LAB_14d5b1954:
    if (!param_3->ShutterSpeed) goto LAB_14d5b195a;
LAB_14d5b1992:
    if (!param_3->FocusDistance) goto LAB_14d5b1998;
LAB_14d5b19d0:
    if (!param_3->SensorWidth) goto LAB_14d5b19d6;
LAB_14d5b1a0e:
    if (!param_3->SensorHeight) goto LAB_14d5b1a14;
LAB_14d5b1a51:
    if (!param_3->SensorHorizontalOffset) goto LAB_14d5b1a5c;
LAB_14d5b1a97:
    if (!param_3->SensorVerticalOffset) goto LAB_14d5b1a9f;
LAB_14d5b1add:
    if (!param_3->ISO) goto LAB_14d5b1ae5;
LAB_14d5b1b23:
    if (!param_3->SqueezeFactor) goto LAB_14d5b1b2b;
LAB_14d5b1b69:
    if (!param_3->Overscan) goto LAB_14d5b1b71;
LAB_14d5b1baf:
    if (!param_3->DiaphragmBladeCount) goto LAB_14d5b1bb7;
LAB_14d5b1bf3:
    if (!param_3->PhysicalCameraBlendWeight) goto LAB_14d5b1bfb;
LAB_14d5b1c36:
    if (!param_3->NearClippingPlane) goto LAB_14d5b1c3b;
LAB_14d5b1c78:
    if (!param_3->FarClippingPlane) goto LAB_14d5b1c82;
LAB_14d5b1cbd:
    if (!param_3->OrthographicWidth) goto LAB_14d5b1cc5;
LAB_14d5b1d03:
    if (!param_3->EnablePhysicalCamera) goto LAB_14d5b1d0b;
LAB_14d5b1d48:
    if (!param_3->ConstrainAspectRatio) goto LAB_14d5b1d50;
LAB_14d5b1d8d:
    if (!param_3->OverrideAspectRatioAxisConstraint) goto LAB_14d5b1d95;
LAB_14d5b1dcf:
    if (!param_3->AspectRatioAxisConstraint) goto LAB_14d5b1dd4;
LAB_14d5b1dfd:
    if (!param_4) goto LAB_14d5b1e01;
    if (!param_3->ProjectionMode) goto LAB_14d5b1e17;
LAB_14d5b1e48:
    if (!param_4) goto LAB_14d5b1e4c;
    bVar12 = param_3->FieldOfView == true && param_3->FocalLength == true;
  }
  else {
    if (bVar12 != false) {
LAB_14d5b1810:
      if ((!param_6) || ((param_1->ChangedFlags).Location)) {
        auVar20 = *(undefined1 (*) [16])&(param_1->Location).field0_0x0;
        dVar17 = (param_1->Location).field0_0x0._s_0.Z;
        if ((auVar20._0_8_ != (this->Location).field0_0x0._s_0.X) ||
           ((auVar7._4_8_ = in_XMM0_Qb, auVar7._0_4_ = auVar20._4_4_,
            auVar18._0_8_ = auVar7._0_8_ << 0x20, auVar18._8_4_ = auVar20._8_4_,
            auVar18._12_4_ = auVar20._12_4_, in_XMM0_Qb = auVar20._8_8_,
            auVar18._8_8_ != (this->Location).field0_0x0._s_0.Y ||
            (in_XMM0_Qb = 0, dVar17 != (this->Location).field0_0x0._s_0.Z)))) {
          (this->ChangedFlags).Location = true;
          *(undefined1 (*) [16])&(this->Location).field0_0x0 = auVar20;
          (this->Location).field0_0x0._s_0.Z = dVar17;
        }
      }
      param_5->Location = true;
      if (param_4) goto LAB_14d5b186f;
    }
    if ((param_3->Rotation) || (param_4)) {
LAB_14d5b1875:
      if ((!param_6) || ((param_1->ChangedFlags).Rotation)) {
        uVar3 = (param_1->Rotation).Pitch;
        uVar4 = (param_1->Rotation).Yaw;
        dVar17 = (param_1->Rotation).Roll;
        if ((((double)uVar3 != (this->Rotation).Pitch) ||
            (auVar8._4_8_ = in_XMM0_Qb, auVar8._0_4_ = (int)((ulonglong)uVar3 >> 0x20),
            auVar19._0_8_ = auVar8._0_8_ << 0x20, auVar19._8_4_ = (int)uVar4,
            auVar19._12_4_ = (int)((ulonglong)uVar4 >> 0x20), auVar19._8_8_ != (this->Rotation).Yaw)
            ) || (dVar17 != (this->Rotation).Roll)) {
          (this->ChangedFlags).Rotation = true;
          (this->Rotation).Pitch = (double)uVar3;
          (this->Rotation).Yaw = (double)uVar4;
          (this->Rotation).Roll = dVar17;
        }
      }
      param_5->Rotation = true;
      goto LAB_14d5b18c7;
    }
LAB_14d5b18cb:
    if ((param_3->TargetDistance) || (param_4)) {
LAB_14d5b18dd:
      if (((!param_6) || ((param_1->ChangedFlags).TargetDistance)) &&
         (dVar17 = param_1->TargetDistance, dVar17 != this->TargetDistance)) {
        (this->ChangedFlags).TargetDistance = true;
        this->TargetDistance = dVar17;
      }
      param_5->TargetDistance = true;
      if (param_4) goto LAB_14d5b1916;
    }
    if ((param_3->Aperture) || (param_4)) {
LAB_14d5b191c:
      if (((!param_6) || ((param_1->ChangedFlags).Aperture)) &&
         (fVar2 = param_1->Aperture, fVar2 != this->Aperture)) {
        (this->ChangedFlags).Aperture = true;
        this->Aperture = fVar2;
      }
      param_5->Aperture = true;
      if (param_4) goto LAB_14d5b1954;
    }
    if ((param_3->ShutterSpeed) || (param_4)) {
LAB_14d5b195a:
      if (((!param_6) || ((param_1->ChangedFlags).ShutterSpeed)) &&
         (fVar2 = param_1->ShutterSpeed, fVar2 != this->ShutterSpeed)) {
        (this->ChangedFlags).ShutterSpeed = true;
        this->ShutterSpeed = fVar2;
      }
      param_5->ShutterSpeed = true;
      if (param_4) goto LAB_14d5b1992;
    }
    if ((param_3->FocusDistance) || (param_4)) {
LAB_14d5b1998:
      if (((!param_6) || ((param_1->ChangedFlags).FocusDistance)) &&
         (fVar2 = param_1->FocusDistance, fVar2 != this->FocusDistance)) {
        (this->ChangedFlags).FocusDistance = true;
        this->FocusDistance = fVar2;
      }
      param_5->FocusDistance = true;
      if (param_4) goto LAB_14d5b19d0;
    }
    if ((param_3->SensorWidth) || (param_4)) {
LAB_14d5b19d6:
      if (((!param_6) || ((param_1->ChangedFlags).SensorWidth)) &&
         (fVar2 = param_1->SensorWidth, fVar2 != this->SensorWidth)) {
        (this->ChangedFlags).SensorWidth = true;
        this->SensorWidth = fVar2;
      }
      param_5->SensorWidth = true;
      if (param_4) goto LAB_14d5b1a0e;
    }
    if ((param_3->SensorHeight) || (param_4)) {
LAB_14d5b1a14:
      if (((!param_6) || ((param_1->ChangedFlags).SensorHeight)) &&
         (fVar2 = param_1->SensorHeight, fVar2 != this->SensorHeight)) {
        (this->ChangedFlags).SensorHeight = true;
        this->SensorHeight = fVar2;
      }
      param_5->SensorHeight = true;
      if (param_4) goto LAB_14d5b1a51;
    }
    if ((param_3->SensorHorizontalOffset) || (param_4)) {
LAB_14d5b1a5c:
      if (((!param_6) || ((param_1->ChangedFlags).SensorHorizontalOffset)) &&
         (fVar2 = param_1->SensorHorizontalOffset, fVar2 != this->SensorHorizontalOffset)) {
        (this->ChangedFlags).SensorHorizontalOffset = true;
        this->SensorHorizontalOffset = fVar2;
      }
      param_5->SensorHorizontalOffset = true;
      if (param_4) goto LAB_14d5b1a97;
    }
    if ((param_3->SensorVerticalOffset) || (param_4)) {
LAB_14d5b1a9f:
      if (((!param_6) || ((param_1->ChangedFlags).SensorVerticalOffset)) &&
         (fVar2 = param_1->SensorVerticalOffset, fVar2 != this->SensorVerticalOffset)) {
        (this->ChangedFlags).SensorVerticalOffset = true;
        this->SensorVerticalOffset = fVar2;
      }
      param_5->SensorVerticalOffset = true;
      if (param_4) goto LAB_14d5b1add;
    }
    if ((param_3->ISO) || (param_4)) {
LAB_14d5b1ae5:
      if (((!param_6) || ((param_1->ChangedFlags).ISO)) &&
         (fVar2 = param_1->ISO, fVar2 != this->ISO)) {
        (this->ChangedFlags).ISO = true;
        this->ISO = fVar2;
      }
      param_5->ISO = true;
      if (param_4) goto LAB_14d5b1b23;
    }
    if ((param_3->SqueezeFactor) || (param_4)) {
LAB_14d5b1b2b:
      if (((!param_6) || ((param_1->ChangedFlags).SqueezeFactor)) &&
         (fVar2 = param_1->SqueezeFactor, fVar2 != this->SqueezeFactor)) {
        (this->ChangedFlags).SqueezeFactor = true;
        this->SqueezeFactor = fVar2;
      }
      param_5->SqueezeFactor = true;
      if (param_4) goto LAB_14d5b1b69;
    }
    if ((param_3->Overscan) || (param_4)) {
LAB_14d5b1b71:
      if (((!param_6) || ((param_1->ChangedFlags).Overscan)) &&
         (fVar2 = param_1->Overscan, fVar2 != this->Overscan)) {
        (this->ChangedFlags).Overscan = true;
        this->Overscan = fVar2;
      }
      param_5->Overscan = true;
      if (param_4) goto LAB_14d5b1baf;
    }
    if ((param_3->DiaphragmBladeCount) || (param_4)) {
LAB_14d5b1bb7:
      if (((!param_6) || ((param_1->ChangedFlags).DiaphragmBladeCount)) &&
         (iVar6 = param_1->DiaphragmBladeCount, this->DiaphragmBladeCount != iVar6)) {
        (this->ChangedFlags).DiaphragmBladeCount = true;
        this->DiaphragmBladeCount = iVar6;
      }
      param_5->DiaphragmBladeCount = true;
      if (param_4) goto LAB_14d5b1bf3;
    }
    if ((param_3->PhysicalCameraBlendWeight) || (param_4)) {
LAB_14d5b1bfb:
      if (((!param_6) || ((param_1->ChangedFlags).PhysicalCameraBlendWeight)) &&
         (fVar2 = param_1->PhysicalCameraBlendWeight, fVar2 != this->PhysicalCameraBlendWeight)) {
        (this->ChangedFlags).PhysicalCameraBlendWeight = true;
        this->PhysicalCameraBlendWeight = fVar2;
      }
      param_5->PhysicalCameraBlendWeight = true;
      if (param_4) goto LAB_14d5b1c36;
    }
    if ((param_3->NearClippingPlane) || (param_4)) {
LAB_14d5b1c3b:
      if (((!param_6) || ((param_1->ChangedFlags).NearClippingPlane)) &&
         (fVar2 = param_1->NearClippingPlane, fVar2 != this->NearClippingPlane)) {
        (this->ChangedFlags).NearClippingPlane = true;
        this->NearClippingPlane = fVar2;
      }
      param_5->NearClippingPlane = true;
      if (param_4) goto LAB_14d5b1c78;
    }
    if ((param_3->FarClippingPlane) || (param_4)) {
LAB_14d5b1c82:
      if (((!param_6) || ((param_1->ChangedFlags).FarClippingPlane)) &&
         (fVar2 = param_1->FarClippingPlane, fVar2 != this->FarClippingPlane)) {
        (this->ChangedFlags).FarClippingPlane = true;
        this->FarClippingPlane = fVar2;
      }
      param_5->FarClippingPlane = true;
      if (param_4) goto LAB_14d5b1cbd;
    }
    if ((param_3->OrthographicWidth) || (param_4)) {
LAB_14d5b1cc5:
      if (((!param_6) || ((param_1->ChangedFlags).OrthographicWidth)) &&
         (fVar2 = param_1->OrthographicWidth, fVar2 != this->OrthographicWidth)) {
        (this->ChangedFlags).OrthographicWidth = true;
        this->OrthographicWidth = fVar2;
      }
      param_5->OrthographicWidth = true;
      if (param_4) goto LAB_14d5b1d03;
    }
    if ((param_3->EnablePhysicalCamera) || (param_4)) {
LAB_14d5b1d0b:
      if (((!param_6) || ((param_1->ChangedFlags).EnablePhysicalCamera)) &&
         (bVar12 = param_1->EnablePhysicalCamera, this->EnablePhysicalCamera != bVar12)) {
        (this->ChangedFlags).EnablePhysicalCamera = true;
        this->EnablePhysicalCamera = bVar12;
      }
      param_5->EnablePhysicalCamera = true;
      if (param_4) goto LAB_14d5b1d48;
    }
    if ((param_3->ConstrainAspectRatio) || (param_4)) {
LAB_14d5b1d50:
      if (((!param_6) || ((param_1->ChangedFlags).ConstrainAspectRatio)) &&
         (bVar12 = param_1->ConstrainAspectRatio, this->ConstrainAspectRatio != bVar12)) {
        (this->ChangedFlags).ConstrainAspectRatio = true;
        this->ConstrainAspectRatio = bVar12;
      }
      param_5->ConstrainAspectRatio = true;
      if (param_4) goto LAB_14d5b1d8d;
    }
    if ((param_3->OverrideAspectRatioAxisConstraint) || (param_4)) {
LAB_14d5b1d95:
      if (((!param_6) || ((param_1->ChangedFlags).OverrideAspectRatioAxisConstraint)) &&
         (bVar12 = param_1->OverrideAspectRatioAxisConstraint,
         this->OverrideAspectRatioAxisConstraint != bVar12)) {
        (this->ChangedFlags).OverrideAspectRatioAxisConstraint = true;
        this->OverrideAspectRatioAxisConstraint = bVar12;
      }
      param_5->OverrideAspectRatioAxisConstraint = true;
      if (param_4) goto LAB_14d5b1dcf;
    }
    if ((param_3->AspectRatioAxisConstraint) || (param_4)) {
LAB_14d5b1dd4:
      if (((!param_6) || ((param_1->ChangedFlags).AspectRatioAxisConstraint)) &&
         (uVar5 = (param_1->AspectRatioAxisConstraint).Value,
         (this->AspectRatioAxisConstraint).Value != uVar5)) {
        (this->ChangedFlags).AspectRatioAxisConstraint = true;
        (this->AspectRatioAxisConstraint).Value = uVar5;
      }
      param_5->AspectRatioAxisConstraint = true;
      goto LAB_14d5b1dfd;
    }
LAB_14d5b1e01:
    if ((param_3->ProjectionMode) || (param_4)) {
LAB_14d5b1e17:
      if (((!param_6) || ((param_1->ChangedFlags).ProjectionMode)) &&
         (uVar5 = (param_1->ProjectionMode).Value, (this->ProjectionMode).Value != uVar5)) {
        (this->ChangedFlags).ProjectionMode = true;
        (this->ProjectionMode).Value = uVar5;
      }
      param_5->ProjectionMode = true;
      goto LAB_14d5b1e48;
    }
LAB_14d5b1e4c:
    if ((bool)param_3->FieldOfView || (bool)param_3->FocalLength) goto LAB_14d5b1e63;
    bVar12 = !param_4;
  }
  if (bVar12) {
    return;
  }
LAB_14d5b1e63:
  if ((!param_6) ||
     ((bool)(param_1->ChangedFlags).FieldOfView || (bool)(param_1->ChangedFlags).FocalLength)) {
    fVar2 = param_1->FocalLength;
    if (fVar2 != this->FocalLength) {
      (this->ChangedFlags).FocalLength = true;
      this->FocalLength = fVar2;
    }
    fVar2 = param_1->FieldOfView;
    if (fVar2 != this->FieldOfView) {
      (this->ChangedFlags).FieldOfView = true;
      this->FieldOfView = fVar2;
    }
  }
  return;
}

// InternalOverrideChanged @ 14d5b2d40

void __thiscall
FCameraPose::InternalOverrideChanged(FCameraPose *this,FCameraPose *param_1,bool param_2)

{
  undefined1 *puVar1;
  float fVar2;
  double dVar3;
  bool bVar4;
  uchar uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  if ((!param_2) || ((param_1->ChangedFlags).Location)) {
    dVar7 = (param_1->Location).field0_0x0._s_0.X;
    dVar8 = (param_1->Location).field0_0x0._s_0.Y;
    dVar3 = (param_1->Location).field0_0x0._s_0.Z;
    if ((dVar7 != (this->Location).field0_0x0._s_0.X) ||
       ((dVar8 != (this->Location).field0_0x0._s_0.Y ||
        (dVar3 != (this->Location).field0_0x0._s_0.Z)))) {
      (this->ChangedFlags).Location = true;
      (this->Location).field0_0x0._s_0.X = dVar7;
      (this->Location).field0_0x0._s_0.Y = dVar8;
      (this->Location).field0_0x0._s_0.Z = dVar3;
    }
    if (param_2) goto LAB_14d5b2d95;
LAB_14d5b2d9e:
    dVar7 = (param_1->Rotation).Pitch;
    dVar8 = (param_1->Rotation).Yaw;
    dVar3 = (param_1->Rotation).Roll;
    if (((dVar7 != (this->Rotation).Pitch) || (dVar8 != (this->Rotation).Yaw)) ||
       (dVar3 != (this->Rotation).Roll)) {
      (this->ChangedFlags).Rotation = true;
      (this->Rotation).Pitch = dVar7;
      (this->Rotation).Yaw = dVar8;
      (this->Rotation).Roll = dVar3;
    }
    if (param_2) goto LAB_14d5b2de4;
LAB_14d5b2ded:
    dVar3 = param_1->TargetDistance;
    if (dVar3 != this->TargetDistance) {
      (this->ChangedFlags).TargetDistance = true;
      this->TargetDistance = dVar3;
    }
    if (param_2) goto LAB_14d5b2e0a;
LAB_14d5b2e13:
    fVar2 = param_1->Aperture;
    if (fVar2 != this->Aperture) {
      (this->ChangedFlags).Aperture = true;
      this->Aperture = fVar2;
    }
    if (param_2) goto LAB_14d5b2e2f;
LAB_14d5b2e38:
    fVar2 = param_1->ShutterSpeed;
    if (fVar2 != this->ShutterSpeed) {
      (this->ChangedFlags).ShutterSpeed = true;
      this->ShutterSpeed = fVar2;
    }
    if (param_2) goto LAB_14d5b2e54;
LAB_14d5b2e5d:
    fVar2 = param_1->FocusDistance;
    if (fVar2 != this->FocusDistance) {
      (this->ChangedFlags).FocusDistance = true;
      this->FocusDistance = fVar2;
    }
    if (param_2) goto LAB_14d5b2e79;
LAB_14d5b2e82:
    fVar2 = param_1->SensorWidth;
    if (fVar2 != this->SensorWidth) {
      (this->ChangedFlags).SensorWidth = true;
      this->SensorWidth = fVar2;
    }
    if (param_2) goto LAB_14d5b2e9e;
LAB_14d5b2ea7:
    fVar2 = param_1->SensorHeight;
    if (fVar2 != this->SensorHeight) {
      (this->ChangedFlags).SensorHeight = true;
      this->SensorHeight = fVar2;
    }
    if (param_2) goto LAB_14d5b2ec3;
LAB_14d5b2ecc:
    fVar2 = param_1->SensorHorizontalOffset;
    if (fVar2 != this->SensorHorizontalOffset) {
      (this->ChangedFlags).SensorHorizontalOffset = true;
      this->SensorHorizontalOffset = fVar2;
    }
    if (param_2) goto LAB_14d5b2ee8;
LAB_14d5b2ef1:
    fVar2 = param_1->SensorVerticalOffset;
    if (fVar2 != this->SensorVerticalOffset) {
      (this->ChangedFlags).SensorVerticalOffset = true;
      this->SensorVerticalOffset = fVar2;
    }
    if (param_2) goto LAB_14d5b2f0d;
LAB_14d5b2f16:
    fVar2 = param_1->ISO;
    if (fVar2 != this->ISO) {
      (this->ChangedFlags).ISO = true;
      this->ISO = fVar2;
    }
    if (param_2) goto LAB_14d5b2f32;
LAB_14d5b2f3b:
    fVar2 = param_1->SqueezeFactor;
    if (fVar2 != this->SqueezeFactor) {
      (this->ChangedFlags).SqueezeFactor = true;
      this->SqueezeFactor = fVar2;
    }
    if (param_2) goto LAB_14d5b2f57;
LAB_14d5b2f60:
    fVar2 = param_1->Overscan;
    if (fVar2 != this->Overscan) {
      (this->ChangedFlags).Overscan = true;
      this->Overscan = fVar2;
    }
    if (param_2) goto LAB_14d5b2f7c;
LAB_14d5b2f85:
    iVar6 = param_1->DiaphragmBladeCount;
    if (this->DiaphragmBladeCount != iVar6) {
      (this->ChangedFlags).DiaphragmBladeCount = true;
      this->DiaphragmBladeCount = iVar6;
    }
    if (param_2) goto LAB_14d5b2f9c;
LAB_14d5b2fa5:
    fVar2 = param_1->PhysicalCameraBlendWeight;
    if (fVar2 != this->PhysicalCameraBlendWeight) {
      (this->ChangedFlags).PhysicalCameraBlendWeight = true;
      this->PhysicalCameraBlendWeight = fVar2;
    }
    if (param_2) goto LAB_14d5b2fc1;
LAB_14d5b2fca:
    fVar2 = param_1->NearClippingPlane;
    if (fVar2 != this->NearClippingPlane) {
      (this->ChangedFlags).NearClippingPlane = true;
      this->NearClippingPlane = fVar2;
    }
    if (param_2) goto LAB_14d5b2fe6;
LAB_14d5b2fef:
    fVar2 = param_1->FarClippingPlane;
    if (fVar2 != this->FarClippingPlane) {
      (this->ChangedFlags).FarClippingPlane = true;
      this->FarClippingPlane = fVar2;
    }
    if (param_2) goto LAB_14d5b300b;
LAB_14d5b3014:
    fVar2 = param_1->OrthographicWidth;
    if (fVar2 != this->OrthographicWidth) {
      (this->ChangedFlags).OrthographicWidth = true;
      this->OrthographicWidth = fVar2;
    }
    if (param_2) goto LAB_14d5b3030;
LAB_14d5b3039:
    fVar2 = param_1->FieldOfView;
    if (fVar2 != this->FieldOfView) {
      (this->ChangedFlags).FieldOfView = true;
      this->FieldOfView = fVar2;
    }
    if (param_2) goto LAB_14d5b3055;
LAB_14d5b305e:
    fVar2 = param_1->FocalLength;
    if (fVar2 != this->FocalLength) {
      (this->ChangedFlags).FocalLength = true;
      this->FocalLength = fVar2;
    }
    if (param_2) goto LAB_14d5b307a;
LAB_14d5b3083:
    bVar4 = param_1->EnablePhysicalCamera;
    if (this->EnablePhysicalCamera != bVar4) {
      (this->ChangedFlags).EnablePhysicalCamera = true;
      this->EnablePhysicalCamera = bVar4;
    }
    if (param_2) goto LAB_14d5b309b;
LAB_14d5b30a4:
    bVar4 = param_1->ConstrainAspectRatio;
    if (this->ConstrainAspectRatio != bVar4) {
      (this->ChangedFlags).ConstrainAspectRatio = true;
      this->ConstrainAspectRatio = bVar4;
    }
    if (param_2) goto LAB_14d5b30bc;
LAB_14d5b30c5:
    bVar4 = param_1->OverrideAspectRatioAxisConstraint;
    if (this->OverrideAspectRatioAxisConstraint != bVar4) {
      (this->ChangedFlags).OverrideAspectRatioAxisConstraint = true;
      this->OverrideAspectRatioAxisConstraint = bVar4;
    }
    if (param_2) goto LAB_14d5b30dd;
LAB_14d5b30e6:
    uVar5 = (param_1->AspectRatioAxisConstraint).Value;
    if ((this->AspectRatioAxisConstraint).Value != uVar5) {
      (this->ChangedFlags).AspectRatioAxisConstraint = true;
      (this->AspectRatioAxisConstraint).Value = uVar5;
    }
    if (!param_2) goto LAB_14d5b3107;
  }
  else {
LAB_14d5b2d95:
    if ((param_1->ChangedFlags).Rotation) goto LAB_14d5b2d9e;
LAB_14d5b2de4:
    if ((param_1->ChangedFlags).TargetDistance) goto LAB_14d5b2ded;
LAB_14d5b2e0a:
    if ((param_1->ChangedFlags).Aperture) goto LAB_14d5b2e13;
LAB_14d5b2e2f:
    if ((param_1->ChangedFlags).ShutterSpeed) goto LAB_14d5b2e38;
LAB_14d5b2e54:
    if ((param_1->ChangedFlags).FocusDistance) goto LAB_14d5b2e5d;
LAB_14d5b2e79:
    if ((param_1->ChangedFlags).SensorWidth) goto LAB_14d5b2e82;
LAB_14d5b2e9e:
    if ((param_1->ChangedFlags).SensorHeight) goto LAB_14d5b2ea7;
LAB_14d5b2ec3:
    if ((param_1->ChangedFlags).SensorHorizontalOffset) goto LAB_14d5b2ecc;
LAB_14d5b2ee8:
    if ((param_1->ChangedFlags).SensorVerticalOffset) goto LAB_14d5b2ef1;
LAB_14d5b2f0d:
    if ((param_1->ChangedFlags).ISO) goto LAB_14d5b2f16;
LAB_14d5b2f32:
    if ((param_1->ChangedFlags).SqueezeFactor) goto LAB_14d5b2f3b;
LAB_14d5b2f57:
    if ((param_1->ChangedFlags).Overscan) goto LAB_14d5b2f60;
LAB_14d5b2f7c:
    if ((param_1->ChangedFlags).DiaphragmBladeCount) goto LAB_14d5b2f85;
LAB_14d5b2f9c:
    if ((param_1->ChangedFlags).PhysicalCameraBlendWeight) goto LAB_14d5b2fa5;
LAB_14d5b2fc1:
    if ((param_1->ChangedFlags).NearClippingPlane) goto LAB_14d5b2fca;
LAB_14d5b2fe6:
    if ((param_1->ChangedFlags).FarClippingPlane) goto LAB_14d5b2fef;
LAB_14d5b300b:
    if ((param_1->ChangedFlags).OrthographicWidth) goto LAB_14d5b3014;
LAB_14d5b3030:
    if ((param_1->ChangedFlags).FieldOfView) goto LAB_14d5b3039;
LAB_14d5b3055:
    if ((param_1->ChangedFlags).FocalLength) goto LAB_14d5b305e;
LAB_14d5b307a:
    if ((param_1->ChangedFlags).EnablePhysicalCamera) goto LAB_14d5b3083;
LAB_14d5b309b:
    if ((param_1->ChangedFlags).ConstrainAspectRatio) goto LAB_14d5b30a4;
LAB_14d5b30bc:
    if ((param_1->ChangedFlags).OverrideAspectRatioAxisConstraint) goto LAB_14d5b30c5;
LAB_14d5b30dd:
    if ((param_1->ChangedFlags).AspectRatioAxisConstraint) goto LAB_14d5b30e6;
  }
  if (!(param_1->ChangedFlags).ProjectionMode) {
    return;
  }
LAB_14d5b3107:
  uVar5 = (param_1->ProjectionMode).Value;
  if ((this->ProjectionMode).Value != uVar5) {
    (this->ChangedFlags).ProjectionMode = true;
    (this->ProjectionMode).Value = uVar5;
  }
  return;
}

// LerpAll @ 14d5b4cc0

void __thiscall FCameraPose::LerpAll(FCameraPose *this,FCameraPose *param_1,float param_2)

{
  FCameraPoseFlags local_res20 [2];
  
  INSERT(local_res20[0]._3_1_,true,0,1);
  INSERT(0,true,0xf,1);
  INSERT(local_res20[0]._0_2_,true,0xe,1);
  INSERT(local_res20[0]._0_2_,true,0xd,1);
  INSERT(local_res20[0]._0_2_,true,0xc,1);
  INSERT(local_res20[0]._0_2_,true,0xb,1);
  INSERT(local_res20[0]._0_2_,true,10,1);
  INSERT(local_res20[0]._0_2_,true,9,1);
  INSERT(local_res20[0]._0_2_,true,8,1);
  INSERT(local_res20[0]._0_2_,true,7,1);
  INSERT(local_res20[0]._0_2_,true,6,1);
  INSERT(local_res20[0]._0_2_,true,5,1);
  INSERT(local_res20[0]._0_2_,true,4,1);
  INSERT(local_res20[0]._0_2_,true,3,1);
  INSERT(local_res20[0]._0_2_,true,2,1);
  INSERT(local_res20[0]._0_2_,true,1,1);
  INSERT(local_res20[0]._0_2_,true,0,1);
  INSERT(0,true,7,1);
  INSERT(local_res20[0]._2_1_,true,6,1);
  INSERT(local_res20[0]._2_1_,true,5,1);
  INSERT(local_res20[0]._2_1_,true,4,1);
  INSERT(local_res20[0]._2_1_,true,3,1);
  INSERT(local_res20[0]._2_1_,true,2,1);
  INSERT(local_res20[0]._2_1_,true,1,1);
  INSERT(local_res20[0]._2_1_,true,0,1);
  InternalLerpChanged(this,param_1,param_2,local_res20,false,local_res20,false);
  return;
}

// LerpChanged @ 14d5b5670

void __thiscall FCameraPose::LerpChanged(FCameraPose *this,FCameraPose *param_1,float param_2)

{
  FCameraPoseFlags local_res20 [2];
  
  INSERT(local_res20[0]._3_1_,true,0,1);
  INSERT(0,true,0xf,1);
  INSERT(local_res20[0]._0_2_,true,0xe,1);
  INSERT(local_res20[0]._0_2_,true,0xd,1);
  INSERT(local_res20[0]._0_2_,true,0xc,1);
  INSERT(local_res20[0]._0_2_,true,0xb,1);
  INSERT(local_res20[0]._0_2_,true,10,1);
  INSERT(local_res20[0]._0_2_,true,9,1);
  INSERT(local_res20[0]._0_2_,true,8,1);
  INSERT(local_res20[0]._0_2_,true,7,1);
  INSERT(local_res20[0]._0_2_,true,6,1);
  INSERT(local_res20[0]._0_2_,true,5,1);
  INSERT(local_res20[0]._0_2_,true,4,1);
  INSERT(local_res20[0]._0_2_,true,3,1);
  INSERT(local_res20[0]._0_2_,true,2,1);
  INSERT(local_res20[0]._0_2_,true,1,1);
  INSERT(local_res20[0]._0_2_,true,0,1);
  INSERT(0,true,7,1);
  INSERT(local_res20[0]._2_1_,true,6,1);
  INSERT(local_res20[0]._2_1_,true,5,1);
  INSERT(local_res20[0]._2_1_,true,4,1);
  INSERT(local_res20[0]._2_1_,true,3,1);
  INSERT(local_res20[0]._2_1_,true,2,1);
  INSERT(local_res20[0]._2_1_,true,1,1);
  INSERT(local_res20[0]._2_1_,true,0,1);
  InternalLerpChanged(this,param_1,param_2,local_res20,false,local_res20,true);
  return;
}

// LerpChanged @ 14d5b56b0

void __thiscall
FCameraPose::LerpChanged
          (FCameraPose *this,FCameraPose *param_1,float param_2,FCameraPoseFlags *param_3,
          bool param_4,FCameraPoseFlags *param_5)

{
  InternalLerpChanged(this,param_1,param_2,param_3,param_4,param_5,true);
  return;
}

// OverrideAll @ 14d5c3b50

void __thiscall FCameraPose::OverrideAll(FCameraPose *this,FCameraPose *param_1)

{
  FCameraPoseFlags *pFVar1;
  float fVar2;
  double dVar3;
  byte bVar4;
  bool bVar5;
  uchar uVar6;
  double dVar7;
  double dVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  dVar7 = (param_1->Location).field0_0x0._s_0.X;
  dVar8 = (param_1->Location).field0_0x0._s_0.Y;
  dVar3 = (param_1->Location).field0_0x0._s_0.Z;
  if (((dVar7 != (this->Location).field0_0x0._s_0.X) ||
      (dVar8 != (this->Location).field0_0x0._s_0.Y)) ||
     (dVar3 != (this->Location).field0_0x0._s_0.Z)) {
    (this->ChangedFlags).Location = true;
    (this->Location).field0_0x0._s_0.X = dVar7;
    (this->Location).field0_0x0._s_0.Y = dVar8;
    (this->Location).field0_0x0._s_0.Z = dVar3;
  }
  dVar7 = (param_1->Rotation).Pitch;
  dVar8 = (param_1->Rotation).Yaw;
  dVar3 = (param_1->Rotation).Roll;
  if (((dVar7 != (this->Rotation).Pitch) || (dVar8 != (this->Rotation).Yaw)) ||
     (dVar3 != (this->Rotation).Roll)) {
    (this->ChangedFlags).Rotation = true;
    (this->Rotation).Pitch = dVar7;
    (this->Rotation).Yaw = dVar8;
    (this->Rotation).Roll = dVar3;
  }
  dVar3 = param_1->TargetDistance;
  if (dVar3 != this->TargetDistance) {
    (this->ChangedFlags).TargetDistance = true;
    this->TargetDistance = dVar3;
  }
  fVar2 = param_1->Aperture;
  if (fVar2 != this->Aperture) {
    (this->ChangedFlags).Aperture = true;
    this->Aperture = fVar2;
  }
  fVar2 = param_1->ShutterSpeed;
  if (fVar2 != this->ShutterSpeed) {
    pFVar1->ShutterSpeed = true;
    this->ShutterSpeed = fVar2;
  }
  fVar2 = param_1->FocusDistance;
  if (fVar2 != this->FocusDistance) {
    pFVar1->FocusDistance = true;
    this->FocusDistance = fVar2;
  }
  fVar2 = param_1->SensorWidth;
  if (fVar2 != this->SensorWidth) {
    pFVar1->SensorWidth = true;
    this->SensorWidth = fVar2;
  }
  if (param_1->SensorHeight != this->SensorHeight) {
    this->SensorHeight = param_1->SensorHeight;
    (this->ChangedFlags).SensorHeight = true;
  }
  fVar2 = param_1->SensorHorizontalOffset;
  if (fVar2 != this->SensorHorizontalOffset) {
    (this->ChangedFlags).SensorHorizontalOffset = true;
    this->SensorHorizontalOffset = fVar2;
  }
  fVar2 = param_1->SensorVerticalOffset;
  if (fVar2 != this->SensorVerticalOffset) {
    (this->ChangedFlags).SensorVerticalOffset = true;
    this->SensorVerticalOffset = fVar2;
  }
  fVar2 = param_1->ISO;
  if (fVar2 != this->ISO) {
    (this->ChangedFlags).ISO = true;
    this->ISO = fVar2;
  }
  if (param_1->SqueezeFactor != this->SqueezeFactor) {
    this->SqueezeFactor = param_1->SqueezeFactor;
    (this->ChangedFlags).SqueezeFactor = true;
  }
  fVar2 = param_1->Overscan;
  if (fVar2 != this->Overscan) {
    (this->ChangedFlags).Overscan = true;
    this->Overscan = fVar2;
  }
  if (this->DiaphragmBladeCount != param_1->DiaphragmBladeCount) {
    this->DiaphragmBladeCount = param_1->DiaphragmBladeCount;
    (this->ChangedFlags).DiaphragmBladeCount = true;
  }
  fVar2 = param_1->PhysicalCameraBlendWeight;
  if (fVar2 != this->PhysicalCameraBlendWeight) {
    (this->ChangedFlags).PhysicalCameraBlendWeight = true;
    this->PhysicalCameraBlendWeight = fVar2;
  }
  if (param_1->NearClippingPlane != this->NearClippingPlane) {
    this->NearClippingPlane = param_1->NearClippingPlane;
    (this->ChangedFlags).NearClippingPlane = true;
  }
  fVar2 = param_1->FarClippingPlane;
  if (fVar2 != this->FarClippingPlane) {
    (this->ChangedFlags).FarClippingPlane = true;
    this->FarClippingPlane = fVar2;
  }
  fVar2 = param_1->OrthographicWidth;
  if (fVar2 != this->OrthographicWidth) {
    (this->ChangedFlags).OrthographicWidth = true;
    this->OrthographicWidth = fVar2;
  }
  fVar2 = param_1->FieldOfView;
  if (fVar2 != this->FieldOfView) {
    (this->ChangedFlags).FieldOfView = true;
    this->FieldOfView = fVar2;
  }
  if (param_1->FocalLength != this->FocalLength) {
    this->FocalLength = param_1->FocalLength;
    (this->ChangedFlags).FocalLength = true;
  }
  bVar5 = param_1->EnablePhysicalCamera;
  if (this->EnablePhysicalCamera != bVar5) {
    (this->ChangedFlags).EnablePhysicalCamera = true;
    this->EnablePhysicalCamera = bVar5;
  }
  if (this->ConstrainAspectRatio != param_1->ConstrainAspectRatio) {
    this->ConstrainAspectRatio = param_1->ConstrainAspectRatio;
    (this->ChangedFlags).ConstrainAspectRatio = true;
  }
  bVar5 = param_1->OverrideAspectRatioAxisConstraint;
  if (this->OverrideAspectRatioAxisConstraint != bVar5) {
    (this->ChangedFlags).OverrideAspectRatioAxisConstraint = true;
    this->OverrideAspectRatioAxisConstraint = bVar5;
  }
  uVar6 = (param_1->AspectRatioAxisConstraint).Value;
  if ((this->AspectRatioAxisConstraint).Value != uVar6) {
    (this->AspectRatioAxisConstraint).Value = uVar6;
    (this->ChangedFlags).AspectRatioAxisConstraint = true;
  }
  uVar6 = (param_1->ProjectionMode).Value;
  if ((this->ProjectionMode).Value != uVar6) {
    (this->ChangedFlags).ProjectionMode = true;
    (this->ProjectionMode).Value = uVar6;
  }
  return;
}

// OverrideChanged @ 14d5c3f50

void __thiscall FCameraPose::OverrideChanged(FCameraPose *this,FCameraPose *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  double dVar3;
  bool bVar4;
  uchar uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  if ((param_1->ChangedFlags).Location) {
    dVar7 = (param_1->Location).field0_0x0._s_0.X;
    dVar8 = (param_1->Location).field0_0x0._s_0.Y;
    dVar3 = (param_1->Location).field0_0x0._s_0.Z;
    if (((dVar7 != (this->Location).field0_0x0._s_0.X) ||
        (dVar8 != (this->Location).field0_0x0._s_0.Y)) ||
       (dVar3 != (this->Location).field0_0x0._s_0.Z)) {
      (this->ChangedFlags).Location = true;
      (this->Location).field0_0x0._s_0.X = dVar7;
      (this->Location).field0_0x0._s_0.Y = dVar8;
      (this->Location).field0_0x0._s_0.Z = dVar3;
    }
  }
  if ((param_1->ChangedFlags).Rotation) {
    dVar7 = (param_1->Rotation).Pitch;
    dVar8 = (param_1->Rotation).Yaw;
    dVar3 = (param_1->Rotation).Roll;
    if (((dVar7 != (this->Rotation).Pitch) || (dVar8 != (this->Rotation).Yaw)) ||
       (dVar3 != (this->Rotation).Roll)) {
      (this->ChangedFlags).Rotation = true;
      (this->Rotation).Pitch = dVar7;
      (this->Rotation).Yaw = dVar8;
      (this->Rotation).Roll = dVar3;
    }
  }
  if (((param_1->ChangedFlags).TargetDistance) &&
     (dVar3 = param_1->TargetDistance, dVar3 != this->TargetDistance)) {
    (this->ChangedFlags).TargetDistance = true;
    this->TargetDistance = dVar3;
  }
  if (((param_1->ChangedFlags).Aperture) && (fVar2 = param_1->Aperture, fVar2 != this->Aperture)) {
    (this->ChangedFlags).Aperture = true;
    this->Aperture = fVar2;
  }
  if (((param_1->ChangedFlags).ShutterSpeed) &&
     (fVar2 = param_1->ShutterSpeed, fVar2 != this->ShutterSpeed)) {
    (this->ChangedFlags).ShutterSpeed = true;
    this->ShutterSpeed = fVar2;
  }
  if (((param_1->ChangedFlags).FocusDistance) &&
     (fVar2 = param_1->FocusDistance, fVar2 != this->FocusDistance)) {
    (this->ChangedFlags).FocusDistance = true;
    this->FocusDistance = fVar2;
  }
  if (((param_1->ChangedFlags).SensorWidth) &&
     (fVar2 = param_1->SensorWidth, fVar2 != this->SensorWidth)) {
    (this->ChangedFlags).SensorWidth = true;
    this->SensorWidth = fVar2;
  }
  if (((param_1->ChangedFlags).SensorHeight) &&
     (fVar2 = param_1->SensorHeight, fVar2 != this->SensorHeight)) {
    (this->ChangedFlags).SensorHeight = true;
    this->SensorHeight = fVar2;
  }
  if (((param_1->ChangedFlags).SensorHorizontalOffset) &&
     (fVar2 = param_1->SensorHorizontalOffset, fVar2 != this->SensorHorizontalOffset)) {
    (this->ChangedFlags).SensorHorizontalOffset = true;
    this->SensorHorizontalOffset = fVar2;
  }
  if (((param_1->ChangedFlags).SensorVerticalOffset) &&
     (fVar2 = param_1->SensorVerticalOffset, fVar2 != this->SensorVerticalOffset)) {
    (this->ChangedFlags).SensorVerticalOffset = true;
    this->SensorVerticalOffset = fVar2;
  }
  if (((param_1->ChangedFlags).ISO) && (fVar2 = param_1->ISO, fVar2 != this->ISO)) {
    (this->ChangedFlags).ISO = true;
    this->ISO = fVar2;
  }
  if (((param_1->ChangedFlags).SqueezeFactor) &&
     (fVar2 = param_1->SqueezeFactor, fVar2 != this->SqueezeFactor)) {
    (this->ChangedFlags).SqueezeFactor = true;
    this->SqueezeFactor = fVar2;
  }
  if (((param_1->ChangedFlags).Overscan) && (fVar2 = param_1->Overscan, fVar2 != this->Overscan)) {
    (this->ChangedFlags).Overscan = true;
    this->Overscan = fVar2;
  }
  if (((param_1->ChangedFlags).DiaphragmBladeCount) &&
     (iVar6 = param_1->DiaphragmBladeCount, this->DiaphragmBladeCount != iVar6)) {
    (this->ChangedFlags).DiaphragmBladeCount = true;
    this->DiaphragmBladeCount = iVar6;
  }
  if (((param_1->ChangedFlags).PhysicalCameraBlendWeight) &&
     (fVar2 = param_1->PhysicalCameraBlendWeight, fVar2 != this->PhysicalCameraBlendWeight)) {
    (this->ChangedFlags).PhysicalCameraBlendWeight = true;
    this->PhysicalCameraBlendWeight = fVar2;
  }
  if (((param_1->ChangedFlags).NearClippingPlane) &&
     (fVar2 = param_1->NearClippingPlane, fVar2 != this->NearClippingPlane)) {
    (this->ChangedFlags).NearClippingPlane = true;
    this->NearClippingPlane = fVar2;
  }
  if (((param_1->ChangedFlags).FarClippingPlane) &&
     (fVar2 = param_1->FarClippingPlane, fVar2 != this->FarClippingPlane)) {
    (this->ChangedFlags).FarClippingPlane = true;
    this->FarClippingPlane = fVar2;
  }
  if (((param_1->ChangedFlags).OrthographicWidth) &&
     (fVar2 = param_1->OrthographicWidth, fVar2 != this->OrthographicWidth)) {
    (this->ChangedFlags).OrthographicWidth = true;
    this->OrthographicWidth = fVar2;
  }
  if (((param_1->ChangedFlags).FieldOfView) &&
     (fVar2 = param_1->FieldOfView, fVar2 != this->FieldOfView)) {
    (this->ChangedFlags).FieldOfView = true;
    this->FieldOfView = fVar2;
  }
  if (((param_1->ChangedFlags).FocalLength) &&
     (fVar2 = param_1->FocalLength, fVar2 != this->FocalLength)) {
    (this->ChangedFlags).FocalLength = true;
    this->FocalLength = fVar2;
  }
  if (((param_1->ChangedFlags).EnablePhysicalCamera) &&
     (bVar4 = param_1->EnablePhysicalCamera, this->EnablePhysicalCamera != bVar4)) {
    (this->ChangedFlags).EnablePhysicalCamera = true;
    this->EnablePhysicalCamera = bVar4;
  }
  if (((param_1->ChangedFlags).ConstrainAspectRatio) &&
     (bVar4 = param_1->ConstrainAspectRatio, this->ConstrainAspectRatio != bVar4)) {
    (this->ChangedFlags).ConstrainAspectRatio = true;
    this->ConstrainAspectRatio = bVar4;
  }
  if (((param_1->ChangedFlags).OverrideAspectRatioAxisConstraint) &&
     (bVar4 = param_1->OverrideAspectRatioAxisConstraint,
     this->OverrideAspectRatioAxisConstraint != bVar4)) {
    (this->ChangedFlags).OverrideAspectRatioAxisConstraint = true;
    this->OverrideAspectRatioAxisConstraint = bVar4;
  }
  if (((param_1->ChangedFlags).AspectRatioAxisConstraint) &&
     (uVar5 = (param_1->AspectRatioAxisConstraint).Value,
     (this->AspectRatioAxisConstraint).Value != uVar5)) {
    (this->ChangedFlags).AspectRatioAxisConstraint = true;
    (this->AspectRatioAxisConstraint).Value = uVar5;
  }
  if (((param_1->ChangedFlags).ProjectionMode) &&
     (uVar5 = (param_1->ProjectionMode).Value, (this->ProjectionMode).Value != uVar5)) {
    (this->ChangedFlags).ProjectionMode = true;
    (this->ProjectionMode).Value = uVar5;
  }
  return;
}

// Reset @ 14d5cbda0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FCameraPose::Reset(FCameraPose *this)

{
  undefined1 *puVar1;
  FCameraPoseFlags *pFVar2;
  longlong lVar3;
  double dVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uStack_14;
  
  uVar9 = _UNK_152b79ab8;
  uVar8 = ___xmm_41955c2941c71eb8bf80000042700000;
  uVar7 = _UNK_152b79aa8;
  uVar10 = ___xmm_4033333344c00000420c0000bf800000;
  uVar6 = _UNK_152b79a98;
  uVar11 = ___xmm_3f80000042c800000000000000000000;
  dVar4 = __real_408f400000000000;
  uStack_14 = uStack_14 & 0xfffffffe;
  (this->Location).field0_0x0._s_0.X = 0.0;
  (this->Location).field0_0x0._s_0.Y = 0.0;
  (this->Location).field0_0x0._s_0.Z = 0.0;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  this->TargetDistance = dVar4;
  uVar12 = ___xmm_4033333344c00000420c0000bf800000;
  ___xmm_4033333344c00000420c0000bf800000 = (undefined4)uVar10;
  _UNK_152b79aa4 = SUB84(uVar10,4);
  uVar5 = _UNK_152b79aa4;
  this->FieldOfView = (float)___xmm_4033333344c00000420c0000bf800000;
  ___xmm_4033333344c00000420c0000bf800000 = uVar12;
  uVar10 = _UNK_152b79aa8;
  this->FocalLength = (float)uVar5;
  _UNK_152b79aa8 = (undefined4)uVar7;
  _UNK_152b79aac = SUB84(uVar7,4);
  uVar5 = _UNK_152b79aac;
  this->OrthographicWidth = (float)_UNK_152b79aa8;
  _UNK_152b79aa8 = uVar10;
  uVar10 = ___xmm_41955c2941c71eb8bf80000042700000;
  this->Aperture = (float)uVar5;
  ___xmm_41955c2941c71eb8bf80000042700000 = (undefined4)uVar8;
  _UNK_152b79ab4 = SUB84(uVar8,4);
  uVar5 = _UNK_152b79ab4;
  this->ShutterSpeed = (float)___xmm_41955c2941c71eb8bf80000042700000;
  ___xmm_41955c2941c71eb8bf80000042700000 = uVar10;
  uVar10 = _UNK_152b79ab8;
  this->FocusDistance = (float)uVar5;
  _UNK_152b79ab8 = (undefined4)uVar9;
  _UNK_152b79abc = SUB84(uVar9,4);
  uVar5 = _UNK_152b79abc;
  this->SensorWidth = (float)_UNK_152b79ab8;
  _UNK_152b79ab8 = uVar10;
  uVar10 = ___xmm_3f80000042c800000000000000000000;
  this->SensorHeight = (float)uVar5;
  ___xmm_3f80000042c800000000000000000000 = (undefined4)uVar11;
  _UNK_152b79a94 = SUB84(uVar11,4);
  uVar5 = _UNK_152b79a94;
  this->SensorHorizontalOffset = (float)___xmm_3f80000042c800000000000000000000;
  ___xmm_3f80000042c800000000000000000000 = uVar10;
  uVar11 = _UNK_152b79a98;
  this->SensorVerticalOffset = (float)uVar5;
  _UNK_152b79a98 = (undefined4)uVar6;
  _UNK_152b79a9c = SUB84(uVar6,4);
  uVar5 = _UNK_152b79a9c;
  this->ISO = (float)_UNK_152b79a98;
  _UNK_152b79a98 = uVar11;
  this->SqueezeFactor = (float)uVar5;
  this->Overscan = 0.0;
  this->DiaphragmBladeCount = 8;
  lVar3 = (ulonglong)uStack_14 << 0x20;
  this->NearClippingPlane = 10.0;
  this->FarClippingPlane = -1.0;
  this->PhysicalCameraBlendWeight = 0.0;
  this->EnablePhysicalCamera = false;
  this->ConstrainAspectRatio = false;
  this->OverrideAspectRatioAxisConstraint = false;
  this->AspectRatioAxisConstraint = '\0';
  this->ProjectionMode = (TEnumAsByte<ECameraProjectionMode::Type>)(char)lVar3;
  this->ChangedFlags = (FCameraPoseFlags)(int)((ulonglong)lVar3 >> 8);
  *(int3 *)&this->field_0x85 = (int3)((ulonglong)lVar3 >> 0x28);
  (this->ChangedFlags).ProjectionMode = false;
  pFVar2 = &this->ChangedFlags;
  pFVar2->Location = false;
  pFVar2->NearClippingPlane = false;
  pFVar2->PhysicalCameraBlendWeight = false;
  pFVar2->DiaphragmBladeCount = false;
  pFVar2->Overscan = false;
  pFVar2->SqueezeFactor = false;
  pFVar2->ISO = false;
  pFVar2->SensorVerticalOffset = false;
  pFVar2->SensorHorizontalOffset = false;
  pFVar2->SensorHeight = false;
  pFVar2->SensorWidth = false;
  pFVar2->FocusDistance = false;
  pFVar2->ShutterSpeed = false;
  pFVar2->Aperture = false;
  pFVar2->TargetDistance = false;
  pFVar2->Rotation = false;
  puVar1 = &(this->ChangedFlags).field_0x2;
  (this->ChangedFlags).FarClippingPlane = false;
  (this->ChangedFlags).AspectRatioAxisConstraint = false;
  (this->ChangedFlags).OverrideAspectRatioAxisConstraint = false;
  (this->ChangedFlags).ConstrainAspectRatio = false;
  (this->ChangedFlags).EnablePhysicalCamera = false;
  (this->ChangedFlags).FocalLength = false;
  (this->ChangedFlags).FieldOfView = false;
  (this->ChangedFlags).OrthographicWidth = false;
  return;
}

// SerializeWithFlags @ 14d5cdfd0

void __thiscall FCameraPose::SerializeWithFlags(FCameraPose *this,FArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5cdfe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,0x88);
  return;
}

// SerializeWithFlags @ 14d5cdff0

void __cdecl FCameraPose::SerializeWithFlags(FArchive *param_1,FCameraPose *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5cdff9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0x88);
  return;
}

// SetAllChangedFlags @ 14d5ce190

void __thiscall FCameraPose::SetAllChangedFlags(FCameraPose *this)

{
  undefined1 *puVar1;
  FCameraPoseFlags *pFVar2;
  
  (this->ChangedFlags).ProjectionMode = true;
  pFVar2 = &this->ChangedFlags;
  pFVar2->Location = true;
  pFVar2->NearClippingPlane = true;
  pFVar2->PhysicalCameraBlendWeight = true;
  pFVar2->DiaphragmBladeCount = true;
  pFVar2->Overscan = true;
  pFVar2->SqueezeFactor = true;
  pFVar2->ISO = true;
  pFVar2->SensorVerticalOffset = true;
  pFVar2->SensorHorizontalOffset = true;
  pFVar2->SensorHeight = true;
  pFVar2->SensorWidth = true;
  pFVar2->FocusDistance = true;
  pFVar2->ShutterSpeed = true;
  pFVar2->Aperture = true;
  pFVar2->TargetDistance = true;
  pFVar2->Rotation = true;
  puVar1 = &(this->ChangedFlags).field_0x2;
  (this->ChangedFlags).FarClippingPlane = true;
  (this->ChangedFlags).AspectRatioAxisConstraint = true;
  (this->ChangedFlags).OverrideAspectRatioAxisConstraint = true;
  (this->ChangedFlags).ConstrainAspectRatio = true;
  (this->ChangedFlags).EnablePhysicalCamera = true;
  (this->ChangedFlags).FocalLength = true;
  (this->ChangedFlags).FieldOfView = true;
  (this->ChangedFlags).OrthographicWidth = true;
  return;
}

// SetTransform @ 14d5cf1c0

void __thiscall
FCameraPose::SetTransform(FCameraPose *this,TTransform<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  TRotator<double> *pTVar3;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  local_48.Roll = (param_1->Translation).ZW.m128d_f64[0];
  dVar1 = (param_1->Translation).XY.m128d_f64[0];
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  if ((((param_2) || (dVar1 != (this->Location).field0_0x0._s_0.X)) ||
      (dVar2 != (this->Location).field0_0x0._s_0.Y)) ||
     (local_48.Roll != (this->Location).field0_0x0._s_0.Z)) {
    (this->ChangedFlags).Location = true;
    (this->Location).field0_0x0._s_0.X = dVar1;
    (this->Location).field0_0x0._s_0.Y = dVar2;
    (this->Location).field0_0x0._s_0.Z = local_48.Roll;
  }
  local_28.X = (param_1->Rotation).XY.m128d_f64[0];
  local_28.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_28.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_28.W = (param_1->Rotation).ZW.m128d_f64[1];
  pTVar3 = UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
  if (((param_2) || (pTVar3->Pitch != (this->Rotation).Pitch)) ||
     ((pTVar3->Yaw != (this->Rotation).Yaw || (pTVar3->Roll != (this->Rotation).Roll)))) {
    (this->ChangedFlags).Rotation = true;
    dVar1 = pTVar3->Yaw;
    (this->Rotation).Pitch = pTVar3->Pitch;
    (this->Rotation).Yaw = dVar1;
    (this->Rotation).Roll = pTVar3->Roll;
  }
  return;
}

// operator() @ 150583270

bool __thiscall `FCameraPose::InternalLerpChanged'::__l265::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100504>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100504>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


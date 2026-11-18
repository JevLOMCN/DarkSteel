// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 41

// StaticClass @ 14d579ad0

UClass * __cdecl UBlueprintCameraPoseFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraPoseFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintCameraPoseFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintCameraPoseFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraPoseFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.InnerSingleton;
}

// UBlueprintCameraPoseFunctionLibrary @ 14d58eec0

UBlueprintCameraPoseFunctionLibrary * __thiscall
UBlueprintCameraPoseFunctionLibrary::UBlueprintCameraPoseFunctionLibrary
          (UBlueprintCameraPoseFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintCameraPoseFunctionLibrary__6B_;
  return this;
}

// UBlueprintCameraPoseFunctionLibrary @ 14d58eef0

UBlueprintCameraPoseFunctionLibrary * __thiscall
UBlueprintCameraPoseFunctionLibrary::UBlueprintCameraPoseFunctionLibrary
          (UBlueprintCameraPoseFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintCameraPoseFunctionLibrary__6B_;
  return this;
}

// ~UBlueprintCameraPoseFunctionLibrary @ 14d591960

void __thiscall
UBlueprintCameraPoseFunctionLibrary::~UBlueprintCameraPoseFunctionLibrary
          (UBlueprintCameraPoseFunctionLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintCameraPoseFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetAimDir @ 14d5a5e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
UBlueprintCameraPoseFunctionLibrary::GetAimDir
          (TVector<double> *__return_storage_ptr__,FBlueprintCameraPose *param_1)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689518;
  local_28._s_0.Z = 0.0;
  UE::Math::TRotator<double>::RotateVector
            (&param_1->Rotation,__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetAimRay @ 14d5a5fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRay<double> * __cdecl
UBlueprintCameraPoseFunctionLibrary::GetAimRay
          (TRay<double> *__return_storage_ptr__,FBlueprintCameraPose *param_1)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  local_38._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_38._s_0.Y = _UNK_150689518;
  local_38._s_0.Z = 0.0;
  pTVar2 = UE::Math::TRotator<double>::RotateVector
                     (&param_1->Rotation,&local_20,(TVector<double> *)&local_38._s_0);
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// GetEffectiveFieldOfView @ 14d5a7de0

double __cdecl
UBlueprintCameraPoseFunctionLibrary::GetEffectiveFieldOfView(FBlueprintCameraPose *param_1)

{
  double dVar1;
  
  dVar1 = FCameraPose::GetEffectiveFieldOfView
                    (param_1->FocalLength,param_1->FieldOfView,param_1->SensorWidth,
                     param_1->SensorHeight,param_1->SqueezeFactor,__real_3f800000);
  return dVar1;
}

// GetPrivateStaticClass @ 14d5a8f50

UClass * __cdecl UBlueprintCameraPoseFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraPoseFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintCameraPoseFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintCameraPoseFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraPoseFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.InnerSingleton;
}

// GetSensorAspectRatio @ 14d5ab2b0

double __cdecl
UBlueprintCameraPoseFunctionLibrary::GetSensorAspectRatio(FBlueprintCameraPose *param_1)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 < param_1->SensorHeight) {
    dVar1 = (double)(param_1->SensorWidth / param_1->SensorHeight);
  }
  return dVar1;
}

// GetTarget @ 14d5ab670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
UBlueprintCameraPoseFunctionLibrary::GetTarget
          (TVector<double> *__return_storage_ptr__,FBlueprintCameraPose *param_1)

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
            (&param_1->Rotation,(TVector<double> *)&local_38._s_0,(TVector<double> *)&local_20._s_0)
  ;
  dVar1 = param_1->TargetDistance;
  dVar2 = (param_1->Location).field0_0x0._s_0.Y;
  dVar3 = (param_1->Location).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar1 * local_38._s_0.X + (param_1->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 * local_38._s_0.Y + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * local_38._s_0.Z + dVar3;
  return __return_storage_ptr__;
}

// GetTargetAtDistance @ 14d5ab700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
UBlueprintCameraPoseFunctionLibrary::GetTargetAtDistance
          (TVector<double> *__return_storage_ptr__,FBlueprintCameraPose *param_1,double param_2)

{
  double dVar1;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  local_30._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_30._s_0.Y = _UNK_150689518;
  local_30._s_0.Z = 0.0;
  UE::Math::TRotator<double>::RotateVector
            (&param_1->Rotation,(TVector<double> *)&local_48._s_0,(TVector<double> *)&local_30._s_0)
  ;
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       local_48._s_0.X * param_2 + (param_1->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_48._s_0.Y * param_2 + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       local_48._s_0.Z * param_2 + (param_1->Location).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetTransform @ 14d5ab840

TTransform<double> * __cdecl
UBlueprintCameraPoseFunctionLibrary::GetTransform
          (TTransform<double> *__return_storage_ptr__,FBlueprintCameraPose *param_1)

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
  dVar10 = (param_1->Location).field0_0x0._s_0.Y;
  dVar1 = (param_1->Location).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  pTVar12 = UE::Math::TRotator<double>::Quaternion(&param_1->Rotation,&local_28);
  dVar1 = pTVar12->Y;
  dVar10 = pTVar12->Z;
  dVar11 = pTVar12->W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar12->X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar10;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
  return __return_storage_ptr__;
}

// MakeCameraPoseFromCameraComponent @ 14d5b5bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FBlueprintCameraPose * __cdecl
UBlueprintCameraPoseFunctionLibrary::MakeCameraPoseFromCameraComponent
          (FBlueprintCameraPose *__return_storage_ptr__,UCameraComponent *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TRotator<double> *pTVar7;
  undefined1 auStack_128 [32];
  float local_108 [2];
  TRotator<double> local_100;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_128;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).Pitch = 0.0;
  (__return_storage_ptr__->Rotation).Yaw = 0.0;
  (__return_storage_ptr__->Rotation).Roll = 0.0;
  __return_storage_ptr__->FieldOfView = -1.0;
  __return_storage_ptr__->SensorWidth = 24.89;
  __return_storage_ptr__->SensorHeight = 18.67;
  __return_storage_ptr__->SensorHorizontalOffset = 0.0;
  (__return_storage_ptr__->ProjectionMode).Value = '\0';
  __return_storage_ptr__->TargetDistance = 1000.0;
  __return_storage_ptr__->FocalLength = 35.0;
  __return_storage_ptr__->OrthographicWidth = 1536.0;
  __return_storage_ptr__->Aperture = 2.8;
  __return_storage_ptr__->ShutterSpeed = 60.0;
  __return_storage_ptr__->FocusDistance = -1.0;
  __return_storage_ptr__->SensorVerticalOffset = 0.0;
  __return_storage_ptr__->ISO = 100.0;
  __return_storage_ptr__->SqueezeFactor = 1.0;
  __return_storage_ptr__->Overscan = 0.0;
  __return_storage_ptr__->DiaphragmBladeCount = 8;
  __return_storage_ptr__->NearClippingPlane = 10.0;
  __return_storage_ptr__->FarClippingPlane = -1.0;
  __return_storage_ptr__->PhysicalCameraBlendWeight = 0.0;
  __return_storage_ptr__->EnablePhysicalCamera = false;
  __return_storage_ptr__->ConstrainAspectRatio = false;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint = false;
  __return_storage_ptr__->AspectRatioAxisConstraint = '\0';
  if (param_1 == (UCameraComponent *)0x0) {
    local_108[0] = 0.0;
    local_108[1] = 0.0;
    FFrame::KismetExecutionMessage(L"Invalid camera component was given",Error,(FName)0x0);
  }
  else {
    local_c8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_c8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_c8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_c8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_c8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_c8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_c8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_c8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UCameraComponent::GetAdditiveOffset(param_1,&local_c8,local_108);
    dVar1 = (double)param_1->_padding_;
    dVar2 = (double)param_1->_padding_;
    local_100.Roll = local_c8.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Location).field0_0x0._s_0.X =
         (double)param_1->_padding_ + local_c8.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Location).field0_0x0._s_0.Y =
         dVar1 + local_c8.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Location).field0_0x0._s_0.Z =
         dVar2 + local_c8.Translation.ZW.m128d_f64[0];
    dVar3 = (double)param_1->_padding_;
    dVar4 = (double)param_1->_padding_;
    dVar5 = (double)param_1->_padding_;
    dVar6 = (double)param_1->_padding_;
    dVar1 = local_c8.Rotation.XY.m128d_f64[0] * dVar3 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar6 * local_c8.Rotation.ZW.m128d_f64[1] +
            dVar4 * local_c8.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            local_c8.Rotation.ZW.m128d_f64[0] * dVar5 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar2 = local_c8.Rotation.XY.m128d_f64[0] * dVar5 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar4 * local_c8.Rotation.ZW.m128d_f64[1] +
            dVar6 * local_c8.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            local_c8.Rotation.ZW.m128d_f64[0] * dVar3 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_e8._8_4_ = SUB84(dVar1,0);
    local_e8._0_8_ =
         local_c8.Rotation.XY.m128d_f64[0] * dVar4 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar5 * local_c8.Rotation.ZW.m128d_f64[1] +
         dVar3 * local_c8.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         local_c8.Rotation.ZW.m128d_f64[0] * dVar6 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_e8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_d8._8_4_ = SUB84(dVar2,0);
    local_d8._0_8_ =
         local_c8.Rotation.XY.m128d_f64[0] * dVar6 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar3 * local_c8.Rotation.ZW.m128d_f64[1] +
         dVar5 * local_c8.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         local_c8.Rotation.ZW.m128d_f64[0] * dVar4 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    pTVar7 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_e8,&local_100);
    dVar1 = pTVar7->Yaw;
    (__return_storage_ptr__->Rotation).Pitch = pTVar7->Pitch;
    (__return_storage_ptr__->Rotation).Yaw = dVar1;
    (__return_storage_ptr__->Rotation).Roll = pTVar7->Roll;
    __return_storage_ptr__->FieldOfView = local_108[0] + param_1->FieldOfView;
    __return_storage_ptr__->ConstrainAspectRatio = param_1->bConstrainAspectRatio;
    __return_storage_ptr__->OverrideAspectRatioAxisConstraint =
         param_1->bOverrideAspectRatioAxisConstraint;
    (__return_storage_ptr__->AspectRatioAxisConstraint).Value =
         (param_1->AspectRatioAxisConstraint).Value;
    __return_storage_ptr__->SensorWidth =
         param_1->AspectRatio * __return_storage_ptr__->SensorHeight;
  }
  return __return_storage_ptr__;
}

// MakeCameraPoseFromCineCameraComponent @ 14d5b5f00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraPose * __cdecl
UBlueprintCameraPoseFunctionLibrary::MakeCameraPoseFromCineCameraComponent
          (FBlueprintCameraPose *__return_storage_ptr__,UCineCameraComponent *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar17;
  TEnumAsByte<ECameraProjectionMode::Type> TVar18;
  undefined7 uVar19;
  FBlueprintCameraPose *pFVar20;
  FBlueprintCameraPose local_98;
  
  pFVar20 = MakeCameraPoseFromCameraComponent(&local_98,(UCameraComponent *)param_1);
  dVar3 = (pFVar20->Location).field0_0x0._s_0.Y;
  dVar4 = (pFVar20->Location).field0_0x0._s_0.Z;
  dVar5 = (pFVar20->Rotation).Pitch;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (pFVar20->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar3;
  dVar3 = (pFVar20->Rotation).Yaw;
  dVar6 = (pFVar20->Rotation).Roll;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar4;
  (__return_storage_ptr__->Rotation).Pitch = dVar5;
  dVar4 = pFVar20->TargetDistance;
  fVar1 = pFVar20->FieldOfView;
  fVar2 = pFVar20->FocalLength;
  (__return_storage_ptr__->Rotation).Yaw = dVar3;
  (__return_storage_ptr__->Rotation).Roll = dVar6;
  fVar7 = pFVar20->OrthographicWidth;
  fVar8 = pFVar20->Aperture;
  fVar9 = pFVar20->ShutterSpeed;
  fVar10 = pFVar20->FocusDistance;
  __return_storage_ptr__->TargetDistance = dVar4;
  __return_storage_ptr__->FieldOfView = fVar1;
  __return_storage_ptr__->FocalLength = fVar2;
  fVar1 = pFVar20->SensorWidth;
  fVar2 = pFVar20->SensorHeight;
  fVar11 = pFVar20->SensorHorizontalOffset;
  fVar12 = pFVar20->SensorVerticalOffset;
  __return_storage_ptr__->OrthographicWidth = fVar7;
  __return_storage_ptr__->Aperture = fVar8;
  __return_storage_ptr__->ShutterSpeed = fVar9;
  __return_storage_ptr__->FocusDistance = fVar10;
  fVar7 = pFVar20->ISO;
  fVar8 = pFVar20->SqueezeFactor;
  fVar9 = pFVar20->Overscan;
  iVar13 = pFVar20->DiaphragmBladeCount;
  __return_storage_ptr__->SensorWidth = fVar1;
  __return_storage_ptr__->SensorHeight = fVar2;
  __return_storage_ptr__->SensorHorizontalOffset = fVar11;
  __return_storage_ptr__->SensorVerticalOffset = fVar12;
  fVar1 = pFVar20->NearClippingPlane;
  fVar2 = pFVar20->FarClippingPlane;
  fVar10 = pFVar20->PhysicalCameraBlendWeight;
  bVar14 = pFVar20->EnablePhysicalCamera;
  bVar15 = pFVar20->ConstrainAspectRatio;
  bVar16 = pFVar20->OverrideAspectRatioAxisConstraint;
  TVar17.Value = (pFVar20->AspectRatioAxisConstraint).Value;
  __return_storage_ptr__->ISO = fVar7;
  __return_storage_ptr__->SqueezeFactor = fVar8;
  __return_storage_ptr__->Overscan = fVar9;
  __return_storage_ptr__->DiaphragmBladeCount = iVar13;
  TVar18.Value = (pFVar20->ProjectionMode).Value;
  uVar19 = *(undefined7 *)&pFVar20->field_0x81;
  __return_storage_ptr__->NearClippingPlane = fVar1;
  __return_storage_ptr__->FarClippingPlane = fVar2;
  __return_storage_ptr__->PhysicalCameraBlendWeight = fVar10;
  __return_storage_ptr__->EnablePhysicalCamera = bVar14;
  __return_storage_ptr__->ConstrainAspectRatio = bVar15;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint = bVar16;
  __return_storage_ptr__->AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar17.Value;
  __return_storage_ptr__->ProjectionMode = (TEnumAsByte<ECameraProjectionMode::Type>)TVar18.Value;
  *(undefined7 *)&__return_storage_ptr__->field_0x81 = uVar19;
  if (param_1 != (UCineCameraComponent *)0x0) {
    fVar1 = param_1->CurrentFocusDistance;
    __return_storage_ptr__->FocalLength = param_1->CurrentFocalLength;
    __return_storage_ptr__->Aperture = param_1->CurrentAperture;
    __return_storage_ptr__->SensorWidth = (param_1->Filmback).SensorWidth;
    __return_storage_ptr__->SensorHeight = (param_1->Filmback).SensorHeight;
    fVar2 = (param_1->LensSettings).SqueezeFactor;
    __return_storage_ptr__->FieldOfView = -1.0;
    __return_storage_ptr__->SqueezeFactor = fVar2;
    __return_storage_ptr__->TargetDistance = (double)fVar1;
  }
  return __return_storage_ptr__;
}

// SetFieldOfView @ 14d5ce8f0

FBlueprintCameraPose * __cdecl
UBlueprintCameraPoseFunctionLibrary::SetFieldOfView
          (FBlueprintCameraPose *__return_storage_ptr__,FBlueprintCameraPose *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar17;
  TEnumAsByte<ECameraProjectionMode::Type> TVar18;
  undefined7 uVar19;
  
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  dVar2 = (param_1->Location).field0_0x0._s_0.Z;
  dVar3 = (param_1->Rotation).Pitch;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).Yaw;
  dVar4 = (param_1->Rotation).Roll;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Rotation).Pitch = dVar3;
  dVar2 = param_1->TargetDistance;
  fVar5 = param_1->FieldOfView;
  fVar6 = param_1->FocalLength;
  (__return_storage_ptr__->Rotation).Yaw = dVar1;
  (__return_storage_ptr__->Rotation).Roll = dVar4;
  fVar7 = param_1->OrthographicWidth;
  fVar8 = param_1->Aperture;
  fVar9 = param_1->ShutterSpeed;
  fVar10 = param_1->FocusDistance;
  __return_storage_ptr__->TargetDistance = dVar2;
  __return_storage_ptr__->FieldOfView = fVar5;
  __return_storage_ptr__->FocalLength = fVar6;
  fVar5 = param_1->SensorWidth;
  fVar6 = param_1->SensorHeight;
  fVar11 = param_1->SensorHorizontalOffset;
  fVar12 = param_1->SensorVerticalOffset;
  __return_storage_ptr__->OrthographicWidth = fVar7;
  __return_storage_ptr__->Aperture = fVar8;
  __return_storage_ptr__->ShutterSpeed = fVar9;
  __return_storage_ptr__->FocusDistance = fVar10;
  fVar7 = param_1->ISO;
  fVar8 = param_1->SqueezeFactor;
  fVar9 = param_1->Overscan;
  iVar13 = param_1->DiaphragmBladeCount;
  __return_storage_ptr__->SensorWidth = fVar5;
  __return_storage_ptr__->SensorHeight = fVar6;
  __return_storage_ptr__->SensorHorizontalOffset = fVar11;
  __return_storage_ptr__->SensorVerticalOffset = fVar12;
  fVar5 = param_1->NearClippingPlane;
  fVar6 = param_1->FarClippingPlane;
  fVar10 = param_1->PhysicalCameraBlendWeight;
  bVar14 = param_1->EnablePhysicalCamera;
  bVar15 = param_1->ConstrainAspectRatio;
  bVar16 = param_1->OverrideAspectRatioAxisConstraint;
  TVar17.Value = (param_1->AspectRatioAxisConstraint).Value;
  __return_storage_ptr__->ISO = fVar7;
  __return_storage_ptr__->SqueezeFactor = fVar8;
  __return_storage_ptr__->Overscan = fVar9;
  __return_storage_ptr__->DiaphragmBladeCount = iVar13;
  TVar18.Value = (param_1->ProjectionMode).Value;
  uVar19 = *(undefined7 *)&param_1->field_0x81;
  __return_storage_ptr__->NearClippingPlane = fVar5;
  __return_storage_ptr__->FarClippingPlane = fVar6;
  __return_storage_ptr__->PhysicalCameraBlendWeight = fVar10;
  __return_storage_ptr__->EnablePhysicalCamera = bVar14;
  __return_storage_ptr__->ConstrainAspectRatio = bVar15;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint = bVar16;
  __return_storage_ptr__->AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar17.Value;
  __return_storage_ptr__->ProjectionMode = (TEnumAsByte<ECameraProjectionMode::Type>)TVar18.Value;
  *(undefined7 *)&__return_storage_ptr__->field_0x81 = uVar19;
  __return_storage_ptr__->FieldOfView = param_2;
  return __return_storage_ptr__;
}

// SetFocalLength @ 14d5ceaf0

FBlueprintCameraPose * __cdecl
UBlueprintCameraPoseFunctionLibrary::SetFocalLength
          (FBlueprintCameraPose *__return_storage_ptr__,FBlueprintCameraPose *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar17;
  TEnumAsByte<ECameraProjectionMode::Type> TVar18;
  undefined7 uVar19;
  
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  dVar2 = (param_1->Location).field0_0x0._s_0.Z;
  dVar3 = (param_1->Rotation).Pitch;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).Yaw;
  dVar4 = (param_1->Rotation).Roll;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Rotation).Pitch = dVar3;
  dVar2 = param_1->TargetDistance;
  fVar5 = param_1->FieldOfView;
  fVar6 = param_1->FocalLength;
  (__return_storage_ptr__->Rotation).Yaw = dVar1;
  (__return_storage_ptr__->Rotation).Roll = dVar4;
  fVar7 = param_1->OrthographicWidth;
  fVar8 = param_1->Aperture;
  fVar9 = param_1->ShutterSpeed;
  fVar10 = param_1->FocusDistance;
  __return_storage_ptr__->TargetDistance = dVar2;
  __return_storage_ptr__->FieldOfView = fVar5;
  __return_storage_ptr__->FocalLength = fVar6;
  fVar5 = param_1->SensorWidth;
  fVar6 = param_1->SensorHeight;
  fVar11 = param_1->SensorHorizontalOffset;
  fVar12 = param_1->SensorVerticalOffset;
  __return_storage_ptr__->OrthographicWidth = fVar7;
  __return_storage_ptr__->Aperture = fVar8;
  __return_storage_ptr__->ShutterSpeed = fVar9;
  __return_storage_ptr__->FocusDistance = fVar10;
  fVar7 = param_1->ISO;
  fVar8 = param_1->SqueezeFactor;
  fVar9 = param_1->Overscan;
  iVar13 = param_1->DiaphragmBladeCount;
  __return_storage_ptr__->SensorWidth = fVar5;
  __return_storage_ptr__->SensorHeight = fVar6;
  __return_storage_ptr__->SensorHorizontalOffset = fVar11;
  __return_storage_ptr__->SensorVerticalOffset = fVar12;
  fVar5 = param_1->NearClippingPlane;
  fVar6 = param_1->FarClippingPlane;
  fVar10 = param_1->PhysicalCameraBlendWeight;
  bVar14 = param_1->EnablePhysicalCamera;
  bVar15 = param_1->ConstrainAspectRatio;
  bVar16 = param_1->OverrideAspectRatioAxisConstraint;
  TVar17.Value = (param_1->AspectRatioAxisConstraint).Value;
  __return_storage_ptr__->ISO = fVar7;
  __return_storage_ptr__->SqueezeFactor = fVar8;
  __return_storage_ptr__->Overscan = fVar9;
  __return_storage_ptr__->DiaphragmBladeCount = iVar13;
  TVar18.Value = (param_1->ProjectionMode).Value;
  uVar19 = *(undefined7 *)&param_1->field_0x81;
  __return_storage_ptr__->NearClippingPlane = fVar5;
  __return_storage_ptr__->FarClippingPlane = fVar6;
  __return_storage_ptr__->PhysicalCameraBlendWeight = fVar10;
  __return_storage_ptr__->EnablePhysicalCamera = bVar14;
  __return_storage_ptr__->ConstrainAspectRatio = bVar15;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint = bVar16;
  __return_storage_ptr__->AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar17.Value;
  __return_storage_ptr__->ProjectionMode = (TEnumAsByte<ECameraProjectionMode::Type>)TVar18.Value;
  *(undefined7 *)&__return_storage_ptr__->field_0x81 = uVar19;
  __return_storage_ptr__->FocalLength = param_2;
  return __return_storage_ptr__;
}

// SetLocation @ 14d5cecd0

FBlueprintCameraPose * __cdecl
UBlueprintCameraPoseFunctionLibrary::SetLocation
          (FBlueprintCameraPose *__return_storage_ptr__,FBlueprintCameraPose *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar16;
  TEnumAsByte<ECameraProjectionMode::Type> TVar17;
  undefined7 uVar18;
  
  dVar1 = (param_1->Rotation).Pitch;
  dVar2 = (param_1->Rotation).Yaw;
  dVar3 = (param_1->Rotation).Roll;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Rotation).Pitch = dVar1;
  dVar1 = param_1->TargetDistance;
  fVar4 = param_1->FieldOfView;
  fVar5 = param_1->FocalLength;
  (__return_storage_ptr__->Rotation).Yaw = dVar2;
  (__return_storage_ptr__->Rotation).Roll = dVar3;
  fVar6 = param_1->OrthographicWidth;
  fVar7 = param_1->Aperture;
  fVar8 = param_1->ShutterSpeed;
  fVar9 = param_1->FocusDistance;
  __return_storage_ptr__->TargetDistance = dVar1;
  __return_storage_ptr__->FieldOfView = fVar4;
  __return_storage_ptr__->FocalLength = fVar5;
  fVar4 = param_1->SensorWidth;
  fVar5 = param_1->SensorHeight;
  fVar10 = param_1->SensorHorizontalOffset;
  fVar11 = param_1->SensorVerticalOffset;
  __return_storage_ptr__->OrthographicWidth = fVar6;
  __return_storage_ptr__->Aperture = fVar7;
  __return_storage_ptr__->ShutterSpeed = fVar8;
  __return_storage_ptr__->FocusDistance = fVar9;
  fVar6 = param_1->ISO;
  fVar7 = param_1->SqueezeFactor;
  fVar8 = param_1->Overscan;
  iVar12 = param_1->DiaphragmBladeCount;
  __return_storage_ptr__->SensorWidth = fVar4;
  __return_storage_ptr__->SensorHeight = fVar5;
  __return_storage_ptr__->SensorHorizontalOffset = fVar10;
  __return_storage_ptr__->SensorVerticalOffset = fVar11;
  fVar4 = param_1->NearClippingPlane;
  fVar5 = param_1->FarClippingPlane;
  fVar9 = param_1->PhysicalCameraBlendWeight;
  bVar13 = param_1->EnablePhysicalCamera;
  bVar14 = param_1->ConstrainAspectRatio;
  bVar15 = param_1->OverrideAspectRatioAxisConstraint;
  TVar16.Value = (param_1->AspectRatioAxisConstraint).Value;
  __return_storage_ptr__->ISO = fVar6;
  __return_storage_ptr__->SqueezeFactor = fVar7;
  __return_storage_ptr__->Overscan = fVar8;
  __return_storage_ptr__->DiaphragmBladeCount = iVar12;
  TVar17.Value = (param_1->ProjectionMode).Value;
  uVar18 = *(undefined7 *)&param_1->field_0x81;
  __return_storage_ptr__->NearClippingPlane = fVar4;
  __return_storage_ptr__->FarClippingPlane = fVar5;
  __return_storage_ptr__->PhysicalCameraBlendWeight = fVar9;
  __return_storage_ptr__->EnablePhysicalCamera = bVar13;
  __return_storage_ptr__->ConstrainAspectRatio = bVar14;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint = bVar15;
  __return_storage_ptr__->AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar16.Value;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  __return_storage_ptr__->ProjectionMode = (TEnumAsByte<ECameraProjectionMode::Type>)TVar17.Value;
  *(undefined7 *)&__return_storage_ptr__->field_0x81 = uVar18;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// SetRotation @ 14d5cee40

FBlueprintCameraPose * __cdecl
UBlueprintCameraPoseFunctionLibrary::SetRotation
          (FBlueprintCameraPose *__return_storage_ptr__,FBlueprintCameraPose *param_1,
          TRotator<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar17;
  TEnumAsByte<ECameraProjectionMode::Type> TVar18;
  undefined7 uVar19;
  
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  dVar2 = (param_1->Location).field0_0x0._s_0.Z;
  dVar3 = (param_1->Rotation).Pitch;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).Yaw;
  dVar4 = (param_1->Rotation).Roll;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Rotation).Pitch = dVar3;
  dVar2 = param_1->TargetDistance;
  fVar5 = param_1->FieldOfView;
  fVar6 = param_1->FocalLength;
  (__return_storage_ptr__->Rotation).Yaw = dVar1;
  (__return_storage_ptr__->Rotation).Roll = dVar4;
  fVar7 = param_1->OrthographicWidth;
  fVar8 = param_1->Aperture;
  fVar9 = param_1->ShutterSpeed;
  fVar10 = param_1->FocusDistance;
  __return_storage_ptr__->TargetDistance = dVar2;
  __return_storage_ptr__->FieldOfView = fVar5;
  __return_storage_ptr__->FocalLength = fVar6;
  fVar5 = param_1->SensorWidth;
  fVar6 = param_1->SensorHeight;
  fVar11 = param_1->SensorHorizontalOffset;
  fVar12 = param_1->SensorVerticalOffset;
  __return_storage_ptr__->OrthographicWidth = fVar7;
  __return_storage_ptr__->Aperture = fVar8;
  __return_storage_ptr__->ShutterSpeed = fVar9;
  __return_storage_ptr__->FocusDistance = fVar10;
  fVar7 = param_1->ISO;
  fVar8 = param_1->SqueezeFactor;
  fVar9 = param_1->Overscan;
  iVar13 = param_1->DiaphragmBladeCount;
  __return_storage_ptr__->SensorWidth = fVar5;
  __return_storage_ptr__->SensorHeight = fVar6;
  __return_storage_ptr__->SensorHorizontalOffset = fVar11;
  __return_storage_ptr__->SensorVerticalOffset = fVar12;
  fVar5 = param_1->NearClippingPlane;
  fVar6 = param_1->FarClippingPlane;
  fVar10 = param_1->PhysicalCameraBlendWeight;
  bVar14 = param_1->EnablePhysicalCamera;
  bVar15 = param_1->ConstrainAspectRatio;
  bVar16 = param_1->OverrideAspectRatioAxisConstraint;
  TVar17.Value = (param_1->AspectRatioAxisConstraint).Value;
  __return_storage_ptr__->ISO = fVar7;
  __return_storage_ptr__->SqueezeFactor = fVar8;
  __return_storage_ptr__->Overscan = fVar9;
  __return_storage_ptr__->DiaphragmBladeCount = iVar13;
  TVar18.Value = (param_1->ProjectionMode).Value;
  uVar19 = *(undefined7 *)&param_1->field_0x81;
  __return_storage_ptr__->NearClippingPlane = fVar5;
  __return_storage_ptr__->FarClippingPlane = fVar6;
  __return_storage_ptr__->PhysicalCameraBlendWeight = fVar10;
  __return_storage_ptr__->EnablePhysicalCamera = bVar14;
  __return_storage_ptr__->ConstrainAspectRatio = bVar15;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint = bVar16;
  __return_storage_ptr__->AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar17.Value;
  dVar1 = param_2->Roll;
  __return_storage_ptr__->ProjectionMode = (TEnumAsByte<ECameraProjectionMode::Type>)TVar18.Value;
  *(undefined7 *)&__return_storage_ptr__->field_0x81 = uVar19;
  dVar2 = param_2->Yaw;
  (__return_storage_ptr__->Rotation).Pitch = param_2->Pitch;
  (__return_storage_ptr__->Rotation).Yaw = dVar2;
  (__return_storage_ptr__->Rotation).Roll = dVar1;
  return __return_storage_ptr__;
}

// SetTargetDistance @ 14d5cf120

FBlueprintCameraPose * __cdecl
UBlueprintCameraPoseFunctionLibrary::SetTargetDistance
          (FBlueprintCameraPose *__return_storage_ptr__,FBlueprintCameraPose *param_1,double param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar17;
  TEnumAsByte<ECameraProjectionMode::Type> TVar18;
  undefined7 uVar19;
  
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  dVar2 = (param_1->Location).field0_0x0._s_0.Z;
  dVar3 = (param_1->Rotation).Pitch;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).Yaw;
  dVar4 = (param_1->Rotation).Roll;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Rotation).Pitch = dVar3;
  dVar2 = param_1->TargetDistance;
  fVar5 = param_1->FieldOfView;
  fVar6 = param_1->FocalLength;
  (__return_storage_ptr__->Rotation).Yaw = dVar1;
  (__return_storage_ptr__->Rotation).Roll = dVar4;
  fVar7 = param_1->OrthographicWidth;
  fVar8 = param_1->Aperture;
  fVar9 = param_1->ShutterSpeed;
  fVar10 = param_1->FocusDistance;
  __return_storage_ptr__->TargetDistance = dVar2;
  __return_storage_ptr__->FieldOfView = fVar5;
  __return_storage_ptr__->FocalLength = fVar6;
  fVar5 = param_1->SensorWidth;
  fVar6 = param_1->SensorHeight;
  fVar11 = param_1->SensorHorizontalOffset;
  fVar12 = param_1->SensorVerticalOffset;
  __return_storage_ptr__->OrthographicWidth = fVar7;
  __return_storage_ptr__->Aperture = fVar8;
  __return_storage_ptr__->ShutterSpeed = fVar9;
  __return_storage_ptr__->FocusDistance = fVar10;
  fVar7 = param_1->ISO;
  fVar8 = param_1->SqueezeFactor;
  fVar9 = param_1->Overscan;
  iVar13 = param_1->DiaphragmBladeCount;
  __return_storage_ptr__->SensorWidth = fVar5;
  __return_storage_ptr__->SensorHeight = fVar6;
  __return_storage_ptr__->SensorHorizontalOffset = fVar11;
  __return_storage_ptr__->SensorVerticalOffset = fVar12;
  fVar5 = param_1->NearClippingPlane;
  fVar6 = param_1->FarClippingPlane;
  fVar10 = param_1->PhysicalCameraBlendWeight;
  bVar14 = param_1->EnablePhysicalCamera;
  bVar15 = param_1->ConstrainAspectRatio;
  bVar16 = param_1->OverrideAspectRatioAxisConstraint;
  TVar17.Value = (param_1->AspectRatioAxisConstraint).Value;
  __return_storage_ptr__->ISO = fVar7;
  __return_storage_ptr__->SqueezeFactor = fVar8;
  __return_storage_ptr__->Overscan = fVar9;
  __return_storage_ptr__->DiaphragmBladeCount = iVar13;
  TVar18.Value = (param_1->ProjectionMode).Value;
  uVar19 = *(undefined7 *)&param_1->field_0x81;
  __return_storage_ptr__->NearClippingPlane = fVar5;
  __return_storage_ptr__->FarClippingPlane = fVar6;
  __return_storage_ptr__->PhysicalCameraBlendWeight = fVar10;
  __return_storage_ptr__->EnablePhysicalCamera = bVar14;
  __return_storage_ptr__->ConstrainAspectRatio = bVar15;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint = bVar16;
  __return_storage_ptr__->AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar17.Value;
  __return_storage_ptr__->ProjectionMode = (TEnumAsByte<ECameraProjectionMode::Type>)TVar18.Value;
  *(undefined7 *)&__return_storage_ptr__->field_0x81 = uVar19;
  __return_storage_ptr__->TargetDistance = param_2;
  return __return_storage_ptr__;
}

// SetTransform @ 14d5cf290

FBlueprintCameraPose * __cdecl
UBlueprintCameraPoseFunctionLibrary::SetTransform
          (FBlueprintCameraPose *__return_storage_ptr__,FBlueprintCameraPose *param_1,
          TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar16;
  TEnumAsByte<ECameraProjectionMode::Type> TVar17;
  undefined7 uVar18;
  TRotator<double> *pTVar19;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  dVar1 = (param_1->Rotation).Pitch;
  dVar2 = (param_1->Rotation).Yaw;
  dVar3 = (param_1->Rotation).Roll;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Rotation).Pitch = dVar1;
  dVar1 = param_1->TargetDistance;
  fVar4 = param_1->FieldOfView;
  fVar5 = param_1->FocalLength;
  (__return_storage_ptr__->Rotation).Yaw = dVar2;
  (__return_storage_ptr__->Rotation).Roll = dVar3;
  fVar6 = param_1->OrthographicWidth;
  fVar7 = param_1->Aperture;
  fVar8 = param_1->ShutterSpeed;
  fVar9 = param_1->FocusDistance;
  __return_storage_ptr__->TargetDistance = dVar1;
  __return_storage_ptr__->FieldOfView = fVar4;
  __return_storage_ptr__->FocalLength = fVar5;
  fVar4 = param_1->SensorWidth;
  fVar5 = param_1->SensorHeight;
  fVar10 = param_1->SensorHorizontalOffset;
  fVar11 = param_1->SensorVerticalOffset;
  __return_storage_ptr__->OrthographicWidth = fVar6;
  __return_storage_ptr__->Aperture = fVar7;
  __return_storage_ptr__->ShutterSpeed = fVar8;
  __return_storage_ptr__->FocusDistance = fVar9;
  fVar6 = param_1->ISO;
  fVar7 = param_1->SqueezeFactor;
  fVar8 = param_1->Overscan;
  iVar12 = param_1->DiaphragmBladeCount;
  __return_storage_ptr__->SensorWidth = fVar4;
  __return_storage_ptr__->SensorHeight = fVar5;
  __return_storage_ptr__->SensorHorizontalOffset = fVar10;
  __return_storage_ptr__->SensorVerticalOffset = fVar11;
  fVar4 = param_1->NearClippingPlane;
  fVar5 = param_1->FarClippingPlane;
  fVar9 = param_1->PhysicalCameraBlendWeight;
  bVar13 = param_1->EnablePhysicalCamera;
  bVar14 = param_1->ConstrainAspectRatio;
  bVar15 = param_1->OverrideAspectRatioAxisConstraint;
  TVar16.Value = (param_1->AspectRatioAxisConstraint).Value;
  __return_storage_ptr__->ISO = fVar6;
  __return_storage_ptr__->SqueezeFactor = fVar7;
  __return_storage_ptr__->Overscan = fVar8;
  __return_storage_ptr__->DiaphragmBladeCount = iVar12;
  TVar17.Value = (param_1->ProjectionMode).Value;
  uVar18 = *(undefined7 *)&param_1->field_0x81;
  __return_storage_ptr__->NearClippingPlane = fVar4;
  __return_storage_ptr__->FarClippingPlane = fVar5;
  __return_storage_ptr__->PhysicalCameraBlendWeight = fVar9;
  __return_storage_ptr__->EnablePhysicalCamera = bVar13;
  __return_storage_ptr__->ConstrainAspectRatio = bVar14;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint = bVar15;
  __return_storage_ptr__->AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar16.Value;
  local_28.X = (param_2->Rotation).XY.m128d_f64[0];
  local_28.Y = (param_2->Rotation).XY.m128d_f64[1];
  __return_storage_ptr__->ProjectionMode = (TEnumAsByte<ECameraProjectionMode::Type>)TVar17.Value;
  *(undefined7 *)&__return_storage_ptr__->field_0x81 = uVar18;
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  local_28.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_28.W = (param_2->Rotation).ZW.m128d_f64[1];
  pTVar19 = UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
  dVar2 = pTVar19->Yaw;
  dVar1 = pTVar19->Roll;
  (__return_storage_ptr__->Rotation).Pitch = pTVar19->Pitch;
  (__return_storage_ptr__->Rotation).Yaw = dVar2;
  (__return_storage_ptr__->Rotation).Roll = dVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUBlueprintCameraPoseFunctionLibrary @ 14d5d0c40

void __cdecl
UBlueprintCameraPoseFunctionLibrary::StaticRegisterNativesUBlueprintCameraPoseFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAimDir @ 14d5d87f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetAimDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_c8 [48];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  local_90 = 0xbf800000;
  local_c8[0x10] = '\0';
  local_c8[0x11] = '\0';
  local_c8[0x12] = '\0';
  local_c8[0x13] = '\0';
  local_c8[0x14] = '\0';
  local_c8[0x15] = '\0';
  local_c8[0x16] = '\0';
  local_c8[0x17] = '\0';
  local_c8[0x18] = '\0';
  local_c8[0x19] = '\0';
  local_c8[0x1a] = '\0';
  local_c8[0x1b] = '\0';
  local_c8[0x1c] = '\0';
  local_c8[0x1d] = '\0';
  local_c8[0x1e] = '\0';
  local_c8[0x1f] = '\0';
  local_98 = __real_408f400000000000;
  local_c8[0] = '\0';
  local_c8[1] = '\0';
  local_c8[2] = '\0';
  local_c8[3] = '\0';
  local_c8[4] = '\0';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  local_c8[8] = '\0';
  local_c8[9] = '\0';
  local_c8[10] = '\0';
  local_c8[0xb] = '\0';
  local_c8[0xc] = '\0';
  local_c8[0xd] = '\0';
  local_c8[0xe] = '\0';
  local_c8[0xf] = '\0';
  local_c8[0x20] = '\0';
  local_c8[0x21] = '\0';
  local_c8[0x22] = '\0';
  local_c8[0x23] = '\0';
  local_c8[0x24] = '\0';
  local_c8[0x25] = '\0';
  local_c8[0x26] = '\0';
  local_c8[0x27] = '\0';
  local_c8[0x28] = '\0';
  local_c8[0x29] = '\0';
  local_c8[0x2a] = '\0';
  local_c8[0x2b] = '\0';
  local_c8[0x2c] = '\0';
  local_c8[0x2d] = '\0';
  local_c8[0x2e] = '\0';
  local_c8[0x2f] = '\0';
  local_78 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_70 = _UNK_1513d9ee8;
  local_8c = 0x420c0000;
  local_88 = ___xmm_bf800000427000004033333344c00000;
  uStack_80 = _UNK_152b79ac8;
  local_68 = 0x42c80000;
  local_64 = 0x3f800000;
  local_5c = 8;
  local_58 = 0x41200000;
  local_54 = 0xbf800000;
  local_50 = 0;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_38._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_38._s_0.Y = _UNK_150689518;
  puVar2 = local_c8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_38._s_0.Z = 0.0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Math::TRotator<double>::RotateVector
            ((TRotator<double> *)(puVar2 + 0x18),(TVector<double> *)&local_20._s_0,
             (TVector<double> *)&local_38._s_0);
  *(double *)param_3 = local_20._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_20._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_20._s_0.Z;
  return;
}

// execGetAimRay @ 14d5d8940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetAimRay(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  double dVar7;
  TVector<double> *pTVar8;
  uchar *puVar9;
  uchar local_f8 [48];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_78;
  TVector<double>_u_0 local_68 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  TVector<double> local_20;
  
  local_c0 = 0xbf800000;
  local_f8[0x10] = '\0';
  local_f8[0x11] = '\0';
  local_f8[0x12] = '\0';
  local_f8[0x13] = '\0';
  local_f8[0x14] = '\0';
  local_f8[0x15] = '\0';
  local_f8[0x16] = '\0';
  local_f8[0x17] = '\0';
  local_f8[0x18] = '\0';
  local_f8[0x19] = '\0';
  local_f8[0x1a] = '\0';
  local_f8[0x1b] = '\0';
  local_f8[0x1c] = '\0';
  local_f8[0x1d] = '\0';
  local_f8[0x1e] = '\0';
  local_f8[0x1f] = '\0';
  local_c8 = __real_408f400000000000;
  local_f8[0] = '\0';
  local_f8[1] = '\0';
  local_f8[2] = '\0';
  local_f8[3] = '\0';
  local_f8[4] = '\0';
  local_f8[5] = '\0';
  local_f8[6] = '\0';
  local_f8[7] = '\0';
  local_f8[8] = '\0';
  local_f8[9] = '\0';
  local_f8[10] = '\0';
  local_f8[0xb] = '\0';
  local_f8[0xc] = '\0';
  local_f8[0xd] = '\0';
  local_f8[0xe] = '\0';
  local_f8[0xf] = '\0';
  local_f8[0x20] = '\0';
  local_f8[0x21] = '\0';
  local_f8[0x22] = '\0';
  local_f8[0x23] = '\0';
  local_f8[0x24] = '\0';
  local_f8[0x25] = '\0';
  local_f8[0x26] = '\0';
  local_f8[0x27] = '\0';
  local_f8[0x28] = '\0';
  local_f8[0x29] = '\0';
  local_f8[0x2a] = '\0';
  local_f8[0x2b] = '\0';
  local_f8[0x2c] = '\0';
  local_f8[0x2d] = '\0';
  local_f8[0x2e] = '\0';
  local_f8[0x2f] = '\0';
  local_a8 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_a0 = _UNK_1513d9ee8;
  local_bc = 0x420c0000;
  local_b8 = ___xmm_bf800000427000004033333344c00000;
  uStack_b0 = _UNK_152b79ac8;
  local_98 = 0x42c80000;
  local_94 = 0x3f800000;
  local_8c = 8;
  local_88 = 0x41200000;
  local_84 = 0xbf800000;
  local_80 = 0;
  local_78 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_68[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_68[0]._s_0.Y = _UNK_150689518;
  puVar9 = local_f8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  local_68[0]._s_0.Z = 0.0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar8 = UE::Math::TRotator<double>::RotateVector
                     ((TRotator<double> *)(puVar9 + 0x18),&local_20,
                      (TVector<double> *)&local_68[0]._s_0);
  uVar6 = *(undefined8 *)(puVar9 + 8);
  uVar4 = *(undefined4 *)(puVar9 + 0x10);
  uVar5 = *(undefined4 *)(puVar9 + 0x14);
  uVar3 = *(undefined8 *)&pTVar8->field0_0x0;
  dVar7 = (pTVar8->field0_0x0)._s_0.Y;
  dVar1 = (pTVar8->field0_0x0)._s_0.Z;
  *(undefined8 *)param_3 = *(undefined8 *)puVar9;
  *(undefined8 *)((longlong)param_3 + 8) = uVar6;
  local_38 = (undefined4)uVar3;
  uStack_34 = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_38;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_34;
  *(double *)((longlong)param_3 + 0x20) = dVar7;
  *(double *)((longlong)param_3 + 0x28) = dVar1;
  return;
}

// execGetEffectiveFieldOfView @ 14d5d9b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetEffectiveFieldOfView
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  uchar *puVar3;
  double dVar4;
  uchar local_a8 [48];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined1 local_28;
  
  fVar2 = __real_3f800000;
  local_a8[0x10] = '\0';
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  local_a8[0x18] = '\0';
  local_a8[0x19] = '\0';
  local_a8[0x1a] = '\0';
  local_a8[0x1b] = '\0';
  local_a8[0x1c] = '\0';
  local_a8[0x1d] = '\0';
  local_a8[0x1e] = '\0';
  local_a8[0x1f] = '\0';
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  local_a8[0x20] = '\0';
  local_a8[0x21] = '\0';
  local_a8[0x22] = '\0';
  local_a8[0x23] = '\0';
  local_a8[0x24] = '\0';
  local_a8[0x25] = '\0';
  local_a8[0x26] = '\0';
  local_a8[0x27] = '\0';
  local_a8[0x28] = '\0';
  local_a8[0x29] = '\0';
  local_a8[0x2a] = '\0';
  local_a8[0x2b] = '\0';
  local_a8[0x2c] = '\0';
  local_a8[0x2d] = '\0';
  local_a8[0x2e] = '\0';
  local_a8[0x2f] = '\0';
  local_78 = __real_408f400000000000;
  local_58 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_50 = _UNK_1513d9ee8;
  local_70 = 0xbf800000;
  local_6c = 0x420c0000;
  local_68 = ___xmm_bf800000427000004033333344c00000;
  uStack_60 = _UNK_152b79ac8;
  local_48 = 0x42c80000;
  local_44 = 0x3f800000;
  local_3c = 8;
  local_38 = 0x41200000;
  local_34 = 0xbf800000;
  local_30 = 0;
  local_28 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar3 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar4 = FCameraPose::GetEffectiveFieldOfView
                    (*(float *)(puVar3 + 0x3c),*(float *)(puVar3 + 0x38),*(float *)(puVar3 + 0x50),
                     *(float *)(puVar3 + 0x54),*(float *)(puVar3 + 100),fVar2);
  *(double *)param_3 = dVar4;
  return;
}

// execGetFieldOfView @ 14d5d9de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetFieldOfView
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_98 [48];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = '\0';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  local_98[0x18] = '\0';
  local_98[0x19] = '\0';
  local_98[0x1a] = '\0';
  local_98[0x1b] = '\0';
  local_98[0x1c] = '\0';
  local_98[0x1d] = '\0';
  local_98[0x1e] = '\0';
  local_98[0x1f] = '\0';
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  local_68 = __real_408f400000000000;
  local_98[0x20] = '\0';
  local_98[0x21] = '\0';
  local_98[0x22] = '\0';
  local_98[0x23] = '\0';
  local_98[0x24] = '\0';
  local_98[0x25] = '\0';
  local_98[0x26] = '\0';
  local_98[0x27] = '\0';
  local_98[0x28] = '\0';
  local_98[0x29] = '\0';
  local_98[0x2a] = '\0';
  local_98[0x2b] = '\0';
  local_98[0x2c] = '\0';
  local_98[0x2d] = '\0';
  local_98[0x2e] = '\0';
  local_98[0x2f] = '\0';
  local_48 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_40 = _UNK_1513d9ee8;
  local_60 = 0xbf800000;
  local_5c = 0x420c0000;
  local_58 = ___xmm_bf800000427000004033333344c00000;
  uStack_50 = _UNK_152b79ac8;
  local_38 = 0x42c80000;
  local_34 = 0x3f800000;
  local_2c = 8;
  local_28 = 0x41200000;
  local_24 = 0xbf800000;
  local_20 = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar2 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(double *)param_3 = (double)*(float *)(puVar2 + 0x38);
  return;
}

// execGetFocalLength @ 14d5da0c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetFocalLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_98 [48];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = '\0';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  local_98[0x18] = '\0';
  local_98[0x19] = '\0';
  local_98[0x1a] = '\0';
  local_98[0x1b] = '\0';
  local_98[0x1c] = '\0';
  local_98[0x1d] = '\0';
  local_98[0x1e] = '\0';
  local_98[0x1f] = '\0';
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  local_68 = __real_408f400000000000;
  local_98[0x20] = '\0';
  local_98[0x21] = '\0';
  local_98[0x22] = '\0';
  local_98[0x23] = '\0';
  local_98[0x24] = '\0';
  local_98[0x25] = '\0';
  local_98[0x26] = '\0';
  local_98[0x27] = '\0';
  local_98[0x28] = '\0';
  local_98[0x29] = '\0';
  local_98[0x2a] = '\0';
  local_98[0x2b] = '\0';
  local_98[0x2c] = '\0';
  local_98[0x2d] = '\0';
  local_98[0x2e] = '\0';
  local_98[0x2f] = '\0';
  local_48 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_40 = _UNK_1513d9ee8;
  local_60 = 0xbf800000;
  local_5c = 0x420c0000;
  local_58 = ___xmm_bf800000427000004033333344c00000;
  uStack_50 = _UNK_152b79ac8;
  local_38 = 0x42c80000;
  local_34 = 0x3f800000;
  local_2c = 8;
  local_28 = 0x41200000;
  local_24 = 0xbf800000;
  local_20 = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar2 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(double *)param_3 = (double)*(float *)(puVar2 + 0x3c);
  return;
}

// execGetLocation @ 14d5da440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  uchar *puVar4;
  uchar local_98 [48];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = '\0';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  local_98[0x18] = '\0';
  local_98[0x19] = '\0';
  local_98[0x1a] = '\0';
  local_98[0x1b] = '\0';
  local_98[0x1c] = '\0';
  local_98[0x1d] = '\0';
  local_98[0x1e] = '\0';
  local_98[0x1f] = '\0';
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  local_68 = __real_408f400000000000;
  local_98[0x20] = '\0';
  local_98[0x21] = '\0';
  local_98[0x22] = '\0';
  local_98[0x23] = '\0';
  local_98[0x24] = '\0';
  local_98[0x25] = '\0';
  local_98[0x26] = '\0';
  local_98[0x27] = '\0';
  local_98[0x28] = '\0';
  local_98[0x29] = '\0';
  local_98[0x2a] = '\0';
  local_98[0x2b] = '\0';
  local_98[0x2c] = '\0';
  local_98[0x2d] = '\0';
  local_98[0x2e] = '\0';
  local_98[0x2f] = '\0';
  local_48 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_40 = _UNK_1513d9ee8;
  local_60 = 0xbf800000;
  local_5c = 0x420c0000;
  local_58 = ___xmm_bf800000427000004033333344c00000;
  uStack_50 = _UNK_152b79ac8;
  local_38 = 0x42c80000;
  local_34 = 0x3f800000;
  local_2c = 8;
  local_28 = 0x41200000;
  local_24 = 0xbf800000;
  local_20 = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar4 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = *(undefined8 *)(puVar4 + 8);
  uVar1 = *(undefined8 *)(puVar4 + 0x10);
  *(undefined8 *)param_3 = *(undefined8 *)puVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetRotation @ 14d5da7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  uchar *puVar4;
  uchar local_98 [48];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = '\0';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  local_98[0x18] = '\0';
  local_98[0x19] = '\0';
  local_98[0x1a] = '\0';
  local_98[0x1b] = '\0';
  local_98[0x1c] = '\0';
  local_98[0x1d] = '\0';
  local_98[0x1e] = '\0';
  local_98[0x1f] = '\0';
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  local_68 = __real_408f400000000000;
  local_98[0x20] = '\0';
  local_98[0x21] = '\0';
  local_98[0x22] = '\0';
  local_98[0x23] = '\0';
  local_98[0x24] = '\0';
  local_98[0x25] = '\0';
  local_98[0x26] = '\0';
  local_98[0x27] = '\0';
  local_98[0x28] = '\0';
  local_98[0x29] = '\0';
  local_98[0x2a] = '\0';
  local_98[0x2b] = '\0';
  local_98[0x2c] = '\0';
  local_98[0x2d] = '\0';
  local_98[0x2e] = '\0';
  local_98[0x2f] = '\0';
  local_48 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_40 = _UNK_1513d9ee8;
  local_60 = 0xbf800000;
  local_5c = 0x420c0000;
  local_58 = ___xmm_bf800000427000004033333344c00000;
  uStack_50 = _UNK_152b79ac8;
  local_38 = 0x42c80000;
  local_34 = 0x3f800000;
  local_2c = 8;
  local_28 = 0x41200000;
  local_24 = 0xbf800000;
  local_20 = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar4 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = *(undefined8 *)(puVar4 + 0x20);
  uVar1 = *(undefined8 *)(puVar4 + 0x28);
  *(undefined8 *)param_3 = *(undefined8 *)(puVar4 + 0x18);
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetSensorAspectRatio @ 14d5daac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetSensorAspectRatio
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  double dVar3;
  uchar local_a8 [48];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined1 local_28;
  
  local_a8[0x10] = '\0';
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  local_a8[0x18] = '\0';
  local_a8[0x19] = '\0';
  local_a8[0x1a] = '\0';
  local_a8[0x1b] = '\0';
  local_a8[0x1c] = '\0';
  local_a8[0x1d] = '\0';
  local_a8[0x1e] = '\0';
  local_a8[0x1f] = '\0';
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  local_a8[0x20] = '\0';
  local_a8[0x21] = '\0';
  local_a8[0x22] = '\0';
  local_a8[0x23] = '\0';
  local_a8[0x24] = '\0';
  local_a8[0x25] = '\0';
  local_a8[0x26] = '\0';
  local_a8[0x27] = '\0';
  local_a8[0x28] = '\0';
  local_a8[0x29] = '\0';
  local_a8[0x2a] = '\0';
  local_a8[0x2b] = '\0';
  local_a8[0x2c] = '\0';
  local_a8[0x2d] = '\0';
  local_a8[0x2e] = '\0';
  local_a8[0x2f] = '\0';
  local_78 = __real_408f400000000000;
  local_58 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_50 = _UNK_1513d9ee8;
  local_70 = 0xbf800000;
  local_6c = 0x420c0000;
  local_68 = ___xmm_bf800000427000004033333344c00000;
  uStack_60 = _UNK_152b79ac8;
  local_48 = 0x42c80000;
  local_44 = 0x3f800000;
  local_3c = 8;
  local_38 = 0x41200000;
  local_34 = 0xbf800000;
  local_30 = 0;
  local_28 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar2 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(float *)(puVar2 + 0x54) <= 0.0) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = (double)(*(float *)(puVar2 + 0x50) / *(float *)(puVar2 + 0x54));
  }
  *(double *)param_3 = dVar3;
  return;
}

// execGetTarget @ 14d5daf90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FProperty *pFVar4;
  double *pdVar5;
  double local_c8 [7];
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  local_90 = 0xbf800000;
  local_c8[2] = 0.0;
  local_c8[3] = 0.0;
  local_c8[6] = (double)__real_408f400000000000;
  local_c8[0] = 0.0;
  local_c8[1] = 0.0;
  local_c8[4] = 0.0;
  local_c8[5] = 0.0;
  local_78 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_70 = _UNK_1513d9ee8;
  local_8c = 0x420c0000;
  local_88 = ___xmm_bf800000427000004033333344c00000;
  uStack_80 = _UNK_152b79ac8;
  local_68 = 0x42c80000;
  local_64 = 0x3f800000;
  local_5c = 8;
  local_58 = 0x41200000;
  local_54 = 0xbf800000;
  local_50 = 0;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_20._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_20._s_0.Y = _UNK_150689518;
  pdVar5 = local_c8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_20._s_0.Z = 0.0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Math::TRotator<double>::RotateVector
            ((TRotator<double> *)(pdVar5 + 3),(TVector<double> *)&local_38._s_0,
             (TVector<double> *)&local_20._s_0);
  dVar1 = pdVar5[6];
  dVar2 = pdVar5[1];
  dVar3 = pdVar5[2];
  *(double *)param_3 = dVar1 * local_38._s_0.X + *pdVar5;
  *(double *)((longlong)param_3 + 8) = dVar1 * local_38._s_0.Y + dVar2;
  *(double *)((longlong)param_3 + 0x10) = dVar1 * local_38._s_0.Z + dVar3;
  return;
}

// execGetTargetAtDistance @ 14d5db110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetTargetAtDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  FProperty *pFVar3;
  double dVar4;
  double *pdVar5;
  double local_res10;
  double local_f8 [7];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_78;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50 [2];
  
  local_f8[2] = 0.0;
  local_f8[3] = 0.0;
  local_f8[6] = (double)__real_408f400000000000;
  local_f8[0] = 0.0;
  local_f8[1] = 0.0;
  local_f8[4] = 0.0;
  local_f8[5] = 0.0;
  local_a8 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_a0 = _UNK_1513d9ee8;
  local_c0 = 0xbf800000;
  local_bc = 0x420c0000;
  local_b8 = ___xmm_bf800000427000004033333344c00000;
  uStack_b0 = _UNK_152b79ac8;
  local_98 = 0x42c80000;
  local_94 = 0x3f800000;
  local_8c = 8;
  local_88 = 0x41200000;
  local_84 = 0xbf800000;
  local_80 = 0;
  local_78 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_res10 = 0.0;
  pdVar5 = local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  dVar4 = local_res10;
  local_50[0]._s_0.Z = 0.0;
  local_50[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_50[0]._s_0.Y = _UNK_150689518;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Math::TRotator<double>::RotateVector
            ((TRotator<double> *)(pdVar5 + 3),(TVector<double> *)&local_68._s_0,
             (TVector<double> *)&local_50[0]._s_0);
  dVar1 = pdVar5[1];
  dVar2 = pdVar5[2];
  *(double *)param_3 = local_68._s_0.X * dVar4 + *pdVar5;
  *(double *)((longlong)param_3 + 8) = local_68._s_0.Y * dVar4 + dVar1;
  *(double *)((longlong)param_3 + 0x10) = local_68._s_0.Z * dVar4 + dVar2;
  return;
}

// execGetTargetDistance @ 14d5db2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetTargetDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_98 [48];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = '\0';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  local_98[0x18] = '\0';
  local_98[0x19] = '\0';
  local_98[0x1a] = '\0';
  local_98[0x1b] = '\0';
  local_98[0x1c] = '\0';
  local_98[0x1d] = '\0';
  local_98[0x1e] = '\0';
  local_98[0x1f] = '\0';
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  local_68 = __real_408f400000000000;
  local_98[0x20] = '\0';
  local_98[0x21] = '\0';
  local_98[0x22] = '\0';
  local_98[0x23] = '\0';
  local_98[0x24] = '\0';
  local_98[0x25] = '\0';
  local_98[0x26] = '\0';
  local_98[0x27] = '\0';
  local_98[0x28] = '\0';
  local_98[0x29] = '\0';
  local_98[0x2a] = '\0';
  local_98[0x2b] = '\0';
  local_98[0x2c] = '\0';
  local_98[0x2d] = '\0';
  local_98[0x2e] = '\0';
  local_98[0x2f] = '\0';
  local_48 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_40 = _UNK_1513d9ee8;
  local_60 = 0xbf800000;
  local_5c = 0x420c0000;
  local_58 = ___xmm_bf800000427000004033333344c00000;
  uStack_50 = _UNK_152b79ac8;
  local_38 = 0x42c80000;
  local_34 = 0x3f800000;
  local_2c = 8;
  local_28 = 0x41200000;
  local_24 = 0xbf800000;
  local_20 = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar2 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(puVar2 + 0x30);
  return;
}

// execGetTransform @ 14d5db400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execGetTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TQuat<double> *pTVar14;
  uchar *puVar15;
  uchar local_f8 [48];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_78;
  TQuat<double> local_68 [3];
  
  local_f8[0x10] = '\0';
  local_f8[0x11] = '\0';
  local_f8[0x12] = '\0';
  local_f8[0x13] = '\0';
  local_f8[0x14] = '\0';
  local_f8[0x15] = '\0';
  local_f8[0x16] = '\0';
  local_f8[0x17] = '\0';
  local_f8[0x18] = '\0';
  local_f8[0x19] = '\0';
  local_f8[0x1a] = '\0';
  local_f8[0x1b] = '\0';
  local_f8[0x1c] = '\0';
  local_f8[0x1d] = '\0';
  local_f8[0x1e] = '\0';
  local_f8[0x1f] = '\0';
  local_c8 = __real_408f400000000000;
  local_f8[0] = '\0';
  local_f8[1] = '\0';
  local_f8[2] = '\0';
  local_f8[3] = '\0';
  local_f8[4] = '\0';
  local_f8[5] = '\0';
  local_f8[6] = '\0';
  local_f8[7] = '\0';
  local_f8[8] = '\0';
  local_f8[9] = '\0';
  local_f8[10] = '\0';
  local_f8[0xb] = '\0';
  local_f8[0xc] = '\0';
  local_f8[0xd] = '\0';
  local_f8[0xe] = '\0';
  local_f8[0xf] = '\0';
  local_f8[0x20] = '\0';
  local_f8[0x21] = '\0';
  local_f8[0x22] = '\0';
  local_f8[0x23] = '\0';
  local_f8[0x24] = '\0';
  local_f8[0x25] = '\0';
  local_f8[0x26] = '\0';
  local_f8[0x27] = '\0';
  local_f8[0x28] = '\0';
  local_f8[0x29] = '\0';
  local_f8[0x2a] = '\0';
  local_f8[0x2b] = '\0';
  local_f8[0x2c] = '\0';
  local_f8[0x2d] = '\0';
  local_f8[0x2e] = '\0';
  local_f8[0x2f] = '\0';
  local_a8 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_a0 = _UNK_1513d9ee8;
  local_c0 = 0xbf800000;
  local_bc = 0x420c0000;
  local_b8 = ___xmm_bf800000427000004033333344c00000;
  uStack_b0 = _UNK_152b79ac8;
  local_98 = 0x42c80000;
  local_94 = 0x3f800000;
  local_8c = 8;
  local_88 = 0x41200000;
  local_84 = 0xbf800000;
  local_80 = 0;
  local_78 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  puVar15 = local_f8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar9 = *(undefined8 *)puVar15;
  uVar10 = *(undefined8 *)(puVar15 + 8);
  uVar1 = *(undefined8 *)(puVar15 + 0x10);
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  pTVar14 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)(puVar15 + 0x18),local_68);
  dVar11 = pTVar14->Y;
  dVar12 = pTVar14->Z;
  dVar13 = pTVar14->W;
  *(double *)param_3 = pTVar14->X;
  *(double *)((longlong)param_3 + 8) = dVar11;
  *(double *)((longlong)param_3 + 0x10) = dVar12;
  *(double *)((longlong)param_3 + 0x18) = dVar13;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x38) = 0;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar6;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x40) = auVar8;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar3;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x50) = auVar7;
  return;
}

// execMakeCameraPoseFromCameraComponent @ 14d5dbea0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execMakeCameraPoseFromCameraComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FBlueprintCameraPose *pFVar18;
  UCameraComponent *local_res10;
  FBlueprintCameraPose local_c8;
  
  local_res10 = (UCameraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar18 = MakeCameraPoseFromCameraComponent(&local_c8,local_res10);
  uVar3 = *(undefined8 *)&pFVar18->SensorWidth;
  uVar4 = *(undefined8 *)&pFVar18->SensorHorizontalOffset;
  uVar5 = *(undefined8 *)&pFVar18->ISO;
  uVar6 = *(undefined8 *)&pFVar18->Overscan;
  uVar7 = *(undefined8 *)&pFVar18->NearClippingPlane;
  uVar8 = *(undefined8 *)&pFVar18->PhysicalCameraBlendWeight;
  dVar9 = (pFVar18->Location).field0_0x0._s_0.Y;
  dVar10 = (pFVar18->Location).field0_0x0._s_0.Z;
  dVar11 = (pFVar18->Rotation).Pitch;
  dVar12 = (pFVar18->Rotation).Yaw;
  dVar13 = (pFVar18->Rotation).Roll;
  dVar14 = pFVar18->TargetDistance;
  uVar15 = *(undefined8 *)&pFVar18->FieldOfView;
  uVar16 = *(undefined8 *)&pFVar18->OrthographicWidth;
  uVar17 = *(undefined8 *)&pFVar18->ShutterSpeed;
  uVar1 = *(undefined8 *)&pFVar18->ProjectionMode;
  *(double *)param_3 = (pFVar18->Location).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar9;
  *(double *)((longlong)param_3 + 0x10) = dVar10;
  *(double *)((longlong)param_3 + 0x18) = dVar11;
  *(double *)((longlong)param_3 + 0x20) = dVar12;
  *(double *)((longlong)param_3 + 0x28) = dVar13;
  *(double *)((longlong)param_3 + 0x30) = dVar14;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar15;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar16;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar17;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x60) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x68) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x70) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x80) = uVar1;
  return;
}

// execMakeCameraPoseFromCineCameraComponent @ 14d5dbfb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execMakeCameraPoseFromCineCameraComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  UCameraComponent *pUVar13;
  FBlueprintCameraPose *pFVar14;
  UCameraComponent *local_res10;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  FBlueprintCameraPose local_90;
  
  local_res10 = (UCameraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar13 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar14 = MakeCameraPoseFromCameraComponent(&local_90,local_res10);
  dVar3 = (pFVar14->Location).field0_0x0._s_0.Y;
  dVar4 = (pFVar14->Location).field0_0x0._s_0.Z;
  dVar5 = (pFVar14->Rotation).Pitch;
  dVar6 = (pFVar14->Rotation).Yaw;
  dVar7 = (pFVar14->Rotation).Roll;
  local_e8 = pFVar14->TargetDistance;
  uStack_e0._0_4_ = pFVar14->FieldOfView;
  uStack_e0._4_4_ = pFVar14->FocalLength;
  local_d8._0_4_ = pFVar14->OrthographicWidth;
  local_d8._4_4_ = pFVar14->Aperture;
  uVar8 = *(undefined8 *)&pFVar14->ShutterSpeed;
  local_c8._0_4_ = pFVar14->SensorWidth;
  local_c8._4_4_ = pFVar14->SensorHeight;
  uVar9 = *(undefined8 *)&pFVar14->SensorHorizontalOffset;
  local_b8._0_4_ = pFVar14->ISO;
  local_b8._4_4_ = pFVar14->SqueezeFactor;
  uVar10 = *(undefined8 *)&pFVar14->Overscan;
  uVar11 = *(undefined8 *)&pFVar14->NearClippingPlane;
  uVar12 = *(undefined8 *)&pFVar14->PhysicalCameraBlendWeight;
  uVar2 = *(undefined8 *)&pFVar14->ProjectionMode;
  if (pUVar13 != (UCameraComponent *)0x0) {
    local_e8 = (double)*(float *)((longlong)&pUVar13[1]._padding_ + 4);
    uStack_e0 = CONCAT44(*(undefined4 *)((longlong)&pUVar13[1]._padding_ + 4),0xbf800000);
    local_d8 = CONCAT44((int)pUVar13[1]._padding_,(undefined4)local_d8);
    local_c8 = *(undefined8 *)((longlong)&pUVar13[1]._padding_ + 4);
    local_b8 = CONCAT44(*(undefined4 *)((longlong)&pUVar13[1]._padding_ + 4),(undefined4)local_b8);
  }
  *(double *)param_3 = (pFVar14->Location).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar3;
  *(double *)((longlong)param_3 + 0x10) = dVar4;
  *(double *)((longlong)param_3 + 0x18) = dVar5;
  *(double *)((longlong)param_3 + 0x20) = dVar6;
  *(double *)((longlong)param_3 + 0x28) = dVar7;
  *(double *)((longlong)param_3 + 0x30) = local_e8;
  *(undefined8 *)((longlong)param_3 + 0x38) = uStack_e0;
  *(undefined8 *)((longlong)param_3 + 0x40) = local_d8;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x50) = local_c8;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x60) = local_b8;
  *(undefined8 *)((longlong)param_3 + 0x68) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x70) = uVar11;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar12;
  *(undefined8 *)((longlong)param_3 + 0x80) = uVar2;
  return;
}

// execSetFieldOfView @ 14d5dd9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execSetFieldOfView
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uchar *puVar19;
  undefined4 local_res10 [2];
  uchar local_e8 [48];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  
  local_e8[0x10] = '\0';
  local_e8[0x11] = '\0';
  local_e8[0x12] = '\0';
  local_e8[0x13] = '\0';
  local_e8[0x14] = '\0';
  local_e8[0x15] = '\0';
  local_e8[0x16] = '\0';
  local_e8[0x17] = '\0';
  local_e8[0x18] = '\0';
  local_e8[0x19] = '\0';
  local_e8[0x1a] = '\0';
  local_e8[0x1b] = '\0';
  local_e8[0x1c] = '\0';
  local_e8[0x1d] = '\0';
  local_e8[0x1e] = '\0';
  local_e8[0x1f] = '\0';
  local_b8 = __real_408f400000000000;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  local_e8[8] = '\0';
  local_e8[9] = '\0';
  local_e8[10] = '\0';
  local_e8[0xb] = '\0';
  local_e8[0xc] = '\0';
  local_e8[0xd] = '\0';
  local_e8[0xe] = '\0';
  local_e8[0xf] = '\0';
  local_e8[0x20] = '\0';
  local_e8[0x21] = '\0';
  local_e8[0x22] = '\0';
  local_e8[0x23] = '\0';
  local_e8[0x24] = '\0';
  local_e8[0x25] = '\0';
  local_e8[0x26] = '\0';
  local_e8[0x27] = '\0';
  local_e8[0x28] = '\0';
  local_e8[0x29] = '\0';
  local_e8[0x2a] = '\0';
  local_e8[0x2b] = '\0';
  local_e8[0x2c] = '\0';
  local_e8[0x2d] = '\0';
  local_e8[0x2e] = '\0';
  local_e8[0x2f] = '\0';
  local_98 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_90 = _UNK_1513d9ee8;
  local_b0 = 0xbf800000;
  local_ac = 0x420c0000;
  local_a8 = ___xmm_bf800000427000004033333344c00000;
  uStack_a0 = _UNK_152b79ac8;
  local_88 = 0x42c80000;
  local_84 = 0x3f800000;
  local_7c = 8;
  local_78 = 0x41200000;
  local_74 = 0xbf800000;
  local_70 = 0;
  local_68 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_res10[0] = 0;
  puVar19 = local_e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar19 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = *(undefined4 *)(puVar19 + 0x30);
  uVar4 = *(undefined4 *)(puVar19 + 0x34);
  uVar5 = *(undefined4 *)(puVar19 + 0x3c);
  uVar6 = *(undefined8 *)(puVar19 + 0x40);
  uVar7 = *(undefined8 *)(puVar19 + 0x48);
  uVar8 = *(undefined8 *)(puVar19 + 0x50);
  uVar9 = *(undefined8 *)(puVar19 + 0x58);
  uVar10 = *(undefined8 *)(puVar19 + 0x60);
  uVar11 = *(undefined8 *)(puVar19 + 0x68);
  uVar12 = *(undefined8 *)(puVar19 + 0x70);
  uVar13 = *(undefined8 *)(puVar19 + 0x78);
  uVar14 = *(undefined8 *)(puVar19 + 8);
  uVar15 = *(undefined8 *)(puVar19 + 0x10);
  uVar16 = *(undefined8 *)(puVar19 + 0x18);
  uVar17 = *(undefined8 *)(puVar19 + 0x20);
  uVar18 = *(undefined8 *)(puVar19 + 0x28);
  uVar1 = *(undefined8 *)(puVar19 + 0x80);
  *(undefined8 *)param_3 = *(undefined8 *)puVar19;
  *(undefined8 *)((longlong)param_3 + 8) = uVar14;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar15;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar16;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar17;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar18;
  *(undefined4 *)((longlong)param_3 + 0x30) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x38) = local_res10[0];
  *(undefined4 *)((longlong)param_3 + 0x3c) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x60) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x68) = uVar11;
  *(undefined8 *)((longlong)param_3 + 0x70) = uVar12;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar13;
  *(undefined8 *)((longlong)param_3 + 0x80) = uVar1;
  return;
}

// execSetFocalLength @ 14d5dde60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execSetFocalLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uchar *puVar19;
  undefined4 local_res10 [2];
  uchar local_e8 [48];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  
  local_e8[0x10] = '\0';
  local_e8[0x11] = '\0';
  local_e8[0x12] = '\0';
  local_e8[0x13] = '\0';
  local_e8[0x14] = '\0';
  local_e8[0x15] = '\0';
  local_e8[0x16] = '\0';
  local_e8[0x17] = '\0';
  local_e8[0x18] = '\0';
  local_e8[0x19] = '\0';
  local_e8[0x1a] = '\0';
  local_e8[0x1b] = '\0';
  local_e8[0x1c] = '\0';
  local_e8[0x1d] = '\0';
  local_e8[0x1e] = '\0';
  local_e8[0x1f] = '\0';
  local_b8 = __real_408f400000000000;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  local_e8[8] = '\0';
  local_e8[9] = '\0';
  local_e8[10] = '\0';
  local_e8[0xb] = '\0';
  local_e8[0xc] = '\0';
  local_e8[0xd] = '\0';
  local_e8[0xe] = '\0';
  local_e8[0xf] = '\0';
  local_e8[0x20] = '\0';
  local_e8[0x21] = '\0';
  local_e8[0x22] = '\0';
  local_e8[0x23] = '\0';
  local_e8[0x24] = '\0';
  local_e8[0x25] = '\0';
  local_e8[0x26] = '\0';
  local_e8[0x27] = '\0';
  local_e8[0x28] = '\0';
  local_e8[0x29] = '\0';
  local_e8[0x2a] = '\0';
  local_e8[0x2b] = '\0';
  local_e8[0x2c] = '\0';
  local_e8[0x2d] = '\0';
  local_e8[0x2e] = '\0';
  local_e8[0x2f] = '\0';
  local_98 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_90 = _UNK_1513d9ee8;
  local_b0 = 0xbf800000;
  local_ac = 0x420c0000;
  local_a8 = ___xmm_bf800000427000004033333344c00000;
  uStack_a0 = _UNK_152b79ac8;
  local_88 = 0x42c80000;
  local_84 = 0x3f800000;
  local_7c = 8;
  local_78 = 0x41200000;
  local_74 = 0xbf800000;
  local_70 = 0;
  local_68 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_res10[0] = 0;
  puVar19 = local_e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar19 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = *(undefined4 *)(puVar19 + 0x30);
  uVar4 = *(undefined4 *)(puVar19 + 0x34);
  uVar5 = *(undefined4 *)(puVar19 + 0x38);
  uVar6 = *(undefined8 *)(puVar19 + 0x40);
  uVar7 = *(undefined8 *)(puVar19 + 0x48);
  uVar8 = *(undefined8 *)(puVar19 + 0x50);
  uVar9 = *(undefined8 *)(puVar19 + 0x58);
  uVar10 = *(undefined8 *)(puVar19 + 0x60);
  uVar11 = *(undefined8 *)(puVar19 + 0x68);
  uVar12 = *(undefined8 *)(puVar19 + 0x70);
  uVar13 = *(undefined8 *)(puVar19 + 0x78);
  uVar14 = *(undefined8 *)(puVar19 + 8);
  uVar15 = *(undefined8 *)(puVar19 + 0x10);
  uVar16 = *(undefined8 *)(puVar19 + 0x18);
  uVar17 = *(undefined8 *)(puVar19 + 0x20);
  uVar18 = *(undefined8 *)(puVar19 + 0x28);
  uVar1 = *(undefined8 *)(puVar19 + 0x80);
  *(undefined8 *)param_3 = *(undefined8 *)puVar19;
  *(undefined8 *)((longlong)param_3 + 8) = uVar14;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar15;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar16;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar17;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar18;
  *(undefined4 *)((longlong)param_3 + 0x30) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x38) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_res10[0];
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x60) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x68) = uVar11;
  *(undefined8 *)((longlong)param_3 + 0x70) = uVar12;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar13;
  *(undefined8 *)((longlong)param_3 + 0x80) = uVar1;
  return;
}

// execSetLocation @ 14d5de300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execSetLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uchar *puVar20;
  uchar *puVar21;
  uchar local_178 [48];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined1 local_f8;
  uchar local_e8 [224];
  
  local_178[0x10] = '\0';
  local_178[0x11] = '\0';
  local_178[0x12] = '\0';
  local_178[0x13] = '\0';
  local_178[0x14] = '\0';
  local_178[0x15] = '\0';
  local_178[0x16] = '\0';
  local_178[0x17] = '\0';
  local_178[0x18] = '\0';
  local_178[0x19] = '\0';
  local_178[0x1a] = '\0';
  local_178[0x1b] = '\0';
  local_178[0x1c] = '\0';
  local_178[0x1d] = '\0';
  local_178[0x1e] = '\0';
  local_178[0x1f] = '\0';
  local_148 = __real_408f400000000000;
  local_178[0] = '\0';
  local_178[1] = '\0';
  local_178[2] = '\0';
  local_178[3] = '\0';
  local_178[4] = '\0';
  local_178[5] = '\0';
  local_178[6] = '\0';
  local_178[7] = '\0';
  local_178[8] = '\0';
  local_178[9] = '\0';
  local_178[10] = '\0';
  local_178[0xb] = '\0';
  local_178[0xc] = '\0';
  local_178[0xd] = '\0';
  local_178[0xe] = '\0';
  local_178[0xf] = '\0';
  local_178[0x20] = '\0';
  local_178[0x21] = '\0';
  local_178[0x22] = '\0';
  local_178[0x23] = '\0';
  local_178[0x24] = '\0';
  local_178[0x25] = '\0';
  local_178[0x26] = '\0';
  local_178[0x27] = '\0';
  local_178[0x28] = '\0';
  local_178[0x29] = '\0';
  local_178[0x2a] = '\0';
  local_178[0x2b] = '\0';
  local_178[0x2c] = '\0';
  local_178[0x2d] = '\0';
  local_178[0x2e] = '\0';
  local_178[0x2f] = '\0';
  local_128 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_120 = _UNK_1513d9ee8;
  local_140 = 0xbf800000;
  local_13c = 0x420c0000;
  local_138 = ___xmm_bf800000427000004033333344c00000;
  uStack_130 = _UNK_152b79ac8;
  local_118 = 0x42c80000;
  local_114 = 0x3f800000;
  local_10c = 8;
  local_108 = 0x41200000;
  local_104 = 0xbf800000;
  local_100 = 0;
  local_f8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_178,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_178);
  }
  puVar20 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar21 = local_178;
  if (puVar20 != (uchar *)0x0) {
    puVar21 = puVar20;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  puVar20 = local_e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar20 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = *(undefined4 *)(puVar21 + 0x18);
  uVar4 = *(undefined4 *)(puVar21 + 0x1c);
  uVar7 = *(undefined8 *)(puVar21 + 0x40);
  uVar8 = *(undefined8 *)(puVar21 + 0x48);
  uVar9 = *(undefined8 *)(puVar21 + 0x50);
  uVar10 = *(undefined8 *)(puVar21 + 0x58);
  uVar11 = *(undefined8 *)(puVar21 + 0x60);
  uVar12 = *(undefined8 *)(puVar21 + 0x68);
  uVar13 = *(undefined8 *)(puVar21 + 0x70);
  uVar14 = *(undefined8 *)(puVar21 + 0x78);
  uVar5 = *(undefined4 *)(puVar20 + 0x10);
  uVar6 = *(undefined4 *)(puVar20 + 0x14);
  uVar15 = *(undefined8 *)(puVar21 + 0x20);
  uVar16 = *(undefined8 *)(puVar21 + 0x28);
  uVar17 = *(undefined8 *)(puVar21 + 0x30);
  uVar18 = *(undefined8 *)(puVar21 + 0x38);
  uVar1 = *(undefined8 *)(puVar21 + 0x80);
  uVar19 = *(undefined8 *)(puVar20 + 8);
  *(undefined8 *)param_3 = *(undefined8 *)puVar20;
  *(undefined8 *)((longlong)param_3 + 8) = uVar19;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar15;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar16;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar17;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar18;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x60) = uVar11;
  *(undefined8 *)((longlong)param_3 + 0x68) = uVar12;
  *(undefined8 *)((longlong)param_3 + 0x70) = uVar13;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar14;
  *(undefined8 *)((longlong)param_3 + 0x80) = uVar1;
  return;
}

// execSetRotation @ 14d5de810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execSetRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uchar *puVar17;
  uchar *puVar18;
  uchar local_178 [48];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined1 local_f8;
  uchar local_e8 [40];
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  local_178[0x10] = '\0';
  local_178[0x11] = '\0';
  local_178[0x12] = '\0';
  local_178[0x13] = '\0';
  local_178[0x14] = '\0';
  local_178[0x15] = '\0';
  local_178[0x16] = '\0';
  local_178[0x17] = '\0';
  local_178[0x18] = '\0';
  local_178[0x19] = '\0';
  local_178[0x1a] = '\0';
  local_178[0x1b] = '\0';
  local_178[0x1c] = '\0';
  local_178[0x1d] = '\0';
  local_178[0x1e] = '\0';
  local_178[0x1f] = '\0';
  local_148 = __real_408f400000000000;
  local_178[0] = '\0';
  local_178[1] = '\0';
  local_178[2] = '\0';
  local_178[3] = '\0';
  local_178[4] = '\0';
  local_178[5] = '\0';
  local_178[6] = '\0';
  local_178[7] = '\0';
  local_178[8] = '\0';
  local_178[9] = '\0';
  local_178[10] = '\0';
  local_178[0xb] = '\0';
  local_178[0xc] = '\0';
  local_178[0xd] = '\0';
  local_178[0xe] = '\0';
  local_178[0xf] = '\0';
  local_178[0x20] = '\0';
  local_178[0x21] = '\0';
  local_178[0x22] = '\0';
  local_178[0x23] = '\0';
  local_178[0x24] = '\0';
  local_178[0x25] = '\0';
  local_178[0x26] = '\0';
  local_178[0x27] = '\0';
  local_178[0x28] = '\0';
  local_178[0x29] = '\0';
  local_178[0x2a] = '\0';
  local_178[0x2b] = '\0';
  local_178[0x2c] = '\0';
  local_178[0x2d] = '\0';
  local_178[0x2e] = '\0';
  local_178[0x2f] = '\0';
  local_128 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_120 = _UNK_1513d9ee8;
  local_140 = 0xbf800000;
  local_13c = 0x420c0000;
  local_138 = ___xmm_bf800000427000004033333344c00000;
  uStack_130 = _UNK_152b79ac8;
  local_118 = 0x42c80000;
  local_114 = 0x3f800000;
  local_10c = 8;
  local_108 = 0x41200000;
  local_104 = 0xbf800000;
  local_100 = 0;
  local_f8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_178,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_178);
  }
  puVar17 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar18 = local_178;
  if (puVar17 != (uchar *)0x0) {
    puVar18 = puVar17;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  puVar17 = local_e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c0 = *(undefined8 *)(puVar18 + 0x10);
  uVar4 = *(undefined8 *)(puVar18 + 0x40);
  uVar5 = *(undefined8 *)(puVar18 + 0x48);
  uVar6 = *(undefined8 *)(puVar18 + 0x50);
  uVar7 = *(undefined8 *)(puVar18 + 0x58);
  uVar8 = *(undefined8 *)(puVar18 + 0x60);
  uVar9 = *(undefined8 *)(puVar18 + 0x68);
  uVar10 = *(undefined8 *)(puVar18 + 0x70);
  uVar11 = *(undefined8 *)(puVar18 + 0x78);
  uVar12 = *(undefined8 *)(puVar18 + 8);
  uVar1 = *(undefined8 *)(puVar17 + 0x10);
  uVar13 = *(undefined8 *)(puVar18 + 0x30);
  uVar14 = *(undefined8 *)(puVar18 + 0x38);
  uVar2 = *(undefined8 *)(puVar18 + 0x80);
  uStack_b8 = *(undefined8 *)(puVar18 + 0x18);
  uVar15 = *(undefined8 *)puVar17;
  uVar16 = *(undefined8 *)(puVar17 + 8);
  *(undefined8 *)param_3 = *(undefined8 *)puVar18;
  *(undefined8 *)((longlong)param_3 + 8) = uVar12;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_c0;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar15;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar16;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar13;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar14;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x60) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x68) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x70) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar11;
  *(undefined8 *)((longlong)param_3 + 0x80) = uVar2;
  return;
}

// execSetTargetDistance @ 14d5df050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execSetTargetDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uchar *puVar5;
  undefined8 local_res10;
  uchar local_138 [48];
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_100 = 0xbf800000;
  local_138[0x10] = '\0';
  local_138[0x11] = '\0';
  local_138[0x12] = '\0';
  local_138[0x13] = '\0';
  local_138[0x14] = '\0';
  local_138[0x15] = '\0';
  local_138[0x16] = '\0';
  local_138[0x17] = '\0';
  local_138[0x18] = '\0';
  local_138[0x19] = '\0';
  local_138[0x1a] = '\0';
  local_138[0x1b] = '\0';
  local_138[0x1c] = '\0';
  local_138[0x1d] = '\0';
  local_138[0x1e] = '\0';
  local_138[0x1f] = '\0';
  local_108 = __real_408f400000000000;
  local_138[0] = '\0';
  local_138[1] = '\0';
  local_138[2] = '\0';
  local_138[3] = '\0';
  local_138[4] = '\0';
  local_138[5] = '\0';
  local_138[6] = '\0';
  local_138[7] = '\0';
  local_138[8] = '\0';
  local_138[9] = '\0';
  local_138[10] = '\0';
  local_138[0xb] = '\0';
  local_138[0xc] = '\0';
  local_138[0xd] = '\0';
  local_138[0xe] = '\0';
  local_138[0xf] = '\0';
  local_138[0x20] = '\0';
  local_138[0x21] = '\0';
  local_138[0x22] = '\0';
  local_138[0x23] = '\0';
  local_138[0x24] = '\0';
  local_138[0x25] = '\0';
  local_138[0x26] = '\0';
  local_138[0x27] = '\0';
  local_138[0x28] = '\0';
  local_138[0x29] = '\0';
  local_138[0x2a] = '\0';
  local_138[0x2b] = '\0';
  local_138[0x2c] = '\0';
  local_138[0x2d] = '\0';
  local_138[0x2e] = '\0';
  local_138[0x2f] = '\0';
  local_e8 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_e0 = _UNK_1513d9ee8;
  local_fc = 0x420c0000;
  local_f8 = ___xmm_bf800000427000004033333344c00000;
  uStack_f0 = _UNK_152b79ac8;
  local_d8 = 0x42c80000;
  local_d4 = 0x3f800000;
  local_cc = 8;
  local_c8 = 0x41200000;
  local_c4 = 0xbf800000;
  local_c0 = 0;
  local_b8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  local_res10 = 0;
  puVar5 = local_138;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uStack_a0 = *(undefined8 *)(puVar5 + 8);
  uVar2 = *(undefined8 *)(puVar5 + 0x80);
  local_98 = *(undefined8 *)(puVar5 + 0x10);
  uStack_90 = *(undefined8 *)(puVar5 + 0x18);
  local_a8 = *(undefined8 *)puVar5;
  local_88 = *(undefined8 *)(puVar5 + 0x20);
  uStack_80 = *(undefined8 *)(puVar5 + 0x28);
  uStack_70 = *(undefined8 *)(puVar5 + 0x38);
  local_68 = *(undefined8 *)(puVar5 + 0x40);
  uStack_60 = *(undefined8 *)(puVar5 + 0x48);
  local_78 = *(undefined8 *)(puVar5 + 0x30);
  local_58 = *(undefined8 *)(puVar5 + 0x50);
  uStack_50 = *(undefined8 *)(puVar5 + 0x58);
  local_48 = *(undefined8 *)(puVar5 + 0x60);
  uStack_40 = *(undefined8 *)(puVar5 + 0x68);
  uVar3 = *(undefined8 *)(puVar5 + 0x70);
  uVar4 = *(undefined8 *)(puVar5 + 0x78);
  *(undefined8 *)param_3 = *(undefined8 *)puVar5;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_a0;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_98;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_90;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_88;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_80;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_res10;
  *(undefined8 *)((longlong)param_3 + 0x38) = uStack_70;
  *(undefined8 *)((longlong)param_3 + 0x40) = local_68;
  *(undefined8 *)((longlong)param_3 + 0x48) = uStack_60;
  *(undefined8 *)((longlong)param_3 + 0x50) = local_58;
  *(undefined8 *)((longlong)param_3 + 0x58) = uStack_50;
  *(undefined8 *)((longlong)param_3 + 0x60) = local_48;
  *(undefined8 *)((longlong)param_3 + 0x68) = uStack_40;
  *(undefined8 *)((longlong)param_3 + 0x70) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x80) = uVar2;
  return;
}

// execSetTransform @ 14d5df260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintCameraPoseFunctionLibrary::execSetTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  double dVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  __m128 _Var27;
  TRotator<double> *pTVar28;
  double *pdVar29;
  uchar *puVar30;
  undefined1 auStack_278 [32];
  uchar local_258 [48];
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined1 local_1d8;
  TRotator<double> local_1c8;
  TQuat<double> local_1a8;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_220 = 0xbf800000;
  local_258[0x10] = '\0';
  local_258[0x11] = '\0';
  local_258[0x12] = '\0';
  local_258[0x13] = '\0';
  local_258[0x14] = '\0';
  local_258[0x15] = '\0';
  local_258[0x16] = '\0';
  local_258[0x17] = '\0';
  local_258[0x18] = '\0';
  local_258[0x19] = '\0';
  local_258[0x1a] = '\0';
  local_258[0x1b] = '\0';
  local_258[0x1c] = '\0';
  local_258[0x1d] = '\0';
  local_258[0x1e] = '\0';
  local_258[0x1f] = '\0';
  local_228 = __real_408f400000000000;
  local_258[0] = '\0';
  local_258[1] = '\0';
  local_258[2] = '\0';
  local_258[3] = '\0';
  local_258[4] = '\0';
  local_258[5] = '\0';
  local_258[6] = '\0';
  local_258[7] = '\0';
  local_258[8] = '\0';
  local_258[9] = '\0';
  local_258[10] = '\0';
  local_258[0xb] = '\0';
  local_258[0xc] = '\0';
  local_258[0xd] = '\0';
  local_258[0xe] = '\0';
  local_258[0xf] = '\0';
  local_258[0x20] = '\0';
  local_258[0x21] = '\0';
  local_258[0x22] = '\0';
  local_258[0x23] = '\0';
  local_258[0x24] = '\0';
  local_258[0x25] = '\0';
  local_258[0x26] = '\0';
  local_258[0x27] = '\0';
  local_258[0x28] = '\0';
  local_258[0x29] = '\0';
  local_258[0x2a] = '\0';
  local_258[0x2b] = '\0';
  local_258[0x2c] = '\0';
  local_258[0x2d] = '\0';
  local_258[0x2e] = '\0';
  local_258[0x2f] = '\0';
  local_208 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_200 = _UNK_1513d9ee8;
  local_21c = 0x420c0000;
  local_218 = ___xmm_bf800000427000004033333344c00000;
  uStack_210 = _UNK_152b79ac8;
  local_1f8 = 0x42c80000;
  local_1f4 = 0x3f800000;
  local_1ec = 8;
  local_1e8 = 0x41200000;
  local_1e4 = 0xbf800000;
  local_1e0 = 0;
  local_1d8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_258,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_258);
  }
  _Var27 = GlobalVectorConstants::Float0001;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  puVar3 = param_2->MostRecentPropertyAddress;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar30 = local_258;
  if (puVar3 != (uchar *)0x0) {
    puVar30 = puVar3;
  }
  local_e8 = (double)_Var27.m128_f32[2];
  dStack_e0 = (double)_Var27.m128_f32[3];
  local_d8 = (double)fVar5;
  dStack_d0 = (double)fVar7;
  local_c8 = (double)fVar9;
  dStack_c0 = (double)fVar11;
  local_b8 = (double)fVar6;
  dStack_b0 = (double)fVar8;
  local_a8 = (double)fVar10;
  dStack_a0 = (double)fVar12;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  pdVar29 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar29 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar13 = pdVar29[4];
  dVar14 = pdVar29[5];
  uVar15 = *(undefined8 *)(puVar30 + 0x30);
  uVar16 = *(undefined8 *)(puVar30 + 0x38);
  uVar17 = *(undefined8 *)(puVar30 + 0x40);
  uVar18 = *(undefined8 *)(puVar30 + 0x48);
  uVar19 = *(undefined8 *)(puVar30 + 0x50);
  uVar20 = *(undefined8 *)(puVar30 + 0x58);
  uVar21 = *(undefined8 *)(puVar30 + 0x60);
  uVar22 = *(undefined8 *)(puVar30 + 0x68);
  uVar23 = *(undefined8 *)(puVar30 + 0x70);
  uVar24 = *(undefined8 *)(puVar30 + 0x78);
  uVar1 = *(undefined8 *)(puVar30 + 0x80);
  local_168 = *(undefined8 *)(puVar30 + 0x20);
  uStack_160 = *(undefined8 *)(puVar30 + 0x28);
  local_1c8.Roll = pdVar29[6];
  local_1a8.Z = pdVar29[2];
  local_1a8.W = pdVar29[3];
  uStack_170 = *(undefined8 *)(puVar30 + 0x18);
  local_178 = pdVar29[6];
  local_1a8.X = *pdVar29;
  local_1a8.Y = pdVar29[1];
  pTVar28 = UE::Math::TQuat<double>::Rotator(&local_1a8,&local_1c8);
  dVar25 = pTVar28->Pitch;
  dVar26 = pTVar28->Yaw;
  dVar2 = pTVar28->Roll;
  *(double *)param_3 = dVar13;
  *(double *)((longlong)param_3 + 8) = dVar14;
  *(double *)((longlong)param_3 + 0x10) = local_178;
  *(double *)((longlong)param_3 + 0x18) = dVar25;
  *(double *)((longlong)param_3 + 0x20) = dVar26;
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar15;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar16;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar17;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar18;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar19;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar20;
  *(undefined8 *)((longlong)param_3 + 0x60) = uVar21;
  *(undefined8 *)((longlong)param_3 + 0x68) = uVar22;
  *(undefined8 *)((longlong)param_3 + 0x70) = uVar23;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar24;
  *(undefined8 *)((longlong)param_3 + 0x80) = uVar1;
  return;
}


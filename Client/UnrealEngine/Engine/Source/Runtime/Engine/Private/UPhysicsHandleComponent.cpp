// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 41

// StaticClass @ 1482cbf40

UClass * __cdecl UPhysicsHandleComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsHandleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsHandleComponent",
               &Z_Registration_Info_UClass_UPhysicsHandleComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsHandleComponent,0x520,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsHandleComponent>,
               InternalVTableHelperCtorCaller<UPhysicsHandleComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsHandleComponent.InnerSingleton;
}

// UPhysicsHandleComponent @ 1482dbcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPhysicsHandleComponent * __thiscall
UPhysicsHandleComponent::UPhysicsHandleComponent
          (UPhysicsHandleComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->GrabbedComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->GrabbedBoneName).ComparisonIndex = 0;
  (this->GrabbedBoneName).Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TargetTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TargetTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TargetTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CurrentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CurrentTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CurrentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CurrentTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CurrentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CurrentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviousTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviousTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviousTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviousTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->PhysicsUserData).Type = Invalid;
  (this->PhysicsUserData).Payload = (void *)0x0;
  FConstraintInstance::FConstraintInstance(&this->ConstraintInstance);
  (this->ConstraintHandle).Constraint = (FConstraintBase *)0x0;
  return this;
}

// UPhysicsHandleComponent @ 1482dbe60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPhysicsHandleComponent * __thiscall
UPhysicsHandleComponent::UPhysicsHandleComponent
          (UPhysicsHandleComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  double dVar24;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->GrabbedComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->GrabbedBoneName).ComparisonIndex = 0;
  (this->GrabbedBoneName).Number = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Rotation.ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Translation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Translation.ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64 = auVar10;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Rotation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar4,0);
  auVar12._0_8_ = (double)fVar3;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Rotation.ZW.m128d_f64 = auVar12;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Translation.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar4,0);
  auVar14._0_8_ = (double)fVar3;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Translation.ZW.m128d_f64 = auVar14;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Scale3D.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar4,0);
  auVar16._0_8_ = (double)fVar3;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Scale3D.ZW.m128d_f64 = auVar16;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Rotation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar4,0);
  auVar18._0_8_ = (double)fVar3;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Rotation.ZW.m128d_f64 = auVar18;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Translation.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar4,0);
  auVar20._0_8_ = (double)fVar3;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Translation.ZW.m128d_f64 = auVar20;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar21._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar21._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar21._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Scale3D.XY.m128d_f64 = auVar21;
  auVar22._8_4_ = SUB84((double)fVar4,0);
  auVar22._0_8_ = (double)fVar3;
  auVar22._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Scale3D.ZW.m128d_f64 = auVar22;
  this->bPendingConstraint = false;
  (this->PhysicsUserData).Type = ConstraintInstanceBase;
  (this->PhysicsUserData).Payload = &this->ConstraintInstance;
  FConstraintInstance::FConstraintInstance(&this->ConstraintInstance);
  (this->ConstraintHandle).Constraint = (FConstraintBase *)0x0;
  this->GrabbedHandle = (FSingleParticlePhysicsProxy *)0x0;
  this->KinematicHandle = (FSingleParticlePhysicsProxy *)0x0;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ConstraintLocalPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ConstraintLocalPosition).field0_0x0._s_0.Y = (double)uVar23;
  (this->ConstraintLocalPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar24 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ConstraintLocalRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ConstraintLocalRotation).Yaw = dVar24;
  (this->ConstraintLocalRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->bSoftAngularConstraint = 1;
  this->bInterpolateTarget = 1;
  this->bSoftLinearConstraint = 1;
  *(undefined1 *)&this->_padding_ = 0;
  this->LinearDamping = 200.0;
  this->LinearStiffness = 750.0;
  this->AngularDamping = 500.0;
  this->AngularStiffness = 1500.0;
  this->InterpolationSpeed = 50.0;
  return this;
}

// ~UPhysicsHandleComponent @ 1482de260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPhysicsHandleComponent::~UPhysicsHandleComponent(UPhysicsHandleComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// operator() @ 1482e0b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UPhysicsHandleComponent::UpdateDriveSettings'::__l5::<lambda_1>::operator()
          (void *this,FPhysicsConstraintReference_Chaos *param_1)

{
  FJointConstraint *this_00;
  EJointMotionType EVar1;
  undefined8 uVar2;
  TQuat<double> *pTVar3;
  ulonglong *puVar4;
  IPhysicsProxyBase *pIVar5;
  uint uVar6;
  longlong lVar7;
  EJointMotionType EVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  uint local_1f8;
  TQuat<double> local_1e8;
  undefined1 local_1c8 [16];
  double local_1b8 [4];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  double local_178 [2];
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108 [2];
  double local_f8 [2];
  double local_e8 [2];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_228;
  this_00 = *(FJointConstraint **)(*(longlong *)this + 0x4e8);
  if (this_00 != (FJointConstraint *)0x0) {
    uVar9 = *(uint *)(*(longlong *)this + 0xd0);
    pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
    uVar6 = uVar9 & 4;
    EVar8 = Locked;
    (this_00->JointSettings).Property.bCollisionEnabled = false;
    EVar1 = EVar8;
    if (uVar6 != 0) {
      EVar1 = Free;
    }
    uVar9 = uVar9 & 3;
    if (uVar9 != 1) {
      EVar8 = Free;
    }
    *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 0x80;
    local_1f8 = uVar6;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
    bVar10 = uVar6 != 0;
    local_208 = bVar10;
    local_207 = bVar10;
    local_206 = bVar10;
    Chaos::FJointConstraint::SetLinearVelocityDriveEnabled
              (this_00,(TVector<bool,3>)SUB83(&local_208,0));
    local_208 = bVar10;
    local_207 = bVar10;
    local_206 = bVar10;
    Chaos::FJointConstraint::SetLinearPositionDriveEnabled
              (this_00,(TVector<bool,3>)SUB83(&local_208,0));
    pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
    (this_00->JointSettings).Property.LinearMotionTypes.field0_0x0._s_0.X = EVar1;
    *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 0x80;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
    pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
    (this_00->JointSettings).Property.LinearMotionTypes.field0_0x0._s_0.Y = EVar1;
    *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 0x80;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
    pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
    (this_00->JointSettings).Property.LinearMotionTypes.field0_0x0._s_0.Z = EVar1;
    uVar6 = (uint)this_00->_padding_ | 0x80;
    *(uint *)&this_00->_padding_ = uVar6;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
      pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
      uVar6 = (uint)this_00->_padding_;
    }
    if (((*(byte *)(*(longlong *)this + 0xd0) & 1) == 0) || (uVar9 == 1)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    uVar6 = uVar6 | 0x80;
    (this_00->JointSettings).Property.bAngularSLerpPositionDriveEnabled = bVar10;
    *(uint *)&this_00->_padding_ = uVar6;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
      pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
      uVar6 = (uint)this_00->_padding_;
    }
    if (((*(byte *)(*(longlong *)this + 0xd0) & 1) == 0) || (uVar9 == 1)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    (this_00->JointSettings).Property.bAngularSLerpVelocityDriveEnabled = bVar10;
    *(uint *)&this_00->_padding_ = uVar6 | 0x80;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
    pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
    (this_00->JointSettings).Property.AngularMotionTypes.field0_0x0._s_0.X = EVar8;
    *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 0x80;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
    pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
    (this_00->JointSettings).Property.AngularMotionTypes.field0_0x0._s_0.Y = EVar8;
    *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 0x80;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
    pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
    (this_00->JointSettings).Property.AngularMotionTypes.field0_0x0._s_0.Z = EVar8;
    *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 0x80;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
    lVar7 = *(longlong *)this;
    pTVar3 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)(lVar7 + 0x508),&local_1e8);
    local_108[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_108[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_e8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_e8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_c8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_c8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_68 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_60 = _UNK_150689688;
    uVar16 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar17 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_f8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_f8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_d8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_d8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_1b8[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1b8[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_1b8[2] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1b8[3] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_b8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_b8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    local_88 = *(undefined8 *)(lVar7 + 0x4f0);
    uStack_80 = *(undefined8 *)(lVar7 + 0x4f8);
    local_78 = *(undefined8 *)(lVar7 + 0x500);
    uStack_70 = 0;
    local_a8[0] = pTVar3->X;
    local_a8[1] = pTVar3->Y;
    uVar14 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    uVar15 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_a8[2] = pTVar3->Z;
    local_a8[3] = pTVar3->W;
    uVar12 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    uVar13 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_58 = ___xmm_00000000000000003ff0000000000000;
    uStack_50 = _UNK_150689518;
    local_178[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_178[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_1c8._8_4_ = uVar16;
    local_1c8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1c8._12_4_ = uVar17;
    local_168._8_4_ = uVar16;
    local_168._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_168._12_4_ = uVar17;
    local_198._8_4_ = uVar14;
    local_198._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_198._12_4_ = uVar15;
    local_188._8_4_ = uVar12;
    local_188._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_188._12_4_ = uVar13;
    local_138._8_4_ = uVar14;
    local_138._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_138._12_4_ = uVar15;
    local_128._8_4_ = uVar12;
    local_128._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_128._12_4_ = uVar13;
    lVar7 = 0;
    local_158 = local_1b8[0];
    dStack_150 = local_1b8[1];
    local_148 = local_1b8[2];
    dStack_140 = local_1b8[3];
    local_118 = local_178[0];
    dStack_110 = local_178[1];
    do {
      uVar2 = *(undefined8 *)((longlong)local_108 + lVar7 + 8);
      *(undefined8 *)(local_1c8 + lVar7) = *(undefined8 *)((longlong)local_108 + lVar7);
      *(undefined8 *)(local_1c8 + lVar7 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)local_f8 + lVar7 + 8);
      *(undefined8 *)((longlong)local_1b8 + lVar7) = *(undefined8 *)((longlong)local_f8 + lVar7);
      *(undefined8 *)((longlong)local_1b8 + lVar7 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)local_e8 + lVar7 + 8);
      *(undefined8 *)((longlong)local_1b8 + lVar7 + 0x10) =
           *(undefined8 *)((longlong)local_e8 + lVar7);
      *(undefined8 *)(local_198 + lVar7 + -8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)local_d8 + lVar7 + 8);
      *(undefined8 *)(local_198 + lVar7) = *(undefined8 *)((longlong)local_d8 + lVar7);
      *(undefined8 *)(local_198 + lVar7 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)local_c8 + lVar7 + 8);
      *(undefined8 *)(local_188 + lVar7) = *(undefined8 *)((longlong)local_c8 + lVar7);
      *(undefined8 *)(local_188 + lVar7 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)local_b8 + lVar7 + 8);
      *(undefined8 *)((longlong)local_178 + lVar7) = *(undefined8 *)((longlong)local_b8 + lVar7);
      *(undefined8 *)(local_168 + lVar7 + -8) = uVar2;
      puVar4 = (ulonglong *)((longlong)local_a8 + lVar7);
      lVar7 = lVar7 + 0x60;
    } while (puVar4 != local_48);
    pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
    *(undefined8 *)(this_00->JointSettings).Property.ConnectorTransforms.V = local_1c8._0_8_;
    *(undefined8 *)&(this_00->JointSettings).Property.ConnectorTransforms.V[0].field_0x8 =
         local_1c8._8_8_;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[0].field_0x10 = local_1b8[0]
    ;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[0].field_0x18 = local_1b8[1]
    ;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[0].field_0x20 = local_1b8[2]
    ;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[0].field_0x28 = local_1b8[3]
    ;
    *(undefined8 *)&(this_00->JointSettings).Property.ConnectorTransforms.V[0].field_0x30 =
         local_198._0_8_;
    *(undefined8 *)&(this_00->JointSettings).Property.ConnectorTransforms.V[0].field_0x38 =
         local_198._8_8_;
    *(undefined8 *)&(this_00->JointSettings).Property.ConnectorTransforms.V[0].field_0x40 =
         local_188._0_8_;
    *(undefined8 *)&(this_00->JointSettings).Property.ConnectorTransforms.V[0].field_0x48 =
         local_188._8_8_;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[0].field_0x50 = local_178[0]
    ;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[0].field_0x58 = local_178[1]
    ;
    *(undefined8 *)((this_00->JointSettings).Property.ConnectorTransforms.V + 1) = local_168._0_8_;
    *(undefined8 *)&(this_00->JointSettings).Property.ConnectorTransforms.V[1].field_0x8 =
         local_168._8_8_;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[1].field_0x10 = local_158;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[1].field_0x18 = dStack_150;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[1].field_0x20 = local_148;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[1].field_0x28 = dStack_140;
    *(undefined8 *)&(this_00->JointSettings).Property.ConnectorTransforms.V[1].field_0x30 =
         local_138._0_8_;
    *(undefined8 *)&(this_00->JointSettings).Property.ConnectorTransforms.V[1].field_0x38 =
         local_138._8_8_;
    *(undefined8 *)&(this_00->JointSettings).Property.ConnectorTransforms.V[1].field_0x40 =
         local_128._0_8_;
    *(undefined8 *)&(this_00->JointSettings).Property.ConnectorTransforms.V[1].field_0x48 =
         local_128._8_8_;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[1].field_0x50 = local_118;
    *(double *)&(this_00->JointSettings).Property.ConnectorTransforms.V[1].field_0x58 = dStack_110;
    *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 0x80;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
    if (local_1f8 != 0) {
      pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
      dVar11 = (double)*(float *)(*(longlong *)this + 0xd8);
      *(double *)&(this_00->JointSettings).Property.LinearDriveStiffness = dVar11;
      *(double *)&(this_00->JointSettings).Property.LinearDriveStiffness.field_0x8 = dVar11;
      *(double *)&(this_00->JointSettings).Property.LinearDriveStiffness.field_0x10 = dVar11;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 0x80;
      if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
      }
      pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
      dVar11 = (double)*(float *)(*(longlong *)this + 0xd4);
      *(double *)&(this_00->JointSettings).Property.LinearDriveDamping = dVar11;
      *(double *)&(this_00->JointSettings).Property.LinearDriveDamping.field_0x8 = dVar11;
      *(double *)&(this_00->JointSettings).Property.LinearDriveDamping.field_0x10 = dVar11;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 0x80;
      if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
      }
    }
    if (((*(byte *)(*(longlong *)this + 0xd0) & 1) != 0) && (uVar9 != 1)) {
      pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
      dVar11 = (double)*(float *)(*(longlong *)this + 0xe0);
      *(double *)&(this_00->JointSettings).Property.AngularDriveStiffness = dVar11;
      *(double *)&(this_00->JointSettings).Property.AngularDriveStiffness.field_0x8 = dVar11;
      *(double *)&(this_00->JointSettings).Property.AngularDriveStiffness.field_0x10 = dVar11;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 0x80;
      if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
      }
      pIVar5 = (IPhysicsProxyBase *)this_00->_padding_;
      dVar11 = (double)*(float *)(*(longlong *)this + 0xdc);
      *(double *)&(this_00->JointSettings).Property.AngularDriveDamping = dVar11;
      *(double *)&(this_00->JointSettings).Property.AngularDriveDamping.field_0x8 = dVar11;
      *(double *)&(this_00->JointSettings).Property.AngularDriveDamping.field_0x10 = dVar11;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 0x80;
      if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
      }
    }
  }
  return;
}

// operator() @ 1482e1160

void __thiscall
`UPhysicsHandleComponent::UpdateHandleTransform'::__l5::<lambda_1>::operator()
          (void *this,FSingleParticlePhysicsProxy **param_1)

{
  TThreadedSingleParticlePhysicsProxyBase<1> *this_00;
  IPhysicsProxyBase *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uStack_c;
  
  lVar9 = *(longlong *)this;
  uVar7 = *(undefined8 *)(lVar9 + 0x170);
  uVar8 = *(undefined8 *)(lVar9 + 0x178);
  dVar2 = *(double *)(lVar9 + 0x150);
  dVar3 = *(double *)(lVar9 + 0x158);
  dVar4 = *(double *)(lVar9 + 0x160);
  dVar5 = *(double *)(lVar9 + 0x168);
  uVar6 = *(undefined8 *)(lVar9 + 0x180);
  this_00 = *(TThreadedSingleParticlePhysicsProxyBase<1> **)(lVar9 + 0x4e0);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_00);
  lVar9 = *(longlong *)&this_00->field_0x40;
  if (*(char *)(lVar9 + 0x98) == '\0') {
    lVar9 = 0;
  }
  if (lVar9 != 0) {
    pIVar1 = *(IPhysicsProxyBase **)(lVar9 + 0x10);
    *(ulonglong *)(lVar9 + 0xc0) = CONCAT44((float)dVar3,(float)dVar2);
    *(ulonglong *)(lVar9 + 200) = CONCAT44((float)dVar5,(float)dVar4);
    *(undefined8 *)(lVar9 + 0xd0) = uVar7;
    *(undefined8 *)(lVar9 + 0xd8) = uVar8;
    *(undefined8 *)(lVar9 + 0xe0) = uVar6;
    *(ulonglong *)(lVar9 + 0xe8) = CONCAT44(uStack_c,2);
    *(uint *)(lVar9 + 0x9c) = *(uint *)(lVar9 + 0x9c) | 0x40;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
  }
  return;
}

// GetGrabbedComponent @ 14830a990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall
UPhysicsHandleComponent::GetGrabbedComponent(UPhysicsHandleComponent *this)

{
  return (this->GrabbedComponent).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14830c700

UClass * __cdecl UPhysicsHandleComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsHandleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsHandleComponent",
               &Z_Registration_Info_UClass_UPhysicsHandleComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsHandleComponent,0x520,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsHandleComponent>,
               InternalVTableHelperCtorCaller<UPhysicsHandleComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsHandleComponent.InnerSingleton;
}

// GetTargetLocationAndRotation @ 14830db00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::GetTargetLocationAndRotation
          (UPhysicsHandleComponent *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  double dVar1;
  double dVar2;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  local_28.X = (this->TargetTransform).Rotation.XY.m128d_f64[0];
  local_28.Y = (this->TargetTransform).Rotation.XY.m128d_f64[1];
  local_28.Z = (this->TargetTransform).Rotation.ZW.m128d_f64[0];
  local_28.W = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
  param_2->Pitch = local_48.Pitch;
  param_2->Yaw = local_48.Yaw;
  param_2->Roll = local_48.Roll;
  dVar2 = (this->TargetTransform).Translation.XY.m128d_f64[1];
  dVar1 = (this->TargetTransform).Translation.ZW.m128d_f64[0];
  (param_1->field0_0x0)._s_0.X = (this->TargetTransform).Translation.XY.m128d_f64[0];
  (param_1->field0_0x0)._s_0.Y = dVar2;
  (param_1->field0_0x0)._s_0.Z = dVar1;
  return;
}

// GrabComponent @ 14830e0b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::GrabComponent
          (UPhysicsHandleComponent *this,UPrimitiveComponent *param_1,FName param_2,
          TVector<double> *param_3,bool param_4)

{
  FBodyInstance *this_00;
  FSingleParticlePhysicsProxy *pFVar1;
  double *local_res10;
  FSingleParticlePhysicsProxy *local_48;
  code *local_40;
  undefined8 **local_38;
  double local_30;
  double dStack_28;
  double local_20;
  
  if ((param_1 != (UPrimitiveComponent *)0x0) &&
     (this_00 = (FBodyInstance *)
                (**(code **)(*(longlong *)param_1 + 0x818))(param_1,param_2,1,0xffffffff),
     this_00 != (FBodyInstance *)0x0)) {
    local_30 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_28 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_20 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    pFVar1 = FBodyInstance::GetPhysicsActor(this_00);
    if (pFVar1 != (FSingleParticlePhysicsProxy *)0x0) {
      local_res10 = &local_30;
      local_38 = &local_res10;
      local_40 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPhysicsHandleComponent::GrabComponent'::__l11::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_const_&>
                 ::Call;
      local_48 = FBodyInstance::GetPhysicsActor(this_00);
      FPhysInterface_Chaos::ExecuteRead
                (&local_48,
                 (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_const_&)> *)
                 &local_40);
    }
    (**(code **)(this->_padding_ + 0x518))(this,param_1,param_2,param_3,&local_30,param_4);
  }
  return;
}

// GrabComponentAtLocation @ 14830e1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::GrabComponentAtLocation
          (UPhysicsHandleComponent *this,UPrimitiveComponent *param_1,FName param_2,
          TVector<double> *param_3)

{
  (**(code **)(this->_padding_ + 0x518))();
  return;
}

// GrabComponentAtLocationWithRotation @ 14830e1f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::GrabComponentAtLocationWithRotation
          (UPhysicsHandleComponent *this,UPrimitiveComponent *param_1,FName param_2,
          TVector<double> *param_3,TRotator<double> *param_4)

{
  (**(code **)(this->_padding_ + 0x518))();
  return;
}

// GrabComponentImp @ 14830e220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::GrabComponentImp
          (UPhysicsHandleComponent *this,UPrimitiveComponent *param_1,FName param_2,
          TVector<double> *param_3,TRotator<double> *param_4,bool param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  IPhysicsProxyBase *pIVar5;
  TGeometryParticle<double,3> *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  int iVar23;
  FBodyInstance *this_00;
  TQuat<double> *pTVar24;
  TSphere<double,3> *pTVar25;
  FPhysScene_Chaos *pFVar26;
  TRotator<double> *pTVar27;
  TGeometryParticle<double,3> *pTVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auStack_378 [32];
  FSingleParticlePhysicsProxy *local_358;
  TRefCountPtr<Chaos::FImplicitObject> local_350;
  TVector<double> *local_348;
  TRotator<double> *local_340;
  FSingleParticlePhysicsProxy *local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  TVector<double,3> local_308;
  TVector<double,3> local_2f0;
  TVector<double,3> local_2d8;
  FKinematicTarget local_2b8;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  TRotator<double> local_1e8;
  TQuat<double> local_1c8;
  TQuat<double> local_1a8;
  TQuat<double> local_188;
  FActorCreationParams local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_340 = param_4;
  local_348 = param_3;
  if ((this->GrabbedComponent).field0_0x0.DebugPtr != (UPrimitiveComponent *)0x0) {
    (**(code **)(this->_padding_ + 0x500))();
  }
  if (param_1 == (UPrimitiveComponent *)0x0) {
    return;
  }
  this_00 = (FBodyInstance *)
            (**(code **)(*(longlong *)param_1 + 0x818))(param_1,param_2,1,0xffffffff);
  if (this_00 == (FBodyInstance *)0x0) {
    return;
  }
  if (this_00->WeldParent != (FBodyInstance *)0x0) {
    this_00 = this_00->WeldParent;
  }
  local_338 = FBodyInstance::GetPhysicsActor(this_00);
  if (local_338 == (FSingleParticlePhysicsProxy *)0x0) {
    return;
  }
  if (this->KinematicHandle != (FSingleParticlePhysicsProxy *)0x0) goto LAB_14830e5f4;
  local_168.bSimulatePhysics = false;
  local_168.bStartAwake = true;
  local_168.Scene = (FChaosScene *)0x0;
  local_168.bStatic = false;
  local_168.bQueryOnly = false;
  local_168.bEnableGravity = false;
  local_168.bUpdateKinematicFromSimulation = false;
  local_168.DebugName = (char *)0x0;
  pTVar24 = UE::Math::TRotator<double>::Quaternion(local_340,&local_1c8);
  local_168.InitialTM.Translation.ZW.m128d_f64[0] = (param_3->field0_0x0)._s_0.Z;
  local_208 = pTVar24->X;
  dStack_200 = pTVar24->Y;
  local_1f8 = pTVar24->Z;
  dStack_1f0 = pTVar24->W;
  local_168.InitialTM.Translation.XY.m128d_f64[0] = (param_3->field0_0x0)._s_0.X;
  local_168.InitialTM.Translation.XY.m128d_f64[1] = (param_3->field0_0x0)._s_0.Y;
  local_168.InitialTM.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_168.InitialTM.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_168.InitialTM.Translation.ZW.m128d_f64[1] = 0.0;
  local_168.InitialTM.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_168.InitialTM.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_168.InitialTM.Rotation.XY.m128d_f64[0] = local_208;
  local_168.InitialTM.Rotation.XY.m128d_f64[1] = dStack_200;
  local_168.InitialTM.Rotation.ZW.m128d_f64[0] = local_1f8;
  local_168.InitialTM.Rotation.ZW.m128d_f64[1] = dStack_1f0;
  FChaosEngineInterface::CreateActor(&local_168,&this->KinematicHandle,(UObject *)0x0);
  local_358 = this->KinematicHandle;
  local_308._0_8_ = 0;
  local_308._8_8_ = 0;
  local_308._16_8_ = 0;
  pTVar25 = ::operator_new(0x30);
  if (pTVar25 == (TSphere<double,3> *)0x0) {
    local_350.Reference = (FImplicitObject *)0x0;
LAB_14830e473:
    Chaos::FRigidBodyHandle_External::SetGeometry((FRigidBodyHandle_External *)local_358,&local_350)
    ;
  }
  else {
    pTVar25 = Chaos::TSphere<double,3>::TSphere<double,3>
                        (pTVar25,&local_308,__real_408f400000000000);
    local_350.Reference = (FImplicitObject *)pTVar25;
    if (pTVar25 == (TSphere<double,3> *)0x0) goto LAB_14830e473;
    LOCK();
    *(int *)&pTVar25->_padding_ = (int)pTVar25->_padding_ + 1;
    UNLOCK();
    Chaos::FRigidBodyHandle_External::SetGeometry((FRigidBodyHandle_External *)local_358,&local_350)
    ;
    LOCK();
    plVar1 = &pTVar25->_padding_;
    lVar29 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar29 == 1) && (*(int *)((longlong)&pTVar25->_padding_ + 4) == 0)) {
      (**(code **)pTVar25->_padding_)(pTVar25,1);
    }
  }
  pFVar3 = this->KinematicHandle;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3);
  pTVar28 = (pFVar3->Particle).Ptr;
  if (pTVar28->Type < Rigid) {
    pTVar28 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar28 != (TGeometryParticle<double,3> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)pFVar3->_padding_;
    local_358 = (FSingleParticlePhysicsProxy *)pFVar3->_padding_;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_358 == (FSingleParticlePhysicsProxy *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    iVar23 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)pFVar3);
    *(int *)((longlong)&local_358->_padding_ + 4) = iVar23;
    if (*(char *)&pTVar28[2].MNonFrequentData.Property.MSpatialIdx == '\x04') {
      local_2f0._16_8_ = 0;
      local_2f0._0_8_ = 0;
      local_2f0._8_8_ = 0;
      Chaos::FRigidBodyHandle_External::SetV((FRigidBodyHandle_External *)pFVar3,&local_2f0,true);
      local_2d8._16_8_ = 0;
      local_2d8._0_8_ = 0;
      local_2d8._8_8_ = 0;
      Chaos::FRigidBodyHandle_External::SetW((FRigidBodyHandle_External *)pFVar3,&local_2d8,true);
    }
    param_3 = local_348;
    if (*(char *)&pTVar28[2].MNonFrequentData.Property.MSpatialIdx != '\x02') {
      local_2b8.Rotation._0_8_ = ___xmm_3f800000000000000000000000000000;
      local_2b8.Rotation._8_8_ = _UNK_150689648;
      local_2b8.Position._16_8_ = 0;
      local_2b8.Position._0_8_ = 0;
      local_2b8.Position._8_8_ = 0;
      local_2b8.Mode = None;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetKinematicTarget
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3,&local_2b8,true);
      param_3 = local_348;
    }
  }
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3);
  pTVar28 = (pFVar3->Particle).Ptr;
  if (pTVar28->Type < Rigid) {
    pTVar28 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar28 != (TGeometryParticle<double,3> *)0x0) {
    pIVar5 = pTVar28->Proxy;
    *(undefined1 *)&pTVar28[2].MNonFrequentData.Property.MSpatialIdx = 2;
    (pTVar28->MDirtyFlags).Bits = (pTVar28->MDirtyFlags).Bits | 8;
    if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
    }
  }
  pFVar26 = FBodyInstance::GetPhysicsScene(this_00);
  if (pFVar26 != (FPhysScene_Chaos *)0x0) {
    FChaosEngineInterface::AddActorToSolver
              (&this->KinematicHandle,(FPBDRigidsSolver *)pFVar26->_padding_);
    (this->ConstraintInstance)._padding_ = (longlong)pFVar26;
  }
LAB_14830e5f4:
  pTVar24 = UE::Math::TRotator<double>::Quaternion(local_340,&local_1a8);
  dVar21 = _UNK_150689688;
  dVar20 = ___xmm_3ff00000000000003ff0000000000000;
  dVar19 = ___xmm_00000000000000003ff0000000000000;
  local_248 = (param_3->field0_0x0)._s_0.X;
  dStack_240 = (param_3->field0_0x0)._s_0.Y;
  local_238 = (param_3->field0_0x0)._s_0.Z;
  local_318 = pTVar24->Z;
  dStack_310 = pTVar24->W;
  local_328 = pTVar24->X;
  dStack_320 = pTVar24->Y;
  local_218._8_8_ = _UNK_150689518;
  local_218._0_8_ = ___xmm_00000000000000003ff0000000000000;
  auVar18._8_8_ = _UNK_150689688;
  auVar18._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
  (this->CurrentTransform).Rotation.XY.m128d_f64[0] = local_328;
  (this->CurrentTransform).Rotation.XY.m128d_f64[1] = dStack_320;
  (this->CurrentTransform).Rotation.ZW.m128d_f64[0] = local_318;
  (this->CurrentTransform).Rotation.ZW.m128d_f64[1] = dStack_310;
  (this->CurrentTransform).Translation.XY.m128d_f64[0] = local_248;
  (this->CurrentTransform).Translation.XY.m128d_f64[1] = dStack_240;
  (this->CurrentTransform).Translation.ZW.m128d_f64[0] = local_238;
  (this->CurrentTransform).Translation.ZW.m128d_f64[1] = 0.0;
  *(undefined1 (*) [16])(this->CurrentTransform).Scale3D.XY.m128d_f64 = auVar18;
  *(undefined1 (*) [16])(this->CurrentTransform).Scale3D.ZW.m128d_f64 = local_218;
  pFVar3 = this->KinematicHandle;
  dVar8 = (this->CurrentTransform).Rotation.XY.m128d_f64[1];
  dVar52 = (this->CurrentTransform).Rotation.ZW.m128d_f64[0];
  dVar9 = (this->CurrentTransform).Rotation.ZW.m128d_f64[1];
  (this->TargetTransform).Rotation.XY.m128d_f64[0] =
       (this->CurrentTransform).Rotation.XY.m128d_f64[0];
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = dVar8;
  dVar8 = (this->CurrentTransform).Translation.XY.m128d_f64[0];
  dVar10 = (this->CurrentTransform).Translation.XY.m128d_f64[1];
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = dVar52;
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar52 = (this->CurrentTransform).Translation.ZW.m128d_f64[0];
  dVar9 = (this->CurrentTransform).Translation.ZW.m128d_f64[1];
  (this->TargetTransform).Translation.XY.m128d_f64[0] = dVar8;
  (this->TargetTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar8 = (this->CurrentTransform).Scale3D.XY.m128d_f64[0];
  dVar10 = (this->CurrentTransform).Scale3D.XY.m128d_f64[1];
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = dVar52;
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = dVar9;
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] = dVar8;
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64 = local_218;
  uStack_230 = 0;
  local_268 = local_328;
  dStack_260 = dStack_320;
  local_258 = local_318;
  dStack_250 = dStack_310;
  local_228 = auVar18;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetKinematicTarget
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3,
             (TRigidTransform<double,3> *)&local_268,true);
  pFVar3 = local_338;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)local_338);
  pTVar28 = (pFVar3->Particle).Ptr;
  Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
            ((TThreadedSingleParticlePhysicsProxyBase<1> *)pFVar3);
  pTVar6 = (pFVar3->Particle).Ptr;
  uVar2 = *(undefined8 *)&(pTVar6->MXR).Property.MR.field_0x8;
  local_338 = (FSingleParticlePhysicsProxy *)(double)(float)uVar2;
  dStack_330 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar13 = (param_3->field0_0x0)._s_0.X - *(double *)&(pTVar28->MXR).Property.MX;
  dVar14 = (param_3->field0_0x0)._s_0.Y - *(double *)&(pTVar28->MXR).Property.MX.field_0x8;
  uVar47 = (undefined4)((ulonglong)dVar14 >> 0x20);
  dVar16 = (param_3->field0_0x0)._s_0.Z - *(double *)&(pTVar28->MXR).Property.MX.field_0x10;
  dVar17 = (double)*(float *)&(pTVar6->MXR).Property.MR;
  dVar8 = (double)*(float *)&(pTVar6->MXR).Property.MR.field_0x4;
  auVar53._8_4_ = SUB84(dVar14,0);
  auVar53._0_8_ = dVar13;
  auVar53._12_4_ = uVar47;
  auVar37._8_4_ = SUB84(dVar14,0);
  auVar37._0_8_ = dVar13;
  auVar37._12_4_ = uVar47;
  dVar10 = dVar17 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar11 = dVar8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar52 = (double)local_338 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar9 = dStack_330 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar40._8_4_ = SUB84(dVar11,0);
  auVar40._0_8_ = dVar10;
  auVar40._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar32._8_4_ = SUB84(dVar52,0);
  auVar32._0_8_ = dVar11;
  auVar32._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
  auVar38._8_4_ = SUB84(dVar9,0);
  auVar38._0_8_ = dVar52;
  auVar38._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar41 = blendpd(auVar40,auVar38,2);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar16;
  auVar38 = blendpd(auVar37,auVar15,2);
  auVar54._0_8_ = auVar53._8_8_ * dVar10 - dVar11 * dVar13;
  auVar54._8_8_ = dVar16 * dVar11 - auVar32._8_8_ * dVar14;
  auVar39._0_8_ = auVar38._0_8_ * dVar52 - auVar41._0_8_ * dVar16;
  auVar39._8_8_ = auVar38._8_8_ * dVar9 - auVar41._8_8_ * 0.0;
  auVar38 = blendpd(auVar54,auVar39,2);
  dVar12 = auVar54._8_8_ + auVar54._8_8_;
  dVar49 = auVar39._0_8_ + auVar39._0_8_;
  uVar47 = SUB84(dVar49,0);
  uVar48 = (undefined4)((ulonglong)dVar49 >> 0x20);
  auVar55._0_8_ = auVar38._0_8_ + auVar38._0_8_;
  auVar55._8_8_ = auVar38._8_8_ + auVar38._8_8_;
  auVar50._8_4_ = uVar47;
  auVar50._0_8_ = dVar12;
  auVar50._12_4_ = uVar48;
  auVar33._8_4_ = uVar47;
  auVar33._0_8_ = dVar12;
  auVar33._12_4_ = uVar48;
  auVar45._8_4_ = uVar47;
  auVar45._0_8_ = dVar12;
  auVar45._12_4_ = uVar48;
  auVar38 = blendpd(auVar45,auVar55,2);
  auVar51._0_8_ = auVar50._8_8_ * dVar10 - dVar12 * dVar11;
  auVar51._8_8_ = auVar55._0_8_ * dVar11 - auVar33._8_8_ * dVar52;
  auVar34._8_4_ = SUB84(auVar55._8_8_,0);
  auVar34._0_8_ = auVar55._0_8_;
  auVar34._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
  auVar46._0_8_ = auVar38._0_8_ * dVar52 - auVar55._0_8_ * auVar41._0_8_;
  auVar46._8_8_ = auVar38._8_8_ * dVar9 - auVar34._8_8_ * auVar41._8_8_;
  auVar43._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        (uint)((ulonglong)dVar20 >> 0x20),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar20,0));
  auVar43._8_4_ = _UNK_15061cc88 & SUB84(dVar21,0);
  auVar43._12_4_ = _UNK_15061cc8c & (uint)((ulonglong)dVar21 >> 0x20);
  lVar29 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              (uint)((ulonglong)dVar19 >> 0x20),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar19,0)) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  lVar30 = -(ulonglong)(auVar43._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar31 = -(ulonglong)(auVar43._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
  auVar35._8_4_ = SUB84(auVar51._8_8_,0);
  auVar35._0_8_ = auVar51._0_8_;
  auVar35._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
  auVar44._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar38._4_4_,
                        ~(uint)lVar30 & auVar38._0_4_);
  auVar44._8_4_ = ~(uint)lVar31 & auVar38._8_4_;
  auVar44._12_4_ = ~(uint)((ulonglong)lVar31 >> 0x20) & auVar38._12_4_;
  auVar41._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar41._0_8_ = dVar19;
  auVar41._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
  auVar41 = blendpd(auVar51,auVar46,2);
  (this->ConstraintLocalPosition).field0_0x0._s_0.X =
       auVar44._0_8_ * (dVar12 * dVar9 + dVar13 + auVar35._8_8_);
  (this->ConstraintLocalPosition).field0_0x0._s_0.Y =
       auVar44._8_8_ * (dVar49 * dVar9 + dVar14 + auVar46._0_8_);
  (this->ConstraintLocalPosition).field0_0x0._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar38._4_4_,
                        ~(uint)lVar29 & auVar38._0_4_) *
       (auVar55._0_8_ * dVar9 + dVar16 + auVar41._0_8_);
  pTVar24 = UE::Math::TRotator<double>::Quaternion(local_340,&local_188);
  dVar17 = dVar17 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar8 = dVar8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar9 = pTVar24->Z;
  dVar10 = pTVar24->W;
  dVar11 = pTVar24->X;
  dVar12 = pTVar24->Y;
  dVar49 = (double)local_338 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar52 = dStack_330 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar42._8_4_ = SUB84(dVar52,0);
  auVar42._0_8_ = dVar49;
  auVar42._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
  auVar36._8_4_ = SUB84(dVar49,0);
  auVar36._0_8_ = dVar49;
  auVar36._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  local_278 = dVar17 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              dVar9 * auVar42._8_8_ +
              dVar11 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar49 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dStack_270 = dVar17 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar10 * dVar52 +
               dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar49 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar52 = dVar17 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar12 * dVar52 +
           dVar10 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar36._8_8_ * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_288._8_4_ = SUB84(dVar52,0);
  local_288._0_8_ =
       dVar17 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar11 * auVar42._8_8_ +
       dVar9 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar49 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_288._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
  pTVar27 = UE::Math::TRotator<double>::TRotator<double>(&local_1e8,(TQuat<double> *)local_288);
  dVar8 = pTVar27->Yaw;
  (this->ConstraintLocalRotation).Pitch = pTVar27->Pitch;
  (this->ConstraintLocalRotation).Yaw = dVar8;
  dVar8 = pTVar27->Roll;
  this->bRotationConstrained = 0;
  *(uint *)&this->field_0xd0 = *(uint *)&this->field_0xd0 | (uint)param_5;
  (this->ConstraintLocalRotation).Roll = dVar8;
  this->GrabbedHandle = pFVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->GrabbedComponent).field0_0x0.DebugPtr = param_1;
  this->GrabbedBoneName = param_2;
  return;
}

// OnUnregister @ 148316120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPhysicsHandleComponent::OnUnregister(UPhysicsHandleComponent *this)

{
  if ((this->GrabbedComponent).field0_0x0.DebugPtr != (UPrimitiveComponent *)0x0) {
    (**(code **)(this->_padding_ + 0x500))();
  }
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// ReleaseComponent @ 14831c4c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPhysicsHandleComponent::ReleaseComponent(UPhysicsHandleComponent *this)

{
  UPrimitiveComponent *pUVar1;
  bool bVar2;
  
  bVar2 = FPhysicsConstraintReference_Chaos::IsValid(&this->ConstraintHandle);
  if (bVar2) {
    FChaosEngineInterface::ReleaseConstraint(&this->ConstraintHandle);
    this->bPendingConstraint = false;
  }
  pUVar1 = (this->GrabbedComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UPrimitiveComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x770))(pUVar1,0);
    (this->GrabbedComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
    (this->GrabbedBoneName).ComparisonIndex = 0;
    (this->GrabbedBoneName).Number = 0;
    this->GrabbedHandle = (FSingleParticlePhysicsProxy *)0x0;
  }
  if (this->KinematicHandle != (FSingleParticlePhysicsProxy *)0x0) {
    FChaosEngineInterface::ReleaseActor
              (&this->KinematicHandle,(FChaosScene *)(this->ConstraintInstance)._padding_,false);
  }
  FConstraintInstanceBase::Reset((FConstraintInstanceBase *)&this->ConstraintInstance);
  return;
}

// SetAngularDamping @ 148321380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::SetAngularDamping(UPhysicsHandleComponent *this,float param_1)

{
  this->AngularDamping = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014832138b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x510))();
  return;
}

// SetAngularStiffness @ 148321470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::SetAngularStiffness(UPhysicsHandleComponent *this,float param_1)

{
  this->AngularStiffness = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014832147b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x510))();
  return;
}

// SetInterpolationSpeed @ 148321910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::SetInterpolationSpeed(UPhysicsHandleComponent *this,float param_1)

{
  this->InterpolationSpeed = param_1;
  return;
}

// SetLinearDamping @ 148321c10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::SetLinearDamping(UPhysicsHandleComponent *this,float param_1)

{
  this->LinearDamping = param_1;
                    /* WARNING: Could not recover jumptable at 0x000148321c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x510))();
  return;
}

// SetLinearStiffness @ 148321ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::SetLinearStiffness(UPhysicsHandleComponent *this,float param_1)

{
  this->LinearStiffness = param_1;
                    /* WARNING: Could not recover jumptable at 0x000148321ceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x510))();
  return;
}

// SetTargetLocation @ 148322db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::SetTargetLocation(UPhysicsHandleComponent *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->TargetTransform).Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  (this->TargetTransform).Translation.XY.m128d_f64[1] = dVar2;
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = dVar1;
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = 0.0;
  return;
}

// SetTargetLocationAndRotation @ 148322dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::SetTargetLocationAndRotation
          (UPhysicsHandleComponent *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TQuat<double> *pTVar7;
  TQuat<double> local_28;
  
  pTVar7 = UE::Math::TRotator<double>::Quaternion(param_2,&local_28);
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = pTVar7->Y;
  dVar5 = pTVar7->Z;
  dVar6 = pTVar7->W;
  (this->TargetTransform).Rotation.XY.m128d_f64[0] = pTVar7->X;
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = dVar4;
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = dVar5;
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = dVar6;
  (this->TargetTransform).Translation.XY.m128d_f64[0] = dVar2;
  (this->TargetTransform).Translation.XY.m128d_f64[1] = dVar3;
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = dVar1;
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = 0.0;
  dVar1 = _UNK_150689688;
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = _UNK_150689518;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  return;
}

// SetTargetRotation @ 148322e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::SetTargetRotation(UPhysicsHandleComponent *this,TRotator<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TQuat<double> local_28;
  
  pTVar4 = UE::Math::TRotator<double>::Quaternion(param_1,&local_28);
  dVar1 = pTVar4->Y;
  dVar2 = pTVar4->Z;
  dVar3 = pTVar4->W;
  (this->TargetTransform).Rotation.XY.m128d_f64[0] = pTVar4->X;
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = dVar1;
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = dVar2;
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  return;
}

// StaticRegisterNativesUPhysicsHandleComponent @ 148323ba0

void __cdecl UPhysicsHandleComponent::StaticRegisterNativesUPhysicsHandleComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UPhysicsHandleComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 1483243d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::TickComponent
          (UPhysicsHandleComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  FPhysicsConstraintReference_Chaos *this_00;
  TTransform<double> *this_01;
  longlong lVar1;
  FConstraintBase *pFVar2;
  IPhysicsProxyBase *pIVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  FPhysicsConstraintReference_Chaos FVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  FSingleParticlePhysicsProxy *local_res8;
  TTransform<double> local_138;
  TTransform<double> local_d8 [2];
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  this_00 = &this->ConstraintHandle;
  if (this->bPendingConstraint != false) {
    bVar14 = FPhysicsConstraintReference_Chaos::IsValid(this_00);
    if (!bVar14) {
      return;
    }
    this->bPendingConstraint = false;
  }
  bVar14 = FPhysicsConstraintReference_Chaos::IsValid(this_00);
  if (bVar14) {
    this_01 = &this->CurrentTransform;
    if (this->bInterpolateTarget == 0) {
      dVar6 = (this->TargetTransform).Rotation.XY.m128d_f64[1];
      lVar1 = this->_padding_;
      dVar7 = (this->TargetTransform).Rotation.ZW.m128d_f64[0];
      dVar8 = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
      (this_01->Rotation).XY.m128d_f64[0] = (this->TargetTransform).Rotation.XY.m128d_f64[0];
      (this->CurrentTransform).Rotation.XY.m128d_f64[1] = dVar6;
      dVar6 = (this->TargetTransform).Translation.XY.m128d_f64[0];
      dVar9 = (this->TargetTransform).Translation.XY.m128d_f64[1];
      (this->CurrentTransform).Rotation.ZW.m128d_f64[0] = dVar7;
      (this->CurrentTransform).Rotation.ZW.m128d_f64[1] = dVar8;
      dVar7 = (this->TargetTransform).Translation.ZW.m128d_f64[0];
      dVar8 = (this->TargetTransform).Translation.ZW.m128d_f64[1];
      (this->CurrentTransform).Translation.XY.m128d_f64[0] = dVar6;
      (this->CurrentTransform).Translation.XY.m128d_f64[1] = dVar9;
      dVar6 = (this->TargetTransform).Scale3D.XY.m128d_f64[0];
      dVar9 = (this->TargetTransform).Scale3D.XY.m128d_f64[1];
      (this->CurrentTransform).Translation.ZW.m128d_f64[0] = dVar7;
      (this->CurrentTransform).Translation.ZW.m128d_f64[1] = dVar8;
      dVar7 = (this->TargetTransform).Scale3D.ZW.m128d_f64[0];
      dVar8 = (this->TargetTransform).Scale3D.ZW.m128d_f64[1];
      (this->CurrentTransform).Scale3D.XY.m128d_f64[0] = dVar6;
      (this->CurrentTransform).Scale3D.XY.m128d_f64[1] = dVar9;
      (this->CurrentTransform).Scale3D.ZW.m128d_f64[0] = dVar7;
      (this->CurrentTransform).Scale3D.ZW.m128d_f64[1] = dVar8;
      (**(code **)(lVar1 + 0x508))(this,this_01);
    }
    else {
      dVar6 = (this_01->Rotation).XY.m128d_f64[0];
      dVar7 = (this->CurrentTransform).Rotation.XY.m128d_f64[1];
      dVar8 = (this->CurrentTransform).Rotation.ZW.m128d_f64[0];
      dVar9 = (this->CurrentTransform).Rotation.ZW.m128d_f64[1];
      local_d8[0].Translation.XY.m128d_f64[0] = (this->CurrentTransform).Translation.XY.m128d_f64[0]
      ;
      local_d8[0].Translation.XY.m128d_f64[1] = (this->CurrentTransform).Translation.XY.m128d_f64[1]
      ;
      local_d8[0].Translation.ZW.m128d_f64[0] = (this->CurrentTransform).Translation.ZW.m128d_f64[0]
      ;
      local_d8[0].Translation.ZW.m128d_f64[1] = (this->CurrentTransform).Translation.ZW.m128d_f64[1]
      ;
      local_d8[0].Scale3D.XY.m128d_f64[0] = (this->CurrentTransform).Scale3D.XY.m128d_f64[0];
      local_d8[0].Scale3D.XY.m128d_f64[1] = (this->CurrentTransform).Scale3D.XY.m128d_f64[1];
      fVar33 = param_1 * this->InterpolationSpeed;
      local_138.Translation.XY.m128d_f64[0] = (this->TargetTransform).Translation.XY.m128d_f64[0];
      local_138.Translation.XY.m128d_f64[1] = (this->TargetTransform).Translation.XY.m128d_f64[1];
      local_d8[0].Scale3D.ZW.m128d_f64[0] = (this->CurrentTransform).Scale3D.ZW.m128d_f64[0];
      local_d8[0].Scale3D.ZW.m128d_f64[1] = (this->CurrentTransform).Scale3D.ZW.m128d_f64[1];
      local_138.Scale3D.XY.m128d_f64[0] = (this->TargetTransform).Scale3D.XY.m128d_f64[0];
      local_138.Scale3D.XY.m128d_f64[1] = (this->TargetTransform).Scale3D.XY.m128d_f64[1];
      local_138.Translation.ZW.m128d_f64[0] = (this->TargetTransform).Translation.ZW.m128d_f64[0];
      local_138.Translation.ZW.m128d_f64[1] = (this->TargetTransform).Translation.ZW.m128d_f64[1];
      local_138.Scale3D.ZW.m128d_f64[0] = (this->TargetTransform).Scale3D.ZW.m128d_f64[0];
      local_138.Scale3D.ZW.m128d_f64[1] = (this->TargetTransform).Scale3D.ZW.m128d_f64[1];
      dVar10 = (this->TargetTransform).Rotation.XY.m128d_f64[0];
      dVar11 = (this->TargetTransform).Rotation.XY.m128d_f64[1];
      auVar29._0_8_ = dVar6 * dVar6 + dVar8 * dVar8;
      auVar29._8_8_ = dVar7 * dVar7 + dVar9 * dVar9;
      dVar12 = (this->TargetTransform).Rotation.ZW.m128d_f64[0];
      dVar13 = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
      auVar20._8_4_ = SUB84(auVar29._8_8_,0);
      auVar20._0_8_ = auVar29._0_8_;
      auVar20._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
      auVar21._0_8_ = auVar20._8_8_ + auVar29._0_8_;
      auVar21._8_8_ = auVar29._0_8_ + auVar29._8_8_;
      uVar16 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar21._0_8_)
      ;
      uVar18 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar21._8_8_)
      ;
      auVar30 = sqrtpd(auVar29,auVar21);
      uVar17 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar21._0_8_)
      ;
      uVar19 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar21._8_8_)
      ;
      auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
      auVar23._0_8_ = (ulonglong)(auVar22._0_8_ * dVar6) & uVar16;
      uVar5 = uVar18 & (ulonglong)(auVar22._8_8_ * dVar7);
      auVar23._8_4_ = (undefined4)uVar5;
      auVar23._12_4_ = (undefined4)(uVar5 >> 0x20);
      auVar26._0_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar26._4_4_ =
           ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar26._8_4_ = ~(uint)uVar18 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar26._12_4_ =
           ~(uint)(uVar18 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_d8[0].Rotation.XY.m128d_f64 = (double  [2])(auVar23 | auVar26);
      auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30);
      auVar27._0_8_ = uVar17 & (ulonglong)(auVar22._0_8_ * dVar8);
      uVar5 = uVar19 & (ulonglong)(auVar22._8_8_ * dVar9);
      auVar27._8_4_ = (undefined4)uVar5;
      auVar27._12_4_ = (undefined4)(uVar5 >> 0x20);
      auVar22._4_4_ =
           ~(uint)(uVar17 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar22._0_4_ = ~(uint)uVar17 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar22._8_4_ = ~(uint)uVar19 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar22._12_4_ =
           ~(uint)(uVar19 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_d8[0].Rotation.ZW.m128d_f64 = (double  [2])(auVar27 | auVar22);
      auVar28._0_8_ = dVar10 * dVar10 + dVar12 * dVar12;
      auVar28._8_8_ = dVar11 * dVar11 + dVar13 * dVar13;
      auVar24._8_4_ = SUB84(auVar28._8_8_,0);
      auVar24._0_8_ = auVar28._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
      auVar25._0_8_ = auVar24._8_8_ + auVar28._0_8_;
      auVar25._8_8_ = auVar28._0_8_ + auVar28._8_8_;
      auVar22 = sqrtpd(auVar28,auVar25);
      uVar16 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar25._0_8_)
      ;
      uVar18 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar25._8_8_)
      ;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
      auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
      uVar17 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar25._0_8_)
      ;
      uVar19 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar25._8_8_)
      ;
      auVar32._0_8_ = uVar16 & (ulonglong)(auVar30._0_8_ * dVar10);
      uVar5 = uVar18 & (ulonglong)(auVar30._8_8_ * dVar11);
      auVar32._8_4_ = (undefined4)uVar5;
      auVar32._12_4_ = (undefined4)(uVar5 >> 0x20);
      auVar31._0_8_ = uVar17 & (ulonglong)(auVar22._0_8_ * dVar12);
      uVar5 = uVar19 & (ulonglong)(auVar22._8_8_ * dVar13);
      auVar31._8_4_ = (undefined4)uVar5;
      auVar31._12_4_ = (undefined4)(uVar5 >> 0x20);
      auVar30._4_4_ =
           ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar30._0_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar30._8_4_ = ~(uint)uVar18 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar30._12_4_ =
           ~(uint)(uVar18 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_138.Rotation.XY.m128d_f64 = (double  [2])(auVar32 | auVar30);
      auVar4._4_4_ = ~(uint)(uVar17 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar4._0_4_ = ~(uint)uVar17 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar4._8_4_ = ~(uint)uVar19 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar4._12_4_ =
           ~(uint)(uVar19 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_138.Rotation.ZW.m128d_f64 = (double  [2])(auVar31 | auVar4);
      if (__real_3f800000 <= fVar33) {
        fVar33 = __real_3f800000;
      }
      if (fVar33 <= 0.0) {
        fVar33 = 0.0;
      }
      UE::Math::TTransform<double>::Blend(this_01,local_d8,&local_138,fVar33);
      (**(code **)(this->_padding_ + 0x508))(this,this_01);
    }
  }
  else if ((this->KinematicHandle != (FSingleParticlePhysicsProxy *)0x0) &&
          (this->GrabbedHandle != (FSingleParticlePhysicsProxy *)0x0)) {
    FVar15 = FChaosEngineInterface::CreateConstraint
                       (&local_res8,&this->KinematicHandle,
                        (TTransform<double> *)&this->GrabbedHandle,
                        &UE::Math::TTransform<double>::Identity);
    this_00->Constraint = (FConstraintBase *)(FVar15.Constraint)->_padding_;
    bVar14 = FPhysicsConstraintReference_Chaos::IsValid(this_00);
    if ((bVar14) &&
       ((pFVar2 = this_00->Constraint, pFVar2->Type == JointConstraintType &&
        (pFVar2 != (FConstraintBase *)0x0)))) {
      pIVar3 = pFVar2->Proxy;
      *(FPhysicsUserData_Chaos **)&pFVar2[0x1a].DirtyFlags = &this->PhysicsUserData;
      (pFVar2->DirtyFlags).Bits = (pFVar2->DirtyFlags).Bits | 0x80;
      if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
      }
      (this->ConstraintInstance)._padding_ = (longlong)this_00->Constraint;
      (**(code **)(this->_padding_ + 0x510))(this);
    }
    this->bPendingConstraint = true;
  }
  return;
}

// UpdateDriveSettings @ 148327ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPhysicsHandleComponent::UpdateDriveSettings(UPhysicsHandleComponent *this)

{
  bool bVar1;
  UPhysicsHandleComponent *local_res8;
  code *local_18;
  UPhysicsHandleComponent **local_10;
  
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid(&this->ConstraintHandle);
  if ((bVar1) && (((this->ConstraintHandle).Constraint)->Type == JointConstraintType)) {
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPhysicsHandleComponent::UpdateDriveSettings'::__l5::<lambda_1>,void,FPhysicsConstraintReference_Chaos_const_&>
               ::Call;
    local_res8 = this;
    FPhysInterface_Chaos::ExecuteWrite
              (&this->ConstraintHandle,
               (TFunctionRef<void___cdecl(FPhysicsConstraintReference_Chaos_const_&)> *)&local_18);
  }
  return;
}

// UpdateHandleTransform @ 1483280b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPhysicsHandleComponent::UpdateHandleTransform
          (UPhysicsHandleComponent *this,TTransform<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined4 in_EAX;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  UPhysicsHandleComponent *local_res8 [4];
  code *local_38;
  UPhysicsHandleComponent **local_30;
  
  dVar6 = (this->CurrentTransform).Translation.ZW.m128d_f64[0] -
          (this->PreviousTransform).Translation.ZW.m128d_f64[0];
  dVar7 = (this->CurrentTransform).Translation.ZW.m128d_f64[1] -
          (this->PreviousTransform).Translation.ZW.m128d_f64[1];
  dVar19 = (this->CurrentTransform).Translation.XY.m128d_f64[0] -
           (this->PreviousTransform).Translation.XY.m128d_f64[0];
  dVar21 = (this->CurrentTransform).Translation.XY.m128d_f64[1] -
           (this->PreviousTransform).Translation.XY.m128d_f64[1];
  lVar17 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar7,0) & _UNK_15061cc88));
  lVar18 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar21,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar17;
  auVar1._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
  uVar14 = movmskpd((int)this,auVar1);
  auVar8._8_4_ = (int)lVar18;
  auVar8._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  iVar13 = movmskpd(in_EAX,auVar8);
  if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
    dVar11 = (this->CurrentTransform).Rotation.ZW.m128d_f64[0];
    dVar12 = (this->CurrentTransform).Rotation.ZW.m128d_f64[1];
    dVar19 = (this->CurrentTransform).Rotation.XY.m128d_f64[0];
    dVar21 = (this->CurrentTransform).Rotation.XY.m128d_f64[1];
    dVar6 = dVar11 - (this->PreviousTransform).Rotation.ZW.m128d_f64[0];
    dVar7 = dVar12 - (this->PreviousTransform).Rotation.ZW.m128d_f64[1];
    dVar11 = dVar11 + (this->PreviousTransform).Rotation.ZW.m128d_f64[0];
    dVar12 = dVar12 + (this->PreviousTransform).Rotation.ZW.m128d_f64[1];
    dVar20 = dVar19 - (this->PreviousTransform).Rotation.XY.m128d_f64[0];
    dVar22 = dVar21 - (this->PreviousTransform).Rotation.XY.m128d_f64[1];
    dVar19 = dVar19 + (this->PreviousTransform).Rotation.XY.m128d_f64[0];
    dVar21 = dVar21 + (this->PreviousTransform).Rotation.XY.m128d_f64[1];
    lVar17 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar7,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar17;
    auVar2._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar2._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar15 = movmskpd(0,auVar2);
    lVar17 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar22,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar17;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar14 = movmskpd(iVar13,auVar3);
    uVar16 = iVar15 << 2 | uVar14;
    if (uVar16 != 0) {
      lVar17 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar12,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar17;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar11,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      uVar16 = movmskpd(uVar16,auVar4);
      lVar17 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar21,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar17;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar19,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      uVar14 = movmskpd(uVar14,auVar9);
      if ((uVar16 & 0x3fffffff) != 0 || uVar14 != 0) goto LAB_1483281fd;
    }
    dVar6 = (this->CurrentTransform).Scale3D.ZW.m128d_f64[0] -
            (this->PreviousTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = (this->CurrentTransform).Scale3D.ZW.m128d_f64[1] -
            (this->PreviousTransform).Scale3D.ZW.m128d_f64[1];
    dVar19 = (this->CurrentTransform).Scale3D.XY.m128d_f64[0] -
             (this->PreviousTransform).Scale3D.XY.m128d_f64[0];
    dVar21 = (this->CurrentTransform).Scale3D.XY.m128d_f64[1] -
             (this->PreviousTransform).Scale3D.XY.m128d_f64[1];
    lVar17 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar7,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar17;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar5._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar16 = movmskpd(0,auVar5);
    lVar17 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar10._8_4_ = (int)lVar17;
    auVar10._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar10._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar13 = movmskpd(uVar14,auVar10);
    if ((uVar16 & 0x3fffffff) == 0 && iVar13 == 0) {
      return;
    }
  }
LAB_1483281fd:
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPhysicsHandleComponent::UpdateHandleTransform'::__l5::<lambda_1>,void,Chaos::FSingleParticlePhysicsProxy_*_&>
             ::Call;
  local_res8[0] = this;
  FPhysInterface_Chaos::ExecuteWrite
            (&this->KinematicHandle,
             (TFunctionRef<void___cdecl(Chaos::FSingleParticlePhysicsProxy_*_&)> *)&local_38);
  dVar6 = (this->CurrentTransform).Rotation.XY.m128d_f64[1];
  dVar7 = (this->CurrentTransform).Rotation.ZW.m128d_f64[0];
  dVar19 = (this->CurrentTransform).Rotation.ZW.m128d_f64[1];
  (this->PreviousTransform).Rotation.XY.m128d_f64[0] =
       (this->CurrentTransform).Rotation.XY.m128d_f64[0];
  (this->PreviousTransform).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (this->CurrentTransform).Translation.XY.m128d_f64[0];
  dVar21 = (this->CurrentTransform).Translation.XY.m128d_f64[1];
  (this->PreviousTransform).Rotation.ZW.m128d_f64[0] = dVar7;
  (this->PreviousTransform).Rotation.ZW.m128d_f64[1] = dVar19;
  dVar7 = (this->CurrentTransform).Translation.ZW.m128d_f64[0];
  dVar19 = (this->CurrentTransform).Translation.ZW.m128d_f64[1];
  (this->PreviousTransform).Translation.XY.m128d_f64[0] = dVar6;
  (this->PreviousTransform).Translation.XY.m128d_f64[1] = dVar21;
  dVar6 = (this->CurrentTransform).Scale3D.XY.m128d_f64[0];
  dVar21 = (this->CurrentTransform).Scale3D.XY.m128d_f64[1];
  (this->PreviousTransform).Translation.ZW.m128d_f64[0] = dVar7;
  (this->PreviousTransform).Translation.ZW.m128d_f64[1] = dVar19;
  dVar7 = (this->CurrentTransform).Scale3D.ZW.m128d_f64[0];
  dVar19 = (this->CurrentTransform).Scale3D.ZW.m128d_f64[1];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[0] = dVar6;
  (this->PreviousTransform).Scale3D.XY.m128d_f64[1] = dVar21;
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[0] = dVar7;
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[1] = dVar19;
  return;
}

// execGetGrabbedComponent @ 14832d9d0

void __cdecl
UPhysicsHandleComponent::execGetGrabbedComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x20;
  return;
}

// execGetTargetLocationAndRotation @ 14832dc30

void __cdecl
UPhysicsHandleComponent::execGetTargetLocationAndRotation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  double *pdVar26;
  uchar *puVar27;
  uchar local_78 [24];
  double local_60 [3];
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar27 = local_78;
  if (puVar1 != (uchar *)0x0) {
    puVar27 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  pdVar26 = local_60;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar26 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.X = *(double *)(param_1 + 6);
  local_28.Y = *(double *)&param_1[6].field_0x8;
  local_28.Z = *(double *)&param_1[6].field_0x10;
  local_28.W = *(double *)&param_1[6].field_0x18;
  UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
  *pdVar26 = local_48.Pitch;
  pdVar26[1] = local_48.Yaw;
  pdVar26[2] = local_48.Roll;
  uVar3 = param_1[6].field_0x21;
  uVar4 = param_1[6].field_0x22;
  uVar5 = param_1[6].field_0x23;
  uVar6 = param_1[6].field_0x24;
  uVar7 = param_1[6].field_0x25;
  uVar8 = param_1[6].field_0x26;
  uVar9 = param_1[6].field_0x27;
  uVar10 = param_1[7].field_0x0;
  uVar11 = param_1[7].field_0x1;
  uVar12 = param_1[7].field_0x2;
  uVar13 = param_1[7].field_0x3;
  uVar14 = param_1[7].field_0x4;
  uVar15 = param_1[7].field_0x5;
  uVar16 = param_1[7].field_0x6;
  uVar17 = param_1[7].field_0x7;
  uVar18 = param_1[7].field_0x8;
  uVar19 = param_1[7].field_0x9;
  uVar20 = param_1[7].field_0xa;
  uVar21 = param_1[7].field_0xb;
  uVar22 = param_1[7].field_0xc;
  uVar23 = param_1[7].field_0xd;
  uVar24 = param_1[7].field_0xe;
  uVar25 = param_1[7].field_0xf;
  puVar27[0] = param_1[6].field_0x20;
  puVar27[1] = uVar3;
  puVar27[2] = uVar4;
  puVar27[3] = uVar5;
  puVar27[4] = uVar6;
  puVar27[5] = uVar7;
  puVar27[6] = uVar8;
  puVar27[7] = uVar9;
  puVar27[8] = uVar10;
  puVar27[9] = uVar11;
  puVar27[10] = uVar12;
  puVar27[0xb] = uVar13;
  puVar27[0xc] = uVar14;
  puVar27[0xd] = uVar15;
  puVar27[0xe] = uVar16;
  puVar27[0xf] = uVar17;
  puVar27[0x10] = uVar18;
  puVar27[0x11] = uVar19;
  puVar27[0x12] = uVar20;
  puVar27[0x13] = uVar21;
  puVar27[0x14] = uVar22;
  puVar27[0x15] = uVar23;
  puVar27[0x16] = uVar24;
  puVar27[0x17] = uVar25;
  return;
}

// execGrabComponent @ 14832dd80

void __cdecl
UPhysicsHandleComponent::execGrabComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_48;
  (**(code **)(*(longlong *)param_1 + 0x4f8))
            (param_1,local_res20,local_res10[0],&local_38,local_res8[0] != 0);
  return;
}

// execGrabComponentAtLocation @ 14832df10

void __cdecl
UPhysicsHandleComponent::execGrabComponentAtLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  (**(code **)(*(longlong *)param_1 + 0x518))
            (param_1,local_res10,local_res8,&local_28,&UE::Math::TRotator<double>::ZeroRotator,0);
  return;
}

// execGrabComponentAtLocationWithRotation @ 14832e070

void __cdecl
UPhysicsHandleComponent::execGrabComponentAtLocationWithRotation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_48 = local_78;
  uStack_40 = uStack_70;
  local_38 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_60;
  uStack_24 = uStack_5c;
  uStack_20 = uStack_58;
  uStack_1c = uStack_54;
  local_18 = local_50;
  (**(code **)(*(longlong *)param_1 + 0x518))(param_1,local_res10,local_res8,&local_28,&local_48,1);
  return;
}

// execReleaseComponent @ 14832edc0

void __cdecl
UPhysicsHandleComponent::execReleaseComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014832edd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x500))();
  return;
}

// execSetAngularDamping @ 14832f2b0

void __cdecl
UPhysicsHandleComponent::execSetAngularDamping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)&param_1[5].field_0x14 = local_res8[0];
  (**(code **)(lVar2 + 0x510))(param_1);
  return;
}

// execSetAngularStiffness @ 14832f820

void __cdecl
UPhysicsHandleComponent::execSetAngularStiffness(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)&param_1[5].field_0x18 = local_res8[0];
  (**(code **)(lVar2 + 0x510))(param_1);
  return;
}

// execSetInterpolationSpeed @ 1483304f0

void __cdecl
UPhysicsHandleComponent::execSetInterpolationSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[10].field_0x20 = local_res8[0];
  return;
}

// execSetLinearDamping @ 148330670

void __cdecl
UPhysicsHandleComponent::execSetLinearDamping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)&param_1[5].field_0xc = local_res8[0];
  (**(code **)(lVar2 + 0x510))(param_1);
  return;
}

// execSetLinearStiffness @ 148330bd0

void __cdecl
UPhysicsHandleComponent::execSetLinearStiffness(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)&param_1[5].field_0x10 = local_res8[0];
  (**(code **)(lVar2 + 0x510))(param_1);
  return;
}

// execSetTargetLocation @ 148331820

void __cdecl
UPhysicsHandleComponent::execSetTargetLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[6].field_0x20 = local_48;
  *(undefined8 *)(param_1 + 7) = uStack_40;
  *(undefined8 *)&param_1[7].field_0x8 = local_38;
  *(undefined8 *)&param_1[7].field_0x10 = 0;
  return;
}

// execSetTargetLocationAndRotation @ 1483318b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPhysicsHandleComponent::execSetTargetLocationAndRotation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 uVar6;
  TQuat<double> *pTVar7;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  TRotator<double> local_78 [2];
  undefined8 local_48;
  TQuat<double> local_38;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_78[0].Pitch = local_a8;
  local_78[0].Yaw = dStack_a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78[0].Roll = local_98;
  local_48 = local_80;
  pTVar7 = UE::Math::TRotator<double>::Quaternion(local_78,&local_38);
  dVar5 = pTVar7->Y;
  dVar2 = pTVar7->Z;
  uVar3 = *(undefined4 *)&pTVar7->W;
  uVar4 = *(undefined4 *)((longlong)&pTVar7->W + 4);
  *(double *)(param_1 + 6) = pTVar7->X;
  *(double *)&param_1[6].field_0x8 = dVar5;
  *(double *)&param_1[6].field_0x10 = dVar2;
  *(undefined4 *)&param_1[6].field_0x18 = uVar3;
  *(undefined4 *)&param_1[6].field_0x1c = uVar4;
  *(undefined4 *)&param_1[6].field_0x20 = local_90;
  *(undefined4 *)&param_1[6].field_0x24 = uStack_8c;
  *(undefined4 *)(param_1 + 7) = uStack_88;
  *(undefined4 *)&param_1[7].field_0x4 = uStack_84;
  *(undefined8 *)&param_1[7].field_0x8 = local_48;
  *(undefined8 *)&param_1[7].field_0x10 = 0;
  uVar6 = _UNK_150689688;
  *(undefined8 *)&param_1[7].field_0x18 = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)&param_1[7].field_0x20 = uVar6;
  uVar6 = _UNK_150689518;
  *(undefined8 *)(param_1 + 8) = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)&param_1[8].field_0x8 = uVar6;
  return;
}

// execSetTargetRotation @ 148331a10

void __cdecl
UPhysicsHandleComponent::execSetTargetRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TQuat<double> *pTVar5;
  double local_68;
  double dStack_60;
  double local_58;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_48.Pitch = local_68;
  local_48.Yaw = dStack_60;
  local_48.Roll = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar5 = UE::Math::TRotator<double>::Quaternion(&local_48,&local_28);
  dVar2 = pTVar5->Y;
  dVar3 = pTVar5->Z;
  dVar4 = pTVar5->W;
  *(double *)(param_1 + 6) = pTVar5->X;
  *(double *)&param_1[6].field_0x8 = dVar2;
  *(double *)&param_1[6].field_0x10 = dVar3;
  *(double *)&param_1[6].field_0x18 = dVar4;
  return;
}


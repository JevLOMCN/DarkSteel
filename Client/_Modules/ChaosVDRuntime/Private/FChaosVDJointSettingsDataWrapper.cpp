// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 4

// StaticStruct @ 1436c6680

UScriptStruct * __cdecl FChaosVDJointSettingsDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointSettingsDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDJointSettingsDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper,
                         (UObject *)pUVar1,L"ChaosVDJointSettingsDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDJointSettingsDataWrapper.OuterSingleton;
}

// FChaosVDJointSettingsDataWrapper @ 1436d48c0

FChaosVDJointSettingsDataWrapper * __thiscall
FChaosVDJointSettingsDataWrapper::FChaosVDJointSettingsDataWrapper
          (FChaosVDJointSettingsDataWrapper *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
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
  undefined8 uVar16;
  double dVar17;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FChaosVDJointSettingsDataWrapper__6B_;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[0].Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[0].Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[0].Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[0].Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[0].Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[0].Scale3D.ZW.m128d_f64 = auVar9;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[1].Rotation.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar3,0);
  auVar11._0_8_ = (double)fVar2;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[1].Rotation.ZW.m128d_f64 = auVar11;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[1].Translation.XY.m128d_f64 = auVar12;
  auVar13._8_4_ = SUB84((double)fVar3,0);
  auVar13._0_8_ = (double)fVar2;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[1].Translation.ZW.m128d_f64 = auVar13;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[1].Scale3D.XY.m128d_f64 = auVar14;
  auVar15._8_4_ = SUB84((double)fVar3,0);
  auVar15._0_8_ = (double)fVar2;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])this->ConnectorTransforms[1].Scale3D.ZW.m128d_f64 = auVar15;
  this->bCollisionEnabled = 0;
  this->bAngularSwingVelocityDriveEnabled = 0;
  this->bAngularSwingPositionDriveEnabled = 0;
  this->bAngularTwistVelocityDriveEnabled = 0;
  this->bAngularTwistPositionDriveEnabled = 0;
  this->bAngularSLerpVelocityDriveEnabled = 0;
  this->bAngularSLerpPositionDriveEnabled = 0;
  this->bSoftSwingLimitsEnabled = 0;
  this->bSoftTwistLimitsEnabled = 0;
  this->bSoftLinearLimitsEnabled = 0;
  this->bUseLinearSolver = 0;
  this->bMassConditioningEnabled = 0;
  this->Stiffness = 0.0;
  this->LinearProjection = 0.0;
  this->AngularProjection = 0.0;
  this->ShockPropagation = 0.0;
  this->TeleportDistance = 0.0;
  this->TeleportAngle = 0.0;
  this->ParentInvMassScale = 0.0;
  this->LinearMotionTypes[0] = Free;
  this->LinearMotionTypes[1] = Free;
  this->LinearMotionTypes[2] = Free;
  this->LinearLimit = 0.0;
  this->AngularMotionTypes[0] = Free;
  this->AngularMotionTypes[1] = Free;
  this->AngularMotionTypes[2] = Free;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularLimits).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularLimits).field0_0x0._s_0.Y = (double)uVar16;
  (this->AngularLimits).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->LinearSoftForceMode = Acceleration;
  this->AngularSoftForceMode = Acceleration;
  this->SoftLinearStiffness = 0.0;
  this->SoftLinearDamping = 0.0;
  this->SoftTwistStiffness = 0.0;
  this->SoftTwistDamping = 0.0;
  this->SoftSwingStiffness = 0.0;
  this->SoftSwingDamping = 0.0;
  this->LinearRestitution = 0.0;
  this->TwistRestitution = 0.0;
  this->SwingRestitution = 0.0;
  this->LinearContactDistance = 0.0;
  this->TwistContactDistance = 0.0;
  this->SwingContactDistance = 0.0;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LinearDrivePositionTarget).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LinearDrivePositionTarget).field0_0x0._s_0.Y = (double)uVar16;
  (this->LinearDrivePositionTarget).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LinearDriveVelocityTarget).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LinearDriveVelocityTarget).field0_0x0._s_0.Y = (double)uVar16;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bLinearPositionDriveEnabled0 = '\0';
  this->bLinearVelocityDriveEnabled2 = '\0';
  this->bLinearVelocityDriveEnabled1 = '\0';
  this->bLinearVelocityDriveEnabled0 = '\0';
  this->bLinearPositionDriveEnabled2 = '\0';
  this->bLinearPositionDriveEnabled1 = '\0';
  (this->LinearDriveVelocityTarget).field0_0x0._s_0.Z = (double)uVar16;
  this->LinearDriveForceMode = Acceleration;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LinearDriveStiffness).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LinearDriveStiffness).field0_0x0._s_0.Y = (double)uVar16;
  (this->LinearDriveStiffness).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LinearDriveDamping).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LinearDriveDamping).field0_0x0._s_0.Y = (double)uVar16;
  (this->LinearDriveDamping).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LinearDriveMaxForce).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LinearDriveMaxForce).field0_0x0._s_0.Y = (double)uVar16;
  (this->LinearDriveMaxForce).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar17 = UE::Math::TQuat<double>::Identity.Y;
  (this->AngularDrivePositionTarget).X = UE::Math::TQuat<double>::Identity.X;
  (this->AngularDrivePositionTarget).Y = dVar17;
  dVar17 = UE::Math::TQuat<double>::Identity.W;
  (this->AngularDrivePositionTarget).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->AngularDrivePositionTarget).W = dVar17;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularDriveVelocityTarget).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularDriveVelocityTarget).field0_0x0._s_0.Y = (double)uVar16;
  (this->AngularDriveVelocityTarget).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->AngularDriveForceMode = Acceleration;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularDriveStiffness).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularDriveStiffness).field0_0x0._s_0.Y = (double)uVar16;
  (this->AngularDriveStiffness).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularDriveDamping).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularDriveDamping).field0_0x0._s_0.Y = (double)uVar16;
  (this->AngularDriveDamping).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularDriveMaxTorque).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularDriveMaxTorque).field0_0x0._s_0.Y = (double)uVar16;
  (this->AngularDriveMaxTorque).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->LinearBreakForce = 0.0;
  this->LinearPlasticityLimit = 0.0;
  this->LinearPlasticityType = Free;
  this->LinearPlasticityInitialDistanceSquared = 0.0;
  this->AngularBreakTorque = 0.0;
  this->AngularPlasticityLimit = 0.0;
  this->ContactTransferScale = 0.0;
  return this;
}

// operator= @ 1436d6900

FChaosVDJointSettingsDataWrapper * __thiscall
FChaosVDJointSettingsDataWrapper::operator=
          (FChaosVDJointSettingsDataWrapper *this,FChaosVDJointSettingsDataWrapper *param_1)

{
  undefined1 uVar1;
  double dVar2;
  byte bVar3;
  ushort uVar4;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  dVar2 = param_1->ConnectorTransforms[0].Rotation.XY.m128d_f64[1];
  this->ConnectorTransforms[0].Rotation.XY.m128d_f64[0] =
       param_1->ConnectorTransforms[0].Rotation.XY.m128d_f64[0];
  this->ConnectorTransforms[0].Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ConnectorTransforms[0].Rotation.ZW.m128d_f64[1];
  this->ConnectorTransforms[0].Rotation.ZW.m128d_f64[0] =
       param_1->ConnectorTransforms[0].Rotation.ZW.m128d_f64[0];
  this->ConnectorTransforms[0].Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ConnectorTransforms[0].Translation.XY.m128d_f64[1];
  this->ConnectorTransforms[0].Translation.XY.m128d_f64[0] =
       param_1->ConnectorTransforms[0].Translation.XY.m128d_f64[0];
  this->ConnectorTransforms[0].Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ConnectorTransforms[0].Translation.ZW.m128d_f64[1];
  this->ConnectorTransforms[0].Translation.ZW.m128d_f64[0] =
       param_1->ConnectorTransforms[0].Translation.ZW.m128d_f64[0];
  this->ConnectorTransforms[0].Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ConnectorTransforms[0].Scale3D.XY.m128d_f64[1];
  this->ConnectorTransforms[0].Scale3D.XY.m128d_f64[0] =
       param_1->ConnectorTransforms[0].Scale3D.XY.m128d_f64[0];
  this->ConnectorTransforms[0].Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ConnectorTransforms[0].Scale3D.ZW.m128d_f64[1];
  this->ConnectorTransforms[0].Scale3D.ZW.m128d_f64[0] =
       param_1->ConnectorTransforms[0].Scale3D.ZW.m128d_f64[0];
  this->ConnectorTransforms[0].Scale3D.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ConnectorTransforms[1].Rotation.XY.m128d_f64[1];
  this->ConnectorTransforms[1].Rotation.XY.m128d_f64[0] =
       param_1->ConnectorTransforms[1].Rotation.XY.m128d_f64[0];
  this->ConnectorTransforms[1].Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ConnectorTransforms[1].Rotation.ZW.m128d_f64[1];
  this->ConnectorTransforms[1].Rotation.ZW.m128d_f64[0] =
       param_1->ConnectorTransforms[1].Rotation.ZW.m128d_f64[0];
  this->ConnectorTransforms[1].Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ConnectorTransforms[1].Translation.XY.m128d_f64[1];
  this->ConnectorTransforms[1].Translation.XY.m128d_f64[0] =
       param_1->ConnectorTransforms[1].Translation.XY.m128d_f64[0];
  this->ConnectorTransforms[1].Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ConnectorTransforms[1].Translation.ZW.m128d_f64[1];
  this->ConnectorTransforms[1].Translation.ZW.m128d_f64[0] =
       param_1->ConnectorTransforms[1].Translation.ZW.m128d_f64[0];
  this->ConnectorTransforms[1].Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = param_1->ConnectorTransforms[1].Scale3D.XY.m128d_f64[1];
  this->ConnectorTransforms[1].Scale3D.XY.m128d_f64[0] =
       param_1->ConnectorTransforms[1].Scale3D.XY.m128d_f64[0];
  this->ConnectorTransforms[1].Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = param_1->ConnectorTransforms[1].Scale3D.ZW.m128d_f64[1];
  this->ConnectorTransforms[1].Scale3D.ZW.m128d_f64[0] =
       param_1->ConnectorTransforms[1].Scale3D.ZW.m128d_f64[0];
  this->ConnectorTransforms[1].Scale3D.ZW.m128d_f64[1] = dVar2;
  this->Stiffness = param_1->Stiffness;
  this->LinearProjection = param_1->LinearProjection;
  this->AngularProjection = param_1->AngularProjection;
  this->ShockPropagation = param_1->ShockPropagation;
  this->TeleportDistance = param_1->TeleportDistance;
  this->TeleportAngle = param_1->TeleportAngle;
  this->ParentInvMassScale = param_1->ParentInvMassScale;
  uVar4 = (ZPULL(*(undefined2 *)&this->field_0x108,0,1) ^ param_1->bCollisionEnabled) & 1 ^
          *(undefined2 *)&this->field_0x108;
  *(ushort *)&this->field_0x108 = uVar4;
  uVar4 = (uVar4 ^ *(ushort *)&param_1->field_0x108) & 2 ^ uVar4;
  *(ushort *)&this->field_0x108 = uVar4;
  uVar4 = (uVar4 ^ *(ushort *)&param_1->field_0x108) & 4 ^ uVar4;
  *(ushort *)&this->field_0x108 = uVar4;
  uVar4 = (uVar4 ^ *(ushort *)&param_1->field_0x108) & 8 ^ uVar4;
  *(ushort *)&this->field_0x108 = uVar4;
  uVar4 = (uVar4 ^ *(ushort *)&param_1->field_0x108) & 0x10 ^ uVar4;
  *(ushort *)&this->field_0x108 = uVar4;
  uVar4 = (uVar4 ^ *(ushort *)&param_1->field_0x108) & 0x20 ^ uVar4;
  *(ushort *)&this->field_0x108 = uVar4;
  uVar4 = (uVar4 ^ *(ushort *)&param_1->field_0x108) & 0x40 ^ uVar4;
  *(ushort *)&this->field_0x108 = uVar4;
  uVar4 = (uVar4 ^ *(ushort *)&param_1->field_0x108) & 0x80 ^ uVar4;
  *(ushort *)&this->field_0x108 = uVar4;
  uVar4 = (uVar4 ^ *(ushort *)&param_1->field_0x108) & 0x100 ^ uVar4;
  *(ushort *)&this->field_0x108 = uVar4;
  uVar4 = (uVar4 ^ *(ushort *)&param_1->field_0x108) & 0x200 ^ uVar4;
  *(ushort *)&this->field_0x108 = uVar4;
  uVar4 = (uVar4 ^ *(ushort *)&param_1->field_0x108) & 0x400 ^ uVar4;
  *(ushort *)&this->field_0x108 = uVar4;
  *(ushort *)&this->field_0x108 = (uVar4 ^ *(ushort *)&param_1->field_0x108) & 0x800 ^ uVar4;
  this->LinearMotionTypes[0] = param_1->LinearMotionTypes[0];
  this->LinearMotionTypes[1] = param_1->LinearMotionTypes[1];
  this->LinearMotionTypes[2] = param_1->LinearMotionTypes[2];
  this->LinearLimit = param_1->LinearLimit;
  this->AngularMotionTypes[0] = param_1->AngularMotionTypes[0];
  this->AngularMotionTypes[1] = param_1->AngularMotionTypes[1];
  this->AngularMotionTypes[2] = param_1->AngularMotionTypes[2];
  dVar2 = (param_1->AngularLimits).field0_0x0._s_0.Y;
  (this->AngularLimits).field0_0x0._s_0.X = (param_1->AngularLimits).field0_0x0._s_0.X;
  (this->AngularLimits).field0_0x0._s_0.Y = dVar2;
  (this->AngularLimits).field0_0x0._s_0.Z = (param_1->AngularLimits).field0_0x0._s_0.Z;
  this->LinearSoftForceMode = param_1->LinearSoftForceMode;
  this->AngularSoftForceMode = param_1->AngularSoftForceMode;
  this->SoftLinearStiffness = param_1->SoftLinearStiffness;
  this->SoftLinearDamping = param_1->SoftLinearDamping;
  this->SoftTwistStiffness = param_1->SoftTwistStiffness;
  this->SoftTwistDamping = param_1->SoftTwistDamping;
  this->SoftSwingStiffness = param_1->SoftSwingStiffness;
  this->SoftSwingDamping = param_1->SoftSwingDamping;
  this->LinearRestitution = param_1->LinearRestitution;
  this->TwistRestitution = param_1->TwistRestitution;
  this->SwingRestitution = param_1->SwingRestitution;
  this->LinearContactDistance = param_1->LinearContactDistance;
  this->TwistContactDistance = param_1->TwistContactDistance;
  this->SwingContactDistance = param_1->SwingContactDistance;
  dVar2 = (param_1->LinearDrivePositionTarget).field0_0x0._s_0.Y;
  uVar1 = this->field_0x1e0;
  (this->LinearDrivePositionTarget).field0_0x0._s_0.X =
       (param_1->LinearDrivePositionTarget).field0_0x0._s_0.X;
  (this->LinearDrivePositionTarget).field0_0x0._s_0.Y = dVar2;
  (this->LinearDrivePositionTarget).field0_0x0._s_0.Z =
       (param_1->LinearDrivePositionTarget).field0_0x0._s_0.Z;
  dVar2 = (param_1->LinearDriveVelocityTarget).field0_0x0._s_0.Y;
  (this->LinearDriveVelocityTarget).field0_0x0._s_0.X =
       (param_1->LinearDriveVelocityTarget).field0_0x0._s_0.X;
  (this->LinearDriveVelocityTarget).field0_0x0._s_0.Y = dVar2;
  (this->LinearDriveVelocityTarget).field0_0x0._s_0.Z =
       (param_1->LinearDriveVelocityTarget).field0_0x0._s_0.Z;
  bVar3 = (this->bLinearPositionDriveEnabled0 ^ param_1->bLinearPositionDriveEnabled0) & 1 ^ uVar1;
  this->field_0x1e0 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x1e0) & 2 ^ bVar3;
  this->field_0x1e0 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x1e0) & 4 ^ bVar3;
  this->field_0x1e0 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x1e0) & 8 ^ bVar3;
  this->field_0x1e0 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x1e0) & 0x10 ^ bVar3;
  this->field_0x1e0 = bVar3;
  this->field_0x1e0 = (bVar3 ^ param_1->field_0x1e0) & 0x20 ^ bVar3;
  this->LinearDriveForceMode = param_1->LinearDriveForceMode;
  dVar2 = (param_1->LinearDriveStiffness).field0_0x0._s_0.Y;
  (this->LinearDriveStiffness).field0_0x0._s_0.X = (param_1->LinearDriveStiffness).field0_0x0._s_0.X
  ;
  (this->LinearDriveStiffness).field0_0x0._s_0.Y = dVar2;
  (this->LinearDriveStiffness).field0_0x0._s_0.Z = (param_1->LinearDriveStiffness).field0_0x0._s_0.Z
  ;
  dVar2 = (param_1->LinearDriveDamping).field0_0x0._s_0.Y;
  (this->LinearDriveDamping).field0_0x0._s_0.X = (param_1->LinearDriveDamping).field0_0x0._s_0.X;
  (this->LinearDriveDamping).field0_0x0._s_0.Y = dVar2;
  (this->LinearDriveDamping).field0_0x0._s_0.Z = (param_1->LinearDriveDamping).field0_0x0._s_0.Z;
  dVar2 = (param_1->LinearDriveMaxForce).field0_0x0._s_0.Y;
  (this->LinearDriveMaxForce).field0_0x0._s_0.X = (param_1->LinearDriveMaxForce).field0_0x0._s_0.X;
  (this->LinearDriveMaxForce).field0_0x0._s_0.Y = dVar2;
  (this->LinearDriveMaxForce).field0_0x0._s_0.Z = (param_1->LinearDriveMaxForce).field0_0x0._s_0.Z;
  dVar2 = (param_1->AngularDrivePositionTarget).Y;
  (this->AngularDrivePositionTarget).X = (param_1->AngularDrivePositionTarget).X;
  (this->AngularDrivePositionTarget).Y = dVar2;
  dVar2 = (param_1->AngularDrivePositionTarget).W;
  (this->AngularDrivePositionTarget).Z = (param_1->AngularDrivePositionTarget).Z;
  (this->AngularDrivePositionTarget).W = dVar2;
  dVar2 = (param_1->AngularDriveVelocityTarget).field0_0x0._s_0.Y;
  (this->AngularDriveVelocityTarget).field0_0x0._s_0.X =
       (param_1->AngularDriveVelocityTarget).field0_0x0._s_0.X;
  (this->AngularDriveVelocityTarget).field0_0x0._s_0.Y = dVar2;
  (this->AngularDriveVelocityTarget).field0_0x0._s_0.Z =
       (param_1->AngularDriveVelocityTarget).field0_0x0._s_0.Z;
  this->AngularDriveForceMode = param_1->AngularDriveForceMode;
  dVar2 = (param_1->AngularDriveStiffness).field0_0x0._s_0.Y;
  (this->AngularDriveStiffness).field0_0x0._s_0.X =
       (param_1->AngularDriveStiffness).field0_0x0._s_0.X;
  (this->AngularDriveStiffness).field0_0x0._s_0.Y = dVar2;
  (this->AngularDriveStiffness).field0_0x0._s_0.Z =
       (param_1->AngularDriveStiffness).field0_0x0._s_0.Z;
  dVar2 = (param_1->AngularDriveDamping).field0_0x0._s_0.Y;
  (this->AngularDriveDamping).field0_0x0._s_0.X = (param_1->AngularDriveDamping).field0_0x0._s_0.X;
  (this->AngularDriveDamping).field0_0x0._s_0.Y = dVar2;
  (this->AngularDriveDamping).field0_0x0._s_0.Z = (param_1->AngularDriveDamping).field0_0x0._s_0.Z;
  dVar2 = (param_1->AngularDriveMaxTorque).field0_0x0._s_0.Y;
  (this->AngularDriveMaxTorque).field0_0x0._s_0.X =
       (param_1->AngularDriveMaxTorque).field0_0x0._s_0.X;
  (this->AngularDriveMaxTorque).field0_0x0._s_0.Y = dVar2;
  (this->AngularDriveMaxTorque).field0_0x0._s_0.Z =
       (param_1->AngularDriveMaxTorque).field0_0x0._s_0.Z;
  this->LinearBreakForce = param_1->LinearBreakForce;
  this->LinearPlasticityLimit = param_1->LinearPlasticityLimit;
  this->LinearPlasticityType = param_1->LinearPlasticityType;
  this->LinearPlasticityInitialDistanceSquared = param_1->LinearPlasticityInitialDistanceSquared;
  this->AngularBreakTorque = param_1->AngularBreakTorque;
  this->AngularPlasticityLimit = param_1->AngularPlasticityLimit;
  this->ContactTransferScale = param_1->ContactTransferScale;
  return this;
}

// Serialize @ 1436dd310

bool __thiscall
FChaosVDJointSettingsDataWrapper::Serialize
          (FChaosVDJointSettingsDataWrapper *this,FArchive *param_1)

{
  double *pdVar1;
  EChaosVDJointMotionType *pEVar2;
  EChaosVDJointForceMode *pEVar3;
  EChaosVDPlasticityType *pEVar4;
  undefined1 *puVar5;
  double *pdVar6;
  EChaosVDJointMotionType *pEVar7;
  EChaosVDJointForceMode *pEVar8;
  EChaosVDPlasticityType *pEVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  uint local_res8 [2];
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    UE::Math::operator<<(param_1,(TQuat<double> *)this->ConnectorTransforms);
    UE::Math::operator<<(param_1,(TVector<double> *)&this->ConnectorTransforms[0].Translation);
    UE::Math::operator<<(param_1,(TVector<double> *)&this->ConnectorTransforms[0].Scale3D);
    if ((param_1->field_0x28 & 1) != 0) {
      dVar11 = this->ConnectorTransforms[0].Translation.ZW.m128d_f64[0];
      dVar12 = this->ConnectorTransforms[0].Translation.XY.m128d_f64[1];
      this->ConnectorTransforms[0].Translation.XY.m128d_f64[0] =
           this->ConnectorTransforms[0].Translation.XY.m128d_f64[0];
      this->ConnectorTransforms[0].Translation.XY.m128d_f64[1] = dVar12;
      this->ConnectorTransforms[0].Translation.ZW.m128d_f64[0] = dVar11;
      this->ConnectorTransforms[0].Translation.ZW.m128d_f64[1] = 0.0;
      dVar11 = this->ConnectorTransforms[0].Scale3D.ZW.m128d_f64[0];
      dVar12 = this->ConnectorTransforms[0].Scale3D.XY.m128d_f64[1];
      this->ConnectorTransforms[0].Scale3D.XY.m128d_f64[0] =
           this->ConnectorTransforms[0].Scale3D.XY.m128d_f64[0];
      this->ConnectorTransforms[0].Scale3D.XY.m128d_f64[1] = dVar12;
      this->ConnectorTransforms[0].Scale3D.ZW.m128d_f64[0] = dVar11;
      this->ConnectorTransforms[0].Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    UE::Math::operator<<(param_1,(TQuat<double> *)(this->ConnectorTransforms + 1));
    UE::Math::operator<<(param_1,(TVector<double> *)&this->ConnectorTransforms[1].Translation);
    UE::Math::operator<<(param_1,(TVector<double> *)&this->ConnectorTransforms[1].Scale3D);
    if ((param_1->field_0x28 & 1) != 0) {
      dVar11 = this->ConnectorTransforms[1].Translation.ZW.m128d_f64[0];
      dVar12 = this->ConnectorTransforms[1].Translation.XY.m128d_f64[1];
      this->ConnectorTransforms[1].Translation.XY.m128d_f64[0] =
           this->ConnectorTransforms[1].Translation.XY.m128d_f64[0];
      this->ConnectorTransforms[1].Translation.XY.m128d_f64[1] = dVar12;
      this->ConnectorTransforms[1].Translation.ZW.m128d_f64[0] = dVar11;
      this->ConnectorTransforms[1].Translation.ZW.m128d_f64[1] = 0.0;
      dVar11 = this->ConnectorTransforms[1].Scale3D.ZW.m128d_f64[0];
      dVar12 = this->ConnectorTransforms[1].Scale3D.XY.m128d_f64[1];
      this->ConnectorTransforms[1].Scale3D.XY.m128d_f64[0] =
           this->ConnectorTransforms[1].Scale3D.XY.m128d_f64[0];
      this->ConnectorTransforms[1].Scale3D.XY.m128d_f64[1] = dVar12;
      this->ConnectorTransforms[1].Scale3D.ZW.m128d_f64[0] = dVar11;
      this->ConnectorTransforms[1].Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    pdVar1 = &this->Stiffness;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->LinearProjection;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->AngularProjection;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->ShockPropagation;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->TeleportDistance;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->TeleportAngle;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->ParentInvMassScale;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pEVar2 = this->LinearMotionTypes;
    pEVar7 = (EChaosVDJointMotionType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointMotionType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar2);
      }
    }
    else {
      *pEVar2 = *pEVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pEVar2 = this->LinearMotionTypes + 1;
    pEVar7 = (EChaosVDJointMotionType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointMotionType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar2);
      }
    }
    else {
      *pEVar2 = *pEVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pEVar2 = this->LinearMotionTypes + 2;
    pEVar7 = (EChaosVDJointMotionType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointMotionType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar2);
      }
    }
    else {
      *pEVar2 = *pEVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pdVar1 = &this->LinearLimit;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pEVar2 = this->AngularMotionTypes;
    pEVar7 = (EChaosVDJointMotionType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointMotionType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar2);
      }
    }
    else {
      *pEVar2 = *pEVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pEVar2 = this->AngularMotionTypes + 1;
    pEVar7 = (EChaosVDJointMotionType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointMotionType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar2);
      }
    }
    else {
      *pEVar2 = *pEVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pEVar2 = this->AngularMotionTypes + 2;
    pEVar7 = (EChaosVDJointMotionType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointMotionType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar2);
      }
    }
    else {
      *pEVar2 = *pEVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    UE::Math::operator<<(param_1,&this->AngularLimits);
    pEVar3 = &this->LinearSoftForceMode;
    pEVar8 = (EChaosVDJointForceMode *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointForceMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar3);
      }
    }
    else {
      *pEVar3 = *pEVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pEVar3 = &this->AngularSoftForceMode;
    pEVar8 = (EChaosVDJointForceMode *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointForceMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar3);
      }
    }
    else {
      *pEVar3 = *pEVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pdVar1 = &this->SoftLinearStiffness;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->SoftLinearDamping;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->SoftTwistStiffness;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->SoftTwistDamping;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->SoftSwingStiffness;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->SoftSwingDamping;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->LinearRestitution;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->TwistRestitution;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->SwingRestitution;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->LinearContactDistance;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->TwistContactDistance;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->SwingContactDistance;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    UE::Math::operator<<(param_1,&this->LinearDrivePositionTarget);
    UE::Math::operator<<(param_1,&this->LinearDriveVelocityTarget);
    pEVar3 = &this->LinearDriveForceMode;
    pEVar8 = (EChaosVDJointForceMode *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointForceMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar3);
      }
    }
    else {
      *pEVar3 = *pEVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    UE::Math::operator<<(param_1,&this->LinearDriveStiffness);
    UE::Math::operator<<(param_1,&this->LinearDriveDamping);
    UE::Math::operator<<(param_1,&this->LinearDriveMaxForce);
    UE::Math::operator<<(param_1,&this->AngularDrivePositionTarget);
    UE::Math::operator<<(param_1,&this->AngularDriveVelocityTarget);
    pEVar3 = &this->AngularDriveForceMode;
    pEVar8 = (EChaosVDJointForceMode *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDJointForceMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar3);
      }
    }
    else {
      *pEVar3 = *pEVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    UE::Math::operator<<(param_1,&this->AngularDriveStiffness);
    UE::Math::operator<<(param_1,&this->AngularDriveDamping);
    UE::Math::operator<<(param_1,&this->AngularDriveMaxTorque);
    pdVar1 = &this->LinearBreakForce;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->LinearPlasticityLimit;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pEVar4 = &this->LinearPlasticityType;
    pEVar9 = (EChaosVDPlasticityType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDPlasticityType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar9 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar4);
      }
    }
    else {
      *pEVar4 = *pEVar9;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pdVar1 = &this->LinearPlasticityInitialDistanceSquared;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->AngularBreakTorque;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->AngularPlasticityLimit;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    pdVar1 = &this->ContactTransferScale;
    pdVar6 = (double *)**(longlong **)&param_1->field_0x8;
    if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
      }
    }
    else {
      *pdVar1 = *pdVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      this->bLinearPositionDriveEnabled0 = '\0';
      this->bLinearVelocityDriveEnabled2 = '\0';
      this->bLinearVelocityDriveEnabled1 = '\0';
      this->bLinearVelocityDriveEnabled0 = '\0';
      this->bLinearPositionDriveEnabled2 = '\0';
      this->bLinearPositionDriveEnabled1 = '\0';
      this->bCollisionEnabled = 0;
      this->bAngularSwingVelocityDriveEnabled = 0;
      this->bAngularSwingPositionDriveEnabled = 0;
      this->bAngularTwistVelocityDriveEnabled = 0;
      this->bAngularTwistPositionDriveEnabled = 0;
      this->bAngularSLerpVelocityDriveEnabled = 0;
      this->bAngularSLerpPositionDriveEnabled = 0;
      this->bSoftSwingLimitsEnabled = 0;
      this->bSoftTwistLimitsEnabled = 0;
      this->bSoftLinearLimitsEnabled = 0;
      this->bUseLinearSolver = 0;
      this->bMassConditioningEnabled = 0;
    }
    plVar10 = *(longlong **)&param_1->field_0x8;
    if ((ulonglong)plVar10[1] < *plVar10 + 4U) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      *plVar10 = *plVar10 + 4;
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FPBDJointSettings @ 143c44650

FPBDJointSettings * __thiscall Chaos::FPBDJointSettings::FPBDJointSettings(FPBDJointSettings *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)(this->ConnectorTransforms).V = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->ConnectorTransforms).V[0].field_0x8 = (double)fVar1;
  *(double *)&(this->ConnectorTransforms).V[0].field_0x10 = (double)fVar2;
  *(double *)&(this->ConnectorTransforms).V[0].field_0x18 = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&(this->ConnectorTransforms).V[0].field_0x20 =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->ConnectorTransforms).V[0].field_0x28 = (double)fVar1;
  *(double *)&(this->ConnectorTransforms).V[0].field_0x30 = (double)fVar2;
  *(double *)&(this->ConnectorTransforms).V[0].field_0x38 = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->ConnectorTransforms).V[0].field_0x40 =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->ConnectorTransforms).V[0].field_0x48 = (double)fVar1;
  *(double *)&(this->ConnectorTransforms).V[0].field_0x50 = (double)fVar2;
  *(double *)&(this->ConnectorTransforms).V[0].field_0x58 = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((this->ConnectorTransforms).V + 1) =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->ConnectorTransforms).V[1].field_0x8 = (double)fVar1;
  *(double *)&(this->ConnectorTransforms).V[1].field_0x10 = (double)fVar2;
  *(double *)&(this->ConnectorTransforms).V[1].field_0x18 = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&(this->ConnectorTransforms).V[1].field_0x20 =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->ConnectorTransforms).V[1].field_0x28 = (double)fVar1;
  *(double *)&(this->ConnectorTransforms).V[1].field_0x30 = (double)fVar2;
  *(double *)&(this->ConnectorTransforms).V[1].field_0x38 = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->ConnectorTransforms).V[1].field_0x40 =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->ConnectorTransforms).V[1].field_0x48 = (double)fVar1;
  *(double *)&(this->ConnectorTransforms).V[1].field_0x50 = (double)fVar2;
  *(double *)&(this->ConnectorTransforms).V[1].field_0x58 = (double)fVar3;
  this->Stiffness = 1.0;
  this->LinearProjection = 0.0;
  this->AngularProjection = 0.0;
  this->ShockPropagation = 0.0;
  this->TeleportDistance = 0.0;
  this->TeleportAngle = 0.0;
  this->ParentInvMassScale = 1.0;
  this->bCollisionEnabled = true;
  this->bProjectionEnabled = false;
  this->bShockPropagationEnabled = false;
  this->bMassConditioningEnabled = true;
  this->bUseLinearSolver = true;
  (this->LinearMotionTypes).field0_0x0._s_0.X = Locked;
  (this->LinearMotionTypes).field0_0x0._s_0.Y = Locked;
  (this->LinearMotionTypes).field0_0x0._s_0.Z = Locked;
  this->LinearLimit = 3.4028234663852886e+38;
  *(undefined8 *)&(this->AngularMotionTypes).field0_0x0 = 0;
  (this->AngularMotionTypes).field0_0x0._s_0.Z = Free;
  *(undefined8 *)&this->AngularLimits = 0x47efffffe0000000;
  *(undefined8 *)&(this->AngularLimits).field_0x8 = 0x47efffffe0000000;
  *(undefined8 *)&(this->AngularLimits).field_0x10 = 0x47efffffe0000000;
  this->bSoftLinearLimitsEnabled = false;
  this->bSoftTwistLimitsEnabled = false;
  this->bSoftSwingLimitsEnabled = false;
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
  *(undefined8 *)&this->LinearDrivePositionTarget = 0;
  *(undefined8 *)&(this->LinearDrivePositionTarget).field_0x8 = 0;
  *(undefined8 *)&(this->LinearDrivePositionTarget).field_0x10 = 0;
  *(undefined8 *)&this->LinearDriveVelocityTarget = 0;
  *(undefined8 *)&(this->LinearDriveVelocityTarget).field_0x8 = 0;
  *(undefined8 *)&(this->LinearDriveVelocityTarget).field_0x10 = 0;
  *(undefined4 *)&this->bLinearPositionDriveEnabled = 0;
  *(undefined2 *)((longlong)&(this->bLinearVelocityDriveEnabled).field0_0x0 + 1) = 0;
  this->LinearDriveForceMode = Acceleration;
  *(undefined8 *)&this->LinearDriveStiffness = 0;
  *(undefined8 *)&(this->LinearDriveStiffness).field_0x8 = 0;
  *(undefined8 *)&(this->LinearDriveStiffness).field_0x10 = 0;
  *(undefined8 *)&this->LinearDriveDamping = 0;
  *(undefined8 *)&(this->LinearDriveDamping).field_0x8 = 0;
  *(undefined8 *)&(this->LinearDriveDamping).field_0x10 = 0;
  *(undefined8 *)&this->LinearDriveMaxForce = 0x47efffffe0000000;
  *(undefined8 *)&(this->LinearDriveMaxForce).field_0x8 = 0x47efffffe0000000;
  *(undefined8 *)&(this->LinearDriveMaxForce).field_0x10 = 0x47efffffe0000000;
  *(undefined8 *)&this->AngularDrivePositionTarget = 0;
  *(undefined8 *)&(this->AngularDrivePositionTarget).field_0x8 = 0;
  *(undefined8 *)&(this->AngularDrivePositionTarget).field_0x10 = 0;
  *(undefined8 *)&(this->AngularDrivePositionTarget).field_0x18 = 0x3ff0000000000000;
  *(undefined8 *)&this->AngularDriveVelocityTarget = 0;
  *(undefined8 *)&(this->AngularDriveVelocityTarget).field_0x8 = 0;
  *(undefined8 *)&(this->AngularDriveVelocityTarget).field_0x10 = 0;
  this->bAngularSLerpPositionDriveEnabled = false;
  this->bAngularSLerpVelocityDriveEnabled = false;
  this->bAngularTwistPositionDriveEnabled = false;
  this->bAngularTwistVelocityDriveEnabled = false;
  this->bAngularSwingPositionDriveEnabled = false;
  this->bAngularSwingVelocityDriveEnabled = false;
  this->AngularDriveForceMode = Acceleration;
  *(undefined8 *)&this->AngularDriveStiffness = 0;
  *(undefined8 *)&(this->AngularDriveStiffness).field_0x8 = 0;
  *(undefined8 *)&(this->AngularDriveStiffness).field_0x10 = 0;
  *(undefined8 *)&this->AngularDriveDamping = 0;
  *(undefined8 *)&(this->AngularDriveDamping).field_0x8 = 0;
  *(undefined8 *)&(this->AngularDriveDamping).field_0x10 = 0;
  *(undefined8 *)&this->AngularDriveMaxTorque = 0x47efffffe0000000;
  *(undefined8 *)&(this->AngularDriveMaxTorque).field_0x8 = 0x47efffffe0000000;
  *(undefined8 *)&(this->AngularDriveMaxTorque).field_0x10 = 0x47efffffe0000000;
  this->LinearBreakForce = 3.4028234663852886e+38;
  this->LinearViolationCallbackThreshold = 3.4028234663852886e+38;
  this->LinearPlasticityLimit = 3.4028234663852886e+38;
  this->LinearPlasticityType = Free;
  this->LinearPlasticityInitialDistanceSquared = 3.4028234663852886e+38;
  this->AngularBreakTorque = 3.4028234663852886e+38;
  this->AngularViolationCallbackThreshold = 3.4028234663852886e+38;
  this->AngularPlasticityLimit = 3.4028234663852886e+38;
  this->ContactTransferScale = 0.0;
  this->UserData = (void *)0x0;
  return this;
}

// Sanitize @ 143c72680

void __thiscall Chaos::FPBDJointSettings::Sanitize(FPBDJointSettings *this)

{
  undefined1 *puVar1;
  EJointMotionType EVar2;
  EJointMotionType EVar3;
  EJointMotionType EVar4;
  double dVar5;
  
  EVar2 = (this->LinearMotionTypes).field0_0x0._s_0.X;
  if (((EVar2 == Locked) && ((this->LinearMotionTypes).field0_0x0._s_0.Y == Locked)) &&
     ((this->LinearMotionTypes).field0_0x0._s_0.Z == Locked)) {
    this->bSoftLinearLimitsEnabled = false;
  }
  EVar3 = (this->AngularMotionTypes).field0_0x0._s_0.X;
  if (EVar3 == Locked) {
    this->bSoftTwistLimitsEnabled = false;
  }
  EVar4 = (this->AngularMotionTypes).field0_0x0._s_0.Z;
  if ((EVar4 == Locked) && ((this->AngularMotionTypes).field0_0x0._s_0.Y == Locked)) {
    this->bSoftSwingLimitsEnabled = false;
  }
  if (((EVar2 != Limited) && ((this->LinearMotionTypes).field0_0x0._s_0.Y != Limited)) &&
     ((this->LinearMotionTypes).field0_0x0._s_0.Z != Limited)) {
    this->LinearLimit = 0.0;
  }
  if (EVar3 != Limited) {
    *(undefined8 *)&this->AngularLimits = 0;
  }
  if (EVar4 != Limited) {
    *(undefined8 *)&(this->AngularLimits).field_0x10 = 0;
  }
  EVar2 = (this->AngularMotionTypes).field0_0x0._s_0.Y;
  if (EVar2 != Limited) {
    *(undefined8 *)&(this->AngularLimits).field_0x8 = 0;
  }
  dVar5 = __real_3f847ae140000000;
  if ((EVar3 == Limited) &&
     (*(double *)&this->AngularLimits <= __real_3f847ae140000000 &&
      __real_3f847ae140000000 != *(double *)&this->AngularLimits)) {
    if (this->bSoftTwistLimitsEnabled == false) {
      (this->AngularMotionTypes).field0_0x0._s_0.X = Locked;
    }
    else {
      *(undefined8 *)&this->AngularLimits = 0x3f847ae140000000;
    }
  }
  if (((this->AngularMotionTypes).field0_0x0._s_0.Z == Limited) &&
     (puVar1 = &(this->AngularLimits).field_0x10,
     *(double *)puVar1 <= dVar5 && dVar5 != *(double *)puVar1)) {
    if (this->bSoftSwingLimitsEnabled == false) {
      (this->AngularMotionTypes).field0_0x0._s_0.Z = Locked;
    }
    else {
      *(undefined8 *)&(this->AngularLimits).field_0x10 = 0x3f847ae140000000;
    }
  }
  if ((EVar2 == Limited) &&
     (puVar1 = &(this->AngularLimits).field_0x8,
     *(double *)puVar1 <= dVar5 && dVar5 != *(double *)puVar1)) {
    if (this->bSoftSwingLimitsEnabled == false) {
      (this->AngularMotionTypes).field0_0x0._s_0.Y = Locked;
    }
    else {
      *(undefined8 *)&(this->AngularLimits).field_0x8 = 0x3f847ae140000000;
    }
  }
  if (((this->bAngularSLerpPositionDriveEnabled != false) ||
      (this->bAngularSLerpVelocityDriveEnabled != false)) &&
     (((this->AngularMotionTypes).field0_0x0._s_0.X == Locked ||
      (((this->AngularMotionTypes).field0_0x0._s_0.Z == Locked ||
       ((this->AngularMotionTypes).field0_0x0._s_0.Y == Locked)))))) {
    this->bAngularSLerpPositionDriveEnabled = false;
    this->bAngularSLerpVelocityDriveEnabled = false;
  }
  return;
}


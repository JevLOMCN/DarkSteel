// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FChaosVDJointSettingsDataWrapper @ 1436f6090

FChaosVDJointSettingsDataWrapper * __thiscall
FChaosVDJointSettingsDataWrapper::FChaosVDJointSettingsDataWrapper
          (FChaosVDJointSettingsDataWrapper *this,FChaosVDJointSettingsDataWrapper *param_1)

{
  undefined1 uVar1;
  double dVar2;
  byte bVar3;
  ushort uVar4;
  
  this->_padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = (longlong)&___7FChaosVDJointSettingsDataWrapper__6B_;
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
  *(undefined8 *)this->LinearMotionTypes = *(undefined8 *)param_1->LinearMotionTypes;
  this->LinearMotionTypes[2] = param_1->LinearMotionTypes[2];
  this->LinearLimit = param_1->LinearLimit;
  *(undefined8 *)this->AngularMotionTypes = *(undefined8 *)param_1->AngularMotionTypes;
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
  (this->LinearDrivePositionTarget).field0_0x0._s_0.X =
       (param_1->LinearDrivePositionTarget).field0_0x0._s_0.X;
  (this->LinearDrivePositionTarget).field0_0x0._s_0.Y = dVar2;
  (this->LinearDrivePositionTarget).field0_0x0._s_0.Z =
       (param_1->LinearDrivePositionTarget).field0_0x0._s_0.Z;
  dVar2 = (param_1->LinearDriveVelocityTarget).field0_0x0._s_0.Y;
  uVar1 = this->field_0x1e0;
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

// FChaosVDJointSettingsDataWrapper @ 143dfa800

FChaosVDJointSettingsDataWrapper * __thiscall
FChaosVDJointSettingsDataWrapper::FChaosVDJointSettingsDataWrapper
          (FChaosVDJointSettingsDataWrapper *this,FChaosVDJointSettingsDataWrapper *param_1)

{
  undefined1 uVar1;
  double dVar2;
  byte bVar3;
  ushort uVar4;
  
  this->_padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = (longlong)&___7FChaosVDJointSettingsDataWrapper__6B_;
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
  *(undefined8 *)this->LinearMotionTypes = *(undefined8 *)param_1->LinearMotionTypes;
  this->LinearMotionTypes[2] = param_1->LinearMotionTypes[2];
  this->LinearLimit = param_1->LinearLimit;
  *(undefined8 *)this->AngularMotionTypes = *(undefined8 *)param_1->AngularMotionTypes;
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
  (this->LinearDrivePositionTarget).field0_0x0._s_0.X =
       (param_1->LinearDrivePositionTarget).field0_0x0._s_0.X;
  (this->LinearDrivePositionTarget).field0_0x0._s_0.Y = dVar2;
  (this->LinearDrivePositionTarget).field0_0x0._s_0.Z =
       (param_1->LinearDrivePositionTarget).field0_0x0._s_0.Z;
  dVar2 = (param_1->LinearDriveVelocityTarget).field0_0x0._s_0.Y;
  uVar1 = this->field_0x1e0;
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


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 3

// FRigidBodyControlRecord @ 14d9bf620

FRigidBodyControlRecord * __thiscall
FRigidBodyControlRecord::FRigidBodyControlRecord
          (FRigidBodyControlRecord *this,FPhysicsControl *param_1,FJointHandle *param_2)

{
  FName FVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined3 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  FVar1 = param_1->ChildBoneName;
  (this->Control).ParentBoneName = param_1->ParentBoneName;
  (this->Control).ChildBoneName = FVar1;
  uVar5 = *(undefined3 *)&(param_1->ControlData).field_0x1;
  fVar6 = (param_1->ControlData).LinearStrength;
  fVar7 = (param_1->ControlData).LinearDampingRatio;
  fVar8 = (param_1->ControlData).LinearExtraDamping;
  (this->Control).ControlData.bEnabled = (param_1->ControlData).bEnabled;
  *(undefined3 *)&(this->Control).ControlData.field_0x1 = uVar5;
  (this->Control).ControlData.LinearStrength = fVar6;
  (this->Control).ControlData.LinearDampingRatio = fVar7;
  (this->Control).ControlData.LinearExtraDamping = fVar8;
  fVar6 = (param_1->ControlData).AngularStrength;
  fVar7 = (param_1->ControlData).AngularDampingRatio;
  fVar8 = (param_1->ControlData).AngularExtraDamping;
  (this->Control).ControlData.MaxForce = (param_1->ControlData).MaxForce;
  (this->Control).ControlData.AngularStrength = fVar6;
  (this->Control).ControlData.AngularDampingRatio = fVar7;
  (this->Control).ControlData.AngularExtraDamping = fVar8;
  fVar6 = (param_1->ControlData).LinearTargetVelocityMultiplier;
  fVar7 = (param_1->ControlData).AngularTargetVelocityMultiplier;
  uVar9 = *(undefined4 *)&(param_1->ControlData).field_0x2c;
  (this->Control).ControlData.MaxTorque = (param_1->ControlData).MaxTorque;
  (this->Control).ControlData.LinearTargetVelocityMultiplier = fVar6;
  (this->Control).ControlData.AngularTargetVelocityMultiplier = fVar7;
  *(undefined4 *)&(this->Control).ControlData.field_0x2c = uVar9;
  dVar2 = (param_1->ControlData).CustomControlPoint.field0_0x0._s_0.Y;
  (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.X =
       (param_1->ControlData).CustomControlPoint.field0_0x0._s_0.X;
  (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Y = dVar2;
  bVar10 = (param_1->ControlData).bUseCustomControlPoint;
  bVar11 = (param_1->ControlData).bUseSkeletalAnimation;
  bVar12 = (param_1->ControlData).bDisableCollision;
  bVar13 = (param_1->ControlData).bOnlyControlChildObject;
  uVar9 = *(undefined4 *)&(param_1->ControlData).field_0x4c;
  (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Z =
       (param_1->ControlData).CustomControlPoint.field0_0x0._s_0.Z;
  (this->Control).ControlData.bUseCustomControlPoint = bVar10;
  (this->Control).ControlData.bUseSkeletalAnimation = bVar11;
  (this->Control).ControlData.bDisableCollision = bVar12;
  (this->Control).ControlData.bOnlyControlChildObject = bVar13;
  *(undefined4 *)&(this->Control).ControlData.field_0x4c = uVar9;
  dVar2 = (param_1->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.Y;
  (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.X =
       (param_1->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.X;
  (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.X;
  (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Z =
       (param_1->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.Z;
  (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.Z;
  (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Y =
       (param_1->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.Y;
  (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Z = dVar2;
  dVar2 = (param_1->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.Y;
  (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.X =
       (param_1->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.X;
  (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.X;
  (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Z =
       (param_1->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.Z;
  (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.Z;
  (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Y =
       (param_1->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.Y;
  (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Z = dVar2;
  fVar6 = (param_1->ControlMultiplier).AngularDampingRatioMultiplier;
  fVar7 = (param_1->ControlMultiplier).AngularExtraDampingMultiplier;
  fVar8 = (param_1->ControlMultiplier).MaxTorqueMultiplier;
  (this->Control).ControlMultiplier.AngularStrengthMultiplier =
       (param_1->ControlMultiplier).AngularStrengthMultiplier;
  (this->Control).ControlMultiplier.AngularDampingRatioMultiplier = fVar6;
  (this->Control).ControlMultiplier.AngularExtraDampingMultiplier = fVar7;
  (this->Control).ControlMultiplier.MaxTorqueMultiplier = fVar8;
  (this->ControlTarget).TargetPosition.field0_0x0._s_0.X = 0.0;
  (this->ControlTarget).TargetPosition.field0_0x0._s_0.Y = 0.0;
  (this->ControlTarget).TargetPosition.field0_0x0._s_0.Z = 0.0;
  (this->ControlTarget).TargetOrientation.Pitch = 0.0;
  (this->ControlTarget).TargetOrientation.Yaw = 0.0;
  (this->ControlTarget).TargetOrientation.Roll = 0.0;
  (this->PreviousTargetTM).Translation.field0_0x0._s_0.X = 0.0;
  (this->PreviousTargetTM).Translation.field0_0x0._s_0.Y = 0.0;
  (this->PreviousTargetTM).Translation.field0_0x0._s_0.Z = 0.0;
  (this->PreviousTargetTM).Rotation.X = 0.0;
  (this->PreviousTargetTM).Rotation.Y = 0.0;
  (this->PreviousTargetTM).Rotation.Z = 0.0;
  (this->PreviousTargetTM).Rotation.W = 1.0;
  (this->ExpectedUpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->ExpectedUpdateCounter).Counter = -1;
  (this->ExpectedUpdateCounter).SkipFrames = 0;
  bVar10 = (this->Control).ControlData.bEnabled;
  uVar5 = *(undefined3 *)&(this->Control).ControlData.field_0x1;
  fVar6 = (this->Control).ControlData.LinearStrength;
  fVar7 = (this->Control).ControlData.LinearDampingRatio;
  fVar8 = (this->Control).ControlData.LinearExtraDamping;
  this->ChildBodyIndex = -1;
  this->ParentBodyIndex = -1;
  fVar14 = (this->Control).ControlData.MaxForce;
  fVar15 = (this->Control).ControlData.AngularStrength;
  fVar16 = (this->Control).ControlData.AngularDampingRatio;
  fVar17 = (this->Control).ControlData.AngularExtraDamping;
  this->JointHandle = param_2;
  (this->ControlData).bEnabled = bVar10;
  *(undefined3 *)&(this->ControlData).field_0x1 = uVar5;
  (this->ControlData).LinearStrength = fVar6;
  (this->ControlData).LinearDampingRatio = fVar7;
  (this->ControlData).LinearExtraDamping = fVar8;
  fVar6 = (this->Control).ControlData.MaxTorque;
  fVar7 = (this->Control).ControlData.LinearTargetVelocityMultiplier;
  fVar8 = (this->Control).ControlData.AngularTargetVelocityMultiplier;
  uVar9 = *(undefined4 *)&(this->Control).ControlData.field_0x2c;
  (this->ControlData).MaxForce = fVar14;
  (this->ControlData).AngularStrength = fVar15;
  (this->ControlData).AngularDampingRatio = fVar16;
  (this->ControlData).AngularExtraDamping = fVar17;
  dVar2 = (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.X;
  dVar3 = (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Y;
  (this->ControlData).MaxTorque = fVar6;
  (this->ControlData).LinearTargetVelocityMultiplier = fVar7;
  (this->ControlData).AngularTargetVelocityMultiplier = fVar8;
  *(undefined4 *)&(this->ControlData).field_0x2c = uVar9;
  dVar4 = (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Z;
  bVar10 = (this->Control).ControlData.bUseCustomControlPoint;
  bVar11 = (this->Control).ControlData.bUseSkeletalAnimation;
  bVar12 = (this->Control).ControlData.bDisableCollision;
  bVar13 = (this->Control).ControlData.bOnlyControlChildObject;
  uVar9 = *(undefined4 *)&(this->Control).ControlData.field_0x4c;
  (this->ControlData).CustomControlPoint.field0_0x0._s_0.X = dVar2;
  (this->ControlData).CustomControlPoint.field0_0x0._s_0.Y = dVar3;
  (this->ControlData).CustomControlPoint.field0_0x0._s_0.Z = dVar4;
  (this->ControlData).bUseCustomControlPoint = bVar10;
  (this->ControlData).bUseSkeletalAnimation = bVar11;
  (this->ControlData).bDisableCollision = bVar12;
  (this->ControlData).bOnlyControlChildObject = bVar13;
  *(undefined4 *)&(this->ControlData).field_0x4c = uVar9;
  (this->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.X = 1.0;
  (this->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.Y = 1.0;
  (this->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.Z = 1.0;
  (this->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.X = 1.0;
  (this->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.Y = 1.0;
  (this->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.Z = 1.0;
  (this->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.X = 1.0;
  (this->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.Y = 1.0;
  (this->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.Z = 1.0;
  (this->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.X = 1.0;
  (this->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.Y = 1.0;
  (this->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.Z = 1.0;
  (this->ControlMultiplier).AngularStrengthMultiplier = 1.0;
  (this->ControlMultiplier).AngularDampingRatioMultiplier = 1.0;
  (this->ControlMultiplier).AngularExtraDampingMultiplier = 1.0;
  (this->ControlMultiplier).MaxTorqueMultiplier = 1.0;
  return this;
}

// GetControlPoint @ 14d9ddab0

TVector<double> * __thiscall
FRigidBodyControlRecord::GetControlPoint
          (FRigidBodyControlRecord *this,TVector<double> *__return_storage_ptr__,
          FActorHandle *param_1)

{
  double dVar1;
  
  if ((this->ControlData).bUseCustomControlPoint != false) {
    dVar1 = (this->ControlData).CustomControlPoint.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (this->ControlData).CustomControlPoint.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (this->ControlData).CustomControlPoint.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  ImmediatePhysics_Chaos::FActorHandle::GetLocalCoMLocation(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ResetCurrent @ 14d9e8690

void __thiscall FRigidBodyControlRecord::ResetCurrent(FRigidBodyControlRecord *this,bool param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined3 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  
  uVar5 = *(undefined3 *)&(this->Control).ControlData.field_0x1;
  fVar6 = (this->Control).ControlData.LinearStrength;
  fVar7 = (this->Control).ControlData.LinearDampingRatio;
  fVar8 = (this->Control).ControlData.LinearExtraDamping;
  fVar9 = (this->Control).ControlData.MaxForce;
  fVar10 = (this->Control).ControlData.AngularStrength;
  fVar11 = (this->Control).ControlData.AngularDampingRatio;
  fVar12 = (this->Control).ControlData.AngularExtraDamping;
  (this->ControlData).bEnabled = (this->Control).ControlData.bEnabled;
  *(undefined3 *)&(this->ControlData).field_0x1 = uVar5;
  (this->ControlData).LinearStrength = fVar6;
  (this->ControlData).LinearDampingRatio = fVar7;
  (this->ControlData).LinearExtraDamping = fVar8;
  fVar6 = (this->Control).ControlData.MaxTorque;
  fVar7 = (this->Control).ControlData.LinearTargetVelocityMultiplier;
  fVar8 = (this->Control).ControlData.AngularTargetVelocityMultiplier;
  uVar13 = *(undefined4 *)&(this->Control).ControlData.field_0x2c;
  (this->ControlData).MaxForce = fVar9;
  (this->ControlData).AngularStrength = fVar10;
  (this->ControlData).AngularDampingRatio = fVar11;
  (this->ControlData).AngularExtraDamping = fVar12;
  dVar1 = (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.X;
  dVar2 = (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Y;
  (this->ControlData).MaxTorque = fVar6;
  (this->ControlData).LinearTargetVelocityMultiplier = fVar7;
  (this->ControlData).AngularTargetVelocityMultiplier = fVar8;
  *(undefined4 *)&(this->ControlData).field_0x2c = uVar13;
  dVar3 = (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Z;
  bVar14 = (this->Control).ControlData.bUseCustomControlPoint;
  bVar15 = (this->Control).ControlData.bUseSkeletalAnimation;
  bVar16 = (this->Control).ControlData.bDisableCollision;
  bVar17 = (this->Control).ControlData.bOnlyControlChildObject;
  uVar13 = *(undefined4 *)&(this->Control).ControlData.field_0x4c;
  (this->ControlData).CustomControlPoint.field0_0x0._s_0.X = dVar1;
  (this->ControlData).CustomControlPoint.field0_0x0._s_0.Y = dVar2;
  dVar1 = (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Z;
  dVar2 = (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.X;
  (this->ControlData).CustomControlPoint.field0_0x0._s_0.Z = dVar3;
  (this->ControlData).bUseCustomControlPoint = bVar14;
  (this->ControlData).bUseSkeletalAnimation = bVar15;
  (this->ControlData).bDisableCollision = bVar16;
  (this->ControlData).bOnlyControlChildObject = bVar17;
  *(undefined4 *)&(this->ControlData).field_0x4c = uVar13;
  dVar3 = (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Y;
  (this->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.X =
       (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.X;
  (this->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.Y = dVar3;
  dVar3 = (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Y;
  dVar4 = (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Z;
  (this->ControlMultiplier).LinearStrengthMultiplier.field0_0x0._s_0.Z = dVar1;
  (this->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.X = dVar2;
  dVar1 = (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.X;
  dVar2 = (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Y;
  (this->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.Y = dVar3;
  (this->ControlMultiplier).LinearDampingRatioMultiplier.field0_0x0._s_0.Z = dVar4;
  dVar3 = (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Z;
  dVar4 = (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.X;
  (this->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.X = dVar1;
  (this->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.Y = dVar2;
  dVar1 = (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Y;
  dVar2 = (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Z;
  (this->ControlMultiplier).LinearExtraDampingMultiplier.field0_0x0._s_0.Z = dVar3;
  (this->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.X = dVar4;
  fVar6 = (this->Control).ControlMultiplier.AngularStrengthMultiplier;
  fVar7 = (this->Control).ControlMultiplier.AngularDampingRatioMultiplier;
  fVar8 = (this->Control).ControlMultiplier.AngularExtraDampingMultiplier;
  fVar9 = (this->Control).ControlMultiplier.MaxTorqueMultiplier;
  (this->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.Y = dVar1;
  (this->ControlMultiplier).MaxForceMultiplier.field0_0x0._s_0.Z = dVar2;
  (this->ControlMultiplier).AngularStrengthMultiplier = fVar6;
  (this->ControlMultiplier).AngularDampingRatioMultiplier = fVar7;
  (this->ControlMultiplier).AngularExtraDampingMultiplier = fVar8;
  (this->ControlMultiplier).MaxTorqueMultiplier = fVar9;
  if (param_1) {
    (this->ControlTarget).TargetPosition.field0_0x0._s_0.X = 0.0;
    (this->ControlTarget).TargetPosition.field0_0x0._s_0.Y = 0.0;
    (this->ControlTarget).TargetPosition.field0_0x0._s_0.Z = 0.0;
    (this->ControlTarget).TargetOrientation.Pitch = 0.0;
    (this->ControlTarget).TargetOrientation.Yaw = 0.0;
    (this->ControlTarget).TargetOrientation.Roll = 0.0;
  }
  return;
}


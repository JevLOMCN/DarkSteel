// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FChaosVDJointConstraint @ 1436f5eb0

FChaosVDJointConstraint * __thiscall
FChaosVDJointConstraint::FChaosVDJointConstraint
          (FChaosVDJointConstraint *this,FChaosVDJointConstraint *param_1)

{
  undefined1 uVar1;
  double dVar2;
  byte bVar3;
  
  this->_padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = (longlong)&___7FChaosVDJointConstraint__6B_;
  this->SolverID = param_1->SolverID;
  this->ConstraintIndex = param_1->ConstraintIndex;
  *(undefined8 *)this->ParticleParIndexes = *(undefined8 *)param_1->ParticleParIndexes;
  (this->PhysicsThreadJointState)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->PhysicsThreadJointState)._padding_ =
       (char)(param_1->PhysicsThreadJointState)._padding_;
  (this->PhysicsThreadJointState)._padding_ = (longlong)&___7FChaosVDJointStateDataWrapper__6B_;
  (this->PhysicsThreadJointState).Island = (param_1->PhysicsThreadJointState).Island;
  (this->PhysicsThreadJointState).Level = (param_1->PhysicsThreadJointState).Level;
  (this->PhysicsThreadJointState).Color = (param_1->PhysicsThreadJointState).Color;
  (this->PhysicsThreadJointState).IslandSize = (param_1->PhysicsThreadJointState).IslandSize;
  bVar3 = ((this->PhysicsThreadJointState).bDisabled ^ (param_1->PhysicsThreadJointState).bDisabled)
          & 1 ^ (this->PhysicsThreadJointState).field_0x20;
  (this->PhysicsThreadJointState).field_0x20 = bVar3;
  bVar3 = (bVar3 ^ (param_1->PhysicsThreadJointState).field_0x20) & 2 ^ bVar3;
  (this->PhysicsThreadJointState).field_0x20 = bVar3;
  bVar3 = (bVar3 ^ (param_1->PhysicsThreadJointState).field_0x20) & 4 ^ bVar3;
  (this->PhysicsThreadJointState).field_0x20 = bVar3;
  bVar3 = (bVar3 ^ (param_1->PhysicsThreadJointState).field_0x20) & 8 ^ bVar3;
  (this->PhysicsThreadJointState).field_0x20 = bVar3;
  (this->PhysicsThreadJointState).field_0x20 =
       (bVar3 ^ (param_1->PhysicsThreadJointState).field_0x20) & 0x10 ^ bVar3;
  dVar2 = (param_1->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.Y;
  (this->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.X =
       (param_1->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.X;
  (this->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.Y = dVar2;
  (this->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.Z =
       (param_1->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.Z;
  dVar2 = (param_1->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.Y;
  (this->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.X =
       (param_1->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.X;
  (this->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.Y = dVar2;
  (this->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.Z =
       (param_1->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.Z;
  (this->PhysicsThreadJointState).ResimType = (param_1->PhysicsThreadJointState).ResimType;
  (this->PhysicsThreadJointState).SyncState = (param_1->PhysicsThreadJointState).SyncState;
  (this->GameThreadJointState)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->GameThreadJointState)._padding_ = (char)(param_1->GameThreadJointState)._padding_
  ;
  (this->GameThreadJointState)._padding_ = (longlong)&___7FChaosVDGTJointStateDataWrapper__6B_;
  uVar1 = (this->GameThreadJointState).field_0x10;
  bVar3 = ((this->GameThreadJointState).bIsBreaking ^ (param_1->GameThreadJointState).bIsBreaking) &
          1 ^ uVar1;
  (this->GameThreadJointState).field_0x10 = bVar3;
  bVar3 = (bVar3 ^ (param_1->GameThreadJointState).field_0x10) & 2 ^ bVar3;
  (this->GameThreadJointState).field_0x10 = bVar3;
  bVar3 = (bVar3 ^ (param_1->GameThreadJointState).field_0x10) & 4 ^ bVar3;
  (this->GameThreadJointState).field_0x10 = bVar3;
  (this->GameThreadJointState).field_0x10 =
       (bVar3 ^ (param_1->GameThreadJointState).field_0x10) & 8 ^ bVar3;
  dVar2 = (param_1->GameThreadJointState).Force.field0_0x0._s_0.Y;
  (this->GameThreadJointState).Force.field0_0x0._s_0.X =
       (param_1->GameThreadJointState).Force.field0_0x0._s_0.X;
  (this->GameThreadJointState).Force.field0_0x0._s_0.Y = dVar2;
  (this->GameThreadJointState).Force.field0_0x0._s_0.Z =
       (param_1->GameThreadJointState).Force.field0_0x0._s_0.Z;
  dVar2 = (param_1->GameThreadJointState).Torque.field0_0x0._s_0.Y;
  (this->GameThreadJointState).Torque.field0_0x0._s_0.X =
       (param_1->GameThreadJointState).Torque.field0_0x0._s_0.X;
  (this->GameThreadJointState).Torque.field0_0x0._s_0.Y = dVar2;
  (this->GameThreadJointState).Torque.field0_0x0._s_0.Z =
       (param_1->GameThreadJointState).Torque.field0_0x0._s_0.Z;
  (this->GameThreadJointState).LinearViolation = (param_1->GameThreadJointState).LinearViolation;
  (this->GameThreadJointState).AngularViolation = (param_1->GameThreadJointState).AngularViolation;
  FChaosVDJointSettingsDataWrapper::FChaosVDJointSettingsDataWrapper
            (&this->JointSettings,&param_1->JointSettings);
  return this;
}


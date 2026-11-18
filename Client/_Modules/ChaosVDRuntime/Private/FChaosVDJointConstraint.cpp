// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 6

// StaticStruct @ 1436c67b0

UScriptStruct * __cdecl FChaosVDJointConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDJointConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDJointConstraint,(UObject *)pUVar1,
                         L"ChaosVDJointConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDJointConstraint.OuterSingleton;
}

// GetSolverID @ 1436c67f0

int __thiscall FChaosVDJointConstraint::GetSolverID(FChaosVDJointConstraint *this)

{
  return this->SolverID;
}

// GetParticleIDAtSlot @ 1436c6800

int __thiscall
FChaosVDJointConstraint::GetParticleIDAtSlot
          (FChaosVDJointConstraint *this,EChaosVDParticlePairIndex param_1)

{
  return this->ParticleParIndexes[param_1];
}

// GetConstraintIndex @ 1436c6810

int __thiscall FChaosVDJointConstraint::GetConstraintIndex(FChaosVDJointConstraint *this)

{
  return this->ConstraintIndex;
}

// FChaosVDJointConstraint @ 1436d47c0

FChaosVDJointConstraint * __thiscall
FChaosVDJointConstraint::FChaosVDJointConstraint(FChaosVDJointConstraint *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  (this->PhysicsThreadJointState).bDisabled = '\0';
  (this->PhysicsThreadJointState).bDriveTargetChanged = '\0';
  (this->PhysicsThreadJointState).bBreaking = '\0';
  (this->PhysicsThreadJointState).bBroken = '\0';
  (this->PhysicsThreadJointState).bEnabledDuringResim = '\x01';
  this->_padding_ = (longlong)&___7FChaosVDJointConstraint__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  this->SolverID = -1;
  this->ConstraintIndex = -1;
  this->ParticleParIndexes[0] = -1;
  this->ParticleParIndexes[1] = -1;
  (this->PhysicsThreadJointState)._padding_ = (longlong)&___7FChaosVDJointStateDataWrapper__6B_;
  *(undefined1 *)&(this->PhysicsThreadJointState)._padding_ = 0;
  (this->PhysicsThreadJointState).Island = -1;
  (this->PhysicsThreadJointState).Level = -1;
  (this->PhysicsThreadJointState).Color = -1;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PhysicsThreadJointState).IslandSize = -1;
  (this->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.Y = (double)uVar2;
  (this->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.Y = (double)uVar2;
  (this->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PhysicsThreadJointState).ResimType = FullResim;
  (this->PhysicsThreadJointState).SyncState = InSync;
  (this->GameThreadJointState).bIsBreaking = '\0';
  (this->GameThreadJointState).bIsViolating = '\0';
  (this->GameThreadJointState).bDriveTargetChanged = '\0';
  (this->GameThreadJointState).bIsBroken = '\0';
  *(undefined1 *)&(this->GameThreadJointState)._padding_ = 0;
  (this->GameThreadJointState)._padding_ = (longlong)&___7FChaosVDGTJointStateDataWrapper__6B_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GameThreadJointState).Force.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GameThreadJointState).Force.field0_0x0._s_0.Y = (double)uVar2;
  (this->GameThreadJointState).Force.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GameThreadJointState).Torque.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GameThreadJointState).Torque.field0_0x0._s_0.Y = (double)uVar2;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->GameThreadJointState).LinearViolation = 0.0;
  (this->GameThreadJointState).AngularViolation = 0.0;
  (this->GameThreadJointState).Torque.field0_0x0._s_0.Z = (double)uVar2;
  FChaosVDJointSettingsDataWrapper::FChaosVDJointSettingsDataWrapper(&this->JointSettings);
  return this;
}

// Serialize @ 1436dd150

bool __thiscall FChaosVDJointConstraint::Serialize(FChaosVDJointConstraint *this,FArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    piVar1 = &this->SolverID;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = &this->ConstraintIndex;
    puVar2 = &param_1->field_0x2a;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((*puVar2 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = this->ParticleParIndexes;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((*puVar2 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = this->ParticleParIndexes + 1;
    puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
      if ((*puVar2 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *puVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    FChaosVDJointSettingsDataWrapper::Serialize(&this->JointSettings,param_1);
    FChaosVDJointStateDataWrapper::Serialize(&this->PhysicsThreadJointState,param_1);
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
    iVar5 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (199 < iVar5) {
      FChaosVDGTJointStateDataWrapper::Serialize(&this->GameThreadJointState,param_1);
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}


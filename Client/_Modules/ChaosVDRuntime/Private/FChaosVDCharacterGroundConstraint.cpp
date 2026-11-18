// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 6

// StaticStruct @ 1436cb230

UScriptStruct * __cdecl FChaosVDCharacterGroundConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraint,
                         (UObject *)pUVar1,L"ChaosVDCharacterGroundConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraint.OuterSingleton;
}

// GetSolverID @ 1436cb270

int __thiscall
FChaosVDCharacterGroundConstraint::GetSolverID(FChaosVDCharacterGroundConstraint *this)

{
  return this->SolverID;
}

// GetParticleIDAtSlot @ 1436cb280

int __thiscall
FChaosVDCharacterGroundConstraint::GetParticleIDAtSlot
          (FChaosVDCharacterGroundConstraint *this,EChaosVDParticlePairIndex param_1)

{
  if (param_1 == Index_0) {
    return this->CharacterParticleIndex;
  }
  if (param_1 != Index_1) {
    return -1;
  }
  return this->GroundParticleIndex;
}

// GetConstraintIndex @ 1436cb2b0

int __thiscall
FChaosVDCharacterGroundConstraint::GetConstraintIndex(FChaosVDCharacterGroundConstraint *this)

{
  return this->ConstraintIndex;
}

// FChaosVDCharacterGroundConstraint @ 1436d3f30

FChaosVDCharacterGroundConstraint * __thiscall
FChaosVDCharacterGroundConstraint::FChaosVDCharacterGroundConstraint
          (FChaosVDCharacterGroundConstraint *this)

{
  undefined8 uVar1;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FChaosVDCharacterGroundConstraint__6B_;
  this->SolverID = -1;
  this->ConstraintIndex = -1;
  this->CharacterParticleIndex = -1;
  this->GroundParticleIndex = -1;
  (this->State)._padding_ = (longlong)&___7FChaosVDCharacterGroundConstraintStateDataWrapper__6B_;
  *(undefined1 *)&(this->State)._padding_ = 0;
  (this->State).Island = -1;
  (this->State).Level = -1;
  (this->State).Color = -1;
  (this->State).IslandSize = -1;
  (this->State).bDisabled = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->State).SolverAppliedForce.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->State).SolverAppliedForce.field0_0x0._s_0.Y = (double)uVar1;
  (this->State).SolverAppliedForce.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->State).SolverAppliedTorque.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->State).SolverAppliedTorque.field0_0x0._s_0.Y = (double)uVar1;
  (this->State).SolverAppliedTorque.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Settings)._padding_ =
       (longlong)&___7FChaosVDCharacterGroundConstraintSettingsDataWrapper__6B_;
  (this->Data)._padding_ = (longlong)&___7FChaosVDCharacterGroundConstraintDataDataWrapper__6B_;
  *(undefined1 *)&(this->Settings)._padding_ = 0;
  (this->Settings).VerticalAxis.field0_0x0._s_0.X = 0.0;
  (this->Settings).VerticalAxis.field0_0x0._s_0.Y = 0.0;
  (this->Settings).VerticalAxis.field0_0x0._s_0.Z = 0.0;
  (this->Settings).TargetHeight = 0.0;
  (this->Settings).RadialForceLimit = 0.0;
  (this->Settings).FrictionForceLimit = 0.0;
  (this->Settings).TwistTorqueLimit = 0.0;
  (this->Settings).SwingTorqueLimit = 0.0;
  (this->Settings).CosMaxWalkableSlopeAngle = 0.0;
  (this->Settings).DampingFactor = 0.0;
  (this->Settings).AssumedOnGroundHeight = 0.0;
  *(undefined1 *)&(this->Data)._padding_ = 0;
  (this->Data).GroundNormal.field0_0x0._s_0.X = 0.0;
  (this->Data).GroundNormal.field0_0x0._s_0.Y = 0.0;
  (this->Data).GroundNormal.field0_0x0._s_0.Z = 0.0;
  (this->Data).TargetDeltaPosition.field0_0x0._s_0.X = 0.0;
  (this->Data).TargetDeltaPosition.field0_0x0._s_0.Y = 0.0;
  (this->Data).TargetDeltaPosition.field0_0x0._s_0.Z = 0.0;
  (this->Data).TargetDeltaFacing = 0.0;
  (this->Data).GroundDistance = 0.0;
  (this->Data).CosMaxWalkableSlopeAngle = 0.0;
  return this;
}

// Serialize @ 1436db050

bool __thiscall
FChaosVDCharacterGroundConstraint::Serialize
          (FChaosVDCharacterGroundConstraint *this,FArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  
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
    piVar1 = &this->CharacterParticleIndex;
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
    piVar1 = &this->GroundParticleIndex;
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
    FChaosVDCharacterGroundConstraintStateDataWrapper::Serialize(&this->State,param_1);
    ::operator<<(param_1,(bool *)&(this->Settings)._padding_);
    if ((char)(this->Settings)._padding_ != '\0') {
      UE::Math::operator<<(param_1,&(this->Settings).VerticalAxis);
      ::operator<<(param_1,&(this->Settings).TargetHeight);
      ::operator<<(param_1,&(this->Settings).RadialForceLimit);
      ::operator<<(param_1,&(this->Settings).FrictionForceLimit);
      ::operator<<(param_1,&(this->Settings).TwistTorqueLimit);
      ::operator<<(param_1,&(this->Settings).SwingTorqueLimit);
      ::operator<<(param_1,&(this->Settings).CosMaxWalkableSlopeAngle);
      ::operator<<(param_1,&(this->Settings).DampingFactor);
      ::operator<<(param_1,&(this->Settings).AssumedOnGroundHeight);
    }
    ::operator<<(param_1,(bool *)&(this->Data)._padding_);
    if ((char)(this->Data)._padding_ != '\0') {
      UE::Math::operator<<(param_1,&(this->Data).GroundNormal);
      UE::Math::operator<<(param_1,&(this->Data).TargetDeltaPosition);
      ::operator<<(param_1,&(this->Data).TargetDeltaFacing);
      ::operator<<(param_1,&(this->Data).GroundDistance);
      ::operator<<(param_1,&(this->Data).CosMaxWalkableSlopeAngle);
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}


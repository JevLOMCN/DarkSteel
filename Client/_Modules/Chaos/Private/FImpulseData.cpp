// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FImpulseData @ 14388b9d0

FImpulseData * __thiscall
Chaos::Private::FCharacterGroundConstraintSolver::FImpulseData::FImpulseData(FImpulseData *this)

{
  undefined4 uVar1;
  
  *(undefined8 *)&this->LinearPositionImpulse =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)&(this->LinearPositionImpulse).field_0x8 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->AngularSwingImpulse = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(undefined4 *)&(this->AngularSwingImpulse).field_0x8 = uVar1;
  this->AngularImpulse = 0.0;
  this->LinearCorrectionImpulse = 0.0;
  return this;
}

// Reset @ 1438d02b0

void __thiscall
Chaos::Private::FCharacterGroundConstraintSolver::FImpulseData::Reset(FImpulseData *this)

{
  undefined4 uVar1;
  
  *(undefined8 *)&this->LinearPositionImpulse =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)&(this->LinearPositionImpulse).field_0x8 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->AngularSwingImpulse = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(undefined4 *)&(this->AngularSwingImpulse).field_0x8 = uVar1;
  this->AngularImpulse = 0.0;
  this->LinearCorrectionImpulse = 0.0;
  return;
}


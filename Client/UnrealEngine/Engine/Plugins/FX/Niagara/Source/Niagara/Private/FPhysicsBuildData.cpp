// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FPhysicsBuildData @ 149428220

FPhysicsBuildData * __thiscall
NiagaraStateless::FPhysicsBuildData::FPhysicsBuildData(FPhysicsBuildData *this)

{
  (this->MassRange).ParameterOffset = -1;
  (this->DragRange).Min = 0.0;
  (this->DragRange).Max = 0.0;
  (this->MassRange).Min = 1.0;
  (this->MassRange).Max = 1.0;
  (this->DragRange).ParameterOffset = -1;
  (this->VelocityRange).ParameterOffset = -1;
  this->VelocityCoordinateSpace = Local;
  *(undefined8 *)&(this->VelocityRange).Min.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->VelocityRange).Min.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->VelocityRange).Max.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->VelocityRange).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (this->LinearVelocityScale).ParameterOffset = -1;
  (this->LinearVelocityScale).Min = 1.0;
  (this->LinearVelocityScale).Max = 1.0;
  (this->WindRange).ParameterOffset = -1;
  this->WindCoordinateSpace = Local;
  *(undefined8 *)&(this->WindRange).Min.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->WindRange).Min.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->WindRange).Max.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->WindRange).Max.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (this->AccelerationRange).ParameterOffset = -1;
  this->AccelerationCoordinateSpace = Local;
  *(undefined8 *)&(this->AccelerationRange).Min.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->AccelerationRange).Min.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->AccelerationRange).Max.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->AccelerationRange).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (this->GravityRange).ParameterOffset = -1;
  *(undefined8 *)&(this->GravityRange).Min.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->GravityRange).Min.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->GravityRange).Max.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->GravityRange).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  this->bConeVelocity = false;
  this->ConeCoordinateSpace = Local;
  this->ConeQuat = UE::Math::TQuat<float>::Identity;
  (this->ConeVelocityRange).ParameterOffset = -1;
  (this->ConeVelocityRange).Min = 0.0;
  (this->ConeVelocityRange).Max = 0.0;
  (this->PointVelocityRange).ParameterOffset = -1;
  (this->PointVelocityRange).Min = 0.0;
  (this->PointVelocityRange).Max = 0.0;
  this->ConeOuterAngle = 0.0;
  this->ConeInnerAngle = 0.0;
  this->ConeVelocityFalloff = 0.0;
  this->bPointVelocity = false;
  this->PointCoordinateSpace = Local;
  this->PointVelocityMax = 0.0;
  *(undefined8 *)&(this->PointOrigin).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->PointOrigin).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  this->bNoiseEnabled = false;
  this->NoiseStrength = 0.0;
  this->NoiseFrequency = 0.0;
  return this;
}


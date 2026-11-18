// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Clear @ 147811f60

void __thiscall FRootMotionAsyncData::Clear(FRootMotionAsyncData *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->TimeAccumulated = 0.0;
  this->bHasAnimRootMotion = false;
  this->bHasOverrideRootMotion = false;
  this->bHasOverrideWithIgnoreZAccumulate = false;
  this->bHasAdditiveRootMotion = false;
  this->bUseSensitiveLiftoff = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AdditiveVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AdditiveVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->AdditiveVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OverrideVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OverrideVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->OverrideVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->OverrideRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->OverrideRotation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->OverrideRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->OverrideRotation).W = dVar2;
  *&(this->AnimTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->AnimTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->AnimTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->AnimTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->AnimTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->AnimTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}


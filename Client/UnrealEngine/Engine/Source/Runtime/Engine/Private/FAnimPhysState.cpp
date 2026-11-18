// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAnimPhysState @ 1474b24d0

FAnimPhysState * __thiscall
FAnimPhysState::FAnimPhysState
          (FAnimPhysState *this,TVector<double> *param_1,TQuat<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Pose).Position.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Pose).Position.field0_0x0._s_0.Y = dVar1;
  (this->Pose).Position.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar1 = param_2->Y;
  (this->Pose).Orientation.X = param_2->X;
  (this->Pose).Orientation.Y = dVar1;
  dVar1 = param_2->W;
  (this->Pose).Orientation.Z = param_2->Z;
  (this->Pose).Orientation.W = dVar1;
  (this->Pose).Scale = 1.0;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->LinearMomentum).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->LinearMomentum).field0_0x0._s_0.Y = dVar1;
  (this->LinearMomentum).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  (this->AngularMomentum).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  (this->AngularMomentum).field0_0x0._s_0.Y = dVar1;
  (this->AngularMomentum).field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  return this;
}

// FAnimPhysState @ 1474b2530

FAnimPhysState * __thiscall FAnimPhysState::FAnimPhysState(FAnimPhysState *this)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Pose).Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Pose).Position.field0_0x0._s_0.Y = (double)uVar1;
  (this->Pose).Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Pose).Orientation.X = UE::Math::TQuat<double>::Identity.X;
  (this->Pose).Orientation.Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Pose).Orientation.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Pose).Orientation.W = dVar2;
  (this->Pose).Scale = 1.0;
  (this->LinearMomentum).field0_0x0._s_0.X = 0.0;
  (this->LinearMomentum).field0_0x0._s_0.Y = 0.0;
  (this->LinearMomentum).field0_0x0._s_0.Z = 0.0;
  (this->AngularMomentum).field0_0x0._s_0.X = 0.0;
  (this->AngularMomentum).field0_0x0._s_0.Y = 0.0;
  (this->AngularMomentum).field0_0x0._s_0.Z = 0.0;
  return this;
}


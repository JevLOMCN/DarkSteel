// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// FromFTransform @ 14a1aa820

void __thiscall FEulerTransform::FromFTransform(FEulerTransform *this,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  TRotator<double> *pTVar3;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  (this->Location).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  (this->Location).field0_0x0._s_0.Y = dVar2;
  (this->Location).field0_0x0._s_0.Z = dVar1;
  local_28.X = (param_1->Rotation).XY.m128d_f64[0];
  local_28.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_28.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_28.W = (param_1->Rotation).ZW.m128d_f64[1];
  pTVar3 = UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
  dVar1 = pTVar3->Yaw;
  (this->Rotation).Pitch = pTVar3->Pitch;
  (this->Rotation).Yaw = dVar1;
  (this->Rotation).Roll = pTVar3->Roll;
  dVar2 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->Scale).field0_0x0._s_0.X = (param_1->Scale3D).XY.m128d_f64[0];
  (this->Scale).field0_0x0._s_0.Y = dVar2;
  (this->Scale).field0_0x0._s_0.Z = dVar1;
  return;
}


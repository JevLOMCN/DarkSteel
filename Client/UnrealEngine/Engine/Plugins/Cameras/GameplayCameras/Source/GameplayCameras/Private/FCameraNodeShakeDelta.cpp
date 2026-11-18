// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// Combine @ 14d59bea0

void __thiscall
UE::Cameras::FCameraNodeShakeDelta::Combine
          (FCameraNodeShakeDelta *this,FCameraNodeShakeDelta *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)param_2;
  dVar1 = (param_1->Location).field0_0x0._s_0.X;
  dVar2 = (param_1->Location).field0_0x0._s_0.Z;
  dVar3 = (this->Location).field0_0x0._s_0.X;
  dVar4 = (this->Location).field0_0x0._s_0.Z;
  (this->Location).field0_0x0._s_0.Y =
       dVar5 * (param_1->Location).field0_0x0._s_0.Y + (this->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = dVar5 * dVar1 + dVar3;
  (this->Location).field0_0x0._s_0.Z = dVar5 * dVar2 + dVar4;
  dVar1 = (param_1->Rotation).Roll;
  dVar2 = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar5 * (param_1->Rotation).Yaw + (this->Rotation).Yaw;
  (this->Rotation).Roll = dVar5 * dVar1 + (this->Rotation).Roll;
  (this->Rotation).Pitch = dVar5 * dVar2 + (this->Rotation).Pitch;
  this->FieldOfView = param_2 * param_1->FieldOfView + this->FieldOfView;
  return;
}


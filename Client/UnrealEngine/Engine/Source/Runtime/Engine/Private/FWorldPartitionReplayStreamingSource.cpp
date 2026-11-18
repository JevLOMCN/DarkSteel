// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FWorldPartitionReplayStreamingSource @ 148ab45d0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldPartitionReplayStreamingSource * __thiscall
FWorldPartitionReplayStreamingSource::FWorldPartitionReplayStreamingSource
          (FWorldPartitionReplayStreamingSource *this,FName param_1,TVector<double> *param_2,
          TRotator<double> *param_3,EStreamingSourceTargetState param_4,bool param_5,
          EStreamingSourcePriority param_6,TVector<double> *param_7)

{
  double dVar1;
  double dVar2;
  
  *(uint *)&this->field_0x0 = param_1.ComparisonIndex.Value;
  *(uint *)&this->field_0x4 = param_1.Number;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  *(double *)&this->field_0x8 = (param_2->field0_0x0)._s_0.X;
  *(double *)&this->field_0x10 = dVar1;
  *(double *)&this->field_0x18 = (param_2->field0_0x0)._s_0.Z;
  dVar1 = param_3->Yaw;
  *(double *)&this->field_0x20 = param_3->Pitch;
  *(double *)&this->field_0x28 = dVar1;
  dVar1 = param_3->Roll;
  this->field_0x38 = param_4;
  this->field_0x39 = param_5;
  this->field_0x3a = param_6;
  *(double *)&this->field_0x30 = dVar1;
  this->field_0x58 = 0;
  this->field_0x60 = 0;
  dVar2 = (param_7->field0_0x0)._s_0.Y;
  dVar1 = (param_7->field0_0x0)._s_0.Z;
  *(double *)&this->field_0x40 = (param_7->field0_0x0)._s_0.X;
  *(double *)&this->field_0x48 = dVar2;
  *(double *)&this->field_0x50 = dVar1;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x5c = 0;
  *(undefined4 *)&this->field_0x90 = 0;
  *(undefined4 *)&this->field_0x94 = 0x80;
  *(undefined4 *)&this->field_0x9c = 0;
  *(undefined4 *)&this->field_0x98 = 0xffffffff;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined4 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined4 *)&this->field_0xe0 = 0;
  *(undefined4 *)&this->field_0xe4 = 0x80;
  *(undefined4 *)&this->field_0xec = 0;
  *(undefined4 *)&this->field_0xe8 = 0xffffffff;
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined4 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined2 *)&this->field_0x118 = 0;
  this->field_0x11a = 0;
  *(undefined8 *)&this->field_0x11c = 0;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  *(double *)&this->field_0x128 = (param_2->field0_0x0)._s_0.X;
  *(double *)&this->field_0x130 = dVar1;
  *(double *)&this->field_0x138 = (param_2->field0_0x0)._s_0.Z;
  dVar1 = param_3->Yaw;
  *(double *)&this->field_0x140 = param_3->Pitch;
  *(double *)&this->field_0x148 = dVar1;
  dVar1 = param_3->Roll;
  *(undefined8 *)&this->field_0x158 = 0;
  *(double *)&this->field_0x150 = dVar1;
  this->field_0x118 = 1;
  return this;
}


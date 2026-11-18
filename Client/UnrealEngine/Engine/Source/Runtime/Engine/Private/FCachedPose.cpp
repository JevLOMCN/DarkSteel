// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FCachedPose @ 1474b2b50

FCachedPose * __thiscall
UE::Anim::FCachedPoseThreadContext::FCachedPose::FCachedPose(FCachedPose *this,FCachedPose *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)&this->Pose = 0;
  *(undefined8 *)&this->Pose = *(undefined8 *)&param_1->Pose;
  uVar1 = *(undefined4 *)&(param_1->Pose).field_0x8;
  *(undefined8 *)&param_1->Pose = 0;
  *(undefined4 *)&(this->Pose).field_0x8 = uVar1;
  *(undefined4 *)&(this->Pose).field_0xc = *(undefined4 *)&(param_1->Pose).field_0xc;
  *(undefined8 *)&(param_1->Pose).field_0x8 = 0;
  *(undefined8 *)&(this->Pose).field_0x10 = *(undefined8 *)&(param_1->Pose).field_0x10;
  *(undefined8 *)&this->Curve = 0;
  *(undefined8 *)&this->Curve = *(undefined8 *)&param_1->Curve;
  uVar1 = *(undefined4 *)&(param_1->Curve).field_0x8;
  *(undefined8 *)&param_1->Curve = 0;
  *(undefined4 *)&(this->Curve).field_0x8 = uVar1;
  *(undefined4 *)&(this->Curve).field_0xc = *(undefined4 *)&(param_1->Curve).field_0xc;
  *(undefined8 *)&(param_1->Curve).field_0x8 = 0;
  (this->Curve).field_0x10 = (param_1->Curve).field_0x10;
  *(undefined8 *)&(this->Curve).field_0x18 = *(undefined8 *)&(param_1->Curve).field_0x18;
  *(undefined8 *)&this->Attributes = 0;
  *(undefined8 *)&this->Attributes = *(undefined8 *)&param_1->Attributes;
  *(undefined8 *)&param_1->Attributes = 0;
  *(undefined4 *)&(this->Attributes).field_0x8 = *(undefined4 *)&(param_1->Attributes).field_0x8;
  *(undefined4 *)&(this->Attributes).field_0xc = *(undefined4 *)&(param_1->Attributes).field_0xc;
  *(undefined8 *)&(param_1->Attributes).field_0x8 = 0;
  *(undefined8 *)&(this->Attributes).field_0x10 = 0;
  *(undefined8 *)&(this->Attributes).field_0x10 = *(undefined8 *)&(param_1->Attributes).field_0x10;
  *(undefined8 *)&(param_1->Attributes).field_0x10 = 0;
  *(undefined4 *)&(this->Attributes).field_0x18 = *(undefined4 *)&(param_1->Attributes).field_0x18;
  *(undefined4 *)&(this->Attributes).field_0x1c = *(undefined4 *)&(param_1->Attributes).field_0x1c;
  *(undefined8 *)&(param_1->Attributes).field_0x18 = 0;
  *(undefined8 *)&(this->Attributes).field_0x20 = 0;
  *(undefined8 *)&(this->Attributes).field_0x20 = *(undefined8 *)&(param_1->Attributes).field_0x20;
  *(undefined8 *)&(param_1->Attributes).field_0x20 = 0;
  *(undefined4 *)&(this->Attributes).field_0x28 = *(undefined4 *)&(param_1->Attributes).field_0x28;
  *(undefined4 *)&(this->Attributes).field_0x2c = *(undefined4 *)&(param_1->Attributes).field_0x2c;
  *(undefined8 *)&(param_1->Attributes).field_0x28 = 0;
  *(undefined8 *)&(this->Attributes).field_0x30 = 0;
  *(undefined8 *)&(this->Attributes).field_0x30 = *(undefined8 *)&(param_1->Attributes).field_0x30;
  *(undefined8 *)&(param_1->Attributes).field_0x30 = 0;
  *(undefined4 *)&(this->Attributes).field_0x38 = *(undefined4 *)&(param_1->Attributes).field_0x38;
  *(undefined4 *)&(this->Attributes).field_0x3c = *(undefined4 *)&(param_1->Attributes).field_0x3c;
  *(undefined8 *)&(param_1->Attributes).field_0x38 = 0;
  return this;
}


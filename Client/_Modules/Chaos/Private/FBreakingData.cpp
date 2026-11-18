// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FBreakingData @ 143f44f20

FBreakingData * __thiscall
Chaos::FBreakingData::FBreakingData(FBreakingData *this,FBreakingData *param_1)

{
  undefined8 uVar1;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->Proxy = param_1->Proxy;
  uVar1 = *(undefined8 *)&(param_1->Location).field_0x8;
  *(undefined8 *)&this->Location = *(undefined8 *)&param_1->Location;
  *(undefined8 *)&(this->Location).field_0x8 = uVar1;
  *(undefined8 *)&(this->Location).field_0x10 = *(undefined8 *)&(param_1->Location).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->Orientation).field_0x8;
  *(undefined8 *)&this->Orientation = *(undefined8 *)&param_1->Orientation;
  *(undefined8 *)&(this->Orientation).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->Orientation).field_0x18;
  *(undefined8 *)&(this->Orientation).field_0x10 = *(undefined8 *)&(param_1->Orientation).field_0x10
  ;
  *(undefined8 *)&(this->Orientation).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->Velocity).field_0x8;
  *(undefined8 *)&this->Velocity = *(undefined8 *)&param_1->Velocity;
  *(undefined8 *)&(this->Velocity).field_0x8 = uVar1;
  *(undefined8 *)&(this->Velocity).field_0x10 = *(undefined8 *)&(param_1->Velocity).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->AngularVelocity).field_0x8;
  *(undefined8 *)&this->AngularVelocity = *(undefined8 *)&param_1->AngularVelocity;
  *(undefined8 *)&(this->AngularVelocity).field_0x8 = uVar1;
  *(undefined8 *)&(this->AngularVelocity).field_0x10 =
       *(undefined8 *)&(param_1->AngularVelocity).field_0x10;
  this->Mass = param_1->Mass;
  uVar1 = *(undefined8 *)&(param_1->BoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->BoundingBox).MMin = *(undefined8 *)&(param_1->BoundingBox).MMin;
  *(undefined8 *)&(this->BoundingBox).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(this->BoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(param_1->BoundingBox).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(param_1->BoundingBox).MMax.field_0x8;
  *(undefined8 *)&(this->BoundingBox).MMax = *(undefined8 *)&(param_1->BoundingBox).MMax;
  *(undefined8 *)&(this->BoundingBox).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(this->BoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(param_1->BoundingBox).MMax.field_0x10;
  this->TransformGroupIndex = param_1->TransformGroupIndex;
  this->bFromCrumble = param_1->bFromCrumble;
  return this;
}


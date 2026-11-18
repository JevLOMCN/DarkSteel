// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 2

// FFieldSystemCommand @ 14632a6f0

FFieldSystemCommand * __thiscall
FFieldSystemCommand::FFieldSystemCommand
          (FFieldSystemCommand *this,EFieldPhysicsType param_1,FFieldNodeBase *param_2)

{
  undefined8 uVar1;
  FName *pFVar2;
  
  pFVar2 = GetFieldPhysicsName(param_1);
  this->TargetAttribute = *pFVar2;
  (this->RootNode).Ptr = param_2;
  ::FName::FName(&this->CommandName,"");
  this->TimeCreation = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.X = -3.4028234663852886e+38;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = -3.4028234663852886e+38;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = -3.4028234663852886e+38;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 3.4028234663852886e+38;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 3.4028234663852886e+38;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 3.4028234663852886e+38;
  (this->BoundingBox).IsValid = '\x01';
  this->PhysicsType = param_1;
  this->MaxMagnitude = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CenterPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->CenterPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->CenterPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  *(undefined8 *)&this->MetaData = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  return this;
}

// FFieldSystemCommand @ 14632a7e0

FFieldSystemCommand * __thiscall FFieldSystemCommand::FFieldSystemCommand(FFieldSystemCommand *this)

{
  undefined8 uVar1;
  
  ::FName::FName(&this->TargetAttribute,"");
  (this->RootNode).Ptr = (FFieldNodeBase *)0x0;
  ::FName::FName(&this->CommandName,"");
  this->TimeCreation = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.X = -3.4028234663852886e+38;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = -3.4028234663852886e+38;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = -3.4028234663852886e+38;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 3.4028234663852886e+38;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 3.4028234663852886e+38;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 3.4028234663852886e+38;
  (this->BoundingBox).IsValid = '\x01';
  this->PhysicsType = Field_None;
  this->MaxMagnitude = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CenterPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->CenterPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->CenterPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  *(undefined8 *)&this->MetaData = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  return this;
}


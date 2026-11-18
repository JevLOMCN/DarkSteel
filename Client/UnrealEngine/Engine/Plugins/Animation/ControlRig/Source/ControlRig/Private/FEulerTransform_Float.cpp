// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// ToTransform @ 14a45ca60

FEulerTransform * __thiscall
FRigControlValue::FEulerTransform_Float::ToTransform
          (FEulerTransform_Float *this,FEulerTransform *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).Pitch = 0.0;
  (__return_storage_ptr__->Rotation).Yaw = 0.0;
  (__return_storage_ptr__->Rotation).Roll = 0.0;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Y = (double)uVar6;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  fVar1 = this->RotationYaw;
  fVar2 = this->RotationRoll;
  (__return_storage_ptr__->Rotation).Pitch = (double)this->RotationPitch;
  (__return_storage_ptr__->Rotation).Yaw = (double)fVar1;
  (__return_storage_ptr__->Rotation).Roll = (double)fVar2;
  fVar1 = this->TranslationY;
  fVar2 = this->TranslationZ;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (double)this->TranslationX;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = (double)fVar1;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = (double)fVar2;
  uVar3 = this->ScaleY;
  uVar4 = this->ScaleZ;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.X = (double)this->ScaleX;
  auVar5._8_4_ = SUB84((double)(float)uVar4,0);
  auVar5._0_8_ = (double)(float)uVar3;
  auVar5._12_4_ = (int)((ulonglong)(double)(float)uVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Scale).field0_0x0 + 8) = auVar5;
  return __return_storage_ptr__;
}

// FEulerTransform_Float @ 14a50acb0

FEulerTransform_Float * __thiscall
FRigControlValue::FEulerTransform_Float::FEulerTransform_Float
          (FEulerTransform_Float *this,FEulerTransform *param_1)

{
  this->RotationPitch = (float)(param_1->Rotation).Pitch;
  this->RotationYaw = (float)(param_1->Rotation).Yaw;
  this->RotationRoll = (float)(param_1->Rotation).Roll;
  this->TranslationX = (float)(param_1->Location).field0_0x0._s_0.X;
  this->TranslationY = (float)(param_1->Location).field0_0x0._s_0.Y;
  this->TranslationZ = (float)(param_1->Location).field0_0x0._s_0.Z;
  this->ScaleX = (float)(param_1->Scale).field0_0x0._s_0.X;
  this->ScaleY = (float)(param_1->Scale).field0_0x0._s_0.Y;
  this->ScaleZ = (float)(param_1->Scale).field0_0x0._s_0.Z;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// FTransform_Float @ 14a2dcf30

FTransform_Float * __thiscall
FRigControlValue::FTransform_Float::FTransform_Float
          (FTransform_Float *this,TTransform<double> *param_1)

{
  double dVar1;
  
  this->RotationX = (float)(param_1->Rotation).XY.m128d_f64[0];
  this->RotationY = (float)(param_1->Rotation).XY.m128d_f64[1];
  this->RotationZ = (float)(param_1->Rotation).ZW.m128d_f64[0];
  this->RotationW = (float)(param_1->Rotation).ZW.m128d_f64[1];
  this->TranslationX = (float)(param_1->Translation).XY.m128d_f64[0];
  this->TranslationY = (float)(param_1->Translation).XY.m128d_f64[1];
  this->TranslationZ = (float)(param_1->Translation).ZW.m128d_f64[0];
  this->ScaleX = (float)(param_1->Scale3D).XY.m128d_f64[0];
  this->ScaleY = (float)(param_1->Scale3D).XY.m128d_f64[1];
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[0];
  this->ScaleW = 0.0;
  this->TranslationW = 0.0;
  this->ScaleZ = (float)dVar1;
  return this;
}


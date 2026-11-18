// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// FDeprecateVector2DParameter @ 142f36b20

FDeprecateVector2DParameter * __thiscall
UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
          (FDeprecateVector2DParameter *this,TVector2<float> *param_1)

{
  *this = (FDeprecateVector2DParameter)param_1->field0_0x0;
  return this;
}

// FDeprecateVector2DParameter @ 142f36b30

FDeprecateVector2DParameter * __thiscall
UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
          (FDeprecateVector2DParameter *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  *(float *)&this->field_0x4 = (float)(param_1->field0_0x0)._s_0.Y;
  *(float *)this = (float)dVar1;
  return this;
}

// FDeprecateVector2DParameter @ 142f36b60

FDeprecateVector2DParameter * __thiscall
UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
          (FDeprecateVector2DParameter *this,FDeprecateSlateVector2D *param_1)

{
  *this = *(FDeprecateVector2DParameter *)param_1;
  return this;
}


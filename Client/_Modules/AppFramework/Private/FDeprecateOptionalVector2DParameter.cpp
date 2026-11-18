// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// FDeprecateOptionalVector2DParameter @ 14305c2a0

FDeprecateOptionalVector2DParameter * __thiscall
UE::Slate::FDeprecateOptionalVector2DParameter::FDeprecateOptionalVector2DParameter
          (FDeprecateOptionalVector2DParameter *this,TOptional<UE::Math::TVector2<float>_> *param_1)

{
  bool bVar1;
  
  this->field_0x8 = 0;
  bVar1 = param_1->bIsSet;
  this->field_0x8 = bVar1;
  if (bVar1 != false) {
    *(TVector2<float>_u_0 *)this = (param_1->TypedValue).field0_0x0;
  }
  return this;
}

// FDeprecateOptionalVector2DParameter @ 14305c2c0

FDeprecateOptionalVector2DParameter * __thiscall
UE::Slate::FDeprecateOptionalVector2DParameter::FDeprecateOptionalVector2DParameter
          (FDeprecateOptionalVector2DParameter *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->field_0x8 = 1;
  *(ulonglong *)this = CONCAT44((float)dVar2,(float)dVar1);
  return this;
}


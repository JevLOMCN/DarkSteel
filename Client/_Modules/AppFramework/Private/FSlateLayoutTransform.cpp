// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// FSlateLayoutTransform @ 14305c980

FSlateLayoutTransform * __thiscall
FSlateLayoutTransform::FSlateLayoutTransform
          (FSlateLayoutTransform *this,FDeprecateVector2DParameter *param_1)

{
  this->Scale = 1.0;
  (this->Translation).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)param_1;
  return this;
}

// FSlateLayoutTransform @ 14305c9a0

FSlateLayoutTransform * __thiscall
FSlateLayoutTransform::FSlateLayoutTransform(FSlateLayoutTransform *this,float param_1)

{
  this->Scale = param_1;
  (this->Translation).field0_0x0 = (TVector2<float>_u_0)0x0;
  return this;
}

// FSlateLayoutTransform @ 14305c9c0

FSlateLayoutTransform * __thiscall
FSlateLayoutTransform::FSlateLayoutTransform
          (FSlateLayoutTransform *this,float param_1,FDeprecateVector2DParameter *param_2)

{
  this->Scale = param_1;
  (this->Translation).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)param_2;
  return this;
}


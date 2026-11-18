// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// TransformPoint @ 14d976d60

FDeprecateSlateVector2D __thiscall
FSlateLayoutTransform::TransformPoint
          (FSlateLayoutTransform *this,FDeprecateVector2DParameter *param_1)

{
  FDeprecateVector2DParameter FVar1;
  undefined8 *in_R8;
  float local_res8;
  float fStackX_c;
  
  local_res8 = (float)*in_R8;
  fStackX_c = (float)((ulonglong)*in_R8 >> 0x20);
  FVar1._4_4_ = this->Scale * fStackX_c + (this->Translation).field0_0x0._s_0.Y;
  FVar1._0_4_ = this->Scale * local_res8 + (this->Translation).field0_0x0._s_0.X;
  *param_1 = FVar1;
  return (FDeprecateSlateVector2D)param_1;
}


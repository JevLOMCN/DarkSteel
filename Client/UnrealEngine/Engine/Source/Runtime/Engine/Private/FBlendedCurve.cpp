// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// InitFrom @ 1474654f0

void __thiscall FBlendedCurve::InitFrom(FBlendedCurve *this,FBoneContainer *param_1)

{
  *(FCurveFilter **)&this->field_0x18 = &param_1->CurveFilter;
  return;
}


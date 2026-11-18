// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// GetRangePct<float,float> @ 14da5bb10

float __cdecl FMath::GetRangePct<float,float>(TVector2<float> *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar3 = fVar1 - fVar2;
  if (__real_322bcc77 < (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    return (param_2 - fVar2) / fVar3;
  }
  if (fVar1 <= param_2) {
    return __real_3f800000;
  }
  return 0.0;
}


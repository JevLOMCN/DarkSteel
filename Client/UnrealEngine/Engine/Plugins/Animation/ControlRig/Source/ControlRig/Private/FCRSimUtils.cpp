// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// ComputeWeightsFromMass @ 14a246e70

void __cdecl
FCRSimUtils::ComputeWeightsFromMass(float param_1,float param_2,float *param_3,float *param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_322bcc77;
  bVar1 = param_2 <= __real_322bcc77;
  *param_3 = 0.0;
  *param_4 = 0.0;
  if (param_1 <= fVar2) {
    if (!bVar1) {
      *param_3 = 0.0;
      *param_4 = 1.0;
      return;
    }
  }
  else if (bVar1) {
    *param_3 = 1.0;
    *param_4 = 0.0;
    return;
  }
  if (fVar2 < param_1 + param_2) {
    fVar2 = __real_3f800000 / (param_1 + param_2);
    fVar3 = fVar2 * param_1;
    fVar2 = fVar2 * param_2;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *param_3 = fVar2;
    *param_4 = fVar3;
  }
  return;
}


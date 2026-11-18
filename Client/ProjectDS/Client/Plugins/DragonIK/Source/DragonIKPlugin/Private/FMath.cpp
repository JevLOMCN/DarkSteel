// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 2

// FInterpTo<float,int,float,float> @ 14d32c540

float __cdecl
FMath::FInterpTo<float,int,float,float>(float param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_2;
  if ((0.0 < param_4) && (fVar2 = fVar1 - param_1, __real_322bcc77 <= fVar2 * fVar2)) {
    fVar1 = param_3 * param_4;
    if (__real_3f800000 <= param_3 * param_4) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    fVar1 = fVar1 * fVar2 + param_1;
  }
  return fVar1;
}

// UnwindDegrees<double> @ 14d32c7c0

double __cdecl FMath::UnwindDegrees<double>(double param_1)

{
  for (; __real_4066800000000000 < param_1; param_1 = param_1 + __real_c076800000000000) {
  }
  for (; param_1 < __real_c066800000000000; param_1 = param_1 + __real_4076800000000000) {
  }
  return param_1;
}


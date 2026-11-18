// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// FastAsin @ 14b18cb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl FMath::FastAsin(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar1 = __real_3f800000 - fVar2;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = SQRT(fVar1) *
          (((((((__real_3bda90c5 - fVar2 * ___real_3aa57a2c) * fVar2 - ___real_3c8bfc66) * fVar2 +
              ___real_3cfd10f8) * fVar2 - ___real_3d4d8392) * fVar2 + ___real_3db63a9e) * fVar2 -
           ___real_3e5bbfca) * fVar2 + __real_3fc90fda);
  if (0.0 <= param_1) {
    return __real_3fc90fda - fVar1;
  }
  return fVar1 - __real_3fc90fda;
}


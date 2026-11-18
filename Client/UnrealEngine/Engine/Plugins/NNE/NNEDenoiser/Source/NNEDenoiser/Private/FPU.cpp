// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 1

// Forward @ 14eaf7b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl UE::NNEDenoiser::Private::Oidn::Helper::FPU::Forward(float param_1)

{
  float fVar1;
  
  if (param_1 <= ___real_35d3fdc0) {
    return param_1 * ___real_44b09ace;
  }
  if (param_1 <= ___real_3d03ed56) {
    fVar1 = powf(param_1,__real_3edcde7e);
    return fVar1 * ___real_3fd2ade4 - ___real_3b40c470;
  }
  fVar1 = logf(param_1 + ___real_3bcd22e0);
  return fVar1 * ___real_3e4546e5 + ___real_3f7fa592;
}


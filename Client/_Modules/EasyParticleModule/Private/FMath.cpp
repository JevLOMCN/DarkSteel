// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 1

// IsNearlyEqual<float,int> @ 14acbf750

bool __cdecl FMath::IsNearlyEqual<float,int>(float param_1,int param_2)

{
  return (float)((uint)(param_1 - (float)param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77;
}


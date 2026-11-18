// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 1

// ToStd @ 14acca800

/* WARNING: Enum "memory_order": Some values do not have unique names */

memory_order __cdecl TAtomicBase_Basic<FMinimalName>::ToStd(EMemoryOrder param_1)

{
  memory_order local_res10 [6];
  
  local_res10[0] = memory_order_relaxed;
  local_res10[1] = 5;
  return local_res10[(int)param_1];
}


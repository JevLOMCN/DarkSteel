// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __scrt_is_user_matherr_present @ 150167840

int __cdecl __scrt_is_user_matherr_present(void)

{
  return (int)(__scrt_default_matherr == 0);
}


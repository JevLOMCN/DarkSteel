// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __scrt_is_ucrt_dll_in_use @ 15015ca34

int __cdecl __scrt_is_ucrt_dll_in_use(void)

{
  return (int)(__scrt_ucrt_dll_is_in_use != 0);
}


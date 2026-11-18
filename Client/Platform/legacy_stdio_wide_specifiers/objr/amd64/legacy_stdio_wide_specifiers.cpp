// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: legacy_stdio_wide_specifiers
// Functions: 1

// initialize_legacy_wide_specifiers @ 15018f6e0

int __cdecl initialize_legacy_wide_specifiers(void)

{
  ulong64 *puVar1;
  
  puVar1 = __local_stdio_printf_options();
  *puVar1 = *puVar1 | 4;
  puVar1 = __local_stdio_scanf_options();
  *puVar1 = *puVar1 | 2;
  return 0;
}


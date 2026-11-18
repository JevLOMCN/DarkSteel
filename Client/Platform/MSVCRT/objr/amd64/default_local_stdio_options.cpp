// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __scrt_initialize_default_local_stdio_options @ 15016781c

void __cdecl __scrt_initialize_default_local_stdio_options(void)

{
  ulong64 *puVar1;
  
  puVar1 = __local_stdio_printf_options();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = __local_stdio_scanf_options();
  *puVar1 = *puVar1 | 2;
  return;
}


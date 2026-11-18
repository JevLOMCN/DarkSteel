// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 2

// __scrt_initialize_type_info @ 15015c9a0

void __cdecl __scrt_initialize_type_info(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015c9a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead((PSLIST_HEADER)&__type_info_root_node);
  return;
}

// __scrt_uninitialize_type_info @ 15015c9b4

void __cdecl __scrt_uninitialize_type_info(void)

{
  __std_type_info_destroy_list(&__type_info_root_node);
  return;
}


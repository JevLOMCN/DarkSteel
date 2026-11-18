// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_heap_runtime_config_view_cache_capacity_for_object_size @ 140d84840

uchar __cdecl
pas_heap_runtime_config_view_cache_capacity_for_object_size
          (pas_heap_runtime_config *param_1,ulong64 param_2,pas_segregated_page_config *param_3)

{
  code *pcVar1;
  ulong64 uVar2;
  
  uVar2 = (*param_1->view_cache_capacity_for_object_size)(param_2,param_3);
  if (uVar2 < 0x100) {
    return (uchar)uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_heap_runtime_config_zero_view_cache_capacity @ 140d84870

ulong64 __cdecl
pas_heap_runtime_config_zero_view_cache_capacity
          (ulong64 param_1,pas_segregated_page_config *param_2)

{
  return 0;
}

// pas_heap_runtime_config_aggressive_view_cache_capacity @ 140d84880

ulong64 __cdecl
pas_heap_runtime_config_aggressive_view_cache_capacity
          (ulong64 param_1,pas_segregated_page_config *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  
  uVar1 = (param_2->base).page_size;
  if (uVar1 < 0x190000) {
    return 0x190000 / (uVar1 & 0xffffffff);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


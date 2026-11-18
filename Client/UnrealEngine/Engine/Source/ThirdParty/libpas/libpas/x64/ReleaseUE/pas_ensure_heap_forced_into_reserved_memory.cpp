// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_ensure_heap_forced_into_reserved_memory @ 140d69490

pas_heap * __cdecl
pas_ensure_heap_forced_into_reserved_memory
          (pas_heap_ref *param_1,pas_heap_ref_kind param_2,pas_heap_config *param_3,
          pas_heap_runtime_config *param_4,ulong64 param_5,ulong64 param_6)

{
  pas_basic_heap_page_caches *ppVar1;
  pas_heap *ppVar2;
  
  ppVar1 = pas_create_basic_heap_page_caches_with_reserved_memory
                     ((pas_basic_heap_runtime_config *)param_4,param_5,param_6);
  ppVar2 = pas_ensure_heap_with_page_caches(param_1,param_2,param_3,param_4,ppVar1);
  return ppVar2;
}


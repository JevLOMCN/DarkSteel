// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_ensure_heap_with_page_caches @ 140d86260

pas_heap * __cdecl
pas_ensure_heap_with_page_caches
          (pas_heap_ref *param_1,pas_heap_ref_kind param_2,pas_heap_config *param_3,
          pas_heap_runtime_config *param_4,pas_basic_heap_page_caches *param_5)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined7 uVar6;
  uint uVar7;
  uint uVar8;
  pas_heap_runtime_config *ppVar9;
  pas_heap *ppVar10;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  ppVar9 = pas_immortal_heap_allocate(0x30,"pas_basic_heap_runtime_config",pas_object_allocation);
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  ppVar9->view_cache_capacity_for_object_size = param_4->view_cache_capacity_for_object_size;
  bVar5 = param_4->sharing_mode;
  uVar6 = *(undefined7 *)&param_4->field_0x1;
  uVar7 = param_4->directory_size_bound_for_partial_views;
  uVar8 = param_4->directory_size_bound_for_baseline_allocators;
  uVar2 = param_4->max_segregated_object_size;
  uVar3 = param_4->max_bitfit_object_size;
  uVar4 = *(undefined4 *)&param_4->field_0x1c;
  ppVar9->directory_size_bound_for_no_view_cache = param_4->directory_size_bound_for_no_view_cache;
  ppVar9->max_segregated_object_size = uVar2;
  ppVar9->max_bitfit_object_size = uVar3;
  *(undefined4 *)&ppVar9->field_0x1c = uVar4;
  ppVar9->sharing_mode = bVar5;
  *(undefined7 *)&ppVar9->field_0x1 = uVar6;
  ppVar9->directory_size_bound_for_partial_views = uVar7;
  ppVar9->directory_size_bound_for_baseline_allocators = uVar8;
  *(pas_basic_heap_page_caches **)(ppVar9 + 1) = param_5;
  if (param_1->heap != (pas_heap *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1->allocator_index == 0) {
    ppVar10 = pas_ensure_heap_slow(param_1,param_2,param_3,ppVar9);
    return ppVar10;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


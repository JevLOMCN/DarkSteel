// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 5

// pas_local_allocator_scavenger_data_is_baseline_allocator @ 140d7c220

bool __cdecl
pas_local_allocator_scavenger_data_is_baseline_allocator
          (pas_local_allocator_scavenger_data *param_1)

{
  return param_1 < pas_baseline_allocator_table + pas_baseline_allocator_table_bound &&
         pas_baseline_allocator_table <= param_1;
}

// pas_local_allocator_scavenger_data_is_stopped @ 140d7c250

bool __cdecl
pas_local_allocator_scavenger_data_is_stopped(pas_local_allocator_scavenger_data *param_1)

{
  code *pcVar1;
  
  if ((param_1->encoded_kind_and_location & 0x7f) < 5) {
    return (0xbU >> (param_1->encoded_kind_and_location & 0x1f) & 1) != 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_local_allocator_scavenger_data_commit_if_necessary_slow @ 140d7c280

void __cdecl
pas_local_allocator_scavenger_data_commit_if_necessary_slow
          (pas_local_allocator_scavenger_data *param_1,
          pas_local_allocator_scavenger_data_commit_if_necessary_slow_mode param_2,
          pas_local_allocator_kind param_3)

{
  pas_thread_local_cache *ppVar1;
  pas_thread_local_cache_node *ppVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  pas_local_allocator_kind pVar8;
  pas_thread_local_cache_layout_node_opaque *ppVar9;
  bool bVar10;
  
  if ((param_3 != pas_local_allocator_allocator_kind) &&
     (param_3 != pas_local_allocator_view_cache_kind)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  bVar10 = param_2 ==
           pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
  ;
  if ((char)param_1->encoded_kind_and_location < '\0') {
    if ((param_1->encoded_kind_and_location & 0x7f) != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (param_3 != pas_local_allocator_allocator_kind) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (param_1->is_in_use != bVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    param_1->encoded_kind_and_location = 0x82;
  }
  else {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar1 = *(pas_thread_local_cache **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if (ppVar1 < (pas_thread_local_cache *)&DAT_00000002) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar6 = param_1->encoded_kind_and_location;
    if ((bVar6 & 0x7f | 2) == 3) {
      if (param_2 ==
          pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
         ) {
        AcquireSRWLockExclusive((PSRWLOCK)&ppVar1->node->scavenger_lock);
      }
      bVar6 = param_1->encoded_kind_and_location;
      if ((bVar6 & 0x7f) == 0) {
        bVar5 = false;
        bVar4 = false;
        ppVar2 = ppVar1->node;
      }
      else {
        if ((bVar6 & 0x7f) == 3) {
          if (param_3 != pas_local_allocator_view_cache_kind) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          param_1->encoded_kind_and_location = bVar6 & 0x80 | 4;
          pas_local_view_cache_did_restart((pas_local_view_cache *)param_1);
        }
        else {
          if ((bVar6 & 0x7f) != 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (param_3 != pas_local_allocator_allocator_kind) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          param_1->encoded_kind_and_location = bVar6 & 0x80 | 2;
        }
        bVar5 = true;
        bVar4 = true;
        ppVar2 = ppVar1->node;
      }
      if (param_2 ==
          pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
         ) {
        ReleaseSRWLockExclusive((PSRWLOCK)&ppVar2->scavenger_lock);
        bVar4 = bVar5;
      }
      if (bVar4) {
        if (param_1->is_in_use != bVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((param_1->encoded_kind_and_location & 0x7f) == param_3) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar6 = param_1->encoded_kind_and_location;
    }
    if ((bVar6 & 0x7f) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (param_2 ==
        pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
       ) {
      AcquireSRWLockExclusive((PSRWLOCK)&ppVar1->node->scavenger_lock);
    }
    if ((param_1->encoded_kind_and_location & 0x7f) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar7 = pas_thread_local_cache_allocator_index_for_allocator(ppVar1,param_1);
    ppVar9 = pas_thread_local_cache_layout_get_node_for_index(uVar7);
    pas_thread_local_cache_layout_node_commit_and_construct(ppVar9,ppVar1);
    pVar8 = param_1->encoded_kind_and_location & 0x7f;
    if (pVar8 != param_3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (((char)pVar8 != '\x02') && (pVar8 != pas_local_allocator_view_cache_kind)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    param_1->is_in_use = bVar10;
    if (param_2 ==
        pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
       ) {
                    /* WARNING: Could not recover jumptable at 0x000140d7c460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&ppVar1->node->scavenger_lock);
      return;
    }
  }
  return;
}

// pas_local_allocator_scavenger_data_stop @ 140d7c490

bool __cdecl
pas_local_allocator_scavenger_data_stop
          (pas_local_allocator_scavenger_data *param_1,pas_lock_lock_mode param_2)

{
  code *pcVar1;
  bool bVar2;
  
  switch(param_1->encoded_kind_and_location & 0x7f) {
  case 0:
  case 1:
  case 3:
    return true;
  case 2:
    bVar2 = pas_local_allocator_stop((pas_local_allocator *)param_1,param_2);
    return bVar2;
  case 4:
    bVar2 = pas_local_view_cache_stop((pas_local_view_cache *)param_1,param_2);
    return bVar2;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
}

// pas_local_allocator_scavenger_data_prepare_to_decommit @ 140d7c4d0

void __cdecl
pas_local_allocator_scavenger_data_prepare_to_decommit(pas_local_allocator_scavenger_data *param_1)

{
  code *pcVar1;
  byte bVar2;
  BOOLEAN BVar3;
  
  bVar2 = param_1->encoded_kind_and_location & 0x7f;
  if ((bVar2 < 2) || (bVar2 == 3)) {
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar3 == '\0') {
      param_1->encoded_kind_and_location = param_1->encoded_kind_and_location & 0x80;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((bVar2 != 2) && (bVar2 != 4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


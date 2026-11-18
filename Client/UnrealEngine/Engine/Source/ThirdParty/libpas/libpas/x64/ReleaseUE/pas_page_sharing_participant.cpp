// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 9

// pas_page_sharing_participant_create @ 140d92b70

pas_page_sharing_participant_opaque * __cdecl
pas_page_sharing_participant_create(void *param_1,pas_page_sharing_participant_kind param_2)

{
  code *pcVar1;
  pas_page_sharing_participant_opaque *ppVar2;
  
  ppVar2 = (pas_page_sharing_participant_opaque *)((longlong)(int)param_2 | (ulonglong)param_1);
  if ((void *)((ulonglong)ppVar2 & 0xfffffffffffffff8) != param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (((pas_page_sharing_participant_kind)ppVar2 &
      (pas_page_sharing_participant_large_sharing_pool|pas_page_sharing_participant_bitfit_directory
      )) == param_2) {
    return ppVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_page_sharing_participant_get_payload @ 140d92ba0

pas_page_sharing_participant_payload * __cdecl
pas_page_sharing_participant_get_payload(pas_page_sharing_participant_opaque *param_1)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulong64 uVar5;
  
  uVar2 = (uint)param_1 & 7;
  if (uVar2 < 6) {
    uVar3 = (ulonglong)param_1 & 0xfffffffffffffff8;
    switch(uVar2) {
    case 0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    case 3:
      return (pas_page_sharing_participant_payload *)(uVar3 + 0x60);
    case 4:
      return &pas_large_sharing_participant_payload.base;
    case 5:
      return (pas_page_sharing_participant_payload *)(uVar3 + 0x28);
    }
    lVar4 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(uVar3 + 4) * 8;
    if ((ulonglong)*(uint *)(uVar3 + 4) == 0) {
      lVar4 = 0;
    }
    uVar5 = 0;
    if (7 < (ulonglong)*(uint *)(lVar4 + 0x38)) {
      uVar5 = pas_compact_heap_reservation_base;
    }
    return (pas_page_sharing_participant_payload *)
           (uVar5 + *(uint *)(lVar4 + 0x38) & 0xfffffffffffffffe);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_page_sharing_participant_payload_construct @ 140d92c10

void __cdecl
pas_page_sharing_participant_payload_construct(pas_page_sharing_participant_payload *param_1)

{
  param_1->use_epoch_for_min_heap = 0;
  param_1->index_in_sharing_pool = 0;
  param_1->index_in_sharing_pool_min_heap = 0;
  *(undefined8 *)&param_1->delta_has_been_noted = 0;
  return;
}

// pas_page_sharing_participant_payload_with_use_epoch_construct @ 140d92c30

void __cdecl
pas_page_sharing_participant_payload_with_use_epoch_construct
          (pas_page_sharing_participant_payload_with_use_epoch *param_1)

{
  *(undefined8 *)&(param_1->base).delta_has_been_noted = 0;
  param_1->use_epoch = 0;
  (param_1->base).use_epoch_for_min_heap = 0;
  (param_1->base).index_in_sharing_pool = 0;
  (param_1->base).index_in_sharing_pool_min_heap = 0;
  return;
}

// pas_page_sharing_participant_get_use_epoch @ 140d92c50

ulong64 __cdecl
pas_page_sharing_participant_get_use_epoch(pas_page_sharing_participant_opaque *param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong64 uVar3;
  pas_bitfit_directory *ppVar4;
  
  uVar2 = (uint)param_1 & 7;
  if (uVar2 < 6) {
    ppVar4 = (pas_bitfit_directory *)((ulonglong)param_1 & 0xfffffffffffffff8);
    switch(uVar2) {
    case 0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    default:
      uVar3 = pas_segregated_directory_get_use_epoch((pas_segregated_directory *)ppVar4);
      return uVar3;
    case 3:
      uVar3 = pas_bitfit_directory_get_use_epoch(ppVar4);
      return uVar3;
    case 4:
      return pas_large_sharing_participant_payload.use_epoch;
    case 5:
      return *(ulong64 *)&(ppVar4->bitvectors).spine_size;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_page_sharing_participant_set_parent_pool @ 140d92c90

void __cdecl
pas_page_sharing_participant_set_parent_pool
          (pas_page_sharing_participant_opaque *param_1,pas_page_sharing_pool *param_2)

{
  code *pcVar1;
  
  if (4 < ((uint)param_1 & 7) - 1) {
    if (((ulonglong)param_1 & 7) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 == &pas_physical_page_sharing_pool) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_page_sharing_participant_get_parent_pool @ 140d92cc0

pas_page_sharing_pool * __cdecl
pas_page_sharing_participant_get_parent_pool(pas_page_sharing_participant_opaque *param_1)

{
  code *pcVar1;
  
  if (((uint)param_1 & 7) - 1 < 5) {
    return &pas_physical_page_sharing_pool;
  }
  if (((ulonglong)param_1 & 7) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_page_sharing_participant_is_eligible @ 140d92cf0

bool __cdecl pas_page_sharing_participant_is_eligible(pas_page_sharing_participant_opaque *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  pas_simple_decommittable_large_free_heap *ppVar6;
  longlong lVar7;
  
  uVar3 = (uint)param_1 & 7;
  if (5 < uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  ppVar6 = (pas_simple_decommittable_large_free_heap *)((ulonglong)param_1 & 0xfffffffffffffff8);
  switch(uVar3) {
  case 0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  case 3:
    lVar5._0_1_ = (ppVar6->private_base).is_committed;
    lVar5._1_1_ = (ppVar6->private_base).clean_count;
    lVar5._2_6_ = *(undefined6 *)&(ppVar6->private_base).field_0x22;
    return lVar5 != 0;
  case 4:
    return pas_large_sharing_min_heap_instance.size != 0;
  case 5:
    bVar2 = pas_simple_decommittable_large_free_heap_is_eligible(ppVar6);
    return bVar2;
  }
  uVar4 = (ulonglong)*(uint *)((longlong)&(ppVar6->private_base).private_base.free_list + 4);
  lVar5 = uVar4 * 8 + pas_compact_heap_reservation_base;
  if (lVar5 == 0 || uVar4 == 0) {
    return ((uint)(ppVar6->private_base).private_base.free_list_size >> 1 & 1) != 0;
  }
  lVar7 = *(longlong *)(lVar5 + 0x18);
  do {
    bVar2 = *(longlong *)(lVar5 + 0x18) != lVar7;
    lVar7 = *(longlong *)(lVar5 + 0x18);
  } while (bVar2);
  return *(longlong *)(lVar5 + 0x10) != 0;
}

// pas_page_sharing_participant_take_least_recently_used @ 140d92d90

pas_page_sharing_pool_take_result __cdecl
pas_page_sharing_participant_take_least_recently_used
          (pas_page_sharing_participant_opaque *param_1,pas_deferred_decommit_log *param_2,
          pas_lock_hold_mode param_3)

{
  code *pcVar1;
  uint uVar2;
  pas_page_sharing_pool_take_result pVar3;
  pas_bitfit_directory *ppVar4;
  
  uVar2 = (uint)param_1 & 7;
  if (5 < uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  ppVar4 = (pas_bitfit_directory *)((ulonglong)param_1 & 0xfffffffffffffff8);
  switch(uVar2) {
  case 0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  case 1:
    if (param_2 != (pas_deferred_decommit_log *)0x0) {
      pVar3 = pas_segregated_shared_page_directory_take_last_empty
                        ((pas_segregated_shared_page_directory *)ppVar4,param_2,param_3);
      return pVar3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  case 2:
    pVar3 = pas_segregated_size_directory_take_last_empty
                      ((pas_segregated_size_directory *)ppVar4,param_2,param_3);
    return pVar3;
  case 3:
    if (param_2 != (pas_deferred_decommit_log *)0x0) {
      pVar3 = pas_bitfit_directory_take_last_empty(ppVar4,param_2,param_3);
      return pVar3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  case 4:
    if (param_2 == (pas_deferred_decommit_log *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_3 == pas_lock_is_not_held) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    pVar3 = pas_large_sharing_pool_decommit_least_recently_used(param_2);
    break;
  case 5:
    if (param_2 == (pas_deferred_decommit_log *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_3 == pas_lock_is_not_held) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    pVar3 = pas_simple_decommittable_large_free_heap_decommit
                      ((pas_simple_decommittable_large_free_heap *)ppVar4,param_2);
  }
  if (param_3 == pas_lock_is_not_held) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  return pVar3;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 8

// pas_bitfit_view_create @ 140d821d0

pas_bitfit_view * __cdecl pas_bitfit_view_create(pas_bitfit_directory *param_1,uint param_2)

{
  code *pcVar1;
  pas_bitfit_view *ppVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  ppVar2 = pas_immortal_heap_allocate(0x20,"pas_bitfit_view",pas_object_allocation);
  ppVar2->page_boundary = (void *)0x0;
  if (param_1 != (pas_bitfit_directory *)0x0) {
    uVar4 = (longlong)param_1 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar4 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = (undefined4)(uVar4 >> 3);
  }
  (ppVar2->directory).payload[0] = (uchar)uVar3;
  (ppVar2->directory).payload[1] = (uchar)((uint)uVar3 >> 8);
  (ppVar2->directory).payload[2] = (uchar)((uint)uVar3 >> 0x10);
  ppVar2->is_owned = false;
  ppVar2->index = param_2;
  InitializeSRWLock((PSRWLOCK)&ppVar2->ownership_lock);
  InitializeSRWLock((PSRWLOCK)&ppVar2->commit_lock);
  return ppVar2;
}

// pas_bitfit_view_note_nonemptiness @ 140d82270

void __cdecl pas_bitfit_view_note_nonemptiness(pas_bitfit_view *param_1)

{
  pas_bitfit_directory_max_free_did_become_unprocessed_unchecked
            ((pas_bitfit_directory *)
             (((uint)(param_1->directory).payload[2] * 0x80000 +
              (uint)*(ushort *)(param_1->directory).payload * 8) + pas_compact_heap_reservation_base
             ),(ulonglong)param_1->index,"become unprocessed on note_nonemptiness");
  return;
}

// pas_bitfit_view_note_full_emptiness @ 140d822a0

void __cdecl pas_bitfit_view_note_full_emptiness(pas_bitfit_view *param_1,pas_bitfit_page *param_2)

{
  ulong64 uVar1;
  
  uVar1 = pas_get_epoch();
  param_2->use_epoch = uVar1;
  pas_bitfit_directory_view_did_become_empty
            ((pas_bitfit_directory *)
             (((uint)(param_1->directory).payload[2] * 0x80000 +
              (uint)*(ushort *)(param_1->directory).payload * 8) + pas_compact_heap_reservation_base
             ),param_1);
  pas_bitfit_directory_max_free_did_become_empty
            ((pas_bitfit_directory *)
             (((uint)(param_1->directory).payload[2] * 0x80000 +
              (uint)*(ushort *)(param_1->directory).payload * 8) + pas_compact_heap_reservation_base
             ),(ulonglong)param_1->index,"become empty on note_emptiness");
  return;
}

// pas_bitfit_view_note_partial_emptiness @ 140d82310

void __cdecl
pas_bitfit_view_note_partial_emptiness(pas_bitfit_view *param_1,pas_bitfit_page *param_2)

{
  ulong64 uVar1;
  
  uVar1 = pas_get_epoch();
  param_2->use_epoch = uVar1;
  pas_bitfit_directory_view_did_become_empty
            ((pas_bitfit_directory *)
             (((uint)(param_1->directory).payload[2] * 0x80000 +
              (uint)*(ushort *)(param_1->directory).payload * 8) + pas_compact_heap_reservation_base
             ),param_1);
  return;
}

// pas_bitfit_view_note_max_free @ 140d82350

void __cdecl pas_bitfit_view_note_max_free(pas_bitfit_view *param_1)

{
  pas_bitfit_directory_max_free_did_become_unprocessed
            ((pas_bitfit_directory *)
             (((uint)(param_1->directory).payload[2] * 0x80000 +
              (uint)*(ushort *)(param_1->directory).payload * 8) + pas_compact_heap_reservation_base
             ),(ulonglong)param_1->index,"become unprocessed on note_max_free");
  return;
}

// pas_bitfit_view_compute_summary @ 140d82380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_bitfit_view_compute_summary(pas_heap_summary *__return_storage_ptr__,pas_bitfit_view *param_1)

{
  pas_lock *SRWLock;
  byte bVar1;
  pas_page_base_config *ppVar2;
  pas_heap_config *ppVar3;
  pas_page_base_config *ppVar4;
  code *pcVar5;
  ulong64 uVar6;
  pas_page_base *ppVar7;
  ulonglong uVar8;
  longlong lVar9;
  pas_heap_summary *ppVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  undefined1 auStack_108 [40];
  pas_lock *local_e0;
  pas_heap_summary local_d8;
  pas_range local_78;
  pas_range local_68;
  pas_range local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  SRWLock = &param_1->ownership_lock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  ppVar2 = pas_bitfit_page_config_kind_for_config_table
           [*(char *)((ulonglong)
                      ((uint)(param_1->directory).payload[2] * 0x80000 +
                      (uint)*(ushort *)(param_1->directory).payload * 8) + 0x7c +
                     pas_compact_heap_reservation_base)];
  bVar1 = ppVar2->min_align_shift;
  uVar8 = ppVar2->page_size;
  ppVar3 = ppVar2[1].heap_config_ptr;
  ppVar4 = ppVar2[1].page_config_ptr;
  local_d8.free = 0;
  local_d8.allocated = 0;
  local_d8.meta = 0;
  local_d8.committed = 0;
  local_d8.decommitted = 0;
  local_d8.free_ineligible_for_decommit = 0;
  local_d8.free_eligible_for_decommit = 0;
  local_d8.free_decommitted = 0;
  local_d8.meta_ineligible_for_decommit = 0;
  local_d8.meta_eligible_for_decommit = 0;
  local_d8.cached = 0;
  local_e0 = SRWLock;
  if (param_1->is_owned == false) {
    lVar9 = 1L << (bVar1 & 0x3f);
    uVar13 = -lVar9;
    uVar11 = (longlong)ppVar3 + lVar9 + -1 & uVar13;
    uVar13 = (ulonglong)((longlong)&ppVar3->config_ptr + (longlong)&ppVar4->is_enabled) & uVar13;
    uVar15 = uVar13 - uVar11;
    uVar6 = uVar15;
    if (uVar13 < uVar11 || uVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  else {
    ppVar7 = (*ppVar2->page_header_for_boundary)(param_1->page_boundary);
    pas_page_base_compute_committed_when_owned(ppVar7,&local_d8);
    uVar11 = 1L << (bVar1 & 0x3f);
    uVar13 = (longlong)ppVar3 + (uVar11 - 1) & -uVar11;
    uVar14 = (ulonglong)((longlong)&ppVar3->config_ptr + (longlong)&ppVar4->is_enabled) & -uVar11;
    local_58.begin = 0;
    local_58.end = uVar13;
    pas_page_base_add_free_range(ppVar7,&local_d8,&local_58,pas_free_meta_range);
    if (uVar8 < uVar14) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    local_68.begin = uVar14;
    local_68.end = uVar8;
    pas_page_base_add_free_range(ppVar7,&local_d8,&local_68,pas_free_meta_range);
    uVar15 = local_d8.free;
    uVar8 = local_d8.decommitted;
    uVar6 = local_d8.free_decommitted;
    if (uVar13 < uVar14) {
      do {
        while (uVar8 = uVar13 >> (bVar1 & 0x3f),
              (*(uint *)(ppVar7 + (uVar8 >> 5) * 4 + 0x10) >> ((uint)uVar8 & 0x1f) & 1) == 0) {
          local_d8.allocated = local_d8.allocated + uVar11;
          uVar13 = uVar13 + uVar11;
          uVar15 = local_d8.free;
          uVar8 = local_d8.decommitted;
          uVar6 = local_d8.free_decommitted;
          if (uVar14 <= uVar13) goto LAB_140d8257b;
        }
        uVar12 = uVar13 + uVar11;
        if (CARRY8(uVar13,uVar11)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        local_78.begin = uVar13;
        local_78.end = uVar12;
        pas_page_base_add_free_range(ppVar7,&local_d8,&local_78,pas_free_object_range);
        uVar13 = uVar12;
        uVar15 = local_d8.free;
        uVar8 = local_d8.decommitted;
        uVar6 = local_d8.free_decommitted;
      } while (uVar12 < uVar14);
    }
  }
LAB_140d8257b:
  local_d8.free_decommitted = uVar6;
  local_d8.decommitted = uVar8;
  local_d8.free = uVar15;
  __return_storage_ptr__->cached = local_d8.cached;
  __return_storage_ptr__->meta_ineligible_for_decommit = local_d8.meta_ineligible_for_decommit;
  __return_storage_ptr__->meta_eligible_for_decommit = local_d8.meta_eligible_for_decommit;
  __return_storage_ptr__->free_eligible_for_decommit = local_d8.free_eligible_for_decommit;
  __return_storage_ptr__->free_decommitted = local_d8.free_decommitted;
  __return_storage_ptr__->decommitted = local_d8.decommitted;
  __return_storage_ptr__->free_ineligible_for_decommit = local_d8.free_ineligible_for_decommit;
  *(undefined4 *)&__return_storage_ptr__->meta = (undefined4)local_d8.meta;
  *(undefined4 *)((longlong)&__return_storage_ptr__->meta + 4) = local_d8.meta._4_4_;
  *(undefined4 *)&__return_storage_ptr__->committed = (undefined4)local_d8.committed;
  *(undefined4 *)((longlong)&__return_storage_ptr__->committed + 4) = local_d8.committed._4_4_;
  __return_storage_ptr__->free = local_d8.free;
  __return_storage_ptr__->allocated = local_d8.allocated;
  ReleaseSRWLockExclusive((PSRWLOCK)local_e0);
  if ((local_48 ^ (ulonglong)auStack_108) != __security_cookie.value) {
    pcVar5 = (code *)swi(3);
    ppVar10 = (pas_heap_summary *)(*pcVar5)();
    return ppVar10;
  }
  return __return_storage_ptr__;
}

// pas_bitfit_view_for_each_live_object @ 140d82620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_bitfit_view_for_each_live_object
          (pas_bitfit_view *param_1,
          _func___cdecl_bool_pas_bitfit_view_ptr_ulong64_ulong64_void_ptr *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  pas_bitfit_page *ppVar4;
  undefined1 auStack_68 [32];
  pas_bitfit_view *local_48;
  _func___cdecl_bool_pas_bitfit_view_ptr_ulong64_ulong64_void_ptr *local_40;
  void *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->ownership_lock);
  bVar2 = true;
  if (param_1->is_owned == true) {
    ppVar4 = (pas_bitfit_page *)
             (*pas_bitfit_page_config_kind_for_config_table
               [*(char *)((ulonglong)
                          ((uint)(param_1->directory).payload[2] * 0x80000 +
                          (uint)*(ushort *)(param_1->directory).payload * 8) + 0x7c +
                         pas_compact_heap_reservation_base)]->page_header_for_boundary)
                       (param_1->page_boundary);
    local_48 = param_1;
    local_40 = param_2;
    local_38 = param_3;
    bVar2 = pas_bitfit_page_for_each_live_object
                      (ppVar4,bitfit_view_for_each_live_object_callback,&local_48);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ownership_lock);
  if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return bVar2;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// bitfit_view_for_each_live_object_callback @ 140d826e0

bool __cdecl
bitfit_view_for_each_live_object_callback(ulong64 param_1,ulong64 param_2,void *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d826f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)param_3 + 8))
                    (*(undefined8 *)param_3,param_1,param_2,
                     *(undefined8 *)((longlong)param_3 + 0x10));
  return (bool)uVar1;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 6

// pas_segregated_exclusive_view_create @ 140d81420

pas_segregated_exclusive_view * __cdecl
pas_segregated_exclusive_view_create(pas_segregated_size_directory *param_1,ulong64 param_2)

{
  code *pcVar1;
  pas_segregated_exclusive_view *ppVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  ppVar2 = pas_immortal_heap_allocate(0x20,"pas_segregated_exclusive_view",pas_object_allocation);
  pas_segregated_exclusive_view_count = pas_segregated_exclusive_view_count + 1;
  ppVar2->page_boundary = (void *)0x0;
  if (param_1 != (pas_segregated_size_directory *)0x0) {
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
  ppVar2->index = (uint)param_2;
  if (param_2 >> 0x20 == 0) {
    ppVar2->is_owned = false;
    InitializeSRWLock((PSRWLOCK)&ppVar2->commit_lock);
    InitializeSRWLock((PSRWLOCK)&ppVar2->ownership_lock);
    return ppVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_segregated_exclusive_view_note_emptiness @ 140d814d0

void __cdecl
pas_segregated_exclusive_view_note_emptiness
          (pas_segregated_exclusive_view *param_1,pas_segregated_page *param_2)

{
  if (param_2->is_in_use_for_allocation != false) {
    return;
  }
  pas_segregated_directory_view_did_become_empty_at_index
            ((pas_segregated_directory *)
             (((uint)(param_1->directory).payload[2] * 0x80000 +
              (uint)*(ushort *)(param_1->directory).payload * 8) + pas_compact_heap_reservation_base
             ),(ulonglong)param_1->index);
  return;
}

// pas_segregated_exclusive_view_compute_summary @ 140d81500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_segregated_exclusive_view_compute_summary
          (pas_heap_summary *__return_storage_ptr__,pas_segregated_exclusive_view *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  pas_page_base_config *ppVar5;
  code *pcVar6;
  pas_page_base *ppVar7;
  ulonglong uVar8;
  pas_heap_summary *ppVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  pas_lock *SRWLock;
  ulonglong uVar13;
  pas_segregated_size_directory *ppVar14;
  undefined1 auStack_168 [32];
  ulong64 local_148;
  pas_lock *local_140;
  pas_heap_summary local_138;
  pas_range local_d8;
  pas_range local_c8;
  pas_range local_b8;
  pas_heap_summary local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  SRWLock = &param_1->ownership_lock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  ppVar14 = (pas_segregated_size_directory *)
            (((uint)(param_1->directory).payload[2] * 0x80000 +
             (uint)*(ushort *)(param_1->directory).payload * 8) + pas_compact_heap_reservation_base)
  ;
  if (param_1->is_owned == false) {
    pas_segregated_size_directory_compute_summary_for_unowned_exclusive(&local_138,ppVar14);
  }
  else {
    ppVar5 = pas_segregated_page_config_kind_for_config_table
             [(char)(ppVar14->base).page_config_kind];
    bVar1 = ppVar5->min_align_shift;
    local_148 = ppVar5->page_size;
    local_a8.free = 0;
    local_a8.allocated = 0;
    local_a8.meta = 0;
    local_a8.committed = 0;
    local_a8.decommitted = 0;
    local_a8.free_ineligible_for_decommit = 0;
    local_a8.free_eligible_for_decommit = 0;
    local_a8.free_decommitted = 0;
    local_a8.meta_ineligible_for_decommit = 0;
    local_a8.meta_eligible_for_decommit = 0;
    local_a8.cached = 0;
    uVar10 = (ulonglong)(ppVar14->data).payload;
    puVar12 = (uint *)(pas_compact_heap_reservation_base + uVar10 * 8);
    if (uVar10 == 0) {
      puVar12 = (uint *)0x0;
    }
    local_140 = SRWLock;
    ppVar7 = (*ppVar5->page_header_for_boundary)(param_1->page_boundary);
    pas_page_base_compute_committed_when_owned(ppVar7,&local_a8);
    uVar3 = *puVar12;
    uVar4 = puVar12[1];
    uVar10 = (ulonglong)uVar4;
    local_b8.begin = 0;
    local_b8.end = (ulonglong)uVar3;
    pas_page_base_add_free_range(ppVar7,&local_a8,&local_b8,pas_free_meta_range);
    if (local_148 < uVar10) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    local_c8.end = local_148;
    local_c8.begin = uVar10;
    pas_page_base_add_free_range(ppVar7,&local_a8,&local_c8,pas_free_meta_range);
    if (uVar3 < uVar4) {
      uVar11 = ppVar14->object_size;
      uVar13 = (ulonglong)uVar3;
      do {
        while (uVar8 = uVar13 >> (bVar1 & 0x3f),
              (*(uint *)(ppVar7 + (uVar8 >> 5) * 4 + 0x2c) >> ((uint)uVar8 & 0x1f) & 1) != 0) {
          local_a8.allocated = local_a8.allocated + uVar11;
          uVar13 = uVar13 + uVar11;
          if (uVar10 <= uVar13) goto LAB_140d816d2;
        }
        uVar8 = uVar13 + uVar11;
        local_d8.begin = uVar13;
        local_d8.end = uVar8;
        pas_page_base_add_free_range(ppVar7,&local_a8,&local_d8,pas_free_object_range);
        uVar13 = uVar8;
      } while (uVar8 < uVar10);
    }
LAB_140d816d2:
    if (ppVar7[1].page_kind == '\x01') {
      local_a8.cached = local_a8.cached + local_148;
    }
    local_138.cached = local_a8.cached;
    local_138.meta_ineligible_for_decommit = local_a8.meta_ineligible_for_decommit;
    local_138.meta_eligible_for_decommit = local_a8.meta_eligible_for_decommit;
    local_138.free_eligible_for_decommit = local_a8.free_eligible_for_decommit;
    local_138.free_decommitted = local_a8.free_decommitted;
    local_138.decommitted = local_a8.decommitted;
    local_138.free_ineligible_for_decommit = local_a8.free_ineligible_for_decommit;
    local_138.meta = local_a8.meta;
    local_138.committed = local_a8.committed;
    local_138.free = local_a8.free;
    local_138.allocated = local_a8.allocated;
    SRWLock = local_140;
  }
  __return_storage_ptr__->cached = local_138.cached;
  __return_storage_ptr__->meta_ineligible_for_decommit = local_138.meta_ineligible_for_decommit;
  __return_storage_ptr__->meta_eligible_for_decommit = local_138.meta_eligible_for_decommit;
  *(undefined4 *)&__return_storage_ptr__->free_eligible_for_decommit =
       (undefined4)local_138.free_eligible_for_decommit;
  *(undefined4 *)((longlong)&__return_storage_ptr__->free_eligible_for_decommit + 4) =
       local_138.free_eligible_for_decommit._4_4_;
  *(undefined4 *)&__return_storage_ptr__->free_decommitted = (undefined4)local_138.free_decommitted;
  *(undefined4 *)((longlong)&__return_storage_ptr__->free_decommitted + 4) =
       local_138.free_decommitted._4_4_;
  *(undefined4 *)&__return_storage_ptr__->decommitted = (undefined4)local_138.decommitted;
  *(undefined4 *)((longlong)&__return_storage_ptr__->decommitted + 4) = local_138.decommitted._4_4_;
  *(undefined4 *)&__return_storage_ptr__->free_ineligible_for_decommit =
       (undefined4)local_138.free_ineligible_for_decommit;
  *(undefined4 *)((longlong)&__return_storage_ptr__->free_ineligible_for_decommit + 4) =
       local_138.free_ineligible_for_decommit._4_4_;
  *(undefined4 *)&__return_storage_ptr__->meta = (undefined4)local_138.meta;
  *(undefined4 *)((longlong)&__return_storage_ptr__->meta + 4) = local_138.meta._4_4_;
  *(undefined4 *)&__return_storage_ptr__->committed = (undefined4)local_138.committed;
  *(undefined4 *)((longlong)&__return_storage_ptr__->committed + 4) = local_138.committed._4_4_;
  *(undefined4 *)&__return_storage_ptr__->free = (undefined4)local_138.free;
  *(undefined4 *)((longlong)&__return_storage_ptr__->free + 4) = local_138.free._4_4_;
  *(undefined4 *)&__return_storage_ptr__->allocated = (undefined4)local_138.allocated;
  *(undefined4 *)((longlong)&__return_storage_ptr__->allocated + 4) = local_138.allocated._4_4_;
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if ((local_48 ^ (ulonglong)auStack_168) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar6 = (code *)swi(3);
  ppVar9 = (pas_heap_summary *)(*pcVar6)();
  return ppVar9;
}

// pas_segregated_exclusive_view_install_full_use_counts @ 140d817d0

void __cdecl
pas_segregated_exclusive_view_install_full_use_counts(pas_segregated_exclusive_view *param_1)

{
  pas_page_base_config *ppVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  ulong64 uVar5;
  pas_page_base *ppVar6;
  pas_extended_segregated_size_directory_data *ppVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = pas_compact_heap_reservation_base;
  uVar9 = (ulonglong)
          ((uint)(param_1->directory).payload[2] * 0x80000 +
          (uint)*(ushort *)(param_1->directory).payload * 8);
  ppVar1 = pas_segregated_page_config_kind_for_config_table
           [*(char *)(uVar9 + 0xc + pas_compact_heap_reservation_base)];
  uVar8 = ppVar1->page_size;
  uVar2 = ppVar1->granule_size;
  lVar3 = *(longlong *)&ppVar1[1].page_config_kind;
  ppVar6 = (*ppVar1->page_header_for_boundary)(param_1->page_boundary);
  if (uVar8 <= uVar2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  ppVar7 = pas_segregated_size_directory_get_extended_data
                     ((pas_segregated_size_directory *)(uVar9 + uVar5));
  uVar9 = (ulonglong)*(uint *)(ppVar7->full_use_counts).payload;
  if (7 < uVar9) {
    if ((uVar8 | uVar2) >> 0x20 == 0) {
      uVar8 = (uVar8 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar8 = uVar8 / uVar2;
    }
    memcpy(ppVar6 + (lVar3 + 0x1fU >> 5) * 4 + 0x2c,
           (void *)(uVar9 + pas_compact_heap_reservation_base),uVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

// pas_segregated_exclusive_view_is_eligible @ 140d81890

bool __cdecl pas_segregated_exclusive_view_is_eligible(pas_segregated_exclusive_view *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)*(uint3 *)(param_1->directory).payload;
  if ((ulonglong)param_1->index != 0) {
    uVar1 = (ulonglong)param_1->index - 1;
    uVar2 = (ulonglong)
            *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                     (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 4 + uVar2 * 8) * 8);
    lVar3 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    uVar2 = (ulonglong)*(uint *)(lVar3 + (uVar1 >> 7) * 4);
    lVar3 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    return (1 << ((byte)uVar1 & 0x1f) & *(uint *)(lVar3 + (ulonglong)((uint)(uVar1 >> 2) & 0x18)))
           != 0;
  }
  return (*(uint *)(pas_compact_heap_reservation_base + 8 + uVar2 * 8) & 1) != 0;
}

// pas_segregated_exclusive_view_is_empty @ 140d81910

bool __cdecl pas_segregated_exclusive_view_is_empty(pas_segregated_exclusive_view *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)*(uint3 *)(param_1->directory).payload;
  if ((ulonglong)param_1->index != 0) {
    uVar1 = (ulonglong)param_1->index - 1;
    uVar2 = (ulonglong)
            *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                     (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 4 + uVar2 * 8) * 8);
    lVar3 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    uVar2 = (ulonglong)*(uint *)(lVar3 + (uVar1 >> 7) * 4);
    lVar3 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    return (1 << ((byte)uVar1 & 0x1f) &
           *(uint *)(lVar3 + 4 + (ulonglong)((uint)(uVar1 >> 2) & 0x18))) != 0;
  }
  return (*(uint *)(pas_compact_heap_reservation_base + 8 + uVar2 * 8) & 2) != 0;
}


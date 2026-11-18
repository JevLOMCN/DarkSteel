// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 6

// pas_segregated_partial_view_create @ 140d66ca0

pas_segregated_partial_view * __cdecl
pas_segregated_partial_view_create(pas_segregated_size_directory *param_1,ulong64 param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  pas_segregated_partial_view *ppVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  ppVar3 = pas_immortal_heap_allocate(0x18,"pas_segregated_partial_view",pas_object_allocation);
  pas_segregated_partial_view_count = pas_segregated_partial_view_count + 1;
  (ppVar3->shared_view).payload[2] = '\0';
  (ppVar3->shared_view).payload[0] = '\0';
  (ppVar3->shared_view).payload[1] = '\0';
  if (param_1 != (pas_segregated_size_directory *)0x0) {
    uVar5 = (longlong)param_1 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar5 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar5 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar4 = (undefined4)(uVar5 >> 3);
  }
  (ppVar3->directory).payload[0] = (uchar)uVar4;
  (ppVar3->directory).payload[1] = (uchar)((uint)uVar4 >> 8);
  (ppVar3->directory).payload[2] = (uchar)((uint)uVar4 >> 0x10);
  if (param_2 < 0x100) {
    ppVar3->index = (uchar)param_2;
    ppVar3->alloc_bits_size = '\0';
    ppVar3->alloc_bits_offset = '\0';
    ppVar3->alloc_bits = (uint *)0x0;
    ppVar3->is_in_use_for_allocation = false;
    ppVar3->is_attached_to_shared_handle = false;
    ppVar3->noted_in_scan = false;
    ppVar3->eligibility_has_been_noted = false;
    ppVar3->eligibility_notification_has_been_deferred = false;
    return ppVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_segregated_partial_view_note_eligibility @ 140d66d40

void __cdecl
pas_segregated_partial_view_note_eligibility
          (pas_segregated_partial_view *param_1,pas_segregated_page *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  byte bVar4;
  
  if ((PSRWLOCK)param_2->lock_ptr != (PSRWLOCK)0x0) {
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)param_2->lock_ptr);
    if (BVar3 != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  uVar1 = param_1->field_0x11;
  if (!param_1->eligibility_has_been_noted) {
    if (param_1->is_in_use_for_allocation) {
      bVar4 = uVar1 | 2;
    }
    else {
      pas_segregated_directory_view_did_become_eligible
                ((pas_segregated_directory *)
                 (((uint)(param_1->directory).payload[2] * 0x80000 +
                  (uint)*(ushort *)(param_1->directory).payload * 8) +
                 pas_compact_heap_reservation_base),
                 (pas_segregated_view_opaque *)((ulonglong)param_1 | 4));
      bVar4 = param_1->field_0x11;
    }
    param_1->field_0x11 = bVar4 | 4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_segregated_partial_view_set_is_in_use_for_allocation @ 140d66db0

void __cdecl
pas_segregated_partial_view_set_is_in_use_for_allocation
          (pas_segregated_partial_view *param_1,pas_segregated_shared_view *param_2,
          pas_segregated_shared_handle *param_3)

{
  uint *puVar1;
  code *pcVar2;
  
  param_1->is_in_use_for_allocation = true;
  puVar1 = &param_2->is_in_use_for_allocation_count;
  *puVar1 = *puVar1 + 1;
  if (*puVar1 != 0) {
    param_1->eligibility_has_been_noted = false;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_segregated_partial_view_should_table @ 140d66dd0

bool __cdecl
pas_segregated_partial_view_should_table
          (pas_segregated_partial_view *param_1,pas_segregated_page_config *param_2)

{
  code *pcVar1;
  uint3 uVar2;
  bool bVar3;
  pas_page_base *ppVar4;
  ulonglong *puVar5;
  
  uVar2 = *(uint3 *)(param_1->shared_view).payload;
  puVar5 = (ulonglong *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
  if (puVar5 == (ulonglong *)0x0 || uVar2 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    if ((*(byte *)((longlong)puVar5 + 0x1c) & 1) != 0) {
      if ((*puVar5 & 1) != 0) {
        ppVar4 = (*(param_2->base).page_header_for_boundary)
                           (*(void **)(*puVar5 & 0xfffffffffffffffe));
        return *(longlong *)(ppVar4 + 0x18) == 0;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return bVar3;
}

// pas_segregated_partial_view_compute_summary @ 140d66e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_segregated_partial_view_compute_summary
          (pas_heap_summary *__return_storage_ptr__,pas_segregated_partial_view *param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  pas_page_base_config *ppVar4;
  code *pcVar5;
  ulonglong uVar6;
  pas_heap_summary *ppVar7;
  void *pvVar8;
  PSRWLOCK SRWLock;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_128 [32];
  pas_segregated_page *local_108;
  uint *local_100;
  ulonglong local_f8;
  uint *local_f0;
  pas_segregated_partial_view *local_e8;
  PSRWLOCK local_e0;
  pas_heap_summary *local_d8;
  ulonglong local_d0;
  pas_heap_summary local_c8;
  pas_range local_68;
  pas_range local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  SRWLock = (PSRWLOCK)
            (((uint)(param_1->shared_view).payload[2] * 0x80000 +
             (uint)*(ushort *)(param_1->shared_view).payload * 8) +
             pas_compact_heap_reservation_base + 0x10);
  AcquireSRWLockExclusive(SRWLock);
  uVar6 = (ulonglong)
          ((uint)(param_1->directory).payload[2] * 0x80000 +
          (uint)*(ushort *)(param_1->directory).payload * 8);
  ppVar4 = pas_segregated_page_config_kind_for_config_table
           [*(char *)(uVar6 + 0xc + pas_compact_heap_reservation_base)];
  local_d0 = (ulonglong)ppVar4->min_align_shift;
  uVar2 = *(uint *)(uVar6 + 0x20 + pas_compact_heap_reservation_base);
  uVar6 = (ulonglong)
          ((uint)(param_1->shared_view).payload[2] * 0x80000 +
          (uint)*(ushort *)(param_1->shared_view).payload * 8);
  puVar1 = (ulonglong *)(uVar6 + pas_compact_heap_reservation_base);
  puVar10 = param_1->alloc_bits;
  local_e0 = SRWLock;
  local_d8 = __return_storage_ptr__;
  if ((*(byte *)(uVar6 + 0x1c + pas_compact_heap_reservation_base) & 1) == 0) {
    local_f0 = (uint *)0x0;
    local_108 = (pas_segregated_page *)0x0;
  }
  else {
    iVar3 = *(int *)&ppVar4[1].field_0x4;
    pvVar8 = (void *)*puVar1;
    if (((ulonglong)pvVar8 & 1) != 0) {
      pvVar8 = *(void **)((ulonglong)pvVar8 & 0xfffffffffffffffe);
    }
    local_108 = (pas_segregated_page *)(*ppVar4->page_header_for_boundary)(pvVar8);
    local_f0 = local_108->alloc_bits;
    if (((iVar3 != 1) && ((*(byte *)((longlong)puVar1 + 0x1c) & 1) != 0)) &&
       (local_108->lock_ptr != (pas_lock *)(puVar1 + 2))) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  local_c8.meta_ineligible_for_decommit = 0;
  local_c8.meta_eligible_for_decommit = 0;
  local_c8.free_eligible_for_decommit = 0;
  local_c8.free_decommitted = 0;
  local_c8.decommitted = 0;
  local_c8.free_ineligible_for_decommit = 0;
  local_c8.meta = 0;
  local_c8.committed = 0;
  local_c8.free = 0;
  local_c8.allocated = 0;
  local_c8.cached = 0;
  local_e8 = param_1;
  if (param_1->alloc_bits_size != 0) {
    uVar6 = (ulonglong)(uVar2 & 0x7ffffff);
    uVar9 = (ulonglong)param_1->alloc_bits_offset << 5;
    lVar12 = (ulonglong)param_1->alloc_bits_size << 5;
    local_100 = puVar10;
    local_f8 = uVar6;
    do {
      if ((puVar10[uVar9 >> 5] >> ((uint)uVar9 & 0x1f) & 1) != 0) {
        if ((*(byte *)((longlong)puVar1 + 0x1c) & 1) == 0) {
          local_c8.decommitted = local_c8.decommitted + uVar6;
          local_c8.free_decommitted = local_c8.free_decommitted + uVar6;
          local_c8.free = local_c8.free + uVar6;
        }
        else {
          uVar11 = uVar9 << ((byte)local_d0 & 0x3f);
          if (CARRY8(uVar11,uVar6)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          local_58.begin = uVar11;
          local_58.end = uVar11 + uVar6;
          pas_segregated_page_add_commit_range(local_108,&local_c8,&local_58);
          if ((local_f0[uVar9 >> 5] & 1 << ((byte)uVar9 & 0x1f)) == 0) {
            local_68.begin = uVar11;
            local_68.end = uVar11 + uVar6;
            pas_page_base_add_free_range(&local_108->base,&local_c8,&local_68,pas_free_object_range)
            ;
            puVar10 = local_100;
            uVar6 = local_f8;
          }
          else {
            local_c8.allocated = local_c8.allocated + local_f8;
            puVar10 = local_100;
            uVar6 = local_f8;
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  ppVar7 = local_d8;
  if (local_e8->is_in_use_for_allocation) {
    local_c8.cached = local_c8.cached + local_c8.decommitted + local_c8.committed;
  }
  local_d8->cached = local_c8.cached;
  local_d8->meta_ineligible_for_decommit = local_c8.meta_ineligible_for_decommit;
  local_d8->meta_eligible_for_decommit = local_c8.meta_eligible_for_decommit;
  *(undefined4 *)&local_d8->free_eligible_for_decommit =
       (undefined4)local_c8.free_eligible_for_decommit;
  *(undefined4 *)((longlong)&local_d8->free_eligible_for_decommit + 4) =
       local_c8.free_eligible_for_decommit._4_4_;
  *(undefined4 *)&local_d8->free_decommitted = (undefined4)local_c8.free_decommitted;
  *(undefined4 *)((longlong)&local_d8->free_decommitted + 4) = local_c8.free_decommitted._4_4_;
  *(undefined4 *)&local_d8->decommitted = (undefined4)local_c8.decommitted;
  *(undefined4 *)((longlong)&local_d8->decommitted + 4) = local_c8.decommitted._4_4_;
  *(undefined4 *)&local_d8->free_ineligible_for_decommit =
       (undefined4)local_c8.free_ineligible_for_decommit;
  *(undefined4 *)((longlong)&local_d8->free_ineligible_for_decommit + 4) =
       local_c8.free_ineligible_for_decommit._4_4_;
  *(undefined4 *)&local_d8->meta = (undefined4)local_c8.meta;
  *(undefined4 *)((longlong)&local_d8->meta + 4) = local_c8.meta._4_4_;
  *(undefined4 *)&local_d8->committed = (undefined4)local_c8.committed;
  *(undefined4 *)((longlong)&local_d8->committed + 4) = local_c8.committed._4_4_;
  *(undefined4 *)&local_d8->free = (undefined4)local_c8.free;
  *(undefined4 *)((longlong)&local_d8->free + 4) = local_c8.free._4_4_;
  *(undefined4 *)&local_d8->allocated = (undefined4)local_c8.allocated;
  *(undefined4 *)((longlong)&local_d8->allocated + 4) = local_c8.allocated._4_4_;
  ReleaseSRWLockExclusive(local_e0);
  if ((local_48 ^ (ulonglong)auStack_128) != __security_cookie.value) {
    pcVar5 = (code *)swi(3);
    ppVar7 = (pas_heap_summary *)(*pcVar5)();
    return ppVar7;
  }
  return ppVar7;
}

// pas_segregated_partial_view_is_eligible @ 140d67150

bool __cdecl pas_segregated_partial_view_is_eligible(pas_segregated_partial_view *param_1)

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


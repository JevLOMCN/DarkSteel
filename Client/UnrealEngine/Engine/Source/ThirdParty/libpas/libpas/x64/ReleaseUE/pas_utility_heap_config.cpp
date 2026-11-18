// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 17

// pas_utility_heap_page_header_for_boundary @ 140d72220

pas_page_base * __cdecl pas_utility_heap_page_header_for_boundary(void *param_1)

{
  return param_1;
}

// pas_utility_heap_boundary_for_page_header @ 140d72230

void * __cdecl pas_utility_heap_boundary_for_page_header(pas_page_base *param_1)

{
  return param_1;
}

// pas_utility_heap_create_page_header @ 140d72240

pas_page_base * __cdecl
pas_utility_heap_create_page_header(void *param_1,pas_page_kind param_2,pas_lock_hold_mode param_3)

{
  code *pcVar1;
  
  if (param_2 == pas_small_exclusive_segregated_page_kind) {
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_utility_heap_destroy_page_header @ 140d72260

void __cdecl pas_utility_heap_destroy_page_header(pas_page_base *param_1,pas_lock_hold_mode param_2)

{
  return;
}

// pas_utility_heap_allocate_page @ 140d72270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_utility_heap_allocate_page
          (pas_segregated_heap *param_1,pas_physical_memory_transaction *param_2,
          pas_segregated_page_role param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStackY_58 [32];
  pas_allocation_result local_30;
  pas_alignment local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if (param_2 != (pas_physical_memory_transaction *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 == pas_segregated_page_exclusive_role) {
    local_20.alignment = 0x4000;
    local_20.alignment_begin = 0;
    pas_compact_reservation_free_heap_try_allocate_with_alignment
              (&local_30,0x4000,&local_20,"pas_utility_heap/page",pas_delegate_allocation);
    pas_reservation_commit((void *)local_30.begin,0x4000);
    if ((local_10 ^ (ulonglong)auStackY_58) == __security_cookie.value) {
      return (void *)local_30.begin;
    }
    pcVar1 = (code *)swi(3);
    pvVar2 = (void *)(*pcVar1)();
    return pvVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_utility_heap_shared_page_directory_selector @ 140d72300

pas_segregated_shared_page_directory * __cdecl
pas_utility_heap_shared_page_directory_selector
          (pas_segregated_heap *param_1,pas_segregated_size_directory *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_utility_heap_page_config_specialized_local_allocator_try_allocate_in_primordial_partial_view @ 140d72310

pas_allocation_result * __cdecl
pas_utility_heap_page_config_specialized_local_allocator_try_allocate_in_primordial_partial_view
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_utility_heap_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view @ 140d72320

bool __cdecl
pas_utility_heap_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
          (pas_local_allocator *param_1,pas_segregated_partial_view *param_2,
          pas_segregated_size_directory *param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_utility_heap_page_config_specialized_local_allocator_refill @ 140d72330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_utility_heap_page_config_specialized_local_allocator_refill
          (pas_local_allocator *param_1,pas_allocator_counts *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  pas_segregated_heap *ppVar8;
  uint *puVar9;
  ulonglong uVar10;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar11;
  code *pcVar12;
  uint3 uVar13;
  ulong64 uVar14;
  BOOLEAN BVar15;
  undefined1 uVar16;
  pas_segregated_view_opaque *ppVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  pas_segregated_page *ppVar22;
  ulong64 uVar23;
  pas_segregated_size_directory *ppVar24;
  pas_segregated_directory *ppVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong *plVar30;
  bool bVar31;
  undefined1 auStackY_b8 [32];
  pas_physical_memory_transaction local_78;
  pas_allocation_result local_68;
  pas_alignment local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  ppVar17 = param_1->view;
  if (((uint)ppVar17 & 7) == 5) {
    ppVar24 = (pas_segregated_size_directory *)((ulonglong)ppVar17 & 0xfffffffffffffff8);
    ppVar8 = ppVar24->heap;
    bVar2 = ppVar8->runtime_config->field_0x4;
  }
  else {
    ppVar24 = pas_segregated_view_get_size_directory_slow(ppVar17);
    ppVar8 = ppVar24->heap;
    bVar2 = ppVar8->runtime_config->field_0x4;
  }
  if (((bVar2 & 1) == 0) && (uVar21 = (ulonglong)ppVar8->small_index_upper_bound, uVar21 != 0)) {
    puVar9 = ppVar8->index_to_small_allocator_index;
    if (puVar9 != (uint *)0x0) {
      uVar29 = (ulonglong)puVar9 & 0xfffffffffe000000;
      uVar26 = (ulonglong)((uint)puVar9 & 0x1ffffff);
      uVar28 = uVar26 - 0x4008 >> 0xe;
      uVar26 = (uVar26 + uVar21 * 4) - 0x4001 >> 0xe;
      do {
        uVar10 = *(ulonglong *)(uVar29 + 0x18 + uVar28 * 8);
        uVar27 = (uint)uVar10 & 7;
        if (uVar27 == 2) break;
        if (uVar27 == 1) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if ((uVar10 & 7) == 0) break;
        puVar1 = (ulonglong *)(uVar29 + 0x18 + uVar28 * 8);
        LOCK();
        bVar31 = uVar10 == *puVar1;
        if (bVar31) {
          *puVar1 = uVar10 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar31);
      if (uVar28 != uVar26) {
        do {
          uVar28 = *(ulonglong *)(uVar29 + 0x18 + uVar26 * 8);
          if (((uint)uVar28 & 7) < 3) break;
          puVar1 = (ulonglong *)(uVar29 + 0x18 + uVar26 * 8);
          LOCK();
          bVar31 = uVar28 == *puVar1;
          if (bVar31) {
            *puVar1 = uVar28 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar31);
      }
    }
    ppVar11 = ppVar8->index_to_small_size_directory;
    if (ppVar11 != (pas_compact_atomic_segregated_size_directory_ptr *)0x0) {
      uVar29 = (ulonglong)ppVar11 & 0xfffffffffe000000;
      uVar26 = (ulonglong)((uint)ppVar11 & 0x1ffffff);
      uVar28 = uVar26 - 0x4008 >> 0xe;
      uVar21 = (uVar26 + uVar21 * 4) - 0x4001 >> 0xe;
      do {
        uVar26 = *(ulonglong *)(uVar29 + 0x18 + uVar28 * 8);
        uVar27 = (uint)uVar26 & 7;
        if (uVar27 == 2) break;
        if (uVar27 == 1) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if ((uVar26 & 7) == 0) break;
        puVar1 = (ulonglong *)(uVar29 + 0x18 + uVar28 * 8);
        LOCK();
        bVar31 = uVar26 == *puVar1;
        if (bVar31) {
          *puVar1 = uVar26 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar31);
      if (uVar28 != uVar21) {
        do {
          uVar26 = *(ulonglong *)(uVar29 + 0x18 + uVar21 * 8);
          if (((uint)uVar26 & 7) < 3) break;
          puVar1 = (ulonglong *)(uVar29 + 0x18 + uVar21 * 8);
          LOCK();
          bVar31 = uVar26 == *puVar1;
          if (bVar31) {
            *puVar1 = uVar26 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar31);
      }
    }
  }
  uVar21 = (ulonglong)(ppVar8->rare_data).payload;
  lVar19 = uVar21 * 8 + pas_compact_heap_reservation_base;
  if (lVar19 != 0 && uVar21 != 0) {
    lVar20 = (ulonglong)*(uint *)(lVar19 + 8) * 8 + pas_compact_heap_reservation_base;
    if ((ulonglong)*(uint *)(lVar19 + 8) == 0) {
      lVar20 = 0;
    }
    if ((ulonglong)*(uint *)(lVar19 + 0xc) != 0) {
      if (lVar20 == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      uVar26 = (lVar20 - (longlong)pas_compact_expendable_memory_payload) - 8U >> 0xe;
      uVar21 = ((lVar20 - (longlong)pas_compact_expendable_memory_payload) +
               (ulonglong)*(uint *)(lVar19 + 0xc) * 0x10) - 1 >> 0xe;
      do {
        uVar29 = *(ulonglong *)((longlong)&pas_compact_expendable_memory_header + uVar26 * 8 + 0x10)
        ;
        uVar27 = (uint)uVar29 & 7;
        if (uVar27 == 2) break;
        if (uVar27 == 1) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if ((uVar29 & 7) == 0) break;
        puVar1 = (ulonglong *)((longlong)&pas_compact_expendable_memory_header + uVar26 * 8 + 0x10);
        LOCK();
        bVar31 = uVar29 == *puVar1;
        if (bVar31) {
          *puVar1 = uVar29 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar31);
      if (uVar26 != uVar21) {
        do {
          uVar26 = *(ulonglong *)
                    ((longlong)&pas_compact_expendable_memory_header + uVar21 * 8 + 0x10);
          if (((uint)uVar26 & 7) < 3) break;
          puVar1 = (ulonglong *)
                   ((longlong)&pas_compact_expendable_memory_header + uVar21 * 8 + 0x10);
          LOCK();
          bVar31 = uVar26 == *puVar1;
          if (bVar31) {
            *puVar1 = uVar26 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar31);
      }
    }
  }
  (param_1->scavenger_data).should_stop_count = '\0';
  (param_1->scavenger_data).dirty = true;
  bVar31 = pas_scavenger_did_create_eligible();
  if ((bVar31) && (BVar15 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock), BVar15 != '\0')) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  if (param_1->page_ish == 0) {
    uVar23 = 0;
    uVar21 = 0;
  }
  else {
    uVar23 = param_1->page_ish & 0xffffffffffffc000;
    uVar21 = *(ulonglong *)(uVar23 + 0x20);
    if ((uVar21 & 6) != 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
  }
  param_1->page_ish = 0;
  param_1->current_word_is_valid = false;
  param_1->payload_end = 0;
  param_1->remaining = 0;
  ppVar17 = (pas_segregated_view_opaque *)((ulonglong)ppVar24 | 5);
  if (ppVar24 == (pas_segregated_size_directory *)0x0) {
    ppVar17 = (pas_segregated_view_opaque *)0x0;
  }
  param_1->current_offset = 0;
  param_1->end_offset = 0;
  param_1->current_word = 0;
  param_1->view = ppVar17;
  param_1->config_kind = 4;
  if (uVar21 == 0) {
LAB_140d725c0:
    ppVar17 = pas_segregated_size_directory_take_first_eligible(ppVar24);
    uVar14 = pas_compact_heap_reservation_base;
    if (ppVar17 == (pas_segregated_view_opaque *)0x0) {
LAB_140d72888:
      ppVar17 = (pas_segregated_view_opaque *)0x0;
      uVar14 = pas_compact_heap_reservation_base;
    }
    else {
      uVar27 = (uint)ppVar17 & 7;
      if (1 < uVar27) {
        if (uVar27 == 4) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      plVar30 = (longlong *)((ulonglong)ppVar17 & 0xfffffffffffffff8);
      if (*(char *)((longlong)plVar30 + 0xb) == '\0') {
        uVar13 = *(uint3 *)(plVar30 + 1);
        if (*plVar30 == 0) {
          cVar3 = *(char *)(pas_compact_heap_reservation_base + 0xd + (ulonglong)uVar13 * 8);
          if (cVar3 != '\x01') {
            if (cVar3 != '\x02') {
              if (cVar3 == '\0') {
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            pas_physical_page_sharing_pool_take_for_page_config
                      (0x4000,&pas_utility_heap_config.small_segregated_config.base,pas_lock_is_held
                       ,(pas_lock **)0x0,0);
            ppVar22 = (pas_segregated_page *)*plVar30;
            if (ppVar22 != (pas_segregated_page *)0x0) goto LAB_140d72866;
          }
          pas_physical_memory_transaction_construct(&local_78);
          do {
            if (*plVar30 != 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            pas_physical_memory_transaction_begin(&local_78);
            local_58.alignment = 0x4000;
            local_58.alignment_begin = 0;
            pas_compact_reservation_free_heap_try_allocate_with_alignment
                      (&local_68,0x4000,&local_58,"pas_utility_heap/page",pas_delegate_allocation);
            uVar14 = local_68.begin;
            pas_reservation_commit((void *)local_68.begin,0x4000);
            *plVar30 = uVar14;
            bVar31 = pas_physical_memory_transaction_end(&local_78);
          } while (!bVar31);
          ppVar22 = (pas_segregated_page *)*plVar30;
          if (ppVar22 == (pas_segregated_page *)0x0) goto LAB_140d72888;
        }
        else {
          BVar15 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
          if (BVar15 != '\0') {
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          cVar3 = *(char *)(uVar14 + 0xd + (ulonglong)uVar13 * 8);
          if (cVar3 != '\x01') {
            if (cVar3 != '\x02') {
              if (cVar3 == '\0') {
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            pas_physical_page_sharing_pool_take_for_page_config
                      (0x4000,&pas_utility_heap_config.small_segregated_config.base,pas_lock_is_held
                       ,(pas_lock **)&local_58,0);
          }
          pas_page_base_commit_with_boundary
                    ((void *)*plVar30,&pas_utility_heap_config.small_segregated_config.base);
          ppVar22 = (pas_segregated_page *)*plVar30;
        }
LAB_140d72866:
        pas_segregated_page_construct
                  (ppVar22,(pas_segregated_view_opaque *)((longlong)plVar30 + 1),false,
                   &pas_utility_heap_config.small_segregated_config);
        *(undefined1 *)((longlong)plVar30 + 0xb) = 1;
        uVar14 = pas_compact_heap_reservation_base;
      }
    }
    pas_compact_heap_reservation_base = uVar14;
    if (uVar21 != 0) {
      uVar27 = (uint)uVar21 & 7;
      if (uVar27 < 2) {
        uVar21 = uVar21 & 0xfffffffffffffff8;
        cVar3 = *(char *)(uVar23 + 2);
        if (cVar3 == '\x01') {
          *(undefined1 *)(uVar23 + 2) = 0;
        }
        ppVar25 = (pas_segregated_directory *)
                  (((uint)*(byte *)(uVar21 + 10) * 0x80000 + (uint)*(ushort *)(uVar21 + 8) * 8) +
                  pas_compact_heap_reservation_base);
        uVar27 = *(uint *)(uVar21 + 0xc);
        lVar19 = *(longlong *)(uVar23 + 0x18);
        *(undefined1 *)(uVar23 + 1) = 0;
        if (cVar3 != '\0') {
          pas_segregated_directory_view_did_become_eligible_at_index(ppVar25,(ulonglong)uVar27);
        }
        if (lVar19 == 0) {
          pas_segregated_directory_view_did_become_empty_at_index(ppVar25,(ulonglong)uVar27);
        }
      }
      else {
        if (uVar27 != 4) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        uVar21 = uVar21 & 0xfffffffffffffff8;
        uVar29 = (ulonglong)
                 ((uint)*(byte *)(uVar21 + 10) * 0x80000 + (uint)*(ushort *)(uVar21 + 8) * 8);
        uVar26 = *(ulonglong *)(uVar29 + uVar14);
        if ((uVar26 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if ((*(byte *)(uVar21 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        bVar2 = *(byte *)(uVar21 + 0xd);
        uVar5 = *(ushort *)(uVar21 + 0xb);
        ppVar25 = *(pas_segregated_directory **)((uVar26 & 0xfffffffffffffffe) + 8);
        if ((*(PSRWLOCK *)(uVar23 + 8) != (PSRWLOCK)0x0) &&
           (BVar15 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(uVar23 + 8)), BVar15 != '\0')) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        uVar29 = uVar29 + uVar14;
        if (*(int *)(uVar29 + 0x24) == 1) {
          bVar31 = *(longlong *)(uVar23 + 0x18) == 0;
        }
        else {
          bVar31 = false;
        }
        bVar4 = *(byte *)(uVar21 + 0x11);
        *(byte *)(uVar21 + 0x11) = bVar4 & 0xfc;
        iVar6 = *(int *)(uVar29 + 0x24);
        if ((bVar4 & 2) == 0) {
          if (iVar6 == 0) {
LAB_140d72ba3:
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          *(int *)(uVar29 + 0x24) = iVar6 + -1;
        }
        else {
          if (iVar6 == 0) goto LAB_140d72ba3;
          *(int *)(uVar29 + 0x24) = iVar6 + -1;
          if ((*(byte *)(uVar21 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          pas_segregated_directory_view_did_become_eligible
                    ((pas_segregated_directory *)
                     (((uint)bVar2 * 0x80000 + (uint)uVar5 * 8) + uVar14),
                     (pas_segregated_view_opaque *)(uVar21 | 4));
        }
        if (bVar31) {
          if (*(int *)(uVar29 + 0x24) != 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          pas_segregated_directory_view_did_become_empty
                    (ppVar25,(pas_segregated_view_opaque *)(uVar29 | 2));
        }
      }
    }
    if (ppVar17 == (pas_segregated_view_opaque *)0x0) {
      if ((local_48 ^ (ulonglong)auStackY_b8) == __security_cookie.value) {
        return false;
      }
      goto LAB_140d72b8d;
    }
    if (((ulonglong)ppVar17 & 6) != 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
    uVar23 = *(ulong64 *)((ulonglong)ppVar17 & 0xfffffffffffffff8);
    *(undefined1 *)(uVar23 + 1) = 1;
    *(ulonglong *)(uVar23 + 0x20) = (ulonglong)ppVar17 | 1;
    if (*(longlong *)(uVar23 + 0x18) != 0) goto LAB_140d72a3d;
LAB_140d7268f:
    uVar14 = pas_compact_heap_reservation_base;
    uVar21 = (ulonglong)(ppVar24->data).payload;
    uVar27 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar21 * 8);
    iVar6 = *(int *)(pas_compact_heap_reservation_base + uVar21 * 8);
    *(ulonglong *)(uVar23 + 0x18) =
         (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 8 + uVar21 * 8);
    param_1->payload_end = uVar27 + uVar23;
    param_1->remaining = uVar27 - iVar6;
    param_1->current_offset = 0;
    param_1->end_offset = 0;
    param_1->current_word = 0;
    param_1->page_ish = uVar23;
    uVar21 = (ulonglong)*(uint *)(uVar14 + 0xc + uVar21 * 8);
    if (uVar21 < 8) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
    memcpy((void *)(uVar23 + 0x2c),(void *)(uVar21 + pas_compact_heap_reservation_base),0x100);
  }
  else {
    if ((uVar21 & 7) != 0) {
      if (((uint)uVar21 & 7) == 4) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      goto LAB_140d725c0;
    }
    *(ulonglong *)(uVar23 + 0x20) = uVar21 | 1;
    *(undefined1 *)(uVar23 + 2) = 0;
    if (*(longlong *)(uVar23 + 0x18) == 0) goto LAB_140d7268f;
LAB_140d72a3d:
    param_1->payload_end = 0;
    param_1->remaining = 0;
    uVar26 = (ulonglong)(ppVar24->data).payload;
    uVar21 = (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 0xc + uVar26 * 8);
    if (uVar21 < 8) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
    uVar27 = *(uint *)(pas_compact_heap_reservation_base + uVar26 * 8);
    uVar18 = uVar27 >> 9;
    uVar7 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar26 * 8);
    lVar19 = uVar21 + pas_compact_heap_reservation_base;
    param_1->current_offset = uVar18;
    param_1->end_offset = ((uVar7 >> 3) - 1 >> 6) + 1;
    param_1->bits[0] = 0;
    param_1[1].scavenger_data.is_in_use = false;
    param_1[1].scavenger_data.should_stop_count = '\0';
    param_1[1].scavenger_data.dirty = false;
    param_1[1].scavenger_data.encoded_kind_and_location = '\0';
    param_1[1].alignment_shift = '\0';
    *(undefined3 *)&param_1[1].field_0x5 = 0;
    param_1[1].config_kind = 0;
    *(undefined3 *)&param_1[1].field_0x9 = 0;
    param_1[1].current_word_is_valid = false;
    param_1[1].is_stashing_alloc_bits = false;
    *(undefined2 *)&param_1[1].field_0xe = 0;
    param_1[1].payload_end = 0;
    param_1[1].remaining = 0;
    param_1[1].object_size = 0;
    param_1[1].page_ish = 0;
    param_1[1].current_offset = 0;
    param_1[1].end_offset = 0;
    param_1[1].current_word = 0;
    param_1[1].view = (pas_segregated_view_opaque *)0x0;
    param_1[1].bits[0] = 0;
    param_1[2].scavenger_data.is_in_use = false;
    param_1[2].scavenger_data.should_stop_count = '\0';
    param_1[2].scavenger_data.dirty = false;
    param_1[2].scavenger_data.encoded_kind_and_location = '\0';
    param_1[2].alignment_shift = '\0';
    *(undefined3 *)&param_1[2].field_0x5 = 0;
    param_1[2].config_kind = 0;
    *(undefined3 *)&param_1[2].field_0x9 = 0;
    param_1[2].current_word_is_valid = false;
    param_1[2].is_stashing_alloc_bits = false;
    *(undefined2 *)&param_1[2].field_0xe = 0;
    param_1[2].payload_end = 0;
    param_1[2].remaining = 0;
    param_1[2].object_size = 0;
    param_1[2].page_ish = 0;
    param_1[2].current_offset = 0;
    param_1[2].end_offset = 0;
    param_1[2].current_word = 0;
    param_1[2].view = (pas_segregated_view_opaque *)0x0;
    param_1[2].bits[0] = 0;
    param_1[3].scavenger_data.is_in_use = false;
    param_1[3].scavenger_data.should_stop_count = '\0';
    param_1[3].scavenger_data.dirty = false;
    param_1[3].scavenger_data.encoded_kind_and_location = '\0';
    param_1[3].alignment_shift = '\0';
    *(undefined3 *)&param_1[3].field_0x5 = 0;
    param_1[3].config_kind = 0;
    *(undefined3 *)&param_1[3].field_0x9 = 0;
    param_1[3].current_word_is_valid = false;
    param_1[3].is_stashing_alloc_bits = false;
    *(undefined2 *)&param_1[3].field_0xe = 0;
    param_1[3].payload_end = 0;
    param_1[3].remaining = 0;
    param_1[3].object_size = 0;
    param_1[3].page_ish = 0;
    param_1[3].current_offset = 0;
    param_1[3].end_offset = 0;
    param_1[3].current_word = 0;
    param_1[3].view = (pas_segregated_view_opaque *)0x0;
    param_1[3].bits[0] = 0;
    param_1[4].scavenger_data.is_in_use = false;
    param_1[4].scavenger_data.should_stop_count = '\0';
    param_1[4].scavenger_data.dirty = false;
    param_1[4].scavenger_data.encoded_kind_and_location = '\0';
    param_1[4].alignment_shift = '\0';
    *(undefined3 *)&param_1[4].field_0x5 = 0;
    param_1[4].config_kind = 0;
    *(undefined3 *)&param_1[4].field_0x9 = 0;
    param_1[4].current_word_is_valid = false;
    param_1[4].is_stashing_alloc_bits = false;
    *(undefined2 *)&param_1[4].field_0xe = 0;
    param_1[4].payload_end = 0;
    param_1[4].remaining = 0;
    param_1[4].object_size = 0;
    param_1->page_ish = (uVar27 & 0xfffffe00) + uVar23;
    lVar20 = 0;
    do {
      uVar27 = *(uint *)(lVar19 + lVar20 * 4);
      uVar7 = *(uint *)(uVar23 + 0x2c + lVar20 * 4);
      *(uint *)((longlong)param_1->bits + lVar20 * 4) = ~uVar7 & uVar27;
      *(uint *)(uVar23 + 0x2c + lVar20 * 4) = uVar7 | uVar27;
      lVar20 = lVar20 + 1;
    } while (lVar20 != 0x40);
    param_1->current_word = param_1->bits[uVar18];
    param_1->current_word_is_valid = true;
    *(ulonglong *)(uVar23 + 0x18) =
         (ulonglong)
         *(uint *)(pas_compact_heap_reservation_base + 8 + (ulonglong)(ppVar24->data).payload * 8);
  }
  if ((local_48 ^ (ulonglong)auStackY_b8) == __security_cookie.value) {
    return true;
  }
LAB_140d72b8d:
  pcVar12 = (code *)swi(3);
  uVar16 = (*pcVar12)();
  return (bool)uVar16;
}

// pas_utility_heap_page_config_specialized_local_allocator_return_memory_to_page @ 140d72be0

void __cdecl
pas_utility_heap_page_config_specialized_local_allocator_return_memory_to_page
          (pas_local_allocator *param_1,pas_segregated_view_opaque *param_2,
          pas_segregated_page *param_3,pas_segregated_size_directory *param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  longlong lVar3;
  pas_segregated_partial_view *ppVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  pas_segregated_view_opaque *ppVar12;
  ulonglong uVar13;
  bool bVar14;
  ulonglong local_50;
  
  uVar5 = (uint)param_2;
  if ((uVar5 & 7) < 2) {
    if (((uint)(int)(char)param_1->config_kind < 0xe) &&
       ((0x2aa8U >> ((int)(char)param_1->config_kind & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar13 = (ulonglong)param_1->remaining;
    if (uVar13 != 0) {
      uVar10 = param_1->payload_end;
      uVar9 = uVar10 - uVar13;
      if (uVar13 <= uVar10) {
        uVar8 = param_1->object_size;
        do {
          uVar13 = (ulonglong)((uint)(uVar9 >> 6) & 0xfc);
          uVar7 = *(uint *)((longlong)param_3->alloc_bits + uVar13) &
                  ~(1 << ((uint)((uVar9 & 0xffffffff) >> 3) & 0x1f));
          *(uint *)((longlong)param_3->alloc_bits + uVar13) = uVar7;
          if (((ulonglong)param_3->owner & 7) != 0) {
            ppVar12 = (pas_segregated_view_opaque *)((ulonglong)param_3->owner & 0xfffffffffffffff8)
            ;
            if (param_3->is_in_use_for_allocation == true) {
              param_3->eligibility_notification_has_been_deferred = true;
            }
            else {
              pas_segregated_directory_view_did_become_eligible_at_index
                        ((pas_segregated_directory *)
                         (((uint)(byte)ppVar12[10] * 0x80000 + (uint)*(ushort *)(ppVar12 + 8) * 8) +
                         pas_compact_heap_reservation_base),(ulonglong)*(uint *)(ppVar12 + 0xc));
            }
            param_3->owner = ppVar12;
          }
          if (uVar7 == 0) {
            uVar2 = (param_3->emptiness).num_non_empty_words_or_live_bytes - 1;
            if (uVar2 == 0) {
              pas_segregated_page_note_emptiness_impl
                        (param_3,pas_note_emptiness_clear_num_non_empty_words);
            }
            else {
              (param_3->emptiness).num_non_empty_words_or_live_bytes = uVar2;
            }
          }
          uVar9 = uVar9 + uVar8;
        } while (uVar9 < uVar10);
      }
    }
    if (param_1->current_offset != param_1->end_offset) {
      param_1->bits[param_1->current_offset] = param_1->current_word;
      if (((uint)(int)(char)param_1->config_kind < 0xe) &&
         ((0x2aa8U >> ((int)(char)param_1->config_kind & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (((ulonglong)param_2 & 6) == 0) {
        uVar13 = (ulonglong)
                 *(uint *)(pas_compact_heap_reservation_base + 0xc +
                          (ulonglong)(param_4->data).payload * 8);
        if (uVar13 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar3 = pas_compact_heap_reservation_base + uVar13;
        local_50 = 0x40;
        uVar13 = 0;
      }
      else {
        if ((uVar5 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        plVar6 = (longlong *)((ulonglong)param_2 & 0xfffffffffffffff8);
        if ((ulonglong)*(byte *)((longlong)plVar6 + 0xf) == 0) {
          return;
        }
        uVar13 = (ulonglong)*(byte *)(plVar6 + 2);
        local_50 = *(byte *)((longlong)plVar6 + 0xf) + uVar13;
        lVar3 = *plVar6;
      }
      do {
        uVar5 = *(uint *)((longlong)param_1->bits + uVar13 * 4) & *(uint *)(lVar3 + uVar13 * 4);
        if (uVar5 != 0) {
          uVar8 = (uint)uVar13 & 0x3f;
          do {
            uVar7 = -uVar5 & uVar5;
            uVar11 = ~uVar7 & param_3->alloc_bits[uVar8];
            param_3->alloc_bits[uVar8] = uVar11;
            if (((ulonglong)param_3->owner & 7) != 0) {
              ppVar12 = (pas_segregated_view_opaque *)
                        ((ulonglong)param_3->owner & 0xfffffffffffffff8);
              if (param_3->is_in_use_for_allocation == true) {
                param_3->eligibility_notification_has_been_deferred = true;
              }
              else {
                pas_segregated_directory_view_did_become_eligible_at_index
                          ((pas_segregated_directory *)
                           (((uint)(byte)ppVar12[10] * 0x80000 + (uint)*(ushort *)(ppVar12 + 8) * 8)
                           + pas_compact_heap_reservation_base),(ulonglong)*(uint *)(ppVar12 + 0xc))
                ;
              }
              param_3->owner = ppVar12;
            }
            if (uVar11 == 0) {
              uVar2 = (param_3->emptiness).num_non_empty_words_or_live_bytes - 1;
              if (uVar2 == 0) {
                pas_segregated_page_note_emptiness_impl
                          (param_3,pas_note_emptiness_clear_num_non_empty_words);
              }
              else {
                (param_3->emptiness).num_non_empty_words_or_live_bytes = uVar2;
              }
            }
            bVar14 = uVar7 != uVar5;
            uVar5 = uVar7 ^ uVar5;
          } while (bVar14);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != local_50);
    }
  }
  else {
    if ((uVar5 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (((uint)(int)(char)param_1->config_kind < 0xe) &&
       ((0x2aa8U >> ((int)(char)param_1->config_kind & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar13 = (ulonglong)param_1->remaining;
    if (uVar13 != 0) {
      uVar10 = param_1->payload_end;
      uVar9 = uVar10 - uVar13;
      if (uVar13 <= uVar10) {
        uVar8 = param_1->object_size;
        do {
          uVar13 = (ulonglong)((uint)(uVar9 >> 8) & 0x3f);
          uVar7 = param_3->alloc_bits[uVar13] & ~(1 << ((uint)((uVar9 & 0xffffffff) >> 3) & 0x1f));
          param_3->alloc_bits[uVar13] = uVar7;
          if (((uint)param_3->owner & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar13 = (ulonglong)
                   *(uint *)(((ulonglong)param_3->owner & 0xfffffffffffffff8) + 0x14 + uVar13 * 4);
          ppVar4 = (pas_segregated_partial_view *)(uVar13 * 8 + pas_compact_heap_reservation_base);
          if (uVar13 == 0) {
            ppVar4 = (pas_segregated_partial_view *)0x0;
          }
          if (!ppVar4->eligibility_has_been_noted) {
            pas_segregated_partial_view_note_eligibility(ppVar4,param_3);
          }
          if (uVar7 == 0) {
            uVar2 = (param_3->emptiness).num_non_empty_words_or_live_bytes - 1;
            if (uVar2 == 0) {
              pas_segregated_page_note_emptiness_impl
                        (param_3,pas_note_emptiness_clear_num_non_empty_words);
            }
            else {
              (param_3->emptiness).num_non_empty_words_or_live_bytes = uVar2;
            }
          }
          uVar9 = uVar9 + uVar8;
        } while (uVar9 < uVar10);
      }
    }
    if (param_1->current_offset != param_1->end_offset) {
      param_1->bits[param_1->current_offset] = param_1->current_word;
      if (((uint)(int)(char)param_1->config_kind < 0xe) &&
         ((0x2aa8U >> ((int)(char)param_1->config_kind & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (((ulonglong)param_2 & 6) == 0) {
        uVar13 = (ulonglong)
                 *(uint *)(pas_compact_heap_reservation_base + 0xc +
                          (ulonglong)(param_4->data).payload * 8);
        if (uVar13 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar3 = pas_compact_heap_reservation_base + uVar13;
        local_50 = 0x40;
        uVar13 = 0;
      }
      else {
        if ((uVar5 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        plVar6 = (longlong *)((ulonglong)param_2 & 0xfffffffffffffff8);
        if ((ulonglong)*(byte *)((longlong)plVar6 + 0xf) == 0) {
          return;
        }
        uVar13 = (ulonglong)*(byte *)(plVar6 + 2);
        local_50 = *(byte *)((longlong)plVar6 + 0xf) + uVar13;
        lVar3 = *plVar6;
      }
      do {
        uVar5 = *(uint *)((longlong)param_1->bits + uVar13 * 4) & *(uint *)(lVar3 + uVar13 * 4);
        if (uVar5 != 0) {
          uVar10 = (ulonglong)((uint)uVar13 & 0x3f);
          do {
            uVar8 = -uVar5 & uVar5;
            uVar7 = ~uVar8 & param_3->alloc_bits[uVar10];
            param_3->alloc_bits[uVar10] = uVar7;
            if (((uint)param_3->owner & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            uVar9 = (ulonglong)
                    *(uint *)(((ulonglong)param_3->owner & 0xfffffffffffffff8) + 0x14 + uVar10 * 4);
            ppVar4 = (pas_segregated_partial_view *)(uVar9 * 8 + pas_compact_heap_reservation_base);
            if (uVar9 == 0) {
              ppVar4 = (pas_segregated_partial_view *)0x0;
            }
            if (!ppVar4->eligibility_has_been_noted) {
              pas_segregated_partial_view_note_eligibility(ppVar4,param_3);
            }
            if (uVar7 == 0) {
              uVar2 = (param_3->emptiness).num_non_empty_words_or_live_bytes - 1;
              if (uVar2 == 0) {
                pas_segregated_page_note_emptiness_impl
                          (param_3,pas_note_emptiness_clear_num_non_empty_words);
              }
              else {
                (param_3->emptiness).num_non_empty_words_or_live_bytes = uVar2;
              }
            }
            bVar14 = uVar8 != uVar5;
            uVar5 = uVar8 ^ uVar5;
          } while (bVar14);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != local_50);
    }
  }
  return;
}

// pas_utility_heap_config_for_each_shared_page_directory @ 140d73060

bool __cdecl
pas_utility_heap_config_for_each_shared_page_directory
          (pas_segregated_heap *param_1,
          _func___cdecl_bool_pas_segregated_shared_page_directory_ptr_void_ptr *param_2,
          void *param_3)

{
  code *pcVar1;
  
  if (param_1 == &pas_utility_segregated_heap) {
    return true;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_utility_heap_config_dump_shared_page_directory_arg @ 140d73080

void __cdecl
pas_utility_heap_config_dump_shared_page_directory_arg
          (pas_stream *param_1,pas_segregated_shared_page_directory *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_utility_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow @ 140d73090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_utility_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1,
          pas_allocator_counts *param_2,
          _func___cdecl_pas_allocation_result_pas_allocation_result *param_3)

{
  ulong64 *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  pas_segregated_heap *ppVar9;
  uint *puVar10;
  ulonglong uVar11;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar12;
  code *pcVar13;
  uint3 uVar14;
  BOOLEAN BVar15;
  pas_segregated_view_opaque *ppVar16;
  pas_allocation_result *ppVar17;
  undefined1 uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  pas_segregated_page *ppVar23;
  ulonglong uVar24;
  pas_segregated_directory *ppVar25;
  ulonglong uVar26;
  uint uVar27;
  ulong64 uVar28;
  ulonglong uVar29;
  ulong64 uVar30;
  longlong *plVar31;
  pas_segregated_size_directory *ppVar32;
  bool bVar33;
  undefined1 auStackY_f8 [32];
  pas_physical_memory_transaction local_90;
  pas_allocation_result local_80;
  pas_allocation_result local_70;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar3 = (param_1->scavenger_data).encoded_kind_and_location;
  if ((bVar3 & 0x7f) == 2) {
    cVar4 = (param_1->scavenger_data).is_in_use;
  }
  else {
    (param_1->scavenger_data).encoded_kind_and_location = bVar3 & 0x80 | 2;
    cVar4 = (param_1->scavenger_data).is_in_use;
  }
  if (cVar4 != '\x01') {
                    /* WARNING: Does not return */
    pcVar13 = (code *)invalidInstructionException();
    (*pcVar13)();
  }
  puVar1 = param_1->bits;
  do {
    ppVar16 = param_1->view;
    if (((uint)ppVar16 & 7) == 5) {
      ppVar32 = (pas_segregated_size_directory *)((ulonglong)ppVar16 & 0xfffffffffffffff8);
      ppVar9 = ppVar32->heap;
      bVar3 = ppVar9->runtime_config->field_0x4;
    }
    else {
      ppVar32 = pas_segregated_view_get_size_directory_slow(ppVar16);
      ppVar9 = ppVar32->heap;
      bVar3 = ppVar9->runtime_config->field_0x4;
    }
    if (((bVar3 & 1) == 0) && (uVar22 = (ulonglong)ppVar9->small_index_upper_bound, uVar22 != 0)) {
      puVar10 = ppVar9->index_to_small_allocator_index;
      if (puVar10 != (uint *)0x0) {
        uVar26 = (ulonglong)puVar10 & 0xfffffffffe000000;
        uVar24 = (ulonglong)((uint)puVar10 & 0x1ffffff);
        uVar29 = uVar24 - 0x4008 >> 0xe;
        uVar24 = (uVar24 + uVar22 * 4) - 0x4001 >> 0xe;
        do {
          uVar11 = *(ulonglong *)(uVar26 + 0x18 + uVar29 * 8);
          uVar27 = (uint)uVar11 & 7;
          if (uVar27 == 2) break;
          if (uVar27 == 1) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          if ((uVar11 & 7) == 0) break;
          puVar2 = (ulonglong *)(uVar26 + 0x18 + uVar29 * 8);
          LOCK();
          bVar33 = uVar11 == *puVar2;
          if (bVar33) {
            *puVar2 = uVar11 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar33);
        if (uVar29 != uVar24) {
          do {
            uVar29 = *(ulonglong *)(uVar26 + 0x18 + uVar24 * 8);
            if (((uint)uVar29 & 7) < 3) break;
            puVar2 = (ulonglong *)(uVar26 + 0x18 + uVar24 * 8);
            LOCK();
            bVar33 = uVar29 == *puVar2;
            if (bVar33) {
              *puVar2 = uVar29 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar33);
        }
      }
      ppVar12 = ppVar9->index_to_small_size_directory;
      if (ppVar12 != (pas_compact_atomic_segregated_size_directory_ptr *)0x0) {
        uVar26 = (ulonglong)ppVar12 & 0xfffffffffe000000;
        uVar24 = (ulonglong)((uint)ppVar12 & 0x1ffffff);
        uVar29 = uVar24 - 0x4008 >> 0xe;
        uVar22 = (uVar24 + uVar22 * 4) - 0x4001 >> 0xe;
        do {
          uVar24 = *(ulonglong *)(uVar26 + 0x18 + uVar29 * 8);
          uVar27 = (uint)uVar24 & 7;
          if (uVar27 == 2) break;
          if (uVar27 == 1) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          if ((uVar24 & 7) == 0) break;
          puVar2 = (ulonglong *)(uVar26 + 0x18 + uVar29 * 8);
          LOCK();
          bVar33 = uVar24 == *puVar2;
          if (bVar33) {
            *puVar2 = uVar24 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar33);
        if (uVar29 != uVar22) {
          do {
            uVar24 = *(ulonglong *)(uVar26 + 0x18 + uVar22 * 8);
            if (((uint)uVar24 & 7) < 3) break;
            puVar2 = (ulonglong *)(uVar26 + 0x18 + uVar22 * 8);
            LOCK();
            bVar33 = uVar24 == *puVar2;
            if (bVar33) {
              *puVar2 = uVar24 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar33);
        }
      }
    }
    uVar22 = (ulonglong)(ppVar9->rare_data).payload;
    lVar20 = uVar22 * 8 + pas_compact_heap_reservation_base;
    if (lVar20 != 0 && uVar22 != 0) {
      lVar21 = (ulonglong)*(uint *)(lVar20 + 8) * 8 + pas_compact_heap_reservation_base;
      if ((ulonglong)*(uint *)(lVar20 + 8) == 0) {
        lVar21 = 0;
      }
      if ((ulonglong)*(uint *)(lVar20 + 0xc) != 0) {
        if (lVar21 == 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)invalidInstructionException();
          (*pcVar13)();
        }
        uVar24 = (lVar21 - (longlong)pas_compact_expendable_memory_payload) - 8U >> 0xe;
        uVar22 = ((lVar21 - (longlong)pas_compact_expendable_memory_payload) +
                 (ulonglong)*(uint *)(lVar20 + 0xc) * 0x10) - 1 >> 0xe;
        do {
          uVar26 = *(ulonglong *)
                    ((longlong)&pas_compact_expendable_memory_header + uVar24 * 8 + 0x10);
          uVar27 = (uint)uVar26 & 7;
          if (uVar27 == 2) break;
          if (uVar27 == 1) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          if ((uVar26 & 7) == 0) break;
          puVar2 = (ulonglong *)
                   ((longlong)&pas_compact_expendable_memory_header + uVar24 * 8 + 0x10);
          LOCK();
          bVar33 = uVar26 == *puVar2;
          if (bVar33) {
            *puVar2 = uVar26 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar33);
        if (uVar24 != uVar22) {
          do {
            uVar24 = *(ulonglong *)
                      ((longlong)&pas_compact_expendable_memory_header + uVar22 * 8 + 0x10);
            if (((uint)uVar24 & 7) < 3) break;
            puVar2 = (ulonglong *)
                     ((longlong)&pas_compact_expendable_memory_header + uVar22 * 8 + 0x10);
            LOCK();
            bVar33 = uVar24 == *puVar2;
            if (bVar33) {
              *puVar2 = uVar24 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar33);
        }
      }
    }
    (param_1->scavenger_data).should_stop_count = '\0';
    (param_1->scavenger_data).dirty = true;
    bVar33 = pas_scavenger_did_create_eligible();
    if ((bVar33) && (BVar15 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock), BVar15 != '\0'))
    {
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    if (param_1->page_ish == 0) {
      uVar30 = 0;
      uVar22 = 0;
    }
    else {
      uVar30 = param_1->page_ish & 0xffffffffffffc000;
      uVar22 = *(ulonglong *)(uVar30 + 0x20);
      if ((uVar22 & 6) != 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
    }
    param_1->page_ish = 0;
    param_1->current_word_is_valid = false;
    param_1->payload_end = 0;
    param_1->remaining = 0;
    ppVar16 = (pas_segregated_view_opaque *)((ulonglong)ppVar32 | 5);
    if (ppVar32 == (pas_segregated_size_directory *)0x0) {
      ppVar16 = (pas_segregated_view_opaque *)0x0;
    }
    param_1->current_offset = 0;
    param_1->end_offset = 0;
    param_1->current_word = 0;
    param_1->view = ppVar16;
    param_1->config_kind = 4;
    if (uVar22 == 0) {
LAB_140d73390:
      ppVar16 = pas_segregated_size_directory_take_first_eligible(ppVar32);
      uVar28 = pas_compact_heap_reservation_base;
      if (ppVar16 == (pas_segregated_view_opaque *)0x0) {
        ppVar16 = (pas_segregated_view_opaque *)0x0;
      }
      else {
        uVar27 = (uint)ppVar16 & 7;
        if (1 < uVar27) {
          if (uVar27 != 4) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
                    /* WARNING: Does not return */
          pcVar13 = (code *)invalidInstructionException();
          (*pcVar13)();
        }
        plVar31 = (longlong *)((ulonglong)ppVar16 & 0xfffffffffffffff8);
        if (*(char *)((longlong)plVar31 + 0xb) == '\0') {
          uVar14 = *(uint3 *)(plVar31 + 1);
          if (*plVar31 == 0) {
            cVar4 = *(char *)(pas_compact_heap_reservation_base + 0xd + (ulonglong)uVar14 * 8);
            if (cVar4 != '\x01') {
              if (cVar4 != '\x02') {
                if (cVar4 != '\0') {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)invalidInstructionException();
                  (*pcVar13)();
                }
                    /* WARNING: Does not return */
                pcVar13 = (code *)invalidInstructionException();
                (*pcVar13)();
              }
              pas_physical_page_sharing_pool_take_for_page_config
                        (0x4000,&pas_utility_heap_config.small_segregated_config.base,
                         pas_lock_is_held,(pas_lock **)0x0,0);
              ppVar23 = (pas_segregated_page *)*plVar31;
              if (ppVar23 != (pas_segregated_page *)0x0) goto LAB_140d7369b;
            }
            pas_physical_memory_transaction_construct(&local_90);
            do {
              if (*plVar31 != 0) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)invalidInstructionException();
                (*pcVar13)();
              }
              pas_physical_memory_transaction_begin(&local_90);
              local_70.begin = 0x4000;
              local_70.did_succeed = false;
              local_70._9_3_ = 0;
              local_70.zero_mode = pas_zero_mode_may_have_non_zero;
              pas_compact_reservation_free_heap_try_allocate_with_alignment
                        (&local_80,0x4000,(pas_alignment *)&local_70,"pas_utility_heap/page",
                         pas_delegate_allocation);
              uVar28 = local_80.begin;
              pas_reservation_commit((void *)local_80.begin,0x4000);
              *plVar31 = uVar28;
              bVar33 = pas_physical_memory_transaction_end(&local_90);
            } while (!bVar33);
            ppVar23 = (pas_segregated_page *)*plVar31;
            if (ppVar23 == (pas_segregated_page *)0x0) {
              ppVar16 = (pas_segregated_view_opaque *)0x0;
              uVar28 = pas_compact_heap_reservation_base;
              goto joined_r0x000140d73a29;
            }
          }
          else {
            BVar15 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
            if (BVar15 != '\0') {
                    /* WARNING: Does not return */
              pcVar13 = (code *)invalidInstructionException();
              (*pcVar13)();
            }
            cVar4 = *(char *)(uVar28 + 0xd + (ulonglong)uVar14 * 8);
            if (cVar4 != '\x01') {
              if (cVar4 != '\x02') {
                if (cVar4 != '\0') {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)invalidInstructionException();
                  (*pcVar13)();
                }
                    /* WARNING: Does not return */
                pcVar13 = (code *)invalidInstructionException();
                (*pcVar13)();
              }
              pas_physical_page_sharing_pool_take_for_page_config
                        (0x4000,&pas_utility_heap_config.small_segregated_config.base,
                         pas_lock_is_held,(pas_lock **)&local_70,0);
            }
            pas_page_base_commit_with_boundary
                      ((void *)*plVar31,&pas_utility_heap_config.small_segregated_config.base);
            ppVar23 = (pas_segregated_page *)*plVar31;
          }
LAB_140d7369b:
          pas_segregated_page_construct
                    (ppVar23,(pas_segregated_view_opaque *)((longlong)plVar31 + 1),false,
                     &pas_utility_heap_config.small_segregated_config);
          *(undefined1 *)((longlong)plVar31 + 0xb) = 1;
          uVar28 = pas_compact_heap_reservation_base;
        }
      }
joined_r0x000140d73a29:
      pas_compact_heap_reservation_base = uVar28;
      if (uVar22 != 0) {
        uVar27 = (uint)uVar22 & 7;
        if (uVar27 < 2) {
          cVar4 = *(char *)(uVar30 + 2);
          if (cVar4 == '\x01') {
            *(undefined1 *)(uVar30 + 2) = 0;
          }
          uVar22 = uVar22 & 0xfffffffffffffff8;
          ppVar25 = (pas_segregated_directory *)
                    (((uint)*(byte *)(uVar22 + 10) * 0x80000 + (uint)*(ushort *)(uVar22 + 8) * 8) +
                    pas_compact_heap_reservation_base);
          uVar27 = *(uint *)(uVar22 + 0xc);
          lVar20 = *(longlong *)(uVar30 + 0x18);
          *(undefined1 *)(uVar30 + 1) = 0;
          if (cVar4 != '\0') {
            pas_segregated_directory_view_did_become_eligible_at_index(ppVar25,(ulonglong)uVar27);
          }
          if (lVar20 == 0) {
            pas_segregated_directory_view_did_become_empty_at_index(ppVar25,(ulonglong)uVar27);
          }
        }
        else {
          if (uVar27 != 4) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          uVar22 = uVar22 & 0xfffffffffffffff8;
          uVar26 = (ulonglong)
                   ((uint)*(byte *)(uVar22 + 10) * 0x80000 + (uint)*(ushort *)(uVar22 + 8) * 8);
          uVar24 = *(ulonglong *)(uVar26 + uVar28);
          if ((uVar24 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          if ((*(byte *)(uVar22 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          bVar3 = *(byte *)(uVar22 + 0xd);
          uVar6 = *(ushort *)(uVar22 + 0xb);
          ppVar25 = *(pas_segregated_directory **)((uVar24 & 0xfffffffffffffffe) + 8);
          if ((*(PSRWLOCK *)(uVar30 + 8) != (PSRWLOCK)0x0) &&
             (BVar15 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(uVar30 + 8)), BVar15 != '\0')) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          uVar26 = uVar26 + uVar28;
          if (*(int *)(uVar26 + 0x24) == 1) {
            bVar33 = *(longlong *)(uVar30 + 0x18) == 0;
          }
          else {
            bVar33 = false;
          }
          bVar5 = *(byte *)(uVar22 + 0x11);
          *(byte *)(uVar22 + 0x11) = bVar5 & 0xfc;
          iVar7 = *(int *)(uVar26 + 0x24);
          if ((bVar5 & 2) == 0) {
            if (iVar7 == 0) {
LAB_140d73a82:
                    /* WARNING: Does not return */
              pcVar13 = (code *)invalidInstructionException();
              (*pcVar13)();
            }
            *(int *)(uVar26 + 0x24) = iVar7 + -1;
          }
          else {
            if (iVar7 == 0) goto LAB_140d73a82;
            *(int *)(uVar26 + 0x24) = iVar7 + -1;
            if ((*(byte *)(uVar22 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)invalidInstructionException();
              (*pcVar13)();
            }
            pas_segregated_directory_view_did_become_eligible
                      ((pas_segregated_directory *)
                       (((uint)bVar3 * 0x80000 + (uint)uVar6 * 8) + uVar28),
                       (pas_segregated_view_opaque *)(uVar22 | 4));
          }
          if (bVar33) {
            if (*(int *)(uVar26 + 0x24) != 0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)invalidInstructionException();
              (*pcVar13)();
            }
            pas_segregated_directory_view_did_become_empty
                      (ppVar25,(pas_segregated_view_opaque *)(uVar26 | 2));
          }
        }
      }
      if (ppVar16 == (pas_segregated_view_opaque *)0x0) {
        local_70.begin = 0;
        uVar18 = 0;
        goto LAB_140d73aa3;
      }
      if (((ulonglong)ppVar16 & 6) != 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      uVar30 = *(ulong64 *)((ulonglong)ppVar16 & 0xfffffffffffffff8);
      *(undefined1 *)(uVar30 + 1) = 1;
      *(ulonglong *)(uVar30 + 0x20) = (ulonglong)ppVar16 | 1;
      if (*(longlong *)(uVar30 + 0x18) == 0) goto LAB_140d7340b;
LAB_140d738a1:
      param_1->payload_end = 0;
      param_1->remaining = 0;
      uVar24 = (ulonglong)(ppVar32->data).payload;
      uVar22 = (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 0xc + uVar24 * 8);
      if (uVar22 < 8) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      uVar27 = *(uint *)(pas_compact_heap_reservation_base + uVar24 * 8);
      uVar19 = uVar27 >> 9;
      uVar8 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar24 * 8);
      lVar20 = uVar22 + pas_compact_heap_reservation_base;
      param_1->current_offset = uVar19;
      param_1->end_offset = ((uVar8 >> 3) - 1 >> 6) + 1;
      param_1[4].payload_end = 0;
      param_1[4].remaining = 0;
      param_1[4].object_size = 0;
      param_1[4].scavenger_data.is_in_use = false;
      param_1[4].scavenger_data.should_stop_count = '\0';
      param_1[4].scavenger_data.dirty = false;
      param_1[4].scavenger_data.encoded_kind_and_location = '\0';
      param_1[4].alignment_shift = '\0';
      *(undefined3 *)&param_1[4].field_0x5 = 0;
      param_1[4].config_kind = 0;
      *(undefined3 *)&param_1[4].field_0x9 = 0;
      param_1[4].current_word_is_valid = false;
      param_1[4].is_stashing_alloc_bits = false;
      *(undefined2 *)&param_1[4].field_0xe = 0;
      param_1[3].view = (pas_segregated_view_opaque *)0x0;
      param_1[3].bits[0] = 0;
      param_1[3].current_offset = 0;
      param_1[3].end_offset = 0;
      param_1[3].current_word = 0;
      param_1[3].remaining = 0;
      param_1[3].object_size = 0;
      param_1[3].page_ish = 0;
      param_1[3].config_kind = 0;
      *(undefined3 *)&param_1[3].field_0x9 = 0;
      param_1[3].current_word_is_valid = false;
      param_1[3].is_stashing_alloc_bits = false;
      *(undefined2 *)&param_1[3].field_0xe = 0;
      param_1[3].payload_end = 0;
      param_1[2].bits[0] = 0;
      param_1[3].scavenger_data.is_in_use = false;
      param_1[3].scavenger_data.should_stop_count = '\0';
      param_1[3].scavenger_data.dirty = false;
      param_1[3].scavenger_data.encoded_kind_and_location = '\0';
      param_1[3].alignment_shift = '\0';
      *(undefined3 *)&param_1[3].field_0x5 = 0;
      param_1[2].current_word = 0;
      param_1[2].view = (pas_segregated_view_opaque *)0x0;
      param_1[2].page_ish = 0;
      param_1[2].current_offset = 0;
      param_1[2].end_offset = 0;
      param_1[2].payload_end = 0;
      param_1[2].remaining = 0;
      param_1[2].object_size = 0;
      param_1[2].scavenger_data.is_in_use = false;
      param_1[2].scavenger_data.should_stop_count = '\0';
      param_1[2].scavenger_data.dirty = false;
      param_1[2].scavenger_data.encoded_kind_and_location = '\0';
      param_1[2].alignment_shift = '\0';
      *(undefined3 *)&param_1[2].field_0x5 = 0;
      param_1[2].config_kind = 0;
      *(undefined3 *)&param_1[2].field_0x9 = 0;
      param_1[2].current_word_is_valid = false;
      param_1[2].is_stashing_alloc_bits = false;
      *(undefined2 *)&param_1[2].field_0xe = 0;
      param_1[1].view = (pas_segregated_view_opaque *)0x0;
      param_1[1].bits[0] = 0;
      param_1[1].current_offset = 0;
      param_1[1].end_offset = 0;
      param_1[1].current_word = 0;
      param_1[1].remaining = 0;
      param_1[1].object_size = 0;
      param_1[1].page_ish = 0;
      param_1[1].config_kind = 0;
      *(undefined3 *)&param_1[1].field_0x9 = 0;
      param_1[1].current_word_is_valid = false;
      param_1[1].is_stashing_alloc_bits = false;
      *(undefined2 *)&param_1[1].field_0xe = 0;
      param_1[1].payload_end = 0;
      *puVar1 = 0;
      param_1[1].scavenger_data.is_in_use = false;
      param_1[1].scavenger_data.should_stop_count = '\0';
      param_1[1].scavenger_data.dirty = false;
      param_1[1].scavenger_data.encoded_kind_and_location = '\0';
      param_1[1].alignment_shift = '\0';
      *(undefined3 *)&param_1[1].field_0x5 = 0;
      param_1->page_ish = (uVar27 & 0xfffffe00) + uVar30;
      lVar21 = 0;
      do {
        uVar27 = *(uint *)(lVar20 + lVar21 * 4);
        uVar8 = *(uint *)(uVar30 + 0x2c + lVar21 * 4);
        *(uint *)((longlong)puVar1 + lVar21 * 4) = ~uVar8 & uVar27;
        *(uint *)(uVar30 + 0x2c + lVar21 * 4) = uVar8 | uVar27;
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0x40);
      param_1->current_word = param_1->bits[uVar19];
      param_1->current_word_is_valid = true;
      *(ulonglong *)(uVar30 + 0x18) =
           (ulonglong)
           *(uint *)(pas_compact_heap_reservation_base + 8 + (ulonglong)(ppVar32->data).payload * 8)
      ;
    }
    else {
      if ((uVar22 & 7) != 0) {
        if (((uint)uVar22 & 7) == 4) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)invalidInstructionException();
          (*pcVar13)();
        }
        goto LAB_140d73390;
      }
      *(ulonglong *)(uVar30 + 0x20) = uVar22 | 1;
      *(undefined1 *)(uVar30 + 2) = 0;
      if (*(longlong *)(uVar30 + 0x18) != 0) goto LAB_140d738a1;
LAB_140d7340b:
      uVar28 = pas_compact_heap_reservation_base;
      uVar22 = (ulonglong)(ppVar32->data).payload;
      uVar27 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar22 * 8);
      iVar7 = *(int *)(pas_compact_heap_reservation_base + uVar22 * 8);
      *(ulonglong *)(uVar30 + 0x18) =
           (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 8 + uVar22 * 8);
      param_1->payload_end = uVar27 + uVar30;
      param_1->remaining = uVar27 - iVar7;
      param_1->current_offset = 0;
      param_1->end_offset = 0;
      param_1->current_word = 0;
      param_1->page_ish = uVar30;
      uVar22 = (ulonglong)*(uint *)(uVar28 + 0xc + uVar22 * 8);
      if (uVar22 < 8) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      memcpy((void *)(uVar30 + 0x2c),(void *)(uVar22 + pas_compact_heap_reservation_base),0x100);
    }
    uVar27 = param_1->remaining;
    if ((ulonglong)uVar27 != 0) {
      param_1->remaining = uVar27 - param_1->object_size;
      local_70.begin = param_1->payload_end - (ulonglong)uVar27;
      goto LAB_140d73aa1;
    }
    uVar30 = param_1->page_ish;
    uVar28 = param_1->current_word;
    if (uVar28 != 0) {
LAB_140d73a90:
      uVar22 = 0;
      for (uVar24 = uVar28; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
        uVar22 = uVar22 + 1;
      }
      param_1->current_word = uVar28 & ~(1L << (uVar22 & 0x3f));
      local_70.begin = uVar30 + uVar22 * 8;
LAB_140d73aa1:
      uVar18 = 1;
LAB_140d73aa3:
      (param_1->scavenger_data).is_in_use = false;
      local_70.did_succeed = (bool)uVar18;
      local_70._8_8_ = local_70._8_8_ & 0xffffffff;
      (*param_3)(__return_storage_ptr__,&local_70);
      if ((local_60 ^ (ulonglong)auStackY_f8) != __security_cookie.value) {
        pcVar13 = (code *)swi(3);
        ppVar17 = (pas_allocation_result *)(*pcVar13)();
        return ppVar17;
      }
      return __return_storage_ptr__;
    }
    if (param_1->config_kind == 4) {
      uVar27 = param_1->end_offset;
      uVar8 = param_1->current_offset;
      uVar22 = (ulonglong)uVar8;
      if (uVar8 < uVar27) {
        puVar1[uVar22] = 0;
        lVar20 = 0;
        while ((uVar27 - 1) - uVar22 != lVar20) {
          uVar30 = uVar30 + 0x200;
          uVar28 = param_1[1].bits[uVar22 + lVar20 + -8];
          lVar20 = lVar20 + 1;
          if (uVar28 != 0) {
            param_1->current_offset = uVar8 + (int)lVar20;
            param_1->page_ish = uVar30;
            goto LAB_140d73a90;
          }
        }
        param_1->current_offset = uVar27;
      }
    }
  } while( true );
}

// pas_utility_heap_config_specialized_local_allocator_try_allocate_medium_segregated_with_free_bits @ 140d73b40

pas_allocation_result * __cdecl
pas_utility_heap_config_specialized_local_allocator_try_allocate_medium_segregated_with_free_bits
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_utility_heap_config_specialized_local_allocator_try_allocate_inline_cases @ 140d73b50

pas_allocation_result * __cdecl
pas_utility_heap_config_specialized_local_allocator_try_allocate_inline_cases
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  
  uVar1 = param_1->remaining;
  if ((ulonglong)uVar1 == 0) {
    uVar5 = param_1->page_ish;
    uVar8 = param_1->current_word;
    if (uVar8 == 0) {
      if (param_1->config_kind == 4) {
        uVar1 = param_1->end_offset;
        uVar2 = param_1->current_offset;
        uVar7 = (ulonglong)uVar2;
        if (uVar2 < uVar1) {
          param_1->bits[uVar7] = 0;
          lVar6 = 0;
          do {
            if ((uVar1 - 1) - uVar7 == lVar6) {
              param_1->current_offset = uVar1;
              goto LAB_140d73bfa;
            }
            uVar5 = uVar5 + 0x200;
            uVar8 = param_1[1].bits[uVar7 + lVar6 + -8];
            lVar6 = lVar6 + 1;
          } while (uVar8 == 0);
          param_1->current_offset = uVar2 + (int)lVar6;
          param_1->page_ish = uVar5;
          goto LAB_140d73b81;
        }
      }
LAB_140d73bfa:
      bVar4 = false;
      uVar5 = 0;
      goto LAB_140d73b94;
    }
LAB_140d73b81:
    uVar7 = 0;
    for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      uVar7 = uVar7 + 1;
    }
    param_1->current_word = uVar8 & ~(1L << (uVar7 & 0x3f));
    uVar5 = uVar5 + uVar7 * 8;
  }
  else {
    param_1->remaining = uVar1 - param_1->object_size;
    uVar5 = param_1->payload_end - (ulonglong)uVar1;
  }
  bVar4 = true;
LAB_140d73b94:
  __return_storage_ptr__->did_succeed = bVar4;
  __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
  __return_storage_ptr__->begin = uVar5;
  return __return_storage_ptr__;
}

// pas_utility_heap_config_specialized_local_allocator_try_allocate_slow @ 140d73c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
pas_utility_heap_config_specialized_local_allocator_try_allocate_slow
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1,
          ulong64 param_2,ulong64 param_3,pas_allocator_counts *param_4,
          _func___cdecl_pas_allocation_result_pas_allocation_result *param_5)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  pas_allocation_result *ppVar4;
  pas_local_allocator *ppVar5;
  undefined1 auStack_88 [40];
  pas_allocation_result local_60;
  undefined2 local_50;
  byte local_4e;
  undefined2 local_4c;
  byte local_4a;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar1 = (param_1->scavenger_data).encoded_kind_and_location;
  ppVar4 = (pas_allocation_result *)((ulonglong)bVar1 & 0xffffffffffffff7f);
  if ((char)ppVar4 == '\x02') {
    cVar2 = (param_1->scavenger_data).is_in_use;
  }
  else {
    (param_1->scavenger_data).encoded_kind_and_location = bVar1 & 0x80 | 2;
    cVar2 = (param_1->scavenger_data).is_in_use;
  }
  if (cVar2 != '\x01') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  bVar1 = param_1->config_kind;
  ppVar5 = param_1;
  if (bVar1 != 5) {
    do {
      if (0xb < (int)(char)bVar1 - 2U) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      (*(code *)pas_segregated_page_config_kind_for_config_table
                [*(longlong *)(&DAT_1531eb540 + (ulonglong)((int)(char)bVar1 - 2U) * 8)][2].
                heap_config_ptr)();
      if (param_1->page_ish == 0) {
        local_60.begin = 0;
        local_60.did_succeed = false;
        local_60.zero_mode = pas_zero_mode_may_have_non_zero;
LAB_140d73d1d:
        (param_1->scavenger_data).is_in_use = false;
        local_60._9_2_ = local_50;
        local_60._11_1_ = local_4e;
        (*param_5)(__return_storage_ptr__,&local_60);
        if ((local_48 ^ (ulonglong)auStack_88) != __security_cookie.value) {
          pcVar3 = (code *)swi(3);
          ppVar4 = (pas_allocation_result *)(*pcVar3)();
          return ppVar4;
        }
        return __return_storage_ptr__;
      }
      pas_utility_heap_config_specialized_local_allocator_try_allocate_inline_cases
                (&local_60,param_1);
      ppVar4 = (pas_allocation_result *)(ulonglong)local_60.did_succeed;
      local_4c = local_60._9_2_;
      local_4a = local_60._11_1_;
      ppVar5 = (pas_local_allocator *)(ulonglong)(byte)local_60._11_1_;
      if ((local_60.did_succeed & 1U) != 0) {
        local_4e = local_60._11_1_;
        local_50 = local_60._9_2_;
        goto LAB_140d73d1d;
      }
      bVar1 = param_1->config_kind;
    } while (bVar1 != 5);
  }
                    /* WARNING: Subroutine does not return */
  pas_utility_heap_page_config_specialized_local_allocator_try_allocate_in_primordial_partial_view
            (ppVar4,ppVar5);
}

// pas_utility_heap_config_specialized_try_deallocate_not_small_exclusive_segregated @ 140d73da0

bool __cdecl
pas_utility_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
          (pas_thread_local_cache *param_1,ulong64 param_2,pas_deallocation_mode param_3,
          pas_fast_megapage_kind param_4)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


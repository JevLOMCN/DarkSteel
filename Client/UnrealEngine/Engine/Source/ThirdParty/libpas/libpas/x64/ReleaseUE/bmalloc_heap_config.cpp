// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 63

// bmalloc_heap_config_activate @ 140d596d0

void __cdecl bmalloc_heap_config_activate(void)

{
  pas_designated_intrinsic_heap_initialize
            (&bmalloc_common_primitive_heap.segregated_heap,&bmalloc_heap_config);
  return;
}

// bmalloc_type_as_heap_type_get_type_size @ 140d596f0

ulong64 __cdecl bmalloc_type_as_heap_type_get_type_size(pas_heap_type *param_1)

{
  return (ulonglong)*(uint *)param_1;
}

// bmalloc_type_as_heap_type_get_type_alignment @ 140d59700

ulong64 __cdecl bmalloc_type_as_heap_type_get_type_alignment(pas_heap_type *param_1)

{
  return (ulonglong)*(uint *)(param_1 + 4);
}

// bmalloc_small_segregated_page_header_for_boundary @ 140d59710

pas_page_base * __cdecl bmalloc_small_segregated_page_header_for_boundary(void *param_1)

{
  return param_1;
}

// bmalloc_small_segregated_boundary_for_page_header @ 140d59720

void * __cdecl bmalloc_small_segregated_boundary_for_page_header(pas_page_base *param_1)

{
  return param_1;
}

// bmalloc_small_segregated_page_header_for_boundary_remote @ 140d59730

pas_page_base * __cdecl
bmalloc_small_segregated_page_header_for_boundary_remote(pas_enumerator *param_1,void *param_2)

{
  return param_2;
}

// bmalloc_small_segregated_create_page_header @ 140d59740

pas_page_base * __cdecl
bmalloc_small_segregated_create_page_header
          (void *param_1,pas_page_kind param_2,pas_lock_hold_mode param_3)

{
  return param_1;
}

// bmalloc_small_segregated_destroy_page_header @ 140d59750

void __cdecl
bmalloc_small_segregated_destroy_page_header(pas_page_base *param_1,pas_lock_hold_mode param_2)

{
  return;
}

// bmalloc_heap_config_allocate_small_segregated_page @ 140d59760

void * __cdecl
bmalloc_heap_config_allocate_small_segregated_page
          (pas_segregated_heap *param_1,pas_physical_memory_transaction *param_2,
          pas_segregated_page_role param_3)

{
  longlong lVar1;
  void *pvVar2;
  pas_heap *ppVar3;
  
  lVar1 = 0x30;
  if (param_3 == pas_segregated_page_shared_role) {
    lVar1 = 0xa0;
  }
  ppVar3 = (pas_heap *)0x0;
  if (param_1->runtime_config->is_part_of_heap) {
    ppVar3 = (pas_heap *)param_1;
  }
  pvVar2 = pas_fast_megapage_cache_try_allocate
                     ((pas_megapage_cache *)(lVar1 + *(longlong *)(param_1->runtime_config + 1)),
                      &bmalloc_megapage_table,&bmalloc_heap_config.small_segregated_config.base,
                      (param_3 == pas_segregated_page_shared_role) +
                      pas_small_exclusive_segregated_fast_megapage_kind,false,ppVar3,param_2);
  return pvVar2;
}

// bmalloc_small_segregated_page_config_select_shared_page_directory @ 140d597d0

pas_segregated_shared_page_directory * __cdecl
bmalloc_small_segregated_page_config_select_shared_page_directory
          (pas_segregated_heap *param_1,pas_segregated_size_directory *param_2)

{
  pas_segregated_shared_page_directory *ppVar1;
  
  ppVar1 = pas_shared_page_directory_by_size_get
                     ((pas_shared_page_directory_by_size *)
                      (*(longlong *)(param_1->runtime_config + 1) + 0x90),param_2->object_size,
                      &bmalloc_heap_config.small_segregated_config);
  return ppVar1;
}

// bmalloc_small_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view @ 140d5a210

bool __cdecl
bmalloc_small_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
          (pas_local_allocator *param_1,pas_segregated_partial_view *param_2,
          pas_segregated_size_directory *param_3)

{
  uint *puVar1;
  ulong64 *puVar2;
  byte bVar3;
  pas_segregated_page *ppVar4;
  code *pcVar5;
  uint3 uVar6;
  pas_segregated_shared_page_directory *ppVar7;
  pas_segregated_shared_view *ppVar8;
  pas_segregated_shared_handle *ppVar9;
  PSRWLOCK SRWLock;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  pas_lock *ppVar19;
  pas_segregated_heap *ppVar20;
  pas_segregated_partial_view *ppVar21;
  uint local_50;
  int local_48;
  
  uVar6 = *(uint3 *)(param_2->shared_view).payload;
  if ((uVar6 != 0) && (pas_compact_heap_reservation_base != (ulonglong)uVar6 * -8)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  bVar3 = param_1->alignment_shift;
  ppVar20 = param_3->heap;
  uVar11 = param_1->object_size;
  ppVar7 = pas_shared_page_directory_by_size_get
                     ((pas_shared_page_directory_by_size *)
                      (*(longlong *)(ppVar20->runtime_config + 1) + 0x90),param_3->object_size,
                      &bmalloc_heap_config.small_segregated_config);
  uVar16 = (uint)(1L << (bVar3 & 0x3f));
  ppVar8 = pas_segregated_shared_page_directory_find_first_eligible
                     (ppVar7,uVar11,uVar16,pas_lock_is_not_held);
  if (ppVar8 != (pas_segregated_shared_view *)0x0) {
    if (0x1f < bVar3) {
      ppVar19 = &ppVar8->commit_lock;
      AcquireSRWLockExclusive((PSRWLOCK)ppVar19);
      if (((ulonglong)ppVar8->shared_handle_or_page_boundary & 1) == 0) {
        ppVar9 = pas_segregated_shared_view_commit_page
                           (ppVar8,ppVar20,ppVar7,param_2,
                            &bmalloc_heap_config.small_segregated_config);
      }
      else {
        ppVar9 = (pas_segregated_shared_handle *)
                 ((ulonglong)ppVar8->shared_handle_or_page_boundary & 0xfffffffffffffffe);
      }
      if (ppVar9 != (pas_segregated_shared_handle *)0x0) {
        ppVar19 = ppVar9->page_boundary->lock_ptr;
        if (ppVar19 != (pas_lock *)0x0) {
          pas_segregated_page_switch_lock_slow(ppVar9->page_boundary,(pas_lock *)0x0,ppVar19);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
LAB_140d5a674:
      ReleaseSRWLockExclusive((PSRWLOCK)ppVar19);
      return false;
    }
    local_48 = uVar16 - 1;
    local_50 = -uVar16;
    do {
      ppVar19 = &ppVar8->commit_lock;
      AcquireSRWLockExclusive((PSRWLOCK)ppVar19);
      if (((ulonglong)ppVar8->shared_handle_or_page_boundary & 1) == 0) {
        ppVar9 = pas_segregated_shared_view_commit_page
                           (ppVar8,ppVar20,ppVar7,param_2,
                            &bmalloc_heap_config.small_segregated_config);
      }
      else {
        ppVar9 = (pas_segregated_shared_handle *)
                 ((ulonglong)ppVar8->shared_handle_or_page_boundary & 0xfffffffffffffffe);
      }
      if (ppVar9 == (pas_segregated_shared_handle *)0x0) goto LAB_140d5a674;
      ppVar4 = ppVar9->page_boundary;
      if (ppVar4->lock_ptr == (pas_lock *)0x0) {
        SRWLock = (PSRWLOCK)0x0;
      }
      else {
        SRWLock = (PSRWLOCK)
                  pas_segregated_page_switch_lock_slow(ppVar4,(pas_lock *)0x0,ppVar4->lock_ptr);
      }
      uVar15 = ppVar8->bump_offset + local_48 & local_50;
      uVar14 = uVar11 + uVar15;
      if (uVar14 < 0x4001) {
        uVar18 = uVar14;
        if (0xff < (uVar14 ^ uVar15)) {
LAB_140d5a442:
          ppVar8->bump_offset = uVar18;
          pas_segregated_partial_view_set_is_in_use_for_allocation(param_2,ppVar8,ppVar9);
          uVar13 = (longlong)ppVar8 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar13 < 8) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          (param_2->shared_view).payload[0] = (uchar)(uVar13 >> 3);
          (param_2->shared_view).payload[1] = (uchar)(uVar13 >> 0xb);
          (param_2->shared_view).payload[2] = (uchar)((uint)uVar13 >> 0x13);
          uVar11 = (int)(char)*(uint *)&param_1->config_kind - 2;
          if (uVar11 < 0xc) {
            *(uint *)&param_1->config_kind =
                 *(uint *)&param_1->config_kind & 0xffffff00 |
                 *(uint *)(&DAT_1531e9b30 + (ulonglong)uVar11 * 4);
            param_1->page_ish = (ulong64)ppVar4;
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
            uVar11 = param_1->object_size;
            param_1->payload_end = (longlong)ppVar4->alloc_bits + ((ulonglong)uVar14 - 0x2c);
            param_1->remaining = uVar14 - uVar15;
            while( true ) {
              if (uVar14 <= uVar15) {
                param_1->view = (pas_segregated_view_opaque *)((ulonglong)param_2 | 4);
                param_2->is_attached_to_shared_handle = true;
                ReleaseSRWLockExclusive((PSRWLOCK)ppVar19);
                param_2->alloc_bits = (uint *)param_1->bits;
                if (param_2->alloc_bits_offset != '\0') {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                param_2->alloc_bits_size = ' ';
                if (SRWLock == (PSRWLOCK)0x0) {
                  return true;
                }
                ReleaseSRWLockExclusive(SRWLock);
                return true;
              }
              uVar18 = 1 << ((byte)(uVar15 >> 4) & 0x1f);
              uVar13 = (ulonglong)((uVar15 >> 9) * 4);
              puVar1 = (uint *)((longlong)param_1->bits + uVar13);
              *puVar1 = *puVar1 | uVar18;
              uVar16 = *(uint *)((longlong)ppVar4->alloc_bits + uVar13);
              if (uVar16 == 0) {
                puVar2 = &(ppVar4->emptiness).num_non_empty_words_or_live_bytes;
                *puVar2 = *puVar2 + 1;
              }
              if (0x3fff < uVar15) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              uVar13 = (ulonglong)ppVar9->partial_views[uVar15 >> 8].payload;
              ppVar21 = (pas_segregated_partial_view *)
                        (pas_compact_heap_reservation_base + uVar13 * 8);
              if (uVar13 == 0) {
                ppVar21 = (pas_segregated_partial_view *)0x0;
              }
              if (ppVar21 != param_2 && ppVar21 != (pas_segregated_partial_view *)0x0) break;
              uVar13 = (longlong)param_2 - pas_compact_heap_reservation_base;
              if (pas_compact_heap_reservation_size <= uVar13) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              if (uVar13 < 8) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              ppVar9->partial_views[uVar15 >> 8].payload = (uint)(uVar13 >> 3);
              ppVar4->alloc_bits[uVar15 >> 9] = uVar16 | uVar18;
              uVar15 = uVar15 + uVar11;
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar12 = uVar11 * 2 + uVar15;
        iVar10 = 1;
        do {
          if (0x4000 < uVar12) {
            uVar18 = 0x4000;
            break;
          }
          uVar14 = uVar14 + uVar11;
          iVar10 = iVar10 + 1;
          uVar17 = uVar12 ^ uVar15;
          uVar12 = uVar12 + uVar11;
          uVar18 = uVar14;
        } while (uVar17 < 0x100);
        if (iVar10 != 0) goto LAB_140d5a442;
      }
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)ppVar19);
      ppVar20 = param_3->heap;
      ppVar7 = pas_shared_page_directory_by_size_get
                         ((pas_shared_page_directory_by_size *)
                          (*(longlong *)(ppVar20->runtime_config + 1) + 0x90),param_3->object_size,
                          &bmalloc_heap_config.small_segregated_config);
      ppVar8 = pas_segregated_shared_page_directory_find_first_eligible
                         (ppVar7,uVar11,uVar16,pas_lock_is_not_held);
    } while (ppVar8 != (pas_segregated_shared_view *)0x0);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

// bmalloc_small_segregated_page_config_specialized_local_allocator_refill @ 140d5a6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
bmalloc_small_segregated_page_config_specialized_local_allocator_refill
          (pas_local_allocator *param_1,pas_allocator_counts *param_2)

{
  pas_lock *SRWLock;
  ulong64 *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  pas_segregated_heap *ppVar7;
  ulonglong uVar8;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar9;
  pas_heap_runtime_config *ppVar10;
  ulong64 uVar11;
  PSRWLOCK pRVar12;
  uint *puVar13;
  code *pcVar14;
  uint uVar15;
  uint3 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong64 uVar24;
  byte bVar25;
  BOOLEAN BVar26;
  undefined1 uVar27;
  uint uVar28;
  pas_segregated_view_opaque *ppVar29;
  pas_segregated_shared_page_directory *ppVar30;
  pas_segregated_shared_handle *ppVar31;
  pas_heap *ppVar32;
  void *pvVar33;
  byte bVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  pas_segregated_page *ppVar38;
  pas_segregated_shared_view *ppVar39;
  pas_segregated_page *ppVar40;
  pas_segregated_size_directory *ppVar41;
  pas_segregated_partial_view *ppVar42;
  ulonglong uVar43;
  uint uVar44;
  pas_segregated_view_opaque *ppVar45;
  uint uVar46;
  pas_thread_local_cache *ppVar47;
  pas_thread_local_cache_node *ppVar48;
  longlong *plVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  pas_segregated_partial_view *ppVar52;
  pas_segregated_directory *ppVar53;
  bool bVar54;
  undefined1 auStackY_c8 [32];
  PSRWLOCK local_60;
  pas_local_allocator_result local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  ppVar45 = param_1->view;
  if (((uint)ppVar45 & 7) == 5) {
    ppVar41 = (pas_segregated_size_directory *)((ulonglong)ppVar45 & 0xfffffffffffffff8);
    ppVar7 = ppVar41->heap;
    bVar25 = ppVar7->runtime_config->field_0x4;
  }
  else {
    ppVar41 = pas_segregated_view_get_size_directory_slow(ppVar45);
    ppVar7 = ppVar41->heap;
    bVar25 = ppVar7->runtime_config->field_0x4;
  }
  if (((bVar25 & 1) == 0) && (uVar37 = (ulonglong)ppVar7->small_index_upper_bound, uVar37 != 0)) {
    puVar13 = ppVar7->index_to_small_allocator_index;
    if (puVar13 != (uint *)0x0) {
      uVar51 = (ulonglong)puVar13 & 0xfffffffffe000000;
      uVar43 = (ulonglong)((uint)puVar13 & 0x1ffffff);
      uVar50 = uVar43 - 0x4008 >> 0xe;
      uVar43 = (uVar43 + uVar37 * 4) - 0x4001 >> 0xe;
      do {
        uVar8 = *(ulonglong *)(uVar51 + 0x18 + uVar50 * 8);
        uVar44 = (uint)uVar8 & 7;
        if (uVar44 == 2) break;
        if (uVar44 == 1) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        if ((uVar8 & 7) == 0) break;
        puVar2 = (ulonglong *)(uVar51 + 0x18 + uVar50 * 8);
        LOCK();
        bVar54 = uVar8 == *puVar2;
        if (bVar54) {
          *puVar2 = uVar8 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar54);
      if (uVar50 != uVar43) {
        do {
          uVar50 = *(ulonglong *)(uVar51 + 0x18 + uVar43 * 8);
          if (((uint)uVar50 & 7) < 3) break;
          puVar2 = (ulonglong *)(uVar51 + 0x18 + uVar43 * 8);
          LOCK();
          bVar54 = uVar50 == *puVar2;
          if (bVar54) {
            *puVar2 = uVar50 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar54);
      }
    }
    ppVar9 = ppVar7->index_to_small_size_directory;
    if (ppVar9 != (pas_compact_atomic_segregated_size_directory_ptr *)0x0) {
      uVar51 = (ulonglong)ppVar9 & 0xfffffffffe000000;
      uVar43 = (ulonglong)((uint)ppVar9 & 0x1ffffff);
      uVar50 = uVar43 - 0x4008 >> 0xe;
      uVar37 = (uVar43 + uVar37 * 4) - 0x4001 >> 0xe;
      do {
        uVar43 = *(ulonglong *)(uVar51 + 0x18 + uVar50 * 8);
        uVar44 = (uint)uVar43 & 7;
        if (uVar44 == 2) break;
        if (uVar44 == 1) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        if ((uVar43 & 7) == 0) break;
        puVar2 = (ulonglong *)(uVar51 + 0x18 + uVar50 * 8);
        LOCK();
        bVar54 = uVar43 == *puVar2;
        if (bVar54) {
          *puVar2 = uVar43 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar54);
      if (uVar50 != uVar37) {
        do {
          uVar43 = *(ulonglong *)(uVar51 + 0x18 + uVar37 * 8);
          if (((uint)uVar43 & 7) < 3) break;
          puVar2 = (ulonglong *)(uVar51 + 0x18 + uVar37 * 8);
          LOCK();
          bVar54 = uVar43 == *puVar2;
          if (bVar54) {
            *puVar2 = uVar43 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar54);
      }
    }
  }
  uVar37 = (ulonglong)(ppVar7->rare_data).payload;
  lVar35 = uVar37 * 8 + pas_compact_heap_reservation_base;
  if (lVar35 != 0 && uVar37 != 0) {
    lVar36 = (ulonglong)*(uint *)(lVar35 + 8) * 8 + pas_compact_heap_reservation_base;
    if ((ulonglong)*(uint *)(lVar35 + 8) == 0) {
      lVar36 = 0;
    }
    if ((ulonglong)*(uint *)(lVar35 + 0xc) != 0) {
      if (lVar36 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      uVar43 = (lVar36 - (longlong)pas_compact_expendable_memory_payload) - 8U >> 0xe;
      uVar37 = ((lVar36 - (longlong)pas_compact_expendable_memory_payload) +
               (ulonglong)*(uint *)(lVar35 + 0xc) * 0x10) - 1 >> 0xe;
      do {
        uVar51 = *(ulonglong *)((longlong)&pas_compact_expendable_memory_header + uVar43 * 8 + 0x10)
        ;
        uVar44 = (uint)uVar51 & 7;
        if (uVar44 == 2) break;
        if (uVar44 == 1) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        if ((uVar51 & 7) == 0) break;
        puVar2 = (ulonglong *)((longlong)&pas_compact_expendable_memory_header + uVar43 * 8 + 0x10);
        LOCK();
        bVar54 = uVar51 == *puVar2;
        if (bVar54) {
          *puVar2 = uVar51 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar54);
      if (uVar43 != uVar37) {
        do {
          uVar43 = *(ulonglong *)
                    ((longlong)&pas_compact_expendable_memory_header + uVar37 * 8 + 0x10);
          if (((uint)uVar43 & 7) < 3) break;
          puVar2 = (ulonglong *)
                   ((longlong)&pas_compact_expendable_memory_header + uVar37 * 8 + 0x10);
          LOCK();
          bVar54 = uVar43 == *puVar2;
          if (bVar54) {
            *puVar2 = uVar43 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar54);
      }
    }
  }
  (param_1->scavenger_data).should_stop_count = '\0';
  (param_1->scavenger_data).dirty = true;
  bVar54 = pas_scavenger_did_create_eligible();
  if (bVar54) {
    pas_scavenger_notify_eligibility_if_needed();
  }
  if (param_1->page_ish == 0) {
    ppVar40 = (pas_segregated_page *)0x0;
    ppVar45 = (pas_segregated_view_opaque *)0x0;
  }
  else {
    ppVar40 = (pas_segregated_page *)(param_1->page_ish & 0xffffffffffffc000);
    ppVar45 = ppVar40->owner;
    if (((ulonglong)ppVar45 & 6) != 0) {
      if (((uint)ppVar45 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      ppVar45 = param_1->view;
      if (((uint)ppVar45 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
    }
  }
  param_1->page_ish = 0;
  param_1->current_word_is_valid = false;
  param_1->payload_end = 0;
  param_1->remaining = 0;
  ppVar29 = (pas_segregated_view_opaque *)((ulonglong)ppVar41 | 5);
  if (ppVar41 == (pas_segregated_size_directory *)0x0) {
    ppVar29 = (pas_segregated_view_opaque *)0x0;
  }
  param_1->current_offset = 0;
  param_1->end_offset = 0;
  param_1->current_word = 0;
  param_1->view = ppVar29;
  param_1->config_kind = 6;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar47 = *(pas_thread_local_cache **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
  uVar44 = (uint)ppVar45;
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar47) {
    ppVar48 = ppVar47->node;
    pas_thread_local_cache_stop_local_allocators_if_necessary(ppVar47,param_1);
    if (ppVar45 != (pas_segregated_view_opaque *)0x0) goto LAB_140d5a9c7;
LAB_140d5aafe:
    local_60 = (PSRWLOCK)0x0;
    if (ppVar47 == (pas_thread_local_cache *)0x0) {
LAB_140d5ac69:
      ppVar29 = pas_segregated_size_directory_take_first_eligible(ppVar41);
      uVar11 = pas_compact_heap_reservation_base;
      if (ppVar29 == (pas_segregated_view_opaque *)0x0) {
LAB_140d5af26:
        ppVar29 = (pas_segregated_view_opaque *)0x0;
      }
      else {
        uVar28 = (uint)ppVar29 & 7;
        if (uVar28 < 2) {
          plVar49 = (longlong *)((ulonglong)ppVar29 & 0xfffffffffffffff8);
          if (*(char *)((longlong)plVar49 + 0xb) == '\0') {
            uVar37 = (ulonglong)*(uint3 *)(plVar49 + 1);
            if (*plVar49 == 0) {
              cVar4 = *(char *)(pas_compact_heap_reservation_base + 0xd + uVar37 * 8);
              if (cVar4 != '\x01') {
                if (cVar4 != '\x02') {
                  if (cVar4 != '\0') {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                pas_physical_page_sharing_pool_take_for_page_config
                          (0x4000,&bmalloc_heap_config.small_segregated_config.base,
                           pas_lock_is_not_held,(pas_lock **)0x0,0);
                ppVar38 = (pas_segregated_page *)*plVar49;
                if (ppVar38 != (pas_segregated_page *)0x0) goto LAB_140d5aeea;
              }
              pas_physical_memory_transaction_construct
                        ((pas_physical_memory_transaction *)&local_58);
              do {
                if (*plVar49 != 0) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                pas_physical_memory_transaction_begin((pas_physical_memory_transaction *)&local_58);
                AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
                ppVar32 = *(pas_heap **)(uVar11 + 0x18 + uVar37 * 8);
                ppVar10 = (ppVar32->segregated_heap).runtime_config;
                if (!ppVar10->is_part_of_heap) {
                  ppVar32 = (pas_heap *)0x0;
                }
                pvVar33 = pas_fast_megapage_cache_try_allocate
                                    ((pas_megapage_cache *)(*(longlong *)(ppVar10 + 1) + 0x30),
                                     &bmalloc_megapage_table,
                                     &bmalloc_heap_config.small_segregated_config.base,
                                     pas_small_exclusive_segregated_fast_megapage_kind,false,ppVar32
                                     ,(pas_physical_memory_transaction *)&local_58);
                *plVar49 = (longlong)pvVar33;
                ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
                bVar54 = pas_physical_memory_transaction_end
                                   ((pas_physical_memory_transaction *)&local_58);
              } while (!bVar54);
              ppVar38 = (pas_segregated_page *)*plVar49;
              if (ppVar38 == (pas_segregated_page *)0x0) goto LAB_140d5af26;
            }
            else {
              pRVar12 = (PSRWLOCK)(plVar49 + 2);
              AcquireSRWLockExclusive(pRVar12);
              cVar4 = *(char *)(uVar11 + 0xd + uVar37 * 8);
              local_58._0_8_ = pRVar12;
              if (cVar4 != '\x01') {
                if (cVar4 != '\x02') {
                  if (cVar4 != '\0') {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                pas_physical_page_sharing_pool_take_for_page_config
                          (0x4000,&bmalloc_heap_config.small_segregated_config.base,
                           pas_lock_is_not_held,(pas_lock **)&local_58,1);
              }
              pas_page_base_commit_with_boundary
                        ((void *)*plVar49,&bmalloc_heap_config.small_segregated_config.base);
              ReleaseSRWLockExclusive(pRVar12);
              ppVar38 = (pas_segregated_page *)*plVar49;
            }
LAB_140d5aeea:
            pas_segregated_page_construct
                      (ppVar38,(pas_segregated_view_opaque *)((longlong)plVar49 + 1),false,
                       &bmalloc_heap_config.small_segregated_config);
            AcquireSRWLockExclusive((PSRWLOCK)(plVar49 + 3));
            *(undefined1 *)((longlong)plVar49 + 0xb) = 1;
            ReleaseSRWLockExclusive((PSRWLOCK)(plVar49 + 3));
          }
        }
        else {
          if (uVar28 != 4) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
          if (((uint)ppVar29 & 7) != 4) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
          ppVar42 = (pas_segregated_partial_view *)((ulonglong)ppVar29 & 0xfffffffffffffff8);
          uVar37 = (ulonglong)
                   ((uint)(ppVar42->directory).payload[2] * 0x80000 +
                   (uint)*(ushort *)(ppVar42->directory).payload * 8);
          ppVar7 = *(pas_segregated_heap **)(uVar37 + 0x18 + pas_compact_heap_reservation_base);
          ppVar30 = pas_shared_page_directory_by_size_get
                              ((pas_shared_page_directory_by_size *)
                               (*(longlong *)(ppVar7->runtime_config + 1) + 0x90),
                               *(uint *)(uVar37 + 0x20 + pas_compact_heap_reservation_base) &
                               0x7ffffff,&bmalloc_heap_config.small_segregated_config);
          uVar16 = *(uint3 *)(ppVar42->shared_view).payload;
          ppVar39 = (pas_segregated_shared_view *)
                    ((ulonglong)uVar16 * 8 + pas_compact_heap_reservation_base);
          if (ppVar39 != (pas_segregated_shared_view *)0x0 && uVar16 != 0) {
            SRWLock = &ppVar39->commit_lock;
            AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
            if (((ulonglong)ppVar39->shared_handle_or_page_boundary & 1) == 0) {
              ppVar31 = pas_segregated_shared_view_commit_page
                                  (ppVar39,ppVar7,ppVar30,ppVar42,
                                   &bmalloc_heap_config.small_segregated_config);
            }
            else {
              ppVar31 = (pas_segregated_shared_handle *)
                        ((ulonglong)ppVar39->shared_handle_or_page_boundary & 0xfffffffffffffffe);
            }
            if (ppVar31 == (pas_segregated_shared_handle *)0x0) {
              ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
              ppVar29 = (pas_segregated_view_opaque *)0x0;
            }
            else {
              if (!ppVar42->is_attached_to_shared_handle) {
                if ((ulonglong)ppVar42->alloc_bits_size != 0) {
                  puVar13 = ppVar42->alloc_bits;
                  uVar43 = (ulonglong)ppVar42->alloc_bits_offset;
                  uVar37 = ppVar42->alloc_bits_size + uVar43;
                  do {
                    uVar28 = puVar13[uVar43];
                    if (uVar28 != 0) {
                      do {
                        uVar46 = 0;
                        for (uVar15 = uVar28; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000)
                        {
                          uVar46 = uVar46 + 1;
                        }
                        uVar50 = (uVar43 << 5 | (ulonglong)uVar46) >> 4;
                        uVar51 = (ulonglong)ppVar31->partial_views[uVar50].payload;
                        ppVar52 = (pas_segregated_partial_view *)
                                  (pas_compact_heap_reservation_base + uVar51 * 8);
                        if (uVar51 == 0) {
                          ppVar52 = (pas_segregated_partial_view *)0x0;
                        }
                        if ((ppVar52 != (pas_segregated_partial_view *)0x0) && (ppVar52 != ppVar42))
                        {
                    /* WARNING: Does not return */
                          pcVar14 = (code *)invalidInstructionException();
                          (*pcVar14)();
                        }
                        uVar51 = (longlong)ppVar42 - pas_compact_heap_reservation_base;
                        if (pas_compact_heap_reservation_size <= uVar51) {
                    /* WARNING: Does not return */
                          pcVar14 = (code *)invalidInstructionException();
                          (*pcVar14)();
                        }
                        if ((uVar51 & 7) != 0) {
                    /* WARNING: Does not return */
                          pcVar14 = (code *)invalidInstructionException();
                          (*pcVar14)();
                        }
                        if (uVar51 < 8) {
                    /* WARNING: Does not return */
                          pcVar14 = (code *)invalidInstructionException();
                          (*pcVar14)();
                        }
                        ppVar31->partial_views[uVar50].payload = (uint)(uVar51 >> 3);
                        bVar25 = (byte)uVar46 & 0x1f;
                        uVar28 = uVar28 & (-2 << bVar25 | 0xfffffffeU >> 0x20 - bVar25);
                      } while (uVar28 != 0);
                    }
                    uVar43 = uVar43 + 1;
                  } while (uVar43 < uVar37);
                }
                AcquireSRWLockExclusive((PSRWLOCK)&ppVar39->ownership_lock);
                ppVar42->is_attached_to_shared_handle = true;
                ReleaseSRWLockExclusive((PSRWLOCK)&ppVar39->ownership_lock);
              }
              ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
            }
          }
        }
      }
    }
    else {
      uVar28 = ppVar41->view_cache_index;
      if (uVar28 < ppVar47->allocator_index_upper_bound) {
        local_58.allocator =
             (pas_local_allocator_scavenger_data *)(ppVar47->local_allocators + uVar28);
      }
      else if ((uVar28 == 0xffffffff) ||
              (pas_thread_local_cache_get_local_allocator_slow
                         (&local_58,ppVar47,uVar28,pas_lock_is_not_held), (local_58._0_8_ & 1) == 0)
              ) goto LAB_140d5ac69;
      ((pas_local_allocator_scavenger_data *)local_58.allocator)->is_in_use = true;
      if ((((pas_local_allocator_scavenger_data *)local_58.allocator)->encoded_kind_and_location &
          0x7f) != 4) {
LAB_140d5ac4d:
        pas_local_allocator_scavenger_data_commit_if_necessary_slow
                  (local_58.allocator,
                   pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
                   ,pas_local_allocator_view_cache_kind);
LAB_140d5ac5d:
        ((pas_local_allocator_scavenger_data *)local_58.allocator)->should_stop_count = '\0';
        ((pas_local_allocator_scavenger_data *)local_58.allocator)->dirty = true;
        ((pas_local_allocator_scavenger_data *)local_58.allocator)->is_in_use = false;
        goto LAB_140d5ac69;
      }
      bVar25 = ((pas_local_allocator_scavenger_data *)((longlong)local_58.allocator + 4))->
               should_stop_count;
      if (((pas_local_allocator_scavenger_data *)((longlong)local_58.allocator + 4))->dirty ==
          (bool)bVar25) {
        if (((pas_local_allocator_scavenger_data *)((longlong)local_58.allocator + 4))->
            encoded_kind_and_location == '\0') goto LAB_140d5ac4d;
        if (((pas_local_allocator_scavenger_data *)((longlong)local_58.allocator + 4))->
            encoded_kind_and_location == '\x02') goto LAB_140d5ab5a;
        goto LAB_140d5ac5d;
      }
LAB_140d5ab5a:
      ((pas_local_allocator_scavenger_data *)local_58.allocator)->should_stop_count = '\0';
      ((pas_local_allocator_scavenger_data *)local_58.allocator)->dirty = true;
      bVar34 = bVar25 + 1;
      if (((pas_local_allocator_scavenger_data *)((longlong)local_58.allocator + 4))->is_in_use <=
          bVar34) {
        bVar34 = 0;
      }
      ((pas_local_allocator_scavenger_data *)((longlong)local_58.allocator + 4))->should_stop_count
           = bVar34;
      ppVar29 = (pas_segregated_view_opaque *)
                (((uint)(&((pas_local_allocator_scavenger_data *)((longlong)local_58.allocator + 8))
                          ->dirty)[(ulonglong)bVar25 * 3] * 0x80000 +
                 (uint)*(ushort *)
                        (&((pas_local_allocator_scavenger_data *)((longlong)local_58.allocator + 8))
                          ->is_in_use + (ulonglong)bVar25 * 3) * 8) +
                pas_compact_heap_reservation_base);
      ((pas_local_allocator_scavenger_data *)((longlong)local_58.allocator + 4))->
      encoded_kind_and_location = '\x01';
      ((pas_local_allocator_scavenger_data *)local_58.allocator)->is_in_use = false;
    }
    if (ppVar45 != (pas_segregated_view_opaque *)0x0) {
      uVar11 = pas_compact_heap_reservation_base;
      if (local_60 != (PSRWLOCK)ppVar40->lock_ptr) {
        local_60 = (PSRWLOCK)
                   pas_segregated_page_switch_lock_slow
                             (ppVar40,(pas_lock *)local_60,ppVar40->lock_ptr);
        uVar11 = pas_compact_heap_reservation_base;
      }
      pas_compact_heap_reservation_base = uVar11;
      if ((uVar44 & 7) < 2) {
        uVar37 = (ulonglong)ppVar45 & 0xfffffffffffffff8;
        bVar54 = ppVar40->eligibility_notification_has_been_deferred;
        if (bVar54 == true) {
          ppVar40->eligibility_notification_has_been_deferred = false;
        }
        ppVar53 = (pas_segregated_directory *)
                  (((uint)*(byte *)(uVar37 + 10) * 0x80000 + (uint)*(ushort *)(uVar37 + 8) * 8) +
                  pas_compact_heap_reservation_base);
        uVar44 = *(uint *)(uVar37 + 0xc);
        uVar11 = (ppVar40->emptiness).num_non_empty_words_or_live_bytes;
        ppVar40->is_in_use_for_allocation = false;
        if (bVar54 != false) {
          pas_segregated_directory_view_did_become_eligible_at_index(ppVar53,(ulonglong)uVar44);
        }
        if (uVar11 == 0) {
          pas_segregated_directory_view_did_become_empty_at_index(ppVar53,(ulonglong)uVar44);
        }
      }
      else {
        if ((uVar44 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        uVar43 = (ulonglong)ppVar45 & 0xfffffffffffffff8;
        uVar51 = (ulonglong)
                 ((uint)*(byte *)(uVar43 + 10) * 0x80000 + (uint)*(ushort *)(uVar43 + 8) * 8);
        uVar37 = *(ulonglong *)(uVar51 + uVar11);
        if ((uVar37 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        if ((*(byte *)(uVar43 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        bVar25 = *(byte *)(uVar43 + 0xd);
        uVar5 = *(ushort *)(uVar43 + 0xb);
        ppVar53 = *(pas_segregated_directory **)((uVar37 & 0xfffffffffffffffe) + 8);
        if (((PSRWLOCK)ppVar40->lock_ptr != (PSRWLOCK)0x0) &&
           (BVar26 = TryAcquireSRWLockExclusive((PSRWLOCK)ppVar40->lock_ptr), BVar26 != '\0')) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        uVar51 = uVar51 + uVar11;
        if (*(int *)(uVar51 + 0x24) == 1) {
          bVar54 = (ppVar40->emptiness).num_non_empty_words_or_live_bytes == 0;
        }
        else {
          bVar54 = false;
        }
        bVar34 = *(byte *)(uVar43 + 0x11);
        *(byte *)(uVar43 + 0x11) = bVar34 & 0xfc;
        iVar6 = *(int *)(uVar51 + 0x24);
        if ((bVar34 & 2) == 0) {
          if (iVar6 == 0) {
LAB_140d5b556:
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
          *(int *)(uVar51 + 0x24) = iVar6 + -1;
        }
        else {
          if (iVar6 == 0) goto LAB_140d5b556;
          *(int *)(uVar51 + 0x24) = iVar6 + -1;
          if ((*(byte *)(uVar43 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
          pas_segregated_directory_view_did_become_eligible
                    ((pas_segregated_directory *)
                     (((uint)bVar25 * 0x80000 + (uint)uVar5 * 8) + uVar11),
                     (pas_segregated_view_opaque *)(uVar43 | 4));
        }
        if (bVar54) {
          if (*(int *)(uVar51 + 0x24) != 0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
          pas_segregated_directory_view_did_become_empty
                    (ppVar53,(pas_segregated_view_opaque *)(uVar51 | 2));
        }
      }
    }
    if (ppVar29 == (pas_segregated_view_opaque *)0x0) {
      if (local_60 == (PSRWLOCK)0x0) {
        bVar54 = false;
      }
      else {
        ReleaseSRWLockExclusive(local_60);
        local_60 = (PSRWLOCK)0x0;
        bVar54 = false;
      }
      goto LAB_140d5b4aa;
    }
    if (((ulonglong)ppVar29 & 6) == 0) {
      ppVar40 = *(pas_segregated_page **)((ulonglong)ppVar29 & 0xfffffffffffffff8);
      pas_segregated_page_switch_lock_and_rebias_while_ineligible_impl
                (ppVar40,(pas_lock **)&local_60,ppVar48);
      ppVar40->is_in_use_for_allocation = true;
      ppVar40->owner = (pas_segregated_view_opaque *)((ulonglong)ppVar29 | 1);
      if ((ppVar40->emptiness).num_non_empty_words_or_live_bytes == 0) goto LAB_140d5b2f2;
LAB_140d5aa05:
      param_1->payload_end = 0;
      param_1->remaining = 0;
      uVar43 = (ulonglong)(ppVar41->data).payload;
      uVar37 = (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 0xc + uVar43 * 8);
      if (uVar37 < 8) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      uVar44 = *(uint *)(pas_compact_heap_reservation_base + uVar43 * 8);
      uVar46 = uVar44 >> 10;
      uVar28 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar43 * 8);
      lVar35 = uVar37 + pas_compact_heap_reservation_base;
      param_1->current_offset = uVar46;
      param_1->end_offset = ((uVar28 >> 4) - 1 >> 6) + 1;
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
      param_1->page_ish = (longlong)ppVar40->alloc_bits + ((ulonglong)(uVar44 & 0xfffffc00) - 0x2c);
      lVar36 = 0;
      do {
        uVar44 = *(uint *)(lVar35 + lVar36 * 4);
        uVar28 = ppVar40->alloc_bits[lVar36];
        *(uint *)((longlong)param_1->bits + lVar36 * 4) = ~uVar28 & uVar44;
        ppVar40->alloc_bits[lVar36] = uVar28 | uVar44;
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x20);
      param_1->current_word = param_1->bits[uVar46];
      param_1->current_word_is_valid = true;
      (ppVar40->emptiness).num_non_empty_words_or_live_bytes =
           (ulonglong)
           *(uint *)(pas_compact_heap_reservation_base + 8 + (ulonglong)(ppVar41->data).payload * 8)
      ;
    }
    else {
      if (((uint)ppVar29 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      ppVar42 = (pas_segregated_partial_view *)((ulonglong)ppVar29 & 0xfffffffffffffff8);
      uVar16 = *(uint3 *)(ppVar42->shared_view).payload;
      ppVar39 = (pas_segregated_shared_view *)
                ((ulonglong)uVar16 * 8 + pas_compact_heap_reservation_base);
      if (ppVar39 == (pas_segregated_shared_view *)0x0 || uVar16 == 0) {
        if (local_60 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(local_60);
          local_60 = (PSRWLOCK)0x0;
        }
        bVar54 = bmalloc_small_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
                           (param_1,ppVar42,ppVar41);
        goto LAB_140d5b4aa;
      }
      ppVar38 = (pas_segregated_page *)ppVar39->shared_handle_or_page_boundary;
      if (((ulonglong)ppVar38 & 1) == 0) {
        pRVar12 = (PSRWLOCK)ppVar38->lock_ptr;
        ppVar40 = ppVar38;
      }
      else {
        pRVar12 = (PSRWLOCK)
                  (*(pas_segregated_page **)((ulonglong)ppVar38 & 0xfffffffffffffffe))->lock_ptr;
        ppVar40 = *(pas_segregated_page **)((ulonglong)ppVar38 & 0xfffffffffffffffe);
      }
      if (local_60 != pRVar12) {
        local_60 = (PSRWLOCK)
                   pas_segregated_page_switch_lock_slow
                             (ppVar40,(pas_lock *)local_60,(pas_lock *)pRVar12);
        ppVar38 = (pas_segregated_page *)ppVar39->shared_handle_or_page_boundary;
      }
      if (((ulonglong)ppVar38 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      pas_segregated_partial_view_set_is_in_use_for_allocation
                (ppVar42,ppVar39,
                 (pas_segregated_shared_handle *)((ulonglong)ppVar38 & 0xfffffffffffffffe));
LAB_140d5b3cc:
      param_1->payload_end = 0;
      param_1->remaining = 0;
      bVar25 = ppVar42->alloc_bits_offset;
      uVar51 = (ulonglong)bVar25;
      bVar34 = ppVar42->alloc_bits_size;
      puVar13 = ppVar42->alloc_bits;
      param_1->view = (pas_segregated_view_opaque *)((ulonglong)ppVar42 | 4);
      uVar44 = (uint)bVar34 + (uint)bVar25 + 1;
      uVar37 = (ulonglong)((uint)bVar34 + (uint)bVar25);
      bVar34 = bVar25 >> 1;
      param_1->current_offset = (uint)bVar34;
      param_1->end_offset = uVar44 >> 1 & 0xff;
      uVar43 = 0;
      memset(param_1->bits + (uint)bVar34,0,
             (ulonglong)((uVar44 & 0xfffffffe) - (bVar25 & 0xfffffffe)) << 2);
      param_1->page_ish = (ulonglong)bVar34 * 0x400 + (longlong)ppVar40;
      if (uVar51 < uVar37) {
        do {
          uVar44 = puVar13[uVar51];
          uVar28 = ppVar40->alloc_bits[uVar51];
          *(uint *)((longlong)param_1->bits + uVar51 * 4) = ~uVar28 & uVar44;
          uVar46 = (int)uVar43 + (uint)(uVar44 != 0 && uVar28 == 0);
          uVar43 = (ulonglong)uVar46;
          ppVar40->alloc_bits[uVar51] = uVar28 | uVar44;
          uVar51 = uVar51 + 1;
        } while (uVar37 != uVar51);
        uVar43 = (ulonglong)uVar46;
      }
      param_1->current_word = param_1->bits[(uint)bVar34];
      param_1->current_word_is_valid = true;
      puVar1 = &(ppVar40->emptiness).num_non_empty_words_or_live_bytes;
      *puVar1 = *puVar1 + uVar43;
    }
  }
  else {
    ppVar48 = (pas_thread_local_cache_node *)0x0;
    ppVar47 = (pas_thread_local_cache *)0x0;
    if (ppVar45 == (pas_segregated_view_opaque *)0x0) goto LAB_140d5aafe;
LAB_140d5a9c7:
    local_60 = (PSRWLOCK)0x0;
    if ((uVar44 & 7) == 4) {
      ppVar42 = (pas_segregated_partial_view *)((ulonglong)ppVar45 & 0xfffffffffffffff8);
      bVar25 = ppVar42->field_0x11;
      if (!ppVar42->eligibility_has_been_noted) goto LAB_140d5aafe;
      if (ppVar40->lock_ptr != (pas_lock *)0x0) {
        local_60 = (PSRWLOCK)
                   pas_segregated_page_switch_lock_slow(ppVar40,(pas_lock *)0x0,ppVar40->lock_ptr);
        bVar25 = ppVar42->field_0x11;
      }
      ppVar42->field_0x11 = bVar25 & 0xf9;
      goto LAB_140d5b3cc;
    }
    if (((ulonglong)ppVar45 & 7) != 0) goto LAB_140d5aafe;
    pas_segregated_page_switch_lock_and_rebias_while_ineligible_impl
              (ppVar40,(pas_lock **)&local_60,ppVar48);
    ppVar40->owner = (pas_segregated_view_opaque *)((ulonglong)ppVar45 | 1);
    ppVar40->eligibility_notification_has_been_deferred = false;
    if ((ppVar40->emptiness).num_non_empty_words_or_live_bytes != 0) goto LAB_140d5aa05;
LAB_140d5b2f2:
    uVar11 = pas_compact_heap_reservation_base;
    uVar37 = (ulonglong)(ppVar41->data).payload;
    uVar44 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar37 * 8);
    iVar6 = *(int *)(pas_compact_heap_reservation_base + uVar37 * 8);
    (ppVar40->emptiness).num_non_empty_words_or_live_bytes =
         (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 8 + uVar37 * 8);
    param_1->payload_end = (longlong)ppVar40->alloc_bits + ((ulonglong)uVar44 - 0x2c);
    param_1->remaining = uVar44 - iVar6;
    param_1->current_offset = 0;
    param_1->end_offset = 0;
    param_1->current_word = 0;
    param_1->page_ish = (ulong64)ppVar40;
    uVar24 = pas_compact_heap_reservation_base;
    uVar37 = (ulonglong)*(uint *)(uVar11 + 0xc + uVar37 * 8);
    if (uVar37 < 8) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)invalidInstructionException();
      (*pcVar14)();
    }
    puVar3 = (undefined8 *)(pas_compact_heap_reservation_base + 0x70 + uVar37);
    uVar17 = puVar3[1];
    *(undefined8 *)((longlong)&ppVar40[3].lock_ptr + 4) = *puVar3;
    *(undefined8 *)((longlong)&ppVar40[3].emptiness.use_epoch + 4) = uVar17;
    puVar3 = (undefined8 *)(uVar24 + 0x60 + uVar37);
    uVar17 = puVar3[1];
    *(undefined8 *)ppVar40[2].alloc_bits = *puVar3;
    *(undefined8 *)&ppVar40[3].object_size = uVar17;
    puVar3 = (undefined8 *)(uVar24 + 0x50 + uVar37);
    uVar17 = puVar3[1];
    *(undefined8 *)((longlong)&ppVar40[2].emptiness.num_non_empty_words_or_live_bytes + 4) = *puVar3
    ;
    *(undefined8 *)((longlong)&ppVar40[2].owner + 4) = uVar17;
    puVar3 = (undefined8 *)(uVar24 + 0x40 + uVar37);
    uVar17 = puVar3[1];
    *(undefined8 *)((longlong)&ppVar40[2].lock_ptr + 4) = *puVar3;
    *(undefined8 *)((longlong)&ppVar40[2].emptiness.use_epoch + 4) = uVar17;
    uVar17 = *(undefined8 *)(uVar24 + uVar37);
    uVar18 = ((undefined8 *)(uVar24 + uVar37))[1];
    puVar3 = (undefined8 *)(uVar24 + 0x10 + uVar37);
    uVar19 = *puVar3;
    uVar20 = puVar3[1];
    puVar3 = (undefined8 *)(uVar24 + 0x20 + uVar37);
    uVar21 = *puVar3;
    uVar22 = puVar3[1];
    puVar3 = (undefined8 *)(uVar24 + 0x30 + uVar37);
    uVar23 = puVar3[1];
    *(undefined8 *)ppVar40[1].alloc_bits = *puVar3;
    *(undefined8 *)&ppVar40[2].object_size = uVar23;
    *(undefined8 *)((longlong)&ppVar40[1].emptiness.num_non_empty_words_or_live_bytes + 4) = uVar21;
    *(undefined8 *)((longlong)&ppVar40[1].owner + 4) = uVar22;
    *(undefined8 *)((longlong)&ppVar40[1].lock_ptr + 4) = uVar19;
    *(undefined8 *)((longlong)&ppVar40[1].emptiness.use_epoch + 4) = uVar20;
    *(undefined8 *)ppVar40->alloc_bits = uVar17;
    *(undefined8 *)&ppVar40[1].object_size = uVar18;
  }
  bVar54 = true;
  if (local_60 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_60);
    local_60 = (PSRWLOCK)0x0;
  }
LAB_140d5b4aa:
  if ((local_48 ^ (ulonglong)auStackY_c8) != __security_cookie.value) {
    pcVar14 = (code *)swi(3);
    uVar27 = (*pcVar14)();
    return (bool)uVar27;
  }
  return bVar54;
}

// bmalloc_medium_segregated_page_header_for_boundary @ 140d5c7d0

pas_page_base * __cdecl bmalloc_medium_segregated_page_header_for_boundary(void *param_1)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (bmalloc_medium_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
    return (pas_page_base *)0x0;
  }
  uVar2 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
  uVar2 = uVar2 * 0x20 + (uVar2 ^ 0xdeadbeef);
  uVar2 = uVar2 >> 0xb ^ uVar2;
  uVar3 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar2);
  pvVar1 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].low;
  while( true ) {
    if (pvVar1 == param_1) {
      return (pas_page_base *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].high;
    }
    uVar2 = uVar2 + 1;
    if (pvVar1 == (void *)0xffffffffffffffff) break;
    uVar3 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar2);
    pvVar1 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].low;
  }
  return (pas_page_base *)0x0;
}

// bmalloc_medium_segregated_boundary_for_page_header @ 140d5c870

void * __cdecl bmalloc_medium_segregated_boundary_for_page_header(pas_page_base *param_1)

{
  return *(void **)(param_1 + -0x10);
}

// bmalloc_medium_segregated_page_header_for_boundary_remote @ 140d5c880

pas_page_base * __cdecl
bmalloc_medium_segregated_page_header_for_boundary_remote(pas_enumerator *param_1,void *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  plVar2 = param_1->heap_config_datas[2];
  if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    uVar6 = (uint)((ulonglong)param_2 >> 4) & 0xfffffff ^ (uint)param_2;
    uVar7 = (uint)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar7 >> 4 ^ uVar7;
    uVar6 = uVar7 * 0x20 + (uVar7 ^ 0xdeadbeef) ^ uVar6 * 0x20 + (uVar6 ^ 0xdeadbeef);
    uVar6 = uVar6 >> 0xb ^ uVar6;
    do {
      lVar8 = (ulonglong)(uVar6 & *(uint *)((longlong)plVar2 + 0xc)) * 0x10;
      lVar1 = lVar3 + lVar8;
      pvVar4 = *(void **)(lVar3 + lVar8);
      if (pvVar4 == (void *)0xffffffffffffffff) {
        if (*(longlong *)(lVar1 + 8) != 1) {
          return (pas_page_base *)0x0;
        }
      }
      else if (pvVar4 == param_2) {
        return *(pas_page_base **)(lVar1 + 8);
      }
      uVar6 = uVar6 + 1;
    } while( true );
  }
  return (pas_page_base *)0x0;
}

// bmalloc_medium_segregated_create_page_header @ 140d5c930

pas_page_base * __cdecl
bmalloc_medium_segregated_create_page_header
          (void *param_1,pas_page_kind param_2,pas_lock_hold_mode param_3)

{
  ulong64 uVar1;
  pas_page_base *ppVar2;
  
  if (param_3 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  uVar1 = pas_page_base_header_size(&bmalloc_heap_config.medium_segregated_config.base,param_2);
  ppVar2 = pas_page_header_table_add(&bmalloc_medium_page_header_table,0x20000,uVar1,param_1);
  if (param_3 == pas_lock_is_not_held) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  return ppVar2;
}

// bmalloc_medium_segregated_destroy_page_header @ 140d5c9a0

void __cdecl
bmalloc_medium_segregated_destroy_page_header(pas_page_base *param_1,pas_lock_hold_mode param_2)

{
  if (param_2 != pas_lock_is_not_held) {
    pas_page_header_table_remove(&bmalloc_medium_page_header_table,0x20000,param_1);
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  pas_page_header_table_remove(&bmalloc_medium_page_header_table,0x20000,param_1);
                    /* WARNING: Could not recover jumptable at 0x000140d5c9f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  return;
}

// bmalloc_heap_config_allocate_medium_segregated_page @ 140d5ca10

void * __cdecl
bmalloc_heap_config_allocate_medium_segregated_page
          (pas_segregated_heap *param_1,pas_physical_memory_transaction *param_2,
          pas_segregated_page_role param_3)

{
  void *pvVar1;
  pas_heap *ppVar2;
  
  ppVar2 = (pas_heap *)0x0;
  if (param_1->runtime_config->is_part_of_heap) {
    ppVar2 = (pas_heap *)param_1;
  }
  pvVar1 = pas_medium_megapage_cache_try_allocate
                     ((pas_megapage_cache *)(*(longlong *)(param_1->runtime_config + 1) + 0x100),
                      &bmalloc_heap_config.medium_segregated_config.base,false,ppVar2,param_2);
  return pvVar1;
}

// bmalloc_medium_segregated_page_config_select_shared_page_directory @ 140d5ca50

pas_segregated_shared_page_directory * __cdecl
bmalloc_medium_segregated_page_config_select_shared_page_directory
          (pas_segregated_heap *param_1,pas_segregated_size_directory *param_2)

{
  pas_segregated_shared_page_directory *ppVar1;
  
  ppVar1 = pas_shared_page_directory_by_size_get
                     ((pas_shared_page_directory_by_size *)
                      (*(longlong *)(param_1->runtime_config + 1) + 0x160),param_2->object_size,
                      &bmalloc_heap_config.medium_segregated_config);
  return ppVar1;
}

// bmalloc_medium_segregated_page_config_specialized_local_allocator_try_allocate_in_primordial_partial_view @ 140d5ca80

pas_allocation_result * __cdecl
bmalloc_medium_segregated_page_config_specialized_local_allocator_try_allocate_in_primordial_partial_view
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1)

{
  ulong64 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong64 uVar8;
  bool bVar9;
  code *pcVar10;
  uint3 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  bool bVar69;
  bool bVar70;
  bool bVar71;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  bool bVar76;
  bool bVar77;
  bool bVar78;
  bool bVar79;
  bool bVar80;
  bool bVar81;
  bool bVar82;
  bool bVar83;
  bool bVar84;
  bool bVar85;
  bool bVar86;
  bool bVar87;
  bool bVar88;
  bool bVar89;
  bool bVar90;
  bool bVar91;
  bool bVar92;
  bool bVar93;
  bool bVar94;
  bool bVar95;
  bool bVar96;
  bool bVar97;
  bool bVar98;
  bool bVar99;
  void *_Dst;
  PSRWLOCK SRWLock;
  char cVar100;
  uint uVar101;
  uint uVar102;
  ulonglong uVar103;
  uint uVar104;
  undefined4 uVar105;
  ulonglong uVar106;
  pas_segregated_page *ppVar107;
  ulonglong uVar108;
  longlong lVar109;
  ulonglong uVar110;
  uint uVar111;
  uint uVar112;
  int iVar113;
  ulonglong uVar114;
  undefined8 *puVar115;
  ulonglong uVar116;
  bool bVar117;
  bool bVar118;
  bool bVar119;
  bool bVar120;
  bool bVar121;
  bool bVar122;
  
  uVar8 = pas_compact_heap_reservation_base;
  if (bmalloc_medium_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
    ppVar107 = (pas_segregated_page *)0x0;
  }
  else {
    uVar103 = param_1->page_ish;
    uVar111 = (uint)(uVar103 >> 0x15) & 0xfffffff ^ (uint)(uVar103 >> 0x11);
    uVar111 = uVar111 * 0x20 + (uVar111 ^ 0xdeadbeef);
    uVar111 = uVar111 >> 0xb ^ uVar111;
    uVar114 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar111);
    uVar110 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar114].low;
    if (uVar110 != uVar103) {
      ppVar107 = (pas_segregated_page *)0x0;
      do {
        uVar111 = uVar111 + 1;
        if (uVar110 == 0xffffffffffffffff) goto LAB_140d5cb2c;
        uVar114 = (ulonglong)
                  (uVar111 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
        uVar110 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar114].low;
      } while (uVar110 != uVar103);
    }
    ppVar107 = (pas_segregated_page *)
               (bmalloc_medium_page_header_table.hashtable.table)->array[uVar114].high;
  }
LAB_140d5cb2c:
  if (((uint)param_1->view & 7) != 4) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  uVar103 = (ulonglong)param_1->view & 0xfffffffffffffff8;
  uVar11 = *(uint3 *)(uVar103 + 8);
  if (ppVar107->lock_ptr == (pas_lock *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
    bVar3 = param_1->alignment_shift;
  }
  else {
    SRWLock = (PSRWLOCK)
              pas_segregated_page_switch_lock_slow(ppVar107,(pas_lock *)0x0,ppVar107->lock_ptr);
    bVar3 = param_1->alignment_shift;
  }
  if (0x1f < bVar3) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  uVar114 = (ulonglong)uVar11;
  uVar111 = param_1->object_size;
  lVar109 = 1L << (bVar3 & 0x3f);
  uVar110 = -lVar109 & lVar109 + 0xffffffff + (ulonglong)*(uint *)(uVar8 + 0x20 + uVar114 * 8);
  uVar7 = (uint)uVar110;
  uVar101 = uVar111 + uVar7;
  if (uVar101 < 0x20001) {
    uVar102 = uVar101;
    if ((uVar101 ^ uVar7) < 0x1000) {
      uVar112 = uVar7 + uVar111 * 2;
      iVar113 = 1;
      do {
        if (0x20000 < uVar112) {
          uVar101 = 0x20000;
          if (iVar113 != 0) goto LAB_140d5ce49;
          goto LAB_140d5cbb4;
        }
        uVar101 = uVar102 + uVar111;
        iVar113 = iVar113 + 1;
        uVar104 = uVar112 ^ uVar7;
        uVar112 = uVar112 + uVar111;
        uVar102 = uVar101;
      } while (uVar104 < 0x1000);
      if (iVar113 == 0) goto LAB_140d5cbb4;
    }
LAB_140d5ce49:
    *(uint *)(uVar8 + 0x20 + uVar114 * 8) = uVar101;
    uVar114 = *(ulonglong *)(uVar8 + uVar114 * 8);
    if ((uVar114 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    uVar8 = param_1->page_ish;
    uVar111 = param_1->object_size;
    param_1->payload_end = uVar102 + uVar8;
    param_1->remaining = (uVar102 - uVar111) - uVar7;
    if (uVar7 < uVar102) {
      uVar114 = uVar114 & 0xfffffffffffffffe;
      if (uVar111 == 0) {
        uVar111 = 1 << ((byte)(uVar110 >> 9) & 0x1f);
        uVar110 = uVar110 >> 0xe & 0x3ffff;
        uVar108 = (ulonglong)(uint)((int)uVar110 * 4);
        do {
          puVar2 = (uint *)((longlong)param_1->bits + uVar108);
          *puVar2 = *puVar2 | uVar111;
          uVar101 = *(uint *)((longlong)ppVar107->alloc_bits + uVar108);
          if (uVar101 == 0) {
            puVar1 = &(ppVar107->emptiness).num_non_empty_words_or_live_bytes;
            *puVar1 = *puVar1 + 1;
          }
          uVar116 = (ulonglong)*(uint *)(uVar114 + 0x14 + (ulonglong)(uVar7 >> 0xc) * 4);
          uVar106 = pas_compact_heap_reservation_base + uVar116 * 8;
          if (uVar116 == 0) {
            uVar106 = 0;
          }
          if ((uVar106 != 0) && (uVar106 != uVar103)) goto LAB_140d5d0bc;
          if (uVar103 == 0) {
            uVar105 = 0;
          }
          else {
            uVar106 = uVar103 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar106) goto LAB_140d5d0be;
            if ((uVar106 & 7) != 0) goto LAB_140d5d0c0;
            if (uVar106 < 8) goto LAB_140d5d0c2;
            uVar105 = (undefined4)(uVar106 >> 3);
          }
          *(undefined4 *)(uVar114 + 0x14 + (ulonglong)(uVar7 >> 0xc) * 4) = uVar105;
          ppVar107->alloc_bits[uVar110] = uVar101 | uVar111;
        } while( true );
      }
      uVar108 = uVar110 & 0xffffffff;
      do {
        uVar112 = (uint)uVar108;
        uVar101 = 1 << ((byte)(uVar108 >> 9) & 0x1f);
        uVar106 = (ulonglong)(uint)((int)(uVar108 >> 0xe) * 4);
        puVar2 = (uint *)((longlong)param_1->bits + uVar106);
        *puVar2 = *puVar2 | uVar101;
        uVar7 = *(uint *)((longlong)ppVar107->alloc_bits + uVar106);
        if (uVar7 == 0) {
          puVar1 = &(ppVar107->emptiness).num_non_empty_words_or_live_bytes;
          *puVar1 = *puVar1 + 1;
        }
        if (0x1ffff < uVar112) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        uVar116 = (ulonglong)*(uint *)(uVar114 + 0x14 + (uVar108 >> 0xc) * 4);
        uVar106 = pas_compact_heap_reservation_base + uVar116 * 8;
        if (uVar116 == 0) {
          uVar106 = 0;
        }
        if ((uVar106 != 0) && (uVar106 != uVar103)) {
LAB_140d5d0bc:
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        if (uVar103 == 0) {
          uVar105 = 0;
        }
        else {
          uVar106 = uVar103 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar106) {
LAB_140d5d0be:
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          if ((uVar106 & 7) != 0) {
LAB_140d5d0c0:
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          if (uVar106 < 8) {
LAB_140d5d0c2:
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          uVar105 = (undefined4)(uVar106 >> 3);
        }
        *(undefined4 *)(uVar114 + 0x14 + (uVar108 >> 0xc) * 4) = uVar105;
        ppVar107->alloc_bits[uVar108 >> 0xe] = uVar7 | uVar101;
        uVar108 = (ulonglong)(uVar112 + uVar111);
        if (0x1ffff < uVar108 - 1) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        uVar106 = uVar108 - 1 >> 0xc;
        if (uVar112 >> 0xc <= uVar106) {
          uVar116 = (ulonglong)(uVar112 >> 0xc) - 1;
          do {
            cVar100 = *(char *)((longlong)ppVar107[1].alloc_bits + (uVar116 - 0xf));
            if (cVar100 == -1) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)invalidInstructionException();
              (*pcVar10)();
            }
            cVar100 = cVar100 + '\x01';
            if (cVar100 == -1) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)invalidInstructionException();
              (*pcVar10)();
            }
            *(char *)((longlong)ppVar107[1].alloc_bits + (uVar116 - 0xf)) = cVar100;
            uVar116 = uVar116 + 1;
          } while (uVar116 < uVar106);
        }
      } while (uVar112 + uVar111 < uVar102);
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    __return_storage_ptr__->begin = uVar8 + (uVar110 & 0xffffffff);
    __return_storage_ptr__->did_succeed = true;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
  }
  else {
LAB_140d5cbb4:
    if ((0xd < (uint)(int)(char)param_1->config_kind) ||
       ((0x2aa8U >> ((int)(char)param_1->config_kind & 0x1fU) & 1) == 0)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if (((uint)param_1->view & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    bVar117 = (int)param_1->bits[0] == 0;
    bVar9 = !bVar117;
    iVar113 = *(int *)((longlong)param_1->bits + 4);
    uVar103 = 1;
    if (!bVar117) {
      uVar103 = -(ulonglong)bVar117;
    }
    bVar118 = iVar113 != 0;
    if (!bVar118) {
      uVar103 = -(ulonglong)bVar117;
    }
    bVar117 = param_1[1].scavenger_data != (pas_local_allocator_scavenger_data)0x0;
    if (bVar117 && (!bVar118 && !bVar9)) {
      uVar103 = 2;
    }
    bVar12 = !bVar118;
    bVar13 = !bVar9;
    bVar119 = *(int *)&param_1[1].alignment_shift != 0;
    if (bVar119 && ((!bVar117 || (!bVar12 || !bVar13)) && (!bVar118 && !bVar9))) {
      uVar103 = 3;
    }
    bVar14 = !bVar117;
    bVar17 = !bVar12;
    bVar18 = !bVar13;
    bVar15 = !bVar118;
    bVar16 = !bVar9;
    bVar120 = *(int *)&param_1[1].config_kind != 0;
    if (bVar120 &&
        ((!bVar119 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
        ((!bVar117 || (!bVar12 || !bVar13)) && (!bVar118 && !bVar9)))) {
      uVar103 = 4;
    }
    bVar19 = !bVar119;
    bVar23 = !bVar14;
    bVar28 = !bVar17;
    bVar29 = !bVar18;
    bVar24 = !bVar15;
    bVar25 = !bVar16;
    bVar20 = !bVar117;
    bVar26 = !bVar12;
    bVar27 = !bVar13;
    bVar21 = !bVar118;
    bVar22 = !bVar9;
    iVar4._0_1_ = param_1[1].current_word_is_valid;
    iVar4._1_1_ = param_1[1].is_stashing_alloc_bits;
    iVar4._2_2_ = *(undefined2 *)&param_1[1].field_0xe;
    bVar121 = iVar4 != 0;
    if (bVar121 &&
        ((!bVar120 ||
         (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
         (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
        ((!bVar119 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
        ((!bVar117 || (!bVar12 || !bVar13)) && (!bVar118 && !bVar9))))) {
      uVar103 = 5;
    }
    bVar30 = !bVar120;
    bVar32 = !bVar19;
    bVar44 = !bVar23;
    bVar51 = !bVar28;
    bVar52 = !bVar29;
    bVar45 = !bVar24;
    bVar46 = !bVar25;
    bVar36 = !bVar20;
    bVar47 = !bVar26;
    bVar48 = !bVar27;
    bVar37 = !bVar21;
    bVar38 = !bVar22;
    bVar31 = !bVar119;
    bVar39 = !bVar14;
    bVar49 = !bVar17;
    bVar50 = !bVar18;
    bVar40 = !bVar15;
    bVar41 = !bVar16;
    bVar33 = !bVar117;
    bVar42 = !bVar12;
    bVar43 = !bVar13;
    bVar34 = !bVar118;
    bVar35 = !bVar9;
    iVar5 = (int)param_1[1].payload_end;
    bVar122 = iVar5 != 0;
    if (bVar122 &&
        ((!bVar121 ||
         (!bVar30 &&
          ((!bVar32 || (!bVar44 && (!bVar51 && !bVar52) || (!bVar45 || !bVar46))) &&
          ((!bVar36 || (!bVar47 || !bVar48)) && (!bVar37 && !bVar38))) ||
         (!bVar31 && ((!bVar39 || (!bVar49 || !bVar50)) && (!bVar40 && !bVar41)) ||
         (!bVar33 && (!bVar42 && !bVar43) || (!bVar34 || !bVar35))))) &&
        ((!bVar120 ||
         (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
         (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
        ((!bVar119 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
        ((!bVar117 || (!bVar12 || !bVar13)) && (!bVar118 && !bVar9)))))) {
      uVar103 = 6;
    }
    bVar53 = !bVar121;
    bVar55 = !bVar30;
    bVar62 = !bVar32;
    bVar89 = !bVar44;
    bVar98 = !bVar51;
    bVar99 = !bVar52;
    bVar90 = !bVar45;
    bVar91 = !bVar46;
    bVar74 = !bVar36;
    bVar92 = !bVar47;
    bVar93 = !bVar48;
    bVar75 = !bVar37;
    bVar76 = !bVar38;
    bVar57 = !bVar31;
    bVar77 = !bVar39;
    bVar94 = !bVar49;
    bVar95 = !bVar50;
    bVar78 = !bVar40;
    bVar79 = !bVar41;
    bVar63 = !bVar33;
    bVar80 = !bVar42;
    bVar81 = !bVar43;
    bVar64 = !bVar34;
    bVar65 = !bVar35;
    bVar54 = !bVar120;
    bVar58 = !bVar19;
    bVar82 = !bVar23;
    bVar96 = !bVar28;
    bVar97 = !bVar29;
    bVar83 = !bVar24;
    bVar84 = !bVar25;
    bVar66 = !bVar20;
    bVar85 = !bVar26;
    bVar86 = !bVar27;
    bVar67 = !bVar21;
    bVar68 = !bVar22;
    bVar56 = !bVar119;
    bVar69 = !bVar14;
    bVar87 = !bVar17;
    bVar88 = !bVar18;
    bVar70 = !bVar15;
    bVar71 = !bVar16;
    bVar59 = !bVar117;
    bVar72 = !bVar12;
    bVar73 = !bVar13;
    bVar60 = !bVar118;
    bVar61 = !bVar9;
    iVar6 = *(int *)((longlong)&param_1[1].payload_end + 4);
    if (iVar6 != 0 &&
        ((!bVar122 ||
         (!bVar53 &&
          ((!bVar55 ||
           (!bVar62 && ((!bVar89 || (!bVar98 || !bVar99)) && (!bVar90 && !bVar91)) ||
           (!bVar74 && (!bVar92 && !bVar93) || (!bVar75 || !bVar76)))) &&
          ((!bVar57 || (!bVar77 && (!bVar94 && !bVar95) || (!bVar78 || !bVar79))) &&
          ((!bVar63 || (!bVar80 || !bVar81)) && (!bVar64 && !bVar65)))) ||
         (!bVar54 &&
          ((!bVar58 || (!bVar82 && (!bVar96 && !bVar97) || (!bVar83 || !bVar84))) &&
          ((!bVar66 || (!bVar85 || !bVar86)) && (!bVar67 && !bVar68))) ||
         (!bVar56 && ((!bVar69 || (!bVar87 || !bVar88)) && (!bVar70 && !bVar71)) ||
         (!bVar59 && (!bVar72 && !bVar73) || (!bVar60 || !bVar61)))))) &&
        ((!bVar121 ||
         (!bVar30 &&
          ((!bVar32 || (!bVar44 && (!bVar51 && !bVar52) || (!bVar45 || !bVar46))) &&
          ((!bVar36 || (!bVar47 || !bVar48)) && (!bVar37 && !bVar38))) ||
         (!bVar31 && ((!bVar39 || (!bVar49 || !bVar50)) && (!bVar40 && !bVar41)) ||
         (!bVar33 && (!bVar42 && !bVar43) || (!bVar34 || !bVar35))))) &&
        ((!bVar120 ||
         (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
         (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
        ((!bVar119 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
        ((!bVar117 || (!bVar12 || !bVar13)) && (!bVar118 && !bVar9))))))) {
      uVar103 = 7;
    }
    if ((iVar6 == 0 ||
        (bVar122 &&
         ((bVar53 ||
          (bVar55 && ((bVar62 || (bVar89 && (bVar98 && bVar99) || (bVar90 || bVar91))) &&
                     ((bVar74 || (bVar92 || bVar93)) && (bVar75 && bVar76))) ||
          (bVar57 && ((bVar77 || (bVar94 || bVar95)) && (bVar78 && bVar79)) ||
          (bVar63 && (bVar80 && bVar81) || (bVar64 || bVar65))))) &&
         ((bVar54 ||
          (bVar58 && ((bVar82 || (bVar96 || bVar97)) && (bVar83 && bVar84)) ||
          (bVar66 && (bVar85 && bVar86) || (bVar67 || bVar68)))) &&
         ((bVar56 || (bVar69 && (bVar87 && bVar88) || (bVar70 || bVar71))) &&
         ((bVar59 || (bVar72 || bVar73)) && (bVar60 && bVar61))))) ||
        (bVar121 &&
         ((bVar30 ||
          (bVar32 && ((bVar44 || (bVar51 || bVar52)) && (bVar45 && bVar46)) ||
          (bVar36 && (bVar47 && bVar48) || (bVar37 || bVar38)))) &&
         ((bVar31 || (bVar39 && (bVar49 && bVar50) || (bVar40 || bVar41))) &&
         ((bVar33 || (bVar42 || bVar43)) && (bVar34 && bVar35)))) ||
        (bVar120 &&
         ((bVar19 || (bVar23 && (bVar28 && bVar29) || (bVar24 || bVar25))) &&
         ((bVar20 || (bVar26 || bVar27)) && (bVar21 && bVar22))) ||
        (bVar119 && ((bVar14 || (bVar17 || bVar18)) && (bVar15 && bVar16)) ||
        (bVar117 && (bVar12 && bVar13) || (bVar118 || bVar9))))))) == true &&
        ((!bVar122 ||
         (!bVar53 &&
          ((!bVar55 ||
           (!bVar62 && ((!bVar89 || (!bVar98 || !bVar99)) && (!bVar90 && !bVar91)) ||
           (!bVar74 && (!bVar92 && !bVar93) || (!bVar75 || !bVar76)))) &&
          ((!bVar57 || (!bVar77 && (!bVar94 && !bVar95) || (!bVar78 || !bVar79))) &&
          ((!bVar63 || (!bVar80 || !bVar81)) && (!bVar64 && !bVar65)))) ||
         (!bVar54 &&
          ((!bVar58 || (!bVar82 && (!bVar96 && !bVar97) || (!bVar83 || !bVar84))) &&
          ((!bVar66 || (!bVar85 || !bVar86)) && (!bVar67 && !bVar68))) ||
         (!bVar56 && ((!bVar69 || (!bVar87 || !bVar88)) && (!bVar70 && !bVar71)) ||
         (!bVar59 && (!bVar72 && !bVar73) || (!bVar60 || !bVar61)))))) &&
        ((!bVar121 ||
         (!bVar30 &&
          ((!bVar32 || (!bVar44 && (!bVar51 && !bVar52) || (!bVar45 || !bVar46))) &&
          ((!bVar36 || (!bVar47 || !bVar48)) && (!bVar37 && !bVar38))) ||
         (!bVar31 && ((!bVar39 || (!bVar49 || !bVar50)) && (!bVar40 && !bVar41)) ||
         (!bVar33 && (!bVar42 && !bVar43) || (!bVar34 || !bVar35))))) &&
        ((!bVar120 ||
         (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
         (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
        ((!bVar119 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
        ((!bVar117 || (!bVar12 || !bVar13)) && (!bVar118 && !bVar9))))))) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    uVar110 = (ulonglong)bVar9;
    if (iVar113 != 0) {
      uVar110 = 2;
    }
    uVar114 = 3;
    if (param_1[1].scavenger_data == (pas_local_allocator_scavenger_data)0x0) {
      uVar114 = uVar110;
    }
    uVar110 = 4;
    if (*(int *)&param_1[1].alignment_shift == 0) {
      uVar110 = uVar114;
    }
    uVar114 = 5;
    if (*(int *)&param_1[1].config_kind == 0) {
      uVar114 = uVar110;
    }
    uVar110 = 6;
    if (iVar4 == 0) {
      uVar110 = uVar114;
    }
    uVar114 = 7;
    if (iVar5 == 0) {
      uVar114 = uVar110;
    }
    uVar110 = 8;
    if (iVar6 == 0) {
      uVar110 = uVar114;
    }
    uVar110 = uVar110 - uVar103;
    if (uVar110 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if (0xff < uVar110) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    puVar115 = (undefined8 *)((ulonglong)param_1->view & 0xfffffffffffffff8);
    *(char *)((longlong)puVar115 + 0xf) = (char)uVar110;
    if (0xff < uVar103) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    *(char *)(puVar115 + 2) = (char)uVar103;
    _Dst = pas_immortal_heap_allocate_with_manual_alignment
                     (uVar110 * 4,4,"pas_segregated_partial_view/alloc_bits",pas_object_allocation);
    memcpy(_Dst,(void *)((longlong)param_1->bits + uVar103 * 4),uVar110 * 4);
    *puVar115 = (void *)((longlong)_Dst + uVar103 * -4);
    ReleaseSRWLockExclusive((PSRWLOCK)ppVar107->lock_ptr);
    __return_storage_ptr__->did_succeed = false;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
    __return_storage_ptr__->begin = 0;
  }
  return __return_storage_ptr__;
}

// bmalloc_medium_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view @ 140d5d0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
bmalloc_medium_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
          (pas_local_allocator *param_1,pas_segregated_partial_view *param_2,
          pas_segregated_size_directory *param_3)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  uint *puVar3;
  byte bVar4;
  void *pvVar5;
  pas_segregated_view_opaque *ppVar6;
  code *pcVar7;
  uint3 uVar8;
  undefined1 uVar9;
  pas_segregated_shared_page_directory *ppVar10;
  pas_segregated_shared_view *ppVar11;
  pas_segregated_shared_handle *ppVar12;
  char cVar13;
  uint uVar14;
  pas_segregated_page *ppVar15;
  int iVar16;
  pas_lock *SRWLock;
  pas_segregated_partial_view *ppVar17;
  ulonglong uVar18;
  bool bVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  void *pvVar26;
  uint uVar27;
  longlong lVar28;
  pas_segregated_heap *ppVar29;
  undefined1 auStackY_a8 [32];
  PSRWLOCK local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar8 = *(uint3 *)(param_2->shared_view).payload;
  if ((uVar8 != 0) && (pas_compact_heap_reservation_base != (ulonglong)uVar8 * -8)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  bVar4 = param_1->alignment_shift;
  lVar28 = 1L << (bVar4 & 0x3f);
  ppVar29 = param_3->heap;
  uVar14 = param_1->object_size;
  ppVar10 = pas_shared_page_directory_by_size_get
                      ((pas_shared_page_directory_by_size *)
                       (*(longlong *)(ppVar29->runtime_config + 1) + 0x160),param_3->object_size,
                       &bmalloc_heap_config.medium_segregated_config);
  ppVar11 = pas_segregated_shared_page_directory_find_first_eligible
                      (ppVar10,uVar14,(uint)lVar28,pas_lock_is_not_held);
  if (ppVar11 != (pas_segregated_shared_view *)0x0) {
    if (0x1f < bVar4) {
      SRWLock = &ppVar11->commit_lock;
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if (((ulonglong)ppVar11->shared_handle_or_page_boundary & 1) == 0) {
        ppVar12 = pas_segregated_shared_view_commit_page
                            (ppVar11,ppVar29,ppVar10,param_2,
                             &bmalloc_heap_config.medium_segregated_config);
      }
      else {
        ppVar12 = (pas_segregated_shared_handle *)
                  ((ulonglong)ppVar11->shared_handle_or_page_boundary & 0xfffffffffffffffe);
      }
      if (ppVar12 != (pas_segregated_shared_handle *)0x0) {
        if (bmalloc_medium_page_header_table.hashtable.table ==
            (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
          ppVar15 = (pas_segregated_page *)0x0;
        }
        else {
          pvVar5 = ppVar12->page_boundary;
          uVar14 = (uint)((ulonglong)pvVar5 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)pvVar5 >> 0x11)
          ;
          uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
          uVar14 = uVar14 >> 0xb ^ uVar14;
          uVar21 = (ulonglong)
                   (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
          pvVar26 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar21].low;
          if (pvVar26 != pvVar5) {
            ppVar15 = (pas_segregated_page *)0x0;
            do {
              uVar14 = uVar14 + 1;
              if (pvVar26 == (void *)0xffffffffffffffff) goto LAB_140d5d79b;
              uVar21 = (ulonglong)
                       (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
              pvVar26 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar21].
                                low;
            } while (pvVar26 != pvVar5);
          }
          ppVar15 = (pas_segregated_page *)
                    (bmalloc_medium_page_header_table.hashtable.table)->array[uVar21].high;
        }
LAB_140d5d79b:
        if (ppVar15->lock_ptr == (pas_lock *)0x0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        pas_segregated_page_switch_lock_slow(ppVar15,(pas_lock *)0x0,ppVar15->lock_ptr);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
LAB_140d5d63c:
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      bVar19 = false;
      goto LAB_140d5d647;
    }
    do {
      SRWLock = &ppVar11->commit_lock;
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if (((ulonglong)ppVar11->shared_handle_or_page_boundary & 1) == 0) {
        ppVar12 = pas_segregated_shared_view_commit_page
                            (ppVar11,ppVar29,ppVar10,param_2,
                             &bmalloc_heap_config.medium_segregated_config);
      }
      else {
        ppVar12 = (pas_segregated_shared_handle *)
                  ((ulonglong)ppVar11->shared_handle_or_page_boundary & 0xfffffffffffffffe);
      }
      if (ppVar12 == (pas_segregated_shared_handle *)0x0) goto LAB_140d5d63c;
      pvVar5 = ppVar12->page_boundary;
      uVar24 = (uint)((ulonglong)pvVar5 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)pvVar5 >> 0x11);
      uVar24 = uVar24 * 0x20 + (uVar24 ^ 0xdeadbeef);
      uVar24 = uVar24 >> 0xb ^ uVar24;
      uVar21 = (ulonglong)(uVar24 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
      pvVar26 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar21].low;
      while (pvVar26 != pvVar5) {
        uVar24 = uVar24 + 1;
        uVar21 = (ulonglong)
                 (uVar24 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
        pvVar26 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar21].low;
      }
      ppVar15 = (pas_segregated_page *)
                (bmalloc_medium_page_header_table.hashtable.table)->array[uVar21].high;
      local_50 = (PSRWLOCK)0x0;
      if (ppVar15->lock_ptr != (pas_lock *)0x0) {
        local_50 = (PSRWLOCK)
                   pas_segregated_page_switch_lock_slow(ppVar15,(pas_lock *)0x0,ppVar15->lock_ptr);
      }
      uVar21 = (ulonglong)ppVar11->bump_offset + lVar28 + 0xffffffff & -lVar28;
      uVar24 = (uint)uVar21;
      uVar27 = uVar14 + uVar24;
      if (uVar27 < 0x20001) {
        uVar20 = uVar27;
        if ((uVar27 ^ uVar24) < 0x1000) {
          uVar23 = uVar14 * 2 + uVar24;
          iVar16 = 1;
          do {
            if (0x20000 < uVar23) {
              uVar20 = 0x20000;
              break;
            }
            uVar27 = uVar27 + uVar14;
            iVar16 = iVar16 + 1;
            uVar25 = uVar23 ^ uVar24;
            uVar23 = uVar23 + uVar14;
            uVar20 = uVar27;
          } while (uVar25 < 0x1000);
          if (iVar16 == 0) goto LAB_140d5d30e;
        }
        ppVar11->bump_offset = uVar20;
        pas_segregated_partial_view_set_is_in_use_for_allocation(param_2,ppVar11,ppVar12);
        pas_segregated_page_commit_fully
                  (ppVar15,(pas_lock **)&local_50,pas_commit_fully_holding_page_and_commit_locks);
        uVar18 = (longlong)ppVar11 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar18) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if ((uVar18 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if (uVar18 < 8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        (param_2->shared_view).payload[0] = (uchar)(uVar18 >> 3);
        (param_2->shared_view).payload[1] = (uchar)(uVar18 >> 0xb);
        (param_2->shared_view).payload[2] = (uchar)((uint)uVar18 >> 0x13);
        uVar14 = (int)(char)*(uint *)&param_1->config_kind - 2;
        if (0xb < uVar14) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        *(uint *)&param_1->config_kind =
             *(uint *)&param_1->config_kind & 0xffffff00 |
             *(uint *)(&DAT_1531e9b30 + (ulonglong)uVar14 * 4);
        ppVar6 = ppVar15[-1].owner;
        param_1->page_ish = (ulong64)ppVar6;
        puVar1 = param_1->bits;
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
        uVar14 = param_1->object_size;
        param_1->payload_end = (ulong64)(ppVar6 + uVar27);
        param_1->remaining = uVar27 - uVar24;
        if (uVar27 <= uVar24) goto LAB_140d5d594;
        if (uVar14 != 0) goto LAB_140d5d48c;
        uVar14 = 1 << ((byte)(uVar21 >> 9) & 0x1f);
        uVar21 = uVar21 >> 0xe & 0x3ffff;
        uVar18 = (ulonglong)(uint)((int)uVar21 * 4);
        goto LAB_140d5d69b;
      }
LAB_140d5d30e:
      if (local_50 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_50);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ppVar29 = param_3->heap;
      ppVar10 = pas_shared_page_directory_by_size_get
                          ((pas_shared_page_directory_by_size *)
                           (*(longlong *)(ppVar29->runtime_config + 1) + 0x160),param_3->object_size
                           ,&bmalloc_heap_config.medium_segregated_config);
      ppVar11 = pas_segregated_shared_page_directory_find_first_eligible
                          (ppVar10,uVar14,(uint)lVar28,pas_lock_is_not_held);
    } while (ppVar11 != (pas_segregated_shared_view *)0x0);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
LAB_140d5d69b:
  puVar3 = (uint *)((longlong)puVar1 + uVar18);
  *puVar3 = *puVar3 | uVar14;
  uVar27 = *(uint *)((longlong)ppVar15->alloc_bits + uVar18);
  if (uVar27 == 0) {
    puVar2 = &(ppVar15->emptiness).num_non_empty_words_or_live_bytes;
    *puVar2 = *puVar2 + 1;
  }
  uVar22 = (ulonglong)ppVar12->partial_views[uVar24 >> 0xc].payload;
  ppVar17 = (pas_segregated_partial_view *)(pas_compact_heap_reservation_base + uVar22 * 8);
  if (uVar22 == 0) {
    ppVar17 = (pas_segregated_partial_view *)0x0;
  }
  if (ppVar17 != (pas_segregated_partial_view *)0x0 && ppVar17 != param_2) {
LAB_140d5d709:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  uVar22 = (longlong)param_2 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar22) {
LAB_140d5d70b:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if ((uVar22 & 7) != 0) {
LAB_140d5d70d:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if (uVar22 < 8) {
LAB_140d5d70f:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  ppVar12->partial_views[uVar24 >> 0xc].payload = (uint)(uVar22 >> 3);
  ppVar15->alloc_bits[uVar21] = uVar27 | uVar14;
  goto LAB_140d5d69b;
  while( true ) {
    uVar18 = (longlong)param_2 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar18) goto LAB_140d5d70b;
    if ((uVar18 & 7) != 0) goto LAB_140d5d70d;
    if (uVar18 < 8) goto LAB_140d5d70f;
    ppVar12->partial_views[uVar21].payload = (uint)(uVar18 >> 3);
    ppVar15->alloc_bits[uVar22] = uVar24 | uVar23;
    uVar24 = uVar20 + uVar14;
    uVar21 = (ulonglong)uVar24;
    if (0x1ffff < uVar21 - 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    uVar18 = uVar21 - 1 >> 0xc;
    if (uVar20 >> 0xc <= uVar18) {
      uVar22 = (ulonglong)(uVar20 >> 0xc) - 1;
      do {
        cVar13 = *(char *)((longlong)ppVar15[1].alloc_bits + (uVar22 - 0xf));
        if (cVar13 == -1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        cVar13 = cVar13 + '\x01';
        if (cVar13 == -1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        *(char *)((longlong)ppVar15[1].alloc_bits + (uVar22 - 0xf)) = cVar13;
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar18);
    }
    if (uVar27 <= uVar24) break;
LAB_140d5d48c:
    uVar20 = (uint)uVar21;
    uVar22 = uVar21 >> 0xe & 0x3ffff;
    uVar23 = 1 << ((byte)(uVar21 >> 9) & 0x1f);
    uVar18 = (ulonglong)(uint)((int)uVar22 * 4);
    puVar3 = (uint *)((longlong)puVar1 + uVar18);
    *puVar3 = *puVar3 | uVar23;
    uVar24 = *(uint *)((longlong)ppVar15->alloc_bits + uVar18);
    if (uVar24 == 0) {
      puVar2 = &(ppVar15->emptiness).num_non_empty_words_or_live_bytes;
      *puVar2 = *puVar2 + 1;
    }
    if (0x1ffff < uVar20) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    uVar21 = uVar21 >> 0xc & 0xfffff;
    uVar18 = (ulonglong)ppVar12->partial_views[uVar21].payload;
    ppVar17 = (pas_segregated_partial_view *)(pas_compact_heap_reservation_base + uVar18 * 8);
    if (uVar18 == 0) {
      ppVar17 = (pas_segregated_partial_view *)0x0;
    }
    if (ppVar17 != param_2 && ppVar17 != (pas_segregated_partial_view *)0x0) goto LAB_140d5d709;
  }
LAB_140d5d594:
  param_1->view = (pas_segregated_view_opaque *)((ulonglong)param_2 | 4);
  param_2->is_attached_to_shared_handle = true;
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  param_2->alloc_bits = (uint *)puVar1;
  if (param_2->alloc_bits_offset != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  param_2->alloc_bits_size = '\b';
  bVar19 = true;
  if (local_50 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_50);
    local_50 = (PSRWLOCK)0x0;
  }
LAB_140d5d647:
  if ((local_48 ^ (ulonglong)auStackY_a8) == __security_cookie.value) {
    return bVar19;
  }
  pcVar7 = (code *)swi(3);
  uVar9 = (*pcVar7)();
  return (bool)uVar9;
}

// bmalloc_medium_segregated_page_config_specialized_local_allocator_refill @ 140d5d7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
bmalloc_medium_segregated_page_config_specialized_local_allocator_refill
          (pas_local_allocator *param_1,pas_allocator_counts *param_2)

{
  PSRWLOCK SRWLock;
  pas_lock *SRWLock_00;
  ulong64 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  pas_segregated_heap *ppVar4;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar5;
  pas_heap *ppVar6;
  pas_heap_runtime_config *ppVar7;
  uint *puVar8;
  code *pcVar9;
  int iVar10;
  uint uVar11;
  uint3 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte bVar16;
  BOOLEAN BVar17;
  undefined1 uVar18;
  pas_segregated_view_opaque *ppVar19;
  ulong64 uVar20;
  pas_segregated_shared_page_directory *ppVar21;
  pas_segregated_shared_handle *ppVar22;
  void *pvVar23;
  ulong64 uVar24;
  pas_shared_handle_or_page_boundary_opaque *ppVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  pas_segregated_page *ppVar30;
  pas_segregated_shared_view *ppVar31;
  pas_segregated_page *ppVar32;
  pas_segregated_partial_view *ppVar33;
  pas_segregated_partial_view *ppVar34;
  ulonglong uVar35;
  char cVar36;
  pas_thread_local_cache_node *ppVar37;
  pas_segregated_view_opaque *ppVar38;
  ulonglong uVar39;
  uint uVar40;
  ulonglong uVar41;
  uint uVar42;
  uint uVar43;
  pas_heap *ppVar44;
  uint uVar45;
  void *pvVar46;
  pas_shared_handle_or_page_boundary_opaque *ppVar47;
  pas_segregated_directory *ppVar48;
  pas_segregated_exclusive_view *ppVar49;
  pas_segregated_size_directory *ppVar50;
  ulonglong *puVar51;
  pas_thread_local_cache *ppVar52;
  ulonglong uVar53;
  bool bVar54;
  bool bVar55;
  undefined1 auStackY_b8 [32];
  PSRWLOCK local_60;
  PSRWLOCK local_58;
  pas_local_allocator_scavenger_data *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  ppVar38 = param_1->view;
  if (((uint)ppVar38 & 7) == 5) {
    ppVar50 = (pas_segregated_size_directory *)((ulonglong)ppVar38 & 0xfffffffffffffff8);
    ppVar4 = ppVar50->heap;
    bVar16 = ppVar4->runtime_config->field_0x4;
  }
  else {
    ppVar50 = pas_segregated_view_get_size_directory_slow(ppVar38);
    ppVar4 = ppVar50->heap;
    bVar16 = ppVar4->runtime_config->field_0x4;
  }
  if (((bVar16 & 1) == 0) && (uVar29 = (ulonglong)ppVar4->small_index_upper_bound, uVar29 != 0)) {
    puVar8 = ppVar4->index_to_small_allocator_index;
    if (puVar8 != (uint *)0x0) {
      uVar53 = (ulonglong)puVar8 & 0xfffffffffe000000;
      uVar41 = (ulonglong)((uint)puVar8 & 0x1ffffff);
      uVar39 = uVar41 - 0x4008 >> 0xe;
      uVar41 = (uVar41 + uVar29 * 4) - 0x4001 >> 0xe;
      do {
        uVar35 = *(ulonglong *)(uVar53 + 0x18 + uVar39 * 8);
        uVar42 = (uint)uVar35 & 7;
        if (uVar42 == 2) break;
        if (uVar42 == 1) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        if ((uVar35 & 7) == 0) break;
        puVar51 = (ulonglong *)(uVar53 + 0x18 + uVar39 * 8);
        LOCK();
        bVar54 = uVar35 == *puVar51;
        if (bVar54) {
          *puVar51 = uVar35 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar54);
      if (uVar39 != uVar41) {
        do {
          uVar39 = *(ulonglong *)(uVar53 + 0x18 + uVar41 * 8);
          if (((uint)uVar39 & 7) < 3) break;
          puVar51 = (ulonglong *)(uVar53 + 0x18 + uVar41 * 8);
          LOCK();
          bVar54 = uVar39 == *puVar51;
          if (bVar54) {
            *puVar51 = uVar39 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar54);
      }
    }
    ppVar5 = ppVar4->index_to_small_size_directory;
    if (ppVar5 != (pas_compact_atomic_segregated_size_directory_ptr *)0x0) {
      uVar53 = (ulonglong)ppVar5 & 0xfffffffffe000000;
      uVar41 = (ulonglong)((uint)ppVar5 & 0x1ffffff);
      uVar39 = uVar41 - 0x4008 >> 0xe;
      uVar29 = (uVar41 + uVar29 * 4) - 0x4001 >> 0xe;
      do {
        uVar41 = *(ulonglong *)(uVar53 + 0x18 + uVar39 * 8);
        uVar42 = (uint)uVar41 & 7;
        if (uVar42 == 2) break;
        if (uVar42 == 1) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        if ((uVar41 & 7) == 0) break;
        puVar51 = (ulonglong *)(uVar53 + 0x18 + uVar39 * 8);
        LOCK();
        bVar54 = uVar41 == *puVar51;
        if (bVar54) {
          *puVar51 = uVar41 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar54);
      if (uVar39 != uVar29) {
        do {
          uVar41 = *(ulonglong *)(uVar53 + 0x18 + uVar29 * 8);
          if (((uint)uVar41 & 7) < 3) break;
          puVar51 = (ulonglong *)(uVar53 + 0x18 + uVar29 * 8);
          LOCK();
          bVar54 = uVar41 == *puVar51;
          if (bVar54) {
            *puVar51 = uVar41 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar54);
      }
    }
  }
  uVar29 = (ulonglong)(ppVar4->rare_data).payload;
  lVar27 = uVar29 * 8 + pas_compact_heap_reservation_base;
  if (lVar27 != 0 && uVar29 != 0) {
    lVar28 = (ulonglong)*(uint *)(lVar27 + 8) * 8 + pas_compact_heap_reservation_base;
    if ((ulonglong)*(uint *)(lVar27 + 8) == 0) {
      lVar28 = 0;
    }
    if ((ulonglong)*(uint *)(lVar27 + 0xc) != 0) {
      if (lVar28 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar41 = (lVar28 - (longlong)pas_compact_expendable_memory_payload) - 8U >> 0xe;
      uVar29 = ((lVar28 - (longlong)pas_compact_expendable_memory_payload) +
               (ulonglong)*(uint *)(lVar27 + 0xc) * 0x10) - 1 >> 0xe;
      do {
        uVar53 = *(ulonglong *)((longlong)&pas_compact_expendable_memory_header + uVar41 * 8 + 0x10)
        ;
        uVar42 = (uint)uVar53 & 7;
        if (uVar42 == 2) break;
        if (uVar42 == 1) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        if ((uVar53 & 7) == 0) break;
        puVar51 = (ulonglong *)((longlong)&pas_compact_expendable_memory_header + uVar41 * 8 + 0x10)
        ;
        LOCK();
        bVar54 = uVar53 == *puVar51;
        if (bVar54) {
          *puVar51 = uVar53 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar54);
      if (uVar41 != uVar29) {
        do {
          uVar41 = *(ulonglong *)
                    ((longlong)&pas_compact_expendable_memory_header + uVar29 * 8 + 0x10);
          if (((uint)uVar41 & 7) < 3) break;
          puVar51 = (ulonglong *)
                    ((longlong)&pas_compact_expendable_memory_header + uVar29 * 8 + 0x10);
          LOCK();
          bVar54 = uVar41 == *puVar51;
          if (bVar54) {
            *puVar51 = uVar41 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar54);
      }
    }
  }
  (param_1->scavenger_data).should_stop_count = '\0';
  (param_1->scavenger_data).dirty = true;
  bVar54 = pas_scavenger_did_create_eligible();
  if (bVar54) {
    pas_scavenger_notify_eligibility_if_needed();
  }
  uVar29 = param_1->page_ish;
  if (uVar29 == 0) {
    ppVar32 = (pas_segregated_page *)0x0;
    ppVar38 = (pas_segregated_view_opaque *)0x0;
  }
  else {
    uVar42 = (uint)(uVar29 >> 0x15) & 0xfffffff ^ (uint)(uVar29 >> 0x11);
    uVar42 = uVar42 * 0x20 + (uVar42 ^ 0xdeadbeef);
    uVar42 = uVar42 >> 0xb ^ uVar42;
    uVar41 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar42);
    uVar20 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar41].low;
    while (uVar20 != (uVar29 & 0xfffffffffffe0000)) {
      uVar42 = uVar42 + 1;
      uVar41 = (ulonglong)(uVar42 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
      uVar20 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar41].low;
    }
    ppVar32 = (pas_segregated_page *)
              (bmalloc_medium_page_header_table.hashtable.table)->array[uVar41].high;
    ppVar38 = ppVar32->owner;
    if (((ulonglong)ppVar38 & 6) != 0) {
      if (((uint)ppVar38 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      ppVar38 = param_1->view;
      if (((uint)ppVar38 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
    }
  }
  param_1->page_ish = 0;
  param_1->current_word_is_valid = false;
  param_1->payload_end = 0;
  param_1->remaining = 0;
  ppVar19 = (pas_segregated_view_opaque *)((ulonglong)ppVar50 | 5);
  if (ppVar50 == (pas_segregated_size_directory *)0x0) {
    ppVar19 = (pas_segregated_view_opaque *)0x0;
  }
  param_1->current_offset = 0;
  param_1->end_offset = 0;
  param_1->current_word = 0;
  param_1->view = ppVar19;
  param_1->config_kind = 8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar52 = *(pas_thread_local_cache **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
  uVar42 = (uint)ppVar38;
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar52) {
    ppVar37 = ppVar52->node;
    pas_thread_local_cache_stop_local_allocators_if_necessary(ppVar52,param_1);
    if (ppVar38 != (pas_segregated_view_opaque *)0x0) goto LAB_140d5db31;
LAB_140d5dcf2:
    local_60 = (PSRWLOCK)0x0;
    if (ppVar52 == (pas_thread_local_cache *)0x0) {
LAB_140d5de54:
      ppVar19 = pas_segregated_size_directory_take_first_eligible(ppVar50);
      uVar20 = pas_compact_heap_reservation_base;
      if (ppVar19 == (pas_segregated_view_opaque *)0x0) {
        ppVar19 = (pas_segregated_view_opaque *)0x0;
      }
      else {
        uVar40 = (uint)ppVar19 & 7;
        if (uVar40 < 2) {
          puVar51 = (ulonglong *)((ulonglong)ppVar19 & 0xfffffffffffffff8);
          if (*(char *)((longlong)puVar51 + 0xb) == '\0') {
            uVar29 = (ulonglong)(uint3)puVar51[1];
            if (*puVar51 == 0) {
              cVar36 = *(char *)(pas_compact_heap_reservation_base + 0xd + uVar29 * 8);
              if (cVar36 != '\x01') {
                if (cVar36 != '\x02') {
                  if (cVar36 != '\0') {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)invalidInstructionException();
                    (*pcVar9)();
                  }
                    /* WARNING: Does not return */
                  pcVar9 = (code *)invalidInstructionException();
                  (*pcVar9)();
                }
                pas_physical_page_sharing_pool_take_for_page_config
                          (0x20000,&bmalloc_heap_config.medium_segregated_config.base,
                           pas_lock_is_not_held,(pas_lock **)0x0,0);
                uVar41 = *puVar51;
                if (uVar41 != 0) goto LAB_140d5e163;
              }
              pas_physical_memory_transaction_construct
                        ((pas_physical_memory_transaction *)&local_58);
              do {
                if (*puVar51 != 0) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)invalidInstructionException();
                  (*pcVar9)();
                }
                pas_physical_memory_transaction_begin((pas_physical_memory_transaction *)&local_58);
                AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
                ppVar6 = *(pas_heap **)(uVar20 + 0x18 + uVar29 * 8);
                ppVar7 = (ppVar6->segregated_heap).runtime_config;
                ppVar44 = (pas_heap *)0x0;
                if (ppVar7->is_part_of_heap) {
                  ppVar44 = ppVar6;
                }
                pvVar23 = pas_medium_megapage_cache_try_allocate
                                    ((pas_megapage_cache *)(*(longlong *)(ppVar7 + 1) + 0x100),
                                     &bmalloc_heap_config.medium_segregated_config.base,false,
                                     ppVar44,(pas_physical_memory_transaction *)&local_58);
                *puVar51 = (ulonglong)pvVar23;
                if (pvVar23 != (void *)0x0) {
                  uVar24 = pas_page_base_header_size
                                     (&bmalloc_heap_config.medium_segregated_config.base,
                                      pas_medium_exclusive_segregated_page_kind);
                  pas_page_header_table_add
                            (&bmalloc_medium_page_header_table,0x20000,uVar24,pvVar23);
                }
                ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
                bVar54 = pas_physical_memory_transaction_end
                                   ((pas_physical_memory_transaction *)&local_58);
              } while (!bVar54);
              uVar41 = *puVar51;
              if (uVar41 == 0) {
                ppVar19 = (pas_segregated_view_opaque *)0x0;
                goto LAB_140d5e233;
              }
            }
            else {
              SRWLock = (PSRWLOCK)(puVar51 + 2);
              AcquireSRWLockExclusive(SRWLock);
              cVar36 = *(char *)(uVar20 + 0xd + uVar29 * 8);
              local_58 = SRWLock;
              if (cVar36 != '\x01') {
                if (cVar36 != '\x02') {
                  if (cVar36 != '\0') {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)invalidInstructionException();
                    (*pcVar9)();
                  }
                    /* WARNING: Does not return */
                  pcVar9 = (code *)invalidInstructionException();
                  (*pcVar9)();
                }
                pas_physical_page_sharing_pool_take_for_page_config
                          (0x20000,&bmalloc_heap_config.medium_segregated_config.base,
                           pas_lock_is_not_held,(pas_lock **)&local_58,1);
              }
              pas_page_base_commit_with_boundary
                        ((void *)*puVar51,&bmalloc_heap_config.medium_segregated_config.base);
              pvVar23 = (void *)*puVar51;
              AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
              uVar20 = pas_page_base_header_size
                                 (&bmalloc_heap_config.medium_segregated_config.base,
                                  pas_medium_exclusive_segregated_page_kind);
              pas_page_header_table_add(&bmalloc_medium_page_header_table,0x20000,uVar20,pvVar23);
              ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
              ReleaseSRWLockExclusive(SRWLock);
              uVar41 = *puVar51;
            }
LAB_140d5e163:
            if (bmalloc_medium_page_header_table.hashtable.table ==
                (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
              ppVar30 = (pas_segregated_page *)0x0;
            }
            else {
              uVar40 = (uint)(uVar41 >> 0x15) & 0xfffffff ^ (uint)(uVar41 >> 0x11);
              uVar40 = uVar40 * 0x20 + (uVar40 ^ 0xdeadbeef);
              uVar40 = uVar40 >> 0xb ^ uVar40;
              uVar29 = (ulonglong)
                       ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar40);
              uVar20 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar29].low;
              if (uVar20 != uVar41) {
                ppVar30 = (pas_segregated_page *)0x0;
                do {
                  uVar40 = uVar40 + 1;
                  if (uVar20 == 0xffffffffffffffff) goto LAB_140d5e204;
                  uVar29 = (ulonglong)
                           (uVar40 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask)
                  ;
                  uVar20 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar29].low;
                } while (uVar20 != uVar41);
              }
              ppVar30 = (pas_segregated_page *)
                        (bmalloc_medium_page_header_table.hashtable.table)->array[uVar29].high;
            }
LAB_140d5e204:
            pas_segregated_page_construct
                      (ppVar30,(pas_segregated_view_opaque *)((longlong)puVar51 + 1),false,
                       &bmalloc_heap_config.medium_segregated_config);
            AcquireSRWLockExclusive((PSRWLOCK)(puVar51 + 3));
            *(undefined1 *)((longlong)puVar51 + 0xb) = 1;
            ReleaseSRWLockExclusive((PSRWLOCK)(puVar51 + 3));
          }
        }
        else {
          if (uVar40 != 4) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          if (((uint)ppVar19 & 7) != 4) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          ppVar34 = (pas_segregated_partial_view *)((ulonglong)ppVar19 & 0xfffffffffffffff8);
          uVar29 = (ulonglong)
                   ((uint)(ppVar34->directory).payload[2] * 0x80000 +
                   (uint)*(ushort *)(ppVar34->directory).payload * 8);
          ppVar4 = *(pas_segregated_heap **)(uVar29 + 0x18 + pas_compact_heap_reservation_base);
          ppVar21 = pas_shared_page_directory_by_size_get
                              ((pas_shared_page_directory_by_size *)
                               (*(longlong *)(ppVar4->runtime_config + 1) + 0x160),
                               *(uint *)(uVar29 + 0x20 + pas_compact_heap_reservation_base) &
                               0x7ffffff,&bmalloc_heap_config.medium_segregated_config);
          uVar12 = *(uint3 *)(ppVar34->shared_view).payload;
          ppVar31 = (pas_segregated_shared_view *)
                    ((ulonglong)uVar12 * 8 + pas_compact_heap_reservation_base);
          if (ppVar31 != (pas_segregated_shared_view *)0x0 && uVar12 != 0) {
            SRWLock_00 = &ppVar31->commit_lock;
            AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
            if (((ulonglong)ppVar31->shared_handle_or_page_boundary & 1) == 0) {
              ppVar22 = pas_segregated_shared_view_commit_page
                                  (ppVar31,ppVar4,ppVar21,ppVar34,
                                   &bmalloc_heap_config.medium_segregated_config);
            }
            else {
              ppVar22 = (pas_segregated_shared_handle *)
                        ((ulonglong)ppVar31->shared_handle_or_page_boundary & 0xfffffffffffffffe);
            }
            if (ppVar22 == (pas_segregated_shared_handle *)0x0) {
              ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
              ppVar19 = (pas_segregated_view_opaque *)0x0;
            }
            else {
              if (!ppVar34->is_attached_to_shared_handle) {
                if ((ulonglong)ppVar34->alloc_bits_size != 0) {
                  puVar8 = ppVar34->alloc_bits;
                  uVar41 = (ulonglong)ppVar34->alloc_bits_offset;
                  uVar29 = ppVar34->alloc_bits_size + uVar41;
                  do {
                    uVar40 = puVar8[uVar41];
                    if (uVar40 != 0) {
                      do {
                        uVar43 = 0;
                        for (uVar45 = uVar40; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000)
                        {
                          uVar43 = uVar43 + 1;
                        }
                        uVar53 = (uVar41 << 5 | (ulonglong)uVar43) >> 3;
                        uVar39 = (ulonglong)ppVar22->partial_views[uVar53].payload;
                        ppVar33 = (pas_segregated_partial_view *)
                                  (pas_compact_heap_reservation_base + uVar39 * 8);
                        if (uVar39 == 0) {
                          ppVar33 = (pas_segregated_partial_view *)0x0;
                        }
                        if ((ppVar33 != (pas_segregated_partial_view *)0x0) && (ppVar33 != ppVar34))
                        {
                    /* WARNING: Does not return */
                          pcVar9 = (code *)invalidInstructionException();
                          (*pcVar9)();
                        }
                        uVar39 = (longlong)ppVar34 - pas_compact_heap_reservation_base;
                        if (pas_compact_heap_reservation_size <= uVar39) {
                    /* WARNING: Does not return */
                          pcVar9 = (code *)invalidInstructionException();
                          (*pcVar9)();
                        }
                        if ((uVar39 & 7) != 0) {
                    /* WARNING: Does not return */
                          pcVar9 = (code *)invalidInstructionException();
                          (*pcVar9)();
                        }
                        if (uVar39 < 8) {
                    /* WARNING: Does not return */
                          pcVar9 = (code *)invalidInstructionException();
                          (*pcVar9)();
                        }
                        ppVar22->partial_views[uVar53].payload = (uint)(uVar39 >> 3);
                        bVar16 = (byte)uVar43 & 0x1f;
                        uVar40 = uVar40 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
                      } while (uVar40 != 0);
                    }
                    uVar41 = uVar41 + 1;
                  } while (uVar41 < uVar29);
                }
                AcquireSRWLockExclusive((PSRWLOCK)&ppVar31->ownership_lock);
                ppVar34->is_attached_to_shared_handle = true;
                ReleaseSRWLockExclusive((PSRWLOCK)&ppVar31->ownership_lock);
              }
              if (bmalloc_medium_page_header_table.hashtable.table ==
                  (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
                ppVar30 = (pas_segregated_page *)0x0;
              }
              else {
                pvVar23 = ppVar22->page_boundary;
                uVar40 = (uint)((ulonglong)pvVar23 >> 0x15) & 0xfffffff ^
                         (uint)((ulonglong)pvVar23 >> 0x11);
                uVar40 = uVar40 * 0x20 + (uVar40 ^ 0xdeadbeef);
                uVar40 = uVar40 >> 0xb ^ uVar40;
                uVar29 = (ulonglong)
                         (uVar40 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                pvVar46 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar29].
                                  low;
                if (pvVar46 != pvVar23) {
                  ppVar30 = (pas_segregated_page *)0x0;
                  do {
                    uVar40 = uVar40 + 1;
                    if (pvVar46 == (void *)0xffffffffffffffff) goto LAB_140d5e56d;
                    uVar29 = (ulonglong)
                             (uVar40 & (bmalloc_medium_page_header_table.hashtable.table)->
                                       table_mask);
                    pvVar46 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array
                                      [uVar29].low;
                  } while (pvVar46 != pvVar23);
                }
                ppVar30 = (pas_segregated_page *)
                          (bmalloc_medium_page_header_table.hashtable.table)->array[uVar29].high;
              }
LAB_140d5e56d:
              local_58 = (PSRWLOCK)0x0;
              if (ppVar30->lock_ptr != (pas_lock *)0x0) {
                local_58 = (PSRWLOCK)
                           pas_segregated_page_switch_lock_slow
                                     (ppVar30,(pas_lock *)0x0,ppVar30->lock_ptr);
              }
              pas_segregated_page_commit_fully
                        (ppVar30,(pas_lock **)&local_58,
                         pas_commit_fully_holding_page_and_commit_locks);
              if (local_58 != (PSRWLOCK)0x0) {
                ReleaseSRWLockExclusive(local_58);
                local_58 = (PSRWLOCK)0x0;
              }
              ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
            }
          }
        }
      }
    }
    else {
      uVar40 = ppVar50->view_cache_index;
      if (uVar40 < ppVar52->allocator_index_upper_bound) {
        local_50 = (pas_local_allocator_scavenger_data *)(ppVar52->local_allocators + uVar40);
      }
      else if ((uVar40 == 0xffffffff) ||
              (pas_thread_local_cache_get_local_allocator_slow
                         ((pas_local_allocator_result *)&local_58,ppVar52,uVar40,
                          pas_lock_is_not_held), ((ulonglong)local_58 & 1) == 0))
      goto LAB_140d5de54;
      local_50->is_in_use = true;
      if ((local_50->encoded_kind_and_location & 0x7f) != 4) {
LAB_140d5de39:
        pas_local_allocator_scavenger_data_commit_if_necessary_slow
                  (local_50,
                   pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
                   ,pas_local_allocator_view_cache_kind);
LAB_140d5de49:
        local_50->should_stop_count = '\0';
        local_50->dirty = true;
        local_50->is_in_use = false;
        goto LAB_140d5de54;
      }
      bVar16 = local_50[1].should_stop_count;
      if (local_50[1].dirty == (bool)bVar16) {
        if (local_50[1].encoded_kind_and_location == '\0') goto LAB_140d5de39;
        if (local_50[1].encoded_kind_and_location == '\x02') goto LAB_140d5dd50;
        goto LAB_140d5de49;
      }
LAB_140d5dd50:
      local_50->should_stop_count = '\0';
      local_50->dirty = true;
      bVar26 = bVar16 + 1;
      if (local_50[1].is_in_use <= bVar26) {
        bVar26 = 0;
      }
      local_50[1].should_stop_count = bVar26;
      ppVar19 = (pas_segregated_view_opaque *)
                (((uint)(&local_50[2].dirty)[(ulonglong)bVar16 * 3] * 0x80000 +
                 (uint)*(ushort *)(&local_50[2].is_in_use + (ulonglong)bVar16 * 3) * 8) +
                pas_compact_heap_reservation_base);
      local_50[1].encoded_kind_and_location = '\x01';
      local_50->is_in_use = false;
    }
LAB_140d5e233:
    if (ppVar38 != (pas_segregated_view_opaque *)0x0) {
      uVar20 = pas_compact_heap_reservation_base;
      if (local_60 != (PSRWLOCK)ppVar32->lock_ptr) {
        local_60 = (PSRWLOCK)
                   pas_segregated_page_switch_lock_slow
                             (ppVar32,(pas_lock *)local_60,ppVar32->lock_ptr);
        uVar20 = pas_compact_heap_reservation_base;
      }
      pas_compact_heap_reservation_base = uVar20;
      if ((uVar42 & 7) < 2) {
        uVar29 = (ulonglong)ppVar38 & 0xfffffffffffffff8;
        bVar54 = ppVar32->eligibility_notification_has_been_deferred;
        if (bVar54 == true) {
          ppVar32->eligibility_notification_has_been_deferred = false;
        }
        uVar42 = *(uint *)(uVar29 + 0xc);
        bVar55 = true;
        ppVar48 = (pas_segregated_directory *)
                  (((uint)*(byte *)(uVar29 + 10) * 0x80000 + (uint)*(ushort *)(uVar29 + 8) * 8) +
                  pas_compact_heap_reservation_base);
        if ((((((ppVar32->emptiness).num_non_empty_words_or_live_bytes != 0) &&
              (*(char *)((longlong)&ppVar32[2].lock_ptr + 3) != '\0')) &&
             ((*(char *)((longlong)&ppVar32[2].lock_ptr + 2) != '\0' &&
              (((*(char *)((longlong)&ppVar32[2].lock_ptr + 1) != '\0' &&
                (*(char *)&ppVar32[2].lock_ptr != '\0')) &&
               (*(char *)((longlong)&ppVar32[2].object_size + 3) != '\0')))))) &&
            (((*(char *)((longlong)&ppVar32[2].object_size + 2) != '\0' &&
              (*(char *)((longlong)&ppVar32[2].object_size + 1) != '\0')) &&
             ((((char)ppVar32[2].object_size != '\0' &&
               (((ppVar32[2].is_committing_fully != false &&
                 (ppVar32[2].eligibility_notification_has_been_deferred != false)) &&
                ((ppVar32[2].is_in_use_for_allocation != false &&
                 (((ppVar32[2].base.page_kind != '\0' &&
                   (*(char *)((longlong)ppVar32[1].alloc_bits + 3) != '\0')) &&
                  (*(char *)((longlong)ppVar32[1].alloc_bits + 2) != '\0')))))))) &&
              (((*(char *)((longlong)ppVar32[1].alloc_bits + 1) != '\0' &&
                ((char)ppVar32[1].alloc_bits[0] != '\0')) &&
               (*(char *)((longlong)&ppVar32[1].view_cache_index + 3) != '\0')))))))) &&
           (((((*(char *)((longlong)&ppVar32[1].view_cache_index + 2) != '\0' &&
               (*(char *)((longlong)&ppVar32[1].view_cache_index + 1) != '\0')) &&
              (((char)ppVar32[1].view_cache_index != '\0' &&
               (((((*(char *)((longlong)&ppVar32[1].owner + 7) != '\0' &&
                   (*(char *)((longlong)&ppVar32[1].owner + 6) != '\0')) &&
                  (*(char *)((longlong)&ppVar32[1].owner + 5) != '\0')) &&
                 ((*(char *)((longlong)&ppVar32[1].owner + 4) != '\0' &&
                  (*(char *)((longlong)&ppVar32[1].owner + 3) != '\0')))) &&
                (*(char *)((longlong)&ppVar32[1].owner + 2) != '\0')))))) &&
             ((*(char *)((longlong)&ppVar32[1].owner + 1) != '\0' &&
              (*(char *)&ppVar32[1].owner != '\0')))) &&
            ((*(char *)((longlong)&ppVar32[1].emptiness.num_non_empty_words_or_live_bytes + 7) !=
              '\0' && ((*(char *)((longlong)&ppVar32[1].emptiness.num_non_empty_words_or_live_bytes
                                 + 6) != '\0' &&
                       (*(char *)((longlong)&ppVar32[1].emptiness.num_non_empty_words_or_live_bytes
                                 + 5) != '\0')))))))) {
          bVar55 = *(char *)((longlong)&ppVar32[1].emptiness.num_non_empty_words_or_live_bytes + 4)
                   == '\0';
        }
        ppVar32->is_in_use_for_allocation = false;
        if (bVar54 != false) {
          pas_segregated_directory_view_did_become_eligible_at_index(ppVar48,(ulonglong)uVar42);
        }
        if (bVar55) {
          pas_segregated_directory_view_did_become_empty_at_index(ppVar48,(ulonglong)uVar42);
        }
      }
      else {
        if ((uVar42 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        uVar41 = (ulonglong)ppVar38 & 0xfffffffffffffff8;
        uVar53 = (ulonglong)
                 ((uint)*(byte *)(uVar41 + 10) * 0x80000 + (uint)*(ushort *)(uVar41 + 8) * 8);
        uVar29 = *(ulonglong *)(uVar53 + uVar20);
        if ((uVar29 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        if ((*(byte *)(uVar41 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        bVar16 = *(byte *)(uVar41 + 0xd);
        uVar3 = *(ushort *)(uVar41 + 0xb);
        ppVar48 = *(pas_segregated_directory **)((uVar29 & 0xfffffffffffffffe) + 8);
        if (((PSRWLOCK)ppVar32->lock_ptr != (PSRWLOCK)0x0) &&
           (BVar17 = TryAcquireSRWLockExclusive((PSRWLOCK)ppVar32->lock_ptr), BVar17 != '\0')) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        uVar53 = uVar53 + uVar20;
        if (*(int *)(uVar53 + 0x24) == 1) {
          bVar54 = true;
          if ((((((((((ppVar32->emptiness).num_non_empty_words_or_live_bytes != 0) &&
                    (*(char *)((longlong)&ppVar32[2].lock_ptr + 3) != '\0')) &&
                   (*(char *)((longlong)&ppVar32[2].lock_ptr + 2) != '\0')) &&
                  ((*(char *)((longlong)&ppVar32[2].lock_ptr + 1) != '\0' &&
                   (*(char *)&ppVar32[2].lock_ptr != '\0')))) &&
                 ((*(char *)((longlong)&ppVar32[2].object_size + 3) != '\0' &&
                  ((*(char *)((longlong)&ppVar32[2].object_size + 2) != '\0' &&
                   (*(char *)((longlong)&ppVar32[2].object_size + 1) != '\0')))))) &&
                (((char)ppVar32[2].object_size != '\0' &&
                 ((((ppVar32[2].is_committing_fully != false &&
                    (ppVar32[2].eligibility_notification_has_been_deferred != false)) &&
                   (ppVar32[2].is_in_use_for_allocation != false)) &&
                  (((ppVar32[2].base.page_kind != '\0' &&
                    (*(char *)((longlong)ppVar32[1].alloc_bits + 3) != '\0')) &&
                   ((*(char *)((longlong)ppVar32[1].alloc_bits + 2) != '\0' &&
                    ((*(char *)((longlong)ppVar32[1].alloc_bits + 1) != '\0' &&
                     ((char)ppVar32[1].alloc_bits[0] != '\0')))))))))))) &&
               (*(char *)((longlong)&ppVar32[1].view_cache_index + 3) != '\0')) &&
              (((*(char *)((longlong)&ppVar32[1].view_cache_index + 2) != '\0' &&
                (*(char *)((longlong)&ppVar32[1].view_cache_index + 1) != '\0')) &&
               ((char)ppVar32[1].view_cache_index != '\0')))) &&
             (((*(char *)((longlong)&ppVar32[1].owner + 7) != '\0' &&
               (*(char *)((longlong)&ppVar32[1].owner + 6) != '\0')) &&
              ((((*(char *)((longlong)&ppVar32[1].owner + 5) != '\0' &&
                 ((*(char *)((longlong)&ppVar32[1].owner + 4) != '\0' &&
                  (*(char *)((longlong)&ppVar32[1].owner + 3) != '\0')))) &&
                (*(char *)((longlong)&ppVar32[1].owner + 2) != '\0')) &&
               ((((*(char *)((longlong)&ppVar32[1].owner + 1) != '\0' &&
                  (*(char *)&ppVar32[1].owner != '\0')) &&
                 (*(char *)((longlong)&ppVar32[1].emptiness.num_non_empty_words_or_live_bytes + 7)
                  != '\0')) &&
                ((*(char *)((longlong)&ppVar32[1].emptiness.num_non_empty_words_or_live_bytes + 6)
                  != '\0' &&
                 (*(char *)((longlong)&ppVar32[1].emptiness.num_non_empty_words_or_live_bytes + 5)
                  != '\0')))))))))) {
            bVar54 = *(char *)((longlong)&ppVar32[1].emptiness.num_non_empty_words_or_live_bytes + 4
                              ) == '\0';
          }
        }
        else {
          bVar54 = false;
        }
        bVar26 = *(byte *)(uVar41 + 0x11);
        *(byte *)(uVar41 + 0x11) = bVar26 & 0xfc;
        iVar10 = *(int *)(uVar53 + 0x24);
        if ((bVar26 & 2) == 0) {
          if (iVar10 == 0) {
LAB_140d5ecda:
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          *(int *)(uVar53 + 0x24) = iVar10 + -1;
        }
        else {
          if (iVar10 == 0) goto LAB_140d5ecda;
          *(int *)(uVar53 + 0x24) = iVar10 + -1;
          if ((*(byte *)(uVar41 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          pas_segregated_directory_view_did_become_eligible
                    ((pas_segregated_directory *)
                     (((uint)bVar16 * 0x80000 + (uint)uVar3 * 8) + uVar20),
                     (pas_segregated_view_opaque *)(uVar41 | 4));
        }
        if (bVar54) {
          if (*(int *)(uVar53 + 0x24) != 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          pas_segregated_directory_view_did_become_empty
                    (ppVar48,(pas_segregated_view_opaque *)(uVar53 | 2));
        }
      }
    }
    if (ppVar19 == (pas_segregated_view_opaque *)0x0) {
      if (local_60 == (PSRWLOCK)0x0) {
        bVar54 = false;
      }
      else {
        ReleaseSRWLockExclusive(local_60);
        local_60 = (PSRWLOCK)0x0;
        bVar54 = false;
      }
      goto LAB_140d5ec7c;
    }
    if (((ulonglong)ppVar19 & 6) == 0) {
      ppVar49 = (pas_segregated_exclusive_view *)((ulonglong)ppVar19 & 0xfffffffffffffff8);
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
        ppVar32 = (pas_segregated_page *)0x0;
      }
      else {
        pvVar23 = ppVar49->page_boundary;
        uVar42 = (uint)((ulonglong)pvVar23 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)pvVar23 >> 0x11)
        ;
        uVar42 = uVar42 * 0x20 + (uVar42 ^ 0xdeadbeef);
        uVar42 = uVar42 >> 0xb ^ uVar42;
        uVar29 = (ulonglong)
                 (uVar42 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
        pvVar46 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar29].low;
        if (pvVar46 != pvVar23) {
          ppVar32 = (pas_segregated_page *)0x0;
          do {
            uVar42 = uVar42 + 1;
            if (pvVar46 == (void *)0xffffffffffffffff) goto LAB_140d5e9e3;
            uVar29 = (ulonglong)
                     (uVar42 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
            pvVar46 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar29].low;
          } while (pvVar46 != pvVar23);
        }
        ppVar32 = (pas_segregated_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar29].high;
      }
LAB_140d5e9e3:
      pas_segregated_page_switch_lock_and_rebias_while_ineligible_impl
                (ppVar32,(pas_lock **)&local_60,ppVar37);
      ppVar32->is_in_use_for_allocation = true;
      pas_segregated_page_commit_fully
                (ppVar32,(pas_lock **)&local_60,pas_commit_fully_holding_page_lock);
      ppVar32->owner = (pas_segregated_view_opaque *)((ulonglong)ppVar19 | 1);
      ppVar38 = ppVar32[-1].owner;
      if ((ppVar32->emptiness).num_non_empty_words_or_live_bytes == 0) goto LAB_140d5ea21;
LAB_140d5db7a:
      param_1->payload_end = 0;
      param_1->remaining = 0;
      pas_segregated_exclusive_view_install_full_use_counts(ppVar49);
      uVar20 = pas_compact_heap_reservation_base;
      uVar41 = (ulonglong)(ppVar50->data).payload;
      uVar29 = (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 0xc + uVar41 * 8);
      if (uVar29 < 8) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar42 = *(uint *)(pas_compact_heap_reservation_base + uVar41 * 8);
      uVar40 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar41 * 8);
      param_1->current_offset = uVar42 >> 0xf;
      param_1->end_offset = ((uVar40 >> 9) - 1 >> 6) + 1;
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
      param_1->page_ish = (ulong64)(ppVar38 + (uVar42 & 0xffff8000));
      uVar42 = *(uint *)(uVar20 + uVar29);
      uVar40 = ppVar32->alloc_bits[0];
      *(uint *)param_1->bits = ~uVar40 & uVar42;
      ppVar32->alloc_bits[0] = uVar40 | uVar42;
      uVar42 = *(uint *)(uVar20 + 4 + uVar29);
      uVar40._0_1_ = ppVar32[1].base;
      uVar40._1_1_ = ppVar32[1].is_in_use_for_allocation;
      uVar40._2_1_ = ppVar32[1].eligibility_notification_has_been_deferred;
      uVar40._3_1_ = ppVar32[1].is_committing_fully;
      *(uint *)((longlong)param_1->bits + 4) = ~uVar40 & uVar42;
      uVar40 = uVar40 | uVar42;
      ppVar32[1].base = (pas_page_base)(char)uVar40;
      ppVar32[1].is_in_use_for_allocation = (bool)(char)(uVar40 >> 8);
      ppVar32[1].eligibility_notification_has_been_deferred = (bool)(char)(uVar40 >> 0x10);
      ppVar32[1].is_committing_fully = (bool)(char)(uVar40 >> 0x18);
      uVar42 = *(uint *)(uVar20 + 8 + uVar29);
      uVar40 = ppVar32[1].object_size;
      param_1[1].scavenger_data = (pas_local_allocator_scavenger_data)(~uVar40 & uVar42);
      ppVar32[1].object_size = uVar40 | uVar42;
      uVar42 = *(uint *)(uVar20 + 0xc + uVar29);
      uVar40 = *(uint *)&ppVar32[1].lock_ptr;
      *(uint *)&param_1[1].alignment_shift = ~uVar40 & uVar42;
      *(uint *)&ppVar32[1].lock_ptr = uVar40 | uVar42;
      uVar42 = *(uint *)(uVar20 + 0x10 + uVar29);
      uVar40 = *(uint *)((longlong)&ppVar32[1].lock_ptr + 4);
      *(uint *)&param_1[1].config_kind = ~uVar40 & uVar42;
      *(uint *)((longlong)&ppVar32[1].lock_ptr + 4) = uVar40 | uVar42;
      uVar42 = *(uint *)(uVar20 + 0x14 + uVar29);
      uVar40 = (uint)ppVar32[1].emptiness.use_epoch;
      uVar43 = ~uVar40 & uVar42;
      param_1[1].current_word_is_valid = (bool)(char)uVar43;
      param_1[1].is_stashing_alloc_bits = (bool)(char)(uVar43 >> 8);
      *(short *)&param_1[1].field_0xe = (short)(uVar43 >> 0x10);
      *(uint *)&ppVar32[1].emptiness.use_epoch = uVar40 | uVar42;
      uVar42 = *(uint *)(uVar20 + 0x18 + uVar29);
      uVar40 = *(uint *)((longlong)&ppVar32[1].emptiness.use_epoch + 4);
      *(uint *)&param_1[1].payload_end = ~uVar40 & uVar42;
      *(uint *)((longlong)&ppVar32[1].emptiness.use_epoch + 4) = uVar40 | uVar42;
      uVar42 = *(uint *)(uVar20 + 0x1c + uVar29);
      uVar40 = (uint)ppVar32[1].emptiness.num_non_empty_words_or_live_bytes;
      *(uint *)((longlong)&param_1[1].payload_end + 4) = ~uVar40 & uVar42;
      *(uint *)&ppVar32[1].emptiness.num_non_empty_words_or_live_bytes = uVar40 | uVar42;
      param_1->current_word = 0;
      param_1->current_word_is_valid = true;
      (ppVar32->emptiness).num_non_empty_words_or_live_bytes =
           (ulonglong)
           *(uint *)(pas_compact_heap_reservation_base + 8 + (ulonglong)(ppVar50->data).payload * 8)
      ;
    }
    else {
      if (((uint)ppVar19 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      ppVar34 = (pas_segregated_partial_view *)((ulonglong)ppVar19 & 0xfffffffffffffff8);
      uVar12 = *(uint3 *)(ppVar34->shared_view).payload;
      ppVar31 = (pas_segregated_shared_view *)
                ((ulonglong)uVar12 * 8 + pas_compact_heap_reservation_base);
      if (ppVar31 == (pas_segregated_shared_view *)0x0 || uVar12 == 0) {
        if (local_60 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(local_60);
          local_60 = (PSRWLOCK)0x0;
        }
        bVar54 = bmalloc_medium_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
                           (param_1,ppVar34,ppVar50);
        goto LAB_140d5ec7c;
      }
      ppVar25 = ppVar31->shared_handle_or_page_boundary;
      if (((ulonglong)ppVar25 & 1) != 0) {
        ppVar25 = *(pas_shared_handle_or_page_boundary_opaque **)
                   ((ulonglong)ppVar25 & 0xfffffffffffffffe);
      }
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
        ppVar32 = (pas_segregated_page *)0x0;
      }
      else {
        uVar42 = (uint)((ulonglong)ppVar25 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)ppVar25 >> 0x11)
        ;
        uVar42 = uVar42 * 0x20 + (uVar42 ^ 0xdeadbeef);
        uVar42 = uVar42 >> 0xb ^ uVar42;
        uVar29 = (ulonglong)
                 ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar42);
        ppVar47 = (pas_shared_handle_or_page_boundary_opaque *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar29].low;
        if (ppVar47 != ppVar25) {
          ppVar32 = (pas_segregated_page *)0x0;
          do {
            uVar42 = uVar42 + 1;
            if (ppVar47 == (pas_shared_handle_or_page_boundary_opaque *)0xffffffffffffffff)
            goto LAB_140d5ea90;
            uVar29 = (ulonglong)
                     (uVar42 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
            ppVar47 = (pas_shared_handle_or_page_boundary_opaque *)
                      (bmalloc_medium_page_header_table.hashtable.table)->array[uVar29].low;
          } while (ppVar47 != ppVar25);
        }
        ppVar32 = (pas_segregated_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar29].high;
      }
LAB_140d5ea90:
      if (local_60 == (PSRWLOCK)ppVar32->lock_ptr) {
        ppVar25 = ppVar31->shared_handle_or_page_boundary;
      }
      else {
        local_60 = (PSRWLOCK)
                   pas_segregated_page_switch_lock_slow
                             (ppVar32,(pas_lock *)local_60,ppVar32->lock_ptr);
        ppVar25 = ppVar31->shared_handle_or_page_boundary;
      }
      if (((ulonglong)ppVar25 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      pas_segregated_partial_view_set_is_in_use_for_allocation
                (ppVar34,ppVar31,
                 (pas_segregated_shared_handle *)((ulonglong)ppVar25 & 0xfffffffffffffffe));
LAB_140d5eabb:
      ppVar38 = ppVar32[-1].owner;
      param_1->payload_end = 0;
      param_1->remaining = 0;
      bVar16 = ppVar34->alloc_bits_offset;
      uVar53 = (ulonglong)bVar16;
      bVar26 = ppVar34->alloc_bits_size;
      puVar8 = ppVar34->alloc_bits;
      param_1->view = (pas_segregated_view_opaque *)((ulonglong)ppVar34 | 4);
      uVar40 = (uint)bVar26 + (uint)bVar16 + 1;
      uVar41 = (ulonglong)((uint)bVar26 + (uint)bVar16);
      bVar26 = bVar16 >> 1;
      uVar42 = param_1->object_size;
      param_1->current_offset = (uint)bVar26;
      param_1->end_offset = uVar40 >> 1 & 0xff;
      uVar29 = 0;
      memset(param_1->bits + (uint)bVar26,0,
             (ulonglong)((uVar40 & 0xfffffffe) - (bVar16 & 0xfffffffe)) << 2);
      param_1->page_ish = (ulong64)(ppVar38 + (ulonglong)bVar26 * 0x8000);
      if (uVar53 < uVar41) {
        lVar27 = (ulonglong)bVar16 << 0xe;
        do {
          uVar40 = puVar8[uVar53];
          uVar43 = ppVar32->alloc_bits[uVar53];
          uVar45 = ~uVar43 & uVar40;
          *(uint *)((longlong)param_1->bits + uVar53 * 4) = uVar45;
          if (uVar45 != 0 && uVar42 != 0) {
            do {
              iVar10 = 0;
              for (uVar11 = uVar45; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                iVar10 = iVar10 + 1;
              }
              uVar39 = uVar53 << 0xe | (ulonglong)(uint)(iVar10 << 9);
              if (0x20000 < uVar39 + uVar42) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)invalidInstructionException();
                (*pcVar9)();
              }
              uVar35 = (uVar42 + uVar39) - 1 >> 0xc;
              if (uVar39 >> 0xc <= uVar35) {
                uVar39 = ((ulonglong)(uint)(iVar10 << 9) + lVar27 >> 0xc) - 1;
                do {
                  cVar36 = *(char *)((longlong)ppVar32[1].alloc_bits + (uVar39 - 0xf));
                  if (cVar36 == -1) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)invalidInstructionException();
                    (*pcVar9)();
                  }
                  cVar36 = cVar36 + '\x01';
                  if (cVar36 == -1) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)invalidInstructionException();
                    (*pcVar9)();
                  }
                  *(char *)((longlong)ppVar32[1].alloc_bits + (uVar39 - 0xf)) = cVar36;
                  uVar39 = uVar39 + 1;
                } while (uVar39 < uVar35);
              }
              bVar16 = (byte)iVar10 & 0x1f;
              uVar45 = uVar45 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
            } while (uVar45 != 0);
          }
          uVar45 = (int)uVar29 + (uint)(uVar43 == 0 && uVar40 != 0);
          uVar29 = (ulonglong)uVar45;
          ppVar32->alloc_bits[uVar53] = uVar43 | uVar40;
          uVar53 = uVar53 + 1;
          lVar27 = lVar27 + 0x4000;
        } while (uVar53 != uVar41);
        uVar29 = (ulonglong)uVar45;
      }
      param_1->current_word = 0;
      param_1->current_word_is_valid = true;
      puVar1 = &(ppVar32->emptiness).num_non_empty_words_or_live_bytes;
      *puVar1 = *puVar1 + uVar29;
    }
  }
  else {
    ppVar37 = (pas_thread_local_cache_node *)0x0;
    ppVar52 = (pas_thread_local_cache *)0x0;
    if (ppVar38 == (pas_segregated_view_opaque *)0x0) goto LAB_140d5dcf2;
LAB_140d5db31:
    local_60 = (PSRWLOCK)0x0;
    if ((uVar42 & 7) == 4) {
      ppVar34 = (pas_segregated_partial_view *)((ulonglong)ppVar38 & 0xfffffffffffffff8);
      bVar16 = ppVar34->field_0x11;
      if (!ppVar34->eligibility_has_been_noted) goto LAB_140d5dcf2;
      if (ppVar32->lock_ptr != (pas_lock *)0x0) {
        local_60 = (PSRWLOCK)
                   pas_segregated_page_switch_lock_slow(ppVar32,(pas_lock *)0x0,ppVar32->lock_ptr);
        bVar16 = ppVar34->field_0x11;
      }
      ppVar34->field_0x11 = bVar16 & 0xf9;
      goto LAB_140d5eabb;
    }
    if (((ulonglong)ppVar38 & 7) != 0) goto LAB_140d5dcf2;
    ppVar49 = (pas_segregated_exclusive_view *)((ulonglong)ppVar38 & 0xfffffffffffffff8);
    pas_segregated_page_switch_lock_and_rebias_while_ineligible_impl
              (ppVar32,(pas_lock **)&local_60,ppVar37);
    ppVar32->owner = (pas_segregated_view_opaque *)((ulonglong)ppVar38 | 1);
    ppVar32->eligibility_notification_has_been_deferred = false;
    ppVar38 = ppVar32[-1].owner;
    if ((ppVar32->emptiness).num_non_empty_words_or_live_bytes != 0) goto LAB_140d5db7a;
LAB_140d5ea21:
    pas_segregated_exclusive_view_install_full_use_counts(ppVar49);
    uVar20 = pas_compact_heap_reservation_base;
    uVar29 = (ulonglong)(ppVar50->data).payload;
    uVar42 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar29 * 8);
    iVar10 = *(int *)(pas_compact_heap_reservation_base + uVar29 * 8);
    (ppVar32->emptiness).num_non_empty_words_or_live_bytes =
         (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 8 + uVar29 * 8);
    param_1->payload_end = (ulong64)(ppVar38 + uVar42);
    param_1->remaining = uVar42 - iVar10;
    param_1->current_offset = 0;
    param_1->end_offset = 0;
    param_1->current_word = 0;
    param_1->page_ish = (ulong64)ppVar38;
    uVar29 = (ulonglong)*(uint *)(uVar20 + 0xc + uVar29 * 8);
    if (uVar29 < 8) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uVar13 = *(undefined8 *)(pas_compact_heap_reservation_base + uVar29);
    uVar14 = ((undefined8 *)(pas_compact_heap_reservation_base + uVar29))[1];
    puVar2 = (undefined8 *)(pas_compact_heap_reservation_base + 0x10 + uVar29);
    uVar15 = puVar2[1];
    *(undefined8 *)((longlong)&ppVar32[1].lock_ptr + 4) = *puVar2;
    *(undefined8 *)((longlong)&ppVar32[1].emptiness.use_epoch + 4) = uVar15;
    *(undefined8 *)ppVar32->alloc_bits = uVar13;
    *(undefined8 *)&ppVar32[1].object_size = uVar14;
  }
  bVar54 = true;
  if (local_60 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_60);
    local_60 = (PSRWLOCK)0x0;
  }
LAB_140d5ec7c:
  if ((local_48 ^ (ulonglong)auStackY_b8) != __security_cookie.value) {
    pcVar9 = (code *)swi(3);
    uVar18 = (*pcVar9)();
    return (bool)uVar18;
  }
  return bVar54;
}

// bmalloc_medium_segregated_page_config_specialized_local_allocator_return_memory_to_page @ 140d5ed90

void __cdecl
bmalloc_medium_segregated_page_config_specialized_local_allocator_return_memory_to_page
          (pas_local_allocator *param_1,pas_segregated_view_opaque *param_2,
          pas_segregated_page *param_3,pas_segregated_size_directory *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  bool bVar69;
  bool bVar70;
  bool bVar71;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  bool bVar76;
  bool bVar77;
  bool bVar78;
  bool bVar79;
  bool bVar80;
  bool bVar81;
  bool bVar82;
  bool bVar83;
  bool bVar84;
  bool bVar85;
  bool bVar86;
  bool bVar87;
  bool bVar88;
  bool bVar89;
  bool bVar90;
  bool bVar91;
  bool bVar92;
  bool bVar93;
  bool bVar94;
  bool bVar95;
  bool bVar96;
  bool bVar97;
  bool bVar98;
  bool bVar99;
  BOOLEAN BVar100;
  uint uVar101;
  uint uVar102;
  void *pvVar103;
  ulong64 uVar104;
  uint uVar105;
  longlong *plVar106;
  longlong lVar107;
  pas_segregated_partial_view *ppVar108;
  byte bVar109;
  longlong lVar110;
  ulonglong uVar111;
  ulonglong uVar112;
  uint uVar113;
  ulonglong uVar114;
  ulonglong uVar115;
  pas_segregated_view_opaque *ppVar116;
  undefined8 *puVar117;
  uint uVar118;
  bool bVar119;
  bool bVar120;
  bool bVar121;
  bool bVar122;
  bool bVar123;
  ulonglong local_70;
  longlong local_68;
  
  uVar118 = (uint)param_2;
  if ((uVar118 & 7) < 2) {
    BVar100 = TryAcquireSRWLockExclusive((PSRWLOCK)param_3->lock_ptr);
    if (BVar100 != '\0') {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (((uint)(int)(char)param_1->config_kind < 0xe) &&
       ((0x2aa8U >> ((int)(char)param_1->config_kind & 0x1fU) & 1) != 0)) {
      if (((uint)param_1->view & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      iVar2 = (int)param_1->bits[0];
      uVar111 = 1;
      if (iVar2 != 0) {
        uVar111 = -(ulonglong)(iVar2 == 0);
      }
      iVar3 = *(int *)((longlong)param_1->bits + 4);
      if (iVar3 == 0) {
        uVar111 = -(ulonglong)(iVar2 == 0);
      }
      bVar10 = iVar3 != 0;
      bVar11 = iVar2 != 0;
      bVar119 = param_1[1].scavenger_data != (pas_local_allocator_scavenger_data)0x0;
      if (bVar119 && (!bVar10 && !bVar11)) {
        uVar111 = 2;
      }
      bVar12 = !bVar10;
      bVar13 = !bVar11;
      bVar120 = *(int *)&param_1[1].alignment_shift != 0;
      if (bVar120 && ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11))) {
        uVar111 = 3;
      }
      bVar14 = !bVar119;
      bVar17 = !bVar12;
      bVar18 = !bVar13;
      bVar15 = !bVar10;
      bVar16 = !bVar11;
      bVar121 = *(int *)&param_1[1].config_kind != 0;
      if (bVar121 &&
          ((!bVar120 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
          ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11)))) {
        uVar111 = 4;
      }
      bVar19 = !bVar120;
      bVar23 = !bVar14;
      bVar28 = !bVar17;
      bVar29 = !bVar18;
      bVar24 = !bVar15;
      bVar25 = !bVar16;
      bVar20 = !bVar119;
      bVar26 = !bVar12;
      bVar27 = !bVar13;
      bVar21 = !bVar10;
      bVar22 = !bVar11;
      iVar4._0_1_ = param_1[1].current_word_is_valid;
      iVar4._1_1_ = param_1[1].is_stashing_alloc_bits;
      iVar4._2_2_ = *(undefined2 *)&param_1[1].field_0xe;
      bVar122 = iVar4 != 0;
      if (bVar122 &&
          ((!bVar121 ||
           (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
           (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
          ((!bVar120 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
          ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11))))) {
        uVar111 = 5;
      }
      bVar30 = !bVar121;
      bVar32 = !bVar19;
      bVar44 = !bVar23;
      bVar51 = !bVar28;
      bVar52 = !bVar29;
      bVar45 = !bVar24;
      bVar46 = !bVar25;
      bVar36 = !bVar20;
      bVar47 = !bVar26;
      bVar48 = !bVar27;
      bVar37 = !bVar21;
      bVar38 = !bVar22;
      bVar31 = !bVar120;
      bVar39 = !bVar14;
      bVar49 = !bVar17;
      bVar50 = !bVar18;
      bVar40 = !bVar15;
      bVar41 = !bVar16;
      bVar33 = !bVar119;
      bVar42 = !bVar12;
      bVar43 = !bVar13;
      bVar34 = !bVar10;
      bVar35 = !bVar11;
      iVar5 = (int)param_1[1].payload_end;
      bVar123 = iVar5 != 0;
      if (bVar123 &&
          ((!bVar122 ||
           (!bVar30 &&
            ((!bVar32 || (!bVar44 && (!bVar51 && !bVar52) || (!bVar45 || !bVar46))) &&
            ((!bVar36 || (!bVar47 || !bVar48)) && (!bVar37 && !bVar38))) ||
           (!bVar31 && ((!bVar39 || (!bVar49 || !bVar50)) && (!bVar40 && !bVar41)) ||
           (!bVar33 && (!bVar42 && !bVar43) || (!bVar34 || !bVar35))))) &&
          ((!bVar121 ||
           (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
           (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
          ((!bVar120 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
          ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11)))))) {
        uVar111 = 6;
      }
      bVar53 = !bVar122;
      bVar55 = !bVar30;
      bVar62 = !bVar32;
      bVar89 = !bVar44;
      bVar98 = !bVar51;
      bVar99 = !bVar52;
      bVar90 = !bVar45;
      bVar91 = !bVar46;
      bVar74 = !bVar36;
      bVar92 = !bVar47;
      bVar93 = !bVar48;
      bVar75 = !bVar37;
      bVar76 = !bVar38;
      bVar57 = !bVar31;
      bVar77 = !bVar39;
      bVar94 = !bVar49;
      bVar95 = !bVar50;
      bVar78 = !bVar40;
      bVar79 = !bVar41;
      bVar63 = !bVar33;
      bVar80 = !bVar42;
      bVar81 = !bVar43;
      bVar64 = !bVar34;
      bVar65 = !bVar35;
      bVar54 = !bVar121;
      bVar58 = !bVar19;
      bVar82 = !bVar23;
      bVar96 = !bVar28;
      bVar97 = !bVar29;
      bVar83 = !bVar24;
      bVar84 = !bVar25;
      bVar66 = !bVar20;
      bVar85 = !bVar26;
      bVar86 = !bVar27;
      bVar67 = !bVar21;
      bVar68 = !bVar22;
      bVar56 = !bVar120;
      bVar69 = !bVar14;
      bVar87 = !bVar17;
      bVar88 = !bVar18;
      bVar70 = !bVar15;
      bVar71 = !bVar16;
      bVar59 = !bVar119;
      bVar72 = !bVar12;
      bVar73 = !bVar13;
      bVar60 = !bVar10;
      bVar61 = !bVar11;
      iVar6 = *(int *)((longlong)&param_1[1].payload_end + 4);
      if (iVar6 != 0 &&
          ((!bVar123 ||
           (!bVar53 &&
            ((!bVar55 ||
             (!bVar62 && ((!bVar89 || (!bVar98 || !bVar99)) && (!bVar90 && !bVar91)) ||
             (!bVar74 && (!bVar92 && !bVar93) || (!bVar75 || !bVar76)))) &&
            ((!bVar57 || (!bVar77 && (!bVar94 && !bVar95) || (!bVar78 || !bVar79))) &&
            ((!bVar63 || (!bVar80 || !bVar81)) && (!bVar64 && !bVar65)))) ||
           (!bVar54 &&
            ((!bVar58 || (!bVar82 && (!bVar96 && !bVar97) || (!bVar83 || !bVar84))) &&
            ((!bVar66 || (!bVar85 || !bVar86)) && (!bVar67 && !bVar68))) ||
           (!bVar56 && ((!bVar69 || (!bVar87 || !bVar88)) && (!bVar70 && !bVar71)) ||
           (!bVar59 && (!bVar72 && !bVar73) || (!bVar60 || !bVar61)))))) &&
          ((!bVar122 ||
           (!bVar30 &&
            ((!bVar32 || (!bVar44 && (!bVar51 && !bVar52) || (!bVar45 || !bVar46))) &&
            ((!bVar36 || (!bVar47 || !bVar48)) && (!bVar37 && !bVar38))) ||
           (!bVar31 && ((!bVar39 || (!bVar49 || !bVar50)) && (!bVar40 && !bVar41)) ||
           (!bVar33 && (!bVar42 && !bVar43) || (!bVar34 || !bVar35))))) &&
          ((!bVar121 ||
           (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
           (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
          ((!bVar120 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
          ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11))))))) {
        uVar111 = 7;
      }
      if ((iVar6 == 0 ||
          (bVar123 &&
           ((bVar53 ||
            (bVar55 && ((bVar62 || (bVar89 && (bVar98 && bVar99) || (bVar90 || bVar91))) &&
                       ((bVar74 || (bVar92 || bVar93)) && (bVar75 && bVar76))) ||
            (bVar57 && ((bVar77 || (bVar94 || bVar95)) && (bVar78 && bVar79)) ||
            (bVar63 && (bVar80 && bVar81) || (bVar64 || bVar65))))) &&
           ((bVar54 ||
            (bVar58 && ((bVar82 || (bVar96 || bVar97)) && (bVar83 && bVar84)) ||
            (bVar66 && (bVar85 && bVar86) || (bVar67 || bVar68)))) &&
           ((bVar56 || (bVar69 && (bVar87 && bVar88) || (bVar70 || bVar71))) &&
           ((bVar59 || (bVar72 || bVar73)) && (bVar60 && bVar61))))) ||
          (bVar122 &&
           ((bVar30 ||
            (bVar32 && ((bVar44 || (bVar51 || bVar52)) && (bVar45 && bVar46)) ||
            (bVar36 && (bVar47 && bVar48) || (bVar37 || bVar38)))) &&
           ((bVar31 || (bVar39 && (bVar49 && bVar50) || (bVar40 || bVar41))) &&
           ((bVar33 || (bVar42 || bVar43)) && (bVar34 && bVar35)))) ||
          (bVar121 &&
           ((bVar19 || (bVar23 && (bVar28 && bVar29) || (bVar24 || bVar25))) &&
           ((bVar20 || (bVar26 || bVar27)) && (bVar21 && bVar22))) ||
          (bVar120 && ((bVar14 || (bVar17 || bVar18)) && (bVar15 && bVar16)) ||
          (bVar119 && (bVar12 && bVar13) || (bVar10 || bVar11))))))) == true &&
          ((!bVar123 ||
           (!bVar53 &&
            ((!bVar55 ||
             (!bVar62 && ((!bVar89 || (!bVar98 || !bVar99)) && (!bVar90 && !bVar91)) ||
             (!bVar74 && (!bVar92 && !bVar93) || (!bVar75 || !bVar76)))) &&
            ((!bVar57 || (!bVar77 && (!bVar94 && !bVar95) || (!bVar78 || !bVar79))) &&
            ((!bVar63 || (!bVar80 || !bVar81)) && (!bVar64 && !bVar65)))) ||
           (!bVar54 &&
            ((!bVar58 || (!bVar82 && (!bVar96 && !bVar97) || (!bVar83 || !bVar84))) &&
            ((!bVar66 || (!bVar85 || !bVar86)) && (!bVar67 && !bVar68))) ||
           (!bVar56 && ((!bVar69 || (!bVar87 || !bVar88)) && (!bVar70 && !bVar71)) ||
           (!bVar59 && (!bVar72 && !bVar73) || (!bVar60 || !bVar61)))))) &&
          ((!bVar122 ||
           (!bVar30 &&
            ((!bVar32 || (!bVar44 && (!bVar51 && !bVar52) || (!bVar45 || !bVar46))) &&
            ((!bVar36 || (!bVar47 || !bVar48)) && (!bVar37 && !bVar38))) ||
           (!bVar31 && ((!bVar39 || (!bVar49 || !bVar50)) && (!bVar40 && !bVar41)) ||
           (!bVar33 && (!bVar42 && !bVar43) || (!bVar34 || !bVar35))))) &&
          ((!bVar121 ||
           (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
           (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
          ((!bVar120 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
          ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11))))))) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar114 = (ulonglong)(iVar2 != 0);
      if (iVar3 != 0) {
        uVar114 = 2;
      }
      uVar115 = 3;
      if (param_1[1].scavenger_data == (pas_local_allocator_scavenger_data)0x0) {
        uVar115 = uVar114;
      }
      uVar114 = 4;
      if (*(int *)&param_1[1].alignment_shift == 0) {
        uVar114 = uVar115;
      }
      uVar115 = 5;
      if (*(int *)&param_1[1].config_kind == 0) {
        uVar115 = uVar114;
      }
      uVar114 = 6;
      if (iVar4 == 0) {
        uVar114 = uVar115;
      }
      uVar115 = 7;
      if (iVar5 == 0) {
        uVar115 = uVar114;
      }
      uVar114 = 8;
      if (iVar6 == 0) {
        uVar114 = uVar115;
      }
      uVar114 = uVar114 - uVar111;
      if (uVar114 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if (0xff < uVar114) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      puVar117 = (undefined8 *)((ulonglong)param_1->view & 0xfffffffffffffff8);
      *(char *)((longlong)puVar117 + 0xf) = (char)uVar114;
      if (0xff < uVar111) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      *(char *)(puVar117 + 2) = (char)uVar111;
      pvVar103 = pas_immortal_heap_allocate_with_manual_alignment
                           (uVar114 * 4,4,"pas_segregated_partial_view/alloc_bits",
                            pas_object_allocation);
      memcpy(pvVar103,(void *)((longlong)param_1->bits + uVar111 * 4),uVar114 * 4);
      *puVar117 = (void *)((longlong)pvVar103 + uVar111 * -4);
    }
    uVar111 = (ulonglong)param_1->remaining;
    if (uVar111 != 0) {
      uVar114 = param_1->payload_end;
      uVar115 = uVar114 - uVar111;
      if (uVar111 <= uVar114) {
        uVar9 = param_1->object_size;
        do {
          uVar101 = (uint)(uVar115 >> 0xc);
          uVar111 = (ulonglong)(uVar101 & 0x1c);
          uVar113 = *(uint *)((longlong)param_3->alloc_bits + uVar111) &
                    ~(1 << ((uint)(uVar115 >> 9) & 0x1f));
          *(uint *)((longlong)param_3->alloc_bits + uVar111) = uVar113;
          ppVar116 = param_3->owner;
          if (((ulonglong)ppVar116 & 7) != 0) {
            ppVar116 = (pas_segregated_view_opaque *)((ulonglong)ppVar116 & 0xfffffffffffffff8);
            if (param_3->is_in_use_for_allocation == true) {
              param_3->eligibility_notification_has_been_deferred = true;
            }
            else {
              pas_segregated_directory_view_did_become_eligible_at_index
                        ((pas_segregated_directory *)
                         (((uint)(byte)ppVar116[10] * 0x80000 + (uint)*(ushort *)(ppVar116 + 8) * 8)
                         + pas_compact_heap_reservation_base),(ulonglong)*(uint *)(ppVar116 + 0xc));
            }
            param_3->owner = ppVar116;
          }
          uVar102 = (uint)uVar115 & 0x1ffff;
          if (((ulonglong)ppVar116 & 6) == 0) {
            uVar105 = param_3->object_size;
            if (uVar105 != 0) goto LAB_140d5f387;
LAB_140d5f3ac:
            bVar10 = false;
          }
          else {
            if (((uint)ppVar116 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            uVar111 = (ulonglong)
                      *(uint *)(((ulonglong)ppVar116 & 0xfffffffffffffff8) + 0x14 +
                               (ulonglong)(uVar102 >> 0xc) * 4);
            lVar107 = pas_compact_heap_reservation_base + uVar111 * 8;
            if (uVar111 == 0) {
              lVar107 = 0;
            }
            uVar105 = *(uint *)((ulonglong)
                                ((uint)*(byte *)(lVar107 + 0xd) * 0x80000 +
                                (uint)*(ushort *)(lVar107 + 0xb) * 8) + 0x20 +
                               pas_compact_heap_reservation_base) & 0x7ffffff;
            if (uVar105 == 0) goto LAB_140d5f3ac;
LAB_140d5f387:
            if (0x20000 < (ulonglong)uVar102 + (ulonglong)uVar105) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            uVar111 = ((ulonglong)uVar105 + (ulonglong)uVar102) - 1 >> 0xc;
            if (uVar111 < uVar102 >> 0xc) goto LAB_140d5f3ac;
            uVar112 = (ulonglong)(uVar101 & 0x1f) - 1;
            bVar10 = false;
            do {
              cVar1 = *(char *)((longlong)param_3[1].alloc_bits + (uVar112 - 0xf));
              if (cVar1 == '\0') {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              if (cVar1 == -1) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              *(char *)((longlong)param_3[1].alloc_bits + (uVar112 - 0xf)) = cVar1 + -1;
              bVar10 = (bool)(bVar10 | (char)(cVar1 + -1) == '\0');
              uVar112 = uVar112 + 1;
            } while (uVar112 < uVar111);
          }
          if (pas_segregated_page_deallocate_should_verify_granules == true) {
            pas_segregated_page_verify_granules(param_3);
          }
          if (bVar10) {
            pas_segregated_page_note_emptiness_impl
                      (param_3,pas_note_emptiness_keep_num_non_empty_words);
          }
          if (uVar113 == 0) {
            uVar104 = (param_3->emptiness).num_non_empty_words_or_live_bytes - 1;
            if (uVar104 == 0) {
              pas_segregated_page_note_emptiness_impl
                        (param_3,pas_note_emptiness_clear_num_non_empty_words);
            }
            else {
              (param_3->emptiness).num_non_empty_words_or_live_bytes = uVar104;
            }
          }
          uVar115 = uVar115 + uVar9;
        } while (uVar115 < uVar114);
      }
    }
    if (param_1->current_offset != param_1->end_offset) {
      if (((uint)(int)(char)param_1->config_kind < 0xe) &&
         ((0x2aa8U >> ((int)(char)param_1->config_kind & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if (((ulonglong)param_2 & 6) == 0) {
        uVar111 = (ulonglong)
                  *(uint *)(pas_compact_heap_reservation_base + 0xc +
                           (ulonglong)(param_4->data).payload * 8);
        if (uVar111 < 8) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        lVar107 = pas_compact_heap_reservation_base + uVar111;
        uVar111 = 0;
        local_70 = 8;
      }
      else {
        if ((uVar118 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        plVar106 = (longlong *)((ulonglong)param_2 & 0xfffffffffffffff8);
        if (*(byte *)((longlong)plVar106 + 0xf) == 0) {
          return;
        }
        uVar111 = (ulonglong)*(byte *)(plVar106 + 2);
        local_70 = (ulonglong)
                   ((uint)*(byte *)((longlong)plVar106 + 0xf) + (uint)*(byte *)(plVar106 + 2));
        lVar107 = *plVar106;
      }
      bVar109 = (char)uVar111 << 5;
      do {
        uVar118 = *(uint *)((longlong)param_1->bits + uVar111 * 4) &
                  *(uint *)(lVar107 + uVar111 * 4);
        if (uVar118 != 0) {
          do {
            uVar9 = 0;
            for (uVar101 = uVar118; (uVar101 & 1) == 0; uVar101 = uVar101 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            uVar101 = uVar9 | (int)uVar111 << 5;
            uVar114 = (ulonglong)(uVar101 >> 3 & 0x1c);
            uVar113 = *(uint *)((longlong)param_3->alloc_bits + uVar114) & ~(1 << (uVar9 & 0x1f));
            *(uint *)((longlong)param_3->alloc_bits + uVar114) = uVar113;
            ppVar116 = param_3->owner;
            if (((ulonglong)ppVar116 & 7) != 0) {
              ppVar116 = (pas_segregated_view_opaque *)((ulonglong)ppVar116 & 0xfffffffffffffff8);
              if (param_3->is_in_use_for_allocation == true) {
                param_3->eligibility_notification_has_been_deferred = true;
              }
              else {
                pas_segregated_directory_view_did_become_eligible_at_index
                          ((pas_segregated_directory *)
                           (((uint)(byte)ppVar116[10] * 0x80000 +
                            (uint)*(ushort *)(ppVar116 + 8) * 8) + pas_compact_heap_reservation_base
                           ),(ulonglong)*(uint *)(ppVar116 + 0xc));
              }
              param_3->owner = ppVar116;
            }
            uVar114 = (ulonglong)((uVar101 & 0xff) << 9);
            if (((ulonglong)ppVar116 & 6) == 0) {
              uVar102 = param_3->object_size;
            }
            else {
              if (((uint)ppVar116 & 7) != 3) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              uVar115 = (ulonglong)
                        *(uint *)(((ulonglong)ppVar116 & 0xfffffffffffffff8) + 0x14 +
                                 (ulonglong)((uVar101 & 0xff) >> 3) * 4);
              lVar110 = pas_compact_heap_reservation_base + uVar115 * 8;
              if (uVar115 == 0) {
                lVar110 = 0;
              }
              uVar102 = *(uint *)((ulonglong)
                                  ((uint)*(byte *)(lVar110 + 0xd) * 0x80000 +
                                  (uint)*(ushort *)(lVar110 + 0xb) * 8) + 0x20 +
                                 pas_compact_heap_reservation_base) & 0x7ffffff;
            }
            if (uVar102 == 0) {
LAB_140d5f832:
              bVar10 = false;
            }
            else {
              if (0x20000 < uVar102 + uVar114) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              uVar114 = (uVar102 + uVar114) - 1 >> 0xc;
              if (uVar114 < (uVar101 & 0xff) >> 3) goto LAB_140d5f832;
              uVar115 = (ulonglong)((bVar109 + uVar9 & 0xff) >> 3) - 1;
              bVar10 = false;
              do {
                cVar1 = *(char *)((longlong)param_3[1].alloc_bits + (uVar115 - 0xf));
                if (cVar1 == '\0') {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                if (cVar1 == -1) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                *(char *)((longlong)param_3[1].alloc_bits + (uVar115 - 0xf)) = cVar1 + -1;
                bVar10 = (bool)(bVar10 | (char)(cVar1 + -1) == '\0');
                uVar115 = uVar115 + 1;
              } while (uVar115 < uVar114);
            }
            if (pas_segregated_page_deallocate_should_verify_granules == true) {
              pas_segregated_page_verify_granules(param_3);
            }
            if (bVar10) {
              pas_segregated_page_note_emptiness_impl
                        (param_3,pas_note_emptiness_keep_num_non_empty_words);
            }
            if (uVar113 == 0) {
              uVar104 = (param_3->emptiness).num_non_empty_words_or_live_bytes - 1;
              if (uVar104 == 0) {
                pas_segregated_page_note_emptiness_impl
                          (param_3,pas_note_emptiness_clear_num_non_empty_words);
              }
              else {
                (param_3->emptiness).num_non_empty_words_or_live_bytes = uVar104;
              }
            }
            bVar7 = (byte)uVar9 & 0x1f;
            uVar118 = uVar118 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
          } while (uVar118 != 0);
        }
        uVar111 = uVar111 + 1;
        bVar109 = bVar109 + 0x20;
      } while (uVar111 != local_70);
    }
  }
  else {
    if ((uVar118 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    BVar100 = TryAcquireSRWLockExclusive((PSRWLOCK)param_3->lock_ptr);
    if (BVar100 != '\0') {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (((uint)(int)(char)param_1->config_kind < 0xe) &&
       ((0x2aa8U >> ((int)(char)param_1->config_kind & 0x1fU) & 1) != 0)) {
      if (((uint)param_1->view & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      iVar2 = (int)param_1->bits[0];
      uVar111 = 1;
      if (iVar2 != 0) {
        uVar111 = -(ulonglong)(iVar2 == 0);
      }
      iVar3 = *(int *)((longlong)param_1->bits + 4);
      if (iVar3 == 0) {
        uVar111 = -(ulonglong)(iVar2 == 0);
      }
      bVar10 = iVar3 != 0;
      bVar11 = iVar2 != 0;
      bVar119 = param_1[1].scavenger_data != (pas_local_allocator_scavenger_data)0x0;
      if (bVar119 && (!bVar10 && !bVar11)) {
        uVar111 = 2;
      }
      bVar12 = !bVar10;
      bVar13 = !bVar11;
      bVar120 = *(int *)&param_1[1].alignment_shift != 0;
      if (bVar120 && ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11))) {
        uVar111 = 3;
      }
      bVar14 = !bVar119;
      bVar17 = !bVar12;
      bVar18 = !bVar13;
      bVar15 = !bVar10;
      bVar16 = !bVar11;
      bVar121 = *(int *)&param_1[1].config_kind != 0;
      if (bVar121 &&
          ((!bVar120 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
          ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11)))) {
        uVar111 = 4;
      }
      bVar19 = !bVar120;
      bVar23 = !bVar14;
      bVar28 = !bVar17;
      bVar29 = !bVar18;
      bVar24 = !bVar15;
      bVar25 = !bVar16;
      bVar20 = !bVar119;
      bVar26 = !bVar12;
      bVar27 = !bVar13;
      bVar21 = !bVar10;
      bVar22 = !bVar11;
      iVar5._0_1_ = param_1[1].current_word_is_valid;
      iVar5._1_1_ = param_1[1].is_stashing_alloc_bits;
      iVar5._2_2_ = *(undefined2 *)&param_1[1].field_0xe;
      bVar122 = iVar5 != 0;
      if (bVar122 &&
          ((!bVar121 ||
           (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
           (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
          ((!bVar120 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
          ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11))))) {
        uVar111 = 5;
      }
      bVar30 = !bVar121;
      bVar32 = !bVar19;
      bVar44 = !bVar23;
      bVar51 = !bVar28;
      bVar52 = !bVar29;
      bVar45 = !bVar24;
      bVar46 = !bVar25;
      bVar36 = !bVar20;
      bVar47 = !bVar26;
      bVar48 = !bVar27;
      bVar37 = !bVar21;
      bVar38 = !bVar22;
      bVar31 = !bVar120;
      bVar39 = !bVar14;
      bVar49 = !bVar17;
      bVar50 = !bVar18;
      bVar40 = !bVar15;
      bVar41 = !bVar16;
      bVar33 = !bVar119;
      bVar42 = !bVar12;
      bVar43 = !bVar13;
      bVar34 = !bVar10;
      bVar35 = !bVar11;
      iVar4 = (int)param_1[1].payload_end;
      bVar123 = iVar4 != 0;
      if (bVar123 &&
          ((!bVar122 ||
           (!bVar30 &&
            ((!bVar32 || (!bVar44 && (!bVar51 && !bVar52) || (!bVar45 || !bVar46))) &&
            ((!bVar36 || (!bVar47 || !bVar48)) && (!bVar37 && !bVar38))) ||
           (!bVar31 && ((!bVar39 || (!bVar49 || !bVar50)) && (!bVar40 && !bVar41)) ||
           (!bVar33 && (!bVar42 && !bVar43) || (!bVar34 || !bVar35))))) &&
          ((!bVar121 ||
           (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
           (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
          ((!bVar120 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
          ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11)))))) {
        uVar111 = 6;
      }
      bVar53 = !bVar122;
      bVar55 = !bVar30;
      bVar62 = !bVar32;
      bVar89 = !bVar44;
      bVar98 = !bVar51;
      bVar99 = !bVar52;
      bVar90 = !bVar45;
      bVar91 = !bVar46;
      bVar74 = !bVar36;
      bVar92 = !bVar47;
      bVar93 = !bVar48;
      bVar75 = !bVar37;
      bVar76 = !bVar38;
      bVar57 = !bVar31;
      bVar77 = !bVar39;
      bVar94 = !bVar49;
      bVar95 = !bVar50;
      bVar78 = !bVar40;
      bVar79 = !bVar41;
      bVar63 = !bVar33;
      bVar80 = !bVar42;
      bVar81 = !bVar43;
      bVar64 = !bVar34;
      bVar65 = !bVar35;
      bVar54 = !bVar121;
      bVar58 = !bVar19;
      bVar82 = !bVar23;
      bVar96 = !bVar28;
      bVar97 = !bVar29;
      bVar83 = !bVar24;
      bVar84 = !bVar25;
      bVar66 = !bVar20;
      bVar85 = !bVar26;
      bVar86 = !bVar27;
      bVar67 = !bVar21;
      bVar68 = !bVar22;
      bVar56 = !bVar120;
      bVar69 = !bVar14;
      bVar87 = !bVar17;
      bVar88 = !bVar18;
      bVar70 = !bVar15;
      bVar71 = !bVar16;
      bVar59 = !bVar119;
      bVar72 = !bVar12;
      bVar73 = !bVar13;
      bVar60 = !bVar10;
      bVar61 = !bVar11;
      iVar6 = *(int *)((longlong)&param_1[1].payload_end + 4);
      if (iVar6 != 0 &&
          ((!bVar123 ||
           (!bVar53 &&
            ((!bVar55 ||
             (!bVar62 && ((!bVar89 || (!bVar98 || !bVar99)) && (!bVar90 && !bVar91)) ||
             (!bVar74 && (!bVar92 && !bVar93) || (!bVar75 || !bVar76)))) &&
            ((!bVar57 || (!bVar77 && (!bVar94 && !bVar95) || (!bVar78 || !bVar79))) &&
            ((!bVar63 || (!bVar80 || !bVar81)) && (!bVar64 && !bVar65)))) ||
           (!bVar54 &&
            ((!bVar58 || (!bVar82 && (!bVar96 && !bVar97) || (!bVar83 || !bVar84))) &&
            ((!bVar66 || (!bVar85 || !bVar86)) && (!bVar67 && !bVar68))) ||
           (!bVar56 && ((!bVar69 || (!bVar87 || !bVar88)) && (!bVar70 && !bVar71)) ||
           (!bVar59 && (!bVar72 && !bVar73) || (!bVar60 || !bVar61)))))) &&
          ((!bVar122 ||
           (!bVar30 &&
            ((!bVar32 || (!bVar44 && (!bVar51 && !bVar52) || (!bVar45 || !bVar46))) &&
            ((!bVar36 || (!bVar47 || !bVar48)) && (!bVar37 && !bVar38))) ||
           (!bVar31 && ((!bVar39 || (!bVar49 || !bVar50)) && (!bVar40 && !bVar41)) ||
           (!bVar33 && (!bVar42 && !bVar43) || (!bVar34 || !bVar35))))) &&
          ((!bVar121 ||
           (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
           (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
          ((!bVar120 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
          ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11))))))) {
        uVar111 = 7;
      }
      if ((iVar6 == 0 ||
          (bVar123 &&
           ((bVar53 ||
            (bVar55 && ((bVar62 || (bVar89 && (bVar98 && bVar99) || (bVar90 || bVar91))) &&
                       ((bVar74 || (bVar92 || bVar93)) && (bVar75 && bVar76))) ||
            (bVar57 && ((bVar77 || (bVar94 || bVar95)) && (bVar78 && bVar79)) ||
            (bVar63 && (bVar80 && bVar81) || (bVar64 || bVar65))))) &&
           ((bVar54 ||
            (bVar58 && ((bVar82 || (bVar96 || bVar97)) && (bVar83 && bVar84)) ||
            (bVar66 && (bVar85 && bVar86) || (bVar67 || bVar68)))) &&
           ((bVar56 || (bVar69 && (bVar87 && bVar88) || (bVar70 || bVar71))) &&
           ((bVar59 || (bVar72 || bVar73)) && (bVar60 && bVar61))))) ||
          (bVar122 &&
           ((bVar30 ||
            (bVar32 && ((bVar44 || (bVar51 || bVar52)) && (bVar45 && bVar46)) ||
            (bVar36 && (bVar47 && bVar48) || (bVar37 || bVar38)))) &&
           ((bVar31 || (bVar39 && (bVar49 && bVar50) || (bVar40 || bVar41))) &&
           ((bVar33 || (bVar42 || bVar43)) && (bVar34 && bVar35)))) ||
          (bVar121 &&
           ((bVar19 || (bVar23 && (bVar28 && bVar29) || (bVar24 || bVar25))) &&
           ((bVar20 || (bVar26 || bVar27)) && (bVar21 && bVar22))) ||
          (bVar120 && ((bVar14 || (bVar17 || bVar18)) && (bVar15 && bVar16)) ||
          (bVar119 && (bVar12 && bVar13) || (bVar10 || bVar11))))))) == true &&
          ((!bVar123 ||
           (!bVar53 &&
            ((!bVar55 ||
             (!bVar62 && ((!bVar89 || (!bVar98 || !bVar99)) && (!bVar90 && !bVar91)) ||
             (!bVar74 && (!bVar92 && !bVar93) || (!bVar75 || !bVar76)))) &&
            ((!bVar57 || (!bVar77 && (!bVar94 && !bVar95) || (!bVar78 || !bVar79))) &&
            ((!bVar63 || (!bVar80 || !bVar81)) && (!bVar64 && !bVar65)))) ||
           (!bVar54 &&
            ((!bVar58 || (!bVar82 && (!bVar96 && !bVar97) || (!bVar83 || !bVar84))) &&
            ((!bVar66 || (!bVar85 || !bVar86)) && (!bVar67 && !bVar68))) ||
           (!bVar56 && ((!bVar69 || (!bVar87 || !bVar88)) && (!bVar70 && !bVar71)) ||
           (!bVar59 && (!bVar72 && !bVar73) || (!bVar60 || !bVar61)))))) &&
          ((!bVar122 ||
           (!bVar30 &&
            ((!bVar32 || (!bVar44 && (!bVar51 && !bVar52) || (!bVar45 || !bVar46))) &&
            ((!bVar36 || (!bVar47 || !bVar48)) && (!bVar37 && !bVar38))) ||
           (!bVar31 && ((!bVar39 || (!bVar49 || !bVar50)) && (!bVar40 && !bVar41)) ||
           (!bVar33 && (!bVar42 && !bVar43) || (!bVar34 || !bVar35))))) &&
          ((!bVar121 ||
           (!bVar19 && ((!bVar23 || (!bVar28 || !bVar29)) && (!bVar24 && !bVar25)) ||
           (!bVar20 && (!bVar26 && !bVar27) || (!bVar21 || !bVar22)))) &&
          ((!bVar120 || (!bVar14 && (!bVar17 && !bVar18) || (!bVar15 || !bVar16))) &&
          ((!bVar119 || (!bVar12 || !bVar13)) && (!bVar10 && !bVar11))))))) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar114 = (ulonglong)(iVar2 != 0);
      if (iVar3 != 0) {
        uVar114 = 2;
      }
      uVar115 = 3;
      if (param_1[1].scavenger_data == (pas_local_allocator_scavenger_data)0x0) {
        uVar115 = uVar114;
      }
      uVar114 = 4;
      if (*(int *)&param_1[1].alignment_shift == 0) {
        uVar114 = uVar115;
      }
      uVar115 = 5;
      if (*(int *)&param_1[1].config_kind == 0) {
        uVar115 = uVar114;
      }
      uVar114 = 6;
      if (iVar5 == 0) {
        uVar114 = uVar115;
      }
      uVar115 = 7;
      if (iVar4 == 0) {
        uVar115 = uVar114;
      }
      uVar114 = 8;
      if (iVar6 == 0) {
        uVar114 = uVar115;
      }
      uVar114 = uVar114 - uVar111;
      if (uVar114 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if (0xff < uVar114) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      puVar117 = (undefined8 *)((ulonglong)param_1->view & 0xfffffffffffffff8);
      *(char *)((longlong)puVar117 + 0xf) = (char)uVar114;
      if (0xff < uVar111) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      *(char *)(puVar117 + 2) = (char)uVar111;
      pvVar103 = pas_immortal_heap_allocate_with_manual_alignment
                           (uVar114 * 4,4,"pas_segregated_partial_view/alloc_bits",
                            pas_object_allocation);
      memcpy(pvVar103,(void *)((longlong)param_1->bits + uVar111 * 4),uVar114 * 4);
      *puVar117 = (void *)((longlong)pvVar103 + uVar111 * -4);
    }
    uVar111 = (ulonglong)param_1->remaining;
    if (uVar111 != 0) {
      uVar114 = param_1->payload_end;
      uVar115 = uVar114 - uVar111;
      if (uVar111 <= uVar114) {
        uVar9 = param_1->object_size;
        do {
          uVar101 = (uint)(uVar115 >> 0xc);
          uVar111 = (ulonglong)(uVar101 & 0x1c);
          uVar113 = *(uint *)((longlong)param_3->alloc_bits + uVar111) &
                    ~(1 << ((uint)(uVar115 >> 9) & 0x1f));
          *(uint *)((longlong)param_3->alloc_bits + uVar111) = uVar113;
          ppVar116 = param_3->owner;
          if (((uint)ppVar116 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar111 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar116 & 0xfffffffffffffff8) + 0x14 +
                             (ulonglong)((uint)(uVar115 >> 10) & 0x7c));
          ppVar108 = (pas_segregated_partial_view *)
                     (uVar111 * 8 + pas_compact_heap_reservation_base);
          if (uVar111 == 0) {
            ppVar108 = (pas_segregated_partial_view *)0x0;
          }
          if (!ppVar108->eligibility_has_been_noted) {
            pas_segregated_partial_view_note_eligibility(ppVar108,param_3);
            ppVar116 = param_3->owner;
          }
          uVar102 = (uint)uVar115 & 0x1ffff;
          if (((ulonglong)ppVar116 & 6) == 0) {
            uVar105 = param_3->object_size;
            if (uVar105 != 0) goto LAB_140d5f537;
LAB_140d5f55c:
            bVar10 = false;
          }
          else {
            if (((uint)ppVar116 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            uVar111 = (ulonglong)
                      *(uint *)(((ulonglong)ppVar116 & 0xfffffffffffffff8) + 0x14 +
                               (ulonglong)(uVar102 >> 0xc) * 4);
            lVar107 = pas_compact_heap_reservation_base + uVar111 * 8;
            if (uVar111 == 0) {
              lVar107 = 0;
            }
            uVar105 = *(uint *)((ulonglong)
                                ((uint)*(byte *)(lVar107 + 0xd) * 0x80000 +
                                (uint)*(ushort *)(lVar107 + 0xb) * 8) + 0x20 +
                               pas_compact_heap_reservation_base) & 0x7ffffff;
            if (uVar105 == 0) goto LAB_140d5f55c;
LAB_140d5f537:
            if (0x20000 < (ulonglong)uVar102 + (ulonglong)uVar105) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            uVar111 = ((ulonglong)uVar105 + (ulonglong)uVar102) - 1 >> 0xc;
            if (uVar111 < uVar102 >> 0xc) goto LAB_140d5f55c;
            uVar112 = (ulonglong)(uVar101 & 0x1f) - 1;
            bVar10 = false;
            do {
              cVar1 = *(char *)((longlong)param_3[1].alloc_bits + (uVar112 - 0xf));
              if (cVar1 == '\0') {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              if (cVar1 == -1) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              *(char *)((longlong)param_3[1].alloc_bits + (uVar112 - 0xf)) = cVar1 + -1;
              bVar10 = (bool)(bVar10 | (char)(cVar1 + -1) == '\0');
              uVar112 = uVar112 + 1;
            } while (uVar112 < uVar111);
          }
          if (pas_segregated_page_deallocate_should_verify_granules == true) {
            pas_segregated_page_verify_granules(param_3);
          }
          if (bVar10) {
            pas_segregated_page_note_emptiness_impl
                      (param_3,pas_note_emptiness_keep_num_non_empty_words);
          }
          if (uVar113 == 0) {
            uVar104 = (param_3->emptiness).num_non_empty_words_or_live_bytes - 1;
            if (uVar104 == 0) {
              pas_segregated_page_note_emptiness_impl
                        (param_3,pas_note_emptiness_clear_num_non_empty_words);
            }
            else {
              (param_3->emptiness).num_non_empty_words_or_live_bytes = uVar104;
            }
          }
          uVar115 = uVar115 + uVar9;
        } while (uVar115 < uVar114);
      }
    }
    if (param_1->current_offset != param_1->end_offset) {
      if (((uint)(int)(char)param_1->config_kind < 0xe) &&
         ((0x2aa8U >> ((int)(char)param_1->config_kind & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if (((ulonglong)param_2 & 6) == 0) {
        uVar111 = (ulonglong)
                  *(uint *)(pas_compact_heap_reservation_base + 0xc +
                           (ulonglong)(param_4->data).payload * 8);
        if (uVar111 < 8) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        local_68 = pas_compact_heap_reservation_base + uVar111;
        uVar111 = 0;
        local_70 = 8;
      }
      else {
        if ((uVar118 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        plVar106 = (longlong *)((ulonglong)param_2 & 0xfffffffffffffff8);
        if (*(byte *)((longlong)plVar106 + 0xf) == 0) {
          return;
        }
        uVar111 = (ulonglong)*(byte *)(plVar106 + 2);
        local_70 = (ulonglong)
                   ((uint)*(byte *)((longlong)plVar106 + 0xf) + (uint)*(byte *)(plVar106 + 2));
        local_68 = *plVar106;
      }
      bVar109 = (char)uVar111 << 5;
      do {
        uVar118 = *(uint *)((longlong)param_1->bits + uVar111 * 4) &
                  *(uint *)(local_68 + uVar111 * 4);
        if (uVar118 != 0) {
          do {
            uVar9 = 0;
            for (uVar101 = uVar118; (uVar101 & 1) == 0; uVar101 = uVar101 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            uVar101 = uVar9 | (int)uVar111 << 5;
            uVar114 = (ulonglong)(uVar101 >> 3 & 0x1c);
            uVar113 = *(uint *)((longlong)param_3->alloc_bits + uVar114) & ~(1 << (uVar9 & 0x1f));
            *(uint *)((longlong)param_3->alloc_bits + uVar114) = uVar113;
            ppVar116 = param_3->owner;
            if (((uint)ppVar116 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            uVar114 = (ulonglong)
                      *(uint *)(((ulonglong)ppVar116 & 0xfffffffffffffff8) + 0x14 +
                               (ulonglong)(uVar101 >> 1 & 0x7c));
            ppVar108 = (pas_segregated_partial_view *)
                       (uVar114 * 8 + pas_compact_heap_reservation_base);
            if (uVar114 == 0) {
              ppVar108 = (pas_segregated_partial_view *)0x0;
            }
            if (!ppVar108->eligibility_has_been_noted) {
              pas_segregated_partial_view_note_eligibility(ppVar108,param_3);
              ppVar116 = param_3->owner;
            }
            uVar114 = (ulonglong)((uVar101 & 0xff) << 9);
            if (((ulonglong)ppVar116 & 6) == 0) {
              uVar102 = param_3->object_size;
            }
            else {
              if (((uint)ppVar116 & 7) != 3) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              uVar115 = (ulonglong)
                        *(uint *)(((ulonglong)ppVar116 & 0xfffffffffffffff8) + 0x14 +
                                 (ulonglong)((uVar101 & 0xff) >> 3) * 4);
              lVar107 = pas_compact_heap_reservation_base + uVar115 * 8;
              if (uVar115 == 0) {
                lVar107 = 0;
              }
              uVar102 = *(uint *)((ulonglong)
                                  ((uint)*(byte *)(lVar107 + 0xd) * 0x80000 +
                                  (uint)*(ushort *)(lVar107 + 0xb) * 8) + 0x20 +
                                 pas_compact_heap_reservation_base) & 0x7ffffff;
            }
            if (uVar102 == 0) {
LAB_140d5fa3d:
              bVar10 = false;
            }
            else {
              if (0x20000 < uVar102 + uVar114) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              uVar114 = (uVar102 + uVar114) - 1 >> 0xc;
              if (uVar114 < (uVar101 & 0xff) >> 3) goto LAB_140d5fa3d;
              uVar115 = (ulonglong)((bVar109 + uVar9 & 0xff) >> 3) - 1;
              bVar10 = false;
              do {
                cVar1 = *(char *)((longlong)param_3[1].alloc_bits + (uVar115 - 0xf));
                if (cVar1 == '\0') {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                if (cVar1 == -1) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                *(char *)((longlong)param_3[1].alloc_bits + (uVar115 - 0xf)) = cVar1 + -1;
                bVar10 = (bool)(bVar10 | (char)(cVar1 + -1) == '\0');
                uVar115 = uVar115 + 1;
              } while (uVar115 < uVar114);
            }
            if (pas_segregated_page_deallocate_should_verify_granules == true) {
              pas_segregated_page_verify_granules(param_3);
            }
            if (bVar10) {
              pas_segregated_page_note_emptiness_impl
                        (param_3,pas_note_emptiness_keep_num_non_empty_words);
            }
            if (uVar113 == 0) {
              uVar104 = (param_3->emptiness).num_non_empty_words_or_live_bytes - 1;
              if (uVar104 == 0) {
                pas_segregated_page_note_emptiness_impl
                          (param_3,pas_note_emptiness_clear_num_non_empty_words);
              }
              else {
                (param_3->emptiness).num_non_empty_words_or_live_bytes = uVar104;
              }
            }
            bVar7 = (byte)uVar9 & 0x1f;
            uVar118 = uVar118 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
          } while (uVar118 != 0);
        }
        uVar111 = uVar111 + 1;
        bVar109 = bVar109 + 0x20;
      } while (uVar111 != local_70);
    }
  }
  return;
}

// bmalloc_small_bitfit_page_header_for_boundary @ 140d5fb00

pas_page_base * __cdecl bmalloc_small_bitfit_page_header_for_boundary(void *param_1)

{
  return param_1;
}

// bmalloc_small_bitfit_boundary_for_page_header @ 140d5fb10

void * __cdecl bmalloc_small_bitfit_boundary_for_page_header(pas_page_base *param_1)

{
  return param_1;
}

// bmalloc_small_bitfit_page_header_for_boundary_remote @ 140d5fb20

pas_page_base * __cdecl
bmalloc_small_bitfit_page_header_for_boundary_remote(pas_enumerator *param_1,void *param_2)

{
  return param_2;
}

// bmalloc_small_bitfit_create_page_header @ 140d5fb30

pas_page_base * __cdecl
bmalloc_small_bitfit_create_page_header
          (void *param_1,pas_page_kind param_2,pas_lock_hold_mode param_3)

{
  return param_1;
}

// bmalloc_small_bitfit_destroy_page_header @ 140d5fb40

void __cdecl
bmalloc_small_bitfit_destroy_page_header(pas_page_base *param_1,pas_lock_hold_mode param_2)

{
  return;
}

// bmalloc_heap_config_allocate_small_bitfit_page @ 140d5fb50

void * __cdecl
bmalloc_heap_config_allocate_small_bitfit_page
          (pas_segregated_heap *param_1,pas_physical_memory_transaction *param_2)

{
  void *pvVar1;
  pas_heap *ppVar2;
  
  ppVar2 = (pas_heap *)0x0;
  if (param_1->runtime_config->is_part_of_heap) {
    ppVar2 = (pas_heap *)param_1;
  }
  pvVar1 = pas_fast_megapage_cache_try_allocate
                     ((pas_megapage_cache *)(*(longlong *)(param_1->runtime_config + 1) + 0xa0),
                      &bmalloc_megapage_table,&bmalloc_heap_config.small_bitfit_config.base,
                      pas_small_other_fast_megapage_kind,false,ppVar2,param_2);
  return pvVar1;
}

// bmalloc_small_bitfit_page_config_specialized_allocator_try_allocate @ 140d5fba0

pas_fast_path_allocation_result * __cdecl
bmalloc_small_bitfit_page_config_specialized_allocator_try_allocate
          (pas_fast_path_allocation_result *__return_storage_ptr__,pas_bitfit_allocator *param_1,
          pas_local_allocator *param_2,ulong64 param_3,ulong64 param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  ushort uVar3;
  longlong lVar4;
  void *pvVar5;
  pas_thread_local_cache *ppVar6;
  bool bVar7;
  ulonglong uVar8;
  pas_bitfit_view *ppVar9;
  sbyte sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong *puVar18;
  uint uVar19;
  pas_fast_path_allocation_result_kind pVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulong64 uVar24;
  code *pcVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ushort local_88;
  
  uVar14 = 0x10;
  if (param_3 != 0) {
    uVar14 = param_3 + 0xf & 0xfffffffffffffff0;
  }
  ppVar9 = param_1->view;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar11 = uVar14 >> 4;
  lVar1 = uVar14 - 1;
  uVar21 = ~(-1L << ((byte)uVar11 & 0x3f));
  if (uVar14 == 0x400) {
    uVar21 = 0xffffffffffffffff;
  }
  pcVar25 = AcquireSRWLockExclusive_exref;
  if (ppVar9 == (pas_bitfit_view *)0x0) goto LAB_140d5ff46;
  do {
    do {
      (*pcVar25)();
      if ((ppVar9->is_owned == false) &&
         (bVar7 = pas_bitfit_allocator_commit_view
                            (ppVar9,&bmalloc_heap_config.small_bitfit_config,pas_lock_is_not_held),
         !bVar7)) {
        pVar20 = pas_fast_path_allocation_result_out_of_memory;
        uVar24 = 0;
LAB_140d60154:
        ReleaseSRWLockExclusive((PSRWLOCK)&ppVar9->ownership_lock);
        goto LAB_140d60162;
      }
      pvVar5 = ppVar9->page_boundary;
      uVar22 = 0;
      uVar29 = 0;
      do {
        uVar15 = *(ulonglong *)((longlong)pvVar5 + uVar29 * 8 + 0x10);
        if (uVar15 != 0) {
          uVar8 = 0;
          uVar13 = uVar15;
LAB_140d5fca8:
          do {
            lVar17 = 0;
            for (uVar23 = uVar15; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              lVar17 = lVar17 + 1;
            }
            uVar23 = uVar15 >> ((byte)lVar17 & 0x3f) ^ 0xffffffffffffffff;
            local_88 = (ushort)uVar11;
            if (uVar23 == 0) {
              uVar12 = 0x40;
              uVar23 = uVar11 - 0x40;
              if (0x3f < uVar11 && uVar23 != 0) goto LAB_140d5fcf7;
LAB_140d5fd80:
              uVar28 = lVar17 + uVar8;
              if (0x10 < param_4) {
                lVar27 = uVar29 * 0x40 + uVar28;
                uVar28 = lVar27 * 0x10 + (param_4 - 1) & -param_4;
                if ((lVar27 + uVar12) * 0x10 - uVar28 < uVar14) goto LAB_140d5fcf7;
                if (lVar1 + uVar28 >> 10 != uVar29) {
                    /* WARNING: Does not return */
                  pcVar25 = (code *)invalidInstructionException();
                  (*pcVar25)();
                }
                uVar29 = uVar28 >> 10;
                uVar28 = (ulonglong)((uint)(uVar28 >> 4) & 0x3f);
              }
              puVar18 = (ulonglong *)((longlong)pvVar5 + uVar29 * 8 + 0x90);
              *puVar18 = *puVar18 | 1L << ((char)(uVar11 + 0x3f) + (byte)uVar28 & 0x3f);
              *(ulonglong *)((longlong)pvVar5 + uVar29 * 8 + 0x10) =
                   uVar13 & ~(uVar21 << ((byte)uVar28 & 0x3f));
              uVar3 = *(ushort *)((longlong)pvVar5 + 2);
              if (uVar3 == 0) {
                pas_bitfit_view_note_nonemptiness(ppVar9);
              }
              if (CARRY2(uVar3,local_88)) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)invalidInstructionException();
                (*pcVar25)();
              }
LAB_140d6013e:
              *(ushort *)((longlong)pvVar5 + 2) = uVar3 + local_88;
              uVar24 = (longlong)pvVar5 + uVar29 * 0x400 + uVar28 * 0x10;
              pVar20 = pas_fast_path_allocation_result_success;
              goto LAB_140d60154;
            }
            uVar12 = 0;
            for (; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar12 = uVar12 + 1;
            }
            uVar23 = uVar11 - uVar12;
            if (uVar11 < uVar12 || uVar23 == 0) goto LAB_140d5fd80;
LAB_140d5fcf7:
            uVar28 = lVar17 + uVar8;
            if (uVar12 + uVar28 < 0x40) {
              if (uVar22 <= uVar12) {
                uVar22 = uVar12;
              }
              uVar8 = uVar8 + lVar17 + uVar12;
              uVar15 = uVar15 >> ((byte)(lVar17 + uVar12) & 0x3f);
              if (uVar15 == 0) break;
              goto LAB_140d5fca8;
            }
            uVar15 = uVar29 + 1;
            if (0xf < uVar15) {
LAB_140d5feea:
              uVar28 = (uVar15 - uVar29) * 0x40 - uVar28;
              if (uVar22 <= uVar28) {
                uVar22 = uVar28;
              }
              goto LAB_140d5fefb;
            }
            uVar12 = uVar28 * 0x10 + (param_4 - 1) + uVar29 * 0x400 & -param_4;
            if (param_4 < 0x11) {
              uVar26 = ~uVar29;
              puVar18 = (ulonglong *)((longlong)pvVar5 + uVar29 * 8 + 0x18);
              while (uVar16 = *puVar18, uVar16 == 0xffffffffffffffff) {
                if (uVar23 < 0x41) {
                  uVar26 = -uVar26;
                  uVar16 = 0xffffffffffffffff;
                  goto LAB_140d5ffe9;
                }
                uVar23 = uVar23 - 0x40;
                uVar26 = uVar26 - 1;
                puVar18 = puVar18 + 1;
                if (uVar26 == 0xfffffffffffffff0) {
                  uVar15 = 0x10;
                  goto LAB_140d5feea;
                }
              }
              uVar26 = -uVar26;
            }
            else {
              lVar17 = uVar29 * -8;
              uVar8 = (uVar29 * 0x400 - uVar12) + 0x800;
              uVar26 = uVar29;
              while (uVar16 = *(ulonglong *)((longlong)pvVar5 + uVar26 * 8 + 0x18),
                    uVar16 == 0xffffffffffffffff) {
                if (uVar23 < 0x41) {
                  if (uVar14 <= uVar8) {
                    if ((lVar1 + uVar12 >> 10) - 1 != uVar26) {
                    /* WARNING: Does not return */
                      pcVar25 = (code *)invalidInstructionException();
                      (*pcVar25)();
                    }
                    puVar18 = (ulonglong *)((longlong)pvVar5 + (0x18 - lVar17));
                    uVar29 = uVar12 >> 10;
                    uVar28 = (ulonglong)((uint)(uVar12 >> 4) & 0x3f);
                    uVar26 = uVar26 + 1;
                    uVar16 = 0xffffffffffffffff;
                    goto LAB_140d5ffe9;
                  }
                }
                else {
                  uVar23 = uVar23 - 0x40;
                }
                uVar26 = uVar26 + 1;
                lVar17 = lVar17 + -8;
                uVar8 = uVar8 + 0x400;
                uVar15 = 0x10;
                if (uVar26 == 0xf) goto LAB_140d5feea;
              }
              uVar26 = uVar26 + 1;
            }
            uVar8 = 0;
            for (uVar15 = ~uVar16; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
              uVar8 = uVar8 + 1;
            }
            if (uVar23 <= uVar8) {
              if (param_4 < 0x11) {
                puVar18 = (ulonglong *)((longlong)pvVar5 + uVar26 * 8 + 0x10);
              }
              else {
                if ((uVar26 * 0x400 - uVar12) + (ulonglong)(uint)((int)uVar8 << 4) < uVar14)
                goto LAB_140d5fe14;
                if (lVar1 + uVar12 >> 10 != uVar26) {
                    /* WARNING: Does not return */
                  pcVar25 = (code *)invalidInstructionException();
                  (*pcVar25)();
                }
                puVar18 = (ulonglong *)((longlong)pvVar5 + uVar26 * 8 + 0x10);
                uVar29 = uVar12 >> 10;
                uVar28 = (ulonglong)((uint)(uVar12 >> 4) & 0x3f);
              }
LAB_140d5ffe9:
              uVar14 = (uVar13 << (-(char)uVar28 & 0x3fU)) >> (-(char)uVar28 & 0x3fU);
              uVar19 = (int)(uVar11 + 0x3f) + (int)uVar28 & 0x3f;
              if (uVar28 == 0) {
                uVar14 = 0;
              }
              *(ulonglong *)((longlong)pvVar5 + uVar29 * 8 + 0x10) = uVar14;
              if (uVar29 + 1 < uVar26) {
                memset((void *)((longlong)pvVar5 + uVar29 * 8 + 0x18),0,(~uVar29 + uVar26) * 8);
              }
              sVar10 = (sbyte)uVar19;
              puVar2 = (ulonglong *)((longlong)pvVar5 + uVar26 * 8 + 0x90);
              *puVar2 = *puVar2 | 1L << sVar10;
              uVar14 = 0;
              if (uVar19 != 0x3f) {
                uVar14 = -2L << sVar10 & uVar16;
              }
              *puVar18 = uVar14;
              uVar3 = *(ushort *)((longlong)pvVar5 + 2);
              if (uVar3 == 0) {
                pas_bitfit_view_note_nonemptiness(ppVar9);
              }
              if (CARRY2(uVar3,local_88)) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)invalidInstructionException();
                (*pcVar25)();
              }
              goto LAB_140d6013e;
            }
LAB_140d5fe14:
            uVar29 = (uVar26 * 0x40 - (uVar29 * 0x40 + uVar28)) + uVar8;
            if (uVar22 <= uVar29) {
              uVar22 = uVar29;
            }
            uVar15 = uVar16 >> ((byte)uVar8 & 0x3f);
            uVar13 = uVar16;
            uVar29 = uVar26;
          } while (uVar15 != 0);
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 < 0x10);
LAB_140d5fefb:
      ppVar9 = pas_bitfit_allocator_finish_failing
                         (param_1,ppVar9,uVar14,param_4,uVar22 << 4,
                          &bmalloc_heap_config.small_bitfit_config);
      pcVar25 = AcquireSRWLockExclusive_exref;
    } while (ppVar9 != (pas_bitfit_view *)0x0);
LAB_140d5ff46:
    pcVar25 = AcquireSRWLockExclusive_exref;
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar6 = *(pas_thread_local_cache **)(lVar4 + 0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar6) {
      pas_thread_local_cache_stop_local_allocators_if_necessary(ppVar6,param_2);
    }
    ppVar9 = pas_bitfit_size_class_get_first_free_view
                       (param_1->size_class,&bmalloc_heap_config.small_bitfit_config);
    if (ppVar9 == (pas_bitfit_view *)0x0) {
      pVar20 = pas_fast_path_allocation_result_out_of_memory;
      uVar24 = 0;
LAB_140d60162:
      __return_storage_ptr__->kind = pVar20;
      __return_storage_ptr__->begin = uVar24;
      return __return_storage_ptr__;
    }
    param_1->view = ppVar9;
  } while( true );
}

// bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page @ 140d601c0

void __cdecl
bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
          (pas_bitfit_page *param_1,ulong64 param_2)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ushort uVar8;
  char *pcVar9;
  sbyte sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  pas_bitfit_view *ppVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ushort uVar17;
  uint uVar18;
  
  uVar18 = (uint)param_2 & 0x3fff;
  uVar12 = (ulonglong)(param_1->owner).payload;
  ppVar13 = (pas_bitfit_view *)(uVar12 * 8 + pas_compact_heap_reservation_base);
  if (uVar12 == 0) {
    ppVar13 = (pas_bitfit_view *)0x0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&ppVar13->ownership_lock);
  if ((ulonglong)uVar18 < 0x110) {
                    /* WARNING: Subroutine does not return */
    pas_deallocation_did_fail("attempt to free bitfit page header",param_2);
  }
  uVar7 = uVar18 >> 4;
  if (uVar18 != 0x110) {
    uVar12 = (ulonglong)uVar7 - 1;
    if (((*(uint *)((longlong)param_1->bits + (uVar12 >> 5) * 4) >> ((uint)uVar12 & 0x1f) & 1) == 0)
       && ((*(uint *)((longlong)param_1[6].bits + (uVar12 >> 5) * 4 + -0x10) &
           1 << ((byte)uVar12 & 0x1f)) == 0)) {
      pcVar9 = "previous bit is not free or end of object";
      goto LAB_140d603da;
    }
  }
  if ((*(uint *)((longlong)param_1->bits + (ulonglong)(uVar18 >> 9) * 4) >> (uVar7 & 0x1f) & 1) == 0
     ) {
    uVar14 = (ulonglong)(uVar18 >> 10);
    uVar12 = param_1[6].bits[uVar14 - 2];
    sVar10 = (sbyte)(uVar7 & 0x3f);
    uVar11 = uVar12 >> sVar10;
    if (uVar11 == 0) {
      lVar15 = (ulonglong)(uVar7 & 0x3f) - 1;
      uVar12 = uVar14;
      do {
        uVar11 = uVar12;
        if (uVar11 == 0xf) {
          pcVar9 = "object falls off end of page";
          goto LAB_140d603da;
        }
        uVar3 = param_1[6].bits[uVar11 - 1];
        uVar12 = uVar11 + 1;
        lVar15 = lVar15 + -0x40;
      } while (uVar3 == 0);
      if (uVar11 < uVar14) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar6 = 0;
      for (uVar16 = uVar3; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
        uVar6 = uVar6 + 1;
      }
      lVar15 = uVar6 - lVar15;
      uVar16 = ~(-2L << ((byte)uVar6 & 0x3f));
      if (uVar6 == 0x3f) {
        uVar16 = 0xffffffffffffffff;
      }
      param_1[1].bits[uVar11 - 2] = param_1[1].bits[uVar11 - 2] | uVar16;
      param_1[6].bits[uVar11 - 1] = uVar3 & ~(1L << (uVar6 & 0x3f));
      param_1->bits[uVar14] = param_1->bits[uVar14] | -1L << sVar10;
      if (uVar14 < uVar11) {
        uVar11 = uVar14 + 2;
        if (uVar14 + 2 < uVar12) {
          uVar11 = uVar12;
        }
        memset(param_1[1].bits + (uVar14 - 2),(int)CONCAT71((int7)(uVar12 >> 8),0xff),
               (uVar11 + ~uVar14) * 8);
        cVar1 = param_1->did_note_max_free;
      }
      else {
        cVar1 = param_1->did_note_max_free;
      }
    }
    else {
      lVar5 = 0;
      for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
        lVar5 = lVar5 + 1;
      }
      lVar15 = lVar5 + 1;
      uVar11 = 0xffffffffffffffff;
      if (lVar15 != 0x40) {
        uVar11 = ~(-2L << ((byte)lVar5 & 0x3f));
      }
      param_1->bits[uVar14] = param_1->bits[uVar14] | uVar11 << sVar10;
      param_1[6].bits[uVar14 - 2] = uVar12 & ~(1L << ((ulonglong)((int)lVar5 + uVar7) & 0x3f));
      cVar1 = param_1->did_note_max_free;
    }
    uVar17 = (ushort)lVar15;
    if (cVar1 == '\0') {
      pas_bitfit_view_note_max_free(ppVar13);
      param_1->did_note_max_free = true;
      uVar2 = param_1->num_live_bits;
      uVar8 = uVar2 - uVar17;
      param_1->num_live_bits = uVar8;
    }
    else {
      uVar2 = param_1->num_live_bits;
      uVar8 = uVar2 - uVar17;
      param_1->num_live_bits = uVar8;
    }
    if (uVar17 <= uVar2) {
      if (uVar8 == 0) {
        pas_bitfit_view_note_full_emptiness(ppVar13,param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x000140d60381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&ppVar13->ownership_lock);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  pcVar9 = "free bit set";
LAB_140d603da:
                    /* WARNING: Subroutine does not return */
  pas_bitfit_page_deallocation_did_fail
            (param_1,pas_bitfit_page_config_kind_bmalloc_small_bitfit,param_2,(ulonglong)uVar18,
             pcVar9);
}

// bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page @ 140d60420

ulong64 __cdecl
bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
          (pas_bitfit_page *param_1,ulong64 param_2)

{
  longlong lVar1;
  ulong64 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (ulonglong)((uint)param_2 >> 10 & 0xf);
  uVar3 = (uint)(param_2 >> 4) & 0x3f;
  uVar6 = param_1[6].bits[uVar5 - 2] >> (sbyte)uVar3;
  if (uVar6 != 0) {
    lVar4 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
      lVar4 = lVar4 + 1;
    }
    return lVar4 * 0x10 + 0x10;
  }
  lVar4 = -(ulonglong)uVar3;
  puVar2 = param_1[6].bits + (uVar5 - 1);
  do {
    uVar6 = *puVar2;
    lVar4 = lVar4 + 0x40;
    puVar2 = puVar2 + 1;
  } while (uVar6 == 0);
  lVar1 = 0;
  for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
    lVar1 = lVar1 + 1;
  }
  return (lVar1 + lVar4) * 0x10 + 0x10;
}

// bmalloc_small_bitfit_page_config_specialized_page_shrink_with_page @ 140d60490

void __cdecl
bmalloc_small_bitfit_page_config_specialized_page_shrink_with_page
          (pas_bitfit_page *param_1,ulong64 param_2,ulong64 param_3)

{
  uint *puVar1;
  ushort uVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  sbyte sVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  pas_bitfit_view *ppVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ushort uVar20;
  uint uVar22;
  ulonglong uVar21;
  
  uVar7 = (ulonglong)(param_1->owner).payload;
  ppVar15 = (pas_bitfit_view *)(uVar7 * 8 + pas_compact_heap_reservation_base);
  uVar22 = (uint)param_2 & 0x3fff;
  if (uVar7 == 0) {
    ppVar15 = (pas_bitfit_view *)0x0;
  }
  uVar7 = 1;
  if (param_3 != 0) {
    uVar7 = param_3 + 0xf >> 4;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&ppVar15->ownership_lock);
  if ((ulonglong)uVar22 < 0x110) {
                    /* WARNING: Subroutine does not return */
    pas_deallocation_did_fail("attempt to free bitfit page header",param_2);
  }
  uVar5 = uVar22 >> 4;
  uVar13 = (ulonglong)uVar5;
  if (uVar22 != 0x110) {
    uVar18 = uVar13 - 1;
    if (((*(uint *)((longlong)param_1->bits + (uVar18 >> 5) * 4) >> ((uint)uVar18 & 0x1f) & 1) == 0)
       && ((*(uint *)((longlong)param_1[6].bits + (uVar18 >> 5) * 4 + -0x10) &
           1 << ((byte)uVar18 & 0x1f)) == 0)) {
      pcVar9 = "previous bit is not free or end of object";
      goto LAB_140d6077d;
    }
  }
  if ((*(uint *)((longlong)param_1->bits + (ulonglong)(uVar22 >> 9) * 4) >> (uVar5 & 0x1f) & 1) != 0
     ) {
    pcVar9 = "free bit set";
LAB_140d6077d:
                    /* WARNING: Subroutine does not return */
    pas_bitfit_page_deallocation_did_fail
              (param_1,pas_bitfit_page_config_kind_bmalloc_small_bitfit,param_2,(ulonglong)uVar22,
               pcVar9);
  }
  uVar14 = (ulonglong)(uVar22 >> 10);
  uVar8 = (ulonglong)(uVar5 & 0x3f);
  uVar18 = param_1[6].bits[uVar14 - 2];
  sVar10 = (sbyte)(uVar5 & 0x3f);
  uVar17 = uVar18 >> sVar10;
  uVar19 = uVar14;
  uVar21 = uVar7;
  if (uVar17 == 0) {
    do {
      uVar18 = uVar19;
      if (uVar18 == 0xf) {
        pcVar9 = "object falls off end of page";
        goto LAB_140d6077d;
      }
      uVar17 = param_1[6].bits[uVar18 - 1];
      uVar19 = uVar18 + 1;
      uVar8 = uVar8 - 0x40;
    } while (uVar17 == 0);
    if (uVar18 < uVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar14 = 0;
    for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
      uVar14 = uVar14 + 1;
    }
    uVar17 = (uVar14 - uVar8) + 1;
    if (uVar7 <= uVar17) {
      if ((uVar14 - uVar7) + 1 != uVar8) {
        uVar16 = uVar7 + uVar13 >> 6;
        uVar22 = (uint)(uVar7 + uVar13) & 0x3f;
        uVar13 = (uVar7 + uVar13) - 1;
        puVar1 = (uint *)((longlong)param_1[6].bits + (uVar13 >> 5) * 4 + -0x10);
        *puVar1 = *puVar1 | 1 << ((byte)uVar13 & 0x1f);
        uVar13 = param_1[6].bits[uVar18 - 1];
        uVar21 = uVar17;
        if (uVar16 == uVar19) {
          if (uVar22 - uVar7 != uVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar17 = (uVar14 - uVar22) + 1;
          if (0x40 < uVar17) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar19 = ~(-1L << ((byte)uVar17 & 0x3f));
          if (uVar17 == 0x40) {
            uVar19 = 0xffffffffffffffff;
          }
          param_1[1].bits[uVar18 - 2] = param_1[1].bits[uVar18 - 2] | uVar19 << (sbyte)uVar22;
          param_1[6].bits[uVar18 - 1] = uVar13 & ~(1L << (uVar14 & 0x3f));
        }
        else {
          uVar17 = ~(-2L << ((byte)uVar14 & 0x3f));
          if (uVar14 == 0x3f) {
            uVar17 = 0xffffffffffffffff;
          }
          param_1[1].bits[uVar18 - 2] = param_1[1].bits[uVar18 - 2] | uVar17;
          param_1[6].bits[uVar18 - 1] = uVar13 & ~(1L << (uVar14 & 0x3f));
          param_1->bits[uVar16] = param_1->bits[uVar16] | -1L << (sbyte)uVar22;
          if (uVar16 < uVar18) {
            uVar13 = uVar16 + 2;
            if (uVar16 + 2 < uVar19) {
              uVar13 = uVar19;
            }
            memset(param_1[1].bits + (uVar16 - 2),(int)CONCAT71((int7)(uVar14 >> 8),0xff),
                   (uVar13 + ~uVar16) * 8);
          }
        }
      }
      goto LAB_140d60725;
    }
  }
  else {
    lVar4 = 0;
    for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
      lVar4 = lVar4 + 1;
    }
    uVar13 = lVar4 + 1;
    lVar12 = uVar13 - uVar7;
    if (uVar7 <= uVar13) {
      if (lVar12 != 0) {
        uVar17 = ~(-1L << ((byte)lVar12 & 0x3f));
        if (lVar12 == 0x40) {
          uVar17 = 0xffffffffffffffff;
        }
        bVar11 = sVar10 + (char)uVar7;
        param_1->bits[uVar14] = param_1->bits[uVar14] | uVar17 << (bVar11 & 0x3f);
        param_1[6].bits[uVar14 - 2] =
             uVar18 & ~(1L << ((ulonglong)((int)lVar4 + uVar5) & 0x3f)) |
             1L << ((ulonglong)(byte)(bVar11 - 1) & 0x3f);
        uVar21 = uVar13;
      }
LAB_140d60725:
      uVar20 = (short)uVar21 - (short)uVar7;
      if (param_1->did_note_max_free == false) {
        pas_bitfit_view_note_max_free(ppVar15);
        param_1->did_note_max_free = true;
      }
      uVar2 = param_1->num_live_bits;
      uVar6 = uVar2 - uVar20;
      param_1->num_live_bits = uVar6;
      if (uVar2 < uVar20) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar6 == 0) {
        pas_bitfit_view_note_full_emptiness(ppVar15,param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x000140d60767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&ppVar15->ownership_lock);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pas_deallocation_did_fail("attempt to shrink to a larger size",param_2);
}

// bmalloc_medium_bitfit_page_header_for_boundary @ 140d607d0

pas_page_base * __cdecl bmalloc_medium_bitfit_page_header_for_boundary(void *param_1)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (bmalloc_medium_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
    return (pas_page_base *)0x0;
  }
  uVar2 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
  uVar2 = uVar2 * 0x20 + (uVar2 ^ 0xdeadbeef);
  uVar2 = uVar2 >> 0xb ^ uVar2;
  uVar3 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar2);
  pvVar1 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].low;
  while( true ) {
    if (pvVar1 == param_1) {
      return (pas_page_base *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].high;
    }
    uVar2 = uVar2 + 1;
    if (pvVar1 == (void *)0xffffffffffffffff) break;
    uVar3 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar2);
    pvVar1 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].low;
  }
  return (pas_page_base *)0x0;
}

// bmalloc_medium_bitfit_boundary_for_page_header @ 140d60870

void * __cdecl bmalloc_medium_bitfit_boundary_for_page_header(pas_page_base *param_1)

{
  return *(void **)(param_1 + -0x10);
}

// bmalloc_medium_bitfit_page_header_for_boundary_remote @ 140d60880

pas_page_base * __cdecl
bmalloc_medium_bitfit_page_header_for_boundary_remote(pas_enumerator *param_1,void *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  plVar2 = param_1->heap_config_datas[2];
  if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    uVar6 = (uint)((ulonglong)param_2 >> 4) & 0xfffffff ^ (uint)param_2;
    uVar7 = (uint)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar7 >> 4 ^ uVar7;
    uVar6 = uVar7 * 0x20 + (uVar7 ^ 0xdeadbeef) ^ uVar6 * 0x20 + (uVar6 ^ 0xdeadbeef);
    uVar6 = uVar6 >> 0xb ^ uVar6;
    do {
      lVar8 = (ulonglong)(uVar6 & *(uint *)((longlong)plVar2 + 0xc)) * 0x10;
      lVar1 = lVar3 + lVar8;
      pvVar4 = *(void **)(lVar3 + lVar8);
      if (pvVar4 == (void *)0xffffffffffffffff) {
        if (*(longlong *)(lVar1 + 8) != 1) {
          return (pas_page_base *)0x0;
        }
      }
      else if (pvVar4 == param_2) {
        return *(pas_page_base **)(lVar1 + 8);
      }
      uVar6 = uVar6 + 1;
    } while( true );
  }
  return (pas_page_base *)0x0;
}

// bmalloc_medium_bitfit_create_page_header @ 140d60930

pas_page_base * __cdecl
bmalloc_medium_bitfit_create_page_header
          (void *param_1,pas_page_kind param_2,pas_lock_hold_mode param_3)

{
  ulong64 uVar1;
  pas_page_base *ppVar2;
  
  if (param_3 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  uVar1 = pas_page_base_header_size(&bmalloc_heap_config.medium_bitfit_config.base,param_2);
  ppVar2 = pas_page_header_table_add(&bmalloc_medium_page_header_table,0x20000,uVar1,param_1);
  if (param_3 == pas_lock_is_not_held) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  return ppVar2;
}

// bmalloc_medium_bitfit_destroy_page_header @ 140d609a0

void __cdecl
bmalloc_medium_bitfit_destroy_page_header(pas_page_base *param_1,pas_lock_hold_mode param_2)

{
  if (param_2 != pas_lock_is_not_held) {
    pas_page_header_table_remove(&bmalloc_medium_page_header_table,0x20000,param_1);
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  pas_page_header_table_remove(&bmalloc_medium_page_header_table,0x20000,param_1);
                    /* WARNING: Could not recover jumptable at 0x000140d609f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  return;
}

// bmalloc_heap_config_allocate_medium_bitfit_page @ 140d60a10

void * __cdecl
bmalloc_heap_config_allocate_medium_bitfit_page
          (pas_segregated_heap *param_1,pas_physical_memory_transaction *param_2)

{
  void *pvVar1;
  pas_heap *ppVar2;
  
  ppVar2 = (pas_heap *)0x0;
  if (param_1->runtime_config->is_part_of_heap) {
    ppVar2 = (pas_heap *)param_1;
  }
  pvVar1 = pas_medium_megapage_cache_try_allocate
                     ((pas_megapage_cache *)(*(longlong *)(param_1->runtime_config + 1) + 0x100),
                      &bmalloc_heap_config.medium_bitfit_config.base,false,ppVar2,param_2);
  return pvVar1;
}

// bmalloc_medium_bitfit_page_config_specialized_allocator_try_allocate @ 140d60a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

pas_fast_path_allocation_result * __cdecl
bmalloc_medium_bitfit_page_config_specialized_allocator_try_allocate
          (pas_fast_path_allocation_result *__return_storage_ptr__,pas_bitfit_allocator *param_1,
          pas_local_allocator *param_2,ulong64 param_3,ulong64 param_4)

{
  longlong lVar1;
  pas_lock *SRWLock;
  longlong lVar2;
  longlong lVar3;
  ulong64 uVar4;
  ulonglong *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  void *pvVar10;
  void *pvVar11;
  pas_thread_local_cache *ppVar12;
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  unkbyte10 Var15;
  undefined1 auVar16 [14];
  undefined1 auVar17 [12];
  undefined1 auVar18 [14];
  undefined1 auVar19 [12];
  undefined1 auVar20 [14];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  BOOLEAN BVar23;
  char cVar24;
  ulonglong uVar25;
  pas_bitfit_view *ppVar26;
  pas_fast_path_allocation_result *ppVar27;
  byte bVar28;
  sbyte sVar29;
  ulonglong uVar30;
  pas_lock *SRWLock_00;
  ulonglong uVar31;
  ulonglong *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulong64 uVar35;
  ulonglong uVar36;
  code *pcVar37;
  pas_fast_path_allocation_result_kind pVar38;
  longlong lVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  longlong lVar46;
  uint uVar47;
  ulonglong uVar48;
  ulong64 uVar49;
  bool bVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar73;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar68 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar83 [16];
  undefined1 unaff_XMM6_Ba;
  char cVar84;
  undefined1 unaff_XMM6_Bb;
  char cVar85;
  undefined1 unaff_XMM6_Bc;
  char cVar86;
  undefined1 unaff_XMM6_Bd;
  char cVar87;
  undefined1 unaff_XMM6_Be;
  char cVar88;
  undefined1 unaff_XMM6_Bf;
  char cVar89;
  undefined1 unaff_XMM6_Bg;
  char cVar90;
  undefined1 unaff_XMM6_Bh;
  char cVar91;
  undefined1 auStackY_158 [32];
  ulonglong local_120;
  ulonglong local_118;
  ushort local_d8;
  int local_c0;
  pas_commit_span local_90;
  ulonglong local_70;
  undefined1 auVar61 [16];
  undefined1 auVar66 [16];
  undefined1 auVar62 [16];
  undefined1 auVar67 [16];
  undefined2 uVar72;
  undefined1 auVar76 [16];
  undefined1 auVar81 [16];
  undefined1 auVar77 [16];
  undefined1 auVar82 [16];
  
  auVar22 = ___xmm_00000001000000010000000100000001;
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar31 = 0x200;
  if (param_3 != 0) {
    uVar31 = param_3 + 0x1ff & 0xfffffffffffffe00;
  }
  ppVar26 = param_1->view;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar30 = uVar31 >> 9;
  lVar1 = uVar31 - 1;
  uVar42 = ~(-1L << ((byte)uVar30 & 0x3f));
  if (uVar31 == 0x8000) {
    uVar42 = 0xffffffffffffffff;
  }
  iVar51 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                  CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar84 = (char)iVar51;
  cVar85 = (char)((uint)iVar51 >> 8);
  cVar86 = (char)((uint)iVar51 >> 0x10);
  cVar87 = (char)((uint)iVar51 >> 0x18);
  iVar51 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar88 = (char)iVar51;
  cVar89 = (char)((uint)iVar51 >> 8);
  cVar90 = (char)((uint)iVar51 >> 0x10);
  cVar91 = (char)((uint)iVar51 >> 0x18);
  pcVar37 = AcquireSRWLockExclusive_exref;
  do {
    if (ppVar26 == (pas_bitfit_view *)0x0) {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      ppVar12 = *(pas_thread_local_cache **)(lVar9 + 0x9c08);
      if ((pas_thread_local_cache *)&DAT_00000001 < ppVar12) {
        pas_thread_local_cache_stop_local_allocators_if_necessary(ppVar12,param_2);
      }
      ppVar26 = pas_bitfit_size_class_get_first_free_view
                          (param_1->size_class,&bmalloc_heap_config.medium_bitfit_config);
      if (ppVar26 == (pas_bitfit_view *)0x0) {
        pVar38 = pas_fast_path_allocation_result_out_of_memory;
        uVar49 = 0;
        goto LAB_140d6168d;
      }
      param_1->view = ppVar26;
    }
    SRWLock_00 = &ppVar26->commit_lock;
    SRWLock = &ppVar26->ownership_lock;
    bVar50 = false;
    uVar47 = 0;
LAB_140d60bc5:
    (*pcVar37)(SRWLock);
    if ((ppVar26->is_owned == false) &&
       (bVar50 = pas_bitfit_allocator_commit_view
                           (ppVar26,&bmalloc_heap_config.medium_bitfit_config,(uint)bVar50), !bVar50
       )) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      uVar49 = 0;
      pVar38 = pas_fast_path_allocation_result_out_of_memory;
      if (uVar47 == 0) goto LAB_140d6168d;
      goto LAB_140d61687;
    }
    if (bmalloc_medium_page_header_table.hashtable.table ==
        (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d60c70:
      uVar49 = 0;
    }
    else {
      pvVar10 = ppVar26->page_boundary;
      uVar41 = (uint)((ulonglong)pvVar10 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)pvVar10 >> 0x11);
      uVar41 = uVar41 * 0x20 + (uVar41 ^ 0xdeadbeef);
      uVar41 = uVar41 >> 0xb ^ uVar41;
      uVar48 = (ulonglong)(uVar41 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
      pvVar11 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar48].low;
      while (pvVar11 != pvVar10) {
        uVar41 = uVar41 + 1;
        if (pvVar11 == (void *)0xffffffffffffffff) goto LAB_140d60c70;
        uVar48 = (ulonglong)
                 (uVar41 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
        pvVar11 = (void *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar48].low;
      }
      uVar49 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar48].high;
    }
    lVar2 = uVar49 + 0x10;
    lVar3 = uVar49 + 0x18;
    uVar48 = 0;
    uVar43 = 0;
    do {
      uVar36 = *(ulonglong *)(lVar2 + uVar43 * 8);
      if (uVar36 != 0) {
        uVar40 = 0;
        uVar34 = uVar36;
        local_120 = uVar43;
LAB_140d60c92:
        do {
          lVar46 = 0;
          for (uVar43 = uVar36; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x8000000000000000) {
            lVar46 = lVar46 + 1;
          }
          uVar43 = uVar36 >> ((byte)lVar46 & 0x3f) ^ 0xffffffffffffffff;
          local_d8 = (ushort)uVar30;
          if (uVar43 != 0) {
            uVar25 = 0;
            for (; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x8000000000000000) {
              uVar25 = uVar25 + 1;
            }
            uVar44 = uVar30 - uVar25;
            if (uVar25 <= uVar30 && uVar44 != 0) goto LAB_140d60cdb;
LAB_140d60d80:
            uVar43 = lVar46 + uVar40;
            if (0x200 < param_4) {
              lVar39 = local_120 * 0x40 + uVar43;
              uVar43 = lVar39 * 0x200 + (param_4 - 1) & -param_4;
              if ((lVar39 + uVar25) * 0x200 - uVar43 < uVar31) goto LAB_140d60cdb;
              if (lVar1 + uVar43 >> 0xf != local_120) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              local_120 = uVar43 >> 0xf;
              uVar43 = (ulonglong)((uint)(uVar43 >> 9) & 0x3f);
            }
            uVar48 = uVar43 * 0x200 + local_120 * 0x8000;
            if (0x1ffff < uVar48 + lVar1) {
                    /* WARNING: Does not return */
              pcVar37 = (code *)invalidInstructionException();
              (*pcVar37)();
            }
            uVar36 = uVar48 >> 0xc;
            uVar40 = uVar48 + lVar1 >> 0xc;
            if (uVar47 != 0) {
              if (ppVar26->is_owned == false) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              BVar23 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
              if (BVar23 != '\0') {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              pas_commit_span_construct(&local_90,pas_may_mmap);
              uVar35 = uVar40 + 1;
              if (uVar40 < uVar36) {
                if (uVar36 != uVar35) {
                    /* WARNING: Does not return */
                  pcVar37 = (code *)invalidInstructionException();
                  (*pcVar37)();
                }
              }
              else {
                do {
                  if (*(char *)(uVar49 + 0x50 + uVar36) == -1) {
                    pas_commit_span_add_to_change(&local_90,uVar36);
                    *(undefined1 *)(uVar49 + 0x50 + uVar36) = 1;
                  }
                  else {
                    pas_commit_span_add_unchanged_and_commit
                              (&local_90,*(void **)(uVar49 - 0x10),uVar36,
                               &bmalloc_heap_config.medium_bitfit_config.base);
                    cVar24 = *(char *)(uVar49 + 0x50 + uVar36) + '\x01';
                    *(char *)(uVar49 + 0x50 + uVar36) = cVar24;
                    if (cVar24 == -1) {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      (*pcVar37)();
                    }
                  }
                  uVar36 = uVar36 + 1;
                } while (uVar35 != uVar36);
              }
              pas_commit_span_add_unchanged_and_commit
                        (&local_90,*(void **)(uVar49 - 0x10),uVar35,
                         &bmalloc_heap_config.medium_bitfit_config.base);
              uVar35 = local_90.total_bytes;
LAB_140d61485:
              puVar32 = (ulonglong *)(uVar49 + 0x30 + local_120 * 8);
              *puVar32 = *puVar32 | 1L << ((byte)uVar43 + (char)(uVar30 + 0x3f) & 0x3f);
              *(ulonglong *)(uVar49 + 0x10 + local_120 * 8) =
                   uVar34 & ~(uVar42 << ((byte)uVar43 & 0x3f));
              uVar6 = *(ushort *)(uVar49 + 2);
              if (uVar6 == 0) {
                pas_bitfit_view_note_nonemptiness(ppVar26);
              }
              if (CARRY2(uVar6,local_d8)) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              goto LAB_140d614e5;
            }
            if (uVar40 < uVar36) goto LAB_140d61483;
            uVar40 = uVar40 + 1;
            uVar44 = uVar40 - uVar36;
            uVar41 = 0;
            uVar25 = uVar36;
            if (uVar44 < 8) goto LAB_140d61430;
            uVar33 = uVar44 & 0xfffffffffffffff8;
            uVar25 = uVar36 + uVar33;
            iVar51 = 0;
            iVar52 = 0;
            iVar53 = 0;
            iVar54 = 0;
            uVar45 = 0;
            iVar55 = 0;
            iVar56 = 0;
            iVar57 = 0;
            iVar58 = 0;
            do {
              uVar7 = *(undefined4 *)(uVar36 + uVar49 + 0x50 + uVar45);
              uVar8 = *(undefined4 *)(uVar36 + uVar49 + 0x54 + uVar45);
              cVar24 = -((char)uVar7 == cVar84);
              cVar69 = -((char)((uint)uVar7 >> 8) == cVar85);
              cVar70 = -((char)((uint)uVar7 >> 0x10) == cVar86);
              cVar71 = -((char)((uint)uVar7 >> 0x18) == cVar87);
              cVar73 = -(cVar91 == '\0');
              Var15 = CONCAT91(CONCAT81((longlong)
                                        (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar73,cVar73),-(cVar90 == '\0')),
                                                  -(cVar90 == '\0')),-(cVar89 == '\0')),
                                                  -(cVar89 == '\0')),-(cVar88 == '\0')),
                                                  CONCAT11(-(cVar88 == '\0'),cVar73)) >> 8),cVar71),
                               cVar71);
              auVar19._2_10_ = Var15;
              auVar19[1] = cVar70;
              auVar19[0] = cVar70;
              auVar18._2_12_ = auVar19;
              auVar18[1] = cVar69;
              auVar18[0] = cVar69;
              auVar64._0_2_ = CONCAT11(cVar24,cVar24);
              auVar64._2_14_ = auVar18;
              uVar72 = (undefined2)Var15;
              auVar67._0_12_ = auVar64._0_12_;
              auVar67._12_2_ = uVar72;
              auVar67._14_2_ = uVar72;
              auVar66._12_4_ = auVar67._12_4_;
              auVar66._0_10_ = auVar64._0_10_;
              auVar66._10_2_ = auVar19._0_2_;
              auVar65._10_6_ = auVar66._10_6_;
              auVar65._0_8_ = auVar64._0_8_;
              auVar65._8_2_ = auVar19._0_2_;
              auVar68._8_8_ = auVar65._8_8_;
              auVar68._6_2_ = auVar18._0_2_;
              auVar68._4_2_ = auVar18._0_2_;
              auVar68._2_2_ = auVar64._0_2_;
              auVar68._0_2_ = auVar64._0_2_;
              auVar68 = auVar68 & auVar22;
              iVar51 = iVar51 + auVar68._0_4_;
              iVar52 = iVar52 + auVar68._4_4_;
              iVar53 = iVar53 + auVar68._8_4_;
              iVar54 = iVar54 + auVar68._12_4_;
              cVar24 = -((char)uVar8 == cVar84);
              cVar69 = -((char)((uint)uVar8 >> 8) == cVar85);
              cVar70 = -((char)((uint)uVar8 >> 0x10) == cVar86);
              cVar71 = -((char)((uint)uVar8 >> 0x18) == cVar87);
              cVar73 = -(cVar91 == '\0');
              Var15 = CONCAT91(CONCAT81((longlong)
                                        (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar73,cVar73),-(cVar90 == '\0')),
                                                  -(cVar90 == '\0')),-(cVar89 == '\0')),
                                                  -(cVar89 == '\0')),-(cVar88 == '\0')),
                                                  CONCAT11(-(cVar88 == '\0'),cVar73)) >> 8),cVar71),
                               cVar71);
              auVar21._2_10_ = Var15;
              auVar21[1] = cVar70;
              auVar21[0] = cVar70;
              auVar20._2_12_ = auVar21;
              auVar20[1] = cVar69;
              auVar20[0] = cVar69;
              auVar79._0_2_ = CONCAT11(cVar24,cVar24);
              auVar79._2_14_ = auVar20;
              uVar72 = (undefined2)Var15;
              auVar82._0_12_ = auVar79._0_12_;
              auVar82._12_2_ = uVar72;
              auVar82._14_2_ = uVar72;
              auVar81._12_4_ = auVar82._12_4_;
              auVar81._0_10_ = auVar79._0_10_;
              auVar81._10_2_ = auVar21._0_2_;
              auVar80._10_6_ = auVar81._10_6_;
              auVar80._0_8_ = auVar79._0_8_;
              auVar80._8_2_ = auVar21._0_2_;
              auVar83._8_8_ = auVar80._8_8_;
              auVar83._6_2_ = auVar20._0_2_;
              auVar83._4_2_ = auVar20._0_2_;
              auVar83._2_2_ = auVar79._0_2_;
              auVar83._0_2_ = auVar79._0_2_;
              auVar83 = auVar83 & auVar22;
              iVar55 = iVar55 + auVar83._0_4_;
              iVar56 = iVar56 + auVar83._4_4_;
              iVar57 = iVar57 + auVar83._8_4_;
              iVar58 = iVar58 + auVar83._12_4_;
              uVar45 = uVar45 + 8;
            } while (uVar33 != uVar45);
            uVar41 = iVar58 + iVar54 + iVar56 + iVar52 + iVar57 + iVar53 + iVar55 + iVar51;
            if (uVar44 != uVar33) {
LAB_140d61430:
              do {
                uVar41 = uVar41 + (*(char *)(uVar49 + 0x50 + uVar25) == -1);
                uVar25 = uVar25 + 1;
              } while (uVar40 != uVar25);
            }
            if (uVar41 != 0) {
              bVar50 = false;
              uVar49 = 0;
              uVar35 = 0;
              goto LAB_140d614f2;
            }
            do {
              cVar24 = *(char *)(uVar49 + 0x50 + uVar36);
              if (cVar24 == -1) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              cVar24 = cVar24 + '\x01';
              *(char *)(uVar49 + 0x50 + uVar36) = cVar24;
              if (cVar24 == -1) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              uVar36 = uVar36 + 1;
            } while (uVar40 != uVar36);
LAB_140d61483:
            uVar35 = 0;
            goto LAB_140d61485;
          }
          uVar25 = 0x40;
          uVar44 = uVar30 - 0x40;
          if (uVar30 < 0x40 || uVar44 == 0) goto LAB_140d60d80;
LAB_140d60cdb:
          local_118 = lVar46 + uVar40;
          if (uVar25 + local_118 < 0x40) goto LAB_140d60de0;
          uVar36 = local_120 + 1;
          if (3 < uVar36) {
LAB_140d60f38:
            local_118 = (uVar36 - local_120) * 0x40 - local_118;
            if (local_118 < uVar48) {
              local_118 = uVar48;
            }
            uVar49 = local_118 << 9;
            bVar50 = false;
            uVar41 = 0;
            uVar35 = 0;
            goto LAB_140d614f2;
          }
          uVar25 = local_118 * 0x200 + (param_4 - 1) + local_120 * 0x8000 & -param_4;
          if (param_4 < 0x201) {
            uVar43 = ~local_120;
            puVar32 = (ulonglong *)(lVar3 + local_120 * 8);
            while (uVar33 = *puVar32, uVar33 == 0xffffffffffffffff) {
              if (uVar44 < 0x41) {
                uVar43 = -uVar43;
                uVar33 = 0xffffffffffffffff;
                goto LAB_140d60f63;
              }
              uVar44 = uVar44 - 0x40;
              uVar43 = uVar43 - 1;
              puVar32 = puVar32 + 1;
              if (uVar43 == 0xfffffffffffffffc) {
                uVar36 = 4;
                goto LAB_140d60f38;
              }
            }
            uVar43 = -uVar43;
          }
          else {
            lVar46 = local_120 * -8;
            uVar40 = (local_120 * 0x8000 - uVar25) + 0x10000;
            uVar43 = local_120;
            while (uVar33 = *(ulonglong *)(lVar3 + uVar43 * 8), uVar33 == 0xffffffffffffffff) {
              if (uVar44 < 0x41) {
                if (uVar31 <= uVar40) {
                  if ((lVar1 + uVar25 >> 0xf) - 1 != uVar43) {
                    /* WARNING: Does not return */
                    pcVar37 = (code *)invalidInstructionException();
                    (*pcVar37)();
                  }
                  puVar32 = (ulonglong *)(lVar3 - lVar46);
                  local_120 = uVar25 >> 0xf;
                  local_118 = (ulonglong)((uint)(uVar25 >> 9) & 0x3f);
                  uVar43 = uVar43 + 1;
                  uVar33 = 0xffffffffffffffff;
                  goto LAB_140d60f63;
                }
              }
              else {
                uVar44 = uVar44 - 0x40;
              }
              uVar43 = uVar43 + 1;
              lVar46 = lVar46 + -8;
              uVar40 = uVar40 + 0x8000;
              uVar36 = 4;
              if (uVar43 == 3) goto LAB_140d60f38;
            }
            uVar43 = uVar43 + 1;
          }
          uVar40 = 0;
          for (uVar36 = ~uVar33; (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x8000000000000000) {
            uVar40 = uVar40 + 1;
          }
          if (uVar44 <= uVar40) {
            if (param_4 < 0x201) {
              puVar32 = (ulonglong *)(lVar2 + uVar43 * 8);
            }
            else {
              if ((uVar43 * 0x8000 - uVar25) + (ulonglong)(uint)((int)uVar40 << 9) < uVar31)
              goto LAB_140d60e19;
              if (lVar1 + uVar25 >> 0xf != uVar43) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              puVar32 = (ulonglong *)(lVar2 + uVar43 * 8);
              local_120 = uVar25 >> 0xf;
              local_118 = (ulonglong)((uint)(uVar25 >> 9) & 0x3f);
            }
LAB_140d60f63:
            uVar48 = local_118 * 0x200 + local_120 * 0x8000;
            if (0x1ffff < uVar48 + lVar1) {
                    /* WARNING: Does not return */
              pcVar37 = (code *)invalidInstructionException();
              (*pcVar37)();
            }
            uVar35 = uVar48 >> 0xc;
            uVar36 = uVar48 + lVar1 >> 0xc;
            if (uVar47 == 0) {
              if (uVar36 < uVar35) goto LAB_140d61183;
              uVar36 = uVar36 + 1;
              uVar25 = uVar36 - uVar35;
              uVar41 = 0;
              uVar40 = uVar35;
              if (uVar25 < 8) goto LAB_140d61120;
              uVar44 = uVar25 & 0xfffffffffffffff8;
              uVar40 = uVar35 + uVar44;
              iVar51 = 0;
              iVar52 = 0;
              iVar53 = 0;
              iVar54 = 0;
              uVar45 = 0;
              iVar55 = 0;
              iVar56 = 0;
              iVar57 = 0;
              iVar58 = 0;
              do {
                uVar7 = *(undefined4 *)(uVar35 + uVar49 + 0x50 + uVar45);
                uVar8 = *(undefined4 *)(uVar35 + uVar49 + 0x54 + uVar45);
                cVar24 = -((char)uVar7 == cVar84);
                cVar69 = -((char)((uint)uVar7 >> 8) == cVar85);
                cVar70 = -((char)((uint)uVar7 >> 0x10) == cVar86);
                cVar71 = -((char)((uint)uVar7 >> 0x18) == cVar87);
                cVar73 = -(cVar91 == '\0');
                Var15 = CONCAT91(CONCAT81((longlong)
                                          (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar73,cVar73),-(cVar90 == '\0')),
                                                  -(cVar90 == '\0')),-(cVar89 == '\0')),
                                                  -(cVar89 == '\0')),-(cVar88 == '\0')),
                                                  CONCAT11(-(cVar88 == '\0'),cVar73)) >> 8),cVar71),
                                 cVar71);
                auVar14._2_10_ = Var15;
                auVar14[1] = cVar70;
                auVar14[0] = cVar70;
                auVar13._2_12_ = auVar14;
                auVar13[1] = cVar69;
                auVar13[0] = cVar69;
                auVar59._0_2_ = CONCAT11(cVar24,cVar24);
                auVar59._2_14_ = auVar13;
                uVar72 = (undefined2)Var15;
                auVar62._0_12_ = auVar59._0_12_;
                auVar62._12_2_ = uVar72;
                auVar62._14_2_ = uVar72;
                auVar61._12_4_ = auVar62._12_4_;
                auVar61._0_10_ = auVar59._0_10_;
                auVar61._10_2_ = auVar14._0_2_;
                auVar60._10_6_ = auVar61._10_6_;
                auVar60._0_8_ = auVar59._0_8_;
                auVar60._8_2_ = auVar14._0_2_;
                auVar63._8_8_ = auVar60._8_8_;
                auVar63._6_2_ = auVar13._0_2_;
                auVar63._4_2_ = auVar13._0_2_;
                auVar63._2_2_ = auVar59._0_2_;
                auVar63._0_2_ = auVar59._0_2_;
                auVar63 = auVar63 & auVar22;
                iVar51 = iVar51 + auVar63._0_4_;
                iVar52 = iVar52 + auVar63._4_4_;
                iVar53 = iVar53 + auVar63._8_4_;
                iVar54 = iVar54 + auVar63._12_4_;
                cVar24 = -((char)uVar8 == cVar84);
                cVar69 = -((char)((uint)uVar8 >> 8) == cVar85);
                cVar70 = -((char)((uint)uVar8 >> 0x10) == cVar86);
                cVar71 = -((char)((uint)uVar8 >> 0x18) == cVar87);
                cVar73 = -(cVar91 == '\0');
                Var15 = CONCAT91(CONCAT81((longlong)
                                          (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar73,cVar73),-(cVar90 == '\0')),
                                                  -(cVar90 == '\0')),-(cVar89 == '\0')),
                                                  -(cVar89 == '\0')),-(cVar88 == '\0')),
                                                  CONCAT11(-(cVar88 == '\0'),cVar73)) >> 8),cVar71),
                                 cVar71);
                auVar17._2_10_ = Var15;
                auVar17[1] = cVar70;
                auVar17[0] = cVar70;
                auVar16._2_12_ = auVar17;
                auVar16[1] = cVar69;
                auVar16[0] = cVar69;
                auVar74._0_2_ = CONCAT11(cVar24,cVar24);
                auVar74._2_14_ = auVar16;
                uVar72 = (undefined2)Var15;
                auVar77._0_12_ = auVar74._0_12_;
                auVar77._12_2_ = uVar72;
                auVar77._14_2_ = uVar72;
                auVar76._12_4_ = auVar77._12_4_;
                auVar76._0_10_ = auVar74._0_10_;
                auVar76._10_2_ = auVar17._0_2_;
                auVar75._10_6_ = auVar76._10_6_;
                auVar75._0_8_ = auVar74._0_8_;
                auVar75._8_2_ = auVar17._0_2_;
                auVar78._8_8_ = auVar75._8_8_;
                auVar78._6_2_ = auVar16._0_2_;
                auVar78._4_2_ = auVar16._0_2_;
                auVar78._2_2_ = auVar74._0_2_;
                auVar78._0_2_ = auVar74._0_2_;
                auVar78 = auVar78 & auVar22;
                iVar55 = iVar55 + auVar78._0_4_;
                iVar56 = iVar56 + auVar78._4_4_;
                iVar57 = iVar57 + auVar78._8_4_;
                iVar58 = iVar58 + auVar78._12_4_;
                uVar45 = uVar45 + 8;
              } while (uVar44 != uVar45);
              uVar41 = iVar58 + iVar54 + iVar56 + iVar52 + iVar57 + iVar53 + iVar55 + iVar51;
              if (uVar25 != uVar44) {
LAB_140d61120:
                do {
                  uVar41 = uVar41 + (*(char *)(uVar49 + 0x50 + uVar40) == -1);
                  uVar40 = uVar40 + 1;
                } while (uVar36 != uVar40);
              }
              if (uVar41 != 0) {
                bVar50 = false;
                uVar49 = 0;
                uVar35 = 0;
                goto LAB_140d614f2;
              }
              do {
                cVar24 = *(char *)(uVar49 + 0x50 + uVar35);
                if (cVar24 == -1) {
                    /* WARNING: Does not return */
                  pcVar37 = (code *)invalidInstructionException();
                  (*pcVar37)();
                }
                cVar24 = cVar24 + '\x01';
                *(char *)(uVar49 + 0x50 + uVar35) = cVar24;
                if (cVar24 == -1) {
                    /* WARNING: Does not return */
                  pcVar37 = (code *)invalidInstructionException();
                  (*pcVar37)();
                }
                uVar35 = uVar35 + 1;
              } while (uVar36 != uVar35);
LAB_140d61183:
              uVar35 = 0;
            }
            else {
              if (ppVar26->is_owned == false) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              BVar23 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
              if (BVar23 != '\0') {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              pas_commit_span_construct(&local_90,pas_may_mmap);
              uVar4 = uVar36 + 1;
              if (uVar36 < uVar35) {
                if (uVar35 != uVar4) {
                    /* WARNING: Does not return */
                  pcVar37 = (code *)invalidInstructionException();
                  (*pcVar37)();
                }
              }
              else {
                do {
                  if (*(char *)(uVar49 + 0x50 + uVar35) == -1) {
                    pas_commit_span_add_to_change(&local_90,uVar35);
                    *(undefined1 *)(uVar49 + 0x50 + uVar35) = 1;
                  }
                  else {
                    pas_commit_span_add_unchanged_and_commit
                              (&local_90,*(void **)(uVar49 - 0x10),uVar35,
                               &bmalloc_heap_config.medium_bitfit_config.base);
                    cVar24 = *(char *)(uVar49 + 0x50 + uVar35) + '\x01';
                    *(char *)(uVar49 + 0x50 + uVar35) = cVar24;
                    if (cVar24 == -1) {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      (*pcVar37)();
                    }
                  }
                  uVar35 = uVar35 + 1;
                } while (uVar4 != uVar35);
              }
              pas_commit_span_add_unchanged_and_commit
                        (&local_90,*(void **)(uVar49 - 0x10),uVar4,
                         &bmalloc_heap_config.medium_bitfit_config.base);
              uVar35 = local_90.total_bytes;
            }
            bVar28 = 0x40 - (char)local_118;
            uVar36 = (uVar34 << (bVar28 & 0x3f)) >> (bVar28 & 0x3f);
            if (local_118 == 0) {
              uVar36 = 0;
            }
            *(ulonglong *)(lVar2 + local_120 * 8) = uVar36;
            if (local_120 + 1 < uVar43) {
              memset((void *)(local_120 * 8 + 0x18 + uVar49),0,(~local_120 + uVar43) * 8);
            }
            local_c0 = (int)(uVar30 + 0x3f);
            uVar41 = (int)local_118 + local_c0 & 0x3f;
            sVar29 = (sbyte)uVar41;
            puVar5 = (ulonglong *)(uVar49 + 0x30 + uVar43 * 8);
            *puVar5 = *puVar5 | 1L << sVar29;
            uVar43 = 0;
            if (uVar41 != 0x3f) {
              uVar43 = -2L << sVar29 & uVar33;
            }
            *puVar32 = uVar43;
            uVar6 = *(ushort *)(uVar49 + 2);
            if (uVar6 == 0) {
              pas_bitfit_view_note_nonemptiness(ppVar26);
            }
            if (CARRY2(uVar6,local_d8)) {
                    /* WARNING: Does not return */
              pcVar37 = (code *)invalidInstructionException();
              (*pcVar37)();
            }
LAB_140d614e5:
            *(ushort *)(uVar49 + 2) = uVar6 + local_d8;
            uVar49 = uVar48 + *(longlong *)(uVar49 - 0x10);
            uVar41 = 0;
            bVar50 = true;
            goto LAB_140d614f2;
          }
LAB_140d60e19:
          uVar36 = (uVar40 - local_118) + (uVar43 - local_120) * 0x40;
          if (uVar48 <= uVar36) {
            uVar48 = uVar36;
          }
          uVar36 = uVar33 >> ((byte)uVar40 & 0x3f);
          uVar34 = uVar33;
          local_120 = uVar43;
        } while (uVar36 != 0);
      }
LAB_140d60ef3:
      uVar43 = uVar43 + 1;
    } while (uVar43 < 4);
    uVar49 = uVar48 << 9;
    bVar50 = false;
    uVar41 = 0;
    uVar35 = 0;
LAB_140d614f2:
    pcVar37 = AcquireSRWLockExclusive_exref;
    if (uVar47 != 0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
    }
    if (uVar41 != 0) {
      if (uVar35 != 0) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)invalidInstructionException();
        (*pcVar37)();
      }
      if (uVar47 != 0) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)invalidInstructionException();
        (*pcVar37)();
      }
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      bVar50 = uVar41 != 0;
      uVar47 = uVar41;
      if (bVar50) {
        pas_physical_page_sharing_pool_take_for_page_config
                  ((ulonglong)uVar41 << 0xc,&bmalloc_heap_config.medium_bitfit_config.base,
                   pas_lock_is_not_held,(pas_lock **)0x0,0);
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
      }
      goto LAB_140d60bc5;
    }
    if (bVar50) {
      pVar38 = pas_fast_path_allocation_result_success;
      SRWLock_00 = SRWLock;
LAB_140d61687:
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
LAB_140d6168d:
      __return_storage_ptr__->kind = pVar38;
      __return_storage_ptr__->begin = uVar49;
      if ((local_70 ^ (ulonglong)auStackY_158) == __security_cookie.value) {
        return __return_storage_ptr__;
      }
      pcVar37 = (code *)swi(3);
      ppVar27 = (pas_fast_path_allocation_result *)(*pcVar37)();
      return ppVar27;
    }
    if (uVar35 != 0) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)invalidInstructionException();
      (*pcVar37)();
    }
    ppVar26 = pas_bitfit_allocator_finish_failing
                        (param_1,ppVar26,uVar31,param_4,uVar49,
                         &bmalloc_heap_config.medium_bitfit_config);
  } while( true );
LAB_140d60de0:
  if (uVar48 <= uVar25) {
    uVar48 = uVar25;
  }
  uVar40 = uVar40 + lVar46 + uVar25;
  uVar36 = uVar36 >> ((byte)(lVar46 + uVar25) & 0x3f);
  uVar43 = local_120;
  if (uVar36 == 0) goto LAB_140d60ef3;
  goto LAB_140d60c92;
}

// bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page @ 140d61740

void __cdecl
bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
          (pas_bitfit_page *param_1,ulong64 param_2)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  ushort uVar6;
  char *pcVar7;
  sbyte sVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  pas_bitfit_view *ppVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  
  uVar9 = (ulonglong)(param_1->owner).payload;
  ppVar12 = (pas_bitfit_view *)(uVar9 * 8 + pas_compact_heap_reservation_base);
  uVar17 = (uint)param_2 & 0x1ffff;
  uVar18 = (ulonglong)uVar17;
  if (uVar9 == 0) {
    ppVar12 = (pas_bitfit_view *)0x0;
  }
  uVar5 = uVar17 >> 9;
  AcquireSRWLockExclusive((PSRWLOCK)&ppVar12->ownership_lock);
  if (uVar18 != 0) {
    uVar9 = (ulonglong)uVar5 - 1;
    if (((*(uint *)((longlong)param_1->bits + (uVar9 >> 5) * 4) >> ((uint)uVar9 & 0x1f) & 1) == 0)
       && ((*(uint *)((longlong)param_1[2].bits + (uVar9 >> 5) * 4 + -0x10) &
           1 << ((byte)uVar9 & 0x1f)) == 0)) {
      pcVar7 = "previous bit is not free or end of object";
      goto LAB_140d61a24;
    }
  }
  if ((*(uint *)((longlong)param_1->bits + (ulonglong)(uVar17 >> 0xe) * 4) >> (uVar5 & 0x1f) & 1) !=
      0) {
    pcVar7 = "free bit set";
    goto LAB_140d61a24;
  }
  uVar4 = (ulonglong)(uVar17 >> 0xf);
  uVar9 = param_1[2].bits[uVar4 - 2];
  sVar8 = (sbyte)(uVar5 & 0x3f);
  uVar10 = uVar9 >> sVar8;
  if (uVar10 == 0) {
    if (uVar17 >> 0xf == 3) {
LAB_140d61a14:
      pcVar7 = "object falls off end of page";
LAB_140d61a24:
                    /* WARNING: Subroutine does not return */
      pas_bitfit_page_deallocation_did_fail
                (param_1,pas_bitfit_page_config_kind_bmalloc_medium_bitfit,param_2,uVar18,pcVar7);
    }
    uVar9 = uVar4 + 1;
    uVar15 = param_1[2].bits[uVar4 - 1];
    if (uVar15 == 0) {
      if ((int)uVar9 == 3) goto LAB_140d61a14;
      uVar10 = uVar4 + 2;
      uVar15 = param_1[2].bits[uVar4];
      lVar14 = 1;
      uVar13 = uVar9;
      if (uVar15 == 0) {
        if ((int)uVar10 == 3) goto LAB_140d61a14;
        uVar15 = param_1[3].bits[uVar4 - 2];
        lVar14 = 2;
        uVar13 = uVar10;
        uVar10 = uVar4 + 3;
        if (uVar15 == 0) {
          if (uVar17 < 0x8000) goto LAB_140d61a14;
          uVar15 = param_1[3].bits[uVar4 - 1];
          lVar14 = 3;
          uVar13 = uVar4 + 3;
          uVar10 = uVar4 + 4;
        }
      }
    }
    else {
      lVar14 = 0;
      uVar13 = uVar4;
      uVar10 = uVar9;
    }
    uVar9 = 0;
    for (uVar16 = uVar15; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
      uVar9 = uVar9 + 1;
    }
    uVar16 = ~(-2L << ((byte)uVar9 & 0x3f));
    if (uVar9 == 0x3f) {
      uVar16 = 0xffffffffffffffff;
    }
    param_1->bits[uVar10] = param_1->bits[uVar10] | uVar16;
    param_1[2].bits[uVar10 - 2] = uVar15 & ~(1L << (uVar9 & 0x3f));
    param_1->bits[uVar4] = param_1->bits[uVar4] | -1L << sVar8;
    lVar19 = ((uVar13 - uVar4) * 0x40 - (ulonglong)(uVar5 & 0x3f)) + uVar9 + 0x41;
    if (uVar4 < uVar13) {
      uVar10 = uVar4 + lVar14 + 1;
      uVar9 = uVar4 + 2;
      if (uVar4 + 2 < uVar10) {
        uVar9 = uVar10;
      }
      memset(param_1[1].bits + (uVar4 - 2),0xff,(uVar9 + ~uVar4) * 8);
    }
  }
  else {
    lVar14 = 0;
    for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
      lVar14 = lVar14 + 1;
    }
    lVar19 = lVar14 + 1;
    uVar10 = 0xffffffffffffffff;
    if (lVar19 != 0x40) {
      uVar10 = ~(-2L << ((byte)lVar14 & 0x3f));
    }
    param_1->bits[uVar4] = param_1->bits[uVar4] | uVar10 << sVar8;
    param_1[2].bits[uVar4 - 2] = uVar9 & ~(1L << ((ulonglong)((int)lVar14 + uVar5) & 0x3f));
  }
  uVar9 = lVar19 * 0x200;
  if (CARRY8(uVar9,uVar18)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar9 != 0) {
    uVar9 = (uVar9 + uVar18) - 1;
    if (0x1ffff < uVar9) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar9 = uVar9 >> 0xc;
    uVar18 = (ulonglong)(uVar17 >> 0xc);
    if (uVar18 <= uVar9) {
      bVar11 = false;
      do {
        cVar1 = *(char *)((longlong)param_1[3].bits + (uVar18 - 8));
        if (cVar1 == '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (cVar1 == -1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        *(char *)((longlong)param_1[3].bits + (uVar18 - 8)) = cVar1 + -1;
        bVar11 = (bool)(bVar11 | (char)(cVar1 + -1) == '\0');
        uVar18 = uVar18 + 1;
      } while (uVar9 + 1 != uVar18);
      goto LAB_140d619a7;
    }
  }
  bVar11 = false;
LAB_140d619a7:
  if (param_1->did_note_max_free == false) {
    pas_bitfit_view_note_max_free(ppVar12);
    param_1->did_note_max_free = true;
  }
  uVar2 = param_1->num_live_bits;
  uVar6 = uVar2 - (ushort)lVar19;
  param_1->num_live_bits = uVar6;
  if (uVar2 < (ushort)lVar19) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar6 == 0) {
    pas_bitfit_view_note_full_emptiness(ppVar12,param_1);
  }
  else if (bVar11) {
    pas_bitfit_view_note_partial_emptiness(ppVar12,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140d619fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&ppVar12->ownership_lock);
  return;
}

// bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page @ 140d61a50

ulong64 __cdecl
bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
          (pas_bitfit_page *param_1,ulong64 param_2)

{
  longlong lVar1;
  ulong64 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (ulonglong)((uint)param_2 >> 0xf & 3);
  uVar3 = (uint)(param_2 >> 9) & 0x3f;
  uVar6 = param_1[2].bits[uVar5 - 2] >> (sbyte)uVar3;
  if (uVar6 != 0) {
    lVar4 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
      lVar4 = lVar4 + 1;
    }
    return lVar4 * 0x200 + 0x200;
  }
  lVar4 = -(ulonglong)uVar3;
  puVar2 = param_1[2].bits + (uVar5 - 1);
  do {
    uVar6 = *puVar2;
    lVar4 = lVar4 + 0x40;
    puVar2 = puVar2 + 1;
  } while (uVar6 == 0);
  lVar1 = 0;
  for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
    lVar1 = lVar1 + 1;
  }
  return (lVar1 + lVar4) * 0x200 + 0x200;
}

// bmalloc_medium_bitfit_page_config_specialized_page_shrink_with_page @ 140d61ac0

void __cdecl
bmalloc_medium_bitfit_page_config_specialized_page_shrink_with_page
          (pas_bitfit_page *param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  char cVar3;
  ushort uVar4;
  code *pcVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  sbyte sVar12;
  byte bVar13;
  longlong lVar14;
  ulonglong uVar15;
  pas_bitfit_view *ppVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ushort uVar23;
  ulonglong uVar24;
  
  uVar21 = (uint)param_2 & 0x1ffff;
  uVar15 = (ulonglong)uVar21;
  uVar9 = (ulonglong)(param_1->owner).payload;
  ppVar16 = (pas_bitfit_view *)(uVar9 * 8 + pas_compact_heap_reservation_base);
  if (uVar9 == 0) {
    ppVar16 = (pas_bitfit_view *)0x0;
  }
  uVar9 = 1;
  if (param_3 != 0) {
    uVar9 = param_3 + 0x1ff >> 9;
  }
  uVar7 = uVar21 >> 9;
  uVar10 = (ulonglong)uVar7;
  AcquireSRWLockExclusive((PSRWLOCK)&ppVar16->ownership_lock);
  if (uVar15 != 0) {
    uVar22 = uVar10 - 1;
    if (((*(uint *)((longlong)param_1->bits + (uVar22 >> 5) * 4) >> ((uint)uVar22 & 0x1f) & 1) == 0)
       && ((*(uint *)((longlong)param_1[2].bits + (uVar22 >> 5) * 4 + -0x10) &
           1 << ((byte)uVar22 & 0x1f)) == 0)) {
      pcVar11 = "previous bit is not free or end of object";
      goto LAB_140d61e86;
    }
  }
  if ((*(uint *)((longlong)param_1->bits + (ulonglong)(uVar21 >> 0xe) * 4) >> (uVar7 & 0x1f) & 1) !=
      0) {
    pcVar11 = "free bit set";
    goto LAB_140d61e86;
  }
  uVar17 = (ulonglong)(uVar21 >> 0xf);
  uVar22 = param_1[2].bits[uVar17 - 2];
  sVar12 = (sbyte)(uVar7 & 0x3f);
  uVar18 = uVar22 >> sVar12;
  uVar24 = uVar9;
  if (uVar18 != 0) {
    lVar6 = 0;
    for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x8000000000000000) {
      lVar6 = lVar6 + 1;
    }
    uVar10 = lVar6 + 1;
    lVar14 = uVar10 - uVar9;
    if (uVar10 < uVar9) goto LAB_140d61e67;
    if (lVar14 != 0) {
      uVar18 = ~(-1L << ((byte)lVar14 & 0x3f));
      if (lVar14 == 0x40) {
        uVar18 = 0xffffffffffffffff;
      }
      bVar13 = sVar12 + (char)uVar9;
      param_1->bits[uVar17] = param_1->bits[uVar17] | uVar18 << (bVar13 & 0x3f);
      param_1[2].bits[uVar17 - 2] =
           uVar22 & ~(1L << ((ulonglong)((int)lVar6 + uVar7) & 0x3f)) |
           1L << ((ulonglong)(byte)(bVar13 - 1) & 0x3f);
      uVar24 = uVar10;
    }
    goto LAB_140d61d70;
  }
  if (uVar21 >> 0xf != 3) {
    uVar22 = uVar17 + 1;
    uVar18 = param_1[2].bits[uVar17 - 1];
    uVar19 = uVar22;
    uVar20 = uVar17;
    if (uVar18 == 0) {
      if ((int)uVar22 == 3) goto LAB_140d61e76;
      uVar1 = uVar17 + 2;
      uVar18 = param_1[2].bits[uVar17];
      uVar19 = uVar1;
      uVar20 = uVar22;
      if (uVar18 == 0) {
        if ((int)uVar1 == 3) goto LAB_140d61e76;
        uVar18 = param_1[3].bits[uVar17 - 2];
        uVar19 = uVar17 + 3;
        uVar20 = uVar1;
        if (uVar18 == 0) {
          if (uVar21 < 0x8000) goto LAB_140d61e76;
          uVar18 = param_1[3].bits[uVar17 - 1];
          uVar19 = uVar17 + 4;
          uVar20 = uVar17 + 3;
        }
      }
    }
    uVar22 = 0;
    for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x8000000000000000) {
      uVar22 = uVar22 + 1;
    }
    uVar18 = ((uVar20 - uVar17) * 0x40 - (ulonglong)(uVar7 & 0x3f)) + uVar22 + 0x41;
    if (uVar18 < uVar9) {
LAB_140d61e67:
                    /* WARNING: Subroutine does not return */
      pas_deallocation_did_fail("attempt to shrink to a larger size",param_2);
    }
    if (uVar18 != uVar9) {
      uVar17 = uVar9 + uVar10 >> 6;
      uVar21 = (uint)(uVar9 + uVar10) & 0x3f;
      uVar10 = (uVar9 + uVar10) - 1;
      puVar2 = (uint *)((longlong)param_1[2].bits + (uVar10 >> 5) * 4 + -0x10);
      *puVar2 = *puVar2 | 1 << ((byte)uVar10 & 0x1f);
      uVar10 = param_1[2].bits[uVar19 - 2];
      sVar12 = (sbyte)uVar21;
      uVar24 = uVar18;
      if (uVar17 == uVar19) {
        uVar17 = (uVar22 - uVar21) + 1;
        if (uVar17 != uVar18 - uVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (0x40 < uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar18 = ~(-1L << ((byte)uVar17 & 0x3f));
        if (uVar17 == 0x40) {
          uVar18 = 0xffffffffffffffff;
        }
        param_1->bits[uVar19] = param_1->bits[uVar19] | uVar18 << sVar12;
        param_1[2].bits[uVar19 - 2] = uVar10 & ~(1L << (uVar22 & 0x3f));
      }
      else {
        uVar18 = ~(-2L << ((byte)uVar22 & 0x3f));
        if (uVar22 == 0x3f) {
          uVar18 = 0xffffffffffffffff;
        }
        param_1->bits[uVar19] = param_1->bits[uVar19] | uVar18;
        param_1[2].bits[uVar19 - 2] = uVar10 & ~(1L << (uVar22 & 0x3f));
        param_1->bits[uVar17] = param_1->bits[uVar17] | -1L << sVar12;
        if (uVar17 < uVar20) {
          uVar10 = uVar17 + 2;
          if (uVar17 + 2 < uVar19) {
            uVar10 = uVar19;
          }
          memset(param_1[1].bits + (uVar17 - 2),(int)CONCAT71((int7)(uVar22 >> 8),0xff),
                 (uVar10 + ~uVar17) * 8);
        }
      }
    }
LAB_140d61d70:
    uVar10 = uVar24 * 0x200 + uVar15;
    uVar15 = uVar9 * 0x200 + uVar15 + 0xfff & 0xfffffffffffff000;
    uVar22 = 0;
    if (uVar10 < uVar15) {
      uVar15 = uVar22;
      uVar10 = uVar22;
    }
    if (uVar15 != uVar10) {
      if (0x1ffff < uVar10 - 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar10 = uVar10 - 1 >> 0xc;
      uVar15 = uVar15 >> 0xc;
      if (uVar10 < uVar15) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        do {
          cVar3 = *(char *)((longlong)param_1[3].bits + (uVar15 - 8));
          if (cVar3 == '\0') {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (cVar3 == -1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          *(char *)((longlong)param_1[3].bits + (uVar15 - 8)) = cVar3 + -1;
          uVar22 = (ulonglong)(byte)((byte)uVar22 | (char)(cVar3 + -1) == '\0');
          uVar15 = uVar15 + 1;
        } while (uVar10 + 1 != uVar15);
      }
    }
    uVar23 = (short)uVar24 - (short)uVar9;
    if (param_1->did_note_max_free == false) {
      pas_bitfit_view_note_max_free(ppVar16);
      param_1->did_note_max_free = true;
    }
    uVar4 = param_1->num_live_bits;
    uVar8 = uVar4 - uVar23;
    param_1->num_live_bits = uVar8;
    if (uVar23 <= uVar4) {
      if (uVar8 == 0) {
        pas_bitfit_view_note_full_emptiness(ppVar16,param_1);
      }
      else if (uVar22 != 0) {
        pas_bitfit_view_note_partial_emptiness(ppVar16,param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x000140d61e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&ppVar16->ownership_lock);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
LAB_140d61e76:
  pcVar11 = "object falls off end of page";
LAB_140d61e86:
                    /* WARNING: Subroutine does not return */
  pas_bitfit_page_deallocation_did_fail
            (param_1,pas_bitfit_page_config_kind_bmalloc_medium_bitfit,param_2,uVar15,pcVar11);
}

// bmalloc_marge_bitfit_page_header_for_boundary @ 140d61eb0

pas_page_base * __cdecl bmalloc_marge_bitfit_page_header_for_boundary(void *param_1)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (bmalloc_marge_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
    return (pas_page_base *)0x0;
  }
  uVar2 = (uint)((ulonglong)param_1 >> 0x1a) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x16);
  uVar2 = uVar2 * 0x20 + (uVar2 ^ 0xdeadbeef);
  uVar2 = uVar2 >> 0xb ^ uVar2;
  uVar3 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar2);
  pvVar1 = (void *)(bmalloc_marge_page_header_table.hashtable.table)->array[uVar3].low;
  while( true ) {
    if (pvVar1 == param_1) {
      return (pas_page_base *)(bmalloc_marge_page_header_table.hashtable.table)->array[uVar3].high;
    }
    uVar2 = uVar2 + 1;
    if (pvVar1 == (void *)0xffffffffffffffff) break;
    uVar3 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar2);
    pvVar1 = (void *)(bmalloc_marge_page_header_table.hashtable.table)->array[uVar3].low;
  }
  return (pas_page_base *)0x0;
}

// bmalloc_marge_bitfit_boundary_for_page_header @ 140d61f50

void * __cdecl bmalloc_marge_bitfit_boundary_for_page_header(pas_page_base *param_1)

{
  return *(void **)(param_1 + -0x10);
}

// bmalloc_marge_bitfit_page_header_for_boundary_remote @ 140d61f60

pas_page_base * __cdecl
bmalloc_marge_bitfit_page_header_for_boundary_remote(pas_enumerator *param_1,void *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  plVar2 = param_1->heap_config_datas[2];
  if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    uVar6 = (uint)((ulonglong)param_2 >> 4) & 0xfffffff ^ (uint)param_2;
    uVar7 = (uint)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar7 >> 4 ^ uVar7;
    uVar6 = uVar7 * 0x20 + (uVar7 ^ 0xdeadbeef) ^ uVar6 * 0x20 + (uVar6 ^ 0xdeadbeef);
    uVar6 = uVar6 >> 0xb ^ uVar6;
    do {
      lVar8 = (ulonglong)(uVar6 & *(uint *)((longlong)plVar2 + 0xc)) * 0x10;
      lVar1 = lVar3 + lVar8;
      pvVar4 = *(void **)(lVar3 + lVar8);
      if (pvVar4 == (void *)0xffffffffffffffff) {
        if (*(longlong *)(lVar1 + 8) != 1) {
          return (pas_page_base *)0x0;
        }
      }
      else if (pvVar4 == param_2) {
        return *(pas_page_base **)(lVar1 + 8);
      }
      uVar6 = uVar6 + 1;
    } while( true );
  }
  return (pas_page_base *)0x0;
}

// bmalloc_marge_bitfit_create_page_header @ 140d62010

pas_page_base * __cdecl
bmalloc_marge_bitfit_create_page_header
          (void *param_1,pas_page_kind param_2,pas_lock_hold_mode param_3)

{
  ulong64 uVar1;
  pas_page_base *ppVar2;
  
  if (param_3 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  uVar1 = pas_page_base_header_size(&bmalloc_heap_config.marge_bitfit_config.base,param_2);
  ppVar2 = pas_page_header_table_add(&bmalloc_marge_page_header_table,0x400000,uVar1,param_1);
  if (param_3 == pas_lock_is_not_held) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  return ppVar2;
}

// bmalloc_marge_bitfit_destroy_page_header @ 140d62080

void __cdecl
bmalloc_marge_bitfit_destroy_page_header(pas_page_base *param_1,pas_lock_hold_mode param_2)

{
  if (param_2 != pas_lock_is_not_held) {
    pas_page_header_table_remove(&bmalloc_marge_page_header_table,0x400000,param_1);
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  pas_page_header_table_remove(&bmalloc_marge_page_header_table,0x400000,param_1);
                    /* WARNING: Could not recover jumptable at 0x000140d620d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  return;
}

// bmalloc_heap_config_allocate_marge_bitfit_page @ 140d620f0

void * __cdecl
bmalloc_heap_config_allocate_marge_bitfit_page
          (pas_segregated_heap *param_1,pas_physical_memory_transaction *param_2)

{
  void *pvVar1;
  pas_heap *ppVar2;
  
  ppVar2 = (pas_heap *)0x0;
  if (param_1->runtime_config->is_part_of_heap) {
    ppVar2 = (pas_heap *)param_1;
  }
  pvVar1 = pas_medium_megapage_cache_try_allocate
                     ((pas_megapage_cache *)(*(longlong *)(param_1->runtime_config + 1) + 0x100),
                      &bmalloc_heap_config.marge_bitfit_config.base,false,ppVar2,param_2);
  return pvVar1;
}

// bmalloc_marge_bitfit_page_config_specialized_allocator_try_allocate @ 140d62130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

pas_fast_path_allocation_result * __cdecl
bmalloc_marge_bitfit_page_config_specialized_allocator_try_allocate
          (pas_fast_path_allocation_result *__return_storage_ptr__,pas_bitfit_allocator *param_1,
          pas_local_allocator *param_2,ulong64 param_3,ulong64 param_4)

{
  longlong lVar1;
  pas_lock *SRWLock;
  longlong lVar2;
  longlong lVar3;
  ulong64 uVar4;
  ulonglong *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  void *pvVar10;
  void *pvVar11;
  pas_thread_local_cache *ppVar12;
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  unkbyte10 Var15;
  undefined1 auVar16 [14];
  undefined1 auVar17 [12];
  undefined1 auVar18 [14];
  undefined1 auVar19 [12];
  undefined1 auVar20 [14];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  BOOLEAN BVar23;
  char cVar24;
  ulonglong uVar25;
  pas_bitfit_view *ppVar26;
  pas_fast_path_allocation_result *ppVar27;
  byte bVar28;
  sbyte sVar29;
  ulonglong uVar30;
  pas_lock *SRWLock_00;
  ulonglong uVar31;
  ulonglong *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulong64 uVar35;
  ulonglong uVar36;
  code *pcVar37;
  pas_fast_path_allocation_result_kind pVar38;
  longlong lVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  longlong lVar46;
  uint uVar47;
  ulonglong uVar48;
  ulong64 uVar49;
  bool bVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar73;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar68 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar83 [16];
  undefined1 unaff_XMM6_Ba;
  char cVar84;
  undefined1 unaff_XMM6_Bb;
  char cVar85;
  undefined1 unaff_XMM6_Bc;
  char cVar86;
  undefined1 unaff_XMM6_Bd;
  char cVar87;
  undefined1 unaff_XMM6_Be;
  char cVar88;
  undefined1 unaff_XMM6_Bf;
  char cVar89;
  undefined1 unaff_XMM6_Bg;
  char cVar90;
  undefined1 unaff_XMM6_Bh;
  char cVar91;
  undefined1 auStackY_158 [32];
  ulonglong local_120;
  ulonglong local_118;
  ushort local_d8;
  int local_c0;
  pas_commit_span local_90;
  ulonglong local_70;
  undefined1 auVar61 [16];
  undefined1 auVar66 [16];
  undefined1 auVar62 [16];
  undefined1 auVar67 [16];
  undefined2 uVar72;
  undefined1 auVar76 [16];
  undefined1 auVar81 [16];
  undefined1 auVar77 [16];
  undefined1 auVar82 [16];
  
  auVar22 = ___xmm_00000001000000010000000100000001;
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar31 = 0x1000;
  if (param_3 != 0) {
    uVar31 = param_3 + 0xfff & 0xfffffffffffff000;
  }
  ppVar26 = param_1->view;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar30 = uVar31 >> 0xc;
  lVar1 = uVar31 - 1;
  uVar42 = ~(-1L << ((byte)uVar30 & 0x3f));
  if (uVar31 == 0x40000) {
    uVar42 = 0xffffffffffffffff;
  }
  iVar51 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                  CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar84 = (char)iVar51;
  cVar85 = (char)((uint)iVar51 >> 8);
  cVar86 = (char)((uint)iVar51 >> 0x10);
  cVar87 = (char)((uint)iVar51 >> 0x18);
  iVar51 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar88 = (char)iVar51;
  cVar89 = (char)((uint)iVar51 >> 8);
  cVar90 = (char)((uint)iVar51 >> 0x10);
  cVar91 = (char)((uint)iVar51 >> 0x18);
  pcVar37 = AcquireSRWLockExclusive_exref;
  do {
    if (ppVar26 == (pas_bitfit_view *)0x0) {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      ppVar12 = *(pas_thread_local_cache **)(lVar9 + 0x9c08);
      if ((pas_thread_local_cache *)&DAT_00000001 < ppVar12) {
        pas_thread_local_cache_stop_local_allocators_if_necessary(ppVar12,param_2);
      }
      ppVar26 = pas_bitfit_size_class_get_first_free_view
                          (param_1->size_class,&bmalloc_heap_config.marge_bitfit_config);
      if (ppVar26 == (pas_bitfit_view *)0x0) {
        pVar38 = pas_fast_path_allocation_result_out_of_memory;
        uVar49 = 0;
        goto LAB_140d62dbd;
      }
      param_1->view = ppVar26;
    }
    SRWLock_00 = &ppVar26->commit_lock;
    SRWLock = &ppVar26->ownership_lock;
    bVar50 = false;
    uVar47 = 0;
LAB_140d622a5:
    (*pcVar37)(SRWLock);
    if ((ppVar26->is_owned == false) &&
       (bVar50 = pas_bitfit_allocator_commit_view
                           (ppVar26,&bmalloc_heap_config.marge_bitfit_config,(uint)bVar50), !bVar50)
       ) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      uVar49 = 0;
      pVar38 = pas_fast_path_allocation_result_out_of_memory;
      if (uVar47 == 0) goto LAB_140d62dbd;
      goto LAB_140d62db7;
    }
    if (bmalloc_marge_page_header_table.hashtable.table ==
        (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d62350:
      uVar49 = 0;
    }
    else {
      pvVar10 = ppVar26->page_boundary;
      uVar41 = (uint)((ulonglong)pvVar10 >> 0x1a) & 0xfffffff ^ (uint)((ulonglong)pvVar10 >> 0x16);
      uVar41 = uVar41 * 0x20 + (uVar41 ^ 0xdeadbeef);
      uVar41 = uVar41 >> 0xb ^ uVar41;
      uVar48 = (ulonglong)(uVar41 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask);
      pvVar11 = (void *)(bmalloc_marge_page_header_table.hashtable.table)->array[uVar48].low;
      while (pvVar11 != pvVar10) {
        uVar41 = uVar41 + 1;
        if (pvVar11 == (void *)0xffffffffffffffff) goto LAB_140d62350;
        uVar48 = (ulonglong)(uVar41 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask)
        ;
        pvVar11 = (void *)(bmalloc_marge_page_header_table.hashtable.table)->array[uVar48].low;
      }
      uVar49 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar48].high;
    }
    lVar2 = uVar49 + 0x10;
    lVar3 = uVar49 + 0x18;
    uVar48 = 0;
    uVar43 = 0;
    do {
      uVar36 = *(ulonglong *)(lVar2 + uVar43 * 8);
      if (uVar36 != 0) {
        uVar40 = 0;
        uVar34 = uVar36;
        local_120 = uVar43;
LAB_140d62372:
        do {
          lVar46 = 0;
          for (uVar43 = uVar36; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x8000000000000000) {
            lVar46 = lVar46 + 1;
          }
          uVar43 = uVar36 >> ((byte)lVar46 & 0x3f) ^ 0xffffffffffffffff;
          local_d8 = (ushort)uVar30;
          if (uVar43 != 0) {
            uVar25 = 0;
            for (; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x8000000000000000) {
              uVar25 = uVar25 + 1;
            }
            uVar44 = uVar30 - uVar25;
            if (uVar25 <= uVar30 && uVar44 != 0) goto LAB_140d623bb;
LAB_140d62460:
            uVar43 = lVar46 + uVar40;
            if (0x1000 < param_4) {
              lVar39 = local_120 * 0x40 + uVar43;
              uVar43 = lVar39 * 0x1000 + (param_4 - 1) & -param_4;
              if ((lVar39 + uVar25) * 0x1000 - uVar43 < uVar31) goto LAB_140d623bb;
              if (lVar1 + uVar43 >> 0x12 != local_120) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              local_120 = uVar43 >> 0x12;
              uVar43 = (ulonglong)((uint)(uVar43 >> 0xc) & 0x3f);
            }
            uVar48 = uVar43 * 0x1000 + local_120 * 0x40000;
            if (0x3fffff < uVar48 + lVar1) {
                    /* WARNING: Does not return */
              pcVar37 = (code *)invalidInstructionException();
              (*pcVar37)();
            }
            uVar36 = uVar48 >> 0xc;
            uVar40 = uVar48 + lVar1 >> 0xc;
            if (uVar47 != 0) {
              if (ppVar26->is_owned == false) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              BVar23 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
              if (BVar23 != '\0') {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              pas_commit_span_construct(&local_90,pas_may_mmap);
              uVar35 = uVar40 + 1;
              if (uVar40 < uVar36) {
                if (uVar36 != uVar35) {
                    /* WARNING: Does not return */
                  pcVar37 = (code *)invalidInstructionException();
                  (*pcVar37)();
                }
              }
              else {
                do {
                  if (*(char *)(uVar49 + 0x110 + uVar36) == -1) {
                    pas_commit_span_add_to_change(&local_90,uVar36);
                    *(undefined1 *)(uVar49 + 0x110 + uVar36) = 1;
                  }
                  else {
                    pas_commit_span_add_unchanged_and_commit
                              (&local_90,*(void **)(uVar49 - 0x10),uVar36,
                               &bmalloc_heap_config.marge_bitfit_config.base);
                    cVar24 = *(char *)(uVar49 + 0x110 + uVar36) + '\x01';
                    *(char *)(uVar49 + 0x110 + uVar36) = cVar24;
                    if (cVar24 == -1) {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      (*pcVar37)();
                    }
                  }
                  uVar36 = uVar36 + 1;
                } while (uVar35 != uVar36);
              }
              pas_commit_span_add_unchanged_and_commit
                        (&local_90,*(void **)(uVar49 - 0x10),uVar35,
                         &bmalloc_heap_config.marge_bitfit_config.base);
              uVar35 = local_90.total_bytes;
LAB_140d62b9b:
              puVar32 = (ulonglong *)(uVar49 + 0x90 + local_120 * 8);
              *puVar32 = *puVar32 | 1L << ((byte)uVar43 + (char)(uVar30 + 0x3f) & 0x3f);
              *(ulonglong *)(uVar49 + 0x10 + local_120 * 8) =
                   uVar34 & ~(uVar42 << ((byte)uVar43 & 0x3f));
              uVar6 = *(ushort *)(uVar49 + 2);
              if (uVar6 == 0) {
                pas_bitfit_view_note_nonemptiness(ppVar26);
              }
              if (CARRY2(uVar6,local_d8)) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              goto LAB_140d62bfe;
            }
            if (uVar40 < uVar36) goto LAB_140d62b99;
            uVar40 = uVar40 + 1;
            uVar44 = uVar40 - uVar36;
            uVar41 = 0;
            uVar25 = uVar36;
            if (uVar44 < 8) goto LAB_140d62b40;
            uVar33 = uVar44 & 0xfffffffffffffff8;
            uVar25 = uVar36 + uVar33;
            iVar51 = 0;
            iVar52 = 0;
            iVar53 = 0;
            iVar54 = 0;
            uVar45 = 0;
            iVar55 = 0;
            iVar56 = 0;
            iVar57 = 0;
            iVar58 = 0;
            do {
              uVar7 = *(undefined4 *)(uVar36 + uVar49 + 0x110 + uVar45);
              uVar8 = *(undefined4 *)(uVar36 + uVar49 + 0x114 + uVar45);
              cVar24 = -((char)uVar7 == cVar84);
              cVar69 = -((char)((uint)uVar7 >> 8) == cVar85);
              cVar70 = -((char)((uint)uVar7 >> 0x10) == cVar86);
              cVar71 = -((char)((uint)uVar7 >> 0x18) == cVar87);
              cVar73 = -(cVar91 == '\0');
              Var15 = CONCAT91(CONCAT81((longlong)
                                        (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar73,cVar73),-(cVar90 == '\0')),
                                                  -(cVar90 == '\0')),-(cVar89 == '\0')),
                                                  -(cVar89 == '\0')),-(cVar88 == '\0')),
                                                  CONCAT11(-(cVar88 == '\0'),cVar73)) >> 8),cVar71),
                               cVar71);
              auVar19._2_10_ = Var15;
              auVar19[1] = cVar70;
              auVar19[0] = cVar70;
              auVar18._2_12_ = auVar19;
              auVar18[1] = cVar69;
              auVar18[0] = cVar69;
              auVar64._0_2_ = CONCAT11(cVar24,cVar24);
              auVar64._2_14_ = auVar18;
              uVar72 = (undefined2)Var15;
              auVar67._0_12_ = auVar64._0_12_;
              auVar67._12_2_ = uVar72;
              auVar67._14_2_ = uVar72;
              auVar66._12_4_ = auVar67._12_4_;
              auVar66._0_10_ = auVar64._0_10_;
              auVar66._10_2_ = auVar19._0_2_;
              auVar65._10_6_ = auVar66._10_6_;
              auVar65._0_8_ = auVar64._0_8_;
              auVar65._8_2_ = auVar19._0_2_;
              auVar68._8_8_ = auVar65._8_8_;
              auVar68._6_2_ = auVar18._0_2_;
              auVar68._4_2_ = auVar18._0_2_;
              auVar68._2_2_ = auVar64._0_2_;
              auVar68._0_2_ = auVar64._0_2_;
              auVar68 = auVar68 & auVar22;
              iVar51 = iVar51 + auVar68._0_4_;
              iVar52 = iVar52 + auVar68._4_4_;
              iVar53 = iVar53 + auVar68._8_4_;
              iVar54 = iVar54 + auVar68._12_4_;
              cVar24 = -((char)uVar8 == cVar84);
              cVar69 = -((char)((uint)uVar8 >> 8) == cVar85);
              cVar70 = -((char)((uint)uVar8 >> 0x10) == cVar86);
              cVar71 = -((char)((uint)uVar8 >> 0x18) == cVar87);
              cVar73 = -(cVar91 == '\0');
              Var15 = CONCAT91(CONCAT81((longlong)
                                        (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar73,cVar73),-(cVar90 == '\0')),
                                                  -(cVar90 == '\0')),-(cVar89 == '\0')),
                                                  -(cVar89 == '\0')),-(cVar88 == '\0')),
                                                  CONCAT11(-(cVar88 == '\0'),cVar73)) >> 8),cVar71),
                               cVar71);
              auVar21._2_10_ = Var15;
              auVar21[1] = cVar70;
              auVar21[0] = cVar70;
              auVar20._2_12_ = auVar21;
              auVar20[1] = cVar69;
              auVar20[0] = cVar69;
              auVar79._0_2_ = CONCAT11(cVar24,cVar24);
              auVar79._2_14_ = auVar20;
              uVar72 = (undefined2)Var15;
              auVar82._0_12_ = auVar79._0_12_;
              auVar82._12_2_ = uVar72;
              auVar82._14_2_ = uVar72;
              auVar81._12_4_ = auVar82._12_4_;
              auVar81._0_10_ = auVar79._0_10_;
              auVar81._10_2_ = auVar21._0_2_;
              auVar80._10_6_ = auVar81._10_6_;
              auVar80._0_8_ = auVar79._0_8_;
              auVar80._8_2_ = auVar21._0_2_;
              auVar83._8_8_ = auVar80._8_8_;
              auVar83._6_2_ = auVar20._0_2_;
              auVar83._4_2_ = auVar20._0_2_;
              auVar83._2_2_ = auVar79._0_2_;
              auVar83._0_2_ = auVar79._0_2_;
              auVar83 = auVar83 & auVar22;
              iVar55 = iVar55 + auVar83._0_4_;
              iVar56 = iVar56 + auVar83._4_4_;
              iVar57 = iVar57 + auVar83._8_4_;
              iVar58 = iVar58 + auVar83._12_4_;
              uVar45 = uVar45 + 8;
            } while (uVar33 != uVar45);
            uVar41 = iVar58 + iVar54 + iVar56 + iVar52 + iVar57 + iVar53 + iVar55 + iVar51;
            if (uVar44 != uVar33) {
LAB_140d62b40:
              do {
                uVar41 = uVar41 + (*(char *)(uVar49 + 0x110 + uVar25) == -1);
                uVar25 = uVar25 + 1;
              } while (uVar40 != uVar25);
            }
            if (uVar41 != 0) {
              bVar50 = false;
              uVar49 = 0;
              uVar35 = 0;
              goto LAB_140d62c0b;
            }
            do {
              cVar24 = *(char *)(uVar49 + 0x110 + uVar36);
              if (cVar24 == -1) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              cVar24 = cVar24 + '\x01';
              *(char *)(uVar49 + 0x110 + uVar36) = cVar24;
              if (cVar24 == -1) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              uVar36 = uVar36 + 1;
            } while (uVar40 != uVar36);
LAB_140d62b99:
            uVar35 = 0;
            goto LAB_140d62b9b;
          }
          uVar25 = 0x40;
          uVar44 = uVar30 - 0x40;
          if (uVar30 < 0x40 || uVar44 == 0) goto LAB_140d62460;
LAB_140d623bb:
          local_118 = lVar46 + uVar40;
          if (uVar25 + local_118 < 0x40) goto LAB_140d624c0;
          uVar36 = local_120 + 1;
          if (0xf < uVar36) {
LAB_140d62618:
            local_118 = (uVar36 - local_120) * 0x40 - local_118;
            if (local_118 < uVar48) {
              local_118 = uVar48;
            }
            uVar49 = local_118 << 0xc;
            bVar50 = false;
            uVar41 = 0;
            uVar35 = 0;
            goto LAB_140d62c0b;
          }
          uVar25 = local_118 * 0x1000 + (param_4 - 1) + local_120 * 0x40000 & -param_4;
          if (param_4 < 0x1001) {
            uVar43 = ~local_120;
            puVar32 = (ulonglong *)(lVar3 + local_120 * 8);
            while (uVar33 = *puVar32, uVar33 == 0xffffffffffffffff) {
              if (uVar44 < 0x41) {
                uVar43 = -uVar43;
                uVar33 = 0xffffffffffffffff;
                goto LAB_140d62643;
              }
              uVar44 = uVar44 - 0x40;
              uVar43 = uVar43 - 1;
              puVar32 = puVar32 + 1;
              if (uVar43 == 0xfffffffffffffff0) {
                uVar36 = 0x10;
                goto LAB_140d62618;
              }
            }
            uVar43 = -uVar43;
          }
          else {
            lVar46 = local_120 * -8;
            uVar40 = (local_120 * 0x40000 - uVar25) + 0x80000;
            uVar43 = local_120;
            while (uVar33 = *(ulonglong *)(lVar3 + uVar43 * 8), uVar33 == 0xffffffffffffffff) {
              if (uVar44 < 0x41) {
                if (uVar31 <= uVar40) {
                  if ((lVar1 + uVar25 >> 0x12) - 1 != uVar43) {
                    /* WARNING: Does not return */
                    pcVar37 = (code *)invalidInstructionException();
                    (*pcVar37)();
                  }
                  puVar32 = (ulonglong *)(lVar3 - lVar46);
                  local_120 = uVar25 >> 0x12;
                  local_118 = (ulonglong)((uint)(uVar25 >> 0xc) & 0x3f);
                  uVar43 = uVar43 + 1;
                  uVar33 = 0xffffffffffffffff;
                  goto LAB_140d62643;
                }
              }
              else {
                uVar44 = uVar44 - 0x40;
              }
              uVar43 = uVar43 + 1;
              lVar46 = lVar46 + -8;
              uVar40 = uVar40 + 0x40000;
              uVar36 = 0x10;
              if (uVar43 == 0xf) goto LAB_140d62618;
            }
            uVar43 = uVar43 + 1;
          }
          uVar40 = 0;
          for (uVar36 = ~uVar33; (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x8000000000000000) {
            uVar40 = uVar40 + 1;
          }
          if (uVar44 <= uVar40) {
            if (param_4 < 0x1001) {
              puVar32 = (ulonglong *)(lVar2 + uVar43 * 8);
            }
            else {
              if ((uVar43 * 0x40000 - uVar25) + (ulonglong)(uint)((int)uVar40 << 0xc) < uVar31)
              goto LAB_140d624f9;
              if (lVar1 + uVar25 >> 0x12 != uVar43) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              puVar32 = (ulonglong *)(lVar2 + uVar43 * 8);
              local_120 = uVar25 >> 0x12;
              local_118 = (ulonglong)((uint)(uVar25 >> 0xc) & 0x3f);
            }
LAB_140d62643:
            uVar48 = local_118 * 0x1000 + local_120 * 0x40000;
            if (0x3fffff < uVar48 + lVar1) {
                    /* WARNING: Does not return */
              pcVar37 = (code *)invalidInstructionException();
              (*pcVar37)();
            }
            uVar35 = uVar48 >> 0xc;
            uVar36 = uVar48 + lVar1 >> 0xc;
            if (uVar47 == 0) {
              if (uVar36 < uVar35) goto LAB_140d62879;
              uVar36 = uVar36 + 1;
              uVar25 = uVar36 - uVar35;
              uVar41 = 0;
              uVar40 = uVar35;
              if (uVar25 < 8) goto LAB_140d62810;
              uVar44 = uVar25 & 0xfffffffffffffff8;
              uVar40 = uVar35 + uVar44;
              iVar51 = 0;
              iVar52 = 0;
              iVar53 = 0;
              iVar54 = 0;
              uVar45 = 0;
              iVar55 = 0;
              iVar56 = 0;
              iVar57 = 0;
              iVar58 = 0;
              do {
                uVar7 = *(undefined4 *)(uVar35 + uVar49 + 0x110 + uVar45);
                uVar8 = *(undefined4 *)(uVar35 + uVar49 + 0x114 + uVar45);
                cVar24 = -((char)uVar7 == cVar84);
                cVar69 = -((char)((uint)uVar7 >> 8) == cVar85);
                cVar70 = -((char)((uint)uVar7 >> 0x10) == cVar86);
                cVar71 = -((char)((uint)uVar7 >> 0x18) == cVar87);
                cVar73 = -(cVar91 == '\0');
                Var15 = CONCAT91(CONCAT81((longlong)
                                          (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar73,cVar73),-(cVar90 == '\0')),
                                                  -(cVar90 == '\0')),-(cVar89 == '\0')),
                                                  -(cVar89 == '\0')),-(cVar88 == '\0')),
                                                  CONCAT11(-(cVar88 == '\0'),cVar73)) >> 8),cVar71),
                                 cVar71);
                auVar14._2_10_ = Var15;
                auVar14[1] = cVar70;
                auVar14[0] = cVar70;
                auVar13._2_12_ = auVar14;
                auVar13[1] = cVar69;
                auVar13[0] = cVar69;
                auVar59._0_2_ = CONCAT11(cVar24,cVar24);
                auVar59._2_14_ = auVar13;
                uVar72 = (undefined2)Var15;
                auVar62._0_12_ = auVar59._0_12_;
                auVar62._12_2_ = uVar72;
                auVar62._14_2_ = uVar72;
                auVar61._12_4_ = auVar62._12_4_;
                auVar61._0_10_ = auVar59._0_10_;
                auVar61._10_2_ = auVar14._0_2_;
                auVar60._10_6_ = auVar61._10_6_;
                auVar60._0_8_ = auVar59._0_8_;
                auVar60._8_2_ = auVar14._0_2_;
                auVar63._8_8_ = auVar60._8_8_;
                auVar63._6_2_ = auVar13._0_2_;
                auVar63._4_2_ = auVar13._0_2_;
                auVar63._2_2_ = auVar59._0_2_;
                auVar63._0_2_ = auVar59._0_2_;
                auVar63 = auVar63 & auVar22;
                iVar51 = iVar51 + auVar63._0_4_;
                iVar52 = iVar52 + auVar63._4_4_;
                iVar53 = iVar53 + auVar63._8_4_;
                iVar54 = iVar54 + auVar63._12_4_;
                cVar24 = -((char)uVar8 == cVar84);
                cVar69 = -((char)((uint)uVar8 >> 8) == cVar85);
                cVar70 = -((char)((uint)uVar8 >> 0x10) == cVar86);
                cVar71 = -((char)((uint)uVar8 >> 0x18) == cVar87);
                cVar73 = -(cVar91 == '\0');
                Var15 = CONCAT91(CONCAT81((longlong)
                                          (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(
                                                  CONCAT11(cVar73,cVar73),-(cVar90 == '\0')),
                                                  -(cVar90 == '\0')),-(cVar89 == '\0')),
                                                  -(cVar89 == '\0')),-(cVar88 == '\0')),
                                                  CONCAT11(-(cVar88 == '\0'),cVar73)) >> 8),cVar71),
                                 cVar71);
                auVar17._2_10_ = Var15;
                auVar17[1] = cVar70;
                auVar17[0] = cVar70;
                auVar16._2_12_ = auVar17;
                auVar16[1] = cVar69;
                auVar16[0] = cVar69;
                auVar74._0_2_ = CONCAT11(cVar24,cVar24);
                auVar74._2_14_ = auVar16;
                uVar72 = (undefined2)Var15;
                auVar77._0_12_ = auVar74._0_12_;
                auVar77._12_2_ = uVar72;
                auVar77._14_2_ = uVar72;
                auVar76._12_4_ = auVar77._12_4_;
                auVar76._0_10_ = auVar74._0_10_;
                auVar76._10_2_ = auVar17._0_2_;
                auVar75._10_6_ = auVar76._10_6_;
                auVar75._0_8_ = auVar74._0_8_;
                auVar75._8_2_ = auVar17._0_2_;
                auVar78._8_8_ = auVar75._8_8_;
                auVar78._6_2_ = auVar16._0_2_;
                auVar78._4_2_ = auVar16._0_2_;
                auVar78._2_2_ = auVar74._0_2_;
                auVar78._0_2_ = auVar74._0_2_;
                auVar78 = auVar78 & auVar22;
                iVar55 = iVar55 + auVar78._0_4_;
                iVar56 = iVar56 + auVar78._4_4_;
                iVar57 = iVar57 + auVar78._8_4_;
                iVar58 = iVar58 + auVar78._12_4_;
                uVar45 = uVar45 + 8;
              } while (uVar44 != uVar45);
              uVar41 = iVar58 + iVar54 + iVar56 + iVar52 + iVar57 + iVar53 + iVar55 + iVar51;
              if (uVar25 != uVar44) {
LAB_140d62810:
                do {
                  uVar41 = uVar41 + (*(char *)(uVar49 + 0x110 + uVar40) == -1);
                  uVar40 = uVar40 + 1;
                } while (uVar36 != uVar40);
              }
              if (uVar41 != 0) {
                bVar50 = false;
                uVar49 = 0;
                uVar35 = 0;
                goto LAB_140d62c0b;
              }
              do {
                cVar24 = *(char *)(uVar49 + 0x110 + uVar35);
                if (cVar24 == -1) {
                    /* WARNING: Does not return */
                  pcVar37 = (code *)invalidInstructionException();
                  (*pcVar37)();
                }
                cVar24 = cVar24 + '\x01';
                *(char *)(uVar49 + 0x110 + uVar35) = cVar24;
                if (cVar24 == -1) {
                    /* WARNING: Does not return */
                  pcVar37 = (code *)invalidInstructionException();
                  (*pcVar37)();
                }
                uVar35 = uVar35 + 1;
              } while (uVar36 != uVar35);
LAB_140d62879:
              uVar35 = 0;
            }
            else {
              if (ppVar26->is_owned == false) {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              BVar23 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
              if (BVar23 != '\0') {
                    /* WARNING: Does not return */
                pcVar37 = (code *)invalidInstructionException();
                (*pcVar37)();
              }
              pas_commit_span_construct(&local_90,pas_may_mmap);
              uVar4 = uVar36 + 1;
              if (uVar36 < uVar35) {
                if (uVar35 != uVar4) {
                    /* WARNING: Does not return */
                  pcVar37 = (code *)invalidInstructionException();
                  (*pcVar37)();
                }
              }
              else {
                do {
                  if (*(char *)(uVar49 + 0x110 + uVar35) == -1) {
                    pas_commit_span_add_to_change(&local_90,uVar35);
                    *(undefined1 *)(uVar49 + 0x110 + uVar35) = 1;
                  }
                  else {
                    pas_commit_span_add_unchanged_and_commit
                              (&local_90,*(void **)(uVar49 - 0x10),uVar35,
                               &bmalloc_heap_config.marge_bitfit_config.base);
                    cVar24 = *(char *)(uVar49 + 0x110 + uVar35) + '\x01';
                    *(char *)(uVar49 + 0x110 + uVar35) = cVar24;
                    if (cVar24 == -1) {
                    /* WARNING: Does not return */
                      pcVar37 = (code *)invalidInstructionException();
                      (*pcVar37)();
                    }
                  }
                  uVar35 = uVar35 + 1;
                } while (uVar4 != uVar35);
              }
              pas_commit_span_add_unchanged_and_commit
                        (&local_90,*(void **)(uVar49 - 0x10),uVar4,
                         &bmalloc_heap_config.marge_bitfit_config.base);
              uVar35 = local_90.total_bytes;
            }
            bVar28 = 0x40 - (char)local_118;
            uVar36 = (uVar34 << (bVar28 & 0x3f)) >> (bVar28 & 0x3f);
            if (local_118 == 0) {
              uVar36 = 0;
            }
            *(ulonglong *)(lVar2 + local_120 * 8) = uVar36;
            if (local_120 + 1 < uVar43) {
              memset((void *)(local_120 * 8 + 0x18 + uVar49),0,(~local_120 + uVar43) * 8);
            }
            local_c0 = (int)(uVar30 + 0x3f);
            uVar41 = (int)local_118 + local_c0 & 0x3f;
            sVar29 = (sbyte)uVar41;
            puVar5 = (ulonglong *)(uVar49 + 0x90 + uVar43 * 8);
            *puVar5 = *puVar5 | 1L << sVar29;
            uVar43 = 0;
            if (uVar41 != 0x3f) {
              uVar43 = -2L << sVar29 & uVar33;
            }
            *puVar32 = uVar43;
            uVar6 = *(ushort *)(uVar49 + 2);
            if (uVar6 == 0) {
              pas_bitfit_view_note_nonemptiness(ppVar26);
            }
            if (CARRY2(uVar6,local_d8)) {
                    /* WARNING: Does not return */
              pcVar37 = (code *)invalidInstructionException();
              (*pcVar37)();
            }
LAB_140d62bfe:
            *(ushort *)(uVar49 + 2) = uVar6 + local_d8;
            uVar49 = uVar48 + *(longlong *)(uVar49 - 0x10);
            uVar41 = 0;
            bVar50 = true;
            goto LAB_140d62c0b;
          }
LAB_140d624f9:
          uVar36 = (uVar40 - local_118) + (uVar43 - local_120) * 0x40;
          if (uVar48 <= uVar36) {
            uVar48 = uVar36;
          }
          uVar36 = uVar33 >> ((byte)uVar40 & 0x3f);
          uVar34 = uVar33;
          local_120 = uVar43;
        } while (uVar36 != 0);
      }
LAB_140d625d3:
      uVar43 = uVar43 + 1;
    } while (uVar43 < 0x10);
    uVar49 = uVar48 << 0xc;
    bVar50 = false;
    uVar41 = 0;
    uVar35 = 0;
LAB_140d62c0b:
    pcVar37 = AcquireSRWLockExclusive_exref;
    if (uVar47 != 0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
    }
    if (uVar41 != 0) {
      if (uVar35 != 0) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)invalidInstructionException();
        (*pcVar37)();
      }
      if (uVar47 != 0) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)invalidInstructionException();
        (*pcVar37)();
      }
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      bVar50 = uVar41 != 0;
      uVar47 = uVar41;
      if (bVar50) {
        pas_physical_page_sharing_pool_take_for_page_config
                  ((ulonglong)uVar41 << 0xc,&bmalloc_heap_config.marge_bitfit_config.base,
                   pas_lock_is_not_held,(pas_lock **)0x0,0);
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
      }
      goto LAB_140d622a5;
    }
    if (bVar50) {
      pVar38 = pas_fast_path_allocation_result_success;
      SRWLock_00 = SRWLock;
LAB_140d62db7:
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
LAB_140d62dbd:
      __return_storage_ptr__->kind = pVar38;
      __return_storage_ptr__->begin = uVar49;
      if ((local_70 ^ (ulonglong)auStackY_158) == __security_cookie.value) {
        return __return_storage_ptr__;
      }
      pcVar37 = (code *)swi(3);
      ppVar27 = (pas_fast_path_allocation_result *)(*pcVar37)();
      return ppVar27;
    }
    if (uVar35 != 0) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)invalidInstructionException();
      (*pcVar37)();
    }
    ppVar26 = pas_bitfit_allocator_finish_failing
                        (param_1,ppVar26,uVar31,param_4,uVar49,
                         &bmalloc_heap_config.marge_bitfit_config);
  } while( true );
LAB_140d624c0:
  if (uVar48 <= uVar25) {
    uVar48 = uVar25;
  }
  uVar40 = uVar40 + lVar46 + uVar25;
  uVar36 = uVar36 >> ((byte)(lVar46 + uVar25) & 0x3f);
  uVar43 = local_120;
  if (uVar36 == 0) goto LAB_140d625d3;
  goto LAB_140d62372;
}

// bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page @ 140d62e70

void __cdecl
bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page
          (pas_bitfit_page *param_1,ulong64 param_2)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ushort uVar9;
  ulonglong uVar10;
  char *pcVar11;
  sbyte sVar12;
  ulonglong uVar13;
  bool bVar14;
  pas_bitfit_view *ppVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  
  uVar18 = (ulonglong)(param_1->owner).payload;
  ppVar15 = (pas_bitfit_view *)(uVar18 * 8 + pas_compact_heap_reservation_base);
  uVar19 = (uint)param_2 & 0x3fffff;
  uVar20 = (ulonglong)uVar19;
  if (uVar18 == 0) {
    ppVar15 = (pas_bitfit_view *)0x0;
  }
  uVar8 = uVar19 >> 0xc;
  uVar18 = (ulonglong)uVar8;
  AcquireSRWLockExclusive((PSRWLOCK)&ppVar15->ownership_lock);
  if (uVar20 != 0) {
    uVar10 = uVar18 - 1;
    if (((*(uint *)((longlong)param_1->bits + (uVar10 >> 5) * 4) >> ((uint)uVar10 & 0x1f) & 1) == 0)
       && ((*(uint *)((longlong)param_1[6].bits + (uVar10 >> 5) * 4 + -0x10) &
           1 << ((byte)uVar10 & 0x1f)) == 0)) {
      pcVar11 = "previous bit is not free or end of object";
      goto LAB_140d630d9;
    }
  }
  if ((*(uint *)((longlong)param_1->bits + (ulonglong)(uVar19 >> 0x11) * 4) >> (uVar8 & 0x1f) & 1)
      != 0) {
    pcVar11 = "free bit set";
LAB_140d630d9:
                    /* WARNING: Subroutine does not return */
    pas_bitfit_page_deallocation_did_fail
              (param_1,pas_bitfit_page_config_kind_bmalloc_marge_bitfit,param_2,uVar20,pcVar11);
  }
  uVar7 = (ulonglong)(uVar19 >> 0x12);
  uVar10 = param_1[6].bits[uVar7 - 2];
  sVar12 = (sbyte)(uVar8 & 0x3f);
  uVar13 = uVar10 >> sVar12;
  if (uVar13 == 0) {
    lVar16 = (ulonglong)(uVar8 & 0x3f) - 1;
    uVar10 = uVar7;
    do {
      uVar13 = uVar10;
      if (uVar13 == 0xf) {
        pcVar11 = "object falls off end of page";
        goto LAB_140d630d9;
      }
      uVar3 = param_1[6].bits[uVar13 - 1];
      uVar10 = uVar13 + 1;
      lVar16 = lVar16 + -0x40;
    } while (uVar3 == 0);
    if (uVar13 < uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar6 = 0;
    for (uVar17 = uVar3; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
      uVar6 = uVar6 + 1;
    }
    lVar16 = uVar6 - lVar16;
    uVar17 = ~(-2L << ((byte)uVar6 & 0x3f));
    if (uVar6 == 0x3f) {
      uVar17 = 0xffffffffffffffff;
    }
    param_1[1].bits[uVar13 - 2] = param_1[1].bits[uVar13 - 2] | uVar17;
    param_1[6].bits[uVar13 - 1] = uVar3 & ~(1L << (uVar6 & 0x3f));
    param_1->bits[uVar7] = param_1->bits[uVar7] | -1L << sVar12;
    if (uVar7 < uVar13) {
      uVar13 = uVar7 + 2;
      if (uVar7 + 2 < uVar10) {
        uVar13 = uVar10;
      }
      memset(param_1[1].bits + (uVar7 - 2),(int)CONCAT71((int7)(uVar10 >> 8),0xff),
             (uVar13 + ~uVar7) * 8);
    }
  }
  else {
    lVar5 = 0;
    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x8000000000000000) {
      lVar5 = lVar5 + 1;
    }
    lVar16 = lVar5 + 1;
    uVar13 = 0xffffffffffffffff;
    if (lVar16 != 0x40) {
      uVar13 = ~(-2L << ((byte)lVar5 & 0x3f));
    }
    param_1->bits[uVar7] = param_1->bits[uVar7] | uVar13 << sVar12;
    param_1[6].bits[uVar7 - 2] = uVar10 & ~(1L << ((ulonglong)((int)lVar5 + uVar8) & 0x3f));
  }
  uVar10 = lVar16 * 0x1000;
  if (CARRY8(uVar20,uVar10)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar10 != 0) {
    uVar20 = (uVar20 + uVar10) - 1;
    if (0x3fffff < uVar20) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar20 = uVar20 >> 0xc;
    if (uVar18 <= uVar20) {
      bVar14 = false;
      do {
        cVar1 = *(char *)((longlong)param_1[0xb].bits + (uVar18 - 8));
        if (cVar1 == '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (cVar1 == -1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        *(char *)((longlong)param_1[0xb].bits + (uVar18 - 8)) = cVar1 + -1;
        bVar14 = (bool)(bVar14 | (char)(cVar1 + -1) == '\0');
        uVar18 = uVar18 + 1;
      } while (uVar20 + 1 != uVar18);
      goto LAB_140d6306c;
    }
  }
  bVar14 = false;
LAB_140d6306c:
  if (param_1->did_note_max_free == false) {
    pas_bitfit_view_note_max_free(ppVar15);
    param_1->did_note_max_free = true;
  }
  uVar2 = param_1->num_live_bits;
  uVar9 = uVar2 - (ushort)lVar16;
  param_1->num_live_bits = uVar9;
  if ((ushort)lVar16 <= uVar2) {
    if (uVar9 == 0) {
      pas_bitfit_view_note_full_emptiness(ppVar15,param_1);
    }
    else if (bVar14) {
      pas_bitfit_view_note_partial_emptiness(ppVar15,param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x000140d630bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&ppVar15->ownership_lock);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

// bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page @ 140d63110

ulong64 __cdecl
bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
          (pas_bitfit_page *param_1,ulong64 param_2)

{
  longlong lVar1;
  ulong64 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (ulonglong)((uint)param_2 >> 0x12 & 0xf);
  uVar3 = (uint)(param_2 >> 0xc) & 0x3f;
  uVar6 = param_1[6].bits[uVar5 - 2] >> (sbyte)uVar3;
  if (uVar6 != 0) {
    lVar4 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
      lVar4 = lVar4 + 1;
    }
    return lVar4 * 0x1000 + 0x1000;
  }
  lVar4 = -(ulonglong)uVar3;
  puVar2 = param_1[6].bits + (uVar5 - 1);
  do {
    uVar6 = *puVar2;
    lVar4 = lVar4 + 0x40;
    puVar2 = puVar2 + 1;
  } while (uVar6 == 0);
  lVar1 = 0;
  for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
    lVar1 = lVar1 + 1;
  }
  return (lVar1 + lVar4) * 0x1000 + 0x1000;
}

// bmalloc_marge_bitfit_page_config_specialized_page_shrink_with_page @ 140d63180

void __cdecl
bmalloc_marge_bitfit_page_config_specialized_page_shrink_with_page
          (pas_bitfit_page *param_1,ulong64 param_2,ulong64 param_3)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *pcVar12;
  sbyte sVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  pas_bitfit_view *ppVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ushort uVar23;
  ulonglong uVar24;
  
  uVar21 = (uint)param_2 & 0x3fffff;
  uVar16 = (ulonglong)uVar21;
  uVar9 = (ulonglong)(param_1->owner).payload;
  ppVar17 = (pas_bitfit_view *)(uVar9 * 8 + pas_compact_heap_reservation_base);
  if (uVar9 == 0) {
    ppVar17 = (pas_bitfit_view *)0x0;
  }
  uVar9 = 1;
  if (param_3 != 0) {
    uVar9 = param_3 + 0xfff >> 0xc;
  }
  uVar7 = uVar21 >> 0xc;
  uVar11 = (ulonglong)uVar7;
  AcquireSRWLockExclusive((PSRWLOCK)&ppVar17->ownership_lock);
  if (uVar16 != 0) {
    uVar22 = uVar11 - 1;
    if (((*(uint *)((longlong)param_1->bits + (uVar22 >> 5) * 4) >> ((uint)uVar22 & 0x1f) & 1) == 0)
       && ((*(uint *)((longlong)param_1[6].bits + (uVar22 >> 5) * 4 + -0x10) &
           1 << ((byte)uVar22 & 0x1f)) == 0)) {
      pcVar12 = "previous bit is not free or end of object";
      goto LAB_140d6350d;
    }
  }
  if ((*(uint *)((longlong)param_1->bits + (ulonglong)(uVar21 >> 0x11) * 4) >> (uVar7 & 0x1f) & 1)
      != 0) {
    pcVar12 = "free bit set";
LAB_140d6350d:
                    /* WARNING: Subroutine does not return */
    pas_bitfit_page_deallocation_did_fail
              (param_1,pas_bitfit_page_config_kind_bmalloc_marge_bitfit,param_2,uVar16,pcVar12);
  }
  uVar6 = (ulonglong)(uVar21 >> 0x12);
  uVar10 = (ulonglong)(uVar7 & 0x3f);
  uVar22 = param_1[6].bits[uVar6 - 2];
  sVar13 = (sbyte)(uVar7 & 0x3f);
  uVar19 = uVar22 >> sVar13;
  uVar20 = uVar6;
  uVar24 = uVar9;
  if (uVar19 == 0) {
    do {
      uVar22 = uVar20;
      if (uVar22 == 0xf) {
        pcVar12 = "object falls off end of page";
        goto LAB_140d6350d;
      }
      uVar19 = param_1[6].bits[uVar22 - 1];
      uVar20 = uVar22 + 1;
      uVar10 = uVar10 - 0x40;
    } while (uVar19 == 0);
    if (uVar22 < uVar6) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar6 = 0;
    for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
      uVar6 = uVar6 + 1;
    }
    uVar19 = (uVar6 - uVar10) + 1;
    if (uVar9 <= uVar19) {
      if ((uVar6 - uVar9) + 1 != uVar10) {
        uVar18 = uVar9 + uVar11 >> 6;
        uVar21 = (uint)(uVar9 + uVar11) & 0x3f;
        uVar11 = (uVar9 + uVar11) - 1;
        puVar1 = (uint *)((longlong)param_1[6].bits + (uVar11 >> 5) * 4 + -0x10);
        *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
        uVar11 = param_1[6].bits[uVar22 - 1];
        uVar24 = uVar19;
        if (uVar18 == uVar20) {
          if (uVar21 - uVar9 != uVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar19 = (uVar6 - uVar21) + 1;
          if (0x40 < uVar19) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar20 = ~(-1L << ((byte)uVar19 & 0x3f));
          if (uVar19 == 0x40) {
            uVar20 = 0xffffffffffffffff;
          }
          param_1[1].bits[uVar22 - 2] = param_1[1].bits[uVar22 - 2] | uVar20 << (sbyte)uVar21;
          param_1[6].bits[uVar22 - 1] = uVar11 & ~(1L << (uVar6 & 0x3f));
        }
        else {
          uVar19 = ~(-2L << ((byte)uVar6 & 0x3f));
          if (uVar6 == 0x3f) {
            uVar19 = 0xffffffffffffffff;
          }
          param_1[1].bits[uVar22 - 2] = param_1[1].bits[uVar22 - 2] | uVar19;
          param_1[6].bits[uVar22 - 1] = uVar11 & ~(1L << (uVar6 & 0x3f));
          param_1->bits[uVar18] = param_1->bits[uVar18] | -1L << (sbyte)uVar21;
          if (uVar18 < uVar22) {
            uVar11 = uVar18 + 2;
            if (uVar18 + 2 < uVar20) {
              uVar11 = uVar20;
            }
            memset(param_1[1].bits + (uVar18 - 2),(int)CONCAT71((int7)(uVar6 >> 8),0xff),
                   (uVar11 + ~uVar18) * 8);
          }
        }
      }
      goto LAB_140d63405;
    }
  }
  else {
    lVar5 = 0;
    for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
      lVar5 = lVar5 + 1;
    }
    uVar11 = lVar5 + 1;
    lVar15 = uVar11 - uVar9;
    if (uVar9 <= uVar11) {
      if (lVar15 != 0) {
        uVar19 = ~(-1L << ((byte)lVar15 & 0x3f));
        if (lVar15 == 0x40) {
          uVar19 = 0xffffffffffffffff;
        }
        bVar14 = sVar13 + (char)uVar9;
        param_1->bits[uVar6] = param_1->bits[uVar6] | uVar19 << (bVar14 & 0x3f);
        param_1[6].bits[uVar6 - 2] =
             uVar22 & ~(1L << ((ulonglong)((int)lVar5 + uVar7) & 0x3f)) |
             1L << ((ulonglong)(byte)(bVar14 - 1) & 0x3f);
        uVar24 = uVar11;
      }
LAB_140d63405:
      uVar11 = uVar24 * 0x1000 + uVar16;
      uVar16 = uVar9 * 0x1000 + uVar16 + 0xfff & 0xfffffffffffff000;
      uVar22 = 0;
      if (uVar11 < uVar16) {
        uVar16 = uVar22;
        uVar11 = uVar22;
      }
      if (uVar16 != uVar11) {
        if (0x3fffff < uVar11 - 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar11 = uVar11 - 1 >> 0xc;
        uVar16 = uVar16 >> 0xc;
        if (uVar11 < uVar16) {
          uVar22 = 0;
        }
        else {
          uVar22 = 0;
          do {
            cVar2 = *(char *)((longlong)param_1[0xb].bits + (uVar16 - 8));
            if (cVar2 == '\0') {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if (cVar2 == -1) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            *(char *)((longlong)param_1[0xb].bits + (uVar16 - 8)) = cVar2 + -1;
            uVar22 = (ulonglong)(byte)((byte)uVar22 | (char)(cVar2 + -1) == '\0');
            uVar16 = uVar16 + 1;
          } while (uVar11 + 1 != uVar16);
        }
      }
      uVar23 = (short)uVar24 - (short)uVar9;
      if (param_1->did_note_max_free == false) {
        pas_bitfit_view_note_max_free(ppVar17);
        param_1->did_note_max_free = true;
      }
      uVar3 = param_1->num_live_bits;
      uVar8 = uVar3 - uVar23;
      param_1->num_live_bits = uVar8;
      if (uVar23 <= uVar3) {
        if (uVar8 == 0) {
          pas_bitfit_view_note_full_emptiness(ppVar17,param_1);
        }
        else if (uVar22 != 0) {
          pas_bitfit_view_note_partial_emptiness(ppVar17,param_1);
        }
                    /* WARNING: Could not recover jumptable at 0x000140d634f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)&ppVar17->ownership_lock);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
                    /* WARNING: Subroutine does not return */
  pas_deallocation_did_fail("attempt to shrink to a larger size",param_2);
}

// bmalloc_heap_config_fast_megapage_kind @ 140d63550

pas_fast_megapage_kind __cdecl bmalloc_heap_config_fast_megapage_kind(ulong64 param_1)

{
  pas_fast_megapage_kind pVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_1 >> 0x18;
  if ((param_1 >> 0x2b != 0) ||
     (pVar1 = pas_small_exclusive_segregated_fast_megapage_kind,
     (bmalloc_megapage_table.fast_bits[param_1 >> 0x1d] >> ((uint)(param_1 >> 0x18) & 0x1f) & 1) ==
     0)) {
    pVar1 = pas_not_a_fast_megapage_kind;
    uVar3 = uVar2 - (bmalloc_megapage_table.instance)->index_begin;
    if (((bmalloc_megapage_table.instance)->index_begin <= uVar2) &&
       (uVar2 < (bmalloc_megapage_table.instance)->index_end)) {
      return *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                      (uVar3 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar3 * '\x02' & 0x1fU) &
             (pas_small_other_fast_megapage_kind|pas_small_exclusive_segregated_fast_megapage_kind);
    }
  }
  return pVar1;
}

// bmalloc_heap_config_page_header @ 140d635c0

pas_page_base * __cdecl bmalloc_heap_config_page_header(ulong64 param_1)

{
  ulong64 uVar1;
  pas_page_base *ppVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (bmalloc_medium_page_header_table.hashtable.table !=
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
    uVar3 = (uint)(param_1 >> 0x15) & 0xfffffff ^ (uint)(param_1 >> 0x11);
    uVar3 = uVar3 * 0x20 + (uVar3 ^ 0xdeadbeef);
    uVar3 = uVar3 >> 0xb ^ uVar3;
    uVar4 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar3);
    uVar1 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar4].low;
    while (uVar1 != (param_1 & 0xfffffffffffe0000)) {
      uVar3 = uVar3 + 1;
      if (uVar1 == 0xffffffffffffffff) goto LAB_140d6365e;
      uVar4 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar3);
      uVar1 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar4].low;
    }
    ppVar2 = (pas_page_base *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar4].high;
    if (ppVar2 != (pas_page_base *)0x0) {
      return ppVar2;
    }
  }
LAB_140d6365e:
  if (bmalloc_marge_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
    return (pas_page_base *)0x0;
  }
  uVar3 = (uint)(param_1 >> 0x1a) & 0xfffffff ^ (uint)(param_1 >> 0x16);
  uVar3 = uVar3 * 0x20 + (uVar3 ^ 0xdeadbeef);
  uVar3 = uVar3 >> 0xb ^ uVar3;
  uVar4 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar3);
  uVar1 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar4].low;
  while( true ) {
    if (uVar1 == (param_1 & 0xffffffffffc00000)) {
      return (pas_page_base *)(bmalloc_marge_page_header_table.hashtable.table)->array[uVar4].high;
    }
    uVar3 = uVar3 + 1;
    if (uVar1 == 0xffffffffffffffff) break;
    uVar4 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar3);
    uVar1 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar4].low;
  }
  return (pas_page_base *)0x0;
}

// bmalloc_prepare_to_enumerate @ 140d63700

void * __cdecl bmalloc_prepare_to_enumerate(pas_enumerator *param_1)

{
  void *pvVar1;
  
  pvVar1 = pas_heap_config_utils_prepare_to_enumerate(param_1,&bmalloc_heap_config);
  return pvVar1;
}

// bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow @ 140d63720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1,
          pas_allocator_counts *param_2,
          _func___cdecl_pas_allocation_result_pas_allocation_result *param_3)

{
  ulong64 *puVar1;
  pas_lock *SRWLock;
  ulong64 *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  pas_segregated_heap *ppVar9;
  ulonglong uVar10;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar11;
  pas_heap *ppVar12;
  pas_heap_runtime_config *ppVar13;
  PSRWLOCK pRVar14;
  uint *puVar15;
  code *pcVar16;
  uint uVar17;
  uint3 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  byte bVar26;
  BOOLEAN BVar27;
  pas_segregated_view_opaque *ppVar28;
  pas_segregated_shared_page_directory *ppVar29;
  pas_segregated_shared_handle *ppVar30;
  void *pvVar31;
  ulong64 uVar32;
  pas_allocation_result *ppVar33;
  byte bVar34;
  uint uVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  pas_segregated_page *ppVar39;
  ulonglong uVar40;
  pas_heap *ppVar41;
  pas_segregated_shared_view *ppVar42;
  pas_segregated_partial_view *ppVar43;
  pas_segregated_size_directory *ppVar44;
  pas_thread_local_cache *ppVar45;
  pas_local_allocator_scavenger_data *ppVar46;
  pas_segregated_directory *ppVar47;
  pas_thread_local_cache_node *ppVar48;
  uint uVar49;
  uint uVar50;
  ulong64 uVar51;
  ulonglong uVar52;
  pas_segregated_page *ppVar53;
  pas_segregated_view_opaque *ppVar54;
  ulonglong uVar55;
  longlong *plVar56;
  pas_segregated_partial_view *ppVar57;
  bool bVar58;
  undefined1 auStackY_108 [32];
  PSRWLOCK local_78;
  pas_allocation_result local_70;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (((param_1->scavenger_data).encoded_kind_and_location & 0x7f) == 2) {
    cVar5 = (param_1->scavenger_data).is_in_use;
  }
  else {
    pas_local_allocator_scavenger_data_commit_if_necessary_slow
              (&param_1->scavenger_data,
               pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
               ,pas_local_allocator_allocator_kind);
    cVar5 = (param_1->scavenger_data).is_in_use;
  }
  if (cVar5 != '\x01') {
                    /* WARNING: Does not return */
    pcVar16 = (code *)invalidInstructionException();
    (*pcVar16)();
  }
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = param_1->bits;
  do {
    ppVar54 = param_1->view;
    if (((uint)ppVar54 & 7) == 5) {
      ppVar44 = (pas_segregated_size_directory *)((ulonglong)ppVar54 & 0xfffffffffffffff8);
      ppVar9 = ppVar44->heap;
      bVar26 = ppVar9->runtime_config->field_0x4;
    }
    else {
      ppVar44 = pas_segregated_view_get_size_directory_slow(ppVar54);
      ppVar9 = ppVar44->heap;
      bVar26 = ppVar9->runtime_config->field_0x4;
    }
    if (((bVar26 & 1) == 0) && (uVar38 = (ulonglong)ppVar9->small_index_upper_bound, uVar38 != 0)) {
      puVar15 = ppVar9->index_to_small_allocator_index;
      if (puVar15 != (uint *)0x0) {
        uVar55 = (ulonglong)puVar15 & 0xfffffffffe000000;
        uVar40 = (ulonglong)((uint)puVar15 & 0x1ffffff);
        uVar52 = uVar40 - 0x4008 >> 0xe;
        uVar40 = (uVar40 + uVar38 * 4) - 0x4001 >> 0xe;
        do {
          uVar10 = *(ulonglong *)(uVar55 + 0x18 + uVar52 * 8);
          uVar49 = (uint)uVar10 & 7;
          if (uVar49 == 2) break;
          if (uVar49 == 1) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)invalidInstructionException();
            (*pcVar16)();
          }
          if ((uVar10 & 7) == 0) break;
          puVar3 = (ulonglong *)(uVar55 + 0x18 + uVar52 * 8);
          LOCK();
          bVar58 = uVar10 == *puVar3;
          if (bVar58) {
            *puVar3 = uVar10 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar58);
        if (uVar52 != uVar40) {
          do {
            uVar52 = *(ulonglong *)(uVar55 + 0x18 + uVar40 * 8);
            if (((uint)uVar52 & 7) < 3) break;
            puVar3 = (ulonglong *)(uVar55 + 0x18 + uVar40 * 8);
            LOCK();
            bVar58 = uVar52 == *puVar3;
            if (bVar58) {
              *puVar3 = uVar52 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar58);
        }
      }
      ppVar11 = ppVar9->index_to_small_size_directory;
      if (ppVar11 != (pas_compact_atomic_segregated_size_directory_ptr *)0x0) {
        uVar55 = (ulonglong)ppVar11 & 0xfffffffffe000000;
        uVar40 = (ulonglong)((uint)ppVar11 & 0x1ffffff);
        uVar52 = uVar40 - 0x4008 >> 0xe;
        uVar38 = (uVar40 + uVar38 * 4) - 0x4001 >> 0xe;
        do {
          uVar40 = *(ulonglong *)(uVar55 + 0x18 + uVar52 * 8);
          uVar49 = (uint)uVar40 & 7;
          if (uVar49 == 2) break;
          if (uVar49 == 1) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)invalidInstructionException();
            (*pcVar16)();
          }
          if ((uVar40 & 7) == 0) break;
          puVar3 = (ulonglong *)(uVar55 + 0x18 + uVar52 * 8);
          LOCK();
          bVar58 = uVar40 == *puVar3;
          if (bVar58) {
            *puVar3 = uVar40 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar58);
        if (uVar52 != uVar38) {
          do {
            uVar40 = *(ulonglong *)(uVar55 + 0x18 + uVar38 * 8);
            if (((uint)uVar40 & 7) < 3) break;
            puVar3 = (ulonglong *)(uVar55 + 0x18 + uVar38 * 8);
            LOCK();
            bVar58 = uVar40 == *puVar3;
            if (bVar58) {
              *puVar3 = uVar40 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar58);
        }
      }
    }
    uVar38 = (ulonglong)(ppVar9->rare_data).payload;
    lVar36 = uVar38 * 8 + pas_compact_heap_reservation_base;
    if (lVar36 != 0 && uVar38 != 0) {
      lVar37 = (ulonglong)*(uint *)(lVar36 + 8) * 8 + pas_compact_heap_reservation_base;
      if ((ulonglong)*(uint *)(lVar36 + 8) == 0) {
        lVar37 = 0;
      }
      if ((ulonglong)*(uint *)(lVar36 + 0xc) != 0) {
        if (lVar37 == 0) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)invalidInstructionException();
          (*pcVar16)();
        }
        uVar40 = (lVar37 - (longlong)pas_compact_expendable_memory_payload) - 8U >> 0xe;
        uVar38 = ((lVar37 - (longlong)pas_compact_expendable_memory_payload) +
                 (ulonglong)*(uint *)(lVar36 + 0xc) * 0x10) - 1 >> 0xe;
        do {
          uVar55 = *(ulonglong *)
                    ((longlong)&pas_compact_expendable_memory_header + uVar40 * 8 + 0x10);
          uVar49 = (uint)uVar55 & 7;
          if (uVar49 == 2) break;
          if (uVar49 == 1) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)invalidInstructionException();
            (*pcVar16)();
          }
          if ((uVar55 & 7) == 0) break;
          puVar3 = (ulonglong *)
                   ((longlong)&pas_compact_expendable_memory_header + uVar40 * 8 + 0x10);
          LOCK();
          bVar58 = uVar55 == *puVar3;
          if (bVar58) {
            *puVar3 = uVar55 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar58);
        if (uVar40 != uVar38) {
          do {
            uVar40 = *(ulonglong *)
                      ((longlong)&pas_compact_expendable_memory_header + uVar38 * 8 + 0x10);
            if (((uint)uVar40 & 7) < 3) break;
            puVar3 = (ulonglong *)
                     ((longlong)&pas_compact_expendable_memory_header + uVar38 * 8 + 0x10);
            LOCK();
            bVar58 = uVar40 == *puVar3;
            if (bVar58) {
              *puVar3 = uVar40 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar58);
        }
      }
    }
    (param_1->scavenger_data).should_stop_count = '\0';
    (param_1->scavenger_data).dirty = true;
    bVar58 = pas_scavenger_did_create_eligible();
    if (bVar58) {
      pas_scavenger_notify_eligibility_if_needed();
    }
    if (param_1->page_ish == 0) {
      ppVar53 = (pas_segregated_page *)0x0;
      ppVar54 = (pas_segregated_view_opaque *)0x0;
    }
    else {
      ppVar53 = (pas_segregated_page *)(param_1->page_ish & 0xffffffffffffc000);
      ppVar54 = ppVar53->owner;
      if (((ulonglong)ppVar54 & 6) != 0) {
        if (((uint)ppVar54 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)invalidInstructionException();
          (*pcVar16)();
        }
        ppVar54 = param_1->view;
        if (((uint)ppVar54 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)invalidInstructionException();
          (*pcVar16)();
        }
      }
    }
    param_1->page_ish = 0;
    param_1->current_word_is_valid = false;
    param_1->payload_end = 0;
    param_1->remaining = 0;
    ppVar28 = (pas_segregated_view_opaque *)((ulonglong)ppVar44 | 5);
    if (ppVar44 == (pas_segregated_size_directory *)0x0) {
      ppVar28 = (pas_segregated_view_opaque *)0x0;
    }
    param_1->current_offset = 0;
    param_1->end_offset = 0;
    param_1->current_word = 0;
    param_1->view = ppVar28;
    param_1->config_kind = 6;
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar45 = *(pas_thread_local_cache **)(lVar8 + 0x9c08);
    uVar49 = (uint)ppVar54;
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar45) {
      ppVar48 = ppVar45->node;
      pas_thread_local_cache_stop_local_allocators_if_necessary(ppVar45,param_1);
      if (ppVar54 != (pas_segregated_view_opaque *)0x0) goto LAB_140d63ac8;
LAB_140d63b20:
      local_78 = (PSRWLOCK)0x0;
      if (ppVar45 == (pas_thread_local_cache *)0x0) {
LAB_140d63c99:
        ppVar28 = pas_segregated_size_directory_take_first_eligible(ppVar44);
        uVar32 = pas_compact_heap_reservation_base;
        if (ppVar28 == (pas_segregated_view_opaque *)0x0) {
LAB_140d63f69:
          ppVar28 = (pas_segregated_view_opaque *)0x0;
        }
        else {
          uVar50 = (uint)ppVar28 & 7;
          if (uVar50 < 2) {
            plVar56 = (longlong *)((ulonglong)ppVar28 & 0xfffffffffffffff8);
            if (*(char *)((longlong)plVar56 + 0xb) == '\0') {
              uVar38 = (ulonglong)*(uint3 *)(plVar56 + 1);
              if (*plVar56 == 0) {
                cVar5 = *(char *)(pas_compact_heap_reservation_base + 0xd + uVar38 * 8);
                if (cVar5 != '\x01') {
                  if (cVar5 != '\x02') {
                    if (cVar5 == '\0') {
                    /* WARNING: Does not return */
                      pcVar16 = (code *)invalidInstructionException();
                      (*pcVar16)();
                    }
                    /* WARNING: Does not return */
                    pcVar16 = (code *)invalidInstructionException();
                    (*pcVar16)();
                  }
                  pas_physical_page_sharing_pool_take_for_page_config
                            (0x4000,&bmalloc_heap_config.small_segregated_config.base,
                             pas_lock_is_not_held,(pas_lock **)0x0,0);
                  ppVar39 = (pas_segregated_page *)*plVar56;
                  if (ppVar39 != (pas_segregated_page *)0x0) goto LAB_140d63f2d;
                }
                pas_physical_memory_transaction_construct
                          ((pas_physical_memory_transaction *)&local_70);
                do {
                  if (*plVar56 != 0) {
                    /* WARNING: Does not return */
                    pcVar16 = (code *)invalidInstructionException();
                    (*pcVar16)();
                  }
                  pas_physical_memory_transaction_begin
                            ((pas_physical_memory_transaction *)&local_70);
                  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
                  ppVar12 = *(pas_heap **)(uVar32 + 0x18 + uVar38 * 8);
                  ppVar13 = (ppVar12->segregated_heap).runtime_config;
                  ppVar41 = (pas_heap *)0x0;
                  if (ppVar13->is_part_of_heap) {
                    ppVar41 = ppVar12;
                  }
                  pvVar31 = pas_fast_megapage_cache_try_allocate
                                      ((pas_megapage_cache *)(*(longlong *)(ppVar13 + 1) + 0x30),
                                       &bmalloc_megapage_table,
                                       &bmalloc_heap_config.small_segregated_config.base,
                                       pas_small_exclusive_segregated_fast_megapage_kind,false,
                                       ppVar41,(pas_physical_memory_transaction *)&local_70);
                  *plVar56 = (longlong)pvVar31;
                  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
                  bVar58 = pas_physical_memory_transaction_end
                                     ((pas_physical_memory_transaction *)&local_70);
                } while (!bVar58);
                ppVar39 = (pas_segregated_page *)*plVar56;
                if (ppVar39 == (pas_segregated_page *)0x0) goto LAB_140d63f69;
              }
              else {
                pRVar14 = (PSRWLOCK)(plVar56 + 2);
                AcquireSRWLockExclusive(pRVar14);
                cVar5 = *(char *)(uVar32 + 0xd + uVar38 * 8);
                local_70.begin = (ulong64)pRVar14;
                if (cVar5 != '\x01') {
                  if (cVar5 != '\x02') {
                    if (cVar5 == '\0') {
                    /* WARNING: Does not return */
                      pcVar16 = (code *)invalidInstructionException();
                      (*pcVar16)();
                    }
                    /* WARNING: Does not return */
                    pcVar16 = (code *)invalidInstructionException();
                    (*pcVar16)();
                  }
                  pas_physical_page_sharing_pool_take_for_page_config
                            (0x4000,&bmalloc_heap_config.small_segregated_config.base,
                             pas_lock_is_not_held,(pas_lock **)&local_70,1);
                }
                pas_page_base_commit_with_boundary
                          ((void *)*plVar56,&bmalloc_heap_config.small_segregated_config.base);
                ReleaseSRWLockExclusive(pRVar14);
                ppVar39 = (pas_segregated_page *)*plVar56;
              }
LAB_140d63f2d:
              pas_segregated_page_construct
                        (ppVar39,(pas_segregated_view_opaque *)((longlong)plVar56 + 1),false,
                         &bmalloc_heap_config.small_segregated_config);
              AcquireSRWLockExclusive((PSRWLOCK)(plVar56 + 3));
              *(undefined1 *)((longlong)plVar56 + 0xb) = 1;
              ReleaseSRWLockExclusive((PSRWLOCK)(plVar56 + 3));
            }
          }
          else {
            if (uVar50 != 4) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)invalidInstructionException();
              (*pcVar16)();
            }
            if (((uint)ppVar28 & 7) != 4) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)invalidInstructionException();
              (*pcVar16)();
            }
            ppVar43 = (pas_segregated_partial_view *)((ulonglong)ppVar28 & 0xfffffffffffffff8);
            uVar38 = (ulonglong)
                     ((uint)(ppVar43->directory).payload[2] * 0x80000 +
                     (uint)*(ushort *)(ppVar43->directory).payload * 8);
            ppVar9 = *(pas_segregated_heap **)(uVar38 + 0x18 + pas_compact_heap_reservation_base);
            ppVar29 = pas_shared_page_directory_by_size_get
                                ((pas_shared_page_directory_by_size *)
                                 (*(longlong *)(ppVar9->runtime_config + 1) + 0x90),
                                 *(uint *)(uVar38 + 0x20 + pas_compact_heap_reservation_base) &
                                 0x7ffffff,&bmalloc_heap_config.small_segregated_config);
            uVar18 = *(uint3 *)(ppVar43->shared_view).payload;
            ppVar42 = (pas_segregated_shared_view *)
                      ((ulonglong)uVar18 * 8 + pas_compact_heap_reservation_base);
            if (ppVar42 != (pas_segregated_shared_view *)0x0 && uVar18 != 0) {
              SRWLock = &ppVar42->commit_lock;
              AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
              if (((ulonglong)ppVar42->shared_handle_or_page_boundary & 1) == 0) {
                ppVar30 = pas_segregated_shared_view_commit_page
                                    (ppVar42,ppVar9,ppVar29,ppVar43,
                                     &bmalloc_heap_config.small_segregated_config);
              }
              else {
                ppVar30 = (pas_segregated_shared_handle *)
                          ((ulonglong)ppVar42->shared_handle_or_page_boundary & 0xfffffffffffffffe);
              }
              if (ppVar30 == (pas_segregated_shared_handle *)0x0) {
                ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
                ppVar28 = (pas_segregated_view_opaque *)0x0;
              }
              else {
                if (!ppVar43->is_attached_to_shared_handle) {
                  if ((ulonglong)ppVar43->alloc_bits_size != 0) {
                    puVar15 = ppVar43->alloc_bits;
                    uVar38 = (ulonglong)ppVar43->alloc_bits_offset;
                    uVar40 = ppVar43->alloc_bits_size + uVar38;
                    do {
                      uVar50 = puVar15[uVar38];
                      if (uVar50 != 0) {
                        do {
                          uVar35 = 0;
                          for (uVar17 = uVar50; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000
                              ) {
                            uVar35 = uVar35 + 1;
                          }
                          uVar52 = (uVar38 << 5 | (ulonglong)uVar35) >> 4;
                          uVar55 = (ulonglong)ppVar30->partial_views[uVar52].payload;
                          ppVar57 = (pas_segregated_partial_view *)
                                    (pas_compact_heap_reservation_base + uVar55 * 8);
                          if (uVar55 == 0) {
                            ppVar57 = (pas_segregated_partial_view *)0x0;
                          }
                          if ((ppVar57 != (pas_segregated_partial_view *)0x0) &&
                             (ppVar57 != ppVar43)) {
                    /* WARNING: Does not return */
                            pcVar16 = (code *)invalidInstructionException();
                            (*pcVar16)();
                          }
                          uVar55 = (longlong)ppVar43 - pas_compact_heap_reservation_base;
                          if (pas_compact_heap_reservation_size <= uVar55) {
                    /* WARNING: Does not return */
                            pcVar16 = (code *)invalidInstructionException();
                            (*pcVar16)();
                          }
                          if ((uVar55 & 7) != 0) {
                    /* WARNING: Does not return */
                            pcVar16 = (code *)invalidInstructionException();
                            (*pcVar16)();
                          }
                          if (uVar55 < 8) {
                    /* WARNING: Does not return */
                            pcVar16 = (code *)invalidInstructionException();
                            (*pcVar16)();
                          }
                          ppVar30->partial_views[uVar52].payload = (uint)(uVar55 >> 3);
                          bVar26 = (byte)uVar35 & 0x1f;
                          uVar50 = uVar50 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
                        } while (uVar50 != 0);
                      }
                      uVar38 = uVar38 + 1;
                    } while (uVar38 < uVar40);
                  }
                  AcquireSRWLockExclusive((PSRWLOCK)&ppVar42->ownership_lock);
                  ppVar43->is_attached_to_shared_handle = true;
                  ReleaseSRWLockExclusive((PSRWLOCK)&ppVar42->ownership_lock);
                }
                ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
              }
            }
          }
        }
      }
      else {
        uVar50 = ppVar44->view_cache_index;
        if (uVar50 < ppVar45->allocator_index_upper_bound) {
          ppVar46 = (pas_local_allocator_scavenger_data *)(ppVar45->local_allocators + uVar50);
        }
        else {
          if ((uVar50 == 0xffffffff) ||
             (pas_thread_local_cache_get_local_allocator_slow
                        ((pas_local_allocator_result *)&local_70,ppVar45,uVar50,pas_lock_is_not_held
                        ), (local_70.begin & 1) == 0)) goto LAB_140d63c99;
          ppVar46 = (pas_local_allocator_scavenger_data *)
                    CONCAT44(local_70.zero_mode,local_70._8_4_);
        }
        ppVar46->is_in_use = true;
        if ((ppVar46->encoded_kind_and_location & 0x7f) != 4) {
LAB_140d63c80:
          pas_local_allocator_scavenger_data_commit_if_necessary_slow
                    (ppVar46,
                     pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
                     ,pas_local_allocator_view_cache_kind);
LAB_140d63c90:
          ppVar46->should_stop_count = '\0';
          ppVar46->dirty = true;
          ppVar46->is_in_use = false;
          goto LAB_140d63c99;
        }
        bVar26 = ppVar46[1].should_stop_count;
        if (ppVar46[1].dirty == (bool)bVar26) {
          if (ppVar46[1].encoded_kind_and_location == '\0') goto LAB_140d63c80;
          if (ppVar46[1].encoded_kind_and_location == '\x02') goto LAB_140d63b7e;
          goto LAB_140d63c90;
        }
LAB_140d63b7e:
        ppVar46->should_stop_count = '\0';
        ppVar46->dirty = true;
        bVar34 = bVar26 + 1;
        if (ppVar46[1].is_in_use <= bVar34) {
          bVar34 = 0;
        }
        ppVar46[1].should_stop_count = bVar34;
        ppVar28 = (pas_segregated_view_opaque *)
                  (((uint)(&ppVar46[2].dirty)[(ulonglong)bVar26 * 3] * 0x80000 +
                   (uint)*(ushort *)(&ppVar46[2].is_in_use + (ulonglong)bVar26 * 3) * 8) +
                  pas_compact_heap_reservation_base);
        ppVar46[1].encoded_kind_and_location = '\x01';
        ppVar46->is_in_use = false;
      }
      if (ppVar54 != (pas_segregated_view_opaque *)0x0) {
        uVar32 = pas_compact_heap_reservation_base;
        if (local_78 != (PSRWLOCK)ppVar53->lock_ptr) {
          local_78 = (PSRWLOCK)
                     pas_segregated_page_switch_lock_slow
                               (ppVar53,(pas_lock *)local_78,ppVar53->lock_ptr);
          uVar32 = pas_compact_heap_reservation_base;
        }
        pas_compact_heap_reservation_base = uVar32;
        if ((uVar49 & 7) < 2) {
          bVar58 = ppVar53->eligibility_notification_has_been_deferred;
          if (bVar58 == true) {
            ppVar53->eligibility_notification_has_been_deferred = false;
          }
          uVar38 = (ulonglong)ppVar54 & 0xfffffffffffffff8;
          ppVar47 = (pas_segregated_directory *)
                    (((uint)*(byte *)(uVar38 + 10) * 0x80000 + (uint)*(ushort *)(uVar38 + 8) * 8) +
                    pas_compact_heap_reservation_base);
          uVar49 = *(uint *)(uVar38 + 0xc);
          uVar32 = (ppVar53->emptiness).num_non_empty_words_or_live_bytes;
          ppVar53->is_in_use_for_allocation = false;
          if (bVar58 != false) {
            pas_segregated_directory_view_did_become_eligible_at_index(ppVar47,(ulonglong)uVar49);
          }
          if (uVar32 == 0) {
            pas_segregated_directory_view_did_become_empty_at_index(ppVar47,(ulonglong)uVar49);
          }
        }
        else {
          if ((uVar49 & 7) != 4) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)invalidInstructionException();
            (*pcVar16)();
          }
          uVar55 = (ulonglong)ppVar54 & 0xfffffffffffffff8;
          uVar40 = (ulonglong)
                   ((uint)*(byte *)(uVar55 + 10) * 0x80000 + (uint)*(ushort *)(uVar55 + 8) * 8);
          uVar38 = *(ulonglong *)(uVar40 + uVar32);
          if ((uVar38 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)invalidInstructionException();
            (*pcVar16)();
          }
          if ((*(byte *)(uVar55 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)invalidInstructionException();
            (*pcVar16)();
          }
          bVar26 = *(byte *)(uVar55 + 0xd);
          uVar6 = *(ushort *)(uVar55 + 0xb);
          ppVar47 = *(pas_segregated_directory **)((uVar38 & 0xfffffffffffffffe) + 8);
          if (((PSRWLOCK)ppVar53->lock_ptr != (PSRWLOCK)0x0) &&
             (BVar27 = TryAcquireSRWLockExclusive((PSRWLOCK)ppVar53->lock_ptr), BVar27 != '\0')) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)invalidInstructionException();
            (*pcVar16)();
          }
          uVar40 = uVar40 + uVar32;
          if (*(int *)(uVar40 + 0x24) == 1) {
            bVar58 = (ppVar53->emptiness).num_non_empty_words_or_live_bytes == 0;
          }
          else {
            bVar58 = false;
          }
          bVar34 = *(byte *)(uVar55 + 0x11);
          *(byte *)(uVar55 + 0x11) = bVar34 & 0xfc;
          iVar7 = *(int *)(uVar40 + 0x24);
          if ((bVar34 & 2) == 0) {
            if (iVar7 == 0) {
LAB_140d647f2:
                    /* WARNING: Does not return */
              pcVar16 = (code *)invalidInstructionException();
              (*pcVar16)();
            }
            *(int *)(uVar40 + 0x24) = iVar7 + -1;
          }
          else {
            if (iVar7 == 0) goto LAB_140d647f2;
            *(int *)(uVar40 + 0x24) = iVar7 + -1;
            if ((*(byte *)(uVar55 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)invalidInstructionException();
              (*pcVar16)();
            }
            pas_segregated_directory_view_did_become_eligible
                      ((pas_segregated_directory *)
                       (((uint)bVar26 * 0x80000 + (uint)uVar6 * 8) + uVar32),
                       (pas_segregated_view_opaque *)(uVar55 | 4));
          }
          if (bVar58) {
            if (*(int *)(uVar40 + 0x24) != 0) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)invalidInstructionException();
              (*pcVar16)();
            }
            pas_segregated_directory_view_did_become_empty
                      (ppVar47,(pas_segregated_view_opaque *)(uVar40 | 2));
          }
        }
      }
      if (ppVar28 == (pas_segregated_view_opaque *)0x0) {
        if (local_78 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(local_78);
          local_78 = (PSRWLOCK)0x0;
        }
        local_70.begin = 0;
        bVar58 = false;
        goto LAB_140d64813;
      }
      if (((ulonglong)ppVar28 & 6) == 0) {
        ppVar53 = *(pas_segregated_page **)((ulonglong)ppVar28 & 0xfffffffffffffff8);
        pas_segregated_page_switch_lock_and_rebias_while_ineligible_impl
                  (ppVar53,(pas_lock **)&local_78,ppVar48);
        ppVar53->is_in_use_for_allocation = true;
        ppVar53->owner = (pas_segregated_view_opaque *)((ulonglong)ppVar28 | 1);
LAB_140d64371:
        uVar32 = pas_compact_heap_reservation_base;
        if ((ppVar53->emptiness).num_non_empty_words_or_live_bytes == 0) {
          uVar38 = (ulonglong)(ppVar44->data).payload;
          uVar49 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar38 * 8);
          iVar7 = *(int *)(pas_compact_heap_reservation_base + uVar38 * 8);
          (ppVar53->emptiness).num_non_empty_words_or_live_bytes =
               (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 8 + uVar38 * 8);
          param_1->payload_end = (longlong)ppVar53->alloc_bits + ((ulonglong)uVar49 - 0x2c);
          param_1->remaining = uVar49 - iVar7;
          param_1->current_offset = 0;
          param_1->end_offset = 0;
          param_1->current_word = 0;
          param_1->page_ish = (ulong64)ppVar53;
          uVar51 = pas_compact_heap_reservation_base;
          uVar38 = (ulonglong)*(uint *)(uVar32 + 0xc + uVar38 * 8);
          if (uVar38 < 8) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)invalidInstructionException();
            (*pcVar16)();
          }
          puVar4 = (undefined8 *)(pas_compact_heap_reservation_base + 0x70 + uVar38);
          uVar19 = puVar4[1];
          *(undefined8 *)((longlong)&ppVar53[3].lock_ptr + 4) = *puVar4;
          *(undefined8 *)((longlong)&ppVar53[3].emptiness.use_epoch + 4) = uVar19;
          puVar4 = (undefined8 *)(uVar51 + 0x60 + uVar38);
          uVar19 = puVar4[1];
          *(undefined8 *)ppVar53[2].alloc_bits = *puVar4;
          *(undefined8 *)&ppVar53[3].object_size = uVar19;
          puVar4 = (undefined8 *)(uVar51 + 0x50 + uVar38);
          uVar19 = puVar4[1];
          *(undefined8 *)((longlong)&ppVar53[2].emptiness.num_non_empty_words_or_live_bytes + 4) =
               *puVar4;
          *(undefined8 *)((longlong)&ppVar53[2].owner + 4) = uVar19;
          puVar4 = (undefined8 *)(uVar51 + 0x40 + uVar38);
          uVar19 = puVar4[1];
          *(undefined8 *)((longlong)&ppVar53[2].lock_ptr + 4) = *puVar4;
          *(undefined8 *)((longlong)&ppVar53[2].emptiness.use_epoch + 4) = uVar19;
          uVar19 = *(undefined8 *)(uVar51 + uVar38);
          uVar20 = ((undefined8 *)(uVar51 + uVar38))[1];
          puVar4 = (undefined8 *)(uVar51 + 0x10 + uVar38);
          uVar21 = *puVar4;
          uVar22 = puVar4[1];
          puVar4 = (undefined8 *)(uVar51 + 0x20 + uVar38);
          uVar23 = *puVar4;
          uVar24 = puVar4[1];
          puVar4 = (undefined8 *)(uVar51 + 0x30 + uVar38);
          uVar25 = puVar4[1];
          *(undefined8 *)ppVar53[1].alloc_bits = *puVar4;
          *(undefined8 *)&ppVar53[2].object_size = uVar25;
          *(undefined8 *)((longlong)&ppVar53[1].emptiness.num_non_empty_words_or_live_bytes + 4) =
               uVar23;
          *(undefined8 *)((longlong)&ppVar53[1].owner + 4) = uVar24;
          *(undefined8 *)((longlong)&ppVar53[1].lock_ptr + 4) = uVar21;
          *(undefined8 *)((longlong)&ppVar53[1].emptiness.use_epoch + 4) = uVar22;
          *(undefined8 *)ppVar53->alloc_bits = uVar19;
          *(undefined8 *)&ppVar53[1].object_size = uVar20;
        }
        else {
          param_1->payload_end = 0;
          param_1->remaining = 0;
          uVar40 = (ulonglong)(ppVar44->data).payload;
          uVar38 = (ulonglong)*(uint *)(pas_compact_heap_reservation_base + 0xc + uVar40 * 8);
          if (uVar38 < 8) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)invalidInstructionException();
            (*pcVar16)();
          }
          uVar49 = *(uint *)(pas_compact_heap_reservation_base + uVar40 * 8);
          uVar35 = uVar49 >> 10;
          uVar50 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar40 * 8);
          lVar36 = uVar38 + pas_compact_heap_reservation_base;
          param_1->current_offset = uVar35;
          param_1->end_offset = ((uVar50 >> 4) - 1 >> 6) + 1;
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
          param_1->page_ish =
               (longlong)ppVar53->alloc_bits + ((ulonglong)(uVar49 & 0xfffffc00) - 0x2c);
          lVar37 = 0;
          do {
            uVar49 = *(uint *)(lVar36 + lVar37 * 4);
            uVar50 = ppVar53->alloc_bits[lVar37];
            *(uint *)((longlong)puVar1 + lVar37 * 4) = ~uVar50 & uVar49;
            ppVar53->alloc_bits[lVar37] = uVar50 | uVar49;
            lVar37 = lVar37 + 1;
          } while (lVar37 != 0x20);
          param_1->current_word = param_1->bits[uVar35];
          param_1->current_word_is_valid = true;
          (ppVar53->emptiness).num_non_empty_words_or_live_bytes =
               (ulonglong)
               *(uint *)(pas_compact_heap_reservation_base + 8 +
                        (ulonglong)(ppVar44->data).payload * 8);
        }
        goto LAB_140d6463d;
      }
      if (((uint)ppVar28 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)invalidInstructionException();
        (*pcVar16)();
      }
      ppVar43 = (pas_segregated_partial_view *)((ulonglong)ppVar28 & 0xfffffffffffffff8);
      uVar18 = *(uint3 *)(ppVar43->shared_view).payload;
      ppVar42 = (pas_segregated_shared_view *)
                ((ulonglong)uVar18 * 8 + pas_compact_heap_reservation_base);
      if (ppVar42 != (pas_segregated_shared_view *)0x0 && uVar18 != 0) {
        ppVar39 = (pas_segregated_page *)ppVar42->shared_handle_or_page_boundary;
        if (((ulonglong)ppVar39 & 1) == 0) {
          pRVar14 = (PSRWLOCK)ppVar39->lock_ptr;
          ppVar53 = ppVar39;
        }
        else {
          pRVar14 = (PSRWLOCK)
                    (*(pas_segregated_page **)((ulonglong)ppVar39 & 0xfffffffffffffffe))->lock_ptr;
          ppVar53 = *(pas_segregated_page **)((ulonglong)ppVar39 & 0xfffffffffffffffe);
        }
        if (local_78 != pRVar14) {
          local_78 = (PSRWLOCK)
                     pas_segregated_page_switch_lock_slow
                               (ppVar53,(pas_lock *)local_78,(pas_lock *)pRVar14);
          ppVar39 = (pas_segregated_page *)ppVar42->shared_handle_or_page_boundary;
        }
        if (((ulonglong)ppVar39 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)invalidInstructionException();
          (*pcVar16)();
        }
        pas_segregated_partial_view_set_is_in_use_for_allocation
                  (ppVar43,ppVar42,
                   (pas_segregated_shared_handle *)((ulonglong)ppVar39 & 0xfffffffffffffffe));
        goto LAB_140d644b4;
      }
      if (local_78 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_78);
        local_78 = (PSRWLOCK)0x0;
      }
      bVar58 = bmalloc_small_segregated_page_config_specialized_local_allocator_start_allocating_in_primordial_partial_view
                         (param_1,ppVar43,ppVar44);
      if (!bVar58) {
        local_70.begin = 0;
        bVar58 = false;
        goto LAB_140d64813;
      }
LAB_140d6464e:
      uVar49 = param_1->remaining;
    }
    else {
      ppVar48 = (pas_thread_local_cache_node *)0x0;
      ppVar45 = (pas_thread_local_cache *)0x0;
      if (ppVar54 == (pas_segregated_view_opaque *)0x0) goto LAB_140d63b20;
LAB_140d63ac8:
      local_78 = (PSRWLOCK)0x0;
      if ((uVar49 & 7) != 4) {
        if (((ulonglong)ppVar54 & 7) != 0) goto LAB_140d63b20;
        pas_segregated_page_switch_lock_and_rebias_while_ineligible_impl
                  (ppVar53,(pas_lock **)&local_78,ppVar48);
        ppVar53->owner = (pas_segregated_view_opaque *)((ulonglong)ppVar54 | 1);
        ppVar53->eligibility_notification_has_been_deferred = false;
        goto LAB_140d64371;
      }
      ppVar43 = (pas_segregated_partial_view *)((ulonglong)ppVar54 & 0xfffffffffffffff8);
      bVar26 = ppVar43->field_0x11;
      if (!ppVar43->eligibility_has_been_noted) goto LAB_140d63b20;
      if (ppVar53->lock_ptr != (pas_lock *)0x0) {
        local_78 = (PSRWLOCK)
                   pas_segregated_page_switch_lock_slow(ppVar53,(pas_lock *)0x0,ppVar53->lock_ptr);
        bVar26 = ppVar43->field_0x11;
      }
      ppVar43->field_0x11 = bVar26 & 0xf9;
LAB_140d644b4:
      param_1->payload_end = 0;
      param_1->remaining = 0;
      bVar26 = ppVar43->alloc_bits_offset;
      uVar40 = (ulonglong)bVar26;
      bVar34 = ppVar43->alloc_bits_size;
      puVar15 = ppVar43->alloc_bits;
      param_1->view = (pas_segregated_view_opaque *)((ulonglong)ppVar43 | 4);
      uVar50 = (uint)bVar34 + (uint)bVar26 + 1;
      uVar38 = (ulonglong)((uint)bVar34 + (uint)bVar26);
      bVar34 = bVar26 >> 1;
      param_1->current_offset = (uint)bVar34;
      param_1->end_offset = uVar50 >> 1 & 0xff;
      uVar49 = 0;
      memset(puVar1 + (uint)bVar34,0,(ulonglong)((uVar50 & 0xfffffffe) - (bVar26 & 0xfffffffe)) << 2
            );
      param_1->page_ish = (ulonglong)bVar34 * 0x400 + (longlong)ppVar53;
      if (uVar40 < uVar38) {
        uVar49 = 0;
        do {
          uVar50 = puVar15[uVar40];
          uVar35 = ppVar53->alloc_bits[uVar40];
          *(uint *)((longlong)puVar1 + uVar40 * 4) = ~uVar35 & uVar50;
          uVar49 = uVar49 + (uVar50 != 0 && uVar35 == 0);
          ppVar53->alloc_bits[uVar40] = uVar35 | uVar50;
          uVar40 = uVar40 + 1;
        } while (uVar38 != uVar40);
      }
      param_1->current_word = puVar1[(uint)bVar34];
      param_1->current_word_is_valid = true;
      puVar2 = &(ppVar53->emptiness).num_non_empty_words_or_live_bytes;
      *puVar2 = *puVar2 + (ulonglong)uVar49;
LAB_140d6463d:
      if (local_78 == (PSRWLOCK)0x0) goto LAB_140d6464e;
      ReleaseSRWLockExclusive(local_78);
      local_78 = (PSRWLOCK)0x0;
      uVar49 = param_1->remaining;
    }
    if ((ulonglong)uVar49 != 0) {
      param_1->remaining = uVar49 - param_1->object_size;
      local_70.begin = param_1->payload_end - (ulonglong)uVar49;
      goto LAB_140d64811;
    }
    uVar32 = param_1->page_ish;
    uVar51 = param_1->current_word;
    if (uVar51 != 0) {
LAB_140d647fe:
      uVar38 = 0;
      for (uVar40 = uVar51; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x8000000000000000) {
        uVar38 = uVar38 + 1;
      }
      param_1->current_word = uVar51 & ~(1L << (uVar38 & 0x3f));
      local_70.begin = (uint)((int)uVar38 << 4) + uVar32;
LAB_140d64811:
      bVar58 = true;
LAB_140d64813:
      (param_1->scavenger_data).is_in_use = false;
      local_70.did_succeed = bVar58;
      local_70.zero_mode = pas_zero_mode_may_have_non_zero;
      (*param_3)(__return_storage_ptr__,&local_70);
      if ((local_60 ^ (ulonglong)auStackY_108) == __security_cookie.value) {
        return __return_storage_ptr__;
      }
      pcVar16 = (code *)swi(3);
      ppVar33 = (pas_allocation_result *)(*pcVar16)();
      return ppVar33;
    }
    if (param_1->config_kind == 6) {
      uVar49 = param_1->end_offset;
      uVar50 = param_1->current_offset;
      uVar38 = (ulonglong)uVar50;
      if (uVar50 < uVar49) {
        puVar1[uVar38] = 0;
        lVar36 = 0;
        while ((uVar49 - 1) - uVar38 != lVar36) {
          uVar32 = uVar32 + 0x400;
          uVar51 = param_1[1].bits[uVar38 + lVar36 + -8];
          lVar36 = lVar36 + 1;
          if (uVar51 != 0) {
            param_1->current_offset = uVar50 + (int)lVar36;
            param_1->page_ish = uVar32;
            goto LAB_140d647fe;
          }
        }
        param_1->current_offset = uVar49;
      }
    }
  } while( true );
}

// bmalloc_heap_config_specialized_local_allocator_try_allocate_medium_segregated_with_free_bits @ 140d648c0

pas_allocation_result * __cdecl
bmalloc_heap_config_specialized_local_allocator_try_allocate_medium_segregated_with_free_bits
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  
  uVar5 = (ulonglong)param_1->current_offset;
  uVar1 = param_1->end_offset;
  if (uVar1 <= param_1->current_offset) {
LAB_140d64924:
    __return_storage_ptr__->did_succeed = false;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
    __return_storage_ptr__->begin = 0;
    return __return_storage_ptr__;
  }
  uVar6 = param_1->bits[uVar5];
  uVar4 = param_1->page_ish;
  if (uVar6 == 0) {
    do {
      uVar2 = uVar5 + 1;
      if (uVar1 <= uVar2) {
        param_1->current_offset = uVar1;
        goto LAB_140d64924;
      }
      uVar4 = uVar4 + 0x8000;
      uVar6 = param_1[1].bits[uVar5 - 8];
      uVar5 = uVar2;
    } while (uVar6 == 0);
    param_1->current_offset = (uint)uVar2;
    param_1->page_ish = uVar4;
    uVar5 = uVar2 & 0xffffffff;
  }
  uVar2 = 0;
  for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
    uVar2 = uVar2 + 1;
  }
  param_1->bits[uVar5] = uVar6 & ~(1L << (uVar2 & 0x3f));
  __return_storage_ptr__->did_succeed = true;
  __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
  __return_storage_ptr__->begin = (uint)((int)uVar2 << 9) + uVar4;
  return __return_storage_ptr__;
}

// bmalloc_heap_config_specialized_local_allocator_try_allocate_inline_cases @ 140d64950

pas_allocation_result * __cdecl
bmalloc_heap_config_specialized_local_allocator_try_allocate_inline_cases
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong lVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  
  uVar1 = param_1->remaining;
  if ((ulonglong)uVar1 == 0) {
    uVar6 = param_1->page_ish;
    uVar8 = param_1->current_word;
    if (uVar8 == 0) {
      if (param_1->config_kind == 6) {
        uVar1 = param_1->end_offset;
        uVar2 = param_1->current_offset;
        uVar7 = (ulonglong)uVar2;
        if (uVar2 < uVar1) {
          param_1->bits[uVar7] = 0;
          lVar5 = 0;
          do {
            if ((uVar1 - 1) - uVar7 == lVar5) {
              param_1->current_offset = uVar1;
              goto LAB_140d649fd;
            }
            uVar6 = uVar6 + 0x400;
            uVar8 = param_1[1].bits[uVar7 + lVar5 + -8];
            lVar5 = lVar5 + 1;
          } while (uVar8 == 0);
          param_1->current_offset = uVar2 + (int)lVar5;
          param_1->page_ish = uVar6;
          goto LAB_140d64981;
        }
      }
LAB_140d649fd:
      bVar4 = false;
      uVar6 = 0;
      goto LAB_140d64997;
    }
LAB_140d64981:
    uVar7 = 0;
    for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      uVar7 = uVar7 + 1;
    }
    param_1->current_word = uVar8 & ~(1L << (uVar7 & 0x3f));
    uVar6 = (uint)((int)uVar7 << 4) + uVar6;
  }
  else {
    param_1->remaining = uVar1 - param_1->object_size;
    uVar6 = param_1->payload_end - (ulonglong)uVar1;
  }
  bVar4 = true;
LAB_140d64997:
  __return_storage_ptr__->did_succeed = bVar4;
  __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
  __return_storage_ptr__->begin = uVar6;
  return __return_storage_ptr__;
}

// bmalloc_heap_config_specialized_local_allocator_try_allocate_slow @ 140d64a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
          (pas_allocation_result *__return_storage_ptr__,pas_local_allocator *param_1,
          ulong64 param_2,ulong64 param_3,pas_allocator_counts *param_4,
          _func___cdecl_pas_allocation_result_pas_allocation_result *param_5)

{
  ulong64 *puVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  ulong64 uVar5;
  pas_allocation_result *ppVar6;
  pas_fast_path_allocation_result_kind pVar7;
  undefined1 auStackY_d8 [32];
  pas_fast_path_allocation_result local_90;
  pas_allocation_result local_80;
  pas_allocation_result local_70;
  pas_allocation_result local_60;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (((param_1->scavenger_data).encoded_kind_and_location & 0x7f) == 2) {
    cVar2 = (param_1->scavenger_data).is_in_use;
  }
  else {
    pas_local_allocator_scavenger_data_commit_if_necessary_slow
              (&param_1->scavenger_data,
               pas_local_allocator_scavenger_data_commit_if_necessary_slow_is_in_use_with_no_locks_held_mode
               ,pas_local_allocator_allocator_kind);
    cVar2 = (param_1->scavenger_data).is_in_use;
  }
  if (cVar2 != '\x01') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  puVar1 = param_1->bits;
  do {
    iVar4 = (int)(char)param_1->config_kind;
    switch(iVar4) {
    case 7:
      bmalloc_small_segregated_page_config_specialized_local_allocator_try_allocate_in_primordial_partial_view
                (&local_70,param_1);
      uVar5 = local_70.begin;
      pVar7 = local_70.did_succeed ^ pas_fast_path_allocation_result_need_slow;
      break;
    case 8:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_medium_segregated_with_free_bits
                (&local_60,param_1);
      uVar5 = local_60.begin;
      pVar7 = local_60.did_succeed ^ pas_fast_path_allocation_result_need_slow;
      break;
    case 9:
      bmalloc_medium_segregated_page_config_specialized_local_allocator_try_allocate_in_primordial_partial_view
                (&local_80,param_1);
      uVar5 = local_80.begin;
      pVar7 = local_80.did_succeed ^ pas_fast_path_allocation_result_need_slow;
      break;
    default:
      goto switchD_140d64aa7_caseD_a;
    case 0xf:
      (param_1->scavenger_data).should_stop_count = '\0';
      (param_1->scavenger_data).dirty = true;
      bmalloc_small_bitfit_page_config_specialized_allocator_try_allocate
                (&local_90,(pas_bitfit_allocator *)puVar1,param_1,param_2,param_3);
      uVar5 = local_90.begin;
      pVar7 = local_90.kind;
      break;
    case 0x10:
      (param_1->scavenger_data).should_stop_count = '\0';
      (param_1->scavenger_data).dirty = true;
      bmalloc_medium_bitfit_page_config_specialized_allocator_try_allocate
                (&local_90,(pas_bitfit_allocator *)puVar1,param_1,param_2,param_3);
      uVar5 = local_90.begin;
      pVar7 = local_90.kind;
      break;
    case 0x11:
      (param_1->scavenger_data).should_stop_count = '\0';
      (param_1->scavenger_data).dirty = true;
      bmalloc_marge_bitfit_page_config_specialized_allocator_try_allocate
                (&local_90,(pas_bitfit_allocator *)puVar1,param_1,param_2,param_3);
      uVar5 = local_90.begin;
      pVar7 = local_90.kind;
    }
    if (pVar7 != pas_fast_path_allocation_result_need_slow) {
      local_60.did_succeed = pVar7 == pas_fast_path_allocation_result_success;
      local_60.zero_mode = pas_zero_mode_may_have_non_zero;
      if (!local_60.did_succeed) {
        uVar5 = 0;
        local_60.zero_mode = pas_zero_mode_may_have_non_zero;
      }
      goto LAB_140d64c2d;
    }
    iVar4 = (int)(char)param_1->config_kind;
switchD_140d64aa7_caseD_a:
    if (0xb < iVar4 - 2U) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    (*(code *)pas_segregated_page_config_kind_for_config_table
              [*(longlong *)(&DAT_1531e9b60 + (ulonglong)(iVar4 - 2U) * 8)][2].heap_config_ptr)();
    if (param_1->page_ish == 0) {
      uVar5 = 0;
      local_60.did_succeed = false;
      local_60.zero_mode = pas_zero_mode_may_have_non_zero;
      goto LAB_140d64c2d;
    }
    bmalloc_heap_config_specialized_local_allocator_try_allocate_inline_cases(&local_60,param_1);
    local_4c = local_60._9_2_;
    local_4a = local_60._11_1_;
  } while ((local_60.did_succeed & 1U) == 0);
  local_4e = local_60._11_1_;
  local_50 = local_60._9_2_;
  uVar5 = local_60.begin;
LAB_140d64c2d:
  (param_1->scavenger_data).is_in_use = false;
  local_60._9_2_ = local_50;
  local_60._11_1_ = local_4e;
  local_60.begin = uVar5;
  (*param_5)(__return_storage_ptr__,&local_60);
  if ((local_48 ^ (ulonglong)auStackY_d8) != __security_cookie.value) {
    pcVar3 = (code *)swi(3);
    ppVar6 = (pas_allocation_result *)(*pcVar3)();
    return ppVar6;
  }
  return __return_storage_ptr__;
}

// bmalloc_heap_config_specialized_try_allocate_common_impl_slow @ 140d64cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_heap_config_specialized_try_allocate_common_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,
          pas_heap_ref_kind param_2,ulong64 param_3,ulong64 param_4,pas_heap_runtime_config *param_5
          ,pas_allocator_counts *param_6,pas_size_lookup_mode param_7)

{
  uint uVar1;
  uint uVar2;
  pas_compact_atomic_segregated_size_directory_ptr *ppVar3;
  pas_segregated_view_opaque *ppVar4;
  code *pcVar5;
  bool bVar6;
  pas_baseline_allocator *SRWLock;
  pas_segregated_size_directory *ppVar7;
  pas_allocation_result *ppVar8;
  pas_heap *ppVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  pas_local_allocator *ppVar13;
  ulong64 uVar14;
  longlong lVar15;
  pas_heap_ref *ppVar16;
  ulonglong uVar17;
  pas_segregated_size_directory *ppVar18;
  undefined1 auStackY_a8 [32];
  undefined1 local_68 [9];
  undefined1 auStack_5f [23];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  __return_storage_ptr__->begin = 0;
  __return_storage_ptr__->did_succeed = false;
  __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
  ppVar9 = param_1->heap;
  uVar11 = (ulonglong)*(uint *)(param_1->type + 4);
  if (*(uint *)(param_1->type + 4) < param_4) {
    uVar11 = param_4;
  }
  if (ppVar9 == (pas_heap *)0x0) {
    ppVar9 = pas_ensure_heap_slow(param_1,param_2,&bmalloc_heap_config,param_5);
  }
  ppVar16 = (pas_heap_ref *)0x0;
  if (param_2 == pas_primitive_heap_ref_kind) {
    ppVar16 = param_1 + 1;
  }
  uVar12 = param_3 + 0xf >> 4;
  if (((((((ppVar9->segregated_heap).small_index_upper_bound <= uVar12) ||
         (ppVar3 = (ppVar9->segregated_heap).index_to_small_size_directory,
         ppVar3 == (pas_compact_atomic_segregated_size_directory_ptr *)0x0)) ||
        (uVar17 = (ulonglong)ppVar3[uVar12].payload,
        ppVar18 = (pas_segregated_size_directory *)(uVar17 * 8 + pas_compact_heap_reservation_base),
        ppVar18 == (pas_segregated_size_directory *)0x0 || uVar17 == 0)) &&
       (ppVar18 = pas_segregated_heap_size_directory_for_index_slow
                            (&ppVar9->segregated_heap,uVar12,(uint *)ppVar16,&bmalloc_heap_config),
       ppVar18 == (pas_segregated_size_directory *)0x0)) ||
      ((ulonglong)(1L << ppVar18->alignment_shift) < uVar11)) &&
     (ppVar18 = pas_heap_ensure_size_directory_for_size_slow
                          (ppVar9,param_3,uVar11,param_7,&bmalloc_heap_config,(uint *)ppVar16),
     ppVar18 == (pas_segregated_size_directory *)0x0)) {
    pas_physical_memory_transaction_construct((pas_physical_memory_transaction *)local_68);
    do {
      if (__return_storage_ptr__->did_succeed == true) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      pas_physical_memory_transaction_begin((pas_physical_memory_transaction *)local_68);
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      pas_large_heap_try_allocate
                (__return_storage_ptr__,&ppVar9->large_heap,param_3,uVar11,&bmalloc_heap_config,
                 (pas_physical_memory_transaction *)local_68);
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      bVar6 = pas_physical_memory_transaction_end((pas_physical_memory_transaction *)local_68);
    } while (!bVar6);
    pas_scavenger_notify_eligibility_if_needed();
    goto LAB_140d65022;
  }
  if (ppVar18->allocator_index == 0) {
LAB_140d64f1e:
    uVar1 = ppVar18->encoded_stuff;
    while (uVar1 = uVar1 & 0x7f, uVar1 < 0x20) {
      SRWLock = pas_baseline_allocator_table + uVar1;
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if ((ppVar18->encoded_stuff & 0x7f) == uVar1) goto LAB_140d64f7d;
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      uVar1 = ppVar18->encoded_stuff;
    }
    SRWLock = pas_segregated_size_directory_select_allocator_slow(ppVar18);
LAB_140d64f7d:
    ppVar4 = (SRWLock->u).allocator.view;
    if (((uint)ppVar4 & 7) == 5) {
      ppVar7 = (pas_segregated_size_directory *)((ulonglong)ppVar4 & 0xfffffffffffffff8);
    }
    else {
      ppVar7 = pas_segregated_view_get_size_directory_slow(ppVar4);
    }
    if (ppVar7 != ppVar18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    ppVar13 = (pas_local_allocator *)&SRWLock->u;
  }
  else {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar12 = *(ulonglong *)(lVar15 + 0x9c08);
    if (uVar12 < 2) {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
        uVar12 = *(ulonglong *)(lVar15 + 0x9c08);
      }
      if (uVar12 == 1) goto LAB_140d64f1e;
    }
    pas_segregated_size_directory_get_allocator_from_tlc
              ((pas_baseline_allocator_result *)local_68,ppVar18,param_3,param_7,
               &bmalloc_heap_config,(uint *)ppVar16);
    ppVar13 = (pas_local_allocator *)
              CONCAT44(auStack_5f._3_4_,
                       CONCAT13(auStack_5f[2],CONCAT21(auStack_5f._0_2_,local_68[8])));
    SRWLock = (pas_baseline_allocator *)auStack_5f._7_8_;
  }
  (ppVar13->scavenger_data).is_in_use = true;
  uVar1 = ppVar13->remaining;
  if ((ulonglong)uVar1 == 0) {
    uVar10 = ppVar13->page_ish;
    uVar14 = ppVar13->current_word;
    if (uVar14 != 0) {
LAB_140d64fdf:
      uVar11 = 0;
      for (uVar12 = uVar14; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
        uVar11 = uVar11 + 1;
      }
      ppVar13->current_word = uVar14 & ~(1L << (uVar11 & 0x3f));
      uVar10 = (uint)((int)uVar11 << 4) + uVar10;
      goto LAB_140d64ff2;
    }
    if (ppVar13->config_kind == 6) {
      uVar1 = ppVar13->end_offset;
      uVar2 = ppVar13->current_offset;
      uVar11 = (ulonglong)uVar2;
      if (uVar2 < uVar1) {
        ppVar13->bits[uVar11] = 0;
        lVar15 = 0;
        do {
          if ((uVar1 - 1) - uVar11 == lVar15) {
            ppVar13->current_offset = uVar1;
            goto LAB_140d6510c;
          }
          uVar10 = uVar10 + 0x400;
          uVar14 = ppVar13[1].bits[uVar11 + lVar15 + -8];
          lVar15 = lVar15 + 1;
        } while (uVar14 == 0);
        ppVar13->current_offset = uVar2 + (int)lVar15;
        ppVar13->page_ish = uVar10;
        goto LAB_140d64fdf;
      }
LAB_140d6510c:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_68,ppVar13,(pas_allocator_counts *)(ulonglong)uVar1,
                 pas_allocation_result_identity);
    }
    else {
      bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_68,ppVar13,param_3,uVar11,param_6,
                 pas_allocation_result_identity);
    }
    uVar10 = CONCAT53(local_68._3_5_,CONCAT12(local_68[2],local_68._0_2_));
    local_68[2] = auStack_5f[2];
    local_68._0_2_ = auStack_5f._0_2_;
  }
  else {
    ppVar13->remaining = uVar1 - ppVar13->object_size;
    uVar10 = ppVar13->payload_end - (ulonglong)uVar1;
LAB_140d64ff2:
    (ppVar13->scavenger_data).is_in_use = false;
    auStack_5f._3_4_ = pas_zero_mode_may_have_non_zero;
    local_68[8] = true;
  }
  __return_storage_ptr__->begin = uVar10;
  __return_storage_ptr__->did_succeed = (bool)local_68[8];
  __return_storage_ptr__->field_0xb = local_68[2];
  *(undefined2 *)&__return_storage_ptr__->field_0x9 = local_68._0_2_;
  __return_storage_ptr__->zero_mode = auStack_5f._3_4_;
  if (SRWLock != (pas_baseline_allocator *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
LAB_140d65022:
  if ((local_48 ^ (ulonglong)auStackY_a8) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar5 = (code *)swi(3);
  ppVar8 = (pas_allocation_result *)(*pcVar5)();
  return ppVar8;
}

// bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated @ 140d65160

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
          (pas_thread_local_cache *param_1,ulong64 param_2,pas_deallocation_mode param_3,
          pas_fast_megapage_kind param_4)

{
  uchar uVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  pas_bitfit_page *ppVar7;
  pas_segregated_view_opaque *ppVar8;
  PSRWLOCK pRVar9;
  pas_segregated_partial_view *ppVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  pas_segregated_page *ppVar15;
  ulonglong uVar16;
  
  if (param_4 == pas_small_other_fast_megapage_kind) {
    ppVar15 = (pas_segregated_page *)(param_2 & 0xffffffffffffc000);
    uVar1 = (ppVar15->base).page_kind;
    if (uVar1 == '\x05') {
      bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                ((pas_bitfit_page *)ppVar15,param_2);
      return true;
    }
    if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (ppVar15->lock_ptr == (pas_lock *)0x0) {
      pRVar9 = (PSRWLOCK)0x0;
    }
    else {
      pRVar9 = (PSRWLOCK)
               pas_segregated_page_switch_lock_slow(ppVar15,(pas_lock *)0x0,ppVar15->lock_ptr);
    }
    uVar16 = (ulonglong)((uint)(param_2 >> 7) & 0x7c);
    uVar13 = *(uint *)((longlong)ppVar15->alloc_bits + uVar16) &
             ~(1 << ((uint)(param_2 >> 4) & 0x1f));
    *(uint *)((longlong)ppVar15->alloc_bits + uVar16) = uVar13;
    if (((uint)ppVar15->owner & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar16 = (ulonglong)
             *(uint *)(((ulonglong)ppVar15->owner & 0xfffffffffffffff8) + 0x14 +
                      (ulonglong)((uint)param_2 >> 6 & 0xfc));
    ppVar10 = (pas_segregated_partial_view *)(uVar16 * 8 + pas_compact_heap_reservation_base);
    if (uVar16 == 0) {
      ppVar10 = (pas_segregated_partial_view *)0x0;
    }
    if (!ppVar10->eligibility_has_been_noted) {
      pas_segregated_partial_view_note_eligibility(ppVar10,ppVar15);
    }
    if (uVar13 == 0) {
      uVar6 = (ppVar15->emptiness).num_non_empty_words_or_live_bytes - 1;
      if (uVar6 == 0) {
        pas_segregated_page_note_emptiness_impl
                  (ppVar15,pas_note_emptiness_clear_num_non_empty_words);
      }
      else {
        (ppVar15->emptiness).num_non_empty_words_or_live_bytes = uVar6;
      }
    }
    if (pRVar9 == (PSRWLOCK)0x0) {
      return true;
    }
    ReleaseSRWLockExclusive(pRVar9);
    return true;
  }
  uVar16 = param_2 & 0xfffffffffffe0000;
  if (bmalloc_medium_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d652e4:
    if (bmalloc_marge_page_header_table.hashtable.table ==
        (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d654d1:
      bVar4 = pas_try_deallocate_slow(param_2,&bmalloc_heap_config,param_3);
      return bVar4;
    }
    uVar13 = (uint)(param_2 >> 0x1a) & 0xfffffff ^ (uint)(param_2 >> 0x16);
    uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
    uVar13 = uVar13 >> 0xb ^ uVar13;
    uVar11 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar13);
    uVar6 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar11].low;
    while (uVar6 != (param_2 & 0xffffffffffc00000)) {
      uVar13 = uVar13 + 1;
      if (uVar6 == 0xffffffffffffffff) goto LAB_140d654d1;
      uVar11 = (ulonglong)(uVar13 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask);
      uVar6 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar11].low;
    }
    ppVar7 = (pas_bitfit_page *)
             (bmalloc_marge_page_header_table.hashtable.table)->array[uVar11].high;
    if (ppVar7 == (pas_bitfit_page *)0x0) goto LAB_140d654d1;
  }
  else {
    uVar13 = (uint)(param_2 >> 0x15) & 0xfffffff ^ (uint)(param_2 >> 0x11);
    uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
    uVar13 = uVar13 >> 0xb ^ uVar13;
    uVar11 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar13);
    uVar6 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar11].low;
    while (uVar6 != uVar16) {
      uVar13 = uVar13 + 1;
      if (uVar6 == 0xffffffffffffffff) goto LAB_140d652e4;
      uVar11 = (ulonglong)(uVar13 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
      uVar6 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar11].low;
    }
    ppVar7 = (pas_bitfit_page *)
             (bmalloc_medium_page_header_table.hashtable.table)->array[uVar11].high;
    if (ppVar7 == (pas_bitfit_page *)0x0) goto LAB_140d652e4;
  }
  switch((ppVar7->base).page_kind) {
  case '\x01':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x02':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x03':
    uVar13 = (uint)(param_2 >> 0x15) & 0xfffffff ^ (uint)(param_2 >> 0x11);
    uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
    uVar13 = uVar13 >> 0xb ^ uVar13;
    uVar11 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar13);
    uVar6 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar11].low;
    while (uVar6 != uVar16) {
      uVar13 = uVar13 + 1;
      uVar11 = (ulonglong)(uVar13 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
      uVar6 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar11].low;
    }
    ppVar15 = (pas_segregated_page *)
              (bmalloc_medium_page_header_table.hashtable.table)->array[uVar11].high;
    if (ppVar15->lock_ptr == (pas_lock *)0x0) {
      pRVar9 = (PSRWLOCK)0x0;
    }
    else {
      pRVar9 = (PSRWLOCK)
               pas_segregated_page_switch_lock_slow(ppVar15,(pas_lock *)0x0,ppVar15->lock_ptr);
    }
    uVar16 = (ulonglong)((uint)(param_2 >> 0xc) & 0x1c);
    uVar13 = *(uint *)((longlong)ppVar15->alloc_bits + uVar16) &
             ~(1 << ((uint)(param_2 >> 9) & 0x1f));
    *(uint *)((longlong)ppVar15->alloc_bits + uVar16) = uVar13;
    ppVar8 = ppVar15->owner;
    if (((uint)ppVar8 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar16 = (ulonglong)
             *(uint *)(((ulonglong)ppVar8 & 0xfffffffffffffff8) + 0x14 +
                      (ulonglong)((uint)(param_2 >> 10) & 0x7c));
    ppVar10 = (pas_segregated_partial_view *)(uVar16 * 8 + pas_compact_heap_reservation_base);
    if (uVar16 == 0) {
      ppVar10 = (pas_segregated_partial_view *)0x0;
    }
    if (!ppVar10->eligibility_has_been_noted) {
      pas_segregated_partial_view_note_eligibility(ppVar10,ppVar15);
      ppVar8 = ppVar15->owner;
    }
    uVar14 = (uint)param_2 & 0x1ffff;
    if (((ulonglong)ppVar8 & 6) == 0) {
      uVar5 = ppVar15->object_size;
    }
    else {
      if (((uint)ppVar8 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar16 = (ulonglong)
               *(uint *)(((ulonglong)ppVar8 & 0xfffffffffffffff8) + 0x14 +
                        (ulonglong)(uVar14 >> 0xc) * 4);
      lVar12 = pas_compact_heap_reservation_base + uVar16 * 8;
      if (uVar16 == 0) {
        lVar12 = 0;
      }
      uVar5 = *(uint *)((ulonglong)
                        ((uint)*(byte *)(lVar12 + 0xd) * 0x80000 +
                        (uint)*(ushort *)(lVar12 + 0xb) * 8) + 0x20 +
                       pas_compact_heap_reservation_base) & 0x7ffffff;
    }
    if (uVar5 == 0) {
LAB_140d65613:
      bVar4 = false;
    }
    else {
      if (0x20000 < (ulonglong)uVar14 + (ulonglong)uVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar16 = ((ulonglong)uVar5 + (ulonglong)uVar14) - 1 >> 0xc;
      uVar11 = (ulonglong)(uVar14 >> 0xc);
      if (uVar16 < uVar11) goto LAB_140d65613;
      bVar4 = false;
      do {
        cVar2 = *(char *)((longlong)ppVar15[1].alloc_bits + (uVar11 - 0x10));
        if (cVar2 == '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (cVar2 == -1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        *(char *)((longlong)ppVar15[1].alloc_bits + (uVar11 - 0x10)) = cVar2 + -1;
        bVar4 = (bool)(bVar4 | (char)(cVar2 + -1) == '\0');
        uVar11 = uVar11 + 1;
      } while (uVar16 + 1 != uVar11);
    }
    if (pas_segregated_page_deallocate_should_verify_granules == true) {
      pas_segregated_page_verify_granules(ppVar15);
    }
    if (bVar4) {
      pas_segregated_page_note_emptiness_impl(ppVar15,pas_note_emptiness_keep_num_non_empty_words);
    }
    if (uVar13 == 0) {
      uVar6 = (ppVar15->emptiness).num_non_empty_words_or_live_bytes - 1;
      if (uVar6 == 0) {
        pas_segregated_page_note_emptiness_impl
                  (ppVar15,pas_note_emptiness_clear_num_non_empty_words);
      }
      else {
        (ppVar15->emptiness).num_non_empty_words_or_live_bytes = uVar6;
      }
    }
    if (pRVar9 != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(pRVar9);
    }
    break;
  case '\x04':
    uVar13 = (uint)(param_2 >> 0x15) & 0xfffffff ^ (uint)(param_2 >> 0x11);
    uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
    uVar13 = uVar13 >> 0xb ^ uVar13;
    uVar11 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar13);
    uVar6 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar11].low;
    while (uVar6 != uVar16) {
      uVar13 = uVar13 + 1;
      uVar11 = (ulonglong)(uVar13 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
      uVar6 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar11].low;
    }
    uVar16 = (ulonglong)
             *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar11].high + 4) +
             param_1->num_logged_bytes;
    if (uVar16 < 0xc351) {
      param_1->num_logged_bytes = uVar16;
      uVar13 = param_1->deallocation_log_index;
      if ((ulonglong)uVar13 < 999) {
        param_1->deallocation_log[uVar13] = param_2 << 6 | 7;
        param_1->deallocation_log_index = uVar13 + 1;
        return true;
      }
    }
    pas_thread_local_cache_append_deallocation_slow
              (param_1,param_2,
               pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role);
    break;
  case '\x05':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x06':
    bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page(ppVar7,param_2);
    break;
  case '\a':
    bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page(ppVar7,param_2);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return true;
}

// pas_allocation_result_identity @ 140d656f0

pas_allocation_result * __cdecl
pas_allocation_result_identity
          (pas_allocation_result *__return_storage_ptr__,pas_allocation_result *param_1)

{
  bool bVar1;
  undefined3 uVar2;
  pas_zero_mode pVar3;
  
  bVar1 = param_1->did_succeed;
  uVar2 = *(undefined3 *)&param_1->field_0x9;
  pVar3 = param_1->zero_mode;
  __return_storage_ptr__->begin = param_1->begin;
  __return_storage_ptr__->did_succeed = bVar1;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar2;
  __return_storage_ptr__->zero_mode = pVar3;
  return __return_storage_ptr__;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 14

// pas_page_sharing_pool_construct @ 140d6f170

void __cdecl pas_page_sharing_pool_construct(pas_page_sharing_pool *param_1)

{
  (param_1->participant_by_epoch).outline_capacity = 0;
  param_1->current_participant = (pas_page_sharing_participant_opaque *)0x0;
  (param_1->participant_by_epoch).inline_array[0] = (pas_page_sharing_participant_opaque *)0x0;
  (param_1->participant_by_epoch).outline_array = (pas_page_sharing_participant_opaque **)0x0;
  (param_1->participants).size = 0;
  (param_1->participants).spine_size = 0;
  (param_1->participant_by_epoch).size = 0;
  (param_1->delta).spine = 0;
  (param_1->delta).size = 0;
  *(undefined8 *)&(param_1->delta).spine_size = 0;
  (param_1->first_delta).value = 0;
  (param_1->first_delta).version = 0;
  return;
}

// pas_page_sharing_pool_add_at_index @ 140d6f190

void __cdecl
pas_page_sharing_pool_add_at_index
          (pas_page_sharing_pool *param_1,pas_page_sharing_participant_opaque *param_2,
          ulong64 param_3)

{
  ulong64 uVar1;
  ulong64 uVar2;
  code *pcVar3;
  pas_versioned_field pVar4;
  BOOLEAN BVar5;
  ulong64 uVar6;
  pas_page_sharing_participant_payload *ppVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_78;
  
  if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar2 = (param_1->first_delta).version;
  do {
    uVar6 = uVar2;
    uVar1 = (param_1->first_delta).value;
    uVar2 = (param_1->first_delta).version;
  } while (uVar2 != uVar6);
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  ppVar7 = pas_page_sharing_participant_get_payload(param_2);
  uVar13 = (uint)param_3;
  ppVar7->index_in_sharing_pool = uVar13;
  pas_page_sharing_participant_set_parent_pool(param_2,param_1);
  uVar16 = (param_1->delta).size;
  while (local_78 = (uint)(param_3 >> 5), uVar16 <= local_78) {
    uVar17 = uVar16 + 3 >> 2;
    uVar18 = (param_1->delta).spine_size;
    if (uVar18 < uVar17) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar15 = uVar16 >> 2;
    uVar11 = (ulonglong)uVar15;
    uVar10 = (ulonglong)(param_1->delta).spine.payload;
    pvVar14 = (void *)(pas_compact_heap_reservation_base + uVar10 * 8);
    if (uVar10 == 0) {
      pvVar14 = (void *)0x0;
    }
    if (uVar15 < uVar18) {
      uVar18 = *(uint *)((longlong)pvVar14 + uVar11 * 4);
    }
    else {
      pvVar8 = pas_immortal_heap_allocate
                         ((ulonglong)uVar18 * 8 + 8,
                          "pas_page_sharing_pool_segmented_delta_bitvector/spine",
                          pas_object_allocation);
      if (3 < uVar16 + 3) {
        memcpy(pvVar8,pvVar14,(ulonglong)(uVar17 * 4));
      }
      lVar12 = (ulonglong)uVar18 * 2 + 2;
      memset((void *)((longlong)pvVar8 + (ulonglong)uVar17 * 4),0,(lVar12 - (ulonglong)uVar17) * 4);
      LOCK();
      UNLOCK();
      if (pvVar8 == (void *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar10 = (longlong)pvVar8 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar10 < 8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar18 = (uint)(uVar10 >> 3);
      }
      (param_1->delta).spine.payload = uVar18;
      LOCK();
      UNLOCK();
      (param_1->delta).spine_size = (uint)lVar12;
      uVar18 = *(uint *)((longlong)pvVar8 + uVar11 * 4);
      pvVar14 = pvVar8;
    }
    uVar10 = (ulonglong)(uVar16 & 3);
    if (uVar15 == uVar17) {
      if ((uVar18 != 0) && (pas_compact_heap_reservation_base != (ulonglong)uVar18 * -8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar10 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar9 = pas_immortal_heap_allocate_with_alignment
                         (0x10,4,"pas_page_sharing_pool_segmented_delta_bitvector/segment",
                          pas_object_allocation);
      *puVar9 = 0;
      puVar9[1] = 0;
      LOCK();
      UNLOCK();
      uVar10 = (longlong)puVar9 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar10 < 8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar18 = (uint)(uVar10 >> 3);
      *(uint *)((longlong)pvVar14 + uVar11 * 4) = uVar18;
      uVar10 = 0;
    }
    lVar12 = 0;
    if (uVar18 != 0) {
      lVar12 = pas_compact_heap_reservation_base + (ulonglong)uVar18 * 8;
    }
    *(undefined4 *)(lVar12 + uVar10 * 4) = 0;
    LOCK();
    UNLOCK();
    uVar16 = (param_1->delta).size + 1;
    (param_1->delta).size = uVar16;
    if (uVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  LOCK();
  UNLOCK();
  uVar16 = (param_1->participants).size;
  uVar10 = (ulonglong)uVar16;
  do {
    uVar18 = (uint)uVar10;
    if (uVar13 < uVar18) {
      uVar10 = (ulonglong)(param_1->participants).spine.payload;
      lVar12 = pas_compact_heap_reservation_base + uVar10 * 8;
      if (uVar10 == 0) {
        lVar12 = 0;
      }
      uVar10 = (ulonglong)*(uint *)(lVar12 + (param_3 & 0xfffffffffffffffc));
      lVar12 = pas_compact_heap_reservation_base + uVar10 * 8;
      if (uVar10 == 0) {
        lVar12 = 0;
      }
      if (*(longlong *)(lVar12 + (ulonglong)(uVar13 & 3) * 8) == 0) {
        *(pas_page_sharing_participant_opaque **)(lVar12 + (ulonglong)(uVar13 & 3) * 8) = param_2;
        pVar4.version = uVar6;
        pVar4.value = uVar1;
        if ((uVar1 == uVar16) &&
           (uVar13 = (param_1->participants).size, uVar6 != 0xffffffffffffffff && uVar16 < uVar13))
        {
          LOCK();
          if (pVar4 == param_1->first_delta) {
            (param_1->first_delta).value = (ulonglong)uVar13;
            (param_1->first_delta).version = ((uint)uVar6 & 1) + uVar6;
          }
          UNLOCK();
        }
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar15 = uVar18 + 3 >> 2;
    uVar17 = (param_1->participants).spine_size;
    if (uVar17 < uVar15) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar10 = uVar10 >> 2;
    uVar11 = (ulonglong)(param_1->participants).spine.payload;
    pvVar14 = (void *)(pas_compact_heap_reservation_base + uVar11 * 8);
    if (uVar11 == 0) {
      pvVar14 = (void *)0x0;
    }
    if ((uint)uVar10 < uVar17) {
      uVar17 = *(uint *)((longlong)pvVar14 + uVar10 * 4);
    }
    else {
      pvVar8 = pas_immortal_heap_allocate
                         ((ulonglong)uVar17 * 8 + 8,
                          "pas_page_sharing_pool_segmented_participant_vector/spine",
                          pas_object_allocation);
      if (3 < uVar18 + 3) {
        memcpy(pvVar8,pvVar14,(ulonglong)(uVar15 * 4));
      }
      lVar12 = (ulonglong)uVar17 * 2 + 2;
      memset((void *)((ulonglong)uVar15 * 4 + (longlong)pvVar8),0,(lVar12 - (ulonglong)uVar15) * 4);
      LOCK();
      UNLOCK();
      if (pvVar8 == (void *)0x0) {
        uVar17 = 0;
      }
      else {
        uVar11 = (longlong)pvVar8 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((uVar11 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar11 < 8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar17 = (uint)(uVar11 >> 3);
      }
      (param_1->participants).spine.payload = uVar17;
      LOCK();
      UNLOCK();
      (param_1->participants).spine_size = (uint)lVar12;
      uVar17 = *(uint *)((longlong)pvVar8 + uVar10 * 4);
      pvVar14 = pvVar8;
    }
    uVar11 = (ulonglong)(uVar18 & 3);
    if ((uint)uVar10 == uVar15) {
      if ((uVar17 != 0) && (pas_compact_heap_reservation_base != (ulonglong)uVar17 * -8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar11 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar9 = pas_immortal_heap_allocate_with_alignment
                         (0x20,8,"pas_page_sharing_pool_segmented_participant_vector/segment",
                          pas_object_allocation);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      LOCK();
      UNLOCK();
      uVar11 = (longlong)puVar9 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar11 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar11 < 8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar17 = (uint)(uVar11 >> 3);
      *(uint *)((longlong)pvVar14 + uVar10 * 4) = uVar17;
      uVar11 = 0;
    }
    lVar12 = 0;
    if (uVar17 != 0) {
      lVar12 = pas_compact_heap_reservation_base + (ulonglong)uVar17 * 8;
    }
    *(undefined8 *)(lVar12 + uVar11 * 8) = 0;
    LOCK();
    UNLOCK();
    uVar18 = (param_1->participants).size + 1;
    uVar10 = (ulonglong)uVar18;
    (param_1->participants).size = uVar18;
    if (uVar18 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  } while( true );
}

// pas_page_sharing_pool_add @ 140d6f690

void __cdecl
pas_page_sharing_pool_add
          (pas_page_sharing_pool *param_1,pas_page_sharing_participant_opaque *param_2)

{
  pas_page_sharing_pool_add_at_index(param_1,param_2,(ulonglong)(param_1->participants).size);
  return;
}

// pas_page_sharing_pool_take_least_recently_used @ 140d6f6a0

pas_page_sharing_pool_take_result __cdecl
pas_page_sharing_pool_take_least_recently_used
          (pas_page_sharing_pool *param_1,pas_deferred_decommit_log *param_2,
          pas_lock_hold_mode param_3,ulong64 param_4)

{
  pas_page_sharing_participant_opaque **pppVar1;
  pas_page_sharing_pool_min_heap *ppVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  pas_page_sharing_participant_opaque *ppVar6;
  byte bVar7;
  code *pcVar8;
  pas_versioned_field pVar9;
  pas_versioned_field pVar10;
  bool bVar11;
  BOOLEAN BVar12;
  pas_page_sharing_pool_take_result pVar13;
  ulong64 uVar14;
  pas_page_sharing_participant_payload *ppVar15;
  pas_page_sharing_participant_payload *ppVar16;
  pas_page_sharing_participant_payload *ppVar17;
  pas_page_sharing_participant_opaque **pppVar18;
  uint uVar19;
  ulonglong uVar20;
  pas_page_sharing_participant_opaque **pppVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  pas_page_sharing_participant_opaque *ppVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  
  pppVar1 = (param_1->participant_by_epoch).inline_array;
  ppVar2 = &param_1->participant_by_epoch;
  do {
    if ((((param_4 == 0) ||
         (ppVar26 = param_1->current_participant,
         ppVar26 == (pas_page_sharing_participant_opaque *)0x0)) ||
        (bVar11 = pas_page_sharing_participant_is_eligible(ppVar26), !bVar11)) ||
       (uVar14 = pas_page_sharing_participant_get_use_epoch(ppVar26), param_4 < uVar14)) {
      if ((param_1->first_delta).value == (ulonglong)(param_1->participants).size) {
        ppVar26 = param_1->current_participant;
        if (ppVar26 == (pas_page_sharing_participant_opaque *)0x0) {
          return pas_page_sharing_pool_take_none_available;
        }
        ppVar15 = pas_page_sharing_participant_get_payload(ppVar26);
        uVar14 = pas_page_sharing_participant_get_use_epoch(ppVar26);
        if ((uVar14 != ppVar15->use_epoch_for_min_heap) ||
           (bVar11 = pas_page_sharing_participant_is_eligible(ppVar26), !bVar11)) {
          pas_page_sharing_pool_did_create_delta(param_1,ppVar26);
          goto joined_r0x000140d6f764;
        }
      }
      else {
        ppVar26 = (pas_page_sharing_participant_opaque *)0x0;
joined_r0x000140d6f764:
        if (param_3 == pas_lock_is_not_held) {
          AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        }
        if ((param_1->participants).size == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if (BVar12 != '\0') {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if (ppVar26 != (pas_page_sharing_participant_opaque *)0x0) {
          ppVar15 = pas_page_sharing_participant_get_payload(ppVar26);
          uVar20 = (ulonglong)ppVar15->index_in_sharing_pool_min_heap;
          if (uVar20 != 0) {
            if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar20 - 1) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            pppVar18 = pppVar1;
            if (uVar20 != 1) {
              pppVar18 = (param_1->participant_by_epoch).outline_array + (uVar20 - 2);
            }
            if (*pppVar18 != ppVar26) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
          }
        }
LAB_140d6f7fb:
        do {
          do {
            uVar20 = (param_1->first_delta).version;
            do {
              uVar28 = uVar20;
              uVar5 = (param_1->first_delta).value;
              uVar20 = (param_1->first_delta).version;
            } while (uVar20 != uVar28);
            uVar20 = uVar28;
            if ((uVar28 & 1) == 0) {
              uVar20 = uVar28 | 1;
              LOCK();
              pVar10.version = uVar28;
              pVar10.value = uVar5;
              bVar11 = pVar10 == param_1->first_delta;
              if (bVar11) {
                (param_1->first_delta).value = uVar5;
                (param_1->first_delta).version = uVar20;
              }
              UNLOCK();
              if (!bVar11) goto LAB_140d6f7fb;
            }
            uVar24 = (ulonglong)(param_1->participants).size;
            uVar28 = uVar5;
            if (uVar5 < uVar24) {
              do {
                uVar27 = (ulonglong)(param_1->delta).spine.payload;
                uVar22 = (ulonglong)((uint)(uVar28 >> 5) & 3);
                lVar23 = pas_compact_heap_reservation_base + uVar27 * 8;
                if (uVar27 == 0) {
                  lVar23 = 0;
                }
                uVar27 = (ulonglong)*(uint *)(lVar23 + (uVar28 >> 7) * 4);
                lVar23 = pas_compact_heap_reservation_base + uVar27 * 8;
                if (uVar27 == 0) {
                  lVar23 = 0;
                }
                bVar7 = (byte)uVar28 & 0x1f;
                do {
                  uVar4 = *(uint *)(lVar23 + uVar22 * 4);
                  uVar19 = uVar4 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
                  if (uVar4 == uVar19) goto LAB_140d6f85e;
                  puVar3 = (uint *)(lVar23 + uVar22 * 4);
                  LOCK();
                  bVar11 = uVar4 == *puVar3;
                  if (bVar11) {
                    *puVar3 = uVar19;
                  }
                  UNLOCK();
                } while (!bVar11);
                uVar27 = (ulonglong)(param_1->participants).spine.payload;
                lVar23 = pas_compact_heap_reservation_base + uVar27 * 8;
                if (uVar27 == 0) {
                  lVar23 = 0;
                }
                uVar27 = (ulonglong)*(uint *)(lVar23 + (uVar28 & 0xfffffffffffffffc));
                lVar23 = pas_compact_heap_reservation_base + uVar27 * 8;
                if (uVar27 == 0) {
                  lVar23 = 0;
                }
                ppVar26 = *(pas_page_sharing_participant_opaque **)
                           (lVar23 + (ulonglong)((uint)uVar28 & 3) * 8);
                ppVar15 = pas_page_sharing_participant_get_payload(ppVar26);
                uVar14 = pas_page_sharing_participant_get_use_epoch(ppVar26);
                ppVar15->use_epoch_for_min_heap = uVar14;
                ppVar15->delta_has_been_noted = false;
                LOCK();
                UNLOCK();
                bVar11 = pas_page_sharing_participant_is_eligible(ppVar26);
                if (bVar11) {
                  ppVar16 = pas_page_sharing_participant_get_payload(ppVar26);
                  if (ppVar16->index_in_sharing_pool_min_heap == 0) {
LAB_140d6fa6f:
                    uVar27 = (param_1->participant_by_epoch).size;
                    uVar22 = (param_1->participant_by_epoch).outline_capacity;
                    if (uVar22 + 1 <= uVar27) {
                      if (uVar27 != uVar22 + 1) {
                    /* WARNING: Does not return */
                        pcVar8 = (code *)invalidInstructionException();
                        (*pcVar8)();
                      }
                      uVar25 = uVar22 * 2;
                      if (uVar25 < 5) {
                        uVar25 = 4;
                      }
                      if (uVar25 <= uVar22) {
                    /* WARNING: Does not return */
                        pcVar8 = (code *)invalidInstructionException();
                        (*pcVar8)();
                      }
                      pppVar18 = pas_bootstrap_free_heap_allocate_simple_for_config
                                           (uVar25 * 8,
                                            "pas_page_sharing_pool_min_heap/outline_array",
                                            pas_object_allocation,(void *)0x0);
                      if (uVar25 < uVar27) {
                    /* WARNING: Does not return */
                        pcVar8 = (code *)invalidInstructionException();
                        (*pcVar8)();
                      }
                      memset(pppVar18,0,uVar25 * 8);
                      pppVar21 = (param_1->participant_by_epoch).outline_array;
                      if (pppVar21 == (pas_page_sharing_participant_opaque **)0x0) {
                        pppVar21 = (pas_page_sharing_participant_opaque **)0x0;
                      }
                      else {
                        memcpy(pppVar18,pppVar21,uVar27 * 8 - 8);
                        pppVar21 = (param_1->participant_by_epoch).outline_array;
                      }
                      pas_bootstrap_free_heap_deallocate_for_config
                                (pppVar21,uVar22 << 3,pas_object_allocation,(void *)0x0);
                      (param_1->participant_by_epoch).outline_array = pppVar18;
                      (param_1->participant_by_epoch).outline_capacity = uVar25;
                      uVar22 = uVar25;
                    }
                    if (uVar22 < uVar27) {
                    /* WARNING: Does not return */
                      pcVar8 = (code *)invalidInstructionException();
                      (*pcVar8)();
                    }
                    if (uVar27 == 0) {
                      *pppVar1 = (pas_page_sharing_participant_opaque *)0x0;
                      ppVar2->size = 1;
                      uVar27 = 1;
                    }
                    else {
                      (param_1->participant_by_epoch).outline_array[uVar27 - 1] =
                           (pas_page_sharing_participant_opaque *)0x0;
                      (param_1->participant_by_epoch).size = uVar27 + 1;
                      uVar14 = uVar27 + 1;
                      do {
                        uVar27 = uVar14 >> 1;
                        if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar27 - 1) {
                    /* WARNING: Does not return */
                          pcVar8 = (code *)invalidInstructionException();
                          (*pcVar8)();
                        }
                        pppVar18 = pppVar1;
                        if (uVar27 != 1) {
                          pppVar18 = (param_1->participant_by_epoch).outline_array + (uVar27 - 2);
                        }
                        ppVar6 = *pppVar18;
                        ppVar16 = pas_page_sharing_participant_get_payload(ppVar26);
                        ppVar17 = pas_page_sharing_participant_get_payload(ppVar6);
                        if (ppVar17->use_epoch_for_min_heap <= ppVar16->use_epoch_for_min_heap) {
                          uVar27 = uVar14;
                          if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                            pcVar8 = (code *)invalidInstructionException();
                            (*pcVar8)();
                          }
                          break;
                        }
                        if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                          pcVar8 = (code *)invalidInstructionException();
                          (*pcVar8)();
                        }
                        ppVar16 = pas_page_sharing_participant_get_payload(ppVar6);
                        ppVar16->index_in_sharing_pool_min_heap = (uint)uVar14;
                        if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar14 - 1) {
                    /* WARNING: Does not return */
                          pcVar8 = (code *)invalidInstructionException();
                          (*pcVar8)();
                        }
                        (param_1->participant_by_epoch).outline_array[uVar14 - 2] = ppVar6;
                        bVar11 = 3 < uVar14;
                        uVar14 = uVar27;
                      } while (bVar11);
                    }
                    ppVar16 = pas_page_sharing_participant_get_payload(ppVar26);
                    ppVar16->index_in_sharing_pool_min_heap = (uint)uVar27;
                    if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar27 - 1) {
                    /* WARNING: Does not return */
                      pcVar8 = (code *)invalidInstructionException();
                      (*pcVar8)();
                    }
                    pppVar18 = pppVar1;
                    if (uVar27 != 1) {
                      pppVar18 = (param_1->participant_by_epoch).outline_array + (uVar27 - 2);
                    }
                    *pppVar18 = ppVar26;
                  }
                  else {
                    ppVar16 = pas_page_sharing_participant_get_payload(ppVar26);
                    uVar22 = (ulonglong)ppVar16->index_in_sharing_pool_min_heap;
                    uVar27 = ppVar2->size;
                    if (1 < uVar22) {
                      uVar25 = (ulonglong)(ppVar16->index_in_sharing_pool_min_heap >> 1);
                      if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar25 - 1) {
                    /* WARNING: Does not return */
                        pcVar8 = (code *)invalidInstructionException();
                        (*pcVar8)();
                      }
                      pppVar18 = pppVar1;
                      if (uVar25 != 1) {
                        pppVar18 = (param_1->participant_by_epoch).outline_array + (uVar25 - 2);
                      }
                      ppVar16 = pas_page_sharing_participant_get_payload(ppVar26);
                      ppVar17 = pas_page_sharing_participant_get_payload(*pppVar18);
                      if (ppVar17->use_epoch_for_min_heap <= ppVar16->use_epoch_for_min_heap)
                      goto LAB_140d6f9b6;
LAB_140d6fa62:
                      pas_page_sharing_pool_min_heap_remove(ppVar2,ppVar26);
                      goto LAB_140d6fa6f;
                    }
LAB_140d6f9b6:
                    uVar25 = uVar22 * 2;
                    if (uVar25 <= uVar27) {
                      if (uVar22 == 0) {
                    /* WARNING: Does not return */
                        pcVar8 = (code *)invalidInstructionException();
                        (*pcVar8)();
                      }
                      if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar25 - 1) {
                    /* WARNING: Does not return */
                        pcVar8 = (code *)invalidInstructionException();
                        (*pcVar8)();
                      }
                      pppVar18 = (param_1->participant_by_epoch).outline_array;
                      ppVar16 = pas_page_sharing_participant_get_payload(ppVar26);
                      ppVar17 = pas_page_sharing_participant_get_payload(pppVar18[uVar22 * 2 + -2]);
                      if (ppVar17->use_epoch_for_min_heap < ppVar16->use_epoch_for_min_heap)
                      goto LAB_140d6fa62;
                    }
                    if (uVar25 < uVar27) {
                      if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar25) {
                    /* WARNING: Does not return */
                        pcVar8 = (code *)invalidInstructionException();
                        (*pcVar8)();
                      }
                      pppVar18 = pppVar1;
                      if (uVar22 != 0) {
                        pppVar18 = (param_1->participant_by_epoch).outline_array + uVar22 * 2 + -1;
                      }
                      ppVar16 = pas_page_sharing_participant_get_payload(ppVar26);
                      ppVar17 = pas_page_sharing_participant_get_payload(*pppVar18);
                      if (ppVar17->use_epoch_for_min_heap < ppVar16->use_epoch_for_min_heap)
                      goto LAB_140d6fa62;
                    }
                  }
                  uVar27 = (ulonglong)ppVar15->index_in_sharing_pool_min_heap;
                  if (uVar27 == 0) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)invalidInstructionException();
                    (*pcVar8)();
                  }
                  if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar27 - 1) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)invalidInstructionException();
                    (*pcVar8)();
                  }
                  pppVar18 = pppVar1;
                  if (uVar27 != 1) {
                    pppVar18 = (param_1->participant_by_epoch).outline_array + (uVar27 - 2);
                  }
                  if (*pppVar18 != ppVar26) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)invalidInstructionException();
                    (*pcVar8)();
                  }
                }
                else if ((ppVar15->index_in_sharing_pool_min_heap != 0) &&
                        (pas_page_sharing_pool_min_heap_remove(ppVar2,ppVar26),
                        ppVar15->index_in_sharing_pool_min_heap != 0)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
LAB_140d6f85e:
                uVar28 = uVar28 + 1;
              } while (uVar28 != uVar24);
            }
          } while (uVar20 == 0xffffffffffffffff);
          if ((uVar20 & 1) == 0) {
            uVar14 = uVar20;
            if (uVar5 == uVar24) break;
          }
          else {
            uVar14 = uVar20 + 1;
          }
          LOCK();
          pVar9.version = uVar20;
          pVar9.value = uVar5;
          bVar11 = pVar9 == param_1->first_delta;
          if (bVar11) {
            (param_1->first_delta).value = uVar24;
            (param_1->first_delta).version = uVar14;
          }
          UNLOCK();
        } while (!bVar11);
        if (ppVar2->size == 0) {
          param_1->current_participant = (pas_page_sharing_participant_opaque *)0x0;
          ppVar26 = (pas_page_sharing_participant_opaque *)0x0;
        }
        else {
          if ((param_1->participant_by_epoch).outline_capacity == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          ppVar26 = (param_1->participant_by_epoch).inline_array[0];
          param_1->current_participant = ppVar26;
          if (ppVar26 == (pas_page_sharing_participant_opaque *)0x0) {
            ppVar26 = (pas_page_sharing_participant_opaque *)0x0;
          }
          else {
            ppVar15 = pas_page_sharing_participant_get_payload(ppVar26);
            if (ppVar15->index_in_sharing_pool_min_heap == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
          }
        }
        if (param_3 == pas_lock_is_not_held) {
          ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        }
        if (ppVar26 == (pas_page_sharing_participant_opaque *)0x0) {
          return pas_page_sharing_pool_take_none_available;
        }
      }
      ppVar15 = pas_page_sharing_participant_get_payload(ppVar26);
      if ((param_4 != 0) && (param_4 < ppVar15->use_epoch_for_min_heap)) {
        return pas_page_sharing_pool_take_none_within_max_epoch;
      }
    }
    pVar13 = pas_page_sharing_participant_take_least_recently_used(ppVar26,param_2,param_3);
    if (pVar13 == pas_page_sharing_pool_take_none_available) {
      ppVar15 = pas_page_sharing_participant_get_payload(ppVar26);
      ppVar15->delta_has_been_noted = false;
      pas_page_sharing_pool_did_create_delta(param_1,ppVar26);
    }
    else if (pVar13 - pas_page_sharing_pool_take_locks_unavailable < 2) {
      return pVar13;
    }
  } while( true );
}

// pas_physical_page_sharing_pool_take @ 140d6fe30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140d6fe63) */
/* WARNING: Removing unreachable block (ram,0x000140d6fe8f) */
/* WARNING: Removing unreachable block (ram,0x000140d6ff3b) */

void __cdecl
pas_physical_page_sharing_pool_take
          (ulong64 param_1,pas_lock_hold_mode param_2,pas_lock **param_3,ulong64 param_4)

{
  code *pcVar1;
  long64 lVar2;
  pas_page_sharing_pool_take_result pVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_488 [32];
  pas_deferred_decommit_log local_468;
  ulonglong local_28;
  
  lVar2 = pas_physical_page_sharing_pool_balance;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_488;
  if (pas_physical_page_sharing_pool_balancing_enabled) {
    bVar7 = pas_physical_page_sharing_pool_balance < 0;
    bVar6 = (ulonglong)pas_physical_page_sharing_pool_balance < param_1;
    pas_physical_page_sharing_pool_balance = pas_physical_page_sharing_pool_balance - param_1;
    if (bVar7 || bVar6) {
      LOCK();
      pas_physical_page_sharing_pool_balance = 0;
      UNLOCK();
      uVar4 = param_1 - lVar2;
      if (uVar4 != 0) {
        pas_deferred_decommit_log_construct
                  (&local_468,param_3,param_4,(pas_physical_memory_transaction *)0x0);
        do {
          if (uVar4 <= local_468.total) {
            bVar6 = true;
            goto LAB_140d6ff06;
          }
          pVar3 = pas_page_sharing_pool_take_least_recently_used
                            (&pas_physical_page_sharing_pool,&local_468,param_2,0);
        } while (pVar3 == pas_page_sharing_pool_take_success);
        if (pVar3 == pas_page_sharing_pool_take_none_within_max_epoch) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        bVar6 = pVar3 != pas_page_sharing_pool_take_locks_unavailable;
LAB_140d6ff06:
        lVar5 = 0;
        if (uVar4 <= local_468.total) {
          lVar5 = local_468.total - uVar4;
        }
        if (!bVar6) {
          lVar5 = local_468.total - uVar4;
        }
        pas_deferred_decommit_log_decommit_all(&local_468);
        pas_deferred_decommit_log_destruct(&local_468,param_2);
        pas_physical_page_sharing_pool_balance = pas_physical_page_sharing_pool_balance + lVar5;
        LOCK();
        UNLOCK();
      }
    }
    else {
      LOCK();
      UNLOCK();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_488) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// pas_physical_page_sharing_pool_scavenge @ 140d6ff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140d7002c) */

pas_page_sharing_pool_scavenge_result * __cdecl
pas_physical_page_sharing_pool_scavenge
          (pas_page_sharing_pool_scavenge_result *__return_storage_ptr__,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  pas_page_sharing_pool_take_result pVar3;
  pas_page_sharing_pool_scavenge_result *ppVar4;
  ulong64 uVar5;
  undefined1 auStack_4b8 [40];
  pas_physical_memory_transaction local_490;
  pas_deferred_decommit_log local_480;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  pas_physical_memory_transaction_construct(&local_490);
  uVar5 = 0;
  while( true ) {
    pas_physical_memory_transaction_begin(&local_490);
    pas_deferred_decommit_log_construct(&local_480,(pas_lock **)0x0,0,&local_490);
    do {
      pVar3 = pas_page_sharing_pool_take_least_recently_used
                        (&pas_physical_page_sharing_pool,&local_480,pas_lock_is_not_held,param_1);
    } while (pVar3 == pas_page_sharing_pool_take_success);
    pas_physical_page_sharing_pool_balance =
         (longlong)(local_480.total + pas_physical_page_sharing_pool_balance) >> 0x3f &
         local_480.total + pas_physical_page_sharing_pool_balance;
    LOCK();
    UNLOCK();
    uVar5 = uVar5 + local_480.total;
    pas_deferred_decommit_log_decommit_all(&local_480);
    pas_deferred_decommit_log_destruct(&local_480,pas_lock_is_not_held);
    if (pVar3 < pas_page_sharing_pool_take_locks_unavailable) break;
    if (pVar3 != pas_page_sharing_pool_take_locks_unavailable) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pas_physical_memory_transaction_end(&local_490);
  }
  bVar2 = pas_physical_memory_transaction_end(&local_490);
  if (!bVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  __return_storage_ptr__->take_result = pVar3;
  __return_storage_ptr__->total_bytes = uVar5;
  if ((local_40 ^ (ulonglong)auStack_4b8) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar4 = (pas_page_sharing_pool_scavenge_result *)(*pcVar1)();
  return ppVar4;
}

// pas_physical_page_sharing_pool_take_later @ 140d700b0

/* WARNING: Removing unreachable block (ram,0x000140d700cd) */

void __cdecl pas_physical_page_sharing_pool_take_later(ulong64 param_1)

{
  if (pas_physical_page_sharing_pool_balancing_enabled) {
    pas_physical_page_sharing_pool_balance = pas_physical_page_sharing_pool_balance - param_1;
    LOCK();
    UNLOCK();
  }
  return;
}

// pas_physical_page_sharing_pool_give_back @ 140d700e0

/* WARNING: Removing unreachable block (ram,0x000140d700fb) */

void __cdecl pas_physical_page_sharing_pool_give_back(ulong64 param_1)

{
  if (pas_physical_page_sharing_pool_balancing_enabled) {
    pas_physical_page_sharing_pool_balance = pas_physical_page_sharing_pool_balance + param_1;
    LOCK();
    UNLOCK();
  }
  return;
}

// pas_physical_page_sharing_pool_take_for_page_config @ 140d70110

/* WARNING: Removing unreachable block (ram,0x000140d7014d) */

void __cdecl
pas_physical_page_sharing_pool_take_for_page_config
          (ulong64 param_1,pas_page_base_config *param_2,pas_lock_hold_mode param_3,
          pas_lock **param_4,ulong64 param_5)

{
  if (pas_physical_page_sharing_pool_balancing_enabled) {
    if ((param_2->page_config_kind != pas_page_config_kind_segregated) ||
       (*(int *)&param_2[1].field_0x4 != 1)) {
      pas_physical_page_sharing_pool_take(param_1,param_3,param_4,param_5);
      return;
    }
    if (pas_physical_page_sharing_pool_balancing_enabled_for_utility) {
      pas_physical_page_sharing_pool_balance = pas_physical_page_sharing_pool_balance - param_1;
      LOCK();
      UNLOCK();
    }
  }
  return;
}

// pas_page_sharing_pool_did_create_delta @ 140d70170

void __cdecl
pas_page_sharing_pool_did_create_delta
          (pas_page_sharing_pool *param_1,pas_page_sharing_participant_opaque *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  pas_versioned_field pVar5;
  pas_page_sharing_participant_payload *ppVar6;
  ulonglong uVar7;
  uint uVar8;
  ulong64 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  ppVar6 = pas_page_sharing_participant_get_payload(param_2);
  uVar7 = (ulonglong)(param_1->participants).spine.payload;
  lVar10 = pas_compact_heap_reservation_base + uVar7 * 8;
  if (uVar7 == 0) {
    lVar10 = 0;
  }
  uVar7 = (ulonglong)*(uint *)(lVar10 + (ulonglong)(ppVar6->index_in_sharing_pool & 0xfffffffc));
  lVar10 = pas_compact_heap_reservation_base + uVar7 * 8;
  if (uVar7 == 0) {
    lVar10 = 0;
  }
  if (*(pas_page_sharing_participant_opaque **)
       (lVar10 + (ulonglong)(ppVar6->index_in_sharing_pool & 3) * 8) != param_2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (ppVar6->delta_has_been_noted == false) {
    ppVar6->delta_has_been_noted = true;
    LOCK();
    UNLOCK();
    uVar2 = ppVar6->index_in_sharing_pool;
    uVar13 = (ulonglong)uVar2;
    uVar7 = (ulonglong)(param_1->delta).spine.payload;
    uVar11 = (ulonglong)(uVar2 >> 5 & 3);
    lVar10 = pas_compact_heap_reservation_base + uVar7 * 8;
    if (uVar7 == 0) {
      lVar10 = 0;
    }
    uVar7 = (ulonglong)*(uint *)(lVar10 + (ulonglong)(uVar2 >> 5 & 0x7fffffc));
    lVar10 = pas_compact_heap_reservation_base + uVar7 * 8;
    if (uVar7 == 0) {
      lVar10 = 0;
    }
    do {
      uVar3 = *(uint *)(lVar10 + uVar11 * 4);
      uVar8 = uVar3 | 1 << ((byte)uVar2 & 0x1f);
      if (uVar3 == uVar8) break;
      puVar1 = (uint *)(lVar10 + uVar11 * 4);
      LOCK();
      bVar14 = uVar3 == *puVar1;
      if (bVar14) {
        *puVar1 = uVar8;
      }
      UNLOCK();
    } while (!bVar14);
    do {
      do {
        uVar9 = (param_1->first_delta).version;
        do {
          uVar11 = uVar9;
          uVar7 = (param_1->first_delta).value;
          uVar9 = (param_1->first_delta).version;
        } while (uVar9 != uVar11);
        uVar12 = uVar13;
        if (uVar7 < uVar13) {
          uVar12 = uVar7;
        }
      } while (uVar11 == 0xffffffffffffffff);
      if ((uVar11 & 1) == 0) {
        uVar9 = uVar11;
        if (uVar7 <= uVar13) break;
      }
      else {
        uVar9 = uVar11 + 1;
      }
      LOCK();
      pVar5.version = uVar11;
      pVar5.value = uVar7;
      bVar14 = pVar5 == param_1->first_delta;
      if (bVar14) {
        (param_1->first_delta).value = uVar12;
        (param_1->first_delta).version = uVar9;
      }
      UNLOCK();
    } while (!bVar14);
  }
  pas_scavenger_did_create_eligible();
  return;
}

// pas_page_sharing_pool_verify @ 140d702a0

void __cdecl pas_page_sharing_pool_verify(pas_page_sharing_pool *param_1,pas_lock_hold_mode param_2)

{
  pas_page_sharing_participant_opaque *ppVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  pas_page_sharing_participant_payload *ppVar5;
  pas_page_sharing_pool *ppVar6;
  ulong64 uVar7;
  pas_page_sharing_participant_payload *ppVar8;
  longlong lVar9;
  pas_page_sharing_participant_opaque **pppVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  pas_page_sharing_participant_opaque **pppVar14;
  longlong lVar15;
  
  if (param_2 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  uVar13 = (ulonglong)(param_1->participants).size;
  if (uVar13 == 0) {
    if ((param_1->first_delta).value != 0) goto LAB_140d707b9;
  }
  else {
    uVar11 = (ulonglong)(param_1->delta).spine.payload;
    lVar9 = pas_compact_heap_reservation_base + uVar11 * 8;
    if (uVar11 == 0) {
      lVar9 = 0;
    }
    uVar11 = 0;
    do {
      uVar12 = (ulonglong)*(uint *)(lVar9 + (uVar11 >> 7) * 4);
      lVar15 = pas_compact_heap_reservation_base + uVar12 * 8;
      if (uVar12 == 0) {
        lVar15 = 0;
      }
      uVar12 = uVar11;
    } while (((*(uint *)(lVar15 + (ulonglong)((uint)(uVar11 >> 3) & 0xc)) >> ((uint)uVar11 & 0x1f) &
              1) == 0) && (uVar11 = uVar11 + 1, uVar12 = uVar13, uVar13 != uVar11));
    if (uVar12 != (param_1->first_delta).value) {
LAB_140d707b9:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar13 = 0;
    do {
      uVar11 = (ulonglong)(param_1->participants).spine.payload;
      lVar9 = pas_compact_heap_reservation_base + uVar11 * 8;
      if (uVar11 == 0) {
        lVar9 = 0;
      }
      uVar11 = (ulonglong)*(uint *)(lVar9 + (uVar13 & 0xfffffffffffffffc));
      lVar9 = pas_compact_heap_reservation_base + uVar11 * 8;
      if (uVar11 == 0) {
        lVar9 = 0;
      }
      ppVar1 = *(pas_page_sharing_participant_opaque **)(lVar9 + (ulonglong)((uint)uVar13 & 3) * 8);
      if (ppVar1 == (pas_page_sharing_participant_opaque *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      ppVar5 = pas_page_sharing_participant_get_payload(ppVar1);
      ppVar6 = pas_page_sharing_participant_get_parent_pool(ppVar1);
      if (ppVar6 != param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar13 != ppVar5->index_in_sharing_pool) {
        pas_log("Verifying participants in pool %p.\n");
        if ((~(uint)ppVar1 & 6) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pas_log("participant = %p (%s).\n");
        pas_log("payload = %p.\n");
        pas_log("payload->index_in_sharing_pool = %u, index = %zu.\n");
        if (uVar13 != ppVar5->index_in_sharing_pool) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      uVar11 = (ulonglong)ppVar5->index_in_sharing_pool_min_heap;
      if (uVar11 != 0) {
        if ((param_1->participant_by_epoch).size < uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar11 - 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pppVar10 = (param_1->participant_by_epoch).inline_array;
        if (uVar11 != 1) {
          pppVar10 = (param_1->participant_by_epoch).outline_array + (uVar11 - 2);
        }
        if (*pppVar10 != ppVar1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      if (ppVar5->delta_has_been_noted == true) {
        uVar11 = (ulonglong)(param_1->delta).spine.payload;
        lVar9 = pas_compact_heap_reservation_base + uVar11 * 8;
        if (uVar11 == 0) {
          lVar9 = 0;
        }
        uVar11 = (ulonglong)*(uint *)(lVar9 + (uVar13 >> 7) * 4);
        lVar9 = pas_compact_heap_reservation_base + uVar11 * 8;
        if (uVar11 == 0) {
          lVar9 = 0;
        }
        if ((*(uint *)(lVar9 + (ulonglong)((uint)(uVar13 >> 3) & 0xc)) >> ((uint)uVar13 & 0x1f) & 1)
            == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      else {
        uVar7 = pas_page_sharing_participant_get_use_epoch(ppVar1);
        if (uVar7 < ppVar5->use_epoch_for_min_heap) {
          pas_log("Bad epoch: epoch = %llu, epoch_for_min_heap = %llu\n");
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        bVar4 = pas_page_sharing_participant_is_eligible(ppVar1);
        if ((bVar4) && (ppVar5->index_in_sharing_pool_min_heap == 0)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (param_1->participants).size);
  }
  if ((param_1->participant_by_epoch).size != 0) {
    if ((param_1->participant_by_epoch).outline_capacity == 0xffffffffffffffff) {
LAB_140d707a9:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pppVar10 = (param_1->participant_by_epoch).inline_array;
    ppVar1 = *pppVar10;
    ppVar5 = pas_page_sharing_participant_get_payload(ppVar1);
    if (ppVar5->index_in_sharing_pool_min_heap != 1) {
LAB_140d707ab:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    ppVar5 = pas_page_sharing_participant_get_payload(ppVar1);
    uVar11 = (ulonglong)ppVar5->index_in_sharing_pool_min_heap;
    uVar13 = (param_1->participant_by_epoch).size;
    if (1 < uVar11) {
      uVar12 = (ulonglong)(ppVar5->index_in_sharing_pool_min_heap >> 1);
      if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar12 - 1) {
LAB_140d707b1:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pppVar14 = pppVar10;
      if (uVar12 != 1) {
        pppVar14 = (param_1->participant_by_epoch).outline_array + (uVar12 - 2);
      }
      ppVar5 = pas_page_sharing_participant_get_payload(ppVar1);
      ppVar8 = pas_page_sharing_participant_get_payload(*pppVar14);
      if (ppVar5->use_epoch_for_min_heap < ppVar8->use_epoch_for_min_heap) goto LAB_140d707bb;
    }
    uVar12 = uVar11 * 2;
    if (uVar12 <= uVar13) {
      if (uVar11 == 0) {
LAB_140d707b3:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar12 - 1) {
LAB_140d707b5:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pppVar14 = (param_1->participant_by_epoch).outline_array;
      ppVar5 = pas_page_sharing_participant_get_payload(ppVar1);
      ppVar8 = pas_page_sharing_participant_get_payload(pppVar14[uVar11 * 2 + -2]);
      if (ppVar8->use_epoch_for_min_heap < ppVar5->use_epoch_for_min_heap) goto LAB_140d707bb;
    }
    if (uVar12 < uVar13) {
      if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar12) {
LAB_140d707b7:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pppVar14 = pppVar10;
      if (uVar11 != 0) {
        pppVar14 = (param_1->participant_by_epoch).outline_array + uVar11 * 2 + -1;
      }
      ppVar5 = pas_page_sharing_participant_get_payload(ppVar1);
      ppVar8 = pas_page_sharing_participant_get_payload(*pppVar14);
      if (ppVar8->use_epoch_for_min_heap < ppVar5->use_epoch_for_min_heap) {
LAB_140d707bb:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    if (1 < (param_1->participant_by_epoch).size) {
      uVar13 = 1;
      do {
        if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar13) goto LAB_140d707a9;
        ppVar1 = (param_1->participant_by_epoch).outline_array[uVar13 - 1];
        uVar13 = uVar13 + 1;
        ppVar5 = pas_page_sharing_participant_get_payload(ppVar1);
        if (uVar13 != ppVar5->index_in_sharing_pool_min_heap) goto LAB_140d707ab;
        ppVar5 = pas_page_sharing_participant_get_payload(ppVar1);
        uVar12 = (ulonglong)ppVar5->index_in_sharing_pool_min_heap;
        uVar11 = (param_1->participant_by_epoch).size;
        if (1 < uVar12) {
          uVar3 = (ulonglong)(ppVar5->index_in_sharing_pool_min_heap >> 1);
          if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar3 - 1) goto LAB_140d707b1;
          pppVar14 = pppVar10;
          if (uVar3 != 1) {
            pppVar14 = (param_1->participant_by_epoch).outline_array + (uVar3 - 2);
          }
          ppVar5 = pas_page_sharing_participant_get_payload(ppVar1);
          ppVar8 = pas_page_sharing_participant_get_payload(*pppVar14);
          if (ppVar5->use_epoch_for_min_heap < ppVar8->use_epoch_for_min_heap) goto LAB_140d707bb;
        }
        uVar3 = uVar12 * 2;
        if (uVar3 <= uVar11) {
          if (uVar12 == 0) goto LAB_140d707b3;
          if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar3 - 1) goto LAB_140d707b5;
          pppVar14 = (param_1->participant_by_epoch).outline_array;
          ppVar5 = pas_page_sharing_participant_get_payload(ppVar1);
          ppVar8 = pas_page_sharing_participant_get_payload(pppVar14[uVar12 * 2 + -2]);
          if (ppVar8->use_epoch_for_min_heap < ppVar5->use_epoch_for_min_heap) goto LAB_140d707bb;
        }
        if (uVar3 < uVar11) {
          if ((param_1->participant_by_epoch).outline_capacity + 1 <= uVar3) goto LAB_140d707b7;
          pppVar14 = pppVar10;
          if (uVar12 != 0) {
            pppVar14 = (param_1->participant_by_epoch).outline_array + uVar12 * 2 + -1;
          }
          ppVar5 = pas_page_sharing_participant_get_payload(ppVar1);
          ppVar8 = pas_page_sharing_participant_get_payload(*pppVar14);
          if (ppVar8->use_epoch_for_min_heap < ppVar5->use_epoch_for_min_heap) goto LAB_140d707bb;
        }
      } while (uVar13 < (param_1->participant_by_epoch).size);
    }
  }
  if (param_2 == pas_lock_is_not_held) {
                    /* WARNING: Could not recover jumptable at 0x000140d70798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    return;
  }
  return;
}

// pas_page_sharing_pool_has_delta @ 140d707e0

bool __cdecl pas_page_sharing_pool_has_delta(pas_page_sharing_pool *param_1)

{
  return (param_1->first_delta).value < (ulonglong)(param_1->participants).size;
}

// pas_page_sharing_pool_has_current_participant @ 140d707f0

bool __cdecl pas_page_sharing_pool_has_current_participant(pas_page_sharing_pool *param_1)

{
  return param_1->current_participant != (pas_page_sharing_participant_opaque *)0x0;
}

// pas_page_sharing_pool_min_heap_remove @ 140d70800

void __cdecl
pas_page_sharing_pool_min_heap_remove
          (pas_page_sharing_pool_min_heap *param_1,pas_page_sharing_participant_opaque *param_2)

{
  uint uVar1;
  pas_page_sharing_participant_opaque *ppVar2;
  pas_page_sharing_participant_opaque *ppVar3;
  pas_page_sharing_participant_opaque *ppVar4;
  longlong lVar5;
  code *pcVar6;
  pas_page_sharing_participant_payload *ppVar7;
  pas_page_sharing_participant_opaque **pppVar8;
  pas_page_sharing_participant_payload *ppVar9;
  pas_page_sharing_participant_opaque **pppVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  pas_page_sharing_participant_opaque *ppVar14;
  bool bVar15;
  
  ppVar7 = pas_page_sharing_participant_get_payload(param_2);
  uVar1 = ppVar7->index_in_sharing_pool_min_heap;
  uVar12 = (ulonglong)uVar1;
  if (uVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar11 = param_1->outline_capacity + 1;
  if (uVar11 <= uVar12 - 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (uVar12 == 1) {
    ppVar2 = param_1->inline_array[0];
  }
  else {
    ppVar2 = param_1->outline_array[uVar12 - 2];
  }
  if (ppVar2 != param_2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar13 = param_1->size;
  if (uVar13 < uVar12) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (uVar12 == 1) {
    pppVar8 = param_1->inline_array;
  }
  else {
    pppVar8 = param_1->outline_array + (uVar12 - 2);
  }
  if (uVar11 <= uVar13 - 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar11 = uVar13 - 1;
  if (uVar11 == 0) {
    pppVar10 = param_1->inline_array;
  }
  else {
    pppVar10 = param_1->outline_array + (uVar13 - 2);
  }
  ppVar2 = *pppVar8;
  ppVar3 = *pppVar10;
  *pppVar10 = (pas_page_sharing_participant_opaque *)0x0;
  if (param_1->outline_capacity + 1 <= uVar12 - 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (uVar12 == 1) {
    param_1->inline_array[0] = (pas_page_sharing_participant_opaque *)0x0;
    param_1->size = uVar11;
    if (uVar13 == 1) goto LAB_140d70c32;
LAB_140d70a10:
    pppVar8 = param_1->inline_array;
    uVar13 = uVar12 * 2;
    lVar5 = uVar13 - uVar11;
    bVar15 = false;
    if (uVar13 < uVar11) goto LAB_140d70a50;
LAB_140d70a30:
    if (bVar15 || lVar5 == 0) {
      bVar15 = true;
      ppVar14 = (pas_page_sharing_participant_opaque *)0x0;
      do {
        if (uVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        if (param_1->outline_capacity + 1 <= uVar13 - 1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        ppVar4 = param_1->outline_array[uVar13 - 2];
        ppVar7 = pas_page_sharing_participant_get_payload(ppVar3);
        ppVar9 = pas_page_sharing_participant_get_payload(ppVar4);
        if (bVar15) {
          if (ppVar7->use_epoch_for_min_heap <= ppVar9->use_epoch_for_min_heap) break;
LAB_140d70b90:
          if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          ppVar7 = pas_page_sharing_participant_get_payload(ppVar4);
          ppVar7->index_in_sharing_pool_min_heap = (uint)uVar12;
          if (param_1->outline_capacity + 1 <= uVar12 - 1) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          pppVar10 = pppVar8;
          if (uVar12 != 1) {
            pppVar10 = param_1->outline_array + (uVar12 - 2);
          }
          *pppVar10 = ppVar4;
          lVar5 = uVar13 * 2 - uVar11;
          uVar12 = uVar13;
          uVar13 = uVar13 * 2;
        }
        else {
          if (ppVar9->use_epoch_for_min_heap < ppVar7->use_epoch_for_min_heap) {
            ppVar7 = pas_page_sharing_participant_get_payload(ppVar14);
            ppVar9 = pas_page_sharing_participant_get_payload(ppVar4);
            if (ppVar9->use_epoch_for_min_heap <= ppVar7->use_epoch_for_min_heap)
            goto LAB_140d70b90;
          }
          if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          ppVar7 = pas_page_sharing_participant_get_payload(ppVar14);
          ppVar7->index_in_sharing_pool_min_heap = (uint)uVar12;
          if (param_1->outline_capacity + 1 <= uVar12 - 1) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          pppVar10 = pppVar8;
          if (uVar12 != 1) {
            pppVar10 = param_1->outline_array + (uVar12 - 2);
          }
          uVar12 = uVar12 * 2 + 1;
          *pppVar10 = ppVar14;
          uVar13 = uVar12 * 2;
          lVar5 = uVar13 - uVar11;
        }
        bVar15 = uVar13 < uVar11;
        if (!bVar15) goto LAB_140d70a30;
LAB_140d70a50:
        if (param_1->outline_capacity + 1 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        pppVar10 = pppVar8;
        if (uVar13 != 0) {
          pppVar10 = param_1->outline_array + (uVar13 - 1);
        }
        ppVar14 = *pppVar10;
        ppVar7 = pas_page_sharing_participant_get_payload(ppVar3);
        ppVar9 = pas_page_sharing_participant_get_payload(ppVar14);
        bVar15 = ppVar7->use_epoch_for_min_heap <= ppVar9->use_epoch_for_min_heap;
      } while( true );
    }
  }
  else {
    param_1->outline_array[uVar12 - 2] = (pas_page_sharing_participant_opaque *)0x0;
    param_1->size = uVar11;
    if (uVar13 == uVar12) goto LAB_140d70c32;
    uVar13 = (ulonglong)(uVar1 >> 1);
    if (param_1->outline_capacity + 1 <= uVar13 - 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (uVar13 == 1) {
      pppVar8 = param_1->inline_array;
    }
    else {
      pppVar8 = param_1->outline_array + (uVar13 - 2);
    }
    ppVar14 = *pppVar8;
    ppVar7 = pas_page_sharing_participant_get_payload(ppVar3);
    ppVar9 = pas_page_sharing_participant_get_payload(ppVar14);
    if (ppVar9->use_epoch_for_min_heap <= ppVar7->use_epoch_for_min_heap) goto LAB_140d70a10;
    uVar11 = uVar12;
    do {
      uVar12 = uVar13;
      ppVar7 = pas_page_sharing_participant_get_payload(ppVar14);
      ppVar7->index_in_sharing_pool_min_heap = (uint)uVar11;
      if (param_1->outline_capacity + 1 <= uVar11 - 1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      param_1->outline_array[uVar11 - 2] = ppVar14;
      if (uVar12 == 1) {
        uVar12 = 1;
        break;
      }
      uVar13 = uVar12 >> 1;
      if (param_1->outline_capacity + 1 <= uVar13 - 1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      pppVar8 = param_1->inline_array;
      if (uVar13 != 1) {
        pppVar8 = param_1->outline_array + (uVar13 - 2);
      }
      ppVar14 = *pppVar8;
      ppVar7 = pas_page_sharing_participant_get_payload(ppVar3);
      ppVar9 = pas_page_sharing_participant_get_payload(ppVar14);
      uVar11 = uVar12;
    } while (ppVar7->use_epoch_for_min_heap < ppVar9->use_epoch_for_min_heap);
  }
  if (param_1->outline_capacity + 1 <= uVar12 - 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (uVar12 == 1) {
    param_1->inline_array[0] = ppVar3;
  }
  else {
    param_1->outline_array[uVar12 - 2] = ppVar3;
    if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
  }
  ppVar7 = pas_page_sharing_participant_get_payload(ppVar3);
  ppVar7->index_in_sharing_pool_min_heap = (uint)uVar12;
LAB_140d70c32:
  ppVar7 = pas_page_sharing_participant_get_payload(ppVar2);
  ppVar7->index_in_sharing_pool_min_heap = 0;
  return;
}


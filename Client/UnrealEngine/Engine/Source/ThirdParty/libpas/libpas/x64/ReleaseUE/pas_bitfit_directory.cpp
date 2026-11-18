// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 17

// pas_bitfit_directory_construct @ 140d86370

void __cdecl
pas_bitfit_directory_construct
          (pas_bitfit_directory *param_1,pas_bitfit_page_config *param_2,
          pas_segregated_heap *param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  pas_page_sharing_participant_opaque *ppVar4;
  
  (param_1->largest_size_class).payload = 0;
  (param_1->first_unprocessed_free).value = 0;
  (param_1->first_unprocessed_free).version = 0;
  (param_1->first_empty).value = 0;
  (param_1->first_empty).version = 0;
  (param_1->max_frees).spine = 0;
  (param_1->max_frees).size = 0;
  *(undefined8 *)&(param_1->max_frees).spine_size = 0;
  (param_1->views).size = 0;
  (param_1->views).spine_size = 0;
  uVar3 = pas_bitfit_page_config_kind_null;
  if ((param_2->base).is_enabled == true) {
    uVar3 = (undefined1)param_2->kind;
  }
  param_1->config_kind = uVar3;
  param_1->heap = param_3;
  (param_1->bitvectors).spine = 0;
  (param_1->bitvectors).size = 0;
  (param_1->bitvectors).spine_size = 0;
  pas_page_sharing_participant_payload_construct(&param_1->physical_sharing_payload);
  if (((param_2->base).is_enabled != true) ||
     (bVar1 = param_1->heap->runtime_config->sharing_mode, bVar1 == 1)) {
    return;
  }
  if (bVar1 == 2) {
    ppVar4 = pas_page_sharing_participant_create
                       (param_1,pas_page_sharing_participant_bitfit_directory);
    pas_page_sharing_pool_add(&pas_physical_page_sharing_pool,ppVar4);
    return;
  }
  if (bVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_bitfit_directory_does_sharing @ 140d86420

bool __cdecl pas_bitfit_directory_does_sharing(pas_bitfit_directory *param_1)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = param_1->heap->runtime_config->sharing_mode;
  if (bVar1 == 1) {
    return false;
  }
  if (bVar1 == 2) {
    return true;
  }
  if (bVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_bitfit_directory_max_free_did_become_unprocessed @ 140d86450

void __cdecl
pas_bitfit_directory_max_free_did_become_unprocessed
          (pas_bitfit_directory *param_1,ulong64 param_2,char *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((param_1->max_frees).size <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar2 = (ulonglong)(param_1->max_frees).spine.payload;
  uVar3 = (ulonglong)((uint)param_2 & 0x7f);
  lVar4 = pas_compact_heap_reservation_base + uVar2 * 8;
  if (uVar2 == 0) {
    lVar4 = 0;
  }
  uVar2 = (ulonglong)*(uint *)(lVar4 + (param_2 >> 7) * 4);
  lVar4 = pas_compact_heap_reservation_base + uVar2 * 8;
  if (uVar2 == 0) {
    lVar4 = 0;
  }
  if (*(char *)(lVar4 + uVar3) == -1) {
    pas_log("%p:%zu: found empty when setting max_free\n");
    if (*(char *)(lVar4 + uVar3) == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  *(undefined1 *)(lVar4 + uVar3) = 0xfe;
  pas_versioned_field_minimize(&param_1->first_unprocessed_free,param_2);
  return;
}

// pas_bitfit_directory_max_free_did_become_unprocessed_unchecked @ 140d864e0

void __cdecl
pas_bitfit_directory_max_free_did_become_unprocessed_unchecked
          (pas_bitfit_directory *param_1,ulong64 param_2,char *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 < (param_1->max_frees).size) {
    uVar2 = (ulonglong)(param_1->max_frees).spine.payload;
    lVar3 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    uVar2 = (ulonglong)*(uint *)(lVar3 + (param_2 >> 7) * 4);
    lVar3 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    *(undefined1 *)(lVar3 + (ulonglong)((uint)param_2 & 0x7f)) = 0xfe;
    pas_versioned_field_minimize(&param_1->first_unprocessed_free,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_bitfit_directory_max_free_did_become_empty @ 140d86530

void __cdecl
pas_bitfit_directory_max_free_did_become_empty
          (pas_bitfit_directory *param_1,ulong64 param_2,char *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 < (param_1->max_frees).size) {
    uVar2 = (ulonglong)(param_1->max_frees).spine.payload;
    lVar3 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    uVar2 = (ulonglong)*(uint *)(lVar3 + (param_2 >> 7) * 4);
    lVar3 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    *(undefined1 *)(lVar3 + (ulonglong)((uint)param_2 & 0x7f)) = 0xff;
    pas_versioned_field_minimize(&param_1->first_empty,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_bitfit_directory_get_first_free_view @ 140d86580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_bitfit_view_and_index * __cdecl
pas_bitfit_directory_get_first_free_view
          (pas_bitfit_view_and_index *__return_storage_ptr__,pas_bitfit_directory *param_1,
          uint param_2,uint param_3,pas_bitfit_page_config *param_4)

{
  pas_versioned_field *ppVar1;
  uint *puVar2;
  pas_versioned_field pVar3;
  byte bVar4;
  code *pcVar5;
  pas_versioned_field pVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  pas_bitfit_view *ppVar10;
  longlong lVar11;
  pas_bitfit_view_and_index *ppVar12;
  undefined8 *puVar13;
  void *pvVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  void *pvVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 local_a8 [40];
  ulonglong local_80;
  ulonglong local_78;
  pas_bitfit_view_and_index *local_70;
  uint local_64;
  ulonglong local_60;
  pas_versioned_field local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_a8;
  if ((param_4->base).is_enabled != true) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_60 = (ulonglong)(param_2 & 0x7f);
  ppVar1 = &param_1->first_empty;
  local_64 = param_3;
  do {
    uVar9 = (param_1->max_frees).size;
    local_80 = (ulonglong)uVar9;
    uVar7 = local_64 >> ((param_4->base).min_align_shift & 0x1f);
    uVar8 = (param_1->max_frees).size;
    uVar20 = (ulonglong)uVar8;
    uVar18 = (ulonglong)(param_1->max_frees).spine.payload;
    lVar11 = pas_compact_heap_reservation_base + uVar18 * 8;
    if (uVar18 == 0) {
      lVar11 = 0;
    }
    uVar18 = (ulonglong)(param_2 & 0xffffff80);
    uVar19 = (ulonglong)(param_2 >> 7);
    uVar24 = local_60;
    if ((param_2 & 0xffffff80) < uVar8) {
      do {
        uVar16 = (ulonglong)*(uint *)(lVar11 + uVar19 * 4);
        lVar21 = pas_compact_heap_reservation_base + uVar16 * 8;
        if (uVar16 == 0) {
          lVar21 = 0;
        }
        uVar23 = uVar20 - uVar18;
        uVar16 = 0x80;
        if (uVar23 < 0x80) {
          uVar16 = uVar23;
        }
        if (uVar24 < uVar23) {
          do {
            bVar4 = *(byte *)(lVar21 + uVar24);
            if ((bVar4 != 0xff) && (uVar7 < bVar4 || uVar7 == bVar4)) {
              uVar18 = uVar18 + uVar24;
              if ((param_1->views).size <= uVar18) goto LAB_140d86eb1;
              goto LAB_140d8680c;
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < uVar16);
        }
        uVar18 = uVar18 + 0x80;
        uVar19 = uVar19 + 1;
        uVar24 = 0;
      } while (uVar18 < uVar20);
    }
    do {
      uVar18 = (param_1->first_empty).version;
      do {
        uVar24 = uVar18;
        uVar19 = (param_1->first_empty).value;
        uVar18 = (param_1->first_empty).version;
      } while (uVar18 != uVar24);
      uVar16 = uVar24;
      if ((uVar24 & 1) != 0) break;
      uVar16 = uVar24 | 1;
      LOCK();
      pVar3 = *ppVar1;
      pVar6.version = uVar24;
      pVar6.value = uVar19;
      if (pVar6 == pVar3) {
        ppVar1->value = uVar19;
        (param_1->first_empty).version = uVar16;
      }
      UNLOCK();
    } while (pVar6 != pVar3);
    if (uVar19 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar24 = (ulonglong)(param_1->max_frees).size;
    uVar18 = (ulonglong)(param_1->max_frees).spine.payload;
    lVar11 = pas_compact_heap_reservation_base + uVar18 * 8;
    if (uVar18 == 0) {
      lVar11 = 0;
    }
    uVar18 = (ulonglong)((uint)uVar19 & 0xffffff80);
    local_78 = uVar20;
    local_70 = __return_storage_ptr__;
    local_58.value = uVar19;
    local_58.version = uVar16;
    if (uVar18 < uVar24) {
      uVar20 = (ulonglong)((uint)uVar19 & 0x7f);
      uVar19 = uVar19 >> 7;
      do {
        uVar16 = (ulonglong)*(uint *)(lVar11 + uVar19 * 4);
        lVar21 = pas_compact_heap_reservation_base + uVar16 * 8;
        if (uVar16 == 0) {
          lVar21 = 0;
        }
        uVar23 = uVar24 - uVar18;
        uVar16 = 0x80;
        if (uVar23 < 0x80) {
          uVar16 = uVar23;
        }
        if (uVar20 < uVar23) {
          do {
            if (*(char *)(lVar21 + uVar20) == -1) {
              uVar18 = uVar18 + uVar20;
              pas_versioned_field_maximize_watched(ppVar1,&local_58,uVar18);
              __return_storage_ptr__ = local_70;
              if ((param_1->views).size <= uVar18) goto LAB_140d86eb1;
              goto LAB_140d8680c;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar16);
        }
        uVar19 = uVar19 + 1;
        uVar18 = uVar19 * 0x80;
        uVar20 = 0;
      } while (uVar18 < uVar24);
    }
    pas_versioned_field_maximize_watched(ppVar1,&local_58,local_80);
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    __return_storage_ptr__ = local_70;
    if (uVar9 == (param_1->max_frees).size) {
      if (uVar9 != (param_1->views).size) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar7 = uVar9 + 7 >> 3;
      uVar8 = (param_1->views).spine_size;
      if (uVar8 < uVar7) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar22 = uVar9 >> 3;
      uVar20 = (ulonglong)(param_1->views).spine.payload;
      pvVar17 = (void *)(pas_compact_heap_reservation_base + uVar20 * 8);
      if (uVar20 == 0) {
        pvVar17 = (void *)0x0;
      }
      if (uVar8 <= uVar22) {
        lVar11 = (ulonglong)uVar8 * 2 + 2;
        pvVar14 = pas_immortal_heap_allocate
                            ((ulonglong)uVar8 * 8 + 8,"pas_bitfit_directory_view_vector/spine",
                             pas_object_allocation);
        if (7 < uVar9 + 7) {
          memcpy(pvVar14,pvVar17,(ulonglong)(uVar7 * 4));
        }
        uVar9 = 0;
        memset((void *)((longlong)pvVar14 + (ulonglong)uVar7 * 4),0,(lVar11 - (ulonglong)uVar7) * 4)
        ;
        LOCK();
        UNLOCK();
        if (pvVar14 != (void *)0x0) {
          uVar20 = (longlong)pvVar14 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar20) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar20 < 8) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar9 = (uint)(uVar20 >> 3);
        }
        (param_1->views).spine.payload = uVar9;
        LOCK();
        UNLOCK();
        (param_1->views).spine_size = (uint)lVar11;
        pvVar17 = pvVar14;
      }
      uVar18 = (ulonglong)((uint)local_80 & 7);
      uVar9 = *(uint *)((longlong)pvVar17 + (ulonglong)uVar22 * 4);
      uVar20 = (ulonglong)uVar9;
      if (uVar22 == uVar7) {
        if ((uVar9 != 0) && (pas_compact_heap_reservation_base != uVar20 * -8)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar18 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        puVar13 = pas_immortal_heap_allocate_with_alignment
                            (0x20,4,"pas_bitfit_directory_view_vector/segment",pas_object_allocation
                            );
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        LOCK();
        UNLOCK();
        uVar20 = (longlong)puVar13 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar20 < 8) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar20 = uVar20 >> 3;
        *(int *)((longlong)pvVar17 + (ulonglong)uVar22 * 4) = (int)uVar20;
      }
      lVar11 = 0;
      if ((int)uVar20 != 0) {
        lVar11 = pas_compact_heap_reservation_base + (uVar20 & 0xffffffff) * 8;
      }
      *(undefined4 *)(lVar11 + uVar18 * 4) = 0;
      LOCK();
      UNLOCK();
      puVar2 = &(param_1->views).size;
      *puVar2 = *puVar2 + 1;
      if (*puVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar9 = (param_1->max_frees).size;
      uVar8 = (param_1->max_frees).spine_size;
      uVar7 = uVar9 + 0x7f >> 7;
      if (uVar8 < uVar7) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar22 = uVar9 >> 7;
      uVar20 = (ulonglong)(param_1->max_frees).spine.payload;
      pvVar17 = (void *)(pas_compact_heap_reservation_base + uVar20 * 8);
      if (uVar20 == 0) {
        pvVar17 = (void *)0x0;
      }
      if (uVar8 <= uVar22) {
        local_80 = (ulonglong)uVar8 * 2 + 2;
        pvVar14 = pas_immortal_heap_allocate
                            ((ulonglong)uVar8 * 8 + 8,"pas_bitfit_directory_max_free_vector/spine",
                             pas_object_allocation);
        if (0x7f < uVar9 + 0x7f) {
          memcpy(pvVar14,pvVar17,(ulonglong)(uVar7 * 4));
        }
        uVar8 = 0;
        memset((void *)((longlong)pvVar14 + (ulonglong)uVar7 * 4),0,(local_80 - uVar7) * 4);
        LOCK();
        UNLOCK();
        if (pvVar14 != (void *)0x0) {
          uVar20 = (longlong)pvVar14 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar20) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar20 < 8) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar8 = (uint)(uVar20 >> 3);
        }
        (param_1->max_frees).spine.payload = uVar8;
        LOCK();
        UNLOCK();
        (param_1->max_frees).spine_size = (uint)local_80;
        pvVar17 = pvVar14;
      }
      uVar18 = local_78;
      uVar8 = *(uint *)((longlong)pvVar17 + (ulonglong)uVar22 * 4);
      uVar20 = (ulonglong)uVar8;
      if (uVar22 == uVar7) {
        if ((uVar8 != 0) && (pas_compact_heap_reservation_base != uVar20 * -8)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if ((ulonglong)(uVar9 & 0x7f) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        puVar13 = pas_immortal_heap_allocate_with_alignment
                            (0x80,1,"pas_bitfit_directory_max_free_vector/segment",
                             pas_object_allocation);
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[0xc] = 0;
        puVar13[0xd] = 0;
        puVar13[0xe] = 0;
        puVar13[0xf] = 0;
        LOCK();
        UNLOCK();
        uVar20 = (longlong)puVar13 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar20 < 8) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar20 = uVar20 >> 3;
        *(int *)((longlong)pvVar17 + (ulonglong)uVar22 * 4) = (int)uVar20;
      }
      lVar11 = 0;
      if ((int)uVar20 != 0) {
        lVar11 = pas_compact_heap_reservation_base + (uVar20 & 0xffffffff) * 8;
      }
      *(undefined1 *)(lVar11 + (ulonglong)(uVar9 & 0x7f)) = 0xff;
      LOCK();
      UNLOCK();
      puVar2 = &(param_1->max_frees).size;
      *puVar2 = *puVar2 + 1;
      if (*puVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar9 = (param_1->bitvectors).size;
      uVar8 = (param_1->views).size + 0x1f >> 5;
      if (uVar8 != uVar9) {
        if (uVar8 != uVar9 + 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar7 = uVar9 + 3 >> 2;
        uVar8 = (param_1->bitvectors).spine_size;
        if (uVar8 < uVar7) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar22 = uVar9 >> 2;
        uVar20 = (ulonglong)(param_1->bitvectors).spine.payload;
        pvVar17 = (void *)(pas_compact_heap_reservation_base + uVar20 * 8);
        if (uVar20 == 0) {
          pvVar17 = (void *)0x0;
        }
        if (uVar8 <= uVar22) {
          local_80 = (ulonglong)uVar8 * 2 + 2;
          pvVar14 = pas_immortal_heap_allocate
                              ((ulonglong)uVar8 * 8 + 8,
                               "pas_bitfit_directory_segmented_bitvectors/spine",
                               pas_object_allocation);
          if (3 < uVar9 + 3) {
            memcpy(pvVar14,pvVar17,(ulonglong)(uVar7 * 4));
          }
          uVar8 = 0;
          memset((void *)((longlong)pvVar14 + (ulonglong)uVar7 * 4),0,(local_80 - uVar7) * 4);
          LOCK();
          UNLOCK();
          if (pvVar14 != (void *)0x0) {
            uVar20 = (longlong)pvVar14 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar20) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if (uVar20 < 8) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar8 = (uint)(uVar20 >> 3);
          }
          (param_1->bitvectors).spine.payload = uVar8;
          LOCK();
          UNLOCK();
          (param_1->bitvectors).spine_size = (uint)local_80;
          pvVar17 = pvVar14;
        }
        uVar18 = local_78;
        uVar8 = *(uint *)((longlong)pvVar17 + (ulonglong)uVar22 * 4);
        uVar20 = (ulonglong)uVar8;
        if (uVar22 == uVar7) {
          if ((uVar8 != 0) && (pas_compact_heap_reservation_base != uVar20 * -8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar9 & 3) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          puVar13 = pas_immortal_heap_allocate_with_alignment
                              (0x10,4,"pas_bitfit_directory_segmented_bitvectors/segment",
                               pas_object_allocation);
          *puVar13 = 0;
          puVar13[1] = 0;
          LOCK();
          UNLOCK();
          uVar20 = (longlong)puVar13 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar20) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar20 < 8) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar20 = uVar20 >> 3;
          *(int *)((longlong)pvVar17 + (ulonglong)uVar22 * 4) = (int)uVar20;
        }
        lVar11 = 0;
        if ((int)uVar20 != 0) {
          lVar11 = pas_compact_heap_reservation_base + (uVar20 & 0xffffffff) * 8;
        }
        *(undefined4 *)(lVar11 + (ulonglong)(uVar9 & 3) * 4) = 0;
        LOCK();
        UNLOCK();
        uVar9 = (param_1->bitvectors).size + 1;
        (param_1->bitvectors).size = uVar9;
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if ((param_1->views).size + 0x1f >> 5 != uVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      if ((param_1->views).size <= uVar18) {
LAB_140d86eb1:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
LAB_140d8680c:
      uVar20 = (ulonglong)(param_1->views).spine.payload;
      uVar24 = uVar18 >> 3;
      uVar19 = (ulonglong)((uint)uVar18 & 7);
      lVar11 = pas_compact_heap_reservation_base + uVar20 * 8;
      if (uVar20 == 0) {
        lVar11 = 0;
      }
      uVar20 = (ulonglong)*(uint *)(lVar11 + uVar24 * 4);
      lVar11 = pas_compact_heap_reservation_base + uVar20 * 8;
      if (uVar20 == 0) {
        lVar11 = 0;
      }
      uVar20 = (ulonglong)*(uint *)(lVar11 + uVar19 * 4);
      ppVar10 = (pas_bitfit_view *)(pas_compact_heap_reservation_base + uVar20 * 8);
      if (ppVar10 == (pas_bitfit_view *)0x0 || uVar20 == 0) {
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if ((param_1->views).size <= uVar18) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar20 = (ulonglong)(param_1->views).spine.payload;
        lVar11 = pas_compact_heap_reservation_base + uVar20 * 8;
        if (uVar20 == 0) {
          lVar11 = 0;
        }
        uVar20 = (ulonglong)*(uint *)(lVar11 + uVar24 * 4);
        lVar11 = pas_compact_heap_reservation_base + uVar20 * 8;
        if (uVar20 == 0) {
          lVar11 = 0;
        }
        uVar20 = (ulonglong)*(uint *)(lVar11 + uVar19 * 4);
        ppVar10 = (pas_bitfit_view *)(pas_compact_heap_reservation_base + uVar20 * 8);
        if (ppVar10 == (pas_bitfit_view *)0x0 || uVar20 == 0) {
          ppVar10 = pas_bitfit_view_create(param_1,(uint)uVar18);
          if ((param_1->views).size <= uVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar20 = (ulonglong)(param_1->views).spine.payload;
          lVar11 = pas_compact_heap_reservation_base + uVar20 * 8;
          if (uVar20 == 0) {
            lVar11 = 0;
          }
          uVar20 = (ulonglong)*(uint *)(lVar11 + uVar24 * 4);
          lVar11 = pas_compact_heap_reservation_base + uVar20 * 8;
          if (uVar20 == 0) {
            lVar11 = 0;
          }
          if (ppVar10 == (pas_bitfit_view *)0x0) {
            uVar15 = 0;
          }
          else {
            uVar20 = (longlong)ppVar10 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar20) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if (uVar20 < 8) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar15 = (undefined4)(uVar20 >> 3);
          }
          *(undefined4 *)(lVar11 + uVar19 * 4) = uVar15;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      }
      __return_storage_ptr__->view = ppVar10;
      __return_storage_ptr__->index = uVar18;
      if ((local_48 ^ (ulonglong)local_a8) != __security_cookie.value) {
        pcVar5 = (code *)swi(3);
        ppVar12 = (pas_bitfit_view_and_index *)(*pcVar5)();
        return ppVar12;
      }
      return __return_storage_ptr__;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    __return_storage_ptr__ = local_70;
  } while( true );
}

// pas_bitfit_directory_compute_summary @ 140d86f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_bitfit_directory_compute_summary
          (pas_heap_summary *__return_storage_ptr__,pas_bitfit_directory *param_1)

{
  pas_bitfit_view *ppVar1;
  code *pcVar2;
  uint uVar3;
  pas_heap_summary *ppVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  undefined1 auStack_f8 [32];
  pas_heap_summary local_d8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_f8;
  __return_storage_ptr__->meta_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta_eligible_for_decommit = 0;
  __return_storage_ptr__->free_eligible_for_decommit = 0;
  __return_storage_ptr__->free_decommitted = 0;
  __return_storage_ptr__->decommitted = 0;
  __return_storage_ptr__->free_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta = 0;
  __return_storage_ptr__->committed = 0;
  __return_storage_ptr__->free = 0;
  __return_storage_ptr__->allocated = 0;
  __return_storage_ptr__->cached = 0;
  uVar3 = (param_1->views).size;
  if (uVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar10 = __return_storage_ptr__->allocated;
    uVar11 = __return_storage_ptr__->meta;
    uVar12 = __return_storage_ptr__->committed;
    uVar13 = __return_storage_ptr__->decommitted;
    uVar14 = __return_storage_ptr__->free_ineligible_for_decommit;
    uVar15 = __return_storage_ptr__->free_eligible_for_decommit;
    uVar16 = __return_storage_ptr__->free_decommitted;
    uVar17 = __return_storage_ptr__->meta_ineligible_for_decommit;
    uVar18 = __return_storage_ptr__->meta_eligible_for_decommit;
    uVar19 = __return_storage_ptr__->cached;
    uVar9 = 0;
    uVar8 = 0;
    uVar5 = pas_compact_heap_reservation_base;
    do {
      uVar6 = (ulonglong)(param_1->views).spine.payload;
      lVar7 = uVar5 + uVar6 * 8;
      if (uVar6 == 0) {
        lVar7 = 0;
      }
      uVar6 = (ulonglong)*(uint *)(lVar7 + (uVar9 >> 3) * 4);
      lVar7 = uVar5 + uVar6 * 8;
      if (uVar6 == 0) {
        lVar7 = 0;
      }
      uVar6 = (ulonglong)*(uint *)(lVar7 + (ulonglong)((uint)uVar9 & 7) * 4);
      if ((uVar6 != 0) &&
         (ppVar1 = (pas_bitfit_view *)(uVar5 + uVar6 * 8), ppVar1 != (pas_bitfit_view *)0x0)) {
        pas_bitfit_view_compute_summary(&local_d8,ppVar1);
        uVar8 = uVar8 + local_d8.free;
        uVar10 = uVar10 + local_d8.allocated;
        uVar11 = uVar11 + local_d8.meta;
        uVar12 = uVar12 + local_d8.committed;
        uVar13 = uVar13 + local_d8.decommitted;
        uVar14 = uVar14 + local_d8.free_ineligible_for_decommit;
        uVar15 = uVar15 + local_d8.free_eligible_for_decommit;
        uVar16 = uVar16 + local_d8.free_decommitted;
        uVar17 = uVar17 + local_d8.meta_ineligible_for_decommit;
        uVar18 = uVar18 + local_d8.meta_eligible_for_decommit;
        uVar19 = uVar19 + local_d8.cached;
        uVar3 = (param_1->views).size;
        uVar5 = pas_compact_heap_reservation_base;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
    __return_storage_ptr__->allocated = uVar10;
    __return_storage_ptr__->meta = uVar11;
    __return_storage_ptr__->committed = uVar12;
    __return_storage_ptr__->decommitted = uVar13;
    __return_storage_ptr__->free_ineligible_for_decommit = uVar14;
    __return_storage_ptr__->free_eligible_for_decommit = uVar15;
    __return_storage_ptr__->free_decommitted = uVar16;
    __return_storage_ptr__->meta_ineligible_for_decommit = uVar17;
    __return_storage_ptr__->meta_eligible_for_decommit = uVar18;
    __return_storage_ptr__->cached = uVar19;
  }
  __return_storage_ptr__->free = uVar8;
  if ((local_80 ^ (ulonglong)auStack_f8) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar2 = (code *)swi(3);
  ppVar4 = (pas_heap_summary *)(*pcVar2)();
  return ppVar4;
}

// pas_bitfit_directory_for_each_live_object @ 140d870f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_bitfit_directory_for_each_live_object
          (pas_bitfit_directory *param_1,
          _func___cdecl_bool_pas_bitfit_directory_ptr_pas_bitfit_view_ptr_ulong64_ulong64_void_ptr
          *param_2,void *param_3)

{
  pas_bitfit_view *ppVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  pas_bitfit_directory *local_48;
  _func___cdecl_bool_pas_bitfit_directory_ptr_pas_bitfit_view_ptr_ulong64_ulong64_void_ptr *local_40
  ;
  void *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar5 = (param_1->views).size;
  bVar8 = true;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  if (uVar5 != 0) {
    uVar10 = 0;
    uVar7 = pas_compact_heap_reservation_base;
    do {
      uVar6 = (ulonglong)(param_1->views).spine.payload;
      lVar9 = uVar7 + uVar6 * 8;
      if (uVar6 == 0) {
        lVar9 = 0;
      }
      uVar6 = (ulonglong)*(uint *)(lVar9 + (uVar10 >> 3) * 4);
      lVar9 = uVar7 + uVar6 * 8;
      if (uVar6 == 0) {
        lVar9 = 0;
      }
      uVar6 = (ulonglong)*(uint *)(lVar9 + (ulonglong)((uint)uVar10 & 7) * 4);
      if ((uVar6 != 0) &&
         (ppVar1 = (pas_bitfit_view *)(uVar7 + uVar6 * 8), ppVar1 != (pas_bitfit_view *)0x0)) {
        bVar3 = pas_bitfit_view_for_each_live_object
                          (ppVar1,bitfit_directory_for_each_live_object_callback,&local_48);
        if (!bVar3) {
          bVar8 = false;
          break;
        }
        uVar5 = (param_1->views).size;
        uVar7 = pas_compact_heap_reservation_base;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return bVar8;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// bitfit_directory_for_each_live_object_callback @ 140d871e0

bool __cdecl
bitfit_directory_for_each_live_object_callback
          (pas_bitfit_view *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)((longlong)param_4 + 8))
                    (*(undefined8 *)param_4,param_1,param_2,param_3,
                     *(undefined8 *)((longlong)param_4 + 0x10));
  return (bool)uVar1;
}

// pas_bitfit_directory_get_use_epoch @ 140d87210

ulong64 __cdecl pas_bitfit_directory_get_use_epoch(pas_bitfit_directory *param_1)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  _func___cdecl_pas_page_base_ptr_void_ptr *p_Var2;
  code *pcVar3;
  pas_page_base *ppVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  
  uVar8 = (param_1->last_empty_plus_one).value;
  if (uVar8 != 0) {
    p_Var2 = pas_bitfit_page_config_kind_for_config_table[(char)param_1->config_kind]->
             page_header_for_boundary;
    do {
      uVar9 = uVar8 - 1;
      if ((ulonglong)(param_1->bitvectors).size <= uVar9 >> 5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = (ulonglong)(param_1->bitvectors).spine.payload;
      lVar7 = pas_compact_heap_reservation_base + uVar5 * 8;
      if (uVar5 == 0) {
        lVar7 = 0;
      }
      uVar5 = (ulonglong)*(uint *)(lVar7 + (uVar9 >> 7) * 4);
      lVar7 = pas_compact_heap_reservation_base + uVar5 * 8;
      if (uVar5 == 0) {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + (ulonglong)((uint)(uVar9 >> 5) & 3) * 4) >>
           ((byte)((char)uVar8 - 1) & 0x1f) & 1) != 0) {
        if ((param_1->views).size <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = (ulonglong)(param_1->views).spine.payload;
        lVar7 = pas_compact_heap_reservation_base + uVar5 * 8;
        if (uVar5 == 0) {
          lVar7 = 0;
        }
        uVar5 = (ulonglong)*(uint *)(lVar7 + (uVar9 >> 3) * 4);
        lVar7 = pas_compact_heap_reservation_base + uVar5 * 8;
        if (uVar5 == 0) {
          lVar7 = 0;
        }
        uVar1 = *(uint *)(lVar7 + (ulonglong)((uint)uVar9 & 7) * 4);
        puVar6 = (undefined8 *)((ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base);
        if (puVar6 != (undefined8 *)0x0 && uVar1 != 0) {
          SRWLock = (PSRWLOCK)(puVar6 + 2);
          AcquireSRWLockExclusive(SRWLock);
          if ((*(char *)((longlong)puVar6 + 0xb) == '\x01') &&
             (ppVar4 = (*p_Var2)((void *)*puVar6), *(short *)(ppVar4 + 2) == 0)) {
            uVar8 = *(ulong64 *)(ppVar4 + 8);
            if (uVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            ReleaseSRWLockExclusive(SRWLock);
            return uVar8;
          }
          ReleaseSRWLockExclusive(SRWLock);
        }
      }
      uVar8 = uVar9;
    } while (uVar9 != 0);
  }
  return 0;
}

// pas_bitfit_directory_get_empty_bit_at_index @ 140d87380

bool __cdecl
pas_bitfit_directory_get_empty_bit_at_index(pas_bitfit_directory *param_1,ulong64 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 >> 5 < (ulonglong)(param_1->bitvectors).size) {
    uVar2 = (ulonglong)(param_1->bitvectors).spine.payload;
    lVar3 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    uVar2 = (ulonglong)*(uint *)(lVar3 + (param_2 >> 7) * 4);
    lVar3 = pas_compact_heap_reservation_base + uVar2 * 8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    return (*(uint *)(lVar3 + (ulonglong)((uint)(param_2 >> 5) & 3) * 4) >> ((uint)param_2 & 0x1f) &
           1) != 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_bitfit_directory_set_empty_bit_at_index @ 140d873e0

bool __cdecl
pas_bitfit_directory_set_empty_bit_at_index
          (pas_bitfit_directory *param_1,ulong64 param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  if ((ulonglong)(param_1->bitvectors).size <= param_2 >> 5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar5 = (ulonglong)(param_1->bitvectors).spine.payload;
  uVar7 = (ulonglong)((uint)(param_2 >> 5) & 3);
  lVar8 = pas_compact_heap_reservation_base + uVar5 * 8;
  if (uVar5 == 0) {
    lVar8 = 0;
  }
  uVar5 = (ulonglong)*(uint *)(lVar8 + (param_2 >> 7) * 4);
  lVar8 = pas_compact_heap_reservation_base + uVar5 * 8;
  if (uVar5 == 0) {
    lVar8 = 0;
  }
  bVar3 = (byte)param_2 & 0x1f;
  if (param_3) {
    do {
      uVar2 = *(uint *)(lVar8 + uVar7 * 4);
      uVar6 = uVar2 | 1 << ((byte)param_2 & 0x1f);
      if (uVar2 == uVar6) {
        return false;
      }
      puVar1 = (uint *)(lVar8 + uVar7 * 4);
      LOCK();
      bVar9 = uVar2 == *puVar1;
      if (bVar9) {
        *puVar1 = uVar6;
      }
      UNLOCK();
    } while (!bVar9);
  }
  else {
    do {
      uVar2 = *(uint *)(lVar8 + uVar7 * 4);
      uVar6 = uVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      if (uVar2 == uVar6) {
        return false;
      }
      puVar1 = (uint *)(lVar8 + uVar7 * 4);
      LOCK();
      bVar9 = uVar2 == *puVar1;
      if (bVar9) {
        *puVar1 = uVar6;
      }
      UNLOCK();
    } while (!bVar9);
  }
  return true;
}

// pas_bitfit_directory_view_did_become_empty_at_index @ 140d87490

void __cdecl
pas_bitfit_directory_view_did_become_empty_at_index(pas_bitfit_directory *param_1,ulong64 param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  pas_page_sharing_participant_opaque *ppVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  
  if ((ulonglong)(param_1->bitvectors).size <= param_2 >> 5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar5 = (ulonglong)(param_1->bitvectors).spine.payload;
  uVar9 = (ulonglong)((uint)(param_2 >> 5) & 3);
  lVar10 = pas_compact_heap_reservation_base + uVar5 * 8;
  if (uVar5 == 0) {
    lVar10 = 0;
  }
  uVar5 = (ulonglong)*(uint *)(lVar10 + (param_2 >> 7) * 4);
  lVar10 = pas_compact_heap_reservation_base + uVar5 * 8;
  if (uVar5 == 0) {
    lVar10 = 0;
  }
  do {
    uVar3 = *(uint *)(lVar10 + uVar9 * 4);
    uVar8 = uVar3 | 1 << ((byte)param_2 & 0x1f);
    if (uVar3 == uVar8) {
      return;
    }
    puVar1 = (uint *)(lVar10 + uVar9 * 4);
    LOCK();
    bVar11 = uVar3 == *puVar1;
    if (bVar11) {
      *puVar1 = uVar8;
    }
    UNLOCK();
  } while (!bVar11);
  uVar6 = pas_versioned_field_maximize(&param_1->last_empty_plus_one,param_2 + 1);
  if ((uVar6 != 0) || (bVar2 = param_1->heap->runtime_config->sharing_mode, bVar2 == 1)) {
    return;
  }
  if (bVar2 == 2) {
    ppVar7 = pas_page_sharing_participant_create
                       (param_1,pas_page_sharing_participant_bitfit_directory);
    pas_page_sharing_pool_did_create_delta(&pas_physical_page_sharing_pool,ppVar7);
    return;
  }
  if (bVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

// pas_bitfit_directory_view_did_become_empty @ 140d87570

void __cdecl
pas_bitfit_directory_view_did_become_empty(pas_bitfit_directory *param_1,pas_bitfit_view *param_2)

{
  pas_bitfit_directory_view_did_become_empty_at_index(param_1,(ulonglong)param_2->index);
  return;
}

// pas_bitfit_directory_take_last_empty @ 140d87580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_page_sharing_pool_take_result __cdecl
pas_bitfit_directory_take_last_empty
          (pas_bitfit_directory *param_1,pas_deferred_decommit_log *param_2,
          pas_lock_hold_mode param_3)

{
  pas_lock *ppVar1;
  PSRWLOCK SRWLock;
  uint *puVar2;
  longlong *plVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  ulong64 uVar7;
  pas_page_base_config *ppVar8;
  void *pvVar9;
  code *pcVar10;
  byte bVar11;
  pas_versioned_field pVar12;
  pas_versioned_field pVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  pas_page_base *ppVar17;
  pas_page_sharing_participant_opaque *ppVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulong64 uVar22;
  pas_page_sharing_pool_take_result pVar23;
  bool bVar24;
  undefined1 auStackY_158 [32];
  pas_virtual_range local_f0;
  pas_free_granules local_d0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar15 = (param_1->last_empty_plus_one).version;
  do {
    uVar14 = uVar15;
    uVar7 = (param_1->last_empty_plus_one).value;
    uVar15 = (param_1->last_empty_plus_one).version;
  } while (uVar15 != uVar14);
  ppVar8 = pas_bitfit_page_config_kind_for_config_table[(char)param_1->config_kind];
  uVar15 = ppVar8->page_size;
  uVar16 = ppVar8->granule_size;
  uVar22 = uVar7;
  if ((uVar15 | uVar16) >> 0x20 == 0) {
    uVar15 = (uVar15 & 0xffffffff) / (uVar16 & 0xffffffff);
  }
  else {
    uVar15 = uVar15 / uVar16;
  }
joined_r0x000140d87606:
  if (uVar22 != 0) {
    uVar22 = uVar22 - 1;
    if ((ulonglong)(param_1->bitvectors).size <= uVar22 >> 5) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    uVar16 = (ulonglong)(param_1->bitvectors).spine.payload;
    uVar20 = (ulonglong)((uint)(uVar22 >> 5) & 3);
    lVar21 = pas_compact_heap_reservation_base + uVar16 * 8;
    if (uVar16 == 0) {
      lVar21 = 0;
    }
    uVar16 = (ulonglong)*(uint *)(lVar21 + (uVar22 >> 7) * 4);
    lVar21 = pas_compact_heap_reservation_base + uVar16 * 8;
    if (uVar16 == 0) {
      lVar21 = 0;
    }
    bVar11 = (byte)uVar22 & 0x1f;
    do {
      uVar6 = *(uint *)(lVar21 + uVar20 * 4);
      uVar19 = uVar6 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
      if (uVar6 == uVar19) goto joined_r0x000140d87606;
      puVar2 = (uint *)(lVar21 + uVar20 * 4);
      LOCK();
      bVar24 = uVar6 == *puVar2;
      if (bVar24) {
        *puVar2 = uVar19;
      }
      UNLOCK();
    } while (!bVar24);
    if ((param_1->views).size <= uVar22) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    uVar16 = (ulonglong)(param_1->views).spine.payload;
    lVar21 = pas_compact_heap_reservation_base + uVar16 * 8;
    if (uVar16 == 0) {
      lVar21 = 0;
    }
    uVar16 = (ulonglong)*(uint *)(lVar21 + (uVar22 >> 3) * 4);
    lVar21 = pas_compact_heap_reservation_base + uVar16 * 8;
    if (uVar16 == 0) {
      lVar21 = 0;
    }
    uVar16 = (ulonglong)*(uint *)(lVar21 + (ulonglong)((uint)uVar22 & 7) * 4);
    if ((uVar16 == 0) ||
       (plVar3 = (longlong *)(pas_compact_heap_reservation_base + uVar16 * 8),
       plVar3 == (longlong *)0x0)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if (*plVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if ((pas_bitfit_directory *)
        (((uint)*(byte *)((longlong)plVar3 + 10) * 0x80000 + (uint)*(ushort *)(plVar3 + 1) * 8) +
        pas_compact_heap_reservation_base) != param_1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if (uVar22 != *(uint *)((longlong)plVar3 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    ppVar1 = (pas_lock *)(plVar3 + 3);
    bVar24 = pas_deferred_decommit_log_lock_for_adding(param_2,ppVar1,param_3);
    if (!bVar24) {
      pas_bitfit_directory_view_did_become_empty_at_index(param_1,uVar22);
      pVar23 = pas_page_sharing_pool_take_locks_unavailable;
      goto LAB_140d8794a;
    }
    SRWLock = (PSRWLOCK)(plVar3 + 2);
    AcquireSRWLockExclusive(SRWLock);
    if (*(char *)((longlong)plVar3 + 0xb) == '\0') {
      ReleaseSRWLockExclusive(SRWLock);
      pas_deferred_decommit_log_unlock_after_aborted_add(param_2,ppVar1);
      goto joined_r0x000140d87606;
    }
    pvVar9 = (void *)*plVar3;
    if (pvVar9 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    ppVar17 = (*ppVar8->page_header_for_boundary)(pvVar9);
    if (ppVar17 == (pas_page_base *)0x0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if ((param_1->max_frees).size <= uVar22) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    uVar16 = (ulonglong)(param_1->max_frees).spine.payload;
    lVar21 = pas_compact_heap_reservation_base + uVar16 * 8;
    if (uVar16 == 0) {
      lVar21 = 0;
    }
    sVar5 = *(short *)(ppVar17 + 2);
    uVar16 = (ulonglong)*(uint *)(lVar21 + (uVar22 >> 7) * 4);
    lVar21 = pas_compact_heap_reservation_base + uVar16 * 8;
    if (uVar16 == 0) {
      lVar21 = 0;
    }
    cVar4 = *(char *)(lVar21 + (ulonglong)((uint)uVar22 & 0x7f));
    if (sVar5 == 0) {
      if (cVar4 != -1) {
        pas_log("%p:%zu: found non-empty page that is dead when taking last empty.\n");
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      if (1 < uVar15) goto LAB_140d8784a;
      *(undefined1 *)((longlong)plVar3 + 0xb) = 0;
      ReleaseSRWLockExclusive(SRWLock);
      local_f0.mmap_capability = ppVar8->heap_config_ptr->mmap_capability;
      local_f0.end = ppVar8->page_size + (longlong)pvVar9;
      local_f0.begin = (ulong64)pvVar9;
      local_f0.lock_ptr = ppVar1;
      pas_deferred_decommit_log_add_already_locked(param_2,&local_f0,param_3);
    }
    else {
      if (cVar4 == -1) {
        pas_log("%p:%zu: found empty page that is not dead when taking last empty.\n");
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      if (uVar15 < 2) {
        ReleaseSRWLockExclusive(SRWLock);
        pas_deferred_decommit_log_unlock_after_aborted_add(param_2,ppVar1);
        goto joined_r0x000140d87606;
      }
LAB_140d8784a:
      if (ppVar8->page_size <= ppVar8->granule_size) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      if (sVar5 == 0) {
        pas_free_granules_compute_not_decommitted
                  (&local_d0,
                   &ppVar17[((ppVar8->page_size >> (ppVar8->min_align_shift & 0x3f)) + 0x3f >> 2 &
                            0xfffffffffffffff0) + 0x10].page_kind,ppVar8);
      }
      else {
        pas_free_granules_compute_and_mark_decommitted
                  (&local_d0,
                   &ppVar17[((ppVar8->page_size >> (ppVar8->min_align_shift & 0x3f)) + 0x3f >> 2 &
                            0xfffffffffffffff0) + 0x10].page_kind,ppVar8);
      }
      if (uVar15 < local_d0.num_free_granules) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      if (local_d0.num_free_granules == 0) {
        ReleaseSRWLockExclusive(SRWLock);
        pas_deferred_decommit_log_unlock_after_aborted_add(param_2,ppVar1);
        goto joined_r0x000140d87606;
      }
      if (sVar5 == 0) {
        *(undefined1 *)((longlong)plVar3 + 0xb) = 0;
      }
      ReleaseSRWLockExclusive(SRWLock);
      pas_free_granules_decommit_after_locking_range
                (&local_d0,ppVar17,param_2,ppVar1,ppVar8,param_3);
    }
    if (uVar14 != 0xffffffffffffffff) {
      LOCK();
      pVar13.version = uVar14;
      pVar13.value = uVar7;
      if (pVar13 == param_1->last_empty_plus_one) {
        (param_1->last_empty_plus_one).value = uVar22;
        (param_1->last_empty_plus_one).version = ((uint)uVar14 & 1) + uVar14;
      }
      UNLOCK();
    }
    if (sVar5 == 0) {
      (*ppVar8->destroy_page_header)(ppVar17,param_3);
    }
    bVar11 = param_1->heap->runtime_config->sharing_mode;
    if (bVar11 != 2) {
      if (bVar11 == 1) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      if (bVar11 != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    ppVar18 = pas_page_sharing_participant_create
                        (param_1,pas_page_sharing_participant_bitfit_directory);
    pas_page_sharing_pool_did_create_delta(&pas_physical_page_sharing_pool,ppVar18);
    if ((local_48 ^ (ulonglong)auStackY_158) == __security_cookie.value) {
      return pas_page_sharing_pool_take_success;
    }
    goto LAB_140d87a3d;
  }
  pVar23 = pas_page_sharing_pool_take_none_available;
  if (uVar14 == 0xffffffffffffffff) {
LAB_140d8794a:
    if ((local_48 ^ (ulonglong)auStackY_158) != __security_cookie.value) goto LAB_140d87a3d;
  }
  else {
    if ((uVar14 & 1) == 0) {
      uVar15 = uVar14;
      if (uVar7 == 0) goto LAB_140d8794a;
    }
    else {
      uVar15 = uVar14 + 1;
    }
    pVar23 = pas_page_sharing_pool_take_none_available;
    LOCK();
    pVar12.version = uVar14;
    pVar12.value = uVar7;
    if (pVar12 == param_1->last_empty_plus_one) {
      (param_1->last_empty_plus_one).value = 0;
      (param_1->last_empty_plus_one).version = uVar15;
    }
    UNLOCK();
    if ((local_48 ^ (ulonglong)auStackY_158) != __security_cookie.value) {
LAB_140d87a3d:
      pcVar10 = (code *)swi(3);
      pVar23 = (*pcVar10)();
      return pVar23;
    }
  }
  return pVar23;
}

// pas_bitfit_directory_dump_reference @ 140d87b10

void __cdecl pas_bitfit_directory_dump_reference(pas_bitfit_directory *param_1,pas_stream *param_2)

{
  pas_bitfit_page_config_kind_get_string((int)(char)param_1->config_kind);
  pas_stream_printf(param_2,"%p(bitfit_directory, %s)");
  return;
}

// pas_bitfit_directory_dump_for_spectrum @ 140d87b50

void __cdecl pas_bitfit_directory_dump_for_spectrum(pas_stream *param_1,void *param_2)

{
  pas_bitfit_page_config_kind_get_string((int)*(char *)((longlong)param_2 + 0x7c));
  pas_stream_printf(param_1,"%p(bitfit_directory, %s)");
  return;
}


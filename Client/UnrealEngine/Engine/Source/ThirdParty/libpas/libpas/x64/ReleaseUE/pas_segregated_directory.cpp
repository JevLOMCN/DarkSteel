// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 18

// pas_segregated_directory_construct @ 140d77cf0

void __cdecl
pas_segregated_directory_construct
          (pas_segregated_directory *param_1,pas_segregated_page_config_kind param_2,
          pas_page_sharing_mode param_3,pas_segregated_directory_kind param_4)

{
  pas_segregated_page_config_kind pVar1;
  
  pVar1 = (param_4 & 0xff) << 0x10 | (param_3 & 0xff) << 8 | param_2 & 0xff;
  param_1->first_view = 0;
  param_1->data = 0;
  param_1->bits = 0;
  param_1->page_config_kind = (char)pVar1;
  param_1->sharing_mode = (char)(pVar1 >> 8);
  param_1->directory_kind = (char)(pVar1 >> 0x10);
  param_1->field_0xf = (char)(pVar1 >> 0x18);
  param_1->is_basic_size_directory = false;
  return;
}

// pas_segregated_directory_get_data_slow @ 140d77d30

pas_segregated_directory_data * __cdecl
pas_segregated_directory_get_data_slow(pas_segregated_directory *param_1,pas_lock_hold_mode param_2)

{
  code *pcVar1;
  pas_segregated_directory_data *ppVar2;
  ulonglong uVar3;
  
  if (param_2 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  uVar3 = (ulonglong)(param_1->data).payload;
  ppVar2 = (pas_segregated_directory_data *)(uVar3 * 8 + pas_compact_heap_reservation_base);
  if (ppVar2 == (pas_segregated_directory_data *)0x0 || uVar3 == 0) {
    ppVar2 = pas_immortal_heap_allocate_with_alignment
                       (0x40,0x10,"pas_segregated_directory_data",pas_object_allocation);
    (ppVar2->first_eligible).value = 0;
    (ppVar2->first_eligible).version = 0;
    (ppVar2->last_empty_plus_one).value = 0;
    (ppVar2->last_empty_plus_one).version = 0;
    (ppVar2->bitvectors).spine = 0;
    (ppVar2->bitvectors).size = 0;
    *(undefined8 *)&(ppVar2->bitvectors).spine_size = 0;
    (ppVar2->views).array = 0;
    (ppVar2->views).size = 0;
    *(undefined8 *)&(ppVar2->views).capacity = 0;
    LOCK();
    UNLOCK();
    uVar3 = (longlong)ppVar2 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar3 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar3 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    (param_1->data).payload = (uint)(uVar3 >> 3);
  }
  if (param_2 == pas_lock_is_not_held) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  return ppVar2;
}

// pas_segregated_directory_get_use_epoch @ 140d77df0

/* WARNING: Type propagation algorithm not settling */

ulong64 __cdecl pas_segregated_directory_get_use_epoch(pas_segregated_directory *param_1)

{
  pas_segregated_page_emptiness pVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  pas_segregated_page *ppVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  pas_segregated_view_opaque *ppVar13;
  bool bVar14;
  
  uVar4 = (ulonglong)(param_1->data).payload;
  lVar5 = uVar4 * 8 + pas_compact_heap_reservation_base;
  if (lVar5 == 0 || uVar4 == 0) {
    uVar4 = (ulonglong)(param_1->bits >> 1 & 1);
  }
  else {
    uVar4 = *(ulonglong *)(lVar5 + 0x10);
  }
  uVar12 = 0;
  if (uVar4 != 0) {
    do {
      while( true ) {
        if (uVar4 == 1) {
          uVar3 = param_1->bits & 2;
        }
        else {
          uVar9 = uVar4 - 2;
          uVar6 = (ulonglong)
                  *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                           (ulonglong)(param_1->data).payload * 8);
          lVar5 = pas_compact_heap_reservation_base + uVar6 * 8;
          if (uVar6 == 0) {
            lVar5 = 0;
          }
          uVar6 = (ulonglong)*(uint *)(lVar5 + (uVar9 >> 7) * 4);
          lVar5 = pas_compact_heap_reservation_base + uVar6 * 8;
          if (uVar6 == 0) {
            lVar5 = 0;
          }
          uVar3 = 1 << ((byte)uVar9 & 0x1f) &
                  *(uint *)(lVar5 + 4 + (ulonglong)((uint)(uVar9 >> 2) & 0x18));
        }
        if (uVar3 != 0) break;
LAB_140d77e50:
        bVar14 = uVar4 == 1;
        uVar4 = uVar4 - 1;
        if (bVar14) {
          return 0;
        }
      }
      uVar9 = (ulonglong)(param_1->first_view).payload;
      uVar12 = 0;
      if (7 < uVar9) {
        uVar12 = pas_compact_heap_reservation_base;
      }
      ppVar13 = (pas_segregated_view_opaque *)(uVar12 + uVar9);
      if (ppVar13 == (pas_segregated_view_opaque *)0x0) {
LAB_140d77fd1:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar3 = (param_1->data).payload;
      lVar5 = (ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base;
      uVar9 = 1;
      if (lVar5 != 0 && uVar3 != 0) {
        uVar9 = (ulonglong)(*(int *)(lVar5 + 0x30) + 1);
      }
      if (uVar9 <= uVar4 - 1) goto LAB_140d77fd1;
      if (uVar4 != 1) {
        lVar10 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar5 + 0x2c) * 8;
        if ((ulonglong)*(uint *)(lVar5 + 0x2c) == 0) {
          lVar10 = 0;
        }
        uVar9 = (ulonglong)*(uint *)(lVar10 + -8 + uVar4 * 4);
        uVar12 = 0;
        if (7 < uVar9) {
          uVar12 = pas_compact_heap_reservation_base;
        }
        ppVar13 = (pas_segregated_view_opaque *)(uVar12 + uVar9);
      }
      if ((((uint)ppVar13 & 7) == 4) ||
         (bVar14 = pas_segregated_view_lock_ownership_lock_if_owned(ppVar13), !bVar14))
      goto LAB_140d77e50;
      ppVar7 = pas_segregated_view_get_page(ppVar13);
      uVar8 = 0;
      uVar11 = 0;
      LOCK();
      pVar1 = ppVar7->emptiness;
      if ((pas_segregated_page_emptiness)ZEXT816(0) == pVar1) {
        (ppVar7->emptiness).use_epoch = 0;
        (ppVar7->emptiness).num_non_empty_words_or_live_bytes = 0;
      }
      else {
        uVar11 = pVar1.num_non_empty_words_or_live_bytes;
        uVar8 = pVar1.use_epoch;
      }
      UNLOCK();
      pas_segregated_view_unlock_ownership_lock(ppVar13);
    } while ((uVar11 != 0 || uVar8 == 0) && (bVar14 = uVar4 != 1, uVar4 = uVar4 - 1, bVar14));
    uVar12 = 0;
    if (uVar11 == 0) {
      uVar12 = uVar8;
    }
  }
  return uVar12;
}

// pas_segregated_directory_get_sharing_payload @ 140d77fe0

pas_page_sharing_participant_payload * __cdecl
pas_segregated_directory_get_sharing_payload
          (pas_segregated_directory *param_1,pas_lock_hold_mode param_2)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  pas_page_sharing_participant_payload *ppVar5;
  pas_page_sharing_participant_opaque *ppVar6;
  pas_page_sharing_participant_kind pVar7;
  undefined8 *puVar8;
  pas_page_sharing_participant_payload *ppVar9;
  ulong64 uVar10;
  
  bVar1 = param_1->sharing_mode;
  if (bVar1 != 2) {
    if (bVar1 == 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (bVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar4 = (ulonglong)(param_1->data).payload;
  puVar8 = (undefined8 *)(uVar4 * 8 + pas_compact_heap_reservation_base);
  if (puVar8 == (undefined8 *)0x0 || uVar4 == 0) {
    if (param_2 == pas_lock_is_not_held) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    uVar4 = (ulonglong)(param_1->data).payload;
    puVar8 = (undefined8 *)(uVar4 * 8 + pas_compact_heap_reservation_base);
    if (puVar8 == (undefined8 *)0x0 || uVar4 == 0) {
      puVar8 = pas_immortal_heap_allocate_with_alignment
                         (0x40,0x10,"pas_segregated_directory_data",pas_object_allocation);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      *(undefined8 *)((longlong)puVar8 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x34) = 0;
      LOCK();
      UNLOCK();
      uVar4 = (longlong)puVar8 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar4 < 8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      (param_1->data).payload = (uint)(uVar4 >> 3);
    }
    if (param_2 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      uVar2 = *(uint *)(puVar8 + 7);
      goto joined_r0x000140d780b7;
    }
  }
  uVar2 = *(uint *)(puVar8 + 7);
joined_r0x000140d780b7:
  uVar4 = (ulonglong)uVar2;
  if (7 < uVar4) {
    uVar4 = pas_compact_heap_reservation_base + uVar4;
  }
  if ((uVar4 & 1) == 0) {
    if (param_2 == pas_lock_is_not_held) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      uVar2 = *(uint *)(puVar8 + 7);
    }
    else {
      uVar2 = *(uint *)(puVar8 + 7);
    }
    uVar10 = pas_compact_heap_reservation_base;
    if ((ulonglong)uVar2 < 8) {
      uVar10 = 0;
    }
    uVar4 = uVar10 + uVar2;
    if ((uVar4 & 1) == 0 && uVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar4 == 0) {
      ppVar9 = pas_immortal_heap_allocate
                         (0x18,"pas_segregated_directory_data/sharing_payload",pas_object_allocation
                         );
      pas_page_sharing_participant_payload_construct(ppVar9);
      ppVar5 = ppVar9;
      if ((pas_page_sharing_participant_payload *)&DAT_00000007 < ppVar9) {
        ppVar5 = (pas_page_sharing_participant_payload *)
                 ((longlong)ppVar9 - pas_compact_heap_reservation_base);
        if (pas_compact_heap_reservation_size <= ppVar5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (ppVar5 == (pas_page_sharing_participant_payload *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      *(int *)(puVar8 + 7) = (int)ppVar5;
      pVar7 = pas_page_sharing_participant_segregated_size_directory;
      if (param_1->directory_kind != 0) {
        if (param_1->directory_kind != 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        pVar7 = pas_page_sharing_participant_segregated_shared_page_directory;
      }
      ppVar6 = pas_page_sharing_participant_create(param_1,pVar7);
      pas_page_sharing_pool_add(&pas_physical_page_sharing_pool,ppVar6);
      LOCK();
      UNLOCK();
      uVar4 = (ulonglong)ppVar9 | 1;
      if ((pas_page_sharing_participant_payload *)&DAT_00000007 < ppVar9) {
        uVar4 = uVar4 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      *(int *)(puVar8 + 7) = (int)uVar4;
    }
    else {
      ppVar9 = (pas_page_sharing_participant_payload *)(uVar4 & 0xfffffffffffffffe);
    }
    if (param_2 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
  }
  else {
    ppVar9 = (pas_page_sharing_participant_payload *)(uVar4 & 0xfffffffffffffffe);
  }
  return ppVar9;
}

// pas_segregated_directory_minimize_first_eligible @ 140d78230

void __cdecl
pas_segregated_directory_minimize_first_eligible(pas_segregated_directory *param_1,ulong64 param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  
  uVar6 = (ulonglong)(param_1->data).payload;
  pauVar7 = (undefined1 (*) [16])(uVar6 * 8 + pas_compact_heap_reservation_base);
  if (pauVar7 == (undefined1 (*) [16])0x0 || uVar6 == 0) {
    if (param_2 == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  do {
    do {
      uVar6 = *(ulonglong *)(*pauVar7 + 8);
      do {
        uVar5 = uVar6;
        uVar2 = *(ulonglong *)*pauVar7;
        uVar6 = *(ulonglong *)(*pauVar7 + 8);
      } while (*(ulonglong *)(*pauVar7 + 8) != uVar5);
      uVar6 = uVar2;
      if (param_2 < uVar2) {
        uVar6 = param_2;
      }
    } while (uVar5 == 0xffffffffffffffff);
    if ((uVar5 & 1) == 0) {
      uVar8 = uVar5;
      if (uVar2 <= param_2) {
        return;
      }
    }
    else {
      uVar8 = uVar5 + 1;
    }
    LOCK();
    auVar1 = *pauVar7;
    auVar4._8_8_ = uVar5;
    auVar4._0_8_ = uVar2;
    if (auVar4 == auVar1) {
      *(ulonglong *)*pauVar7 = uVar6;
      *(ulonglong *)(*pauVar7 + 8) = uVar8;
    }
    UNLOCK();
  } while (auVar4 != auVar1);
  return;
}

// pas_segregated_directory_update_first_eligible_after_search @ 140d78270

void __cdecl
pas_segregated_directory_update_first_eligible_after_search
          (pas_segregated_directory *param_1,pas_versioned_field *param_2,ulong64 param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  
  uVar3 = (ulonglong)(param_1->data).payload;
  pauVar4 = (undefined1 (*) [16])(uVar3 * 8 + pas_compact_heap_reservation_base);
  if (pauVar4 == (undefined1 (*) [16])0x0 || uVar3 == 0) {
    if (1 < param_2->value) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (1 < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    uVar3 = param_2->version;
    if (uVar3 != 0xffffffffffffffff) {
      if ((uVar3 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      LOCK();
      auVar2._8_8_ = uVar3;
      auVar2._0_8_ = param_2->value;
      if (auVar2 == *pauVar4) {
        *(ulong64 *)*pauVar4 = param_3;
        *(ulonglong *)(*pauVar4 + 8) = uVar3 + 2;
      }
      UNLOCK();
      return;
    }
  }
  return;
}

// pas_segregated_directory_view_did_become_eligible_at_index @ 140d782d0

bool __cdecl
pas_segregated_directory_view_did_become_eligible_at_index
          (pas_segregated_directory *param_1,ulong64 param_2)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  pas_versioned_field *ppVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 == 0) {
    do {
      uVar2 = param_1->bits;
      if ((uVar2 | 1) == uVar2) {
        return false;
      }
      LOCK();
      bVar10 = uVar2 == param_1->bits;
      if (bVar10) {
        param_1->bits = uVar2 | 1;
      }
      UNLOCK();
    } while (!bVar10);
  }
  else {
    uVar6 = param_2 - 1;
    uVar4 = (ulonglong)
            *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                     (ulonglong)(param_1->data).payload * 8);
    uVar8 = (ulonglong)((uint)(uVar6 >> 5) & 3);
    lVar9 = pas_compact_heap_reservation_base + uVar4 * 8;
    if (uVar4 == 0) {
      lVar9 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar9 + (uVar6 >> 7) * 4);
    lVar9 = pas_compact_heap_reservation_base + uVar4 * 8;
    if (uVar4 == 0) {
      lVar9 = 0;
    }
    do {
      uVar2 = *(uint *)(lVar9 + uVar8 * 8);
      uVar5 = uVar2 | 1 << ((byte)uVar6 & 0x1f);
      if (uVar2 == uVar5) {
        return false;
      }
      puVar1 = (uint *)(lVar9 + uVar8 * 8);
      LOCK();
      bVar10 = uVar2 == *puVar1;
      if (bVar10) {
        *puVar1 = uVar5;
      }
      UNLOCK();
    } while (!bVar10);
  }
  uVar6 = (ulonglong)(param_1->data).payload;
  ppVar7 = (pas_versioned_field *)(uVar6 * 8 + pas_compact_heap_reservation_base);
  if (ppVar7 == (pas_versioned_field *)0x0 || uVar6 == 0) {
    if (param_2 == 0) {
      return true;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pas_versioned_field_minimize(ppVar7,param_2);
  return true;
}

// pas_segregated_directory_view_did_become_eligible @ 140d783b0

bool __cdecl
pas_segregated_directory_view_did_become_eligible
          (pas_segregated_directory *param_1,pas_segregated_view_opaque *param_2)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  pas_versioned_field *ppVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  
  uVar4 = pas_segregated_view_get_index(param_2);
  if (uVar4 == 0) {
    do {
      uVar2 = param_1->bits;
      if ((uVar2 | 1) == uVar2) {
        return false;
      }
      LOCK();
      bVar11 = uVar2 == param_1->bits;
      if (bVar11) {
        param_1->bits = uVar2 | 1;
      }
      UNLOCK();
    } while (!bVar11);
  }
  else {
    uVar7 = uVar4 - 1;
    uVar5 = (ulonglong)
            *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                     (ulonglong)(param_1->data).payload * 8);
    uVar9 = (ulonglong)((uint)(uVar7 >> 5) & 3);
    lVar10 = pas_compact_heap_reservation_base + uVar5 * 8;
    if (uVar5 == 0) {
      lVar10 = 0;
    }
    uVar5 = (ulonglong)*(uint *)(lVar10 + (uVar7 >> 7) * 4);
    lVar10 = pas_compact_heap_reservation_base + uVar5 * 8;
    if (uVar5 == 0) {
      lVar10 = 0;
    }
    do {
      uVar2 = *(uint *)(lVar10 + uVar9 * 8);
      uVar6 = uVar2 | 1 << ((byte)uVar7 & 0x1f);
      if (uVar2 == uVar6) {
        return false;
      }
      puVar1 = (uint *)(lVar10 + uVar9 * 8);
      LOCK();
      bVar11 = uVar2 == *puVar1;
      if (bVar11) {
        *puVar1 = uVar6;
      }
      UNLOCK();
    } while (!bVar11);
  }
  uVar7 = (ulonglong)(param_1->data).payload;
  ppVar8 = (pas_versioned_field *)(uVar7 * 8 + pas_compact_heap_reservation_base);
  if (ppVar8 == (pas_versioned_field *)0x0 || uVar7 == 0) {
    if (uVar4 == 0) {
      return true;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pas_versioned_field_minimize(ppVar8,uVar4);
  return true;
}

// pas_segregated_directory_view_did_become_empty_at_index @ 140d784a0

bool __cdecl
pas_segregated_directory_view_did_become_empty_at_index
          (pas_segregated_directory *param_1,ulong64 param_2)

{
  uint *puVar1;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar2;
  code *pcVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  pas_page_sharing_participant_opaque *ppVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  pas_page_sharing_participant_kind pVar13;
  ulonglong uVar14;
  bool bVar15;
  
  if (param_2 == 0) {
    do {
      uVar2 = param_1->bits;
      if ((uVar2 | 2) == uVar2) {
        return false;
      }
      LOCK();
      bVar15 = uVar2 == param_1->bits;
      if (bVar15) {
        param_1->bits = uVar2 | 2;
      }
      UNLOCK();
    } while (!bVar15);
  }
  else {
    uVar11 = param_2 - 1;
    uVar6 = (ulonglong)
            *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                     (ulonglong)(param_1->data).payload * 8);
    uVar14 = (ulonglong)((uint)(uVar11 >> 5) & 3);
    lVar12 = pas_compact_heap_reservation_base + uVar6 * 8;
    if (uVar6 == 0) {
      lVar12 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar12 + (uVar11 >> 7) * 4);
    lVar12 = pas_compact_heap_reservation_base + uVar6 * 8;
    if (uVar6 == 0) {
      lVar12 = 0;
    }
    do {
      uVar2 = *(uint *)(lVar12 + 4 + uVar14 * 8);
      uVar9 = uVar2 | 1 << ((byte)uVar11 & 0x1f);
      if (uVar2 == uVar9) {
        return false;
      }
      puVar1 = (uint *)(lVar12 + 4 + uVar14 * 8);
      LOCK();
      bVar15 = uVar2 == *puVar1;
      if (bVar15) {
        *puVar1 = uVar9;
      }
      UNLOCK();
    } while (!bVar15);
  }
  uVar11 = (ulonglong)(param_1->data).payload;
  lVar12 = uVar11 * 8 + pas_compact_heap_reservation_base;
  if (lVar12 == 0 || uVar11 == 0) {
    if (param_2 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  else {
    uVar7 = pas_versioned_field_maximize((pas_versioned_field *)(lVar12 + 0x10),param_2 + 1);
    if (uVar7 != 0) {
      return true;
    }
  }
  uVar3 = param_1->sharing_mode;
  uVar4 = param_1->directory_kind;
  if (uVar3 != '\x01') {
    if (uVar3 != '\x02') {
      if (uVar3 != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar11 = (ulonglong)(param_1->data).payload;
    if ((uVar11 != 0) && (lVar12 = pas_compact_heap_reservation_base + uVar11 * 8, lVar12 != 0)) {
      uVar2 = *(uint *)(lVar12 + 0x38);
      iVar10 = (int)pas_compact_heap_reservation_base;
      if (uVar2 < 8) {
        iVar10 = 0;
      }
      if ((iVar10 + uVar2 & 1) != 0) {
        pVar13 = pas_page_sharing_participant_segregated_size_directory;
        if (uVar4 != '\0') {
          if (uVar4 != '\x01') {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          pVar13 = pas_page_sharing_participant_segregated_shared_page_directory;
        }
        ppVar8 = pas_page_sharing_participant_create(param_1,pVar13);
        pas_page_sharing_pool_did_create_delta(&pas_physical_page_sharing_pool,ppVar8);
        return true;
      }
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  return true;
}

// pas_segregated_directory_view_did_become_empty @ 140d78600

bool __cdecl
pas_segregated_directory_view_did_become_empty
          (pas_segregated_directory *param_1,pas_segregated_view_opaque *param_2)

{
  bool bVar1;
  ulong64 uVar2;
  
  uVar2 = pas_segregated_view_get_index(param_2);
  bVar1 = pas_segregated_directory_view_did_become_empty_at_index(param_1,uVar2);
  return bVar1;
}

// pas_segregated_directory_is_committed @ 140d78630

bool __cdecl
pas_segregated_directory_is_committed(pas_segregated_directory *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  
  uVar5 = (ulonglong)(param_1->first_view).payload;
  uVar7 = 0;
  if (7 < uVar5) {
    uVar7 = pas_compact_heap_reservation_base;
  }
  uVar5 = uVar7 + uVar5;
  if (uVar5 != 0) {
    uVar4 = (param_1->data).payload;
    lVar3 = (ulonglong)uVar4 * 8 + pas_compact_heap_reservation_base;
    uVar8 = 1;
    if (lVar3 != 0 && uVar4 != 0) {
      uVar8 = (ulonglong)(*(int *)(lVar3 + 0x30) + 1);
    }
    if (param_2 < uVar8) {
      if (param_2 != 0) {
        lVar6 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar3 + 0x2c) * 8;
        if ((ulonglong)*(uint *)(lVar3 + 0x2c) == 0) {
          lVar6 = 0;
        }
        uVar5 = (ulonglong)*(uint *)(lVar6 + -4 + param_2 * 4);
        uVar7 = 0;
        if (7 < uVar5) {
          uVar7 = pas_compact_heap_reservation_base;
        }
        bVar2 = pas_segregated_view_is_owned((pas_segregated_view_opaque *)(uVar7 + uVar5));
        return bVar2;
      }
      uVar4 = (uint)uVar5;
      switch(uVar4 & 7) {
      case 0:
      case 1:
        return (bool)(*(byte *)((uVar5 & 0xfffffffffffffff8) + 0xb) & 1);
      case 2:
        if ((uVar4 & 7) != 2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        return (bool)(*(byte *)((uVar5 & 0xfffffffffffffff8) + 0x1c) & 1);
      case 3:
        goto switchD_140d7f71c_caseD_3;
      case 4:
        if ((uVar4 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        return (bool)(*(byte *)((ulonglong)
                                ((uint)*(byte *)((uVar5 & 0xfffffffffffffff8) + 10) * 0x80000 +
                                (uint)*(ushort *)((uVar5 & 0xfffffffffffffff8) + 8) * 8) + 0x1c +
                               pas_compact_heap_reservation_base) & 1);
      default:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
switchD_140d7f71c_caseD_3:
  if ((uVar4 & 7) != 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((*(byte *)((ulonglong)
                 ((uint)*(byte *)((uVar5 & 0xfffffffffffffff8) + 0x12) * 0x80000 +
                 (uint)*(ushort *)((uVar5 & 0xfffffffffffffff8) + 0x10) * 8) + 0x1c +
                pas_compact_heap_reservation_base) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return true;
}

// pas_segregated_directory_num_committed_views @ 140d786c0

ulong64 __cdecl pas_segregated_directory_num_committed_views(pas_segregated_directory *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar7 = (ulonglong)(param_1->first_view).payload;
  uVar3 = pas_compact_heap_reservation_base;
  if (uVar7 < 8) {
    uVar3 = 0;
  }
  if (uVar3 + uVar7 != 0) {
    uVar6 = (param_1->data).payload;
    lVar4 = (ulonglong)uVar6 * 8 + pas_compact_heap_reservation_base;
    uVar7 = 1;
    if ((lVar4 == 0 || uVar6 == 0) ||
       (uVar6 = *(int *)(lVar4 + 0x30) + 1, uVar7 = (ulonglong)uVar6, uVar6 != 0)) {
      uVar2 = (ulonglong)(param_1->first_view).payload;
      uVar3 = 0;
      if (7 < uVar2) {
        uVar3 = pas_compact_heap_reservation_base;
      }
      if (uVar3 + uVar2 != 0) {
        uVar7 = uVar7 - 1;
        lVar4 = 0;
        do {
          uVar6 = (param_1->data).payload;
          lVar8 = (ulonglong)uVar6 * 8 + pas_compact_heap_reservation_base;
          uVar9 = 1;
          if (lVar8 != 0 && uVar6 != 0) {
            uVar9 = (ulonglong)(*(int *)(lVar8 + 0x30) + 1);
          }
          if (uVar9 <= uVar7) break;
          bVar10 = uVar7 == 0;
          uVar7 = uVar7 - 1;
          if (bVar10) {
            bVar10 = pas_segregated_view_is_owned((pas_segregated_view_opaque *)(uVar3 + uVar2));
            return lVar4 + (ulonglong)bVar10;
          }
          lVar5 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar8 + 0x2c) * 8;
          if ((ulonglong)*(uint *)(lVar8 + 0x2c) == 0) {
            lVar5 = 0;
          }
          uVar2 = (ulonglong)*(uint *)(lVar5 + uVar7 * 4);
          uVar3 = pas_compact_heap_reservation_base;
          if (uVar2 < 8) {
            uVar3 = 0;
          }
          bVar10 = pas_segregated_view_is_owned((pas_segregated_view_opaque *)(uVar3 + uVar2));
          lVar4 = lVar4 + (ulonglong)bVar10;
          uVar2 = (ulonglong)(param_1->first_view).payload;
          uVar3 = pas_compact_heap_reservation_base;
          if (uVar2 < 8) {
            uVar3 = 0;
          }
        } while (uVar3 + uVar2 != 0);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return 0;
}

// pas_segregated_directory_num_empty_views @ 140d787e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl pas_segregated_directory_num_empty_views(pas_segregated_directory *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  pas_segregated_directory *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  uint uStack_78;
  undefined1 uStack_74;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a0 = 0;
  local_68 = num_empty_views_should_consider_view_parallel;
  local_60 = (code *)0x0;
  local_58 = &local_50;
  local_90 = 0xffffffffffffffff;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7b = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_50 = (ulonglong)(param_1->bits >> 1 & 1);
  uVar7 = (ulonglong)(param_1->data).payload;
  lVar8 = uVar7 * 8 + pas_compact_heap_reservation_base;
  local_a8 = param_1;
  if (lVar8 != 0 && uVar7 != 0) {
    local_c8 = (ulonglong)*(uint *)(lVar8 + 0x24);
    local_b0 = (ulonglong)*(uint *)(lVar8 + 0x20) * 8 + pas_compact_heap_reservation_base;
    if ((ulonglong)*(uint *)(lVar8 + 0x20) == 0) {
      local_b0 = 0;
    }
    if (local_c8 != 0) {
      local_b8 = local_c8 - 1 >> 2;
      local_c0 = 0;
      local_d0 = 0;
      do {
        uVar7 = 4;
        if (local_c8 < 4) {
          uVar7 = local_c8;
        }
        uVar9 = (ulonglong)*(uint *)(local_b0 + local_d0 * 4);
        lVar8 = uVar9 * 8 + pas_compact_heap_reservation_base;
        if (uVar9 == 0) {
          lVar8 = 0;
        }
        lVar11 = 0;
        do {
          uVar2 = *(undefined8 *)(lVar8 + lVar11 * 8);
          uVar6 = (*local_68)(uVar2,&local_a8);
          if (uVar6 != 0) {
            lVar12 = lVar11 * 8 + lVar8;
            lVar1 = lVar11 + local_c0;
            do {
              uVar13 = 0;
              for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar13 = uVar13 + 1;
              }
              local_a0 = lVar1 * 0x20 + 1 + (ulonglong)uVar13;
              uVar13 = 1 << ((byte)uVar13 & 0x1f);
              uStack_80 = (undefined5)local_a0;
              uStack_7b = (undefined3)(local_a0 >> 0x28);
              uStack_74 = 0;
              if (local_90 == 0xffffffffffffffff) {
                local_90 = local_a0;
              }
              local_88 = lVar12;
              uStack_78 = uVar13;
              local_70 = uVar2;
              if ((local_98 <= local_a0) || (local_60 == (code *)0x0)) goto LAB_140d78a04;
              cVar5 = (*local_60)(&local_a8);
              if (cVar5 != '\0') goto LAB_140d78a04;
              uVar6 = uVar6 & ~uVar13;
            } while (uVar6 != 0);
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != uVar7 + (uVar7 == 0));
        local_c0 = local_d0 * 4 + 4;
        uVar7 = local_d0 + 1;
        local_c8 = local_c8 - 4;
        bVar14 = local_d0 != local_b8;
        local_d0 = uVar7;
      } while (bVar14);
    }
  }
LAB_140d78a04:
  if ((local_48 ^ (ulonglong)auStack_f8) == __security_cookie.value) {
    return local_50;
  }
  pcVar3 = (code *)swi(3);
  uVar10 = (*pcVar3)();
  return uVar10;
}

// num_empty_views_should_consider_view_parallel @ 140d78a40

uint __cdecl
num_empty_views_should_consider_view_parallel
          (pas_segregated_directory_bitvector_segment param_1,
          pas_segregated_directory_iterate_config *param_2)

{
  uint uVar1;
  
  uVar1 = param_1.empty_bits - (param_1.empty_bits >> 1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  *(ulonglong *)param_2->arg =
       *(longlong *)param_2->arg +
       (ulonglong)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f) * 0x1010101 >> 0x18);
  return 0;
}

// pas_segregated_directory_update_last_empty_plus_one_after_search @ 140d78a90

void __cdecl
pas_segregated_directory_update_last_empty_plus_one_after_search
          (pas_segregated_directory *param_1,pas_versioned_field *param_2,ulong64 param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)(param_1->data).payload;
  lVar5 = uVar4 * 8 + pas_compact_heap_reservation_base;
  if (lVar5 == 0 || uVar4 == 0) {
    if (1 < param_2->value) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (1 < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    uVar4 = param_2->version;
    if (uVar4 != 0xffffffffffffffff) {
      if ((uVar4 & 1) == 0) {
        uVar3 = uVar4;
        if (param_2->value == param_3) {
          return;
        }
      }
      else {
        uVar3 = uVar4 + 1;
      }
      LOCK();
      auVar2._8_8_ = uVar4;
      auVar2._0_8_ = param_2->value;
      if (auVar2 == *(undefined1 (*) [16])(lVar5 + 0x10)) {
        *(ulong64 *)*(undefined1 (*) [16])(lVar5 + 0x10) = param_3;
        *(ulonglong *)(lVar5 + 0x18) = uVar3;
      }
      UNLOCK();
      return;
    }
  }
  return;
}

// pas_segregated_directory_append @ 140d78b00

void __cdecl
pas_segregated_directory_append
          (pas_segregated_directory *param_1,ulong64 param_2,pas_segregated_view_opaque *param_3)

{
  int *piVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  char cVar4;
  uint uVar5;
  uint uVar10;
  ulong64 uVar6;
  ulonglong uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulong64 uVar16;
  void *pvVar17;
  uint uVar18;
  uint uVar19;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar15 = (ulonglong)(param_1->first_view).payload;
  uVar6 = 0;
  uVar16 = pas_compact_heap_reservation_base;
  if (uVar15 < 8) {
    uVar16 = uVar6;
  }
  if (uVar16 + uVar15 != 0) {
    uVar10 = (param_1->data).payload;
    lVar11 = (ulonglong)uVar10 * 8 + pas_compact_heap_reservation_base;
    uVar6 = 1;
    if (lVar11 != 0 && uVar10 != 0) {
      uVar6 = (ulong64)(*(int *)(lVar11 + 0x30) + 1);
    }
  }
  if (uVar6 != param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_3 == (pas_segregated_view_opaque *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar15 = (ulonglong)param_3 & 0xffffffff;
  uVar10 = (uint)param_3 & 7;
  if (uVar10 < 2) {
LAB_140d78b96:
    uVar5._0_1_ = param_1->page_config_kind;
    uVar5._1_1_ = param_1->sharing_mode;
    uVar5._2_1_ = param_1->directory_kind;
    uVar5._3_1_ = param_1->field_0xf;
    if ((uVar5 & 0xff0000) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (2 < uVar10) {
      if (uVar10 != 4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      goto LAB_140d78be7;
    }
  }
  else {
    if (uVar10 != 2) {
      if (uVar10 != 4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      goto LAB_140d78b96;
    }
    uVar5._0_1_ = param_1->page_config_kind;
    uVar5._1_1_ = param_1->sharing_mode;
    uVar5._2_1_ = param_1->directory_kind;
    uVar5._3_1_ = param_1->field_0xf;
    if ((uVar5 & 0xff0000) != 0x10000) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  cVar4 = (char)(uVar5 >> 8);
  if (cVar4 != '\x01') {
    if (cVar4 != '\x02') {
      if (cVar4 != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pas_segregated_directory_get_sharing_payload(param_1,pas_lock_is_held);
  }
LAB_140d78be7:
  uVar10 = (param_1->data).payload;
  puVar12 = (undefined8 *)(pas_compact_heap_reservation_base + (ulonglong)uVar10 * 8);
  if (param_2 == 0) {
    if ((puVar12 != (undefined8 *)0x0 && uVar10 != 0) && (*(int *)(puVar12 + 6) != 0)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((param_1->bits & 3) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((pas_segregated_view_opaque *)&DAT_00000007 < param_3) {
      uVar15 = (longlong)param_3 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((pas_segregated_view_opaque *)pas_compact_heap_reservation_base == param_3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    (param_1->first_view).payload = (uint)uVar15;
  }
  else {
    if ((puVar12 == (undefined8 *)0x0 || uVar10 == 0) &&
       (uVar7 = (ulonglong)(param_1->data).payload,
       puVar12 = (undefined8 *)(uVar7 * 8 + pas_compact_heap_reservation_base),
       puVar12 == (undefined8 *)0x0 || uVar7 == 0)) {
      puVar12 = pas_immortal_heap_allocate_with_alignment
                          (0x40,0x10,"pas_segregated_directory_data",pas_object_allocation);
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      *(undefined8 *)((longlong)puVar12 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x34) = 0;
      LOCK();
      UNLOCK();
      uVar7 = (longlong)puVar12 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar7 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar7 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      (param_1->data).payload = (uint)(uVar7 >> 3);
    }
    uVar7 = param_2 + 0x1f >> 5;
    uVar10 = *(uint *)((longlong)puVar12 + 0x24);
    if (uVar10 < uVar7) {
      uVar18 = uVar10 + 3 >> 2;
      uVar5 = *(uint *)(puVar12 + 5);
      if (uVar5 < uVar18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar19 = uVar10 >> 2;
      pvVar17 = (void *)(pas_compact_heap_reservation_base + (ulonglong)*(uint *)(puVar12 + 4) * 8);
      if ((ulonglong)*(uint *)(puVar12 + 4) == 0) {
        pvVar17 = (void *)0x0;
      }
      pvVar8 = pvVar17;
      if (uVar5 <= uVar19) {
        lVar11 = (ulonglong)uVar5 * 2 + 2;
        pvVar8 = pas_immortal_heap_allocate
                           ((ulonglong)uVar5 * 8 + 8,
                            "pas_segregated_directory_segmented_bitvectors/spine",
                            pas_object_allocation);
        if (3 < uVar10 + 3) {
          memcpy(pvVar8,pvVar17,(ulonglong)(uVar18 * 4));
        }
        uVar13 = 0;
        memset((void *)((longlong)pvVar8 + (ulonglong)uVar18 * 4),0,(lVar11 - (ulonglong)uVar18) * 4
              );
        LOCK();
        UNLOCK();
        if (pvVar8 != (void *)0x0) {
          uVar14 = (longlong)pvVar8 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((uVar14 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (uVar14 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar13 = (undefined4)(uVar14 >> 3);
        }
        *(undefined4 *)(puVar12 + 4) = uVar13;
        LOCK();
        UNLOCK();
        *(int *)(puVar12 + 5) = (int)lVar11;
      }
      uVar5 = *(uint *)((longlong)pvVar8 + (ulonglong)uVar19 * 4);
      uVar14 = (ulonglong)uVar5;
      if (uVar19 == uVar18) {
        if ((uVar5 != 0) && (pas_compact_heap_reservation_base != uVar14 * -8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar10 & 3) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar9 = pas_immortal_heap_allocate_with_alignment
                           (0x20,4,"pas_segregated_directory_segmented_bitvectors/segment",
                            pas_object_allocation);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        LOCK();
        UNLOCK();
        uVar14 = (longlong)puVar9 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar14 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar14 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar14 = uVar14 >> 3;
        *(int *)((longlong)pvVar8 + (ulonglong)uVar19 * 4) = (int)uVar14;
      }
      lVar11 = 0;
      if ((int)uVar14 != 0) {
        lVar11 = pas_compact_heap_reservation_base + (uVar14 & 0xffffffff) * 8;
      }
      *(undefined8 *)(lVar11 + (ulonglong)(uVar10 & 3) * 8) = 0;
      LOCK();
      UNLOCK();
      uVar10 = *(int *)((longlong)puVar12 + 0x24) + 1;
      *(uint *)((longlong)puVar12 + 0x24) = uVar10;
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar7 != uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    if ((pas_segregated_view_opaque *)&DAT_00000007 < param_3) {
      uVar15 = (longlong)param_3 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((pas_segregated_view_opaque *)pas_compact_heap_reservation_base == param_3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    uVar10 = *(uint *)(puVar12 + 6);
    pvVar17 = (void *)(pas_compact_heap_reservation_base +
                      (ulonglong)*(uint *)((longlong)puVar12 + 0x2c) * 8);
    if ((ulonglong)*(uint *)((longlong)puVar12 + 0x2c) == 0) {
      pvVar17 = (void *)0x0;
    }
    if (*(uint *)((longlong)puVar12 + 0x34) <= uVar10) {
      if (uVar10 != *(uint *)((longlong)puVar12 + 0x34)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar5 = uVar10 * 2 + 2;
      if (uVar5 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar7 = 0;
      pvVar8 = pas_immortal_heap_allocate
                         ((ulonglong)uVar5 * 4,"pas_segregated_directory_view_vector/array",
                          pas_object_allocation);
      if ((ulonglong)*(uint *)(puVar12 + 6) != 0) {
        memcpy(pvVar8,pvVar17,(ulonglong)*(uint *)(puVar12 + 6) << 2);
        uVar7 = (ulonglong)*(uint *)(puVar12 + 6);
      }
      uVar13 = 0;
      memset((void *)((longlong)pvVar8 + uVar7 * 4),0,(uVar5 - uVar7) * 4);
      LOCK();
      UNLOCK();
      if (pvVar8 != (void *)0x0) {
        uVar7 = (longlong)pvVar8 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar7 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar7 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar13 = (undefined4)(uVar7 >> 3);
      }
      *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar13;
      LOCK();
      UNLOCK();
      *(uint *)((longlong)puVar12 + 0x34) = uVar5;
      uVar10 = *(uint *)(puVar12 + 6);
      pvVar17 = pvVar8;
    }
    *(int *)((longlong)pvVar17 + (ulonglong)uVar10 * 4) = (int)uVar15;
    LOCK();
    UNLOCK();
    piVar1 = (int *)(puVar12 + 6);
    *piVar1 = *piVar1 + 1;
    if (*piVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  uVar10._0_1_ = param_1->page_config_kind;
  uVar10._1_1_ = param_1->sharing_mode;
  uVar10._2_1_ = param_1->directory_kind;
  uVar10._3_1_ = param_1->field_0xf;
  if ((uVar10 & 0xfe) != 4) {
    return;
  }
  if ((uVar10 & 0xff0000) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  verse_heap_object_set_set_add_view
            ((verse_heap_object_set_set *)(**(longlong **)&param_1[1].data + 0xd0),
             (pas_segregated_exclusive_view *)((ulonglong)param_3 & 0xfffffffffffffff8));
  return;
}

// pas_segregated_directory_compute_summary @ 140d79070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_segregated_directory_compute_summary
          (pas_heap_summary *__return_storage_ptr__,pas_segregated_directory *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  pas_heap_summary *ppVar6;
  longlong lVar7;
  longlong lVar8;
  pas_segregated_view_opaque *ppVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  ulonglong uVar17;
  undefined1 auStack_108 [32];
  ulong64 local_e8;
  ulong64 local_e0;
  ulong64 local_d8;
  ulong64 local_d0;
  ulong64 local_c8;
  pas_heap_summary *local_c0;
  ulong64 local_b8;
  pas_segregated_directory *local_b0;
  pas_segregated_page_config *local_a8;
  pas_heap_summary local_a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_a8 = (pas_segregated_page_config *)
             pas_segregated_page_config_kind_for_config_table[(char)param_1->page_config_kind];
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
  uVar17 = (ulonglong)(param_1->first_view).payload;
  uVar11 = 0;
  uVar10 = pas_compact_heap_reservation_base;
  if (uVar17 < 8) {
    uVar10 = uVar11;
  }
  ppVar9 = (pas_segregated_view_opaque *)(uVar10 + uVar17);
  if (ppVar9 == (pas_segregated_view_opaque *)0x0) goto LAB_140d793ae;
  uVar10 = __return_storage_ptr__->allocated;
  uVar16 = __return_storage_ptr__->meta;
  uVar12 = __return_storage_ptr__->committed;
  uVar11 = __return_storage_ptr__->decommitted;
  uVar2 = __return_storage_ptr__->free_ineligible_for_decommit;
  uVar3 = __return_storage_ptr__->free_eligible_for_decommit;
  local_c8 = __return_storage_ptr__->free_decommitted;
  uVar15 = __return_storage_ptr__->meta_ineligible_for_decommit;
  uVar14 = __return_storage_ptr__->meta_eligible_for_decommit;
  uVar13 = __return_storage_ptr__->cached;
  uVar1 = (param_1->data).payload;
  lVar7 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base;
  local_c0 = __return_storage_ptr__;
  local_b8 = uVar12;
  if (lVar7 == 0 || uVar1 == 0) {
LAB_140d7915f:
    local_b0 = param_1;
    pas_segregated_view_compute_summary(&local_a0,ppVar9,local_a8);
    local_e8 = uVar10 + local_a0.allocated;
    uVar16 = uVar16 + local_a0.meta;
    uVar12 = local_b8 + local_a0.committed;
    local_d8 = uVar11 + local_a0.decommitted;
    local_d0 = uVar2 + local_a0.free_ineligible_for_decommit;
    local_e0 = uVar3 + local_a0.free_eligible_for_decommit;
    local_c8 = local_c8 + local_a0.free_decommitted;
    uVar15 = uVar15 + local_a0.meta_ineligible_for_decommit;
    uVar14 = uVar14 + local_a0.meta_eligible_for_decommit;
    uVar13 = uVar13 + local_a0.cached;
    uVar17 = (ulonglong)(local_b0->first_view).payload;
    uVar10 = 0;
    if (7 < uVar17) {
      uVar10 = pas_compact_heap_reservation_base;
    }
    uVar11 = local_a0.free;
    if (uVar10 + uVar17 != 0) {
      uVar17 = 1;
      do {
        uVar5 = (ulonglong)(local_b0->data).payload;
        if (((uVar5 == 0) || (lVar7 = pas_compact_heap_reservation_base + uVar5 * 8, lVar7 == 0)) ||
           (*(int *)(lVar7 + 0x30) + 1 <= uVar17)) break;
        if (*(int *)(lVar7 + 0x30) + 1 <= uVar17) goto LAB_140d79401;
        lVar8 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar7 + 0x2c) * 8;
        if ((ulonglong)*(uint *)(lVar7 + 0x2c) == 0) {
          lVar8 = 0;
        }
        uVar5 = (ulonglong)*(uint *)(lVar8 + -4 + uVar17 * 4);
        uVar10 = pas_compact_heap_reservation_base;
        if (uVar5 < 8) {
          uVar10 = 0;
        }
        pas_segregated_view_compute_summary
                  (&local_a0,(pas_segregated_view_opaque *)(uVar10 + uVar5),local_a8);
        uVar11 = uVar11 + local_a0.free;
        local_e8 = local_e8 + local_a0.allocated;
        uVar16 = uVar16 + local_a0.meta;
        uVar12 = uVar12 + local_a0.committed;
        local_d8 = local_d8 + local_a0.decommitted;
        local_d0 = local_d0 + local_a0.free_ineligible_for_decommit;
        local_e0 = local_e0 + local_a0.free_eligible_for_decommit;
        local_c8 = local_c8 + local_a0.free_decommitted;
        uVar15 = uVar15 + local_a0.meta_ineligible_for_decommit;
        uVar14 = uVar14 + local_a0.meta_eligible_for_decommit;
        uVar13 = uVar13 + local_a0.cached;
        uVar17 = uVar17 + 1;
        uVar5 = (ulonglong)(local_b0->first_view).payload;
        uVar10 = pas_compact_heap_reservation_base;
        if (uVar5 < 8) {
          uVar10 = 0;
        }
      } while (uVar10 + uVar5 != 0);
    }
  }
  else {
    local_e8 = uVar10;
    local_e0 = uVar3;
    local_d8 = uVar11;
    local_d0 = uVar2;
    if (*(int *)(lVar7 + 0x30) != -1) {
      if (*(int *)(lVar7 + 0x30) == -1) {
        uVar11 = 0;
LAB_140d79401:
        local_c0->allocated = local_e8;
        local_c0->meta = uVar16;
        local_c0->committed = uVar12;
        local_c0->decommitted = local_d8;
        local_c0->free_ineligible_for_decommit = local_d0;
        local_c0->free_eligible_for_decommit = local_e0;
        local_c0->free_decommitted = local_c8;
        local_c0->meta_ineligible_for_decommit = uVar15;
        local_c0->meta_eligible_for_decommit = uVar14;
        local_c0->cached = uVar13;
        local_c0->free = uVar11;
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      goto LAB_140d7915f;
    }
    uVar11 = 0;
  }
  local_c0->allocated = local_e8;
  local_c0->meta = uVar16;
  local_c0->committed = uVar12;
  local_c0->decommitted = local_d8;
  local_c0->free_ineligible_for_decommit = local_d0;
  local_c0->free_eligible_for_decommit = local_e0;
  local_c0->free_decommitted = local_c8;
  local_c0->meta_ineligible_for_decommit = uVar15;
  local_c0->meta_eligible_for_decommit = uVar14;
  local_c0->cached = uVar13;
  __return_storage_ptr__ = local_c0;
LAB_140d793ae:
  __return_storage_ptr__->free = uVar11;
  if ((local_48 ^ (ulonglong)auStack_108) != __security_cookie.value) {
    pcVar4 = (code *)swi(3);
    ppVar6 = (pas_heap_summary *)(*pcVar4)();
    return ppVar6;
  }
  return __return_storage_ptr__;
}

// pas_segregated_directory_num_empty_granules @ 140d79460

ulong64 __cdecl pas_segregated_directory_num_empty_granules(pas_segregated_directory *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  pas_segregated_page *ppVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong lVar9;
  pas_segregated_view_opaque *ppVar10;
  ulonglong uVar11;
  
  uVar11 = (ulonglong)(param_1->first_view).payload;
  uVar5 = pas_compact_heap_reservation_base;
  if (uVar11 < 8) {
    uVar5 = 0;
  }
  ppVar10 = (pas_segregated_view_opaque *)(uVar5 + uVar11);
  if (ppVar10 == (pas_segregated_view_opaque *)0x0) {
    return 0;
  }
  uVar1 = (param_1->data).payload;
  lVar8 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base;
  if (lVar8 != 0 && uVar1 != 0) {
    if (*(int *)(lVar8 + 0x30) == -1) {
      return 0;
    }
    if (*(int *)(lVar8 + 0x30) == -1) {
LAB_140d795df:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  if ((((ulonglong)ppVar10 & 6) == 0 || ((uint)ppVar10 & 7) == 2) &&
     (bVar3 = pas_segregated_view_lock_ownership_lock_if_owned(ppVar10), bVar3)) {
    ppVar4 = pas_segregated_view_get_page(ppVar10);
    uVar5 = pas_segregated_page_get_num_empty_granules(ppVar4);
    pas_segregated_view_unlock_ownership_lock(ppVar10);
  }
  else {
    uVar5 = 0;
  }
  uVar11 = (ulonglong)(param_1->first_view).payload;
  uVar7 = 0;
  if (7 < uVar11) {
    uVar7 = pas_compact_heap_reservation_base;
  }
  if (uVar7 + uVar11 != 0) {
    uVar11 = 1;
    do {
      uVar6 = (ulonglong)(param_1->data).payload;
      if (uVar6 == 0) {
        return uVar5;
      }
      lVar8 = pas_compact_heap_reservation_base + uVar6 * 8;
      if (lVar8 == 0) {
        return uVar5;
      }
      if (*(int *)(lVar8 + 0x30) + 1 <= uVar11) {
        return uVar5;
      }
      if (*(int *)(lVar8 + 0x30) + 1 <= uVar11) goto LAB_140d795df;
      lVar9 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar8 + 0x2c) * 8;
      if ((ulonglong)*(uint *)(lVar8 + 0x2c) == 0) {
        lVar9 = 0;
      }
      uVar6 = (ulonglong)*(uint *)(lVar9 + -4 + uVar11 * 4);
      uVar7 = pas_compact_heap_reservation_base;
      if (uVar6 < 8) {
        uVar7 = 0;
      }
      ppVar10 = (pas_segregated_view_opaque *)(uVar7 + uVar6);
      if ((((ulonglong)ppVar10 & 6) == 0 || ((uint)ppVar10 & 7) == 2) &&
         (bVar3 = pas_segregated_view_lock_ownership_lock_if_owned(ppVar10), bVar3)) {
        ppVar4 = pas_segregated_view_get_page(ppVar10);
        uVar7 = pas_segregated_page_get_num_empty_granules(ppVar4);
        uVar5 = uVar5 + uVar7;
        pas_segregated_view_unlock_ownership_lock(ppVar10);
      }
      uVar11 = uVar11 + 1;
      uVar6 = (ulonglong)(param_1->first_view).payload;
      uVar7 = 0;
      if (7 < uVar6) {
        uVar7 = pas_compact_heap_reservation_base;
      }
    } while (uVar7 + uVar6 != 0);
  }
  return uVar5;
}


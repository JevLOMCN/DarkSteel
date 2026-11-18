// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 8

// verse_heap_mark_bits_page_commit_controller_create_not_large @ 140d717f0

/* WARNING: Removing unreachable block (ram,0x000140d7186b) */

verse_heap_mark_bits_page_commit_controller * __cdecl
verse_heap_mark_bits_page_commit_controller_create_not_large(ulong64 param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  BOOLEAN BVar5;
  verse_heap_mark_bits_page_commit_controller *pvVar6;
  void *_Dst;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar15;
  void *_Src;
  ulonglong uVar14;
  
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((param_1 & 0x7ffff) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pvVar6 = pas_immortal_heap_allocate
                     (0x10,"verse_heap_mark_bits_page_commit_controller",pas_object_allocation);
  verse_heap_mark_bits_page_commit_controller_clean_count = 0;
  pas_scavenger_did_create_eligible();
  pvVar6->chunk_base = param_1;
  pvVar6->is_committed = pas_committed;
  uVar4 = verse_heap_mark_bits_page_commit_controller_not_large_vector.size;
  verse_heap_mark_bits_page_commit_controller_num_committed =
       verse_heap_mark_bits_page_commit_controller_num_committed + 1;
  LOCK();
  UNLOCK();
  uVar11 = (longlong)pvVar6 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar11 & 7) == 0) {
    if (uVar11 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar9 = verse_heap_mark_bits_page_commit_controller_not_large_vector.size + 0x1f;
    uVar15 = uVar9 >> 5;
    if (verse_heap_mark_bits_page_commit_controller_not_large_vector.spine_size < uVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar13 = verse_heap_mark_bits_page_commit_controller_not_large_vector.size >> 5;
    uVar14 = (ulonglong)uVar13;
    _Src = (void *)(pas_compact_heap_reservation_base +
                   (ulonglong)
                   verse_heap_mark_bits_page_commit_controller_not_large_vector.spine.payload * 8);
    if ((ulonglong)verse_heap_mark_bits_page_commit_controller_not_large_vector.spine.payload == 0)
    {
      _Src = (void *)0x0;
    }
    if (uVar13 < verse_heap_mark_bits_page_commit_controller_not_large_vector.spine_size) {
      uVar1 = *(uint *)((longlong)_Src + uVar14 * 4);
    }
    else {
      lVar12 = (ulonglong)verse_heap_mark_bits_page_commit_controller_not_large_vector.spine_size *
               2 + 2;
      _Dst = pas_immortal_heap_allocate
                       ((ulonglong)
                        verse_heap_mark_bits_page_commit_controller_not_large_vector.spine_size * 8
                        + 8,"verse_heap_mark_bits_page_commit_controller_vector/spine",
                        pas_object_allocation);
      if (0x1f < uVar9) {
        memcpy(_Dst,_Src,(ulonglong)(uVar15 * 4));
      }
      uVar9 = 0;
      memset((void *)((longlong)_Dst + (ulonglong)uVar15 * 4),0,(lVar12 - (ulonglong)uVar15) * 4);
      LOCK();
      UNLOCK();
      if (_Dst != (void *)0x0) {
        uVar10 = (longlong)_Dst - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar10 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar9 = (uint)(uVar10 >> 3);
      }
      LOCK();
      UNLOCK();
      verse_heap_mark_bits_page_commit_controller_not_large_vector.spine_size = (uint)lVar12;
      uVar1 = *(uint *)((longlong)_Dst + uVar14 * 4);
      _Src = _Dst;
      verse_heap_mark_bits_page_commit_controller_not_large_vector.spine.payload = uVar9;
    }
    uVar10 = (ulonglong)(uVar4 & 0x1f);
    uVar8 = (ulonglong)uVar1;
    if (uVar13 == uVar15) {
      if ((uVar1 != 0) && (pas_compact_heap_reservation_base != uVar8 * -8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar10 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      puVar7 = pas_immortal_heap_allocate_with_alignment
                         (0x60,1,"verse_heap_mark_bits_page_commit_controller_vector/segment",
                          pas_object_allocation);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      LOCK();
      UNLOCK();
      uVar8 = (longlong)puVar7 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar8 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar8 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar8 = uVar8 >> 3;
      *(int *)((longlong)_Src + uVar14 * 4) = (int)uVar8;
      uVar10 = 0;
    }
    lVar12 = 0;
    if ((int)uVar8 != 0) {
      lVar12 = pas_compact_heap_reservation_base + (uVar8 & 0xffffffff) * 8;
    }
    lVar3 = uVar10 * 3;
    *(char *)(lVar12 + lVar3) = (char)(uVar11 >> 3);
    *(char *)(lVar12 + 1 + lVar3) = (char)(uVar11 >> 0xb);
    *(char *)(lVar12 + 2 + lVar3) = (char)((uint)uVar11 >> 0x13);
    LOCK();
    UNLOCK();
    verse_heap_mark_bits_page_commit_controller_not_large_vector.size =
         verse_heap_mark_bits_page_commit_controller_not_large_vector.size + 1;
    if (verse_heap_mark_bits_page_commit_controller_not_large_vector.size == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    return pvVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// verse_heap_mark_bits_page_commit_controller_construct_large @ 140d71ab0

/* WARNING: Removing unreachable block (ram,0x000140d71aeb) */

void __cdecl
verse_heap_mark_bits_page_commit_controller_construct_large
          (verse_heap_mark_bits_page_commit_controller *param_1,ulong64 param_2)

{
  verse_heap_mark_bits_page_commit_controller_clean_count = 0;
  pas_scavenger_did_create_eligible();
  param_1->chunk_base = param_2;
  param_1->is_committed = pas_committed;
  LOCK();
  verse_heap_mark_bits_page_commit_controller_num_committed =
       verse_heap_mark_bits_page_commit_controller_num_committed + 1;
  UNLOCK();
  return;
}

// verse_heap_mark_bits_page_commit_controller_destruct_large @ 140d71b10

/* WARNING: Removing unreachable block (ram,0x000140d71b2b) */

void __cdecl
verse_heap_mark_bits_page_commit_controller_destruct_large
          (verse_heap_mark_bits_page_commit_controller *param_1)

{
  code *pcVar1;
  
  if (param_1->is_committed == pas_decommitted) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  LOCK();
  verse_heap_mark_bits_page_commit_controller_num_committed =
       verse_heap_mark_bits_page_commit_controller_num_committed - 1;
  UNLOCK();
  return;
}

// verse_heap_mark_bits_page_commit_controller_lock @ 140d71b40

/* WARNING: Removing unreachable block (ram,0x000140d71ccb) */
/* WARNING: Removing unreachable block (ram,0x000140d71ddb) */
/* WARNING: Removing unreachable block (ram,0x000140d71ceb) */
/* WARNING: Removing unreachable block (ram,0x000140d71dfb) */

void __cdecl verse_heap_mark_bits_page_commit_controller_lock(void)

{
  undefined1 uVar1;
  uchar uVar2;
  undefined2 uVar3;
  code *pcVar4;
  ulong64 uVar5;
  BOOLEAN BVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  
  if (verse_heap_mark_bits_page_commit_controller_is_locked) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  AcquireSRWLockExclusive((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
  if (verse_heap_mark_bits_page_commit_controller_is_locked == true) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  verse_heap_mark_bits_page_commit_controller_is_locked = true;
  if (verse_heap_mark_bits_page_commit_controller_num_decommitted != 0) {
    uVar7 = (ulonglong)verse_heap_mark_bits_page_commit_controller_not_large_vector.size;
    lVar8 = (ulonglong)verse_heap_mark_bits_page_commit_controller_not_large_vector.spine.payload *
            8 + pas_compact_heap_reservation_base;
    if ((ulonglong)verse_heap_mark_bits_page_commit_controller_not_large_vector.spine.payload == 0)
    {
      lVar8 = 0;
    }
    if (uVar7 != 0) {
      uVar13 = uVar7 - 1;
      uVar9 = 0;
      do {
        uVar12 = 0x20;
        if (uVar7 < 0x20) {
          uVar12 = uVar7;
        }
        uVar10 = (ulonglong)*(uint *)(lVar8 + uVar9 * 4);
        lVar11 = uVar10 * 8 + pas_compact_heap_reservation_base;
        if (uVar10 == 0) {
          lVar11 = 0;
        }
        lVar14 = 0;
        do {
          uVar5 = pas_compact_heap_reservation_base;
          uVar3 = *(undefined2 *)(lVar11 + lVar14 * 3);
          uVar1 = *(undefined1 *)(lVar11 + 2 + lVar14 * 3);
          BVar6 = TryAcquireSRWLockExclusive
                            ((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
          if (BVar6 != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar10 = (ulonglong)CONCAT12(uVar1,uVar3);
          if (*(int *)(uVar5 + 8 + uVar10 * 8) == 0) {
            pas_page_malloc_commit(*(void **)(uVar5 + uVar10 * 8),0x1000,pas_may_mmap);
            if (*(int *)(uVar5 + 8 + uVar10 * 8) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            *(undefined4 *)(uVar5 + 8 + uVar10 * 8) = 1;
            verse_heap_mark_bits_page_commit_controller_num_committed =
                 verse_heap_mark_bits_page_commit_controller_num_committed + 1;
            LOCK();
            UNLOCK();
            verse_heap_mark_bits_page_commit_controller_num_decommitted =
                 verse_heap_mark_bits_page_commit_controller_num_decommitted - 1;
            LOCK();
            UNLOCK();
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != uVar12 + (uVar12 == 0));
        uVar7 = uVar7 - 0x20;
        bVar15 = uVar9 != uVar13 >> 5;
        uVar9 = uVar9 + 1;
      } while (bVar15);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (verse_heap_all_objects.num_large_entries != 0) {
      uVar7 = 0;
      do {
        uVar5 = pas_compact_heap_reservation_base;
        uVar3 = *(undefined2 *)verse_heap_all_objects.large_entries[uVar7].payload;
        uVar2 = verse_heap_all_objects.large_entries[uVar7].payload[2];
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        BVar6 = TryAcquireSRWLockExclusive
                          ((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
        if (BVar6 != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar13 = (ulonglong)CONCAT12(uVar2,uVar3);
        if (*(int *)(uVar5 + 0x20 + uVar13 * 8) == 0) {
          pas_page_malloc_commit(*(void **)(uVar5 + 0x18 + uVar13 * 8),0x1000,pas_may_mmap);
          if (*(int *)(uVar5 + 0x20 + uVar13 * 8) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          *(undefined4 *)(uVar5 + 0x20 + uVar13 * 8) = 1;
          verse_heap_mark_bits_page_commit_controller_num_committed =
               verse_heap_mark_bits_page_commit_controller_num_committed + 1;
          LOCK();
          UNLOCK();
          verse_heap_mark_bits_page_commit_controller_num_decommitted =
               verse_heap_mark_bits_page_commit_controller_num_decommitted - 1;
          LOCK();
          UNLOCK();
        }
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        uVar7 = uVar7 + 1;
      } while (uVar7 < verse_heap_all_objects.num_large_entries);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (verse_heap_mark_bits_page_commit_controller_num_decommitted != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
  if (verse_heap_mark_bits_page_commit_controller_num_decommitted != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (verse_heap_mark_bits_page_commit_controller_is_locked == false) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  return;
}

// verse_heap_mark_bits_page_commit_controller_unlock @ 140d71e70

void __cdecl verse_heap_mark_bits_page_commit_controller_unlock(void)

{
  code *pcVar1;
  
  if (!verse_heap_mark_bits_page_commit_controller_is_locked) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_mark_bits_page_commit_controller_num_decommitted != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  AcquireSRWLockExclusive((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
  if (verse_heap_mark_bits_page_commit_controller_is_locked == false) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  verse_heap_mark_bits_page_commit_controller_is_locked = false;
  verse_heap_mark_bits_page_commit_controller_clean_count = 0;
  if (verse_heap_mark_bits_page_commit_controller_num_decommitted == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
    pas_scavenger_did_create_eligible();
    pas_scavenger_notify_eligibility_if_needed();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_mark_bits_page_commit_controller_decommit_if_possible @ 140d71ef0

bool __cdecl verse_heap_mark_bits_page_commit_controller_decommit_if_possible(void)

{
  bool bVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
  bVar1 = try_decommit();
  ReleaseSRWLockExclusive((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
  return bVar1;
}

// try_decommit @ 140d71f30

/* WARNING: Removing unreachable block (ram,0x000140d7202b) */
/* WARNING: Removing unreachable block (ram,0x000140d7211b) */
/* WARNING: Removing unreachable block (ram,0x000140d7213b) */
/* WARNING: Removing unreachable block (ram,0x000140d7204b) */

bool __cdecl try_decommit(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  BOOLEAN BVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  BVar4 = TryAcquireSRWLockExclusive
                    ((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
  bVar3 = verse_heap_mark_bits_page_commit_controller_is_locked;
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((verse_heap_mark_bits_page_commit_controller_is_locked == false) &&
     (verse_heap_mark_bits_page_commit_controller_num_committed != 0)) {
    uVar8 = (ulonglong)verse_heap_mark_bits_page_commit_controller_not_large_vector.size;
    lVar9 = pas_compact_heap_reservation_base +
            (ulonglong)verse_heap_mark_bits_page_commit_controller_not_large_vector.spine.payload *
            8;
    if ((ulonglong)verse_heap_mark_bits_page_commit_controller_not_large_vector.spine.payload == 0)
    {
      lVar9 = 0;
    }
    if (uVar8 != 0) {
      uVar13 = uVar8 - 1;
      uVar10 = 0;
      uVar12 = pas_compact_heap_reservation_base;
      do {
        uVar11 = 0x20;
        if (uVar8 < 0x20) {
          uVar11 = uVar8;
        }
        uVar5 = (ulonglong)*(uint *)(lVar9 + uVar10 * 4);
        lVar7 = uVar12 + uVar5 * 8;
        if (uVar5 == 0) {
          lVar7 = 0;
        }
        lVar6 = 0;
        do {
          uVar5 = (ulonglong)
                  CONCAT12(*(undefined1 *)(lVar7 + 2 + lVar6 * 3),*(undefined2 *)(lVar7 + lVar6 * 3)
                          );
          if (*(int *)(uVar12 + 8 + uVar5 * 8) != 0) {
            *(undefined4 *)(uVar12 + 8 + uVar5 * 8) = 0;
            verse_heap_mark_bits_page_commit_controller_num_committed =
                 verse_heap_mark_bits_page_commit_controller_num_committed - 1;
            LOCK();
            UNLOCK();
            verse_heap_mark_bits_page_commit_controller_num_decommitted =
                 verse_heap_mark_bits_page_commit_controller_num_decommitted + 1;
            LOCK();
            UNLOCK();
            pas_page_malloc_decommit(*(void **)(uVar12 + uVar5 * 8),0x1000,pas_may_mmap);
            lVar1 = uVar12 + 8;
            uVar12 = pas_compact_heap_reservation_base;
            if (*(int *)(lVar1 + uVar5 * 8) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != uVar11 + (uVar11 == 0));
        uVar8 = uVar8 - 0x20;
        bVar14 = uVar10 != uVar13 >> 5;
        uVar10 = uVar10 + 1;
      } while (bVar14);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (verse_heap_all_objects.num_large_entries != 0) {
      uVar8 = 0;
      do {
        uVar12 = pas_compact_heap_reservation_base;
        uVar13 = (ulonglong)
                 CONCAT12(verse_heap_all_objects.large_entries[uVar8].payload[2],
                          *(undefined2 *)verse_heap_all_objects.large_entries[uVar8].payload);
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if (*(int *)(uVar12 + 0x20 + uVar13 * 8) != 0) {
          *(undefined4 *)(uVar12 + 0x20 + uVar13 * 8) = 0;
          verse_heap_mark_bits_page_commit_controller_num_committed =
               verse_heap_mark_bits_page_commit_controller_num_committed - 1;
          LOCK();
          UNLOCK();
          verse_heap_mark_bits_page_commit_controller_num_decommitted =
               verse_heap_mark_bits_page_commit_controller_num_decommitted + 1;
          LOCK();
          UNLOCK();
          pas_page_malloc_decommit(*(void **)(uVar12 + 0x18 + uVar13 * 8),0x1000,pas_may_mmap);
          if (*(int *)(uVar12 + 0x20 + uVar13 * 8) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        uVar8 = uVar8 + 1;
      } while (uVar8 < verse_heap_all_objects.num_large_entries);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  return (bool)(bVar3 ^ 1);
}

// verse_heap_mark_bits_page_commit_controller_scavenge_periodic @ 140d721a0

bool __cdecl verse_heap_mark_bits_page_commit_controller_scavenge_periodic(void)

{
  code *pcVar1;
  bool bVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
  bVar2 = false;
  if ((verse_heap_mark_bits_page_commit_controller_is_locked == false) &&
     (bVar2 = false, verse_heap_mark_bits_page_commit_controller_num_committed != 0)) {
    if (verse_heap_mark_bits_page_commit_controller_clean_count < 3) {
      verse_heap_mark_bits_page_commit_controller_clean_count =
           verse_heap_mark_bits_page_commit_controller_clean_count + 1;
      bVar2 = true;
    }
    else {
      bVar2 = try_decommit();
      if (!bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      bVar2 = verse_heap_mark_bits_page_commit_controller_num_committed != 0;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
  return bVar2;
}


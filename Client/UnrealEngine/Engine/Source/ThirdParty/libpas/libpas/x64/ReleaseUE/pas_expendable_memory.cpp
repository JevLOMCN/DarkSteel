// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 6

// pas_expendable_memory_state_version_next @ 140d92230

ulong64 __cdecl pas_expendable_memory_state_version_next(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pas_expendable_memory_version_counter = pas_expendable_memory_version_counter + 1;
  if (1 < pas_expendable_memory_version_counter) {
    return pas_expendable_memory_version_counter;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_expendable_memory_construct @ 140d92270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl pas_expendable_memory_construct(pas_expendable_memory *param_1,ulong64 param_2)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  param_1->bump = 0;
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1->size = (uint)param_2;
  param_1->wilderness_is_committed = true;
  uVar3 = _UNK_151c6bc98;
  uVar2 = ___xmm_00000000000000080000000000000008;
  param_1->wilderness_clean_count = '\0';
  if ((param_2 & 0x3fff) == 0) {
    if (param_2 != 0) {
      uVar4 = param_2 >> 0xe;
      if (0xffff < param_2) {
        lVar5 = 0;
        do {
          param_1->states[uVar4 + lVar5 + -2] = uVar2;
          (param_1->states + uVar4 + lVar5 + -2)[1] = uVar3;
          param_1->states[uVar4 + lVar5 + -4] = uVar2;
          (param_1->states + uVar4 + lVar5 + -4)[1] = uVar3;
          lVar5 = lVar5 + -4;
        } while (-lVar5 != (ulonglong)((uint)param_2 >> 0xe & 0xfffffffc));
        bVar6 = uVar4 == ((uint)uVar4 & 0x3fffc);
        uVar4 = (ulonglong)((uint)uVar4 & 3);
        if (bVar6) {
          return;
        }
      }
      do {
        param_1->states[uVar4 - 1] = 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_expendable_memory_try_allocate @ 140d92320

void * __cdecl
pas_expendable_memory_try_allocate
          (pas_expendable_memory *param_1,void *param_2,ulong64 param_3,ulong64 param_4,
          pas_heap_kind param_5,char *param_6)

{
  ulong64 uVar1;
  ulong64 *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  void *pvVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar6 != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar3 = param_1->size;
  uVar7 = (ulonglong)uVar3;
  if ((uVar3 & 0x3fff) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((param_5 & ~pas_reservation_free_heap_kind) != pas_compact_expendable_heap_kind) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((param_3 != 0) && (uVar4 = param_1->bump, 7 < uVar7 - uVar4 && uVar4 < uVar3)) {
    if ((param_4 ^ param_4 - 1) <= param_4 - 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar8 = -param_4 & uVar4 + param_4 + 7;
    if (param_3 <= uVar7 - uVar8 && uVar8 < uVar7) {
      if (param_1->wilderness_is_committed == false) {
        if (pas_reservation_commit_mode != pas_decommitted) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (pas_page_malloc_cached_alignment == 0) {
          pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
        }
        uVar1 = pas_page_malloc_cached_alignment;
        if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
            pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar3 = param_1->bump;
        uVar4 = param_1->size;
        if (pas_page_malloc_cached_alignment == 0) {
          pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
        }
        uVar7 = pas_page_malloc_cached_alignment - 1;
        if ((pas_page_malloc_cached_alignment ^ uVar7) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar13 = (ulonglong)uVar4 + (longlong)param_2;
        if ((uVar7 & uVar13) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        pvVar15 = (void *)(-uVar1 & (longlong)param_2 + uVar3 + uVar1 + -1);
        pas_page_malloc_commit(pvVar15,uVar13 - (longlong)pvVar15,pas_may_mmap);
        param_1->wilderness_is_committed = true;
      }
      param_1->wilderness_clean_count = '\0';
      uVar11 = uVar8 - 8 >> 0xe;
      uVar13 = (uVar8 + param_3) - 1 >> 0xe;
      uVar9 = param_1->states[uVar13] >> 3;
      uVar7 = param_1->states[uVar11] >> 3;
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      uVar1 = uVar7 * 8 + 2;
      param_1->states[uVar11] = uVar1;
      param_1->states[uVar13] = uVar1;
      uVar9 = uVar11 + 1;
      if (uVar9 < uVar13) {
        uVar10 = uVar7 * 8 | 1;
        uVar12 = ~uVar11 + uVar13;
        if (3 < uVar12) {
          uVar16 = uVar12 & 0xfffffffffffffffc;
          uVar9 = uVar9 + uVar16;
          uVar17 = (undefined4)uVar10;
          uVar18 = (undefined4)(uVar7 * 8 >> 0x20);
          uVar14 = 0;
          do {
            puVar2 = param_1[1].states + uVar11 + (uVar14 - 2);
            *(undefined4 *)puVar2 = uVar17;
            *(undefined4 *)((longlong)puVar2 + 4) = uVar18;
            *(undefined4 *)(puVar2 + 1) = uVar17;
            *(undefined4 *)((longlong)puVar2 + 0xc) = uVar18;
            puVar2 = param_1[1].states + uVar11 + uVar14;
            *(undefined4 *)puVar2 = uVar17;
            *(undefined4 *)((longlong)puVar2 + 4) = uVar18;
            *(undefined4 *)(puVar2 + 1) = uVar17;
            *(undefined4 *)((longlong)puVar2 + 0xc) = uVar18;
            uVar14 = uVar14 + 4;
          } while (uVar16 != uVar14);
          if (uVar12 == uVar16) goto LAB_140d9253d;
        }
        do {
          param_1->states[uVar9] = uVar10;
          uVar9 = uVar9 + 1;
        } while (uVar13 != uVar9);
      }
LAB_140d9253d:
      if (uVar8 + param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      param_1->bump = (uint)(uVar8 + param_3);
      pvVar15 = (void *)((longlong)param_2 + uVar8);
      *(ulonglong *)((longlong)param_2 + (uVar8 - 8)) = uVar7;
      if (param_2 == (void *)0x0 ||
          pas_allocation_callback ==
          (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_char_ptr_pas_allocation_kind *)0x0) {
        return pvVar15;
      }
      (*pas_allocation_callback)(pvVar15,param_3,param_5,param_6,pas_object_allocation);
      return pvVar15;
    }
  }
  return (void *)0x0;
}

// pas_expendable_memory_allocate @ 140d925b0

void * __cdecl
pas_expendable_memory_allocate
          (pas_expendable_memory *param_1,void *param_2,ulong64 param_3,ulong64 param_4,
          pas_heap_kind param_5,char *param_6)

{
  code *pcVar1;
  void *pvVar2;
  
  pvVar2 = pas_expendable_memory_try_allocate(param_1,param_2,param_3,param_4,param_5,param_6);
  if (param_3 == 0 || pvVar2 != (void *)0x0) {
    return pvVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_expendable_memory_commit_if_necessary @ 140d925f0

bool __cdecl
pas_expendable_memory_commit_if_necessary
          (pas_expendable_memory *param_1,void *param_2,void *param_3,ulong64 param_4)

{
  ulong64 uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar7 = (ulonglong)((longlong)param_3 + (-8 - (longlong)param_2)) >> 0xe;
  uVar6 = (longlong)param_3 + (param_4 - (longlong)param_2) + -1 >> 0xe;
  uVar4 = *(ulonglong *)((longlong)param_3 + -8);
  uVar5 = param_1->states[uVar7] >> 3;
  if ((uVar7 == uVar6) || (((uint)param_1->states[uVar6] & 7) == 1)) {
    if (uVar5 != uVar4) {
      if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      if (BVar3 != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = pas_expendable_memory_version_counter + 1;
      pas_expendable_memory_version_counter = uVar4;
      if (uVar4 < 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      param_1->states[uVar7] = uVar4 * 8 + 2;
      goto LAB_140d92684;
    }
  }
  else if ((uVar5 != uVar4) || (param_1->states[uVar6] >> 3 != uVar4)) {
    if (uVar5 < uVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar4 = pas_expendable_memory_state_version_next();
    uVar1 = uVar4 * 8 + 2;
    param_1->states[uVar7] = uVar1;
    param_1->states[uVar6] = uVar1;
LAB_140d92684:
    *(ulonglong *)((longlong)param_3 + -8) = uVar4;
    return true;
  }
  return false;
}

// pas_expendable_memory_scavenge @ 140d926f0

bool __cdecl
pas_expendable_memory_scavenge
          (pas_expendable_memory *param_1,void *param_2,pas_expendable_memory_scavenge_kind param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  void *pvVar11;
  ulonglong uVar12;
  
  if (param_3 == pas_expendable_memory_scavenge_periodic) {
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pas_expendable_memory_version_counter = pas_expendable_memory_version_counter + 1;
    if (pas_expendable_memory_version_counter < 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar7 = param_1->size;
    if (uVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((uVar7 & 0x3fff) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar2 = param_1->bump;
    if (uVar7 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((ulonglong)uVar2 == 0) {
      bVar8 = false;
    }
    else {
      uVar5 = (ulonglong)uVar2 + 0x3fff >> 0xe;
      uVar10 = pas_expendable_memory_version_counter * 8;
      uVar12 = 0;
      bVar8 = false;
      do {
        uVar7 = (uint)param_1->states[uVar12] & 7;
        if (1 < uVar7) {
          if (uVar7 < 5) {
            param_1->states[uVar12] =
                 (ulonglong)(uVar7 + 1) | param_1->states[uVar12] & 0xfffffffffffffff8;
            bVar8 = true;
          }
          else {
            if (uVar7 != 5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar6 = uVar12;
            uVar9 = uVar12;
            if (uVar12 < uVar5) {
              do {
                uVar7 = (uint)param_1->states[uVar9] & 7;
                if (uVar7 != 1) {
                  uVar6 = uVar9;
                  if (uVar7 != 5) break;
                  param_1->states[uVar9] = uVar10;
                }
                uVar9 = uVar9 + 1;
                uVar6 = uVar5;
              } while (uVar5 != uVar9);
            }
            pas_page_malloc_decommit_without_mprotect
                      ((void *)(uVar12 * 0x4000 + (longlong)param_2),(uVar6 - uVar12) * 0x4000,
                       pas_may_not_mmap);
            uVar12 = uVar6 - 1;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar5);
    }
    if ((pas_reservation_commit_mode == pas_decommitted) &&
       (param_1->wilderness_is_committed == true)) {
      if (pas_page_malloc_cached_alignment == 0) {
        pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
      }
      uVar10 = pas_page_malloc_cached_alignment;
      if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
          pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar7 = param_1->bump;
      uVar2 = param_1->size;
      if (pas_page_malloc_cached_alignment == 0) {
        pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
      }
      uVar12 = pas_page_malloc_cached_alignment - 1;
      if ((pas_page_malloc_cached_alignment ^ uVar12) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = (ulonglong)uVar2 + (longlong)param_2;
      if ((uVar12 & uVar5) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar1 = param_1->wilderness_clean_count;
      if (bVar1 == 3) {
        pvVar11 = (void *)(-uVar10 & (longlong)param_2 + uVar7 + uVar10 + -1);
        pas_page_malloc_decommit(pvVar11,uVar5 - (longlong)pvVar11,pas_may_mmap);
        param_1->wilderness_is_committed = false;
      }
      else {
        if (2 < bVar1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        param_1->wilderness_clean_count = bVar1 + 1;
        bVar8 = true;
      }
    }
  }
  else {
    if (pas_expendable_memory_scavenge_forced_fake < param_3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pas_expendable_memory_version_counter = pas_expendable_memory_version_counter + 1;
    if (pas_expendable_memory_version_counter < 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar7 = param_1->size;
    if (uVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((uVar7 & 0x3fff) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar2 = param_1->bump;
    if (uVar7 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((ulonglong)uVar2 != 0) {
      uVar12 = (ulonglong)uVar2 + 0x3fff >> 0xe;
      uVar10 = pas_expendable_memory_version_counter * 8;
      if (param_3 == pas_expendable_memory_scavenge_forced_fake) {
        uVar5 = 0;
        do {
          if ((param_1->states[uVar5] & 6) != 0) {
            uVar6 = uVar5;
            if (uVar5 < uVar12) {
              do {
                uVar7 = (uint)param_1->states[uVar6] & 7;
                if (uVar7 != 1) {
                  uVar5 = uVar6;
                  if (uVar7 == 0) break;
                  param_1->states[uVar6] = uVar10;
                }
                uVar6 = uVar6 + 1;
                uVar5 = uVar12;
              } while (uVar12 != uVar6);
            }
            uVar5 = uVar5 - 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar12);
      }
      else {
        uVar5 = 0;
        do {
          if ((param_1->states[uVar5] & 6) != 0) {
            uVar6 = uVar5;
            uVar9 = uVar5;
            if (uVar5 < uVar12) {
              do {
                uVar7 = (uint)param_1->states[uVar9] & 7;
                if (uVar7 != 1) {
                  uVar6 = uVar9;
                  if (uVar7 == 0) break;
                  param_1->states[uVar9] = uVar10;
                }
                uVar9 = uVar9 + 1;
                uVar6 = uVar12;
              } while (uVar12 != uVar9);
            }
            pas_page_malloc_decommit_without_mprotect
                      ((void *)(uVar5 * 0x4000 + (longlong)param_2),(uVar6 - uVar5) * 0x4000,
                       pas_may_not_mmap);
            uVar5 = uVar6 - 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar12);
      }
    }
    if ((pas_reservation_commit_mode == pas_decommitted) &&
       (param_1->wilderness_is_committed == true)) {
      if (pas_page_malloc_cached_alignment == 0) {
        pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
      }
      uVar10 = pas_page_malloc_cached_alignment;
      if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
          pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar7 = param_1->bump;
      uVar2 = param_1->size;
      if (pas_page_malloc_cached_alignment == 0) {
        pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
      }
      uVar12 = pas_page_malloc_cached_alignment - 1;
      if ((pas_page_malloc_cached_alignment ^ uVar12) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = (ulonglong)uVar2 + (longlong)param_2;
      if ((uVar12 & uVar5) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (param_3 != pas_expendable_memory_scavenge_forced_fake) {
        pvVar11 = (void *)(-uVar10 & (longlong)param_2 + uVar7 + uVar10 + -1);
        pas_page_malloc_decommit(pvVar11,uVar5 - (longlong)pvVar11,pas_may_mmap);
      }
      param_1->wilderness_is_committed = false;
    }
    bVar8 = false;
  }
  return bVar8;
}


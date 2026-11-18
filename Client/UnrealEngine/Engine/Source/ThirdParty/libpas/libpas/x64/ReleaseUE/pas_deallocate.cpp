// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 5

// pas_try_deallocate_known_large @ 140d65710

bool __cdecl
pas_try_deallocate_known_large(void *param_1,pas_heap_config *param_2,pas_deallocation_mode param_3)

{
  code *pcVar1;
  bool bVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  bVar2 = pas_large_heap_try_deallocate((ulong64)param_1,param_2);
  if (bVar2) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_scavenger_notify_eligibility_if_needed();
  }
  else {
    if (param_3 != pas_try_deallocate_mode) {
      if (param_3 == pas_deallocate_mode) {
                    /* WARNING: Subroutine does not return */
        pas_deallocation_did_fail("Large heap did not find object",(ulong64)param_1);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  return bVar2;
}

// pas_deallocate_known_large @ 140d65790

void __cdecl pas_deallocate_known_large(void *param_1,pas_heap_config *param_2)

{
  bool bVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  bVar1 = pas_large_heap_try_deallocate((ulong64)param_1,param_2);
  if (bVar1) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_scavenger_notify_eligibility_if_needed();
    return;
  }
                    /* WARNING: Subroutine does not return */
  pas_deallocation_did_fail("Large heap did not find object",(ulong64)param_1);
}

// pas_try_deallocate_slow @ 140d657f0

bool __cdecl
pas_try_deallocate_slow(ulong64 param_1,pas_heap_config *param_2,pas_deallocation_mode param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = true;
  if (param_1 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    bVar2 = pas_large_heap_try_deallocate(param_1,param_2);
    if (bVar2) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      pas_scavenger_notify_eligibility_if_needed();
    }
    else {
      if (param_3 != pas_try_deallocate_mode) {
        if (param_3 == pas_deallocate_mode) {
                    /* WARNING: Subroutine does not return */
          pas_deallocation_did_fail("Large heap did not find object",param_1);
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      bVar3 = false;
    }
  }
  return bVar3;
}

// pas_try_deallocate_slow_no_cache @ 140d65880

bool __cdecl
pas_try_deallocate_slow_no_cache
          (void *param_1,pas_heap_config *param_2,pas_deallocation_mode param_3)

{
  bool bVar1;
  uchar uVar2;
  longlong lVar3;
  ulonglong uVar4;
  _func___cdecl_pas_page_base_ptr_void_ptr *p_Var5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  pas_fast_megapage_kind pVar9;
  pas_bitfit_page *ppVar10;
  pas_bitfit_page *ppVar11;
  pas_segregated_page_config *ppVar12;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar4 = *(ulonglong *)(lVar3 + 0x9c08);
  if (uVar4 != 1) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
      uVar4 = *(ulonglong *)(lVar3 + 0x9c08);
    }
    if (uVar4 < 2) {
      pas_thread_local_cache_get_slow(param_2,pas_lock_is_not_held);
    }
  }
  pVar9 = (*param_2->fast_megapage_kind_func)((ulong64)param_1);
  if (pVar9 == pas_not_a_fast_megapage_kind) {
    ppVar10 = (pas_bitfit_page *)(*param_2->page_header_func)((ulong64)param_1);
    if (ppVar10 == (pas_bitfit_page *)0x0) {
      if (param_1 == (void *)0x0) {
        return true;
      }
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      bVar8 = pas_large_heap_try_deallocate((ulong64)param_1,param_2);
      if (bVar8) {
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        pas_scavenger_notify_eligibility_if_needed();
        return true;
      }
      if (param_3 == pas_try_deallocate_mode) {
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        return false;
      }
      if (param_3 != pas_deallocate_mode) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
                    /* WARNING: Subroutine does not return */
      pas_deallocation_did_fail("Large heap did not find object",(ulong64)param_1);
    }
    switch((ppVar10->base).page_kind) {
    case '\x01':
      if (param_2->small_segregated_is_in_megapage == true) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      goto LAB_140d65a64;
    case '\x02':
      if (param_2->small_segregated_is_in_megapage == true) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      goto LAB_140d65927;
    case '\x03':
      ppVar12 = &param_2->medium_segregated_config;
      goto LAB_140d65a68;
    case '\x04':
      ppVar12 = &param_2->medium_segregated_config;
      goto LAB_140d6592b;
    case '\x05':
      if (param_2->small_bitfit_is_in_megapage == true) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      goto LAB_140d65af7;
    case '\x06':
      (*(param_2->medium_bitfit_config).specialized_page_deallocate_with_page)
                (ppVar10,(ulong64)param_1);
      break;
    case '\a':
      (*(param_2->marge_bitfit_config).specialized_page_deallocate_with_page)
                (ppVar10,(ulong64)param_1);
      break;
    default:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
  else {
    if (pVar9 != pas_small_other_fast_megapage_kind) {
      if (pVar9 != pas_small_exclusive_segregated_fast_megapage_kind) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
LAB_140d65927:
      ppVar12 = &param_2->small_segregated_config;
LAB_140d6592b:
      deallocate_segregated((ulong64)param_1,ppVar12,pas_segregated_page_exclusive_role);
      return true;
    }
    bVar8 = (param_2->small_segregated_config).base.is_enabled;
    uVar4 = (param_2->small_segregated_config).base.page_size;
    p_Var5 = (param_2->small_segregated_config).base.page_header_for_boundary;
    bVar1 = param_2->small_segregated_is_in_megapage;
    if ((((param_2->small_bitfit_config).base.is_enabled & 1U) == 0) ||
       ((param_2->small_bitfit_is_in_megapage & 1U) == 0)) {
      if (((bVar8 & 1U) == 0) || ((bVar1 & 1U) == 0)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if ((uVar4 ^ uVar4 - 1) <= uVar4 - 1) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      (*p_Var5)((void *)(-uVar4 & (ulonglong)param_1));
    }
    else {
      uVar6 = (param_2->small_bitfit_config).base.page_size;
      if ((uVar6 ^ uVar6 - 1) <= uVar6 - 1) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      ppVar10 = (pas_bitfit_page *)
                (*(param_2->small_bitfit_config).base.page_header_for_boundary)
                          ((void *)(-uVar6 & (ulonglong)param_1));
      if (((bVar8 & 1U) == 0) || ((bVar1 & 1U) == 0)) {
LAB_140d65af7:
        (*(param_2->small_bitfit_config).specialized_page_deallocate_with_page)
                  (ppVar10,(ulong64)param_1);
        return true;
      }
      if (uVar6 != uVar4) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if ((uVar4 ^ uVar4 - 1) <= uVar4 - 1) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      ppVar11 = (pas_bitfit_page *)(*p_Var5)((void *)(-uVar4 & (ulonglong)param_1));
      if (ppVar11 != ppVar10) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar2 = (ppVar10->base).page_kind;
      if (uVar2 == '\x05') goto LAB_140d65af7;
      if (uVar2 != '\x01') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
    }
LAB_140d65a64:
    ppVar12 = &param_2->small_segregated_config;
LAB_140d65a68:
    deallocate_segregated((ulong64)param_1,ppVar12,pas_segregated_page_shared_role);
  }
  return true;
}

// deallocate_segregated @ 140d65b90

void __cdecl
deallocate_segregated
          (ulong64 param_1,pas_segregated_page_config *param_2,pas_segregated_page_role param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  pas_segregated_page_config_variant pVar6;
  pas_segregated_page_config_kind pVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  verse_heap_chunk_map_entry *pvVar11;
  code *pcVar12;
  byte bVar13;
  uint uVar14;
  pas_segregated_page *ppVar15;
  ulong64 uVar16;
  PSRWLOCK SRWLock;
  sbyte sVar17;
  uint uVar18;
  pas_segregated_partial_view *ppVar19;
  pas_segregated_page *ppVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  pas_segregated_view_opaque *ppVar24;
  ulonglong uVar25;
  uint uVar26;
  bool bVar27;
  
  if (((param_2->base).is_enabled & 1U) == 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  uVar8 = (param_2->base).page_size;
  uVar23 = uVar8 - 1;
  if ((uVar8 ^ uVar23) <= uVar23) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  bVar1 = (param_2->base).min_align_shift;
  uVar9 = (param_2->base).granule_size;
  pVar6 = param_2->variant;
  pVar7 = param_2->kind;
  bVar2 = param_2->sharing_shift;
  uVar10 = param_2->num_alloc_bits;
  bVar27 = param_2->check_deallocation;
  bVar3 = param_2->enable_empty_word_eligibility_optimization_for_shared;
  bVar4 = param_2->enable_empty_word_eligibility_optimization_for_exclusive;
  ppVar15 = (pas_segregated_page *)
            (*(param_2->base).page_header_for_boundary)((void *)(-uVar8 & param_1));
  if ((pVar7 == pas_segregated_page_config_kind_pas_utility_small) ||
     (ppVar15->lock_ptr == (pas_lock *)0x0)) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)
              pas_segregated_page_switch_lock_slow(ppVar15,(pas_lock *)0x0,ppVar15->lock_ptr);
  }
  bVar13 = (byte)((ulonglong)bVar1 + 5);
  uVar25 = uVar8 >> (bVar13 & 0x3f);
  uVar21 = uVar25 - 1;
  if ((uVar25 ^ uVar21) <= uVar21) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  uVar21 = uVar21 & param_1 >> (bVar13 & 0x3f);
  uVar26 = (uint)(param_1 >> (bVar1 & 0x3f));
  if (((bVar27 & 1U) != 0) && ((ppVar15->alloc_bits[uVar21] >> (uVar26 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    pas_segregated_page_deallocation_did_fail((ulonglong)bVar1 + 5);
  }
  uVar26 = ppVar15->alloc_bits[uVar21] & ~(1 << (uVar26 & 0x1f));
  ppVar15->alloc_bits[uVar21] = uVar26;
  if (param_3 == pas_segregated_page_shared_role) {
    bVar4 = bVar3;
  }
  if (((bVar4 & 1) == 0) || (uVar26 == 0)) {
    ppVar24 = ppVar15->owner;
    if (param_3 == pas_segregated_page_exclusive_role) {
      if (((ulonglong)ppVar24 & 7) != 0) {
        ppVar24 = (pas_segregated_view_opaque *)((ulonglong)ppVar24 & 0xfffffffffffffff8);
        if (ppVar15->is_in_use_for_allocation == true) {
          ppVar15->eligibility_notification_has_been_deferred = true;
          ppVar15->owner = ppVar24;
        }
        else {
          pas_segregated_directory_view_did_become_eligible_at_index
                    ((pas_segregated_directory *)
                     (((uint)(byte)ppVar24[10] * 0x80000 + (uint)*(ushort *)(ppVar24 + 8) * 8) +
                     pas_compact_heap_reservation_base),(ulonglong)*(uint *)(ppVar24 + 0xc));
          ppVar15->owner = ppVar24;
        }
      }
    }
    else {
      if (((uint)ppVar24 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      uVar21 = ((uVar23 & param_1) >> (bVar1 & 0x3f)) >> (bVar2 & 0x3f);
      if (uVar10 >> (bVar2 & 0x3f) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      uVar21 = (ulonglong)*(uint *)(((ulonglong)ppVar24 & 0xfffffffffffffff8) + 0x14 + uVar21 * 4);
      ppVar19 = (pas_segregated_partial_view *)(uVar21 * 8 + pas_compact_heap_reservation_base);
      if (uVar21 == 0) {
        ppVar19 = (pas_segregated_partial_view *)0x0;
      }
      if (!ppVar19->eligibility_has_been_noted) {
        pas_segregated_partial_view_note_eligibility(ppVar19,ppVar15);
      }
    }
  }
  if (uVar9 < uVar8) {
    uVar23 = uVar23 & param_1;
    ppVar24 = ppVar15->owner;
    if (((ulonglong)ppVar24 & 6) == 0) {
      uVar14 = ppVar15->object_size;
      if (uVar14 != 0) goto LAB_140d65dfb;
LAB_140d65e49:
      bVar27 = false;
    }
    else {
      if (((uint)ppVar24 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      uVar21 = (uVar23 >> (bVar1 & 0x3f)) >> (bVar2 & 0x3f);
      if (uVar10 >> (bVar2 & 0x3f) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      uVar21 = (ulonglong)*(uint *)(((ulonglong)ppVar24 & 0xfffffffffffffff8) + 0x14 + uVar21 * 4);
      lVar22 = pas_compact_heap_reservation_base + uVar21 * 8;
      if (uVar21 == 0) {
        lVar22 = 0;
      }
      uVar14 = *(uint *)((ulonglong)
                         ((uint)*(byte *)(lVar22 + 0xd) * 0x80000 +
                         (uint)*(ushort *)(lVar22 + 0xb) * 8) + 0x20 +
                        pas_compact_heap_reservation_base) & 0x7ffffff;
      if (uVar14 == 0) goto LAB_140d65e49;
LAB_140d65dfb:
      uVar21 = (uVar14 + uVar23) - 1;
      if ((uVar21 | uVar9) >> 0x20 == 0) {
        uVar21 = (uVar21 & 0xffffffff) / (uVar9 & 0xffffffff);
        if ((uVar8 | uVar9) >> 0x20 != 0) goto LAB_140d65e23;
LAB_140d65e60:
        if ((uVar8 & 0xffffffff) / (uVar9 & 0xffffffff) <= uVar21) {
LAB_140d65e6d:
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
      }
      else {
        uVar21 = uVar21 / uVar9;
        if ((uVar8 | uVar9) >> 0x20 == 0) goto LAB_140d65e60;
LAB_140d65e23:
        if (uVar8 / uVar9 <= uVar21) goto LAB_140d65e6d;
      }
      if ((uVar23 | uVar9) >> 0x20 == 0) {
        uVar23 = (uVar23 & 0xffffffff) / (uVar9 & 0xffffffff);
      }
      else {
        uVar23 = uVar23 / uVar9;
      }
      if (uVar21 < uVar23) goto LAB_140d65e49;
      lVar22 = (uVar10 + 0x1f >> 5) * 4 + 0x2c;
      bVar27 = false;
      do {
        cVar5 = *(char *)((longlong)ppVar15->alloc_bits + uVar23 + lVar22 + -0x2c);
        if (cVar5 == '\0') {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if (cVar5 == -1) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        *(char *)((longlong)ppVar15->alloc_bits + uVar23 + lVar22 + -0x2c) = cVar5 + -1;
        bVar27 = (bool)(bVar27 | (char)(cVar5 + -1) == '\0');
        uVar23 = uVar23 + 1;
      } while (uVar23 <= uVar21);
    }
    if (pas_segregated_page_deallocate_should_verify_granules == true) {
      pas_segregated_page_verify_granules(ppVar15);
    }
    if (bVar27) {
      pas_segregated_page_note_emptiness_impl(ppVar15,pas_note_emptiness_keep_num_non_empty_words);
    }
  }
  if ((pVar7 & ~pas_segregated_page_config_kind_pas_utility_small) ==
      pas_segregated_page_config_kind_verse_small_segregated) {
    uVar16 = (ppVar15->emptiness).num_non_empty_words_or_live_bytes -
             (ulonglong)ppVar15->object_size;
    if (uVar16 == 0) {
      if (ppVar15[-1].emptiness.num_non_empty_words_or_live_bytes != 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      ppVar20 = ppVar15 + -1;
      if (pVar6 == pas_medium_segregated_page_config_variant) {
        ppVar20 = (pas_segregated_page *)ppVar15[-2].owner;
      }
      if ((ulonglong)ppVar20 >> 0x30 != 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      pvVar11 = verse_heap_first_level_chunk_map[(ulonglong)ppVar20 >> 0x22];
      uVar26 = (uint)((ulonglong)ppVar20 >> 0x13) & 0x7fff;
      if (pVar6 == pas_medium_segregated_page_config_variant) {
        uVar14 = pvVar11[uVar26].encoded_value[0];
        if ((uVar14 & 3) != 2) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        uVar23 = (ulonglong)(uVar14 & 0xfffffff8);
        if ((pas_segregated_page *)(pas_compact_heap_reservation_base + uVar23 + 0x40) != ppVar15) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if ((uVar14 & 4) == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if (pas_compact_heap_reservation_base + uVar23 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        pvVar11[uVar26].encoded_value[0] = uVar14 & 0xfffffff8 | 2;
      }
      else if (pVar6 == pas_small_segregated_page_config_variant) {
        if ((pvVar11[uVar26].encoded_value[0] & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        uVar14 = (uint)ppVar20 & 0x7ffff;
        if (uVar14 < 0x4000) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        sVar17 = (sbyte)(uVar14 >> 0xe);
        do {
          uVar14 = pvVar11[uVar26].encoded_value[0];
          uVar18 = uVar14 & (-2 << sVar17 | 0xfffffffeU >> 0x20 - sVar17);
          if (uVar14 == uVar18) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          LOCK();
          bVar27 = uVar14 == pvVar11[uVar26].encoded_value[0];
          if (bVar27) {
            pvVar11[uVar26].encoded_value[0] = uVar18;
          }
          UNLOCK();
        } while (!bVar27);
      }
LAB_140d66052:
      pas_segregated_page_note_emptiness_impl(ppVar15,pas_note_emptiness_clear_num_non_empty_words);
      goto joined_r0x000140d65fcb;
    }
  }
  else {
    if (uVar26 != 0) goto joined_r0x000140d65fcb;
    uVar16 = (ppVar15->emptiness).num_non_empty_words_or_live_bytes - 1;
    if (uVar16 == 0) goto LAB_140d66052;
  }
  (ppVar15->emptiness).num_non_empty_words_or_live_bytes = uVar16;
joined_r0x000140d65fcb:
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return;
}


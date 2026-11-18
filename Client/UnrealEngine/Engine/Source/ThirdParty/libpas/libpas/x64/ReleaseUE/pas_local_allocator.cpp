// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 7

// pas_local_allocator_construct @ 140d7b100

void __cdecl
pas_local_allocator_construct
          (pas_local_allocator *param_1,pas_segregated_size_directory *param_2,
          pas_local_allocator_location param_3)

{
  code *pcVar1;
  uint uVar2;
  byte bVar3;
  
  (param_1->scavenger_data).is_in_use = false;
  (param_1->scavenger_data).should_stop_count = '\0';
  (param_1->scavenger_data).dirty = false;
  (param_1->scavenger_data).encoded_kind_and_location = (char)param_3 << 7 | 2;
  if (pas_local_allocator_not_in_thread_local_cache < param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1->payload_end = 0;
  param_1->remaining = 0;
  uVar2 = param_2->object_size;
  param_1->object_size = uVar2;
  if (uVar2 != 0) {
    bVar3 = param_2->alignment_shift;
    param_1->alignment_shift = bVar3;
    if (((param_2->base).page_config_kind != 0) && ((~(-1 << bVar3) & uVar2) != 0)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    param_1->page_ish = 0;
    param_1->current_offset = 0;
    param_1->end_offset = 0;
    param_1->current_word = 0;
    param_1->view = (pas_segregated_view_opaque *)((ulonglong)param_2 | 5);
    bVar3 = (param_2->base).page_config_kind;
    if (bVar3 == 0) {
      uVar2 = (uint)*(char *)((ulonglong)
                              ((uint)(byte)param_2[1].field_0x22 * 0x80000 +
                              (uint)*(ushort *)&param_2[1].field_0x20 * 8) + 0x7c +
                             pas_compact_heap_reservation_base);
      if (3 < uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *(uint *)&param_1->config_kind = uVar2 + (*(uint *)&param_1->config_kind & 0xffffff00) + 0xe;
      pas_bitfit_allocator_construct
                ((pas_bitfit_allocator *)param_1->bits,
                 (pas_bitfit_size_class *)&param_2[1].base.bits);
    }
    else {
      if (0x5ffffff < (uint)bVar3 << 0x18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *(uint *)&param_1->config_kind =
           (uint)bVar3 * 2 + (*(uint *)&param_1->config_kind & 0xffffff00) + 2;
    }
    param_1->current_word_is_valid = false;
    param_1->is_stashing_alloc_bits = false;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_local_allocator_construct_unselected @ 140d7b210

void __cdecl pas_local_allocator_construct_unselected(pas_local_allocator *param_1)

{
  (param_1->scavenger_data).is_in_use = false;
  (param_1->scavenger_data).should_stop_count = '\0';
  (param_1->scavenger_data).dirty = false;
  (param_1->scavenger_data).encoded_kind_and_location = '\0';
  param_1->alignment_shift = '\0';
  *(undefined3 *)&param_1->field_0x5 = 0;
  param_1->config_kind = 0;
  *(undefined3 *)&param_1->field_0x9 = 0;
  param_1->current_word_is_valid = false;
  param_1->is_stashing_alloc_bits = false;
  *(undefined2 *)&param_1->field_0xe = 0;
  param_1->current_word = 0;
  param_1->view = (pas_segregated_view_opaque *)0x0;
  param_1->page_ish = 0;
  param_1->current_offset = 0;
  param_1->end_offset = 0;
  param_1->payload_end = 0;
  param_1->remaining = 0;
  param_1->object_size = 0;
  (param_1->scavenger_data).encoded_kind_and_location = '\x02';
  *(undefined4 *)&param_1->config_kind = 1;
  return;
}

// pas_local_allocator_reset @ 140d7b240

void __cdecl pas_local_allocator_reset(pas_local_allocator *param_1)

{
  uint uVar1;
  code *pcVar2;
  pas_segregated_size_directory *ppVar3;
  pas_segregated_view_opaque *ppVar4;
  
  ppVar4 = param_1->view;
  if (((uint)ppVar4 & 7) == 5) {
    ppVar3 = (pas_segregated_size_directory *)((ulonglong)ppVar4 & 0xfffffffffffffff8);
  }
  else {
    ppVar3 = pas_segregated_view_get_size_directory_slow(ppVar4);
  }
  uVar1._0_1_ = (ppVar3->base).page_config_kind;
  uVar1._1_1_ = (ppVar3->base).sharing_mode;
  uVar1._2_1_ = (ppVar3->base).directory_kind;
  uVar1._3_1_ = (ppVar3->base).field_0xf;
  param_1->page_ish = 0;
  param_1->current_word_is_valid = false;
  param_1->payload_end = 0;
  param_1->remaining = 0;
  ppVar4 = (pas_segregated_view_opaque *)((ulonglong)ppVar3 | 5);
  if (ppVar3 == (pas_segregated_size_directory *)0x0) {
    ppVar4 = (pas_segregated_view_opaque *)0x0;
  }
  param_1->current_offset = 0;
  param_1->end_offset = 0;
  param_1->current_word = 0;
  param_1->view = ppVar4;
  if (uVar1 << 0x18 < 0x6000000) {
    *(uint *)&param_1->config_kind =
         (*(uint *)&param_1->config_kind & 0xffffff00) + (uVar1 & 0xff) * 2 + 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_local_allocator_move @ 140d7b2d0

void __cdecl pas_local_allocator_move(pas_local_allocator *param_1,pas_local_allocator *param_2)

{
  pas_segregated_view_opaque *ppVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  ulong64 _Size;
  pas_segregated_size_directory *ppVar4;
  longlong lVar5;
  longlong *plVar6;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((param_1->scavenger_data).is_in_use == true) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (((param_2->scavenger_data).is_in_use == true) && (param_2->is_stashing_alloc_bits == false)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  ppVar1 = param_2->view;
  if (((uint)ppVar1 & 7) == 5) {
    ppVar4 = (pas_segregated_size_directory *)((ulonglong)ppVar1 & 0xfffffffffffffff8);
  }
  else {
    ppVar4 = pas_segregated_view_get_size_directory_slow(ppVar1);
  }
  _Size = pas_segregated_size_directory_local_allocator_size(ppVar4);
  memcpy(param_1,param_2,_Size);
  if (((uint)(int)(char)param_1->config_kind < 0xe) &&
     ((0x2aa8U >> ((int)(char)param_1->config_kind & 0x1fU) & 1) != 0)) {
    if (((uint)param_1->view & 7) == 4) {
      plVar6 = (longlong *)((ulonglong)param_1->view & 0xfffffffffffffff8);
      lVar5 = 0;
      if (*(uint3 *)(plVar6 + 1) != 0) {
        lVar5 = (uint)*(uint3 *)(plVar6 + 1) * 8 + pas_compact_heap_reservation_base;
      }
      AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x10));
      if ((ulong64 *)*plVar6 == param_2->bits) {
        *plVar6 = (longlong)param_1->bits;
      }
                    /* WARNING: Could not recover jumptable at 0x000140d7b3af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x10));
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  return;
}

// pas_local_allocator_stop @ 140d7b3d0

bool __cdecl pas_local_allocator_stop(pas_local_allocator *param_1,pas_lock_lock_mode param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  pas_page_base_config *ppVar6;
  ulonglong uVar7;
  longlong lVar8;
  pas_page_base_config *ppVar9;
  PSRWLOCK SRWLock;
  code *pcVar10;
  longlong lVar11;
  ulong64 uVar12;
  bool bVar13;
  bool bVar14;
  BOOLEAN BVar15;
  pas_segregated_page *ppVar16;
  ulonglong uVar17;
  PSRWLOCK SRWLock_00;
  pas_segregated_view_opaque *ppVar18;
  uint uVar19;
  pas_segregated_directory *ppVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  pas_segregated_size_directory *ppVar24;
  
  if ((param_1->scavenger_data).is_in_use == true) {
    pas_log("allocator = %p\n");
    pas_local_allocator_kind_get_string((param_1->scavenger_data).encoded_kind_and_location & 0x7f);
    pas_log("allocator->scavenger_data.kind = %s\n");
    pas_log("allocator->scavenger_data.location = %s\n");
    pas_log("allocator->scavenger_data.is_in_use = %s\n");
    pas_log("allocator->is_stashing_alloc_bits = %s\n");
    pas_log("at time of assert: allocator->scavenger_data.is_in_use = %s\n");
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  bVar13 = pas_local_allocator_scavenger_data_is_stopped(&param_1->scavenger_data);
  if (bVar13) {
    return true;
  }
  (param_1->scavenger_data).is_in_use = true;
  bVar13 = pas_local_allocator_scavenger_data_is_stopped(&param_1->scavenger_data);
  bVar14 = true;
  if (bVar13) goto LAB_140d7b861;
  if ((int)(char)param_1->config_kind - 0xeU < 4) {
    if (param_1->page_ish != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    pas_bitfit_allocator_stop((pas_bitfit_allocator *)param_1->bits);
  }
  else if (param_1->page_ish != 0) {
    ppVar18 = param_1->view;
    uVar19 = (uint)ppVar18 & 7;
    if (uVar19 == 5) {
      ppVar24 = (pas_segregated_size_directory *)((ulonglong)ppVar18 & 0xfffffffffffffff8);
    }
    else {
      ppVar24 = pas_segregated_view_get_size_directory_slow(ppVar18);
    }
    ppVar6 = pas_segregated_page_config_kind_for_config_table
             [(char)(ppVar24->base).page_config_kind];
    uVar17 = ppVar6->page_size;
    if ((uVar17 ^ uVar17 - 1) <= uVar17 - 1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    bVar13 = ppVar6->is_enabled;
    uVar7 = ppVar6->granule_size;
    iVar4 = *(int *)&ppVar6[1].field_0x4;
    lVar8 = *(longlong *)&ppVar6[1].page_config_kind;
    ppVar9 = ppVar6[2].page_config_ptr;
    ppVar16 = (pas_segregated_page *)
              (*ppVar6->page_header_for_boundary)((void *)(-uVar17 & param_1->page_ish));
    if (uVar19 == 5) {
      ppVar18 = ppVar16->owner;
      if (((ulonglong)ppVar18 & 6) != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
    }
    else if (uVar19 != 4) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if ((bVar13 & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if (iVar4 == 1) {
      SRWLock_00 = (PSRWLOCK)0x0;
    }
    else {
      if (param_2 != pas_lock_lock_mode_lock) {
        if (param_2 != pas_lock_lock_mode_try_lock) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        SRWLock_00 = (PSRWLOCK)ppVar16->lock_ptr;
        if (SRWLock_00 != (PSRWLOCK)0x0) {
          BVar15 = TryAcquireSRWLockExclusive(SRWLock_00);
          while (BVar15 != '\0') {
            SRWLock = (PSRWLOCK)ppVar16->lock_ptr;
            if (SRWLock_00 == SRWLock) goto joined_r0x000140d7b6ad;
            ReleaseSRWLockExclusive(SRWLock_00);
            BVar15 = TryAcquireSRWLockExclusive(SRWLock);
            SRWLock_00 = SRWLock;
          }
          bVar14 = false;
          goto LAB_140d7b861;
        }
LAB_140d7b5d4:
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      if (ppVar16->lock_ptr == (pas_lock *)0x0) goto LAB_140d7b5d4;
      SRWLock_00 = (PSRWLOCK)
                   pas_segregated_page_switch_lock_slow(ppVar16,(pas_lock *)0x0,ppVar16->lock_ptr);
joined_r0x000140d7b6ad:
      if (SRWLock_00 == (PSRWLOCK)0x0) goto LAB_140d7b5d4;
    }
    (*(code *)ppVar9)(param_1,ppVar18,ppVar16,ppVar24);
    uVar12 = pas_compact_heap_reservation_base;
    uVar19 = (uint)ppVar18 & 7;
    if (uVar19 < 2) {
      uVar22 = (ulonglong)ppVar18 & 0xfffffffffffffff8;
      bVar13 = ppVar16->eligibility_notification_has_been_deferred;
      if (bVar13 == true) {
        ppVar16->eligibility_notification_has_been_deferred = false;
      }
      uVar19 = *(uint *)(uVar22 + 0xc);
      ppVar20 = (pas_segregated_directory *)
                (((uint)*(byte *)(uVar22 + 10) * 0x80000 + (uint)*(ushort *)(uVar22 + 8) * 8) +
                pas_compact_heap_reservation_base);
      if ((ppVar16->emptiness).num_non_empty_words_or_live_bytes == 0) {
        bVar14 = true;
      }
      else if (uVar17 == uVar7) {
        bVar14 = false;
      }
      else {
        if (uVar17 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        if ((uVar17 | uVar7) >> 0x20 == 0) {
          uVar17 = (uVar17 & 0xffffffff) / (uVar7 & 0xffffffff);
        }
        else {
          uVar17 = uVar17 / uVar7;
        }
        do {
          bVar14 = uVar17 != 0;
          if (uVar17 == 0) break;
          lVar11 = uVar17 + (lVar8 + 0x1fU >> 5) * 4;
          uVar17 = uVar17 - 1;
        } while (*(char *)((longlong)ppVar16->alloc_bits + lVar11 + -1) != '\0');
      }
      ppVar16->is_in_use_for_allocation = false;
      if (bVar13 != false) {
        pas_segregated_directory_view_did_become_eligible_at_index(ppVar20,(ulonglong)uVar19);
      }
      if (bVar14) {
        pas_segregated_directory_view_did_become_empty_at_index(ppVar20,(ulonglong)uVar19);
      }
    }
    else {
      if (uVar19 != 4) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      uVar23 = (ulonglong)ppVar18 & 0xfffffffffffffff8;
      uVar21 = (ulonglong)
               ((uint)*(byte *)(uVar23 + 10) * 0x80000 + (uint)*(ushort *)(uVar23 + 8) * 8);
      uVar22 = *(ulonglong *)(uVar21 + pas_compact_heap_reservation_base);
      if ((uVar22 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      if ((*(byte *)(uVar23 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      bVar1 = *(byte *)(uVar23 + 0xd);
      uVar3 = *(ushort *)(uVar23 + 0xb);
      ppVar20 = *(pas_segregated_directory **)((uVar22 & 0xfffffffffffffffe) + 8);
      if (((PSRWLOCK)ppVar16->lock_ptr != (PSRWLOCK)0x0) &&
         (BVar15 = TryAcquireSRWLockExclusive((PSRWLOCK)ppVar16->lock_ptr), BVar15 != '\0')) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      uVar21 = uVar21 + uVar12;
      if (*(int *)(uVar21 + 0x24) == 1) {
        if ((ppVar16->emptiness).num_non_empty_words_or_live_bytes == 0) {
          bVar13 = true;
        }
        else {
          if (uVar17 == uVar7) goto LAB_140d7b674;
          if (uVar17 <= uVar7) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          if ((uVar17 | uVar7) >> 0x20 == 0) {
            uVar17 = (uVar17 & 0xffffffff) / (uVar7 & 0xffffffff);
          }
          else {
            uVar17 = uVar17 / uVar7;
          }
          do {
            bVar13 = uVar17 != 0;
            if (uVar17 == 0) break;
            lVar11 = uVar17 + (lVar8 + 0x1fU >> 5) * 4;
            uVar17 = uVar17 - 1;
          } while (*(char *)((longlong)ppVar16->alloc_bits + lVar11 + -1) != '\0');
        }
      }
      else {
LAB_140d7b674:
        bVar13 = false;
      }
      bVar2 = *(byte *)(uVar23 + 0x11);
      *(byte *)(uVar23 + 0x11) = bVar2 & 0xfc;
      iVar5 = *(int *)(uVar21 + 0x24);
      if ((bVar2 & 2) == 0) {
        if (iVar5 == 0) {
LAB_140d7b8a9:
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        *(int *)(uVar21 + 0x24) = iVar5 + -1;
      }
      else {
        if (iVar5 == 0) goto LAB_140d7b8a9;
        *(int *)(uVar21 + 0x24) = iVar5 + -1;
        if ((*(byte *)(uVar23 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        pas_segregated_directory_view_did_become_eligible
                  ((pas_segregated_directory *)(((uint)bVar1 * 0x80000 + (uint)uVar3 * 8) + uVar12),
                   (pas_segregated_view_opaque *)(uVar23 | 4));
      }
      if (bVar13) {
        if (*(int *)(uVar21 + 0x24) != 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        pas_segregated_directory_view_did_become_empty
                  (ppVar20,(pas_segregated_view_opaque *)(uVar21 | 2));
      }
    }
    ppVar18 = param_1->view;
    if (((uint)ppVar18 & 7) == 5) {
      ppVar24 = (pas_segregated_size_directory *)((ulonglong)ppVar18 & 0xfffffffffffffff8);
    }
    else {
      ppVar24 = pas_segregated_view_get_size_directory_slow(ppVar18);
    }
    uVar19._0_1_ = (ppVar24->base).page_config_kind;
    uVar19._1_1_ = (ppVar24->base).sharing_mode;
    uVar19._2_1_ = (ppVar24->base).directory_kind;
    uVar19._3_1_ = (ppVar24->base).field_0xf;
    param_1->page_ish = 0;
    param_1->current_word_is_valid = false;
    param_1->payload_end = 0;
    param_1->remaining = 0;
    ppVar18 = (pas_segregated_view_opaque *)((ulonglong)ppVar24 | 5);
    if (ppVar24 == (pas_segregated_size_directory *)0x0) {
      ppVar18 = (pas_segregated_view_opaque *)0x0;
    }
    param_1->current_offset = 0;
    param_1->end_offset = 0;
    param_1->current_word = 0;
    param_1->view = ppVar18;
    if (0x5ffffff < uVar19 << 0x18) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    *(uint *)&param_1->config_kind =
         (*(uint *)&param_1->config_kind & 0xffffff00) + (uVar19 & 0xff) * 2 + 2;
    if (iVar4 != 1) {
      ReleaseSRWLockExclusive(SRWLock_00);
    }
  }
  (param_1->scavenger_data).should_stop_count = '\0';
  (param_1->scavenger_data).encoded_kind_and_location =
       ((param_1->scavenger_data).encoded_kind_and_location & 0x80) + 1;
  bVar14 = true;
LAB_140d7b861:
  (param_1->scavenger_data).is_in_use = false;
  return bVar14;
}

// pas_local_allocator_kind_get_string @ 140d7b960

char * __cdecl pas_local_allocator_kind_get_string(pas_local_allocator_kind param_1)

{
  code *pcVar1;
  
  if (param_1 < (pas_local_allocator_view_cache_kind|pas_local_allocator_stopped_allocator_kind)) {
    return (&PTR_s_decommitted_1531ebcd0)[param_1];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_local_allocator_scavenge @ 140d7b980

bool __cdecl
pas_local_allocator_scavenge(pas_local_allocator *param_1,pas_allocator_scavenge_action param_2)

{
  code *pcVar1;
  
  if (param_2 == pas_allocator_scavenge_no_action) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1->view != (pas_segregated_view_opaque *)0x0) {
    if ((param_2 == pas_allocator_scavenge_request_stop_action) &&
       ((param_1->scavenger_data).dirty == true)) {
      (param_1->scavenger_data).dirty = false;
      return true;
    }
    pas_local_allocator_stop(param_1,pas_lock_lock_mode_lock);
  }
  return false;
}


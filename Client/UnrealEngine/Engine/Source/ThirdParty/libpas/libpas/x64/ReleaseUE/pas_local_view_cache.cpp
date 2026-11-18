// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// pas_local_view_cache_construct @ 140da3b70

void __cdecl pas_local_view_cache_construct(pas_local_view_cache *param_1,uchar param_2)

{
  (param_1->scavenger_data).is_in_use = false;
  (param_1->scavenger_data).should_stop_count = '\0';
  (param_1->scavenger_data).dirty = false;
  (param_1->scavenger_data).encoded_kind_and_location = '\x04';
  param_1->capacity = param_2;
  param_1->bottom_index = '\0';
  param_1->top_index = '\0';
  param_1->state = '\x01';
  return;
}

// pas_local_view_cache_move @ 140da3b90

void __cdecl pas_local_view_cache_move(pas_local_view_cache *param_1,pas_local_view_cache *param_2)

{
  code *pcVar1;
  
  if ((param_1->scavenger_data).is_in_use == true) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((param_2->scavenger_data).is_in_use != true) {
    memcpy(param_1,param_2,
           (ulonglong)((uint)param_2->capacity + (uint)param_2->capacity * 2 + 0xf & 0xfffffff8));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_local_view_cache_stop @ 140da3bc0

bool __cdecl pas_local_view_cache_stop(pas_local_view_cache *param_1,pas_lock_lock_mode param_2)

{
  pas_page_base_config *ppVar1;
  PSRWLOCK pRVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  bool bVar6;
  BOOLEAN BVar7;
  uchar uVar8;
  pas_segregated_page *ppVar9;
  ulonglong uVar10;
  byte bVar11;
  pas_segregated_directory *ppVar12;
  byte bVar13;
  _func___cdecl_pas_page_base_ptr_void_ptr *p_Var14;
  undefined8 *puVar15;
  ulonglong uVar16;
  pas_segregated_directory *ppVar17;
  ulonglong local_68;
  ulonglong local_60;
  PSRWLOCK local_58;
  int local_50;
  longlong local_48;
  
  if ((param_1->scavenger_data).is_in_use == true) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  bVar5 = pas_local_allocator_scavenger_data_is_stopped(&param_1->scavenger_data);
  bVar6 = true;
  if (!bVar5) {
    (param_1->scavenger_data).is_in_use = true;
    bVar5 = pas_local_allocator_scavenger_data_is_stopped(&param_1->scavenger_data);
    bVar6 = true;
    if (!bVar5) {
      p_Var14 = (_func___cdecl_pas_page_base_ptr_void_ptr *)0x0;
      local_58 = (PSRWLOCK)0x0;
      local_50 = 0;
      local_60 = 0;
      local_68 = 0;
      bVar13 = 0;
      local_48 = 0;
      ppVar12 = (pas_segregated_directory *)0x0;
      uVar16 = (ulonglong)param_1->bottom_index;
      ppVar17 = ppVar12;
      if (param_1->top_index != param_1->bottom_index) goto LAB_140da3c82;
LAB_140da3c78:
      ppVar17 = ppVar12;
      if (param_1->state == '\x02') {
LAB_140da3c82:
        do {
          bVar11 = (char)uVar16 + 1;
          if (param_1->capacity <= bVar11) {
            bVar11 = 0;
          }
          param_1->bottom_index = bVar11;
          uVar4 = pas_compact_heap_reservation_base;
          uVar16 = (ulonglong)
                   ((uint)param_1->views[uVar16].payload[2] * 0x80000 +
                   (uint)*(ushort *)param_1->views[uVar16].payload * 8);
          param_1->state = '\x01';
          ppVar12 = (pas_segregated_directory *)
                    (((uint)*(byte *)(uVar16 + 10 + uVar4) * 0x80000 +
                     (uint)*(ushort *)(uVar16 + 8 + uVar4) * 8) + pas_compact_heap_reservation_base)
          ;
          if (ppVar17 == (pas_segregated_directory *)0x0) {
            ppVar1 = pas_segregated_page_config_kind_for_config_table
                     [(char)ppVar12->page_config_kind];
            bVar13 = ppVar1->is_enabled;
            local_60 = ppVar1->page_size;
            local_68 = ppVar1->granule_size;
            p_Var14 = ppVar1->page_header_for_boundary;
            local_50 = *(int *)&ppVar1[1].field_0x4;
            local_48._0_4_ = ppVar1[1].page_config_kind;
            local_48._4_1_ = ppVar1[1].min_align_shift;
            local_48._5_3_ = *(undefined3 *)&ppVar1[1].field_0x1d;
          }
          else {
            bVar5 = ppVar17 != ppVar12;
            ppVar12 = ppVar17;
            if (bVar5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          puVar15 = (undefined8 *)(uVar16 + uVar4);
          ppVar9 = (pas_segregated_page *)(*p_Var14)((void *)*puVar15);
          if ((bVar13 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (local_50 != 1) {
            if (param_2 == pas_lock_lock_mode_lock) {
              if (local_58 != (PSRWLOCK)ppVar9->lock_ptr) {
                local_58 = (PSRWLOCK)
                           pas_segregated_page_switch_lock_slow
                                     (ppVar9,(pas_lock *)local_58,ppVar9->lock_ptr);
              }
            }
            else {
              if (param_2 != pas_lock_lock_mode_try_lock) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              pRVar2 = (PSRWLOCK)ppVar9->lock_ptr;
              if (local_58 != pRVar2) {
                if (local_58 != (PSRWLOCK)0x0) {
                  ReleaseSRWLockExclusive(local_58);
                }
                BVar7 = TryAcquireSRWLockExclusive(pRVar2);
                local_58 = pRVar2;
                while( true ) {
                  if (BVar7 == '\0') {
                    if (param_1->state == '\x02') {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    bVar13 = param_1->top_index;
                    uVar8 = bVar13 + 1;
                    if (param_1->capacity <= (byte)(bVar13 + 1)) {
                      uVar8 = '\0';
                    }
                    if (uVar8 == param_1->bottom_index) {
                      param_1->state = '\x02';
                    }
                    uVar16 = (longlong)puVar15 - pas_compact_heap_reservation_base;
                    if (pas_compact_heap_reservation_size <= uVar16) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    if ((uVar16 & 7) != 0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    if (uVar16 < 8) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    param_1->views[bVar13].payload[0] = (uchar)(uVar16 >> 3);
                    param_1->views[bVar13].payload[1] = (uchar)(uVar16 >> 0xb);
                    param_1->views[bVar13].payload[2] = (uchar)((uint)uVar16 >> 0x13);
                    param_1->top_index = uVar8;
                    bVar6 = false;
                    goto LAB_140da3f1c;
                  }
                  pRVar2 = (PSRWLOCK)ppVar9->lock_ptr;
                  if (local_58 == pRVar2) break;
                  ReleaseSRWLockExclusive(local_58);
                  BVar7 = TryAcquireSRWLockExclusive(pRVar2);
                  local_58 = pRVar2;
                }
              }
            }
          }
          uVar16 = (ulonglong)*(uint *)((longlong)puVar15 + 0xc);
          ppVar17 = ppVar12;
          if ((ppVar9->emptiness).num_non_empty_words_or_live_bytes != 0) {
            if (local_60 == local_68) {
LAB_140da3e2f:
              ppVar9->is_in_use_for_allocation = false;
              pas_segregated_directory_view_did_become_eligible_at_index(ppVar12,uVar16);
              uVar16 = (ulonglong)param_1->bottom_index;
              if (param_1->top_index == param_1->bottom_index) break;
              goto LAB_140da3c82;
            }
            if (local_60 <= local_68) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if ((local_60 | local_68) >> 0x20 == 0) {
              uVar10 = (local_60 & 0xffffffff) / (local_68 & 0xffffffff);
            }
            else {
              uVar10 = local_60 / local_68;
            }
            do {
              bVar5 = uVar10 == 0;
              uVar10 = uVar10 - 1;
              if (bVar5) goto LAB_140da3e2f;
            } while (*(char *)((longlong)ppVar9->alloc_bits + uVar10 + (local_48 + 0x1fU >> 5) * 4)
                     != '\0');
          }
          ppVar9->is_in_use_for_allocation = false;
          pas_segregated_directory_view_did_become_eligible_at_index(ppVar12,uVar16);
          pas_segregated_directory_view_did_become_empty_at_index(ppVar12,uVar16);
          uVar16 = (ulonglong)param_1->bottom_index;
        } while (param_1->top_index != param_1->bottom_index);
        goto LAB_140da3c78;
      }
      if (local_58 == (PSRWLOCK)0x0) {
        uVar8 = param_1->state;
      }
      else {
        ReleaseSRWLockExclusive(local_58);
        uVar8 = param_1->state;
      }
      if (uVar8 != '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (param_1->top_index != param_1->bottom_index) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      param_1->state = '\0';
      (param_1->scavenger_data).should_stop_count = '\0';
      (param_1->scavenger_data).encoded_kind_and_location =
           (param_1->scavenger_data).encoded_kind_and_location & 0x80 | 3;
      bVar6 = true;
    }
LAB_140da3f1c:
    (param_1->scavenger_data).is_in_use = false;
  }
  return bVar6;
}

// pas_local_view_cache_did_restart @ 140da3f90

void __cdecl pas_local_view_cache_did_restart(pas_local_view_cache *param_1)

{
  param_1->state = '\x01';
  return;
}


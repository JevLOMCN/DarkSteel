// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 8

// pas_segregated_shared_page_directory_find_first_eligible @ 140d7d260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_segregated_shared_view * __cdecl
pas_segregated_shared_page_directory_find_first_eligible
          (pas_segregated_shared_page_directory *param_1,uint param_2,uint param_3,
          pas_lock_hold_mode param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  bool bVar5;
  pas_lock_hold_mode pVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  pas_segregated_shared_view *ppVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 (*pauVar15) [16];
  ulong64 uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_328 [40];
  ulonglong local_300;
  ulonglong local_2f8;
  pas_lock_hold_mode local_2ec;
  pas_segregated_shared_page_directory *local_2e8;
  ulonglong local_2e0;
  longlong local_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  uint local_2b0;
  uint local_2ac;
  pas_segregated_shared_view *local_2a8;
  undefined1 local_2a0 [232];
  pas_segregated_shared_page_directory *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  undefined5 uStack_190;
  undefined3 uStack_18b;
  uint uStack_188;
  undefined1 uStack_184;
  ulonglong local_180;
  code *local_178;
  code *local_170;
  uint *local_168;
  undefined1 local_160 [232];
  pas_versioned_field local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)local_328;
  local_2ec = param_4;
  memcpy(local_160,
         pas_segregated_page_config_kind_for_config_table[(char)(param_1->base).page_config_kind],
         0xe8);
  local_2b0 = param_2;
  local_2ac = param_3;
  memcpy(local_2a0,local_160,0xe8);
  local_2e8 = param_1;
  do {
    local_178 = find_first_eligible_should_consider_view_parallel;
    local_170 = find_first_eligible_consider_view;
    local_168 = &local_2b0;
    local_2a8 = (pas_segregated_shared_view *)0x0;
    uVar13 = (ulonglong)(param_1->base).first_view.payload;
    local_1b8 = param_1;
    do {
      uVar16 = pas_compact_heap_reservation_base;
      if ((uint)uVar13 < 8) {
        uVar16 = 0;
      }
      uVar8 = (local_1b8->base).data.payload;
      uVar17 = (ulonglong)uVar8;
      if (uVar16 + uVar13 == 0) {
        pauVar15 = (undefined1 (*) [16])(pas_compact_heap_reservation_base + uVar17 * 8);
        uVar11 = 0;
      }
      else {
        pauVar15 = (undefined1 (*) [16])(uVar17 * 8 + pas_compact_heap_reservation_base);
        uVar11 = 1;
        if (pauVar15 != (undefined1 (*) [16])0x0 && uVar8 != 0) {
          uVar11 = (ulonglong)(*(int *)pauVar15[3] + 1);
        }
      }
      if ((uVar17 == 0) || (pauVar15 == (undefined1 (*) [16])0x0)) {
        uVar17 = 0xffffffffffffffff;
        if (((local_1b8->base).bits & 1) == 0) {
          local_1b0 = (ulonglong)((uint)uVar13 != 0);
          goto joined_r0x000140d7d413;
        }
        local_1b0 = 0;
        if (uVar11 == 0) goto LAB_140d7d844;
      }
      else {
        do {
          uVar13 = *(ulonglong *)(*pauVar15 + 8);
          do {
            uVar9 = uVar13;
            local_1b0 = *(ulonglong *)*pauVar15;
            uVar13 = *(ulonglong *)(*pauVar15 + 8);
          } while (*(ulonglong *)(*pauVar15 + 8) != uVar9);
          uVar17 = uVar9;
          if ((uVar9 & 1) != 0) break;
          uVar17 = uVar9 | 1;
          LOCK();
          auVar1 = *pauVar15;
          auVar3._8_8_ = uVar9;
          auVar3._0_8_ = local_1b0;
          if (auVar3 == auVar1) {
            *(ulonglong *)*pauVar15 = local_1b0;
            *(ulonglong *)(*pauVar15 + 8) = uVar17;
          }
          UNLOCK();
        } while (auVar3 != auVar1);
joined_r0x000140d7d413:
        if (local_1b0 == uVar11) goto LAB_140d7d844;
      }
      uVar9 = local_1b0;
      LOCK();
      UNLOCK();
      local_1a0 = 0xffffffffffffffff;
      local_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      uStack_18b = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      local_2d0 = uVar11;
      local_1a8 = uVar11;
      if (local_1b0 == 0) {
        uVar8 = (local_1b8->base).bits;
        uVar13 = CONCAT44(uVar8 >> 1,uVar8) & 0x100000001;
        iVar14 = (*local_178)(uVar13,&local_1b8);
        if (iVar14 == 0) goto LAB_140d7d480;
        local_1b0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        uStack_18b = 0;
        uStack_188 = 1;
        uStack_184 = 1;
        local_1a0 = 0;
        local_180 = uVar13;
        if (local_1a8 != 0) {
          bVar5 = true;
          if ((local_170 != (code *)0x0) && (cVar7 = (*local_170)(&local_1b8), cVar7 == '\0'))
          goto LAB_140d7d480;
          goto LAB_140d7d673;
        }
        if (local_2d0 != 0) goto LAB_140d7d8cf;
      }
      else {
LAB_140d7d480:
        uVar13 = (ulonglong)(local_1b8->base).data.payload;
        lVar10 = uVar13 * 8 + pas_compact_heap_reservation_base;
        if (lVar10 == 0 || uVar13 == 0) {
LAB_140d7d670:
          bVar5 = false;
        }
        else {
          uVar13 = (local_1b0 - 1) + (ulonglong)(local_1b0 == 0);
          local_300 = uVar13 >> 7;
          local_2e0 = (ulonglong)*(uint *)(lVar10 + 0x24);
          local_2c0 = (ulonglong)*(uint *)(lVar10 + 0x20) * 8 + pas_compact_heap_reservation_base;
          if ((ulonglong)*(uint *)(lVar10 + 0x20) == 0) {
            local_2c0 = 0;
          }
          local_2f8 = local_300 * 4;
          if (local_2e0 <= local_2f8) goto LAB_140d7d670;
          uVar13 = (ulonglong)((uint)(uVar13 >> 5) & 3);
          do {
            uVar11 = (ulonglong)*(uint *)(local_2c0 + local_300 * 4);
            local_2d8 = uVar11 * 8 + pas_compact_heap_reservation_base;
            if (uVar11 == 0) {
              local_2d8 = 0;
            }
            uVar11 = local_2e0 - local_2f8;
            local_2c8 = 4;
            if (uVar11 < 4) {
              local_2c8 = uVar11;
            }
            if (uVar13 < uVar11) {
              do {
                uVar11 = *(ulonglong *)(local_2d8 + uVar13 * 8);
                uVar8 = (*local_178)(uVar11,&local_1b8);
                if (uVar8 != 0) {
                  local_2b8 = local_2d8 + uVar13 * 8;
                  lVar10 = uVar13 + local_2f8;
                  do {
                    uVar18 = 0;
                    for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                      uVar18 = uVar18 + 1;
                    }
                    local_1b0 = lVar10 * 0x20 + 1 + (ulonglong)uVar18;
                    uVar18 = 1 << ((byte)uVar18 & 0x1f);
                    local_198 = local_2b8;
                    uStack_190 = (undefined5)local_1b0;
                    uStack_18b = (undefined3)(local_1b0 >> 0x28);
                    uStack_184 = 0;
                    if (local_1a0 == 0xffffffffffffffff) {
                      local_1a0 = local_1b0;
                    }
                    bVar5 = true;
                    uStack_188 = uVar18;
                    local_180 = uVar11;
                    if (((local_1a8 <= local_1b0) || (local_170 == (code *)0x0)) ||
                       (cVar7 = (*local_170)(&local_1b8), cVar7 != '\0')) goto LAB_140d7d673;
                    uVar8 = uVar8 & ~uVar18;
                  } while (uVar8 != 0);
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < local_2c8);
            }
            local_2f8 = local_300 * 4 + 4;
            local_300 = local_300 + 1;
            uVar13 = 0;
            bVar5 = false;
          } while (local_2f8 < local_2e0);
        }
LAB_140d7d673:
        if (local_1b0 < local_1a0 && local_1a0 != 0xffffffffffffffff) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((bVar5) && (local_1b0 < local_2d0)) {
LAB_140d7d8cf:
          if (local_2d0 < local_1a0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          local_78.value = uVar9;
          local_78.version = uVar17;
          pas_segregated_directory_update_first_eligible_after_search
                    (&local_1b8->base,&local_78,local_1a0);
          if ((local_2a8 == (pas_segregated_shared_view *)0x0) &&
             (pas_log("Erroneously found a null view at index = %zu, directory = %p.\n"),
             local_2a8 == (pas_segregated_shared_view *)0x0)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((local_60 ^ (ulonglong)local_328) == __security_cookie.value) {
            return local_2a8;
          }
          goto LAB_140d7da18;
        }
      }
      LOCK();
      UNLOCK();
      uVar13 = (ulonglong)(local_1b8->base).first_view.payload;
      uVar16 = pas_compact_heap_reservation_base;
      if (uVar13 < 8) {
        uVar16 = 0;
      }
      iVar14 = 0;
      if (uVar16 + uVar13 != 0) {
        uVar8 = (local_1b8->base).data.payload;
        lVar10 = (ulonglong)uVar8 * 8 + pas_compact_heap_reservation_base;
        iVar14 = 1;
        if (lVar10 != 0 && uVar8 != 0) {
          iVar14 = *(int *)(lVar10 + 0x30) + 1;
        }
      }
    } while (iVar14 != (int)local_2d0);
    if (local_2d0 < local_1a0) {
      local_1a0 = local_2d0;
    }
    local_1b0 = local_2d0;
    local_78.value = uVar9;
    local_78.version = uVar17;
    pas_segregated_directory_update_first_eligible_after_search
              (&local_1b8->base,&local_78,local_1a0);
LAB_140d7d844:
    pVar6 = local_2ec;
    if (local_2ec == pas_lock_is_not_held) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    param_1 = local_2e8;
    uVar13 = (ulonglong)(local_2e8->base).first_view.payload;
    uVar16 = pas_compact_heap_reservation_base;
    if (uVar13 < 8) {
      uVar16 = 0;
    }
    uVar17 = 0;
    if (uVar16 + uVar13 != 0) {
      uVar8 = (local_2e8->base).data.payload;
      lVar10 = (ulonglong)uVar8 * 8 + pas_compact_heap_reservation_base;
      uVar17 = 1;
      if (lVar10 != 0 && uVar8 != 0) {
        uVar17 = (ulonglong)(*(int *)(lVar10 + 0x30) + 1);
      }
    }
    if (uVar17 < local_1b0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar17 <= local_1b0) {
      ppVar12 = pas_segregated_shared_view_create(local_1b0);
      if (ppVar12 == (pas_segregated_shared_view *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar13 = (ulonglong)(param_1->base).first_view.payload;
      uVar16 = 0;
      if (7 < uVar13) {
        uVar16 = pas_compact_heap_reservation_base;
      }
      if ((uVar16 + uVar13 == 0) ||
         ((uVar8 = (param_1->base).data.payload,
          lVar10 = (ulonglong)uVar8 * 8 + pas_compact_heap_reservation_base,
          lVar10 != 0 && uVar8 != 0 && (*(int *)(lVar10 + 0x30) == -1)))) {
        pas_all_shared_page_directories_add(param_1);
      }
      pas_segregated_directory_append
                (&param_1->base,local_1b0,(pas_segregated_view_opaque *)((ulonglong)ppVar12 | 2));
      pas_segregated_directory_view_did_become_eligible_at_index(&param_1->base,local_1b0);
      if (pVar6 == pas_lock_is_not_held) {
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      }
      if ((local_60 ^ (ulonglong)local_328) == __security_cookie.value) {
        return ppVar12;
      }
LAB_140d7da18:
      pcVar2 = (code *)swi(3);
      ppVar12 = (pas_segregated_shared_view *)(*pcVar2)();
      return ppVar12;
    }
    if (pVar6 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
  } while( true );
}

// find_first_eligible_should_consider_view_parallel @ 140d7da30

uint __cdecl
find_first_eligible_should_consider_view_parallel
          (pas_segregated_directory_bitvector_segment param_1,
          pas_segregated_directory_iterate_config *param_2)

{
  return param_1.eligible_bits;
}

// find_first_eligible_consider_view @ 140d7da40

bool __cdecl find_first_eligible_consider_view(pas_segregated_directory_iterate_config *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  pas_segregated_directory *ppVar7;
  pas_segregated_directory_bitvector_segment *ppVar8;
  code *pcVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  
  uVar10 = (ulonglong)(param_1->directory->first_view).payload;
  uVar11 = 0;
  if (7 < uVar10) {
    uVar11 = pas_compact_heap_reservation_base;
  }
  uVar10 = uVar11 + uVar10;
  if (uVar10 != 0) {
    uVar5 = param_1->index;
    uVar13 = (param_1->directory->data).payload;
    lVar15 = (ulonglong)uVar13 * 8 + pas_compact_heap_reservation_base;
    uVar17 = 1;
    if (lVar15 != 0 && uVar13 != 0) {
      uVar17 = (ulonglong)(*(int *)(lVar15 + 0x30) + 1);
    }
    if (uVar5 < uVar17) {
      if (uVar5 != 0) {
        lVar16 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar15 + 0x2c) * 8;
        if ((ulonglong)*(uint *)(lVar15 + 0x2c) == 0) {
          lVar16 = 0;
        }
        uVar10 = (ulonglong)*(uint *)(lVar16 + -4 + uVar5 * 4);
        uVar11 = 0;
        if (7 < uVar10) {
          uVar11 = pas_compact_heap_reservation_base;
        }
        uVar10 = uVar11 + uVar10;
      }
      if (((uint)uVar10 & 7) != 2) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      piVar6 = param_1->arg;
      uVar13 = piVar6[1];
      if ((uVar13 ^ uVar13 - 1) <= uVar13 - 1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      iVar2 = piVar6[0x2a];
      iVar3 = piVar6[0x26];
      uVar13 = (-uVar13 & (*(int *)((uVar10 & 0xfffffffffffffff8) + 0x20) + uVar13) - 1) + *piVar6;
      if ((uint)(iVar2 + iVar3) < uVar13) {
        if (pas_mock_fast_random == (_func___cdecl_uint *)0x0) {
          uVar12 = pas_fast_random_state << 0xd ^ pas_fast_random_state;
          uVar12 = uVar12 >> 0x11 ^ uVar12;
          uVar12 = uVar12 << 5 ^ uVar12;
          pas_fast_random_state = uVar12;
        }
        else {
          uVar12 = (*pas_mock_fast_random)();
        }
        if ((uVar12 == 0xffffffff) ||
           (uVar12 <= pas_segregated_shared_page_directory_probability_of_ineligibility)) {
          if (((param_1->bit_reference).is_inline_bit & 1U) == 0) {
            ppVar8 = (param_1->bit_reference).segment_ptr;
            uVar12 = (param_1->bit_reference).mask;
            do {
              uVar4 = ppVar8->eligible_bits;
              uVar14 = uVar4 & ~uVar12;
              if (uVar4 == uVar14) break;
              LOCK();
              bVar18 = uVar4 == ppVar8->eligible_bits;
              if (bVar18) {
                ppVar8->eligible_bits = uVar14;
              }
              UNLOCK();
            } while (!bVar18);
          }
          else {
            ppVar7 = param_1->directory;
            do {
              uVar12 = ppVar7->bits;
              if (uVar12 == (uVar12 & 0xfffffffe)) break;
              puVar1 = &ppVar7->bits;
              LOCK();
              bVar18 = uVar12 == *puVar1;
              if (bVar18) {
                *puVar1 = uVar12 & 0xfffffffe;
              }
              UNLOCK();
            } while (!bVar18);
          }
        }
      }
      else {
        *(ulonglong *)(piVar6 + 2) = uVar10 & 0xfffffffffffffff8;
      }
      return uVar13 <= (uint)(iVar2 + iVar3);
    }
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}

// pas_segregated_shared_page_directory_take_last_empty @ 140d7dbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_page_sharing_pool_take_result __cdecl
pas_segregated_shared_page_directory_take_last_empty
          (pas_segregated_shared_page_directory *param_1,pas_deferred_decommit_log *param_2,
          pas_lock_hold_mode param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  int iVar5;
  pas_page_sharing_pool_take_result pVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_118 [32];
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  pas_deferred_decommit_log *local_d0;
  pas_lock_hold_mode local_c8;
  pas_page_base_config *local_c0;
  pas_page_sharing_pool_take_result local_b8;
  pas_segregated_shared_page_directory *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  uint uStack_80;
  undefined1 uStack_7c;
  ulonglong local_78;
  code *local_70;
  code *local_68;
  pas_deferred_decommit_log **local_60;
  pas_versioned_field local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_c0 = pas_segregated_page_config_kind_for_config_table
             [(char)(param_1->base).page_config_kind];
  local_b8 = pas_page_sharing_pool_take_none_available;
  local_70 = take_last_empty_shared_page_should_consider_view_parallel;
  local_68 = take_last_empty_shared_page_consider_view;
  local_60 = &local_d0;
  uVar4 = (param_1->base).data.payload;
  lVar12 = (ulonglong)uVar4 * 8 + pas_compact_heap_reservation_base;
  local_d0 = param_2;
  local_c8 = param_3;
  local_b0 = param_1;
  if (lVar12 == 0 || (ulonglong)uVar4 == 0) {
    if (((param_1->base).bits & 2) == 0) {
LAB_140d7dfb4:
      if ((local_48 ^ (ulonglong)auStack_118) == __security_cookie.value) {
        return pas_page_sharing_pool_take_none_available;
      }
      goto LAB_140d7dfca;
    }
    uVar10 = 0xffffffffffffffff;
    uVar9 = 1;
  }
  else {
    do {
      uVar10 = *(ulonglong *)(lVar12 + 0x18);
      do {
        uVar8 = uVar10;
        uVar9 = *(ulonglong *)(lVar12 + 0x10);
        uVar10 = *(ulonglong *)(lVar12 + 0x18);
      } while (*(ulonglong *)(lVar12 + 0x18) != uVar8);
      uVar10 = uVar8;
      if ((uVar8 & 1) != 0) break;
      uVar10 = uVar8 | 1;
      LOCK();
      auVar2._8_8_ = uVar8;
      auVar2._0_8_ = uVar9;
      bVar15 = auVar2 == *(undefined1 (*) [16])(lVar12 + 0x10);
      if (bVar15) {
        *(ulonglong *)*(undefined1 (*) [16])(lVar12 + 0x10) = uVar9;
        *(ulonglong *)(lVar12 + 0x18) = uVar10;
      }
      UNLOCK();
    } while (!bVar15);
    if (uVar9 == 0) goto LAB_140d7dfb4;
    uVar4 = (param_1->base).data.payload;
    lVar12 = (ulonglong)uVar4 * 8 + pas_compact_heap_reservation_base;
  }
  local_a8 = uVar9 - 1;
  local_98 = 0xffffffffffffffff;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_83 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  lVar13 = 0;
  if (uVar4 != 0) {
    lVar13 = lVar12;
  }
  local_a0 = uVar9;
  if (((lVar13 != 0) && (local_a8 != 0)) && ((ulonglong)*(uint *)(lVar13 + 0x24) != 0)) {
    uVar8 = uVar9 - 2 >> 7;
    local_e8 = (ulonglong)*(uint *)(lVar13 + 0x20) * 8 + pas_compact_heap_reservation_base;
    if ((ulonglong)*(uint *)(lVar13 + 0x20) == 0) {
      local_e8 = 0;
    }
    if (*(uint *)(lVar13 + 0x24) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar11 = (ulonglong)((uint)(uVar9 - 2 >> 5) & 3);
    do {
      uVar7 = (ulonglong)*(uint *)(local_e8 + uVar8 * 4);
      local_f8 = uVar7 * 8 + pas_compact_heap_reservation_base;
      if (uVar7 == 0) {
        local_f8 = 0;
      }
      local_d8 = uVar8 * 0x80 + 1;
      local_e0 = uVar8;
      do {
        uVar8 = *(ulonglong *)(local_f8 + uVar11 * 8);
        local_f0 = uVar11;
        uVar4 = (*local_70)(uVar8,&local_b0);
        if (uVar4 != 0) {
          lVar12 = local_f8 + local_f0 * 8;
          lVar13 = local_f0 * 0x20 + local_d8;
          do {
            uVar14 = 0x1f;
            if (uVar4 != 0) {
              for (; uVar4 >> uVar14 == 0; uVar14 = uVar14 - 1) {
              }
            }
            local_a8 = lVar13 + (ulonglong)uVar14;
            uVar14 = 1 << ((byte)uVar14 & 0x1f);
            uStack_88 = (undefined5)local_a8;
            uStack_83 = (undefined3)(local_a8 >> 0x28);
            uStack_7c = 0;
            if (local_98 == 0xffffffffffffffff) {
              local_98 = local_a8;
            }
            bVar15 = true;
            local_90 = lVar12;
            uStack_80 = uVar14;
            local_78 = uVar8;
            if (((local_a0 <= local_a8) || (local_68 == (code *)0x0)) ||
               (cVar3 = (*local_68)(&local_b0), cVar3 != '\0')) goto LAB_140d7df48;
            uVar4 = uVar4 & ~uVar14;
          } while (uVar4 != 0);
        }
        uVar11 = local_f0 - 1;
      } while (local_f0 != 0);
      uVar11 = 3;
      uVar8 = local_e0 - 1;
    } while (local_e0 != 0);
  }
  uVar4 = (local_b0->base).bits;
  uVar8 = CONCAT44(uVar4 >> 1,uVar4) & 0x100000001;
  iVar5 = (*local_70)(uVar8,&local_b0);
  if (iVar5 == 0) {
LAB_140d7df3d:
    local_a8 = 0;
    bVar15 = false;
  }
  else {
    local_a8 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uStack_83 = 0;
    uStack_80 = 1;
    uStack_7c = 1;
    if (local_98 == 0xffffffffffffffff) {
      local_98 = 0;
    }
    bVar15 = true;
    local_78 = uVar8;
    if ((local_68 != (code *)0x0) && (cVar3 = (*local_68)(&local_b0), cVar3 == '\0'))
    goto LAB_140d7df3d;
  }
LAB_140d7df48:
  local_58.value = uVar9;
  local_58.version = uVar10;
  pas_segregated_directory_update_last_empty_plus_one_after_search
            (&local_b0->base,&local_58,local_98 + 1);
  pVar6 = pas_page_sharing_pool_take_none_available;
  if (bVar15) {
    pVar6 = local_b8;
  }
  if ((local_48 ^ (ulonglong)auStack_118) == __security_cookie.value) {
    return pVar6;
  }
LAB_140d7dfca:
  pcVar1 = (code *)swi(3);
  pVar6 = (*pcVar1)();
  return pVar6;
}

// take_last_empty_shared_page_should_consider_view_parallel @ 140d7dfe0

uint __cdecl
take_last_empty_shared_page_should_consider_view_parallel
          (pas_segregated_directory_bitvector_segment param_1,
          pas_segregated_directory_iterate_config *param_2)

{
  return param_1.empty_bits;
}

// take_last_empty_shared_page_consider_view @ 140d7dff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
take_last_empty_shared_page_consider_view(pas_segregated_directory_iterate_config *param_1)

{
  PSRWLOCK pRVar1;
  uint *puVar2;
  byte bVar3;
  pas_segregated_page_config_kind pVar4;
  pas_lock_hold_mode pVar5;
  uint uVar6;
  pas_mmap_capability pVar7;
  pas_segregated_directory_bitvector_segment *ppVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  ulonglong uVar15;
  pas_deferred_decommit_log *ppVar16;
  undefined1 uVar17;
  bool bVar18;
  pas_lock_hold_mode pVar19;
  pas_segregated_page *ppVar20;
  ulonglong uVar21;
  void *pvVar22;
  ulong64 uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  pas_segregated_directory *ppVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong *puVar35;
  pas_segregated_shared_handle *ppVar36;
  bool bVar37;
  undefined1 auStackY_e8 [32];
  PSRWLOCK local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  ppVar27 = param_1->directory;
  uVar31 = param_1->index;
  ppVar8 = (param_1->bit_reference).segment_ptr;
  uVar25 = (param_1->bit_reference).mask;
  bVar18 = (param_1->bit_reference).is_inline_bit;
  puVar9 = param_1->arg;
  puVar35 = (ulonglong *)puVar9[2];
  uVar21 = *puVar35;
  uVar28 = puVar35[1];
  uVar10 = puVar35[4];
  uVar11 = puVar35[5];
  pcVar12 = (code *)puVar35[8];
  pcVar13 = (code *)puVar35[9];
  pcVar14 = (code *)puVar35[0xc];
  pVar4 = *(pas_segregated_page_config_kind *)((longlong)puVar35 + 0x6c);
  uVar33 = puVar35[0xf];
  uVar15 = puVar35[0x10];
  ppVar16 = (pas_deferred_decommit_log *)*puVar9;
  pVar5 = *(pas_lock_hold_mode *)(puVar9 + 1);
  local_50 = (PSRWLOCK)0x0;
  if ((bVar18 & 1U) == 0) {
    do {
      uVar6 = ppVar8->empty_bits;
      if (uVar6 == (uVar6 & ~uVar25)) goto LAB_140d7e1ed;
      LOCK();
      bVar37 = uVar6 == ppVar8->empty_bits;
      if (bVar37) {
        ppVar8->empty_bits = uVar6 & ~uVar25;
      }
      UNLOCK();
    } while (!bVar37);
  }
  else {
    do {
      uVar6 = ppVar27->bits;
      if (uVar6 == (uVar6 & 0xfffffffd)) goto LAB_140d7e1ed;
      LOCK();
      bVar37 = uVar6 == ppVar27->bits;
      if (bVar37) {
        ppVar27->bits = uVar6 & 0xfffffffd;
      }
      UNLOCK();
    } while (!bVar37);
  }
  uVar34 = (ulonglong)(ppVar27->first_view).payload;
  uVar23 = 0;
  if (7 < uVar34) {
    uVar23 = pas_compact_heap_reservation_base;
  }
  uVar34 = uVar23 + uVar34;
  if (uVar34 == 0) {
LAB_140d7e8c2:
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  uVar6 = (ppVar27->data).payload;
  lVar26 = (ulonglong)uVar6 * 8 + pas_compact_heap_reservation_base;
  uVar29 = 1;
  if (lVar26 != 0 && uVar6 != 0) {
    uVar29 = (ulonglong)(*(int *)(lVar26 + 0x30) + 1);
  }
  if (uVar29 <= uVar31) goto LAB_140d7e8c2;
  if (uVar31 != 0) {
    lVar30 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar26 + 0x2c) * 8;
    if ((ulonglong)*(uint *)(lVar26 + 0x2c) == 0) {
      lVar30 = 0;
    }
    uVar34 = (ulonglong)*(uint *)(lVar30 + -4 + uVar31 * 4);
    uVar23 = 0;
    if (7 < uVar34) {
      uVar23 = pas_compact_heap_reservation_base;
    }
    uVar34 = uVar23 + uVar34;
  }
  if (((uint)uVar34 & 7) != 2) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  puVar35 = (ulonglong *)(uVar34 & 0xfffffffffffffff8);
  if (pVar4 == pas_segregated_page_config_kind_pas_utility_small) {
    if (pVar5 == pas_lock_is_not_held) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    bVar3 = *(byte *)((longlong)puVar35 + 0x1c);
    pVar19 = pas_lock_is_held;
joined_r0x000140d7e1b6:
    if ((bVar3 & 1) == 0) goto LAB_140d7e1bc;
LAB_140d7e271:
    if (*(int *)((longlong)puVar35 + 0x24) == 0) {
      if ((*puVar35 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      ppVar36 = (pas_segregated_shared_handle *)(*puVar35 & 0xfffffffffffffffe);
      uVar31 = uVar15 >> ((byte)uVar33 & 0x3f);
      if (uVar31 != 0) {
        uVar33 = uVar31;
        do {
          uVar34 = (ulonglong)*(uint *)((longlong)&ppVar36->shared_view + uVar33 * 4);
          lVar26 = pas_compact_heap_reservation_base + uVar34 * 8;
          if ((lVar26 != 0 && uVar34 != 0) && ((*(byte *)(lVar26 + 0x11) & 8) == 0)) {
            lVar30 = pas_compact_heap_reservation_base +
                     (ulonglong)(uint)*(uint3 *)(lVar26 + 0xb) * 8;
            if (*(uint3 *)(lVar26 + 0xb) == 0) {
              lVar30 = 0;
            }
            if ((ulonglong)*(byte *)(lVar26 + 0xe) == 0) {
              do {
                uVar6 = *(uint *)(lVar30 + 8);
                if ((uVar6 & 0xfffffffe) == uVar6) goto LAB_140d7e4a9;
                LOCK();
                bVar37 = uVar6 == *(uint *)(lVar30 + 8);
                if (bVar37) {
                  *(uint *)(lVar30 + 8) = uVar6 & 0xfffffffe;
                }
                UNLOCK();
              } while (!bVar37);
            }
            else {
              uVar34 = (ulonglong)*(byte *)(lVar26 + 0xe) - 1;
              uVar32 = (ulonglong)
                       *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                                (ulonglong)*(uint *)(lVar30 + 4) * 8);
              uVar29 = (ulonglong)((uint)(uVar34 >> 5) & 3);
              lVar30 = pas_compact_heap_reservation_base + uVar32 * 8;
              if (uVar32 == 0) {
                lVar30 = 0;
              }
              uVar32 = (ulonglong)*(uint *)(lVar30 + (uVar34 >> 7) * 4);
              lVar30 = pas_compact_heap_reservation_base + uVar32 * 8;
              if (uVar32 == 0) {
                lVar30 = 0;
              }
              bVar3 = (byte)uVar34 & 0x1f;
              do {
                uVar6 = *(uint *)(lVar30 + uVar29 * 8);
                uVar24 = uVar6 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
                if (uVar6 == uVar24) goto LAB_140d7e4a9;
                puVar2 = (uint *)(lVar30 + uVar29 * 8);
                LOCK();
                bVar37 = uVar6 == *puVar2;
                if (bVar37) {
                  *puVar2 = uVar24;
                }
                UNLOCK();
              } while (!bVar37);
            }
            bVar3 = *(byte *)(lVar26 + 0x11);
            if ((bVar3 & 4) == 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            if ((bVar3 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            *(byte *)(lVar26 + 0x11) = bVar3 | 8;
          }
          uVar33 = uVar33 - 1;
        } while (uVar33 != 0);
      }
      if ((bVar18 & 1U) == 0) {
        do {
          uVar6 = ppVar8->empty_bits;
          if (uVar6 == (uVar6 & ~uVar25)) break;
          LOCK();
          bVar37 = uVar6 == ppVar8->empty_bits;
          if (bVar37) {
            ppVar8->empty_bits = uVar6 & ~uVar25;
          }
          UNLOCK();
        } while (!bVar37);
      }
      else {
        do {
          uVar6 = ppVar27->bits;
          if (uVar6 == (uVar6 & 0xfffffffd)) break;
          LOCK();
          bVar37 = uVar6 == ppVar27->bits;
          if (bVar37) {
            ppVar27->bits = uVar6 & 0xfffffffd;
          }
          UNLOCK();
        } while (!bVar37);
      }
      ppVar20 = (pas_segregated_page *)(*pcVar12)(ppVar36->page_boundary);
      if ((uVar21 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      uVar23 = (ppVar20->emptiness).num_non_empty_words_or_live_bytes;
      if (uVar23 == 0) {
LAB_140d7e59d:
        puVar2 = &ppVar8->empty_bits;
        if ((bVar18 & 1U) != 0) {
          uVar25 = 2;
          puVar2 = &ppVar27->bits;
        }
        if ((*puVar2 & uVar25) != 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        bVar3 = *(byte *)((longlong)puVar35 + 0x1c);
        if ((bVar3 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if (*(int *)((longlong)puVar35 + 0x24) != 0) {
          pas_segregated_page_config_kind_get_string(pVar4);
          pas_log("Error: shared view %p (%s) has is_in_use_for_allocation_count = %u\n");
          if (uVar31 != 0) {
            uVar21 = 0;
            uVar23 = pas_compact_heap_reservation_base;
            do {
              uVar28 = (ulonglong)ppVar36->partial_views[uVar21].payload;
              if ((uVar28 != 0) && (uVar23 + uVar28 * 8 != 0)) {
                pas_log("partial_index = %zu, partial_view = %p, is_in_use_for_allocation = %s\n");
                uVar23 = pas_compact_heap_reservation_base;
              }
              uVar21 = uVar21 + 1;
            } while (uVar31 != uVar21);
          }
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if (pVar4 == pas_segregated_page_config_kind_pas_utility_small) {
          if (uVar10 != uVar11) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          *(byte *)((longlong)puVar35 + 0x1c) = bVar3 & 0xfe;
          pVar7 = *(pas_mmap_capability *)(uVar28 + 0x438);
          pvVar22 = (void *)(*pcVar13)(ppVar20);
          pas_page_malloc_decommit(pvVar22,uVar10,pVar7);
          (*pcVar14)(ppVar20,1);
          ppVar16->total = ppVar16->total + uVar10;
          uVar23 = pas_compact_heap_reservation_base;
        }
        else {
          if (uVar23 != 0) {
            if (uVar10 <= uVar11) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            bVar18 = pas_segregated_page_take_empty_granules
                               (ppVar20,ppVar16,(pas_lock **)&local_50,pas_range_is_locked,pVar5);
            if (!bVar18) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            uVar23 = pas_segregated_page_get_num_committed_granules(ppVar20);
            if (uVar23 == 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            *(undefined4 *)(puVar9 + 3) = 3;
            bVar18 = true;
LAB_140d7e4bf:
            pRVar1 = (PSRWLOCK)(puVar35 + 2);
            if (local_50 != pRVar1) {
              if (local_50 != (PSRWLOCK)0x0) {
                ReleaseSRWLockExclusive(local_50);
              }
              AcquireSRWLockExclusive(pRVar1);
              local_50 = pRVar1;
            }
            goto LAB_140d7e4d9;
          }
          *(byte *)((longlong)puVar35 + 0x1c) = bVar3 & 0xfe;
          if (local_50 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(local_50);
            local_50 = (PSRWLOCK)0x0;
          }
          bVar18 = pas_segregated_page_take_physically(ppVar20,ppVar16,pas_range_is_locked,pVar5);
          if (!bVar18) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          (*pcVar14)(ppVar20,pVar5);
          pRVar1 = (PSRWLOCK)(puVar35 + 2);
          uVar23 = pas_compact_heap_reservation_base;
          if (local_50 != pRVar1) {
            if (local_50 != (PSRWLOCK)0x0) {
              ReleaseSRWLockExclusive(local_50);
            }
            AcquireSRWLockExclusive(pRVar1);
            uVar23 = pas_compact_heap_reservation_base;
            local_50 = pRVar1;
          }
        }
        pas_compact_heap_reservation_base = uVar23;
        if (uVar31 != 0) {
          do {
            uVar21 = (ulonglong)*(uint *)((longlong)&ppVar36->shared_view + uVar31 * 4);
            if (((uVar21 != 0) && (lVar26 = uVar23 + uVar21 * 8, lVar26 != 0)) &&
               (bVar3 = *(byte *)(lVar26 + 0x11), (bVar3 & 8) != 0)) {
              *(byte *)(lVar26 + 0x11) = bVar3 & 0xf7;
              if ((bVar3 & 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
              ppVar27 = (pas_segregated_directory *)
                        (uVar23 + (ulonglong)(uint)*(uint3 *)(lVar26 + 0xb) * 8);
              if (*(uint3 *)(lVar26 + 0xb) == 0) {
                ppVar27 = (pas_segregated_directory *)0x0;
              }
              *(byte *)(lVar26 + 0x11) = bVar3 & 0xe7;
              bVar18 = pas_segregated_directory_view_did_become_eligible_at_index
                                 (ppVar27,(ulonglong)*(byte *)(lVar26 + 0xe));
              uVar23 = pas_compact_heap_reservation_base;
              if (!bVar18) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
            }
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
        if (local_50 == (PSRWLOCK)0x0) {
          if (pVar19 == pas_lock_is_not_held) goto LAB_140d7e877;
LAB_140d7e854:
          pas_segregated_shared_handle_destroy(ppVar36);
        }
        else {
          ReleaseSRWLockExclusive(local_50);
          local_50 = (PSRWLOCK)0x0;
          if (pVar19 != pas_lock_is_not_held) goto LAB_140d7e854;
LAB_140d7e877:
          AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
          pas_segregated_shared_handle_destroy(ppVar36);
          ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        }
        *(undefined4 *)(puVar9 + 3) = 3;
        bVar18 = true;
      }
      else {
        if (uVar10 != uVar11) {
          if (uVar10 <= uVar11) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          if ((uVar10 | uVar11) >> 0x20 == 0) {
            uVar21 = (uVar10 & 0xffffffff) / (uVar11 & 0xffffffff);
          }
          else {
            uVar21 = uVar10 / uVar11;
          }
          do {
            bVar37 = uVar21 == 0;
            uVar21 = uVar21 - 1;
            if (bVar37) goto LAB_140d7e4a9;
          } while (*(char *)((longlong)ppVar20->alloc_bits + uVar21 + (uVar15 + 0x1f >> 5) * 4) !=
                   '\0');
          goto LAB_140d7e59d;
        }
LAB_140d7e4a9:
        if (pVar4 != pas_segregated_page_config_kind_pas_utility_small) {
          bVar18 = false;
          goto LAB_140d7e4bf;
        }
        bVar18 = false;
LAB_140d7e4d9:
        if (uVar31 != 0) {
          uVar23 = pas_compact_heap_reservation_base;
          do {
            uVar21 = (ulonglong)*(uint *)((longlong)&ppVar36->shared_view + uVar31 * 4);
            if (((uVar21 != 0) && (lVar26 = uVar23 + uVar21 * 8, lVar26 != 0)) &&
               ((*(byte *)(lVar26 + 0x11) & 8) != 0)) {
              ppVar27 = (pas_segregated_directory *)
                        (uVar23 + (ulonglong)(uint)*(uint3 *)(lVar26 + 0xb) * 8);
              if (*(uint3 *)(lVar26 + 0xb) == 0) {
                ppVar27 = (pas_segregated_directory *)0x0;
              }
              bVar37 = pas_segregated_directory_view_did_become_eligible_at_index
                                 (ppVar27,(ulonglong)*(byte *)(lVar26 + 0xe));
              uVar23 = pas_compact_heap_reservation_base;
              if (!bVar37) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
              *(byte *)(lVar26 + 0x11) = *(byte *)(lVar26 + 0x11) & 0xf7;
            }
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
      }
    }
    else {
      bVar18 = false;
    }
  }
  else {
    bVar37 = pas_deferred_decommit_log_lock_for_adding(ppVar16,(pas_lock *)(puVar35 + 1),pVar5);
    if (!bVar37) {
      pas_segregated_directory_view_did_become_empty_at_index(ppVar27,uVar31);
      *(undefined4 *)(puVar9 + 3) = 2;
      bVar18 = true;
      goto LAB_140d7e1ef;
    }
    pRVar1 = (PSRWLOCK)(puVar35 + 2);
    pVar19 = pVar5;
    if (local_50 != pRVar1) {
      if (local_50 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_50);
      }
      AcquireSRWLockExclusive(pRVar1);
      bVar3 = *(byte *)((longlong)puVar35 + 0x1c);
      local_50 = pRVar1;
      goto joined_r0x000140d7e1b6;
    }
    if ((*(byte *)((longlong)puVar35 + 0x1c) & 1) != 0) goto LAB_140d7e271;
LAB_140d7e1bc:
    bVar18 = false;
  }
  if (local_50 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_50);
  }
  local_50 = (PSRWLOCK)0x0;
  if (pVar4 == pas_segregated_page_config_kind_pas_utility_small) {
    if (pVar5 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
  }
  else if (bVar18 == false) {
    pas_deferred_decommit_log_unlock_after_aborted_add(ppVar16,(pas_lock *)(puVar35 + 1));
  }
LAB_140d7e1ef:
  if ((local_48 ^ (ulonglong)auStackY_e8) != __security_cookie.value) {
    pcVar12 = (code *)swi(3);
    uVar17 = (*pcVar12)();
    return (bool)uVar17;
  }
  return bVar18;
LAB_140d7e1ed:
  bVar18 = false;
  goto LAB_140d7e1ef;
}

// pas_segregated_shared_page_directory_dump_reference @ 140d7e950

void __cdecl
pas_segregated_shared_page_directory_dump_reference
          (pas_segregated_shared_page_directory *param_1,pas_stream *param_2)

{
  pas_stream_printf(param_2,"%p(shared_page_directory)");
  return;
}

// pas_segregated_shared_page_directory_dump_for_spectrum @ 140d7e980

void __cdecl
pas_segregated_shared_page_directory_dump_for_spectrum(pas_stream *param_1,void *param_2)

{
  pas_stream_printf(param_1,"%p(shared_page_directory)");
  return;
}


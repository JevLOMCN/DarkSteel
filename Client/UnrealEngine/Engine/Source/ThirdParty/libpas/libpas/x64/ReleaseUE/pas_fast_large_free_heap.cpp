// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 16

// pas_fast_large_free_heap_construct @ 140d9d5c0

void __cdecl pas_fast_large_free_heap_construct(pas_fast_large_free_heap *param_1)

{
  (param_1->tree).minimum.payload[1] = '\0';
  (param_1->tree).minimum.payload[2] = '\0';
  (param_1->tree).root = (uchar  [3])0x0;
  (param_1->tree).minimum.payload[0] = '\0';
  param_1->num_mapped_bytes = 0;
  return;
}

// pas_fast_large_free_heap_try_allocate @ 140d9d5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

pas_allocation_result * __cdecl
pas_fast_large_free_heap_try_allocate
          (pas_allocation_result *__return_storage_ptr__,pas_fast_large_free_heap *param_1,
          ulong64 param_2,pas_alignment *param_3,pas_large_free_heap_config *param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  uint3 uVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  ulonglong uVar10;
  BOOLEAN BVar11;
  ulonglong uVar12;
  void *pvVar13;
  pas_aligned_allocation_result *ppVar14;
  pas_allocation_result *ppVar15;
  uint uVar16;
  pas_fast_large_free_heap_node *ppVar17;
  void *pvVar18;
  void *pvVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  void *pvVar22;
  ulonglong uVar23;
  longlong lVar24;
  void *pvVar25;
  char cVar26;
  void *pvVar27;
  void *pvVar28;
  ulong64 uVar29;
  ulong64 uVar30;
  pas_fast_large_free_heap_node *ppVar31;
  longlong lVar32;
  longlong lVar33;
  pas_zero_mode pVar34;
  ulonglong uVar35;
  pas_zero_mode pVar36;
  void *pvVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  void *pvVar40;
  longlong lVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStackY_188 [32];
  longlong local_150;
  longlong local_130;
  ulonglong local_118;
  pas_large_free local_e8;
  pas_aligned_allocation_result local_c8;
  ulonglong uStack_90;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_2 == 0) {
    __return_storage_ptr__->did_succeed = true;
    __return_storage_ptr__->zero_mode = pas_zero_mode_is_all_zero;
  }
  else {
    pvVar25 = (void *)param_3->alignment;
    uVar1 = (longlong)pvVar25 - 1;
    if (((ulonglong)pvVar25 ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pvVar2 = (void *)param_3->alignment_begin;
    if (pvVar25 <= pvVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    BVar11 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar11 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar16 = (uint)*(uint3 *)(param_1->tree).minimum.payload;
    ppVar17 = (pas_fast_large_free_heap_node *)
              (pas_compact_heap_reservation_base + (ulonglong)uVar16 * 8);
    if (ppVar17 != (pas_fast_large_free_heap_node *)0x0 && uVar16 != 0) {
      do {
        pvVar13 = *(void **)&ppVar17->free;
        uVar20 = *(ulonglong *)&(ppVar17->free).end;
        pvVar37 = (void *)(uVar20 & 0xffffffffffff);
        pvVar18 = (void *)((ulonglong)pvVar13 & 0xffffffffffff);
        uVar35 = (longlong)pvVar37 - (longlong)pvVar18;
        if (param_2 <= uVar35) {
          pvVar27 = *(void **)&(ppVar17->free).offset_in_type;
          local_118 = *(ulonglong *)&(ppVar17->free).zero_mode;
          pvVar28 = (void *)((ulonglong)pvVar27 & 0xffffffffffff);
          dVar5 = _UNK_1531e94a8;
          dVar6 = ___xmm_45300000000000004330000000000000;
          uVar7 = __xmm_00000000000000004530000043300000._4_4_;
          uVar8 = (undefined4)__xmm_00000000000000004530000043300000;
          dVar9 = __real_3ff4cccccccccccd;
          if (pvVar28 == (void *)0x0) {
            if ((uVar1 & (longlong)pvVar18 - (longlong)pvVar2) != 0) {
              if (pvVar37 != pvVar18) {
                uVar29 = param_4->type_size;
                pvVar27 = pvVar18;
                goto LAB_140d9d9a6;
              }
              goto LAB_140d9dddd;
            }
            uVar12 = param_4->min_alignment - 1;
            if ((param_4->min_alignment ^ uVar12) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if ((uVar12 & param_2) != 0) {
              uVar20 = uVar35;
              pvVar27 = pvVar18;
              if (pvVar37 != pvVar18) goto LAB_140d9dae1;
              goto LAB_140d9dddd;
            }
            uVar35 = param_4->type_size;
            if ((param_2 | uVar35) >> 0x20 == 0) {
              uVar35 = (param_2 & 0xffffffff) % (uVar35 & 0xffffffff);
            }
            else {
              uVar35 = param_2 % uVar35;
            }
            pvVar22 = (void *)((longlong)pvVar13 + param_2 & 0xffffffffffff);
            pvVar19 = (void *)(uVar35 & 0xffffffffffff);
            pvVar40 = (void *)(uVar20 & 0xffff000000000000 | (ulonglong)pvVar18);
            uVar20 = local_118;
          }
          else {
            if (pvVar37 == pvVar18) goto LAB_140d9dddd;
            uVar29 = param_4->type_size;
            pvVar27 = (void *)((uVar29 - (longlong)pvVar28) + (longlong)pvVar18);
            if (pvVar37 <= pvVar27) goto LAB_140d9dddd;
LAB_140d9d9a6:
            pas_coalign((pas_coalign_result *)&local_c8,(ulong64)pvVar27,uVar29,(ulong64)pvVar2,
                        (ulong64)pvVar25);
            dVar5 = _UNK_1531e94a8;
            dVar6 = ___xmm_45300000000000004330000000000000;
            uVar7 = __xmm_00000000000000004530000043300000._4_4_;
            uVar8 = (undefined4)__xmm_00000000000000004530000043300000;
            dVar9 = __real_3ff4cccccccccccd;
            if ((((ulonglong)local_c8.result & 1) == 0) ||
               (uVar20 = (longlong)pvVar37 - local_c8.result_size,
               pvVar27 = (void *)local_c8.result_size,
               pvVar37 < local_c8.result_size || (longlong)pvVar37 - local_c8.result_size == 0))
            goto LAB_140d9dddd;
LAB_140d9dae1:
            dVar5 = _UNK_1531e94a8;
            dVar6 = ___xmm_45300000000000004330000000000000;
            uVar7 = __xmm_00000000000000004530000043300000._4_4_;
            uVar8 = (undefined4)__xmm_00000000000000004530000043300000;
            dVar9 = __real_3ff4cccccccccccd;
            if (uVar20 < param_2) goto LAB_140d9dddd;
            pvVar40 = (void *)((longlong)pvVar13 + ((longlong)pvVar27 - (longlong)pvVar18) &
                              0xffffffffffff);
            uVar12 = ((longlong)pvVar27 - (longlong)pvVar18) + (longlong)pvVar28;
            uVar20 = param_4->type_size;
            if ((uVar12 | uVar20) >> 0x20 == 0) {
              uVar12 = (uVar12 & 0xffffffff) % (uVar20 & 0xffffffff);
            }
            else {
              uVar12 = uVar12 % uVar20;
            }
            uVar12 = (((longlong)pvVar27 + param_2) - (longlong)pvVar40) + (uVar12 & 0xffffffffffff)
            ;
            if ((uVar12 | uVar20) >> 0x20 == 0) {
              uVar12 = (uVar12 & 0xffffffff) % (uVar20 & 0xffffffff);
            }
            else {
              uVar12 = uVar12 % uVar20;
            }
            uVar21 = param_4->min_alignment;
            if ((uVar21 ^ uVar21 - 1) <= uVar21 - 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            lVar41 = (longlong)pvVar40 - (longlong)pvVar18;
            if (lVar41 == 0) {
              local_150 = 0;
            }
            else if (pvVar28 == (void *)0x0) {
              pvVar13 = pvVar18;
              local_150 = lVar41;
              if ((uVar21 + 0xffffffffffff & (ulonglong)pvVar18) != 0) {
LAB_140d9eae5:
                local_150 = 0;
                pas_coalign((pas_coalign_result *)&local_c8,(ulong64)pvVar13,uVar20,0,uVar21);
                if (((((ulonglong)local_c8.result & 1) != 0) &&
                    (uVar20 = (longlong)pvVar40 - local_c8.result_size,
                    local_c8.result_size <= pvVar40 && uVar20 != 0)) &&
                   (local_150 = lVar41, (void *)local_c8.result_size != pvVar18)) {
                  uVar21 = param_4->min_alignment;
                  if ((uVar21 | uVar20) >> 0x20 == 0) {
                    uVar21 = (uVar20 & 0xffffffff) % (uVar21 & 0xffffffff);
                  }
                  else {
                    uVar21 = uVar20 % uVar21;
                  }
                  uVar20 = uVar20 - uVar21;
                  uVar21 = param_4->type_size;
                  if ((uVar20 | uVar21) >> 0x20 == 0) {
                    uVar21 = (uVar20 & 0xffffffff) % (uVar21 & 0xffffffff);
                  }
                  else {
                    uVar21 = uVar20 % uVar21;
                  }
                  local_150 = uVar20 - uVar21;
                }
              }
            }
            else {
              pvVar13 = (void *)((uVar20 - (longlong)pvVar28) + (longlong)pvVar18);
              if (pvVar13 < pvVar40) goto LAB_140d9eae5;
              local_150 = 0;
            }
            uVar20 = param_4->min_alignment;
            if ((uVar20 ^ uVar20 - 1) <= uVar20 - 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pvVar22 = (void *)((longlong)pvVar27 + param_2 & 0xffffffffffff);
            pvVar19 = (void *)(uVar12 & 0xffffffffffff);
            lVar41 = (longlong)pvVar37 - (longlong)pvVar22;
            if (lVar41 == 0) {
              lVar24 = 0;
            }
            else if (pvVar19 == (void *)0x0) {
              lVar24 = lVar41;
              if ((uVar20 + 0xffffffffffff & (ulonglong)pvVar22) != 0) {
                uVar29 = param_4->type_size;
                pvVar13 = pvVar22;
LAB_140d9ebde:
                pas_coalign((pas_coalign_result *)&local_c8,(ulong64)pvVar13,uVar29,0,uVar20);
                if (((ulonglong)local_c8.result & 1) == 0) {
                  lVar24 = 0;
                }
                else {
                  uVar20 = (longlong)pvVar37 - local_c8.result_size;
                  lVar24 = 0;
                  if ((local_c8.result_size <= pvVar37 && uVar20 != 0) &&
                     (lVar24 = lVar41, (void *)local_c8.result_size != pvVar22)) {
                    uVar12 = param_4->min_alignment;
                    if ((uVar12 | uVar20) >> 0x20 == 0) {
                      uVar12 = (uVar20 & 0xffffffff) % (uVar12 & 0xffffffff);
                    }
                    else {
                      uVar12 = uVar20 % uVar12;
                    }
                    uVar20 = uVar20 - uVar12;
                    uVar12 = param_4->type_size;
                    if ((uVar20 | uVar12) >> 0x20 == 0) {
                      uVar12 = (uVar20 & 0xffffffff) % (uVar12 & 0xffffffff);
                    }
                    else {
                      uVar12 = uVar20 % uVar12;
                    }
                    lVar24 = uVar20 - uVar12;
                  }
                }
              }
            }
            else {
              uVar29 = param_4->type_size;
              pvVar13 = (void *)((uVar29 - (longlong)pvVar19) + (longlong)pvVar22);
              if (pvVar13 < pvVar37) goto LAB_140d9ebde;
              lVar24 = 0;
            }
            lVar24 = local_150 + param_2 + lVar24;
            auVar42._8_4_ = (int)(uVar35 >> 0x20);
            auVar42._0_8_ = uVar35;
            auVar42._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
            auVar43._8_4_ = (int)((ulonglong)lVar24 >> 0x20);
            auVar43._0_8_ = lVar24;
            auVar43._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
            dVar5 = _UNK_1531e94a8;
            dVar6 = ___xmm_45300000000000004330000000000000;
            uVar7 = __xmm_00000000000000004530000043300000._4_4_;
            uVar8 = (undefined4)__xmm_00000000000000004530000043300000;
            dVar9 = __real_3ff4cccccccccccd;
            if (__real_3ff4cccccccccccd <
                ((auVar42._8_8_ - _UNK_1531e94a8) +
                ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,(int)uVar35) -
                ___xmm_45300000000000004330000000000000)) /
                ((auVar43._8_8_ - _UNK_1531e94a8) +
                ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,(int)lVar24) -
                ___xmm_45300000000000004330000000000000))) goto LAB_140d9dddd;
            uVar20 = local_118 & 0xff;
            pvVar27 = pvVar28;
            pvVar13 = pvVar18;
            pvVar18 = pvVar40;
          }
          dVar5 = _UNK_1531e94a8;
          dVar6 = ___xmm_45300000000000004330000000000000;
          uVar7 = __xmm_00000000000000004530000043300000._4_4_;
          uVar8 = (undefined4)__xmm_00000000000000004530000043300000;
          dVar9 = __real_3ff4cccccccccccd;
          if (pvVar22 == pvVar18) goto LAB_140d9dddd;
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          goto LAB_140d9e41f;
        }
        uVar16 = (uint)*(uint3 *)(ppVar17->tree_node).parent.payload;
      } while ((uVar16 != 0) &&
              (ppVar17 = (pas_fast_large_free_heap_node *)
                         (pas_compact_heap_reservation_base + (ulonglong)uVar16 * 8),
              ppVar17 != (pas_fast_large_free_heap_node *)0x0));
    }
LAB_140d9d6bf:
    local_e8._0_8_ = pvVar25;
    local_e8._8_8_ = pvVar2;
    (*param_4->aligned_allocator)
              (&local_c8,param_2,(pas_alignment *)&local_e8,param_4->aligned_allocator_arg);
    uVar29 = local_c8.left_padding_size;
    pvVar37 = local_c8.left_padding;
    pvVar13 = local_c8.result;
    if (local_c8.result != (void *)0x0) {
      if (local_c8.result_size != param_2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (pas_zero_mode_is_all_zero < local_c8.zero_mode) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar16 = (uint)*(uint3 *)(param_1->tree).root.payload;
      ppVar17 = (pas_fast_large_free_heap_node *)
                (pas_compact_heap_reservation_base + (ulonglong)uVar16 * 8);
      if (ppVar17 != (pas_fast_large_free_heap_node *)0x0 && uVar16 != 0) {
        ppVar31 = (pas_fast_large_free_heap_node *)0x0;
        do {
          if ((void *)(*(ulonglong *)&ppVar17->free & 0xffffffffffff) < local_c8.left_padding) {
            uVar4 = *(uint3 *)(ppVar17->tree_node).right.payload;
            ppVar31 = ppVar17;
            if (uVar4 == 0) goto LAB_140d9d808;
          }
          else {
            uVar4 = *(uint3 *)(ppVar17->tree_node).left.payload;
            if (uVar4 == 0) break;
          }
          ppVar17 = (pas_fast_large_free_heap_node *)
                    ((ulonglong)uVar4 * 8 + pas_compact_heap_reservation_base);
        } while (ppVar17 != (pas_fast_large_free_heap_node *)0x0);
        ppVar17 = ppVar31;
        if (ppVar17 != (pas_fast_large_free_heap_node *)0x0) {
LAB_140d9d808:
          uVar20 = *(ulonglong *)&(ppVar17->free).end;
          if ((void *)(uVar20 & 0xffffffffffff) == local_c8.left_padding) {
            uVar35 = *(ulonglong *)&(ppVar17->free).offset_in_type;
            pvVar27 = (void *)param_4->type_size;
            pvVar18 = (void *)(uVar35 & 0xffffffffffff);
            if (pvVar27 <= pvVar18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar12 = ((longlong)local_c8.left_padding -
                     ((ulonglong)*(void **)&ppVar17->free & 0xffffffffffff)) + (longlong)pvVar18;
            if ((uVar12 | (ulonglong)pvVar27) >> 0x20 == 0) {
              uVar12 = (uVar12 & 0xffffffff) % ((ulonglong)pvVar27 & 0xffffffff);
            }
            else {
              uVar12 = uVar12 % (ulonglong)pvVar27;
            }
            uVar21 = *(ulonglong *)&(ppVar17->free).zero_mode;
            pvVar18 = local_c8.left_padding;
            uVar10 = (longlong)local_c8.right_padding + local_c8.right_padding_size;
            pvVar28 = *(void **)&ppVar17->free;
            pVar36 = local_c8.zero_mode;
            do {
              pVar34 = pVar36;
              uVar39 = uVar35;
              uVar38 = uVar20;
              uVar35 = uVar12;
              pvVar22 = pvVar28;
              uVar20 = uVar10;
              pvVar28 = pvVar18;
              uVar23 = uVar21;
              uVar21 = (ulonglong)pVar34;
              pvVar18 = pvVar22;
              uVar10 = uVar38;
              uVar12 = uVar39;
              pVar36 = (pas_zero_mode)uVar23;
            } while (((uVar20 ^ (ulonglong)pvVar22) & 0xffffffffffff) == 0);
            if ((((ulonglong)pvVar28 ^ uVar38) & 0xffffffffffff) == 0) {
              pvVar28 = (void *)(uVar39 & 0xffffffffffff);
              if (pvVar27 < pvVar28 || (longlong)pvVar27 - (longlong)pvVar28 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              pvVar19 = (void *)((ulonglong)pvVar22 & 0xffffffffffff);
              uVar12 = (longlong)pvVar28 + ((uVar38 & 0xffffffffffff) - (longlong)pvVar19);
              if ((uVar12 | (ulonglong)pvVar27) >> 0x20 == 0) {
                uVar12 = (uVar12 & 0xffffffff) % ((ulonglong)pvVar27 & 0xffffffff);
              }
              else {
                uVar12 = uVar12 % (ulonglong)pvVar27;
              }
              if (uVar12 == (uVar35 & 0xffffffffffff)) {
                cVar26 = (char)uVar23;
                uVar16 = (uint)cVar26;
                if (cVar26 == '\0') {
LAB_140d9db7f:
                  uVar35 = (ulonglong)uVar16;
                }
                else {
                  if (uVar16 != 1) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  cVar26 = (char)pVar34;
                  uVar16 = (uint)cVar26;
                  if (cVar26 == '\0') goto LAB_140d9db7f;
                  if (uVar16 != 1) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  uVar35 = 1;
                }
                pvVar40 = (void *)(uVar20 & 0xffffffffffff);
                lVar41 = (longlong)pvVar40 - (longlong)pvVar19;
                if (lVar41 != 0) {
                  if (pvVar28 == (void *)0x0) {
                    pvVar18 = pvVar19;
                    if ((uVar1 & (longlong)pvVar19 - (longlong)pvVar2) != 0) goto LAB_140d9dd30;
                    uVar20 = param_4->min_alignment - 1;
                    if ((param_4->min_alignment ^ uVar20) <= uVar20) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    if ((param_2 & uVar20) != 0) goto LAB_140d9e515;
                    pvVar25 = (void *)((longlong)pvVar22 + param_2 & 0xffffffffffff);
                    if ((param_2 | (ulonglong)pvVar27) >> 0x20 == 0) {
                      uVar20 = (param_2 & 0xffffffff) % ((ulonglong)pvVar27 & 0xffffffff);
                    }
                    else {
                      uVar20 = param_2 % (ulonglong)pvVar27;
                    }
                    pvVar27 = (void *)(uVar20 & 0xffffffffffff);
LAB_140d9e7a6:
                    if ((pvVar18 < pvVar13) && (pvVar25 != pvVar18)) {
                      if (pvVar37 <= pvVar18) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)invalidInstructionException();
                        (*pcVar3)();
                      }
                      if (pvVar18 == (void *)0x0) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)invalidInstructionException();
                        (*pcVar3)();
                      }
                      if (pvVar18 == pvVar19) {
                        remove_node(param_1,ppVar17);
                      }
                      else {
                        local_c8.result = pvVar19;
                        local_c8.result_size = (ulong64)pvVar18;
                        local_c8.left_padding = pvVar28;
                        local_c8.left_padding_size = uVar35;
                        fast_write_cursor((pas_generic_large_free_heap *)param_1,
                                          (pas_generic_large_free_cursor *)ppVar17,
                                          (pas_large_free *)&local_c8);
                      }
                      pVar36 = (pas_zero_mode)uVar35;
                      if (param_4->deallocator ==
                          (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0) {
                        param_1->num_mapped_bytes =
                             (longlong)pvVar40 + (param_1->num_mapped_bytes - (longlong)pvVar37);
                        if (pvVar40 < pvVar25) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)invalidInstructionException();
                          (*pcVar3)();
                        }
                        if (pvVar40 != pvVar25) {
                          if (pvVar25 == (void *)0x0) {
                    /* WARNING: Does not return */
                            pcVar3 = (code *)invalidInstructionException();
                            (*pcVar3)();
                          }
                          local_c8.left_padding_size =
                               CONCAT44(local_c8.left_padding_size._4_4_,pVar36);
                          local_c8.result = pvVar25;
                          local_c8.result_size = (ulong64)pvVar40;
                          local_c8.left_padding = pvVar27;
                          fast_merge((pas_generic_large_free_heap *)param_1,
                                     (pas_large_free *)&local_c8,param_4);
                        }
                      }
                      else {
                        param_1->num_mapped_bytes =
                             (longlong)pvVar25 + (param_1->num_mapped_bytes - (longlong)pvVar37);
                        (*param_4->deallocator)
                                  (pvVar25,(longlong)pvVar40 - (longlong)pvVar25,
                                   param_4->deallocator_arg);
                      }
                      goto LAB_140d9e962;
                    }
                  }
                  else {
                    pvVar18 = (void *)(((longlong)pvVar27 - (longlong)pvVar28) + (longlong)pvVar19);
                    if (pvVar18 < pvVar40) {
LAB_140d9dd30:
                      pas_coalign((pas_coalign_result *)&local_c8,(ulong64)pvVar18,(ulong64)pvVar27,
                                  (ulong64)pvVar2,(ulong64)pvVar25);
                      if ((((ulonglong)local_c8.result & 1) != 0) &&
                         (pvVar18 = (void *)local_c8.result_size, local_c8.result_size < pvVar40)) {
LAB_140d9e515:
                        if (param_2 <= (ulonglong)((longlong)pvVar40 - (longlong)pvVar18)) {
                          uVar12 = ((longlong)pvVar28 - (longlong)pvVar19) + (longlong)pvVar18;
                          uVar20 = param_4->type_size;
                          if ((uVar12 | uVar20) >> 0x20 == 0) {
                            uVar12 = (uVar12 & 0xffffffff) % (uVar20 & 0xffffffff);
                          }
                          else {
                            uVar12 = uVar12 % uVar20;
                          }
                          uVar12 = (uVar12 & 0xffffffffffff) + param_2;
                          if ((uVar12 | uVar20) >> 0x20 == 0) {
                            uVar12 = (uVar12 & 0xffffffff) % (uVar20 & 0xffffffff);
                          }
                          else {
                            uVar12 = uVar12 % uVar20;
                          }
                          uVar21 = param_4->min_alignment;
                          if ((uVar21 ^ uVar21 - 1) <= uVar21 - 1) {
                    /* WARNING: Does not return */
                            pcVar3 = (code *)invalidInstructionException();
                            (*pcVar3)();
                          }
                          lVar24 = (longlong)pvVar18 - (longlong)pvVar19;
                          if (lVar24 == 0) {
LAB_140d9e658:
                            lVar32 = 0;
                          }
                          else {
                            if (pvVar28 != (void *)0x0) {
                              pvVar25 = (void *)((uVar20 - (longlong)pvVar28) + (longlong)pvVar19);
                              if (pvVar25 < pvVar18) goto LAB_140d9ecda;
                              goto LAB_140d9e658;
                            }
                            pvVar25 = pvVar19;
                            lVar32 = lVar24;
                            if ((uVar21 + 0xffffffffffff & (ulonglong)pvVar19) != 0) {
LAB_140d9ecda:
                              pas_coalign((pas_coalign_result *)&local_c8,(ulong64)pvVar25,uVar20,0,
                                          uVar21);
                              if (((ulonglong)local_c8.result & 1) == 0) {
                                lVar32 = 0;
                              }
                              else {
                                uVar20 = (longlong)pvVar18 - local_c8.result_size;
                                lVar32 = 0;
                                if ((local_c8.result_size <= pvVar18 && uVar20 != 0) &&
                                   (lVar32 = lVar24, (void *)local_c8.result_size != pvVar19)) {
                                  uVar21 = param_4->min_alignment;
                                  if ((uVar21 | uVar20) >> 0x20 == 0) {
                                    uVar21 = (uVar20 & 0xffffffff) % (uVar21 & 0xffffffff);
                                  }
                                  else {
                                    uVar21 = uVar20 % uVar21;
                                  }
                                  uVar20 = uVar20 - uVar21;
                                  uVar21 = param_4->type_size;
                                  if ((uVar20 | uVar21) >> 0x20 == 0) {
                                    uVar21 = (uVar20 & 0xffffffff) % (uVar21 & 0xffffffff);
                                  }
                                  else {
                                    uVar21 = uVar20 % uVar21;
                                  }
                                  lVar32 = uVar20 - uVar21;
                                }
                              }
                            }
                          }
                          uVar20 = param_4->min_alignment;
                          if ((uVar20 ^ uVar20 - 1) <= uVar20 - 1) {
                    /* WARNING: Does not return */
                            pcVar3 = (code *)invalidInstructionException();
                            (*pcVar3)();
                          }
                          pvVar25 = (void *)((longlong)pvVar18 + param_2 & 0xffffffffffff);
                          pvVar27 = (void *)(uVar12 & 0xffffffffffff);
                          lVar24 = (longlong)pvVar40 - (longlong)pvVar25;
                          if (lVar24 == 0) {
                            lVar33 = 0;
                          }
                          else if (pvVar27 == (void *)0x0) {
                            lVar33 = lVar24;
                            if ((uVar20 + 0xffffffffffff & (ulonglong)pvVar25) != 0) {
                              uVar30 = param_4->type_size;
                              pvVar22 = pvVar25;
LAB_140d9eda9:
                              pas_coalign((pas_coalign_result *)&local_c8,(ulong64)pvVar22,uVar30,0,
                                          uVar20);
                              if (((ulonglong)local_c8.result & 1) == 0) goto LAB_140d9ee25;
                              uVar20 = (longlong)pvVar40 - local_c8.result_size;
                              lVar33 = 0;
                              if ((local_c8.result_size <= pvVar40 && uVar20 != 0) &&
                                 (lVar33 = lVar24, (void *)local_c8.result_size != pvVar25)) {
                                uVar12 = param_4->min_alignment;
                                if ((uVar12 | uVar20) >> 0x20 == 0) {
                                  uVar12 = (uVar20 & 0xffffffff) % (uVar12 & 0xffffffff);
                                }
                                else {
                                  uVar12 = uVar20 % uVar12;
                                }
                                uVar20 = uVar20 - uVar12;
                                uVar12 = param_4->type_size;
                                if ((uVar20 | uVar12) >> 0x20 == 0) {
                                  uVar12 = (uVar20 & 0xffffffff) % (uVar12 & 0xffffffff);
                                }
                                else {
                                  uVar12 = uVar20 % uVar12;
                                }
                                lVar33 = uVar20 - uVar12;
                              }
                            }
                          }
                          else {
                            uVar30 = param_4->type_size;
                            pvVar22 = (void *)((uVar30 - (longlong)pvVar27) + (longlong)pvVar25);
                            if (pvVar22 < pvVar40) goto LAB_140d9eda9;
LAB_140d9ee25:
                            lVar33 = 0;
                          }
                          lVar33 = lVar32 + param_2 + lVar33;
                          auVar46._8_4_ = (int)((ulonglong)lVar41 >> 0x20);
                          auVar46._0_8_ = lVar41;
                          auVar46._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
                          auVar47._8_4_ = (int)((ulonglong)lVar33 >> 0x20);
                          auVar47._0_8_ = lVar33;
                          auVar47._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
                          if (((auVar46._8_8_ - _UNK_1531e94a8) +
                              ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,
                                                (int)lVar41) -
                              ___xmm_45300000000000004330000000000000)) /
                              ((auVar47._8_8_ - _UNK_1531e94a8) +
                              ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,
                                                (int)lVar33) -
                              ___xmm_45300000000000004330000000000000)) <= __real_3ff4cccccccccccd)
                          goto LAB_140d9e7a6;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pvVar25 = (void *)((longlong)pvVar13 + param_2);
      if (local_c8.right_padding < pvVar25) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pvVar18 = pvVar13;
      pVar36 = local_c8.zero_mode;
      if (param_4->deallocator != (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0) {
        param_1->num_mapped_bytes = param_1->num_mapped_bytes + param_2;
        (*param_4->deallocator)(pvVar37,uVar29,param_4->deallocator_arg);
        (*param_4->deallocator)
                  (local_c8.right_padding,local_c8.right_padding_size,param_4->deallocator_arg);
        goto LAB_140d9e962;
      }
      param_1->num_mapped_bytes =
           local_c8.right_padding_size + param_1->num_mapped_bytes + uVar29 + param_2;
      uVar20 = param_4->type_size;
      if (uVar20 == 1) {
        if (CARRY8(uVar29,(ulonglong)pvVar37)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar29 == 0) {
          uVar20 = 1;
          uVar35 = param_2;
          goto joined_r0x000140d9e902;
        }
        if (pvVar37 == (void *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_c8.result = (void *)((ulonglong)pvVar37 & 0xffffffffffff);
        local_c8.result_size = uVar29 + (longlong)pvVar37 & 0xffffffffffff;
        local_c8.left_padding = (void *)0x0;
        local_c8.left_padding_size = CONCAT44(local_c8.left_padding_size._4_4_,local_c8.zero_mode);
        fast_merge((pas_generic_large_free_heap *)param_1,(pas_large_free *)&local_c8,param_4);
        uVar20 = param_4->type_size;
        if ((param_2 | uVar20) >> 0x20 == 0) goto LAB_140d9e8e0;
LAB_140d9e904:
        uVar20 = param_2 % uVar20;
      }
      else {
        if (uVar29 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar35 = param_2 | uVar20;
joined_r0x000140d9e902:
        if (uVar35 >> 0x20 != 0) goto LAB_140d9e904;
LAB_140d9e8e0:
        uVar20 = (param_2 & 0xffffffff) % (uVar20 & 0xffffffff);
      }
      if ((void *)((longlong)local_c8.right_padding + local_c8.right_padding_size) < pvVar25) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((void *)((longlong)local_c8.right_padding + local_c8.right_padding_size) != pvVar25) {
        if (pvVar25 == (void *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_c8.result = (void *)((ulonglong)pvVar25 & 0xffffffffffff);
        local_c8.result_size =
             (longlong)local_c8.right_padding + local_c8.right_padding_size & 0xffffffffffff;
        local_c8.left_padding = (void *)(uVar20 & 0xffffffffffff);
        local_c8.left_padding_size._4_4_ = (undefined4)(local_c8.left_padding_size >> 0x20);
        local_c8.left_padding_size = CONCAT44(local_c8.left_padding_size._4_4_,local_c8.zero_mode);
        fast_merge((pas_generic_large_free_heap *)param_1,(pas_large_free *)&local_c8,param_4);
      }
      goto LAB_140d9e962;
    }
    __return_storage_ptr__->did_succeed = false;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
  }
  __return_storage_ptr__->begin = 0;
  if ((local_80 ^ (ulonglong)auStackY_188) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  goto LAB_140d9e9bd;
LAB_140d9dddd:
  do {
    do {
      uVar16 = (uint)*(uint3 *)(ppVar17->tree_node).right.payload;
      ppVar31 = (pas_fast_large_free_heap_node *)
                (pas_compact_heap_reservation_base + (ulonglong)uVar16 * 8);
      if ((ppVar31 == (pas_fast_large_free_heap_node *)0x0 || uVar16 == 0) ||
         ((*(ulonglong *)&(ppVar31->free).end & 0xffffffffffff) -
          (*(ulonglong *)&ppVar31->free & 0xffffffffffff) < param_2)) {
        uVar4 = *(uint3 *)(ppVar17->tree_node).parent.payload;
        ppVar31 = ppVar17;
        while( true ) {
          if ((uVar4 == 0) ||
             (ppVar17 = (pas_fast_large_free_heap_node *)
                        (pas_compact_heap_reservation_base + (ulonglong)(uint)uVar4 * 8),
             ppVar17 == (pas_fast_large_free_heap_node *)0x0)) goto LAB_140d9d6bf;
          pvVar13 = *(void **)&ppVar17->free;
          uVar20 = *(ulonglong *)&(ppVar17->free).end;
          pvVar37 = (void *)(uVar20 & 0xffffffffffff);
          pvVar18 = (void *)((ulonglong)pvVar13 & 0xffffffffffff);
          uVar35 = (longlong)pvVar37 - (longlong)pvVar18;
          uVar16 = (uint)(uVar35 != param_2);
          if (uVar35 < param_2) {
            uVar16 = 0xffffffff;
          }
          if ((int)uVar16 < 0) goto LAB_140d9d6bf;
          uVar16 = (uint)*(uint3 *)(ppVar17->tree_node).right.payload;
          if ((uVar16 == 0) ||
             (ppVar31 !=
              (pas_fast_large_free_heap_node *)
              (pas_compact_heap_reservation_base + (ulonglong)uVar16 * 8))) break;
          uVar4 = *(uint3 *)(ppVar17->tree_node).parent.payload;
          ppVar31 = ppVar17;
        }
      }
      else {
        do {
          ppVar17 = ppVar31;
          uVar16 = (uint)*(uint3 *)(ppVar17->tree_node).left.payload;
          if ((uVar16 == 0) ||
             (ppVar31 = (pas_fast_large_free_heap_node *)
                        (pas_compact_heap_reservation_base + (ulonglong)uVar16 * 8),
             ppVar31 == (pas_fast_large_free_heap_node *)0x0)) break;
          uVar20 = (*(ulonglong *)&(ppVar31->free).end & 0xffffffffffff) -
                   (*(ulonglong *)&ppVar31->free & 0xffffffffffff);
          uVar16 = 0xffffffff;
          if (param_2 <= uVar20) {
            uVar16 = (uint)(uVar20 != param_2);
          }
        } while (-1 < (int)uVar16);
        pvVar13 = *(void **)&ppVar17->free;
        uVar20 = *(ulonglong *)&(ppVar17->free).end;
        pvVar18 = (void *)((ulonglong)pvVar13 & 0xffffffffffff);
        pvVar37 = (void *)(uVar20 & 0xffffffffffff);
        uVar35 = (longlong)pvVar37 - (longlong)pvVar18;
      }
    } while (uVar35 < param_2);
    pvVar27 = *(void **)&(ppVar17->free).offset_in_type;
    local_118 = *(ulonglong *)&(ppVar17->free).zero_mode;
    pvVar28 = (void *)((ulonglong)pvVar27 & 0xffffffffffff);
    if (pvVar28 == (void *)0x0) {
      if ((uVar1 & (longlong)pvVar18 - (longlong)pvVar2) != 0) {
        if (pvVar18 != pvVar37) {
          uVar29 = param_4->type_size;
          pvVar27 = pvVar18;
          goto LAB_140d9dfb0;
        }
        goto LAB_140d9dddd;
      }
      uVar12 = param_4->min_alignment - 1;
      if ((param_4->min_alignment ^ uVar12) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar12 & param_2) != 0) {
        uVar20 = uVar35;
        pvVar27 = pvVar18;
        if (pvVar18 != pvVar37) goto LAB_140d9e02a;
        goto LAB_140d9dddd;
      }
      uVar35 = param_4->type_size;
      if ((param_2 | uVar35) >> 0x20 == 0) {
        uVar35 = (param_2 & 0xffffffff) % (uVar35 & 0xffffffff);
      }
      else {
        uVar35 = param_2 % uVar35;
      }
      pvVar22 = (void *)((longlong)pvVar13 + param_2 & 0xffffffffffff);
      pvVar19 = (void *)(uVar35 & 0xffffffffffff);
      pvVar40 = (void *)(uVar20 & 0xffff000000000000 | (ulonglong)pvVar18);
      uVar20 = local_118;
    }
    else {
      if (pvVar18 == pvVar37) goto LAB_140d9dddd;
      uVar29 = param_4->type_size;
      pvVar27 = (void *)((uVar29 - (longlong)pvVar28) + (longlong)pvVar18);
      if (pvVar37 <= pvVar27) goto LAB_140d9dddd;
LAB_140d9dfb0:
      pas_coalign((pas_coalign_result *)&local_c8,(ulong64)pvVar27,uVar29,(ulong64)pvVar2,
                  (ulong64)pvVar25);
      if ((((ulonglong)local_c8.result & 1) == 0) ||
         (uVar20 = (longlong)pvVar37 - local_c8.result_size, pvVar27 = (void *)local_c8.result_size,
         pvVar37 < local_c8.result_size || (longlong)pvVar37 - local_c8.result_size == 0))
      goto LAB_140d9dddd;
LAB_140d9e02a:
      if (uVar20 < param_2) goto LAB_140d9dddd;
      uVar12 = (longlong)pvVar28 + ((longlong)pvVar27 - (longlong)pvVar18);
      uVar20 = param_4->type_size;
      if ((uVar12 | uVar20) >> 0x20 == 0) {
        uVar12 = (uVar12 & 0xffffffff) % (uVar20 & 0xffffffff);
      }
      else {
        uVar12 = uVar12 % uVar20;
      }
      pvVar40 = (void *)(((longlong)pvVar27 - (longlong)pvVar18) + (longlong)pvVar13 &
                        0xffffffffffff);
      uVar12 = (((longlong)pvVar27 + param_2) - (longlong)pvVar40) + (uVar12 & 0xffffffffffff);
      if ((uVar12 | uVar20) >> 0x20 == 0) {
        uVar12 = (uVar12 & 0xffffffff) % (uVar20 & 0xffffffff);
      }
      else {
        uVar12 = uVar12 % uVar20;
      }
      uVar21 = param_4->min_alignment;
      if ((uVar21 ^ uVar21 - 1) <= uVar21 - 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar41 = (longlong)pvVar40 - (longlong)pvVar18;
      if (lVar41 == 0) {
LAB_140d9e0ea:
        local_130 = 0;
      }
      else {
        if (pvVar28 != (void *)0x0) {
          pvVar13 = (void *)((uVar20 - (longlong)pvVar28) + (longlong)pvVar18);
          if (pvVar13 < pvVar40) goto LAB_140d9e217;
          goto LAB_140d9e0ea;
        }
        pvVar13 = pvVar18;
        local_130 = lVar41;
        if ((uVar21 + 0xffffffffffff & (ulonglong)pvVar18) != 0) {
LAB_140d9e217:
          pas_coalign((pas_coalign_result *)&local_c8,(ulong64)pvVar13,uVar20,0,uVar21);
          if (((ulonglong)local_c8.result & 1) == 0) {
            local_130 = 0;
          }
          else {
            local_130 = 0;
            uVar20 = (longlong)pvVar40 - local_c8.result_size;
            if ((local_c8.result_size <= pvVar40 && uVar20 != 0) &&
               (local_130 = lVar41, (void *)local_c8.result_size != pvVar18)) {
              uVar21 = param_4->min_alignment;
              if ((uVar21 | uVar20) >> 0x20 == 0) {
                uVar21 = (uVar20 & 0xffffffff) % (uVar21 & 0xffffffff);
              }
              else {
                uVar21 = uVar20 % uVar21;
              }
              uVar20 = uVar20 - uVar21;
              uVar21 = param_4->type_size;
              if ((uVar20 | uVar21) >> 0x20 == 0) {
                uVar21 = (uVar20 & 0xffffffff) % (uVar21 & 0xffffffff);
              }
              else {
                uVar21 = uVar20 % uVar21;
              }
              local_130 = uVar20 - uVar21;
            }
          }
        }
      }
      uVar20 = param_4->min_alignment;
      if ((uVar20 ^ uVar20 - 1) <= uVar20 - 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pvVar22 = (void *)((longlong)pvVar27 + param_2 & 0xffffffffffff);
      pvVar19 = (void *)(uVar12 & 0xffffffffffff);
      lVar41 = (longlong)pvVar37 - (longlong)pvVar22;
      if (lVar41 == 0) {
        lVar24 = 0;
      }
      else if (pvVar19 == (void *)0x0) {
        lVar24 = lVar41;
        if ((uVar20 + 0xffffffffffff & (ulonglong)pvVar22) != 0) {
          uVar29 = param_4->type_size;
          pvVar13 = pvVar22;
LAB_140d9e2ce:
          pas_coalign((pas_coalign_result *)&local_c8,(ulong64)pvVar13,uVar29,0,uVar20);
          if (((ulonglong)local_c8.result & 1) == 0) goto LAB_140d9e353;
          uVar20 = (longlong)pvVar37 - local_c8.result_size;
          lVar24 = 0;
          if ((local_c8.result_size <= pvVar37 && uVar20 != 0) &&
             (lVar24 = lVar41, (void *)local_c8.result_size != pvVar22)) {
            uVar12 = param_4->min_alignment;
            if ((uVar12 | uVar20) >> 0x20 == 0) {
              uVar12 = (uVar20 & 0xffffffff) % (uVar12 & 0xffffffff);
            }
            else {
              uVar12 = uVar20 % uVar12;
            }
            uVar20 = uVar20 - uVar12;
            uVar12 = param_4->type_size;
            if ((uVar20 | uVar12) >> 0x20 == 0) {
              uVar12 = (uVar20 & 0xffffffff) % (uVar12 & 0xffffffff);
            }
            else {
              uVar12 = uVar20 % uVar12;
            }
            lVar24 = uVar20 - uVar12;
          }
        }
      }
      else {
        uVar29 = param_4->type_size;
        pvVar13 = (void *)((uVar29 - (longlong)pvVar19) + (longlong)pvVar22);
        if (pvVar13 < pvVar37) goto LAB_140d9e2ce;
LAB_140d9e353:
        lVar24 = 0;
      }
      lVar24 = local_130 + param_2 + lVar24;
      auVar44._8_4_ = (int)(uVar35 >> 0x20);
      auVar44._0_8_ = uVar35;
      auVar44._12_4_ = uVar7;
      auVar45._8_4_ = (int)((ulonglong)lVar24 >> 0x20);
      auVar45._0_8_ = lVar24;
      auVar45._12_4_ = uVar7;
      if (dVar9 < ((auVar44._8_8_ - dVar5) + ((double)CONCAT44(uVar8,(int)uVar35) - dVar6)) /
                  ((auVar45._8_8_ - dVar5) + ((double)CONCAT44(uVar8,(int)lVar24) - dVar6)))
      goto LAB_140d9dddd;
      uVar20 = local_118 & 0xff;
      pvVar27 = pvVar28;
      pvVar13 = pvVar18;
      pvVar18 = pvVar40;
    }
  } while (pvVar22 == pvVar18);
  if (pvVar18 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_140d9e41f:
  ppVar14 = (pas_aligned_allocation_result *)&local_c8.right_padding;
  if (pvVar22 == pvVar18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((longlong)pvVar22 - (longlong)pvVar18 != param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((((ulonglong)pvVar40 ^ (ulonglong)pvVar13) & 0xffffffffffff) == 0) {
    if (pvVar22 != pvVar37) {
      ppVar14 = &local_c8;
      goto LAB_140d9e557;
    }
    remove_node(param_1,ppVar17);
  }
  else {
    local_c8.result = pvVar13;
    local_c8.result_size = (ulong64)pvVar40;
    local_c8.left_padding = pvVar27;
    local_c8.left_padding_size = uVar20;
    if (pvVar22 == pvVar37) {
      local_e8._0_8_ = pvVar13;
      local_e8._8_8_ = pvVar40;
      local_e8._16_8_ = pvVar27;
      local_e8._24_8_ = uVar20;
      fast_write_cursor((pas_generic_large_free_heap *)param_1,
                        (pas_generic_large_free_cursor *)ppVar17,&local_e8);
    }
    else {
LAB_140d9e557:
      ppVar14->result = pvVar22;
      ppVar14->result_size = (ulong64)pvVar37;
      ppVar14->left_padding = pvVar19;
      *(uint *)&ppVar14->left_padding_size = (uint)(byte)local_118;
      local_e8._16_8_ = local_c8.left_padding;
      local_e8._24_8_ = local_c8.left_padding_size;
      local_e8._0_8_ = local_c8.result;
      local_e8._8_8_ = local_c8.result_size;
      fast_write_cursor((pas_generic_large_free_heap *)param_1,
                        (pas_generic_large_free_cursor *)ppVar17,&local_e8);
      if ((((ulonglong)pvVar40 ^ (ulonglong)pvVar13) & 0xffffffffffff) != 0) {
        local_e8._16_8_ = CONCAT44(local_c8._52_4_,local_c8.zero_mode);
        local_e8._24_8_ = uStack_90;
        local_e8._0_8_ = local_c8.right_padding;
        local_e8._8_8_ = local_c8.right_padding_size;
        insert_node(param_1,&local_e8);
      }
    }
  }
  pVar36 = (pas_zero_mode)(char)(byte)local_118;
LAB_140d9e962:
  if ((uVar1 & (longlong)pvVar18 - (longlong)pvVar2) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __return_storage_ptr__->begin = (ulong64)pvVar18;
  __return_storage_ptr__->did_succeed = true;
  *(undefined2 *)&__return_storage_ptr__->field_0x9 = local_c8.result._0_2_;
  __return_storage_ptr__->field_0xb = local_c8.result._2_1_;
  __return_storage_ptr__->zero_mode = pVar36;
  if ((local_80 ^ (ulonglong)auStackY_188) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
LAB_140d9e9bd:
  pcVar3 = (code *)swi(3);
  ppVar15 = (pas_allocation_result *)(*pcVar3)();
  return ppVar15;
}

// pas_fast_large_free_heap_deallocate @ 140d9ef90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_fast_large_free_heap_deallocate
          (pas_fast_large_free_heap *param_1,ulong64 param_2,ulong64 param_3,pas_zero_mode param_4,
          pas_large_free_heap_config *param_5)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  pas_large_free local_28;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 != param_2) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (pas_zero_mode_is_all_zero < param_4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_28._0_8_ = param_2 & 0xffffffffffff;
    local_28._8_8_ = param_3 & 0xffffffffffff;
    local_28.offset_in_type = 0;
    local_28._22_2_ = 0;
    local_28._24_4_ = param_4;
    fast_merge((pas_generic_large_free_heap *)param_1,&local_28,param_5);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_fast_large_free_heap_for_each_free @ 140d9f020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_fast_large_free_heap_for_each_free
          (pas_fast_large_free_heap *param_1,_func___cdecl_bool_pas_large_free_void_ptr *param_2,
          void *param_3)

{
  uint3 *puVar1;
  code *pcVar2;
  uint3 uVar3;
  bool bVar4;
  uint3 *puVar5;
  undefined1 auStack_78 [32];
  pas_large_free local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar3 = *(uint3 *)(param_1->tree).minimum.payload;
  puVar5 = (uint3 *)((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base);
  if (puVar5 != (uint3 *)0x0 && uVar3 != 0) {
    local_58.begin._0_4_ = *(undefined4 *)(puVar5 + 4);
    local_58._4_4_ = *(undefined4 *)(puVar5 + 5);
    local_58.end._0_4_ = *(undefined4 *)(puVar5 + 6);
    local_58._12_4_ = *(undefined4 *)(puVar5 + 7);
    local_58.offset_in_type._0_4_ = *(undefined4 *)(puVar5 + 8);
    local_58._20_4_ = *(undefined4 *)(puVar5 + 9);
    local_58._24_4_ = *(undefined4 *)(puVar5 + 10);
    local_58._28_4_ = *(undefined4 *)(puVar5 + 0xb);
    bVar4 = (*param_2)(&local_58,param_3);
    if (bVar4) {
      do {
        puVar1 = (uint3 *)(pas_compact_heap_reservation_base +
                          (ulonglong)(uint)*(uint3 *)((longlong)puVar5 + 6) * 8);
        if (puVar1 == (uint3 *)0x0 || *(uint3 *)((longlong)puVar5 + 6) == 0) {
          uVar3 = *puVar5;
          puVar1 = puVar5;
          while( true ) {
            if ((uVar3 == 0) ||
               (puVar5 = (uint3 *)(pas_compact_heap_reservation_base + (ulonglong)(uint)uVar3 * 8),
               puVar5 == (uint3 *)0x0)) goto LAB_140d9f186;
            if ((*(uint3 *)((longlong)puVar5 + 6) == 0) ||
               (puVar1 != (uint3 *)(pas_compact_heap_reservation_base +
                                   (ulonglong)(uint)*(uint3 *)((longlong)puVar5 + 6) * 8))) break;
            uVar3 = *puVar5;
            puVar1 = puVar5;
          }
        }
        else {
          do {
            puVar5 = puVar1;
            if (*(uint3 *)((longlong)puVar5 + 3) == 0) break;
            puVar1 = (uint3 *)(pas_compact_heap_reservation_base +
                              (ulonglong)(uint)*(uint3 *)((longlong)puVar5 + 3) * 8);
          } while (puVar1 != (uint3 *)0x0);
        }
        local_58.begin._0_4_ = *(undefined4 *)(puVar5 + 4);
        local_58._4_4_ = *(undefined4 *)(puVar5 + 5);
        local_58.end._0_4_ = *(undefined4 *)(puVar5 + 6);
        local_58._12_4_ = *(undefined4 *)(puVar5 + 7);
        local_58.offset_in_type._0_4_ = *(undefined4 *)(puVar5 + 8);
        local_58._20_4_ = *(undefined4 *)(puVar5 + 9);
        local_58._24_4_ = *(undefined4 *)(puVar5 + 10);
        local_58._28_4_ = *(undefined4 *)(puVar5 + 0xb);
        bVar4 = (*param_2)(&local_58,param_3);
      } while (bVar4);
    }
  }
LAB_140d9f186:
  if ((local_30 ^ (ulonglong)auStack_78) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// pas_fast_large_free_heap_get_num_free_bytes @ 140d9f1b0

/* WARNING: Type propagation algorithm not settling */

ulong64 __cdecl pas_fast_large_free_heap_get_num_free_bytes(pas_fast_large_free_heap *param_1)

{
  uint3 uVar1;
  ulong64 uVar2;
  uint uVar3;
  uint3 *puVar4;
  uint3 *puVar5;
  
  uVar3 = (uint)*(uint3 *)(param_1->tree).minimum.payload;
  puVar4 = (uint3 *)(pas_compact_heap_reservation_base + (ulonglong)uVar3 * 8);
  if (puVar4 == (uint3 *)0x0 || uVar3 == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    while( true ) {
      uVar2 = (uVar2 - (*(ulonglong *)(puVar4 + 4) & 0xffffffffffff)) +
              (*(ulonglong *)(puVar4 + 6) & 0xffffffffffff);
      puVar5 = (uint3 *)((ulonglong)*(uint3 *)((longlong)puVar4 + 6) * 8 +
                        pas_compact_heap_reservation_base);
      if (puVar5 != (uint3 *)0x0 && *(uint3 *)((longlong)puVar4 + 6) != 0) break;
      uVar1 = *puVar4;
      puVar5 = puVar4;
      while( true ) {
        if (uVar1 == 0) {
          return uVar2;
        }
        puVar4 = (uint3 *)(pas_compact_heap_reservation_base + (ulonglong)(uint)uVar1 * 8);
        if (puVar4 == (uint3 *)0x0) {
          return uVar2;
        }
        if ((*(uint3 *)((longlong)puVar4 + 6) == 0) ||
           (puVar5 != (uint3 *)(pas_compact_heap_reservation_base +
                               (ulonglong)(uint)*(uint3 *)((longlong)puVar4 + 6) * 8))) break;
        uVar1 = *puVar4;
        puVar5 = puVar4;
      }
    }
    do {
      puVar4 = puVar5;
      puVar5 = (uint3 *)(pas_compact_heap_reservation_base +
                        (ulonglong)(uint)*(uint3 *)((longlong)puVar4 + 3) * 8);
      if (*(uint3 *)((longlong)puVar4 + 3) == 0) break;
    } while (puVar5 != (uint3 *)0x0);
  } while( true );
}

// pas_fast_large_free_heap_validate @ 140d9f2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_fast_large_free_heap_validate(pas_fast_large_free_heap *param_1)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  pas_cartesian_tree_node *ppVar4;
  pas_cartesian_tree_node *ppVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  pas_cartesian_tree_config local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.get_x_key = get_x_key_callback;
  local_38.get_y_key = get_y_key_callback;
  local_38.x_compare = key_compare_callback;
  local_38.y_compare = key_compare_callback;
  uVar3 = (uint)*(uint3 *)(param_1->tree).root.payload;
  ppVar4 = (pas_cartesian_tree_node *)(pas_compact_heap_reservation_base + (ulonglong)uVar3 * 8);
  if (ppVar4 == (pas_cartesian_tree_node *)0x0 || uVar3 == 0) {
    uVar2 = *(uint3 *)(param_1->tree).minimum.payload;
    if ((uVar2 != 0) && (pas_compact_heap_reservation_base != (ulonglong)uVar2 * -8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    uVar2 = *(uint3 *)(ppVar4->parent).payload;
    if ((uVar2 != 0) && (pas_compact_heap_reservation_base != (ulonglong)uVar2 * -8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pas_cartesian_tree_validate_recurse
              (ppVar4,&local_38,(pas_cartesian_tree_node *)0x0,(pas_cartesian_tree_node *)0x0);
    uVar3 = (uint)*(uint3 *)(param_1->tree).minimum.payload;
    do {
      ppVar5 = ppVar4;
      uVar6 = (uint)*(uint3 *)(ppVar5->left).payload;
      if (uVar6 == 0) break;
      ppVar4 = (pas_cartesian_tree_node *)(pas_compact_heap_reservation_base + (ulonglong)uVar6 * 8)
      ;
    } while (ppVar4 != (pas_cartesian_tree_node *)0x0);
    ppVar4 = (pas_cartesian_tree_node *)(pas_compact_heap_reservation_base + (ulonglong)uVar3 * 8);
    if (uVar3 == 0) {
      ppVar4 = (pas_cartesian_tree_node *)0x0;
    }
    if (ppVar4 != ppVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_fast_large_free_heap_dump_to_printf @ 140d9f420

/* WARNING: Type propagation algorithm not settling */

void __cdecl pas_fast_large_free_heap_dump_to_printf(pas_fast_large_free_heap *param_1)

{
  uint3 *puVar1;
  uint3 uVar2;
  uint3 *puVar3;
  
  printf("Fast free list:");
  uVar2 = *(uint3 *)(param_1->tree).minimum.payload;
  puVar3 = (uint3 *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
  if (puVar3 == (uint3 *)0x0 || uVar2 == 0) {
LAB_140d9f469:
    putchar(10);
    return;
  }
LAB_140d9f48b:
  do {
    printf(" [%p, %p)");
    puVar1 = (uint3 *)(pas_compact_heap_reservation_base +
                      (ulonglong)(uint)*(uint3 *)((longlong)puVar3 + 6) * 8);
    if (puVar1 == (uint3 *)0x0 || *(uint3 *)((longlong)puVar3 + 6) == 0) {
      uVar2 = *puVar3;
      puVar1 = puVar3;
      while( true ) {
        if ((uVar2 == 0) ||
           (puVar3 = (uint3 *)(pas_compact_heap_reservation_base + (ulonglong)(uint)uVar2 * 8),
           puVar3 == (uint3 *)0x0)) goto LAB_140d9f469;
        if ((*(uint3 *)((longlong)puVar3 + 6) == 0) ||
           (puVar1 != (uint3 *)(pas_compact_heap_reservation_base +
                               (ulonglong)(uint)*(uint3 *)((longlong)puVar3 + 6) * 8))) break;
        uVar2 = *puVar3;
        puVar1 = puVar3;
      }
      goto LAB_140d9f48b;
    }
    do {
      puVar3 = puVar1;
      puVar1 = (uint3 *)(pas_compact_heap_reservation_base +
                        (ulonglong)(uint)*(uint3 *)((longlong)puVar3 + 3) * 8);
      if (*(uint3 *)((longlong)puVar3 + 3) == 0) break;
    } while (puVar1 != (uint3 *)0x0);
  } while( true );
}

// dump_heap @ 140d9f430

/* WARNING: Type propagation algorithm not settling */

void __cdecl dump_heap(pas_fast_large_free_heap *param_1)

{
  uint3 *puVar1;
  uint3 uVar2;
  uint3 *puVar3;
  
  printf("Fast free list:");
  uVar2 = *(uint3 *)(param_1->tree).minimum.payload;
  puVar3 = (uint3 *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
  if (puVar3 == (uint3 *)0x0 || uVar2 == 0) {
LAB_140d9f469:
    putchar(10);
    return;
  }
LAB_140d9f48b:
  do {
    printf(" [%p, %p)");
    puVar1 = (uint3 *)(pas_compact_heap_reservation_base +
                      (ulonglong)(uint)*(uint3 *)((longlong)puVar3 + 6) * 8);
    if (puVar1 == (uint3 *)0x0 || *(uint3 *)((longlong)puVar3 + 6) == 0) {
      uVar2 = *puVar3;
      puVar1 = puVar3;
      while( true ) {
        if ((uVar2 == 0) ||
           (puVar3 = (uint3 *)(pas_compact_heap_reservation_base + (ulonglong)(uint)uVar2 * 8),
           puVar3 == (uint3 *)0x0)) goto LAB_140d9f469;
        if ((*(uint3 *)((longlong)puVar3 + 6) == 0) ||
           (puVar1 != (uint3 *)(pas_compact_heap_reservation_base +
                               (ulonglong)(uint)*(uint3 *)((longlong)puVar3 + 6) * 8))) break;
        uVar2 = *puVar3;
        puVar1 = puVar3;
      }
      goto LAB_140d9f48b;
    }
    do {
      puVar3 = puVar1;
      puVar1 = (uint3 *)(pas_compact_heap_reservation_base +
                        (ulonglong)(uint)*(uint3 *)((longlong)puVar3 + 3) * 8);
      if (*(uint3 *)((longlong)puVar3 + 3) == 0) break;
    } while (puVar1 != (uint3 *)0x0);
  } while( true );
}

// fast_write_cursor @ 140d9f580

void __cdecl
fast_write_cursor(pas_generic_large_free_heap *param_1,pas_generic_large_free_cursor *param_2,
                 pas_large_free *param_3)

{
  longlong lVar1;
  code *pcVar2;
  uint3 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  pas_generic_large_free_cursor *ppVar8;
  ulonglong uVar9;
  uint uVar10;
  pas_generic_large_free_heap *ppVar11;
  pas_generic_large_free_heap *ppVar12;
  undefined4 uVar13;
  pas_generic_large_free_heap *ppVar14;
  pas_generic_large_free_cursor *ppVar15;
  pas_generic_large_free_heap pVar16;
  pas_generic_large_free_cursor *ppVar17;
  pas_generic_large_free_heap *ppVar18;
  longlong lVar19;
  pas_generic_large_free_cursor *ppVar20;
  pas_generic_large_free_cursor *ppVar21;
  uint uVar22;
  ulonglong uVar23;
  pas_generic_large_free_heap *ppVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  ulong64 uVar29;
  pas_generic_large_free_heap *ppVar30;
  uint uVar31;
  ulonglong uVar32;
  bool bVar33;
  pas_generic_large_free_cursor *local_50;
  
  uVar26 = *(ulonglong *)param_3 & 0xffffffffffff;
  uVar23 = *(ulonglong *)(param_2 + 0x10) & 0xffffffffffff;
  if (uVar26 == uVar23) {
LAB_140d9f5b2:
    bVar33 = false;
  }
  else if (uVar26 < uVar23) {
    ppVar8 = (pas_generic_large_free_cursor *)
             ((ulonglong)*(uint3 *)(param_2 + 3) * 8 + pas_compact_heap_reservation_base);
    if (ppVar8 == (pas_generic_large_free_cursor *)0x0 || *(uint3 *)(param_2 + 3) == 0) {
      ppVar20 = (pas_generic_large_free_cursor *)
                ((ulonglong)*(uint3 *)param_2 * 8 + pas_compact_heap_reservation_base);
      ppVar8 = param_2;
      if (ppVar20 == (pas_generic_large_free_cursor *)0x0 || *(uint3 *)param_2 == 0)
      goto LAB_140d9f5b2;
      do {
        if ((*(uint3 *)(ppVar20 + 3) == 0) ||
           (ppVar8 != (pas_generic_large_free_cursor *)
                      (pas_compact_heap_reservation_base +
                      (ulonglong)(uint)*(uint3 *)(ppVar20 + 3) * 8))) goto LAB_140d9f68d;
        bVar33 = false;
      } while ((*(uint3 *)ppVar20 != 0) &&
              (ppVar15 = (pas_generic_large_free_cursor *)
                         (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)ppVar20 * 8
                         ), ppVar8 = ppVar20, ppVar20 = ppVar15,
              ppVar15 != (pas_generic_large_free_cursor *)0x0));
    }
    else {
      do {
        ppVar20 = ppVar8;
        if (*(uint3 *)(ppVar20 + 6) == 0) break;
        ppVar8 = (pas_generic_large_free_cursor *)
                 (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(ppVar20 + 6) * 8);
      } while (ppVar8 != (pas_generic_large_free_cursor *)0x0);
LAB_140d9f68d:
      bVar33 = uVar26 <= (*(ulonglong *)(ppVar20 + 0x10) & 0xffffffffffff);
    }
  }
  else {
    ppVar8 = (pas_generic_large_free_cursor *)
             ((ulonglong)*(uint3 *)(param_2 + 6) * 8 + pas_compact_heap_reservation_base);
    if (ppVar8 == (pas_generic_large_free_cursor *)0x0 || *(uint3 *)(param_2 + 6) == 0) {
      ppVar20 = (pas_generic_large_free_cursor *)
                ((ulonglong)*(uint3 *)param_2 * 8 + pas_compact_heap_reservation_base);
      ppVar8 = param_2;
      if (ppVar20 == (pas_generic_large_free_cursor *)0x0 || *(uint3 *)param_2 == 0)
      goto LAB_140d9f5b2;
      do {
        if ((*(uint3 *)(ppVar20 + 6) == 0) ||
           (ppVar8 != (pas_generic_large_free_cursor *)
                      (pas_compact_heap_reservation_base +
                      (ulonglong)(uint)*(uint3 *)(ppVar20 + 6) * 8))) goto LAB_140d9f75d;
        bVar33 = false;
      } while ((*(uint3 *)ppVar20 != 0) &&
              (ppVar15 = (pas_generic_large_free_cursor *)
                         (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)ppVar20 * 8
                         ), ppVar8 = ppVar20, ppVar20 = ppVar15,
              ppVar15 != (pas_generic_large_free_cursor *)0x0));
    }
    else {
      do {
        ppVar20 = ppVar8;
        if (*(uint3 *)(ppVar20 + 3) == 0) break;
        ppVar8 = (pas_generic_large_free_cursor *)
                 (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(ppVar20 + 3) * 8);
      } while (ppVar8 != (pas_generic_large_free_cursor *)0x0);
LAB_140d9f75d:
      bVar33 = (*(ulonglong *)(ppVar20 + 0x10) & 0xffffffffffff) <= uVar26;
    }
  }
  uVar26 = (*(ulonglong *)&param_3->end & 0xffffffffffff) - uVar26;
  uVar23 = (*(ulonglong *)(param_2 + 0x18) & 0xffffffffffff) - uVar23;
  if (uVar26 == uVar23) {
joined_r0x000140d9f889:
    if (!bVar33) {
LAB_140d9f86e:
      uVar4 = *(undefined8 *)param_3;
      uVar5 = *(undefined8 *)&param_3->end;
      uVar6 = *(undefined8 *)&param_3->zero_mode;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)&param_3->offset_in_type;
      *(undefined8 *)(param_2 + 0x28) = uVar6;
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      return;
    }
  }
  else if (uVar26 < uVar23) {
    lVar27 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)param_2 * 8;
    if (lVar27 == 0 || *(uint3 *)param_2 == 0) goto joined_r0x000140d9f889;
    if (!bVar33 &&
        (*(ulonglong *)(lVar27 + 0x18) & 0xffffffffffff) -
        (*(ulonglong *)(lVar27 + 0x10) & 0xffffffffffff) <= uVar26) goto LAB_140d9f86e;
  }
  else {
    lVar27 = 0;
    if (*(uint3 *)(param_2 + 6) != 0) {
      lVar27 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(param_2 + 6) * 8;
    }
    lVar1 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(param_2 + 3) * 8;
    if ((lVar1 == 0 || *(uint3 *)(param_2 + 3) == 0) ||
       (uVar26 <= (*(ulonglong *)(lVar1 + 0x18) & 0xffffffffffff) -
                  (*(ulonglong *)(lVar1 + 0x10) & 0xffffffffffff))) {
      if (lVar27 == 0) goto joined_r0x000140d9f889;
      if (!bVar33 &&
          uVar26 <= (*(ulonglong *)(lVar27 + 0x18) & 0xffffffffffff) -
                    (*(ulonglong *)(lVar27 + 0x10) & 0xffffffffffff)) goto LAB_140d9f86e;
    }
  }
  ppVar8 = (pas_generic_large_free_cursor *)0x0;
  if (*(uint3 *)(param_1 + 3) != 0) {
    ppVar8 = (pas_generic_large_free_cursor *)
             (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(param_1 + 3) * 8);
  }
  if (ppVar8 == param_2) {
    if ((*(uint3 *)(param_2 + 6) == 0) ||
       (ppVar8 = (pas_generic_large_free_cursor *)
                 (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(param_2 + 6) * 8),
       ppVar8 == (pas_generic_large_free_cursor *)0x0)) {
      uVar13 = 0;
      if ((*(uint3 *)param_2 != 0) &&
         (ppVar20 = (pas_generic_large_free_cursor *)
                    (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)param_2 * 8),
         ppVar20 != (pas_generic_large_free_cursor *)0x0)) {
        uVar13 = 0;
        ppVar8 = param_2;
        do {
          if ((*(uint3 *)(ppVar20 + 6) == 0) ||
             (ppVar8 != (pas_generic_large_free_cursor *)
                        (pas_compact_heap_reservation_base +
                        (ulonglong)(uint)*(uint3 *)(ppVar20 + 6) * 8))) goto LAB_140d9f8ed;
        } while ((*(uint3 *)ppVar20 != 0) &&
                (ppVar15 = (pas_generic_large_free_cursor *)
                           (pas_compact_heap_reservation_base +
                           (ulonglong)(uint)*(uint3 *)ppVar20 * 8), ppVar8 = ppVar20,
                ppVar20 = ppVar15, ppVar15 != (pas_generic_large_free_cursor *)0x0));
      }
    }
    else {
      do {
        ppVar20 = ppVar8;
        if (*(uint3 *)(ppVar20 + 3) == 0) break;
        ppVar8 = (pas_generic_large_free_cursor *)
                 (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(ppVar20 + 3) * 8);
      } while (ppVar8 != (pas_generic_large_free_cursor *)0x0);
LAB_140d9f8ed:
      uVar23 = (longlong)ppVar20 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar23 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar13 = (undefined4)(uVar23 >> 3);
    }
    param_1[3] = SUB41(uVar13,0);
    param_1[4] = SUB41((uint)uVar13 >> 8,0);
    param_1[5] = SUB41((uint)uVar13 >> 0x10,0);
  }
  ppVar12 = (pas_generic_large_free_heap *)0x0;
  ppVar14 = (pas_generic_large_free_heap *)
            (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)param_2 * 8);
  if (*(uint3 *)param_2 == 0) {
    ppVar14 = ppVar12;
  }
  ppVar24 = (pas_generic_large_free_heap *)
            (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(param_2 + 3) * 8);
  ppVar11 = ppVar24;
  if (*(uint3 *)(param_2 + 3) == 0) {
    ppVar11 = ppVar12;
  }
  ppVar18 = (pas_generic_large_free_heap *)
            (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(param_2 + 6) * 8);
  if (*(uint3 *)(param_2 + 6) != 0) {
    ppVar12 = ppVar18;
  }
  ppVar30 = param_1;
  if (ppVar14 != (pas_generic_large_free_heap *)0x0) {
    ppVar8 = (pas_generic_large_free_cursor *)0x0;
    if (*(uint3 *)(ppVar14 + 3) != 0) {
      ppVar8 = (pas_generic_large_free_cursor *)
               (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(ppVar14 + 3) * 8);
    }
    ppVar30 = ppVar14 + 6;
    if (ppVar8 == param_2) {
      ppVar30 = ppVar14 + 3;
    }
  }
  if (ppVar11 == (pas_generic_large_free_heap *)0x0) {
    if (ppVar12 == (pas_generic_large_free_heap *)0x0) {
      *(undefined2 *)ppVar30 = 0;
      pVar16 = (pas_generic_large_free_heap)0x0;
    }
    else {
      uVar23 = (longlong)ppVar12 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar23 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *ppVar30 = SUB81(uVar23 >> 3,0);
      ppVar30[1] = SUB81(uVar23 >> 0xb,0);
      ppVar30[2] = SUB41((uint)uVar23 >> 0x13,0);
      if (ppVar14 == (pas_generic_large_free_heap *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar23 = (longlong)ppVar14 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar23 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar13 = (undefined4)(uVar23 >> 3);
      }
      *(short *)ppVar12 = (short)uVar13;
      pVar16 = SUB41((uint)uVar13 >> 0x10,0);
      ppVar30 = ppVar18;
    }
  }
  else if (ppVar12 == (pas_generic_large_free_heap *)0x0) {
    uVar23 = (longlong)ppVar11 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar23 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *ppVar30 = SUB81(uVar23 >> 3,0);
    ppVar30[1] = SUB81(uVar23 >> 0xb,0);
    ppVar30[2] = SUB41((uint)uVar23 >> 0x13,0);
    if (ppVar14 == (pas_generic_large_free_heap *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar23 = (longlong)ppVar14 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar23 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar13 = (undefined4)(uVar23 >> 3);
    }
    *(short *)ppVar11 = (short)uVar13;
    pVar16 = SUB41((uint)uVar13 >> 0x10,0);
    ppVar30 = ppVar24;
  }
  else {
    uVar26 = (*(ulonglong *)(ppVar11 + 0x18) & 0xffffffffffff) -
             (*(ulonglong *)(ppVar11 + 0x10) & 0xffffffffffff);
    uVar32 = (*(ulonglong *)(ppVar12 + 0x18) & 0xffffffffffff) -
             (*(ulonglong *)(ppVar12 + 0x10) & 0xffffffffffff);
    uVar23 = uVar32;
    ppVar24 = ppVar12;
    if (uVar26 < uVar32) {
      uVar23 = uVar26;
      ppVar24 = ppVar11;
      ppVar11 = ppVar12;
    }
    uVar9 = (longlong)ppVar11 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar9 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *ppVar30 = SUB81(uVar9 >> 3,0);
    ppVar30[1] = SUB81(uVar9 >> 0xb,0);
    ppVar30[2] = SUB41((uint)uVar9 >> 0x13,0);
    if (ppVar14 == (pas_generic_large_free_heap *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar9 = (longlong)ppVar14 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar9 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar13 = (undefined4)(uVar9 >> 3);
    }
    *ppVar11 = SUB41(uVar13,0);
    ppVar11[1] = SUB41((uint)uVar13 >> 8,0);
    ppVar11[2] = SUB41((uint)uVar13 >> 0x10,0);
    lVar27 = (ulonglong)(uVar32 <= uVar26) * 3;
    ppVar12 = ppVar11 + lVar27 + 3;
    ppVar14 = (pas_generic_large_free_heap *)
              (pas_compact_heap_reservation_base +
              (ulonglong)(uint)CONCAT12(ppVar11[lVar27 + 5],*(undefined2 *)(ppVar11 + lVar27 + 3)) *
              8);
    uVar29 = pas_compact_heap_reservation_base;
    if (ppVar14 == (pas_generic_large_free_heap *)0x0 ||
        CONCAT12(ppVar11[lVar27 + 5],*(undefined2 *)(ppVar11 + lVar27 + 3)) == 0) {
LAB_140d9fc38:
      uVar23 = (longlong)ppVar24 - uVar29;
      if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar23 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar13 = (undefined4)(uVar23 >> 3);
    }
    else {
      lVar27 = (ulonglong)(uVar32 <= uVar26) * 3;
      lVar28 = lVar27 + 3;
      lVar1 = (ulonglong)(uVar26 < uVar32) * 3;
      lVar19 = lVar1 + 3;
      ppVar18 = ppVar11;
      do {
        ppVar11 = ppVar14;
        uVar26 = (*(ulonglong *)(ppVar11 + 0x18) & 0xffffffffffff) -
                 (*(ulonglong *)(ppVar11 + 0x10) & 0xffffffffffff);
        if (uVar26 < uVar23) {
          if (ppVar24 == (pas_generic_large_free_heap *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar23 = (longlong)ppVar24 - uVar29;
            if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar23 < 8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar13 = (undefined4)(uVar23 >> 3);
          }
          *ppVar12 = SUB41(uVar13,0);
          ppVar12[1] = SUB41((uint)uVar13 >> 8,0);
          ppVar12[2] = SUB41((uint)uVar13 >> 0x10,0);
          uVar23 = (longlong)ppVar18 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (uVar23 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          *ppVar24 = SUB81(uVar23 >> 3,0);
          ppVar24[1] = SUB81(uVar23 >> 0xb,0);
          ppVar24[2] = SUB41((uint)uVar23 >> 0x13,0);
          do {
            ppVar14 = ppVar24;
            if ((CONCAT12(ppVar14[lVar1 + 5],*(undefined2 *)(ppVar14 + lVar19)) == 0) ||
               (ppVar24 = (pas_generic_large_free_heap *)
                          (pas_compact_heap_reservation_base +
                          (ulonglong)
                          (uint)CONCAT12(ppVar14[lVar1 + 5],*(undefined2 *)(ppVar14 + lVar19)) * 8),
               ppVar24 == (pas_generic_large_free_heap *)0x0)) {
              uVar23 = (longlong)ppVar11 - pas_compact_heap_reservation_base;
              if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (uVar23 < 8) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              ppVar14[lVar19] = SUB81(uVar23 >> 3,0);
              ppVar14[lVar1 + 4] = SUB81(uVar23 >> 0xb,0);
              ppVar14[lVar1 + 5] = SUB41((uint)uVar23 >> 0x13,0);
              uVar23 = (longlong)ppVar14 - pas_compact_heap_reservation_base;
              if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (uVar23 < 8) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              *ppVar11 = SUB81(uVar23 >> 3,0);
              ppVar11[1] = SUB81(uVar23 >> 0xb,0);
              pVar16 = SUB41((uint)uVar23 >> 0x13,0);
              ppVar30 = ppVar11;
              goto LAB_140d9ff40;
            }
            uVar23 = (*(ulonglong *)(ppVar24 + 0x18) & 0xffffffffffff) -
                     (*(ulonglong *)(ppVar24 + 0x10) & 0xffffffffffff);
          } while (uVar26 <= uVar23);
          uVar26 = (longlong)ppVar11 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar26) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((uVar26 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (uVar26 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          ppVar14[lVar19] = SUB81(uVar26 >> 3,0);
          ppVar14[lVar1 + 4] = SUB81(uVar26 >> 0xb,0);
          ppVar14[lVar1 + 5] = SUB41((uint)uVar26 >> 0x13,0);
          uVar26 = (longlong)ppVar14 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar26) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((uVar26 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (uVar26 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          *ppVar11 = SUB81(uVar26 >> 3,0);
          ppVar11[1] = SUB81(uVar26 >> 0xb,0);
          ppVar11[2] = SUB41((uint)uVar26 >> 0x13,0);
          uVar29 = pas_compact_heap_reservation_base;
        }
        ppVar12 = ppVar11 + lVar28;
      } while ((CONCAT12(ppVar11[lVar27 + 5],*(undefined2 *)(ppVar11 + lVar28)) != 0) &&
              (ppVar14 = (pas_generic_large_free_heap *)
                         (uVar29 + (ulonglong)
                                   (uint)CONCAT12(ppVar11[lVar27 + 5],
                                                  *(undefined2 *)(ppVar11 + lVar28)) * 8),
              ppVar18 = ppVar11, ppVar14 != (pas_generic_large_free_heap *)0x0));
      if (ppVar24 != (pas_generic_large_free_heap *)0x0) goto LAB_140d9fc38;
      ppVar24 = (pas_generic_large_free_heap *)0x0;
      uVar13 = 0;
    }
    *ppVar12 = SUB41(uVar13,0);
    ppVar12[1] = SUB41((uint)uVar13 >> 8,0);
    ppVar12[2] = SUB41((uint)uVar13 >> 0x10,0);
    uVar23 = (longlong)ppVar11 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar23 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *ppVar24 = SUB81(uVar23 >> 3,0);
    ppVar24[1] = SUB81(uVar23 >> 0xb,0);
    pVar16 = SUB41((uint)uVar23 >> 0x13,0);
    ppVar30 = ppVar24;
  }
LAB_140d9ff40:
  ppVar30[2] = pVar16;
  uVar4 = *(undefined8 *)param_3;
  uVar5 = *(undefined8 *)&param_3->end;
  uVar6 = *(undefined8 *)&param_3->zero_mode;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)&param_3->offset_in_type;
  *(undefined8 *)(param_2 + 0x28) = uVar6;
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  uVar23 = *(ulonglong *)&param_3->end;
  uVar26 = *(ulonglong *)param_3 & 0xffffffffffff;
  param_2[8] = (pas_generic_large_free_cursor)0x0;
  *(undefined8 *)param_2 = 0;
  ppVar8 = (pas_generic_large_free_cursor *)
           (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)param_1 * 8);
  if (ppVar8 == (pas_generic_large_free_cursor *)0x0 || *(uint3 *)param_1 == 0) {
    bVar33 = true;
    uVar13 = 0;
    ppVar14 = param_1;
  }
  else {
    uVar23 = (uVar23 & 0xffffffffffff) - uVar26;
    uVar32 = *(ulonglong *)(ppVar8 + 0x10) & 0xffffffffffff;
    if ((*(ulonglong *)(ppVar8 + 0x18) & 0xffffffffffff) - uVar32 < uVar23) {
      bVar33 = true;
      ppVar15 = (pas_generic_large_free_cursor *)0x0;
      ppVar20 = ppVar8;
      ppVar14 = param_1;
LAB_140da0149:
      uVar22 = 0xffffffff;
      if (uVar26 <= uVar32) {
        uVar22 = (uint)(uVar32 != uVar26);
      }
      if (ppVar15 == (pas_generic_large_free_cursor *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar23 = (longlong)ppVar15 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar23 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar13 = (undefined4)(uVar23 >> 3);
      }
      *param_2 = SUB41(uVar13,0);
      param_2[1] = SUB41((uint)uVar13 >> 8,0);
      param_2[2] = SUB41((uint)uVar13 >> 0x10,0);
      uVar23 = (longlong)param_2 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar23 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *ppVar14 = SUB81(uVar23 >> 3,0);
      ppVar14[1] = SUB81(uVar23 >> 0xb,0);
      ppVar14[2] = SUB41((uint)uVar23 >> 0x13,0);
      ppVar8 = param_2 + 3;
      if (-1 < (int)uVar22) {
        ppVar8 = param_2 + 6;
      }
      uVar23 = (longlong)ppVar20 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar23 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      param_2[(ulonglong)(-1 < (int)uVar22) * 3 + 3] = SUB81(uVar23 >> 3,0);
      ppVar8[1] = SUB81(uVar23 >> 0xb,0);
      ppVar8[2] = SUB41((uint)uVar23 >> 0x13,0);
      uVar23 = (longlong)param_2 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar23 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      bVar33 = (bool)(-1 < (int)uVar22 & bVar33);
      *ppVar20 = SUB81(uVar23 >> 3,0);
      ppVar20[1] = SUB81(uVar23 >> 0xb,0);
      ppVar8 = param_2 + 6;
      if (-1 < (int)uVar22) {
        ppVar8 = param_2 + 3;
      }
      ppVar20[2] = SUB41((uint)uVar23 >> 0x13,0);
      lVar27 = (ulonglong)(uVar22 >> 0x1f) * 3;
      uVar10 = (uint)CONCAT12(ppVar20[lVar27 + 5],*(undefined2 *)(ppVar20 + lVar27 + 3));
      uVar23 = (ulonglong)(uVar10 * 8);
      ppVar15 = (pas_generic_large_free_cursor *)(uVar23 + pas_compact_heap_reservation_base);
      if (ppVar15 != (pas_generic_large_free_cursor *)0x0 &&
          CONCAT12(ppVar20[lVar27 + 5],*(undefined2 *)(ppVar20 + lVar27 + 3)) != 0) {
        lVar1 = (ulonglong)(uVar22 >> 0x1f) * 3;
        lVar28 = lVar1 + 3;
        local_50 = ppVar20 + lVar27 + 3;
        lVar27 = (ulonglong)(-1 < (int)uVar22) * 3;
        lVar19 = lVar27 + 3;
        ppVar17 = param_2;
        uVar29 = pas_compact_heap_reservation_base;
        uVar31 = uVar10;
        do {
          uVar25 = (uint)((*(ulonglong *)(ppVar15 + 0x10) & 0xffffffffffff) != uVar26);
          if ((*(ulonglong *)(ppVar15 + 0x10) & 0xffffffffffff) < uVar26) {
            uVar25 = 0xffffffff;
          }
          uVar7 = -uVar25;
          if ((int)uVar22 < 0) {
            uVar7 = uVar25;
          }
          ppVar21 = ppVar15;
          if (0 < (int)uVar7) {
            if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            *ppVar8 = SUB41(uVar31,0);
            ppVar8[1] = SUB41(uVar10 >> 8,0);
            ppVar8[2] = SUB41(uVar10 >> 0x10,0);
            if (ppVar17 == (pas_generic_large_free_cursor *)0x0) {
              uVar23 = 0;
            }
            else {
              uVar23 = (longlong)ppVar17 - pas_compact_heap_reservation_base;
              if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (uVar23 < 8) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar23 = uVar23 >> 3;
            }
            *ppVar15 = SUB81(uVar23,0);
            ppVar15[1] = SUB81(uVar23 >> 8,0);
            ppVar15[2] = SUB81(uVar23 >> 0x10,0);
            if ((int)uVar22 < 0) {
              do {
                ppVar17 = ppVar15;
                uVar10 = (uint)CONCAT12(ppVar17[lVar27 + 5],*(undefined2 *)(ppVar17 + lVar19));
                if (CONCAT12(ppVar17[lVar27 + 5],*(undefined2 *)(ppVar17 + lVar19)) == 0)
                goto LAB_140da04f8;
                uVar23 = (ulonglong)(uVar10 * 8);
                ppVar15 = (pas_generic_large_free_cursor *)
                          (uVar23 + pas_compact_heap_reservation_base);
                if (ppVar15 == (pas_generic_large_free_cursor *)0x0) goto LAB_140da04f8;
              } while (uVar26 < (*(ulonglong *)(ppVar15 + 0x10) & 0xffffffffffff));
            }
            else {
              do {
                ppVar17 = ppVar15;
                uVar10 = (uint)CONCAT12(ppVar17[lVar27 + 5],*(undefined2 *)(ppVar17 + lVar19));
                if (CONCAT12(ppVar17[lVar27 + 5],*(undefined2 *)(ppVar17 + lVar19)) == 0) {
LAB_140da04f8:
                  *(undefined2 *)local_50 = 0;
                  local_50[2] = (pas_generic_large_free_cursor)0x0;
                  return;
                }
                uVar23 = (ulonglong)(uVar10 * 8);
                ppVar15 = (pas_generic_large_free_cursor *)
                          (uVar23 + pas_compact_heap_reservation_base);
                if (ppVar15 == (pas_generic_large_free_cursor *)0x0) goto LAB_140da04f8;
              } while ((*(ulonglong *)(ppVar15 + 0x10) & 0xffffffffffff) < uVar26);
            }
            if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            *local_50 = SUB41(uVar10,0);
            local_50[1] = SUB41(uVar10 >> 8,0);
            local_50[2] = SUB41(uVar10 >> 0x10,0);
            uVar23 = (longlong)ppVar20 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar23 < 8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            ppVar8 = ppVar17 + lVar19;
            *ppVar15 = SUB81(uVar23 >> 3,0);
            ppVar15[1] = SUB81(uVar23 >> 0xb,0);
            ppVar15[2] = SUB41((uint)uVar23 >> 0x13,0);
            bVar33 = false;
            ppVar21 = ppVar15;
            uVar29 = pas_compact_heap_reservation_base;
          }
          uVar31 = (uint)*(ushort *)(ppVar21 + lVar28);
          uVar3 = CONCAT12(ppVar21[lVar1 + 5],*(ushort *)(ppVar21 + lVar28));
          uVar10 = (uint)uVar3;
          if (uVar3 == 0) break;
          local_50 = ppVar21 + lVar28;
          uVar23 = (ulonglong)(uVar10 * 8);
          ppVar15 = (pas_generic_large_free_cursor *)(uVar23 + uVar29);
          ppVar20 = ppVar21;
        } while (ppVar15 != (pas_generic_large_free_cursor *)0x0);
      }
      *(undefined2 *)ppVar8 = 0;
      ppVar8[2] = (pas_generic_large_free_cursor)0x0;
      goto joined_r0x000140da02e3;
    }
    bVar33 = uVar26 < uVar32;
    lVar27 = (ulonglong)(uVar32 <= uVar26) * 3 + 3;
    lVar1 = (ulonglong)(uVar32 <= uVar26) * 3;
    ppVar20 = (pas_generic_large_free_cursor *)
              ((ulonglong)CONCAT12(ppVar8[lVar1 + 5],*(undefined2 *)(ppVar8 + lVar1 + 3)) * 8 +
              pas_compact_heap_reservation_base);
    if (ppVar20 != (pas_generic_large_free_cursor *)0x0 &&
        CONCAT12(ppVar8[lVar1 + 5],*(undefined2 *)(ppVar8 + lVar1 + 3)) != 0) {
      do {
        uVar32 = *(ulonglong *)(ppVar20 + 0x10) & 0xffffffffffff;
        if ((*(ulonglong *)(ppVar20 + 0x18) & 0xffffffffffff) - uVar32 < uVar23) {
          ppVar14 = (pas_generic_large_free_heap *)(ppVar8 + lVar27);
          ppVar15 = ppVar8;
          goto LAB_140da0149;
        }
        lVar27 = (ulonglong)(uVar32 <= uVar26) * 3 + 3;
        lVar1 = (ulonglong)(uVar32 <= uVar26) * 3;
        bVar33 = (bool)(uVar26 < uVar32 & bVar33);
        ppVar8 = ppVar20;
      } while ((CONCAT12(ppVar20[lVar1 + 5],*(undefined2 *)(ppVar20 + lVar1 + 3)) != 0) &&
              (ppVar20 = (pas_generic_large_free_cursor *)
                         (pas_compact_heap_reservation_base +
                         (ulonglong)
                         (uint)CONCAT12(ppVar20[lVar1 + 5],*(undefined2 *)(ppVar20 + lVar1 + 3)) * 8
                         ), ppVar20 != (pas_generic_large_free_cursor *)0x0));
    }
    uVar23 = (longlong)ppVar8 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar23 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    ppVar14 = (pas_generic_large_free_heap *)(ppVar8 + lVar27);
    uVar13 = (undefined4)(uVar23 >> 3);
  }
  *param_2 = SUB41(uVar13,0);
  param_2[1] = SUB41((uint)uVar13 >> 8,0);
  param_2[2] = SUB41((uint)uVar13 >> 0x10,0);
  uVar23 = (longlong)param_2 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar23 < 8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *ppVar14 = SUB81(uVar23 >> 3,0);
  ppVar14[1] = SUB81(uVar23 >> 0xb,0);
  ppVar14[2] = SUB41((uint)uVar23 >> 0x13,0);
joined_r0x000140da02e3:
  if (bVar33) {
    uVar23 = (longlong)param_2 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar23 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    param_1[3] = SUB81(uVar23 >> 3,0);
    param_1[4] = SUB81(uVar23 >> 0xb,0);
    param_1[5] = SUB41((uint)uVar23 >> 0x13,0);
  }
  return;
}

// fast_merge @ 140da05d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
fast_merge(pas_generic_large_free_heap *param_1,pas_large_free *param_2,
          pas_large_free_heap_config *param_3)

{
  ushort uVar1;
  code *pcVar2;
  uint3 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  pas_generic_large_free_heap *ppVar7;
  pas_generic_large_free_heap *ppVar8;
  pas_compact_cartesian_tree_node_ptr *ppVar9;
  pas_generic_large_free_heap pVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  pas_fast_large_free_heap_node *ppVar15;
  pas_generic_large_free_heap *ppVar16;
  pas_compact_cartesian_tree_node_ptr *ppVar17;
  uchar uVar18;
  ulonglong uVar19;
  pas_fast_large_free_heap_node *ppVar20;
  pas_fast_large_free_heap_node *ppVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  char cVar25;
  longlong lVar26;
  pas_generic_large_free_heap *ppVar27;
  pas_fast_large_free_heap_node *ppVar28;
  pas_fast_large_free_heap_node *ppVar29;
  pas_fast_large_free_heap_node *ppVar30;
  ulong64 uVar31;
  pas_compact_cartesian_tree_node_ptr *ppVar32;
  uint uVar33;
  ulonglong uVar34;
  longlong lVar35;
  uint uVar36;
  ulonglong uVar37;
  pas_generic_large_free_heap *ppVar38;
  ulonglong uVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  bool bVar44;
  bool bVar45;
  undefined1 auStack_d8 [40];
  pas_fast_large_free_heap_node *local_b0;
  pas_fast_large_free_heap_node *local_a8;
  ulonglong local_a0;
  pas_fast_large_free_heap_node *local_98;
  uint local_8c;
  pas_compact_cartesian_tree_node_ptr *local_88;
  ulonglong local_80;
  pas_large_free_heap_config *local_78;
  ulonglong local_70;
  pas_large_free local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_88 = (pas_compact_cartesian_tree_node_ptr *)pas_compact_heap_reservation_base;
  ppVar21 = (pas_fast_large_free_heap_node *)
            (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)param_1 * 8);
  local_a8 = (pas_fast_large_free_heap_node *)param_1;
  local_78 = param_3;
  if (ppVar21 != (pas_fast_large_free_heap_node *)0x0 && *(uint3 *)param_1 != 0) {
    uVar24 = *(ulonglong *)param_2;
    ppVar28 = (pas_fast_large_free_heap_node *)0x0;
    ppVar29 = ppVar21;
    do {
      local_b0 = ppVar29;
      local_98 = (pas_fast_large_free_heap_node *)param_2;
      if ((*(ulonglong *)&local_b0->free & 0xffffffffffff) < (uVar24 & 0xffffffffffff)) {
        uVar3 = *(uint3 *)(local_b0->tree_node).right.payload;
        if (uVar3 == 0) goto LAB_140da06d2;
      }
      else {
        uVar3 = *(uint3 *)(local_b0->tree_node).left.payload;
        local_b0 = ppVar28;
        if (uVar3 == 0) break;
      }
      ppVar29 = (pas_fast_large_free_heap_node *)
                ((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base);
      ppVar28 = local_b0;
    } while (ppVar29 != (pas_fast_large_free_heap_node *)0x0);
    if (local_b0 == (pas_fast_large_free_heap_node *)0x0) {
LAB_140da07ca:
      local_b0 = (pas_fast_large_free_heap_node *)0x0;
    }
    else {
LAB_140da06d2:
      uVar43 = *(ulonglong *)&(local_b0->free).end;
      if (((uVar43 ^ uVar24) & 0xffffffffffff) != 0) goto LAB_140da07ca;
      uVar6 = *(ulonglong *)&param_2->end;
      uVar4 = uVar24;
      uVar5 = *(ulonglong *)&local_b0->free;
      uVar37 = *(ulonglong *)&(local_b0->free).offset_in_type;
      uVar42 = *(ulonglong *)&param_2->offset_in_type;
      uVar40 = *(uint *)&(local_b0->free).zero_mode;
      uVar33 = *(uint *)&param_2->zero_mode;
      do {
        uVar36 = uVar33;
        uVar33 = uVar40;
        uVar14 = uVar42;
        uVar42 = uVar37;
        uVar34 = uVar5;
        uVar5 = uVar4;
        uVar19 = uVar43;
        uVar43 = uVar6;
        uVar6 = uVar19;
        uVar4 = uVar34;
        uVar37 = uVar14;
        uVar40 = uVar36;
      } while (((uVar43 ^ uVar34) & 0xffffffffffff) == 0);
      local_a0 = uVar24;
      if (((uVar5 ^ uVar19) & 0xffffffffffff) != 0) goto LAB_140da07ca;
      uVar6 = param_3->type_size;
      uVar42 = uVar42 & 0xffffffffffff;
      if (uVar6 <= uVar42) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = ((uVar19 & 0xffffffffffff) + uVar42) - (uVar34 & 0xffffffffffff);
      if ((uVar4 | uVar6) >> 0x20 == 0) {
        if ((uVar4 & 0xffffffff) % (uVar6 & 0xffffffff) == (uVar14 & 0xffffffffffff))
        goto LAB_140da07a6;
        goto LAB_140da07ca;
      }
      if (uVar4 % uVar6 != (uVar14 & 0xffffffffffff)) goto LAB_140da07ca;
LAB_140da07a6:
      cVar25 = (char)uVar33;
      if (cVar25 != '\0') {
        if (cVar25 != '\x01') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar36 & 0xfe) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      if ((uVar43 & 0xffffffffffff) == (uVar34 & 0xffffffffffff)) goto LAB_140da07ca;
    }
    ppVar28 = local_b0;
    uVar43 = *(ulonglong *)&param_2->end;
    do {
      uVar6 = *(ulonglong *)&ppVar21->free;
      if ((uVar6 & 0xffffffffffff) == (uVar43 & 0xffffffffffff)) {
        uVar4 = *(ulonglong *)&(ppVar21->free).end;
        uVar5 = *(ulonglong *)&(ppVar21->free).offset_in_type;
        uVar33 = *(uint *)&(ppVar21->free).zero_mode;
        uVar37 = *(ulonglong *)&param_2->offset_in_type;
        uVar40 = *(uint *)&param_2->zero_mode;
        uVar42 = uVar43;
        uVar19 = uVar37;
        uVar34 = uVar24;
        uVar36 = uVar40;
        if ((((uVar6 ^ uVar43) & 0xffffffffffff) == 0) || (((uVar4 ^ uVar24) & 0xffffffffffff) == 0)
           ) goto LAB_140da0960;
        goto LAB_140da0847;
      }
      if ((uVar43 & 0xffffffffffff) < (uVar6 & 0xffffffffffff)) {
        uVar3 = *(uint3 *)(ppVar21->tree_node).left.payload;
      }
      else {
        uVar3 = *(uint3 *)(ppVar21->tree_node).right.payload;
      }
    } while ((uVar3 != 0) &&
            (ppVar21 = (pas_fast_large_free_heap_node *)
                       ((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base),
            ppVar21 != (pas_fast_large_free_heap_node *)0x0));
    uVar37 = *(ulonglong *)&param_2->offset_in_type;
    uVar40 = *(uint *)&param_2->zero_mode;
LAB_140da0847:
    ppVar29 = (pas_fast_large_free_heap_node *)0x0;
    goto LAB_140da0849;
  }
LAB_140da062a:
  local_68.begin = param_2->begin;
  local_68._6_2_ = *(undefined2 *)&param_2->field_0x6;
  local_68.end = param_2->end;
  local_68._14_2_ = *(undefined2 *)&param_2->field_0xe;
  local_68.offset_in_type = param_2->offset_in_type;
  local_68._22_2_ = *(undefined2 *)&param_2->field_0x16;
  local_68.zero_mode = param_2->zero_mode;
  local_68._25_7_ = *(undefined7 *)&param_2->field_0x19;
  insert_node((pas_fast_large_free_heap *)param_1,&local_68);
  goto LAB_140da263b;
LAB_140da2256:
  *(undefined2 *)ppVar9->payload = 0;
  *(uchar *)((longlong)ppVar9->payload + 2) = '\0';
  goto LAB_140da263b;
LAB_140da2630:
  ppVar32->payload[0] = '\0';
  ppVar32->payload[1] = '\0';
  ppVar32->payload[2] = '\0';
  goto LAB_140da263b;
LAB_140da0960:
  do {
    uVar11 = uVar36;
    uVar36 = uVar33;
    uVar39 = uVar34;
    uVar34 = uVar6;
    uVar22 = uVar5;
    uVar5 = uVar19;
    uVar14 = uVar4;
    uVar4 = uVar42;
    uVar42 = uVar14;
    uVar19 = uVar22;
    uVar6 = uVar39;
    uVar33 = uVar11;
  } while (((uVar4 ^ uVar34) & 0xffffffffffff) == 0);
  local_8c = uVar40;
  local_80 = uVar43;
  local_70 = uVar37;
  if (((uVar39 ^ uVar14) & 0xffffffffffff) == 0) {
    uVar6 = param_3->type_size;
    uVar22 = uVar22 & 0xffffffffffff;
    if (uVar6 <= uVar22) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      local_a0 = uVar24;
      (*pcVar2)();
    }
    uVar42 = ((uVar14 & 0xffffffffffff) + uVar22) - (uVar34 & 0xffffffffffff);
    if ((uVar42 | uVar6) >> 0x20 == 0) {
      uVar42 = (uVar42 & 0xffffffff) % (uVar6 & 0xffffffff);
    }
    else {
      uVar42 = uVar42 % uVar6;
    }
    if (uVar42 == (uVar5 & 0xffffffffffff)) {
      cVar25 = (char)uVar36;
      if (cVar25 != '\0') {
        if (cVar25 != '\x01') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          local_a0 = uVar24;
          (*pcVar2)();
        }
        if ((uVar11 & 0xfe) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          local_a0 = uVar24;
          (*pcVar2)();
        }
      }
      ppVar29 = (pas_fast_large_free_heap_node *)0x0;
      local_a0 = uVar24;
      if ((uVar4 & 0xffffffffffff) != (uVar34 & 0xffffffffffff)) {
        ppVar29 = ppVar21;
      }
    }
    else {
      ppVar29 = (pas_fast_large_free_heap_node *)0x0;
      local_a0 = uVar24;
    }
  }
  else {
    ppVar29 = (pas_fast_large_free_heap_node *)0x0;
    local_a0 = uVar24;
  }
LAB_140da0849:
  uVar12 = *(undefined4 *)&param_2->field_0x1c;
  local_a0 = CONCAT44(local_a0._4_4_,uVar12);
  if (local_b0 != (pas_fast_large_free_heap_node *)0x0) {
    uVar6 = *(ulonglong *)&local_b0->free;
    uVar4 = *(ulonglong *)&(local_b0->free).end;
    uVar5 = uVar6;
    uVar42 = *(ulonglong *)&(local_b0->free).offset_in_type;
    uVar33 = *(uint *)&(local_b0->free).zero_mode;
    do {
      uVar36 = uVar33;
      uVar33 = uVar40;
      uVar14 = uVar42;
      uVar34 = uVar43;
      uVar19 = uVar5;
      uVar5 = uVar24;
      uVar42 = uVar37;
      uVar43 = uVar4;
      uVar4 = uVar34;
      uVar37 = uVar14;
      uVar24 = uVar19;
      uVar40 = uVar36;
    } while (((uVar43 ^ uVar5) & 0xffffffffffff) == 0);
    if (((uVar19 ^ uVar34) & 0xffffffffffff) != 0) {
LAB_140da27b6:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      local_98 = ppVar29;
      (*pcVar2)();
    }
    uVar4 = param_3->type_size;
    uVar37 = uVar42 & 0xffffffffffff;
    if (uVar4 <= uVar37) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      local_98 = ppVar29;
      (*pcVar2)();
    }
    uVar24 = uVar5 & 0xffffffffffff;
    uVar5 = ((uVar34 & 0xffffffffffff) + uVar37) - uVar24;
    if ((uVar5 | uVar4) >> 0x20 == 0) {
      if ((uVar5 & 0xffffffff) % (uVar4 & 0xffffffff) != (uVar14 & 0xffffffffffff))
      goto LAB_140da27b6;
    }
    else if (uVar5 % uVar4 != (uVar14 & 0xffffffffffff)) goto LAB_140da27b6;
    cVar25 = (char)uVar33;
    uVar40 = (uint)cVar25;
    if (cVar25 != '\0') {
      if (uVar40 != 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        local_98 = ppVar29;
        (*pcVar2)();
      }
      uVar40 = (uint)(char)uVar36;
      if (1 < uVar40) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        local_98 = ppVar29;
        (*pcVar2)();
      }
    }
    uVar43 = uVar43 & 0xffffffffffff;
    if (uVar43 == uVar24) goto LAB_140da27b6;
    local_98 = ppVar29;
    if (ppVar29 != (pas_fast_large_free_heap_node *)0x0) goto LAB_140da0a0e;
LAB_140da0b0c:
    if ((uVar6 & 0xffffffffffff) != uVar24) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar43 <= (*(ulonglong *)&(ppVar28->free).end & 0xffffffffffff)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar36 = (uint)*(uint3 *)(ppVar28->tree_node).left.payload;
    uVar33 = (uint)*(uint3 *)(ppVar28->tree_node).right.payload;
    ppVar21 = (pas_fast_large_free_heap_node *)
              (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8);
    ppVar29 = (pas_fast_large_free_heap_node *)0x0;
    if (uVar33 != 0) {
      ppVar29 = ppVar21;
    }
    ppVar20 = (pas_fast_large_free_heap_node *)
              (pas_compact_heap_reservation_base + (ulonglong)uVar36 * 8);
    if (((ppVar20 == (pas_fast_large_free_heap_node *)0x0 || uVar36 == 0) ||
        (ppVar28 = local_b0,
        uVar43 - uVar24 <=
        (*(ulonglong *)&(ppVar20->free).end & 0xffffffffffff) -
        (*(ulonglong *)&ppVar20->free & 0xffffffffffff))) &&
       ((ppVar29 == (pas_fast_large_free_heap_node *)0x0 ||
        (uVar43 - uVar24 <=
         (*(ulonglong *)&(ppVar29->free).end & 0xffffffffffff) -
         (*(ulonglong *)&ppVar29->free & 0xffffffffffff))))) {
      *(ulonglong *)&ppVar28->free = uVar24;
      *(ulonglong *)&(ppVar28->free).end = uVar43;
      *(ulonglong *)&(ppVar28->free).offset_in_type = uVar37;
      *(uint *)&(ppVar28->free).zero_mode = uVar40;
      *(undefined4 *)&(ppVar28->free).field_0x1c = (undefined4)local_a0;
      goto LAB_140da263b;
    }
    local_88 = &(ppVar28->tree_node).left;
    ppVar32 = &(ppVar28->tree_node).right;
    uVar11 = (uint)*(uint3 *)(local_a8->tree_node).left.payload;
    ppVar29 = (pas_fast_large_free_heap_node *)0x0;
    if (uVar11 != 0) {
      ppVar29 = (pas_fast_large_free_heap_node *)
                (pas_compact_heap_reservation_base + (ulonglong)uVar11 * 8);
    }
    if (ppVar29 == ppVar28) {
      if (ppVar21 == (pas_fast_large_free_heap_node *)0x0 || uVar33 == 0) {
        uVar3 = *(uint3 *)(ppVar28->tree_node).parent.payload;
        ppVar21 = (pas_fast_large_free_heap_node *)
                  ((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base);
        if (ppVar21 == (pas_fast_large_free_heap_node *)0x0 || uVar3 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          ppVar20 = ppVar28;
          do {
            ppVar29 = ppVar21;
            uVar33 = (uint)*(uint3 *)(ppVar29->tree_node).right.payload;
            if ((uVar33 == 0) ||
               (ppVar20 !=
                (pas_fast_large_free_heap_node *)
                (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8))) goto LAB_140da0c4f;
            uVar33 = (uint)*(uint3 *)(ppVar29->tree_node).parent.payload;
          } while ((uVar33 != 0) &&
                  (ppVar21 = (pas_fast_large_free_heap_node *)
                             (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8),
                  ppVar20 = ppVar29, ppVar21 != (pas_fast_large_free_heap_node *)0x0));
        }
      }
      else {
        do {
          ppVar29 = ppVar21;
          uVar33 = (uint)*(uint3 *)(ppVar29->tree_node).left.payload;
          if (uVar33 == 0) break;
          ppVar21 = (pas_fast_large_free_heap_node *)
                    (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8);
        } while (ppVar21 != (pas_fast_large_free_heap_node *)0x0);
LAB_140da0c4f:
        uVar6 = (longlong)ppVar29 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar6 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar12 = (undefined4)(uVar6 >> 3);
      }
      (local_a8->tree_node).left.payload[0] = (uchar)uVar12;
      (local_a8->tree_node).left.payload[1] = (uchar)((uint)uVar12 >> 8);
      (local_a8->tree_node).left.payload[2] = (uchar)((uint)uVar12 >> 0x10);
      uVar36 = (uint)*(uint3 *)local_88->payload;
      uVar33 = (uint)*(uint3 *)ppVar32->payload;
      ppVar20 = (pas_fast_large_free_heap_node *)
                (pas_compact_heap_reservation_base + (ulonglong)*(uint3 *)local_88->payload * 8);
      ppVar21 = (pas_fast_large_free_heap_node *)
                (pas_compact_heap_reservation_base + (ulonglong)*(uint3 *)ppVar32->payload * 8);
    }
    uVar11 = (uint)*(uint3 *)(ppVar28->tree_node).parent.payload;
    ppVar15 = (pas_fast_large_free_heap_node *)0x0;
    ppVar29 = (pas_fast_large_free_heap_node *)
              (pas_compact_heap_reservation_base + (ulonglong)uVar11 * 8);
    if (uVar11 == 0) {
      ppVar29 = ppVar15;
    }
    if (uVar36 == 0) {
      ppVar20 = ppVar15;
    }
    if (uVar33 == 0) {
      ppVar21 = ppVar15;
    }
    ppVar15 = local_a8;
    if (ppVar29 != (pas_fast_large_free_heap_node *)0x0) {
      uVar33 = (uint)*(uint3 *)(ppVar29->tree_node).left.payload;
      ppVar30 = (pas_fast_large_free_heap_node *)0x0;
      if (uVar33 != 0) {
        ppVar30 = (pas_fast_large_free_heap_node *)
                  (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8);
      }
      ppVar15 = (pas_fast_large_free_heap_node *)&(ppVar29->tree_node).right;
      if (ppVar30 == ppVar28) {
        ppVar15 = (pas_fast_large_free_heap_node *)&(ppVar29->tree_node).left;
      }
    }
    if (ppVar20 == (pas_fast_large_free_heap_node *)0x0) {
      if (ppVar21 == (pas_fast_large_free_heap_node *)0x0) {
        (ppVar15->tree_node).parent.payload[0] = '\0';
        (ppVar15->tree_node).parent.payload[1] = '\0';
        uVar18 = '\0';
      }
      else {
        uVar6 = (longlong)ppVar21 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar6 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        (ppVar15->tree_node).parent.payload[0] = (uchar)(uVar6 >> 3);
        (ppVar15->tree_node).parent.payload[1] = (uchar)(uVar6 >> 0xb);
        (ppVar15->tree_node).parent.payload[2] = (uchar)((uint)uVar6 >> 0x13);
        if (ppVar29 == (pas_fast_large_free_heap_node *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar6 = (longlong)ppVar29 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (uVar6 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar12 = (undefined4)(uVar6 >> 3);
        }
        *(short *)(ppVar21->tree_node).parent.payload = (short)uVar12;
        uVar18 = (uchar)((uint)uVar12 >> 0x10);
        ppVar15 = ppVar21;
      }
    }
    else if (ppVar21 == (pas_fast_large_free_heap_node *)0x0) {
      uVar6 = (longlong)ppVar20 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar6 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      (ppVar15->tree_node).parent.payload[0] = (uchar)(uVar6 >> 3);
      (ppVar15->tree_node).parent.payload[1] = (uchar)(uVar6 >> 0xb);
      (ppVar15->tree_node).parent.payload[2] = (uchar)((uint)uVar6 >> 0x13);
      if (ppVar29 == (pas_fast_large_free_heap_node *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar6 = (longlong)ppVar29 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar6 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar12 = (undefined4)(uVar6 >> 3);
      }
      *(short *)(ppVar20->tree_node).parent.payload = (short)uVar12;
      uVar18 = (uchar)((uint)uVar12 >> 0x10);
      ppVar15 = ppVar20;
    }
    else {
      uVar5 = (*(ulonglong *)&(ppVar20->free).end & 0xffffffffffff) -
              (*(ulonglong *)&ppVar20->free & 0xffffffffffff);
      uVar4 = (*(ulonglong *)&(ppVar21->free).end & 0xffffffffffff) -
              (*(ulonglong *)&ppVar21->free & 0xffffffffffff);
      uVar6 = uVar4;
      ppVar30 = ppVar21;
      if (uVar5 < uVar4) {
        uVar6 = uVar5;
        ppVar30 = ppVar20;
        ppVar20 = ppVar21;
      }
      uVar42 = (longlong)ppVar20 - pas_compact_heap_reservation_base;
      local_78 = (pas_large_free_heap_config *)ppVar32;
      if (pas_compact_heap_reservation_size <= uVar42) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar42 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar42 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      (ppVar15->tree_node).parent.payload[0] = (uchar)(uVar42 >> 3);
      (ppVar15->tree_node).parent.payload[1] = (uchar)(uVar42 >> 0xb);
      (ppVar15->tree_node).parent.payload[2] = (uchar)((uint)uVar42 >> 0x13);
      local_8c = uVar40;
      if (ppVar29 == (pas_fast_large_free_heap_node *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar42 = (longlong)ppVar29 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar42) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar42 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar42 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar12 = (undefined4)(uVar42 >> 3);
      }
      uVar42 = (ulonglong)(uVar4 <= uVar5);
      (ppVar20->tree_node).parent.payload[0] = (uchar)uVar12;
      (ppVar20->tree_node).parent.payload[1] = (uchar)((uint)uVar12 >> 8);
      (ppVar20->tree_node).parent.payload[2] = (uchar)((uint)uVar12 >> 0x10);
      ppVar9 = &(ppVar20->tree_node).left + uVar42;
      uVar33 = (uint)CONCAT12((&(ppVar20->tree_node).left)[uVar42].payload[2],
                              *(undefined2 *)(&(ppVar20->tree_node).left)[uVar42].payload);
      ppVar21 = (pas_fast_large_free_heap_node *)
                (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8);
      uVar31 = pas_compact_heap_reservation_base;
      if (ppVar21 == (pas_fast_large_free_heap_node *)0x0 || uVar33 == 0) {
LAB_140da12ef:
        uVar6 = (longlong)ppVar30 - uVar31;
        if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar6 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar12 = (undefined4)(uVar6 >> 3);
      }
      else {
        local_98 = (pas_fast_large_free_heap_node *)(uVar42 * 3 + 3);
        bVar44 = uVar5 < uVar4;
        ppVar28 = ppVar20;
        do {
          ppVar20 = ppVar21;
          uVar4 = (*(ulonglong *)&(ppVar20->free).end & 0xffffffffffff) -
                  (*(ulonglong *)&ppVar20->free & 0xffffffffffff);
          if (uVar4 < uVar6) {
            if (ppVar30 == (pas_fast_large_free_heap_node *)0x0) {
              uVar12 = 0;
            }
            else {
              uVar6 = (longlong)ppVar30 - uVar31;
              if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (uVar6 < 8) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar12 = (undefined4)(uVar6 >> 3);
            }
            ppVar9->payload[0] = (uchar)uVar12;
            ppVar9->payload[1] = (uchar)((uint)uVar12 >> 8);
            ppVar9->payload[2] = (uchar)((uint)uVar12 >> 0x10);
            uVar6 = (longlong)ppVar28 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar6 < 8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            (ppVar30->tree_node).parent.payload[0] = (uchar)(uVar6 >> 3);
            (ppVar30->tree_node).parent.payload[1] = (uchar)(uVar6 >> 0xb);
            (ppVar30->tree_node).parent.payload[2] = (uchar)((uint)uVar6 >> 0x13);
            do {
              ppVar21 = ppVar30;
              uVar33 = (uint)CONCAT12((&(ppVar21->tree_node).left)[bVar44].payload[2],
                                      *(undefined2 *)(&(ppVar21->tree_node).left)[bVar44].payload);
              if ((uVar33 == 0) ||
                 (ppVar30 = (pas_fast_large_free_heap_node *)
                            (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8),
                 ppVar30 == (pas_fast_large_free_heap_node *)0x0)) {
                uVar6 = (longlong)ppVar20 - pas_compact_heap_reservation_base;
                if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar6 < 8) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                (&(ppVar21->tree_node).left)[bVar44].payload[0] = (uchar)(uVar6 >> 3);
                (&(ppVar21->tree_node).left)[bVar44].payload[1] = (uchar)(uVar6 >> 0xb);
                (&(ppVar21->tree_node).left)[bVar44].payload[2] = (uchar)((uint)uVar6 >> 0x13);
                uVar6 = (longlong)ppVar21 - pas_compact_heap_reservation_base;
                if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar6 < 8) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                (ppVar20->tree_node).parent.payload[0] = (uchar)(uVar6 >> 3);
                (ppVar20->tree_node).parent.payload[1] = (uchar)(uVar6 >> 0xb);
                uVar18 = (uchar)((uint)uVar6 >> 0x13);
                ppVar28 = local_b0;
                ppVar15 = ppVar20;
                goto LAB_140da1a16;
              }
              uVar6 = (*(ulonglong *)&(ppVar30->free).end & 0xffffffffffff) -
                      (*(ulonglong *)&ppVar30->free & 0xffffffffffff);
            } while (uVar4 <= uVar6);
            uVar4 = (longlong)ppVar20 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar4) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar4 < 8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            (&(ppVar21->tree_node).left)[bVar44].payload[0] = (uchar)(uVar4 >> 3);
            (&(ppVar21->tree_node).left)[bVar44].payload[1] = (uchar)(uVar4 >> 0xb);
            (&(ppVar21->tree_node).left)[bVar44].payload[2] = (uchar)((uint)uVar4 >> 0x13);
            uVar4 = (longlong)ppVar21 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar4) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar4 < 8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            (ppVar20->tree_node).parent.payload[0] = (uchar)(uVar4 >> 3);
            (ppVar20->tree_node).parent.payload[1] = (uchar)(uVar4 >> 0xb);
            (ppVar20->tree_node).parent.payload[2] = (uchar)((uint)uVar4 >> 0x13);
            uVar31 = pas_compact_heap_reservation_base;
          }
          ppVar9 = (pas_compact_cartesian_tree_node_ptr *)
                   ((longlong)(local_98->tree_node).parent.payload +
                   (longlong)(ppVar20->tree_node).parent.payload);
          uVar33 = (uint)CONCAT12((local_98->tree_node).parent.payload
                                  [(longlong)(ppVar20->tree_node).parent.payload + 2],
                                  *(undefined2 *)
                                   ((longlong)(local_98->tree_node).parent.payload +
                                   (longlong)(ppVar20->tree_node).parent.payload));
        } while ((uVar33 != 0) &&
                (ppVar21 = (pas_fast_large_free_heap_node *)(uVar31 + (ulonglong)uVar33 * 8),
                ppVar28 = ppVar20, ppVar21 != (pas_fast_large_free_heap_node *)0x0));
        if (ppVar30 != (pas_fast_large_free_heap_node *)0x0) goto LAB_140da12ef;
        ppVar30 = (pas_fast_large_free_heap_node *)0x0;
        uVar12 = 0;
      }
      ppVar9->payload[0] = (uchar)uVar12;
      ppVar9->payload[1] = (uchar)((uint)uVar12 >> 8);
      ppVar9->payload[2] = (uchar)((uint)uVar12 >> 0x10);
      uVar6 = (longlong)ppVar20 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar6 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      (ppVar30->tree_node).parent.payload[0] = (uchar)(uVar6 >> 3);
      (ppVar30->tree_node).parent.payload[1] = (uchar)(uVar6 >> 0xb);
      uVar18 = (uchar)((uint)uVar6 >> 0x13);
      ppVar28 = local_b0;
      ppVar15 = ppVar30;
    }
LAB_140da1a16:
    (ppVar15->tree_node).parent.payload[2] = uVar18;
    *(ulonglong *)&ppVar28->free = uVar24;
    *(ulonglong *)&(ppVar28->free).end = uVar43;
    *(ulonglong *)&(ppVar28->free).offset_in_type = uVar37;
    *(uint *)&(ppVar28->free).zero_mode = uVar40;
    *(undefined4 *)&(ppVar28->free).field_0x1c = (undefined4)local_a0;
    (ppVar28->tree_node).parent = (uchar  [3])0x0;
    (ppVar28->tree_node).left = (uchar  [3])0x0;
    (ppVar28->tree_node).right.payload[0] = '\0';
    (ppVar28->tree_node).right.payload[1] = '\0';
    (ppVar28->tree_node).right.payload[2] = '\0';
    uVar40 = (uint)*(uint3 *)(local_a8->tree_node).parent.payload;
    ppVar21 = (pas_fast_large_free_heap_node *)
              (pas_compact_heap_reservation_base + (ulonglong)uVar40 * 8);
    if (ppVar21 == (pas_fast_large_free_heap_node *)0x0 || uVar40 == 0) {
      bVar44 = true;
      uVar12 = 0;
      ppVar21 = local_a8;
LAB_140da1b14:
      (ppVar28->tree_node).parent.payload[0] = (uchar)uVar12;
      (ppVar28->tree_node).parent.payload[1] = (uchar)((uint)uVar12 >> 8);
      (ppVar28->tree_node).parent.payload[2] = (uchar)((uint)uVar12 >> 0x10);
      uVar24 = (longlong)ppVar28 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar24) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar24 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar24 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      (ppVar21->tree_node).parent.payload[0] = (uchar)(uVar24 >> 3);
      (ppVar21->tree_node).parent.payload[1] = (uchar)(uVar24 >> 0xb);
      (ppVar21->tree_node).parent.payload[2] = (uchar)((uint)uVar24 >> 0x13);
    }
    else {
      uVar6 = *(ulonglong *)&ppVar21->free & 0xffffffffffff;
      if (uVar43 - uVar24 <= (*(ulonglong *)&(ppVar21->free).end & 0xffffffffffff) - uVar6) {
        bVar44 = uVar24 < uVar6;
        uVar6 = (ulonglong)(uVar6 <= uVar24);
        lVar26 = uVar6 * 3 + 3;
        uVar3 = CONCAT12((&(ppVar21->tree_node).left)[uVar6].payload[2],
                         *(undefined2 *)(&(ppVar21->tree_node).left)[uVar6].payload);
        ppVar28 = (pas_fast_large_free_heap_node *)
                  ((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base);
        if (ppVar28 != (pas_fast_large_free_heap_node *)0x0 && uVar3 != 0) {
          do {
            uVar6 = *(ulonglong *)&ppVar28->free & 0xffffffffffff;
            if ((*(ulonglong *)&(ppVar28->free).end & 0xffffffffffff) - uVar6 < uVar43 - uVar24) {
              ppVar20 = (pas_fast_large_free_heap_node *)
                        ((ppVar21->tree_node).parent.payload + lVar26);
              ppVar29 = ppVar21;
              goto LAB_140da1eac;
            }
            uVar4 = (ulonglong)(uVar6 <= uVar24);
            lVar26 = uVar4 * 3 + 3;
            bVar44 = (bool)(uVar24 < uVar6 & bVar44);
            uVar40 = (uint)CONCAT12((&(ppVar28->tree_node).left)[uVar4].payload[2],
                                    *(undefined2 *)(&(ppVar28->tree_node).left)[uVar4].payload);
            ppVar21 = ppVar28;
          } while ((uVar40 != 0) &&
                  (ppVar28 = (pas_fast_large_free_heap_node *)
                             (pas_compact_heap_reservation_base + (ulonglong)uVar40 * 8),
                  ppVar28 != (pas_fast_large_free_heap_node *)0x0));
        }
        uVar24 = (longlong)ppVar21 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar24) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar24 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar24 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        ppVar21 = (pas_fast_large_free_heap_node *)((ppVar21->tree_node).parent.payload + lVar26);
        uVar12 = (undefined4)(uVar24 >> 3);
        ppVar28 = local_b0;
        goto LAB_140da1b14;
      }
      bVar44 = true;
      ppVar29 = (pas_fast_large_free_heap_node *)0x0;
      ppVar20 = local_a8;
      ppVar28 = ppVar21;
LAB_140da1eac:
      uVar40 = 0xffffffff;
      if (uVar24 <= uVar6) {
        uVar40 = (uint)(uVar6 != uVar24);
      }
      if (ppVar29 == (pas_fast_large_free_heap_node *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar43 = (longlong)ppVar29 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar43 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar12 = (undefined4)(uVar43 >> 3);
      }
      (local_b0->tree_node).parent.payload[0] = (uchar)uVar12;
      (local_b0->tree_node).parent.payload[1] = (uchar)((uint)uVar12 >> 8);
      (local_b0->tree_node).parent.payload[2] = (uchar)((uint)uVar12 >> 0x10);
      uVar43 = (longlong)local_b0 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_a0 = uVar24;
      if (uVar43 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      (ppVar20->tree_node).parent.payload[0] = (uchar)(uVar43 >> 3);
      (ppVar20->tree_node).parent.payload[1] = (uchar)(uVar43 >> 0xb);
      (ppVar20->tree_node).parent.payload[2] = (uchar)((uint)uVar43 >> 0x13);
      ppVar9 = local_88;
      if (-1 < (int)uVar40) {
        ppVar9 = ppVar32;
      }
      uVar43 = (longlong)ppVar28 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar43 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      (&(local_b0->tree_node).left)[-1 < (int)uVar40].payload[0] = (uchar)(uVar43 >> 3);
      ppVar9->payload[1] = (uchar)(uVar43 >> 0xb);
      ppVar9->payload[2] = (uchar)((uint)uVar43 >> 0x13);
      uVar43 = (longlong)local_b0 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar43 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      bVar44 = (bool)(-1 < (int)uVar40 & bVar44);
      (ppVar28->tree_node).parent.payload[0] = (uchar)(uVar43 >> 3);
      (ppVar28->tree_node).parent.payload[1] = (uchar)(uVar43 >> 0xb);
      if (-1 < (int)uVar40) {
        ppVar32 = local_88;
      }
      (ppVar28->tree_node).parent.payload[2] = (uchar)((uint)uVar43 >> 0x13);
      uVar33 = uVar40 >> 0x1f;
      uVar3 = CONCAT12((&(ppVar28->tree_node).left)[uVar33].payload[2],
                       *(undefined2 *)(&(ppVar28->tree_node).left)[uVar33].payload);
      uVar36 = (uint)uVar3;
      uVar43 = (ulonglong)(uVar36 * 8);
      if ((pas_fast_large_free_heap_node *)(uVar43 + pas_compact_heap_reservation_base) !=
          (pas_fast_large_free_heap_node *)0x0 && uVar3 != 0) {
        bVar45 = -1 < (int)uVar40;
        ppVar21 = local_b0;
        ppVar29 = (pas_fast_large_free_heap_node *)(uVar43 + pas_compact_heap_reservation_base);
        uVar31 = pas_compact_heap_reservation_base;
        uVar11 = uVar36;
        do {
          ppVar20 = ppVar29;
          ppVar9 = &(ppVar28->tree_node).left + uVar33;
          uVar6 = *(ulonglong *)&ppVar20->free & 0xffffffffffff;
          uVar23 = (uint)(uVar6 != uVar24);
          if (uVar6 < uVar24) {
            uVar23 = 0xffffffff;
          }
          uVar41 = -uVar23;
          if ((int)uVar40 < 0) {
            uVar41 = uVar23;
          }
          if (0 < (int)uVar41) {
            if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            ppVar32->payload[0] = (uchar)uVar11;
            ppVar32->payload[1] = (uchar)(uVar36 >> 8);
            ppVar32->payload[2] = (uchar)(uVar36 >> 0x10);
            if (ppVar21 == (pas_fast_large_free_heap_node *)0x0) {
              uVar12 = 0;
            }
            else {
              uVar43 = (longlong)ppVar21 - pas_compact_heap_reservation_base;
              if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (uVar43 < 8) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar12 = (undefined4)(uVar43 >> 3);
            }
            (ppVar20->tree_node).parent.payload[0] = (uchar)uVar12;
            (ppVar20->tree_node).parent.payload[1] = (uchar)((uint)uVar12 >> 8);
            (ppVar20->tree_node).parent.payload[2] = (uchar)((uint)uVar12 >> 0x10);
            if ((int)uVar40 < 0) {
              do {
                ppVar21 = ppVar20;
                uVar3 = CONCAT12((&(ppVar21->tree_node).left)[bVar45].payload[2],
                                 *(undefined2 *)(&(ppVar21->tree_node).left)[bVar45].payload);
                uVar36 = (uint)uVar3;
                if (uVar3 == 0) goto LAB_140da2256;
                uVar43 = (ulonglong)(uVar36 * 8);
                ppVar20 = (pas_fast_large_free_heap_node *)
                          (uVar43 + pas_compact_heap_reservation_base);
                if (ppVar20 == (pas_fast_large_free_heap_node *)0x0) goto LAB_140da2256;
              } while (uVar24 < (*(ulonglong *)&ppVar20->free & 0xffffffffffff));
            }
            else {
              do {
                ppVar21 = ppVar20;
                uVar3 = CONCAT12((&(ppVar21->tree_node).left)[bVar45].payload[2],
                                 *(undefined2 *)(&(ppVar21->tree_node).left)[bVar45].payload);
                uVar36 = (uint)uVar3;
                if (uVar3 == 0) goto LAB_140da2256;
                uVar43 = (ulonglong)(uVar36 * 8);
                ppVar20 = (pas_fast_large_free_heap_node *)
                          (uVar43 + pas_compact_heap_reservation_base);
                if (ppVar20 == (pas_fast_large_free_heap_node *)0x0) goto LAB_140da2256;
              } while ((*(ulonglong *)&ppVar20->free & 0xffffffffffff) < uVar24);
            }
            if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            ppVar9->payload[0] = (char)uVar36;
            *(uchar *)((longlong)ppVar9->payload + 1) = (uchar)(uVar36 >> 8);
            *(uchar *)((longlong)ppVar9->payload + 2) = (uchar)(uVar36 >> 0x10);
            uVar43 = (longlong)ppVar28 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar43 < 8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            ppVar32 = &(ppVar21->tree_node).left + bVar45;
            (ppVar20->tree_node).parent.payload[0] = (uchar)(uVar43 >> 3);
            (ppVar20->tree_node).parent.payload[1] = (uchar)(uVar43 >> 0xb);
            (ppVar20->tree_node).parent.payload[2] = (uchar)((uint)uVar43 >> 0x13);
            bVar44 = false;
            uVar31 = pas_compact_heap_reservation_base;
          }
          uVar1 = *(ushort *)(&(ppVar20->tree_node).left)[uVar33].payload;
          uVar11 = (uint)uVar1;
          uVar3 = CONCAT12((&(ppVar20->tree_node).left)[uVar33].payload[2],uVar1);
          uVar36 = (uint)uVar3;
          if (uVar3 == 0) break;
          uVar43 = (ulonglong)(uVar36 * 8);
          ppVar29 = (pas_fast_large_free_heap_node *)(uVar43 + uVar31);
          ppVar28 = ppVar20;
        } while ((pas_fast_large_free_heap_node *)(uVar43 + uVar31) !=
                 (pas_fast_large_free_heap_node *)0x0);
      }
      ppVar32->payload[0] = '\0';
      ppVar32->payload[1] = '\0';
      ppVar32->payload[2] = '\0';
      ppVar28 = local_b0;
    }
    if (bVar44) {
      uVar24 = (longlong)ppVar28 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar24) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar24 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar24 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      (local_a8->tree_node).left.payload[0] = (uchar)(uVar24 >> 3);
      (local_a8->tree_node).left.payload[1] = (uchar)(uVar24 >> 0xb);
      (local_a8->tree_node).left.payload[2] = (uchar)((uint)uVar24 >> 0x13);
    }
    goto LAB_140da263b;
  }
  if (ppVar29 == (pas_fast_large_free_heap_node *)0x0) goto LAB_140da062a;
LAB_140da0a0e:
  uVar6 = *(ulonglong *)&(ppVar29->free).end;
  uVar4 = *(ulonglong *)&ppVar29->free;
  uVar5 = *(ulonglong *)&(ppVar29->free).offset_in_type;
  uVar33 = *(uint *)&(ppVar29->free).zero_mode;
  do {
    uVar36 = uVar33;
    uVar33 = uVar40;
    uVar14 = uVar43;
    uVar34 = uVar5;
    uVar19 = uVar24;
    uVar5 = uVar37;
    uVar24 = uVar4;
    uVar42 = uVar6;
    uVar6 = uVar14;
    uVar4 = uVar19;
    uVar37 = uVar34;
    uVar43 = uVar42;
    uVar40 = uVar36;
  } while (((uVar42 ^ uVar19) & 0xffffffffffff) == 0);
  if (((uVar24 ^ uVar14) & 0xffffffffffff) != 0) {
LAB_140da27b8:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar43 = param_3->type_size;
  uVar37 = uVar5 & 0xffffffffffff;
  if (uVar43 <= uVar37) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar24 = uVar19 & 0xffffffffffff;
  uVar6 = ((uVar14 & 0xffffffffffff) + uVar37) - uVar24;
  if ((uVar6 | uVar43) >> 0x20 == 0) {
    if ((uVar6 & 0xffffffff) % (uVar43 & 0xffffffff) != (uVar34 & 0xffffffffffff))
    goto LAB_140da27b8;
  }
  else if (uVar6 % uVar43 != (uVar34 & 0xffffffffffff)) goto LAB_140da27b8;
  cVar25 = (char)uVar33;
  uVar40 = (uint)cVar25;
  if (cVar25 != '\0') {
    if (uVar40 != 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar40 = (uint)(char)uVar36;
    if (1 < uVar40) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  uVar43 = uVar42 & 0xffffffffffff;
  ppVar21 = (pas_fast_large_free_heap_node *)(uVar43 - uVar24);
  if (ppVar21 == (pas_fast_large_free_heap_node *)0x0) goto LAB_140da27b8;
  if (local_b0 != (pas_fast_large_free_heap_node *)0x0) {
    remove_node((pas_fast_large_free_heap *)param_1,ppVar29);
    uVar6 = *(ulonglong *)&ppVar28->free;
    goto LAB_140da0b0c;
  }
  ppVar28 = (pas_fast_large_free_heap_node *)0x0;
  if (*(uint3 *)(param_1 + 3) != 0) {
    ppVar28 = (pas_fast_large_free_heap_node *)
              (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(param_1 + 3) * 8);
  }
  local_70 = uVar37;
  if (ppVar28 == ppVar29) {
    uVar3 = *(uint3 *)(ppVar29->tree_node).right.payload;
    ppVar28 = (pas_fast_large_free_heap_node *)
              ((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base);
    if (ppVar28 == (pas_fast_large_free_heap_node *)0x0 || uVar3 == 0) {
      uVar3 = *(uint3 *)(ppVar29->tree_node).parent.payload;
      ppVar28 = (pas_fast_large_free_heap_node *)
                ((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base);
      if (ppVar28 == (pas_fast_large_free_heap_node *)0x0 || uVar3 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        ppVar15 = ppVar29;
        do {
          ppVar20 = ppVar28;
          uVar33 = (uint)*(uint3 *)(ppVar20->tree_node).right.payload;
          if ((uVar33 == 0) ||
             (ppVar15 !=
              (pas_fast_large_free_heap_node *)
              (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8))) goto LAB_140da0ead;
          uVar33 = (uint)*(uint3 *)(ppVar20->tree_node).parent.payload;
        } while ((uVar33 != 0) &&
                (ppVar28 = (pas_fast_large_free_heap_node *)
                           (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8),
                ppVar15 = ppVar20, ppVar28 != (pas_fast_large_free_heap_node *)0x0));
      }
    }
    else {
      do {
        ppVar20 = ppVar28;
        uVar33 = (uint)*(uint3 *)(ppVar20->tree_node).left.payload;
        if (uVar33 == 0) break;
        ppVar28 = (pas_fast_large_free_heap_node *)
                  (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8);
      } while (ppVar28 != (pas_fast_large_free_heap_node *)0x0);
LAB_140da0ead:
      uVar6 = (longlong)ppVar20 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar6 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar13 = (undefined4)(uVar6 >> 3);
    }
    param_1[3] = SUB41(uVar13,0);
    param_1[4] = SUB41((uint)uVar13 >> 8,0);
    param_1[5] = SUB41((uint)uVar13 >> 0x10,0);
  }
  uVar33 = (uint)*(uint3 *)(ppVar29->tree_node).parent.payload;
  ppVar27 = (pas_generic_large_free_heap *)0x0;
  ppVar8 = (pas_generic_large_free_heap *)
           (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8);
  if (uVar33 == 0) {
    ppVar8 = ppVar27;
  }
  uVar33 = (uint)*(uint3 *)(ppVar29->tree_node).left.payload;
  ppVar16 = (pas_generic_large_free_heap *)
            (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8);
  if (uVar33 == 0) {
    ppVar16 = ppVar27;
  }
  uVar33 = (uint)*(uint3 *)(ppVar29->tree_node).right.payload;
  ppVar7 = (pas_generic_large_free_heap *)
           (pas_compact_heap_reservation_base + (ulonglong)uVar33 * 8);
  if (uVar33 == 0) {
    ppVar7 = ppVar27;
  }
  ppVar27 = param_1;
  if (ppVar8 != (pas_generic_large_free_heap *)0x0) {
    ppVar28 = (pas_fast_large_free_heap_node *)0x0;
    if (*(uint3 *)(ppVar8 + 3) != 0) {
      ppVar28 = (pas_fast_large_free_heap_node *)
                (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(ppVar8 + 3) * 8);
    }
    ppVar27 = ppVar8 + 6;
    if (ppVar28 == ppVar29) {
      ppVar27 = ppVar8 + 3;
    }
  }
  if (ppVar16 == (pas_generic_large_free_heap *)0x0) {
    if (ppVar7 == (pas_generic_large_free_heap *)0x0) {
      *(undefined2 *)ppVar27 = 0;
      pVar10 = (pas_generic_large_free_heap)0x0;
    }
    else {
      uVar6 = (longlong)ppVar7 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar6 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *ppVar27 = SUB81(uVar6 >> 3,0);
      ppVar27[1] = SUB81(uVar6 >> 0xb,0);
      ppVar27[2] = SUB41((uint)uVar6 >> 0x13,0);
      if (ppVar8 == (pas_generic_large_free_heap *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar6 = (longlong)ppVar8 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar6 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar13 = (undefined4)(uVar6 >> 3);
      }
      *(short *)ppVar7 = (short)uVar13;
      pVar10 = SUB41((uint)uVar13 >> 0x10,0);
      ppVar27 = ppVar7;
    }
  }
  else if (ppVar7 == (pas_generic_large_free_heap *)0x0) {
    uVar6 = (longlong)ppVar16 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar6 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *ppVar27 = SUB81(uVar6 >> 3,0);
    ppVar27[1] = SUB81(uVar6 >> 0xb,0);
    ppVar27[2] = SUB41((uint)uVar6 >> 0x13,0);
    if (ppVar8 == (pas_generic_large_free_heap *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar6 = (longlong)ppVar8 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar6 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar13 = (undefined4)(uVar6 >> 3);
    }
    *(short *)ppVar16 = (short)uVar13;
    pVar10 = SUB41((uint)uVar13 >> 0x10,0);
    ppVar27 = ppVar16;
  }
  else {
    uVar5 = (*(ulonglong *)(ppVar16 + 0x18) & 0xffffffffffff) -
            (*(ulonglong *)(ppVar16 + 0x10) & 0xffffffffffff);
    uVar4 = (*(ulonglong *)(ppVar7 + 0x18) & 0xffffffffffff) -
            (*(ulonglong *)(ppVar7 + 0x10) & 0xffffffffffff);
    uVar6 = uVar4;
    ppVar38 = ppVar7;
    if (uVar5 < uVar4) {
      uVar6 = uVar5;
      ppVar38 = ppVar16;
      ppVar16 = ppVar7;
    }
    uVar19 = (longlong)ppVar16 - pas_compact_heap_reservation_base;
    local_b0 = ppVar21;
    if (pas_compact_heap_reservation_size <= uVar19) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      local_98 = ppVar29;
      (*pcVar2)();
    }
    if ((uVar19 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      local_98 = ppVar29;
      (*pcVar2)();
    }
    if (uVar19 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      local_98 = ppVar29;
      (*pcVar2)();
    }
    *ppVar27 = SUB81(uVar19 >> 3,0);
    ppVar27[1] = SUB81(uVar19 >> 0xb,0);
    ppVar27[2] = SUB41((uint)uVar19 >> 0x13,0);
    local_80 = uVar43;
    if (ppVar8 == (pas_generic_large_free_heap *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar19 = (longlong)ppVar8 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar19) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        local_98 = ppVar29;
        (*pcVar2)();
      }
      if ((uVar19 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        local_98 = ppVar29;
        (*pcVar2)();
      }
      if (uVar19 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        local_98 = ppVar29;
        (*pcVar2)();
      }
      uVar13 = (undefined4)(uVar19 >> 3);
    }
    *ppVar16 = SUB41(uVar13,0);
    ppVar16[1] = SUB41((uint)uVar13 >> 8,0);
    ppVar16[2] = SUB41((uint)uVar13 >> 0x10,0);
    lVar26 = (ulonglong)(uVar4 <= uVar5) * 3;
    ppVar27 = ppVar16 + lVar26 + 3;
    ppVar8 = (pas_generic_large_free_heap *)
             (pas_compact_heap_reservation_base +
             (ulonglong)(uint)CONCAT12(ppVar16[lVar26 + 5],*(undefined2 *)(ppVar16 + lVar26 + 3)) *
             8);
    uVar31 = pas_compact_heap_reservation_base;
    if (ppVar8 == (pas_generic_large_free_heap *)0x0 ||
        CONCAT12(ppVar16[lVar26 + 5],*(undefined2 *)(ppVar16 + lVar26 + 3)) == 0) {
LAB_140da163e:
      uVar6 = (longlong)ppVar38 - uVar31;
      if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        local_98 = ppVar29;
        (*pcVar2)();
      }
      if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        local_98 = ppVar29;
        (*pcVar2)();
      }
      if (uVar6 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        local_98 = ppVar29;
        (*pcVar2)();
      }
      uVar13 = (undefined4)(uVar6 >> 3);
    }
    else {
      local_88 = (pas_compact_cartesian_tree_node_ptr *)((ulonglong)(uVar4 <= uVar5) * 3 + 3);
      lVar26 = (ulonglong)(uVar5 < uVar4) * 3;
      lVar35 = lVar26 + 3;
      ppVar7 = ppVar16;
      do {
        ppVar16 = ppVar8;
        uVar4 = (*(ulonglong *)(ppVar16 + 0x18) & 0xffffffffffff) -
                (*(ulonglong *)(ppVar16 + 0x10) & 0xffffffffffff);
        if (uVar4 < uVar6) {
          if (ppVar38 == (pas_generic_large_free_heap *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar6 = (longlong)ppVar38 - uVar31;
            if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              local_98 = ppVar29;
              (*pcVar2)();
            }
            if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              local_98 = ppVar29;
              (*pcVar2)();
            }
            if (uVar6 < 8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              local_98 = ppVar29;
              (*pcVar2)();
            }
            uVar13 = (undefined4)(uVar6 >> 3);
          }
          *ppVar27 = SUB41(uVar13,0);
          ppVar27[1] = SUB41((uint)uVar13 >> 8,0);
          ppVar27[2] = SUB41((uint)uVar13 >> 0x10,0);
          uVar6 = (longlong)ppVar7 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            local_98 = ppVar29;
            (*pcVar2)();
          }
          if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            local_98 = ppVar29;
            (*pcVar2)();
          }
          if (uVar6 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            local_98 = ppVar29;
            (*pcVar2)();
          }
          *ppVar38 = SUB81(uVar6 >> 3,0);
          ppVar38[1] = SUB81(uVar6 >> 0xb,0);
          ppVar38[2] = SUB41((uint)uVar6 >> 0x13,0);
          do {
            ppVar8 = ppVar38;
            if ((CONCAT12(ppVar8[lVar26 + 5],*(undefined2 *)(ppVar8 + lVar35)) == 0) ||
               (ppVar38 = (pas_generic_large_free_heap *)
                          (pas_compact_heap_reservation_base +
                          (ulonglong)
                          (uint)CONCAT12(ppVar8[lVar26 + 5],*(undefined2 *)(ppVar8 + lVar35)) * 8),
               ppVar38 == (pas_generic_large_free_heap *)0x0)) {
              uVar6 = (longlong)ppVar16 - pas_compact_heap_reservation_base;
              if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                local_98 = ppVar29;
                (*pcVar2)();
              }
              if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                local_98 = ppVar29;
                (*pcVar2)();
              }
              if (uVar6 < 8) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                local_98 = ppVar29;
                (*pcVar2)();
              }
              ppVar8[lVar35] = SUB81(uVar6 >> 3,0);
              ppVar8[lVar26 + 4] = SUB81(uVar6 >> 0xb,0);
              ppVar8[lVar26 + 5] = SUB41((uint)uVar6 >> 0x13,0);
              uVar6 = (longlong)ppVar8 - pas_compact_heap_reservation_base;
              if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                local_98 = ppVar29;
                (*pcVar2)();
              }
              if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                local_98 = ppVar29;
                (*pcVar2)();
              }
              if (uVar6 < 8) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                local_98 = ppVar29;
                (*pcVar2)();
              }
              *ppVar16 = SUB81(uVar6 >> 3,0);
              ppVar16[1] = SUB81(uVar6 >> 0xb,0);
              pVar10 = SUB41((uint)uVar6 >> 0x13,0);
              ppVar27 = ppVar16;
              local_98 = ppVar29;
              goto LAB_140da1c93;
            }
            uVar6 = (*(ulonglong *)(ppVar38 + 0x18) & 0xffffffffffff) -
                    (*(ulonglong *)(ppVar38 + 0x10) & 0xffffffffffff);
          } while (uVar4 <= uVar6);
          uVar4 = (longlong)ppVar16 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            local_98 = ppVar29;
            (*pcVar2)();
          }
          if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            local_98 = ppVar29;
            (*pcVar2)();
          }
          if (uVar4 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            local_98 = ppVar29;
            (*pcVar2)();
          }
          ppVar8[lVar35] = SUB81(uVar4 >> 3,0);
          ppVar8[lVar26 + 4] = SUB81(uVar4 >> 0xb,0);
          ppVar8[lVar26 + 5] = SUB41((uint)uVar4 >> 0x13,0);
          uVar4 = (longlong)ppVar8 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            local_98 = ppVar29;
            (*pcVar2)();
          }
          if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            local_98 = ppVar29;
            (*pcVar2)();
          }
          if (uVar4 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            local_98 = ppVar29;
            (*pcVar2)();
          }
          *ppVar16 = SUB81(uVar4 >> 3,0);
          ppVar16[1] = SUB81(uVar4 >> 0xb,0);
          ppVar16[2] = SUB41((uint)uVar4 >> 0x13,0);
          uVar31 = pas_compact_heap_reservation_base;
        }
        ppVar27 = ppVar16 + (longlong)local_88;
      } while ((CONCAT12((ppVar16 + 2)[(longlong)local_88],
                         *(undefined2 *)(ppVar16 + (longlong)local_88)) != 0) &&
              (ppVar8 = (pas_generic_large_free_heap *)
                        (uVar31 + (ulonglong)
                                  (uint)CONCAT12((ppVar16 + 2)[(longlong)local_88],
                                                 *(undefined2 *)(ppVar16 + (longlong)local_88)) * 8)
              , ppVar7 = ppVar16, ppVar8 != (pas_generic_large_free_heap *)0x0));
      if (ppVar38 != (pas_generic_large_free_heap *)0x0) goto LAB_140da163e;
      ppVar38 = (pas_generic_large_free_heap *)0x0;
      uVar13 = 0;
    }
    *ppVar27 = SUB41(uVar13,0);
    ppVar27[1] = SUB41((uint)uVar13 >> 8,0);
    ppVar27[2] = SUB41((uint)uVar13 >> 0x10,0);
    uVar6 = (longlong)ppVar16 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      local_98 = ppVar29;
      (*pcVar2)();
    }
    if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      local_98 = ppVar29;
      (*pcVar2)();
    }
    if (uVar6 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      local_98 = ppVar29;
      (*pcVar2)();
    }
    *ppVar38 = SUB81(uVar6 >> 3,0);
    ppVar38[1] = SUB81(uVar6 >> 0xb,0);
    pVar10 = SUB41((uint)uVar6 >> 0x13,0);
    ppVar27 = ppVar38;
    local_98 = ppVar29;
  }
LAB_140da1c93:
  ppVar27[2] = pVar10;
  if (((uVar42 ^ *(ulonglong *)&(ppVar29->free).end) & 0xffffffffffff) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(ulonglong *)&ppVar29->free = uVar24;
  *(ulonglong *)&(ppVar29->free).end = uVar43;
  *(ulonglong *)&(ppVar29->free).offset_in_type = uVar37;
  *(uint *)&(ppVar29->free).zero_mode = uVar40;
  *(undefined4 *)&(ppVar29->free).field_0x1c = uVar12;
  (ppVar29->tree_node).parent = (uchar  [3])0x0;
  (ppVar29->tree_node).left = (uchar  [3])0x0;
  (ppVar29->tree_node).right.payload[0] = '\0';
  (ppVar29->tree_node).right.payload[1] = '\0';
  (ppVar29->tree_node).right.payload[2] = '\0';
  ppVar28 = (pas_fast_large_free_heap_node *)
            (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)param_1 * 8);
  if (ppVar28 == (pas_fast_large_free_heap_node *)0x0 || *(uint3 *)param_1 == 0) {
    bVar44 = true;
    uVar12 = 0;
    ppVar8 = param_1;
LAB_140da1d9c:
    (ppVar29->tree_node).parent.payload[0] = (uchar)uVar12;
    (ppVar29->tree_node).parent.payload[1] = (uchar)((uint)uVar12 >> 8);
    (ppVar29->tree_node).parent.payload[2] = (uchar)((uint)uVar12 >> 0x10);
    uVar24 = (longlong)ppVar29 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar24) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar24 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar24 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *ppVar8 = SUB81(uVar24 >> 3,0);
    ppVar8[1] = SUB81(uVar24 >> 0xb,0);
    ppVar8[2] = SUB41((uint)uVar24 >> 0x13,0);
  }
  else {
    uVar43 = *(ulonglong *)&ppVar28->free & 0xffffffffffff;
    if (ppVar21 <=
        (pas_fast_large_free_heap_node *)
        ((*(ulonglong *)&(ppVar28->free).end & 0xffffffffffff) - uVar43)) {
      bVar44 = uVar24 < uVar43;
      uVar43 = (ulonglong)(uVar43 <= uVar24);
      lVar26 = uVar43 * 3 + 3;
      uVar3 = CONCAT12((&(ppVar28->tree_node).left)[uVar43].payload[2],
                       *(undefined2 *)(&(ppVar28->tree_node).left)[uVar43].payload);
      ppVar20 = (pas_fast_large_free_heap_node *)
                ((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base);
      if (ppVar20 != (pas_fast_large_free_heap_node *)0x0 && uVar3 != 0) {
        do {
          uVar43 = *(ulonglong *)&ppVar20->free & 0xffffffffffff;
          if ((pas_fast_large_free_heap_node *)
              ((*(ulonglong *)&(ppVar20->free).end & 0xffffffffffff) - uVar43) < ppVar21) {
            ppVar8 = (pas_generic_large_free_heap *)((ppVar28->tree_node).parent.payload + lVar26);
            ppVar21 = ppVar28;
            goto LAB_140da226a;
          }
          uVar6 = (ulonglong)(uVar43 <= uVar24);
          lVar26 = uVar6 * 3 + 3;
          bVar44 = (bool)(uVar24 < uVar43 & bVar44);
          uVar40 = (uint)CONCAT12((&(ppVar20->tree_node).left)[uVar6].payload[2],
                                  *(undefined2 *)(&(ppVar20->tree_node).left)[uVar6].payload);
          ppVar28 = ppVar20;
        } while ((uVar40 != 0) &&
                (ppVar20 = (pas_fast_large_free_heap_node *)
                           (pas_compact_heap_reservation_base + (ulonglong)uVar40 * 8),
                ppVar20 != (pas_fast_large_free_heap_node *)0x0));
      }
      uVar24 = (longlong)ppVar28 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar24) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar24 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar24 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      ppVar8 = (pas_generic_large_free_heap *)((ppVar28->tree_node).parent.payload + lVar26);
      uVar12 = (undefined4)(uVar24 >> 3);
      goto LAB_140da1d9c;
    }
    bVar44 = true;
    ppVar21 = (pas_fast_large_free_heap_node *)0x0;
    ppVar20 = ppVar28;
    ppVar8 = param_1;
LAB_140da226a:
    uVar40 = 0xffffffff;
    if (uVar24 <= uVar43) {
      uVar40 = (uint)(uVar43 != uVar24);
    }
    if (ppVar21 == (pas_fast_large_free_heap_node *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar43 = (longlong)ppVar21 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar43 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar12 = (undefined4)(uVar43 >> 3);
    }
    (ppVar29->tree_node).parent.payload[0] = (uchar)uVar12;
    (ppVar29->tree_node).parent.payload[1] = (uchar)((uint)uVar12 >> 8);
    (ppVar29->tree_node).parent.payload[2] = (uchar)((uint)uVar12 >> 0x10);
    uVar43 = (longlong)ppVar29 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_a0 = uVar24;
    if (uVar43 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    ppVar32 = &(ppVar29->tree_node).left;
    ppVar9 = &(ppVar29->tree_node).right;
    *ppVar8 = SUB81(uVar43 >> 3,0);
    ppVar8[1] = SUB81(uVar43 >> 0xb,0);
    ppVar8[2] = SUB41((uint)uVar43 >> 0x13,0);
    ppVar17 = ppVar32;
    if (-1 < (int)uVar40) {
      ppVar17 = ppVar9;
    }
    uVar43 = (longlong)ppVar20 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar43 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (&(ppVar29->tree_node).left)[-1 < (int)uVar40].payload[0] = (uchar)(uVar43 >> 3);
    ppVar17->payload[1] = (uchar)(uVar43 >> 0xb);
    ppVar17->payload[2] = (uchar)((uint)uVar43 >> 0x13);
    uVar43 = (longlong)ppVar29 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar43 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    bVar44 = (bool)(-1 < (int)uVar40 & bVar44);
    (ppVar20->tree_node).parent.payload[0] = (uchar)(uVar43 >> 3);
    (ppVar20->tree_node).parent.payload[1] = (uchar)(uVar43 >> 0xb);
    if (-1 < (int)uVar40) {
      ppVar9 = ppVar32;
    }
    (ppVar20->tree_node).parent.payload[2] = (uchar)((uint)uVar43 >> 0x13);
    uVar43 = (ulonglong)(uVar40 >> 0x1f);
    uVar3 = CONCAT12((&(ppVar20->tree_node).left)[uVar43].payload[2],
                     *(undefined2 *)(&(ppVar20->tree_node).left)[uVar43].payload);
    uVar33 = (uint)uVar3;
    uVar6 = (ulonglong)(uVar33 * 8);
    ppVar21 = (pas_fast_large_free_heap_node *)(uVar6 + pas_compact_heap_reservation_base);
    if (ppVar21 != (pas_fast_large_free_heap_node *)0x0 && uVar3 != 0) {
      local_b0 = (pas_fast_large_free_heap_node *)(uVar43 * 3 + 3);
      ppVar32 = &(ppVar20->tree_node).left + uVar43;
      bVar45 = -1 < (int)uVar40;
      ppVar28 = ppVar29;
      uVar31 = pas_compact_heap_reservation_base;
      uVar36 = uVar33;
      do {
        uVar43 = *(ulonglong *)&ppVar21->free & 0xffffffffffff;
        uVar11 = (uint)(uVar43 != uVar24);
        if (uVar43 < uVar24) {
          uVar11 = 0xffffffff;
        }
        uVar23 = -uVar11;
        if ((int)uVar40 < 0) {
          uVar23 = uVar11;
        }
        ppVar15 = ppVar21;
        if (0 < (int)uVar23) {
          if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          ppVar9->payload[0] = (uchar)uVar36;
          ppVar9->payload[1] = (uchar)(uVar33 >> 8);
          ppVar9->payload[2] = (uchar)(uVar33 >> 0x10);
          if (ppVar28 == (pas_fast_large_free_heap_node *)0x0) {
            uVar12 = 0;
          }
          else {
            uVar43 = (longlong)ppVar28 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar43 < 8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar12 = (undefined4)(uVar43 >> 3);
          }
          (ppVar21->tree_node).parent.payload[0] = (uchar)uVar12;
          (ppVar21->tree_node).parent.payload[1] = (uchar)((uint)uVar12 >> 8);
          (ppVar21->tree_node).parent.payload[2] = (uchar)((uint)uVar12 >> 0x10);
          if ((int)uVar40 < 0) {
            do {
              ppVar28 = ppVar21;
              uVar3 = CONCAT12((&(ppVar28->tree_node).left)[bVar45].payload[2],
                               *(undefined2 *)(&(ppVar28->tree_node).left)[bVar45].payload);
              uVar33 = (uint)uVar3;
              if (uVar3 == 0) goto LAB_140da2630;
              uVar43 = (ulonglong)(uVar33 * 8);
              ppVar21 = (pas_fast_large_free_heap_node *)
                        (uVar43 + pas_compact_heap_reservation_base);
              if (ppVar21 == (pas_fast_large_free_heap_node *)0x0) goto LAB_140da2630;
            } while (uVar24 < (*(ulonglong *)&ppVar21->free & 0xffffffffffff));
          }
          else {
            do {
              ppVar28 = ppVar21;
              uVar3 = CONCAT12((&(ppVar28->tree_node).left)[bVar45].payload[2],
                               *(undefined2 *)(&(ppVar28->tree_node).left)[bVar45].payload);
              uVar33 = (uint)uVar3;
              if (uVar3 == 0) goto LAB_140da2630;
              uVar43 = (ulonglong)(uVar33 * 8);
              ppVar21 = (pas_fast_large_free_heap_node *)
                        (uVar43 + pas_compact_heap_reservation_base);
              if (ppVar21 == (pas_fast_large_free_heap_node *)0x0) goto LAB_140da2630;
            } while ((*(ulonglong *)&ppVar21->free & 0xffffffffffff) < uVar24);
          }
          if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          ppVar32->payload[0] = (uchar)uVar33;
          ppVar32->payload[1] = (uchar)(uVar33 >> 8);
          ppVar32->payload[2] = (uchar)(uVar33 >> 0x10);
          uVar43 = (longlong)ppVar20 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar43) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((uVar43 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (uVar43 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          ppVar9 = &(ppVar28->tree_node).left + bVar45;
          (ppVar21->tree_node).parent.payload[0] = (uchar)(uVar43 >> 3);
          (ppVar21->tree_node).parent.payload[1] = (uchar)(uVar43 >> 0xb);
          (ppVar21->tree_node).parent.payload[2] = (uchar)((uint)uVar43 >> 0x13);
          bVar44 = false;
          ppVar15 = ppVar21;
          uVar31 = pas_compact_heap_reservation_base;
        }
        uVar1 = *(ushort *)
                 ((local_b0->tree_node).parent.payload +
                 (longlong)(ppVar15->tree_node).parent.payload);
        uVar36 = (uint)uVar1;
        uVar3 = CONCAT12((local_b0->tree_node).parent.payload
                         [(longlong)(ppVar15->tree_node).parent.payload + 2],uVar1);
        uVar33 = (uint)uVar3;
        if (uVar3 == 0) break;
        ppVar32 = (pas_compact_cartesian_tree_node_ptr *)
                  ((local_b0->tree_node).parent.payload +
                  (longlong)(ppVar15->tree_node).parent.payload);
        uVar6 = (ulonglong)(uVar33 * 8);
        ppVar21 = (pas_fast_large_free_heap_node *)(uVar6 + uVar31);
        ppVar20 = ppVar15;
      } while (ppVar21 != (pas_fast_large_free_heap_node *)0x0);
    }
    ppVar9->payload[0] = '\0';
    ppVar9->payload[1] = '\0';
    ppVar9->payload[2] = '\0';
  }
  if (bVar44) {
    uVar24 = (longlong)ppVar29 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar24) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar24 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar24 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    param_1[3] = SUB81(uVar24 >> 3,0);
    param_1[4] = SUB81(uVar24 >> 0xb,0);
    param_1[5] = SUB41((uint)uVar24 >> 0x13,0);
  }
LAB_140da263b:
  if ((local_48 ^ (ulonglong)auStack_d8) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// remove_node @ 140da27d0

void __cdecl remove_node(pas_fast_large_free_heap *param_1,pas_fast_large_free_heap_node *param_2)

{
  pas_fast_large_free_heap *ppVar1;
  code *pcVar2;
  uint3 uVar3;
  pas_fast_large_free_heap_node *ppVar4;
  ulonglong uVar5;
  pas_fast_large_free_heap *ppVar6;
  uchar uVar7;
  uint uVar8;
  pas_fast_large_free_heap_node *ppVar9;
  pas_fast_large_free_heap_node *ppVar10;
  pas_fast_large_free_heap *ppVar11;
  pas_fast_large_free_heap *ppVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  pas_fast_large_free_heap *ppVar16;
  pas_compact_cartesian_tree_node_ptr *ppVar17;
  ulonglong uVar18;
  ulong64 uVar19;
  bool bVar20;
  bool bVar21;
  
  uVar8 = (uint)*(uint3 *)(param_1->tree).minimum.payload;
  ppVar9 = (pas_fast_large_free_heap_node *)0x0;
  if (uVar8 != 0) {
    ppVar9 = (pas_fast_large_free_heap_node *)
             (pas_compact_heap_reservation_base + (ulonglong)uVar8 * 8);
  }
  if (ppVar9 == param_2) {
    uVar3 = *(uint3 *)(param_2->tree_node).right.payload;
    ppVar9 = (pas_fast_large_free_heap_node *)
             ((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base);
    if (ppVar9 == (pas_fast_large_free_heap_node *)0x0 || uVar3 == 0) {
      uVar3 = *(uint3 *)(param_2->tree_node).parent.payload;
      ppVar9 = (pas_fast_large_free_heap_node *)
               ((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base);
      uVar13 = 0;
      ppVar10 = param_2;
      if (ppVar9 != (pas_fast_large_free_heap_node *)0x0 && uVar3 != 0) {
        do {
          ppVar4 = ppVar9;
          uVar8 = (uint)*(uint3 *)(ppVar4->tree_node).right.payload;
          if ((uVar8 == 0) ||
             (ppVar10 !=
              (pas_fast_large_free_heap_node *)
              (pas_compact_heap_reservation_base + (ulonglong)uVar8 * 8))) goto LAB_140da28df;
          uVar8 = (uint)*(uint3 *)(ppVar4->tree_node).parent.payload;
        } while ((uVar8 != 0) &&
                (ppVar9 = (pas_fast_large_free_heap_node *)
                          (pas_compact_heap_reservation_base + (ulonglong)uVar8 * 8),
                ppVar10 = ppVar4, ppVar9 != (pas_fast_large_free_heap_node *)0x0));
      }
    }
    else {
      do {
        ppVar4 = ppVar9;
        uVar8 = (uint)*(uint3 *)(ppVar4->tree_node).left.payload;
        if (uVar8 == 0) break;
        ppVar9 = (pas_fast_large_free_heap_node *)
                 (pas_compact_heap_reservation_base + (ulonglong)uVar8 * 8);
      } while (ppVar9 != (pas_fast_large_free_heap_node *)0x0);
LAB_140da28df:
      uVar15 = (longlong)ppVar4 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar15 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar13 = (undefined4)(uVar15 >> 3);
    }
    (param_1->tree).minimum.payload[0] = (uchar)uVar13;
    (param_1->tree).minimum.payload[1] = (uchar)((uint)uVar13 >> 8);
    (param_1->tree).minimum.payload[2] = (uchar)((uint)uVar13 >> 0x10);
  }
  uVar8 = (uint)*(uint3 *)(param_2->tree_node).parent.payload;
  ppVar16 = (pas_fast_large_free_heap *)0x0;
  ppVar11 = (pas_fast_large_free_heap *)(pas_compact_heap_reservation_base + (ulonglong)uVar8 * 8);
  if (uVar8 == 0) {
    ppVar11 = ppVar16;
  }
  uVar8 = (uint)*(uint3 *)(param_2->tree_node).left.payload;
  ppVar6 = (pas_fast_large_free_heap *)(pas_compact_heap_reservation_base + (ulonglong)uVar8 * 8);
  ppVar12 = ppVar6;
  if (uVar8 == 0) {
    ppVar12 = ppVar16;
  }
  uVar8 = (uint)*(uint3 *)(param_2->tree_node).right.payload;
  ppVar1 = (pas_fast_large_free_heap *)(pas_compact_heap_reservation_base + (ulonglong)uVar8 * 8);
  if (uVar8 != 0) {
    ppVar16 = ppVar1;
  }
  if (ppVar11 != (pas_fast_large_free_heap *)0x0) {
    uVar8 = (uint)*(uint3 *)(ppVar11->tree).minimum.payload;
    ppVar9 = (pas_fast_large_free_heap_node *)0x0;
    if (uVar8 != 0) {
      ppVar9 = (pas_fast_large_free_heap_node *)
               (pas_compact_heap_reservation_base + (ulonglong)uVar8 * 8);
    }
    param_1 = (pas_fast_large_free_heap *)&ppVar11->field_0x6;
    if (ppVar9 == param_2) {
      param_1 = (pas_fast_large_free_heap *)&(ppVar11->tree).minimum;
    }
  }
  if (ppVar12 == (pas_fast_large_free_heap *)0x0) {
    if (ppVar16 == (pas_fast_large_free_heap *)0x0) {
      (param_1->tree).root.payload[0] = '\0';
      (param_1->tree).root.payload[1] = '\0';
      uVar7 = '\0';
    }
    else {
      uVar15 = (longlong)ppVar16 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar15 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      (param_1->tree).root.payload[0] = (uchar)(uVar15 >> 3);
      (param_1->tree).root.payload[1] = (uchar)(uVar15 >> 0xb);
      (param_1->tree).root.payload[2] = (uchar)((uint)uVar15 >> 0x13);
      if (ppVar11 == (pas_fast_large_free_heap *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar15 = (longlong)ppVar11 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar15 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar13 = (undefined4)(uVar15 >> 3);
      }
      *(short *)(ppVar16->tree).root.payload = (short)uVar13;
      uVar7 = (uchar)((uint)uVar13 >> 0x10);
      param_1 = ppVar1;
    }
    goto LAB_140da2e92;
  }
  if (ppVar16 == (pas_fast_large_free_heap *)0x0) {
    uVar15 = (longlong)ppVar12 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar15 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (param_1->tree).root.payload[0] = (uchar)(uVar15 >> 3);
    (param_1->tree).root.payload[1] = (uchar)(uVar15 >> 0xb);
    (param_1->tree).root.payload[2] = (uchar)((uint)uVar15 >> 0x13);
    if (ppVar11 == (pas_fast_large_free_heap *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar15 = (longlong)ppVar11 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar15 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar13 = (undefined4)(uVar15 >> 3);
    }
    *(short *)(ppVar12->tree).root.payload = (short)uVar13;
    uVar7 = (uchar)((uint)uVar13 >> 0x10);
    param_1 = ppVar6;
    goto LAB_140da2e92;
  }
  uVar14 = (ppVar12[1].num_mapped_bytes & 0xffffffffffff) -
           (*(ulonglong *)(ppVar12 + 1) & 0xffffffffffff);
  uVar18 = (ppVar16[1].num_mapped_bytes & 0xffffffffffff) -
           (*(ulonglong *)(ppVar16 + 1) & 0xffffffffffff);
  uVar15 = uVar18;
  ppVar6 = ppVar16;
  if (uVar14 < uVar18) {
    uVar15 = uVar14;
    ppVar6 = ppVar12;
    ppVar12 = ppVar16;
  }
  uVar5 = (longlong)ppVar12 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar5 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar5 < 8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  (param_1->tree).root.payload[0] = (uchar)(uVar5 >> 3);
  (param_1->tree).root.payload[1] = (uchar)(uVar5 >> 0xb);
  (param_1->tree).root.payload[2] = (uchar)((uint)uVar5 >> 0x13);
  if (ppVar11 == (pas_fast_large_free_heap *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar5 = (longlong)ppVar11 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar5 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar5 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar13 = (undefined4)(uVar5 >> 3);
  }
  bVar20 = uVar18 <= uVar14;
  (ppVar12->tree).root.payload[0] = (uchar)uVar13;
  (ppVar12->tree).root.payload[1] = (uchar)((uint)uVar13 >> 8);
  (ppVar12->tree).root.payload[2] = (uchar)((uint)uVar13 >> 0x10);
  ppVar17 = &(ppVar12->tree).minimum + bVar20;
  uVar8 = (uint)CONCAT12((&(ppVar12->tree).minimum)[bVar20].payload[2],
                         *(undefined2 *)(&(ppVar12->tree).minimum)[bVar20].payload);
  ppVar11 = (pas_fast_large_free_heap *)(pas_compact_heap_reservation_base + (ulonglong)uVar8 * 8);
  if (ppVar11 == (pas_fast_large_free_heap *)0x0 || uVar8 == 0) {
    uVar15 = (longlong)ppVar6 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar15) {
LAB_140da2de9:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
LAB_140da2bc4:
    if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar15 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar13 = (undefined4)(uVar15 >> 3);
  }
  else {
    bVar21 = uVar14 < uVar18;
    ppVar16 = ppVar12;
    uVar19 = pas_compact_heap_reservation_base;
    do {
      ppVar12 = ppVar11;
      uVar14 = (ppVar12[1].num_mapped_bytes & 0xffffffffffff) -
               (*(ulonglong *)(ppVar12 + 1) & 0xffffffffffff);
      if (uVar14 < uVar15) {
        if (ppVar6 == (pas_fast_large_free_heap *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar15 = (longlong)ppVar6 - uVar19;
          if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (uVar15 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar13 = (undefined4)(uVar15 >> 3);
        }
        ppVar17->payload[0] = (uchar)uVar13;
        ppVar17->payload[1] = (uchar)((uint)uVar13 >> 8);
        ppVar17->payload[2] = (uchar)((uint)uVar13 >> 0x10);
        uVar15 = (longlong)ppVar16 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar15 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        (ppVar6->tree).root.payload[0] = (uchar)(uVar15 >> 3);
        (ppVar6->tree).root.payload[1] = (uchar)(uVar15 >> 0xb);
        (ppVar6->tree).root.payload[2] = (uchar)((uint)uVar15 >> 0x13);
        do {
          ppVar11 = ppVar6;
          uVar8 = (uint)CONCAT12((&(ppVar11->tree).minimum)[bVar21].payload[2],
                                 *(undefined2 *)(&(ppVar11->tree).minimum)[bVar21].payload);
          if ((uVar8 == 0) ||
             (ppVar6 = (pas_fast_large_free_heap *)
                       (pas_compact_heap_reservation_base + (ulonglong)uVar8 * 8),
             ppVar6 == (pas_fast_large_free_heap *)0x0)) {
            uVar15 = (longlong)ppVar12 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar15 < 8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            (&(ppVar11->tree).minimum)[bVar21].payload[0] = (uchar)(uVar15 >> 3);
            (&(ppVar11->tree).minimum)[bVar21].payload[1] = (uchar)(uVar15 >> 0xb);
            (&(ppVar11->tree).minimum)[bVar21].payload[2] = (uchar)((uint)uVar15 >> 0x13);
            uVar15 = (longlong)ppVar11 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar15 < 8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            (ppVar12->tree).root.payload[0] = (uchar)(uVar15 >> 3);
            (ppVar12->tree).root.payload[1] = (uchar)(uVar15 >> 0xb);
            uVar7 = (uchar)((uint)uVar15 >> 0x13);
            param_1 = ppVar12;
            goto LAB_140da2e92;
          }
          uVar15 = (ppVar6[1].num_mapped_bytes & 0xffffffffffff) -
                   (*(ulonglong *)(ppVar6 + 1) & 0xffffffffffff);
        } while (uVar14 <= uVar15);
        uVar14 = (longlong)ppVar12 - pas_compact_heap_reservation_base;
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
        (&(ppVar11->tree).minimum)[bVar21].payload[0] = (uchar)(uVar14 >> 3);
        (&(ppVar11->tree).minimum)[bVar21].payload[1] = (uchar)(uVar14 >> 0xb);
        (&(ppVar11->tree).minimum)[bVar21].payload[2] = (uchar)((uint)uVar14 >> 0x13);
        uVar14 = (longlong)ppVar11 - pas_compact_heap_reservation_base;
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
        (ppVar12->tree).root.payload[0] = (uchar)(uVar14 >> 3);
        (ppVar12->tree).root.payload[1] = (uchar)(uVar14 >> 0xb);
        (ppVar12->tree).root.payload[2] = (uchar)((uint)uVar14 >> 0x13);
        uVar19 = pas_compact_heap_reservation_base;
      }
      ppVar17 = &(ppVar12->tree).minimum + bVar20;
      uVar8 = (uint)CONCAT12((&(ppVar12->tree).minimum)[bVar20].payload[2],
                             *(undefined2 *)(&(ppVar12->tree).minimum)[bVar20].payload);
    } while ((uVar8 != 0) &&
            (ppVar11 = (pas_fast_large_free_heap *)(uVar19 + (ulonglong)uVar8 * 8),
            ppVar16 = ppVar12, ppVar11 != (pas_fast_large_free_heap *)0x0));
    if (ppVar6 != (pas_fast_large_free_heap *)0x0) {
      uVar15 = (longlong)ppVar6 - uVar19;
      if (pas_compact_heap_reservation_size <= uVar15) goto LAB_140da2de9;
      goto LAB_140da2bc4;
    }
    ppVar6 = (pas_fast_large_free_heap *)0x0;
    uVar13 = 0;
  }
  ppVar17->payload[0] = (uchar)uVar13;
  ppVar17->payload[1] = (uchar)((uint)uVar13 >> 8);
  ppVar17->payload[2] = (uchar)((uint)uVar13 >> 0x10);
  uVar15 = (longlong)ppVar12 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar15 < 8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  (ppVar6->tree).root.payload[0] = (uchar)(uVar15 >> 3);
  (ppVar6->tree).root.payload[1] = (uchar)(uVar15 >> 0xb);
  uVar7 = (uchar)((uint)uVar15 >> 0x13);
  param_1 = ppVar6;
LAB_140da2e92:
  (param_1->tree).root.payload[2] = uVar7;
  pas_utility_heap_deallocate(param_2);
  return;
}

// insert_node @ 140da2f10

void __cdecl insert_node(pas_fast_large_free_heap *param_1,pas_large_free *param_2)

{
  ushort uVar1;
  bool bVar2;
  code *pcVar3;
  longlong lVar4;
  uint3 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  pas_fast_large_free_heap *ppVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulong64 uVar27;
  undefined8 *puVar28;
  uint uVar29;
  
  if ((*(ulonglong *)param_2 & 0xffffffffffff) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((*(ulonglong *)&param_2->end & 0xffffffffffff) <= (*(ulonglong *)param_2 & 0xffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  puVar9 = pas_utility_heap_allocate(0x30,"pas_fast_large_free_heap_node");
  uVar6 = *(undefined8 *)&param_2->end;
  uVar7 = *(undefined8 *)&param_2->offset_in_type;
  uVar8 = *(undefined8 *)&param_2->zero_mode;
  puVar9[2] = *(undefined8 *)param_2;
  puVar9[3] = uVar6;
  puVar9[4] = uVar7;
  puVar9[5] = uVar8;
  uVar10 = *(ulonglong *)&param_2->end;
  uVar13 = *(ulonglong *)param_2 & 0xffffffffffff;
  *(undefined1 *)(puVar9 + 1) = 0;
  *puVar9 = 0;
  uVar14 = (uint)*(uint3 *)(param_1->tree).root.payload;
  puVar17 = (undefined8 *)(pas_compact_heap_reservation_base + (ulonglong)uVar14 * 8);
  if (puVar17 == (undefined8 *)0x0 || uVar14 == 0) {
    bVar2 = true;
    uVar15 = 0;
    ppVar18 = param_1;
  }
  else {
    uVar10 = (uVar10 & 0xffffffffffff) - uVar13;
    uVar25 = puVar17[2] & 0xffffffffffff;
    if ((puVar17[3] & 0xffffffffffff) - uVar25 < uVar10) {
      bVar2 = true;
      puVar12 = (undefined8 *)0x0;
      ppVar18 = param_1;
LAB_140da316a:
      uVar10 = 0xffffffff;
      if (uVar13 <= uVar25) {
        uVar10 = (ulonglong)(uVar25 != uVar13);
      }
      iVar21 = (int)uVar10;
      if (puVar12 == (undefined8 *)0x0) {
        uVar15 = 0;
      }
      else {
        uVar25 = (longlong)puVar12 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar25) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((uVar25 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar25 < 8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar15 = (undefined4)(uVar25 >> 3);
      }
      *(char *)puVar9 = (char)uVar15;
      *(char *)((longlong)puVar9 + 1) = (char)((uint)uVar15 >> 8);
      *(char *)((longlong)puVar9 + 2) = (char)((uint)uVar15 >> 0x10);
      uVar25 = (longlong)puVar9 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar25) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar25 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar25 < 8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      (ppVar18->tree).root.payload[0] = (uchar)(uVar25 >> 3);
      (ppVar18->tree).root.payload[1] = (uchar)(uVar25 >> 0xb);
      (ppVar18->tree).root.payload[2] = (uchar)((uint)uVar25 >> 0x13);
      puVar19 = (undefined2 *)((longlong)puVar9 + 3);
      if (-1 < iVar21) {
        puVar19 = (undefined2 *)((longlong)puVar9 + 6);
      }
      uVar25 = (longlong)puVar17 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar25) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar25 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar25 < 8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *(char *)((longlong)puVar9 + (ulonglong)(-1 < iVar21) * 3 + 3) = (char)(uVar25 >> 3);
      *(char *)((longlong)puVar19 + 1) = (char)(uVar25 >> 0xb);
      *(char *)(puVar19 + 1) = (char)((uint)uVar25 >> 0x13);
      uVar25 = (longlong)puVar9 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar25) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar25 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar25 < 8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar2 = (bool)(-1 < iVar21 & bVar2);
      *(char *)puVar17 = (char)(uVar25 >> 3);
      *(char *)((longlong)puVar17 + 1) = (char)(uVar25 >> 0xb);
      puVar19 = (undefined2 *)((longlong)puVar9 + 6);
      if (-1 < iVar21) {
        puVar19 = (undefined2 *)((longlong)puVar9 + 3);
      }
      *(char *)((longlong)puVar17 + 2) = (char)((uint)uVar25 >> 0x13);
      lVar23 = (uVar10 >> 0x1f) * 3;
      uVar5 = CONCAT12(*(undefined1 *)((longlong)puVar17 + lVar23 + 5),
                       *(undefined2 *)((longlong)puVar17 + lVar23 + 3));
      uVar14 = (uint)uVar5;
      uVar25 = (ulonglong)(uVar14 * 8);
      if ((undefined8 *)(uVar25 + pas_compact_heap_reservation_base) != (undefined8 *)0x0 &&
          uVar5 != 0) {
        lVar4 = (uVar10 >> 0x1f) * 3;
        lVar11 = lVar4 + 3;
        puVar20 = (undefined2 *)((longlong)puVar17 + lVar23 + 3);
        lVar23 = (ulonglong)(-1 < iVar21) * 3;
        lVar26 = lVar23 + 3;
        puVar12 = puVar9;
        puVar28 = (undefined8 *)(uVar25 + pas_compact_heap_reservation_base);
        uVar27 = pas_compact_heap_reservation_base;
        uVar24 = uVar14;
        do {
          puVar16 = puVar28;
          uVar22 = (uint)((puVar16[2] & 0xffffffffffff) != uVar13);
          if ((puVar16[2] & 0xffffffffffff) < uVar13) {
            uVar22 = 0xffffffff;
          }
          uVar29 = -uVar22;
          if (iVar21 < 0) {
            uVar29 = uVar22;
          }
          if (0 < (int)uVar29) {
            if (pas_compact_heap_reservation_size <= uVar25) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            *(char *)puVar19 = (char)uVar24;
            *(char *)((longlong)puVar19 + 1) = (char)(uVar14 >> 8);
            *(char *)(puVar19 + 1) = (char)(uVar14 >> 0x10);
            if (puVar12 == (undefined8 *)0x0) {
              uVar15 = 0;
            }
            else {
              uVar10 = (longlong)puVar12 - pas_compact_heap_reservation_base;
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
              uVar15 = (undefined4)(uVar10 >> 3);
            }
            *(char *)puVar16 = (char)uVar15;
            *(char *)((longlong)puVar16 + 1) = (char)((uint)uVar15 >> 8);
            *(char *)((longlong)puVar16 + 2) = (char)((uint)uVar15 >> 0x10);
            if (iVar21 < 0) {
              do {
                puVar12 = puVar16;
                uVar5 = CONCAT12(*(undefined1 *)((longlong)puVar12 + lVar23 + 5),
                                 *(undefined2 *)((longlong)puVar12 + lVar26));
                uVar14 = (uint)uVar5;
                if (uVar5 == 0) goto LAB_140da3529;
                uVar10 = (ulonglong)(uVar14 * 8);
                puVar16 = (undefined8 *)(uVar10 + pas_compact_heap_reservation_base);
                if (puVar16 == (undefined8 *)0x0) goto LAB_140da3529;
              } while (uVar13 < (puVar16[2] & 0xffffffffffff));
            }
            else {
              do {
                puVar12 = puVar16;
                uVar5 = CONCAT12(*(undefined1 *)((longlong)puVar12 + lVar23 + 5),
                                 *(undefined2 *)((longlong)puVar12 + lVar26));
                uVar14 = (uint)uVar5;
                if (uVar5 == 0) {
LAB_140da3529:
                  *puVar20 = 0;
                  *(undefined1 *)(puVar20 + 1) = 0;
                  return;
                }
                uVar10 = (ulonglong)(uVar14 * 8);
                puVar16 = (undefined8 *)(uVar10 + pas_compact_heap_reservation_base);
                if (puVar16 == (undefined8 *)0x0) goto LAB_140da3529;
              } while ((puVar16[2] & 0xffffffffffff) < uVar13);
            }
            if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            *(char *)puVar20 = (char)uVar14;
            *(char *)((longlong)puVar20 + 1) = (char)(uVar14 >> 8);
            *(char *)(puVar20 + 1) = (char)(uVar14 >> 0x10);
            uVar10 = (longlong)puVar17 - pas_compact_heap_reservation_base;
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
            puVar19 = (undefined2 *)((longlong)puVar12 + lVar26);
            *(char *)puVar16 = (char)(uVar10 >> 3);
            *(char *)((longlong)puVar16 + 1) = (char)(uVar10 >> 0xb);
            *(char *)((longlong)puVar16 + 2) = (char)((uint)uVar10 >> 0x13);
            bVar2 = false;
            uVar27 = pas_compact_heap_reservation_base;
          }
          uVar1 = *(ushort *)((longlong)puVar16 + lVar11);
          uVar24 = (uint)uVar1;
          uVar5 = CONCAT12(*(undefined1 *)((longlong)puVar16 + lVar4 + 5),uVar1);
          uVar14 = (uint)uVar5;
          if (uVar5 == 0) break;
          puVar20 = (undefined2 *)((longlong)puVar16 + lVar11);
          uVar25 = (ulonglong)(uVar14 * 8);
          puVar28 = (undefined8 *)(uVar25 + uVar27);
          puVar17 = puVar16;
        } while ((undefined8 *)(uVar25 + uVar27) != (undefined8 *)0x0);
      }
      *puVar19 = 0;
      *(undefined1 *)(puVar19 + 1) = 0;
      goto joined_r0x000140da3324;
    }
    bVar2 = uVar13 < uVar25;
    lVar23 = (ulonglong)(uVar25 <= uVar13) * 3 + 3;
    lVar4 = (ulonglong)(uVar25 <= uVar13) * 3;
    uVar5 = CONCAT12(*(undefined1 *)((longlong)puVar17 + lVar4 + 5),
                     *(undefined2 *)((longlong)puVar17 + lVar4 + 3));
    puVar28 = (undefined8 *)((ulonglong)uVar5 * 8 + pas_compact_heap_reservation_base);
    puVar12 = puVar17;
    if (puVar28 != (undefined8 *)0x0 && uVar5 != 0) {
      do {
        puVar17 = puVar28;
        uVar25 = puVar17[2] & 0xffffffffffff;
        if ((puVar17[3] & 0xffffffffffff) - uVar25 < uVar10) {
          ppVar18 = (pas_fast_large_free_heap *)(lVar23 + (longlong)puVar12);
          goto LAB_140da316a;
        }
        lVar23 = (ulonglong)(uVar25 <= uVar13) * 3 + 3;
        lVar4 = (ulonglong)(uVar25 <= uVar13) * 3;
        bVar2 = (bool)(uVar13 < uVar25 & bVar2);
        uVar14 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar17 + lVar4 + 5),
                                *(undefined2 *)((longlong)puVar17 + lVar4 + 3));
      } while ((uVar14 != 0) &&
              (puVar28 = (undefined8 *)(pas_compact_heap_reservation_base + (ulonglong)uVar14 * 8),
              puVar12 = puVar17, puVar28 != (undefined8 *)0x0));
    }
    uVar10 = (longlong)puVar17 - pas_compact_heap_reservation_base;
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
    ppVar18 = (pas_fast_large_free_heap *)((longlong)puVar17 + lVar23);
    uVar15 = (undefined4)(uVar10 >> 3);
  }
  *(char *)puVar9 = (char)uVar15;
  *(char *)((longlong)puVar9 + 1) = (char)((uint)uVar15 >> 8);
  *(char *)((longlong)puVar9 + 2) = (char)((uint)uVar15 >> 0x10);
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
  (ppVar18->tree).root.payload[0] = (uchar)(uVar10 >> 3);
  (ppVar18->tree).root.payload[1] = (uchar)(uVar10 >> 0xb);
  (ppVar18->tree).root.payload[2] = (uchar)((uint)uVar10 >> 0x13);
joined_r0x000140da3324:
  if (bVar2) {
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
    (param_1->tree).minimum.payload[0] = (uchar)(uVar10 >> 3);
    (param_1->tree).minimum.payload[1] = (uchar)(uVar10 >> 0xb);
    (param_1->tree).minimum.payload[2] = (uchar)((uint)uVar10 >> 0x13);
  }
  return;
}

// get_x_key_callback @ 140da3590

void * __cdecl get_x_key_callback(pas_cartesian_tree_node *param_1)

{
  return (void *)(*(ulonglong *)(param_1[1].right.payload + 1) & 0xffffffffffff);
}

// get_y_key_callback @ 140da35b0

void * __cdecl get_y_key_callback(pas_cartesian_tree_node *param_1)

{
  return (void *)((*(ulonglong *)&param_1[2].right & 0xffffffffffff) -
                 (*(ulonglong *)(param_1[1].right.payload + 1) & 0xffffffffffff));
}

// key_compare_callback @ 140da35d0

int __cdecl key_compare_callback(void *param_1,void *param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 <= param_1) {
    uVar1 = (uint)(param_1 != param_2);
  }
  return uVar1;
}

// pas_cartesian_tree_validate_recurse @ 140da35f0

void __cdecl
pas_cartesian_tree_validate_recurse
          (pas_cartesian_tree_node *param_1,pas_cartesian_tree_config *param_2,
          pas_cartesian_tree_node *param_3,pas_cartesian_tree_node *param_4)

{
  _func___cdecl_int_void_ptr_void_ptr *p_Var1;
  code *pcVar2;
  uint3 uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  pas_cartesian_tree_node *ppVar8;
  pas_cartesian_tree_node *ppVar9;
  uint uVar10;
  pas_cartesian_tree_node *ppVar11;
  pas_cartesian_tree_node *ppVar12;
  
  do {
    ppVar9 = param_1;
    if (param_3 != (pas_cartesian_tree_node *)0x0) {
      p_Var1 = param_2->x_compare;
      pvVar6 = (*param_2->get_x_key)(param_3);
      pvVar7 = (*param_2->get_x_key)(ppVar9);
      iVar4 = (*p_Var1)(pvVar7,pvVar6);
      if (iVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    if (param_4 != (pas_cartesian_tree_node *)0x0) {
      p_Var1 = param_2->x_compare;
      pvVar6 = (*param_2->get_x_key)(param_4);
      pvVar7 = (*param_2->get_x_key)(ppVar9);
      iVar4 = (*p_Var1)(pvVar7,pvVar6);
      if (0 < iVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    uVar5 = (uint)*(uint3 *)(ppVar9->parent).payload;
    uVar10 = (uint)*(uint3 *)(ppVar9->left).payload;
    ppVar11 = (pas_cartesian_tree_node *)(pas_compact_heap_reservation_base + (ulonglong)uVar10 * 8)
    ;
    if (uVar10 == 0) {
      ppVar11 = (pas_cartesian_tree_node *)0x0;
    }
    uVar10 = (uint)*(uint3 *)(ppVar9->right).payload;
    param_1 = (pas_cartesian_tree_node *)(pas_compact_heap_reservation_base + (ulonglong)uVar10 * 8)
    ;
    ppVar12 = param_1;
    if (uVar10 == 0) {
      ppVar12 = (pas_cartesian_tree_node *)0x0;
    }
    ppVar8 = (pas_cartesian_tree_node *)(pas_compact_heap_reservation_base + (ulonglong)uVar5 * 8);
    if (ppVar8 != (pas_cartesian_tree_node *)0x0 && uVar5 != 0) {
      p_Var1 = param_2->y_compare;
      pvVar6 = (*param_2->get_y_key)(ppVar9);
      pvVar7 = (*param_2->get_y_key)(ppVar8);
      iVar4 = (*p_Var1)(pvVar7,pvVar6);
      if (iVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    if (ppVar11 != (pas_cartesian_tree_node *)0x0) {
      uVar3 = *(uint3 *)(ppVar11->parent).payload;
      ppVar8 = (pas_cartesian_tree_node *)0x0;
      if (uVar3 != 0) {
        ppVar8 = (pas_cartesian_tree_node *)((uint)uVar3 * 8 + pas_compact_heap_reservation_base);
      }
      if (ppVar8 != ppVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pas_cartesian_tree_validate_recurse(ppVar11,param_2,param_3,ppVar9);
    }
    if (ppVar12 == (pas_cartesian_tree_node *)0x0) {
      return;
    }
    uVar3 = *(uint3 *)(ppVar12->parent).payload;
    ppVar11 = (pas_cartesian_tree_node *)0x0;
    if (uVar3 != 0) {
      ppVar11 = (pas_cartesian_tree_node *)((uint)uVar3 * 8 + pas_compact_heap_reservation_base);
    }
    param_3 = ppVar9;
  } while (ppVar11 == ppVar9);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


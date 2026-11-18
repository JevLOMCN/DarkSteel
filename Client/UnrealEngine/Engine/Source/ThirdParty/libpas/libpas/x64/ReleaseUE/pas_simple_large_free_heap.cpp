// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 11

// pas_simple_large_free_heap_construct @ 140d87f20

void __cdecl pas_simple_large_free_heap_construct(pas_simple_large_free_heap *param_1)

{
  param_1->free_list_capacity = 0;
  param_1->num_mapped_bytes = 0;
  param_1->free_list = (pas_large_free *)0x0;
  param_1->free_list_size = 0;
  return;
}

// pas_simple_large_free_heap_try_allocate @ 140d87f40

pas_allocation_result * __cdecl
pas_simple_large_free_heap_try_allocate
          (pas_allocation_result *__return_storage_ptr__,pas_simple_large_free_heap *param_1,
          ulong64 param_2,pas_alignment *param_3,pas_large_free_heap_config *param_4)

{
  try_allocate_without_fixing
            (__return_storage_ptr__,param_1,param_2,(pas_alignment *)param_3->alignment,
             (pas_large_free_heap_config *)param_3->alignment_begin);
  fix_free_list_if_necessary(param_1,param_4);
  return __return_storage_ptr__;
}

// try_allocate_without_fixing @ 140d87f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Heritage AFTER dead removal. Example location: r0x000154def460 : 0x000140d88113 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

pas_allocation_result * __cdecl
try_allocate_without_fixing
          (pas_allocation_result *__return_storage_ptr__,pas_simple_large_free_heap *param_1,
          ulong64 param_2,pas_alignment *param_3,pas_large_free_heap_config *param_4)

{
  pas_large_free *ppVar1;
  code *pcVar2;
  undefined2 uVar3;
  uint6 uVar4;
  undefined2 uVar5;
  uint6 uVar6;
  undefined2 uVar7;
  byte bVar8;
  undefined7 uVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined1 *puVar15;
  pas_zero_mode pVar16;
  BOOLEAN BVar17;
  pas_allocation_result *ppVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  pas_large_free_heap_config *ppVar21;
  pas_large_free_heap_config *ppVar22;
  pas_large_free *ppVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  pas_large_free_heap_config *ppVar28;
  char cVar29;
  longlong lVar30;
  pas_large_free_heap_config *ppVar31;
  pas_zero_mode pVar32;
  uint uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulong64 uVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  pas_large_free *ppVar42;
  ulong64 uVar43;
  pas_zero_mode pVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong lVar47;
  ulonglong uVar48;
  undefined1 *puVar49;
  ulonglong uVar50;
  pas_large_free_heap_config *ppVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  uint uVar54;
  ulonglong uVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  ulonglong *in_stack_00000030;
  undefined1 auStackY_1c8 [32];
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulong64 local_128;
  ulong64 local_120;
  ulonglong local_118;
  ulong64 local_110;
  uint local_fc;
  ulonglong local_f8;
  pas_large_free local_e8;
  pas_large_free local_c8;
  pas_large_free local_a8;
  pas_allocation_result *local_80;
  
  local_80 = (pas_allocation_result *)(__security_cookie.value ^ (ulonglong)auStackY_1c8);
  if (param_2 == 0) {
    __return_storage_ptr__->did_succeed = true;
    __return_storage_ptr__->zero_mode = pas_zero_mode_is_all_zero;
    __return_storage_ptr__->begin = 0;
    if (((ulonglong)local_80 ^ (ulonglong)auStackY_1c8) == __security_cookie.value) {
      return local_80;
    }
    goto LAB_140d887d2;
  }
  puVar40 = (undefined1 *)((longlong)&param_3[-1].alignment_begin + 7);
  if ((undefined1 *)((ulonglong)param_3 ^ (ulonglong)puVar40) <= puVar40) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_3 <= param_4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  BVar17 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  dVar14 = _UNK_1531e94a8;
  dVar13 = ___xmm_45300000000000004330000000000000;
  uVar12 = __xmm_00000000000000004530000043300000._4_4_;
  uVar11 = (undefined4)__xmm_00000000000000004530000043300000;
  dVar10 = __real_3ff4cccccccccccd;
  if (BVar17 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pas_simple_large_free_heap_num_find_first_calls =
       pas_simple_large_free_heap_num_find_first_calls + 1;
  if (param_1->free_list_size == 0) {
LAB_140d88f63:
    local_a8._8_8_ = param_4;
    local_a8._0_8_ = param_3;
    (*(code *)in_stack_00000030[2])(&local_e8,param_2,&local_a8,in_stack_00000030[3]);
    uVar63 = local_e8._24_8_;
    uVar56 = local_e8._16_8_;
    uVar39 = local_e8._0_8_;
    if (local_e8._0_8_ == 0) {
      __return_storage_ptr__->did_succeed = false;
      __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
      __return_storage_ptr__->begin = 0;
      if (((ulonglong)local_80 ^ (ulonglong)auStackY_1c8) == __security_cookie.value) {
        return __return_storage_ptr__;
      }
      goto LAB_140d887d2;
    }
    if (local_e8._8_8_ != param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (pas_zero_mode_is_all_zero < (pas_zero_mode)local_c8.offset_in_type) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar48 = param_1->free_list_size;
    if (uVar48 != 0) {
      uVar19 = param_1->free_list_capacity;
      if ((pas_manually_decommittable_large_free_heap *)param_1 == &pas_bootstrap_free_heap) {
        uVar35 = 0;
        ppVar23 = pas_bootstrap_free_heap.private_base.free_list;
        do {
          if (uVar35 < uVar19) {
            uVar20 = *(ulonglong *)&ppVar23->end;
          }
          else {
            if (3 < uVar35 - uVar19) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar20 = *(ulonglong *)&bootstrap_free_list[uVar35 - uVar19].end;
          }
          if ((uVar20 & 0xffffffffffff) == local_e8._16_8_) goto LAB_140d890ac;
          uVar35 = uVar35 + 1;
          ppVar23 = ppVar23 + 1;
        } while (uVar48 != uVar35);
      }
      else {
        lVar47 = 8;
        uVar35 = 0;
        do {
          if (uVar19 == uVar35) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((*(ulonglong *)((longlong)&param_1->free_list->begin + lVar47) & 0xffffffffffff) ==
              local_e8._16_8_) goto LAB_140d890ac;
          uVar35 = uVar35 + 1;
          lVar47 = lVar47 + 0x20;
        } while (uVar48 != uVar35);
      }
    }
    goto LAB_140d89ab9;
  }
  if ((pas_manually_decommittable_large_free_heap *)param_1 == &pas_bootstrap_free_heap) {
    lVar47 = 0;
    local_148 = 0;
    local_128 = 0;
    uVar39 = 0;
    local_138 = 0;
    local_f8 = 0;
    local_130 = 0;
    local_160 = 0;
    local_168 = 0;
    local_110 = 0;
    local_120 = 0;
    local_140 = 0;
    local_fc = 0;
    uVar48 = 0;
    do {
      pas_simple_large_free_heap_num_find_first_nodes_considered =
           pas_simple_large_free_heap_num_find_first_nodes_considered + 1;
      if (uVar48 < pas_bootstrap_free_heap.private_base.free_list_capacity) {
        ppVar23 = (pas_large_free *)
                  ((longlong)&(pas_bootstrap_free_heap.private_base.free_list)->begin + lVar47);
      }
      else {
        if (3 < uVar48 - pas_bootstrap_free_heap.private_base.free_list_capacity) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        ppVar23 = bootstrap_free_list +
                  (uVar48 - pas_bootstrap_free_heap.private_base.free_list_capacity);
      }
      uVar19 = *(ulonglong *)ppVar23;
      uVar35 = *(ulonglong *)&ppVar23->offset_in_type;
      uVar20 = *(ulonglong *)&ppVar23->zero_mode;
      uVar48 = uVar48 + 1;
      uVar37 = uVar19 & 0xffffffffffff;
      if ((local_168 == 0) || (uVar37 <= uVar39)) {
        uVar34 = *(ulonglong *)&ppVar23->end & 0xffffffffffff;
        uVar52 = uVar34 - uVar37;
        if (param_2 <= uVar52) {
          uVar45 = uVar35 & 0xffffffffffff;
          if (uVar45 == 0) {
            if (((ulonglong)puVar40 & uVar37 - (longlong)param_4) == 0) {
              uVar26 = in_stack_00000030[1] - 1;
              if ((in_stack_00000030[1] ^ uVar26) <= uVar26) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if ((uVar26 & param_2) == 0) {
                uVar26 = *in_stack_00000030;
                if ((param_2 | uVar26) >> 0x20 == 0) {
                  uVar26 = (param_2 & 0xffffffff) % (uVar26 & 0xffffffff);
                }
                else {
                  uVar26 = param_2 % uVar26;
                }
                uVar53 = uVar19 + param_2 & 0xffffffffffff;
                uVar26 = uVar26 & 0xffffffffffff;
                uVar55 = *(ulonglong *)&ppVar23->end & 0xffff000000000000 | uVar37;
                local_118 = uVar20;
                if (uVar53 != uVar37) {
LAB_140d8847b:
                  if (uVar37 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  if ((local_168 == 0) || (uVar37 < uVar39)) {
                    local_180._0_1_ = (byte)uVar20;
                    local_148 = uVar20 & 0xff;
                    local_138 = local_118;
                    local_fc = (uint)(byte)local_180;
                    uVar39 = uVar37;
                    local_168 = uVar48;
                    local_160 = uVar19;
                    local_140 = uVar26;
                    local_130 = uVar55;
                    local_128 = uVar53;
                    local_120 = uVar34;
                    local_110 = uVar53;
                    local_f8 = uVar35;
                  }
                }
              }
              else {
                uVar35 = uVar52;
                uVar53 = uVar37;
                if (uVar34 != uVar37) goto LAB_140d88278;
              }
            }
            else if (uVar34 != uVar37) {
              uVar35 = *in_stack_00000030;
              uVar26 = uVar37;
              goto LAB_140d881f4;
            }
          }
          else if (uVar34 != uVar37) {
            uVar35 = *in_stack_00000030;
            uVar26 = (uVar35 - uVar45) + uVar37;
            if (uVar26 < uVar34) {
LAB_140d881f4:
              pas_coalign((pas_coalign_result *)&local_e8,uVar26,uVar35,(ulong64)param_4,
                          (ulong64)param_3);
              if (((local_e8._0_8_ & 1) != 0) &&
                 (uVar35 = uVar34 - local_e8._8_8_, uVar53 = local_e8._8_8_,
                 (ulonglong)local_e8._8_8_ <= uVar34 && uVar34 - local_e8._8_8_ != 0)) {
LAB_140d88278:
                if (param_2 <= uVar35) {
                  uVar26 = uVar45 + (uVar53 - uVar37);
                  uVar35 = *in_stack_00000030;
                  if ((uVar26 | uVar35) >> 0x20 == 0) {
                    uVar26 = (uVar26 & 0xffffffff) % (uVar35 & 0xffffffff);
                  }
                  else {
                    uVar26 = uVar26 % uVar35;
                  }
                  uVar55 = (uVar53 - uVar37) + uVar19 & 0xffffffffffff;
                  uVar26 = ((uVar53 + param_2) - uVar55) + (uVar26 & 0xffffffffffff);
                  if ((uVar26 | uVar35) >> 0x20 == 0) {
                    uVar26 = (uVar26 & 0xffffffff) % (uVar35 & 0xffffffff);
                  }
                  else {
                    uVar26 = uVar26 % uVar35;
                  }
                  uVar19 = in_stack_00000030[1];
                  if ((uVar19 ^ uVar19 - 1) <= uVar19 - 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  lVar30 = uVar55 - uVar37;
                  if (lVar30 == 0) {
LAB_140d88367:
                    lVar24 = 0;
                  }
                  else {
                    if (uVar45 != 0) {
                      uVar27 = (uVar35 - uVar45) + uVar37;
                      if (uVar27 < uVar55) goto LAB_140d8858d;
                      goto LAB_140d88367;
                    }
                    uVar27 = uVar37;
                    lVar24 = lVar30;
                    if ((uVar19 + 0xffffffffffff & uVar37) != 0) {
LAB_140d8858d:
                      pas_coalign((pas_coalign_result *)&local_e8,uVar27,uVar35,0,uVar19);
                      if ((local_e8._0_8_ & 1) == 0) {
                        lVar24 = 0;
                      }
                      else {
                        uVar19 = uVar55 - local_e8._8_8_;
                        lVar24 = 0;
                        if (((ulonglong)local_e8._8_8_ <= uVar55 && uVar19 != 0) &&
                           (lVar24 = lVar30, local_e8._8_8_ != uVar37)) {
                          uVar35 = in_stack_00000030[1];
                          if ((uVar35 | uVar19) >> 0x20 == 0) {
                            uVar35 = (uVar19 & 0xffffffff) % (uVar35 & 0xffffffff);
                          }
                          else {
                            uVar35 = uVar19 % uVar35;
                          }
                          uVar19 = uVar19 - uVar35;
                          uVar35 = *in_stack_00000030;
                          if ((uVar19 | uVar35) >> 0x20 == 0) {
                            uVar35 = (uVar19 & 0xffffffff) % (uVar35 & 0xffffffff);
                          }
                          else {
                            uVar35 = uVar19 % uVar35;
                          }
                          lVar24 = uVar19 - uVar35;
                        }
                      }
                    }
                  }
                  uVar19 = in_stack_00000030[1];
                  if ((uVar19 ^ uVar19 - 1) <= uVar19 - 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  uVar53 = uVar53 + param_2 & 0xffffffffffff;
                  uVar26 = uVar26 & 0xffffffffffff;
                  lVar30 = uVar34 - uVar53;
                  if (lVar30 == 0) {
                    lVar36 = 0;
                  }
                  else if (uVar26 == 0) {
                    lVar36 = lVar30;
                    if ((uVar53 & uVar19 + 0xffffffffffff) != 0) {
                      uVar35 = *in_stack_00000030;
                      uVar27 = uVar53;
LAB_140d8866c:
                      pas_coalign((pas_coalign_result *)&local_e8,uVar27,uVar35,0,uVar19);
                      if ((local_e8._0_8_ & 1) == 0) goto LAB_140d886ee;
                      uVar19 = uVar34 - local_e8._8_8_;
                      lVar36 = 0;
                      if (((ulonglong)local_e8._8_8_ <= uVar34 && uVar19 != 0) &&
                         (lVar36 = lVar30, local_e8._8_8_ != uVar53)) {
                        uVar35 = in_stack_00000030[1];
                        if ((uVar35 | uVar19) >> 0x20 == 0) {
                          uVar35 = (uVar19 & 0xffffffff) % (uVar35 & 0xffffffff);
                        }
                        else {
                          uVar35 = uVar19 % uVar35;
                        }
                        uVar19 = uVar19 - uVar35;
                        uVar35 = *in_stack_00000030;
                        if ((uVar19 | uVar35) >> 0x20 == 0) {
                          uVar35 = (uVar19 & 0xffffffff) % (uVar35 & 0xffffffff);
                        }
                        else {
                          uVar35 = uVar19 % uVar35;
                        }
                        lVar36 = uVar19 - uVar35;
                      }
                    }
                  }
                  else {
                    uVar35 = *in_stack_00000030;
                    uVar27 = (uVar35 - uVar26) + uVar53;
                    if (uVar27 < uVar34) goto LAB_140d8866c;
LAB_140d886ee:
                    lVar36 = 0;
                  }
                  lVar36 = lVar24 + param_2 + lVar36;
                  auVar57._8_4_ = (int)(uVar52 >> 0x20);
                  auVar57._0_8_ = uVar52;
                  auVar57._12_4_ = uVar12;
                  auVar58._8_4_ = (int)((ulonglong)lVar36 >> 0x20);
                  auVar58._0_8_ = lVar36;
                  auVar58._12_4_ = uVar12;
                  if ((((auVar57._8_8_ - dVar14) + ((double)CONCAT44(uVar11,(int)uVar52) - dVar13))
                       / ((auVar58._8_8_ - dVar14) + ((double)CONCAT44(uVar11,(int)lVar36) - dVar13)
                         ) <= dVar10) &&
                     (uVar35 = uVar45, uVar19 = uVar37, uVar37 = uVar55, local_118 = uVar20 & 0xff,
                     uVar53 != uVar55)) goto LAB_140d8847b;
                }
              }
            }
          }
        }
      }
      lVar47 = lVar47 + 0x20;
      uVar19 = pas_bootstrap_free_heap.private_base.free_list_size;
    } while (uVar48 < pas_bootstrap_free_heap.private_base.free_list_size);
  }
  else {
    local_148 = 0;
    lVar47 = 0x18;
    local_128 = 0;
    uVar39 = 0;
    local_138 = 0;
    local_f8 = 0;
    local_130 = 0;
    local_160 = 0;
    local_168 = 0;
    local_110 = 0;
    local_120 = 0;
    local_140 = 0;
    local_fc = 0;
    uVar48 = 0;
    do {
      pas_simple_large_free_heap_num_find_first_nodes_considered =
           pas_simple_large_free_heap_num_find_first_nodes_considered + 1;
      if (param_1->free_list_capacity <= uVar48) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      ppVar23 = param_1->free_list;
      uVar19 = *(ulonglong *)((longlong)ppVar23 + lVar47 + -0x18);
      uVar35 = *(ulonglong *)((longlong)ppVar23 + lVar47 + -0x10);
      uVar20 = *(ulonglong *)((longlong)ppVar23 + lVar47 + -8);
      uVar37 = *(ulonglong *)((longlong)&ppVar23->begin + lVar47);
      uVar48 = uVar48 + 1;
      uVar34 = uVar19 & 0xffffffffffff;
      if ((local_168 == 0) || (uVar34 <= uVar39)) {
        uVar52 = uVar35 & 0xffffffffffff;
        uVar45 = uVar52 - uVar34;
        if (param_2 <= uVar45) {
          uVar26 = uVar20 & 0xffffffffffff;
          if (uVar26 == 0) {
            if (((ulonglong)puVar40 & uVar34 - (longlong)param_4) == 0) {
              uVar53 = in_stack_00000030[1] - 1;
              if ((in_stack_00000030[1] ^ uVar53) <= uVar53) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if ((uVar53 & param_2) == 0) {
                local_180 = *in_stack_00000030;
                if ((param_2 | local_180) >> 0x20 == 0) {
                  local_180 = (param_2 & 0xffffffff) % (local_180 & 0xffffffff);
                }
                else {
                  local_180 = param_2 % local_180;
                }
                uVar43 = uVar19 + param_2 & 0xffffffffffff;
                local_180 = local_180 & 0xffffffffffff;
                uVar53 = uVar35 & 0xffff000000000000 | uVar34;
                uVar35 = uVar37;
LAB_140d88c2a:
                if (uVar43 != uVar34) {
                  if (uVar34 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  if ((local_168 == 0) || (uVar34 < uVar39)) {
                    local_148 = uVar37 & 0xff;
                    local_140 = local_180;
                    local_fc = (uint)local_148;
                    uVar39 = uVar34;
                    local_168 = uVar48;
                    local_160 = uVar19;
                    local_138 = uVar35;
                    local_130 = uVar53;
                    local_128 = uVar43;
                    local_120 = uVar52;
                    local_110 = uVar43;
                    local_f8 = uVar20;
                  }
                }
              }
              else {
                uVar35 = uVar45;
                uVar20 = uVar34;
                if (uVar52 != uVar34) goto LAB_140d889f0;
              }
            }
            else if (uVar52 != uVar34) {
              uVar35 = *in_stack_00000030;
              uVar20 = uVar34;
              goto LAB_140d88964;
            }
          }
          else if (uVar52 != uVar34) {
            uVar35 = *in_stack_00000030;
            uVar20 = (uVar35 - uVar26) + uVar34;
            if (uVar20 < uVar52) {
LAB_140d88964:
              pas_coalign((pas_coalign_result *)&local_e8,uVar20,uVar35,(ulong64)param_4,
                          (ulong64)param_3);
              if (((local_e8._0_8_ & 1) != 0) &&
                 (uVar35 = uVar52 - local_e8._8_8_, uVar20 = local_e8._8_8_,
                 (ulonglong)local_e8._8_8_ <= uVar52 && uVar35 != 0)) {
LAB_140d889f0:
                if (param_2 <= uVar35) {
                  uVar35 = (uVar20 - uVar34) + uVar26;
                  uVar55 = *in_stack_00000030;
                  if ((uVar35 | uVar55) >> 0x20 == 0) {
                    uVar35 = (uVar35 & 0xffffffff) % (uVar55 & 0xffffffff);
                  }
                  else {
                    uVar35 = uVar35 % uVar55;
                  }
                  uVar53 = (uVar20 - uVar34) + uVar19 & 0xffffffffffff;
                  local_180 = ((uVar20 + param_2) - uVar53) + (uVar35 & 0xffffffffffff);
                  if ((local_180 | uVar55) >> 0x20 == 0) {
                    local_180 = (local_180 & 0xffffffff) % (uVar55 & 0xffffffff);
                  }
                  else {
                    local_180 = local_180 % uVar55;
                  }
                  uVar19 = in_stack_00000030[1];
                  if ((uVar19 ^ uVar19 - 1) <= uVar19 - 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  lVar30 = uVar53 - uVar34;
                  if (lVar30 == 0) {
                    lVar24 = 0;
                  }
                  else if (uVar26 == 0) {
                    uVar35 = uVar34;
                    lVar24 = lVar30;
                    if ((uVar19 + 0xffffffffffff & uVar34) != 0) {
LAB_140d88cf1:
                      pas_coalign((pas_coalign_result *)&local_e8,uVar35,uVar55,0,uVar19);
                      if ((local_e8._0_8_ & 1) == 0) goto LAB_140d88e07;
                      uVar19 = uVar53 - local_e8._8_8_;
                      lVar24 = 0;
                      if (((ulonglong)local_e8._8_8_ <= uVar53 && uVar19 != 0) &&
                         (lVar24 = lVar30, local_e8._8_8_ != uVar34)) {
                        uVar35 = in_stack_00000030[1];
                        if ((uVar35 | uVar19) >> 0x20 == 0) {
                          uVar35 = (uVar19 & 0xffffffff) % (uVar35 & 0xffffffff);
                        }
                        else {
                          uVar35 = uVar19 % uVar35;
                        }
                        uVar19 = uVar19 - uVar35;
                        uVar35 = *in_stack_00000030;
                        if ((uVar19 | uVar35) >> 0x20 == 0) {
                          uVar35 = (uVar19 & 0xffffffff) % (uVar35 & 0xffffffff);
                        }
                        else {
                          uVar35 = uVar19 % uVar35;
                        }
                        lVar24 = uVar19 - uVar35;
                      }
                    }
                  }
                  else {
                    uVar35 = (uVar55 - uVar26) + uVar34;
                    if (uVar35 < uVar53) goto LAB_140d88cf1;
LAB_140d88e07:
                    lVar24 = 0;
                  }
                  uVar19 = in_stack_00000030[1];
                  if ((uVar19 ^ uVar19 - 1) <= uVar19 - 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  uVar43 = uVar20 + param_2 & 0xffffffffffff;
                  local_180 = local_180 & 0xffffffffffff;
                  lVar30 = uVar52 - uVar43;
                  if (lVar30 == 0) {
                    lVar36 = 0;
                  }
                  else if (local_180 == 0) {
                    lVar36 = lVar30;
                    if ((uVar19 + 0xffffffffffff & uVar43) != 0) {
                      uVar35 = *in_stack_00000030;
                      uVar20 = uVar43;
LAB_140d88d95:
                      pas_coalign((pas_coalign_result *)&local_e8,uVar20,uVar35,0,uVar19);
                      if ((local_e8._0_8_ & 1) == 0) goto LAB_140d88e0f;
                      uVar19 = uVar52 - local_e8._8_8_;
                      lVar36 = 0;
                      if (((ulonglong)local_e8._8_8_ <= uVar52 && uVar19 != 0) &&
                         (lVar36 = lVar30, local_e8._8_8_ != uVar43)) {
                        uVar35 = in_stack_00000030[1];
                        if ((uVar35 | uVar19) >> 0x20 == 0) {
                          uVar35 = (uVar19 & 0xffffffff) % (uVar35 & 0xffffffff);
                        }
                        else {
                          uVar35 = uVar19 % uVar35;
                        }
                        uVar19 = uVar19 - uVar35;
                        uVar35 = *in_stack_00000030;
                        if ((uVar19 | uVar35) >> 0x20 == 0) {
                          uVar35 = (uVar19 & 0xffffffff) % (uVar35 & 0xffffffff);
                        }
                        else {
                          uVar35 = uVar19 % uVar35;
                        }
                        lVar36 = uVar19 - uVar35;
                      }
                    }
                  }
                  else {
                    uVar35 = *in_stack_00000030;
                    uVar20 = (uVar35 - local_180) + uVar43;
                    if (uVar20 < uVar52) goto LAB_140d88d95;
LAB_140d88e0f:
                    lVar36 = 0;
                  }
                  lVar36 = lVar24 + param_2 + lVar36;
                  auVar59._8_4_ = (int)(uVar45 >> 0x20);
                  auVar59._0_8_ = uVar45;
                  auVar59._12_4_ = uVar12;
                  auVar60._8_4_ = (int)((ulonglong)lVar36 >> 0x20);
                  auVar60._0_8_ = lVar36;
                  auVar60._12_4_ = uVar12;
                  if (((auVar59._8_8_ - dVar14) + ((double)CONCAT44(uVar11,(int)uVar45) - dVar13)) /
                      ((auVar60._8_8_ - dVar14) + ((double)CONCAT44(uVar11,(int)lVar36) - dVar13))
                      <= dVar10) {
                    uVar20 = uVar26;
                    uVar19 = uVar34;
                    uVar34 = uVar53;
                    uVar35 = uVar37 & 0xff;
                    goto LAB_140d88c2a;
                  }
                }
              }
            }
          }
        }
      }
      uVar19 = param_1->free_list_size;
      lVar47 = lVar47 + 0x20;
    } while (uVar48 < uVar19);
  }
  if (local_168 == 0) goto LAB_140d88f63;
  if (uVar39 == local_128) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar39 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (local_128 - uVar39 != param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  ppVar23 = &local_c8;
  if (((local_160 ^ local_130) & 0xffffffffffff) == 0) {
    if (local_120 != local_110) {
      uVar48 = param_1->free_list_capacity;
      ppVar23 = &local_e8;
      goto LAB_140d89187;
    }
    local_168 = local_168 - 1;
    uVar48 = param_1->free_list_capacity;
    if (local_168 < uVar48) {
      ppVar42 = param_1->free_list;
      ppVar23 = ppVar42 + local_168;
      uVar19 = uVar19 - 1;
      param_1->free_list_size = uVar19;
      if (uVar48 <= uVar19) {
        if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
LAB_140d8a92d:
        uVar19 = uVar19 - uVar48;
        if (3 < uVar19) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar56 = *(undefined8 *)(bootstrap_free_list + uVar19);
        uVar63 = *(undefined8 *)&bootstrap_free_list[uVar19].end;
        uVar64 = *(undefined8 *)&bootstrap_free_list[uVar19].offset_in_type;
        uVar65 = *(undefined8 *)&bootstrap_free_list[uVar19].zero_mode;
        goto LAB_140d8a950;
      }
      ppVar1 = ppVar42 + uVar19;
      uVar4 = ppVar1->begin;
      uVar5 = *(undefined2 *)&ppVar1->field_0x6;
      uVar6 = ppVar1->end;
      uVar7 = *(undefined2 *)&ppVar1->field_0xe;
      ppVar42 = ppVar42 + uVar19;
      uVar3 = *(undefined2 *)&ppVar42->field_0x16;
      uVar56 = *(undefined8 *)(&ppVar42->offset_in_type + 1);
      ppVar23->offset_in_type = ppVar42->offset_in_type;
      *(undefined2 *)&ppVar23->field_0x16 = uVar3;
      *(undefined8 *)&ppVar23->zero_mode = uVar56;
      ppVar23->begin = uVar4;
      *(undefined2 *)&ppVar23->field_0x6 = uVar5;
      ppVar23->end = uVar6;
      *(undefined2 *)&ppVar23->field_0xe = uVar7;
      uVar48 = param_1->free_list_capacity;
      if (uVar48 <= local_168) {
        if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        goto LAB_140d8a98f;
      }
    }
    else {
      if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (3 < local_168 - uVar48) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      ppVar23 = bootstrap_free_list + (local_168 - uVar48);
      uVar19 = pas_bootstrap_free_heap.private_base.free_list_size - 1;
      pas_bootstrap_free_heap.private_base.free_list_size = uVar19;
      if (uVar48 <= uVar19) goto LAB_140d8a92d;
      uVar56 = *(undefined8 *)(pas_bootstrap_free_heap.private_base.free_list + uVar19);
      uVar63 = *(undefined8 *)&pas_bootstrap_free_heap.private_base.free_list[uVar19].end;
      uVar64 = *(undefined8 *)&pas_bootstrap_free_heap.private_base.free_list[uVar19].offset_in_type
      ;
      uVar65 = *(undefined8 *)
                (&pas_bootstrap_free_heap.private_base.free_list[uVar19].offset_in_type + 1);
LAB_140d8a950:
      *(undefined8 *)&ppVar23->offset_in_type = uVar64;
      *(undefined8 *)&ppVar23->zero_mode = uVar65;
      *(undefined8 *)ppVar23 = uVar56;
      *(undefined8 *)&ppVar23->end = uVar63;
      uVar48 = param_1->free_list_capacity;
      if (uVar48 <= local_168) {
LAB_140d8a98f:
        local_168 = local_168 - uVar48;
        if (3 < local_168) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((*(ulonglong *)(bootstrap_free_list + local_168) & 0xffffffffffff) == 0)
        goto LAB_140d8a9da;
        if ((*(ulonglong *)&bootstrap_free_list[local_168].end & 0xffffffffffff) <=
            (*(ulonglong *)(bootstrap_free_list + local_168) & 0xffffffffffff)) goto LAB_140d8a9d8;
        goto LAB_140d892dd;
      }
    }
    uVar48 = *(ulonglong *)(param_1->free_list + local_168) & 0xffffffffffff;
    if (uVar48 == 0) {
LAB_140d8a9da:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((*(ulonglong *)&param_1->free_list[local_168].end & 0xffffffffffff) <= uVar48) {
LAB_140d8a9d8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    local_e8._0_8_ = local_160;
    local_e8._8_8_ = local_130;
    local_e8._16_8_ = local_f8;
    local_e8._24_8_ = local_138;
    uVar48 = param_1->free_list_capacity;
    if (local_120 == local_110) {
      local_168 = local_168 - 1;
      if (local_168 < uVar48) {
        ppVar23 = param_1->free_list + local_168;
      }
      else {
        if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < local_168 - uVar48) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        ppVar23 = bootstrap_free_list + (local_168 - uVar48);
      }
      *(ulonglong *)&ppVar23->offset_in_type = local_f8;
      *(ulonglong *)&ppVar23->zero_mode = local_138;
      *(ulonglong *)ppVar23 = local_160;
      *(ulonglong *)&ppVar23->end = local_130;
    }
    else {
LAB_140d89187:
      *(ulong64 *)ppVar23 = local_110;
      *(ulong64 *)&ppVar23->end = local_120;
      *(ulonglong *)&ppVar23->offset_in_type = local_140;
      *(uint *)&ppVar23->zero_mode = local_fc;
      local_168 = local_168 - 1;
      if (local_168 < uVar48) {
        ppVar23 = param_1->free_list + local_168;
      }
      else {
        if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < local_168 - uVar48) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        ppVar23 = bootstrap_free_list + (local_168 - uVar48);
      }
      ppVar23->offset_in_type = local_e8.offset_in_type;
      *(undefined2 *)&ppVar23->field_0x16 = local_e8._22_2_;
      ppVar23->zero_mode = local_e8.zero_mode;
      *(undefined7 *)&ppVar23->field_0x19 = local_e8._25_7_;
      ppVar23->begin = local_e8.begin;
      *(undefined2 *)&ppVar23->field_0x6 = local_e8._6_2_;
      ppVar23->end = local_e8.end;
      *(undefined2 *)&ppVar23->field_0xe = local_e8._14_2_;
      if (((local_160 ^ local_130) & 0xffffffffffff) != 0) {
        local_a8.zero_mode = local_c8.zero_mode;
        local_a8._25_7_ = local_c8._25_7_;
        local_a8.begin = local_c8.begin;
        local_a8._6_2_ = local_c8._6_2_;
        local_a8.end = local_c8.end;
        local_a8._14_2_ = local_c8._14_2_;
        append(param_1,&local_a8);
      }
    }
  }
LAB_140d892dd:
  local_c8.offset_in_type._0_4_ = (pas_zero_mode)(char)local_148;
  uVar34 = uVar39 - (longlong)param_4;
  goto joined_r0x000140d897e5;
LAB_140d890ac:
  if (uVar35 < uVar19) {
    ppVar23 = param_1->free_list + uVar35;
  }
  else {
    if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (3 < uVar35 - uVar19) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    ppVar23 = bootstrap_free_list + (uVar35 - uVar19);
  }
  if (((ulonglong)*(undefined1 **)&ppVar23->end & 0xffffffffffff) != local_e8._16_8_) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar48 = *in_stack_00000030;
  uVar19 = *(ulonglong *)&ppVar23->offset_in_type & 0xffffffffffff;
  if (uVar48 <= uVar19) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar19 = local_e8._16_8_ + (uVar19 - (*(ulonglong *)ppVar23 & 0xffffffffffff));
  if ((uVar19 | uVar48) >> 0x20 == 0) {
    uVar19 = (uVar19 & 0xffffffff) % (uVar48 & 0xffffffff);
  }
  else {
    uVar19 = uVar19 % uVar48;
  }
  uVar20 = *(ulonglong *)ppVar23;
  uVar37 = *(ulonglong *)&ppVar23->offset_in_type;
  puVar15 = (undefined1 *)
            ((longlong)(ulong64 *)local_c8._0_8_ + (longlong)(ulong64 *)local_c8._8_8_);
  puVar41 = *(undefined1 **)&ppVar23->end;
  uVar34 = *(ulonglong *)&ppVar23->zero_mode;
  uVar52 = local_e8._16_8_;
  pVar16 = (pas_zero_mode)local_c8.offset_in_type;
  do {
    pVar44 = pVar16;
    uVar53 = uVar52;
    uVar26 = uVar34;
    puVar49 = puVar41;
    puVar41 = puVar15;
    uVar45 = uVar37;
    uVar52 = uVar20;
    uVar37 = uVar19;
    uVar19 = uVar45;
    uVar20 = uVar53;
    puVar15 = puVar49;
    uVar34 = (ulonglong)pVar44;
    pVar16 = (pas_zero_mode)uVar26;
  } while ((((ulonglong)puVar41 ^ uVar52) & 0xffffffffffff) == 0);
  if (((uVar53 ^ (ulonglong)puVar49) & 0xffffffffffff) == 0) {
    uVar45 = uVar45 & 0xffffffffffff;
    if (uVar48 < uVar45 || uVar48 - uVar45 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar20 = uVar52 & 0xffffffffffff;
    uVar19 = (((ulonglong)puVar49 & 0xffffffffffff) + uVar45) - uVar20;
    if ((uVar19 | uVar48) >> 0x20 == 0) {
      uVar19 = (uVar19 & 0xffffffff) % (uVar48 & 0xffffffff);
    }
    else {
      uVar19 = uVar19 % uVar48;
    }
    if (uVar19 == (uVar37 & 0xffffffffffff)) {
      cVar29 = (char)uVar26;
      uVar19 = (ulonglong)(uint)(int)cVar29;
      if (cVar29 != '\0') {
        if ((int)cVar29 != 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        cVar29 = (char)pVar44;
        uVar19 = (ulonglong)(uint)(int)cVar29;
        if (cVar29 != '\0') {
          if ((int)cVar29 != 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar19 = 1;
        }
      }
      uVar37 = (ulonglong)puVar41 & 0xffffffffffff;
      lVar47 = uVar37 - uVar20;
      if (lVar47 != 0) {
        if (uVar45 == 0) {
          uVar34 = uVar20;
          if (((ulonglong)puVar40 & uVar20 - (longlong)param_4) == 0) {
            uVar26 = in_stack_00000030[1] - 1;
            if ((in_stack_00000030[1] ^ uVar26) <= uVar26) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if ((param_2 & uVar26) == 0) {
              local_178 = uVar52 + param_2 & 0xffffffffffff;
              if ((param_2 | uVar48) >> 0x20 == 0) {
                uVar48 = (param_2 & 0xffffffff) % (uVar48 & 0xffffffff);
              }
              else {
                uVar48 = param_2 % uVar48;
              }
              uVar48 = uVar48 & 0xffffffffffff;
            }
            else {
LAB_140d894b3:
              if (uVar37 - uVar34 < param_2) goto LAB_140d89ab9;
              uVar48 = (uVar45 - uVar20) + uVar34;
              uVar52 = *in_stack_00000030;
              if ((uVar48 | uVar52) >> 0x20 == 0) {
                uVar48 = (uVar48 & 0xffffffff) % (uVar52 & 0xffffffff);
              }
              else {
                uVar48 = uVar48 % uVar52;
              }
              uVar48 = (uVar48 & 0xffffffffffff) + param_2;
              if ((uVar48 | uVar52) >> 0x20 == 0) {
                uVar48 = (uVar48 & 0xffffffff) % (uVar52 & 0xffffffff);
              }
              else {
                uVar48 = uVar48 % uVar52;
              }
              uVar26 = in_stack_00000030[1];
              if ((uVar26 ^ uVar26 - 1) <= uVar26 - 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              lVar30 = uVar34 - uVar20;
              if (lVar30 == 0) {
LAB_140d89545:
                lVar24 = 0;
              }
              else {
                if (uVar45 != 0) {
                  uVar53 = (uVar52 - uVar45) + uVar20;
                  if (uVar53 < uVar34) goto LAB_140d8afb4;
                  goto LAB_140d89545;
                }
                uVar53 = uVar20;
                lVar24 = lVar30;
                if ((uVar26 + 0xffffffffffff & uVar20) != 0) {
LAB_140d8afb4:
                  pas_coalign((pas_coalign_result *)&local_e8,uVar53,uVar52,0,uVar26);
                  lVar24 = 0;
                  if ((((local_e8._0_8_ & 1) != 0) &&
                      (uVar52 = uVar34 - local_e8._8_8_,
                      (ulonglong)local_e8._8_8_ <= uVar34 && uVar52 != 0)) &&
                     (lVar24 = lVar30, local_e8._8_8_ != uVar20)) {
                    uVar26 = in_stack_00000030[1];
                    if ((uVar26 | uVar52) >> 0x20 == 0) {
                      uVar26 = (uVar52 & 0xffffffff) % (uVar26 & 0xffffffff);
                    }
                    else {
                      uVar26 = uVar52 % uVar26;
                    }
                    uVar52 = uVar52 - uVar26;
                    uVar26 = *in_stack_00000030;
                    if ((uVar52 | uVar26) >> 0x20 == 0) {
                      uVar26 = (uVar52 & 0xffffffff) % (uVar26 & 0xffffffff);
                    }
                    else {
                      uVar26 = uVar52 % uVar26;
                    }
                    lVar24 = uVar52 - uVar26;
                  }
                }
              }
              uVar52 = in_stack_00000030[1];
              if ((uVar52 ^ uVar52 - 1) <= uVar52 - 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              local_178 = uVar34 + param_2 & 0xffffffffffff;
              uVar48 = uVar48 & 0xffffffffffff;
              lVar30 = uVar37 - local_178;
              if (lVar30 == 0) {
                lVar36 = 0;
              }
              else if (uVar48 == 0) {
                lVar36 = lVar30;
                if ((uVar52 + 0xffffffffffff & local_178) != 0) {
                  uVar26 = *in_stack_00000030;
                  uVar53 = local_178;
LAB_140d8b09a:
                  pas_coalign((pas_coalign_result *)&local_e8,uVar53,uVar26,0,uVar52);
                  if ((local_e8._0_8_ & 1) == 0) goto LAB_140d8b11a;
                  uVar52 = uVar37 - local_e8._8_8_;
                  lVar36 = 0;
                  if (((ulonglong)local_e8._8_8_ <= uVar37 && uVar52 != 0) &&
                     (lVar36 = lVar30, local_e8._8_8_ != local_178)) {
                    uVar26 = in_stack_00000030[1];
                    if ((uVar26 | uVar52) >> 0x20 == 0) {
                      uVar26 = (uVar52 & 0xffffffff) % (uVar26 & 0xffffffff);
                    }
                    else {
                      uVar26 = uVar52 % uVar26;
                    }
                    uVar52 = uVar52 - uVar26;
                    uVar26 = *in_stack_00000030;
                    if ((uVar52 | uVar26) >> 0x20 == 0) {
                      uVar26 = (uVar52 & 0xffffffff) % (uVar26 & 0xffffffff);
                    }
                    else {
                      uVar26 = uVar52 % uVar26;
                    }
                    lVar36 = uVar52 - uVar26;
                  }
                }
              }
              else {
                uVar26 = *in_stack_00000030;
                uVar53 = (uVar26 - uVar48) + local_178;
                if (uVar53 < uVar37) goto LAB_140d8b09a;
LAB_140d8b11a:
                lVar36 = 0;
              }
              lVar36 = lVar24 + param_2 + lVar36;
              auVar61._8_4_ = (int)((ulonglong)lVar47 >> 0x20);
              auVar61._0_8_ = lVar47;
              auVar61._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
              auVar62._8_4_ = (int)((ulonglong)lVar36 >> 0x20);
              auVar62._0_8_ = lVar36;
              auVar62._12_4_ = __xmm_00000000000000004530000043300000._4_4_;
              if (__real_3ff4cccccccccccd <
                  ((auVar61._8_8_ - _UNK_1531e94a8) +
                  ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,(int)lVar47)
                  - ___xmm_45300000000000004330000000000000)) /
                  ((auVar62._8_8_ - _UNK_1531e94a8) +
                  ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,(int)lVar36)
                  - ___xmm_45300000000000004330000000000000))) goto LAB_140d89ab9;
            }
            if ((uVar34 < uVar39) && (local_178 != uVar34)) {
              if ((ulonglong)uVar56 <= uVar34) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (uVar34 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar52 = param_1->free_list_capacity;
              if (uVar34 == uVar20) {
                uVar20 = uVar35 - uVar52;
                if (uVar35 < uVar52) {
                  ppVar42 = param_1->free_list;
                  ppVar23 = ppVar42 + uVar35;
                  uVar45 = param_1->free_list_size - 1;
                  param_1->free_list_size = uVar45;
                  if (uVar52 <= uVar45) {
                    if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                        &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
LAB_140d8b207:
                    uVar45 = uVar45 - uVar52;
                    if (3 < uVar45) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    uVar4 = bootstrap_free_list[uVar45].begin;
                    uVar5 = *(undefined2 *)&bootstrap_free_list[uVar45].field_0x6;
                    uVar6 = bootstrap_free_list[uVar45].end;
                    uVar7 = *(undefined2 *)&bootstrap_free_list[uVar45].field_0xe;
                    uVar3 = *(undefined2 *)&bootstrap_free_list[uVar45].field_0x16;
                    bVar8 = bootstrap_free_list[uVar45].zero_mode;
                    uVar9 = *(undefined7 *)&bootstrap_free_list[uVar45].field_0x19;
                    ppVar23->offset_in_type = bootstrap_free_list[uVar45].offset_in_type;
                    *(undefined2 *)&ppVar23->field_0x16 = uVar3;
                    ppVar23->zero_mode = bVar8;
                    *(undefined7 *)&ppVar23->field_0x19 = uVar9;
                    ppVar23->begin = uVar4;
                    *(undefined2 *)&ppVar23->field_0x6 = uVar5;
                    ppVar23->end = uVar6;
                    *(undefined2 *)&ppVar23->field_0xe = uVar7;
                    uVar20 = param_1->free_list_capacity;
                    goto LAB_140d8b251;
                  }
                  ppVar1 = ppVar42 + uVar45;
                  uVar4 = ppVar1->begin;
                  uVar5 = *(undefined2 *)&ppVar1->field_0x6;
                  uVar6 = ppVar1->end;
                  uVar7 = *(undefined2 *)&ppVar1->field_0xe;
                  ppVar42 = ppVar42 + uVar45;
                  uVar3 = *(undefined2 *)&ppVar42->field_0x16;
                  uVar63 = *(undefined8 *)(&ppVar42->offset_in_type + 1);
                  ppVar23->offset_in_type = ppVar42->offset_in_type;
                  *(undefined2 *)&ppVar23->field_0x16 = uVar3;
                  *(undefined8 *)&ppVar23->zero_mode = uVar63;
                  ppVar23->begin = uVar4;
                  *(undefined2 *)&ppVar23->field_0x6 = uVar5;
                  ppVar23->end = uVar6;
                  *(undefined2 *)&ppVar23->field_0xe = uVar7;
                  uVar20 = param_1->free_list_capacity;
                  if (uVar20 <= uVar35) {
                    if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                        &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    goto LAB_140d8b278;
                  }
                }
                else {
                  if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                      &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  if (3 < uVar20) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  ppVar23 = bootstrap_free_list + uVar20;
                  uVar45 = pas_bootstrap_free_heap.private_base.free_list_size - 1;
                  pas_bootstrap_free_heap.private_base.free_list_size = uVar45;
                  if (uVar52 <= uVar45) goto LAB_140d8b207;
                  ppVar42 = pas_bootstrap_free_heap.private_base.free_list + uVar45;
                  uVar4 = ppVar42->begin;
                  uVar5 = *(undefined2 *)&ppVar42->field_0x6;
                  uVar6 = ppVar42->end;
                  uVar7 = *(undefined2 *)&ppVar42->field_0xe;
                  ppVar42 = pas_bootstrap_free_heap.private_base.free_list + uVar45;
                  uVar3 = *(undefined2 *)&ppVar42->field_0x16;
                  uVar63 = *(undefined8 *)(&ppVar42->offset_in_type + 1);
                  bootstrap_free_list[uVar20].offset_in_type = ppVar42->offset_in_type;
                  *(undefined2 *)&bootstrap_free_list[uVar20].field_0x16 = uVar3;
                  *(undefined8 *)&bootstrap_free_list[uVar20].zero_mode = uVar63;
                  ppVar23->begin = uVar4;
                  *(undefined2 *)&ppVar23->field_0x6 = uVar5;
                  bootstrap_free_list[uVar20].end = uVar6;
                  *(undefined2 *)&bootstrap_free_list[uVar20].field_0xe = uVar7;
                  uVar20 = pas_bootstrap_free_heap.private_base.free_list_capacity;
LAB_140d8b251:
                  if (uVar20 <= uVar35) {
LAB_140d8b278:
                    uVar35 = uVar35 - uVar20;
                    if (3 < uVar35) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    if ((*(ulonglong *)(bootstrap_free_list + uVar35) & 0xffffffffffff) == 0)
                    goto LAB_140d8b2ce;
                    if ((*(ulonglong *)&bootstrap_free_list[uVar35].end & 0xffffffffffff) <=
                        (*(ulonglong *)(bootstrap_free_list + uVar35) & 0xffffffffffff))
                    goto LAB_140d89748;
                    goto LAB_140d8977e;
                  }
                }
                uVar20 = *(ulonglong *)(param_1->free_list + uVar35) & 0xffffffffffff;
                if (uVar20 == 0) {
LAB_140d8b2ce:
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if ((*(ulonglong *)&param_1->free_list[uVar35].end & 0xffffffffffff) <= uVar20) {
LAB_140d89748:
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              else {
                if (uVar35 < uVar52) {
                  ppVar23 = param_1->free_list + uVar35;
                }
                else {
                  if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                      &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  if (3 < uVar35 - uVar52) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  ppVar23 = bootstrap_free_list + (uVar35 - uVar52);
                }
                *(ulonglong *)ppVar23 = uVar20;
                *(ulonglong *)&ppVar23->end = uVar34;
                *(ulonglong *)&ppVar23->offset_in_type = uVar45;
                *(ulonglong *)&ppVar23->zero_mode = uVar19;
              }
LAB_140d8977e:
              local_c8.offset_in_type._0_4_ = (pas_zero_mode)uVar19;
              uVar39 = uVar34;
              if (in_stack_00000030[4] == 0) {
                param_1->num_mapped_bytes = uVar37 + (param_1->num_mapped_bytes - uVar56);
                if (uVar37 < local_178) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar37 == local_178) goto LAB_140d897c8;
                if (local_178 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                pas_simple_large_free_heap_num_merge_calls =
                     pas_simple_large_free_heap_num_merge_calls + 1;
                ppVar28 = (pas_large_free_heap_config *)param_1->free_list_size;
                if (ppVar28 == (pas_large_free_heap_config *)0x0) {
LAB_140d8a7fe:
                  local_e8._0_8_ = local_178;
                  local_e8._24_4_ = (pas_zero_mode)local_c8.offset_in_type;
                  local_e8._8_8_ = uVar37;
                  local_e8._16_8_ = uVar48;
                  append(param_1,&local_e8);
                }
                else {
                  ppVar22 = (pas_large_free_heap_config *)param_1->free_list_capacity;
                  ppVar21 = (pas_large_free_heap_config *)0x0;
                  local_180 = 0;
                  do {
                    pas_simple_large_free_heap_num_merge_nodes_considered =
                         pas_simple_large_free_heap_num_merge_nodes_considered + 1;
                    if (ppVar21 < ppVar22) {
                      ppVar23 = param_1->free_list + (longlong)ppVar21;
                    }
                    else {
                      if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                          &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      if (3 < (ulonglong)((longlong)ppVar21 - (longlong)ppVar22)) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      ppVar23 = bootstrap_free_list + ((longlong)ppVar21 - (longlong)ppVar22);
                    }
                    if ((((*(ulonglong *)ppVar23 ^ (ulonglong)puVar41) & 0xffffffffffff) == 0) ||
                       ((*(ulonglong *)&ppVar23->end & 0xffffffffffff) == local_178)) {
                      uVar35 = uVar37;
                      uVar20 = *(ulonglong *)&ppVar23->offset_in_type;
                      uVar52 = uVar48;
                      uVar45 = *(ulonglong *)ppVar23;
                      uVar26 = *(ulonglong *)&ppVar23->end;
                      uVar53 = local_178;
                      uVar55 = uVar19;
                      uVar25 = *(uint *)&ppVar23->zero_mode;
                      do {
                        uVar54 = uVar25;
                        uVar50 = uVar55;
                        uVar46 = uVar53;
                        uVar38 = uVar26;
                        uVar53 = uVar45;
                        uVar27 = uVar52;
                        uVar52 = uVar20;
                        uVar26 = uVar35;
                        uVar35 = uVar38;
                        uVar20 = uVar27;
                        uVar45 = uVar46;
                        uVar55 = (ulonglong)uVar54;
                        uVar25 = (uint)uVar50;
                      } while (((uVar26 ^ uVar53) & 0xffffffffffff) == 0);
                      if (((uVar46 ^ uVar38) & 0xffffffffffff) == 0) {
                        uVar35 = *in_stack_00000030;
                        uVar52 = uVar52 & 0xffffffffffff;
                        if (uVar35 <= uVar52) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)invalidInstructionException();
                          (*pcVar2)();
                        }
                        uVar20 = ((uVar38 & 0xffffffffffff) + uVar52) - (uVar53 & 0xffffffffffff);
                        if ((uVar20 | uVar35) >> 0x20 == 0) {
                          uVar20 = (uVar20 & 0xffffffff) % (uVar35 & 0xffffffff);
                        }
                        else {
                          uVar20 = uVar20 % uVar35;
                        }
                        if (uVar20 == (uVar27 & 0xffffffffffff)) {
                          cVar29 = (char)uVar54;
                          if (cVar29 != '\0') {
                            if (cVar29 != '\x01') {
                    /* WARNING: Does not return */
                              pcVar2 = (code *)invalidInstructionException();
                              (*pcVar2)();
                            }
                            if ((uVar50 & 0xfe) != 0) {
                    /* WARNING: Does not return */
                              pcVar2 = (code *)invalidInstructionException();
                              (*pcVar2)();
                            }
                          }
                          if ((uVar26 & 0xffffffffffff) != (uVar53 & 0xffffffffffff)) {
                            if (1 < local_180) {
                    /* WARNING: Does not return */
                              pcVar2 = (code *)invalidInstructionException();
                              (*pcVar2)();
                            }
                            *(pas_large_free_heap_config **)(&local_a8.begin + local_180) = ppVar21;
                            local_180 = local_180 + 1;
                          }
                        }
                      }
                    }
                    ppVar21 = (pas_large_free_heap_config *)((longlong)&ppVar21->type_size + 1);
                  } while (ppVar21 != ppVar28);
                  if (2 < local_180) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  if (local_180 == 0) goto LAB_140d8a7fe;
                  if ((ulonglong)local_a8._0_8_ < ppVar22) {
                    ppVar23 = param_1->free_list + local_a8._0_8_;
                  }
                  else {
                    if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                        &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    if (3 < (ulonglong)(local_a8._0_8_ - (longlong)ppVar22)) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    ppVar23 = bootstrap_free_list + (local_a8._0_8_ - (longlong)ppVar22);
                  }
                  uVar35 = *(ulonglong *)&ppVar23->end;
                  uVar20 = *(ulonglong *)ppVar23;
                  uVar52 = *(ulonglong *)&ppVar23->offset_in_type;
                  uVar25 = *(uint *)&ppVar23->zero_mode;
                  do {
                    uVar54 = uVar25;
                    uVar45 = uVar48;
                    uVar48 = uVar52;
                    uVar55 = uVar20;
                    uVar20 = local_178;
                    uVar53 = uVar37;
                    uVar26 = uVar19;
                    uVar37 = uVar35;
                    uVar35 = uVar53;
                    uVar19 = (ulonglong)uVar54;
                    local_178 = uVar55;
                    uVar52 = uVar45;
                    uVar25 = (uint)uVar26;
                  } while (((uVar37 ^ uVar20) & 0xffffffffffff) == 0);
                  if (((uVar55 ^ uVar53) & 0xffffffffffff) != 0) {
LAB_140d8b585:
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  uVar19 = *in_stack_00000030;
                  uVar45 = uVar45 & 0xffffffffffff;
                  if (uVar19 <= uVar45) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  uVar20 = uVar20 & 0xffffffffffff;
                  uVar35 = ((uVar53 & 0xffffffffffff) + uVar45) - uVar20;
                  if ((uVar35 | uVar19) >> 0x20 == 0) {
                    uVar35 = (uVar35 & 0xffffffff) % (uVar19 & 0xffffffff);
                  }
                  else {
                    uVar35 = uVar35 % uVar19;
                  }
                  if (uVar35 != (uVar48 & 0xffffffffffff)) goto LAB_140d8b585;
                  cVar29 = (char)uVar26;
                  uVar25 = (uint)cVar29;
                  if (cVar29 != '\0') {
                    if (uVar25 != 1) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    uVar25 = (uint)(char)uVar54;
                    if (1 < uVar25) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                  }
                  uVar37 = uVar37 & 0xffffffffffff;
                  if (uVar37 == uVar20) goto LAB_140d8b585;
                  if (local_180 == 2) {
                    if ((ulonglong)local_a8._8_8_ < ppVar22) {
                      ppVar23 = param_1->free_list + local_a8._8_8_;
                    }
                    else {
                      if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                          &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      if (3 < (ulonglong)(local_a8._8_8_ - (longlong)ppVar22)) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      ppVar23 = bootstrap_free_list + (local_a8._8_8_ - (longlong)ppVar22);
                    }
                    uVar48 = *(ulonglong *)&ppVar23->end;
                    uVar35 = *(ulonglong *)&ppVar23->offset_in_type;
                    uVar52 = *(ulonglong *)ppVar23;
                    uVar54 = *(uint *)&ppVar23->zero_mode;
                    do {
                      uVar33 = uVar54;
                      uVar54 = uVar25;
                      uVar55 = uVar52;
                      uVar26 = uVar45;
                      uVar53 = uVar37;
                      uVar52 = uVar20;
                      uVar45 = uVar35;
                      uVar37 = uVar48;
                      uVar48 = uVar53;
                      uVar35 = uVar26;
                      uVar20 = uVar55;
                      uVar25 = uVar33;
                    } while (((uVar37 ^ uVar52) & 0xffffffffffff) == 0);
                    if (((uVar55 ^ uVar53) & 0xffffffffffff) != 0) {
LAB_140d8b597:
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    uVar26 = uVar26 & 0xffffffffffff;
                    if (uVar19 <= uVar26) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    uVar52 = uVar52 & 0xffffffffffff;
                    uVar48 = ((uVar53 & 0xffffffffffff) + uVar26) - uVar52;
                    if ((uVar48 | uVar19) >> 0x20 == 0) {
                      uVar48 = (uVar48 & 0xffffffff) % (uVar19 & 0xffffffff);
                    }
                    else {
                      uVar48 = uVar48 % uVar19;
                    }
                    if (uVar48 != (uVar45 & 0xffffffffffff)) goto LAB_140d8b597;
                    cVar29 = (char)uVar54;
                    uVar25 = (uint)cVar29;
                    if (cVar29 != '\0') {
                      if (uVar25 != 1) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      uVar25 = (uint)(char)uVar33;
                      if (1 < uVar25) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                    }
                    uVar37 = uVar37 & 0xffffffffffff;
                    if (uVar37 == uVar52) goto LAB_140d8b597;
                    uVar48 = local_a8._0_8_ - (longlong)ppVar22;
                    if ((ulonglong)local_a8._0_8_ < ppVar22) {
                      ppVar23 = param_1->free_list;
                      *(ulonglong *)(ppVar23 + local_a8._0_8_) = uVar52;
                      *(ulonglong *)&ppVar23[local_a8._0_8_].end = uVar37;
                      *(ulonglong *)&ppVar23[local_a8._0_8_].offset_in_type = uVar26;
                      *(uint *)&ppVar23[local_a8._0_8_].zero_mode = uVar25;
                      ppVar28 = (pas_large_free_heap_config *)param_1->free_list_capacity;
                      if ((ulonglong)local_a8._8_8_ < ppVar28) {
                        ppVar42 = param_1->free_list + local_a8._8_8_;
                        ppVar22 = (pas_large_free_heap_config *)(param_1->free_list_size - 1);
                        param_1->free_list_size = (ulong64)ppVar22;
                        ppVar23 = param_1->free_list;
                        if (ppVar22 < ppVar28) goto LAB_140d8ac02;
                        if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                            &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)invalidInstructionException();
                          (*pcVar2)();
                        }
                      }
                      else {
                        if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                            &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)invalidInstructionException();
                          (*pcVar2)();
                        }
LAB_140d8b4ba:
                        if (3 < (ulonglong)(local_a8._8_8_ - (longlong)ppVar28)) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)invalidInstructionException();
                          (*pcVar2)();
                        }
                        ppVar42 = bootstrap_free_list + (local_a8._8_8_ - (longlong)ppVar28);
                        ppVar22 = (pas_large_free_heap_config *)(param_1->free_list_size - 1);
                        param_1->free_list_size = (ulong64)ppVar22;
                        ppVar23 = pas_bootstrap_free_heap.private_base.free_list;
                        if (ppVar22 < ppVar28) goto LAB_140d8ac02;
                      }
LAB_140d8b510:
                      ppVar22 = (pas_large_free_heap_config *)
                                ((longlong)ppVar22 - (longlong)ppVar28);
                      if ((pas_large_free_heap_config *)&DAT_00000003 < ppVar22) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      ppVar23 = bootstrap_free_list;
                    }
                    else {
                      if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                          &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      if (3 < uVar48) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      *(ulonglong *)(bootstrap_free_list + uVar48) = uVar52;
                      *(ulonglong *)&bootstrap_free_list[uVar48].end = uVar37;
                      *(ulonglong *)&bootstrap_free_list[uVar48].offset_in_type = uVar26;
                      *(uint *)&bootstrap_free_list[uVar48].zero_mode = uVar25;
                      ppVar28 = (pas_large_free_heap_config *)
                                pas_bootstrap_free_heap.private_base.free_list_capacity;
                      if (pas_bootstrap_free_heap.private_base.free_list_capacity <=
                          (ulonglong)local_a8._8_8_) goto LAB_140d8b4ba;
                      ppVar42 = pas_bootstrap_free_heap.private_base.free_list + local_a8._8_8_;
                      ppVar22 = (pas_large_free_heap_config *)
                                (pas_bootstrap_free_heap.private_base.free_list_size - 1);
                      ppVar23 = pas_bootstrap_free_heap.private_base.free_list;
                      pas_bootstrap_free_heap.private_base.free_list_size = (ulong64)ppVar22;
                      if (pas_bootstrap_free_heap.private_base.free_list_capacity <= ppVar22)
                      goto LAB_140d8b510;
                    }
LAB_140d8ac02:
                    ppVar23 = ppVar23 + (longlong)ppVar22;
                    uVar4 = ppVar23->begin;
                    uVar5 = *(undefined2 *)&ppVar23->field_0x6;
                    uVar6 = ppVar23->end;
                    uVar7 = *(undefined2 *)&ppVar23->field_0xe;
                    uVar3 = *(undefined2 *)&ppVar23->field_0x16;
                    bVar8 = ppVar23->zero_mode;
                    uVar9 = *(undefined7 *)&ppVar23->field_0x19;
                    ppVar42->offset_in_type = ppVar23->offset_in_type;
                    *(undefined2 *)&ppVar42->field_0x16 = uVar3;
                    ppVar42->zero_mode = bVar8;
                    *(undefined7 *)&ppVar42->field_0x19 = uVar9;
                    ppVar42->begin = uVar4;
                    *(undefined2 *)&ppVar42->field_0x6 = uVar5;
                    ppVar42->end = uVar6;
                    *(undefined2 *)&ppVar42->field_0xe = uVar7;
                  }
                  else {
                    if ((ulonglong)local_a8._0_8_ < ppVar22) {
                      ppVar23 = param_1->free_list + local_a8._0_8_;
                    }
                    else {
                      if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                          &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      if (3 < (ulonglong)(local_a8._0_8_ - (longlong)ppVar22)) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      ppVar23 = bootstrap_free_list + (local_a8._0_8_ - (longlong)ppVar22);
                    }
                    *(ulonglong *)ppVar23 = uVar20;
                    *(ulonglong *)&ppVar23->end = uVar37;
                    *(ulonglong *)&ppVar23->offset_in_type = uVar45;
                    *(uint *)&ppVar23->zero_mode = uVar25;
                  }
                }
                uVar34 = uVar34 - (longlong)param_4;
              }
              else {
                param_1->num_mapped_bytes = local_178 + (param_1->num_mapped_bytes - uVar56);
                (*(code *)in_stack_00000030[4])(local_178,uVar37 - local_178,in_stack_00000030[5]);
LAB_140d897c8:
                uVar34 = uVar34 - (longlong)param_4;
              }
              goto joined_r0x000140d897e5;
            }
          }
          else {
LAB_140d89442:
            pas_coalign((pas_coalign_result *)&local_e8,uVar34,uVar48,(ulong64)param_4,
                        (ulong64)param_3);
            if (((local_e8._0_8_ & 1) != 0) &&
               (uVar34 = local_e8._8_8_, (ulonglong)local_e8._8_8_ < uVar37)) goto LAB_140d894b3;
          }
        }
        else {
          uVar34 = (uVar48 - uVar45) + uVar20;
          if (uVar34 < uVar37) goto LAB_140d89442;
        }
      }
    }
  }
LAB_140d89ab9:
  ppVar28 = (pas_large_free_heap_config *)(uVar39 + param_2);
  if ((ulonglong)local_c8._0_8_ < ppVar28) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (in_stack_00000030[4] == 0) {
    param_1->num_mapped_bytes =
         (ulong64)((longlong)(ulong64 *)local_c8._8_8_ +
                  param_1->num_mapped_bytes + param_2 + uVar63);
    uVar48 = *in_stack_00000030;
    if (uVar48 == 1) {
      if (CARRY8(uVar63,uVar56)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar63 == 0) {
        uVar48 = 1;
      }
      else {
        if (uVar56 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar19 = uVar56 & 0xffffffffffff;
        pas_simple_large_free_heap_num_merge_calls = pas_simple_large_free_heap_num_merge_calls + 1;
        uVar48 = uVar56 + uVar63 & 0xffffffffffff;
        ppVar22 = (pas_large_free_heap_config *)param_1->free_list_size;
        if (ppVar22 == (pas_large_free_heap_config *)0x0) {
LAB_140d89e90:
          local_e8._16_8_ = 0;
          local_e8._24_4_ = (pas_zero_mode)local_c8.offset_in_type;
          local_e8._0_8_ = uVar19;
          local_e8._8_8_ = uVar48;
          append(param_1,&local_e8);
        }
        else {
          ppVar21 = (pas_large_free_heap_config *)param_1->free_list_capacity;
          ppVar31 = (pas_large_free_heap_config *)0x0;
          local_140 = 0;
          do {
            pas_simple_large_free_heap_num_merge_nodes_considered =
                 pas_simple_large_free_heap_num_merge_nodes_considered + 1;
            if (ppVar31 < ppVar21) {
              ppVar23 = param_1->free_list + (longlong)ppVar31;
            }
            else {
              if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap)
              {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (3 < (ulonglong)((longlong)ppVar31 - (longlong)ppVar21)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              ppVar23 = bootstrap_free_list + ((longlong)ppVar31 - (longlong)ppVar21);
            }
            if ((((*(ulonglong *)ppVar23 ^ uVar56 + uVar63) & 0xffffffffffff) == 0) ||
               (((*(ulonglong *)&ppVar23->end ^ uVar56) & 0xffffffffffff) == 0)) {
              uVar35 = uVar48;
              uVar20 = 0;
              uVar37 = *(ulonglong *)ppVar23;
              uVar34 = *(ulonglong *)&ppVar23->offset_in_type;
              uVar52 = *(ulonglong *)&ppVar23->end;
              uVar45 = uVar19;
              pVar16 = *(pas_zero_mode *)&ppVar23->zero_mode;
              pVar44 = (pas_zero_mode)local_c8.offset_in_type;
              do {
                pVar32 = pVar44;
                pVar44 = pVar16;
                uVar55 = uVar45;
                uVar53 = uVar52;
                uVar26 = uVar34;
                uVar45 = uVar37;
                uVar34 = uVar20;
                uVar52 = uVar35;
                uVar35 = uVar53;
                uVar20 = uVar26;
                uVar37 = uVar55;
                pVar16 = pVar32;
              } while (((uVar52 ^ uVar45) & 0xffffffffffff) == 0);
              if (((uVar55 ^ uVar53) & 0xffffffffffff) == 0) {
                uVar35 = *in_stack_00000030;
                uVar26 = uVar26 & 0xffffffffffff;
                if (uVar35 <= uVar26) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                uVar20 = ((uVar53 & 0xffffffffffff) + uVar26) - (uVar45 & 0xffffffffffff);
                if ((uVar20 | uVar35) >> 0x20 == 0) {
                  if ((uVar20 & 0xffffffff) % (uVar35 & 0xffffffff) == (uVar34 & 0xffffffffffff))
                  goto LAB_140d89d1e;
                }
                else if (uVar20 % uVar35 == (uVar34 & 0xffffffffffff)) {
LAB_140d89d1e:
                  cVar29 = (char)pVar44;
                  if (cVar29 != '\0') {
                    if (cVar29 != '\x01') {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    if ((pVar32 & 0xfe) != pas_zero_mode_may_have_non_zero) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                  }
                  if ((uVar52 & 0xffffffffffff) != (uVar45 & 0xffffffffffff)) {
                    if (1 < local_140) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    *(pas_large_free_heap_config **)(&local_a8.begin + local_140) = ppVar31;
                    local_140 = local_140 + 1;
                  }
                }
              }
            }
            ppVar31 = (pas_large_free_heap_config *)((longlong)&ppVar31->type_size + 1);
          } while (ppVar31 != ppVar22);
          if (2 < local_140) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (local_140 == 0) goto LAB_140d89e90;
          if ((ulonglong)local_a8._0_8_ < ppVar21) {
            ppVar23 = param_1->free_list + local_a8._0_8_;
          }
          else {
            if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (3 < (ulonglong)(local_a8._0_8_ - (longlong)ppVar21)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            ppVar23 = bootstrap_free_list + (local_a8._0_8_ - (longlong)ppVar21);
          }
          uVar35 = *(ulonglong *)&ppVar23->end;
          uVar20 = 0;
          uVar37 = *(ulonglong *)ppVar23;
          uVar34 = *(ulonglong *)&ppVar23->offset_in_type;
          pVar16 = *(pas_zero_mode *)&ppVar23->zero_mode;
          pVar44 = (pas_zero_mode)local_c8.offset_in_type;
          do {
            pVar32 = pVar44;
            pVar44 = pVar16;
            uVar26 = uVar34;
            uVar52 = uVar19;
            uVar19 = uVar37;
            uVar45 = uVar48;
            uVar34 = uVar20;
            uVar48 = uVar35;
            uVar35 = uVar45;
            uVar20 = uVar26;
            uVar37 = uVar52;
            pVar16 = pVar32;
          } while (((uVar48 ^ uVar52) & 0xffffffffffff) == 0);
          if (((uVar19 ^ uVar45) & 0xffffffffffff) != 0) {
LAB_140d8b391:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar19 = *in_stack_00000030;
          uVar34 = uVar34 & 0xffffffffffff;
          if (uVar19 <= uVar34) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar52 = uVar52 & 0xffffffffffff;
          uVar35 = ((uVar45 & 0xffffffffffff) + uVar34) - uVar52;
          if ((uVar35 | uVar19) >> 0x20 == 0) {
            uVar35 = (uVar35 & 0xffffffff) % (uVar19 & 0xffffffff);
          }
          else {
            uVar35 = uVar35 % uVar19;
          }
          if (uVar35 != (uVar26 & 0xffffffffffff)) goto LAB_140d8b391;
          cVar29 = (char)pVar32;
          uVar25 = (uint)cVar29;
          if (cVar29 != '\0') {
            if (uVar25 != 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar25 = (uint)(char)pVar44;
            if (1 < uVar25) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          uVar48 = uVar48 & 0xffffffffffff;
          if (uVar48 == uVar52) goto LAB_140d8b391;
          if (local_140 == 2) {
            if ((ulonglong)local_a8._8_8_ < ppVar21) {
              ppVar23 = param_1->free_list + local_a8._8_8_;
            }
            else {
              if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap)
              {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (3 < (ulonglong)(local_a8._8_8_ - (longlong)ppVar21)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              ppVar23 = bootstrap_free_list + (local_a8._8_8_ - (longlong)ppVar21);
            }
            uVar35 = *(ulonglong *)&ppVar23->end;
            uVar20 = *(ulonglong *)ppVar23;
            uVar37 = *(ulonglong *)&ppVar23->offset_in_type;
            uVar54 = *(uint *)&ppVar23->zero_mode;
            do {
              uVar33 = uVar54;
              uVar54 = uVar25;
              uVar53 = uVar34;
              uVar34 = uVar37;
              uVar26 = uVar48;
              uVar45 = uVar52;
              uVar52 = uVar20;
              uVar48 = uVar35;
              uVar35 = uVar26;
              uVar20 = uVar45;
              uVar37 = uVar53;
              uVar25 = uVar33;
            } while (((uVar48 ^ uVar45) & 0xffffffffffff) == 0);
            if (((uVar52 ^ uVar26) & 0xffffffffffff) != 0) {
LAB_140d8b3ce:
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar53 = uVar53 & 0xffffffffffff;
            if (uVar19 <= uVar53) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar45 = uVar45 & 0xffffffffffff;
            uVar35 = ((uVar26 & 0xffffffffffff) + uVar53) - uVar45;
            if ((uVar35 | uVar19) >> 0x20 == 0) {
              uVar35 = (uVar35 & 0xffffffff) % (uVar19 & 0xffffffff);
            }
            else {
              uVar35 = uVar35 % uVar19;
            }
            if (uVar35 != (uVar34 & 0xffffffffffff)) goto LAB_140d8b3ce;
            cVar29 = (char)uVar54;
            uVar25 = (uint)cVar29;
            if (cVar29 != '\0') {
              if (uVar25 != 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar25 = (uint)(char)uVar33;
              if (1 < uVar25) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
            }
            uVar48 = uVar48 & 0xffffffffffff;
            if (uVar48 == uVar45) goto LAB_140d8b3ce;
            uVar19 = local_a8._0_8_ - (longlong)ppVar21;
            if ((ulonglong)local_a8._0_8_ < ppVar21) {
              ppVar23 = param_1->free_list;
              *(ulonglong *)(ppVar23 + local_a8._0_8_) = uVar45;
              *(ulonglong *)&ppVar23[local_a8._0_8_].end = uVar48;
              *(ulonglong *)&ppVar23[local_a8._0_8_].offset_in_type = uVar53;
              *(uint *)&ppVar23[local_a8._0_8_].zero_mode = uVar25;
              ppVar22 = (pas_large_free_heap_config *)param_1->free_list_capacity;
              if ((ulonglong)local_a8._8_8_ < ppVar22) {
                ppVar42 = param_1->free_list + local_a8._8_8_;
                ppVar21 = (pas_large_free_heap_config *)(param_1->free_list_size - 1);
                param_1->free_list_size = (ulong64)ppVar21;
                ppVar23 = param_1->free_list;
                if (ppVar21 < ppVar22) goto LAB_140d8a0d2;
                if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                    &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              else {
                if ((pas_manually_decommittable_large_free_heap *)param_1 !=
                    &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
LAB_140d8aeec:
                if (3 < (ulonglong)(local_a8._8_8_ - (longlong)ppVar22)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                ppVar42 = bootstrap_free_list + (local_a8._8_8_ - (longlong)ppVar22);
                ppVar21 = (pas_large_free_heap_config *)(param_1->free_list_size - 1);
                param_1->free_list_size = (ulong64)ppVar21;
                ppVar23 = pas_bootstrap_free_heap.private_base.free_list;
                if (ppVar21 < ppVar22) goto LAB_140d8a0d2;
              }
LAB_140d8af5a:
              if (3 < (ulonglong)((longlong)ppVar21 - (longlong)ppVar22)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              ppVar23 = bootstrap_free_list + ((longlong)ppVar21 - (longlong)ppVar22);
            }
            else {
              if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap)
              {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (3 < uVar19) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              *(ulonglong *)(bootstrap_free_list + uVar19) = uVar45;
              *(ulonglong *)&bootstrap_free_list[uVar19].end = uVar48;
              *(ulonglong *)&bootstrap_free_list[uVar19].offset_in_type = uVar53;
              *(uint *)&bootstrap_free_list[uVar19].zero_mode = uVar25;
              ppVar22 = (pas_large_free_heap_config *)
                        pas_bootstrap_free_heap.private_base.free_list_capacity;
              if (pas_bootstrap_free_heap.private_base.free_list_capacity <=
                  (ulonglong)local_a8._8_8_) goto LAB_140d8aeec;
              ppVar42 = pas_bootstrap_free_heap.private_base.free_list + local_a8._8_8_;
              ppVar21 = (pas_large_free_heap_config *)
                        (pas_bootstrap_free_heap.private_base.free_list_size - 1);
              ppVar23 = pas_bootstrap_free_heap.private_base.free_list;
              pas_bootstrap_free_heap.private_base.free_list_size = (ulong64)ppVar21;
              if (pas_bootstrap_free_heap.private_base.free_list_capacity <= ppVar21)
              goto LAB_140d8af5a;
LAB_140d8a0d2:
              ppVar23 = ppVar23 + (longlong)ppVar21;
            }
            uVar4 = ppVar23->begin;
            uVar5 = *(undefined2 *)&ppVar23->field_0x6;
            uVar6 = ppVar23->end;
            uVar7 = *(undefined2 *)&ppVar23->field_0xe;
            uVar3 = *(undefined2 *)&ppVar23->field_0x16;
            bVar8 = ppVar23->zero_mode;
            uVar9 = *(undefined7 *)&ppVar23->field_0x19;
            ppVar42->offset_in_type = ppVar23->offset_in_type;
            *(undefined2 *)&ppVar42->field_0x16 = uVar3;
            ppVar42->zero_mode = bVar8;
            *(undefined7 *)&ppVar42->field_0x19 = uVar9;
            ppVar42->begin = uVar4;
            *(undefined2 *)&ppVar42->field_0x6 = uVar5;
            ppVar42->end = uVar6;
            *(undefined2 *)&ppVar42->field_0xe = uVar7;
          }
          else {
            if ((ulonglong)local_a8._0_8_ < ppVar21) {
              ppVar23 = param_1->free_list + local_a8._0_8_;
            }
            else {
              if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap)
              {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (3 < (ulonglong)(local_a8._0_8_ - (longlong)ppVar21)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              ppVar23 = bootstrap_free_list + (local_a8._0_8_ - (longlong)ppVar21);
            }
            *(ulonglong *)ppVar23 = uVar52;
            *(ulonglong *)&ppVar23->end = uVar48;
            *(ulonglong *)&ppVar23->offset_in_type = uVar34;
            *(uint *)&ppVar23->zero_mode = uVar25;
          }
        }
        uVar48 = *in_stack_00000030;
      }
    }
    else if (uVar63 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((param_2 | uVar48) >> 0x20 == 0) {
      uVar48 = (param_2 & 0xffffffff) % (uVar48 & 0xffffffff);
    }
    else {
      uVar48 = param_2 % uVar48;
    }
    ppVar22 = (pas_large_free_heap_config *)
              ((longlong)(ulong64 *)local_c8._8_8_ + (longlong)(ulong64 *)local_c8._0_8_);
    if (ppVar22 < ppVar28) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (ppVar22 == ppVar28) {
LAB_140d8a136:
      uVar34 = uVar39 - (longlong)param_4;
      goto joined_r0x000140d897e5;
    }
    if (ppVar28 == (pas_large_free_heap_config *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar35 = (ulonglong)ppVar28 & 0xffffffffffff;
    pas_simple_large_free_heap_num_merge_calls = pas_simple_large_free_heap_num_merge_calls + 1;
    uVar19 = (ulonglong)ppVar22 & 0xffffffffffff;
    uVar48 = uVar48 & 0xffffffffffff;
    ppVar21 = (pas_large_free_heap_config *)param_1->free_list_size;
    if (ppVar21 != (pas_large_free_heap_config *)0x0) {
      ppVar31 = (pas_large_free_heap_config *)param_1->free_list_capacity;
      ppVar51 = (pas_large_free_heap_config *)0x0;
      local_130 = 0;
      do {
        pas_simple_large_free_heap_num_merge_nodes_considered =
             pas_simple_large_free_heap_num_merge_nodes_considered + 1;
        if (ppVar51 < ppVar31) {
          ppVar23 = param_1->free_list + (longlong)ppVar51;
        }
        else {
          if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (3 < (ulonglong)((longlong)ppVar51 - (longlong)ppVar31)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          ppVar23 = bootstrap_free_list + ((longlong)ppVar51 - (longlong)ppVar31);
        }
        uVar20 = *(ulonglong *)ppVar23;
        uVar37 = *(ulonglong *)&ppVar23->end;
        uVar34 = uVar19;
        uVar52 = uVar48;
        uVar45 = uVar35;
        uVar26 = *(ulonglong *)&ppVar23->offset_in_type;
        pVar16 = *(pas_zero_mode *)&ppVar23->zero_mode;
        pVar44 = (pas_zero_mode)local_c8.offset_in_type;
        if ((((uVar20 ^ (ulonglong)ppVar22) & 0xffffffffffff) == 0) ||
           (((uVar37 ^ (ulonglong)ppVar28) & 0xffffffffffff) == 0)) {
          do {
            pVar32 = pVar44;
            pVar44 = pVar16;
            uVar27 = uVar20;
            uVar53 = uVar26;
            uVar55 = uVar37;
            uVar20 = uVar45;
            uVar26 = uVar52;
            uVar37 = uVar34;
            uVar34 = uVar55;
            uVar52 = uVar53;
            uVar45 = uVar27;
            pVar16 = pVar32;
          } while (((uVar37 ^ uVar27) & 0xffffffffffff) == 0);
          if (((uVar20 ^ uVar55) & 0xffffffffffff) == 0) {
            uVar20 = *in_stack_00000030;
            uVar53 = uVar53 & 0xffffffffffff;
            if (uVar20 <= uVar53) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar34 = ((uVar55 & 0xffffffffffff) + uVar53) - (uVar27 & 0xffffffffffff);
            if ((uVar34 | uVar20) >> 0x20 == 0) {
              if ((uVar34 & 0xffffffff) % (uVar20 & 0xffffffff) == (uVar26 & 0xffffffffffff))
              goto LAB_140d8a35f;
            }
            else if (uVar34 % uVar20 == (uVar26 & 0xffffffffffff)) {
LAB_140d8a35f:
              cVar29 = (char)pVar44;
              if (cVar29 != '\0') {
                if (cVar29 != '\x01') {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if ((pVar32 & 0xfe) != pas_zero_mode_may_have_non_zero) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              if ((uVar37 & 0xffffffffffff) != (uVar27 & 0xffffffffffff)) {
                if (1 < local_130) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                *(pas_large_free_heap_config **)(&local_a8.begin + local_130) = ppVar51;
                local_130 = local_130 + 1;
              }
            }
          }
        }
        ppVar51 = (pas_large_free_heap_config *)((longlong)&ppVar51->type_size + 1);
      } while (ppVar51 != ppVar21);
      if (2 < local_130) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (local_130 != 0) {
        if ((ulonglong)local_a8._0_8_ < ppVar31) {
          ppVar23 = param_1->free_list + local_a8._0_8_;
        }
        else {
          if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (3 < (ulonglong)(local_a8._0_8_ - (longlong)ppVar31)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          ppVar23 = bootstrap_free_list + (local_a8._0_8_ - (longlong)ppVar31);
        }
        uVar20 = *(ulonglong *)&ppVar23->end;
        uVar37 = *(ulonglong *)ppVar23;
        uVar34 = *(ulonglong *)&ppVar23->offset_in_type;
        pVar16 = *(pas_zero_mode *)&ppVar23->zero_mode;
        pVar44 = (pas_zero_mode)local_c8.offset_in_type;
        do {
          pVar32 = pVar44;
          pVar44 = pVar16;
          uVar26 = uVar34;
          uVar45 = uVar37;
          uVar37 = uVar35;
          uVar34 = uVar48;
          uVar52 = uVar19;
          uVar19 = uVar20;
          uVar20 = uVar52;
          uVar48 = uVar26;
          uVar35 = uVar45;
          pVar16 = pVar32;
        } while (((uVar19 ^ uVar37) & 0xffffffffffff) == 0);
        if (((uVar45 ^ uVar52) & 0xffffffffffff) != 0) {
LAB_140d8b38b:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar48 = *in_stack_00000030;
        uVar34 = uVar34 & 0xffffffffffff;
        if (uVar48 <= uVar34) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar37 = uVar37 & 0xffffffffffff;
        uVar35 = ((uVar52 & 0xffffffffffff) + uVar34) - uVar37;
        if ((uVar35 | uVar48) >> 0x20 == 0) {
          uVar35 = (uVar35 & 0xffffffff) % (uVar48 & 0xffffffff);
        }
        else {
          uVar35 = uVar35 % uVar48;
        }
        if (uVar35 != (uVar26 & 0xffffffffffff)) goto LAB_140d8b38b;
        cVar29 = (char)pVar32;
        uVar25 = (uint)cVar29;
        if (cVar29 != '\0') {
          if (uVar25 != 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar25 = (uint)(char)pVar44;
          if (1 < uVar25) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        uVar19 = uVar19 & 0xffffffffffff;
        if (uVar19 == uVar37) goto LAB_140d8b38b;
        if (local_130 != 2) {
          if ((ulonglong)local_a8._0_8_ < ppVar31) {
            ppVar23 = param_1->free_list + local_a8._0_8_;
          }
          else {
            if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (3 < (ulonglong)(local_a8._0_8_ - (longlong)ppVar31)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            ppVar23 = bootstrap_free_list + (local_a8._0_8_ - (longlong)ppVar31);
          }
          *(ulonglong *)ppVar23 = uVar37;
          *(ulonglong *)&ppVar23->end = uVar19;
          *(ulonglong *)&ppVar23->offset_in_type = uVar34;
          *(uint *)&ppVar23->zero_mode = uVar25;
          goto LAB_140d8a136;
        }
        if ((ulonglong)local_a8._8_8_ < ppVar31) {
          ppVar23 = param_1->free_list + local_a8._8_8_;
        }
        else {
          if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (3 < (ulonglong)(local_a8._8_8_ - (longlong)ppVar31)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          ppVar23 = bootstrap_free_list + (local_a8._8_8_ - (longlong)ppVar31);
        }
        uVar35 = *(ulonglong *)&ppVar23->end;
        uVar20 = *(ulonglong *)&ppVar23->offset_in_type;
        uVar52 = *(ulonglong *)ppVar23;
        uVar54 = *(uint *)&ppVar23->zero_mode;
        do {
          uVar33 = uVar54;
          uVar54 = uVar25;
          uVar45 = uVar34;
          uVar53 = uVar52;
          uVar26 = uVar19;
          uVar52 = uVar37;
          uVar34 = uVar20;
          uVar19 = uVar35;
          uVar35 = uVar26;
          uVar20 = uVar45;
          uVar37 = uVar53;
          uVar25 = uVar33;
        } while (((uVar19 ^ uVar52) & 0xffffffffffff) == 0);
        if (((uVar53 ^ uVar26) & 0xffffffffffff) != 0) {
LAB_140d8b3c8:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar45 = uVar45 & 0xffffffffffff;
        if (uVar48 <= uVar45) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar52 = uVar52 & 0xffffffffffff;
        uVar35 = ((uVar26 & 0xffffffffffff) + uVar45) - uVar52;
        if ((uVar35 | uVar48) >> 0x20 == 0) {
          uVar35 = (uVar35 & 0xffffffff) % (uVar48 & 0xffffffff);
        }
        else {
          uVar35 = uVar35 % uVar48;
        }
        if (uVar35 != (uVar34 & 0xffffffffffff)) goto LAB_140d8b3c8;
        cVar29 = (char)uVar54;
        uVar25 = (uint)cVar29;
        if (cVar29 != '\0') {
          if (uVar25 != 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar25 = (uint)(char)uVar33;
          if (1 < uVar25) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        uVar19 = uVar19 & 0xffffffffffff;
        if (uVar19 == uVar52) goto LAB_140d8b3c8;
        uVar48 = local_a8._0_8_ - (longlong)ppVar31;
        if ((ulonglong)local_a8._0_8_ < ppVar31) {
          ppVar23 = param_1->free_list;
          *(ulonglong *)(ppVar23 + local_a8._0_8_) = uVar52;
          *(ulonglong *)&ppVar23[local_a8._0_8_].end = uVar19;
          *(ulonglong *)&ppVar23[local_a8._0_8_].offset_in_type = uVar45;
          *(uint *)&ppVar23[local_a8._0_8_].zero_mode = uVar25;
          ppVar28 = (pas_large_free_heap_config *)param_1->free_list_capacity;
          if ((ulonglong)local_a8._8_8_ < ppVar28) {
            ppVar42 = param_1->free_list + local_a8._8_8_;
            ppVar22 = (pas_large_free_heap_config *)(param_1->free_list_size - 1);
            param_1->free_list_size = (ulong64)ppVar22;
            ppVar23 = param_1->free_list;
            if (ppVar22 < ppVar28) goto LAB_140d8a6d5;
            if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
            if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
LAB_140d8ad60:
            if (3 < (ulonglong)(local_a8._8_8_ - (longlong)ppVar28)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            ppVar42 = bootstrap_free_list + (local_a8._8_8_ - (longlong)ppVar28);
            ppVar22 = (pas_large_free_heap_config *)(param_1->free_list_size - 1);
            param_1->free_list_size = (ulong64)ppVar22;
            ppVar23 = pas_bootstrap_free_heap.private_base.free_list;
            if (ppVar22 < ppVar28) goto LAB_140d8a6d5;
          }
LAB_140d8adb9:
          if (3 < (ulonglong)((longlong)ppVar22 - (longlong)ppVar28)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          ppVar23 = bootstrap_free_list + ((longlong)ppVar22 - (longlong)ppVar28);
        }
        else {
          if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (3 < uVar48) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          *(ulonglong *)(bootstrap_free_list + uVar48) = uVar52;
          *(ulonglong *)&bootstrap_free_list[uVar48].end = uVar19;
          *(ulonglong *)&bootstrap_free_list[uVar48].offset_in_type = uVar45;
          *(uint *)&bootstrap_free_list[uVar48].zero_mode = uVar25;
          ppVar28 = (pas_large_free_heap_config *)
                    pas_bootstrap_free_heap.private_base.free_list_capacity;
          if (pas_bootstrap_free_heap.private_base.free_list_capacity <= (ulonglong)local_a8._8_8_)
          goto LAB_140d8ad60;
          ppVar42 = pas_bootstrap_free_heap.private_base.free_list + local_a8._8_8_;
          ppVar22 = (pas_large_free_heap_config *)
                    (pas_bootstrap_free_heap.private_base.free_list_size - 1);
          ppVar23 = pas_bootstrap_free_heap.private_base.free_list;
          pas_bootstrap_free_heap.private_base.free_list_size = (ulong64)ppVar22;
          if (pas_bootstrap_free_heap.private_base.free_list_capacity <= ppVar22)
          goto LAB_140d8adb9;
LAB_140d8a6d5:
          ppVar23 = ppVar23 + (longlong)ppVar22;
        }
        uVar4 = ppVar23->begin;
        uVar5 = *(undefined2 *)&ppVar23->field_0x6;
        uVar6 = ppVar23->end;
        uVar7 = *(undefined2 *)&ppVar23->field_0xe;
        uVar3 = *(undefined2 *)&ppVar23->field_0x16;
        bVar8 = ppVar23->zero_mode;
        uVar9 = *(undefined7 *)&ppVar23->field_0x19;
        ppVar42->offset_in_type = ppVar23->offset_in_type;
        *(undefined2 *)&ppVar42->field_0x16 = uVar3;
        ppVar42->zero_mode = bVar8;
        *(undefined7 *)&ppVar42->field_0x19 = uVar9;
        ppVar42->begin = uVar4;
        *(undefined2 *)&ppVar42->field_0x6 = uVar5;
        ppVar42->end = uVar6;
        *(undefined2 *)&ppVar42->field_0xe = uVar7;
        goto LAB_140d8a136;
      }
    }
    local_e8._24_4_ = (pas_zero_mode)local_c8.offset_in_type;
    local_e8._0_8_ = uVar35;
    local_e8._8_8_ = uVar19;
    local_e8._16_8_ = uVar48;
    append(param_1,&local_e8);
  }
  else {
    param_1->num_mapped_bytes = param_1->num_mapped_bytes + param_2;
    (*(code *)in_stack_00000030[4])(uVar56,uVar63,in_stack_00000030[5]);
    (*(code *)in_stack_00000030[4])(local_c8._0_8_,local_c8._8_8_,in_stack_00000030[5]);
  }
  uVar34 = uVar39 - (longlong)param_4;
joined_r0x000140d897e5:
  if (((ulonglong)puVar40 & uVar34) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  __return_storage_ptr__->begin = uVar39;
  __return_storage_ptr__->did_succeed = true;
  *(undefined2 *)&__return_storage_ptr__->field_0x9 = (undefined2)local_e8.begin;
  local_e8.begin._2_1_ = (undefined1)((ulonglong)local_e8._0_8_ >> 0x10);
  __return_storage_ptr__->field_0xb = local_e8.begin._2_1_;
  __return_storage_ptr__->zero_mode = (pas_zero_mode)local_c8.offset_in_type;
  if (((ulonglong)local_80 ^ (ulonglong)auStackY_1c8) == __security_cookie.value) {
    return (pas_allocation_result *)(ulonglong)(pas_zero_mode)local_c8.offset_in_type;
  }
LAB_140d887d2:
  pcVar2 = (code *)swi(3);
  ppVar18 = (pas_allocation_result *)(*pcVar2)();
  return ppVar18;
}

// fix_free_list_if_necessary @ 140d8b5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
fix_free_list_if_necessary(pas_simple_large_free_heap *param_1,pas_large_free_heap_config *param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  uint6 uVar3;
  undefined2 uVar4;
  uint6 uVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined7 uVar8;
  pas_large_free *ppVar9;
  ulong64 uVar10;
  pas_large_free *ppVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  pas_large_free *ppVar14;
  pas_large_free *ppVar15;
  undefined1 auStackY_68 [32];
  pas_large_free_heap_config *ppVar16;
  pas_allocation_result local_38;
  ulonglong local_28;
  
  uVar10 = pas_bootstrap_free_heap.private_base.free_list_capacity;
  ppVar9 = pas_bootstrap_free_heap.private_base.free_list;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if ((pas_manually_decommittable_large_free_heap *)param_1 == &pas_bootstrap_free_heap) {
    if (param_2->type_size != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (pas_bootstrap_free_heap.private_base.free_list_capacity <
        pas_bootstrap_free_heap.private_base.free_list_size) {
      uVar12 = 4;
      if (4 < pas_bootstrap_free_heap.private_base.free_list_size * 2) {
        uVar12 = pas_bootstrap_free_heap.private_base.free_list_size * 2;
      }
      ppVar16 = param_2;
      try_allocate_without_fixing
                (&local_38,&pas_bootstrap_free_heap.private_base,uVar12 << 5,
                 (pas_alignment *)&DAT_00000008,(pas_large_free_heap_config *)0x0);
      if ((pas_large_free *)local_38.begin == (pas_large_free *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar12 < pas_bootstrap_free_heap.private_base.free_list_size) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (pas_bootstrap_free_heap.private_base.free_list_size != 0) {
        ppVar11 = bootstrap_free_list;
        uVar13 = 0;
        ppVar14 = (pas_large_free *)local_38.begin;
        do {
          if (uVar13 < pas_bootstrap_free_heap.private_base.free_list_capacity) {
            ppVar15 = pas_bootstrap_free_heap.private_base.free_list + uVar13;
          }
          else {
            if (3 < uVar13 - pas_bootstrap_free_heap.private_base.free_list_capacity) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            ppVar15 = ppVar11 + -pas_bootstrap_free_heap.private_base.free_list_capacity;
          }
          uVar2 = *(undefined2 *)&ppVar15->field_0x6;
          uVar3 = ppVar15->end;
          uVar4 = *(undefined2 *)&ppVar15->field_0xe;
          uVar5 = ppVar15->offset_in_type;
          uVar6 = *(undefined2 *)&ppVar15->field_0x16;
          bVar7 = ppVar15->zero_mode;
          uVar8 = *(undefined7 *)&ppVar15->field_0x19;
          ppVar14->begin = ppVar15->begin;
          *(undefined2 *)&ppVar14->field_0x6 = uVar2;
          ppVar14->end = uVar3;
          *(undefined2 *)&ppVar14->field_0xe = uVar4;
          ppVar14->offset_in_type = uVar5;
          *(undefined2 *)&ppVar14->field_0x16 = uVar6;
          ppVar14->zero_mode = bVar7;
          *(undefined7 *)&ppVar14->field_0x19 = uVar8;
          if ((*(ulonglong *)ppVar14 & 0xffffffffffff) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((*(ulonglong *)&ppVar14->end & 0xffffffffffff) <=
              (*(ulonglong *)ppVar14 & 0xffffffffffff)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar13 = uVar13 + 1;
          ppVar14 = ppVar14 + 1;
          ppVar11 = ppVar11 + 1;
        } while (uVar13 < pas_bootstrap_free_heap.private_base.free_list_size);
      }
      pas_bootstrap_free_heap.private_base.free_list = (pas_large_free *)local_38.begin;
      pas_bootstrap_free_heap.private_base.free_list_capacity = uVar12;
      if (ppVar9 != (pas_large_free *)0x0) {
        merge_physical(&pas_bootstrap_free_heap.private_base,(ulong64)ppVar9,
                       (ulong64)(ppVar9 + uVar10),0,(pas_zero_mode)param_2,ppVar16);
        return;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_simple_large_free_heap_deallocate @ 140d8b780

void __cdecl
pas_simple_large_free_heap_deallocate
          (pas_simple_large_free_heap *param_1,ulong64 param_2,ulong64 param_3,pas_zero_mode param_4
          ,pas_large_free_heap_config *param_5)

{
  code *pcVar1;
  BOOLEAN BVar2;
  pas_large_free_heap_config *in_stack_ffffffffffffffd0;
  
  if (param_3 <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 != 0) {
    BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar2 == '\0') {
      merge_physical(param_1,param_2,param_3,(ulonglong)param_4,(pas_zero_mode)param_5,
                     in_stack_ffffffffffffffd0);
      fix_free_list_if_necessary(param_1,param_5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// merge_physical @ 140d8b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
merge_physical(pas_simple_large_free_heap *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,
              pas_zero_mode param_5,pas_large_free_heap_config *param_6)

{
  code *pcVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined7 uVar4;
  uint6 uVar5;
  undefined2 uVar6;
  uint6 uVar7;
  undefined2 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  pas_large_free *ppVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  char cVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  pas_large_free *ppVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 in_stack_0000002c;
  undefined1 auStack_e8 [32];
  pas_simple_large_free_heap *local_c8;
  ulong64 local_c0;
  uint local_b4;
  ulong64 local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulong64 local_88;
  ulong64 local_80;
  pas_large_free local_78;
  ulonglong local_58 [3];
  
  local_58[2] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c0 = param_3;
  local_88 = param_2;
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 == param_2) {
LAB_140d8bce9:
    if ((local_58[2] ^ (ulonglong)auStack_e8) == __security_cookie.value) {
      return;
    }
    goto LAB_140d8bdf7;
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar13 = (uint)param_4;
  if (1 < uVar13) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar23 = param_2 & 0xffffffffffff;
  pas_simple_large_free_heap_num_merge_calls = pas_simple_large_free_heap_num_merge_calls + 1;
  uVar27 = param_3 & 0xffffffffffff;
  local_80 = param_1->free_list_size;
  if (local_80 != 0) {
    local_a8 = param_1->free_list_capacity;
    uVar20 = 0;
    local_a0 = 0;
    do {
      pas_simple_large_free_heap_num_merge_nodes_considered =
           pas_simple_large_free_heap_num_merge_nodes_considered + 1;
      local_c8 = param_1;
      local_b4 = uVar13;
      local_98 = uVar23;
      local_90 = uVar27;
      if (uVar20 < local_a8) {
        ppVar11 = param_1->free_list + uVar20;
      }
      else {
        if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (3 < uVar20 - local_a8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        ppVar11 = bootstrap_free_list + (uVar20 - local_a8);
      }
      if ((((*(ulonglong *)ppVar11 ^ param_3) & 0xffffffffffff) == 0) ||
         (((*(ulonglong *)&ppVar11->end ^ param_2) & 0xffffffffffff) == 0)) {
        uVar22 = uVar27;
        uVar10 = 0;
        uVar21 = param_4 & 0xffffffff;
        uVar25 = uVar23;
        uVar12 = *(ulonglong *)&ppVar11->offset_in_type;
        uVar18 = *(ulonglong *)ppVar11;
        uVar9 = *(ulonglong *)&ppVar11->end;
        uVar19 = *(uint *)&ppVar11->zero_mode;
        do {
          uVar17 = uVar19;
          uVar28 = uVar9;
          uVar26 = uVar18;
          uVar14 = uVar12;
          uVar18 = uVar25;
          uVar16 = uVar21;
          uVar12 = uVar10;
          uVar9 = uVar22;
          uVar22 = uVar28;
          uVar10 = uVar14;
          uVar21 = (ulonglong)uVar17;
          uVar25 = uVar26;
          uVar19 = (uint)uVar16;
        } while (((uVar9 ^ uVar26) & 0xffffffffffff) == 0);
        local_b0 = pas_simple_large_free_heap_num_merge_nodes_considered;
        if (((uVar18 ^ uVar28) & 0xffffffffffff) == 0) {
          uVar22 = *(ulonglong *)CONCAT44(in_stack_0000002c,param_5);
          uVar14 = uVar14 & 0xffffffffffff;
          if (uVar22 <= uVar14) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar10 = ((uVar28 & 0xffffffffffff) + uVar14) - (uVar26 & 0xffffffffffff);
          if ((uVar10 | uVar22) >> 0x20 == 0) {
            uVar10 = (uVar10 & 0xffffffff) % (uVar22 & 0xffffffff);
          }
          else {
            uVar10 = uVar10 % uVar22;
          }
          if (uVar10 == (uVar12 & 0xffffffffffff)) {
            cVar15 = (char)uVar17;
            if (cVar15 != '\0') {
              if (cVar15 != '\x01') {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              if ((uVar16 & 0xfe) != 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
            }
            if ((uVar9 & 0xffffffffffff) != (uVar26 & 0xffffffffffff)) {
              if (1 < local_a0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              local_58[local_a0] = uVar20;
              local_a0 = local_a0 + 1;
            }
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != local_80);
    if (2 < local_a0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_a0 != 0) {
      local_b0 = local_58[0];
      if (local_58[0] < local_a8) {
        ppVar11 = param_1->free_list + local_58[0];
      }
      else {
        if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (3 < local_58[0] - local_a8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        ppVar11 = bootstrap_free_list + (local_58[0] - local_a8);
      }
      uVar20 = *(ulonglong *)&ppVar11->end;
      uVar22 = *(ulonglong *)&ppVar11->offset_in_type;
      uVar10 = 0;
      uVar21 = *(ulonglong *)ppVar11;
      uVar25 = param_4 & 0xffffffff;
      uVar13 = *(uint *)&ppVar11->zero_mode;
      do {
        uVar19 = uVar13;
        uVar14 = uVar25;
        uVar9 = uVar27;
        uVar18 = uVar23;
        uVar23 = uVar21;
        uVar12 = uVar10;
        uVar10 = uVar22;
        uVar27 = uVar20;
        uVar20 = uVar9;
        uVar22 = uVar12;
        uVar21 = uVar18;
        uVar25 = (ulonglong)uVar19;
        uVar13 = (uint)uVar14;
      } while (((uVar27 ^ uVar18) & 0xffffffffffff) == 0);
      if (((uVar23 ^ uVar9) & 0xffffffffffff) != 0) {
LAB_140d8bf95:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar23 = *(ulonglong *)CONCAT44(in_stack_0000002c,param_5);
      uVar12 = uVar12 & 0xffffffffffff;
      if (uVar23 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar18 = uVar18 & 0xffffffffffff;
      uVar20 = ((uVar9 & 0xffffffffffff) + uVar12) - uVar18;
      if ((uVar20 | uVar23) >> 0x20 == 0) {
        if ((uVar20 & 0xffffffff) % (uVar23 & 0xffffffff) != (uVar10 & 0xffffffffffff))
        goto LAB_140d8bf95;
      }
      else if (uVar20 % uVar23 != (uVar10 & 0xffffffffffff)) goto LAB_140d8bf95;
      cVar15 = (char)uVar14;
      uVar13 = (uint)cVar15;
      if (cVar15 != '\0') {
        if (uVar13 != 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar13 = (uint)(char)uVar19;
        if (1 < uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      uVar27 = uVar27 & 0xffffffffffff;
      if (uVar27 == uVar18) goto LAB_140d8bf95;
      if (local_a0 != 2) {
        if (local_58[0] < local_a8) {
          ppVar11 = param_1->free_list + local_58[0];
        }
        else {
          if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (3 < local_58[0] - local_a8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          ppVar11 = bootstrap_free_list + (local_58[0] - local_a8);
        }
        *(ulonglong *)ppVar11 = uVar18;
        *(ulonglong *)&ppVar11->end = uVar27;
        *(ulonglong *)&ppVar11->offset_in_type = uVar12;
        *(uint *)&ppVar11->zero_mode = uVar13;
        goto LAB_140d8bce9;
      }
      local_c0 = local_58[1];
      if (local_58[1] < local_a8) {
        ppVar11 = param_1->free_list + local_58[1];
      }
      else {
        if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (3 < local_58[1] - local_a8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        ppVar11 = bootstrap_free_list + (local_58[1] - local_a8);
      }
      uVar20 = *(ulonglong *)&ppVar11->end;
      uVar22 = *(ulonglong *)&ppVar11->offset_in_type;
      uVar10 = *(ulonglong *)ppVar11;
      uVar19 = *(uint *)&ppVar11->zero_mode;
      do {
        uVar17 = uVar19;
        uVar19 = uVar13;
        uVar9 = uVar10;
        uVar25 = uVar27;
        uVar21 = uVar22;
        uVar10 = uVar18;
        uVar22 = uVar12;
        uVar27 = uVar20;
        uVar20 = uVar25;
        uVar12 = uVar21;
        uVar18 = uVar9;
        uVar13 = uVar17;
      } while (((uVar27 ^ uVar10) & 0xffffffffffff) == 0);
      if (((uVar9 ^ uVar25) & 0xffffffffffff) != 0) {
LAB_140d8bf97:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar22 = uVar22 & 0xffffffffffff;
      if (uVar23 <= uVar22) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar10 = uVar10 & 0xffffffffffff;
      uVar20 = ((uVar25 & 0xffffffffffff) + uVar22) - uVar10;
      if ((uVar20 | uVar23) >> 0x20 == 0) {
        if ((uVar20 & 0xffffffff) % (uVar23 & 0xffffffff) != (uVar21 & 0xffffffffffff))
        goto LAB_140d8bf97;
      }
      else if (uVar20 % uVar23 != (uVar21 & 0xffffffffffff)) goto LAB_140d8bf97;
      cVar15 = (char)uVar19;
      if (cVar15 == '\0') {
        uVar13 = 0;
      }
      else {
        if (cVar15 != '\x01') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar13 = (uint)(char)uVar17;
        if (1 < uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      uVar27 = uVar27 & 0xffffffffffff;
      if (uVar27 == uVar10) goto LAB_140d8bf97;
      uVar23 = local_58[0] - local_a8;
      if (local_58[0] < local_a8) {
        ppVar11 = param_1->free_list;
        *(ulonglong *)(ppVar11 + local_58[0]) = uVar10;
        *(ulonglong *)&ppVar11[local_58[0]].end = uVar27;
        *(ulonglong *)&ppVar11[local_58[0]].offset_in_type = uVar22;
        *(uint *)&ppVar11[local_58[0]].zero_mode = uVar13;
        uVar27 = param_1->free_list_capacity;
        if (local_58[1] < uVar27) {
          ppVar24 = param_1->free_list + local_58[1];
          uVar23 = param_1->free_list_size - 1;
          param_1->free_list_size = uVar23;
          ppVar11 = param_1->free_list;
          if (uVar23 < uVar27) goto LAB_140d8bdc8;
          if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        else {
          if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
LAB_140d8bf1f:
          if (3 < local_58[1] - uVar27) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          ppVar24 = bootstrap_free_list + (local_58[1] - uVar27);
          uVar23 = param_1->free_list_size - 1;
          param_1->free_list_size = uVar23;
          ppVar11 = pas_bootstrap_free_heap.private_base.free_list;
          if (uVar23 < uVar27) goto LAB_140d8bdc8;
        }
LAB_140d8bf6f:
        if (3 < uVar23 - uVar27) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        ppVar11 = bootstrap_free_list + (uVar23 - uVar27);
      }
      else {
        if ((pas_manually_decommittable_large_free_heap *)param_1 != &pas_bootstrap_free_heap) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (3 < uVar23) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *(ulonglong *)(bootstrap_free_list + uVar23) = uVar10;
        *(ulonglong *)&bootstrap_free_list[uVar23].end = uVar27;
        *(ulonglong *)&bootstrap_free_list[uVar23].offset_in_type = uVar22;
        *(uint *)&bootstrap_free_list[uVar23].zero_mode = uVar13;
        uVar27 = pas_bootstrap_free_heap.private_base.free_list_capacity;
        if (pas_bootstrap_free_heap.private_base.free_list_capacity <= local_58[1])
        goto LAB_140d8bf1f;
        ppVar24 = pas_bootstrap_free_heap.private_base.free_list + local_58[1];
        uVar23 = pas_bootstrap_free_heap.private_base.free_list_size - 1;
        ppVar11 = pas_bootstrap_free_heap.private_base.free_list;
        pas_bootstrap_free_heap.private_base.free_list_size = uVar23;
        if (pas_bootstrap_free_heap.private_base.free_list_capacity <= uVar23) goto LAB_140d8bf6f;
LAB_140d8bdc8:
        ppVar11 = ppVar11 + uVar23;
      }
      uVar5 = ppVar11->begin;
      uVar6 = *(undefined2 *)&ppVar11->field_0x6;
      uVar7 = ppVar11->end;
      uVar8 = *(undefined2 *)&ppVar11->field_0xe;
      uVar2 = *(undefined2 *)&ppVar11->field_0x16;
      bVar3 = ppVar11->zero_mode;
      uVar4 = *(undefined7 *)&ppVar11->field_0x19;
      ppVar24->offset_in_type = ppVar11->offset_in_type;
      *(undefined2 *)&ppVar24->field_0x16 = uVar2;
      ppVar24->zero_mode = bVar3;
      *(undefined7 *)&ppVar24->field_0x19 = uVar4;
      ppVar24->begin = uVar5;
      *(undefined2 *)&ppVar24->field_0x6 = uVar6;
      ppVar24->end = uVar7;
      *(undefined2 *)&ppVar24->field_0xe = uVar8;
      if ((local_58[2] ^ (ulonglong)auStack_e8) == __security_cookie.value) {
        return;
      }
      goto LAB_140d8bdf7;
    }
  }
  local_78.offset_in_type = 0;
  local_78._22_2_ = 0;
  local_78._0_8_ = uVar23;
  local_78._8_8_ = uVar27;
  local_78._24_4_ = uVar13;
  append(param_1,&local_78);
  if ((local_58[2] ^ (ulonglong)auStack_e8) == __security_cookie.value) {
    return;
  }
LAB_140d8bdf7:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_simple_large_free_heap_for_each_free @ 140d8bfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_simple_large_free_heap_for_each_free
          (pas_simple_large_free_heap *param_1,_func___cdecl_bool_pas_large_free_void_ptr *param_2,
          void *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  pas_large_free *ppVar4;
  longlong lVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  undefined1 auStack_88 [32];
  pas_large_free local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar7 = param_1->free_list_size;
  if ((pas_manually_decommittable_large_free_heap *)param_1 == &pas_bootstrap_free_heap) {
    lVar5 = uVar7 << 5;
    uVar6 = uVar7;
    do {
      uVar6 = uVar6 - 1;
      if (uVar6 == 0xffffffffffffffff) break;
      uVar7 = uVar7 - 1;
      if (uVar6 < pas_bootstrap_free_heap.private_base.free_list_capacity) {
        ppVar4 = (pas_large_free *)
                 ((longlong)&pas_bootstrap_free_heap.private_base.free_list[-1].begin + lVar5);
      }
      else {
        if (3 < uVar6 - pas_bootstrap_free_heap.private_base.free_list_capacity) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        ppVar4 = bootstrap_free_list +
                 (uVar7 - pas_bootstrap_free_heap.private_base.free_list_capacity);
      }
      local_68.begin._0_4_ = (undefined4)ppVar4->begin;
      local_68._4_4_ = *(undefined4 *)((longlong)&ppVar4->begin + 4);
      local_68.end._0_4_ = (undefined4)ppVar4->end;
      local_68._12_4_ = *(undefined4 *)((longlong)&ppVar4->end + 4);
      local_68.offset_in_type._0_4_ = (undefined4)ppVar4->offset_in_type;
      local_68._20_4_ = *(undefined4 *)((longlong)&ppVar4->offset_in_type + 4);
      local_68.zero_mode = ppVar4->zero_mode;
      local_68._25_3_ = *(undefined3 *)&ppVar4->field_0x19;
      local_68._28_4_ = *(undefined4 *)&ppVar4->field_0x1c;
      bVar3 = (*param_2)(&local_68,param_3);
      lVar5 = lVar5 + -0x20;
    } while (bVar3);
  }
  else {
    lVar5 = uVar7 * 0x20;
    do {
      bVar3 = uVar7 == 0;
      uVar7 = uVar7 - 1;
      if (bVar3) break;
      if (param_1->free_list_capacity <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      puVar1 = (undefined4 *)((longlong)&param_1->free_list[-1].begin + lVar5);
      local_68.begin._0_4_ = *puVar1;
      local_68._4_4_ = puVar1[1];
      local_68.end._0_4_ = puVar1[2];
      local_68._12_4_ = puVar1[3];
      puVar1 = (undefined4 *)((longlong)&param_1->free_list[-1].offset_in_type + lVar5);
      local_68.offset_in_type._0_4_ = *puVar1;
      local_68._20_4_ = puVar1[1];
      local_68._24_4_ = puVar1[2];
      local_68._28_4_ = puVar1[3];
      bVar3 = (*param_2)(&local_68,param_3);
      lVar5 = lVar5 + -0x20;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// pas_simple_large_free_heap_get_num_free_bytes @ 140d8c100

ulong64 __cdecl pas_simple_large_free_heap_get_num_free_bytes(pas_simple_large_free_heap *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  pas_large_free *ppVar6;
  ulong64 uVar7;
  pas_large_free *ppVar8;
  longlong lVar9;
  
  uVar5 = param_1->free_list_size;
  if (uVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = param_1->free_list_capacity;
    if ((pas_manually_decommittable_large_free_heap *)param_1 == &pas_bootstrap_free_heap) {
      ppVar8 = pas_bootstrap_free_heap.private_base.free_list + uVar5;
      uVar4 = 0;
      uVar7 = uVar5;
      do {
        uVar7 = uVar7 - 1;
        ppVar8 = ppVar8 + -1;
        uVar5 = uVar5 - 1;
        ppVar6 = ppVar8;
        if (uVar2 <= uVar7) {
          if (3 < uVar7 - uVar2) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          ppVar6 = bootstrap_free_list + (uVar5 - uVar2);
        }
        uVar4 = (uVar4 - (*(ulonglong *)ppVar6 & 0xffffffffffff)) +
                (*(ulonglong *)&ppVar6->end & 0xffffffffffff);
      } while (uVar7 != 0);
    }
    else {
      uVar1 = uVar5 - 1;
      lVar9 = uVar5 * 0x20 + -0x18;
      uVar4 = 0;
      do {
        if (uVar2 <= uVar1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar4 = (uVar4 - (*(ulonglong *)((longlong)param_1->free_list + lVar9 + -8) & 0xffffffffffff
                         )) +
                (*(ulonglong *)((longlong)&param_1->free_list->begin + lVar9) & 0xffffffffffff);
        lVar9 = lVar9 + -0x20;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return uVar4;
}

// pas_simple_large_free_heap_dump_to_log @ 140d8c200

void __cdecl pas_simple_large_free_heap_dump_to_log(pas_simple_large_free_heap *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  pas_large_free *ppVar4;
  longlong lVar5;
  
  pas_log("Free list:\n");
  if (param_1->free_list_size != 0) {
    if ((pas_manually_decommittable_large_free_heap *)param_1 == &pas_bootstrap_free_heap) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        if (uVar3 < pas_bootstrap_free_heap.private_base.free_list_capacity) {
          ppVar4 = (pas_large_free *)
                   ((longlong)&(pas_bootstrap_free_heap.private_base.free_list)->begin + lVar5);
        }
        else {
          if (3 < uVar3 - pas_bootstrap_free_heap.private_base.free_list_capacity) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          ppVar4 = bootstrap_free_list +
                   (uVar3 - pas_bootstrap_free_heap.private_base.free_list_capacity);
        }
        pas_log("    %p...%p: size = %zu\n");
        if ((*(ulonglong *)ppVar4 & 0xffffffffffff) == 0) {
LAB_140d8c34c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((*(ulonglong *)&ppVar4->end & 0xffffffffffff) <= (*(ulonglong *)ppVar4 & 0xffffffffffff)
           ) {
LAB_140d8c34e:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar3 < pas_bootstrap_free_heap.private_base.free_list_size);
    }
    else {
      lVar5 = 8;
      uVar3 = 0;
      do {
        if (param_1->free_list_capacity <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        ppVar4 = param_1->free_list;
        pas_log("    %p...%p: size = %zu\n");
        uVar2 = *(ulonglong *)((longlong)ppVar4 + lVar5 + -8) & 0xffffffffffff;
        if (uVar2 == 0) goto LAB_140d8c34c;
        if ((*(ulonglong *)((longlong)&ppVar4->begin + lVar5) & 0xffffffffffff) <= uVar2)
        goto LAB_140d8c34e;
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar3 < param_1->free_list_size);
    }
  }
  return;
}

// dump_free_list @ 140d8c210

void __cdecl dump_free_list(pas_simple_large_free_heap *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  pas_large_free *ppVar4;
  longlong lVar5;
  
  pas_log("Free list:\n");
  if (param_1->free_list_size != 0) {
    if ((pas_manually_decommittable_large_free_heap *)param_1 == &pas_bootstrap_free_heap) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        if (uVar3 < pas_bootstrap_free_heap.private_base.free_list_capacity) {
          ppVar4 = (pas_large_free *)
                   ((longlong)&(pas_bootstrap_free_heap.private_base.free_list)->begin + lVar5);
        }
        else {
          if (3 < uVar3 - pas_bootstrap_free_heap.private_base.free_list_capacity) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          ppVar4 = bootstrap_free_list +
                   (uVar3 - pas_bootstrap_free_heap.private_base.free_list_capacity);
        }
        pas_log("    %p...%p: size = %zu\n");
        if ((*(ulonglong *)ppVar4 & 0xffffffffffff) == 0) {
LAB_140d8c34c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((*(ulonglong *)&ppVar4->end & 0xffffffffffff) <= (*(ulonglong *)ppVar4 & 0xffffffffffff)
           ) {
LAB_140d8c34e:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar3 < pas_bootstrap_free_heap.private_base.free_list_size);
    }
    else {
      lVar5 = 8;
      uVar3 = 0;
      do {
        if (param_1->free_list_capacity <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        ppVar4 = param_1->free_list;
        pas_log("    %p...%p: size = %zu\n");
        uVar2 = *(ulonglong *)((longlong)ppVar4 + lVar5 + -8) & 0xffffffffffff;
        if (uVar2 == 0) goto LAB_140d8c34c;
        if ((*(ulonglong *)((longlong)&ppVar4->begin + lVar5) & 0xffffffffffff) <= uVar2)
        goto LAB_140d8c34e;
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar3 < param_1->free_list_size);
    }
  }
  return;
}

// append @ 140d8c360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl append(pas_simple_large_free_heap *param_1,pas_large_free *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint6 uVar6;
  uint6 uVar7;
  byte bVar8;
  undefined3 uVar9;
  ulonglong uVar10;
  pas_large_free *ppVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  bool bVar15;
  undefined1 auStack_68 [40];
  pas_allocation_result local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((*(ulonglong *)param_2 & 0xffffffffffff) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((*(ulonglong *)&param_2->end & 0xffffffffffff) <= (*(ulonglong *)param_2 & 0xffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((pas_manually_decommittable_large_free_heap *)param_1 == &pas_bootstrap_free_heap) {
    if (pas_bootstrap_free_heap.private_base.free_list_capacity + 4 <=
        pas_bootstrap_free_heap.private_base.free_list_size) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar14 = pas_bootstrap_free_heap.private_base.free_list_size + 1;
    bVar15 = pas_bootstrap_free_heap.private_base.free_list_capacity <=
             pas_bootstrap_free_heap.private_base.free_list_size;
    uVar12 = pas_bootstrap_free_heap.private_base.free_list_size -
             pas_bootstrap_free_heap.private_base.free_list_capacity;
    uVar10 = pas_bootstrap_free_heap.private_base.free_list_size;
    pas_bootstrap_free_heap.private_base.free_list_size = uVar14;
    if (bVar15) {
      if (3 < uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      ppVar11 = bootstrap_free_list + uVar12;
      goto LAB_140d8c48a;
    }
  }
  else {
    uVar10 = param_1->free_list_size;
    uVar14 = param_1->free_list_capacity;
    if (uVar14 < uVar10 + 1) {
      uVar14 = uVar14 * 2 + 2;
      uVar13 = 0;
      pas_bootstrap_free_heap_allocate
                (&local_40,uVar14 * 0x20,"pas_simple_large_free_heap/free_list",
                 pas_object_allocation);
      if (param_1->free_list_size != 0) {
        memcpy((void *)local_40.begin,param_1->free_list,param_1->free_list_size << 5);
        uVar13 = param_1->free_list_size;
      }
      memset((pas_large_free *)(local_40.begin + uVar13 * 0x20),0,(uVar14 - uVar13) * 0x20);
      pas_bootstrap_free_heap_deallocate
                (param_1->free_list,param_1->free_list_capacity << 5,pas_object_allocation);
      param_1->free_list = (pas_large_free *)local_40.begin;
      param_1->free_list_capacity = uVar14;
      uVar10 = param_1->free_list_size;
    }
    if (uVar14 <= uVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    param_1->free_list_size = uVar10 + 1;
  }
  ppVar11 = param_1->free_list + uVar10;
LAB_140d8c48a:
  uVar6 = param_2->begin;
  uVar2 = *(undefined4 *)((longlong)&param_2->begin + 4);
  uVar7 = param_2->end;
  uVar3 = *(undefined4 *)((longlong)&param_2->end + 4);
  uVar4 = *(undefined4 *)((longlong)&param_2->offset_in_type + 4);
  bVar8 = param_2->zero_mode;
  uVar9 = *(undefined3 *)&param_2->field_0x19;
  uVar5 = *(undefined4 *)&param_2->field_0x1c;
  *(int *)&ppVar11->offset_in_type = (int)param_2->offset_in_type;
  *(undefined4 *)((longlong)&ppVar11->offset_in_type + 4) = uVar4;
  ppVar11->zero_mode = bVar8;
  *(undefined3 *)&ppVar11->field_0x19 = uVar9;
  *(undefined4 *)&ppVar11->field_0x1c = uVar5;
  *(int *)&ppVar11->begin = (int)uVar6;
  *(undefined4 *)((longlong)&ppVar11->begin + 4) = uVar2;
  *(int *)&ppVar11->end = (int)uVar7;
  *(undefined4 *)((longlong)&ppVar11->end + 4) = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


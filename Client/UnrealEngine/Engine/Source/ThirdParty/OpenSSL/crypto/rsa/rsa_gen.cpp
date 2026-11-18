// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// RSA_generate_key_ex @ 14f6bdc00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_generate_key_ex(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x68);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6bdc1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x70);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_14f6bdcb0(param_1,param_2,2,param_3,param_4);
  return;
}

// RSA_generate_multi_prime_key @ 14f6bdc50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
RSA_generate_multi_prime_key
          (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(longlong *)(param_1 + 8) + 0x70);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6bdc71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
    return uVar1;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(longlong *)(param_1 + 8) + 0x68);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00014f6bdc8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_4,param_5);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_14f6bdcb0();
  return uVar1;
}

// FUN_14f6bdcb0 @ 14f6bdcb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14f6bdcb0(longlong param_1,int param_2,uint param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 (*pauVar18) [16];
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  int local_78 [6];
  ulonglong uStack_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f6bdcc7;
  uStack_60 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar19 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_98 = (undefined8 *)0x0;
  uVar15 = 0;
  local_c0 = param_3;
  if (param_2 < 0x200) {
    local_d8 = CONCAT44(local_d8._4_4_,0x4e);
    uVar17 = 0x78;
    uVar15 = uVar19;
  }
  else if (((int)param_3 < 2) || (iVar1 = rsa_multip_cap(param_2), iVar1 < (int)param_3)) {
    local_d8 = CONCAT44(local_d8._4_4_,0x54);
    uVar17 = 0xa5;
  }
  else {
    uVar15 = BN_CTX_new();
    local_c8 = uVar15;
    if (uVar15 != 0) {
      BN_CTX_start(uVar15);
      local_80 = BN_CTX_get(uVar15);
      local_b0 = BN_CTX_get(uVar15);
      lVar7 = BN_CTX_get(uVar15);
      uVar6 = local_c0;
      local_88 = lVar7;
      if (lVar7 != 0) {
        uVar13 = 0;
        local_90 = (longlong)(int)local_c0;
        iVar1 = param_2 / (int)local_c0;
        param_2 = param_2 % (int)local_c0;
        auVar22._4_4_ = iVar1;
        auVar22._0_4_ = iVar1;
        auVar22._8_4_ = iVar1;
        auVar22._12_4_ = iVar1;
        if (7 < local_c0) {
          uVar2 = local_c0 & 0x80000007;
          if ((int)uVar2 < 0) {
            uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
          }
          auVar23._0_4_ = ___xmm_00000001000000010000000100000001 + iVar1;
          auVar23._4_4_ = _UNK_150631da4 + iVar1;
          auVar23._8_4_ = _UNK_150631da8 + iVar1;
          auVar23._12_4_ = _UNK_150631dac + iVar1;
          uVar8 = uVar19;
          pauVar18 = (undefined1 (*) [16])local_78;
          do {
            iVar4 = (int)uVar8;
            iVar3 = iVar4 + 4;
            auVar20._0_4_ = -(uint)(iVar4 + (int)__xmm_00000003000000020000000100000000 < param_2);
            auVar20._4_4_ = -(uint)(iVar4 + __xmm_00000003000000020000000100000000._4_4_ < param_2);
            auVar20._8_4_ = -(uint)(iVar4 + _UNK_150631e08 < param_2);
            auVar20._12_4_ = -(uint)(iVar4 + _UNK_150631e0c < param_2);
            uVar13 = iVar4 + 8;
            uVar8 = (ulonglong)uVar13;
            *pauVar18 = ~auVar20 & ___xmm_ffffffffffffffffffffffffffffffff & auVar22 |
                        ~(~auVar20 & ___xmm_ffffffffffffffffffffffffffffffff) & auVar23;
            auVar21._0_4_ = -(uint)(iVar3 + (int)__xmm_00000003000000020000000100000000 < param_2);
            auVar21._4_4_ = -(uint)(iVar3 + __xmm_00000003000000020000000100000000._4_4_ < param_2);
            auVar21._8_4_ = -(uint)(iVar3 + _UNK_150631e08 < param_2);
            auVar21._12_4_ = -(uint)(iVar3 + _UNK_150631e0c < param_2);
            pauVar18[1] = ~auVar21 & ___xmm_ffffffffffffffffffffffffffffffff & auVar22 |
                          ~(~auVar21 & ___xmm_ffffffffffffffffffffffffffffffff) & auVar23;
            pauVar18 = pauVar18 + 2;
          } while ((int)uVar13 < (int)(local_c0 - uVar2));
        }
        for (lVar14 = (longlong)(int)uVar13; lVar14 < local_90; lVar14 = lVar14 + 1) {
          iVar3 = iVar1 + 1;
          if (param_2 <= lVar14) {
            iVar3 = iVar1;
          }
          local_78[lVar14] = iVar3;
        }
        if (*(longlong *)(param_1 + 0x18) == 0) {
          lVar14 = BN_new();
          *(longlong *)(param_1 + 0x18) = lVar14;
          if (lVar14 == 0) goto LAB_14f6be220;
        }
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x28) = lVar14;
          if (lVar14 == 0) goto LAB_14f6be220;
        }
        if (*(longlong *)(param_1 + 0x20) == 0) {
          lVar14 = BN_new();
          *(longlong *)(param_1 + 0x20) = lVar14;
          if (lVar14 == 0) goto LAB_14f6be220;
        }
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x30) = lVar14;
          if (lVar14 == 0) goto LAB_14f6be220;
        }
        if (*(longlong *)(param_1 + 0x38) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x38) = lVar14;
          if (lVar14 == 0) goto LAB_14f6be220;
        }
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x40) = lVar14;
          if (lVar14 == 0) goto LAB_14f6be220;
        }
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x48) = lVar14;
          if (lVar14 == 0) goto LAB_14f6be220;
        }
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x50) = lVar14;
          if (lVar14 == 0) goto LAB_14f6be220;
        }
        uVar8 = uVar19;
        if (2 < (int)uVar6) {
          *(undefined4 *)(param_1 + 4) = 1;
          uVar8 = OPENSSL_sk_new_reserve(0,uVar6 - 2);
          if (uVar8 == 0) goto LAB_14f6be220;
          if (*(longlong *)(param_1 + 0x58) != 0) {
            OPENSSL_sk_pop_free(*(longlong *)(param_1 + 0x58),rsa_multip_info_free);
          }
          iVar1 = 2;
          *(ulonglong *)(param_1 + 0x58) = uVar8;
          if (2 < (int)local_c0) {
            do {
              local_98 = (undefined8 *)rsa_multip_info_new();
              if (local_98 == (undefined8 *)0x0) goto LAB_14f6be220;
              OPENSSL_sk_push(uVar8,local_98);
              iVar1 = iVar1 + 1;
            } while (iVar1 < (int)local_c0);
          }
        }
        lVar14 = BN_copy(*(undefined8 *)(param_1 + 0x20),param_4);
        if (lVar14 != 0) {
          local_a0 = 0;
          uVar15 = uVar19;
          if (0 < local_90) {
            do {
              lVar7 = local_a0;
              local_b4 = 0;
              iVar1 = (int)uVar15;
              if (iVar1 == 0) {
                uVar17 = *(undefined8 *)(param_1 + 0x30);
              }
              else if (iVar1 == 1) {
                uVar17 = *(undefined8 *)(param_1 + 0x38);
              }
              else {
                local_98 = (undefined8 *)OPENSSL_sk_value(uVar8,iVar1 + -2);
                uVar17 = *local_98;
              }
              BN_set_flags(uVar17,4);
              iVar3 = local_78[lVar7];
              local_a8 = iVar3;
LAB_14f6be040:
              local_d0 = param_5;
              local_d8 = 0;
              iVar4 = BN_generate_prime_ex(uVar17,iVar3,0,0);
              uVar11 = uVar19;
              uVar15 = local_c8;
              if (iVar4 == 0) goto LAB_14f6be220;
              while (iVar4 = (int)uVar11, iVar4 < iVar1) {
                if (iVar4 == 0) {
                  uVar10 = *(undefined8 *)(param_1 + 0x30);
                }
                else if (iVar4 == 1) {
                  uVar10 = *(undefined8 *)(param_1 + 0x38);
                }
                else {
                  puVar9 = (undefined8 *)OPENSSL_sk_value(uVar8,iVar4 + -2);
                  uVar10 = *puVar9;
                }
                iVar5 = BN_cmp(uVar17,uVar10);
                if (iVar5 == 0) goto LAB_14f6be040;
                uVar11 = (ulonglong)(iVar4 + 1);
              }
              uVar10 = BN_value_one();
              lVar7 = local_88;
              iVar4 = BN_sub(local_88,uVar17,uVar10);
              uVar15 = local_c8;
              if (iVar4 == 0) goto LAB_14f6be220;
              ERR_set_mark();
              BN_set_flags(lVar7,4);
              lVar7 = BN_mod_inverse(local_b0,lVar7,*(undefined8 *)(param_1 + 0x20));
              if (lVar7 == 0) {
                uVar6 = ERR_peek_last_error();
                uVar15 = local_c8;
                if (((uVar6 & 0xff000000) != 0x3000000) || ((uVar6 & 0xfff) != 0x6c))
                goto LAB_14f6be220;
                ERR_pop_to_mark();
                iVar4 = local_bc;
                iVar5 = BN_GENCB_call(param_5,2);
                local_bc = iVar4 + 1;
                uVar15 = local_c8;
                if (iVar5 == 0) goto LAB_14f6be220;
                goto LAB_14f6be040;
              }
              iVar4 = local_b8 + local_a8;
              local_b8 = iVar4;
              if (local_a0 != 1) {
                if (local_a0 != 0) {
                  uVar10 = *(undefined8 *)(param_1 + 0x18);
                  uVar16 = uVar17;
                  goto LAB_14f6be11f;
                }
LAB_14f6be270:
                iVar3 = BN_GENCB_call(param_5,3);
                uVar15 = local_c8;
                if (iVar3 != 0) goto LAB_14f6be289;
                goto LAB_14f6be220;
              }
              uVar10 = *(undefined8 *)(param_1 + 0x30);
              uVar16 = *(undefined8 *)(param_1 + 0x38);
LAB_14f6be11f:
              iVar5 = BN_mul(local_b0,uVar10,uVar16);
              lVar7 = local_88;
              uVar15 = local_c8;
              if ((iVar5 == 0) ||
                 (iVar4 = BN_rshift(local_88,local_b0,iVar4 + -4), uVar15 = local_c8, iVar4 == 0))
              goto LAB_14f6be220;
              uVar11 = BN_get_word(lVar7);
              if (uVar11 - 9 < 7) {
                if (((1 < iVar1) &&
                    (lVar7 = BN_copy(local_98[3],*(undefined8 *)(param_1 + 0x18)), uVar15 = local_c8
                    , lVar7 == 0)) ||
                   (lVar7 = BN_copy(*(undefined8 *)(param_1 + 0x18),local_b0), uVar15 = local_c8,
                   lVar7 == 0)) goto LAB_14f6be220;
                goto LAB_14f6be270;
              }
              local_b8 = local_b8 - local_a8;
              iVar4 = BN_GENCB_call(param_5,2);
              local_bc = local_bc + 1;
              uVar15 = local_c8;
              if (iVar4 == 0) goto LAB_14f6be220;
              if (4 < local_90) {
                if (uVar11 < 9) {
                  iVar3 = iVar3 + 1;
                  local_b4 = local_b4 + 1;
                }
                else {
                  iVar3 = iVar3 + -1;
                  local_b4 = local_b4 + 1;
                }
                goto LAB_14f6be040;
              }
              if (local_b4 != 4) {
                local_b4 = local_b4 + 1;
                goto LAB_14f6be040;
              }
              iVar1 = -1;
              local_b8 = 0;
              local_a0 = -1;
LAB_14f6be289:
              local_a0 = local_a0 + 1;
              uVar15 = (ulonglong)(iVar1 + 1);
              lVar7 = local_88;
            } while (local_a0 < local_90);
          }
          iVar1 = BN_cmp(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
          if (iVar1 < 0) {
            uVar17 = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x38) = uVar17;
          }
          uVar10 = BN_value_one();
          uVar17 = local_b0;
          iVar1 = BN_sub(local_b0,*(undefined8 *)(param_1 + 0x30),uVar10);
          uVar15 = local_c8;
          if (iVar1 != 0) {
            uVar10 = BN_value_one();
            iVar1 = BN_sub(lVar7,*(undefined8 *)(param_1 + 0x38),uVar10);
            uVar10 = local_80;
            uVar15 = local_c8;
            if ((iVar1 != 0) && (iVar1 = BN_mul(local_80,uVar17,lVar7,local_c8), iVar1 != 0)) {
              iVar1 = 2;
              if (2 < (int)local_c0) {
                do {
                  puVar9 = (undefined8 *)OPENSSL_sk_value(uVar8,iVar1 + -2);
                  uVar10 = BN_value_one();
                  iVar3 = BN_sub(puVar9[1],*puVar9,uVar10);
                  uVar10 = local_80;
                  if ((iVar3 == 0) ||
                     (iVar3 = BN_mul(local_80,local_80,puVar9[1],uVar15), iVar3 == 0))
                  goto LAB_14f6be220;
                  iVar1 = iVar1 + 1;
                } while (iVar1 < (int)local_c0);
              }
              lVar14 = BN_new();
              if (lVar14 != 0) {
                BN_with_flags(lVar14,uVar10,4);
                lVar12 = BN_mod_inverse(*(undefined8 *)(param_1 + 0x28),
                                        *(undefined8 *)(param_1 + 0x20),lVar14,uVar15);
                if (lVar12 != 0) {
                  BN_free(lVar14);
                  lVar14 = BN_new();
                  if (lVar14 == 0) goto LAB_14f6be220;
                  BN_with_flags(lVar14,*(undefined8 *)(param_1 + 0x28),4);
                  local_d8 = uVar15;
                  iVar1 = BN_div(0,*(undefined8 *)(param_1 + 0x40),lVar14,uVar17);
                  if (iVar1 != 0) {
                    local_d8 = uVar15;
                    iVar1 = BN_div(0,*(undefined8 *)(param_1 + 0x48),lVar14,lVar7);
                    uVar6 = local_c0;
                    if (iVar1 != 0) {
                      iVar3 = 2;
                      iVar1 = 2;
                      if (2 < (int)local_c0) {
                        do {
                          lVar7 = OPENSSL_sk_value(uVar8,iVar1 + -2);
                          local_d8 = uVar15;
                          iVar4 = BN_div(0,*(undefined8 *)(lVar7 + 8),lVar14,
                                         *(undefined8 *)(lVar7 + 8));
                          if (iVar4 == 0) goto LAB_14f6be513;
                          iVar1 = iVar1 + 1;
                        } while (iVar1 < (int)uVar6);
                      }
                      BN_free(lVar14);
                      lVar14 = BN_new();
                      if (lVar14 == 0) goto LAB_14f6be220;
                      BN_with_flags(lVar14,*(undefined8 *)(param_1 + 0x30),4);
                      lVar7 = BN_mod_inverse(*(undefined8 *)(param_1 + 0x50),
                                             *(undefined8 *)(param_1 + 0x38),lVar14,uVar15);
                      if (lVar7 != 0) {
                        if (2 < (int)uVar6) {
                          do {
                            puVar9 = (undefined8 *)OPENSSL_sk_value(uVar8,iVar3 + -2);
                            BN_with_flags(lVar14,*puVar9,4);
                            lVar7 = BN_mod_inverse(puVar9[2],puVar9[3],lVar14,uVar15);
                            if (lVar7 == 0) goto LAB_14f6be513;
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)uVar6);
                        }
                        BN_free(lVar14);
                        uVar19 = 1;
                        goto LAB_14f6be54a;
                      }
                    }
                  }
                }
LAB_14f6be513:
                BN_free(lVar14);
                uVar17 = 3;
                local_d8 = CONCAT44(local_d8._4_4_,0x183);
                goto LAB_14f6be536;
              }
            }
          }
        }
      }
    }
LAB_14f6be220:
    local_d8 = CONCAT44(local_d8._4_4_,0x183);
    uVar17 = 3;
  }
LAB_14f6be536:
  ERR_put_error(4,0x81,uVar17,"crypto\\rsa\\rsa_gen.c");
LAB_14f6be54a:
  BN_CTX_end(uVar15);
  BN_CTX_free(uVar15);
  return uVar19;
}

// FUN_14f6be590 @ 14f6be590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6be590(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f6be5b0 @ 14f6be5b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6be5b0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6be5d0 @ 14f6be5d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6be5d0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6be5f0 @ 14f6be5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6be5f0(void)

{
  OPENSSL_sk_value();
  return;
}


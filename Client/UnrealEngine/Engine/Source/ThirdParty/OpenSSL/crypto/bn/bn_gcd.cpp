// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// BN_gcd @ 14f727fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_gcd(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar10;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar19;
  uint uVar20;
  uint local_38;
  ulonglong uVar9;
  ulonglong uVar11;
  ulonglong uVar14;
  ulonglong uVar18;
  ulonglong uVar21;
  
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 1;
  local_38 = 1;
  uVar16 = 0;
  iVar1 = BN_is_zero(param_3);
  if (iVar1 == 0) {
    iVar1 = BN_is_zero(param_2);
    if (iVar1 == 0) {
      BN_CTX_start(param_4);
      uVar5 = BN_CTX_get(param_4);
      plVar6 = (longlong *)BN_CTX_get(param_4);
      uVar15 = uVar14;
      if (((plVar6 != (longlong *)0x0) && (iVar1 = BN_lshift1(plVar6,param_3), iVar1 != 0)) &&
         (iVar1 = BN_lshift1(param_1,param_2), iVar1 != 0)) {
        if (0 < *(int *)((longlong)param_1 + 0xc)) {
          uVar19 = uVar14;
          uVar21 = uVar14;
          do {
            uVar16 = (uint)uVar15;
            if ((longlong)*(int *)((longlong)plVar6 + 0xc) <= (longlong)uVar19) break;
            lVar4 = 0x10;
            uVar7 = ~(*(ulonglong *)(*param_1 + uVar19 * 8) | *(ulonglong *)(*plVar6 + uVar19 * 8));
            uVar9 = uVar14;
            uVar11 = uVar14;
            uVar18 = uVar14;
            do {
              uVar12 = uVar12 & (uint)uVar7;
              uVar16 = (int)uVar15 + uVar12;
              uVar15 = (ulonglong)uVar16;
              uVar12 = uVar12 & (uint)(uVar7 >> 1);
              uVar17 = (int)uVar18 + uVar12;
              uVar18 = (ulonglong)uVar17;
              uVar12 = uVar12 & (uint)(uVar7 >> 2);
              uVar10 = (int)uVar11 + uVar12;
              uVar11 = (ulonglong)uVar10;
              uVar12 = uVar12 & (uint)(uVar7 >> 3);
              uVar8 = (int)uVar9 + uVar12;
              uVar9 = (ulonglong)uVar8;
              uVar7 = uVar7 >> 4;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            uVar20 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar20;
            uVar19 = uVar19 + 1;
            uVar16 = uVar16 + uVar8 + uVar10 + uVar17;
            uVar15 = (ulonglong)uVar16;
          } while ((int)uVar20 < *(int *)((longlong)param_1 + 0xc));
        }
        iVar1 = BN_rshift(param_1,param_1,uVar16);
        uVar15 = uVar13;
        if ((iVar1 != 0) && (iVar1 = BN_rshift(plVar6,plVar6,uVar16), iVar1 != 0)) {
          iVar1 = (int)plVar6[1];
          if ((int)plVar6[1] <= (int)param_1[1]) {
            iVar1 = (int)param_1[1];
          }
          iVar1 = iVar1 + 1;
          lVar4 = bn_wexpand(param_1,iVar1);
          uVar15 = uVar14;
          if (((lVar4 != 0) && (lVar4 = bn_wexpand(plVar6,iVar1), lVar4 != 0)) &&
             (lVar4 = bn_wexpand(uVar5,iVar1), lVar4 != 0)) {
            BN_consttime_swap(~(uint)*(undefined8 *)*param_1 & 1,param_1,plVar6,iVar1);
            iVar2 = BN_num_bits(param_1);
            iVar3 = BN_num_bits(plVar6);
            if (iVar3 <= iVar2) {
              iVar3 = iVar2;
            }
            iVar3 = iVar3 * 3 + 4;
            if (0 < iVar3) {
              do {
                uVar12 = ~((int)plVar6[1] + -1 >> 0x1f) & (int)-local_38 >> 0x1f & *(uint *)*plVar6
                         & 1;
                *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) ^ uVar12;
                BN_consttime_swap(uVar12,param_1,plVar6,iVar1);
                local_38 = (-uVar12 & -local_38 | uVar12 - 1 & local_38) + 1;
                iVar2 = BN_add(uVar5,plVar6,param_1);
                uVar15 = uVar13;
                if (iVar2 == 0) goto LAB_14f72829f;
                BN_consttime_swap((ulonglong)(~((int)plVar6[1] + -1 >> 0x1f) & 1) &
                                  *(ulonglong *)*plVar6,plVar6,uVar5,iVar1);
                iVar2 = BN_rshift1(plVar6,plVar6);
                if (iVar2 == 0) goto LAB_14f72829f;
                uVar12 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar12;
              } while ((int)uVar12 < iVar3);
            }
            *(undefined4 *)(param_1 + 2) = 0;
            iVar1 = BN_lshift(param_1,param_1,uVar16);
            uVar15 = uVar13;
            if (iVar1 != 0) {
              iVar1 = BN_rshift1(param_1,param_1);
              uVar15 = 0;
              if (iVar1 != 0) {
                uVar15 = 1;
              }
            }
          }
        }
      }
LAB_14f72829f:
      BN_CTX_end(param_4);
    }
    else {
      lVar4 = BN_copy(param_1,param_3);
      *(undefined4 *)(param_1 + 2) = 0;
      uVar15 = (ulonglong)(lVar4 != 0);
    }
  }
  else {
    lVar4 = BN_copy(param_1,param_2);
    *(undefined4 *)(param_1 + 2) = 0;
    uVar15 = (ulonglong)(lVar4 != 0);
  }
  return uVar15;
}

// BN_mod_inverse @ 14f7282d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_mod_inverse(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = 0x14f7282ea;
  lVar1 = 0;
  local_res20[0] = 0;
  if ((param_4 == 0) && (lVar1 = BN_CTX_new(), param_4 = lVar1, lVar1 == 0)) {
    ERR_put_error(3,0x6e,0x41,"crypto\\bn\\bn_gcd.c",CONCAT44(uVar2,0x20d));
    return 0;
  }
  uVar3 = int_bn_mod_inverse(param_1,param_2,param_3,param_4,local_res20,uVar3);
  if (local_res20[0] != 0) {
    ERR_put_error(3,0x6e,0x6c,"crypto\\bn\\bn_gcd.c",0x214);
  }
  BN_CTX_free(lVar1);
  return uVar3;
}

// FUN_14f7283a0 @ 14f7283a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7283a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_58;
  undefined1 local_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = 0x14f7283c9;
  lVar9 = 0;
  local_58 = 0;
  BN_CTX_start(param_4);
  lVar2 = BN_CTX_get(param_4);
  lVar3 = BN_CTX_get(param_4);
  lVar4 = BN_CTX_get(param_4);
  uVar5 = BN_CTX_get(param_4);
  lVar6 = BN_CTX_get(param_4);
  lVar7 = BN_CTX_get(param_4);
  lVar8 = BN_CTX_get(param_4);
  if (lVar8 != 0) {
    lVar9 = param_1;
    if (param_1 == 0) {
      lVar9 = BN_new();
    }
    if ((lVar9 != 0) && (iVar1 = BN_set_word(lVar4,1), iVar1 != 0)) {
      BN_set_word(lVar7,0);
      lVar8 = BN_copy(lVar3,param_2);
      if ((lVar8 != 0) && (lVar8 = BN_copy(lVar2,param_3), lVar8 != 0)) {
        *(undefined4 *)(lVar2 + 0x10) = 0;
        if ((*(int *)(lVar3 + 0x10) != 0) || (iVar1 = BN_ucmp(lVar3,lVar2), -1 < iVar1)) {
          bn_init(local_50);
          BN_with_flags(local_50,lVar3,4);
          iVar1 = BN_nnmod(lVar3,local_50,lVar2,param_4);
          if (iVar1 == 0) goto LAB_14f72864d;
        }
        iVar10 = -1;
        iVar1 = BN_is_zero(lVar3);
        lVar8 = lVar7;
        lVar11 = lVar2;
        if (iVar1 == 0) {
          do {
            lVar7 = lVar4;
            lVar4 = lVar8;
            lVar2 = lVar3;
            bn_init(local_50);
            BN_with_flags(local_50,lVar11,4);
            iVar1 = BN_div(uVar5,lVar6,local_50,lVar2,param_4);
            if (((iVar1 == 0) || (iVar1 = BN_mul(lVar11,uVar5,lVar7,param_4), iVar1 == 0)) ||
               (iVar1 = BN_add(lVar11,lVar11,lVar4), iVar1 == 0)) goto LAB_14f72864d;
            iVar10 = -iVar10;
            iVar1 = BN_is_zero(lVar6);
            lVar3 = lVar6;
            lVar8 = lVar7;
            lVar6 = lVar4;
            lVar4 = lVar11;
            lVar11 = lVar2;
          } while (iVar1 == 0);
          if (iVar10 < 0) goto LAB_14f7285ad;
        }
        else {
LAB_14f7285ad:
          iVar1 = BN_sub(lVar7,param_3,lVar7);
          if (iVar1 == 0) goto LAB_14f72864d;
        }
        iVar1 = BN_is_one(lVar2);
        if (iVar1 == 0) {
          *param_5 = 1;
        }
        else {
          if ((*(int *)(lVar7 + 0x10) == 0) && (iVar1 = BN_ucmp(lVar7,param_3), iVar1 < 0)) {
            lVar3 = BN_copy(lVar9,lVar7);
            bVar12 = lVar3 == 0;
          }
          else {
            iVar1 = BN_nnmod(lVar9,lVar7,param_3,param_4);
            bVar12 = iVar1 == 0;
          }
          if (!bVar12) {
            *param_5 = 0;
            local_58 = lVar9;
            goto LAB_14f728660;
          }
        }
      }
    }
  }
LAB_14f72864d:
  if (param_1 == 0) {
    BN_free(lVar9);
  }
LAB_14f728660:
  BN_CTX_end(param_4);
  return local_58;
}

// int_bn_mod_inverse @ 14f728690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong int_bn_mod_inverse(longlong param_1,undefined8 param_2,undefined8 param_3,
                           undefined8 param_4,undefined4 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  int local_58;
  
  iVar1 = BN_abs_is_word(param_3,1);
  if ((iVar1 != 0) || (iVar1 = BN_is_zero(param_3), iVar1 != 0)) {
    *param_5 = 1;
    return 0;
  }
  *param_5 = 0;
  iVar1 = BN_get_flags(param_2,4);
  if ((iVar1 != 0) || (iVar1 = BN_get_flags(param_3,4), iVar1 != 0)) {
    lVar4 = FUN_14f7283a0(param_1,param_2,param_3,param_4,param_5);
    return lVar4;
  }
  BN_CTX_start(param_4);
  lVar2 = BN_CTX_get(param_4);
  lVar3 = BN_CTX_get(param_4);
  lVar4 = BN_CTX_get(param_4);
  puVar5 = (undefined8 *)BN_CTX_get(param_4);
  lVar6 = BN_CTX_get(param_4);
  lVar7 = BN_CTX_get(param_4);
  lVar8 = BN_CTX_get(param_4);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1;
    if (param_1 == 0) {
      lVar9 = BN_new();
    }
    if ((lVar9 != 0) && (iVar1 = BN_set_word(lVar4,1), iVar1 != 0)) {
      BN_set_word(lVar7,0);
      lVar10 = BN_copy(lVar3,param_2);
      if (((lVar10 != 0) && (lVar10 = BN_copy(lVar2,param_3), lVar10 != 0)) &&
         (((*(undefined4 *)(lVar2 + 0x10) = 0, *(int *)(lVar3 + 0x10) == 0 &&
           (iVar1 = BN_ucmp(lVar3,lVar2), iVar1 < 0)) ||
          (iVar1 = BN_nnmod(lVar3,lVar3,lVar2,param_4), iVar1 != 0)))) {
        local_58 = -1;
        iVar1 = BN_is_odd(param_3);
        if ((iVar1 == 0) || (iVar1 = BN_num_bits(param_3), 0x800 < iVar1)) {
          iVar1 = BN_is_zero(lVar3);
          lVar10 = lVar2;
          if (iVar1 != 0) goto LAB_14f728be4;
          do {
            lVar11 = lVar7;
            lVar2 = lVar3;
            lVar7 = lVar4;
            iVar1 = BN_num_bits(lVar2);
            iVar12 = BN_num_bits(lVar10);
            if (iVar12 == iVar1) {
              iVar1 = BN_set_word(puVar5,1);
              if (iVar1 == 0) goto LAB_14f728cc0;
              iVar1 = BN_sub(lVar6,lVar10,lVar2);
            }
            else {
              iVar1 = BN_num_bits(lVar2);
              iVar12 = BN_num_bits(lVar10);
              if (iVar12 == iVar1 + 1) {
                iVar1 = BN_lshift1(lVar8,lVar2);
                if (iVar1 == 0) goto LAB_14f728cc0;
                iVar1 = BN_ucmp(lVar10,lVar8);
                if (iVar1 < 0) {
                  iVar1 = BN_set_word(puVar5,1);
                  if (iVar1 == 0) goto LAB_14f728cc0;
                  iVar1 = BN_sub(lVar6,lVar10,lVar2);
                }
                else {
                  iVar1 = BN_sub(lVar6,lVar10,lVar8);
                  if ((iVar1 == 0) || (iVar1 = BN_add(puVar5,lVar8,lVar2), iVar1 == 0))
                  goto LAB_14f728cc0;
                  iVar1 = BN_ucmp(lVar10,puVar5);
                  if (iVar1 < 0) {
                    iVar1 = BN_set_word(puVar5,2);
                  }
                  else {
                    iVar1 = BN_set_word(puVar5,3);
                    if (iVar1 == 0) goto LAB_14f728cc0;
                    iVar1 = BN_sub(lVar6,lVar6,lVar2);
                  }
                }
              }
              else {
                iVar1 = BN_div(puVar5,lVar6,lVar10,lVar2,param_4);
              }
            }
            if (iVar1 == 0) goto LAB_14f728cc0;
            iVar1 = BN_is_one(puVar5);
            lVar4 = lVar7;
            if (iVar1 == 0) {
              iVar1 = BN_is_word(puVar5,2);
              if (iVar1 == 0) {
                iVar1 = BN_is_word(puVar5,4);
                if (iVar1 == 0) {
                  if (*(int *)(puVar5 + 1) == 1) {
                    lVar4 = BN_copy(lVar10,lVar7);
                    if (lVar4 == 0) goto LAB_14f728cc0;
                    iVar1 = BN_mul_word(lVar10,*(undefined8 *)*puVar5);
                  }
                  else {
                    iVar1 = BN_mul(lVar10,puVar5,lVar7,param_4);
                  }
                }
                else {
                  iVar1 = BN_lshift(lVar10,lVar7,2);
                }
              }
              else {
                iVar1 = BN_lshift1(lVar10,lVar7);
              }
              lVar4 = lVar10;
              if (iVar1 == 0) goto LAB_14f728cc0;
            }
            iVar1 = BN_add(lVar10,lVar4,lVar11);
            if (iVar1 == 0) goto LAB_14f728cc0;
            local_58 = -local_58;
            iVar1 = BN_is_zero(lVar6);
            lVar4 = lVar10;
            lVar3 = lVar6;
            lVar6 = lVar11;
            lVar10 = lVar2;
          } while (iVar1 == 0);
          if (local_58 < 0) goto LAB_14f728be4;
        }
        else {
          iVar1 = BN_is_zero(lVar3);
          while (iVar1 == 0) {
            iVar12 = 0;
            iVar1 = BN_is_bit_set(lVar3,0);
            if (iVar1 == 0) {
              do {
                iVar12 = iVar12 + 1;
                iVar1 = BN_is_odd(lVar4);
                if (((iVar1 != 0) && (iVar1 = BN_uadd(lVar4,lVar4,param_3), iVar1 == 0)) ||
                   (iVar1 = BN_rshift1(lVar4,lVar4), iVar1 == 0)) goto LAB_14f728cc0;
                iVar1 = BN_is_bit_set(lVar3,iVar12);
              } while (iVar1 == 0);
              if ((0 < iVar12) && (iVar1 = BN_rshift(lVar3,lVar3,iVar12), iVar1 == 0))
              goto LAB_14f728cc0;
            }
            iVar12 = 0;
            iVar1 = BN_is_bit_set(lVar2,0);
            if (iVar1 == 0) {
              do {
                iVar12 = iVar12 + 1;
                iVar1 = BN_is_odd(lVar7);
                if (((iVar1 != 0) && (iVar1 = BN_uadd(lVar7,lVar7,param_3), iVar1 == 0)) ||
                   (iVar1 = BN_rshift1(lVar7,lVar7), iVar1 == 0)) goto LAB_14f728cc0;
                iVar1 = BN_is_bit_set(lVar2,iVar12);
              } while (iVar1 == 0);
              if ((0 < iVar12) && (iVar1 = BN_rshift(lVar2,lVar2,iVar12), iVar1 == 0))
              goto LAB_14f728cc0;
            }
            iVar1 = BN_ucmp(lVar3,lVar2);
            if (iVar1 < 0) {
              iVar1 = BN_uadd(lVar7,lVar7,lVar4);
              lVar6 = lVar2;
              lVar8 = lVar3;
            }
            else {
              iVar1 = BN_uadd(lVar4,lVar4,lVar7);
              lVar6 = lVar3;
              lVar8 = lVar2;
            }
            if ((iVar1 == 0) || (iVar1 = BN_usub(lVar6,lVar6,lVar8), iVar1 == 0))
            goto LAB_14f728cc0;
            iVar1 = BN_is_zero(lVar3);
          }
LAB_14f728be4:
          iVar1 = BN_sub(lVar7,param_3,lVar7);
          if (iVar1 == 0) goto LAB_14f728cc0;
        }
        iVar1 = BN_is_one(lVar2);
        if (iVar1 == 0) {
          *param_5 = 1;
        }
        else {
          if ((*(int *)(lVar7 + 0x10) == 0) && (iVar1 = BN_ucmp(lVar7,param_3), iVar1 < 0)) {
            lVar4 = BN_copy(lVar9,lVar7);
            bVar13 = lVar4 == 0;
          }
          else {
            iVar1 = BN_nnmod(lVar9,lVar7,param_3,param_4);
            bVar13 = iVar1 == 0;
          }
          lVar4 = lVar9;
          if (!bVar13) goto LAB_14f728cd3;
        }
      }
    }
  }
LAB_14f728cc0:
  lVar4 = 0;
  if (param_1 == 0) {
    BN_free(lVar9);
  }
LAB_14f728cd3:
  BN_CTX_end(param_4);
  return lVar4;
}


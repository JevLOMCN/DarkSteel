// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// BN_GENCB_call @ 14f728d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_GENCB_call(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 1) {
      if (*param_1 != 2) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00014f728d7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 4))(param_2,param_3,param_1);
      return uVar1;
    }
    if (*(code **)(param_1 + 4) != (code *)0x0) {
      (**(code **)(param_1 + 4))(param_2,param_3,*(undefined8 *)(param_1 + 2),param_1,0x14f728d4a);
    }
  }
  return 1;
}

// BN_generate_prime_ex @ 14f728db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
BN_generate_prime_ex
          (undefined8 param_1,int param_2,int param_3,longlong param_4,undefined8 param_5,
          int *param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 local_48;
  
  local_48 = 0;
  if (param_2 < 0xea3) {
    if (param_2 < 0x541) {
      if (param_2 < 0x1dc) {
        if (param_2 < 400) {
          if (param_2 < 0x15b) {
            if (param_2 < 0x134) {
              iVar6 = 0x22;
              if (0x36 < param_2) {
                iVar6 = 0x1b;
              }
            }
            else {
              iVar6 = 8;
            }
          }
          else {
            iVar6 = 7;
          }
        }
        else {
          iVar6 = 6;
        }
      }
      else {
        iVar6 = 5;
      }
    }
    else {
      iVar6 = 4;
    }
  }
  else {
    iVar6 = 3;
  }
  if (param_2 < 2) {
    uVar9 = 0x42;
  }
  else {
    if ((((param_4 != 0) || (param_3 == 0)) || (5 < param_2)) || (param_2 == 3)) {
      lVar3 = CRYPTO_zalloc(0x1000,"crypto\\bn\\bn_prime.c",0x4e);
      uVar4 = 0;
      if ((lVar3 != 0) && (uVar4 = BN_CTX_new(), uVar4 != 0)) {
        BN_CTX_start(uVar4);
        lVar5 = BN_CTX_get(uVar4);
        uVar8 = 0;
        if (lVar5 != 0) {
LAB_14f728f30:
          do {
            uVar7 = uVar8;
            if (param_4 == 0) {
              iVar1 = FUN_14f7294d0(param_1);
            }
            else {
              iVar1 = FUN_14f729680(param_1,param_2,param_3,lVar3,param_4,param_5,uVar4);
            }
            if (iVar1 == 0) goto LAB_14f729005;
            if (param_6 == (int *)0x0) {
LAB_14f728fb3:
              iVar1 = 1;
            }
            else {
              if (*param_6 == 1) {
                if (*(code **)(param_6 + 4) != (code *)0x0) {
                  (**(code **)(param_6 + 4))(0,uVar7,*(undefined8 *)(param_6 + 2));
                }
                goto LAB_14f728fb3;
              }
              if (*param_6 == 2) {
                iVar1 = (**(code **)(param_6 + 4))(0,uVar7,param_6);
              }
              else {
                iVar1 = 0;
              }
            }
            uVar8 = (ulonglong)((int)uVar7 + 1);
            if (iVar1 == 0) goto LAB_14f729005;
            if (param_3 != 0) {
              iVar1 = BN_rshift1(lVar5,param_1);
              if (iVar1 == 0) goto LAB_14f729005;
              iVar1 = 0;
              while( true ) {
                if (iVar6 <= iVar1) goto LAB_14f728feb;
                iVar2 = BN_is_prime_fasttest_ex(param_1,1,uVar4,0,param_6);
                if (iVar2 == -1) goto LAB_14f729005;
                if (iVar2 == 0) break;
                iVar2 = BN_is_prime_fasttest_ex(lVar5,1,uVar4,0,param_6);
                if (iVar2 == -1) goto LAB_14f729005;
                if (iVar2 == 0) break;
                iVar2 = BN_GENCB_call(param_6,2,uVar7);
                if (iVar2 == 0) goto LAB_14f729005;
                iVar1 = iVar1 + 1;
              }
              goto LAB_14f728f30;
            }
            iVar1 = BN_is_prime_fasttest_ex(param_1,iVar6,uVar4,0,param_6);
            if (iVar1 == -1) goto LAB_14f729005;
          } while (iVar1 == 0);
LAB_14f728feb:
          local_48 = 1;
        }
      }
LAB_14f729005:
      CRYPTO_free(lVar3,"crypto\\bn\\bn_prime.c",0x8a);
      BN_CTX_end(uVar4);
      BN_CTX_free(uVar4);
      return local_48;
    }
    uVar9 = 0x4a;
  }
  ERR_put_error(3,0x8d,0x76,"crypto\\bn\\bn_prime.c",uVar9);
  return 0;
}

// BN_is_prime_ex @ 14f7290d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_is_prime_ex(void)

{
  BN_is_prime_fasttest_ex();
  return;
}

// BN_is_prime_fasttest_ex @ 14f729100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_is_prime_fasttest_ex
                    (undefined8 param_1,int param_2,longlong param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  uint local_48;
  longlong local_40;
  
  local_48 = 0xffffffff;
  local_40 = 0;
  iVar1 = BN_is_word(param_1,2);
  if ((iVar1 != 0) || (iVar1 = BN_is_word(param_1,3), iVar1 != 0)) {
    return 1;
  }
  iVar1 = BN_is_odd(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = BN_value_one();
  iVar1 = BN_cmp(param_1,uVar4);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = BN_num_bits(param_1);
    if (iVar1 < 0xea3) {
      iVar1 = BN_num_bits(param_1);
      if (iVar1 < 0x541) {
        iVar1 = BN_num_bits(param_1);
        if (iVar1 < 0x1dc) {
          iVar1 = BN_num_bits(param_1);
          if (iVar1 < 400) {
            iVar1 = BN_num_bits(param_1);
            if (iVar1 < 0x15b) {
              iVar1 = BN_num_bits(param_1);
              if (iVar1 < 0x134) {
                iVar1 = BN_num_bits(param_1);
                param_2 = 0x22;
                if (0x36 < iVar1) {
                  param_2 = 0x1b;
                }
              }
              else {
                param_2 = 8;
              }
            }
            else {
              param_2 = 7;
            }
          }
          else {
            param_2 = 6;
          }
        }
        else {
          param_2 = 5;
        }
      }
      else {
        param_2 = 4;
      }
    }
    else {
      param_2 = 3;
    }
  }
  if (param_4 != 0) {
    iVar1 = 1;
    puVar11 = &DAT_1534b71e2;
    do {
      lVar5 = BN_mod_word(param_1,*puVar11);
      if (lVar5 == -1) goto LAB_14f729490;
      if (lVar5 == 0) {
        uVar6 = BN_is_word(param_1,*(undefined2 *)(&DAT_1534b71e0 + (longlong)iVar1 * 2));
        return uVar6;
      }
      iVar1 = iVar1 + 1;
      puVar11 = puVar11 + 1;
    } while ((longlong)puVar11 < 0x1534b81e0);
    iVar1 = BN_GENCB_call(param_5,1);
    if (iVar1 == 0) goto LAB_14f729490;
  }
  lVar5 = param_3;
  if ((param_3 != 0) || (lVar5 = BN_CTX_new(), lVar5 != 0)) {
    BN_CTX_start(lVar5);
    uVar4 = BN_CTX_get(lVar5);
    uVar7 = BN_CTX_get(lVar5);
    uVar8 = BN_CTX_get(lVar5);
    lVar9 = BN_CTX_get(lVar5);
    if ((lVar9 != 0) &&
       ((((lVar10 = BN_copy(uVar4,param_1), lVar10 != 0 &&
          (iVar1 = BN_sub_word(uVar4,1), iVar1 != 0)) &&
         (lVar10 = BN_copy(uVar7,param_1), lVar10 != 0)) &&
        (iVar1 = BN_sub_word(uVar7,3), iVar1 != 0)))) {
      iVar1 = 1;
      iVar2 = BN_is_bit_set(uVar4,1);
      while (iVar2 == 0) {
        iVar1 = iVar1 + 1;
        iVar2 = BN_is_bit_set(uVar4,iVar1);
      }
      iVar2 = BN_rshift(uVar8,uVar4,iVar1);
      if (((iVar2 != 0) && (local_40 = BN_MONT_CTX_new(), local_40 != 0)) &&
         (iVar2 = BN_MONT_CTX_set(local_40,param_1,lVar5), iVar2 != 0)) {
        iVar2 = 0;
        if (0 < param_2) {
          do {
            iVar3 = BN_priv_rand_range(lVar9,uVar7);
            if (((iVar3 == 0) || (iVar3 = BN_add_word(lVar9,2), iVar3 == 0)) ||
               (iVar3 = FUN_14f729980(lVar9,param_1,uVar4,uVar8,iVar1,lVar5,local_40), iVar3 == -1))
            goto LAB_14f729461;
            if (iVar3 != 0) {
              local_48 = 0;
              goto LAB_14f729461;
            }
            iVar3 = BN_GENCB_call(param_5,1,iVar2);
            if (iVar3 == 0) goto LAB_14f729461;
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_2);
        }
        local_48 = 1;
      }
    }
LAB_14f729461:
    if ((lVar5 != 0) && (BN_CTX_end(lVar5), param_3 == 0)) {
      BN_CTX_free(lVar5);
    }
  }
LAB_14f729490:
  BN_MONT_CTX_free(local_40);
  return (ulonglong)local_48;
}

// FUN_14f7294d0 @ 14f7294d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7294d0(undefined8 param_1,int param_2,int param_3,undefined2 *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
LAB_14f729501:
  do {
    iVar1 = BN_priv_rand(param_1,param_2,1);
    if ((iVar1 == 0) || ((param_3 != 0 && (iVar1 = BN_set_bit(param_1,1), iVar1 == 0)))) {
      return 0;
    }
    lVar6 = 1;
    puVar4 = param_4;
    do {
      puVar4 = puVar4 + 1;
      lVar2 = BN_mod_word(param_1);
      if (lVar2 == -1) {
        return 0;
      }
      *puVar4 = (short)lVar2;
      lVar6 = lVar6 + 1;
    } while (lVar6 < 0x800);
    uVar7 = 0;
    do {
      iVar1 = 1;
      puVar5 = &DAT_1534b71e2;
      while( true ) {
        if ((0x7ff < iVar1) ||
           (((param_2 < 0x20 && (uVar7 < 0x80000000)) &&
            (lVar6 = BN_get_word(param_1), uVar3 = (ulonglong)*puVar5 * (ulonglong)*puVar5,
            lVar6 + uVar7 <= uVar3 && uVar3 - (lVar6 + uVar7) != 0)))) {
          iVar1 = BN_add_word(param_1,uVar7);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = BN_num_bits(param_1);
          if (iVar1 == param_2) {
            return 1;
          }
          goto LAB_14f729501;
        }
        uVar3 = (*(ushort *)((longlong)(param_4 + -0xa9a5b8f0) + (longlong)puVar5) + uVar7) %
                (ulonglong)*puVar5;
        if (param_3 == 0) {
          bVar8 = uVar3 == 0;
        }
        else {
          bVar8 = uVar3 < 2;
        }
        if (bVar8) break;
        iVar1 = iVar1 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar6 = 2;
      if (param_3 != 0) {
        lVar6 = 4;
      }
      uVar7 = uVar7 + lVar6;
    } while (uVar7 < 0xffffffffffffba39);
  } while( true );
}

// FUN_14f729680 @ 14f729680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f729680(undefined8 param_1,int param_2,int param_3,undefined2 *param_4,
                       undefined8 param_5,longlong param_6,undefined8 param_7)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ushort *puVar9;
  ulonglong uVar10;
  ulonglong uVar12;
  bool bVar13;
  ulonglong local_38;
  ulonglong uVar11;
  
  local_38 = 0xffffffffffffba38;
  uVar11 = 0;
  uVar10 = 0;
  BN_CTX_start(param_7);
  lVar3 = BN_CTX_get(param_7);
  uVar12 = uVar11;
  if (lVar3 != 0) {
    lVar4 = BN_get_word(param_5);
    if (-lVar4 - 1U < 0xffffffffffffba38) {
      lVar4 = BN_get_word(param_5);
      local_38 = -lVar4 - 1;
    }
    iVar2 = BN_rand(param_1,param_2,0,1);
    if (iVar2 != 0) {
      while ((iVar2 = BN_div(0,lVar3,param_1,param_5,param_7), uVar12 = uVar11, iVar2 != 0 &&
             (iVar2 = BN_sub(param_1,param_1,lVar3), iVar2 != 0))) {
        if (param_6 == 0) {
          uVar8 = 1;
          if (param_3 != 0) {
            uVar8 = 3;
          }
          iVar2 = BN_add_word(param_1,uVar8);
        }
        else {
          iVar2 = BN_add(param_1,param_1,param_6);
        }
        uVar12 = uVar10;
        if (iVar2 == 0) break;
        uVar6 = 3;
        lVar4 = 1;
        iVar2 = BN_num_bits(param_1);
        puVar1 = param_4;
        if (iVar2 < param_2) {
LAB_14f7297fb:
          iVar2 = BN_add(param_1,param_1,param_5);
          if (iVar2 == 0) break;
        }
        else {
          uVar5 = BN_get_word(param_1);
          if (param_3 != 0) {
            uVar6 = 5;
          }
          if (uVar5 < uVar6) goto LAB_14f7297fb;
        }
        do {
          lVar7 = BN_mod_word(param_1);
          if (lVar7 == -1) goto LAB_14f72994e;
          puVar1[1] = (short)lVar7;
          lVar4 = lVar4 + 1;
          uVar6 = uVar11;
          puVar1 = puVar1 + 1;
        } while (lVar4 < 0x800);
        do {
          iVar2 = 1;
          puVar9 = &DAT_1534b71e2;
          while( true ) {
            if ((0x7ff < iVar2) ||
               (((param_2 < 0x20 && (uVar6 < 0x80000000)) &&
                (lVar4 = BN_get_word(param_1), uVar5 = (ulonglong)*puVar9 * (ulonglong)*puVar9,
                lVar4 + uVar6 <= uVar5 && uVar5 - (lVar4 + uVar6) != 0)))) {
              iVar2 = BN_add_word(param_1,uVar6);
              uVar12 = 0;
              if (iVar2 != 0) {
                uVar12 = 1;
              }
              goto LAB_14f72994e;
            }
            uVar5 = (*(ushort *)((longlong)(param_4 + -0xa9a5b8f0) + (longlong)puVar9) + uVar6) %
                    (ulonglong)*puVar9;
            if (param_3 == 0) {
              bVar13 = uVar5 == 0;
            }
            else {
              bVar13 = uVar5 < 2;
            }
            if (bVar13) break;
            iVar2 = iVar2 + 1;
            puVar9 = puVar9 + 1;
          }
          lVar4 = BN_get_word(param_5);
          uVar6 = uVar6 + lVar4;
        } while (uVar6 <= local_38);
        iVar2 = BN_rand(param_1,param_2,0,1);
        if (iVar2 == 0) break;
      }
    }
  }
LAB_14f72994e:
  BN_CTX_end(param_7);
  return uVar12;
}

// FUN_14f729980 @ 14f729980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f729980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = BN_mod_exp_mont(param_1,param_1,param_4,param_2,param_6,param_7);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = BN_is_one(param_1);
    if ((iVar1 == 0) && (iVar1 = BN_cmp(param_1,param_3), iVar1 != 0)) {
      do {
        param_5 = param_5 + -1;
        if (param_5 == 0) {
          return 1;
        }
        iVar1 = BN_mod_mul(param_1,param_1,param_1,param_2,param_6);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        iVar1 = BN_is_one(param_1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = BN_cmp(param_1,param_3);
      } while (iVar1 != 0);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


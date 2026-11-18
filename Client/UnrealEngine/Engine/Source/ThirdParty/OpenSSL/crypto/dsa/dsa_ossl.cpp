// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f763530 @ 14f763530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14f763530(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar10 = 0x14f76354a;
  lVar4 = 0;
  local_res18 = 0;
  plVar2 = (longlong *)0x0;
  if (((*(longlong *)(param_3 + 8) == 0) || (*(longlong *)(param_3 + 0x10) == 0)) ||
     (*(longlong *)(param_3 + 0x18) == 0)) {
    uVar5 = 0x65;
  }
  else if (*(longlong *)(param_3 + 0x28) == 0) {
    uVar5 = 0x6f;
  }
  else {
    plVar2 = (longlong *)DSA_SIG_new();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = BN_new();
      *plVar2 = lVar3;
      lVar3 = BN_new();
      plVar2[1] = lVar3;
      if (((*plVar2 != 0) && (lVar3 != 0)) && (lVar4 = BN_CTX_new(), lVar4 != 0)) {
        local_res20 = BN_CTX_get(lVar4);
        uVar5 = BN_CTX_get(lVar4);
        uVar6 = BN_CTX_get(lVar4);
        lVar3 = BN_CTX_get(lVar4);
        if (lVar3 != 0) {
          uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),param_2);
          uVar8 = param_1;
          iVar1 = FUN_14f763d90(param_3,lVar4,&local_res18,plVar2,param_1,uVar10);
          uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if (iVar1 != 0) {
            while( true ) {
              iVar1 = BN_num_bits(*(undefined8 *)(param_3 + 0x10));
              if ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3 < param_2) {
                iVar1 = BN_num_bits(*(undefined8 *)(param_3 + 0x10));
                param_2 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
              }
              lVar7 = BN_bin2bn(param_1,param_2,local_res20);
              uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
              if (lVar7 == 0) break;
              do {
                iVar1 = BN_num_bits(*(undefined8 *)(param_3 + 0x10));
                iVar1 = BN_priv_rand(uVar5,iVar1 + -1,0xffffffff,0);
                uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
                if (iVar1 == 0) goto LAB_14f7637f7;
                iVar1 = BN_is_zero(uVar5);
              } while (iVar1 != 0);
              BN_set_flags(uVar5,4);
              BN_set_flags(uVar6,4);
              BN_set_flags(lVar3,4);
              lVar7 = lVar4;
              iVar1 = BN_mod_mul(lVar3,uVar5,*(undefined8 *)(param_3 + 0x28),
                                 *(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              lVar7 = lVar4;
              iVar1 = BN_mod_mul(lVar3,lVar3,*plVar2,*(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              lVar7 = lVar4;
              iVar1 = BN_mod_mul(uVar6,uVar5,local_res20,*(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if ((iVar1 == 0) ||
                 (iVar1 = BN_mod_add_quick(plVar2[1],lVar3,uVar6,*(undefined8 *)(param_3 + 0x10)),
                 iVar1 == 0)) break;
              lVar7 = lVar4;
              iVar1 = BN_mod_mul(plVar2[1],plVar2[1],local_res18,*(undefined8 *)(param_3 + 0x10),
                                 lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if ((iVar1 == 0) ||
                 (lVar7 = BN_mod_inverse(uVar5,uVar5,*(undefined8 *)(param_3 + 0x10),lVar4),
                 lVar7 == 0)) break;
              lVar7 = lVar4;
              iVar1 = BN_mod_mul(plVar2[1],plVar2[1],uVar5,*(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              iVar1 = BN_is_zero(*plVar2);
              uVar9 = (undefined4)((ulonglong)uVar10 >> 0x20);
              if ((iVar1 == 0) && (iVar1 = BN_is_zero(plVar2[1]), iVar1 == 0)) goto LAB_14f763823;
              uVar10 = CONCAT44(uVar9,param_2);
              uVar8 = param_1;
              iVar1 = FUN_14f763d90(param_3,lVar4,&local_res18,plVar2,param_1,uVar10);
              uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
              if (iVar1 == 0) break;
            }
          }
        }
      }
    }
LAB_14f7637f7:
    uVar5 = 3;
  }
  ERR_put_error(10,0x70,uVar5,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar9,0xa7),uVar10);
  DSA_SIG_free(plVar2);
  plVar2 = (longlong *)0x0;
LAB_14f763823:
  BN_CTX_free(lVar4);
  BN_clear_free(local_res18);
  return plVar2;
}

// FUN_14f763860 @ 14f763860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f763860(void)

{
  FUN_14f763d90();
  return;
}

// FUN_14f763890 @ 14f763890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f763890(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 uVar12;
  undefined8 local_58 [3];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar9 = 0;
  if (((*(longlong *)(param_4 + 8) == 0) || (*(longlong *)(param_4 + 0x10) == 0)) ||
     (*(longlong *)(param_4 + 0x18) == 0)) {
    ERR_put_error(10,0x71,0x65,"crypto\\dsa\\dsa_ossl.c",0x134);
    return 0xffffffff;
  }
  iVar2 = BN_num_bits();
  if (((iVar2 - 0xa0U & 0xffffff9f) != 0) || (iVar2 == 0xc0)) {
    uVar12 = CONCAT44(uVar11,0x13b);
    uVar11 = 0x66;
LAB_14f76392d:
    ERR_put_error(10,0x71,uVar11,"crypto\\dsa\\dsa_ossl.c",uVar12);
    return 0xffffffff;
  }
  iVar3 = BN_num_bits(*(undefined8 *)(param_4 + 8));
  if (10000 < iVar3) {
    uVar12 = CONCAT44(uVar11,0x140);
    uVar11 = 0x67;
    goto LAB_14f76392d;
  }
  lVar4 = BN_new();
  lVar5 = BN_new();
  lVar6 = BN_new();
  lVar7 = BN_CTX_new();
  if (((lVar4 != 0) && (lVar5 != 0)) && ((lVar6 != 0 && (lVar7 != 0)))) {
    DSA_SIG_get0(param_3,&local_res20,local_58);
    iVar3 = BN_is_zero(local_res20);
    if (((((iVar3 != 0) || (iVar3 = BN_is_negative(local_res20), iVar3 != 0)) ||
         (iVar3 = BN_ucmp(local_res20,*(undefined8 *)(param_4 + 0x10)), -1 < iVar3)) ||
        ((iVar3 = BN_is_zero(local_58[0]), iVar3 != 0 ||
         (iVar3 = BN_is_negative(local_58[0]), iVar3 != 0)))) ||
       (iVar3 = BN_ucmp(local_58[0],*(undefined8 *)(param_4 + 0x10)), -1 < iVar3)) {
      uVar10 = 0;
      goto LAB_14f763bae;
    }
    lVar8 = BN_mod_inverse(lVar5,local_58[0],*(undefined8 *)(param_4 + 0x10),lVar7);
    if (lVar8 != 0) {
      if (iVar2 >> 3 < param_2) {
        param_2 = iVar2 >> 3;
      }
      lVar8 = BN_bin2bn(param_1,param_2,lVar4);
      if (lVar8 != 0) {
        lVar8 = lVar7;
        iVar2 = BN_mod_mul(lVar4,lVar4,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
        uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if (iVar2 != 0) {
          lVar8 = lVar7;
          iVar2 = BN_mod_mul(lVar5,local_res20,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
          uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
          if ((iVar2 != 0) &&
             (((*(byte *)(param_4 + 0x30) & 1) == 0 ||
              (lVar9 = BN_MONT_CTX_set_locked
                                 (param_4 + 0x38,*(undefined8 *)(param_4 + 0x60),
                                  *(undefined8 *)(param_4 + 8),lVar7), lVar9 != 0)))) {
            pcVar1 = *(code **)(*(longlong *)(param_4 + 0x50) + 0x20);
            if (pcVar1 == (code *)0x0) {
              lVar8 = lVar5;
              iVar2 = BN_mod_exp2_mont(lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,
                                       *(undefined8 *)(param_4 + 0x20),lVar5,
                                       *(undefined8 *)(param_4 + 8),lVar7,lVar9);
              uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
            }
            else {
              uVar12 = *(undefined8 *)(param_4 + 0x20);
              iVar2 = (*pcVar1)(param_4,lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,uVar12,lVar5,
                                *(undefined8 *)(param_4 + 8),lVar7,lVar9);
              uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
            }
            if (iVar2 != 0) {
              lVar9 = lVar7;
              iVar2 = BN_div(0,lVar4,lVar6,*(undefined8 *)(param_4 + 0x10),lVar7);
              uVar11 = (undefined4)((ulonglong)lVar9 >> 0x20);
              if (iVar2 != 0) {
                iVar2 = BN_ucmp(lVar4,local_res20);
                uVar10 = (ulonglong)(iVar2 == 0);
                goto LAB_14f763bae;
              }
            }
          }
        }
      }
    }
  }
  uVar10 = 0xffffffff;
  ERR_put_error(10,0x71,3,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar11,0x18c));
LAB_14f763bae:
  BN_CTX_free(lVar7);
  BN_free(lVar4);
  BN_free(lVar5);
  BN_free(lVar6);
  return uVar10;
}

// FUN_14f763c60 @ 14f763c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f763c60(longlong param_1)

{
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x38));
  return 1;
}

// DSA_OpenSSL @ 14f763c90

undefined ** DSA_OpenSSL(void)

{
  return &PTR_s_OpenSSL_DSA_method_154df97e0;
}

// DSA_get_default_method @ 14f763ca0

undefined * DSA_get_default_method(void)

{
  return PTR_PTR_154df9840;
}

// FUN_14f763cc0 @ 14f763cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f763cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = BN_new();
  if (lVar2 != 0) {
    BN_CTX_start(param_3);
    lVar3 = BN_CTX_get(param_3);
    if ((((lVar3 == 0) || (iVar1 = BN_set_word(lVar2,2), iVar1 == 0)) ||
        (iVar1 = BN_sub(lVar3,param_2,lVar2), iVar1 == 0)) ||
       (iVar1 = BN_mod_exp_mont(lVar2,param_1,lVar3,param_2,param_3,0), iVar1 == 0)) {
      BN_free(lVar2);
      lVar2 = 0;
    }
    BN_CTX_end(param_3);
  }
  return lVar2;
}

// FUN_14f763d90 @ 14f763d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f763d90(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
             longlong param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong in_stack_ffffffffffffff98;
  undefined8 uVar10;
  undefined4 uVar11;
  
  uVar9 = *param_4;
  lVar7 = 0;
  if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar10 = 0xc1;
    uVar9 = 0x65;
LAB_14f7640bc:
    ERR_put_error(10,0x6b,uVar9,"crypto\\dsa\\dsa_ossl.c",uVar10);
    return 0;
  }
  iVar2 = BN_is_zero();
  if (((iVar2 != 0) || (iVar2 = BN_is_zero(*(undefined8 *)(param_1 + 0x10)), iVar2 != 0)) ||
     (iVar2 = BN_is_zero(*(undefined8 *)(param_1 + 0x18)), iVar2 != 0)) {
    uVar10 = 199;
    uVar9 = 0x70;
    goto LAB_14f7640bc;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar10 = 0xcb;
    uVar9 = 0x6f;
    goto LAB_14f7640bc;
  }
  lVar5 = BN_new();
  lVar6 = BN_new();
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if ((lVar5 != 0) && (lVar6 != 0)) {
    lVar7 = param_2;
    if (param_2 == 0) {
      lVar7 = BN_CTX_new();
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      if (lVar7 == 0) goto LAB_14f764041;
    }
    uVar3 = BN_num_bits(*(undefined8 *)(param_1 + 0x10));
    iVar2 = bn_get_top(*(undefined8 *)(param_1 + 0x10));
    iVar2 = iVar2 + 2;
    lVar8 = bn_wexpand(lVar5,iVar2);
    uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    if (lVar8 != 0) {
      lVar8 = bn_wexpand(lVar6,iVar2);
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      if (lVar8 != 0) {
        do {
          if (param_5 == 0) {
            iVar4 = BN_priv_rand_range(lVar5,*(undefined8 *)(param_1 + 0x10));
          }
          else {
            in_stack_ffffffffffffff98 = (longlong)param_6;
            iVar4 = BN_generate_dsa_nonce
                              (lVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28)
                               ,param_5,(longlong)param_6,lVar7);
          }
          uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          if (iVar4 == 0) goto LAB_14f764041;
          iVar4 = BN_is_zero(lVar5);
          uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
        } while (iVar4 != 0);
        BN_set_flags(lVar5,4);
        BN_set_flags(lVar6,4);
        if (((((*(byte *)(param_1 + 0x30) & 1) == 0) ||
             (lVar8 = BN_MONT_CTX_set_locked
                                (param_1 + 0x38,*(undefined8 *)(param_1 + 0x60),
                                 *(undefined8 *)(param_1 + 8),lVar7), lVar8 != 0)) &&
            (iVar4 = BN_add(lVar6,lVar5,*(undefined8 *)(param_1 + 0x10)), iVar4 != 0)) &&
           (iVar4 = BN_add(lVar5,lVar6,*(undefined8 *)(param_1 + 0x10)), iVar4 != 0)) {
          iVar4 = BN_is_bit_set(lVar6,uVar3);
          BN_consttime_swap((longlong)iVar4,lVar5,lVar6,iVar2);
          pcVar1 = *(code **)(*(longlong *)(param_1 + 0x50) + 0x28);
          if (pcVar1 == (code *)0x0) {
            lVar8 = lVar7;
            iVar2 = BN_mod_exp_mont(uVar9,*(undefined8 *)(param_1 + 0x18),lVar5,
                                    *(undefined8 *)(param_1 + 8),lVar7,
                                    *(undefined8 *)(param_1 + 0x38));
            uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
          }
          else {
            uVar10 = *(undefined8 *)(param_1 + 8);
            iVar2 = (*pcVar1)(param_1,uVar9,*(undefined8 *)(param_1 + 0x18),lVar5,uVar10,lVar7,
                              *(undefined8 *)(param_1 + 0x38));
            uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
          }
          if (iVar2 != 0) {
            lVar8 = lVar7;
            iVar2 = BN_div(0,uVar9,uVar9,*(undefined8 *)(param_1 + 0x10),lVar7);
            uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
            if ((iVar2 != 0) &&
               (lVar8 = FUN_14f763cc0(lVar5,*(undefined8 *)(param_1 + 0x10),lVar7), lVar8 != 0)) {
              BN_clear_free(*param_3);
              *param_3 = lVar8;
              uVar9 = 1;
              goto LAB_14f764061;
            }
          }
        }
      }
    }
  }
LAB_14f764041:
  uVar9 = 0;
  ERR_put_error(10,0x6b,3,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar11,0x123));
LAB_14f764061:
  if (lVar7 != param_2) {
    BN_CTX_free(lVar7);
  }
  BN_clear_free(lVar5);
  BN_clear_free(lVar6);
  return uVar9;
}


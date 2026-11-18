// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// EC_ec_pre_comp_dup @ 14f7537b0

longlong EC_ec_pre_comp_dup(longlong param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    UNLOCK();
  }
  return param_1;
}

// EC_ec_pre_comp_free @ 14f7537d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EC_ec_pre_comp_free(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x30);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 2) {
      plVar4 = *(longlong **)(param_1 + 0x20);
      if (plVar4 != (longlong *)0x0) {
        lVar5 = *plVar4;
        while (lVar5 != 0) {
          EC_POINT_free(lVar5);
          plVar2 = plVar4 + 1;
          plVar4 = plVar4 + 1;
          lVar5 = *plVar2;
        }
        CRYPTO_free(*(undefined8 *)(param_1 + 0x20),"crypto\\ec\\ec_mult.c",0x62);
      }
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x38));
      CRYPTO_free(param_1,"crypto\\ec\\ec_mult.c",0x65);
    }
  }
  return;
}

// FUN_14f753870 @ 14f753870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f753870(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x1a8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f753890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x1a8))();
    return uVar1;
  }
  return 1;
}

// FUN_14f7538b0 @ 14f7538b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7538b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(code **)(*param_1 + 0x198) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f7538ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x198))();
    return uVar2;
  }
  iVar1 = EC_POINT_copy(param_3,param_4);
  if (iVar1 != 0) {
    iVar1 = EC_POINT_dbl(param_1,param_2,param_3,param_5);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f753950 @ 14f753950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f753950(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(code **)(*param_1 + 0x1a0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f753985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x1a0))();
    return uVar2;
  }
  iVar1 = EC_POINT_add(param_1,param_3,param_2,param_3,param_5,0x14f753960);
  if (iVar1 != 0) {
    iVar1 = EC_POINT_dbl(param_1,param_2,param_2,param_5);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f7539f0 @ 14f7539f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14f7539f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7539fc;
  if (param_1 == 0) {
    return (longlong *)0x0;
  }
  plVar1 = (longlong *)CRYPTO_zalloc(0x40,"crypto\\ec\\ec_mult.c");
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(0x10,0xc4,0x41,"crypto\\ec\\ec_mult.c",0x36,uVar3);
    return (longlong *)0x0;
  }
  *plVar1 = param_1;
  plVar1[1] = 8;
  plVar1[3] = 4;
  *(undefined4 *)(plVar1 + 6) = 1;
  lVar2 = CRYPTO_THREAD_lock_new();
  plVar1[7] = lVar2;
  if (lVar2 == 0) {
    ERR_put_error(0x10,0xc4,0x41,"crypto\\ec\\ec_mult.c",0x41,uVar3);
    CRYPTO_free(plVar1,"crypto\\ec\\ec_mult.c",0x42);
    return (longlong *)0x0;
  }
  return plVar1;
}

// ec_scalar_mul_ladder @ 14f753ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_scalar_mul_ladder
                    (longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                    undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined8 in_stack_ffffffffffffffa8;
  uint local_44;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar8 = 0;
  local_44 = 0;
  if ((param_4 != 0) && (iVar1 = EC_POINT_is_at_infinity(param_1,param_4), iVar1 != 0)) {
    uVar6 = EC_POINT_set_to_infinity(param_1,param_2);
    return uVar6;
  }
  iVar1 = BN_is_zero(param_1[2]);
  if (iVar1 != 0) {
    ERR_put_error(0x10,0x11c,0x72,"crypto\\ec\\ec_mult.c",CONCAT44(uVar13,0x9c));
    return 0;
  }
  iVar1 = BN_is_zero(param_1[3]);
  if (iVar1 != 0) {
    ERR_put_error(0x10,0x11c,0xa4,"crypto\\ec\\ec_mult.c",CONCAT44(uVar13,0xa0));
    return 0;
  }
  BN_CTX_start(param_5);
  lVar7 = EC_POINT_new(param_1);
  if ((lVar7 == 0) || (lVar8 = EC_POINT_new(param_1), lVar8 == 0)) {
    uVar9 = 0xa8;
LAB_14f754115:
    uVar13 = 0x41;
  }
  else if (param_4 == 0) {
    iVar1 = EC_POINT_copy(lVar7,param_1[1]);
    if (iVar1 != 0) goto LAB_14f753c3b;
    uVar9 = 0xae;
    uVar13 = 0x10;
  }
  else {
    iVar1 = EC_POINT_copy(lVar7,param_4);
    if (iVar1 == 0) {
      uVar9 = 0xb3;
      uVar13 = 0x10;
    }
    else {
LAB_14f753c3b:
      BN_set_flags(*(undefined8 *)(lVar7 + 0x10),4);
      BN_set_flags(*(undefined8 *)(lVar7 + 0x18),4);
      BN_set_flags(*(undefined8 *)(lVar7 + 0x20),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x10),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x18),4);
      BN_set_flags(*(undefined8 *)(param_2 + 0x20),4);
      BN_set_flags(*(undefined8 *)(lVar8 + 0x10),4);
      BN_set_flags(*(undefined8 *)(lVar8 + 0x18),4);
      BN_set_flags(*(undefined8 *)(lVar8 + 0x20),4);
      uVar9 = BN_CTX_get(param_5);
      uVar10 = BN_CTX_get(param_5);
      lVar11 = BN_CTX_get(param_5);
      if (lVar11 == 0) {
        uVar9 = 0xc0;
        goto LAB_14f754115;
      }
      iVar1 = BN_mul(uVar9,param_1[2],param_1[3],param_5);
      if (iVar1 == 0) {
        uVar9 = 0xc5;
        uVar13 = 3;
      }
      else {
        iVar1 = BN_num_bits(uVar9);
        iVar2 = bn_get_top(uVar9);
        iVar2 = iVar2 + 2;
        lVar12 = bn_wexpand(lVar11,iVar2);
        if ((lVar12 == 0) || (lVar12 = bn_wexpand(uVar10,iVar2), lVar12 == 0)) {
          uVar9 = 0xd3;
          uVar13 = 3;
        }
        else {
          lVar12 = BN_copy(lVar11,param_3);
          if (lVar12 == 0) {
            uVar9 = 0xd8;
            uVar13 = 3;
          }
          else {
            BN_set_flags(lVar11,4);
            iVar3 = BN_num_bits(lVar11);
            if (((iVar1 < iVar3) || (iVar3 = BN_is_negative(lVar11), iVar3 != 0)) &&
               (iVar3 = BN_nnmod(lVar11,lVar11,uVar9,param_5), iVar3 == 0)) {
              uVar9 = 0xe4;
              uVar13 = 3;
            }
            else {
              iVar3 = BN_add(uVar10,lVar11,uVar9);
              if (iVar3 == 0) {
                uVar9 = 0xea;
                uVar13 = 3;
              }
              else {
                BN_set_flags(uVar10,4);
                iVar3 = BN_add(lVar11,uVar10,uVar9);
                if (iVar3 == 0) {
                  uVar9 = 0xef;
                  uVar13 = 3;
                }
                else {
                  iVar3 = BN_is_bit_set(uVar10,iVar1);
                  BN_consttime_swap((longlong)iVar3,lVar11,uVar10,iVar2);
                  uVar13 = bn_get_top(param_1[8]);
                  lVar12 = bn_wexpand(*(undefined8 *)(lVar8 + 0x10),uVar13);
                  if (((((lVar12 == 0) ||
                        (lVar12 = bn_wexpand(*(undefined8 *)(lVar8 + 0x18),uVar13), lVar12 == 0)) ||
                       ((lVar12 = bn_wexpand(*(undefined8 *)(lVar8 + 0x20),uVar13), lVar12 == 0 ||
                        ((lVar12 = bn_wexpand(*(undefined8 *)(param_2 + 0x10),uVar13), lVar12 == 0
                         || (lVar12 = bn_wexpand(*(undefined8 *)(param_2 + 0x18),uVar13),
                            lVar12 == 0)))))) ||
                      (lVar12 = bn_wexpand(*(undefined8 *)(param_2 + 0x20),uVar13), lVar12 == 0)) ||
                     (((lVar12 = bn_wexpand(*(undefined8 *)(lVar7 + 0x10),uVar13), lVar12 == 0 ||
                       (lVar12 = bn_wexpand(*(undefined8 *)(lVar7 + 0x18),uVar13), lVar12 == 0)) ||
                      (lVar12 = bn_wexpand(*(undefined8 *)(lVar7 + 0x20),uVar13), lVar12 == 0)))) {
                    uVar9 = 0x103;
                    uVar13 = 3;
                  }
                  else if ((*(int *)(lVar7 + 0x28) == 0) &&
                          (iVar2 = EC_POINT_make_affine(param_1,lVar7,param_5), iVar2 == 0)) {
                    uVar9 = 0x109;
                    uVar13 = 0x10;
                  }
                  else {
                    iVar2 = FUN_14f7538b0(param_1,param_2,lVar8,lVar7,param_5);
                    if (iVar2 != 0) {
                      uVar5 = 1;
                      do {
                        iVar1 = iVar1 + -1;
                        if (iVar1 < 0) {
                          lVar11 = (longlong)(int)uVar5;
                          BN_consttime_swap(lVar11,*(undefined8 *)(param_2 + 0x10),
                                            *(undefined8 *)(lVar8 + 0x10),uVar13);
                          BN_consttime_swap(lVar11,*(undefined8 *)(param_2 + 0x18),
                                            *(undefined8 *)(lVar8 + 0x18),uVar13);
                          BN_consttime_swap(lVar11,*(undefined8 *)(param_2 + 0x20),
                                            *(undefined8 *)(lVar8 + 0x20),uVar13);
                          uVar5 = (*(uint *)(param_2 + 0x28) ^ *(uint *)(lVar8 + 0x28)) & uVar5;
                          *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ uVar5;
                          *(uint *)(lVar8 + 0x28) = *(uint *)(lVar8 + 0x28) ^ uVar5;
                          if ((*(code **)(*param_1 + 0x1a8) != (code *)0x0) &&
                             (iVar1 = (**(code **)(*param_1 + 0x1a8))
                                                (param_1,param_2,lVar8,lVar7,param_5), iVar1 == 0))
                          {
                            uVar9 = 0x16e;
                            uVar13 = 0x88;
                            goto LAB_14f754120;
                          }
                          local_44 = 1;
                          goto LAB_14f754131;
                        }
                        uVar4 = BN_is_bit_set(lVar11,iVar1);
                        lVar12 = (longlong)(int)(uVar4 ^ uVar5);
                        BN_consttime_swap(lVar12,*(undefined8 *)(param_2 + 0x10),
                                          *(undefined8 *)(lVar8 + 0x10),uVar13);
                        BN_consttime_swap(lVar12,*(undefined8 *)(param_2 + 0x18),
                                          *(undefined8 *)(lVar8 + 0x18),uVar13);
                        BN_consttime_swap(lVar12,*(undefined8 *)(param_2 + 0x20),
                                          *(undefined8 *)(lVar8 + 0x20),uVar13);
                        uVar5 = (*(uint *)(param_2 + 0x28) ^ *(uint *)(lVar8 + 0x28)) &
                                (uVar4 ^ uVar5);
                        *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ uVar5;
                        *(uint *)(lVar8 + 0x28) = *(uint *)(lVar8 + 0x28) ^ uVar5;
                        iVar2 = FUN_14f753950(param_1,param_2,lVar8,lVar7,param_5);
                        uVar5 = uVar4;
                      } while (iVar2 != 0);
                      ERR_put_error(0x10,0x11c,0xa2,"crypto\\ec\\ec_mult.c",0x15f);
                      goto LAB_14f754131;
                    }
                    uVar9 = 0x10f;
                    uVar13 = 0x99;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14f754120:
  ERR_put_error(0x10,0x11c,uVar13,"crypto\\ec\\ec_mult.c",uVar9);
LAB_14f754131:
  EC_POINT_free(lVar7);
  EC_POINT_clear_free(lVar8);
  BN_CTX_end(param_5);
  return (ulonglong)local_44;
}

// ec_wNAF_have_precompute_mult @ 14f754180

undefined8 ec_wNAF_have_precompute_mult(longlong param_1)

{
  if ((*(int *)(param_1 + 0x98) == 5) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    return 1;
  }
  return 0;
}

// ec_wNAF_mul @ 14f7541b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_wNAF_mul(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
           undefined8 *param_5,longlong *param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  void *pvVar10;
  void *_Dst;
  undefined8 *puVar11;
  size_t *psVar12;
  ulonglong uVar13;
  longlong *plVar14;
  void *_Src;
  longlong *plVar15;
  longlong *plVar16;
  char *pcVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 uVar20;
  uint local_res8;
  uint local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  local_40 = (longlong *)0x14f7541cf;
  plVar18 = (longlong *)0x0;
  local_c0 = (longlong *)0x0;
  local_78 = 0;
  local_60 = 0;
  local_b0 = (longlong *)0x0;
  local_48 = 0;
  local_res8 = 0;
  local_98 = (char *)0x0;
  local_88 = (longlong *)0x0;
  local_90 = 0;
  local_a0 = (longlong *)0x0;
  local_c8 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_d0 = 0;
  iVar4 = BN_is_zero(*(undefined8 *)(param_1 + 0x10));
  if ((iVar4 != 0) || (iVar4 = BN_is_zero(*(undefined8 *)(param_1 + 0x18)), iVar4 != 0)) {
LAB_14f7542cd:
    plVar14 = plVar18;
    plVar16 = plVar18;
    if (param_3 != 0) goto LAB_14f7542d6;
    goto LAB_14f7543ef;
  }
  if (param_3 != *(longlong *)(param_1 + 0x10)) {
    if (param_3 != 0) {
      if (param_4 == (longlong *)0x0) {
        uVar7 = ec_scalar_mul_ladder(param_1,param_2,param_3,0,param_7);
        return uVar7;
      }
      goto LAB_14f754292;
    }
LAB_14f754297:
    if ((param_4 == (longlong *)&DAT_00000001) && (*param_6 != *(longlong *)(param_1 + 0x10))) {
      uVar7 = ec_scalar_mul_ladder(param_1,param_2,*param_6,*param_5,param_7);
      return uVar7;
    }
    goto LAB_14f7542cd;
  }
LAB_14f754292:
  if (param_3 == 0) goto LAB_14f754297;
LAB_14f7542d6:
  local_78 = EC_GROUP_get0_generator(param_1);
  if (local_78 == 0) {
    ERR_put_error(0x10,0xbb,0x71,"crypto\\ec\\ec_mult.c",0x1cf);
    uVar7 = 0;
    plVar14 = plVar18;
    goto LAB_14f75471f;
  }
  plVar16 = *(longlong **)(param_1 + 0xa0);
  if (((plVar16 != (longlong *)0x0) && (plVar16[2] != 0)) &&
     (local_58 = plVar16, iVar4 = EC_POINT_cmp(param_1,local_78,*(undefined8 *)plVar16[4],param_7),
     iVar4 == 0)) {
    plVar14 = (longlong *)plVar16[1];
    local_b0 = plVar14;
    iVar4 = BN_num_bits(param_3);
    plVar15 = (longlong *)plVar16[2];
    plVar14 = (longlong *)((ulonglong)(longlong)iVar4 / (ulonglong)plVar14 + 1);
    if (plVar15 < plVar14) {
      plVar14 = plVar15;
    }
    local_48 = 1L << ((char)plVar16[3] - 1U & 0x3f);
    local_c0 = plVar14;
    if (plVar16[5] == (longlong)plVar15 * local_48) goto LAB_14f7543ef;
    uVar7 = 0x1eb;
    goto LAB_14f7543ab;
  }
  plVar14 = (longlong *)&DAT_00000001;
  local_58 = (longlong *)0x0;
  local_c0 = (longlong *)&DAT_00000001;
  plVar16 = (longlong *)0x0;
  local_d0 = 1;
LAB_14f7543ef:
  local_b8 = (longlong *)((longlong)plVar14 + (longlong)param_4);
  lVar9 = (longlong)local_b8 * 8;
  local_98 = (char *)CRYPTO_malloc(lVar9,"crypto\\ec\\ec_mult.c",0x1f9);
  local_90 = CRYPTO_malloc(lVar9,"crypto\\ec\\ec_mult.c",0x1fa);
  local_88 = (longlong *)CRYPTO_malloc(lVar9 + 8,"crypto\\ec\\ec_mult.c",0x1fc);
  local_c8 = (longlong *)CRYPTO_malloc(lVar9,"crypto\\ec\\ec_mult.c",0x1fd);
  if (local_88 != (longlong *)0x0) {
    *local_88 = 0;
  }
  if (((local_98 == (char *)0x0) || (local_90 == 0)) ||
     ((local_88 == (longlong *)0x0 || (local_c8 == (longlong *)0x0)))) {
    uVar7 = 0x204;
    uVar20 = 0x41;
LAB_14f7543b1:
    ERR_put_error(0x10,0xbb,uVar20,"crypto\\ec\\ec_mult.c",uVar7);
LAB_14f75471b:
    uVar7 = 0;
    plVar14 = (longlong *)0x0;
    goto LAB_14f75471f;
  }
  local_70 = (longlong *)((ulonglong)local_d0 + (longlong)param_4);
  local_68 = 0;
  if (local_70 != (longlong *)0x0) {
    local_a8 = (longlong *)((longlong)local_88 - (longlong)param_6);
    local_80 = (longlong)local_98 - (longlong)param_6;
    local_40 = local_a8 + 1;
    local_50 = (longlong *)(local_90 - (longlong)param_6);
    plVar14 = plVar18;
    do {
      lVar9 = local_80;
      lVar8 = param_3;
      if (plVar14 < param_4) {
        lVar8 = *param_6;
      }
      uVar5 = BN_num_bits(lVar8);
      if (uVar5 < 2000) {
        if (uVar5 < 800) {
          if (uVar5 < 300) {
            if (uVar5 < 0x46) {
              lVar8 = 2 - (ulonglong)(uVar5 < 0x14);
            }
            else {
              lVar8 = 3;
            }
          }
          else {
            lVar8 = 4;
          }
        }
        else {
          lVar8 = 5;
        }
      }
      else {
        lVar8 = 6;
      }
      *(longlong *)(lVar9 + (longlong)param_6) = lVar8;
      local_68 = local_68 + (1L << ((char)lVar8 - 1U & 0x3f));
      *(undefined8 *)((longlong)local_40 + (longlong)param_6) = 0;
      lVar9 = param_3;
      if (plVar14 < param_4) {
        lVar9 = *param_6;
      }
      puVar11 = (undefined8 *)((longlong)local_50 + (longlong)param_6);
      lVar9 = bn_compute_wNAF(lVar9,*(undefined4 *)(local_80 + (longlong)param_6),puVar11);
      *(longlong *)((longlong)local_a8 + (longlong)param_6) = lVar9;
      if (lVar9 == 0) goto LAB_14f75471b;
      if (local_a0 < (longlong *)*puVar11) {
        local_a0 = (longlong *)*puVar11;
      }
      plVar14 = (longlong *)((longlong)plVar14 + 1);
      param_6 = param_6 + 1;
    } while (plVar14 < local_70);
  }
  plVar14 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    if (plVar16 != (longlong *)0x0) {
      local_c0 = (longlong *)0x0;
      if (local_d0 != 0) {
        uVar7 = 0x22b;
        goto LAB_14f7543ab;
      }
      uVar13 = plVar16[3];
      *(ulonglong *)(local_98 + (longlong)param_4 * 8) = uVar13;
      pvVar10 = (void *)bn_compute_wNAF(param_3,uVar13 & 0xffffffff,&local_c0);
      if (pvVar10 != (void *)0x0) {
        if (local_c0 <= local_a0) {
          local_b8 = (longlong *)((longlong)param_4 + 1);
          local_88[(longlong)param_4] = (longlong)pvVar10;
          local_88[(longlong)param_4 + 1] = 0;
          *(longlong **)(local_90 + (longlong)param_4 * 8) = local_c0;
          local_c8[(longlong)param_4] = plVar16[4];
          goto LAB_14f7549eb;
        }
        if (local_c0 < (longlong *)((longlong)plVar14 * (longlong)local_b0)) {
          uVar13 = (ulonglong)((longlong)local_b0 + -1 + (longlong)local_c0) / (ulonglong)local_b0;
          if ((ulonglong)plVar16[2] < uVar13) {
            ERR_put_error(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",0x256);
            uVar7 = 599;
LAB_14f75470c:
            CRYPTO_free(pvVar10,"crypto\\ec\\ec_mult.c",uVar7);
            goto LAB_14f75471b;
          }
          local_b8 = (longlong *)(uVar13 + (longlong)param_4);
        }
        plVar14 = (longlong *)local_58[4];
        if (param_4 < local_b8) {
          local_50 = (longlong *)((longlong)local_b8 + -1);
          local_80 = (longlong)local_88 - local_90;
          psVar12 = (size_t *)(local_90 + (longlong)param_4 * 8);
          local_a8 = (longlong *)((longlong)local_c8 - local_90);
          _Src = pvVar10;
          plVar16 = param_4;
          do {
            if (plVar16 < local_50) {
              *psVar12 = (size_t)local_b0;
              if (local_c0 < local_b0) {
                ERR_put_error(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",0x265);
                uVar7 = 0x266;
                goto LAB_14f75470c;
              }
              local_c0 = (longlong *)((longlong)local_c0 - (longlong)local_b0);
            }
            else {
              *psVar12 = (size_t)local_c0;
            }
            *(undefined8 *)(local_80 + 8 + (longlong)psVar12) = 0;
            _Dst = (void *)CRYPTO_malloc(*psVar12,"crypto\\ec\\ec_mult.c",0x272);
            *(void **)(local_80 + (longlong)psVar12) = _Dst;
            if (_Dst == (void *)0x0) {
              ERR_put_error(0x10,0xbb,0x41,"crypto\\ec\\ec_mult.c",0x274);
              uVar7 = 0x275;
              goto LAB_14f75470c;
            }
            memcpy(_Dst,_Src,*psVar12);
            if (local_a0 < (longlong *)*psVar12) {
              local_a0 = (longlong *)*psVar12;
            }
            if (*plVar14 == 0) {
              ERR_put_error(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",0x27d);
              uVar7 = 0x27e;
              goto LAB_14f75470c;
            }
            plVar16 = (longlong *)((longlong)plVar16 + 1);
            _Src = (void *)((longlong)_Src + (longlong)local_b0);
            *(longlong **)((longlong)local_a8 + (longlong)psVar12) = plVar14;
            psVar12 = psVar12 + 1;
            plVar14 = plVar14 + local_48;
          } while (plVar16 < local_b8);
        }
        CRYPTO_free(pvVar10,"crypto\\ec\\ec_mult.c",0x285);
        goto LAB_14f7549eb;
      }
      goto LAB_14f75471b;
    }
    if (local_d0 != 1) {
      uVar7 = 0x222;
LAB_14f7543ab:
      uVar20 = 0x44;
      goto LAB_14f7543b1;
    }
  }
LAB_14f7549eb:
  lVar9 = local_68;
  plVar14 = (longlong *)CRYPTO_malloc(local_68 * 8 + 8,"crypto\\ec\\ec_mult.c",0x28f);
  if (plVar14 == (longlong *)0x0) {
    ERR_put_error(0x10,0xbb,0x41,"crypto\\ec\\ec_mult.c",0x291);
LAB_14f754a3a:
    uVar7 = 0;
  }
  else {
    local_a8 = plVar14 + lVar9;
    *local_a8 = 0;
    plVar16 = plVar14;
    if (local_70 != (longlong *)0x0) {
      lVar9 = (longlong)local_c8 - (longlong)local_98;
      plVar15 = plVar18;
      pcVar17 = local_98;
      do {
        *(longlong **)(pcVar17 + lVar9) = plVar16;
        plVar19 = plVar18;
        do {
          lVar8 = EC_POINT_new(param_1);
          *plVar16 = lVar8;
          if (lVar8 == 0) goto LAB_14f754e90;
          plVar16 = plVar16 + 1;
          plVar19 = (longlong *)((longlong)plVar19 + 1);
        } while (plVar19 < (longlong *)(1L << (*pcVar17 - 1U & 0x3f)));
        plVar15 = (longlong *)((longlong)plVar15 + 1);
        pcVar17 = pcVar17 + 8;
      } while (plVar15 < local_70);
    }
    plVar15 = local_70;
    if (plVar16 != local_a8) {
      ERR_put_error(0x10,0xbb,0x44,"crypto\\ec\\ec_mult.c",0x2a2);
LAB_14f754ae5:
      uVar7 = 0;
      goto LAB_14f75471f;
    }
    local_60 = EC_POINT_new(param_1);
    if (local_60 == 0) {
LAB_14f754e90:
      uVar7 = 0;
      goto LAB_14f75471f;
    }
    if (plVar15 != (longlong *)0x0) {
      local_a8 = (longlong *)((longlong)param_5 - (longlong)local_c8);
      lVar9 = (longlong)local_98 - (longlong)local_c8;
      plVar16 = local_c8;
      do {
        if (plVar18 < param_4) {
          iVar4 = EC_POINT_copy(*(undefined8 *)*plVar16,
                                *(undefined8 *)((longlong)local_a8 + (longlong)plVar16));
          if (iVar4 == 0) {
            uVar7 = 0;
            goto LAB_14f75471f;
          }
        }
        else {
          iVar4 = EC_POINT_copy(*(undefined8 *)*plVar16,local_78);
          if (iVar4 == 0) goto LAB_14f754ae5;
        }
        if (1 < *(ulonglong *)((longlong)plVar16 + lVar9)) {
          iVar4 = EC_POINT_dbl(param_1,local_60,*(undefined8 *)*plVar16,param_7);
          if (iVar4 == 0) goto LAB_14f754ae5;
          uVar13 = 1;
          if (1 < (ulonglong)(1L << (*(char *)((longlong)plVar16 + lVar9) - 1U & 0x3f))) {
            do {
              iVar4 = EC_POINT_add(param_1,*(undefined8 *)(*plVar16 + uVar13 * 8),
                                   *(undefined8 *)(*plVar16 + -8 + uVar13 * 8),local_60,param_7);
              if (iVar4 == 0) goto LAB_14f754ae5;
              uVar13 = uVar13 + 1;
            } while (uVar13 < (ulonglong)(1L << (*(char *)((longlong)plVar16 + lVar9) - 1U & 0x3f)))
            ;
          }
        }
        plVar18 = (longlong *)((longlong)plVar18 + 1);
        plVar16 = plVar16 + 1;
      } while (plVar18 < local_70);
    }
    iVar4 = EC_POINTs_make_affine(param_1,local_68,plVar14,param_7);
    if (iVar4 == 0) goto LAB_14f754a3a;
    bVar3 = true;
    iVar4 = (int)local_a0 + -1;
    if (iVar4 < 0) {
LAB_14f754e5b:
      iVar4 = EC_POINT_set_to_infinity(param_1,param_2);
      if (iVar4 == 0) goto LAB_14f754a3a;
    }
    else {
      local_b0 = (longlong *)(longlong)iVar4;
      plVar18 = local_b8;
      do {
        plVar16 = (longlong *)0x0;
        if ((!bVar3) && (iVar6 = EC_POINT_dbl(param_1,param_2,param_2,param_7), iVar6 == 0))
        goto LAB_14f754ae5;
        if (plVar18 != (longlong *)0x0) {
          lVar9 = local_90 - (longlong)local_88;
          uVar13 = (ulonglong)iVar4;
          lVar8 = (longlong)local_88 - (longlong)local_c8;
          plVar15 = local_c8;
          local_78 = uVar13;
          do {
            plVar18 = (longlong *)((longlong)plVar15 + lVar8);
            if ((uVar13 < *(ulonglong *)((longlong)plVar18 + lVar9)) &&
               (cVar1 = *(char *)((longlong)local_b0 + *plVar18), iVar6 = (int)cVar1, cVar1 != '\0')
               ) {
              iVar2 = -iVar6;
              if (-(iVar6 >> 0x1f) == 0) {
                iVar2 = iVar6;
              }
              if (-(iVar6 >> 0x1f) != local_res8) {
                if ((!bVar3) && (iVar6 = EC_POINT_invert(param_1,param_2,param_7), iVar6 == 0))
                goto LAB_14f754ae5;
                local_res8 = (uint)(local_res8 == 0);
              }
              if (bVar3) {
                iVar6 = EC_POINT_copy(param_2,*(undefined8 *)(*plVar15 + ((longlong)iVar2 >> 1) * 8)
                                     );
                if (iVar6 == 0) goto LAB_14f754ae5;
                iVar6 = ec_point_blind_coordinates(param_1,param_2,param_7);
                if (iVar6 == 0) {
                  ERR_put_error(0x10,0xbb,0xa3,"crypto\\ec\\ec_mult.c",0x2f1);
                  uVar7 = 0;
                  goto LAB_14f75471f;
                }
                bVar3 = false;
                uVar13 = local_78;
              }
              else {
                iVar6 = EC_POINT_add(param_1,param_2,param_2,
                                     *(undefined8 *)(*plVar15 + ((longlong)iVar2 >> 1) * 8),param_7)
                ;
                uVar13 = local_78;
                if (iVar6 == 0) goto LAB_14f754ae5;
              }
            }
            plVar16 = (longlong *)((longlong)plVar16 + 1);
            plVar15 = plVar15 + 1;
            plVar18 = local_b8;
          } while (plVar16 < local_b8);
        }
        iVar4 = iVar4 + -1;
        local_b0 = (longlong *)((longlong)local_b0 + -1);
      } while (-1 < iVar4);
      if (bVar3) goto LAB_14f754e5b;
      if (local_res8 != 0) {
        iVar4 = EC_POINT_invert(param_1,param_2,param_7);
        if (iVar4 != 0) {
          uVar7 = 1;
          goto LAB_14f75471f;
        }
        goto LAB_14f754ae5;
      }
    }
    uVar7 = 1;
  }
LAB_14f75471f:
  EC_POINT_free(local_60);
  CRYPTO_free(local_98,"crypto\\ec\\ec_mult.c",0x30d);
  CRYPTO_free(local_90,"crypto\\ec\\ec_mult.c",0x30e);
  plVar18 = local_88;
  if (local_88 != (longlong *)0x0) {
    lVar9 = *local_88;
    plVar16 = local_88;
    while (lVar9 != 0) {
      CRYPTO_free(lVar9,"crypto\\ec\\ec_mult.c",0x313);
      plVar15 = plVar16 + 1;
      plVar16 = plVar16 + 1;
      lVar9 = *plVar15;
    }
    CRYPTO_free(plVar18,"crypto\\ec\\ec_mult.c",0x315);
  }
  if (plVar14 != (longlong *)0x0) {
    lVar9 = *plVar14;
    plVar18 = plVar14;
    while (lVar9 != 0) {
      EC_POINT_clear_free(lVar9);
      plVar16 = plVar18 + 1;
      plVar18 = plVar18 + 1;
      lVar9 = *plVar16;
    }
    CRYPTO_free(plVar14,"crypto\\ec\\ec_mult.c",0x31b);
  }
  CRYPTO_free(local_c8,"crypto\\ec\\ec_mult.c",0x31d);
  return uVar7;
}

// ec_wNAF_precompute_mult @ 14f754eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_wNAF_precompute_mult(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong local_res20;
  undefined8 uVar17;
  longlong *local_58;
  longlong local_40;
  
  lVar11 = 0;
  lVar14 = 0;
  local_40 = 0;
  lVar15 = 0;
  local_58 = (longlong *)0x0;
  EC_pre_comp_free();
  plVar2 = (longlong *)FUN_14f7539f0(param_1);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = EC_GROUP_get0_generator(param_1);
  plVar7 = plVar2;
  lVar5 = lVar11;
  lVar6 = lVar11;
  if (lVar3 == 0) {
    ERR_put_error(0x10,0xbc,0x71,"crypto\\ec\\ec_mult.c",0x347);
  }
  else {
    if ((param_2 != 0) || (param_2 = BN_CTX_new(), local_40 = param_2, param_2 != 0)) {
      BN_CTX_start(param_2);
      lVar4 = EC_GROUP_get0_order(param_1);
      lVar5 = lVar14;
      lVar6 = lVar15;
      if (lVar4 != 0) {
        iVar1 = BN_is_zero(lVar4);
        if (iVar1 == 0) {
          iVar1 = BN_num_bits(lVar4);
          uVar8 = (ulonglong)iVar1;
          local_res20 = 4;
          if ((799 < uVar8) || ((uVar8 < 0x46 && (4 < 2 - (ulonglong)(uVar8 < 0x14))))) {
            if (uVar8 < 2000) {
              if (uVar8 < 800) {
                local_res20 = 4;
                if (uVar8 < 300) {
                  if (uVar8 < 0x46) {
                    local_res20 = 2 - (ulonglong)(uVar8 < 0x14);
                  }
                  else {
                    local_res20 = 3;
                  }
                }
              }
              else {
                local_res20 = 5;
              }
            }
            else {
              local_res20 = 6;
            }
          }
          uVar13 = uVar8 + 7 >> 3;
          uVar16 = 1L << ((char)local_res20 - 1U & 0x3f);
          uVar8 = uVar16 * uVar13;
          local_58 = (longlong *)CRYPTO_malloc(uVar8 * 8 + 8,"crypto\\ec\\ec_mult.c",0x371);
          if (local_58 == (longlong *)0x0) {
            ERR_put_error(0x10,0xbc,0x41,"crypto\\ec\\ec_mult.c",0x373);
          }
          else {
            uVar9 = 0;
            local_58[uVar8] = 0;
            if (uVar8 != 0) {
              do {
                lVar14 = EC_POINT_new(param_1);
                local_58[uVar9] = lVar14;
                if (lVar14 == 0) {
                  uVar17 = 0x37b;
                  lVar6 = lVar11;
                  goto LAB_14f755276;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar8);
            }
            lVar5 = EC_POINT_new(param_1);
            lVar6 = lVar11;
            if ((lVar5 == 0) || (lVar6 = EC_POINT_new(param_1), lVar6 == 0)) {
              uVar17 = 0x382;
              lVar11 = lVar5;
LAB_14f755276:
              ERR_put_error(0x10,0xbc,0x41,"crypto\\ec\\ec_mult.c",uVar17);
              lVar5 = lVar11;
            }
            else {
              iVar1 = EC_POINT_copy(lVar6,lVar3);
              if (iVar1 != 0) {
                uVar9 = 0;
                plVar12 = local_58;
                if (uVar13 != 0) {
                  do {
                    iVar1 = EC_POINT_dbl(param_1,lVar5,lVar6,param_2);
                    if (iVar1 == 0) goto LAB_14f755292;
                    iVar1 = EC_POINT_copy(*plVar12,lVar6);
                    plVar12 = plVar12 + 1;
                    if (iVar1 == 0) goto LAB_14f755292;
                    uVar10 = 1;
                    if (1 < uVar16) {
                      do {
                        iVar1 = EC_POINT_add(param_1,*plVar12,lVar5,plVar12[-1],param_2);
                        if (iVar1 == 0) goto LAB_14f755292;
                        uVar10 = uVar10 + 1;
                        plVar12 = plVar12 + 1;
                      } while (uVar10 < uVar16);
                    }
                    if (uVar9 < uVar13 - 1) {
                      iVar1 = EC_POINT_dbl(param_1,lVar6,lVar5,param_2);
                      if (iVar1 == 0) goto LAB_14f755292;
                      uVar10 = 2;
                      do {
                        iVar1 = EC_POINT_dbl(param_1,lVar6,lVar6,param_2);
                        if (iVar1 == 0) goto LAB_14f755292;
                        uVar10 = uVar10 + 1;
                      } while (uVar10 < 8);
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < uVar13);
                }
                iVar1 = EC_POINTs_make_affine(param_1,uVar8,local_58,param_2);
                if (iVar1 != 0) {
                  plVar2[2] = uVar13;
                  plVar2[3] = local_res20;
                  plVar7 = (longlong *)0x0;
                  plVar2[4] = (longlong)local_58;
                  plVar2[5] = uVar8;
                  *plVar2 = param_1;
                  plVar2[1] = 8;
                  lVar11 = 1;
                  local_58 = (longlong *)0x0;
                  *(undefined4 *)(param_1 + 0x98) = 5;
                  *(longlong **)(param_1 + 0xa0) = plVar2;
                  goto LAB_14f75529f;
                }
              }
            }
          }
        }
        else {
          ERR_put_error(0x10,0xbc,0x72,"crypto\\ec\\ec_mult.c",0x357);
        }
      }
    }
LAB_14f755292:
    lVar11 = 0;
  }
LAB_14f75529f:
  BN_CTX_end(param_2);
  BN_CTX_free(local_40);
  EC_ec_pre_comp_free(plVar7);
  if (local_58 != (longlong *)0x0) {
    lVar14 = *local_58;
    plVar2 = local_58;
    while (lVar14 != 0) {
      EC_POINT_free(lVar14);
      plVar7 = plVar2 + 1;
      plVar2 = plVar2 + 1;
      lVar14 = *plVar7;
    }
    CRYPTO_free(local_58,"crypto\\ec\\ec_mult.c",0x3c6);
  }
  EC_POINT_free(lVar5);
  EC_POINT_free(lVar6);
  return lVar11;
}


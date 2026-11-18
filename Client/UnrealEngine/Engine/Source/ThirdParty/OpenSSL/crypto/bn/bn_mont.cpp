// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// BN_MONT_CTX_copy @ 14f721ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * BN_MONT_CTX_copy(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = BN_copy(param_1 + 2,param_2 + 2);
  if (((lVar1 != 0) && (lVar1 = BN_copy(param_1 + 8,param_2 + 8), lVar1 != 0)) &&
     (lVar1 = BN_copy(param_1 + 0xe,param_2 + 0xe), lVar1 != 0)) {
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    return param_1;
  }
  return (undefined4 *)0x0;
}

// BN_MONT_CTX_free @ 14f721c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_MONT_CTX_free(longlong param_1)

{
  if (param_1 != 0) {
    BN_clear_free(param_1 + 8);
    BN_clear_free(param_1 + 0x20);
    BN_clear_free(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
      CRYPTO_free(param_1,"crypto\\bn\\bn_mont.c",0x104);
    }
  }
  return;
}

// BN_MONT_CTX_init @ 14f721c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_MONT_CTX_init(undefined4 *param_1)

{
  *param_1 = 0;
  bn_init(param_1 + 2);
  bn_init(param_1 + 8);
  bn_init(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  return;
}

// BN_MONT_CTX_new @ 14f721cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * BN_MONT_CTX_new(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f721cfc;
  puVar1 = (undefined4 *)CRYPTO_malloc(0x68,"crypto\\bn\\bn_mont.c",0xe8);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(3,0x95,0x41,"crypto\\bn\\bn_mont.c",0xe9,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  bn_init(puVar1 + 2);
  bn_init(puVar1 + 8);
  bn_init(puVar1 + 0xe);
  *(undefined8 *)(puVar1 + 0x16) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  puVar1[0x18] = 1;
  return puVar1;
}

// BN_MONT_CTX_set @ 14f721d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_MONT_CTX_set(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong local_48 [2];
  longlong *local_38;
  uint local_30;
  undefined8 local_2c;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f721da4;
  uVar5 = 0;
  uVar6 = 0;
  iVar2 = BN_is_zero(param_2);
  if (iVar2 != 0) {
    return 0;
  }
  BN_CTX_start(param_3);
  puVar3 = (undefined8 *)BN_CTX_get(param_3);
  uVar7 = uVar5;
  if ((puVar3 != (undefined8 *)0x0) && (lVar4 = BN_copy(param_1 + 8,param_2), lVar4 != 0)) {
    iVar2 = BN_get_flags(param_2,4);
    if (iVar2 != 0) {
      BN_set_flags(param_1 + 8,4);
    }
    param_1[0xc] = 0;
    bn_init(&local_38);
    local_38 = local_48;
    local_2c = 2;
    iVar2 = BN_get_flags(param_2,4);
    if (iVar2 != 0) {
      BN_set_flags(&local_38,4);
    }
    iVar2 = BN_num_bits(param_2);
    *param_1 = iVar2 + 0x3f + (iVar2 + 0x3f >> 0x1f & 0x3fU) & 0xffffffc0;
    BN_set_word(param_1 + 2,0);
    iVar2 = BN_set_bit(param_1 + 2,0x40);
    if (iVar2 != 0) {
      local_48[0] = *(longlong *)*param_2;
      local_48[1] = 0;
      local_30 = (uint)(local_48[0] != 0);
      iVar2 = BN_is_one(&local_38);
      if (iVar2 == 0) {
        lVar4 = BN_mod_inverse(puVar3,param_1 + 2,&local_38,param_3);
        uVar7 = uVar6;
        if (lVar4 == 0) goto LAB_14f721ff9;
      }
      else {
        BN_set_word(puVar3,0);
      }
      iVar2 = BN_lshift(puVar3,puVar3,0x40);
      uVar7 = uVar5;
      if (iVar2 != 0) {
        iVar2 = BN_is_zero(puVar3);
        if (iVar2 == 0) {
          iVar2 = BN_sub_word(puVar3,1);
        }
        else {
          iVar2 = BN_set_word(puVar3,0xffffffffffffffff);
        }
        uVar7 = uVar6;
        if ((iVar2 != 0) && (iVar2 = BN_div(puVar3,0,puVar3,&local_38,param_3), iVar2 != 0)) {
          if (0 < *(int *)(puVar3 + 1)) {
            uVar5 = *(undefined8 *)*puVar3;
          }
          *(undefined8 *)(param_1 + 0x14) = uVar5;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          BN_set_word(param_1 + 2,0);
          iVar2 = BN_set_bit(param_1 + 2,*param_1 * 2);
          if ((iVar2 != 0) &&
             (iVar2 = BN_div(0,param_1 + 2,param_1 + 2,param_1 + 8,param_3), iVar2 != 0)) {
            uVar1 = param_1[10];
            for (lVar4 = (longlong)(int)param_1[4]; lVar4 < (int)uVar1; lVar4 = lVar4 + 1) {
              *(undefined8 *)(*(longlong *)(param_1 + 2) + lVar4 * 8) = 0;
            }
            param_1[4] = uVar1;
            uVar7 = 1;
          }
        }
      }
    }
  }
LAB_14f721ff9:
  BN_CTX_end(param_3);
  return uVar7;
}

// BN_MONT_CTX_set_locked @ 14f722030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_MONT_CTX_set_locked
                   (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  CRYPTO_THREAD_read_lock(param_2);
  lVar2 = *param_1;
  CRYPTO_THREAD_unlock(param_2);
  if (lVar2 == 0) {
    lVar2 = BN_MONT_CTX_new();
    if (lVar2 != 0) {
      iVar1 = BN_MONT_CTX_set(lVar2,param_3,param_4);
      if (iVar1 != 0) {
        CRYPTO_THREAD_write_lock(param_2);
        if (*param_1 == 0) {
          *param_1 = lVar2;
        }
        else {
          BN_MONT_CTX_free(lVar2);
          lVar2 = *param_1;
        }
        CRYPTO_THREAD_unlock(param_2);
        return lVar2;
      }
      BN_MONT_CTX_free(lVar2);
    }
    lVar2 = 0;
  }
  return lVar2;
}

// BN_from_montgomery @ 14f7220f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 BN_from_montgomery(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = bn_from_mont_fixed_top();
  bn_correct_top(param_1);
  return uVar1;
}

// BN_mod_mul_montgomery @ 14f722130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 BN_mod_mul_montgomery(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = bn_mul_mont_fixed_top();
  bn_correct_top(param_1);
  return uVar1;
}

// bn_from_mont_fixed_top @ 14f722180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
bn_from_mont_fixed_top(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  BN_CTX_start(param_4);
  lVar2 = BN_CTX_get(param_4);
  if (lVar2 != 0) {
    lVar3 = BN_copy(lVar2,param_2);
    if (lVar3 != 0) {
      uVar1 = FUN_14f722210(param_1,lVar2,param_3);
    }
  }
  BN_CTX_end(param_4);
  return uVar1;
}

// FUN_14f722210 @ 14f722210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14f722210(ulonglong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  
  uVar3 = *(uint *)(param_3 + 0x28);
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  uVar17 = uVar3 * 2;
  lVar11 = bn_wexpand(param_2,uVar17);
  if (lVar11 == 0) {
    return 0;
  }
  iVar4 = (int)param_2[1];
  uVar16 = 0;
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
  iVar9 = __xmm_00000003000000020000000100000000._4_4_;
  iVar22 = (int)__xmm_00000003000000020000000100000000;
  puVar14 = (ulonglong *)*param_2;
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  uVar19 = uVar16;
  if ((0 < (int)uVar17) && (uVar19 = 0, 3 < uVar17)) {
    uVar10 = uVar17 & 0x80000003;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
    }
    puVar18 = puVar14;
    uVar19 = uVar16;
    do {
      iVar21 = (int)uVar19;
      uVar19 = (ulonglong)(iVar21 + 4U);
      *puVar18 = -(ulonglong)((uint)((iVar21 + iVar22) - iVar4) >> 0x1f) & *puVar18;
      puVar18[1] = -(ulonglong)((uint)((iVar21 + iVar9) - iVar4) >> 0x1f) & puVar18[1];
      puVar18[2] = -(ulonglong)((uint)((iVar21 + 2 + iVar22) - iVar4) >> 0x1f) & puVar18[2];
      puVar18[3] = -(ulonglong)((uint)((iVar21 + 2 + iVar9) - iVar4) >> 0x1f) & puVar18[3];
      puVar18 = puVar18 + 4;
    } while ((int)(iVar21 + 4U) < (int)(uVar17 - uVar10));
  }
  for (lVar11 = (longlong)(int)uVar19; lVar11 < (int)uVar17; lVar11 = lVar11 + 1) {
    iVar22 = (int)uVar19;
    uVar19 = (ulonglong)(iVar22 + 1);
    puVar14[lVar11] = puVar14[lVar11] & -(ulonglong)((uint)(iVar22 - iVar4) >> 0x1f);
  }
  *(uint *)(param_2 + 1) = uVar17;
  lVar11 = *(longlong *)(param_3 + 0x50);
  lVar20 = (longlong)(int)uVar3;
  uVar19 = uVar16;
  uVar23 = (ulonglong)uVar3;
  if (0 < (int)uVar3) {
    do {
      lVar12 = bn_mul_add_words(puVar14,uVar5,uVar3,lVar11 * *puVar14);
      uVar6 = puVar14[lVar20];
      uVar13 = lVar12 + uVar6 + uVar19;
      puVar14[lVar20] = uVar13;
      puVar14 = puVar14 + 1;
      uVar19 = (uVar19 | uVar13 != uVar6) & (ulonglong)(uVar13 <= uVar6);
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  lVar11 = bn_wexpand(param_1,(ulonglong)uVar3);
  uVar15 = 0;
  if (lVar11 != 0) {
    uVar6 = *param_1;
    *(uint *)(param_1 + 1) = uVar3;
    *(int *)(param_1 + 2) = (int)param_2[2];
    uVar23 = *param_2 + lVar20 * 8;
    lVar11 = bn_sub_words(uVar6,uVar23,uVar5,uVar3);
    uVar19 = uVar19 - lVar11;
    uVar17 = 0;
    if (((0 < (int)uVar3) && (3 < uVar3)) &&
       ((uVar6 + (longlong)(int)(uVar3 - 1) * 8 < uVar23 ||
        (uVar23 + (longlong)(int)(uVar3 - 1) * 8 < uVar6)))) {
      uVar10 = uVar3 & 0x80000003;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
      }
      uVar24 = ~uVar19 & ___xmm_ffffffffffffffffffffffffffffffff;
      uVar25 = ~uVar19 & _UNK_15060db28;
      lVar11 = uVar6 - uVar23;
      puVar14 = (ulonglong *)(uVar23 + 0x10);
      uVar13 = uVar16;
      do {
        uVar8 = puVar14[-1];
        puVar18 = puVar14 + 4;
        uVar17 = (int)uVar13 + 4;
        uVar13 = (ulonglong)uVar17;
        uVar16 = uVar16 + 4;
        puVar1 = (ulonglong *)(lVar11 + -0x30 + (longlong)puVar18);
        uVar7 = puVar1[1];
        puVar2 = (ulonglong *)(lVar11 + -0x30 + (longlong)puVar18);
        *puVar2 = uVar19 & puVar14[-2] | uVar24 & *puVar1;
        puVar2[1] = uVar19 & uVar8 | uVar25 & uVar7;
        puVar14[-2] = 0;
        puVar14[-1] = 0;
        puVar1 = (ulonglong *)(lVar11 + -0x20 + (longlong)puVar18);
        uVar7 = puVar1[1];
        uVar8 = puVar14[1];
        puVar2 = (ulonglong *)(lVar11 + -0x20 + (longlong)puVar18);
        *puVar2 = uVar24 & *puVar1 | *puVar14 & uVar19;
        puVar2[1] = uVar25 & uVar7 | uVar8 & uVar19;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14 = puVar18;
      } while ((longlong)uVar16 < (longlong)(int)(uVar3 - uVar10));
    }
    lVar11 = (longlong)(int)uVar17;
    if (lVar11 < lVar20) {
      lVar20 = lVar20 - lVar11;
      puVar14 = (ulonglong *)(uVar23 + lVar11 * 8);
      do {
        *(ulonglong *)((longlong)puVar14 + (uVar6 - uVar23)) =
             ~uVar19 & *(ulonglong *)((longlong)puVar14 + (uVar6 - uVar23)) | *puVar14 & uVar19;
        *puVar14 = 0;
        lVar20 = lVar20 + -1;
        puVar14 = puVar14 + 1;
      } while (lVar20 != 0);
    }
    uVar15 = 1;
  }
  return uVar15;
}

// bn_mul_mont_fixed_top @ 14f7225b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
bn_mul_mont_fixed_top
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
          undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar2 = *(int *)(param_4 + 0x28);
  if (((iVar2 - 2U < 0x1ff) && (*(int *)(param_2 + 1) == iVar2)) && (*(int *)(param_3 + 1) == iVar2)
     ) {
    lVar3 = bn_wexpand(param_1,iVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = bn_mul_mont(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x20),param_4 + 0x50,
                        CONCAT44(uVar4,iVar2));
    if (iVar1 != 0) {
      *(uint *)(param_1 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2);
      *(int *)(param_1 + 1) = iVar2;
      return 1;
    }
  }
  if (iVar2 * 2 < *(int *)(param_2 + 1) + *(int *)(param_3 + 1)) {
    return 0;
  }
  BN_CTX_start(param_5);
  lVar3 = BN_CTX_get(param_5);
  uVar4 = 0;
  if (lVar3 != 0) {
    if (param_2 == param_3) {
      iVar2 = bn_sqr_fixed_top(lVar3,param_2,param_5);
    }
    else {
      iVar2 = bn_mul_fixed_top(lVar3,param_2,param_3,param_5);
    }
    uVar4 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_14f722210(param_1,lVar3,param_4);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = 1;
      }
    }
  }
  BN_CTX_end(param_5);
  return uVar4;
}

// bn_to_mont_fixed_top @ 14f7226f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bn_to_mont_fixed_top(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  bn_mul_mont_fixed_top(param_1,param_2,param_3 + 8,param_3,param_4);
  return;
}


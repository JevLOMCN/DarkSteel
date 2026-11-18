// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 13

// BN_mod_add @ 14f7479c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_mod_add(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  
  iVar1 = BN_add();
  if (iVar1 == 0) {
    return;
  }
  BN_nnmod(param_1,param_1,param_4,param_5);
  return;
}

// BN_mod_add_quick @ 14f747a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_mod_add_quick(undefined8 param_1)

{
  ulonglong uVar1;
  
  uVar1 = bn_mod_add_fixed_top();
  if ((int)uVar1 != 0) {
    bn_correct_top(param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

// BN_mod_lshift @ 14f747a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_mod_lshift(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  iVar1 = BN_nnmod(param_1,param_2,param_4,param_5);
  if (iVar1 == 0) {
LAB_14f747a89:
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      lVar3 = BN_dup(param_4);
      if (lVar3 == 0) goto LAB_14f747a89;
      *(undefined4 *)(lVar3 + 0x10) = 0;
    }
    if (lVar3 != 0) {
      param_4 = lVar3;
    }
    uVar2 = BN_mod_lshift_quick(param_1,param_1,param_3,param_4);
    BN_free(lVar3);
  }
  return uVar2;
}

// BN_mod_lshift1 @ 14f747af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_mod_lshift1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = BN_lshift1();
  if (iVar1 == 0) {
    return;
  }
  BN_nnmod(param_1,param_1,param_3,param_4);
  return;
}

// BN_mod_lshift1_quick @ 14f747b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_mod_lshift1_quick(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = BN_lshift1();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = BN_cmp(param_1,param_3);
  if (-1 < iVar1) {
    uVar2 = BN_sub(param_1,param_1,param_3);
    return uVar2;
  }
  return 1;
}

// BN_mod_lshift_quick @ 14f747bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_mod_lshift_quick(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f747bd6;
  if ((param_1 != param_2) && (lVar3 = BN_copy(), lVar3 == 0)) {
    return 0;
  }
  do {
    if (param_3 < 1) {
      return 1;
    }
    iVar1 = BN_num_bits(param_1);
    iVar2 = BN_num_bits(param_4);
    iVar2 = iVar2 - iVar1;
    if (iVar2 < 0) {
      ERR_put_error(3,0x77,0x6e,"crypto\\bn\\bn_mod.c",0x126,uVar4);
      return 0;
    }
    if (param_3 < iVar2) {
      iVar2 = param_3;
    }
    if (iVar2 == 0) {
      iVar2 = BN_lshift1(param_1,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = param_3 + -1;
    }
    else {
      iVar1 = BN_lshift(param_1,param_1,iVar2);
      if (iVar1 == 0) {
        return 0;
      }
      param_3 = param_3 - iVar2;
    }
    iVar2 = BN_cmp(param_1,param_4);
  } while ((iVar2 < 0) || (iVar2 = BN_sub(param_1,param_1,param_4), iVar2 != 0));
  return 0;
}

// BN_mod_mul @ 14f747cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_mod_mul(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  BN_CTX_start(param_5);
  lVar2 = BN_CTX_get(param_5);
  uVar3 = 0;
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = BN_sqr(lVar2,param_2,param_5);
    }
    else {
      iVar1 = BN_mul(lVar2,param_2,param_3,param_5);
    }
    uVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = BN_nnmod(param_1,lVar2,param_4,param_5);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = 1;
      }
    }
  }
  BN_CTX_end(param_5);
  return uVar3;
}

// BN_mod_sqr @ 14f747d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_mod_sqr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f747da5;
  iVar1 = BN_sqr(param_1,param_2,param_4);
  if (iVar1 == 0) {
    return;
  }
  BN_div(0,param_1,param_1,param_3,param_4,uVar2);
  return;
}

// BN_mod_sub @ 14f747e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_mod_sub(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  
  iVar1 = BN_sub();
  if (iVar1 == 0) {
    return;
  }
  BN_nnmod(param_1,param_1,param_4,param_5);
  return;
}

// BN_mod_sub_quick @ 14f747e50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
BN_mod_sub_quick(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = BN_sub();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = BN_add(param_1,param_1,param_4);
    return uVar1;
  }
  return 1;
}

// BN_nnmod @ 14f747ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_nnmod(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = BN_div(0,param_1,param_2,param_3,param_4,0x14f747ed0);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  UNRECOVERED_JUMPTABLE = BN_add;
  if (*(int *)(param_3 + 0x10) != 0) {
    UNRECOVERED_JUMPTABLE = BN_sub;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f747f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
  return uVar1;
}

// bn_mod_add_fixed_top @ 14f747f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
bn_mod_add_fixed_top(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar1 = *(int *)(param_4 + 1);
  uVar9 = (ulonglong)iVar1;
  puVar4 = local_c8;
  local_d8 = param_4;
  lVar3 = bn_wexpand(param_1,iVar1);
  if ((lVar3 == 0) ||
     ((0x10 < uVar9 &&
      (puVar4 = (undefined1 *)CRYPTO_malloc(uVar9 * 8,"crypto\\bn\\bn_mod.c",0x3c),
      puVar4 == (undefined1 *)0x0)))) {
    uVar5 = 0;
  }
  else {
    puVar12 = puVar4;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar12 = (undefined1 *)*param_2;
    }
    puVar13 = puVar4;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar13 = (undefined1 *)*param_3;
    }
    uVar11 = 0;
    lVar3 = 0;
    lVar14 = 0;
    uVar10 = 0;
    if (uVar9 != 0) {
      do {
        uVar7 = ((longlong)(uVar11 - (longlong)(int)param_2[1]) >> 0x3f &
                *(ulonglong *)(puVar12 + lVar3 * 8)) + uVar10;
        uVar6 = ((longlong)(uVar11 - (longlong)(int)param_3[1]) >> 0x3f &
                *(ulonglong *)(puVar13 + lVar14 * 8)) + uVar7;
        *(ulonglong *)(puVar4 + uVar11 * 8) = uVar6;
        uVar10 = (ulonglong)(uVar7 < uVar10) + (ulonglong)(uVar6 < uVar7);
        uVar11 = uVar11 + 1;
        lVar3 = lVar3 - ((longlong)(uVar11 - (longlong)*(int *)((longlong)param_2 + 0xc)) >> 0x3f);
        lVar14 = lVar14 - ((longlong)(uVar11 - (longlong)*(int *)((longlong)param_3 + 0xc)) >> 0x3f)
        ;
      } while (uVar11 < uVar9);
    }
    puVar2 = (ulonglong *)*param_1;
    lVar3 = bn_sub_words(puVar2,puVar4,*local_d8,iVar1);
    if (uVar9 != 0) {
      puVar8 = puVar2;
      do {
        *puVar8 = *(ulonglong *)(((longlong)puVar4 - (longlong)puVar2) + (longlong)puVar8) &
                  uVar10 - lVar3 | *puVar8 & ~(uVar10 - lVar3);
        *(undefined8 *)(((longlong)puVar4 - (longlong)puVar2) + -8 + (longlong)(puVar8 + 1)) = 0;
        uVar9 = uVar9 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar9 != 0);
    }
    *(int *)(param_1 + 1) = iVar1;
    *(undefined4 *)(param_1 + 2) = 0;
    if (puVar4 != local_c8) {
      CRYPTO_free(puVar4,"crypto\\bn\\bn_mod.c",0x5a);
    }
    uVar5 = 1;
  }
  return uVar5;
}

// bn_mod_sub_fixed_top @ 14f748160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
bn_mod_sub_fixed_top(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  
  iVar1 = (int)param_4[1];
  uVar6 = (ulonglong)iVar1;
  lVar3 = bn_wexpand(param_1,iVar1);
  if (lVar3 != 0) {
    puVar2 = (ulonglong *)*param_1;
    puVar4 = puVar2;
    if ((ulonglong *)*param_2 != (ulonglong *)0x0) {
      puVar4 = (ulonglong *)*param_2;
    }
    puVar11 = puVar2;
    if ((ulonglong *)*param_3 != (ulonglong *)0x0) {
      puVar11 = (ulonglong *)*param_3;
    }
    uVar7 = 0;
    lVar10 = 0;
    lVar3 = 0;
    uVar9 = 0;
    if (uVar6 != 0) {
      do {
        uVar5 = (longlong)(uVar7 - (longlong)*(int *)(param_2 + 1)) >> 0x3f & puVar4[lVar10];
        uVar8 = (longlong)(uVar7 - (longlong)*(int *)(param_3 + 1)) >> 0x3f & puVar11[lVar3];
        puVar2[uVar7] = (uVar5 - uVar8) - uVar9;
        if (uVar5 != uVar8) {
          uVar9 = (ulonglong)(uVar5 < uVar8);
        }
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 - ((longlong)(uVar7 - (longlong)*(int *)((longlong)param_2 + 0xc)) >> 0x3f);
        lVar3 = lVar3 - ((longlong)(uVar7 - (longlong)*(int *)((longlong)param_3 + 0xc)) >> 0x3f);
      } while (uVar7 < uVar6);
    }
    lVar3 = *param_4;
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar5 = uVar6;
      puVar4 = puVar2;
      do {
        uVar8 = (*(ulonglong *)((lVar3 - (longlong)puVar2) + (longlong)puVar4) & -uVar9) + uVar7;
        *puVar4 = *puVar4 + uVar8;
        uVar7 = (ulonglong)(uVar8 < uVar7) + (ulonglong)(*puVar4 < uVar8);
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      puVar4 = puVar2;
      do {
        uVar8 = (*(ulonglong *)((longlong)puVar4 + (lVar3 - (longlong)puVar2)) & uVar7 - uVar9) +
                uVar5;
        *puVar4 = *puVar4 + uVar8;
        uVar5 = (ulonglong)(uVar8 < uVar5) + (ulonglong)(*puVar4 < uVar8);
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar6 != 0);
    }
    *(int *)(param_1 + 1) = iVar1;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  return 0;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// BN_sqr @ 14f779fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 BN_sqr(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = bn_sqr_fixed_top();
  bn_correct_top(param_1);
  return uVar1;
}

// bn_sqr_fixed_top @ 14f77a020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 bn_sqr_fixed_top(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  iVar1 = *(int *)(param_2 + 1);
  uVar8 = 0;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  BN_CTX_start(param_3);
  puVar4 = param_1;
  if (param_2 == param_1) {
    puVar4 = (undefined8 *)BN_CTX_get(param_3);
  }
  plVar5 = (longlong *)BN_CTX_get(param_3);
  uVar9 = 0;
  if ((puVar4 == (undefined8 *)0x0) || (uVar9 = uVar8, plVar5 == (longlong *)0x0))
  goto LAB_14f77a186;
  iVar2 = iVar1 * 2;
  lVar6 = bn_wexpand(puVar4,iVar2);
  uVar9 = 0;
  if (lVar6 == 0) goto LAB_14f77a186;
  if (iVar1 == 4) {
    bn_sqr_comba4(*puVar4,*param_2);
  }
  else if (iVar1 == 8) {
    bn_sqr_comba8(*puVar4,*param_2);
  }
  else {
    if (iVar1 < 0x10) {
      puVar10 = local_148;
    }
    else {
      cVar3 = BN_num_bits_word((longlong)iVar1);
      iVar7 = 1 << (cVar3 - 1U & 0x1f);
      if (iVar1 == iVar7) {
        lVar6 = bn_wexpand(plVar5,iVar7 * 4);
        uVar9 = uVar8;
        if (lVar6 == 0) goto LAB_14f77a186;
        bn_sqr_recursive(*puVar4,*param_2,iVar1,*plVar5);
        goto LAB_14f77a15d;
      }
      lVar6 = bn_wexpand(plVar5,iVar2);
      uVar9 = uVar8;
      if (lVar6 == 0) goto LAB_14f77a186;
      puVar10 = (undefined1 *)*plVar5;
    }
    bn_sqr_normal(*puVar4,*param_2,iVar1,puVar10);
  }
LAB_14f77a15d:
  *(undefined4 *)(puVar4 + 2) = 0;
  *(int *)(puVar4 + 1) = iVar2;
  if ((param_1 == puVar4) || (lVar6 = BN_copy(param_1,puVar4), uVar9 = uVar8, lVar6 != 0)) {
    uVar9 = 1;
  }
LAB_14f77a186:
  BN_CTX_end(param_3);
  return uVar9;
}

// bn_sqr_normal @ 14f77a1d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bn_sqr_normal(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  iVar4 = param_3 + -1;
  puVar5 = param_1 + 1;
  param_1[param_3 * 2 + -1] = 0;
  *param_1 = 0;
  puVar3 = param_2;
  if (0 < iVar4) {
    puVar3 = param_2 + 1;
    uVar1 = bn_mul_words(puVar5,puVar3,iVar4,*param_2);
    puVar5[iVar4] = uVar1;
    puVar5 = param_1 + 3;
  }
  if (0 < param_3 + -2) {
    iVar2 = param_3 + -2;
    lVar6 = (longlong)iVar4 * 8;
    do {
      uVar1 = *puVar3;
      lVar6 = lVar6 + -8;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + -1;
      uVar1 = bn_mul_add_words(puVar5,puVar3,iVar4,uVar1);
      *(undefined8 *)(lVar6 + (longlong)puVar5) = uVar1;
      puVar5 = puVar5 + 2;
    } while (0 < iVar2);
  }
  bn_add_words(param_1,param_1,param_1,param_3 * 2);
  bn_sqr_words(param_4,param_2,param_3);
  bn_add_words(param_1,param_1,param_4,param_3 * 2);
  return;
}

// bn_sqr_recursive @ 14f77a2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bn_sqr_recursive(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  size_t _Size;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong local_40;
  
  iVar4 = param_3 / 2;
  if (param_3 == 4) {
    bn_sqr_comba4(param_1,param_2);
    return;
  }
  if (param_3 != 8) {
    if (0xf < param_3) {
      lVar8 = (longlong)iVar4 * 8 + param_2;
      iVar5 = bn_cmp_words(param_2,lVar8,iVar4);
      bVar3 = false;
      if (iVar5 < 1) {
        if (iVar5 < 0) {
          bn_sub_words(param_4,lVar8,param_2,iVar4);
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bn_sub_words(param_4,param_2,lVar8,iVar4);
      }
      _Size = (longlong)param_3 * 8;
      lVar2 = param_4 + (longlong)(param_3 * 2) * 8;
      if (bVar3) {
        memset((void *)(_Size + param_4),0,_Size);
      }
      else {
        bn_sqr_recursive(_Size + param_4,param_4,iVar4,lVar2);
      }
      local_40 = _Size + param_4;
      bn_sqr_recursive(param_1,param_2,iVar4,lVar2);
      bn_sqr_recursive(param_1 + _Size,lVar8,iVar4,lVar2);
      iVar5 = bn_add_words(param_4,param_1,param_1 + _Size,param_3);
      iVar6 = bn_sub_words(local_40,param_4,local_40,param_3);
      lVar8 = (longlong)iVar4 * 8 + param_1;
      iVar7 = bn_add_words(lVar8,lVar8,local_40,param_3);
      iVar7 = (iVar5 - iVar6) + iVar7;
      if (iVar7 != 0) {
        puVar9 = (ulonglong *)(param_1 + (longlong)(param_3 + iVar4) * 8);
        uVar10 = *(longlong *)(param_1 + (longlong)(param_3 + iVar4) * 8) + (longlong)iVar7;
        *puVar9 = uVar10;
        if (uVar10 < (ulonglong)(longlong)iVar7) {
          do {
            puVar1 = puVar9 + 1;
            *puVar1 = *puVar1 + 1;
            puVar9 = puVar9 + 1;
          } while (*puVar1 == 0);
        }
      }
      return;
    }
    bn_sqr_normal(param_1,param_2,param_3);
    return;
  }
  bn_sqr_comba8(param_1,param_2);
  return;
}


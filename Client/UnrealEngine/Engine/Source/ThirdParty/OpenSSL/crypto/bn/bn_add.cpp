// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// BN_add @ 14f726790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_add(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == *(int *)(param_3 + 0x10)) {
    uVar3 = BN_uadd();
    *(int *)(param_1 + 0x10) = iVar2;
  }
  else {
    iVar2 = BN_ucmp(param_2,param_3);
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        uVar1 = *(undefined4 *)(param_3 + 0x10);
        uVar3 = BN_usub(param_1,param_3,param_2);
        *(undefined4 *)(param_1 + 0x10) = uVar1;
      }
      else {
        BN_set_word(param_1,0);
        uVar3 = 1;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      uVar3 = BN_usub(param_1,param_2,param_3);
      *(undefined4 *)(param_1 + 0x10) = uVar1;
    }
  }
  return uVar3;
}

// BN_sub @ 14f726840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_sub(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  if (uVar3 == *(uint *)(param_3 + 0x10)) {
    iVar1 = BN_ucmp(param_2,param_3);
    if (iVar1 < 1) {
      if (iVar1 < 0) {
        uVar3 = (uint)(*(int *)(param_3 + 0x10) == 0);
        uVar2 = BN_usub(param_1,param_3,param_2);
      }
      else {
        uVar3 = 0;
        BN_set_word(param_1,0);
        uVar2 = 1;
      }
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x10);
      uVar2 = BN_usub(param_1,param_2,param_3);
    }
  }
  else {
    uVar2 = BN_uadd();
  }
  *(uint *)(param_1 + 0x10) = uVar3;
  return uVar2;
}

// BN_uadd @ 14f7268e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_uadd(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  
  plVar8 = param_2;
  if ((int)param_2[1] < (int)param_3[1]) {
    plVar8 = param_3;
    param_3 = param_2;
  }
  iVar1 = (int)plVar8[1];
  iVar2 = (int)param_3[1];
  iVar7 = iVar1 - iVar2;
  lVar4 = bn_wexpand(param_1,iVar1 + 1);
  uVar6 = 0;
  if (lVar4 != 0) {
    *(int *)(param_1 + 1) = iVar1;
    lVar4 = *plVar8;
    lVar3 = *param_1;
    uVar5 = bn_add_words(lVar3,lVar4,*param_3,iVar2);
    puVar9 = (ulonglong *)(lVar3 + (longlong)iVar2 * 8);
    plVar8 = (longlong *)(lVar4 + (longlong)iVar2 * 8);
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      lVar4 = *plVar8;
      plVar8 = plVar8 + 1;
      *puVar9 = lVar4 + uVar5;
      puVar9 = puVar9 + 1;
      uVar5 = uVar5 & lVar4 + uVar5 == 0;
    }
    *puVar9 = uVar5;
    uVar6 = 1;
    *(int *)(param_1 + 1) = (int)param_1[1] + (int)uVar5;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return uVar6;
}

// BN_usub @ 14f7269c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_usub(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  
  iVar7 = (int)param_2[1];
  iVar1 = *(int *)(param_3 + 1);
  iVar6 = iVar7 - iVar1;
  if (iVar6 < 0) {
    ERR_put_error(3,0x73,100,"crypto\\bn\\bn_add.c",0x8b,0x14f7269df);
  }
  else {
    lVar3 = bn_wexpand(param_1,iVar7);
    if (lVar3 != 0) {
      lVar3 = *param_2;
      lVar2 = *param_1;
      uVar4 = bn_sub_words(lVar2,lVar3,*param_3,iVar1);
      plVar8 = (longlong *)(lVar3 + (longlong)iVar1 * 8);
      plVar5 = (longlong *)(lVar2 + (longlong)iVar1 * 8);
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        lVar3 = *plVar8;
        plVar8 = plVar8 + 1;
        *plVar5 = lVar3 - uVar4;
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 & lVar3 == 0;
      }
      while ((iVar7 != 0 && (plVar8 = plVar5 + -1, plVar5 = plVar5 + -1, *plVar8 == 0))) {
        iVar7 = iVar7 + -1;
      }
      *(int *)(param_1 + 1) = iVar7;
      *(undefined4 *)(param_1 + 2) = 0;
      return 1;
    }
  }
  return 0;
}


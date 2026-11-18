// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// BN_lshift @ 14f72a000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 BN_lshift(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    ERR_put_error(3,0x91,0x77,"crypto\\bn\\bn_shift.c",0x56,0x14f72a00c);
    return 0;
  }
  uVar1 = bn_lshift_fixed_top();
  bn_correct_top(param_1);
  return uVar1;
}

// BN_lshift1 @ 14f72a070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_lshift1(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_1 == param_2) {
    lVar2 = bn_wexpand();
    if (lVar2 != 0) goto LAB_14f72a0c7;
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    lVar2 = bn_wexpand();
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
LAB_14f72a0c7:
      puVar5 = (ulonglong *)*param_2;
      uVar3 = 0;
      puVar4 = (ulonglong *)*param_1;
      uVar7 = uVar3;
      if (0 < *(int *)(param_2 + 1)) {
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          uVar6 = (int)uVar7 + 1;
          *puVar4 = uVar1 * 2 | uVar3;
          puVar4 = puVar4 + 1;
          uVar3 = uVar1 >> 0x3f;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < *(int *)(param_2 + 1));
      }
      *puVar4 = uVar3;
      *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + (int)uVar3;
      return 1;
    }
  }
  return 0;
}

// BN_rshift @ 14f72a130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 BN_rshift(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    ERR_put_error(3,0x92,0x77,"crypto\\bn\\bn_shift.c",0x9b,0x14f72a13c);
    return 0;
  }
  uVar1 = bn_rshift_fixed_top();
  bn_correct_top(param_1);
  return uVar1;
}

// BN_rshift1 @ 14f72a1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_rshift1(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = BN_is_zero(param_2);
  if (iVar3 != 0) {
    BN_set_word(param_1,0);
    return 1;
  }
  iVar3 = (int)param_2[1];
  lVar1 = *param_2;
  if (param_2 != param_1) {
    lVar4 = bn_wexpand(param_1,iVar3);
    if (lVar4 == 0) {
      return 0;
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
  }
  lVar4 = *param_1;
  lVar7 = (longlong)(iVar3 + -1);
  *(int *)(param_1 + 1) = iVar3;
  puVar5 = (ulonglong *)(lVar4 + lVar7 * 8);
  uVar2 = *(ulonglong *)(lVar1 + lVar7 * 8);
  *puVar5 = uVar2 >> 1;
  *(uint *)(param_1 + 1) = (int)param_1[1] - (uint)(uVar2 == 1);
  if (0 < lVar7) {
    do {
      uVar6 = uVar2 << 0x3f;
      uVar2 = *(ulonglong *)((lVar1 - lVar4) + -8 + (longlong)puVar5);
      puVar5 = puVar5 + -1;
      lVar7 = lVar7 + -1;
      *puVar5 = uVar2 >> 1 | uVar6;
    } while (0 < lVar7);
  }
  if ((int)param_1[1] == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return 1;
}

// bn_lshift_fixed_top @ 14f72a2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bn_lshift_fixed_top(longlong *param_1,longlong *param_2,uint param_3)

{
  size_t _Size;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  sbyte sVar5;
  sbyte sVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  iVar1 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x3fU)) >> 6;
  lVar2 = bn_wexpand();
  if (lVar2 == 0) {
    return 0;
  }
  iVar7 = (int)param_2[1];
  _Size = (longlong)iVar1 * 8;
  if (iVar7 == 0) {
    *(undefined8 *)(_Size + *param_1) = 0;
  }
  else {
    lVar2 = *param_2;
    uVar10 = -(param_3 & 0x3f) & 0x3f;
    plVar11 = (longlong *)(*param_1 + _Size);
    uVar12 = -(ulonglong)uVar10;
    uVar12 = uVar12 | uVar12 >> 8;
    uVar4 = *(ulonglong *)(lVar2 + (longlong)(iVar7 + -1) * 8);
    sVar5 = (sbyte)uVar10;
    plVar11[iVar7] = uVar4 >> sVar5 & uVar12;
    iVar7 = (int)param_2[1] + -1;
    lVar9 = (longlong)iVar7;
    sVar6 = (sbyte)(param_3 & 0x3f);
    if (0 < iVar7) {
      puVar8 = (ulonglong *)(plVar11 + lVar9);
      do {
        uVar3 = uVar4 << sVar6;
        lVar9 = lVar9 + -1;
        uVar4 = *(ulonglong *)((lVar2 - (longlong)plVar11) + (longlong)(puVar8 + -1));
        *puVar8 = uVar4 >> sVar5 & uVar12 | uVar3;
        puVar8 = puVar8 + -1;
      } while (0 < lVar9);
    }
    *plVar11 = uVar4 << sVar6;
  }
  if (iVar1 != 0) {
    memset((void *)*param_1,0,_Size);
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(int *)(param_1 + 1) = (int)param_2[1] + 1 + iVar1;
  return 1;
}

// bn_rshift_fixed_top @ 14f72a400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bn_rshift_fixed_top(longlong *param_1,longlong *param_2,uint param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  sbyte sVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  
  iVar3 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x3fU)) >> 6;
  if ((int)param_2[1] <= iVar3) {
    BN_set_word(param_1,0);
    return 1;
  }
  iVar7 = (int)param_2[1] - iVar3;
  uVar6 = -(param_3 & 0x3f) & 0x3f;
  uVar12 = -(ulonglong)uVar6;
  if ((param_1 != param_2) && (lVar4 = bn_wexpand(param_1,iVar7), lVar4 == 0)) {
    return 0;
  }
  puVar2 = (ulonglong *)*param_1;
  puVar1 = (ulonglong *)(*param_2 + (longlong)iVar3 * 8);
  uVar9 = *puVar1;
  iVar3 = iVar7 + -1;
  lVar4 = (longlong)iVar3;
  sVar5 = (sbyte)(param_3 & 0x3f);
  iVar11 = 0;
  if (0 < iVar3) {
    uVar8 = uVar9;
    puVar10 = puVar2;
    do {
      uVar9 = *(ulonglong *)((longlong)puVar1 + (8 - (longlong)puVar2) + (longlong)puVar10);
      *puVar10 = uVar9 << (sbyte)uVar6 & (uVar12 | uVar12 >> 8) | uVar8 >> sVar5;
      lVar4 = lVar4 + -1;
      uVar8 = uVar9;
      puVar10 = puVar10 + 1;
      iVar11 = iVar3;
    } while (lVar4 != 0);
  }
  puVar2[iVar11] = uVar9 >> sVar5;
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(int *)(param_1 + 1) = iVar7;
  return 1;
}


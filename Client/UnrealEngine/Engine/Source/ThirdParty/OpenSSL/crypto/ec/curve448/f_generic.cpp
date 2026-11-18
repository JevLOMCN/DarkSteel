// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// gf_add @ 14f7c5c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void gf_add(undefined8 param_1)

{
  FUN_14f7c5c50();
  FUN_14f7c6810(param_1);
  return;
}

// FUN_14f7c5c50 @ 14f7c5c50

void FUN_14f7c5c50(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (((param_3 + 0xf < param_1) || (param_1 + 0xf < param_3)) &&
     ((param_2 + 0xf < param_1 || (param_1 + 0xf < param_2)))) {
    lVar11 = 2;
    piVar10 = param_3 + 4;
    do {
      iVar4 = piVar10[-3];
      iVar5 = piVar10[-2];
      iVar6 = piVar10[-1];
      piVar2 = (int *)((longlong)param_2 + (-0x10 - (longlong)param_3) + (longlong)piVar10);
      iVar7 = piVar2[1];
      iVar8 = piVar2[2];
      iVar9 = piVar2[3];
      piVar1 = piVar10 + 8;
      piVar3 = (int *)((longlong)param_1 + (-0x30 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 + piVar10[-4];
      piVar3[1] = iVar7 + iVar4;
      piVar3[2] = iVar8 + iVar5;
      piVar3[3] = iVar9 + iVar6;
      piVar2 = (int *)((longlong)param_2 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      iVar4 = piVar2[1];
      iVar5 = piVar2[2];
      iVar6 = piVar2[3];
      iVar7 = piVar10[1];
      iVar8 = piVar10[2];
      iVar9 = piVar10[3];
      piVar3 = (int *)((longlong)param_1 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 + *piVar10;
      piVar3[1] = iVar4 + iVar7;
      piVar3[2] = iVar5 + iVar8;
      piVar3[3] = iVar6 + iVar9;
      lVar11 = lVar11 + -1;
      piVar10 = piVar1;
    } while (lVar11 != 0);
    return;
  }
  lVar12 = (longlong)param_2 - (longlong)param_3;
  lVar13 = 0x10;
  lVar11 = (longlong)param_1 - (longlong)param_3;
  do {
    *(int *)((longlong)param_3 + lVar11) = *(int *)((longlong)param_3 + lVar12) + *param_3;
    param_3 = param_3 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}

// FUN_14f7c5cf0 @ 14f7c5cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f7c5cf0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  
  iVar10 = _UNK_150b50dec;
  iVar9 = _UNK_150b50de8;
  iVar8 = _UNK_150b50de4;
  iVar7 = ___xmm_00000008000000080000000800000008;
  iVar6 = _UNK_150631e0c;
  iVar5 = _UNK_150631e08;
  iVar4 = __xmm_00000003000000020000000100000000._4_4_;
  iVar3 = (int)__xmm_00000003000000020000000100000000;
  uVar11 = param_2 * 0xfffffff;
  uVar2 = param_2 * 0xffffffe;
  uVar12 = 0;
  do {
    iVar1 = uVar12 + 4;
    iVar13 = uVar12 + iVar3;
    iVar16 = uVar12 + iVar4;
    iVar19 = uVar12 + iVar5;
    iVar22 = uVar12 + iVar6;
    uVar12 = uVar12 + 8;
    uVar14 = -(uint)(iVar13 == iVar7);
    uVar17 = -(uint)(iVar16 == iVar8);
    uVar20 = -(uint)(iVar19 == iVar9);
    uVar23 = -(uint)(iVar22 == iVar10);
    uVar15 = -(uint)(iVar1 + iVar3 == iVar7);
    uVar18 = -(uint)(iVar1 + iVar4 == iVar8);
    uVar21 = -(uint)(iVar1 + iVar5 == iVar9);
    uVar24 = -(uint)(iVar1 + iVar6 == iVar10);
    *param_1 = (~uVar14 & uVar11 | uVar14 & uVar2) + *param_1;
    param_1[1] = (~uVar17 & uVar11 | uVar17 & uVar2) + param_1[1];
    param_1[2] = (~uVar20 & uVar11 | uVar20 & uVar2) + param_1[2];
    param_1[3] = (~uVar23 & uVar11 | uVar23 & uVar2) + param_1[3];
    param_1[4] = (~uVar15 & uVar11 | uVar15 & uVar2) + param_1[4];
    param_1[5] = (~uVar18 & uVar11 | uVar18 & uVar2) + param_1[5];
    param_1[6] = (~uVar21 & uVar11 | uVar21 & uVar2) + param_1[6];
    param_1[7] = (~uVar24 & uVar11 | uVar24 & uVar2) + param_1[7];
    param_1 = param_1 + 8;
  } while (uVar12 < 0x10);
  return;
}

// gf_deserialize @ 14f7c5dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint gf_deserialize(longlong param_1,longlong param_2,int param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar2 = 0;
  puVar8 = &DAT_1534eafd0;
  uVar11 = 0;
  uVar7 = 0;
  lVar10 = 0;
  uVar9 = 0;
  do {
    for (; (uVar11 < 0x1c && (uVar2 < 0x38)); uVar2 = uVar2 + 1) {
      bVar4 = *(byte *)((ulonglong)uVar2 + param_2);
      if (uVar2 == 0x37) {
        bVar4 = bVar4 & ~param_4;
      }
      bVar3 = (byte)uVar11;
      uVar11 = uVar11 + 8;
      uVar7 = uVar7 | (ulonglong)bVar4 << (bVar3 & 0x3f);
    }
    uVar5 = uVar7;
    if (uVar9 < 0xf) {
      uVar5 = (ulonglong)((uint)uVar7 & 0xfffffff);
    }
    uVar1 = *puVar8;
    uVar11 = uVar11 - 0x1c;
    *(int *)(param_1 + -0x1534eafd0 + (longlong)puVar8) = (int)uVar5;
    uVar9 = uVar9 + 1;
    puVar8 = puVar8 + 1;
    uVar7 = uVar7 >> 0x1c;
    lVar6 = ((uVar5 & 0xffffffff) - (ulonglong)uVar1) + lVar10;
    lVar10 = lVar6 >> 0x20;
  } while (uVar9 < 0x10);
  if (param_3 == 0) {
    uVar2 = gf_hibit(param_1);
    uVar2 = ~uVar2;
  }
  else {
    uVar2 = 0xffffffff;
  }
  uVar11 = (uint)((ulonglong)lVar6 >> 0x20);
  return 0xffffffffU - ((int)(uVar11 - 1 & ~uVar11) >> 0x1f) &
         (int)((uint)uVar7 - 1 & ~(uint)uVar7) >> 0x1f & uVar2;
}

// gf_eq @ 14f7c5ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int gf_eq(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar26;
  uint uVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint auStack_78 [4];
  int aiStack_68 [20];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7c5eec;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar18 = 2;
  lVar17 = 2;
  piVar15 = (int *)(param_2 + 0x10);
  do {
    iVar14 = piVar15[-3];
    iVar19 = piVar15[-2];
    iVar20 = piVar15[-1];
    piVar2 = (int *)((param_1 - param_2) + -0x10 + (longlong)piVar15);
    iVar21 = piVar2[1];
    iVar22 = piVar2[2];
    iVar5 = piVar2[3];
    piVar1 = (int *)((param_1 - param_2) + (longlong)piVar15);
    iVar6 = *piVar1;
    iVar7 = piVar1[1];
    iVar8 = piVar1[2];
    iVar9 = piVar1[3];
    piVar1 = piVar15 + 8;
    iVar10 = *piVar15;
    iVar11 = piVar15[1];
    iVar12 = piVar15[2];
    iVar13 = piVar15[3];
    piVar3 = (int *)((longlong)aiStack_68 + -param_2 + -0x20 + (longlong)piVar1);
    *piVar3 = *piVar2 - piVar15[-4];
    piVar3[1] = iVar21 - iVar14;
    piVar3[2] = iVar22 - iVar19;
    piVar3[3] = iVar5 - iVar20;
    piVar15 = (int *)((longlong)auStack_78 + -param_2 + (longlong)piVar1);
    *piVar15 = iVar6 - iVar10;
    piVar15[1] = iVar7 - iVar11;
    piVar15[2] = iVar8 - iVar12;
    piVar15[3] = iVar9 - iVar13;
    lVar17 = lVar17 + -1;
    piVar15 = piVar1;
  } while (lVar17 != 0);
  uVar16 = 0;
  piVar15 = aiStack_68 + 4;
  do {
    iVar14 = uVar16 + 4;
    iVar19 = uVar16 + (int)__xmm_00000003000000020000000100000000;
    iVar20 = uVar16 + __xmm_00000003000000020000000100000000._4_4_;
    iVar21 = uVar16 + _UNK_150631e08;
    iVar22 = uVar16 + _UNK_150631e0c;
    uVar16 = uVar16 + 8;
    auVar24._0_4_ = -(uint)(iVar19 == ___xmm_00000008000000080000000800000008);
    auVar24._4_4_ = -(uint)(iVar20 == _UNK_150b50de4);
    auVar24._8_4_ = -(uint)(iVar21 == _UNK_150b50de8);
    auVar24._12_4_ = -(uint)(iVar22 == _UNK_150b50dec);
    auVar24 = ~auVar24 & ___xmm_1ffffffe1ffffffe1ffffffe1ffffffe |
              auVar24 & ___xmm_1ffffffc1ffffffc1ffffffc1ffffffc;
    auVar25._0_4_ =
         -(uint)(iVar14 + (int)__xmm_00000003000000020000000100000000 ==
                ___xmm_00000008000000080000000800000008);
    auVar25._4_4_ = -(uint)(iVar14 + __xmm_00000003000000020000000100000000._4_4_ == _UNK_150b50de4)
    ;
    auVar25._8_4_ = -(uint)(iVar14 + _UNK_150631e08 == _UNK_150b50de8);
    auVar25._12_4_ = -(uint)(iVar14 + _UNK_150631e0c == _UNK_150b50dec);
    *piVar15 = auVar24._0_4_ + *piVar15;
    piVar15[1] = auVar24._4_4_ + piVar15[1];
    piVar15[2] = auVar24._8_4_ + piVar15[2];
    piVar15[3] = auVar24._12_4_ + piVar15[3];
    auVar25 = ~auVar25 & ___xmm_1ffffffe1ffffffe1ffffffe1ffffffe |
              auVar25 & ___xmm_1ffffffc1ffffffc1ffffffc1ffffffc;
    auVar24 = *(undefined1 (*) [16])(piVar15 + 4);
    piVar15[4] = auVar25._0_4_ + auVar24._0_4_;
    piVar15[5] = auVar25._4_4_ + auVar24._4_4_;
    piVar15[6] = auVar25._8_4_ + auVar24._8_4_;
    piVar15[7] = auVar25._12_4_ + auVar24._12_4_;
    piVar15 = piVar15 + 8;
  } while (uVar16 < 0x10);
  FUN_14f7c6810(aiStack_68 + 4);
  gf_strong_reduce(aiStack_68 + 4);
  uVar23 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  puVar4 = auStack_78;
  uVar16 = uVar23;
  uVar29 = uVar26;
  uVar30 = uVar27;
  uVar31 = uVar28;
  do {
    uVar23 = uVar23 | puVar4[8];
    uVar26 = uVar26 | puVar4[9];
    uVar27 = uVar27 | puVar4[10];
    uVar28 = uVar28 | puVar4[0xb];
    uVar16 = puVar4[0xc] | uVar16;
    uVar29 = puVar4[0xd] | uVar29;
    uVar30 = puVar4[0xe] | uVar30;
    uVar31 = puVar4[0xf] | uVar31;
    lVar18 = lVar18 + -1;
    puVar4 = puVar4 + 8;
  } while (lVar18 != 0);
  uVar16 = uVar16 | uVar23 | uVar30 | uVar27 | uVar29 | uVar26 | uVar31 | uVar28;
  return (int)(uVar16 - 1 & ~uVar16) >> 0x1f;
}

// gf_hibit @ 14f7c6080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int gf_hibit(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  uint local_58 [16];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f7c608a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar11 = 2;
  puVar10 = local_58 + 4;
  do {
    piVar1 = (int *)((param_1 - (longlong)(local_58 + 4)) + (longlong)puVar10);
    iVar3 = piVar1[1];
    iVar4 = piVar1[2];
    iVar5 = piVar1[3];
    piVar2 = (int *)((param_1 - (longlong)(local_58 + 4)) + 0x10 + (longlong)puVar10);
    iVar6 = *piVar2;
    iVar7 = piVar2[1];
    iVar8 = piVar2[2];
    iVar9 = piVar2[3];
    puVar10[-4] = *piVar1 * 2;
    puVar10[-3] = iVar3 * 2;
    puVar10[-2] = iVar4 * 2;
    puVar10[-1] = iVar5 * 2;
    *puVar10 = iVar6 * 2;
    puVar10[1] = iVar7 * 2;
    puVar10[2] = iVar8 * 2;
    puVar10[3] = iVar9 * 2;
    lVar11 = lVar11 + -1;
    puVar10 = puVar10 + 8;
  } while (lVar11 != 0);
  FUN_14f7c6810(local_58);
  gf_strong_reduce(local_58);
  return -(local_58[0] & 1);
}

// gf_isr @ 14f7c6110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void gf_isr(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_148 [32];
  undefined1 local_128 [64];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [64];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x14f7c612d;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  gf_sqr(&local_e8);
  gf_mul(local_a8,param_2,&local_e8);
  gf_sqr(&local_e8,local_a8);
  gf_mul(local_a8,param_2,&local_e8);
  gf_sqr(&local_e8,local_a8);
  gf_sqr(local_68,&local_e8);
  gf_sqr(&local_e8,local_68);
  gf_mul(local_128,local_a8,&local_e8);
  gf_sqr(&local_e8,local_128);
  gf_sqr(local_68,&local_e8);
  gf_sqr(&local_e8,local_68);
  gf_mul(local_128,local_a8,&local_e8);
  gf_sqr(local_a8,local_128);
  lVar1 = 4;
  do {
    gf_sqr(local_68,local_a8);
    gf_sqr(local_a8,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  gf_mul(&local_e8,local_128,local_a8);
  gf_sqr(local_128,&local_e8);
  gf_mul(local_a8,param_2,local_128);
  gf_sqr(local_68,local_a8);
  gf_sqr(local_128,local_68);
  lVar1 = 8;
  do {
    gf_sqr(local_68,local_128);
    gf_sqr(local_128,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  gf_mul(local_a8,&local_e8,local_128);
  gf_sqr(local_128,local_a8);
  lVar1 = 0x12;
  lVar2 = 0x12;
  do {
    gf_sqr(local_68,local_128);
    gf_sqr(local_128,local_68);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  gf_mul(&local_e8,local_a8,local_128);
  gf_sqr(local_128,&local_e8);
  do {
    gf_sqr(local_68,local_128);
    gf_sqr(local_128,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  gf_mul(&local_e8,local_a8,local_128);
  gf_sqr(local_128,&local_e8);
  lVar1 = 0x37;
  do {
    gf_sqr(local_68,local_128);
    gf_sqr(local_128,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  gf_mul(local_a8,&local_e8,local_128);
  gf_sqr(local_128,local_a8);
  gf_mul(&local_e8,param_2,local_128);
  gf_sqr(local_128,&local_e8);
  lVar1 = 0x6f;
  do {
    gf_sqr(local_68,local_128);
    gf_sqr(local_128,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  gf_mul(&local_e8,local_a8,local_128);
  gf_sqr(local_a8,&local_e8);
  gf_mul(local_128,local_a8,param_2);
  *param_1 = local_e8;
  param_1[1] = uStack_e0;
  param_1[2] = local_d8;
  param_1[3] = uStack_d0;
  *(undefined4 *)(param_1 + 4) = local_c8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_c4;
  *(undefined4 *)(param_1 + 5) = uStack_c0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_bc;
  *(undefined4 *)(param_1 + 6) = local_b8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_b4;
  *(undefined4 *)(param_1 + 7) = uStack_b0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_ac;
  gf_eq(local_128,&DAT_1534eaf90);
  return;
}

// gf_lobit @ 14f7c64b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int gf_lobit(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f7c64ba;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  local_38 = *(undefined4 *)(param_1 + 4);
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 5);
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_28 = *(undefined4 *)(param_1 + 6);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_20 = *(undefined4 *)(param_1 + 7);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x3c);
  gf_strong_reduce(&local_58);
  return -((uint)local_58 & 1);
}

// gf_serialize @ 14f7c6520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void gf_serialize(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7c6532;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_60 = param_2[1];
  uVar3 = 0;
  local_58 = param_2[2];
  uStack_50 = param_2[3];
  uVar2 = 0;
  uVar4 = 0;
  local_48 = *(undefined4 *)(param_2 + 4);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_40 = *(undefined4 *)(param_2 + 5);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_38 = *(undefined4 *)(param_2 + 6);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_30 = *(undefined4 *)(param_2 + 7);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x3c);
  gf_strong_reduce(&local_68);
  lVar5 = 0;
  do {
    uVar1 = uVar2;
    if ((uVar2 < 8) && (uVar3 < 0x10)) {
      uVar1 = uVar2 + 0x1c;
      uVar4 = uVar4 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar3 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar3 = uVar3 + 1;
    }
    *(char *)(lVar5 + param_1) = (char)uVar4;
    uVar2 = uVar1 - 8;
    uVar4 = uVar4 >> 8;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 0x38);
  return;
}

// FUN_14f7c65e0 @ 14f7c65e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f7c65e0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7c65f0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((param_3 & 1) == 0) {
    gf_sqr(local_58);
    gf_sqr(param_1,local_58);
    iVar1 = param_3 - 2;
  }
  else {
    gf_sqr();
    iVar1 = param_3 - 1;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -2) {
    gf_sqr(local_58,param_1);
    gf_sqr(param_1,local_58);
  }
  return;
}

// gf_strong_reduce @ 14f7c6680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void gf_strong_reduce(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar5 = 0;
  puVar3 = param_1;
  FUN_14f7c6810();
  lVar8 = 0x10;
  lVar7 = 0x10;
  uVar2 = uVar5;
  puVar6 = puVar3;
  do {
    lVar1 = uVar2 + ((ulonglong)*puVar6 -
                    (ulonglong)
                    *(uint *)(((longlong)&DAT_1534eafd0 - (longlong)puVar3) + (longlong)puVar6));
    uVar2 = lVar1 >> 0x1c;
    *puVar6 = (uint)lVar1 & 0xfffffff;
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar7 != 0);
  do {
    uVar4 = uVar5 + *param_1 +
            ((ulonglong)*(uint *)((longlong)param_1 + ((longlong)&DAT_1534eafd0 - (longlong)puVar3))
            & uVar2 & 0xffffffff);
    uVar5 = uVar4 >> 0x1c;
    *param_1 = (uint)uVar4 & 0xfffffff;
    lVar8 = lVar8 + -1;
    param_1 = param_1 + 1;
  } while (lVar8 != 0);
  return;
}

// gf_sub @ 14f7c6730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void gf_sub(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x14f7c673a;
  FUN_14f7c6770();
  FUN_14f7c5cf0(param_1,2,param_3,param_4,uVar1);
  FUN_14f7c6810(param_1);
  return;
}

// FUN_14f7c6770 @ 14f7c6770

void FUN_14f7c6770(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (((param_3 + 0xf < param_1) || (param_1 + 0xf < param_3)) &&
     ((param_2 + 0xf < param_1 || (param_1 + 0xf < param_2)))) {
    lVar11 = 2;
    piVar10 = param_3 + 4;
    do {
      iVar4 = piVar10[-3];
      iVar5 = piVar10[-2];
      iVar6 = piVar10[-1];
      piVar2 = (int *)((longlong)param_2 + (-0x10 - (longlong)param_3) + (longlong)piVar10);
      iVar7 = piVar2[1];
      iVar8 = piVar2[2];
      iVar9 = piVar2[3];
      piVar1 = piVar10 + 8;
      piVar3 = (int *)((longlong)param_1 + (-0x30 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 - piVar10[-4];
      piVar3[1] = iVar7 - iVar4;
      piVar3[2] = iVar8 - iVar5;
      piVar3[3] = iVar9 - iVar6;
      piVar2 = (int *)((longlong)param_2 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      iVar4 = piVar2[1];
      iVar5 = piVar2[2];
      iVar6 = piVar2[3];
      iVar7 = piVar10[1];
      iVar8 = piVar10[2];
      iVar9 = piVar10[3];
      piVar3 = (int *)((longlong)param_1 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 - *piVar10;
      piVar3[1] = iVar4 - iVar7;
      piVar3[2] = iVar5 - iVar8;
      piVar3[3] = iVar6 - iVar9;
      lVar11 = lVar11 + -1;
      piVar10 = piVar1;
    } while (lVar11 != 0);
    return;
  }
  lVar12 = (longlong)param_2 - (longlong)param_3;
  lVar13 = 0x10;
  lVar11 = (longlong)param_1 - (longlong)param_3;
  do {
    *(int *)((longlong)param_3 + lVar11) = *(int *)((longlong)param_3 + lVar12) - *param_3;
    param_3 = param_3 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}

// FUN_14f7c6810 @ 14f7c6810

void FUN_14f7c6810(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = param_1[0xf];
  param_1[8] = param_1[8] + (uVar1 >> 0x1c);
  puVar2 = param_1 + 0xd;
  uVar3 = 0xd;
  do {
    puVar2[2] = (param_1[uVar3 + 1] >> 0x1c) + (puVar2[2] & 0xfffffff);
    puVar2[1] = (param_1[uVar3] >> 0x1c) + (puVar2[1] & 0xfffffff);
    *puVar2 = (param_1[uVar3 - 1] >> 0x1c) + (*puVar2 & 0xfffffff);
    puVar2[-1] = (param_1[uVar3 - 2] >> 0x1c) + (puVar2[-1] & 0xfffffff);
    puVar2[-2] = (param_1[uVar3 - 3] >> 0x1c) + (puVar2[-2] & 0xfffffff);
    bVar4 = uVar3 != 3;
    puVar2 = puVar2 + -5;
    uVar3 = uVar3 - 5;
  } while (bVar4);
  *param_1 = (*param_1 & 0xfffffff) + (uVar1 >> 0x1c);
  return;
}


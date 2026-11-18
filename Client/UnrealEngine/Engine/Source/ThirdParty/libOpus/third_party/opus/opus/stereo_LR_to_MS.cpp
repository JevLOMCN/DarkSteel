// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// FUN_14f87eb04 @ 14f87eb04

int FUN_14f87eb04(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  if (uVar1 == 0) {
    iVar7 = 0x20;
  }
  else {
    iVar7 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar7 = 0x1f - iVar7;
  }
  iVar8 = param_1 << ((byte)(iVar7 + -1) & 0x1f);
  uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (uVar1 == 0) {
    iVar5 = 0x20;
  }
  else {
    iVar5 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = 0x1f - iVar5;
  }
  iVar4 = param_2 << ((byte)(iVar5 + -1) & 0x1f);
  lVar3 = (longlong)(short)(0x1fffffff / (longlong)(iVar4 >> 0x10));
  iVar6 = (int)((ulonglong)(iVar8 * lVar3) >> 0x10);
  iVar6 = iVar6 + (int)((ulonglong)
                        ((iVar8 + (int)((ulonglong)((longlong)iVar6 * (longlong)iVar4) >> 0x20) * -8
                         ) * lVar3) >> 0x10);
  iVar7 = (((iVar7 + -1) - (iVar5 + -1)) - param_3) + 0x1d;
  if (iVar7 < 0) {
    bVar2 = -(byte)iVar7;
    iVar4 = -0x80000000 >> (bVar2 & 0x1f);
    iVar5 = 0x7fffffff >> (bVar2 & 0x1f);
    iVar8 = iVar6;
    if (iVar6 < iVar5) {
      iVar8 = iVar5;
    }
    if (iVar4 < iVar6) {
      iVar8 = iVar4;
    }
    iVar7 = iVar6;
    if (iVar6 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar5 < iVar6) {
      iVar7 = iVar5;
    }
    if (iVar5 < iVar4) {
      iVar7 = iVar8;
    }
    iVar7 = iVar7 << (bVar2 & 0x1f);
  }
  else if (iVar7 < 0x20) {
    iVar7 = iVar6 >> ((byte)iVar7 & 0x1f);
  }
  else {
    iVar7 = 0;
  }
  return iVar7;
}

// silk_stereo_LR_to_MS @ 14f87ec0c

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_stereo_LR_to_MS
               (short *param_1,short *param_2,longlong param_3,undefined8 param_4,char *param_5,
               int *param_6,int param_7,short param_8,int param_9,int param_10,uint param_11)

{
  short *psVar1;
  undefined4 *puVar2;
  longlong lVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  int iVar16;
  ulonglong uVar17;
  short sVar18;
  int iVar19;
  short *psVar20;
  short *psVar21;
  short sVar22;
  int iVar23;
  uint uVar24;
  short *psVar25;
  ulonglong uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 *puVar30;
  undefined8 auStack_d0 [5];
  uint auStack_a8 [3];
  short asStack_9c [2];
  int local_98;
  int iStack_94;
  int local_90;
  int local_8c;
  ulonglong local_88;
  int local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  uint local_60;
  short local_5c [2];
  int local_58 [2];
  longlong local_50;
  short *local_48;
  undefined4 *local_40;
  short *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)&local_98;
  uVar29 = (ulonglong)(int)param_11;
  psVar25 = param_2 + -2;
  local_48 = param_1;
  local_78 = param_4;
  local_50 = param_3;
  lVar27 = uVar29 + 2;
  local_38 = psVar25;
  local_60 = param_11;
  uVar17 = lVar27 * 2 + 0xf;
  local_88 = uVar29;
  if (uVar17 <= (ulonglong)(lVar27 * 2)) {
    uVar17 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14f87ec9b;
  lVar7 = -(uVar17 & 0xfffffffffffffff0);
  puVar2 = (undefined4 *)((longlong)&local_98 + lVar7);
  local_40 = puVar2;
  uVar17 = uVar29;
  if (0 < lVar27) {
    psVar21 = (short *)(param_3 + -4);
    do {
      sVar18 = *psVar21;
      iVar23 = (int)*(short *)(((longlong)param_2 - param_3) + (longlong)psVar21);
      psVar21 = psVar21 + 1;
      iVar19 = iVar23 + sVar18;
      uVar24 = iVar23 - sVar18;
      *(ushort *)((longlong)psVar25 + (2 - param_3) + (longlong)psVar21) =
           (short)(iVar19 >> 1) + ((ushort)iVar19 & 1);
      iVar19 = (uVar24 & 1) + ((int)uVar24 >> 1);
      sVar18 = ((ushort)uVar24 & 1) + (short)((int)uVar24 >> 1);
      if (iVar19 < -0x8000) {
        sVar18 = -0x8000;
      }
      if (0x7fff < iVar19) {
        sVar18 = 0x7fff;
      }
      *(short *)((longlong)puVar2 + (2 - param_3) + (longlong)psVar21) = sVar18;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    uVar29 = (ulonglong)local_60;
    uVar17 = local_88;
  }
  psVar21 = local_48;
  uVar24 = (uint)uVar29;
  uVar26 = uVar17 * 2;
  *(undefined4 *)psVar25 = *(undefined4 *)(local_48 + 2);
  *puVar2 = *(undefined4 *)(local_48 + 4);
  *(undefined4 *)(psVar21 + 2) = *(undefined4 *)(psVar25 + uVar17);
  *(undefined4 *)(psVar21 + 4) = *(undefined4 *)(uVar26 + (longlong)puVar2);
  uVar17 = uVar26 + 0xf;
  if (uVar17 <= uVar26) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x14f87ed74;
  lVar8 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = uVar26 + 0xf;
  lVar27 = (longlong)&local_98 + lVar8 + lVar7;
  local_68 = lVar27;
  if (uVar17 <= uVar26) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x14f87ed95;
  lVar9 = -(uVar17 & 0xfffffffffffffff0);
  lVar10 = (longlong)&local_98 + lVar9 + lVar8 + lVar7;
  local_70 = lVar10;
  if (0 < (int)uVar24) {
    uVar17 = uVar29 & 0xffffffff;
    psVar20 = param_2;
    do {
      psVar1 = psVar20 + 1;
      sVar18 = (short)(((int)psVar20[-2] + psVar20[-1] * 2 + (int)*psVar20 >> 1) + 1 >> 1);
      *(short *)((lVar27 - (longlong)psVar25) + -6 + (longlong)psVar1) = sVar18;
      *(short *)((lVar10 - (longlong)psVar25) + -6 + (longlong)psVar1) = psVar20[-1] - sVar18;
      uVar17 = uVar17 - 1;
      psVar20 = psVar1;
    } while (uVar17 != 0);
  }
  uVar17 = uVar26 + 0xf;
  if (uVar17 <= uVar26) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar9 + lVar8 + lVar7) = 0x14f87ee15;
  lVar10 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = uVar26 + 0xf;
  lVar27 = (longlong)&local_98 + lVar10 + lVar9 + lVar8 + lVar7;
  local_88 = lVar27;
  if (uVar17 <= uVar26) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14f87ee36;
  lVar11 = -(uVar17 & 0xfffffffffffffff0);
  lVar3 = (longlong)&local_98 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7;
  uVar17 = lVar27;
  if (0 < (int)uVar24) {
    uVar26 = uVar29 & 0xffffffff;
    psVar20 = (short *)((longlong)&iStack_94 + lVar7);
    do {
      psVar1 = psVar20 + 1;
      sVar18 = (short)(((int)psVar20[-2] + psVar20[-1] * 2 + (int)*psVar20 >> 1) + 1 >> 1);
      *(short *)((lVar27 - (longlong)puVar2) + -6 + (longlong)psVar1) = sVar18;
      *(short *)((lVar3 - (longlong)puVar2) + -6 + (longlong)psVar1) = psVar20[-1] - sVar18;
      uVar26 = uVar26 - 1;
      uVar17 = local_88;
      psVar20 = psVar1;
    } while (uVar26 != 0);
  }
  local_80 = param_10;
  lVar27 = 0x28f;
  if (uVar24 == param_10 * 10) {
    lVar27 = 0x148;
  }
  lVar27 = lVar27 * ((int)param_8 * (int)param_8);
  *(int *)((longlong)auStack_a8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + 8) =
       (int)((ulonglong)lVar27 >> 0x10);
  lVar13 = local_68;
  local_88 = lVar27 >> 0x10;
  *(uint *)((longlong)auStack_a8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = uVar24;
  *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14f87eee9;
  uVar15 = silk_stereo_find_predictor(local_5c,lVar13,uVar17,psVar21 + 6);
  lVar27 = local_70;
  _local_98 = CONCAT44(iStack_94,uVar15);
  *(int *)((longlong)auStack_a8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + 8) = (int)local_88;
  *(uint *)((longlong)auStack_a8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = uVar24;
  *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14f87ef0d;
  uVar15 = silk_stereo_find_predictor(local_58,lVar27,lVar3);
  _local_98 = CONCAT44(uVar15,local_98);
  local_58[0] = local_58[0] + local_5c[0] * 3;
  local_90 = 0x10000;
  if (local_58[0] < 0x10000) {
    local_90 = local_58[0];
  }
  iVar19 = 600;
  if (uVar24 == param_10 * 10) {
    iVar19 = 0x4b0;
  }
  local_68 = CONCAT44(local_68._4_4_,local_90);
  iVar23 = param_7 - iVar19;
  if (param_7 - iVar19 < 1) {
    iVar23 = 1;
  }
  local_70 = CONCAT44(local_70._4_4_,(int)(short)param_10);
  local_90 = local_90 * 3;
  iVar19 = local_90 + 0xd0000;
  iVar28 = (short)param_10 * 600 + 2000;
  local_8c = iVar23;
  *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14f87ef7e;
  iVar19 = FUN_14f87eb04(iVar23,iVar19,0x13);
  *param_6 = iVar19;
  if (iVar19 < iVar28) {
    *param_6 = iVar28;
    iVar19 = local_90 + 0x10000;
    param_6[1] = iVar23 - iVar28;
    *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14f87efc5;
    iVar19 = FUN_14f87eb04((iVar23 - iVar28) * 2 - iVar28,
                           (longlong)iVar19 * (longlong)(short)iVar28 >> 0x10,0x10);
    iVar28 = iVar19;
    if (iVar19 < 0) {
      iVar28 = 0;
    }
    if (0x4000 < iVar19) {
      iVar28 = 0x4000;
    }
  }
  else {
    iVar28 = 0x4000;
    param_6[1] = iVar23 - iVar19;
  }
  uVar12 = local_78;
  iVar19 = 0x4000;
  local_90 = 0x4000;
  psVar21[0xe] = psVar21[0xe] +
                 (short)((ulonglong)(uint)(iVar28 - psVar21[0xe]) * (longlong)(short)local_88 >>
                        0x10);
  *param_5 = '\0';
  if (param_9 == 0) {
    if (psVar21[0xf] == 0) {
      if ((local_8c << 3 < (int)local_70 * 0x1e78 + 26000) ||
         (sVar18 = psVar21[0xe],
         (int)((ulonglong)((longlong)sVar18 * (longlong)(int)local_68) >> 0x10) < 0x333)) {
        _local_98 = CONCAT44((int)(short)iStack_94 * (int)psVar21[0xe] >> 0xe,
                             (int)(short)local_98 * (int)psVar21[0xe] >> 0xe);
        *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) =
             0x14f87f09b;
        silk_stereo_quant_pred(&local_98,uVar12);
        iVar19 = 0;
        *param_6 = local_8c;
        param_6[1] = 0;
        local_90 = 0;
        _local_98 = 0;
        *param_5 = '\x01';
        goto LAB_14f87f166;
      }
LAB_14f87f0ea:
      if (0x3ccd < sVar18) goto LAB_14f87f023;
      _local_98 = CONCAT44((int)(short)iStack_94 * (int)sVar18 >> 0xe,
                           (int)(short)local_98 * (int)sVar18 >> 0xe);
      *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14f87f122;
      silk_stereo_quant_pred(&local_98,uVar12);
      iVar19 = (int)psVar21[0xe];
    }
    else {
      if (((int)local_70 * 0x19c8 + 22000 <= local_8c << 3) &&
         (sVar18 = psVar21[0xe],
         0x147 < (int)((ulonglong)((longlong)sVar18 * (longlong)(int)local_68) >> 0x10)))
      goto LAB_14f87f0ea;
      _local_98 = CONCAT44((int)(short)iStack_94 * (int)psVar21[0xe] >> 0xe,
                           (int)(short)local_98 * (int)psVar21[0xe] >> 0xe);
      *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14f87f156;
      silk_stereo_quant_pred(&local_98,uVar12);
      iVar19 = 0;
      _local_98 = 0;
    }
    local_90 = iVar19;
  }
  else {
    _local_98 = 0;
    iVar19 = 0;
    local_90 = 0;
LAB_14f87f023:
    *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14f87f030;
    silk_stereo_quant_pred(&local_98,uVar12);
  }
LAB_14f87f166:
  if (*param_5 == '\x01') {
    psVar21[0x10] = psVar21[0x10] + (short)uVar29 + (short)local_80 * -8;
    if (local_80 * 5 <= (int)psVar21[0x10]) {
      sVar18 = 10000;
      goto LAB_14f87f1a1;
    }
    *param_5 = '\0';
  }
  else {
    sVar18 = 0;
LAB_14f87f1a1:
    psVar21[0x10] = sVar18;
    if (*param_5 != '\0') goto LAB_14f87f1d3;
  }
  if (param_6[1] < 1) {
    local_8c = local_8c + -1;
    param_6[1] = 1;
    if (local_8c < 1) {
      local_8c = 1;
    }
    *param_6 = local_8c;
  }
LAB_14f87f1d3:
  sVar18 = psVar21[0xf];
  iVar28 = -(int)*psVar21;
  sVar4 = *psVar21;
  local_68 = CONCAT44(local_68._4_4_,iVar28);
  iVar16 = -(int)psVar21[1];
  local_70 = CONCAT44(local_70._4_4_,iVar16);
  local_8c = (int)sVar18 << 10;
  lVar27 = (longlong)(local_80 << 3);
  sVar5 = psVar21[1];
  sVar22 = (short)(0x10000 / (longlong)(local_80 << 3));
  psVar20 = psVar25;
  puVar30 = puVar2;
  iVar23 = iVar19;
  if (0 < local_80 << 3) {
    local_88 = (longlong)puVar2 - (longlong)psVar25;
    do {
      psVar21 = param_2 + -2;
      iVar28 = iVar28 - (((int)(short)((short)local_98 - sVar4) * (int)sVar22 >> 0xf) + 1 >> 1);
      sVar6 = *param_2;
      iVar16 = iVar16 - (((int)(short)((short)iStack_94 - sVar5) * (int)sVar22 >> 0xf) + 1 >> 1);
      psVar20 = param_2 + -1;
      param_2 = param_2 + 1;
      local_8c = local_8c +
                 (int)((ulonglong)((longlong)(iVar19 - sVar18) * (longlong)sVar22) >> 0x10) * 0x400;
      iVar23 = ((int)((ulonglong)
                      ((longlong)(*psVar21 * 0x200 + sVar6 * 0x200 + *psVar20 * 0x400) *
                      (longlong)(short)iVar28) >> 0x10) +
                (int)((ulonglong)((longlong)((int)*psVar20 << 0xb) * (longlong)(short)iVar16) >>
                     0x10) +
                (int)((ulonglong)
                      ((longlong)
                       *(short *)(((longlong)puVar2 - (longlong)psVar25) + -4 + (longlong)param_2) *
                      (longlong)local_8c) >> 0x10) >> 7) + 1 >> 1;
      uVar14 = (undefined2)iVar23;
      if (iVar23 < -0x8000) {
        uVar14 = 0x8000;
      }
      if (0x7fff < iVar23) {
        uVar14 = 0x7fff;
      }
      *(undefined2 *)((local_50 - (longlong)psVar25) + -8 + (longlong)param_2) = uVar14;
      lVar27 = lVar27 + -1;
      psVar20 = local_38;
      psVar21 = local_48;
      puVar30 = local_40;
      uVar24 = local_60;
      iVar23 = local_90;
    } while (lVar27 != 0);
  }
  iVar19 = iVar23;
  if (local_80 * 8 < (int)uVar24) {
    uVar17 = (ulonglong)(uVar24 + local_80 * -8);
    psVar25 = psVar20 + (longlong)(local_80 * 8) + 2;
    do {
      iVar19 = ((int)((ulonglong)
                      ((longlong)(psVar25[-2] * 0x200 + *psVar25 * 0x200 + psVar25[-1] * 0x400) *
                      (longlong)-(short)local_98) >> 0x10) +
                (int)((ulonglong)
                      ((longlong)
                       *(short *)((longlong)psVar25 + (longlong)puVar30 + (-2 - (longlong)psVar20))
                      * (longlong)(iVar23 << 10)) >> 0x10) +
                (int)((ulonglong)((longlong)((int)psVar25[-1] << 0xb) * (longlong)-(short)iStack_94)
                     >> 0x10) >> 7) + 1 >> 1;
      uVar14 = (undefined2)iVar19;
      if (iVar19 < -0x8000) {
        uVar14 = 0x8000;
      }
      if (0x7fff < iVar19) {
        uVar14 = 0x7fff;
      }
      *(undefined2 *)((longlong)psVar25 + (local_50 - (longlong)psVar20) + -6) = uVar14;
      uVar17 = uVar17 - 1;
      psVar21 = local_48;
      psVar25 = psVar25 + 1;
      iVar19 = local_90;
    } while (uVar17 != 0);
  }
  *psVar21 = (short)local_98;
  psVar21[1] = (short)iStack_94;
  psVar21[0xf] = (short)iVar19;
  *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7) = 0x14f87f42b;
  return;
}


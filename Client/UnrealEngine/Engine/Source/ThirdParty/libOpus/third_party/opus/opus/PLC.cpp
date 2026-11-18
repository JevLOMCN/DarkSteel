// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 5

// silk_PLC @ 14f889b90

void silk_PLC(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (*(int *)(param_1 + 0x90c) != *(int *)(param_1 + 0x10b4)) {
    *(int *)(param_1 + 0x1064) = *(int *)(param_1 + 0x918) << 7;
    *(undefined4 *)(param_1 + 0x10ac) = 0x10000;
    *(undefined4 *)(param_1 + 0x10b0) = 0x10000;
    *(undefined4 *)(param_1 + 0x10b4) = *(undefined4 *)(param_1 + 0x90c);
    *(undefined4 *)(param_1 + 0x10bc) = 0x14;
    *(undefined4 *)(param_1 + 0x10b8) = 2;
  }
  if (param_4 != 0) {
    FUN_14f889c50();
    *(int *)(param_1 + 0x1058) = *(int *)(param_1 + 0x1058) + 1;
    return;
  }
  FUN_14f88a734();
  return;
}

// silk_PLC_Reset @ 14f889c14

void silk_PLC_Reset(longlong param_1)

{
  *(int *)(param_1 + 0x1064) = *(int *)(param_1 + 0x918) << 7;
  *(undefined4 *)(param_1 + 0x10ac) = 0x10000;
  *(undefined4 *)(param_1 + 0x10b0) = 0x10000;
  *(undefined4 *)(param_1 + 0x10bc) = 0x14;
  *(undefined4 *)(param_1 + 0x10b8) = 2;
  return;
}

// FUN_14f889c50 @ 14f889c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f889c50(longlong param_1,int *param_2,undefined2 *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  void *_Src;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined2 uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  uint uVar22;
  short sVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  short *psVar28;
  int *piVar29;
  longlong lVar30;
  int iVar31;
  int *piVar32;
  longlong lVar33;
  ushort uVar34;
  uint uVar35;
  int *piVar36;
  undefined8 *puVar37;
  undefined8 auStack_110 [5];
  int aiStack_e8 [4];
  uint local_d8;
  int local_d4;
  short local_d0;
  uint local_cc;
  int local_c8;
  undefined8 local_c0;
  int local_b8;
  ulonglong local_b0;
  longlong local_a8;
  int local_a0;
  byte local_9c [4];
  int local_98;
  byte local_94 [4];
  int local_90;
  undefined8 *local_88;
  int *local_80;
  int *local_78;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c [6];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)&local_d8;
  local_80 = (int *)param_3;
  local_d4 = param_4;
  uVar13 = (longlong)(*(int *)(param_1 + 0x918) + *(int *)(param_1 + 0x920)) * 4;
  local_78 = param_2;
  uVar17 = uVar13 + 0xf;
  if (uVar17 <= uVar13) {
    uVar17 = 0xffffffffffffff0;
  }
  auStack_110[0] = 0x14f889cc7;
  lVar6 = -(uVar17 & 0xfffffffffffffff0);
  uVar13 = (longlong)*(int *)(param_1 + 0x920) * 2;
  uVar17 = uVar13 + 0xf;
  local_a8 = (longlong)&local_d8 + lVar6;
  if (uVar17 <= uVar13) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x14f889cf1;
  lVar7 = -(uVar17 & 0xfffffffffffffff0);
  lVar30 = 0;
  local_b0 = (longlong)&local_d8 + lVar7 + lVar6;
  local_90 = *(int *)(param_1 + 0x10b0) >> 6;
  local_c0 = CONCAT44(local_90,*(int *)(param_1 + 0x10ac) >> 6);
  if (*(int *)(param_1 + 0x948) != 0) {
    *(undefined8 *)((longlong)auStack_110 + lVar7 + lVar6) = 0x14f889d34;
    memset((void *)(param_1 + 0x1072),0,0x20);
  }
  iVar25 = *(int *)(param_1 + 0x91c);
  iVar19 = *(int *)(param_1 + 0x914);
  uVar13 = (longlong)(iVar25 * 2) * 2;
  uVar17 = uVar13 + 0xf;
  if (uVar17 <= uVar13) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar7 + lVar6) = 0x14f889d5f;
  lVar8 = -(uVar17 & 0xfffffffffffffff0);
  iVar19 = (iVar19 + -2) * iVar25;
  lVar4 = (longlong)&local_d8 + lVar8 + lVar7 + lVar6;
  lVar33 = lVar4;
  do {
    lVar27 = 0;
    if (0 < iVar25) {
      iVar24 = *(int *)((longlong)&local_c0 + lVar30 * 4);
      iVar31 = iVar19;
      do {
        lVar18 = (longlong)*(int *)(param_1 + 4 + (longlong)iVar31 * 4) * (longlong)iVar24;
        iVar16 = (int)((ulonglong)lVar18 >> 0x10) >> 8;
        if (iVar16 < 0x8000) {
          uVar15 = (undefined2)((ulonglong)lVar18 >> 0x18);
          if (iVar16 < -0x8000) {
            uVar15 = 0x8000;
          }
        }
        else {
          uVar15 = 0x7fff;
        }
        *(undefined2 *)(lVar33 + lVar27 * 2) = uVar15;
        iVar31 = iVar31 + 1;
        lVar27 = lVar27 + 1;
      } while (lVar27 < iVar25);
    }
    lVar18 = (longlong)iVar25 * 2;
    lVar27 = 0;
    lVar33 = lVar33 + lVar18;
    iVar19 = iVar19 + iVar25;
    lVar30 = lVar30 + 1;
  } while (lVar30 < 2);
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x14f889def;
  silk_sum_sqr_shift(&local_98,local_9c,lVar4,iVar25);
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x14f889e03;
  silk_sum_sqr_shift(&local_a0,local_94,lVar4 + lVar18,iVar25);
  iVar25 = *(int *)(param_1 + 0x10b8);
  if (local_98 >> (local_94[0] & 0x1f) < local_a0 >> (local_9c[0] & 0x1f)) {
    iVar25 = iVar25 + -1;
  }
  uVar35 = (uint)*(ushort *)(param_1 + 0x109c);
  local_d8 = (uint)*(ushort *)(param_1 + 0x109c);
  iVar25 = iVar25 * *(int *)(param_1 + 0x10bc) + -0x80;
  if (iVar25 < 0) {
    iVar25 = 0;
  }
  local_88 = (undefined8 *)(longlong)iVar25;
  iVar25 = *(int *)(param_1 + 0x1058);
  if (1 < iVar25) {
    iVar25 = 1;
  }
  lVar30 = (longlong)iVar25;
  local_d0 = *(short *)(&DAT_1535199d0 + lVar30 * 2);
  if (*(int *)(param_1 + 0x105c) == 2) {
    sVar23 = *(short *)(&DAT_1535199d4 + lVar30 * 2);
  }
  else {
    sVar23 = *(short *)(&UNK_1535199d8 + lVar30 * 2);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x924);
  _Src = (void *)(param_1 + 0x1072);
  uVar17 = (ulonglong)(uint)(int)sVar23;
  local_c0 = uVar17;
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x14f889eab;
  silk_bwexpander(_Src,uVar5,0xfd71);
  iVar25 = *(int *)(param_1 + 0x924);
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x14f889ec1;
  memcpy(&local_70,_Src,(longlong)iVar25 * 2);
  if (*(int *)(param_1 + 0x1058) == 0) {
    uVar35 = 0x4000;
    local_d8 = 0x4000;
    if (*(int *)(param_1 + 0x105c) == 2) {
      do {
        uVar34 = (short)uVar35 - *(short *)(param_1 + 0x1068 + lVar27 * 2);
        uVar35 = (uint)uVar34;
        lVar27 = lVar27 + 1;
      } while (lVar27 < 5);
      if ((short)uVar34 < 0xccd) {
        uVar34 = 0xccd;
      }
      uVar35 = (int)(short)uVar34 * (int)*(short *)(param_1 + 0x10a8) >> 0xe;
      local_d8 = uVar35;
      local_c0 = uVar17;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x924);
      *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x14f889f30;
      iVar25 = silk_LPC_inverse_pred_gain_c(_Src,uVar5);
      if (0x8000000 < iVar25) {
        iVar25 = 0x8000000;
      }
      if (iVar25 < 0x400000) {
        iVar25 = 0x400000;
      }
      uVar17 = (ulonglong)
               (uint)((int)((ulonglong)((longlong)(iVar25 << 3) * (longlong)sVar23) >> 0x10) >> 0xe)
      ;
      local_c0 = uVar17;
    }
  }
  local_cc = *(uint *)(param_1 + 0x1098);
  iVar25 = *(int *)(param_1 + 0x924);
  iVar19 = *(int *)(param_1 + 0x920);
  iVar24 = (*(int *)(param_1 + 0x1064) >> 7) + 1 >> 1;
  iVar31 = ((iVar19 - iVar25) - iVar24) + -2;
  local_c8 = iVar19;
  local_b8 = iVar24;
  if (iVar31 < 1) {
    *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x14f889fb5;
    celt_fatal("assertion failed: idx > 0","../../../third_party/opus/src/silk/PLC.c",0x126);
    iVar25 = *(int *)(param_1 + 0x924);
    iVar19 = *(int *)(param_1 + 0x920);
  }
  lVar30 = local_b0 + (longlong)iVar31 * 2;
  *(int *)((longlong)aiStack_e8 + lVar8 + lVar7 + lVar6 + 8) = local_d4;
  *(int *)((longlong)aiStack_e8 + lVar8 + lVar7 + lVar6) = iVar25;
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x14f889ff1;
  silk_LPC_analysis_filter(lVar30,param_1 + 0x544 + (longlong)iVar31 * 2,&local_70,iVar19 - iVar31);
  uVar22 = *(uint *)(param_1 + 0x10b0);
  uVar12 = (uVar22 ^ (int)uVar22 >> 0x1f) - ((int)uVar22 >> 0x1f);
  if (uVar12 == 0) {
    iVar25 = 0x20;
  }
  else {
    iVar25 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar25 == 0; iVar25 = iVar25 + -1) {
      }
    }
    iVar25 = 0x1f - iVar25;
  }
  iVar19 = uVar22 << ((byte)(iVar25 + -1) & 0x1f);
  iVar16 = 0xf - (iVar25 + -1);
  lVar30 = 0x1fffffff / (longlong)(iVar19 >> 0x10);
  iVar25 = (int)lVar30;
  iVar25 = (int)((ulonglong)
                 ((longlong)
                  ((int)((ulonglong)((longlong)(short)lVar30 * (longlong)iVar19) >> 0x10) * -8) *
                 (longlong)iVar25) >> 0x10) + iVar25 * 0x10000;
  if (iVar16 < 1) {
    bVar14 = -(byte)iVar16;
    iVar26 = -0x80000000 >> (bVar14 & 0x1f);
    iVar20 = 0x7fffffff >> (bVar14 & 0x1f);
    iVar16 = iVar25;
    if (iVar25 < iVar20) {
      iVar16 = iVar20;
    }
    iVar19 = iVar25;
    if (iVar25 < iVar26) {
      iVar19 = iVar26;
    }
    if (iVar26 < iVar25) {
      iVar16 = iVar26;
    }
    if (iVar20 < iVar25) {
      iVar19 = iVar20;
    }
    if (iVar20 < iVar26) {
      iVar19 = iVar16;
    }
    iVar19 = iVar19 << (bVar14 & 0x1f);
  }
  else if (iVar16 < 0x20) {
    iVar19 = iVar25 >> ((byte)iVar16 & 0x1f);
  }
  else {
    iVar19 = 0;
  }
  iVar25 = *(int *)(param_1 + 0x920);
  iVar16 = 0x3fffffff;
  if (iVar19 < 0x3fffffff) {
    iVar16 = iVar19;
  }
  iVar31 = *(int *)(param_1 + 0x924) + iVar31;
  if (iVar31 < iVar25) {
    puVar21 = (undefined4 *)(local_a8 + (longlong)iVar31 * 4);
    psVar28 = (short *)(local_b0 + (longlong)iVar31 * 2);
    do {
      sVar23 = *psVar28;
      iVar31 = iVar31 + 1;
      psVar28 = psVar28 + 1;
      *puVar21 = (int)((ulonglong)((longlong)sVar23 * (longlong)iVar16) >> 0x10);
      puVar21 = puVar21 + 1;
      iVar25 = *(int *)(param_1 + 0x920);
    } while (iVar31 < iVar25);
  }
  local_d4 = 0;
  if (0 < *(int *)(param_1 + 0x914)) {
    uVar13 = (ulonglong)local_c8;
    local_b0 = uVar13;
    local_c8 = (int)local_d0;
    do {
      iVar25 = 0;
      piVar29 = (int *)(local_a8 + ((longlong)((int)uVar13 - iVar24) + 2) * 4);
      if (0 < *(int *)(param_1 + 0x91c)) {
        uVar17 = local_b0;
        uVar22 = local_cc;
        do {
          piVar36 = piVar29 + -4;
          uVar13 = (ulonglong)((int)uVar13 + 1);
          iVar25 = iVar25 + 1;
          piVar1 = piVar29 + -3;
          uVar22 = uVar22 * 0xbb38435 + 0x3619636b;
          piVar32 = piVar29 + -2;
          piVar2 = piVar29 + -1;
          iVar19 = *piVar29;
          piVar29 = piVar29 + 1;
          *(int *)(local_a8 + uVar17 * 4) =
               ((int)((ulonglong)((longlong)*piVar36 * (longlong)*(short *)(param_1 + 0x1070)) >>
                     0x10) +
                (int)((ulonglong)((longlong)*piVar1 * (longlong)*(short *)(param_1 + 0x106e)) >>
                     0x10) +
                (int)((ulonglong)((longlong)*piVar32 * (longlong)*(short *)(param_1 + 0x106c)) >>
                     0x10) +
                (int)((ulonglong)((longlong)*piVar2 * (longlong)*(short *)(param_1 + 0x106a)) >>
                     0x10) +
                (int)((ulonglong)((longlong)*(short *)(param_1 + 0x1068) * (longlong)iVar19) >> 0x10
                     ) + 2) * 4 +
               (int)((ulonglong)
                     ((longlong)
                      *(int *)(param_1 + 4 + ((ulonglong)(uVar22 >> 0x19) + (longlong)local_88) * 4)
                     * (longlong)(short)uVar35) >> 0x10) * 4;
          uVar17 = uVar17 + 1;
        } while (iVar25 < *(int *)(param_1 + 0x91c));
        local_cc = uVar22;
        local_b0 = uVar17;
        uVar17 = local_c0;
      }
      lVar30 = 0;
      do {
        *(short *)(param_1 + 0x1068 + lVar30 * 2) =
             (short)((int)*(short *)(param_1 + 0x1068 + lVar30 * 2) * (int)local_d0 >> 0xf);
        lVar30 = lVar30 + 1;
      } while (lVar30 < 5);
      if (*(char *)(param_1 + 0xae5) != '\0') {
        uVar35 = (int)(short)uVar35 * (int)(short)uVar17 >> 0xf;
      }
      iVar19 = (int)((ulonglong)((longlong)*(int *)(param_1 + 0x1064) * 0x28f) >> 0x10) +
               *(int *)(param_1 + 0x1064);
      *(int *)(param_1 + 0x1064) = iVar19;
      iVar25 = *(short *)(param_1 + 0x90c) * 0x1200;
      if (iVar19 < iVar25) {
        iVar25 = iVar19;
      }
      local_d4 = local_d4 + 1;
      *(int *)(param_1 + 0x1064) = iVar25;
      iVar24 = (iVar25 >> 7) + 1 >> 1;
    } while (local_d4 < *(int *)(param_1 + 0x914));
    iVar25 = *(int *)(param_1 + 0x920);
    local_d8 = uVar35;
    local_b8 = iVar24;
  }
  iVar19 = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x50c);
  puVar37 = (undefined8 *)(local_a8 + ((longlong)iVar25 + -0x10) * 4);
  *puVar37 = *(undefined8 *)(param_1 + 0x504);
  puVar37[1] = uVar11;
  local_88 = puVar37;
  uVar11 = *(undefined8 *)(param_1 + 0x51c);
  puVar37[2] = *(undefined8 *)(param_1 + 0x514);
  puVar37[3] = uVar11;
  uVar5 = *(undefined4 *)(param_1 + 0x528);
  uVar9 = *(undefined4 *)(param_1 + 0x52c);
  uVar10 = *(undefined4 *)(param_1 + 0x530);
  *(undefined4 *)(puVar37 + 4) = *(undefined4 *)(param_1 + 0x524);
  *(undefined4 *)((longlong)puVar37 + 0x24) = uVar5;
  *(undefined4 *)(puVar37 + 5) = uVar9;
  *(undefined4 *)((longlong)puVar37 + 0x2c) = uVar10;
  uVar5 = *(undefined4 *)(param_1 + 0x538);
  uVar9 = *(undefined4 *)(param_1 + 0x53c);
  uVar10 = *(undefined4 *)(param_1 + 0x540);
  *(undefined4 *)(puVar37 + 6) = *(undefined4 *)(param_1 + 0x534);
  *(undefined4 *)((longlong)puVar37 + 0x34) = uVar5;
  *(undefined4 *)(puVar37 + 7) = uVar9;
  *(undefined4 *)((longlong)puVar37 + 0x3c) = uVar10;
  if (*(int *)(param_1 + 0x924) < 10) {
    *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x14f88a337;
    celt_fatal("assertion failed: psDec->LPC_order >= 10","../../../third_party/opus/src/silk/PLC.c"
               ,0x15e);
  }
  iVar25 = *(int *)(param_1 + 0x918);
  uVar15 = (short)uVar35;
  if (0 < iVar25) {
    piVar29 = (int *)((longlong)puVar37 + 0x1c);
    piVar36 = local_80;
    do {
      piVar1 = piVar29 + 1;
      iVar24 = 10;
      iVar25 = *(int *)(param_1 + 0x924);
      local_80 = piVar1;
      uVar35 = (int)((ulonglong)((longlong)piVar29[-1] * (longlong)local_5e) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[2] * (longlong)local_64) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[3] * (longlong)local_66) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[4] * (longlong)local_68) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[5] * (longlong)local_6a) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[6] * (longlong)local_6c) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[7] * (longlong)local_6e) >> 0x10) +
               (int)((ulonglong)((longlong)piVar29[8] * (longlong)local_70) >> 0x10) +
               (int)((ulonglong)((longlong)local_60 * (longlong)*piVar29) >> 0x10) +
               (int)((ulonglong)((longlong)local_62 * (longlong)*piVar1) >> 0x10) + (iVar25 >> 1);
      if (10 < iVar25) {
        psVar28 = local_5c;
        piVar32 = piVar29 + -2;
        do {
          iVar31 = *piVar32;
          iVar24 = iVar24 + 1;
          sVar23 = *psVar28;
          piVar32 = piVar32 + -1;
          psVar28 = psVar28 + 1;
          uVar35 = uVar35 + (int)((ulonglong)((longlong)iVar31 * (longlong)sVar23) >> 0x10);
        } while (iVar24 < iVar25);
      }
      uVar22 = uVar35;
      if ((int)uVar35 < -0x8000000) {
        uVar22 = 0xf8000000;
      }
      uVar12 = piVar29[9];
      if (0x7ffffff < (int)uVar35) {
        uVar22 = 0x7ffffff;
      }
      if ((int)(uVar22 * 0x10 + uVar12) < 0) {
        if ((int)(uVar12 | uVar22 << 4) < 0) goto LAB_14f88a498;
        iVar25 = 0x7fffffff;
      }
      else if ((uVar12 & (uVar22 & 0xf8000000) << 4) == 0) {
LAB_14f88a498:
        iVar25 = uVar22 * 0x10 + uVar12;
      }
      else {
        iVar25 = -0x80000000;
      }
      piVar29[9] = iVar25;
      iVar24 = ((int)((ulonglong)((longlong)iVar25 * (longlong)local_90) >> 0x10) >> 7) + 1 >> 1;
      iVar25 = 0x7fff;
      if ((iVar24 < 0x8000) && (iVar25 = iVar24, iVar24 < -0x8000)) {
        iVar25 = -0x8000;
      }
      *(short *)piVar36 = (short)iVar25;
      iVar19 = iVar19 + 1;
      iVar25 = *(int *)(param_1 + 0x918);
      piVar36 = (int *)((longlong)piVar36 + 2);
      piVar29 = piVar1;
      puVar37 = local_88;
      iVar24 = local_b8;
      uVar15 = (undefined2)local_d8;
    } while (iVar19 < iVar25);
  }
  lVar30 = (longlong)iVar25;
  puVar3 = (undefined8 *)((longlong)puVar37 + lVar30 * 4);
  uVar11 = puVar3[1];
  *(undefined8 *)(param_1 + 0x504) = *puVar3;
  *(undefined8 *)(param_1 + 0x50c) = uVar11;
  puVar3 = (undefined8 *)((longlong)puVar37 + lVar30 * 4 + 0x10);
  uVar11 = puVar3[1];
  *(undefined8 *)(param_1 + 0x514) = *puVar3;
  *(undefined8 *)(param_1 + 0x51c) = uVar11;
  puVar3 = (undefined8 *)((longlong)puVar37 + lVar30 * 4 + 0x20);
  uVar11 = puVar3[1];
  *(undefined8 *)(param_1 + 0x524) = *puVar3;
  *(undefined8 *)(param_1 + 0x52c) = uVar11;
  puVar37 = (undefined8 *)((longlong)puVar37 + lVar30 * 4 + 0x30);
  uVar11 = puVar37[1];
  *(undefined8 *)(param_1 + 0x534) = *puVar37;
  *(undefined8 *)(param_1 + 0x53c) = uVar11;
  *(uint *)(param_1 + 0x1098) = local_cc;
  *(undefined2 *)(param_1 + 0x109c) = uVar15;
  *local_78 = iVar24;
  local_78[1] = iVar24;
  local_78[2] = iVar24;
  local_78[3] = iVar24;
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x14f88a569;
  return;
}

// silk_PLC_glue_frames @ 14f88a584

void silk_PLC_glue_frames(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  int local_res8 [2];
  int local_res20 [2];
  
  if (*(int *)(param_1 + 0x1058) == 0) {
    if (*(int *)(param_1 + 0x1094) != 0) {
      silk_sum_sqr_shift(local_res8,local_res20,param_2,param_3);
      iVar3 = *(int *)(param_1 + 0x10a4);
      if (iVar3 < local_res20[0]) {
        *(int *)(param_1 + 0x10a0) =
             *(int *)(param_1 + 0x10a0) >> ((char)local_res20[0] - (char)iVar3 & 0x1fU);
      }
      else if (local_res20[0] < iVar3) {
        local_res8[0] = local_res8[0] >> ((char)iVar3 - (char)local_res20[0] & 0x1fU);
      }
      uVar2 = *(uint *)(param_1 + 0x10a0);
      if ((int)uVar2 < local_res8[0]) {
        if (uVar2 == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = 0x1f;
          if (uVar2 != 0) {
            for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          iVar3 = 0x1f - iVar3;
        }
        iVar6 = uVar2 << ((byte)(iVar3 + -1) & 0x1f);
        *(int *)(param_1 + 0x10a0) = iVar6;
        iVar5 = 0x18 - (iVar3 + -1);
        iVar3 = 0;
        if (0 < iVar5) {
          iVar3 = iVar5;
        }
        local_res8[0] = local_res8[0] >> ((byte)iVar3 & 0x1f);
        iVar3 = 1;
        if (1 < local_res8[0]) {
          iVar3 = local_res8[0];
        }
        uVar2 = iVar6 / iVar3;
        if ((int)uVar2 < 1) {
          iVar3 = 0;
        }
        else {
          iVar3 = 0x1f;
          if (uVar2 != 0) {
            for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          uVar8 = 0x1f - iVar3;
          iVar3 = 0x18 - uVar8;
          if (iVar3 != 0) {
            if (iVar3 < 0) {
              bVar1 = -(byte)iVar3 & 0x1f;
              uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
            }
            else {
              bVar1 = (byte)iVar3 & 0x1f;
              uVar2 = uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
            }
          }
          iVar3 = (int)((-(uint)((uVar8 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
                  ((byte)((int)uVar8 >> 1) & 0x1f);
          iVar3 = (int)((ulonglong)(uVar2 & 0x7f) * (longlong)iVar3 * 0xd5 >> 0x10) + iVar3;
        }
        uVar2 = iVar3 * 0x10;
        if (0 < param_3) {
          lVar7 = 0;
          do {
            uVar4 = (ulonglong)uVar2;
            uVar2 = uVar2 + ((iVar3 * -0x10 + 0x10000) / param_3) * 4;
            *(short *)(param_2 + lVar7 * 2) =
                 (short)((longlong)*(short *)(param_2 + lVar7 * 2) * uVar4 >> 0x10);
            if (0x10000 < (int)uVar2) break;
            lVar7 = lVar7 + 1;
          } while (lVar7 < param_3);
        }
      }
    }
    uVar9 = 0;
  }
  else {
    silk_sum_sqr_shift(param_1 + 0x10a0,param_1 + 0x10a4,param_2,param_3);
    uVar9 = 1;
  }
  *(undefined4 *)(param_1 + 0x1094) = uVar9;
  return;
}

// FUN_14f88a734 @ 14f88a734

void FUN_14f88a734(longlong param_1,longlong param_2)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar7 = 0;
  *(int *)(param_1 + 0x105c) = (int)*(char *)(param_1 + 0xae5);
  if (*(char *)(param_1 + 0xae5) == '\x02') {
    uVar4 = (ulonglong)*(int *)(param_1 + 0x914);
    lVar8 = 5;
    iVar6 = 0;
    if (0 < *(int *)(param_2 + -4 + uVar4 * 4)) {
      do {
        if (iVar6 == (int)uVar4) break;
        iVar9 = 0;
        psVar5 = (short *)(param_2 + ((longlong)(((int)uVar4 - iVar6) * 5) + 0x2b) * 2);
        lVar3 = lVar8;
        do {
          sVar1 = *psVar5;
          psVar5 = psVar5 + 1;
          iVar9 = iVar9 + sVar1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        uVar2 = *(uint *)(param_1 + 0x914);
        uVar4 = (ulonglong)uVar2;
        if (iVar7 < iVar9) {
          lVar3 = (longlong)((short)((short)uVar2 - (short)iVar6) * 5 + -5);
          *(undefined8 *)(param_1 + 0x1068) = *(undefined8 *)(param_2 + 0x60 + lVar3 * 2);
          *(undefined2 *)(param_1 + 0x1070) = *(undefined2 *)(param_2 + 0x68 + lVar3 * 2);
          *(int *)(param_1 + 0x1064) =
               *(int *)(param_2 + -4 + (longlong)(int)(uVar2 - iVar6) * 4) << 8;
          iVar7 = iVar9;
        }
        iVar6 = iVar6 + 1;
      } while (*(int *)(param_1 + 0x91c) * iVar6 < *(int *)(param_2 + -4 + (longlong)(int)uVar2 * 4)
              );
    }
    psVar5 = (short *)(param_1 + 0x1068);
    psVar5[0] = 0;
    psVar5[1] = 0;
    psVar5[2] = 0;
    psVar5[3] = 0;
    *(undefined2 *)(param_1 + 0x1070) = 0;
    *(short *)(param_1 + 0x106c) = (short)iVar7;
    if (iVar7 < 0x2ccd) {
      iVar6 = 1;
      if (1 < iVar7) {
        iVar6 = iVar7;
      }
      do {
        *psVar5 = (short)((int)*psVar5 * (int)(short)(0xb33400 / (longlong)iVar6) >> 10);
        psVar5 = psVar5 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else if (0x3ccd < iVar7) {
      iVar6 = 1;
      if (1 < iVar7) {
        iVar6 = iVar7;
      }
      do {
        *psVar5 = (short)((int)*psVar5 * (int)(short)(0xf334000 / (longlong)iVar6) >> 0xe);
        psVar5 = psVar5 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else {
    *(int *)(param_1 + 0x1064) = *(short *)(param_1 + 0x90c) * 0x1200;
    *(undefined8 *)(param_1 + 0x1068) = 0;
    *(undefined2 *)(param_1 + 0x1070) = 0;
  }
  memcpy((void *)(param_1 + 0x1072),(void *)(param_2 + 0x40),(longlong)*(int *)(param_1 + 0x924) * 2
        );
  *(undefined2 *)(param_1 + 0x10a8) = *(undefined2 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x10ac) =
       *(undefined8 *)(param_2 + 8 + (longlong)*(int *)(param_1 + 0x914) * 4);
  *(undefined4 *)(param_1 + 0x10bc) = *(undefined4 *)(param_1 + 0x91c);
  *(undefined4 *)(param_1 + 0x10b8) = *(undefined4 *)(param_1 + 0x914);
  return;
}


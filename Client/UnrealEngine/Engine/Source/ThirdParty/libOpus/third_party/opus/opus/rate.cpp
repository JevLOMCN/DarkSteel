// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// clt_compute_allocation @ 14f878dd4

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void clt_compute_allocation
               (longlong param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
               int param_6,undefined8 param_7,undefined8 param_8,int param_9,undefined8 param_10,
               undefined8 param_11,undefined8 param_12,undefined8 param_13,int param_14,int param_15
               ,undefined8 param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  int *piVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 auStack_1a0 [5];
  longlong alStack_178 [4];
  uint auStack_158 [2];
  undefined8 uStack_150;
  int aiStack_148 [2];
  undefined8 uStack_140;
  uint local_138 [2];
  undefined8 local_130;
  int local_128 [2];
  undefined8 local_120 [3];
  int local_108 [4];
  undefined8 local_f8;
  undefined4 local_f0 [6];
  uint local_d8 [4];
  int local_c8;
  uint local_c4;
  longlong local_c0;
  int local_b8;
  uint uStack_b4;
  int local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  int local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)local_d8;
  uVar25 = (ulonglong)(int)*(uint *)(param_1 + 8);
  uVar18 = (ulonglong)(int)param_2;
  local_b8 = param_3;
  local_c4 = param_2;
  iVar19 = 0;
  if (0 < param_9) {
    iVar19 = param_9;
  }
  local_a0 = param_1;
  local_d8[0] = *(uint *)(param_1 + 8);
  uStack_b4 = param_2;
  local_b0 = 0;
  local_8c = 0;
  if (7 < iVar19) {
    local_8c = 8;
  }
  local_d8[2] = 0;
  local_d8[1] = iVar19 - local_8c;
  if (param_14 == 2) {
    bVar13 = (&DAT_153513fb0)[(int)(param_3 - param_2)];
    local_d8[2] = (uint)bVar13;
    if (bVar13 == local_d8[1] || (int)(uint)bVar13 < (int)local_d8[1]) {
      iVar19 = local_d8[1] - bVar13;
      local_b0 = 0;
      if (7 < iVar19) {
        local_b0 = 8;
      }
      local_d8[1] = iVar19 - local_b0;
    }
    else {
      local_d8[2] = 0;
    }
  }
  uVar17 = local_d8[1];
  uVar14 = uVar25 * 4;
  uVar11 = uVar14 + 0xf;
  if (uVar11 <= uVar14) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_1a0[0] = 0x14f878ecc;
  lVar4 = -(uVar11 & 0xfffffffffffffff0);
  local_60 = (longlong)local_d8 + lVar4;
  uVar11 = uVar14 + 0xf;
  if (uVar11 <= uVar14) {
    uVar11 = 0xffffffffffffff0;
  }
  local_a8 = param_4;
  *(undefined8 *)((longlong)auStack_1a0 + lVar4) = 0x14f878ef0;
  lVar5 = -(uVar11 & 0xfffffffffffffff0);
  local_68 = (longlong)local_d8 + lVar5 + lVar4;
  uVar11 = uVar14 + 0xf;
  if (uVar11 <= uVar14) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_1a0 + lVar5 + lVar4) = 0x14f878f14;
  lVar6 = -(uVar11 & 0xfffffffffffffff0);
  uVar11 = uVar14 + 0xf;
  lVar2 = (longlong)local_d8 + lVar6 + lVar5 + lVar4;
  local_70 = lVar2;
  if (uVar11 <= uVar14) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_1a0 + lVar6 + lVar5 + lVar4) = 0x14f878f38;
  lVar20 = local_a0;
  lVar7 = -(uVar11 & 0xfffffffffffffff0);
  lVar23 = (longlong)local_d8 + lVar7 + lVar6 + lVar5 + lVar4;
  local_78 = lVar23;
  bVar13 = (byte)param_15;
  if ((int)param_2 < param_3) {
    piVar21 = (int *)(lVar23 + uVar18 * 4);
    local_d8[3] = (param_6 - param_15) + -5;
    param_3 = param_3 - param_2;
    lVar24 = (longlong)param_3;
    lVar12 = uVar18 * 2;
    do {
      param_3 = param_3 + -1;
      lVar1 = lVar12 + 2;
      iVar15 = ((((int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar1) -
                 (int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar12)) * 3 << (bVar13 & 0x1f)) <<
               3) >> 4;
      iVar19 = param_14 * 8;
      if (param_14 * 8 <= iVar15) {
        iVar19 = iVar15;
      }
      local_c0 = lVar1;
      *(int *)((lVar2 - lVar23) + (longlong)piVar21) = iVar19;
      lVar9 = local_c0;
      iVar19 = (int)((((int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar1) -
                      (int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar12)) * local_d8[3] *
                      param_3 << (bVar13 + 3 & 0x1f)) * param_14) >> 6;
      *piVar21 = iVar19;
      if ((int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar9) -
          (int)*(short *)(*(longlong *)(lVar20 + 0x20) + lVar12) << (bVar13 & 0x1f) == 1) {
        *piVar21 = iVar19 + param_14 * -8;
      }
      piVar21 = piVar21 + 1;
      lVar24 = lVar24 + -1;
      lVar12 = local_c0;
    } while (lVar24 != 0);
    uVar18 = (ulonglong)local_c4;
    uVar25 = (ulonglong)local_d8[0];
    param_3 = local_b8;
    uVar17 = local_d8[1];
  }
  lVar2 = local_a0;
  local_98 = (longlong)param_3;
  local_c8 = 1;
  local_d8[3] = *(int *)(local_a0 + 0x34) + -1;
  do {
    iVar19 = 0;
    local_58 = local_98;
    iVar15 = (int)(local_d8[3] + local_c8) >> 1;
    local_c0 = CONCAT44(local_c0._4_4_,iVar15);
    if ((int)uVar18 < param_3) {
      local_88 = *(longlong *)(local_a0 + 0x20);
      bVar8 = false;
      piVar21 = (int *)(local_a8 + local_98 * 4);
      local_40 = local_78 - local_a8;
      local_50 = local_70 - local_a8;
      local_80 = *(longlong *)(local_a0 + 0x38) + (longlong)(iVar15 * (int)uVar25);
      lVar20 = (longlong)(param_3 - (int)uVar18);
      lVar23 = local_98;
      do {
        lVar12 = lVar23 * 2;
        piVar21 = piVar21 + -1;
        lVar23 = lVar23 + -1;
        iVar16 = (int)(((int)*(short *)(local_88 + lVar12) - (int)*(short *)(local_88 + lVar23 * 2))
                       * (uint)*(byte *)(lVar23 + local_80) * param_14 << (bVar13 & 0x1f)) >> 2;
        if ((0 < iVar16) &&
           (iVar16 = iVar16 + *(int *)((local_78 - local_a8) + (longlong)piVar21), iVar16 < 0)) {
          iVar16 = 0;
        }
        iVar16 = *piVar21 + iVar16;
        if ((*(int *)((local_70 - local_a8) + (longlong)piVar21) <= iVar16) || (bVar8)) {
          bVar8 = true;
          if (*(int *)((longlong)piVar21 + (param_5 - local_a8)) <= iVar16) {
            iVar16 = *(int *)((longlong)piVar21 + (param_5 - local_a8));
          }
          iVar19 = iVar19 + iVar16;
        }
        else if (param_14 << 3 <= iVar16) {
          iVar19 = iVar19 + param_14 * 8;
        }
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uVar18 = (ulonglong)local_c4;
      param_3 = local_b8;
      uVar17 = local_d8[1];
    }
    uVar25 = (ulonglong)local_d8[0];
    iVar16 = iVar15 + -1;
    if (iVar19 <= (int)uVar17) {
      iVar16 = local_d8[3];
    }
    local_d8[3] = iVar16;
    iVar16 = local_c8;
    if (iVar19 <= (int)uVar17) {
      iVar16 = iVar15 + 1;
    }
    local_c8 = iVar16;
  } while (iVar16 <= (int)local_d8[3]);
  iVar19 = (int)uVar18;
  uVar25 = uVar18 & 0xffffffff;
  if (iVar19 < param_3) {
    local_a8 = local_a8 - local_78;
    iVar15 = (iVar16 + -1) * local_d8[0];
    piVar21 = (int *)(local_78 + (longlong)iVar19 * 4);
    lVar20 = param_5 - local_78;
    lVar12 = local_60 - local_78;
    local_80 = lVar12;
    local_88 = local_68 - local_78;
    local_c0 = CONCAT44(local_c0._4_4_,iVar15);
    lVar23 = (longlong)iVar19 * 2;
    do {
      local_98 = lVar23 + 2;
      iVar22 = (int)*(short *)(*(longlong *)(lVar2 + 0x20) + lVar23 + 2) -
               (int)*(short *)(*(longlong *)(lVar2 + 0x20) + lVar23);
      uVar17 = (uint)uVar25;
      iVar19 = (int)((uint)*(byte *)((longlong)(int)(iVar15 + uVar17) + *(longlong *)(lVar2 + 0x38))
                     * iVar22 * param_14 << (bVar13 & 0x1f)) >> 2;
      if (iVar16 < *(int *)(lVar2 + 0x34)) {
        iVar15 = (int)((uint)*(byte *)((longlong)(int)(iVar16 * local_d8[0] + uVar17) +
                                      *(longlong *)(lVar2 + 0x38)) * iVar22 * param_14 <<
                      (bVar13 & 0x1f)) >> 2;
      }
      else {
        iVar15 = *(int *)((longlong)piVar21 + lVar20);
      }
      iVar22 = iVar19;
      if ((0 < iVar19) && (iVar22 = iVar19 + *piVar21, iVar19 + *piVar21 < 0)) {
        iVar22 = 0;
      }
      iVar19 = iVar15;
      if ((0 < iVar15) && (iVar19 = iVar15 + *piVar21, iVar15 + *piVar21 < 0)) {
        iVar19 = 0;
      }
      if (0 < iVar16 + -1) {
        iVar22 = iVar22 + *(int *)(local_a8 + (longlong)piVar21);
      }
      iVar3 = *(int *)(local_a8 + (longlong)piVar21);
      *(int *)(lVar12 + (longlong)piVar21) = iVar22;
      uVar10 = uVar17;
      if (iVar3 < 1) {
        uVar10 = uStack_b4;
      }
      iVar15 = (int)local_c0;
      uVar11 = (ulonglong)uVar10;
      uStack_b4 = uVar10;
      iVar19 = (iVar3 - iVar22) + iVar19;
      if (iVar19 < 0) {
        iVar19 = 0;
      }
      uVar25 = (ulonglong)(uVar17 + 1);
      *(int *)(local_88 + (longlong)piVar21) = iVar19;
      piVar21 = piVar21 + 1;
      lVar23 = local_98;
    } while ((int)(uVar17 + 1) < param_3);
    uVar18 = (ulonglong)local_c4;
    uVar17 = local_d8[1];
  }
  else {
    uVar11 = uVar18 & 0xffffffff;
  }
  uVar10 = local_d8[2];
  *(undefined4 *)((longlong)local_f0 + lVar7 + lVar6 + lVar5 + lVar4 + 0x10) = param_19;
  *(undefined4 *)((longlong)local_f0 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = param_18;
  *(undefined4 *)((longlong)local_f0 + lVar7 + lVar6 + lVar5 + lVar4) = param_17;
  *(undefined8 *)((longlong)&local_f8 + lVar7 + lVar6 + lVar5 + lVar4) = param_16;
  *(int *)((longlong)local_108 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = param_15;
  *(int *)((longlong)local_108 + lVar7 + lVar6 + lVar5 + lVar4) = param_14;
  *(undefined8 *)((longlong)local_120 + lVar7 + lVar6 + lVar5 + lVar4 + 0x10) = param_13;
  *(undefined8 *)((longlong)local_120 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = param_12;
  *(undefined8 *)((longlong)local_120 + lVar7 + lVar6 + lVar5 + lVar4) = param_11;
  *(int *)((longlong)local_128 + lVar7 + lVar6 + lVar5 + lVar4) = local_b0;
  *(undefined8 *)((longlong)&local_130 + lVar7 + lVar6 + lVar5 + lVar4) = param_8;
  *(uint *)((longlong)local_138 + lVar7 + lVar6 + lVar5 + lVar4) = uVar10;
  *(undefined8 *)((longlong)&uStack_140 + lVar7 + lVar6 + lVar5 + lVar4) = param_7;
  *(int *)((longlong)aiStack_148 + lVar7 + lVar6 + lVar5 + lVar4) = local_8c;
  *(undefined8 *)((longlong)&uStack_150 + lVar7 + lVar6 + lVar5 + lVar4) = param_10;
  *(uint *)((longlong)auStack_158 + lVar7 + lVar6 + lVar5 + lVar4) = uVar17;
  *(longlong *)((longlong)alStack_178 + lVar7 + lVar6 + lVar5 + lVar4 + 0x18) = param_5;
  *(longlong *)((longlong)alStack_178 + lVar7 + lVar6 + lVar5 + lVar4 + 0x10) = local_70;
  *(longlong *)((longlong)alStack_178 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = local_68;
  *(longlong *)((longlong)alStack_178 + lVar7 + lVar6 + lVar5 + lVar4) = local_60;
  *(undefined8 *)((longlong)auStack_1a0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14f8793cc;
  FUN_14f879408(lVar2,uVar18 & 0xffffffff,param_3,uVar11);
  *(undefined8 *)((longlong)auStack_1a0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14f8793db;
  return;
}

// FUN_14f879408 @ 14f879408

int FUN_14f879408(longlong param_1,uint param_2,int param_3,int param_4,longlong param_5,
                 longlong param_6,longlong param_7,longlong param_8,int param_9,int *param_10,
                 int param_11,int *param_12,uint param_13,int *param_14,int param_15,
                 longlong param_16,longlong param_17,longlong param_18,int param_19,int param_20,
                 undefined8 param_21,int param_22,int param_23,int param_24)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int local_88;
  longlong local_80;
  
  iVar9 = 0;
  iVar3 = param_19 * 8;
  iVar12 = 0x40;
  bVar1 = 1 < param_19;
  lVar18 = (longlong)param_3;
  local_80 = 6;
  uVar13 = (ulonglong)(int)param_2;
  do {
    iVar14 = 0;
    iVar6 = iVar12 + iVar9 >> 1;
    bVar2 = false;
    if ((int)param_2 < param_3) {
      piVar7 = (int *)(param_5 + lVar18 * 4);
      uVar10 = (ulonglong)(param_3 - param_2);
      do {
        piVar7 = piVar7 + -1;
        iVar4 = (*(int *)((param_6 - param_5) + (longlong)piVar7) * iVar6 >> 6) + *piVar7;
        if ((*(int *)((longlong)piVar7 + (param_7 - param_5)) <= iVar4) || (bVar2)) {
          bVar2 = true;
          if (*(int *)((param_8 - param_5) + (longlong)piVar7) <= iVar4) {
            iVar4 = *(int *)((param_8 - param_5) + (longlong)piVar7);
          }
          iVar14 = iVar14 + iVar4;
        }
        else if (iVar3 <= iVar4) {
          iVar14 = iVar14 + iVar3;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    bVar2 = false;
    iVar4 = iVar6;
    if (iVar14 <= param_9) {
      iVar4 = iVar12;
      iVar9 = iVar6;
    }
    iVar12 = iVar4;
    local_80 = local_80 + -1;
  } while (local_80 != 0);
  iVar12 = 0;
  if ((int)param_2 < param_3) {
    piVar7 = (int *)(param_5 + lVar18 * 4);
    uVar10 = (ulonglong)(param_3 - param_2);
    do {
      piVar7 = piVar7 + -1;
      iVar6 = (*(int *)((longlong)piVar7 + (param_6 - param_5)) * iVar9 >> 6) + *piVar7;
      if ((*(int *)((longlong)piVar7 + (param_7 - param_5)) <= iVar6) || (bVar2)) {
        bVar2 = true;
        iVar14 = iVar6;
      }
      else {
        iVar14 = iVar3;
        if (iVar6 < iVar3) {
          iVar14 = 0;
        }
      }
      iVar6 = *(int *)((longlong)piVar7 + (param_8 - param_5));
      if (iVar14 < iVar6) {
        iVar6 = iVar14;
      }
      iVar12 = iVar12 + iVar6;
      *(int *)((param_16 - param_5) + (longlong)piVar7) = iVar6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  iVar9 = param_3 + -1;
  local_88 = param_3;
  if (param_4 < iVar9) {
    local_80 = (longlong)iVar9;
    do {
      lVar11 = *(longlong *)(param_1 + 0x20);
      iVar14 = (int)*(short *)(lVar11 + lVar18 * 2);
      iVar4 = (int)*(short *)(lVar11 + uVar13 * 2);
      uVar15 = iVar14 - iVar4;
      uVar17 = (uint)(param_9 - iVar12) / uVar15;
      iVar6 = (int)*(short *)(lVar11 + local_80 * 2);
      iVar4 = ((iVar4 - uVar15 * uVar17) - iVar6) + (param_9 - iVar12);
      iVar14 = iVar14 - iVar6;
      piVar7 = (int *)(param_16 + local_80 * 4);
      iVar6 = *piVar7;
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      iVar16 = iVar14 * uVar17 + iVar6 + iVar4;
      iVar4 = *(int *)(param_7 + local_80 * 4);
      if (iVar4 <= iVar3 + 8) {
        iVar4 = iVar3 + 8;
      }
      if (iVar4 <= iVar16) {
        if (param_22 == 0) {
          iVar6 = ec_dec_bit_logp(param_21);
          if (iVar6 != 0) goto LAB_14f879814;
        }
        else {
          if (lVar18 < 0x12) {
            iVar6 = 0;
          }
          else {
            iVar6 = 9;
            if (iVar9 < param_23) {
              iVar6 = 7;
            }
          }
          if ((local_88 <= (int)(param_2 + 2)) ||
             ((((iVar6 * iVar14 << ((byte)param_20 & 0x1f)) << 3) >> 4 < iVar16 &&
              (iVar9 <= param_24)))) {
            ec_enc_bit_logp(param_21);
            goto LAB_14f879814;
          }
          ec_enc_bit_logp(param_21,0,1);
        }
        iVar12 = iVar12 + 8;
        iVar16 = iVar16 + -8;
        iVar6 = *piVar7;
      }
      iVar6 = iVar6 + param_13;
      if (0 < (int)param_13) {
        param_13 = (uint)(byte)(&DAT_153513fb0)[local_80 - uVar13];
      }
      iVar6 = (iVar12 - iVar6) + param_13;
      iVar12 = iVar3;
      if (iVar16 < iVar3) {
        iVar12 = 0;
      }
      local_88 = local_88 + -1;
      *piVar7 = iVar12;
      iVar9 = iVar9 + -1;
      iVar12 = iVar6 + iVar3;
      if (iVar16 < iVar3) {
        iVar12 = iVar6;
      }
      local_80 = lVar18 + -2;
      lVar18 = lVar18 + -1;
    } while (param_4 < iVar9);
  }
  param_9 = param_9 + param_11;
LAB_14f879814:
  if (local_88 <= (int)param_2) {
    celt_fatal("assertion failed: codedBands > start");
  }
  iVar9 = 0;
  if ((int)param_13 < 1) {
    *param_12 = 0;
  }
  else if (param_22 == 0) {
    iVar9 = ec_dec_uint(param_21);
    iVar9 = iVar9 + param_2;
    *param_12 = iVar9;
  }
  else {
    iVar9 = *param_12;
    if (local_88 <= *param_12) {
      iVar9 = local_88;
    }
    *param_12 = iVar9;
    ec_enc_uint();
    iVar9 = *param_12;
  }
  iVar3 = param_9 + param_15;
  iVar6 = 0;
  if ((int)param_2 < iVar9) {
    iVar3 = param_9;
    iVar6 = param_15;
  }
  if (iVar6 < 1) {
    *param_14 = 0;
  }
  else if (param_22 == 0) {
    iVar9 = ec_dec_bit_logp(param_21);
    *param_14 = iVar9;
  }
  else {
    ec_enc_bit_logp(param_21,*param_14,1);
  }
  lVar18 = (longlong)local_88;
  uVar17 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + lVar18 * 2) -
           (int)*(short *)(*(longlong *)(param_1 + 0x20) + uVar13 * 2);
  uVar15 = (uint)(iVar3 - iVar12) / uVar17;
  iVar12 = (iVar3 - iVar12) - uVar17 * uVar15;
  uVar10 = uVar13;
  if ((longlong)uVar13 < lVar18) {
    do {
      piVar7 = (int *)(param_16 + uVar10 * 4);
      *piVar7 = *piVar7 + ((int)*(short *)(*(longlong *)(param_1 + 0x20) + 2 + uVar10 * 2) -
                          (int)*(short *)(*(longlong *)(param_1 + 0x20) + uVar10 * 2)) * uVar15;
      uVar10 = uVar10 + 1;
      uVar8 = uVar13;
    } while ((longlong)uVar10 < lVar18);
    do {
      iVar3 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + 2 + uVar8 * 2) -
              (int)*(short *)(*(longlong *)(param_1 + 0x20) + uVar8 * 2);
      iVar9 = iVar12;
      if (iVar3 <= iVar12) {
        iVar9 = iVar3;
      }
      piVar7 = (int *)(param_16 + uVar8 * 4);
      *piVar7 = *piVar7 + iVar9;
      iVar12 = iVar12 - iVar9;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < lVar18);
  }
  iVar12 = 0;
  if ((longlong)uVar13 < lVar18) {
    piVar7 = (int *)(param_16 + uVar13 * 4);
    lVar18 = param_18 - param_16;
    lVar11 = param_17 - param_16;
    uVar10 = uVar13;
    iVar9 = 0;
    do {
      iVar3 = *piVar7;
      if (iVar3 < 0) {
        celt_fatal("assertion failed: bits[j] >= 0","../../../third_party/opus/src/celt/rate.c",
                   0x1ba);
        iVar3 = *piVar7;
      }
      iVar3 = iVar3 + iVar9;
      iVar6 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + 2 + uVar13 * 2) -
              (int)*(short *)(*(longlong *)(param_1 + 0x20) + uVar13 * 2) << ((byte)param_20 & 0x1f)
      ;
      if (iVar6 < 2) {
        iVar12 = iVar3 + param_19 * -8;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        *piVar7 = iVar3 - iVar12;
        *(undefined4 *)((longlong)piVar7 + lVar11) = 0;
        *(undefined4 *)((longlong)piVar7 + lVar18) = 1;
      }
      else {
        iVar12 = iVar3 - *(int *)((longlong)piVar7 + lVar18 + (param_8 - param_18));
        iVar14 = 0;
        if (iVar12 < 1) {
          iVar12 = iVar14;
        }
        iVar3 = iVar3 - iVar12;
        *piVar7 = iVar3;
        if ((((param_19 == 2) && (2 < iVar6)) && (*param_14 == 0)) && ((int)uVar10 < *param_12)) {
          iVar14 = 1;
        }
        uVar15 = iVar6 * param_19 + iVar14;
        iVar14 = ((int)*(short *)(*(longlong *)(param_1 + 0x40) + uVar13 * 2) + param_20 * 8) *
                 uVar15;
        iVar4 = (iVar14 >> 1) + uVar15 * -0x15;
        if (iVar6 == 2) {
          iVar4 = iVar4 + ((int)(uVar15 * 8) >> 2);
        }
        if (iVar3 + iVar4 < (int)(uVar15 * 0x10)) {
          iVar14 = iVar14 >> 2;
LAB_14f879adb:
          iVar4 = iVar4 + iVar14;
        }
        else if (iVar3 + iVar4 < (int)(uVar15 * 0x18)) {
          iVar14 = iVar14 >> 3;
          goto LAB_14f879adb;
        }
        uVar5 = iVar3 + uVar15 * 4 + iVar4;
        uVar17 = 0;
        if (-1 < (int)uVar5) {
          uVar17 = uVar5;
        }
        iVar3 = (int)((ulonglong)uVar17 / (ulonglong)uVar15 >> 3);
        *(int *)((longlong)piVar7 + lVar11) = iVar3;
        if (*piVar7 >> 3 < iVar3 * param_19) {
          iVar3 = (*piVar7 >> bVar1) >> 3;
          *(int *)((longlong)piVar7 + lVar11) = iVar3;
        }
        iVar6 = 8;
        if (iVar3 < 8) {
          iVar6 = iVar3;
        }
        *(int *)((longlong)piVar7 + lVar11) = iVar6;
        *(uint *)((longlong)piVar7 + lVar18) = (uint)(*piVar7 + iVar4 <= (int)(uVar15 * 8 * iVar6));
        *piVar7 = *piVar7 + param_19 * *(int *)((longlong)piVar7 + lVar11) * -8;
      }
      if (0 < iVar12) {
        iVar6 = 8 - *(int *)((longlong)piVar7 + lVar11);
        iVar3 = iVar12 >> bVar1 + 3;
        if (iVar6 <= iVar3) {
          iVar3 = iVar6;
        }
        *(int *)((longlong)piVar7 + lVar11) = iVar3 + *(int *)((longlong)piVar7 + lVar11);
        iVar9 = iVar12 - iVar9;
        iVar12 = iVar12 + iVar3 * param_19 * -8;
        *(uint *)((longlong)piVar7 + lVar18) = (uint)(iVar9 <= iVar3 * param_19 * 8);
      }
      if (*piVar7 < 0) {
        celt_fatal("assertion failed: bits[j] >= 0","../../../third_party/opus/src/celt/rate.c",
                   0x201);
      }
      if (*(int *)((longlong)piVar7 + lVar11) < 0) {
        celt_fatal("assertion failed: ebits[j] >= 0","../../../third_party/opus/src/celt/rate.c",
                   0x202);
      }
      param_2 = (int)uVar10 + 1;
      uVar10 = (ulonglong)param_2;
      uVar13 = uVar13 + 1;
      piVar7 = piVar7 + 1;
      iVar9 = iVar12;
    } while ((longlong)uVar13 < (longlong)local_88);
  }
  *param_10 = iVar12;
  if ((int)param_2 < param_3) {
    uVar13 = (ulonglong)(param_3 - param_2);
    piVar7 = (int *)(param_16 + (longlong)(int)param_2 * 4);
    do {
      iVar12 = (*piVar7 >> bVar1) >> 3;
      *(int *)((longlong)piVar7 + (param_17 - param_16)) = iVar12;
      if (iVar12 * param_19 * 8 != *piVar7) {
        celt_fatal("assertion failed: C*ebits[j]<<BITRES == bits[j]",
                   "../../../third_party/opus/src/celt/rate.c",0x20c);
      }
      *piVar7 = 0;
      *(uint *)((longlong)piVar7 + (param_18 - param_16)) =
           (uint)(*(int *)((longlong)piVar7 + (param_17 - param_16)) < 1);
      piVar7 = piVar7 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return local_88;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// clt_mdct_backward_c @ 14f877a8c

void clt_mdct_backward_c(int *param_1,float *param_2,float *param_3,longlong param_4,int param_5,
                        uint param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  short *psVar17;
  
  iVar10 = *param_1;
  pfVar8 = *(float **)(param_1 + 10);
  if (0 < (int)param_6) {
    uVar14 = (ulonglong)param_6;
    do {
      iVar10 = iVar10 >> 1;
      pfVar8 = pfVar8 + iVar10;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  lVar7 = *(longlong *)(param_1 + (longlong)(int)param_6 * 2 + 2);
  iVar11 = iVar10 >> 2;
  lVar9 = (longlong)iVar11;
  pfVar16 = param_3 + ((longlong)param_5 >> 1);
  pfVar13 = param_2 + ((iVar10 >> 1) + -1) * param_7;
  psVar17 = *(short **)(lVar7 + 0x30);
  if (0 < iVar11) {
    pfVar12 = pfVar8;
    lVar15 = lVar9;
    do {
      fVar1 = *pfVar12;
      fVar2 = *param_2;
      fVar3 = *pfVar13;
      fVar4 = pfVar12[lVar9];
      param_2 = param_2 + param_7 * 2;
      sVar6 = *psVar17;
      pfVar13 = pfVar13 + -(longlong)(param_7 * 2);
      psVar17 = psVar17 + 1;
      pfVar12 = pfVar12 + 1;
      pfVar16[(longlong)(sVar6 * 2) + 1] = fVar2 * fVar4 + fVar1 * fVar3;
      pfVar16[sVar6 * 2] = fVar1 * fVar2 - fVar3 * fVar4;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  opus_fft_impl(lVar7,pfVar16);
  lVar7 = (longlong)(iVar10 >> 1);
  lVar15 = (longlong)(iVar11 + 1) >> 1;
  pfVar13 = param_3 + ((longlong)param_5 >> 1) + -2 + lVar7;
  if (0 < lVar15) {
    pfVar12 = pfVar8 + lVar7 + -1;
    do {
      fVar1 = *pfVar8;
      fVar2 = pfVar8[lVar9];
      fVar3 = *pfVar16;
      pfVar8 = pfVar8 + 1;
      fVar4 = pfVar13[1];
      fVar5 = *pfVar13;
      *pfVar16 = fVar2 * *pfVar16 + fVar1 * pfVar16[1];
      pfVar13[1] = fVar2 * pfVar16[1] - fVar1 * fVar3;
      fVar1 = pfVar12[lVar9 - lVar7];
      fVar2 = *pfVar12;
      pfVar12 = pfVar12 + -1;
      *pfVar13 = fVar2 * fVar5 + fVar1 * fVar4;
      pfVar13 = pfVar13 + -2;
      pfVar16[1] = fVar2 * fVar4 - fVar1 * fVar5;
      pfVar16 = pfVar16 + 2;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  pfVar8 = param_3 + (longlong)param_5 + -1;
  if (0 < param_5 / 2) {
    lVar7 = param_4 - (longlong)param_3;
    lVar9 = (longlong)param_5 * 4 - (longlong)pfVar8;
    uVar14 = (ulonglong)(uint)(param_5 / 2);
    do {
      fVar1 = *pfVar8;
      fVar2 = *param_3;
      fVar3 = *(float *)(lVar9 + param_4 + -4 + (longlong)pfVar8);
      fVar4 = *(float *)(lVar7 + (longlong)param_3);
      *param_3 = fVar3 * fVar2 - fVar4 * fVar1;
      param_3 = param_3 + 1;
      *pfVar8 = fVar4 * fVar2 + fVar3 * fVar1;
      pfVar8 = pfVar8 + -1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}

// clt_mdct_forward_c @ 14f877d08

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void clt_mdct_forward_c(int *param_1,longlong param_2,float *param_3,longlong param_4,int param_5,
                       uint param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  float *pfVar18;
  float fVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  float fVar23;
  float *pfVar24;
  ulonglong uVar25;
  undefined8 auStack_90 [5];
  float local_68 [2];
  longlong local_60;
  float *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  float *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)local_68;
  iVar15 = *param_1;
  pfVar16 = *(float **)(param_1 + 10);
  local_50 = *(longlong *)(param_1 + (longlong)(int)param_6 * 2 + 2);
  fVar2 = *(float *)(local_50 + 4);
  if (0 < (int)param_6) {
    uVar10 = (ulonglong)param_6;
    do {
      iVar15 = iVar15 >> 1;
      pfVar16 = pfVar16 + iVar15;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  fVar23 = (float)(iVar15 >> 1);
  lVar12 = (longlong)(int)fVar23;
  iVar15 = iVar15 >> 2;
  uVar25 = lVar12 * 4;
  uVar10 = uVar25 + 0xf;
  if (uVar10 <= uVar25) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_90[0] = 0x14f877dae;
  lVar6 = -(uVar10 & 0xfffffffffffffff0);
  lVar17 = (longlong)iVar15;
  local_58 = (float *)((longlong)local_68 + lVar6);
  uVar10 = lVar17 * 8 + 0xf;
  if (uVar10 <= (ulonglong)(lVar17 * 8)) {
    uVar10 = 0xffffffffffffff0;
  }
  local_68[1] = fVar23;
  local_60 = param_4;
  local_38 = param_3;
  *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x14f877ddc;
  lVar8 = local_50;
  lVar7 = -(uVar10 & 0xfffffffffffffff0);
  local_40 = (longlong)param_5;
  lVar20 = local_40 >> 1;
  pfVar24 = (float *)((longlong)local_68 + lVar7 + lVar6);
  local_68[0] = (float)(param_5 + 3 >> 2);
  pfVar14 = (float *)(param_2 + lVar20 * 4);
  pfVar18 = (float *)(param_2 + (lVar20 + -1 + lVar12) * 4);
  pfVar13 = local_58;
  fVar19 = 0.0;
  if (0 < (int)local_68[0]) {
    local_48 = (uVar25 - local_60) + param_2;
    pfVar11 = (float *)((longlong)pfVar18 + local_60 + (lVar12 * -4 - param_2));
    pfVar21 = (float *)(local_60 + lVar20 * 4);
    uVar10 = (ulonglong)(uint)local_68[0];
    do {
      fVar23 = *pfVar18;
      pfVar18 = pfVar18 + -2;
      *pfVar13 = *(float *)((longlong)pfVar21 + local_48) * *pfVar11 + fVar23 * *pfVar21;
      fVar23 = *pfVar14;
      pfVar14 = pfVar14 + 2;
      pfVar1 = (float *)((longlong)pfVar11 + (param_2 - local_60));
      fVar19 = *pfVar21;
      pfVar21 = pfVar21 + 2;
      fVar3 = *pfVar11;
      pfVar11 = pfVar11 + -2;
      pfVar13[1] = fVar23 * fVar19 - *pfVar1 * fVar3;
      pfVar13 = pfVar13 + 2;
      uVar10 = uVar10 - 1;
      fVar23 = local_68[1];
      fVar19 = local_68[0];
    } while (uVar10 != 0);
  }
  if ((int)fVar19 < iVar15 - (int)local_68[0]) {
    uVar9 = (iVar15 - (int)local_68[0]) - (int)fVar19;
    uVar10 = (ulonglong)uVar9;
    fVar19 = (float)((int)fVar19 + uVar9);
    do {
      fVar3 = *pfVar18;
      pfVar18 = pfVar18 + -2;
      *pfVar13 = fVar3;
      fVar3 = *pfVar14;
      pfVar14 = pfVar14 + 2;
      pfVar13[1] = fVar3;
      pfVar13 = pfVar13 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if ((int)fVar19 < iVar15) {
    lVar20 = local_60 - (longlong)pfVar14;
    lVar22 = local_60 + (local_40 * 4 - (longlong)pfVar18);
    uVar10 = (ulonglong)(uint)(iVar15 - (int)fVar19);
    do {
      *pfVar13 = *pfVar18 * *(float *)(lVar22 + -4 + (longlong)pfVar18) -
                 pfVar14[-lVar12] * *(float *)(lVar20 + (longlong)pfVar14);
      pfVar21 = pfVar18 + lVar12;
      fVar19 = *pfVar14;
      pfVar11 = (float *)(lVar20 + (longlong)pfVar14);
      pfVar14 = pfVar14 + 2;
      pfVar1 = (float *)(lVar22 + -4 + (longlong)pfVar18);
      pfVar18 = pfVar18 + -2;
      pfVar13[1] = *pfVar21 * *pfVar11 + fVar19 * *pfVar1;
      pfVar13 = pfVar13 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (0 < lVar17) {
    lVar12 = 0;
    pfVar14 = pfVar16;
    pfVar18 = local_58;
    do {
      fVar23 = *pfVar18;
      fVar19 = pfVar18[1];
      fVar3 = *pfVar14;
      pfVar18 = pfVar18 + 2;
      fVar4 = pfVar14[lVar17];
      pfVar13 = pfVar14 + lVar17;
      lVar20 = (longlong)*(short *)(*(longlong *)(lVar8 + 0x30) + lVar12 * 2);
      lVar12 = lVar12 + 1;
      fVar5 = *pfVar14;
      pfVar14 = pfVar14 + 1;
      pfVar24[lVar20 * 2] = (fVar23 * fVar3 - fVar19 * *pfVar13) * fVar2;
      *(float *)((longlong)local_68 + lVar20 * 8 + lVar7 + lVar6 + 4) =
           (fVar23 * fVar4 + fVar19 * fVar5) * fVar2;
      fVar23 = local_68[1];
    } while (lVar12 < lVar17);
  }
  *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x14f877fc8;
  opus_fft_impl(lVar8,pfVar24);
  pfVar14 = local_38 + ((int)fVar23 + -1) * param_7;
  if (0 < lVar17) {
    lVar12 = lVar17;
    do {
      fVar2 = pfVar24[1];
      fVar23 = *pfVar24;
      fVar19 = *pfVar16;
      fVar3 = pfVar16[lVar17];
      pfVar24 = pfVar24 + 2;
      pfVar16 = pfVar16 + 1;
      *local_38 = fVar2 * fVar3 - fVar23 * fVar19;
      local_38 = local_38 + param_7 * 2;
      *pfVar14 = fVar23 * fVar3 + fVar2 * fVar19;
      pfVar14 = pfVar14 + -(longlong)(param_7 * 2);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(undefined8 *)((longlong)auStack_90 + lVar7 + lVar6) = 0x14f87804c;
  return;
}


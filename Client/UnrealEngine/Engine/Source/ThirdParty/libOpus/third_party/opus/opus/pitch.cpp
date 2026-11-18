// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 5

// celt_pitch_xcorr_c @ 14f87813c

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void celt_pitch_xcorr_c(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                       int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = param_4;
  if (param_5 < 1) {
    celt_fatal("assertion failed: max_pitch>0","../../../third_party/opus/src/celt/pitch.c",0xfb);
  }
  uVar6 = local_68;
  iVar4 = 0;
  if (0 < param_5 + -3) {
    uVar1 = (param_5 - 4U >> 2) + 1;
    uVar2 = (ulonglong)uVar1;
    iVar4 = uVar1 * 4;
    puVar3 = (undefined4 *)(param_3 + 8);
    lVar5 = param_2;
    do {
      local_60 = 0;
      uStack_58 = 0;
      xcorr_kernel_sse(param_1,lVar5,&local_60,uVar6);
      lVar5 = lVar5 + 0x10;
      puVar3[-2] = (undefined4)local_60;
      puVar3[-1] = local_60._4_4_;
      *puVar3 = (undefined4)uStack_58;
      puVar3[1] = uStack_58._4_4_;
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 4;
      param_4 = local_68;
    } while (uVar2 != 0);
  }
  if (iVar4 < param_5) {
    uVar2 = (ulonglong)(uint)(param_5 - iVar4);
    puVar3 = (undefined4 *)(param_3 + (longlong)iVar4 * 4);
    param_2 = param_2 + (longlong)iVar4 * 4;
    do {
      uVar6 = celt_inner_prod_sse(param_1,param_2,param_4);
      param_2 = param_2 + 4;
      *puVar3 = uVar6;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// FUN_14f87824c @ 14f87824c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f87824c(float *param_1,float *param_2,uint param_3,int param_4,int *param_5)

{
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = __real_bf800000;
  fVar6 = __real_3f800000;
  iVar5 = 0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  *param_5 = 0;
  param_5[1] = 1;
  if (0 < (int)param_3) {
    uVar2 = (ulonglong)param_3;
    pfVar1 = param_2;
    do {
      fVar7 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      fVar6 = fVar7 * fVar7 + fVar6;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (0 < param_4) {
    lVar3 = (longlong)(int)param_3 * 4 - (longlong)param_1;
    lVar4 = (longlong)param_2 - (longlong)param_1;
    fVar7 = fVar10;
    do {
      fVar9 = fVar7;
      if ((__real_00000000 < *param_1) &&
         (fVar8 = *param_1 * ___real_2b8cbccc, fVar8 = fVar8 * fVar8,
         fVar10 * fVar6 < fVar11 * fVar8)) {
        if (fVar12 * fVar8 <= fVar7 * fVar6) {
          param_5[1] = iVar5;
          fVar10 = fVar8;
          fVar11 = fVar6;
        }
        else {
          param_5[1] = *param_5;
          *param_5 = iVar5;
          fVar9 = fVar8;
          fVar10 = fVar7;
          fVar11 = fVar12;
          fVar12 = fVar6;
        }
      }
      fVar7 = *(float *)(lVar3 + (longlong)param_2 + (longlong)param_1);
      iVar5 = iVar5 + 1;
      fVar8 = *(float *)(lVar4 + (longlong)param_1);
      param_1 = param_1 + 1;
      fVar7 = (fVar7 * fVar7 - fVar8 * fVar8) + fVar6;
      fVar6 = __real_3f800000;
      if (__real_3f800000 <= fVar7) {
        fVar6 = fVar7;
      }
      fVar7 = fVar9;
    } while (iVar5 < param_4);
  }
  return;
}

// pitch_downsample @ 14f878374

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pitch_downsample(longlong *param_1,float *param_2,int param_3,int param_4,undefined4 param_5)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float *pfVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  uint local_d0;
  undefined4 local_c8;
  float local_b8 [4];
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  ulonglong local_90;
  
  fVar9 = __real_3f000000;
  fVar13 = __real_3f800000;
  local_90 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar6 = param_3 >> 1;
  lVar7 = (longlong)(int)uVar6;
  if (1 < lVar7) {
    lVar2 = *param_1;
    lVar3 = 1;
    pfVar5 = (float *)(lVar2 + 0xc);
    do {
      pfVar1 = pfVar5 + -2;
      fVar8 = *pfVar5;
      pfVar5 = pfVar5 + 2;
      param_2[lVar3] = ((*pfVar1 + fVar8) * fVar9 + *(float *)(lVar2 + lVar3 * 8)) * fVar9;
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar7);
  }
  fVar8 = (((float *)*param_1)[1] * fVar9 + *(float *)*param_1) * fVar9;
  *param_2 = fVar8;
  if (param_4 == 2) {
    if (1 < lVar7) {
      lVar2 = param_1[1];
      lVar3 = 1;
      pfVar5 = (float *)(lVar2 + 0xc);
      do {
        pfVar1 = pfVar5 + -2;
        fVar8 = *pfVar5;
        pfVar5 = pfVar5 + 2;
        param_2[lVar3] =
             ((*pfVar1 + fVar8) * fVar9 + *(float *)(lVar2 + lVar3 * 8)) * fVar9 + param_2[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar3 < lVar7);
      fVar8 = *param_2;
    }
    *param_2 = (((float *)param_1[1])[1] * fVar9 + *(float *)param_1[1]) * fVar9 + fVar8;
  }
  local_c8 = param_5;
  local_d8 = 4;
  local_d0 = uVar6;
  _celt_autocorr(param_2,&local_a8,0,0);
  local_a8 = local_a8 * __real_3f800347;
  fVar9 = (float)(___xmm_00000001000000010000000100000001 +
                 (int)__xmm_00000003000000020000000100000000) *
          ___xmm_3c03126f3c03126f3c03126f3c03126f;
  fVar8 = (float)(_UNK_150631da4 + __xmm_00000003000000020000000100000000._4_4_) * _UNK_153513fa4;
  fVar10 = (float)(_UNK_150631da8 + _UNK_150631e08) * _UNK_153513fa8;
  fVar11 = (float)(_UNK_150631dac + _UNK_150631e0c) * _UNK_153513fac;
  local_a4 = local_a4 - fVar9 * local_a4 * fVar9;
  fStack_a0 = fStack_a0 - fVar8 * fStack_a0 * fVar8;
  fStack_9c = fStack_9c - fVar10 * fStack_9c * fVar10;
  fStack_98 = fStack_98 - fVar11 * fStack_98 * fVar11;
  _celt_lpc(local_b8,&local_a8,4);
  lVar7 = 0;
  do {
    fVar13 = fVar13 * __real_3f666666;
    local_b8[lVar7] = fVar13 * local_b8[lVar7];
    lVar7 = lVar7 + 1;
  } while (lVar7 < 4);
  fVar10 = local_b8[0] + __real_3f4ccccd;
  local_b8[0] = local_b8[0] * __real_3f4ccccd;
  fVar13 = local_b8[1] * __real_3f4ccccd;
  fVar9 = local_b8[2] * __real_3f4ccccd;
  fVar8 = local_b8[3] * __real_3f4ccccd;
  if (0 < (int)uVar6) {
    uVar4 = (ulonglong)uVar6;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar17 = 0.0;
    do {
      fVar16 = fVar15;
      fVar15 = fVar14;
      fVar14 = fVar12;
      fVar12 = fVar11;
      fVar11 = *param_2;
      *param_2 = fVar10 * fVar12 + *param_2 + (local_b8[0] + local_b8[1]) * fVar14 +
                 (fVar13 + local_b8[2]) * fVar15 + (fVar9 + local_b8[3]) * fVar16 + fVar8 * fVar17;
      param_2 = param_2 + 1;
      uVar4 = uVar4 - 1;
      fVar17 = fVar16;
    } while (uVar4 != 0);
  }
  return;
}

// pitch_search @ 14f878628

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void pitch_search(longlong param_1,longlong param_2,int param_3,int param_4,int *param_5,
                 undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined8 auStack_a0 [5];
  ulonglong uStack_78;
  undefined4 auStack_70 [2];
  float local_68;
  int iStack_64;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  float *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar10 = 0;
  _local_68 = 0;
  local_58 = param_2;
  local_50 = param_1;
  if (param_3 < 1) {
    auStack_a0[0] = 0x14f87868a;
    celt_fatal("assertion failed: len>0","../../../third_party/opus/src/celt/pitch.c",0x12e);
  }
  if (param_4 < 1) {
    auStack_a0[0] = 0x14f8786a8;
    celt_fatal("assertion failed: max_pitch>0","../../../third_party/opus/src/celt/pitch.c",0x12f);
  }
  iVar14 = param_3 >> 2;
  uVar6 = (longlong)iVar14 * 4;
  uVar7 = uVar6 + 0xf;
  if (uVar7 <= uVar6) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_a0[0] = 0x14f8786db;
  lVar1 = -(uVar7 & 0xfffffffffffffff0);
  lVar12 = (longlong)(param_3 + param_4 >> 2);
  uVar7 = lVar12 * 4 + 0xf;
  if (uVar7 <= (ulonglong)(lVar12 * 4)) {
    uVar7 = 0xffffffffffffff0;
  }
  local_48 = (longlong)&local_68 + lVar1;
  *(undefined8 *)((longlong)auStack_a0 + lVar1) = 0x14f878710;
  lVar2 = -(uVar7 & 0xfffffffffffffff0);
  iVar17 = param_4 >> 1;
  local_60 = (longlong)&local_68 + lVar2 + lVar1;
  uVar7 = (longlong)iVar17 * 4 + 0xf;
  if (uVar7 <= (ulonglong)((longlong)iVar17 * 4)) {
    uVar7 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar2 + lVar1) = 0x14f878741;
  lVar4 = local_50;
  lVar3 = -(uVar7 & 0xfffffffffffffff0);
  iVar11 = 1;
  pfVar15 = (float *)((longlong)&local_68 + lVar3 + lVar2 + lVar1);
  uVar7 = uVar10;
  local_40 = pfVar15;
  if (0 < iVar14) {
    do {
      *(undefined4 *)((longlong)&local_68 + lVar1 + uVar7 * 4) = *(undefined4 *)(lVar4 + uVar7 * 8);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)iVar14);
  }
  lVar5 = local_48;
  lVar4 = local_60;
  uVar7 = uVar10;
  if (0 < lVar12) {
    do {
      *(undefined4 *)(local_60 + uVar7 * 4) = *(undefined4 *)(local_58 + uVar7 * 8);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < lVar12);
  }
  *(undefined4 *)((longlong)auStack_70 + lVar3 + lVar2 + lVar1) = param_6;
  *(int *)((longlong)&uStack_78 + lVar3 + lVar2 + lVar1) = param_4 >> 2;
  *(undefined8 *)((longlong)auStack_a0 + lVar3 + lVar2 + lVar1) = 0x14f8787b3;
  celt_pitch_xcorr_c(lVar5,lVar4,pfVar15,iVar14);
  lVar12 = local_60;
  *(float **)((longlong)&uStack_78 + lVar3 + lVar2 + lVar1) = &local_68;
  *(undefined8 *)((longlong)auStack_a0 + lVar3 + lVar2 + lVar1) = 0x14f8787ce;
  FUN_14f87824c(pfVar15,lVar12,iVar14,param_4 >> 2);
  pfVar16 = pfVar15;
  if (0 < iVar17) {
    local_60 = CONCAT44(local_60._4_4_,(int)local_68 * -2);
    uVar7 = uVar10;
    lVar12 = local_58;
    iVar14 = (int)local_68 * -2;
    do {
      iVar13 = (int)uVar7;
      *pfVar15 = 0.0;
      lVar4 = local_50;
      uVar8 = iVar14 + iVar13 >> 0x1f;
      if (((int)((iVar14 + iVar13 ^ uVar8) - uVar8) < 3) ||
         (uVar8 = iVar13 + iStack_64 * -2, uVar9 = (int)uVar8 >> 0x1f,
         (int)((uVar8 ^ uVar9) - uVar9) < 3)) {
        *(undefined8 *)((longlong)auStack_a0 + lVar3 + lVar2 + lVar1) = 0x14f87881f;
        fVar18 = (float)celt_inner_prod_sse(lVar4,lVar12,param_3 >> 1);
        fVar19 = __real_bf800000;
        if (__real_bf800000 <= fVar18) {
          fVar19 = fVar18;
        }
        *pfVar15 = fVar19;
      }
      uVar7 = (ulonglong)(iVar13 + 1U);
      lVar12 = lVar12 + 4;
      pfVar15 = pfVar15 + 1;
      pfVar16 = local_40;
      iVar14 = (int)local_60;
    } while ((int)(iVar13 + 1U) < iVar17);
  }
  lVar12 = local_58;
  *(float **)((longlong)&uStack_78 + lVar3 + lVar2 + lVar1) = &local_68;
  *(undefined8 *)((longlong)auStack_a0 + lVar3 + lVar2 + lVar1) = 0x14f878865;
  FUN_14f87824c(pfVar16,lVar12,param_3 >> 1,iVar17);
  if ((0 < (int)local_68) && ((int)local_68 < iVar17 + -1)) {
    iVar14 = (int)local_68 + 1;
    fVar19 = pfVar16[(int)local_68 + -1];
    if ((pfVar16[(int)local_68] - fVar19) * __real_3f333333 < pfVar16[iVar14] - fVar19)
    goto LAB_14f8788cd;
    uVar10 = (ulonglong)
             ((fVar19 - pfVar16[iVar14] <=
              (pfVar16[(int)local_68] - pfVar16[iVar14]) * __real_3f333333) - 1);
  }
  iVar11 = (int)uVar10;
LAB_14f8788cd:
  *param_5 = (int)local_68 * 2 - iVar11;
  *(undefined8 *)((longlong)auStack_a0 + lVar3 + lVar2 + lVar1) = 0x14f8788e8;
  return;
}

// remove_doubling @ 14f87890c

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

float remove_doubling(longlong param_1,int param_2,uint param_3,int param_4,uint *param_5,
                     int param_6,float param_7)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 auStack_160 [5];
  ulonglong auStack_138 [2];
  float local_128 [2];
  int local_120;
  uint uStack_11c;
  int local_118;
  int local_114;
  float local_110;
  int local_10c;
  uint local_108;
  float *local_100;
  int *local_f8;
  undefined8 local_f0;
  float local_e8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)local_128;
  local_f0 = param_5;
  local_114 = param_2 / 2;
  lVar16 = (longlong)local_114;
  local_118 = (int)param_3 / 2;
  pfVar1 = (float *)(param_1 + lVar16 * 4);
  uVar7 = (int)*param_5 / 2;
  *param_5 = uVar7;
  local_10c = param_6 / 2;
  if (local_114 <= (int)uVar7) {
    uVar7 = local_114 - 1;
    *param_5 = uVar7;
  }
  uVar10 = lVar16 * 4 + 0x13;
  if (uVar10 <= lVar16 * 4 + 4U) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_160[0] = 0x14f878a14;
  lVar2 = -(uVar10 & 0xfffffffffffffff0);
  local_100 = (float *)((longlong)local_128 + lVar2);
  local_120 = param_4 / 2;
  uStack_11c = uVar7;
  local_108 = param_3;
  *(float **)((longlong)auStack_138 + lVar2 + 8) = local_128;
  *(float **)((longlong)auStack_138 + lVar2) = local_128 + 1;
  *(undefined8 *)((longlong)auStack_160 + lVar2) = 0x14f878a4d;
  dual_inner_prod_sse(pfVar1,pfVar1,pfVar1 + -(longlong)(int)uVar7,param_4 / 2);
  pfVar5 = local_100;
  fVar26 = __real_3f800000;
  iVar15 = 1;
  *local_100 = local_128[1];
  fVar29 = local_128[0];
  if (0 < lVar16) {
    lVar11 = 1;
    pfVar17 = pfVar1 + (longlong)local_120 + -1;
    fVar25 = local_128[1];
    pfVar13 = pfVar1;
    do {
      pfVar13 = pfVar13 + -1;
      fVar18 = *pfVar17;
      pfVar17 = pfVar17 + -1;
      fVar25 = (*pfVar13 * *pfVar13 + fVar25) - fVar18 * fVar18;
      fVar18 = 0.0;
      if (0.0 <= fVar25) {
        fVar18 = fVar25;
      }
      pfVar5[lVar11] = fVar18;
      lVar11 = lVar11 + 1;
    } while (lVar11 <= lVar16);
  }
  fVar25 = pfVar5[(int)uVar7];
  fVar18 = fVar25 * local_128[1];
  *(undefined8 *)((longlong)auStack_160 + lVar2) = 0x14f878ae4;
  dVar22 = sqrt((double)(fVar18 + __real_3f800000));
  iVar4 = local_114;
  fVar3 = __real_3f333333;
  fVar18 = __real_3f000000;
  local_f8 = (int *)&DAT_153513f68;
  iVar14 = 2;
  fVar28 = fVar29 / (float)dVar22;
  fVar27 = fVar28;
  uVar12 = uVar7;
  do {
    iVar9 = local_120;
    uVar8 = (uVar7 * 2 + iVar14) / (uint)(iVar14 * 2);
    if ((int)uVar8 < local_118) break;
    if (iVar14 == 2) {
      uVar12 = uVar7;
      if ((int)(uVar7 + uVar8) <= iVar4) {
        uVar12 = uVar7 + uVar8;
      }
    }
    else {
      uVar12 = (iVar14 + *local_f8 * uVar7 * 2) / (uint)(iVar14 * 2);
    }
    *(float **)((longlong)auStack_138 + lVar2 + 8) = &local_110;
    *(float **)((longlong)auStack_138 + lVar2) = local_128;
    *(undefined8 *)((longlong)auStack_160 + lVar2) = 0x14f878b92;
    dual_inner_prod_sse(pfVar1,pfVar1 + (int)-uVar8,pfVar1 + (int)-uVar12,iVar9);
    fVar30 = (local_110 + local_128[0]) * fVar18;
    fVar31 = (local_100[(int)uVar12] + local_100[(int)uVar8]) * fVar18;
    fVar19 = fVar31 * local_128[1];
    local_128[0] = fVar30;
    *(undefined8 *)((longlong)auStack_160 + lVar2) = 0x14f878bd6;
    dVar22 = sqrt((double)(fVar19 + fVar26));
    uVar12 = (int)(uVar8 - local_10c) >> 0x1f;
    iVar9 = (uVar8 - local_10c ^ uVar12) - uVar12;
    fVar19 = param_7;
    if (1 < iVar9) {
      if ((iVar9 < 3) && (iVar14 * iVar14 * 5 < (int)uVar7)) {
        fVar19 = param_7 * fVar18;
      }
      else {
        fVar19 = 0.0;
      }
    }
    fVar20 = fVar28 * fVar3 - fVar19;
    fVar24 = __real_3e99999a;
    if (__real_3e99999a <= fVar20) {
      fVar24 = fVar20;
    }
    fVar23 = __real_3ecccccd;
    fVar20 = __real_3f59999a;
    if ((((int)uVar8 < local_118 * 3) ||
        (fVar23 = fVar18, fVar20 = __real_3f666666, (int)uVar8 < local_118 * 2)) &&
       (fVar19 = fVar28 * fVar20 - fVar19, fVar24 = fVar23, fVar23 <= fVar19)) {
      fVar24 = fVar19;
    }
    if (fVar24 < fVar30 / (float)dVar22) {
      fVar25 = fVar31;
      fVar27 = fVar30 / (float)dVar22;
      fVar29 = fVar30;
      uStack_11c = uVar8;
    }
    local_f8 = local_f8 + 1;
    iVar14 = iVar14 + 1;
    uVar12 = uStack_11c;
  } while (iVar14 < 0x10);
  puVar6 = local_f0;
  iVar4 = local_120;
  fVar18 = 0.0;
  if (0.0 <= fVar29) {
    fVar18 = fVar29;
  }
  if (fVar18 < fVar25) {
    fVar26 = fVar18 / (fVar25 + fVar26);
  }
  iVar14 = uVar12 - 1;
  lVar16 = 0;
  do {
    *(undefined8 *)((longlong)auStack_160 + lVar2) = 0x14f878cf4;
    uVar21 = celt_inner_prod_sse(pfVar1,pfVar1 + -(longlong)iVar14,iVar4);
    *(undefined4 *)((longlong)&local_f0 + lVar16 * 4) = uVar21;
    iVar14 = iVar14 + 1;
    lVar16 = lVar16 + 1;
  } while (lVar16 < 3);
  if (local_e8 - (float)local_f0 <= (local_f0._4_4_ - (float)local_f0) * fVar3) {
    iVar15 = ((float)local_f0 - local_e8 <= (local_f0._4_4_ - local_e8) * fVar3) - 1;
  }
  if (fVar26 <= fVar27) {
    fVar27 = fVar26;
  }
  uVar7 = iVar15 + uStack_11c * 2;
  if ((int)uVar7 < (int)local_108) {
    uVar7 = local_108;
  }
  *puVar6 = uVar7;
  *(undefined8 *)((longlong)auStack_160 + lVar2) = 0x14f878d6d;
  return fVar27;
}


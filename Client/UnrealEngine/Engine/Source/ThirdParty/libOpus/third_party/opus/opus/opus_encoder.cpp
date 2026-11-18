// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 24

// FUN_14f863d40 @ 14f863d40

int FUN_14f863d40(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  
  if (0x32 < param_3) {
    param_1 = param_1 - (param_2 * 0x28 + 0x14) * (param_3 + -0x32);
  }
  if (param_4 == 0) {
    iVar2 = (int)((ulonglong)((longlong)param_1 * -0x2aaaaaab) >> 0x20);
    param_1 = param_1 + ((iVar2 >> 1) - (iVar2 >> 0x1f));
  }
  iVar2 = ((param_6 + 0x5a) * param_1) / 100;
  if (param_5 - 1000U < 2) {
    if (param_6 < 2) {
      iVar2 = (iVar2 * 4) / 5;
    }
    iVar1 = param_7 * 6 + 10;
  }
  else {
    if (param_5 == 0x3ea) {
      if (4 < param_6) {
        return iVar2;
      }
      return (iVar2 * 9) / 10;
    }
    iVar1 = param_7 * 0xc + 0x14;
  }
  return iVar2 - (iVar2 * param_7) / iVar1;
}

// FUN_14f863e34 @ 14f863e34

int FUN_14f863e34(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4 * 0x28 + 0x14;
  iVar1 = (((200 - param_3) * iVar2 + param_2) * 3) / 0xc80;
  iVar2 = ((param_1 * 4 - iVar2) * 0x1e0) / ((int)(48000 / (longlong)param_3) + 0xf0) + iVar2;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  if (param_4 * 8 + 4 < iVar2) {
    if (0x101 < iVar2) {
      iVar2 = 0x101;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

// FUN_14f863ed4 @ 14f863ed4

int FUN_14f863ed4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  param_1 = param_1 / param_6;
  iVar6 = 1;
  piVar3 = &DAT_154dfae84;
  do {
    if (param_1 < *piVar3) break;
    iVar6 = iVar6 + 1;
    piVar3 = piVar3 + 5;
  } while ((longlong)piVar3 < 0x154dfaefc);
  lVar4 = (longlong)iVar6;
  lVar5 = (longlong)(param_3 + param_5 * 2);
  iVar2 = *(int *)((longlong)&PTR_FUN_154dfae58 + lVar4 * 0x14 + 4);
  lVar1 = lVar5 + -3 + lVar4 * 5;
  if (iVar6 == 7) {
    iVar6 = (param_1 - iVar2) / 2 + *(int *)(&DAT_154dfae6c + lVar1 * 4);
  }
  else {
    iVar6 = (*(int *)(&DAT_154dfae70 + (lVar5 + lVar4 * 5 + 1) * 4) * (param_1 - iVar2) +
            (*(int *)(&DAT_154dfae70 + lVar4 * 0x14) - param_1) *
            *(int *)(&DAT_154dfae6c + lVar1 * 4)) /
            (*(int *)(&DAT_154dfae70 + lVar4 * 0x14) - iVar2);
  }
  iVar2 = iVar6 + 100;
  if (param_4 != 0) {
    iVar2 = iVar6;
  }
  iVar6 = iVar2 + 300;
  if (param_2 != 0x450) {
    iVar6 = iVar2;
  }
  iVar6 = iVar6 * param_6;
  if ((param_6 == 2) && (11999 < param_1)) {
    iVar6 = iVar6 + -1000;
  }
  return iVar6;
}

// compute_stereo_width @ 14f863fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_stereo_width(longlong param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  longlong lVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar19 = __real_3f800000;
  fVar20 = 0.0;
  fVar21 = 0.0;
  fVar23 = 0.0;
  param_3 = param_3 / param_2;
  iVar14 = param_3;
  if (param_3 < 0x32) {
    iVar14 = 0x32;
  }
  fVar24 = __real_3f800000 - __real_41c80000 / (float)iVar14;
  if (0 < param_2 + -3) {
    pfVar12 = (float *)(param_1 + 8);
    lVar13 = ((longlong)(param_2 + -3) - 1U >> 2) + 1;
    do {
      fVar22 = pfVar12[1];
      fVar7 = pfVar12[-1];
      fVar8 = *pfVar12;
      fVar9 = *pfVar12;
      pfVar1 = pfVar12 + -2;
      fVar10 = pfVar12[3];
      pfVar2 = pfVar12 + -2;
      pfVar3 = pfVar12 + 2;
      pfVar4 = pfVar12 + 2;
      fVar11 = pfVar12[5];
      pfVar5 = pfVar12 + 4;
      pfVar6 = pfVar12 + 4;
      pfVar12 = pfVar12 + 8;
      fVar23 = fVar23 + fVar11 * *pfVar5 + fVar7 * *pfVar1 + fVar22 * fVar8 + fVar10 * *pfVar3;
      fVar20 = fVar20 + fVar11 * fVar11 + fVar7 * fVar7 + fVar22 * fVar22 + fVar10 * fVar10;
      fVar21 = fVar21 + *pfVar6 * *pfVar6 + *pfVar2 * *pfVar2 + fVar9 * fVar9 + *pfVar4 * *pfVar4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if ((((__real_4e6e6b28 <= fVar21) || (NAN(fVar21))) || (__real_4e6e6b28 <= fVar20)) ||
       (NAN(fVar20))) {
      fVar20 = 0.0;
      fVar21 = 0.0;
      fVar23 = 0.0;
    }
  }
  fVar22 = (fVar21 - *param_4) * fVar24 + *param_4;
  fVar21 = (fVar20 - param_4[2]) * fVar24 + param_4[2];
  fVar23 = (fVar23 - param_4[1]) * fVar24 + param_4[1];
  fVar20 = 0.0;
  if (0.0 <= fVar22) {
    fVar20 = fVar22;
  }
  fVar24 = 0.0;
  if (0.0 <= fVar21) {
    fVar24 = fVar21;
  }
  fVar21 = 0.0;
  if (0.0 <= fVar23) {
    fVar21 = fVar23;
  }
  *param_4 = fVar20;
  fVar23 = fVar20;
  if (fVar20 <= fVar24) {
    fVar23 = fVar24;
  }
  param_4[2] = fVar24;
  param_4[1] = fVar21;
  if (___real_3a51b717 < fVar23) {
    dVar15 = sqrt((double)fVar20);
    dVar16 = sqrt((double)fVar24);
    dVar17 = sqrt((double)(float)dVar15);
    dVar18 = sqrt((double)(float)dVar16);
    fVar20 = (float)dVar16 * (float)dVar15;
    if (fVar20 <= fVar21) {
      fVar21 = fVar20;
    }
    fVar20 = fVar20 + __real_26901d7d;
    param_4[1] = fVar21;
    fVar21 = fVar21 / fVar20;
    dVar15 = sqrt((double)(fVar19 - fVar21 * fVar21));
    dVar16 = (double)((float)dVar17 - (float)dVar18);
    fVar19 = param_4[4] - __real_3ca3d70a / (float)param_3;
    fVar20 = ((float)dVar15 *
              ((float)(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar16,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) /
              ((float)dVar17 + __real_26901d7d + (float)dVar18)) - param_4[3]) / (float)param_3 +
             param_4[3];
    if (fVar19 <= fVar20) {
      fVar19 = fVar20;
    }
    param_4[3] = fVar20;
    param_4[4] = fVar19;
  }
  return;
}

// FUN_14f864308 @ 14f864308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f864308(longlong param_1,int param_2,float *param_3,float *param_4,int param_5,
                  int param_6,int param_7)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = (longlong)param_5;
  fVar6 = *param_4;
  fVar7 = ((float)param_2 * ___real_40c9999a) / (float)param_7;
  fVar8 = __real_3f800000 - fVar7;
  if (param_6 == 2) {
    fVar9 = param_4[2];
    if (0 < lVar2) {
      pfVar3 = param_3 + 1;
      do {
        fVar5 = *(float *)((param_1 - (longlong)param_3) + -4 + (longlong)pfVar3);
        fVar1 = *(float *)((param_1 - (longlong)param_3) + (longlong)pfVar3);
        fVar4 = fVar5 * fVar7 + __real_0da24260;
        pfVar3[-1] = fVar5 - fVar6;
        fVar5 = fVar1 * fVar7 + __real_0da24260;
        *pfVar3 = fVar1 - fVar9;
        pfVar3 = pfVar3 + 2;
        fVar6 = fVar4 + fVar6 * fVar8;
        fVar9 = fVar5 + fVar9 * fVar8;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    param_4[2] = fVar9;
  }
  else if (0 < lVar2) {
    param_1 = param_1 - (longlong)param_3;
    do {
      fVar9 = *(float *)((longlong)param_3 + param_1);
      fVar5 = fVar9 * fVar7 + __real_0da24260;
      *param_3 = fVar9 - fVar6;
      param_3 = param_3 + 1;
      fVar6 = fVar5 + fVar6 * fVar8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *param_4 = fVar6;
  return;
}

// FUN_14f864430 @ 14f864430

undefined8 FUN_14f864430(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0x3ea)) {
    iVar1 = *param_5;
    iVar2 = 0x19;
    if (param_2 < 0x19) {
      iVar2 = param_2;
    }
    iVar5 = iVar1;
    while( true ) {
      iVar4 = *(int *)(&DAT_15350e828 + (longlong)(iVar5 * 2 + -0x89a) * 4) -
              *(int *)("Failed receiving HTTP2 data" + (longlong)(iVar5 * 2) * 4 + 4);
      if (param_3 != 1) {
        iVar4 = *(int *)(&DAT_15350e828 + (longlong)(iVar5 * 2 + -0x89a) * 4);
      }
      iVar3 = *(int *)("Failed receiving HTTP2 data" + (longlong)(iVar5 * 2) * 4 + 4) + iVar4;
      if (param_3 != 0) {
        iVar3 = iVar4;
      }
      if ((int)((ulonglong)((longlong)(iVar3 * (0x7d - iVar2)) * 0x28f) >> 0x10) < param_6) {
        return 1;
      }
      if (param_2 < 6) {
        return 0;
      }
      if (iVar5 < 0x44e) break;
      iVar5 = iVar5 + -1;
      *param_5 = iVar5;
    }
    *param_5 = iVar1;
  }
  return 0;
}

// downmix_float @ 14f864504

void downmix_float(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6
                  ,int param_7)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  float fVar10;
  
  fVar2 = __real_47000000;
  lVar5 = (longlong)param_3;
  lVar7 = 0;
  if (0 < lVar5) {
    param_5 = param_4 * param_7 + param_5;
    lVar6 = lVar7;
    do {
      lVar3 = (longlong)param_5;
      param_5 = param_5 + param_7;
      *(float *)(param_2 + lVar6 * 4) = *(float *)(param_1 + lVar3 * 4) * fVar2;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar5);
  }
  if (param_6 < 0) {
    if ((param_6 == -2) && (0 < lVar5)) {
      iVar8 = param_4 * param_7 + 1;
      do {
        if (1 < param_7) {
          fVar10 = *(float *)(param_2 + lVar7 * 4);
          uVar9 = (ulonglong)(param_7 - 1);
          pfVar4 = (float *)(param_1 + (longlong)iVar8 * 4);
          do {
            fVar1 = *pfVar4;
            pfVar4 = pfVar4 + 1;
            fVar10 = fVar10 + fVar1 * fVar2;
            *(float *)(param_2 + lVar7 * 4) = fVar10;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        iVar8 = iVar8 + param_7;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar5);
    }
  }
  else if (0 < lVar5) {
    param_6 = param_4 * param_7 + param_6;
    do {
      lVar6 = (longlong)param_6;
      param_6 = param_6 + param_7;
      *(float *)(param_2 + lVar7 * 4) =
           *(float *)(param_1 + lVar6 * 4) * fVar2 + *(float *)(param_2 + lVar7 * 4);
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar5);
  }
  return;
}

// downmix_int @ 14f8645f8

void downmix_int(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  
  lVar4 = (longlong)param_3;
  lVar6 = 0;
  if (0 < lVar4) {
    param_5 = param_4 * param_7 + param_5;
    lVar5 = lVar6;
    do {
      lVar2 = (longlong)param_5;
      param_5 = param_5 + param_7;
      *(float *)(param_2 + lVar5 * 4) = (float)(int)*(short *)(param_1 + lVar2 * 2);
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar4);
  }
  if (param_6 < 0) {
    if ((param_6 == -2) && (0 < lVar4)) {
      iVar7 = param_4 * param_7 + 1;
      do {
        if (1 < param_7) {
          fVar9 = *(float *)(param_2 + lVar6 * 4);
          uVar8 = (ulonglong)(param_7 - 1);
          psVar3 = (short *)(param_1 + (longlong)iVar7 * 2);
          do {
            sVar1 = *psVar3;
            psVar3 = psVar3 + 1;
            fVar9 = fVar9 + (float)(int)sVar1;
            *(float *)(param_2 + lVar6 * 4) = fVar9;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        iVar7 = iVar7 + param_7;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar4);
    }
  }
  else if (0 < lVar4) {
    param_6 = param_4 * param_7 + param_6;
    do {
      lVar5 = (longlong)param_6;
      param_6 = param_6 + param_7;
      *(float *)(param_2 + lVar6 * 4) =
           (float)(int)*(short *)(param_1 + lVar5 * 2) + *(float *)(param_2 + lVar6 * 4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar4);
  }
  return;
}

// FUN_14f8646ec @ 14f8646ec

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14f8646ec(longlong param_1,longlong param_2,int param_3,int param_4,undefined8 param_5,
             int param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 auStack_2d0 [5];
  int aiStack_2a8 [4];
  undefined8 local_298;
  undefined4 local_290 [8];
  undefined8 local_270;
  undefined4 local_268 [4];
  undefined1 local_258 [376];
  undefined8 uStack_e0;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)&local_68;
  iVar9 = param_3 * 2;
  if (param_3 == 2) {
    iVar9 = 3;
  }
  if (((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 0xa4) != -1)) &&
     (iVar4 = (*(int *)(param_1 + 0xa0) * 3) /
              ((*(int *)(param_1 + 0x90) * 0x18) / (param_3 * param_4)), iVar4 < param_6)) {
    param_6 = iVar4;
  }
  iVar4 = (param_6 - iVar9) / param_3 + 1;
  if (0x4fc < iVar4) {
    iVar4 = 0x4fc;
  }
  uVar6 = (longlong)(iVar4 * param_3) + 0xf;
  if (uVar6 <= (ulonglong)(longlong)(iVar4 * param_3)) {
    uVar6 = 0xffffffffffffff0;
  }
  uStack_e0 = 0x14f8647c6;
  lVar3 = -(uVar6 & 0xfffffffffffffff0);
  local_50 = (longlong)&local_68 + lVar3;
  puVar2 = local_258 + lVar3;
  local_68 = param_4;
  local_48 = param_2;
  *(undefined8 *)((longlong)auStack_2d0 + lVar3) = 0x14f8647ee;
  opus_repacketizer_init(puVar2,(longlong)(param_6 - iVar9) % (longlong)param_3 & 0xffffffff);
  local_60 = *(undefined4 *)(param_1 + 0x88);
  iVar9 = 0;
  local_64 = *(int *)(param_1 + 0x44);
  local_5c = *(undefined4 *)(param_1 + 0x80);
  local_58 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x3790);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x37a0);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x3770);
  if (local_64 == 0) {
    *(undefined4 *)(param_1 + 0x3798) = *(undefined4 *)(param_1 + 0x3770);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  iVar8 = iVar9;
  if (0 < param_3) {
    do {
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(uint *)(param_1 + 0x46d8) = (uint)(iVar9 < param_3 + -1);
      if ((param_7 != 0) && (iVar9 == param_3 + -1)) {
        *(undefined4 *)(param_1 + 0x88) = 0x3ea;
      }
      local_40 = local_50 + iVar8;
      lVar1 = local_48 + (longlong)(*(int *)(param_1 + 0x70) * iVar9 * local_68) * 4;
      *(undefined4 *)((longlong)local_268 + lVar3) = param_9;
      *(undefined8 *)((longlong)&local_270 + lVar3) = 0;
      *(undefined4 *)((longlong)local_290 + lVar3 + 0x18) = 0;
      *(undefined4 *)((longlong)local_290 + lVar3 + 0x10) = 0;
      *(undefined4 *)((longlong)local_290 + lVar3 + 8) = 0;
      *(undefined4 *)((longlong)local_290 + lVar3) = 0;
      *(undefined8 *)((longlong)&local_298 + lVar3) = 0;
      *(undefined4 *)((longlong)aiStack_2a8 + lVar3 + 8) = param_8;
      *(int *)((longlong)aiStack_2a8 + lVar3) = iVar4;
      *(undefined8 *)((longlong)auStack_2d0 + lVar3) = 0x14f8648eb;
      iVar5 = opus_encode_native(param_1,lVar1);
      lVar1 = local_40;
      if (iVar5 < 0) goto LAB_14f86494d;
      *(undefined8 *)((longlong)auStack_2d0 + lVar3) = 0x14f8648fe;
      iVar5 = opus_repacketizer_cat(puVar2,lVar1,iVar5);
      if (iVar5 < 0) goto LAB_14f86494d;
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + iVar4;
    } while (iVar9 < param_3);
  }
  iVar9 = local_64;
  *(uint *)((longlong)&local_298 + lVar3) = (uint)(*(int *)(param_1 + 0x94) == 0);
  *(undefined4 *)((longlong)aiStack_2a8 + lVar3 + 8) = 0;
  *(int *)((longlong)aiStack_2a8 + lVar3) = param_6;
  *(undefined8 *)((longlong)auStack_2d0 + lVar3) = 0x14f864949;
  uVar7 = opus_repacketizer_out_range_impl(puVar2,0,param_3,param_5);
  if ((int)uVar7 < 0) {
LAB_14f86494d:
    uVar7 = 0xfffffffd;
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = local_60;
    *(undefined4 *)(param_1 + 0x80) = local_5c;
    *(undefined4 *)(param_1 + 0x78) = local_58;
    *(int *)(param_1 + 0x44) = iVar9;
  }
  *(undefined8 *)((longlong)auStack_2d0 + lVar3) = 0x14f86497c;
  return uVar7;
}

// frame_size_select @ 14f8649a0

int frame_size_select(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 < param_3 / 400) {
    return -1;
  }
  if (param_2 != 5000) {
    if (8 < param_2 - 0x1389U) {
      return -1;
    }
    if (param_2 < 0x138e) {
      iVar2 = param_3 / 400 << ((byte)(param_2 - 0x1389U) & 0x1f);
    }
    else {
      iVar2 = ((param_2 + -0x138b) * param_3) / 0x32;
    }
    bVar1 = param_1 < iVar2;
    param_1 = iVar2;
    if (bVar1) {
      return -1;
    }
  }
  if ((((((param_1 * 400 != param_3) && (param_1 * 200 != param_3)) && (param_1 * 100 != param_3))
       && ((iVar2 = param_1 * 0x32, iVar2 != param_3 && (param_1 * 0x19 != param_3)))) &&
      ((iVar2 != param_3 * 3 && ((iVar2 != param_3 << 2 && (iVar2 != param_3 * 5)))))) &&
     (iVar2 != param_3 * 6)) {
    return -1;
  }
  return param_1;
}

// FUN_14f864a74 @ 14f864a74

void FUN_14f864a74(longlong param_1,float *param_2,float param_3,float param_4,int param_5,
                  int param_6,int param_7,longlong param_8,int param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  iVar8 = (int)(48000 / (longlong)param_9);
  param_5 = param_5 / iVar8;
  lVar6 = (longlong)param_5;
  iVar5 = 0;
  if (0 < param_5) {
    lVar3 = param_1 - (longlong)param_2;
    iVar7 = 0;
    pfVar4 = param_2;
    iVar5 = 0;
    if (param_7 == 1) {
      do {
        lVar1 = (longlong)iVar7;
        iVar7 = iVar7 + iVar8;
        fVar9 = *(float *)(param_8 + lVar1 * 4);
        fVar9 = fVar9 * fVar9;
        *pfVar4 = ((__real_3f800000 - fVar9) * param_3 + fVar9 * param_4) *
                  *(float *)(lVar3 + (longlong)pfVar4);
        lVar6 = lVar6 + -1;
        pfVar4 = pfVar4 + 1;
      } while (lVar6 != 0);
    }
    else {
      pfVar4 = param_2 + 1;
      do {
        lVar1 = (longlong)iVar7;
        iVar7 = iVar7 + iVar8;
        fVar9 = *(float *)(param_8 + lVar1 * 4);
        fVar9 = fVar9 * fVar9;
        fVar9 = (__real_3f800000 - fVar9) * param_3 + fVar9 * param_4;
        pfVar4[-1] = fVar9 * *(float *)(lVar3 + -4 + (longlong)pfVar4);
        *pfVar4 = fVar9 * *(float *)((longlong)pfVar4 + lVar3);
        pfVar4 = pfVar4 + 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  do {
    if (param_5 < param_6) {
      pfVar4 = param_2 + (param_5 * param_7 + iVar5);
      uVar2 = (ulonglong)(uint)(param_6 - param_5);
      do {
        *pfVar4 = param_4 * *(float *)((longlong)pfVar4 + (param_1 - (longlong)param_2));
        pfVar4 = pfVar4 + param_7;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < param_7);
  return;
}

// FUN_14f864bc0 @ 14f864bc0

undefined8 FUN_14f864bc0(int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  
  uVar1 = 400;
  bVar3 = 0;
  for (; param_2 < 400; param_2 = param_2 * 2) {
    bVar3 = bVar3 + 1;
  }
  if (param_1 == 1000) {
    bVar3 = ((byte)param_3 + 3) * ' ' | (bVar3 - 2) * '\b';
  }
  else if (param_1 == 0x3ea) {
    uVar1 = 0;
    bVar4 = 0;
    if (-1 < param_3 + -0x44e) {
      bVar4 = (byte)(param_3 + -0x44e);
    }
    bVar3 = ((bVar4 | 0xfc) << 2 | bVar3) << 3;
  }
  else {
    bVar3 = (((byte)param_3 | 6) * '\x02' | bVar3 - 2) << 3;
  }
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),(param_4 != 2) + -1) & 0xffffffffffffff04;
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 | bVar3);
}

// FUN_14f864c48 @ 14f864c48

void FUN_14f864c48(longlong param_1,short param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = (param_2 * 0x9a7) / (param_7 / 1000);
  local_20 = iVar1 * -0x1d7 + 0x10000000;
  local_1c = local_20 * -2;
  lVar2 = (longlong)local_20 >> 6;
  local_28 = (undefined4)
             ((ulonglong)
              (((int)((ulonglong)((longlong)iVar1 * (longlong)iVar1) >> 0x10) + -0x800000) * lVar2)
             >> 0x10);
  local_24 = (undefined4)((ulonglong)(lVar2 * lVar2) >> 0x10);
  local_18 = local_20;
  FUN_14f867c50(param_1,&local_20,&local_28,param_4,param_3,param_5,param_6);
  if (param_6 == 2) {
    FUN_14f867c50(param_1 + 4,&local_20,&local_28,param_4 + 8,param_3 + 4,param_5,2);
  }
  return;
}

// is_digital_silence @ 14f864d4c

bool is_digital_silence(float *param_1,int param_2,int param_3,byte param_4)

{
  float fVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  fVar3 = 0.0;
  if (0 < param_2 * param_3) {
    uVar2 = (ulonglong)(uint)(param_2 * param_3);
    do {
      fVar1 = *param_1;
      if (fVar4 <= fVar1) {
        fVar4 = fVar1;
      }
      if (fVar1 <= fVar3) {
        fVar3 = fVar1;
      }
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (fVar4 <= (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000)) {
    fVar4 = (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
  }
  return fVar4 <= __real_3f800000 / (float)(1 << (param_4 & 0x1f));
}

// opus_encode @ 14f864db8

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
opus_encode(longlong param_1,short *param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5
           )

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  float *pfVar6;
  short *psVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined4 auStack_78 [4];
  undefined8 local_68;
  int local_60 [8];
  undefined8 local_40;
  undefined4 local_38 [4];
  ulonglong local_28 [2];
  
  puVar8 = auStack_98;
  local_28[0] = __security_cookie.value ^ (ulonglong)local_28;
  uStack_a0 = 0x14f864e05;
  iVar2 = frame_size_select(param_3,*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x90))
  ;
  if (iVar2 < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x70);
    uVar3 = (longlong)(iVar9 * iVar2) * 4;
    uVar5 = uVar3 + 0xf;
    if (uVar5 <= uVar3) {
      uVar5 = 0xffffffffffffff0;
    }
    uStack_a0 = 0x14f864e43;
    lVar1 = -(uVar5 & 0xfffffffffffffff0);
    puVar8 = auStack_98 + lVar1;
    iVar10 = 0;
    pfVar6 = (float *)((longlong)local_28 + lVar1);
    psVar7 = param_2;
    if (0 < iVar9 * iVar2) {
      do {
        iVar10 = iVar10 + 1;
        *pfVar6 = (float)(int)*psVar7 * __real_38000000;
        iVar9 = *(int *)(param_1 + 0x70);
        pfVar6 = pfVar6 + 1;
        psVar7 = psVar7 + 1;
      } while (iVar10 < iVar9 * iVar2);
    }
    *(undefined4 *)((longlong)local_38 + lVar1) = 0;
    *(code **)((longlong)&local_40 + lVar1) = downmix_int;
    *(int *)((longlong)local_60 + lVar1 + 0x18) = iVar9;
    *(undefined4 *)((longlong)local_60 + lVar1 + 0x10) = 0xfffffffe;
    *(undefined4 *)((longlong)local_60 + lVar1 + 8) = 0;
    *(undefined4 *)((longlong)local_60 + lVar1) = param_3;
    *(short **)((longlong)&local_68 + lVar1) = param_2;
    *(undefined4 *)((longlong)auStack_78 + lVar1 + 8) = 0x10;
    *(undefined4 *)((longlong)auStack_78 + lVar1) = param_5;
    *(undefined8 *)(auStack_98 + lVar1 + -8) = 0x14f864ed5;
    uVar4 = opus_encode_native(param_1,(float *)((longlong)local_28 + lVar1),iVar2,param_4);
  }
  *(undefined8 *)(puVar8 + -8) = 0x14f864ee1;
  return uVar4;
}

// opus_encode_float @ 14f864f00

void opus_encode_float(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = frame_size_select(param_3,*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x90))
  ;
  opus_encode_native(param_1,param_2,uVar1,param_4,param_5,0x18,param_2,param_3,0,0xfffffffe,
                     *(undefined4 *)(param_1 + 0x70),downmix_float,1);
  return;
}

// opus_encode_native @ 14f864fa8

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong opus_encode_native(int *param_1,undefined8 param_2,float param_3,byte *param_4,
                            uint param_5,int param_6,undefined8 param_7,undefined4 param_8,
                            uint param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12
                            ,int param_13)

{
  float fVar1;
  void *pvVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined2 *puVar16;
  int iVar17;
  int *piVar18;
  longlong lVar19;
  byte *_Src;
  uint uVar20;
  undefined2 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  int iVar26;
  undefined4 *puVar27;
  longlong lVar28;
  void *pvVar29;
  undefined8 uVar30;
  size_t sVar31;
  longlong lVar32;
  ulonglong uVar33;
  byte *pbVar34;
  longlong lVar35;
  int iVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  double dVar42;
  float fVar43;
  float fVar44;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [32];
  byte *local_2a8;
  uint local_2a0 [4];
  undefined8 local_290;
  int local_288 [4];
  undefined8 local_278;
  int *local_270;
  int local_268;
  int local_264;
  uint local_260;
  int iStack_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  longlong local_248;
  void *local_240;
  float local_238;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  byte *local_220;
  int local_218;
  uint local_214;
  int local_210;
  undefined2 *local_208;
  undefined8 local_200;
  longlong local_1f8;
  longlong local_1f0;
  int local_1e8;
  uint local_1e4;
  undefined1 local_1e0 [24];
  int local_1c8;
  uint local_1c0;
  byte *local_1a8;
  int local_198 [5];
  float local_184;
  float local_180;
  float local_17c;
  int local_178;
  float local_174;
  undefined1 local_158 [112];
  int local_e8 [6];
  int local_d0 [2];
  ulonglong local_c8;
  
  puVar23 = auStack_2c8;
  local_c8 = __security_cookie.value ^ (ulonglong)&local_268;
  local_260 = 0;
  local_22c = 0;
  local_254 = param_5;
  if (0x4fc < (int)param_5) {
    local_254 = 0x4fc;
  }
  local_258 = 0;
  local_268 = 0;
  local_250 = 0;
  local_210 = 0;
  local_214 = 0;
  local_240._0_4_ = -1;
  local_224 = -1;
  local_230 = 0;
  param_1[0x11b7] = 0;
  if (((int)param_3 < 1) || ((int)local_254 < 1)) {
    uVar10 = 0xffffffff;
    puVar25 = auStack_2c8;
    goto LAB_14f8670b0;
  }
  if ((local_254 == 1) && (param_1[0x24] == (int)param_3 * 10)) {
LAB_14f866f13:
    uVar10 = 0xfffffffe;
    puVar25 = puVar23;
    goto LAB_14f8670b0;
  }
  local_1f8 = (longlong)param_1[1] + (longlong)param_1;
  local_248 = (longlong)*param_1 + (longlong)param_1;
  if (param_1[0x1b] == 0x803) {
    iStack_25c = 0;
  }
  else {
    iStack_25c = param_1[0x1d];
  }
  if (param_1[0x2a] <= param_6) {
    param_6 = param_1[0x2a];
  }
  uStack_2d0 = 0x14f8650e3;
  local_264 = param_6;
  local_238 = param_3;
  local_220 = param_4;
  local_200 = param_2;
  opus_custom_encoder_ctl(local_248,0x271f,&local_1f0);
  fVar41 = __real_3dcccccd;
  local_198[0] = 0;
  if ((param_1[0xb] < 7) || (iVar36 = param_1[0x24], iVar36 < 16000)) {
    if (param_1[0x778] != 0) {
      uStack_2d0 = 0x14f86521f;
      tonality_analysis_reset(param_1 + 0x2f);
    }
LAB_14f86521f:
    param_1[0x23] = -1;
  }
  else {
    uStack_2d0 = 0x14f865120;
    local_230 = is_digital_silence(param_2,param_3,param_1[0x1c],param_6);
    local_240._0_4_ = param_1[0x775];
    local_224 = param_1[0x776];
    local_270 = local_198;
    local_278 = param_12;
    local_290._0_4_ = param_11;
    local_2a0[2] = param_10;
    local_2a0[0] = param_9;
    local_2a8 = (byte *)CONCAT44(local_2a8._4_4_,param_3);
    uStack_2d0 = 0x14f86518c;
    local_288[0] = iVar36;
    local_288[2] = param_6;
    run_analysis(param_1 + 0x2f,local_1f0,param_7,param_8);
    if (local_230 == 0) {
      if (fVar41 < local_174) {
        iVar36 = param_1[0x1c];
        uStack_2d0 = 0x14f8651ba;
        fVar38 = (float)celt_inner_prod_sse(param_2,param_2,(int)param_3 * iVar36);
        fVar43 = (float)param_1[0x11b5] * __real_3f7fbe77;
        if (fVar43 <= fVar38 / (float)((int)param_3 * iVar36)) {
          iVar36 = param_1[0x1c];
          uStack_2d0 = 0x14f8651ef;
          fVar43 = (float)celt_inner_prod_sse(param_2,param_2,(int)param_3 * iVar36);
          fVar43 = fVar43 / (float)((int)param_3 * iVar36);
        }
        param_1[0x11b5] = (int)fVar43;
      }
      goto LAB_14f86521f;
    }
  }
  fVar38 = __real_3f800000;
  uVar20 = 0;
  param_1[0x11b3] = 0;
  iVar36 = 0x3ea;
  if (local_198[0] != 0) {
    if (param_1[0x1f] == -1000) {
      if ((param_1[0xde5] != 0) && (local_184 = local_180, param_1[0xde5] == 0x3ea)) {
        local_184 = local_17c;
      }
      uStack_2d0 = 0x14f8652aa;
      dVar42 = floor((double)((fVar38 - local_184) * __real_42c80000) + __real_3fe0000000000000);
      param_1[0x23] = (int)dVar42;
    }
    iVar5 = 0x44f;
    if (local_178 < 0xd) {
      param_1[0x11b3] = 0x44d;
    }
    else if (local_178 < 0xf) {
      param_1[0x11b3] = 0x44e;
    }
    else {
      if (0x10 < local_178) {
        iVar5 = (0x12 < local_178) + 0x450;
      }
      param_1[0x11b3] = iVar5;
    }
  }
  if ((param_1[0x1c] == 2) && (param_1[0x1e] != 1)) {
    uStack_2d0 = 0x14f86532b;
    fVar43 = (float)compute_stereo_width(local_200,param_3,param_1[0x24],param_1 + 0xdee);
  }
  else {
    fVar43 = 0.0;
  }
  uVar7 = local_254;
  uStack_2d0 = 0x14f865345;
  iVar5 = FUN_14f867ea4(param_1,param_3,local_254);
  param_1[0x28] = iVar5;
  uVar10 = (longlong)param_1[0x24] / (longlong)(int)param_3;
  iVar37 = (int)uVar10;
  uVar10 = uVar10 & 0xffffffff;
  if (param_1[0x25] == 0) {
    iVar26 = (param_1[0x24] * 0xc) / (int)param_3;
    local_254 = (iVar26 / 2 + ((int)((iVar5 * 0xc >> 0x1f & 7U) + iVar5 * 0xc) >> 3)) / iVar26;
    if ((int)uVar7 <= (int)local_254) {
      local_254 = uVar7;
    }
    iVar5 = (int)(local_254 * iVar26 * 8) / 0xc;
    param_1[0x28] = iVar5;
    uVar7 = local_254;
    if ((int)local_254 < 1) {
      uVar7 = 1;
      local_254 = 1;
    }
  }
  local_228 = iVar37;
  if ((((int)uVar7 < 3) || (iVar5 < iVar37 * 0x18)) ||
     ((iVar37 < 0x32 && (((int)(iVar37 * uVar7) < 300 || (iVar5 < 0x960)))))) {
    iVar5 = param_1[0xde8];
    if (iVar5 == 0) {
      iVar5 = 0x44d;
    }
    bVar3 = 0;
    iVar26 = param_1[0xde4];
    if (param_1[0xde4] == 0) {
      iVar26 = 1000;
    }
    if (100 < iVar37) {
      iVar26 = iVar36;
    }
    uVar7 = 0;
    if (iVar37 == 0x19) {
      if (iVar26 != 1000) {
        uVar10 = 0x32;
        uVar7 = 1;
        goto LAB_14f866fdc;
      }
LAB_14f86701f:
      if (0x44f < iVar5) {
        iVar5 = 0x44f;
      }
    }
    else {
LAB_14f866fdc:
      uVar20 = uVar7;
      iVar36 = (int)uVar10;
      bVar3 = 0;
      if (iVar36 < 0x11) {
        if ((param_5 == 1) || ((iVar26 == 1000 && (iVar36 != 10)))) {
          iVar26 = 1000;
          uVar7 = 0x10;
          if (iVar36 == 0xc) {
            uVar7 = 0x19;
          }
          uVar20 = (uint)(iVar36 < 0xd);
          uVar10 = (ulonglong)uVar7;
          bVar3 = 0;
        }
        else {
          uVar20 = 3;
          uVar10 = 0x32;
          bVar3 = (byte)(0x32 / (longlong)iVar36);
        }
      }
      if (iVar26 == 1000) goto LAB_14f86701f;
      if (iVar26 == 0x3ea) {
        if (iVar5 == 0x44e) {
          iVar5 = 0x44d;
        }
      }
      else if ((iVar26 == 0x3e9) && (iVar5 < 0x451)) {
        iVar5 = 0x450;
      }
    }
    uStack_2d0 = 0x14f867062;
    bVar4 = FUN_14f864bc0(iVar26,uVar10,iVar5,param_1[0xddc]);
    *local_220 = bVar4 | (byte)uVar20;
    uVar9 = (1 < uVar20) + 1;
    uVar7 = uVar9;
    if ((int)uVar9 < (int)local_254) {
      uVar7 = local_254;
    }
    if (uVar20 == 3) {
      local_220[1] = bVar3;
    }
    if (param_1[0x25] == 0) {
      uStack_2d0 = 0x14f86709f;
      iVar36 = opus_packet_pad(local_220,uVar9,uVar7);
      uVar9 = 0xfffffffd;
      if (iVar36 == 0) {
        uVar9 = uVar7;
      }
    }
    uVar10 = (ulonglong)uVar9;
    puVar25 = auStack_2c8;
    goto LAB_14f8670b0;
  }
  iVar26 = param_1[0x1c];
  local_218 = iVar37 * uVar7 * 8;
  local_2a0[2] = param_1[10];
  local_2a0[0] = param_1[0xb];
  local_2a8 = (byte *)((ulonglong)local_2a8 & 0xffffffff00000000);
  uStack_2d0 = 0x14f865443;
  iVar5 = FUN_14f863d40(iVar5,iVar26,uVar10);
  if (param_1[0x1f] == 0xbb9) {
    uVar20 = 0x7f;
  }
  else if (param_1[0x1f] != 0xbba) {
    if (param_1[0x23] < 0) {
      uVar20 = 0x30;
      if (param_1[0x1b] == 0x800) {
        uVar20 = 0x73;
      }
    }
    else {
      uVar9 = param_1[0x23] * 0x147 >> 8;
      uVar20 = uVar9;
      if ((param_1[0x1b] == 0x801) && (uVar20 = 0x73, (int)uVar9 < 0x73)) {
        uVar20 = uVar9;
      }
    }
  }
  iVar6 = param_1[0x1e];
  if (((iVar6 == -1000) || (iVar26 != 2)) && (iVar6 = iVar26, iVar26 == 2)) {
    iVar26 = 16000;
    if (param_1[0xddc] != 2) {
      iVar26 = 18000;
    }
    iVar6 = (((int)(uVar20 * uVar20 * 2000) >> 0xe) + iVar26 < iVar5) + 1;
  }
  param_1[0xddc] = iVar6;
  iVar5 = param_1[0x24];
  iVar26 = param_1[10];
  local_2a0[0] = param_1[0xb];
  local_2a8 = (byte *)((ulonglong)local_2a8 & 0xffffffff00000000);
  uStack_2d0 = 0x14f86553f;
  local_2a0[2] = iVar26;
  iVar6 = FUN_14f863d40(param_1[0x28],iVar6,(longlong)iVar5 / (longlong)(int)param_3 & 0xffffffff,
                        param_1[0x25]);
  if (((param_1[0x2e] == 0) || (local_198[0] != 0)) || (local_230 != 0)) {
    iVar17 = 0;
  }
  else {
    iVar17 = 1;
  }
  param_1[0xe] = iVar17;
  if (param_1[0x1b] == 0x803) {
LAB_14f865692:
    param_1[0xde4] = 0x3ea;
    iVar12 = iVar36;
  }
  else {
    iVar12 = param_1[0x22];
    if (iVar12 == -1000) {
      iVar12 = (int)(__real_461c4000 * fVar43 + __real_461c4000 * (fVar38 - fVar43));
      iVar12 = ((int)(((int)((fVar38 - fVar43) * ___real_477a0000 + fVar43 * ___real_472be000) -
                      iVar12) * uVar20 * uVar20) >> 0xe) + iVar12;
      iVar13 = iVar12 + 8000;
      if (param_1[0x1b] != 0x800) {
        iVar13 = iVar12;
      }
      if (param_1[0xde5] == 0x3ea) {
        iVar13 = iVar13 + -4000;
      }
      else if (0 < param_1[0xde5]) {
        iVar13 = iVar13 + 4000;
      }
      iVar12 = 1000;
      if (iVar13 <= iVar6) {
        iVar12 = iVar36;
      }
      param_1[0xde4] = iVar12;
      if ((param_1[0xc] != 0) && ((int)(0x80 - uVar20) >> 4 < iVar26)) {
        param_1[0xde4] = 1000;
        iVar12 = 1000;
      }
      if ((iVar17 != 0) && (100 < (int)uVar20)) {
        param_1[0xde4] = 1000;
        iVar12 = 1000;
      }
      iVar26 = 6000;
      if (0x32 < iVar37) {
        iVar26 = 9000;
      }
      if ((int)uVar7 < (iVar26 * (int)param_3) / (iVar5 << 3)) {
        param_1[0xde4] = 0x3ea;
        iVar12 = iVar36;
      }
    }
    else {
      param_1[0xde4] = iVar12;
    }
    if ((iVar12 != 0x3ea) && ((int)param_3 < iVar5 / 100)) goto LAB_14f865692;
  }
  iVar37 = 0;
  if (param_1[0x2c] != 0) {
    param_1[0xde4] = 0x3ea;
    iVar12 = iVar36;
  }
  iVar36 = param_1[0xde5];
  iVar26 = iVar12;
  if (0 < iVar36) {
    if (iVar12 == 0x3ea) {
LAB_14f8656ce:
      iVar26 = 0x3ea;
      if (iVar36 == 0x3ea) goto LAB_14f865724;
    }
    else if (iVar36 != 0x3ea) {
      if (iVar12 != 0x3ea) goto LAB_14f865724;
      goto LAB_14f8656ce;
    }
    local_250 = (uint)(iVar12 != 0x3ea);
    local_258 = 1;
    iVar26 = iVar12;
    if (iVar12 == 0x3ea) {
      if ((int)param_3 < iVar5 / 100) {
        local_258 = 0;
        iVar26 = 0x3ea;
      }
      else {
        param_1[0xde4] = iVar36;
        local_210 = 1;
        iVar26 = iVar36;
      }
    }
  }
LAB_14f865724:
  if ((((param_1[0xddc] == 1) && (param_1[0xde6] == 2)) && (param_1[0x11] == 0)) &&
     ((iVar26 != 0x3ea && (iVar36 != 0x3ea)))) {
    param_1[0xddc] = 2;
    iVar37 = 1;
  }
  param_1[0x11] = iVar37;
  iVar36 = param_1[0xde4];
  local_2a0[2] = param_1[10];
  local_2a0[0] = param_1[0xb];
  local_2a8 = (byte *)CONCAT44(local_2a8._4_4_,iVar36);
  uStack_2d0 = 0x14f86579a;
  uVar7 = FUN_14f863d40(param_1[0x28],param_1[0xddc],
                        (longlong)param_1[0x24] / (longlong)(int)param_3 & 0xffffffff,param_1[0x25])
  ;
  local_1e4 = uVar7;
  if (iVar36 == 0x3ea) {
LAB_14f8657e9:
    iVar36 = 0x451;
    if ((param_1[0x1c] == 2) && (param_1[0x1e] != 1)) {
      piVar18 = &DAT_15350e7e8;
      puVar27 = &DAT_15350e808;
    }
    else {
      piVar18 = &DAT_15350e7a8;
      puVar27 = &DAT_15350e7c8;
    }
    lVar28 = (longlong)puVar27 - (longlong)piVar18;
    lVar32 = (longlong)local_e8 - (longlong)piVar18;
    lVar35 = 8;
    do {
      *(int *)(lVar32 + (longlong)piVar18) =
           ((int)((*piVar18 - *(int *)(lVar28 + (longlong)piVar18)) * uVar20 * uVar20) >> 0xe) +
           *(int *)(lVar28 + (longlong)piVar18);
      piVar18 = piVar18 + 1;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    piVar18 = local_d0 + 1;
    lVar28 = 0x451;
    do {
      iVar5 = piVar18[-1];
      if (param_1[0xdeb] == 0) {
        if (param_1[0xde9] < iVar36) {
          iVar5 = iVar5 + *piVar18;
        }
        else {
          iVar5 = iVar5 - *piVar18;
        }
      }
      if (iVar5 <= (int)uVar7) break;
      iVar36 = iVar36 + -1;
      lVar28 = lVar28 + -1;
      piVar18 = piVar18 + -2;
    } while (0x44d < lVar28);
    if (iVar36 == 0x44e) {
      iVar36 = 0x44f;
    }
    param_1[0xde9] = iVar36;
    param_1[0xde8] = iVar36;
    if (((param_1[0xdeb] == 0) && (param_1[0xde4] != 0x3ea)) && (param_1[0x16] == 0)) {
      if (0x44f < iVar36) {
        iVar36 = 0x44f;
      }
      param_1[0xde8] = iVar36;
    }
  }
  else {
    if (param_1[0xde5] == 0x3ea) {
      uStack_2d0 = 0x14f8657c6;
      silk_InitEncoder(local_1f8,param_1[0x2d],local_158);
      iVar36 = param_1[0xde4];
      local_22c = 1;
    }
    if (((iVar36 == 0x3ea) || (param_1[0xdeb] != 0)) || (param_1[0x15] != 0)) goto LAB_14f8657e9;
  }
  iVar36 = param_1[0x21];
  piVar18 = param_1 + 0xde8;
  iVar5 = *piVar18;
  if (iVar36 < *piVar18) {
    *piVar18 = iVar36;
    iVar5 = iVar36;
  }
  iVar36 = param_1[0x20];
  if (iVar36 != -1000) {
    *piVar18 = iVar36;
    iVar5 = iVar36;
  }
  iVar37 = param_1[0xde4];
  iVar26 = iVar5;
  if ((iVar37 != 0x3ea) && (local_218 < 15000)) {
    iVar26 = 0x44f;
    if (iVar5 < 0x44f) {
      iVar26 = iVar5;
    }
    *piVar18 = iVar26;
  }
  iVar5 = param_1[0x24];
  if ((iVar5 < 0x5dc1) && (0x450 < iVar26)) {
    *piVar18 = 0x450;
    iVar26 = 0x450;
  }
  if ((iVar5 < 0x3e81) && (0x44f < iVar26)) {
    *piVar18 = 0x44f;
    iVar26 = 0x44f;
  }
  if ((iVar5 < 0x2ee1) && (0x44e < iVar26)) {
    *piVar18 = 0x44e;
    iVar26 = 0x44e;
  }
  if ((iVar5 < 0x1f41) && (0x44d < iVar26)) {
    *piVar18 = 0x44d;
  }
  iVar5 = param_1[0x11b3];
  if ((iVar5 != 0) && (iVar36 == -1000)) {
    iVar36 = param_1[0xddc];
    if ((iVar36 * 18000 < (int)uVar7) || (iVar37 != 0x3ea)) {
      if ((iVar36 * 24000 < (int)uVar7) || (iVar37 != 0x3ea)) {
        if (iVar36 * 30000 < (int)uVar7) {
          iVar36 = (iVar36 * 44000 < (int)uVar7) + 0x450;
        }
        else {
          iVar36 = 0x44f;
        }
      }
      else {
        iVar36 = 0x44e;
      }
    }
    else {
      iVar36 = 0x44d;
    }
    if (iVar5 <= iVar36) {
      iVar5 = iVar36;
    }
    param_1[0x11b3] = iVar5;
    iVar36 = *piVar18;
    if (iVar5 <= *piVar18) {
      iVar36 = iVar5;
    }
    *piVar18 = iVar36;
  }
  uStack_2d0 = 0x14f865a1d;
  local_2a8 = (byte *)piVar18;
  local_2a0[0] = uVar7;
  iVar36 = FUN_14f864430(param_1[0xc],param_1[10],param_1[0xd]);
  iVar5 = local_264;
  param_1[0xd] = iVar36;
  uStack_2d0 = 0x14f865a34;
  opus_custom_encoder_ctl(local_248,0xfc4,local_264);
  iVar36 = param_1[0xde4];
  if ((iVar36 == 0x3ea) && (*piVar18 == 0x44e)) {
    *piVar18 = 0x44f;
  }
  if (param_1[0x2c] == 0) {
    iVar37 = param_1[0xde8];
  }
  else {
    iVar37 = 0x44d;
    *piVar18 = 0x44d;
  }
  if ((iVar36 == 1000) && (iVar36 = 1000, 0x44f < iVar37)) {
    param_1[0xde4] = 0x3e9;
    iVar36 = 0x3e9;
  }
  if ((iVar36 == 0x3e9) && (iVar36 = 0x3e9, iVar37 < 0x450)) {
    param_1[0xde4] = 1000;
    iVar36 = 1000;
  }
  iVar26 = param_1[0x24];
  iVar6 = iVar26 / 0x32;
  local_264 = iVar37;
  if (((int)param_3 <= iVar6) || (iVar36 == 1000)) {
    iVar17 = (iVar26 * 3) / 0x32;
    if ((int)param_3 <= iVar17) {
      if (param_1[0xdea] != 0) {
        param_1[0xdea] = 0;
        local_258 = 1;
        local_250 = 1;
        local_22c = 2;
      }
      uVar20 = 0;
      if (iVar36 != 0x3ea) {
        uVar20 = local_258;
      }
      uVar7 = 0;
      if (uVar20 != 0) {
        uStack_2d0 = 0x14f865bf1;
        local_258 = uVar20;
        local_268 = FUN_14f863e34(local_254,param_1[0x28],local_228,param_1[0xddc]);
        uVar7 = -(uint)(local_268 != 0) & uVar20;
      }
      iVar5 = ((int)param_3 * param_1[0x28]) / (iVar26 << 3);
      iVar36 = local_254 - local_268;
      if (iVar5 <= (int)(local_254 - local_268)) {
        iVar36 = iVar5;
      }
      local_220 = local_220 + 1;
      uStack_2d0 = 0x14f865c45;
      local_258 = uVar7;
      local_1a8 = local_220;
      ec_enc_init(local_1e0,local_220,local_254 - 1);
      uVar14 = (longlong)((iStack_25c + (int)param_3) * param_1[0x1c]) * 4;
      uVar10 = uVar14 + 0xf;
      if (uVar10 <= uVar14) {
        uVar10 = 0xffffffffffffff0;
      }
      uStack_2d0 = 0x14f865c76;
      lVar28 = -(uVar10 & 0xfffffffffffffff0);
      puVar22 = auStack_2c8 + lVar28;
      iVar26 = param_1[0x1c] * iStack_25c;
      iVar6 = param_1[0x2b] - iStack_25c;
      iVar5 = param_1[0x1c];
      local_240 = (void *)((longlong)&local_268 + lVar28);
      *(undefined8 *)(auStack_2c8 + lVar28 + -8) = 0x14f865cac;
      memcpy((void *)((longlong)&local_268 + lVar28),param_1 + (longlong)(iVar6 * iVar5) + 0xdf3,
             (longlong)iVar26 << 2);
      if (param_1[0xde4] == 0x3ea) {
        *(undefined8 *)(auStack_2c8 + lVar28 + -8) = 0x14f865cc2;
        iVar5 = silk_lin2log(0x3c);
        iVar5 = iVar5 << 8;
      }
      else {
        iVar5 = *(int *)(local_1f8 + 8);
      }
      iVar5 = (int)((ulonglong)((longlong)(iVar5 - param_1[0xdde]) * 0x3d7) >> 0x10) +
              param_1[0xdde];
      param_1[0xdde] = iVar5;
      *(undefined8 *)(auStack_2c8 + lVar28 + -8) = 0x14f865cf3;
      uVar8 = silk_log2lin(iVar5 >> 8);
      uVar30 = local_200;
      iVar5 = param_1[0x1c];
      iVar26 = param_1[0x24];
      pvVar29 = (void *)((longlong)local_240 + (longlong)(iVar5 * iStack_25c) * 4);
      if (param_1[0x1b] == 0x800) {
        *(int *)((longlong)&local_290 + lVar28) = param_1[0x2d];
        uVar30 = local_200;
        *(int *)((longlong)local_2a0 + lVar28 + 8) = iVar26;
        *(int *)((longlong)local_2a0 + lVar28) = iVar5;
        *(float *)((longlong)local_2a0 + lVar28 + -8) = param_3;
        *(undefined8 *)(auStack_2c8 + lVar28 + -8) = 0x14f865d47;
        FUN_14f864c48(uVar30,uVar8);
      }
      else {
        *(int *)((longlong)local_2a0 + lVar28 + 8) = iVar26;
        *(int *)((longlong)local_2a0 + lVar28) = iVar5;
        *(float *)((longlong)local_2a0 + lVar28 + -8) = param_3;
        *(undefined8 *)(auStack_2c8 + lVar28 + -8) = 0x14f865d66;
        FUN_14f864308(uVar30,3,pvVar29,param_1 + 0xde0);
      }
      if (param_13 != 0) {
        iVar5 = param_1[0x1c];
        pvVar29 = (void *)((longlong)local_240 + (longlong)(iVar5 * iStack_25c) * 4);
        *(undefined8 *)(auStack_2c8 + lVar28 + -8) = 0x14f865d90;
        fVar43 = (float)celt_inner_prod_sse(pvVar29,pvVar29,iVar5 * (int)param_3);
        if ((__real_4e6e6b28 <= fVar43) || (NAN(fVar43))) {
          iVar5 = param_1[0x1c];
          pvVar29 = (void *)((longlong)local_240 + (longlong)(iVar5 * iStack_25c) * 4);
          *(undefined8 *)(auStack_2c8 + lVar28 + -8) = 0x14f865dca;
          memset(pvVar29,0,(longlong)(iVar5 * (int)param_3) << 2);
          param_1[0xde3] = 0;
          param_1[0xde2] = 0;
          param_1[0xde1] = 0;
          param_1[0xde0] = 0;
        }
      }
      iVar5 = param_1[0xde4];
      fVar43 = fVar38;
      if (iVar5 == 0x3ea) {
LAB_14f866504:
        lVar28 = local_248;
        uVar30 = 0x15;
        if (local_264 == 0x44d) {
          uVar30 = 0xd;
        }
        else if (0x44d < local_264) {
          if (local_264 < 0x450) {
            uVar30 = 0x11;
          }
          else if (local_264 == 0x450) {
            uVar30 = 0x13;
          }
        }
        *(undefined8 *)(puVar22 + -8) = 0x14f86654d;
        opus_custom_encoder_ctl(lVar28,0x271c,uVar30);
        iVar36 = param_1[0xddc];
        *(undefined8 *)(puVar22 + -8) = 0x14f866561;
        opus_custom_encoder_ctl(lVar28,0x2718,iVar36);
        *(undefined8 *)(puVar22 + -8) = 0x14f866572;
        opus_custom_encoder_ctl(lVar28,0xfa2,0xffffffff);
        fVar44 = __real_40000000;
        if (param_1[0xde4] != 1000) {
          *(undefined8 *)(puVar22 + -8) = 0x14f866597;
          opus_custom_encoder_ctl(lVar28,0xfa6,0);
          if (param_1[0x13] != 0) {
            fVar44 = 0.0;
          }
          *(undefined8 *)(puVar22 + -8) = 0x14f8665b3;
          opus_custom_encoder_ctl(lVar28,0x2712,(int)fVar44);
          if (param_1[0x25] != 0) {
            if (param_1[0xde4] == 0x3e9) {
              iVar36 = param_1[0x28];
              iVar5 = param_1[9];
              *(undefined8 *)(puVar22 + -8) = 0x14f8665dd;
              opus_custom_encoder_ctl(lVar28,0xfa2,iVar36 - iVar5);
              *(undefined8 *)(puVar22 + -8) = 0x14f8665ed;
              opus_custom_encoder_ctl(lVar28,0xfb4,0);
            }
            else {
              *(undefined8 *)(puVar22 + -8) = 0x14f8665ff;
              opus_custom_encoder_ctl(lVar28,0xfa6,1);
              iVar36 = param_1[0x26];
              *(undefined8 *)(puVar22 + -8) = 0x14f866613;
              opus_custom_encoder_ctl(lVar28,0xfb4,iVar36);
              iVar36 = param_1[0x28];
              *(undefined8 *)(puVar22 + -8) = 0x14f866627;
              opus_custom_encoder_ctl(lVar28,0xfa2,iVar36);
            }
          }
        }
        iVar36 = param_1[0x1c];
        iVar5 = param_1[0x24];
        sVar31 = (longlong)((iVar36 * iVar5) / 400) * 4;
        uVar10 = sVar31 + 0xf;
        if (uVar10 <= sVar31) {
          uVar10 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar22 + -8) = 0x14f86666b;
        lVar28 = -(uVar10 & 0xfffffffffffffff0);
        puVar23 = puVar22 + lVar28;
        puVar25 = puVar22 + lVar28;
        if (((param_1[0xde4] != 1000) && (param_1[0xde4] != param_1[0xde5])) && (0 < param_1[0xde5])
           ) {
          iVar5 = (param_1[0x2b] - iVar5 / 400) - iStack_25c;
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f8666c3;
          memcpy(puVar22 + lVar28 + 0x60,param_1 + (longlong)(iVar5 * iVar36) + 0xdf3,sVar31);
          iVar36 = param_1[0x1c];
        }
        iVar5 = param_1[0x2b];
        piVar18 = param_1 + 0xdf3;
        iVar37 = ((iVar5 - iStack_25c) - (int)param_3) * iVar36;
        if (iVar37 < 1) {
          iVar37 = iVar5 * iVar36;
          pvVar29 = (void *)((longlong)local_240 +
                            (longlong)(((int)param_3 + (iStack_25c - iVar5)) * iVar36) * 4);
        }
        else {
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866706;
          memmove(piVar18,param_1 + (longlong)(iVar36 * (int)param_3) + 0xdf3,(longlong)iVar37 << 2)
          ;
          iVar37 = (iStack_25c + (int)param_3) * param_1[0x1c];
          piVar18 = param_1 + (longlong)
                              (((param_1[0x2b] - iStack_25c) - (int)param_3) * param_1[0x1c]) +
                              0xdf3;
          pvVar29 = local_240;
        }
        pvVar2 = local_240;
        *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866760;
        memcpy(piVar18,pvVar29,(longlong)iVar37 << 2);
        lVar32 = local_1f0;
        if (((float)param_1[0xddf] < fVar38) || (fVar43 < fVar38)) {
          *(int *)(puVar22 + lVar28 + 0x40) = param_1[0x24];
          *(undefined8 *)(puVar22 + lVar28 + 0x38) = *(undefined8 *)(lVar32 + 0x48);
          *(int *)(puVar22 + lVar28 + 0x30) = param_1[0x1c];
          uVar8 = *(undefined4 *)(lVar32 + 4);
          *(float *)(puVar22 + lVar28 + 0x28) = param_3;
          *(undefined4 *)(puVar22 + lVar28 + 0x20) = uVar8;
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f8667ad;
          FUN_14f864a74(pvVar2,pvVar2);
        }
        iVar36 = param_1[0xde4];
        param_1[0xddf] = (int)fVar43;
        if ((iVar36 != 0x3e9) || (param_1[0xddc] == 1)) {
          if ((int)local_1e4 < 0x7d01) {
            if ((int)local_1e4 < 16000) {
              param_1[0x17] = 0;
            }
            else {
              param_1[0x17] = (int)((local_1e4 - 32000) * 0x800) / (int)(local_1e4 - 14000) + 0x4000
              ;
            }
          }
          else {
            param_1[0x17] = 0x4000;
          }
        }
        if (((*(longlong *)(param_1 + 0xdec) == 0) && (param_1[0x1c] == 2)) &&
           ((iVar5 = param_1[0xddd], (short)iVar5 < 0x4000 || (param_1[0x17] < 0x4000)))) {
          iVar36 = param_1[0x17];
          *(int *)(puVar22 + lVar28 + 0x40) = param_1[0x24];
          *(undefined8 *)(puVar22 + lVar28 + 0x38) = *(undefined8 *)(local_1f0 + 0x48);
          uVar8 = *(undefined4 *)(local_1f0 + 4);
          *(undefined4 *)(puVar22 + lVar28 + 0x30) = 2;
          *(float *)(puVar22 + lVar28 + 0x28) = param_3;
          *(undefined4 *)(puVar22 + lVar28 + 0x20) = uVar8;
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866895;
          FUN_14f867d68(pvVar2,pvVar2,(float)(int)(short)iVar5 * __real_38800000,
                        (float)iVar36 * __real_38800000);
          iVar36 = param_1[0xde4];
          *(short *)(param_1 + 0xddd) = (short)param_1[0x17];
        }
        uVar20 = local_254;
        if (iVar36 == 0x3ea) {
LAB_14f86699e:
          uVar7 = 0;
          local_258 = 0;
LAB_14f8669a6:
          if (uVar7 == 0) goto LAB_14f8669aa;
        }
        else {
          iVar5 = 0x1f;
          if (local_1c0 != 0) {
            for (; local_1c0 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          iVar37 = 0;
          if (iVar36 == 0x3e9) {
            iVar37 = 0x14;
          }
          if ((int)(local_254 * 8 + -8) < (iVar37 - iVar5) + local_1c8 + 0x10) goto LAB_14f86699e;
          if (iVar36 == 0x3e9) {
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866904;
            ec_enc_bit_logp(local_1e0,uVar7,0xc);
            iVar36 = param_1[0xde4];
          }
          uVar9 = local_250;
          if (uVar7 != 0) {
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866927;
            ec_enc_bit_logp(local_1e0,uVar9,1);
            iVar5 = 0x1f;
            if (local_1c0 != 0) {
              for (; local_1c0 >> iVar5 == 0; iVar5 = iVar5 + -1) {
              }
            }
            iVar36 = param_1[0xde4];
            if (iVar36 == 0x3e9) {
              iVar5 = (local_1c8 - iVar5) + 0x11;
            }
            else {
              iVar5 = (local_1c8 - iVar5) + 6;
            }
            iVar5 = uVar20 - (iVar5 >> 3);
            if (iVar5 <= local_268) {
              local_268 = iVar5 + -1;
            }
            if (local_268 < 2) {
              local_268 = 2;
            }
            if (0x101 < local_268) {
              local_268 = 0x101;
            }
            if (iVar36 == 0x3e9) {
              iVar36 = local_268 + -2;
              *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866996;
              ec_enc_uint(local_1e0,iVar36,0x100);
              iVar36 = param_1[0xde4];
            }
            goto LAB_14f8669a6;
          }
LAB_14f8669aa:
          param_1[0xdea] = 0;
          local_268 = 0;
        }
        if (iVar36 == 1000) {
          iVar5 = 0x1f;
          if (local_1c0 != 0) {
            for (; local_1c0 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          uVar20 = (local_1c8 - iVar5) + 6 >> 3;
          local_260 = uVar20;
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f8669f1;
          ec_enc_done(local_1e0);
        }
        else {
          uVar20 = (uVar20 - local_268) - 1;
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866a05;
          ec_enc_shrink(local_1e0,uVar20);
        }
        lVar32 = local_248;
        uVar7 = local_258;
        if ((local_258 != 0) || (param_1[0xde4] != 1000)) {
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866a2f;
          opus_custom_encoder_ctl(lVar32,0x2726,local_198);
        }
        lVar32 = local_248;
        if (param_1[0xde4] == 0x3e9) {
          local_208 = *(undefined2 **)(param_1 + 0x19);
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866a56;
          opus_custom_encoder_ctl(lVar32,0x272c,&local_208);
        }
        lVar32 = local_248;
        if ((uVar7 != 0) && (local_250 != 0)) {
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866a7a;
          opus_custom_encoder_ctl(lVar32,0x271a,0);
          lVar32 = local_248;
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866a8b;
          opus_custom_encoder_ctl(lVar32,0xfa6,0);
          lVar32 = local_248;
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866a9d;
          opus_custom_encoder_ctl(lVar32,0xfa2,0xffffffff);
          iVar37 = local_268;
          iVar5 = param_1[0x24];
          *(undefined8 *)(puVar22 + lVar28 + 0x28) = 0;
          lVar32 = local_248;
          *(int *)(puVar22 + lVar28 + 0x20) = iVar37;
          pvVar29 = local_240;
          pbVar34 = local_220 + (int)uVar20;
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866ad8;
          iVar5 = celt_encode_with_ec(lVar32,pvVar29,iVar5 / 200,pbVar34);
          lVar32 = local_248;
          puVar24 = puVar22 + lVar28;
          if (iVar5 < 0) goto LAB_14f866f90;
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866af2;
          opus_custom_encoder_ctl(lVar32,0xfbf,&local_214);
          lVar32 = local_248;
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866b00;
          opus_custom_encoder_ctl(lVar32,0xfbc);
        }
        lVar32 = local_248;
        *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866b14;
        opus_custom_encoder_ctl(lVar32,0x271a,-(iVar36 != 0x3ea) & 0x11);
        uVar9 = local_250;
        if (param_1[0xde4] == 1000) {
LAB_14f866c61:
          lVar32 = local_248;
          iVar36 = local_268;
          if ((uVar7 != 0) && (uVar9 == 0)) {
            iVar5 = param_1[0x24] / 200;
            iVar36 = param_1[0x24] / 400;
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866cb3;
            opus_custom_encoder_ctl(lVar32,0xfbc);
            lVar32 = local_248;
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866cc4;
            opus_custom_encoder_ctl(lVar32,0x271a,0);
            lVar32 = local_248;
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866cd5;
            opus_custom_encoder_ctl(lVar32,0x2712,0);
            lVar32 = local_248;
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866ce6;
            opus_custom_encoder_ctl(lVar32,0xfa6,0);
            lVar32 = local_248;
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866cf8;
            opus_custom_encoder_ctl(lVar32,0xfa2,0xffffffff);
            uVar9 = local_260;
            if (param_1[0xde4] == 0x3e9) {
              *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866d12;
              ec_enc_shrink(local_1e0,uVar9);
              uVar20 = uVar9;
            }
            *(undefined8 *)(puVar22 + lVar28 + 0x28) = 0;
            lVar32 = local_248;
            pvVar29 = (void *)((longlong)((((int)param_3 - iVar36) - iVar5) * param_1[0x1c]) * 4 +
                              (longlong)local_240);
            *(undefined4 *)(puVar22 + lVar28 + 0x20) = 2;
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866d4e;
            celt_encode_with_ec(lVar32,pvVar29,iVar36,&iStack_25c);
            *(undefined8 *)(puVar22 + lVar28 + 0x28) = 0;
            iVar36 = local_268;
            iVar37 = param_1[0x1c];
            pbVar34 = local_220 + (int)uVar20;
            *(int *)(puVar22 + lVar28 + 0x20) = local_268;
            pvVar29 = (void *)((longlong)(((int)param_3 - iVar5) * iVar37) * 4 + (longlong)local_240
                              );
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866d86;
            iVar5 = celt_encode_with_ec(lVar32,pvVar29,iVar5,pbVar34);
            puVar24 = puVar22 + lVar28;
            if (iVar5 < 0) goto LAB_14f866f90;
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866d9f;
            opus_custom_encoder_ctl(lVar32,0xfbf,&local_214);
          }
        }
        else {
          if ((param_1[0xde4] != param_1[0xde5]) && (0 < param_1[0xde5])) {
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866b41;
            opus_custom_encoder_ctl(lVar32,0xfbc);
            *(undefined8 *)(puVar22 + lVar28 + 0x28) = 0;
            iVar36 = param_1[0x24];
            *(undefined4 *)(puVar22 + lVar28 + 0x20) = 2;
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866b77;
            celt_encode_with_ec(lVar32,puVar22 + lVar28 + 0x60,iVar36 / 400,&iStack_25c);
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866b87;
            opus_custom_encoder_ctl(lVar32,0x2712,0);
          }
          uVar9 = local_250;
          iVar36 = 0x1f;
          if (local_1c0 != 0) {
            for (; local_1c0 >> iVar36 == 0; iVar36 = iVar36 + -1) {
            }
          }
          if ((int)(uVar20 * 8) < (local_1c8 - iVar36) + -1) goto LAB_14f866c61;
          if ((((uVar7 != 0) && (local_250 != 0)) && (param_1[0xde4] == 0x3e9)) &&
             (param_1[0x25] != 0)) {
            iVar36 = param_1[0x28];
            iVar5 = param_1[9];
            *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866bdd;
            opus_custom_encoder_ctl(lVar32,0xfa2,iVar36 - iVar5);
          }
          iVar36 = param_1[0x25];
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866bf1;
          opus_custom_encoder_ctl(lVar32,0xfa6,iVar36);
          pvVar29 = local_240;
          *(undefined1 **)(puVar22 + lVar28 + 0x28) = local_1e0;
          *(uint *)(puVar22 + lVar28 + 0x20) = uVar20;
          *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866c13;
          local_260 = celt_encode_with_ec(lVar32,pvVar29,param_3,0);
          iVar36 = local_268;
          puVar24 = puVar22 + lVar28;
          if ((int)local_260 < 0) goto LAB_14f866f90;
          if (uVar7 != 0) {
            if (((uVar9 != 0) && (param_1[0xde4] == 0x3e9)) && (param_1[0x25] != 0)) {
              sVar31 = (size_t)local_268;
              _Src = local_220 + (int)uVar20;
              pbVar34 = local_220 + (int)local_260;
              *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866c59;
              memmove(pbVar34,_Src,sVar31);
              uVar20 = uVar20 + iVar36;
            }
            goto LAB_14f866c61;
          }
        }
        iVar6 = local_264;
        iVar5 = param_1[0x24];
        pbVar34 = local_220 + -1;
        iVar37 = param_1[0xde4];
        iVar26 = param_1[0xddc];
        *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866dd5;
        bVar3 = FUN_14f864bc0(iVar37,(longlong)iVar5 / (longlong)(int)param_3 & 0xffffffff,iVar6,
                              iVar26);
        uVar30 = local_200;
        *pbVar34 = bVar3;
        param_1[0x11b7] = local_1c0 ^ local_214;
        iVar5 = 0x3ea;
        if (local_210 == 0) {
          iVar5 = param_1[0xde4];
        }
        param_1[0xde5] = iVar5;
        param_1[0xde6] = param_1[0xddc];
        param_1[0xde7] = (int)param_3;
        param_1[0xdeb] = 0;
        if ((param_1[0x2e] == 0) || ((local_198[0] == 0 && (local_230 == 0)))) {
LAB_14f866edf:
          param_1[0x11b4] = 0;
        }
        else {
          fVar38 = (float)param_1[0x11b5];
          if (local_230 == 0) {
            if (local_174 < fVar41) {
              iVar5 = param_1[0x1c];
              *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866e67;
              fVar41 = (float)celt_inner_prod_sse(uVar30,uVar30,(int)param_3 * iVar5);
              if ((fVar41 / (float)((int)param_3 * iVar5)) * ___real_439e1d71 <= fVar38)
              goto LAB_14f866e8b;
            }
            goto LAB_14f866edf;
          }
LAB_14f866e8b:
          uVar10 = 1;
          iVar37 = param_1[0x11b4];
          iVar5 = iVar37 + 1;
          param_1[0x11b4] = iVar5;
          if (10 < iVar5) {
            if (iVar37 < 0x1e) {
              iVar36 = param_1[0x24];
              iVar5 = param_1[0xde4];
              iVar37 = param_1[0xddc];
              param_1[0x11b7] = 0;
              *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866ed7;
              bVar3 = FUN_14f864bc0(iVar5,(longlong)iVar36 / (longlong)(int)param_3 & 0xffffffff,
                                    iVar6,iVar37);
              *pbVar34 = bVar3;
              goto LAB_14f8670b0;
            }
            param_1[0x11b4] = 10;
          }
        }
        uVar20 = local_254;
        iVar5 = 0x1f;
        if (local_1c0 != 0) {
          for (; local_1c0 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        uVar14 = (ulonglong)local_254;
        if ((int)(local_254 * 8 + -8) < (local_1c8 - iVar5) + -1) {
          if ((int)local_254 < 2) goto LAB_14f866f13;
          *local_1a8 = 0;
          param_1[0x11b7] = 0;
          uVar9 = 1;
        }
        else {
          uVar9 = local_260;
          if ((param_1[0xde4] == 1000) && (uVar7 == 0)) {
            uVar10 = (ulonglong)(int)local_260;
            uVar33 = uVar10;
            for (; (2 < (longlong)uVar10 && (uVar9 = (uint)uVar33, pbVar34[uVar10] == 0));
                uVar10 = uVar10 - 1) {
              uVar9 = (uint)uVar33 - 1;
              uVar33 = (ulonglong)uVar9;
            }
          }
        }
        uVar9 = iVar36 + 1 + uVar9;
        uVar10 = (ulonglong)uVar9;
        puVar25 = puVar22 + lVar28;
        if (param_1[0x25] != 0) goto LAB_14f8670b0;
        *(undefined8 *)(puVar22 + lVar28 + -8) = 0x14f866f88;
        iVar36 = opus_packet_pad(pbVar34,uVar9,uVar20);
        uVar10 = uVar14;
        puVar24 = puVar22 + lVar28;
        puVar25 = puVar22 + lVar28;
        if (iVar36 == 0) goto LAB_14f8670b0;
      }
      else {
        uVar20 = param_1[0x1c];
        uVar33 = (ulonglong)uVar20;
        uVar14 = (longlong)(int)(uVar20 * (int)param_3) * 2;
        uVar10 = uVar14 + 0xf;
        if (uVar10 <= uVar14) {
          uVar10 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_2c8 + lVar28 + -8) = 0x14f865e29;
        local_260 = 0xffffffff;
        lVar32 = -(uVar10 & 0xfffffffffffffff0);
        local_208 = (undefined2 *)((longlong)&local_268 + lVar32 + lVar28);
        if (local_198[0] != 0) {
          local_260 = (uint)(fVar41 <= local_174);
        }
        iVar26 = param_1[0x25];
        iVar36 = (iVar36 * 8 + -8) * local_228;
        if (iVar5 == 0x3e9) {
          iVar6 = (int)local_238 * 0x32;
          iVar5 = param_1[0x24];
          *(int *)((longlong)local_2a0 + lVar32 + lVar28) = param_1[0xddc];
          *(int *)((longlong)local_2a0 + lVar32 + lVar28 + -8) = param_1[0xd];
          *(undefined8 *)(auStack_2c8 + lVar32 + lVar28 + -8) = 0x14f865e9f;
          iVar5 = FUN_14f863ed4(iVar36,iVar37,iVar5 == iVar6,iVar26);
          param_1[9] = iVar5;
          if (*(longlong *)(param_1 + 0xdec) == 0) {
            *(undefined8 *)(auStack_2c8 + lVar32 + lVar28 + -8) = 0x14f865ed3;
            dVar42 = exp((double)((float)(iVar5 - iVar36) * __real_3a800000) *
                         ___real_3fe62e42fefa39ef);
            lVar35 = 0;
            fVar43 = fVar38 - (float)dVar42;
            goto LAB_14f865ef1;
          }
LAB_14f865efa:
          if ((iVar26 != 0) && (param_1[0x2c] == 0)) {
            iVar36 = *piVar18;
            fVar44 = 0.0;
            lVar35 = 0x11;
            if (iVar36 == 0x44d) {
              lVar35 = 0xd;
              iVar37 = 8000;
            }
            else {
              iVar37 = 16000;
              if (iVar36 == 0x44e) {
                lVar35 = 0xf;
                iVar37 = 12000;
              }
            }
            if (0 < (int)uVar20) {
              lVar19 = 0;
              do {
                if ((int)lVar35 != 0) {
                  pfVar15 = (float *)(*(longlong *)(param_1 + 0xdec) + lVar19);
                  lVar11 = lVar35;
                  do {
                    fVar39 = *pfVar15;
                    if (__real_3f000000 <= *pfVar15) {
                      fVar39 = __real_3f000000;
                    }
                    if (fVar39 <= __real_c0000000) {
                      fVar39 = __real_c0000000;
                    }
                    if (0.0 < fVar39) {
                      fVar39 = fVar39 * __real_3f000000;
                    }
                    pfVar15 = pfVar15 + 1;
                    fVar44 = fVar44 + fVar39;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                lVar19 = lVar19 + 0x54;
                uVar33 = uVar33 - 1;
              } while (uVar33 != 0);
              iVar5 = param_1[9];
            }
            iVar26 = iVar5 * -2;
            iVar26 = iVar26 / 3 + (iVar26 >> 0x1f) +
                     (int)(((longlong)iVar26 / 3 + ((longlong)iVar26 >> 0x3f) & 0xffffffffU) >> 0x1f
                          );
            iVar37 = (int)(((fVar44 / (float)(int)lVar35) * (float)(int)uVar20 + __real_3e4ccccd) *
                          (float)iVar37);
            if (iVar26 < iVar37) {
              iVar26 = iVar37;
            }
            if (iVar36 - 0x450U < 2) {
              param_1[9] = (iVar26 * 3) / 5 + iVar5;
            }
            else {
              param_1[9] = iVar5 + iVar26;
            }
          }
        }
        else {
          lVar35 = *(longlong *)(param_1 + 0xdec);
          param_1[9] = iVar36;
          iVar5 = iVar36;
LAB_14f865ef1:
          if (lVar35 != 0) goto LAB_14f865efa;
        }
        param_3 = local_238;
        param_1[2] = uVar20;
        param_1[8] = ((int)local_238 * 1000) / param_1[0x24];
        param_1[3] = param_1[0xddc];
        if (local_264 == 0x44d) {
          param_1[7] = 8000;
        }
        else if (local_264 == 0x44e) {
          param_1[7] = 12000;
        }
        else {
          if ((param_1[0xde4] != 0x3e9) && (local_264 != 0x44f)) {
            *(undefined8 *)(auStack_2c8 + lVar32 + lVar28 + -8) = 0x14f8660bf;
            celt_fatal("assertion failed: st->mode == MODE_HYBRID || curr_bandwidth == OPUS_BANDWIDTH_WIDEBAND"
                       ,"../../../third_party/opus/src/src/opus_encoder.c",0x6db);
          }
          param_1[7] = 16000;
        }
        uVar7 = local_258;
        iVar36 = local_264;
        iVar5 = 16000;
        if (param_1[0xde4] != 0x3e9) {
          iVar5 = 8000;
        }
        param_1[6] = iVar5;
        iVar5 = param_1[0xde4];
        param_1[5] = 16000;
        if (iVar5 == 1000) {
          iVar37 = local_218;
          if (0x32 < local_228) {
            iVar37 = local_218 * 2;
            iVar37 = (int)(((longlong)iVar37 / 3 + ((longlong)iVar37 >> 0x3f) & 0xffffffffU) >> 0x1f
                          ) + iVar37 / 3 + (iVar37 >> 0x1f);
          }
          if (iVar37 < 8000) {
            iVar26 = param_1[7];
            param_1[5] = 12000;
            if (12000 < iVar26) {
              iVar26 = 12000;
            }
            param_1[7] = iVar26;
          }
          if (iVar37 < 7000) {
            param_1[5] = 8000;
            iVar37 = param_1[7];
            if (8000 < param_1[7]) {
              iVar37 = 8000;
            }
            param_1[7] = iVar37;
          }
        }
        param_1[0xf] = (uint)(param_1[0x25] == 0);
        iVar37 = local_254 * 8 + -8;
        param_1[0x10] = iVar37;
        if ((local_258 == 0) || (local_268 < 2)) {
LAB_14f866194:
          if (iVar5 == 0x3e9) {
            if (param_1[0x25] == 0) {
              iVar36 = (param_1[9] * (int)param_3) / param_1[0x24];
              if (iVar36 <= iVar37) {
                iVar37 = iVar36;
              }
              param_1[0x10] = iVar37;
            }
            else {
              iVar5 = param_1[0x24];
              *(int *)((longlong)local_2a0 + lVar32 + lVar28) = param_1[0xddc];
              *(int *)((longlong)local_2a0 + lVar32 + lVar28 + -8) = param_1[0xd];
              *(undefined8 *)(auStack_2c8 + lVar32 + lVar28 + -8) = 0x14f8661ed;
              iVar36 = FUN_14f863ed4((longlong)(iVar5 * iVar37) / (longlong)(int)param_3 &
                                     0xffffffff,iVar36,iVar5 == (int)param_3 * 0x32);
              param_1[0x10] = (iVar36 * (int)param_3) / iVar5;
            }
          }
        }
        else {
          iVar37 = iVar37 + local_268 * -8;
          param_1[0x10] = iVar37 + -1;
          if (iVar5 == 0x3e9) {
            iVar37 = iVar37 + -0x15;
            param_1[0x10] = iVar37;
            goto LAB_14f866194;
          }
        }
        fVar1 = __real_c7000000;
        fVar39 = __real_47000000;
        fVar44 = __real_46fffe00;
        puVar21 = local_208;
        uVar20 = local_260;
        if (local_22c != 0) {
          iVar36 = param_1[0x24];
          iVar5 = param_1[0x1c];
          local_224 = 0;
          *(int *)((longlong)local_288 + lVar32 + lVar28) = iVar36;
          lVar35 = local_1f0;
          iVar36 = iVar36 / 400;
          iVar37 = param_1[0x2b];
          iVar26 = param_1[0x1d];
          *(undefined8 *)((longlong)&local_290 + lVar32 + lVar28) =
               *(undefined8 *)(local_1f0 + 0x48);
          uVar8 = *(undefined4 *)(lVar35 + 4);
          *(int *)((longlong)local_2a0 + lVar32 + lVar28 + 8) = iVar5;
          *(int *)((longlong)local_2a0 + lVar32 + lVar28) = iVar36;
          *(undefined4 *)((longlong)local_2a0 + lVar32 + lVar28 + -8) = uVar8;
          *(undefined8 *)(auStack_2c8 + lVar32 + lVar28 + -8) = 0x14f866295;
          FUN_14f864a74();
          pfVar15 = (float *)(param_1 + 0xdf3);
          *(undefined8 *)(auStack_2c8 + lVar32 + lVar28 + -8) = 0x14f8662a9;
          memset(pfVar15,0,(longlong)(((iVar37 - iVar26) - iVar36) * iVar5) * 4);
          lVar35 = local_1f8;
          puVar21 = local_208;
          iVar36 = local_22c;
          uVar20 = local_260;
          iVar5 = 0;
          puVar16 = local_208;
          if (0 < param_1[0x2b] * param_1[0x1c]) {
            do {
              fVar40 = *pfVar15 * fVar39;
              if (fVar40 <= fVar1) {
                fVar40 = fVar1;
              }
              if (fVar44 <= fVar40) {
                fVar40 = fVar44;
              }
              iVar5 = iVar5 + 1;
              pfVar15 = pfVar15 + 1;
              *puVar16 = (short)(int)ROUND(fVar40);
              puVar16 = puVar16 + 1;
              local_238 = fVar40;
            } while (iVar5 < param_1[0x2b] * param_1[0x1c]);
          }
          *(uint *)((longlong)&local_290 + lVar32 + lVar28) = local_260;
          *(int *)((longlong)local_2a0 + lVar32 + lVar28 + 8) = iVar36;
          *(int **)((longlong)local_2a0 + lVar32 + lVar28) = &local_224;
          *(undefined8 *)((longlong)local_2a0 + lVar32 + lVar28 + -8) = 0;
          *(undefined8 *)(auStack_2c8 + lVar32 + lVar28 + -8) = 0x14f866335;
          silk_Encode(lVar35,param_1 + 2,puVar21);
          param_1[0x12] = 0;
          uVar7 = local_258;
        }
        lVar35 = local_1f8;
        iVar36 = param_1[0x1c];
        iVar5 = 0;
        puVar16 = puVar21;
        if (0 < iVar36 * (int)param_3) {
          do {
            fVar40 = *(float *)((longlong)local_240 + (longlong)(iVar5 + iVar36 * iStack_25c) * 4) *
                     fVar39;
            if (fVar40 <= fVar1) {
              fVar40 = fVar1;
            }
            if (fVar44 <= fVar40) {
              fVar40 = fVar44;
            }
            iVar5 = iVar5 + 1;
            *puVar16 = (short)(int)ROUND(fVar40);
            iVar36 = param_1[0x1c];
            puVar16 = puVar16 + 1;
            uVar20 = local_260;
            uVar7 = local_258;
            local_238 = fVar40;
          } while (iVar5 < iVar36 * (int)param_3);
        }
        *(uint *)((longlong)&local_290 + lVar32 + lVar28) = uVar20;
        *(undefined4 *)((longlong)local_2a0 + lVar32 + lVar28 + 8) = 0;
        *(int **)((longlong)local_2a0 + lVar32 + lVar28) = &local_1e8;
        *(undefined1 **)((longlong)local_2a0 + lVar32 + lVar28 + -8) = local_1e0;
        *(undefined8 *)(auStack_2c8 + lVar32 + lVar28 + -8) = 0x14f8663eb;
        local_260 = silk_Encode(lVar35,param_1 + 2,puVar21,param_3);
        puVar24 = auStack_2c8 + lVar32 + lVar28;
        if (local_260 == 0) {
          iVar36 = param_1[0x14];
          if (param_1[0xde4] == 1000) {
            if (iVar36 == 8000) {
              local_264 = 0x44d;
            }
            else if (iVar36 == 12000) {
              local_264 = 0x44e;
            }
            else if (iVar36 == 16000) {
              local_264 = 0x44f;
            }
          }
          else if (iVar36 != 16000) {
            *(undefined8 *)(auStack_2c8 + lVar32 + lVar28 + -8) = 0x14f86645e;
            celt_fatal("assertion failed: st->silk_mode.internalSampleRate == 16000",
                       "../../../third_party/opus/src/src/opus_encoder.c",0x747);
          }
          iVar5 = local_228;
          uVar20 = local_254;
          iVar36 = local_264;
          if ((param_1[0x18] == 0) || (param_1[0x11b6] != 0)) {
            iVar37 = 0;
          }
          else {
            iVar37 = 1;
          }
          param_1[0x12] = iVar37;
          if (local_1e8 == 0) {
            iVar5 = param_1[0x24];
            iVar37 = param_1[0xde4];
            iVar26 = param_1[0xddc];
            param_1[0x11b7] = 0;
            *(undefined8 *)(auStack_2c8 + lVar32 + lVar28 + -8) = 0x14f8664b5;
            bVar3 = FUN_14f864bc0(iVar37,(longlong)iVar5 / (longlong)(int)param_3 & 0xffffffff,
                                  iVar36,iVar26);
            local_220[-1] = bVar3;
            uVar10 = 1;
            puVar25 = auStack_2c8 + lVar32 + lVar28;
            goto LAB_14f8670b0;
          }
          puVar22 = auStack_2c8 + lVar32 + lVar28;
          if (iVar37 != 0) {
            iVar36 = param_1[0xddc];
            iVar37 = param_1[0x28];
            *(undefined8 *)(auStack_2c8 + lVar32 + lVar28 + -8) = 0x14f8664e0;
            local_268 = FUN_14f863e34(uVar20,iVar37,iVar5,iVar36);
            local_250 = 0;
            param_1[0xdea] = 1;
            local_258 = (uint)(local_268 != 0);
            puVar22 = auStack_2c8 + lVar32 + lVar28;
            uVar7 = local_258;
          }
          goto LAB_14f866504;
        }
      }
LAB_14f866f90:
      uVar10 = 0xfffffffd;
      puVar25 = puVar24;
      goto LAB_14f8670b0;
    }
    if (iVar36 == 1000) {
      if (param_3 == (float)((iVar26 * 2) / 0x19)) {
        iVar6 = iVar26 / 0x19;
      }
      else if (param_3 == (float)((iVar26 * 3) / 0x19)) {
        iVar6 = iVar17;
      }
    }
  }
  if ((int)local_240 != -1) {
    param_1[0x775] = (int)local_240;
    param_1[0x776] = local_224;
  }
  local_288[0] = param_13;
  local_290._0_4_ = iVar5;
  local_2a0[2] = local_210;
  local_2a0[0] = param_5;
  local_2a8 = local_220;
  uStack_2d0 = 0x14f865b9b;
  uVar10 = FUN_14f8646ec(param_1,local_200,(longlong)(int)param_3 / (longlong)iVar6 & 0xffffffff);
  puVar25 = auStack_2c8;
LAB_14f8670b0:
  *(undefined8 *)(puVar25 + -8) = 0x14f8670bf;
  return uVar10;
}

// opus_encoder_create @ 14f867110

void * opus_encoder_create(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  void *_Memory;
  
  if (((((param_1 == 48000) || (param_1 == 24000)) || (param_1 == 16000)) ||
      ((param_1 == 12000 || (param_1 == 8000)))) &&
     ((param_2 - 1U < 2 && (((param_3 - 0x800U & 0xfffffffc) == 0 && (param_3 != 0x802)))))) {
    iVar1 = opus_encoder_get_size(param_2);
    _Memory = malloc((longlong)iVar1);
    if (_Memory != (void *)0x0) {
      iVar1 = opus_encoder_init(_Memory,param_1,param_2,param_3);
      if (param_4 != (int *)0x0) {
        *param_4 = iVar1;
      }
      if (iVar1 == 0) {
        return _Memory;
      }
      free(_Memory);
      return (void *)0x0;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = -7;
    }
  }
  else if (param_4 != (int *)0x0) {
    *param_4 = -1;
  }
  return (void *)0x0;
}

// opus_encoder_ctl @ 14f8671f8

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 opus_encoder_ctl(int *param_1,int param_2,uint *param_3)

{
  int *_Dst;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint local_res18;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  lVar5 = (longlong)*param_1 + (longlong)param_1;
  local_res18 = (uint)param_3;
  if (param_2 < 0x2720) {
    if (param_2 == 0x271f) {
      if (param_3 != (uint *)0x0) {
        uVar4 = 0x271f;
        goto LAB_14f8677bc;
      }
    }
    else {
      switch(param_2) {
      case 4000:
        if ((((local_res18 - 0x800 & 0xfffffffc) == 0) && (local_res18 != 0x802)) &&
           ((param_1[0xdeb] != 0 || (param_1[0x1b] == local_res18)))) {
          param_1[0x1b] = local_res18;
          param_1[0x30] = local_res18;
          return 0;
        }
        return 0xffffffff;
      case 0xfa1:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x1b];
LAB_14f8672b7:
          *param_3 = uVar1;
          return 0;
        }
        break;
      case 0xfa2:
        if ((local_res18 != 0xfffffc18) && (local_res18 != 0xffffffff)) {
          if ((int)local_res18 < 1) {
            return 0xffffffff;
          }
          if ((int)local_res18 < 0x1f5) {
            local_res18 = 500;
          }
          else if (param_1[0x1c] * 300000 < (int)local_res18) {
            local_res18 = param_1[0x1c] * 300000;
          }
        }
        param_1[0x29] = local_res18;
        return 0;
      case 0xfa3:
        if (param_3 != (uint *)0x0) {
          uVar1 = FUN_14f867ea4(param_1,param_1[0xde7],0x4fc);
          *param_3 = uVar1;
          return 0;
        }
        break;
      case 0xfa4:
        if (local_res18 - 0x44d < 5) {
          param_1[0x21] = local_res18;
LAB_14f867372:
          if (local_res18 != 0x44d) {
            iVar2 = 16000;
            if (local_res18 == 0x44e) {
              iVar2 = 12000;
            }
            param_1[5] = iVar2;
            return 0;
          }
          param_1[5] = 8000;
          return 0;
        }
        break;
      case 0xfa5:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x21];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfa6:
        if (local_res18 < 2) {
          param_1[0x25] = local_res18;
          param_1[0xf] = 1 - local_res18;
          return 0;
        }
        break;
      case 0xfa7:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x25];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfa8:
        if ((local_res18 - 0x44d < 5) || (local_res18 == 0xfffffc18)) {
          param_1[0x20] = local_res18;
          goto LAB_14f867372;
        }
        break;
      case 0xfa9:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0xde8];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfaa:
        if (local_res18 < 0xb) {
          param_1[0xb] = local_res18;
          uVar4 = 0xfaa;
LAB_14f867439:
          opus_custom_encoder_ctl(lVar5,uVar4);
          return 0;
        }
        break;
      case 0xfab:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0xb];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfac:
        if (local_res18 < 2) {
          param_1[0xc] = local_res18;
          return 0;
        }
        break;
      case 0xfad:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0xc];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfae:
        if (local_res18 < 0x65) {
          param_1[10] = local_res18;
          uVar4 = 0xfae;
          goto LAB_14f867439;
        }
        break;
      case 0xfaf:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[10];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfb0:
        if (local_res18 < 2) {
          param_1[0x2e] = local_res18;
          return 0;
        }
        break;
      case 0xfb1:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x2e];
          goto LAB_14f8672b7;
        }
        break;
      default:
        return 0xfffffffb;
      case 0xfb4:
        if (local_res18 < 2) {
          param_1[0x26] = local_res18;
          return 0;
        }
        break;
      case 0xfb5:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x26];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfb6:
        if (((0 < (int)local_res18) && ((int)local_res18 <= param_1[0x1c])) ||
           (local_res18 == 0xfffffc18)) {
          param_1[0x1e] = local_res18;
          return 0;
        }
        break;
      case 0xfb7:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x1e];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfb8:
        if ((local_res18 == 0xfffffc18) || (local_res18 - 0xbb9 < 2)) {
          param_1[0x1f] = local_res18;
          return 0;
        }
        break;
      case 0xfb9:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x1f];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfbb:
        if (param_3 != (uint *)0x0) {
          iVar2 = param_1[0x24];
          *param_3 = iVar2 / 400;
          if (param_1[0x1b] != 0x803) {
            *param_3 = param_1[0x1d] + iVar2 / 400;
            return 0;
          }
          return 0;
        }
        break;
      case 0xfbc:
        iVar2 = param_1[1];
        tonality_analysis_reset(param_1 + 0x2f);
        _Dst = param_1 + 0xddc;
        memset(_Dst,0,(longlong)param_1 + (0x46e0 - (longlong)_Dst));
        opus_custom_encoder_ctl(lVar5,0xfbc);
        silk_InitEncoder((longlong)iVar2 + (longlong)param_1,param_1[0x2d],local_a8);
        *_Dst = param_1[0x1c];
        param_1[0xdeb] = 1;
        *(undefined2 *)(param_1 + 0xddd) = 0x4000;
        param_1[0xddf] = 0x3f800000;
        param_1[0xde4] = 0x3e9;
        param_1[0xde8] = 0x451;
        iVar2 = silk_lin2log(0x3c);
        param_1[0xdde] = iVar2 << 8;
        return 0;
      case 0xfbd:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x24];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfbf:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x11b7];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfc4:
        if (local_res18 - 8 < 0x11) {
          param_1[0x2a] = local_res18;
          return 0;
        }
        break;
      case 0xfc5:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x2a];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfc8:
        if (local_res18 - 5000 < 10) {
          param_1[0x27] = local_res18;
          return 0;
        }
        break;
      case 0xfc9:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x27];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfca:
        if (local_res18 < 2) {
          param_1[0x13] = local_res18;
          return 0;
        }
        break;
      case 0xfcb:
        if (param_3 != (uint *)0x0) {
          uVar1 = param_1[0x13];
          goto LAB_14f8672b7;
        }
        break;
      case 0xfce:
        if (local_res18 < 2) {
          uVar4 = 0xfce;
          goto LAB_14f867439;
        }
        break;
      case 0xfcf:
        if (param_3 != (uint *)0x0) {
          opus_custom_encoder_ctl(lVar5,0xfcf);
          return 0;
        }
        break;
      case 0xfd1:
        if (param_3 != (uint *)0x0) {
          if ((param_1[0xe] == 0) || (param_1[0xde5] != 1000 && param_1[0xde5] != 0x3e9)) {
            if (param_1[0x2e] == 0) {
              *param_3 = 0;
              return 0;
            }
            iVar2 = param_1[0x11b4];
          }
          else {
            lVar5 = (longlong)param_1[1];
            iVar2 = *(int *)(lVar5 + 0x17d8 + (longlong)param_1);
            *param_3 = (uint)(9 < iVar2);
            if (iVar2 < 10) {
              return 0;
            }
            if (param_1[3] != 2) {
              return 0;
            }
            if (*(int *)(lVar5 + 0x4f24 + (longlong)param_1) != 0) {
              return 0;
            }
            iVar2 = *(int *)(lVar5 + 0x3f40 + (longlong)param_1);
          }
          *param_3 = (uint)(9 < iVar2);
          return 0;
        }
      }
    }
  }
  else {
    if (param_2 == 0x2728) {
      param_1[0x2c] = local_res18;
      uVar3 = opus_custom_encoder_ctl(lVar5,0x2728);
      return uVar3;
    }
    if (param_2 == 0x272a) {
      uVar4 = 0x272a;
      *(uint **)(param_1 + 0xdec) = param_3;
LAB_14f8677bc:
      uVar3 = opus_custom_encoder_ctl(lVar5,uVar4);
      return uVar3;
    }
    if (param_2 == 0x2afa) {
      if ((local_res18 - 1000 < 3) || (local_res18 == 0xfffffc18)) {
        param_1[0x22] = local_res18;
        return 0;
      }
    }
    else if (param_2 == 0x2b0a) {
      if (local_res18 + 1 < 0x66) {
        param_1[0x23] = local_res18;
        return 0;
      }
    }
    else {
      if (param_2 != 0x2b0b) {
        return 0xfffffffb;
      }
      if (param_3 != (uint *)0x0) {
        uVar1 = param_1[0x23];
        goto LAB_14f8672b7;
      }
    }
  }
  return 0xffffffff;
}

// opus_encoder_get_size @ 14f867964

int opus_encoder_get_size(int param_1)

{
  int iVar1;
  uint local_res8 [8];
  
  if ((param_1 - 1U < 2) && (iVar1 = silk_Get_Encoder_Size(local_res8), iVar1 == 0)) {
    local_res8[0] = local_res8[0] + 7 & 0xfffffff8;
    iVar1 = celt_encoder_get_size(param_1);
    return iVar1 + local_res8[0] + 0x46e0;
  }
  return 0;
}

// opus_encoder_init @ 14f8679b4

undefined8 opus_encoder_init(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  uint local_res10 [2];
  
  if (((((param_2 == 48000) || (param_2 == 24000)) || (param_2 == 16000)) ||
      ((param_2 == 12000 || (param_2 == 8000)))) &&
     ((param_3 - 1U < 2 && (((param_4 - 0x800U & 0xfffffffc) == 0 && (param_4 != 0x802)))))) {
    iVar1 = opus_encoder_get_size(param_3);
    memset(param_1,0,(longlong)iVar1);
    iVar1 = silk_Get_Encoder_Size(local_res10);
    if (iVar1 == 0) {
      param_1[1] = 0x46e0;
      local_res10[0] = local_res10[0] + 7 & 0xfffffff8;
      param_1[0x1c] = param_3;
      lVar2 = (longlong)(int)(local_res10[0] + 0x46e0) + (longlong)param_1;
      *param_1 = local_res10[0] + 0x46e0;
      param_1[0xddc] = param_3;
      param_1[0x24] = param_2;
      iVar1 = opus_select_arch();
      param_1[0x2d] = iVar1;
      iVar1 = silk_InitEncoder(param_1 + 0x11b8,iVar1,param_1 + 2);
      if (iVar1 == 0) {
        param_1[10] = 0;
        param_1[0xc] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x13] = 0;
        param_1[4] = param_1[0x24];
        param_1[5] = 16000;
        param_1[7] = 16000;
        param_1[2] = param_3;
        param_1[3] = param_3;
        param_1[6] = 8000;
        param_1[8] = 0x14;
        param_1[9] = 25000;
        param_1[0xb] = 9;
        iVar1 = celt_encoder_init(lVar2,param_2,param_3,param_1[0x2d]);
        if (iVar1 == 0) {
          opus_custom_encoder_ctl(lVar2,0x2720,0);
          opus_custom_encoder_ctl(lVar2,0xfaa,param_1[0xb]);
          param_1[0x23] = -1;
          param_1[0x29] = -1000;
          param_1[0x1f] = -1000;
          param_1[0x20] = -1000;
          param_1[0x1e] = -1000;
          param_1[0x22] = -1000;
          param_1[0x25] = 1;
          param_1[0x26] = 1;
          param_1[0x1b] = param_4;
          param_1[0x2b] = param_1[0x24] / 100;
          param_1[0x21] = 0x451;
          param_1[0x28] = param_2 * param_3 + 3000;
          param_1[0x2a] = 0x18;
          param_1[0x27] = 5000;
          *(undefined2 *)(param_1 + 0xddd) = 0x4000;
          param_1[0x1d] = param_1[0x24] / 0xfa;
          param_1[0xddf] = 0x3f800000;
          iVar1 = silk_lin2log(0x3c);
          param_1[0xdde] = iVar1 << 8;
          param_1[0xdeb] = 1;
          param_1[0xde4] = 0x3e9;
          param_1[0xde8] = 0x451;
          tonality_analysis_init(param_1 + 0x2f,param_1[0x24]);
          param_1[0x30] = param_1[0x1b];
          return 0;
        }
      }
      return 0xfffffffd;
    }
  }
  return 0xffffffff;
}

// FUN_14f867c50 @ 14f867c50

void FUN_14f867c50(longlong param_1,int *param_2,int *param_3,float *param_4,float *param_5,
                  uint param_6,int param_7)

{
  float fVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = (float)*param_3 * __real_31800000;
  fVar5 = (float)*param_2 * __real_31800000;
  fVar7 = (float)param_2[1] * __real_31800000;
  fVar8 = (float)param_2[2] * __real_31800000;
  fVar9 = (float)param_3[1] * __real_31800000;
  if (0 < (int)param_6) {
    uVar2 = (ulonglong)param_6;
    param_1 = param_1 - (longlong)param_5;
    do {
      fVar1 = *(float *)(param_1 + (longlong)param_5);
      fVar4 = fVar5 * fVar1 + *param_4;
      fVar3 = (fVar8 * fVar1 - fVar9 * fVar4) + __real_0da24260;
      *param_4 = (param_4[1] - fVar6 * fVar4) + fVar7 * fVar1;
      param_4[1] = fVar3;
      *param_5 = fVar4;
      param_5 = param_5 + param_7;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// FUN_14f867d68 @ 14f867d68

void FUN_14f867d68(longlong param_1,longlong param_2,float param_3,float param_4,int param_5,
                  int param_6,int param_7,float *param_8,int param_9)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = __real_3f000000;
  fVar8 = __real_3f800000;
  param_3 = __real_3f800000 - param_3;
  iVar2 = (int)(48000 / (longlong)param_9);
  param_4 = __real_3f800000 - param_4;
  uVar5 = (longlong)param_5 / (longlong)iVar2;
  iVar3 = (int)uVar5;
  uVar5 = uVar5 & 0xffffffff;
  iVar6 = 0;
  if (0 < iVar3) {
    pfVar4 = (float *)(param_2 + 4);
    do {
      fVar7 = *param_8 * *param_8;
      param_8 = param_8 + iVar2;
      fVar7 = ((fVar8 - fVar7) * param_3 + fVar7 * param_4) *
              (*(float *)((param_1 - param_2) + -4 + (longlong)pfVar4) -
              *(float *)((param_1 - param_2) + (longlong)pfVar4)) * fVar1;
      pfVar4[-1] = pfVar4[-1] - fVar7;
      *pfVar4 = fVar7 + *pfVar4;
      pfVar4 = pfVar4 + param_7;
      uVar5 = uVar5 - 1;
      iVar6 = iVar3;
    } while (uVar5 != 0);
  }
  if (iVar6 < param_6) {
    pfVar4 = (float *)(param_2 + ((longlong)(iVar6 * param_7) + 1) * 4);
    uVar5 = (ulonglong)(uint)(param_6 - iVar6);
    do {
      fVar8 = (*(float *)((param_1 - param_2) + -4 + (longlong)pfVar4) -
              *(float *)((param_1 - param_2) + (longlong)pfVar4)) * fVar1 * param_4;
      pfVar4[-1] = pfVar4[-1] - fVar8;
      *pfVar4 = fVar8 + *pfVar4;
      pfVar4 = pfVar4 + param_7;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// FUN_14f867ea4 @ 14f867ea4

ulonglong FUN_14f867ea4(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x90) / 400;
  }
  uVar1 = *(uint *)(param_1 + 0xa4);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == 0xfffffc18) {
    return (ulonglong)
           (uint)((*(int *)(param_1 + 0x90) * 0x3c) / param_2 +
                 *(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x90));
  }
  if (uVar1 == 0xffffffff) {
    uVar2 = (longlong)(*(int *)(param_1 + 0x90) * param_3 * 8) / (longlong)param_2 & 0xffffffff;
  }
  return uVar2;
}


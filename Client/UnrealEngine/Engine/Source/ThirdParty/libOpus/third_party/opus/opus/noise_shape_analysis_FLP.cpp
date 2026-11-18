// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_noise_shape_analysis_FLP @ 14f886f44

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void silk_noise_shape_analysis_FLP
               (longlong param_1,float *param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_5c8 [32];
  int local_5a8;
  int local_598;
  int local_594;
  longlong local_590;
  float *local_588;
  longlong local_580;
  float local_578 [28];
  undefined1 local_508 [112];
  undefined1 local_498 [960];
  ulonglong local_d8;
  
  fVar19 = __real_3c000000;
  fVar23 = __real_be800000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_5c8;
  local_590 = param_4 + (longlong)*(int *)(param_1 + 0x11f8) * -4;
  fVar21 = (float)*(int *)(param_1 + 0x127c) * __real_3c000000;
  fVar20 = (float)(*(int *)(param_1 + 0x126c) + *(int *)(param_1 + 0x1268)) * __real_3f000000 *
           __real_38000000;
  fVar12 = (fVar21 - __real_41a00000) * __real_be800000;
  param_2[0xae] = fVar20;
  local_588 = param_2;
  local_580 = param_3;
  dVar15 = exp((double)fVar12);
  fVar12 = __real_3f800000;
  iVar11 = 0;
  fVar18 = (float)(__real_3ff0000000000000 / (dVar15 + __real_3ff0000000000000));
  param_2[0xaf] = fVar18;
  if (*(int *)(param_1 + 0x1244) == 0) {
    fVar17 = fVar12 - (float)*(int *)(param_1 + 0x11b4) * __real_3b800000;
    fVar21 = fVar21 - (fVar20 * __real_3f000000 + __real_3f000000) * (fVar18 + fVar18) * fVar17 *
                      fVar17;
  }
  fVar18 = 0.0;
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    fVar19 = *(float *)(param_1 + 0x2764) + *(float *)(param_1 + 0x2764);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x11e0) * 2;
    iVar3 = (*(short *)(param_1 + 0x11e4) * 5) / 2;
    fVar17 = 0.0;
    fVar19 = (__real_40c00000 - (float)*(int *)(param_1 + 0x127c) * __real_3ecccccd * fVar19) *
             (fVar12 - fVar20);
    if (0 < iVar3) {
      lVar9 = local_580;
      fVar20 = 0.0;
      iVar10 = iVar11;
      do {
        dVar15 = (double)silk_energy_FLP(lVar9,iVar4);
        dVar15 = log10((double)((float)dVar15 + (float)iVar4));
        if (0 < iVar10) {
          dVar16 = (double)((float)(dVar15 * __real_400a934f0979a36c) - fVar20);
          fVar17 = fVar17 + (float)(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                    SUB84(dVar16,0) &
                                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        }
        lVar9 = lVar9 + (longlong)iVar4 * 4;
        iVar10 = iVar10 + 1;
        param_2 = local_588;
        fVar20 = (float)(dVar15 * __real_400a934f0979a36c);
      } while (iVar10 < iVar3);
    }
    if (fVar17 <= (float)(iVar3 + -1) * __real_3f19999a) {
      *(undefined1 *)(param_1 + 0x12ae) = 1;
      goto LAB_14f8871bd;
    }
  }
  *(undefined1 *)(param_1 + 0x12ae) = 0;
LAB_14f8871bd:
  fVar20 = __real_407fef9e;
  iVar4 = *(int *)(param_1 + 0x11e4);
  local_594 = 0;
  fVar22 = __real_3f70a3d7 /
           (param_2[0xb0] * __real_3a83126f * param_2[0xb0] * __real_3a83126f + fVar12);
  fVar17 = (float)*(int *)(param_1 + 0x1240) * __real_37800000 + param_2[0xaf] * __real_3c23d70a;
  if (0 < iVar4) {
    local_580 = 0;
    local_598 = 0;
    pfVar7 = param_2;
    do {
      lVar2 = local_580;
      iVar4 = *(int *)(param_1 + 0x11e0) * 3;
      iVar3 = (*(int *)(param_1 + 0x11fc) + *(int *)(param_1 + 0x11e0) * -3) / 2;
      local_588 = pfVar7;
      silk_apply_sine_window_FLP(local_498,local_590,1,iVar3);
      memcpy(local_498 + (longlong)iVar3 * 4,(void *)(local_590 + (longlong)iVar3 * 4),
             (longlong)iVar4 << 2);
      lVar9 = local_590;
      lVar6 = (longlong)(iVar3 + iVar4);
      silk_apply_sine_window_FLP(local_498 + lVar6 * 4,local_590 + lVar6 * 4,2,iVar3);
      local_590 = lVar9 + (longlong)*(int *)(param_1 + 0x11ec) * 4;
      if (*(int *)(param_1 + 0x1240) < 1) {
        silk_autocorrelation_FLP
                  (local_578,local_498,*(undefined4 *)(param_1 + 0x11fc),
                   *(int *)(param_1 + 0x121c) + 1);
      }
      else {
        local_5a8 = *(int *)(param_1 + 0x121c);
        silk_warped_autocorrelation_FLP
                  (local_578,local_498,fVar17,*(undefined4 *)(param_1 + 0x11fc));
      }
      local_578[0] = local_578[0] + local_578[0] * ___real_37fba882 + fVar12;
      fVar13 = (float)silk_schur_FLP(local_508,local_578,*(undefined4 *)(param_1 + 0x121c));
      pfVar1 = param_2 + (longlong)local_598 + 0x3d;
      silk_k2a_FLP(pfVar1,local_508,*(undefined4 *)(param_1 + 0x121c));
      dVar15 = sqrt((double)fVar13);
      *pfVar7 = (float)dVar15;
      if (0 < *(int *)(param_1 + 0x1240)) {
        fVar14 = (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000);
        fVar13 = *(float *)((longlong)param_2 +
                           (longlong)*(int *)(param_1 + 0x121c) * 4 + lVar2 + 0xf0);
        iVar4 = *(int *)(param_1 + 0x121c) + -2;
        lVar9 = (longlong)iVar4;
        if (-1 < iVar4) {
          do {
            fVar13 = fVar13 * fVar14 + *(float *)((longlong)param_2 + lVar9 * 4 + lVar2 + 0xf4);
            lVar9 = lVar9 + -1;
          } while (-1 < lVar9);
        }
        *pfVar7 = (fVar12 / (fVar12 - fVar13 * fVar14)) * (float)dVar15;
      }
      silk_bwexpander_FLP(pfVar1,*(undefined4 *)(param_1 + 0x121c),fVar22);
      iVar4 = *(int *)(param_1 + 0x121c);
      iVar3 = iVar11;
      iVar10 = iVar11;
      if (*(int *)(param_1 + 0x1240) < 1) {
        do {
          if (iVar4 < 1) break;
          pfVar7 = (float *)((longlong)param_2 + lVar2 + 0xf4);
          fVar13 = __real_bf800000;
          iVar8 = iVar11;
          do {
            fVar14 = (float)(double)CONCAT44((uint)((ulonglong)(double)*pfVar7 >> 0x20) &
                                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                             SUB84((double)*pfVar7,0) &
                                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
            iVar5 = iVar8;
            if (fVar14 <= fVar13) {
              iVar5 = iVar3;
              fVar14 = fVar13;
            }
            fVar13 = fVar14;
            iVar8 = iVar8 + 1;
            pfVar7 = pfVar7 + 1;
            iVar3 = iVar5;
          } while (iVar8 < iVar4);
          if (fVar13 <= fVar20) break;
          silk_bwexpander_FLP((longlong)param_2 + lVar2 + 0xf4,iVar4,
                              __real_3f7d70a4 -
                              (((float)iVar10 * __real_3dcccccd + __real_3f4ccccd) *
                              (fVar13 - fVar20)) / ((float)(iVar5 + 1) * fVar13));
          iVar10 = iVar10 + 1;
        } while (iVar10 < 10);
      }
      else {
        FUN_14f8877e8(pfVar1);
        local_580 = lVar2;
        local_588 = pfVar7;
      }
      pfVar7 = local_588 + 1;
      local_598 = local_598 + 0x18;
      local_594 = local_594 + 1;
      iVar4 = *(int *)(param_1 + 0x11e4);
      local_580 = local_580 + 0x60;
      local_588 = pfVar7;
    } while (local_594 < iVar4);
  }
  dVar15 = pow(__real_4000000000000000,(double)((fVar21 + fVar19) * ___real_be23d70a));
  dVar16 = pow(__real_4000000000000000,__real_3fd47ae140000000);
  pfVar7 = param_2;
  iVar3 = iVar11;
  if (0 < iVar4) {
    do {
      iVar3 = iVar3 + 1;
      *pfVar7 = (float)dVar15 * *pfVar7 + (float)dVar16;
      iVar4 = *(int *)(param_1 + 0x11e4);
      pfVar7 = pfVar7 + 1;
    } while (iVar3 < iVar4);
  }
  fVar19 = __real_3e4ccccd;
  iVar3 = *(int *)(param_1 + 0x11b4);
  fVar20 = (((float)*(int *)(param_1 + 0x1268) * __real_38000000 - fVar12) * __real_3f000000 +
           fVar12) * __real_40800000 * (float)iVar3 * __real_3b800000;
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    if (0 < iVar4) {
      pfVar7 = param_2 + 0x9d;
      iVar3 = iVar11;
      do {
        iVar3 = iVar3 + 1;
        fVar21 = __real_40400000 / (float)(int)pfVar7[-100] +
                 fVar19 / (float)*(int *)(param_1 + 0x11e0);
        *pfVar7 = fVar21 - fVar12;
        pfVar7[4] = (fVar12 - fVar21) - fVar20 * fVar21;
        pfVar7 = pfVar7 + 1;
        iVar4 = *(int *)(param_1 + 0x11e4);
      } while (iVar3 < iVar4);
      iVar3 = *(int *)(param_1 + 0x11b4);
    }
    fVar23 = fVar23 - (float)iVar3 * ___real_3e866666 * __real_3b800000;
  }
  else {
    iVar3 = 1;
    fVar21 = __real_3fa66666 / (float)*(int *)(param_1 + 0x11e0);
    fVar20 = fVar20 * fVar21 * __real_3f19999a;
    param_2[0x9d] = fVar21 - fVar12;
    param_2[0xa1] = (fVar12 - fVar21) - fVar20;
    iVar4 = *(int *)(param_1 + 0x11e4);
    if (1 < iVar4) {
      pfVar7 = param_2 + 0xa2;
      do {
        iVar3 = iVar3 + 1;
        pfVar7[-4] = param_2[0x9d];
        *pfVar7 = param_2[0xa1];
        pfVar7 = pfVar7 + 1;
        iVar4 = *(int *)(param_1 + 0x11e4);
      } while (iVar3 < iVar4);
    }
  }
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    dVar15 = sqrt((double)*(float *)(param_1 + 0x2764));
    fVar18 = (float)dVar15 *
             ((fVar12 - (fVar12 - param_2[0xaf]) * param_2[0xae]) * fVar19 + __real_3e99999a);
  }
  fVar12 = __real_3ecccccd;
  if (0 < iVar4) {
    param_2 = param_2 + 0xa5;
    do {
      iVar11 = iVar11 + 1;
      fVar19 = (fVar18 - *(float *)(param_1 + 0x1c1c)) * fVar12 + *(float *)(param_1 + 0x1c1c);
      *(float *)(param_1 + 0x1c1c) = fVar19;
      param_2[4] = fVar19;
      fVar19 = (fVar23 - *(float *)(param_1 + 0x1c20)) * fVar12 + *(float *)(param_1 + 0x1c20);
      *(float *)(param_1 + 0x1c20) = fVar19;
      *param_2 = fVar19;
      param_2 = param_2 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x11e4));
  }
  return;
}

// FUN_14f8877e8 @ 14f8877e8

void FUN_14f8877e8(float *param_1,float param_2,float param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar2 = 0;
  lVar7 = (longlong)param_4;
  lVar5 = (longlong)(param_4 + -1);
  if (0 < param_4 + -1) {
    pfVar3 = param_1 + lVar5 + -1;
    do {
      lVar5 = lVar5 + -1;
      *pfVar3 = *pfVar3 - param_2 * pfVar3[1];
      pfVar3 = pfVar3 + -1;
    } while (0 < lVar5);
  }
  fVar13 = __real_3f800000 - param_2 * param_2;
  fVar11 = fVar13 / (param_2 * *param_1 + __real_3f800000);
  if (0 < param_4) {
    lVar5 = 0;
    do {
      param_1[lVar5] = fVar11 * param_1[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  iVar6 = 0;
  do {
    iVar4 = 0;
    pfVar3 = param_1;
    fVar10 = __real_bf800000;
    fVar12 = __real_bf800000;
    iVar8 = iVar2;
    if (0 < param_4) {
      do {
        fVar10 = (float)(double)CONCAT44((uint)((ulonglong)(double)*pfVar3 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84((double)*pfVar3,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        iVar2 = iVar4;
        if (fVar10 <= fVar12) {
          iVar2 = iVar8;
          fVar10 = fVar12;
        }
        iVar4 = iVar4 + 1;
        pfVar3 = pfVar3 + 1;
        fVar12 = fVar10;
        iVar8 = iVar2;
      } while (iVar4 < param_4);
    }
    if (fVar10 <= param_3) {
      return;
    }
    if (1 < lVar7) {
      fVar12 = *param_1;
      lVar5 = lVar7 + -1;
      pfVar3 = param_1;
      do {
        pfVar1 = pfVar3 + 1;
        fVar9 = *pfVar1 * param_2 + fVar12;
        fVar12 = *pfVar1;
        *pfVar3 = fVar9;
        lVar5 = lVar5 + -1;
        pfVar3 = pfVar1;
      } while (lVar5 != 0);
    }
    lVar5 = 0;
    fVar11 = __real_3f800000 / fVar11;
    if (0 < param_4) {
      do {
        param_1[lVar5] = fVar11 * param_1[lVar5];
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar7);
    }
    silk_bwexpander_FLP(param_1,param_4,
                        __real_3f7d70a4 -
                        (((float)iVar6 * __real_3dcccccd + __real_3f4ccccd) * (fVar10 - param_3)) /
                        ((float)(iVar2 + 1) * fVar10));
    lVar5 = lVar7 + -1;
    if (0 < lVar5) {
      pfVar3 = param_1 + lVar7 + -2;
      do {
        lVar5 = lVar5 + -1;
        *pfVar3 = *pfVar3 - param_2 * pfVar3[1];
        pfVar3 = pfVar3 + -1;
      } while (0 < lVar5);
    }
    lVar5 = 0;
    fVar11 = fVar13 / (param_2 * *param_1 + __real_3f800000);
    if (0 < param_4) {
      do {
        param_1[lVar5] = fVar11 * param_1[lVar5];
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar7);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 10);
  return;
}


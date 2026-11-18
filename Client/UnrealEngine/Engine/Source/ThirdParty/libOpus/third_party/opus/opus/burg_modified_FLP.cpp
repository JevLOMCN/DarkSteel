// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_burg_modified_FLP @ 14f8932bc

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

float silk_burg_modified_FLP
                (longlong param_1,longlong param_2,float param_3,uint param_4,uint param_5,
                uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  float *pfVar22;
  ulonglong uVar23;
  float *pfVar24;
  double *pdVar25;
  int iVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_4f8 [32];
  int local_4d8;
  uint local_4d4;
  longlong local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  double dStack_4a0;
  double local_498 [24];
  double local_3d8 [25];
  double adStack_310 [5];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248 [25];
  double adStack_180 [5];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_4f8;
  uVar23 = (ulonglong)param_5;
  uVar18 = (ulonglong)(int)param_4;
  local_4d4 = param_4;
  local_4c8 = param_2;
  local_4a8 = param_1;
  if (0x180 < (int)(param_4 * param_5)) {
    celt_fatal("assertion failed: subfr_length * nb_subfr <= MAX_FRAME_SIZE",
               "../../../third_party/opus/src/silk/float/burg_modified_FLP.c",0x37);
  }
  dVar27 = (double)silk_energy_FLP(param_2);
  memset(adStack_310 + 1,0,0xc0);
  if (0 < (int)param_5) {
    lVar14 = uVar18 << 2;
    lVar19 = local_4c8;
    local_4d0 = lVar14;
    do {
      if (1 < (int)(param_6 + 1)) {
        iVar26 = (int)uVar18;
        pdVar25 = adStack_310;
        uVar18 = (ulonglong)param_6;
        lVar14 = lVar19;
        do {
          pdVar25 = (double *)((longlong)pdVar25 + 8);
          iVar26 = iVar26 + -1;
          lVar14 = lVar14 + 4;
          dVar28 = (double)silk_inner_product_FLP(lVar19,lVar14,iVar26);
          *pdVar25 = dVar28 + *pdVar25;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        uVar18 = (ulonglong)local_4d4;
        lVar14 = local_4d0;
      }
      param_4 = (uint)uVar18;
      lVar19 = lVar19 + lVar14;
      uVar23 = uVar23 - 1;
      param_2 = local_4c8;
    } while (uVar23 != 0);
  }
  dVar11 = __real_3ff0000000000000;
  lVar14 = 0;
  local_4d8 = 0;
  dVar10 = dVar27 * __real_3ee4f8b580000000;
  adStack_180[1] = adStack_310[1];
  adStack_180[2] = adStack_310[2];
  adStack_180[3] = adStack_310[3];
  adStack_180[4] = adStack_310[4];
  local_158 = local_2e8;
  uStack_150 = uStack_2e0;
  local_148 = local_2d8;
  uStack_140 = uStack_2d0;
  local_138 = local_2c8;
  uStack_130 = uStack_2c0;
  local_128 = local_2b8;
  uStack_120 = uStack_2b0;
  local_118 = local_2a8;
  uStack_110 = uStack_2a0;
  local_108 = local_298;
  uStack_100 = uStack_290;
  dVar29 = dVar10 + dVar27 + __real_3e112e0be0000000;
  local_f8 = local_288;
  uStack_f0 = uStack_280;
  local_3d8[0] = dVar29;
  local_248[0] = dVar29;
  local_e8 = local_278;
  uStack_e0 = uStack_270;
  local_d8 = local_268;
  uStack_d0 = uStack_260;
  local_c8 = local_258;
  uStack_c0 = uStack_250;
  dVar28 = __real_3ff0000000000000;
  if (0 < (int)param_6) {
    local_4d0 = (longlong)(int)param_4 * 4;
    iVar26 = 1;
    dVar12 = (double)param_3;
    local_4b0 = 0;
    local_4b8 = 0;
    local_4c0 = local_4d0 + -4;
    lVar19 = lVar14;
    lVar15 = param_2;
    dVar8 = __real_3ff0000000000000;
    do {
      uVar18 = (ulonglong)param_5;
      param_2 = lVar15;
      if (0 < (int)param_5) {
        lVar17 = local_4b8 - local_4c0;
        do {
          pfVar21 = (float *)(lVar15 + local_4c0);
          dVar28 = (double)*(float *)((longlong)pfVar21 + lVar17);
          dVar29 = (double)*pfVar21;
          if (0 < lVar19) {
            pfVar22 = (float *)(local_4c0 + 4 + lVar15);
            pfVar24 = (float *)(lVar17 + -4 + (longlong)pfVar21);
            lVar20 = lVar14;
            do {
              fVar1 = *pfVar24;
              fVar2 = *pfVar21;
              fVar3 = *pfVar22;
              fVar4 = *pfVar24;
              pfVar24 = pfVar24 + -1;
              adStack_310[lVar20 + 1] =
                   adStack_310[lVar20 + 1] -
                   (double)(*(float *)((longlong)pfVar21 + lVar17) * fVar1);
              fVar1 = *pfVar22;
              pfVar22 = pfVar22 + 1;
              dVar5 = *(double *)((longlong)local_498 + lVar20 * 8);
              dVar30 = *(double *)((longlong)local_498 + lVar20 * 8);
              adStack_180[lVar20 + 1] = adStack_180[lVar20 + 1] - (double)(fVar2 * fVar3);
              lVar20 = lVar20 + 1;
              dVar29 = dVar29 + (double)fVar1 * dVar5;
              dVar28 = dVar28 + (double)fVar4 * dVar30;
            } while (lVar20 < local_4b0);
          }
          if (-1 < lVar19) {
            pfVar21 = (float *)(lVar15 + local_4c0);
            pfVar22 = (float *)(local_4b8 + lVar15);
            lVar20 = lVar14;
            do {
              fVar1 = *pfVar22;
              pfVar22 = pfVar22 + -1;
              fVar2 = *pfVar21;
              pfVar21 = pfVar21 + 1;
              local_3d8[lVar20] = local_3d8[lVar20] - (double)fVar1 * dVar28;
              local_248[lVar20] = local_248[lVar20] - (double)fVar2 * dVar29;
              lVar20 = lVar20 + 1;
            } while (lVar20 <= local_4b0);
          }
          lVar15 = lVar15 + local_4d0;
          uVar18 = uVar18 - 1;
          param_2 = local_4c8;
        } while (uVar18 != 0);
      }
      dVar29 = local_3d8[0];
      dVar28 = *(double *)((longlong)adStack_310 + lVar19 + 8U);
      dVar5 = *(double *)((longlong)adStack_180 + lVar19 + 8);
      lVar17 = lVar14;
      lVar15 = lVar19;
      if (0 < local_4b0) {
        do {
          dVar30 = *(double *)((longlong)local_498 + lVar17 * 8);
          lVar17 = lVar17 + 1;
          dVar5 = dVar5 + dVar30 * *(double *)((longlong)adStack_310 + lVar15);
          dVar28 = dVar28 + dVar30 * *(double *)((longlong)adStack_180 + lVar15);
          lVar15 = lVar15 + -8;
        } while (lVar17 < local_4b0);
      }
      *(double *)((longlong)local_3d8 + lVar19 + 8) = dVar28;
      pdVar25 = (double *)((longlong)local_248 + lVar19 + 8);
      *pdVar25 = dVar5;
      dVar28 = local_3d8[0];
      dVar30 = local_248[0];
      if (0 < local_4b0) {
        pdVar16 = (double *)((longlong)local_248 + lVar19);
        lVar15 = lVar14;
        lVar17 = local_4b0;
        do {
          dVar6 = *(double *)((longlong)local_498 + lVar15);
          dVar7 = *pdVar16;
          pdVar16 = pdVar16 + -1;
          lVar20 = lVar15 + 8;
          lVar13 = lVar15 + 8;
          lVar15 = lVar15 + 8;
          dVar5 = dVar5 + dVar6 * dVar7;
          dVar30 = dVar30 + dVar6 * *(double *)((longlong)local_248 + lVar20);
          dVar28 = dVar28 + dVar6 * *(double *)((longlong)local_3d8 + lVar13);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      dVar30 = (dVar5 * __real_c000000000000000) / (dVar28 + dVar30);
      dVar28 = (dVar11 - dVar30 * dVar30) * dVar8;
      if (dVar28 <= dVar12) {
        dVar30 = sqrt(dVar11 - dVar12 / dVar8);
        if (__real_0000000000000000 < dVar5) {
          dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^
                                    __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(dVar30,0) ^ (uint)__xmm_80000000000000008000000000000000);
        }
        local_4d8 = 1;
        dVar28 = dVar12;
      }
      lVar15 = (longlong)iVar26 >> 1;
      if (0 < lVar15) {
        pdVar16 = (double *)((longlong)&dStack_4a0 + lVar19);
        lVar17 = lVar14;
        do {
          dVar8 = *pdVar16;
          dVar5 = *(double *)((longlong)local_498 + lVar17 * 8);
          *(double *)((longlong)local_498 + lVar17 * 8) = dVar30 * dVar8 + dVar5;
          lVar17 = lVar17 + 1;
          *pdVar16 = dVar30 * dVar5 + dVar8;
          pdVar16 = pdVar16 + -1;
        } while (lVar17 < lVar15);
      }
      *(double *)((longlong)local_498 + lVar19) = dVar30;
      if (local_4d8 != 0) {
        if (iVar26 < (int)param_6) {
          memset((void *)((longlong)local_498 + (longlong)iVar26 * 8),0,
                 (longlong)(int)(param_6 - iVar26) << 3);
        }
        break;
      }
      if (-1 < iVar26) {
        pdVar16 = local_3d8;
        uVar18 = (ulonglong)(iVar26 + 1);
        do {
          dVar29 = *pdVar16;
          dVar8 = *pdVar25;
          *pdVar16 = *pdVar25 * dVar30 + dVar29;
          pdVar16 = pdVar16 + 1;
          *pdVar25 = dVar29 * dVar30 + dVar8;
          pdVar25 = pdVar25 + -1;
          uVar18 = uVar18 - 1;
          dVar29 = local_3d8[0];
        } while (uVar18 != 0);
      }
      local_4b0 = local_4b0 + 1;
      local_4c0 = local_4c0 + -4;
      local_4b8 = local_4b8 + 4;
      iVar26 = iVar26 + 1;
      lVar19 = lVar19 + 8;
      lVar15 = param_2;
      dVar8 = dVar28;
    } while (iVar26 <= (int)param_6);
  }
  if (local_4d8 == 0) {
    lVar19 = lVar14;
    if (0 < (int)param_6) {
      do {
        dVar27 = *(double *)((longlong)local_498 + lVar14);
        lVar15 = lVar14 + 8;
        lVar14 = lVar14 + 8;
        dVar29 = dVar29 + dVar27 * *(double *)((longlong)local_3d8 + lVar15);
        dVar11 = dVar11 + dVar27 * dVar27;
        *(float *)(local_4a8 + lVar19 * 4) =
             (float)(double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) ^
                                     __xmm_80000000000000008000000000000000._4_4_,
                                     SUB84(dVar27,0) ^ (uint)__xmm_80000000000000008000000000000000)
        ;
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)param_6);
    }
    dVar28 = dVar29 - dVar10 * dVar11;
  }
  else {
    if (0 < (int)param_6) {
      do {
        uVar9 = *(undefined8 *)((longlong)local_498 + lVar14 * 8);
        *(float *)(local_4a8 + lVar14 * 4) =
             (float)(double)CONCAT44((uint)((ulonglong)uVar9 >> 0x20) ^
                                     __xmm_80000000000000008000000000000000._4_4_,
                                     (uint)uVar9 ^ (uint)__xmm_80000000000000008000000000000000);
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)param_6);
    }
    if (0 < (int)param_5) {
      lVar14 = (longlong)(int)local_4d4;
      uVar18 = (ulonglong)param_5;
      do {
        dVar29 = (double)silk_energy_FLP(param_2,param_6);
        param_2 = param_2 + lVar14 * 4;
        dVar27 = dVar27 - dVar29;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    dVar28 = dVar28 * dVar27;
  }
  return (float)dVar28;
}


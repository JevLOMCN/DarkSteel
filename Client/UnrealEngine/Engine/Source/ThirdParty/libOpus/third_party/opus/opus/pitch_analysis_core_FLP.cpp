// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 3

// FUN_14f88c7f8 @ 14f88c7f8

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f88c7f8(undefined4 *param_1,longlong param_2,int param_3,int param_4,uint param_5,
                  int param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined4 auStack_514 [231];
  undefined1 auStack_178 [32];
  int local_158;
  undefined4 local_150;
  int local_148;
  undefined1 *local_140;
  ulonglong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined4 local_118 [24];
  undefined4 local_b8 [24];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148 = param_4;
  if (param_6 < 0) {
    celt_fatal("assertion failed: complexity >= SILK_PE_MIN_COMPLEX",
               "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x1fd);
  }
  if (2 < param_6) {
    celt_fatal("assertion failed: complexity <= SILK_PE_MAX_COMPLEX",
               "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x1fe);
  }
  if (param_5 == 4) {
    local_140 = &silk_CB_lags_stage3;
    iVar12 = 0x22;
    iVar8 = (int)(char)(&silk_nb_cbk_searchs_stage3)[param_6];
    pcVar10 = &silk_Lag_range_stage3 + (longlong)param_6 * 8;
  }
  else {
    if (param_5 != 2) {
      celt_fatal("assertion failed: nb_subfr == PE_MAX_NB_SUBFR >> 1",
                 "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x206);
    }
    iVar8 = 0xc;
    local_140 = &silk_CB_lags_stage3_10_ms;
    pcVar10 = &silk_Lag_range_stage3_10_ms;
    iVar12 = 0xc;
  }
  local_130 = (longlong)iVar8;
  param_2 = param_2 + (longlong)(param_4 << 2) * 4;
  if (0 < (int)param_5) {
    lVar13 = (longlong)param_4 << 2;
    iVar8 = 0;
    local_138 = (ulonglong)param_5;
    local_128 = lVar13;
    local_120 = (longlong)param_3;
    do {
      lVar6 = (longlong)pcVar10[1];
      cVar1 = *pcVar10;
      local_158 = ((int)pcVar10[1] - (int)cVar1) + 1;
      local_150 = param_7;
      celt_pitch_xcorr_c(param_2,param_2 + (lVar6 + local_120) * -4,local_b8,local_148);
      if (cVar1 <= lVar6) {
        lVar6 = lVar6 - cVar1;
        puVar7 = local_118;
        puVar9 = local_b8 + lVar6;
        lVar6 = lVar6 + 1;
        do {
          uVar2 = *puVar9;
          puVar9 = puVar9 + -1;
          *puVar7 = uVar2;
          puVar7 = puVar7 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      cVar1 = *pcVar10;
      puVar9 = param_1;
      lVar6 = local_130;
      iVar11 = iVar8;
      if (0 < local_130) {
        do {
          lVar13 = (longlong)((int)(char)local_140[iVar11] - (int)cVar1);
          uVar3 = local_118[lVar13 + 1];
          uVar4 = local_118[lVar13 + 2];
          uVar5 = local_118[lVar13 + 3];
          uVar2 = local_118[lVar13 + 4];
          *puVar9 = local_118[lVar13];
          puVar9[1] = uVar3;
          puVar9[2] = uVar4;
          puVar9[3] = uVar5;
          puVar9[4] = uVar2;
          lVar6 = lVar6 + -1;
          puVar9 = puVar9 + 5;
          lVar13 = local_128;
          iVar11 = iVar11 + 1;
        } while (lVar6 != 0);
      }
      param_2 = param_2 + lVar13;
      iVar8 = iVar8 + iVar12;
      pcVar10 = pcVar10 + 2;
      param_1 = param_1 + 0xaa;
      local_138 = local_138 - 1;
    } while (local_138 != 0);
  }
  return;
}

// FUN_14f88ca20 @ 14f88ca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f88ca20(float *param_1,longlong param_2,int param_3,int param_4,uint param_5,int param_6)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  double dVar16;
  float afStack_4b4 [239];
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d4;
  longlong local_d0;
  undefined1 *local_c8;
  float local_b8 [24];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8 = param_3;
  local_d4 = param_4;
  if (param_6 < 0) {
    celt_fatal("assertion failed: complexity >= SILK_PE_MIN_COMPLEX",
               "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x23f);
  }
  if (2 < param_6) {
    celt_fatal("assertion failed: complexity <= SILK_PE_MAX_COMPLEX",
               "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x240);
  }
  uVar14 = (ulonglong)param_5;
  if (param_5 == 4) {
    local_c8 = &silk_CB_lags_stage3;
    iVar15 = 0x22;
    iVar7 = (int)(char)(&silk_nb_cbk_searchs_stage3)[param_6];
    pcVar11 = &silk_Lag_range_stage3 + (longlong)param_6 * 8;
  }
  else {
    if (param_5 != 2) {
      celt_fatal("assertion failed: nb_subfr == PE_MAX_NB_SUBFR >> 1",
                 "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x248);
    }
    iVar7 = 0xc;
    local_c8 = &silk_CB_lags_stage3_10_ms;
    pcVar11 = &silk_Lag_range_stage3_10_ms;
    iVar15 = 0xc;
  }
  param_2 = param_2 + (longlong)(param_4 << 2) * 4;
  if (0 < (int)param_5) {
    local_d0 = (longlong)param_4 << 2;
    iVar10 = 0;
    do {
      pfVar9 = (float *)(param_2 + (longlong)(*pcVar11 + local_d8) * -4);
      dVar16 = (double)silk_energy_FLP(pfVar9,local_d4);
      cVar2 = *pcVar11;
      dVar16 = dVar16 + __real_3f50624dd2f1a9fc;
      lVar8 = 1;
      lVar13 = (longlong)(((int)pcVar11[1] - (int)cVar2) + 1);
      local_b8[0] = (float)dVar16;
      if (1 < lVar13) {
        pfVar6 = (float *)(local_d0 + -4 + (longlong)pfVar9);
        do {
          pfVar9 = pfVar9 + -1;
          fVar1 = *pfVar6;
          pfVar6 = pfVar6 + -1;
          dVar16 = (dVar16 - (double)fVar1 * (double)fVar1) + (double)*pfVar9 * (double)*pfVar9;
          local_b8[lVar8] = (float)dVar16;
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar13);
      }
      pfVar9 = param_1;
      lVar8 = (longlong)iVar7;
      iVar12 = iVar10;
      if (0 < (longlong)iVar7) {
        do {
          lVar13 = (longlong)((int)(char)local_c8[iVar12] - (int)cVar2);
          fVar3 = local_b8[lVar13 + 1];
          fVar4 = local_b8[lVar13 + 2];
          fVar5 = local_b8[lVar13 + 3];
          fVar1 = local_b8[lVar13 + 4];
          *pfVar9 = local_b8[lVar13];
          pfVar9[1] = fVar3;
          pfVar9[2] = fVar4;
          pfVar9[3] = fVar5;
          pfVar9[4] = fVar1;
          lVar8 = lVar8 + -1;
          pfVar9 = pfVar9 + 5;
          iVar12 = iVar12 + 1;
        } while (lVar8 != 0);
      }
      param_2 = param_2 + local_d0;
      iVar10 = iVar10 + iVar15;
      pcVar11 = pcVar11 + 2;
      param_1 = param_1 + 0xaa;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}

// silk_pitch_analysis_core_FLP @ 14f88cc58

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
silk_pitch_analysis_core_FLP
          (longlong param_1,int *param_2,short *param_3,undefined1 *param_4,float *param_5,
          int param_6,float param_7,float param_8,int param_9,int param_10,uint param_11,
          int param_12)

{
  short *psVar1;
  float *pfVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  float *pfVar17;
  int *piVar18;
  short *psVar19;
  char *pcVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  float *pfVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 *puVar27;
  int iVar28;
  ulonglong uVar29;
  undefined2 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int iVar33;
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auStack_2d58 [32];
  uint local_2d38;
  int local_2d30;
  int local_2d28;
  float local_2d18;
  uint local_2d10;
  int local_2d0c;
  int local_2d08;
  undefined *local_2d00;
  int local_2cf8;
  int local_2cf4;
  int *local_2cf0;
  ulonglong local_2ce8;
  undefined1 *local_2ce0;
  float *local_2cd8;
  longlong local_2cd0;
  int local_2cc8;
  longlong local_2cc0;
  longlong local_2cb8;
  short *local_2cb0;
  undefined1 *local_2ca8;
  ulonglong local_2ca0;
  longlong local_2c98;
  longlong local_2c90;
  longlong local_2c88;
  undefined8 local_2c80;
  undefined8 local_2c78;
  undefined8 local_2c70;
  int local_2c68 [24];
  float local_2c08 [12];
  undefined1 local_2bd8 [252];
  float local_2adc [5];
  float local_2ac8 [80];
  float local_2988 [80];
  float local_2848 [5];
  short asStack_2832 [1349];
  float local_1da8 [8];
  float local_1d88 [588];
  float afStack_1458 [160];
  undefined1 local_11d8 [640];
  float local_f58 [680];
  short local_4b8 [320];
  short local_238 [160];
  ulonglong local_f8;
  undefined8 local_48;
  
  local_48 = 0x14f88cc77;
  local_f8 = __security_cookie.value ^ (ulonglong)auStack_2d58;
  lVar25 = (longlong)(int)param_11;
  local_2cd8 = param_5;
  local_2d0c = param_9;
  local_2d08 = param_10;
  local_2cf0 = param_2;
  local_2cd0 = param_1;
  local_2cb0 = param_3;
  local_2ca8 = param_4;
  if (((param_9 - 8U & 0xfffffff3) != 0) || (param_9 == 0x14)) {
    celt_fatal("assertion failed: Fs_kHz == 8 || Fs_kHz == 12 || Fs_kHz == 16",
               "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x70);
  }
  if (param_10 < 0) {
    celt_fatal("assertion failed: complexity >= SILK_PE_MIN_COMPLEX",
               "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x73);
  }
  if (2 < param_10) {
    celt_fatal("assertion failed: complexity <= SILK_PE_MAX_COMPLEX",
               "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x74);
  }
  iVar13 = param_11 + 4;
  iVar33 = iVar13 * 0x14;
  local_2cf4 = param_9 * 2;
  iVar22 = iVar13 * 0x28;
  iVar13 = iVar13 * param_9 * 5;
  local_2cc8 = param_9 * 0x12;
  local_2cf8 = local_2cc8 + -1;
  local_2ca0 = 0xc;
  if (param_9 == 0x10) {
    iVar28 = iVar13 + -1;
    if (-1 < iVar28) {
      pfVar9 = (float *)(param_1 + (longlong)iVar28 * 4);
      puVar30 = (undefined2 *)((longlong)local_2848 + (longlong)iVar28 * 2);
      do {
        local_2d18 = *pfVar9;
        if ((int)ROUND(local_2d18) < 0x8000) {
          uVar4 = 0x8000;
          if (-0x8001 < (int)ROUND(local_2d18)) {
            uVar4 = (undefined2)(int)ROUND(local_2d18);
          }
        }
        else {
          uVar4 = 0x7fff;
        }
        *puVar30 = uVar4;
        pfVar9 = pfVar9 + -1;
        puVar30 = puVar30 + -1;
        iVar28 = iVar28 + -1;
      } while (-1 < iVar28);
    }
    local_2c80 = 0;
    silk_resampler_down2(&local_2c80,local_4b8,local_2848,iVar13);
    lVar16 = (longlong)(iVar22 + -1);
    if (-1 < iVar22 + -1) {
      do {
        afStack_1458[lVar16] = (float)(int)local_4b8[lVar16];
        lVar16 = lVar16 + -1;
      } while (-1 < lVar16);
    }
  }
  else if (param_9 == 0xc) {
    iVar28 = iVar13 + -1;
    if (-1 < iVar28) {
      pfVar9 = (float *)(param_1 + (longlong)iVar28 * 4);
      puVar30 = (undefined2 *)((longlong)local_2848 + (longlong)iVar28 * 2);
      do {
        local_2d18 = *pfVar9;
        if ((int)ROUND(local_2d18) < 0x8000) {
          uVar4 = 0x8000;
          if (-0x8001 < (int)ROUND(local_2d18)) {
            uVar4 = (undefined2)(int)ROUND(local_2d18);
          }
        }
        else {
          uVar4 = 0x7fff;
        }
        *puVar30 = uVar4;
        pfVar9 = pfVar9 + -1;
        puVar30 = puVar30 + -1;
        iVar28 = iVar28 + -1;
      } while (-1 < iVar28);
    }
    local_2c80 = 0;
    local_2c78 = 0;
    local_2c70 = 0;
    silk_resampler_down2_3(&local_2c80,local_4b8,local_2848,iVar13);
    lVar16 = (longlong)(iVar22 + -1);
    if (-1 < iVar22 + -1) {
      do {
        afStack_1458[lVar16] = (float)(int)local_4b8[lVar16];
        lVar16 = lVar16 + -1;
      } while (-1 < lVar16);
    }
  }
  else {
    if (param_9 != 8) {
      celt_fatal("assertion failed: Fs_kHz == 8",
                 "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x97);
    }
    iVar13 = iVar22 + -1;
    if (-1 < iVar13) {
      psVar19 = local_4b8 + iVar13;
      pfVar9 = (float *)(param_1 + (longlong)iVar13 * 4);
      do {
        local_2d18 = *pfVar9;
        if ((int)ROUND(local_2d18) < 0x8000) {
          sVar6 = -0x8000;
          if (-0x8001 < (int)ROUND(local_2d18)) {
            sVar6 = (short)(int)ROUND(local_2d18);
          }
        }
        else {
          sVar6 = 0x7fff;
        }
        *psVar19 = sVar6;
        pfVar9 = pfVar9 + -1;
        psVar19 = psVar19 + -1;
        iVar13 = iVar13 + -1;
        param_2 = local_2cf0;
      } while (-1 < iVar13);
    }
  }
  local_2c80 = 0;
  silk_resampler_down2(&local_2c80,local_238,local_4b8,iVar22);
  iVar13 = iVar33 + -1;
  for (lVar16 = (longlong)iVar33 + -1; -1 < lVar16; lVar16 = lVar16 + -1) {
    local_2ac8[lVar16] = (float)(int)local_238[lVar16];
  }
  if (0 < iVar13) {
    pfVar9 = local_2ac8 + (longlong)iVar33 + -1;
    fVar43 = *pfVar9;
    do {
      pfVar24 = pfVar9 + -1;
      iVar13 = iVar13 + -1;
      fVar37 = (float)(int)fVar43 + *pfVar24;
      fVar43 = __real_c7000000;
      if (__real_c7000000 <= fVar37) {
        fVar43 = fVar37;
      }
      fVar37 = __real_46fffe00;
      if (fVar43 <= __real_46fffe00) {
        fVar37 = fVar43;
      }
      *pfVar9 = (float)(int)(short)(int)fVar37;
      pfVar9 = pfVar9 + -1;
      fVar43 = *pfVar24;
    } while (0 < iVar13);
  }
  local_2cb8 = lVar25;
  memset(local_1da8,0,lVar25 * 0x254);
  if (0 < (int)param_11 >> 1) {
    uVar32 = (ulonglong)(uint)((int)param_11 >> 1);
    pfVar9 = local_2988;
    do {
      if (pfVar9 < local_2ac8) {
        celt_fatal("assertion failed: target_ptr >= frame_4kHz",
                   "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xac);
      }
      if (local_2ac8 + iVar33 < pfVar9 + 0x28) {
        celt_fatal("assertion failed: target_ptr + sf_length_8kHz <= frame_4kHz + frame_length_4kHz"
                   ,"../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xad);
      }
      pfVar24 = pfVar9 + -8;
      if (pfVar24 < local_2ac8) {
        celt_fatal("assertion failed: basis_ptr >= frame_4kHz",
                   "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xb2);
      }
      if (local_2ac8 + iVar33 < pfVar9 + 0x20) {
        celt_fatal("assertion failed: basis_ptr + sf_length_8kHz <= frame_4kHz + frame_length_4kHz",
                   "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xb3);
      }
      local_2d30 = param_12;
      local_2d38 = 0x41;
      celt_pitch_xcorr_c(pfVar9,pfVar9 + -0x48,local_2bd8,0x28);
      dVar42 = (double)local_2adc[1];
      dVar39 = (double)silk_energy_FLP(pfVar24,0x28);
      dVar40 = (double)silk_energy_FLP(pfVar9,0x28);
      lVar25 = 9;
      pfVar17 = local_2adc;
      dVar39 = dVar39 + dVar40 + ___real_4103880000000000;
      local_1d88[0] = local_1d88[0] + (float)((dVar42 + dVar42) / dVar39);
      do {
        pfVar2 = pfVar24 + 0x27;
        pfVar24 = pfVar24 + -1;
        dVar39 = dVar39 + ((double)*pfVar24 * (double)*pfVar24 - (double)*pfVar2 * (double)*pfVar2);
        fVar43 = *pfVar17;
        pfVar17 = pfVar17 + -1;
        local_1da8[lVar25] =
             (float)(((double)fVar43 + (double)fVar43) / dVar39) + local_1da8[lVar25];
        lVar25 = lVar25 + 1;
      } while (lVar25 < 0x49);
      uVar32 = uVar32 - 1;
      pfVar9 = pfVar9 + 0x28;
      lVar25 = local_2cb8;
      param_2 = local_2cf0;
      param_9 = local_2d0c;
    } while (uVar32 != 0);
  }
  pfVar9 = local_1d88 + 0x40;
  iVar13 = 0x48;
  do {
    iVar22 = iVar13 + -1;
    *pfVar9 = *pfVar9 - (float)iVar13 * *pfVar9 * __real_39800000;
    pfVar9 = pfVar9 + -1;
    iVar13 = iVar22;
  } while (7 < iVar22);
  uVar34 = local_2d08 * 2 + 4;
  if (0x18 < (int)(uVar34 * 3)) {
    celt_fatal("assertion failed: 3 * length_d_srch <= PE_D_SRCH_LENGTH",
               "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xda);
  }
  silk_insertion_sort_decreasing_FLP(local_1d88,local_2c68,0x41,uVar34);
  fVar43 = __real_3e4ccccd;
  if (local_1d88[0] < __real_3e4ccccd) {
    memset(param_2,0,lVar25 << 2);
    *local_2cd8 = 0.0;
    *local_2cb0 = 0;
    *local_2ca8 = 0;
    return 1;
  }
  param_7 = local_1d88[0] * param_7;
  uVar15 = 0;
  if (0 < (int)uVar34) {
    do {
      uVar7 = uVar15;
      if (local_1d88[(int)uVar15] <= param_7) break;
      uVar14 = uVar15 + 1;
      local_2c68[(int)uVar15] = local_2c68[(int)uVar15] * 2 + 0x10;
      uVar7 = uVar34;
      uVar15 = uVar14;
    } while ((int)uVar14 < (int)uVar34);
    uVar34 = uVar7;
    if (0 < (int)uVar34) goto LAB_14f88d417;
  }
  celt_fatal("assertion failed: length_d_srch > 0",
             "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0xf1);
LAB_14f88d417:
  iVar22 = 0;
  local_2ce8 = 0xb;
  iVar13 = 0xb;
  do {
    lVar25 = (longlong)iVar13;
    if (0x129 < (ulonglong)(lVar25 * 2)) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    iVar13 = iVar13 + 1;
    *(undefined2 *)((longlong)local_2848 + lVar25 * 2) = 0;
  } while (iVar13 < 0x94);
  if (0 < (int)uVar34) {
    piVar18 = local_2c68;
    uVar32 = (ulonglong)uVar34;
    do {
      iVar13 = *piVar18;
      piVar18 = piVar18 + 1;
      *(undefined2 *)((longlong)local_2848 + (longlong)iVar13 * 2) = 1;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
  }
  lVar16 = 0x83;
  lVar25 = 0x83;
  psVar19 = asStack_2832 + 0x87;
  sVar6 = asStack_2832[0x87];
  do {
    psVar1 = psVar19 + -1;
    sVar5 = psVar19[-2] + sVar6;
    sVar6 = *psVar1;
    *psVar19 = sVar5 + *psVar1;
    lVar25 = lVar25 + -1;
    psVar19 = psVar1;
  } while (lVar25 != 0);
  piVar18 = local_2c68;
  psVar19 = asStack_2832 + 6;
  iVar33 = 0x10;
  iVar13 = 0x10;
  uVar34 = iVar22;
  do {
    if (0 < *psVar19) {
      uVar34 = uVar34 + 1;
      *piVar18 = iVar13;
      piVar18 = piVar18 + 1;
    }
    iVar13 = iVar13 + 1;
    psVar19 = psVar19 + 1;
  } while (iVar13 < 0x90);
  psVar19 = asStack_2832 + 0x85;
  do {
    psVar1 = psVar19 + -1;
    sVar6 = psVar19[1] + asStack_2832[0x85];
    asStack_2832[0x85] = *psVar1;
    psVar19[2] = psVar19[2] + sVar6 + *psVar1;
    lVar16 = lVar16 + -1;
    psVar19 = psVar1;
  } while (lVar16 != 0);
  pfVar9 = local_2848;
  psVar19 = asStack_2832 + 5;
  do {
    if (0 < *psVar19) {
      iVar22 = iVar22 + 1;
      *(short *)pfVar9 = (short)iVar33 + -2;
      pfVar9 = (float *)((longlong)pfVar9 + 2);
    }
    iVar33 = iVar33 + 1;
    psVar19 = psVar19 + 1;
  } while (iVar33 < 0x93);
  local_2d10 = uVar34;
  memset(local_1da8,0,0x950);
  dVar42 = __real_4000000000000000;
  if (param_9 == 8) {
    puVar27 = (undefined1 *)(local_2cd0 + 0x280);
  }
  else {
    puVar27 = local_11d8;
  }
  lVar16 = 0;
  uVar46 = SUB84(__real_3ff0000000000000,0);
  uVar48 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  lVar25 = local_2cb8;
  if (0 < local_2cb8) {
    do {
      local_2d00 = (undefined *)lVar25;
      dVar39 = (double)silk_energy_FLP(puVar27,0x28);
      lVar26 = 0;
      puVar10 = (undefined *)lVar25;
      if (0 < (longlong)iVar22) {
        do {
          lVar25 = (longlong)*(short *)((longlong)local_2848 + lVar26 * 2);
          dVar40 = (double)silk_inner_product_FLP(puVar27 + lVar25 * -4,puVar27,0x28);
          if (dVar40 <= 0.0) {
            fVar37 = 0.0;
          }
          else {
            dVar41 = (double)silk_energy_FLP(puVar27 + lVar25 * -4,0x28);
            fVar37 = (float)((dVar40 * dVar42) / (dVar41 + dVar39 + (double)CONCAT44(uVar48,uVar46))
                            );
          }
          lVar26 = lVar26 + 1;
          local_1da8[lVar25 + lVar16] = fVar37;
        } while (lVar26 < iVar22);
        uVar46 = SUB84(__real_3ff0000000000000,0);
        uVar48 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        puVar10 = local_2d00;
      }
      puVar27 = puVar27 + 0xa0;
      lVar16 = lVar16 + 0x95;
      lVar25 = (longlong)puVar10 + -1;
    } while ((longlong)puVar10 + -1 != 0);
    local_2d00 = (undefined *)0x0;
    param_9 = local_2d0c;
    uVar34 = local_2d10;
  }
  dVar42 = __real_400a934f0979a36c;
  fVar37 = __real_c47a0000;
  fVar38 = -NAN;
  fVar50 = 0.0;
  local_2d10 = 0;
  local_2d18 = -NAN;
  if (param_6 < 1) {
    fVar51 = 0.0;
  }
  else {
    if (param_9 == 0xc) {
      param_6 = (param_6 * 2) / 3;
    }
    else if (param_9 == 0x10) {
      param_6 = param_6 >> 1;
    }
    dVar39 = log10((double)param_6);
    fVar51 = (float)(dVar39 * dVar42);
  }
  if (param_11 == 4) {
    puVar10 = &silk_CB_lags_stage2;
    local_2d00 = &silk_CB_lags_stage2;
    if ((param_9 == 8) && (0 < local_2d08)) {
      lVar25 = 0xb;
    }
    else {
      lVar25 = 3;
    }
    local_2c98 = 0xb;
  }
  else {
    lVar25 = 3;
    puVar10 = &silk_CB_lags_stage2_10_ms;
    local_2ce8 = CONCAT44(local_2ce8._4_4_,3);
    local_2d00 = &silk_CB_lags_stage2_10_ms;
    local_2c98 = 3;
  }
  lVar16 = (longlong)(int)uVar34;
  fVar49 = (float)(int)param_11;
  local_2cc0 = lVar25;
  local_2c90 = lVar16;
  local_2c88 = lVar25;
  if (0 < lVar16) {
    local_2ce0 = (undefined1 *)0x0;
    fVar52 = fVar37;
    do {
      puVar27 = local_2ce0;
      iVar22 = 0;
      iVar13 = local_2c68[(longlong)local_2ce0];
      if (local_2c88 != 0) {
        pfVar9 = local_2c08;
        lVar26 = local_2c88;
        do {
          lVar25 = 0;
          *pfVar9 = 0.0;
          fVar38 = 0.0;
          if (0 < (int)param_11) {
            pcVar20 = local_2d00 + iVar22;
            uVar32 = (ulonglong)param_11;
            do {
              cVar3 = *pcVar20;
              pcVar20 = pcVar20 + (local_2ce8 & 0xffffffff);
              lVar16 = (cVar3 + iVar13) + lVar25;
              lVar25 = lVar25 + 0x95;
              fVar38 = fVar38 + local_1da8[lVar16];
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
            *pfVar9 = fVar38;
          }
          iVar22 = iVar22 + 1;
          pfVar9 = pfVar9 + 1;
          lVar26 = lVar26 + -1;
          lVar25 = local_2cc0;
          lVar16 = local_2c90;
          fVar38 = local_2d18;
        } while (lVar26 != 0);
      }
      uVar15 = 0;
      fVar47 = fVar37;
      uVar34 = uVar15;
      do {
        uVar7 = uVar15;
        fVar44 = local_2c08[(int)uVar15];
        if (local_2c08[(int)uVar15] <= fVar47) {
          uVar7 = uVar34;
          fVar44 = fVar47;
        }
        fVar47 = fVar44;
        uVar15 = uVar15 + 1;
        uVar34 = uVar7;
      } while ((int)uVar15 < (int)lVar25);
      dVar39 = log10((double)iVar13);
      fVar44 = (float)(dVar39 * dVar42);
      fVar45 = fVar47 - fVar49 * fVar43 * fVar44;
      if (0 < param_6) {
        fVar44 = fVar44 - fVar51;
        fVar44 = fVar44 * fVar44;
        fVar45 = fVar45 - (fVar49 * fVar43 * *local_2cd8 * fVar44) / (fVar44 + __real_3f000000);
      }
      if ((fVar52 < fVar45) && (fVar49 * param_8 < fVar47)) {
        fVar50 = fVar47;
        fVar52 = fVar45;
        fVar38 = (float)iVar13;
        local_2d18 = (float)iVar13;
        local_2d10 = uVar7;
      }
      local_2ce0 = puVar27 + 1;
      puVar10 = local_2d00;
    } while ((longlong)local_2ce0 < lVar16);
  }
  iVar22 = local_2d08;
  iVar13 = local_2d0c;
  uVar32 = 0;
  if (fVar38 == -NAN) {
    local_2cf0[0] = 0;
    local_2cf0[1] = 0;
    local_2cf0[2] = 0;
    local_2cf0[3] = 0;
    *local_2cd8 = 0.0;
    uVar11 = 1;
    *local_2cb0 = 0;
    *local_2ca8 = 0;
  }
  else {
    *local_2cd8 = fVar50 / fVar49;
    if (local_2d0c < 9) {
      if (0 < (int)param_11) {
        pcVar20 = puVar10 + (int)local_2d10;
        uVar32 = (ulonglong)param_11;
        piVar18 = local_2cf0;
        do {
          iVar22 = (int)*pcVar20 + (int)fVar38;
          iVar13 = 0x90;
          if ((iVar22 < 0x91) && (iVar13 = iVar22, iVar22 < 0x10)) {
            iVar13 = 0x10;
          }
          *piVar18 = iVar13;
          pcVar20 = pcVar20 + local_2c98;
          piVar18 = piVar18 + 1;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
      }
      uVar32 = (ulonglong)local_2d10;
      sVar6 = SUB42(fVar38,0) + -0x10;
    }
    else {
      if (local_2d0c == 0xc) {
        uVar34 = SUB42(fVar38,0) * 3;
        iVar33 = ((int)uVar34 >> 1) + (uVar34 & 1);
      }
      else {
        iVar33 = (int)fVar38 * 2;
      }
      iVar28 = local_2d0c * 2;
      lVar25 = (longlong)local_2d08;
      iVar8 = iVar33;
      if (iVar33 < local_2cf8) {
        iVar8 = local_2cf8;
      }
      if (iVar28 < iVar33) {
        iVar8 = iVar28;
      }
      iVar23 = iVar33;
      if (iVar33 < iVar28) {
        iVar23 = iVar28;
      }
      if (local_2cf8 < iVar33) {
        iVar23 = local_2cf8;
      }
      if (iVar28 - local_2cf8 != 0 && local_2cf8 <= iVar28) {
        iVar23 = iVar8;
      }
      if (iVar28 < iVar23 + -2) {
        iVar28 = iVar23 + -2;
      }
      fVar43 = (float)local_2cf8;
      if (iVar23 + 2 < local_2cf8) {
        fVar43 = (float)(iVar23 + 2);
      }
      local_2d28 = param_12;
      local_2d30 = local_2d08;
      local_2d38 = param_11;
      local_2d18 = fVar43;
      FUN_14f88c7f8(local_2848,local_2cd0,iVar28,local_2d0c * 5);
      local_2d30 = iVar22;
      local_2d38 = param_11;
      FUN_14f88ca20(local_f58,local_2cd0,iVar28,iVar13 * 5);
      fVar50 = __real_3d4ccccd / (float)iVar23;
      if (param_11 == 4) {
        uVar35 = 0x22;
        local_2ca0 = (ulonglong)(uint)(int)(char)(&silk_nb_cbk_searchs_stage3)[lVar25];
        puVar27 = &silk_CB_lags_stage3;
      }
      else {
        puVar27 = &silk_CB_lags_stage3_10_ms;
        uVar35 = 0xc;
      }
      local_2ce8 = uVar35;
      local_2ce0 = puVar27;
      dVar42 = (double)silk_energy_FLP(local_2cd0 + (longlong)(iVar13 * 0x14) * 4,
                                       iVar13 * 5 * param_11);
      if (iVar28 <= (int)fVar43) {
        uVar36 = 0;
        uVar31 = uVar36;
        do {
          uVar35 = uVar36;
          uVar21 = uVar36;
          uVar29 = uVar31;
          if (0 < (longlong)(int)local_2ca0) {
            do {
              dVar40 = 0.0;
              uVar12 = uVar29;
              lVar25 = local_2cb8;
              dVar39 = dVar42 + __real_3ff0000000000000;
              if (local_2cb8 < 1) {
LAB_14f88db4a:
                fVar43 = 0.0;
              }
              else {
                do {
                  dVar40 = dVar40 + (double)*(float *)((longlong)local_2848 + uVar12);
                  dVar39 = dVar39 + (double)*(float *)((longlong)local_f58 + uVar12);
                  lVar25 = lVar25 + -1;
                  uVar12 = uVar12 + 0x2a8;
                } while (lVar25 != 0);
                if (dVar40 <= 0.0) goto LAB_14f88db4a;
                fVar43 = (__real_3f800000 - (float)(int)uVar21 * fVar50) *
                         (float)((dVar40 + dVar40) / dVar39);
              }
              if ((fVar37 < fVar43) && ((char)(&silk_CB_lags_stage3)[uVar35] + iVar28 <= local_2cf8)
                 ) {
                uVar32 = uVar21;
                fVar37 = fVar43;
                iVar23 = iVar28;
              }
              uVar35 = uVar35 + 1;
              uVar21 = (ulonglong)((int)uVar21 + 1);
              uVar29 = uVar29 + 0x14;
              fVar43 = local_2d18;
            } while ((longlong)uVar35 < (longlong)(int)local_2ca0);
          }
          uVar31 = uVar31 + 4;
          iVar28 = iVar28 + 1;
          puVar27 = local_2ce0;
          uVar35 = local_2ce8;
        } while (iVar28 <= (int)fVar43);
      }
      if (0 < (int)param_11) {
        uVar31 = (ulonglong)param_11;
        pcVar20 = puVar27 + (int)uVar32;
        piVar18 = local_2cf0;
        do {
          iVar13 = *pcVar20 + iVar23;
          if (local_2cc8 < local_2cf4) {
            iVar22 = local_2cf4;
            if ((iVar13 <= local_2cf4) && (iVar22 = iVar13, iVar13 < local_2cc8)) {
              iVar22 = local_2cc8;
            }
          }
          else {
            iVar22 = local_2cc8;
            if ((iVar13 <= local_2cc8) && (iVar22 = iVar13, iVar13 < local_2cf4)) {
              iVar22 = local_2cf4;
            }
          }
          *piVar18 = iVar22;
          pcVar20 = pcVar20 + uVar35;
          piVar18 = piVar18 + 1;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
      sVar6 = (short)iVar23 - (short)local_2cf4;
    }
    *local_2cb0 = sVar6;
    *local_2ca8 = (char)uVar32;
    if (*local_2cb0 < 0) {
      celt_fatal("assertion failed: *lagIndex >= 0",
                 "../../../third_party/opus/src/silk/float/pitch_analysis_core_FLP.c",0x1da);
    }
    uVar11 = 0;
  }
  return uVar11;
}


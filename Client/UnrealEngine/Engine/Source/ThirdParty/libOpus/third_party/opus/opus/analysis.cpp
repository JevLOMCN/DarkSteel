// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 8

// FUN_14f872328 @ 14f872328

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f872328(code *param_1,undefined8 param_2,void *param_3,undefined8 param_4,int param_5,
                  int param_6,undefined4 param_7,int param_8,int param_9,int param_10)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  size_t _Size;
  longlong lVar11;
  float fVar12;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  int aiStack_68 [8];
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  ulonglong local_30;
  
  puVar10 = auStack_88;
  local_30 = __security_cookie.value ^ (ulonglong)&local_48;
  lVar9 = 0;
  if (param_5 != 0) {
    if (param_10 == 48000) {
      param_5 = param_5 * 2;
      param_6 = param_6 * 2;
    }
    else if (param_10 == 16000) {
      param_5 = (param_5 * 2) / 3;
      param_6 = param_6 * 2;
      param_6 = param_6 / 3 + (param_6 >> 0x1f) +
                (int)(((longlong)param_6 / 3 + ((longlong)param_6 >> 0x3f) & 0xffffffffU) >> 0x1f);
    }
    lVar11 = (longlong)param_5;
    _Size = lVar11 * 4;
    uVar5 = _Size + 0xf;
    if (uVar5 <= _Size) {
      uVar5 = 0xffffffffffffff0;
    }
    uStack_90 = 0x14f8723f3;
    lVar2 = -(uVar5 & 0xfffffffffffffff0);
    puVar10 = auStack_88 + lVar2;
    local_48 = param_4;
    local_40 = param_2;
    local_38 = param_1;
    *(int *)((longlong)aiStack_68 + lVar2 + 0x10) = param_9;
    _Src = (void *)((longlong)&local_48 + lVar2);
    *(int *)((longlong)aiStack_68 + lVar2 + 8) = param_8;
    *(undefined4 *)((longlong)aiStack_68 + lVar2) = param_7;
    pcVar4 = local_38;
    *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x14f872429;
    (*pcVar4)(param_2,_Src,param_5,param_6);
    if (param_8 == -2) {
      fVar12 = __real_38000000 / (float)param_9;
    }
    else {
      fVar12 = __real_38000000;
      if (-1 < param_8) {
        fVar12 = __real_37800000;
      }
    }
    lVar6 = lVar9;
    if (0 < param_5) {
      do {
        *(float *)((longlong)_Src + lVar6 * 4) = fVar12 * *(float *)((longlong)_Src + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar11);
    }
    uVar3 = local_48;
    if (param_10 == 48000) {
      *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x14f872494;
      FUN_14f8727bc(uVar3,param_3,_Src,param_5);
      puVar10 = auStack_88 + lVar2;
    }
    else if (param_10 == 24000) {
      *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x14f8724b6;
      memcpy(param_3,_Src,_Size);
      puVar10 = auStack_88 + lVar2;
    }
    else if (param_10 == 16000) {
      uVar7 = (longlong)(param_5 * 3) * 4;
      uVar5 = uVar7 + 0xf;
      if (uVar5 <= uVar7) {
        uVar5 = 0xffffffffffffff0;
      }
      *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x14f8724ee;
      lVar6 = -(uVar5 & 0xfffffffffffffff0);
      puVar10 = auStack_88 + lVar6 + lVar2;
      if (0 < param_5) {
        puVar8 = (undefined4 *)((longlong)&local_40 + lVar6 + lVar2);
        do {
          puVar8[-2] = *(undefined4 *)((longlong)_Src + lVar9 * 4);
          puVar8[-1] = *(undefined4 *)((longlong)_Src + lVar9 * 4);
          lVar1 = lVar9 * 4;
          lVar9 = lVar9 + 1;
          *puVar8 = *(undefined4 *)((longlong)_Src + lVar1);
          puVar8 = puVar8 + 3;
        } while (lVar9 < lVar11);
      }
      uVar3 = local_48;
      *(undefined8 *)(auStack_88 + lVar6 + lVar2 + -8) = 0x14f872527;
      FUN_14f8727bc(uVar3,param_3);
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x14f872536;
  return;
}

// FUN_14f87255c @ 14f87255c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14f87255c(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_1 * param_1;
  fVar4 = param_2 * param_2;
  if (__real_219392ef <= fVar3 + fVar4) {
    if (fVar3 <= fVar4) {
      fVar2 = __real_3fc90fdb;
      if (param_1 < 0.0) {
        fVar2 = __real_bfc90fdb;
      }
      fVar1 = __real_bfc90fdb;
      if (0.0 <= param_1 * param_2) {
        fVar1 = __real_3fc90fdb;
      }
      fVar1 = (((fVar3 * ___real_3edcf805 + fVar4) * param_1 * param_2) /
               ((fVar3 * ___real_3f2db121 + fVar4) * (fVar3 * ___real_3db00965 + fVar4)) + fVar2) -
              fVar1;
    }
    else {
      fVar1 = __real_3fc90fdb;
      if (param_1 < 0.0) {
        fVar1 = __real_bfc90fdb;
      }
      fVar1 = fVar1 - ((fVar4 * ___real_3edcf805 + fVar3) * param_1 * param_2) /
                      ((fVar4 * ___real_3f2db121 + fVar3) * (fVar4 * ___real_3db00965 + fVar3));
    }
  }
  else {
    fVar1 = 0.0;
  }
  return fVar1;
}

// run_analysis @ 14f872688

void run_analysis(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                 undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 != 0) {
    iVar4 = *(int *)(param_1 + 0x1d10);
    uVar1 = (param_9 * 0x5f) / 0x32;
    if ((int)(param_4 & 0xfffffffe) <= (int)uVar1) {
      uVar1 = param_4 & 0xfffffffe;
    }
    iVar3 = uVar1 - iVar4;
    if (0 < iVar3) {
      param_9 = param_9 / 0x32;
      do {
        iVar2 = param_9;
        if (iVar3 <= param_9) {
          iVar2 = iVar3;
        }
        FUN_14f872890(param_1,param_2,param_3,iVar2,iVar4,param_6,param_7,param_8,param_10,param_11)
        ;
        iVar4 = iVar4 + param_9;
        iVar3 = iVar3 - param_9;
      } while (0 < iVar3);
    }
    *(uint *)(param_1 + 0x1d10) = uVar1 - param_5;
  }
  tonality_get_info(param_1,param_12,param_5);
  return;
}

// FUN_14f8727bc @ 14f8727bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14f8727bc(float *param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = 0.0;
  lVar1 = 0;
  if (0 < (longlong)(param_4 / 2)) {
    do {
      fVar2 = (*(float *)(param_3 + lVar1 * 8) - *param_1) * ___real_3f1b80ff;
      fVar6 = *param_1 + fVar2;
      *param_1 = fVar2 + *(float *)(param_3 + lVar1 * 8);
      fVar2 = *(float *)(param_3 + 4 + lVar1 * 8);
      fVar3 = (fVar2 - param_1[1]) * ___real_3e1a3ec0;
      fVar4 = (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000);
      fVar5 = (param_1[1] + fVar6 + fVar3) * __real_3f000000;
      param_1[1] = fVar3 + fVar2;
      fVar2 = (fVar4 - param_1[2]) * ___real_3e1a3ec0;
      fVar3 = param_1[2] + fVar6 + fVar2;
      param_1[2] = fVar4 + fVar2;
      *(float *)(param_2 + lVar1 * 4) = fVar5;
      lVar1 = lVar1 + 1;
      fVar7 = fVar7 + fVar3 * fVar3;
    } while (lVar1 < param_4 / 2);
  }
  return fVar7;
}

// FUN_14f872890 @ 14f872890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f872890(longlong param_1,longlong param_2,undefined8 param_3,int param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                  ulonglong param_10)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  float *pfVar12;
  longlong lVar13;
  char *pcVar14;
  float *pfVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  float *pfVar28;
  undefined1 *puVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint uVar44;
  undefined1 auStack_2d68 [32];
  int local_2d48;
  int local_2d40;
  undefined4 local_2d38;
  undefined4 local_2d30;
  undefined4 local_2d28;
  undefined4 local_2d20;
  undefined1 local_2d18 [960];
  float local_2958 [240];
  float local_2598 [121];
  float afStack_23b4 [28];
  float afStack_2344 [4];
  float afStack_2334 [7];
  uint uStack_2318;
  float afStack_2314 [16];
  float afStack_22d4 [16];
  float afStack_2294 [16];
  float afStack_2254 [751];
  float local_1698 [938];
  undefined8 uStack_7f0;
  undefined1 local_7e8 [32];
  int local_7c8;
  int local_7c0;
  undefined4 local_7b8;
  undefined4 local_7b0;
  undefined4 local_7a8;
  float local_7a0 [6];
  longlong local_788;
  float local_780;
  float local_77c;
  float local_778;
  float local_774;
  ulonglong local_770;
  float local_768;
  ulonglong local_760;
  float *local_758;
  float local_750;
  float local_74c;
  float local_748;
  longlong local_740;
  undefined1 *local_738;
  undefined4 local_730;
  int local_72c;
  float local_728 [18];
  uint local_6e0;
  float local_6d8 [11];
  float local_6ac [12];
  float local_67c;
  float local_678;
  float local_668 [16];
  float afStack_628 [12];
  float local_5f8 [16];
  float afStack_5b8 [12];
  float local_588 [20];
  undefined1 local_538 [128];
  undefined1 local_4b8 [4];
  float local_4b4 [239];
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)(local_7a0 + 2);
  uVar17 = 0;
  local_774 = 0.0;
  local_7a0[4] = 0.0;
  local_760 = param_10;
  if (*(int *)(param_1 + 0x1d24) == 0) {
    *(undefined4 *)(param_1 + 0x168c) = 0xf0;
    *(undefined4 *)(param_1 + 0x1d24) = 1;
  }
  fVar7 = __real_3f800000;
  iVar8 = *(int *)(param_1 + 0x1d0c) + 1;
  iVar18 = iVar8;
  if (10 < iVar8) {
    iVar18 = 10;
  }
  iVar9 = iVar8;
  if (0x19 < iVar8) {
    iVar9 = 0x19;
  }
  if (100 < iVar8) {
    iVar8 = 100;
  }
  local_748 = __real_3f800000 / (float)iVar18;
  local_74c = __real_3f800000 / (float)iVar9;
  local_768 = __real_3f800000 / (float)iVar8;
  if (*(int *)(param_1 + 0x1d0c) < 2) {
    local_768 = __real_3f800000;
  }
  local_7a0[0] = *(float *)(param_1 + 8);
  if (local_7a0[0] != 6.72623e-41) {
    if (local_7a0[0] != 2.24208e-41) goto LAB_14f872a1e;
    param_4 = param_4 * 3;
    param_5 = param_5 * 3;
  }
  param_4 = param_4 / 2;
  param_5 = param_5 / 2;
LAB_14f872a1e:
  local_770 = *(ulonglong *)(param_2 + 0x58);
  iVar8 = 0x2d0 - *(int *)(param_1 + 0x168c);
  local_7c8 = param_4;
  if (iVar8 <= param_4) {
    local_7c8 = iVar8;
  }
  local_7a8 = param_8;
  local_7b0 = param_7;
  local_7b8 = param_6;
  uStack_7f0 = 0x14f872a88;
  local_7c0 = param_5;
  local_788 = param_3;
  local_750 = (float)FUN_14f872328(param_10,param_3,
                                   param_1 + ((longlong)*(int *)(param_1 + 0x168c) + 0x2d3) * 4,
                                   param_1 + 0x1da8);
  local_750 = local_750 + *(float *)(param_1 + 0x1d20);
  iVar8 = *(int *)(param_1 + 0x168c) + param_4;
  *(float *)(param_1 + 0x1d20) = local_750;
  if (iVar8 < 0x2d0) {
    *(int *)(param_1 + 0x168c) = iVar8;
    puVar16 = local_7e8;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1d14);
    lVar26 = (longlong)iVar8 * 0x40;
    *(int *)(param_1 + 0x1d14) = iVar8 + 1;
    if (99 < iVar8 + 1) {
      *(int *)(param_1 + 0x1d14) = iVar8 + -99;
    }
    uStack_7f0 = 0x14f872af9;
    local_740 = lVar26;
    local_7a0[2] = (float)is_digital_silence(param_1 + 0xb4c,0x2d0,1,param_9);
    local_758 = local_2598;
    puVar16 = auStack_2d68;
    local_738 = local_2d18;
    pfVar28 = (float *)(param_1 + 0xf0c);
    pfVar12 = (float *)(param_1 + 0x1688);
    uVar10 = uVar17;
    pfVar15 = local_7a0;
    do {
      fVar41 = *(float *)("assertion failed: st->DecControl.nChannelsInternal == 0 || st->DecControl.nChannelsInternal == 1 || st->DecControl.nChannelsInternal == 2"
                          + (0x34 - param_1) + (longlong)pfVar28);
      local_1698[uVar10 * 2] = fVar41 * pfVar28[-0xf0];
      fVar36 = *pfVar28;
      pfVar28 = pfVar28 + 1;
      local_1698[uVar10 * 2 + 1] = fVar41 * fVar36;
      uVar10 = uVar10 + 1;
      *pfVar15 = fVar41 * pfVar12[-0xf0];
      fVar36 = *pfVar12;
      pfVar12 = pfVar12 + -1;
      pfVar15[1] = fVar41 * fVar36;
      pfVar15 = pfVar15 + -2;
    } while ((longlong)uVar10 < 0xf0);
    memmove((void *)(param_1 + 0xb4c),(void *)(param_1 + 0x12cc),0x3c0);
    local_2d40 = (param_5 - *(int *)(param_1 + 0x168c)) + 0x2d0;
    iVar8 = param_4 + -0x2d0 + *(int *)(param_1 + 0x168c);
    local_2d20 = *(undefined4 *)(param_1 + 8);
    local_2d28 = param_8;
    local_2d30 = param_7;
    local_2d38 = param_6;
    local_2d48 = iVar8;
    uVar30 = FUN_14f872328(local_760,local_788,param_1 + 0xf0c,param_1 + 0x1da8);
    *(undefined4 *)(param_1 + 0x1d20) = uVar30;
    *(int *)(param_1 + 0x168c) = iVar8 + 0xf0;
    if (local_7a0[2] == 0.0) {
      opus_fft_c(local_770,local_1698,local_758);
      pfVar28 = local_758;
      fVar36 = __real_477385d1;
      fVar41 = __real_3e22f983;
      if (NAN(*local_758)) {
LAB_14f8730e6:
        *(undefined4 *)(lVar26 + 0x1db4 + param_1) = 0;
        puVar16 = auStack_2d68;
      }
      else {
        uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar44 = (uint)((ulonglong)__xmm_7fffffffffffffff7fffffffffffffff >> 0x20);
        pfVar12 = local_758 + 0x3be;
        lVar13 = (longlong)local_738 - (longlong)local_2958;
        puVar29 = local_4b8 + -(longlong)local_2958;
        pfVar15 = local_2958;
        lVar20 = (param_1 + 0xc) - (longlong)local_2958;
        lVar22 = (param_1 + 0x3cc) - (longlong)local_2958;
        lVar24 = (param_1 + 0x78c) - (longlong)local_2958;
        lVar27 = 1;
        do {
          pfVar15 = pfVar15 + 1;
          fVar31 = (float)FUN_14f87255c(pfVar28[lVar27 * 2 + 1] - pfVar12[1],
                                        *pfVar12 + pfVar28[lVar27 * 2]);
          fVar31 = fVar31 * fVar41;
          fVar40 = fVar31 - *(float *)(lVar20 + (longlong)pfVar15);
          fVar42 = fVar40 - *(float *)(lVar22 + (longlong)pfVar15);
          fVar32 = (float)FUN_14f87255c();
          lVar27 = lVar27 + 1;
          pfVar12 = pfVar12 + -2;
          fVar32 = fVar32 * fVar41;
          fVar42 = fVar42 - (float)(int)ROUND(fVar42);
          fVar31 = fVar32 - fVar31;
          local_7a0[2] = fVar31 - fVar40;
          fVar40 = local_7a0[2] - (float)(int)ROUND(local_7a0[2]);
          fVar37 = fVar40 * fVar40 * fVar40 * fVar40;
          *(float *)(lVar13 + (longlong)pfVar15) =
               (float)(double)CONCAT44((uint)((ulonglong)(double)fVar40 >> 0x20) & uVar44,
                                       SUB84((double)fVar40,0) & uVar25) +
               (float)(double)CONCAT44((uint)((ulonglong)(double)fVar42 >> 0x20) & uVar44,
                                       SUB84((double)fVar42,0) & uVar25);
          *pfVar15 = fVar7 / ((fVar42 * fVar42 * fVar42 * fVar42 +
                               *(float *)(lVar24 + (longlong)pfVar15) + fVar37 + fVar37) *
                              __real_3e800000 * fVar36 + fVar7) - __real_3c75c28f;
          *(float *)(lVar20 + (longlong)pfVar15) = fVar32;
          *(float *)(lVar22 + (longlong)pfVar15) = fVar31;
          *(float *)(lVar24 + (longlong)pfVar15) = fVar37;
          *(float *)(puVar29 + (longlong)pfVar15) =
               fVar7 / (fVar37 * fVar36 + fVar7) - __real_3c75c28f;
        } while (lVar27 < 0xf0);
        pfVar12 = local_4b4 + 2;
        pfVar15 = pfVar28 + 0x3be;
        lVar13 = 0xed;
        do {
          fVar41 = pfVar12[-2];
          if (pfVar12[-2] <= *pfVar12) {
            fVar41 = *pfVar12;
          }
          fVar36 = pfVar12[-1];
          if (fVar41 <= pfVar12[-1]) {
            fVar36 = fVar41;
          }
          fVar41 = *(float *)((longlong)local_2958 + -(longlong)(local_4b4 + 2) + 8 +
                             (longlong)pfVar12);
          if (fVar41 <= fVar36 - __real_3dcccccd) {
            fVar41 = fVar36 - __real_3dcccccd;
          }
          *(float *)((longlong)local_2958 + -(longlong)(local_4b4 + 2) + 8 + (longlong)pfVar12) =
               fVar41 * __real_3f666666;
          pfVar12 = pfVar12 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        *(undefined4 *)(lVar26 + 0x1dc4 + param_1) = 0;
        fVar41 = 0.0;
        local_770 = local_770 & 0xffffffff00000000;
        local_77c = 0.0;
        if (*(int *)(param_1 + 0x1d0c) == 0) {
          puVar11 = (undefined4 *)(param_1 + 0x1ba8);
          lVar13 = 0x12;
          do {
            puVar11[-0x12] = 0x501502f9;
            *puVar11 = 0xd01502f9;
            puVar11 = puVar11 + 1;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        fVar36 = __real_2edbe6ff;
        fVar31 = *pfVar28 + *pfVar28;
        fVar32 = pfVar28[1] + pfVar28[1];
        local_778 = 0.0;
        lVar13 = 3;
        local_780 = 0.0;
        fVar31 = fVar32 * fVar32 + fVar31 * fVar31;
        pfVar12 = pfVar28;
        do {
          fVar32 = *pfVar15;
          fVar40 = pfVar12[2];
          pfVar1 = pfVar15 + 1;
          pfVar15 = pfVar15 + -2;
          fVar31 = fVar31 + fVar40 * fVar40 + fVar32 * fVar32 + pfVar12[3] * pfVar12[3] +
                            *pfVar1 * *pfVar1;
          lVar13 = lVar13 + -1;
          pfVar12 = pfVar12 + 2;
        } while (lVar13 != 0);
        dVar33 = log((double)(fVar31 + __real_2edbe6ff));
        fVar37 = __real_3f38aa3b;
        fVar40 = __real_41700000;
        local_760 = local_760 & 0xffffffff00000000;
        local_788 = 0;
        local_728[0] = (float)dVar33 * __real_3f38aa3b;
        uVar10 = uVar17;
        local_7a0[2] = 0.0;
        fVar31 = __real_3c23d70a;
        fVar32 = __real_3f000000;
        do {
          lVar13 = local_788;
          fVar38 = 0.0;
          fVar42 = 0.0;
          fVar39 = 0.0;
          if (*(int *)((longlong)&DAT_15350fe90 + uVar10) <
              *(int *)((longlong)&DAT_15350fe94 + uVar10)) {
            lVar20 = (longlong)*(int *)((longlong)&DAT_15350fe90 + uVar10);
            pfVar12 = pfVar28 + lVar20 * 2;
            pfVar15 = (float *)(local_738 + lVar20 * 4);
            pfVar28 = pfVar28 + (0x1e0 - lVar20) * 2;
            uVar23 = (ulonglong)
                     (uint)(*(int *)((longlong)&DAT_15350fe94 + uVar10) -
                           *(int *)((longlong)&DAT_15350fe90 + uVar10));
            do {
              fVar43 = *pfVar12;
              fVar35 = *pfVar28;
              pfVar1 = pfVar12 + 1;
              pfVar12 = pfVar12 + 2;
              pfVar2 = pfVar28 + 1;
              pfVar28 = pfVar28 + -2;
              fVar5 = *(float *)(((longlong)local_2958 - (longlong)local_738) + (longlong)pfVar15);
              fVar34 = 0.0;
              if (0.0 <= fVar5) {
                fVar34 = fVar5;
              }
              fVar35 = fVar35 * fVar35 + fVar43 * fVar43 + *pfVar1 * *pfVar1 + *pfVar2 * *pfVar2;
              fVar38 = fVar38 + fVar35;
              fVar42 = fVar42 + fVar34 * fVar35;
              fVar43 = *pfVar15;
              pfVar15 = pfVar15 + 1;
              fVar39 = fVar39 + (fVar35 + fVar35) * (fVar32 - fVar43);
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
            if ((__real_4e6e6b28 <= fVar38) || (NAN(fVar38))) goto LAB_14f8730e6;
          }
          lVar20 = 8;
          fVar43 = fVar38 + __real_26901d7d;
          *(float *)(param_1 + 0x16e0 +
                    (local_788 + (longlong)*(int *)(param_1 + 0x1d08) * 0x12) * 4) = fVar38;
          local_7a0[2] = local_7a0[2] + fVar39 / fVar43;
          dVar33 = sqrt((double)(fVar38 + fVar36));
          local_780 = local_780 + (float)dVar33;
          dVar33 = log((double)(fVar38 + fVar36));
          fVar32 = (float)dVar33;
          *(float *)(param_1 + 0x1920 + (lVar13 + (longlong)*(int *)(param_1 + 0x1d08) * 0x12) * 4)
               = fVar32;
          lVar13 = param_1 + 0x1b60;
          *(float *)((longlong)local_588 + uVar10) = fVar32;
          *(float *)((longlong)local_728 + uVar10 + 4) = fVar32 * fVar37;
          if (*(int *)(param_1 + 0x1d0c) == 0) {
            *(float *)(lVar13 + uVar10) = fVar32;
            *(float *)(param_1 + 0x1ba8 + uVar10) = fVar32;
          }
          fVar38 = *(float *)(lVar13 + uVar10);
          fVar39 = *(float *)(param_1 + 0x1ba8 + uVar10);
          if ((double)fVar38 + __real_401e000000000000 < (double)fVar39) {
            if (fVar39 - fVar32 <= fVar32 - fVar38) {
              fVar38 = fVar38 + fVar31;
              *(float *)(lVar13 + uVar10) = fVar38;
            }
            else {
              fVar39 = fVar39 - fVar31;
              *(float *)(param_1 + 0x1ba8 + uVar10) = fVar39;
            }
          }
          if (fVar32 <= fVar39) {
            fVar31 = fVar39;
            if (fVar32 < fVar38) {
              *(float *)(lVar13 + uVar10) = fVar32;
              fVar31 = fVar32 + fVar40;
              if (fVar39 <= fVar31) {
                fVar31 = fVar39;
              }
              *(float *)(param_1 + 0x1ba8 + uVar10) = fVar31;
              fVar38 = fVar32;
            }
          }
          else {
            *(float *)(param_1 + 0x1ba8 + uVar10) = fVar32;
            fVar31 = fVar32 - fVar40;
            if (fVar31 <= fVar38) {
              fVar31 = fVar38;
            }
            *(float *)(lVar13 + uVar10) = fVar31;
            fVar38 = fVar31;
            fVar31 = fVar32;
          }
          fVar39 = 0.0;
          fVar35 = 0.0;
          pfVar28 = (float *)(param_1 + 0x16e0 + uVar10);
          local_778 = local_778 + (fVar32 - fVar38) / ((fVar31 - fVar38) + __real_3727c5ac);
          do {
            dVar33 = sqrt((double)*pfVar28);
            fVar39 = fVar39 + *pfVar28;
            pfVar28 = pfVar28 + 0x12;
            fVar35 = fVar35 + (float)dVar33;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar33 = sqrt((double)(fVar39 * __real_41000000) + __real_3cd203af9ee75616);
          fVar32 = __real_3f000000;
          fVar31 = __real_3c23d70a;
          fVar42 = fVar42 / fVar43;
          fVar38 = __real_3f7d70a4;
          if (fVar35 / (float)dVar33 <= __real_3f7d70a4) {
            fVar38 = fVar35 / (float)dVar33;
          }
          fVar38 = fVar38 * fVar38 * fVar38 * fVar38;
          local_77c = local_77c + fVar38;
          fVar38 = fVar38 * *(float *)(param_1 + 0x1690 + uVar10);
          if (fVar42 <= fVar38) {
            fVar42 = fVar38;
          }
          *(float *)((longlong)local_668 + uVar10) = fVar42;
          fVar41 = fVar41 + fVar42;
          if (8 < (int)local_760) {
            fVar41 = fVar41 - *(float *)((longlong)local_6ac + uVar10 + 0x20);
          }
          iVar8 = (int)local_760 + -8;
          fVar38 = ((float)((int)local_760 + -0x12) * __real_3cf5c28f + fVar7) * fVar41;
          if ((float)local_770 <= fVar38) {
            local_770 = CONCAT44(local_770._4_4_,fVar38);
          }
          iVar18 = (int)local_760 + 1;
          local_788 = local_788 + 1;
          local_760 = CONCAT44(local_760._4_4_,iVar18);
          *(float *)(param_1 + 0x1690 + uVar10) = fVar42;
          fVar38 = __real_40200000;
          uVar10 = uVar10 + 4;
          local_774 = local_774 + (float)iVar8 * fVar42;
          pfVar28 = local_758;
        } while (iVar18 < 0x12);
        lVar13 = 0x12;
        local_668[0] = local_728[0];
        uVar25 = 1;
        local_5f8[0] = local_728[0] - __real_40200000;
        uVar10 = uVar17;
        do {
          fVar41 = *(float *)((longlong)local_728 + uVar10 + 4);
          fVar36 = (float)(*(int *)((longlong)&DAT_15350fe94 + uVar10) -
                          *(int *)((longlong)&DAT_15350fe90 + uVar10));
          fVar31 = (fVar36 + fVar36) * __real_3e800000;
          fVar36 = *(float *)((longlong)local_5f8 + uVar10) - fVar31;
          fVar31 = fVar31 + *(float *)((longlong)local_668 + uVar10);
          if (fVar41 <= fVar31) {
            fVar31 = fVar41;
          }
          *(float *)((longlong)local_668 + uVar10 + 4) = fVar31;
          if (fVar36 <= fVar41 - __real_40200000) {
            fVar36 = fVar41 - __real_40200000;
          }
          *(float *)((longlong)local_5f8 + uVar10 + 4) = fVar36;
          uVar10 = uVar10 + 4;
          lVar13 = lVar13 + -1;
          uVar23 = uVar17;
        } while (lVar13 != 0);
        do {
          fVar41 = (float)(*(int *)((longlong)&DAT_15350fed4 + uVar23) -
                          *(int *)((longlong)&DAT_15350fed0 + uVar23));
          fVar36 = (fVar41 + fVar41) * __real_3e800000;
          fVar41 = *(float *)((longlong)afStack_5b8 + uVar23 + 4) - fVar36;
          fVar36 = fVar36 + *(float *)((longlong)afStack_628 + uVar23 + 4);
          if (fVar41 <= *(float *)((longlong)afStack_5b8 + uVar23)) {
            fVar41 = *(float *)((longlong)afStack_5b8 + uVar23);
          }
          if (*(float *)((longlong)afStack_628 + uVar23) <= fVar36) {
            fVar36 = *(float *)((longlong)afStack_628 + uVar23);
          }
          *(float *)((longlong)afStack_5b8 + uVar23) = fVar41;
          *(float *)((longlong)afStack_628 + uVar23) = fVar36;
          uVar23 = uVar23 - 4;
        } while (-0x41 < (longlong)uVar23);
        puVar29 = (undefined1 *)(lVar26 + 0x1de0 + param_1);
        lVar26 = 0x13;
        uVar10 = uVar17;
        do {
          fVar31 = *(float *)((longlong)local_728 + uVar10) -
                   (*(float *)((longlong)local_668 + uVar10) + fVar38);
          fVar36 = *(float *)((longlong)local_5f8 + uVar10) -
                   *(float *)((longlong)local_728 + uVar10);
          fVar41 = 0.0;
          if (0.0 <= fVar31) {
            fVar41 = fVar31;
          }
          fVar31 = 0.0;
          if (0.0 <= fVar36) {
            fVar31 = fVar36;
          }
          dVar33 = floor((double)((fVar41 + fVar31) * __real_42800000) + __real_3fe0000000000000);
          iVar8 = (int)dVar33;
          if (0xff < (int)dVar33) {
            iVar8 = 0xff;
          }
          uVar10 = uVar10 + 4;
          *puVar29 = (char)iVar8;
          puVar29 = puVar29 + 1;
          lVar26 = lVar26 + -1;
          uVar23 = uVar17;
          uVar21 = uVar17;
        } while (lVar26 != 0);
        do {
          pfVar28 = (float *)(param_1 + 0x1920);
          uVar10 = uVar17;
          uVar19 = uVar23;
          fVar41 = __real_58635fa9;
          do {
            fVar36 = 0.0;
            lVar26 = 0x12;
            do {
              fVar31 = *(float *)((longlong)pfVar28 + uVar19) - *pfVar28;
              pfVar28 = pfVar28 + 1;
              fVar36 = fVar36 + fVar31 * fVar31;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            if ((uVar10 != uVar21) && (fVar36 <= fVar41)) {
              fVar41 = fVar36;
            }
            uVar10 = uVar10 + 1;
            uVar19 = uVar19 - 0x48;
          } while ((longlong)uVar10 < 8);
          local_7a0[4] = local_7a0[4] + fVar41;
          uVar23 = uVar23 + 0x48;
          uVar21 = uVar21 + 1;
        } while ((longlong)uVar23 < 0x240);
        dVar33 = sqrt((double)((local_7a0[4] * __real_3e000000) / __real_41900000));
        lVar26 = local_740;
        fVar31 = __real_4e6e6b28;
        fVar36 = __real_40400000;
        fVar41 = __real_3d4ccccd;
        pfVar28 = (float *)(param_1 + 0x1bf0);
        iVar8 = param_9 + -8;
        if (param_9 + -8 < 0) {
          iVar8 = 0;
        }
        local_7a0[4] = (float)dVar33;
        local_788 = (longlong)local_728 + -param_1;
        fVar32 = 0.0;
        fVar42 = __real_3a156c0d / (float)(1 << ((byte)iVar8 & 0x1f));
        fVar40 = 0.0;
        fVar37 = 0.0;
        fVar42 = fVar42 * fVar42;
        fVar38 = 0.0;
        uVar10 = uVar17;
        do {
          iVar8 = *(int *)(((longlong)&UNK_15350e2a0 - param_1) + (longlong)pfVar28);
          lVar13 = (longlong)iVar8;
          fVar39 = 0.0;
          iVar18 = *(int *)((longlong)pfVar28 + ((longlong)&UNK_15350e2a4 - param_1));
          if (lVar13 < iVar18) {
            pfVar12 = local_758 + (0x1e0 - lVar13) * 2;
            do {
              fVar43 = *pfVar12;
              lVar20 = lVar13 * 2;
              lVar22 = lVar13 * 2;
              lVar13 = lVar13 + 1;
              pfVar15 = pfVar12 + 1;
              pfVar12 = pfVar12 + -2;
              fVar39 = fVar39 + fVar43 * fVar43 + local_758[lVar20] * local_758[lVar20] +
                                local_758[lVar22 + 1] * local_758[lVar22 + 1] + *pfVar15 * *pfVar15;
            } while (lVar13 < iVar18);
          }
          if (fVar40 <= fVar39) {
            fVar40 = fVar39;
          }
          if (iVar8 < 0x40) {
            fVar37 = fVar37 + fVar39;
          }
          else {
            fVar38 = fVar38 + fVar39;
          }
          fVar43 = (fVar7 - local_768) * *pfVar28;
          if (fVar43 <= fVar39) {
            fVar43 = fVar39;
          }
          *pfVar28 = fVar43;
          fVar5 = __real_43200000;
          fVar35 = __real_41f00000;
          if (fVar40 < fVar39 * fVar31) {
            fVar34 = fVar39;
            if (fVar39 <= fVar43) {
              fVar34 = fVar43;
            }
            if ((fVar42 * fVar36 * (float)(iVar18 - iVar8) < fVar34) ||
               ((float)(iVar18 - iVar8) * fVar42 < fVar39)) {
              uVar10 = (ulonglong)uVar25;
            }
          }
          iVar18 = (int)uVar10;
          iVar8 = *(int *)(param_1 + 0x16dc);
          fVar43 = fVar41;
          if ((int)uVar25 <= iVar8) {
            fVar43 = __real_3c23d70a;
          }
          fVar43 = fVar43 * fVar32;
          fVar32 = fVar32 * fVar41;
          if (fVar32 <= fVar39) {
            fVar32 = fVar39;
          }
          uVar25 = uVar25 + 1;
          *(uint *)((longlong)&uStack_2318 + -param_1 + (longlong)pfVar28) = (uint)(fVar39 < fVar43)
          ;
          pfVar28 = pfVar28 + 1;
        } while ((int)uVar25 < 0x13);
        if (*(int *)(param_1 + 8) == 48000) {
          fVar40 = local_750 * ___real_3991a2b4;
          fVar31 = __real_41f00000;
          if (iVar8 == 0x14) {
            fVar31 = __real_41200000;
          }
          fVar39 = (fVar7 - local_768) * *(float *)(param_1 + 0x1c38);
          fVar38 = fVar38 + fVar40;
          if (fVar39 <= fVar40) {
            fVar39 = fVar40;
          }
          fVar43 = fVar40;
          if (fVar40 <= fVar39) {
            fVar43 = fVar39;
          }
          *(float *)(param_1 + 0x1c38) = fVar39;
          if ((fVar31 * fVar36 * fVar42 * fVar5 < fVar43) || (fVar31 * fVar42 * fVar5 < fVar40)) {
            iVar18 = 0x14;
          }
          if (*(int *)(param_1 + 0x16dc) == 0x14) {
            fVar41 = __real_3c23d70a;
          }
          local_6e0 = (uint)(fVar40 < fVar41 * fVar32);
        }
        fVar41 = fVar7;
        if (fVar37 < fVar38) {
          fVar41 = fVar37 / fVar38;
        }
        *(float *)(local_740 + 0x1ddc + param_1) = fVar41;
        if (iVar18 == 0x14) {
          if (local_6e0 != 0) {
            iVar18 = 0x12;
          }
        }
        else if ((iVar18 - 1U < 0x12) && ((&local_72c)[iVar18] != 0)) {
          iVar18 = iVar18 + -1;
        }
        iVar8 = *(int *)(param_1 + 0x1d0c);
        if (iVar8 < 3) {
          iVar18 = 0x14;
        }
        dVar33 = log10((double)local_780);
        fVar36 = __real_41900000;
        fVar41 = *(float *)(param_1 + 0x1d00) - __real_3b449ba6;
        fVar31 = (float)dVar33 * __real_41a00000;
        fVar32 = (fVar7 - local_74c) * *(float *)(param_1 + 0x1d04);
        if (fVar41 <= fVar31) {
          fVar41 = fVar31;
        }
        *(float *)(param_1 + 0x1d04) = fVar32;
        *(float *)(param_1 + 0x1d00) = fVar41;
        if (fVar31 < fVar41 - fVar35) {
          *(float *)(param_1 + 0x1d04) = fVar32 + local_74c;
        }
        lVar20 = 8;
        lVar13 = (longlong)&DAT_15350f8d0 - (longlong)local_588;
        uVar10 = uVar17;
        do {
          fVar41 = 0.0;
          uVar23 = uVar17;
          do {
            lVar22 = uVar23 * 4;
            pfVar28 = local_588 + uVar23;
            uVar23 = uVar23 + 1;
            fVar41 = fVar41 + *(float *)((longlong)local_588 + lVar13 + lVar22) * *pfVar28;
          } while ((longlong)uVar23 < 0x10);
          afStack_628[uVar10 + 4] = fVar41;
          lVar13 = lVar13 + 0x40;
          uVar10 = uVar10 + 1;
        } while ((longlong)uVar10 < 8);
        pcVar14 = "NTLM handshake failure (bad type-2 message). Target Info Offset Len is set incorrect by the peer"
                  + (0x40 - param_1);
        uVar10 = uVar17;
        do {
          fVar41 = 0.0;
          pfVar28 = (float *)(param_1 + 0x1b60);
          lVar13 = 0x10;
          do {
            pfVar12 = pfVar28 + 0x12;
            pfVar15 = (float *)((longlong)pfVar28 + (longlong)pcVar14);
            fVar31 = *pfVar28;
            pfVar28 = pfVar28 + 1;
            fVar41 = fVar41 + (*pfVar12 + fVar31) * *pfVar15 * __real_3f000000;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          afStack_5b8[uVar10 + 4] = fVar41;
          pcVar14 = pcVar14 + 0x40;
          uVar10 = uVar10 + 1;
        } while ((longlong)uVar10 < 8);
        fVar31 = local_77c / fVar36;
        fVar41 = local_778 / fVar36;
        if (iVar8 < 10) {
          fVar41 = __real_3f000000;
        }
        fVar36 = local_7a0[2] / fVar36;
        fVar32 = (float)local_770 / __real_41100000;
        *(float *)(lVar26 + 0x1dc4 + param_1) = (fVar7 - fVar36) * fVar41 + fVar36;
        fVar41 = *(float *)(param_1 + 0x16d8) * __real_3f4ccccd;
        if (fVar32 <= fVar41) {
          fVar32 = fVar41;
        }
        fVar41 = local_774 * __real_3c800000;
        *(float *)(param_1 + 0x16d8) = fVar32;
        *(float *)(lVar26 + 0x1dbc + param_1) = fVar41;
        uVar25 = *(int *)(param_1 + 0x1d08) + 1U & 0x80000007;
        if ((int)uVar25 < 0) {
          uVar25 = (uVar25 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(param_1 + 0x1d08) = uVar25;
        iVar9 = *(int *)(param_1 + 0x1d0c) + 1;
        iVar8 = 10000;
        if (iVar9 < 10000) {
          iVar8 = iVar9;
        }
        lVar13 = -param_1;
        *(int *)(param_1 + 0x1d0c) = iVar8;
        pfVar28 = (float *)(param_1 + 0x1c3c);
        *(float *)(lVar26 + 0x1db8 + param_1) = fVar32;
        lVar22 = 4;
        do {
          *(float *)((longlong)afStack_2314 + -param_1 + (longlong)pfVar28) =
               (((pfVar28[0x10] + *pfVar28) * ___real_3efbe0df -
                (*(float *)((longlong)afStack_2254 + lVar13 + (longlong)pfVar28) + pfVar28[0x18]) *
                ___real_3dfbe22e) + pfVar28[8] * ___real_3f326a01) -
               pfVar28[0x20] * ___real_3fb7aace;
          pfVar28 = pfVar28 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        pfVar28 = (float *)(param_1 + 0x1cbc);
        lVar22 = 4;
        do {
          *pfVar28 = local_748 * *(float *)((longlong)afStack_22d4 + lVar13 + (longlong)pfVar28) +
                     (fVar7 - local_748) * *pfVar28;
          pfVar28 = pfVar28 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        pfVar28 = (float *)(param_1 + 0x1c7c);
        lVar22 = 4;
        pfVar12 = pfVar28;
        do {
          *(float *)(((longlong)afStack_2344 - param_1) + (longlong)pfVar12) =
               (*(float *)((longlong)afStack_2294 + lVar13 + (longlong)pfVar12) - pfVar12[8]) *
               ___real_3f21e8e6 + (pfVar12[-0x10] - *pfVar12) * ___real_3ea1e8e6;
          pfVar12 = pfVar12 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 3;
        pfVar12 = pfVar28;
        do {
          *(float *)(((longlong)afStack_2334 - param_1) + (longlong)pfVar12) =
               ((*(float *)((longlong)afStack_2294 + lVar13 + (longlong)pfVar12) + pfVar12[8]) *
                __real_3f08d64d - (pfVar12[-0x10] + *pfVar12) * ___real_3e88d64d) -
               pfVar12[-8] * __real_3f08d64d;
          pfVar12 = pfVar12 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        uVar10 = uVar17;
        if (5 < *(int *)(param_1 + 0x1d0c)) {
          pfVar12 = (float *)(param_1 + 0x1cdc);
          lVar22 = 9;
          do {
            fVar41 = *(float *)((longlong)afStack_23b4 + -param_1 + (longlong)pfVar12);
            *pfVar12 = fVar41 * local_748 * fVar41 + (fVar7 - local_748) * *pfVar12;
            pfVar12 = pfVar12 + 1;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        do {
          *(float *)((longlong)local_6d8 + uVar10) =
               *(float *)((longlong)afStack_628 + uVar10 + 0x10) -
               *(float *)((longlong)afStack_5b8 + uVar10 + 0x10);
          uVar10 = uVar10 + 4;
        } while ((longlong)uVar10 < 0x10);
        do {
          pfVar28[8] = *pfVar28;
          *pfVar28 = pfVar28[-8];
          pfVar28[-8] = pfVar28[-0x10];
          pfVar28[-0x10] = *(float *)((longlong)afStack_2294 + lVar13 + (longlong)pfVar28);
          pfVar28 = pfVar28 + 1;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        do {
          pfVar12 = (float *)((longlong)local_6ac + uVar17);
          dVar33 = sqrt((double)*(float *)(uVar17 + param_1 + 0x1cdc));
          pfVar28 = (float *)((longlong)&DAT_15350fee0 + uVar17);
          uVar17 = uVar17 + 4;
          *pfVar12 = (float)dVar33 - *pfVar28;
        } while ((longlong)uVar17 < 0x24);
        local_6ac[7] = local_7a0[4] - __real_3f47ae14;
        local_6ac[0xb] = fVar31 - ___real_3f3e643d;
        local_6ac[9] = *(float *)(lVar26 + 0x1db8 + param_1) - ___real_3e1e6fb5;
        local_6ac[10] = *(float *)(lVar26 + 0x1dc4 + param_1) - ___real_3f398234;
        local_67c = *(float *)(lVar26 + 0x1dbc + param_1) + ___real_3d8dc11e;
        local_678 = *(float *)(param_1 + 0x1d04) - ___real_3d8b1ee2;
        compute_dense(&layer0,local_538,local_6d8);
        compute_gru(&layer1,param_1 + 0x1d28,local_538);
        compute_dense(&layer2,&local_730,param_1 + 0x1d28);
        *(int *)(lVar26 + 0x1dd8 + param_1) = local_72c;
        *(undefined4 *)(lVar26 + 0x1dc8 + param_1) = local_730;
        *(int *)(lVar26 + 0x1dd4 + param_1) = iVar18;
        *(int *)(param_1 + 0x16dc) = iVar18;
        *(float *)(lVar26 + 0x1dc0 + param_1) = fVar36;
        *(undefined4 *)(lVar26 + 0x1db4 + param_1) = 1;
      }
    }
    else {
      lVar13 = (longlong)
               (int)((*(int *)(param_1 + 0x1d14) + -2 >> 0x1f & 100U) +
                    *(int *)(param_1 + 0x1d14) + -2) * 0x40;
      puVar3 = (undefined8 *)(lVar13 + 0x1db4 + param_1);
      uVar6 = puVar3[1];
      puVar4 = (undefined8 *)(lVar26 + 0x1db4 + param_1);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar3 = (undefined8 *)(lVar13 + 0x1dc4 + param_1);
      uVar6 = puVar3[1];
      puVar4 = (undefined8 *)(lVar26 + 0x1dc4 + param_1);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar3 = (undefined8 *)(lVar13 + 0x1dd4 + param_1);
      uVar6 = puVar3[1];
      puVar4 = (undefined8 *)(lVar26 + 0x1dd4 + param_1);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar3 = (undefined8 *)(lVar13 + 0x1de4 + param_1);
      uVar6 = puVar3[1];
      puVar4 = (undefined8 *)(lVar26 + 0x1de4 + param_1);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar16 = auStack_2d68;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x14f8730fd;
  return;
}

// tonality_analysis_init @ 14f873e64

void tonality_analysis_init(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = opus_select_arch();
  *param_1 = uVar1;
  param_1[2] = param_2;
  memset(param_1 + 3,0,(longlong)param_1 + (0x36b4 - (longlong)(param_1 + 3)));
  return;
}

// tonality_analysis_reset @ 14f873ea4

void tonality_analysis_reset(longlong param_1)

{
  memset((void *)(param_1 + 0xc),0,(param_1 - (param_1 + 0xc)) + 0x36b4);
  return;
}

// tonality_get_info @ 14f873ec4

void tonality_get_info(longlong param_1,int *param_2,int param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulonglong uVar14;
  
  uVar13 = *(uint *)(param_1 + 0x1d14);
  uVar16 = *(uint *)(param_1 + 0x1d18);
  uVar18 = 0;
  iVar7 = uVar13 - uVar16;
  iVar19 = iVar7 + 100;
  if (-1 < iVar7) {
    iVar19 = iVar7;
  }
  *(int *)(param_1 + 0x1d1c) = *(int *)(param_1 + 0x1d1c) + param_3 / (*(int *)(param_1 + 8) / 400);
  iVar7 = *(int *)(param_1 + 0x1d1c);
  uVar9 = uVar16;
  if (7 < iVar7) {
    do {
      iVar7 = iVar7 + -8;
      uVar9 = uVar9 + 1;
    } while (7 < iVar7);
    *(uint *)(param_1 + 0x1d18) = uVar9;
    *(int *)(param_1 + 0x1d1c) = iVar7;
  }
  if (99 < (int)uVar9) {
    *(uint *)(param_1 + 0x1d18) = uVar9 - 100;
  }
  if (((*(int *)(param_1 + 8) / 0x32 < param_3) && (uVar16 != uVar13)) &&
     (uVar16 = uVar16 + 1, uVar16 == 100)) {
    uVar16 = 0;
  }
  uVar9 = uVar16 - 1;
  if (uVar16 != uVar13) {
    uVar9 = uVar16;
  }
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar9 < 0) {
    uVar10 = 99;
  }
  iVar7 = (int)uVar10;
  uVar17 = (ulonglong)iVar7;
  lVar8 = uVar17 * 0x40;
  puVar2 = (undefined8 *)(lVar8 + 0x1db4 + param_1);
  uVar6 = puVar2[1];
  *(undefined8 *)param_2 = *puVar2;
  *(undefined8 *)(param_2 + 2) = uVar6;
  puVar2 = (undefined8 *)(lVar8 + 0x1dc4 + param_1);
  uVar6 = puVar2[1];
  *(undefined8 *)(param_2 + 4) = *puVar2;
  *(undefined8 *)(param_2 + 6) = uVar6;
  puVar2 = (undefined8 *)(lVar8 + 0x1dd4 + param_1);
  uVar6 = puVar2[1];
  *(undefined8 *)(param_2 + 8) = *puVar2;
  *(undefined8 *)(param_2 + 10) = uVar6;
  puVar2 = (undefined8 *)(lVar8 + 0x1de4 + param_1);
  uVar6 = puVar2[1];
  *(undefined8 *)(param_2 + 0xc) = *puVar2;
  *(undefined8 *)(param_2 + 0xe) = uVar6;
  if (*param_2 != 0) {
    fVar23 = (float)param_2[1];
    iVar12 = 6;
    iVar20 = 1;
    uVar15 = uVar17;
    uVar11 = uVar10;
    uVar14 = uVar18;
    fVar25 = fVar23;
    do {
      bVar21 = uVar15 != 99;
      uVar1 = uVar15 + 1;
      uVar15 = uVar18;
      if (bVar21) {
        uVar15 = uVar1;
      }
      iVar4 = (int)uVar11;
      uVar11 = uVar18;
      if (bVar21) {
        uVar11 = (ulonglong)(iVar4 + 1);
      }
      if ((int)uVar11 == *(int *)(param_1 + 0x1d14)) break;
      iVar20 = iVar20 + 1;
      fVar27 = *(float *)(uVar15 * 0x40 + 0x1db8 + param_1);
      iVar4 = *(int *)(uVar15 * 0x40 + 0x1dd4 + param_1);
      if (fVar25 <= fVar27) {
        fVar25 = fVar27;
      }
      fVar23 = fVar23 + fVar27;
      iVar5 = param_2[8];
      if (param_2[8] <= iVar4) {
        iVar5 = iVar4;
      }
      iVar12 = iVar12 + -1;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      param_2[8] = iVar5;
    } while ((int)uVar13 < 3);
    uVar15 = uVar17;
    uVar11 = uVar18;
    if (0 < iVar12) {
      do {
        uVar10 = (ulonglong)((int)uVar10 - 1);
        uVar15 = uVar15 - 1;
        if ((longlong)uVar15 < 0) {
          uVar10 = 99;
          uVar15 = 99;
        }
        if ((int)uVar10 == *(int *)(param_1 + 0x1d14)) break;
        iVar4 = *(int *)(uVar15 * 0x40 + 0x1dd4 + param_1);
        iVar5 = param_2[8];
        if (param_2[8] <= iVar4) {
          iVar5 = iVar4;
        }
        uVar13 = (int)uVar11 + 1;
        param_2[8] = iVar5;
        uVar11 = (ulonglong)uVar13;
      } while ((int)uVar13 < iVar12);
    }
    fVar27 = fVar23 / (float)iVar20;
    if (fVar23 / (float)iVar20 <= fVar25 - __real_3e4ccccd) {
      fVar27 = fVar25 - __real_3e4ccccd;
    }
    param_2[1] = (int)fVar27;
    fVar23 = __real_3f800000;
    iVar20 = iVar7;
    iVar12 = iVar7;
    if (0xf < iVar19) {
      iVar12 = -0x5f;
      if (iVar7 + 5 < 100) {
        iVar12 = 5;
      }
      iVar12 = iVar12 + iVar7;
      iVar20 = iVar7 + 1;
      if (99 < iVar20) {
        iVar20 = iVar7 + -99;
      }
    }
    uVar15 = (ulonglong)iVar20;
    uVar10 = (ulonglong)iVar12;
    fVar25 = *(float *)(uVar15 * 0x40 + 0x1dd8 + param_1);
    fVar27 = __real_3dcccccd;
    if (__real_3dcccccd <= fVar25) {
      fVar27 = fVar25;
    }
    fVar26 = fVar27 * *(float *)(uVar10 * 0x40 + 0x1dc8 + param_1);
    fVar28 = __real_3f800000;
    fVar29 = 0.0;
    while( true ) {
      bVar21 = uVar10 != 99;
      uVar11 = uVar10 + 1;
      uVar10 = uVar18;
      if (bVar21) {
        uVar10 = uVar11;
      }
      if (uVar10 == (longlong)*(int *)(param_1 + 0x1d14)) break;
      bVar21 = uVar15 != 99;
      uVar11 = uVar15 + 1;
      uVar15 = uVar18;
      if (bVar21) {
        uVar15 = uVar11;
      }
      if (uVar15 == (longlong)*(int *)(param_1 + 0x1d14)) break;
      fVar3 = *(float *)(uVar15 * 0x40 + 0x1dd8 + param_1);
      fVar24 = (fVar25 - fVar3) * __real_41200000;
      fVar22 = (fVar26 - fVar24) / fVar27;
      fVar24 = (fVar24 + fVar26) / fVar27;
      if (fVar28 <= fVar22) {
        fVar22 = fVar28;
      }
      fVar28 = fVar22;
      if (fVar24 <= fVar29) {
        fVar24 = fVar29;
      }
      fVar29 = __real_3dcccccd;
      if (__real_3dcccccd <= fVar3) {
        fVar29 = fVar3;
      }
      fVar27 = fVar27 + fVar29;
      fVar26 = fVar26 + fVar29 * *(float *)(uVar10 * 0x40 + 0x1dc8 + param_1);
      fVar29 = fVar24;
    }
    fVar26 = fVar26 / fVar27;
    param_2[5] = (int)fVar26;
    fVar27 = fVar26;
    if (fVar28 <= fVar26) {
      fVar27 = fVar28;
    }
    if (fVar26 <= fVar29) {
      fVar26 = fVar29;
    }
    if (fVar27 <= 0.0) {
      fVar27 = 0.0;
    }
    if (fVar23 <= fVar26) {
      fVar26 = fVar23;
    }
    if (iVar19 < 10) {
      iVar7 = *(int *)(param_1 + 0x1d0c) + -1;
      fVar28 = fVar27;
      fVar29 = fVar26;
      while( true ) {
        iVar12 = 0xf;
        if (iVar7 < 0xf) {
          iVar12 = iVar7;
        }
        if (iVar12 <= (int)uVar18) break;
        uVar17 = uVar17 - 1;
        if ((longlong)uVar17 < 0) {
          uVar17 = 99;
        }
        uVar18 = (ulonglong)((int)uVar18 + 1);
        fVar3 = *(float *)(uVar17 * 0x40 + 0x1dc8 + param_1);
        if (fVar3 <= fVar28) {
          fVar28 = fVar3;
        }
        if (fVar29 <= fVar3) {
          fVar29 = fVar3;
        }
      }
      fVar28 = fVar28 - fVar25 * __real_3dcccccd;
      fVar29 = fVar25 * __real_3dcccccd + fVar29;
      fVar25 = 0.0;
      if (0.0 <= fVar28) {
        fVar25 = fVar28;
      }
      fVar28 = fVar23;
      if (fVar29 <= fVar23) {
        fVar28 = fVar29;
      }
      fVar23 = fVar23 - (float)iVar19 * __real_3dcccccd;
      fVar27 = fVar27 + (fVar25 - fVar27) * fVar23;
      fVar26 = fVar26 + (fVar28 - fVar26) * fVar23;
    }
    param_2[6] = (int)fVar27;
    param_2[7] = (int)fVar26;
  }
  return;
}


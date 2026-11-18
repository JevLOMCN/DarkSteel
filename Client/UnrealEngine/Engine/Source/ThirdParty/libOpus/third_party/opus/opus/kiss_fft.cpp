// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 6

// FUN_14f88192c @ 14f88192c

void FUN_14f88192c(float *param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
                  int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar8 = (longlong)param_4;
  fVar3 = *(float *)(*(longlong *)(param_3 + 0x38) + 4 + lVar8 * param_2 * 8);
  uVar7 = (ulonglong)param_5;
  if (0 < (int)param_5) {
    lVar9 = param_4 * 2 - lVar8;
    do {
      pfVar5 = *(float **)(param_3 + 0x38);
      pfVar6 = param_1 + lVar8 * 2 + 1;
      pfVar4 = param_1;
      pfVar10 = pfVar5;
      lVar11 = lVar8;
      do {
        pfVar1 = pfVar10 + 1;
        pfVar2 = pfVar10 + 1;
        fVar14 = *pfVar10;
        fVar12 = *pfVar10;
        pfVar10 = pfVar10 + param_2 * 2;
        fVar16 = pfVar6[-1] * *pfVar1 + *pfVar6 * fVar14;
        fVar17 = pfVar6[-1] * fVar12 - *pfVar6 * *pfVar2;
        pfVar1 = pfVar5 + 1;
        pfVar2 = pfVar5 + 1;
        fVar14 = *pfVar5;
        fVar12 = *pfVar5;
        pfVar5 = pfVar5 + param_2 * 4;
        fVar14 = pfVar6[lVar9 * 2 + -1] * fVar14 - pfVar6[lVar9 * 2] * *pfVar2;
        fVar15 = pfVar6[lVar9 * 2] * fVar12 + pfVar6[lVar9 * 2 + -1] * *pfVar1;
        fVar12 = fVar17 + fVar14;
        fVar13 = fVar16 + fVar15;
        fVar15 = (fVar16 - fVar15) * fVar3;
        fVar16 = (fVar17 - fVar14) * fVar3;
        fVar14 = fVar13 * __real_3f000000;
        pfVar6[-1] = *pfVar4 - fVar12 * __real_3f000000;
        *pfVar6 = pfVar6[lVar8 * -2] - fVar14;
        fVar14 = pfVar6[lVar8 * -2];
        *pfVar4 = fVar12 + *pfVar4;
        pfVar4 = pfVar4 + 2;
        pfVar6[lVar8 * -2] = fVar13 + fVar14;
        pfVar6[lVar9 * 2 + -1] = fVar15 + pfVar6[-1];
        pfVar6[lVar9 * 2] = *pfVar6 - fVar16;
        *pfVar6 = fVar16 + *pfVar6;
        pfVar6[-1] = pfVar6[-1] - fVar15;
        pfVar6 = pfVar6 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      param_1 = param_1 + (longlong)param_6 * 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// FUN_14f881b08 @ 14f881b08

void FUN_14f881b08(float *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                  int param_6)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  ulonglong uVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong local_a8;
  
  uVar4 = (ulonglong)param_5;
  if (0 < (int)param_5) {
    if (param_4 == 1) {
      param_1 = param_1 + 1;
      do {
        fVar15 = *param_1 - param_1[4];
        fVar17 = param_1[-1] - param_1[3];
        fVar14 = param_1[3] + param_1[-1];
        param_1[-1] = fVar14;
        *param_1 = *param_1 + param_1[4];
        param_1[3] = fVar14 - (param_1[1] + param_1[5]);
        param_1[4] = *param_1 - (param_1[2] + param_1[6]);
        param_1[-1] = param_1[1] + param_1[5] + param_1[-1];
        *param_1 = param_1[2] + param_1[6] + *param_1;
        fVar14 = param_1[2];
        fVar12 = param_1[1];
        fVar13 = param_1[5];
        param_1[1] = (fVar14 - param_1[6]) + fVar17;
        param_1[2] = fVar15 - (fVar12 - fVar13);
        param_1[5] = fVar17 - (fVar14 - param_1[6]);
        param_1[6] = (fVar12 - fVar13) + fVar15;
        param_1 = param_1 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    else {
      lVar9 = (longlong)(int)(param_4 * 2);
      do {
        pfVar5 = *(float **)(param_3 + 0x38);
        if (0 < (int)param_4) {
          local_a8 = (ulonglong)param_4;
          lVar6 = (int)param_4 - lVar9;
          pfVar10 = param_1 + lVar9 * 2;
          lVar3 = (int)(param_4 * 3) - lVar9;
          pfVar7 = param_1;
          pfVar8 = pfVar5;
          pfVar11 = pfVar5;
          do {
            fVar14 = *pfVar8;
            pfVar1 = pfVar8 + 1;
            pfVar8 = pfVar8 + param_2 * 2;
            fVar12 = *pfVar11;
            fVar13 = *pfVar5;
            fVar21 = *pfVar1 * pfVar10[lVar6 * 2] + fVar14 * pfVar10[lVar6 * 2 + 1];
            pfVar2 = pfVar11 + 1;
            fVar22 = fVar14 * pfVar10[lVar6 * 2] - *pfVar1 * pfVar10[lVar6 * 2 + 1];
            pfVar11 = pfVar11 + param_2 * 4;
            fVar20 = fVar12 * *pfVar10 - *pfVar2 * pfVar10[1];
            fVar15 = fVar12 * pfVar10[1] + *pfVar2 * *pfVar10;
            pfVar1 = pfVar5 + 1;
            pfVar5 = pfVar5 + param_2 * 6;
            fVar19 = *pfVar7 - fVar20;
            fVar20 = fVar20 + *pfVar7;
            fVar17 = fVar13 * pfVar10[lVar3 * 2] - *pfVar1 * pfVar10[lVar3 * 2 + 1];
            fVar14 = pfVar10[lVar9 * -2 + 1];
            fVar16 = fVar13 * pfVar10[lVar3 * 2 + 1] + *pfVar1 * pfVar10[lVar3 * 2];
            fVar18 = fVar14 - fVar15;
            *pfVar7 = fVar20;
            fVar12 = fVar17 + fVar22;
            pfVar10[lVar9 * -2 + 1] = fVar14 + fVar15;
            fVar13 = fVar16 + fVar21;
            fVar21 = fVar21 - fVar16;
            fVar22 = fVar22 - fVar17;
            *pfVar10 = fVar20 - fVar12;
            pfVar10[1] = pfVar10[lVar9 * -2 + 1] - fVar13;
            fVar14 = pfVar10[lVar9 * -2 + 1];
            *pfVar7 = fVar12 + *pfVar7;
            pfVar10[lVar9 * -2 + 1] = fVar13 + fVar14;
            pfVar10[lVar6 * 2] = fVar21 + fVar19;
            pfVar7 = pfVar7 + 2;
            pfVar10[lVar6 * 2 + 1] = fVar18 - fVar22;
            pfVar10[lVar3 * 2] = fVar19 - fVar21;
            pfVar10[lVar3 * 2 + 1] = fVar22 + fVar18;
            pfVar10 = pfVar10 + 2;
            local_a8 = local_a8 - 1;
          } while (local_a8 != 0);
        }
        param_1 = param_1 + (longlong)param_6 * 2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}

// FUN_14f881e48 @ 14f881e48

void FUN_14f881e48(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulonglong local_130;
  
  pfVar5 = *(float **)(param_3 + 0x38);
  uVar12 = (ulonglong)param_5;
  lVar17 = (longlong)(int)param_4;
  lVar6 = lVar17 * param_2;
  fVar1 = pfVar5[lVar6 * 2];
  fVar2 = pfVar5[lVar6 * 2 + 1];
  fVar3 = pfVar5[lVar6 * 4];
  fVar4 = pfVar5[lVar6 * 4 + 1];
  if (0 < (int)param_5) {
    lVar6 = (longlong)(int)(param_4 * 3);
    pfVar13 = (float *)(lVar6 * 8 + param_1);
    do {
      if (0 < (int)param_4) {
        pfVar10 = pfVar13 + lVar6 * -2 + 1;
        lVar7 = (longlong)(int)(param_4 << 2);
        lVar8 = (longlong)(int)(param_4 * 2);
        local_130 = (ulonglong)param_4;
        pfVar9 = pfVar5;
        pfVar11 = pfVar5;
        pfVar14 = pfVar5;
        pfVar15 = pfVar13;
        pfVar16 = pfVar5;
        do {
          fVar27 = pfVar10[-1];
          fVar30 = pfVar10[lVar17 * 2 + -1] * pfVar11[1] + pfVar10[lVar17 * 2] * *pfVar11;
          fVar19 = *pfVar10;
          fVar31 = pfVar10[lVar17 * 2 + -1] * *pfVar11 - pfVar10[lVar17 * 2] * pfVar11[1];
          fVar28 = pfVar10[lVar8 * 2] * *pfVar14 + pfVar10[lVar8 * 2 + -1] * pfVar14[1];
          fVar29 = pfVar10[lVar8 * 2 + -1] * *pfVar14 - pfVar10[lVar8 * 2] * pfVar14[1];
          fVar20 = *pfVar9 * *pfVar15 - pfVar10[lVar6 * 2] * pfVar9[1];
          fVar21 = pfVar9[1] * *pfVar15 + pfVar10[lVar6 * 2] * *pfVar9;
          fVar23 = fVar20 + fVar29;
          fVar29 = fVar29 - fVar20;
          fVar24 = fVar21 + fVar28;
          fVar18 = pfVar10[lVar7 * 2] * *pfVar16 + pfVar10[lVar7 * 2 + -1] * pfVar16[1];
          fVar20 = pfVar10[lVar7 * 2 + -1] * *pfVar16 - pfVar10[lVar7 * 2] * pfVar16[1];
          fVar28 = fVar28 - fVar21;
          fVar26 = fVar20 + fVar31;
          fVar25 = fVar18 + fVar30;
          fVar30 = fVar30 - fVar18;
          fVar31 = fVar31 - fVar20;
          pfVar10[-1] = fVar23 + fVar26 + fVar27;
          *pfVar10 = fVar24 + fVar25 + fVar19;
          fVar22 = fVar23 * fVar3 + fVar26 * fVar1 + fVar27;
          fVar18 = fVar2 * fVar30 + fVar4 * fVar28;
          fVar21 = fVar3 * fVar24 + fVar1 * fVar25 + fVar19;
          pfVar11 = pfVar11 + param_2 * 2;
          pfVar14 = pfVar14 + param_2 * 4;
          pfVar9 = pfVar9 + param_2 * 6;
          pfVar16 = pfVar16 + param_2 * 8;
          fVar20 = (float)((uint)(fVar31 * fVar2 + fVar29 * fVar4) ^
                          __xmm_80000000800000008000000080000000);
          pfVar10[lVar17 * 2 + -1] = fVar22 - fVar18;
          pfVar10[lVar17 * 2] = fVar21 - fVar20;
          pfVar10[lVar7 * 2 + -1] = fVar18 + fVar22;
          pfVar10[lVar7 * 2] = fVar20 + fVar21;
          fVar27 = fVar26 * fVar3 + fVar23 * fVar1 + fVar27;
          fVar20 = fVar2 * fVar28 - fVar30 * fVar4;
          fVar18 = fVar31 * fVar4 - fVar29 * fVar2;
          fVar19 = fVar3 * fVar25 + fVar1 * fVar24 + fVar19;
          pfVar10[lVar8 * 2 + -1] = fVar20 + fVar27;
          pfVar10[lVar8 * 2] = fVar18 + fVar19;
          *pfVar15 = fVar27 - fVar20;
          pfVar15 = pfVar15 + 2;
          pfVar10[lVar6 * 2] = fVar19 - fVar18;
          pfVar10 = pfVar10 + 2;
          local_130 = local_130 - 1;
        } while (local_130 != 0);
      }
      pfVar13 = pfVar13 + (longlong)param_6 * 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

// opus_fft_c @ 14f8822a0

void opus_fft_c(int *param_1,float *param_2,float *param_3)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  fVar2 = (float)param_1[1];
  if (param_2 == param_3) {
    celt_fatal("assertion failed: fin != fout\nIn-place FFT not supported",
               "../../../third_party/opus/src/celt/kiss_fft.c",0x244);
  }
  uVar5 = 0;
  uVar7 = uVar5;
  if (0 < *param_1) {
    do {
      uVar6 = (int)uVar7 + 1;
      fVar3 = *param_2;
      fVar4 = param_2[1];
      param_2 = param_2 + 2;
      param_3[(longlong)*(short *)(*(longlong *)(param_1 + 0xc) + uVar5) * 2] = fVar3 * fVar2;
      psVar1 = (short *)(*(longlong *)(param_1 + 0xc) + uVar5);
      uVar5 = uVar5 + 2;
      param_3[(longlong)*psVar1 * 2 + 1] = fVar4 * fVar2;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *param_1);
  }
  opus_fft_impl(param_1,param_3);
  return;
}

// opus_fft_impl @ 14f882350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void opus_fft_impl(longlong param_1,longlong param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  float *pfVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  short *psVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  uint local_58 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  psVar1 = (short *)(param_1 + 0xe);
  iVar7 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < 1) {
    iVar7 = 0;
  }
  local_58[0] = 1;
  psVar11 = psVar1;
  iVar3 = 0;
  do {
    iVar12 = iVar3;
    sVar2 = *psVar11;
    uVar9 = (ulonglong)iVar12;
    *(int *)((longlong)local_58 + (4 - (longlong)psVar1) + (longlong)psVar11) =
         (int)*(short *)((param_1 - (longlong)psVar1) + 0xc + (longlong)psVar11) *
         *(int *)(((longlong)local_58 - (longlong)psVar1) + (longlong)psVar11);
    psVar11 = psVar11 + 2;
    iVar3 = iVar12 + 1;
  } while (sVar2 != 1);
  if (-1 < iVar12) {
    lVar10 = uVar9 << 2;
    iVar3 = (int)*(short *)(param_1 + 10 + (longlong)((iVar12 + 1) * 2) * 2);
    do {
      iVar12 = 1;
      if ((int)uVar9 != 0) {
        iVar12 = (int)*(short *)(lVar10 + 10 + param_1);
      }
      sVar2 = *(short *)(lVar10 + 0xc + param_1);
      if (sVar2 == 2) {
        if (iVar3 != 4) {
          celt_fatal("assertion failed: m==4","../../../third_party/opus/src/celt/kiss_fft.c",0x4c);
        }
        if (0 < *(int *)((longlong)local_58 + lVar10)) {
          uVar6 = (ulonglong)*(uint *)((longlong)local_58 + lVar10);
          pfVar4 = (float *)(param_2 + 0x28);
          do {
            fVar13 = pfVar4[-2];
            fVar14 = pfVar4[-1];
            pfVar4[-2] = pfVar4[-10] - fVar13;
            pfVar4[-1] = pfVar4[-9] - fVar14;
            pfVar4[-10] = fVar13 + pfVar4[-10];
            pfVar4[-9] = fVar14 + pfVar4[-9];
            fVar13 = (pfVar4[1] + *pfVar4) * __real_3f3504f3;
            fVar14 = (pfVar4[1] - *pfVar4) * __real_3f3504f3;
            *pfVar4 = pfVar4[-8] - fVar13;
            pfVar4[1] = pfVar4[-7] - fVar14;
            pfVar4[-8] = fVar13 + pfVar4[-8];
            pfVar4[-7] = fVar14 + pfVar4[-7];
            fVar13 = pfVar4[3];
            fVar14 = (float)((uint)pfVar4[2] ^ __xmm_80000000800000008000000080000000);
            pfVar4[2] = pfVar4[-6] - fVar13;
            pfVar4[3] = pfVar4[-5] - fVar14;
            pfVar4[-6] = fVar13 + pfVar4[-6];
            pfVar4[-5] = fVar14 + pfVar4[-5];
            fVar13 = (pfVar4[5] - pfVar4[4]) * __real_3f3504f3;
            fVar14 = (float)((uint)(pfVar4[5] + pfVar4[4]) ^ __xmm_80000000800000008000000080000000)
                     * __real_3f3504f3;
            pfVar4[4] = pfVar4[-4] - fVar13;
            pfVar4[5] = pfVar4[-3] - fVar14;
            pfVar4[-4] = fVar13 + pfVar4[-4];
            pfVar4[-3] = fVar14 + pfVar4[-3];
            pfVar4 = pfVar4 + 0x10;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else {
        bVar5 = (byte)iVar7;
        if (sVar2 == 3) {
          local_68 = *(int *)((longlong)local_58 + lVar10);
          local_60 = iVar12;
          FUN_14f88192c(param_2,(longlong)(local_68 << (bVar5 & 0x1f)),param_1);
        }
        else if (sVar2 == 4) {
          local_68 = *(int *)((longlong)local_58 + lVar10);
          local_60 = iVar12;
          FUN_14f881b08(param_2,(longlong)(local_68 << (bVar5 & 0x1f)),param_1);
        }
        else if (sVar2 == 5) {
          local_68 = *(int *)((longlong)local_58 + lVar10);
          local_60 = iVar12;
          FUN_14f881e48(param_2,(longlong)(local_68 << (bVar5 & 0x1f)),param_1);
        }
      }
      lVar10 = lVar10 + -4;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar8;
      iVar3 = iVar12;
    } while (-1 < (int)uVar8);
  }
  return;
}

// opus_ifft_c @ 14f88263c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void opus_ifft_c(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 == param_3) {
    celt_fatal("assertion failed: fin != fout\nIn-place FFT not supported",
               "../../../third_party/opus/src/celt/kiss_fft.c",0x253);
  }
  iVar3 = *param_1;
  iVar6 = 0;
  iVar7 = 0;
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      iVar7 = iVar7 + 1;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      psVar1 = (short *)(*(longlong *)(param_1 + 0xc) + lVar5);
      lVar5 = lVar5 + 2;
      param_3[*psVar1] = uVar2;
      iVar3 = *param_1;
    } while (iVar7 < iVar3);
  }
  iVar7 = 0;
  if (0 < iVar3) {
    puVar4 = (uint *)((longlong)param_3 + 4);
    do {
      iVar7 = iVar7 + 1;
      *puVar4 = *puVar4 ^ __xmm_80000000800000008000000080000000;
      puVar4 = puVar4 + 2;
    } while (iVar7 < *param_1);
  }
  opus_fft_impl(param_1,param_3);
  if (0 < *param_1) {
    puVar4 = (uint *)((longlong)param_3 + 4);
    do {
      iVar6 = iVar6 + 1;
      *puVar4 = *puVar4 ^ __xmm_80000000800000008000000080000000;
      puVar4 = puVar4 + 2;
    } while (iVar6 < *param_1);
  }
  return;
}


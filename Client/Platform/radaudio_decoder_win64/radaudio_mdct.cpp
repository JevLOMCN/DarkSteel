// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: radaudio_decoder_win64
// Functions: 8

// FUN_14f8ce450 @ 14f8ce450

undefined8 FUN_14f8ce450(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar9 = param_3 >> 2;
  uVar3 = 0;
  if (param_3 != 0) {
    for (; (param_3 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  lVar7 = (uVar9 & 0xfffffffffffffff0) + uVar9;
  lVar1 = param_2 + ((uVar9 * 2 & 0xfffffffffffffff0) + uVar9 * 2) * 4;
  lVar4 = (uVar9 * 3 & 0xfffffffffffffff0) + uVar9 * 3;
  lVar5 = lVar4;
  if (param_4 != 1) {
    lVar5 = lVar7;
    lVar7 = lVar4;
  }
  uVar9 = 0;
  lVar5 = param_2 + lVar5 * 4;
  lVar7 = param_2 + lVar7 * 4;
  if (param_3 != 0) {
    uVar8 = uVar9;
    do {
      uVar2 = (ulonglong)
              (*(ushort *)((longlong)&UERAradaudio_fft_impl_::s_bit_reverse + uVar8 * 2) >>
              (9U - (char)uVar3 & 0x3f));
      lVar6 = (uVar8 & 0xfffffffffffffff0) + uVar8;
      lVar4 = (uVar2 & 0xfffffffffffffff0) + uVar2;
      uVar8 = uVar8 + 4;
      fVar16 = *(float *)(param_2 + 0x40 + lVar4 * 4);
      fVar14 = *(float *)(lVar5 + 0x40 + lVar4 * 4);
      fVar15 = *(float *)(param_2 + lVar4 * 4);
      fVar17 = *(float *)(lVar5 + lVar4 * 4);
      fVar10 = fVar15 + *(float *)(lVar1 + lVar4 * 4);
      fVar11 = fVar16 + *(float *)(lVar1 + 0x40 + lVar4 * 4);
      fVar12 = fVar17 + *(float *)(lVar7 + lVar4 * 4);
      fVar13 = fVar14 + *(float *)(lVar7 + 0x40 + lVar4 * 4);
      fVar16 = fVar16 - *(float *)(lVar1 + 0x40 + lVar4 * 4);
      fVar14 = fVar14 - *(float *)(lVar7 + 0x40 + lVar4 * 4);
      fVar15 = fVar15 - *(float *)(lVar1 + lVar4 * 4);
      fVar17 = fVar17 - *(float *)(lVar7 + lVar4 * 4);
      *(float *)(param_1 + lVar6 * 4) = fVar10 + fVar12;
      *(float *)(param_1 + 0x40 + lVar6 * 4) = fVar11 + fVar13;
      *(float *)(param_1 + 8 + lVar6 * 4) = fVar10 - fVar12;
      *(float *)(param_1 + 0x48 + lVar6 * 4) = fVar11 - fVar13;
      *(float *)(param_1 + 4 + lVar6 * 4) = fVar14 + fVar15;
      *(float *)(param_1 + 0x44 + lVar6 * 4) = fVar16 - fVar17;
      *(float *)(param_1 + 0xc + lVar6 * 4) = fVar15 - fVar14;
      *(float *)(param_1 + 0x4c + lVar6 * 4) = fVar17 + fVar16;
    } while (uVar8 < param_3);
  }
  if ((uVar3 & 1) != 0) {
    param_3 = (param_3 & 0xfffffffffffffff0) + param_3;
    if (param_3 != 0) {
      do {
        fVar16 = *(float *)(param_1 + uVar9 * 4);
        fVar14 = *(float *)(param_1 + 0x40 + uVar9 * 4);
        uVar3 = (ulonglong)((uint)uVar9 & 3);
        fVar15 = *(float *)(&DAT_154e13ce8 + uVar3 * 4) * *(float *)(param_1 + 0x10 + uVar9 * 4) -
                 *(float *)(&DAT_154e13cf0 + uVar3 * 4) * *(float *)(param_1 + 0x50 + uVar9 * 4);
        fVar17 = *(float *)(&DAT_154e13ce8 + uVar3 * 4) * *(float *)(param_1 + 0x50 + uVar9 * 4) +
                 *(float *)(&DAT_154e13cf0 + uVar3 * 4) * *(float *)(param_1 + 0x10 + uVar9 * 4);
        *(float *)(param_1 + uVar9 * 4) = fVar16 + fVar15;
        *(float *)(param_1 + 0x40 + uVar9 * 4) = fVar14 + fVar17;
        *(float *)(param_1 + 0x10 + uVar9 * 4) = fVar16 - fVar15;
        *(float *)(param_1 + 0x50 + uVar9 * 4) = fVar14 - fVar17;
        uVar9 = uVar9 + 0x15 & 0xffffffffffffffeb;
      } while (uVar9 < param_3);
    }
    return 8;
  }
  return 4;
}

// FUN_14f8ce720 @ 14f8ce720

void FUN_14f8ce720(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  float **ppfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  longlong lVar6;
  float **ppfVar7;
  float **ppfVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float **ppfVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  ppfVar1 = &UERAradaudio_fft_impl_::s_fft_twiddles + param_2;
  ppfVar13 = &UERAradaudio_fft_impl_::s_fft_twiddles + param_2 * 2;
  lVar14 = (param_2 & 0xfffffffffffffff0) + param_2;
  uVar11 = param_2 * 3;
  lVar2 = param_1 + lVar14 * 4;
  uVar12 = (~uVar11 & 0xfffffffffffffff0) + ~uVar11;
  lVar3 = param_1 + ((param_2 * 2 & 0xfffffffffffffff0) + param_2 * 2) * 4;
  lVar10 = (uVar11 & 0xfffffffffffffff0) + uVar11;
  lVar4 = param_1 + lVar10 * 4;
  lVar6 = lVar4;
  ppfVar7 = ppfVar1;
  ppfVar8 = ppfVar13;
  if (param_4 == 0) {
    lVar14 = lVar10;
    lVar6 = lVar2;
    ppfVar7 = (float **)((longlong)ppfVar1 + param_2 * 4);
    ppfVar8 = ppfVar13 + param_2;
  }
  uVar9 = 0;
  lVar14 = param_1 + lVar14 * 4;
  uVar11 = uVar9;
  if (param_3 != 0) {
    do {
      fVar19 = *(float *)((longlong)ppfVar1 + uVar11 * 4 + (param_2 >> 1) * 4);
      fVar16 = *(float *)((longlong)ppfVar7 + uVar11 * 4);
      fVar17 = *(float *)(lVar4 + 0x40 + uVar9 * 4);
      fVar5 = *(float *)((longlong)ppfVar8 + uVar11 * 4);
      fVar15 = *(float *)(lVar2 + 0x40 + uVar9 * 4);
      fVar20 = *(float *)(lVar3 + uVar9 * 4);
      fVar21 = *(float *)(lVar3 + 0x40 + uVar9 * 4);
      fVar22 = *(float *)(param_1 + uVar9 * 4);
      fVar23 = *(float *)(param_1 + 0x40 + uVar9 * 4);
      fVar24 = fVar19 * *(float *)(lVar2 + uVar9 * 4) - fVar15 * fVar16;
      fVar25 = fVar15 * fVar19 + fVar16 * *(float *)(lVar2 + uVar9 * 4);
      fVar15 = fVar19 * *(float *)(lVar4 + uVar9 * 4) - fVar17 * fVar16;
      fVar19 = fVar17 * fVar19 + fVar16 * *(float *)(lVar4 + uVar9 * 4);
      fVar16 = fVar20 + fVar15;
      fVar20 = fVar20 - fVar15;
      fVar15 = fVar23 + fVar25;
      fVar23 = fVar23 - fVar25;
      fVar25 = fVar19 + fVar21;
      fVar21 = fVar21 - fVar19;
      fVar19 = *(float *)((longlong)ppfVar13 + uVar11 * 4 + param_2 * 4);
      fVar18 = fVar25 * fVar19 + fVar16 * fVar5;
      fVar17 = fVar22 + fVar24;
      fVar16 = fVar16 * fVar19 - fVar25 * fVar5;
      fVar22 = fVar22 - fVar24;
      *(float *)(param_1 + 0x40 + uVar9 * 4) = fVar15 + fVar18;
      *(float *)(param_1 + uVar9 * 4) = fVar17 + fVar16;
      *(float *)(lVar3 + uVar9 * 4) = fVar17 - fVar16;
      *(float *)(lVar3 + 0x40 + uVar9 * 4) = fVar15 - fVar18;
      fVar16 = fVar21 * fVar19 + fVar20 * fVar5;
      fVar19 = fVar21 * fVar5 - fVar20 * fVar19;
      *(float *)(lVar6 + uVar9 * 4) = fVar22 + fVar16;
      *(float *)(lVar6 + 0x40 + uVar9 * 4) = fVar23 + fVar19;
      *(float *)(lVar14 + uVar9 * 4) = fVar22 - fVar16;
      *(float *)(lVar14 + 0x40 + uVar9 * 4) = fVar23 - fVar19;
      uVar9 = uVar9 - uVar12 & uVar12;
      uVar11 = uVar11 + 1 & param_2 - 1;
    } while (uVar9 < param_3);
  }
  return;
}

// FUN_14f8cea10 @ 14f8cea10

void FUN_14f8cea10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar16;
  
  uVar15 = param_5 >> 2;
  uVar14 = 0;
  param_3 = param_3 - param_4;
  param_5 = param_5 >> 1;
  if (3 < uVar15) {
    pfVar11 = (float *)(param_4 + 4);
    pfVar13 = (float *)(param_2 + 0x14);
    pfVar16 = (float *)(param_4 + -4 + param_5 * 4);
    do {
      fVar1 = *(float *)((longlong)pfVar11 + param_3 + -4);
      fVar2 = pfVar11[-1];
      lVar12 = param_5 - uVar14;
      fVar3 = pfVar13[-5];
      fVar4 = *(float *)((longlong)pfVar16 + param_3);
      fVar5 = *pfVar16;
      fVar6 = *(float *)(param_2 + -4 + lVar12 * 8);
      fVar7 = *(float *)(param_2 + -8 + lVar12 * 8);
      fVar8 = pfVar13[-4];
      lVar10 = ((lVar12 - 1U & 0xfffffffffffffff0) - uVar14) + param_5;
      lVar9 = (uVar14 & 0xfffffffffffffff0) + uVar14;
      *(float *)(param_1 + lVar9 * 4) = fVar1 * fVar3 - fVar2 * fVar6;
      *(float *)(param_1 + 0x40 + lVar9 * 4) = fVar2 * fVar3 + fVar1 * fVar6;
      lVar9 = (uVar14 + 1 & 0xfffffffffffffff0) + uVar14;
      *(float *)(param_1 + -4 + lVar10 * 4) = fVar4 * fVar7 - fVar5 * fVar8;
      *(float *)(param_1 + 0x3c + lVar10 * 4) = fVar5 * fVar7 + fVar4 * fVar8;
      fVar1 = *(float *)((longlong)pfVar11 + param_3);
      fVar2 = pfVar13[-3];
      fVar3 = *pfVar11;
      lVar10 = ((lVar12 - 2U & 0xfffffffffffffff0) - uVar14) + param_5;
      fVar4 = *(float *)(param_2 + -0xc + lVar12 * 8);
      fVar5 = *(float *)((longlong)pfVar16 + param_3 + -4);
      fVar6 = pfVar16[-1];
      fVar7 = *(float *)(param_2 + -0x10 + lVar12 * 8);
      fVar8 = pfVar13[-2];
      *(float *)(param_1 + 4 + lVar9 * 4) = fVar1 * fVar2 - fVar3 * fVar4;
      *(float *)(param_1 + 0x44 + lVar9 * 4) = fVar2 * fVar3 + fVar1 * fVar4;
      lVar9 = (uVar14 + 2 & 0xfffffffffffffff0) + uVar14;
      *(float *)(param_1 + -8 + lVar10 * 4) = fVar5 * fVar7 - fVar6 * fVar8;
      *(float *)(param_1 + 0x38 + lVar10 * 4) = fVar6 * fVar7 + fVar5 * fVar8;
      fVar1 = *(float *)((longlong)pfVar11 + param_3 + 4);
      fVar2 = pfVar11[1];
      lVar10 = ((lVar12 - 3U & 0xfffffffffffffff0) - uVar14) + param_5;
      fVar3 = pfVar13[-1];
      fVar4 = *(float *)((longlong)pfVar16 + param_3 + -8);
      fVar5 = pfVar16[-2];
      fVar6 = *pfVar13;
      fVar7 = *(float *)(param_2 + -0x14 + lVar12 * 8);
      fVar8 = *(float *)(param_2 + -0x18 + lVar12 * 8);
      *(float *)(param_1 + 8 + lVar9 * 4) = fVar1 * fVar3 - fVar2 * fVar7;
      *(float *)(param_1 + 0x48 + lVar9 * 4) = fVar2 * fVar3 + fVar1 * fVar7;
      lVar9 = (uVar14 + 3 & 0xfffffffffffffff0) + uVar14;
      *(float *)(param_1 + -0xc + lVar10 * 4) = fVar4 * fVar8 - fVar5 * fVar6;
      *(float *)(param_1 + 0x34 + lVar10 * 4) = fVar5 * fVar8 + fVar4 * fVar6;
      fVar1 = *(float *)((longlong)pfVar11 + param_3 + 8);
      fVar2 = pfVar11[2];
      fVar3 = pfVar13[1];
      fVar4 = *(float *)((longlong)pfVar16 + param_3 + -0xc);
      fVar5 = pfVar16[-3];
      lVar10 = ((lVar12 - 4U & 0xfffffffffffffff0) - uVar14) + param_5;
      fVar6 = pfVar13[2];
      uVar14 = uVar14 + 4;
      fVar7 = *(float *)(param_2 + -0x1c + lVar12 * 8);
      pfVar11 = pfVar11 + 4;
      fVar8 = *(float *)(param_2 + -0x20 + lVar12 * 8);
      pfVar13 = pfVar13 + 8;
      pfVar16 = pfVar16 + -4;
      *(float *)(param_1 + 0xc + lVar9 * 4) = fVar1 * fVar3 - fVar2 * fVar7;
      *(float *)(param_1 + 0x4c + lVar9 * 4) = fVar2 * fVar3 + fVar1 * fVar7;
      *(float *)(param_1 + -0x10 + lVar10 * 4) = fVar4 * fVar8 - fVar5 * fVar6;
      *(float *)(param_1 + 0x30 + lVar10 * 4) = fVar5 * fVar8 + fVar4 * fVar6;
    } while (uVar14 < uVar15 - 3);
  }
  if (uVar14 < uVar15) {
    pfVar11 = (float *)(param_4 + uVar14 * 4);
    pfVar13 = (float *)(param_4 + ((param_5 - uVar14) + -1) * 4);
    do {
      fVar1 = *(float *)((longlong)pfVar11 + param_3);
      fVar2 = *pfVar11;
      fVar3 = *(float *)(param_2 + uVar14 * 8);
      fVar4 = *(float *)(param_2 + 4 + uVar14 * 8);
      fVar5 = *(float *)((longlong)pfVar13 + param_3);
      lVar10 = (uVar14 & 0xfffffffffffffff0) + uVar14;
      fVar6 = *pfVar13;
      lVar9 = param_5 - uVar14;
      pfVar11 = pfVar11 + 1;
      pfVar13 = pfVar13 + -1;
      fVar7 = *(float *)(param_2 + -4 + lVar9 * 8);
      fVar8 = *(float *)(param_2 + -8 + lVar9 * 8);
      lVar9 = ((lVar9 - 1U & 0xfffffffffffffff0) - uVar14) + param_5;
      uVar14 = uVar14 + 1;
      *(float *)(param_1 + lVar10 * 4) = fVar1 * fVar3 - fVar2 * fVar7;
      *(float *)(param_1 + 0x40 + lVar10 * 4) = fVar1 * fVar7 + fVar3 * fVar2;
      *(float *)(param_1 + 0x3c + lVar9 * 4) = fVar6 * fVar8 + fVar4 * fVar5;
      *(float *)(param_1 + -4 + lVar9 * 4) = fVar5 * fVar8 - fVar4 * fVar6;
    } while (uVar14 < uVar15);
  }
  return;
}

// FUN_14f8cee70 @ 14f8cee70

void FUN_14f8cee70(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  float *pfVar17;
  
  uVar16 = 0;
  param_4 = param_4 - param_5;
  uVar11 = param_6 >> 2;
  param_6 = param_6 >> 1;
  if (3 < uVar11) {
    pfVar13 = (float *)(param_1 + 0x14);
    pfVar15 = (float *)(param_5 + 4);
    pfVar12 = (float *)(param_2 + -0xc + param_6 * 4);
    pfVar17 = (float *)(param_5 + -4 + param_6 * 4);
    do {
      fVar1 = *(float *)((longlong)pfVar15 + param_4 + -4);
      fVar2 = pfVar15[-1];
      fVar3 = *(float *)(param_4 + (longlong)pfVar17);
      fVar4 = *pfVar17;
      lVar14 = param_6 - uVar16;
      lVar10 = (uVar16 & 0xfffffffffffffff0) + uVar16;
      fVar5 = *(float *)(param_3 + lVar10 * 4);
      lVar9 = ((lVar14 - 1U & 0xfffffffffffffff0) - uVar16) + param_6;
      fVar6 = *(float *)(param_3 + 0x40 + lVar10 * 4);
      lVar10 = (uVar16 + 1 & 0xfffffffffffffff0) + uVar16;
      fVar7 = *(float *)(param_3 + -4 + lVar9 * 4);
      fVar8 = *(float *)(param_3 + 0x3c + lVar9 * 4);
      lVar9 = ((lVar14 - 2U & 0xfffffffffffffff0) - uVar16) + param_6;
      pfVar13[-5] = fVar1 * fVar6 + fVar2 * fVar5;
      pfVar13[-4] = fVar4 * fVar8 - fVar3 * fVar7;
      pfVar12[1] = fVar3 * fVar8 + fVar4 * fVar7;
      pfVar12[2] = fVar2 * fVar6 - fVar1 * fVar5;
      fVar1 = *(float *)(param_3 + -8 + lVar9 * 4);
      fVar2 = *(float *)(param_3 + 0x38 + lVar9 * 4);
      fVar3 = *(float *)(param_3 + 4 + lVar10 * 4);
      fVar4 = *(float *)(param_3 + 0x44 + lVar10 * 4);
      fVar5 = *(float *)(param_4 + (longlong)pfVar15);
      fVar6 = *pfVar15;
      fVar7 = *(float *)(param_4 + -4 + (longlong)pfVar17);
      fVar8 = pfVar17[-1];
      lVar10 = (uVar16 + 2 & 0xfffffffffffffff0) + uVar16;
      lVar9 = ((lVar14 - 3U & 0xfffffffffffffff0) - uVar16) + param_6;
      pfVar13[-3] = fVar5 * fVar4 + fVar6 * fVar3;
      pfVar13[-2] = fVar8 * fVar2 - fVar7 * fVar1;
      pfVar12[-1] = fVar7 * fVar2 + fVar8 * fVar1;
      *pfVar12 = fVar6 * fVar4 - fVar5 * fVar3;
      fVar1 = *(float *)((longlong)pfVar15 + param_4 + 4);
      fVar2 = pfVar15[1];
      fVar3 = *(float *)(param_3 + -0xc + lVar9 * 4);
      fVar4 = *(float *)(param_3 + 0x34 + lVar9 * 4);
      fVar5 = *(float *)(param_3 + 8 + lVar10 * 4);
      fVar6 = *(float *)(param_3 + 0x48 + lVar10 * 4);
      fVar7 = *(float *)(param_4 + -8 + (longlong)pfVar17);
      fVar8 = pfVar17[-2];
      lVar9 = ((lVar14 - 4U & 0xfffffffffffffff0) - uVar16) + param_6;
      lVar10 = (uVar16 + 3 & 0xfffffffffffffff0) + uVar16;
      uVar16 = uVar16 + 4;
      pfVar13[-1] = fVar1 * fVar6 + fVar2 * fVar5;
      *pfVar13 = fVar8 * fVar4 - fVar7 * fVar3;
      pfVar12[-3] = fVar8 * fVar3 + fVar7 * fVar4;
      pfVar12[-2] = fVar2 * fVar6 - fVar1 * fVar5;
      fVar1 = *(float *)((longlong)pfVar15 + param_4 + 8);
      fVar2 = pfVar15[2];
      fVar3 = *(float *)(param_4 + -0xc + (longlong)pfVar17);
      fVar4 = pfVar17[-3];
      pfVar15 = pfVar15 + 4;
      fVar5 = *(float *)(param_3 + 0xc + lVar10 * 4);
      fVar6 = *(float *)(param_3 + 0x4c + lVar10 * 4);
      pfVar17 = pfVar17 + -4;
      fVar7 = *(float *)(param_3 + -0x10 + lVar9 * 4);
      fVar8 = *(float *)(param_3 + 0x30 + lVar9 * 4);
      pfVar13[1] = fVar1 * fVar6 + fVar2 * fVar5;
      pfVar13[2] = fVar4 * fVar8 - fVar3 * fVar7;
      pfVar13 = pfVar13 + 8;
      pfVar12[-5] = fVar3 * fVar8 + fVar4 * fVar7;
      pfVar12[-4] = fVar2 * fVar6 - fVar1 * fVar5;
      pfVar12 = pfVar12 + -8;
    } while (uVar16 < uVar11 - 3);
  }
  if (uVar16 < uVar11) {
    pfVar13 = (float *)(param_5 + uVar16 * 4);
    pfVar15 = (float *)(param_5 + ((param_6 - uVar16) + -1) * 4);
    pfVar12 = (float *)(param_2 + (param_6 - (uVar16 * 2 + 2)) * 4);
    do {
      fVar1 = *(float *)((longlong)pfVar13 + param_4);
      fVar2 = *pfVar13;
      fVar3 = *(float *)(param_4 + (longlong)pfVar15);
      lVar9 = (uVar16 & 0xfffffffffffffff0) + uVar16;
      fVar4 = *pfVar15;
      pfVar13 = pfVar13 + 1;
      fVar5 = *(float *)(param_3 + lVar9 * 4);
      fVar6 = *(float *)(param_3 + 0x40 + lVar9 * 4);
      lVar9 = (((param_6 - uVar16) - 1 & 0xfffffffffffffff0) - uVar16) + param_6;
      pfVar15 = pfVar15 + -1;
      fVar7 = *(float *)(param_3 + 0x3c + lVar9 * 4);
      fVar8 = *(float *)(param_3 + -4 + lVar9 * 4);
      *(float *)(param_1 + uVar16 * 8) = fVar1 * fVar6 + fVar2 * fVar5;
      *(float *)(param_1 + 4 + uVar16 * 8) = fVar7 * fVar4 - fVar3 * fVar8;
      uVar16 = uVar16 + 1;
      *pfVar12 = fVar3 * fVar7 + fVar8 * fVar4;
      pfVar12[1] = fVar2 * fVar6 - fVar1 * fVar5;
      pfVar12 = pfVar12 + -2;
    } while (uVar16 < uVar11);
  }
  return;
}

// FUN_14f8cf310 @ 14f8cf310

void FUN_14f8cf310(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = *param_2;
  *param_1 = fVar1 + *param_3;
  *param_2 = fVar2 + *param_4;
  *param_3 = fVar1 - *param_3;
  *param_4 = fVar2 - *param_4;
  fVar1 = *param_5;
  fVar2 = *param_6;
  *param_5 = fVar1 + *param_7;
  *param_6 = fVar2 + *param_8;
  *param_7 = fVar1 - *param_7;
  *param_8 = fVar2 - *param_8;
  fVar1 = *param_1;
  fVar2 = *param_2;
  *param_1 = fVar1 + *param_5;
  *param_2 = fVar2 + *param_6;
  *param_5 = fVar1 - *param_5;
  *param_6 = fVar2 - *param_6;
  fVar1 = *param_3;
  fVar2 = *param_8;
  fVar3 = *param_4;
  fVar4 = *param_7;
  *param_3 = fVar2 + fVar1;
  *param_4 = fVar3 - fVar4;
  *param_7 = fVar1 - fVar2;
  *param_8 = fVar4 + fVar3;
  return;
}

// FUN_14f8cf6d0 @ 14f8cf6d0

void FUN_14f8cf6d0(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (*(code *)*param_5)();
  uVar2 = param_3 >> 2;
  if (uVar1 <= uVar2) {
    do {
      (*(code *)param_5[1])(param_1,uVar1,(param_3 & 0xfffffffffffffff0) + param_3,param_4);
      uVar1 = uVar1 * 4;
    } while (uVar1 < uVar2 || uVar1 - uVar2 == 0);
  }
  return;
}

// UERAradaudio_imdct_fft_only_middle_ @ 14f8cf810

void UERAradaudio_imdct_fft_only_middle_
               (undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined **ppuVar3;
  float **ppfVar4;
  
  if ((char)param_1 == '\0') {
    ppuVar3 = &UERAradaudio_fft_impl_::kernels_scalar;
  }
  else {
    ppuVar3 = &UERAradaudio_fft_impl_::kernels_avx2;
    if ((char)((ulonglong)param_1 >> 0x20) == '\0') {
      ppuVar3 = &UERAradaudio_fft_impl_::kernels_sse2;
    }
  }
  if (param_4 == 0x400) {
    ppfVar4 = &UERAradaudio_fft_impl_::s_mdct_long_twiddles;
  }
  else {
    if (param_4 != 0x80) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ppfVar4 = &UERAradaudio_fft_impl_::s_mdct_short_twiddles;
  }
  lVar1 = (longlong)ppfVar4 + (param_4 >> 1) * 4;
  (*(code *)ppuVar3[2])(param_2,param_3,ppfVar4,lVar1,param_4);
  FUN_14f8cf6d0(param_3,param_2,param_4 >> 1,0,ppuVar3);
  (*(code *)ppuVar3[3])(param_2,param_2 + (param_4 >> 1) * 4,param_3,ppfVar4,lVar1,param_4);
  return;
}

// UERAradaudio_mdct_fft_ @ 14f8cf900

void UERAradaudio_mdct_fft_
               (undefined8 param_1,longlong param_2,ulonglong param_3,longlong param_4,
               longlong param_5,longlong param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  ulonglong uVar12;
  float *pfVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  float **ppfVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float **local_res8;
  undefined **local_b8;
  
  uVar16 = param_3 >> 2;
  uVar12 = param_3 >> 1;
  if ((char)param_1 == '\0') {
    local_b8 = &UERAradaudio_fft_impl_::kernels_scalar;
  }
  else {
    local_b8 = &UERAradaudio_fft_impl_::kernels_avx2;
    if ((char)((ulonglong)param_1 >> 0x20) == '\0') {
      local_b8 = &UERAradaudio_fft_impl_::kernels_sse2;
    }
  }
  uVar15 = 0;
  if (param_3 == 0x400) {
    ppfVar18 = &UERAradaudio_fft_impl_::s_mdct_long_twiddles;
    local_res8 = &UERAradaudio_fft_impl_::s_mdct_long_twiddles;
  }
  else {
    if (param_3 != 0x80) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ppfVar18 = &UERAradaudio_fft_impl_::s_mdct_short_twiddles;
    local_res8 = &UERAradaudio_fft_impl_::s_mdct_short_twiddles;
  }
  lVar20 = param_5 - param_4;
  lVar1 = (longlong)ppfVar18 + (param_3 >> 1) * 4;
  if (3 < uVar16) {
    pfVar11 = (float *)(lVar1 + 4);
    pfVar7 = (float *)(uVar12 * 4 + -4 + lVar1);
    lVar17 = (longlong)ppfVar18 - lVar1;
    pfVar9 = (float *)(param_5 + 4 + uVar12 * 4);
    pfVar13 = (float *)(param_4 + -4 + uVar12 * 4);
    lVar19 = param_4 - param_5;
    do {
      fVar22 = *(float *)(lVar20 + (longlong)pfVar13) + pfVar9[-1];
      fVar21 = *(float *)((longlong)pfVar9 + lVar19 + -4) - *pfVar13;
      fVar2 = *(float *)(lVar17 + -4 + (longlong)pfVar11);
      lVar8 = (uVar15 & 0xfffffffffffffff0) + uVar15;
      fVar3 = pfVar11[-1];
      fVar24 = *(float *)((longlong)pfVar9 + lVar19) - pfVar13[-1];
      fVar23 = *(float *)(lVar20 + -4 + (longlong)pfVar13) + *pfVar9;
      fVar4 = *(float *)(lVar17 + (longlong)pfVar7);
      lVar14 = uVar12 - uVar15;
      fVar5 = *pfVar7;
      lVar10 = ((lVar14 - 1U & 0xfffffffffffffff0) - uVar15) + uVar12;
      *(float *)(param_2 + lVar8 * 4) = fVar22 * fVar2 - fVar21 * fVar3;
      *(float *)(param_2 + 0x40 + lVar8 * 4) = fVar22 * fVar3 + fVar21 * fVar2;
      lVar8 = (uVar15 + 1 & 0xfffffffffffffff0) + uVar15;
      *(float *)(param_2 + -4 + lVar10 * 4) = fVar24 * fVar4 - fVar23 * fVar5;
      *(float *)(param_2 + 0x3c + lVar10 * 4) = fVar24 * fVar5 + fVar23 * fVar4;
      fVar22 = *(float *)(lVar20 + -8 + (longlong)pfVar13) + pfVar9[1];
      fVar21 = *(float *)((longlong)pfVar9 + lVar19 + 4) - pfVar13[-2];
      fVar2 = *(float *)(lVar17 + (longlong)pfVar11);
      lVar10 = ((lVar14 - 2U & 0xfffffffffffffff0) - uVar15) + uVar12;
      fVar3 = *pfVar11;
      fVar24 = *(float *)((longlong)pfVar9 + lVar19 + 8) - pfVar13[-3];
      fVar23 = *(float *)(lVar20 + -0xc + (longlong)pfVar13) + pfVar9[2];
      fVar4 = *(float *)(lVar17 + -4 + (longlong)pfVar7);
      fVar5 = pfVar7[-1];
      *(float *)(param_2 + 4 + lVar8 * 4) = fVar22 * fVar2 - fVar21 * fVar3;
      *(float *)(param_2 + 0x44 + lVar8 * 4) = fVar22 * fVar3 + fVar21 * fVar2;
      *(float *)(param_2 + -8 + lVar10 * 4) = fVar24 * fVar4 - fVar23 * fVar5;
      *(float *)(param_2 + 0x38 + lVar10 * 4) = fVar24 * fVar5 + fVar23 * fVar4;
      fVar22 = *(float *)(lVar20 + -0x10 + (longlong)pfVar13) + pfVar9[3];
      fVar21 = *(float *)((longlong)pfVar9 + lVar19 + 0xc) - pfVar13[-4];
      fVar2 = *(float *)((longlong)pfVar11 + lVar17 + 4);
      fVar3 = pfVar11[1];
      lVar10 = ((lVar14 - 3U & 0xfffffffffffffff0) - uVar15) + uVar12;
      fVar24 = *(float *)((longlong)pfVar9 + lVar19 + 0x10) - pfVar13[-5];
      fVar23 = *(float *)(lVar20 + -0x14 + (longlong)pfVar13) + pfVar9[4];
      fVar4 = *(float *)((longlong)pfVar7 + lVar17 + -8);
      fVar5 = pfVar7[-2];
      lVar8 = (uVar15 + 2 & 0xfffffffffffffff0) + uVar15;
      *(float *)(param_2 + 8 + lVar8 * 4) = fVar22 * fVar2 - fVar21 * fVar3;
      *(float *)(param_2 + 0x48 + lVar8 * 4) = fVar22 * fVar3 + fVar21 * fVar2;
      lVar8 = (uVar15 + 3 & 0xfffffffffffffff0) + uVar15;
      *(float *)(param_2 + -0xc + lVar10 * 4) = fVar24 * fVar4 - fVar23 * fVar5;
      *(float *)(param_2 + 0x34 + lVar10 * 4) = fVar24 * fVar5 + fVar23 * fVar4;
      fVar22 = *(float *)(lVar20 + -0x18 + (longlong)pfVar13) + pfVar9[5];
      fVar21 = *(float *)((longlong)pfVar9 + lVar19 + 0x14) - pfVar13[-6];
      fVar2 = *(float *)((longlong)pfVar11 + lVar17 + 8);
      lVar10 = ((lVar14 - 4U & 0xfffffffffffffff0) - uVar15) + uVar12;
      fVar3 = pfVar11[2];
      uVar15 = uVar15 + 4;
      fVar24 = *(float *)((longlong)pfVar9 + lVar19 + 0x18) - pfVar13[-7];
      fVar23 = *(float *)(lVar20 + -0x1c + (longlong)pfVar13) + pfVar9[6];
      fVar4 = *(float *)((longlong)pfVar7 + lVar17 + -0xc);
      pfVar11 = pfVar11 + 4;
      fVar5 = pfVar7[-3];
      pfVar9 = pfVar9 + 8;
      pfVar13 = pfVar13 + -8;
      *(float *)(param_2 + 0xc + lVar8 * 4) = fVar22 * fVar2 - fVar21 * fVar3;
      *(float *)(param_2 + 0x4c + lVar8 * 4) = fVar22 * fVar3 + fVar21 * fVar2;
      *(float *)(param_2 + -0x10 + lVar10 * 4) = fVar24 * fVar4 - fVar23 * fVar5;
      *(float *)(param_2 + 0x30 + lVar10 * 4) = fVar24 * fVar5 + fVar23 * fVar4;
      pfVar7 = pfVar7 + -4;
      ppfVar18 = local_res8;
    } while (uVar15 < uVar16 - 3);
  }
  if (uVar15 < uVar16) {
    pfVar7 = (float *)(uVar15 * 4 + lVar1);
    pfVar11 = (float *)(param_5 + (uVar12 + 1 + uVar15 * 2) * 4);
    pfVar9 = (float *)(param_4 + (uVar12 + uVar15 * -2 + -1) * 4);
    pfVar13 = (float *)((uVar12 - uVar15) * 4 + -4 + lVar1);
    do {
      fVar22 = *(float *)(lVar20 + (longlong)pfVar9) + pfVar11[-1];
      fVar21 = *(float *)((param_4 - param_5) + -4 + (longlong)pfVar11) - *pfVar9;
      fVar2 = *(float *)(((longlong)ppfVar18 - lVar1) + (longlong)pfVar7);
      lVar17 = (uVar15 & 0xfffffffffffffff0) + uVar15;
      fVar3 = *pfVar7;
      fVar24 = *(float *)((longlong)pfVar11 + (param_4 - param_5)) - pfVar9[-1];
      fVar23 = *(float *)(lVar20 + -4 + (longlong)pfVar9) + *pfVar11;
      fVar4 = *(float *)(((longlong)ppfVar18 - lVar1) + (longlong)pfVar13);
      fVar5 = *pfVar13;
      lVar19 = ((uVar12 - uVar15) - 1 & 0xfffffffffffffff0) - uVar15;
      uVar15 = uVar15 + 1;
      lVar19 = lVar19 + uVar12;
      pfVar7 = pfVar7 + 1;
      pfVar13 = pfVar13 + -1;
      pfVar11 = pfVar11 + 2;
      pfVar9 = pfVar9 + -2;
      *(float *)(param_2 + lVar17 * 4) = fVar22 * fVar2 - fVar21 * fVar3;
      *(float *)(param_2 + 0x40 + lVar17 * 4) = fVar22 * fVar3 + fVar21 * fVar2;
      *(float *)(param_2 + -4 + lVar19 * 4) = fVar24 * fVar4 - fVar23 * fVar5;
      *(float *)(param_2 + 0x3c + lVar19 * 4) = fVar24 * fVar5 + fVar23 * fVar4;
    } while (uVar15 < uVar16);
  }
  uVar16 = (*(code *)*local_b8)(param_6,param_2,uVar12,0);
  uVar15 = param_3 >> 3;
  if (uVar16 <= uVar15) {
    do {
      (*(code *)local_b8[1])(param_6,uVar16,(uVar12 & 0xfffffffffffffff0) + uVar12,0);
      uVar16 = uVar16 * 4;
    } while (uVar16 < uVar15 || uVar16 - uVar15 == 0);
  }
  uVar16 = 0;
  if (3 < uVar12) {
    pfVar13 = (float *)(param_3 * 4 + -0xc + param_2);
    lVar20 = (longlong)ppfVar18 - lVar1;
    pfVar11 = (float *)(param_2 + 0x10);
    pfVar9 = (float *)(lVar1 + 4);
    do {
      fVar2 = *(float *)(lVar20 + -4 + (longlong)pfVar9);
      fVar3 = pfVar9[-1];
      lVar19 = (uVar16 + 1 & 0xfffffffffffffff0) + uVar16;
      lVar17 = (uVar16 & 0xfffffffffffffff0) + uVar16;
      fVar4 = *(float *)(param_6 + lVar17 * 4);
      fVar5 = *(float *)(param_6 + 0x40 + lVar17 * 4);
      pfVar11[-4] = fVar5 * fVar3 - fVar4 * fVar2;
      pfVar13[2] = fVar4 * fVar3 + fVar5 * fVar2;
      fVar2 = *(float *)(param_6 + 4 + lVar19 * 4);
      fVar3 = *(float *)(param_6 + 0x44 + lVar19 * 4);
      fVar4 = *(float *)(lVar20 + (longlong)pfVar9);
      fVar5 = *pfVar9;
      lVar17 = (uVar16 + 2 & 0xfffffffffffffff0) + uVar16;
      pfVar11[-2] = fVar3 * fVar5 - fVar2 * fVar4;
      *pfVar13 = fVar2 * fVar5 + fVar3 * fVar4;
      fVar2 = *(float *)(param_6 + 8 + lVar17 * 4);
      fVar3 = *(float *)(param_6 + 0x48 + lVar17 * 4);
      fVar4 = *(float *)(lVar20 + 4 + (longlong)pfVar9);
      fVar5 = pfVar9[1];
      lVar17 = (uVar16 + 3 & 0xfffffffffffffff0) + uVar16;
      uVar16 = uVar16 + 4;
      *pfVar11 = fVar3 * fVar5 - fVar2 * fVar4;
      pfVar13[-2] = fVar2 * fVar5 + fVar3 * fVar4;
      fVar2 = *(float *)(lVar20 + 8 + (longlong)pfVar9);
      fVar3 = pfVar9[2];
      pfVar9 = pfVar9 + 4;
      fVar4 = *(float *)(param_6 + 0xc + lVar17 * 4);
      fVar5 = *(float *)(param_6 + 0x4c + lVar17 * 4);
      pfVar11[2] = fVar5 * fVar3 - fVar4 * fVar2;
      pfVar11 = pfVar11 + 8;
      pfVar13[-4] = fVar4 * fVar3 + fVar5 * fVar2;
      pfVar13 = pfVar13 + -8;
    } while (uVar16 < uVar12 - 3);
  }
  if (uVar16 < uVar12) {
    pfVar9 = (float *)(uVar16 * 4 + lVar1);
    pfVar11 = (float *)(param_2 + -4 + (param_3 + uVar16 * -2) * 4);
    do {
      fVar2 = *(float *)(((longlong)ppfVar18 - lVar1) + (longlong)pfVar9);
      fVar3 = *pfVar9;
      lVar20 = (uVar16 & 0xfffffffffffffff0) + uVar16;
      pfVar9 = pfVar9 + 1;
      fVar4 = *(float *)(param_6 + lVar20 * 4);
      fVar5 = *(float *)(param_6 + 0x40 + lVar20 * 4);
      *(float *)(param_2 + uVar16 * 8) = fVar5 * fVar3 - fVar4 * fVar2;
      uVar16 = uVar16 + 1;
      *pfVar11 = fVar4 * fVar3 + fVar5 * fVar2;
      pfVar11 = pfVar11 + -2;
    } while (uVar16 < uVar12);
  }
  return;
}


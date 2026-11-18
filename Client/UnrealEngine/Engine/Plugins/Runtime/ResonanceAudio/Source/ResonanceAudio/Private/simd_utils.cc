// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 27

// AddPointwise @ 14f06f820

void __cdecl vraudio::AddPointwise(ulong64 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar9 = param_1 >> 2;
  if ((((ulonglong)param_2 & 0xf) == 0) && (((ulonglong)param_3 & 0xf) == 0)) {
    if (uVar9 != 0) {
      pfVar10 = param_2;
      if (((ulonglong)param_4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_3 - (longlong)param_2));
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar5 = pfVar1[3];
          fVar6 = pfVar10[1];
          fVar7 = pfVar10[2];
          fVar8 = pfVar10[3];
          pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_2));
          *pfVar2 = *pfVar1 + *pfVar10;
          pfVar2[1] = fVar3 + fVar6;
          pfVar2[2] = fVar4 + fVar7;
          pfVar2[3] = fVar5 + fVar8;
          pfVar10 = pfVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      else {
        do {
          pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_3 - (longlong)param_2));
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar5 = pfVar1[3];
          fVar6 = pfVar10[1];
          fVar7 = pfVar10[2];
          fVar8 = pfVar10[3];
          pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_2));
          *pfVar2 = *pfVar1 + *pfVar10;
          pfVar2[1] = fVar3 + fVar6;
          pfVar2[2] = fVar4 + fVar7;
          pfVar2[3] = fVar5 + fVar8;
          pfVar10 = pfVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  else if (uVar9 != 0) {
    pfVar10 = param_3;
    if (((ulonglong)param_4 & 0xf) == 0) {
      do {
        pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_2 - (longlong)param_3));
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        fVar6 = pfVar10[1];
        fVar7 = pfVar10[2];
        fVar8 = pfVar10[3];
        pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_3));
        *pfVar2 = *pfVar1 + *pfVar10;
        pfVar2[1] = fVar3 + fVar6;
        pfVar2[2] = fVar4 + fVar7;
        pfVar2[3] = fVar5 + fVar8;
        uVar9 = uVar9 - 1;
        pfVar10 = pfVar10 + 4;
      } while (uVar9 != 0);
    }
    else {
      do {
        pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_2 - (longlong)param_3));
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        fVar6 = pfVar10[1];
        fVar7 = pfVar10[2];
        fVar8 = pfVar10[3];
        pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_3));
        *pfVar2 = *pfVar1 + *pfVar10;
        pfVar2[1] = fVar3 + fVar6;
        pfVar2[2] = fVar4 + fVar7;
        pfVar2[3] = fVar5 + fVar8;
        pfVar10 = pfVar10 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  uVar9 = param_1 & 0xfffffffffffffffc;
  if (uVar9 < param_1) {
    if (3 < param_1 - uVar9) {
      pfVar10 = param_3 + uVar9 + 1;
      lVar12 = (longlong)param_2 - (longlong)param_3;
      lVar13 = (longlong)param_4 - (longlong)param_3;
      lVar11 = ((param_1 - uVar9) - 4 >> 2) + 1;
      uVar9 = uVar9 + lVar11 * 4;
      do {
        *(float *)(lVar13 + -4 + (longlong)pfVar10) =
             *(float *)(lVar12 + -4 + (longlong)pfVar10) + pfVar10[-1];
        *(float *)(lVar13 + (longlong)pfVar10) = *(float *)(lVar12 + (longlong)pfVar10) + *pfVar10;
        *(float *)(lVar13 + 4 + (longlong)pfVar10) =
             *(float *)(lVar12 + 4 + (longlong)pfVar10) + pfVar10[1];
        *(float *)(lVar13 + 8 + (longlong)pfVar10) =
             *(float *)(lVar12 + 8 + (longlong)pfVar10) + pfVar10[2];
        pfVar10 = pfVar10 + 4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      if (param_1 <= uVar9) {
        return;
      }
    }
    pfVar10 = param_3 + uVar9;
    lVar11 = param_1 - uVar9;
    do {
      *(float *)(((longlong)param_4 - (longlong)param_3) + (longlong)pfVar10) =
           *(float *)(((longlong)param_2 - (longlong)param_3) + (longlong)pfVar10) + *pfVar10;
      pfVar10 = pfVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// ApproxComplexMagnitude @ 14f06f9e0

void __cdecl vraudio::ApproxComplexMagnitude(ulong64 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float *pfVar15;
  undefined1 (*pauVar16) [16];
  float *pfVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  
  uVar13 = param_1 >> 2;
  if (uVar13 != 0) {
    if (((ulonglong)param_2 & 0xf) == 0) {
      pfVar15 = param_2;
      pauVar16 = (undefined1 (*) [16])param_3;
      pfVar17 = param_3;
      if (((ulonglong)param_3 & 0xf) == 0) {
        do {
          auVar19._0_4_ = pfVar15[4] * pfVar15[4];
          auVar19._4_4_ = pfVar15[5] * pfVar15[5];
          auVar19._8_4_ = pfVar15[6] * pfVar15[6];
          auVar19._12_4_ = pfVar15[7] * pfVar15[7];
          auVar22._0_4_ = pfVar15[1] * pfVar15[1] + *pfVar15 * *pfVar15;
          auVar22._4_4_ = pfVar15[3] * pfVar15[3] + pfVar15[2] * pfVar15[2];
          auVar22._8_4_ = auVar19._4_4_ + auVar19._0_4_;
          auVar22._12_4_ = auVar19._12_4_ + auVar19._8_4_;
          auVar20 = rsqrtps(auVar19,auVar22);
          auVar20 = rcpps(auVar22,auVar20);
          *pauVar16 = auVar20;
          uVar13 = uVar13 - 1;
          pfVar15 = pfVar15 + 8;
          pauVar16 = pauVar16 + 1;
        } while (uVar13 != 0);
      }
      else {
        do {
          fVar1 = *pfVar15;
          pfVar2 = pfVar15 + 1;
          fVar3 = pfVar15[2];
          fVar4 = pfVar15[3];
          fVar14 = pfVar15[4];
          fVar25 = pfVar15[5];
          fVar5 = pfVar15[6];
          fVar6 = pfVar15[7];
          pfVar15 = pfVar15 + 8;
          *pfVar17 = *pfVar2 * *pfVar2 + fVar1 * fVar1;
          pfVar17[1] = fVar4 * fVar4 + fVar3 * fVar3;
          pfVar17[2] = fVar25 * fVar25 + fVar14 * fVar14;
          pfVar17[3] = fVar6 * fVar6 + fVar5 * fVar5;
          pfVar17 = pfVar17 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    else {
      pfVar15 = param_2;
      pauVar16 = (undefined1 (*) [16])param_3;
      if (((ulonglong)param_3 & 0xf) == 0) {
        do {
          fVar1 = *pfVar15;
          pfVar2 = pfVar15 + 1;
          pfVar7 = pfVar15 + 2;
          pfVar8 = pfVar15 + 3;
          pfVar17 = pfVar15 + 4;
          pfVar9 = pfVar15 + 5;
          pfVar10 = pfVar15 + 6;
          pfVar11 = pfVar15 + 7;
          pfVar15 = pfVar15 + 8;
          auVar23._0_4_ = *pfVar17 * *pfVar17;
          auVar23._4_4_ = *pfVar9 * *pfVar9;
          auVar23._8_4_ = *pfVar10 * *pfVar10;
          auVar23._12_4_ = *pfVar11 * *pfVar11;
          auVar21._0_4_ = *pfVar2 * *pfVar2 + fVar1 * fVar1;
          auVar21._4_4_ = *pfVar8 * *pfVar8 + *pfVar7 * *pfVar7;
          auVar21._8_4_ = auVar23._4_4_ + auVar23._0_4_;
          auVar21._12_4_ = auVar23._12_4_ + auVar23._8_4_;
          auVar20 = rsqrtps(auVar21,auVar21);
          auVar20 = rcpps(auVar23,auVar20);
          *pauVar16 = auVar20;
          pauVar16 = pauVar16 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      else {
        do {
          fVar1 = *pfVar15;
          pfVar2 = pfVar15 + 1;
          pfVar7 = pfVar15 + 2;
          pfVar8 = pfVar15 + 3;
          pfVar17 = pfVar15 + 4;
          pfVar9 = pfVar15 + 5;
          pfVar10 = pfVar15 + 6;
          pfVar11 = pfVar15 + 7;
          pfVar15 = pfVar15 + 8;
          auVar24._0_4_ = *pfVar17 * *pfVar17;
          auVar24._4_4_ = *pfVar9 * *pfVar9;
          auVar24._8_4_ = *pfVar10 * *pfVar10;
          auVar24._12_4_ = *pfVar11 * *pfVar11;
          auVar20._0_4_ = *pfVar2 * *pfVar2 + fVar1 * fVar1;
          auVar20._4_4_ = *pfVar8 * *pfVar8 + *pfVar7 * *pfVar7;
          auVar20._8_4_ = auVar24._4_4_ + auVar24._0_4_;
          auVar20._12_4_ = auVar24._12_4_ + auVar24._8_4_;
          auVar20 = rsqrtps(auVar20,auVar20);
          auVar20 = rcpps(auVar24,auVar20);
          *pauVar16 = auVar20;
          pauVar16 = pauVar16 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
  }
  fVar4 = __real_3fc00000;
  fVar3 = __real_3f000000;
  fVar1 = __real_3f800000;
  uVar13 = param_1 & 0xfffffffffffffffc;
  if (uVar13 < param_1) {
    if (3 < param_1 - uVar13) {
      pfVar15 = param_2 + uVar13 * 2 + 2;
      pfVar17 = param_3 + uVar13 + 2;
      lVar18 = ((param_1 - uVar13) - 4 >> 2) + 1;
      uVar13 = uVar13 + lVar18 * 4;
      do {
        fVar25 = pfVar15[-2] * pfVar15[-2] + pfVar15[-1] * pfVar15[-1];
        fVar14 = (float)(0x5f3759df - ((uint)fVar25 >> 1));
        pfVar17[-2] = fVar1 / ((fVar4 - fVar25 * fVar3 * fVar14 * fVar14) * fVar14);
        fVar25 = *pfVar15 * *pfVar15 + pfVar15[1] * pfVar15[1];
        fVar14 = (float)(0x5f3759df - ((uint)fVar25 >> 1));
        pfVar17[-1] = fVar1 / ((fVar4 - fVar25 * fVar3 * fVar14 * fVar14) * fVar14);
        fVar25 = pfVar15[3] * pfVar15[3] + pfVar15[2] * pfVar15[2];
        fVar14 = (float)(0x5f3759df - ((uint)fVar25 >> 1));
        *pfVar17 = fVar1 / ((fVar4 - fVar25 * fVar3 * fVar14 * fVar14) * fVar14);
        pfVar2 = pfVar15 + 4;
        pfVar7 = pfVar15 + 5;
        pfVar15 = pfVar15 + 8;
        fVar25 = *pfVar7 * *pfVar7 + *pfVar2 * *pfVar2;
        fVar14 = (float)(0x5f3759df - ((uint)fVar25 >> 1));
        pfVar17[1] = fVar1 / ((fVar4 - fVar25 * fVar3 * fVar14 * fVar14) * fVar14);
        pfVar17 = pfVar17 + 4;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      if (param_1 <= uVar13) {
        return;
      }
    }
    pfVar15 = param_3 + uVar13;
    do {
      lVar18 = uVar13 * 2;
      lVar12 = uVar13 * 2;
      uVar13 = uVar13 + 1;
      fVar25 = param_2[lVar12 + 1] * param_2[lVar12 + 1] + param_2[lVar18] * param_2[lVar18];
      fVar14 = (float)(0x5f3759df - ((uint)fVar25 >> 1));
      *pfVar15 = fVar1 / ((fVar4 - fVar25 * fVar3 * fVar14 * fVar14) * fVar14);
      pfVar15 = pfVar15 + 1;
    } while (uVar13 < param_1);
  }
  return;
}

// ComplexInterleavedFormatFromMagnitudeAndSinCosPhase @ 14f06fd40

void __cdecl
vraudio::ComplexInterleavedFormatFromMagnitudeAndSinCosPhase
          (ulong64 param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  ulonglong uVar1;
  float *pfVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    pfVar2 = param_2;
    do {
      param_5[uVar1] =
           *(float *)(((longlong)param_3 - (longlong)param_2) + (longlong)pfVar2) * *pfVar2;
      param_5[uVar1 + 1] =
           *(float *)((longlong)param_4 + (-4 - (longlong)param_2) + (longlong)(pfVar2 + 1)) *
           *pfVar2;
      uVar1 = uVar1 + 2;
      pfVar2 = pfVar2 + 1;
    } while (uVar1 < param_1);
  }
  return;
}

// DeinterleaveQuad @ 14f06fd90

void __cdecl
vraudio::DeinterleaveQuad
          (ulong64 param_1,short *param_2,short *param_3,short *param_4,short *param_5,
          short *param_6,short *param_7)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  
  if (param_1 != 0) {
    psVar2 = param_5;
    psVar3 = param_2 + 2;
    do {
      *(short *)(((longlong)param_4 - (longlong)param_5) + (longlong)psVar2) = psVar3[-2];
      psVar1 = psVar2 + 1;
      *psVar2 = psVar3[-1];
      *(short *)((longlong)param_6 + (-2 - (longlong)param_5) + (longlong)psVar1) = *psVar3;
      *(short *)((longlong)param_7 + (-2 - (longlong)param_5) + (longlong)psVar1) = psVar3[1];
      param_1 = param_1 - 1;
      psVar2 = psVar1;
      psVar3 = psVar3 + 4;
    } while (param_1 != 0);
  }
  return;
}

// DeinterleaveQuad @ 14f06fe00

void __cdecl
vraudio::DeinterleaveQuad
          (ulong64 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
          float *param_6,float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  lVar6 = (longlong)param_4 - (longlong)param_5;
  if (3 < param_1) {
    lVar4 = (param_1 - 4 >> 2) + 1;
    uVar5 = lVar4 * 4;
    pfVar2 = param_5 + 1;
    pfVar3 = param_2 + 2;
    do {
      *(float *)(lVar6 + -4 + (longlong)pfVar2) = pfVar3[-2];
      pfVar1 = pfVar2 + 4;
      pfVar2[-1] = pfVar3[-1];
      *(float *)((longlong)param_6 + (-0x14 - (longlong)param_5) + (longlong)pfVar1) = *pfVar3;
      *(float *)((longlong)param_7 + (-0x14 - (longlong)param_5) + (longlong)pfVar1) = pfVar3[1];
      *(float *)(lVar6 + -0x10 + (longlong)pfVar1) = pfVar3[2];
      *pfVar2 = pfVar3[3];
      *(float *)((longlong)param_6 + (-0x10 - (longlong)param_5) + (longlong)pfVar1) = pfVar3[4];
      *(float *)((longlong)param_7 + (-0x10 - (longlong)param_5) + (longlong)pfVar1) = pfVar3[5];
      *(float *)(lVar6 + -0xc + (longlong)pfVar1) = pfVar3[6];
      pfVar2[1] = pfVar3[7];
      *(float *)((longlong)param_6 + (-0xc - (longlong)param_5) + (longlong)pfVar1) = pfVar3[8];
      *(float *)((longlong)param_7 + (-0xc - (longlong)param_5) + (longlong)pfVar1) = pfVar3[9];
      *(float *)(lVar6 + -8 + (longlong)pfVar1) = pfVar3[10];
      pfVar2[2] = pfVar3[0xb];
      *(float *)((longlong)param_6 + (-8 - (longlong)param_5) + (longlong)pfVar1) = pfVar3[0xc];
      *(float *)((longlong)param_7 + (-8 - (longlong)param_5) + (longlong)pfVar1) = pfVar3[0xd];
      lVar4 = lVar4 + -1;
      pfVar2 = pfVar1;
      pfVar3 = pfVar3 + 0x10;
    } while (lVar4 != 0);
  }
  if (uVar5 < param_1) {
    lVar4 = param_1 - uVar5;
    pfVar2 = param_5 + uVar5;
    pfVar3 = param_2 + uVar5 * 4 + 2;
    do {
      *(float *)(lVar6 + (longlong)pfVar2) = pfVar3[-2];
      *pfVar2 = pfVar3[-1];
      *(float *)((longlong)pfVar2 + ((longlong)param_6 - (longlong)param_5)) = *pfVar3;
      *(float *)((longlong)pfVar2 + ((longlong)param_7 - (longlong)param_5)) = pfVar3[1];
      lVar4 = lVar4 + -1;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 4;
    } while (lVar4 != 0);
  }
  return;
}

// DeinterleaveStereo @ 14f06ff70

void __cdecl
vraudio::DeinterleaveStereo(ulong64 param_1,short *param_2,short *param_3,short *param_4)

{
  longlong lVar1;
  short *psVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    psVar2 = param_4;
    do {
      *(short *)(((longlong)param_3 - (longlong)param_4) + (longlong)psVar2) = param_2[uVar3 * 2];
      lVar1 = uVar3 * 2;
      uVar3 = uVar3 + 1;
      *psVar2 = param_2[lVar1 + 1];
      psVar2 = psVar2 + 1;
    } while (uVar3 < param_1);
  }
  return;
}

// DeinterleaveStereo @ 14f06ffb0

void __cdecl
vraudio::DeinterleaveStereo(ulong64 param_1,short *param_2,float *param_3,float *param_4)

{
  short *psVar1;
  float *pfVar2;
  float fVar3;
  short *psVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  fVar3 = __real_38000100;
  uVar7 = 0;
  if (3 < param_1) {
    lVar6 = (longlong)param_4 - (longlong)param_2;
    lVar9 = (longlong)param_3 - (longlong)param_2;
    lVar8 = (param_1 - 4 >> 2) + 1;
    uVar7 = lVar8 * 4;
    psVar4 = param_2 + 2;
    do {
      psVar1 = psVar4 + 8;
      *(float *)((longlong)psVar4 + lVar9 + -4) = (float)(int)psVar4[-2] * fVar3;
      *(float *)((longlong)psVar4 + lVar6 + -4) = (float)(int)psVar4[-1] * fVar3;
      *(float *)((longlong)psVar4 + lVar9) = (float)(int)*psVar4 * fVar3;
      *(float *)((longlong)psVar4 + lVar6) = (float)(int)psVar4[1] * fVar3;
      *(float *)(lVar9 + -0xc + (longlong)psVar1) = (float)(int)psVar4[2] * fVar3;
      *(float *)(lVar6 + -0xc + (longlong)psVar1) = (float)(int)psVar4[3] * fVar3;
      *(float *)(lVar9 + -8 + (longlong)psVar1) = (float)(int)psVar4[4] * fVar3;
      *(float *)((longlong)psVar4 + lVar6 + 8) = (float)(int)psVar4[5] * fVar3;
      lVar8 = lVar8 + -1;
      psVar4 = psVar1;
    } while (lVar8 != 0);
  }
  if (uVar7 < param_1) {
    lVar6 = param_1 - uVar7;
    pfVar5 = param_3 + uVar7;
    do {
      pfVar2 = pfVar5 + 1;
      *pfVar5 = (float)(int)*(short *)((longlong)pfVar5 + ((longlong)param_2 - (longlong)param_3)) *
                fVar3;
      *(float *)((longlong)param_4 + (-4 - (longlong)param_3) + (longlong)pfVar2) =
           (float)(int)*(short *)(((longlong)param_2 - (longlong)param_3) + -2 + (longlong)pfVar2) *
           fVar3;
      lVar6 = lVar6 + -1;
      pfVar5 = pfVar2;
    } while (lVar6 != 0);
  }
  return;
}

// DeinterleaveStereo @ 14f070120

void __cdecl
vraudio::DeinterleaveStereo(ulong64 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  
  uVar5 = 0;
  lVar4 = (longlong)param_3 - (longlong)param_4;
  if (3 < param_1) {
    lVar2 = (param_1 - 4 >> 2) + 1;
    uVar5 = lVar2 * 4;
    pfVar3 = param_2 + 2;
    pfVar6 = param_4 + 1;
    do {
      *(float *)(lVar4 + -4 + (longlong)pfVar6) = pfVar3[-2];
      pfVar1 = pfVar6 + 4;
      pfVar6[-1] = pfVar3[-1];
      *(float *)((longlong)pfVar6 + lVar4) = *pfVar3;
      *pfVar6 = pfVar3[1];
      *(float *)(lVar4 + -0xc + (longlong)pfVar1) = pfVar3[2];
      pfVar6[1] = pfVar3[3];
      *(float *)(lVar4 + -8 + (longlong)pfVar1) = pfVar3[4];
      pfVar6[2] = pfVar3[5];
      lVar2 = lVar2 + -1;
      pfVar3 = pfVar3 + 8;
      pfVar6 = pfVar1;
    } while (lVar2 != 0);
  }
  if (uVar5 < param_1) {
    pfVar3 = param_4 + uVar5;
    do {
      *(float *)((longlong)pfVar3 + lVar4) = param_2[uVar5 * 2];
      lVar2 = uVar5 * 2;
      uVar5 = uVar5 + 1;
      *pfVar3 = param_2[lVar2 + 1];
      pfVar3 = pfVar3 + 1;
    } while (uVar5 < param_1);
  }
  return;
}

// FindNextAlignedArrayIndex @ 14f0701f0

ulong64 __cdecl vraudio::FindNextAlignedArrayIndex(ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (param_1 * param_2) % param_3;
  lVar1 = 0;
  if (uVar2 != 0) {
    lVar1 = param_3 - uVar2;
  }
  return (lVar1 + param_1 * param_2) / param_2;
}

// FloatFromInt16 @ 14f070220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl vraudio::FloatFromInt16(ulong64 param_1,short *param_2,float *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  ulonglong *puVar14;
  short *psVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined2 uVar21;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  fVar12 = _UNK_150d565ec;
  fVar11 = _UNK_150d565e8;
  fVar10 = _UNK_150d565e4;
  fVar9 = ___xmm_38000100380001003800010038000100;
  uVar17 = 0;
  if (param_1 != 0) {
    if ((0xf < param_1) &&
       ((param_2 + (param_1 - 1) < param_3 || (param_3 + (param_1 - 1) < param_2)))) {
      pfVar13 = param_3 + 8;
      puVar14 = (ulonglong *)(param_2 + 8);
      do {
        uVar1 = puVar14[-2];
        uVar2 = puVar14[-1];
        uVar21 = (undefined2)(uVar1 >> 0x30);
        auVar20._8_4_ = 0;
        auVar20._0_8_ = uVar1;
        auVar20._12_2_ = uVar21;
        auVar20._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar1 >> 0x20);
        auVar19._12_4_ = auVar20._12_4_;
        auVar19._8_2_ = 0;
        auVar19._0_8_ = uVar1;
        auVar19._10_2_ = uVar21;
        auVar18._10_6_ = auVar19._10_6_;
        auVar18._8_2_ = uVar21;
        auVar18._0_8_ = uVar1;
        uVar21 = (undefined2)(uVar1 >> 0x10);
        auVar3._4_8_ = auVar18._8_8_;
        auVar3._2_2_ = uVar21;
        auVar3._0_2_ = uVar21;
        uVar17 = uVar17 + 0x10;
        uVar21 = (undefined2)(uVar2 >> 0x30);
        auVar24._8_4_ = 0;
        auVar24._0_8_ = uVar2;
        auVar24._12_2_ = uVar21;
        auVar24._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar2 >> 0x20);
        auVar23._12_4_ = auVar24._12_4_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar2;
        auVar23._10_2_ = uVar21;
        auVar22._10_6_ = auVar23._10_6_;
        auVar22._8_2_ = uVar21;
        auVar22._0_8_ = uVar2;
        uVar21 = (undefined2)(uVar2 >> 0x10);
        auVar4._4_8_ = auVar22._8_8_;
        auVar4._2_2_ = uVar21;
        auVar4._0_2_ = uVar21;
        pfVar13[-8] = (float)(int)(short)uVar1 * fVar9;
        pfVar13[-7] = (float)(auVar3._0_4_ >> 0x10) * fVar10;
        pfVar13[-6] = (float)(auVar18._8_4_ >> 0x10) * fVar11;
        pfVar13[-5] = (float)(auVar19._12_4_ >> 0x10) * fVar12;
        uVar1 = *puVar14;
        uVar21 = (undefined2)(uVar1 >> 0x30);
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar1;
        auVar27._12_2_ = uVar21;
        auVar27._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar1 >> 0x20);
        auVar26._12_4_ = auVar27._12_4_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar1;
        auVar26._10_2_ = uVar21;
        auVar25._10_6_ = auVar26._10_6_;
        auVar25._8_2_ = uVar21;
        auVar25._0_8_ = uVar1;
        uVar21 = (undefined2)(uVar1 >> 0x10);
        auVar5._4_8_ = auVar25._8_8_;
        auVar5._2_2_ = uVar21;
        auVar5._0_2_ = uVar21;
        pfVar13[-4] = (float)(int)(short)uVar2 * fVar9;
        pfVar13[-3] = (float)(auVar4._0_4_ >> 0x10) * fVar10;
        pfVar13[-2] = (float)(auVar22._8_4_ >> 0x10) * fVar11;
        pfVar13[-1] = (float)(auVar23._12_4_ >> 0x10) * fVar12;
        uVar2 = puVar14[1];
        uVar21 = (undefined2)(uVar2 >> 0x30);
        auVar30._8_4_ = 0;
        auVar30._0_8_ = uVar2;
        auVar30._12_2_ = uVar21;
        auVar30._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar2 >> 0x20);
        auVar29._12_4_ = auVar30._12_4_;
        auVar29._8_2_ = 0;
        auVar29._0_8_ = uVar2;
        auVar29._10_2_ = uVar21;
        auVar28._10_6_ = auVar29._10_6_;
        auVar28._8_2_ = uVar21;
        auVar28._0_8_ = uVar2;
        uVar21 = (undefined2)(uVar2 >> 0x10);
        auVar6._4_8_ = auVar28._8_8_;
        auVar6._2_2_ = uVar21;
        auVar6._0_2_ = uVar21;
        *pfVar13 = (float)(int)(short)uVar1 * fVar9;
        pfVar13[1] = (float)(auVar5._0_4_ >> 0x10) * fVar10;
        pfVar13[2] = (float)(auVar25._8_4_ >> 0x10) * fVar11;
        pfVar13[3] = (float)(auVar26._12_4_ >> 0x10) * fVar12;
        pfVar13[4] = (float)(int)(short)uVar2 * fVar9;
        pfVar13[5] = (float)(auVar6._0_4_ >> 0x10) * fVar10;
        pfVar13[6] = (float)(auVar28._8_4_ >> 0x10) * fVar11;
        pfVar13[7] = (float)(auVar29._12_4_ >> 0x10) * fVar12;
        pfVar13 = pfVar13 + 0x10;
        puVar14 = puVar14 + 4;
      } while (uVar17 < (param_1 & 0xfffffffffffffff0));
      if (param_1 <= uVar17) {
        return;
      }
    }
    fVar9 = __real_38000100;
    if (3 < param_1 - uVar17) {
      lVar7 = uVar17 + 2;
      lVar8 = uVar17 + 2;
      lVar16 = ((param_1 - uVar17) - 4 >> 2) + 1;
      uVar17 = uVar17 + lVar16 * 4;
      pfVar13 = param_3 + lVar7;
      psVar15 = param_2 + lVar8;
      do {
        pfVar13[-2] = (float)(int)psVar15[-2] * fVar9;
        pfVar13[-1] = (float)(int)psVar15[-1] * fVar9;
        *pfVar13 = (float)(int)*psVar15 * fVar9;
        pfVar13[1] = (float)(int)psVar15[1] * fVar9;
        lVar16 = lVar16 + -1;
        pfVar13 = pfVar13 + 4;
        psVar15 = psVar15 + 4;
      } while (lVar16 != 0);
      if (param_1 <= uVar17) {
        return;
      }
    }
    do {
      param_3[uVar17] = (float)(int)param_2[uVar17] * fVar9;
      uVar17 = uVar17 + 1;
    } while (uVar17 < param_1);
  }
  return;
}

// Int16FromFloat @ 14f0703e0

void __cdecl vraudio::Int16FromFloat(ulong64 param_1,float *param_2,short *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  short *psVar5;
  float *pfVar6;
  float fVar7;
  
  fVar2 = __real_c6fffe00;
  fVar1 = __real_46fffe00;
  uVar4 = 0;
  if (3 < param_1) {
    lVar3 = (param_1 - 4 >> 2) + 1;
    uVar4 = lVar3 * 4;
    psVar5 = param_3 + 2;
    pfVar6 = param_2 + 2;
    do {
      fVar7 = pfVar6[-2] * fVar1;
      if (pfVar6[-2] * fVar1 <= fVar2) {
        fVar7 = fVar2;
      }
      if (fVar1 <= fVar7) {
        fVar7 = fVar1;
      }
      psVar5[-2] = (short)(int)fVar7;
      fVar7 = pfVar6[-1] * fVar1;
      if (pfVar6[-1] * fVar1 <= fVar2) {
        fVar7 = fVar2;
      }
      if (fVar1 <= fVar7) {
        fVar7 = fVar1;
      }
      psVar5[-1] = (short)(int)fVar7;
      fVar7 = *pfVar6 * fVar1;
      if (*pfVar6 * fVar1 <= fVar2) {
        fVar7 = fVar2;
      }
      if (fVar1 <= fVar7) {
        fVar7 = fVar1;
      }
      *psVar5 = (short)(int)fVar7;
      fVar7 = pfVar6[1] * fVar1;
      if (pfVar6[1] * fVar1 <= fVar2) {
        fVar7 = fVar2;
      }
      if (fVar1 <= fVar7) {
        fVar7 = fVar1;
      }
      psVar5[1] = (short)(int)fVar7;
      lVar3 = lVar3 + -1;
      psVar5 = psVar5 + 4;
      pfVar6 = pfVar6 + 4;
    } while (lVar3 != 0);
  }
  for (; uVar4 < param_1; uVar4 = uVar4 + 1) {
    fVar7 = param_2[uVar4] * fVar1;
    if (param_2[uVar4] * fVar1 <= fVar2) {
      fVar7 = fVar2;
    }
    if (fVar1 <= fVar7) {
      fVar7 = fVar1;
    }
    param_3[uVar4] = (short)(int)fVar7;
  }
  return;
}

// InterleaveQuad @ 14f0704d0

void __cdecl
vraudio::InterleaveQuad
          (ulong64 param_1,short *param_2,short *param_3,short *param_4,short *param_5,
          short *param_6,short *param_7)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  
  if (param_1 != 0) {
    psVar2 = param_3;
    psVar3 = param_7 + 2;
    do {
      psVar1 = psVar2 + 1;
      psVar3[-2] = *(short *)(((longlong)param_2 - (longlong)param_3) + (longlong)psVar2);
      psVar3[-1] = *psVar2;
      *psVar3 = *(short *)((longlong)param_4 + (-2 - (longlong)param_3) + (longlong)psVar1);
      psVar3[1] = *(short *)((longlong)param_5 + (-2 - (longlong)param_3) + (longlong)psVar1);
      param_1 = param_1 - 1;
      psVar2 = psVar1;
      psVar3 = psVar3 + 4;
    } while (param_1 != 0);
  }
  return;
}

// InterleaveQuad @ 14f070530

void __cdecl
vraudio::InterleaveQuad
          (ulong64 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
          float *param_6,float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2 - (longlong)param_3;
  uVar5 = 0;
  if (3 < param_1) {
    lVar4 = (param_1 - 4 >> 2) + 1;
    uVar5 = lVar4 * 4;
    pfVar2 = param_3 + 1;
    pfVar3 = param_7 + 2;
    do {
      pfVar1 = pfVar2 + 4;
      pfVar3[-2] = *(float *)(lVar6 + -4 + (longlong)pfVar2);
      pfVar3[-1] = pfVar2[-1];
      *pfVar3 = *(float *)((longlong)param_4 + (-0x14 - (longlong)param_3) + (longlong)pfVar1);
      pfVar3[1] = *(float *)((longlong)param_5 + (-0x14 - (longlong)param_3) + (longlong)pfVar1);
      pfVar3[2] = *(float *)(lVar6 + -0x10 + (longlong)pfVar1);
      pfVar3[3] = *pfVar2;
      pfVar3[4] = *(float *)((longlong)param_4 + (-0x10 - (longlong)param_3) + (longlong)pfVar1);
      pfVar3[5] = *(float *)((longlong)param_5 + (-0x10 - (longlong)param_3) + (longlong)pfVar1);
      pfVar3[6] = *(float *)(lVar6 + -0xc + (longlong)pfVar1);
      pfVar3[7] = pfVar2[1];
      pfVar3[8] = *(float *)((longlong)param_4 + (-0xc - (longlong)param_3) + (longlong)pfVar1);
      pfVar3[9] = *(float *)((longlong)param_5 + (-0xc - (longlong)param_3) + (longlong)pfVar1);
      pfVar3[10] = *(float *)(lVar6 + -8 + (longlong)pfVar1);
      pfVar3[0xb] = pfVar2[2];
      pfVar3[0xc] = *(float *)((longlong)param_4 + (-8 - (longlong)param_3) + (longlong)pfVar1);
      pfVar3[0xd] = *(float *)((longlong)param_5 + (-8 - (longlong)param_3) + (longlong)pfVar1);
      lVar4 = lVar4 + -1;
      pfVar2 = pfVar1;
      pfVar3 = pfVar3 + 0x10;
    } while (lVar4 != 0);
  }
  if (uVar5 < param_1) {
    lVar4 = param_1 - uVar5;
    pfVar2 = param_3 + uVar5;
    pfVar3 = param_7 + uVar5 * 4 + 2;
    do {
      pfVar3[-2] = *(float *)(lVar6 + (longlong)pfVar2);
      pfVar3[-1] = *pfVar2;
      *pfVar3 = *(float *)((longlong)pfVar2 + ((longlong)param_4 - (longlong)param_3));
      pfVar3[1] = *(float *)((longlong)pfVar2 + ((longlong)param_5 - (longlong)param_3));
      lVar4 = lVar4 + -1;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 4;
    } while (lVar4 != 0);
  }
  return;
}

// InterleaveStereo @ 14f070690

void __cdecl vraudio::InterleaveStereo(ulong64 param_1,short *param_2,short *param_3,short *param_4)

{
  short *psVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    psVar1 = param_3;
    do {
      param_4[uVar2 * 2] = *(short *)(((longlong)param_2 - (longlong)param_3) + (longlong)psVar1);
      param_4[uVar2 * 2 + 1] = *psVar1;
      uVar2 = uVar2 + 1;
      psVar1 = psVar1 + 1;
    } while (uVar2 < param_1);
  }
  return;
}

// InterleaveStereo @ 14f0706d0

void __cdecl vraudio::InterleaveStereo(ulong64 param_1,float *param_2,float *param_3,short *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = __real_c6fffe00;
  fVar2 = __real_46fffe00;
  uVar6 = 0;
  lVar8 = (longlong)param_4 - (longlong)param_2;
  if (3 < param_1) {
    lVar7 = (longlong)param_3 - (longlong)param_2;
    lVar5 = (param_1 - 4 >> 2) + 1;
    uVar6 = lVar5 * 4;
    pfVar4 = param_2 + 1;
    do {
      pfVar1 = pfVar4 + 4;
      fVar10 = pfVar4[-1] * fVar2;
      if (fVar2 <= pfVar4[-1] * fVar2) {
        fVar10 = fVar2;
      }
      if (fVar10 <= fVar3) {
        fVar10 = fVar3;
      }
      *(short *)((longlong)pfVar4 + lVar8 + -4) = (short)(int)fVar10;
      fVar10 = *(float *)((longlong)pfVar4 + lVar7 + -4) * fVar2;
      if (fVar2 <= fVar10) {
        fVar10 = fVar2;
      }
      if (fVar10 <= fVar3) {
        fVar10 = fVar3;
      }
      *(short *)(lVar8 + -0x12 + (longlong)pfVar1) = (short)(int)fVar10;
      fVar10 = *pfVar4 * fVar2;
      if (fVar2 <= *pfVar4 * fVar2) {
        fVar10 = fVar2;
      }
      if (fVar10 <= fVar3) {
        fVar10 = fVar3;
      }
      *(short *)((longlong)pfVar4 + lVar8) = (short)(int)fVar10;
      fVar10 = *(float *)((longlong)pfVar4 + lVar7) * fVar2;
      if (fVar2 <= fVar10) {
        fVar10 = fVar2;
      }
      if (fVar10 <= fVar3) {
        fVar10 = fVar3;
      }
      *(short *)(lVar8 + -0xe + (longlong)pfVar1) = (short)(int)fVar10;
      fVar10 = pfVar4[1] * fVar2;
      if (fVar2 <= pfVar4[1] * fVar2) {
        fVar10 = fVar2;
      }
      if (fVar10 <= fVar3) {
        fVar10 = fVar3;
      }
      *(short *)(lVar8 + -0xc + (longlong)pfVar1) = (short)(int)fVar10;
      fVar10 = *(float *)(lVar7 + -0xc + (longlong)pfVar1) * fVar2;
      if (fVar2 <= fVar10) {
        fVar10 = fVar2;
      }
      if (fVar10 <= fVar3) {
        fVar10 = fVar3;
      }
      *(short *)((longlong)pfVar4 + lVar8 + 6) = (short)(int)fVar10;
      fVar10 = pfVar4[2] * fVar2;
      if (fVar2 <= pfVar4[2] * fVar2) {
        fVar10 = fVar2;
      }
      if (fVar10 <= fVar3) {
        fVar10 = fVar3;
      }
      *(short *)((longlong)pfVar4 + lVar8 + 8) = (short)(int)fVar10;
      fVar10 = *(float *)((longlong)pfVar4 + lVar7 + 8) * fVar2;
      if (fVar2 <= fVar10) {
        fVar10 = fVar2;
      }
      if (fVar10 <= fVar3) {
        fVar10 = fVar3;
      }
      *(short *)((longlong)pfVar4 + lVar8 + 10) = (short)(int)fVar10;
      lVar5 = lVar5 + -1;
      pfVar4 = pfVar1;
    } while (lVar5 != 0);
  }
  if (uVar6 < param_1) {
    pfVar4 = param_2 + uVar6;
    lVar5 = param_1 - uVar6;
    do {
      fVar10 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      fVar9 = fVar10 * fVar2;
      if (fVar2 <= fVar10 * fVar2) {
        fVar9 = fVar2;
      }
      if (fVar9 <= fVar3) {
        fVar9 = fVar3;
      }
      *(short *)(lVar8 + -4 + (longlong)pfVar4) = (short)(int)fVar9;
      fVar10 = *(float *)((longlong)param_3 + (-4 - (longlong)param_2) + (longlong)pfVar4) * fVar2;
      if (fVar2 <= fVar10) {
        fVar10 = fVar2;
      }
      if (fVar10 <= fVar3) {
        fVar10 = fVar3;
      }
      *(short *)(lVar8 + -2 + (longlong)pfVar4) = (short)(int)fVar10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// InterleaveStereo @ 14f070870

void __cdecl vraudio::InterleaveStereo(ulong64 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  
  uVar5 = 0;
  lVar4 = (longlong)param_2 - (longlong)param_3;
  if (3 < param_1) {
    lVar2 = (param_1 - 4 >> 2) + 1;
    uVar5 = lVar2 * 4;
    pfVar3 = param_4 + 2;
    pfVar6 = param_3 + 1;
    do {
      pfVar1 = pfVar6 + 4;
      pfVar3[-2] = *(float *)(lVar4 + -4 + (longlong)pfVar6);
      pfVar3[-1] = pfVar6[-1];
      *pfVar3 = *(float *)((longlong)pfVar6 + lVar4);
      pfVar3[1] = *pfVar6;
      pfVar3[2] = *(float *)(lVar4 + -0xc + (longlong)pfVar1);
      pfVar3[3] = pfVar6[1];
      pfVar3[4] = *(float *)(lVar4 + -8 + (longlong)pfVar1);
      pfVar3[5] = pfVar6[2];
      lVar2 = lVar2 + -1;
      pfVar3 = pfVar3 + 8;
      pfVar6 = pfVar1;
    } while (lVar2 != 0);
  }
  if (uVar5 < param_1) {
    pfVar3 = param_3 + uVar5;
    do {
      param_4[uVar5 * 2] = *(float *)((longlong)pfVar3 + lVar4);
      param_4[uVar5 * 2 + 1] = *pfVar3;
      uVar5 = uVar5 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar5 < param_1);
  }
  return;
}

// IsAligned @ 14f070940

bool __cdecl vraudio::IsAligned(short *param_1)

{
  return ((ulonglong)param_1 & 0xf) == 0;
}

// IsAligned @ 14f070950

bool __cdecl vraudio::IsAligned(float *param_1)

{
  return ((ulonglong)param_1 & 0xf) == 0;
}

// MonoFromStereoSimd @ 14f070960

void __cdecl
vraudio::MonoFromStereoSimd(ulong64 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  fVar9 = kInverseSqrtTwo;
  uVar10 = param_1 >> 2;
  if ((((ulonglong)param_2 & 0xf) == 0) && (((ulonglong)param_3 & 0xf) == 0)) {
    if (uVar10 != 0) {
      pfVar11 = param_2;
      if (((ulonglong)param_4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)((longlong)pfVar11 + ((longlong)param_3 - (longlong)param_2));
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar5 = pfVar1[3];
          fVar6 = pfVar11[1];
          fVar7 = pfVar11[2];
          fVar8 = pfVar11[3];
          pfVar2 = (float *)((longlong)pfVar11 + ((longlong)param_4 - (longlong)param_2));
          *pfVar2 = (*pfVar1 + *pfVar11) * fVar9;
          pfVar2[1] = (fVar3 + fVar6) * fVar9;
          pfVar2[2] = (fVar4 + fVar7) * fVar9;
          pfVar2[3] = (fVar5 + fVar8) * fVar9;
          uVar10 = uVar10 - 1;
          pfVar11 = pfVar11 + 4;
        } while (uVar10 != 0);
      }
      else {
        do {
          pfVar1 = (float *)((longlong)pfVar11 + ((longlong)param_3 - (longlong)param_2));
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar5 = pfVar1[3];
          fVar6 = pfVar11[1];
          fVar7 = pfVar11[2];
          fVar8 = pfVar11[3];
          pfVar2 = (float *)((longlong)pfVar11 + ((longlong)param_4 - (longlong)param_2));
          *pfVar2 = (*pfVar1 + *pfVar11) * fVar9;
          pfVar2[1] = (fVar3 + fVar6) * fVar9;
          pfVar2[2] = (fVar4 + fVar7) * fVar9;
          pfVar2[3] = (fVar5 + fVar8) * fVar9;
          pfVar11 = pfVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
  }
  else if (uVar10 != 0) {
    pfVar11 = param_3;
    if (((ulonglong)param_4 & 0xf) == 0) {
      do {
        pfVar1 = (float *)((longlong)pfVar11 + ((longlong)param_2 - (longlong)param_3));
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        fVar6 = pfVar11[1];
        fVar7 = pfVar11[2];
        fVar8 = pfVar11[3];
        pfVar2 = (float *)((longlong)pfVar11 + ((longlong)param_4 - (longlong)param_3));
        *pfVar2 = (*pfVar1 + *pfVar11) * fVar9;
        pfVar2[1] = (fVar3 + fVar6) * fVar9;
        pfVar2[2] = (fVar4 + fVar7) * fVar9;
        pfVar2[3] = (fVar5 + fVar8) * fVar9;
        uVar10 = uVar10 - 1;
        pfVar11 = pfVar11 + 4;
      } while (uVar10 != 0);
    }
    else {
      do {
        pfVar1 = (float *)((longlong)pfVar11 + ((longlong)param_2 - (longlong)param_3));
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        fVar6 = pfVar11[1];
        fVar7 = pfVar11[2];
        fVar8 = pfVar11[3];
        pfVar2 = (float *)((longlong)pfVar11 + ((longlong)param_4 - (longlong)param_3));
        *pfVar2 = (*pfVar1 + *pfVar11) * fVar9;
        pfVar2[1] = (fVar3 + fVar6) * fVar9;
        pfVar2[2] = (fVar4 + fVar7) * fVar9;
        pfVar2[3] = (fVar5 + fVar8) * fVar9;
        pfVar11 = pfVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  uVar10 = param_1 & 0xfffffffffffffffc;
  if (uVar10 < param_1) {
    if (3 < param_1 - uVar10) {
      pfVar11 = param_3 + uVar10 + 1;
      lVar13 = (longlong)param_2 - (longlong)param_3;
      lVar14 = (longlong)param_4 - (longlong)param_3;
      lVar12 = ((param_1 - uVar10) - 4 >> 2) + 1;
      uVar10 = uVar10 + lVar12 * 4;
      do {
        *(float *)(lVar14 + -4 + (longlong)pfVar11) =
             (*(float *)(lVar13 + -4 + (longlong)pfVar11) + pfVar11[-1]) * kInverseSqrtTwo;
        *(float *)(lVar14 + (longlong)pfVar11) =
             (*(float *)(lVar13 + (longlong)pfVar11) + *pfVar11) * kInverseSqrtTwo;
        *(float *)(lVar14 + 4 + (longlong)pfVar11) =
             (*(float *)(lVar13 + 4 + (longlong)pfVar11) + pfVar11[1]) * kInverseSqrtTwo;
        *(float *)(lVar14 + 8 + (longlong)pfVar11) =
             (*(float *)(lVar13 + 8 + (longlong)pfVar11) + pfVar11[2]) * kInverseSqrtTwo;
        pfVar11 = pfVar11 + 4;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (param_1 <= uVar10) {
        return;
      }
    }
    pfVar11 = param_3 + uVar10;
    lVar12 = param_1 - uVar10;
    do {
      *(float *)(((longlong)param_4 - (longlong)param_3) + (longlong)pfVar11) =
           (*(float *)(((longlong)param_2 - (longlong)param_3) + (longlong)pfVar11) + *pfVar11) *
           kInverseSqrtTwo;
      pfVar11 = pfVar11 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

// MultiplyAndAccumulatePointwise @ 14f070b60

void __cdecl
vraudio::MultiplyAndAccumulatePointwise
          (ulong64 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar11 = param_1 >> 2;
  if ((((ulonglong)param_2 & 0xf) == 0) && (((ulonglong)param_3 & 0xf) == 0)) {
    if (uVar11 != 0) {
      pfVar9 = param_4;
      if (((ulonglong)param_4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)(((longlong)param_2 - (longlong)param_4) + (longlong)pfVar9);
          pfVar2 = (float *)(((longlong)param_3 - (longlong)param_2) + (longlong)pfVar1);
          fVar3 = pfVar2[1];
          fVar4 = pfVar2[2];
          fVar5 = pfVar2[3];
          fVar6 = pfVar1[1];
          fVar7 = pfVar1[2];
          fVar8 = pfVar1[3];
          *pfVar9 = *pfVar2 * *pfVar1 + *pfVar9;
          pfVar9[1] = fVar3 * fVar6 + pfVar9[1];
          pfVar9[2] = fVar4 * fVar7 + pfVar9[2];
          pfVar9[3] = fVar5 * fVar8 + pfVar9[3];
          uVar11 = uVar11 - 1;
          pfVar9 = pfVar9 + 4;
        } while (uVar11 != 0);
      }
      else {
        do {
          pfVar1 = (float *)((longlong)pfVar9 + ((longlong)param_2 - (longlong)param_4));
          pfVar2 = (float *)((longlong)pfVar1 + ((longlong)param_3 - (longlong)param_2));
          fVar3 = pfVar2[1];
          fVar4 = pfVar2[2];
          fVar5 = pfVar2[3];
          fVar6 = pfVar1[1];
          fVar7 = pfVar1[2];
          fVar8 = pfVar1[3];
          *pfVar9 = *pfVar2 * *pfVar1 + *pfVar9;
          pfVar9[1] = fVar3 * fVar6 + pfVar9[1];
          pfVar9[2] = fVar4 * fVar7 + pfVar9[2];
          pfVar9[3] = fVar5 * fVar8 + pfVar9[3];
          pfVar9 = pfVar9 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
  }
  else if (uVar11 != 0) {
    lVar10 = (longlong)param_3 - (longlong)param_4;
    pfVar9 = param_4;
    if (((ulonglong)param_4 & 0xf) == 0) {
      do {
        pfVar1 = (float *)((longlong)pfVar9 + lVar10);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = (float *)((longlong)pfVar9 + ((longlong)param_2 - (longlong)param_3) + lVar10);
        fVar6 = pfVar2[1];
        fVar7 = pfVar2[2];
        fVar8 = pfVar2[3];
        *pfVar9 = *pfVar2 * *pfVar1 + *pfVar9;
        pfVar9[1] = fVar6 * fVar3 + pfVar9[1];
        pfVar9[2] = fVar7 * fVar4 + pfVar9[2];
        pfVar9[3] = fVar8 * fVar5 + pfVar9[3];
        pfVar9 = pfVar9 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    else {
      do {
        pfVar1 = (float *)((longlong)pfVar9 + lVar10);
        pfVar2 = (float *)(((longlong)param_2 - (longlong)param_3) + (longlong)pfVar1);
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar5 = pfVar2[3];
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        *pfVar9 = *pfVar2 * *pfVar1 + *pfVar9;
        pfVar9[1] = fVar3 * fVar6 + pfVar9[1];
        pfVar9[2] = fVar4 * fVar7 + pfVar9[2];
        pfVar9[3] = fVar5 * fVar8 + pfVar9[3];
        pfVar9 = pfVar9 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  uVar11 = param_1 & 0xfffffffffffffffc;
  if (uVar11 < param_1) {
    if (3 < param_1 - uVar11) {
      pfVar9 = param_4 + uVar11 + 1;
      lVar12 = (longlong)param_3 - (longlong)param_4;
      lVar10 = ((param_1 - uVar11) - 4 >> 2) + 1;
      uVar11 = uVar11 + lVar10 * 4;
      do {
        pfVar9[-1] = *(float *)(lVar12 + -4 + (longlong)pfVar9) *
                     *(float *)((longlong)param_2 + (-4 - (longlong)param_4) + (longlong)pfVar9) +
                     pfVar9[-1];
        *pfVar9 = *(float *)(lVar12 + (longlong)pfVar9 + ((longlong)param_2 - (longlong)param_3)) *
                  *(float *)(lVar12 + (longlong)pfVar9) + *pfVar9;
        pfVar9[1] = *(float *)(lVar12 + 4 + (longlong)pfVar9) *
                    *(float *)((longlong)param_2 + (4 - (longlong)param_4) + (longlong)pfVar9) +
                    pfVar9[1];
        pfVar9[2] = *(float *)(lVar12 + 8 + (longlong)pfVar9) *
                    *(float *)((longlong)param_2 + (8 - (longlong)param_4) + (longlong)pfVar9) +
                    pfVar9[2];
        pfVar9 = pfVar9 + 4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      if (param_1 <= uVar11) {
        return;
      }
    }
    pfVar9 = param_4 + uVar11;
    lVar10 = param_1 - uVar11;
    do {
      pfVar1 = (float *)(((longlong)param_3 - (longlong)param_4) + (longlong)pfVar9);
      *pfVar9 = *(float *)(((longlong)param_2 - (longlong)param_3) + (longlong)pfVar1) * *pfVar1 +
                *pfVar9;
      pfVar9 = pfVar9 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// MultiplyPointwise @ 14f070d60

void __cdecl
vraudio::MultiplyPointwise(ulong64 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar9 = param_1 >> 2;
  if ((((ulonglong)param_2 & 0xf) == 0) && (((ulonglong)param_3 & 0xf) == 0)) {
    if (uVar9 != 0) {
      pfVar10 = param_2;
      if (((ulonglong)param_4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_3 - (longlong)param_2));
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar5 = pfVar1[3];
          fVar6 = pfVar10[1];
          fVar7 = pfVar10[2];
          fVar8 = pfVar10[3];
          pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_2));
          *pfVar2 = *pfVar1 * *pfVar10;
          pfVar2[1] = fVar3 * fVar6;
          pfVar2[2] = fVar4 * fVar7;
          pfVar2[3] = fVar5 * fVar8;
          uVar9 = uVar9 - 1;
          pfVar10 = pfVar10 + 4;
        } while (uVar9 != 0);
      }
      else {
        do {
          pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_3 - (longlong)param_2));
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar5 = pfVar1[3];
          fVar6 = pfVar10[1];
          fVar7 = pfVar10[2];
          fVar8 = pfVar10[3];
          pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_2));
          *pfVar2 = *pfVar1 * *pfVar10;
          pfVar2[1] = fVar3 * fVar6;
          pfVar2[2] = fVar4 * fVar7;
          pfVar2[3] = fVar5 * fVar8;
          uVar9 = uVar9 - 1;
          pfVar10 = pfVar10 + 4;
        } while (uVar9 != 0);
      }
    }
  }
  else if (uVar9 != 0) {
    pfVar10 = param_3;
    if (((ulonglong)param_4 & 0xf) == 0) {
      do {
        pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_2 - (longlong)param_3));
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        fVar6 = pfVar10[1];
        fVar7 = pfVar10[2];
        fVar8 = pfVar10[3];
        pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_3));
        *pfVar2 = *pfVar1 * *pfVar10;
        pfVar2[1] = fVar3 * fVar6;
        pfVar2[2] = fVar4 * fVar7;
        pfVar2[3] = fVar5 * fVar8;
        uVar9 = uVar9 - 1;
        pfVar10 = pfVar10 + 4;
      } while (uVar9 != 0);
    }
    else {
      do {
        pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_2 - (longlong)param_3));
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        fVar6 = pfVar10[1];
        fVar7 = pfVar10[2];
        fVar8 = pfVar10[3];
        pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_3));
        *pfVar2 = *pfVar1 * *pfVar10;
        pfVar2[1] = fVar3 * fVar6;
        pfVar2[2] = fVar4 * fVar7;
        pfVar2[3] = fVar5 * fVar8;
        uVar9 = uVar9 - 1;
        pfVar10 = pfVar10 + 4;
      } while (uVar9 != 0);
    }
  }
  uVar9 = param_1 & 0xfffffffffffffffc;
  if (uVar9 < param_1) {
    if (3 < param_1 - uVar9) {
      lVar12 = uVar9 + 1;
      lVar11 = ((param_1 - uVar9) - 4 >> 2) + 1;
      uVar9 = uVar9 + lVar11 * 4;
      pfVar10 = param_3 + lVar12;
      do {
        pfVar1 = pfVar10 + 4;
        *(float *)((longlong)param_4 + (-0x14 - (longlong)param_3) + (longlong)pfVar1) =
             *(float *)((longlong)param_2 + (-4 - (longlong)param_3) + (longlong)pfVar10) *
             pfVar10[-1];
        *(float *)((longlong)param_4 + (-0x10 - (longlong)param_3) + (longlong)pfVar1) =
             *(float *)((longlong)param_2 + (-0x10 - (longlong)param_3) + (longlong)pfVar1) *
             *pfVar10;
        *(float *)((longlong)param_4 + (-0xc - (longlong)param_3) + (longlong)pfVar1) =
             *(float *)((longlong)param_2 + (-0xc - (longlong)param_3) + (longlong)pfVar1) *
             pfVar10[1];
        *(float *)((longlong)param_4 + (-8 - (longlong)param_3) + (longlong)pfVar1) =
             *(float *)((longlong)param_2 + (-8 - (longlong)param_3) + (longlong)pfVar1) *
             pfVar10[2];
        lVar11 = lVar11 + -1;
        pfVar10 = pfVar1;
      } while (lVar11 != 0);
      if (param_1 <= uVar9) {
        return;
      }
    }
    pfVar10 = param_3 + uVar9;
    lVar12 = param_1 - uVar9;
    do {
      pfVar1 = (float *)(((longlong)param_2 - (longlong)param_3) + (longlong)pfVar10);
      fVar3 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      *(float *)((longlong)param_4 + (-4 - (longlong)param_3) + (longlong)pfVar10) = *pfVar1 * fVar3
      ;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

// ReciprocalSqrt @ 14f070f20

void __cdecl vraudio::ReciprocalSqrt(ulong64 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  float *pfVar8;
  longlong lVar9;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  
  uVar3 = param_1 >> 2;
  if (uVar3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_3;
    if (((ulonglong)param_2 & 0xf) == 0) {
      pauVar7 = (undefined1 (*) [16])param_3;
      if (((ulonglong)param_3 & 0xf) == 0) {
        do {
          in_XMM0 = rsqrtps(in_XMM0,*(undefined1 (*) [16])((longlong)pauVar7 + lVar6));
          *pauVar7 = in_XMM0;
          uVar3 = uVar3 - 1;
          pauVar7 = pauVar7 + 1;
        } while (uVar3 != 0);
      }
      else {
        do {
          in_XMM0 = rsqrtps(in_XMM0,*(undefined1 (*) [16])((longlong)pauVar7 + lVar6));
          *pauVar7 = in_XMM0;
          uVar3 = uVar3 - 1;
          pauVar7 = pauVar7 + 1;
        } while (uVar3 != 0);
      }
    }
    else {
      pauVar7 = (undefined1 (*) [16])param_3;
      if (((ulonglong)param_3 & 0xf) == 0) {
        do {
          in_XMM1 = rsqrtps(in_XMM1,*(undefined1 (*) [16])((longlong)pauVar7 + lVar6));
          *pauVar7 = in_XMM1;
          uVar3 = uVar3 - 1;
          pauVar7 = pauVar7 + 1;
        } while (uVar3 != 0);
      }
      else {
        do {
          in_XMM1 = rsqrtps(in_XMM1,*(undefined1 (*) [16])((longlong)pauVar7 + lVar6));
          *pauVar7 = in_XMM1;
          uVar3 = uVar3 - 1;
          pauVar7 = pauVar7 + 1;
        } while (uVar3 != 0);
      }
    }
  }
  fVar2 = __real_3fc00000;
  fVar1 = __real_3f000000;
  uVar3 = param_1 & 0xfffffffffffffffc;
  if (uVar3 < param_1) {
    if (3 < param_1 - uVar3) {
      lVar9 = (longlong)param_2 - (longlong)param_3;
      pfVar8 = param_3 + uVar3 + 1;
      lVar6 = ((param_1 - uVar3) - 4 >> 2) + 1;
      uVar3 = uVar3 + lVar6 * 4;
      do {
        fVar5 = *(float *)((longlong)pfVar8 + lVar9 + -4);
        fVar4 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
        pfVar8[-1] = (fVar2 - fVar5 * fVar1 * fVar4 * fVar4) * fVar4;
        fVar5 = (float)(0x5f3759df - ((uint)*(float *)((longlong)pfVar8 + lVar9) >> 1));
        *pfVar8 = (fVar2 - *(float *)((longlong)pfVar8 + lVar9) * fVar1 * fVar5 * fVar5) * fVar5;
        fVar5 = *(float *)((longlong)pfVar8 + lVar9 + 4);
        fVar4 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
        pfVar8[1] = (fVar2 - fVar5 * fVar1 * fVar4 * fVar4) * fVar4;
        fVar5 = *(float *)((longlong)pfVar8 + lVar9 + 8);
        fVar4 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
        pfVar8[2] = (fVar2 - fVar5 * fVar1 * fVar4 * fVar4) * fVar4;
        pfVar8 = pfVar8 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (param_1 <= uVar3) {
        return;
      }
    }
    pfVar8 = param_3 + uVar3;
    lVar6 = param_1 - uVar3;
    do {
      fVar5 = *(float *)(((longlong)param_2 - (longlong)param_3) + (longlong)pfVar8);
      fVar4 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
      *pfVar8 = (fVar2 - fVar5 * fVar1 * fVar4 * fVar4) * fVar4;
      pfVar8 = pfVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// ScalarMultiply @ 14f071170

void __cdecl vraudio::ScalarMultiply(ulong64 param_1,float param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar5 = param_1 >> 2;
  if (uVar5 != 0) {
    lVar7 = (longlong)param_3 - (longlong)param_4;
    if (((ulonglong)param_3 & 0xf) == 0) {
      pfVar6 = param_4;
      if (((ulonglong)param_4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)((longlong)pfVar6 + lVar7);
          fVar2 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar6 = param_2 * *pfVar1;
          pfVar6[1] = param_2 * fVar2;
          pfVar6[2] = param_2 * fVar3;
          pfVar6[3] = param_2 * fVar4;
          uVar5 = uVar5 - 1;
          pfVar6 = pfVar6 + 4;
        } while (uVar5 != 0);
      }
      else {
        do {
          pfVar1 = (float *)((longlong)pfVar6 + lVar7);
          fVar2 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar6 = param_2 * *pfVar1;
          pfVar6[1] = param_2 * fVar2;
          pfVar6[2] = param_2 * fVar3;
          pfVar6[3] = param_2 * fVar4;
          uVar5 = uVar5 - 1;
          pfVar6 = pfVar6 + 4;
        } while (uVar5 != 0);
      }
    }
    else {
      pfVar6 = param_4;
      if (((ulonglong)param_4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)((longlong)pfVar6 + lVar7);
          fVar2 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar6 = *pfVar1 * param_2;
          pfVar6[1] = fVar2 * param_2;
          pfVar6[2] = fVar3 * param_2;
          pfVar6[3] = fVar4 * param_2;
          uVar5 = uVar5 - 1;
          pfVar6 = pfVar6 + 4;
        } while (uVar5 != 0);
      }
      else {
        do {
          pfVar1 = (float *)((longlong)pfVar6 + lVar7);
          fVar2 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar6 = *pfVar1 * param_2;
          pfVar6[1] = fVar2 * param_2;
          pfVar6[2] = fVar3 * param_2;
          pfVar6[3] = fVar4 * param_2;
          uVar5 = uVar5 - 1;
          pfVar6 = pfVar6 + 4;
        } while (uVar5 != 0);
      }
    }
  }
  uVar5 = param_1 & 0xfffffffffffffffc;
  if (uVar5 < param_1) {
    if (3 < param_1 - uVar5) {
      lVar7 = uVar5 + 1;
      lVar8 = (longlong)param_3 - (longlong)param_4;
      lVar9 = ((param_1 - uVar5) - 4 >> 2) + 1;
      uVar5 = uVar5 + lVar9 * 4;
      pfVar6 = param_4 + lVar7;
      do {
        pfVar1 = pfVar6 + 4;
        pfVar6[-1] = param_2 * *(float *)(lVar8 + -0x14 + (longlong)pfVar1);
        *pfVar6 = param_2 * *(float *)((longlong)pfVar6 + lVar8);
        pfVar6[1] = param_2 * *(float *)(lVar8 + -0xc + (longlong)pfVar1);
        pfVar6[2] = param_2 * *(float *)(lVar8 + -8 + (longlong)pfVar1);
        lVar9 = lVar9 + -1;
        pfVar6 = pfVar1;
      } while (lVar9 != 0);
      if (param_1 <= uVar5) {
        return;
      }
    }
    lVar7 = param_1 - uVar5;
    pfVar6 = param_4 + uVar5;
    do {
      *pfVar6 = param_2 * *(float *)((longlong)param_3 + (-4 - (longlong)param_4) +
                                    (longlong)(pfVar6 + 1));
      lVar7 = lVar7 + -1;
      pfVar6 = pfVar6 + 1;
    } while (lVar7 != 0);
  }
  return;
}

// ScalarMultiplyAndAccumulate @ 14f0712f0

void __cdecl
vraudio::ScalarMultiplyAndAccumulate(ulong64 param_1,float param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar5 = param_1 >> 2;
  if (uVar5 != 0) {
    lVar7 = (longlong)param_3 - (longlong)param_4;
    if (((ulonglong)param_3 & 0xf) == 0) {
      pfVar6 = param_4;
      if (((ulonglong)param_4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)((longlong)pfVar6 + lVar7);
          fVar2 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar6 = param_2 * *pfVar1 + *pfVar6;
          pfVar6[1] = param_2 * fVar2 + pfVar6[1];
          pfVar6[2] = param_2 * fVar3 + pfVar6[2];
          pfVar6[3] = param_2 * fVar4 + pfVar6[3];
          pfVar6 = pfVar6 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      else {
        do {
          pfVar1 = (float *)((longlong)pfVar6 + lVar7);
          fVar2 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar6 = param_2 * *pfVar1 + *pfVar6;
          pfVar6[1] = param_2 * fVar2 + pfVar6[1];
          pfVar6[2] = param_2 * fVar3 + pfVar6[2];
          pfVar6[3] = param_2 * fVar4 + pfVar6[3];
          pfVar6 = pfVar6 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else {
      pfVar6 = param_4;
      if (((ulonglong)param_4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)((longlong)pfVar6 + lVar7);
          fVar2 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar6 = *pfVar1 * param_2 + *pfVar6;
          pfVar6[1] = fVar2 * param_2 + pfVar6[1];
          pfVar6[2] = fVar3 * param_2 + pfVar6[2];
          pfVar6[3] = fVar4 * param_2 + pfVar6[3];
          uVar5 = uVar5 - 1;
          pfVar6 = pfVar6 + 4;
        } while (uVar5 != 0);
      }
      else {
        do {
          pfVar1 = (float *)((longlong)pfVar6 + lVar7);
          fVar2 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar6 = *pfVar1 * param_2 + *pfVar6;
          pfVar6[1] = fVar2 * param_2 + pfVar6[1];
          pfVar6[2] = fVar3 * param_2 + pfVar6[2];
          pfVar6[3] = fVar4 * param_2 + pfVar6[3];
          pfVar6 = pfVar6 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
  }
  uVar5 = param_1 & 0xfffffffffffffffc;
  if (uVar5 < param_1) {
    if (3 < param_1 - uVar5) {
      pfVar6 = param_4 + uVar5 + 1;
      lVar8 = (longlong)param_3 - (longlong)param_4;
      lVar7 = ((param_1 - uVar5) - 4 >> 2) + 1;
      uVar5 = uVar5 + lVar7 * 4;
      do {
        pfVar6[-1] = param_2 * *(float *)(lVar8 + -4 + (longlong)pfVar6) + pfVar6[-1];
        *pfVar6 = param_2 * *(float *)(lVar8 + (longlong)pfVar6) + *pfVar6;
        pfVar6[1] = param_2 * *(float *)(lVar8 + 4 + (longlong)pfVar6) + pfVar6[1];
        pfVar6[2] = param_2 * *(float *)(lVar8 + 8 + (longlong)pfVar6) + pfVar6[2];
        pfVar6 = pfVar6 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      if (param_1 <= uVar5) {
        return;
      }
    }
    pfVar6 = param_4 + uVar5;
    lVar7 = param_1 - uVar5;
    do {
      *pfVar6 = param_2 * *(float *)(((longlong)param_3 - (longlong)param_4) + (longlong)pfVar6) +
                *pfVar6;
      pfVar6 = pfVar6 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// Sqrt @ 14f071490

void __cdecl vraudio::Sqrt(ulong64 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  float *pfVar9;
  longlong lVar10;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  
  uVar4 = param_1 >> 2;
  if (uVar4 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_3;
    if (((ulonglong)param_2 & 0xf) == 0) {
      pauVar8 = (undefined1 (*) [16])param_3;
      if (((ulonglong)param_3 & 0xf) == 0) {
        do {
          in_XMM0 = rsqrtps(in_XMM0,*(undefined1 (*) [16])((longlong)pauVar8 + lVar7));
          in_XMM1 = rcpps(in_XMM1,in_XMM0);
          *pauVar8 = in_XMM1;
          uVar4 = uVar4 - 1;
          pauVar8 = pauVar8 + 1;
        } while (uVar4 != 0);
      }
      else {
        do {
          in_XMM0 = rsqrtps(in_XMM0,*(undefined1 (*) [16])((longlong)pauVar8 + lVar7));
          in_XMM1 = rcpps(in_XMM1,in_XMM0);
          *pauVar8 = in_XMM1;
          uVar4 = uVar4 - 1;
          pauVar8 = pauVar8 + 1;
        } while (uVar4 != 0);
      }
    }
    else {
      pauVar8 = (undefined1 (*) [16])param_3;
      if (((ulonglong)param_3 & 0xf) == 0) {
        do {
          in_XMM1 = rsqrtps(in_XMM1,*(undefined1 (*) [16])((longlong)pauVar8 + lVar7));
          in_XMM2 = rcpps(in_XMM2,in_XMM1);
          *pauVar8 = in_XMM2;
          uVar4 = uVar4 - 1;
          pauVar8 = pauVar8 + 1;
        } while (uVar4 != 0);
      }
      else {
        do {
          in_XMM1 = rsqrtps(in_XMM1,*(undefined1 (*) [16])((longlong)pauVar8 + lVar7));
          in_XMM2 = rcpps(in_XMM2,in_XMM1);
          *pauVar8 = in_XMM2;
          uVar4 = uVar4 - 1;
          pauVar8 = pauVar8 + 1;
        } while (uVar4 != 0);
      }
    }
  }
  fVar3 = __real_3fc00000;
  fVar2 = __real_3f000000;
  fVar1 = __real_3f800000;
  uVar4 = param_1 & 0xfffffffffffffffc;
  if (uVar4 < param_1) {
    if (3 < param_1 - uVar4) {
      lVar10 = (longlong)param_2 - (longlong)param_3;
      pfVar9 = param_3 + uVar4 + 1;
      lVar7 = ((param_1 - uVar4) - 4 >> 2) + 1;
      uVar4 = uVar4 + lVar7 * 4;
      do {
        fVar6 = *(float *)(lVar10 + -4 + (longlong)pfVar9);
        fVar5 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
        pfVar9[-1] = fVar1 / ((fVar3 - fVar6 * fVar2 * fVar5 * fVar5) * fVar5);
        fVar6 = (float)(0x5f3759df - ((uint)*(float *)(lVar10 + (longlong)pfVar9) >> 1));
        *pfVar9 = fVar1 / ((fVar3 - *(float *)(lVar10 + (longlong)pfVar9) * fVar2 * fVar6 * fVar6) *
                          fVar6);
        fVar6 = *(float *)(lVar10 + 4 + (longlong)pfVar9);
        fVar5 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
        pfVar9[1] = fVar1 / ((fVar3 - fVar6 * fVar2 * fVar5 * fVar5) * fVar5);
        fVar6 = *(float *)(lVar10 + 8 + (longlong)pfVar9);
        fVar5 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
        pfVar9[2] = fVar1 / ((fVar3 - fVar6 * fVar2 * fVar5 * fVar5) * fVar5);
        pfVar9 = pfVar9 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      if (param_1 <= uVar4) {
        return;
      }
    }
    pfVar9 = param_3 + uVar4;
    lVar7 = param_1 - uVar4;
    do {
      fVar6 = *(float *)(((longlong)param_2 - (longlong)param_3) + (longlong)pfVar9);
      fVar5 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
      *pfVar9 = fVar1 / ((fVar3 - fVar6 * fVar2 * fVar5 * fVar5) * fVar5);
      pfVar9 = pfVar9 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// StereoFromMonoSimd @ 14f071710

void __cdecl
vraudio::StereoFromMonoSimd(ulong64 param_1,float *param_2,float *param_3,float *param_4)

{
  ScalarMultiply(param_1,kInverseSqrtTwo,param_2,param_3);
  if (param_1 != 0) {
    memmove(param_4,param_3,param_1 * 4);
  }
  return;
}

// SubtractPointwise @ 14f071770

void __cdecl
vraudio::SubtractPointwise(ulong64 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar9 = param_1 >> 2;
  if ((((ulonglong)param_2 & 0xf) == 0) && (((ulonglong)param_3 & 0xf) == 0)) {
    if (uVar9 != 0) {
      pfVar10 = param_2;
      if (((ulonglong)param_4 & 0xf) == 0) {
        do {
          pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_3 - (longlong)param_2));
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar5 = pfVar1[3];
          fVar6 = pfVar10[1];
          fVar7 = pfVar10[2];
          fVar8 = pfVar10[3];
          pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_2));
          *pfVar2 = *pfVar1 - *pfVar10;
          pfVar2[1] = fVar3 - fVar6;
          pfVar2[2] = fVar4 - fVar7;
          pfVar2[3] = fVar5 - fVar8;
          pfVar10 = pfVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      else {
        do {
          pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_3 - (longlong)param_2));
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar5 = pfVar1[3];
          fVar6 = pfVar10[1];
          fVar7 = pfVar10[2];
          fVar8 = pfVar10[3];
          pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_2));
          *pfVar2 = *pfVar1 - *pfVar10;
          pfVar2[1] = fVar3 - fVar6;
          pfVar2[2] = fVar4 - fVar7;
          pfVar2[3] = fVar5 - fVar8;
          pfVar10 = pfVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  else if (uVar9 != 0) {
    pfVar10 = param_3;
    if (((ulonglong)param_4 & 0xf) == 0) {
      do {
        fVar3 = pfVar10[1];
        fVar4 = pfVar10[2];
        fVar5 = pfVar10[3];
        pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_2 - (longlong)param_3));
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_3));
        *pfVar2 = *pfVar10 - *pfVar1;
        pfVar2[1] = fVar3 - fVar6;
        pfVar2[2] = fVar4 - fVar7;
        pfVar2[3] = fVar5 - fVar8;
        uVar9 = uVar9 - 1;
        pfVar10 = pfVar10 + 4;
      } while (uVar9 != 0);
    }
    else {
      do {
        fVar3 = pfVar10[1];
        fVar4 = pfVar10[2];
        fVar5 = pfVar10[3];
        pfVar1 = (float *)((longlong)pfVar10 + ((longlong)param_2 - (longlong)param_3));
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)((longlong)pfVar10 + ((longlong)param_4 - (longlong)param_3));
        *pfVar2 = *pfVar10 - *pfVar1;
        pfVar2[1] = fVar3 - fVar6;
        pfVar2[2] = fVar4 - fVar7;
        pfVar2[3] = fVar5 - fVar8;
        pfVar10 = pfVar10 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  uVar9 = param_1 & 0xfffffffffffffffc;
  if (uVar9 < param_1) {
    lVar12 = (longlong)param_3 - (longlong)param_2;
    if (3 < param_1 - uVar9) {
      pfVar10 = param_2 + uVar9 + 1;
      lVar11 = (longlong)param_4 - (longlong)param_2;
      lVar13 = ((param_1 - uVar9) - 4 >> 2) + 1;
      uVar9 = uVar9 + lVar13 * 4;
      do {
        *(float *)(lVar11 + -4 + (longlong)pfVar10) =
             *(float *)(lVar12 + -4 + (longlong)pfVar10) - pfVar10[-1];
        *(float *)(lVar11 + (longlong)pfVar10) = *(float *)(lVar12 + (longlong)pfVar10) - *pfVar10;
        *(float *)(lVar11 + 4 + (longlong)pfVar10) =
             *(float *)(lVar12 + 4 + (longlong)pfVar10) - pfVar10[1];
        *(float *)(lVar11 + 8 + (longlong)pfVar10) =
             *(float *)(lVar12 + 8 + (longlong)pfVar10) - pfVar10[2];
        pfVar10 = pfVar10 + 4;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      if (param_1 <= uVar9) {
        return;
      }
    }
    pfVar10 = param_2 + uVar9;
    lVar11 = param_1 - uVar9;
    do {
      *(float *)(((longlong)param_4 - (longlong)param_2) + (longlong)pfVar10) =
           *(float *)(lVar12 + (longlong)pfVar10) - *pfVar10;
      pfVar10 = pfVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}


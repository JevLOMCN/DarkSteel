// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 3

// ConvertPlanarSamples @ 14f099910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl vraudio::ConvertPlanarSamples(ulong64 param_1,short *param_2,float *param_3)

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

// ConvertPlanarSamples @ 14f099920

void __cdecl vraudio::ConvertPlanarSamples(ulong64 param_1,float *param_2,short *param_3)

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

// ConvertPlanarSamples @ 14f099930

void __cdecl vraudio::ConvertPlanarSamples(ulong64 param_1,float *param_2,float *param_3)

{
  if (param_1 != 0) {
    memmove(param_3,param_2,param_1 * 4);
    return;
  }
  return;
}


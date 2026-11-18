// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// ResampleMono @ 144524a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
Audio::FVectorLinearResampler::ResampleMono
          (FVectorLinearResampler *this,uint param_1,uint param_2,float *param_3,float *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
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
  float fVar32;
  float fVar33;
  
  uVar13 = _UNK_150d5a7bc;
  uVar20 = _UNK_150d5a7b8;
  uVar19 = _UNK_150d5a7b4;
  uVar15 = ___xmm_ffbfffffffbfffffffbfffffffbfffff;
  fVar12 = _UNK_15076be9c;
  fVar11 = _UNK_15076be98;
  fVar10 = _UNK_15076be94;
  fVar9 = ___xmm_40400000404000004040000040400000;
  fVar8 = _UNK_15076ba3c;
  fVar22 = _UNK_15076ba38;
  fVar7 = _UNK_15076ba34;
  fVar6 = ___xmm_40000000400000004000000040000000;
  uVar18 = this->CurrentFrameFraction;
  uVar14 = 0;
  uVar16 = (param_1 - 1) * param_2 + uVar18;
  fVar21 = (float)(uVar18 & 0xffff);
  fVar30 = (float)(param_2 * 4 & 0xffff);
  fVar31 = fVar30 * ___xmm_37800000378000003780000037800000;
  fVar32 = fVar30 * _UNK_150d5a7a4;
  fVar33 = fVar30 * _UNK_150d5a7a8;
  fVar30 = fVar30 * _UNK_150d5a7ac;
  fVar27 = (fVar21 + 0.0) * ___xmm_37800000378000003780000037800000 +
           ___xmm_40000000400000004000000040000000;
  fVar28 = ((float)(param_2 & 0xffff) + fVar21) * _UNK_150d5a7a4 + _UNK_15076ba34;
  fVar29 = ((float)(param_2 * 2 & 0xffff) + fVar21) * _UNK_150d5a7a8 + _UNK_15076ba38;
  fVar21 = ((float)(param_2 * 3 & 0xffff) + fVar21) * _UNK_150d5a7ac + _UNK_15076ba3c;
  if ((param_1 & 0xfffffffc) != 0) {
    uVar14 = ((param_1 & 0xfffffffc) - 1 >> 2) + 1;
    uVar17 = (ulonglong)uVar14;
    uVar14 = uVar14 * 4;
    do {
      fVar23 = (float)(uVar15 & (uint)fVar27);
      fVar24 = (float)(uVar19 & (uint)fVar28);
      fVar25 = (float)(uVar20 & (uint)fVar29);
      fVar26 = (float)(uVar13 & (uint)fVar21);
      uVar5 = uVar18 >> 0x10;
      uVar2 = *(undefined8 *)(param_3 + (param_2 * 2 + uVar18 >> 0x10));
      fVar27 = fVar23 + fVar31;
      fVar28 = fVar24 + fVar32;
      fVar29 = fVar25 + fVar33;
      fVar21 = fVar26 + fVar30;
      uVar3 = *(undefined8 *)(param_3 + (param_2 * 3 + uVar18 >> 0x10));
      uVar1 = uVar18 + param_2;
      uVar18 = uVar18 + param_2 * 4;
      uVar4 = *(undefined8 *)(param_3 + (uVar1 >> 0x10));
      *param_4 = (float)*(undefined8 *)(param_3 + uVar5) * (fVar9 - fVar23) +
                 (float)((ulonglong)*(undefined8 *)(param_3 + uVar5) >> 0x20) * (fVar23 - fVar6);
      param_4[1] = (float)uVar4 * (fVar10 - fVar24) +
                   (float)((ulonglong)uVar4 >> 0x20) * (fVar24 - fVar7);
      param_4[2] = (float)uVar2 * (fVar11 - fVar25) +
                   (float)((ulonglong)uVar2 >> 0x20) * (fVar25 - fVar22);
      param_4[3] = (float)uVar3 * (fVar12 - fVar26) +
                   (float)((ulonglong)uVar3 >> 0x20) * (fVar26 - fVar8);
      param_4 = param_4 + 4;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  fVar7 = __real_37800000;
  fVar6 = __real_3f800000;
  if (uVar14 < param_1) {
    if (3 < param_1 - uVar14) {
      uVar15 = ((param_1 - uVar14) - 4 >> 2) + 1;
      uVar17 = (ulonglong)uVar15;
      uVar14 = uVar14 + uVar15 * 4;
      do {
        uVar15 = uVar18 + param_2;
        fVar22 = (float)(uVar18 & 0xffff) * fVar7;
        uVar19 = uVar15 + param_2;
        *param_4 = (fVar6 - fVar22) * param_3[uVar18 >> 0x10] +
                   fVar22 * param_3[(uVar18 >> 0x10) + 1];
        fVar22 = (float)(uVar15 & 0xffff) * fVar7;
        uVar20 = uVar19 + param_2;
        param_4[1] = (fVar6 - fVar22) * param_3[uVar15 >> 0x10] +
                     fVar22 * param_3[(uVar15 >> 0x10) + 1];
        fVar22 = (float)(uVar19 & 0xffff) * fVar7;
        uVar18 = uVar20 + param_2;
        param_4[2] = (fVar6 - fVar22) * param_3[uVar19 >> 0x10] +
                     fVar22 * param_3[(uVar19 >> 0x10) + 1];
        fVar22 = (float)(uVar20 & 0xffff) * fVar7;
        param_4[3] = (fVar6 - fVar22) * param_3[uVar20 >> 0x10] +
                     fVar22 * param_3[(uVar20 >> 0x10) + 1];
        param_4 = param_4 + 4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      if (param_1 <= uVar14) goto LAB_144524ce9;
    }
    uVar17 = (ulonglong)(param_1 - uVar14);
    do {
      uVar14 = uVar18 & 0xffff;
      uVar15 = uVar18 >> 0x10;
      uVar18 = uVar18 + param_2;
      fVar22 = (float)uVar14 * fVar7;
      *param_4 = (fVar6 - fVar22) * param_3[uVar15] + fVar22 * param_3[uVar15 + 1];
      param_4 = param_4 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
LAB_144524ce9:
  this->CurrentFrameFraction = (uVar16 + param_2) - (uVar16 & 0xffff0000);
  return uVar16 >> 0x10;
}

// ResampleStereo @ 144524d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
Audio::FVectorLinearResampler::ResampleStereo
          (FVectorLinearResampler *this,uint param_1,uint param_2,float *param_3,uint param_4,
          float *param_5,uint param_6)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
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
  
  uVar18 = _UNK_150d5a7bc;
  uVar28 = _UNK_150d5a7b8;
  uVar27 = _UNK_150d5a7b4;
  uVar26 = ___xmm_ffbfffffffbfffffffbfffffffbfffff;
  fVar17 = _UNK_15076be9c;
  fVar16 = _UNK_15076be98;
  fVar15 = _UNK_15076be94;
  fVar14 = ___xmm_40400000404000004040000040400000;
  fVar13 = _UNK_15076ba3c;
  fVar32 = _UNK_15076ba38;
  fVar12 = _UNK_15076ba34;
  fVar11 = ___xmm_40000000400000004000000040000000;
  uVar25 = this->CurrentFrameFraction;
  uVar19 = 0;
  uVar24 = (ulonglong)param_6;
  uVar29 = (param_1 - 1) * param_2 + uVar25;
  fVar31 = (float)(uVar25 & 0xffff);
  uVar20 = param_2 * 4;
  fVar40 = (float)(uVar20 & 0xffff);
  fVar41 = fVar40 * ___xmm_37800000378000003780000037800000;
  fVar42 = fVar40 * _UNK_150d5a7a4;
  fVar43 = fVar40 * _UNK_150d5a7a8;
  fVar40 = fVar40 * _UNK_150d5a7ac;
  fVar33 = (fVar31 + 0.0) * ___xmm_37800000378000003780000037800000 +
           ___xmm_40000000400000004000000040000000;
  fVar35 = ((float)(param_2 & 0xffff) + fVar31) * _UNK_150d5a7a4 + _UNK_15076ba34;
  fVar37 = ((float)(param_2 * 2 & 0xffff) + fVar31) * _UNK_150d5a7a8 + _UNK_15076ba38;
  fVar31 = ((float)(param_2 * 3 & 0xffff) + fVar31) * _UNK_150d5a7ac + _UNK_15076ba3c;
  if ((param_1 & 0xfffffffc) != 0) {
    uVar22 = param_2 * 2 + uVar25;
    uVar19 = ((param_1 & 0xfffffffc) - 1 >> 2) + 1;
    uVar30 = (ulonglong)uVar19;
    uVar19 = uVar19 * 4;
    do {
      fVar34 = (float)((uint)fVar33 & uVar26);
      fVar36 = (float)((uint)fVar35 & uVar27);
      fVar38 = (float)((uint)fVar37 & uVar28);
      fVar39 = (float)((uint)fVar31 & uVar18);
      uVar9 = uVar25 >> 0x10;
      uVar23 = (ulonglong)(param_2 + uVar22 >> 0x10);
      uVar21 = (ulonglong)(uVar22 - param_2 >> 0x10);
      uVar2 = *(undefined8 *)(param_3 + (ulonglong)param_4 + (ulonglong)uVar9);
      uVar10 = uVar22 >> 0x10;
      uVar3 = *(undefined8 *)(param_3 + uVar21);
      fVar33 = fVar34 + fVar41;
      fVar35 = fVar36 + fVar42;
      fVar37 = fVar38 + fVar43;
      fVar31 = fVar39 + fVar40;
      uVar4 = *(undefined8 *)(param_3 + param_4 + uVar21);
      uVar25 = uVar25 + uVar20;
      uVar22 = uVar22 + uVar20;
      uVar5 = *(undefined8 *)(param_3 + uVar10);
      uVar6 = *(undefined8 *)(param_3 + (ulonglong)param_4 + (ulonglong)uVar10);
      uVar7 = *(undefined8 *)(param_3 + uVar23);
      uVar8 = *(undefined8 *)(param_3 + param_4 + uVar23);
      *param_5 = (float)((ulonglong)*(undefined8 *)(param_3 + uVar9) >> 0x20) * (fVar34 - fVar11) +
                 (float)*(undefined8 *)(param_3 + uVar9) * (fVar14 - fVar34);
      param_5[1] = (float)((ulonglong)uVar3 >> 0x20) * (fVar36 - fVar12) +
                   (float)uVar3 * (fVar15 - fVar36);
      param_5[2] = (float)((ulonglong)uVar5 >> 0x20) * (fVar38 - fVar32) +
                   (float)uVar5 * (fVar16 - fVar38);
      param_5[3] = (float)((ulonglong)uVar7 >> 0x20) * (fVar39 - fVar13) +
                   (float)uVar7 * (fVar17 - fVar39);
      pfVar1 = param_5 + uVar24;
      *pfVar1 = (float)((ulonglong)uVar2 >> 0x20) * (fVar34 - fVar11) +
                (float)uVar2 * (fVar14 - fVar34);
      pfVar1[1] = (float)((ulonglong)uVar4 >> 0x20) * (fVar36 - fVar12) +
                  (float)uVar4 * (fVar15 - fVar36);
      pfVar1[2] = (float)((ulonglong)uVar6 >> 0x20) * (fVar38 - fVar32) +
                  (float)uVar6 * (fVar16 - fVar38);
      pfVar1[3] = (float)((ulonglong)uVar8 >> 0x20) * (fVar39 - fVar13) +
                  (float)uVar8 * (fVar17 - fVar39);
      param_5 = param_5 + 4;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  fVar12 = __real_37800000;
  fVar11 = __real_3f800000;
  if (uVar19 < param_1) {
    if (3 < param_1 - uVar19) {
      uVar20 = ((param_1 - uVar19) - 4 >> 2) + 1;
      uVar30 = (ulonglong)uVar20;
      uVar19 = uVar19 + uVar20 * 4;
      do {
        uVar20 = uVar25 >> 0x10;
        uVar26 = uVar25 + param_2;
        fVar32 = (float)(uVar25 & 0xffff) * fVar12;
        *param_5 = (fVar11 - fVar32) * param_3[uVar20] + fVar32 * param_3[uVar20 + 1];
        uVar25 = uVar26 >> 0x10;
        uVar27 = uVar26 + param_2;
        param_5[uVar24] =
             (fVar11 - fVar32) * param_3[(ulonglong)param_4 + (ulonglong)uVar20] +
             fVar32 * param_3[(ulonglong)param_4 + (ulonglong)(uVar20 + 1)];
        fVar32 = (float)(uVar26 & 0xffff) * fVar12;
        param_5[1] = (fVar11 - fVar32) * param_3[uVar25] + fVar32 * param_3[uVar25 + 1];
        uVar20 = uVar27 >> 0x10;
        uVar28 = uVar27 + param_2;
        param_5[uVar24 + 1] =
             (fVar11 - fVar32) * param_3[(ulonglong)param_4 + (ulonglong)uVar25] +
             fVar32 * param_3[(ulonglong)param_4 + (ulonglong)(uVar25 + 1)];
        fVar32 = (float)(uVar27 & 0xffff) * fVar12;
        param_5[2] = (fVar11 - fVar32) * param_3[uVar20] + fVar32 * param_3[uVar20 + 1];
        uVar26 = uVar28 >> 0x10;
        uVar25 = uVar28 + param_2;
        param_5[uVar24 + 2] =
             (fVar11 - fVar32) * param_3[(ulonglong)param_4 + (ulonglong)uVar20] +
             fVar32 * param_3[(ulonglong)param_4 + (ulonglong)(uVar20 + 1)];
        fVar32 = (float)(uVar28 & 0xffff) * fVar12;
        param_5[3] = (fVar11 - fVar32) * param_3[uVar26] + fVar32 * param_3[uVar26 + 1];
        param_5[uVar24 + 3] =
             (fVar11 - fVar32) * param_3[(ulonglong)param_4 + (ulonglong)uVar26] +
             fVar32 * param_3[(ulonglong)param_4 + (ulonglong)(uVar26 + 1)];
        param_5 = param_5 + 4;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    if (uVar19 < param_1) {
      uVar24 = (ulonglong)(param_1 - uVar19);
      do {
        uVar19 = uVar25 & 0xffff;
        uVar20 = uVar25 >> 0x10;
        uVar25 = uVar25 + param_2;
        fVar32 = (float)uVar19 * fVar12;
        *param_5 = (fVar11 - fVar32) * param_3[uVar20] + fVar32 * param_3[uVar20 + 1];
        param_5[param_6] =
             (fVar11 - fVar32) * param_3[(ulonglong)param_4 + (ulonglong)uVar20] +
             fVar32 * param_3[(ulonglong)param_4 + (ulonglong)(uVar20 + 1)];
        param_5 = param_5 + 1;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  this->CurrentFrameFraction = (uVar29 + param_2) - (uVar29 & 0xffff0000);
  return uVar29 >> 0x10;
}


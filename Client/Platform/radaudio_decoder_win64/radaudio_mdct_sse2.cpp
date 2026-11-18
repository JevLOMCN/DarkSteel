// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: radaudio_decoder_win64
// Functions: 9

// FUN_14f8d0140 @ 14f8d0140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14f8d0140(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  uVar20 = FUN_14f8d07e0();
  fVar19 = fRam0000000154e13cf4;
  fVar18 = _DAT_154e13cf0;
  fVar17 = fRam0000000154e13cec;
  fVar16 = _DAT_154e13ce8;
  if ((uVar20 & 1) != 0) {
    lVar21 = 0x30;
    if (param_4 == 1) {
      lVar21 = 0x20;
    }
    fVar4 = *(float *)((longlong)&UERAradaudio_fft_impl_::s_fft_twiddles + lVar21);
    fVar5 = *(float *)((longlong)&UERAradaudio_fft_impl_::s_fft_twiddles + lVar21 + 4);
    fVar6 = *(float *)(lVar21 + 0x154e13cc8);
    fVar7 = *(float *)(lVar21 + 0x154e13ccc);
    uVar20 = 0;
    param_3 = (param_3 & 0xfffffffffffffff0) + param_3;
    if (param_3 != 0) {
      do {
        pfVar2 = (float *)(param_1 + 0x10 + uVar20 * 4);
        pfVar3 = (float *)(param_1 + 0x50 + uVar20 * 4);
        pfVar1 = (float *)(param_1 + uVar20 * 4);
        fVar8 = *pfVar1;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        pfVar1 = (float *)(param_1 + 0x40 + uVar20 * 4);
        fVar12 = *pfVar1;
        fVar13 = pfVar1[1];
        fVar14 = pfVar1[2];
        fVar15 = pfVar1[3];
        fVar22 = *pfVar2 * fVar16 - *pfVar3 * fVar4;
        fVar23 = pfVar2[1] * fVar17 - pfVar3[1] * fVar5;
        fVar24 = pfVar2[2] * fVar18 - pfVar3[2] * fVar6;
        fVar25 = pfVar2[3] * fVar19 - pfVar3[3] * fVar7;
        fVar26 = *pfVar2 * fVar4 + *pfVar3 * fVar16;
        fVar27 = pfVar2[1] * fVar5 + pfVar3[1] * fVar17;
        fVar28 = pfVar2[2] * fVar6 + pfVar3[2] * fVar18;
        fVar29 = pfVar2[3] * fVar7 + pfVar3[3] * fVar19;
        pfVar1 = (float *)(param_1 + uVar20 * 4);
        *pfVar1 = fVar8 + fVar22;
        pfVar1[1] = fVar9 + fVar23;
        pfVar1[2] = fVar10 + fVar24;
        pfVar1[3] = fVar11 + fVar25;
        pfVar1 = (float *)(param_1 + 0x40 + uVar20 * 4);
        *pfVar1 = fVar12 + fVar26;
        pfVar1[1] = fVar13 + fVar27;
        pfVar1[2] = fVar14 + fVar28;
        pfVar1[3] = fVar15 + fVar29;
        pfVar1 = (float *)(param_1 + 0x10 + uVar20 * 4);
        *pfVar1 = fVar8 - fVar22;
        pfVar1[1] = fVar9 - fVar23;
        pfVar1[2] = fVar10 - fVar24;
        pfVar1[3] = fVar11 - fVar25;
        pfVar1 = (float *)(param_1 + 0x50 + uVar20 * 4);
        *pfVar1 = fVar12 - fVar26;
        pfVar1[1] = fVar13 - fVar27;
        pfVar1[2] = fVar14 - fVar28;
        pfVar1[3] = fVar15 - fVar29;
        uVar20 = uVar20 + 0x18 & 0xffffffffffffffe8;
      } while (uVar20 < param_3);
    }
    return 8;
  }
  return 4;
}

// FUN_14f8d0240 @ 14f8d0240

void FUN_14f8d0240(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  float **ppfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float **ppfVar17;
  longlong lVar18;
  float **ppfVar19;
  float **ppfVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  
  ppfVar1 = &UERAradaudio_fft_impl_::s_fft_twiddles + param_2;
  uVar23 = param_2 * 3;
  lVar24 = (param_2 & 0xfffffffffffffff0) + param_2;
  ppfVar20 = &UERAradaudio_fft_impl_::s_fft_twiddles + param_2 * 2;
  lVar2 = param_1 + lVar24 * 4;
  uVar25 = (~(uVar23 | 3) & 0xfffffffffffffff0) + ~(uVar23 | 3);
  lVar3 = param_1 + ((param_2 * 2 & 0xfffffffffffffff0) + param_2 * 2) * 4;
  lVar22 = (uVar23 & 0xfffffffffffffff0) + uVar23;
  lVar4 = param_1 + lVar22 * 4;
  ppfVar17 = ppfVar20;
  lVar18 = lVar4;
  ppfVar19 = ppfVar1;
  if (param_4 == 0) {
    lVar24 = lVar22;
    ppfVar17 = ppfVar20 + param_2;
    lVar18 = lVar2;
    ppfVar19 = (float **)((longlong)ppfVar1 + param_2 * 4);
  }
  uVar21 = 0;
  lVar24 = param_1 + lVar24 * 4;
  uVar23 = uVar21;
  if (param_3 != 0) {
    do {
      pfVar5 = (float *)((longlong)ppfVar1 + uVar23 * 4 + (param_2 >> 1) * 4);
      fVar54 = *pfVar5;
      fVar55 = pfVar5[1];
      fVar56 = pfVar5[2];
      fVar57 = pfVar5[3];
      pfVar5 = (float *)(lVar2 + uVar21 * 4);
      pfVar6 = (float *)(lVar4 + uVar21 * 4);
      pfVar8 = (float *)(lVar2 + 0x40 + uVar21 * 4);
      pfVar7 = (float *)((longlong)ppfVar19 + uVar23 * 4);
      fVar26 = *pfVar7;
      fVar27 = pfVar7[1];
      fVar28 = pfVar7[2];
      fVar29 = pfVar7[3];
      pfVar9 = (float *)(lVar4 + 0x40 + uVar21 * 4);
      pfVar12 = (float *)(lVar3 + uVar21 * 4);
      pfVar10 = (float *)(lVar3 + 0x40 + uVar21 * 4);
      pfVar7 = (float *)((longlong)ppfVar20 + uVar23 * 4 + param_2 * 4);
      fVar13 = *pfVar7;
      fVar14 = pfVar7[1];
      fVar15 = pfVar7[2];
      fVar16 = pfVar7[3];
      pfVar7 = (float *)(param_1 + uVar21 * 4);
      pfVar11 = (float *)(param_1 + 0x40 + uVar21 * 4);
      fVar62 = fVar54 * *pfVar5 - *pfVar8 * fVar26;
      fVar63 = fVar55 * pfVar5[1] - pfVar8[1] * fVar27;
      fVar64 = fVar56 * pfVar5[2] - pfVar8[2] * fVar28;
      fVar65 = fVar57 * pfVar5[3] - pfVar8[3] * fVar29;
      fVar58 = fVar26 * *pfVar5 + *pfVar8 * fVar54;
      fVar59 = fVar27 * pfVar5[1] + pfVar8[1] * fVar55;
      fVar60 = fVar28 * pfVar5[2] + pfVar8[2] * fVar56;
      fVar61 = fVar29 * pfVar5[3] + pfVar8[3] * fVar57;
      fVar50 = fVar26 * *pfVar6 + *pfVar9 * fVar54;
      fVar51 = fVar27 * pfVar6[1] + pfVar9[1] * fVar55;
      fVar52 = fVar28 * pfVar6[2] + pfVar9[2] * fVar56;
      fVar53 = fVar29 * pfVar6[3] + pfVar9[3] * fVar57;
      fVar30 = fVar54 * *pfVar6 - *pfVar9 * fVar26;
      fVar32 = fVar55 * pfVar6[1] - pfVar9[1] * fVar27;
      fVar34 = fVar56 * pfVar6[2] - pfVar9[2] * fVar28;
      fVar36 = fVar57 * pfVar6[3] - pfVar9[3] * fVar29;
      fVar26 = fVar50 + *pfVar10;
      fVar27 = fVar51 + pfVar10[1];
      fVar28 = fVar52 + pfVar10[2];
      fVar29 = fVar53 + pfVar10[3];
      fVar38 = *pfVar12 + fVar30;
      fVar40 = pfVar12[1] + fVar32;
      fVar42 = pfVar12[2] + fVar34;
      fVar44 = pfVar12[3] + fVar36;
      fVar30 = *pfVar12 - fVar30;
      fVar32 = pfVar12[1] - fVar32;
      fVar34 = pfVar12[2] - fVar34;
      fVar36 = pfVar12[3] - fVar36;
      fVar31 = *pfVar7 + fVar62;
      fVar33 = pfVar7[1] + fVar63;
      fVar35 = pfVar7[2] + fVar64;
      fVar37 = pfVar7[3] + fVar65;
      fVar50 = *pfVar10 - fVar50;
      fVar51 = pfVar10[1] - fVar51;
      fVar52 = pfVar10[2] - fVar52;
      fVar53 = pfVar10[3] - fVar53;
      pfVar5 = (float *)((longlong)ppfVar17 + uVar23 * 4);
      fVar54 = *pfVar5;
      fVar55 = pfVar5[1];
      fVar56 = pfVar5[2];
      fVar57 = pfVar5[3];
      fVar62 = *pfVar7 - fVar62;
      fVar63 = pfVar7[1] - fVar63;
      fVar64 = pfVar7[2] - fVar64;
      fVar65 = pfVar7[3] - fVar65;
      fVar46 = fVar13 * fVar38 - fVar54 * fVar26;
      fVar47 = fVar14 * fVar40 - fVar55 * fVar27;
      fVar48 = fVar15 * fVar42 - fVar56 * fVar28;
      fVar49 = fVar16 * fVar44 - fVar57 * fVar29;
      fVar39 = *pfVar11 + fVar58;
      fVar41 = pfVar11[1] + fVar59;
      fVar43 = pfVar11[2] + fVar60;
      fVar45 = pfVar11[3] + fVar61;
      fVar58 = *pfVar11 - fVar58;
      fVar59 = pfVar11[1] - fVar59;
      fVar60 = pfVar11[2] - fVar60;
      fVar61 = pfVar11[3] - fVar61;
      fVar26 = fVar13 * fVar26 + fVar54 * fVar38;
      fVar27 = fVar14 * fVar27 + fVar55 * fVar40;
      fVar28 = fVar15 * fVar28 + fVar56 * fVar42;
      fVar29 = fVar16 * fVar29 + fVar57 * fVar44;
      pfVar5 = (float *)(param_1 + uVar21 * 4);
      *pfVar5 = fVar31 + fVar46;
      pfVar5[1] = fVar33 + fVar47;
      pfVar5[2] = fVar35 + fVar48;
      pfVar5[3] = fVar37 + fVar49;
      pfVar5 = (float *)(param_1 + 0x40 + uVar21 * 4);
      *pfVar5 = fVar39 + fVar26;
      pfVar5[1] = fVar41 + fVar27;
      pfVar5[2] = fVar43 + fVar28;
      pfVar5[3] = fVar45 + fVar29;
      pfVar5 = (float *)(lVar3 + uVar21 * 4);
      *pfVar5 = fVar31 - fVar46;
      pfVar5[1] = fVar33 - fVar47;
      pfVar5[2] = fVar35 - fVar48;
      pfVar5[3] = fVar37 - fVar49;
      pfVar5 = (float *)(lVar3 + 0x40 + uVar21 * 4);
      *pfVar5 = fVar39 - fVar26;
      pfVar5[1] = fVar41 - fVar27;
      pfVar5[2] = fVar43 - fVar28;
      pfVar5[3] = fVar45 - fVar29;
      fVar26 = fVar54 * fVar50 - fVar13 * fVar30;
      fVar27 = fVar55 * fVar51 - fVar14 * fVar32;
      fVar28 = fVar56 * fVar52 - fVar15 * fVar34;
      fVar29 = fVar57 * fVar53 - fVar16 * fVar36;
      fVar54 = fVar13 * fVar50 + fVar54 * fVar30;
      fVar55 = fVar14 * fVar51 + fVar55 * fVar32;
      fVar56 = fVar15 * fVar52 + fVar56 * fVar34;
      fVar57 = fVar16 * fVar53 + fVar57 * fVar36;
      pfVar5 = (float *)(lVar18 + 0x40 + uVar21 * 4);
      *pfVar5 = fVar58 + fVar26;
      pfVar5[1] = fVar59 + fVar27;
      pfVar5[2] = fVar60 + fVar28;
      pfVar5[3] = fVar61 + fVar29;
      pfVar5 = (float *)(lVar18 + uVar21 * 4);
      *pfVar5 = fVar62 + fVar54;
      pfVar5[1] = fVar63 + fVar55;
      pfVar5[2] = fVar64 + fVar56;
      pfVar5[3] = fVar65 + fVar57;
      pfVar5 = (float *)(lVar24 + uVar21 * 4);
      *pfVar5 = fVar62 - fVar54;
      pfVar5[1] = fVar63 - fVar55;
      pfVar5[2] = fVar64 - fVar56;
      pfVar5[3] = fVar65 - fVar57;
      pfVar5 = (float *)(lVar24 + 0x40 + uVar21 * 4);
      *pfVar5 = fVar58 - fVar26;
      pfVar5[1] = fVar59 - fVar27;
      pfVar5[2] = fVar60 - fVar28;
      pfVar5[3] = fVar61 - fVar29;
      uVar21 = uVar21 - uVar25 & uVar25;
      uVar23 = uVar23 + 4 & param_2 - 1;
    } while (uVar21 < param_3);
  }
  return;
}

// FUN_14f8d0500 @ 14f8d0500

void FUN_14f8d0500(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  ulonglong param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  ulonglong uVar34;
  longlong lVar35;
  float *pfVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  
  uVar37 = 0;
  uVar34 = param_5 >> 1;
  if (param_5 >> 2 != 0) {
    param_3 = param_3 - (longlong)param_4;
    pfVar36 = param_4 + (uVar34 - 4);
    do {
      pfVar1 = (float *)(param_3 + (longlong)param_4);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      fVar14 = *param_4;
      fVar15 = param_4[1];
      fVar16 = param_4[2];
      fVar17 = param_4[3];
      lVar35 = uVar34 - uVar37;
      pfVar1 = (float *)(param_2 + uVar37 * 8);
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      lVar38 = (uVar37 & 0xfffffffffffffff0) + uVar37;
      pfVar1 = (float *)(param_3 + (longlong)pfVar36);
      fVar22 = *pfVar1;
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      param_4 = param_4 + 4;
      fVar26 = *pfVar36;
      fVar27 = pfVar36[1];
      fVar28 = pfVar36[2];
      fVar29 = pfVar36[3];
      pfVar36 = pfVar36 + -4;
      pfVar1 = (float *)(param_2 + -0x20 + lVar35 * 8);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar32 = pfVar1[2];
      fVar33 = pfVar1[3];
      pfVar1 = (float *)(param_2 + 0x10 + uVar37 * 8);
      fVar2 = *pfVar1;
      fVar6 = pfVar1[2];
      lVar39 = param_2 + 0x10 + uVar37 * 8;
      fVar4 = *(float *)(lVar39 + 4);
      fVar8 = *(float *)(lVar39 + 0xc);
      pfVar1 = (float *)(param_2 + -0x10 + lVar35 * 8);
      fVar3 = *pfVar1;
      fVar7 = pfVar1[2];
      lVar39 = param_2 + -0x10 + lVar35 * 8;
      fVar5 = *(float *)(lVar39 + 4);
      fVar9 = *(float *)(lVar39 + 0xc);
      lVar39 = ((lVar35 - 4U & 0xfffffffffffffff0) - uVar37) + uVar34;
      uVar37 = uVar37 + 4;
      pfVar1 = (float *)(param_1 + lVar38 * 4);
      *pfVar1 = fVar10 * fVar18 - fVar14 * fVar9;
      pfVar1[1] = fVar11 * fVar20 - fVar15 * fVar5;
      pfVar1[2] = fVar12 * fVar2 - fVar16 * fVar33;
      pfVar1[3] = fVar13 * fVar6 - fVar17 * fVar31;
      pfVar1 = (float *)(param_1 + 0x40 + lVar38 * 4);
      *pfVar1 = fVar14 * fVar18 + fVar10 * fVar9;
      pfVar1[1] = fVar15 * fVar20 + fVar11 * fVar5;
      pfVar1[2] = fVar16 * fVar2 + fVar12 * fVar33;
      pfVar1[3] = fVar17 * fVar6 + fVar13 * fVar31;
      pfVar1 = (float *)(param_1 + 0x30 + lVar39 * 4);
      *pfVar1 = fVar26 * fVar30 + fVar22 * fVar8;
      pfVar1[1] = fVar27 * fVar32 + fVar23 * fVar4;
      pfVar1[2] = fVar28 * fVar3 + fVar24 * fVar21;
      pfVar1[3] = fVar29 * fVar7 + fVar25 * fVar19;
      pfVar1 = (float *)(param_1 + -0x10 + lVar39 * 4);
      *pfVar1 = fVar22 * fVar30 - fVar26 * fVar8;
      pfVar1[1] = fVar23 * fVar32 - fVar27 * fVar4;
      pfVar1[2] = fVar24 * fVar3 - fVar28 * fVar21;
      pfVar1[3] = fVar25 * fVar7 - fVar29 * fVar19;
    } while (uVar37 < param_5 >> 2);
  }
  return;
}

// FUN_14f8d0660 @ 14f8d0660

void FUN_14f8d0660(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  float *param_5,ulonglong param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  float *pfVar37;
  float *pfVar38;
  longlong lVar39;
  
  uVar36 = 0;
  uVar34 = param_6 >> 1;
  if (param_6 >> 2 != 0) {
    param_4 = param_4 - (longlong)param_5;
    pfVar37 = (float *)(param_2 + -0x20 + uVar34 * 4);
    pfVar38 = param_5 + (uVar34 - 4);
    do {
      fVar2 = *pfVar38;
      fVar3 = pfVar38[1];
      fVar4 = pfVar38[2];
      fVar5 = pfVar38[3];
      pfVar1 = (float *)((longlong)pfVar38 + param_4);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      fVar10 = *param_5;
      fVar11 = param_5[1];
      fVar12 = param_5[2];
      fVar13 = param_5[3];
      lVar39 = (uVar36 & 0xfffffffffffffff0) + uVar36;
      pfVar1 = (float *)((longlong)param_5 + param_4);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      param_5 = param_5 + 4;
      pfVar1 = (float *)(param_3 + 0x40 + lVar39 * 4);
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      lVar35 = (((uVar34 - uVar36) - 4 & 0xfffffffffffffff0) - uVar36) + uVar34;
      pfVar38 = pfVar38 + -4;
      pfVar1 = (float *)(param_3 + lVar39 * 4);
      fVar22 = *pfVar1;
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      pfVar1 = (float *)(param_3 + -0x10 + lVar35 * 4);
      fVar26 = *pfVar1;
      fVar27 = pfVar1[1];
      fVar28 = pfVar1[2];
      fVar29 = pfVar1[3];
      pfVar1 = (float *)(param_3 + 0x30 + lVar35 * 4);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar32 = pfVar1[2];
      fVar33 = pfVar1[3];
      pfVar1 = (float *)(param_1 + uVar36 * 8);
      *pfVar1 = fVar10 * fVar22 + fVar18 * fVar14;
      pfVar1[1] = fVar5 * fVar33 - fVar29 * fVar9;
      pfVar1[2] = fVar11 * fVar23 + fVar19 * fVar15;
      pfVar1[3] = fVar4 * fVar32 - fVar28 * fVar8;
      pfVar1 = (float *)(param_1 + 0x10 + uVar36 * 8);
      *pfVar1 = fVar12 * fVar24 + fVar20 * fVar16;
      pfVar1[1] = fVar3 * fVar31 - fVar27 * fVar7;
      pfVar1[2] = fVar13 * fVar25 + fVar21 * fVar17;
      pfVar1[3] = fVar2 * fVar30 - fVar26 * fVar6;
      uVar36 = uVar36 + 4;
      *pfVar37 = fVar30 * fVar6 + fVar2 * fVar26;
      pfVar37[1] = fVar13 * fVar21 - fVar25 * fVar17;
      pfVar37[2] = fVar31 * fVar7 + fVar3 * fVar27;
      pfVar37[3] = fVar12 * fVar20 - fVar24 * fVar16;
      pfVar37[4] = fVar32 * fVar8 + fVar4 * fVar28;
      pfVar37[5] = fVar11 * fVar19 - fVar23 * fVar15;
      pfVar37[6] = fVar33 * fVar9 + fVar5 * fVar29;
      pfVar37[7] = fVar10 * fVar18 - fVar22 * fVar14;
      pfVar37 = pfVar37 + -8;
    } while (uVar36 < param_6 >> 2);
  }
  return;
}

// FUN_14f8d07e0 @ 14f8d07e0

longlong FUN_14f8d07e0(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  lVar10 = 0;
  if (param_3 != 0) {
    for (; (param_3 >> lVar10 & 1) == 0; lVar10 = lVar10 + 1) {
    }
  }
  param_3 = param_3 >> 2;
  lVar17 = (param_3 & 0xfffffffffffffff0) + param_3;
  lVar15 = (param_3 * 2 & 0xfffffffffffffff0) + param_3 * 2;
  lVar1 = param_1 + lVar17 * 4;
  lVar2 = param_1 + lVar15 * 4;
  lVar15 = param_2 + lVar15 * 4;
  lVar13 = (param_3 * 3 & 0xfffffffffffffff0) + param_3 * 3;
  lVar11 = lVar17;
  if (param_4 != 1) {
    lVar11 = lVar13;
  }
  lVar3 = param_1 + lVar13 * 4;
  if (param_4 != 1) {
    lVar13 = lVar17;
  }
  uVar16 = 0;
  lVar11 = param_2 + lVar11 * 4;
  lVar13 = param_2 + lVar13 * 4;
  if (param_3 != 0) {
    do {
      uVar12 = (ulonglong)
               (*(ushort *)((longlong)&UERAradaudio_fft_impl_::s_bit_reverse + uVar16 * 2) >>
               (9U - (char)lVar10 & 0x3f));
      lVar14 = (uVar16 & 0xfffffffffffffff0) + uVar16;
      lVar17 = (uVar12 & 0xfffffffffffffff0) + uVar12;
      uVar16 = uVar16 + 4;
      pfVar8 = (float *)(lVar11 + lVar17 * 4);
      pfVar9 = (float *)(lVar15 + lVar17 * 4);
      pfVar6 = (float *)(lVar15 + 0x40 + lVar17 * 4);
      pfVar7 = (float *)(lVar11 + 0x40 + lVar17 * 4);
      pfVar4 = (float *)(lVar13 + lVar17 * 4);
      pfVar5 = (float *)(param_2 + lVar17 * 4);
      fVar34 = *pfVar4 - *pfVar8;
      fVar35 = pfVar4[1] - pfVar8[1];
      fVar36 = pfVar4[2] - pfVar8[2];
      fVar37 = pfVar4[3] - pfVar8[3];
      fVar22 = *pfVar4 + *pfVar8;
      fVar23 = pfVar4[1] + pfVar8[1];
      fVar24 = pfVar4[2] + pfVar8[2];
      fVar25 = pfVar4[3] + pfVar8[3];
      fVar18 = *pfVar5 + *pfVar9;
      fVar19 = pfVar5[1] + pfVar9[1];
      fVar20 = pfVar5[2] + pfVar9[2];
      fVar21 = pfVar5[3] + pfVar9[3];
      fVar42 = *pfVar5 - *pfVar9;
      fVar43 = pfVar5[1] - pfVar9[1];
      fVar44 = pfVar5[2] - pfVar9[2];
      fVar45 = pfVar5[3] - pfVar9[3];
      pfVar4 = (float *)(lVar13 + 0x40 + lVar17 * 4);
      pfVar5 = (float *)(param_2 + 0x40 + lVar17 * 4);
      fVar26 = *pfVar4 + *pfVar7;
      fVar27 = pfVar4[1] + pfVar7[1];
      fVar28 = pfVar4[2] + pfVar7[2];
      fVar29 = pfVar4[3] + pfVar7[3];
      fVar30 = *pfVar4 - *pfVar7;
      fVar31 = pfVar4[1] - pfVar7[1];
      fVar32 = pfVar4[2] - pfVar7[2];
      fVar33 = pfVar4[3] - pfVar7[3];
      fVar38 = *pfVar6 + *pfVar5;
      fVar39 = pfVar6[1] + pfVar5[1];
      fVar40 = pfVar6[2] + pfVar5[2];
      fVar41 = pfVar6[3] + pfVar5[3];
      fVar46 = *pfVar5 - *pfVar6;
      fVar47 = pfVar5[1] - pfVar6[1];
      fVar48 = pfVar5[2] - pfVar6[2];
      fVar49 = pfVar5[3] - pfVar6[3];
      pfVar4 = (float *)(param_1 + lVar14 * 4);
      *pfVar4 = fVar18 + fVar22;
      pfVar4[1] = fVar42 + fVar30;
      pfVar4[2] = fVar18 - fVar22;
      pfVar4[3] = fVar42 - fVar30;
      pfVar4 = (float *)(param_1 + 0x40 + lVar14 * 4);
      *pfVar4 = fVar38 + fVar26;
      pfVar4[1] = fVar46 - fVar34;
      pfVar4[2] = fVar38 - fVar26;
      pfVar4[3] = fVar46 + fVar34;
      pfVar4 = (float *)(lVar2 + lVar14 * 4);
      *pfVar4 = fVar19 + fVar23;
      pfVar4[1] = fVar43 + fVar31;
      pfVar4[2] = fVar19 - fVar23;
      pfVar4[3] = fVar43 - fVar31;
      pfVar4 = (float *)(lVar2 + 0x40 + lVar14 * 4);
      *pfVar4 = fVar39 + fVar27;
      pfVar4[1] = fVar47 - fVar35;
      pfVar4[2] = fVar39 - fVar27;
      pfVar4[3] = fVar47 + fVar35;
      pfVar4 = (float *)(lVar1 + lVar14 * 4);
      *pfVar4 = fVar20 + fVar24;
      pfVar4[1] = fVar44 + fVar32;
      pfVar4[2] = fVar20 - fVar24;
      pfVar4[3] = fVar44 - fVar32;
      pfVar4 = (float *)(lVar1 + 0x40 + lVar14 * 4);
      *pfVar4 = fVar40 + fVar28;
      pfVar4[1] = fVar48 - fVar36;
      pfVar4[2] = fVar40 - fVar28;
      pfVar4[3] = fVar48 + fVar36;
      pfVar4 = (float *)(lVar3 + lVar14 * 4);
      *pfVar4 = fVar21 + fVar25;
      pfVar4[1] = fVar45 + fVar33;
      pfVar4[2] = fVar21 - fVar25;
      pfVar4[3] = fVar45 - fVar33;
      pfVar4 = (float *)(lVar3 + 0x40 + lVar14 * 4);
      *pfVar4 = fVar41 + fVar29;
      pfVar4[1] = fVar49 - fVar37;
      pfVar4[2] = fVar41 - fVar29;
      pfVar4[3] = fVar49 + fVar37;
    } while (uVar16 < param_3);
  }
  return lVar10;
}

// FUN_14f8d0a40 @ 14f8d0a40

void FUN_14f8d0a40(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = param_3[1];
  fVar10 = param_3[2];
  fVar11 = param_3[3];
  *param_1 = fVar1 + *param_3;
  param_1[1] = fVar2 + fVar9;
  param_1[2] = fVar3 + fVar10;
  param_1[3] = fVar4 + fVar11;
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  fVar11 = param_4[3];
  *param_2 = *param_4 + fVar5;
  param_2[1] = fVar9 + fVar6;
  param_2[2] = fVar10 + fVar7;
  param_2[3] = fVar11 + fVar8;
  *param_3 = fVar1 - *param_3;
  param_3[1] = fVar2 - param_3[1];
  param_3[2] = fVar3 - param_3[2];
  param_3[3] = fVar4 - param_3[3];
  *param_4 = fVar5 - *param_4;
  param_4[1] = fVar6 - param_4[1];
  param_4[2] = fVar7 - param_4[2];
  param_4[3] = fVar8 - param_4[3];
  fVar1 = *param_5;
  fVar2 = param_5[1];
  fVar3 = param_5[2];
  fVar4 = param_5[3];
  fVar5 = *param_6;
  fVar6 = param_6[1];
  fVar7 = param_6[2];
  fVar8 = param_6[3];
  fVar9 = param_7[1];
  fVar10 = param_7[2];
  fVar11 = param_7[3];
  *param_5 = fVar1 + *param_7;
  param_5[1] = fVar2 + fVar9;
  param_5[2] = fVar3 + fVar10;
  param_5[3] = fVar4 + fVar11;
  fVar9 = param_8[1];
  fVar10 = param_8[2];
  fVar11 = param_8[3];
  *param_6 = fVar5 + *param_8;
  param_6[1] = fVar6 + fVar9;
  param_6[2] = fVar7 + fVar10;
  param_6[3] = fVar8 + fVar11;
  *param_7 = fVar1 - *param_7;
  param_7[1] = fVar2 - param_7[1];
  param_7[2] = fVar3 - param_7[2];
  param_7[3] = fVar4 - param_7[3];
  *param_8 = fVar5 - *param_8;
  param_8[1] = fVar6 - param_8[1];
  param_8[2] = fVar7 - param_8[2];
  param_8[3] = fVar8 - param_8[3];
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = param_5[1];
  fVar10 = param_5[2];
  fVar11 = param_5[3];
  *param_1 = fVar1 + *param_5;
  param_1[1] = fVar2 + fVar9;
  param_1[2] = fVar3 + fVar10;
  param_1[3] = fVar4 + fVar11;
  fVar9 = param_6[1];
  fVar10 = param_6[2];
  fVar11 = param_6[3];
  *param_2 = fVar5 + *param_6;
  param_2[1] = fVar6 + fVar9;
  param_2[2] = fVar7 + fVar10;
  param_2[3] = fVar8 + fVar11;
  *param_5 = fVar1 - *param_5;
  param_5[1] = fVar2 - param_5[1];
  param_5[2] = fVar3 - param_5[2];
  param_5[3] = fVar4 - param_5[3];
  *param_6 = fVar5 - *param_6;
  param_6[1] = fVar6 - param_6[1];
  param_6[2] = fVar7 - param_6[2];
  param_6[3] = fVar8 - param_6[3];
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = *param_8;
  fVar6 = param_8[1];
  fVar7 = param_8[2];
  fVar8 = param_8[3];
  fVar9 = *param_4;
  fVar10 = param_4[1];
  fVar11 = param_4[2];
  fVar12 = param_4[3];
  fVar13 = *param_7;
  fVar14 = param_7[1];
  fVar15 = param_7[2];
  fVar16 = param_7[3];
  *param_3 = fVar5 + fVar1;
  param_3[1] = fVar6 + fVar2;
  param_3[2] = fVar7 + fVar3;
  param_3[3] = fVar8 + fVar4;
  *param_4 = fVar9 - fVar13;
  param_4[1] = fVar10 - fVar14;
  param_4[2] = fVar11 - fVar15;
  param_4[3] = fVar12 - fVar16;
  *param_7 = fVar1 - fVar5;
  param_7[1] = fVar2 - fVar6;
  param_7[2] = fVar3 - fVar7;
  param_7[3] = fVar4 - fVar8;
  *param_8 = fVar13 + fVar9;
  param_8[1] = fVar14 + fVar10;
  param_8[2] = fVar15 + fVar11;
  param_8[3] = fVar16 + fVar12;
  return;
}

// FUN_14f8d0b20 @ 14f8d0b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f8d0b20(longlong param_1,ulonglong param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  fVar19 = fRam0000000154e13cf4;
  fVar18 = _DAT_154e13cf0;
  fVar17 = fRam0000000154e13cec;
  fVar16 = _DAT_154e13ce8;
  param_2 = (param_2 & 0xfffffffffffffff0) + param_2;
  lVar21 = 0x30;
  if (param_3 == 1) {
    lVar21 = 0x20;
  }
  fVar4 = *(float *)((longlong)&UERAradaudio_fft_impl_::s_fft_twiddles + lVar21);
  fVar5 = *(float *)((longlong)&UERAradaudio_fft_impl_::s_fft_twiddles + lVar21 + 4);
  fVar6 = *(float *)(lVar21 + 0x154e13cc8);
  fVar7 = *(float *)(lVar21 + 0x154e13ccc);
  uVar20 = 0;
  if (param_2 != 0) {
    do {
      pfVar2 = (float *)(param_1 + 0x10 + uVar20 * 4);
      pfVar3 = (float *)(param_1 + 0x50 + uVar20 * 4);
      pfVar1 = (float *)(param_1 + uVar20 * 4);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar1 = (float *)(param_1 + 0x40 + uVar20 * 4);
      fVar12 = *pfVar1;
      fVar13 = pfVar1[1];
      fVar14 = pfVar1[2];
      fVar15 = pfVar1[3];
      fVar22 = *pfVar2 * fVar16 - *pfVar3 * fVar4;
      fVar23 = pfVar2[1] * fVar17 - pfVar3[1] * fVar5;
      fVar24 = pfVar2[2] * fVar18 - pfVar3[2] * fVar6;
      fVar25 = pfVar2[3] * fVar19 - pfVar3[3] * fVar7;
      fVar26 = *pfVar2 * fVar4 + *pfVar3 * fVar16;
      fVar27 = pfVar2[1] * fVar5 + pfVar3[1] * fVar17;
      fVar28 = pfVar2[2] * fVar6 + pfVar3[2] * fVar18;
      fVar29 = pfVar2[3] * fVar7 + pfVar3[3] * fVar19;
      pfVar1 = (float *)(param_1 + uVar20 * 4);
      *pfVar1 = fVar8 + fVar22;
      pfVar1[1] = fVar9 + fVar23;
      pfVar1[2] = fVar10 + fVar24;
      pfVar1[3] = fVar11 + fVar25;
      pfVar1 = (float *)(param_1 + 0x40 + uVar20 * 4);
      *pfVar1 = fVar12 + fVar26;
      pfVar1[1] = fVar13 + fVar27;
      pfVar1[2] = fVar14 + fVar28;
      pfVar1[3] = fVar15 + fVar29;
      pfVar1 = (float *)(param_1 + 0x10 + uVar20 * 4);
      *pfVar1 = fVar8 - fVar22;
      pfVar1[1] = fVar9 - fVar23;
      pfVar1[2] = fVar10 - fVar24;
      pfVar1[3] = fVar11 - fVar25;
      pfVar1 = (float *)(param_1 + 0x50 + uVar20 * 4);
      *pfVar1 = fVar12 - fVar26;
      pfVar1[1] = fVar13 - fVar27;
      pfVar1[2] = fVar14 - fVar28;
      pfVar1[3] = fVar15 - fVar29;
      uVar20 = uVar20 + 0x18 & 0xffffffffffffffe8;
    } while (uVar20 < param_2);
  }
  return;
}

// DefaultBitReverse @ 14f8d0cc0

/* public: __cdecl UERAradaudio_fft_impl_::DefaultBitReverse::DefaultBitReverse(unsigned __int64)
   __ptr64 */

DefaultBitReverse * __thiscall
UERAradaudio_fft_impl_::DefaultBitReverse::DefaultBitReverse
          (DefaultBitReverse *this,__uint64 param_1)

{
  *(__uint64 *)this = 9 - param_1;
  return this;
}

// operator() @ 14f8d0d60

/* public: unsigned __int64 __cdecl UERAradaudio_fft_impl_::DefaultBitReverse::operator()(unsigned
   __int64)const __ptr64 */

__uint64 __thiscall
UERAradaudio_fft_impl_::DefaultBitReverse::operator()(DefaultBitReverse *this,__uint64 param_1)

{
  return (ulonglong)(*(ushort *)((longlong)&s_bit_reverse + param_1 * 2) >> ((byte)*this & 0x3f));
}


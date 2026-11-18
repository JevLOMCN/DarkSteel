// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: radaudio_decoder_win64
// Functions: 3

// UERARadAudioInterleave2ChToS16_1 @ 14f8cba50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
UERARadAudioInterleave2ChToS16_1
          (undefined1 (*param_1) [16],float *param_2,float *param_3,uint param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float *pfVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar7 = ___xmm_c7000000c7000000c7000000c7000000;
  fVar6 = _UNK_15352bb9c;
  fVar5 = _UNK_15352bb98;
  fVar4 = _UNK_15352bb94;
  fVar3 = ___xmm_47000000470000004700000047000000;
  auVar2 = ___xmm_46fffe0046fffe0046fffe0046fffe00;
  if (param_4 < 8) {
    return 0;
  }
  pauVar1 = (undefined1 (*) [16])(*param_1 + (ulonglong)(param_4 * 2) * 2);
  pfVar8 = param_2;
  pfVar9 = param_3;
  while( true ) {
    do {
      auVar21._0_4_ = fVar3 * *pfVar9;
      auVar21._4_4_ = fVar4 * pfVar9[1];
      auVar21._8_4_ = fVar5 * pfVar9[2];
      auVar21._12_4_ = fVar6 * pfVar9[3];
      auVar10._0_4_ = pfVar9[4] * fVar3;
      auVar10._4_4_ = pfVar9[5] * fVar4;
      auVar10._8_4_ = pfVar9[6] * fVar5;
      auVar10._12_4_ = pfVar9[7] * fVar6;
      auVar17 = maxps(auVar21,auVar7);
      auVar10 = maxps(auVar10,auVar7);
      auVar17 = minps(auVar17,auVar2);
      auVar10 = minps(auVar10,auVar2);
      auVar20._0_4_ = (int)auVar17._0_4_;
      auVar20._4_4_ = (int)auVar17._4_4_;
      auVar20._8_4_ = (int)auVar17._8_4_;
      auVar20._12_4_ = (int)auVar17._12_4_;
      auVar17._0_4_ = (int)auVar10._0_4_;
      auVar17._4_4_ = (int)auVar10._4_4_;
      auVar17._8_4_ = (int)auVar10._8_4_;
      auVar17._12_4_ = (int)auVar10._12_4_;
      auVar18._0_4_ = pfVar8[4] * fVar3;
      auVar18._4_4_ = pfVar8[5] * fVar4;
      auVar18._8_4_ = pfVar8[6] * fVar5;
      auVar18._12_4_ = pfVar8[7] * fVar6;
      auVar21 = packssdw(auVar20,auVar17);
      auVar10 = maxps(auVar18,auVar7);
      auVar11._0_4_ = *pfVar8 * fVar3;
      auVar11._4_4_ = pfVar8[1] * fVar4;
      auVar11._8_4_ = pfVar8[2] * fVar5;
      auVar11._12_4_ = pfVar8[3] * fVar6;
      auVar17 = minps(auVar10,auVar2);
      auVar10 = maxps(auVar11,auVar7);
      auVar10 = minps(auVar10,auVar2);
      auVar19._0_4_ = (int)auVar10._0_4_;
      auVar19._4_4_ = (int)auVar10._4_4_;
      auVar19._8_4_ = (int)auVar10._8_4_;
      auVar19._12_4_ = (int)auVar10._12_4_;
      auVar12._0_4_ = (int)auVar17._0_4_;
      auVar12._4_4_ = (int)auVar17._4_4_;
      auVar12._8_4_ = (int)auVar17._8_4_;
      auVar12._12_4_ = (int)auVar17._12_4_;
      auVar10 = packssdw(auVar19,auVar12);
      auVar16._0_12_ = auVar10._0_12_;
      auVar16._12_2_ = auVar10._6_2_;
      auVar16._14_2_ = auVar21._6_2_;
      auVar15._12_4_ = auVar16._12_4_;
      auVar15._0_10_ = auVar10._0_10_;
      auVar15._10_2_ = auVar21._4_2_;
      auVar14._10_6_ = auVar15._10_6_;
      auVar14._0_8_ = auVar10._0_8_;
      auVar14._8_2_ = auVar10._4_2_;
      auVar13._8_8_ = auVar14._8_8_;
      auVar13._6_2_ = auVar21._2_2_;
      auVar13._4_2_ = auVar10._2_2_;
      auVar13._0_2_ = auVar10._0_2_;
      auVar13._2_2_ = auVar21._0_2_;
      *param_1 = auVar13;
      *(short *)param_1[1] = auVar10._8_2_;
      *(short *)(param_1[1] + 2) = auVar21._8_2_;
      *(short *)(param_1[1] + 4) = auVar10._10_2_;
      *(short *)(param_1[1] + 6) = auVar21._10_2_;
      *(short *)(param_1[1] + 8) = auVar10._12_2_;
      *(short *)(param_1[1] + 10) = auVar21._12_2_;
      *(short *)(param_1[1] + 0xc) = auVar10._14_2_;
      *(short *)(param_1[1] + 0xe) = auVar21._14_2_;
      param_1 = param_1 + 2;
      pfVar8 = pfVar8 + 8;
      pfVar9 = pfVar9 + 8;
    } while (param_1 <= pauVar1 + -2);
    if (param_1 == pauVar1) break;
    pfVar8 = param_2 + ((ulonglong)param_4 - 8);
    pfVar9 = param_3 + ((ulonglong)param_4 - 8);
    param_1 = pauVar1 + -2;
  }
  return 1;
}

// UERARadAudioInterleave4ChToS16_1 @ 14f8cbb50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
UERARadAudioInterleave4ChToS16_1
          (undefined1 (*param_1) [16],float *param_2,float *param_3,float *param_4,float *param_5,
          uint param_6)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  auVar11 = ___xmm_c7000000c7000000c7000000c7000000;
  fVar10 = _UNK_15352bb9c;
  fVar9 = _UNK_15352bb98;
  fVar8 = _UNK_15352bb94;
  fVar7 = ___xmm_47000000470000004700000047000000;
  auVar6 = ___xmm_46fffe0046fffe0046fffe0046fffe00;
  uVar12 = (ulonglong)param_6;
  if (param_6 < 8) {
    return 0;
  }
  pauVar2 = (undefined1 (*) [16])(*param_1 + (ulonglong)(param_6 * 4) * 2);
  pfVar13 = param_2;
  pfVar14 = param_3;
  pfVar15 = param_4;
  pfVar16 = param_5;
  while( true ) {
    do {
      auVar41._0_4_ = fVar7 * *pfVar16;
      auVar41._4_4_ = fVar8 * pfVar16[1];
      auVar41._8_4_ = fVar9 * pfVar16[2];
      auVar41._12_4_ = fVar10 * pfVar16[3];
      pfVar1 = pfVar16 + 4;
      pfVar3 = pfVar16 + 5;
      pfVar4 = pfVar16 + 6;
      pfVar5 = pfVar16 + 7;
      pfVar16 = pfVar16 + 8;
      auVar35._0_4_ = *pfVar1 * fVar7;
      auVar35._4_4_ = *pfVar3 * fVar8;
      auVar35._8_4_ = *pfVar4 * fVar9;
      auVar35._12_4_ = *pfVar5 * fVar10;
      auVar27 = maxps(auVar41,auVar11);
      auVar17 = maxps(auVar35,auVar11);
      auVar27 = minps(auVar27,auVar6);
      auVar17 = minps(auVar17,auVar6);
      auVar40._0_4_ = (int)auVar27._0_4_;
      auVar40._4_4_ = (int)auVar27._4_4_;
      auVar40._8_4_ = (int)auVar27._8_4_;
      auVar40._12_4_ = (int)auVar27._12_4_;
      auVar37._0_4_ = (int)auVar17._0_4_;
      auVar37._4_4_ = (int)auVar17._4_4_;
      auVar37._8_4_ = (int)auVar17._8_4_;
      auVar37._12_4_ = (int)auVar17._12_4_;
      auVar41 = packssdw(auVar40,auVar37);
      auVar28._0_4_ = fVar7 * *pfVar15;
      auVar28._4_4_ = fVar8 * pfVar15[1];
      auVar28._8_4_ = fVar9 * pfVar15[2];
      auVar28._12_4_ = fVar10 * pfVar15[3];
      auVar39._0_4_ = pfVar15[4] * fVar7;
      auVar39._4_4_ = pfVar15[5] * fVar8;
      auVar39._8_4_ = pfVar15[6] * fVar9;
      auVar39._12_4_ = pfVar15[7] * fVar10;
      auVar27 = maxps(auVar28,auVar11);
      auVar17 = maxps(auVar39,auVar11);
      auVar27 = minps(auVar27,auVar6);
      auVar17 = minps(auVar17,auVar6);
      auVar38._0_4_ = (int)auVar27._0_4_;
      auVar38._4_4_ = (int)auVar27._4_4_;
      auVar38._8_4_ = (int)auVar27._8_4_;
      auVar38._12_4_ = (int)auVar27._12_4_;
      auVar18._0_4_ = (int)auVar17._0_4_;
      auVar18._4_4_ = (int)auVar17._4_4_;
      auVar18._8_4_ = (int)auVar17._8_4_;
      auVar18._12_4_ = (int)auVar17._12_4_;
      auVar39 = packssdw(auVar38,auVar18);
      auVar29._0_4_ = fVar7 * *pfVar14;
      auVar29._4_4_ = fVar8 * pfVar14[1];
      auVar29._8_4_ = fVar9 * pfVar14[2];
      auVar29._12_4_ = fVar10 * pfVar14[3];
      auVar19._0_4_ = pfVar14[4] * fVar7;
      auVar19._4_4_ = pfVar14[5] * fVar8;
      auVar19._8_4_ = pfVar14[6] * fVar9;
      auVar19._12_4_ = pfVar14[7] * fVar10;
      auVar27 = maxps(auVar29,auVar11);
      auVar17 = maxps(auVar19,auVar11);
      auVar27 = minps(auVar27,auVar6);
      auVar17 = minps(auVar17,auVar6);
      auVar36._0_4_ = (int)auVar27._0_4_;
      auVar36._4_4_ = (int)auVar27._4_4_;
      auVar36._8_4_ = (int)auVar27._8_4_;
      auVar36._12_4_ = (int)auVar27._12_4_;
      auVar20._0_4_ = (int)auVar17._0_4_;
      auVar20._4_4_ = (int)auVar17._4_4_;
      auVar20._8_4_ = (int)auVar17._8_4_;
      auVar20._12_4_ = (int)auVar17._12_4_;
      auVar30._0_4_ = pfVar13[4] * fVar7;
      auVar30._4_4_ = pfVar13[5] * fVar8;
      auVar30._8_4_ = pfVar13[6] * fVar9;
      auVar30._12_4_ = pfVar13[7] * fVar10;
      auVar37 = packssdw(auVar36,auVar20);
      auVar17 = maxps(auVar30,auVar11);
      auVar21._0_4_ = *pfVar13 * fVar7;
      auVar21._4_4_ = pfVar13[1] * fVar8;
      auVar21._8_4_ = pfVar13[2] * fVar9;
      auVar21._12_4_ = pfVar13[3] * fVar10;
      auVar27 = minps(auVar17,auVar6);
      auVar17 = maxps(auVar21,auVar11);
      auVar17 = minps(auVar17,auVar6);
      auVar34._0_4_ = (int)auVar17._0_4_;
      auVar34._4_4_ = (int)auVar17._4_4_;
      auVar34._8_4_ = (int)auVar17._8_4_;
      auVar34._12_4_ = (int)auVar17._12_4_;
      auVar22._0_4_ = (int)auVar27._0_4_;
      auVar22._4_4_ = (int)auVar27._4_4_;
      auVar22._8_4_ = (int)auVar27._8_4_;
      auVar22._12_4_ = (int)auVar27._12_4_;
      auVar35 = packssdw(auVar34,auVar22);
      auVar33._0_12_ = auVar35._0_12_;
      auVar33._12_2_ = auVar35._6_2_;
      auVar33._14_2_ = auVar39._6_2_;
      auVar32._12_4_ = auVar33._12_4_;
      auVar32._0_10_ = auVar35._0_10_;
      auVar32._10_2_ = auVar39._4_2_;
      auVar31._10_6_ = auVar32._10_6_;
      auVar31._0_8_ = auVar35._0_8_;
      auVar31._8_2_ = auVar35._4_2_;
      auVar27._2_8_ = auVar31._8_8_;
      auVar27._0_2_ = auVar39._2_2_;
      auVar27._10_6_ = 0;
      auVar17._12_4_ = 0;
      auVar17._0_12_ = SUB1612(auVar27 << 0x30,4);
      auVar17 = auVar17 << 0x20;
      auVar26._0_12_ = auVar17._0_12_;
      auVar26._12_2_ = auVar39._2_2_;
      auVar26._14_2_ = auVar41._2_2_;
      auVar25._12_4_ = auVar26._12_4_;
      auVar25._0_10_ = auVar17._0_10_;
      auVar25._10_2_ = auVar37._2_2_;
      auVar24._10_6_ = auVar25._10_6_;
      auVar24._0_8_ = auVar17._0_8_;
      auVar24._8_2_ = auVar35._2_2_;
      auVar23._8_8_ = auVar24._8_8_;
      auVar23._6_2_ = auVar41._0_2_;
      auVar23._4_2_ = auVar39._0_2_;
      auVar23._2_2_ = auVar37._0_2_;
      auVar23._0_2_ = auVar35._0_2_;
      *param_1 = auVar23;
      *(short *)param_1[1] = auVar35._4_2_;
      *(short *)(param_1[1] + 2) = auVar37._4_2_;
      *(short *)(param_1[1] + 4) = auVar39._4_2_;
      *(short *)(param_1[1] + 6) = auVar41._4_2_;
      *(short *)(param_1[1] + 8) = auVar35._6_2_;
      *(short *)(param_1[1] + 10) = auVar37._6_2_;
      *(short *)(param_1[1] + 0xc) = auVar39._6_2_;
      *(short *)(param_1[1] + 0xe) = auVar41._6_2_;
      *(short *)param_1[2] = auVar35._8_2_;
      *(short *)(param_1[2] + 2) = auVar37._8_2_;
      *(short *)(param_1[2] + 4) = auVar39._8_2_;
      *(short *)(param_1[2] + 6) = auVar41._8_2_;
      *(short *)(param_1[2] + 8) = auVar35._10_2_;
      *(short *)(param_1[2] + 10) = auVar37._10_2_;
      *(short *)(param_1[2] + 0xc) = auVar39._10_2_;
      *(short *)(param_1[2] + 0xe) = auVar41._10_2_;
      *(short *)param_1[3] = auVar35._12_2_;
      *(short *)(param_1[3] + 2) = auVar37._12_2_;
      *(short *)(param_1[3] + 4) = auVar39._12_2_;
      *(short *)(param_1[3] + 6) = auVar41._12_2_;
      *(short *)(param_1[3] + 8) = auVar35._14_2_;
      *(short *)(param_1[3] + 10) = auVar37._14_2_;
      *(short *)(param_1[3] + 0xc) = auVar39._14_2_;
      *(short *)(param_1[3] + 0xe) = auVar41._14_2_;
      param_1 = param_1 + 4;
      pfVar13 = pfVar13 + 8;
      pfVar14 = pfVar14 + 8;
      pfVar15 = pfVar15 + 8;
    } while (param_1 <= pauVar2 + -4);
    if (param_1 == pauVar2) break;
    pfVar13 = param_2 + (uVar12 - 8);
    pfVar14 = param_3 + (uVar12 - 8);
    pfVar15 = param_4 + (uVar12 - 8);
    pfVar16 = param_5 + (uVar12 - 8);
    param_1 = pauVar2 + -4;
  }
  return 1;
}

// UERARadAudioInterleave_1 @ 14f8cbd40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UERARadAudioInterleave_1
               (undefined1 (*param_1) [16],longlong *param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  uint uVar17;
  longlong lVar18;
  float *pfVar19;
  float *pfVar20;
  longlong *plVar21;
  float *pfVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  auVar15 = ___xmm_c7000000c7000000c7000000c7000000;
  fVar4 = _UNK_15352bb9c;
  fVar13 = _UNK_15352bb98;
  fVar12 = _UNK_15352bb94;
  fVar11 = ___xmm_47000000470000004700000047000000;
  auVar14 = ___xmm_46fffe0046fffe0046fffe0046fffe00;
  uVar26 = (ulonglong)param_4;
  if (param_3 == 1) {
    pfVar3 = (float *)*param_2;
    if (7 < param_4) {
      pauVar2 = (undefined1 (*) [16])(*param_1 + uVar26 * 2);
      pfVar19 = pfVar3;
      while( true ) {
        do {
          auVar43._0_4_ = fVar11 * *pfVar19;
          auVar43._4_4_ = fVar12 * pfVar19[1];
          auVar43._8_4_ = fVar13 * pfVar19[2];
          auVar43._12_4_ = fVar4 * pfVar19[3];
          auVar29._0_4_ = pfVar19[4] * fVar11;
          auVar29._4_4_ = pfVar19[5] * fVar12;
          auVar29._8_4_ = pfVar19[6] * fVar13;
          auVar29._12_4_ = pfVar19[7] * fVar4;
          auVar38 = maxps(auVar43,auVar15);
          auVar29 = maxps(auVar29,auVar15);
          auVar38 = minps(auVar38,auVar14);
          auVar29 = minps(auVar29,auVar14);
          auVar41._0_4_ = (int)auVar38._0_4_;
          auVar41._4_4_ = (int)auVar38._4_4_;
          auVar41._8_4_ = (int)auVar38._8_4_;
          auVar41._12_4_ = (int)auVar38._12_4_;
          auVar38._0_4_ = (int)auVar29._0_4_;
          auVar38._4_4_ = (int)auVar29._4_4_;
          auVar38._8_4_ = (int)auVar29._8_4_;
          auVar38._12_4_ = (int)auVar29._12_4_;
          auVar29 = packssdw(auVar41,auVar38);
          *param_1 = auVar29;
          param_1 = param_1 + 1;
          pfVar19 = pfVar19 + 8;
        } while (param_1 <= pauVar2 + -1);
        if (param_1 == pauVar2) break;
        pfVar19 = pfVar3 + (uVar26 - 8);
        param_1 = pauVar2 + -1;
      }
      return;
    }
  }
  else if (param_3 == 2) {
    pfVar3 = (float *)param_2[1];
    pfVar19 = (float *)*param_2;
    if (7 < param_4) {
      pauVar2 = (undefined1 (*) [16])(*param_1 + (ulonglong)(param_4 * 2) * 2);
      pfVar20 = pfVar3;
      pfVar22 = pfVar19;
      while( true ) {
        do {
          fVar27 = *pfVar20;
          pfVar5 = pfVar20 + 1;
          pfVar6 = pfVar20 + 2;
          pfVar7 = pfVar20 + 3;
          pfVar1 = pfVar20 + 4;
          pfVar8 = pfVar20 + 5;
          pfVar9 = pfVar20 + 6;
          pfVar10 = pfVar20 + 7;
          pfVar20 = pfVar20 + 8;
          auVar28._0_4_ = fVar27 * fVar11;
          auVar28._4_4_ = *pfVar5 * fVar12;
          auVar28._8_4_ = *pfVar6 * fVar13;
          auVar28._12_4_ = *pfVar7 * fVar4;
          auVar37._0_4_ = *pfVar1 * fVar11;
          auVar37._4_4_ = *pfVar8 * fVar12;
          auVar37._8_4_ = *pfVar9 * fVar13;
          auVar37._12_4_ = *pfVar10 * fVar4;
          auVar29 = maxps(auVar28,auVar15);
          auVar38 = maxps(auVar37,auVar15);
          auVar29 = minps(auVar29,auVar14);
          auVar38 = minps(auVar38,auVar14);
          auVar42._0_4_ = (int)auVar29._0_4_;
          auVar42._4_4_ = (int)auVar29._4_4_;
          auVar42._8_4_ = (int)auVar29._8_4_;
          auVar42._12_4_ = (int)auVar29._12_4_;
          auVar30._0_4_ = (int)auVar38._0_4_;
          auVar30._4_4_ = (int)auVar38._4_4_;
          auVar30._8_4_ = (int)auVar38._8_4_;
          auVar30._12_4_ = (int)auVar38._12_4_;
          auVar43 = packssdw(auVar42,auVar30);
          auVar39._0_4_ = pfVar22[4] * fVar11;
          auVar39._4_4_ = pfVar22[5] * fVar12;
          auVar39._8_4_ = pfVar22[6] * fVar13;
          auVar39._12_4_ = pfVar22[7] * fVar4;
          auVar31._0_4_ = *pfVar22 * fVar11;
          auVar31._4_4_ = pfVar22[1] * fVar12;
          auVar31._8_4_ = pfVar22[2] * fVar13;
          auVar31._12_4_ = pfVar22[3] * fVar4;
          auVar38 = maxps(auVar39,auVar15);
          auVar29 = maxps(auVar31,auVar15);
          auVar38 = minps(auVar38,auVar14);
          auVar29 = minps(auVar29,auVar14);
          auVar40._0_4_ = (int)auVar29._0_4_;
          auVar40._4_4_ = (int)auVar29._4_4_;
          auVar40._8_4_ = (int)auVar29._8_4_;
          auVar40._12_4_ = (int)auVar29._12_4_;
          auVar32._0_4_ = (int)auVar38._0_4_;
          auVar32._4_4_ = (int)auVar38._4_4_;
          auVar32._8_4_ = (int)auVar38._8_4_;
          auVar32._12_4_ = (int)auVar38._12_4_;
          auVar29 = packssdw(auVar40,auVar32);
          auVar36._0_12_ = auVar29._0_12_;
          auVar36._12_2_ = auVar29._6_2_;
          auVar36._14_2_ = auVar43._6_2_;
          auVar35._12_4_ = auVar36._12_4_;
          auVar35._0_10_ = auVar29._0_10_;
          auVar35._10_2_ = auVar43._4_2_;
          auVar34._10_6_ = auVar35._10_6_;
          auVar34._0_8_ = auVar29._0_8_;
          auVar34._8_2_ = auVar29._4_2_;
          auVar33._8_8_ = auVar34._8_8_;
          auVar33._6_2_ = auVar43._2_2_;
          auVar33._4_2_ = auVar29._2_2_;
          auVar33._0_2_ = auVar29._0_2_;
          auVar33._2_2_ = auVar43._0_2_;
          *param_1 = auVar33;
          *(short *)param_1[1] = auVar29._8_2_;
          *(short *)(param_1[1] + 2) = auVar43._8_2_;
          *(short *)(param_1[1] + 4) = auVar29._10_2_;
          *(short *)(param_1[1] + 6) = auVar43._10_2_;
          *(short *)(param_1[1] + 8) = auVar29._12_2_;
          *(short *)(param_1[1] + 10) = auVar43._12_2_;
          *(short *)(param_1[1] + 0xc) = auVar29._14_2_;
          *(short *)(param_1[1] + 0xe) = auVar43._14_2_;
          param_1 = param_1 + 2;
          pfVar22 = pfVar22 + 8;
        } while (param_1 <= pauVar2 + -2);
        if (param_1 == pauVar2) break;
        pfVar22 = pfVar19 + (uVar26 - 8);
        pfVar20 = pfVar3 + (uVar26 - 8);
        param_1 = pauVar2 + -2;
      }
      return;
    }
  }
  else if ((param_3 == 4) &&
          (iVar16 = UERARadAudioInterleave4ChToS16_1
                              (param_1,*param_2,param_2[1],param_2[2],param_2[3],param_4),
          iVar16 != 0)) {
    return;
  }
  fVar13 = __real_c7000000;
  fVar12 = __real_47000000;
  fVar11 = __real_46fffe00;
  if (param_4 != 0) {
    lVar18 = 0;
    do {
      uVar24 = 0;
      if (param_3 < 4) {
        if (param_3 != 0) {
          lVar25 = 0;
          goto LAB_14f8cbf8b;
        }
      }
      else {
        uVar17 = (param_3 - 4 >> 2) + 1;
        uVar23 = (ulonglong)uVar17;
        uVar24 = uVar17 * 4;
        lVar25 = (ulonglong)uVar17 * 4;
        plVar21 = param_2 + 2;
        do {
          fVar27 = *(float *)(plVar21[-2] + lVar18) * fVar12;
          fVar4 = fVar13;
          if (fVar13 <= fVar27) {
            fVar4 = fVar27;
          }
          fVar27 = fVar11;
          if (fVar4 <= fVar11) {
            fVar27 = fVar4;
          }
          *(short *)*param_1 = (short)(int)fVar27;
          fVar27 = *(float *)(plVar21[-1] + lVar18) * fVar12;
          fVar4 = fVar13;
          if (fVar13 <= fVar27) {
            fVar4 = fVar27;
          }
          fVar27 = fVar11;
          if (fVar4 <= fVar11) {
            fVar27 = fVar4;
          }
          *(short *)(*param_1 + 2) = (short)(int)fVar27;
          fVar27 = *(float *)(*plVar21 + lVar18) * fVar12;
          fVar4 = fVar13;
          if (fVar13 <= fVar27) {
            fVar4 = fVar27;
          }
          fVar27 = fVar11;
          if (fVar4 <= fVar11) {
            fVar27 = fVar4;
          }
          *(short *)(*param_1 + 4) = (short)(int)fVar27;
          fVar27 = *(float *)(plVar21[1] + lVar18) * fVar12;
          fVar4 = fVar13;
          if (fVar13 <= fVar27) {
            fVar4 = fVar27;
          }
          fVar27 = fVar11;
          if (fVar4 <= fVar11) {
            fVar27 = fVar4;
          }
          *(short *)(*param_1 + 6) = (short)(int)fVar27;
          param_1 = (undefined1 (*) [16])(*param_1 + 8);
          uVar23 = uVar23 - 1;
          plVar21 = plVar21 + 4;
        } while (uVar23 != 0);
        if (uVar24 < param_3) {
LAB_14f8cbf8b:
          plVar21 = param_2 + lVar25;
          uVar23 = (ulonglong)(param_3 - uVar24);
          do {
            lVar25 = *plVar21;
            plVar21 = plVar21 + 1;
            fVar27 = *(float *)(lVar18 + lVar25) * fVar12;
            fVar4 = fVar13;
            if (fVar13 <= fVar27) {
              fVar4 = fVar27;
            }
            fVar27 = fVar11;
            if (fVar4 <= fVar11) {
              fVar27 = fVar4;
            }
            *(short *)*param_1 = (short)(int)fVar27;
            param_1 = (undefined1 (*) [16])(*param_1 + 2);
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      lVar18 = lVar18 + 4;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  return;
}


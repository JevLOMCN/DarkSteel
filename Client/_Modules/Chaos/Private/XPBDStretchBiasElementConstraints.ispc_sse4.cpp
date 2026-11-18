// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FUN_1409aeab0 @ 1409aeab0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409aeab0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,undefined1 (*param_8) [16],float *param_9,
                  float *param_10,float *param_11,float *param_12,float *param_13,float *param_14,
                  float *param_15,float *param_16,undefined1 (*param_17) [16])

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  char cVar17;
  uint uVar18;
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
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar64 [16];
  float fVar69;
  float fVar70;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  float fVar95;
  
  uVar18 = movmskps((int)param_17,*param_17);
  fVar70 = *param_2 - *param_1;
  fVar88 = param_2[1] - param_1[1];
  fVar89 = param_2[2] - param_1[2];
  fVar90 = param_2[3] - param_1[3];
  fVar63 = param_2[4] - param_1[4];
  fVar65 = param_2[5] - param_1[5];
  fVar66 = param_2[6] - param_1[6];
  fVar68 = param_2[7] - param_1[7];
  fVar27 = param_2[8] - param_1[8];
  fVar29 = param_2[9] - param_1[9];
  fVar31 = param_2[10] - param_1[10];
  fVar33 = param_2[0xb] - param_1[0xb];
  fVar51 = *param_3 - *param_1;
  fVar52 = param_3[1] - param_1[1];
  fVar53 = param_3[2] - param_1[2];
  fVar54 = param_3[3] - param_1[3];
  fVar35 = param_3[4] - param_1[4];
  fVar36 = param_3[5] - param_1[5];
  fVar37 = param_3[6] - param_1[6];
  fVar38 = param_3[7] - param_1[7];
  fVar59 = param_3[8] - param_1[8];
  fVar60 = param_3[9] - param_1[9];
  fVar61 = param_3[10] - param_1[10];
  fVar62 = param_3[0xb] - param_1[0xb];
  fVar47 = *param_4;
  fVar48 = param_4[1];
  fVar49 = param_4[2];
  fVar50 = param_4[3];
  fVar28 = param_4[4];
  fVar30 = param_4[5];
  fVar32 = param_4[6];
  fVar34 = param_4[7];
  fVar55 = param_4[8];
  fVar56 = param_4[9];
  fVar57 = param_4[10];
  fVar58 = param_4[0xb];
  fVar20 = param_4[0xc];
  fVar22 = param_4[0xd];
  fVar24 = param_4[0xe];
  fVar26 = param_4[0xf];
  auVar91._0_4_ = fVar63 * fVar47;
  auVar91._4_4_ = fVar65 * fVar48;
  auVar91._8_4_ = fVar66 * fVar49;
  auVar91._12_4_ = fVar68 * fVar50;
  fVar39 = fVar51 * fVar28 + fVar70 * fVar47;
  fVar40 = fVar52 * fVar30 + fVar88 * fVar48;
  fVar41 = fVar53 * fVar32 + fVar89 * fVar49;
  fVar42 = fVar54 * fVar34 + fVar90 * fVar50;
  fVar43 = fVar35 * fVar28 + auVar91._0_4_;
  fVar44 = fVar36 * fVar30 + auVar91._4_4_;
  fVar45 = fVar37 * fVar32 + auVar91._8_4_;
  fVar46 = fVar38 * fVar34 + auVar91._12_4_;
  fVar19 = fVar59 * fVar28 + fVar27 * fVar47;
  fVar21 = fVar60 * fVar30 + fVar29 * fVar48;
  fVar23 = fVar61 * fVar32 + fVar31 * fVar49;
  fVar25 = fVar62 * fVar34 + fVar33 * fVar50;
  auVar71._0_4_ = fVar70 * fVar55;
  auVar71._4_4_ = fVar88 * fVar56;
  auVar71._8_4_ = fVar89 * fVar57;
  auVar71._12_4_ = fVar90 * fVar58;
  fVar70 = fVar51 * fVar20 + auVar71._0_4_;
  fVar88 = fVar52 * fVar22 + auVar71._4_4_;
  fVar89 = fVar53 * fVar24 + auVar71._8_4_;
  fVar90 = fVar54 * fVar26 + auVar71._12_4_;
  fVar51 = fVar35 * fVar20 + fVar63 * fVar55;
  fVar52 = fVar36 * fVar22 + fVar65 * fVar56;
  fVar53 = fVar37 * fVar24 + fVar66 * fVar57;
  fVar54 = fVar38 * fVar26 + fVar68 * fVar58;
  fVar59 = fVar59 * fVar20 + fVar27 * fVar55;
  fVar60 = fVar60 * fVar22 + fVar29 * fVar56;
  fVar61 = fVar61 * fVar24 + fVar31 * fVar57;
  fVar62 = fVar62 * fVar26 + fVar33 * fVar58;
  auVar64._4_4_ = fVar21 * fVar21 + fVar44 * fVar44 + fVar40 * fVar40;
  auVar64._0_4_ = fVar19 * fVar19 + fVar43 * fVar43 + fVar39 * fVar39;
  auVar64._8_4_ = fVar23 * fVar23 + fVar45 * fVar45 + fVar41 * fVar41;
  auVar64._12_4_ = fVar25 * fVar25 + fVar46 * fVar46 + fVar42 * fVar42;
  auVar91 = sqrtps(auVar91,auVar64);
  auVar72._4_4_ = fVar60 * fVar60 + fVar52 * fVar52 + fVar88 * fVar88;
  auVar72._0_4_ = fVar59 * fVar59 + fVar51 * fVar51 + fVar70 * fVar70;
  auVar72._8_4_ = fVar61 * fVar61 + fVar53 * fVar53 + fVar89 * fVar89;
  auVar72._12_4_ = fVar62 * fVar62 + fVar54 * fVar54 + fVar90 * fVar90;
  auVar72 = sqrtps(auVar71,auVar72);
  auVar64 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar91);
  fVar35 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar91._0_4_) & auVar64._0_4_)
  ;
  fVar36 = (float)(-(uint)(_UNK_1506895d4 < auVar91._4_4_) & auVar64._4_4_);
  fVar37 = (float)(-(uint)(_UNK_1506895d8 < auVar91._8_4_) & auVar64._8_4_);
  fVar38 = (float)(-(uint)(_UNK_1506895dc < auVar91._12_4_) & auVar64._12_4_);
  fVar94 = auVar72._0_4_;
  fVar95 = auVar72._12_4_;
  fVar65 = auVar72._4_4_;
  fVar68 = auVar72._8_4_;
  auVar64 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar72);
  fVar63 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < fVar94) & auVar64._0_4_);
  fVar66 = (float)(-(uint)(_UNK_1506895d4 < fVar65) & auVar64._4_4_);
  fVar67 = (float)(-(uint)(_UNK_1506895d8 < fVar68) & auVar64._8_4_);
  fVar69 = (float)(-(uint)(_UNK_1506895dc < fVar95) & auVar64._12_4_);
  auVar92._0_4_ = auVar91._0_4_ - *param_5 * *param_7;
  auVar92._4_4_ = auVar91._4_4_ - param_5[1] * param_7[1];
  auVar92._8_4_ = auVar91._8_4_ - param_5[2] * param_7[2];
  auVar92._12_4_ = auVar91._12_4_ - param_5[3] * param_7[3];
  fVar27 = *param_6;
  fVar29 = param_6[1];
  fVar31 = param_6[2];
  fVar33 = param_6[3];
  fVar39 = fVar39 * fVar35;
  fVar40 = fVar40 * fVar36;
  fVar41 = fVar41 * fVar37;
  fVar42 = fVar42 * fVar38;
  fVar43 = fVar43 * fVar35;
  fVar44 = fVar44 * fVar36;
  fVar45 = fVar45 * fVar37;
  fVar46 = fVar46 * fVar38;
  fVar19 = fVar19 * fVar35;
  fVar21 = fVar21 * fVar36;
  fVar23 = fVar23 * fVar37;
  fVar25 = fVar25 * fVar38;
  fVar70 = fVar70 * fVar63;
  fVar88 = fVar88 * fVar66;
  fVar89 = fVar89 * fVar67;
  fVar90 = fVar90 * fVar69;
  fVar51 = fVar51 * fVar63;
  fVar52 = fVar52 * fVar66;
  fVar53 = fVar53 * fVar67;
  fVar54 = fVar54 * fVar69;
  fVar59 = fVar59 * fVar63;
  fVar60 = fVar60 * fVar66;
  fVar61 = fVar61 * fVar67;
  fVar62 = fVar62 * fVar69;
  if (uVar18 == 0xf) {
    *param_8 = auVar92;
    fVar14 = param_5[5];
    fVar15 = param_5[6];
    fVar16 = param_5[7];
    *param_9 = fVar94 - param_5[4] * fVar27;
    param_9[1] = fVar65 - fVar14 * fVar29;
    param_9[2] = fVar68 - fVar15 * fVar31;
    param_9[3] = fVar95 - fVar16 * fVar33;
    fVar27 = param_5[9];
    fVar29 = param_5[10];
    fVar31 = param_5[0xb];
    *param_10 = (fVar19 * fVar59 + fVar43 * fVar51 + fVar39 * fVar70) - param_5[8];
    param_10[1] = (fVar21 * fVar60 + fVar44 * fVar52 + fVar40 * fVar88) - fVar27;
    param_10[2] = (fVar23 * fVar61 + fVar45 * fVar53 + fVar41 * fVar89) - fVar29;
    param_10[3] = (fVar25 * fVar62 + fVar46 * fVar54 + fVar42 * fVar90) - fVar31;
    *param_11 = fVar39 * fVar47;
    param_11[1] = fVar40 * fVar48;
    param_11[2] = fVar41 * fVar49;
    param_11[3] = fVar42 * fVar50;
    param_11[4] = fVar43 * fVar47;
    param_11[5] = fVar44 * fVar48;
    param_11[6] = fVar45 * fVar49;
    param_11[7] = fVar46 * fVar50;
    param_11[8] = fVar19 * fVar47;
    param_11[9] = fVar21 * fVar48;
    param_11[10] = fVar23 * fVar49;
    param_11[0xb] = fVar25 * fVar50;
    *param_12 = fVar39 * fVar28;
    param_12[1] = fVar40 * fVar30;
    param_12[2] = fVar41 * fVar32;
    param_12[3] = fVar42 * fVar34;
    param_12[4] = fVar43 * fVar28;
    param_12[5] = fVar44 * fVar30;
    param_12[6] = fVar45 * fVar32;
    param_12[7] = fVar46 * fVar34;
    param_12[8] = fVar19 * fVar28;
    param_12[9] = fVar21 * fVar30;
    param_12[10] = fVar23 * fVar32;
    param_12[0xb] = fVar25 * fVar34;
    *param_13 = fVar70 * fVar55;
    param_13[1] = fVar88 * fVar56;
    param_13[2] = fVar89 * fVar57;
    param_13[3] = fVar90 * fVar58;
    param_13[4] = fVar51 * fVar55;
    param_13[5] = fVar52 * fVar56;
    param_13[6] = fVar53 * fVar57;
    param_13[7] = fVar54 * fVar58;
    param_13[8] = fVar59 * fVar55;
    param_13[9] = fVar60 * fVar56;
    param_13[10] = fVar61 * fVar57;
    param_13[0xb] = fVar62 * fVar58;
    *param_14 = fVar70 * fVar20;
    param_14[1] = fVar88 * fVar22;
    param_14[2] = fVar89 * fVar24;
    param_14[3] = fVar90 * fVar26;
    param_14[4] = fVar51 * fVar20;
    param_14[5] = fVar52 * fVar22;
    param_14[6] = fVar53 * fVar24;
    param_14[7] = fVar54 * fVar26;
    param_14[8] = fVar59 * fVar20;
    param_14[9] = fVar60 * fVar22;
    param_14[10] = fVar61 * fVar24;
    param_14[0xb] = fVar62 * fVar26;
    *param_15 = fVar39 * fVar63 * fVar55 + fVar35 * fVar70 * fVar47;
    param_15[1] = fVar40 * fVar66 * fVar56 + fVar36 * fVar88 * fVar48;
    param_15[2] = fVar41 * fVar67 * fVar57 + fVar37 * fVar89 * fVar49;
    param_15[3] = fVar42 * fVar69 * fVar58 + fVar38 * fVar90 * fVar50;
    param_15[4] = fVar43 * fVar63 * fVar55 + fVar35 * fVar51 * fVar47;
    param_15[5] = fVar44 * fVar66 * fVar56 + fVar36 * fVar52 * fVar48;
    param_15[6] = fVar45 * fVar67 * fVar57 + fVar37 * fVar53 * fVar49;
    param_15[7] = fVar46 * fVar69 * fVar58 + fVar38 * fVar54 * fVar50;
    param_15[8] = fVar55 * fVar19 * fVar63 + fVar47 * fVar35 * fVar59;
    param_15[9] = fVar56 * fVar21 * fVar66 + fVar48 * fVar36 * fVar60;
    param_15[10] = fVar57 * fVar23 * fVar67 + fVar49 * fVar37 * fVar61;
    param_15[0xb] = fVar58 * fVar25 * fVar69 + fVar50 * fVar38 * fVar62;
    *param_16 = fVar39 * fVar63 * fVar20 + fVar35 * fVar70 * fVar28;
    param_16[1] = fVar40 * fVar66 * fVar22 + fVar36 * fVar88 * fVar30;
    param_16[2] = fVar41 * fVar67 * fVar24 + fVar37 * fVar89 * fVar32;
    param_16[3] = fVar42 * fVar69 * fVar26 + fVar38 * fVar90 * fVar34;
    param_16[4] = fVar43 * fVar63 * fVar20 + fVar35 * fVar51 * fVar28;
    param_16[5] = fVar44 * fVar66 * fVar22 + fVar36 * fVar52 * fVar30;
    param_16[6] = fVar45 * fVar67 * fVar24 + fVar37 * fVar53 * fVar32;
    param_16[7] = fVar46 * fVar69 * fVar26 + fVar38 * fVar54 * fVar34;
    param_16[8] = fVar19 * fVar63 * fVar20 + fVar35 * fVar59 * fVar28;
    param_16[9] = fVar21 * fVar66 * fVar22 + fVar36 * fVar60 * fVar30;
    param_16[10] = fVar23 * fVar67 * fVar24 + fVar37 * fVar61 * fVar32;
    param_16[0xb] = fVar25 * fVar69 * fVar26 + fVar38 * fVar62 * fVar34;
    return;
  }
  cVar17 = (char)uVar18;
  if ((uVar18 & 1) != 0) {
    *(float *)*param_8 = auVar92._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar92,1);
    *(undefined8 *)(*param_8 + 4) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar92,2);
    *(undefined8 *)(*param_8 + 8) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar92,3);
    *(undefined8 *)(*param_8 + 0xc) = uVar1;
  }
  auVar73._0_4_ = fVar94 - param_5[4] * fVar27;
  auVar73._4_4_ = fVar65 - param_5[5] * fVar29;
  auVar73._8_4_ = fVar68 - param_5[6] * fVar31;
  auVar73._12_4_ = fVar95 - param_5[7] * fVar33;
  if ((uVar18 & 1) != 0) {
    *param_9 = auVar73._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar73,1);
    *(undefined8 *)(param_9 + 1) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar73,2);
    *(undefined8 *)(param_9 + 2) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar73,3);
    *(undefined8 *)(param_9 + 3) = uVar1;
  }
  auVar74._0_4_ = (fVar19 * fVar59 + fVar43 * fVar51 + fVar39 * fVar70) - param_5[8];
  auVar74._4_4_ = (fVar21 * fVar60 + fVar44 * fVar52 + fVar40 * fVar88) - param_5[9];
  auVar74._8_4_ = (fVar23 * fVar61 + fVar45 * fVar53 + fVar41 * fVar89) - param_5[10];
  auVar74._12_4_ = (fVar25 * fVar62 + fVar46 * fVar54 + fVar42 * fVar90) - param_5[0xb];
  if ((uVar18 & 1) != 0) {
    *param_10 = auVar74._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar74,1);
    *(undefined8 *)(param_10 + 1) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar74,2);
    *(undefined8 *)(param_10 + 2) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar74,3);
    *(undefined8 *)(param_10 + 3) = uVar1;
    auVar75._0_4_ = fVar39 * fVar47;
    auVar75._4_4_ = fVar40 * fVar48;
    auVar75._8_4_ = fVar41 * fVar49;
    auVar75._12_4_ = fVar42 * fVar50;
  }
  else {
    auVar75._0_4_ = fVar39 * fVar47;
    auVar75._4_4_ = fVar40 * fVar48;
    auVar75._8_4_ = fVar41 * fVar49;
    auVar75._12_4_ = fVar42 * fVar50;
  }
  if ((uVar18 & 1) != 0) {
    *param_11 = auVar75._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar75,1);
    *(undefined8 *)(param_11 + 1) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar75,2);
    *(undefined8 *)(param_11 + 2) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar75,3);
    *(undefined8 *)(param_11 + 3) = uVar1;
    auVar76._0_4_ = fVar43 * fVar47;
    auVar76._4_4_ = fVar44 * fVar48;
    auVar76._8_4_ = fVar45 * fVar49;
    auVar76._12_4_ = fVar46 * fVar50;
  }
  else {
    auVar76._0_4_ = fVar43 * fVar47;
    auVar76._4_4_ = fVar44 * fVar48;
    auVar76._8_4_ = fVar45 * fVar49;
    auVar76._12_4_ = fVar46 * fVar50;
  }
  if ((uVar18 & 1) != 0) {
    param_11[4] = auVar76._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar76,1);
    *(undefined8 *)(param_11 + 5) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar76,2);
    *(undefined8 *)(param_11 + 6) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar76,3);
    *(undefined8 *)(param_11 + 7) = uVar1;
    auVar77._0_4_ = fVar19 * fVar47;
    auVar77._4_4_ = fVar21 * fVar48;
    auVar77._8_4_ = fVar23 * fVar49;
    auVar77._12_4_ = fVar25 * fVar50;
  }
  else {
    auVar77._0_4_ = fVar19 * fVar47;
    auVar77._4_4_ = fVar21 * fVar48;
    auVar77._8_4_ = fVar23 * fVar49;
    auVar77._12_4_ = fVar25 * fVar50;
  }
  if ((uVar18 & 1) != 0) {
    param_11[8] = auVar77._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar77,1);
    *(undefined8 *)(param_11 + 9) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar77,2);
    *(undefined8 *)(param_11 + 10) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar77,3);
    *(undefined8 *)(param_11 + 0xb) = uVar1;
    auVar78._0_4_ = fVar39 * fVar28;
    auVar78._4_4_ = fVar40 * fVar30;
    auVar78._8_4_ = fVar41 * fVar32;
    auVar78._12_4_ = fVar42 * fVar34;
  }
  else {
    auVar78._0_4_ = fVar39 * fVar28;
    auVar78._4_4_ = fVar40 * fVar30;
    auVar78._8_4_ = fVar41 * fVar32;
    auVar78._12_4_ = fVar42 * fVar34;
  }
  if ((uVar18 & 1) != 0) {
    *param_12 = auVar78._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar78,1);
    *(undefined8 *)(param_12 + 1) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar78,2);
    *(undefined8 *)(param_12 + 2) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar78,3);
    *(undefined8 *)(param_12 + 3) = uVar1;
    auVar79._0_4_ = fVar43 * fVar28;
    auVar79._4_4_ = fVar44 * fVar30;
    auVar79._8_4_ = fVar45 * fVar32;
    auVar79._12_4_ = fVar46 * fVar34;
  }
  else {
    auVar79._0_4_ = fVar43 * fVar28;
    auVar79._4_4_ = fVar44 * fVar30;
    auVar79._8_4_ = fVar45 * fVar32;
    auVar79._12_4_ = fVar46 * fVar34;
  }
  if ((uVar18 & 1) != 0) {
    param_12[4] = auVar79._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar79,1);
    *(undefined8 *)(param_12 + 5) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar79,2);
    *(undefined8 *)(param_12 + 6) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar79,3);
    *(undefined8 *)(param_12 + 7) = uVar1;
    auVar80._0_4_ = fVar19 * fVar28;
    auVar80._4_4_ = fVar21 * fVar30;
    auVar80._8_4_ = fVar23 * fVar32;
    auVar80._12_4_ = fVar25 * fVar34;
  }
  else {
    auVar80._0_4_ = fVar19 * fVar28;
    auVar80._4_4_ = fVar21 * fVar30;
    auVar80._8_4_ = fVar23 * fVar32;
    auVar80._12_4_ = fVar25 * fVar34;
  }
  if ((uVar18 & 1) != 0) {
    param_12[8] = auVar80._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar80,1);
    *(undefined8 *)(param_12 + 9) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar80,2);
    *(undefined8 *)(param_12 + 10) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar80,3);
    *(undefined8 *)(param_12 + 0xb) = uVar1;
    auVar81._0_4_ = fVar70 * fVar55;
    auVar81._4_4_ = fVar88 * fVar56;
    auVar81._8_4_ = fVar89 * fVar57;
    auVar81._12_4_ = fVar90 * fVar58;
  }
  else {
    auVar81._0_4_ = fVar70 * fVar55;
    auVar81._4_4_ = fVar88 * fVar56;
    auVar81._8_4_ = fVar89 * fVar57;
    auVar81._12_4_ = fVar90 * fVar58;
  }
  if ((uVar18 & 1) != 0) {
    *param_13 = auVar81._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar81,1);
    *(undefined8 *)(param_13 + 1) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar81,2);
    *(undefined8 *)(param_13 + 2) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar81,3);
    *(undefined8 *)(param_13 + 3) = uVar1;
    auVar82._0_4_ = fVar51 * fVar55;
    auVar82._4_4_ = fVar52 * fVar56;
    auVar82._8_4_ = fVar53 * fVar57;
    auVar82._12_4_ = fVar54 * fVar58;
  }
  else {
    auVar82._0_4_ = fVar51 * fVar55;
    auVar82._4_4_ = fVar52 * fVar56;
    auVar82._8_4_ = fVar53 * fVar57;
    auVar82._12_4_ = fVar54 * fVar58;
  }
  if ((uVar18 & 1) != 0) {
    param_13[4] = auVar82._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar82,1);
    *(undefined8 *)(param_13 + 5) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar82,2);
    *(undefined8 *)(param_13 + 6) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar82,3);
    *(undefined8 *)(param_13 + 7) = uVar1;
    auVar83._0_4_ = fVar59 * fVar55;
    auVar83._4_4_ = fVar60 * fVar56;
    auVar83._8_4_ = fVar61 * fVar57;
    auVar83._12_4_ = fVar62 * fVar58;
  }
  else {
    auVar83._0_4_ = fVar59 * fVar55;
    auVar83._4_4_ = fVar60 * fVar56;
    auVar83._8_4_ = fVar61 * fVar57;
    auVar83._12_4_ = fVar62 * fVar58;
  }
  if ((uVar18 & 1) != 0) {
    param_13[8] = auVar83._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar83,1);
    *(undefined8 *)(param_13 + 9) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar83,2);
    *(undefined8 *)(param_13 + 10) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar83,3);
    *(undefined8 *)(param_13 + 0xb) = uVar1;
    auVar84._0_4_ = fVar70 * fVar20;
    auVar84._4_4_ = fVar88 * fVar22;
    auVar84._8_4_ = fVar89 * fVar24;
    auVar84._12_4_ = fVar90 * fVar26;
  }
  else {
    auVar84._0_4_ = fVar70 * fVar20;
    auVar84._4_4_ = fVar88 * fVar22;
    auVar84._8_4_ = fVar89 * fVar24;
    auVar84._12_4_ = fVar90 * fVar26;
  }
  if ((uVar18 & 1) != 0) {
    *param_14 = auVar84._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar84,1);
    *(undefined8 *)(param_14 + 1) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar84,2);
    *(undefined8 *)(param_14 + 2) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar84,3);
    *(undefined8 *)(param_14 + 3) = uVar1;
    auVar85._0_4_ = fVar51 * fVar20;
    auVar85._4_4_ = fVar52 * fVar22;
    auVar85._8_4_ = fVar53 * fVar24;
    auVar85._12_4_ = fVar54 * fVar26;
  }
  else {
    auVar85._0_4_ = fVar51 * fVar20;
    auVar85._4_4_ = fVar52 * fVar22;
    auVar85._8_4_ = fVar53 * fVar24;
    auVar85._12_4_ = fVar54 * fVar26;
  }
  if ((uVar18 & 1) != 0) {
    param_14[4] = auVar85._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar85,1);
    *(undefined8 *)(param_14 + 5) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar85,2);
    *(undefined8 *)(param_14 + 6) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar85,3);
    *(undefined8 *)(param_14 + 7) = uVar1;
    auVar86._0_4_ = fVar59 * fVar20;
    auVar86._4_4_ = fVar60 * fVar22;
    auVar86._8_4_ = fVar61 * fVar24;
    auVar86._12_4_ = fVar62 * fVar26;
  }
  else {
    auVar86._0_4_ = fVar59 * fVar20;
    auVar86._4_4_ = fVar60 * fVar22;
    auVar86._8_4_ = fVar61 * fVar24;
    auVar86._12_4_ = fVar62 * fVar26;
  }
  if ((uVar18 & 1) != 0) {
    param_14[8] = auVar86._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar86,1);
    *(undefined8 *)(param_14 + 9) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar86,2);
    *(undefined8 *)(param_14 + 10) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar86,3);
    *(undefined8 *)(param_14 + 0xb) = uVar1;
  }
  auVar93._0_4_ = fVar39 * fVar63 * fVar55 + fVar70 * fVar35 * fVar47;
  auVar93._4_4_ = fVar40 * fVar66 * fVar56 + fVar88 * fVar36 * fVar48;
  auVar93._8_4_ = fVar41 * fVar67 * fVar57 + fVar89 * fVar37 * fVar49;
  auVar93._12_4_ = fVar42 * fVar69 * fVar58 + fVar90 * fVar38 * fVar50;
  if ((uVar18 & 1) != 0) {
    *param_15 = auVar93._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar93,1);
    *(undefined8 *)(param_15 + 1) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar93,2);
    *(undefined8 *)(param_15 + 2) = uVar1;
  }
  fVar27 = fVar51 * fVar35 * fVar47;
  fVar29 = fVar52 * fVar36 * fVar48;
  fVar31 = fVar53 * fVar37 * fVar49;
  fVar33 = fVar54 * fVar38 * fVar50;
  fVar65 = fVar43 * fVar63 * fVar55;
  fVar68 = fVar44 * fVar66 * fVar56;
  fVar94 = fVar45 * fVar67 * fVar57;
  fVar95 = fVar46 * fVar69 * fVar58;
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar93,3);
    *(undefined8 *)(param_15 + 3) = uVar1;
    auVar87._0_4_ = fVar27 + fVar65;
    auVar87._4_4_ = fVar29 + fVar68;
    auVar87._8_4_ = fVar31 + fVar94;
    auVar87._12_4_ = fVar33 + fVar95;
  }
  else {
    auVar87._0_4_ = fVar27 + fVar65;
    auVar87._4_4_ = fVar29 + fVar68;
    auVar87._8_4_ = fVar31 + fVar94;
    auVar87._12_4_ = fVar33 + fVar95;
  }
  if ((uVar18 & 1) != 0) {
    param_15[4] = auVar87._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar1 = extractps(auVar87,1);
    *(undefined8 *)(param_15 + 5) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    uVar1 = extractps(auVar87,2);
    *(undefined8 *)(param_15 + 6) = uVar1;
  }
  fVar47 = fVar47 * fVar35 * fVar59;
  fVar48 = fVar48 * fVar36 * fVar60;
  fVar49 = fVar49 * fVar37 * fVar61;
  fVar50 = fVar50 * fVar38 * fVar62;
  fVar55 = fVar55 * fVar19 * fVar63;
  fVar56 = fVar56 * fVar21 * fVar66;
  fVar57 = fVar57 * fVar23 * fVar67;
  fVar58 = fVar58 * fVar25 * fVar69;
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    uVar1 = extractps(auVar87,3);
    *(undefined8 *)(param_15 + 7) = uVar1;
  }
  if ((uVar18 & 1) != 0) {
    param_15[8] = fVar47 + fVar55;
  }
  if ((uVar18 & 2) != 0) {
    auVar13._4_4_ = fVar48 + fVar56;
    auVar13._0_4_ = fVar47 + fVar55;
    auVar13._8_4_ = fVar49 + fVar57;
    auVar13._12_4_ = fVar50 + fVar58;
    uVar1 = extractps(auVar13,1);
    *(undefined8 *)(param_15 + 9) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    auVar12._4_4_ = fVar48 + fVar56;
    auVar12._0_4_ = fVar47 + fVar55;
    auVar12._8_4_ = fVar49 + fVar57;
    auVar12._12_4_ = fVar50 + fVar58;
    uVar1 = extractps(auVar12,2);
    *(undefined8 *)(param_15 + 10) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    auVar11._4_4_ = fVar48 + fVar56;
    auVar11._0_4_ = fVar47 + fVar55;
    auVar11._8_4_ = fVar49 + fVar57;
    auVar11._12_4_ = fVar50 + fVar58;
    uVar1 = extractps(auVar11,3);
    *(undefined8 *)(param_15 + 0xb) = uVar1;
  }
  fVar47 = fVar39 * fVar63 * fVar20 + fVar70 * fVar35 * fVar28;
  fVar48 = fVar40 * fVar66 * fVar22 + fVar88 * fVar36 * fVar30;
  fVar49 = fVar41 * fVar67 * fVar24 + fVar89 * fVar37 * fVar32;
  fVar50 = fVar42 * fVar69 * fVar26 + fVar90 * fVar38 * fVar34;
  if ((uVar18 & 1) != 0) {
    *param_16 = fVar47;
  }
  if ((uVar18 & 2) != 0) {
    auVar10._4_4_ = fVar48;
    auVar10._0_4_ = fVar47;
    auVar10._8_4_ = fVar49;
    auVar10._12_4_ = fVar50;
    uVar1 = extractps(auVar10,1);
    *(undefined8 *)(param_16 + 1) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    auVar8._4_4_ = fVar48;
    auVar8._0_4_ = fVar47;
    auVar8._8_4_ = fVar49;
    auVar8._12_4_ = fVar50;
    uVar1 = extractps(auVar8,2);
    *(undefined8 *)(param_16 + 2) = uVar1;
  }
  fVar55 = fVar51 * fVar35 * fVar28;
  fVar56 = fVar52 * fVar36 * fVar30;
  fVar57 = fVar53 * fVar37 * fVar32;
  fVar58 = fVar54 * fVar38 * fVar34;
  fVar27 = fVar43 * fVar63 * fVar20;
  fVar29 = fVar44 * fVar66 * fVar22;
  fVar31 = fVar45 * fVar67 * fVar24;
  fVar33 = fVar46 * fVar69 * fVar26;
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    auVar9._4_4_ = fVar48;
    auVar9._0_4_ = fVar47;
    auVar9._8_4_ = fVar49;
    auVar9._12_4_ = fVar50;
    uVar1 = extractps(auVar9,3);
    *(undefined8 *)(param_16 + 3) = uVar1;
  }
  if ((uVar18 & 1) != 0) {
    param_16[4] = fVar55 + fVar27;
  }
  if ((uVar18 & 2) != 0) {
    auVar7._4_4_ = fVar56 + fVar29;
    auVar7._0_4_ = fVar55 + fVar27;
    auVar7._8_4_ = fVar57 + fVar31;
    auVar7._12_4_ = fVar58 + fVar33;
    uVar1 = extractps(auVar7,1);
    *(undefined8 *)(param_16 + 5) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    auVar5._4_4_ = fVar56 + fVar29;
    auVar5._0_4_ = fVar55 + fVar27;
    auVar5._8_4_ = fVar57 + fVar31;
    auVar5._12_4_ = fVar58 + fVar33;
    uVar1 = extractps(auVar5,2);
    *(undefined8 *)(param_16 + 6) = uVar1;
  }
  fVar28 = fVar35 * fVar59 * fVar28;
  fVar30 = fVar36 * fVar60 * fVar30;
  fVar32 = fVar37 * fVar61 * fVar32;
  fVar34 = fVar38 * fVar62 * fVar34;
  fVar20 = fVar19 * fVar63 * fVar20;
  fVar22 = fVar21 * fVar66 * fVar22;
  fVar24 = fVar23 * fVar67 * fVar24;
  fVar26 = fVar25 * fVar69 * fVar26;
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    auVar6._4_4_ = fVar56 + fVar29;
    auVar6._0_4_ = fVar55 + fVar27;
    auVar6._8_4_ = fVar57 + fVar31;
    auVar6._12_4_ = fVar58 + fVar33;
    uVar1 = extractps(auVar6,3);
    *(undefined8 *)(param_16 + 7) = uVar1;
  }
  if ((uVar18 & 1) != 0) {
    param_16[8] = fVar28 + fVar20;
  }
  if ((uVar18 & 2) != 0) {
    auVar4._4_4_ = fVar30 + fVar22;
    auVar4._0_4_ = fVar28 + fVar20;
    auVar4._8_4_ = fVar32 + fVar24;
    auVar4._12_4_ = fVar34 + fVar26;
    uVar1 = extractps(auVar4,1);
    *(undefined8 *)(param_16 + 9) = uVar1;
  }
  if ((uVar18 & 4) != 0) {
    auVar3._4_4_ = fVar30 + fVar22;
    auVar3._0_4_ = fVar28 + fVar20;
    auVar3._8_4_ = fVar32 + fVar24;
    auVar3._12_4_ = fVar34 + fVar26;
    uVar1 = extractps(auVar3,2);
    *(undefined8 *)(param_16 + 10) = uVar1;
  }
  if ((char)(cVar17 << 4) >> 4 < '\0') {
    auVar2._4_4_ = fVar30 + fVar22;
    auVar2._0_4_ = fVar28 + fVar20;
    auVar2._8_4_ = fVar32 + fVar24;
    auVar2._12_4_ = fVar34 + fVar26;
    uVar1 = extractps(auVar2,3);
    *(undefined8 *)(param_16 + 0xb) = uVar1;
  }
  return;
}

// ApplyXPBDStretchBiasConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_CunfCunfREFs_5B__c_unFVector3f_5D_CunfCunfCuni_sse4 @ 1409af880

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDStretchBiasConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_CunfCunfREFs_5B__c_unFVector3f_5D_CunfCunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,float param_8,float *param_9,float param_10,
               float param_11,uint param_12)

{
  int *piVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  byte bVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  float *pfVar34;
  longlong lVar35;
  byte bVar36;
  int iVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar67;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar68;
  float fVar69;
  float fVar80;
  float fVar85;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar95;
  float fVar96;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar110;
  float fVar121;
  float fVar122;
  undefined1 auVar111 [16];
  float fVar123;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  int iVar124;
  float fVar125;
  float fVar132;
  float fVar133;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar134;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar135;
  float fVar136;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  undefined1 auVar137 [16];
  float fVar146;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  int iVar147;
  float fVar148;
  float fVar149;
  uint uVar150;
  float fVar154;
  uint uVar156;
  float fVar157;
  uint uVar159;
  float fVar160;
  undefined1 auVar151 [16];
  float fVar155;
  float fVar158;
  float fVar161;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  uint uVar162;
  float fVar163;
  float fVar164;
  uint uVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  uint uVar169;
  float fVar170;
  float fVar171;
  float fVar172;
  uint uVar173;
  float fVar174;
  float fVar175;
  float fVar176;
  uint uVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar188;
  float fVar189;
  float fVar190;
  float fVar192;
  float fVar193;
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  uint uVar187;
  uint uVar191;
  uint uVar194;
  undefined1 auVar183 [16];
  float fVar195;
  float fVar196;
  float fVar199;
  float fVar200;
  undefined1 auVar197 [16];
  float fVar201;
  undefined1 auVar198 [16];
  float fVar202;
  float fVar203;
  float fVar204;
  float fVar205;
  float fVar206;
  float fVar207;
  float fVar208;
  float fVar209;
  float fVar210;
  float fVar212;
  float fVar213;
  float fVar214;
  undefined1 auVar211 [16];
  float fVar218;
  float fVar219;
  undefined1 auVar215 [16];
  float fVar220;
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  float fVar221;
  float fVar222;
  float fVar224;
  float fVar225;
  float fVar226;
  float fVar227;
  float fVar228;
  float fVar229;
  undefined1 auVar223 [16];
  undefined8 local_6f8;
  float fStack_6f0;
  float fStack_6ec;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float local_6d8;
  float fStack_6d4;
  undefined1 local_6c8 [8];
  float fStack_6c0;
  float fStack_6bc;
  undefined8 local_6b8;
  float fStack_6b0;
  float fStack_6ac;
  undefined1 local_658 [8];
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  undefined1 local_558 [8];
  float fStack_550;
  float fStack_54c;
  undefined1 local_548 [8];
  float fStack_540;
  float fStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  uint local_528;
  uint uStack_524;
  uint uStack_520;
  uint uStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  undefined1 local_508 [16];
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  undefined1 local_4e8 [16];
  uint local_4d8;
  longlong local_4c0;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  uint local_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  uVar165 = param_12 + 3;
  if (-1 < (int)param_12) {
    uVar165 = param_12;
  }
  if ((int)(uVar165 & 0xfffffffc) < 1) {
    uVar25 = 0;
  }
  else {
    local_438 = param_10;
    fStack_434 = param_10;
    fStack_430 = param_10;
    fStack_42c = param_10;
    local_448 = param_11;
    fStack_444 = param_11;
    fStack_440 = param_11;
    fStack_43c = param_11;
    local_458 = param_7;
    fStack_454 = param_7;
    fStack_450 = param_7;
    fStack_44c = param_7;
    pfVar34 = (float *)(param_4 + 0x30);
    lVar43 = 0x20;
    uVar25 = 0;
    do {
      local_4d8 = uVar25;
      auVar215 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar43);
      auVar197 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar43);
      piVar1 = (int *)(param_2 + lVar43);
      uVar67 = auVar197._0_4_;
      auVar71._4_4_ = uVar67;
      auVar71._0_4_ = uVar67;
      auVar71._8_4_ = uVar67;
      auVar71._12_4_ = uVar67;
      auVar111._8_4_ = auVar215._8_4_;
      auVar111._12_4_ = auVar215._12_4_;
      auVar126._4_4_ = auVar111._12_4_;
      auVar126._0_4_ = auVar215._0_4_;
      auVar126._8_4_ = auVar215._4_4_;
      auVar126._12_4_ = auVar111._12_4_;
      auVar70 = pblendw(auVar71,auVar126,0x3f);
      auVar111._0_8_ = auVar215._8_8_;
      auVar44 = pblendw(auVar111,auVar197,0xc);
      iVar124 = auVar215._0_4_ << 4;
      lVar27 = (longlong)iVar124;
      lVar33 = (longlong)(auVar111._12_4_ * 0x10);
      lVar39 = (longlong)(auVar197._8_4_ << 4);
      lVar41 = (longlong)(piVar1[1] << 4);
      auVar215 = insertps(ZEXT416(*(uint *)(param_1 + lVar27)),*(undefined4 *)(param_1 + lVar33),
                          0x10);
      auVar215 = insertps(auVar215,*(undefined4 *)(param_1 + lVar39),0x20);
      local_368 = insertps(auVar215,*(undefined4 *)(param_1 + lVar41),0x30);
      auVar215 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar27)),
                          *(undefined4 *)(param_1 + 4 + lVar33),0x10);
      auVar215 = insertps(auVar215,*(undefined4 *)(param_1 + 4 + lVar39),0x20);
      _local_548 = insertps(auVar215,*(undefined4 *)(param_1 + 4 + lVar41),0x30);
      auVar215 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar27)),
                          *(undefined4 *)(param_1 + 8 + lVar33),0x10);
      auVar215 = insertps(auVar215,*(undefined4 *)(param_1 + 8 + lVar39),0x20);
      local_358 = insertps(auVar215,*(undefined4 *)(param_1 + 8 + lVar41),0x30);
      uVar25 = *(uint *)(param_1 + 0xc + lVar27);
      local_3f8 = ZEXT416(uVar25);
      uVar169 = *(uint *)(param_1 + 0xc + lVar33);
      local_3e8 = ZEXT416(uVar169);
      uVar173 = *(uint *)(param_1 + 0xc + lVar39);
      local_3d8 = ZEXT416(uVar173);
      auVar215 = insertps(local_3f8,local_3e8,0x10);
      iVar68 = auVar70._8_4_ << 4;
      lVar26 = (longlong)iVar68;
      lVar29 = (longlong)(auVar70._12_4_ * 0x10);
      lVar32 = (longlong)(auVar197._12_4_ << 4);
      lVar35 = (longlong)(piVar1[2] << 4);
      auVar197 = insertps(ZEXT416(*(uint *)(param_1 + lVar26)),*(undefined4 *)(param_1 + lVar29),
                          0x10);
      auVar197 = insertps(auVar197,*(undefined4 *)(param_1 + lVar32),0x20);
      local_348 = insertps(auVar197,*(undefined4 *)(param_1 + lVar35),0x30);
      auVar197 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                          *(undefined4 *)(param_1 + 4 + lVar29),0x10);
      auVar197 = insertps(auVar197,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      local_338 = insertps(auVar197,*(undefined4 *)(param_1 + 4 + lVar35),0x30);
      auVar197 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                          *(undefined4 *)(param_1 + 8 + lVar29),0x10);
      auVar197 = insertps(auVar197,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      local_328 = insertps(auVar197,*(undefined4 *)(param_1 + 8 + lVar35),0x30);
      auVar215 = insertps(auVar215,local_3d8,0x20);
      lVar20 = (longlong)(auVar44._0_4_ << 4);
      lVar30 = (longlong)(auVar44._4_4_ * 0x10);
      local_4c0 = (longlong)(*piVar1 << 4);
      lVar38 = (longlong)(piVar1[3] << 4);
      auVar197 = insertps(ZEXT416(*(uint *)(param_1 + lVar20)),*(undefined4 *)(param_1 + lVar30),
                          0x10);
      auVar197 = insertps(auVar197,*(undefined4 *)(param_1 + local_4c0),0x20);
      local_308 = insertps(auVar197,*(undefined4 *)(param_1 + lVar38),0x30);
      fVar95 = pfVar34[-0xc];
      fVar167 = pfVar34[-0xb];
      fVar107 = pfVar34[-10];
      fVar190 = pfVar34[-9];
      fVar168 = pfVar34[-8];
      fVar172 = pfVar34[-7];
      fVar176 = pfVar34[-6];
      fVar146 = pfVar34[-5];
      fVar108 = pfVar34[-4];
      fVar171 = pfVar34[-3];
      fVar164 = pfVar34[-2];
      fVar186 = pfVar34[-1];
      fVar196 = *pfVar34;
      fVar175 = pfVar34[1];
      fVar109 = pfVar34[2];
      fVar180 = pfVar34[3];
      auVar197 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                          *(undefined4 *)(param_1 + 4 + lVar30),0x10);
      uVar177 = *(uint *)(param_1 + 0xc + lVar41);
      local_428 = ZEXT416(uVar177);
      auVar127 = insertps(auVar215,local_428,0x30);
      uVar187 = *(uint *)(param_1 + 0xc + lVar26);
      local_3c8 = ZEXT416(uVar187);
      uVar191 = *(uint *)(param_1 + 0xc + lVar29);
      local_3b8 = ZEXT416(uVar191);
      auVar215 = insertps(local_3c8,local_3b8,0x10);
      auVar197 = insertps(auVar197,*(undefined4 *)(param_1 + 4 + local_4c0),0x20);
      uVar194 = *(uint *)(param_1 + 0xc + lVar32);
      local_3a8 = ZEXT416(uVar194);
      auVar215 = insertps(auVar215,local_3a8,0x20);
      local_4e8 = insertps(auVar197,*(undefined4 *)(param_1 + 4 + lVar38),0x30);
      uVar150 = *(uint *)(param_1 + 0xc + lVar35);
      local_418 = ZEXT416(uVar150);
      auVar71 = insertps(auVar215,local_418,0x30);
      auVar215 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                          *(undefined4 *)(param_1 + 8 + lVar30),0x10);
      auVar215 = insertps(auVar215,*(undefined4 *)(param_1 + 8 + local_4c0),0x20);
      local_318 = insertps(auVar215,*(undefined4 *)(param_1 + 8 + lVar38),0x30);
      uVar156 = *(uint *)(param_1 + 0xc + lVar20);
      local_398 = ZEXT416(uVar156);
      uVar159 = *(uint *)(param_1 + 0xc + lVar30);
      local_388 = ZEXT416(uVar159);
      auVar215 = insertps(local_398,local_388,0x10);
      uVar162 = *(uint *)(param_1 + 0xc + local_4c0);
      local_378 = ZEXT416(uVar162);
      auVar215 = insertps(auVar215,local_378,0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar38);
      local_408 = ZEXT416(uVar8);
      auVar72 = insertps(auVar215,local_408,0x30);
      auVar215 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar43);
      auVar197 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar43);
      pfVar2 = (float *)(param_3 + lVar43);
      auVar111 = insertps(auVar197,auVar215,0x8c);
      fVar96 = local_368._0_4_;
      fVar195 = local_348._0_4_ - fVar96;
      fVar218 = local_368._4_4_;
      fVar199 = local_348._4_4_ - fVar218;
      fVar219 = local_368._8_4_;
      fVar200 = local_348._8_4_ - fVar219;
      fVar220 = local_368._12_4_;
      fVar201 = local_348._12_4_ - fVar220;
      fVar148 = local_338._0_4_;
      fVar154 = local_338._4_4_;
      fVar157 = local_338._8_4_;
      fVar160 = local_338._12_4_;
      fVar135 = local_358._0_4_;
      fVar110 = local_328._0_4_ - fVar135;
      fVar140 = local_358._4_4_;
      fVar121 = local_328._4_4_ - fVar140;
      fVar142 = local_358._8_4_;
      fVar122 = local_328._8_4_ - fVar142;
      fVar144 = local_358._12_4_;
      fVar123 = local_328._12_4_ - fVar144;
      fVar221 = local_308._0_4_ - fVar96;
      fVar224 = local_308._4_4_ - fVar218;
      fVar226 = local_308._8_4_ - fVar219;
      fVar228 = local_308._12_4_ - fVar220;
      fVar202 = local_4e8._0_4_;
      fVar204 = local_4e8._4_4_;
      fVar206 = local_4e8._8_4_;
      fVar208 = local_4e8._12_4_;
      fVar178 = local_318._0_4_;
      fVar184 = local_318._4_4_;
      fVar188 = local_318._8_4_;
      fVar192 = local_318._12_4_;
      auVar216._0_4_ = fVar110 * fVar95;
      auVar216._4_4_ = fVar121 * fVar168;
      auVar216._8_4_ = fVar122 * fVar108;
      auVar216._12_4_ = fVar123 * fVar196;
      fVar125 = fVar221 * fVar167 + fVar195 * fVar95;
      fVar132 = fVar224 * fVar172 + fVar199 * fVar168;
      fVar133 = fVar226 * fVar171 + fVar200 * fVar108;
      fVar134 = fVar228 * fVar175 + fVar201 * fVar196;
      fVar136 = (fVar202 - (float)local_548._0_4_) * fVar167 +
                (fVar148 - (float)local_548._0_4_) * fVar95;
      fVar141 = (fVar204 - (float)local_548._4_4_) * fVar172 +
                (fVar154 - (float)local_548._4_4_) * fVar168;
      fVar143 = (fVar206 - fStack_540) * fVar171 + (fVar157 - fStack_540) * fVar108;
      fVar145 = (fVar208 - fStack_53c) * fVar175 + (fVar160 - fStack_53c) * fVar196;
      fVar163 = (fVar178 - fVar135) * fVar167 + auVar216._0_4_;
      fVar166 = (fVar184 - fVar140) * fVar172 + auVar216._4_4_;
      fVar170 = (fVar188 - fVar142) * fVar171 + auVar216._8_4_;
      fVar174 = (fVar192 - fVar144) * fVar175 + auVar216._12_4_;
      fVar222 = fVar221 * fVar190 + fVar195 * fVar107;
      fVar225 = fVar224 * fVar146 + fVar199 * fVar176;
      fVar227 = fVar226 * fVar186 + fVar200 * fVar164;
      fVar229 = fVar228 * fVar180 + fVar201 * fVar109;
      fVar203 = (fVar202 - (float)local_548._0_4_) * fVar190 +
                (fVar148 - (float)local_548._0_4_) * fVar107;
      fVar205 = (fVar204 - (float)local_548._4_4_) * fVar146 +
                (fVar154 - (float)local_548._4_4_) * fVar176;
      fVar207 = (fVar206 - fStack_540) * fVar186 + (fVar157 - fStack_540) * fVar164;
      fVar209 = (fVar208 - fStack_53c) * fVar180 + (fVar160 - fStack_53c) * fVar109;
      fVar179 = (fVar178 - fVar135) * fVar190 + fVar110 * fVar107;
      fVar185 = (fVar184 - fVar140) * fVar146 + fVar121 * fVar176;
      fVar189 = (fVar188 - fVar142) * fVar186 + fVar122 * fVar164;
      fVar193 = (fVar192 - fVar144) * fVar180 + fVar123 * fVar109;
      auVar112._0_4_ = fVar163 * fVar163 + fVar136 * fVar136 + fVar125 * fVar125;
      auVar112._4_4_ = fVar166 * fVar166 + fVar141 * fVar141 + fVar132 * fVar132;
      auVar112._8_4_ = fVar170 * fVar170 + fVar143 * fVar143 + fVar133 * fVar133;
      auVar112._12_4_ = fVar174 * fVar174 + fVar145 * fVar145 + fVar134 * fVar134;
      auVar217 = sqrtps(auVar216,auVar112);
      auVar198._0_4_ = fVar203 * fVar203 + fVar222 * fVar222;
      auVar198._4_4_ = fVar205 * fVar205 + fVar225 * fVar225;
      auVar198._8_4_ = fVar207 * fVar207 + fVar227 * fVar227;
      auVar198._12_4_ = fVar209 * fVar209 + fVar229 * fVar229;
      auVar151._0_4_ = fVar179 * fVar179 + auVar198._0_4_;
      auVar151._4_4_ = fVar185 * fVar185 + auVar198._4_4_;
      auVar151._8_4_ = fVar189 * fVar189 + auVar198._8_4_;
      auVar151._12_4_ = fVar193 * fVar193 + auVar198._12_4_;
      auVar44 = sqrtps(auVar198,auVar151);
      auVar70 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar217);
      fVar149 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar217._0_4_) &
                       auVar70._0_4_);
      fVar155 = (float)(-(uint)(_UNK_1506895d4 < auVar217._4_4_) & auVar70._4_4_);
      fVar158 = (float)(-(uint)(_UNK_1506895d8 < auVar217._8_4_) & auVar70._8_4_);
      fVar161 = (float)(-(uint)(_UNK_1506895dc < auVar217._12_4_) & auVar70._12_4_);
      auVar70 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar44);
      fVar210 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar44._0_4_) &
                       auVar70._0_4_);
      fVar212 = (float)(-(uint)(_UNK_1506895d4 < auVar44._4_4_) & auVar70._4_4_);
      fVar213 = (float)(-(uint)(_UNK_1506895d8 < auVar44._8_4_) & auVar70._8_4_);
      fVar214 = (float)(-(uint)(_UNK_1506895dc < auVar44._12_4_) & auVar70._12_4_);
      fVar125 = fVar125 * fVar149;
      fVar132 = fVar132 * fVar155;
      fVar133 = fVar133 * fVar158;
      fVar134 = fVar134 * fVar161;
      fVar136 = fVar136 * fVar149;
      fVar141 = fVar141 * fVar155;
      fVar143 = fVar143 * fVar158;
      fVar145 = fVar145 * fVar161;
      fVar163 = fVar163 * fVar149;
      fVar166 = fVar166 * fVar155;
      fVar170 = fVar170 * fVar158;
      fVar174 = fVar174 * fVar161;
      fVar222 = fVar222 * fVar210;
      fVar225 = fVar225 * fVar212;
      fVar227 = fVar227 * fVar213;
      fVar229 = fVar229 * fVar214;
      fVar203 = fVar203 * fVar210;
      fVar205 = fVar205 * fVar212;
      fVar207 = fVar207 * fVar213;
      fVar209 = fVar209 * fVar214;
      fVar179 = fVar179 * fVar210;
      fVar185 = fVar185 * fVar212;
      fVar189 = fVar189 * fVar213;
      fVar193 = fVar193 * fVar214;
      local_2b8 = auVar217._0_4_ - auVar215._0_4_ * param_11;
      fStack_2b4 = auVar217._4_4_ - auVar215._12_4_ * param_11;
      fStack_2b0 = auVar217._8_4_ - auVar197._8_4_ * param_11;
      fStack_2ac = auVar217._12_4_ - pfVar2[1] * param_11;
      local_4f8 = auVar44._0_4_ - auVar215._4_4_ * param_10;
      fStack_4f4 = auVar44._4_4_ - auVar197._0_4_ * param_10;
      fStack_4f0 = auVar44._8_4_ - auVar197._12_4_ * param_10;
      fStack_4ec = auVar44._12_4_ - pfVar2[2] * param_10;
      local_6d8 = auVar111._0_4_;
      fStack_6d4 = auVar111._4_4_;
      local_558._0_4_ = (fVar163 * fVar179 + fVar136 * fVar203 + fVar125 * fVar222) - local_6d8;
      local_558._4_4_ = (fVar166 * fVar185 + fVar141 * fVar205 + fVar132 * fVar225) - fStack_6d4;
      fStack_550 = (fVar170 * fVar189 + fVar143 * fVar207 + fVar133 * fVar227) - *pfVar2;
      fStack_54c = (fVar174 * fVar193 + fVar145 * fVar209 + fVar134 * fVar229) - pfVar2[3];
      fVar110 = fVar107 * fVar222;
      fVar122 = fVar176 * fVar225;
      fVar195 = fVar164 * fVar227;
      fVar200 = fVar109 * fVar229;
      fVar121 = fVar107 * fVar203;
      fVar123 = fVar176 * fVar205;
      fVar199 = fVar164 * fVar207;
      fVar201 = fVar109 * fVar209;
      local_538 = fVar107 * fVar179;
      fStack_534 = fVar176 * fVar185;
      fStack_530 = fVar164 * fVar189;
      fStack_52c = fVar109 * fVar193;
      fVar221 = fVar190 * fVar222;
      fVar80 = fVar146 * fVar225;
      fVar85 = fVar186 * fVar227;
      fVar90 = fVar180 * fVar229;
      fVar224 = fVar190 * fVar203;
      fVar81 = fVar146 * fVar205;
      fVar86 = fVar186 * fVar207;
      fVar91 = fVar180 * fVar209;
      fVar226 = fVar190 * fVar179;
      fVar82 = fVar146 * fVar185;
      fVar87 = fVar186 * fVar189;
      fVar92 = fVar180 * fVar193;
      fVar228 = fVar95 * fVar125;
      fVar83 = fVar168 * fVar132;
      fVar88 = fVar108 * fVar133;
      fVar93 = fVar196 * fVar134;
      local_518 = fVar95 * fVar136;
      fStack_514 = fVar168 * fVar141;
      fStack_510 = fVar108 * fVar143;
      fStack_50c = fVar196 * fVar145;
      local_2c8 = fVar95 * fVar163;
      fStack_2c4 = fVar168 * fVar166;
      fStack_2c0 = fVar108 * fVar170;
      fStack_2bc = fVar196 * fVar174;
      local_298 = fVar167 * fVar125;
      fStack_294 = fVar172 * fVar132;
      fStack_290 = fVar171 * fVar133;
      fStack_28c = fVar175 * fVar134;
      local_288 = fVar167 * fVar136;
      fStack_284 = fVar172 * fVar141;
      fStack_280 = fVar171 * fVar143;
      fStack_27c = fVar175 * fVar145;
      fVar69 = fVar167 * fVar163;
      fVar84 = fVar172 * fVar166;
      fVar89 = fVar171 * fVar170;
      fVar94 = fVar175 * fVar174;
      local_2a8 = fVar107 * fVar125 * fVar210 + fVar95 * fVar222 * fVar149;
      fStack_2a4 = fVar176 * fVar132 * fVar212 + fVar168 * fVar225 * fVar155;
      fStack_2a0 = fVar164 * fVar133 * fVar213 + fVar108 * fVar227 * fVar158;
      fStack_29c = fVar109 * fVar134 * fVar214 + fVar196 * fVar229 * fVar161;
      local_2d8 = fVar107 * fVar136 * fVar210 + fVar95 * fVar203 * fVar149;
      fStack_2d4 = fVar176 * fVar141 * fVar212 + fVar168 * fVar205 * fVar155;
      fStack_2d0 = fVar164 * fVar143 * fVar213 + fVar108 * fVar207 * fVar158;
      fStack_2cc = fVar109 * fVar145 * fVar214 + fVar196 * fVar209 * fVar161;
      fVar95 = fVar107 * fVar163 * fVar210 + fVar95 * fVar179 * fVar149;
      fVar107 = fVar176 * fVar166 * fVar212 + fVar168 * fVar185 * fVar155;
      fVar108 = fVar164 * fVar170 * fVar213 + fVar108 * fVar189 * fVar158;
      fVar109 = fVar109 * fVar174 * fVar214 + fVar196 * fVar193 * fVar161;
      local_2e8 = fVar125 * fVar210 * fVar190 + fVar222 * fVar149 * fVar167;
      fStack_2e4 = fVar132 * fVar212 * fVar146 + fVar225 * fVar155 * fVar172;
      fStack_2e0 = fVar133 * fVar213 * fVar186 + fVar227 * fVar158 * fVar171;
      fStack_2dc = fVar134 * fVar214 * fVar180 + fVar229 * fVar161 * fVar175;
      local_2f8 = fVar136 * fVar210 * fVar190 + fVar203 * fVar149 * fVar167;
      fStack_2f4 = fVar141 * fVar212 * fVar146 + fVar205 * fVar155 * fVar172;
      fStack_2f0 = fVar143 * fVar213 * fVar186 + fVar207 * fVar158 * fVar171;
      fStack_2ec = fVar145 * fVar214 * fVar180 + fVar209 * fVar161 * fVar175;
      fVar164 = fVar163 * fVar210 * fVar190 + fVar179 * fVar149 * fVar167;
      fVar167 = fVar166 * fVar212 * fVar146 + fVar185 * fVar155 * fVar172;
      fVar171 = fVar170 * fVar213 * fVar186 + fVar189 * fVar158 * fVar171;
      fVar175 = fVar174 * fVar214 * fVar180 + fVar193 * fVar161 * fVar175;
      auVar215 = *(undefined1 (*) [16])(param_6 + -0x20 + lVar43);
      auVar197 = *(undefined1 (*) [16])(param_6 + -0x10 + lVar43);
      pfVar7 = (float *)(param_6 + lVar43);
      fVar146 = *pfVar7;
      fVar196 = pfVar7[3];
      auVar70 = insertps(auVar197,auVar215,0x8c);
      auVar217._0_8_ = auVar70._0_8_;
      auVar217._8_4_ = fVar146;
      auVar217._12_4_ = fVar196;
      auVar111 = *(undefined1 (*) [16])(param_5 + -0x20 + lVar43);
      auVar44 = *(undefined1 (*) [16])(param_5 + -0x10 + lVar43);
      pfVar2 = (float *)(param_5 + lVar43);
      auVar211 = insertps(auVar44,auVar111,0x8c);
      fVar168 = *param_9;
      fVar172 = param_9[1];
      fVar176 = param_9[2];
      fVar180 = fVar168 * auVar111._0_4_;
      fVar186 = fVar168 * auVar111._12_4_;
      fVar190 = fVar168 * auVar44._8_4_;
      fVar132 = fVar172 * auVar111._4_4_;
      fVar133 = fVar172 * auVar44._0_4_;
      fVar134 = fVar172 * auVar44._12_4_;
      fVar141 = fVar176 * auVar211._0_4_;
      fVar143 = fVar176 * auVar211._4_4_;
      auVar97._0_4_ = param_7 * fVar180 * param_7;
      auVar97._4_4_ = param_7 * fVar186 * param_7;
      auVar97._8_4_ = param_7 * fVar190 * param_7;
      auVar97._12_4_ = param_7 * fVar168 * pfVar2[1] * param_7;
      auVar111 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar97);
      local_648 = auVar127._0_4_;
      fStack_644 = auVar127._4_4_;
      fStack_640 = auVar127._8_4_;
      fStack_63c = auVar127._12_4_;
      local_6f8._0_4_ = auVar71._0_4_;
      local_6f8._4_4_ = auVar71._4_4_;
      fStack_6f0 = auVar71._8_4_;
      fStack_6ec = auVar71._12_4_;
      local_6c8._0_4_ = auVar72._0_4_;
      local_6c8._4_4_ = auVar72._4_4_;
      fStack_6c0 = auVar72._8_4_;
      fStack_6bc = auVar72._12_4_;
      auVar113._0_4_ =
           (fVar69 * fVar69 + local_288 * local_288 + local_298 * local_298) *
           (float)local_6c8._0_4_ +
           (local_2c8 * local_2c8 + local_518 * local_518 + fVar228 * fVar228) * (float)local_6f8 +
           ((local_2c8 + fVar69) * (local_2c8 + fVar69) +
           (local_518 + local_288) * (local_518 + local_288) +
           (fVar228 + local_298) * (fVar228 + local_298)) * local_648 + auVar111._0_4_;
      auVar113._4_4_ =
           (fVar84 * fVar84 + fStack_284 * fStack_284 + fStack_294 * fStack_294) *
           (float)local_6c8._4_4_ +
           (fStack_2c4 * fStack_2c4 + fStack_514 * fStack_514 + fVar83 * fVar83) * local_6f8._4_4_ +
           ((fStack_2c4 + fVar84) * (fStack_2c4 + fVar84) +
           (fStack_514 + fStack_284) * (fStack_514 + fStack_284) +
           (fVar83 + fStack_294) * (fVar83 + fStack_294)) * fStack_644 + auVar111._4_4_;
      auVar113._8_4_ =
           (fVar89 * fVar89 + fStack_280 * fStack_280 + fStack_290 * fStack_290) * fStack_6c0 +
           (fStack_2c0 * fStack_2c0 + fStack_510 * fStack_510 + fVar88 * fVar88) * fStack_6f0 +
           ((fStack_2c0 + fVar89) * (fStack_2c0 + fVar89) +
           (fStack_510 + fStack_280) * (fStack_510 + fStack_280) +
           (fVar88 + fStack_290) * (fVar88 + fStack_290)) * fStack_640 + auVar111._8_4_;
      auVar113._12_4_ =
           (fVar94 * fVar94 + fStack_27c * fStack_27c + fStack_28c * fStack_28c) * fStack_6bc +
           (fStack_2bc * fStack_2bc + fStack_50c * fStack_50c + fVar93 * fVar93) * fStack_6ec +
           ((fStack_2bc + fVar94) * (fStack_2bc + fVar94) +
           (fStack_50c + fStack_27c) * (fStack_50c + fStack_27c) +
           (fVar93 + fStack_28c) * (fVar93 + fStack_28c)) * fStack_63c + auVar111._12_4_;
      auVar44._0_4_ = local_2b8 - auVar111._0_4_ * auVar215._0_4_;
      auVar44._4_4_ = fStack_2b4 - auVar111._4_4_ * auVar215._12_4_;
      auVar44._8_4_ = fStack_2b0 - auVar111._8_4_ * auVar197._8_4_;
      auVar44._12_4_ = fStack_2ac - auVar111._12_4_ * pfVar7[1];
      auVar111 = divps(auVar44,auVar113);
      fVar180 = (float)(-(uint)(param_8 <= fVar180) & auVar111._0_4_);
      fVar186 = (float)(-(uint)(param_8 <= fVar186) & auVar111._4_4_);
      fVar190 = (float)(-(uint)(param_8 <= fVar190) & auVar111._8_4_);
      fVar125 = (float)(-(uint)(param_8 <= fVar168 * pfVar2[1]) & auVar111._12_4_);
      auVar98._0_4_ = param_7 * fVar132 * param_7;
      auVar98._4_4_ = param_7 * fVar133 * param_7;
      auVar98._8_4_ = param_7 * fVar134 * param_7;
      auVar98._12_4_ = param_7 * fVar172 * pfVar2[2] * param_7;
      auVar111 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar98);
      auVar137._0_4_ =
           (fVar226 * fVar226 + fVar224 * fVar224 + fVar221 * fVar221) * (float)local_6c8._0_4_ +
           (local_538 * local_538 + fVar121 * fVar121 + fVar110 * fVar110) * (float)local_6f8 +
           ((local_538 + fVar226) * (local_538 + fVar226) +
           (fVar121 + fVar224) * (fVar121 + fVar224) + (fVar110 + fVar221) * (fVar110 + fVar221)) *
           local_648 + auVar111._0_4_;
      auVar137._4_4_ =
           (fVar82 * fVar82 + fVar81 * fVar81 + fVar80 * fVar80) * (float)local_6c8._4_4_ +
           (fStack_534 * fStack_534 + fVar123 * fVar123 + fVar122 * fVar122) * local_6f8._4_4_ +
           ((fStack_534 + fVar82) * (fStack_534 + fVar82) +
           (fVar123 + fVar81) * (fVar123 + fVar81) + (fVar122 + fVar80) * (fVar122 + fVar80)) *
           fStack_644 + auVar111._4_4_;
      auVar137._8_4_ =
           (fVar87 * fVar87 + fVar86 * fVar86 + fVar85 * fVar85) * fStack_6c0 +
           (fStack_530 * fStack_530 + fVar199 * fVar199 + fVar195 * fVar195) * fStack_6f0 +
           ((fStack_530 + fVar87) * (fStack_530 + fVar87) +
           (fVar199 + fVar86) * (fVar199 + fVar86) + (fVar195 + fVar85) * (fVar195 + fVar85)) *
           fStack_640 + auVar111._8_4_;
      auVar137._12_4_ =
           (fVar92 * fVar92 + fVar91 * fVar91 + fVar90 * fVar90) * fStack_6bc +
           (fStack_52c * fStack_52c + fVar201 * fVar201 + fVar200 * fVar200) * fStack_6ec +
           ((fStack_52c + fVar92) * (fStack_52c + fVar92) +
           (fVar201 + fVar91) * (fVar201 + fVar91) + (fVar200 + fVar90) * (fVar200 + fVar90)) *
           fStack_63c + auVar111._12_4_;
      auVar72._0_4_ = local_4f8 - auVar111._0_4_ * auVar215._4_4_;
      auVar72._4_4_ = fStack_4f4 - auVar111._4_4_ * auVar197._0_4_;
      auVar72._8_4_ = fStack_4f0 - auVar111._8_4_ * auVar197._12_4_;
      auVar72._12_4_ = fStack_4ec - auVar111._12_4_ * pfVar7[2];
      auVar111 = divps(auVar72,auVar137);
      fVar132 = (float)(-(uint)(param_8 <= fVar132) & auVar111._0_4_);
      fVar133 = (float)(-(uint)(param_8 <= fVar133) & auVar111._4_4_);
      fVar134 = (float)(-(uint)(param_8 <= fVar134) & auVar111._8_4_);
      fVar136 = (float)(-(uint)(param_8 <= fVar172 * pfVar2[2]) & auVar111._12_4_);
      auVar99._0_4_ = param_7 * fVar141 * param_7;
      auVar99._4_4_ = param_7 * fVar143 * param_7;
      auVar99._8_4_ = param_7 * fVar176 * *pfVar2 * param_7;
      auVar99._12_4_ = param_7 * fVar176 * pfVar2[3] * param_7;
      auVar111 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar99);
      auVar128._0_4_ =
           (fVar164 * fVar164 + local_2f8 * local_2f8 + local_2e8 * local_2e8) *
           (float)local_6c8._0_4_ +
           (fVar95 * fVar95 + local_2d8 * local_2d8 + local_2a8 * local_2a8) * (float)local_6f8 +
           ((fVar95 + fVar164) * (fVar95 + fVar164) +
           (local_2d8 + local_2f8) * (local_2d8 + local_2f8) +
           (local_2a8 + local_2e8) * (local_2a8 + local_2e8)) * local_648 + auVar111._0_4_;
      auVar128._4_4_ =
           (fVar167 * fVar167 + fStack_2f4 * fStack_2f4 + fStack_2e4 * fStack_2e4) *
           (float)local_6c8._4_4_ +
           (fVar107 * fVar107 + fStack_2d4 * fStack_2d4 + fStack_2a4 * fStack_2a4) * local_6f8._4_4_
           + ((fVar107 + fVar167) * (fVar107 + fVar167) +
             (fStack_2d4 + fStack_2f4) * (fStack_2d4 + fStack_2f4) +
             (fStack_2a4 + fStack_2e4) * (fStack_2a4 + fStack_2e4)) * fStack_644 + auVar111._4_4_;
      auVar128._8_4_ =
           (fVar171 * fVar171 + fStack_2f0 * fStack_2f0 + fStack_2e0 * fStack_2e0) * fStack_6c0 +
           (fVar108 * fVar108 + fStack_2d0 * fStack_2d0 + fStack_2a0 * fStack_2a0) * fStack_6f0 +
           ((fVar108 + fVar171) * (fVar108 + fVar171) +
           (fStack_2d0 + fStack_2f0) * (fStack_2d0 + fStack_2f0) +
           (fStack_2a0 + fStack_2e0) * (fStack_2a0 + fStack_2e0)) * fStack_640 + auVar111._8_4_;
      auVar128._12_4_ =
           (fVar175 * fVar175 + fStack_2ec * fStack_2ec + fStack_2dc * fStack_2dc) * fStack_6bc +
           (fVar109 * fVar109 + fStack_2cc * fStack_2cc + fStack_29c * fStack_29c) * fStack_6ec +
           ((fVar109 + fVar175) * (fVar109 + fVar175) +
           (fStack_2cc + fStack_2ec) * (fStack_2cc + fStack_2ec) +
           (fStack_29c + fStack_2dc) * (fStack_29c + fStack_2dc)) * fStack_63c + auVar111._12_4_;
      local_508._0_4_ = auVar70._0_4_;
      local_508._4_4_ = auVar70._4_4_;
      auVar127._0_4_ = (float)local_558._0_4_ - auVar111._0_4_ * (float)local_508._0_4_;
      auVar127._4_4_ = (float)local_558._4_4_ - auVar111._4_4_ * (float)local_508._4_4_;
      auVar127._8_4_ = fStack_550 - auVar111._8_4_ * fVar146;
      auVar127._12_4_ = fStack_54c - auVar111._12_4_ * fVar196;
      auVar111 = divps(auVar127,auVar128);
      fVar141 = (float)(-(uint)(param_8 <= fVar141) & auVar111._0_4_);
      fVar143 = (float)(-(uint)(param_8 <= fVar143) & auVar111._4_4_);
      fVar145 = (float)(-(uint)(param_8 <= fVar176 * *pfVar2) & auVar111._8_4_);
      fVar149 = (float)(-(uint)(param_8 <= fVar176 * pfVar2[3]) & auVar111._12_4_);
      auVar70._0_8_ = CONCAT44(auVar215._12_4_ + fVar186,auVar215._0_4_ + fVar180);
      auVar70._8_4_ = auVar197._8_4_ + fVar190;
      auVar70._12_4_ = pfVar7[1] + fVar125;
      fVar168 = auVar197._0_4_ + fVar133;
      fVar172 = auVar197._12_4_ + fVar134;
      fVar176 = pfVar7[2] + fVar136;
      auVar211._0_4_ = (float)local_508._0_4_ + fVar141;
      auVar211._4_4_ = (float)local_508._4_4_ + fVar143;
      auVar211._8_4_ = fVar146 + fVar145;
      auVar211._12_4_ = fVar196 + fVar149;
      auVar100._8_4_ = auVar70._8_4_;
      auVar100._0_8_ = auVar70._0_8_;
      auVar100._12_4_ = auVar70._12_4_;
      auVar197._4_4_ = fVar168;
      auVar197._0_4_ = auVar215._4_4_ + fVar132;
      auVar197._8_4_ = fVar172;
      auVar197._12_4_ = fVar176;
      auVar215 = insertps(auVar100,auVar197,0x30);
      auVar215 = insertps(auVar215,auVar211,0x20);
      puVar4 = (undefined4 *)(param_6 + -0x20 + lVar43);
      *puVar4 = auVar215._0_4_;
      puVar4[1] = auVar215._12_4_;
      puVar4[2] = auVar215._8_4_;
      puVar4[3] = auVar215._4_4_;
      auVar101._4_4_ = fVar172;
      auVar101._0_4_ = fVar168;
      auVar101._8_4_ = auVar211._0_4_;
      auVar101._12_4_ = auVar211._4_4_;
      auVar215 = blendps(auVar101,auVar70,4);
      puVar4 = (undefined4 *)(param_6 + -0x10 + lVar43);
      *puVar4 = auVar215._0_4_;
      puVar4[1] = auVar215._12_4_;
      puVar4[2] = auVar215._8_4_;
      puVar4[3] = auVar215._4_4_;
      pfVar2 = (float *)(param_6 + lVar43);
      *pfVar2 = auVar211._8_4_;
      pfVar2[1] = auVar70._12_4_;
      pfVar2[2] = fVar176;
      pfVar2[3] = auVar211._12_4_;
      fVar110 = local_2a8 * fVar141 + fVar110 * fVar132 + fVar228 * fVar180;
      fVar122 = fStack_2a4 * fVar143 + fVar122 * fVar133 + fVar83 * fVar186;
      fVar195 = fStack_2a0 * fVar145 + fVar195 * fVar134 + fVar88 * fVar190;
      fVar200 = fStack_29c * fVar149 + fVar200 * fVar136 + fVar93 * fVar125;
      fVar121 = local_2d8 * fVar141 + fVar121 * fVar132 + local_518 * fVar180;
      fVar123 = fStack_2d4 * fVar143 + fVar123 * fVar133 + fStack_514 * fVar186;
      fVar199 = fStack_2d0 * fVar145 + fVar199 * fVar134 + fStack_510 * fVar190;
      fVar201 = fStack_2cc * fVar149 + fVar201 * fVar136 + fStack_50c * fVar125;
      fVar168 = fVar95 * fVar141 + local_538 * fVar132 + local_2c8 * fVar180;
      fVar172 = fVar107 * fVar143 + fStack_534 * fVar133 + fStack_2c4 * fVar186;
      fVar176 = fVar108 * fVar145 + fStack_530 * fVar134 + fStack_2c0 * fVar190;
      fVar146 = fVar109 * fVar149 + fStack_52c * fVar136 + fStack_2bc * fVar125;
      fVar196 = local_2e8 * fVar141 + fVar221 * fVar132 + local_298 * fVar180;
      fVar109 = fStack_2e4 * fVar143 + fVar80 * fVar133 + fStack_294 * fVar186;
      fVar108 = fStack_2e0 * fVar145 + fVar85 * fVar134 + fStack_290 * fVar190;
      fVar95 = fStack_2dc * fVar149 + fVar90 * fVar136 + fStack_28c * fVar125;
      fVar107 = local_2f8 * fVar141 + fVar224 * fVar132 + local_288 * fVar180;
      fVar221 = fStack_2f4 * fVar143 + fVar81 * fVar133 + fStack_284 * fVar186;
      fVar224 = fStack_2f0 * fVar145 + fVar86 * fVar134 + fStack_280 * fVar190;
      fVar228 = fStack_2ec * fVar149 + fVar91 * fVar136 + fStack_27c * fVar125;
      fVar180 = fVar141 * fVar164 + fVar132 * fVar226 + fVar180 * fVar69;
      fVar164 = fVar143 * fVar167 + fVar133 * fVar82 + fVar186 * fVar84;
      fVar171 = fVar145 * fVar171 + fVar134 * fVar87 + fVar190 * fVar89;
      fVar175 = fVar149 * fVar175 + fVar136 * fVar92 + fVar125 * fVar94;
      auVar215._4_4_ = -(uint)(0.0 < fStack_644);
      auVar215._0_4_ = -(uint)(0.0 < local_648);
      auVar215._8_4_ = -(uint)(0.0 < fStack_640);
      auVar215._12_4_ = -(uint)(0.0 < fStack_63c);
      iVar37 = movmskps((int)param_9,auVar215);
      if (iVar37 != 0) {
        bVar36 = (char)((char)iVar37 << 4) >> 4;
        fVar96 = fVar96 + (fVar110 + fVar196) * local_648;
        auVar45._4_4_ = fVar218 + (fVar122 + fVar109) * fStack_644;
        auVar45._0_4_ = fVar96;
        auVar45._8_4_ = fVar219 + (fVar195 + fVar108) * fStack_640;
        auVar45._12_4_ = fVar220 + (fVar200 + fVar95) * fStack_63c;
        if ((bVar36 & 1) != 0) {
          *(float *)(param_1 + lVar27) = fVar96;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar45,1);
          *(undefined8 *)(param_1 + lVar33) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar45,2);
          *(undefined8 *)(param_1 + lVar39) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar45,3);
          *(undefined8 *)(param_1 + lVar41) = uVar9;
        }
        fVar186 = (float)local_548._0_4_ + (fVar121 + fVar107) * local_648;
        auVar46._4_4_ = (float)local_548._4_4_ + (fVar123 + fVar221) * fStack_644;
        auVar46._0_4_ = fVar186;
        auVar46._8_4_ = fStack_540 + (fVar199 + fVar224) * fStack_640;
        auVar46._12_4_ = fStack_53c + (fVar201 + fVar228) * fStack_63c;
        if ((bVar36 & 1) != 0) {
          *(float *)(param_1 + 4 + lVar27) = fVar186;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar46,1);
          *(undefined8 *)(param_1 + 4 + lVar33) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar46,2);
          *(undefined8 *)(param_1 + 4 + lVar39) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar46,3);
          *(undefined8 *)(param_1 + 4 + lVar41) = uVar9;
        }
        auVar47._0_4_ = fVar135 + local_648 * (fVar168 + fVar180);
        auVar47._4_4_ = fVar140 + fStack_644 * (fVar172 + fVar164);
        auVar47._8_4_ = fVar142 + fStack_640 * (fVar176 + fVar171);
        auVar47._12_4_ = fVar144 + fStack_63c * (fVar146 + fVar175);
        if ((bVar36 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar27) = auVar47._0_4_;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar47,1);
          *(undefined8 *)(param_1 + 8 + lVar33) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar47,2);
          *(undefined8 *)(param_1 + 8 + lVar39) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar47,3);
          *(undefined8 *)(param_1 + 8 + lVar41) = uVar9;
        }
        if ((bVar36 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar27) = uVar25;
        }
        if ((bVar36 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar33) = uVar169;
        }
        if ((bVar36 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar173;
        }
        if ((char)bVar36 < '\0') {
          *(uint *)(param_1 + 0xc + lVar41) = uVar177;
        }
      }
      auVar48._4_4_ = -(uint)(0.0 < local_6f8._4_4_);
      auVar48._0_4_ = -(uint)(0.0 < (float)local_6f8);
      auVar48._8_4_ = -(uint)(0.0 < fStack_6f0);
      auVar48._12_4_ = -(uint)(0.0 < fStack_6ec);
      iVar37 = movmskps(iVar124,auVar48);
      if (iVar37 != 0) {
        bVar36 = (char)((char)iVar37 << 4) >> 4;
        auVar129._0_4_ = local_348._0_4_ - fVar110 * (float)local_6f8;
        auVar129._4_4_ = local_348._4_4_ - fVar122 * local_6f8._4_4_;
        auVar129._8_4_ = local_348._8_4_ - fVar195 * fStack_6f0;
        auVar129._12_4_ = local_348._12_4_ - fVar200 * fStack_6ec;
        if ((bVar36 & 1) != 0) {
          *(float *)(param_1 + lVar26) = auVar129._0_4_;
        }
        if ((bVar36 & 2) == 0) {
          if ((bVar36 & 4) == 0) goto LAB_1409b069a;
LAB_1409b0971:
          uVar9 = extractps(auVar129,2);
          *(undefined8 *)(param_1 + lVar32) = uVar9;
          if ((char)bVar36 < '\0') goto LAB_1409b0980;
LAB_1409b06a2:
          auVar114._0_4_ = fVar148 - fVar121 * (float)local_6f8;
          auVar114._4_4_ = fVar154 - fVar123 * local_6f8._4_4_;
          auVar114._8_4_ = fVar157 - fVar199 * fStack_6f0;
          auVar114._12_4_ = fVar160 - fVar201 * fStack_6ec;
        }
        else {
          uVar9 = extractps(auVar129,1);
          *(undefined8 *)(param_1 + lVar29) = uVar9;
          if ((bVar36 & 4) != 0) goto LAB_1409b0971;
LAB_1409b069a:
          if (-1 < (char)bVar36) goto LAB_1409b06a2;
LAB_1409b0980:
          uVar9 = extractps(auVar129,3);
          *(undefined8 *)(param_1 + lVar35) = uVar9;
          auVar114._0_4_ = fVar148 - fVar121 * (float)local_6f8;
          auVar114._4_4_ = fVar154 - fVar123 * local_6f8._4_4_;
          auVar114._8_4_ = fVar157 - fVar199 * fStack_6f0;
          auVar114._12_4_ = fVar160 - fVar201 * fStack_6ec;
        }
        if ((bVar36 & 1) != 0) {
          *(int *)(param_1 + 4 + lVar26) = auVar114._0_4_;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar114,1);
          *(undefined8 *)(param_1 + 4 + lVar29) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar114,2);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar114,3);
          *(undefined8 *)(param_1 + 4 + lVar35) = uVar9;
        }
        auVar49._0_4_ = local_328._0_4_ - (float)local_6f8 * fVar168;
        auVar49._4_4_ = local_328._4_4_ - local_6f8._4_4_ * fVar172;
        auVar49._8_4_ = local_328._8_4_ - fStack_6f0 * fVar176;
        auVar49._12_4_ = local_328._12_4_ - fStack_6ec * fVar146;
        if ((bVar36 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar26) = auVar49._0_4_;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar49,1);
          *(undefined8 *)(param_1 + 8 + lVar29) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar49,2);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar49,3);
          *(undefined8 *)(param_1 + 8 + lVar35) = uVar9;
        }
        if ((bVar36 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar26) = uVar187;
        }
        if ((bVar36 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar191;
        }
        if ((bVar36 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar32) = uVar194;
        }
        if ((char)bVar36 < '\0') {
          *(uint *)(param_1 + 0xc + lVar35) = uVar150;
        }
      }
      auVar50._4_4_ = -(uint)(0.0 < (float)local_6c8._4_4_);
      auVar50._0_4_ = -(uint)(0.0 < (float)local_6c8._0_4_);
      auVar50._8_4_ = -(uint)(0.0 < fStack_6c0);
      auVar50._12_4_ = -(uint)(0.0 < fStack_6bc);
      iVar37 = movmskps(iVar68,auVar50);
      if (iVar37 != 0) {
        bVar36 = (char)((char)iVar37 << 4) >> 4;
        auVar51._0_4_ = local_308._0_4_ - fVar196 * (float)local_6c8._0_4_;
        auVar51._4_4_ = local_308._4_4_ - fVar109 * (float)local_6c8._4_4_;
        auVar51._8_4_ = local_308._8_4_ - fVar108 * fStack_6c0;
        auVar51._12_4_ = local_308._12_4_ - fVar95 * fStack_6bc;
        if ((bVar36 & 1) == 0) {
          if ((bVar36 & 2) == 0) goto LAB_1409b0777;
LAB_1409b0a99:
          uVar9 = extractps(auVar51,1);
          *(undefined8 *)(param_1 + lVar30) = uVar9;
          if ((bVar36 & 4) != 0) goto LAB_1409b0aa9;
LAB_1409b0780:
          if (-1 < (char)bVar36) goto LAB_1409b0788;
LAB_1409b0ab9:
          uVar9 = extractps(auVar51,3);
          *(undefined8 *)(param_1 + lVar38) = uVar9;
          auVar102._0_4_ = fVar202 - fVar107 * (float)local_6c8._0_4_;
          auVar102._4_4_ = fVar204 - fVar221 * (float)local_6c8._4_4_;
          auVar102._8_4_ = fVar206 - fVar224 * fStack_6c0;
          auVar102._12_4_ = fVar208 - fVar228 * fStack_6bc;
          if ((bVar36 & 1) != 0) goto LAB_1409b0ada;
LAB_1409b0799:
          if ((bVar36 & 2) == 0) goto LAB_1409b07aa;
LAB_1409b0af1:
          uVar9 = extractps(auVar102,1);
          *(undefined8 *)(param_1 + 4 + lVar30) = uVar9;
          if ((bVar36 & 4) != 0) goto LAB_1409b0b02;
LAB_1409b07b3:
          if (-1 < (char)bVar36) goto LAB_1409b07bb;
LAB_1409b0b13:
          uVar9 = extractps(auVar102,3);
          *(undefined8 *)(param_1 + 4 + lVar38) = uVar9;
          auVar52._0_4_ = fVar178 - (float)local_6c8._0_4_ * fVar180;
          auVar52._4_4_ = fVar184 - (float)local_6c8._4_4_ * fVar164;
          auVar52._8_4_ = fVar188 - fStack_6c0 * fVar171;
          auVar52._12_4_ = fVar192 - fStack_6bc * fVar175;
        }
        else {
          *(float *)(param_1 + lVar20) = auVar51._0_4_;
          if ((bVar36 & 2) != 0) goto LAB_1409b0a99;
LAB_1409b0777:
          if ((bVar36 & 4) == 0) goto LAB_1409b0780;
LAB_1409b0aa9:
          uVar9 = extractps(auVar51,2);
          *(undefined8 *)(param_1 + local_4c0) = uVar9;
          if ((char)bVar36 < '\0') goto LAB_1409b0ab9;
LAB_1409b0788:
          auVar102._0_4_ = fVar202 - fVar107 * (float)local_6c8._0_4_;
          auVar102._4_4_ = fVar204 - fVar221 * (float)local_6c8._4_4_;
          auVar102._8_4_ = fVar206 - fVar224 * fStack_6c0;
          auVar102._12_4_ = fVar208 - fVar228 * fStack_6bc;
          if ((bVar36 & 1) == 0) goto LAB_1409b0799;
LAB_1409b0ada:
          *(int *)(param_1 + 4 + lVar20) = auVar102._0_4_;
          if ((bVar36 & 2) != 0) goto LAB_1409b0af1;
LAB_1409b07aa:
          if ((bVar36 & 4) == 0) goto LAB_1409b07b3;
LAB_1409b0b02:
          uVar9 = extractps(auVar102,2);
          *(undefined8 *)(param_1 + 4 + local_4c0) = uVar9;
          if ((char)bVar36 < '\0') goto LAB_1409b0b13;
LAB_1409b07bb:
          auVar52._0_4_ = fVar178 - (float)local_6c8._0_4_ * fVar180;
          auVar52._4_4_ = fVar184 - (float)local_6c8._4_4_ * fVar164;
          auVar52._8_4_ = fVar188 - fStack_6c0 * fVar171;
          auVar52._12_4_ = fVar192 - fStack_6bc * fVar175;
        }
        if ((bVar36 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar20) = auVar52._0_4_;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar52,1);
          *(undefined8 *)(param_1 + 8 + lVar30) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar52,2);
          *(undefined8 *)(param_1 + 8 + local_4c0) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar52,3);
          *(undefined8 *)(param_1 + 8 + lVar38) = uVar9;
        }
        if ((bVar36 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar20) = uVar156;
        }
        if ((bVar36 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar30) = uVar159;
        }
        if ((bVar36 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4c0) = uVar162;
        }
        if ((char)bVar36 < '\0') {
          *(uint *)(param_1 + 0xc + lVar38) = uVar8;
        }
      }
      lVar43 = lVar43 + 0x30;
      pfVar34 = pfVar34 + 0x10;
      uVar25 = local_4d8 + 4;
      local_508 = auVar217;
    } while ((int)uVar25 < (int)(uVar165 & 0xfffffffc));
  }
  if ((int)param_12 <= (int)uVar25) {
    return;
  }
  uVar165 = -(uint)((int)(uVar25 | (uint)__xmm_00000003000000020000000100000000) < (int)param_12);
  uVar169 = -(uint)((int)(uVar25 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_12);
  uVar173 = -(uint)((int)(uVar25 | _UNK_150631e08) < (int)param_12);
  uVar177 = -(uint)((int)(uVar25 | _UNK_150631e0c) < (int)param_12);
  uVar21 = (ulonglong)uVar25;
  pauVar3 = (undefined1 (*) [16])(param_2 + uVar21 * 0xc);
  auVar15._4_4_ = uVar169;
  auVar15._0_4_ = uVar165;
  auVar15._8_4_ = uVar173;
  auVar15._12_4_ = uVar177;
  iVar37 = movmskps((int)param_2,auVar15);
  bVar36 = (char)((char)iVar37 << 4) >> 4;
  if (iVar37 == 0xf) {
    auVar215 = *pauVar3;
    auVar197 = pauVar3[1];
    uVar67 = auVar197._0_4_;
    auVar153._4_4_ = uVar67;
    auVar153._0_4_ = uVar67;
    auVar153._8_4_ = uVar67;
    auVar153._12_4_ = uVar67;
    uVar67 = auVar215._12_4_;
    auVar182._0_8_ = CONCAT44(uVar67,auVar215._0_4_);
    auVar182._8_4_ = auVar215._4_4_;
    auVar182._12_4_ = uVar67;
    auVar111 = pblendw(auVar153,auVar182,0x3f);
    auVar139._0_8_ = auVar215._8_8_;
    auVar139._8_4_ = auVar215._8_4_;
    auVar139._12_4_ = uVar67;
    auVar215 = pblendw(auVar139,auVar197,0xc);
    auVar73._0_8_ = CONCAT44(*(undefined4 *)(pauVar3[2] + 4),auVar197._8_4_);
    auVar73._8_4_ = auVar197._12_4_;
    auVar73._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar181._8_8_ = auVar73._0_8_;
    auVar181._0_8_ = auVar182._0_8_;
    auVar152._8_8_ = auVar73._8_8_;
    auVar152._0_8_ = auVar111._8_8_;
    auVar138._0_8_ = auVar215._0_8_;
    auVar138._8_4_ = *(undefined4 *)pauVar3[2];
    auVar138._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar53._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar165;
    auVar53._4_4_ = _UNK_150b50da4 & uVar169;
    auVar53._8_4_ = _UNK_150b50da8 & uVar173;
    auVar53._12_4_ = _UNK_150b50dac & uVar177;
    lVar43 = extractps(auVar53,1);
    lVar20 = extractps(auVar53,2);
    lVar26 = extractps(auVar53,3);
    auVar181._4_4_ = *(undefined4 *)(*pauVar3 + lVar43);
    auVar181._0_4_ = *(undefined4 *)*pauVar3;
    auVar181._12_4_ = *(undefined4 *)(*pauVar3 + lVar26);
    auVar181._8_4_ = *(undefined4 *)(*pauVar3 + lVar20);
    auVar152._4_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50db4 & uVar169));
    auVar152._0_4_ = *(undefined4 *)(*pauVar3 + (___xmm_000000280000001c0000001000000004 & uVar165))
    ;
    auVar152._12_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50dbc & uVar177));
    auVar152._8_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50db8 & uVar173));
    auVar138._4_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50dc4 & uVar169));
    auVar138._0_4_ = *(undefined4 *)(*pauVar3 + (___xmm_0000002c000000200000001400000008 & uVar165))
    ;
    auVar138._12_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50dcc & uVar177));
    auVar138._8_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50dc8 & uVar173));
  }
  uVar25 = auVar181._0_4_ << 4;
  uVar187 = auVar181._4_4_ << 4;
  uVar191 = auVar181._8_4_ << 4;
  uVar194 = auVar181._12_4_ << 4;
  pfVar34 = (float *)((int)(uVar165 & uVar25) + param_1);
  if ((bVar36 & 1) != 0) {
    local_588 = *pfVar34;
  }
  lVar43 = (longlong)(int)(uVar169 & uVar187);
  if ((bVar36 & 2) != 0) {
    fStack_584 = *(float *)(param_1 + lVar43);
  }
  if ((bVar36 & 4) != 0) {
    fStack_580 = *(float *)(param_1 + (int)(uVar173 & uVar191));
  }
  uVar22 = (ulonglong)(___xmm_00000004000000040000000400000004 & uVar165);
  if ((char)bVar36 < '\0') {
    fStack_57c = *(float *)(param_1 + (int)(uVar177 & uVar194));
  }
  if ((bVar36 & 1) != 0) {
    local_578 = *(float *)(uVar22 + (longlong)pfVar34);
  }
  if ((bVar36 & 2) != 0) {
    local_6f8 = (ulonglong)(_UNK_150b50dd4 & uVar169);
    fStack_574 = *(float *)(local_6f8 + lVar43 + param_1);
  }
  local_6f8 = (ulonglong)(_UNK_150b50dd4 & uVar169);
  uVar31 = (ulonglong)(_UNK_150b50dd8 & uVar173);
  lVar20 = (int)(uVar173 & uVar191) + param_1;
  uVar23 = (ulonglong)(_UNK_150b50ddc & uVar177);
  if ((bVar36 & 4) != 0) {
    fStack_570 = *(float *)(uVar31 + lVar20);
  }
  uVar24 = (ulonglong)(___xmm_00000008000000080000000800000008 & uVar165);
  lVar26 = (int)(uVar177 & uVar194) + param_1;
  if ((char)bVar36 < '\0') {
    fStack_56c = *(float *)(uVar23 + lVar26);
  }
  if ((bVar36 & 1) != 0) {
    local_568 = *(float *)(uVar24 + (longlong)pfVar34);
  }
  if ((bVar36 & 2) != 0) {
    local_6b8 = (ulonglong)(_UNK_150b50de4 & uVar169);
    fStack_564 = *(float *)(local_6b8 + lVar43 + param_1);
  }
  local_6b8 = (ulonglong)(_UNK_150b50de4 & uVar169);
  uVar156 = auVar152._4_4_ << 4;
  uVar150 = auVar152._0_4_ << 4;
  uVar162 = auVar152._12_4_ << 4;
  uVar159 = auVar152._8_4_ << 4;
  uVar40 = (ulonglong)(_UNK_150b50de8 & uVar173);
  uVar42 = (ulonglong)(_UNK_150b50dec & uVar177);
  if ((bVar36 & 4) != 0) {
    fStack_560 = *(float *)(uVar40 + lVar20);
  }
  if ((char)bVar36 < '\0') {
    fStack_55c = *(float *)(uVar42 + lVar26);
  }
  if ((bVar36 & 1) != 0) {
    local_5b8 = *(float *)(param_1 + (int)(uVar165 & uVar150));
  }
  if ((bVar36 & 2) != 0) {
    fStack_5b4 = *(float *)(param_1 + (int)(uVar169 & uVar156));
  }
  if ((bVar36 & 4) != 0) {
    fStack_5b0 = *(float *)(param_1 + (int)(uVar173 & uVar159));
  }
  if ((char)bVar36 < '\0') {
    fStack_5ac = *(float *)(param_1 + (int)(uVar177 & uVar162));
  }
  uVar9 = (int)(uVar165 & uVar150) + param_1;
  if ((bVar36 & 1) != 0) {
    local_5a8 = *(float *)(uVar22 + uVar9);
  }
  uVar18 = (int)(uVar169 & uVar156) + param_1;
  if ((bVar36 & 2) != 0) {
    fStack_5a4 = *(float *)(local_6f8 + uVar18);
  }
  uVar17 = (int)(uVar173 & uVar159) + param_1;
  if ((bVar36 & 4) != 0) {
    fStack_5a0 = *(float *)(uVar31 + uVar17);
  }
  uVar16 = (int)(uVar177 & uVar162) + param_1;
  if ((char)bVar36 < '\0') {
    fStack_59c = *(float *)(uVar23 + uVar16);
  }
  if ((bVar36 & 1) != 0) {
    local_598 = *(float *)(uVar24 + uVar9);
  }
  if ((bVar36 & 2) != 0) {
    fStack_594 = *(float *)(local_6b8 + uVar18);
  }
  uVar8 = uVar177 & auVar138._12_4_ << 4;
  if ((bVar36 & 4) != 0) {
    fStack_590 = *(float *)(uVar40 + uVar17);
  }
  if ((char)bVar36 < '\0') {
    fStack_58c = *(float *)(uVar42 + uVar16);
  }
  iVar68 = auVar138._4_4_ << 4;
  iVar37 = auVar138._0_4_ << 4;
  iVar147 = auVar138._12_4_ << 4;
  iVar124 = auVar138._8_4_ << 4;
  lVar27 = (longlong)(int)(uVar165 & auVar138._0_4_ << 4);
  if ((bVar36 & 1) != 0) {
    local_5e8 = *(float *)(param_1 + lVar27);
  }
  lVar29 = (longlong)(int)(uVar169 & auVar138._4_4_ << 4);
  if ((bVar36 & 2) != 0) {
    fStack_5e4 = *(float *)(param_1 + lVar29);
  }
  lVar30 = (longlong)(int)(uVar173 & auVar138._8_4_ << 4);
  if ((bVar36 & 4) != 0) {
    fStack_5e0 = *(float *)(param_1 + lVar30);
  }
  if ((char)bVar36 < '\0') {
    fStack_5dc = *(float *)(param_1 + (int)uVar8);
  }
  if ((bVar36 & 1) != 0) {
    local_5d8 = *(float *)(uVar22 + lVar27 + param_1);
  }
  if ((bVar36 & 2) != 0) {
    fStack_5d4 = *(float *)(local_6f8 + lVar29 + param_1);
  }
  lVar30 = lVar30 + param_1;
  if ((bVar36 & 4) != 0) {
    fStack_5d0 = *(float *)(uVar31 + lVar30);
  }
  if ((char)bVar36 < '\0') {
    fStack_5cc = *(float *)(uVar23 + (int)uVar8 + param_1);
  }
  if ((bVar36 & 1) != 0) {
    local_5c8 = *(float *)(uVar24 + lVar27 + param_1);
  }
  uVar23 = (ulonglong)(_UNK_150b50df4 & uVar169);
  uVar31 = (ulonglong)(___xmm_0000000c0000000c0000000c0000000c & uVar165);
  lVar32 = (int)uVar8 + param_1;
  uVar22 = (ulonglong)(_UNK_150b50df8 & uVar173);
  if ((bVar36 & 2) != 0) {
    fStack_5c4 = *(float *)(local_6b8 + lVar29 + param_1);
  }
  uVar24 = (ulonglong)(_UNK_150b50dfc & uVar177);
  auVar111 = insertps(ZEXT416(*(uint *)(uVar31 + (longlong)pfVar34)),
                      *(undefined4 *)(uVar23 + lVar43 + param_1),0x10);
  auVar197 = insertps(ZEXT416(*(uint *)(uVar31 + uVar9)),*(undefined4 *)(uVar23 + uVar18),0x10);
  auVar215 = insertps(ZEXT416(*(uint *)(uVar31 + lVar27 + param_1)),
                      *(undefined4 *)(uVar23 + lVar29 + param_1),0x10);
  if ((bVar36 & 4) != 0) {
    fStack_5c0 = *(float *)(uVar40 + lVar30);
  }
  auVar111 = insertps(auVar111,*(undefined4 *)(uVar22 + lVar20),0x20);
  auVar197 = insertps(auVar197,*(undefined4 *)(uVar22 + uVar17),0x20);
  auVar215 = insertps(auVar215,*(undefined4 *)(uVar22 + lVar30),0x20);
  bVar28 = ~bVar36;
  if (((char)bVar36 < '\0') && (fStack_5bc = *(float *)(uVar42 + lVar32), (bVar28 & 0xf) == 0)) {
    lVar43 = uVar21 * 0x10;
    puVar4 = (undefined4 *)(param_4 + lVar43);
    puVar5 = (undefined4 *)(param_4 + 0x10 + lVar43);
    auVar44 = *(undefined1 (*) [16])(param_4 + 0x20 + lVar43);
    puVar6 = (undefined4 *)(param_4 + 0x30 + lVar43);
    auVar131._0_8_ = CONCAT44(puVar5[2],puVar4[2]);
    auVar131._8_4_ = puVar4[3];
    auVar131._12_4_ = puVar5[3];
    auVar79._0_8_ = auVar44._0_8_;
    auVar79._8_4_ = auVar44._4_4_;
    auVar79._12_4_ = puVar6[1];
    local_118._8_8_ = auVar79._8_8_;
    local_128._12_4_ = *puVar6;
    local_128._8_4_ = auVar44._0_4_;
    auVar120._0_8_ = CONCAT44(puVar6[2],auVar44._8_4_);
    auVar120._8_4_ = auVar44._12_4_;
    auVar120._12_4_ = puVar6[3];
    local_128._4_4_ = *puVar5;
    local_128._0_4_ = *puVar4;
    local_118._4_4_ = puVar5[1];
    local_118._0_4_ = puVar4[1];
    local_108._8_8_ = auVar120._0_8_;
    local_108._0_8_ = auVar131._0_8_;
    local_f8._8_8_ = auVar120._8_8_;
    local_f8._0_8_ = auVar131._8_8_;
  }
  else {
    auVar54._0_4_ = ___xmm_00000030000000200000001000000000 & uVar165;
    auVar54._4_4_ = _UNK_150b511c4 & uVar169;
    auVar54._8_4_ = _UNK_150b511c8 & uVar173;
    auVar54._12_4_ = _UNK_150b511cc & uVar177;
    lVar20 = extractps(auVar54,1);
    lVar27 = extractps(auVar54,2);
    lVar29 = extractps(auVar54,3);
    lVar43 = param_4 + uVar21 * 0x10;
    auVar44 = insertps(ZEXT416(*(uint *)(param_4 + uVar21 * 0x10)),*(undefined4 *)(lVar20 + lVar43),
                       0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(lVar27 + lVar43),0x20);
    local_128 = insertps(auVar44,*(undefined4 *)(lVar29 + lVar43),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_00000034000000240000001400000004 & uVar165) +
                                        lVar43)),
                       *(undefined4 *)((ulonglong)(_UNK_150b511d4 & uVar169) + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511d8 & uVar173) + lVar43),0x20)
    ;
    local_118 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511dc & uVar177) + lVar43),
                         0x30);
    auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_00000038000000280000001800000008 & uVar165) +
                                        lVar43)),
                       *(undefined4 *)((ulonglong)(_UNK_150b511e4 & uVar169) + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511e8 & uVar173) + lVar43),0x20)
    ;
    local_108 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511ec & uVar177) + lVar43),
                         0x30);
    auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000003c0000002c0000001c0000000c & uVar165) +
                                        lVar43)),
                       *(undefined4 *)((ulonglong)(_UNK_150b511f4 & uVar169) + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511f8 & uVar173) + lVar43),0x20)
    ;
    local_f8 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511fc & uVar177) + lVar43),0x30
                       );
  }
  auVar111 = insertps(auVar111,*(undefined4 *)(uVar24 + lVar26),0x30);
  auVar197 = insertps(auVar197,*(undefined4 *)(uVar24 + uVar16),0x30);
  auVar215 = insertps(auVar215,*(undefined4 *)(uVar24 + lVar32),0x30);
  pauVar3 = (undefined1 (*) [16])(param_3 + uVar21 * 0xc);
  if ((bVar28 & 0xf) == 0) {
    auVar44 = *pauVar3;
    auVar70 = pauVar3[1];
    local_158._0_4_ = auVar44._0_4_;
    auVar217 = insertps(auVar70,auVar44,0x8c);
    local_158._4_4_ = auVar44._12_4_;
    local_158._8_4_ = auVar70._8_4_;
    local_158._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
    local_148._4_4_ = auVar70._0_4_;
    local_148._0_4_ = auVar44._4_4_;
    local_148._8_4_ = auVar70._12_4_;
    local_148._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    local_138._0_8_ = auVar217._0_8_;
    local_138._8_4_ = *(undefined4 *)pauVar3[2];
    local_138._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar55._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar165;
    auVar55._4_4_ = _UNK_150b50da4 & uVar169;
    auVar55._8_4_ = _UNK_150b50da8 & uVar173;
    auVar55._12_4_ = _UNK_150b50dac & uVar177;
    lVar43 = extractps(auVar55,1);
    lVar20 = extractps(auVar55,2);
    lVar26 = extractps(auVar55,3);
    auVar44 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + lVar20),0x20);
    local_158 = insertps(auVar44,*(undefined4 *)(*pauVar3 + lVar26),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_000000280000001c0000001000000004 & uVar165))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50db4 & uVar169)),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50db8 & uVar173)),0x20);
    local_148 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dbc & uVar177)),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_0000002c000000200000001400000008 & uVar165))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50dc4 & uVar169)),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dc8 & uVar173)),0x20);
    local_138 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dcc & uVar177)),0x30);
  }
  local_268 = param_11;
  fStack_264 = param_11;
  fStack_260 = param_11;
  fStack_25c = param_11;
  local_258 = param_10;
  fStack_254 = param_10;
  fStack_250 = param_10;
  fStack_24c = param_10;
  local_528 = uVar165;
  uStack_524 = uVar169;
  uStack_520 = uVar173;
  uStack_51c = uVar177;
  local_278 = uVar165;
  uStack_274 = uVar169;
  uStack_270 = uVar173;
  uStack_26c = uVar177;
  FUN_1409aeab0(&local_588,&local_5b8,&local_5e8,local_128,local_158,&local_258,&local_268,
                &local_228,&local_238,&local_248,&local_488,&local_4b8,&local_188,&local_1b8,
                &local_1e8,&local_218,&local_278);
  pauVar3 = (undefined1 (*) [16])(param_6 + uVar21 * 0xc);
  if ((bVar28 & 0xf) == 0) {
    auVar44 = *pauVar3;
    auVar70 = pauVar3[1];
    auVar217 = insertps(auVar70,auVar44,0x8c);
    local_6c8._4_4_ = auVar44._12_4_;
    local_6c8._0_4_ = auVar44._0_4_;
    fStack_6c0 = (float)auVar70._8_4_;
    fStack_6bc = (float)*(undefined4 *)(pauVar3[2] + 4);
    local_658._4_4_ = auVar70._0_4_;
    local_658._0_4_ = auVar44._4_4_;
    fStack_650 = (float)auVar70._12_4_;
    fStack_64c = (float)*(undefined4 *)(pauVar3[2] + 8);
    local_558 = auVar217._0_8_;
    fStack_550 = (float)*(undefined4 *)pauVar3[2];
    fStack_54c = (float)*(undefined4 *)(pauVar3[2] + 0xc);
    auVar44 = *(undefined1 (*) [16])(param_5 + uVar21 * 0xc);
    auVar70 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar21 * 0xc);
    puVar4 = (undefined4 *)(param_5 + 0x20 + uVar21 * 0xc);
    auVar57._0_4_ = auVar44._0_4_;
    auVar217 = insertps(auVar70,auVar44,0x8c);
    auVar57._4_4_ = auVar44._12_4_;
    auVar57._8_4_ = auVar70._8_4_;
    auVar57._12_4_ = puVar4[1];
    auVar74._4_4_ = auVar70._0_4_;
    auVar74._0_4_ = auVar44._4_4_;
    auVar74._8_4_ = auVar70._12_4_;
    auVar74._12_4_ = puVar4[2];
    auVar103._0_8_ = auVar217._0_8_;
    auVar103._8_4_ = *puVar4;
    auVar103._12_4_ = puVar4[3];
  }
  else {
    auVar56._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar165;
    auVar56._4_4_ = _UNK_150b50da4 & uVar169;
    auVar56._8_4_ = _UNK_150b50da8 & uVar173;
    auVar56._12_4_ = _UNK_150b50dac & uVar177;
    lVar26 = extractps(auVar56,1);
    lVar20 = extractps(auVar56,2);
    lVar27 = extractps(auVar56,3);
    auVar44 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar26),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + lVar20),0x20);
    _local_6c8 = insertps(auVar44,*(undefined4 *)(*pauVar3 + lVar27),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_000000280000001c0000001000000004 & uVar165))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50db4 & uVar169)),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50db8 & uVar173)),0x20);
    _local_658 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dbc & uVar177)),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_0000002c000000200000001400000008 & uVar165))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50dc4 & uVar169)),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dc8 & uVar173)),0x20);
    _local_558 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dcc & uVar177)),0x30);
    lVar43 = param_5 + uVar21 * 0xc;
    auVar44 = insertps(ZEXT416(*(uint *)(param_5 + uVar21 * 0xc)),*(undefined4 *)(lVar26 + lVar43),
                       0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(lVar20 + lVar43),0x20);
    auVar57 = insertps(auVar44,*(undefined4 *)(lVar27 + lVar43),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & uVar165) +
                                        lVar43)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar169) + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar173) + lVar43),0x20)
    ;
    auVar74 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar177) + lVar43),0x30)
    ;
    auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000002c000000200000001400000008 & uVar165) +
                                        lVar43)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & uVar169) + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b50dc8 & uVar173) + lVar43),0x20)
    ;
    auVar103 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b50dcc & uVar177) + lVar43),0x30
                       );
  }
  fVar168 = *param_9;
  fVar172 = param_9[1];
  fVar176 = param_9[2];
  fVar109 = fVar168 * auVar57._0_4_;
  fVar180 = fVar168 * auVar57._4_4_;
  fVar108 = fVar168 * auVar57._8_4_;
  fVar168 = fVar168 * auVar57._12_4_;
  fVar164 = fVar172 * auVar74._0_4_;
  fVar186 = fVar172 * auVar74._4_4_;
  fVar95 = fVar172 * auVar74._8_4_;
  fVar172 = fVar172 * auVar74._12_4_;
  fVar146 = fVar176 * auVar103._0_4_;
  fVar196 = fVar176 * auVar103._4_4_;
  fVar175 = fVar176 * auVar103._8_4_;
  fVar176 = fVar176 * auVar103._12_4_;
  auVar115._0_4_ = param_7 * fVar109 * param_7;
  auVar115._4_4_ = param_7 * fVar180 * param_7;
  auVar115._8_4_ = param_7 * fVar108 * param_7;
  auVar115._12_4_ = param_7 * fVar168 * param_7;
  auVar44 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar115);
  local_6f8._0_4_ = auVar111._0_4_;
  local_6f8._4_4_ = auVar111._4_4_;
  fStack_6f0 = auVar111._8_4_;
  fStack_6ec = auVar111._12_4_;
  local_6b8._0_4_ = auVar197._0_4_;
  local_6b8._4_4_ = auVar197._4_4_;
  fStack_6b0 = auVar197._8_4_;
  fStack_6ac = auVar197._12_4_;
  local_6e8 = auVar215._0_4_;
  fStack_6e4 = auVar215._4_4_;
  fStack_6e0 = auVar215._8_4_;
  fStack_6dc = auVar215._12_4_;
  auVar116._0_4_ =
       (local_498 * local_498 + local_4a8 * local_4a8 + local_4b8 * local_4b8) * local_6e8 +
       (local_468 * local_468 + local_478 * local_478 + local_488 * local_488) * (float)local_6b8 +
       ((local_468 + local_498) * (local_468 + local_498) +
       (local_478 + local_4a8) * (local_478 + local_4a8) +
       (local_488 + local_4b8) * (local_488 + local_4b8)) * (float)local_6f8 + auVar44._0_4_;
  auVar116._4_4_ =
       (fStack_494 * fStack_494 + fStack_4a4 * fStack_4a4 + fStack_4b4 * fStack_4b4) * fStack_6e4 +
       (fStack_464 * fStack_464 + fStack_474 * fStack_474 + fStack_484 * fStack_484) *
       local_6b8._4_4_ +
       ((fStack_464 + fStack_494) * (fStack_464 + fStack_494) +
       (fStack_474 + fStack_4a4) * (fStack_474 + fStack_4a4) +
       (fStack_484 + fStack_4b4) * (fStack_484 + fStack_4b4)) * local_6f8._4_4_ + auVar44._4_4_;
  auVar116._8_4_ =
       (fStack_490 * fStack_490 + fStack_4a0 * fStack_4a0 + fStack_4b0 * fStack_4b0) * fStack_6e0 +
       (fStack_460 * fStack_460 + fStack_470 * fStack_470 + fStack_480 * fStack_480) * fStack_6b0 +
       ((fStack_460 + fStack_490) * (fStack_460 + fStack_490) +
       (fStack_470 + fStack_4a0) * (fStack_470 + fStack_4a0) +
       (fStack_480 + fStack_4b0) * (fStack_480 + fStack_4b0)) * fStack_6f0 + auVar44._8_4_;
  auVar116._12_4_ =
       (fStack_48c * fStack_48c + fStack_49c * fStack_49c + fStack_4ac * fStack_4ac) * fStack_6dc +
       (fStack_45c * fStack_45c + fStack_46c * fStack_46c + fStack_47c * fStack_47c) * fStack_6ac +
       ((fStack_45c + fStack_48c) * (fStack_45c + fStack_48c) +
       (fStack_46c + fStack_49c) * (fStack_46c + fStack_49c) +
       (fStack_47c + fStack_4ac) * (fStack_47c + fStack_4ac)) * fStack_6ec + auVar44._12_4_;
  auVar58._0_4_ = local_228 - auVar44._0_4_ * (float)local_6c8._0_4_;
  auVar58._4_4_ = fStack_224 - auVar44._4_4_ * (float)local_6c8._4_4_;
  auVar58._8_4_ = fStack_220 - auVar44._8_4_ * fStack_6c0;
  auVar58._12_4_ = fStack_21c - auVar44._12_4_ * fStack_6bc;
  auVar44 = divps(auVar58,auVar116);
  fVar109 = (float)(-(uint)(param_8 <= fVar109) & auVar44._0_4_);
  fVar180 = (float)(-(uint)(param_8 <= fVar180) & auVar44._4_4_);
  fVar108 = (float)(-(uint)(param_8 <= fVar108) & auVar44._8_4_);
  fVar171 = (float)(-(uint)(param_8 <= fVar168) & auVar44._12_4_);
  auVar59._0_4_ = param_7 * fVar164 * param_7;
  auVar59._4_4_ = param_7 * fVar186 * param_7;
  auVar59._8_4_ = param_7 * fVar95 * param_7;
  auVar59._12_4_ = param_7 * fVar172 * param_7;
  auVar44 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar59);
  auVar223._0_4_ = local_238 - auVar44._0_4_ * (float)local_658._0_4_;
  auVar223._4_4_ = fStack_234 - auVar44._4_4_ * (float)local_658._4_4_;
  auVar223._8_4_ = fStack_230 - auVar44._8_4_ * fStack_650;
  auVar223._12_4_ = fStack_22c - auVar44._12_4_ * fStack_64c;
  auVar10._4_4_ =
       (fStack_194 * fStack_194 + fStack_1a4 * fStack_1a4 + fStack_1b4 * fStack_1b4) * fStack_6e4 +
       (fStack_164 * fStack_164 + fStack_174 * fStack_174 + fStack_184 * fStack_184) *
       local_6b8._4_4_ +
       ((fStack_164 + fStack_194) * (fStack_164 + fStack_194) +
       (fStack_174 + fStack_1a4) * (fStack_174 + fStack_1a4) +
       (fStack_184 + fStack_1b4) * (fStack_184 + fStack_1b4)) * local_6f8._4_4_ + auVar44._4_4_;
  auVar10._0_4_ =
       (local_198 * local_198 + local_1a8 * local_1a8 + local_1b8 * local_1b8) * local_6e8 +
       (local_168 * local_168 + local_178 * local_178 + local_188 * local_188) * (float)local_6b8 +
       ((local_168 + local_198) * (local_168 + local_198) +
       (local_178 + local_1a8) * (local_178 + local_1a8) +
       (local_188 + local_1b8) * (local_188 + local_1b8)) * (float)local_6f8 + auVar44._0_4_;
  auVar10._8_4_ =
       (fStack_190 * fStack_190 + fStack_1a0 * fStack_1a0 + fStack_1b0 * fStack_1b0) * fStack_6e0 +
       (fStack_160 * fStack_160 + fStack_170 * fStack_170 + fStack_180 * fStack_180) * fStack_6b0 +
       ((fStack_160 + fStack_190) * (fStack_160 + fStack_190) +
       (fStack_170 + fStack_1a0) * (fStack_170 + fStack_1a0) +
       (fStack_180 + fStack_1b0) * (fStack_180 + fStack_1b0)) * fStack_6f0 + auVar44._8_4_;
  auVar10._12_4_ =
       (fStack_18c * fStack_18c + fStack_19c * fStack_19c + fStack_1ac * fStack_1ac) * fStack_6dc +
       (fStack_15c * fStack_15c + fStack_16c * fStack_16c + fStack_17c * fStack_17c) * fStack_6ac +
       ((fStack_15c + fStack_18c) * (fStack_15c + fStack_18c) +
       (fStack_16c + fStack_19c) * (fStack_16c + fStack_19c) +
       (fStack_17c + fStack_1ac) * (fStack_17c + fStack_1ac)) * fStack_6ec + auVar44._12_4_;
  auVar44 = divps(auVar223,auVar10);
  fVar164 = (float)(-(uint)(param_8 <= fVar164) & auVar44._0_4_);
  fVar186 = (float)(-(uint)(param_8 <= fVar186) & auVar44._4_4_);
  fVar95 = (float)(-(uint)(param_8 <= fVar95) & auVar44._8_4_);
  fVar167 = (float)(-(uint)(param_8 <= fVar172) & auVar44._12_4_);
  auVar117._0_4_ = param_7 * fVar146 * param_7;
  auVar117._4_4_ = param_7 * fVar196 * param_7;
  auVar117._8_4_ = param_7 * fVar175 * param_7;
  auVar117._12_4_ = param_7 * fVar176 * param_7;
  auVar44 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar117);
  auVar118._0_4_ =
       (local_1f8 * local_1f8 + local_208 * local_208 + local_218 * local_218) * local_6e8 +
       (local_1c8 * local_1c8 + local_1d8 * local_1d8 + local_1e8 * local_1e8) * (float)local_6b8 +
       ((local_1c8 + local_1f8) * (local_1c8 + local_1f8) +
       (local_1d8 + local_208) * (local_1d8 + local_208) +
       (local_1e8 + local_218) * (local_1e8 + local_218)) * (float)local_6f8 + auVar44._0_4_;
  auVar118._4_4_ =
       (fStack_1f4 * fStack_1f4 + fStack_204 * fStack_204 + fStack_214 * fStack_214) * fStack_6e4 +
       (fStack_1c4 * fStack_1c4 + fStack_1d4 * fStack_1d4 + fStack_1e4 * fStack_1e4) *
       local_6b8._4_4_ +
       ((fStack_1c4 + fStack_1f4) * (fStack_1c4 + fStack_1f4) +
       (fStack_1d4 + fStack_204) * (fStack_1d4 + fStack_204) +
       (fStack_1e4 + fStack_214) * (fStack_1e4 + fStack_214)) * local_6f8._4_4_ + auVar44._4_4_;
  auVar118._8_4_ =
       (fStack_1f0 * fStack_1f0 + fStack_200 * fStack_200 + fStack_210 * fStack_210) * fStack_6e0 +
       (fStack_1c0 * fStack_1c0 + fStack_1d0 * fStack_1d0 + fStack_1e0 * fStack_1e0) * fStack_6b0 +
       ((fStack_1c0 + fStack_1f0) * (fStack_1c0 + fStack_1f0) +
       (fStack_1d0 + fStack_200) * (fStack_1d0 + fStack_200) +
       (fStack_1e0 + fStack_210) * (fStack_1e0 + fStack_210)) * fStack_6f0 + auVar44._8_4_;
  auVar118._12_4_ =
       (fStack_1ec * fStack_1ec + fStack_1fc * fStack_1fc + fStack_20c * fStack_20c) * fStack_6dc +
       (fStack_1bc * fStack_1bc + fStack_1cc * fStack_1cc + fStack_1dc * fStack_1dc) * fStack_6ac +
       ((fStack_1bc + fStack_1ec) * (fStack_1bc + fStack_1ec) +
       (fStack_1cc + fStack_1fc) * (fStack_1cc + fStack_1fc) +
       (fStack_1dc + fStack_20c) * (fStack_1dc + fStack_20c)) * fStack_6ec + auVar44._12_4_;
  auVar130._0_4_ = local_248 - auVar44._0_4_ * (float)local_558._0_4_;
  auVar130._4_4_ = fStack_244 - auVar44._4_4_ * (float)local_558._4_4_;
  auVar130._8_4_ = fStack_240 - auVar44._8_4_ * fStack_550;
  auVar130._12_4_ = fStack_23c - auVar44._12_4_ * fStack_54c;
  auVar44 = divps(auVar130,auVar118);
  fVar146 = (float)(-(uint)(param_8 <= fVar146) & auVar44._0_4_);
  fVar196 = (float)(-(uint)(param_8 <= fVar196) & auVar44._4_4_);
  fVar175 = (float)(-(uint)(param_8 <= fVar175) & auVar44._8_4_);
  fVar176 = (float)(-(uint)(param_8 <= fVar176) & auVar44._12_4_);
  fVar168 = (float)local_6c8._0_4_ + fVar109;
  fVar172 = (float)local_6c8._4_4_ + fVar180;
  fStack_6c0 = fStack_6c0 + fVar108;
  fStack_6bc = fStack_6bc + fVar171;
  auVar183._0_4_ = (float)local_658._0_4_ + fVar164;
  auVar183._4_4_ = (float)local_658._4_4_ + fVar186;
  auVar183._8_4_ = fStack_650 + fVar95;
  auVar183._12_4_ = fStack_64c + fVar167;
  auVar75._0_4_ = (float)local_558._0_4_ + fVar146;
  auVar75._4_4_ = (float)local_558._4_4_ + fVar196;
  auVar75._8_4_ = fStack_550 + fVar175;
  auVar75._12_4_ = fStack_54c + fVar176;
  if ((bVar28 & 0xf) == 0) {
    auVar104._4_4_ = fVar172;
    auVar104._0_4_ = fVar168;
    auVar104._8_4_ = fStack_6c0;
    auVar104._12_4_ = fStack_6bc;
    auVar44 = insertps(auVar104,auVar183,0x30);
    auVar119._4_4_ = auVar183._8_4_;
    auVar119._0_4_ = auVar183._4_4_;
    auVar119._8_4_ = auVar75._0_4_;
    auVar119._12_4_ = auVar75._4_4_;
    auVar44 = insertps(auVar44,auVar75,0x20);
    *(int *)*pauVar3 = auVar44._0_4_;
    *(int *)(*pauVar3 + 4) = auVar44._12_4_;
    *(int *)(*pauVar3 + 8) = auVar44._8_4_;
    *(int *)(*pauVar3 + 0xc) = auVar44._4_4_;
    auVar14._4_4_ = fVar172;
    auVar14._0_4_ = fVar168;
    auVar14._8_4_ = fStack_6c0;
    auVar14._12_4_ = fStack_6bc;
    auVar44 = blendps(auVar119,auVar14,4);
    *(int *)pauVar3[1] = auVar44._0_4_;
    *(int *)(pauVar3[1] + 4) = auVar44._12_4_;
    *(int *)(pauVar3[1] + 8) = auVar44._8_4_;
    *(int *)(pauVar3[1] + 0xc) = auVar44._4_4_;
    *(float *)pauVar3[2] = auVar75._8_4_;
    *(float *)(pauVar3[2] + 4) = fStack_6bc;
    *(float *)(pauVar3[2] + 8) = auVar183._12_4_;
    *(float *)(pauVar3[2] + 0xc) = auVar75._12_4_;
  }
  else {
    if ((bVar36 & 1) != 0) {
      *(float *)*pauVar3 = fVar168;
    }
    if ((bVar36 & 2) != 0) {
      auVar13._4_4_ = fVar172;
      auVar13._0_4_ = fVar168;
      auVar13._8_4_ = fStack_6c0;
      auVar13._12_4_ = fStack_6bc;
      uVar9 = extractps(auVar13,1);
      *(undefined8 *)(*pauVar3 + 0xc) = uVar9;
    }
    if ((bVar36 & 4) != 0) {
      auVar12._4_4_ = fVar172;
      auVar12._0_4_ = fVar168;
      auVar12._8_4_ = fStack_6c0;
      auVar12._12_4_ = fStack_6bc;
      uVar9 = extractps(auVar12,2);
      *(undefined8 *)(pauVar3[1] + 8) = uVar9;
    }
    if ((char)bVar36 < '\0') {
      auVar11._4_4_ = fVar172;
      auVar11._0_4_ = fVar168;
      auVar11._8_4_ = fStack_6c0;
      auVar11._12_4_ = fStack_6bc;
      uVar9 = extractps(auVar11,3);
      *(undefined8 *)(pauVar3[2] + 4) = uVar9;
    }
    if ((bVar36 & 1) != 0) {
      *(float *)(*pauVar3 + 4) = auVar183._0_4_;
    }
    if ((bVar36 & 2) != 0) {
      uVar9 = extractps(auVar183,1);
      *(undefined8 *)pauVar3[1] = uVar9;
    }
    if ((bVar36 & 4) != 0) {
      uVar9 = extractps(auVar183,2);
      *(undefined8 *)(pauVar3[1] + 0xc) = uVar9;
    }
    if ((char)bVar36 < '\0') {
      uVar9 = extractps(auVar183,3);
      *(undefined8 *)(pauVar3[2] + 8) = uVar9;
    }
    if ((bVar36 & 1) != 0) {
      *(float *)(*pauVar3 + 8) = auVar75._0_4_;
    }
    if ((bVar36 & 2) != 0) {
      uVar9 = extractps(auVar75,1);
      *(undefined8 *)(pauVar3[1] + 4) = uVar9;
    }
    if ((bVar36 & 4) != 0) {
      uVar9 = extractps(auVar75,2);
      *(undefined8 *)pauVar3[2] = uVar9;
    }
    if ((char)bVar36 < '\0') {
      uVar9 = extractps(auVar75,3);
      *(undefined8 *)(pauVar3[2] + 0xc) = uVar9;
    }
  }
  fVar69 = local_1e8 * fVar146 + local_188 * fVar164 + local_488 * fVar109;
  fVar80 = fStack_1e4 * fVar196 + fStack_184 * fVar186 + fStack_484 * fVar180;
  fVar81 = fStack_1e0 * fVar175 + fStack_180 * fVar95 + fStack_480 * fVar108;
  fVar82 = fStack_1dc * fVar176 + fStack_17c * fVar167 + fStack_47c * fVar171;
  fVar168 = local_1d8 * fVar146 + local_178 * fVar164 + local_478 * fVar109;
  fVar172 = fStack_1d4 * fVar196 + fStack_174 * fVar186 + fStack_474 * fVar180;
  fVar107 = fStack_1d0 * fVar175 + fStack_170 * fVar95 + fStack_470 * fVar108;
  fVar190 = fStack_1cc * fVar176 + fStack_16c * fVar167 + fStack_46c * fVar171;
  fVar110 = local_1c8 * fVar146 + local_168 * fVar164 + local_468 * fVar109;
  fVar121 = fStack_1c4 * fVar196 + fStack_164 * fVar186 + fStack_464 * fVar180;
  fVar122 = fStack_1c0 * fVar175 + fStack_160 * fVar95 + fStack_460 * fVar108;
  fVar123 = fStack_1bc * fVar176 + fStack_15c * fVar167 + fStack_45c * fVar171;
  fVar195 = local_218 * fVar146 + local_1b8 * fVar164 + local_4b8 * fVar109;
  fVar199 = fStack_214 * fVar196 + fStack_1b4 * fVar186 + fStack_4b4 * fVar180;
  fVar200 = fStack_210 * fVar175 + fStack_1b0 * fVar95 + fStack_4b0 * fVar108;
  fVar201 = fStack_20c * fVar176 + fStack_1ac * fVar167 + fStack_4ac * fVar171;
  fVar221 = local_208 * fVar146 + local_1a8 * fVar164 + local_4a8 * fVar109;
  fVar224 = fStack_204 * fVar196 + fStack_1a4 * fVar186 + fStack_4a4 * fVar180;
  fVar226 = fStack_200 * fVar175 + fStack_1a0 * fVar95 + fStack_4a0 * fVar108;
  fVar228 = fStack_1fc * fVar176 + fStack_19c * fVar167 + fStack_49c * fVar171;
  fVar146 = local_1f8 * fVar146 + local_198 * fVar164 + fVar109 * local_498;
  fVar196 = fStack_1f4 * fVar196 + fStack_194 * fVar186 + fVar180 * fStack_494;
  fVar175 = fStack_1f0 * fVar175 + fStack_190 * fVar95 + fVar108 * fStack_490;
  fVar176 = fStack_1ec * fVar176 + fStack_18c * fVar167 + fVar171 * fStack_48c;
  auVar60._0_4_ = -(uint)(0.0 < (float)local_6f8) & local_528;
  auVar60._4_4_ = -(uint)(0.0 < local_6f8._4_4_) & uStack_524;
  auVar60._8_4_ = -(uint)(0.0 < fStack_6f0) & uStack_520;
  auVar60._12_4_ = -(uint)(0.0 < fStack_6ec) & uStack_51c;
  iVar19 = movmskps((uint)bVar36,auVar60);
  uVar165 = 0;
  if (iVar19 != 0) {
    bVar36 = (char)((char)iVar19 << 4) >> 4;
    auVar105._0_4_ = (fVar69 + fVar195) * (float)local_6f8 + local_588;
    auVar105._4_4_ = (fVar80 + fVar199) * local_6f8._4_4_ + fStack_584;
    auVar105._8_4_ = (fVar81 + fVar200) * fStack_6f0 + fStack_580;
    auVar105._12_4_ = (fVar82 + fVar201) * fStack_6ec + fStack_57c;
    if ((bVar36 & 1) != 0) {
      *(float *)(param_1 + (int)uVar25) = auVar105._0_4_;
    }
    if ((bVar36 & 2) != 0) {
      uVar9 = extractps(auVar105,1);
      *(undefined8 *)(param_1 + (int)uVar187) = uVar9;
    }
    fVar109 = fVar168 + fVar221;
    fVar180 = fVar172 + fVar224;
    fVar108 = fVar107 + fVar226;
    fVar171 = fVar190 + fVar228;
    if ((bVar36 & 4) == 0) {
      if (-1 < (char)bVar36) goto LAB_1409b20d5;
LAB_1409b23e2:
      uVar9 = extractps(auVar105,3);
      *(undefined8 *)(param_1 + (int)uVar194) = uVar9;
      auVar76._0_4_ = fVar109 * (float)local_6f8 + local_578;
      auVar76._4_4_ = fVar180 * local_6f8._4_4_ + fStack_574;
      auVar76._8_4_ = fVar108 * fStack_6f0 + fStack_570;
      auVar76._12_4_ = fVar171 * fStack_6ec + fStack_56c;
      if ((bVar36 & 1) != 0) goto LAB_1409b2405;
LAB_1409b20e6:
      if ((bVar36 & 2) == 0) goto LAB_1409b20f2;
LAB_1409b241b:
      uVar9 = extractps(auVar76,1);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar187) = uVar9;
      if ((bVar36 & 4) != 0) goto LAB_1409b2434;
LAB_1409b20ff:
      fVar109 = (fVar110 + fVar146) * (float)local_6f8;
      local_6f8._4_4_ = (fVar121 + fVar196) * local_6f8._4_4_;
      fStack_6f0 = (fVar122 + fVar175) * fStack_6f0;
      fStack_6ec = (fVar123 + fVar176) * fStack_6ec;
      if (-1 < (char)bVar36) goto LAB_1409b210a;
LAB_1409b244b:
      uVar9 = extractps(auVar76,3);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar194) = uVar9;
      auVar106._0_4_ = fVar109 + local_568;
      auVar106._4_4_ = local_6f8._4_4_ + fStack_564;
      auVar106._8_4_ = fStack_6f0 + fStack_560;
      auVar106._12_4_ = fStack_6ec + fStack_55c;
    }
    else {
      uVar9 = extractps(auVar105,2);
      *(undefined8 *)(param_1 + (int)uVar191) = uVar9;
      if ((char)bVar36 < '\0') goto LAB_1409b23e2;
LAB_1409b20d5:
      auVar76._0_4_ = fVar109 * (float)local_6f8 + local_578;
      auVar76._4_4_ = fVar180 * local_6f8._4_4_ + fStack_574;
      auVar76._8_4_ = fVar108 * fStack_6f0 + fStack_570;
      auVar76._12_4_ = fVar171 * fStack_6ec + fStack_56c;
      if ((bVar36 & 1) == 0) goto LAB_1409b20e6;
LAB_1409b2405:
      *(int *)(param_1 + 4 + (longlong)(int)uVar25) = auVar76._0_4_;
      if ((bVar36 & 2) != 0) goto LAB_1409b241b;
LAB_1409b20f2:
      if ((bVar36 & 4) == 0) goto LAB_1409b20ff;
LAB_1409b2434:
      uVar9 = extractps(auVar76,2);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar191) = uVar9;
      fVar109 = (fVar110 + fVar146) * (float)local_6f8;
      local_6f8._4_4_ = (fVar121 + fVar196) * local_6f8._4_4_;
      fStack_6f0 = (fVar122 + fVar175) * fStack_6f0;
      fStack_6ec = (fVar123 + fVar176) * fStack_6ec;
      if ((char)bVar36 < '\0') goto LAB_1409b244b;
LAB_1409b210a:
      auVar106._0_4_ = fVar109 + local_568;
      auVar106._4_4_ = local_6f8._4_4_ + fStack_564;
      auVar106._8_4_ = fStack_6f0 + fStack_560;
      auVar106._12_4_ = fStack_6ec + fStack_55c;
    }
    if ((bVar36 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)(int)uVar25) = auVar106._0_4_;
    }
    if ((bVar36 & 2) != 0) {
      uVar9 = extractps(auVar106,1);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar187) = uVar9;
    }
    if ((bVar36 & 4) != 0) {
      uVar9 = extractps(auVar106,2);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar191) = uVar9;
    }
    if ((char)bVar36 < '\0') {
      uVar9 = extractps(auVar106,3);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar194) = uVar9;
    }
    if ((bVar36 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)(int)uVar25) = (float)local_6f8;
    }
    if ((bVar36 & 2) != 0) {
      uVar9 = extractps(auVar111,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar187) = uVar9;
    }
    if ((bVar36 & 4) != 0) {
      uVar9 = extractps(auVar111,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar191) = uVar9;
    }
    uVar165 = CONCAT31((int3)((uint)iVar19 >> 8),bVar36);
    if ((char)bVar36 < '\0') {
      uVar9 = extractps(auVar111,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar194) = uVar9;
      uVar165 = uVar194;
    }
  }
  auVar61._0_4_ = -(uint)(0.0 < (float)local_6b8) & local_528;
  auVar61._4_4_ = -(uint)(0.0 < local_6b8._4_4_) & uStack_524;
  auVar61._8_4_ = -(uint)(0.0 < fStack_6b0) & uStack_520;
  auVar61._12_4_ = -(uint)(0.0 < fStack_6ac) & uStack_51c;
  iVar19 = movmskps(uVar165,auVar61);
  uVar165 = 0;
  if (iVar19 == 0) goto LAB_1409b2262;
  bVar36 = (char)((char)iVar19 << 4) >> 4;
  auVar62._0_4_ = local_5b8 - fVar69 * (float)local_6b8;
  auVar62._4_4_ = fStack_5b4 - fVar80 * local_6b8._4_4_;
  auVar62._8_4_ = fStack_5b0 - fVar81 * fStack_6b0;
  auVar62._12_4_ = fStack_5ac - fVar82 * fStack_6ac;
  if ((bVar36 & 1) != 0) {
    *(float *)(param_1 + (int)uVar150) = auVar62._0_4_;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar62,1);
    *(undefined8 *)(param_1 + (int)uVar156) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar62,2);
    *(undefined8 *)(param_1 + (int)uVar159) = uVar9;
  }
  fVar168 = fVar168 * (float)local_6b8;
  fVar172 = fVar172 * local_6b8._4_4_;
  fVar107 = fVar107 * fStack_6b0;
  fVar190 = fVar190 * fStack_6ac;
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar62,3);
    *(undefined8 *)(param_1 + (int)uVar162) = uVar9;
    auVar77._0_4_ = local_5a8 - fVar168;
    auVar77._4_4_ = fStack_5a4 - fVar172;
    auVar77._8_4_ = fStack_5a0 - fVar107;
    auVar77._12_4_ = fStack_59c - fVar190;
    if ((bVar36 & 1) != 0) goto LAB_1409b26f7;
LAB_1409b21f3:
    if ((bVar36 & 2) == 0) goto LAB_1409b21fc;
LAB_1409b270a:
    uVar9 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar156) = uVar9;
    if ((bVar36 & 4) != 0) goto LAB_1409b271f;
LAB_1409b2205:
    if (-1 < (char)bVar36) goto LAB_1409b2219;
LAB_1409b273f:
    uVar9 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar162) = uVar9;
    auVar63._0_4_ = local_598 - fVar110 * (float)local_6b8;
    auVar63._4_4_ = fStack_594 - fVar121 * local_6b8._4_4_;
    auVar63._8_4_ = fStack_590 - fVar122 * fStack_6b0;
    auVar63._12_4_ = fStack_58c - fVar123 * fStack_6ac;
  }
  else {
    auVar77._0_4_ = local_5a8 - fVar168;
    auVar77._4_4_ = fStack_5a4 - fVar172;
    auVar77._8_4_ = fStack_5a0 - fVar107;
    auVar77._12_4_ = fStack_59c - fVar190;
    if ((bVar36 & 1) == 0) goto LAB_1409b21f3;
LAB_1409b26f7:
    *(int *)(param_1 + 4 + (longlong)(int)uVar150) = auVar77._0_4_;
    if ((bVar36 & 2) != 0) goto LAB_1409b270a;
LAB_1409b21fc:
    if ((bVar36 & 4) == 0) goto LAB_1409b2205;
LAB_1409b271f:
    uVar9 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar159) = uVar9;
    if ((char)bVar36 < '\0') goto LAB_1409b273f;
LAB_1409b2219:
    auVar63._0_4_ = local_598 - fVar110 * (float)local_6b8;
    auVar63._4_4_ = fStack_594 - fVar121 * local_6b8._4_4_;
    auVar63._8_4_ = fStack_590 - fVar122 * fStack_6b0;
    auVar63._12_4_ = fStack_58c - fVar123 * fStack_6ac;
  }
  if ((bVar36 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)uVar150) = auVar63._0_4_;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar63,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar156) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar63,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar159) = uVar9;
  }
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar63,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar162) = uVar9;
  }
  if ((bVar36 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)uVar150) = (float)local_6b8;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar197,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar156) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar197,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar159) = uVar9;
  }
  uVar165 = CONCAT31((int3)((uint)iVar19 >> 8),bVar36);
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar197,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar162) = uVar9;
    uVar165 = uVar162;
  }
LAB_1409b2262:
  auVar64._0_4_ = -(uint)(0.0 < local_6e8) & local_528;
  auVar64._4_4_ = -(uint)(0.0 < fStack_6e4) & uStack_524;
  auVar64._8_4_ = -(uint)(0.0 < fStack_6e0) & uStack_520;
  auVar64._12_4_ = -(uint)(0.0 < fStack_6dc) & uStack_51c;
  iVar19 = movmskps(uVar165,auVar64);
  if (iVar19 == 0) {
    return;
  }
  bVar36 = (char)((char)iVar19 << 4) >> 4;
  auVar65._0_4_ = local_5e8 - fVar195 * local_6e8;
  auVar65._4_4_ = fStack_5e4 - fVar199 * fStack_6e4;
  auVar65._8_4_ = fStack_5e0 - fVar200 * fStack_6e0;
  auVar65._12_4_ = fStack_5dc - fVar201 * fStack_6dc;
  if ((bVar36 & 1) != 0) {
    *(float *)(param_1 + iVar37) = auVar65._0_4_;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar65,1);
    *(undefined8 *)(param_1 + iVar68) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar65,2);
    *(undefined8 *)(param_1 + iVar124) = uVar9;
  }
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar65,3);
    *(undefined8 *)(param_1 + iVar147) = uVar9;
    auVar78._0_4_ = local_5d8 - fVar221 * local_6e8;
    auVar78._4_4_ = fStack_5d4 - fVar224 * fStack_6e4;
    auVar78._8_4_ = fStack_5d0 - fVar226 * fStack_6e0;
    auVar78._12_4_ = fStack_5cc - fVar228 * fStack_6dc;
  }
  else {
    auVar78._0_4_ = local_5d8 - fVar221 * local_6e8;
    auVar78._4_4_ = fStack_5d4 - fVar224 * fStack_6e4;
    auVar78._8_4_ = fStack_5d0 - fVar226 * fStack_6e0;
    auVar78._12_4_ = fStack_5cc - fVar228 * fStack_6dc;
  }
  if ((bVar36 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar37) = auVar78._0_4_;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar78,1);
    *(undefined8 *)(param_1 + 4 + (longlong)iVar68) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar78,2);
    *(undefined8 *)(param_1 + 4 + (longlong)iVar124) = uVar9;
  }
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar78,3);
    *(undefined8 *)(param_1 + 4 + (longlong)iVar147) = uVar9;
    auVar66._0_4_ = local_5c8 - fVar146 * local_6e8;
    auVar66._4_4_ = fStack_5c4 - fVar196 * fStack_6e4;
    auVar66._8_4_ = fStack_5c0 - fVar175 * fStack_6e0;
    auVar66._12_4_ = fStack_5bc - fVar176 * fStack_6dc;
  }
  else {
    auVar66._0_4_ = local_5c8 - fVar146 * local_6e8;
    auVar66._4_4_ = fStack_5c4 - fVar196 * fStack_6e4;
    auVar66._8_4_ = fStack_5c0 - fVar175 * fStack_6e0;
    auVar66._12_4_ = fStack_5bc - fVar176 * fStack_6dc;
  }
  if ((bVar36 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar37) = auVar66._0_4_;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar66,1);
    *(undefined8 *)(param_1 + 8 + (longlong)iVar68) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar66,2);
    *(undefined8 *)(param_1 + 8 + (longlong)iVar124) = uVar9;
  }
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar66,3);
    *(undefined8 *)(param_1 + 8 + (longlong)iVar147) = uVar9;
  }
  if ((bVar36 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar37) = local_6e8;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar215,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)iVar68) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar215,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)iVar124) = uVar9;
  }
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar215,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)iVar147) = uVar9;
  }
  return;
}

// ApplyXPBDStretchBiasConstraintsWithDamping___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_CunfCunfREFs_5B__c_unFVector3f_5D_CunfCunfCunfCuni_sse4 @ 1409b2860

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDStretchBiasConstraintsWithDamping___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_CunfCunfREFs_5B__c_unFVector3f_5D_CunfCunfCunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float param_8,float param_9,float *param_10,
               float param_11,float param_12,float param_13,uint param_14)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 (*pauVar31) [16];
  byte bVar32;
  uint uVar33;
  ulonglong uVar34;
  longlong lVar35;
  uint uVar36;
  int iVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  int iVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong lVar47;
  byte bVar48;
  int iVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  ulonglong uVar55;
  longlong lVar56;
  float *pfVar57;
  int iVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  int iVar92;
  int iVar96;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar97;
  float fVar98;
  float fVar102;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined4 uVar103;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar62;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar104;
  float fVar105;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar106;
  float fVar107;
  undefined1 auVar108 [16];
  float fVar120;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  float fVar161;
  float fVar162;
  float fVar170;
  float fVar172;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  float fVar173;
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  float fVar171;
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  float fVar174;
  float fVar180;
  float fVar181;
  undefined1 auVar175 [16];
  float fVar182;
  float fVar183;
  float fVar184;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  float fVar185;
  undefined1 auVar179 [16];
  float fVar186;
  float fVar187;
  float fVar193;
  float fVar194;
  float fVar195;
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  float fVar196;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  float fVar197;
  float fVar198;
  float fVar199;
  float fVar203;
  float fVar204;
  float fVar205;
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  float fVar206;
  float fVar207;
  float fVar211;
  float fVar212;
  float fVar213;
  float fVar214;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  float fVar215;
  float fVar217;
  float fVar218;
  float fVar219;
  undefined1 auVar216 [16];
  undefined1 auVar220 [16];
  float fVar221;
  float fVar222;
  float fVar224;
  float fVar225;
  float fVar226;
  float fVar227;
  float fVar228;
  undefined1 auVar223 [16];
  float fVar229;
  float fVar231;
  float fVar232;
  undefined1 auVar230 [16];
  float fVar233;
  float fVar234;
  float fVar235;
  float fVar236;
  float fVar238;
  float fVar239;
  float fVar240;
  undefined1 auVar237 [16];
  float fVar241;
  float fVar242;
  float fVar244;
  float fVar245;
  float fVar246;
  float fVar247;
  float fVar248;
  undefined1 auVar243 [16];
  float local_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  undefined1 local_7e8 [8];
  float fStack_7e0;
  float fStack_7dc;
  undefined1 local_7c8 [8];
  float fStack_7c0;
  float fStack_7bc;
  float local_788;
  float fStack_784;
  float fStack_780;
  float fStack_77c;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  undefined1 local_758 [8];
  float fStack_750;
  float fStack_74c;
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float local_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  undefined1 local_628 [8];
  float fStack_620;
  float fStack_61c;
  undefined1 local_618 [8];
  float fStack_610;
  float fStack_60c;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  undefined1 local_5f8 [16];
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  longlong local_5c8;
  longlong local_5c0;
  undefined1 local_5b8 [8];
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  longlong local_550;
  longlong local_548;
  longlong local_540;
  longlong local_538;
  longlong local_530;
  longlong local_528;
  longlong local_520;
  longlong local_518;
  longlong local_510;
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [16];
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  uVar36 = param_14 + 3;
  if (-1 < (int)param_14) {
    uVar36 = param_14;
  }
  if ((int)(uVar36 & 0xfffffffc) < 1) {
    uVar33 = 0;
  }
  else {
    local_368 = param_12;
    fStack_364 = param_12;
    fStack_360 = param_12;
    fStack_35c = param_12;
    local_378 = param_13;
    fStack_374 = param_13;
    fStack_370 = param_13;
    fStack_36c = param_13;
    fVar121 = param_11 + param_11;
    pfVar57 = (float *)(param_5 + 0x30);
    lVar53 = 0x20;
    uVar33 = 0;
    do {
      auVar108 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar53);
      auVar165 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar53);
      piVar1 = (int *)(param_3 + lVar53);
      uVar103 = auVar165._0_4_;
      auVar153._4_4_ = uVar103;
      auVar153._0_4_ = uVar103;
      auVar153._8_4_ = uVar103;
      auVar153._12_4_ = uVar103;
      iVar37 = auVar108._0_4_;
      auVar192._8_4_ = auVar108._8_4_;
      auVar192._12_4_ = auVar108._12_4_;
      auVar175._4_4_ = auVar192._12_4_;
      auVar175._0_4_ = iVar37;
      auVar175._8_4_ = auVar108._4_4_;
      auVar175._12_4_ = auVar192._12_4_;
      auVar154 = pblendw(auVar153,auVar175,0x3f);
      auVar192._0_8_ = auVar108._8_8_;
      auVar63 = pblendw(auVar192,auVar165,0xc);
      iVar58 = iVar37 << 4;
      iVar92 = auVar192._12_4_ * 0x10;
      local_550 = (longlong)iVar58;
      local_548 = (longlong)iVar92;
      local_540 = (longlong)(auVar165._8_4_ << 4);
      lVar40 = (longlong)(piVar1[1] << 4);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + local_550)),
                          *(undefined4 *)(param_1 + local_548),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + local_540),0x20);
      local_508 = insertps(auVar108,*(undefined4 *)(param_1 + lVar40),0x30);
      fVar162 = local_508._12_4_;
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_550)),
                          *(undefined4 *)(param_1 + 4 + local_548),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + local_540),0x20);
      auVar64 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + lVar40),0x30);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_550)),
                          *(undefined4 *)(param_1 + 8 + local_548),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + local_540),0x20);
      local_4f8 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + lVar40),0x30);
      uVar7 = *(uint *)(param_1 + 0xc + local_550);
      local_318 = ZEXT416(uVar7);
      uVar8 = *(uint *)(param_1 + 0xc + local_548);
      local_2f8 = ZEXT416(uVar8);
      iVar96 = auVar165._12_4_ << 4;
      local_538 = (longlong)(auVar154._8_4_ << 4);
      local_530 = (longlong)(auVar154._12_4_ * 0x10);
      local_528 = (longlong)iVar96;
      lVar47 = (longlong)(piVar1[2] << 4);
      auVar108 = *(undefined1 (*) [16])(pfVar57 + -0xc);
      fVar234 = pfVar57[-8];
      fVar232 = pfVar57[-7];
      local_7e8._4_4_ = pfVar57[-6];
      fVar182 = pfVar57[-5];
      fVar184 = pfVar57[-4];
      fVar60 = pfVar57[-3];
      fStack_7e0 = pfVar57[-2];
      fVar61 = pfVar57[-1];
      fVar94 = *pfVar57;
      fVar95 = pfVar57[1];
      fStack_7dc = pfVar57[2];
      fVar98 = pfVar57[3];
      local_7e8._0_4_ = auVar108._8_4_;
      fVar126 = auVar108._4_4_;
      fVar120 = auVar108._0_4_;
      fVar106 = auVar108._12_4_;
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + local_538)),
                          *(undefined4 *)(param_1 + local_530),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + local_528),0x20);
      local_4e8 = insertps(auVar108,*(undefined4 *)(param_1 + lVar47),0x30);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_538)),
                          *(undefined4 *)(param_1 + 4 + local_530),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + local_528),0x20);
      local_4d8 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + lVar47),0x30);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_538)),
                          *(undefined4 *)(param_1 + 8 + local_530),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + local_528),0x20);
      auVar188 = insertps(ZEXT416(uVar7),local_2f8,0x10);
      auVar65 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + lVar47),0x30);
      uVar9 = *(uint *)(param_1 + 0xc + local_540);
      local_328 = ZEXT416(uVar9);
      auVar188 = insertps(auVar188,local_328,0x20);
      local_520 = (longlong)(auVar63._0_4_ << 4);
      local_518 = (longlong)(auVar63._4_4_ * 0x10);
      local_510 = (longlong)(*piVar1 << 4);
      lVar26 = (longlong)(piVar1[3] << 4);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + local_520)),
                          *(undefined4 *)(param_1 + local_518),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + local_510),0x20);
      auVar66 = insertps(auVar108,*(undefined4 *)(param_1 + lVar26),0x30);
      fVar104 = auVar66._12_4_;
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_520)),
                          *(undefined4 *)(param_1 + 4 + local_518),0x10);
      uVar10 = *(uint *)(param_1 + 0xc + lVar40);
      local_358 = ZEXT416(uVar10);
      auVar189 = insertps(auVar188,local_358,0x30);
      uVar11 = *(uint *)(param_1 + 0xc + local_538);
      local_308 = ZEXT416(uVar11);
      uVar12 = *(uint *)(param_1 + 0xc + local_530);
      local_2e8 = ZEXT416(uVar12);
      auVar188 = insertps(local_308,local_2e8,0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + local_510),0x20);
      uVar13 = *(uint *)(param_1 + 0xc + local_528);
      local_2d8 = ZEXT416(uVar13);
      auVar188 = insertps(auVar188,local_2d8,0x20);
      auVar155 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + lVar26),0x30);
      uVar14 = *(uint *)(param_1 + 0xc + lVar47);
      local_348 = ZEXT416(uVar14);
      auVar163 = insertps(auVar188,local_348,0x30);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_520)),
                          *(undefined4 *)(param_1 + 8 + local_518),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + local_510),0x20);
      local_4c8 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + lVar26),0x30);
      uVar15 = *(uint *)(param_1 + 0xc + local_520);
      local_2c8 = ZEXT416(uVar15);
      uVar16 = *(uint *)(param_1 + 0xc + local_518);
      local_2b8 = ZEXT416(uVar16);
      auVar108 = insertps(local_2c8,local_2b8,0x10);
      uVar17 = *(uint *)(param_1 + 0xc + local_510);
      local_2a8 = ZEXT416(uVar17);
      auVar108 = insertps(auVar108,local_2a8,0x20);
      uVar18 = *(uint *)(param_1 + 0xc + lVar26);
      local_338 = ZEXT416(uVar18);
      auVar164 = insertps(auVar108,local_338,0x30);
      auVar108 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar53);
      auVar188 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar53);
      pfVar2 = (float *)(param_4 + lVar53);
      auVar220 = insertps(auVar188,auVar108,0x8c);
      fVar107 = local_508._0_4_;
      fVar221 = local_4e8._0_4_;
      fVar242 = local_508._4_4_;
      fVar224 = local_4e8._4_4_;
      fVar245 = local_508._8_4_;
      fVar226 = local_4e8._8_4_;
      fVar228 = local_4e8._12_4_;
      local_758._0_4_ = auVar64._0_4_;
      local_758._4_4_ = auVar64._4_4_;
      fStack_750 = auVar64._8_4_;
      fStack_74c = auVar64._12_4_;
      fVar171 = local_4d8._12_4_;
      fVar99 = local_4d8._0_4_;
      fVar100 = local_4d8._4_4_;
      fVar101 = local_4d8._8_4_;
      fVar195 = auVar66._0_4_;
      fVar197 = auVar66._4_4_;
      fVar198 = auVar66._8_4_;
      fVar62 = auVar155._4_4_;
      fVar105 = auVar155._12_4_;
      fVar185 = auVar155._0_4_;
      fVar187 = auVar155._8_4_;
      fVar199 = (fVar195 - fVar107) * fVar126 + (fVar221 - fVar107) * fVar120;
      fVar203 = (fVar197 - fVar242) * fVar232 + (fVar224 - fVar242) * fVar234;
      fVar204 = (fVar198 - fVar245) * fVar60 + (fVar226 - fVar245) * fVar184;
      fVar205 = (fVar104 - fVar162) * fVar95 + (fVar228 - fVar162) * fVar94;
      fVar215 = (fVar185 - (float)local_758._0_4_) * fVar126 +
                (fVar99 - (float)local_758._0_4_) * fVar120;
      fVar217 = (fVar62 - (float)local_758._4_4_) * fVar232 +
                (fVar100 - (float)local_758._4_4_) * fVar234;
      fVar218 = (fVar187 - fStack_750) * fVar60 + (fVar101 - fStack_750) * fVar184;
      fVar219 = (fVar105 - fStack_74c) * fVar95 + (fVar171 - fStack_74c) * fVar94;
      local_6d8 = auVar65._0_4_;
      fStack_6d4 = auVar65._4_4_;
      fStack_6d0 = auVar65._8_4_;
      fStack_6cc = auVar65._12_4_;
      fVar241 = local_4f8._0_4_;
      fVar244 = local_4f8._4_4_;
      fVar246 = local_4f8._8_4_;
      fVar248 = local_4f8._12_4_;
      fVar213 = local_4c8._4_4_;
      fVar231 = local_4c8._12_4_;
      fVar206 = local_4c8._0_4_;
      fVar247 = local_4c8._8_4_;
      fVar122 = (fVar206 - fVar241) * fVar126 + (local_6d8 - fVar241) * fVar120;
      fVar141 = (fVar213 - fVar244) * fVar232 + (fStack_6d4 - fVar244) * fVar234;
      fVar145 = (fVar247 - fVar246) * fVar60 + (fStack_6d0 - fVar246) * fVar184;
      fVar149 = (fVar231 - fVar248) * fVar95 + (fStack_6cc - fVar248) * fVar94;
      fVar186 = (fVar195 - fVar107) * fVar106 + (fVar221 - fVar107) * (float)local_7e8._0_4_;
      fVar193 = (fVar197 - fVar242) * fVar182 + (fVar224 - fVar242) * (float)local_7e8._4_4_;
      fVar194 = (fVar198 - fVar245) * fVar61 + (fVar226 - fVar245) * fStack_7e0;
      fVar196 = (fVar104 - fVar162) * fVar98 + (fVar228 - fVar162) * fStack_7dc;
      fVar174 = (fVar185 - (float)local_758._0_4_) * fVar106 +
                (fVar99 - (float)local_758._0_4_) * (float)local_7e8._0_4_;
      fVar180 = (fVar62 - (float)local_758._4_4_) * fVar182 +
                (fVar100 - (float)local_758._4_4_) * (float)local_7e8._4_4_;
      fVar181 = (fVar187 - fStack_750) * fVar61 + (fVar101 - fStack_750) * fStack_7e0;
      fVar183 = (fVar105 - fStack_74c) * fVar98 + (fVar171 - fStack_74c) * fStack_7dc;
      fVar207 = (fVar206 - fVar241) * fVar106 + (local_6d8 - fVar241) * (float)local_7e8._0_4_;
      fVar211 = (fVar213 - fVar244) * fVar182 + (fStack_6d4 - fVar244) * (float)local_7e8._4_4_;
      fVar212 = (fVar247 - fVar246) * fVar61 + (fStack_6d0 - fVar246) * fStack_7e0;
      fVar214 = (fVar231 - fVar248) * fVar98 + (fStack_6cc - fVar248) * fStack_7dc;
      auVar155._0_4_ = fVar122 * fVar122 + fVar215 * fVar215 + fVar199 * fVar199;
      auVar155._4_4_ = fVar141 * fVar141 + fVar217 * fVar217 + fVar203 * fVar203;
      auVar155._8_4_ = fVar145 * fVar145 + fVar218 * fVar218 + fVar204 * fVar204;
      auVar155._12_4_ = fVar149 * fVar149 + fVar219 * fVar219 + fVar205 * fVar205;
      auVar223._0_4_ = fVar186 * fVar186;
      auVar223._4_4_ = fVar193 * fVar193;
      auVar223._8_4_ = fVar194 * fVar194;
      auVar223._12_4_ = fVar196 * fVar196;
      auVar243._0_4_ = fVar207 * fVar207 + fVar174 * fVar174 + auVar223._0_4_;
      auVar243._4_4_ = fVar211 * fVar211 + fVar180 * fVar180 + auVar223._4_4_;
      auVar243._8_4_ = fVar212 * fVar212 + fVar181 * fVar181 + auVar223._8_4_;
      auVar243._12_4_ = fVar214 * fVar214 + fVar183 * fVar183 + auVar223._12_4_;
      auVar66 = sqrtps(_local_7e8,auVar155);
      auVar64._4_4_ = _UNK_15076b1f4;
      auVar64._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar64._8_4_ = _UNK_15076b1f8;
      auVar64._12_4_ = _UNK_15076b1fc;
      auVar64 = divps(auVar64,auVar66);
      fVar59 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar66._0_4_) &
                      auVar64._0_4_);
      fVar93 = (float)(-(uint)(_UNK_1506895d4 < auVar66._4_4_) & auVar64._4_4_);
      fVar97 = (float)(-(uint)(_UNK_1506895d8 < auVar66._8_4_) & auVar64._8_4_);
      fVar102 = (float)(-(uint)(_UNK_1506895dc < auVar66._12_4_) & auVar64._12_4_);
      auVar64 = sqrtps(auVar223,auVar243);
      auVar65._4_4_ = _UNK_15076b1f4;
      auVar65._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar65._8_4_ = _UNK_15076b1f8;
      auVar65._12_4_ = _UNK_15076b1fc;
      auVar65 = divps(auVar65,auVar64);
      fVar236 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar64._0_4_) &
                       auVar65._0_4_);
      fVar238 = (float)(-(uint)(_UNK_1506895d4 < auVar64._4_4_) & auVar65._4_4_);
      fVar239 = (float)(-(uint)(_UNK_1506895d8 < auVar64._8_4_) & auVar65._8_4_);
      fVar240 = (float)(-(uint)(_UNK_1506895dc < auVar64._12_4_) & auVar65._12_4_);
      local_288 = auVar66._0_4_ - auVar108._0_4_ * param_13;
      fStack_284 = auVar66._4_4_ - auVar108._12_4_ * param_13;
      fStack_280 = auVar66._8_4_ - auVar188._8_4_ * param_13;
      fStack_27c = auVar66._12_4_ - pfVar2[1] * param_13;
      local_238 = auVar64._0_4_ - auVar108._4_4_ * param_12;
      fStack_234 = auVar64._4_4_ - auVar188._0_4_ * param_12;
      fStack_230 = auVar64._8_4_ - auVar188._12_4_ * param_12;
      fStack_22c = auVar64._12_4_ - pfVar2[2] * param_12;
      fVar199 = fVar199 * fVar59;
      fVar203 = fVar203 * fVar93;
      fVar204 = fVar204 * fVar97;
      fVar205 = fVar205 * fVar102;
      fVar215 = fVar215 * fVar59;
      fVar217 = fVar217 * fVar93;
      fVar218 = fVar218 * fVar97;
      fVar219 = fVar219 * fVar102;
      fVar186 = fVar186 * fVar236;
      fVar193 = fVar193 * fVar238;
      fVar194 = fVar194 * fVar239;
      fVar196 = fVar196 * fVar240;
      fVar174 = fVar174 * fVar236;
      fVar180 = fVar180 * fVar238;
      fVar181 = fVar181 * fVar239;
      fVar183 = fVar183 * fVar240;
      fVar122 = fVar122 * fVar59;
      fVar141 = fVar141 * fVar93;
      fVar145 = fVar145 * fVar97;
      fVar149 = fVar149 * fVar102;
      fVar207 = fVar207 * fVar236;
      fVar211 = fVar211 * fVar238;
      fVar212 = fVar212 * fVar239;
      fVar214 = fVar214 * fVar240;
      local_228 = (fVar122 * fVar207 + fVar215 * fVar174 + fVar199 * fVar186) - auVar220._0_4_;
      fStack_224 = (fVar141 * fVar211 + fVar217 * fVar180 + fVar203 * fVar193) - auVar220._4_4_;
      fStack_220 = (fVar145 * fVar212 + fVar218 * fVar181 + fVar204 * fVar194) - *pfVar2;
      fStack_21c = (fVar149 * fVar214 + fVar219 * fVar183 + fVar205 * fVar196) - pfVar2[3];
      fVar123 = (float)local_7e8._0_4_ * fVar186;
      fVar142 = (float)local_7e8._4_4_ * fVar193;
      fVar146 = fStack_7e0 * fVar194;
      fVar150 = fStack_7dc * fVar196;
      local_608 = (float)local_7e8._0_4_ * fVar174;
      fStack_604 = (float)local_7e8._4_4_ * fVar180;
      fStack_600 = fStack_7e0 * fVar181;
      fStack_5fc = fStack_7dc * fVar183;
      fVar124 = (float)local_7e8._0_4_ * fVar207;
      fVar143 = (float)local_7e8._4_4_ * fVar211;
      fVar147 = fStack_7e0 * fVar212;
      fVar151 = fStack_7dc * fVar214;
      fVar125 = fVar106 * fVar186;
      fVar144 = fVar182 * fVar193;
      fVar148 = fVar61 * fVar194;
      fVar152 = fVar98 * fVar196;
      local_5e8 = fVar106 * fVar174;
      fStack_5e4 = fVar182 * fVar180;
      fStack_5e0 = fVar61 * fVar181;
      fStack_5dc = fVar98 * fVar183;
      local_5d8 = fVar106 * fVar207;
      fStack_5d4 = fVar182 * fVar211;
      fStack_5d0 = fVar61 * fVar212;
      fStack_5cc = fVar98 * fVar214;
      local_458 = fVar120 * fVar199;
      fStack_454 = fVar234 * fVar203;
      fStack_450 = fVar184 * fVar204;
      fStack_44c = fVar94 * fVar205;
      local_448 = fVar120 * fVar215;
      fStack_444 = fVar234 * fVar217;
      fStack_440 = fVar184 * fVar218;
      fStack_43c = fVar94 * fVar219;
      local_598 = fVar120 * fVar122;
      fStack_594 = fVar234 * fVar141;
      fStack_590 = fVar184 * fVar145;
      fStack_58c = fVar94 * fVar149;
      local_628._0_4_ = fVar126 * fVar199;
      local_628._4_4_ = fVar232 * fVar203;
      fStack_620 = fVar60 * fVar204;
      fStack_61c = fVar95 * fVar205;
      local_618._0_4_ = fVar126 * fVar215;
      local_618._4_4_ = fVar232 * fVar217;
      fStack_610 = fVar60 * fVar218;
      fStack_60c = fVar95 * fVar219;
      local_588 = fVar126 * fVar122;
      fStack_584 = fVar232 * fVar141;
      fStack_580 = fVar60 * fVar145;
      fStack_57c = fVar95 * fVar149;
      local_248 = (float)local_7e8._0_4_ * fVar199 * fVar236 + fVar120 * fVar186 * fVar59;
      fStack_244 = (float)local_7e8._4_4_ * fVar203 * fVar238 + fVar234 * fVar193 * fVar93;
      fStack_240 = fStack_7e0 * fVar204 * fVar239 + fVar184 * fVar194 * fVar97;
      fStack_23c = fStack_7dc * fVar205 * fVar240 + fVar94 * fVar196 * fVar102;
      fVar161 = (float)local_7e8._0_4_ * fVar215 * fVar236 + fVar120 * fVar174 * fVar59;
      fVar170 = (float)local_7e8._4_4_ * fVar217 * fVar238 + fVar234 * fVar180 * fVar93;
      fVar172 = fStack_7e0 * fVar218 * fVar239 + fVar184 * fVar181 * fVar97;
      fVar173 = fStack_7dc * fVar219 * fVar240 + fVar94 * fVar183 * fVar102;
      fVar222 = (float)local_7e8._0_4_ * fVar122 * fVar236 + fVar120 * fVar207 * fVar59;
      fVar225 = (float)local_7e8._4_4_ * fVar141 * fVar238 + fVar234 * fVar211 * fVar93;
      fVar227 = fStack_7e0 * fVar145 * fVar239 + fVar184 * fVar212 * fVar97;
      fVar229 = fStack_7dc * fVar149 * fVar240 + fVar94 * fVar214 * fVar102;
      local_258 = fVar199 * fVar236 * fVar106 + fVar186 * fVar59 * fVar126;
      fStack_254 = fVar203 * fVar238 * fVar182 + fVar193 * fVar93 * fVar232;
      fStack_250 = fVar204 * fVar239 * fVar61 + fVar194 * fVar97 * fVar60;
      fStack_24c = fVar205 * fVar240 * fVar98 + fVar196 * fVar102 * fVar95;
      local_278 = fVar215 * fVar236 * fVar106 + fVar174 * fVar59 * fVar126;
      fStack_274 = fVar217 * fVar238 * fVar182 + fVar180 * fVar93 * fVar232;
      fStack_270 = fVar218 * fVar239 * fVar61 + fVar181 * fVar97 * fVar60;
      fStack_26c = fVar219 * fVar240 * fVar98 + fVar183 * fVar102 * fVar95;
      local_268 = fVar122 * fVar236 * fVar106 + fVar207 * fVar59 * fVar126;
      fStack_264 = fVar141 * fVar238 * fVar182 + fVar211 * fVar93 * fVar232;
      fStack_260 = fVar145 * fVar239 * fVar61 + fVar212 * fVar97 * fVar60;
      fStack_25c = fVar149 * fVar240 * fVar98 + fVar214 * fVar102 * fVar95;
      iVar49 = piVar1[2] * 3;
      lVar54 = (longlong)(iVar37 * 3);
      lVar38 = (longlong)(auVar192._12_4_ * 3);
      auVar108 = insertps(ZEXT416(*(uint *)(param_2 + lVar54 * 4)),
                          *(undefined4 *)(param_2 + lVar38 * 4),0x10);
      lVar43 = (longlong)(auVar165._8_4_ * 3);
      auVar188 = insertps(auVar108,*(undefined4 *)(param_2 + lVar43 * 4),0x20);
      auVar108 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar54 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar38 * 4),0x10);
      iVar37 = piVar1[3] * 3;
      iVar42 = *piVar1 * 3;
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + 4 + lVar43 * 4),0x20);
      auVar64 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar54 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar38 * 4),0x10);
      auVar64 = insertps(auVar64,*(undefined4 *)(param_2 + 8 + lVar43 * 4),0x20);
      lVar38 = (longlong)(piVar1[1] * 3);
      auVar188 = insertps(auVar188,*(undefined4 *)(param_2 + lVar38 * 4),0x30);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + 4 + lVar38 * 4),0x30);
      auVar64 = insertps(auVar64,*(undefined4 *)(param_2 + 8 + lVar38 * 4),0x30);
      lVar38 = (longlong)(auVar154._8_4_ * 3);
      lVar43 = (longlong)(auVar154._12_4_ * 3);
      auVar65 = insertps(ZEXT416(*(uint *)(param_2 + lVar38 * 4)),
                         *(undefined4 *)(param_2 + lVar43 * 4),0x10);
      fVar194 = fVar107 - auVar188._0_4_;
      fVar199 = fVar242 - auVar188._4_4_;
      fVar204 = fVar245 - auVar188._8_4_;
      fVar211 = fVar162 - auVar188._12_4_;
      auVar188 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar38 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar43 * 4),0x10);
      auVar66 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar38 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar43 * 4),0x10);
      fVar196 = (float)local_758._0_4_ - auVar108._0_4_;
      fVar203 = (float)local_758._4_4_ - auVar108._4_4_;
      fVar205 = fStack_750 - auVar108._8_4_;
      fVar212 = fStack_74c - auVar108._12_4_;
      lVar38 = (longlong)(auVar165._12_4_ * 3);
      auVar165 = insertps(auVar65,*(undefined4 *)(param_2 + lVar38 * 4),0x20);
      auVar108 = insertps(auVar188,*(undefined4 *)(param_2 + 4 + lVar38 * 4),0x20);
      auVar188 = insertps(auVar66,*(undefined4 *)(param_2 + 8 + lVar38 * 4),0x20);
      lVar38 = (longlong)iVar49;
      auVar165 = insertps(auVar165,*(undefined4 *)(param_2 + lVar38 * 4),0x30);
      fVar60 = fVar241 - auVar64._0_4_;
      fVar94 = fVar244 - auVar64._4_4_;
      fVar98 = fVar246 - auVar64._8_4_;
      fVar93 = fVar248 - auVar64._12_4_;
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + 4 + lVar38 * 4),0x30);
      local_478 = fVar221 - auVar165._0_4_;
      fStack_474 = fVar224 - auVar165._4_4_;
      fStack_470 = fVar226 - auVar165._8_4_;
      fStack_46c = fVar228 - auVar165._12_4_;
      auVar188 = insertps(auVar188,*(undefined4 *)(param_2 + 8 + lVar38 * 4),0x30);
      local_498 = fVar99 - auVar108._0_4_;
      fStack_494 = fVar100 - auVar108._4_4_;
      fStack_490 = fVar101 - auVar108._8_4_;
      fStack_48c = fVar171 - auVar108._12_4_;
      lVar38 = (longlong)(auVar63._0_4_ * 3);
      lVar43 = (longlong)(auVar63._4_4_ * 3);
      lVar44 = (longlong)iVar42;
      lVar54 = (longlong)iVar37;
      auVar108 = insertps(ZEXT416(*(uint *)(param_2 + lVar38 * 4)),
                          *(undefined4 *)(param_2 + lVar43 * 4),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + lVar44 * 4),0x20);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + lVar54 * 4),0x30);
      auVar165 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar38 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar43 * 4),0x10);
      fVar126 = local_6d8 - auVar188._0_4_;
      fVar180 = fStack_6d4 - auVar188._4_4_;
      fVar181 = fStack_6d0 - auVar188._8_4_;
      fVar186 = fStack_6cc - auVar188._12_4_;
      auVar165 = insertps(auVar165,*(undefined4 *)(param_2 + 4 + lVar44 * 4),0x20);
      local_488 = fVar195 - auVar108._0_4_;
      fStack_484 = fVar197 - auVar108._4_4_;
      fStack_480 = fVar198 - auVar108._8_4_;
      fStack_47c = fVar104 - auVar108._12_4_;
      auVar108 = insertps(auVar165,*(undefined4 *)(param_2 + 4 + lVar54 * 4),0x30);
      local_4a8 = fVar185 - auVar108._0_4_;
      fStack_4a4 = fVar62 - auVar108._4_4_;
      fStack_4a0 = fVar187 - auVar108._8_4_;
      fStack_49c = fVar105 - auVar108._12_4_;
      auVar108 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar38 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar43 * 4),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + 8 + lVar44 * 4),0x20);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + 8 + lVar54 * 4),0x30);
      local_4b8 = fVar206 - auVar108._0_4_;
      fStack_4b4 = fVar213 - auVar108._4_4_;
      fStack_4b0 = fVar247 - auVar108._8_4_;
      fStack_4ac = fVar231 - auVar108._12_4_;
      auVar108 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar53);
      auVar165 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar53);
      fStack_5a4 = auVar165._0_4_;
      fStack_5a0 = auVar165._12_4_;
      local_5a8 = auVar108._4_4_;
      pfVar2 = (float *)(param_7 + lVar53);
      fVar182 = *pfVar2;
      fStack_59c = pfVar2[2];
      fVar184 = pfVar2[3];
      auVar65 = insertps(auVar165,auVar108,0x8c);
      auVar127._0_8_ = auVar65._0_8_;
      auVar127._8_4_ = fVar182;
      auVar127._12_4_ = fVar184;
      local_788 = auVar189._0_4_;
      fStack_784 = auVar189._4_4_;
      fStack_780 = auVar189._8_4_;
      fStack_77c = auVar189._12_4_;
      local_7f8 = auVar163._0_4_;
      fStack_7f4 = auVar163._4_4_;
      fStack_7f0 = auVar163._8_4_;
      fStack_7ec = auVar163._12_4_;
      local_778 = auVar164._0_4_;
      fStack_774 = auVar164._4_4_;
      fStack_770 = auVar164._8_4_;
      fStack_76c = auVar164._12_4_;
      local_5b8._4_4_ = fStack_784 + fStack_7f4 + fStack_774;
      local_5b8._0_4_ = local_788 + local_7f8 + local_778;
      fStack_5b0 = fStack_780 + fStack_7f0 + fStack_770;
      fStack_5ac = fStack_77c + fStack_7ec + fStack_76c;
      auVar188 = *(undefined1 (*) [16])(param_6 + -0x20 + lVar53);
      auVar64 = *(undefined1 (*) [16])(param_6 + -0x10 + lVar53);
      pfVar3 = (float *)(param_6 + lVar53);
      auVar63 = insertps(auVar64,auVar188,0x8c);
      fVar234 = *param_10;
      fVar215 = fVar234 * auVar188._0_4_;
      fVar217 = fVar234 * auVar188._12_4_;
      auVar109._4_4_ = fVar217;
      auVar109._0_4_ = fVar215;
      fVar218 = fVar234 * auVar64._8_4_;
      fVar234 = fVar234 * pfVar3[1];
      fVar232 = param_10[1];
      fVar219 = fVar232 * auVar188._4_4_;
      fVar236 = fVar232 * auVar64._0_4_;
      auVar111._4_4_ = fVar236;
      auVar111._0_4_ = fVar219;
      fVar238 = fVar232 * auVar64._12_4_;
      fVar232 = fVar232 * pfVar3[2];
      fStack_45c = param_10[2];
      local_468 = fStack_45c * auVar63._0_4_;
      fStack_464 = fStack_45c * auVar63._4_4_;
      fStack_460 = fStack_45c * *pfVar3;
      fStack_45c = fStack_45c * pfVar3[3];
      auVar163._0_4_ = param_8 * fVar215 * param_8;
      auVar163._4_4_ = param_8 * fVar217 * param_8;
      auVar163._8_4_ = param_8 * fVar218 * param_8;
      auVar163._12_4_ = param_8 * fVar234 * param_8;
      auVar188._4_4_ = _UNK_15076b1f4;
      auVar188._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar188._8_4_ = _UNK_15076b1f8;
      auVar188._12_4_ = _UNK_15076b1fc;
      auVar64 = divps(auVar188,auVar163);
      fVar106 = local_458 + (float)local_628._0_4_;
      fVar122 = fStack_454 + (float)local_628._4_4_;
      fVar145 = fStack_450 + fStack_620;
      fVar120 = fStack_44c + fStack_61c;
      fVar183 = local_448 + (float)local_618._0_4_;
      fVar193 = fStack_444 + (float)local_618._4_4_;
      fVar207 = fStack_440 + fStack_610;
      fVar214 = fStack_43c + fStack_60c;
      fVar61 = local_598 + local_588;
      fVar95 = fStack_594 + fStack_584;
      fVar59 = fStack_590 + fStack_580;
      fVar97 = fStack_58c + fStack_57c;
      auVar109._8_4_ = fVar218;
      auVar109._12_4_ = fVar234;
      auVar188 = divps(auVar109,_local_5b8);
      auVar188 = sqrtps(auVar188,auVar188);
      fVar239 = auVar64._0_4_;
      fVar240 = auVar64._4_4_;
      fVar233 = auVar64._8_4_;
      fVar235 = auVar64._12_4_;
      fVar102 = auVar188._0_4_ * fVar121 * fVar239 * param_8;
      fVar141 = auVar188._4_4_ * fVar121 * fVar240 * param_8;
      fVar149 = auVar188._8_4_ * fVar121 * fVar233 * param_8;
      fVar174 = auVar188._12_4_ * fVar121 * fVar235 * param_8;
      auVar63._4_4_ = _UNK_15076b1f4;
      auVar63._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar63._8_4_ = _UNK_15076b1f8;
      auVar63._12_4_ = _UNK_15076b1fc;
      auVar164._0_4_ =
           ((local_588 * local_588 +
            (float)local_618._0_4_ * (float)local_618._0_4_ +
            (float)local_628._0_4_ * (float)local_628._0_4_) * local_778 +
           (local_598 * local_598 + local_448 * local_448 + local_458 * local_458) * local_7f8 +
           (fVar61 * fVar61 + fVar183 * fVar183 + fVar106 * fVar106) * local_788) *
           (fVar102 + ___xmm_3f8000003f8000003f8000003f800000) + fVar239;
      auVar164._4_4_ =
           ((fStack_584 * fStack_584 +
            (float)local_618._4_4_ * (float)local_618._4_4_ +
            (float)local_628._4_4_ * (float)local_628._4_4_) * fStack_774 +
           (fStack_594 * fStack_594 + fStack_444 * fStack_444 + fStack_454 * fStack_454) *
           fStack_7f4 + (fVar95 * fVar95 + fVar193 * fVar193 + fVar122 * fVar122) * fStack_784) *
           (fVar141 + _UNK_15076b1f4) + fVar240;
      auVar164._8_4_ =
           ((fStack_580 * fStack_580 + fStack_610 * fStack_610 + fStack_620 * fStack_620) *
            fStack_770 +
           (fStack_590 * fStack_590 + fStack_440 * fStack_440 + fStack_450 * fStack_450) *
           fStack_7f0 + (fVar59 * fVar59 + fVar207 * fVar207 + fVar145 * fVar145) * fStack_780) *
           (fVar149 + _UNK_15076b1f8) + fVar233;
      auVar164._12_4_ =
           ((fStack_57c * fStack_57c + fStack_60c * fStack_60c + fStack_61c * fStack_61c) *
            fStack_76c +
           (fStack_58c * fStack_58c + fStack_43c * fStack_43c + fStack_44c * fStack_44c) *
           fStack_7ec + (fVar97 * fVar97 + fVar214 * fVar214 + fVar120 * fVar120) * fStack_77c) *
           (fVar174 + _UNK_15076b1fc) + fVar235;
      auVar110._0_4_ =
           (local_288 - fVar239 * auVar108._0_4_) +
           ((local_588 * local_4b8 +
             (float)local_618._0_4_ * local_4a8 + (float)local_628._0_4_ * local_488 +
            local_598 * fVar126 + local_448 * local_498 + local_458 * local_478) -
           (fVar61 * fVar60 + fVar183 * fVar196 + fVar106 * fVar194)) * fVar102;
      auVar110._4_4_ =
           (fStack_284 - fVar240 * auVar108._12_4_) +
           ((fStack_584 * fStack_4b4 +
             (float)local_618._4_4_ * fStack_4a4 + (float)local_628._4_4_ * fStack_484 +
            fStack_594 * fVar180 + fStack_444 * fStack_494 + fStack_454 * fStack_474) -
           (fVar95 * fVar94 + fVar193 * fVar203 + fVar122 * fVar199)) * fVar141;
      auVar110._8_4_ =
           (fStack_280 - fVar233 * auVar165._8_4_) +
           ((fStack_580 * fStack_4b0 + fStack_610 * fStack_4a0 + fStack_620 * fStack_480 +
            fStack_590 * fVar181 + fStack_440 * fStack_490 + fStack_450 * fStack_470) -
           (fVar59 * fVar98 + fVar207 * fVar205 + fVar145 * fVar204)) * fVar149;
      auVar110._12_4_ =
           (fStack_27c - fVar235 * pfVar2[1]) +
           ((fStack_57c * fStack_4ac + fStack_60c * fStack_49c + fStack_61c * fStack_47c +
            fStack_58c * fVar186 + fStack_43c * fStack_48c + fStack_44c * fStack_46c) -
           (fVar97 * fVar93 + fVar214 * fVar212 + fVar120 * fVar211)) * fVar174;
      auVar188 = divps(auVar110,auVar164);
      fVar239 = (float)(-(uint)(param_9 <= fVar215) & auVar188._0_4_);
      fVar240 = (float)(-(uint)(param_9 <= fVar217) & auVar188._4_4_);
      fVar233 = (float)(-(uint)(param_9 <= fVar218) & auVar188._8_4_);
      fVar235 = (float)(-(uint)(param_9 <= fVar234) & auVar188._12_4_);
      auVar189._0_4_ = param_8 * fVar219 * param_8;
      auVar189._4_4_ = param_8 * fVar236 * param_8;
      auVar189._8_4_ = param_8 * fVar238 * param_8;
      auVar189._12_4_ = param_8 * fVar232 * param_8;
      auVar64 = divps(auVar63,auVar189);
      fVar234 = fVar123 + fVar125;
      fVar95 = fVar142 + fVar144;
      fVar97 = fVar146 + fVar148;
      fVar102 = fVar150 + fVar152;
      fVar141 = local_608 + local_5e8;
      fVar145 = fStack_604 + fStack_5e4;
      fVar149 = fStack_600 + fStack_5e0;
      fVar120 = fStack_5fc + fStack_5dc;
      fVar174 = fVar124 + local_5d8;
      fVar183 = fVar143 + fStack_5d4;
      fVar193 = fVar147 + fStack_5d0;
      fVar207 = fVar151 + fStack_5cc;
      auVar111._8_4_ = fVar238;
      auVar111._12_4_ = fVar232;
      auVar188 = divps(auVar111,_local_5b8);
      auVar188 = sqrtps(auVar188,auVar188);
      fVar214 = auVar64._0_4_;
      fVar215 = auVar64._4_4_;
      fVar217 = auVar64._8_4_;
      fVar218 = auVar64._12_4_;
      fVar61 = auVar188._0_4_ * fVar121 * fVar214 * param_8;
      fVar59 = auVar188._4_4_ * fVar121 * fVar215 * param_8;
      fVar106 = auVar188._8_4_ * fVar121 * fVar217 * param_8;
      fVar122 = auVar188._12_4_ * fVar121 * fVar218 * param_8;
      auVar66._4_4_ = _UNK_15076b1f4;
      auVar66._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar66._8_4_ = _UNK_15076b1f8;
      auVar66._12_4_ = _UNK_15076b1fc;
      auVar128._0_4_ =
           ((local_5d8 * local_5d8 + local_5e8 * local_5e8 + fVar125 * fVar125) * local_778 +
           (fVar124 * fVar124 + local_608 * local_608 + fVar123 * fVar123) * local_7f8 +
           (fVar174 * fVar174 + fVar141 * fVar141 + fVar234 * fVar234) * local_788) *
           (fVar61 + ___xmm_3f8000003f8000003f8000003f800000) + fVar214;
      auVar128._4_4_ =
           ((fStack_5d4 * fStack_5d4 + fStack_5e4 * fStack_5e4 + fVar144 * fVar144) * fStack_774 +
           (fVar143 * fVar143 + fStack_604 * fStack_604 + fVar142 * fVar142) * fStack_7f4 +
           (fVar183 * fVar183 + fVar145 * fVar145 + fVar95 * fVar95) * fStack_784) *
           (fVar59 + _UNK_15076b1f4) + fVar215;
      auVar128._8_4_ =
           ((fStack_5d0 * fStack_5d0 + fStack_5e0 * fStack_5e0 + fVar148 * fVar148) * fStack_770 +
           (fVar147 * fVar147 + fStack_600 * fStack_600 + fVar146 * fVar146) * fStack_7f0 +
           (fVar193 * fVar193 + fVar149 * fVar149 + fVar97 * fVar97) * fStack_780) *
           (fVar106 + _UNK_15076b1f8) + fVar217;
      auVar128._12_4_ =
           ((fStack_5cc * fStack_5cc + fStack_5dc * fStack_5dc + fVar152 * fVar152) * fStack_76c +
           (fVar151 * fVar151 + fStack_5fc * fStack_5fc + fVar150 * fVar150) * fStack_7ec +
           (fVar207 * fVar207 + fVar120 * fVar120 + fVar102 * fVar102) * fStack_77c) *
           (fVar122 + _UNK_15076b1fc) + fVar218;
      auVar112._0_4_ =
           (local_238 - fVar214 * local_5a8) +
           ((local_5d8 * local_4b8 + local_5e8 * local_4a8 + fVar125 * local_488 +
            fVar124 * fVar126 + local_608 * local_498 + fVar123 * local_478) -
           (fVar174 * fVar60 + fVar141 * fVar196 + fVar234 * fVar194)) * fVar61;
      auVar112._4_4_ =
           (fStack_234 - fVar215 * fStack_5a4) +
           ((fStack_5d4 * fStack_4b4 + fStack_5e4 * fStack_4a4 + fVar144 * fStack_484 +
            fVar143 * fVar180 + fStack_604 * fStack_494 + fVar142 * fStack_474) -
           (fVar183 * fVar94 + fVar145 * fVar203 + fVar95 * fVar199)) * fVar59;
      auVar112._8_4_ =
           (fStack_230 - fVar217 * fStack_5a0) +
           ((fStack_5d0 * fStack_4b0 + fStack_5e0 * fStack_4a0 + fVar148 * fStack_480 +
            fVar147 * fVar181 + fStack_600 * fStack_490 + fVar146 * fStack_470) -
           (fVar193 * fVar98 + fVar149 * fVar205 + fVar97 * fVar204)) * fVar106;
      auVar112._12_4_ =
           (fStack_22c - fVar218 * fStack_59c) +
           ((fStack_5cc * fStack_4ac + fStack_5dc * fStack_49c + fVar152 * fStack_47c +
            fVar151 * fVar186 + fStack_5fc * fStack_48c + fVar150 * fStack_46c) -
           (fVar207 * fVar93 + fVar120 * fVar212 + fVar102 * fVar211)) * fVar122;
      auVar188 = divps(auVar112,auVar128);
      fVar218 = (float)(-(uint)(param_9 <= fVar219) & auVar188._0_4_);
      fVar219 = (float)(-(uint)(param_9 <= fVar236) & auVar188._4_4_);
      fVar236 = (float)(-(uint)(param_9 <= fVar238) & auVar188._8_4_);
      fVar238 = (float)(-(uint)(param_9 <= fVar232) & auVar188._12_4_);
      auVar154._4_4_ = fStack_464;
      auVar154._0_4_ = local_468;
      auVar154._8_4_ = fStack_460;
      auVar154._12_4_ = fStack_45c;
      _local_5b8 = divps(auVar154,_local_5b8);
      auVar220._0_4_ = param_8 * local_468 * param_8;
      auVar220._4_4_ = param_8 * fStack_464 * param_8;
      auVar220._8_4_ = param_8 * fStack_460 * param_8;
      auVar220._12_4_ = param_8 * fStack_45c * param_8;
      auVar64 = divps(auVar66,auVar220);
      fVar59 = local_248 + local_258;
      fVar106 = fStack_244 + fStack_254;
      fVar122 = fStack_240 + fStack_250;
      fVar145 = fStack_23c + fStack_24c;
      fVar120 = fVar161 + local_278;
      fVar174 = fVar170 + fStack_274;
      fVar183 = fVar172 + fStack_270;
      fVar193 = fVar173 + fStack_26c;
      fVar234 = fVar222 + local_268;
      fVar232 = fVar225 + fStack_264;
      fVar61 = fVar227 + fStack_260;
      fVar95 = fVar229 + fStack_25c;
      auVar113._0_4_ =
           (fVar222 * fVar222 + fVar161 * fVar161 + local_248 * local_248) * local_7f8 +
           (fVar234 * fVar234 + fVar120 * fVar120 + fVar59 * fVar59) * local_788;
      auVar113._4_4_ =
           (fVar225 * fVar225 + fVar170 * fVar170 + fStack_244 * fStack_244) * fStack_7f4 +
           (fVar232 * fVar232 + fVar174 * fVar174 + fVar106 * fVar106) * fStack_784;
      auVar113._8_4_ =
           (fVar227 * fVar227 + fVar172 * fVar172 + fStack_240 * fStack_240) * fStack_7f0 +
           (fVar61 * fVar61 + fVar183 * fVar183 + fVar122 * fVar122) * fStack_780;
      auVar113._12_4_ =
           (fVar229 * fVar229 + fVar173 * fVar173 + fStack_23c * fStack_23c) * fStack_7ec +
           (fVar95 * fVar95 + fVar193 * fVar193 + fVar145 * fVar145) * fStack_77c;
      auVar188 = sqrtps(auVar113,_local_5b8);
      fVar207 = auVar64._0_4_;
      fVar214 = auVar64._4_4_;
      fVar215 = auVar64._8_4_;
      fVar217 = auVar64._12_4_;
      fVar97 = auVar188._0_4_ * fVar121 * fVar207 * param_8;
      fVar102 = auVar188._4_4_ * fVar121 * fVar214 * param_8;
      fVar141 = auVar188._8_4_ * fVar121 * fVar215 * param_8;
      fVar149 = auVar188._12_4_ * fVar121 * fVar217 * param_8;
      auVar67._0_4_ =
           ((local_268 * local_268 + local_278 * local_278 + local_258 * local_258) * local_778 +
           auVar113._0_4_) * (fVar97 + ___xmm_3f8000003f8000003f8000003f800000) + fVar207;
      auVar67._4_4_ =
           ((fStack_264 * fStack_264 + fStack_274 * fStack_274 + fStack_254 * fStack_254) *
            fStack_774 + auVar113._4_4_) * (fVar102 + _UNK_15076b1f4) + fVar214;
      auVar67._8_4_ =
           ((fStack_260 * fStack_260 + fStack_270 * fStack_270 + fStack_250 * fStack_250) *
            fStack_770 + auVar113._8_4_) * (fVar141 + _UNK_15076b1f8) + fVar215;
      auVar67._12_4_ =
           ((fStack_25c * fStack_25c + fStack_26c * fStack_26c + fStack_24c * fStack_24c) *
            fStack_76c + auVar113._12_4_) * (fVar149 + _UNK_15076b1fc) + fVar217;
      local_298._0_4_ = auVar65._0_4_;
      local_298._4_4_ = auVar65._4_4_;
      auVar114._0_4_ =
           (local_228 - fVar207 * (float)local_298._0_4_) +
           ((local_4b8 * local_268 + local_4a8 * local_278 + local_488 * local_258 +
            fVar126 * fVar222 + local_498 * fVar161 + local_478 * local_248) -
           (fVar60 * fVar234 + fVar196 * fVar120 + fVar194 * fVar59)) * fVar97;
      auVar114._4_4_ =
           (fStack_224 - fVar214 * (float)local_298._4_4_) +
           ((fStack_4b4 * fStack_264 + fStack_4a4 * fStack_274 + fStack_484 * fStack_254 +
            fVar180 * fVar225 + fStack_494 * fVar170 + fStack_474 * fStack_244) -
           (fVar94 * fVar232 + fVar203 * fVar174 + fVar199 * fVar106)) * fVar102;
      auVar114._8_4_ =
           (fStack_220 - fVar215 * fVar182) +
           ((fStack_4b0 * fStack_260 + fStack_4a0 * fStack_270 + fStack_480 * fStack_250 +
            fVar181 * fVar227 + fStack_490 * fVar172 + fStack_470 * fStack_240) -
           (fVar98 * fVar61 + fVar205 * fVar183 + fVar204 * fVar122)) * fVar141;
      auVar114._12_4_ =
           (fStack_21c - fVar217 * fVar184) +
           ((fStack_4ac * fStack_25c + fStack_49c * fStack_26c + fStack_47c * fStack_24c +
            fVar186 * fVar229 + fStack_48c * fVar173 + fStack_46c * fStack_23c) -
           (fVar93 * fVar95 + fVar212 * fVar193 + fVar211 * fVar145)) * fVar149;
      auVar188 = divps(auVar114,auVar67);
      fVar98 = (float)(-(uint)(param_9 <= local_468) & auVar188._0_4_);
      fVar59 = (float)(-(uint)(param_9 <= fStack_464) & auVar188._4_4_);
      fVar93 = (float)(-(uint)(param_9 <= fStack_460) & auVar188._8_4_);
      fVar97 = (float)(-(uint)(param_9 <= fStack_45c) & auVar188._12_4_);
      auVar115._0_8_ = CONCAT44(auVar108._12_4_ + fVar240,auVar108._0_4_ + fVar239);
      auVar115._8_4_ = auVar165._8_4_ + fVar233;
      auVar115._12_4_ = pfVar2[1] + fVar235;
      auVar200._0_4_ = local_5a8 + fVar218;
      auVar200._4_4_ = fStack_5a4 + fVar219;
      auVar200._8_4_ = fStack_5a0 + fVar236;
      auVar200._12_4_ = fStack_59c + fVar238;
      auVar166._0_4_ = (float)local_298._0_4_ + fVar98;
      auVar166._4_4_ = (float)local_298._4_4_ + fVar59;
      auVar166._8_4_ = fVar182 + fVar93;
      auVar166._12_4_ = fVar184 + fVar97;
      auVar108._8_4_ = auVar115._8_4_;
      auVar108._0_8_ = auVar115._0_8_;
      auVar108._12_4_ = auVar115._12_4_;
      auVar108 = insertps(auVar108,auVar200,0x30);
      auVar108 = insertps(auVar108,auVar166,0x20);
      puVar5 = (undefined4 *)(param_7 + -0x20 + lVar53);
      *puVar5 = auVar108._0_4_;
      puVar5[1] = auVar108._12_4_;
      puVar5[2] = auVar108._8_4_;
      puVar5[3] = auVar108._4_4_;
      auVar165._4_4_ = auVar200._8_4_;
      auVar165._0_4_ = auVar200._4_4_;
      auVar165._8_4_ = auVar166._0_4_;
      auVar165._12_4_ = auVar166._4_4_;
      auVar108 = blendps(auVar165,auVar115,4);
      puVar5 = (undefined4 *)(param_7 + -0x10 + lVar53);
      *puVar5 = auVar108._0_4_;
      puVar5[1] = auVar108._12_4_;
      puVar5[2] = auVar108._8_4_;
      puVar5[3] = auVar108._4_4_;
      pfVar2 = (float *)(param_7 + lVar53);
      *pfVar2 = auVar166._8_4_;
      pfVar2[1] = auVar115._12_4_;
      pfVar2[2] = auVar200._12_4_;
      pfVar2[3] = auVar166._12_4_;
      fVar234 = local_248 * fVar98 + fVar123 * fVar218 + local_458 * fVar239;
      fVar232 = fStack_244 * fVar59 + fVar142 * fVar219 + fStack_454 * fVar240;
      fVar182 = fStack_240 * fVar93 + fVar146 * fVar236 + fStack_450 * fVar233;
      fVar184 = fStack_23c * fVar97 + fVar150 * fVar238 + fStack_44c * fVar235;
      fVar145 = fVar161 * fVar98 + local_608 * fVar218 + local_448 * fVar239;
      fVar149 = fVar170 * fVar59 + fStack_604 * fVar219 + fStack_444 * fVar240;
      fVar120 = fVar172 * fVar93 + fStack_600 * fVar236 + fStack_440 * fVar233;
      fVar174 = fVar173 * fVar97 + fStack_5fc * fVar238 + fStack_43c * fVar235;
      fVar60 = fVar222 * fVar98 + fVar124 * fVar218 + local_598 * fVar239;
      fVar61 = fVar225 * fVar59 + fVar143 * fVar219 + fStack_594 * fVar240;
      fVar94 = fVar227 * fVar93 + fVar147 * fVar236 + fStack_590 * fVar233;
      fVar95 = fVar229 * fVar97 + fVar151 * fVar238 + fStack_58c * fVar235;
      fVar106 = local_258 * fVar98 + fVar125 * fVar218 + (float)local_628._0_4_ * fVar239;
      fVar102 = fStack_254 * fVar59 + fVar144 * fVar219 + (float)local_628._4_4_ * fVar240;
      fVar122 = fStack_250 * fVar93 + fVar148 * fVar236 + fStack_620 * fVar233;
      fVar141 = fStack_24c * fVar97 + fVar152 * fVar238 + fStack_61c * fVar235;
      fVar123 = local_278 * fVar98 + local_5e8 * fVar218 + (float)local_618._0_4_ * fVar239;
      fVar124 = fStack_274 * fVar59 + fStack_5e4 * fVar219 + (float)local_618._4_4_ * fVar240;
      fVar125 = fStack_270 * fVar93 + fStack_5e0 * fVar236 + fStack_610 * fVar233;
      fVar126 = fStack_26c * fVar97 + fStack_5dc * fVar238 + fStack_60c * fVar235;
      fVar98 = fVar98 * local_268 + fVar218 * local_5d8 + fVar239 * local_588;
      fVar59 = fVar59 * fStack_264 + fVar219 * fStack_5d4 + fVar240 * fStack_584;
      fVar93 = fVar93 * fStack_260 + fVar236 * fStack_5d0 + fVar233 * fStack_580;
      fVar97 = fVar97 * fStack_25c + fVar238 * fStack_5cc + fVar235 * fStack_57c;
      auVar68._4_4_ = -(uint)(0.0 < fStack_784);
      auVar68._0_4_ = -(uint)(0.0 < local_788);
      auVar68._8_4_ = -(uint)(0.0 < fStack_780);
      auVar68._12_4_ = -(uint)(0.0 < fStack_77c);
      iVar49 = movmskps(iVar49,auVar68);
      if (iVar49 != 0) {
        bVar48 = (char)((char)iVar49 << 4) >> 4;
        fVar107 = fVar107 + (fVar234 + fVar106) * local_788;
        auVar69._4_4_ = fVar242 + (fVar232 + fVar102) * fStack_784;
        auVar69._0_4_ = fVar107;
        auVar69._8_4_ = fVar245 + (fVar182 + fVar122) * fStack_780;
        auVar69._12_4_ = fVar162 + (fVar184 + fVar141) * fStack_77c;
        if ((bVar48 & 1) != 0) {
          *(float *)(param_1 + local_550) = fVar107;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar69,1);
          *(undefined8 *)(param_1 + local_548) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar69,2);
          *(undefined8 *)(param_1 + local_540) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar69,3);
          *(undefined8 *)(param_1 + lVar40) = uVar19;
        }
        fVar107 = (float)local_758._0_4_ + (fVar145 + fVar123) * local_788;
        auVar70._4_4_ = (float)local_758._4_4_ + (fVar149 + fVar124) * fStack_784;
        auVar70._0_4_ = fVar107;
        auVar70._8_4_ = fStack_750 + (fVar120 + fVar125) * fStack_780;
        auVar70._12_4_ = fStack_74c + (fVar174 + fVar126) * fStack_77c;
        if ((bVar48 & 1) != 0) {
          *(float *)(param_1 + 4 + local_550) = fVar107;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar70,1);
          *(undefined8 *)(param_1 + 4 + local_548) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar70,2);
          *(undefined8 *)(param_1 + 4 + local_540) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar70,3);
          *(undefined8 *)(param_1 + 4 + lVar40) = uVar19;
        }
        auVar71._0_4_ = fVar241 + local_788 * (fVar60 + fVar98);
        auVar71._4_4_ = fVar244 + fStack_784 * (fVar61 + fVar59);
        auVar71._8_4_ = fVar246 + fStack_780 * (fVar94 + fVar93);
        auVar71._12_4_ = fVar248 + fStack_77c * (fVar95 + fVar97);
        if ((bVar48 & 1) != 0) {
          *(float *)(param_1 + 8 + local_550) = auVar71._0_4_;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar71,1);
          *(undefined8 *)(param_1 + 8 + local_548) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar71,2);
          *(undefined8 *)(param_1 + 8 + local_540) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar71,3);
          *(undefined8 *)(param_1 + 8 + lVar40) = uVar19;
        }
        if ((bVar48 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_550) = uVar7;
        }
        if ((bVar48 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_548) = uVar8;
        }
        if ((bVar48 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_540) = uVar9;
        }
        iVar42 = iVar58;
        iVar37 = iVar92;
        if ((char)bVar48 < '\0') {
          *(uint *)(param_1 + 0xc + lVar40) = uVar10;
        }
      }
      auVar72._4_4_ = -(uint)(0.0 < fStack_7f4);
      auVar72._0_4_ = -(uint)(0.0 < local_7f8);
      auVar72._8_4_ = -(uint)(0.0 < fStack_7f0);
      auVar72._12_4_ = -(uint)(0.0 < fStack_7ec);
      iVar49 = movmskps(iVar42,auVar72);
      if (iVar49 != 0) {
        bVar48 = (char)((char)iVar49 << 4) >> 4;
        auVar167._0_4_ = fVar221 - fVar234 * local_7f8;
        auVar167._4_4_ = fVar224 - fVar232 * fStack_7f4;
        auVar167._8_4_ = fVar226 - fVar182 * fStack_7f0;
        auVar167._12_4_ = fVar228 - fVar184 * fStack_7ec;
        if ((bVar48 & 1) != 0) {
          *(float *)(param_1 + local_538) = auVar167._0_4_;
        }
        if ((bVar48 & 2) == 0) {
          if ((bVar48 & 4) == 0) goto LAB_1409b3c98;
LAB_1409b3f72:
          uVar19 = extractps(auVar167,2);
          *(undefined8 *)(param_1 + local_528) = uVar19;
          if ((char)bVar48 < '\0') goto LAB_1409b3f82;
LAB_1409b3ca1:
          auVar73._0_4_ = fVar99 - fVar145 * local_7f8;
          auVar73._4_4_ = fVar100 - fVar149 * fStack_7f4;
          auVar73._8_4_ = fVar101 - fVar120 * fStack_7f0;
          auVar73._12_4_ = fVar171 - fVar174 * fStack_7ec;
        }
        else {
          uVar19 = extractps(auVar167,1);
          *(undefined8 *)(param_1 + local_530) = uVar19;
          if ((bVar48 & 4) != 0) goto LAB_1409b3f72;
LAB_1409b3c98:
          if (-1 < (char)bVar48) goto LAB_1409b3ca1;
LAB_1409b3f82:
          uVar19 = extractps(auVar167,3);
          *(undefined8 *)(param_1 + lVar47) = uVar19;
          auVar73._0_4_ = fVar99 - fVar145 * local_7f8;
          auVar73._4_4_ = fVar100 - fVar149 * fStack_7f4;
          auVar73._8_4_ = fVar101 - fVar120 * fStack_7f0;
          auVar73._12_4_ = fVar171 - fVar174 * fStack_7ec;
        }
        if ((bVar48 & 1) != 0) {
          *(int *)(param_1 + 4 + local_538) = auVar73._0_4_;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar73,1);
          *(undefined8 *)(param_1 + 4 + local_530) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar73,2);
          *(undefined8 *)(param_1 + 4 + local_528) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar73,3);
          *(undefined8 *)(param_1 + 4 + lVar47) = uVar19;
        }
        auVar176._0_4_ = local_6d8 - local_7f8 * fVar60;
        auVar176._4_4_ = fStack_6d4 - fStack_7f4 * fVar61;
        auVar176._8_4_ = fStack_6d0 - fStack_7f0 * fVar94;
        auVar176._12_4_ = fStack_6cc - fStack_7ec * fVar95;
        if ((bVar48 & 1) != 0) {
          *(float *)(param_1 + 8 + local_538) = auVar176._0_4_;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar176,1);
          *(undefined8 *)(param_1 + 8 + local_530) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar176,2);
          *(undefined8 *)(param_1 + 8 + local_528) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar176,3);
          *(undefined8 *)(param_1 + 8 + lVar47) = uVar19;
        }
        if ((bVar48 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_538) = uVar11;
        }
        if ((bVar48 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_530) = uVar12;
        }
        if ((bVar48 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_528) = uVar13;
        }
        iVar37 = iVar96;
        if ((char)bVar48 < '\0') {
          *(uint *)(param_1 + 0xc + lVar47) = uVar14;
        }
      }
      auVar74._4_4_ = -(uint)(0.0 < fStack_774);
      auVar74._0_4_ = -(uint)(0.0 < local_778);
      auVar74._8_4_ = -(uint)(0.0 < fStack_770);
      auVar74._12_4_ = -(uint)(0.0 < fStack_76c);
      iVar37 = movmskps(iVar37,auVar74);
      if (iVar37 != 0) {
        bVar48 = (char)((char)iVar37 << 4) >> 4;
        auVar156._0_4_ = fVar195 - fVar106 * local_778;
        auVar156._4_4_ = fVar197 - fVar102 * fStack_774;
        auVar156._8_4_ = fVar198 - fVar122 * fStack_770;
        auVar156._12_4_ = fVar104 - fVar141 * fStack_76c;
        if ((bVar48 & 1) == 0) {
          if ((bVar48 & 2) == 0) goto LAB_1409b3d75;
LAB_1409b40dc:
          uVar19 = extractps(auVar156,1);
          *(undefined8 *)(param_1 + local_518) = uVar19;
          if ((bVar48 & 4) != 0) goto LAB_1409b40ed;
LAB_1409b3d7f:
          if (-1 < (char)bVar48) goto LAB_1409b3d87;
LAB_1409b40fd:
          uVar19 = extractps(auVar156,3);
          *(undefined8 *)(param_1 + lVar26) = uVar19;
          auVar116._0_4_ = fVar185 - fVar123 * local_778;
          auVar116._4_4_ = fVar62 - fVar124 * fStack_774;
          auVar116._8_4_ = fVar187 - fVar125 * fStack_770;
          auVar116._12_4_ = fVar105 - fVar126 * fStack_76c;
          if ((bVar48 & 1) != 0) goto LAB_1409b411e;
LAB_1409b3d99:
          if ((bVar48 & 2) == 0) goto LAB_1409b3da3;
LAB_1409b412f:
          uVar19 = extractps(auVar116,1);
          *(undefined8 *)(param_1 + 4 + local_518) = uVar19;
          if ((bVar48 & 4) != 0) goto LAB_1409b4141;
LAB_1409b3dad:
          if (-1 < (char)bVar48) goto LAB_1409b3db5;
LAB_1409b4152:
          uVar19 = extractps(auVar116,3);
          *(undefined8 *)(param_1 + 4 + lVar26) = uVar19;
          auVar75._0_4_ = fVar206 - local_778 * fVar98;
          auVar75._4_4_ = fVar213 - fStack_774 * fVar59;
          auVar75._8_4_ = fVar247 - fStack_770 * fVar93;
          auVar75._12_4_ = fVar231 - fStack_76c * fVar97;
        }
        else {
          *(float *)(param_1 + local_520) = auVar156._0_4_;
          if ((bVar48 & 2) != 0) goto LAB_1409b40dc;
LAB_1409b3d75:
          if ((bVar48 & 4) == 0) goto LAB_1409b3d7f;
LAB_1409b40ed:
          uVar19 = extractps(auVar156,2);
          *(undefined8 *)(param_1 + local_510) = uVar19;
          if ((char)bVar48 < '\0') goto LAB_1409b40fd;
LAB_1409b3d87:
          auVar116._0_4_ = fVar185 - fVar123 * local_778;
          auVar116._4_4_ = fVar62 - fVar124 * fStack_774;
          auVar116._8_4_ = fVar187 - fVar125 * fStack_770;
          auVar116._12_4_ = fVar105 - fVar126 * fStack_76c;
          if ((bVar48 & 1) == 0) goto LAB_1409b3d99;
LAB_1409b411e:
          *(int *)(param_1 + 4 + local_520) = auVar116._0_4_;
          if ((bVar48 & 2) != 0) goto LAB_1409b412f;
LAB_1409b3da3:
          if ((bVar48 & 4) == 0) goto LAB_1409b3dad;
LAB_1409b4141:
          uVar19 = extractps(auVar116,2);
          *(undefined8 *)(param_1 + 4 + local_510) = uVar19;
          if ((char)bVar48 < '\0') goto LAB_1409b4152;
LAB_1409b3db5:
          auVar75._0_4_ = fVar206 - local_778 * fVar98;
          auVar75._4_4_ = fVar213 - fStack_774 * fVar59;
          auVar75._8_4_ = fVar247 - fStack_770 * fVar93;
          auVar75._12_4_ = fVar231 - fStack_76c * fVar97;
        }
        if ((bVar48 & 1) != 0) {
          *(int *)(param_1 + 8 + local_520) = auVar75._0_4_;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar75,1);
          *(undefined8 *)(param_1 + 8 + local_518) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar75,2);
          *(undefined8 *)(param_1 + 8 + local_510) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar75,3);
          *(undefined8 *)(param_1 + 8 + lVar26) = uVar19;
        }
        if ((bVar48 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_520) = uVar15;
        }
        if ((bVar48 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_518) = uVar16;
        }
        if ((bVar48 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_510) = uVar17;
        }
        if ((char)bVar48 < '\0') {
          *(uint *)(param_1 + 0xc + lVar26) = uVar18;
        }
      }
      lVar53 = lVar53 + 0x30;
      pfVar57 = pfVar57 + 0x10;
      uVar33 = uVar33 + 4;
      local_298 = auVar127;
    } while ((int)uVar33 < (int)(uVar36 & 0xfffffffc));
  }
  if ((int)param_14 <= (int)uVar33) {
    return;
  }
  auVar131._0_4_ =
       -(uint)((int)(uVar33 | (uint)__xmm_00000003000000020000000100000000) < (int)param_14);
  auVar131._4_4_ =
       -(uint)((int)(uVar33 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_14);
  auVar131._8_4_ = -(uint)((int)(uVar33 | _UNK_150631e08) < (int)param_14);
  auVar131._12_4_ = -(uint)((int)(uVar33 | _UNK_150631e0c) < (int)param_14);
  uVar27 = (ulonglong)uVar33;
  pauVar4 = (undefined1 (*) [16])(param_3 + uVar27 * 0xc);
  iVar37 = movmskps((int)param_3,auVar131);
  bVar48 = (char)((char)iVar37 << 4) >> 4;
  if (iVar37 == 0xf) {
    auVar108 = *pauVar4;
    auVar165 = pauVar4[1];
    uVar103 = auVar165._0_4_;
    auVar202._4_4_ = uVar103;
    auVar202._0_4_ = uVar103;
    auVar202._8_4_ = uVar103;
    auVar202._12_4_ = uVar103;
    uVar103 = auVar108._12_4_;
    auVar209._0_8_ = CONCAT44(uVar103,auVar108._0_4_);
    auVar209._8_4_ = auVar108._4_4_;
    auVar209._12_4_ = uVar103;
    auVar188 = pblendw(auVar202,auVar209,0x3f);
    auVar191._0_8_ = auVar108._8_8_;
    auVar191._8_4_ = auVar108._8_4_;
    auVar191._12_4_ = uVar103;
    auVar108 = pblendw(auVar191,auVar165,0xc);
    auVar117._0_8_ = CONCAT44(*(undefined4 *)(pauVar4[2] + 4),auVar165._8_4_);
    auVar117._8_4_ = auVar165._12_4_;
    auVar117._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
    auVar208._8_8_ = auVar117._0_8_;
    auVar208._0_8_ = auVar209._0_8_;
    auVar201._8_8_ = auVar117._8_8_;
    auVar201._0_8_ = auVar188._8_8_;
    auVar190._0_8_ = auVar108._0_8_;
    auVar190._8_4_ = *(undefined4 *)pauVar4[2];
    auVar190._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
  }
  else {
    auVar76._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar131._0_4_;
    auVar76._4_4_ = _UNK_150b50da4 & auVar131._4_4_;
    auVar76._8_4_ = _UNK_150b50da8 & auVar131._8_4_;
    auVar76._12_4_ = _UNK_150b50dac & auVar131._12_4_;
    lVar53 = extractps(auVar76,1);
    lVar26 = extractps(auVar76,2);
    lVar38 = extractps(auVar76,3);
    auVar208._4_4_ = *(undefined4 *)(*pauVar4 + lVar53);
    auVar208._0_4_ = *(undefined4 *)*pauVar4;
    auVar208._12_4_ = *(undefined4 *)(*pauVar4 + lVar38);
    auVar208._8_4_ = *(undefined4 *)(*pauVar4 + lVar26);
    auVar108 = ___xmm_000000280000001c0000001000000004 & auVar131;
    auVar201._4_4_ = *(undefined4 *)(*pauVar4 + auVar108._4_4_);
    auVar201._0_4_ = *(undefined4 *)(*pauVar4 + auVar108._0_4_);
    auVar201._12_4_ = *(undefined4 *)(*pauVar4 + auVar108._12_4_);
    auVar201._8_4_ = *(undefined4 *)(*pauVar4 + auVar108._8_4_);
    auVar108 = ___xmm_0000002c000000200000001400000008 & auVar131;
    auVar190._4_4_ = *(undefined4 *)(*pauVar4 + auVar108._4_4_);
    auVar190._0_4_ = *(undefined4 *)(*pauVar4 + auVar108._0_4_);
    auVar190._12_4_ = *(undefined4 *)(*pauVar4 + auVar108._12_4_);
    auVar190._8_4_ = *(undefined4 *)(*pauVar4 + auVar108._8_4_);
  }
  local_578._0_4_ = auVar208._0_4_ << 4;
  local_578._4_4_ = auVar208._4_4_ << 4;
  local_578._8_4_ = auVar208._8_4_ << 4;
  local_578._12_4_ = auVar208._12_4_ << 4;
  auVar108 = auVar131 & local_578;
  pfVar57 = (float *)(auVar108._0_4_ + param_1);
  if ((bVar48 & 1) != 0) {
    local_658 = *pfVar57;
  }
  lVar53 = (longlong)auVar108._4_4_;
  if ((bVar48 & 2) != 0) {
    fStack_654 = *(float *)(param_1 + lVar53);
  }
  iVar37 = auVar108._12_4_;
  auVar165 = ___xmm_00000004000000040000000400000004 & auVar131;
  uVar36 = auVar165._4_4_;
  if ((bVar48 & 4) != 0) {
    fStack_650 = *(float *)(param_1 + auVar108._8_4_);
  }
  if ((char)bVar48 < '\0') {
    fStack_64c = *(float *)(param_1 + iVar37);
  }
  if ((bVar48 & 1) != 0) {
    local_648 = *(float *)((ulonglong)auVar165._0_4_ + (longlong)pfVar57);
  }
  if ((bVar48 & 2) != 0) {
    fStack_644 = *(float *)((ulonglong)uVar36 + lVar53 + param_1);
  }
  uVar51 = (ulonglong)auVar165._8_4_;
  uVar55 = (ulonglong)auVar165._0_4_;
  auVar188 = ___xmm_00000008000000080000000800000008 & auVar131;
  lVar26 = auVar108._8_4_ + param_1;
  uVar34 = (ulonglong)auVar165._12_4_;
  if ((bVar48 & 4) != 0) {
    fStack_640 = *(float *)(uVar51 + lVar26);
  }
  if ((char)bVar48 < '\0') {
    fStack_63c = *(float *)(uVar34 + iVar37 + param_1);
  }
  if ((bVar48 & 1) != 0) {
    local_638 = *(float *)((ulonglong)auVar188._0_4_ + (longlong)pfVar57);
  }
  uVar50 = (ulonglong)auVar188._4_4_;
  uVar41 = (ulonglong)auVar188._0_4_;
  lVar38 = iVar37 + param_1;
  auVar237._0_4_ = auVar201._0_4_ << 4;
  auVar237._4_4_ = auVar201._4_4_ << 4;
  auVar237._8_4_ = auVar201._8_4_ << 4;
  auVar237._12_4_ = auVar201._12_4_ << 4;
  uVar28 = (ulonglong)auVar188._8_4_;
  if ((bVar48 & 2) != 0) {
    fStack_634 = *(float *)(uVar50 + lVar53 + param_1);
  }
  auVar108 = auVar131 & auVar237;
  uVar29 = (ulonglong)auVar188._12_4_;
  if ((bVar48 & 4) != 0) {
    fStack_630 = *(float *)(uVar28 + lVar26);
  }
  if ((char)bVar48 < '\0') {
    fStack_62c = *(float *)(uVar29 + lVar38);
  }
  lVar43 = (longlong)auVar108._0_4_;
  if ((bVar48 & 1) != 0) {
    local_688 = *(float *)(param_1 + lVar43);
  }
  lVar54 = (longlong)auVar108._4_4_;
  if ((bVar48 & 2) != 0) {
    fStack_684 = *(float *)(param_1 + lVar54);
  }
  if ((bVar48 & 4) != 0) {
    fStack_680 = *(float *)(param_1 + auVar108._8_4_);
  }
  if ((char)bVar48 < '\0') {
    fStack_67c = *(float *)(param_1 + auVar108._12_4_);
  }
  if ((bVar48 & 1) != 0) {
    local_678 = *(float *)(uVar55 + lVar43 + param_1);
  }
  if ((bVar48 & 2) != 0) {
    fStack_674 = *(float *)((ulonglong)uVar36 + lVar54 + param_1);
  }
  lVar40 = auVar108._8_4_ + param_1;
  if ((bVar48 & 4) != 0) {
    fStack_670 = *(float *)(uVar51 + lVar40);
  }
  lVar44 = auVar108._12_4_ + param_1;
  if ((char)bVar48 < '\0') {
    fStack_66c = *(float *)(uVar34 + lVar44);
  }
  if ((bVar48 & 1) != 0) {
    local_668 = *(float *)(uVar41 + lVar43 + param_1);
  }
  local_568._0_4_ = auVar190._0_4_ << 4;
  local_568._4_4_ = auVar190._4_4_ << 4;
  local_568._8_4_ = auVar190._8_4_ << 4;
  local_568._12_4_ = auVar190._12_4_ << 4;
  if ((bVar48 & 2) != 0) {
    fStack_664 = *(float *)(uVar50 + lVar54 + param_1);
  }
  auVar108 = auVar131 & local_568;
  if ((bVar48 & 4) != 0) {
    fStack_660 = *(float *)(uVar28 + lVar40);
  }
  if ((char)bVar48 < '\0') {
    fStack_65c = *(float *)(uVar29 + lVar44);
  }
  lVar47 = (longlong)auVar108._0_4_;
  if ((bVar48 & 1) != 0) {
    local_6b8 = *(float *)(param_1 + lVar47);
  }
  lVar35 = (longlong)auVar108._4_4_;
  if ((bVar48 & 2) != 0) {
    fStack_6b4 = *(float *)(param_1 + lVar35);
  }
  iVar37 = auVar108._12_4_;
  if ((bVar48 & 4) != 0) {
    fStack_6b0 = *(float *)(param_1 + auVar108._8_4_);
  }
  if ((char)bVar48 < '\0') {
    fStack_6ac = *(float *)(param_1 + iVar37);
  }
  if ((bVar48 & 1) != 0) {
    local_6a8 = *(float *)(uVar55 + lVar47 + param_1);
  }
  if ((bVar48 & 2) != 0) {
    fStack_6a4 = *(float *)((ulonglong)uVar36 + lVar35 + param_1);
  }
  auVar165 = ___xmm_0000000c0000000c0000000c0000000c & auVar131;
  lVar56 = auVar108._8_4_ + param_1;
  if ((bVar48 & 4) != 0) {
    fStack_6a0 = *(float *)(uVar51 + lVar56);
  }
  if ((char)bVar48 < '\0') {
    fStack_69c = *(float *)(uVar34 + iVar37 + param_1);
  }
  if ((bVar48 & 1) != 0) {
    local_698 = *(float *)(uVar41 + lVar47 + param_1);
  }
  uVar39 = (ulonglong)auVar165._4_4_;
  uVar45 = (ulonglong)auVar165._0_4_;
  lVar52 = iVar37 + param_1;
  uVar30 = (ulonglong)auVar165._8_4_;
  if ((bVar48 & 2) != 0) {
    fStack_694 = *(float *)(uVar50 + lVar35 + param_1);
  }
  uVar46 = (ulonglong)auVar165._12_4_;
  auVar188 = insertps(ZEXT416(*(uint *)(uVar45 + (longlong)pfVar57)),
                      *(undefined4 *)(uVar39 + lVar53 + param_1),0x10);
  auVar108 = insertps(ZEXT416(*(uint *)(uVar45 + lVar43 + param_1)),
                      *(undefined4 *)(uVar39 + lVar54 + param_1),0x10);
  auVar165 = insertps(ZEXT416(*(uint *)(uVar45 + lVar47 + param_1)),
                      *(undefined4 *)(uVar39 + lVar35 + param_1),0x10);
  if ((bVar48 & 4) != 0) {
    fStack_690 = *(float *)(uVar28 + lVar56);
  }
  auVar188 = insertps(auVar188,*(undefined4 *)(uVar30 + lVar26),0x20);
  auVar108 = insertps(auVar108,*(undefined4 *)(uVar30 + lVar40),0x20);
  auVar165 = insertps(auVar165,*(undefined4 *)(uVar30 + lVar56),0x20);
  bVar32 = ~bVar48;
  if (((char)bVar48 < '\0') && (fStack_68c = *(float *)(uVar29 + lVar52), (bVar32 & 0xf) == 0)) {
    lVar53 = uVar27 * 0x10;
    auVar64 = *(undefined1 (*) [16])(param_5 + lVar53);
    puVar5 = (undefined4 *)(param_5 + 0x10 + lVar53);
    auVar65 = *(undefined1 (*) [16])(param_5 + 0x20 + lVar53);
    puVar6 = (undefined4 *)(param_5 + 0x30 + lVar53);
    auVar179._8_4_ = auVar64._4_4_;
    auVar179._0_8_ = auVar64._0_8_;
    auVar179._12_4_ = puVar5[1];
    local_128._4_4_ = *puVar5;
    local_128._0_4_ = auVar64._0_4_;
    auVar169._0_8_ = CONCAT44(puVar5[2],auVar64._8_4_);
    auVar169._8_4_ = auVar64._12_4_;
    auVar169._12_4_ = puVar5[3];
    auVar119._0_8_ = auVar65._0_8_;
    auVar119._8_4_ = auVar65._4_4_;
    auVar119._12_4_ = puVar6[1];
    local_118._8_8_ = auVar119._8_8_;
    local_128._12_4_ = *puVar6;
    local_128._8_4_ = auVar65._0_4_;
    auVar160._0_8_ = CONCAT44(puVar6[2],auVar65._8_4_);
    auVar160._8_4_ = auVar65._12_4_;
    auVar160._12_4_ = puVar6[3];
    local_118._0_8_ = auVar179._8_8_;
    local_108._8_8_ = auVar160._0_8_;
    local_108._0_8_ = auVar169._0_8_;
    local_f8._8_8_ = auVar160._8_8_;
    local_f8._0_8_ = auVar169._8_8_;
  }
  else {
    auVar77._0_4_ = ___xmm_00000030000000200000001000000000 & auVar131._0_4_;
    auVar77._4_4_ = _UNK_150b511c4 & auVar131._4_4_;
    auVar77._8_4_ = _UNK_150b511c8 & auVar131._8_4_;
    auVar77._12_4_ = _UNK_150b511cc & auVar131._12_4_;
    lVar26 = extractps(auVar77,1);
    lVar43 = extractps(auVar77,2);
    lVar54 = extractps(auVar77,3);
    lVar53 = param_5 + uVar27 * 0x10;
    auVar64 = insertps(ZEXT416(*(uint *)(param_5 + uVar27 * 0x10)),*(undefined4 *)(lVar26 + lVar53),
                       0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(lVar43 + lVar53),0x20);
    local_128 = insertps(auVar64,*(undefined4 *)(lVar54 + lVar53),0x30);
    auVar64 = ___xmm_00000034000000240000001400000004 & auVar131;
    auVar65 = insertps(ZEXT416(*(uint *)((ulonglong)auVar64._0_4_ + lVar53)),
                       *(undefined4 *)((ulonglong)auVar64._4_4_ + lVar53),0x10);
    auVar65 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._8_4_ + lVar53),0x20);
    local_118 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._12_4_ + lVar53),0x30);
    auVar64 = ___xmm_00000038000000280000001800000008 & auVar131;
    auVar65 = insertps(ZEXT416(*(uint *)((ulonglong)auVar64._0_4_ + lVar53)),
                       *(undefined4 *)((ulonglong)auVar64._4_4_ + lVar53),0x10);
    auVar65 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._8_4_ + lVar53),0x20);
    local_108 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._12_4_ + lVar53),0x30);
    auVar64 = ___xmm_0000003c0000002c0000001c0000000c & auVar131;
    auVar65 = insertps(ZEXT416(*(uint *)((ulonglong)auVar64._0_4_ + lVar53)),
                       *(undefined4 *)((ulonglong)auVar64._4_4_ + lVar53),0x10);
    auVar65 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._8_4_ + lVar53),0x20);
    local_f8 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._12_4_ + lVar53),0x30);
  }
  auVar188 = insertps(auVar188,*(undefined4 *)(uVar46 + lVar38),0x30);
  auVar108 = insertps(auVar108,*(undefined4 *)(uVar46 + lVar44),0x30);
  auVar165 = insertps(auVar165,*(undefined4 *)(uVar46 + lVar52),0x30);
  pauVar4 = (undefined1 (*) [16])(param_4 + uVar27 * 0xc);
  if ((bVar32 & 0xf) == 0) {
    auVar64 = *pauVar4;
    auVar65 = pauVar4[1];
    local_158._0_4_ = auVar64._0_4_;
    auVar63 = insertps(auVar65,auVar64,0x8c);
    local_158._4_4_ = auVar64._12_4_;
    local_158._8_4_ = auVar65._8_4_;
    local_158._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
    local_148._4_4_ = auVar65._0_4_;
    local_148._0_4_ = auVar64._4_4_;
    local_148._8_4_ = auVar65._12_4_;
    local_148._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
    local_138._0_8_ = auVar63._0_8_;
    local_138._8_4_ = *(undefined4 *)pauVar4[2];
    local_138._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
  }
  else {
    auVar78._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar131._0_4_;
    auVar78._4_4_ = _UNK_150b50da4 & auVar131._4_4_;
    auVar78._8_4_ = _UNK_150b50da8 & auVar131._8_4_;
    auVar78._12_4_ = _UNK_150b50dac & auVar131._12_4_;
    lVar53 = extractps(auVar78,1);
    lVar26 = extractps(auVar78,2);
    lVar38 = extractps(auVar78,3);
    auVar64 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar53),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(*pauVar4 + lVar26),0x20);
    local_158 = insertps(auVar64,*(undefined4 *)(*pauVar4 + lVar38),0x30);
    auVar64 = ___xmm_000000280000001c0000001000000004 & auVar131;
    auVar65 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar64._0_4_)),
                       *(undefined4 *)(*pauVar4 + auVar64._4_4_),0x10);
    auVar65 = insertps(auVar65,*(undefined4 *)(*pauVar4 + auVar64._8_4_),0x20);
    local_148 = insertps(auVar65,*(undefined4 *)(*pauVar4 + auVar64._12_4_),0x30);
    auVar64 = ___xmm_0000002c000000200000001400000008 & auVar131;
    auVar65 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar64._0_4_)),
                       *(undefined4 *)(*pauVar4 + auVar64._4_4_),0x10);
    auVar65 = insertps(auVar65,*(undefined4 *)(*pauVar4 + auVar64._8_4_),0x20);
    local_138 = insertps(auVar65,*(undefined4 *)(*pauVar4 + auVar64._12_4_),0x30);
  }
  local_208 = param_13;
  fStack_204 = param_13;
  fStack_200 = param_13;
  fStack_1fc = param_13;
  local_1f8 = param_12;
  fStack_1f4 = param_12;
  fStack_1f0 = param_12;
  fStack_1ec = param_12;
  local_5f8 = auVar131;
  local_5c8 = param_3;
  local_5c0 = param_4;
  local_218 = auVar131;
  FUN_1409aeab0(&local_658,&local_688,&local_6b8,local_128,local_158,&local_1f8,&local_208,
                &local_1c8,&local_1d8,&local_1e8,&local_3a8,&local_3d8,&local_408,&local_438,
                &local_188,&local_1b8,local_218);
  auVar129._4_4_ = auVar208._4_4_ * 3;
  auVar129._0_4_ = auVar208._0_4_ * 3;
  auVar129._8_4_ = auVar208._8_4_ * 3;
  auVar129._12_4_ = auVar208._12_4_ * 3;
  auVar129 = auVar129 & auVar131;
  lVar53 = param_2 + (longlong)auVar129._0_4_ * 4;
  lVar26 = param_2 + (longlong)auVar129._4_4_ * 4;
  lVar38 = param_2 + (longlong)auVar129._8_4_ * 4;
  uVar30 = (ulonglong)uVar36;
  auVar64 = insertps(ZEXT416(*(uint *)(uVar55 + lVar53)),*(undefined4 *)(uVar30 + lVar26),0x10);
  auVar64 = insertps(auVar64,*(undefined4 *)(uVar51 + lVar38),0x20);
  auVar65 = insertps(ZEXT416(*(uint *)(uVar41 + lVar53)),*(undefined4 *)(uVar50 + lVar26),0x10);
  auVar65 = insertps(auVar65,*(undefined4 *)(uVar28 + lVar38),0x20);
  auVar177._4_4_ = auVar201._4_4_ * 3;
  auVar177._0_4_ = auVar201._0_4_ * 3;
  auVar177._8_4_ = auVar201._8_4_ * 3;
  auVar177._12_4_ = auVar201._12_4_ * 3;
  auVar177 = auVar177 & auVar131;
  lVar53 = param_2 + (longlong)auVar177._0_4_ * 4;
  auVar210._4_4_ = auVar190._4_4_ * 3;
  auVar210._0_4_ = auVar190._0_4_ * 3;
  auVar210._8_4_ = auVar190._8_4_ * 3;
  auVar210._12_4_ = auVar190._12_4_ * 3;
  auVar210 = auVar210 & auVar131;
  lVar26 = param_2 + (longlong)auVar210._0_4_ * 4;
  lVar38 = param_2 + (longlong)auVar177._4_4_ * 4;
  auVar63 = insertps(ZEXT416(*(uint *)(uVar55 + lVar53)),*(undefined4 *)(uVar30 + lVar38),0x10);
  auVar154 = insertps(ZEXT416(*(uint *)(uVar41 + lVar53)),*(undefined4 *)(uVar50 + lVar38),0x10);
  lVar53 = param_2 + (longlong)auVar210._4_4_ * 4;
  auVar192 = insertps(ZEXT416(*(uint *)(uVar55 + lVar26)),*(undefined4 *)(uVar30 + lVar53),0x10);
  auVar163 = insertps(ZEXT416(*(uint *)(uVar41 + lVar26)),*(undefined4 *)(uVar50 + lVar53),0x10);
  lVar53 = param_2 + (longlong)auVar177._8_4_ * 4;
  auVar66 = insertps(auVar63,*(undefined4 *)(uVar51 + lVar53),0x20);
  auVar154 = insertps(auVar154,*(undefined4 *)(uVar28 + lVar53),0x20);
  lVar53 = param_2 + (longlong)auVar210._8_4_ * 4;
  auVar155 = insertps(auVar192,*(undefined4 *)(uVar51 + lVar53),0x20);
  auVar163 = insertps(auVar163,*(undefined4 *)(uVar28 + lVar53),0x20);
  auVar63 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar129._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar129._4_4_ * 4),0x10);
  auVar63 = insertps(auVar63,*(undefined4 *)(param_2 + (longlong)auVar129._8_4_ * 4),0x20);
  auVar164 = insertps(auVar63,*(undefined4 *)(param_2 + (longlong)auVar129._12_4_ * 4),0x30);
  lVar53 = param_2 + (longlong)auVar129._12_4_ * 4;
  auVar64 = insertps(auVar64,*(undefined4 *)(uVar34 + lVar53),0x30);
  auVar65 = insertps(auVar65,*(undefined4 *)(uVar29 + lVar53),0x30);
  auVar63 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar177._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar177._4_4_ * 4),0x10);
  auVar63 = insertps(auVar63,*(undefined4 *)(param_2 + (longlong)auVar177._8_4_ * 4),0x20);
  auVar63 = insertps(auVar63,*(undefined4 *)(param_2 + (longlong)auVar177._12_4_ * 4),0x30);
  lVar53 = param_2 + (longlong)auVar177._12_4_ * 4;
  auVar66 = insertps(auVar66,*(undefined4 *)(uVar34 + lVar53),0x30);
  auVar154 = insertps(auVar154,*(undefined4 *)(uVar29 + lVar53),0x30);
  auVar192 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar210._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar210._4_4_ * 4),0x10);
  auVar192 = insertps(auVar192,*(undefined4 *)(param_2 + (longlong)auVar210._8_4_ * 4),0x20);
  auVar192 = insertps(auVar192,*(undefined4 *)(param_2 + (longlong)auVar210._12_4_ * 4),0x30);
  param_2 = param_2 + (longlong)auVar210._12_4_ * 4;
  auVar155 = insertps(auVar155,*(undefined4 *)(uVar34 + param_2),0x30);
  auVar163 = insertps(auVar163,*(undefined4 *)(uVar29 + param_2),0x30);
  fVar123 = local_658 - auVar164._0_4_;
  fVar125 = fStack_654 - auVar164._4_4_;
  fVar213 = fStack_650 - auVar164._8_4_;
  fVar143 = fStack_64c - auVar164._12_4_;
  fVar180 = local_648 - auVar64._0_4_;
  fVar146 = fStack_644 - auVar64._4_4_;
  fVar147 = fStack_640 - auVar64._8_4_;
  fVar148 = fStack_63c - auVar64._12_4_;
  fVar121 = local_638 - auVar65._0_4_;
  fVar60 = fStack_634 - auVar65._4_4_;
  fVar99 = fStack_630 - auVar65._8_4_;
  fVar97 = fStack_62c - auVar65._12_4_;
  fVar122 = local_688 - auVar63._0_4_;
  fVar141 = fStack_684 - auVar63._4_4_;
  fVar145 = fStack_680 - auVar63._8_4_;
  fVar149 = fStack_67c - auVar63._12_4_;
  fVar234 = local_678 - auVar66._0_4_;
  fVar61 = fStack_674 - auVar66._4_4_;
  fVar59 = fStack_670 - auVar66._8_4_;
  fVar106 = fStack_66c - auVar66._12_4_;
  fVar181 = local_668 - auVar154._0_4_;
  fVar183 = fStack_664 - auVar154._4_4_;
  fVar231 = fStack_660 - auVar154._8_4_;
  fVar150 = fStack_65c - auVar154._12_4_;
  fVar232 = local_6b8 - auVar192._0_4_;
  fVar94 = fStack_6b4 - auVar192._4_4_;
  fVar100 = fStack_6b0 - auVar192._8_4_;
  fVar104 = fStack_6ac - auVar192._12_4_;
  fVar124 = local_6a8 - auVar155._0_4_;
  fVar126 = fStack_6a4 - auVar155._4_4_;
  fVar142 = fStack_6a0 - auVar155._8_4_;
  fVar144 = fStack_69c - auVar155._12_4_;
  fVar162 = local_698 - auVar163._0_4_;
  fVar171 = fStack_694 - auVar163._4_4_;
  fVar120 = fStack_690 - auVar163._8_4_;
  fVar174 = fStack_68c - auVar163._12_4_;
  local_7e8._0_4_ = auVar108._0_4_;
  local_7e8._4_4_ = auVar108._4_4_;
  fStack_7e0 = auVar108._8_4_;
  fStack_7dc = auVar108._12_4_;
  fVar182 = auVar188._0_4_;
  fVar95 = auVar188._4_4_;
  fVar93 = auVar188._8_4_;
  fVar102 = auVar188._12_4_;
  fVar151 = auVar165._0_4_;
  fVar184 = fVar182 + (float)local_7e8._0_4_ + fVar151;
  fVar152 = auVar165._4_4_;
  fVar98 = fVar95 + (float)local_7e8._4_4_ + fVar152;
  fVar186 = auVar165._8_4_;
  fVar101 = fVar93 + fStack_7e0 + fVar186;
  fVar193 = auVar165._12_4_;
  fVar107 = fVar102 + fStack_7dc + fVar193;
  pauVar4 = (undefined1 (*) [16])(param_7 + uVar27 * 0xc);
  if ((bVar32 & 0xf) == 0) {
    auVar64 = *pauVar4;
    auVar65 = pauVar4[1];
    auVar63 = insertps(auVar65,auVar64,0x8c);
    local_758._4_4_ = auVar64._12_4_;
    local_758._0_4_ = auVar64._0_4_;
    fStack_750 = (float)auVar65._8_4_;
    fStack_74c = (float)*(undefined4 *)(pauVar4[2] + 4);
    local_618._4_4_ = auVar65._0_4_;
    local_618._0_4_ = auVar64._4_4_;
    fStack_610 = (float)auVar65._12_4_;
    fStack_60c = (float)*(undefined4 *)(pauVar4[2] + 8);
    local_628 = auVar63._0_8_;
    fStack_620 = (float)*(undefined4 *)pauVar4[2];
    fStack_61c = (float)*(undefined4 *)(pauVar4[2] + 0xc);
    auVar64 = *(undefined1 (*) [16])(param_6 + uVar27 * 0xc);
    auVar65 = *(undefined1 (*) [16])(param_6 + 0x10 + uVar27 * 0xc);
    puVar5 = (undefined4 *)(param_6 + 0x20 + uVar27 * 0xc);
    auVar132._0_4_ = auVar64._0_4_;
    auVar63 = insertps(auVar65,auVar64,0x8c);
    auVar132._4_4_ = auVar64._12_4_;
    auVar132._8_4_ = auVar65._8_4_;
    auVar132._12_4_ = puVar5[1];
    auVar178._4_4_ = auVar65._0_4_;
    auVar178._0_4_ = auVar64._4_4_;
    auVar178._8_4_ = auVar65._12_4_;
    auVar178._12_4_ = puVar5[2];
    auVar216._0_8_ = auVar63._0_8_;
    auVar216._8_4_ = *puVar5;
    auVar216._12_4_ = puVar5[3];
  }
  else {
    auVar130._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar131._0_4_;
    auVar130._4_4_ = _UNK_150b50da4 & auVar131._4_4_;
    auVar130._8_4_ = _UNK_150b50da8 & auVar131._8_4_;
    auVar130._12_4_ = _UNK_150b50dac & auVar131._12_4_;
    lVar26 = extractps(auVar130,1);
    lVar38 = extractps(auVar130,2);
    lVar43 = extractps(auVar130,3);
    auVar64 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar26),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(*pauVar4 + lVar38),0x20);
    _local_758 = insertps(auVar64,*(undefined4 *)(*pauVar4 + lVar43),0x30);
    auVar65 = ___xmm_000000280000001c0000001000000004 & auVar131;
    auVar64 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar65._0_4_)),
                       *(undefined4 *)(*pauVar4 + auVar65._4_4_),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(*pauVar4 + auVar65._8_4_),0x20);
    _local_618 = insertps(auVar64,*(undefined4 *)(*pauVar4 + auVar65._12_4_),0x30);
    auVar131 = ___xmm_0000002c000000200000001400000008 & auVar131;
    auVar64 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar131._0_4_)),
                       *(undefined4 *)(*pauVar4 + auVar131._4_4_),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(*pauVar4 + auVar131._8_4_),0x20);
    _local_628 = insertps(auVar64,*(undefined4 *)(*pauVar4 + auVar131._12_4_),0x30);
    lVar53 = param_6 + uVar27 * 0xc;
    auVar64 = insertps(ZEXT416(*(uint *)(param_6 + uVar27 * 0xc)),*(undefined4 *)(lVar26 + lVar53),
                       0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(lVar38 + lVar53),0x20);
    auVar132 = insertps(auVar64,*(undefined4 *)(lVar43 + lVar53),0x30);
    auVar64 = insertps(ZEXT416(*(uint *)((ulonglong)auVar65._0_4_ + lVar53)),
                       *(undefined4 *)((ulonglong)auVar65._4_4_ + lVar53),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)((ulonglong)auVar65._8_4_ + lVar53),0x20);
    auVar178 = insertps(auVar64,*(undefined4 *)((ulonglong)auVar65._12_4_ + lVar53),0x30);
    auVar64 = insertps(ZEXT416(*(uint *)((ulonglong)auVar131._0_4_ + lVar53)),
                       *(undefined4 *)((ulonglong)auVar131._4_4_ + lVar53),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)((ulonglong)auVar131._8_4_ + lVar53),0x20);
    auVar216 = insertps(auVar64,*(undefined4 *)((ulonglong)auVar131._12_4_ + lVar53),0x30);
  }
  fVar194 = *param_10;
  fVar187 = fVar194 * auVar132._0_4_;
  fVar215 = fVar194 * auVar132._4_4_;
  auVar79._4_4_ = fVar215;
  auVar79._0_4_ = fVar187;
  fVar217 = fVar194 * auVar132._8_4_;
  fVar194 = fVar194 * auVar132._12_4_;
  fStack_7bc = param_10[1];
  local_7c8._0_4_ = fStack_7bc * auVar178._0_4_;
  local_7c8._4_4_ = fStack_7bc * auVar178._4_4_;
  fStack_7c0 = fStack_7bc * auVar178._8_4_;
  fStack_7bc = fStack_7bc * auVar178._12_4_;
  fVar196 = param_10[2];
  fVar212 = fVar196 * auVar216._0_4_;
  fVar214 = fVar196 * auVar216._4_4_;
  fVar161 = fVar196 * auVar216._8_4_;
  fVar196 = fVar196 * auVar216._12_4_;
  auVar133._0_4_ = param_8 * fVar187 * param_8;
  auVar133._4_4_ = param_8 * fVar215 * param_8;
  auVar133._8_4_ = param_8 * fVar217 * param_8;
  auVar133._12_4_ = param_8 * fVar194 * param_8;
  auVar20._4_4_ = _UNK_15076b1f4;
  auVar20._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar20._8_4_ = _UNK_15076b1f8;
  auVar20._12_4_ = _UNK_15076b1fc;
  auVar65 = divps(auVar20,auVar133);
  fVar62 = local_3a8 + local_3d8;
  fVar203 = fStack_3a4 + fStack_3d4;
  fVar205 = fStack_3a0 + fStack_3d0;
  fVar105 = fStack_39c + fStack_3cc;
  fVar170 = local_398 + local_3c8;
  fVar172 = fStack_394 + fStack_3c4;
  fVar173 = fStack_390 + fStack_3c0;
  fVar185 = fStack_38c + fStack_3bc;
  fVar242 = local_388 + local_3b8;
  fVar245 = fStack_384 + fStack_3b4;
  fVar247 = fStack_380 + fStack_3b0;
  fVar218 = fStack_37c + fStack_3ac;
  param_11 = param_11 + param_11;
  auVar79._8_4_ = fVar217;
  auVar79._12_4_ = fVar194;
  auVar23._4_4_ = fVar98;
  auVar23._0_4_ = fVar184;
  auVar23._8_4_ = fVar101;
  auVar23._12_4_ = fVar107;
  auVar64 = divps(auVar79,auVar23);
  auVar64 = sqrtps(auVar64,auVar64);
  fVar195 = auVar65._0_4_;
  fVar197 = auVar65._4_4_;
  fVar198 = auVar65._8_4_;
  fVar206 = auVar65._12_4_;
  fVar199 = auVar64._0_4_ * param_11 * fVar195 * param_8;
  fVar204 = auVar64._4_4_ * param_11 * fVar197 * param_8;
  fVar207 = auVar64._8_4_ * param_11 * fVar198 * param_8;
  fVar211 = auVar64._12_4_ * param_11 * fVar206 * param_8;
  auVar21._4_4_ = _UNK_15076b1f4;
  auVar21._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar21._8_4_ = _UNK_15076b1f8;
  auVar21._12_4_ = _UNK_15076b1fc;
  auVar134._0_4_ =
       ((local_3b8 * local_3b8 + local_3c8 * local_3c8 + local_3d8 * local_3d8) * fVar151 +
       (local_388 * local_388 + local_398 * local_398 + local_3a8 * local_3a8) *
       (float)local_7e8._0_4_ + (fVar242 * fVar242 + fVar170 * fVar170 + fVar62 * fVar62) * fVar182)
       * (fVar199 + ___xmm_3f8000003f8000003f8000003f800000) + fVar195;
  auVar134._4_4_ =
       ((fStack_3b4 * fStack_3b4 + fStack_3c4 * fStack_3c4 + fStack_3d4 * fStack_3d4) * fVar152 +
       (fStack_384 * fStack_384 + fStack_394 * fStack_394 + fStack_3a4 * fStack_3a4) *
       (float)local_7e8._4_4_ + (fVar245 * fVar245 + fVar172 * fVar172 + fVar203 * fVar203) * fVar95
       ) * (fVar204 + _UNK_15076b1f4) + fVar197;
  auVar134._8_4_ =
       ((fStack_3b0 * fStack_3b0 + fStack_3c0 * fStack_3c0 + fStack_3d0 * fStack_3d0) * fVar186 +
       (fStack_380 * fStack_380 + fStack_390 * fStack_390 + fStack_3a0 * fStack_3a0) * fStack_7e0 +
       (fVar247 * fVar247 + fVar173 * fVar173 + fVar205 * fVar205) * fVar93) *
       (fVar207 + _UNK_15076b1f8) + fVar198;
  auVar134._12_4_ =
       ((fStack_3ac * fStack_3ac + fStack_3bc * fStack_3bc + fStack_3cc * fStack_3cc) * fVar193 +
       (fStack_37c * fStack_37c + fStack_38c * fStack_38c + fStack_39c * fStack_39c) * fStack_7dc +
       (fVar218 * fVar218 + fVar185 * fVar185 + fVar105 * fVar105) * fVar102) *
       (fVar211 + _UNK_15076b1fc) + fVar206;
  auVar80._0_4_ =
       (local_1c8 - fVar195 * (float)local_758._0_4_) +
       ((fVar162 * local_3b8 + fVar124 * local_3c8 + fVar232 * local_3d8 +
        fVar181 * local_388 + fVar234 * local_398 + fVar122 * local_3a8) -
       (fVar121 * fVar242 + fVar180 * fVar170 + fVar123 * fVar62)) * fVar199;
  auVar80._4_4_ =
       (fStack_1c4 - fVar197 * (float)local_758._4_4_) +
       ((fVar171 * fStack_3b4 + fVar126 * fStack_3c4 + fVar94 * fStack_3d4 +
        fVar183 * fStack_384 + fVar61 * fStack_394 + fVar141 * fStack_3a4) -
       (fVar60 * fVar245 + fVar146 * fVar172 + fVar125 * fVar203)) * fVar204;
  auVar80._8_4_ =
       (fStack_1c0 - fVar198 * fStack_750) +
       ((fVar120 * fStack_3b0 + fVar142 * fStack_3c0 + fVar100 * fStack_3d0 +
        fVar231 * fStack_380 + fVar59 * fStack_390 + fVar145 * fStack_3a0) -
       (fVar99 * fVar247 + fVar147 * fVar173 + fVar213 * fVar205)) * fVar207;
  auVar80._12_4_ =
       (fStack_1bc - fVar206 * fStack_74c) +
       ((fVar174 * fStack_3ac + fVar144 * fStack_3bc + fVar104 * fStack_3cc +
        fVar150 * fStack_37c + fVar106 * fStack_38c + fVar149 * fStack_39c) -
       (fVar97 * fVar218 + fVar148 * fVar185 + fVar143 * fVar105)) * fVar211;
  auVar64 = divps(auVar80,auVar134);
  fVar185 = (float)(-(uint)(param_9 <= fVar187) & auVar64._0_4_);
  fVar187 = (float)(-(uint)(param_9 <= fVar215) & auVar64._4_4_);
  fVar217 = (float)(-(uint)(param_9 <= fVar217) & auVar64._8_4_);
  fVar197 = (float)(-(uint)(param_9 <= fVar194) & auVar64._12_4_);
  auVar81._0_4_ = param_8 * (float)local_7c8._0_4_ * param_8;
  auVar81._4_4_ = param_8 * (float)local_7c8._4_4_ * param_8;
  auVar81._8_4_ = param_8 * fStack_7c0 * param_8;
  auVar81._12_4_ = param_8 * fStack_7bc * param_8;
  auVar65 = divps(auVar21,auVar81);
  fVar194 = local_408 + local_438;
  fVar62 = fStack_404 + fStack_434;
  fVar199 = fStack_400 + fStack_430;
  fVar203 = fStack_3fc + fStack_42c;
  fVar204 = local_3f8 + local_428;
  fVar205 = fStack_3f4 + fStack_424;
  fVar207 = fStack_3f0 + fStack_420;
  fVar105 = fStack_3ec + fStack_41c;
  fVar211 = local_3e8 + local_418;
  fVar170 = fStack_3e4 + fStack_414;
  fVar172 = fStack_3e0 + fStack_410;
  fVar173 = fStack_3dc + fStack_40c;
  auVar24._4_4_ = fVar98;
  auVar24._0_4_ = fVar184;
  auVar24._8_4_ = fVar101;
  auVar24._12_4_ = fVar107;
  auVar64 = divps(_local_7c8,auVar24);
  auVar64 = sqrtps(auVar64,auVar64);
  fVar215 = auVar65._0_4_;
  fVar195 = auVar65._4_4_;
  fVar198 = auVar65._8_4_;
  fVar206 = auVar65._12_4_;
  fVar184 = auVar64._0_4_ * param_11 * fVar215 * param_8;
  fVar98 = auVar64._4_4_ * param_11 * fVar195 * param_8;
  fVar101 = auVar64._8_4_ * param_11 * fVar198 * param_8;
  fVar107 = auVar64._12_4_ * param_11 * fVar206 * param_8;
  auVar22._4_4_ = _UNK_15076b1f4;
  auVar22._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar22._8_4_ = _UNK_15076b1f8;
  auVar22._12_4_ = _UNK_15076b1fc;
  auVar135._0_4_ =
       ((local_418 * local_418 + local_428 * local_428 + local_438 * local_438) * fVar151 +
       (local_3e8 * local_3e8 + local_3f8 * local_3f8 + local_408 * local_408) *
       (float)local_7e8._0_4_ +
       (fVar211 * fVar211 + fVar204 * fVar204 + fVar194 * fVar194) * fVar182) *
       (fVar184 + ___xmm_3f8000003f8000003f8000003f800000) + fVar215;
  auVar135._4_4_ =
       ((fStack_414 * fStack_414 + fStack_424 * fStack_424 + fStack_434 * fStack_434) * fVar152 +
       (fStack_3e4 * fStack_3e4 + fStack_3f4 * fStack_3f4 + fStack_404 * fStack_404) *
       (float)local_7e8._4_4_ + (fVar170 * fVar170 + fVar205 * fVar205 + fVar62 * fVar62) * fVar95)
       * (fVar98 + _UNK_15076b1f4) + fVar195;
  auVar135._8_4_ =
       ((fStack_410 * fStack_410 + fStack_420 * fStack_420 + fStack_430 * fStack_430) * fVar186 +
       (fStack_3e0 * fStack_3e0 + fStack_3f0 * fStack_3f0 + fStack_400 * fStack_400) * fStack_7e0 +
       (fVar172 * fVar172 + fVar207 * fVar207 + fVar199 * fVar199) * fVar93) *
       (fVar101 + _UNK_15076b1f8) + fVar198;
  auVar135._12_4_ =
       ((fStack_40c * fStack_40c + fStack_41c * fStack_41c + fStack_42c * fStack_42c) * fVar193 +
       (fStack_3dc * fStack_3dc + fStack_3ec * fStack_3ec + fStack_3fc * fStack_3fc) * fStack_7dc +
       (fVar173 * fVar173 + fVar105 * fVar105 + fVar203 * fVar203) * fVar102) *
       (fVar107 + _UNK_15076b1fc) + fVar206;
  auVar82._0_4_ =
       (local_1d8 - fVar215 * (float)local_618._0_4_) +
       ((fVar162 * local_418 + fVar124 * local_428 + fVar232 * local_438 +
        fVar181 * local_3e8 + fVar234 * local_3f8 + fVar122 * local_408) -
       (fVar121 * fVar211 + fVar180 * fVar204 + fVar123 * fVar194)) * fVar184;
  auVar82._4_4_ =
       (fStack_1d4 - fVar195 * (float)local_618._4_4_) +
       ((fVar171 * fStack_414 + fVar126 * fStack_424 + fVar94 * fStack_434 +
        fVar183 * fStack_3e4 + fVar61 * fStack_3f4 + fVar141 * fStack_404) -
       (fVar60 * fVar170 + fVar146 * fVar205 + fVar125 * fVar62)) * fVar98;
  auVar82._8_4_ =
       (fStack_1d0 - fVar198 * fStack_610) +
       ((fVar120 * fStack_410 + fVar142 * fStack_420 + fVar100 * fStack_430 +
        fVar231 * fStack_3e0 + fVar59 * fStack_3f0 + fVar145 * fStack_400) -
       (fVar99 * fVar172 + fVar147 * fVar207 + fVar213 * fVar199)) * fVar101;
  auVar82._12_4_ =
       (fStack_1cc - fVar206 * fStack_60c) +
       ((fVar174 * fStack_40c + fVar144 * fStack_41c + fVar104 * fStack_42c +
        fVar150 * fStack_3dc + fVar106 * fStack_3ec + fVar149 * fStack_3fc) -
       (fVar97 * fVar173 + fVar148 * fVar105 + fVar143 * fVar203)) * fVar107;
  auVar64 = divps(auVar82,auVar135);
  fVar173 = (float)(-(uint)(param_9 <= (float)local_7c8._0_4_) & auVar64._0_4_);
  fVar215 = (float)(-(uint)(param_9 <= (float)local_7c8._4_4_) & auVar64._4_4_);
  fVar195 = (float)(-(uint)(param_9 <= fStack_7c0) & auVar64._8_4_);
  fVar198 = (float)(-(uint)(param_9 <= fStack_7bc) & auVar64._12_4_);
  auVar25._4_4_ = fVar214;
  auVar25._0_4_ = fVar212;
  auVar25._8_4_ = fVar161;
  auVar25._12_4_ = fVar196;
  auVar64 = divps(auVar25,auVar24);
  auVar64 = sqrtps(auVar135,auVar64);
  auVar83._0_4_ = param_8 * fVar212 * param_8;
  auVar83._4_4_ = param_8 * fVar214 * param_8;
  auVar83._8_4_ = param_8 * fVar161 * param_8;
  auVar83._12_4_ = param_8 * fVar196 * param_8;
  auVar65 = divps(auVar22,auVar83);
  fVar206 = auVar65._0_4_;
  fVar242 = auVar65._4_4_;
  fVar245 = auVar65._8_4_;
  fVar247 = auVar65._12_4_;
  fVar194 = auVar64._0_4_ * param_11 * fVar206 * param_8;
  fVar62 = auVar64._4_4_ * param_11 * fVar242 * param_8;
  fVar199 = auVar64._8_4_ * param_11 * fVar245 * param_8;
  param_8 = auVar64._12_4_ * param_11 * fVar247 * param_8;
  fVar203 = local_188 + local_1b8;
  fVar204 = fStack_184 + fStack_1b4;
  fVar205 = fStack_180 + fStack_1b0;
  fVar207 = fStack_17c + fStack_1ac;
  fVar105 = local_178 + local_1a8;
  fVar211 = fStack_174 + fStack_1a4;
  fVar170 = fStack_170 + fStack_1a0;
  fVar172 = fStack_16c + fStack_19c;
  fVar184 = local_168 + local_198;
  fVar98 = fStack_164 + fStack_194;
  fVar101 = fStack_160 + fStack_190;
  fVar107 = fStack_15c + fStack_18c;
  auVar84._0_4_ =
       ((local_198 * local_198 + local_1a8 * local_1a8 + local_1b8 * local_1b8) * fVar151 +
       (local_168 * local_168 + local_178 * local_178 + local_188 * local_188) *
       (float)local_7e8._0_4_ +
       (fVar184 * fVar184 + fVar105 * fVar105 + fVar203 * fVar203) * fVar182) *
       (fVar194 + ___xmm_3f8000003f8000003f8000003f800000) + fVar206;
  auVar84._4_4_ =
       ((fStack_194 * fStack_194 + fStack_1a4 * fStack_1a4 + fStack_1b4 * fStack_1b4) * fVar152 +
       (fStack_164 * fStack_164 + fStack_174 * fStack_174 + fStack_184 * fStack_184) *
       (float)local_7e8._4_4_ + (fVar98 * fVar98 + fVar211 * fVar211 + fVar204 * fVar204) * fVar95)
       * (fVar62 + _UNK_15076b1f4) + fVar242;
  auVar84._8_4_ =
       ((fStack_190 * fStack_190 + fStack_1a0 * fStack_1a0 + fStack_1b0 * fStack_1b0) * fVar186 +
       (fStack_160 * fStack_160 + fStack_170 * fStack_170 + fStack_180 * fStack_180) * fStack_7e0 +
       (fVar101 * fVar101 + fVar170 * fVar170 + fVar205 * fVar205) * fVar93) *
       (fVar199 + _UNK_15076b1f8) + fVar245;
  auVar84._12_4_ =
       ((fStack_18c * fStack_18c + fStack_19c * fStack_19c + fStack_1ac * fStack_1ac) * fVar193 +
       (fStack_15c * fStack_15c + fStack_16c * fStack_16c + fStack_17c * fStack_17c) * fStack_7dc +
       (fVar107 * fVar107 + fVar172 * fVar172 + fVar207 * fVar207) * fVar102) *
       (param_8 + _UNK_15076b1fc) + fVar247;
  auVar136._0_4_ =
       (local_1e8 - fVar206 * (float)local_628._0_4_) +
       ((fVar162 * local_198 + fVar124 * local_1a8 + fVar232 * local_1b8 +
        fVar181 * local_168 + fVar234 * local_178 + fVar122 * local_188) -
       (fVar121 * fVar184 + fVar180 * fVar105 + fVar123 * fVar203)) * fVar194;
  auVar136._4_4_ =
       (fStack_1e4 - fVar242 * (float)local_628._4_4_) +
       ((fVar171 * fStack_194 + fVar126 * fStack_1a4 + fVar94 * fStack_1b4 +
        fVar183 * fStack_164 + fVar61 * fStack_174 + fVar141 * fStack_184) -
       (fVar60 * fVar98 + fVar146 * fVar211 + fVar125 * fVar204)) * fVar62;
  auVar136._8_4_ =
       (fStack_1e0 - fVar245 * fStack_620) +
       ((fVar120 * fStack_190 + fVar142 * fStack_1a0 + fVar100 * fStack_1b0 +
        fVar231 * fStack_160 + fVar59 * fStack_170 + fVar145 * fStack_180) -
       (fVar99 * fVar101 + fVar147 * fVar170 + fVar213 * fVar205)) * fVar199;
  auVar136._12_4_ =
       (fStack_1dc - fVar247 * fStack_61c) +
       ((fVar174 * fStack_18c + fVar144 * fStack_19c + fVar104 * fStack_1ac +
        fVar150 * fStack_15c + fVar106 * fStack_16c + fVar149 * fStack_17c) -
       (fVar97 * fVar107 + fVar148 * fVar172 + fVar143 * fVar207)) * param_8;
  auVar64 = divps(auVar136,auVar84);
  fVar121 = (float)(-(uint)(param_9 <= fVar212) & auVar64._0_4_);
  fVar234 = (float)(-(uint)(param_9 <= fVar214) & auVar64._4_4_);
  fVar232 = (float)(-(uint)(param_9 <= fVar161) & auVar64._8_4_);
  fVar184 = (float)(-(uint)(param_9 <= fVar196) & auVar64._12_4_);
  auVar230._0_8_ = CONCAT44((float)local_758._4_4_ + fVar187,(float)local_758._0_4_ + fVar185);
  auVar230._8_4_ = fStack_750 + fVar217;
  auVar230._12_4_ = fStack_74c + fVar197;
  auVar168._4_4_ = (float)local_618._4_4_ + fVar215;
  auVar168._0_4_ = (float)local_618._0_4_ + fVar173;
  auVar157._0_4_ = (float)local_628._0_4_ + fVar121;
  auVar157._4_4_ = (float)local_628._4_4_ + fVar234;
  auVar157._8_4_ = fStack_620 + fVar232;
  auVar157._12_4_ = fStack_61c + fVar184;
  auVar168._8_4_ = fStack_610 + fVar195;
  auVar168._12_4_ = fStack_60c + fVar198;
  if ((bVar32 & 0xf) == 0) {
    auVar85._8_4_ = auVar230._8_4_;
    auVar85._0_8_ = auVar230._0_8_;
    auVar85._12_4_ = auVar230._12_4_;
    auVar64 = insertps(auVar85,auVar168,0x30);
    auVar137._4_4_ = fStack_610 + fVar195;
    auVar137._0_4_ = (float)local_618._4_4_ + fVar215;
    auVar137._8_4_ = auVar157._0_4_;
    auVar137._12_4_ = auVar157._4_4_;
    auVar64 = insertps(auVar64,auVar157,0x20);
    *(int *)*pauVar4 = auVar64._0_4_;
    *(int *)(*pauVar4 + 4) = auVar64._12_4_;
    *(int *)(*pauVar4 + 8) = auVar64._8_4_;
    *(int *)(*pauVar4 + 0xc) = auVar64._4_4_;
    auVar64 = blendps(auVar137,auVar230,4);
    *(int *)pauVar4[1] = auVar64._0_4_;
    *(int *)(pauVar4[1] + 4) = auVar64._12_4_;
    *(int *)(pauVar4[1] + 8) = auVar64._8_4_;
    *(int *)(pauVar4[1] + 0xc) = auVar64._4_4_;
    *(float *)pauVar4[2] = auVar157._8_4_;
    *(float *)(pauVar4[2] + 4) = auVar230._12_4_;
    *(float *)(pauVar4[2] + 8) = fStack_60c + fVar198;
    *(float *)(pauVar4[2] + 0xc) = auVar157._12_4_;
    pauVar31 = pauVar4;
  }
  else {
    if ((bVar48 & 1) != 0) {
      *(float *)*pauVar4 = (float)local_758._0_4_ + fVar185;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar230,1);
      *(undefined8 *)(*pauVar4 + 0xc) = uVar19;
    }
    if ((bVar48 & 4) != 0) {
      uVar19 = extractps(auVar230,2);
      *(undefined8 *)(pauVar4[1] + 8) = uVar19;
    }
    if ((char)bVar48 < '\0') {
      uVar19 = extractps(auVar230,3);
      *(undefined8 *)(pauVar4[2] + 4) = uVar19;
    }
    if ((bVar48 & 1) != 0) {
      *(float *)(*pauVar4 + 4) = (float)local_618._0_4_ + fVar173;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar168,1);
      *(undefined8 *)pauVar4[1] = uVar19;
    }
    if ((bVar48 & 4) != 0) {
      uVar19 = extractps(auVar168,2);
      *(undefined8 *)(pauVar4[1] + 0xc) = uVar19;
    }
    if ((char)bVar48 < '\0') {
      uVar19 = extractps(auVar168,3);
      *(undefined8 *)(pauVar4[2] + 8) = uVar19;
    }
    if ((bVar48 & 1) != 0) {
      *(float *)(*pauVar4 + 8) = auVar157._0_4_;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar157,1);
      *(undefined8 *)(pauVar4[1] + 4) = uVar19;
    }
    if ((bVar48 & 4) != 0) {
      uVar19 = extractps(auVar157,2);
      *(undefined8 *)pauVar4[2] = uVar19;
    }
    pauVar31 = (undefined1 (*) [16])(ulonglong)bVar48;
    if ((char)bVar48 < '\0') {
      uVar19 = extractps(auVar157,3);
      *(undefined8 *)(pauVar4[2] + 0xc) = uVar19;
    }
  }
  fVar122 = local_188 * fVar121 + local_408 * fVar173 + local_3a8 * fVar185;
  fVar141 = fStack_184 * fVar234 + fStack_404 * fVar215 + fStack_3a4 * fVar187;
  fVar145 = fStack_180 * fVar232 + fStack_400 * fVar195 + fStack_3a0 * fVar217;
  fVar149 = fStack_17c * fVar184 + fStack_3fc * fVar198 + fStack_39c * fVar197;
  fVar162 = local_178 * fVar121 + local_3f8 * fVar173 + local_398 * fVar185;
  fVar171 = fStack_174 * fVar234 + fStack_3f4 * fVar215 + fStack_394 * fVar187;
  fVar120 = fStack_170 * fVar232 + fStack_3f0 * fVar195 + fStack_390 * fVar217;
  fVar174 = fStack_16c * fVar184 + fStack_3ec * fVar198 + fStack_38c * fVar197;
  fVar99 = local_168 * fVar121 + local_3e8 * fVar173 + local_388 * fVar185;
  fVar59 = fStack_164 * fVar234 + fStack_3e4 * fVar215 + fStack_384 * fVar187;
  fVar100 = fStack_160 * fVar232 + fStack_3e0 * fVar195 + fStack_380 * fVar217;
  fVar101 = fStack_15c * fVar184 + fStack_3dc * fVar198 + fStack_37c * fVar197;
  fVar60 = local_1b8 * fVar121 + local_438 * fVar173 + local_3d8 * fVar185;
  fVar61 = fStack_1b4 * fVar234 + fStack_434 * fVar215 + fStack_3d4 * fVar187;
  fVar94 = fStack_1b0 * fVar232 + fStack_430 * fVar195 + fStack_3d0 * fVar217;
  fVar98 = fStack_1ac * fVar184 + fStack_42c * fVar198 + fStack_3cc * fVar197;
  fVar97 = local_1a8 * fVar121 + local_428 * fVar173 + local_3c8 * fVar185;
  fVar106 = fStack_1a4 * fVar234 + fStack_424 * fVar215 + fStack_3c4 * fVar187;
  fVar104 = fStack_1a0 * fVar232 + fStack_420 * fVar195 + fStack_3c0 * fVar217;
  fVar107 = fStack_19c * fVar184 + fStack_41c * fVar198 + fStack_3bc * fVar197;
  fVar121 = local_198 * fVar121 + fVar173 * local_418 + fVar185 * local_3b8;
  fVar234 = fStack_194 * fVar234 + fVar215 * fStack_414 + fVar187 * fStack_3b4;
  fVar232 = fStack_190 * fVar232 + fVar195 * fStack_410 + fVar217 * fStack_3b0;
  fVar184 = fStack_18c * fVar184 + fVar198 * fStack_40c + fVar197 * fStack_3ac;
  auVar138._0_4_ = -(uint)(0.0 < fVar182) & local_5f8._0_4_;
  auVar138._4_4_ = -(uint)(0.0 < fVar95) & local_5f8._4_4_;
  auVar138._8_4_ = -(uint)(0.0 < fVar93) & local_5f8._8_4_;
  auVar138._12_4_ = -(uint)(0.0 < fVar102) & local_5f8._12_4_;
  iVar49 = movmskps((int)pauVar31,auVar138);
  iVar37 = 0;
  if (iVar49 != 0) {
    bVar48 = (char)((char)iVar49 << 4) >> 4;
    auVar158._0_4_ = (fVar122 + fVar60) * fVar182 + local_658;
    auVar158._4_4_ = (fVar141 + fVar61) * fVar95 + fStack_654;
    auVar158._8_4_ = (fVar145 + fVar94) * fVar93 + fStack_650;
    auVar158._12_4_ = (fVar149 + fVar98) * fVar102 + fStack_64c;
    if ((bVar48 & 1) != 0) {
      *(float *)(param_1 + (int)local_578._0_4_) = auVar158._0_4_;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar158,1);
      *(undefined8 *)(param_1 + (int)local_578._4_4_) = uVar19;
    }
    if ((bVar48 & 4) == 0) {
      if (-1 < (char)bVar48) goto LAB_1409b5bbd;
LAB_1409b5ecc:
      uVar19 = extractps(auVar158,3);
      *(undefined8 *)(param_1 + (int)local_578._12_4_) = uVar19;
      auVar139._0_4_ = (fVar162 + fVar97) * fVar182 + local_648;
      auVar139._4_4_ = (fVar171 + fVar106) * fVar95 + fStack_644;
      auVar139._8_4_ = (fVar120 + fVar104) * fVar93 + fStack_640;
      auVar139._12_4_ = (fVar174 + fVar107) * fVar102 + fStack_63c;
      if ((bVar48 & 1) != 0) goto LAB_1409b5eef;
LAB_1409b5bce:
      if ((bVar48 & 2) == 0) goto LAB_1409b5bd7;
LAB_1409b5f02:
      uVar19 = extractps(auVar139,1);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._4_4_) = uVar19;
      if ((bVar48 & 4) != 0) goto LAB_1409b5f1f;
LAB_1409b5be8:
      fVar123 = (fVar99 + fVar121) * fVar182;
      fVar95 = (fVar59 + fVar234) * fVar95;
      fVar93 = (fVar100 + fVar232) * fVar93;
      fVar102 = (fVar101 + fVar184) * fVar102;
      if (-1 < (char)bVar48) goto LAB_1409b5bf8;
LAB_1409b5f3b:
      uVar19 = extractps(auVar139,3);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._12_4_) = uVar19;
      auVar159._0_4_ = fVar123 + local_638;
      auVar159._4_4_ = fVar95 + fStack_634;
      auVar159._8_4_ = fVar93 + fStack_630;
      auVar159._12_4_ = fVar102 + fStack_62c;
    }
    else {
      uVar19 = extractps(auVar158,2);
      *(undefined8 *)(param_1 + (int)local_578._8_4_) = uVar19;
      if ((char)bVar48 < '\0') goto LAB_1409b5ecc;
LAB_1409b5bbd:
      auVar139._0_4_ = (fVar162 + fVar97) * fVar182 + local_648;
      auVar139._4_4_ = (fVar171 + fVar106) * fVar95 + fStack_644;
      auVar139._8_4_ = (fVar120 + fVar104) * fVar93 + fStack_640;
      auVar139._12_4_ = (fVar174 + fVar107) * fVar102 + fStack_63c;
      if ((bVar48 & 1) == 0) goto LAB_1409b5bce;
LAB_1409b5eef:
      *(int *)(param_1 + 4 + (longlong)(int)local_578._0_4_) = auVar139._0_4_;
      if ((bVar48 & 2) != 0) goto LAB_1409b5f02;
LAB_1409b5bd7:
      if ((bVar48 & 4) == 0) goto LAB_1409b5be8;
LAB_1409b5f1f:
      uVar19 = extractps(auVar139,2);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._8_4_) = uVar19;
      fVar123 = (fVar99 + fVar121) * fVar182;
      fVar95 = (fVar59 + fVar234) * fVar95;
      fVar93 = (fVar100 + fVar232) * fVar93;
      fVar102 = (fVar101 + fVar184) * fVar102;
      if ((char)bVar48 < '\0') goto LAB_1409b5f3b;
LAB_1409b5bf8:
      auVar159._0_4_ = fVar123 + local_638;
      auVar159._4_4_ = fVar95 + fStack_634;
      auVar159._8_4_ = fVar93 + fStack_630;
      auVar159._12_4_ = fVar102 + fStack_62c;
    }
    if ((bVar48 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)(int)local_578._0_4_) = auVar159._0_4_;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar159,1);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._4_4_) = uVar19;
    }
    if ((bVar48 & 4) != 0) {
      uVar19 = extractps(auVar159,2);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._8_4_) = uVar19;
    }
    if ((char)bVar48 < '\0') {
      uVar19 = extractps(auVar159,3);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._12_4_) = uVar19;
    }
    if ((bVar48 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)(int)local_578._0_4_) = fVar182;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar188,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._4_4_) = uVar19;
    }
    if ((bVar48 & 4) != 0) {
      uVar19 = extractps(auVar188,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._8_4_) = uVar19;
    }
    iVar37 = CONCAT31((int3)((uint)iVar49 >> 8),bVar48);
    if ((char)bVar48 < '\0') {
      uVar19 = extractps(auVar188,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._12_4_) = uVar19;
      iVar37 = local_578._12_4_;
    }
  }
  auVar86._0_4_ = -(uint)(0.0 < (float)local_7e8._0_4_) & local_5f8._0_4_;
  auVar86._4_4_ = -(uint)(0.0 < (float)local_7e8._4_4_) & local_5f8._4_4_;
  auVar86._8_4_ = -(uint)(0.0 < fStack_7e0) & local_5f8._8_4_;
  auVar86._12_4_ = -(uint)(0.0 < fStack_7dc) & local_5f8._12_4_;
  iVar49 = movmskps(iVar37,auVar86);
  iVar37 = 0;
  if (iVar49 == 0) goto LAB_1409b5d52;
  bVar48 = (char)((char)iVar49 << 4) >> 4;
  auVar87._0_4_ = local_688 - fVar122 * (float)local_7e8._0_4_;
  auVar87._4_4_ = fStack_684 - fVar141 * (float)local_7e8._4_4_;
  auVar87._8_4_ = fStack_680 - fVar145 * fStack_7e0;
  auVar87._12_4_ = fStack_67c - fVar149 * fStack_7dc;
  if ((bVar48 & 1) == 0) {
    if ((bVar48 & 2) == 0) goto LAB_1409b5cb1;
LAB_1409b603e:
    uVar19 = extractps(auVar87,1);
    *(undefined8 *)(param_1 + auVar237._4_4_) = uVar19;
    if ((bVar48 & 4) != 0) goto LAB_1409b6059;
LAB_1409b5cc1:
    if (-1 < (char)bVar48) goto LAB_1409b5cd5;
LAB_1409b6078:
    uVar19 = extractps(auVar87,3);
    *(undefined8 *)(param_1 + auVar237._12_4_) = uVar19;
    auVar140._0_4_ = local_678 - fVar162 * (float)local_7e8._0_4_;
    auVar140._4_4_ = fStack_674 - fVar171 * (float)local_7e8._4_4_;
    auVar140._8_4_ = fStack_670 - fVar120 * fStack_7e0;
    auVar140._12_4_ = fStack_66c - fVar174 * fStack_7dc;
    if ((bVar48 & 1) != 0) goto LAB_1409b6097;
LAB_1409b5ce2:
    if ((bVar48 & 2) == 0) goto LAB_1409b5ceb;
LAB_1409b60aa:
    uVar19 = extractps(auVar140,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar237._4_4_) = uVar19;
    if ((bVar48 & 4) != 0) goto LAB_1409b60bf;
LAB_1409b5cf4:
    if (-1 < (char)bVar48) goto LAB_1409b5d08;
LAB_1409b60df:
    uVar19 = extractps(auVar140,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar237._12_4_) = uVar19;
    auVar88._0_4_ = local_668 - fVar99 * (float)local_7e8._0_4_;
    auVar88._4_4_ = fStack_664 - fVar59 * (float)local_7e8._4_4_;
    auVar88._8_4_ = fStack_660 - fVar100 * fStack_7e0;
    auVar88._12_4_ = fStack_65c - fVar101 * fStack_7dc;
  }
  else {
    *(float *)(param_1 + auVar237._0_4_) = auVar87._0_4_;
    if ((bVar48 & 2) != 0) goto LAB_1409b603e;
LAB_1409b5cb1:
    if ((bVar48 & 4) == 0) goto LAB_1409b5cc1;
LAB_1409b6059:
    uVar19 = extractps(auVar87,2);
    *(undefined8 *)(param_1 + auVar237._8_4_) = uVar19;
    if ((char)bVar48 < '\0') goto LAB_1409b6078;
LAB_1409b5cd5:
    auVar140._0_4_ = local_678 - fVar162 * (float)local_7e8._0_4_;
    auVar140._4_4_ = fStack_674 - fVar171 * (float)local_7e8._4_4_;
    auVar140._8_4_ = fStack_670 - fVar120 * fStack_7e0;
    auVar140._12_4_ = fStack_66c - fVar174 * fStack_7dc;
    if ((bVar48 & 1) == 0) goto LAB_1409b5ce2;
LAB_1409b6097:
    *(int *)(param_1 + 4 + (longlong)auVar237._0_4_) = auVar140._0_4_;
    if ((bVar48 & 2) != 0) goto LAB_1409b60aa;
LAB_1409b5ceb:
    if ((bVar48 & 4) == 0) goto LAB_1409b5cf4;
LAB_1409b60bf:
    uVar19 = extractps(auVar140,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar237._8_4_) = uVar19;
    if ((char)bVar48 < '\0') goto LAB_1409b60df;
LAB_1409b5d08:
    auVar88._0_4_ = local_668 - fVar99 * (float)local_7e8._0_4_;
    auVar88._4_4_ = fStack_664 - fVar59 * (float)local_7e8._4_4_;
    auVar88._8_4_ = fStack_660 - fVar100 * fStack_7e0;
    auVar88._12_4_ = fStack_65c - fVar101 * fStack_7dc;
  }
  if ((bVar48 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar237._0_4_) = auVar88._0_4_;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar88,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar237._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar88,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar237._8_4_) = uVar19;
  }
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar88,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar237._12_4_) = uVar19;
  }
  if ((bVar48 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc + (longlong)auVar237._0_4_) = local_7e8._0_4_;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar108,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar237._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar108,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar237._8_4_) = uVar19;
  }
  iVar37 = CONCAT31((int3)((uint)iVar49 >> 8),bVar48);
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar108,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar237._12_4_) = uVar19;
    iVar37 = auVar237._12_4_;
  }
LAB_1409b5d52:
  auVar89._0_4_ = -(uint)(0.0 < fVar151) & local_5f8._0_4_;
  auVar89._4_4_ = -(uint)(0.0 < fVar152) & local_5f8._4_4_;
  auVar89._8_4_ = -(uint)(0.0 < fVar186) & local_5f8._8_4_;
  auVar89._12_4_ = -(uint)(0.0 < fVar193) & local_5f8._12_4_;
  iVar37 = movmskps(iVar37,auVar89);
  if (iVar37 == 0) {
    return;
  }
  bVar48 = (char)((char)iVar37 << 4) >> 4;
  auVar90._0_4_ = local_6b8 - fVar60 * fVar151;
  auVar90._4_4_ = fStack_6b4 - fVar61 * fVar152;
  auVar90._8_4_ = fStack_6b0 - fVar94 * fVar186;
  auVar90._12_4_ = fStack_6ac - fVar98 * fVar193;
  if ((bVar48 & 1) != 0) {
    *(float *)(param_1 + (int)local_568._0_4_) = auVar90._0_4_;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar90,1);
    *(undefined8 *)(param_1 + (int)local_568._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar90,2);
    *(undefined8 *)(param_1 + (int)local_568._8_4_) = uVar19;
  }
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar90,3);
    *(undefined8 *)(param_1 + (int)local_568._12_4_) = uVar19;
    auVar118._0_4_ = local_6a8 - fVar97 * fVar151;
    auVar118._4_4_ = fStack_6a4 - fVar106 * fVar152;
    auVar118._8_4_ = fStack_6a0 - fVar104 * fVar186;
    auVar118._12_4_ = fStack_69c - fVar107 * fVar193;
  }
  else {
    auVar118._0_4_ = local_6a8 - fVar97 * fVar151;
    auVar118._4_4_ = fStack_6a4 - fVar106 * fVar152;
    auVar118._8_4_ = fStack_6a0 - fVar104 * fVar186;
    auVar118._12_4_ = fStack_69c - fVar107 * fVar193;
  }
  if ((bVar48 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_568._0_4_) = auVar118._0_4_;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar118,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_568._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar118,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_568._8_4_) = uVar19;
  }
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar118,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_568._12_4_) = uVar19;
    auVar91._0_4_ = local_698 - fVar121 * fVar151;
    auVar91._4_4_ = fStack_694 - fVar234 * fVar152;
    auVar91._8_4_ = fStack_690 - fVar232 * fVar186;
    auVar91._12_4_ = fStack_68c - fVar184 * fVar193;
  }
  else {
    auVar91._0_4_ = local_698 - fVar121 * fVar151;
    auVar91._4_4_ = fStack_694 - fVar234 * fVar152;
    auVar91._8_4_ = fStack_690 - fVar232 * fVar186;
    auVar91._12_4_ = fStack_68c - fVar184 * fVar193;
  }
  if ((bVar48 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_568._0_4_) = auVar91._0_4_;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar91,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_568._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar91,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_568._8_4_) = uVar19;
  }
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar91,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_568._12_4_) = uVar19;
  }
  if ((bVar48 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_568._0_4_) = fVar151;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar165,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_568._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar165,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_568._8_4_) = uVar19;
  }
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar165,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_568._12_4_) = uVar19;
  }
  return;
}

// ApplyXPBDStretchBiasConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_CunfCunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4 @ 1409b6380

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDStretchBiasConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_CunfCunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,float param_8,byte param_9,longlong param_10,
               longlong param_11,byte param_12,longlong param_13,longlong param_14,byte param_15,
               longlong param_16,longlong param_17,byte param_18,longlong param_19,longlong param_20
               ,byte param_21,longlong param_22,longlong param_23,uint param_24)

{
  int *piVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  byte bVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  float *pfVar33;
  longlong lVar34;
  byte bVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  byte bVar41;
  int iVar42;
  longlong lVar43;
  float fVar44;
  float fVar77;
  float fVar79;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  int iVar97;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar98;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined4 uVar99;
  float fVar100;
  float fVar115;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar130;
  float fVar132;
  undefined1 auVar119 [16];
  float fVar131;
  float fVar133;
  float fVar134;
  float fVar135;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar136;
  float fVar143;
  float fVar145;
  undefined1 auVar138 [16];
  int iVar147;
  float fVar148;
  undefined1 auVar139 [16];
  float fVar137;
  float fVar144;
  float fVar146;
  float fVar149;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  float fVar150;
  int iVar155;
  float fVar157;
  int iVar158;
  undefined1 auVar151 [16];
  float fVar156;
  float fVar159;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined4 uVar160;
  float fVar161;
  float fVar162;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar171;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  float fVar172;
  float fVar173;
  float fVar182;
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar187;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  float fVar188;
  float fVar189;
  float fVar193;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  float fVar204;
  float fVar206;
  float fVar207;
  float fVar208;
  undefined1 auVar205 [16];
  undefined1 auVar209 [16];
  float fVar210;
  float fVar214;
  float fVar215;
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  float fVar216;
  undefined1 auVar213 [16];
  float fVar217;
  float fVar218;
  float fVar219;
  float fVar224;
  float fVar225;
  float fVar226;
  float fVar227;
  float fVar228;
  float fVar229;
  float fVar230;
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  float fVar231;
  float fVar233;
  float fVar234;
  undefined1 auVar232 [16];
  float fVar235;
  float fVar236;
  float fVar239;
  float fVar241;
  undefined1 auVar237 [16];
  float fVar240;
  float fVar242;
  float fVar243;
  float fVar244;
  undefined1 auVar238 [16];
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  float local_758;
  float fStack_754;
  float fStack_750;
  float fStack_74c;
  undefined1 local_748 [8];
  float fStack_740;
  float fStack_73c;
  float local_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  undefined8 local_718;
  float fStack_710;
  float fStack_70c;
  ulonglong local_6f8;
  undefined1 local_6b8 [8];
  float fStack_6b0;
  float fStack_6ac;
  undefined1 local_6a8 [8];
  float fStack_6a0;
  float fStack_69c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  undefined1 local_598 [8];
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  undefined1 local_528 [16];
  longlong local_518;
  float *local_508;
  ulonglong local_4f8;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined1 local_2f8 [16];
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  ulonglong local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 extraout_XMM0_Qb;
  
  uVar27 = param_24 + 3;
  if (-1 < (int)param_24) {
    uVar27 = param_24;
  }
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar28 = 0;
    if ((int)param_24 < 1) {
      return;
    }
  }
  else {
    local_448 = param_7;
    fStack_444 = param_7;
    fStack_440 = param_7;
    fStack_43c = param_7;
    local_5a8 = param_8;
    fStack_5a4 = param_8;
    fStack_5a0 = param_8;
    fStack_59c = param_8;
    lVar39 = 0x20;
    uVar28 = 0;
    pfVar33 = (float *)(param_4 + 0x30);
    do {
      local_508 = pfVar33;
      local_4f8 = uVar28;
      local_2a8 = 0;
      if ((param_9 & 1) != 0) {
        local_2a8 = (ulonglong)*(uint *)(param_10 + local_4f8);
      }
      uStack_2a0 = 0;
      uVar98 = 0;
      uVar99 = 0;
      if ((param_12 & 1) != 0) {
        uVar99 = *(undefined4 *)(param_13 + local_4f8);
      }
      if ((param_15 & 1) != 0) {
        uVar98 = *(undefined4 *)(param_16 + local_4f8);
      }
      auVar101 = (undefined1  [16])0x0;
      auVar119 = (undefined1  [16])0x0;
      if ((param_18 & 1) != 0) {
        auVar119 = ZEXT416(*(uint *)(param_19 + local_4f8));
      }
      auVar237 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar39);
      auVar140 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar39);
      piVar1 = (int *)(param_2 + lVar39);
      uVar160 = auVar140._0_4_;
      auVar45._4_4_ = uVar160;
      auVar45._0_4_ = uVar160;
      auVar45._8_4_ = uVar160;
      auVar45._12_4_ = uVar160;
      auVar46._8_4_ = auVar237._8_4_;
      auVar46._12_4_ = auVar237._12_4_;
      auVar138._4_4_ = auVar46._12_4_;
      auVar138._0_4_ = auVar237._0_4_;
      auVar138._8_4_ = auVar237._4_4_;
      auVar138._12_4_ = auVar46._12_4_;
      auVar138 = pblendw(auVar45,auVar138,0x3f);
      auVar46._0_8_ = auVar237._8_8_;
      auVar45 = pblendw(auVar46,auVar140,0xc);
      if ((param_21 & 1) != 0) {
        auVar101 = ZEXT416(*(uint *)(param_22 + local_4f8));
      }
      iVar155 = auVar46._12_4_ * 0x10;
      iVar158 = piVar1[1] << 4;
      local_4e8 = (longlong)(auVar237._0_4_ << 4);
      local_4e0 = (longlong)iVar155;
      local_4d8 = (longlong)(auVar140._8_4_ << 4);
      lVar31 = (longlong)iVar158;
      auVar237 = insertps(ZEXT416(*(uint *)(param_1 + local_4e8)),
                          *(undefined4 *)(param_1 + local_4e0),0x10);
      auVar237 = insertps(auVar237,*(undefined4 *)(param_1 + local_4d8),0x20);
      local_378 = insertps(auVar237,*(undefined4 *)(param_1 + lVar31),0x30);
      auVar237 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_4e8)),
                          *(undefined4 *)(param_1 + 4 + local_4e0),0x10);
      auVar237 = insertps(auVar237,*(undefined4 *)(param_1 + 4 + local_4d8),0x20);
      _local_598 = insertps(auVar237,*(undefined4 *)(param_1 + 4 + lVar31),0x30);
      auVar237 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_4e8)),
                          *(undefined4 *)(param_1 + 8 + local_4e0),0x10);
      auVar237 = insertps(auVar237,*(undefined4 *)(param_1 + 8 + local_4d8),0x20);
      auVar151 = insertps(auVar237,*(undefined4 *)(param_1 + 8 + lVar31),0x30);
      uVar6 = *(uint *)(param_1 + 0xc + local_4e8);
      local_3c8 = ZEXT416(uVar6);
      uVar7 = *(uint *)(param_1 + 0xc + local_4e0);
      local_3b8 = ZEXT416(uVar7);
      iVar147 = piVar1[2] << 4;
      local_4d0 = (longlong)(auVar138._8_4_ << 4);
      local_4c8 = (longlong)(auVar138._12_4_ * 0x10);
      local_4c0 = (longlong)(auVar140._12_4_ << 4);
      lVar34 = (longlong)iVar147;
      fVar169 = local_508[-0xc];
      fVar219 = local_508[-0xb];
      fVar171 = local_508[-10];
      fVar226 = local_508[-9];
      fVar100 = local_508[-8];
      fVar115 = local_508[-7];
      fVar189 = local_508[-6];
      fVar194 = local_508[-5];
      fVar162 = local_508[-4];
      fVar207 = local_508[-3];
      fVar167 = local_508[-2];
      fVar208 = local_508[-1];
      fVar196 = *local_508;
      fVar198 = local_508[1];
      fVar204 = local_508[2];
      fVar206 = local_508[3];
      auVar237 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar39);
      auVar140 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar39);
      pfVar33 = (float *)(param_3 + lVar39);
      auVar46 = insertps(auVar140,auVar237,0x8c);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + local_4d0)),
                          *(undefined4 *)(param_1 + local_4c8),0x10);
      auVar138 = insertps(auVar138,*(undefined4 *)(param_1 + local_4c0),0x20);
      local_348 = insertps(auVar138,*(undefined4 *)(param_1 + lVar34),0x30);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_4d0)),
                          *(undefined4 *)(param_1 + 4 + local_4c8),0x10);
      auVar138 = insertps(auVar138,*(undefined4 *)(param_1 + 4 + local_4c0),0x20);
      local_368 = insertps(auVar138,*(undefined4 *)(param_1 + 4 + lVar34),0x30);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_4d0)),
                          *(undefined4 *)(param_1 + 8 + local_4c8),0x10);
      auVar138 = insertps(auVar138,*(undefined4 *)(param_1 + 8 + local_4c0),0x20);
      auVar211 = insertps(ZEXT416(uVar6),local_3b8,0x10);
      local_358 = insertps(auVar138,*(undefined4 *)(param_1 + 8 + lVar34),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + local_4d8);
      local_408 = ZEXT416(uVar8);
      auVar138 = insertps(auVar211,local_408,0x20);
      local_4b8 = (longlong)(auVar45._0_4_ << 4);
      local_4b0 = (longlong)(auVar45._4_4_ * 0x10);
      local_518 = (longlong)(*piVar1 << 4);
      lVar21 = (longlong)(piVar1[3] << 4);
      auVar45 = insertps(ZEXT416(*(uint *)(param_1 + local_4b8)),
                         *(undefined4 *)(param_1 + local_4b0),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_1 + local_518),0x20);
      local_298 = insertps(auVar45,*(undefined4 *)(param_1 + lVar21),0x30);
      auVar212 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_4b8)),
                          *(undefined4 *)(param_1 + 4 + local_4b0),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar31);
      local_438 = ZEXT416(uVar9);
      auVar211 = insertps(auVar138,local_438,0x30);
      uVar10 = *(uint *)(param_1 + 0xc + local_4d0);
      local_3f8 = ZEXT416(uVar10);
      uVar11 = *(uint *)(param_1 + 0xc + local_4c8);
      local_3e8 = ZEXT416(uVar11);
      auVar45 = insertps(local_3f8,local_3e8,0x10);
      auVar138 = insertps(auVar212,*(undefined4 *)(param_1 + 4 + local_518),0x20);
      uVar12 = *(uint *)(param_1 + 0xc + local_4c0);
      local_3d8 = ZEXT416(uVar12);
      auVar45 = insertps(auVar45,local_3d8,0x20);
      local_288 = insertps(auVar138,*(undefined4 *)(param_1 + 4 + lVar21),0x30);
      uVar13 = *(uint *)(param_1 + 0xc + lVar34);
      local_428 = ZEXT416(uVar13);
      auVar199 = insertps(auVar45,local_428,0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_4b8)),
                         *(undefined4 *)(param_1 + 8 + local_4b0),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_1 + 8 + local_518),0x20);
      local_338 = insertps(auVar45,*(undefined4 *)(param_1 + 8 + lVar21),0x30);
      uVar14 = *(uint *)(param_1 + 0xc + local_4b8);
      local_3a8 = ZEXT416(uVar14);
      uVar15 = *(uint *)(param_1 + 0xc + local_4b0);
      local_398 = ZEXT416(uVar15);
      auVar45 = insertps(local_3a8,local_398,0x10);
      uVar16 = *(uint *)(param_1 + 0xc + local_518);
      local_388 = ZEXT416(uVar16);
      auVar45 = insertps(auVar45,local_388,0x20);
      uVar17 = *(uint *)(param_1 + 0xc + lVar21);
      local_418 = ZEXT416(uVar17);
      auVar200 = insertps(auVar45,local_418,0x30);
      auVar119 = pmovsxbd(auVar119,auVar119);
      auVar45 = insertps(ZEXT416(*(uint *)(param_20 + (auVar119._0_4_ << 2))),
                         *(undefined4 *)(param_20 + auVar119._4_4_ * 4),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_20 + (auVar119._8_4_ << 2)),0x20);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_20 + (auVar119._12_4_ << 2)),0x30);
      auVar101 = pmovsxbd(auVar101,auVar101);
      auVar119 = insertps(ZEXT416(*(uint *)(param_23 + (auVar101._0_4_ << 2))),
                          *(undefined4 *)(param_23 + auVar101._4_4_ * 4),0x10);
      auVar119 = insertps(auVar119,*(undefined4 *)(param_23 + (auVar101._8_4_ << 2)),0x20);
      auVar101 = insertps(auVar119,*(undefined4 *)(param_23 + (auVar101._12_4_ << 2)),0x30);
      fVar118 = local_378._0_4_;
      fVar150 = local_348._0_4_ - fVar118;
      fVar239 = local_378._4_4_;
      fVar156 = local_348._4_4_ - fVar239;
      fVar241 = local_378._8_4_;
      fVar157 = local_348._8_4_ - fVar241;
      fVar243 = local_378._12_4_;
      fVar159 = local_348._12_4_ - fVar243;
      fVar136 = local_368._0_4_;
      fVar143 = local_368._4_4_;
      fVar145 = local_368._8_4_;
      fVar148 = local_368._12_4_;
      fVar172 = local_298._0_4_ - fVar118;
      fVar182 = local_298._4_4_ - fVar239;
      fVar184 = local_298._8_4_ - fVar241;
      fVar186 = local_298._12_4_ - fVar243;
      fVar116 = local_288._0_4_;
      fVar130 = local_288._4_4_;
      fVar132 = local_288._8_4_;
      fVar134 = local_288._12_4_;
      fVar161 = fVar172 * fVar219 + fVar150 * fVar169;
      fVar166 = fVar182 * fVar115 + fVar156 * fVar100;
      fVar168 = fVar184 * fVar207 + fVar157 * fVar162;
      fVar170 = fVar186 * fVar198 + fVar159 * fVar196;
      fVar188 = (fVar116 - (float)local_598._0_4_) * fVar219 +
                (fVar136 - (float)local_598._0_4_) * fVar169;
      fVar193 = (fVar130 - (float)local_598._4_4_) * fVar115 +
                (fVar143 - (float)local_598._4_4_) * fVar100;
      fVar195 = (fVar132 - fStack_590) * fVar207 + (fVar145 - fStack_590) * fVar162;
      fVar197 = (fVar134 - fStack_58c) * fVar198 + (fVar148 - fStack_58c) * fVar196;
      local_678 = auVar151._0_4_;
      fStack_674 = auVar151._4_4_;
      fStack_670 = auVar151._8_4_;
      fStack_66c = auVar151._12_4_;
      fVar210 = local_358._0_4_ - local_678;
      fVar214 = local_358._4_4_ - fStack_674;
      fVar215 = local_358._8_4_ - fStack_670;
      fVar216 = local_358._12_4_ - fStack_66c;
      fVar217 = local_338._0_4_ - local_678;
      fVar224 = local_338._4_4_ - fStack_674;
      fVar227 = local_338._8_4_ - fStack_670;
      fVar229 = local_338._12_4_ - fStack_66c;
      fVar44 = fVar217 * fVar219 + fVar210 * fVar169;
      fVar77 = fVar224 * fVar115 + fVar214 * fVar100;
      fVar79 = fVar227 * fVar207 + fVar215 * fVar162;
      fVar88 = fVar229 * fVar198 + fVar216 * fVar196;
      fVar173 = fVar172 * fVar226 + fVar150 * fVar171;
      fVar183 = fVar182 * fVar194 + fVar156 * fVar189;
      fVar185 = fVar184 * fVar208 + fVar157 * fVar167;
      fVar187 = fVar186 * fVar206 + fVar159 * fVar204;
      fVar117 = (fVar116 - (float)local_598._0_4_) * fVar226 +
                (fVar136 - (float)local_598._0_4_) * fVar171;
      fVar131 = (fVar130 - (float)local_598._4_4_) * fVar194 +
                (fVar143 - (float)local_598._4_4_) * fVar189;
      fVar133 = (fVar132 - fStack_590) * fVar208 + (fVar145 - fStack_590) * fVar167;
      fVar135 = (fVar134 - fStack_58c) * fVar206 + (fVar148 - fStack_58c) * fVar204;
      fVar218 = fVar217 * fVar226 + fVar210 * fVar171;
      fVar225 = fVar224 * fVar194 + fVar214 * fVar189;
      fVar228 = fVar227 * fVar208 + fVar215 * fVar167;
      fVar230 = fVar229 * fVar206 + fVar216 * fVar204;
      auVar139._0_4_ = fVar44 * fVar44 + fVar188 * fVar188 + fVar161 * fVar161;
      auVar139._4_4_ = fVar77 * fVar77 + fVar193 * fVar193 + fVar166 * fVar166;
      auVar139._8_4_ = fVar79 * fVar79 + fVar195 * fVar195 + fVar168 * fVar168;
      auVar139._12_4_ = fVar88 * fVar88 + fVar197 * fVar197 + fVar170 * fVar170;
      auVar152._0_4_ = fVar173 * fVar173;
      auVar152._4_4_ = fVar183 * fVar183;
      auVar152._8_4_ = fVar185 * fVar185;
      auVar152._12_4_ = fVar187 * fVar187;
      auVar232._0_4_ = fVar218 * fVar218 + fVar117 * fVar117 + auVar152._0_4_;
      auVar232._4_4_ = fVar225 * fVar225 + fVar131 * fVar131 + auVar152._4_4_;
      auVar232._8_4_ = fVar228 * fVar228 + fVar133 * fVar133 + auVar152._8_4_;
      auVar232._12_4_ = fVar230 * fVar230 + fVar135 * fVar135 + auVar152._12_4_;
      auVar119 = sqrtps(auVar152,auVar139);
      auVar138 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar119);
      fVar137 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar119._0_4_) &
                       auVar138._0_4_);
      fVar144 = (float)(-(uint)(_UNK_1506895d4 < auVar119._4_4_) & auVar138._4_4_);
      fVar146 = (float)(-(uint)(_UNK_1506895d8 < auVar119._8_4_) & auVar138._8_4_);
      fVar149 = (float)(-(uint)(_UNK_1506895dc < auVar119._12_4_) & auVar138._12_4_);
      auVar138 = sqrtps(auVar138,auVar232);
      auVar151 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar138);
      fVar231 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar138._0_4_) &
                       auVar151._0_4_);
      fVar233 = (float)(-(uint)(_UNK_1506895d4 < auVar138._4_4_) & auVar151._4_4_);
      fVar234 = (float)(-(uint)(_UNK_1506895d8 < auVar138._8_4_) & auVar151._8_4_);
      fVar235 = (float)(-(uint)(_UNK_1506895dc < auVar138._12_4_) & auVar151._12_4_);
      local_2e8 = auVar119._0_4_ - auVar101._0_4_ * auVar237._0_4_;
      fStack_2e4 = auVar119._4_4_ - auVar101._4_4_ * auVar237._12_4_;
      fStack_2e0 = auVar119._8_4_ - auVar101._8_4_ * auVar140._8_4_;
      fStack_2dc = auVar119._12_4_ - auVar101._12_4_ * pfVar33[1];
      local_2c8 = auVar138._0_4_ - auVar45._0_4_ * auVar237._4_4_;
      fStack_2c4 = auVar138._4_4_ - auVar45._4_4_ * auVar140._0_4_;
      fStack_2c0 = auVar138._8_4_ - auVar45._8_4_ * auVar140._12_4_;
      fStack_2bc = auVar138._12_4_ - auVar45._12_4_ * pfVar33[2];
      fVar161 = fVar161 * fVar137;
      fVar166 = fVar166 * fVar144;
      fVar168 = fVar168 * fVar146;
      fVar170 = fVar170 * fVar149;
      fVar188 = fVar188 * fVar137;
      fVar193 = fVar193 * fVar144;
      fVar195 = fVar195 * fVar146;
      fVar197 = fVar197 * fVar149;
      fVar173 = fVar173 * fVar231;
      fVar183 = fVar183 * fVar233;
      fVar185 = fVar185 * fVar234;
      fVar187 = fVar187 * fVar235;
      fVar117 = fVar117 * fVar231;
      fVar131 = fVar131 * fVar233;
      fVar133 = fVar133 * fVar234;
      fVar135 = fVar135 * fVar235;
      fVar44 = fVar44 * fVar137;
      fVar77 = fVar77 * fVar144;
      fVar79 = fVar79 * fVar146;
      fVar88 = fVar88 * fVar149;
      fVar218 = fVar218 * fVar231;
      fVar225 = fVar225 * fVar233;
      fVar228 = fVar228 * fVar234;
      fVar230 = fVar230 * fVar235;
      local_748._0_4_ = auVar46._0_4_;
      local_748._4_4_ = auVar46._4_4_;
      local_2b8 = (fVar44 * fVar218 + fVar188 * fVar117 + fVar161 * fVar173) -
                  (float)local_748._0_4_;
      fStack_2b4 = (fVar77 * fVar225 + fVar193 * fVar131 + fVar166 * fVar183) -
                   (float)local_748._4_4_;
      fStack_2b0 = (fVar79 * fVar228 + fVar195 * fVar133 + fVar168 * fVar185) - *pfVar33;
      fStack_2ac = (fVar88 * fVar230 + fVar197 * fVar135 + fVar170 * fVar187) - pfVar33[3];
      fVar150 = fVar171 * fVar173;
      fVar210 = fVar189 * fVar183;
      fVar80 = fVar167 * fVar185;
      fVar89 = fVar204 * fVar187;
      fVar156 = fVar171 * fVar117;
      fVar214 = fVar189 * fVar131;
      fVar81 = fVar167 * fVar133;
      fVar90 = fVar204 * fVar135;
      fVar157 = fVar171 * fVar218;
      fVar215 = fVar189 * fVar225;
      fVar82 = fVar167 * fVar228;
      fVar91 = fVar204 * fVar230;
      fVar159 = fVar226 * fVar173;
      fVar216 = fVar194 * fVar183;
      fVar83 = fVar208 * fVar185;
      fVar92 = fVar206 * fVar187;
      fVar172 = fVar226 * fVar117;
      fVar217 = fVar194 * fVar131;
      fVar84 = fVar208 * fVar133;
      fVar93 = fVar206 * fVar135;
      fVar182 = fVar226 * fVar218;
      fVar224 = fVar194 * fVar225;
      fVar85 = fVar208 * fVar228;
      fVar94 = fVar206 * fVar230;
      local_328 = fVar169 * fVar161;
      fStack_324 = fVar100 * fVar166;
      fStack_320 = fVar162 * fVar168;
      fStack_31c = fVar196 * fVar170;
      fVar184 = fVar169 * fVar188;
      fVar227 = fVar100 * fVar193;
      fVar86 = fVar162 * fVar195;
      fVar95 = fVar196 * fVar197;
      local_588 = fVar169 * fVar44;
      fStack_584 = fVar100 * fVar77;
      fStack_580 = fVar162 * fVar79;
      fStack_57c = fVar196 * fVar88;
      local_318 = fVar219 * fVar161;
      fStack_314 = fVar115 * fVar166;
      fStack_310 = fVar207 * fVar168;
      fStack_30c = fVar198 * fVar170;
      local_308 = fVar219 * fVar188;
      fStack_304 = fVar115 * fVar193;
      fStack_300 = fVar207 * fVar195;
      fStack_2fc = fVar198 * fVar197;
      fVar186 = fVar219 * fVar44;
      fVar229 = fVar115 * fVar77;
      fVar87 = fVar207 * fVar79;
      fVar96 = fVar198 * fVar88;
      local_2d8 = fVar171 * fVar161 * fVar231 + fVar169 * fVar173 * fVar137;
      fStack_2d4 = fVar189 * fVar166 * fVar233 + fVar100 * fVar183 * fVar144;
      fStack_2d0 = fVar167 * fVar168 * fVar234 + fVar162 * fVar185 * fVar146;
      fStack_2cc = fVar204 * fVar170 * fVar235 + fVar196 * fVar187 * fVar149;
      local_2f8._0_4_ = fVar171 * fVar188 * fVar231 + fVar169 * fVar117 * fVar137;
      local_2f8._4_4_ = fVar189 * fVar193 * fVar233 + fVar100 * fVar131 * fVar144;
      local_2f8._8_4_ = fVar167 * fVar195 * fVar234 + fVar162 * fVar133 * fVar146;
      local_2f8._12_4_ = fVar204 * fVar197 * fVar235 + fVar196 * fVar135 * fVar149;
      fVar236 = fVar171 * fVar44 * fVar231 + fVar169 * fVar218 * fVar137;
      fVar240 = fVar189 * fVar77 * fVar233 + fVar100 * fVar225 * fVar144;
      fVar242 = fVar167 * fVar79 * fVar234 + fVar162 * fVar228 * fVar146;
      fVar244 = fVar204 * fVar88 * fVar235 + fVar196 * fVar230 * fVar149;
      fVar162 = fVar161 * fVar231 * fVar226 + fVar173 * fVar137 * fVar219;
      fVar167 = fVar166 * fVar233 * fVar194 + fVar183 * fVar144 * fVar115;
      fVar169 = fVar168 * fVar234 * fVar208 + fVar185 * fVar146 * fVar207;
      fVar171 = fVar170 * fVar235 * fVar206 + fVar187 * fVar149 * fVar198;
      fVar117 = fVar188 * fVar231 * fVar226 + fVar117 * fVar137 * fVar219;
      fVar131 = fVar193 * fVar233 * fVar194 + fVar131 * fVar144 * fVar115;
      fVar133 = fVar195 * fVar234 * fVar208 + fVar133 * fVar146 * fVar207;
      fVar135 = fVar197 * fVar235 * fVar206 + fVar135 * fVar149 * fVar198;
      _local_548 = CONCAT44(fVar131,fVar117);
      _fStack_540 = CONCAT44(fVar135,fVar133);
      fVar137 = fVar44 * fVar231 * fVar226 + fVar218 * fVar137 * fVar219;
      fVar144 = fVar77 * fVar233 * fVar194 + fVar225 * fVar144 * fVar115;
      fVar146 = fVar79 * fVar234 * fVar208 + fVar228 * fVar146 * fVar207;
      fVar149 = fVar88 * fVar235 * fVar206 + fVar230 * fVar149 * fVar198;
      auVar101 = pmovsxbd(local_2f8,(undefined4)local_2a8);
      auVar151._0_4_ = auVar101._0_4_ << 2;
      auVar151._4_4_ = auVar101._4_4_ * 4;
      auVar151._8_4_ = auVar101._8_4_ << 2;
      auVar151._12_4_ = auVar101._12_4_ << 2;
      auVar101 = pmovsxbd(auVar151,uVar99);
      auVar237._0_4_ = auVar101._0_4_ << 2;
      auVar237._4_4_ = auVar101._4_4_ * 4;
      auVar237._8_4_ = auVar101._8_4_ << 2;
      auVar237._12_4_ = auVar101._12_4_ << 2;
      auVar46 = pmovsxbd(auVar237,uVar98);
      iVar78 = auVar46._4_4_ * 4;
      iVar97 = auVar46._12_4_ << 2;
      auVar140 = insertps(ZEXT416(*(uint *)(param_14 + auVar237._0_4_)),
                          *(undefined4 *)(param_14 + auVar237._4_4_),0x10);
      auVar101 = *(undefined1 (*) [16])(param_6 + -0x20 + lVar39);
      fStack_534 = auVar101._12_4_;
      auVar119 = *(undefined1 (*) [16])(param_6 + -0x10 + lVar39);
      fStack_530 = auVar119._8_4_;
      local_538 = auVar101._0_4_;
      pfVar33 = (float *)(param_6 + lVar39);
      fVar100 = *pfVar33;
      fStack_52c = pfVar33[1];
      fVar115 = pfVar33[3];
      auVar138 = insertps(auVar119,auVar101,0x8c);
      auVar140 = insertps(auVar140,*(undefined4 *)(param_14 + auVar237._8_4_),0x20);
      auVar102._0_8_ = auVar138._0_8_;
      auVar102._8_4_ = fVar100;
      auVar102._12_4_ = fVar115;
      auVar45 = insertps(auVar140,*(undefined4 *)(param_14 + auVar237._12_4_),0x30);
      auVar237 = *(undefined1 (*) [16])(param_5 + -0x20 + lVar39);
      auVar140 = *(undefined1 (*) [16])(param_5 + -0x10 + lVar39);
      pfVar2 = (float *)(param_5 + lVar39);
      auVar212 = insertps(auVar140,auVar237,0x8c);
      fVar219 = auVar237._0_4_ * auVar45._0_4_;
      fVar226 = auVar237._12_4_ * auVar45._4_4_;
      fVar44 = auVar140._8_4_ * auVar45._8_4_;
      fVar77 = pfVar2[1] * auVar45._12_4_;
      auVar45 = insertps(ZEXT416(*(uint *)(param_11 + auVar151._0_4_)),
                         *(undefined4 *)(param_11 + auVar151._4_4_),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_11 + auVar151._8_4_),0x20);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_11 + auVar151._12_4_),0x30);
      fVar204 = auVar237._4_4_ * auVar45._0_4_;
      fVar206 = auVar140._0_4_ * auVar45._4_4_;
      fVar207 = auVar140._12_4_ * auVar45._8_4_;
      fVar208 = pfVar2[2] * auVar45._12_4_;
      auVar237 = insertps(ZEXT416(*(uint *)(param_17 + (auVar46._0_4_ << 2))),
                          *(undefined4 *)(param_17 + iVar78),0x10);
      auVar237 = insertps(auVar237,*(undefined4 *)(param_17 + (auVar46._8_4_ << 2)),0x20);
      auVar237 = insertps(auVar237,*(undefined4 *)(param_17 + iVar97),0x30);
      fVar189 = auVar212._0_4_ * auVar237._0_4_;
      fVar194 = auVar212._4_4_ * auVar237._4_4_;
      fVar196 = *pfVar2 * auVar237._8_4_;
      fVar198 = pfVar2[3] * auVar237._12_4_;
      auVar140._0_4_ = param_7 * fVar219 * param_7;
      auVar140._4_4_ = param_7 * fVar226 * param_7;
      auVar140._8_4_ = param_7 * fVar44 * param_7;
      auVar140._12_4_ = param_7 * fVar77 * param_7;
      auVar237 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar140);
      local_718._0_4_ = auVar211._0_4_;
      local_718._4_4_ = auVar211._4_4_;
      fStack_710 = auVar211._8_4_;
      fStack_70c = auVar211._12_4_;
      local_768 = auVar199._0_4_;
      fStack_764 = auVar199._4_4_;
      fStack_760 = auVar199._8_4_;
      fStack_75c = auVar199._12_4_;
      local_758 = auVar200._0_4_;
      fStack_754 = auVar200._4_4_;
      fStack_750 = auVar200._8_4_;
      fStack_74c = auVar200._12_4_;
      auVar211._0_4_ =
           (fVar186 * fVar186 + local_308 * local_308 + local_318 * local_318) * local_758 +
           (local_588 * local_588 + fVar184 * fVar184 + local_328 * local_328) * local_768 +
           ((local_588 + fVar186) * (local_588 + fVar186) +
           (fVar184 + local_308) * (fVar184 + local_308) +
           (local_328 + local_318) * (local_328 + local_318)) * (float)local_718 + auVar237._0_4_;
      auVar211._4_4_ =
           (fVar229 * fVar229 + fStack_304 * fStack_304 + fStack_314 * fStack_314) * fStack_754 +
           (fStack_584 * fStack_584 + fVar227 * fVar227 + fStack_324 * fStack_324) * fStack_764 +
           ((fStack_584 + fVar229) * (fStack_584 + fVar229) +
           (fVar227 + fStack_304) * (fVar227 + fStack_304) +
           (fStack_324 + fStack_314) * (fStack_324 + fStack_314)) * local_718._4_4_ + auVar237._4_4_
      ;
      auVar211._8_4_ =
           (fVar87 * fVar87 + fStack_300 * fStack_300 + fStack_310 * fStack_310) * fStack_750 +
           (fStack_580 * fStack_580 + fVar86 * fVar86 + fStack_320 * fStack_320) * fStack_760 +
           ((fStack_580 + fVar87) * (fStack_580 + fVar87) +
           (fVar86 + fStack_300) * (fVar86 + fStack_300) +
           (fStack_320 + fStack_310) * (fStack_320 + fStack_310)) * fStack_710 + auVar237._8_4_;
      auVar211._12_4_ =
           (fVar96 * fVar96 + fStack_2fc * fStack_2fc + fStack_30c * fStack_30c) * fStack_74c +
           (fStack_57c * fStack_57c + fVar95 * fVar95 + fStack_31c * fStack_31c) * fStack_75c +
           ((fStack_57c + fVar96) * (fStack_57c + fVar96) +
           (fVar95 + fStack_2fc) * (fVar95 + fStack_2fc) +
           (fStack_31c + fStack_30c) * (fStack_31c + fStack_30c)) * fStack_70c + auVar237._12_4_;
      auVar103._0_4_ = local_2e8 - auVar237._0_4_ * local_538;
      auVar103._4_4_ = fStack_2e4 - auVar237._4_4_ * fStack_534;
      auVar103._8_4_ = fStack_2e0 - auVar237._8_4_ * fStack_530;
      auVar103._12_4_ = fStack_2dc - auVar237._12_4_ * fStack_52c;
      auVar237 = divps(auVar103,auVar211);
      fVar168 = (float)(-(uint)(param_8 <= fVar219) & auVar237._0_4_);
      fVar170 = (float)(-(uint)(param_8 <= fVar226) & auVar237._4_4_);
      fVar173 = (float)(-(uint)(param_8 <= fVar44) & auVar237._8_4_);
      fVar183 = (float)(-(uint)(param_8 <= fVar77) & auVar237._12_4_);
      auVar212._0_4_ = param_7 * fVar204 * param_7;
      auVar212._4_4_ = param_7 * fVar206 * param_7;
      auVar212._8_4_ = param_7 * fVar207 * param_7;
      auVar212._12_4_ = param_7 * fVar208 * param_7;
      auVar237 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar212);
      auVar201._0_4_ =
           (fVar182 * fVar182 + fVar172 * fVar172 + fVar159 * fVar159) * local_758 +
           (fVar157 * fVar157 + fVar156 * fVar156 + fVar150 * fVar150) * local_768 +
           ((fVar157 + fVar182) * (fVar157 + fVar182) +
           (fVar156 + fVar172) * (fVar156 + fVar172) + (fVar150 + fVar159) * (fVar150 + fVar159)) *
           (float)local_718 + auVar237._0_4_;
      auVar201._4_4_ =
           (fVar224 * fVar224 + fVar217 * fVar217 + fVar216 * fVar216) * fStack_754 +
           (fVar215 * fVar215 + fVar214 * fVar214 + fVar210 * fVar210) * fStack_764 +
           ((fVar215 + fVar224) * (fVar215 + fVar224) +
           (fVar214 + fVar217) * (fVar214 + fVar217) + (fVar210 + fVar216) * (fVar210 + fVar216)) *
           local_718._4_4_ + auVar237._4_4_;
      auVar201._8_4_ =
           (fVar85 * fVar85 + fVar84 * fVar84 + fVar83 * fVar83) * fStack_750 +
           (fVar82 * fVar82 + fVar81 * fVar81 + fVar80 * fVar80) * fStack_760 +
           ((fVar82 + fVar85) * (fVar82 + fVar85) +
           (fVar81 + fVar84) * (fVar81 + fVar84) + (fVar80 + fVar83) * (fVar80 + fVar83)) *
           fStack_710 + auVar237._8_4_;
      auVar201._12_4_ =
           (fVar94 * fVar94 + fVar93 * fVar93 + fVar92 * fVar92) * fStack_74c +
           (fVar91 * fVar91 + fVar90 * fVar90 + fVar89 * fVar89) * fStack_75c +
           ((fVar91 + fVar94) * (fVar91 + fVar94) +
           (fVar90 + fVar93) * (fVar90 + fVar93) + (fVar89 + fVar92) * (fVar89 + fVar92)) *
           fStack_70c + auVar237._12_4_;
      auVar120._0_4_ = local_2c8 - auVar237._0_4_ * auVar101._4_4_;
      auVar120._4_4_ = fStack_2c4 - auVar237._4_4_ * auVar119._0_4_;
      auVar120._8_4_ = fStack_2c0 - auVar237._8_4_ * auVar119._12_4_;
      auVar120._12_4_ = fStack_2bc - auVar237._12_4_ * pfVar33[2];
      auVar237 = divps(auVar120,auVar201);
      fVar77 = (float)(-(uint)(param_8 <= fVar204) & auVar237._0_4_);
      fVar79 = (float)(-(uint)(param_8 <= fVar206) & auVar237._4_4_);
      fVar88 = (float)(-(uint)(param_8 <= fVar207) & auVar237._8_4_);
      fVar161 = (float)(-(uint)(param_8 <= fVar208) & auVar237._12_4_);
      auVar199._0_4_ = param_7 * fVar189 * param_7;
      auVar199._4_4_ = param_7 * fVar194 * param_7;
      auVar199._8_4_ = param_7 * fVar196 * param_7;
      auVar199._12_4_ = param_7 * fVar198 * param_7;
      auVar237 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar199);
      auVar200._0_4_ =
           (fVar137 * fVar137 + fVar117 * fVar117 + fVar162 * fVar162) * local_758 +
           (fVar236 * fVar236 + local_2f8._0_4_ * local_2f8._0_4_ + local_2d8 * local_2d8) *
           local_768 +
           ((fVar236 + fVar137) * (fVar236 + fVar137) +
           (local_2f8._0_4_ + fVar117) * (local_2f8._0_4_ + fVar117) +
           (local_2d8 + fVar162) * (local_2d8 + fVar162)) * (float)local_718 + auVar237._0_4_;
      auVar200._4_4_ =
           (fVar144 * fVar144 + fVar131 * fVar131 + fVar167 * fVar167) * fStack_754 +
           (fVar240 * fVar240 + local_2f8._4_4_ * local_2f8._4_4_ + fStack_2d4 * fStack_2d4) *
           fStack_764 +
           ((fVar240 + fVar144) * (fVar240 + fVar144) +
           (local_2f8._4_4_ + fVar131) * (local_2f8._4_4_ + fVar131) +
           (fStack_2d4 + fVar167) * (fStack_2d4 + fVar167)) * local_718._4_4_ + auVar237._4_4_;
      auVar200._8_4_ =
           (fVar146 * fVar146 + fVar133 * fVar133 + fVar169 * fVar169) * fStack_750 +
           (fVar242 * fVar242 + local_2f8._8_4_ * local_2f8._8_4_ + fStack_2d0 * fStack_2d0) *
           fStack_760 +
           ((fVar242 + fVar146) * (fVar242 + fVar146) +
           (local_2f8._8_4_ + fVar133) * (local_2f8._8_4_ + fVar133) +
           (fStack_2d0 + fVar169) * (fStack_2d0 + fVar169)) * fStack_710 + auVar237._8_4_;
      auVar200._12_4_ =
           (fVar149 * fVar149 + fVar135 * fVar135 + fVar171 * fVar171) * fStack_74c +
           (fVar244 * fVar244 + local_2f8._12_4_ * local_2f8._12_4_ + fStack_2cc * fStack_2cc) *
           fStack_75c +
           ((fVar244 + fVar149) * (fVar244 + fVar149) +
           (local_2f8._12_4_ + fVar135) * (local_2f8._12_4_ + fVar135) +
           (fStack_2cc + fVar171) * (fStack_2cc + fVar171)) * fStack_70c + auVar237._12_4_;
      local_528._0_4_ = auVar138._0_4_;
      local_528._4_4_ = auVar138._4_4_;
      auVar104._0_4_ = local_2b8 - auVar237._0_4_ * (float)local_528._0_4_;
      auVar104._4_4_ = fStack_2b4 - auVar237._4_4_ * (float)local_528._4_4_;
      auVar104._8_4_ = fStack_2b0 - auVar237._8_4_ * fVar100;
      auVar104._12_4_ = fStack_2ac - auVar237._12_4_ * fVar115;
      auVar237 = divps(auVar104,auVar200);
      fVar207 = (float)(-(uint)(param_8 <= fVar189) & auVar237._0_4_);
      fVar208 = (float)(-(uint)(param_8 <= fVar194) & auVar237._4_4_);
      fVar219 = (float)(-(uint)(param_8 <= fVar196) & auVar237._8_4_);
      fVar226 = (float)(-(uint)(param_8 <= fVar198) & auVar237._12_4_);
      auVar121._0_8_ = CONCAT44(fStack_534 + fVar170,local_538 + fVar168);
      auVar121._8_4_ = fStack_530 + fVar173;
      auVar121._12_4_ = fStack_52c + fVar183;
      auVar174._0_4_ = auVar101._4_4_ + fVar77;
      auVar174._4_4_ = auVar119._0_4_ + fVar79;
      auVar174._8_4_ = auVar119._12_4_ + fVar88;
      auVar174._12_4_ = pfVar33[2] + fVar161;
      auVar105._0_4_ = (float)local_528._0_4_ + fVar207;
      auVar105._4_4_ = (float)local_528._4_4_ + fVar208;
      auVar105._8_4_ = fVar100 + fVar219;
      auVar105._12_4_ = fVar115 + fVar226;
      auVar101._8_4_ = auVar121._8_4_;
      auVar101._0_8_ = auVar121._0_8_;
      auVar101._12_4_ = auVar121._12_4_;
      auVar101 = insertps(auVar101,auVar174,0x30);
      auVar101 = insertps(auVar101,auVar105,0x20);
      puVar4 = (undefined4 *)(param_6 + -0x20 + lVar39);
      *puVar4 = auVar101._0_4_;
      puVar4[1] = auVar101._12_4_;
      puVar4[2] = auVar101._8_4_;
      puVar4[3] = auVar101._4_4_;
      auVar119._4_4_ = auVar174._8_4_;
      auVar119._0_4_ = auVar174._4_4_;
      auVar119._8_4_ = auVar105._0_4_;
      auVar119._12_4_ = auVar105._4_4_;
      auVar101 = blendps(auVar119,auVar121,4);
      puVar4 = (undefined4 *)(param_6 + -0x10 + lVar39);
      *puVar4 = auVar101._0_4_;
      puVar4[1] = auVar101._12_4_;
      puVar4[2] = auVar101._8_4_;
      puVar4[3] = auVar101._4_4_;
      pfVar33 = (float *)(param_6 + lVar39);
      *pfVar33 = auVar105._8_4_;
      pfVar33[1] = auVar121._12_4_;
      pfVar33[2] = auVar174._12_4_;
      pfVar33[3] = auVar105._12_4_;
      fVar166 = local_2d8 * fVar207 + fVar150 * fVar77 + local_328 * fVar168;
      fVar210 = fStack_2d4 * fVar208 + fVar210 * fVar79 + fStack_324 * fVar170;
      fVar80 = fStack_2d0 * fVar219 + fVar80 * fVar88 + fStack_320 * fVar173;
      fVar89 = fStack_2cc * fVar226 + fVar89 * fVar161 + fStack_31c * fVar183;
      fVar100 = local_2f8._0_4_ * fVar207 + fVar156 * fVar77 + fVar184 * fVar168;
      fVar115 = local_2f8._4_4_ * fVar208 + fVar214 * fVar79 + fVar227 * fVar170;
      fVar189 = local_2f8._8_4_ * fVar219 + fVar81 * fVar88 + fVar86 * fVar173;
      fVar194 = local_2f8._12_4_ * fVar226 + fVar90 * fVar161 + fVar95 * fVar183;
      fVar196 = fVar236 * fVar207 + fVar157 * fVar77 + local_588 * fVar168;
      fVar198 = fVar240 * fVar208 + fVar215 * fVar79 + fStack_584 * fVar170;
      fVar204 = fVar242 * fVar219 + fVar82 * fVar88 + fStack_580 * fVar173;
      fVar206 = fVar244 * fVar226 + fVar91 * fVar161 + fStack_57c * fVar183;
      fVar44 = fVar162 * fVar207 + fVar159 * fVar77 + local_318 * fVar168;
      fVar150 = fVar167 * fVar208 + fVar216 * fVar79 + fStack_314 * fVar170;
      fVar169 = fVar169 * fVar219 + fVar83 * fVar88 + fStack_310 * fVar173;
      fVar171 = fVar171 * fVar226 + fVar92 * fVar161 + fStack_30c * fVar183;
      fVar156 = fVar117 * fVar207 + fVar172 * fVar77 + local_308 * fVar168;
      fVar157 = fVar131 * fVar208 + fVar217 * fVar79 + fStack_304 * fVar170;
      fVar159 = fVar133 * fVar219 + fVar84 * fVar88 + fStack_300 * fVar173;
      fVar172 = fVar135 * fVar226 + fVar93 * fVar161 + fStack_2fc * fVar183;
      fVar162 = fVar207 * fVar137 + fVar77 * fVar182 + fVar168 * fVar186;
      fVar207 = fVar208 * fVar144 + fVar79 * fVar224 + fVar170 * fVar229;
      fVar167 = fVar219 * fVar146 + fVar88 * fVar85 + fVar173 * fVar87;
      fVar208 = fVar226 * fVar149 + fVar161 * fVar94 + fVar183 * fVar96;
      auVar47._4_4_ = -(uint)(0.0 < local_718._4_4_);
      auVar47._0_4_ = -(uint)(0.0 < (float)local_718);
      auVar47._8_4_ = -(uint)(0.0 < fStack_710);
      auVar47._12_4_ = -(uint)(0.0 < fStack_70c);
      iVar42 = movmskps(auVar151._8_4_,auVar47);
      if (iVar42 != 0) {
        bVar41 = (char)((char)iVar42 << 4) >> 4;
        fVar118 = fVar118 + (fVar166 + fVar44) * (float)local_718;
        auVar48._4_4_ = fVar239 + (fVar210 + fVar150) * local_718._4_4_;
        auVar48._0_4_ = fVar118;
        auVar48._8_4_ = fVar241 + (fVar80 + fVar169) * fStack_710;
        auVar48._12_4_ = fVar243 + (fVar89 + fVar171) * fStack_70c;
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + local_4e8) = fVar118;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar48,1);
          *(undefined8 *)(param_1 + local_4e0) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar48,2);
          *(undefined8 *)(param_1 + local_4d8) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar48,3);
          *(undefined8 *)(param_1 + lVar31) = uVar19;
          iVar97 = iVar158;
        }
        fVar219 = (float)local_598._0_4_ + (fVar100 + fVar156) * (float)local_718;
        auVar49._4_4_ = (float)local_598._4_4_ + (fVar115 + fVar157) * local_718._4_4_;
        auVar49._0_4_ = fVar219;
        auVar49._8_4_ = fStack_590 + (fVar189 + fVar159) * fStack_710;
        auVar49._12_4_ = fStack_58c + (fVar194 + fVar172) * fStack_70c;
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + 4 + local_4e8) = fVar219;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar49,1);
          *(undefined8 *)(param_1 + 4 + local_4e0) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar49,2);
          *(undefined8 *)(param_1 + 4 + local_4d8) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar49,3);
          *(undefined8 *)(param_1 + 4 + lVar31) = uVar19;
          iVar97 = iVar158;
        }
        auVar50._0_4_ = local_678 + (float)local_718 * (fVar196 + fVar162);
        auVar50._4_4_ = fStack_674 + local_718._4_4_ * (fVar198 + fVar207);
        auVar50._8_4_ = fStack_670 + fStack_710 * (fVar204 + fVar167);
        auVar50._12_4_ = fStack_66c + fStack_70c * (fVar206 + fVar208);
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + 8 + local_4e8) = auVar50._0_4_;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar50,1);
          *(undefined8 *)(param_1 + 8 + local_4e0) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar50,2);
          *(undefined8 *)(param_1 + 8 + local_4d8) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar50,3);
          *(undefined8 *)(param_1 + 8 + lVar31) = uVar19;
          iVar97 = iVar158;
        }
        if ((bVar41 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_4e8) = uVar6;
        }
        if ((bVar41 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4e0) = uVar7;
        }
        if ((bVar41 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4d8) = uVar8;
        }
        iVar78 = iVar155;
        if ((char)bVar41 < '\0') {
          *(uint *)(param_1 + 0xc + lVar31) = uVar9;
          iVar97 = iVar158;
        }
      }
      auVar51._4_4_ = -(uint)(0.0 < fStack_764);
      auVar51._0_4_ = -(uint)(0.0 < local_768);
      auVar51._8_4_ = -(uint)(0.0 < fStack_760);
      auVar51._12_4_ = -(uint)(0.0 < fStack_75c);
      iVar78 = movmskps(iVar78,auVar51);
      if (iVar78 != 0) {
        bVar41 = (char)((char)iVar78 << 4) >> 4;
        auVar52._0_4_ = local_348._0_4_ - fVar166 * local_768;
        auVar52._4_4_ = local_348._4_4_ - fVar210 * fStack_764;
        auVar52._8_4_ = local_348._8_4_ - fVar80 * fStack_760;
        auVar52._12_4_ = local_348._12_4_ - fVar89 * fStack_75c;
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + local_4d0) = auVar52._0_4_;
        }
        if ((bVar41 & 2) == 0) {
          if ((bVar41 & 4) == 0) goto LAB_1409b74d0;
LAB_1409b77c2:
          uVar19 = extractps(auVar52,2);
          *(undefined8 *)(param_1 + local_4c0) = uVar19;
          if ((char)bVar41 < '\0') goto LAB_1409b77d1;
LAB_1409b74d8:
          auVar175._0_4_ = fVar136 - fVar100 * local_768;
          auVar175._4_4_ = fVar143 - fVar115 * fStack_764;
          auVar175._8_4_ = fVar145 - fVar189 * fStack_760;
          auVar175._12_4_ = fVar148 - fVar194 * fStack_75c;
        }
        else {
          uVar19 = extractps(auVar52,1);
          *(undefined8 *)(param_1 + local_4c8) = uVar19;
          if ((bVar41 & 4) != 0) goto LAB_1409b77c2;
LAB_1409b74d0:
          if (-1 < (char)bVar41) goto LAB_1409b74d8;
LAB_1409b77d1:
          uVar19 = extractps(auVar52,3);
          *(undefined8 *)(param_1 + lVar34) = uVar19;
          auVar175._0_4_ = fVar136 - fVar100 * local_768;
          auVar175._4_4_ = fVar143 - fVar115 * fStack_764;
          auVar175._8_4_ = fVar145 - fVar189 * fStack_760;
          auVar175._12_4_ = fVar148 - fVar194 * fStack_75c;
          iVar97 = iVar147;
        }
        if ((bVar41 & 1) != 0) {
          *(int *)(param_1 + 4 + local_4d0) = auVar175._0_4_;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar175,1);
          *(undefined8 *)(param_1 + 4 + local_4c8) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar175,2);
          *(undefined8 *)(param_1 + 4 + local_4c0) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar175,3);
          *(undefined8 *)(param_1 + 4 + lVar34) = uVar19;
          iVar97 = iVar147;
        }
        auVar53._0_4_ = local_358._0_4_ - local_768 * fVar196;
        auVar53._4_4_ = local_358._4_4_ - fStack_764 * fVar198;
        auVar53._8_4_ = local_358._8_4_ - fStack_760 * fVar204;
        auVar53._12_4_ = local_358._12_4_ - fStack_75c * fVar206;
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + 8 + local_4d0) = auVar53._0_4_;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar53,1);
          *(undefined8 *)(param_1 + 8 + local_4c8) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar53,2);
          *(undefined8 *)(param_1 + 8 + local_4c0) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar53,3);
          *(undefined8 *)(param_1 + 8 + lVar34) = uVar19;
          iVar97 = iVar147;
        }
        if ((bVar41 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_4d0) = uVar10;
        }
        if ((bVar41 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4c8) = uVar11;
        }
        if ((bVar41 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4c0) = uVar12;
        }
        if ((char)bVar41 < '\0') {
          *(uint *)(param_1 + 0xc + lVar34) = uVar13;
          iVar97 = iVar147;
        }
      }
      auVar54._4_4_ = -(uint)(0.0 < fStack_754);
      auVar54._0_4_ = -(uint)(0.0 < local_758);
      auVar54._8_4_ = -(uint)(0.0 < fStack_750);
      auVar54._12_4_ = -(uint)(0.0 < fStack_74c);
      iVar97 = movmskps(iVar97,auVar54);
      if (iVar97 != 0) {
        bVar41 = (char)((char)iVar97 << 4) >> 4;
        auVar141._0_4_ = local_298._0_4_ - fVar44 * local_758;
        auVar141._4_4_ = local_298._4_4_ - fVar150 * fStack_754;
        auVar141._8_4_ = local_298._8_4_ - fVar169 * fStack_750;
        auVar141._12_4_ = local_298._12_4_ - fVar171 * fStack_74c;
        if ((bVar41 & 1) == 0) {
          if ((bVar41 & 2) == 0) goto LAB_1409b75c5;
LAB_1409b7919:
          uVar19 = extractps(auVar141,1);
          *(undefined8 *)(param_1 + local_4b0) = uVar19;
          if ((bVar41 & 4) != 0) goto LAB_1409b792a;
LAB_1409b75ce:
          if (-1 < (char)bVar41) goto LAB_1409b75d6;
LAB_1409b793a:
          uVar19 = extractps(auVar141,3);
          *(undefined8 *)(param_1 + lVar21) = uVar19;
          auVar122._0_4_ = fVar116 - fVar156 * local_758;
          auVar122._4_4_ = fVar130 - fVar157 * fStack_754;
          auVar122._8_4_ = fVar132 - fVar159 * fStack_750;
          auVar122._12_4_ = fVar134 - fVar172 * fStack_74c;
        }
        else {
          *(float *)(param_1 + local_4b8) = auVar141._0_4_;
          if ((bVar41 & 2) != 0) goto LAB_1409b7919;
LAB_1409b75c5:
          if ((bVar41 & 4) == 0) goto LAB_1409b75ce;
LAB_1409b792a:
          uVar19 = extractps(auVar141,2);
          *(undefined8 *)(param_1 + local_518) = uVar19;
          if ((char)bVar41 < '\0') goto LAB_1409b793a;
LAB_1409b75d6:
          auVar122._0_4_ = fVar116 - fVar156 * local_758;
          auVar122._4_4_ = fVar130 - fVar157 * fStack_754;
          auVar122._8_4_ = fVar132 - fVar159 * fStack_750;
          auVar122._12_4_ = fVar134 - fVar172 * fStack_74c;
        }
        if ((bVar41 & 1) != 0) {
          *(int *)(param_1 + 4 + local_4b8) = auVar122._0_4_;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar122,1);
          *(undefined8 *)(param_1 + 4 + local_4b0) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar122,2);
          *(undefined8 *)(param_1 + 4 + local_518) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar122,3);
          *(undefined8 *)(param_1 + 4 + lVar21) = uVar19;
        }
        auVar55._0_4_ = local_338._0_4_ - local_758 * fVar162;
        auVar55._4_4_ = local_338._4_4_ - fStack_754 * fVar207;
        auVar55._8_4_ = local_338._8_4_ - fStack_750 * fVar167;
        auVar55._12_4_ = local_338._12_4_ - fStack_74c * fVar208;
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + 8 + local_4b8) = auVar55._0_4_;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar55,1);
          *(undefined8 *)(param_1 + 8 + local_4b0) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar55,2);
          *(undefined8 *)(param_1 + 8 + local_518) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar55,3);
          *(undefined8 *)(param_1 + 8 + lVar21) = uVar19;
        }
        if ((bVar41 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_4b8) = uVar14;
        }
        if ((bVar41 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4b0) = uVar15;
        }
        if ((bVar41 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_518) = uVar16;
        }
        if ((char)bVar41 < '\0') {
          *(uint *)(param_1 + 0xc + lVar21) = uVar17;
        }
      }
      uVar28 = local_4f8 + 4;
      lVar39 = lVar39 + 0x30;
      pfVar33 = local_508 + 0x10;
    } while ((int)uVar28 < (int)(uVar27 & 0xfffffffc));
    local_528 = auVar102;
    if ((int)param_24 <= (int)uVar28) {
      return;
    }
  }
  uVar27 = (uint)uVar28;
  auVar64._0_4_ =
       -(uint)((int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_24);
  auVar64._4_4_ =
       -(uint)((int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_24);
  auVar64._8_4_ = -(uint)((int)(uVar27 | _UNK_150631e08) < (int)param_24);
  auVar64._12_4_ = -(uint)((int)(uVar27 | _UNK_150631e0c) < (int)param_24);
  uVar28 = uVar28 & 0xffffffff;
  pauVar3 = (undefined1 (*) [16])(param_2 + uVar28 * 0xc);
  uVar27 = movmskps(param_24,auVar64);
  bVar41 = (char)((char)uVar27 << 4) >> 4;
  if (uVar27 == 0xf) {
    auVar101 = *pauVar3;
    auVar119 = pauVar3[1];
    uVar98 = auVar119._0_4_;
    auVar164._4_4_ = uVar98;
    auVar164._0_4_ = uVar98;
    auVar164._8_4_ = uVar98;
    auVar164._12_4_ = uVar98;
    uVar98 = auVar101._12_4_;
    auVar221._0_8_ = CONCAT44(uVar98,auVar101._0_4_);
    auVar221._8_4_ = auVar101._4_4_;
    auVar221._12_4_ = uVar98;
    auVar237 = pblendw(auVar164,auVar221,0x3f);
    auVar154._0_8_ = auVar101._8_8_;
    auVar154._8_4_ = auVar101._8_4_;
    auVar154._12_4_ = uVar98;
    auVar101 = pblendw(auVar154,auVar119,0xc);
    auVar106._0_8_ = CONCAT44(*(undefined4 *)(pauVar3[2] + 4),auVar119._8_4_);
    auVar106._8_4_ = auVar119._12_4_;
    auVar106._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar220._8_8_ = auVar106._0_8_;
    auVar220._0_8_ = auVar221._0_8_;
    auVar163._8_8_ = auVar106._8_8_;
    auVar163._0_8_ = auVar237._8_8_;
    auVar153._0_8_ = auVar101._0_8_;
    auVar153._8_4_ = *(undefined4 *)pauVar3[2];
    auVar153._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar56._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar64._0_4_;
    auVar56._4_4_ = _UNK_150b50da4 & auVar64._4_4_;
    auVar56._8_4_ = _UNK_150b50da8 & auVar64._8_4_;
    auVar56._12_4_ = _UNK_150b50dac & auVar64._12_4_;
    lVar39 = extractps(auVar56,1);
    lVar21 = extractps(auVar56,2);
    lVar31 = extractps(auVar56,3);
    auVar220._4_4_ = *(undefined4 *)(*pauVar3 + lVar39);
    auVar220._0_4_ = *(undefined4 *)*pauVar3;
    auVar220._12_4_ = *(undefined4 *)(*pauVar3 + lVar31);
    auVar220._8_4_ = *(undefined4 *)(*pauVar3 + lVar21);
    auVar101 = ___xmm_000000280000001c0000001000000004 & auVar64;
    auVar163._4_4_ = *(undefined4 *)(*pauVar3 + auVar101._4_4_);
    auVar163._0_4_ = *(undefined4 *)(*pauVar3 + auVar101._0_4_);
    auVar163._12_4_ = *(undefined4 *)(*pauVar3 + auVar101._12_4_);
    auVar163._8_4_ = *(undefined4 *)(*pauVar3 + auVar101._8_4_);
    auVar101 = ___xmm_0000002c000000200000001400000008 & auVar64;
    auVar153._4_4_ = *(undefined4 *)(*pauVar3 + auVar101._4_4_);
    auVar153._0_4_ = *(undefined4 *)(*pauVar3 + auVar101._0_4_);
    auVar153._12_4_ = *(undefined4 *)(*pauVar3 + auVar101._12_4_);
    auVar153._8_4_ = *(undefined4 *)(*pauVar3 + auVar101._8_4_);
  }
  auVar238 = ZEXT816(0);
  bVar35 = ~bVar41;
  auVar181 = ZEXT816(0);
  if ((param_9 & 1) != 0) {
    if ((bVar35 & 9) == 0) {
      auVar181 = ZEXT416(*(uint *)(param_10 + uVar28));
    }
    else {
      pbVar18 = (byte *)(param_10 + uVar28);
      if ((uVar27 & 1) != 0) {
        auVar181 = ZEXT116(*pbVar18);
      }
      if ((uVar27 & 2) != 0) {
        auVar75._8_8_ = auVar181._8_8_;
        auVar75._0_8_ = auVar181._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar181 = pblendw(auVar181,auVar75,0xfd);
      }
      if ((uVar27 & 4) != 0) {
        bVar20 = auVar181[3];
        auVar101 = pmovzxwd(auVar181,auVar181);
        auVar181._8_8_ = auVar101._8_8_;
        auVar181._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar27 & 8) != 0) {
        bVar20 = auVar181[2];
        auVar101 = pmovzxwd(auVar181,auVar181);
        auVar181._8_8_ = auVar101._8_8_;
        auVar181._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  if ((param_12 & 1) != 0) {
    if ((bVar35 & 9) == 0) {
      auVar238 = ZEXT416(*(uint *)(param_13 + uVar28));
    }
    else {
      pbVar18 = (byte *)(param_13 + uVar28);
      if ((uVar27 & 1) != 0) {
        auVar238 = ZEXT116(*pbVar18);
      }
      if ((uVar27 & 2) != 0) {
        auVar76._8_8_ = auVar238._8_8_;
        auVar76._0_8_ = auVar238._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar238 = pblendw(auVar238,auVar76,0xfd);
      }
      if ((uVar27 & 4) != 0) {
        bVar20 = auVar238[3];
        auVar101 = pmovzxwd(auVar238,auVar238);
        auVar238._8_8_ = auVar101._8_8_;
        auVar238._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar27 & 8) != 0) {
        bVar20 = auVar238[2];
        auVar101 = pmovzxwd(auVar238,auVar238);
        auVar238._8_8_ = auVar101._8_8_;
        auVar238._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar57 = (undefined1  [16])0x0;
  auVar192 = ZEXT816(0);
  if ((param_15 & 1) != 0) {
    if ((bVar35 & 9) == 0) {
      auVar192 = ZEXT416(*(uint *)(param_16 + uVar28));
    }
    else {
      pbVar18 = (byte *)(param_16 + uVar28);
      if ((uVar27 & 1) != 0) {
        auVar192 = ZEXT116(*pbVar18);
      }
      if ((uVar27 & 2) != 0) {
        auVar113._8_8_ = auVar192._8_8_;
        auVar113._0_8_ = auVar192._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar192 = pblendw(auVar192,auVar113,0xfd);
      }
      if ((uVar27 & 4) != 0) {
        bVar20 = auVar192[3];
        auVar101 = pmovzxwd(auVar192,auVar192);
        auVar192._8_8_ = auVar101._8_8_;
        auVar192._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar27 & 8) != 0) {
        bVar20 = auVar192[2];
        auVar101 = pmovzxwd(auVar192,auVar192);
        auVar192._8_8_ = auVar101._8_8_;
        auVar192._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  if ((param_18 & 1) != 0) {
    if ((bVar35 & 9) == 0) {
      auVar57 = ZEXT416(*(uint *)(param_19 + uVar28));
    }
    else {
      pbVar18 = (byte *)(param_19 + uVar28);
      if ((uVar27 & 1) != 0) {
        auVar57 = ZEXT116(*pbVar18);
      }
      if ((uVar27 & 2) != 0) {
        auVar114._8_8_ = auVar57._8_8_;
        auVar114._0_8_ = auVar57._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar57 = pblendw(auVar57,auVar114,0xfd);
      }
      if ((uVar27 & 4) != 0) {
        bVar20 = auVar57[3];
        auVar101 = pmovzxwd(auVar57,auVar57);
        auVar57._8_8_ = auVar101._8_8_;
        auVar57._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar27 & 8) != 0) {
        bVar20 = auVar57[2];
        auVar101 = pmovzxwd(auVar57,auVar57);
        auVar57._8_8_ = auVar101._8_8_;
        auVar57._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar107 = (undefined1  [16])0x0;
  if ((param_21 & 1) != 0) {
    if ((bVar35 & 9) == 0) {
      auVar107 = ZEXT416(*(uint *)(param_22 + uVar28));
    }
    else {
      pbVar18 = (byte *)(param_22 + uVar28);
      if ((uVar27 & 1) != 0) {
        auVar107 = ZEXT116(*pbVar18);
      }
      if ((uVar27 & 2) != 0) {
        auVar129._8_8_ = auVar107._8_8_;
        auVar129._0_8_ = auVar107._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar107 = pblendw(auVar107,auVar129,0xfd);
      }
      if ((uVar27 & 4) != 0) {
        bVar20 = auVar107[3];
        auVar101 = pmovzxwd(auVar107,auVar107);
        auVar107._8_8_ = auVar101._8_8_;
        auVar107._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar27 & 8) != 0) {
        bVar20 = auVar107[2];
        auVar101 = pmovzxwd(auVar107,auVar107);
        auVar107._8_8_ = auVar101._8_8_;
        auVar107._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar222._0_4_ = auVar220._0_4_ << 4;
  auVar222._4_4_ = auVar220._4_4_ << 4;
  auVar222._8_4_ = auVar220._8_4_ << 4;
  auVar222._12_4_ = auVar220._12_4_ << 4;
  auVar101 = auVar64 & auVar222;
  pfVar33 = (float *)(auVar101._0_4_ + param_1);
  if ((bVar41 & 1) != 0) {
    local_5d8 = *pfVar33;
  }
  if ((bVar41 & 2) != 0) {
    fStack_5d4 = *(float *)(param_1 + auVar101._4_4_);
  }
  auVar119 = ___xmm_00000004000000040000000400000004 & auVar64;
  if ((bVar41 & 4) != 0) {
    fStack_5d0 = *(float *)(param_1 + auVar101._8_4_);
  }
  uVar22 = (ulonglong)auVar119._0_4_;
  if ((char)bVar41 < '\0') {
    fStack_5cc = *(float *)(param_1 + auVar101._12_4_);
  }
  if ((bVar41 & 1) != 0) {
    local_5c8 = *(float *)(uVar22 + (longlong)pfVar33);
  }
  local_718 = (ulonglong)auVar119._4_4_;
  lVar39 = auVar101._4_4_ + param_1;
  uVar23 = (ulonglong)auVar119._8_4_;
  if ((bVar41 & 2) != 0) {
    fStack_5c4 = *(float *)(local_718 + lVar39);
  }
  auVar237 = ___xmm_00000008000000080000000800000008 & auVar64;
  lVar21 = auVar101._8_4_ + param_1;
  uVar24 = (ulonglong)auVar119._12_4_;
  if ((bVar41 & 4) != 0) {
    fStack_5c0 = *(float *)(uVar23 + lVar21);
  }
  uVar25 = (ulonglong)auVar237._0_4_;
  lVar31 = auVar101._12_4_ + param_1;
  if ((char)bVar41 < '\0') {
    fStack_5bc = *(float *)(uVar24 + lVar31);
  }
  if ((bVar41 & 1) != 0) {
    local_5b8 = *(float *)(uVar25 + (longlong)pfVar33);
  }
  local_6f8 = (ulonglong)auVar237._4_4_;
  local_578._0_4_ = auVar163._0_4_ << 4;
  local_578._4_4_ = auVar163._4_4_ << 4;
  local_578._8_4_ = auVar163._8_4_ << 4;
  local_578._12_4_ = auVar163._12_4_ << 4;
  uVar26 = (ulonglong)auVar237._8_4_;
  if ((bVar41 & 2) != 0) {
    fStack_5b4 = *(float *)(local_6f8 + lVar39);
  }
  auVar101 = auVar64 & local_578;
  uVar37 = (ulonglong)auVar237._12_4_;
  if ((bVar41 & 4) != 0) {
    fStack_5b0 = *(float *)(uVar26 + lVar21);
  }
  if ((char)bVar41 < '\0') {
    fStack_5ac = *(float *)(uVar37 + lVar31);
  }
  lVar34 = (longlong)auVar101._0_4_;
  if ((bVar41 & 1) != 0) {
    local_608 = *(float *)(param_1 + lVar34);
  }
  lVar30 = (longlong)auVar101._4_4_;
  iVar97 = auVar101._8_4_;
  iVar78 = auVar101._12_4_;
  if ((bVar41 & 2) == 0) {
    if ((bVar41 & 4) == 0) goto LAB_1409b8032;
LAB_1409b82c5:
    fStack_600 = *(float *)(param_1 + iVar97);
    if ((char)bVar41 < '\0') goto LAB_1409b82df;
LAB_1409b803e:
    if ((bVar41 & 1) == 0) goto LAB_1409b804b;
LAB_1409b82fa:
    local_5f8 = *(float *)(uVar22 + lVar34 + param_1);
    if ((bVar41 & 2) != 0) goto LAB_1409b831e;
LAB_1409b8058:
    lVar32 = iVar97 + param_1;
    if ((bVar41 & 4) == 0) goto LAB_1409b8065;
LAB_1409b8341:
    fStack_5f0 = *(float *)(uVar23 + lVar32);
    lVar29 = iVar78 + param_1;
    if ((char)bVar41 < '\0') goto LAB_1409b8363;
LAB_1409b8071:
    if ((bVar41 & 1) == 0) goto LAB_1409b807b;
LAB_1409b8383:
    local_5e8 = *(float *)(uVar25 + lVar34 + param_1);
    local_558._0_4_ = auVar153._0_4_ << 4;
    local_558._4_4_ = auVar153._4_4_ << 4;
    local_558._8_4_ = auVar153._8_4_ << 4;
    local_558._12_4_ = auVar153._12_4_ << 4;
    if ((bVar41 & 2) != 0) goto LAB_1409b83a9;
LAB_1409b808a:
    auVar101 = auVar64 & local_558;
    if ((bVar41 & 4) == 0) goto LAB_1409b809d;
LAB_1409b83d2:
    fStack_5e0 = *(float *)(uVar26 + lVar32);
    iVar97 = auVar101._0_4_;
  }
  else {
    fStack_604 = *(float *)(param_1 + lVar30);
    if ((bVar41 & 4) != 0) goto LAB_1409b82c5;
LAB_1409b8032:
    if (-1 < (char)bVar41) goto LAB_1409b803e;
LAB_1409b82df:
    fStack_5fc = *(float *)(param_1 + iVar78);
    if ((bVar41 & 1) != 0) goto LAB_1409b82fa;
LAB_1409b804b:
    if ((bVar41 & 2) == 0) goto LAB_1409b8058;
LAB_1409b831e:
    fStack_5f4 = *(float *)(local_718 + lVar30 + param_1);
    lVar32 = iVar97 + param_1;
    if ((bVar41 & 4) != 0) goto LAB_1409b8341;
LAB_1409b8065:
    lVar29 = iVar78 + param_1;
    if (-1 < (char)bVar41) goto LAB_1409b8071;
LAB_1409b8363:
    fStack_5ec = *(float *)(uVar24 + lVar29);
    if ((bVar41 & 1) != 0) goto LAB_1409b8383;
LAB_1409b807b:
    local_558._0_4_ = auVar153._0_4_ << 4;
    local_558._4_4_ = auVar153._4_4_ << 4;
    local_558._8_4_ = auVar153._8_4_ << 4;
    local_558._12_4_ = auVar153._12_4_ << 4;
    if ((bVar41 & 2) == 0) goto LAB_1409b808a;
LAB_1409b83a9:
    fStack_5e4 = *(float *)(local_6f8 + lVar30 + param_1);
    auVar101 = auVar64 & local_558;
    if ((bVar41 & 4) != 0) goto LAB_1409b83d2;
LAB_1409b809d:
    iVar97 = auVar101._0_4_;
  }
  if ((char)bVar41 < '\0') {
    fStack_5dc = *(float *)(uVar37 + lVar29);
  }
  lVar36 = (longlong)iVar97;
  if ((bVar41 & 1) != 0) {
    local_638 = *(float *)(param_1 + lVar36);
  }
  lVar38 = (longlong)auVar101._4_4_;
  if ((bVar41 & 2) != 0) {
    fStack_634 = *(float *)(param_1 + lVar38);
  }
  if ((bVar41 & 4) != 0) {
    fStack_630 = *(float *)(param_1 + auVar101._8_4_);
  }
  if ((char)bVar41 < '\0') {
    fStack_62c = *(float *)(param_1 + auVar101._12_4_);
  }
  if ((bVar41 & 1) != 0) {
    local_628 = *(float *)(uVar22 + lVar36 + param_1);
  }
  if ((bVar41 & 2) != 0) {
    fStack_624 = *(float *)(local_718 + lVar38 + param_1);
  }
  auVar119 = ___xmm_0000000c0000000c0000000c0000000c & auVar64;
  lVar43 = auVar101._8_4_ + param_1;
  if ((bVar41 & 4) != 0) {
    fStack_620 = *(float *)(uVar23 + lVar43);
  }
  uVar22 = (ulonglong)auVar119._0_4_;
  lVar40 = auVar101._12_4_ + param_1;
  if ((char)bVar41 < '\0') {
    fStack_61c = *(float *)(uVar24 + lVar40);
  }
  if ((bVar41 & 1) != 0) {
    local_618 = *(float *)(uVar25 + lVar36 + param_1);
  }
  uVar24 = (ulonglong)auVar119._4_4_;
  uVar23 = (ulonglong)auVar119._8_4_;
  if ((bVar41 & 2) != 0) {
    fStack_614 = *(float *)(local_6f8 + lVar38 + param_1);
  }
  uVar25 = (ulonglong)auVar119._12_4_;
  auVar101 = insertps(ZEXT416(*(uint *)(uVar22 + (longlong)pfVar33)),
                      *(undefined4 *)(uVar24 + lVar39),0x10);
  auVar119 = insertps(ZEXT416(*(uint *)(uVar22 + lVar34 + param_1)),
                      *(undefined4 *)(uVar24 + lVar30 + param_1),0x10);
  auVar237 = insertps(ZEXT416(*(uint *)(uVar22 + lVar36 + param_1)),
                      *(undefined4 *)(uVar24 + lVar38 + param_1),0x10);
  if ((bVar41 & 4) != 0) {
    fStack_610 = *(float *)(uVar26 + lVar43);
  }
  auVar101 = insertps(auVar101,*(undefined4 *)(uVar23 + lVar21),0x20);
  auVar119 = insertps(auVar119,*(undefined4 *)(uVar23 + lVar32),0x20);
  auVar237 = insertps(auVar237,*(undefined4 *)(uVar23 + lVar43),0x20);
  if (((char)bVar41 < '\0') && (fStack_60c = *(float *)(uVar37 + lVar40), (bVar35 & 0xf) == 0)) {
    lVar39 = uVar28 * 0x10;
    auVar140 = *(undefined1 (*) [16])(param_4 + lVar39);
    puVar4 = (undefined4 *)(param_4 + 0x10 + lVar39);
    auVar46 = *(undefined1 (*) [16])(param_4 + 0x20 + lVar39);
    puVar5 = (undefined4 *)(param_4 + 0x30 + lVar39);
    auVar205._8_4_ = auVar140._4_4_;
    auVar205._0_8_ = auVar140._0_8_;
    auVar205._12_4_ = puVar4[1];
    local_128._4_4_ = *puVar4;
    local_128._0_4_ = auVar140._0_4_;
    auVar203._0_8_ = CONCAT44(puVar4[2],auVar140._8_4_);
    auVar203._8_4_ = auVar140._12_4_;
    auVar203._12_4_ = puVar4[3];
    auVar142._0_8_ = auVar46._0_8_;
    auVar142._8_4_ = auVar46._4_4_;
    auVar142._12_4_ = puVar5[1];
    local_118._8_8_ = auVar142._8_8_;
    local_128._12_4_ = *puVar5;
    local_128._8_4_ = auVar46._0_4_;
    auVar165._0_8_ = CONCAT44(puVar5[2],auVar46._8_4_);
    auVar165._8_4_ = auVar46._12_4_;
    auVar165._12_4_ = puVar5[3];
    local_118._0_8_ = auVar205._8_8_;
    local_108._8_8_ = auVar165._0_8_;
    local_108._0_8_ = auVar203._0_8_;
    local_f8._8_8_ = auVar165._8_8_;
    local_f8._0_8_ = auVar203._8_8_;
  }
  else {
    auVar123._0_4_ = ___xmm_00000030000000200000001000000000 & auVar64._0_4_;
    auVar123._4_4_ = _UNK_150b511c4 & auVar64._4_4_;
    auVar123._8_4_ = _UNK_150b511c8 & auVar64._8_4_;
    auVar123._12_4_ = _UNK_150b511cc & auVar64._12_4_;
    lVar21 = extractps(auVar123,1);
    lVar34 = extractps(auVar123,2);
    lVar30 = extractps(auVar123,3);
    lVar39 = param_4 + uVar28 * 0x10;
    auVar140 = insertps(ZEXT416(*(uint *)(param_4 + uVar28 * 0x10)),*(undefined4 *)(lVar21 + lVar39)
                        ,0x10);
    auVar140 = insertps(auVar140,*(undefined4 *)(lVar34 + lVar39),0x20);
    local_128 = insertps(auVar140,*(undefined4 *)(lVar30 + lVar39),0x30);
    auVar140 = ___xmm_00000034000000240000001400000004 & auVar64;
    auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar140._0_4_ + lVar39)),
                       *(undefined4 *)((ulonglong)auVar140._4_4_ + lVar39),0x10);
    auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._8_4_ + lVar39),0x20);
    local_118 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._12_4_ + lVar39),0x30);
    auVar140 = ___xmm_00000038000000280000001800000008 & auVar64;
    auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar140._0_4_ + lVar39)),
                       *(undefined4 *)((ulonglong)auVar140._4_4_ + lVar39),0x10);
    auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._8_4_ + lVar39),0x20);
    local_108 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._12_4_ + lVar39),0x30);
    auVar140 = ___xmm_0000003c0000002c0000001c0000000c & auVar64;
    auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar140._0_4_ + lVar39)),
                       *(undefined4 *)((ulonglong)auVar140._4_4_ + lVar39),0x10);
    auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._8_4_ + lVar39),0x20);
    local_f8 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._12_4_ + lVar39),0x30);
  }
  auVar101 = insertps(auVar101,*(undefined4 *)(uVar25 + lVar31),0x30);
  auVar119 = insertps(auVar119,*(undefined4 *)(uVar25 + lVar29),0x30);
  auVar237 = insertps(auVar237,*(undefined4 *)(uVar25 + lVar40),0x30);
  pauVar3 = (undefined1 (*) [16])(param_3 + uVar28 * 0xc);
  if ((bVar35 & 0xf) == 0) {
    auVar140 = *pauVar3;
    auVar46 = pauVar3[1];
    local_158._0_4_ = auVar140._0_4_;
    auVar45 = insertps(auVar46,auVar140,0x8c);
    local_158._4_4_ = auVar140._12_4_;
    local_158._8_4_ = auVar46._8_4_;
    local_158._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
    local_148._4_4_ = auVar46._0_4_;
    local_148._0_4_ = auVar140._4_4_;
    local_148._8_4_ = auVar46._12_4_;
    local_148._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    local_138._0_8_ = auVar45._0_8_;
    local_138._8_4_ = *(undefined4 *)pauVar3[2];
    local_138._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar124._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar64._0_4_;
    auVar124._4_4_ = _UNK_150b50da4 & auVar64._4_4_;
    auVar124._8_4_ = _UNK_150b50da8 & auVar64._8_4_;
    auVar124._12_4_ = _UNK_150b50dac & auVar64._12_4_;
    lVar39 = extractps(auVar124,1);
    lVar21 = extractps(auVar124,2);
    lVar31 = extractps(auVar124,3);
    auVar140 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar39),0x10);
    auVar140 = insertps(auVar140,*(undefined4 *)(*pauVar3 + lVar21),0x20);
    local_158 = insertps(auVar140,*(undefined4 *)(*pauVar3 + lVar31),0x30);
    auVar140 = ___xmm_000000280000001c0000001000000004 & auVar64;
    auVar46 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar140._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar140._4_4_),0x10);
    auVar46 = insertps(auVar46,*(undefined4 *)(*pauVar3 + auVar140._8_4_),0x20);
    local_148 = insertps(auVar46,*(undefined4 *)(*pauVar3 + auVar140._12_4_),0x30);
    auVar140 = ___xmm_0000002c000000200000001400000008 & auVar64;
    auVar46 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar140._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar140._4_4_),0x10);
    auVar46 = insertps(auVar46,*(undefined4 *)(*pauVar3 + auVar140._8_4_),0x20);
    local_138 = insertps(auVar46,*(undefined4 *)(*pauVar3 + auVar140._12_4_),0x30);
  }
  auVar140 = pmovsxbd(auVar57,auVar57);
  auVar58._0_4_ = auVar140._0_4_ << 2;
  auVar58._4_4_ = auVar140._4_4_ << 2;
  auVar58._8_4_ = auVar140._8_4_ << 2;
  auVar58._12_4_ = auVar140._12_4_ << 2;
  auVar58 = auVar58 & auVar64;
  auVar140 = insertps(ZEXT416(*(uint *)(param_20 + auVar58._0_4_)),
                      *(undefined4 *)(param_20 + auVar58._4_4_),0x10);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_20 + auVar58._8_4_),0x20);
  local_258 = insertps(auVar140,*(undefined4 *)(param_20 + auVar58._12_4_),0x30);
  auVar140 = pmovsxbd(auVar107,auVar107);
  auVar108._0_4_ = auVar140._0_4_ << 2;
  auVar108._4_4_ = auVar140._4_4_ << 2;
  auVar108._8_4_ = auVar140._8_4_ << 2;
  auVar108._12_4_ = auVar140._12_4_ << 2;
  auVar108 = auVar108 & auVar64;
  auVar140 = insertps(ZEXT416(*(uint *)(param_23 + auVar108._0_4_)),
                      *(undefined4 *)(param_23 + auVar108._4_4_),0x10);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_23 + auVar108._8_4_),0x20);
  local_268 = insertps(auVar140,*(undefined4 *)(param_23 + auVar108._12_4_),0x30);
  local_568 = auVar64;
  local_278 = auVar64;
  auVar59._0_8_ =
       FUN_1409aeab0(&local_5d8,&local_608,&local_638,local_128,local_158,local_258,local_268,
                     &local_228,&local_238,&local_248,&local_478,&local_4a8,&local_188,&local_1b8,
                     &local_1e8,&local_218,local_278);
  auVar59._8_8_ = extraout_XMM0_Qb;
  auVar140 = pmovsxbd(auVar59,auVar181);
  auVar60._0_4_ = auVar140._0_4_ << 2;
  auVar60._4_4_ = auVar140._4_4_ << 2;
  auVar60._8_4_ = auVar140._8_4_ << 2;
  auVar60._12_4_ = auVar140._12_4_ << 2;
  auVar60 = auVar60 & auVar64;
  auVar140 = insertps(ZEXT416(*(uint *)(param_11 + auVar60._0_4_)),
                      *(undefined4 *)(param_11 + auVar60._4_4_),0x10);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_11 + auVar60._8_4_),0x20);
  auVar46 = insertps(auVar140,*(undefined4 *)(param_11 + auVar60._12_4_),0x30);
  auVar140 = pmovsxbd(auVar60,auVar238);
  auVar61._0_4_ = auVar140._0_4_ << 2;
  auVar61._4_4_ = auVar140._4_4_ << 2;
  auVar61._8_4_ = auVar140._8_4_ << 2;
  auVar61._12_4_ = auVar140._12_4_ << 2;
  auVar61 = auVar61 & auVar64;
  auVar140 = insertps(ZEXT416(*(uint *)(param_14 + auVar61._0_4_)),
                      *(undefined4 *)(param_14 + auVar61._4_4_),0x10);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_14 + auVar61._8_4_),0x20);
  auVar45 = insertps(auVar140,*(undefined4 *)(param_14 + auVar61._12_4_),0x30);
  auVar140 = pmovsxbd(auVar61,auVar192);
  auVar62._0_4_ = auVar140._0_4_ << 2;
  auVar62._4_4_ = auVar140._4_4_ << 2;
  auVar62._8_4_ = auVar140._8_4_ << 2;
  auVar62._12_4_ = auVar140._12_4_ << 2;
  auVar62 = auVar62 & auVar64;
  auVar140 = insertps(ZEXT416(*(uint *)(param_17 + auVar62._0_4_)),
                      *(undefined4 *)(param_17 + auVar62._4_4_),0x10);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_17 + auVar62._8_4_),0x20);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_17 + auVar62._12_4_),0x30);
  pauVar3 = (undefined1 (*) [16])(param_6 + uVar28 * 0xc);
  if ((bVar35 & 0xf) == 0) {
    auVar138 = *pauVar3;
    auVar151 = pauVar3[1];
    auVar211 = insertps(auVar151,auVar138,0x8c);
    local_748._4_4_ = auVar138._12_4_;
    local_748._0_4_ = auVar138._0_4_;
    fStack_740 = (float)auVar151._8_4_;
    fStack_73c = (float)*(undefined4 *)(pauVar3[2] + 4);
    local_6a8._4_4_ = auVar151._0_4_;
    local_6a8._0_4_ = auVar138._4_4_;
    fStack_6a0 = (float)auVar151._12_4_;
    fStack_69c = (float)*(undefined4 *)(pauVar3[2] + 8);
    local_6b8 = auVar211._0_8_;
    fStack_6b0 = (float)*(undefined4 *)pauVar3[2];
    fStack_6ac = (float)*(undefined4 *)(pauVar3[2] + 0xc);
    auVar138 = *(undefined1 (*) [16])(param_5 + uVar28 * 0xc);
    auVar151 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar28 * 0xc);
    puVar4 = (undefined4 *)(param_5 + 0x20 + uVar28 * 0xc);
    auVar65._0_4_ = auVar138._0_4_;
    auVar211 = insertps(auVar151,auVar138,0x8c);
    auVar65._4_4_ = auVar138._12_4_;
    auVar65._8_4_ = auVar151._8_4_;
    auVar65._12_4_ = puVar4[1];
    auVar109._4_4_ = auVar151._0_4_;
    auVar109._0_4_ = auVar138._4_4_;
    auVar109._8_4_ = auVar151._12_4_;
    auVar109._12_4_ = puVar4[2];
    auVar125._0_8_ = auVar211._0_8_;
    auVar125._8_4_ = *puVar4;
    auVar125._12_4_ = puVar4[3];
  }
  else {
    auVar63._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar64._0_4_;
    auVar63._4_4_ = _UNK_150b50da4 & auVar64._4_4_;
    auVar63._8_4_ = _UNK_150b50da8 & auVar64._8_4_;
    auVar63._12_4_ = _UNK_150b50dac & auVar64._12_4_;
    lVar21 = extractps(auVar63,1);
    lVar31 = extractps(auVar63,2);
    param_6 = extractps(auVar63,3);
    auVar138 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar21),0x10);
    auVar138 = insertps(auVar138,*(undefined4 *)(*pauVar3 + lVar31),0x20);
    _local_748 = insertps(auVar138,*(undefined4 *)(*pauVar3 + param_6),0x30);
    auVar138 = ___xmm_000000280000001c0000001000000004 & auVar64;
    auVar151 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar138._0_4_)),
                        *(undefined4 *)(*pauVar3 + auVar138._4_4_),0x10);
    auVar151 = insertps(auVar151,*(undefined4 *)(*pauVar3 + auVar138._8_4_),0x20);
    _local_6a8 = insertps(auVar151,*(undefined4 *)(*pauVar3 + auVar138._12_4_),0x30);
    auVar64 = ___xmm_0000002c000000200000001400000008 & auVar64;
    auVar151 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar64._0_4_)),
                        *(undefined4 *)(*pauVar3 + auVar64._4_4_),0x10);
    auVar151 = insertps(auVar151,*(undefined4 *)(*pauVar3 + auVar64._8_4_),0x20);
    _local_6b8 = insertps(auVar151,*(undefined4 *)(*pauVar3 + auVar64._12_4_),0x30);
    lVar39 = param_5 + uVar28 * 0xc;
    auVar151 = insertps(ZEXT416(*(uint *)(param_5 + uVar28 * 0xc)),*(undefined4 *)(lVar21 + lVar39),
                        0x10);
    auVar151 = insertps(auVar151,*(undefined4 *)(lVar31 + lVar39),0x20);
    auVar65 = insertps(auVar151,*(undefined4 *)(param_6 + lVar39),0x30);
    auVar151 = insertps(ZEXT416(*(uint *)((ulonglong)auVar138._0_4_ + lVar39)),
                        *(undefined4 *)((ulonglong)auVar138._4_4_ + lVar39),0x10);
    auVar151 = insertps(auVar151,*(undefined4 *)((ulonglong)auVar138._8_4_ + lVar39),0x20);
    auVar109 = insertps(auVar151,*(undefined4 *)((ulonglong)auVar138._12_4_ + lVar39),0x30);
    auVar138 = insertps(ZEXT416(*(uint *)((ulonglong)auVar64._0_4_ + lVar39)),
                        *(undefined4 *)((ulonglong)auVar64._4_4_ + lVar39),0x10);
    auVar138 = insertps(auVar138,*(undefined4 *)((ulonglong)auVar64._8_4_ + lVar39),0x20);
    auVar125 = insertps(auVar138,*(undefined4 *)((ulonglong)auVar64._12_4_ + lVar39),0x30);
  }
  fVar162 = auVar140._0_4_ * auVar125._0_4_;
  fVar207 = auVar140._4_4_ * auVar125._4_4_;
  fVar167 = auVar140._8_4_ * auVar125._8_4_;
  fVar208 = auVar140._12_4_ * auVar125._12_4_;
  fVar100 = auVar46._0_4_ * auVar109._0_4_;
  fVar115 = auVar46._4_4_ * auVar109._4_4_;
  fVar189 = auVar46._8_4_ * auVar109._8_4_;
  fVar194 = auVar46._12_4_ * auVar109._12_4_;
  fVar196 = auVar45._0_4_ * auVar65._0_4_;
  fVar198 = auVar45._4_4_ * auVar65._4_4_;
  fVar204 = auVar45._8_4_ * auVar65._8_4_;
  fVar206 = auVar45._12_4_ * auVar65._12_4_;
  auVar176._0_4_ = param_7 * fVar196 * param_7;
  auVar176._4_4_ = param_7 * fVar198 * param_7;
  auVar176._8_4_ = param_7 * fVar204 * param_7;
  auVar176._12_4_ = param_7 * fVar206 * param_7;
  auVar140 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar176);
  local_768 = auVar101._0_4_;
  fStack_764 = auVar101._4_4_;
  fStack_760 = auVar101._8_4_;
  fStack_75c = auVar101._12_4_;
  local_718._0_4_ = auVar119._0_4_;
  local_718._4_4_ = auVar119._4_4_;
  fStack_710 = auVar119._8_4_;
  fStack_70c = auVar119._12_4_;
  local_738 = auVar237._0_4_;
  fStack_734 = auVar237._4_4_;
  fStack_730 = auVar237._8_4_;
  fStack_72c = auVar237._12_4_;
  auVar177._0_4_ =
       (local_488 * local_488 + local_498 * local_498 + local_4a8 * local_4a8) * local_738 +
       (local_458 * local_458 + local_468 * local_468 + local_478 * local_478) * (float)local_718 +
       ((local_458 + local_488) * (local_458 + local_488) +
       (local_468 + local_498) * (local_468 + local_498) +
       (local_478 + local_4a8) * (local_478 + local_4a8)) * local_768 + auVar140._0_4_;
  auVar177._4_4_ =
       (fStack_484 * fStack_484 + fStack_494 * fStack_494 + fStack_4a4 * fStack_4a4) * fStack_734 +
       (fStack_454 * fStack_454 + fStack_464 * fStack_464 + fStack_474 * fStack_474) *
       local_718._4_4_ +
       ((fStack_454 + fStack_484) * (fStack_454 + fStack_484) +
       (fStack_464 + fStack_494) * (fStack_464 + fStack_494) +
       (fStack_474 + fStack_4a4) * (fStack_474 + fStack_4a4)) * fStack_764 + auVar140._4_4_;
  auVar177._8_4_ =
       (fStack_480 * fStack_480 + fStack_490 * fStack_490 + fStack_4a0 * fStack_4a0) * fStack_730 +
       (fStack_450 * fStack_450 + fStack_460 * fStack_460 + fStack_470 * fStack_470) * fStack_710 +
       ((fStack_450 + fStack_480) * (fStack_450 + fStack_480) +
       (fStack_460 + fStack_490) * (fStack_460 + fStack_490) +
       (fStack_470 + fStack_4a0) * (fStack_470 + fStack_4a0)) * fStack_760 + auVar140._8_4_;
  auVar177._12_4_ =
       (fStack_47c * fStack_47c + fStack_48c * fStack_48c + fStack_49c * fStack_49c) * fStack_72c +
       (fStack_44c * fStack_44c + fStack_45c * fStack_45c + fStack_46c * fStack_46c) * fStack_70c +
       ((fStack_44c + fStack_47c) * (fStack_44c + fStack_47c) +
       (fStack_45c + fStack_48c) * (fStack_45c + fStack_48c) +
       (fStack_46c + fStack_49c) * (fStack_46c + fStack_49c)) * fStack_75c + auVar140._12_4_;
  auVar66._0_4_ = local_228 - auVar140._0_4_ * (float)local_748._0_4_;
  auVar66._4_4_ = fStack_224 - auVar140._4_4_ * (float)local_748._4_4_;
  auVar66._8_4_ = fStack_220 - auVar140._8_4_ * fStack_740;
  auVar66._12_4_ = fStack_21c - auVar140._12_4_ * fStack_73c;
  auVar140 = divps(auVar66,auVar177);
  fVar196 = (float)(-(uint)(param_8 <= fVar196) & auVar140._0_4_);
  fVar198 = (float)(-(uint)(param_8 <= fVar198) & auVar140._4_4_);
  fVar204 = (float)(-(uint)(param_8 <= fVar204) & auVar140._8_4_);
  fVar206 = (float)(-(uint)(param_8 <= fVar206) & auVar140._12_4_);
  auVar67._0_4_ = param_7 * fVar100 * param_7;
  auVar67._4_4_ = param_7 * fVar115 * param_7;
  auVar67._8_4_ = param_7 * fVar189 * param_7;
  auVar67._12_4_ = param_7 * fVar194 * param_7;
  auVar140 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar67);
  auVar213._0_4_ =
       (local_198 * local_198 + local_1a8 * local_1a8 + local_1b8 * local_1b8) * local_738 +
       (local_168 * local_168 + local_178 * local_178 + local_188 * local_188) * (float)local_718 +
       ((local_168 + local_198) * (local_168 + local_198) +
       (local_178 + local_1a8) * (local_178 + local_1a8) +
       (local_188 + local_1b8) * (local_188 + local_1b8)) * local_768 + auVar140._0_4_;
  auVar213._4_4_ =
       (fStack_194 * fStack_194 + fStack_1a4 * fStack_1a4 + fStack_1b4 * fStack_1b4) * fStack_734 +
       (fStack_164 * fStack_164 + fStack_174 * fStack_174 + fStack_184 * fStack_184) *
       local_718._4_4_ +
       ((fStack_164 + fStack_194) * (fStack_164 + fStack_194) +
       (fStack_174 + fStack_1a4) * (fStack_174 + fStack_1a4) +
       (fStack_184 + fStack_1b4) * (fStack_184 + fStack_1b4)) * fStack_764 + auVar140._4_4_;
  auVar213._8_4_ =
       (fStack_190 * fStack_190 + fStack_1a0 * fStack_1a0 + fStack_1b0 * fStack_1b0) * fStack_730 +
       (fStack_160 * fStack_160 + fStack_170 * fStack_170 + fStack_180 * fStack_180) * fStack_710 +
       ((fStack_160 + fStack_190) * (fStack_160 + fStack_190) +
       (fStack_170 + fStack_1a0) * (fStack_170 + fStack_1a0) +
       (fStack_180 + fStack_1b0) * (fStack_180 + fStack_1b0)) * fStack_760 + auVar140._8_4_;
  auVar213._12_4_ =
       (fStack_18c * fStack_18c + fStack_19c * fStack_19c + fStack_1ac * fStack_1ac) * fStack_72c +
       (fStack_15c * fStack_15c + fStack_16c * fStack_16c + fStack_17c * fStack_17c) * fStack_70c +
       ((fStack_15c + fStack_18c) * (fStack_15c + fStack_18c) +
       (fStack_16c + fStack_19c) * (fStack_16c + fStack_19c) +
       (fStack_17c + fStack_1ac) * (fStack_17c + fStack_1ac)) * fStack_75c + auVar140._12_4_;
  auVar178._0_4_ = local_238 - auVar140._0_4_ * (float)local_6a8._0_4_;
  auVar178._4_4_ = fStack_234 - auVar140._4_4_ * (float)local_6a8._4_4_;
  auVar178._8_4_ = fStack_230 - auVar140._8_4_ * fStack_6a0;
  auVar178._12_4_ = fStack_22c - auVar140._12_4_ * fStack_69c;
  auVar140 = divps(auVar178,auVar213);
  fVar100 = (float)(-(uint)(param_8 <= fVar100) & auVar140._0_4_);
  fVar115 = (float)(-(uint)(param_8 <= fVar115) & auVar140._4_4_);
  fVar189 = (float)(-(uint)(param_8 <= fVar189) & auVar140._8_4_);
  fVar194 = (float)(-(uint)(param_8 <= fVar194) & auVar140._12_4_);
  auVar179._0_4_ = param_7 * fVar162 * param_7;
  auVar179._4_4_ = param_7 * fVar207 * param_7;
  auVar179._8_4_ = param_7 * fVar167 * param_7;
  auVar179._12_4_ = param_7 * fVar208 * param_7;
  auVar140 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar179);
  auVar190._0_4_ =
       (local_1f8 * local_1f8 + local_208 * local_208 + local_218 * local_218) * local_738 +
       (local_1c8 * local_1c8 + local_1d8 * local_1d8 + local_1e8 * local_1e8) * (float)local_718 +
       ((local_1c8 + local_1f8) * (local_1c8 + local_1f8) +
       (local_1d8 + local_208) * (local_1d8 + local_208) +
       (local_1e8 + local_218) * (local_1e8 + local_218)) * local_768 + auVar140._0_4_;
  auVar190._4_4_ =
       (fStack_1f4 * fStack_1f4 + fStack_204 * fStack_204 + fStack_214 * fStack_214) * fStack_734 +
       (fStack_1c4 * fStack_1c4 + fStack_1d4 * fStack_1d4 + fStack_1e4 * fStack_1e4) *
       local_718._4_4_ +
       ((fStack_1c4 + fStack_1f4) * (fStack_1c4 + fStack_1f4) +
       (fStack_1d4 + fStack_204) * (fStack_1d4 + fStack_204) +
       (fStack_1e4 + fStack_214) * (fStack_1e4 + fStack_214)) * fStack_764 + auVar140._4_4_;
  auVar190._8_4_ =
       (fStack_1f0 * fStack_1f0 + fStack_200 * fStack_200 + fStack_210 * fStack_210) * fStack_730 +
       (fStack_1c0 * fStack_1c0 + fStack_1d0 * fStack_1d0 + fStack_1e0 * fStack_1e0) * fStack_710 +
       ((fStack_1c0 + fStack_1f0) * (fStack_1c0 + fStack_1f0) +
       (fStack_1d0 + fStack_200) * (fStack_1d0 + fStack_200) +
       (fStack_1e0 + fStack_210) * (fStack_1e0 + fStack_210)) * fStack_760 + auVar140._8_4_;
  auVar190._12_4_ =
       (fStack_1ec * fStack_1ec + fStack_1fc * fStack_1fc + fStack_20c * fStack_20c) * fStack_72c +
       (fStack_1bc * fStack_1bc + fStack_1cc * fStack_1cc + fStack_1dc * fStack_1dc) * fStack_70c +
       ((fStack_1bc + fStack_1ec) * (fStack_1bc + fStack_1ec) +
       (fStack_1cc + fStack_1fc) * (fStack_1cc + fStack_1fc) +
       (fStack_1dc + fStack_20c) * (fStack_1dc + fStack_20c)) * fStack_75c + auVar140._12_4_;
  auVar209._0_4_ = local_248 - auVar140._0_4_ * (float)local_6b8._0_4_;
  auVar209._4_4_ = fStack_244 - auVar140._4_4_ * (float)local_6b8._4_4_;
  auVar209._8_4_ = fStack_240 - auVar140._8_4_ * fStack_6b0;
  auVar209._12_4_ = fStack_23c - auVar140._12_4_ * fStack_6ac;
  auVar140 = divps(auVar209,auVar190);
  fVar162 = (float)(-(uint)(param_8 <= fVar162) & auVar140._0_4_);
  fVar207 = (float)(-(uint)(param_8 <= fVar207) & auVar140._4_4_);
  fVar167 = (float)(-(uint)(param_8 <= fVar167) & auVar140._8_4_);
  fVar208 = (float)(-(uint)(param_8 <= fVar208) & auVar140._12_4_);
  auVar126._0_4_ = (float)local_748._0_4_ + fVar196;
  auVar126._4_4_ = (float)local_748._4_4_ + fVar198;
  auVar126._8_4_ = fStack_740 + fVar204;
  auVar126._12_4_ = fStack_73c + fVar206;
  auVar223._0_4_ = (float)local_6a8._0_4_ + fVar100;
  auVar223._4_4_ = (float)local_6a8._4_4_ + fVar115;
  auVar223._8_4_ = fStack_6a0 + fVar189;
  auVar223._12_4_ = fStack_69c + fVar194;
  auVar202._0_4_ = (float)local_6b8._0_4_ + fVar162;
  auVar202._4_4_ = (float)local_6b8._4_4_ + fVar207;
  auVar202._8_4_ = fStack_6b0 + fVar167;
  auVar202._12_4_ = fStack_6ac + fVar208;
  if ((bVar35 & 0xf) == 0) {
    auVar180._4_4_ = auVar126._4_4_;
    auVar180._0_4_ = auVar126._0_4_;
    auVar180._8_4_ = auVar126._8_4_;
    auVar180._12_4_ = auVar126._12_4_;
    auVar140 = insertps(auVar126,auVar223,0x30);
    auVar191._4_4_ = auVar223._8_4_;
    auVar191._0_4_ = auVar223._4_4_;
    auVar191._8_4_ = auVar202._0_4_;
    auVar191._12_4_ = auVar202._4_4_;
    auVar140 = insertps(auVar140,auVar202,0x20);
    *(int *)*pauVar3 = auVar140._0_4_;
    *(int *)(*pauVar3 + 4) = auVar140._12_4_;
    *(int *)(*pauVar3 + 8) = auVar140._8_4_;
    *(int *)(*pauVar3 + 0xc) = auVar140._4_4_;
    auVar140 = blendps(auVar191,auVar180,4);
    *(int *)pauVar3[1] = auVar140._0_4_;
    *(int *)(pauVar3[1] + 4) = auVar140._12_4_;
    *(int *)(pauVar3[1] + 8) = auVar140._8_4_;
    *(int *)(pauVar3[1] + 0xc) = auVar140._4_4_;
    *(float *)pauVar3[2] = auVar202._8_4_;
    *(float *)(pauVar3[2] + 4) = auVar126._12_4_;
    *(float *)(pauVar3[2] + 8) = auVar223._12_4_;
    *(float *)(pauVar3[2] + 0xc) = auVar202._12_4_;
  }
  else {
    if ((bVar41 & 1) != 0) {
      *(float *)*pauVar3 = auVar126._0_4_;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar126,1);
      *(undefined8 *)(*pauVar3 + 0xc) = uVar19;
    }
    if ((bVar41 & 4) != 0) {
      uVar19 = extractps(auVar126,2);
      *(undefined8 *)(pauVar3[1] + 8) = uVar19;
    }
    if ((char)bVar41 < '\0') {
      uVar19 = extractps(auVar126,3);
      *(undefined8 *)(pauVar3[2] + 4) = uVar19;
    }
    if ((bVar41 & 1) != 0) {
      *(float *)(*pauVar3 + 4) = auVar223._0_4_;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar223,1);
      *(undefined8 *)pauVar3[1] = uVar19;
    }
    if ((bVar41 & 4) != 0) {
      uVar19 = extractps(auVar223,2);
      *(undefined8 *)(pauVar3[1] + 0xc) = uVar19;
    }
    if ((char)bVar41 < '\0') {
      uVar19 = extractps(auVar223,3);
      *(undefined8 *)(pauVar3[2] + 8) = uVar19;
    }
    if ((bVar41 & 1) != 0) {
      *(float *)(*pauVar3 + 8) = auVar202._0_4_;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar202,1);
      *(undefined8 *)(pauVar3[1] + 4) = uVar19;
    }
    if ((bVar41 & 4) != 0) {
      uVar19 = extractps(auVar202,2);
      *(undefined8 *)pauVar3[2] = uVar19;
    }
    if ((char)bVar41 < '\0') {
      uVar19 = extractps(auVar202,3);
      *(undefined8 *)(pauVar3[2] + 0xc) = uVar19;
    }
  }
  fVar215 = local_1e8 * fVar162 + local_188 * fVar100 + local_478 * fVar196;
  fVar216 = fStack_1e4 * fVar207 + fStack_184 * fVar115 + fStack_474 * fVar198;
  fVar217 = fStack_1e0 * fVar167 + fStack_180 * fVar189 + fStack_470 * fVar204;
  fVar224 = fStack_1dc * fVar208 + fStack_17c * fVar194 + fStack_46c * fVar206;
  fVar186 = local_1d8 * fVar162 + local_178 * fVar100 + local_468 * fVar196;
  fVar77 = fStack_1d4 * fVar207 + fStack_174 * fVar115 + fStack_464 * fVar198;
  fVar210 = fStack_1d0 * fVar167 + fStack_170 * fVar189 + fStack_460 * fVar204;
  fVar214 = fStack_1cc * fVar208 + fStack_16c * fVar194 + fStack_45c * fVar206;
  fVar169 = local_1c8 * fVar162 + local_168 * fVar100 + local_458 * fVar196;
  fVar219 = fStack_1c4 * fVar207 + fStack_164 * fVar115 + fStack_454 * fVar198;
  fVar171 = fStack_1c0 * fVar167 + fStack_160 * fVar189 + fStack_450 * fVar204;
  fVar226 = fStack_1bc * fVar208 + fStack_15c * fVar194 + fStack_44c * fVar206;
  fVar44 = local_218 * fVar162 + local_1b8 * fVar100 + local_4a8 * fVar196;
  fVar150 = fStack_214 * fVar207 + fStack_1b4 * fVar115 + fStack_4a4 * fVar198;
  fVar156 = fStack_210 * fVar167 + fStack_1b0 * fVar189 + fStack_4a0 * fVar204;
  fVar157 = fStack_20c * fVar208 + fStack_1ac * fVar194 + fStack_49c * fVar206;
  fVar159 = local_208 * fVar162 + local_1a8 * fVar100 + local_498 * fVar196;
  fVar172 = fStack_204 * fVar207 + fStack_1a4 * fVar115 + fStack_494 * fVar198;
  fVar182 = fStack_200 * fVar167 + fStack_1a0 * fVar189 + fStack_490 * fVar204;
  fVar184 = fStack_1fc * fVar208 + fStack_19c * fVar194 + fStack_48c * fVar206;
  fVar100 = local_1f8 * fVar162 + local_198 * fVar100 + fVar196 * local_488;
  fVar115 = fStack_1f4 * fVar207 + fStack_194 * fVar115 + fVar198 * fStack_484;
  fVar189 = fStack_1f0 * fVar167 + fStack_190 * fVar189 + fVar204 * fStack_480;
  fVar194 = fStack_1ec * fVar208 + fStack_18c * fVar194 + fVar206 * fStack_47c;
  auVar68._0_4_ = -(uint)(0.0 < local_768) & local_568._0_4_;
  auVar68._4_4_ = -(uint)(0.0 < fStack_764) & local_568._4_4_;
  auVar68._8_4_ = -(uint)(0.0 < fStack_760) & local_568._8_4_;
  auVar68._12_4_ = -(uint)(0.0 < fStack_75c) & local_568._12_4_;
  iVar78 = movmskps((int)param_6,auVar68);
  iVar97 = 0;
  if (iVar78 != 0) {
    bVar41 = (char)((char)iVar78 << 4) >> 4;
    auVar127._0_4_ = (fVar215 + fVar44) * local_768 + local_5d8;
    auVar127._4_4_ = (fVar216 + fVar150) * fStack_764 + fStack_5d4;
    auVar127._8_4_ = (fVar217 + fVar156) * fStack_760 + fStack_5d0;
    auVar127._12_4_ = (fVar224 + fVar157) * fStack_75c + fStack_5cc;
    if ((bVar41 & 1) != 0) {
      *(float *)(param_1 + auVar222._0_4_) = auVar127._0_4_;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar127,1);
      *(undefined8 *)(param_1 + auVar222._4_4_) = uVar19;
    }
    if ((bVar41 & 4) == 0) {
      if (-1 < (char)bVar41) goto LAB_1409b937e;
LAB_1409b966b:
      uVar19 = extractps(auVar127,3);
      *(undefined8 *)(param_1 + auVar222._12_4_) = uVar19;
      auVar110._0_4_ = (fVar186 + fVar159) * local_768 + local_5c8;
      auVar110._4_4_ = (fVar77 + fVar172) * fStack_764 + fStack_5c4;
      auVar110._8_4_ = (fVar210 + fVar182) * fStack_760 + fStack_5c0;
      auVar110._12_4_ = (fVar214 + fVar184) * fStack_75c + fStack_5bc;
      if ((bVar41 & 1) != 0) goto LAB_1409b968e;
LAB_1409b938f:
      if ((bVar41 & 2) == 0) goto LAB_1409b9398;
LAB_1409b96a1:
      uVar19 = extractps(auVar110,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar222._4_4_) = uVar19;
      if ((bVar41 & 4) != 0) goto LAB_1409b96bd;
LAB_1409b93a8:
      fVar196 = (fVar169 + fVar100) * local_768;
      fStack_764 = (fVar219 + fVar115) * fStack_764;
      fStack_760 = (fVar171 + fVar189) * fStack_760;
      fStack_75c = (fVar226 + fVar194) * fStack_75c;
      if (-1 < (char)bVar41) goto LAB_1409b93b4;
LAB_1409b96d5:
      uVar19 = extractps(auVar110,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar222._12_4_) = uVar19;
      auVar128._0_4_ = fVar196 + local_5b8;
      auVar128._4_4_ = fStack_764 + fStack_5b4;
      auVar128._8_4_ = fStack_760 + fStack_5b0;
      auVar128._12_4_ = fStack_75c + fStack_5ac;
    }
    else {
      uVar19 = extractps(auVar127,2);
      *(undefined8 *)(param_1 + auVar222._8_4_) = uVar19;
      if ((char)bVar41 < '\0') goto LAB_1409b966b;
LAB_1409b937e:
      auVar110._0_4_ = (fVar186 + fVar159) * local_768 + local_5c8;
      auVar110._4_4_ = (fVar77 + fVar172) * fStack_764 + fStack_5c4;
      auVar110._8_4_ = (fVar210 + fVar182) * fStack_760 + fStack_5c0;
      auVar110._12_4_ = (fVar214 + fVar184) * fStack_75c + fStack_5bc;
      if ((bVar41 & 1) == 0) goto LAB_1409b938f;
LAB_1409b968e:
      *(int *)(param_1 + 4 + (longlong)auVar222._0_4_) = auVar110._0_4_;
      if ((bVar41 & 2) != 0) goto LAB_1409b96a1;
LAB_1409b9398:
      if ((bVar41 & 4) == 0) goto LAB_1409b93a8;
LAB_1409b96bd:
      uVar19 = extractps(auVar110,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar222._8_4_) = uVar19;
      fVar196 = (fVar169 + fVar100) * local_768;
      fStack_764 = (fVar219 + fVar115) * fStack_764;
      fStack_760 = (fVar171 + fVar189) * fStack_760;
      fStack_75c = (fVar226 + fVar194) * fStack_75c;
      if ((char)bVar41 < '\0') goto LAB_1409b96d5;
LAB_1409b93b4:
      auVar128._0_4_ = fVar196 + local_5b8;
      auVar128._4_4_ = fStack_764 + fStack_5b4;
      auVar128._8_4_ = fStack_760 + fStack_5b0;
      auVar128._12_4_ = fStack_75c + fStack_5ac;
    }
    if ((bVar41 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)auVar222._0_4_) = auVar128._0_4_;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar128,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar222._4_4_) = uVar19;
    }
    if ((bVar41 & 4) != 0) {
      uVar19 = extractps(auVar128,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar222._8_4_) = uVar19;
    }
    if ((char)bVar41 < '\0') {
      uVar19 = extractps(auVar128,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar222._12_4_) = uVar19;
    }
    if ((bVar41 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar222._0_4_) = local_768;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar101,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar222._4_4_) = uVar19;
    }
    if ((bVar41 & 4) != 0) {
      uVar19 = extractps(auVar101,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar222._8_4_) = uVar19;
    }
    iVar97 = CONCAT31((int3)((uint)iVar78 >> 8),bVar41);
    if ((char)bVar41 < '\0') {
      uVar19 = extractps(auVar101,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar222._12_4_) = uVar19;
      iVar97 = auVar222._12_4_;
    }
  }
  auVar69._0_4_ = -(uint)(0.0 < (float)local_718) & local_568._0_4_;
  auVar69._4_4_ = -(uint)(0.0 < local_718._4_4_) & local_568._4_4_;
  auVar69._8_4_ = -(uint)(0.0 < fStack_710) & local_568._8_4_;
  auVar69._12_4_ = -(uint)(0.0 < fStack_70c) & local_568._12_4_;
  iVar78 = movmskps(iVar97,auVar69);
  iVar97 = 0;
  if (iVar78 == 0) goto LAB_1409b94f3;
  bVar41 = (char)((char)iVar78 << 4) >> 4;
  auVar70._0_4_ = local_608 - fVar215 * (float)local_718;
  auVar70._4_4_ = fStack_604 - fVar216 * local_718._4_4_;
  auVar70._8_4_ = fStack_600 - fVar217 * fStack_710;
  auVar70._12_4_ = fStack_5fc - fVar224 * fStack_70c;
  if ((bVar41 & 1) == 0) {
    if ((bVar41 & 2) == 0) goto LAB_1409b9453;
LAB_1409b97bc:
    uVar19 = extractps(auVar70,1);
    *(undefined8 *)(param_1 + (int)local_578._4_4_) = uVar19;
    if ((bVar41 & 4) != 0) goto LAB_1409b97d7;
LAB_1409b9463:
    if (-1 < (char)bVar41) goto LAB_1409b9477;
LAB_1409b97f6:
    uVar19 = extractps(auVar70,3);
    *(undefined8 *)(param_1 + (int)local_578._12_4_) = uVar19;
    auVar111._0_4_ = local_5f8 - fVar186 * (float)local_718;
    auVar111._4_4_ = fStack_5f4 - fVar77 * local_718._4_4_;
    auVar111._8_4_ = fStack_5f0 - fVar210 * fStack_710;
    auVar111._12_4_ = fStack_5ec - fVar214 * fStack_70c;
    if ((bVar41 & 1) != 0) goto LAB_1409b9815;
LAB_1409b9484:
    if ((bVar41 & 2) == 0) goto LAB_1409b948d;
LAB_1409b9828:
    uVar19 = extractps(auVar111,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._4_4_) = uVar19;
    if ((bVar41 & 4) != 0) goto LAB_1409b983d;
LAB_1409b9496:
    if (-1 < (char)bVar41) goto LAB_1409b94aa;
LAB_1409b985d:
    uVar19 = extractps(auVar111,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._12_4_) = uVar19;
    auVar71._0_4_ = local_5e8 - fVar169 * (float)local_718;
    auVar71._4_4_ = fStack_5e4 - fVar219 * local_718._4_4_;
    auVar71._8_4_ = fStack_5e0 - fVar171 * fStack_710;
    auVar71._12_4_ = fStack_5dc - fVar226 * fStack_70c;
  }
  else {
    *(float *)(param_1 + (int)local_578._0_4_) = auVar70._0_4_;
    if ((bVar41 & 2) != 0) goto LAB_1409b97bc;
LAB_1409b9453:
    if ((bVar41 & 4) == 0) goto LAB_1409b9463;
LAB_1409b97d7:
    uVar19 = extractps(auVar70,2);
    *(undefined8 *)(param_1 + (int)local_578._8_4_) = uVar19;
    if ((char)bVar41 < '\0') goto LAB_1409b97f6;
LAB_1409b9477:
    auVar111._0_4_ = local_5f8 - fVar186 * (float)local_718;
    auVar111._4_4_ = fStack_5f4 - fVar77 * local_718._4_4_;
    auVar111._8_4_ = fStack_5f0 - fVar210 * fStack_710;
    auVar111._12_4_ = fStack_5ec - fVar214 * fStack_70c;
    if ((bVar41 & 1) == 0) goto LAB_1409b9484;
LAB_1409b9815:
    *(int *)(param_1 + 4 + (longlong)(int)local_578._0_4_) = auVar111._0_4_;
    if ((bVar41 & 2) != 0) goto LAB_1409b9828;
LAB_1409b948d:
    if ((bVar41 & 4) == 0) goto LAB_1409b9496;
LAB_1409b983d:
    uVar19 = extractps(auVar111,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._8_4_) = uVar19;
    if ((char)bVar41 < '\0') goto LAB_1409b985d;
LAB_1409b94aa:
    auVar71._0_4_ = local_5e8 - fVar169 * (float)local_718;
    auVar71._4_4_ = fStack_5e4 - fVar219 * local_718._4_4_;
    auVar71._8_4_ = fStack_5e0 - fVar171 * fStack_710;
    auVar71._12_4_ = fStack_5dc - fVar226 * fStack_70c;
  }
  if ((bVar41 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_578._0_4_) = auVar71._0_4_;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar71,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar71,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._8_4_) = uVar19;
  }
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar71,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._12_4_) = uVar19;
  }
  if ((bVar41 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_578._0_4_) = (float)local_718;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar119,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar119,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._8_4_) = uVar19;
  }
  iVar97 = CONCAT31((int3)((uint)iVar78 >> 8),bVar41);
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar119,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._12_4_) = uVar19;
    iVar97 = local_578._12_4_;
  }
LAB_1409b94f3:
  auVar72._0_4_ = -(uint)(0.0 < local_738) & local_568._0_4_;
  auVar72._4_4_ = -(uint)(0.0 < fStack_734) & local_568._4_4_;
  auVar72._8_4_ = -(uint)(0.0 < fStack_730) & local_568._8_4_;
  auVar72._12_4_ = -(uint)(0.0 < fStack_72c) & local_568._12_4_;
  iVar97 = movmskps(iVar97,auVar72);
  if (iVar97 == 0) {
    return;
  }
  bVar41 = (char)((char)iVar97 << 4) >> 4;
  auVar73._0_4_ = local_638 - fVar44 * local_738;
  auVar73._4_4_ = fStack_634 - fVar150 * fStack_734;
  auVar73._8_4_ = fStack_630 - fVar156 * fStack_730;
  auVar73._12_4_ = fStack_62c - fVar157 * fStack_72c;
  if ((bVar41 & 1) != 0) {
    *(float *)(param_1 + (int)local_558._0_4_) = auVar73._0_4_;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar73,1);
    *(undefined8 *)(param_1 + (int)local_558._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar73,2);
    *(undefined8 *)(param_1 + (int)local_558._8_4_) = uVar19;
  }
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar73,3);
    *(undefined8 *)(param_1 + (int)local_558._12_4_) = uVar19;
    auVar112._0_4_ = local_628 - fVar159 * local_738;
    auVar112._4_4_ = fStack_624 - fVar172 * fStack_734;
    auVar112._8_4_ = fStack_620 - fVar182 * fStack_730;
    auVar112._12_4_ = fStack_61c - fVar184 * fStack_72c;
  }
  else {
    auVar112._0_4_ = local_628 - fVar159 * local_738;
    auVar112._4_4_ = fStack_624 - fVar172 * fStack_734;
    auVar112._8_4_ = fStack_620 - fVar182 * fStack_730;
    auVar112._12_4_ = fStack_61c - fVar184 * fStack_72c;
  }
  if ((bVar41 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_558._0_4_) = auVar112._0_4_;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar112,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_558._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar112,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_558._8_4_) = uVar19;
  }
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar112,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_558._12_4_) = uVar19;
    auVar74._0_4_ = local_618 - fVar100 * local_738;
    auVar74._4_4_ = fStack_614 - fVar115 * fStack_734;
    auVar74._8_4_ = fStack_610 - fVar189 * fStack_730;
    auVar74._12_4_ = fStack_60c - fVar194 * fStack_72c;
  }
  else {
    auVar74._0_4_ = local_618 - fVar100 * local_738;
    auVar74._4_4_ = fStack_614 - fVar115 * fStack_734;
    auVar74._8_4_ = fStack_610 - fVar189 * fStack_730;
    auVar74._12_4_ = fStack_60c - fVar194 * fStack_72c;
  }
  if ((bVar41 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_558._0_4_) = auVar74._0_4_;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar74,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_558._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar74,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_558._8_4_) = uVar19;
  }
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar74,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_558._12_4_) = uVar19;
  }
  if ((bVar41 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_558._0_4_) = local_738;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar237,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_558._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar237,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_558._8_4_) = uVar19;
  }
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar237,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_558._12_4_) = uVar19;
  }
  return;
}

// ApplyXPBDStretchBiasConstraintsWithDampingAndMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_CunfCunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4 @ 1409b9d50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDStretchBiasConstraintsWithDampingAndMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_CunfCunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float param_8,float param_9,byte param_10,
               longlong param_11,longlong param_12,byte param_13,longlong param_14,longlong param_15
               ,byte param_16,longlong param_17,longlong param_18,byte param_19,longlong param_20,
               longlong param_21,byte param_22,longlong param_23,longlong param_24,byte param_25,
               longlong param_26,longlong param_27,uint param_28)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  float *pfVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  byte bVar43;
  longlong lVar44;
  byte bVar45;
  int iVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  int iVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar82;
  int iVar90;
  int iVar98;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  int iVar88;
  float fVar89;
  int iVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  int iVar104;
  float fVar105;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar106;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined4 uVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined4 uVar111;
  int iVar129;
  int iVar130;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined4 uVar131;
  float fVar132;
  float fVar156;
  float fVar157;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar158;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  float fVar159;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined4 uVar160;
  float fVar173;
  undefined1 auVar162 [16];
  float fVar161;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  float fVar174;
  float fVar179;
  float fVar180;
  float fVar181;
  float fVar182;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  float fVar183;
  float fVar191;
  float fVar193;
  undefined1 auVar184 [16];
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  float fVar192;
  float fVar198;
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  float fVar199;
  float fVar203;
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  float fVar204;
  undefined1 auVar202 [16];
  float fVar205;
  float fVar206;
  float fVar212;
  float fVar214;
  undefined1 auVar207 [16];
  float fVar213;
  float fVar215;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  float fVar216;
  float fVar217;
  float fVar220;
  float fVar221;
  float fVar222;
  float fVar223;
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  float fVar224;
  float fVar225;
  float fVar227;
  float fVar228;
  float fVar229;
  float fVar230;
  float fVar231;
  float fVar232;
  float fVar233;
  undefined1 auVar226 [16];
  float fVar234;
  float fVar241;
  float fVar242;
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  float fVar243;
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  float fVar252;
  float fVar253;
  float fVar254;
  float fVar255;
  float fVar256;
  float fVar260;
  float fVar261;
  float fVar262;
  undefined1 auVar257 [16];
  float fVar263;
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  float fVar264;
  float fVar265;
  float fVar266;
  float fVar267;
  float fVar268;
  float fVar269;
  float fVar270;
  float fVar271;
  float fVar272;
  float fVar273;
  float fVar274;
  float fVar275;
  float fVar276;
  float local_828;
  float fStack_824;
  float fStack_820;
  float fStack_81c;
  undefined8 local_818;
  float fStack_810;
  float fStack_80c;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  undefined1 local_7d8 [8];
  float fStack_7d0;
  float fStack_7cc;
  undefined1 local_7c8 [8];
  float fStack_7c0;
  float fStack_7bc;
  float local_7a8;
  float fStack_7a4;
  float fStack_7a0;
  float fStack_79c;
  undefined1 local_798 [8];
  float fStack_790;
  float fStack_78c;
  float local_748;
  float fStack_744;
  float fStack_740;
  float fStack_73c;
  undefined1 local_738 [8];
  float fStack_730;
  float fStack_72c;
  undefined4 local_6f8;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  undefined4 local_6c8;
  float local_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  undefined1 local_5f8 [8];
  float fStack_5f0;
  float fStack_5ec;
  undefined1 local_5e8 [8];
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  undefined1 local_5c8 [8];
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  longlong local_590;
  longlong local_588;
  longlong local_580;
  undefined1 local_578 [8];
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  longlong local_500;
  longlong local_4f8;
  longlong local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  float *local_4b8;
  ulonglong local_4b0;
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_2a8 [16];
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  uVar29 = param_28 + 3;
  if (-1 < (int)param_28) {
    uVar29 = param_28;
  }
  if ((int)(uVar29 & 0xfffffffc) < 1) {
    uVar32 = 0;
  }
  else {
    lVar42 = 0x20;
    uVar32 = 0;
    pfVar39 = (float *)(param_5 + 0x30);
    do {
      local_4b8 = pfVar39;
      local_4b0 = uVar32;
      uVar106 = 0;
      if ((param_10 & 1) != 0) {
        uVar106 = *(undefined4 *)(param_11 + local_4b0);
      }
      uVar59 = 0;
      uVar111 = 0;
      if ((param_13 & 1) == 0) {
        if ((param_16 & 1) == 0) goto LAB_1409b9f14;
LAB_1409bb63b:
        uVar59 = *(undefined4 *)(param_17 + local_4b0);
        if ((param_22 & 1) != 0) goto LAB_1409bb65c;
LAB_1409b9f28:
        uVar160 = 0;
      }
      else {
        uVar111 = *(undefined4 *)(param_14 + local_4b0);
        if ((param_16 & 1) != 0) goto LAB_1409bb63b;
LAB_1409b9f14:
        if ((param_22 & 1) == 0) goto LAB_1409b9f28;
LAB_1409bb65c:
        uVar160 = *(undefined4 *)(param_23 + local_4b0);
      }
      uVar131 = 0;
      if ((param_25 & 1) != 0) {
        uVar131 = *(undefined4 *)(param_26 + local_4b0);
      }
      auVar60 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar42);
      auVar134 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar42);
      piVar1 = (int *)(param_3 + lVar42);
      iVar104 = piVar1[1];
      iVar88 = piVar1[2];
      uVar107 = auVar134._0_4_;
      iVar129 = auVar134._8_4_;
      auVar133._4_4_ = uVar107;
      auVar133._0_4_ = uVar107;
      auVar133._8_4_ = uVar107;
      auVar133._12_4_ = uVar107;
      iVar46 = auVar60._0_4_;
      iVar98 = auVar60._12_4_;
      auVar207._4_4_ = iVar98;
      auVar207._0_4_ = iVar46;
      auVar207._8_4_ = auVar60._4_4_;
      auVar207._12_4_ = iVar98;
      auVar133 = pblendw(auVar133,auVar207,0x3f);
      auVar136._0_8_ = auVar60._8_8_;
      auVar136._8_4_ = auVar60._8_4_;
      auVar136._12_4_ = iVar98;
      auVar207 = pblendw(auVar136,auVar134,0xc);
      auVar60._4_4_ = iVar104;
      auVar60._0_4_ = iVar129;
      iVar130 = auVar134._12_4_;
      auVar60._8_4_ = iVar130;
      auVar60._12_4_ = iVar88;
      auVar134._8_8_ = auVar60._8_8_;
      auVar134._0_8_ = auVar133._8_8_;
      uVar107 = 0;
      if ((param_19 & 1) != 0) {
        uVar107 = *(undefined4 *)(param_20 + local_4b0);
      }
      iVar51 = iVar46 << 4;
      iVar90 = iVar129 << 4;
      local_500 = (longlong)iVar51;
      local_4f8 = (longlong)(iVar98 * 0x10);
      local_4f0 = (longlong)iVar90;
      lVar47 = (longlong)(iVar104 << 4);
      auVar60 = insertps(ZEXT416(*(uint *)(param_1 + local_500)),
                         *(undefined4 *)(param_1 + local_4f8),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_1 + local_4f0),0x20);
      auVar61 = insertps(auVar60,*(undefined4 *)(param_1 + lVar47),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_500)),
                         *(undefined4 *)(param_1 + 4 + local_4f8),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_1 + 4 + local_4f0),0x20);
      local_4a8 = insertps(auVar60,*(undefined4 *)(param_1 + 4 + lVar47),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_500)),
                         *(undefined4 *)(param_1 + 8 + local_4f8),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_1 + 8 + local_4f0),0x20);
      local_498 = insertps(auVar60,*(undefined4 *)(param_1 + 8 + lVar47),0x30);
      uVar6 = *(uint *)(param_1 + 0xc + local_500);
      local_308 = ZEXT416(uVar6);
      uVar7 = *(uint *)(param_1 + 0xc + local_4f8);
      local_2f8 = ZEXT416(uVar7);
      iVar91 = iVar130 << 4;
      local_4e8 = (longlong)(auVar133._8_4_ << 4);
      local_4e0 = (longlong)(auVar133._12_4_ * 0x10);
      local_4d8 = (longlong)iVar91;
      lVar41 = (longlong)(iVar88 << 4);
      auVar60 = *(undefined1 (*) [16])(local_4b8 + -0xc);
      fVar199 = local_4b8[-8];
      fVar203 = local_4b8[-7];
      fVar57 = local_4b8[-6];
      fVar58 = local_4b8[-5];
      fVar87 = local_4b8[-4];
      fVar89 = local_4b8[-3];
      fVar96 = local_4b8[-2];
      fVar97 = local_4b8[-1];
      fVar103 = *local_4b8;
      fVar105 = local_4b8[1];
      fVar108 = local_4b8[2];
      fVar109 = local_4b8[3];
      fVar194 = auVar60._8_4_;
      fVar173 = auVar60._4_4_;
      fVar161 = auVar60._0_4_;
      fVar197 = auVar60._12_4_;
      auVar60 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar42);
      auVar136 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar42);
      pfVar39 = (float *)(param_4 + lVar42);
      auVar200 = insertps(auVar136,auVar60,0x8c);
      auVar257 = insertps(ZEXT416(*(uint *)(param_1 + local_4e8)),
                          *(undefined4 *)(param_1 + local_4e0),0x10);
      auVar257 = insertps(auVar257,*(undefined4 *)(param_1 + local_4d8),0x20);
      local_488 = insertps(auVar257,*(undefined4 *)(param_1 + lVar41),0x30);
      auVar257 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_4e8)),
                          *(undefined4 *)(param_1 + 4 + local_4e0),0x10);
      auVar257 = insertps(auVar257,*(undefined4 *)(param_1 + 4 + local_4d8),0x20);
      auVar112 = insertps(auVar257,*(undefined4 *)(param_1 + 4 + lVar41),0x30);
      auVar257 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_4e8)),
                          *(undefined4 *)(param_1 + 8 + local_4e0),0x10);
      auVar257 = insertps(auVar257,*(undefined4 *)(param_1 + 8 + local_4d8),0x20);
      auVar246 = insertps(ZEXT416(uVar6),local_2f8,0x10);
      auVar257 = insertps(auVar257,*(undefined4 *)(param_1 + 8 + lVar41),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + local_4f0);
      local_348 = ZEXT416(uVar8);
      auVar247 = insertps(auVar246,local_348,0x20);
      local_4d0 = (longlong)(auVar207._0_4_ << 4);
      local_4c8 = (longlong)(auVar207._4_4_ * 0x10);
      local_4c0 = (longlong)(*piVar1 << 4);
      lVar24 = (longlong)(piVar1[3] << 4);
      auVar246 = insertps(ZEXT416(*(uint *)(param_1 + local_4d0)),
                          *(undefined4 *)(param_1 + local_4c8),0x10);
      auVar246 = insertps(auVar246,*(undefined4 *)(param_1 + local_4c0),0x20);
      auVar246 = insertps(auVar246,*(undefined4 *)(param_1 + lVar24),0x30);
      fVar231 = auVar246._12_4_;
      auVar184 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_4d0)),
                          *(undefined4 *)(param_1 + 4 + local_4c8),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar47);
      local_378 = ZEXT416(uVar9);
      auVar248 = insertps(auVar247,local_378,0x30);
      uVar10 = *(uint *)(param_1 + 0xc + local_4e8);
      local_338 = ZEXT416(uVar10);
      uVar11 = *(uint *)(param_1 + 0xc + local_4e0);
      local_328 = ZEXT416(uVar11);
      auVar247 = insertps(local_338,local_328,0x10);
      auVar184 = insertps(auVar184,*(undefined4 *)(param_1 + 4 + local_4c0),0x20);
      uVar12 = *(uint *)(param_1 + 0xc + local_4d8);
      local_318 = ZEXT416(uVar12);
      auVar235 = insertps(auVar247,local_318,0x20);
      auVar247 = insertps(auVar184,*(undefined4 *)(param_1 + 4 + lVar24),0x30);
      uVar13 = *(uint *)(param_1 + 0xc + lVar41);
      local_368 = ZEXT416(uVar13);
      auVar236 = insertps(auVar235,local_368,0x30);
      auVar184 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_4d0)),
                          *(undefined4 *)(param_1 + 8 + local_4c8),0x10);
      auVar184 = insertps(auVar184,*(undefined4 *)(param_1 + 8 + local_4c0),0x20);
      local_478 = insertps(auVar184,*(undefined4 *)(param_1 + 8 + lVar24),0x30);
      uVar14 = *(uint *)(param_1 + 0xc + local_4d0);
      local_2e8 = ZEXT416(uVar14);
      uVar15 = *(uint *)(param_1 + 0xc + local_4c8);
      local_2d8 = ZEXT416(uVar15);
      auVar184 = insertps(local_2e8,local_2d8,0x10);
      uVar16 = *(uint *)(param_1 + 0xc + local_4c0);
      local_2c8 = ZEXT416(uVar16);
      auVar184 = insertps(auVar184,local_2c8,0x20);
      uVar17 = *(uint *)(param_1 + 0xc + lVar24);
      local_358 = ZEXT416(uVar17);
      auVar237 = insertps(auVar184,local_358,0x30);
      auVar184 = pmovsxbd(local_2f8,uVar160);
      auVar235 = insertps(ZEXT416(*(uint *)(param_24 + (auVar184._0_4_ << 2))),
                          *(undefined4 *)(param_24 + auVar184._4_4_ * 4),0x10);
      auVar235 = insertps(auVar235,*(undefined4 *)(param_24 + (auVar184._8_4_ << 2)),0x20);
      auVar235 = insertps(auVar235,*(undefined4 *)(param_24 + (auVar184._12_4_ << 2)),0x30);
      auVar134 = pmovsxbd(auVar134,uVar131);
      auVar184 = insertps(ZEXT416(*(uint *)(param_27 + (auVar134._0_4_ << 2))),
                          *(undefined4 *)(param_27 + auVar134._4_4_ * 4),0x10);
      auVar184 = insertps(auVar184,*(undefined4 *)(param_27 + (auVar134._8_4_ << 2)),0x20);
      auVar249 = insertps(auVar184,*(undefined4 *)(param_27 + (auVar134._12_4_ << 2)),0x30);
      local_6e8 = auVar61._0_4_;
      fStack_6e4 = auVar61._4_4_;
      fStack_6e0 = auVar61._8_4_;
      fStack_6dc = auVar61._12_4_;
      fVar159 = local_488._0_4_;
      fVar192 = local_488._4_4_;
      fVar198 = local_488._8_4_;
      fVar204 = local_488._12_4_;
      fVar273 = auVar246._8_4_;
      fVar205 = auVar246._0_4_;
      fVar212 = auVar246._4_4_;
      fVar52 = (fVar205 - local_6e8) * fVar173 + (fVar159 - local_6e8) * fVar161;
      fVar82 = (fVar212 - fStack_6e4) * fVar203 + (fVar192 - fStack_6e4) * fVar199;
      fVar92 = (fVar273 - fStack_6e0) * fVar89 + (fVar198 - fStack_6e0) * fVar87;
      fVar99 = (fVar231 - fStack_6dc) * fVar105 + (fVar204 - fStack_6dc) * fVar103;
      local_748 = auVar112._0_4_;
      fStack_744 = auVar112._4_4_;
      fStack_740 = auVar112._8_4_;
      fStack_73c = auVar112._12_4_;
      fVar110 = local_4a8._0_4_;
      fVar179 = local_4a8._4_4_;
      fVar256 = local_4a8._8_4_;
      fVar260 = local_4a8._12_4_;
      fVar262 = auVar247._4_4_;
      fVar195 = auVar247._12_4_;
      fVar216 = auVar247._0_4_;
      fVar221 = auVar247._8_4_;
      fVar183 = (fVar216 - fVar110) * fVar173 + (local_748 - fVar110) * fVar161;
      fVar191 = (fVar262 - fVar179) * fVar203 + (fStack_744 - fVar179) * fVar199;
      fVar193 = (fVar221 - fVar256) * fVar89 + (fStack_740 - fVar256) * fVar87;
      fVar196 = (fVar195 - fVar260) * fVar105 + (fStack_73c - fVar260) * fVar103;
      local_738._0_4_ = auVar257._0_4_;
      local_738._4_4_ = auVar257._4_4_;
      fStack_730 = auVar257._8_4_;
      fStack_72c = auVar257._12_4_;
      fVar264 = local_498._0_4_;
      fVar267 = local_498._4_4_;
      fVar270 = local_498._8_4_;
      fVar274 = local_498._12_4_;
      fVar224 = local_478._0_4_;
      fVar227 = local_478._4_4_;
      fVar229 = local_478._8_4_;
      fVar232 = local_478._12_4_;
      fVar174 = (fVar224 - fVar264) * fVar173 + ((float)local_738._0_4_ - fVar264) * fVar161;
      fVar180 = (fVar227 - fVar267) * fVar203 + ((float)local_738._4_4_ - fVar267) * fVar199;
      fVar181 = (fVar229 - fVar270) * fVar89 + (fStack_730 - fVar270) * fVar87;
      fVar182 = (fVar232 - fVar274) * fVar105 + (fStack_72c - fVar274) * fVar103;
      auVar184._4_4_ = fVar57;
      auVar184._0_4_ = fVar194;
      auVar184._8_4_ = fVar96;
      auVar184._12_4_ = fVar108;
      fVar206 = (fVar205 - local_6e8) * fVar197 + (fVar159 - local_6e8) * fVar194;
      fVar213 = (fVar212 - fStack_6e4) * fVar58 + (fVar192 - fStack_6e4) * fVar57;
      fVar214 = (fVar273 - fStack_6e0) * fVar97 + (fVar198 - fStack_6e0) * fVar96;
      fVar215 = (fVar231 - fStack_6dc) * fVar109 + (fVar204 - fStack_6dc) * fVar108;
      fVar217 = (fVar216 - fVar110) * fVar197 + (local_748 - fVar110) * fVar194;
      fVar220 = (fVar262 - fVar179) * fVar58 + (fStack_744 - fVar179) * fVar57;
      fVar222 = (fVar221 - fVar256) * fVar97 + (fStack_740 - fVar256) * fVar96;
      fVar223 = (fVar195 - fVar260) * fVar109 + (fStack_73c - fVar260) * fVar108;
      fVar225 = (fVar224 - fVar264) * fVar197 + ((float)local_738._0_4_ - fVar264) * fVar194;
      fVar228 = (fVar227 - fVar267) * fVar58 + ((float)local_738._4_4_ - fVar267) * fVar57;
      fVar230 = (fVar229 - fVar270) * fVar97 + (fStack_730 - fVar270) * fVar96;
      fVar233 = (fVar232 - fVar274) * fVar109 + (fStack_72c - fVar274) * fVar108;
      auVar135._0_4_ = fVar174 * fVar174 + fVar183 * fVar183 + fVar52 * fVar52;
      auVar135._4_4_ = fVar180 * fVar180 + fVar191 * fVar191 + fVar82 * fVar82;
      auVar135._8_4_ = fVar181 * fVar181 + fVar193 * fVar193 + fVar92 * fVar92;
      auVar135._12_4_ = fVar182 * fVar182 + fVar196 * fVar196 + fVar99 * fVar99;
      auVar162._0_4_ = fVar225 * fVar225 + fVar217 * fVar217 + fVar206 * fVar206;
      auVar162._4_4_ = fVar228 * fVar228 + fVar220 * fVar220 + fVar213 * fVar213;
      auVar162._8_4_ = fVar230 * fVar230 + fVar222 * fVar222 + fVar214 * fVar214;
      auVar162._12_4_ = fVar233 * fVar233 + fVar223 * fVar223 + fVar215 * fVar215;
      auVar134 = sqrtps(auVar184,auVar135);
      auVar61._4_4_ = _UNK_15076b1f4;
      auVar61._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar61._8_4_ = _UNK_15076b1f8;
      auVar61._12_4_ = _UNK_15076b1fc;
      auVar257 = divps(auVar61,auVar134);
      fVar132 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar134._0_4_) &
                       auVar257._0_4_);
      fVar156 = (float)(-(uint)(_UNK_1506895d4 < auVar134._4_4_) & auVar257._4_4_);
      fVar157 = (float)(-(uint)(_UNK_1506895d8 < auVar134._8_4_) & auVar257._8_4_);
      fVar158 = (float)(-(uint)(_UNK_1506895dc < auVar134._12_4_) & auVar257._12_4_);
      auVar257 = sqrtps(auVar257,auVar162);
      auVar61 = divps(auVar61,auVar257);
      fVar265 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar257._0_4_) &
                       auVar61._0_4_);
      fVar268 = (float)(-(uint)(_UNK_1506895d4 < auVar257._4_4_) & auVar61._4_4_);
      fVar271 = (float)(-(uint)(_UNK_1506895d8 < auVar257._8_4_) & auVar61._8_4_);
      fVar275 = (float)(-(uint)(_UNK_1506895dc < auVar257._12_4_) & auVar61._12_4_);
      local_298 = auVar134._0_4_ - auVar249._0_4_ * auVar60._0_4_;
      fStack_294 = auVar134._4_4_ - auVar249._4_4_ * auVar60._12_4_;
      fStack_290 = auVar134._8_4_ - auVar249._8_4_ * auVar136._8_4_;
      fStack_28c = auVar134._12_4_ - auVar249._12_4_ * pfVar39[1];
      local_238 = auVar257._0_4_ - auVar235._0_4_ * auVar60._4_4_;
      fStack_234 = auVar257._4_4_ - auVar235._4_4_ * auVar136._0_4_;
      fStack_230 = auVar257._8_4_ - auVar235._8_4_ * auVar136._12_4_;
      fStack_22c = auVar257._12_4_ - auVar235._12_4_ * pfVar39[2];
      fVar52 = fVar52 * fVar132;
      fVar82 = fVar82 * fVar156;
      fVar92 = fVar92 * fVar157;
      fVar99 = fVar99 * fVar158;
      fVar183 = fVar183 * fVar132;
      fVar191 = fVar191 * fVar156;
      fVar193 = fVar193 * fVar157;
      fVar196 = fVar196 * fVar158;
      fVar206 = fVar206 * fVar265;
      fVar213 = fVar213 * fVar268;
      fVar214 = fVar214 * fVar271;
      fVar215 = fVar215 * fVar275;
      fVar217 = fVar217 * fVar265;
      fVar220 = fVar220 * fVar268;
      fVar222 = fVar222 * fVar271;
      fVar223 = fVar223 * fVar275;
      fVar174 = fVar174 * fVar132;
      fVar180 = fVar180 * fVar156;
      fVar181 = fVar181 * fVar157;
      fVar182 = fVar182 * fVar158;
      fVar225 = fVar225 * fVar265;
      fVar228 = fVar228 * fVar268;
      fVar230 = fVar230 * fVar271;
      fVar233 = fVar233 * fVar275;
      local_228 = (fVar174 * fVar225 + fVar183 * fVar217 + fVar52 * fVar206) - auVar200._0_4_;
      fStack_224 = (fVar180 * fVar228 + fVar191 * fVar220 + fVar82 * fVar213) - auVar200._4_4_;
      fStack_220 = (fVar181 * fVar230 + fVar193 * fVar222 + fVar92 * fVar214) - *pfVar39;
      fStack_21c = (fVar182 * fVar233 + fVar196 * fVar223 + fVar99 * fVar215) - pfVar39[3];
      fVar53 = fVar194 * fVar206;
      fVar83 = fVar57 * fVar213;
      fVar93 = fVar96 * fVar214;
      fVar100 = fVar108 * fVar215;
      fVar54 = fVar194 * fVar217;
      fVar84 = fVar57 * fVar220;
      fVar94 = fVar96 * fVar222;
      fVar101 = fVar108 * fVar223;
      local_5c8._0_4_ = fVar194 * fVar225;
      local_5c8._4_4_ = fVar57 * fVar228;
      fStack_5c0 = fVar96 * fVar230;
      fStack_5bc = fVar108 * fVar233;
      local_5b8 = fVar197 * fVar206;
      fStack_5b4 = fVar58 * fVar213;
      fStack_5b0 = fVar97 * fVar214;
      fStack_5ac = fVar109 * fVar215;
      fVar55 = fVar197 * fVar217;
      fVar85 = fVar58 * fVar220;
      fVar95 = fVar97 * fVar222;
      fVar102 = fVar109 * fVar223;
      local_5a8 = fVar197 * fVar225;
      fStack_5a4 = fVar58 * fVar228;
      fStack_5a0 = fVar97 * fVar230;
      fStack_59c = fVar109 * fVar233;
      local_448 = fVar161 * fVar52;
      fStack_444 = fVar199 * fVar82;
      fStack_440 = fVar87 * fVar92;
      fStack_43c = fVar103 * fVar99;
      local_2b8 = fVar161 * fVar183;
      fStack_2b4 = fVar199 * fVar191;
      fStack_2b0 = fVar87 * fVar193;
      fStack_2ac = fVar103 * fVar196;
      local_538 = fVar161 * fVar174;
      fStack_534 = fVar199 * fVar180;
      fStack_530 = fVar87 * fVar181;
      fStack_52c = fVar103 * fVar182;
      local_5f8._0_4_ = fVar173 * fVar52;
      local_5f8._4_4_ = fVar203 * fVar82;
      fStack_5f0 = fVar89 * fVar92;
      fStack_5ec = fVar105 * fVar99;
      local_5e8._0_4_ = fVar173 * fVar183;
      local_5e8._4_4_ = fVar203 * fVar191;
      fStack_5e0 = fVar89 * fVar193;
      fStack_5dc = fVar105 * fVar196;
      fVar56 = fVar173 * fVar174;
      fVar86 = fVar203 * fVar180;
      fStack_5d0 = fVar89 * fVar181;
      fStack_5cc = fVar105 * fVar182;
      _local_5d8 = CONCAT44(fVar86,fVar56);
      local_248 = fVar194 * fVar52 * fVar265 + fVar161 * fVar206 * fVar132;
      fStack_244 = fVar57 * fVar82 * fVar268 + fVar199 * fVar213 * fVar156;
      fStack_240 = fVar96 * fVar92 * fVar271 + fVar87 * fVar214 * fVar157;
      fStack_23c = fVar108 * fVar99 * fVar275 + fVar103 * fVar215 * fVar158;
      local_258 = fVar194 * fVar183 * fVar265 + fVar161 * fVar217 * fVar132;
      fStack_254 = fVar57 * fVar191 * fVar268 + fVar199 * fVar220 * fVar156;
      fStack_250 = fVar96 * fVar193 * fVar271 + fVar87 * fVar222 * fVar157;
      fStack_24c = fVar108 * fVar196 * fVar275 + fVar103 * fVar223 * fVar158;
      fVar234 = fVar194 * fVar174 * fVar265 + fVar161 * fVar225 * fVar132;
      fVar241 = fVar57 * fVar180 * fVar268 + fVar199 * fVar228 * fVar156;
      fVar242 = fVar96 * fVar181 * fVar271 + fVar87 * fVar230 * fVar157;
      fVar243 = fVar108 * fVar182 * fVar275 + fVar103 * fVar233 * fVar158;
      local_268 = fVar52 * fVar265 * fVar197 + fVar206 * fVar132 * fVar173;
      fStack_264 = fVar82 * fVar268 * fVar58 + fVar213 * fVar156 * fVar203;
      fStack_260 = fVar92 * fVar271 * fVar97 + fVar214 * fVar157 * fVar89;
      fStack_25c = fVar99 * fVar275 * fVar109 + fVar215 * fVar158 * fVar105;
      local_288 = fVar183 * fVar265 * fVar197 + fVar217 * fVar132 * fVar173;
      fStack_284 = fVar191 * fVar268 * fVar58 + fVar220 * fVar156 * fVar203;
      fStack_280 = fVar193 * fVar271 * fVar97 + fVar222 * fVar157 * fVar89;
      fStack_27c = fVar196 * fVar275 * fVar109 + fVar223 * fVar158 * fVar105;
      local_278 = fVar174 * fVar265 * fVar197 + fVar225 * fVar132 * fVar173;
      fStack_274 = fVar180 * fVar268 * fVar58 + fVar228 * fVar156 * fVar203;
      fStack_270 = fVar181 * fVar271 * fVar97 + fVar230 * fVar157 * fVar89;
      fStack_26c = fVar182 * fVar275 * fVar109 + fVar233 * fVar158 * fVar105;
      lVar37 = (longlong)(iVar46 * 3);
      lVar33 = (longlong)(iVar98 * 3);
      lVar48 = (longlong)(iVar129 * 3);
      auVar60 = insertps(ZEXT416(*(uint *)(param_2 + lVar37 * 4)),
                         *(undefined4 *)(param_2 + lVar33 * 4),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + lVar48 * 4),0x20);
      lVar49 = (longlong)(iVar104 * 3);
      auVar134 = insertps(auVar60,*(undefined4 *)(param_2 + lVar49 * 4),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar37 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar33 * 4),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + 4 + lVar48 * 4),0x20);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + 4 + lVar49 * 4),0x30);
      auVar136 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar37 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar33 * 4),0x10);
      auVar136 = insertps(auVar136,*(undefined4 *)(param_2 + 8 + lVar48 * 4),0x20);
      auVar136 = insertps(auVar136,*(undefined4 *)(param_2 + 8 + lVar49 * 4),0x30);
      lVar33 = (longlong)(auVar133._8_4_ * 3);
      lVar37 = (longlong)(auVar133._12_4_ * 3);
      lVar49 = (longlong)(iVar130 * 3);
      auVar133 = insertps(ZEXT416(*(uint *)(param_2 + lVar33 * 4)),
                          *(undefined4 *)(param_2 + lVar37 * 4),0x10);
      auVar133 = insertps(auVar133,*(undefined4 *)(param_2 + lVar49 * 4),0x20);
      lVar48 = (longlong)(iVar88 * 3);
      auVar61 = insertps(auVar133,*(undefined4 *)(param_2 + lVar48 * 4),0x30);
      fVar161 = local_6e8 - auVar134._0_4_;
      fVar173 = fStack_6e4 - auVar134._4_4_;
      fVar214 = fStack_6e0 - auVar134._8_4_;
      fVar217 = fStack_6dc - auVar134._12_4_;
      auVar134 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar33 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar37 * 4),0x10);
      auVar134 = insertps(auVar134,*(undefined4 *)(param_2 + 4 + lVar49 * 4),0x20);
      auVar133 = insertps(auVar134,*(undefined4 *)(param_2 + 4 + lVar48 * 4),0x30);
      auVar134 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar33 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar37 * 4),0x10);
      fVar108 = fVar110 - auVar60._0_4_;
      fVar92 = fVar179 - auVar60._4_4_;
      fVar157 = fVar256 - auVar60._8_4_;
      fVar181 = fVar260 - auVar60._12_4_;
      auVar60 = insertps(auVar134,*(undefined4 *)(param_2 + 8 + lVar49 * 4),0x20);
      fVar57 = fVar264 - auVar136._0_4_;
      fVar87 = fVar267 - auVar136._4_4_;
      fVar96 = fVar270 - auVar136._8_4_;
      fVar103 = fVar274 - auVar136._12_4_;
      auVar136 = insertps(auVar60,*(undefined4 *)(param_2 + 8 + lVar48 * 4),0x30);
      local_558 = fVar159 - auVar61._0_4_;
      fStack_554 = fVar192 - auVar61._4_4_;
      fStack_550 = fVar198 - auVar61._8_4_;
      fStack_54c = fVar204 - auVar61._12_4_;
      lVar49 = (longlong)(auVar207._0_4_ * 3);
      lVar33 = (longlong)(auVar207._4_4_ * 3);
      lVar37 = (longlong)(*piVar1 * 3);
      lVar48 = (longlong)(piVar1[3] * 3);
      auVar60 = insertps(ZEXT416(*(uint *)(param_2 + lVar49 * 4)),
                         *(undefined4 *)(param_2 + lVar33 * 4),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + lVar37 * 4),0x20);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + lVar48 * 4),0x30);
      auVar134 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar49 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar33 * 4),0x10);
      local_458 = local_748 - auVar133._0_4_;
      fStack_454 = fStack_744 - auVar133._4_4_;
      fStack_450 = fStack_740 - auVar133._8_4_;
      fStack_44c = fStack_73c - auVar133._12_4_;
      auVar134 = insertps(auVar134,*(undefined4 *)(param_2 + 4 + lVar37 * 4),0x20);
      local_468 = (float)local_738._0_4_ - auVar136._0_4_;
      fStack_464 = (float)local_738._4_4_ - auVar136._4_4_;
      fStack_460 = fStack_730 - auVar136._8_4_;
      fStack_45c = fStack_72c - auVar136._12_4_;
      auVar134 = insertps(auVar134,*(undefined4 *)(param_2 + 4 + lVar48 * 4),0x30);
      fVar109 = fVar205 - auVar60._0_4_;
      fVar99 = fVar212 - auVar60._4_4_;
      fVar158 = fVar273 - auVar60._8_4_;
      fVar182 = fVar231 - auVar60._12_4_;
      local_568 = fVar216 - auVar134._0_4_;
      fStack_564 = fVar262 - auVar134._4_4_;
      fStack_560 = fVar221 - auVar134._8_4_;
      fStack_55c = fVar195 - auVar134._12_4_;
      auVar60 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar49 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar33 * 4),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + 8 + lVar37 * 4),0x20);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + 8 + lVar48 * 4),0x30);
      fVar52 = fVar224 - auVar60._0_4_;
      fVar132 = fVar227 - auVar60._4_4_;
      fVar174 = fVar229 - auVar60._8_4_;
      fVar183 = fVar232 - auVar60._12_4_;
      auVar60 = pmovsxbd(auVar60,uVar106);
      auVar200._0_4_ = auVar60._0_4_ << 2;
      auVar200._4_4_ = auVar60._4_4_ * 4;
      auVar200._8_4_ = auVar60._8_4_ << 2;
      auVar200._12_4_ = auVar60._12_4_ << 2;
      auVar60 = pmovsxbd(auVar200,uVar111);
      auVar235._0_4_ = auVar60._0_4_ << 2;
      auVar235._4_4_ = auVar60._4_4_ * 4;
      auVar235._8_4_ = auVar60._8_4_ << 2;
      auVar235._12_4_ = auVar60._12_4_ << 2;
      auVar60 = pmovsxbd(auVar235,uVar59);
      auVar249._0_4_ = auVar60._0_4_ << 2;
      auVar249._4_4_ = auVar60._4_4_ * 4;
      auVar249._8_4_ = auVar60._8_4_ << 2;
      auVar249._12_4_ = auVar60._12_4_ << 2;
      auVar136 = pmovsxbd(auVar249,uVar107);
      iVar88 = auVar136._4_4_ * 4;
      iVar104 = auVar136._12_4_ << 2;
      auVar60 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar42);
      auVar134 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar42);
      fStack_544 = auVar134._0_4_;
      fStack_540 = auVar134._12_4_;
      local_548 = auVar60._4_4_;
      pfVar5 = (float *)(param_7 + lVar42);
      fVar199 = *pfVar5;
      fStack_53c = pfVar5[2];
      fVar203 = pfVar5[3];
      auVar184 = insertps(auVar134,auVar60,0x8c);
      auVar257 = insertps(ZEXT416(*(uint *)(param_12 + auVar200._0_4_)),
                          *(undefined4 *)(param_12 + auVar200._4_4_),0x10);
      auVar133 = insertps(ZEXT416(*(uint *)(param_15 + auVar235._0_4_)),
                          *(undefined4 *)(param_15 + auVar235._4_4_),0x10);
      auVar113._0_8_ = auVar184._0_8_;
      auVar113._8_4_ = fVar199;
      auVar113._12_4_ = fVar203;
      auVar133 = insertps(auVar133,*(undefined4 *)(param_15 + auVar235._8_4_),0x20);
      auVar246 = insertps(auVar133,*(undefined4 *)(param_15 + auVar235._12_4_),0x30);
      auVar133 = *(undefined1 (*) [16])(param_6 + -0x20 + lVar42);
      auVar207 = *(undefined1 (*) [16])(param_6 + -0x10 + lVar42);
      pfVar39 = (float *)(param_6 + lVar42);
      auVar61 = insertps(auVar207,auVar133,0x8c);
      fVar206 = auVar133._0_4_ * auVar246._0_4_;
      fVar213 = auVar133._12_4_ * auVar246._4_4_;
      auVar163._4_4_ = fVar213;
      auVar163._0_4_ = fVar206;
      fVar215 = auVar207._8_4_ * auVar246._8_4_;
      fVar220 = pfVar39[1] * auVar246._12_4_;
      auVar257 = insertps(auVar257,*(undefined4 *)(param_12 + auVar200._8_4_),0x20);
      auVar257 = insertps(auVar257,*(undefined4 *)(param_12 + auVar200._12_4_),0x30);
      auVar246 = insertps(ZEXT416(*(uint *)(param_18 + auVar249._0_4_)),
                          *(undefined4 *)(param_18 + auVar249._4_4_),0x10);
      auVar246 = insertps(auVar246,*(undefined4 *)(param_18 + auVar249._8_4_),0x20);
      fVar252 = auVar133._4_4_ * auVar257._0_4_;
      fVar253 = auVar207._0_4_ * auVar257._4_4_;
      fVar254 = auVar207._12_4_ * auVar257._8_4_;
      fVar255 = pfVar39[2] * auVar257._12_4_;
      auVar133 = insertps(auVar246,*(undefined4 *)(param_18 + auVar249._12_4_),0x30);
      fVar58 = auVar61._0_4_ * auVar133._0_4_;
      fVar89 = auVar61._4_4_ * auVar133._4_4_;
      fVar97 = *pfVar39 * auVar133._8_4_;
      fVar105 = pfVar39[3] * auVar133._12_4_;
      local_7e8 = auVar248._0_4_;
      fStack_7e4 = auVar248._4_4_;
      fStack_7e0 = auVar248._8_4_;
      fStack_7dc = auVar248._12_4_;
      local_828 = auVar236._0_4_;
      fStack_824 = auVar236._4_4_;
      fStack_820 = auVar236._8_4_;
      fStack_81c = auVar236._12_4_;
      local_7a8 = auVar237._0_4_;
      fStack_7a4 = auVar237._4_4_;
      fStack_7a0 = auVar237._8_4_;
      fStack_79c = auVar237._12_4_;
      local_578._4_4_ = fStack_7e4 + fStack_824 + fStack_7a4;
      local_578._0_4_ = local_7e8 + local_828 + local_7a8;
      fStack_570 = fStack_7e0 + fStack_820 + fStack_7a0;
      fStack_56c = fStack_7dc + fStack_81c + fStack_79c;
      auVar133 = insertps(ZEXT416(*(uint *)(param_21 + (auVar136._0_4_ << 2))),
                          *(undefined4 *)(param_21 + iVar88),0x10);
      auVar133 = insertps(auVar133,*(undefined4 *)(param_21 + (auVar136._8_4_ << 2)),0x20);
      auVar133 = insertps(auVar133,*(undefined4 *)(param_21 + iVar104),0x30);
      auVar137._0_4_ = param_8 * fVar206 * param_8;
      auVar137._4_4_ = param_8 * fVar213 * param_8;
      auVar137._8_4_ = param_8 * fVar215 * param_8;
      auVar137._12_4_ = param_8 * fVar220 * param_8;
      auVar257._4_4_ = _UNK_15076b1f4;
      auVar257._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar257._8_4_ = _UNK_15076b1f8;
      auVar257._12_4_ = _UNK_15076b1fc;
      auVar207 = divps(auVar257,auVar137);
      fVar271 = local_448 + (float)local_5f8._0_4_;
      fVar275 = fStack_444 + (float)local_5f8._4_4_;
      fVar261 = fStack_440 + fStack_5f0;
      fVar263 = fStack_43c + fStack_5ec;
      fVar222 = local_2b8 + (float)local_5e8._0_4_;
      fVar223 = fStack_2b4 + (float)local_5e8._4_4_;
      fVar225 = fStack_2b0 + fStack_5e0;
      fVar228 = fStack_2ac + fStack_5dc;
      fVar193 = local_538 + fVar56;
      fVar196 = fStack_534 + fVar86;
      fVar194 = fStack_530 + fStack_5d0;
      fVar197 = fStack_52c + fStack_5cc;
      fVar230 = auVar133._0_4_ + auVar133._0_4_;
      fVar233 = auVar133._4_4_ + auVar133._4_4_;
      fVar265 = auVar133._8_4_ + auVar133._8_4_;
      fVar268 = auVar133._12_4_ + auVar133._12_4_;
      auVar163._8_4_ = fVar215;
      auVar163._12_4_ = fVar220;
      auVar133 = divps(auVar163,_local_578);
      auVar133 = sqrtps(auVar133,auVar133);
      fVar266 = auVar207._0_4_;
      fVar269 = auVar207._4_4_;
      fVar272 = auVar207._8_4_;
      fVar276 = auVar207._12_4_;
      fVar82 = auVar133._0_4_ * fVar230 * fVar266 * param_8;
      fVar156 = auVar133._4_4_ * fVar233 * fVar269 * param_8;
      fVar180 = auVar133._8_4_ * fVar265 * fVar272 * param_8;
      fVar191 = auVar133._12_4_ * fVar268 * fVar276 * param_8;
      auVar246._4_4_ = _UNK_15076b1f4;
      auVar246._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar246._8_4_ = _UNK_15076b1f8;
      auVar246._12_4_ = _UNK_15076b1fc;
      auVar185._0_4_ =
           ((fVar56 * fVar56 +
            (float)local_5e8._0_4_ * (float)local_5e8._0_4_ +
            (float)local_5f8._0_4_ * (float)local_5f8._0_4_) * local_7a8 +
           (local_538 * local_538 + local_2b8 * local_2b8 + local_448 * local_448) * local_828 +
           (fVar193 * fVar193 + fVar222 * fVar222 + fVar271 * fVar271) * local_7e8) *
           (fVar82 + ___xmm_3f8000003f8000003f8000003f800000) + fVar266;
      auVar185._4_4_ =
           ((fVar86 * fVar86 +
            (float)local_5e8._4_4_ * (float)local_5e8._4_4_ +
            (float)local_5f8._4_4_ * (float)local_5f8._4_4_) * fStack_7a4 +
           (fStack_534 * fStack_534 + fStack_2b4 * fStack_2b4 + fStack_444 * fStack_444) *
           fStack_824 + (fVar196 * fVar196 + fVar223 * fVar223 + fVar275 * fVar275) * fStack_7e4) *
           (fVar156 + _UNK_15076b1f4) + fVar269;
      auVar185._8_4_ =
           ((fStack_5d0 * fStack_5d0 + fStack_5e0 * fStack_5e0 + fStack_5f0 * fStack_5f0) *
            fStack_7a0 +
           (fStack_530 * fStack_530 + fStack_2b0 * fStack_2b0 + fStack_440 * fStack_440) *
           fStack_820 + (fVar194 * fVar194 + fVar225 * fVar225 + fVar261 * fVar261) * fStack_7e0) *
           (fVar180 + _UNK_15076b1f8) + fVar272;
      auVar185._12_4_ =
           ((fStack_5cc * fStack_5cc + fStack_5dc * fStack_5dc + fStack_5ec * fStack_5ec) *
            fStack_79c +
           (fStack_52c * fStack_52c + fStack_2ac * fStack_2ac + fStack_43c * fStack_43c) *
           fStack_81c + (fVar197 * fVar197 + fVar228 * fVar228 + fVar263 * fVar263) * fStack_7dc) *
           (fVar191 + _UNK_15076b1fc) + fVar276;
      auVar236._0_4_ =
           (local_298 - fVar266 * auVar60._0_4_) +
           ((fVar56 * fVar52 + (float)local_5e8._0_4_ * local_568 + (float)local_5f8._0_4_ * fVar109
            + local_538 * local_468 + local_2b8 * local_458 + local_448 * local_558) -
           (fVar193 * fVar57 + fVar222 * fVar108 + fVar271 * fVar161)) * fVar82;
      auVar236._4_4_ =
           (fStack_294 - fVar269 * auVar60._12_4_) +
           ((fVar86 * fVar132 +
             (float)local_5e8._4_4_ * fStack_564 + (float)local_5f8._4_4_ * fVar99 +
            fStack_534 * fStack_464 + fStack_2b4 * fStack_454 + fStack_444 * fStack_554) -
           (fVar196 * fVar87 + fVar223 * fVar92 + fVar275 * fVar173)) * fVar156;
      auVar236._8_4_ =
           (fStack_290 - fVar272 * auVar134._8_4_) +
           ((fStack_5d0 * fVar174 + fStack_5e0 * fStack_560 + fStack_5f0 * fVar158 +
            fStack_530 * fStack_460 + fStack_2b0 * fStack_450 + fStack_440 * fStack_550) -
           (fVar194 * fVar96 + fVar225 * fVar157 + fVar261 * fVar214)) * fVar180;
      auVar236._12_4_ =
           (fStack_28c - fVar276 * pfVar5[1]) +
           ((fStack_5cc * fVar183 + fStack_5dc * fStack_55c + fStack_5ec * fVar182 +
            fStack_52c * fStack_45c + fStack_2ac * fStack_44c + fStack_43c * fStack_54c) -
           (fVar197 * fVar103 + fVar228 * fVar181 + fVar263 * fVar217)) * fVar191;
      auVar133 = divps(auVar236,auVar185);
      fVar271 = (float)(-(uint)(param_9 <= fVar206) & auVar133._0_4_);
      fVar275 = (float)(-(uint)(param_9 <= fVar213) & auVar133._4_4_);
      fVar261 = (float)(-(uint)(param_9 <= fVar215) & auVar133._8_4_);
      fVar263 = (float)(-(uint)(param_9 <= fVar220) & auVar133._12_4_);
      auVar138._0_4_ = param_8 * fVar252 * param_8;
      auVar138._4_4_ = param_8 * fVar253 * param_8;
      auVar138._8_4_ = param_8 * fVar254 * param_8;
      auVar138._12_4_ = param_8 * fVar255 * param_8;
      auVar207 = divps(auVar246,auVar138);
      fVar193 = fVar53 + local_5b8;
      fVar194 = fVar83 + fStack_5b4;
      fVar206 = fVar93 + fStack_5b0;
      fVar215 = fVar100 + fStack_5ac;
      fVar222 = fVar54 + fVar55;
      fVar223 = fVar84 + fVar85;
      fVar225 = fVar94 + fVar95;
      fVar228 = fVar101 + fVar102;
      fVar82 = (float)local_5c8._0_4_ + local_5a8;
      fVar156 = (float)local_5c8._4_4_ + fStack_5a4;
      fVar180 = fStack_5c0 + fStack_5a0;
      fVar191 = fStack_5bc + fStack_59c;
      auVar186._4_4_ = fVar253;
      auVar186._0_4_ = fVar252;
      auVar186._8_4_ = fVar254;
      auVar186._12_4_ = fVar255;
      auVar133 = divps(auVar186,_local_578);
      auVar133 = sqrtps(auVar133,auVar133);
      fVar266 = auVar207._0_4_;
      fVar269 = auVar207._4_4_;
      fVar272 = auVar207._8_4_;
      fVar276 = auVar207._12_4_;
      fVar196 = auVar133._0_4_ * fVar230 * fVar266 * param_8;
      fVar197 = auVar133._4_4_ * fVar233 * fVar269 * param_8;
      fVar213 = auVar133._8_4_ * fVar265 * fVar272 * param_8;
      fVar220 = auVar133._12_4_ * fVar268 * fVar276 * param_8;
      auVar112._4_4_ = _UNK_15076b1f4;
      auVar112._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar112._8_4_ = _UNK_15076b1f8;
      auVar112._12_4_ = _UNK_15076b1fc;
      auVar164._0_4_ =
           ((local_5a8 * local_5a8 + fVar55 * fVar55 + local_5b8 * local_5b8) * local_7a8 +
           ((float)local_5c8._0_4_ * (float)local_5c8._0_4_ + fVar54 * fVar54 + fVar53 * fVar53) *
           local_828 + (fVar82 * fVar82 + fVar222 * fVar222 + fVar193 * fVar193) * local_7e8) *
           (fVar196 + ___xmm_3f8000003f8000003f8000003f800000) + fVar266;
      auVar164._4_4_ =
           ((fStack_5a4 * fStack_5a4 + fVar85 * fVar85 + fStack_5b4 * fStack_5b4) * fStack_7a4 +
           ((float)local_5c8._4_4_ * (float)local_5c8._4_4_ + fVar84 * fVar84 + fVar83 * fVar83) *
           fStack_824 + (fVar156 * fVar156 + fVar223 * fVar223 + fVar194 * fVar194) * fStack_7e4) *
           (fVar197 + _UNK_15076b1f4) + fVar269;
      auVar164._8_4_ =
           ((fStack_5a0 * fStack_5a0 + fVar95 * fVar95 + fStack_5b0 * fStack_5b0) * fStack_7a0 +
           (fStack_5c0 * fStack_5c0 + fVar94 * fVar94 + fVar93 * fVar93) * fStack_820 +
           (fVar180 * fVar180 + fVar225 * fVar225 + fVar206 * fVar206) * fStack_7e0) *
           (fVar213 + _UNK_15076b1f8) + fVar272;
      auVar164._12_4_ =
           ((fStack_59c * fStack_59c + fVar102 * fVar102 + fStack_5ac * fStack_5ac) * fStack_79c +
           (fStack_5bc * fStack_5bc + fVar101 * fVar101 + fVar100 * fVar100) * fStack_81c +
           (fVar191 * fVar191 + fVar228 * fVar228 + fVar215 * fVar215) * fStack_7dc) *
           (fVar220 + _UNK_15076b1fc) + fVar276;
      auVar114._0_4_ =
           (local_238 - fVar266 * local_548) +
           ((local_5a8 * fVar52 + fVar55 * local_568 + local_5b8 * fVar109 +
            (float)local_5c8._0_4_ * local_468 + fVar54 * local_458 + fVar53 * local_558) -
           (fVar82 * fVar57 + fVar222 * fVar108 + fVar193 * fVar161)) * fVar196;
      auVar114._4_4_ =
           (fStack_234 - fVar269 * fStack_544) +
           ((fStack_5a4 * fVar132 + fVar85 * fStack_564 + fStack_5b4 * fVar99 +
            (float)local_5c8._4_4_ * fStack_464 + fVar84 * fStack_454 + fVar83 * fStack_554) -
           (fVar156 * fVar87 + fVar223 * fVar92 + fVar194 * fVar173)) * fVar197;
      auVar114._8_4_ =
           (fStack_230 - fVar272 * fStack_540) +
           ((fStack_5a0 * fVar174 + fVar95 * fStack_560 + fStack_5b0 * fVar158 +
            fStack_5c0 * fStack_460 + fVar94 * fStack_450 + fVar93 * fStack_550) -
           (fVar180 * fVar96 + fVar225 * fVar157 + fVar206 * fVar214)) * fVar213;
      auVar114._12_4_ =
           (fStack_22c - fVar276 * fStack_53c) +
           ((fStack_59c * fVar183 + fVar102 * fStack_55c + fStack_5ac * fVar182 +
            fStack_5bc * fStack_45c + fVar101 * fStack_44c + fVar100 * fStack_54c) -
           (fVar191 * fVar103 + fVar228 * fVar181 + fVar215 * fVar217)) * fVar220;
      auVar133 = divps(auVar114,auVar164);
      fVar252 = (float)(-(uint)(param_9 <= fVar252) & auVar133._0_4_);
      fVar253 = (float)(-(uint)(param_9 <= fVar253) & auVar133._4_4_);
      fVar254 = (float)(-(uint)(param_9 <= fVar254) & auVar133._8_4_);
      fVar255 = (float)(-(uint)(param_9 <= fVar255) & auVar133._12_4_);
      auVar247._4_4_ = fVar89;
      auVar247._0_4_ = fVar58;
      auVar247._8_4_ = fVar97;
      auVar247._12_4_ = fVar105;
      auVar133 = divps(auVar247,_local_578);
      auVar207 = sqrtps(_local_5c8,auVar133);
      auVar139._0_4_ = param_8 * fVar58 * param_8;
      auVar139._4_4_ = param_8 * fVar89 * param_8;
      auVar139._8_4_ = param_8 * fVar97 * param_8;
      auVar139._12_4_ = param_8 * fVar105 * param_8;
      auVar133 = divps(auVar112,auVar139);
      fVar193 = local_248 + local_268;
      fVar196 = fStack_244 + fStack_264;
      fVar194 = fStack_240 + fStack_260;
      fVar197 = fStack_23c + fStack_25c;
      fVar206 = local_258 + local_288;
      fVar213 = fStack_254 + fStack_284;
      fVar215 = fStack_250 + fStack_280;
      fVar220 = fStack_24c + fStack_27c;
      fVar82 = fVar234 + local_278;
      fVar156 = fVar241 + fStack_274;
      fVar180 = fVar242 + fStack_270;
      fVar191 = fVar243 + fStack_26c;
      fVar222 = auVar133._0_4_;
      fVar223 = auVar133._4_4_;
      fVar225 = auVar133._8_4_;
      fVar228 = auVar133._12_4_;
      fVar230 = auVar207._0_4_ * fVar230 * fVar222 * param_8;
      fVar233 = auVar207._4_4_ * fVar233 * fVar223 * param_8;
      fVar265 = auVar207._8_4_ * fVar265 * fVar225 * param_8;
      fVar268 = auVar207._12_4_ * fVar268 * fVar228 * param_8;
      auVar115._0_4_ =
           ((local_278 * local_278 + local_288 * local_288 + local_268 * local_268) * local_7a8 +
           (fVar234 * fVar234 + local_258 * local_258 + local_248 * local_248) * local_828 +
           (fVar82 * fVar82 + fVar206 * fVar206 + fVar193 * fVar193) * local_7e8) *
           (fVar230 + ___xmm_3f8000003f8000003f8000003f800000) + fVar222;
      auVar115._4_4_ =
           ((fStack_274 * fStack_274 + fStack_284 * fStack_284 + fStack_264 * fStack_264) *
            fStack_7a4 +
           (fVar241 * fVar241 + fStack_254 * fStack_254 + fStack_244 * fStack_244) * fStack_824 +
           (fVar156 * fVar156 + fVar213 * fVar213 + fVar196 * fVar196) * fStack_7e4) *
           (fVar233 + _UNK_15076b1f4) + fVar223;
      auVar115._8_4_ =
           ((fStack_270 * fStack_270 + fStack_280 * fStack_280 + fStack_260 * fStack_260) *
            fStack_7a0 +
           (fVar242 * fVar242 + fStack_250 * fStack_250 + fStack_240 * fStack_240) * fStack_820 +
           (fVar180 * fVar180 + fVar215 * fVar215 + fVar194 * fVar194) * fStack_7e0) *
           (fVar265 + _UNK_15076b1f8) + fVar225;
      auVar115._12_4_ =
           ((fStack_26c * fStack_26c + fStack_27c * fStack_27c + fStack_25c * fStack_25c) *
            fStack_79c +
           (fVar243 * fVar243 + fStack_24c * fStack_24c + fStack_23c * fStack_23c) * fStack_81c +
           (fVar191 * fVar191 + fVar220 * fVar220 + fVar197 * fVar197) * fStack_7dc) *
           (fVar268 + _UNK_15076b1fc) + fVar228;
      local_2a8._0_4_ = auVar184._0_4_;
      local_2a8._4_4_ = auVar184._4_4_;
      auVar237._0_4_ =
           (local_228 - fVar222 * (float)local_2a8._0_4_) +
           ((fVar52 * local_278 + local_568 * local_288 + fVar109 * local_268 +
            local_468 * fVar234 + local_458 * local_258 + local_558 * local_248) -
           (fVar57 * fVar82 + fVar108 * fVar206 + fVar161 * fVar193)) * fVar230;
      auVar237._4_4_ =
           (fStack_224 - fVar223 * (float)local_2a8._4_4_) +
           ((fVar132 * fStack_274 + fStack_564 * fStack_284 + fVar99 * fStack_264 +
            fStack_464 * fVar241 + fStack_454 * fStack_254 + fStack_554 * fStack_244) -
           (fVar87 * fVar156 + fVar92 * fVar213 + fVar173 * fVar196)) * fVar233;
      auVar237._8_4_ =
           (fStack_220 - fVar225 * fVar199) +
           ((fVar174 * fStack_270 + fStack_560 * fStack_280 + fVar158 * fStack_260 +
            fStack_460 * fVar242 + fStack_450 * fStack_250 + fStack_550 * fStack_240) -
           (fVar96 * fVar180 + fVar157 * fVar215 + fVar214 * fVar194)) * fVar265;
      auVar237._12_4_ =
           (fStack_21c - fVar228 * fVar203) +
           ((fVar183 * fStack_26c + fStack_55c * fStack_27c + fVar182 * fStack_25c +
            fStack_45c * fVar243 + fStack_44c * fStack_24c + fStack_54c * fStack_23c) -
           (fVar103 * fVar191 + fVar181 * fVar220 + fVar217 * fVar197)) * fVar268;
      auVar133 = divps(auVar237,auVar115);
      fVar57 = (float)(-(uint)(param_9 <= fVar58) & auVar133._0_4_);
      fVar58 = (float)(-(uint)(param_9 <= fVar89) & auVar133._4_4_);
      fVar87 = (float)(-(uint)(param_9 <= fVar97) & auVar133._8_4_);
      fVar89 = (float)(-(uint)(param_9 <= fVar105) & auVar133._12_4_);
      auVar187._0_8_ = CONCAT44(auVar60._12_4_ + fVar275,auVar60._0_4_ + fVar271);
      auVar187._8_4_ = auVar134._8_4_ + fVar261;
      auVar187._12_4_ = pfVar5[1] + fVar263;
      auVar238._0_4_ = local_548 + fVar252;
      auVar238._4_4_ = fStack_544 + fVar253;
      auVar238._8_4_ = fStack_540 + fVar254;
      auVar238._12_4_ = fStack_53c + fVar255;
      auVar248._0_4_ = (float)local_2a8._0_4_ + fVar57;
      auVar248._4_4_ = (float)local_2a8._4_4_ + fVar58;
      auVar248._8_4_ = fVar199 + fVar87;
      auVar248._12_4_ = fVar203 + fVar89;
      auVar116._8_4_ = auVar187._8_4_;
      auVar116._0_8_ = auVar187._0_8_;
      auVar116._12_4_ = auVar187._12_4_;
      auVar60 = insertps(auVar116,auVar238,0x30);
      auVar60 = insertps(auVar60,auVar248,0x20);
      puVar3 = (undefined4 *)(param_7 + -0x20 + lVar42);
      *puVar3 = auVar60._0_4_;
      puVar3[1] = auVar60._12_4_;
      puVar3[2] = auVar60._8_4_;
      puVar3[3] = auVar60._4_4_;
      auVar117._4_4_ = auVar238._8_4_;
      auVar117._0_4_ = auVar238._4_4_;
      auVar117._8_4_ = auVar248._0_4_;
      auVar117._12_4_ = auVar248._4_4_;
      auVar60 = blendps(auVar117,auVar187,4);
      puVar3 = (undefined4 *)(param_7 + -0x10 + lVar42);
      *puVar3 = auVar60._0_4_;
      puVar3[1] = auVar60._12_4_;
      puVar3[2] = auVar60._8_4_;
      puVar3[3] = auVar60._4_4_;
      pfVar39 = (float *)(param_7 + lVar42);
      *pfVar39 = auVar248._8_4_;
      pfVar39[1] = auVar187._12_4_;
      pfVar39[2] = auVar238._12_4_;
      pfVar39[3] = auVar248._12_4_;
      fVar52 = local_248 * fVar57 + fVar53 * fVar252 + local_448 * fVar271;
      fVar53 = fStack_244 * fVar58 + fVar83 * fVar253 + fStack_444 * fVar275;
      fVar82 = fStack_240 * fVar87 + fVar93 * fVar254 + fStack_440 * fVar261;
      fVar83 = fStack_23c * fVar89 + fVar100 * fVar255 + fStack_43c * fVar263;
      fVar92 = local_258 * fVar57 + fVar54 * fVar252 + local_2b8 * fVar271;
      fVar93 = fStack_254 * fVar58 + fVar84 * fVar253 + fStack_2b4 * fVar275;
      fVar94 = fStack_250 * fVar87 + fVar94 * fVar254 + fStack_2b0 * fVar261;
      fVar99 = fStack_24c * fVar89 + fVar101 * fVar255 + fStack_2ac * fVar263;
      fVar199 = fVar234 * fVar57 + (float)local_5c8._0_4_ * fVar252 + local_538 * fVar271;
      fVar203 = fVar241 * fVar58 + (float)local_5c8._4_4_ * fVar253 + fStack_534 * fVar275;
      fVar96 = fVar242 * fVar87 + fStack_5c0 * fVar254 + fStack_530 * fVar261;
      fVar97 = fVar243 * fVar89 + fStack_5bc * fVar255 + fStack_52c * fVar263;
      fVar103 = local_268 * fVar57 + local_5b8 * fVar252 + (float)local_5f8._0_4_ * fVar271;
      fVar105 = fStack_264 * fVar58 + fStack_5b4 * fVar253 + (float)local_5f8._4_4_ * fVar275;
      fVar108 = fStack_260 * fVar87 + fStack_5b0 * fVar254 + fStack_5f0 * fVar261;
      fVar109 = fStack_25c * fVar89 + fStack_5ac * fVar255 + fStack_5ec * fVar263;
      fVar54 = local_288 * fVar57 + fVar55 * fVar252 + (float)local_5e8._0_4_ * fVar271;
      fVar55 = fStack_284 * fVar58 + fVar85 * fVar253 + (float)local_5e8._4_4_ * fVar275;
      fVar84 = fStack_280 * fVar87 + fVar95 * fVar254 + fStack_5e0 * fVar261;
      fVar85 = fStack_27c * fVar89 + fVar102 * fVar255 + fStack_5dc * fVar263;
      fVar57 = fVar57 * local_278 + fVar252 * local_5a8 + fVar271 * fVar56;
      fVar58 = fVar58 * fStack_274 + fVar253 * fStack_5a4 + fVar275 * fVar86;
      fVar87 = fVar87 * fStack_270 + fVar254 * fStack_5a0 + fVar261 * fStack_5d0;
      fVar89 = fVar89 * fStack_26c + fVar255 * fStack_59c + fVar263 * fStack_5cc;
      auVar62._4_4_ = -(uint)(0.0 < fStack_7e4);
      auVar62._0_4_ = -(uint)(0.0 < local_7e8);
      auVar62._8_4_ = -(uint)(0.0 < fStack_7e0);
      auVar62._12_4_ = -(uint)(0.0 < fStack_7dc);
      iVar46 = movmskps((int)param_15,auVar62);
      if (iVar46 != 0) {
        bVar45 = (char)((char)iVar46 << 4) >> 4;
        local_6e8 = local_6e8 + (fVar52 + fVar103) * local_7e8;
        auVar63._4_4_ = fStack_6e4 + (fVar53 + fVar105) * fStack_7e4;
        auVar63._0_4_ = local_6e8;
        auVar63._8_4_ = fStack_6e0 + (fVar82 + fVar108) * fStack_7e0;
        auVar63._12_4_ = fStack_6dc + (fVar83 + fVar109) * fStack_7dc;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + local_500) = local_6e8;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar63,1);
          *(undefined8 *)(param_1 + local_4f8) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar63,2);
          *(undefined8 *)(param_1 + local_4f0) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar63,3);
          *(undefined8 *)(param_1 + lVar47) = uVar19;
        }
        fVar110 = fVar110 + (fVar92 + fVar54) * local_7e8;
        auVar64._4_4_ = fVar179 + (fVar93 + fVar55) * fStack_7e4;
        auVar64._0_4_ = fVar110;
        auVar64._8_4_ = fVar256 + (fVar94 + fVar84) * fStack_7e0;
        auVar64._12_4_ = fVar260 + (fVar99 + fVar85) * fStack_7dc;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 4 + local_500) = fVar110;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar64,1);
          *(undefined8 *)(param_1 + 4 + local_4f8) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar64,2);
          *(undefined8 *)(param_1 + 4 + local_4f0) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar64,3);
          *(undefined8 *)(param_1 + 4 + lVar47) = uVar19;
        }
        auVar65._0_4_ = fVar264 + local_7e8 * (fVar199 + fVar57);
        auVar65._4_4_ = fVar267 + fStack_7e4 * (fVar203 + fVar58);
        auVar65._8_4_ = fVar270 + fStack_7e0 * (fVar96 + fVar87);
        auVar65._12_4_ = fVar274 + fStack_7dc * (fVar97 + fVar89);
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 8 + local_500) = auVar65._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar65,1);
          *(undefined8 *)(param_1 + 8 + local_4f8) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar65,2);
          *(undefined8 *)(param_1 + 8 + local_4f0) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar65,3);
          *(undefined8 *)(param_1 + 8 + lVar47) = uVar19;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_500) = uVar6;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4f8) = uVar7;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4f0) = uVar8;
        }
        iVar104 = iVar51;
        iVar88 = iVar90;
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar47) = uVar9;
        }
      }
      auVar66._4_4_ = -(uint)(0.0 < fStack_824);
      auVar66._0_4_ = -(uint)(0.0 < local_828);
      auVar66._8_4_ = -(uint)(0.0 < fStack_820);
      auVar66._12_4_ = -(uint)(0.0 < fStack_81c);
      iVar104 = movmskps(iVar104,auVar66);
      if (iVar104 != 0) {
        bVar45 = (char)((char)iVar104 << 4) >> 4;
        auVar67._0_4_ = fVar159 - fVar52 * local_828;
        auVar67._4_4_ = fVar192 - fVar53 * fStack_824;
        auVar67._8_4_ = fVar198 - fVar82 * fStack_820;
        auVar67._12_4_ = fVar204 - fVar83 * fStack_81c;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + local_4e8) = auVar67._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar67,1);
          *(undefined8 *)(param_1 + local_4e0) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar67,2);
          *(undefined8 *)(param_1 + local_4d8) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar67,3);
          *(undefined8 *)(param_1 + lVar41) = uVar19;
        }
        auVar68._0_4_ = local_748 - fVar92 * local_828;
        auVar68._4_4_ = fStack_744 - fVar93 * fStack_824;
        auVar68._8_4_ = fStack_740 - fVar94 * fStack_820;
        auVar68._12_4_ = fStack_73c - fVar99 * fStack_81c;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 4 + local_4e8) = auVar68._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar68,1);
          *(undefined8 *)(param_1 + 4 + local_4e0) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar68,2);
          *(undefined8 *)(param_1 + 4 + local_4d8) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar68,3);
          *(undefined8 *)(param_1 + 4 + lVar41) = uVar19;
        }
        auVar175._0_4_ = (float)local_738._0_4_ - local_828 * fVar199;
        auVar175._4_4_ = (float)local_738._4_4_ - fStack_824 * fVar203;
        auVar175._8_4_ = fStack_730 - fStack_820 * fVar96;
        auVar175._12_4_ = fStack_72c - fStack_81c * fVar97;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 8 + local_4e8) = auVar175._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar175,1);
          *(undefined8 *)(param_1 + 8 + local_4e0) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar175,2);
          *(undefined8 *)(param_1 + 8 + local_4d8) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar175,3);
          *(undefined8 *)(param_1 + 8 + lVar41) = uVar19;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_4e8) = uVar10;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4e0) = uVar11;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4d8) = uVar12;
        }
        iVar88 = iVar91;
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar41) = uVar13;
        }
      }
      auVar69._4_4_ = -(uint)(0.0 < fStack_7a4);
      auVar69._0_4_ = -(uint)(0.0 < local_7a8);
      auVar69._8_4_ = -(uint)(0.0 < fStack_7a0);
      auVar69._12_4_ = -(uint)(0.0 < fStack_79c);
      iVar104 = movmskps(iVar88,auVar69);
      if (iVar104 != 0) {
        bVar45 = (char)((char)iVar104 << 4) >> 4;
        auVar140._0_4_ = fVar205 - fVar103 * local_7a8;
        auVar140._4_4_ = fVar212 - fVar105 * fStack_7a4;
        auVar140._8_4_ = fVar273 - fVar108 * fStack_7a0;
        auVar140._12_4_ = fVar231 - fVar109 * fStack_79c;
        if ((bVar45 & 1) == 0) {
          if ((bVar45 & 2) == 0) goto LAB_1409bb590;
LAB_1409bb94b:
          uVar19 = extractps(auVar140,1);
          *(undefined8 *)(param_1 + local_4c8) = uVar19;
          if ((bVar45 & 4) != 0) goto LAB_1409bb95c;
LAB_1409bb59a:
          if (-1 < (char)bVar45) goto LAB_1409bb5a2;
LAB_1409bb96c:
          uVar19 = extractps(auVar140,3);
          *(undefined8 *)(param_1 + lVar24) = uVar19;
          auVar118._0_4_ = fVar216 - fVar54 * local_7a8;
          auVar118._4_4_ = fVar262 - fVar55 * fStack_7a4;
          auVar118._8_4_ = fVar221 - fVar84 * fStack_7a0;
          auVar118._12_4_ = fVar195 - fVar85 * fStack_79c;
          if ((bVar45 & 1) != 0) goto LAB_1409bb98d;
LAB_1409bb5b4:
          if ((bVar45 & 2) == 0) goto LAB_1409bb5be;
LAB_1409bb99d:
          uVar19 = extractps(auVar118,1);
          *(undefined8 *)(param_1 + 4 + local_4c8) = uVar19;
          if ((bVar45 & 4) != 0) goto LAB_1409bb9af;
LAB_1409bb5c8:
          if (-1 < (char)bVar45) goto LAB_1409bb5d0;
LAB_1409bb9c0:
          uVar19 = extractps(auVar118,3);
          *(undefined8 *)(param_1 + 4 + lVar24) = uVar19;
          auVar70._0_4_ = fVar224 - local_7a8 * fVar57;
          auVar70._4_4_ = fVar227 - fStack_7a4 * fVar58;
          auVar70._8_4_ = fVar229 - fStack_7a0 * fVar87;
          auVar70._12_4_ = fVar232 - fStack_79c * fVar89;
        }
        else {
          *(float *)(param_1 + local_4d0) = auVar140._0_4_;
          if ((bVar45 & 2) != 0) goto LAB_1409bb94b;
LAB_1409bb590:
          if ((bVar45 & 4) == 0) goto LAB_1409bb59a;
LAB_1409bb95c:
          uVar19 = extractps(auVar140,2);
          *(undefined8 *)(param_1 + local_4c0) = uVar19;
          if ((char)bVar45 < '\0') goto LAB_1409bb96c;
LAB_1409bb5a2:
          auVar118._0_4_ = fVar216 - fVar54 * local_7a8;
          auVar118._4_4_ = fVar262 - fVar55 * fStack_7a4;
          auVar118._8_4_ = fVar221 - fVar84 * fStack_7a0;
          auVar118._12_4_ = fVar195 - fVar85 * fStack_79c;
          if ((bVar45 & 1) == 0) goto LAB_1409bb5b4;
LAB_1409bb98d:
          *(int *)(param_1 + 4 + local_4d0) = auVar118._0_4_;
          if ((bVar45 & 2) != 0) goto LAB_1409bb99d;
LAB_1409bb5be:
          if ((bVar45 & 4) == 0) goto LAB_1409bb5c8;
LAB_1409bb9af:
          uVar19 = extractps(auVar118,2);
          *(undefined8 *)(param_1 + 4 + local_4c0) = uVar19;
          if ((char)bVar45 < '\0') goto LAB_1409bb9c0;
LAB_1409bb5d0:
          auVar70._0_4_ = fVar224 - local_7a8 * fVar57;
          auVar70._4_4_ = fVar227 - fStack_7a4 * fVar58;
          auVar70._8_4_ = fVar229 - fStack_7a0 * fVar87;
          auVar70._12_4_ = fVar232 - fStack_79c * fVar89;
        }
        if ((bVar45 & 1) != 0) {
          *(int *)(param_1 + 8 + local_4d0) = auVar70._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar70,1);
          *(undefined8 *)(param_1 + 8 + local_4c8) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar70,2);
          *(undefined8 *)(param_1 + 8 + local_4c0) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar70,3);
          *(undefined8 *)(param_1 + 8 + lVar24) = uVar19;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_4d0) = uVar14;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4c8) = uVar15;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4c0) = uVar16;
        }
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar24) = uVar17;
        }
      }
      uVar32 = local_4b0 + 4;
      lVar42 = lVar42 + 0x30;
      pfVar39 = local_4b8 + 0x10;
      local_2a8 = auVar113;
    } while ((int)uVar32 < (int)(uVar29 & 0xfffffffc));
  }
  uVar29 = (uint)uVar32;
  if ((int)param_28 <= (int)uVar29) {
    return;
  }
  auVar119 = ZEXT416(param_28);
  auVar167._0_4_ =
       -(uint)((int)(uVar29 | (uint)__xmm_00000003000000020000000100000000) < (int)param_28);
  auVar167._4_4_ =
       -(uint)((int)(uVar29 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_28);
  auVar167._8_4_ = -(uint)((int)(uVar29 | _UNK_150631e08) < (int)param_28);
  auVar167._12_4_ = -(uint)((int)(uVar29 | _UNK_150631e0c) < (int)param_28);
  uVar32 = uVar32 & 0xffffffff;
  pauVar2 = (undefined1 (*) [16])(param_3 + uVar32 * 0xc);
  uVar29 = movmskps(param_28,auVar167);
  bVar45 = (char)((char)uVar29 << 4) >> 4;
  if (uVar29 == 0xf) {
    auVar72 = *pauVar2;
    auVar60 = pauVar2[1];
    uVar106 = auVar60._0_4_;
    auVar240._4_4_ = uVar106;
    auVar240._0_4_ = uVar106;
    auVar240._8_4_ = uVar106;
    auVar240._12_4_ = uVar106;
    uVar106 = auVar72._12_4_;
    auVar245._0_8_ = CONCAT44(uVar106,auVar72._0_4_);
    auVar245._8_4_ = auVar72._4_4_;
    auVar245._12_4_ = uVar106;
    auVar133 = pblendw(auVar240,auVar245,0x3f);
    auVar209._0_8_ = auVar72._8_8_;
    auVar209._8_4_ = auVar72._8_4_;
    auVar209._12_4_ = uVar106;
    auVar134 = pblendw(auVar209,auVar60,0xc);
    auVar119._0_8_ = CONCAT44(*(undefined4 *)(pauVar2[2] + 4),auVar60._8_4_);
    auVar119._8_4_ = auVar60._12_4_;
    auVar119._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar244._8_8_ = auVar119._0_8_;
    auVar244._0_8_ = auVar245._0_8_;
    auVar239._8_8_ = auVar119._8_8_;
    auVar239._0_8_ = auVar133._8_8_;
    auVar208._0_8_ = auVar134._0_8_;
    auVar208._8_4_ = *(undefined4 *)pauVar2[2];
    auVar208._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar71._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar167._0_4_;
    auVar71._4_4_ = _UNK_150b50da4 & auVar167._4_4_;
    auVar71._8_4_ = _UNK_150b50da8 & auVar167._8_4_;
    auVar71._12_4_ = _UNK_150b50dac & auVar167._12_4_;
    lVar42 = extractps(auVar71,1);
    lVar24 = extractps(auVar71,2);
    lVar33 = extractps(auVar71,3);
    auVar244._4_4_ = *(undefined4 *)(*pauVar2 + lVar42);
    auVar244._0_4_ = *(undefined4 *)*pauVar2;
    auVar244._12_4_ = *(undefined4 *)(*pauVar2 + lVar33);
    auVar244._8_4_ = *(undefined4 *)(*pauVar2 + lVar24);
    auVar60 = ___xmm_000000280000001c0000001000000004 & auVar167;
    auVar239._4_4_ = *(undefined4 *)(*pauVar2 + auVar60._4_4_);
    auVar239._0_4_ = *(undefined4 *)(*pauVar2 + auVar60._0_4_);
    auVar239._12_4_ = *(undefined4 *)(*pauVar2 + auVar60._12_4_);
    auVar239._8_4_ = *(undefined4 *)(*pauVar2 + auVar60._8_4_);
    auVar72 = ___xmm_0000002c000000200000001400000008 & auVar167;
    auVar208._4_4_ = *(undefined4 *)(*pauVar2 + auVar72._4_4_);
    auVar208._0_4_ = *(undefined4 *)(*pauVar2 + auVar72._0_4_);
    auVar208._12_4_ = *(undefined4 *)(*pauVar2 + auVar72._12_4_);
    auVar208._8_4_ = *(undefined4 *)(*pauVar2 + auVar72._8_4_);
  }
  auVar172 = ZEXT816(0);
  bVar43 = ~bVar45;
  auVar178 = ZEXT816(0);
  if ((param_10 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar178 = ZEXT416(*(uint *)(param_11 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_11 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar178 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar72._8_8_ = auVar178._8_8_;
        auVar72._0_8_ = auVar178._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar178 = pblendw(auVar178,auVar72,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        auVar60 = pmovzxwd(auVar72,auVar178);
        auVar72._8_8_ = auVar60._8_8_;
        auVar72._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)auVar178[3] << 0x18;
        auVar178 = auVar72;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar178[2];
        auVar60 = pmovzxwd(auVar178,auVar178);
        auVar178._8_8_ = auVar60._8_8_;
        auVar178._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  if ((param_13 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar172 = ZEXT416(*(uint *)(param_14 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_14 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar172 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar72._8_8_ = auVar172._8_8_;
        auVar72._0_8_ = auVar172._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar172 = pblendw(auVar172,auVar72,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        bVar20 = auVar172[3];
        auVar60 = pmovzxwd(auVar72,auVar172);
        auVar172._8_8_ = auVar60._8_8_;
        auVar172._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar172[2];
        auVar60 = pmovzxwd(auVar172,auVar172);
        auVar172._8_8_ = auVar60._8_8_;
        auVar172._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar73 = (undefined1  [16])0x0;
  auVar190 = ZEXT816(0);
  if ((param_16 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar190 = ZEXT416(*(uint *)(param_17 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_17 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar190 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar119._8_8_ = auVar190._8_8_;
        auVar119._0_8_ = auVar190._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar190 = pblendw(auVar190,auVar119,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        bVar20 = auVar190[3];
        auVar60 = pmovzxwd(auVar119,auVar190);
        auVar190._8_8_ = auVar60._8_8_;
        auVar190._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar190[2];
        auVar60 = pmovzxwd(auVar190,auVar190);
        auVar190._8_8_ = auVar60._8_8_;
        auVar190._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  if ((param_22 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar73 = ZEXT416(*(uint *)(param_23 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_23 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar73 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar128._8_8_ = auVar73._8_8_;
        auVar128._0_8_ = auVar73._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar73 = pblendw(auVar73,auVar128,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        bVar20 = auVar73[3];
        auVar60 = pmovzxwd(auVar73,auVar73);
        auVar73._8_8_ = auVar60._8_8_;
        auVar73._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar73[2];
        auVar60 = pmovzxwd(auVar73,auVar73);
        auVar73._8_8_ = auVar60._8_8_;
        auVar73._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar251 = ZEXT816(0);
  auVar120 = (undefined1  [16])0x0;
  if ((param_25 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar120 = ZEXT416(*(uint *)(param_26 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_26 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar120 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar154._8_8_ = auVar120._8_8_;
        auVar154._0_8_ = auVar120._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar120 = pblendw(auVar120,auVar154,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        bVar20 = auVar120[3];
        auVar60 = pmovzxwd(auVar120,auVar120);
        auVar120._8_8_ = auVar60._8_8_;
        auVar120._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar120[2];
        auVar60 = pmovzxwd(auVar120,auVar120);
        auVar120._8_8_ = auVar60._8_8_;
        auVar120._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  if ((param_19 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar251 = ZEXT416(*(uint *)(param_20 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_20 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar251 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar155._8_8_ = auVar251._8_8_;
        auVar155._0_8_ = auVar251._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar251 = pblendw(auVar251,auVar155,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        bVar20 = auVar251[3];
        auVar60 = pmovzxwd(auVar251,auVar251);
        auVar251._8_8_ = auVar60._8_8_;
        auVar251._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar251[2];
        auVar60 = pmovzxwd(auVar251,auVar251);
        auVar251._8_8_ = auVar60._8_8_;
        auVar251._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar165._0_4_ = auVar244._0_4_ << 4;
  auVar165._4_4_ = auVar244._4_4_ << 4;
  auVar165._8_4_ = auVar244._8_4_ << 4;
  auVar165._12_4_ = auVar244._12_4_ << 4;
  auVar60 = auVar167 & auVar165;
  pfVar39 = (float *)(auVar60._0_4_ + param_1);
  if ((bVar45 & 1) != 0) {
    local_628 = *pfVar39;
  }
  lVar42 = (longlong)auVar60._4_4_;
  if ((bVar45 & 2) != 0) {
    fStack_624 = *(float *)(param_1 + lVar42);
  }
  auVar134 = ___xmm_00000004000000040000000400000004 & auVar167;
  if ((bVar45 & 4) != 0) {
    fStack_620 = *(float *)(param_1 + auVar60._8_4_);
  }
  uVar25 = (ulonglong)auVar134._0_4_;
  uVar29 = auVar134._4_4_;
  if ((char)bVar45 < '\0') {
    fStack_61c = *(float *)(param_1 + auVar60._12_4_);
  }
  if ((bVar45 & 1) != 0) {
    local_618 = *(float *)(uVar25 + (longlong)pfVar39);
  }
  if ((bVar45 & 2) != 0) {
    fStack_614 = *(float *)((ulonglong)uVar29 + lVar42 + param_1);
  }
  uVar34 = (ulonglong)auVar134._8_4_;
  auVar133 = ___xmm_00000008000000080000000800000008 & auVar167;
  lVar24 = auVar60._8_4_ + param_1;
  uVar30 = (ulonglong)auVar134._12_4_;
  if ((bVar45 & 4) != 0) {
    fStack_610 = *(float *)(uVar34 + lVar24);
  }
  uVar26 = (ulonglong)auVar133._0_4_;
  lVar33 = auVar60._12_4_ + param_1;
  if ((char)bVar45 < '\0') {
    fStack_60c = *(float *)(uVar30 + lVar33);
  }
  if ((bVar45 & 1) != 0) {
    local_608 = *(float *)(uVar26 + (longlong)pfVar39);
  }
  local_818 = (ulonglong)auVar133._4_4_;
  local_528._0_4_ = auVar239._0_4_ << 4;
  local_528._4_4_ = auVar239._4_4_ << 4;
  local_528._8_4_ = auVar239._8_4_ << 4;
  local_528._12_4_ = auVar239._12_4_ << 4;
  uVar27 = (ulonglong)auVar133._8_4_;
  if ((bVar45 & 2) != 0) {
    fStack_604 = *(float *)(local_818 + lVar42 + param_1);
  }
  auVar60 = auVar167 & local_528;
  uVar28 = (ulonglong)auVar133._12_4_;
  if ((bVar45 & 4) != 0) {
    fStack_600 = *(float *)(uVar27 + lVar24);
  }
  if ((char)bVar45 < '\0') {
    fStack_5fc = *(float *)(uVar28 + lVar33);
  }
  lVar37 = (longlong)auVar60._0_4_;
  if ((bVar45 & 1) != 0) {
    local_658 = *(float *)(param_1 + lVar37);
  }
  lVar48 = (longlong)auVar60._4_4_;
  iVar104 = auVar60._8_4_;
  iVar46 = auVar208._0_4_;
  iVar98 = auVar208._4_4_;
  iVar129 = auVar208._8_4_;
  iVar130 = auVar208._12_4_;
  iVar88 = auVar60._12_4_;
  if ((bVar45 & 2) == 0) {
    if ((bVar45 & 4) == 0) goto LAB_1409bc0c3;
LAB_1409bc31a:
    fStack_650 = *(float *)(param_1 + iVar104);
    if ((char)bVar45 < '\0') goto LAB_1409bc335;
LAB_1409bc0cf:
    if ((bVar45 & 1) == 0) goto LAB_1409bc0db;
LAB_1409bc34f:
    local_648 = *(float *)(uVar25 + lVar37 + param_1);
    if ((bVar45 & 2) != 0) goto LAB_1409bc372;
LAB_1409bc0e7:
    lVar49 = iVar104 + param_1;
    if ((bVar45 & 4) == 0) goto LAB_1409bc0f3;
LAB_1409bc395:
    fStack_640 = *(float *)(uVar34 + lVar49);
    lVar41 = iVar88 + param_1;
    if ((char)bVar45 < '\0') goto LAB_1409bc3b1;
LAB_1409bc0ff:
    if ((bVar45 & 1) == 0) goto LAB_1409bc110;
LAB_1409bc3d0:
    local_638 = *(float *)(uVar26 + lVar37 + param_1);
    local_518._0_4_ = iVar46 << 4;
    local_518._4_4_ = iVar98 << 4;
    local_518._8_4_ = iVar129 << 4;
    local_518._12_4_ = iVar130 << 4;
    if ((bVar45 & 2) != 0) goto LAB_1409bc3f9;
LAB_1409bc122:
    auVar60 = auVar167 & local_518;
    if ((bVar45 & 4) == 0) goto LAB_1409bc134;
LAB_1409bc422:
    fStack_630 = *(float *)(uVar27 + lVar49);
    iVar104 = auVar60._0_4_;
    if ((char)bVar45 < '\0') goto LAB_1409bc44e;
LAB_1409bc149:
    iVar88 = auVar60._4_4_;
  }
  else {
    fStack_654 = *(float *)(param_1 + lVar48);
    if ((bVar45 & 4) != 0) goto LAB_1409bc31a;
LAB_1409bc0c3:
    if (-1 < (char)bVar45) goto LAB_1409bc0cf;
LAB_1409bc335:
    fStack_64c = *(float *)(param_1 + iVar88);
    if ((bVar45 & 1) != 0) goto LAB_1409bc34f;
LAB_1409bc0db:
    if ((bVar45 & 2) == 0) goto LAB_1409bc0e7;
LAB_1409bc372:
    fStack_644 = *(float *)((ulonglong)uVar29 + lVar48 + param_1);
    lVar49 = iVar104 + param_1;
    if ((bVar45 & 4) != 0) goto LAB_1409bc395;
LAB_1409bc0f3:
    lVar41 = iVar88 + param_1;
    if (-1 < (char)bVar45) goto LAB_1409bc0ff;
LAB_1409bc3b1:
    fStack_63c = *(float *)(uVar30 + lVar41);
    if ((bVar45 & 1) != 0) goto LAB_1409bc3d0;
LAB_1409bc110:
    local_518._0_4_ = iVar46 << 4;
    local_518._4_4_ = iVar98 << 4;
    local_518._8_4_ = iVar129 << 4;
    local_518._12_4_ = iVar130 << 4;
    if ((bVar45 & 2) == 0) goto LAB_1409bc122;
LAB_1409bc3f9:
    fStack_634 = *(float *)(local_818 + lVar48 + param_1);
    auVar60 = auVar167 & local_518;
    if ((bVar45 & 4) != 0) goto LAB_1409bc422;
LAB_1409bc134:
    iVar104 = auVar60._0_4_;
    if (-1 < (char)bVar45) goto LAB_1409bc149;
LAB_1409bc44e:
    fStack_62c = *(float *)(uVar28 + lVar41);
    iVar88 = auVar60._4_4_;
  }
  lVar47 = (longlong)iVar104;
  if ((bVar45 & 1) != 0) {
    local_688 = *(float *)(param_1 + lVar47);
  }
  lVar50 = (longlong)iVar88;
  if ((bVar45 & 2) != 0) {
    fStack_684 = *(float *)(param_1 + lVar50);
  }
  if ((bVar45 & 4) != 0) {
    fStack_680 = *(float *)(param_1 + auVar60._8_4_);
  }
  if ((char)bVar45 < '\0') {
    fStack_67c = *(float *)(param_1 + auVar60._12_4_);
  }
  if ((bVar45 & 1) != 0) {
    local_678 = *(float *)(uVar25 + lVar47 + param_1);
  }
  if ((bVar45 & 2) != 0) {
    fStack_674 = *(float *)((ulonglong)uVar29 + lVar50 + param_1);
  }
  auVar134 = ___xmm_0000000c0000000c0000000c0000000c & auVar167;
  lVar35 = auVar60._8_4_ + param_1;
  if ((bVar45 & 4) != 0) {
    fStack_670 = *(float *)(uVar34 + lVar35);
  }
  uVar31 = (ulonglong)auVar134._0_4_;
  lVar44 = auVar60._12_4_ + param_1;
  if ((char)bVar45 < '\0') {
    fStack_66c = *(float *)(uVar30 + lVar44);
  }
  if ((bVar45 & 1) != 0) {
    local_668 = *(float *)(uVar26 + lVar47 + param_1);
  }
  uVar38 = (ulonglong)auVar134._4_4_;
  uVar36 = (ulonglong)auVar134._8_4_;
  if ((bVar45 & 2) != 0) {
    fStack_664 = *(float *)(local_818 + lVar50 + param_1);
  }
  uVar40 = (ulonglong)auVar134._12_4_;
  auVar134 = insertps(ZEXT416(*(uint *)(uVar31 + (longlong)pfVar39)),
                      *(undefined4 *)(uVar38 + lVar42 + param_1),0x10);
  auVar60 = insertps(ZEXT416(*(uint *)(uVar31 + lVar37 + param_1)),
                     *(undefined4 *)(uVar38 + lVar48 + param_1),0x10);
  auVar133 = insertps(ZEXT416(*(uint *)(uVar31 + lVar47 + param_1)),
                      *(undefined4 *)(uVar38 + lVar50 + param_1),0x10);
  if ((bVar45 & 4) != 0) {
    fStack_660 = *(float *)(uVar27 + lVar35);
  }
  auVar134 = insertps(auVar134,*(undefined4 *)(uVar36 + lVar24),0x20);
  auVar60 = insertps(auVar60,*(undefined4 *)(uVar36 + lVar49),0x20);
  auVar133 = insertps(auVar133,*(undefined4 *)(uVar36 + lVar35),0x20);
  if (((char)bVar45 < '\0') && (fStack_65c = *(float *)(uVar28 + lVar44), (bVar43 & 0xf) == 0)) {
    lVar42 = uVar32 * 0x10;
    auVar207 = *(undefined1 (*) [16])(param_5 + lVar42);
    puVar3 = (undefined4 *)(param_5 + 0x10 + lVar42);
    auVar136 = *(undefined1 (*) [16])(param_5 + 0x20 + lVar42);
    puVar4 = (undefined4 *)(param_5 + 0x30 + lVar42);
    auVar219._8_4_ = auVar207._4_4_;
    auVar219._0_8_ = auVar207._0_8_;
    auVar219._12_4_ = puVar3[1];
    local_128._4_4_ = *puVar3;
    local_128._0_4_ = auVar207._0_4_;
    auVar202._0_8_ = CONCAT44(puVar3[2],auVar207._8_4_);
    auVar202._8_4_ = auVar207._12_4_;
    auVar202._12_4_ = puVar3[3];
    auVar171._0_8_ = auVar136._0_8_;
    auVar171._8_4_ = auVar136._4_4_;
    auVar171._12_4_ = puVar4[1];
    local_118._8_8_ = auVar171._8_8_;
    local_128._12_4_ = *puVar4;
    local_128._8_4_ = auVar136._0_4_;
    auVar189._0_8_ = CONCAT44(puVar4[2],auVar136._8_4_);
    auVar189._8_4_ = auVar136._12_4_;
    auVar189._12_4_ = puVar4[3];
    local_118._0_8_ = auVar219._8_8_;
    local_108._8_8_ = auVar189._0_8_;
    local_108._0_8_ = auVar202._0_8_;
    local_f8._8_8_ = auVar189._8_8_;
    local_f8._0_8_ = auVar202._8_8_;
  }
  else {
    auVar141._0_4_ = ___xmm_00000030000000200000001000000000 & auVar167._0_4_;
    auVar141._4_4_ = _UNK_150b511c4 & auVar167._4_4_;
    auVar141._8_4_ = _UNK_150b511c8 & auVar167._8_4_;
    auVar141._12_4_ = _UNK_150b511cc & auVar167._12_4_;
    lVar24 = extractps(auVar141,1);
    lVar48 = extractps(auVar141,2);
    lVar37 = extractps(auVar141,3);
    lVar42 = param_5 + uVar32 * 0x10;
    auVar207 = insertps(ZEXT416(*(uint *)(param_5 + uVar32 * 0x10)),*(undefined4 *)(lVar24 + lVar42)
                        ,0x10);
    auVar207 = insertps(auVar207,*(undefined4 *)(lVar48 + lVar42),0x20);
    local_128 = insertps(auVar207,*(undefined4 *)(lVar37 + lVar42),0x30);
    auVar207 = ___xmm_00000034000000240000001400000004 & auVar167;
    auVar136 = insertps(ZEXT416(*(uint *)((ulonglong)auVar207._0_4_ + lVar42)),
                        *(undefined4 *)((ulonglong)auVar207._4_4_ + lVar42),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._8_4_ + lVar42),0x20);
    local_118 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._12_4_ + lVar42),0x30);
    auVar207 = ___xmm_00000038000000280000001800000008 & auVar167;
    auVar136 = insertps(ZEXT416(*(uint *)((ulonglong)auVar207._0_4_ + lVar42)),
                        *(undefined4 *)((ulonglong)auVar207._4_4_ + lVar42),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._8_4_ + lVar42),0x20);
    local_108 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._12_4_ + lVar42),0x30);
    auVar207 = ___xmm_0000003c0000002c0000001c0000000c & auVar167;
    auVar136 = insertps(ZEXT416(*(uint *)((ulonglong)auVar207._0_4_ + lVar42)),
                        *(undefined4 *)((ulonglong)auVar207._4_4_ + lVar42),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._8_4_ + lVar42),0x20);
    local_f8 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._12_4_ + lVar42),0x30);
  }
  auVar134 = insertps(auVar134,*(undefined4 *)(uVar40 + lVar33),0x30);
  auVar60 = insertps(auVar60,*(undefined4 *)(uVar40 + lVar41),0x30);
  auVar133 = insertps(auVar133,*(undefined4 *)(uVar40 + lVar44),0x30);
  pauVar2 = (undefined1 (*) [16])(param_4 + uVar32 * 0xc);
  if ((bVar43 & 0xf) == 0) {
    auVar207 = *pauVar2;
    auVar136 = pauVar2[1];
    local_158._0_4_ = auVar207._0_4_;
    auVar61 = insertps(auVar136,auVar207,0x8c);
    local_158._4_4_ = auVar207._12_4_;
    local_158._8_4_ = auVar136._8_4_;
    local_158._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    local_148._4_4_ = auVar136._0_4_;
    local_148._0_4_ = auVar207._4_4_;
    local_148._8_4_ = auVar136._12_4_;
    local_148._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar176._0_8_ = auVar61._0_8_;
    auVar176._8_4_ = *(undefined4 *)pauVar2[2];
    auVar176._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar142._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar167._0_4_;
    auVar142._4_4_ = _UNK_150b50da4 & auVar167._4_4_;
    auVar142._8_4_ = _UNK_150b50da8 & auVar167._8_4_;
    auVar142._12_4_ = _UNK_150b50dac & auVar167._12_4_;
    lVar42 = extractps(auVar142,1);
    lVar24 = extractps(auVar142,2);
    lVar33 = extractps(auVar142,3);
    auVar207 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar42),0x10);
    auVar207 = insertps(auVar207,*(undefined4 *)(*pauVar2 + lVar24),0x20);
    local_158 = insertps(auVar207,*(undefined4 *)(*pauVar2 + lVar33),0x30);
    auVar207 = ___xmm_000000280000001c0000001000000004 & auVar167;
    auVar136 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar207._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar207._4_4_),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar207._8_4_),0x20);
    local_148 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar207._12_4_),0x30);
    auVar207 = ___xmm_0000002c000000200000001400000008 & auVar167;
    auVar136 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar207._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar207._4_4_),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar207._8_4_),0x20);
    auVar176 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar207._12_4_),0x30);
  }
  auVar207 = pmovsxbd(auVar73,auVar73);
  auVar74._0_4_ = auVar207._0_4_ << 2;
  auVar74._4_4_ = auVar207._4_4_ << 2;
  auVar74._8_4_ = auVar207._8_4_ << 2;
  auVar74._12_4_ = auVar207._12_4_ << 2;
  auVar74 = auVar74 & auVar167;
  auVar207 = insertps(ZEXT416(*(uint *)(param_24 + auVar74._0_4_)),
                      *(undefined4 *)(param_24 + auVar74._4_4_),0x10);
  auVar207 = insertps(auVar207,*(undefined4 *)(param_24 + auVar74._8_4_),0x20);
  local_1f8 = insertps(auVar207,*(undefined4 *)(param_24 + auVar74._12_4_),0x30);
  auVar207 = pmovsxbd(auVar120,auVar120);
  auVar121._0_4_ = auVar207._0_4_ << 2;
  auVar121._4_4_ = auVar207._4_4_ << 2;
  auVar121._8_4_ = auVar207._8_4_ << 2;
  auVar121._12_4_ = auVar207._12_4_ << 2;
  auVar121 = auVar121 & auVar167;
  auVar207 = insertps(ZEXT416(*(uint *)(param_27 + auVar121._0_4_)),
                      *(undefined4 *)(param_27 + auVar121._4_4_),0x10);
  auVar207 = insertps(auVar207,*(undefined4 *)(param_27 + auVar121._8_4_),0x20);
  local_208 = insertps(auVar207,*(undefined4 *)(param_27 + auVar121._12_4_),0x30);
  _local_5c8 = auVar167;
  local_590 = param_3;
  local_588 = param_4;
  local_580 = param_2;
  local_218 = auVar167;
  local_138 = auVar176;
  FUN_1409aeab0(&local_628,&local_658,&local_688,local_128,local_158,local_1f8,local_208,&local_1c8,
                &local_1d8,&local_1e8,&local_3a8,&local_3d8,&local_408,&local_438,&local_188,
                &local_1b8,local_218);
  auVar75._4_4_ = auVar244._4_4_ * 3;
  auVar75._0_4_ = auVar244._0_4_ * 3;
  auVar75._8_4_ = auVar244._8_4_ * 3;
  auVar75._12_4_ = auVar244._12_4_ * 3;
  auVar75 = auVar75 & auVar167;
  lVar42 = local_580 + (longlong)auVar75._0_4_ * 4;
  auVar122._4_4_ = auVar239._4_4_ * 3;
  auVar122._0_4_ = auVar239._0_4_ * 3;
  auVar122._8_4_ = auVar239._8_4_ * 3;
  auVar122._12_4_ = auVar239._12_4_ * 3;
  auVar122 = auVar122 & auVar167;
  lVar24 = local_580 + (longlong)auVar122._0_4_ * 4;
  auVar143._4_4_ = iVar98 * 3;
  auVar143._0_4_ = iVar46 * 3;
  auVar143._8_4_ = iVar129 * 3;
  auVar143._12_4_ = iVar130 * 3;
  auVar143 = auVar143 & auVar167;
  lVar33 = local_580 + (longlong)auVar143._0_4_ * 4;
  lVar37 = local_580 + (longlong)auVar75._4_4_ * 4;
  uVar31 = (ulonglong)uVar29;
  auVar207 = insertps(ZEXT416(*(uint *)(uVar25 + lVar42)),*(undefined4 *)(uVar31 + lVar37),0x10);
  auVar136 = insertps(ZEXT416(*(uint *)(uVar26 + lVar42)),*(undefined4 *)(local_818 + lVar37),0x10);
  lVar42 = local_580 + (longlong)auVar122._4_4_ * 4;
  auVar61 = insertps(ZEXT416(*(uint *)(uVar25 + lVar24)),*(undefined4 *)(uVar31 + lVar42),0x10);
  auVar246 = insertps(ZEXT416(*(uint *)(uVar26 + lVar24)),*(undefined4 *)(local_818 + lVar42),0x10);
  lVar42 = local_580 + (longlong)auVar143._4_4_ * 4;
  auVar257 = insertps(ZEXT416(*(uint *)(uVar25 + lVar33)),*(undefined4 *)(uVar31 + lVar42),0x10);
  auVar112 = insertps(ZEXT416(*(uint *)(uVar26 + lVar33)),*(undefined4 *)(local_818 + lVar42),0x10);
  lVar42 = local_580 + (longlong)auVar75._8_4_ * 4;
  auVar207 = insertps(auVar207,*(undefined4 *)(uVar34 + lVar42),0x20);
  auVar136 = insertps(auVar136,*(undefined4 *)(uVar27 + lVar42),0x20);
  lVar42 = local_580 + (longlong)auVar122._8_4_ * 4;
  auVar61 = insertps(auVar61,*(undefined4 *)(uVar34 + lVar42),0x20);
  auVar247 = insertps(auVar246,*(undefined4 *)(uVar27 + lVar42),0x20);
  lVar42 = local_580 + (longlong)auVar143._8_4_ * 4;
  auVar246 = insertps(auVar257,*(undefined4 *)(uVar34 + lVar42),0x20);
  auVar236 = insertps(auVar112,*(undefined4 *)(uVar27 + lVar42),0x20);
  auVar257 = insertps(ZEXT416(*(uint *)(local_580 + (longlong)auVar75._0_4_ * 4)),
                      *(undefined4 *)(local_580 + (longlong)auVar75._4_4_ * 4),0x10);
  auVar257 = insertps(auVar257,*(undefined4 *)(local_580 + (longlong)auVar75._8_4_ * 4),0x20);
  auVar200 = insertps(auVar257,*(undefined4 *)(local_580 + (longlong)auVar75._12_4_ * 4),0x30);
  lVar42 = local_580 + (longlong)auVar75._12_4_ * 4;
  auVar257 = insertps(auVar207,*(undefined4 *)(uVar30 + lVar42),0x30);
  auVar112 = insertps(auVar136,*(undefined4 *)(uVar28 + lVar42),0x30);
  auVar207 = insertps(ZEXT416(*(uint *)(local_580 + (longlong)auVar122._0_4_ * 4)),
                      *(undefined4 *)(local_580 + (longlong)auVar122._4_4_ * 4),0x10);
  auVar207 = insertps(auVar207,*(undefined4 *)(local_580 + (longlong)auVar122._8_4_ * 4),0x20);
  auVar237 = insertps(auVar207,*(undefined4 *)(local_580 + (longlong)auVar122._12_4_ * 4),0x30);
  lVar42 = local_580 + (longlong)auVar122._12_4_ * 4;
  auVar184 = insertps(auVar61,*(undefined4 *)(uVar30 + lVar42),0x30);
  auVar249 = insertps(auVar247,*(undefined4 *)(uVar28 + lVar42),0x30);
  auVar207 = insertps(ZEXT416(*(uint *)(local_580 + (longlong)auVar143._0_4_ * 4)),
                      *(undefined4 *)(local_580 + (longlong)auVar143._4_4_ * 4),0x10);
  auVar207 = insertps(auVar207,*(undefined4 *)(local_580 + (longlong)auVar143._8_4_ * 4),0x20);
  auVar235 = insertps(auVar207,*(undefined4 *)(local_580 + (longlong)auVar143._12_4_ * 4),0x30);
  local_580 = local_580 + (longlong)auVar143._12_4_ * 4;
  auVar247 = insertps(auVar246,*(undefined4 *)(uVar30 + local_580),0x30);
  auVar236 = insertps(auVar236,*(undefined4 *)(uVar28 + local_580),0x30);
  local_6f8 = auVar178._0_4_;
  auVar207 = pmovsxbd(auVar122,local_6f8);
  auVar123._0_4_ = auVar207._0_4_ << 2;
  auVar123._4_4_ = auVar207._4_4_ << 2;
  auVar123._8_4_ = auVar207._8_4_ << 2;
  auVar123._12_4_ = auVar207._12_4_ << 2;
  auVar123 = auVar123 & auVar167;
  auVar207 = insertps(ZEXT416(*(uint *)(param_12 + auVar123._0_4_)),
                      *(undefined4 *)(param_12 + auVar123._4_4_),0x10);
  auVar207 = insertps(auVar207,*(undefined4 *)(param_12 + auVar123._8_4_),0x20);
  auVar207 = insertps(auVar207,*(undefined4 *)(param_12 + auVar123._12_4_),0x30);
  local_6e8 = auVar172._0_4_;
  auVar136 = pmovsxbd(auVar143,local_6e8);
  auVar144._0_4_ = auVar136._0_4_ << 2;
  auVar144._4_4_ = auVar136._4_4_ << 2;
  auVar144._8_4_ = auVar136._8_4_ << 2;
  auVar144._12_4_ = auVar136._12_4_ << 2;
  auVar144 = auVar144 & auVar167;
  auVar136 = insertps(ZEXT416(*(uint *)(param_15 + auVar144._0_4_)),
                      *(undefined4 *)(param_15 + auVar144._4_4_),0x10);
  auVar136 = insertps(auVar136,*(undefined4 *)(param_15 + auVar144._8_4_),0x20);
  auVar136 = insertps(auVar136,*(undefined4 *)(param_15 + auVar144._12_4_),0x30);
  local_6c8 = auVar190._0_4_;
  auVar61 = pmovsxbd(auVar176,local_6c8);
  auVar177._0_4_ = auVar61._0_4_ << 2;
  auVar177._4_4_ = auVar61._4_4_ << 2;
  auVar177._8_4_ = auVar61._8_4_ << 2;
  auVar177._12_4_ = auVar61._12_4_ << 2;
  auVar177 = auVar177 & auVar167;
  auVar61 = insertps(ZEXT416(*(uint *)(param_18 + auVar177._0_4_)),
                     *(undefined4 *)(param_18 + auVar177._4_4_),0x10);
  auVar61 = insertps(auVar61,*(undefined4 *)(param_18 + auVar177._8_4_),0x20);
  auVar61 = insertps(auVar61,*(undefined4 *)(param_18 + auVar177._12_4_),0x30);
  auVar246 = pmovsxbd(auVar251,auVar251);
  auVar250._0_4_ = auVar246._0_4_ << 2;
  auVar250._4_4_ = auVar246._4_4_ << 2;
  auVar250._8_4_ = auVar246._8_4_ << 2;
  auVar250._12_4_ = auVar246._12_4_ << 2;
  auVar250 = auVar250 & auVar167;
  auVar246 = insertps(ZEXT416(*(uint *)(param_21 + auVar250._0_4_)),
                      *(undefined4 *)(param_21 + auVar250._4_4_),0x10);
  auVar246 = insertps(auVar246,*(undefined4 *)(param_21 + auVar250._8_4_),0x20);
  auVar246 = insertps(auVar246,*(undefined4 *)(param_21 + auVar250._12_4_),0x30);
  fVar103 = local_628 - auVar200._0_4_;
  fVar108 = fStack_624 - auVar200._4_4_;
  fVar52 = fStack_620 - auVar200._8_4_;
  fVar54 = fStack_61c - auVar200._12_4_;
  fVar105 = local_618 - auVar257._0_4_;
  fVar109 = fStack_614 - auVar257._4_4_;
  fVar53 = fStack_610 - auVar257._8_4_;
  fVar55 = fStack_60c - auVar257._12_4_;
  fVar199 = local_608 - auVar112._0_4_;
  fVar57 = fStack_604 - auVar112._4_4_;
  fVar87 = fStack_600 - auVar112._8_4_;
  fVar96 = fStack_5fc - auVar112._12_4_;
  fVar203 = local_658 - auVar237._0_4_;
  fVar58 = fStack_654 - auVar237._4_4_;
  fVar89 = fStack_650 - auVar237._8_4_;
  fVar97 = fStack_64c - auVar237._12_4_;
  fVar56 = local_648 - auVar184._0_4_;
  fVar82 = fStack_644 - auVar184._4_4_;
  fVar83 = fStack_640 - auVar184._8_4_;
  fVar84 = fStack_63c - auVar184._12_4_;
  fVar132 = local_638 - auVar249._0_4_;
  fVar156 = fStack_634 - auVar249._4_4_;
  fVar273 = fStack_630 - auVar249._8_4_;
  fVar157 = fStack_62c - auVar249._12_4_;
  fVar85 = local_688 - auVar235._0_4_;
  fVar86 = fStack_684 - auVar235._4_4_;
  fVar92 = fStack_680 - auVar235._8_4_;
  fVar93 = fStack_67c - auVar235._12_4_;
  fVar94 = local_678 - auVar247._0_4_;
  fVar95 = fStack_674 - auVar247._4_4_;
  fVar231 = fStack_670 - auVar247._8_4_;
  fVar99 = fStack_66c - auVar247._12_4_;
  fVar100 = local_668 - auVar236._0_4_;
  fVar101 = fStack_664 - auVar236._4_4_;
  fVar102 = fStack_660 - auVar236._8_4_;
  fVar110 = fStack_65c - auVar236._12_4_;
  local_7a8 = auVar134._0_4_;
  fStack_7a4 = auVar134._4_4_;
  fStack_7a0 = auVar134._8_4_;
  fStack_79c = auVar134._12_4_;
  local_7e8 = auVar60._0_4_;
  fStack_7e4 = auVar60._4_4_;
  fStack_7e0 = auVar60._8_4_;
  fStack_7dc = auVar60._12_4_;
  local_828 = auVar133._0_4_;
  fStack_824 = auVar133._4_4_;
  fStack_820 = auVar133._8_4_;
  fStack_81c = auVar133._12_4_;
  local_738._4_4_ = fStack_7a4 + fStack_7e4 + fStack_824;
  local_738._0_4_ = local_7a8 + local_7e8 + local_828;
  fStack_730 = fStack_7a0 + fStack_7e0 + fStack_820;
  fStack_72c = fStack_79c + fStack_7dc + fStack_81c;
  pauVar2 = (undefined1 (*) [16])(param_7 + uVar32 * 0xc);
  if ((bVar43 & 0xf) == 0) {
    auVar257 = *pauVar2;
    auVar112 = pauVar2[1];
    auVar184 = insertps(auVar112,auVar257,0x8c);
    local_7d8._4_4_ = auVar257._12_4_;
    local_7d8._0_4_ = auVar257._0_4_;
    fStack_7d0 = (float)auVar112._8_4_;
    fStack_7cc = (float)*(undefined4 *)(pauVar2[2] + 4);
    local_5e8._4_4_ = auVar112._0_4_;
    local_5e8._0_4_ = auVar257._4_4_;
    fStack_5e0 = (float)auVar112._12_4_;
    fStack_5dc = (float)*(undefined4 *)(pauVar2[2] + 8);
    local_5f8 = auVar184._0_8_;
    fStack_5f0 = (float)*(undefined4 *)pauVar2[2];
    fStack_5ec = (float)*(undefined4 *)(pauVar2[2] + 0xc);
    auVar257 = *(undefined1 (*) [16])(param_6 + uVar32 * 0xc);
    auVar112 = *(undefined1 (*) [16])(param_6 + 0x10 + uVar32 * 0xc);
    puVar3 = (undefined4 *)(param_6 + 0x20 + uVar32 * 0xc);
    auVar201._0_4_ = auVar257._0_4_;
    auVar184 = insertps(auVar112,auVar257,0x8c);
    auVar201._4_4_ = auVar257._12_4_;
    auVar201._8_4_ = auVar112._8_4_;
    auVar201._12_4_ = puVar3[1];
    auVar210._4_4_ = auVar112._0_4_;
    auVar210._0_4_ = auVar257._4_4_;
    auVar210._8_4_ = auVar112._12_4_;
    auVar210._12_4_ = puVar3[2];
    auVar168._0_8_ = auVar184._0_8_;
    auVar168._8_4_ = *puVar3;
    auVar168._12_4_ = puVar3[3];
  }
  else {
    auVar166._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar167._0_4_;
    auVar166._4_4_ = _UNK_150b50da4 & auVar167._4_4_;
    auVar166._8_4_ = _UNK_150b50da8 & auVar167._8_4_;
    auVar166._12_4_ = _UNK_150b50dac & auVar167._12_4_;
    lVar24 = extractps(auVar166,1);
    lVar33 = extractps(auVar166,2);
    lVar37 = extractps(auVar166,3);
    auVar257 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar24),0x10);
    auVar257 = insertps(auVar257,*(undefined4 *)(*pauVar2 + lVar33),0x20);
    _local_7d8 = insertps(auVar257,*(undefined4 *)(*pauVar2 + lVar37),0x30);
    auVar257 = ___xmm_000000280000001c0000001000000004 & auVar167;
    auVar112 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar257._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar257._4_4_),0x10);
    auVar112 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar257._8_4_),0x20);
    _local_5e8 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar257._12_4_),0x30);
    auVar167 = ___xmm_0000002c000000200000001400000008 & auVar167;
    auVar112 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar167._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar167._4_4_),0x10);
    auVar112 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar167._8_4_),0x20);
    _local_5f8 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar167._12_4_),0x30);
    lVar42 = param_6 + uVar32 * 0xc;
    auVar112 = insertps(ZEXT416(*(uint *)(param_6 + uVar32 * 0xc)),*(undefined4 *)(lVar24 + lVar42),
                        0x10);
    auVar112 = insertps(auVar112,*(undefined4 *)(lVar33 + lVar42),0x20);
    auVar201 = insertps(auVar112,*(undefined4 *)(lVar37 + lVar42),0x30);
    auVar112 = insertps(ZEXT416(*(uint *)((ulonglong)auVar257._0_4_ + lVar42)),
                        *(undefined4 *)((ulonglong)auVar257._4_4_ + lVar42),0x10);
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)auVar257._8_4_ + lVar42),0x20);
    auVar210 = insertps(auVar112,*(undefined4 *)((ulonglong)auVar257._12_4_ + lVar42),0x30);
    auVar257 = insertps(ZEXT416(*(uint *)((ulonglong)auVar167._0_4_ + lVar42)),
                        *(undefined4 *)((ulonglong)auVar167._4_4_ + lVar42),0x10);
    auVar257 = insertps(auVar257,*(undefined4 *)((ulonglong)auVar167._8_4_ + lVar42),0x20);
    auVar168 = insertps(auVar257,*(undefined4 *)((ulonglong)auVar167._12_4_ + lVar42),0x30);
  }
  local_798._0_4_ = auVar61._0_4_ * auVar168._0_4_;
  local_798._4_4_ = auVar61._4_4_ * auVar168._4_4_;
  fStack_790 = auVar61._8_4_ * auVar168._8_4_;
  fStack_78c = auVar61._12_4_ * auVar168._12_4_;
  local_7c8._0_4_ = auVar207._0_4_;
  local_7c8._4_4_ = auVar207._4_4_;
  fStack_7c0 = auVar207._8_4_;
  fStack_7bc = auVar207._12_4_;
  local_7c8._0_4_ = (float)local_7c8._0_4_ * auVar210._0_4_;
  local_7c8._4_4_ = (float)local_7c8._4_4_ * auVar210._4_4_;
  fStack_7c0 = fStack_7c0 * auVar210._8_4_;
  fStack_7bc = fStack_7bc * auVar210._12_4_;
  fVar158 = auVar136._0_4_ * auVar201._0_4_;
  fVar174 = auVar136._4_4_ * auVar201._4_4_;
  auVar145._4_4_ = fVar174;
  auVar145._0_4_ = fVar158;
  fVar180 = auVar136._8_4_ * auVar201._8_4_;
  fVar181 = auVar136._12_4_ * auVar201._12_4_;
  auVar169._0_4_ = param_8 * fVar158 * param_8;
  auVar169._4_4_ = param_8 * fVar174 * param_8;
  auVar169._8_4_ = param_8 * fVar180 * param_8;
  auVar169._12_4_ = param_8 * fVar181 * param_8;
  auVar21._4_4_ = _UNK_15076b1f4;
  auVar21._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar21._8_4_ = _UNK_15076b1f8;
  auVar21._12_4_ = _UNK_15076b1fc;
  auVar136 = divps(auVar21,auVar169);
  fVar193 = local_3a8 + local_3d8;
  fVar192 = fStack_3a4 + fStack_3d4;
  fVar196 = fStack_3a0 + fStack_3d0;
  fVar198 = fStack_39c + fStack_3cc;
  fVar206 = local_398 + local_3c8;
  fVar173 = fStack_394 + fStack_3c4;
  fVar213 = fStack_390 + fStack_3c0;
  fVar214 = fStack_38c + fStack_3bc;
  fVar194 = local_388 + local_3b8;
  fVar204 = fStack_384 + fStack_3b4;
  fVar197 = fStack_380 + fStack_3b0;
  fVar161 = fStack_37c + fStack_3ac;
  local_818._0_4_ = auVar246._0_4_;
  local_818._4_4_ = auVar246._4_4_;
  fStack_810 = auVar246._8_4_;
  fStack_80c = auVar246._12_4_;
  local_818._0_4_ = (float)local_818 + (float)local_818;
  local_818._4_4_ = local_818._4_4_ + local_818._4_4_;
  fStack_810 = fStack_810 + fStack_810;
  fStack_80c = fStack_80c + fStack_80c;
  auVar145._8_4_ = fVar180;
  auVar145._12_4_ = fVar181;
  auVar207 = divps(auVar145,_local_738);
  auVar207 = sqrtps(auVar207,auVar207);
  fVar215 = auVar136._0_4_;
  fVar217 = auVar136._4_4_;
  fVar220 = auVar136._8_4_;
  fVar179 = auVar136._12_4_;
  fVar182 = auVar207._0_4_ * (float)local_818 * fVar215 * param_8;
  fVar183 = auVar207._4_4_ * local_818._4_4_ * fVar217 * param_8;
  fVar191 = auVar207._8_4_ * fStack_810 * fVar220 * param_8;
  fVar159 = auVar207._12_4_ * fStack_80c * fVar179 * param_8;
  auVar22._4_4_ = _UNK_15076b1f4;
  auVar22._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar22._8_4_ = _UNK_15076b1f8;
  auVar22._12_4_ = _UNK_15076b1fc;
  auVar258._0_4_ =
       ((local_3b8 * local_3b8 + local_3c8 * local_3c8 + local_3d8 * local_3d8) * local_828 +
       (local_388 * local_388 + local_398 * local_398 + local_3a8 * local_3a8) * local_7e8 +
       (fVar194 * fVar194 + fVar206 * fVar206 + fVar193 * fVar193) * local_7a8) *
       (fVar182 + ___xmm_3f8000003f8000003f8000003f800000) + fVar215;
  auVar258._4_4_ =
       ((fStack_3b4 * fStack_3b4 + fStack_3c4 * fStack_3c4 + fStack_3d4 * fStack_3d4) * fStack_824 +
       (fStack_384 * fStack_384 + fStack_394 * fStack_394 + fStack_3a4 * fStack_3a4) * fStack_7e4 +
       (fVar204 * fVar204 + fVar173 * fVar173 + fVar192 * fVar192) * fStack_7a4) *
       (fVar183 + _UNK_15076b1f4) + fVar217;
  auVar258._8_4_ =
       ((fStack_3b0 * fStack_3b0 + fStack_3c0 * fStack_3c0 + fStack_3d0 * fStack_3d0) * fStack_820 +
       (fStack_380 * fStack_380 + fStack_390 * fStack_390 + fStack_3a0 * fStack_3a0) * fStack_7e0 +
       (fVar197 * fVar197 + fVar213 * fVar213 + fVar196 * fVar196) * fStack_7a0) *
       (fVar191 + _UNK_15076b1f8) + fVar220;
  auVar258._12_4_ =
       ((fStack_3ac * fStack_3ac + fStack_3bc * fStack_3bc + fStack_3cc * fStack_3cc) * fStack_81c +
       (fStack_37c * fStack_37c + fStack_38c * fStack_38c + fStack_39c * fStack_39c) * fStack_7dc +
       (fVar161 * fVar161 + fVar214 * fVar214 + fVar198 * fVar198) * fStack_79c) *
       (fVar159 + _UNK_15076b1fc) + fVar179;
  auVar146._0_4_ =
       (local_1c8 - fVar215 * (float)local_7d8._0_4_) +
       ((fVar100 * local_3b8 + fVar94 * local_3c8 + fVar85 * local_3d8 +
        fVar132 * local_388 + fVar56 * local_398 + fVar203 * local_3a8) -
       (fVar199 * fVar194 + fVar105 * fVar206 + fVar103 * fVar193)) * fVar182;
  auVar146._4_4_ =
       (fStack_1c4 - fVar217 * (float)local_7d8._4_4_) +
       ((fVar101 * fStack_3b4 + fVar95 * fStack_3c4 + fVar86 * fStack_3d4 +
        fVar156 * fStack_384 + fVar82 * fStack_394 + fVar58 * fStack_3a4) -
       (fVar57 * fVar204 + fVar109 * fVar173 + fVar108 * fVar192)) * fVar183;
  auVar146._8_4_ =
       (fStack_1c0 - fVar220 * fStack_7d0) +
       ((fVar102 * fStack_3b0 + fVar231 * fStack_3c0 + fVar92 * fStack_3d0 +
        fVar273 * fStack_380 + fVar83 * fStack_390 + fVar89 * fStack_3a0) -
       (fVar87 * fVar197 + fVar53 * fVar213 + fVar52 * fVar196)) * fVar191;
  auVar146._12_4_ =
       (fStack_1bc - fVar179 * fStack_7cc) +
       ((fVar110 * fStack_3ac + fVar99 * fStack_3bc + fVar93 * fStack_3cc +
        fVar157 * fStack_37c + fVar84 * fStack_38c + fVar97 * fStack_39c) -
       (fVar96 * fVar161 + fVar55 * fVar214 + fVar54 * fVar198)) * fVar159;
  auVar207 = divps(auVar146,auVar258);
  fVar182 = (float)(-(uint)(param_9 <= fVar158) & auVar207._0_4_);
  fVar183 = (float)(-(uint)(param_9 <= fVar174) & auVar207._4_4_);
  fVar191 = (float)(-(uint)(param_9 <= fVar180) & auVar207._8_4_);
  fVar159 = (float)(-(uint)(param_9 <= fVar181) & auVar207._12_4_);
  auVar147._0_4_ = param_8 * (float)local_7c8._0_4_ * param_8;
  auVar147._4_4_ = param_8 * (float)local_7c8._4_4_ * param_8;
  auVar147._8_4_ = param_8 * fStack_7c0 * param_8;
  auVar147._12_4_ = param_8 * fStack_7bc * param_8;
  auVar136 = divps(auVar22,auVar147);
  fVar158 = local_408 + local_438;
  fVar180 = fStack_404 + fStack_434;
  fVar193 = fStack_400 + fStack_430;
  fVar196 = fStack_3fc + fStack_42c;
  fVar206 = local_3f8 + local_428;
  fVar173 = fStack_3f4 + fStack_424;
  fVar213 = fStack_3f0 + fStack_420;
  fVar214 = fStack_3ec + fStack_41c;
  fVar194 = local_3e8 + local_418;
  fVar204 = fStack_3e4 + fStack_414;
  fVar197 = fStack_3e0 + fStack_410;
  fVar161 = fStack_3dc + fStack_40c;
  auVar207 = divps(_local_7c8,_local_738);
  auVar207 = sqrtps(auVar207,auVar207);
  fVar215 = auVar136._0_4_;
  fVar217 = auVar136._4_4_;
  fVar220 = auVar136._8_4_;
  fVar179 = auVar136._12_4_;
  fVar174 = auVar207._0_4_ * (float)local_818 * fVar215 * param_8;
  fVar181 = auVar207._4_4_ * local_818._4_4_ * fVar217 * param_8;
  fVar192 = auVar207._8_4_ * fStack_810 * fVar220 * param_8;
  fVar198 = auVar207._12_4_ * fStack_80c * fVar179 * param_8;
  auVar23._4_4_ = _UNK_15076b1f4;
  auVar23._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar23._8_4_ = _UNK_15076b1f8;
  auVar23._12_4_ = _UNK_15076b1fc;
  auVar259._0_4_ =
       ((local_418 * local_418 + local_428 * local_428 + local_438 * local_438) * local_828 +
       (local_3e8 * local_3e8 + local_3f8 * local_3f8 + local_408 * local_408) * local_7e8 +
       (fVar194 * fVar194 + fVar206 * fVar206 + fVar158 * fVar158) * local_7a8) *
       (fVar174 + ___xmm_3f8000003f8000003f8000003f800000) + fVar215;
  auVar259._4_4_ =
       ((fStack_414 * fStack_414 + fStack_424 * fStack_424 + fStack_434 * fStack_434) * fStack_824 +
       (fStack_3e4 * fStack_3e4 + fStack_3f4 * fStack_3f4 + fStack_404 * fStack_404) * fStack_7e4 +
       (fVar204 * fVar204 + fVar173 * fVar173 + fVar180 * fVar180) * fStack_7a4) *
       (fVar181 + _UNK_15076b1f4) + fVar217;
  auVar259._8_4_ =
       ((fStack_410 * fStack_410 + fStack_420 * fStack_420 + fStack_430 * fStack_430) * fStack_820 +
       (fStack_3e0 * fStack_3e0 + fStack_3f0 * fStack_3f0 + fStack_400 * fStack_400) * fStack_7e0 +
       (fVar197 * fVar197 + fVar213 * fVar213 + fVar193 * fVar193) * fStack_7a0) *
       (fVar192 + _UNK_15076b1f8) + fVar220;
  auVar259._12_4_ =
       ((fStack_40c * fStack_40c + fStack_41c * fStack_41c + fStack_42c * fStack_42c) * fStack_81c +
       (fStack_3dc * fStack_3dc + fStack_3ec * fStack_3ec + fStack_3fc * fStack_3fc) * fStack_7dc +
       (fVar161 * fVar161 + fVar214 * fVar214 + fVar196 * fVar196) * fStack_79c) *
       (fVar198 + _UNK_15076b1fc) + fVar179;
  auVar148._0_4_ =
       (local_1d8 - fVar215 * (float)local_5e8._0_4_) +
       ((fVar100 * local_418 + fVar94 * local_428 + fVar85 * local_438 +
        fVar132 * local_3e8 + fVar56 * local_3f8 + fVar203 * local_408) -
       (fVar199 * fVar194 + fVar105 * fVar206 + fVar103 * fVar158)) * fVar174;
  auVar148._4_4_ =
       (fStack_1d4 - fVar217 * (float)local_5e8._4_4_) +
       ((fVar101 * fStack_414 + fVar95 * fStack_424 + fVar86 * fStack_434 +
        fVar156 * fStack_3e4 + fVar82 * fStack_3f4 + fVar58 * fStack_404) -
       (fVar57 * fVar204 + fVar109 * fVar173 + fVar108 * fVar180)) * fVar181;
  auVar148._8_4_ =
       (fStack_1d0 - fVar220 * fStack_5e0) +
       ((fVar102 * fStack_410 + fVar231 * fStack_420 + fVar92 * fStack_430 +
        fVar273 * fStack_3e0 + fVar83 * fStack_3f0 + fVar89 * fStack_400) -
       (fVar87 * fVar197 + fVar53 * fVar213 + fVar52 * fVar193)) * fVar192;
  auVar148._12_4_ =
       (fStack_1cc - fVar179 * fStack_5dc) +
       ((fVar110 * fStack_40c + fVar99 * fStack_41c + fVar93 * fStack_42c +
        fVar157 * fStack_3dc + fVar84 * fStack_3ec + fVar97 * fStack_3fc) -
       (fVar96 * fVar161 + fVar55 * fVar214 + fVar54 * fVar196)) * fVar198;
  auVar207 = divps(auVar148,auVar259);
  fVar158 = (float)(-(uint)(param_9 <= (float)local_7c8._0_4_) & auVar207._0_4_);
  fVar174 = (float)(-(uint)(param_9 <= (float)local_7c8._4_4_) & auVar207._4_4_);
  fVar180 = (float)(-(uint)(param_9 <= fStack_7c0) & auVar207._8_4_);
  fVar181 = (float)(-(uint)(param_9 <= fStack_7bc) & auVar207._12_4_);
  auVar207 = divps(_local_798,_local_738);
  auVar136 = sqrtps(auVar259,auVar207);
  auVar149._0_4_ = param_8 * (float)local_798._0_4_ * param_8;
  auVar149._4_4_ = param_8 * (float)local_798._4_4_ * param_8;
  auVar149._8_4_ = param_8 * fStack_790 * param_8;
  auVar149._12_4_ = param_8 * fStack_78c * param_8;
  auVar207 = divps(auVar23,auVar149);
  fVar215 = auVar207._0_4_;
  fVar217 = auVar207._4_4_;
  fVar220 = auVar207._8_4_;
  fVar179 = auVar207._12_4_;
  fVar256 = auVar136._0_4_ * (float)local_818 * fVar215 * param_8;
  fVar260 = auVar136._4_4_ * local_818._4_4_ * fVar217 * param_8;
  fVar262 = auVar136._8_4_ * fStack_810 * fVar220 * param_8;
  param_8 = auVar136._12_4_ * fStack_80c * fVar179 * param_8;
  fVar193 = local_188 + local_1b8;
  fVar192 = fStack_184 + fStack_1b4;
  fVar196 = fStack_180 + fStack_1b0;
  fVar198 = fStack_17c + fStack_1ac;
  fVar206 = local_178 + local_1a8;
  fVar173 = fStack_174 + fStack_1a4;
  fVar213 = fStack_170 + fStack_1a0;
  fVar214 = fStack_16c + fStack_19c;
  fVar194 = local_168 + local_198;
  fVar204 = fStack_164 + fStack_194;
  fVar197 = fStack_160 + fStack_190;
  fVar161 = fStack_15c + fStack_18c;
  auVar188._0_4_ =
       ((local_198 * local_198 + local_1a8 * local_1a8 + local_1b8 * local_1b8) * local_828 +
       (local_168 * local_168 + local_178 * local_178 + local_188 * local_188) * local_7e8 +
       (fVar194 * fVar194 + fVar206 * fVar206 + fVar193 * fVar193) * local_7a8) *
       (fVar256 + ___xmm_3f8000003f8000003f8000003f800000) + fVar215;
  auVar188._4_4_ =
       ((fStack_194 * fStack_194 + fStack_1a4 * fStack_1a4 + fStack_1b4 * fStack_1b4) * fStack_824 +
       (fStack_164 * fStack_164 + fStack_174 * fStack_174 + fStack_184 * fStack_184) * fStack_7e4 +
       (fVar204 * fVar204 + fVar173 * fVar173 + fVar192 * fVar192) * fStack_7a4) *
       (fVar260 + _UNK_15076b1f4) + fVar217;
  auVar188._8_4_ =
       ((fStack_190 * fStack_190 + fStack_1a0 * fStack_1a0 + fStack_1b0 * fStack_1b0) * fStack_820 +
       (fStack_160 * fStack_160 + fStack_170 * fStack_170 + fStack_180 * fStack_180) * fStack_7e0 +
       (fVar197 * fVar197 + fVar213 * fVar213 + fVar196 * fVar196) * fStack_7a0) *
       (fVar262 + _UNK_15076b1f8) + fVar220;
  auVar188._12_4_ =
       ((fStack_18c * fStack_18c + fStack_19c * fStack_19c + fStack_1ac * fStack_1ac) * fStack_81c +
       (fStack_15c * fStack_15c + fStack_16c * fStack_16c + fStack_17c * fStack_17c) * fStack_7dc +
       (fVar161 * fVar161 + fVar214 * fVar214 + fVar198 * fVar198) * fStack_79c) *
       (param_8 + _UNK_15076b1fc) + fVar179;
  auVar150._0_4_ =
       (local_1e8 - fVar215 * (float)local_5f8._0_4_) +
       ((fVar100 * local_198 + fVar94 * local_1a8 + fVar85 * local_1b8 +
        fVar132 * local_168 + fVar56 * local_178 + fVar203 * local_188) -
       (fVar199 * fVar194 + fVar105 * fVar206 + fVar103 * fVar193)) * fVar256;
  auVar150._4_4_ =
       (fStack_1e4 - fVar217 * (float)local_5f8._4_4_) +
       ((fVar101 * fStack_194 + fVar95 * fStack_1a4 + fVar86 * fStack_1b4 +
        fVar156 * fStack_164 + fVar82 * fStack_174 + fVar58 * fStack_184) -
       (fVar57 * fVar204 + fVar109 * fVar173 + fVar108 * fVar192)) * fVar260;
  auVar150._8_4_ =
       (fStack_1e0 - fVar220 * fStack_5f0) +
       ((fVar102 * fStack_190 + fVar231 * fStack_1a0 + fVar92 * fStack_1b0 +
        fVar273 * fStack_160 + fVar83 * fStack_170 + fVar89 * fStack_180) -
       (fVar87 * fVar197 + fVar53 * fVar213 + fVar52 * fVar196)) * fVar262;
  auVar150._12_4_ =
       (fStack_1dc - fVar179 * fStack_5ec) +
       ((fVar110 * fStack_18c + fVar99 * fStack_19c + fVar93 * fStack_1ac +
        fVar157 * fStack_15c + fVar84 * fStack_16c + fVar97 * fStack_17c) -
       (fVar96 * fVar161 + fVar55 * fVar214 + fVar54 * fVar198)) * param_8;
  auVar207 = divps(auVar150,auVar188);
  fVar199 = (float)(-(uint)(param_9 <= (float)local_798._0_4_) & auVar207._0_4_);
  fVar203 = (float)(-(uint)(param_9 <= (float)local_798._4_4_) & auVar207._4_4_);
  fVar57 = (float)(-(uint)(param_9 <= fStack_790) & auVar207._8_4_);
  fVar58 = (float)(-(uint)(param_9 <= fStack_78c) & auVar207._12_4_);
  auVar151._0_4_ = (float)local_7d8._0_4_ + fVar182;
  auVar151._4_4_ = (float)local_7d8._4_4_ + fVar183;
  auVar151._8_4_ = fStack_7d0 + fVar191;
  auVar151._12_4_ = fStack_7cc + fVar159;
  auVar218._0_4_ = (float)local_5e8._0_4_ + fVar158;
  auVar218._4_4_ = (float)local_5e8._4_4_ + fVar174;
  auVar218._8_4_ = fStack_5e0 + fVar180;
  auVar218._12_4_ = fStack_5dc + fVar181;
  auVar211._0_4_ = (float)local_5f8._0_4_ + fVar199;
  auVar211._4_4_ = (float)local_5f8._4_4_ + fVar203;
  auVar211._8_4_ = fStack_5f0 + fVar57;
  auVar211._12_4_ = fStack_5ec + fVar58;
  if ((bVar43 & 0xf) == 0) {
    auVar226._4_4_ = auVar151._4_4_;
    auVar226._0_4_ = auVar151._0_4_;
    auVar226._8_4_ = auVar151._8_4_;
    auVar226._12_4_ = auVar151._12_4_;
    auVar207 = insertps(auVar151,auVar218,0x30);
    auVar170._4_4_ = auVar218._8_4_;
    auVar170._0_4_ = auVar218._4_4_;
    auVar170._8_4_ = auVar211._0_4_;
    auVar170._12_4_ = auVar211._4_4_;
    auVar207 = insertps(auVar207,auVar211,0x20);
    *(int *)*pauVar2 = auVar207._0_4_;
    *(int *)(*pauVar2 + 4) = auVar207._12_4_;
    *(int *)(*pauVar2 + 8) = auVar207._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar207._4_4_;
    auVar207 = blendps(auVar170,auVar226,4);
    *(int *)pauVar2[1] = auVar207._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar207._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar207._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar207._4_4_;
    *(float *)pauVar2[2] = auVar211._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar151._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar218._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar211._12_4_;
  }
  else {
    if ((bVar45 & 1) != 0) {
      *(float *)*pauVar2 = auVar151._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar151,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar19;
    }
    if ((bVar45 & 4) != 0) {
      uVar19 = extractps(auVar151,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar19;
    }
    if ((char)bVar45 < '\0') {
      uVar19 = extractps(auVar151,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar19;
    }
    if ((bVar45 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar218._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar218,1);
      *(undefined8 *)pauVar2[1] = uVar19;
    }
    if ((bVar45 & 4) != 0) {
      uVar19 = extractps(auVar218,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar19;
    }
    if ((char)bVar45 < '\0') {
      uVar19 = extractps(auVar218,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar19;
    }
    if ((bVar45 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar211._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar211,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar19;
    }
    if ((bVar45 & 4) != 0) {
      uVar19 = extractps(auVar211,2);
      *(undefined8 *)pauVar2[2] = uVar19;
    }
    if ((char)bVar45 < '\0') {
      uVar19 = extractps(auVar211,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar19;
    }
  }
  fVar87 = local_188 * fVar199 + local_408 * fVar158 + local_3a8 * fVar182;
  fVar89 = fStack_184 * fVar203 + fStack_404 * fVar174 + fStack_3a4 * fVar183;
  fVar96 = fStack_180 * fVar57 + fStack_400 * fVar180 + fStack_3a0 * fVar191;
  fVar97 = fStack_17c * fVar58 + fStack_3fc * fVar181 + fStack_39c * fVar159;
  fVar103 = local_178 * fVar199 + local_3f8 * fVar158 + local_398 * fVar182;
  fVar105 = fStack_174 * fVar203 + fStack_3f4 * fVar174 + fStack_394 * fVar183;
  fVar108 = fStack_170 * fVar57 + fStack_3f0 * fVar180 + fStack_390 * fVar191;
  fVar109 = fStack_16c * fVar58 + fStack_3ec * fVar181 + fStack_38c * fVar159;
  fVar52 = local_168 * fVar199 + local_3e8 * fVar158 + local_388 * fVar182;
  fVar53 = fStack_164 * fVar203 + fStack_3e4 * fVar174 + fStack_384 * fVar183;
  fVar54 = fStack_160 * fVar57 + fStack_3e0 * fVar180 + fStack_380 * fVar191;
  fVar55 = fStack_15c * fVar58 + fStack_3dc * fVar181 + fStack_37c * fVar159;
  fVar85 = local_1b8 * fVar199 + local_438 * fVar158 + local_3d8 * fVar182;
  fVar86 = fStack_1b4 * fVar203 + fStack_434 * fVar174 + fStack_3d4 * fVar183;
  fVar92 = fStack_1b0 * fVar57 + fStack_430 * fVar180 + fStack_3d0 * fVar191;
  fVar93 = fStack_1ac * fVar58 + fStack_42c * fVar181 + fStack_3cc * fVar159;
  fVar56 = local_1a8 * fVar199 + local_428 * fVar158 + local_3c8 * fVar182;
  fVar82 = fStack_1a4 * fVar203 + fStack_424 * fVar174 + fStack_3c4 * fVar183;
  fVar83 = fStack_1a0 * fVar57 + fStack_420 * fVar180 + fStack_3c0 * fVar191;
  fVar84 = fStack_19c * fVar58 + fStack_41c * fVar181 + fStack_3bc * fVar159;
  fVar199 = local_198 * fVar199 + fVar158 * local_418 + fVar182 * local_3b8;
  fVar203 = fStack_194 * fVar203 + fVar174 * fStack_414 + fVar183 * fStack_3b4;
  fVar57 = fStack_190 * fVar57 + fVar180 * fStack_410 + fVar191 * fStack_3b0;
  fVar58 = fStack_18c * fVar58 + fVar181 * fStack_40c + fVar159 * fStack_3ac;
  auVar124._0_4_ = -(uint)(0.0 < local_7a8) & local_5c8._0_4_;
  auVar124._4_4_ = -(uint)(0.0 < fStack_7a4) & local_5c8._4_4_;
  auVar124._8_4_ = -(uint)(0.0 < fStack_7a0) & (uint)fStack_5c0;
  auVar124._12_4_ = -(uint)(0.0 < fStack_79c) & (uint)fStack_5bc;
  iVar88 = movmskps((int)pauVar2,auVar124);
  iVar104 = 0;
  if (iVar88 != 0) {
    bVar45 = (char)((char)iVar88 << 4) >> 4;
    auVar152._0_4_ = (fVar87 + fVar85) * local_7a8 + local_628;
    auVar152._4_4_ = (fVar89 + fVar86) * fStack_7a4 + fStack_624;
    auVar152._8_4_ = (fVar96 + fVar92) * fStack_7a0 + fStack_620;
    auVar152._12_4_ = (fVar97 + fVar93) * fStack_79c + fStack_61c;
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + auVar165._0_4_) = auVar152._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar152,1);
      *(undefined8 *)(param_1 + auVar165._4_4_) = uVar19;
    }
    if ((bVar45 & 4) == 0) {
      if (-1 < (char)bVar45) goto LAB_1409bd92c;
LAB_1409bdc2e:
      uVar19 = extractps(auVar152,3);
      *(undefined8 *)(param_1 + auVar165._12_4_) = uVar19;
      auVar125._0_4_ = (fVar103 + fVar56) * local_7a8 + local_618;
      auVar125._4_4_ = (fVar105 + fVar82) * fStack_7a4 + fStack_614;
      auVar125._8_4_ = (fVar108 + fVar83) * fStack_7a0 + fStack_610;
      auVar125._12_4_ = (fVar109 + fVar84) * fStack_79c + fStack_60c;
      if ((bVar45 & 1) != 0) goto LAB_1409bdc51;
LAB_1409bd93d:
      if ((bVar45 & 2) == 0) goto LAB_1409bd946;
LAB_1409bdc64:
      uVar19 = extractps(auVar125,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar165._4_4_) = uVar19;
      if ((bVar45 & 4) != 0) goto LAB_1409bdc80;
LAB_1409bd956:
      fVar94 = (fVar52 + fVar199) * local_7a8;
      fStack_7a4 = (fVar53 + fVar203) * fStack_7a4;
      fStack_7a0 = (fVar54 + fVar57) * fStack_7a0;
      fStack_79c = (fVar55 + fVar58) * fStack_79c;
      if (-1 < (char)bVar45) goto LAB_1409bd962;
LAB_1409bdc98:
      uVar19 = extractps(auVar125,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar165._12_4_) = uVar19;
      auVar153._0_4_ = fVar94 + local_608;
      auVar153._4_4_ = fStack_7a4 + fStack_604;
      auVar153._8_4_ = fStack_7a0 + fStack_600;
      auVar153._12_4_ = fStack_79c + fStack_5fc;
    }
    else {
      uVar19 = extractps(auVar152,2);
      *(undefined8 *)(param_1 + auVar165._8_4_) = uVar19;
      if ((char)bVar45 < '\0') goto LAB_1409bdc2e;
LAB_1409bd92c:
      auVar125._0_4_ = (fVar103 + fVar56) * local_7a8 + local_618;
      auVar125._4_4_ = (fVar105 + fVar82) * fStack_7a4 + fStack_614;
      auVar125._8_4_ = (fVar108 + fVar83) * fStack_7a0 + fStack_610;
      auVar125._12_4_ = (fVar109 + fVar84) * fStack_79c + fStack_60c;
      if ((bVar45 & 1) == 0) goto LAB_1409bd93d;
LAB_1409bdc51:
      *(int *)(param_1 + 4 + (longlong)auVar165._0_4_) = auVar125._0_4_;
      if ((bVar45 & 2) != 0) goto LAB_1409bdc64;
LAB_1409bd946:
      if ((bVar45 & 4) == 0) goto LAB_1409bd956;
LAB_1409bdc80:
      uVar19 = extractps(auVar125,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar165._8_4_) = uVar19;
      fVar94 = (fVar52 + fVar199) * local_7a8;
      fStack_7a4 = (fVar53 + fVar203) * fStack_7a4;
      fStack_7a0 = (fVar54 + fVar57) * fStack_7a0;
      fStack_79c = (fVar55 + fVar58) * fStack_79c;
      if ((char)bVar45 < '\0') goto LAB_1409bdc98;
LAB_1409bd962:
      auVar153._0_4_ = fVar94 + local_608;
      auVar153._4_4_ = fStack_7a4 + fStack_604;
      auVar153._8_4_ = fStack_7a0 + fStack_600;
      auVar153._12_4_ = fStack_79c + fStack_5fc;
    }
    if ((bVar45 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)auVar165._0_4_) = auVar153._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar153,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar165._4_4_) = uVar19;
    }
    if ((bVar45 & 4) != 0) {
      uVar19 = extractps(auVar153,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar165._8_4_) = uVar19;
    }
    if ((char)bVar45 < '\0') {
      uVar19 = extractps(auVar153,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar165._12_4_) = uVar19;
    }
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar165._0_4_) = local_7a8;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar134,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar165._4_4_) = uVar19;
    }
    if ((bVar45 & 4) != 0) {
      uVar19 = extractps(auVar134,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar165._8_4_) = uVar19;
    }
    iVar104 = CONCAT31((int3)((uint)iVar88 >> 8),bVar45);
    if ((char)bVar45 < '\0') {
      uVar19 = extractps(auVar134,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar165._12_4_) = uVar19;
      iVar104 = auVar165._12_4_;
    }
  }
  auVar76._0_4_ = -(uint)(0.0 < local_7e8) & local_5c8._0_4_;
  auVar76._4_4_ = -(uint)(0.0 < fStack_7e4) & local_5c8._4_4_;
  auVar76._8_4_ = -(uint)(0.0 < fStack_7e0) & (uint)fStack_5c0;
  auVar76._12_4_ = -(uint)(0.0 < fStack_7dc) & (uint)fStack_5bc;
  iVar88 = movmskps(iVar104,auVar76);
  iVar104 = 0;
  if (iVar88 == 0) goto LAB_1409bdaa7;
  bVar45 = (char)((char)iVar88 << 4) >> 4;
  auVar77._0_4_ = local_658 - fVar87 * local_7e8;
  auVar77._4_4_ = fStack_654 - fVar89 * fStack_7e4;
  auVar77._8_4_ = fStack_650 - fVar96 * fStack_7e0;
  auVar77._12_4_ = fStack_64c - fVar97 * fStack_7dc;
  if ((bVar45 & 1) == 0) {
    if ((bVar45 & 2) == 0) goto LAB_1409bda08;
LAB_1409bdd80:
    uVar19 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + (int)local_528._4_4_) = uVar19;
    if ((bVar45 & 4) != 0) goto LAB_1409bdd9b;
LAB_1409bda18:
    if (-1 < (char)bVar45) goto LAB_1409bda2b;
LAB_1409bddb9:
    uVar19 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + (int)local_528._12_4_) = uVar19;
    auVar126._0_4_ = local_648 - fVar103 * local_7e8;
    auVar126._4_4_ = fStack_644 - fVar105 * fStack_7e4;
    auVar126._8_4_ = fStack_640 - fVar108 * fStack_7e0;
    auVar126._12_4_ = fStack_63c - fVar109 * fStack_7dc;
    if ((bVar45 & 1) != 0) goto LAB_1409bddd7;
LAB_1409bda37:
    if ((bVar45 & 2) == 0) goto LAB_1409bda40;
LAB_1409bddea:
    uVar19 = extractps(auVar126,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_528._4_4_) = uVar19;
    if ((bVar45 & 4) != 0) goto LAB_1409bddff;
LAB_1409bda49:
    if (-1 < (char)bVar45) goto LAB_1409bda5d;
LAB_1409bde1f:
    uVar19 = extractps(auVar126,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_528._12_4_) = uVar19;
    auVar78._0_4_ = local_638 - fVar52 * local_7e8;
    auVar78._4_4_ = fStack_634 - fVar53 * fStack_7e4;
    auVar78._8_4_ = fStack_630 - fVar54 * fStack_7e0;
    auVar78._12_4_ = fStack_62c - fVar55 * fStack_7dc;
  }
  else {
    *(float *)(param_1 + (int)local_528._0_4_) = auVar77._0_4_;
    if ((bVar45 & 2) != 0) goto LAB_1409bdd80;
LAB_1409bda08:
    if ((bVar45 & 4) == 0) goto LAB_1409bda18;
LAB_1409bdd9b:
    uVar19 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + (int)local_528._8_4_) = uVar19;
    if ((char)bVar45 < '\0') goto LAB_1409bddb9;
LAB_1409bda2b:
    auVar126._0_4_ = local_648 - fVar103 * local_7e8;
    auVar126._4_4_ = fStack_644 - fVar105 * fStack_7e4;
    auVar126._8_4_ = fStack_640 - fVar108 * fStack_7e0;
    auVar126._12_4_ = fStack_63c - fVar109 * fStack_7dc;
    if ((bVar45 & 1) == 0) goto LAB_1409bda37;
LAB_1409bddd7:
    *(int *)(param_1 + 4 + (longlong)(int)local_528._0_4_) = auVar126._0_4_;
    if ((bVar45 & 2) != 0) goto LAB_1409bddea;
LAB_1409bda40:
    if ((bVar45 & 4) == 0) goto LAB_1409bda49;
LAB_1409bddff:
    uVar19 = extractps(auVar126,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_528._8_4_) = uVar19;
    if ((char)bVar45 < '\0') goto LAB_1409bde1f;
LAB_1409bda5d:
    auVar78._0_4_ = local_638 - fVar52 * local_7e8;
    auVar78._4_4_ = fStack_634 - fVar53 * fStack_7e4;
    auVar78._8_4_ = fStack_630 - fVar54 * fStack_7e0;
    auVar78._12_4_ = fStack_62c - fVar55 * fStack_7dc;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_528._0_4_) = auVar78._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar78,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_528._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar78,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_528._8_4_) = uVar19;
  }
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar78,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_528._12_4_) = uVar19;
  }
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_528._0_4_) = local_7e8;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar60,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_528._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar60,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_528._8_4_) = uVar19;
  }
  iVar104 = CONCAT31((int3)((uint)iVar88 >> 8),bVar45);
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar60,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_528._12_4_) = uVar19;
    iVar104 = local_528._12_4_;
  }
LAB_1409bdaa7:
  auVar79._0_4_ = -(uint)(0.0 < local_828) & local_5c8._0_4_;
  auVar79._4_4_ = -(uint)(0.0 < fStack_824) & local_5c8._4_4_;
  auVar79._8_4_ = -(uint)(0.0 < fStack_820) & (uint)fStack_5c0;
  auVar79._12_4_ = -(uint)(0.0 < fStack_81c) & (uint)fStack_5bc;
  iVar104 = movmskps(iVar104,auVar79);
  if (iVar104 == 0) {
    return;
  }
  bVar45 = (char)((char)iVar104 << 4) >> 4;
  auVar80._0_4_ = local_688 - fVar85 * local_828;
  auVar80._4_4_ = fStack_684 - fVar86 * fStack_824;
  auVar80._8_4_ = fStack_680 - fVar92 * fStack_820;
  auVar80._12_4_ = fStack_67c - fVar93 * fStack_81c;
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + (int)local_518._0_4_) = auVar80._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar80,1);
    *(undefined8 *)(param_1 + (int)local_518._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar80,2);
    *(undefined8 *)(param_1 + (int)local_518._8_4_) = uVar19;
  }
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar80,3);
    *(undefined8 *)(param_1 + (int)local_518._12_4_) = uVar19;
    auVar127._0_4_ = local_678 - fVar56 * local_828;
    auVar127._4_4_ = fStack_674 - fVar82 * fStack_824;
    auVar127._8_4_ = fStack_670 - fVar83 * fStack_820;
    auVar127._12_4_ = fStack_66c - fVar84 * fStack_81c;
  }
  else {
    auVar127._0_4_ = local_678 - fVar56 * local_828;
    auVar127._4_4_ = fStack_674 - fVar82 * fStack_824;
    auVar127._8_4_ = fStack_670 - fVar83 * fStack_820;
    auVar127._12_4_ = fStack_66c - fVar84 * fStack_81c;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_518._0_4_) = auVar127._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar127,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_518._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar127,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_518._8_4_) = uVar19;
  }
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar127,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_518._12_4_) = uVar19;
    auVar81._0_4_ = local_668 - fVar199 * local_828;
    auVar81._4_4_ = fStack_664 - fVar203 * fStack_824;
    auVar81._8_4_ = fStack_660 - fVar57 * fStack_820;
    auVar81._12_4_ = fStack_65c - fVar58 * fStack_81c;
  }
  else {
    auVar81._0_4_ = local_668 - fVar199 * local_828;
    auVar81._4_4_ = fStack_664 - fVar203 * fStack_824;
    auVar81._8_4_ = fStack_660 - fVar57 * fStack_820;
    auVar81._12_4_ = fStack_65c - fVar58 * fStack_81c;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_518._0_4_) = auVar81._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar81,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_518._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar81,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_518._8_4_) = uVar19;
  }
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar81,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_518._12_4_) = uVar19;
  }
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_518._0_4_) = local_828;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar133,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_518._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar133,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_518._8_4_) = uVar19;
  }
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar133,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_518._12_4_) = uVar19;
  }
  return;
}

// ApplyXPBDStretchBiasConstraints_sse4 @ 1409be390

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDStretchBiasConstraints_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,float param_8,float *param_9,float param_10,
               float param_11,uint param_12)

{
  int *piVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  byte bVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  float *pfVar34;
  longlong lVar35;
  byte bVar36;
  int iVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar67;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar68;
  float fVar69;
  float fVar80;
  float fVar85;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar95;
  float fVar96;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar110;
  float fVar121;
  float fVar122;
  undefined1 auVar111 [16];
  float fVar123;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  int iVar124;
  float fVar125;
  float fVar132;
  float fVar133;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar134;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar135;
  float fVar136;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  undefined1 auVar137 [16];
  float fVar146;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  int iVar147;
  float fVar148;
  float fVar149;
  uint uVar150;
  float fVar154;
  uint uVar156;
  float fVar157;
  uint uVar159;
  float fVar160;
  undefined1 auVar151 [16];
  float fVar155;
  float fVar158;
  float fVar161;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  uint uVar162;
  float fVar163;
  float fVar164;
  uint uVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  uint uVar169;
  float fVar170;
  float fVar171;
  float fVar172;
  uint uVar173;
  float fVar174;
  float fVar175;
  float fVar176;
  uint uVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar188;
  float fVar189;
  float fVar190;
  float fVar192;
  float fVar193;
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  uint uVar187;
  uint uVar191;
  uint uVar194;
  undefined1 auVar183 [16];
  float fVar195;
  float fVar196;
  float fVar199;
  float fVar200;
  undefined1 auVar197 [16];
  float fVar201;
  undefined1 auVar198 [16];
  float fVar202;
  float fVar203;
  float fVar204;
  float fVar205;
  float fVar206;
  float fVar207;
  float fVar208;
  float fVar209;
  float fVar210;
  float fVar212;
  float fVar213;
  float fVar214;
  undefined1 auVar211 [16];
  float fVar218;
  float fVar219;
  undefined1 auVar215 [16];
  float fVar220;
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  float fVar221;
  float fVar222;
  float fVar224;
  float fVar225;
  float fVar226;
  float fVar227;
  float fVar228;
  float fVar229;
  undefined1 auVar223 [16];
  undefined8 local_6f8;
  float fStack_6f0;
  float fStack_6ec;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float local_6d8;
  float fStack_6d4;
  undefined1 local_6c8 [8];
  float fStack_6c0;
  float fStack_6bc;
  undefined8 local_6b8;
  float fStack_6b0;
  float fStack_6ac;
  undefined1 local_658 [8];
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  undefined1 local_558 [8];
  float fStack_550;
  float fStack_54c;
  undefined1 local_548 [8];
  float fStack_540;
  float fStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  uint local_528;
  uint uStack_524;
  uint uStack_520;
  uint uStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  undefined1 local_508 [16];
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  undefined1 local_4e8 [16];
  uint local_4d8;
  longlong local_4c0;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  uint local_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  uVar165 = param_12 + 3;
  if (-1 < (int)param_12) {
    uVar165 = param_12;
  }
  if ((int)(uVar165 & 0xfffffffc) < 1) {
    uVar25 = 0;
  }
  else {
    local_438 = param_10;
    fStack_434 = param_10;
    fStack_430 = param_10;
    fStack_42c = param_10;
    local_448 = param_11;
    fStack_444 = param_11;
    fStack_440 = param_11;
    fStack_43c = param_11;
    local_458 = param_7;
    fStack_454 = param_7;
    fStack_450 = param_7;
    fStack_44c = param_7;
    pfVar34 = (float *)(param_4 + 0x30);
    lVar43 = 0x20;
    uVar25 = 0;
    do {
      local_4d8 = uVar25;
      auVar215 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar43);
      auVar197 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar43);
      piVar1 = (int *)(param_2 + lVar43);
      uVar67 = auVar197._0_4_;
      auVar71._4_4_ = uVar67;
      auVar71._0_4_ = uVar67;
      auVar71._8_4_ = uVar67;
      auVar71._12_4_ = uVar67;
      auVar111._8_4_ = auVar215._8_4_;
      auVar111._12_4_ = auVar215._12_4_;
      auVar126._4_4_ = auVar111._12_4_;
      auVar126._0_4_ = auVar215._0_4_;
      auVar126._8_4_ = auVar215._4_4_;
      auVar126._12_4_ = auVar111._12_4_;
      auVar70 = pblendw(auVar71,auVar126,0x3f);
      auVar111._0_8_ = auVar215._8_8_;
      auVar44 = pblendw(auVar111,auVar197,0xc);
      iVar124 = auVar215._0_4_ << 4;
      lVar27 = (longlong)iVar124;
      lVar33 = (longlong)(auVar111._12_4_ * 0x10);
      lVar39 = (longlong)(auVar197._8_4_ << 4);
      lVar41 = (longlong)(piVar1[1] << 4);
      auVar215 = insertps(ZEXT416(*(uint *)(param_1 + lVar27)),*(undefined4 *)(param_1 + lVar33),
                          0x10);
      auVar215 = insertps(auVar215,*(undefined4 *)(param_1 + lVar39),0x20);
      local_368 = insertps(auVar215,*(undefined4 *)(param_1 + lVar41),0x30);
      auVar215 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar27)),
                          *(undefined4 *)(param_1 + 4 + lVar33),0x10);
      auVar215 = insertps(auVar215,*(undefined4 *)(param_1 + 4 + lVar39),0x20);
      _local_548 = insertps(auVar215,*(undefined4 *)(param_1 + 4 + lVar41),0x30);
      auVar215 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar27)),
                          *(undefined4 *)(param_1 + 8 + lVar33),0x10);
      auVar215 = insertps(auVar215,*(undefined4 *)(param_1 + 8 + lVar39),0x20);
      local_358 = insertps(auVar215,*(undefined4 *)(param_1 + 8 + lVar41),0x30);
      uVar25 = *(uint *)(param_1 + 0xc + lVar27);
      local_3f8 = ZEXT416(uVar25);
      uVar169 = *(uint *)(param_1 + 0xc + lVar33);
      local_3e8 = ZEXT416(uVar169);
      uVar173 = *(uint *)(param_1 + 0xc + lVar39);
      local_3d8 = ZEXT416(uVar173);
      auVar215 = insertps(local_3f8,local_3e8,0x10);
      iVar68 = auVar70._8_4_ << 4;
      lVar26 = (longlong)iVar68;
      lVar29 = (longlong)(auVar70._12_4_ * 0x10);
      lVar32 = (longlong)(auVar197._12_4_ << 4);
      lVar35 = (longlong)(piVar1[2] << 4);
      auVar197 = insertps(ZEXT416(*(uint *)(param_1 + lVar26)),*(undefined4 *)(param_1 + lVar29),
                          0x10);
      auVar197 = insertps(auVar197,*(undefined4 *)(param_1 + lVar32),0x20);
      local_348 = insertps(auVar197,*(undefined4 *)(param_1 + lVar35),0x30);
      auVar197 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                          *(undefined4 *)(param_1 + 4 + lVar29),0x10);
      auVar197 = insertps(auVar197,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      local_338 = insertps(auVar197,*(undefined4 *)(param_1 + 4 + lVar35),0x30);
      auVar197 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                          *(undefined4 *)(param_1 + 8 + lVar29),0x10);
      auVar197 = insertps(auVar197,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      local_328 = insertps(auVar197,*(undefined4 *)(param_1 + 8 + lVar35),0x30);
      auVar215 = insertps(auVar215,local_3d8,0x20);
      lVar20 = (longlong)(auVar44._0_4_ << 4);
      lVar30 = (longlong)(auVar44._4_4_ * 0x10);
      local_4c0 = (longlong)(*piVar1 << 4);
      lVar38 = (longlong)(piVar1[3] << 4);
      auVar197 = insertps(ZEXT416(*(uint *)(param_1 + lVar20)),*(undefined4 *)(param_1 + lVar30),
                          0x10);
      auVar197 = insertps(auVar197,*(undefined4 *)(param_1 + local_4c0),0x20);
      local_308 = insertps(auVar197,*(undefined4 *)(param_1 + lVar38),0x30);
      fVar95 = pfVar34[-0xc];
      fVar167 = pfVar34[-0xb];
      fVar107 = pfVar34[-10];
      fVar190 = pfVar34[-9];
      fVar168 = pfVar34[-8];
      fVar172 = pfVar34[-7];
      fVar176 = pfVar34[-6];
      fVar146 = pfVar34[-5];
      fVar108 = pfVar34[-4];
      fVar171 = pfVar34[-3];
      fVar164 = pfVar34[-2];
      fVar186 = pfVar34[-1];
      fVar196 = *pfVar34;
      fVar175 = pfVar34[1];
      fVar109 = pfVar34[2];
      fVar180 = pfVar34[3];
      auVar197 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                          *(undefined4 *)(param_1 + 4 + lVar30),0x10);
      uVar177 = *(uint *)(param_1 + 0xc + lVar41);
      local_428 = ZEXT416(uVar177);
      auVar127 = insertps(auVar215,local_428,0x30);
      uVar187 = *(uint *)(param_1 + 0xc + lVar26);
      local_3c8 = ZEXT416(uVar187);
      uVar191 = *(uint *)(param_1 + 0xc + lVar29);
      local_3b8 = ZEXT416(uVar191);
      auVar215 = insertps(local_3c8,local_3b8,0x10);
      auVar197 = insertps(auVar197,*(undefined4 *)(param_1 + 4 + local_4c0),0x20);
      uVar194 = *(uint *)(param_1 + 0xc + lVar32);
      local_3a8 = ZEXT416(uVar194);
      auVar215 = insertps(auVar215,local_3a8,0x20);
      local_4e8 = insertps(auVar197,*(undefined4 *)(param_1 + 4 + lVar38),0x30);
      uVar150 = *(uint *)(param_1 + 0xc + lVar35);
      local_418 = ZEXT416(uVar150);
      auVar71 = insertps(auVar215,local_418,0x30);
      auVar215 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                          *(undefined4 *)(param_1 + 8 + lVar30),0x10);
      auVar215 = insertps(auVar215,*(undefined4 *)(param_1 + 8 + local_4c0),0x20);
      local_318 = insertps(auVar215,*(undefined4 *)(param_1 + 8 + lVar38),0x30);
      uVar156 = *(uint *)(param_1 + 0xc + lVar20);
      local_398 = ZEXT416(uVar156);
      uVar159 = *(uint *)(param_1 + 0xc + lVar30);
      local_388 = ZEXT416(uVar159);
      auVar215 = insertps(local_398,local_388,0x10);
      uVar162 = *(uint *)(param_1 + 0xc + local_4c0);
      local_378 = ZEXT416(uVar162);
      auVar215 = insertps(auVar215,local_378,0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar38);
      local_408 = ZEXT416(uVar8);
      auVar72 = insertps(auVar215,local_408,0x30);
      auVar215 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar43);
      auVar197 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar43);
      pfVar2 = (float *)(param_3 + lVar43);
      auVar111 = insertps(auVar197,auVar215,0x8c);
      fVar96 = local_368._0_4_;
      fVar195 = local_348._0_4_ - fVar96;
      fVar218 = local_368._4_4_;
      fVar199 = local_348._4_4_ - fVar218;
      fVar219 = local_368._8_4_;
      fVar200 = local_348._8_4_ - fVar219;
      fVar220 = local_368._12_4_;
      fVar201 = local_348._12_4_ - fVar220;
      fVar148 = local_338._0_4_;
      fVar154 = local_338._4_4_;
      fVar157 = local_338._8_4_;
      fVar160 = local_338._12_4_;
      fVar135 = local_358._0_4_;
      fVar110 = local_328._0_4_ - fVar135;
      fVar140 = local_358._4_4_;
      fVar121 = local_328._4_4_ - fVar140;
      fVar142 = local_358._8_4_;
      fVar122 = local_328._8_4_ - fVar142;
      fVar144 = local_358._12_4_;
      fVar123 = local_328._12_4_ - fVar144;
      fVar221 = local_308._0_4_ - fVar96;
      fVar224 = local_308._4_4_ - fVar218;
      fVar226 = local_308._8_4_ - fVar219;
      fVar228 = local_308._12_4_ - fVar220;
      fVar202 = local_4e8._0_4_;
      fVar204 = local_4e8._4_4_;
      fVar206 = local_4e8._8_4_;
      fVar208 = local_4e8._12_4_;
      fVar178 = local_318._0_4_;
      fVar184 = local_318._4_4_;
      fVar188 = local_318._8_4_;
      fVar192 = local_318._12_4_;
      auVar216._0_4_ = fVar110 * fVar95;
      auVar216._4_4_ = fVar121 * fVar168;
      auVar216._8_4_ = fVar122 * fVar108;
      auVar216._12_4_ = fVar123 * fVar196;
      fVar125 = fVar221 * fVar167 + fVar195 * fVar95;
      fVar132 = fVar224 * fVar172 + fVar199 * fVar168;
      fVar133 = fVar226 * fVar171 + fVar200 * fVar108;
      fVar134 = fVar228 * fVar175 + fVar201 * fVar196;
      fVar136 = (fVar202 - (float)local_548._0_4_) * fVar167 +
                (fVar148 - (float)local_548._0_4_) * fVar95;
      fVar141 = (fVar204 - (float)local_548._4_4_) * fVar172 +
                (fVar154 - (float)local_548._4_4_) * fVar168;
      fVar143 = (fVar206 - fStack_540) * fVar171 + (fVar157 - fStack_540) * fVar108;
      fVar145 = (fVar208 - fStack_53c) * fVar175 + (fVar160 - fStack_53c) * fVar196;
      fVar163 = (fVar178 - fVar135) * fVar167 + auVar216._0_4_;
      fVar166 = (fVar184 - fVar140) * fVar172 + auVar216._4_4_;
      fVar170 = (fVar188 - fVar142) * fVar171 + auVar216._8_4_;
      fVar174 = (fVar192 - fVar144) * fVar175 + auVar216._12_4_;
      fVar222 = fVar221 * fVar190 + fVar195 * fVar107;
      fVar225 = fVar224 * fVar146 + fVar199 * fVar176;
      fVar227 = fVar226 * fVar186 + fVar200 * fVar164;
      fVar229 = fVar228 * fVar180 + fVar201 * fVar109;
      fVar203 = (fVar202 - (float)local_548._0_4_) * fVar190 +
                (fVar148 - (float)local_548._0_4_) * fVar107;
      fVar205 = (fVar204 - (float)local_548._4_4_) * fVar146 +
                (fVar154 - (float)local_548._4_4_) * fVar176;
      fVar207 = (fVar206 - fStack_540) * fVar186 + (fVar157 - fStack_540) * fVar164;
      fVar209 = (fVar208 - fStack_53c) * fVar180 + (fVar160 - fStack_53c) * fVar109;
      fVar179 = (fVar178 - fVar135) * fVar190 + fVar110 * fVar107;
      fVar185 = (fVar184 - fVar140) * fVar146 + fVar121 * fVar176;
      fVar189 = (fVar188 - fVar142) * fVar186 + fVar122 * fVar164;
      fVar193 = (fVar192 - fVar144) * fVar180 + fVar123 * fVar109;
      auVar112._0_4_ = fVar163 * fVar163 + fVar136 * fVar136 + fVar125 * fVar125;
      auVar112._4_4_ = fVar166 * fVar166 + fVar141 * fVar141 + fVar132 * fVar132;
      auVar112._8_4_ = fVar170 * fVar170 + fVar143 * fVar143 + fVar133 * fVar133;
      auVar112._12_4_ = fVar174 * fVar174 + fVar145 * fVar145 + fVar134 * fVar134;
      auVar217 = sqrtps(auVar216,auVar112);
      auVar198._0_4_ = fVar203 * fVar203 + fVar222 * fVar222;
      auVar198._4_4_ = fVar205 * fVar205 + fVar225 * fVar225;
      auVar198._8_4_ = fVar207 * fVar207 + fVar227 * fVar227;
      auVar198._12_4_ = fVar209 * fVar209 + fVar229 * fVar229;
      auVar151._0_4_ = fVar179 * fVar179 + auVar198._0_4_;
      auVar151._4_4_ = fVar185 * fVar185 + auVar198._4_4_;
      auVar151._8_4_ = fVar189 * fVar189 + auVar198._8_4_;
      auVar151._12_4_ = fVar193 * fVar193 + auVar198._12_4_;
      auVar44 = sqrtps(auVar198,auVar151);
      auVar70 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar217);
      fVar149 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar217._0_4_) &
                       auVar70._0_4_);
      fVar155 = (float)(-(uint)(_UNK_1506895d4 < auVar217._4_4_) & auVar70._4_4_);
      fVar158 = (float)(-(uint)(_UNK_1506895d8 < auVar217._8_4_) & auVar70._8_4_);
      fVar161 = (float)(-(uint)(_UNK_1506895dc < auVar217._12_4_) & auVar70._12_4_);
      auVar70 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar44);
      fVar210 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar44._0_4_) &
                       auVar70._0_4_);
      fVar212 = (float)(-(uint)(_UNK_1506895d4 < auVar44._4_4_) & auVar70._4_4_);
      fVar213 = (float)(-(uint)(_UNK_1506895d8 < auVar44._8_4_) & auVar70._8_4_);
      fVar214 = (float)(-(uint)(_UNK_1506895dc < auVar44._12_4_) & auVar70._12_4_);
      fVar125 = fVar125 * fVar149;
      fVar132 = fVar132 * fVar155;
      fVar133 = fVar133 * fVar158;
      fVar134 = fVar134 * fVar161;
      fVar136 = fVar136 * fVar149;
      fVar141 = fVar141 * fVar155;
      fVar143 = fVar143 * fVar158;
      fVar145 = fVar145 * fVar161;
      fVar163 = fVar163 * fVar149;
      fVar166 = fVar166 * fVar155;
      fVar170 = fVar170 * fVar158;
      fVar174 = fVar174 * fVar161;
      fVar222 = fVar222 * fVar210;
      fVar225 = fVar225 * fVar212;
      fVar227 = fVar227 * fVar213;
      fVar229 = fVar229 * fVar214;
      fVar203 = fVar203 * fVar210;
      fVar205 = fVar205 * fVar212;
      fVar207 = fVar207 * fVar213;
      fVar209 = fVar209 * fVar214;
      fVar179 = fVar179 * fVar210;
      fVar185 = fVar185 * fVar212;
      fVar189 = fVar189 * fVar213;
      fVar193 = fVar193 * fVar214;
      local_2b8 = auVar217._0_4_ - auVar215._0_4_ * param_11;
      fStack_2b4 = auVar217._4_4_ - auVar215._12_4_ * param_11;
      fStack_2b0 = auVar217._8_4_ - auVar197._8_4_ * param_11;
      fStack_2ac = auVar217._12_4_ - pfVar2[1] * param_11;
      local_4f8 = auVar44._0_4_ - auVar215._4_4_ * param_10;
      fStack_4f4 = auVar44._4_4_ - auVar197._0_4_ * param_10;
      fStack_4f0 = auVar44._8_4_ - auVar197._12_4_ * param_10;
      fStack_4ec = auVar44._12_4_ - pfVar2[2] * param_10;
      local_6d8 = auVar111._0_4_;
      fStack_6d4 = auVar111._4_4_;
      local_558._0_4_ = (fVar163 * fVar179 + fVar136 * fVar203 + fVar125 * fVar222) - local_6d8;
      local_558._4_4_ = (fVar166 * fVar185 + fVar141 * fVar205 + fVar132 * fVar225) - fStack_6d4;
      fStack_550 = (fVar170 * fVar189 + fVar143 * fVar207 + fVar133 * fVar227) - *pfVar2;
      fStack_54c = (fVar174 * fVar193 + fVar145 * fVar209 + fVar134 * fVar229) - pfVar2[3];
      fVar110 = fVar107 * fVar222;
      fVar122 = fVar176 * fVar225;
      fVar195 = fVar164 * fVar227;
      fVar200 = fVar109 * fVar229;
      fVar121 = fVar107 * fVar203;
      fVar123 = fVar176 * fVar205;
      fVar199 = fVar164 * fVar207;
      fVar201 = fVar109 * fVar209;
      local_538 = fVar107 * fVar179;
      fStack_534 = fVar176 * fVar185;
      fStack_530 = fVar164 * fVar189;
      fStack_52c = fVar109 * fVar193;
      fVar221 = fVar190 * fVar222;
      fVar80 = fVar146 * fVar225;
      fVar85 = fVar186 * fVar227;
      fVar90 = fVar180 * fVar229;
      fVar224 = fVar190 * fVar203;
      fVar81 = fVar146 * fVar205;
      fVar86 = fVar186 * fVar207;
      fVar91 = fVar180 * fVar209;
      fVar226 = fVar190 * fVar179;
      fVar82 = fVar146 * fVar185;
      fVar87 = fVar186 * fVar189;
      fVar92 = fVar180 * fVar193;
      fVar228 = fVar95 * fVar125;
      fVar83 = fVar168 * fVar132;
      fVar88 = fVar108 * fVar133;
      fVar93 = fVar196 * fVar134;
      local_518 = fVar95 * fVar136;
      fStack_514 = fVar168 * fVar141;
      fStack_510 = fVar108 * fVar143;
      fStack_50c = fVar196 * fVar145;
      local_2c8 = fVar95 * fVar163;
      fStack_2c4 = fVar168 * fVar166;
      fStack_2c0 = fVar108 * fVar170;
      fStack_2bc = fVar196 * fVar174;
      local_298 = fVar167 * fVar125;
      fStack_294 = fVar172 * fVar132;
      fStack_290 = fVar171 * fVar133;
      fStack_28c = fVar175 * fVar134;
      local_288 = fVar167 * fVar136;
      fStack_284 = fVar172 * fVar141;
      fStack_280 = fVar171 * fVar143;
      fStack_27c = fVar175 * fVar145;
      fVar69 = fVar167 * fVar163;
      fVar84 = fVar172 * fVar166;
      fVar89 = fVar171 * fVar170;
      fVar94 = fVar175 * fVar174;
      local_2a8 = fVar107 * fVar125 * fVar210 + fVar95 * fVar222 * fVar149;
      fStack_2a4 = fVar176 * fVar132 * fVar212 + fVar168 * fVar225 * fVar155;
      fStack_2a0 = fVar164 * fVar133 * fVar213 + fVar108 * fVar227 * fVar158;
      fStack_29c = fVar109 * fVar134 * fVar214 + fVar196 * fVar229 * fVar161;
      local_2d8 = fVar107 * fVar136 * fVar210 + fVar95 * fVar203 * fVar149;
      fStack_2d4 = fVar176 * fVar141 * fVar212 + fVar168 * fVar205 * fVar155;
      fStack_2d0 = fVar164 * fVar143 * fVar213 + fVar108 * fVar207 * fVar158;
      fStack_2cc = fVar109 * fVar145 * fVar214 + fVar196 * fVar209 * fVar161;
      fVar95 = fVar107 * fVar163 * fVar210 + fVar95 * fVar179 * fVar149;
      fVar107 = fVar176 * fVar166 * fVar212 + fVar168 * fVar185 * fVar155;
      fVar108 = fVar164 * fVar170 * fVar213 + fVar108 * fVar189 * fVar158;
      fVar109 = fVar109 * fVar174 * fVar214 + fVar196 * fVar193 * fVar161;
      local_2e8 = fVar125 * fVar210 * fVar190 + fVar222 * fVar149 * fVar167;
      fStack_2e4 = fVar132 * fVar212 * fVar146 + fVar225 * fVar155 * fVar172;
      fStack_2e0 = fVar133 * fVar213 * fVar186 + fVar227 * fVar158 * fVar171;
      fStack_2dc = fVar134 * fVar214 * fVar180 + fVar229 * fVar161 * fVar175;
      local_2f8 = fVar136 * fVar210 * fVar190 + fVar203 * fVar149 * fVar167;
      fStack_2f4 = fVar141 * fVar212 * fVar146 + fVar205 * fVar155 * fVar172;
      fStack_2f0 = fVar143 * fVar213 * fVar186 + fVar207 * fVar158 * fVar171;
      fStack_2ec = fVar145 * fVar214 * fVar180 + fVar209 * fVar161 * fVar175;
      fVar164 = fVar163 * fVar210 * fVar190 + fVar179 * fVar149 * fVar167;
      fVar167 = fVar166 * fVar212 * fVar146 + fVar185 * fVar155 * fVar172;
      fVar171 = fVar170 * fVar213 * fVar186 + fVar189 * fVar158 * fVar171;
      fVar175 = fVar174 * fVar214 * fVar180 + fVar193 * fVar161 * fVar175;
      auVar215 = *(undefined1 (*) [16])(param_6 + -0x20 + lVar43);
      auVar197 = *(undefined1 (*) [16])(param_6 + -0x10 + lVar43);
      pfVar7 = (float *)(param_6 + lVar43);
      fVar146 = *pfVar7;
      fVar196 = pfVar7[3];
      auVar70 = insertps(auVar197,auVar215,0x8c);
      auVar217._0_8_ = auVar70._0_8_;
      auVar217._8_4_ = fVar146;
      auVar217._12_4_ = fVar196;
      auVar111 = *(undefined1 (*) [16])(param_5 + -0x20 + lVar43);
      auVar44 = *(undefined1 (*) [16])(param_5 + -0x10 + lVar43);
      pfVar2 = (float *)(param_5 + lVar43);
      auVar211 = insertps(auVar44,auVar111,0x8c);
      fVar168 = *param_9;
      fVar172 = param_9[1];
      fVar176 = param_9[2];
      fVar180 = fVar168 * auVar111._0_4_;
      fVar186 = fVar168 * auVar111._12_4_;
      fVar190 = fVar168 * auVar44._8_4_;
      fVar132 = fVar172 * auVar111._4_4_;
      fVar133 = fVar172 * auVar44._0_4_;
      fVar134 = fVar172 * auVar44._12_4_;
      fVar141 = fVar176 * auVar211._0_4_;
      fVar143 = fVar176 * auVar211._4_4_;
      auVar97._0_4_ = param_7 * fVar180 * param_7;
      auVar97._4_4_ = param_7 * fVar186 * param_7;
      auVar97._8_4_ = param_7 * fVar190 * param_7;
      auVar97._12_4_ = param_7 * fVar168 * pfVar2[1] * param_7;
      auVar111 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar97);
      local_648 = auVar127._0_4_;
      fStack_644 = auVar127._4_4_;
      fStack_640 = auVar127._8_4_;
      fStack_63c = auVar127._12_4_;
      local_6f8._0_4_ = auVar71._0_4_;
      local_6f8._4_4_ = auVar71._4_4_;
      fStack_6f0 = auVar71._8_4_;
      fStack_6ec = auVar71._12_4_;
      local_6c8._0_4_ = auVar72._0_4_;
      local_6c8._4_4_ = auVar72._4_4_;
      fStack_6c0 = auVar72._8_4_;
      fStack_6bc = auVar72._12_4_;
      auVar113._0_4_ =
           (fVar69 * fVar69 + local_288 * local_288 + local_298 * local_298) *
           (float)local_6c8._0_4_ +
           (local_2c8 * local_2c8 + local_518 * local_518 + fVar228 * fVar228) * (float)local_6f8 +
           ((local_2c8 + fVar69) * (local_2c8 + fVar69) +
           (local_518 + local_288) * (local_518 + local_288) +
           (fVar228 + local_298) * (fVar228 + local_298)) * local_648 + auVar111._0_4_;
      auVar113._4_4_ =
           (fVar84 * fVar84 + fStack_284 * fStack_284 + fStack_294 * fStack_294) *
           (float)local_6c8._4_4_ +
           (fStack_2c4 * fStack_2c4 + fStack_514 * fStack_514 + fVar83 * fVar83) * local_6f8._4_4_ +
           ((fStack_2c4 + fVar84) * (fStack_2c4 + fVar84) +
           (fStack_514 + fStack_284) * (fStack_514 + fStack_284) +
           (fVar83 + fStack_294) * (fVar83 + fStack_294)) * fStack_644 + auVar111._4_4_;
      auVar113._8_4_ =
           (fVar89 * fVar89 + fStack_280 * fStack_280 + fStack_290 * fStack_290) * fStack_6c0 +
           (fStack_2c0 * fStack_2c0 + fStack_510 * fStack_510 + fVar88 * fVar88) * fStack_6f0 +
           ((fStack_2c0 + fVar89) * (fStack_2c0 + fVar89) +
           (fStack_510 + fStack_280) * (fStack_510 + fStack_280) +
           (fVar88 + fStack_290) * (fVar88 + fStack_290)) * fStack_640 + auVar111._8_4_;
      auVar113._12_4_ =
           (fVar94 * fVar94 + fStack_27c * fStack_27c + fStack_28c * fStack_28c) * fStack_6bc +
           (fStack_2bc * fStack_2bc + fStack_50c * fStack_50c + fVar93 * fVar93) * fStack_6ec +
           ((fStack_2bc + fVar94) * (fStack_2bc + fVar94) +
           (fStack_50c + fStack_27c) * (fStack_50c + fStack_27c) +
           (fVar93 + fStack_28c) * (fVar93 + fStack_28c)) * fStack_63c + auVar111._12_4_;
      auVar44._0_4_ = local_2b8 - auVar111._0_4_ * auVar215._0_4_;
      auVar44._4_4_ = fStack_2b4 - auVar111._4_4_ * auVar215._12_4_;
      auVar44._8_4_ = fStack_2b0 - auVar111._8_4_ * auVar197._8_4_;
      auVar44._12_4_ = fStack_2ac - auVar111._12_4_ * pfVar7[1];
      auVar111 = divps(auVar44,auVar113);
      fVar180 = (float)(-(uint)(param_8 <= fVar180) & auVar111._0_4_);
      fVar186 = (float)(-(uint)(param_8 <= fVar186) & auVar111._4_4_);
      fVar190 = (float)(-(uint)(param_8 <= fVar190) & auVar111._8_4_);
      fVar125 = (float)(-(uint)(param_8 <= fVar168 * pfVar2[1]) & auVar111._12_4_);
      auVar98._0_4_ = param_7 * fVar132 * param_7;
      auVar98._4_4_ = param_7 * fVar133 * param_7;
      auVar98._8_4_ = param_7 * fVar134 * param_7;
      auVar98._12_4_ = param_7 * fVar172 * pfVar2[2] * param_7;
      auVar111 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar98);
      auVar137._0_4_ =
           (fVar226 * fVar226 + fVar224 * fVar224 + fVar221 * fVar221) * (float)local_6c8._0_4_ +
           (local_538 * local_538 + fVar121 * fVar121 + fVar110 * fVar110) * (float)local_6f8 +
           ((local_538 + fVar226) * (local_538 + fVar226) +
           (fVar121 + fVar224) * (fVar121 + fVar224) + (fVar110 + fVar221) * (fVar110 + fVar221)) *
           local_648 + auVar111._0_4_;
      auVar137._4_4_ =
           (fVar82 * fVar82 + fVar81 * fVar81 + fVar80 * fVar80) * (float)local_6c8._4_4_ +
           (fStack_534 * fStack_534 + fVar123 * fVar123 + fVar122 * fVar122) * local_6f8._4_4_ +
           ((fStack_534 + fVar82) * (fStack_534 + fVar82) +
           (fVar123 + fVar81) * (fVar123 + fVar81) + (fVar122 + fVar80) * (fVar122 + fVar80)) *
           fStack_644 + auVar111._4_4_;
      auVar137._8_4_ =
           (fVar87 * fVar87 + fVar86 * fVar86 + fVar85 * fVar85) * fStack_6c0 +
           (fStack_530 * fStack_530 + fVar199 * fVar199 + fVar195 * fVar195) * fStack_6f0 +
           ((fStack_530 + fVar87) * (fStack_530 + fVar87) +
           (fVar199 + fVar86) * (fVar199 + fVar86) + (fVar195 + fVar85) * (fVar195 + fVar85)) *
           fStack_640 + auVar111._8_4_;
      auVar137._12_4_ =
           (fVar92 * fVar92 + fVar91 * fVar91 + fVar90 * fVar90) * fStack_6bc +
           (fStack_52c * fStack_52c + fVar201 * fVar201 + fVar200 * fVar200) * fStack_6ec +
           ((fStack_52c + fVar92) * (fStack_52c + fVar92) +
           (fVar201 + fVar91) * (fVar201 + fVar91) + (fVar200 + fVar90) * (fVar200 + fVar90)) *
           fStack_63c + auVar111._12_4_;
      auVar72._0_4_ = local_4f8 - auVar111._0_4_ * auVar215._4_4_;
      auVar72._4_4_ = fStack_4f4 - auVar111._4_4_ * auVar197._0_4_;
      auVar72._8_4_ = fStack_4f0 - auVar111._8_4_ * auVar197._12_4_;
      auVar72._12_4_ = fStack_4ec - auVar111._12_4_ * pfVar7[2];
      auVar111 = divps(auVar72,auVar137);
      fVar132 = (float)(-(uint)(param_8 <= fVar132) & auVar111._0_4_);
      fVar133 = (float)(-(uint)(param_8 <= fVar133) & auVar111._4_4_);
      fVar134 = (float)(-(uint)(param_8 <= fVar134) & auVar111._8_4_);
      fVar136 = (float)(-(uint)(param_8 <= fVar172 * pfVar2[2]) & auVar111._12_4_);
      auVar99._0_4_ = param_7 * fVar141 * param_7;
      auVar99._4_4_ = param_7 * fVar143 * param_7;
      auVar99._8_4_ = param_7 * fVar176 * *pfVar2 * param_7;
      auVar99._12_4_ = param_7 * fVar176 * pfVar2[3] * param_7;
      auVar111 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar99);
      auVar128._0_4_ =
           (fVar164 * fVar164 + local_2f8 * local_2f8 + local_2e8 * local_2e8) *
           (float)local_6c8._0_4_ +
           (fVar95 * fVar95 + local_2d8 * local_2d8 + local_2a8 * local_2a8) * (float)local_6f8 +
           ((fVar95 + fVar164) * (fVar95 + fVar164) +
           (local_2d8 + local_2f8) * (local_2d8 + local_2f8) +
           (local_2a8 + local_2e8) * (local_2a8 + local_2e8)) * local_648 + auVar111._0_4_;
      auVar128._4_4_ =
           (fVar167 * fVar167 + fStack_2f4 * fStack_2f4 + fStack_2e4 * fStack_2e4) *
           (float)local_6c8._4_4_ +
           (fVar107 * fVar107 + fStack_2d4 * fStack_2d4 + fStack_2a4 * fStack_2a4) * local_6f8._4_4_
           + ((fVar107 + fVar167) * (fVar107 + fVar167) +
             (fStack_2d4 + fStack_2f4) * (fStack_2d4 + fStack_2f4) +
             (fStack_2a4 + fStack_2e4) * (fStack_2a4 + fStack_2e4)) * fStack_644 + auVar111._4_4_;
      auVar128._8_4_ =
           (fVar171 * fVar171 + fStack_2f0 * fStack_2f0 + fStack_2e0 * fStack_2e0) * fStack_6c0 +
           (fVar108 * fVar108 + fStack_2d0 * fStack_2d0 + fStack_2a0 * fStack_2a0) * fStack_6f0 +
           ((fVar108 + fVar171) * (fVar108 + fVar171) +
           (fStack_2d0 + fStack_2f0) * (fStack_2d0 + fStack_2f0) +
           (fStack_2a0 + fStack_2e0) * (fStack_2a0 + fStack_2e0)) * fStack_640 + auVar111._8_4_;
      auVar128._12_4_ =
           (fVar175 * fVar175 + fStack_2ec * fStack_2ec + fStack_2dc * fStack_2dc) * fStack_6bc +
           (fVar109 * fVar109 + fStack_2cc * fStack_2cc + fStack_29c * fStack_29c) * fStack_6ec +
           ((fVar109 + fVar175) * (fVar109 + fVar175) +
           (fStack_2cc + fStack_2ec) * (fStack_2cc + fStack_2ec) +
           (fStack_29c + fStack_2dc) * (fStack_29c + fStack_2dc)) * fStack_63c + auVar111._12_4_;
      local_508._0_4_ = auVar70._0_4_;
      local_508._4_4_ = auVar70._4_4_;
      auVar127._0_4_ = (float)local_558._0_4_ - auVar111._0_4_ * (float)local_508._0_4_;
      auVar127._4_4_ = (float)local_558._4_4_ - auVar111._4_4_ * (float)local_508._4_4_;
      auVar127._8_4_ = fStack_550 - auVar111._8_4_ * fVar146;
      auVar127._12_4_ = fStack_54c - auVar111._12_4_ * fVar196;
      auVar111 = divps(auVar127,auVar128);
      fVar141 = (float)(-(uint)(param_8 <= fVar141) & auVar111._0_4_);
      fVar143 = (float)(-(uint)(param_8 <= fVar143) & auVar111._4_4_);
      fVar145 = (float)(-(uint)(param_8 <= fVar176 * *pfVar2) & auVar111._8_4_);
      fVar149 = (float)(-(uint)(param_8 <= fVar176 * pfVar2[3]) & auVar111._12_4_);
      auVar70._0_8_ = CONCAT44(auVar215._12_4_ + fVar186,auVar215._0_4_ + fVar180);
      auVar70._8_4_ = auVar197._8_4_ + fVar190;
      auVar70._12_4_ = pfVar7[1] + fVar125;
      fVar168 = auVar197._0_4_ + fVar133;
      fVar172 = auVar197._12_4_ + fVar134;
      fVar176 = pfVar7[2] + fVar136;
      auVar211._0_4_ = (float)local_508._0_4_ + fVar141;
      auVar211._4_4_ = (float)local_508._4_4_ + fVar143;
      auVar211._8_4_ = fVar146 + fVar145;
      auVar211._12_4_ = fVar196 + fVar149;
      auVar100._8_4_ = auVar70._8_4_;
      auVar100._0_8_ = auVar70._0_8_;
      auVar100._12_4_ = auVar70._12_4_;
      auVar197._4_4_ = fVar168;
      auVar197._0_4_ = auVar215._4_4_ + fVar132;
      auVar197._8_4_ = fVar172;
      auVar197._12_4_ = fVar176;
      auVar215 = insertps(auVar100,auVar197,0x30);
      auVar215 = insertps(auVar215,auVar211,0x20);
      puVar4 = (undefined4 *)(param_6 + -0x20 + lVar43);
      *puVar4 = auVar215._0_4_;
      puVar4[1] = auVar215._12_4_;
      puVar4[2] = auVar215._8_4_;
      puVar4[3] = auVar215._4_4_;
      auVar101._4_4_ = fVar172;
      auVar101._0_4_ = fVar168;
      auVar101._8_4_ = auVar211._0_4_;
      auVar101._12_4_ = auVar211._4_4_;
      auVar215 = blendps(auVar101,auVar70,4);
      puVar4 = (undefined4 *)(param_6 + -0x10 + lVar43);
      *puVar4 = auVar215._0_4_;
      puVar4[1] = auVar215._12_4_;
      puVar4[2] = auVar215._8_4_;
      puVar4[3] = auVar215._4_4_;
      pfVar2 = (float *)(param_6 + lVar43);
      *pfVar2 = auVar211._8_4_;
      pfVar2[1] = auVar70._12_4_;
      pfVar2[2] = fVar176;
      pfVar2[3] = auVar211._12_4_;
      fVar110 = local_2a8 * fVar141 + fVar110 * fVar132 + fVar228 * fVar180;
      fVar122 = fStack_2a4 * fVar143 + fVar122 * fVar133 + fVar83 * fVar186;
      fVar195 = fStack_2a0 * fVar145 + fVar195 * fVar134 + fVar88 * fVar190;
      fVar200 = fStack_29c * fVar149 + fVar200 * fVar136 + fVar93 * fVar125;
      fVar121 = local_2d8 * fVar141 + fVar121 * fVar132 + local_518 * fVar180;
      fVar123 = fStack_2d4 * fVar143 + fVar123 * fVar133 + fStack_514 * fVar186;
      fVar199 = fStack_2d0 * fVar145 + fVar199 * fVar134 + fStack_510 * fVar190;
      fVar201 = fStack_2cc * fVar149 + fVar201 * fVar136 + fStack_50c * fVar125;
      fVar168 = fVar95 * fVar141 + local_538 * fVar132 + local_2c8 * fVar180;
      fVar172 = fVar107 * fVar143 + fStack_534 * fVar133 + fStack_2c4 * fVar186;
      fVar176 = fVar108 * fVar145 + fStack_530 * fVar134 + fStack_2c0 * fVar190;
      fVar146 = fVar109 * fVar149 + fStack_52c * fVar136 + fStack_2bc * fVar125;
      fVar196 = local_2e8 * fVar141 + fVar221 * fVar132 + local_298 * fVar180;
      fVar109 = fStack_2e4 * fVar143 + fVar80 * fVar133 + fStack_294 * fVar186;
      fVar108 = fStack_2e0 * fVar145 + fVar85 * fVar134 + fStack_290 * fVar190;
      fVar95 = fStack_2dc * fVar149 + fVar90 * fVar136 + fStack_28c * fVar125;
      fVar107 = local_2f8 * fVar141 + fVar224 * fVar132 + local_288 * fVar180;
      fVar221 = fStack_2f4 * fVar143 + fVar81 * fVar133 + fStack_284 * fVar186;
      fVar224 = fStack_2f0 * fVar145 + fVar86 * fVar134 + fStack_280 * fVar190;
      fVar228 = fStack_2ec * fVar149 + fVar91 * fVar136 + fStack_27c * fVar125;
      fVar180 = fVar141 * fVar164 + fVar132 * fVar226 + fVar180 * fVar69;
      fVar164 = fVar143 * fVar167 + fVar133 * fVar82 + fVar186 * fVar84;
      fVar171 = fVar145 * fVar171 + fVar134 * fVar87 + fVar190 * fVar89;
      fVar175 = fVar149 * fVar175 + fVar136 * fVar92 + fVar125 * fVar94;
      auVar215._4_4_ = -(uint)(0.0 < fStack_644);
      auVar215._0_4_ = -(uint)(0.0 < local_648);
      auVar215._8_4_ = -(uint)(0.0 < fStack_640);
      auVar215._12_4_ = -(uint)(0.0 < fStack_63c);
      iVar37 = movmskps((int)param_9,auVar215);
      if (iVar37 != 0) {
        bVar36 = (char)((char)iVar37 << 4) >> 4;
        fVar96 = fVar96 + (fVar110 + fVar196) * local_648;
        auVar45._4_4_ = fVar218 + (fVar122 + fVar109) * fStack_644;
        auVar45._0_4_ = fVar96;
        auVar45._8_4_ = fVar219 + (fVar195 + fVar108) * fStack_640;
        auVar45._12_4_ = fVar220 + (fVar200 + fVar95) * fStack_63c;
        if ((bVar36 & 1) != 0) {
          *(float *)(param_1 + lVar27) = fVar96;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar45,1);
          *(undefined8 *)(param_1 + lVar33) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar45,2);
          *(undefined8 *)(param_1 + lVar39) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar45,3);
          *(undefined8 *)(param_1 + lVar41) = uVar9;
        }
        fVar186 = (float)local_548._0_4_ + (fVar121 + fVar107) * local_648;
        auVar46._4_4_ = (float)local_548._4_4_ + (fVar123 + fVar221) * fStack_644;
        auVar46._0_4_ = fVar186;
        auVar46._8_4_ = fStack_540 + (fVar199 + fVar224) * fStack_640;
        auVar46._12_4_ = fStack_53c + (fVar201 + fVar228) * fStack_63c;
        if ((bVar36 & 1) != 0) {
          *(float *)(param_1 + 4 + lVar27) = fVar186;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar46,1);
          *(undefined8 *)(param_1 + 4 + lVar33) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar46,2);
          *(undefined8 *)(param_1 + 4 + lVar39) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar46,3);
          *(undefined8 *)(param_1 + 4 + lVar41) = uVar9;
        }
        auVar47._0_4_ = fVar135 + local_648 * (fVar168 + fVar180);
        auVar47._4_4_ = fVar140 + fStack_644 * (fVar172 + fVar164);
        auVar47._8_4_ = fVar142 + fStack_640 * (fVar176 + fVar171);
        auVar47._12_4_ = fVar144 + fStack_63c * (fVar146 + fVar175);
        if ((bVar36 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar27) = auVar47._0_4_;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar47,1);
          *(undefined8 *)(param_1 + 8 + lVar33) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar47,2);
          *(undefined8 *)(param_1 + 8 + lVar39) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar47,3);
          *(undefined8 *)(param_1 + 8 + lVar41) = uVar9;
        }
        if ((bVar36 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar27) = uVar25;
        }
        if ((bVar36 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar33) = uVar169;
        }
        if ((bVar36 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar173;
        }
        if ((char)bVar36 < '\0') {
          *(uint *)(param_1 + 0xc + lVar41) = uVar177;
        }
      }
      auVar48._4_4_ = -(uint)(0.0 < local_6f8._4_4_);
      auVar48._0_4_ = -(uint)(0.0 < (float)local_6f8);
      auVar48._8_4_ = -(uint)(0.0 < fStack_6f0);
      auVar48._12_4_ = -(uint)(0.0 < fStack_6ec);
      iVar37 = movmskps(iVar124,auVar48);
      if (iVar37 != 0) {
        bVar36 = (char)((char)iVar37 << 4) >> 4;
        auVar129._0_4_ = local_348._0_4_ - fVar110 * (float)local_6f8;
        auVar129._4_4_ = local_348._4_4_ - fVar122 * local_6f8._4_4_;
        auVar129._8_4_ = local_348._8_4_ - fVar195 * fStack_6f0;
        auVar129._12_4_ = local_348._12_4_ - fVar200 * fStack_6ec;
        if ((bVar36 & 1) != 0) {
          *(float *)(param_1 + lVar26) = auVar129._0_4_;
        }
        if ((bVar36 & 2) == 0) {
          if ((bVar36 & 4) == 0) goto LAB_1409bf1aa;
LAB_1409bf481:
          uVar9 = extractps(auVar129,2);
          *(undefined8 *)(param_1 + lVar32) = uVar9;
          if ((char)bVar36 < '\0') goto LAB_1409bf490;
LAB_1409bf1b2:
          auVar114._0_4_ = fVar148 - fVar121 * (float)local_6f8;
          auVar114._4_4_ = fVar154 - fVar123 * local_6f8._4_4_;
          auVar114._8_4_ = fVar157 - fVar199 * fStack_6f0;
          auVar114._12_4_ = fVar160 - fVar201 * fStack_6ec;
        }
        else {
          uVar9 = extractps(auVar129,1);
          *(undefined8 *)(param_1 + lVar29) = uVar9;
          if ((bVar36 & 4) != 0) goto LAB_1409bf481;
LAB_1409bf1aa:
          if (-1 < (char)bVar36) goto LAB_1409bf1b2;
LAB_1409bf490:
          uVar9 = extractps(auVar129,3);
          *(undefined8 *)(param_1 + lVar35) = uVar9;
          auVar114._0_4_ = fVar148 - fVar121 * (float)local_6f8;
          auVar114._4_4_ = fVar154 - fVar123 * local_6f8._4_4_;
          auVar114._8_4_ = fVar157 - fVar199 * fStack_6f0;
          auVar114._12_4_ = fVar160 - fVar201 * fStack_6ec;
        }
        if ((bVar36 & 1) != 0) {
          *(int *)(param_1 + 4 + lVar26) = auVar114._0_4_;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar114,1);
          *(undefined8 *)(param_1 + 4 + lVar29) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar114,2);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar114,3);
          *(undefined8 *)(param_1 + 4 + lVar35) = uVar9;
        }
        auVar49._0_4_ = local_328._0_4_ - (float)local_6f8 * fVar168;
        auVar49._4_4_ = local_328._4_4_ - local_6f8._4_4_ * fVar172;
        auVar49._8_4_ = local_328._8_4_ - fStack_6f0 * fVar176;
        auVar49._12_4_ = local_328._12_4_ - fStack_6ec * fVar146;
        if ((bVar36 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar26) = auVar49._0_4_;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar49,1);
          *(undefined8 *)(param_1 + 8 + lVar29) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar49,2);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar49,3);
          *(undefined8 *)(param_1 + 8 + lVar35) = uVar9;
        }
        if ((bVar36 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar26) = uVar187;
        }
        if ((bVar36 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar191;
        }
        if ((bVar36 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar32) = uVar194;
        }
        if ((char)bVar36 < '\0') {
          *(uint *)(param_1 + 0xc + lVar35) = uVar150;
        }
      }
      auVar50._4_4_ = -(uint)(0.0 < (float)local_6c8._4_4_);
      auVar50._0_4_ = -(uint)(0.0 < (float)local_6c8._0_4_);
      auVar50._8_4_ = -(uint)(0.0 < fStack_6c0);
      auVar50._12_4_ = -(uint)(0.0 < fStack_6bc);
      iVar37 = movmskps(iVar68,auVar50);
      if (iVar37 != 0) {
        bVar36 = (char)((char)iVar37 << 4) >> 4;
        auVar51._0_4_ = local_308._0_4_ - fVar196 * (float)local_6c8._0_4_;
        auVar51._4_4_ = local_308._4_4_ - fVar109 * (float)local_6c8._4_4_;
        auVar51._8_4_ = local_308._8_4_ - fVar108 * fStack_6c0;
        auVar51._12_4_ = local_308._12_4_ - fVar95 * fStack_6bc;
        if ((bVar36 & 1) == 0) {
          if ((bVar36 & 2) == 0) goto LAB_1409bf287;
LAB_1409bf5a9:
          uVar9 = extractps(auVar51,1);
          *(undefined8 *)(param_1 + lVar30) = uVar9;
          if ((bVar36 & 4) != 0) goto LAB_1409bf5b9;
LAB_1409bf290:
          if (-1 < (char)bVar36) goto LAB_1409bf298;
LAB_1409bf5c9:
          uVar9 = extractps(auVar51,3);
          *(undefined8 *)(param_1 + lVar38) = uVar9;
          auVar102._0_4_ = fVar202 - fVar107 * (float)local_6c8._0_4_;
          auVar102._4_4_ = fVar204 - fVar221 * (float)local_6c8._4_4_;
          auVar102._8_4_ = fVar206 - fVar224 * fStack_6c0;
          auVar102._12_4_ = fVar208 - fVar228 * fStack_6bc;
          if ((bVar36 & 1) != 0) goto LAB_1409bf5ea;
LAB_1409bf2a9:
          if ((bVar36 & 2) == 0) goto LAB_1409bf2ba;
LAB_1409bf601:
          uVar9 = extractps(auVar102,1);
          *(undefined8 *)(param_1 + 4 + lVar30) = uVar9;
          if ((bVar36 & 4) != 0) goto LAB_1409bf612;
LAB_1409bf2c3:
          if (-1 < (char)bVar36) goto LAB_1409bf2cb;
LAB_1409bf623:
          uVar9 = extractps(auVar102,3);
          *(undefined8 *)(param_1 + 4 + lVar38) = uVar9;
          auVar52._0_4_ = fVar178 - (float)local_6c8._0_4_ * fVar180;
          auVar52._4_4_ = fVar184 - (float)local_6c8._4_4_ * fVar164;
          auVar52._8_4_ = fVar188 - fStack_6c0 * fVar171;
          auVar52._12_4_ = fVar192 - fStack_6bc * fVar175;
        }
        else {
          *(float *)(param_1 + lVar20) = auVar51._0_4_;
          if ((bVar36 & 2) != 0) goto LAB_1409bf5a9;
LAB_1409bf287:
          if ((bVar36 & 4) == 0) goto LAB_1409bf290;
LAB_1409bf5b9:
          uVar9 = extractps(auVar51,2);
          *(undefined8 *)(param_1 + local_4c0) = uVar9;
          if ((char)bVar36 < '\0') goto LAB_1409bf5c9;
LAB_1409bf298:
          auVar102._0_4_ = fVar202 - fVar107 * (float)local_6c8._0_4_;
          auVar102._4_4_ = fVar204 - fVar221 * (float)local_6c8._4_4_;
          auVar102._8_4_ = fVar206 - fVar224 * fStack_6c0;
          auVar102._12_4_ = fVar208 - fVar228 * fStack_6bc;
          if ((bVar36 & 1) == 0) goto LAB_1409bf2a9;
LAB_1409bf5ea:
          *(int *)(param_1 + 4 + lVar20) = auVar102._0_4_;
          if ((bVar36 & 2) != 0) goto LAB_1409bf601;
LAB_1409bf2ba:
          if ((bVar36 & 4) == 0) goto LAB_1409bf2c3;
LAB_1409bf612:
          uVar9 = extractps(auVar102,2);
          *(undefined8 *)(param_1 + 4 + local_4c0) = uVar9;
          if ((char)bVar36 < '\0') goto LAB_1409bf623;
LAB_1409bf2cb:
          auVar52._0_4_ = fVar178 - (float)local_6c8._0_4_ * fVar180;
          auVar52._4_4_ = fVar184 - (float)local_6c8._4_4_ * fVar164;
          auVar52._8_4_ = fVar188 - fStack_6c0 * fVar171;
          auVar52._12_4_ = fVar192 - fStack_6bc * fVar175;
        }
        if ((bVar36 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar20) = auVar52._0_4_;
        }
        if ((bVar36 & 2) != 0) {
          uVar9 = extractps(auVar52,1);
          *(undefined8 *)(param_1 + 8 + lVar30) = uVar9;
        }
        if ((bVar36 & 4) != 0) {
          uVar9 = extractps(auVar52,2);
          *(undefined8 *)(param_1 + 8 + local_4c0) = uVar9;
        }
        if ((char)bVar36 < '\0') {
          uVar9 = extractps(auVar52,3);
          *(undefined8 *)(param_1 + 8 + lVar38) = uVar9;
        }
        if ((bVar36 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar20) = uVar156;
        }
        if ((bVar36 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar30) = uVar159;
        }
        if ((bVar36 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4c0) = uVar162;
        }
        if ((char)bVar36 < '\0') {
          *(uint *)(param_1 + 0xc + lVar38) = uVar8;
        }
      }
      lVar43 = lVar43 + 0x30;
      pfVar34 = pfVar34 + 0x10;
      uVar25 = local_4d8 + 4;
      local_508 = auVar217;
    } while ((int)uVar25 < (int)(uVar165 & 0xfffffffc));
  }
  if ((int)param_12 <= (int)uVar25) {
    return;
  }
  uVar165 = -(uint)((int)(uVar25 | (uint)__xmm_00000003000000020000000100000000) < (int)param_12);
  uVar169 = -(uint)((int)(uVar25 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_12);
  uVar173 = -(uint)((int)(uVar25 | _UNK_150631e08) < (int)param_12);
  uVar177 = -(uint)((int)(uVar25 | _UNK_150631e0c) < (int)param_12);
  uVar21 = (ulonglong)uVar25;
  pauVar3 = (undefined1 (*) [16])(param_2 + uVar21 * 0xc);
  auVar15._4_4_ = uVar169;
  auVar15._0_4_ = uVar165;
  auVar15._8_4_ = uVar173;
  auVar15._12_4_ = uVar177;
  iVar37 = movmskps((int)param_2,auVar15);
  bVar36 = (char)((char)iVar37 << 4) >> 4;
  if (iVar37 == 0xf) {
    auVar215 = *pauVar3;
    auVar197 = pauVar3[1];
    uVar67 = auVar197._0_4_;
    auVar153._4_4_ = uVar67;
    auVar153._0_4_ = uVar67;
    auVar153._8_4_ = uVar67;
    auVar153._12_4_ = uVar67;
    uVar67 = auVar215._12_4_;
    auVar182._0_8_ = CONCAT44(uVar67,auVar215._0_4_);
    auVar182._8_4_ = auVar215._4_4_;
    auVar182._12_4_ = uVar67;
    auVar111 = pblendw(auVar153,auVar182,0x3f);
    auVar139._0_8_ = auVar215._8_8_;
    auVar139._8_4_ = auVar215._8_4_;
    auVar139._12_4_ = uVar67;
    auVar215 = pblendw(auVar139,auVar197,0xc);
    auVar73._0_8_ = CONCAT44(*(undefined4 *)(pauVar3[2] + 4),auVar197._8_4_);
    auVar73._8_4_ = auVar197._12_4_;
    auVar73._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar181._8_8_ = auVar73._0_8_;
    auVar181._0_8_ = auVar182._0_8_;
    auVar152._8_8_ = auVar73._8_8_;
    auVar152._0_8_ = auVar111._8_8_;
    auVar138._0_8_ = auVar215._0_8_;
    auVar138._8_4_ = *(undefined4 *)pauVar3[2];
    auVar138._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar53._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar165;
    auVar53._4_4_ = _UNK_150b50da4 & uVar169;
    auVar53._8_4_ = _UNK_150b50da8 & uVar173;
    auVar53._12_4_ = _UNK_150b50dac & uVar177;
    lVar43 = extractps(auVar53,1);
    lVar20 = extractps(auVar53,2);
    lVar26 = extractps(auVar53,3);
    auVar181._4_4_ = *(undefined4 *)(*pauVar3 + lVar43);
    auVar181._0_4_ = *(undefined4 *)*pauVar3;
    auVar181._12_4_ = *(undefined4 *)(*pauVar3 + lVar26);
    auVar181._8_4_ = *(undefined4 *)(*pauVar3 + lVar20);
    auVar152._4_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50db4 & uVar169));
    auVar152._0_4_ = *(undefined4 *)(*pauVar3 + (___xmm_000000280000001c0000001000000004 & uVar165))
    ;
    auVar152._12_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50dbc & uVar177));
    auVar152._8_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50db8 & uVar173));
    auVar138._4_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50dc4 & uVar169));
    auVar138._0_4_ = *(undefined4 *)(*pauVar3 + (___xmm_0000002c000000200000001400000008 & uVar165))
    ;
    auVar138._12_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50dcc & uVar177));
    auVar138._8_4_ = *(undefined4 *)(*pauVar3 + (_UNK_150b50dc8 & uVar173));
  }
  uVar25 = auVar181._0_4_ << 4;
  uVar187 = auVar181._4_4_ << 4;
  uVar191 = auVar181._8_4_ << 4;
  uVar194 = auVar181._12_4_ << 4;
  pfVar34 = (float *)((int)(uVar165 & uVar25) + param_1);
  if ((bVar36 & 1) != 0) {
    local_588 = *pfVar34;
  }
  lVar43 = (longlong)(int)(uVar169 & uVar187);
  if ((bVar36 & 2) != 0) {
    fStack_584 = *(float *)(param_1 + lVar43);
  }
  if ((bVar36 & 4) != 0) {
    fStack_580 = *(float *)(param_1 + (int)(uVar173 & uVar191));
  }
  uVar22 = (ulonglong)(___xmm_00000004000000040000000400000004 & uVar165);
  if ((char)bVar36 < '\0') {
    fStack_57c = *(float *)(param_1 + (int)(uVar177 & uVar194));
  }
  if ((bVar36 & 1) != 0) {
    local_578 = *(float *)(uVar22 + (longlong)pfVar34);
  }
  if ((bVar36 & 2) != 0) {
    local_6f8 = (ulonglong)(_UNK_150b50dd4 & uVar169);
    fStack_574 = *(float *)(local_6f8 + lVar43 + param_1);
  }
  local_6f8 = (ulonglong)(_UNK_150b50dd4 & uVar169);
  uVar31 = (ulonglong)(_UNK_150b50dd8 & uVar173);
  lVar20 = (int)(uVar173 & uVar191) + param_1;
  uVar23 = (ulonglong)(_UNK_150b50ddc & uVar177);
  if ((bVar36 & 4) != 0) {
    fStack_570 = *(float *)(uVar31 + lVar20);
  }
  uVar24 = (ulonglong)(___xmm_00000008000000080000000800000008 & uVar165);
  lVar26 = (int)(uVar177 & uVar194) + param_1;
  if ((char)bVar36 < '\0') {
    fStack_56c = *(float *)(uVar23 + lVar26);
  }
  if ((bVar36 & 1) != 0) {
    local_568 = *(float *)(uVar24 + (longlong)pfVar34);
  }
  if ((bVar36 & 2) != 0) {
    local_6b8 = (ulonglong)(_UNK_150b50de4 & uVar169);
    fStack_564 = *(float *)(local_6b8 + lVar43 + param_1);
  }
  local_6b8 = (ulonglong)(_UNK_150b50de4 & uVar169);
  uVar156 = auVar152._4_4_ << 4;
  uVar150 = auVar152._0_4_ << 4;
  uVar162 = auVar152._12_4_ << 4;
  uVar159 = auVar152._8_4_ << 4;
  uVar40 = (ulonglong)(_UNK_150b50de8 & uVar173);
  uVar42 = (ulonglong)(_UNK_150b50dec & uVar177);
  if ((bVar36 & 4) != 0) {
    fStack_560 = *(float *)(uVar40 + lVar20);
  }
  if ((char)bVar36 < '\0') {
    fStack_55c = *(float *)(uVar42 + lVar26);
  }
  if ((bVar36 & 1) != 0) {
    local_5b8 = *(float *)(param_1 + (int)(uVar165 & uVar150));
  }
  if ((bVar36 & 2) != 0) {
    fStack_5b4 = *(float *)(param_1 + (int)(uVar169 & uVar156));
  }
  if ((bVar36 & 4) != 0) {
    fStack_5b0 = *(float *)(param_1 + (int)(uVar173 & uVar159));
  }
  if ((char)bVar36 < '\0') {
    fStack_5ac = *(float *)(param_1 + (int)(uVar177 & uVar162));
  }
  uVar9 = (int)(uVar165 & uVar150) + param_1;
  if ((bVar36 & 1) != 0) {
    local_5a8 = *(float *)(uVar22 + uVar9);
  }
  uVar18 = (int)(uVar169 & uVar156) + param_1;
  if ((bVar36 & 2) != 0) {
    fStack_5a4 = *(float *)(local_6f8 + uVar18);
  }
  uVar17 = (int)(uVar173 & uVar159) + param_1;
  if ((bVar36 & 4) != 0) {
    fStack_5a0 = *(float *)(uVar31 + uVar17);
  }
  uVar16 = (int)(uVar177 & uVar162) + param_1;
  if ((char)bVar36 < '\0') {
    fStack_59c = *(float *)(uVar23 + uVar16);
  }
  if ((bVar36 & 1) != 0) {
    local_598 = *(float *)(uVar24 + uVar9);
  }
  if ((bVar36 & 2) != 0) {
    fStack_594 = *(float *)(local_6b8 + uVar18);
  }
  uVar8 = uVar177 & auVar138._12_4_ << 4;
  if ((bVar36 & 4) != 0) {
    fStack_590 = *(float *)(uVar40 + uVar17);
  }
  if ((char)bVar36 < '\0') {
    fStack_58c = *(float *)(uVar42 + uVar16);
  }
  iVar68 = auVar138._4_4_ << 4;
  iVar37 = auVar138._0_4_ << 4;
  iVar147 = auVar138._12_4_ << 4;
  iVar124 = auVar138._8_4_ << 4;
  lVar27 = (longlong)(int)(uVar165 & auVar138._0_4_ << 4);
  if ((bVar36 & 1) != 0) {
    local_5e8 = *(float *)(param_1 + lVar27);
  }
  lVar29 = (longlong)(int)(uVar169 & auVar138._4_4_ << 4);
  if ((bVar36 & 2) != 0) {
    fStack_5e4 = *(float *)(param_1 + lVar29);
  }
  lVar30 = (longlong)(int)(uVar173 & auVar138._8_4_ << 4);
  if ((bVar36 & 4) != 0) {
    fStack_5e0 = *(float *)(param_1 + lVar30);
  }
  if ((char)bVar36 < '\0') {
    fStack_5dc = *(float *)(param_1 + (int)uVar8);
  }
  if ((bVar36 & 1) != 0) {
    local_5d8 = *(float *)(uVar22 + lVar27 + param_1);
  }
  if ((bVar36 & 2) != 0) {
    fStack_5d4 = *(float *)(local_6f8 + lVar29 + param_1);
  }
  lVar30 = lVar30 + param_1;
  if ((bVar36 & 4) != 0) {
    fStack_5d0 = *(float *)(uVar31 + lVar30);
  }
  if ((char)bVar36 < '\0') {
    fStack_5cc = *(float *)(uVar23 + (int)uVar8 + param_1);
  }
  if ((bVar36 & 1) != 0) {
    local_5c8 = *(float *)(uVar24 + lVar27 + param_1);
  }
  uVar23 = (ulonglong)(_UNK_150b50df4 & uVar169);
  uVar31 = (ulonglong)(___xmm_0000000c0000000c0000000c0000000c & uVar165);
  lVar32 = (int)uVar8 + param_1;
  uVar22 = (ulonglong)(_UNK_150b50df8 & uVar173);
  if ((bVar36 & 2) != 0) {
    fStack_5c4 = *(float *)(local_6b8 + lVar29 + param_1);
  }
  uVar24 = (ulonglong)(_UNK_150b50dfc & uVar177);
  auVar111 = insertps(ZEXT416(*(uint *)(uVar31 + (longlong)pfVar34)),
                      *(undefined4 *)(uVar23 + lVar43 + param_1),0x10);
  auVar197 = insertps(ZEXT416(*(uint *)(uVar31 + uVar9)),*(undefined4 *)(uVar23 + uVar18),0x10);
  auVar215 = insertps(ZEXT416(*(uint *)(uVar31 + lVar27 + param_1)),
                      *(undefined4 *)(uVar23 + lVar29 + param_1),0x10);
  if ((bVar36 & 4) != 0) {
    fStack_5c0 = *(float *)(uVar40 + lVar30);
  }
  auVar111 = insertps(auVar111,*(undefined4 *)(uVar22 + lVar20),0x20);
  auVar197 = insertps(auVar197,*(undefined4 *)(uVar22 + uVar17),0x20);
  auVar215 = insertps(auVar215,*(undefined4 *)(uVar22 + lVar30),0x20);
  bVar28 = ~bVar36;
  if (((char)bVar36 < '\0') && (fStack_5bc = *(float *)(uVar42 + lVar32), (bVar28 & 0xf) == 0)) {
    lVar43 = uVar21 * 0x10;
    puVar4 = (undefined4 *)(param_4 + lVar43);
    puVar5 = (undefined4 *)(param_4 + 0x10 + lVar43);
    auVar44 = *(undefined1 (*) [16])(param_4 + 0x20 + lVar43);
    puVar6 = (undefined4 *)(param_4 + 0x30 + lVar43);
    auVar131._0_8_ = CONCAT44(puVar5[2],puVar4[2]);
    auVar131._8_4_ = puVar4[3];
    auVar131._12_4_ = puVar5[3];
    auVar79._0_8_ = auVar44._0_8_;
    auVar79._8_4_ = auVar44._4_4_;
    auVar79._12_4_ = puVar6[1];
    local_118._8_8_ = auVar79._8_8_;
    local_128._12_4_ = *puVar6;
    local_128._8_4_ = auVar44._0_4_;
    auVar120._0_8_ = CONCAT44(puVar6[2],auVar44._8_4_);
    auVar120._8_4_ = auVar44._12_4_;
    auVar120._12_4_ = puVar6[3];
    local_128._4_4_ = *puVar5;
    local_128._0_4_ = *puVar4;
    local_118._4_4_ = puVar5[1];
    local_118._0_4_ = puVar4[1];
    local_108._8_8_ = auVar120._0_8_;
    local_108._0_8_ = auVar131._0_8_;
    local_f8._8_8_ = auVar120._8_8_;
    local_f8._0_8_ = auVar131._8_8_;
  }
  else {
    auVar54._0_4_ = ___xmm_00000030000000200000001000000000 & uVar165;
    auVar54._4_4_ = _UNK_150b511c4 & uVar169;
    auVar54._8_4_ = _UNK_150b511c8 & uVar173;
    auVar54._12_4_ = _UNK_150b511cc & uVar177;
    lVar20 = extractps(auVar54,1);
    lVar27 = extractps(auVar54,2);
    lVar29 = extractps(auVar54,3);
    lVar43 = param_4 + uVar21 * 0x10;
    auVar44 = insertps(ZEXT416(*(uint *)(param_4 + uVar21 * 0x10)),*(undefined4 *)(lVar20 + lVar43),
                       0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(lVar27 + lVar43),0x20);
    local_128 = insertps(auVar44,*(undefined4 *)(lVar29 + lVar43),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_00000034000000240000001400000004 & uVar165) +
                                        lVar43)),
                       *(undefined4 *)((ulonglong)(_UNK_150b511d4 & uVar169) + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511d8 & uVar173) + lVar43),0x20)
    ;
    local_118 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511dc & uVar177) + lVar43),
                         0x30);
    auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_00000038000000280000001800000008 & uVar165) +
                                        lVar43)),
                       *(undefined4 *)((ulonglong)(_UNK_150b511e4 & uVar169) + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511e8 & uVar173) + lVar43),0x20)
    ;
    local_108 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511ec & uVar177) + lVar43),
                         0x30);
    auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000003c0000002c0000001c0000000c & uVar165) +
                                        lVar43)),
                       *(undefined4 *)((ulonglong)(_UNK_150b511f4 & uVar169) + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511f8 & uVar173) + lVar43),0x20)
    ;
    local_f8 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b511fc & uVar177) + lVar43),0x30
                       );
  }
  auVar111 = insertps(auVar111,*(undefined4 *)(uVar24 + lVar26),0x30);
  auVar197 = insertps(auVar197,*(undefined4 *)(uVar24 + uVar16),0x30);
  auVar215 = insertps(auVar215,*(undefined4 *)(uVar24 + lVar32),0x30);
  pauVar3 = (undefined1 (*) [16])(param_3 + uVar21 * 0xc);
  if ((bVar28 & 0xf) == 0) {
    auVar44 = *pauVar3;
    auVar70 = pauVar3[1];
    local_158._0_4_ = auVar44._0_4_;
    auVar217 = insertps(auVar70,auVar44,0x8c);
    local_158._4_4_ = auVar44._12_4_;
    local_158._8_4_ = auVar70._8_4_;
    local_158._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
    local_148._4_4_ = auVar70._0_4_;
    local_148._0_4_ = auVar44._4_4_;
    local_148._8_4_ = auVar70._12_4_;
    local_148._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    local_138._0_8_ = auVar217._0_8_;
    local_138._8_4_ = *(undefined4 *)pauVar3[2];
    local_138._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar55._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar165;
    auVar55._4_4_ = _UNK_150b50da4 & uVar169;
    auVar55._8_4_ = _UNK_150b50da8 & uVar173;
    auVar55._12_4_ = _UNK_150b50dac & uVar177;
    lVar43 = extractps(auVar55,1);
    lVar20 = extractps(auVar55,2);
    lVar26 = extractps(auVar55,3);
    auVar44 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + lVar20),0x20);
    local_158 = insertps(auVar44,*(undefined4 *)(*pauVar3 + lVar26),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_000000280000001c0000001000000004 & uVar165))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50db4 & uVar169)),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50db8 & uVar173)),0x20);
    local_148 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dbc & uVar177)),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_0000002c000000200000001400000008 & uVar165))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50dc4 & uVar169)),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dc8 & uVar173)),0x20);
    local_138 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dcc & uVar177)),0x30);
  }
  local_268 = param_11;
  fStack_264 = param_11;
  fStack_260 = param_11;
  fStack_25c = param_11;
  local_258 = param_10;
  fStack_254 = param_10;
  fStack_250 = param_10;
  fStack_24c = param_10;
  local_528 = uVar165;
  uStack_524 = uVar169;
  uStack_520 = uVar173;
  uStack_51c = uVar177;
  local_278 = uVar165;
  uStack_274 = uVar169;
  uStack_270 = uVar173;
  uStack_26c = uVar177;
  FUN_1409aeab0(&local_588,&local_5b8,&local_5e8,local_128,local_158,&local_258,&local_268,
                &local_228,&local_238,&local_248,&local_488,&local_4b8,&local_188,&local_1b8,
                &local_1e8,&local_218,&local_278);
  pauVar3 = (undefined1 (*) [16])(param_6 + uVar21 * 0xc);
  if ((bVar28 & 0xf) == 0) {
    auVar44 = *pauVar3;
    auVar70 = pauVar3[1];
    auVar217 = insertps(auVar70,auVar44,0x8c);
    local_6c8._4_4_ = auVar44._12_4_;
    local_6c8._0_4_ = auVar44._0_4_;
    fStack_6c0 = (float)auVar70._8_4_;
    fStack_6bc = (float)*(undefined4 *)(pauVar3[2] + 4);
    local_658._4_4_ = auVar70._0_4_;
    local_658._0_4_ = auVar44._4_4_;
    fStack_650 = (float)auVar70._12_4_;
    fStack_64c = (float)*(undefined4 *)(pauVar3[2] + 8);
    local_558 = auVar217._0_8_;
    fStack_550 = (float)*(undefined4 *)pauVar3[2];
    fStack_54c = (float)*(undefined4 *)(pauVar3[2] + 0xc);
    auVar44 = *(undefined1 (*) [16])(param_5 + uVar21 * 0xc);
    auVar70 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar21 * 0xc);
    puVar4 = (undefined4 *)(param_5 + 0x20 + uVar21 * 0xc);
    auVar57._0_4_ = auVar44._0_4_;
    auVar217 = insertps(auVar70,auVar44,0x8c);
    auVar57._4_4_ = auVar44._12_4_;
    auVar57._8_4_ = auVar70._8_4_;
    auVar57._12_4_ = puVar4[1];
    auVar74._4_4_ = auVar70._0_4_;
    auVar74._0_4_ = auVar44._4_4_;
    auVar74._8_4_ = auVar70._12_4_;
    auVar74._12_4_ = puVar4[2];
    auVar103._0_8_ = auVar217._0_8_;
    auVar103._8_4_ = *puVar4;
    auVar103._12_4_ = puVar4[3];
  }
  else {
    auVar56._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar165;
    auVar56._4_4_ = _UNK_150b50da4 & uVar169;
    auVar56._8_4_ = _UNK_150b50da8 & uVar173;
    auVar56._12_4_ = _UNK_150b50dac & uVar177;
    lVar26 = extractps(auVar56,1);
    lVar20 = extractps(auVar56,2);
    lVar27 = extractps(auVar56,3);
    auVar44 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar26),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + lVar20),0x20);
    _local_6c8 = insertps(auVar44,*(undefined4 *)(*pauVar3 + lVar27),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_000000280000001c0000001000000004 & uVar165))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50db4 & uVar169)),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50db8 & uVar173)),0x20);
    _local_658 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dbc & uVar177)),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_0000002c000000200000001400000008 & uVar165))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50dc4 & uVar169)),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dc8 & uVar173)),0x20);
    _local_558 = insertps(auVar44,*(undefined4 *)(*pauVar3 + (_UNK_150b50dcc & uVar177)),0x30);
    lVar43 = param_5 + uVar21 * 0xc;
    auVar44 = insertps(ZEXT416(*(uint *)(param_5 + uVar21 * 0xc)),*(undefined4 *)(lVar26 + lVar43),
                       0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)(lVar20 + lVar43),0x20);
    auVar57 = insertps(auVar44,*(undefined4 *)(lVar27 + lVar43),0x30);
    auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & uVar165) +
                                        lVar43)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar169) + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar173) + lVar43),0x20)
    ;
    auVar74 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar177) + lVar43),0x30)
    ;
    auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000002c000000200000001400000008 & uVar165) +
                                        lVar43)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & uVar169) + lVar43),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b50dc8 & uVar173) + lVar43),0x20)
    ;
    auVar103 = insertps(auVar44,*(undefined4 *)((ulonglong)(_UNK_150b50dcc & uVar177) + lVar43),0x30
                       );
  }
  fVar168 = *param_9;
  fVar172 = param_9[1];
  fVar176 = param_9[2];
  fVar109 = fVar168 * auVar57._0_4_;
  fVar180 = fVar168 * auVar57._4_4_;
  fVar108 = fVar168 * auVar57._8_4_;
  fVar168 = fVar168 * auVar57._12_4_;
  fVar164 = fVar172 * auVar74._0_4_;
  fVar186 = fVar172 * auVar74._4_4_;
  fVar95 = fVar172 * auVar74._8_4_;
  fVar172 = fVar172 * auVar74._12_4_;
  fVar146 = fVar176 * auVar103._0_4_;
  fVar196 = fVar176 * auVar103._4_4_;
  fVar175 = fVar176 * auVar103._8_4_;
  fVar176 = fVar176 * auVar103._12_4_;
  auVar115._0_4_ = param_7 * fVar109 * param_7;
  auVar115._4_4_ = param_7 * fVar180 * param_7;
  auVar115._8_4_ = param_7 * fVar108 * param_7;
  auVar115._12_4_ = param_7 * fVar168 * param_7;
  auVar44 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar115);
  local_6f8._0_4_ = auVar111._0_4_;
  local_6f8._4_4_ = auVar111._4_4_;
  fStack_6f0 = auVar111._8_4_;
  fStack_6ec = auVar111._12_4_;
  local_6b8._0_4_ = auVar197._0_4_;
  local_6b8._4_4_ = auVar197._4_4_;
  fStack_6b0 = auVar197._8_4_;
  fStack_6ac = auVar197._12_4_;
  local_6e8 = auVar215._0_4_;
  fStack_6e4 = auVar215._4_4_;
  fStack_6e0 = auVar215._8_4_;
  fStack_6dc = auVar215._12_4_;
  auVar116._0_4_ =
       (local_498 * local_498 + local_4a8 * local_4a8 + local_4b8 * local_4b8) * local_6e8 +
       (local_468 * local_468 + local_478 * local_478 + local_488 * local_488) * (float)local_6b8 +
       ((local_468 + local_498) * (local_468 + local_498) +
       (local_478 + local_4a8) * (local_478 + local_4a8) +
       (local_488 + local_4b8) * (local_488 + local_4b8)) * (float)local_6f8 + auVar44._0_4_;
  auVar116._4_4_ =
       (fStack_494 * fStack_494 + fStack_4a4 * fStack_4a4 + fStack_4b4 * fStack_4b4) * fStack_6e4 +
       (fStack_464 * fStack_464 + fStack_474 * fStack_474 + fStack_484 * fStack_484) *
       local_6b8._4_4_ +
       ((fStack_464 + fStack_494) * (fStack_464 + fStack_494) +
       (fStack_474 + fStack_4a4) * (fStack_474 + fStack_4a4) +
       (fStack_484 + fStack_4b4) * (fStack_484 + fStack_4b4)) * local_6f8._4_4_ + auVar44._4_4_;
  auVar116._8_4_ =
       (fStack_490 * fStack_490 + fStack_4a0 * fStack_4a0 + fStack_4b0 * fStack_4b0) * fStack_6e0 +
       (fStack_460 * fStack_460 + fStack_470 * fStack_470 + fStack_480 * fStack_480) * fStack_6b0 +
       ((fStack_460 + fStack_490) * (fStack_460 + fStack_490) +
       (fStack_470 + fStack_4a0) * (fStack_470 + fStack_4a0) +
       (fStack_480 + fStack_4b0) * (fStack_480 + fStack_4b0)) * fStack_6f0 + auVar44._8_4_;
  auVar116._12_4_ =
       (fStack_48c * fStack_48c + fStack_49c * fStack_49c + fStack_4ac * fStack_4ac) * fStack_6dc +
       (fStack_45c * fStack_45c + fStack_46c * fStack_46c + fStack_47c * fStack_47c) * fStack_6ac +
       ((fStack_45c + fStack_48c) * (fStack_45c + fStack_48c) +
       (fStack_46c + fStack_49c) * (fStack_46c + fStack_49c) +
       (fStack_47c + fStack_4ac) * (fStack_47c + fStack_4ac)) * fStack_6ec + auVar44._12_4_;
  auVar58._0_4_ = local_228 - auVar44._0_4_ * (float)local_6c8._0_4_;
  auVar58._4_4_ = fStack_224 - auVar44._4_4_ * (float)local_6c8._4_4_;
  auVar58._8_4_ = fStack_220 - auVar44._8_4_ * fStack_6c0;
  auVar58._12_4_ = fStack_21c - auVar44._12_4_ * fStack_6bc;
  auVar44 = divps(auVar58,auVar116);
  fVar109 = (float)(-(uint)(param_8 <= fVar109) & auVar44._0_4_);
  fVar180 = (float)(-(uint)(param_8 <= fVar180) & auVar44._4_4_);
  fVar108 = (float)(-(uint)(param_8 <= fVar108) & auVar44._8_4_);
  fVar171 = (float)(-(uint)(param_8 <= fVar168) & auVar44._12_4_);
  auVar59._0_4_ = param_7 * fVar164 * param_7;
  auVar59._4_4_ = param_7 * fVar186 * param_7;
  auVar59._8_4_ = param_7 * fVar95 * param_7;
  auVar59._12_4_ = param_7 * fVar172 * param_7;
  auVar44 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar59);
  auVar223._0_4_ = local_238 - auVar44._0_4_ * (float)local_658._0_4_;
  auVar223._4_4_ = fStack_234 - auVar44._4_4_ * (float)local_658._4_4_;
  auVar223._8_4_ = fStack_230 - auVar44._8_4_ * fStack_650;
  auVar223._12_4_ = fStack_22c - auVar44._12_4_ * fStack_64c;
  auVar10._4_4_ =
       (fStack_194 * fStack_194 + fStack_1a4 * fStack_1a4 + fStack_1b4 * fStack_1b4) * fStack_6e4 +
       (fStack_164 * fStack_164 + fStack_174 * fStack_174 + fStack_184 * fStack_184) *
       local_6b8._4_4_ +
       ((fStack_164 + fStack_194) * (fStack_164 + fStack_194) +
       (fStack_174 + fStack_1a4) * (fStack_174 + fStack_1a4) +
       (fStack_184 + fStack_1b4) * (fStack_184 + fStack_1b4)) * local_6f8._4_4_ + auVar44._4_4_;
  auVar10._0_4_ =
       (local_198 * local_198 + local_1a8 * local_1a8 + local_1b8 * local_1b8) * local_6e8 +
       (local_168 * local_168 + local_178 * local_178 + local_188 * local_188) * (float)local_6b8 +
       ((local_168 + local_198) * (local_168 + local_198) +
       (local_178 + local_1a8) * (local_178 + local_1a8) +
       (local_188 + local_1b8) * (local_188 + local_1b8)) * (float)local_6f8 + auVar44._0_4_;
  auVar10._8_4_ =
       (fStack_190 * fStack_190 + fStack_1a0 * fStack_1a0 + fStack_1b0 * fStack_1b0) * fStack_6e0 +
       (fStack_160 * fStack_160 + fStack_170 * fStack_170 + fStack_180 * fStack_180) * fStack_6b0 +
       ((fStack_160 + fStack_190) * (fStack_160 + fStack_190) +
       (fStack_170 + fStack_1a0) * (fStack_170 + fStack_1a0) +
       (fStack_180 + fStack_1b0) * (fStack_180 + fStack_1b0)) * fStack_6f0 + auVar44._8_4_;
  auVar10._12_4_ =
       (fStack_18c * fStack_18c + fStack_19c * fStack_19c + fStack_1ac * fStack_1ac) * fStack_6dc +
       (fStack_15c * fStack_15c + fStack_16c * fStack_16c + fStack_17c * fStack_17c) * fStack_6ac +
       ((fStack_15c + fStack_18c) * (fStack_15c + fStack_18c) +
       (fStack_16c + fStack_19c) * (fStack_16c + fStack_19c) +
       (fStack_17c + fStack_1ac) * (fStack_17c + fStack_1ac)) * fStack_6ec + auVar44._12_4_;
  auVar44 = divps(auVar223,auVar10);
  fVar164 = (float)(-(uint)(param_8 <= fVar164) & auVar44._0_4_);
  fVar186 = (float)(-(uint)(param_8 <= fVar186) & auVar44._4_4_);
  fVar95 = (float)(-(uint)(param_8 <= fVar95) & auVar44._8_4_);
  fVar167 = (float)(-(uint)(param_8 <= fVar172) & auVar44._12_4_);
  auVar117._0_4_ = param_7 * fVar146 * param_7;
  auVar117._4_4_ = param_7 * fVar196 * param_7;
  auVar117._8_4_ = param_7 * fVar175 * param_7;
  auVar117._12_4_ = param_7 * fVar176 * param_7;
  auVar44 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar117);
  auVar118._0_4_ =
       (local_1f8 * local_1f8 + local_208 * local_208 + local_218 * local_218) * local_6e8 +
       (local_1c8 * local_1c8 + local_1d8 * local_1d8 + local_1e8 * local_1e8) * (float)local_6b8 +
       ((local_1c8 + local_1f8) * (local_1c8 + local_1f8) +
       (local_1d8 + local_208) * (local_1d8 + local_208) +
       (local_1e8 + local_218) * (local_1e8 + local_218)) * (float)local_6f8 + auVar44._0_4_;
  auVar118._4_4_ =
       (fStack_1f4 * fStack_1f4 + fStack_204 * fStack_204 + fStack_214 * fStack_214) * fStack_6e4 +
       (fStack_1c4 * fStack_1c4 + fStack_1d4 * fStack_1d4 + fStack_1e4 * fStack_1e4) *
       local_6b8._4_4_ +
       ((fStack_1c4 + fStack_1f4) * (fStack_1c4 + fStack_1f4) +
       (fStack_1d4 + fStack_204) * (fStack_1d4 + fStack_204) +
       (fStack_1e4 + fStack_214) * (fStack_1e4 + fStack_214)) * local_6f8._4_4_ + auVar44._4_4_;
  auVar118._8_4_ =
       (fStack_1f0 * fStack_1f0 + fStack_200 * fStack_200 + fStack_210 * fStack_210) * fStack_6e0 +
       (fStack_1c0 * fStack_1c0 + fStack_1d0 * fStack_1d0 + fStack_1e0 * fStack_1e0) * fStack_6b0 +
       ((fStack_1c0 + fStack_1f0) * (fStack_1c0 + fStack_1f0) +
       (fStack_1d0 + fStack_200) * (fStack_1d0 + fStack_200) +
       (fStack_1e0 + fStack_210) * (fStack_1e0 + fStack_210)) * fStack_6f0 + auVar44._8_4_;
  auVar118._12_4_ =
       (fStack_1ec * fStack_1ec + fStack_1fc * fStack_1fc + fStack_20c * fStack_20c) * fStack_6dc +
       (fStack_1bc * fStack_1bc + fStack_1cc * fStack_1cc + fStack_1dc * fStack_1dc) * fStack_6ac +
       ((fStack_1bc + fStack_1ec) * (fStack_1bc + fStack_1ec) +
       (fStack_1cc + fStack_1fc) * (fStack_1cc + fStack_1fc) +
       (fStack_1dc + fStack_20c) * (fStack_1dc + fStack_20c)) * fStack_6ec + auVar44._12_4_;
  auVar130._0_4_ = local_248 - auVar44._0_4_ * (float)local_558._0_4_;
  auVar130._4_4_ = fStack_244 - auVar44._4_4_ * (float)local_558._4_4_;
  auVar130._8_4_ = fStack_240 - auVar44._8_4_ * fStack_550;
  auVar130._12_4_ = fStack_23c - auVar44._12_4_ * fStack_54c;
  auVar44 = divps(auVar130,auVar118);
  fVar146 = (float)(-(uint)(param_8 <= fVar146) & auVar44._0_4_);
  fVar196 = (float)(-(uint)(param_8 <= fVar196) & auVar44._4_4_);
  fVar175 = (float)(-(uint)(param_8 <= fVar175) & auVar44._8_4_);
  fVar176 = (float)(-(uint)(param_8 <= fVar176) & auVar44._12_4_);
  fVar168 = (float)local_6c8._0_4_ + fVar109;
  fVar172 = (float)local_6c8._4_4_ + fVar180;
  fStack_6c0 = fStack_6c0 + fVar108;
  fStack_6bc = fStack_6bc + fVar171;
  auVar183._0_4_ = (float)local_658._0_4_ + fVar164;
  auVar183._4_4_ = (float)local_658._4_4_ + fVar186;
  auVar183._8_4_ = fStack_650 + fVar95;
  auVar183._12_4_ = fStack_64c + fVar167;
  auVar75._0_4_ = (float)local_558._0_4_ + fVar146;
  auVar75._4_4_ = (float)local_558._4_4_ + fVar196;
  auVar75._8_4_ = fStack_550 + fVar175;
  auVar75._12_4_ = fStack_54c + fVar176;
  if ((bVar28 & 0xf) == 0) {
    auVar104._4_4_ = fVar172;
    auVar104._0_4_ = fVar168;
    auVar104._8_4_ = fStack_6c0;
    auVar104._12_4_ = fStack_6bc;
    auVar44 = insertps(auVar104,auVar183,0x30);
    auVar119._4_4_ = auVar183._8_4_;
    auVar119._0_4_ = auVar183._4_4_;
    auVar119._8_4_ = auVar75._0_4_;
    auVar119._12_4_ = auVar75._4_4_;
    auVar44 = insertps(auVar44,auVar75,0x20);
    *(int *)*pauVar3 = auVar44._0_4_;
    *(int *)(*pauVar3 + 4) = auVar44._12_4_;
    *(int *)(*pauVar3 + 8) = auVar44._8_4_;
    *(int *)(*pauVar3 + 0xc) = auVar44._4_4_;
    auVar14._4_4_ = fVar172;
    auVar14._0_4_ = fVar168;
    auVar14._8_4_ = fStack_6c0;
    auVar14._12_4_ = fStack_6bc;
    auVar44 = blendps(auVar119,auVar14,4);
    *(int *)pauVar3[1] = auVar44._0_4_;
    *(int *)(pauVar3[1] + 4) = auVar44._12_4_;
    *(int *)(pauVar3[1] + 8) = auVar44._8_4_;
    *(int *)(pauVar3[1] + 0xc) = auVar44._4_4_;
    *(float *)pauVar3[2] = auVar75._8_4_;
    *(float *)(pauVar3[2] + 4) = fStack_6bc;
    *(float *)(pauVar3[2] + 8) = auVar183._12_4_;
    *(float *)(pauVar3[2] + 0xc) = auVar75._12_4_;
  }
  else {
    if ((bVar36 & 1) != 0) {
      *(float *)*pauVar3 = fVar168;
    }
    if ((bVar36 & 2) != 0) {
      auVar13._4_4_ = fVar172;
      auVar13._0_4_ = fVar168;
      auVar13._8_4_ = fStack_6c0;
      auVar13._12_4_ = fStack_6bc;
      uVar9 = extractps(auVar13,1);
      *(undefined8 *)(*pauVar3 + 0xc) = uVar9;
    }
    if ((bVar36 & 4) != 0) {
      auVar12._4_4_ = fVar172;
      auVar12._0_4_ = fVar168;
      auVar12._8_4_ = fStack_6c0;
      auVar12._12_4_ = fStack_6bc;
      uVar9 = extractps(auVar12,2);
      *(undefined8 *)(pauVar3[1] + 8) = uVar9;
    }
    if ((char)bVar36 < '\0') {
      auVar11._4_4_ = fVar172;
      auVar11._0_4_ = fVar168;
      auVar11._8_4_ = fStack_6c0;
      auVar11._12_4_ = fStack_6bc;
      uVar9 = extractps(auVar11,3);
      *(undefined8 *)(pauVar3[2] + 4) = uVar9;
    }
    if ((bVar36 & 1) != 0) {
      *(float *)(*pauVar3 + 4) = auVar183._0_4_;
    }
    if ((bVar36 & 2) != 0) {
      uVar9 = extractps(auVar183,1);
      *(undefined8 *)pauVar3[1] = uVar9;
    }
    if ((bVar36 & 4) != 0) {
      uVar9 = extractps(auVar183,2);
      *(undefined8 *)(pauVar3[1] + 0xc) = uVar9;
    }
    if ((char)bVar36 < '\0') {
      uVar9 = extractps(auVar183,3);
      *(undefined8 *)(pauVar3[2] + 8) = uVar9;
    }
    if ((bVar36 & 1) != 0) {
      *(float *)(*pauVar3 + 8) = auVar75._0_4_;
    }
    if ((bVar36 & 2) != 0) {
      uVar9 = extractps(auVar75,1);
      *(undefined8 *)(pauVar3[1] + 4) = uVar9;
    }
    if ((bVar36 & 4) != 0) {
      uVar9 = extractps(auVar75,2);
      *(undefined8 *)pauVar3[2] = uVar9;
    }
    if ((char)bVar36 < '\0') {
      uVar9 = extractps(auVar75,3);
      *(undefined8 *)(pauVar3[2] + 0xc) = uVar9;
    }
  }
  fVar69 = local_1e8 * fVar146 + local_188 * fVar164 + local_488 * fVar109;
  fVar80 = fStack_1e4 * fVar196 + fStack_184 * fVar186 + fStack_484 * fVar180;
  fVar81 = fStack_1e0 * fVar175 + fStack_180 * fVar95 + fStack_480 * fVar108;
  fVar82 = fStack_1dc * fVar176 + fStack_17c * fVar167 + fStack_47c * fVar171;
  fVar168 = local_1d8 * fVar146 + local_178 * fVar164 + local_478 * fVar109;
  fVar172 = fStack_1d4 * fVar196 + fStack_174 * fVar186 + fStack_474 * fVar180;
  fVar107 = fStack_1d0 * fVar175 + fStack_170 * fVar95 + fStack_470 * fVar108;
  fVar190 = fStack_1cc * fVar176 + fStack_16c * fVar167 + fStack_46c * fVar171;
  fVar110 = local_1c8 * fVar146 + local_168 * fVar164 + local_468 * fVar109;
  fVar121 = fStack_1c4 * fVar196 + fStack_164 * fVar186 + fStack_464 * fVar180;
  fVar122 = fStack_1c0 * fVar175 + fStack_160 * fVar95 + fStack_460 * fVar108;
  fVar123 = fStack_1bc * fVar176 + fStack_15c * fVar167 + fStack_45c * fVar171;
  fVar195 = local_218 * fVar146 + local_1b8 * fVar164 + local_4b8 * fVar109;
  fVar199 = fStack_214 * fVar196 + fStack_1b4 * fVar186 + fStack_4b4 * fVar180;
  fVar200 = fStack_210 * fVar175 + fStack_1b0 * fVar95 + fStack_4b0 * fVar108;
  fVar201 = fStack_20c * fVar176 + fStack_1ac * fVar167 + fStack_4ac * fVar171;
  fVar221 = local_208 * fVar146 + local_1a8 * fVar164 + local_4a8 * fVar109;
  fVar224 = fStack_204 * fVar196 + fStack_1a4 * fVar186 + fStack_4a4 * fVar180;
  fVar226 = fStack_200 * fVar175 + fStack_1a0 * fVar95 + fStack_4a0 * fVar108;
  fVar228 = fStack_1fc * fVar176 + fStack_19c * fVar167 + fStack_49c * fVar171;
  fVar146 = local_1f8 * fVar146 + local_198 * fVar164 + fVar109 * local_498;
  fVar196 = fStack_1f4 * fVar196 + fStack_194 * fVar186 + fVar180 * fStack_494;
  fVar175 = fStack_1f0 * fVar175 + fStack_190 * fVar95 + fVar108 * fStack_490;
  fVar176 = fStack_1ec * fVar176 + fStack_18c * fVar167 + fVar171 * fStack_48c;
  auVar60._0_4_ = -(uint)(0.0 < (float)local_6f8) & local_528;
  auVar60._4_4_ = -(uint)(0.0 < local_6f8._4_4_) & uStack_524;
  auVar60._8_4_ = -(uint)(0.0 < fStack_6f0) & uStack_520;
  auVar60._12_4_ = -(uint)(0.0 < fStack_6ec) & uStack_51c;
  iVar19 = movmskps((uint)bVar36,auVar60);
  uVar165 = 0;
  if (iVar19 != 0) {
    bVar36 = (char)((char)iVar19 << 4) >> 4;
    auVar105._0_4_ = (fVar69 + fVar195) * (float)local_6f8 + local_588;
    auVar105._4_4_ = (fVar80 + fVar199) * local_6f8._4_4_ + fStack_584;
    auVar105._8_4_ = (fVar81 + fVar200) * fStack_6f0 + fStack_580;
    auVar105._12_4_ = (fVar82 + fVar201) * fStack_6ec + fStack_57c;
    if ((bVar36 & 1) != 0) {
      *(float *)(param_1 + (int)uVar25) = auVar105._0_4_;
    }
    if ((bVar36 & 2) != 0) {
      uVar9 = extractps(auVar105,1);
      *(undefined8 *)(param_1 + (int)uVar187) = uVar9;
    }
    fVar109 = fVar168 + fVar221;
    fVar180 = fVar172 + fVar224;
    fVar108 = fVar107 + fVar226;
    fVar171 = fVar190 + fVar228;
    if ((bVar36 & 4) == 0) {
      if (-1 < (char)bVar36) goto LAB_1409c0be5;
LAB_1409c0ef2:
      uVar9 = extractps(auVar105,3);
      *(undefined8 *)(param_1 + (int)uVar194) = uVar9;
      auVar76._0_4_ = fVar109 * (float)local_6f8 + local_578;
      auVar76._4_4_ = fVar180 * local_6f8._4_4_ + fStack_574;
      auVar76._8_4_ = fVar108 * fStack_6f0 + fStack_570;
      auVar76._12_4_ = fVar171 * fStack_6ec + fStack_56c;
      if ((bVar36 & 1) != 0) goto LAB_1409c0f15;
LAB_1409c0bf6:
      if ((bVar36 & 2) == 0) goto LAB_1409c0c02;
LAB_1409c0f2b:
      uVar9 = extractps(auVar76,1);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar187) = uVar9;
      if ((bVar36 & 4) != 0) goto LAB_1409c0f44;
LAB_1409c0c0f:
      fVar109 = (fVar110 + fVar146) * (float)local_6f8;
      local_6f8._4_4_ = (fVar121 + fVar196) * local_6f8._4_4_;
      fStack_6f0 = (fVar122 + fVar175) * fStack_6f0;
      fStack_6ec = (fVar123 + fVar176) * fStack_6ec;
      if (-1 < (char)bVar36) goto LAB_1409c0c1a;
LAB_1409c0f5b:
      uVar9 = extractps(auVar76,3);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar194) = uVar9;
      auVar106._0_4_ = fVar109 + local_568;
      auVar106._4_4_ = local_6f8._4_4_ + fStack_564;
      auVar106._8_4_ = fStack_6f0 + fStack_560;
      auVar106._12_4_ = fStack_6ec + fStack_55c;
    }
    else {
      uVar9 = extractps(auVar105,2);
      *(undefined8 *)(param_1 + (int)uVar191) = uVar9;
      if ((char)bVar36 < '\0') goto LAB_1409c0ef2;
LAB_1409c0be5:
      auVar76._0_4_ = fVar109 * (float)local_6f8 + local_578;
      auVar76._4_4_ = fVar180 * local_6f8._4_4_ + fStack_574;
      auVar76._8_4_ = fVar108 * fStack_6f0 + fStack_570;
      auVar76._12_4_ = fVar171 * fStack_6ec + fStack_56c;
      if ((bVar36 & 1) == 0) goto LAB_1409c0bf6;
LAB_1409c0f15:
      *(int *)(param_1 + 4 + (longlong)(int)uVar25) = auVar76._0_4_;
      if ((bVar36 & 2) != 0) goto LAB_1409c0f2b;
LAB_1409c0c02:
      if ((bVar36 & 4) == 0) goto LAB_1409c0c0f;
LAB_1409c0f44:
      uVar9 = extractps(auVar76,2);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar191) = uVar9;
      fVar109 = (fVar110 + fVar146) * (float)local_6f8;
      local_6f8._4_4_ = (fVar121 + fVar196) * local_6f8._4_4_;
      fStack_6f0 = (fVar122 + fVar175) * fStack_6f0;
      fStack_6ec = (fVar123 + fVar176) * fStack_6ec;
      if ((char)bVar36 < '\0') goto LAB_1409c0f5b;
LAB_1409c0c1a:
      auVar106._0_4_ = fVar109 + local_568;
      auVar106._4_4_ = local_6f8._4_4_ + fStack_564;
      auVar106._8_4_ = fStack_6f0 + fStack_560;
      auVar106._12_4_ = fStack_6ec + fStack_55c;
    }
    if ((bVar36 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)(int)uVar25) = auVar106._0_4_;
    }
    if ((bVar36 & 2) != 0) {
      uVar9 = extractps(auVar106,1);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar187) = uVar9;
    }
    if ((bVar36 & 4) != 0) {
      uVar9 = extractps(auVar106,2);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar191) = uVar9;
    }
    if ((char)bVar36 < '\0') {
      uVar9 = extractps(auVar106,3);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar194) = uVar9;
    }
    if ((bVar36 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)(int)uVar25) = (float)local_6f8;
    }
    if ((bVar36 & 2) != 0) {
      uVar9 = extractps(auVar111,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar187) = uVar9;
    }
    if ((bVar36 & 4) != 0) {
      uVar9 = extractps(auVar111,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar191) = uVar9;
    }
    uVar165 = CONCAT31((int3)((uint)iVar19 >> 8),bVar36);
    if ((char)bVar36 < '\0') {
      uVar9 = extractps(auVar111,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar194) = uVar9;
      uVar165 = uVar194;
    }
  }
  auVar61._0_4_ = -(uint)(0.0 < (float)local_6b8) & local_528;
  auVar61._4_4_ = -(uint)(0.0 < local_6b8._4_4_) & uStack_524;
  auVar61._8_4_ = -(uint)(0.0 < fStack_6b0) & uStack_520;
  auVar61._12_4_ = -(uint)(0.0 < fStack_6ac) & uStack_51c;
  iVar19 = movmskps(uVar165,auVar61);
  uVar165 = 0;
  if (iVar19 == 0) goto LAB_1409c0d72;
  bVar36 = (char)((char)iVar19 << 4) >> 4;
  auVar62._0_4_ = local_5b8 - fVar69 * (float)local_6b8;
  auVar62._4_4_ = fStack_5b4 - fVar80 * local_6b8._4_4_;
  auVar62._8_4_ = fStack_5b0 - fVar81 * fStack_6b0;
  auVar62._12_4_ = fStack_5ac - fVar82 * fStack_6ac;
  if ((bVar36 & 1) != 0) {
    *(float *)(param_1 + (int)uVar150) = auVar62._0_4_;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar62,1);
    *(undefined8 *)(param_1 + (int)uVar156) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar62,2);
    *(undefined8 *)(param_1 + (int)uVar159) = uVar9;
  }
  fVar168 = fVar168 * (float)local_6b8;
  fVar172 = fVar172 * local_6b8._4_4_;
  fVar107 = fVar107 * fStack_6b0;
  fVar190 = fVar190 * fStack_6ac;
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar62,3);
    *(undefined8 *)(param_1 + (int)uVar162) = uVar9;
    auVar77._0_4_ = local_5a8 - fVar168;
    auVar77._4_4_ = fStack_5a4 - fVar172;
    auVar77._8_4_ = fStack_5a0 - fVar107;
    auVar77._12_4_ = fStack_59c - fVar190;
    if ((bVar36 & 1) != 0) goto LAB_1409c1207;
LAB_1409c0d03:
    if ((bVar36 & 2) == 0) goto LAB_1409c0d0c;
LAB_1409c121a:
    uVar9 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar156) = uVar9;
    if ((bVar36 & 4) != 0) goto LAB_1409c122f;
LAB_1409c0d15:
    if (-1 < (char)bVar36) goto LAB_1409c0d29;
LAB_1409c124f:
    uVar9 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar162) = uVar9;
    auVar63._0_4_ = local_598 - fVar110 * (float)local_6b8;
    auVar63._4_4_ = fStack_594 - fVar121 * local_6b8._4_4_;
    auVar63._8_4_ = fStack_590 - fVar122 * fStack_6b0;
    auVar63._12_4_ = fStack_58c - fVar123 * fStack_6ac;
  }
  else {
    auVar77._0_4_ = local_5a8 - fVar168;
    auVar77._4_4_ = fStack_5a4 - fVar172;
    auVar77._8_4_ = fStack_5a0 - fVar107;
    auVar77._12_4_ = fStack_59c - fVar190;
    if ((bVar36 & 1) == 0) goto LAB_1409c0d03;
LAB_1409c1207:
    *(int *)(param_1 + 4 + (longlong)(int)uVar150) = auVar77._0_4_;
    if ((bVar36 & 2) != 0) goto LAB_1409c121a;
LAB_1409c0d0c:
    if ((bVar36 & 4) == 0) goto LAB_1409c0d15;
LAB_1409c122f:
    uVar9 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar159) = uVar9;
    if ((char)bVar36 < '\0') goto LAB_1409c124f;
LAB_1409c0d29:
    auVar63._0_4_ = local_598 - fVar110 * (float)local_6b8;
    auVar63._4_4_ = fStack_594 - fVar121 * local_6b8._4_4_;
    auVar63._8_4_ = fStack_590 - fVar122 * fStack_6b0;
    auVar63._12_4_ = fStack_58c - fVar123 * fStack_6ac;
  }
  if ((bVar36 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)uVar150) = auVar63._0_4_;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar63,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar156) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar63,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar159) = uVar9;
  }
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar63,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar162) = uVar9;
  }
  if ((bVar36 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)uVar150) = (float)local_6b8;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar197,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar156) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar197,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar159) = uVar9;
  }
  uVar165 = CONCAT31((int3)((uint)iVar19 >> 8),bVar36);
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar197,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar162) = uVar9;
    uVar165 = uVar162;
  }
LAB_1409c0d72:
  auVar64._0_4_ = -(uint)(0.0 < local_6e8) & local_528;
  auVar64._4_4_ = -(uint)(0.0 < fStack_6e4) & uStack_524;
  auVar64._8_4_ = -(uint)(0.0 < fStack_6e0) & uStack_520;
  auVar64._12_4_ = -(uint)(0.0 < fStack_6dc) & uStack_51c;
  iVar19 = movmskps(uVar165,auVar64);
  if (iVar19 == 0) {
    return;
  }
  bVar36 = (char)((char)iVar19 << 4) >> 4;
  auVar65._0_4_ = local_5e8 - fVar195 * local_6e8;
  auVar65._4_4_ = fStack_5e4 - fVar199 * fStack_6e4;
  auVar65._8_4_ = fStack_5e0 - fVar200 * fStack_6e0;
  auVar65._12_4_ = fStack_5dc - fVar201 * fStack_6dc;
  if ((bVar36 & 1) != 0) {
    *(float *)(param_1 + iVar37) = auVar65._0_4_;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar65,1);
    *(undefined8 *)(param_1 + iVar68) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar65,2);
    *(undefined8 *)(param_1 + iVar124) = uVar9;
  }
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar65,3);
    *(undefined8 *)(param_1 + iVar147) = uVar9;
    auVar78._0_4_ = local_5d8 - fVar221 * local_6e8;
    auVar78._4_4_ = fStack_5d4 - fVar224 * fStack_6e4;
    auVar78._8_4_ = fStack_5d0 - fVar226 * fStack_6e0;
    auVar78._12_4_ = fStack_5cc - fVar228 * fStack_6dc;
  }
  else {
    auVar78._0_4_ = local_5d8 - fVar221 * local_6e8;
    auVar78._4_4_ = fStack_5d4 - fVar224 * fStack_6e4;
    auVar78._8_4_ = fStack_5d0 - fVar226 * fStack_6e0;
    auVar78._12_4_ = fStack_5cc - fVar228 * fStack_6dc;
  }
  if ((bVar36 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar37) = auVar78._0_4_;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar78,1);
    *(undefined8 *)(param_1 + 4 + (longlong)iVar68) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar78,2);
    *(undefined8 *)(param_1 + 4 + (longlong)iVar124) = uVar9;
  }
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar78,3);
    *(undefined8 *)(param_1 + 4 + (longlong)iVar147) = uVar9;
    auVar66._0_4_ = local_5c8 - fVar146 * local_6e8;
    auVar66._4_4_ = fStack_5c4 - fVar196 * fStack_6e4;
    auVar66._8_4_ = fStack_5c0 - fVar175 * fStack_6e0;
    auVar66._12_4_ = fStack_5bc - fVar176 * fStack_6dc;
  }
  else {
    auVar66._0_4_ = local_5c8 - fVar146 * local_6e8;
    auVar66._4_4_ = fStack_5c4 - fVar196 * fStack_6e4;
    auVar66._8_4_ = fStack_5c0 - fVar175 * fStack_6e0;
    auVar66._12_4_ = fStack_5bc - fVar176 * fStack_6dc;
  }
  if ((bVar36 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar37) = auVar66._0_4_;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar66,1);
    *(undefined8 *)(param_1 + 8 + (longlong)iVar68) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar66,2);
    *(undefined8 *)(param_1 + 8 + (longlong)iVar124) = uVar9;
  }
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar66,3);
    *(undefined8 *)(param_1 + 8 + (longlong)iVar147) = uVar9;
  }
  if ((bVar36 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar37) = local_6e8;
  }
  if ((bVar36 & 2) != 0) {
    uVar9 = extractps(auVar215,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)iVar68) = uVar9;
  }
  if ((bVar36 & 4) != 0) {
    uVar9 = extractps(auVar215,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)iVar124) = uVar9;
  }
  if ((char)bVar36 < '\0') {
    uVar9 = extractps(auVar215,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)iVar147) = uVar9;
  }
  return;
}

// ApplyXPBDStretchBiasConstraintsWithDamping_sse4 @ 1409c1370

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDStretchBiasConstraintsWithDamping_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float param_8,float param_9,float *param_10,
               float param_11,float param_12,float param_13,uint param_14)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 (*pauVar31) [16];
  byte bVar32;
  uint uVar33;
  ulonglong uVar34;
  longlong lVar35;
  uint uVar36;
  int iVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  int iVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong lVar47;
  byte bVar48;
  int iVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  ulonglong uVar55;
  longlong lVar56;
  float *pfVar57;
  int iVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  int iVar92;
  int iVar96;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar97;
  float fVar98;
  float fVar102;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined4 uVar103;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar62;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar104;
  float fVar105;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar106;
  float fVar107;
  undefined1 auVar108 [16];
  float fVar120;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  float fVar161;
  float fVar162;
  float fVar170;
  float fVar172;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  float fVar173;
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  float fVar171;
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  float fVar174;
  float fVar180;
  float fVar181;
  undefined1 auVar175 [16];
  float fVar182;
  float fVar183;
  float fVar184;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  float fVar185;
  undefined1 auVar179 [16];
  float fVar186;
  float fVar187;
  float fVar193;
  float fVar194;
  float fVar195;
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  float fVar196;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  float fVar197;
  float fVar198;
  float fVar199;
  float fVar203;
  float fVar204;
  float fVar205;
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  float fVar206;
  float fVar207;
  float fVar211;
  float fVar212;
  float fVar213;
  float fVar214;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  float fVar215;
  float fVar217;
  float fVar218;
  float fVar219;
  undefined1 auVar216 [16];
  undefined1 auVar220 [16];
  float fVar221;
  float fVar222;
  float fVar224;
  float fVar225;
  float fVar226;
  float fVar227;
  float fVar228;
  undefined1 auVar223 [16];
  float fVar229;
  float fVar231;
  float fVar232;
  undefined1 auVar230 [16];
  float fVar233;
  float fVar234;
  float fVar235;
  float fVar236;
  float fVar238;
  float fVar239;
  float fVar240;
  undefined1 auVar237 [16];
  float fVar241;
  float fVar242;
  float fVar244;
  float fVar245;
  float fVar246;
  float fVar247;
  float fVar248;
  undefined1 auVar243 [16];
  float local_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  undefined1 local_7e8 [8];
  float fStack_7e0;
  float fStack_7dc;
  undefined1 local_7c8 [8];
  float fStack_7c0;
  float fStack_7bc;
  float local_788;
  float fStack_784;
  float fStack_780;
  float fStack_77c;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  undefined1 local_758 [8];
  float fStack_750;
  float fStack_74c;
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float local_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  undefined1 local_628 [8];
  float fStack_620;
  float fStack_61c;
  undefined1 local_618 [8];
  float fStack_610;
  float fStack_60c;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  undefined1 local_5f8 [16];
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  longlong local_5c8;
  longlong local_5c0;
  undefined1 local_5b8 [8];
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  longlong local_550;
  longlong local_548;
  longlong local_540;
  longlong local_538;
  longlong local_530;
  longlong local_528;
  longlong local_520;
  longlong local_518;
  longlong local_510;
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [16];
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  uVar36 = param_14 + 3;
  if (-1 < (int)param_14) {
    uVar36 = param_14;
  }
  if ((int)(uVar36 & 0xfffffffc) < 1) {
    uVar33 = 0;
  }
  else {
    local_368 = param_12;
    fStack_364 = param_12;
    fStack_360 = param_12;
    fStack_35c = param_12;
    local_378 = param_13;
    fStack_374 = param_13;
    fStack_370 = param_13;
    fStack_36c = param_13;
    fVar121 = param_11 + param_11;
    pfVar57 = (float *)(param_5 + 0x30);
    lVar53 = 0x20;
    uVar33 = 0;
    do {
      auVar108 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar53);
      auVar165 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar53);
      piVar1 = (int *)(param_3 + lVar53);
      uVar103 = auVar165._0_4_;
      auVar153._4_4_ = uVar103;
      auVar153._0_4_ = uVar103;
      auVar153._8_4_ = uVar103;
      auVar153._12_4_ = uVar103;
      iVar37 = auVar108._0_4_;
      auVar192._8_4_ = auVar108._8_4_;
      auVar192._12_4_ = auVar108._12_4_;
      auVar175._4_4_ = auVar192._12_4_;
      auVar175._0_4_ = iVar37;
      auVar175._8_4_ = auVar108._4_4_;
      auVar175._12_4_ = auVar192._12_4_;
      auVar154 = pblendw(auVar153,auVar175,0x3f);
      auVar192._0_8_ = auVar108._8_8_;
      auVar63 = pblendw(auVar192,auVar165,0xc);
      iVar58 = iVar37 << 4;
      iVar92 = auVar192._12_4_ * 0x10;
      local_550 = (longlong)iVar58;
      local_548 = (longlong)iVar92;
      local_540 = (longlong)(auVar165._8_4_ << 4);
      lVar40 = (longlong)(piVar1[1] << 4);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + local_550)),
                          *(undefined4 *)(param_1 + local_548),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + local_540),0x20);
      local_508 = insertps(auVar108,*(undefined4 *)(param_1 + lVar40),0x30);
      fVar162 = local_508._12_4_;
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_550)),
                          *(undefined4 *)(param_1 + 4 + local_548),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + local_540),0x20);
      auVar64 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + lVar40),0x30);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_550)),
                          *(undefined4 *)(param_1 + 8 + local_548),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + local_540),0x20);
      local_4f8 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + lVar40),0x30);
      uVar7 = *(uint *)(param_1 + 0xc + local_550);
      local_318 = ZEXT416(uVar7);
      uVar8 = *(uint *)(param_1 + 0xc + local_548);
      local_2f8 = ZEXT416(uVar8);
      iVar96 = auVar165._12_4_ << 4;
      local_538 = (longlong)(auVar154._8_4_ << 4);
      local_530 = (longlong)(auVar154._12_4_ * 0x10);
      local_528 = (longlong)iVar96;
      lVar47 = (longlong)(piVar1[2] << 4);
      auVar108 = *(undefined1 (*) [16])(pfVar57 + -0xc);
      fVar234 = pfVar57[-8];
      fVar232 = pfVar57[-7];
      local_7e8._4_4_ = pfVar57[-6];
      fVar182 = pfVar57[-5];
      fVar184 = pfVar57[-4];
      fVar60 = pfVar57[-3];
      fStack_7e0 = pfVar57[-2];
      fVar61 = pfVar57[-1];
      fVar94 = *pfVar57;
      fVar95 = pfVar57[1];
      fStack_7dc = pfVar57[2];
      fVar98 = pfVar57[3];
      local_7e8._0_4_ = auVar108._8_4_;
      fVar126 = auVar108._4_4_;
      fVar120 = auVar108._0_4_;
      fVar106 = auVar108._12_4_;
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + local_538)),
                          *(undefined4 *)(param_1 + local_530),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + local_528),0x20);
      local_4e8 = insertps(auVar108,*(undefined4 *)(param_1 + lVar47),0x30);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_538)),
                          *(undefined4 *)(param_1 + 4 + local_530),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + local_528),0x20);
      local_4d8 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + lVar47),0x30);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_538)),
                          *(undefined4 *)(param_1 + 8 + local_530),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + local_528),0x20);
      auVar188 = insertps(ZEXT416(uVar7),local_2f8,0x10);
      auVar65 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + lVar47),0x30);
      uVar9 = *(uint *)(param_1 + 0xc + local_540);
      local_328 = ZEXT416(uVar9);
      auVar188 = insertps(auVar188,local_328,0x20);
      local_520 = (longlong)(auVar63._0_4_ << 4);
      local_518 = (longlong)(auVar63._4_4_ * 0x10);
      local_510 = (longlong)(*piVar1 << 4);
      lVar26 = (longlong)(piVar1[3] << 4);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + local_520)),
                          *(undefined4 *)(param_1 + local_518),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + local_510),0x20);
      auVar66 = insertps(auVar108,*(undefined4 *)(param_1 + lVar26),0x30);
      fVar104 = auVar66._12_4_;
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_520)),
                          *(undefined4 *)(param_1 + 4 + local_518),0x10);
      uVar10 = *(uint *)(param_1 + 0xc + lVar40);
      local_358 = ZEXT416(uVar10);
      auVar189 = insertps(auVar188,local_358,0x30);
      uVar11 = *(uint *)(param_1 + 0xc + local_538);
      local_308 = ZEXT416(uVar11);
      uVar12 = *(uint *)(param_1 + 0xc + local_530);
      local_2e8 = ZEXT416(uVar12);
      auVar188 = insertps(local_308,local_2e8,0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + local_510),0x20);
      uVar13 = *(uint *)(param_1 + 0xc + local_528);
      local_2d8 = ZEXT416(uVar13);
      auVar188 = insertps(auVar188,local_2d8,0x20);
      auVar155 = insertps(auVar108,*(undefined4 *)(param_1 + 4 + lVar26),0x30);
      uVar14 = *(uint *)(param_1 + 0xc + lVar47);
      local_348 = ZEXT416(uVar14);
      auVar163 = insertps(auVar188,local_348,0x30);
      auVar108 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_520)),
                          *(undefined4 *)(param_1 + 8 + local_518),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + local_510),0x20);
      local_4c8 = insertps(auVar108,*(undefined4 *)(param_1 + 8 + lVar26),0x30);
      uVar15 = *(uint *)(param_1 + 0xc + local_520);
      local_2c8 = ZEXT416(uVar15);
      uVar16 = *(uint *)(param_1 + 0xc + local_518);
      local_2b8 = ZEXT416(uVar16);
      auVar108 = insertps(local_2c8,local_2b8,0x10);
      uVar17 = *(uint *)(param_1 + 0xc + local_510);
      local_2a8 = ZEXT416(uVar17);
      auVar108 = insertps(auVar108,local_2a8,0x20);
      uVar18 = *(uint *)(param_1 + 0xc + lVar26);
      local_338 = ZEXT416(uVar18);
      auVar164 = insertps(auVar108,local_338,0x30);
      auVar108 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar53);
      auVar188 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar53);
      pfVar2 = (float *)(param_4 + lVar53);
      auVar220 = insertps(auVar188,auVar108,0x8c);
      fVar107 = local_508._0_4_;
      fVar221 = local_4e8._0_4_;
      fVar242 = local_508._4_4_;
      fVar224 = local_4e8._4_4_;
      fVar245 = local_508._8_4_;
      fVar226 = local_4e8._8_4_;
      fVar228 = local_4e8._12_4_;
      local_758._0_4_ = auVar64._0_4_;
      local_758._4_4_ = auVar64._4_4_;
      fStack_750 = auVar64._8_4_;
      fStack_74c = auVar64._12_4_;
      fVar171 = local_4d8._12_4_;
      fVar99 = local_4d8._0_4_;
      fVar100 = local_4d8._4_4_;
      fVar101 = local_4d8._8_4_;
      fVar195 = auVar66._0_4_;
      fVar197 = auVar66._4_4_;
      fVar198 = auVar66._8_4_;
      fVar62 = auVar155._4_4_;
      fVar105 = auVar155._12_4_;
      fVar185 = auVar155._0_4_;
      fVar187 = auVar155._8_4_;
      fVar199 = (fVar195 - fVar107) * fVar126 + (fVar221 - fVar107) * fVar120;
      fVar203 = (fVar197 - fVar242) * fVar232 + (fVar224 - fVar242) * fVar234;
      fVar204 = (fVar198 - fVar245) * fVar60 + (fVar226 - fVar245) * fVar184;
      fVar205 = (fVar104 - fVar162) * fVar95 + (fVar228 - fVar162) * fVar94;
      fVar215 = (fVar185 - (float)local_758._0_4_) * fVar126 +
                (fVar99 - (float)local_758._0_4_) * fVar120;
      fVar217 = (fVar62 - (float)local_758._4_4_) * fVar232 +
                (fVar100 - (float)local_758._4_4_) * fVar234;
      fVar218 = (fVar187 - fStack_750) * fVar60 + (fVar101 - fStack_750) * fVar184;
      fVar219 = (fVar105 - fStack_74c) * fVar95 + (fVar171 - fStack_74c) * fVar94;
      local_6d8 = auVar65._0_4_;
      fStack_6d4 = auVar65._4_4_;
      fStack_6d0 = auVar65._8_4_;
      fStack_6cc = auVar65._12_4_;
      fVar241 = local_4f8._0_4_;
      fVar244 = local_4f8._4_4_;
      fVar246 = local_4f8._8_4_;
      fVar248 = local_4f8._12_4_;
      fVar213 = local_4c8._4_4_;
      fVar231 = local_4c8._12_4_;
      fVar206 = local_4c8._0_4_;
      fVar247 = local_4c8._8_4_;
      fVar122 = (fVar206 - fVar241) * fVar126 + (local_6d8 - fVar241) * fVar120;
      fVar141 = (fVar213 - fVar244) * fVar232 + (fStack_6d4 - fVar244) * fVar234;
      fVar145 = (fVar247 - fVar246) * fVar60 + (fStack_6d0 - fVar246) * fVar184;
      fVar149 = (fVar231 - fVar248) * fVar95 + (fStack_6cc - fVar248) * fVar94;
      fVar186 = (fVar195 - fVar107) * fVar106 + (fVar221 - fVar107) * (float)local_7e8._0_4_;
      fVar193 = (fVar197 - fVar242) * fVar182 + (fVar224 - fVar242) * (float)local_7e8._4_4_;
      fVar194 = (fVar198 - fVar245) * fVar61 + (fVar226 - fVar245) * fStack_7e0;
      fVar196 = (fVar104 - fVar162) * fVar98 + (fVar228 - fVar162) * fStack_7dc;
      fVar174 = (fVar185 - (float)local_758._0_4_) * fVar106 +
                (fVar99 - (float)local_758._0_4_) * (float)local_7e8._0_4_;
      fVar180 = (fVar62 - (float)local_758._4_4_) * fVar182 +
                (fVar100 - (float)local_758._4_4_) * (float)local_7e8._4_4_;
      fVar181 = (fVar187 - fStack_750) * fVar61 + (fVar101 - fStack_750) * fStack_7e0;
      fVar183 = (fVar105 - fStack_74c) * fVar98 + (fVar171 - fStack_74c) * fStack_7dc;
      fVar207 = (fVar206 - fVar241) * fVar106 + (local_6d8 - fVar241) * (float)local_7e8._0_4_;
      fVar211 = (fVar213 - fVar244) * fVar182 + (fStack_6d4 - fVar244) * (float)local_7e8._4_4_;
      fVar212 = (fVar247 - fVar246) * fVar61 + (fStack_6d0 - fVar246) * fStack_7e0;
      fVar214 = (fVar231 - fVar248) * fVar98 + (fStack_6cc - fVar248) * fStack_7dc;
      auVar155._0_4_ = fVar122 * fVar122 + fVar215 * fVar215 + fVar199 * fVar199;
      auVar155._4_4_ = fVar141 * fVar141 + fVar217 * fVar217 + fVar203 * fVar203;
      auVar155._8_4_ = fVar145 * fVar145 + fVar218 * fVar218 + fVar204 * fVar204;
      auVar155._12_4_ = fVar149 * fVar149 + fVar219 * fVar219 + fVar205 * fVar205;
      auVar223._0_4_ = fVar186 * fVar186;
      auVar223._4_4_ = fVar193 * fVar193;
      auVar223._8_4_ = fVar194 * fVar194;
      auVar223._12_4_ = fVar196 * fVar196;
      auVar243._0_4_ = fVar207 * fVar207 + fVar174 * fVar174 + auVar223._0_4_;
      auVar243._4_4_ = fVar211 * fVar211 + fVar180 * fVar180 + auVar223._4_4_;
      auVar243._8_4_ = fVar212 * fVar212 + fVar181 * fVar181 + auVar223._8_4_;
      auVar243._12_4_ = fVar214 * fVar214 + fVar183 * fVar183 + auVar223._12_4_;
      auVar66 = sqrtps(_local_7e8,auVar155);
      auVar64._4_4_ = _UNK_15076b1f4;
      auVar64._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar64._8_4_ = _UNK_15076b1f8;
      auVar64._12_4_ = _UNK_15076b1fc;
      auVar64 = divps(auVar64,auVar66);
      fVar59 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar66._0_4_) &
                      auVar64._0_4_);
      fVar93 = (float)(-(uint)(_UNK_1506895d4 < auVar66._4_4_) & auVar64._4_4_);
      fVar97 = (float)(-(uint)(_UNK_1506895d8 < auVar66._8_4_) & auVar64._8_4_);
      fVar102 = (float)(-(uint)(_UNK_1506895dc < auVar66._12_4_) & auVar64._12_4_);
      auVar64 = sqrtps(auVar223,auVar243);
      auVar65._4_4_ = _UNK_15076b1f4;
      auVar65._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar65._8_4_ = _UNK_15076b1f8;
      auVar65._12_4_ = _UNK_15076b1fc;
      auVar65 = divps(auVar65,auVar64);
      fVar236 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar64._0_4_) &
                       auVar65._0_4_);
      fVar238 = (float)(-(uint)(_UNK_1506895d4 < auVar64._4_4_) & auVar65._4_4_);
      fVar239 = (float)(-(uint)(_UNK_1506895d8 < auVar64._8_4_) & auVar65._8_4_);
      fVar240 = (float)(-(uint)(_UNK_1506895dc < auVar64._12_4_) & auVar65._12_4_);
      local_288 = auVar66._0_4_ - auVar108._0_4_ * param_13;
      fStack_284 = auVar66._4_4_ - auVar108._12_4_ * param_13;
      fStack_280 = auVar66._8_4_ - auVar188._8_4_ * param_13;
      fStack_27c = auVar66._12_4_ - pfVar2[1] * param_13;
      local_238 = auVar64._0_4_ - auVar108._4_4_ * param_12;
      fStack_234 = auVar64._4_4_ - auVar188._0_4_ * param_12;
      fStack_230 = auVar64._8_4_ - auVar188._12_4_ * param_12;
      fStack_22c = auVar64._12_4_ - pfVar2[2] * param_12;
      fVar199 = fVar199 * fVar59;
      fVar203 = fVar203 * fVar93;
      fVar204 = fVar204 * fVar97;
      fVar205 = fVar205 * fVar102;
      fVar215 = fVar215 * fVar59;
      fVar217 = fVar217 * fVar93;
      fVar218 = fVar218 * fVar97;
      fVar219 = fVar219 * fVar102;
      fVar186 = fVar186 * fVar236;
      fVar193 = fVar193 * fVar238;
      fVar194 = fVar194 * fVar239;
      fVar196 = fVar196 * fVar240;
      fVar174 = fVar174 * fVar236;
      fVar180 = fVar180 * fVar238;
      fVar181 = fVar181 * fVar239;
      fVar183 = fVar183 * fVar240;
      fVar122 = fVar122 * fVar59;
      fVar141 = fVar141 * fVar93;
      fVar145 = fVar145 * fVar97;
      fVar149 = fVar149 * fVar102;
      fVar207 = fVar207 * fVar236;
      fVar211 = fVar211 * fVar238;
      fVar212 = fVar212 * fVar239;
      fVar214 = fVar214 * fVar240;
      local_228 = (fVar122 * fVar207 + fVar215 * fVar174 + fVar199 * fVar186) - auVar220._0_4_;
      fStack_224 = (fVar141 * fVar211 + fVar217 * fVar180 + fVar203 * fVar193) - auVar220._4_4_;
      fStack_220 = (fVar145 * fVar212 + fVar218 * fVar181 + fVar204 * fVar194) - *pfVar2;
      fStack_21c = (fVar149 * fVar214 + fVar219 * fVar183 + fVar205 * fVar196) - pfVar2[3];
      fVar123 = (float)local_7e8._0_4_ * fVar186;
      fVar142 = (float)local_7e8._4_4_ * fVar193;
      fVar146 = fStack_7e0 * fVar194;
      fVar150 = fStack_7dc * fVar196;
      local_608 = (float)local_7e8._0_4_ * fVar174;
      fStack_604 = (float)local_7e8._4_4_ * fVar180;
      fStack_600 = fStack_7e0 * fVar181;
      fStack_5fc = fStack_7dc * fVar183;
      fVar124 = (float)local_7e8._0_4_ * fVar207;
      fVar143 = (float)local_7e8._4_4_ * fVar211;
      fVar147 = fStack_7e0 * fVar212;
      fVar151 = fStack_7dc * fVar214;
      fVar125 = fVar106 * fVar186;
      fVar144 = fVar182 * fVar193;
      fVar148 = fVar61 * fVar194;
      fVar152 = fVar98 * fVar196;
      local_5e8 = fVar106 * fVar174;
      fStack_5e4 = fVar182 * fVar180;
      fStack_5e0 = fVar61 * fVar181;
      fStack_5dc = fVar98 * fVar183;
      local_5d8 = fVar106 * fVar207;
      fStack_5d4 = fVar182 * fVar211;
      fStack_5d0 = fVar61 * fVar212;
      fStack_5cc = fVar98 * fVar214;
      local_458 = fVar120 * fVar199;
      fStack_454 = fVar234 * fVar203;
      fStack_450 = fVar184 * fVar204;
      fStack_44c = fVar94 * fVar205;
      local_448 = fVar120 * fVar215;
      fStack_444 = fVar234 * fVar217;
      fStack_440 = fVar184 * fVar218;
      fStack_43c = fVar94 * fVar219;
      local_598 = fVar120 * fVar122;
      fStack_594 = fVar234 * fVar141;
      fStack_590 = fVar184 * fVar145;
      fStack_58c = fVar94 * fVar149;
      local_628._0_4_ = fVar126 * fVar199;
      local_628._4_4_ = fVar232 * fVar203;
      fStack_620 = fVar60 * fVar204;
      fStack_61c = fVar95 * fVar205;
      local_618._0_4_ = fVar126 * fVar215;
      local_618._4_4_ = fVar232 * fVar217;
      fStack_610 = fVar60 * fVar218;
      fStack_60c = fVar95 * fVar219;
      local_588 = fVar126 * fVar122;
      fStack_584 = fVar232 * fVar141;
      fStack_580 = fVar60 * fVar145;
      fStack_57c = fVar95 * fVar149;
      local_248 = (float)local_7e8._0_4_ * fVar199 * fVar236 + fVar120 * fVar186 * fVar59;
      fStack_244 = (float)local_7e8._4_4_ * fVar203 * fVar238 + fVar234 * fVar193 * fVar93;
      fStack_240 = fStack_7e0 * fVar204 * fVar239 + fVar184 * fVar194 * fVar97;
      fStack_23c = fStack_7dc * fVar205 * fVar240 + fVar94 * fVar196 * fVar102;
      fVar161 = (float)local_7e8._0_4_ * fVar215 * fVar236 + fVar120 * fVar174 * fVar59;
      fVar170 = (float)local_7e8._4_4_ * fVar217 * fVar238 + fVar234 * fVar180 * fVar93;
      fVar172 = fStack_7e0 * fVar218 * fVar239 + fVar184 * fVar181 * fVar97;
      fVar173 = fStack_7dc * fVar219 * fVar240 + fVar94 * fVar183 * fVar102;
      fVar222 = (float)local_7e8._0_4_ * fVar122 * fVar236 + fVar120 * fVar207 * fVar59;
      fVar225 = (float)local_7e8._4_4_ * fVar141 * fVar238 + fVar234 * fVar211 * fVar93;
      fVar227 = fStack_7e0 * fVar145 * fVar239 + fVar184 * fVar212 * fVar97;
      fVar229 = fStack_7dc * fVar149 * fVar240 + fVar94 * fVar214 * fVar102;
      local_258 = fVar199 * fVar236 * fVar106 + fVar186 * fVar59 * fVar126;
      fStack_254 = fVar203 * fVar238 * fVar182 + fVar193 * fVar93 * fVar232;
      fStack_250 = fVar204 * fVar239 * fVar61 + fVar194 * fVar97 * fVar60;
      fStack_24c = fVar205 * fVar240 * fVar98 + fVar196 * fVar102 * fVar95;
      local_278 = fVar215 * fVar236 * fVar106 + fVar174 * fVar59 * fVar126;
      fStack_274 = fVar217 * fVar238 * fVar182 + fVar180 * fVar93 * fVar232;
      fStack_270 = fVar218 * fVar239 * fVar61 + fVar181 * fVar97 * fVar60;
      fStack_26c = fVar219 * fVar240 * fVar98 + fVar183 * fVar102 * fVar95;
      local_268 = fVar122 * fVar236 * fVar106 + fVar207 * fVar59 * fVar126;
      fStack_264 = fVar141 * fVar238 * fVar182 + fVar211 * fVar93 * fVar232;
      fStack_260 = fVar145 * fVar239 * fVar61 + fVar212 * fVar97 * fVar60;
      fStack_25c = fVar149 * fVar240 * fVar98 + fVar214 * fVar102 * fVar95;
      iVar49 = piVar1[2] * 3;
      lVar54 = (longlong)(iVar37 * 3);
      lVar38 = (longlong)(auVar192._12_4_ * 3);
      auVar108 = insertps(ZEXT416(*(uint *)(param_2 + lVar54 * 4)),
                          *(undefined4 *)(param_2 + lVar38 * 4),0x10);
      lVar43 = (longlong)(auVar165._8_4_ * 3);
      auVar188 = insertps(auVar108,*(undefined4 *)(param_2 + lVar43 * 4),0x20);
      auVar108 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar54 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar38 * 4),0x10);
      iVar37 = piVar1[3] * 3;
      iVar42 = *piVar1 * 3;
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + 4 + lVar43 * 4),0x20);
      auVar64 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar54 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar38 * 4),0x10);
      auVar64 = insertps(auVar64,*(undefined4 *)(param_2 + 8 + lVar43 * 4),0x20);
      lVar38 = (longlong)(piVar1[1] * 3);
      auVar188 = insertps(auVar188,*(undefined4 *)(param_2 + lVar38 * 4),0x30);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + 4 + lVar38 * 4),0x30);
      auVar64 = insertps(auVar64,*(undefined4 *)(param_2 + 8 + lVar38 * 4),0x30);
      lVar38 = (longlong)(auVar154._8_4_ * 3);
      lVar43 = (longlong)(auVar154._12_4_ * 3);
      auVar65 = insertps(ZEXT416(*(uint *)(param_2 + lVar38 * 4)),
                         *(undefined4 *)(param_2 + lVar43 * 4),0x10);
      fVar194 = fVar107 - auVar188._0_4_;
      fVar199 = fVar242 - auVar188._4_4_;
      fVar204 = fVar245 - auVar188._8_4_;
      fVar211 = fVar162 - auVar188._12_4_;
      auVar188 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar38 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar43 * 4),0x10);
      auVar66 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar38 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar43 * 4),0x10);
      fVar196 = (float)local_758._0_4_ - auVar108._0_4_;
      fVar203 = (float)local_758._4_4_ - auVar108._4_4_;
      fVar205 = fStack_750 - auVar108._8_4_;
      fVar212 = fStack_74c - auVar108._12_4_;
      lVar38 = (longlong)(auVar165._12_4_ * 3);
      auVar165 = insertps(auVar65,*(undefined4 *)(param_2 + lVar38 * 4),0x20);
      auVar108 = insertps(auVar188,*(undefined4 *)(param_2 + 4 + lVar38 * 4),0x20);
      auVar188 = insertps(auVar66,*(undefined4 *)(param_2 + 8 + lVar38 * 4),0x20);
      lVar38 = (longlong)iVar49;
      auVar165 = insertps(auVar165,*(undefined4 *)(param_2 + lVar38 * 4),0x30);
      fVar60 = fVar241 - auVar64._0_4_;
      fVar94 = fVar244 - auVar64._4_4_;
      fVar98 = fVar246 - auVar64._8_4_;
      fVar93 = fVar248 - auVar64._12_4_;
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + 4 + lVar38 * 4),0x30);
      local_478 = fVar221 - auVar165._0_4_;
      fStack_474 = fVar224 - auVar165._4_4_;
      fStack_470 = fVar226 - auVar165._8_4_;
      fStack_46c = fVar228 - auVar165._12_4_;
      auVar188 = insertps(auVar188,*(undefined4 *)(param_2 + 8 + lVar38 * 4),0x30);
      local_498 = fVar99 - auVar108._0_4_;
      fStack_494 = fVar100 - auVar108._4_4_;
      fStack_490 = fVar101 - auVar108._8_4_;
      fStack_48c = fVar171 - auVar108._12_4_;
      lVar38 = (longlong)(auVar63._0_4_ * 3);
      lVar43 = (longlong)(auVar63._4_4_ * 3);
      lVar44 = (longlong)iVar42;
      lVar54 = (longlong)iVar37;
      auVar108 = insertps(ZEXT416(*(uint *)(param_2 + lVar38 * 4)),
                          *(undefined4 *)(param_2 + lVar43 * 4),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + lVar44 * 4),0x20);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + lVar54 * 4),0x30);
      auVar165 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar38 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar43 * 4),0x10);
      fVar126 = local_6d8 - auVar188._0_4_;
      fVar180 = fStack_6d4 - auVar188._4_4_;
      fVar181 = fStack_6d0 - auVar188._8_4_;
      fVar186 = fStack_6cc - auVar188._12_4_;
      auVar165 = insertps(auVar165,*(undefined4 *)(param_2 + 4 + lVar44 * 4),0x20);
      local_488 = fVar195 - auVar108._0_4_;
      fStack_484 = fVar197 - auVar108._4_4_;
      fStack_480 = fVar198 - auVar108._8_4_;
      fStack_47c = fVar104 - auVar108._12_4_;
      auVar108 = insertps(auVar165,*(undefined4 *)(param_2 + 4 + lVar54 * 4),0x30);
      local_4a8 = fVar185 - auVar108._0_4_;
      fStack_4a4 = fVar62 - auVar108._4_4_;
      fStack_4a0 = fVar187 - auVar108._8_4_;
      fStack_49c = fVar105 - auVar108._12_4_;
      auVar108 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar38 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar43 * 4),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + 8 + lVar44 * 4),0x20);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_2 + 8 + lVar54 * 4),0x30);
      local_4b8 = fVar206 - auVar108._0_4_;
      fStack_4b4 = fVar213 - auVar108._4_4_;
      fStack_4b0 = fVar247 - auVar108._8_4_;
      fStack_4ac = fVar231 - auVar108._12_4_;
      auVar108 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar53);
      auVar165 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar53);
      fStack_5a4 = auVar165._0_4_;
      fStack_5a0 = auVar165._12_4_;
      local_5a8 = auVar108._4_4_;
      pfVar2 = (float *)(param_7 + lVar53);
      fVar182 = *pfVar2;
      fStack_59c = pfVar2[2];
      fVar184 = pfVar2[3];
      auVar65 = insertps(auVar165,auVar108,0x8c);
      auVar127._0_8_ = auVar65._0_8_;
      auVar127._8_4_ = fVar182;
      auVar127._12_4_ = fVar184;
      local_788 = auVar189._0_4_;
      fStack_784 = auVar189._4_4_;
      fStack_780 = auVar189._8_4_;
      fStack_77c = auVar189._12_4_;
      local_7f8 = auVar163._0_4_;
      fStack_7f4 = auVar163._4_4_;
      fStack_7f0 = auVar163._8_4_;
      fStack_7ec = auVar163._12_4_;
      local_778 = auVar164._0_4_;
      fStack_774 = auVar164._4_4_;
      fStack_770 = auVar164._8_4_;
      fStack_76c = auVar164._12_4_;
      local_5b8._4_4_ = fStack_784 + fStack_7f4 + fStack_774;
      local_5b8._0_4_ = local_788 + local_7f8 + local_778;
      fStack_5b0 = fStack_780 + fStack_7f0 + fStack_770;
      fStack_5ac = fStack_77c + fStack_7ec + fStack_76c;
      auVar188 = *(undefined1 (*) [16])(param_6 + -0x20 + lVar53);
      auVar64 = *(undefined1 (*) [16])(param_6 + -0x10 + lVar53);
      pfVar3 = (float *)(param_6 + lVar53);
      auVar63 = insertps(auVar64,auVar188,0x8c);
      fVar234 = *param_10;
      fVar215 = fVar234 * auVar188._0_4_;
      fVar217 = fVar234 * auVar188._12_4_;
      auVar109._4_4_ = fVar217;
      auVar109._0_4_ = fVar215;
      fVar218 = fVar234 * auVar64._8_4_;
      fVar234 = fVar234 * pfVar3[1];
      fVar232 = param_10[1];
      fVar219 = fVar232 * auVar188._4_4_;
      fVar236 = fVar232 * auVar64._0_4_;
      auVar111._4_4_ = fVar236;
      auVar111._0_4_ = fVar219;
      fVar238 = fVar232 * auVar64._12_4_;
      fVar232 = fVar232 * pfVar3[2];
      fStack_45c = param_10[2];
      local_468 = fStack_45c * auVar63._0_4_;
      fStack_464 = fStack_45c * auVar63._4_4_;
      fStack_460 = fStack_45c * *pfVar3;
      fStack_45c = fStack_45c * pfVar3[3];
      auVar163._0_4_ = param_8 * fVar215 * param_8;
      auVar163._4_4_ = param_8 * fVar217 * param_8;
      auVar163._8_4_ = param_8 * fVar218 * param_8;
      auVar163._12_4_ = param_8 * fVar234 * param_8;
      auVar188._4_4_ = _UNK_15076b1f4;
      auVar188._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar188._8_4_ = _UNK_15076b1f8;
      auVar188._12_4_ = _UNK_15076b1fc;
      auVar64 = divps(auVar188,auVar163);
      fVar106 = local_458 + (float)local_628._0_4_;
      fVar122 = fStack_454 + (float)local_628._4_4_;
      fVar145 = fStack_450 + fStack_620;
      fVar120 = fStack_44c + fStack_61c;
      fVar183 = local_448 + (float)local_618._0_4_;
      fVar193 = fStack_444 + (float)local_618._4_4_;
      fVar207 = fStack_440 + fStack_610;
      fVar214 = fStack_43c + fStack_60c;
      fVar61 = local_598 + local_588;
      fVar95 = fStack_594 + fStack_584;
      fVar59 = fStack_590 + fStack_580;
      fVar97 = fStack_58c + fStack_57c;
      auVar109._8_4_ = fVar218;
      auVar109._12_4_ = fVar234;
      auVar188 = divps(auVar109,_local_5b8);
      auVar188 = sqrtps(auVar188,auVar188);
      fVar239 = auVar64._0_4_;
      fVar240 = auVar64._4_4_;
      fVar233 = auVar64._8_4_;
      fVar235 = auVar64._12_4_;
      fVar102 = auVar188._0_4_ * fVar121 * fVar239 * param_8;
      fVar141 = auVar188._4_4_ * fVar121 * fVar240 * param_8;
      fVar149 = auVar188._8_4_ * fVar121 * fVar233 * param_8;
      fVar174 = auVar188._12_4_ * fVar121 * fVar235 * param_8;
      auVar63._4_4_ = _UNK_15076b1f4;
      auVar63._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar63._8_4_ = _UNK_15076b1f8;
      auVar63._12_4_ = _UNK_15076b1fc;
      auVar164._0_4_ =
           ((local_588 * local_588 +
            (float)local_618._0_4_ * (float)local_618._0_4_ +
            (float)local_628._0_4_ * (float)local_628._0_4_) * local_778 +
           (local_598 * local_598 + local_448 * local_448 + local_458 * local_458) * local_7f8 +
           (fVar61 * fVar61 + fVar183 * fVar183 + fVar106 * fVar106) * local_788) *
           (fVar102 + ___xmm_3f8000003f8000003f8000003f800000) + fVar239;
      auVar164._4_4_ =
           ((fStack_584 * fStack_584 +
            (float)local_618._4_4_ * (float)local_618._4_4_ +
            (float)local_628._4_4_ * (float)local_628._4_4_) * fStack_774 +
           (fStack_594 * fStack_594 + fStack_444 * fStack_444 + fStack_454 * fStack_454) *
           fStack_7f4 + (fVar95 * fVar95 + fVar193 * fVar193 + fVar122 * fVar122) * fStack_784) *
           (fVar141 + _UNK_15076b1f4) + fVar240;
      auVar164._8_4_ =
           ((fStack_580 * fStack_580 + fStack_610 * fStack_610 + fStack_620 * fStack_620) *
            fStack_770 +
           (fStack_590 * fStack_590 + fStack_440 * fStack_440 + fStack_450 * fStack_450) *
           fStack_7f0 + (fVar59 * fVar59 + fVar207 * fVar207 + fVar145 * fVar145) * fStack_780) *
           (fVar149 + _UNK_15076b1f8) + fVar233;
      auVar164._12_4_ =
           ((fStack_57c * fStack_57c + fStack_60c * fStack_60c + fStack_61c * fStack_61c) *
            fStack_76c +
           (fStack_58c * fStack_58c + fStack_43c * fStack_43c + fStack_44c * fStack_44c) *
           fStack_7ec + (fVar97 * fVar97 + fVar214 * fVar214 + fVar120 * fVar120) * fStack_77c) *
           (fVar174 + _UNK_15076b1fc) + fVar235;
      auVar110._0_4_ =
           (local_288 - fVar239 * auVar108._0_4_) +
           ((local_588 * local_4b8 +
             (float)local_618._0_4_ * local_4a8 + (float)local_628._0_4_ * local_488 +
            local_598 * fVar126 + local_448 * local_498 + local_458 * local_478) -
           (fVar61 * fVar60 + fVar183 * fVar196 + fVar106 * fVar194)) * fVar102;
      auVar110._4_4_ =
           (fStack_284 - fVar240 * auVar108._12_4_) +
           ((fStack_584 * fStack_4b4 +
             (float)local_618._4_4_ * fStack_4a4 + (float)local_628._4_4_ * fStack_484 +
            fStack_594 * fVar180 + fStack_444 * fStack_494 + fStack_454 * fStack_474) -
           (fVar95 * fVar94 + fVar193 * fVar203 + fVar122 * fVar199)) * fVar141;
      auVar110._8_4_ =
           (fStack_280 - fVar233 * auVar165._8_4_) +
           ((fStack_580 * fStack_4b0 + fStack_610 * fStack_4a0 + fStack_620 * fStack_480 +
            fStack_590 * fVar181 + fStack_440 * fStack_490 + fStack_450 * fStack_470) -
           (fVar59 * fVar98 + fVar207 * fVar205 + fVar145 * fVar204)) * fVar149;
      auVar110._12_4_ =
           (fStack_27c - fVar235 * pfVar2[1]) +
           ((fStack_57c * fStack_4ac + fStack_60c * fStack_49c + fStack_61c * fStack_47c +
            fStack_58c * fVar186 + fStack_43c * fStack_48c + fStack_44c * fStack_46c) -
           (fVar97 * fVar93 + fVar214 * fVar212 + fVar120 * fVar211)) * fVar174;
      auVar188 = divps(auVar110,auVar164);
      fVar239 = (float)(-(uint)(param_9 <= fVar215) & auVar188._0_4_);
      fVar240 = (float)(-(uint)(param_9 <= fVar217) & auVar188._4_4_);
      fVar233 = (float)(-(uint)(param_9 <= fVar218) & auVar188._8_4_);
      fVar235 = (float)(-(uint)(param_9 <= fVar234) & auVar188._12_4_);
      auVar189._0_4_ = param_8 * fVar219 * param_8;
      auVar189._4_4_ = param_8 * fVar236 * param_8;
      auVar189._8_4_ = param_8 * fVar238 * param_8;
      auVar189._12_4_ = param_8 * fVar232 * param_8;
      auVar64 = divps(auVar63,auVar189);
      fVar234 = fVar123 + fVar125;
      fVar95 = fVar142 + fVar144;
      fVar97 = fVar146 + fVar148;
      fVar102 = fVar150 + fVar152;
      fVar141 = local_608 + local_5e8;
      fVar145 = fStack_604 + fStack_5e4;
      fVar149 = fStack_600 + fStack_5e0;
      fVar120 = fStack_5fc + fStack_5dc;
      fVar174 = fVar124 + local_5d8;
      fVar183 = fVar143 + fStack_5d4;
      fVar193 = fVar147 + fStack_5d0;
      fVar207 = fVar151 + fStack_5cc;
      auVar111._8_4_ = fVar238;
      auVar111._12_4_ = fVar232;
      auVar188 = divps(auVar111,_local_5b8);
      auVar188 = sqrtps(auVar188,auVar188);
      fVar214 = auVar64._0_4_;
      fVar215 = auVar64._4_4_;
      fVar217 = auVar64._8_4_;
      fVar218 = auVar64._12_4_;
      fVar61 = auVar188._0_4_ * fVar121 * fVar214 * param_8;
      fVar59 = auVar188._4_4_ * fVar121 * fVar215 * param_8;
      fVar106 = auVar188._8_4_ * fVar121 * fVar217 * param_8;
      fVar122 = auVar188._12_4_ * fVar121 * fVar218 * param_8;
      auVar66._4_4_ = _UNK_15076b1f4;
      auVar66._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar66._8_4_ = _UNK_15076b1f8;
      auVar66._12_4_ = _UNK_15076b1fc;
      auVar128._0_4_ =
           ((local_5d8 * local_5d8 + local_5e8 * local_5e8 + fVar125 * fVar125) * local_778 +
           (fVar124 * fVar124 + local_608 * local_608 + fVar123 * fVar123) * local_7f8 +
           (fVar174 * fVar174 + fVar141 * fVar141 + fVar234 * fVar234) * local_788) *
           (fVar61 + ___xmm_3f8000003f8000003f8000003f800000) + fVar214;
      auVar128._4_4_ =
           ((fStack_5d4 * fStack_5d4 + fStack_5e4 * fStack_5e4 + fVar144 * fVar144) * fStack_774 +
           (fVar143 * fVar143 + fStack_604 * fStack_604 + fVar142 * fVar142) * fStack_7f4 +
           (fVar183 * fVar183 + fVar145 * fVar145 + fVar95 * fVar95) * fStack_784) *
           (fVar59 + _UNK_15076b1f4) + fVar215;
      auVar128._8_4_ =
           ((fStack_5d0 * fStack_5d0 + fStack_5e0 * fStack_5e0 + fVar148 * fVar148) * fStack_770 +
           (fVar147 * fVar147 + fStack_600 * fStack_600 + fVar146 * fVar146) * fStack_7f0 +
           (fVar193 * fVar193 + fVar149 * fVar149 + fVar97 * fVar97) * fStack_780) *
           (fVar106 + _UNK_15076b1f8) + fVar217;
      auVar128._12_4_ =
           ((fStack_5cc * fStack_5cc + fStack_5dc * fStack_5dc + fVar152 * fVar152) * fStack_76c +
           (fVar151 * fVar151 + fStack_5fc * fStack_5fc + fVar150 * fVar150) * fStack_7ec +
           (fVar207 * fVar207 + fVar120 * fVar120 + fVar102 * fVar102) * fStack_77c) *
           (fVar122 + _UNK_15076b1fc) + fVar218;
      auVar112._0_4_ =
           (local_238 - fVar214 * local_5a8) +
           ((local_5d8 * local_4b8 + local_5e8 * local_4a8 + fVar125 * local_488 +
            fVar124 * fVar126 + local_608 * local_498 + fVar123 * local_478) -
           (fVar174 * fVar60 + fVar141 * fVar196 + fVar234 * fVar194)) * fVar61;
      auVar112._4_4_ =
           (fStack_234 - fVar215 * fStack_5a4) +
           ((fStack_5d4 * fStack_4b4 + fStack_5e4 * fStack_4a4 + fVar144 * fStack_484 +
            fVar143 * fVar180 + fStack_604 * fStack_494 + fVar142 * fStack_474) -
           (fVar183 * fVar94 + fVar145 * fVar203 + fVar95 * fVar199)) * fVar59;
      auVar112._8_4_ =
           (fStack_230 - fVar217 * fStack_5a0) +
           ((fStack_5d0 * fStack_4b0 + fStack_5e0 * fStack_4a0 + fVar148 * fStack_480 +
            fVar147 * fVar181 + fStack_600 * fStack_490 + fVar146 * fStack_470) -
           (fVar193 * fVar98 + fVar149 * fVar205 + fVar97 * fVar204)) * fVar106;
      auVar112._12_4_ =
           (fStack_22c - fVar218 * fStack_59c) +
           ((fStack_5cc * fStack_4ac + fStack_5dc * fStack_49c + fVar152 * fStack_47c +
            fVar151 * fVar186 + fStack_5fc * fStack_48c + fVar150 * fStack_46c) -
           (fVar207 * fVar93 + fVar120 * fVar212 + fVar102 * fVar211)) * fVar122;
      auVar188 = divps(auVar112,auVar128);
      fVar218 = (float)(-(uint)(param_9 <= fVar219) & auVar188._0_4_);
      fVar219 = (float)(-(uint)(param_9 <= fVar236) & auVar188._4_4_);
      fVar236 = (float)(-(uint)(param_9 <= fVar238) & auVar188._8_4_);
      fVar238 = (float)(-(uint)(param_9 <= fVar232) & auVar188._12_4_);
      auVar154._4_4_ = fStack_464;
      auVar154._0_4_ = local_468;
      auVar154._8_4_ = fStack_460;
      auVar154._12_4_ = fStack_45c;
      _local_5b8 = divps(auVar154,_local_5b8);
      auVar220._0_4_ = param_8 * local_468 * param_8;
      auVar220._4_4_ = param_8 * fStack_464 * param_8;
      auVar220._8_4_ = param_8 * fStack_460 * param_8;
      auVar220._12_4_ = param_8 * fStack_45c * param_8;
      auVar64 = divps(auVar66,auVar220);
      fVar59 = local_248 + local_258;
      fVar106 = fStack_244 + fStack_254;
      fVar122 = fStack_240 + fStack_250;
      fVar145 = fStack_23c + fStack_24c;
      fVar120 = fVar161 + local_278;
      fVar174 = fVar170 + fStack_274;
      fVar183 = fVar172 + fStack_270;
      fVar193 = fVar173 + fStack_26c;
      fVar234 = fVar222 + local_268;
      fVar232 = fVar225 + fStack_264;
      fVar61 = fVar227 + fStack_260;
      fVar95 = fVar229 + fStack_25c;
      auVar113._0_4_ =
           (fVar222 * fVar222 + fVar161 * fVar161 + local_248 * local_248) * local_7f8 +
           (fVar234 * fVar234 + fVar120 * fVar120 + fVar59 * fVar59) * local_788;
      auVar113._4_4_ =
           (fVar225 * fVar225 + fVar170 * fVar170 + fStack_244 * fStack_244) * fStack_7f4 +
           (fVar232 * fVar232 + fVar174 * fVar174 + fVar106 * fVar106) * fStack_784;
      auVar113._8_4_ =
           (fVar227 * fVar227 + fVar172 * fVar172 + fStack_240 * fStack_240) * fStack_7f0 +
           (fVar61 * fVar61 + fVar183 * fVar183 + fVar122 * fVar122) * fStack_780;
      auVar113._12_4_ =
           (fVar229 * fVar229 + fVar173 * fVar173 + fStack_23c * fStack_23c) * fStack_7ec +
           (fVar95 * fVar95 + fVar193 * fVar193 + fVar145 * fVar145) * fStack_77c;
      auVar188 = sqrtps(auVar113,_local_5b8);
      fVar207 = auVar64._0_4_;
      fVar214 = auVar64._4_4_;
      fVar215 = auVar64._8_4_;
      fVar217 = auVar64._12_4_;
      fVar97 = auVar188._0_4_ * fVar121 * fVar207 * param_8;
      fVar102 = auVar188._4_4_ * fVar121 * fVar214 * param_8;
      fVar141 = auVar188._8_4_ * fVar121 * fVar215 * param_8;
      fVar149 = auVar188._12_4_ * fVar121 * fVar217 * param_8;
      auVar67._0_4_ =
           ((local_268 * local_268 + local_278 * local_278 + local_258 * local_258) * local_778 +
           auVar113._0_4_) * (fVar97 + ___xmm_3f8000003f8000003f8000003f800000) + fVar207;
      auVar67._4_4_ =
           ((fStack_264 * fStack_264 + fStack_274 * fStack_274 + fStack_254 * fStack_254) *
            fStack_774 + auVar113._4_4_) * (fVar102 + _UNK_15076b1f4) + fVar214;
      auVar67._8_4_ =
           ((fStack_260 * fStack_260 + fStack_270 * fStack_270 + fStack_250 * fStack_250) *
            fStack_770 + auVar113._8_4_) * (fVar141 + _UNK_15076b1f8) + fVar215;
      auVar67._12_4_ =
           ((fStack_25c * fStack_25c + fStack_26c * fStack_26c + fStack_24c * fStack_24c) *
            fStack_76c + auVar113._12_4_) * (fVar149 + _UNK_15076b1fc) + fVar217;
      local_298._0_4_ = auVar65._0_4_;
      local_298._4_4_ = auVar65._4_4_;
      auVar114._0_4_ =
           (local_228 - fVar207 * (float)local_298._0_4_) +
           ((local_4b8 * local_268 + local_4a8 * local_278 + local_488 * local_258 +
            fVar126 * fVar222 + local_498 * fVar161 + local_478 * local_248) -
           (fVar60 * fVar234 + fVar196 * fVar120 + fVar194 * fVar59)) * fVar97;
      auVar114._4_4_ =
           (fStack_224 - fVar214 * (float)local_298._4_4_) +
           ((fStack_4b4 * fStack_264 + fStack_4a4 * fStack_274 + fStack_484 * fStack_254 +
            fVar180 * fVar225 + fStack_494 * fVar170 + fStack_474 * fStack_244) -
           (fVar94 * fVar232 + fVar203 * fVar174 + fVar199 * fVar106)) * fVar102;
      auVar114._8_4_ =
           (fStack_220 - fVar215 * fVar182) +
           ((fStack_4b0 * fStack_260 + fStack_4a0 * fStack_270 + fStack_480 * fStack_250 +
            fVar181 * fVar227 + fStack_490 * fVar172 + fStack_470 * fStack_240) -
           (fVar98 * fVar61 + fVar205 * fVar183 + fVar204 * fVar122)) * fVar141;
      auVar114._12_4_ =
           (fStack_21c - fVar217 * fVar184) +
           ((fStack_4ac * fStack_25c + fStack_49c * fStack_26c + fStack_47c * fStack_24c +
            fVar186 * fVar229 + fStack_48c * fVar173 + fStack_46c * fStack_23c) -
           (fVar93 * fVar95 + fVar212 * fVar193 + fVar211 * fVar145)) * fVar149;
      auVar188 = divps(auVar114,auVar67);
      fVar98 = (float)(-(uint)(param_9 <= local_468) & auVar188._0_4_);
      fVar59 = (float)(-(uint)(param_9 <= fStack_464) & auVar188._4_4_);
      fVar93 = (float)(-(uint)(param_9 <= fStack_460) & auVar188._8_4_);
      fVar97 = (float)(-(uint)(param_9 <= fStack_45c) & auVar188._12_4_);
      auVar115._0_8_ = CONCAT44(auVar108._12_4_ + fVar240,auVar108._0_4_ + fVar239);
      auVar115._8_4_ = auVar165._8_4_ + fVar233;
      auVar115._12_4_ = pfVar2[1] + fVar235;
      auVar200._0_4_ = local_5a8 + fVar218;
      auVar200._4_4_ = fStack_5a4 + fVar219;
      auVar200._8_4_ = fStack_5a0 + fVar236;
      auVar200._12_4_ = fStack_59c + fVar238;
      auVar166._0_4_ = (float)local_298._0_4_ + fVar98;
      auVar166._4_4_ = (float)local_298._4_4_ + fVar59;
      auVar166._8_4_ = fVar182 + fVar93;
      auVar166._12_4_ = fVar184 + fVar97;
      auVar108._8_4_ = auVar115._8_4_;
      auVar108._0_8_ = auVar115._0_8_;
      auVar108._12_4_ = auVar115._12_4_;
      auVar108 = insertps(auVar108,auVar200,0x30);
      auVar108 = insertps(auVar108,auVar166,0x20);
      puVar5 = (undefined4 *)(param_7 + -0x20 + lVar53);
      *puVar5 = auVar108._0_4_;
      puVar5[1] = auVar108._12_4_;
      puVar5[2] = auVar108._8_4_;
      puVar5[3] = auVar108._4_4_;
      auVar165._4_4_ = auVar200._8_4_;
      auVar165._0_4_ = auVar200._4_4_;
      auVar165._8_4_ = auVar166._0_4_;
      auVar165._12_4_ = auVar166._4_4_;
      auVar108 = blendps(auVar165,auVar115,4);
      puVar5 = (undefined4 *)(param_7 + -0x10 + lVar53);
      *puVar5 = auVar108._0_4_;
      puVar5[1] = auVar108._12_4_;
      puVar5[2] = auVar108._8_4_;
      puVar5[3] = auVar108._4_4_;
      pfVar2 = (float *)(param_7 + lVar53);
      *pfVar2 = auVar166._8_4_;
      pfVar2[1] = auVar115._12_4_;
      pfVar2[2] = auVar200._12_4_;
      pfVar2[3] = auVar166._12_4_;
      fVar234 = local_248 * fVar98 + fVar123 * fVar218 + local_458 * fVar239;
      fVar232 = fStack_244 * fVar59 + fVar142 * fVar219 + fStack_454 * fVar240;
      fVar182 = fStack_240 * fVar93 + fVar146 * fVar236 + fStack_450 * fVar233;
      fVar184 = fStack_23c * fVar97 + fVar150 * fVar238 + fStack_44c * fVar235;
      fVar145 = fVar161 * fVar98 + local_608 * fVar218 + local_448 * fVar239;
      fVar149 = fVar170 * fVar59 + fStack_604 * fVar219 + fStack_444 * fVar240;
      fVar120 = fVar172 * fVar93 + fStack_600 * fVar236 + fStack_440 * fVar233;
      fVar174 = fVar173 * fVar97 + fStack_5fc * fVar238 + fStack_43c * fVar235;
      fVar60 = fVar222 * fVar98 + fVar124 * fVar218 + local_598 * fVar239;
      fVar61 = fVar225 * fVar59 + fVar143 * fVar219 + fStack_594 * fVar240;
      fVar94 = fVar227 * fVar93 + fVar147 * fVar236 + fStack_590 * fVar233;
      fVar95 = fVar229 * fVar97 + fVar151 * fVar238 + fStack_58c * fVar235;
      fVar106 = local_258 * fVar98 + fVar125 * fVar218 + (float)local_628._0_4_ * fVar239;
      fVar102 = fStack_254 * fVar59 + fVar144 * fVar219 + (float)local_628._4_4_ * fVar240;
      fVar122 = fStack_250 * fVar93 + fVar148 * fVar236 + fStack_620 * fVar233;
      fVar141 = fStack_24c * fVar97 + fVar152 * fVar238 + fStack_61c * fVar235;
      fVar123 = local_278 * fVar98 + local_5e8 * fVar218 + (float)local_618._0_4_ * fVar239;
      fVar124 = fStack_274 * fVar59 + fStack_5e4 * fVar219 + (float)local_618._4_4_ * fVar240;
      fVar125 = fStack_270 * fVar93 + fStack_5e0 * fVar236 + fStack_610 * fVar233;
      fVar126 = fStack_26c * fVar97 + fStack_5dc * fVar238 + fStack_60c * fVar235;
      fVar98 = fVar98 * local_268 + fVar218 * local_5d8 + fVar239 * local_588;
      fVar59 = fVar59 * fStack_264 + fVar219 * fStack_5d4 + fVar240 * fStack_584;
      fVar93 = fVar93 * fStack_260 + fVar236 * fStack_5d0 + fVar233 * fStack_580;
      fVar97 = fVar97 * fStack_25c + fVar238 * fStack_5cc + fVar235 * fStack_57c;
      auVar68._4_4_ = -(uint)(0.0 < fStack_784);
      auVar68._0_4_ = -(uint)(0.0 < local_788);
      auVar68._8_4_ = -(uint)(0.0 < fStack_780);
      auVar68._12_4_ = -(uint)(0.0 < fStack_77c);
      iVar49 = movmskps(iVar49,auVar68);
      if (iVar49 != 0) {
        bVar48 = (char)((char)iVar49 << 4) >> 4;
        fVar107 = fVar107 + (fVar234 + fVar106) * local_788;
        auVar69._4_4_ = fVar242 + (fVar232 + fVar102) * fStack_784;
        auVar69._0_4_ = fVar107;
        auVar69._8_4_ = fVar245 + (fVar182 + fVar122) * fStack_780;
        auVar69._12_4_ = fVar162 + (fVar184 + fVar141) * fStack_77c;
        if ((bVar48 & 1) != 0) {
          *(float *)(param_1 + local_550) = fVar107;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar69,1);
          *(undefined8 *)(param_1 + local_548) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar69,2);
          *(undefined8 *)(param_1 + local_540) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar69,3);
          *(undefined8 *)(param_1 + lVar40) = uVar19;
        }
        fVar107 = (float)local_758._0_4_ + (fVar145 + fVar123) * local_788;
        auVar70._4_4_ = (float)local_758._4_4_ + (fVar149 + fVar124) * fStack_784;
        auVar70._0_4_ = fVar107;
        auVar70._8_4_ = fStack_750 + (fVar120 + fVar125) * fStack_780;
        auVar70._12_4_ = fStack_74c + (fVar174 + fVar126) * fStack_77c;
        if ((bVar48 & 1) != 0) {
          *(float *)(param_1 + 4 + local_550) = fVar107;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar70,1);
          *(undefined8 *)(param_1 + 4 + local_548) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar70,2);
          *(undefined8 *)(param_1 + 4 + local_540) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar70,3);
          *(undefined8 *)(param_1 + 4 + lVar40) = uVar19;
        }
        auVar71._0_4_ = fVar241 + local_788 * (fVar60 + fVar98);
        auVar71._4_4_ = fVar244 + fStack_784 * (fVar61 + fVar59);
        auVar71._8_4_ = fVar246 + fStack_780 * (fVar94 + fVar93);
        auVar71._12_4_ = fVar248 + fStack_77c * (fVar95 + fVar97);
        if ((bVar48 & 1) != 0) {
          *(float *)(param_1 + 8 + local_550) = auVar71._0_4_;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar71,1);
          *(undefined8 *)(param_1 + 8 + local_548) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar71,2);
          *(undefined8 *)(param_1 + 8 + local_540) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar71,3);
          *(undefined8 *)(param_1 + 8 + lVar40) = uVar19;
        }
        if ((bVar48 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_550) = uVar7;
        }
        if ((bVar48 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_548) = uVar8;
        }
        if ((bVar48 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_540) = uVar9;
        }
        iVar42 = iVar58;
        iVar37 = iVar92;
        if ((char)bVar48 < '\0') {
          *(uint *)(param_1 + 0xc + lVar40) = uVar10;
        }
      }
      auVar72._4_4_ = -(uint)(0.0 < fStack_7f4);
      auVar72._0_4_ = -(uint)(0.0 < local_7f8);
      auVar72._8_4_ = -(uint)(0.0 < fStack_7f0);
      auVar72._12_4_ = -(uint)(0.0 < fStack_7ec);
      iVar49 = movmskps(iVar42,auVar72);
      if (iVar49 != 0) {
        bVar48 = (char)((char)iVar49 << 4) >> 4;
        auVar167._0_4_ = fVar221 - fVar234 * local_7f8;
        auVar167._4_4_ = fVar224 - fVar232 * fStack_7f4;
        auVar167._8_4_ = fVar226 - fVar182 * fStack_7f0;
        auVar167._12_4_ = fVar228 - fVar184 * fStack_7ec;
        if ((bVar48 & 1) != 0) {
          *(float *)(param_1 + local_538) = auVar167._0_4_;
        }
        if ((bVar48 & 2) == 0) {
          if ((bVar48 & 4) == 0) goto LAB_1409c27a8;
LAB_1409c2a82:
          uVar19 = extractps(auVar167,2);
          *(undefined8 *)(param_1 + local_528) = uVar19;
          if ((char)bVar48 < '\0') goto LAB_1409c2a92;
LAB_1409c27b1:
          auVar73._0_4_ = fVar99 - fVar145 * local_7f8;
          auVar73._4_4_ = fVar100 - fVar149 * fStack_7f4;
          auVar73._8_4_ = fVar101 - fVar120 * fStack_7f0;
          auVar73._12_4_ = fVar171 - fVar174 * fStack_7ec;
        }
        else {
          uVar19 = extractps(auVar167,1);
          *(undefined8 *)(param_1 + local_530) = uVar19;
          if ((bVar48 & 4) != 0) goto LAB_1409c2a82;
LAB_1409c27a8:
          if (-1 < (char)bVar48) goto LAB_1409c27b1;
LAB_1409c2a92:
          uVar19 = extractps(auVar167,3);
          *(undefined8 *)(param_1 + lVar47) = uVar19;
          auVar73._0_4_ = fVar99 - fVar145 * local_7f8;
          auVar73._4_4_ = fVar100 - fVar149 * fStack_7f4;
          auVar73._8_4_ = fVar101 - fVar120 * fStack_7f0;
          auVar73._12_4_ = fVar171 - fVar174 * fStack_7ec;
        }
        if ((bVar48 & 1) != 0) {
          *(int *)(param_1 + 4 + local_538) = auVar73._0_4_;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar73,1);
          *(undefined8 *)(param_1 + 4 + local_530) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar73,2);
          *(undefined8 *)(param_1 + 4 + local_528) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar73,3);
          *(undefined8 *)(param_1 + 4 + lVar47) = uVar19;
        }
        auVar176._0_4_ = local_6d8 - local_7f8 * fVar60;
        auVar176._4_4_ = fStack_6d4 - fStack_7f4 * fVar61;
        auVar176._8_4_ = fStack_6d0 - fStack_7f0 * fVar94;
        auVar176._12_4_ = fStack_6cc - fStack_7ec * fVar95;
        if ((bVar48 & 1) != 0) {
          *(float *)(param_1 + 8 + local_538) = auVar176._0_4_;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar176,1);
          *(undefined8 *)(param_1 + 8 + local_530) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar176,2);
          *(undefined8 *)(param_1 + 8 + local_528) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar176,3);
          *(undefined8 *)(param_1 + 8 + lVar47) = uVar19;
        }
        if ((bVar48 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_538) = uVar11;
        }
        if ((bVar48 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_530) = uVar12;
        }
        if ((bVar48 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_528) = uVar13;
        }
        iVar37 = iVar96;
        if ((char)bVar48 < '\0') {
          *(uint *)(param_1 + 0xc + lVar47) = uVar14;
        }
      }
      auVar74._4_4_ = -(uint)(0.0 < fStack_774);
      auVar74._0_4_ = -(uint)(0.0 < local_778);
      auVar74._8_4_ = -(uint)(0.0 < fStack_770);
      auVar74._12_4_ = -(uint)(0.0 < fStack_76c);
      iVar37 = movmskps(iVar37,auVar74);
      if (iVar37 != 0) {
        bVar48 = (char)((char)iVar37 << 4) >> 4;
        auVar156._0_4_ = fVar195 - fVar106 * local_778;
        auVar156._4_4_ = fVar197 - fVar102 * fStack_774;
        auVar156._8_4_ = fVar198 - fVar122 * fStack_770;
        auVar156._12_4_ = fVar104 - fVar141 * fStack_76c;
        if ((bVar48 & 1) == 0) {
          if ((bVar48 & 2) == 0) goto LAB_1409c2885;
LAB_1409c2bec:
          uVar19 = extractps(auVar156,1);
          *(undefined8 *)(param_1 + local_518) = uVar19;
          if ((bVar48 & 4) != 0) goto LAB_1409c2bfd;
LAB_1409c288f:
          if (-1 < (char)bVar48) goto LAB_1409c2897;
LAB_1409c2c0d:
          uVar19 = extractps(auVar156,3);
          *(undefined8 *)(param_1 + lVar26) = uVar19;
          auVar116._0_4_ = fVar185 - fVar123 * local_778;
          auVar116._4_4_ = fVar62 - fVar124 * fStack_774;
          auVar116._8_4_ = fVar187 - fVar125 * fStack_770;
          auVar116._12_4_ = fVar105 - fVar126 * fStack_76c;
          if ((bVar48 & 1) != 0) goto LAB_1409c2c2e;
LAB_1409c28a9:
          if ((bVar48 & 2) == 0) goto LAB_1409c28b3;
LAB_1409c2c3f:
          uVar19 = extractps(auVar116,1);
          *(undefined8 *)(param_1 + 4 + local_518) = uVar19;
          if ((bVar48 & 4) != 0) goto LAB_1409c2c51;
LAB_1409c28bd:
          if (-1 < (char)bVar48) goto LAB_1409c28c5;
LAB_1409c2c62:
          uVar19 = extractps(auVar116,3);
          *(undefined8 *)(param_1 + 4 + lVar26) = uVar19;
          auVar75._0_4_ = fVar206 - local_778 * fVar98;
          auVar75._4_4_ = fVar213 - fStack_774 * fVar59;
          auVar75._8_4_ = fVar247 - fStack_770 * fVar93;
          auVar75._12_4_ = fVar231 - fStack_76c * fVar97;
        }
        else {
          *(float *)(param_1 + local_520) = auVar156._0_4_;
          if ((bVar48 & 2) != 0) goto LAB_1409c2bec;
LAB_1409c2885:
          if ((bVar48 & 4) == 0) goto LAB_1409c288f;
LAB_1409c2bfd:
          uVar19 = extractps(auVar156,2);
          *(undefined8 *)(param_1 + local_510) = uVar19;
          if ((char)bVar48 < '\0') goto LAB_1409c2c0d;
LAB_1409c2897:
          auVar116._0_4_ = fVar185 - fVar123 * local_778;
          auVar116._4_4_ = fVar62 - fVar124 * fStack_774;
          auVar116._8_4_ = fVar187 - fVar125 * fStack_770;
          auVar116._12_4_ = fVar105 - fVar126 * fStack_76c;
          if ((bVar48 & 1) == 0) goto LAB_1409c28a9;
LAB_1409c2c2e:
          *(int *)(param_1 + 4 + local_520) = auVar116._0_4_;
          if ((bVar48 & 2) != 0) goto LAB_1409c2c3f;
LAB_1409c28b3:
          if ((bVar48 & 4) == 0) goto LAB_1409c28bd;
LAB_1409c2c51:
          uVar19 = extractps(auVar116,2);
          *(undefined8 *)(param_1 + 4 + local_510) = uVar19;
          if ((char)bVar48 < '\0') goto LAB_1409c2c62;
LAB_1409c28c5:
          auVar75._0_4_ = fVar206 - local_778 * fVar98;
          auVar75._4_4_ = fVar213 - fStack_774 * fVar59;
          auVar75._8_4_ = fVar247 - fStack_770 * fVar93;
          auVar75._12_4_ = fVar231 - fStack_76c * fVar97;
        }
        if ((bVar48 & 1) != 0) {
          *(int *)(param_1 + 8 + local_520) = auVar75._0_4_;
        }
        if ((bVar48 & 2) != 0) {
          uVar19 = extractps(auVar75,1);
          *(undefined8 *)(param_1 + 8 + local_518) = uVar19;
        }
        if ((bVar48 & 4) != 0) {
          uVar19 = extractps(auVar75,2);
          *(undefined8 *)(param_1 + 8 + local_510) = uVar19;
        }
        if ((char)bVar48 < '\0') {
          uVar19 = extractps(auVar75,3);
          *(undefined8 *)(param_1 + 8 + lVar26) = uVar19;
        }
        if ((bVar48 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_520) = uVar15;
        }
        if ((bVar48 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_518) = uVar16;
        }
        if ((bVar48 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_510) = uVar17;
        }
        if ((char)bVar48 < '\0') {
          *(uint *)(param_1 + 0xc + lVar26) = uVar18;
        }
      }
      lVar53 = lVar53 + 0x30;
      pfVar57 = pfVar57 + 0x10;
      uVar33 = uVar33 + 4;
      local_298 = auVar127;
    } while ((int)uVar33 < (int)(uVar36 & 0xfffffffc));
  }
  if ((int)param_14 <= (int)uVar33) {
    return;
  }
  auVar131._0_4_ =
       -(uint)((int)(uVar33 | (uint)__xmm_00000003000000020000000100000000) < (int)param_14);
  auVar131._4_4_ =
       -(uint)((int)(uVar33 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_14);
  auVar131._8_4_ = -(uint)((int)(uVar33 | _UNK_150631e08) < (int)param_14);
  auVar131._12_4_ = -(uint)((int)(uVar33 | _UNK_150631e0c) < (int)param_14);
  uVar27 = (ulonglong)uVar33;
  pauVar4 = (undefined1 (*) [16])(param_3 + uVar27 * 0xc);
  iVar37 = movmskps((int)param_3,auVar131);
  bVar48 = (char)((char)iVar37 << 4) >> 4;
  if (iVar37 == 0xf) {
    auVar108 = *pauVar4;
    auVar165 = pauVar4[1];
    uVar103 = auVar165._0_4_;
    auVar202._4_4_ = uVar103;
    auVar202._0_4_ = uVar103;
    auVar202._8_4_ = uVar103;
    auVar202._12_4_ = uVar103;
    uVar103 = auVar108._12_4_;
    auVar209._0_8_ = CONCAT44(uVar103,auVar108._0_4_);
    auVar209._8_4_ = auVar108._4_4_;
    auVar209._12_4_ = uVar103;
    auVar188 = pblendw(auVar202,auVar209,0x3f);
    auVar191._0_8_ = auVar108._8_8_;
    auVar191._8_4_ = auVar108._8_4_;
    auVar191._12_4_ = uVar103;
    auVar108 = pblendw(auVar191,auVar165,0xc);
    auVar117._0_8_ = CONCAT44(*(undefined4 *)(pauVar4[2] + 4),auVar165._8_4_);
    auVar117._8_4_ = auVar165._12_4_;
    auVar117._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
    auVar208._8_8_ = auVar117._0_8_;
    auVar208._0_8_ = auVar209._0_8_;
    auVar201._8_8_ = auVar117._8_8_;
    auVar201._0_8_ = auVar188._8_8_;
    auVar190._0_8_ = auVar108._0_8_;
    auVar190._8_4_ = *(undefined4 *)pauVar4[2];
    auVar190._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
  }
  else {
    auVar76._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar131._0_4_;
    auVar76._4_4_ = _UNK_150b50da4 & auVar131._4_4_;
    auVar76._8_4_ = _UNK_150b50da8 & auVar131._8_4_;
    auVar76._12_4_ = _UNK_150b50dac & auVar131._12_4_;
    lVar53 = extractps(auVar76,1);
    lVar26 = extractps(auVar76,2);
    lVar38 = extractps(auVar76,3);
    auVar208._4_4_ = *(undefined4 *)(*pauVar4 + lVar53);
    auVar208._0_4_ = *(undefined4 *)*pauVar4;
    auVar208._12_4_ = *(undefined4 *)(*pauVar4 + lVar38);
    auVar208._8_4_ = *(undefined4 *)(*pauVar4 + lVar26);
    auVar108 = ___xmm_000000280000001c0000001000000004 & auVar131;
    auVar201._4_4_ = *(undefined4 *)(*pauVar4 + auVar108._4_4_);
    auVar201._0_4_ = *(undefined4 *)(*pauVar4 + auVar108._0_4_);
    auVar201._12_4_ = *(undefined4 *)(*pauVar4 + auVar108._12_4_);
    auVar201._8_4_ = *(undefined4 *)(*pauVar4 + auVar108._8_4_);
    auVar108 = ___xmm_0000002c000000200000001400000008 & auVar131;
    auVar190._4_4_ = *(undefined4 *)(*pauVar4 + auVar108._4_4_);
    auVar190._0_4_ = *(undefined4 *)(*pauVar4 + auVar108._0_4_);
    auVar190._12_4_ = *(undefined4 *)(*pauVar4 + auVar108._12_4_);
    auVar190._8_4_ = *(undefined4 *)(*pauVar4 + auVar108._8_4_);
  }
  local_578._0_4_ = auVar208._0_4_ << 4;
  local_578._4_4_ = auVar208._4_4_ << 4;
  local_578._8_4_ = auVar208._8_4_ << 4;
  local_578._12_4_ = auVar208._12_4_ << 4;
  auVar108 = auVar131 & local_578;
  pfVar57 = (float *)(auVar108._0_4_ + param_1);
  if ((bVar48 & 1) != 0) {
    local_658 = *pfVar57;
  }
  lVar53 = (longlong)auVar108._4_4_;
  if ((bVar48 & 2) != 0) {
    fStack_654 = *(float *)(param_1 + lVar53);
  }
  iVar37 = auVar108._12_4_;
  auVar165 = ___xmm_00000004000000040000000400000004 & auVar131;
  uVar36 = auVar165._4_4_;
  if ((bVar48 & 4) != 0) {
    fStack_650 = *(float *)(param_1 + auVar108._8_4_);
  }
  if ((char)bVar48 < '\0') {
    fStack_64c = *(float *)(param_1 + iVar37);
  }
  if ((bVar48 & 1) != 0) {
    local_648 = *(float *)((ulonglong)auVar165._0_4_ + (longlong)pfVar57);
  }
  if ((bVar48 & 2) != 0) {
    fStack_644 = *(float *)((ulonglong)uVar36 + lVar53 + param_1);
  }
  uVar51 = (ulonglong)auVar165._8_4_;
  uVar55 = (ulonglong)auVar165._0_4_;
  auVar188 = ___xmm_00000008000000080000000800000008 & auVar131;
  lVar26 = auVar108._8_4_ + param_1;
  uVar34 = (ulonglong)auVar165._12_4_;
  if ((bVar48 & 4) != 0) {
    fStack_640 = *(float *)(uVar51 + lVar26);
  }
  if ((char)bVar48 < '\0') {
    fStack_63c = *(float *)(uVar34 + iVar37 + param_1);
  }
  if ((bVar48 & 1) != 0) {
    local_638 = *(float *)((ulonglong)auVar188._0_4_ + (longlong)pfVar57);
  }
  uVar50 = (ulonglong)auVar188._4_4_;
  uVar41 = (ulonglong)auVar188._0_4_;
  lVar38 = iVar37 + param_1;
  auVar237._0_4_ = auVar201._0_4_ << 4;
  auVar237._4_4_ = auVar201._4_4_ << 4;
  auVar237._8_4_ = auVar201._8_4_ << 4;
  auVar237._12_4_ = auVar201._12_4_ << 4;
  uVar28 = (ulonglong)auVar188._8_4_;
  if ((bVar48 & 2) != 0) {
    fStack_634 = *(float *)(uVar50 + lVar53 + param_1);
  }
  auVar108 = auVar131 & auVar237;
  uVar29 = (ulonglong)auVar188._12_4_;
  if ((bVar48 & 4) != 0) {
    fStack_630 = *(float *)(uVar28 + lVar26);
  }
  if ((char)bVar48 < '\0') {
    fStack_62c = *(float *)(uVar29 + lVar38);
  }
  lVar43 = (longlong)auVar108._0_4_;
  if ((bVar48 & 1) != 0) {
    local_688 = *(float *)(param_1 + lVar43);
  }
  lVar54 = (longlong)auVar108._4_4_;
  if ((bVar48 & 2) != 0) {
    fStack_684 = *(float *)(param_1 + lVar54);
  }
  if ((bVar48 & 4) != 0) {
    fStack_680 = *(float *)(param_1 + auVar108._8_4_);
  }
  if ((char)bVar48 < '\0') {
    fStack_67c = *(float *)(param_1 + auVar108._12_4_);
  }
  if ((bVar48 & 1) != 0) {
    local_678 = *(float *)(uVar55 + lVar43 + param_1);
  }
  if ((bVar48 & 2) != 0) {
    fStack_674 = *(float *)((ulonglong)uVar36 + lVar54 + param_1);
  }
  lVar40 = auVar108._8_4_ + param_1;
  if ((bVar48 & 4) != 0) {
    fStack_670 = *(float *)(uVar51 + lVar40);
  }
  lVar44 = auVar108._12_4_ + param_1;
  if ((char)bVar48 < '\0') {
    fStack_66c = *(float *)(uVar34 + lVar44);
  }
  if ((bVar48 & 1) != 0) {
    local_668 = *(float *)(uVar41 + lVar43 + param_1);
  }
  local_568._0_4_ = auVar190._0_4_ << 4;
  local_568._4_4_ = auVar190._4_4_ << 4;
  local_568._8_4_ = auVar190._8_4_ << 4;
  local_568._12_4_ = auVar190._12_4_ << 4;
  if ((bVar48 & 2) != 0) {
    fStack_664 = *(float *)(uVar50 + lVar54 + param_1);
  }
  auVar108 = auVar131 & local_568;
  if ((bVar48 & 4) != 0) {
    fStack_660 = *(float *)(uVar28 + lVar40);
  }
  if ((char)bVar48 < '\0') {
    fStack_65c = *(float *)(uVar29 + lVar44);
  }
  lVar47 = (longlong)auVar108._0_4_;
  if ((bVar48 & 1) != 0) {
    local_6b8 = *(float *)(param_1 + lVar47);
  }
  lVar35 = (longlong)auVar108._4_4_;
  if ((bVar48 & 2) != 0) {
    fStack_6b4 = *(float *)(param_1 + lVar35);
  }
  iVar37 = auVar108._12_4_;
  if ((bVar48 & 4) != 0) {
    fStack_6b0 = *(float *)(param_1 + auVar108._8_4_);
  }
  if ((char)bVar48 < '\0') {
    fStack_6ac = *(float *)(param_1 + iVar37);
  }
  if ((bVar48 & 1) != 0) {
    local_6a8 = *(float *)(uVar55 + lVar47 + param_1);
  }
  if ((bVar48 & 2) != 0) {
    fStack_6a4 = *(float *)((ulonglong)uVar36 + lVar35 + param_1);
  }
  auVar165 = ___xmm_0000000c0000000c0000000c0000000c & auVar131;
  lVar56 = auVar108._8_4_ + param_1;
  if ((bVar48 & 4) != 0) {
    fStack_6a0 = *(float *)(uVar51 + lVar56);
  }
  if ((char)bVar48 < '\0') {
    fStack_69c = *(float *)(uVar34 + iVar37 + param_1);
  }
  if ((bVar48 & 1) != 0) {
    local_698 = *(float *)(uVar41 + lVar47 + param_1);
  }
  uVar39 = (ulonglong)auVar165._4_4_;
  uVar45 = (ulonglong)auVar165._0_4_;
  lVar52 = iVar37 + param_1;
  uVar30 = (ulonglong)auVar165._8_4_;
  if ((bVar48 & 2) != 0) {
    fStack_694 = *(float *)(uVar50 + lVar35 + param_1);
  }
  uVar46 = (ulonglong)auVar165._12_4_;
  auVar188 = insertps(ZEXT416(*(uint *)(uVar45 + (longlong)pfVar57)),
                      *(undefined4 *)(uVar39 + lVar53 + param_1),0x10);
  auVar108 = insertps(ZEXT416(*(uint *)(uVar45 + lVar43 + param_1)),
                      *(undefined4 *)(uVar39 + lVar54 + param_1),0x10);
  auVar165 = insertps(ZEXT416(*(uint *)(uVar45 + lVar47 + param_1)),
                      *(undefined4 *)(uVar39 + lVar35 + param_1),0x10);
  if ((bVar48 & 4) != 0) {
    fStack_690 = *(float *)(uVar28 + lVar56);
  }
  auVar188 = insertps(auVar188,*(undefined4 *)(uVar30 + lVar26),0x20);
  auVar108 = insertps(auVar108,*(undefined4 *)(uVar30 + lVar40),0x20);
  auVar165 = insertps(auVar165,*(undefined4 *)(uVar30 + lVar56),0x20);
  bVar32 = ~bVar48;
  if (((char)bVar48 < '\0') && (fStack_68c = *(float *)(uVar29 + lVar52), (bVar32 & 0xf) == 0)) {
    lVar53 = uVar27 * 0x10;
    auVar64 = *(undefined1 (*) [16])(param_5 + lVar53);
    puVar5 = (undefined4 *)(param_5 + 0x10 + lVar53);
    auVar65 = *(undefined1 (*) [16])(param_5 + 0x20 + lVar53);
    puVar6 = (undefined4 *)(param_5 + 0x30 + lVar53);
    auVar179._8_4_ = auVar64._4_4_;
    auVar179._0_8_ = auVar64._0_8_;
    auVar179._12_4_ = puVar5[1];
    local_128._4_4_ = *puVar5;
    local_128._0_4_ = auVar64._0_4_;
    auVar169._0_8_ = CONCAT44(puVar5[2],auVar64._8_4_);
    auVar169._8_4_ = auVar64._12_4_;
    auVar169._12_4_ = puVar5[3];
    auVar119._0_8_ = auVar65._0_8_;
    auVar119._8_4_ = auVar65._4_4_;
    auVar119._12_4_ = puVar6[1];
    local_118._8_8_ = auVar119._8_8_;
    local_128._12_4_ = *puVar6;
    local_128._8_4_ = auVar65._0_4_;
    auVar160._0_8_ = CONCAT44(puVar6[2],auVar65._8_4_);
    auVar160._8_4_ = auVar65._12_4_;
    auVar160._12_4_ = puVar6[3];
    local_118._0_8_ = auVar179._8_8_;
    local_108._8_8_ = auVar160._0_8_;
    local_108._0_8_ = auVar169._0_8_;
    local_f8._8_8_ = auVar160._8_8_;
    local_f8._0_8_ = auVar169._8_8_;
  }
  else {
    auVar77._0_4_ = ___xmm_00000030000000200000001000000000 & auVar131._0_4_;
    auVar77._4_4_ = _UNK_150b511c4 & auVar131._4_4_;
    auVar77._8_4_ = _UNK_150b511c8 & auVar131._8_4_;
    auVar77._12_4_ = _UNK_150b511cc & auVar131._12_4_;
    lVar26 = extractps(auVar77,1);
    lVar43 = extractps(auVar77,2);
    lVar54 = extractps(auVar77,3);
    lVar53 = param_5 + uVar27 * 0x10;
    auVar64 = insertps(ZEXT416(*(uint *)(param_5 + uVar27 * 0x10)),*(undefined4 *)(lVar26 + lVar53),
                       0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(lVar43 + lVar53),0x20);
    local_128 = insertps(auVar64,*(undefined4 *)(lVar54 + lVar53),0x30);
    auVar64 = ___xmm_00000034000000240000001400000004 & auVar131;
    auVar65 = insertps(ZEXT416(*(uint *)((ulonglong)auVar64._0_4_ + lVar53)),
                       *(undefined4 *)((ulonglong)auVar64._4_4_ + lVar53),0x10);
    auVar65 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._8_4_ + lVar53),0x20);
    local_118 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._12_4_ + lVar53),0x30);
    auVar64 = ___xmm_00000038000000280000001800000008 & auVar131;
    auVar65 = insertps(ZEXT416(*(uint *)((ulonglong)auVar64._0_4_ + lVar53)),
                       *(undefined4 *)((ulonglong)auVar64._4_4_ + lVar53),0x10);
    auVar65 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._8_4_ + lVar53),0x20);
    local_108 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._12_4_ + lVar53),0x30);
    auVar64 = ___xmm_0000003c0000002c0000001c0000000c & auVar131;
    auVar65 = insertps(ZEXT416(*(uint *)((ulonglong)auVar64._0_4_ + lVar53)),
                       *(undefined4 *)((ulonglong)auVar64._4_4_ + lVar53),0x10);
    auVar65 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._8_4_ + lVar53),0x20);
    local_f8 = insertps(auVar65,*(undefined4 *)((ulonglong)auVar64._12_4_ + lVar53),0x30);
  }
  auVar188 = insertps(auVar188,*(undefined4 *)(uVar46 + lVar38),0x30);
  auVar108 = insertps(auVar108,*(undefined4 *)(uVar46 + lVar44),0x30);
  auVar165 = insertps(auVar165,*(undefined4 *)(uVar46 + lVar52),0x30);
  pauVar4 = (undefined1 (*) [16])(param_4 + uVar27 * 0xc);
  if ((bVar32 & 0xf) == 0) {
    auVar64 = *pauVar4;
    auVar65 = pauVar4[1];
    local_158._0_4_ = auVar64._0_4_;
    auVar63 = insertps(auVar65,auVar64,0x8c);
    local_158._4_4_ = auVar64._12_4_;
    local_158._8_4_ = auVar65._8_4_;
    local_158._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
    local_148._4_4_ = auVar65._0_4_;
    local_148._0_4_ = auVar64._4_4_;
    local_148._8_4_ = auVar65._12_4_;
    local_148._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
    local_138._0_8_ = auVar63._0_8_;
    local_138._8_4_ = *(undefined4 *)pauVar4[2];
    local_138._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
  }
  else {
    auVar78._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar131._0_4_;
    auVar78._4_4_ = _UNK_150b50da4 & auVar131._4_4_;
    auVar78._8_4_ = _UNK_150b50da8 & auVar131._8_4_;
    auVar78._12_4_ = _UNK_150b50dac & auVar131._12_4_;
    lVar53 = extractps(auVar78,1);
    lVar26 = extractps(auVar78,2);
    lVar38 = extractps(auVar78,3);
    auVar64 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar53),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(*pauVar4 + lVar26),0x20);
    local_158 = insertps(auVar64,*(undefined4 *)(*pauVar4 + lVar38),0x30);
    auVar64 = ___xmm_000000280000001c0000001000000004 & auVar131;
    auVar65 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar64._0_4_)),
                       *(undefined4 *)(*pauVar4 + auVar64._4_4_),0x10);
    auVar65 = insertps(auVar65,*(undefined4 *)(*pauVar4 + auVar64._8_4_),0x20);
    local_148 = insertps(auVar65,*(undefined4 *)(*pauVar4 + auVar64._12_4_),0x30);
    auVar64 = ___xmm_0000002c000000200000001400000008 & auVar131;
    auVar65 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar64._0_4_)),
                       *(undefined4 *)(*pauVar4 + auVar64._4_4_),0x10);
    auVar65 = insertps(auVar65,*(undefined4 *)(*pauVar4 + auVar64._8_4_),0x20);
    local_138 = insertps(auVar65,*(undefined4 *)(*pauVar4 + auVar64._12_4_),0x30);
  }
  local_208 = param_13;
  fStack_204 = param_13;
  fStack_200 = param_13;
  fStack_1fc = param_13;
  local_1f8 = param_12;
  fStack_1f4 = param_12;
  fStack_1f0 = param_12;
  fStack_1ec = param_12;
  local_5f8 = auVar131;
  local_5c8 = param_3;
  local_5c0 = param_4;
  local_218 = auVar131;
  FUN_1409aeab0(&local_658,&local_688,&local_6b8,local_128,local_158,&local_1f8,&local_208,
                &local_1c8,&local_1d8,&local_1e8,&local_3a8,&local_3d8,&local_408,&local_438,
                &local_188,&local_1b8,local_218);
  auVar129._4_4_ = auVar208._4_4_ * 3;
  auVar129._0_4_ = auVar208._0_4_ * 3;
  auVar129._8_4_ = auVar208._8_4_ * 3;
  auVar129._12_4_ = auVar208._12_4_ * 3;
  auVar129 = auVar129 & auVar131;
  lVar53 = param_2 + (longlong)auVar129._0_4_ * 4;
  lVar26 = param_2 + (longlong)auVar129._4_4_ * 4;
  lVar38 = param_2 + (longlong)auVar129._8_4_ * 4;
  uVar30 = (ulonglong)uVar36;
  auVar64 = insertps(ZEXT416(*(uint *)(uVar55 + lVar53)),*(undefined4 *)(uVar30 + lVar26),0x10);
  auVar64 = insertps(auVar64,*(undefined4 *)(uVar51 + lVar38),0x20);
  auVar65 = insertps(ZEXT416(*(uint *)(uVar41 + lVar53)),*(undefined4 *)(uVar50 + lVar26),0x10);
  auVar65 = insertps(auVar65,*(undefined4 *)(uVar28 + lVar38),0x20);
  auVar177._4_4_ = auVar201._4_4_ * 3;
  auVar177._0_4_ = auVar201._0_4_ * 3;
  auVar177._8_4_ = auVar201._8_4_ * 3;
  auVar177._12_4_ = auVar201._12_4_ * 3;
  auVar177 = auVar177 & auVar131;
  lVar53 = param_2 + (longlong)auVar177._0_4_ * 4;
  auVar210._4_4_ = auVar190._4_4_ * 3;
  auVar210._0_4_ = auVar190._0_4_ * 3;
  auVar210._8_4_ = auVar190._8_4_ * 3;
  auVar210._12_4_ = auVar190._12_4_ * 3;
  auVar210 = auVar210 & auVar131;
  lVar26 = param_2 + (longlong)auVar210._0_4_ * 4;
  lVar38 = param_2 + (longlong)auVar177._4_4_ * 4;
  auVar63 = insertps(ZEXT416(*(uint *)(uVar55 + lVar53)),*(undefined4 *)(uVar30 + lVar38),0x10);
  auVar154 = insertps(ZEXT416(*(uint *)(uVar41 + lVar53)),*(undefined4 *)(uVar50 + lVar38),0x10);
  lVar53 = param_2 + (longlong)auVar210._4_4_ * 4;
  auVar192 = insertps(ZEXT416(*(uint *)(uVar55 + lVar26)),*(undefined4 *)(uVar30 + lVar53),0x10);
  auVar163 = insertps(ZEXT416(*(uint *)(uVar41 + lVar26)),*(undefined4 *)(uVar50 + lVar53),0x10);
  lVar53 = param_2 + (longlong)auVar177._8_4_ * 4;
  auVar66 = insertps(auVar63,*(undefined4 *)(uVar51 + lVar53),0x20);
  auVar154 = insertps(auVar154,*(undefined4 *)(uVar28 + lVar53),0x20);
  lVar53 = param_2 + (longlong)auVar210._8_4_ * 4;
  auVar155 = insertps(auVar192,*(undefined4 *)(uVar51 + lVar53),0x20);
  auVar163 = insertps(auVar163,*(undefined4 *)(uVar28 + lVar53),0x20);
  auVar63 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar129._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar129._4_4_ * 4),0x10);
  auVar63 = insertps(auVar63,*(undefined4 *)(param_2 + (longlong)auVar129._8_4_ * 4),0x20);
  auVar164 = insertps(auVar63,*(undefined4 *)(param_2 + (longlong)auVar129._12_4_ * 4),0x30);
  lVar53 = param_2 + (longlong)auVar129._12_4_ * 4;
  auVar64 = insertps(auVar64,*(undefined4 *)(uVar34 + lVar53),0x30);
  auVar65 = insertps(auVar65,*(undefined4 *)(uVar29 + lVar53),0x30);
  auVar63 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar177._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar177._4_4_ * 4),0x10);
  auVar63 = insertps(auVar63,*(undefined4 *)(param_2 + (longlong)auVar177._8_4_ * 4),0x20);
  auVar63 = insertps(auVar63,*(undefined4 *)(param_2 + (longlong)auVar177._12_4_ * 4),0x30);
  lVar53 = param_2 + (longlong)auVar177._12_4_ * 4;
  auVar66 = insertps(auVar66,*(undefined4 *)(uVar34 + lVar53),0x30);
  auVar154 = insertps(auVar154,*(undefined4 *)(uVar29 + lVar53),0x30);
  auVar192 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar210._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar210._4_4_ * 4),0x10);
  auVar192 = insertps(auVar192,*(undefined4 *)(param_2 + (longlong)auVar210._8_4_ * 4),0x20);
  auVar192 = insertps(auVar192,*(undefined4 *)(param_2 + (longlong)auVar210._12_4_ * 4),0x30);
  param_2 = param_2 + (longlong)auVar210._12_4_ * 4;
  auVar155 = insertps(auVar155,*(undefined4 *)(uVar34 + param_2),0x30);
  auVar163 = insertps(auVar163,*(undefined4 *)(uVar29 + param_2),0x30);
  fVar123 = local_658 - auVar164._0_4_;
  fVar125 = fStack_654 - auVar164._4_4_;
  fVar213 = fStack_650 - auVar164._8_4_;
  fVar143 = fStack_64c - auVar164._12_4_;
  fVar180 = local_648 - auVar64._0_4_;
  fVar146 = fStack_644 - auVar64._4_4_;
  fVar147 = fStack_640 - auVar64._8_4_;
  fVar148 = fStack_63c - auVar64._12_4_;
  fVar121 = local_638 - auVar65._0_4_;
  fVar60 = fStack_634 - auVar65._4_4_;
  fVar99 = fStack_630 - auVar65._8_4_;
  fVar97 = fStack_62c - auVar65._12_4_;
  fVar122 = local_688 - auVar63._0_4_;
  fVar141 = fStack_684 - auVar63._4_4_;
  fVar145 = fStack_680 - auVar63._8_4_;
  fVar149 = fStack_67c - auVar63._12_4_;
  fVar234 = local_678 - auVar66._0_4_;
  fVar61 = fStack_674 - auVar66._4_4_;
  fVar59 = fStack_670 - auVar66._8_4_;
  fVar106 = fStack_66c - auVar66._12_4_;
  fVar181 = local_668 - auVar154._0_4_;
  fVar183 = fStack_664 - auVar154._4_4_;
  fVar231 = fStack_660 - auVar154._8_4_;
  fVar150 = fStack_65c - auVar154._12_4_;
  fVar232 = local_6b8 - auVar192._0_4_;
  fVar94 = fStack_6b4 - auVar192._4_4_;
  fVar100 = fStack_6b0 - auVar192._8_4_;
  fVar104 = fStack_6ac - auVar192._12_4_;
  fVar124 = local_6a8 - auVar155._0_4_;
  fVar126 = fStack_6a4 - auVar155._4_4_;
  fVar142 = fStack_6a0 - auVar155._8_4_;
  fVar144 = fStack_69c - auVar155._12_4_;
  fVar162 = local_698 - auVar163._0_4_;
  fVar171 = fStack_694 - auVar163._4_4_;
  fVar120 = fStack_690 - auVar163._8_4_;
  fVar174 = fStack_68c - auVar163._12_4_;
  local_7e8._0_4_ = auVar108._0_4_;
  local_7e8._4_4_ = auVar108._4_4_;
  fStack_7e0 = auVar108._8_4_;
  fStack_7dc = auVar108._12_4_;
  fVar182 = auVar188._0_4_;
  fVar95 = auVar188._4_4_;
  fVar93 = auVar188._8_4_;
  fVar102 = auVar188._12_4_;
  fVar151 = auVar165._0_4_;
  fVar184 = fVar182 + (float)local_7e8._0_4_ + fVar151;
  fVar152 = auVar165._4_4_;
  fVar98 = fVar95 + (float)local_7e8._4_4_ + fVar152;
  fVar186 = auVar165._8_4_;
  fVar101 = fVar93 + fStack_7e0 + fVar186;
  fVar193 = auVar165._12_4_;
  fVar107 = fVar102 + fStack_7dc + fVar193;
  pauVar4 = (undefined1 (*) [16])(param_7 + uVar27 * 0xc);
  if ((bVar32 & 0xf) == 0) {
    auVar64 = *pauVar4;
    auVar65 = pauVar4[1];
    auVar63 = insertps(auVar65,auVar64,0x8c);
    local_758._4_4_ = auVar64._12_4_;
    local_758._0_4_ = auVar64._0_4_;
    fStack_750 = (float)auVar65._8_4_;
    fStack_74c = (float)*(undefined4 *)(pauVar4[2] + 4);
    local_618._4_4_ = auVar65._0_4_;
    local_618._0_4_ = auVar64._4_4_;
    fStack_610 = (float)auVar65._12_4_;
    fStack_60c = (float)*(undefined4 *)(pauVar4[2] + 8);
    local_628 = auVar63._0_8_;
    fStack_620 = (float)*(undefined4 *)pauVar4[2];
    fStack_61c = (float)*(undefined4 *)(pauVar4[2] + 0xc);
    auVar64 = *(undefined1 (*) [16])(param_6 + uVar27 * 0xc);
    auVar65 = *(undefined1 (*) [16])(param_6 + 0x10 + uVar27 * 0xc);
    puVar5 = (undefined4 *)(param_6 + 0x20 + uVar27 * 0xc);
    auVar132._0_4_ = auVar64._0_4_;
    auVar63 = insertps(auVar65,auVar64,0x8c);
    auVar132._4_4_ = auVar64._12_4_;
    auVar132._8_4_ = auVar65._8_4_;
    auVar132._12_4_ = puVar5[1];
    auVar178._4_4_ = auVar65._0_4_;
    auVar178._0_4_ = auVar64._4_4_;
    auVar178._8_4_ = auVar65._12_4_;
    auVar178._12_4_ = puVar5[2];
    auVar216._0_8_ = auVar63._0_8_;
    auVar216._8_4_ = *puVar5;
    auVar216._12_4_ = puVar5[3];
  }
  else {
    auVar130._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar131._0_4_;
    auVar130._4_4_ = _UNK_150b50da4 & auVar131._4_4_;
    auVar130._8_4_ = _UNK_150b50da8 & auVar131._8_4_;
    auVar130._12_4_ = _UNK_150b50dac & auVar131._12_4_;
    lVar26 = extractps(auVar130,1);
    lVar38 = extractps(auVar130,2);
    lVar43 = extractps(auVar130,3);
    auVar64 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar26),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(*pauVar4 + lVar38),0x20);
    _local_758 = insertps(auVar64,*(undefined4 *)(*pauVar4 + lVar43),0x30);
    auVar65 = ___xmm_000000280000001c0000001000000004 & auVar131;
    auVar64 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar65._0_4_)),
                       *(undefined4 *)(*pauVar4 + auVar65._4_4_),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(*pauVar4 + auVar65._8_4_),0x20);
    _local_618 = insertps(auVar64,*(undefined4 *)(*pauVar4 + auVar65._12_4_),0x30);
    auVar131 = ___xmm_0000002c000000200000001400000008 & auVar131;
    auVar64 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar131._0_4_)),
                       *(undefined4 *)(*pauVar4 + auVar131._4_4_),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(*pauVar4 + auVar131._8_4_),0x20);
    _local_628 = insertps(auVar64,*(undefined4 *)(*pauVar4 + auVar131._12_4_),0x30);
    lVar53 = param_6 + uVar27 * 0xc;
    auVar64 = insertps(ZEXT416(*(uint *)(param_6 + uVar27 * 0xc)),*(undefined4 *)(lVar26 + lVar53),
                       0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)(lVar38 + lVar53),0x20);
    auVar132 = insertps(auVar64,*(undefined4 *)(lVar43 + lVar53),0x30);
    auVar64 = insertps(ZEXT416(*(uint *)((ulonglong)auVar65._0_4_ + lVar53)),
                       *(undefined4 *)((ulonglong)auVar65._4_4_ + lVar53),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)((ulonglong)auVar65._8_4_ + lVar53),0x20);
    auVar178 = insertps(auVar64,*(undefined4 *)((ulonglong)auVar65._12_4_ + lVar53),0x30);
    auVar64 = insertps(ZEXT416(*(uint *)((ulonglong)auVar131._0_4_ + lVar53)),
                       *(undefined4 *)((ulonglong)auVar131._4_4_ + lVar53),0x10);
    auVar64 = insertps(auVar64,*(undefined4 *)((ulonglong)auVar131._8_4_ + lVar53),0x20);
    auVar216 = insertps(auVar64,*(undefined4 *)((ulonglong)auVar131._12_4_ + lVar53),0x30);
  }
  fVar194 = *param_10;
  fVar187 = fVar194 * auVar132._0_4_;
  fVar215 = fVar194 * auVar132._4_4_;
  auVar79._4_4_ = fVar215;
  auVar79._0_4_ = fVar187;
  fVar217 = fVar194 * auVar132._8_4_;
  fVar194 = fVar194 * auVar132._12_4_;
  fStack_7bc = param_10[1];
  local_7c8._0_4_ = fStack_7bc * auVar178._0_4_;
  local_7c8._4_4_ = fStack_7bc * auVar178._4_4_;
  fStack_7c0 = fStack_7bc * auVar178._8_4_;
  fStack_7bc = fStack_7bc * auVar178._12_4_;
  fVar196 = param_10[2];
  fVar212 = fVar196 * auVar216._0_4_;
  fVar214 = fVar196 * auVar216._4_4_;
  fVar161 = fVar196 * auVar216._8_4_;
  fVar196 = fVar196 * auVar216._12_4_;
  auVar133._0_4_ = param_8 * fVar187 * param_8;
  auVar133._4_4_ = param_8 * fVar215 * param_8;
  auVar133._8_4_ = param_8 * fVar217 * param_8;
  auVar133._12_4_ = param_8 * fVar194 * param_8;
  auVar20._4_4_ = _UNK_15076b1f4;
  auVar20._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar20._8_4_ = _UNK_15076b1f8;
  auVar20._12_4_ = _UNK_15076b1fc;
  auVar65 = divps(auVar20,auVar133);
  fVar62 = local_3a8 + local_3d8;
  fVar203 = fStack_3a4 + fStack_3d4;
  fVar205 = fStack_3a0 + fStack_3d0;
  fVar105 = fStack_39c + fStack_3cc;
  fVar170 = local_398 + local_3c8;
  fVar172 = fStack_394 + fStack_3c4;
  fVar173 = fStack_390 + fStack_3c0;
  fVar185 = fStack_38c + fStack_3bc;
  fVar242 = local_388 + local_3b8;
  fVar245 = fStack_384 + fStack_3b4;
  fVar247 = fStack_380 + fStack_3b0;
  fVar218 = fStack_37c + fStack_3ac;
  param_11 = param_11 + param_11;
  auVar79._8_4_ = fVar217;
  auVar79._12_4_ = fVar194;
  auVar23._4_4_ = fVar98;
  auVar23._0_4_ = fVar184;
  auVar23._8_4_ = fVar101;
  auVar23._12_4_ = fVar107;
  auVar64 = divps(auVar79,auVar23);
  auVar64 = sqrtps(auVar64,auVar64);
  fVar195 = auVar65._0_4_;
  fVar197 = auVar65._4_4_;
  fVar198 = auVar65._8_4_;
  fVar206 = auVar65._12_4_;
  fVar199 = auVar64._0_4_ * param_11 * fVar195 * param_8;
  fVar204 = auVar64._4_4_ * param_11 * fVar197 * param_8;
  fVar207 = auVar64._8_4_ * param_11 * fVar198 * param_8;
  fVar211 = auVar64._12_4_ * param_11 * fVar206 * param_8;
  auVar21._4_4_ = _UNK_15076b1f4;
  auVar21._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar21._8_4_ = _UNK_15076b1f8;
  auVar21._12_4_ = _UNK_15076b1fc;
  auVar134._0_4_ =
       ((local_3b8 * local_3b8 + local_3c8 * local_3c8 + local_3d8 * local_3d8) * fVar151 +
       (local_388 * local_388 + local_398 * local_398 + local_3a8 * local_3a8) *
       (float)local_7e8._0_4_ + (fVar242 * fVar242 + fVar170 * fVar170 + fVar62 * fVar62) * fVar182)
       * (fVar199 + ___xmm_3f8000003f8000003f8000003f800000) + fVar195;
  auVar134._4_4_ =
       ((fStack_3b4 * fStack_3b4 + fStack_3c4 * fStack_3c4 + fStack_3d4 * fStack_3d4) * fVar152 +
       (fStack_384 * fStack_384 + fStack_394 * fStack_394 + fStack_3a4 * fStack_3a4) *
       (float)local_7e8._4_4_ + (fVar245 * fVar245 + fVar172 * fVar172 + fVar203 * fVar203) * fVar95
       ) * (fVar204 + _UNK_15076b1f4) + fVar197;
  auVar134._8_4_ =
       ((fStack_3b0 * fStack_3b0 + fStack_3c0 * fStack_3c0 + fStack_3d0 * fStack_3d0) * fVar186 +
       (fStack_380 * fStack_380 + fStack_390 * fStack_390 + fStack_3a0 * fStack_3a0) * fStack_7e0 +
       (fVar247 * fVar247 + fVar173 * fVar173 + fVar205 * fVar205) * fVar93) *
       (fVar207 + _UNK_15076b1f8) + fVar198;
  auVar134._12_4_ =
       ((fStack_3ac * fStack_3ac + fStack_3bc * fStack_3bc + fStack_3cc * fStack_3cc) * fVar193 +
       (fStack_37c * fStack_37c + fStack_38c * fStack_38c + fStack_39c * fStack_39c) * fStack_7dc +
       (fVar218 * fVar218 + fVar185 * fVar185 + fVar105 * fVar105) * fVar102) *
       (fVar211 + _UNK_15076b1fc) + fVar206;
  auVar80._0_4_ =
       (local_1c8 - fVar195 * (float)local_758._0_4_) +
       ((fVar162 * local_3b8 + fVar124 * local_3c8 + fVar232 * local_3d8 +
        fVar181 * local_388 + fVar234 * local_398 + fVar122 * local_3a8) -
       (fVar121 * fVar242 + fVar180 * fVar170 + fVar123 * fVar62)) * fVar199;
  auVar80._4_4_ =
       (fStack_1c4 - fVar197 * (float)local_758._4_4_) +
       ((fVar171 * fStack_3b4 + fVar126 * fStack_3c4 + fVar94 * fStack_3d4 +
        fVar183 * fStack_384 + fVar61 * fStack_394 + fVar141 * fStack_3a4) -
       (fVar60 * fVar245 + fVar146 * fVar172 + fVar125 * fVar203)) * fVar204;
  auVar80._8_4_ =
       (fStack_1c0 - fVar198 * fStack_750) +
       ((fVar120 * fStack_3b0 + fVar142 * fStack_3c0 + fVar100 * fStack_3d0 +
        fVar231 * fStack_380 + fVar59 * fStack_390 + fVar145 * fStack_3a0) -
       (fVar99 * fVar247 + fVar147 * fVar173 + fVar213 * fVar205)) * fVar207;
  auVar80._12_4_ =
       (fStack_1bc - fVar206 * fStack_74c) +
       ((fVar174 * fStack_3ac + fVar144 * fStack_3bc + fVar104 * fStack_3cc +
        fVar150 * fStack_37c + fVar106 * fStack_38c + fVar149 * fStack_39c) -
       (fVar97 * fVar218 + fVar148 * fVar185 + fVar143 * fVar105)) * fVar211;
  auVar64 = divps(auVar80,auVar134);
  fVar185 = (float)(-(uint)(param_9 <= fVar187) & auVar64._0_4_);
  fVar187 = (float)(-(uint)(param_9 <= fVar215) & auVar64._4_4_);
  fVar217 = (float)(-(uint)(param_9 <= fVar217) & auVar64._8_4_);
  fVar197 = (float)(-(uint)(param_9 <= fVar194) & auVar64._12_4_);
  auVar81._0_4_ = param_8 * (float)local_7c8._0_4_ * param_8;
  auVar81._4_4_ = param_8 * (float)local_7c8._4_4_ * param_8;
  auVar81._8_4_ = param_8 * fStack_7c0 * param_8;
  auVar81._12_4_ = param_8 * fStack_7bc * param_8;
  auVar65 = divps(auVar21,auVar81);
  fVar194 = local_408 + local_438;
  fVar62 = fStack_404 + fStack_434;
  fVar199 = fStack_400 + fStack_430;
  fVar203 = fStack_3fc + fStack_42c;
  fVar204 = local_3f8 + local_428;
  fVar205 = fStack_3f4 + fStack_424;
  fVar207 = fStack_3f0 + fStack_420;
  fVar105 = fStack_3ec + fStack_41c;
  fVar211 = local_3e8 + local_418;
  fVar170 = fStack_3e4 + fStack_414;
  fVar172 = fStack_3e0 + fStack_410;
  fVar173 = fStack_3dc + fStack_40c;
  auVar24._4_4_ = fVar98;
  auVar24._0_4_ = fVar184;
  auVar24._8_4_ = fVar101;
  auVar24._12_4_ = fVar107;
  auVar64 = divps(_local_7c8,auVar24);
  auVar64 = sqrtps(auVar64,auVar64);
  fVar215 = auVar65._0_4_;
  fVar195 = auVar65._4_4_;
  fVar198 = auVar65._8_4_;
  fVar206 = auVar65._12_4_;
  fVar184 = auVar64._0_4_ * param_11 * fVar215 * param_8;
  fVar98 = auVar64._4_4_ * param_11 * fVar195 * param_8;
  fVar101 = auVar64._8_4_ * param_11 * fVar198 * param_8;
  fVar107 = auVar64._12_4_ * param_11 * fVar206 * param_8;
  auVar22._4_4_ = _UNK_15076b1f4;
  auVar22._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar22._8_4_ = _UNK_15076b1f8;
  auVar22._12_4_ = _UNK_15076b1fc;
  auVar135._0_4_ =
       ((local_418 * local_418 + local_428 * local_428 + local_438 * local_438) * fVar151 +
       (local_3e8 * local_3e8 + local_3f8 * local_3f8 + local_408 * local_408) *
       (float)local_7e8._0_4_ +
       (fVar211 * fVar211 + fVar204 * fVar204 + fVar194 * fVar194) * fVar182) *
       (fVar184 + ___xmm_3f8000003f8000003f8000003f800000) + fVar215;
  auVar135._4_4_ =
       ((fStack_414 * fStack_414 + fStack_424 * fStack_424 + fStack_434 * fStack_434) * fVar152 +
       (fStack_3e4 * fStack_3e4 + fStack_3f4 * fStack_3f4 + fStack_404 * fStack_404) *
       (float)local_7e8._4_4_ + (fVar170 * fVar170 + fVar205 * fVar205 + fVar62 * fVar62) * fVar95)
       * (fVar98 + _UNK_15076b1f4) + fVar195;
  auVar135._8_4_ =
       ((fStack_410 * fStack_410 + fStack_420 * fStack_420 + fStack_430 * fStack_430) * fVar186 +
       (fStack_3e0 * fStack_3e0 + fStack_3f0 * fStack_3f0 + fStack_400 * fStack_400) * fStack_7e0 +
       (fVar172 * fVar172 + fVar207 * fVar207 + fVar199 * fVar199) * fVar93) *
       (fVar101 + _UNK_15076b1f8) + fVar198;
  auVar135._12_4_ =
       ((fStack_40c * fStack_40c + fStack_41c * fStack_41c + fStack_42c * fStack_42c) * fVar193 +
       (fStack_3dc * fStack_3dc + fStack_3ec * fStack_3ec + fStack_3fc * fStack_3fc) * fStack_7dc +
       (fVar173 * fVar173 + fVar105 * fVar105 + fVar203 * fVar203) * fVar102) *
       (fVar107 + _UNK_15076b1fc) + fVar206;
  auVar82._0_4_ =
       (local_1d8 - fVar215 * (float)local_618._0_4_) +
       ((fVar162 * local_418 + fVar124 * local_428 + fVar232 * local_438 +
        fVar181 * local_3e8 + fVar234 * local_3f8 + fVar122 * local_408) -
       (fVar121 * fVar211 + fVar180 * fVar204 + fVar123 * fVar194)) * fVar184;
  auVar82._4_4_ =
       (fStack_1d4 - fVar195 * (float)local_618._4_4_) +
       ((fVar171 * fStack_414 + fVar126 * fStack_424 + fVar94 * fStack_434 +
        fVar183 * fStack_3e4 + fVar61 * fStack_3f4 + fVar141 * fStack_404) -
       (fVar60 * fVar170 + fVar146 * fVar205 + fVar125 * fVar62)) * fVar98;
  auVar82._8_4_ =
       (fStack_1d0 - fVar198 * fStack_610) +
       ((fVar120 * fStack_410 + fVar142 * fStack_420 + fVar100 * fStack_430 +
        fVar231 * fStack_3e0 + fVar59 * fStack_3f0 + fVar145 * fStack_400) -
       (fVar99 * fVar172 + fVar147 * fVar207 + fVar213 * fVar199)) * fVar101;
  auVar82._12_4_ =
       (fStack_1cc - fVar206 * fStack_60c) +
       ((fVar174 * fStack_40c + fVar144 * fStack_41c + fVar104 * fStack_42c +
        fVar150 * fStack_3dc + fVar106 * fStack_3ec + fVar149 * fStack_3fc) -
       (fVar97 * fVar173 + fVar148 * fVar105 + fVar143 * fVar203)) * fVar107;
  auVar64 = divps(auVar82,auVar135);
  fVar173 = (float)(-(uint)(param_9 <= (float)local_7c8._0_4_) & auVar64._0_4_);
  fVar215 = (float)(-(uint)(param_9 <= (float)local_7c8._4_4_) & auVar64._4_4_);
  fVar195 = (float)(-(uint)(param_9 <= fStack_7c0) & auVar64._8_4_);
  fVar198 = (float)(-(uint)(param_9 <= fStack_7bc) & auVar64._12_4_);
  auVar25._4_4_ = fVar214;
  auVar25._0_4_ = fVar212;
  auVar25._8_4_ = fVar161;
  auVar25._12_4_ = fVar196;
  auVar64 = divps(auVar25,auVar24);
  auVar64 = sqrtps(auVar135,auVar64);
  auVar83._0_4_ = param_8 * fVar212 * param_8;
  auVar83._4_4_ = param_8 * fVar214 * param_8;
  auVar83._8_4_ = param_8 * fVar161 * param_8;
  auVar83._12_4_ = param_8 * fVar196 * param_8;
  auVar65 = divps(auVar22,auVar83);
  fVar206 = auVar65._0_4_;
  fVar242 = auVar65._4_4_;
  fVar245 = auVar65._8_4_;
  fVar247 = auVar65._12_4_;
  fVar194 = auVar64._0_4_ * param_11 * fVar206 * param_8;
  fVar62 = auVar64._4_4_ * param_11 * fVar242 * param_8;
  fVar199 = auVar64._8_4_ * param_11 * fVar245 * param_8;
  param_8 = auVar64._12_4_ * param_11 * fVar247 * param_8;
  fVar203 = local_188 + local_1b8;
  fVar204 = fStack_184 + fStack_1b4;
  fVar205 = fStack_180 + fStack_1b0;
  fVar207 = fStack_17c + fStack_1ac;
  fVar105 = local_178 + local_1a8;
  fVar211 = fStack_174 + fStack_1a4;
  fVar170 = fStack_170 + fStack_1a0;
  fVar172 = fStack_16c + fStack_19c;
  fVar184 = local_168 + local_198;
  fVar98 = fStack_164 + fStack_194;
  fVar101 = fStack_160 + fStack_190;
  fVar107 = fStack_15c + fStack_18c;
  auVar84._0_4_ =
       ((local_198 * local_198 + local_1a8 * local_1a8 + local_1b8 * local_1b8) * fVar151 +
       (local_168 * local_168 + local_178 * local_178 + local_188 * local_188) *
       (float)local_7e8._0_4_ +
       (fVar184 * fVar184 + fVar105 * fVar105 + fVar203 * fVar203) * fVar182) *
       (fVar194 + ___xmm_3f8000003f8000003f8000003f800000) + fVar206;
  auVar84._4_4_ =
       ((fStack_194 * fStack_194 + fStack_1a4 * fStack_1a4 + fStack_1b4 * fStack_1b4) * fVar152 +
       (fStack_164 * fStack_164 + fStack_174 * fStack_174 + fStack_184 * fStack_184) *
       (float)local_7e8._4_4_ + (fVar98 * fVar98 + fVar211 * fVar211 + fVar204 * fVar204) * fVar95)
       * (fVar62 + _UNK_15076b1f4) + fVar242;
  auVar84._8_4_ =
       ((fStack_190 * fStack_190 + fStack_1a0 * fStack_1a0 + fStack_1b0 * fStack_1b0) * fVar186 +
       (fStack_160 * fStack_160 + fStack_170 * fStack_170 + fStack_180 * fStack_180) * fStack_7e0 +
       (fVar101 * fVar101 + fVar170 * fVar170 + fVar205 * fVar205) * fVar93) *
       (fVar199 + _UNK_15076b1f8) + fVar245;
  auVar84._12_4_ =
       ((fStack_18c * fStack_18c + fStack_19c * fStack_19c + fStack_1ac * fStack_1ac) * fVar193 +
       (fStack_15c * fStack_15c + fStack_16c * fStack_16c + fStack_17c * fStack_17c) * fStack_7dc +
       (fVar107 * fVar107 + fVar172 * fVar172 + fVar207 * fVar207) * fVar102) *
       (param_8 + _UNK_15076b1fc) + fVar247;
  auVar136._0_4_ =
       (local_1e8 - fVar206 * (float)local_628._0_4_) +
       ((fVar162 * local_198 + fVar124 * local_1a8 + fVar232 * local_1b8 +
        fVar181 * local_168 + fVar234 * local_178 + fVar122 * local_188) -
       (fVar121 * fVar184 + fVar180 * fVar105 + fVar123 * fVar203)) * fVar194;
  auVar136._4_4_ =
       (fStack_1e4 - fVar242 * (float)local_628._4_4_) +
       ((fVar171 * fStack_194 + fVar126 * fStack_1a4 + fVar94 * fStack_1b4 +
        fVar183 * fStack_164 + fVar61 * fStack_174 + fVar141 * fStack_184) -
       (fVar60 * fVar98 + fVar146 * fVar211 + fVar125 * fVar204)) * fVar62;
  auVar136._8_4_ =
       (fStack_1e0 - fVar245 * fStack_620) +
       ((fVar120 * fStack_190 + fVar142 * fStack_1a0 + fVar100 * fStack_1b0 +
        fVar231 * fStack_160 + fVar59 * fStack_170 + fVar145 * fStack_180) -
       (fVar99 * fVar101 + fVar147 * fVar170 + fVar213 * fVar205)) * fVar199;
  auVar136._12_4_ =
       (fStack_1dc - fVar247 * fStack_61c) +
       ((fVar174 * fStack_18c + fVar144 * fStack_19c + fVar104 * fStack_1ac +
        fVar150 * fStack_15c + fVar106 * fStack_16c + fVar149 * fStack_17c) -
       (fVar97 * fVar107 + fVar148 * fVar172 + fVar143 * fVar207)) * param_8;
  auVar64 = divps(auVar136,auVar84);
  fVar121 = (float)(-(uint)(param_9 <= fVar212) & auVar64._0_4_);
  fVar234 = (float)(-(uint)(param_9 <= fVar214) & auVar64._4_4_);
  fVar232 = (float)(-(uint)(param_9 <= fVar161) & auVar64._8_4_);
  fVar184 = (float)(-(uint)(param_9 <= fVar196) & auVar64._12_4_);
  auVar230._0_8_ = CONCAT44((float)local_758._4_4_ + fVar187,(float)local_758._0_4_ + fVar185);
  auVar230._8_4_ = fStack_750 + fVar217;
  auVar230._12_4_ = fStack_74c + fVar197;
  auVar168._4_4_ = (float)local_618._4_4_ + fVar215;
  auVar168._0_4_ = (float)local_618._0_4_ + fVar173;
  auVar157._0_4_ = (float)local_628._0_4_ + fVar121;
  auVar157._4_4_ = (float)local_628._4_4_ + fVar234;
  auVar157._8_4_ = fStack_620 + fVar232;
  auVar157._12_4_ = fStack_61c + fVar184;
  auVar168._8_4_ = fStack_610 + fVar195;
  auVar168._12_4_ = fStack_60c + fVar198;
  if ((bVar32 & 0xf) == 0) {
    auVar85._8_4_ = auVar230._8_4_;
    auVar85._0_8_ = auVar230._0_8_;
    auVar85._12_4_ = auVar230._12_4_;
    auVar64 = insertps(auVar85,auVar168,0x30);
    auVar137._4_4_ = fStack_610 + fVar195;
    auVar137._0_4_ = (float)local_618._4_4_ + fVar215;
    auVar137._8_4_ = auVar157._0_4_;
    auVar137._12_4_ = auVar157._4_4_;
    auVar64 = insertps(auVar64,auVar157,0x20);
    *(int *)*pauVar4 = auVar64._0_4_;
    *(int *)(*pauVar4 + 4) = auVar64._12_4_;
    *(int *)(*pauVar4 + 8) = auVar64._8_4_;
    *(int *)(*pauVar4 + 0xc) = auVar64._4_4_;
    auVar64 = blendps(auVar137,auVar230,4);
    *(int *)pauVar4[1] = auVar64._0_4_;
    *(int *)(pauVar4[1] + 4) = auVar64._12_4_;
    *(int *)(pauVar4[1] + 8) = auVar64._8_4_;
    *(int *)(pauVar4[1] + 0xc) = auVar64._4_4_;
    *(float *)pauVar4[2] = auVar157._8_4_;
    *(float *)(pauVar4[2] + 4) = auVar230._12_4_;
    *(float *)(pauVar4[2] + 8) = fStack_60c + fVar198;
    *(float *)(pauVar4[2] + 0xc) = auVar157._12_4_;
    pauVar31 = pauVar4;
  }
  else {
    if ((bVar48 & 1) != 0) {
      *(float *)*pauVar4 = (float)local_758._0_4_ + fVar185;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar230,1);
      *(undefined8 *)(*pauVar4 + 0xc) = uVar19;
    }
    if ((bVar48 & 4) != 0) {
      uVar19 = extractps(auVar230,2);
      *(undefined8 *)(pauVar4[1] + 8) = uVar19;
    }
    if ((char)bVar48 < '\0') {
      uVar19 = extractps(auVar230,3);
      *(undefined8 *)(pauVar4[2] + 4) = uVar19;
    }
    if ((bVar48 & 1) != 0) {
      *(float *)(*pauVar4 + 4) = (float)local_618._0_4_ + fVar173;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar168,1);
      *(undefined8 *)pauVar4[1] = uVar19;
    }
    if ((bVar48 & 4) != 0) {
      uVar19 = extractps(auVar168,2);
      *(undefined8 *)(pauVar4[1] + 0xc) = uVar19;
    }
    if ((char)bVar48 < '\0') {
      uVar19 = extractps(auVar168,3);
      *(undefined8 *)(pauVar4[2] + 8) = uVar19;
    }
    if ((bVar48 & 1) != 0) {
      *(float *)(*pauVar4 + 8) = auVar157._0_4_;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar157,1);
      *(undefined8 *)(pauVar4[1] + 4) = uVar19;
    }
    if ((bVar48 & 4) != 0) {
      uVar19 = extractps(auVar157,2);
      *(undefined8 *)pauVar4[2] = uVar19;
    }
    pauVar31 = (undefined1 (*) [16])(ulonglong)bVar48;
    if ((char)bVar48 < '\0') {
      uVar19 = extractps(auVar157,3);
      *(undefined8 *)(pauVar4[2] + 0xc) = uVar19;
    }
  }
  fVar122 = local_188 * fVar121 + local_408 * fVar173 + local_3a8 * fVar185;
  fVar141 = fStack_184 * fVar234 + fStack_404 * fVar215 + fStack_3a4 * fVar187;
  fVar145 = fStack_180 * fVar232 + fStack_400 * fVar195 + fStack_3a0 * fVar217;
  fVar149 = fStack_17c * fVar184 + fStack_3fc * fVar198 + fStack_39c * fVar197;
  fVar162 = local_178 * fVar121 + local_3f8 * fVar173 + local_398 * fVar185;
  fVar171 = fStack_174 * fVar234 + fStack_3f4 * fVar215 + fStack_394 * fVar187;
  fVar120 = fStack_170 * fVar232 + fStack_3f0 * fVar195 + fStack_390 * fVar217;
  fVar174 = fStack_16c * fVar184 + fStack_3ec * fVar198 + fStack_38c * fVar197;
  fVar99 = local_168 * fVar121 + local_3e8 * fVar173 + local_388 * fVar185;
  fVar59 = fStack_164 * fVar234 + fStack_3e4 * fVar215 + fStack_384 * fVar187;
  fVar100 = fStack_160 * fVar232 + fStack_3e0 * fVar195 + fStack_380 * fVar217;
  fVar101 = fStack_15c * fVar184 + fStack_3dc * fVar198 + fStack_37c * fVar197;
  fVar60 = local_1b8 * fVar121 + local_438 * fVar173 + local_3d8 * fVar185;
  fVar61 = fStack_1b4 * fVar234 + fStack_434 * fVar215 + fStack_3d4 * fVar187;
  fVar94 = fStack_1b0 * fVar232 + fStack_430 * fVar195 + fStack_3d0 * fVar217;
  fVar98 = fStack_1ac * fVar184 + fStack_42c * fVar198 + fStack_3cc * fVar197;
  fVar97 = local_1a8 * fVar121 + local_428 * fVar173 + local_3c8 * fVar185;
  fVar106 = fStack_1a4 * fVar234 + fStack_424 * fVar215 + fStack_3c4 * fVar187;
  fVar104 = fStack_1a0 * fVar232 + fStack_420 * fVar195 + fStack_3c0 * fVar217;
  fVar107 = fStack_19c * fVar184 + fStack_41c * fVar198 + fStack_3bc * fVar197;
  fVar121 = local_198 * fVar121 + fVar173 * local_418 + fVar185 * local_3b8;
  fVar234 = fStack_194 * fVar234 + fVar215 * fStack_414 + fVar187 * fStack_3b4;
  fVar232 = fStack_190 * fVar232 + fVar195 * fStack_410 + fVar217 * fStack_3b0;
  fVar184 = fStack_18c * fVar184 + fVar198 * fStack_40c + fVar197 * fStack_3ac;
  auVar138._0_4_ = -(uint)(0.0 < fVar182) & local_5f8._0_4_;
  auVar138._4_4_ = -(uint)(0.0 < fVar95) & local_5f8._4_4_;
  auVar138._8_4_ = -(uint)(0.0 < fVar93) & local_5f8._8_4_;
  auVar138._12_4_ = -(uint)(0.0 < fVar102) & local_5f8._12_4_;
  iVar49 = movmskps((int)pauVar31,auVar138);
  iVar37 = 0;
  if (iVar49 != 0) {
    bVar48 = (char)((char)iVar49 << 4) >> 4;
    auVar158._0_4_ = (fVar122 + fVar60) * fVar182 + local_658;
    auVar158._4_4_ = (fVar141 + fVar61) * fVar95 + fStack_654;
    auVar158._8_4_ = (fVar145 + fVar94) * fVar93 + fStack_650;
    auVar158._12_4_ = (fVar149 + fVar98) * fVar102 + fStack_64c;
    if ((bVar48 & 1) != 0) {
      *(float *)(param_1 + (int)local_578._0_4_) = auVar158._0_4_;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar158,1);
      *(undefined8 *)(param_1 + (int)local_578._4_4_) = uVar19;
    }
    if ((bVar48 & 4) == 0) {
      if (-1 < (char)bVar48) goto LAB_1409c46cd;
LAB_1409c49dc:
      uVar19 = extractps(auVar158,3);
      *(undefined8 *)(param_1 + (int)local_578._12_4_) = uVar19;
      auVar139._0_4_ = (fVar162 + fVar97) * fVar182 + local_648;
      auVar139._4_4_ = (fVar171 + fVar106) * fVar95 + fStack_644;
      auVar139._8_4_ = (fVar120 + fVar104) * fVar93 + fStack_640;
      auVar139._12_4_ = (fVar174 + fVar107) * fVar102 + fStack_63c;
      if ((bVar48 & 1) != 0) goto LAB_1409c49ff;
LAB_1409c46de:
      if ((bVar48 & 2) == 0) goto LAB_1409c46e7;
LAB_1409c4a12:
      uVar19 = extractps(auVar139,1);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._4_4_) = uVar19;
      if ((bVar48 & 4) != 0) goto LAB_1409c4a2f;
LAB_1409c46f8:
      fVar123 = (fVar99 + fVar121) * fVar182;
      fVar95 = (fVar59 + fVar234) * fVar95;
      fVar93 = (fVar100 + fVar232) * fVar93;
      fVar102 = (fVar101 + fVar184) * fVar102;
      if (-1 < (char)bVar48) goto LAB_1409c4708;
LAB_1409c4a4b:
      uVar19 = extractps(auVar139,3);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._12_4_) = uVar19;
      auVar159._0_4_ = fVar123 + local_638;
      auVar159._4_4_ = fVar95 + fStack_634;
      auVar159._8_4_ = fVar93 + fStack_630;
      auVar159._12_4_ = fVar102 + fStack_62c;
    }
    else {
      uVar19 = extractps(auVar158,2);
      *(undefined8 *)(param_1 + (int)local_578._8_4_) = uVar19;
      if ((char)bVar48 < '\0') goto LAB_1409c49dc;
LAB_1409c46cd:
      auVar139._0_4_ = (fVar162 + fVar97) * fVar182 + local_648;
      auVar139._4_4_ = (fVar171 + fVar106) * fVar95 + fStack_644;
      auVar139._8_4_ = (fVar120 + fVar104) * fVar93 + fStack_640;
      auVar139._12_4_ = (fVar174 + fVar107) * fVar102 + fStack_63c;
      if ((bVar48 & 1) == 0) goto LAB_1409c46de;
LAB_1409c49ff:
      *(int *)(param_1 + 4 + (longlong)(int)local_578._0_4_) = auVar139._0_4_;
      if ((bVar48 & 2) != 0) goto LAB_1409c4a12;
LAB_1409c46e7:
      if ((bVar48 & 4) == 0) goto LAB_1409c46f8;
LAB_1409c4a2f:
      uVar19 = extractps(auVar139,2);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._8_4_) = uVar19;
      fVar123 = (fVar99 + fVar121) * fVar182;
      fVar95 = (fVar59 + fVar234) * fVar95;
      fVar93 = (fVar100 + fVar232) * fVar93;
      fVar102 = (fVar101 + fVar184) * fVar102;
      if ((char)bVar48 < '\0') goto LAB_1409c4a4b;
LAB_1409c4708:
      auVar159._0_4_ = fVar123 + local_638;
      auVar159._4_4_ = fVar95 + fStack_634;
      auVar159._8_4_ = fVar93 + fStack_630;
      auVar159._12_4_ = fVar102 + fStack_62c;
    }
    if ((bVar48 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)(int)local_578._0_4_) = auVar159._0_4_;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar159,1);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._4_4_) = uVar19;
    }
    if ((bVar48 & 4) != 0) {
      uVar19 = extractps(auVar159,2);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._8_4_) = uVar19;
    }
    if ((char)bVar48 < '\0') {
      uVar19 = extractps(auVar159,3);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._12_4_) = uVar19;
    }
    if ((bVar48 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)(int)local_578._0_4_) = fVar182;
    }
    if ((bVar48 & 2) != 0) {
      uVar19 = extractps(auVar188,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._4_4_) = uVar19;
    }
    if ((bVar48 & 4) != 0) {
      uVar19 = extractps(auVar188,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._8_4_) = uVar19;
    }
    iVar37 = CONCAT31((int3)((uint)iVar49 >> 8),bVar48);
    if ((char)bVar48 < '\0') {
      uVar19 = extractps(auVar188,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._12_4_) = uVar19;
      iVar37 = local_578._12_4_;
    }
  }
  auVar86._0_4_ = -(uint)(0.0 < (float)local_7e8._0_4_) & local_5f8._0_4_;
  auVar86._4_4_ = -(uint)(0.0 < (float)local_7e8._4_4_) & local_5f8._4_4_;
  auVar86._8_4_ = -(uint)(0.0 < fStack_7e0) & local_5f8._8_4_;
  auVar86._12_4_ = -(uint)(0.0 < fStack_7dc) & local_5f8._12_4_;
  iVar49 = movmskps(iVar37,auVar86);
  iVar37 = 0;
  if (iVar49 == 0) goto LAB_1409c4862;
  bVar48 = (char)((char)iVar49 << 4) >> 4;
  auVar87._0_4_ = local_688 - fVar122 * (float)local_7e8._0_4_;
  auVar87._4_4_ = fStack_684 - fVar141 * (float)local_7e8._4_4_;
  auVar87._8_4_ = fStack_680 - fVar145 * fStack_7e0;
  auVar87._12_4_ = fStack_67c - fVar149 * fStack_7dc;
  if ((bVar48 & 1) == 0) {
    if ((bVar48 & 2) == 0) goto LAB_1409c47c1;
LAB_1409c4b4e:
    uVar19 = extractps(auVar87,1);
    *(undefined8 *)(param_1 + auVar237._4_4_) = uVar19;
    if ((bVar48 & 4) != 0) goto LAB_1409c4b69;
LAB_1409c47d1:
    if (-1 < (char)bVar48) goto LAB_1409c47e5;
LAB_1409c4b88:
    uVar19 = extractps(auVar87,3);
    *(undefined8 *)(param_1 + auVar237._12_4_) = uVar19;
    auVar140._0_4_ = local_678 - fVar162 * (float)local_7e8._0_4_;
    auVar140._4_4_ = fStack_674 - fVar171 * (float)local_7e8._4_4_;
    auVar140._8_4_ = fStack_670 - fVar120 * fStack_7e0;
    auVar140._12_4_ = fStack_66c - fVar174 * fStack_7dc;
    if ((bVar48 & 1) != 0) goto LAB_1409c4ba7;
LAB_1409c47f2:
    if ((bVar48 & 2) == 0) goto LAB_1409c47fb;
LAB_1409c4bba:
    uVar19 = extractps(auVar140,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar237._4_4_) = uVar19;
    if ((bVar48 & 4) != 0) goto LAB_1409c4bcf;
LAB_1409c4804:
    if (-1 < (char)bVar48) goto LAB_1409c4818;
LAB_1409c4bef:
    uVar19 = extractps(auVar140,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar237._12_4_) = uVar19;
    auVar88._0_4_ = local_668 - fVar99 * (float)local_7e8._0_4_;
    auVar88._4_4_ = fStack_664 - fVar59 * (float)local_7e8._4_4_;
    auVar88._8_4_ = fStack_660 - fVar100 * fStack_7e0;
    auVar88._12_4_ = fStack_65c - fVar101 * fStack_7dc;
  }
  else {
    *(float *)(param_1 + auVar237._0_4_) = auVar87._0_4_;
    if ((bVar48 & 2) != 0) goto LAB_1409c4b4e;
LAB_1409c47c1:
    if ((bVar48 & 4) == 0) goto LAB_1409c47d1;
LAB_1409c4b69:
    uVar19 = extractps(auVar87,2);
    *(undefined8 *)(param_1 + auVar237._8_4_) = uVar19;
    if ((char)bVar48 < '\0') goto LAB_1409c4b88;
LAB_1409c47e5:
    auVar140._0_4_ = local_678 - fVar162 * (float)local_7e8._0_4_;
    auVar140._4_4_ = fStack_674 - fVar171 * (float)local_7e8._4_4_;
    auVar140._8_4_ = fStack_670 - fVar120 * fStack_7e0;
    auVar140._12_4_ = fStack_66c - fVar174 * fStack_7dc;
    if ((bVar48 & 1) == 0) goto LAB_1409c47f2;
LAB_1409c4ba7:
    *(int *)(param_1 + 4 + (longlong)auVar237._0_4_) = auVar140._0_4_;
    if ((bVar48 & 2) != 0) goto LAB_1409c4bba;
LAB_1409c47fb:
    if ((bVar48 & 4) == 0) goto LAB_1409c4804;
LAB_1409c4bcf:
    uVar19 = extractps(auVar140,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar237._8_4_) = uVar19;
    if ((char)bVar48 < '\0') goto LAB_1409c4bef;
LAB_1409c4818:
    auVar88._0_4_ = local_668 - fVar99 * (float)local_7e8._0_4_;
    auVar88._4_4_ = fStack_664 - fVar59 * (float)local_7e8._4_4_;
    auVar88._8_4_ = fStack_660 - fVar100 * fStack_7e0;
    auVar88._12_4_ = fStack_65c - fVar101 * fStack_7dc;
  }
  if ((bVar48 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar237._0_4_) = auVar88._0_4_;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar88,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar237._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar88,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar237._8_4_) = uVar19;
  }
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar88,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar237._12_4_) = uVar19;
  }
  if ((bVar48 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc + (longlong)auVar237._0_4_) = local_7e8._0_4_;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar108,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar237._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar108,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar237._8_4_) = uVar19;
  }
  iVar37 = CONCAT31((int3)((uint)iVar49 >> 8),bVar48);
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar108,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar237._12_4_) = uVar19;
    iVar37 = auVar237._12_4_;
  }
LAB_1409c4862:
  auVar89._0_4_ = -(uint)(0.0 < fVar151) & local_5f8._0_4_;
  auVar89._4_4_ = -(uint)(0.0 < fVar152) & local_5f8._4_4_;
  auVar89._8_4_ = -(uint)(0.0 < fVar186) & local_5f8._8_4_;
  auVar89._12_4_ = -(uint)(0.0 < fVar193) & local_5f8._12_4_;
  iVar37 = movmskps(iVar37,auVar89);
  if (iVar37 == 0) {
    return;
  }
  bVar48 = (char)((char)iVar37 << 4) >> 4;
  auVar90._0_4_ = local_6b8 - fVar60 * fVar151;
  auVar90._4_4_ = fStack_6b4 - fVar61 * fVar152;
  auVar90._8_4_ = fStack_6b0 - fVar94 * fVar186;
  auVar90._12_4_ = fStack_6ac - fVar98 * fVar193;
  if ((bVar48 & 1) != 0) {
    *(float *)(param_1 + (int)local_568._0_4_) = auVar90._0_4_;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar90,1);
    *(undefined8 *)(param_1 + (int)local_568._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar90,2);
    *(undefined8 *)(param_1 + (int)local_568._8_4_) = uVar19;
  }
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar90,3);
    *(undefined8 *)(param_1 + (int)local_568._12_4_) = uVar19;
    auVar118._0_4_ = local_6a8 - fVar97 * fVar151;
    auVar118._4_4_ = fStack_6a4 - fVar106 * fVar152;
    auVar118._8_4_ = fStack_6a0 - fVar104 * fVar186;
    auVar118._12_4_ = fStack_69c - fVar107 * fVar193;
  }
  else {
    auVar118._0_4_ = local_6a8 - fVar97 * fVar151;
    auVar118._4_4_ = fStack_6a4 - fVar106 * fVar152;
    auVar118._8_4_ = fStack_6a0 - fVar104 * fVar186;
    auVar118._12_4_ = fStack_69c - fVar107 * fVar193;
  }
  if ((bVar48 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_568._0_4_) = auVar118._0_4_;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar118,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_568._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar118,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_568._8_4_) = uVar19;
  }
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar118,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_568._12_4_) = uVar19;
    auVar91._0_4_ = local_698 - fVar121 * fVar151;
    auVar91._4_4_ = fStack_694 - fVar234 * fVar152;
    auVar91._8_4_ = fStack_690 - fVar232 * fVar186;
    auVar91._12_4_ = fStack_68c - fVar184 * fVar193;
  }
  else {
    auVar91._0_4_ = local_698 - fVar121 * fVar151;
    auVar91._4_4_ = fStack_694 - fVar234 * fVar152;
    auVar91._8_4_ = fStack_690 - fVar232 * fVar186;
    auVar91._12_4_ = fStack_68c - fVar184 * fVar193;
  }
  if ((bVar48 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_568._0_4_) = auVar91._0_4_;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar91,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_568._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar91,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_568._8_4_) = uVar19;
  }
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar91,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_568._12_4_) = uVar19;
  }
  if ((bVar48 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_568._0_4_) = fVar151;
  }
  if ((bVar48 & 2) != 0) {
    uVar19 = extractps(auVar165,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_568._4_4_) = uVar19;
  }
  if ((bVar48 & 4) != 0) {
    uVar19 = extractps(auVar165,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_568._8_4_) = uVar19;
  }
  if ((char)bVar48 < '\0') {
    uVar19 = extractps(auVar165,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_568._12_4_) = uVar19;
  }
  return;
}

// ApplyXPBDStretchBiasConstraintsWithMaps_sse4 @ 1409c4e90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDStretchBiasConstraintsWithMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,float param_8,byte param_9,longlong param_10,
               longlong param_11,byte param_12,longlong param_13,longlong param_14,byte param_15,
               longlong param_16,longlong param_17,byte param_18,longlong param_19,longlong param_20
               ,byte param_21,longlong param_22,longlong param_23,uint param_24)

{
  int *piVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  byte bVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  float *pfVar33;
  longlong lVar34;
  byte bVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  byte bVar41;
  int iVar42;
  longlong lVar43;
  float fVar44;
  float fVar77;
  float fVar79;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  int iVar97;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar98;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined4 uVar99;
  float fVar100;
  float fVar115;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar130;
  float fVar132;
  undefined1 auVar119 [16];
  float fVar131;
  float fVar133;
  float fVar134;
  float fVar135;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar136;
  float fVar143;
  float fVar145;
  undefined1 auVar138 [16];
  int iVar147;
  float fVar148;
  undefined1 auVar139 [16];
  float fVar137;
  float fVar144;
  float fVar146;
  float fVar149;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  float fVar150;
  int iVar155;
  float fVar157;
  int iVar158;
  undefined1 auVar151 [16];
  float fVar156;
  float fVar159;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined4 uVar160;
  float fVar161;
  float fVar162;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar171;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  float fVar172;
  float fVar173;
  float fVar182;
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar187;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  float fVar188;
  float fVar189;
  float fVar193;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  float fVar204;
  float fVar206;
  float fVar207;
  float fVar208;
  undefined1 auVar205 [16];
  undefined1 auVar209 [16];
  float fVar210;
  float fVar214;
  float fVar215;
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  float fVar216;
  undefined1 auVar213 [16];
  float fVar217;
  float fVar218;
  float fVar219;
  float fVar224;
  float fVar225;
  float fVar226;
  float fVar227;
  float fVar228;
  float fVar229;
  float fVar230;
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  float fVar231;
  float fVar233;
  float fVar234;
  undefined1 auVar232 [16];
  float fVar235;
  float fVar236;
  float fVar239;
  float fVar241;
  undefined1 auVar237 [16];
  float fVar240;
  float fVar242;
  float fVar243;
  float fVar244;
  undefined1 auVar238 [16];
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  float local_758;
  float fStack_754;
  float fStack_750;
  float fStack_74c;
  undefined1 local_748 [8];
  float fStack_740;
  float fStack_73c;
  float local_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  undefined8 local_718;
  float fStack_710;
  float fStack_70c;
  ulonglong local_6f8;
  undefined1 local_6b8 [8];
  float fStack_6b0;
  float fStack_6ac;
  undefined1 local_6a8 [8];
  float fStack_6a0;
  float fStack_69c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  undefined1 local_598 [8];
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  undefined1 local_528 [16];
  longlong local_518;
  float *local_508;
  ulonglong local_4f8;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined1 local_2f8 [16];
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  ulonglong local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 extraout_XMM0_Qb;
  
  uVar27 = param_24 + 3;
  if (-1 < (int)param_24) {
    uVar27 = param_24;
  }
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar28 = 0;
    if ((int)param_24 < 1) {
      return;
    }
  }
  else {
    local_448 = param_7;
    fStack_444 = param_7;
    fStack_440 = param_7;
    fStack_43c = param_7;
    local_5a8 = param_8;
    fStack_5a4 = param_8;
    fStack_5a0 = param_8;
    fStack_59c = param_8;
    lVar39 = 0x20;
    uVar28 = 0;
    pfVar33 = (float *)(param_4 + 0x30);
    do {
      local_508 = pfVar33;
      local_4f8 = uVar28;
      local_2a8 = 0;
      if ((param_9 & 1) != 0) {
        local_2a8 = (ulonglong)*(uint *)(param_10 + local_4f8);
      }
      uStack_2a0 = 0;
      uVar98 = 0;
      uVar99 = 0;
      if ((param_12 & 1) != 0) {
        uVar99 = *(undefined4 *)(param_13 + local_4f8);
      }
      if ((param_15 & 1) != 0) {
        uVar98 = *(undefined4 *)(param_16 + local_4f8);
      }
      auVar101 = (undefined1  [16])0x0;
      auVar119 = (undefined1  [16])0x0;
      if ((param_18 & 1) != 0) {
        auVar119 = ZEXT416(*(uint *)(param_19 + local_4f8));
      }
      auVar237 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar39);
      auVar140 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar39);
      piVar1 = (int *)(param_2 + lVar39);
      uVar160 = auVar140._0_4_;
      auVar45._4_4_ = uVar160;
      auVar45._0_4_ = uVar160;
      auVar45._8_4_ = uVar160;
      auVar45._12_4_ = uVar160;
      auVar46._8_4_ = auVar237._8_4_;
      auVar46._12_4_ = auVar237._12_4_;
      auVar138._4_4_ = auVar46._12_4_;
      auVar138._0_4_ = auVar237._0_4_;
      auVar138._8_4_ = auVar237._4_4_;
      auVar138._12_4_ = auVar46._12_4_;
      auVar138 = pblendw(auVar45,auVar138,0x3f);
      auVar46._0_8_ = auVar237._8_8_;
      auVar45 = pblendw(auVar46,auVar140,0xc);
      if ((param_21 & 1) != 0) {
        auVar101 = ZEXT416(*(uint *)(param_22 + local_4f8));
      }
      iVar155 = auVar46._12_4_ * 0x10;
      iVar158 = piVar1[1] << 4;
      local_4e8 = (longlong)(auVar237._0_4_ << 4);
      local_4e0 = (longlong)iVar155;
      local_4d8 = (longlong)(auVar140._8_4_ << 4);
      lVar31 = (longlong)iVar158;
      auVar237 = insertps(ZEXT416(*(uint *)(param_1 + local_4e8)),
                          *(undefined4 *)(param_1 + local_4e0),0x10);
      auVar237 = insertps(auVar237,*(undefined4 *)(param_1 + local_4d8),0x20);
      local_378 = insertps(auVar237,*(undefined4 *)(param_1 + lVar31),0x30);
      auVar237 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_4e8)),
                          *(undefined4 *)(param_1 + 4 + local_4e0),0x10);
      auVar237 = insertps(auVar237,*(undefined4 *)(param_1 + 4 + local_4d8),0x20);
      _local_598 = insertps(auVar237,*(undefined4 *)(param_1 + 4 + lVar31),0x30);
      auVar237 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_4e8)),
                          *(undefined4 *)(param_1 + 8 + local_4e0),0x10);
      auVar237 = insertps(auVar237,*(undefined4 *)(param_1 + 8 + local_4d8),0x20);
      auVar151 = insertps(auVar237,*(undefined4 *)(param_1 + 8 + lVar31),0x30);
      uVar6 = *(uint *)(param_1 + 0xc + local_4e8);
      local_3c8 = ZEXT416(uVar6);
      uVar7 = *(uint *)(param_1 + 0xc + local_4e0);
      local_3b8 = ZEXT416(uVar7);
      iVar147 = piVar1[2] << 4;
      local_4d0 = (longlong)(auVar138._8_4_ << 4);
      local_4c8 = (longlong)(auVar138._12_4_ * 0x10);
      local_4c0 = (longlong)(auVar140._12_4_ << 4);
      lVar34 = (longlong)iVar147;
      fVar169 = local_508[-0xc];
      fVar219 = local_508[-0xb];
      fVar171 = local_508[-10];
      fVar226 = local_508[-9];
      fVar100 = local_508[-8];
      fVar115 = local_508[-7];
      fVar189 = local_508[-6];
      fVar194 = local_508[-5];
      fVar162 = local_508[-4];
      fVar207 = local_508[-3];
      fVar167 = local_508[-2];
      fVar208 = local_508[-1];
      fVar196 = *local_508;
      fVar198 = local_508[1];
      fVar204 = local_508[2];
      fVar206 = local_508[3];
      auVar237 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar39);
      auVar140 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar39);
      pfVar33 = (float *)(param_3 + lVar39);
      auVar46 = insertps(auVar140,auVar237,0x8c);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + local_4d0)),
                          *(undefined4 *)(param_1 + local_4c8),0x10);
      auVar138 = insertps(auVar138,*(undefined4 *)(param_1 + local_4c0),0x20);
      local_348 = insertps(auVar138,*(undefined4 *)(param_1 + lVar34),0x30);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_4d0)),
                          *(undefined4 *)(param_1 + 4 + local_4c8),0x10);
      auVar138 = insertps(auVar138,*(undefined4 *)(param_1 + 4 + local_4c0),0x20);
      local_368 = insertps(auVar138,*(undefined4 *)(param_1 + 4 + lVar34),0x30);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_4d0)),
                          *(undefined4 *)(param_1 + 8 + local_4c8),0x10);
      auVar138 = insertps(auVar138,*(undefined4 *)(param_1 + 8 + local_4c0),0x20);
      auVar211 = insertps(ZEXT416(uVar6),local_3b8,0x10);
      local_358 = insertps(auVar138,*(undefined4 *)(param_1 + 8 + lVar34),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + local_4d8);
      local_408 = ZEXT416(uVar8);
      auVar138 = insertps(auVar211,local_408,0x20);
      local_4b8 = (longlong)(auVar45._0_4_ << 4);
      local_4b0 = (longlong)(auVar45._4_4_ * 0x10);
      local_518 = (longlong)(*piVar1 << 4);
      lVar21 = (longlong)(piVar1[3] << 4);
      auVar45 = insertps(ZEXT416(*(uint *)(param_1 + local_4b8)),
                         *(undefined4 *)(param_1 + local_4b0),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_1 + local_518),0x20);
      local_298 = insertps(auVar45,*(undefined4 *)(param_1 + lVar21),0x30);
      auVar212 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_4b8)),
                          *(undefined4 *)(param_1 + 4 + local_4b0),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar31);
      local_438 = ZEXT416(uVar9);
      auVar211 = insertps(auVar138,local_438,0x30);
      uVar10 = *(uint *)(param_1 + 0xc + local_4d0);
      local_3f8 = ZEXT416(uVar10);
      uVar11 = *(uint *)(param_1 + 0xc + local_4c8);
      local_3e8 = ZEXT416(uVar11);
      auVar45 = insertps(local_3f8,local_3e8,0x10);
      auVar138 = insertps(auVar212,*(undefined4 *)(param_1 + 4 + local_518),0x20);
      uVar12 = *(uint *)(param_1 + 0xc + local_4c0);
      local_3d8 = ZEXT416(uVar12);
      auVar45 = insertps(auVar45,local_3d8,0x20);
      local_288 = insertps(auVar138,*(undefined4 *)(param_1 + 4 + lVar21),0x30);
      uVar13 = *(uint *)(param_1 + 0xc + lVar34);
      local_428 = ZEXT416(uVar13);
      auVar199 = insertps(auVar45,local_428,0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_4b8)),
                         *(undefined4 *)(param_1 + 8 + local_4b0),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_1 + 8 + local_518),0x20);
      local_338 = insertps(auVar45,*(undefined4 *)(param_1 + 8 + lVar21),0x30);
      uVar14 = *(uint *)(param_1 + 0xc + local_4b8);
      local_3a8 = ZEXT416(uVar14);
      uVar15 = *(uint *)(param_1 + 0xc + local_4b0);
      local_398 = ZEXT416(uVar15);
      auVar45 = insertps(local_3a8,local_398,0x10);
      uVar16 = *(uint *)(param_1 + 0xc + local_518);
      local_388 = ZEXT416(uVar16);
      auVar45 = insertps(auVar45,local_388,0x20);
      uVar17 = *(uint *)(param_1 + 0xc + lVar21);
      local_418 = ZEXT416(uVar17);
      auVar200 = insertps(auVar45,local_418,0x30);
      auVar119 = pmovsxbd(auVar119,auVar119);
      auVar45 = insertps(ZEXT416(*(uint *)(param_20 + (auVar119._0_4_ << 2))),
                         *(undefined4 *)(param_20 + auVar119._4_4_ * 4),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_20 + (auVar119._8_4_ << 2)),0x20);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_20 + (auVar119._12_4_ << 2)),0x30);
      auVar101 = pmovsxbd(auVar101,auVar101);
      auVar119 = insertps(ZEXT416(*(uint *)(param_23 + (auVar101._0_4_ << 2))),
                          *(undefined4 *)(param_23 + auVar101._4_4_ * 4),0x10);
      auVar119 = insertps(auVar119,*(undefined4 *)(param_23 + (auVar101._8_4_ << 2)),0x20);
      auVar101 = insertps(auVar119,*(undefined4 *)(param_23 + (auVar101._12_4_ << 2)),0x30);
      fVar118 = local_378._0_4_;
      fVar150 = local_348._0_4_ - fVar118;
      fVar239 = local_378._4_4_;
      fVar156 = local_348._4_4_ - fVar239;
      fVar241 = local_378._8_4_;
      fVar157 = local_348._8_4_ - fVar241;
      fVar243 = local_378._12_4_;
      fVar159 = local_348._12_4_ - fVar243;
      fVar136 = local_368._0_4_;
      fVar143 = local_368._4_4_;
      fVar145 = local_368._8_4_;
      fVar148 = local_368._12_4_;
      fVar172 = local_298._0_4_ - fVar118;
      fVar182 = local_298._4_4_ - fVar239;
      fVar184 = local_298._8_4_ - fVar241;
      fVar186 = local_298._12_4_ - fVar243;
      fVar116 = local_288._0_4_;
      fVar130 = local_288._4_4_;
      fVar132 = local_288._8_4_;
      fVar134 = local_288._12_4_;
      fVar161 = fVar172 * fVar219 + fVar150 * fVar169;
      fVar166 = fVar182 * fVar115 + fVar156 * fVar100;
      fVar168 = fVar184 * fVar207 + fVar157 * fVar162;
      fVar170 = fVar186 * fVar198 + fVar159 * fVar196;
      fVar188 = (fVar116 - (float)local_598._0_4_) * fVar219 +
                (fVar136 - (float)local_598._0_4_) * fVar169;
      fVar193 = (fVar130 - (float)local_598._4_4_) * fVar115 +
                (fVar143 - (float)local_598._4_4_) * fVar100;
      fVar195 = (fVar132 - fStack_590) * fVar207 + (fVar145 - fStack_590) * fVar162;
      fVar197 = (fVar134 - fStack_58c) * fVar198 + (fVar148 - fStack_58c) * fVar196;
      local_678 = auVar151._0_4_;
      fStack_674 = auVar151._4_4_;
      fStack_670 = auVar151._8_4_;
      fStack_66c = auVar151._12_4_;
      fVar210 = local_358._0_4_ - local_678;
      fVar214 = local_358._4_4_ - fStack_674;
      fVar215 = local_358._8_4_ - fStack_670;
      fVar216 = local_358._12_4_ - fStack_66c;
      fVar217 = local_338._0_4_ - local_678;
      fVar224 = local_338._4_4_ - fStack_674;
      fVar227 = local_338._8_4_ - fStack_670;
      fVar229 = local_338._12_4_ - fStack_66c;
      fVar44 = fVar217 * fVar219 + fVar210 * fVar169;
      fVar77 = fVar224 * fVar115 + fVar214 * fVar100;
      fVar79 = fVar227 * fVar207 + fVar215 * fVar162;
      fVar88 = fVar229 * fVar198 + fVar216 * fVar196;
      fVar173 = fVar172 * fVar226 + fVar150 * fVar171;
      fVar183 = fVar182 * fVar194 + fVar156 * fVar189;
      fVar185 = fVar184 * fVar208 + fVar157 * fVar167;
      fVar187 = fVar186 * fVar206 + fVar159 * fVar204;
      fVar117 = (fVar116 - (float)local_598._0_4_) * fVar226 +
                (fVar136 - (float)local_598._0_4_) * fVar171;
      fVar131 = (fVar130 - (float)local_598._4_4_) * fVar194 +
                (fVar143 - (float)local_598._4_4_) * fVar189;
      fVar133 = (fVar132 - fStack_590) * fVar208 + (fVar145 - fStack_590) * fVar167;
      fVar135 = (fVar134 - fStack_58c) * fVar206 + (fVar148 - fStack_58c) * fVar204;
      fVar218 = fVar217 * fVar226 + fVar210 * fVar171;
      fVar225 = fVar224 * fVar194 + fVar214 * fVar189;
      fVar228 = fVar227 * fVar208 + fVar215 * fVar167;
      fVar230 = fVar229 * fVar206 + fVar216 * fVar204;
      auVar139._0_4_ = fVar44 * fVar44 + fVar188 * fVar188 + fVar161 * fVar161;
      auVar139._4_4_ = fVar77 * fVar77 + fVar193 * fVar193 + fVar166 * fVar166;
      auVar139._8_4_ = fVar79 * fVar79 + fVar195 * fVar195 + fVar168 * fVar168;
      auVar139._12_4_ = fVar88 * fVar88 + fVar197 * fVar197 + fVar170 * fVar170;
      auVar152._0_4_ = fVar173 * fVar173;
      auVar152._4_4_ = fVar183 * fVar183;
      auVar152._8_4_ = fVar185 * fVar185;
      auVar152._12_4_ = fVar187 * fVar187;
      auVar232._0_4_ = fVar218 * fVar218 + fVar117 * fVar117 + auVar152._0_4_;
      auVar232._4_4_ = fVar225 * fVar225 + fVar131 * fVar131 + auVar152._4_4_;
      auVar232._8_4_ = fVar228 * fVar228 + fVar133 * fVar133 + auVar152._8_4_;
      auVar232._12_4_ = fVar230 * fVar230 + fVar135 * fVar135 + auVar152._12_4_;
      auVar119 = sqrtps(auVar152,auVar139);
      auVar138 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar119);
      fVar137 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar119._0_4_) &
                       auVar138._0_4_);
      fVar144 = (float)(-(uint)(_UNK_1506895d4 < auVar119._4_4_) & auVar138._4_4_);
      fVar146 = (float)(-(uint)(_UNK_1506895d8 < auVar119._8_4_) & auVar138._8_4_);
      fVar149 = (float)(-(uint)(_UNK_1506895dc < auVar119._12_4_) & auVar138._12_4_);
      auVar138 = sqrtps(auVar138,auVar232);
      auVar151 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar138);
      fVar231 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar138._0_4_) &
                       auVar151._0_4_);
      fVar233 = (float)(-(uint)(_UNK_1506895d4 < auVar138._4_4_) & auVar151._4_4_);
      fVar234 = (float)(-(uint)(_UNK_1506895d8 < auVar138._8_4_) & auVar151._8_4_);
      fVar235 = (float)(-(uint)(_UNK_1506895dc < auVar138._12_4_) & auVar151._12_4_);
      local_2e8 = auVar119._0_4_ - auVar101._0_4_ * auVar237._0_4_;
      fStack_2e4 = auVar119._4_4_ - auVar101._4_4_ * auVar237._12_4_;
      fStack_2e0 = auVar119._8_4_ - auVar101._8_4_ * auVar140._8_4_;
      fStack_2dc = auVar119._12_4_ - auVar101._12_4_ * pfVar33[1];
      local_2c8 = auVar138._0_4_ - auVar45._0_4_ * auVar237._4_4_;
      fStack_2c4 = auVar138._4_4_ - auVar45._4_4_ * auVar140._0_4_;
      fStack_2c0 = auVar138._8_4_ - auVar45._8_4_ * auVar140._12_4_;
      fStack_2bc = auVar138._12_4_ - auVar45._12_4_ * pfVar33[2];
      fVar161 = fVar161 * fVar137;
      fVar166 = fVar166 * fVar144;
      fVar168 = fVar168 * fVar146;
      fVar170 = fVar170 * fVar149;
      fVar188 = fVar188 * fVar137;
      fVar193 = fVar193 * fVar144;
      fVar195 = fVar195 * fVar146;
      fVar197 = fVar197 * fVar149;
      fVar173 = fVar173 * fVar231;
      fVar183 = fVar183 * fVar233;
      fVar185 = fVar185 * fVar234;
      fVar187 = fVar187 * fVar235;
      fVar117 = fVar117 * fVar231;
      fVar131 = fVar131 * fVar233;
      fVar133 = fVar133 * fVar234;
      fVar135 = fVar135 * fVar235;
      fVar44 = fVar44 * fVar137;
      fVar77 = fVar77 * fVar144;
      fVar79 = fVar79 * fVar146;
      fVar88 = fVar88 * fVar149;
      fVar218 = fVar218 * fVar231;
      fVar225 = fVar225 * fVar233;
      fVar228 = fVar228 * fVar234;
      fVar230 = fVar230 * fVar235;
      local_748._0_4_ = auVar46._0_4_;
      local_748._4_4_ = auVar46._4_4_;
      local_2b8 = (fVar44 * fVar218 + fVar188 * fVar117 + fVar161 * fVar173) -
                  (float)local_748._0_4_;
      fStack_2b4 = (fVar77 * fVar225 + fVar193 * fVar131 + fVar166 * fVar183) -
                   (float)local_748._4_4_;
      fStack_2b0 = (fVar79 * fVar228 + fVar195 * fVar133 + fVar168 * fVar185) - *pfVar33;
      fStack_2ac = (fVar88 * fVar230 + fVar197 * fVar135 + fVar170 * fVar187) - pfVar33[3];
      fVar150 = fVar171 * fVar173;
      fVar210 = fVar189 * fVar183;
      fVar80 = fVar167 * fVar185;
      fVar89 = fVar204 * fVar187;
      fVar156 = fVar171 * fVar117;
      fVar214 = fVar189 * fVar131;
      fVar81 = fVar167 * fVar133;
      fVar90 = fVar204 * fVar135;
      fVar157 = fVar171 * fVar218;
      fVar215 = fVar189 * fVar225;
      fVar82 = fVar167 * fVar228;
      fVar91 = fVar204 * fVar230;
      fVar159 = fVar226 * fVar173;
      fVar216 = fVar194 * fVar183;
      fVar83 = fVar208 * fVar185;
      fVar92 = fVar206 * fVar187;
      fVar172 = fVar226 * fVar117;
      fVar217 = fVar194 * fVar131;
      fVar84 = fVar208 * fVar133;
      fVar93 = fVar206 * fVar135;
      fVar182 = fVar226 * fVar218;
      fVar224 = fVar194 * fVar225;
      fVar85 = fVar208 * fVar228;
      fVar94 = fVar206 * fVar230;
      local_328 = fVar169 * fVar161;
      fStack_324 = fVar100 * fVar166;
      fStack_320 = fVar162 * fVar168;
      fStack_31c = fVar196 * fVar170;
      fVar184 = fVar169 * fVar188;
      fVar227 = fVar100 * fVar193;
      fVar86 = fVar162 * fVar195;
      fVar95 = fVar196 * fVar197;
      local_588 = fVar169 * fVar44;
      fStack_584 = fVar100 * fVar77;
      fStack_580 = fVar162 * fVar79;
      fStack_57c = fVar196 * fVar88;
      local_318 = fVar219 * fVar161;
      fStack_314 = fVar115 * fVar166;
      fStack_310 = fVar207 * fVar168;
      fStack_30c = fVar198 * fVar170;
      local_308 = fVar219 * fVar188;
      fStack_304 = fVar115 * fVar193;
      fStack_300 = fVar207 * fVar195;
      fStack_2fc = fVar198 * fVar197;
      fVar186 = fVar219 * fVar44;
      fVar229 = fVar115 * fVar77;
      fVar87 = fVar207 * fVar79;
      fVar96 = fVar198 * fVar88;
      local_2d8 = fVar171 * fVar161 * fVar231 + fVar169 * fVar173 * fVar137;
      fStack_2d4 = fVar189 * fVar166 * fVar233 + fVar100 * fVar183 * fVar144;
      fStack_2d0 = fVar167 * fVar168 * fVar234 + fVar162 * fVar185 * fVar146;
      fStack_2cc = fVar204 * fVar170 * fVar235 + fVar196 * fVar187 * fVar149;
      local_2f8._0_4_ = fVar171 * fVar188 * fVar231 + fVar169 * fVar117 * fVar137;
      local_2f8._4_4_ = fVar189 * fVar193 * fVar233 + fVar100 * fVar131 * fVar144;
      local_2f8._8_4_ = fVar167 * fVar195 * fVar234 + fVar162 * fVar133 * fVar146;
      local_2f8._12_4_ = fVar204 * fVar197 * fVar235 + fVar196 * fVar135 * fVar149;
      fVar236 = fVar171 * fVar44 * fVar231 + fVar169 * fVar218 * fVar137;
      fVar240 = fVar189 * fVar77 * fVar233 + fVar100 * fVar225 * fVar144;
      fVar242 = fVar167 * fVar79 * fVar234 + fVar162 * fVar228 * fVar146;
      fVar244 = fVar204 * fVar88 * fVar235 + fVar196 * fVar230 * fVar149;
      fVar162 = fVar161 * fVar231 * fVar226 + fVar173 * fVar137 * fVar219;
      fVar167 = fVar166 * fVar233 * fVar194 + fVar183 * fVar144 * fVar115;
      fVar169 = fVar168 * fVar234 * fVar208 + fVar185 * fVar146 * fVar207;
      fVar171 = fVar170 * fVar235 * fVar206 + fVar187 * fVar149 * fVar198;
      fVar117 = fVar188 * fVar231 * fVar226 + fVar117 * fVar137 * fVar219;
      fVar131 = fVar193 * fVar233 * fVar194 + fVar131 * fVar144 * fVar115;
      fVar133 = fVar195 * fVar234 * fVar208 + fVar133 * fVar146 * fVar207;
      fVar135 = fVar197 * fVar235 * fVar206 + fVar135 * fVar149 * fVar198;
      _local_548 = CONCAT44(fVar131,fVar117);
      _fStack_540 = CONCAT44(fVar135,fVar133);
      fVar137 = fVar44 * fVar231 * fVar226 + fVar218 * fVar137 * fVar219;
      fVar144 = fVar77 * fVar233 * fVar194 + fVar225 * fVar144 * fVar115;
      fVar146 = fVar79 * fVar234 * fVar208 + fVar228 * fVar146 * fVar207;
      fVar149 = fVar88 * fVar235 * fVar206 + fVar230 * fVar149 * fVar198;
      auVar101 = pmovsxbd(local_2f8,(undefined4)local_2a8);
      auVar151._0_4_ = auVar101._0_4_ << 2;
      auVar151._4_4_ = auVar101._4_4_ * 4;
      auVar151._8_4_ = auVar101._8_4_ << 2;
      auVar151._12_4_ = auVar101._12_4_ << 2;
      auVar101 = pmovsxbd(auVar151,uVar99);
      auVar237._0_4_ = auVar101._0_4_ << 2;
      auVar237._4_4_ = auVar101._4_4_ * 4;
      auVar237._8_4_ = auVar101._8_4_ << 2;
      auVar237._12_4_ = auVar101._12_4_ << 2;
      auVar46 = pmovsxbd(auVar237,uVar98);
      iVar78 = auVar46._4_4_ * 4;
      iVar97 = auVar46._12_4_ << 2;
      auVar140 = insertps(ZEXT416(*(uint *)(param_14 + auVar237._0_4_)),
                          *(undefined4 *)(param_14 + auVar237._4_4_),0x10);
      auVar101 = *(undefined1 (*) [16])(param_6 + -0x20 + lVar39);
      fStack_534 = auVar101._12_4_;
      auVar119 = *(undefined1 (*) [16])(param_6 + -0x10 + lVar39);
      fStack_530 = auVar119._8_4_;
      local_538 = auVar101._0_4_;
      pfVar33 = (float *)(param_6 + lVar39);
      fVar100 = *pfVar33;
      fStack_52c = pfVar33[1];
      fVar115 = pfVar33[3];
      auVar138 = insertps(auVar119,auVar101,0x8c);
      auVar140 = insertps(auVar140,*(undefined4 *)(param_14 + auVar237._8_4_),0x20);
      auVar102._0_8_ = auVar138._0_8_;
      auVar102._8_4_ = fVar100;
      auVar102._12_4_ = fVar115;
      auVar45 = insertps(auVar140,*(undefined4 *)(param_14 + auVar237._12_4_),0x30);
      auVar237 = *(undefined1 (*) [16])(param_5 + -0x20 + lVar39);
      auVar140 = *(undefined1 (*) [16])(param_5 + -0x10 + lVar39);
      pfVar2 = (float *)(param_5 + lVar39);
      auVar212 = insertps(auVar140,auVar237,0x8c);
      fVar219 = auVar237._0_4_ * auVar45._0_4_;
      fVar226 = auVar237._12_4_ * auVar45._4_4_;
      fVar44 = auVar140._8_4_ * auVar45._8_4_;
      fVar77 = pfVar2[1] * auVar45._12_4_;
      auVar45 = insertps(ZEXT416(*(uint *)(param_11 + auVar151._0_4_)),
                         *(undefined4 *)(param_11 + auVar151._4_4_),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_11 + auVar151._8_4_),0x20);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_11 + auVar151._12_4_),0x30);
      fVar204 = auVar237._4_4_ * auVar45._0_4_;
      fVar206 = auVar140._0_4_ * auVar45._4_4_;
      fVar207 = auVar140._12_4_ * auVar45._8_4_;
      fVar208 = pfVar2[2] * auVar45._12_4_;
      auVar237 = insertps(ZEXT416(*(uint *)(param_17 + (auVar46._0_4_ << 2))),
                          *(undefined4 *)(param_17 + iVar78),0x10);
      auVar237 = insertps(auVar237,*(undefined4 *)(param_17 + (auVar46._8_4_ << 2)),0x20);
      auVar237 = insertps(auVar237,*(undefined4 *)(param_17 + iVar97),0x30);
      fVar189 = auVar212._0_4_ * auVar237._0_4_;
      fVar194 = auVar212._4_4_ * auVar237._4_4_;
      fVar196 = *pfVar2 * auVar237._8_4_;
      fVar198 = pfVar2[3] * auVar237._12_4_;
      auVar140._0_4_ = param_7 * fVar219 * param_7;
      auVar140._4_4_ = param_7 * fVar226 * param_7;
      auVar140._8_4_ = param_7 * fVar44 * param_7;
      auVar140._12_4_ = param_7 * fVar77 * param_7;
      auVar237 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar140);
      local_718._0_4_ = auVar211._0_4_;
      local_718._4_4_ = auVar211._4_4_;
      fStack_710 = auVar211._8_4_;
      fStack_70c = auVar211._12_4_;
      local_768 = auVar199._0_4_;
      fStack_764 = auVar199._4_4_;
      fStack_760 = auVar199._8_4_;
      fStack_75c = auVar199._12_4_;
      local_758 = auVar200._0_4_;
      fStack_754 = auVar200._4_4_;
      fStack_750 = auVar200._8_4_;
      fStack_74c = auVar200._12_4_;
      auVar211._0_4_ =
           (fVar186 * fVar186 + local_308 * local_308 + local_318 * local_318) * local_758 +
           (local_588 * local_588 + fVar184 * fVar184 + local_328 * local_328) * local_768 +
           ((local_588 + fVar186) * (local_588 + fVar186) +
           (fVar184 + local_308) * (fVar184 + local_308) +
           (local_328 + local_318) * (local_328 + local_318)) * (float)local_718 + auVar237._0_4_;
      auVar211._4_4_ =
           (fVar229 * fVar229 + fStack_304 * fStack_304 + fStack_314 * fStack_314) * fStack_754 +
           (fStack_584 * fStack_584 + fVar227 * fVar227 + fStack_324 * fStack_324) * fStack_764 +
           ((fStack_584 + fVar229) * (fStack_584 + fVar229) +
           (fVar227 + fStack_304) * (fVar227 + fStack_304) +
           (fStack_324 + fStack_314) * (fStack_324 + fStack_314)) * local_718._4_4_ + auVar237._4_4_
      ;
      auVar211._8_4_ =
           (fVar87 * fVar87 + fStack_300 * fStack_300 + fStack_310 * fStack_310) * fStack_750 +
           (fStack_580 * fStack_580 + fVar86 * fVar86 + fStack_320 * fStack_320) * fStack_760 +
           ((fStack_580 + fVar87) * (fStack_580 + fVar87) +
           (fVar86 + fStack_300) * (fVar86 + fStack_300) +
           (fStack_320 + fStack_310) * (fStack_320 + fStack_310)) * fStack_710 + auVar237._8_4_;
      auVar211._12_4_ =
           (fVar96 * fVar96 + fStack_2fc * fStack_2fc + fStack_30c * fStack_30c) * fStack_74c +
           (fStack_57c * fStack_57c + fVar95 * fVar95 + fStack_31c * fStack_31c) * fStack_75c +
           ((fStack_57c + fVar96) * (fStack_57c + fVar96) +
           (fVar95 + fStack_2fc) * (fVar95 + fStack_2fc) +
           (fStack_31c + fStack_30c) * (fStack_31c + fStack_30c)) * fStack_70c + auVar237._12_4_;
      auVar103._0_4_ = local_2e8 - auVar237._0_4_ * local_538;
      auVar103._4_4_ = fStack_2e4 - auVar237._4_4_ * fStack_534;
      auVar103._8_4_ = fStack_2e0 - auVar237._8_4_ * fStack_530;
      auVar103._12_4_ = fStack_2dc - auVar237._12_4_ * fStack_52c;
      auVar237 = divps(auVar103,auVar211);
      fVar168 = (float)(-(uint)(param_8 <= fVar219) & auVar237._0_4_);
      fVar170 = (float)(-(uint)(param_8 <= fVar226) & auVar237._4_4_);
      fVar173 = (float)(-(uint)(param_8 <= fVar44) & auVar237._8_4_);
      fVar183 = (float)(-(uint)(param_8 <= fVar77) & auVar237._12_4_);
      auVar212._0_4_ = param_7 * fVar204 * param_7;
      auVar212._4_4_ = param_7 * fVar206 * param_7;
      auVar212._8_4_ = param_7 * fVar207 * param_7;
      auVar212._12_4_ = param_7 * fVar208 * param_7;
      auVar237 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar212);
      auVar201._0_4_ =
           (fVar182 * fVar182 + fVar172 * fVar172 + fVar159 * fVar159) * local_758 +
           (fVar157 * fVar157 + fVar156 * fVar156 + fVar150 * fVar150) * local_768 +
           ((fVar157 + fVar182) * (fVar157 + fVar182) +
           (fVar156 + fVar172) * (fVar156 + fVar172) + (fVar150 + fVar159) * (fVar150 + fVar159)) *
           (float)local_718 + auVar237._0_4_;
      auVar201._4_4_ =
           (fVar224 * fVar224 + fVar217 * fVar217 + fVar216 * fVar216) * fStack_754 +
           (fVar215 * fVar215 + fVar214 * fVar214 + fVar210 * fVar210) * fStack_764 +
           ((fVar215 + fVar224) * (fVar215 + fVar224) +
           (fVar214 + fVar217) * (fVar214 + fVar217) + (fVar210 + fVar216) * (fVar210 + fVar216)) *
           local_718._4_4_ + auVar237._4_4_;
      auVar201._8_4_ =
           (fVar85 * fVar85 + fVar84 * fVar84 + fVar83 * fVar83) * fStack_750 +
           (fVar82 * fVar82 + fVar81 * fVar81 + fVar80 * fVar80) * fStack_760 +
           ((fVar82 + fVar85) * (fVar82 + fVar85) +
           (fVar81 + fVar84) * (fVar81 + fVar84) + (fVar80 + fVar83) * (fVar80 + fVar83)) *
           fStack_710 + auVar237._8_4_;
      auVar201._12_4_ =
           (fVar94 * fVar94 + fVar93 * fVar93 + fVar92 * fVar92) * fStack_74c +
           (fVar91 * fVar91 + fVar90 * fVar90 + fVar89 * fVar89) * fStack_75c +
           ((fVar91 + fVar94) * (fVar91 + fVar94) +
           (fVar90 + fVar93) * (fVar90 + fVar93) + (fVar89 + fVar92) * (fVar89 + fVar92)) *
           fStack_70c + auVar237._12_4_;
      auVar120._0_4_ = local_2c8 - auVar237._0_4_ * auVar101._4_4_;
      auVar120._4_4_ = fStack_2c4 - auVar237._4_4_ * auVar119._0_4_;
      auVar120._8_4_ = fStack_2c0 - auVar237._8_4_ * auVar119._12_4_;
      auVar120._12_4_ = fStack_2bc - auVar237._12_4_ * pfVar33[2];
      auVar237 = divps(auVar120,auVar201);
      fVar77 = (float)(-(uint)(param_8 <= fVar204) & auVar237._0_4_);
      fVar79 = (float)(-(uint)(param_8 <= fVar206) & auVar237._4_4_);
      fVar88 = (float)(-(uint)(param_8 <= fVar207) & auVar237._8_4_);
      fVar161 = (float)(-(uint)(param_8 <= fVar208) & auVar237._12_4_);
      auVar199._0_4_ = param_7 * fVar189 * param_7;
      auVar199._4_4_ = param_7 * fVar194 * param_7;
      auVar199._8_4_ = param_7 * fVar196 * param_7;
      auVar199._12_4_ = param_7 * fVar198 * param_7;
      auVar237 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar199);
      auVar200._0_4_ =
           (fVar137 * fVar137 + fVar117 * fVar117 + fVar162 * fVar162) * local_758 +
           (fVar236 * fVar236 + local_2f8._0_4_ * local_2f8._0_4_ + local_2d8 * local_2d8) *
           local_768 +
           ((fVar236 + fVar137) * (fVar236 + fVar137) +
           (local_2f8._0_4_ + fVar117) * (local_2f8._0_4_ + fVar117) +
           (local_2d8 + fVar162) * (local_2d8 + fVar162)) * (float)local_718 + auVar237._0_4_;
      auVar200._4_4_ =
           (fVar144 * fVar144 + fVar131 * fVar131 + fVar167 * fVar167) * fStack_754 +
           (fVar240 * fVar240 + local_2f8._4_4_ * local_2f8._4_4_ + fStack_2d4 * fStack_2d4) *
           fStack_764 +
           ((fVar240 + fVar144) * (fVar240 + fVar144) +
           (local_2f8._4_4_ + fVar131) * (local_2f8._4_4_ + fVar131) +
           (fStack_2d4 + fVar167) * (fStack_2d4 + fVar167)) * local_718._4_4_ + auVar237._4_4_;
      auVar200._8_4_ =
           (fVar146 * fVar146 + fVar133 * fVar133 + fVar169 * fVar169) * fStack_750 +
           (fVar242 * fVar242 + local_2f8._8_4_ * local_2f8._8_4_ + fStack_2d0 * fStack_2d0) *
           fStack_760 +
           ((fVar242 + fVar146) * (fVar242 + fVar146) +
           (local_2f8._8_4_ + fVar133) * (local_2f8._8_4_ + fVar133) +
           (fStack_2d0 + fVar169) * (fStack_2d0 + fVar169)) * fStack_710 + auVar237._8_4_;
      auVar200._12_4_ =
           (fVar149 * fVar149 + fVar135 * fVar135 + fVar171 * fVar171) * fStack_74c +
           (fVar244 * fVar244 + local_2f8._12_4_ * local_2f8._12_4_ + fStack_2cc * fStack_2cc) *
           fStack_75c +
           ((fVar244 + fVar149) * (fVar244 + fVar149) +
           (local_2f8._12_4_ + fVar135) * (local_2f8._12_4_ + fVar135) +
           (fStack_2cc + fVar171) * (fStack_2cc + fVar171)) * fStack_70c + auVar237._12_4_;
      local_528._0_4_ = auVar138._0_4_;
      local_528._4_4_ = auVar138._4_4_;
      auVar104._0_4_ = local_2b8 - auVar237._0_4_ * (float)local_528._0_4_;
      auVar104._4_4_ = fStack_2b4 - auVar237._4_4_ * (float)local_528._4_4_;
      auVar104._8_4_ = fStack_2b0 - auVar237._8_4_ * fVar100;
      auVar104._12_4_ = fStack_2ac - auVar237._12_4_ * fVar115;
      auVar237 = divps(auVar104,auVar200);
      fVar207 = (float)(-(uint)(param_8 <= fVar189) & auVar237._0_4_);
      fVar208 = (float)(-(uint)(param_8 <= fVar194) & auVar237._4_4_);
      fVar219 = (float)(-(uint)(param_8 <= fVar196) & auVar237._8_4_);
      fVar226 = (float)(-(uint)(param_8 <= fVar198) & auVar237._12_4_);
      auVar121._0_8_ = CONCAT44(fStack_534 + fVar170,local_538 + fVar168);
      auVar121._8_4_ = fStack_530 + fVar173;
      auVar121._12_4_ = fStack_52c + fVar183;
      auVar174._0_4_ = auVar101._4_4_ + fVar77;
      auVar174._4_4_ = auVar119._0_4_ + fVar79;
      auVar174._8_4_ = auVar119._12_4_ + fVar88;
      auVar174._12_4_ = pfVar33[2] + fVar161;
      auVar105._0_4_ = (float)local_528._0_4_ + fVar207;
      auVar105._4_4_ = (float)local_528._4_4_ + fVar208;
      auVar105._8_4_ = fVar100 + fVar219;
      auVar105._12_4_ = fVar115 + fVar226;
      auVar101._8_4_ = auVar121._8_4_;
      auVar101._0_8_ = auVar121._0_8_;
      auVar101._12_4_ = auVar121._12_4_;
      auVar101 = insertps(auVar101,auVar174,0x30);
      auVar101 = insertps(auVar101,auVar105,0x20);
      puVar4 = (undefined4 *)(param_6 + -0x20 + lVar39);
      *puVar4 = auVar101._0_4_;
      puVar4[1] = auVar101._12_4_;
      puVar4[2] = auVar101._8_4_;
      puVar4[3] = auVar101._4_4_;
      auVar119._4_4_ = auVar174._8_4_;
      auVar119._0_4_ = auVar174._4_4_;
      auVar119._8_4_ = auVar105._0_4_;
      auVar119._12_4_ = auVar105._4_4_;
      auVar101 = blendps(auVar119,auVar121,4);
      puVar4 = (undefined4 *)(param_6 + -0x10 + lVar39);
      *puVar4 = auVar101._0_4_;
      puVar4[1] = auVar101._12_4_;
      puVar4[2] = auVar101._8_4_;
      puVar4[3] = auVar101._4_4_;
      pfVar33 = (float *)(param_6 + lVar39);
      *pfVar33 = auVar105._8_4_;
      pfVar33[1] = auVar121._12_4_;
      pfVar33[2] = auVar174._12_4_;
      pfVar33[3] = auVar105._12_4_;
      fVar166 = local_2d8 * fVar207 + fVar150 * fVar77 + local_328 * fVar168;
      fVar210 = fStack_2d4 * fVar208 + fVar210 * fVar79 + fStack_324 * fVar170;
      fVar80 = fStack_2d0 * fVar219 + fVar80 * fVar88 + fStack_320 * fVar173;
      fVar89 = fStack_2cc * fVar226 + fVar89 * fVar161 + fStack_31c * fVar183;
      fVar100 = local_2f8._0_4_ * fVar207 + fVar156 * fVar77 + fVar184 * fVar168;
      fVar115 = local_2f8._4_4_ * fVar208 + fVar214 * fVar79 + fVar227 * fVar170;
      fVar189 = local_2f8._8_4_ * fVar219 + fVar81 * fVar88 + fVar86 * fVar173;
      fVar194 = local_2f8._12_4_ * fVar226 + fVar90 * fVar161 + fVar95 * fVar183;
      fVar196 = fVar236 * fVar207 + fVar157 * fVar77 + local_588 * fVar168;
      fVar198 = fVar240 * fVar208 + fVar215 * fVar79 + fStack_584 * fVar170;
      fVar204 = fVar242 * fVar219 + fVar82 * fVar88 + fStack_580 * fVar173;
      fVar206 = fVar244 * fVar226 + fVar91 * fVar161 + fStack_57c * fVar183;
      fVar44 = fVar162 * fVar207 + fVar159 * fVar77 + local_318 * fVar168;
      fVar150 = fVar167 * fVar208 + fVar216 * fVar79 + fStack_314 * fVar170;
      fVar169 = fVar169 * fVar219 + fVar83 * fVar88 + fStack_310 * fVar173;
      fVar171 = fVar171 * fVar226 + fVar92 * fVar161 + fStack_30c * fVar183;
      fVar156 = fVar117 * fVar207 + fVar172 * fVar77 + local_308 * fVar168;
      fVar157 = fVar131 * fVar208 + fVar217 * fVar79 + fStack_304 * fVar170;
      fVar159 = fVar133 * fVar219 + fVar84 * fVar88 + fStack_300 * fVar173;
      fVar172 = fVar135 * fVar226 + fVar93 * fVar161 + fStack_2fc * fVar183;
      fVar162 = fVar207 * fVar137 + fVar77 * fVar182 + fVar168 * fVar186;
      fVar207 = fVar208 * fVar144 + fVar79 * fVar224 + fVar170 * fVar229;
      fVar167 = fVar219 * fVar146 + fVar88 * fVar85 + fVar173 * fVar87;
      fVar208 = fVar226 * fVar149 + fVar161 * fVar94 + fVar183 * fVar96;
      auVar47._4_4_ = -(uint)(0.0 < local_718._4_4_);
      auVar47._0_4_ = -(uint)(0.0 < (float)local_718);
      auVar47._8_4_ = -(uint)(0.0 < fStack_710);
      auVar47._12_4_ = -(uint)(0.0 < fStack_70c);
      iVar42 = movmskps(auVar151._8_4_,auVar47);
      if (iVar42 != 0) {
        bVar41 = (char)((char)iVar42 << 4) >> 4;
        fVar118 = fVar118 + (fVar166 + fVar44) * (float)local_718;
        auVar48._4_4_ = fVar239 + (fVar210 + fVar150) * local_718._4_4_;
        auVar48._0_4_ = fVar118;
        auVar48._8_4_ = fVar241 + (fVar80 + fVar169) * fStack_710;
        auVar48._12_4_ = fVar243 + (fVar89 + fVar171) * fStack_70c;
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + local_4e8) = fVar118;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar48,1);
          *(undefined8 *)(param_1 + local_4e0) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar48,2);
          *(undefined8 *)(param_1 + local_4d8) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar48,3);
          *(undefined8 *)(param_1 + lVar31) = uVar19;
          iVar97 = iVar158;
        }
        fVar219 = (float)local_598._0_4_ + (fVar100 + fVar156) * (float)local_718;
        auVar49._4_4_ = (float)local_598._4_4_ + (fVar115 + fVar157) * local_718._4_4_;
        auVar49._0_4_ = fVar219;
        auVar49._8_4_ = fStack_590 + (fVar189 + fVar159) * fStack_710;
        auVar49._12_4_ = fStack_58c + (fVar194 + fVar172) * fStack_70c;
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + 4 + local_4e8) = fVar219;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar49,1);
          *(undefined8 *)(param_1 + 4 + local_4e0) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar49,2);
          *(undefined8 *)(param_1 + 4 + local_4d8) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar49,3);
          *(undefined8 *)(param_1 + 4 + lVar31) = uVar19;
          iVar97 = iVar158;
        }
        auVar50._0_4_ = local_678 + (float)local_718 * (fVar196 + fVar162);
        auVar50._4_4_ = fStack_674 + local_718._4_4_ * (fVar198 + fVar207);
        auVar50._8_4_ = fStack_670 + fStack_710 * (fVar204 + fVar167);
        auVar50._12_4_ = fStack_66c + fStack_70c * (fVar206 + fVar208);
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + 8 + local_4e8) = auVar50._0_4_;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar50,1);
          *(undefined8 *)(param_1 + 8 + local_4e0) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar50,2);
          *(undefined8 *)(param_1 + 8 + local_4d8) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar50,3);
          *(undefined8 *)(param_1 + 8 + lVar31) = uVar19;
          iVar97 = iVar158;
        }
        if ((bVar41 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_4e8) = uVar6;
        }
        if ((bVar41 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4e0) = uVar7;
        }
        if ((bVar41 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4d8) = uVar8;
        }
        iVar78 = iVar155;
        if ((char)bVar41 < '\0') {
          *(uint *)(param_1 + 0xc + lVar31) = uVar9;
          iVar97 = iVar158;
        }
      }
      auVar51._4_4_ = -(uint)(0.0 < fStack_764);
      auVar51._0_4_ = -(uint)(0.0 < local_768);
      auVar51._8_4_ = -(uint)(0.0 < fStack_760);
      auVar51._12_4_ = -(uint)(0.0 < fStack_75c);
      iVar78 = movmskps(iVar78,auVar51);
      if (iVar78 != 0) {
        bVar41 = (char)((char)iVar78 << 4) >> 4;
        auVar52._0_4_ = local_348._0_4_ - fVar166 * local_768;
        auVar52._4_4_ = local_348._4_4_ - fVar210 * fStack_764;
        auVar52._8_4_ = local_348._8_4_ - fVar80 * fStack_760;
        auVar52._12_4_ = local_348._12_4_ - fVar89 * fStack_75c;
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + local_4d0) = auVar52._0_4_;
        }
        if ((bVar41 & 2) == 0) {
          if ((bVar41 & 4) == 0) goto LAB_1409c5fe0;
LAB_1409c62d2:
          uVar19 = extractps(auVar52,2);
          *(undefined8 *)(param_1 + local_4c0) = uVar19;
          if ((char)bVar41 < '\0') goto LAB_1409c62e1;
LAB_1409c5fe8:
          auVar175._0_4_ = fVar136 - fVar100 * local_768;
          auVar175._4_4_ = fVar143 - fVar115 * fStack_764;
          auVar175._8_4_ = fVar145 - fVar189 * fStack_760;
          auVar175._12_4_ = fVar148 - fVar194 * fStack_75c;
        }
        else {
          uVar19 = extractps(auVar52,1);
          *(undefined8 *)(param_1 + local_4c8) = uVar19;
          if ((bVar41 & 4) != 0) goto LAB_1409c62d2;
LAB_1409c5fe0:
          if (-1 < (char)bVar41) goto LAB_1409c5fe8;
LAB_1409c62e1:
          uVar19 = extractps(auVar52,3);
          *(undefined8 *)(param_1 + lVar34) = uVar19;
          auVar175._0_4_ = fVar136 - fVar100 * local_768;
          auVar175._4_4_ = fVar143 - fVar115 * fStack_764;
          auVar175._8_4_ = fVar145 - fVar189 * fStack_760;
          auVar175._12_4_ = fVar148 - fVar194 * fStack_75c;
          iVar97 = iVar147;
        }
        if ((bVar41 & 1) != 0) {
          *(int *)(param_1 + 4 + local_4d0) = auVar175._0_4_;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar175,1);
          *(undefined8 *)(param_1 + 4 + local_4c8) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar175,2);
          *(undefined8 *)(param_1 + 4 + local_4c0) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar175,3);
          *(undefined8 *)(param_1 + 4 + lVar34) = uVar19;
          iVar97 = iVar147;
        }
        auVar53._0_4_ = local_358._0_4_ - local_768 * fVar196;
        auVar53._4_4_ = local_358._4_4_ - fStack_764 * fVar198;
        auVar53._8_4_ = local_358._8_4_ - fStack_760 * fVar204;
        auVar53._12_4_ = local_358._12_4_ - fStack_75c * fVar206;
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + 8 + local_4d0) = auVar53._0_4_;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar53,1);
          *(undefined8 *)(param_1 + 8 + local_4c8) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar53,2);
          *(undefined8 *)(param_1 + 8 + local_4c0) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar53,3);
          *(undefined8 *)(param_1 + 8 + lVar34) = uVar19;
          iVar97 = iVar147;
        }
        if ((bVar41 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_4d0) = uVar10;
        }
        if ((bVar41 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4c8) = uVar11;
        }
        if ((bVar41 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4c0) = uVar12;
        }
        if ((char)bVar41 < '\0') {
          *(uint *)(param_1 + 0xc + lVar34) = uVar13;
          iVar97 = iVar147;
        }
      }
      auVar54._4_4_ = -(uint)(0.0 < fStack_754);
      auVar54._0_4_ = -(uint)(0.0 < local_758);
      auVar54._8_4_ = -(uint)(0.0 < fStack_750);
      auVar54._12_4_ = -(uint)(0.0 < fStack_74c);
      iVar97 = movmskps(iVar97,auVar54);
      if (iVar97 != 0) {
        bVar41 = (char)((char)iVar97 << 4) >> 4;
        auVar141._0_4_ = local_298._0_4_ - fVar44 * local_758;
        auVar141._4_4_ = local_298._4_4_ - fVar150 * fStack_754;
        auVar141._8_4_ = local_298._8_4_ - fVar169 * fStack_750;
        auVar141._12_4_ = local_298._12_4_ - fVar171 * fStack_74c;
        if ((bVar41 & 1) == 0) {
          if ((bVar41 & 2) == 0) goto LAB_1409c60d5;
LAB_1409c6429:
          uVar19 = extractps(auVar141,1);
          *(undefined8 *)(param_1 + local_4b0) = uVar19;
          if ((bVar41 & 4) != 0) goto LAB_1409c643a;
LAB_1409c60de:
          if (-1 < (char)bVar41) goto LAB_1409c60e6;
LAB_1409c644a:
          uVar19 = extractps(auVar141,3);
          *(undefined8 *)(param_1 + lVar21) = uVar19;
          auVar122._0_4_ = fVar116 - fVar156 * local_758;
          auVar122._4_4_ = fVar130 - fVar157 * fStack_754;
          auVar122._8_4_ = fVar132 - fVar159 * fStack_750;
          auVar122._12_4_ = fVar134 - fVar172 * fStack_74c;
        }
        else {
          *(float *)(param_1 + local_4b8) = auVar141._0_4_;
          if ((bVar41 & 2) != 0) goto LAB_1409c6429;
LAB_1409c60d5:
          if ((bVar41 & 4) == 0) goto LAB_1409c60de;
LAB_1409c643a:
          uVar19 = extractps(auVar141,2);
          *(undefined8 *)(param_1 + local_518) = uVar19;
          if ((char)bVar41 < '\0') goto LAB_1409c644a;
LAB_1409c60e6:
          auVar122._0_4_ = fVar116 - fVar156 * local_758;
          auVar122._4_4_ = fVar130 - fVar157 * fStack_754;
          auVar122._8_4_ = fVar132 - fVar159 * fStack_750;
          auVar122._12_4_ = fVar134 - fVar172 * fStack_74c;
        }
        if ((bVar41 & 1) != 0) {
          *(int *)(param_1 + 4 + local_4b8) = auVar122._0_4_;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar122,1);
          *(undefined8 *)(param_1 + 4 + local_4b0) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar122,2);
          *(undefined8 *)(param_1 + 4 + local_518) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar122,3);
          *(undefined8 *)(param_1 + 4 + lVar21) = uVar19;
        }
        auVar55._0_4_ = local_338._0_4_ - local_758 * fVar162;
        auVar55._4_4_ = local_338._4_4_ - fStack_754 * fVar207;
        auVar55._8_4_ = local_338._8_4_ - fStack_750 * fVar167;
        auVar55._12_4_ = local_338._12_4_ - fStack_74c * fVar208;
        if ((bVar41 & 1) != 0) {
          *(float *)(param_1 + 8 + local_4b8) = auVar55._0_4_;
        }
        if ((bVar41 & 2) != 0) {
          uVar19 = extractps(auVar55,1);
          *(undefined8 *)(param_1 + 8 + local_4b0) = uVar19;
        }
        if ((bVar41 & 4) != 0) {
          uVar19 = extractps(auVar55,2);
          *(undefined8 *)(param_1 + 8 + local_518) = uVar19;
        }
        if ((char)bVar41 < '\0') {
          uVar19 = extractps(auVar55,3);
          *(undefined8 *)(param_1 + 8 + lVar21) = uVar19;
        }
        if ((bVar41 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_4b8) = uVar14;
        }
        if ((bVar41 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4b0) = uVar15;
        }
        if ((bVar41 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_518) = uVar16;
        }
        if ((char)bVar41 < '\0') {
          *(uint *)(param_1 + 0xc + lVar21) = uVar17;
        }
      }
      uVar28 = local_4f8 + 4;
      lVar39 = lVar39 + 0x30;
      pfVar33 = local_508 + 0x10;
    } while ((int)uVar28 < (int)(uVar27 & 0xfffffffc));
    local_528 = auVar102;
    if ((int)param_24 <= (int)uVar28) {
      return;
    }
  }
  uVar27 = (uint)uVar28;
  auVar64._0_4_ =
       -(uint)((int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_24);
  auVar64._4_4_ =
       -(uint)((int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_24);
  auVar64._8_4_ = -(uint)((int)(uVar27 | _UNK_150631e08) < (int)param_24);
  auVar64._12_4_ = -(uint)((int)(uVar27 | _UNK_150631e0c) < (int)param_24);
  uVar28 = uVar28 & 0xffffffff;
  pauVar3 = (undefined1 (*) [16])(param_2 + uVar28 * 0xc);
  uVar27 = movmskps(param_24,auVar64);
  bVar41 = (char)((char)uVar27 << 4) >> 4;
  if (uVar27 == 0xf) {
    auVar101 = *pauVar3;
    auVar119 = pauVar3[1];
    uVar98 = auVar119._0_4_;
    auVar164._4_4_ = uVar98;
    auVar164._0_4_ = uVar98;
    auVar164._8_4_ = uVar98;
    auVar164._12_4_ = uVar98;
    uVar98 = auVar101._12_4_;
    auVar221._0_8_ = CONCAT44(uVar98,auVar101._0_4_);
    auVar221._8_4_ = auVar101._4_4_;
    auVar221._12_4_ = uVar98;
    auVar237 = pblendw(auVar164,auVar221,0x3f);
    auVar154._0_8_ = auVar101._8_8_;
    auVar154._8_4_ = auVar101._8_4_;
    auVar154._12_4_ = uVar98;
    auVar101 = pblendw(auVar154,auVar119,0xc);
    auVar106._0_8_ = CONCAT44(*(undefined4 *)(pauVar3[2] + 4),auVar119._8_4_);
    auVar106._8_4_ = auVar119._12_4_;
    auVar106._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar220._8_8_ = auVar106._0_8_;
    auVar220._0_8_ = auVar221._0_8_;
    auVar163._8_8_ = auVar106._8_8_;
    auVar163._0_8_ = auVar237._8_8_;
    auVar153._0_8_ = auVar101._0_8_;
    auVar153._8_4_ = *(undefined4 *)pauVar3[2];
    auVar153._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar56._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar64._0_4_;
    auVar56._4_4_ = _UNK_150b50da4 & auVar64._4_4_;
    auVar56._8_4_ = _UNK_150b50da8 & auVar64._8_4_;
    auVar56._12_4_ = _UNK_150b50dac & auVar64._12_4_;
    lVar39 = extractps(auVar56,1);
    lVar21 = extractps(auVar56,2);
    lVar31 = extractps(auVar56,3);
    auVar220._4_4_ = *(undefined4 *)(*pauVar3 + lVar39);
    auVar220._0_4_ = *(undefined4 *)*pauVar3;
    auVar220._12_4_ = *(undefined4 *)(*pauVar3 + lVar31);
    auVar220._8_4_ = *(undefined4 *)(*pauVar3 + lVar21);
    auVar101 = ___xmm_000000280000001c0000001000000004 & auVar64;
    auVar163._4_4_ = *(undefined4 *)(*pauVar3 + auVar101._4_4_);
    auVar163._0_4_ = *(undefined4 *)(*pauVar3 + auVar101._0_4_);
    auVar163._12_4_ = *(undefined4 *)(*pauVar3 + auVar101._12_4_);
    auVar163._8_4_ = *(undefined4 *)(*pauVar3 + auVar101._8_4_);
    auVar101 = ___xmm_0000002c000000200000001400000008 & auVar64;
    auVar153._4_4_ = *(undefined4 *)(*pauVar3 + auVar101._4_4_);
    auVar153._0_4_ = *(undefined4 *)(*pauVar3 + auVar101._0_4_);
    auVar153._12_4_ = *(undefined4 *)(*pauVar3 + auVar101._12_4_);
    auVar153._8_4_ = *(undefined4 *)(*pauVar3 + auVar101._8_4_);
  }
  auVar238 = ZEXT816(0);
  bVar35 = ~bVar41;
  auVar181 = ZEXT816(0);
  if ((param_9 & 1) != 0) {
    if ((bVar35 & 9) == 0) {
      auVar181 = ZEXT416(*(uint *)(param_10 + uVar28));
    }
    else {
      pbVar18 = (byte *)(param_10 + uVar28);
      if ((uVar27 & 1) != 0) {
        auVar181 = ZEXT116(*pbVar18);
      }
      if ((uVar27 & 2) != 0) {
        auVar75._8_8_ = auVar181._8_8_;
        auVar75._0_8_ = auVar181._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar181 = pblendw(auVar181,auVar75,0xfd);
      }
      if ((uVar27 & 4) != 0) {
        bVar20 = auVar181[3];
        auVar101 = pmovzxwd(auVar181,auVar181);
        auVar181._8_8_ = auVar101._8_8_;
        auVar181._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar27 & 8) != 0) {
        bVar20 = auVar181[2];
        auVar101 = pmovzxwd(auVar181,auVar181);
        auVar181._8_8_ = auVar101._8_8_;
        auVar181._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  if ((param_12 & 1) != 0) {
    if ((bVar35 & 9) == 0) {
      auVar238 = ZEXT416(*(uint *)(param_13 + uVar28));
    }
    else {
      pbVar18 = (byte *)(param_13 + uVar28);
      if ((uVar27 & 1) != 0) {
        auVar238 = ZEXT116(*pbVar18);
      }
      if ((uVar27 & 2) != 0) {
        auVar76._8_8_ = auVar238._8_8_;
        auVar76._0_8_ = auVar238._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar238 = pblendw(auVar238,auVar76,0xfd);
      }
      if ((uVar27 & 4) != 0) {
        bVar20 = auVar238[3];
        auVar101 = pmovzxwd(auVar238,auVar238);
        auVar238._8_8_ = auVar101._8_8_;
        auVar238._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar27 & 8) != 0) {
        bVar20 = auVar238[2];
        auVar101 = pmovzxwd(auVar238,auVar238);
        auVar238._8_8_ = auVar101._8_8_;
        auVar238._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar57 = (undefined1  [16])0x0;
  auVar192 = ZEXT816(0);
  if ((param_15 & 1) != 0) {
    if ((bVar35 & 9) == 0) {
      auVar192 = ZEXT416(*(uint *)(param_16 + uVar28));
    }
    else {
      pbVar18 = (byte *)(param_16 + uVar28);
      if ((uVar27 & 1) != 0) {
        auVar192 = ZEXT116(*pbVar18);
      }
      if ((uVar27 & 2) != 0) {
        auVar113._8_8_ = auVar192._8_8_;
        auVar113._0_8_ = auVar192._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar192 = pblendw(auVar192,auVar113,0xfd);
      }
      if ((uVar27 & 4) != 0) {
        bVar20 = auVar192[3];
        auVar101 = pmovzxwd(auVar192,auVar192);
        auVar192._8_8_ = auVar101._8_8_;
        auVar192._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar27 & 8) != 0) {
        bVar20 = auVar192[2];
        auVar101 = pmovzxwd(auVar192,auVar192);
        auVar192._8_8_ = auVar101._8_8_;
        auVar192._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  if ((param_18 & 1) != 0) {
    if ((bVar35 & 9) == 0) {
      auVar57 = ZEXT416(*(uint *)(param_19 + uVar28));
    }
    else {
      pbVar18 = (byte *)(param_19 + uVar28);
      if ((uVar27 & 1) != 0) {
        auVar57 = ZEXT116(*pbVar18);
      }
      if ((uVar27 & 2) != 0) {
        auVar114._8_8_ = auVar57._8_8_;
        auVar114._0_8_ = auVar57._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar57 = pblendw(auVar57,auVar114,0xfd);
      }
      if ((uVar27 & 4) != 0) {
        bVar20 = auVar57[3];
        auVar101 = pmovzxwd(auVar57,auVar57);
        auVar57._8_8_ = auVar101._8_8_;
        auVar57._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar27 & 8) != 0) {
        bVar20 = auVar57[2];
        auVar101 = pmovzxwd(auVar57,auVar57);
        auVar57._8_8_ = auVar101._8_8_;
        auVar57._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar107 = (undefined1  [16])0x0;
  if ((param_21 & 1) != 0) {
    if ((bVar35 & 9) == 0) {
      auVar107 = ZEXT416(*(uint *)(param_22 + uVar28));
    }
    else {
      pbVar18 = (byte *)(param_22 + uVar28);
      if ((uVar27 & 1) != 0) {
        auVar107 = ZEXT116(*pbVar18);
      }
      if ((uVar27 & 2) != 0) {
        auVar129._8_8_ = auVar107._8_8_;
        auVar129._0_8_ = auVar107._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar107 = pblendw(auVar107,auVar129,0xfd);
      }
      if ((uVar27 & 4) != 0) {
        bVar20 = auVar107[3];
        auVar101 = pmovzxwd(auVar107,auVar107);
        auVar107._8_8_ = auVar101._8_8_;
        auVar107._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar27 & 8) != 0) {
        bVar20 = auVar107[2];
        auVar101 = pmovzxwd(auVar107,auVar107);
        auVar107._8_8_ = auVar101._8_8_;
        auVar107._0_8_ =
             auVar101._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar222._0_4_ = auVar220._0_4_ << 4;
  auVar222._4_4_ = auVar220._4_4_ << 4;
  auVar222._8_4_ = auVar220._8_4_ << 4;
  auVar222._12_4_ = auVar220._12_4_ << 4;
  auVar101 = auVar64 & auVar222;
  pfVar33 = (float *)(auVar101._0_4_ + param_1);
  if ((bVar41 & 1) != 0) {
    local_5d8 = *pfVar33;
  }
  if ((bVar41 & 2) != 0) {
    fStack_5d4 = *(float *)(param_1 + auVar101._4_4_);
  }
  auVar119 = ___xmm_00000004000000040000000400000004 & auVar64;
  if ((bVar41 & 4) != 0) {
    fStack_5d0 = *(float *)(param_1 + auVar101._8_4_);
  }
  uVar22 = (ulonglong)auVar119._0_4_;
  if ((char)bVar41 < '\0') {
    fStack_5cc = *(float *)(param_1 + auVar101._12_4_);
  }
  if ((bVar41 & 1) != 0) {
    local_5c8 = *(float *)(uVar22 + (longlong)pfVar33);
  }
  local_718 = (ulonglong)auVar119._4_4_;
  lVar39 = auVar101._4_4_ + param_1;
  uVar23 = (ulonglong)auVar119._8_4_;
  if ((bVar41 & 2) != 0) {
    fStack_5c4 = *(float *)(local_718 + lVar39);
  }
  auVar237 = ___xmm_00000008000000080000000800000008 & auVar64;
  lVar21 = auVar101._8_4_ + param_1;
  uVar24 = (ulonglong)auVar119._12_4_;
  if ((bVar41 & 4) != 0) {
    fStack_5c0 = *(float *)(uVar23 + lVar21);
  }
  uVar25 = (ulonglong)auVar237._0_4_;
  lVar31 = auVar101._12_4_ + param_1;
  if ((char)bVar41 < '\0') {
    fStack_5bc = *(float *)(uVar24 + lVar31);
  }
  if ((bVar41 & 1) != 0) {
    local_5b8 = *(float *)(uVar25 + (longlong)pfVar33);
  }
  local_6f8 = (ulonglong)auVar237._4_4_;
  local_578._0_4_ = auVar163._0_4_ << 4;
  local_578._4_4_ = auVar163._4_4_ << 4;
  local_578._8_4_ = auVar163._8_4_ << 4;
  local_578._12_4_ = auVar163._12_4_ << 4;
  uVar26 = (ulonglong)auVar237._8_4_;
  if ((bVar41 & 2) != 0) {
    fStack_5b4 = *(float *)(local_6f8 + lVar39);
  }
  auVar101 = auVar64 & local_578;
  uVar37 = (ulonglong)auVar237._12_4_;
  if ((bVar41 & 4) != 0) {
    fStack_5b0 = *(float *)(uVar26 + lVar21);
  }
  if ((char)bVar41 < '\0') {
    fStack_5ac = *(float *)(uVar37 + lVar31);
  }
  lVar34 = (longlong)auVar101._0_4_;
  if ((bVar41 & 1) != 0) {
    local_608 = *(float *)(param_1 + lVar34);
  }
  lVar30 = (longlong)auVar101._4_4_;
  iVar97 = auVar101._8_4_;
  iVar78 = auVar101._12_4_;
  if ((bVar41 & 2) == 0) {
    if ((bVar41 & 4) == 0) goto LAB_1409c6b42;
LAB_1409c6dd5:
    fStack_600 = *(float *)(param_1 + iVar97);
    if ((char)bVar41 < '\0') goto LAB_1409c6def;
LAB_1409c6b4e:
    if ((bVar41 & 1) == 0) goto LAB_1409c6b5b;
LAB_1409c6e0a:
    local_5f8 = *(float *)(uVar22 + lVar34 + param_1);
    if ((bVar41 & 2) != 0) goto LAB_1409c6e2e;
LAB_1409c6b68:
    lVar32 = iVar97 + param_1;
    if ((bVar41 & 4) == 0) goto LAB_1409c6b75;
LAB_1409c6e51:
    fStack_5f0 = *(float *)(uVar23 + lVar32);
    lVar29 = iVar78 + param_1;
    if ((char)bVar41 < '\0') goto LAB_1409c6e73;
LAB_1409c6b81:
    if ((bVar41 & 1) == 0) goto LAB_1409c6b8b;
LAB_1409c6e93:
    local_5e8 = *(float *)(uVar25 + lVar34 + param_1);
    local_558._0_4_ = auVar153._0_4_ << 4;
    local_558._4_4_ = auVar153._4_4_ << 4;
    local_558._8_4_ = auVar153._8_4_ << 4;
    local_558._12_4_ = auVar153._12_4_ << 4;
    if ((bVar41 & 2) != 0) goto LAB_1409c6eb9;
LAB_1409c6b9a:
    auVar101 = auVar64 & local_558;
    if ((bVar41 & 4) == 0) goto LAB_1409c6bad;
LAB_1409c6ee2:
    fStack_5e0 = *(float *)(uVar26 + lVar32);
    iVar97 = auVar101._0_4_;
  }
  else {
    fStack_604 = *(float *)(param_1 + lVar30);
    if ((bVar41 & 4) != 0) goto LAB_1409c6dd5;
LAB_1409c6b42:
    if (-1 < (char)bVar41) goto LAB_1409c6b4e;
LAB_1409c6def:
    fStack_5fc = *(float *)(param_1 + iVar78);
    if ((bVar41 & 1) != 0) goto LAB_1409c6e0a;
LAB_1409c6b5b:
    if ((bVar41 & 2) == 0) goto LAB_1409c6b68;
LAB_1409c6e2e:
    fStack_5f4 = *(float *)(local_718 + lVar30 + param_1);
    lVar32 = iVar97 + param_1;
    if ((bVar41 & 4) != 0) goto LAB_1409c6e51;
LAB_1409c6b75:
    lVar29 = iVar78 + param_1;
    if (-1 < (char)bVar41) goto LAB_1409c6b81;
LAB_1409c6e73:
    fStack_5ec = *(float *)(uVar24 + lVar29);
    if ((bVar41 & 1) != 0) goto LAB_1409c6e93;
LAB_1409c6b8b:
    local_558._0_4_ = auVar153._0_4_ << 4;
    local_558._4_4_ = auVar153._4_4_ << 4;
    local_558._8_4_ = auVar153._8_4_ << 4;
    local_558._12_4_ = auVar153._12_4_ << 4;
    if ((bVar41 & 2) == 0) goto LAB_1409c6b9a;
LAB_1409c6eb9:
    fStack_5e4 = *(float *)(local_6f8 + lVar30 + param_1);
    auVar101 = auVar64 & local_558;
    if ((bVar41 & 4) != 0) goto LAB_1409c6ee2;
LAB_1409c6bad:
    iVar97 = auVar101._0_4_;
  }
  if ((char)bVar41 < '\0') {
    fStack_5dc = *(float *)(uVar37 + lVar29);
  }
  lVar36 = (longlong)iVar97;
  if ((bVar41 & 1) != 0) {
    local_638 = *(float *)(param_1 + lVar36);
  }
  lVar38 = (longlong)auVar101._4_4_;
  if ((bVar41 & 2) != 0) {
    fStack_634 = *(float *)(param_1 + lVar38);
  }
  if ((bVar41 & 4) != 0) {
    fStack_630 = *(float *)(param_1 + auVar101._8_4_);
  }
  if ((char)bVar41 < '\0') {
    fStack_62c = *(float *)(param_1 + auVar101._12_4_);
  }
  if ((bVar41 & 1) != 0) {
    local_628 = *(float *)(uVar22 + lVar36 + param_1);
  }
  if ((bVar41 & 2) != 0) {
    fStack_624 = *(float *)(local_718 + lVar38 + param_1);
  }
  auVar119 = ___xmm_0000000c0000000c0000000c0000000c & auVar64;
  lVar43 = auVar101._8_4_ + param_1;
  if ((bVar41 & 4) != 0) {
    fStack_620 = *(float *)(uVar23 + lVar43);
  }
  uVar22 = (ulonglong)auVar119._0_4_;
  lVar40 = auVar101._12_4_ + param_1;
  if ((char)bVar41 < '\0') {
    fStack_61c = *(float *)(uVar24 + lVar40);
  }
  if ((bVar41 & 1) != 0) {
    local_618 = *(float *)(uVar25 + lVar36 + param_1);
  }
  uVar24 = (ulonglong)auVar119._4_4_;
  uVar23 = (ulonglong)auVar119._8_4_;
  if ((bVar41 & 2) != 0) {
    fStack_614 = *(float *)(local_6f8 + lVar38 + param_1);
  }
  uVar25 = (ulonglong)auVar119._12_4_;
  auVar101 = insertps(ZEXT416(*(uint *)(uVar22 + (longlong)pfVar33)),
                      *(undefined4 *)(uVar24 + lVar39),0x10);
  auVar119 = insertps(ZEXT416(*(uint *)(uVar22 + lVar34 + param_1)),
                      *(undefined4 *)(uVar24 + lVar30 + param_1),0x10);
  auVar237 = insertps(ZEXT416(*(uint *)(uVar22 + lVar36 + param_1)),
                      *(undefined4 *)(uVar24 + lVar38 + param_1),0x10);
  if ((bVar41 & 4) != 0) {
    fStack_610 = *(float *)(uVar26 + lVar43);
  }
  auVar101 = insertps(auVar101,*(undefined4 *)(uVar23 + lVar21),0x20);
  auVar119 = insertps(auVar119,*(undefined4 *)(uVar23 + lVar32),0x20);
  auVar237 = insertps(auVar237,*(undefined4 *)(uVar23 + lVar43),0x20);
  if (((char)bVar41 < '\0') && (fStack_60c = *(float *)(uVar37 + lVar40), (bVar35 & 0xf) == 0)) {
    lVar39 = uVar28 * 0x10;
    auVar140 = *(undefined1 (*) [16])(param_4 + lVar39);
    puVar4 = (undefined4 *)(param_4 + 0x10 + lVar39);
    auVar46 = *(undefined1 (*) [16])(param_4 + 0x20 + lVar39);
    puVar5 = (undefined4 *)(param_4 + 0x30 + lVar39);
    auVar205._8_4_ = auVar140._4_4_;
    auVar205._0_8_ = auVar140._0_8_;
    auVar205._12_4_ = puVar4[1];
    local_128._4_4_ = *puVar4;
    local_128._0_4_ = auVar140._0_4_;
    auVar203._0_8_ = CONCAT44(puVar4[2],auVar140._8_4_);
    auVar203._8_4_ = auVar140._12_4_;
    auVar203._12_4_ = puVar4[3];
    auVar142._0_8_ = auVar46._0_8_;
    auVar142._8_4_ = auVar46._4_4_;
    auVar142._12_4_ = puVar5[1];
    local_118._8_8_ = auVar142._8_8_;
    local_128._12_4_ = *puVar5;
    local_128._8_4_ = auVar46._0_4_;
    auVar165._0_8_ = CONCAT44(puVar5[2],auVar46._8_4_);
    auVar165._8_4_ = auVar46._12_4_;
    auVar165._12_4_ = puVar5[3];
    local_118._0_8_ = auVar205._8_8_;
    local_108._8_8_ = auVar165._0_8_;
    local_108._0_8_ = auVar203._0_8_;
    local_f8._8_8_ = auVar165._8_8_;
    local_f8._0_8_ = auVar203._8_8_;
  }
  else {
    auVar123._0_4_ = ___xmm_00000030000000200000001000000000 & auVar64._0_4_;
    auVar123._4_4_ = _UNK_150b511c4 & auVar64._4_4_;
    auVar123._8_4_ = _UNK_150b511c8 & auVar64._8_4_;
    auVar123._12_4_ = _UNK_150b511cc & auVar64._12_4_;
    lVar21 = extractps(auVar123,1);
    lVar34 = extractps(auVar123,2);
    lVar30 = extractps(auVar123,3);
    lVar39 = param_4 + uVar28 * 0x10;
    auVar140 = insertps(ZEXT416(*(uint *)(param_4 + uVar28 * 0x10)),*(undefined4 *)(lVar21 + lVar39)
                        ,0x10);
    auVar140 = insertps(auVar140,*(undefined4 *)(lVar34 + lVar39),0x20);
    local_128 = insertps(auVar140,*(undefined4 *)(lVar30 + lVar39),0x30);
    auVar140 = ___xmm_00000034000000240000001400000004 & auVar64;
    auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar140._0_4_ + lVar39)),
                       *(undefined4 *)((ulonglong)auVar140._4_4_ + lVar39),0x10);
    auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._8_4_ + lVar39),0x20);
    local_118 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._12_4_ + lVar39),0x30);
    auVar140 = ___xmm_00000038000000280000001800000008 & auVar64;
    auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar140._0_4_ + lVar39)),
                       *(undefined4 *)((ulonglong)auVar140._4_4_ + lVar39),0x10);
    auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._8_4_ + lVar39),0x20);
    local_108 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._12_4_ + lVar39),0x30);
    auVar140 = ___xmm_0000003c0000002c0000001c0000000c & auVar64;
    auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar140._0_4_ + lVar39)),
                       *(undefined4 *)((ulonglong)auVar140._4_4_ + lVar39),0x10);
    auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._8_4_ + lVar39),0x20);
    local_f8 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar140._12_4_ + lVar39),0x30);
  }
  auVar101 = insertps(auVar101,*(undefined4 *)(uVar25 + lVar31),0x30);
  auVar119 = insertps(auVar119,*(undefined4 *)(uVar25 + lVar29),0x30);
  auVar237 = insertps(auVar237,*(undefined4 *)(uVar25 + lVar40),0x30);
  pauVar3 = (undefined1 (*) [16])(param_3 + uVar28 * 0xc);
  if ((bVar35 & 0xf) == 0) {
    auVar140 = *pauVar3;
    auVar46 = pauVar3[1];
    local_158._0_4_ = auVar140._0_4_;
    auVar45 = insertps(auVar46,auVar140,0x8c);
    local_158._4_4_ = auVar140._12_4_;
    local_158._8_4_ = auVar46._8_4_;
    local_158._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
    local_148._4_4_ = auVar46._0_4_;
    local_148._0_4_ = auVar140._4_4_;
    local_148._8_4_ = auVar46._12_4_;
    local_148._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    local_138._0_8_ = auVar45._0_8_;
    local_138._8_4_ = *(undefined4 *)pauVar3[2];
    local_138._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar124._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar64._0_4_;
    auVar124._4_4_ = _UNK_150b50da4 & auVar64._4_4_;
    auVar124._8_4_ = _UNK_150b50da8 & auVar64._8_4_;
    auVar124._12_4_ = _UNK_150b50dac & auVar64._12_4_;
    lVar39 = extractps(auVar124,1);
    lVar21 = extractps(auVar124,2);
    lVar31 = extractps(auVar124,3);
    auVar140 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar39),0x10);
    auVar140 = insertps(auVar140,*(undefined4 *)(*pauVar3 + lVar21),0x20);
    local_158 = insertps(auVar140,*(undefined4 *)(*pauVar3 + lVar31),0x30);
    auVar140 = ___xmm_000000280000001c0000001000000004 & auVar64;
    auVar46 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar140._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar140._4_4_),0x10);
    auVar46 = insertps(auVar46,*(undefined4 *)(*pauVar3 + auVar140._8_4_),0x20);
    local_148 = insertps(auVar46,*(undefined4 *)(*pauVar3 + auVar140._12_4_),0x30);
    auVar140 = ___xmm_0000002c000000200000001400000008 & auVar64;
    auVar46 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar140._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar140._4_4_),0x10);
    auVar46 = insertps(auVar46,*(undefined4 *)(*pauVar3 + auVar140._8_4_),0x20);
    local_138 = insertps(auVar46,*(undefined4 *)(*pauVar3 + auVar140._12_4_),0x30);
  }
  auVar140 = pmovsxbd(auVar57,auVar57);
  auVar58._0_4_ = auVar140._0_4_ << 2;
  auVar58._4_4_ = auVar140._4_4_ << 2;
  auVar58._8_4_ = auVar140._8_4_ << 2;
  auVar58._12_4_ = auVar140._12_4_ << 2;
  auVar58 = auVar58 & auVar64;
  auVar140 = insertps(ZEXT416(*(uint *)(param_20 + auVar58._0_4_)),
                      *(undefined4 *)(param_20 + auVar58._4_4_),0x10);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_20 + auVar58._8_4_),0x20);
  local_258 = insertps(auVar140,*(undefined4 *)(param_20 + auVar58._12_4_),0x30);
  auVar140 = pmovsxbd(auVar107,auVar107);
  auVar108._0_4_ = auVar140._0_4_ << 2;
  auVar108._4_4_ = auVar140._4_4_ << 2;
  auVar108._8_4_ = auVar140._8_4_ << 2;
  auVar108._12_4_ = auVar140._12_4_ << 2;
  auVar108 = auVar108 & auVar64;
  auVar140 = insertps(ZEXT416(*(uint *)(param_23 + auVar108._0_4_)),
                      *(undefined4 *)(param_23 + auVar108._4_4_),0x10);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_23 + auVar108._8_4_),0x20);
  local_268 = insertps(auVar140,*(undefined4 *)(param_23 + auVar108._12_4_),0x30);
  local_568 = auVar64;
  local_278 = auVar64;
  auVar59._0_8_ =
       FUN_1409aeab0(&local_5d8,&local_608,&local_638,local_128,local_158,local_258,local_268,
                     &local_228,&local_238,&local_248,&local_478,&local_4a8,&local_188,&local_1b8,
                     &local_1e8,&local_218,local_278);
  auVar59._8_8_ = extraout_XMM0_Qb;
  auVar140 = pmovsxbd(auVar59,auVar181);
  auVar60._0_4_ = auVar140._0_4_ << 2;
  auVar60._4_4_ = auVar140._4_4_ << 2;
  auVar60._8_4_ = auVar140._8_4_ << 2;
  auVar60._12_4_ = auVar140._12_4_ << 2;
  auVar60 = auVar60 & auVar64;
  auVar140 = insertps(ZEXT416(*(uint *)(param_11 + auVar60._0_4_)),
                      *(undefined4 *)(param_11 + auVar60._4_4_),0x10);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_11 + auVar60._8_4_),0x20);
  auVar46 = insertps(auVar140,*(undefined4 *)(param_11 + auVar60._12_4_),0x30);
  auVar140 = pmovsxbd(auVar60,auVar238);
  auVar61._0_4_ = auVar140._0_4_ << 2;
  auVar61._4_4_ = auVar140._4_4_ << 2;
  auVar61._8_4_ = auVar140._8_4_ << 2;
  auVar61._12_4_ = auVar140._12_4_ << 2;
  auVar61 = auVar61 & auVar64;
  auVar140 = insertps(ZEXT416(*(uint *)(param_14 + auVar61._0_4_)),
                      *(undefined4 *)(param_14 + auVar61._4_4_),0x10);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_14 + auVar61._8_4_),0x20);
  auVar45 = insertps(auVar140,*(undefined4 *)(param_14 + auVar61._12_4_),0x30);
  auVar140 = pmovsxbd(auVar61,auVar192);
  auVar62._0_4_ = auVar140._0_4_ << 2;
  auVar62._4_4_ = auVar140._4_4_ << 2;
  auVar62._8_4_ = auVar140._8_4_ << 2;
  auVar62._12_4_ = auVar140._12_4_ << 2;
  auVar62 = auVar62 & auVar64;
  auVar140 = insertps(ZEXT416(*(uint *)(param_17 + auVar62._0_4_)),
                      *(undefined4 *)(param_17 + auVar62._4_4_),0x10);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_17 + auVar62._8_4_),0x20);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_17 + auVar62._12_4_),0x30);
  pauVar3 = (undefined1 (*) [16])(param_6 + uVar28 * 0xc);
  if ((bVar35 & 0xf) == 0) {
    auVar138 = *pauVar3;
    auVar151 = pauVar3[1];
    auVar211 = insertps(auVar151,auVar138,0x8c);
    local_748._4_4_ = auVar138._12_4_;
    local_748._0_4_ = auVar138._0_4_;
    fStack_740 = (float)auVar151._8_4_;
    fStack_73c = (float)*(undefined4 *)(pauVar3[2] + 4);
    local_6a8._4_4_ = auVar151._0_4_;
    local_6a8._0_4_ = auVar138._4_4_;
    fStack_6a0 = (float)auVar151._12_4_;
    fStack_69c = (float)*(undefined4 *)(pauVar3[2] + 8);
    local_6b8 = auVar211._0_8_;
    fStack_6b0 = (float)*(undefined4 *)pauVar3[2];
    fStack_6ac = (float)*(undefined4 *)(pauVar3[2] + 0xc);
    auVar138 = *(undefined1 (*) [16])(param_5 + uVar28 * 0xc);
    auVar151 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar28 * 0xc);
    puVar4 = (undefined4 *)(param_5 + 0x20 + uVar28 * 0xc);
    auVar65._0_4_ = auVar138._0_4_;
    auVar211 = insertps(auVar151,auVar138,0x8c);
    auVar65._4_4_ = auVar138._12_4_;
    auVar65._8_4_ = auVar151._8_4_;
    auVar65._12_4_ = puVar4[1];
    auVar109._4_4_ = auVar151._0_4_;
    auVar109._0_4_ = auVar138._4_4_;
    auVar109._8_4_ = auVar151._12_4_;
    auVar109._12_4_ = puVar4[2];
    auVar125._0_8_ = auVar211._0_8_;
    auVar125._8_4_ = *puVar4;
    auVar125._12_4_ = puVar4[3];
  }
  else {
    auVar63._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar64._0_4_;
    auVar63._4_4_ = _UNK_150b50da4 & auVar64._4_4_;
    auVar63._8_4_ = _UNK_150b50da8 & auVar64._8_4_;
    auVar63._12_4_ = _UNK_150b50dac & auVar64._12_4_;
    lVar21 = extractps(auVar63,1);
    lVar31 = extractps(auVar63,2);
    param_6 = extractps(auVar63,3);
    auVar138 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar21),0x10);
    auVar138 = insertps(auVar138,*(undefined4 *)(*pauVar3 + lVar31),0x20);
    _local_748 = insertps(auVar138,*(undefined4 *)(*pauVar3 + param_6),0x30);
    auVar138 = ___xmm_000000280000001c0000001000000004 & auVar64;
    auVar151 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar138._0_4_)),
                        *(undefined4 *)(*pauVar3 + auVar138._4_4_),0x10);
    auVar151 = insertps(auVar151,*(undefined4 *)(*pauVar3 + auVar138._8_4_),0x20);
    _local_6a8 = insertps(auVar151,*(undefined4 *)(*pauVar3 + auVar138._12_4_),0x30);
    auVar64 = ___xmm_0000002c000000200000001400000008 & auVar64;
    auVar151 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar64._0_4_)),
                        *(undefined4 *)(*pauVar3 + auVar64._4_4_),0x10);
    auVar151 = insertps(auVar151,*(undefined4 *)(*pauVar3 + auVar64._8_4_),0x20);
    _local_6b8 = insertps(auVar151,*(undefined4 *)(*pauVar3 + auVar64._12_4_),0x30);
    lVar39 = param_5 + uVar28 * 0xc;
    auVar151 = insertps(ZEXT416(*(uint *)(param_5 + uVar28 * 0xc)),*(undefined4 *)(lVar21 + lVar39),
                        0x10);
    auVar151 = insertps(auVar151,*(undefined4 *)(lVar31 + lVar39),0x20);
    auVar65 = insertps(auVar151,*(undefined4 *)(param_6 + lVar39),0x30);
    auVar151 = insertps(ZEXT416(*(uint *)((ulonglong)auVar138._0_4_ + lVar39)),
                        *(undefined4 *)((ulonglong)auVar138._4_4_ + lVar39),0x10);
    auVar151 = insertps(auVar151,*(undefined4 *)((ulonglong)auVar138._8_4_ + lVar39),0x20);
    auVar109 = insertps(auVar151,*(undefined4 *)((ulonglong)auVar138._12_4_ + lVar39),0x30);
    auVar138 = insertps(ZEXT416(*(uint *)((ulonglong)auVar64._0_4_ + lVar39)),
                        *(undefined4 *)((ulonglong)auVar64._4_4_ + lVar39),0x10);
    auVar138 = insertps(auVar138,*(undefined4 *)((ulonglong)auVar64._8_4_ + lVar39),0x20);
    auVar125 = insertps(auVar138,*(undefined4 *)((ulonglong)auVar64._12_4_ + lVar39),0x30);
  }
  fVar162 = auVar140._0_4_ * auVar125._0_4_;
  fVar207 = auVar140._4_4_ * auVar125._4_4_;
  fVar167 = auVar140._8_4_ * auVar125._8_4_;
  fVar208 = auVar140._12_4_ * auVar125._12_4_;
  fVar100 = auVar46._0_4_ * auVar109._0_4_;
  fVar115 = auVar46._4_4_ * auVar109._4_4_;
  fVar189 = auVar46._8_4_ * auVar109._8_4_;
  fVar194 = auVar46._12_4_ * auVar109._12_4_;
  fVar196 = auVar45._0_4_ * auVar65._0_4_;
  fVar198 = auVar45._4_4_ * auVar65._4_4_;
  fVar204 = auVar45._8_4_ * auVar65._8_4_;
  fVar206 = auVar45._12_4_ * auVar65._12_4_;
  auVar176._0_4_ = param_7 * fVar196 * param_7;
  auVar176._4_4_ = param_7 * fVar198 * param_7;
  auVar176._8_4_ = param_7 * fVar204 * param_7;
  auVar176._12_4_ = param_7 * fVar206 * param_7;
  auVar140 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar176);
  local_768 = auVar101._0_4_;
  fStack_764 = auVar101._4_4_;
  fStack_760 = auVar101._8_4_;
  fStack_75c = auVar101._12_4_;
  local_718._0_4_ = auVar119._0_4_;
  local_718._4_4_ = auVar119._4_4_;
  fStack_710 = auVar119._8_4_;
  fStack_70c = auVar119._12_4_;
  local_738 = auVar237._0_4_;
  fStack_734 = auVar237._4_4_;
  fStack_730 = auVar237._8_4_;
  fStack_72c = auVar237._12_4_;
  auVar177._0_4_ =
       (local_488 * local_488 + local_498 * local_498 + local_4a8 * local_4a8) * local_738 +
       (local_458 * local_458 + local_468 * local_468 + local_478 * local_478) * (float)local_718 +
       ((local_458 + local_488) * (local_458 + local_488) +
       (local_468 + local_498) * (local_468 + local_498) +
       (local_478 + local_4a8) * (local_478 + local_4a8)) * local_768 + auVar140._0_4_;
  auVar177._4_4_ =
       (fStack_484 * fStack_484 + fStack_494 * fStack_494 + fStack_4a4 * fStack_4a4) * fStack_734 +
       (fStack_454 * fStack_454 + fStack_464 * fStack_464 + fStack_474 * fStack_474) *
       local_718._4_4_ +
       ((fStack_454 + fStack_484) * (fStack_454 + fStack_484) +
       (fStack_464 + fStack_494) * (fStack_464 + fStack_494) +
       (fStack_474 + fStack_4a4) * (fStack_474 + fStack_4a4)) * fStack_764 + auVar140._4_4_;
  auVar177._8_4_ =
       (fStack_480 * fStack_480 + fStack_490 * fStack_490 + fStack_4a0 * fStack_4a0) * fStack_730 +
       (fStack_450 * fStack_450 + fStack_460 * fStack_460 + fStack_470 * fStack_470) * fStack_710 +
       ((fStack_450 + fStack_480) * (fStack_450 + fStack_480) +
       (fStack_460 + fStack_490) * (fStack_460 + fStack_490) +
       (fStack_470 + fStack_4a0) * (fStack_470 + fStack_4a0)) * fStack_760 + auVar140._8_4_;
  auVar177._12_4_ =
       (fStack_47c * fStack_47c + fStack_48c * fStack_48c + fStack_49c * fStack_49c) * fStack_72c +
       (fStack_44c * fStack_44c + fStack_45c * fStack_45c + fStack_46c * fStack_46c) * fStack_70c +
       ((fStack_44c + fStack_47c) * (fStack_44c + fStack_47c) +
       (fStack_45c + fStack_48c) * (fStack_45c + fStack_48c) +
       (fStack_46c + fStack_49c) * (fStack_46c + fStack_49c)) * fStack_75c + auVar140._12_4_;
  auVar66._0_4_ = local_228 - auVar140._0_4_ * (float)local_748._0_4_;
  auVar66._4_4_ = fStack_224 - auVar140._4_4_ * (float)local_748._4_4_;
  auVar66._8_4_ = fStack_220 - auVar140._8_4_ * fStack_740;
  auVar66._12_4_ = fStack_21c - auVar140._12_4_ * fStack_73c;
  auVar140 = divps(auVar66,auVar177);
  fVar196 = (float)(-(uint)(param_8 <= fVar196) & auVar140._0_4_);
  fVar198 = (float)(-(uint)(param_8 <= fVar198) & auVar140._4_4_);
  fVar204 = (float)(-(uint)(param_8 <= fVar204) & auVar140._8_4_);
  fVar206 = (float)(-(uint)(param_8 <= fVar206) & auVar140._12_4_);
  auVar67._0_4_ = param_7 * fVar100 * param_7;
  auVar67._4_4_ = param_7 * fVar115 * param_7;
  auVar67._8_4_ = param_7 * fVar189 * param_7;
  auVar67._12_4_ = param_7 * fVar194 * param_7;
  auVar140 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar67);
  auVar213._0_4_ =
       (local_198 * local_198 + local_1a8 * local_1a8 + local_1b8 * local_1b8) * local_738 +
       (local_168 * local_168 + local_178 * local_178 + local_188 * local_188) * (float)local_718 +
       ((local_168 + local_198) * (local_168 + local_198) +
       (local_178 + local_1a8) * (local_178 + local_1a8) +
       (local_188 + local_1b8) * (local_188 + local_1b8)) * local_768 + auVar140._0_4_;
  auVar213._4_4_ =
       (fStack_194 * fStack_194 + fStack_1a4 * fStack_1a4 + fStack_1b4 * fStack_1b4) * fStack_734 +
       (fStack_164 * fStack_164 + fStack_174 * fStack_174 + fStack_184 * fStack_184) *
       local_718._4_4_ +
       ((fStack_164 + fStack_194) * (fStack_164 + fStack_194) +
       (fStack_174 + fStack_1a4) * (fStack_174 + fStack_1a4) +
       (fStack_184 + fStack_1b4) * (fStack_184 + fStack_1b4)) * fStack_764 + auVar140._4_4_;
  auVar213._8_4_ =
       (fStack_190 * fStack_190 + fStack_1a0 * fStack_1a0 + fStack_1b0 * fStack_1b0) * fStack_730 +
       (fStack_160 * fStack_160 + fStack_170 * fStack_170 + fStack_180 * fStack_180) * fStack_710 +
       ((fStack_160 + fStack_190) * (fStack_160 + fStack_190) +
       (fStack_170 + fStack_1a0) * (fStack_170 + fStack_1a0) +
       (fStack_180 + fStack_1b0) * (fStack_180 + fStack_1b0)) * fStack_760 + auVar140._8_4_;
  auVar213._12_4_ =
       (fStack_18c * fStack_18c + fStack_19c * fStack_19c + fStack_1ac * fStack_1ac) * fStack_72c +
       (fStack_15c * fStack_15c + fStack_16c * fStack_16c + fStack_17c * fStack_17c) * fStack_70c +
       ((fStack_15c + fStack_18c) * (fStack_15c + fStack_18c) +
       (fStack_16c + fStack_19c) * (fStack_16c + fStack_19c) +
       (fStack_17c + fStack_1ac) * (fStack_17c + fStack_1ac)) * fStack_75c + auVar140._12_4_;
  auVar178._0_4_ = local_238 - auVar140._0_4_ * (float)local_6a8._0_4_;
  auVar178._4_4_ = fStack_234 - auVar140._4_4_ * (float)local_6a8._4_4_;
  auVar178._8_4_ = fStack_230 - auVar140._8_4_ * fStack_6a0;
  auVar178._12_4_ = fStack_22c - auVar140._12_4_ * fStack_69c;
  auVar140 = divps(auVar178,auVar213);
  fVar100 = (float)(-(uint)(param_8 <= fVar100) & auVar140._0_4_);
  fVar115 = (float)(-(uint)(param_8 <= fVar115) & auVar140._4_4_);
  fVar189 = (float)(-(uint)(param_8 <= fVar189) & auVar140._8_4_);
  fVar194 = (float)(-(uint)(param_8 <= fVar194) & auVar140._12_4_);
  auVar179._0_4_ = param_7 * fVar162 * param_7;
  auVar179._4_4_ = param_7 * fVar207 * param_7;
  auVar179._8_4_ = param_7 * fVar167 * param_7;
  auVar179._12_4_ = param_7 * fVar208 * param_7;
  auVar140 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar179);
  auVar190._0_4_ =
       (local_1f8 * local_1f8 + local_208 * local_208 + local_218 * local_218) * local_738 +
       (local_1c8 * local_1c8 + local_1d8 * local_1d8 + local_1e8 * local_1e8) * (float)local_718 +
       ((local_1c8 + local_1f8) * (local_1c8 + local_1f8) +
       (local_1d8 + local_208) * (local_1d8 + local_208) +
       (local_1e8 + local_218) * (local_1e8 + local_218)) * local_768 + auVar140._0_4_;
  auVar190._4_4_ =
       (fStack_1f4 * fStack_1f4 + fStack_204 * fStack_204 + fStack_214 * fStack_214) * fStack_734 +
       (fStack_1c4 * fStack_1c4 + fStack_1d4 * fStack_1d4 + fStack_1e4 * fStack_1e4) *
       local_718._4_4_ +
       ((fStack_1c4 + fStack_1f4) * (fStack_1c4 + fStack_1f4) +
       (fStack_1d4 + fStack_204) * (fStack_1d4 + fStack_204) +
       (fStack_1e4 + fStack_214) * (fStack_1e4 + fStack_214)) * fStack_764 + auVar140._4_4_;
  auVar190._8_4_ =
       (fStack_1f0 * fStack_1f0 + fStack_200 * fStack_200 + fStack_210 * fStack_210) * fStack_730 +
       (fStack_1c0 * fStack_1c0 + fStack_1d0 * fStack_1d0 + fStack_1e0 * fStack_1e0) * fStack_710 +
       ((fStack_1c0 + fStack_1f0) * (fStack_1c0 + fStack_1f0) +
       (fStack_1d0 + fStack_200) * (fStack_1d0 + fStack_200) +
       (fStack_1e0 + fStack_210) * (fStack_1e0 + fStack_210)) * fStack_760 + auVar140._8_4_;
  auVar190._12_4_ =
       (fStack_1ec * fStack_1ec + fStack_1fc * fStack_1fc + fStack_20c * fStack_20c) * fStack_72c +
       (fStack_1bc * fStack_1bc + fStack_1cc * fStack_1cc + fStack_1dc * fStack_1dc) * fStack_70c +
       ((fStack_1bc + fStack_1ec) * (fStack_1bc + fStack_1ec) +
       (fStack_1cc + fStack_1fc) * (fStack_1cc + fStack_1fc) +
       (fStack_1dc + fStack_20c) * (fStack_1dc + fStack_20c)) * fStack_75c + auVar140._12_4_;
  auVar209._0_4_ = local_248 - auVar140._0_4_ * (float)local_6b8._0_4_;
  auVar209._4_4_ = fStack_244 - auVar140._4_4_ * (float)local_6b8._4_4_;
  auVar209._8_4_ = fStack_240 - auVar140._8_4_ * fStack_6b0;
  auVar209._12_4_ = fStack_23c - auVar140._12_4_ * fStack_6ac;
  auVar140 = divps(auVar209,auVar190);
  fVar162 = (float)(-(uint)(param_8 <= fVar162) & auVar140._0_4_);
  fVar207 = (float)(-(uint)(param_8 <= fVar207) & auVar140._4_4_);
  fVar167 = (float)(-(uint)(param_8 <= fVar167) & auVar140._8_4_);
  fVar208 = (float)(-(uint)(param_8 <= fVar208) & auVar140._12_4_);
  auVar126._0_4_ = (float)local_748._0_4_ + fVar196;
  auVar126._4_4_ = (float)local_748._4_4_ + fVar198;
  auVar126._8_4_ = fStack_740 + fVar204;
  auVar126._12_4_ = fStack_73c + fVar206;
  auVar223._0_4_ = (float)local_6a8._0_4_ + fVar100;
  auVar223._4_4_ = (float)local_6a8._4_4_ + fVar115;
  auVar223._8_4_ = fStack_6a0 + fVar189;
  auVar223._12_4_ = fStack_69c + fVar194;
  auVar202._0_4_ = (float)local_6b8._0_4_ + fVar162;
  auVar202._4_4_ = (float)local_6b8._4_4_ + fVar207;
  auVar202._8_4_ = fStack_6b0 + fVar167;
  auVar202._12_4_ = fStack_6ac + fVar208;
  if ((bVar35 & 0xf) == 0) {
    auVar180._4_4_ = auVar126._4_4_;
    auVar180._0_4_ = auVar126._0_4_;
    auVar180._8_4_ = auVar126._8_4_;
    auVar180._12_4_ = auVar126._12_4_;
    auVar140 = insertps(auVar126,auVar223,0x30);
    auVar191._4_4_ = auVar223._8_4_;
    auVar191._0_4_ = auVar223._4_4_;
    auVar191._8_4_ = auVar202._0_4_;
    auVar191._12_4_ = auVar202._4_4_;
    auVar140 = insertps(auVar140,auVar202,0x20);
    *(int *)*pauVar3 = auVar140._0_4_;
    *(int *)(*pauVar3 + 4) = auVar140._12_4_;
    *(int *)(*pauVar3 + 8) = auVar140._8_4_;
    *(int *)(*pauVar3 + 0xc) = auVar140._4_4_;
    auVar140 = blendps(auVar191,auVar180,4);
    *(int *)pauVar3[1] = auVar140._0_4_;
    *(int *)(pauVar3[1] + 4) = auVar140._12_4_;
    *(int *)(pauVar3[1] + 8) = auVar140._8_4_;
    *(int *)(pauVar3[1] + 0xc) = auVar140._4_4_;
    *(float *)pauVar3[2] = auVar202._8_4_;
    *(float *)(pauVar3[2] + 4) = auVar126._12_4_;
    *(float *)(pauVar3[2] + 8) = auVar223._12_4_;
    *(float *)(pauVar3[2] + 0xc) = auVar202._12_4_;
  }
  else {
    if ((bVar41 & 1) != 0) {
      *(float *)*pauVar3 = auVar126._0_4_;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar126,1);
      *(undefined8 *)(*pauVar3 + 0xc) = uVar19;
    }
    if ((bVar41 & 4) != 0) {
      uVar19 = extractps(auVar126,2);
      *(undefined8 *)(pauVar3[1] + 8) = uVar19;
    }
    if ((char)bVar41 < '\0') {
      uVar19 = extractps(auVar126,3);
      *(undefined8 *)(pauVar3[2] + 4) = uVar19;
    }
    if ((bVar41 & 1) != 0) {
      *(float *)(*pauVar3 + 4) = auVar223._0_4_;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar223,1);
      *(undefined8 *)pauVar3[1] = uVar19;
    }
    if ((bVar41 & 4) != 0) {
      uVar19 = extractps(auVar223,2);
      *(undefined8 *)(pauVar3[1] + 0xc) = uVar19;
    }
    if ((char)bVar41 < '\0') {
      uVar19 = extractps(auVar223,3);
      *(undefined8 *)(pauVar3[2] + 8) = uVar19;
    }
    if ((bVar41 & 1) != 0) {
      *(float *)(*pauVar3 + 8) = auVar202._0_4_;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar202,1);
      *(undefined8 *)(pauVar3[1] + 4) = uVar19;
    }
    if ((bVar41 & 4) != 0) {
      uVar19 = extractps(auVar202,2);
      *(undefined8 *)pauVar3[2] = uVar19;
    }
    if ((char)bVar41 < '\0') {
      uVar19 = extractps(auVar202,3);
      *(undefined8 *)(pauVar3[2] + 0xc) = uVar19;
    }
  }
  fVar215 = local_1e8 * fVar162 + local_188 * fVar100 + local_478 * fVar196;
  fVar216 = fStack_1e4 * fVar207 + fStack_184 * fVar115 + fStack_474 * fVar198;
  fVar217 = fStack_1e0 * fVar167 + fStack_180 * fVar189 + fStack_470 * fVar204;
  fVar224 = fStack_1dc * fVar208 + fStack_17c * fVar194 + fStack_46c * fVar206;
  fVar186 = local_1d8 * fVar162 + local_178 * fVar100 + local_468 * fVar196;
  fVar77 = fStack_1d4 * fVar207 + fStack_174 * fVar115 + fStack_464 * fVar198;
  fVar210 = fStack_1d0 * fVar167 + fStack_170 * fVar189 + fStack_460 * fVar204;
  fVar214 = fStack_1cc * fVar208 + fStack_16c * fVar194 + fStack_45c * fVar206;
  fVar169 = local_1c8 * fVar162 + local_168 * fVar100 + local_458 * fVar196;
  fVar219 = fStack_1c4 * fVar207 + fStack_164 * fVar115 + fStack_454 * fVar198;
  fVar171 = fStack_1c0 * fVar167 + fStack_160 * fVar189 + fStack_450 * fVar204;
  fVar226 = fStack_1bc * fVar208 + fStack_15c * fVar194 + fStack_44c * fVar206;
  fVar44 = local_218 * fVar162 + local_1b8 * fVar100 + local_4a8 * fVar196;
  fVar150 = fStack_214 * fVar207 + fStack_1b4 * fVar115 + fStack_4a4 * fVar198;
  fVar156 = fStack_210 * fVar167 + fStack_1b0 * fVar189 + fStack_4a0 * fVar204;
  fVar157 = fStack_20c * fVar208 + fStack_1ac * fVar194 + fStack_49c * fVar206;
  fVar159 = local_208 * fVar162 + local_1a8 * fVar100 + local_498 * fVar196;
  fVar172 = fStack_204 * fVar207 + fStack_1a4 * fVar115 + fStack_494 * fVar198;
  fVar182 = fStack_200 * fVar167 + fStack_1a0 * fVar189 + fStack_490 * fVar204;
  fVar184 = fStack_1fc * fVar208 + fStack_19c * fVar194 + fStack_48c * fVar206;
  fVar100 = local_1f8 * fVar162 + local_198 * fVar100 + fVar196 * local_488;
  fVar115 = fStack_1f4 * fVar207 + fStack_194 * fVar115 + fVar198 * fStack_484;
  fVar189 = fStack_1f0 * fVar167 + fStack_190 * fVar189 + fVar204 * fStack_480;
  fVar194 = fStack_1ec * fVar208 + fStack_18c * fVar194 + fVar206 * fStack_47c;
  auVar68._0_4_ = -(uint)(0.0 < local_768) & local_568._0_4_;
  auVar68._4_4_ = -(uint)(0.0 < fStack_764) & local_568._4_4_;
  auVar68._8_4_ = -(uint)(0.0 < fStack_760) & local_568._8_4_;
  auVar68._12_4_ = -(uint)(0.0 < fStack_75c) & local_568._12_4_;
  iVar78 = movmskps((int)param_6,auVar68);
  iVar97 = 0;
  if (iVar78 != 0) {
    bVar41 = (char)((char)iVar78 << 4) >> 4;
    auVar127._0_4_ = (fVar215 + fVar44) * local_768 + local_5d8;
    auVar127._4_4_ = (fVar216 + fVar150) * fStack_764 + fStack_5d4;
    auVar127._8_4_ = (fVar217 + fVar156) * fStack_760 + fStack_5d0;
    auVar127._12_4_ = (fVar224 + fVar157) * fStack_75c + fStack_5cc;
    if ((bVar41 & 1) != 0) {
      *(float *)(param_1 + auVar222._0_4_) = auVar127._0_4_;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar127,1);
      *(undefined8 *)(param_1 + auVar222._4_4_) = uVar19;
    }
    if ((bVar41 & 4) == 0) {
      if (-1 < (char)bVar41) goto LAB_1409c7e8e;
LAB_1409c817b:
      uVar19 = extractps(auVar127,3);
      *(undefined8 *)(param_1 + auVar222._12_4_) = uVar19;
      auVar110._0_4_ = (fVar186 + fVar159) * local_768 + local_5c8;
      auVar110._4_4_ = (fVar77 + fVar172) * fStack_764 + fStack_5c4;
      auVar110._8_4_ = (fVar210 + fVar182) * fStack_760 + fStack_5c0;
      auVar110._12_4_ = (fVar214 + fVar184) * fStack_75c + fStack_5bc;
      if ((bVar41 & 1) != 0) goto LAB_1409c819e;
LAB_1409c7e9f:
      if ((bVar41 & 2) == 0) goto LAB_1409c7ea8;
LAB_1409c81b1:
      uVar19 = extractps(auVar110,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar222._4_4_) = uVar19;
      if ((bVar41 & 4) != 0) goto LAB_1409c81cd;
LAB_1409c7eb8:
      fVar196 = (fVar169 + fVar100) * local_768;
      fStack_764 = (fVar219 + fVar115) * fStack_764;
      fStack_760 = (fVar171 + fVar189) * fStack_760;
      fStack_75c = (fVar226 + fVar194) * fStack_75c;
      if (-1 < (char)bVar41) goto LAB_1409c7ec4;
LAB_1409c81e5:
      uVar19 = extractps(auVar110,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar222._12_4_) = uVar19;
      auVar128._0_4_ = fVar196 + local_5b8;
      auVar128._4_4_ = fStack_764 + fStack_5b4;
      auVar128._8_4_ = fStack_760 + fStack_5b0;
      auVar128._12_4_ = fStack_75c + fStack_5ac;
    }
    else {
      uVar19 = extractps(auVar127,2);
      *(undefined8 *)(param_1 + auVar222._8_4_) = uVar19;
      if ((char)bVar41 < '\0') goto LAB_1409c817b;
LAB_1409c7e8e:
      auVar110._0_4_ = (fVar186 + fVar159) * local_768 + local_5c8;
      auVar110._4_4_ = (fVar77 + fVar172) * fStack_764 + fStack_5c4;
      auVar110._8_4_ = (fVar210 + fVar182) * fStack_760 + fStack_5c0;
      auVar110._12_4_ = (fVar214 + fVar184) * fStack_75c + fStack_5bc;
      if ((bVar41 & 1) == 0) goto LAB_1409c7e9f;
LAB_1409c819e:
      *(int *)(param_1 + 4 + (longlong)auVar222._0_4_) = auVar110._0_4_;
      if ((bVar41 & 2) != 0) goto LAB_1409c81b1;
LAB_1409c7ea8:
      if ((bVar41 & 4) == 0) goto LAB_1409c7eb8;
LAB_1409c81cd:
      uVar19 = extractps(auVar110,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar222._8_4_) = uVar19;
      fVar196 = (fVar169 + fVar100) * local_768;
      fStack_764 = (fVar219 + fVar115) * fStack_764;
      fStack_760 = (fVar171 + fVar189) * fStack_760;
      fStack_75c = (fVar226 + fVar194) * fStack_75c;
      if ((char)bVar41 < '\0') goto LAB_1409c81e5;
LAB_1409c7ec4:
      auVar128._0_4_ = fVar196 + local_5b8;
      auVar128._4_4_ = fStack_764 + fStack_5b4;
      auVar128._8_4_ = fStack_760 + fStack_5b0;
      auVar128._12_4_ = fStack_75c + fStack_5ac;
    }
    if ((bVar41 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)auVar222._0_4_) = auVar128._0_4_;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar128,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar222._4_4_) = uVar19;
    }
    if ((bVar41 & 4) != 0) {
      uVar19 = extractps(auVar128,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar222._8_4_) = uVar19;
    }
    if ((char)bVar41 < '\0') {
      uVar19 = extractps(auVar128,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar222._12_4_) = uVar19;
    }
    if ((bVar41 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar222._0_4_) = local_768;
    }
    if ((bVar41 & 2) != 0) {
      uVar19 = extractps(auVar101,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar222._4_4_) = uVar19;
    }
    if ((bVar41 & 4) != 0) {
      uVar19 = extractps(auVar101,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar222._8_4_) = uVar19;
    }
    iVar97 = CONCAT31((int3)((uint)iVar78 >> 8),bVar41);
    if ((char)bVar41 < '\0') {
      uVar19 = extractps(auVar101,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar222._12_4_) = uVar19;
      iVar97 = auVar222._12_4_;
    }
  }
  auVar69._0_4_ = -(uint)(0.0 < (float)local_718) & local_568._0_4_;
  auVar69._4_4_ = -(uint)(0.0 < local_718._4_4_) & local_568._4_4_;
  auVar69._8_4_ = -(uint)(0.0 < fStack_710) & local_568._8_4_;
  auVar69._12_4_ = -(uint)(0.0 < fStack_70c) & local_568._12_4_;
  iVar78 = movmskps(iVar97,auVar69);
  iVar97 = 0;
  if (iVar78 == 0) goto LAB_1409c8003;
  bVar41 = (char)((char)iVar78 << 4) >> 4;
  auVar70._0_4_ = local_608 - fVar215 * (float)local_718;
  auVar70._4_4_ = fStack_604 - fVar216 * local_718._4_4_;
  auVar70._8_4_ = fStack_600 - fVar217 * fStack_710;
  auVar70._12_4_ = fStack_5fc - fVar224 * fStack_70c;
  if ((bVar41 & 1) == 0) {
    if ((bVar41 & 2) == 0) goto LAB_1409c7f63;
LAB_1409c82cc:
    uVar19 = extractps(auVar70,1);
    *(undefined8 *)(param_1 + (int)local_578._4_4_) = uVar19;
    if ((bVar41 & 4) != 0) goto LAB_1409c82e7;
LAB_1409c7f73:
    if (-1 < (char)bVar41) goto LAB_1409c7f87;
LAB_1409c8306:
    uVar19 = extractps(auVar70,3);
    *(undefined8 *)(param_1 + (int)local_578._12_4_) = uVar19;
    auVar111._0_4_ = local_5f8 - fVar186 * (float)local_718;
    auVar111._4_4_ = fStack_5f4 - fVar77 * local_718._4_4_;
    auVar111._8_4_ = fStack_5f0 - fVar210 * fStack_710;
    auVar111._12_4_ = fStack_5ec - fVar214 * fStack_70c;
    if ((bVar41 & 1) != 0) goto LAB_1409c8325;
LAB_1409c7f94:
    if ((bVar41 & 2) == 0) goto LAB_1409c7f9d;
LAB_1409c8338:
    uVar19 = extractps(auVar111,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._4_4_) = uVar19;
    if ((bVar41 & 4) != 0) goto LAB_1409c834d;
LAB_1409c7fa6:
    if (-1 < (char)bVar41) goto LAB_1409c7fba;
LAB_1409c836d:
    uVar19 = extractps(auVar111,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._12_4_) = uVar19;
    auVar71._0_4_ = local_5e8 - fVar169 * (float)local_718;
    auVar71._4_4_ = fStack_5e4 - fVar219 * local_718._4_4_;
    auVar71._8_4_ = fStack_5e0 - fVar171 * fStack_710;
    auVar71._12_4_ = fStack_5dc - fVar226 * fStack_70c;
  }
  else {
    *(float *)(param_1 + (int)local_578._0_4_) = auVar70._0_4_;
    if ((bVar41 & 2) != 0) goto LAB_1409c82cc;
LAB_1409c7f63:
    if ((bVar41 & 4) == 0) goto LAB_1409c7f73;
LAB_1409c82e7:
    uVar19 = extractps(auVar70,2);
    *(undefined8 *)(param_1 + (int)local_578._8_4_) = uVar19;
    if ((char)bVar41 < '\0') goto LAB_1409c8306;
LAB_1409c7f87:
    auVar111._0_4_ = local_5f8 - fVar186 * (float)local_718;
    auVar111._4_4_ = fStack_5f4 - fVar77 * local_718._4_4_;
    auVar111._8_4_ = fStack_5f0 - fVar210 * fStack_710;
    auVar111._12_4_ = fStack_5ec - fVar214 * fStack_70c;
    if ((bVar41 & 1) == 0) goto LAB_1409c7f94;
LAB_1409c8325:
    *(int *)(param_1 + 4 + (longlong)(int)local_578._0_4_) = auVar111._0_4_;
    if ((bVar41 & 2) != 0) goto LAB_1409c8338;
LAB_1409c7f9d:
    if ((bVar41 & 4) == 0) goto LAB_1409c7fa6;
LAB_1409c834d:
    uVar19 = extractps(auVar111,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_578._8_4_) = uVar19;
    if ((char)bVar41 < '\0') goto LAB_1409c836d;
LAB_1409c7fba:
    auVar71._0_4_ = local_5e8 - fVar169 * (float)local_718;
    auVar71._4_4_ = fStack_5e4 - fVar219 * local_718._4_4_;
    auVar71._8_4_ = fStack_5e0 - fVar171 * fStack_710;
    auVar71._12_4_ = fStack_5dc - fVar226 * fStack_70c;
  }
  if ((bVar41 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_578._0_4_) = auVar71._0_4_;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar71,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar71,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._8_4_) = uVar19;
  }
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar71,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_578._12_4_) = uVar19;
  }
  if ((bVar41 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_578._0_4_) = (float)local_718;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar119,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar119,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._8_4_) = uVar19;
  }
  iVar97 = CONCAT31((int3)((uint)iVar78 >> 8),bVar41);
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar119,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_578._12_4_) = uVar19;
    iVar97 = local_578._12_4_;
  }
LAB_1409c8003:
  auVar72._0_4_ = -(uint)(0.0 < local_738) & local_568._0_4_;
  auVar72._4_4_ = -(uint)(0.0 < fStack_734) & local_568._4_4_;
  auVar72._8_4_ = -(uint)(0.0 < fStack_730) & local_568._8_4_;
  auVar72._12_4_ = -(uint)(0.0 < fStack_72c) & local_568._12_4_;
  iVar97 = movmskps(iVar97,auVar72);
  if (iVar97 == 0) {
    return;
  }
  bVar41 = (char)((char)iVar97 << 4) >> 4;
  auVar73._0_4_ = local_638 - fVar44 * local_738;
  auVar73._4_4_ = fStack_634 - fVar150 * fStack_734;
  auVar73._8_4_ = fStack_630 - fVar156 * fStack_730;
  auVar73._12_4_ = fStack_62c - fVar157 * fStack_72c;
  if ((bVar41 & 1) != 0) {
    *(float *)(param_1 + (int)local_558._0_4_) = auVar73._0_4_;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar73,1);
    *(undefined8 *)(param_1 + (int)local_558._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar73,2);
    *(undefined8 *)(param_1 + (int)local_558._8_4_) = uVar19;
  }
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar73,3);
    *(undefined8 *)(param_1 + (int)local_558._12_4_) = uVar19;
    auVar112._0_4_ = local_628 - fVar159 * local_738;
    auVar112._4_4_ = fStack_624 - fVar172 * fStack_734;
    auVar112._8_4_ = fStack_620 - fVar182 * fStack_730;
    auVar112._12_4_ = fStack_61c - fVar184 * fStack_72c;
  }
  else {
    auVar112._0_4_ = local_628 - fVar159 * local_738;
    auVar112._4_4_ = fStack_624 - fVar172 * fStack_734;
    auVar112._8_4_ = fStack_620 - fVar182 * fStack_730;
    auVar112._12_4_ = fStack_61c - fVar184 * fStack_72c;
  }
  if ((bVar41 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_558._0_4_) = auVar112._0_4_;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar112,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_558._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar112,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_558._8_4_) = uVar19;
  }
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar112,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_558._12_4_) = uVar19;
    auVar74._0_4_ = local_618 - fVar100 * local_738;
    auVar74._4_4_ = fStack_614 - fVar115 * fStack_734;
    auVar74._8_4_ = fStack_610 - fVar189 * fStack_730;
    auVar74._12_4_ = fStack_60c - fVar194 * fStack_72c;
  }
  else {
    auVar74._0_4_ = local_618 - fVar100 * local_738;
    auVar74._4_4_ = fStack_614 - fVar115 * fStack_734;
    auVar74._8_4_ = fStack_610 - fVar189 * fStack_730;
    auVar74._12_4_ = fStack_60c - fVar194 * fStack_72c;
  }
  if ((bVar41 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_558._0_4_) = auVar74._0_4_;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar74,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_558._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar74,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_558._8_4_) = uVar19;
  }
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar74,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_558._12_4_) = uVar19;
  }
  if ((bVar41 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_558._0_4_) = local_738;
  }
  if ((bVar41 & 2) != 0) {
    uVar19 = extractps(auVar237,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_558._4_4_) = uVar19;
  }
  if ((bVar41 & 4) != 0) {
    uVar19 = extractps(auVar237,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_558._8_4_) = uVar19;
  }
  if ((char)bVar41 < '\0') {
    uVar19 = extractps(auVar237,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_558._12_4_) = uVar19;
  }
  return;
}

// ApplyXPBDStretchBiasConstraintsWithDampingAndMaps_sse4 @ 1409c8860

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDStretchBiasConstraintsWithDampingAndMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float param_8,float param_9,byte param_10,
               longlong param_11,longlong param_12,byte param_13,longlong param_14,longlong param_15
               ,byte param_16,longlong param_17,longlong param_18,byte param_19,longlong param_20,
               longlong param_21,byte param_22,longlong param_23,longlong param_24,byte param_25,
               longlong param_26,longlong param_27,uint param_28)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  float *pfVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  byte bVar43;
  longlong lVar44;
  byte bVar45;
  int iVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  int iVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar82;
  int iVar90;
  int iVar98;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  int iVar88;
  float fVar89;
  int iVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  int iVar104;
  float fVar105;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar106;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined4 uVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined4 uVar111;
  int iVar129;
  int iVar130;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined4 uVar131;
  float fVar132;
  float fVar156;
  float fVar157;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar158;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  float fVar159;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined4 uVar160;
  float fVar173;
  undefined1 auVar162 [16];
  float fVar161;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  float fVar174;
  float fVar179;
  float fVar180;
  float fVar181;
  float fVar182;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  float fVar183;
  float fVar191;
  float fVar193;
  undefined1 auVar184 [16];
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  float fVar192;
  float fVar198;
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  float fVar199;
  float fVar203;
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  float fVar204;
  undefined1 auVar202 [16];
  float fVar205;
  float fVar206;
  float fVar212;
  float fVar214;
  undefined1 auVar207 [16];
  float fVar213;
  float fVar215;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  float fVar216;
  float fVar217;
  float fVar220;
  float fVar221;
  float fVar222;
  float fVar223;
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  float fVar224;
  float fVar225;
  float fVar227;
  float fVar228;
  float fVar229;
  float fVar230;
  float fVar231;
  float fVar232;
  float fVar233;
  undefined1 auVar226 [16];
  float fVar234;
  float fVar241;
  float fVar242;
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  float fVar243;
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  float fVar252;
  float fVar253;
  float fVar254;
  float fVar255;
  float fVar256;
  float fVar260;
  float fVar261;
  float fVar262;
  undefined1 auVar257 [16];
  float fVar263;
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  float fVar264;
  float fVar265;
  float fVar266;
  float fVar267;
  float fVar268;
  float fVar269;
  float fVar270;
  float fVar271;
  float fVar272;
  float fVar273;
  float fVar274;
  float fVar275;
  float fVar276;
  float local_828;
  float fStack_824;
  float fStack_820;
  float fStack_81c;
  undefined8 local_818;
  float fStack_810;
  float fStack_80c;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  undefined1 local_7d8 [8];
  float fStack_7d0;
  float fStack_7cc;
  undefined1 local_7c8 [8];
  float fStack_7c0;
  float fStack_7bc;
  float local_7a8;
  float fStack_7a4;
  float fStack_7a0;
  float fStack_79c;
  undefined1 local_798 [8];
  float fStack_790;
  float fStack_78c;
  float local_748;
  float fStack_744;
  float fStack_740;
  float fStack_73c;
  undefined1 local_738 [8];
  float fStack_730;
  float fStack_72c;
  undefined4 local_6f8;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  undefined4 local_6c8;
  float local_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  undefined1 local_5f8 [8];
  float fStack_5f0;
  float fStack_5ec;
  undefined1 local_5e8 [8];
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  undefined1 local_5c8 [8];
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  longlong local_590;
  longlong local_588;
  longlong local_580;
  undefined1 local_578 [8];
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  longlong local_500;
  longlong local_4f8;
  longlong local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  float *local_4b8;
  ulonglong local_4b0;
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_2a8 [16];
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  uVar29 = param_28 + 3;
  if (-1 < (int)param_28) {
    uVar29 = param_28;
  }
  if ((int)(uVar29 & 0xfffffffc) < 1) {
    uVar32 = 0;
  }
  else {
    lVar42 = 0x20;
    uVar32 = 0;
    pfVar39 = (float *)(param_5 + 0x30);
    do {
      local_4b8 = pfVar39;
      local_4b0 = uVar32;
      uVar106 = 0;
      if ((param_10 & 1) != 0) {
        uVar106 = *(undefined4 *)(param_11 + local_4b0);
      }
      uVar59 = 0;
      uVar111 = 0;
      if ((param_13 & 1) == 0) {
        if ((param_16 & 1) == 0) goto LAB_1409c8a24;
LAB_1409ca14b:
        uVar59 = *(undefined4 *)(param_17 + local_4b0);
        if ((param_22 & 1) != 0) goto LAB_1409ca16c;
LAB_1409c8a38:
        uVar160 = 0;
      }
      else {
        uVar111 = *(undefined4 *)(param_14 + local_4b0);
        if ((param_16 & 1) != 0) goto LAB_1409ca14b;
LAB_1409c8a24:
        if ((param_22 & 1) == 0) goto LAB_1409c8a38;
LAB_1409ca16c:
        uVar160 = *(undefined4 *)(param_23 + local_4b0);
      }
      uVar131 = 0;
      if ((param_25 & 1) != 0) {
        uVar131 = *(undefined4 *)(param_26 + local_4b0);
      }
      auVar60 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar42);
      auVar134 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar42);
      piVar1 = (int *)(param_3 + lVar42);
      iVar104 = piVar1[1];
      iVar88 = piVar1[2];
      uVar107 = auVar134._0_4_;
      iVar129 = auVar134._8_4_;
      auVar133._4_4_ = uVar107;
      auVar133._0_4_ = uVar107;
      auVar133._8_4_ = uVar107;
      auVar133._12_4_ = uVar107;
      iVar46 = auVar60._0_4_;
      iVar98 = auVar60._12_4_;
      auVar207._4_4_ = iVar98;
      auVar207._0_4_ = iVar46;
      auVar207._8_4_ = auVar60._4_4_;
      auVar207._12_4_ = iVar98;
      auVar133 = pblendw(auVar133,auVar207,0x3f);
      auVar136._0_8_ = auVar60._8_8_;
      auVar136._8_4_ = auVar60._8_4_;
      auVar136._12_4_ = iVar98;
      auVar207 = pblendw(auVar136,auVar134,0xc);
      auVar60._4_4_ = iVar104;
      auVar60._0_4_ = iVar129;
      iVar130 = auVar134._12_4_;
      auVar60._8_4_ = iVar130;
      auVar60._12_4_ = iVar88;
      auVar134._8_8_ = auVar60._8_8_;
      auVar134._0_8_ = auVar133._8_8_;
      uVar107 = 0;
      if ((param_19 & 1) != 0) {
        uVar107 = *(undefined4 *)(param_20 + local_4b0);
      }
      iVar51 = iVar46 << 4;
      iVar90 = iVar129 << 4;
      local_500 = (longlong)iVar51;
      local_4f8 = (longlong)(iVar98 * 0x10);
      local_4f0 = (longlong)iVar90;
      lVar47 = (longlong)(iVar104 << 4);
      auVar60 = insertps(ZEXT416(*(uint *)(param_1 + local_500)),
                         *(undefined4 *)(param_1 + local_4f8),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_1 + local_4f0),0x20);
      auVar61 = insertps(auVar60,*(undefined4 *)(param_1 + lVar47),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_500)),
                         *(undefined4 *)(param_1 + 4 + local_4f8),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_1 + 4 + local_4f0),0x20);
      local_4a8 = insertps(auVar60,*(undefined4 *)(param_1 + 4 + lVar47),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_500)),
                         *(undefined4 *)(param_1 + 8 + local_4f8),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_1 + 8 + local_4f0),0x20);
      local_498 = insertps(auVar60,*(undefined4 *)(param_1 + 8 + lVar47),0x30);
      uVar6 = *(uint *)(param_1 + 0xc + local_500);
      local_308 = ZEXT416(uVar6);
      uVar7 = *(uint *)(param_1 + 0xc + local_4f8);
      local_2f8 = ZEXT416(uVar7);
      iVar91 = iVar130 << 4;
      local_4e8 = (longlong)(auVar133._8_4_ << 4);
      local_4e0 = (longlong)(auVar133._12_4_ * 0x10);
      local_4d8 = (longlong)iVar91;
      lVar41 = (longlong)(iVar88 << 4);
      auVar60 = *(undefined1 (*) [16])(local_4b8 + -0xc);
      fVar199 = local_4b8[-8];
      fVar203 = local_4b8[-7];
      fVar57 = local_4b8[-6];
      fVar58 = local_4b8[-5];
      fVar87 = local_4b8[-4];
      fVar89 = local_4b8[-3];
      fVar96 = local_4b8[-2];
      fVar97 = local_4b8[-1];
      fVar103 = *local_4b8;
      fVar105 = local_4b8[1];
      fVar108 = local_4b8[2];
      fVar109 = local_4b8[3];
      fVar194 = auVar60._8_4_;
      fVar173 = auVar60._4_4_;
      fVar161 = auVar60._0_4_;
      fVar197 = auVar60._12_4_;
      auVar60 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar42);
      auVar136 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar42);
      pfVar39 = (float *)(param_4 + lVar42);
      auVar200 = insertps(auVar136,auVar60,0x8c);
      auVar257 = insertps(ZEXT416(*(uint *)(param_1 + local_4e8)),
                          *(undefined4 *)(param_1 + local_4e0),0x10);
      auVar257 = insertps(auVar257,*(undefined4 *)(param_1 + local_4d8),0x20);
      local_488 = insertps(auVar257,*(undefined4 *)(param_1 + lVar41),0x30);
      auVar257 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_4e8)),
                          *(undefined4 *)(param_1 + 4 + local_4e0),0x10);
      auVar257 = insertps(auVar257,*(undefined4 *)(param_1 + 4 + local_4d8),0x20);
      auVar112 = insertps(auVar257,*(undefined4 *)(param_1 + 4 + lVar41),0x30);
      auVar257 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_4e8)),
                          *(undefined4 *)(param_1 + 8 + local_4e0),0x10);
      auVar257 = insertps(auVar257,*(undefined4 *)(param_1 + 8 + local_4d8),0x20);
      auVar246 = insertps(ZEXT416(uVar6),local_2f8,0x10);
      auVar257 = insertps(auVar257,*(undefined4 *)(param_1 + 8 + lVar41),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + local_4f0);
      local_348 = ZEXT416(uVar8);
      auVar247 = insertps(auVar246,local_348,0x20);
      local_4d0 = (longlong)(auVar207._0_4_ << 4);
      local_4c8 = (longlong)(auVar207._4_4_ * 0x10);
      local_4c0 = (longlong)(*piVar1 << 4);
      lVar24 = (longlong)(piVar1[3] << 4);
      auVar246 = insertps(ZEXT416(*(uint *)(param_1 + local_4d0)),
                          *(undefined4 *)(param_1 + local_4c8),0x10);
      auVar246 = insertps(auVar246,*(undefined4 *)(param_1 + local_4c0),0x20);
      auVar246 = insertps(auVar246,*(undefined4 *)(param_1 + lVar24),0x30);
      fVar231 = auVar246._12_4_;
      auVar184 = insertps(ZEXT416(*(uint *)(param_1 + 4 + local_4d0)),
                          *(undefined4 *)(param_1 + 4 + local_4c8),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar47);
      local_378 = ZEXT416(uVar9);
      auVar248 = insertps(auVar247,local_378,0x30);
      uVar10 = *(uint *)(param_1 + 0xc + local_4e8);
      local_338 = ZEXT416(uVar10);
      uVar11 = *(uint *)(param_1 + 0xc + local_4e0);
      local_328 = ZEXT416(uVar11);
      auVar247 = insertps(local_338,local_328,0x10);
      auVar184 = insertps(auVar184,*(undefined4 *)(param_1 + 4 + local_4c0),0x20);
      uVar12 = *(uint *)(param_1 + 0xc + local_4d8);
      local_318 = ZEXT416(uVar12);
      auVar235 = insertps(auVar247,local_318,0x20);
      auVar247 = insertps(auVar184,*(undefined4 *)(param_1 + 4 + lVar24),0x30);
      uVar13 = *(uint *)(param_1 + 0xc + lVar41);
      local_368 = ZEXT416(uVar13);
      auVar236 = insertps(auVar235,local_368,0x30);
      auVar184 = insertps(ZEXT416(*(uint *)(param_1 + 8 + local_4d0)),
                          *(undefined4 *)(param_1 + 8 + local_4c8),0x10);
      auVar184 = insertps(auVar184,*(undefined4 *)(param_1 + 8 + local_4c0),0x20);
      local_478 = insertps(auVar184,*(undefined4 *)(param_1 + 8 + lVar24),0x30);
      uVar14 = *(uint *)(param_1 + 0xc + local_4d0);
      local_2e8 = ZEXT416(uVar14);
      uVar15 = *(uint *)(param_1 + 0xc + local_4c8);
      local_2d8 = ZEXT416(uVar15);
      auVar184 = insertps(local_2e8,local_2d8,0x10);
      uVar16 = *(uint *)(param_1 + 0xc + local_4c0);
      local_2c8 = ZEXT416(uVar16);
      auVar184 = insertps(auVar184,local_2c8,0x20);
      uVar17 = *(uint *)(param_1 + 0xc + lVar24);
      local_358 = ZEXT416(uVar17);
      auVar237 = insertps(auVar184,local_358,0x30);
      auVar184 = pmovsxbd(local_2f8,uVar160);
      auVar235 = insertps(ZEXT416(*(uint *)(param_24 + (auVar184._0_4_ << 2))),
                          *(undefined4 *)(param_24 + auVar184._4_4_ * 4),0x10);
      auVar235 = insertps(auVar235,*(undefined4 *)(param_24 + (auVar184._8_4_ << 2)),0x20);
      auVar235 = insertps(auVar235,*(undefined4 *)(param_24 + (auVar184._12_4_ << 2)),0x30);
      auVar134 = pmovsxbd(auVar134,uVar131);
      auVar184 = insertps(ZEXT416(*(uint *)(param_27 + (auVar134._0_4_ << 2))),
                          *(undefined4 *)(param_27 + auVar134._4_4_ * 4),0x10);
      auVar184 = insertps(auVar184,*(undefined4 *)(param_27 + (auVar134._8_4_ << 2)),0x20);
      auVar249 = insertps(auVar184,*(undefined4 *)(param_27 + (auVar134._12_4_ << 2)),0x30);
      local_6e8 = auVar61._0_4_;
      fStack_6e4 = auVar61._4_4_;
      fStack_6e0 = auVar61._8_4_;
      fStack_6dc = auVar61._12_4_;
      fVar159 = local_488._0_4_;
      fVar192 = local_488._4_4_;
      fVar198 = local_488._8_4_;
      fVar204 = local_488._12_4_;
      fVar273 = auVar246._8_4_;
      fVar205 = auVar246._0_4_;
      fVar212 = auVar246._4_4_;
      fVar52 = (fVar205 - local_6e8) * fVar173 + (fVar159 - local_6e8) * fVar161;
      fVar82 = (fVar212 - fStack_6e4) * fVar203 + (fVar192 - fStack_6e4) * fVar199;
      fVar92 = (fVar273 - fStack_6e0) * fVar89 + (fVar198 - fStack_6e0) * fVar87;
      fVar99 = (fVar231 - fStack_6dc) * fVar105 + (fVar204 - fStack_6dc) * fVar103;
      local_748 = auVar112._0_4_;
      fStack_744 = auVar112._4_4_;
      fStack_740 = auVar112._8_4_;
      fStack_73c = auVar112._12_4_;
      fVar110 = local_4a8._0_4_;
      fVar179 = local_4a8._4_4_;
      fVar256 = local_4a8._8_4_;
      fVar260 = local_4a8._12_4_;
      fVar262 = auVar247._4_4_;
      fVar195 = auVar247._12_4_;
      fVar216 = auVar247._0_4_;
      fVar221 = auVar247._8_4_;
      fVar183 = (fVar216 - fVar110) * fVar173 + (local_748 - fVar110) * fVar161;
      fVar191 = (fVar262 - fVar179) * fVar203 + (fStack_744 - fVar179) * fVar199;
      fVar193 = (fVar221 - fVar256) * fVar89 + (fStack_740 - fVar256) * fVar87;
      fVar196 = (fVar195 - fVar260) * fVar105 + (fStack_73c - fVar260) * fVar103;
      local_738._0_4_ = auVar257._0_4_;
      local_738._4_4_ = auVar257._4_4_;
      fStack_730 = auVar257._8_4_;
      fStack_72c = auVar257._12_4_;
      fVar264 = local_498._0_4_;
      fVar267 = local_498._4_4_;
      fVar270 = local_498._8_4_;
      fVar274 = local_498._12_4_;
      fVar224 = local_478._0_4_;
      fVar227 = local_478._4_4_;
      fVar229 = local_478._8_4_;
      fVar232 = local_478._12_4_;
      fVar174 = (fVar224 - fVar264) * fVar173 + ((float)local_738._0_4_ - fVar264) * fVar161;
      fVar180 = (fVar227 - fVar267) * fVar203 + ((float)local_738._4_4_ - fVar267) * fVar199;
      fVar181 = (fVar229 - fVar270) * fVar89 + (fStack_730 - fVar270) * fVar87;
      fVar182 = (fVar232 - fVar274) * fVar105 + (fStack_72c - fVar274) * fVar103;
      auVar184._4_4_ = fVar57;
      auVar184._0_4_ = fVar194;
      auVar184._8_4_ = fVar96;
      auVar184._12_4_ = fVar108;
      fVar206 = (fVar205 - local_6e8) * fVar197 + (fVar159 - local_6e8) * fVar194;
      fVar213 = (fVar212 - fStack_6e4) * fVar58 + (fVar192 - fStack_6e4) * fVar57;
      fVar214 = (fVar273 - fStack_6e0) * fVar97 + (fVar198 - fStack_6e0) * fVar96;
      fVar215 = (fVar231 - fStack_6dc) * fVar109 + (fVar204 - fStack_6dc) * fVar108;
      fVar217 = (fVar216 - fVar110) * fVar197 + (local_748 - fVar110) * fVar194;
      fVar220 = (fVar262 - fVar179) * fVar58 + (fStack_744 - fVar179) * fVar57;
      fVar222 = (fVar221 - fVar256) * fVar97 + (fStack_740 - fVar256) * fVar96;
      fVar223 = (fVar195 - fVar260) * fVar109 + (fStack_73c - fVar260) * fVar108;
      fVar225 = (fVar224 - fVar264) * fVar197 + ((float)local_738._0_4_ - fVar264) * fVar194;
      fVar228 = (fVar227 - fVar267) * fVar58 + ((float)local_738._4_4_ - fVar267) * fVar57;
      fVar230 = (fVar229 - fVar270) * fVar97 + (fStack_730 - fVar270) * fVar96;
      fVar233 = (fVar232 - fVar274) * fVar109 + (fStack_72c - fVar274) * fVar108;
      auVar135._0_4_ = fVar174 * fVar174 + fVar183 * fVar183 + fVar52 * fVar52;
      auVar135._4_4_ = fVar180 * fVar180 + fVar191 * fVar191 + fVar82 * fVar82;
      auVar135._8_4_ = fVar181 * fVar181 + fVar193 * fVar193 + fVar92 * fVar92;
      auVar135._12_4_ = fVar182 * fVar182 + fVar196 * fVar196 + fVar99 * fVar99;
      auVar162._0_4_ = fVar225 * fVar225 + fVar217 * fVar217 + fVar206 * fVar206;
      auVar162._4_4_ = fVar228 * fVar228 + fVar220 * fVar220 + fVar213 * fVar213;
      auVar162._8_4_ = fVar230 * fVar230 + fVar222 * fVar222 + fVar214 * fVar214;
      auVar162._12_4_ = fVar233 * fVar233 + fVar223 * fVar223 + fVar215 * fVar215;
      auVar134 = sqrtps(auVar184,auVar135);
      auVar61._4_4_ = _UNK_15076b1f4;
      auVar61._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar61._8_4_ = _UNK_15076b1f8;
      auVar61._12_4_ = _UNK_15076b1fc;
      auVar257 = divps(auVar61,auVar134);
      fVar132 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar134._0_4_) &
                       auVar257._0_4_);
      fVar156 = (float)(-(uint)(_UNK_1506895d4 < auVar134._4_4_) & auVar257._4_4_);
      fVar157 = (float)(-(uint)(_UNK_1506895d8 < auVar134._8_4_) & auVar257._8_4_);
      fVar158 = (float)(-(uint)(_UNK_1506895dc < auVar134._12_4_) & auVar257._12_4_);
      auVar257 = sqrtps(auVar257,auVar162);
      auVar61 = divps(auVar61,auVar257);
      fVar265 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar257._0_4_) &
                       auVar61._0_4_);
      fVar268 = (float)(-(uint)(_UNK_1506895d4 < auVar257._4_4_) & auVar61._4_4_);
      fVar271 = (float)(-(uint)(_UNK_1506895d8 < auVar257._8_4_) & auVar61._8_4_);
      fVar275 = (float)(-(uint)(_UNK_1506895dc < auVar257._12_4_) & auVar61._12_4_);
      local_298 = auVar134._0_4_ - auVar249._0_4_ * auVar60._0_4_;
      fStack_294 = auVar134._4_4_ - auVar249._4_4_ * auVar60._12_4_;
      fStack_290 = auVar134._8_4_ - auVar249._8_4_ * auVar136._8_4_;
      fStack_28c = auVar134._12_4_ - auVar249._12_4_ * pfVar39[1];
      local_238 = auVar257._0_4_ - auVar235._0_4_ * auVar60._4_4_;
      fStack_234 = auVar257._4_4_ - auVar235._4_4_ * auVar136._0_4_;
      fStack_230 = auVar257._8_4_ - auVar235._8_4_ * auVar136._12_4_;
      fStack_22c = auVar257._12_4_ - auVar235._12_4_ * pfVar39[2];
      fVar52 = fVar52 * fVar132;
      fVar82 = fVar82 * fVar156;
      fVar92 = fVar92 * fVar157;
      fVar99 = fVar99 * fVar158;
      fVar183 = fVar183 * fVar132;
      fVar191 = fVar191 * fVar156;
      fVar193 = fVar193 * fVar157;
      fVar196 = fVar196 * fVar158;
      fVar206 = fVar206 * fVar265;
      fVar213 = fVar213 * fVar268;
      fVar214 = fVar214 * fVar271;
      fVar215 = fVar215 * fVar275;
      fVar217 = fVar217 * fVar265;
      fVar220 = fVar220 * fVar268;
      fVar222 = fVar222 * fVar271;
      fVar223 = fVar223 * fVar275;
      fVar174 = fVar174 * fVar132;
      fVar180 = fVar180 * fVar156;
      fVar181 = fVar181 * fVar157;
      fVar182 = fVar182 * fVar158;
      fVar225 = fVar225 * fVar265;
      fVar228 = fVar228 * fVar268;
      fVar230 = fVar230 * fVar271;
      fVar233 = fVar233 * fVar275;
      local_228 = (fVar174 * fVar225 + fVar183 * fVar217 + fVar52 * fVar206) - auVar200._0_4_;
      fStack_224 = (fVar180 * fVar228 + fVar191 * fVar220 + fVar82 * fVar213) - auVar200._4_4_;
      fStack_220 = (fVar181 * fVar230 + fVar193 * fVar222 + fVar92 * fVar214) - *pfVar39;
      fStack_21c = (fVar182 * fVar233 + fVar196 * fVar223 + fVar99 * fVar215) - pfVar39[3];
      fVar53 = fVar194 * fVar206;
      fVar83 = fVar57 * fVar213;
      fVar93 = fVar96 * fVar214;
      fVar100 = fVar108 * fVar215;
      fVar54 = fVar194 * fVar217;
      fVar84 = fVar57 * fVar220;
      fVar94 = fVar96 * fVar222;
      fVar101 = fVar108 * fVar223;
      local_5c8._0_4_ = fVar194 * fVar225;
      local_5c8._4_4_ = fVar57 * fVar228;
      fStack_5c0 = fVar96 * fVar230;
      fStack_5bc = fVar108 * fVar233;
      local_5b8 = fVar197 * fVar206;
      fStack_5b4 = fVar58 * fVar213;
      fStack_5b0 = fVar97 * fVar214;
      fStack_5ac = fVar109 * fVar215;
      fVar55 = fVar197 * fVar217;
      fVar85 = fVar58 * fVar220;
      fVar95 = fVar97 * fVar222;
      fVar102 = fVar109 * fVar223;
      local_5a8 = fVar197 * fVar225;
      fStack_5a4 = fVar58 * fVar228;
      fStack_5a0 = fVar97 * fVar230;
      fStack_59c = fVar109 * fVar233;
      local_448 = fVar161 * fVar52;
      fStack_444 = fVar199 * fVar82;
      fStack_440 = fVar87 * fVar92;
      fStack_43c = fVar103 * fVar99;
      local_2b8 = fVar161 * fVar183;
      fStack_2b4 = fVar199 * fVar191;
      fStack_2b0 = fVar87 * fVar193;
      fStack_2ac = fVar103 * fVar196;
      local_538 = fVar161 * fVar174;
      fStack_534 = fVar199 * fVar180;
      fStack_530 = fVar87 * fVar181;
      fStack_52c = fVar103 * fVar182;
      local_5f8._0_4_ = fVar173 * fVar52;
      local_5f8._4_4_ = fVar203 * fVar82;
      fStack_5f0 = fVar89 * fVar92;
      fStack_5ec = fVar105 * fVar99;
      local_5e8._0_4_ = fVar173 * fVar183;
      local_5e8._4_4_ = fVar203 * fVar191;
      fStack_5e0 = fVar89 * fVar193;
      fStack_5dc = fVar105 * fVar196;
      fVar56 = fVar173 * fVar174;
      fVar86 = fVar203 * fVar180;
      fStack_5d0 = fVar89 * fVar181;
      fStack_5cc = fVar105 * fVar182;
      _local_5d8 = CONCAT44(fVar86,fVar56);
      local_248 = fVar194 * fVar52 * fVar265 + fVar161 * fVar206 * fVar132;
      fStack_244 = fVar57 * fVar82 * fVar268 + fVar199 * fVar213 * fVar156;
      fStack_240 = fVar96 * fVar92 * fVar271 + fVar87 * fVar214 * fVar157;
      fStack_23c = fVar108 * fVar99 * fVar275 + fVar103 * fVar215 * fVar158;
      local_258 = fVar194 * fVar183 * fVar265 + fVar161 * fVar217 * fVar132;
      fStack_254 = fVar57 * fVar191 * fVar268 + fVar199 * fVar220 * fVar156;
      fStack_250 = fVar96 * fVar193 * fVar271 + fVar87 * fVar222 * fVar157;
      fStack_24c = fVar108 * fVar196 * fVar275 + fVar103 * fVar223 * fVar158;
      fVar234 = fVar194 * fVar174 * fVar265 + fVar161 * fVar225 * fVar132;
      fVar241 = fVar57 * fVar180 * fVar268 + fVar199 * fVar228 * fVar156;
      fVar242 = fVar96 * fVar181 * fVar271 + fVar87 * fVar230 * fVar157;
      fVar243 = fVar108 * fVar182 * fVar275 + fVar103 * fVar233 * fVar158;
      local_268 = fVar52 * fVar265 * fVar197 + fVar206 * fVar132 * fVar173;
      fStack_264 = fVar82 * fVar268 * fVar58 + fVar213 * fVar156 * fVar203;
      fStack_260 = fVar92 * fVar271 * fVar97 + fVar214 * fVar157 * fVar89;
      fStack_25c = fVar99 * fVar275 * fVar109 + fVar215 * fVar158 * fVar105;
      local_288 = fVar183 * fVar265 * fVar197 + fVar217 * fVar132 * fVar173;
      fStack_284 = fVar191 * fVar268 * fVar58 + fVar220 * fVar156 * fVar203;
      fStack_280 = fVar193 * fVar271 * fVar97 + fVar222 * fVar157 * fVar89;
      fStack_27c = fVar196 * fVar275 * fVar109 + fVar223 * fVar158 * fVar105;
      local_278 = fVar174 * fVar265 * fVar197 + fVar225 * fVar132 * fVar173;
      fStack_274 = fVar180 * fVar268 * fVar58 + fVar228 * fVar156 * fVar203;
      fStack_270 = fVar181 * fVar271 * fVar97 + fVar230 * fVar157 * fVar89;
      fStack_26c = fVar182 * fVar275 * fVar109 + fVar233 * fVar158 * fVar105;
      lVar37 = (longlong)(iVar46 * 3);
      lVar33 = (longlong)(iVar98 * 3);
      lVar48 = (longlong)(iVar129 * 3);
      auVar60 = insertps(ZEXT416(*(uint *)(param_2 + lVar37 * 4)),
                         *(undefined4 *)(param_2 + lVar33 * 4),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + lVar48 * 4),0x20);
      lVar49 = (longlong)(iVar104 * 3);
      auVar134 = insertps(auVar60,*(undefined4 *)(param_2 + lVar49 * 4),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar37 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar33 * 4),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + 4 + lVar48 * 4),0x20);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + 4 + lVar49 * 4),0x30);
      auVar136 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar37 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar33 * 4),0x10);
      auVar136 = insertps(auVar136,*(undefined4 *)(param_2 + 8 + lVar48 * 4),0x20);
      auVar136 = insertps(auVar136,*(undefined4 *)(param_2 + 8 + lVar49 * 4),0x30);
      lVar33 = (longlong)(auVar133._8_4_ * 3);
      lVar37 = (longlong)(auVar133._12_4_ * 3);
      lVar49 = (longlong)(iVar130 * 3);
      auVar133 = insertps(ZEXT416(*(uint *)(param_2 + lVar33 * 4)),
                          *(undefined4 *)(param_2 + lVar37 * 4),0x10);
      auVar133 = insertps(auVar133,*(undefined4 *)(param_2 + lVar49 * 4),0x20);
      lVar48 = (longlong)(iVar88 * 3);
      auVar61 = insertps(auVar133,*(undefined4 *)(param_2 + lVar48 * 4),0x30);
      fVar161 = local_6e8 - auVar134._0_4_;
      fVar173 = fStack_6e4 - auVar134._4_4_;
      fVar214 = fStack_6e0 - auVar134._8_4_;
      fVar217 = fStack_6dc - auVar134._12_4_;
      auVar134 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar33 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar37 * 4),0x10);
      auVar134 = insertps(auVar134,*(undefined4 *)(param_2 + 4 + lVar49 * 4),0x20);
      auVar133 = insertps(auVar134,*(undefined4 *)(param_2 + 4 + lVar48 * 4),0x30);
      auVar134 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar33 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar37 * 4),0x10);
      fVar108 = fVar110 - auVar60._0_4_;
      fVar92 = fVar179 - auVar60._4_4_;
      fVar157 = fVar256 - auVar60._8_4_;
      fVar181 = fVar260 - auVar60._12_4_;
      auVar60 = insertps(auVar134,*(undefined4 *)(param_2 + 8 + lVar49 * 4),0x20);
      fVar57 = fVar264 - auVar136._0_4_;
      fVar87 = fVar267 - auVar136._4_4_;
      fVar96 = fVar270 - auVar136._8_4_;
      fVar103 = fVar274 - auVar136._12_4_;
      auVar136 = insertps(auVar60,*(undefined4 *)(param_2 + 8 + lVar48 * 4),0x30);
      local_558 = fVar159 - auVar61._0_4_;
      fStack_554 = fVar192 - auVar61._4_4_;
      fStack_550 = fVar198 - auVar61._8_4_;
      fStack_54c = fVar204 - auVar61._12_4_;
      lVar49 = (longlong)(auVar207._0_4_ * 3);
      lVar33 = (longlong)(auVar207._4_4_ * 3);
      lVar37 = (longlong)(*piVar1 * 3);
      lVar48 = (longlong)(piVar1[3] * 3);
      auVar60 = insertps(ZEXT416(*(uint *)(param_2 + lVar49 * 4)),
                         *(undefined4 *)(param_2 + lVar33 * 4),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + lVar37 * 4),0x20);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + lVar48 * 4),0x30);
      auVar134 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar49 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar33 * 4),0x10);
      local_458 = local_748 - auVar133._0_4_;
      fStack_454 = fStack_744 - auVar133._4_4_;
      fStack_450 = fStack_740 - auVar133._8_4_;
      fStack_44c = fStack_73c - auVar133._12_4_;
      auVar134 = insertps(auVar134,*(undefined4 *)(param_2 + 4 + lVar37 * 4),0x20);
      local_468 = (float)local_738._0_4_ - auVar136._0_4_;
      fStack_464 = (float)local_738._4_4_ - auVar136._4_4_;
      fStack_460 = fStack_730 - auVar136._8_4_;
      fStack_45c = fStack_72c - auVar136._12_4_;
      auVar134 = insertps(auVar134,*(undefined4 *)(param_2 + 4 + lVar48 * 4),0x30);
      fVar109 = fVar205 - auVar60._0_4_;
      fVar99 = fVar212 - auVar60._4_4_;
      fVar158 = fVar273 - auVar60._8_4_;
      fVar182 = fVar231 - auVar60._12_4_;
      local_568 = fVar216 - auVar134._0_4_;
      fStack_564 = fVar262 - auVar134._4_4_;
      fStack_560 = fVar221 - auVar134._8_4_;
      fStack_55c = fVar195 - auVar134._12_4_;
      auVar60 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar49 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar33 * 4),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + 8 + lVar37 * 4),0x20);
      auVar60 = insertps(auVar60,*(undefined4 *)(param_2 + 8 + lVar48 * 4),0x30);
      fVar52 = fVar224 - auVar60._0_4_;
      fVar132 = fVar227 - auVar60._4_4_;
      fVar174 = fVar229 - auVar60._8_4_;
      fVar183 = fVar232 - auVar60._12_4_;
      auVar60 = pmovsxbd(auVar60,uVar106);
      auVar200._0_4_ = auVar60._0_4_ << 2;
      auVar200._4_4_ = auVar60._4_4_ * 4;
      auVar200._8_4_ = auVar60._8_4_ << 2;
      auVar200._12_4_ = auVar60._12_4_ << 2;
      auVar60 = pmovsxbd(auVar200,uVar111);
      auVar235._0_4_ = auVar60._0_4_ << 2;
      auVar235._4_4_ = auVar60._4_4_ * 4;
      auVar235._8_4_ = auVar60._8_4_ << 2;
      auVar235._12_4_ = auVar60._12_4_ << 2;
      auVar60 = pmovsxbd(auVar235,uVar59);
      auVar249._0_4_ = auVar60._0_4_ << 2;
      auVar249._4_4_ = auVar60._4_4_ * 4;
      auVar249._8_4_ = auVar60._8_4_ << 2;
      auVar249._12_4_ = auVar60._12_4_ << 2;
      auVar136 = pmovsxbd(auVar249,uVar107);
      iVar88 = auVar136._4_4_ * 4;
      iVar104 = auVar136._12_4_ << 2;
      auVar60 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar42);
      auVar134 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar42);
      fStack_544 = auVar134._0_4_;
      fStack_540 = auVar134._12_4_;
      local_548 = auVar60._4_4_;
      pfVar5 = (float *)(param_7 + lVar42);
      fVar199 = *pfVar5;
      fStack_53c = pfVar5[2];
      fVar203 = pfVar5[3];
      auVar184 = insertps(auVar134,auVar60,0x8c);
      auVar257 = insertps(ZEXT416(*(uint *)(param_12 + auVar200._0_4_)),
                          *(undefined4 *)(param_12 + auVar200._4_4_),0x10);
      auVar133 = insertps(ZEXT416(*(uint *)(param_15 + auVar235._0_4_)),
                          *(undefined4 *)(param_15 + auVar235._4_4_),0x10);
      auVar113._0_8_ = auVar184._0_8_;
      auVar113._8_4_ = fVar199;
      auVar113._12_4_ = fVar203;
      auVar133 = insertps(auVar133,*(undefined4 *)(param_15 + auVar235._8_4_),0x20);
      auVar246 = insertps(auVar133,*(undefined4 *)(param_15 + auVar235._12_4_),0x30);
      auVar133 = *(undefined1 (*) [16])(param_6 + -0x20 + lVar42);
      auVar207 = *(undefined1 (*) [16])(param_6 + -0x10 + lVar42);
      pfVar39 = (float *)(param_6 + lVar42);
      auVar61 = insertps(auVar207,auVar133,0x8c);
      fVar206 = auVar133._0_4_ * auVar246._0_4_;
      fVar213 = auVar133._12_4_ * auVar246._4_4_;
      auVar163._4_4_ = fVar213;
      auVar163._0_4_ = fVar206;
      fVar215 = auVar207._8_4_ * auVar246._8_4_;
      fVar220 = pfVar39[1] * auVar246._12_4_;
      auVar257 = insertps(auVar257,*(undefined4 *)(param_12 + auVar200._8_4_),0x20);
      auVar257 = insertps(auVar257,*(undefined4 *)(param_12 + auVar200._12_4_),0x30);
      auVar246 = insertps(ZEXT416(*(uint *)(param_18 + auVar249._0_4_)),
                          *(undefined4 *)(param_18 + auVar249._4_4_),0x10);
      auVar246 = insertps(auVar246,*(undefined4 *)(param_18 + auVar249._8_4_),0x20);
      fVar252 = auVar133._4_4_ * auVar257._0_4_;
      fVar253 = auVar207._0_4_ * auVar257._4_4_;
      fVar254 = auVar207._12_4_ * auVar257._8_4_;
      fVar255 = pfVar39[2] * auVar257._12_4_;
      auVar133 = insertps(auVar246,*(undefined4 *)(param_18 + auVar249._12_4_),0x30);
      fVar58 = auVar61._0_4_ * auVar133._0_4_;
      fVar89 = auVar61._4_4_ * auVar133._4_4_;
      fVar97 = *pfVar39 * auVar133._8_4_;
      fVar105 = pfVar39[3] * auVar133._12_4_;
      local_7e8 = auVar248._0_4_;
      fStack_7e4 = auVar248._4_4_;
      fStack_7e0 = auVar248._8_4_;
      fStack_7dc = auVar248._12_4_;
      local_828 = auVar236._0_4_;
      fStack_824 = auVar236._4_4_;
      fStack_820 = auVar236._8_4_;
      fStack_81c = auVar236._12_4_;
      local_7a8 = auVar237._0_4_;
      fStack_7a4 = auVar237._4_4_;
      fStack_7a0 = auVar237._8_4_;
      fStack_79c = auVar237._12_4_;
      local_578._4_4_ = fStack_7e4 + fStack_824 + fStack_7a4;
      local_578._0_4_ = local_7e8 + local_828 + local_7a8;
      fStack_570 = fStack_7e0 + fStack_820 + fStack_7a0;
      fStack_56c = fStack_7dc + fStack_81c + fStack_79c;
      auVar133 = insertps(ZEXT416(*(uint *)(param_21 + (auVar136._0_4_ << 2))),
                          *(undefined4 *)(param_21 + iVar88),0x10);
      auVar133 = insertps(auVar133,*(undefined4 *)(param_21 + (auVar136._8_4_ << 2)),0x20);
      auVar133 = insertps(auVar133,*(undefined4 *)(param_21 + iVar104),0x30);
      auVar137._0_4_ = param_8 * fVar206 * param_8;
      auVar137._4_4_ = param_8 * fVar213 * param_8;
      auVar137._8_4_ = param_8 * fVar215 * param_8;
      auVar137._12_4_ = param_8 * fVar220 * param_8;
      auVar257._4_4_ = _UNK_15076b1f4;
      auVar257._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar257._8_4_ = _UNK_15076b1f8;
      auVar257._12_4_ = _UNK_15076b1fc;
      auVar207 = divps(auVar257,auVar137);
      fVar271 = local_448 + (float)local_5f8._0_4_;
      fVar275 = fStack_444 + (float)local_5f8._4_4_;
      fVar261 = fStack_440 + fStack_5f0;
      fVar263 = fStack_43c + fStack_5ec;
      fVar222 = local_2b8 + (float)local_5e8._0_4_;
      fVar223 = fStack_2b4 + (float)local_5e8._4_4_;
      fVar225 = fStack_2b0 + fStack_5e0;
      fVar228 = fStack_2ac + fStack_5dc;
      fVar193 = local_538 + fVar56;
      fVar196 = fStack_534 + fVar86;
      fVar194 = fStack_530 + fStack_5d0;
      fVar197 = fStack_52c + fStack_5cc;
      fVar230 = auVar133._0_4_ + auVar133._0_4_;
      fVar233 = auVar133._4_4_ + auVar133._4_4_;
      fVar265 = auVar133._8_4_ + auVar133._8_4_;
      fVar268 = auVar133._12_4_ + auVar133._12_4_;
      auVar163._8_4_ = fVar215;
      auVar163._12_4_ = fVar220;
      auVar133 = divps(auVar163,_local_578);
      auVar133 = sqrtps(auVar133,auVar133);
      fVar266 = auVar207._0_4_;
      fVar269 = auVar207._4_4_;
      fVar272 = auVar207._8_4_;
      fVar276 = auVar207._12_4_;
      fVar82 = auVar133._0_4_ * fVar230 * fVar266 * param_8;
      fVar156 = auVar133._4_4_ * fVar233 * fVar269 * param_8;
      fVar180 = auVar133._8_4_ * fVar265 * fVar272 * param_8;
      fVar191 = auVar133._12_4_ * fVar268 * fVar276 * param_8;
      auVar246._4_4_ = _UNK_15076b1f4;
      auVar246._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar246._8_4_ = _UNK_15076b1f8;
      auVar246._12_4_ = _UNK_15076b1fc;
      auVar185._0_4_ =
           ((fVar56 * fVar56 +
            (float)local_5e8._0_4_ * (float)local_5e8._0_4_ +
            (float)local_5f8._0_4_ * (float)local_5f8._0_4_) * local_7a8 +
           (local_538 * local_538 + local_2b8 * local_2b8 + local_448 * local_448) * local_828 +
           (fVar193 * fVar193 + fVar222 * fVar222 + fVar271 * fVar271) * local_7e8) *
           (fVar82 + ___xmm_3f8000003f8000003f8000003f800000) + fVar266;
      auVar185._4_4_ =
           ((fVar86 * fVar86 +
            (float)local_5e8._4_4_ * (float)local_5e8._4_4_ +
            (float)local_5f8._4_4_ * (float)local_5f8._4_4_) * fStack_7a4 +
           (fStack_534 * fStack_534 + fStack_2b4 * fStack_2b4 + fStack_444 * fStack_444) *
           fStack_824 + (fVar196 * fVar196 + fVar223 * fVar223 + fVar275 * fVar275) * fStack_7e4) *
           (fVar156 + _UNK_15076b1f4) + fVar269;
      auVar185._8_4_ =
           ((fStack_5d0 * fStack_5d0 + fStack_5e0 * fStack_5e0 + fStack_5f0 * fStack_5f0) *
            fStack_7a0 +
           (fStack_530 * fStack_530 + fStack_2b0 * fStack_2b0 + fStack_440 * fStack_440) *
           fStack_820 + (fVar194 * fVar194 + fVar225 * fVar225 + fVar261 * fVar261) * fStack_7e0) *
           (fVar180 + _UNK_15076b1f8) + fVar272;
      auVar185._12_4_ =
           ((fStack_5cc * fStack_5cc + fStack_5dc * fStack_5dc + fStack_5ec * fStack_5ec) *
            fStack_79c +
           (fStack_52c * fStack_52c + fStack_2ac * fStack_2ac + fStack_43c * fStack_43c) *
           fStack_81c + (fVar197 * fVar197 + fVar228 * fVar228 + fVar263 * fVar263) * fStack_7dc) *
           (fVar191 + _UNK_15076b1fc) + fVar276;
      auVar236._0_4_ =
           (local_298 - fVar266 * auVar60._0_4_) +
           ((fVar56 * fVar52 + (float)local_5e8._0_4_ * local_568 + (float)local_5f8._0_4_ * fVar109
            + local_538 * local_468 + local_2b8 * local_458 + local_448 * local_558) -
           (fVar193 * fVar57 + fVar222 * fVar108 + fVar271 * fVar161)) * fVar82;
      auVar236._4_4_ =
           (fStack_294 - fVar269 * auVar60._12_4_) +
           ((fVar86 * fVar132 +
             (float)local_5e8._4_4_ * fStack_564 + (float)local_5f8._4_4_ * fVar99 +
            fStack_534 * fStack_464 + fStack_2b4 * fStack_454 + fStack_444 * fStack_554) -
           (fVar196 * fVar87 + fVar223 * fVar92 + fVar275 * fVar173)) * fVar156;
      auVar236._8_4_ =
           (fStack_290 - fVar272 * auVar134._8_4_) +
           ((fStack_5d0 * fVar174 + fStack_5e0 * fStack_560 + fStack_5f0 * fVar158 +
            fStack_530 * fStack_460 + fStack_2b0 * fStack_450 + fStack_440 * fStack_550) -
           (fVar194 * fVar96 + fVar225 * fVar157 + fVar261 * fVar214)) * fVar180;
      auVar236._12_4_ =
           (fStack_28c - fVar276 * pfVar5[1]) +
           ((fStack_5cc * fVar183 + fStack_5dc * fStack_55c + fStack_5ec * fVar182 +
            fStack_52c * fStack_45c + fStack_2ac * fStack_44c + fStack_43c * fStack_54c) -
           (fVar197 * fVar103 + fVar228 * fVar181 + fVar263 * fVar217)) * fVar191;
      auVar133 = divps(auVar236,auVar185);
      fVar271 = (float)(-(uint)(param_9 <= fVar206) & auVar133._0_4_);
      fVar275 = (float)(-(uint)(param_9 <= fVar213) & auVar133._4_4_);
      fVar261 = (float)(-(uint)(param_9 <= fVar215) & auVar133._8_4_);
      fVar263 = (float)(-(uint)(param_9 <= fVar220) & auVar133._12_4_);
      auVar138._0_4_ = param_8 * fVar252 * param_8;
      auVar138._4_4_ = param_8 * fVar253 * param_8;
      auVar138._8_4_ = param_8 * fVar254 * param_8;
      auVar138._12_4_ = param_8 * fVar255 * param_8;
      auVar207 = divps(auVar246,auVar138);
      fVar193 = fVar53 + local_5b8;
      fVar194 = fVar83 + fStack_5b4;
      fVar206 = fVar93 + fStack_5b0;
      fVar215 = fVar100 + fStack_5ac;
      fVar222 = fVar54 + fVar55;
      fVar223 = fVar84 + fVar85;
      fVar225 = fVar94 + fVar95;
      fVar228 = fVar101 + fVar102;
      fVar82 = (float)local_5c8._0_4_ + local_5a8;
      fVar156 = (float)local_5c8._4_4_ + fStack_5a4;
      fVar180 = fStack_5c0 + fStack_5a0;
      fVar191 = fStack_5bc + fStack_59c;
      auVar186._4_4_ = fVar253;
      auVar186._0_4_ = fVar252;
      auVar186._8_4_ = fVar254;
      auVar186._12_4_ = fVar255;
      auVar133 = divps(auVar186,_local_578);
      auVar133 = sqrtps(auVar133,auVar133);
      fVar266 = auVar207._0_4_;
      fVar269 = auVar207._4_4_;
      fVar272 = auVar207._8_4_;
      fVar276 = auVar207._12_4_;
      fVar196 = auVar133._0_4_ * fVar230 * fVar266 * param_8;
      fVar197 = auVar133._4_4_ * fVar233 * fVar269 * param_8;
      fVar213 = auVar133._8_4_ * fVar265 * fVar272 * param_8;
      fVar220 = auVar133._12_4_ * fVar268 * fVar276 * param_8;
      auVar112._4_4_ = _UNK_15076b1f4;
      auVar112._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar112._8_4_ = _UNK_15076b1f8;
      auVar112._12_4_ = _UNK_15076b1fc;
      auVar164._0_4_ =
           ((local_5a8 * local_5a8 + fVar55 * fVar55 + local_5b8 * local_5b8) * local_7a8 +
           ((float)local_5c8._0_4_ * (float)local_5c8._0_4_ + fVar54 * fVar54 + fVar53 * fVar53) *
           local_828 + (fVar82 * fVar82 + fVar222 * fVar222 + fVar193 * fVar193) * local_7e8) *
           (fVar196 + ___xmm_3f8000003f8000003f8000003f800000) + fVar266;
      auVar164._4_4_ =
           ((fStack_5a4 * fStack_5a4 + fVar85 * fVar85 + fStack_5b4 * fStack_5b4) * fStack_7a4 +
           ((float)local_5c8._4_4_ * (float)local_5c8._4_4_ + fVar84 * fVar84 + fVar83 * fVar83) *
           fStack_824 + (fVar156 * fVar156 + fVar223 * fVar223 + fVar194 * fVar194) * fStack_7e4) *
           (fVar197 + _UNK_15076b1f4) + fVar269;
      auVar164._8_4_ =
           ((fStack_5a0 * fStack_5a0 + fVar95 * fVar95 + fStack_5b0 * fStack_5b0) * fStack_7a0 +
           (fStack_5c0 * fStack_5c0 + fVar94 * fVar94 + fVar93 * fVar93) * fStack_820 +
           (fVar180 * fVar180 + fVar225 * fVar225 + fVar206 * fVar206) * fStack_7e0) *
           (fVar213 + _UNK_15076b1f8) + fVar272;
      auVar164._12_4_ =
           ((fStack_59c * fStack_59c + fVar102 * fVar102 + fStack_5ac * fStack_5ac) * fStack_79c +
           (fStack_5bc * fStack_5bc + fVar101 * fVar101 + fVar100 * fVar100) * fStack_81c +
           (fVar191 * fVar191 + fVar228 * fVar228 + fVar215 * fVar215) * fStack_7dc) *
           (fVar220 + _UNK_15076b1fc) + fVar276;
      auVar114._0_4_ =
           (local_238 - fVar266 * local_548) +
           ((local_5a8 * fVar52 + fVar55 * local_568 + local_5b8 * fVar109 +
            (float)local_5c8._0_4_ * local_468 + fVar54 * local_458 + fVar53 * local_558) -
           (fVar82 * fVar57 + fVar222 * fVar108 + fVar193 * fVar161)) * fVar196;
      auVar114._4_4_ =
           (fStack_234 - fVar269 * fStack_544) +
           ((fStack_5a4 * fVar132 + fVar85 * fStack_564 + fStack_5b4 * fVar99 +
            (float)local_5c8._4_4_ * fStack_464 + fVar84 * fStack_454 + fVar83 * fStack_554) -
           (fVar156 * fVar87 + fVar223 * fVar92 + fVar194 * fVar173)) * fVar197;
      auVar114._8_4_ =
           (fStack_230 - fVar272 * fStack_540) +
           ((fStack_5a0 * fVar174 + fVar95 * fStack_560 + fStack_5b0 * fVar158 +
            fStack_5c0 * fStack_460 + fVar94 * fStack_450 + fVar93 * fStack_550) -
           (fVar180 * fVar96 + fVar225 * fVar157 + fVar206 * fVar214)) * fVar213;
      auVar114._12_4_ =
           (fStack_22c - fVar276 * fStack_53c) +
           ((fStack_59c * fVar183 + fVar102 * fStack_55c + fStack_5ac * fVar182 +
            fStack_5bc * fStack_45c + fVar101 * fStack_44c + fVar100 * fStack_54c) -
           (fVar191 * fVar103 + fVar228 * fVar181 + fVar215 * fVar217)) * fVar220;
      auVar133 = divps(auVar114,auVar164);
      fVar252 = (float)(-(uint)(param_9 <= fVar252) & auVar133._0_4_);
      fVar253 = (float)(-(uint)(param_9 <= fVar253) & auVar133._4_4_);
      fVar254 = (float)(-(uint)(param_9 <= fVar254) & auVar133._8_4_);
      fVar255 = (float)(-(uint)(param_9 <= fVar255) & auVar133._12_4_);
      auVar247._4_4_ = fVar89;
      auVar247._0_4_ = fVar58;
      auVar247._8_4_ = fVar97;
      auVar247._12_4_ = fVar105;
      auVar133 = divps(auVar247,_local_578);
      auVar207 = sqrtps(_local_5c8,auVar133);
      auVar139._0_4_ = param_8 * fVar58 * param_8;
      auVar139._4_4_ = param_8 * fVar89 * param_8;
      auVar139._8_4_ = param_8 * fVar97 * param_8;
      auVar139._12_4_ = param_8 * fVar105 * param_8;
      auVar133 = divps(auVar112,auVar139);
      fVar193 = local_248 + local_268;
      fVar196 = fStack_244 + fStack_264;
      fVar194 = fStack_240 + fStack_260;
      fVar197 = fStack_23c + fStack_25c;
      fVar206 = local_258 + local_288;
      fVar213 = fStack_254 + fStack_284;
      fVar215 = fStack_250 + fStack_280;
      fVar220 = fStack_24c + fStack_27c;
      fVar82 = fVar234 + local_278;
      fVar156 = fVar241 + fStack_274;
      fVar180 = fVar242 + fStack_270;
      fVar191 = fVar243 + fStack_26c;
      fVar222 = auVar133._0_4_;
      fVar223 = auVar133._4_4_;
      fVar225 = auVar133._8_4_;
      fVar228 = auVar133._12_4_;
      fVar230 = auVar207._0_4_ * fVar230 * fVar222 * param_8;
      fVar233 = auVar207._4_4_ * fVar233 * fVar223 * param_8;
      fVar265 = auVar207._8_4_ * fVar265 * fVar225 * param_8;
      fVar268 = auVar207._12_4_ * fVar268 * fVar228 * param_8;
      auVar115._0_4_ =
           ((local_278 * local_278 + local_288 * local_288 + local_268 * local_268) * local_7a8 +
           (fVar234 * fVar234 + local_258 * local_258 + local_248 * local_248) * local_828 +
           (fVar82 * fVar82 + fVar206 * fVar206 + fVar193 * fVar193) * local_7e8) *
           (fVar230 + ___xmm_3f8000003f8000003f8000003f800000) + fVar222;
      auVar115._4_4_ =
           ((fStack_274 * fStack_274 + fStack_284 * fStack_284 + fStack_264 * fStack_264) *
            fStack_7a4 +
           (fVar241 * fVar241 + fStack_254 * fStack_254 + fStack_244 * fStack_244) * fStack_824 +
           (fVar156 * fVar156 + fVar213 * fVar213 + fVar196 * fVar196) * fStack_7e4) *
           (fVar233 + _UNK_15076b1f4) + fVar223;
      auVar115._8_4_ =
           ((fStack_270 * fStack_270 + fStack_280 * fStack_280 + fStack_260 * fStack_260) *
            fStack_7a0 +
           (fVar242 * fVar242 + fStack_250 * fStack_250 + fStack_240 * fStack_240) * fStack_820 +
           (fVar180 * fVar180 + fVar215 * fVar215 + fVar194 * fVar194) * fStack_7e0) *
           (fVar265 + _UNK_15076b1f8) + fVar225;
      auVar115._12_4_ =
           ((fStack_26c * fStack_26c + fStack_27c * fStack_27c + fStack_25c * fStack_25c) *
            fStack_79c +
           (fVar243 * fVar243 + fStack_24c * fStack_24c + fStack_23c * fStack_23c) * fStack_81c +
           (fVar191 * fVar191 + fVar220 * fVar220 + fVar197 * fVar197) * fStack_7dc) *
           (fVar268 + _UNK_15076b1fc) + fVar228;
      local_2a8._0_4_ = auVar184._0_4_;
      local_2a8._4_4_ = auVar184._4_4_;
      auVar237._0_4_ =
           (local_228 - fVar222 * (float)local_2a8._0_4_) +
           ((fVar52 * local_278 + local_568 * local_288 + fVar109 * local_268 +
            local_468 * fVar234 + local_458 * local_258 + local_558 * local_248) -
           (fVar57 * fVar82 + fVar108 * fVar206 + fVar161 * fVar193)) * fVar230;
      auVar237._4_4_ =
           (fStack_224 - fVar223 * (float)local_2a8._4_4_) +
           ((fVar132 * fStack_274 + fStack_564 * fStack_284 + fVar99 * fStack_264 +
            fStack_464 * fVar241 + fStack_454 * fStack_254 + fStack_554 * fStack_244) -
           (fVar87 * fVar156 + fVar92 * fVar213 + fVar173 * fVar196)) * fVar233;
      auVar237._8_4_ =
           (fStack_220 - fVar225 * fVar199) +
           ((fVar174 * fStack_270 + fStack_560 * fStack_280 + fVar158 * fStack_260 +
            fStack_460 * fVar242 + fStack_450 * fStack_250 + fStack_550 * fStack_240) -
           (fVar96 * fVar180 + fVar157 * fVar215 + fVar214 * fVar194)) * fVar265;
      auVar237._12_4_ =
           (fStack_21c - fVar228 * fVar203) +
           ((fVar183 * fStack_26c + fStack_55c * fStack_27c + fVar182 * fStack_25c +
            fStack_45c * fVar243 + fStack_44c * fStack_24c + fStack_54c * fStack_23c) -
           (fVar103 * fVar191 + fVar181 * fVar220 + fVar217 * fVar197)) * fVar268;
      auVar133 = divps(auVar237,auVar115);
      fVar57 = (float)(-(uint)(param_9 <= fVar58) & auVar133._0_4_);
      fVar58 = (float)(-(uint)(param_9 <= fVar89) & auVar133._4_4_);
      fVar87 = (float)(-(uint)(param_9 <= fVar97) & auVar133._8_4_);
      fVar89 = (float)(-(uint)(param_9 <= fVar105) & auVar133._12_4_);
      auVar187._0_8_ = CONCAT44(auVar60._12_4_ + fVar275,auVar60._0_4_ + fVar271);
      auVar187._8_4_ = auVar134._8_4_ + fVar261;
      auVar187._12_4_ = pfVar5[1] + fVar263;
      auVar238._0_4_ = local_548 + fVar252;
      auVar238._4_4_ = fStack_544 + fVar253;
      auVar238._8_4_ = fStack_540 + fVar254;
      auVar238._12_4_ = fStack_53c + fVar255;
      auVar248._0_4_ = (float)local_2a8._0_4_ + fVar57;
      auVar248._4_4_ = (float)local_2a8._4_4_ + fVar58;
      auVar248._8_4_ = fVar199 + fVar87;
      auVar248._12_4_ = fVar203 + fVar89;
      auVar116._8_4_ = auVar187._8_4_;
      auVar116._0_8_ = auVar187._0_8_;
      auVar116._12_4_ = auVar187._12_4_;
      auVar60 = insertps(auVar116,auVar238,0x30);
      auVar60 = insertps(auVar60,auVar248,0x20);
      puVar3 = (undefined4 *)(param_7 + -0x20 + lVar42);
      *puVar3 = auVar60._0_4_;
      puVar3[1] = auVar60._12_4_;
      puVar3[2] = auVar60._8_4_;
      puVar3[3] = auVar60._4_4_;
      auVar117._4_4_ = auVar238._8_4_;
      auVar117._0_4_ = auVar238._4_4_;
      auVar117._8_4_ = auVar248._0_4_;
      auVar117._12_4_ = auVar248._4_4_;
      auVar60 = blendps(auVar117,auVar187,4);
      puVar3 = (undefined4 *)(param_7 + -0x10 + lVar42);
      *puVar3 = auVar60._0_4_;
      puVar3[1] = auVar60._12_4_;
      puVar3[2] = auVar60._8_4_;
      puVar3[3] = auVar60._4_4_;
      pfVar39 = (float *)(param_7 + lVar42);
      *pfVar39 = auVar248._8_4_;
      pfVar39[1] = auVar187._12_4_;
      pfVar39[2] = auVar238._12_4_;
      pfVar39[3] = auVar248._12_4_;
      fVar52 = local_248 * fVar57 + fVar53 * fVar252 + local_448 * fVar271;
      fVar53 = fStack_244 * fVar58 + fVar83 * fVar253 + fStack_444 * fVar275;
      fVar82 = fStack_240 * fVar87 + fVar93 * fVar254 + fStack_440 * fVar261;
      fVar83 = fStack_23c * fVar89 + fVar100 * fVar255 + fStack_43c * fVar263;
      fVar92 = local_258 * fVar57 + fVar54 * fVar252 + local_2b8 * fVar271;
      fVar93 = fStack_254 * fVar58 + fVar84 * fVar253 + fStack_2b4 * fVar275;
      fVar94 = fStack_250 * fVar87 + fVar94 * fVar254 + fStack_2b0 * fVar261;
      fVar99 = fStack_24c * fVar89 + fVar101 * fVar255 + fStack_2ac * fVar263;
      fVar199 = fVar234 * fVar57 + (float)local_5c8._0_4_ * fVar252 + local_538 * fVar271;
      fVar203 = fVar241 * fVar58 + (float)local_5c8._4_4_ * fVar253 + fStack_534 * fVar275;
      fVar96 = fVar242 * fVar87 + fStack_5c0 * fVar254 + fStack_530 * fVar261;
      fVar97 = fVar243 * fVar89 + fStack_5bc * fVar255 + fStack_52c * fVar263;
      fVar103 = local_268 * fVar57 + local_5b8 * fVar252 + (float)local_5f8._0_4_ * fVar271;
      fVar105 = fStack_264 * fVar58 + fStack_5b4 * fVar253 + (float)local_5f8._4_4_ * fVar275;
      fVar108 = fStack_260 * fVar87 + fStack_5b0 * fVar254 + fStack_5f0 * fVar261;
      fVar109 = fStack_25c * fVar89 + fStack_5ac * fVar255 + fStack_5ec * fVar263;
      fVar54 = local_288 * fVar57 + fVar55 * fVar252 + (float)local_5e8._0_4_ * fVar271;
      fVar55 = fStack_284 * fVar58 + fVar85 * fVar253 + (float)local_5e8._4_4_ * fVar275;
      fVar84 = fStack_280 * fVar87 + fVar95 * fVar254 + fStack_5e0 * fVar261;
      fVar85 = fStack_27c * fVar89 + fVar102 * fVar255 + fStack_5dc * fVar263;
      fVar57 = fVar57 * local_278 + fVar252 * local_5a8 + fVar271 * fVar56;
      fVar58 = fVar58 * fStack_274 + fVar253 * fStack_5a4 + fVar275 * fVar86;
      fVar87 = fVar87 * fStack_270 + fVar254 * fStack_5a0 + fVar261 * fStack_5d0;
      fVar89 = fVar89 * fStack_26c + fVar255 * fStack_59c + fVar263 * fStack_5cc;
      auVar62._4_4_ = -(uint)(0.0 < fStack_7e4);
      auVar62._0_4_ = -(uint)(0.0 < local_7e8);
      auVar62._8_4_ = -(uint)(0.0 < fStack_7e0);
      auVar62._12_4_ = -(uint)(0.0 < fStack_7dc);
      iVar46 = movmskps((int)param_15,auVar62);
      if (iVar46 != 0) {
        bVar45 = (char)((char)iVar46 << 4) >> 4;
        local_6e8 = local_6e8 + (fVar52 + fVar103) * local_7e8;
        auVar63._4_4_ = fStack_6e4 + (fVar53 + fVar105) * fStack_7e4;
        auVar63._0_4_ = local_6e8;
        auVar63._8_4_ = fStack_6e0 + (fVar82 + fVar108) * fStack_7e0;
        auVar63._12_4_ = fStack_6dc + (fVar83 + fVar109) * fStack_7dc;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + local_500) = local_6e8;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar63,1);
          *(undefined8 *)(param_1 + local_4f8) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar63,2);
          *(undefined8 *)(param_1 + local_4f0) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar63,3);
          *(undefined8 *)(param_1 + lVar47) = uVar19;
        }
        fVar110 = fVar110 + (fVar92 + fVar54) * local_7e8;
        auVar64._4_4_ = fVar179 + (fVar93 + fVar55) * fStack_7e4;
        auVar64._0_4_ = fVar110;
        auVar64._8_4_ = fVar256 + (fVar94 + fVar84) * fStack_7e0;
        auVar64._12_4_ = fVar260 + (fVar99 + fVar85) * fStack_7dc;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 4 + local_500) = fVar110;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar64,1);
          *(undefined8 *)(param_1 + 4 + local_4f8) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar64,2);
          *(undefined8 *)(param_1 + 4 + local_4f0) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar64,3);
          *(undefined8 *)(param_1 + 4 + lVar47) = uVar19;
        }
        auVar65._0_4_ = fVar264 + local_7e8 * (fVar199 + fVar57);
        auVar65._4_4_ = fVar267 + fStack_7e4 * (fVar203 + fVar58);
        auVar65._8_4_ = fVar270 + fStack_7e0 * (fVar96 + fVar87);
        auVar65._12_4_ = fVar274 + fStack_7dc * (fVar97 + fVar89);
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 8 + local_500) = auVar65._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar65,1);
          *(undefined8 *)(param_1 + 8 + local_4f8) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar65,2);
          *(undefined8 *)(param_1 + 8 + local_4f0) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar65,3);
          *(undefined8 *)(param_1 + 8 + lVar47) = uVar19;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_500) = uVar6;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4f8) = uVar7;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4f0) = uVar8;
        }
        iVar104 = iVar51;
        iVar88 = iVar90;
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar47) = uVar9;
        }
      }
      auVar66._4_4_ = -(uint)(0.0 < fStack_824);
      auVar66._0_4_ = -(uint)(0.0 < local_828);
      auVar66._8_4_ = -(uint)(0.0 < fStack_820);
      auVar66._12_4_ = -(uint)(0.0 < fStack_81c);
      iVar104 = movmskps(iVar104,auVar66);
      if (iVar104 != 0) {
        bVar45 = (char)((char)iVar104 << 4) >> 4;
        auVar67._0_4_ = fVar159 - fVar52 * local_828;
        auVar67._4_4_ = fVar192 - fVar53 * fStack_824;
        auVar67._8_4_ = fVar198 - fVar82 * fStack_820;
        auVar67._12_4_ = fVar204 - fVar83 * fStack_81c;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + local_4e8) = auVar67._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar67,1);
          *(undefined8 *)(param_1 + local_4e0) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar67,2);
          *(undefined8 *)(param_1 + local_4d8) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar67,3);
          *(undefined8 *)(param_1 + lVar41) = uVar19;
        }
        auVar68._0_4_ = local_748 - fVar92 * local_828;
        auVar68._4_4_ = fStack_744 - fVar93 * fStack_824;
        auVar68._8_4_ = fStack_740 - fVar94 * fStack_820;
        auVar68._12_4_ = fStack_73c - fVar99 * fStack_81c;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 4 + local_4e8) = auVar68._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar68,1);
          *(undefined8 *)(param_1 + 4 + local_4e0) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar68,2);
          *(undefined8 *)(param_1 + 4 + local_4d8) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar68,3);
          *(undefined8 *)(param_1 + 4 + lVar41) = uVar19;
        }
        auVar175._0_4_ = (float)local_738._0_4_ - local_828 * fVar199;
        auVar175._4_4_ = (float)local_738._4_4_ - fStack_824 * fVar203;
        auVar175._8_4_ = fStack_730 - fStack_820 * fVar96;
        auVar175._12_4_ = fStack_72c - fStack_81c * fVar97;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 8 + local_4e8) = auVar175._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar175,1);
          *(undefined8 *)(param_1 + 8 + local_4e0) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar175,2);
          *(undefined8 *)(param_1 + 8 + local_4d8) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar175,3);
          *(undefined8 *)(param_1 + 8 + lVar41) = uVar19;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_4e8) = uVar10;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4e0) = uVar11;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4d8) = uVar12;
        }
        iVar88 = iVar91;
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar41) = uVar13;
        }
      }
      auVar69._4_4_ = -(uint)(0.0 < fStack_7a4);
      auVar69._0_4_ = -(uint)(0.0 < local_7a8);
      auVar69._8_4_ = -(uint)(0.0 < fStack_7a0);
      auVar69._12_4_ = -(uint)(0.0 < fStack_79c);
      iVar104 = movmskps(iVar88,auVar69);
      if (iVar104 != 0) {
        bVar45 = (char)((char)iVar104 << 4) >> 4;
        auVar140._0_4_ = fVar205 - fVar103 * local_7a8;
        auVar140._4_4_ = fVar212 - fVar105 * fStack_7a4;
        auVar140._8_4_ = fVar273 - fVar108 * fStack_7a0;
        auVar140._12_4_ = fVar231 - fVar109 * fStack_79c;
        if ((bVar45 & 1) == 0) {
          if ((bVar45 & 2) == 0) goto LAB_1409ca0a0;
LAB_1409ca45b:
          uVar19 = extractps(auVar140,1);
          *(undefined8 *)(param_1 + local_4c8) = uVar19;
          if ((bVar45 & 4) != 0) goto LAB_1409ca46c;
LAB_1409ca0aa:
          if (-1 < (char)bVar45) goto LAB_1409ca0b2;
LAB_1409ca47c:
          uVar19 = extractps(auVar140,3);
          *(undefined8 *)(param_1 + lVar24) = uVar19;
          auVar118._0_4_ = fVar216 - fVar54 * local_7a8;
          auVar118._4_4_ = fVar262 - fVar55 * fStack_7a4;
          auVar118._8_4_ = fVar221 - fVar84 * fStack_7a0;
          auVar118._12_4_ = fVar195 - fVar85 * fStack_79c;
          if ((bVar45 & 1) != 0) goto LAB_1409ca49d;
LAB_1409ca0c4:
          if ((bVar45 & 2) == 0) goto LAB_1409ca0ce;
LAB_1409ca4ad:
          uVar19 = extractps(auVar118,1);
          *(undefined8 *)(param_1 + 4 + local_4c8) = uVar19;
          if ((bVar45 & 4) != 0) goto LAB_1409ca4bf;
LAB_1409ca0d8:
          if (-1 < (char)bVar45) goto LAB_1409ca0e0;
LAB_1409ca4d0:
          uVar19 = extractps(auVar118,3);
          *(undefined8 *)(param_1 + 4 + lVar24) = uVar19;
          auVar70._0_4_ = fVar224 - local_7a8 * fVar57;
          auVar70._4_4_ = fVar227 - fStack_7a4 * fVar58;
          auVar70._8_4_ = fVar229 - fStack_7a0 * fVar87;
          auVar70._12_4_ = fVar232 - fStack_79c * fVar89;
        }
        else {
          *(float *)(param_1 + local_4d0) = auVar140._0_4_;
          if ((bVar45 & 2) != 0) goto LAB_1409ca45b;
LAB_1409ca0a0:
          if ((bVar45 & 4) == 0) goto LAB_1409ca0aa;
LAB_1409ca46c:
          uVar19 = extractps(auVar140,2);
          *(undefined8 *)(param_1 + local_4c0) = uVar19;
          if ((char)bVar45 < '\0') goto LAB_1409ca47c;
LAB_1409ca0b2:
          auVar118._0_4_ = fVar216 - fVar54 * local_7a8;
          auVar118._4_4_ = fVar262 - fVar55 * fStack_7a4;
          auVar118._8_4_ = fVar221 - fVar84 * fStack_7a0;
          auVar118._12_4_ = fVar195 - fVar85 * fStack_79c;
          if ((bVar45 & 1) == 0) goto LAB_1409ca0c4;
LAB_1409ca49d:
          *(int *)(param_1 + 4 + local_4d0) = auVar118._0_4_;
          if ((bVar45 & 2) != 0) goto LAB_1409ca4ad;
LAB_1409ca0ce:
          if ((bVar45 & 4) == 0) goto LAB_1409ca0d8;
LAB_1409ca4bf:
          uVar19 = extractps(auVar118,2);
          *(undefined8 *)(param_1 + 4 + local_4c0) = uVar19;
          if ((char)bVar45 < '\0') goto LAB_1409ca4d0;
LAB_1409ca0e0:
          auVar70._0_4_ = fVar224 - local_7a8 * fVar57;
          auVar70._4_4_ = fVar227 - fStack_7a4 * fVar58;
          auVar70._8_4_ = fVar229 - fStack_7a0 * fVar87;
          auVar70._12_4_ = fVar232 - fStack_79c * fVar89;
        }
        if ((bVar45 & 1) != 0) {
          *(int *)(param_1 + 8 + local_4d0) = auVar70._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar19 = extractps(auVar70,1);
          *(undefined8 *)(param_1 + 8 + local_4c8) = uVar19;
        }
        if ((bVar45 & 4) != 0) {
          uVar19 = extractps(auVar70,2);
          *(undefined8 *)(param_1 + 8 + local_4c0) = uVar19;
        }
        if ((char)bVar45 < '\0') {
          uVar19 = extractps(auVar70,3);
          *(undefined8 *)(param_1 + 8 + lVar24) = uVar19;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + local_4d0) = uVar14;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + local_4c8) = uVar15;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + local_4c0) = uVar16;
        }
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar24) = uVar17;
        }
      }
      uVar32 = local_4b0 + 4;
      lVar42 = lVar42 + 0x30;
      pfVar39 = local_4b8 + 0x10;
      local_2a8 = auVar113;
    } while ((int)uVar32 < (int)(uVar29 & 0xfffffffc));
  }
  uVar29 = (uint)uVar32;
  if ((int)param_28 <= (int)uVar29) {
    return;
  }
  auVar119 = ZEXT416(param_28);
  auVar167._0_4_ =
       -(uint)((int)(uVar29 | (uint)__xmm_00000003000000020000000100000000) < (int)param_28);
  auVar167._4_4_ =
       -(uint)((int)(uVar29 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_28);
  auVar167._8_4_ = -(uint)((int)(uVar29 | _UNK_150631e08) < (int)param_28);
  auVar167._12_4_ = -(uint)((int)(uVar29 | _UNK_150631e0c) < (int)param_28);
  uVar32 = uVar32 & 0xffffffff;
  pauVar2 = (undefined1 (*) [16])(param_3 + uVar32 * 0xc);
  uVar29 = movmskps(param_28,auVar167);
  bVar45 = (char)((char)uVar29 << 4) >> 4;
  if (uVar29 == 0xf) {
    auVar72 = *pauVar2;
    auVar60 = pauVar2[1];
    uVar106 = auVar60._0_4_;
    auVar240._4_4_ = uVar106;
    auVar240._0_4_ = uVar106;
    auVar240._8_4_ = uVar106;
    auVar240._12_4_ = uVar106;
    uVar106 = auVar72._12_4_;
    auVar245._0_8_ = CONCAT44(uVar106,auVar72._0_4_);
    auVar245._8_4_ = auVar72._4_4_;
    auVar245._12_4_ = uVar106;
    auVar133 = pblendw(auVar240,auVar245,0x3f);
    auVar209._0_8_ = auVar72._8_8_;
    auVar209._8_4_ = auVar72._8_4_;
    auVar209._12_4_ = uVar106;
    auVar134 = pblendw(auVar209,auVar60,0xc);
    auVar119._0_8_ = CONCAT44(*(undefined4 *)(pauVar2[2] + 4),auVar60._8_4_);
    auVar119._8_4_ = auVar60._12_4_;
    auVar119._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar244._8_8_ = auVar119._0_8_;
    auVar244._0_8_ = auVar245._0_8_;
    auVar239._8_8_ = auVar119._8_8_;
    auVar239._0_8_ = auVar133._8_8_;
    auVar208._0_8_ = auVar134._0_8_;
    auVar208._8_4_ = *(undefined4 *)pauVar2[2];
    auVar208._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar71._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar167._0_4_;
    auVar71._4_4_ = _UNK_150b50da4 & auVar167._4_4_;
    auVar71._8_4_ = _UNK_150b50da8 & auVar167._8_4_;
    auVar71._12_4_ = _UNK_150b50dac & auVar167._12_4_;
    lVar42 = extractps(auVar71,1);
    lVar24 = extractps(auVar71,2);
    lVar33 = extractps(auVar71,3);
    auVar244._4_4_ = *(undefined4 *)(*pauVar2 + lVar42);
    auVar244._0_4_ = *(undefined4 *)*pauVar2;
    auVar244._12_4_ = *(undefined4 *)(*pauVar2 + lVar33);
    auVar244._8_4_ = *(undefined4 *)(*pauVar2 + lVar24);
    auVar60 = ___xmm_000000280000001c0000001000000004 & auVar167;
    auVar239._4_4_ = *(undefined4 *)(*pauVar2 + auVar60._4_4_);
    auVar239._0_4_ = *(undefined4 *)(*pauVar2 + auVar60._0_4_);
    auVar239._12_4_ = *(undefined4 *)(*pauVar2 + auVar60._12_4_);
    auVar239._8_4_ = *(undefined4 *)(*pauVar2 + auVar60._8_4_);
    auVar72 = ___xmm_0000002c000000200000001400000008 & auVar167;
    auVar208._4_4_ = *(undefined4 *)(*pauVar2 + auVar72._4_4_);
    auVar208._0_4_ = *(undefined4 *)(*pauVar2 + auVar72._0_4_);
    auVar208._12_4_ = *(undefined4 *)(*pauVar2 + auVar72._12_4_);
    auVar208._8_4_ = *(undefined4 *)(*pauVar2 + auVar72._8_4_);
  }
  auVar172 = ZEXT816(0);
  bVar43 = ~bVar45;
  auVar178 = ZEXT816(0);
  if ((param_10 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar178 = ZEXT416(*(uint *)(param_11 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_11 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar178 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar72._8_8_ = auVar178._8_8_;
        auVar72._0_8_ = auVar178._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar178 = pblendw(auVar178,auVar72,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        auVar60 = pmovzxwd(auVar72,auVar178);
        auVar72._8_8_ = auVar60._8_8_;
        auVar72._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)auVar178[3] << 0x18;
        auVar178 = auVar72;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar178[2];
        auVar60 = pmovzxwd(auVar178,auVar178);
        auVar178._8_8_ = auVar60._8_8_;
        auVar178._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  if ((param_13 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar172 = ZEXT416(*(uint *)(param_14 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_14 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar172 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar72._8_8_ = auVar172._8_8_;
        auVar72._0_8_ = auVar172._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar172 = pblendw(auVar172,auVar72,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        bVar20 = auVar172[3];
        auVar60 = pmovzxwd(auVar72,auVar172);
        auVar172._8_8_ = auVar60._8_8_;
        auVar172._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar172[2];
        auVar60 = pmovzxwd(auVar172,auVar172);
        auVar172._8_8_ = auVar60._8_8_;
        auVar172._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar73 = (undefined1  [16])0x0;
  auVar190 = ZEXT816(0);
  if ((param_16 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar190 = ZEXT416(*(uint *)(param_17 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_17 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar190 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar119._8_8_ = auVar190._8_8_;
        auVar119._0_8_ = auVar190._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar190 = pblendw(auVar190,auVar119,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        bVar20 = auVar190[3];
        auVar60 = pmovzxwd(auVar119,auVar190);
        auVar190._8_8_ = auVar60._8_8_;
        auVar190._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar190[2];
        auVar60 = pmovzxwd(auVar190,auVar190);
        auVar190._8_8_ = auVar60._8_8_;
        auVar190._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  if ((param_22 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar73 = ZEXT416(*(uint *)(param_23 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_23 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar73 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar128._8_8_ = auVar73._8_8_;
        auVar128._0_8_ = auVar73._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar73 = pblendw(auVar73,auVar128,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        bVar20 = auVar73[3];
        auVar60 = pmovzxwd(auVar73,auVar73);
        auVar73._8_8_ = auVar60._8_8_;
        auVar73._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar73[2];
        auVar60 = pmovzxwd(auVar73,auVar73);
        auVar73._8_8_ = auVar60._8_8_;
        auVar73._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar251 = ZEXT816(0);
  auVar120 = (undefined1  [16])0x0;
  if ((param_25 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar120 = ZEXT416(*(uint *)(param_26 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_26 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar120 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar154._8_8_ = auVar120._8_8_;
        auVar154._0_8_ = auVar120._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar120 = pblendw(auVar120,auVar154,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        bVar20 = auVar120[3];
        auVar60 = pmovzxwd(auVar120,auVar120);
        auVar120._8_8_ = auVar60._8_8_;
        auVar120._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar120[2];
        auVar60 = pmovzxwd(auVar120,auVar120);
        auVar120._8_8_ = auVar60._8_8_;
        auVar120._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  if ((param_19 & 1) != 0) {
    if ((bVar43 & 9) == 0) {
      auVar251 = ZEXT416(*(uint *)(param_20 + uVar32));
    }
    else {
      pbVar18 = (byte *)(param_20 + uVar32);
      if ((uVar29 & 1) != 0) {
        auVar251 = ZEXT116(*pbVar18);
      }
      if ((uVar29 & 2) != 0) {
        auVar155._8_8_ = auVar251._8_8_;
        auVar155._0_8_ = auVar251._0_8_ | (ulonglong)pbVar18[1] << 8;
        auVar251 = pblendw(auVar251,auVar155,0xfd);
      }
      if ((uVar29 & 4) != 0) {
        bVar20 = auVar251[3];
        auVar60 = pmovzxwd(auVar251,auVar251);
        auVar251._8_8_ = auVar60._8_8_;
        auVar251._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
             (ulonglong)bVar20 << 0x18;
      }
      if ((uVar29 & 8) != 0) {
        bVar20 = auVar251[2];
        auVar60 = pmovzxwd(auVar251,auVar251);
        auVar251._8_8_ = auVar60._8_8_;
        auVar251._0_8_ =
             auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar20 << 0x10 |
             (ulonglong)pbVar18[3] << 0x18;
      }
    }
  }
  auVar165._0_4_ = auVar244._0_4_ << 4;
  auVar165._4_4_ = auVar244._4_4_ << 4;
  auVar165._8_4_ = auVar244._8_4_ << 4;
  auVar165._12_4_ = auVar244._12_4_ << 4;
  auVar60 = auVar167 & auVar165;
  pfVar39 = (float *)(auVar60._0_4_ + param_1);
  if ((bVar45 & 1) != 0) {
    local_628 = *pfVar39;
  }
  lVar42 = (longlong)auVar60._4_4_;
  if ((bVar45 & 2) != 0) {
    fStack_624 = *(float *)(param_1 + lVar42);
  }
  auVar134 = ___xmm_00000004000000040000000400000004 & auVar167;
  if ((bVar45 & 4) != 0) {
    fStack_620 = *(float *)(param_1 + auVar60._8_4_);
  }
  uVar25 = (ulonglong)auVar134._0_4_;
  uVar29 = auVar134._4_4_;
  if ((char)bVar45 < '\0') {
    fStack_61c = *(float *)(param_1 + auVar60._12_4_);
  }
  if ((bVar45 & 1) != 0) {
    local_618 = *(float *)(uVar25 + (longlong)pfVar39);
  }
  if ((bVar45 & 2) != 0) {
    fStack_614 = *(float *)((ulonglong)uVar29 + lVar42 + param_1);
  }
  uVar34 = (ulonglong)auVar134._8_4_;
  auVar133 = ___xmm_00000008000000080000000800000008 & auVar167;
  lVar24 = auVar60._8_4_ + param_1;
  uVar30 = (ulonglong)auVar134._12_4_;
  if ((bVar45 & 4) != 0) {
    fStack_610 = *(float *)(uVar34 + lVar24);
  }
  uVar26 = (ulonglong)auVar133._0_4_;
  lVar33 = auVar60._12_4_ + param_1;
  if ((char)bVar45 < '\0') {
    fStack_60c = *(float *)(uVar30 + lVar33);
  }
  if ((bVar45 & 1) != 0) {
    local_608 = *(float *)(uVar26 + (longlong)pfVar39);
  }
  local_818 = (ulonglong)auVar133._4_4_;
  local_528._0_4_ = auVar239._0_4_ << 4;
  local_528._4_4_ = auVar239._4_4_ << 4;
  local_528._8_4_ = auVar239._8_4_ << 4;
  local_528._12_4_ = auVar239._12_4_ << 4;
  uVar27 = (ulonglong)auVar133._8_4_;
  if ((bVar45 & 2) != 0) {
    fStack_604 = *(float *)(local_818 + lVar42 + param_1);
  }
  auVar60 = auVar167 & local_528;
  uVar28 = (ulonglong)auVar133._12_4_;
  if ((bVar45 & 4) != 0) {
    fStack_600 = *(float *)(uVar27 + lVar24);
  }
  if ((char)bVar45 < '\0') {
    fStack_5fc = *(float *)(uVar28 + lVar33);
  }
  lVar37 = (longlong)auVar60._0_4_;
  if ((bVar45 & 1) != 0) {
    local_658 = *(float *)(param_1 + lVar37);
  }
  lVar48 = (longlong)auVar60._4_4_;
  iVar104 = auVar60._8_4_;
  iVar46 = auVar208._0_4_;
  iVar98 = auVar208._4_4_;
  iVar129 = auVar208._8_4_;
  iVar130 = auVar208._12_4_;
  iVar88 = auVar60._12_4_;
  if ((bVar45 & 2) == 0) {
    if ((bVar45 & 4) == 0) goto LAB_1409cabd3;
LAB_1409cae2a:
    fStack_650 = *(float *)(param_1 + iVar104);
    if ((char)bVar45 < '\0') goto LAB_1409cae45;
LAB_1409cabdf:
    if ((bVar45 & 1) == 0) goto LAB_1409cabeb;
LAB_1409cae5f:
    local_648 = *(float *)(uVar25 + lVar37 + param_1);
    if ((bVar45 & 2) != 0) goto LAB_1409cae82;
LAB_1409cabf7:
    lVar49 = iVar104 + param_1;
    if ((bVar45 & 4) == 0) goto LAB_1409cac03;
LAB_1409caea5:
    fStack_640 = *(float *)(uVar34 + lVar49);
    lVar41 = iVar88 + param_1;
    if ((char)bVar45 < '\0') goto LAB_1409caec1;
LAB_1409cac0f:
    if ((bVar45 & 1) == 0) goto LAB_1409cac20;
LAB_1409caee0:
    local_638 = *(float *)(uVar26 + lVar37 + param_1);
    local_518._0_4_ = iVar46 << 4;
    local_518._4_4_ = iVar98 << 4;
    local_518._8_4_ = iVar129 << 4;
    local_518._12_4_ = iVar130 << 4;
    if ((bVar45 & 2) != 0) goto LAB_1409caf09;
LAB_1409cac32:
    auVar60 = auVar167 & local_518;
    if ((bVar45 & 4) == 0) goto LAB_1409cac44;
LAB_1409caf32:
    fStack_630 = *(float *)(uVar27 + lVar49);
    iVar104 = auVar60._0_4_;
    if ((char)bVar45 < '\0') goto LAB_1409caf5e;
LAB_1409cac59:
    iVar88 = auVar60._4_4_;
  }
  else {
    fStack_654 = *(float *)(param_1 + lVar48);
    if ((bVar45 & 4) != 0) goto LAB_1409cae2a;
LAB_1409cabd3:
    if (-1 < (char)bVar45) goto LAB_1409cabdf;
LAB_1409cae45:
    fStack_64c = *(float *)(param_1 + iVar88);
    if ((bVar45 & 1) != 0) goto LAB_1409cae5f;
LAB_1409cabeb:
    if ((bVar45 & 2) == 0) goto LAB_1409cabf7;
LAB_1409cae82:
    fStack_644 = *(float *)((ulonglong)uVar29 + lVar48 + param_1);
    lVar49 = iVar104 + param_1;
    if ((bVar45 & 4) != 0) goto LAB_1409caea5;
LAB_1409cac03:
    lVar41 = iVar88 + param_1;
    if (-1 < (char)bVar45) goto LAB_1409cac0f;
LAB_1409caec1:
    fStack_63c = *(float *)(uVar30 + lVar41);
    if ((bVar45 & 1) != 0) goto LAB_1409caee0;
LAB_1409cac20:
    local_518._0_4_ = iVar46 << 4;
    local_518._4_4_ = iVar98 << 4;
    local_518._8_4_ = iVar129 << 4;
    local_518._12_4_ = iVar130 << 4;
    if ((bVar45 & 2) == 0) goto LAB_1409cac32;
LAB_1409caf09:
    fStack_634 = *(float *)(local_818 + lVar48 + param_1);
    auVar60 = auVar167 & local_518;
    if ((bVar45 & 4) != 0) goto LAB_1409caf32;
LAB_1409cac44:
    iVar104 = auVar60._0_4_;
    if (-1 < (char)bVar45) goto LAB_1409cac59;
LAB_1409caf5e:
    fStack_62c = *(float *)(uVar28 + lVar41);
    iVar88 = auVar60._4_4_;
  }
  lVar47 = (longlong)iVar104;
  if ((bVar45 & 1) != 0) {
    local_688 = *(float *)(param_1 + lVar47);
  }
  lVar50 = (longlong)iVar88;
  if ((bVar45 & 2) != 0) {
    fStack_684 = *(float *)(param_1 + lVar50);
  }
  if ((bVar45 & 4) != 0) {
    fStack_680 = *(float *)(param_1 + auVar60._8_4_);
  }
  if ((char)bVar45 < '\0') {
    fStack_67c = *(float *)(param_1 + auVar60._12_4_);
  }
  if ((bVar45 & 1) != 0) {
    local_678 = *(float *)(uVar25 + lVar47 + param_1);
  }
  if ((bVar45 & 2) != 0) {
    fStack_674 = *(float *)((ulonglong)uVar29 + lVar50 + param_1);
  }
  auVar134 = ___xmm_0000000c0000000c0000000c0000000c & auVar167;
  lVar35 = auVar60._8_4_ + param_1;
  if ((bVar45 & 4) != 0) {
    fStack_670 = *(float *)(uVar34 + lVar35);
  }
  uVar31 = (ulonglong)auVar134._0_4_;
  lVar44 = auVar60._12_4_ + param_1;
  if ((char)bVar45 < '\0') {
    fStack_66c = *(float *)(uVar30 + lVar44);
  }
  if ((bVar45 & 1) != 0) {
    local_668 = *(float *)(uVar26 + lVar47 + param_1);
  }
  uVar38 = (ulonglong)auVar134._4_4_;
  uVar36 = (ulonglong)auVar134._8_4_;
  if ((bVar45 & 2) != 0) {
    fStack_664 = *(float *)(local_818 + lVar50 + param_1);
  }
  uVar40 = (ulonglong)auVar134._12_4_;
  auVar134 = insertps(ZEXT416(*(uint *)(uVar31 + (longlong)pfVar39)),
                      *(undefined4 *)(uVar38 + lVar42 + param_1),0x10);
  auVar60 = insertps(ZEXT416(*(uint *)(uVar31 + lVar37 + param_1)),
                     *(undefined4 *)(uVar38 + lVar48 + param_1),0x10);
  auVar133 = insertps(ZEXT416(*(uint *)(uVar31 + lVar47 + param_1)),
                      *(undefined4 *)(uVar38 + lVar50 + param_1),0x10);
  if ((bVar45 & 4) != 0) {
    fStack_660 = *(float *)(uVar27 + lVar35);
  }
  auVar134 = insertps(auVar134,*(undefined4 *)(uVar36 + lVar24),0x20);
  auVar60 = insertps(auVar60,*(undefined4 *)(uVar36 + lVar49),0x20);
  auVar133 = insertps(auVar133,*(undefined4 *)(uVar36 + lVar35),0x20);
  if (((char)bVar45 < '\0') && (fStack_65c = *(float *)(uVar28 + lVar44), (bVar43 & 0xf) == 0)) {
    lVar42 = uVar32 * 0x10;
    auVar207 = *(undefined1 (*) [16])(param_5 + lVar42);
    puVar3 = (undefined4 *)(param_5 + 0x10 + lVar42);
    auVar136 = *(undefined1 (*) [16])(param_5 + 0x20 + lVar42);
    puVar4 = (undefined4 *)(param_5 + 0x30 + lVar42);
    auVar219._8_4_ = auVar207._4_4_;
    auVar219._0_8_ = auVar207._0_8_;
    auVar219._12_4_ = puVar3[1];
    local_128._4_4_ = *puVar3;
    local_128._0_4_ = auVar207._0_4_;
    auVar202._0_8_ = CONCAT44(puVar3[2],auVar207._8_4_);
    auVar202._8_4_ = auVar207._12_4_;
    auVar202._12_4_ = puVar3[3];
    auVar171._0_8_ = auVar136._0_8_;
    auVar171._8_4_ = auVar136._4_4_;
    auVar171._12_4_ = puVar4[1];
    local_118._8_8_ = auVar171._8_8_;
    local_128._12_4_ = *puVar4;
    local_128._8_4_ = auVar136._0_4_;
    auVar189._0_8_ = CONCAT44(puVar4[2],auVar136._8_4_);
    auVar189._8_4_ = auVar136._12_4_;
    auVar189._12_4_ = puVar4[3];
    local_118._0_8_ = auVar219._8_8_;
    local_108._8_8_ = auVar189._0_8_;
    local_108._0_8_ = auVar202._0_8_;
    local_f8._8_8_ = auVar189._8_8_;
    local_f8._0_8_ = auVar202._8_8_;
  }
  else {
    auVar141._0_4_ = ___xmm_00000030000000200000001000000000 & auVar167._0_4_;
    auVar141._4_4_ = _UNK_150b511c4 & auVar167._4_4_;
    auVar141._8_4_ = _UNK_150b511c8 & auVar167._8_4_;
    auVar141._12_4_ = _UNK_150b511cc & auVar167._12_4_;
    lVar24 = extractps(auVar141,1);
    lVar48 = extractps(auVar141,2);
    lVar37 = extractps(auVar141,3);
    lVar42 = param_5 + uVar32 * 0x10;
    auVar207 = insertps(ZEXT416(*(uint *)(param_5 + uVar32 * 0x10)),*(undefined4 *)(lVar24 + lVar42)
                        ,0x10);
    auVar207 = insertps(auVar207,*(undefined4 *)(lVar48 + lVar42),0x20);
    local_128 = insertps(auVar207,*(undefined4 *)(lVar37 + lVar42),0x30);
    auVar207 = ___xmm_00000034000000240000001400000004 & auVar167;
    auVar136 = insertps(ZEXT416(*(uint *)((ulonglong)auVar207._0_4_ + lVar42)),
                        *(undefined4 *)((ulonglong)auVar207._4_4_ + lVar42),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._8_4_ + lVar42),0x20);
    local_118 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._12_4_ + lVar42),0x30);
    auVar207 = ___xmm_00000038000000280000001800000008 & auVar167;
    auVar136 = insertps(ZEXT416(*(uint *)((ulonglong)auVar207._0_4_ + lVar42)),
                        *(undefined4 *)((ulonglong)auVar207._4_4_ + lVar42),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._8_4_ + lVar42),0x20);
    local_108 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._12_4_ + lVar42),0x30);
    auVar207 = ___xmm_0000003c0000002c0000001c0000000c & auVar167;
    auVar136 = insertps(ZEXT416(*(uint *)((ulonglong)auVar207._0_4_ + lVar42)),
                        *(undefined4 *)((ulonglong)auVar207._4_4_ + lVar42),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._8_4_ + lVar42),0x20);
    local_f8 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar207._12_4_ + lVar42),0x30);
  }
  auVar134 = insertps(auVar134,*(undefined4 *)(uVar40 + lVar33),0x30);
  auVar60 = insertps(auVar60,*(undefined4 *)(uVar40 + lVar41),0x30);
  auVar133 = insertps(auVar133,*(undefined4 *)(uVar40 + lVar44),0x30);
  pauVar2 = (undefined1 (*) [16])(param_4 + uVar32 * 0xc);
  if ((bVar43 & 0xf) == 0) {
    auVar207 = *pauVar2;
    auVar136 = pauVar2[1];
    local_158._0_4_ = auVar207._0_4_;
    auVar61 = insertps(auVar136,auVar207,0x8c);
    local_158._4_4_ = auVar207._12_4_;
    local_158._8_4_ = auVar136._8_4_;
    local_158._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    local_148._4_4_ = auVar136._0_4_;
    local_148._0_4_ = auVar207._4_4_;
    local_148._8_4_ = auVar136._12_4_;
    local_148._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar176._0_8_ = auVar61._0_8_;
    auVar176._8_4_ = *(undefined4 *)pauVar2[2];
    auVar176._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar142._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar167._0_4_;
    auVar142._4_4_ = _UNK_150b50da4 & auVar167._4_4_;
    auVar142._8_4_ = _UNK_150b50da8 & auVar167._8_4_;
    auVar142._12_4_ = _UNK_150b50dac & auVar167._12_4_;
    lVar42 = extractps(auVar142,1);
    lVar24 = extractps(auVar142,2);
    lVar33 = extractps(auVar142,3);
    auVar207 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar42),0x10);
    auVar207 = insertps(auVar207,*(undefined4 *)(*pauVar2 + lVar24),0x20);
    local_158 = insertps(auVar207,*(undefined4 *)(*pauVar2 + lVar33),0x30);
    auVar207 = ___xmm_000000280000001c0000001000000004 & auVar167;
    auVar136 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar207._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar207._4_4_),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar207._8_4_),0x20);
    local_148 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar207._12_4_),0x30);
    auVar207 = ___xmm_0000002c000000200000001400000008 & auVar167;
    auVar136 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar207._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar207._4_4_),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar207._8_4_),0x20);
    auVar176 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar207._12_4_),0x30);
  }
  auVar207 = pmovsxbd(auVar73,auVar73);
  auVar74._0_4_ = auVar207._0_4_ << 2;
  auVar74._4_4_ = auVar207._4_4_ << 2;
  auVar74._8_4_ = auVar207._8_4_ << 2;
  auVar74._12_4_ = auVar207._12_4_ << 2;
  auVar74 = auVar74 & auVar167;
  auVar207 = insertps(ZEXT416(*(uint *)(param_24 + auVar74._0_4_)),
                      *(undefined4 *)(param_24 + auVar74._4_4_),0x10);
  auVar207 = insertps(auVar207,*(undefined4 *)(param_24 + auVar74._8_4_),0x20);
  local_1f8 = insertps(auVar207,*(undefined4 *)(param_24 + auVar74._12_4_),0x30);
  auVar207 = pmovsxbd(auVar120,auVar120);
  auVar121._0_4_ = auVar207._0_4_ << 2;
  auVar121._4_4_ = auVar207._4_4_ << 2;
  auVar121._8_4_ = auVar207._8_4_ << 2;
  auVar121._12_4_ = auVar207._12_4_ << 2;
  auVar121 = auVar121 & auVar167;
  auVar207 = insertps(ZEXT416(*(uint *)(param_27 + auVar121._0_4_)),
                      *(undefined4 *)(param_27 + auVar121._4_4_),0x10);
  auVar207 = insertps(auVar207,*(undefined4 *)(param_27 + auVar121._8_4_),0x20);
  local_208 = insertps(auVar207,*(undefined4 *)(param_27 + auVar121._12_4_),0x30);
  _local_5c8 = auVar167;
  local_590 = param_3;
  local_588 = param_4;
  local_580 = param_2;
  local_218 = auVar167;
  local_138 = auVar176;
  FUN_1409aeab0(&local_628,&local_658,&local_688,local_128,local_158,local_1f8,local_208,&local_1c8,
                &local_1d8,&local_1e8,&local_3a8,&local_3d8,&local_408,&local_438,&local_188,
                &local_1b8,local_218);
  auVar75._4_4_ = auVar244._4_4_ * 3;
  auVar75._0_4_ = auVar244._0_4_ * 3;
  auVar75._8_4_ = auVar244._8_4_ * 3;
  auVar75._12_4_ = auVar244._12_4_ * 3;
  auVar75 = auVar75 & auVar167;
  lVar42 = local_580 + (longlong)auVar75._0_4_ * 4;
  auVar122._4_4_ = auVar239._4_4_ * 3;
  auVar122._0_4_ = auVar239._0_4_ * 3;
  auVar122._8_4_ = auVar239._8_4_ * 3;
  auVar122._12_4_ = auVar239._12_4_ * 3;
  auVar122 = auVar122 & auVar167;
  lVar24 = local_580 + (longlong)auVar122._0_4_ * 4;
  auVar143._4_4_ = iVar98 * 3;
  auVar143._0_4_ = iVar46 * 3;
  auVar143._8_4_ = iVar129 * 3;
  auVar143._12_4_ = iVar130 * 3;
  auVar143 = auVar143 & auVar167;
  lVar33 = local_580 + (longlong)auVar143._0_4_ * 4;
  lVar37 = local_580 + (longlong)auVar75._4_4_ * 4;
  uVar31 = (ulonglong)uVar29;
  auVar207 = insertps(ZEXT416(*(uint *)(uVar25 + lVar42)),*(undefined4 *)(uVar31 + lVar37),0x10);
  auVar136 = insertps(ZEXT416(*(uint *)(uVar26 + lVar42)),*(undefined4 *)(local_818 + lVar37),0x10);
  lVar42 = local_580 + (longlong)auVar122._4_4_ * 4;
  auVar61 = insertps(ZEXT416(*(uint *)(uVar25 + lVar24)),*(undefined4 *)(uVar31 + lVar42),0x10);
  auVar246 = insertps(ZEXT416(*(uint *)(uVar26 + lVar24)),*(undefined4 *)(local_818 + lVar42),0x10);
  lVar42 = local_580 + (longlong)auVar143._4_4_ * 4;
  auVar257 = insertps(ZEXT416(*(uint *)(uVar25 + lVar33)),*(undefined4 *)(uVar31 + lVar42),0x10);
  auVar112 = insertps(ZEXT416(*(uint *)(uVar26 + lVar33)),*(undefined4 *)(local_818 + lVar42),0x10);
  lVar42 = local_580 + (longlong)auVar75._8_4_ * 4;
  auVar207 = insertps(auVar207,*(undefined4 *)(uVar34 + lVar42),0x20);
  auVar136 = insertps(auVar136,*(undefined4 *)(uVar27 + lVar42),0x20);
  lVar42 = local_580 + (longlong)auVar122._8_4_ * 4;
  auVar61 = insertps(auVar61,*(undefined4 *)(uVar34 + lVar42),0x20);
  auVar247 = insertps(auVar246,*(undefined4 *)(uVar27 + lVar42),0x20);
  lVar42 = local_580 + (longlong)auVar143._8_4_ * 4;
  auVar246 = insertps(auVar257,*(undefined4 *)(uVar34 + lVar42),0x20);
  auVar236 = insertps(auVar112,*(undefined4 *)(uVar27 + lVar42),0x20);
  auVar257 = insertps(ZEXT416(*(uint *)(local_580 + (longlong)auVar75._0_4_ * 4)),
                      *(undefined4 *)(local_580 + (longlong)auVar75._4_4_ * 4),0x10);
  auVar257 = insertps(auVar257,*(undefined4 *)(local_580 + (longlong)auVar75._8_4_ * 4),0x20);
  auVar200 = insertps(auVar257,*(undefined4 *)(local_580 + (longlong)auVar75._12_4_ * 4),0x30);
  lVar42 = local_580 + (longlong)auVar75._12_4_ * 4;
  auVar257 = insertps(auVar207,*(undefined4 *)(uVar30 + lVar42),0x30);
  auVar112 = insertps(auVar136,*(undefined4 *)(uVar28 + lVar42),0x30);
  auVar207 = insertps(ZEXT416(*(uint *)(local_580 + (longlong)auVar122._0_4_ * 4)),
                      *(undefined4 *)(local_580 + (longlong)auVar122._4_4_ * 4),0x10);
  auVar207 = insertps(auVar207,*(undefined4 *)(local_580 + (longlong)auVar122._8_4_ * 4),0x20);
  auVar237 = insertps(auVar207,*(undefined4 *)(local_580 + (longlong)auVar122._12_4_ * 4),0x30);
  lVar42 = local_580 + (longlong)auVar122._12_4_ * 4;
  auVar184 = insertps(auVar61,*(undefined4 *)(uVar30 + lVar42),0x30);
  auVar249 = insertps(auVar247,*(undefined4 *)(uVar28 + lVar42),0x30);
  auVar207 = insertps(ZEXT416(*(uint *)(local_580 + (longlong)auVar143._0_4_ * 4)),
                      *(undefined4 *)(local_580 + (longlong)auVar143._4_4_ * 4),0x10);
  auVar207 = insertps(auVar207,*(undefined4 *)(local_580 + (longlong)auVar143._8_4_ * 4),0x20);
  auVar235 = insertps(auVar207,*(undefined4 *)(local_580 + (longlong)auVar143._12_4_ * 4),0x30);
  local_580 = local_580 + (longlong)auVar143._12_4_ * 4;
  auVar247 = insertps(auVar246,*(undefined4 *)(uVar30 + local_580),0x30);
  auVar236 = insertps(auVar236,*(undefined4 *)(uVar28 + local_580),0x30);
  local_6f8 = auVar178._0_4_;
  auVar207 = pmovsxbd(auVar122,local_6f8);
  auVar123._0_4_ = auVar207._0_4_ << 2;
  auVar123._4_4_ = auVar207._4_4_ << 2;
  auVar123._8_4_ = auVar207._8_4_ << 2;
  auVar123._12_4_ = auVar207._12_4_ << 2;
  auVar123 = auVar123 & auVar167;
  auVar207 = insertps(ZEXT416(*(uint *)(param_12 + auVar123._0_4_)),
                      *(undefined4 *)(param_12 + auVar123._4_4_),0x10);
  auVar207 = insertps(auVar207,*(undefined4 *)(param_12 + auVar123._8_4_),0x20);
  auVar207 = insertps(auVar207,*(undefined4 *)(param_12 + auVar123._12_4_),0x30);
  local_6e8 = auVar172._0_4_;
  auVar136 = pmovsxbd(auVar143,local_6e8);
  auVar144._0_4_ = auVar136._0_4_ << 2;
  auVar144._4_4_ = auVar136._4_4_ << 2;
  auVar144._8_4_ = auVar136._8_4_ << 2;
  auVar144._12_4_ = auVar136._12_4_ << 2;
  auVar144 = auVar144 & auVar167;
  auVar136 = insertps(ZEXT416(*(uint *)(param_15 + auVar144._0_4_)),
                      *(undefined4 *)(param_15 + auVar144._4_4_),0x10);
  auVar136 = insertps(auVar136,*(undefined4 *)(param_15 + auVar144._8_4_),0x20);
  auVar136 = insertps(auVar136,*(undefined4 *)(param_15 + auVar144._12_4_),0x30);
  local_6c8 = auVar190._0_4_;
  auVar61 = pmovsxbd(auVar176,local_6c8);
  auVar177._0_4_ = auVar61._0_4_ << 2;
  auVar177._4_4_ = auVar61._4_4_ << 2;
  auVar177._8_4_ = auVar61._8_4_ << 2;
  auVar177._12_4_ = auVar61._12_4_ << 2;
  auVar177 = auVar177 & auVar167;
  auVar61 = insertps(ZEXT416(*(uint *)(param_18 + auVar177._0_4_)),
                     *(undefined4 *)(param_18 + auVar177._4_4_),0x10);
  auVar61 = insertps(auVar61,*(undefined4 *)(param_18 + auVar177._8_4_),0x20);
  auVar61 = insertps(auVar61,*(undefined4 *)(param_18 + auVar177._12_4_),0x30);
  auVar246 = pmovsxbd(auVar251,auVar251);
  auVar250._0_4_ = auVar246._0_4_ << 2;
  auVar250._4_4_ = auVar246._4_4_ << 2;
  auVar250._8_4_ = auVar246._8_4_ << 2;
  auVar250._12_4_ = auVar246._12_4_ << 2;
  auVar250 = auVar250 & auVar167;
  auVar246 = insertps(ZEXT416(*(uint *)(param_21 + auVar250._0_4_)),
                      *(undefined4 *)(param_21 + auVar250._4_4_),0x10);
  auVar246 = insertps(auVar246,*(undefined4 *)(param_21 + auVar250._8_4_),0x20);
  auVar246 = insertps(auVar246,*(undefined4 *)(param_21 + auVar250._12_4_),0x30);
  fVar103 = local_628 - auVar200._0_4_;
  fVar108 = fStack_624 - auVar200._4_4_;
  fVar52 = fStack_620 - auVar200._8_4_;
  fVar54 = fStack_61c - auVar200._12_4_;
  fVar105 = local_618 - auVar257._0_4_;
  fVar109 = fStack_614 - auVar257._4_4_;
  fVar53 = fStack_610 - auVar257._8_4_;
  fVar55 = fStack_60c - auVar257._12_4_;
  fVar199 = local_608 - auVar112._0_4_;
  fVar57 = fStack_604 - auVar112._4_4_;
  fVar87 = fStack_600 - auVar112._8_4_;
  fVar96 = fStack_5fc - auVar112._12_4_;
  fVar203 = local_658 - auVar237._0_4_;
  fVar58 = fStack_654 - auVar237._4_4_;
  fVar89 = fStack_650 - auVar237._8_4_;
  fVar97 = fStack_64c - auVar237._12_4_;
  fVar56 = local_648 - auVar184._0_4_;
  fVar82 = fStack_644 - auVar184._4_4_;
  fVar83 = fStack_640 - auVar184._8_4_;
  fVar84 = fStack_63c - auVar184._12_4_;
  fVar132 = local_638 - auVar249._0_4_;
  fVar156 = fStack_634 - auVar249._4_4_;
  fVar273 = fStack_630 - auVar249._8_4_;
  fVar157 = fStack_62c - auVar249._12_4_;
  fVar85 = local_688 - auVar235._0_4_;
  fVar86 = fStack_684 - auVar235._4_4_;
  fVar92 = fStack_680 - auVar235._8_4_;
  fVar93 = fStack_67c - auVar235._12_4_;
  fVar94 = local_678 - auVar247._0_4_;
  fVar95 = fStack_674 - auVar247._4_4_;
  fVar231 = fStack_670 - auVar247._8_4_;
  fVar99 = fStack_66c - auVar247._12_4_;
  fVar100 = local_668 - auVar236._0_4_;
  fVar101 = fStack_664 - auVar236._4_4_;
  fVar102 = fStack_660 - auVar236._8_4_;
  fVar110 = fStack_65c - auVar236._12_4_;
  local_7a8 = auVar134._0_4_;
  fStack_7a4 = auVar134._4_4_;
  fStack_7a0 = auVar134._8_4_;
  fStack_79c = auVar134._12_4_;
  local_7e8 = auVar60._0_4_;
  fStack_7e4 = auVar60._4_4_;
  fStack_7e0 = auVar60._8_4_;
  fStack_7dc = auVar60._12_4_;
  local_828 = auVar133._0_4_;
  fStack_824 = auVar133._4_4_;
  fStack_820 = auVar133._8_4_;
  fStack_81c = auVar133._12_4_;
  local_738._4_4_ = fStack_7a4 + fStack_7e4 + fStack_824;
  local_738._0_4_ = local_7a8 + local_7e8 + local_828;
  fStack_730 = fStack_7a0 + fStack_7e0 + fStack_820;
  fStack_72c = fStack_79c + fStack_7dc + fStack_81c;
  pauVar2 = (undefined1 (*) [16])(param_7 + uVar32 * 0xc);
  if ((bVar43 & 0xf) == 0) {
    auVar257 = *pauVar2;
    auVar112 = pauVar2[1];
    auVar184 = insertps(auVar112,auVar257,0x8c);
    local_7d8._4_4_ = auVar257._12_4_;
    local_7d8._0_4_ = auVar257._0_4_;
    fStack_7d0 = (float)auVar112._8_4_;
    fStack_7cc = (float)*(undefined4 *)(pauVar2[2] + 4);
    local_5e8._4_4_ = auVar112._0_4_;
    local_5e8._0_4_ = auVar257._4_4_;
    fStack_5e0 = (float)auVar112._12_4_;
    fStack_5dc = (float)*(undefined4 *)(pauVar2[2] + 8);
    local_5f8 = auVar184._0_8_;
    fStack_5f0 = (float)*(undefined4 *)pauVar2[2];
    fStack_5ec = (float)*(undefined4 *)(pauVar2[2] + 0xc);
    auVar257 = *(undefined1 (*) [16])(param_6 + uVar32 * 0xc);
    auVar112 = *(undefined1 (*) [16])(param_6 + 0x10 + uVar32 * 0xc);
    puVar3 = (undefined4 *)(param_6 + 0x20 + uVar32 * 0xc);
    auVar201._0_4_ = auVar257._0_4_;
    auVar184 = insertps(auVar112,auVar257,0x8c);
    auVar201._4_4_ = auVar257._12_4_;
    auVar201._8_4_ = auVar112._8_4_;
    auVar201._12_4_ = puVar3[1];
    auVar210._4_4_ = auVar112._0_4_;
    auVar210._0_4_ = auVar257._4_4_;
    auVar210._8_4_ = auVar112._12_4_;
    auVar210._12_4_ = puVar3[2];
    auVar168._0_8_ = auVar184._0_8_;
    auVar168._8_4_ = *puVar3;
    auVar168._12_4_ = puVar3[3];
  }
  else {
    auVar166._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar167._0_4_;
    auVar166._4_4_ = _UNK_150b50da4 & auVar167._4_4_;
    auVar166._8_4_ = _UNK_150b50da8 & auVar167._8_4_;
    auVar166._12_4_ = _UNK_150b50dac & auVar167._12_4_;
    lVar24 = extractps(auVar166,1);
    lVar33 = extractps(auVar166,2);
    lVar37 = extractps(auVar166,3);
    auVar257 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar24),0x10);
    auVar257 = insertps(auVar257,*(undefined4 *)(*pauVar2 + lVar33),0x20);
    _local_7d8 = insertps(auVar257,*(undefined4 *)(*pauVar2 + lVar37),0x30);
    auVar257 = ___xmm_000000280000001c0000001000000004 & auVar167;
    auVar112 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar257._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar257._4_4_),0x10);
    auVar112 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar257._8_4_),0x20);
    _local_5e8 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar257._12_4_),0x30);
    auVar167 = ___xmm_0000002c000000200000001400000008 & auVar167;
    auVar112 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar167._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar167._4_4_),0x10);
    auVar112 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar167._8_4_),0x20);
    _local_5f8 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar167._12_4_),0x30);
    lVar42 = param_6 + uVar32 * 0xc;
    auVar112 = insertps(ZEXT416(*(uint *)(param_6 + uVar32 * 0xc)),*(undefined4 *)(lVar24 + lVar42),
                        0x10);
    auVar112 = insertps(auVar112,*(undefined4 *)(lVar33 + lVar42),0x20);
    auVar201 = insertps(auVar112,*(undefined4 *)(lVar37 + lVar42),0x30);
    auVar112 = insertps(ZEXT416(*(uint *)((ulonglong)auVar257._0_4_ + lVar42)),
                        *(undefined4 *)((ulonglong)auVar257._4_4_ + lVar42),0x10);
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)auVar257._8_4_ + lVar42),0x20);
    auVar210 = insertps(auVar112,*(undefined4 *)((ulonglong)auVar257._12_4_ + lVar42),0x30);
    auVar257 = insertps(ZEXT416(*(uint *)((ulonglong)auVar167._0_4_ + lVar42)),
                        *(undefined4 *)((ulonglong)auVar167._4_4_ + lVar42),0x10);
    auVar257 = insertps(auVar257,*(undefined4 *)((ulonglong)auVar167._8_4_ + lVar42),0x20);
    auVar168 = insertps(auVar257,*(undefined4 *)((ulonglong)auVar167._12_4_ + lVar42),0x30);
  }
  local_798._0_4_ = auVar61._0_4_ * auVar168._0_4_;
  local_798._4_4_ = auVar61._4_4_ * auVar168._4_4_;
  fStack_790 = auVar61._8_4_ * auVar168._8_4_;
  fStack_78c = auVar61._12_4_ * auVar168._12_4_;
  local_7c8._0_4_ = auVar207._0_4_;
  local_7c8._4_4_ = auVar207._4_4_;
  fStack_7c0 = auVar207._8_4_;
  fStack_7bc = auVar207._12_4_;
  local_7c8._0_4_ = (float)local_7c8._0_4_ * auVar210._0_4_;
  local_7c8._4_4_ = (float)local_7c8._4_4_ * auVar210._4_4_;
  fStack_7c0 = fStack_7c0 * auVar210._8_4_;
  fStack_7bc = fStack_7bc * auVar210._12_4_;
  fVar158 = auVar136._0_4_ * auVar201._0_4_;
  fVar174 = auVar136._4_4_ * auVar201._4_4_;
  auVar145._4_4_ = fVar174;
  auVar145._0_4_ = fVar158;
  fVar180 = auVar136._8_4_ * auVar201._8_4_;
  fVar181 = auVar136._12_4_ * auVar201._12_4_;
  auVar169._0_4_ = param_8 * fVar158 * param_8;
  auVar169._4_4_ = param_8 * fVar174 * param_8;
  auVar169._8_4_ = param_8 * fVar180 * param_8;
  auVar169._12_4_ = param_8 * fVar181 * param_8;
  auVar21._4_4_ = _UNK_15076b1f4;
  auVar21._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar21._8_4_ = _UNK_15076b1f8;
  auVar21._12_4_ = _UNK_15076b1fc;
  auVar136 = divps(auVar21,auVar169);
  fVar193 = local_3a8 + local_3d8;
  fVar192 = fStack_3a4 + fStack_3d4;
  fVar196 = fStack_3a0 + fStack_3d0;
  fVar198 = fStack_39c + fStack_3cc;
  fVar206 = local_398 + local_3c8;
  fVar173 = fStack_394 + fStack_3c4;
  fVar213 = fStack_390 + fStack_3c0;
  fVar214 = fStack_38c + fStack_3bc;
  fVar194 = local_388 + local_3b8;
  fVar204 = fStack_384 + fStack_3b4;
  fVar197 = fStack_380 + fStack_3b0;
  fVar161 = fStack_37c + fStack_3ac;
  local_818._0_4_ = auVar246._0_4_;
  local_818._4_4_ = auVar246._4_4_;
  fStack_810 = auVar246._8_4_;
  fStack_80c = auVar246._12_4_;
  local_818._0_4_ = (float)local_818 + (float)local_818;
  local_818._4_4_ = local_818._4_4_ + local_818._4_4_;
  fStack_810 = fStack_810 + fStack_810;
  fStack_80c = fStack_80c + fStack_80c;
  auVar145._8_4_ = fVar180;
  auVar145._12_4_ = fVar181;
  auVar207 = divps(auVar145,_local_738);
  auVar207 = sqrtps(auVar207,auVar207);
  fVar215 = auVar136._0_4_;
  fVar217 = auVar136._4_4_;
  fVar220 = auVar136._8_4_;
  fVar179 = auVar136._12_4_;
  fVar182 = auVar207._0_4_ * (float)local_818 * fVar215 * param_8;
  fVar183 = auVar207._4_4_ * local_818._4_4_ * fVar217 * param_8;
  fVar191 = auVar207._8_4_ * fStack_810 * fVar220 * param_8;
  fVar159 = auVar207._12_4_ * fStack_80c * fVar179 * param_8;
  auVar22._4_4_ = _UNK_15076b1f4;
  auVar22._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar22._8_4_ = _UNK_15076b1f8;
  auVar22._12_4_ = _UNK_15076b1fc;
  auVar258._0_4_ =
       ((local_3b8 * local_3b8 + local_3c8 * local_3c8 + local_3d8 * local_3d8) * local_828 +
       (local_388 * local_388 + local_398 * local_398 + local_3a8 * local_3a8) * local_7e8 +
       (fVar194 * fVar194 + fVar206 * fVar206 + fVar193 * fVar193) * local_7a8) *
       (fVar182 + ___xmm_3f8000003f8000003f8000003f800000) + fVar215;
  auVar258._4_4_ =
       ((fStack_3b4 * fStack_3b4 + fStack_3c4 * fStack_3c4 + fStack_3d4 * fStack_3d4) * fStack_824 +
       (fStack_384 * fStack_384 + fStack_394 * fStack_394 + fStack_3a4 * fStack_3a4) * fStack_7e4 +
       (fVar204 * fVar204 + fVar173 * fVar173 + fVar192 * fVar192) * fStack_7a4) *
       (fVar183 + _UNK_15076b1f4) + fVar217;
  auVar258._8_4_ =
       ((fStack_3b0 * fStack_3b0 + fStack_3c0 * fStack_3c0 + fStack_3d0 * fStack_3d0) * fStack_820 +
       (fStack_380 * fStack_380 + fStack_390 * fStack_390 + fStack_3a0 * fStack_3a0) * fStack_7e0 +
       (fVar197 * fVar197 + fVar213 * fVar213 + fVar196 * fVar196) * fStack_7a0) *
       (fVar191 + _UNK_15076b1f8) + fVar220;
  auVar258._12_4_ =
       ((fStack_3ac * fStack_3ac + fStack_3bc * fStack_3bc + fStack_3cc * fStack_3cc) * fStack_81c +
       (fStack_37c * fStack_37c + fStack_38c * fStack_38c + fStack_39c * fStack_39c) * fStack_7dc +
       (fVar161 * fVar161 + fVar214 * fVar214 + fVar198 * fVar198) * fStack_79c) *
       (fVar159 + _UNK_15076b1fc) + fVar179;
  auVar146._0_4_ =
       (local_1c8 - fVar215 * (float)local_7d8._0_4_) +
       ((fVar100 * local_3b8 + fVar94 * local_3c8 + fVar85 * local_3d8 +
        fVar132 * local_388 + fVar56 * local_398 + fVar203 * local_3a8) -
       (fVar199 * fVar194 + fVar105 * fVar206 + fVar103 * fVar193)) * fVar182;
  auVar146._4_4_ =
       (fStack_1c4 - fVar217 * (float)local_7d8._4_4_) +
       ((fVar101 * fStack_3b4 + fVar95 * fStack_3c4 + fVar86 * fStack_3d4 +
        fVar156 * fStack_384 + fVar82 * fStack_394 + fVar58 * fStack_3a4) -
       (fVar57 * fVar204 + fVar109 * fVar173 + fVar108 * fVar192)) * fVar183;
  auVar146._8_4_ =
       (fStack_1c0 - fVar220 * fStack_7d0) +
       ((fVar102 * fStack_3b0 + fVar231 * fStack_3c0 + fVar92 * fStack_3d0 +
        fVar273 * fStack_380 + fVar83 * fStack_390 + fVar89 * fStack_3a0) -
       (fVar87 * fVar197 + fVar53 * fVar213 + fVar52 * fVar196)) * fVar191;
  auVar146._12_4_ =
       (fStack_1bc - fVar179 * fStack_7cc) +
       ((fVar110 * fStack_3ac + fVar99 * fStack_3bc + fVar93 * fStack_3cc +
        fVar157 * fStack_37c + fVar84 * fStack_38c + fVar97 * fStack_39c) -
       (fVar96 * fVar161 + fVar55 * fVar214 + fVar54 * fVar198)) * fVar159;
  auVar207 = divps(auVar146,auVar258);
  fVar182 = (float)(-(uint)(param_9 <= fVar158) & auVar207._0_4_);
  fVar183 = (float)(-(uint)(param_9 <= fVar174) & auVar207._4_4_);
  fVar191 = (float)(-(uint)(param_9 <= fVar180) & auVar207._8_4_);
  fVar159 = (float)(-(uint)(param_9 <= fVar181) & auVar207._12_4_);
  auVar147._0_4_ = param_8 * (float)local_7c8._0_4_ * param_8;
  auVar147._4_4_ = param_8 * (float)local_7c8._4_4_ * param_8;
  auVar147._8_4_ = param_8 * fStack_7c0 * param_8;
  auVar147._12_4_ = param_8 * fStack_7bc * param_8;
  auVar136 = divps(auVar22,auVar147);
  fVar158 = local_408 + local_438;
  fVar180 = fStack_404 + fStack_434;
  fVar193 = fStack_400 + fStack_430;
  fVar196 = fStack_3fc + fStack_42c;
  fVar206 = local_3f8 + local_428;
  fVar173 = fStack_3f4 + fStack_424;
  fVar213 = fStack_3f0 + fStack_420;
  fVar214 = fStack_3ec + fStack_41c;
  fVar194 = local_3e8 + local_418;
  fVar204 = fStack_3e4 + fStack_414;
  fVar197 = fStack_3e0 + fStack_410;
  fVar161 = fStack_3dc + fStack_40c;
  auVar207 = divps(_local_7c8,_local_738);
  auVar207 = sqrtps(auVar207,auVar207);
  fVar215 = auVar136._0_4_;
  fVar217 = auVar136._4_4_;
  fVar220 = auVar136._8_4_;
  fVar179 = auVar136._12_4_;
  fVar174 = auVar207._0_4_ * (float)local_818 * fVar215 * param_8;
  fVar181 = auVar207._4_4_ * local_818._4_4_ * fVar217 * param_8;
  fVar192 = auVar207._8_4_ * fStack_810 * fVar220 * param_8;
  fVar198 = auVar207._12_4_ * fStack_80c * fVar179 * param_8;
  auVar23._4_4_ = _UNK_15076b1f4;
  auVar23._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar23._8_4_ = _UNK_15076b1f8;
  auVar23._12_4_ = _UNK_15076b1fc;
  auVar259._0_4_ =
       ((local_418 * local_418 + local_428 * local_428 + local_438 * local_438) * local_828 +
       (local_3e8 * local_3e8 + local_3f8 * local_3f8 + local_408 * local_408) * local_7e8 +
       (fVar194 * fVar194 + fVar206 * fVar206 + fVar158 * fVar158) * local_7a8) *
       (fVar174 + ___xmm_3f8000003f8000003f8000003f800000) + fVar215;
  auVar259._4_4_ =
       ((fStack_414 * fStack_414 + fStack_424 * fStack_424 + fStack_434 * fStack_434) * fStack_824 +
       (fStack_3e4 * fStack_3e4 + fStack_3f4 * fStack_3f4 + fStack_404 * fStack_404) * fStack_7e4 +
       (fVar204 * fVar204 + fVar173 * fVar173 + fVar180 * fVar180) * fStack_7a4) *
       (fVar181 + _UNK_15076b1f4) + fVar217;
  auVar259._8_4_ =
       ((fStack_410 * fStack_410 + fStack_420 * fStack_420 + fStack_430 * fStack_430) * fStack_820 +
       (fStack_3e0 * fStack_3e0 + fStack_3f0 * fStack_3f0 + fStack_400 * fStack_400) * fStack_7e0 +
       (fVar197 * fVar197 + fVar213 * fVar213 + fVar193 * fVar193) * fStack_7a0) *
       (fVar192 + _UNK_15076b1f8) + fVar220;
  auVar259._12_4_ =
       ((fStack_40c * fStack_40c + fStack_41c * fStack_41c + fStack_42c * fStack_42c) * fStack_81c +
       (fStack_3dc * fStack_3dc + fStack_3ec * fStack_3ec + fStack_3fc * fStack_3fc) * fStack_7dc +
       (fVar161 * fVar161 + fVar214 * fVar214 + fVar196 * fVar196) * fStack_79c) *
       (fVar198 + _UNK_15076b1fc) + fVar179;
  auVar148._0_4_ =
       (local_1d8 - fVar215 * (float)local_5e8._0_4_) +
       ((fVar100 * local_418 + fVar94 * local_428 + fVar85 * local_438 +
        fVar132 * local_3e8 + fVar56 * local_3f8 + fVar203 * local_408) -
       (fVar199 * fVar194 + fVar105 * fVar206 + fVar103 * fVar158)) * fVar174;
  auVar148._4_4_ =
       (fStack_1d4 - fVar217 * (float)local_5e8._4_4_) +
       ((fVar101 * fStack_414 + fVar95 * fStack_424 + fVar86 * fStack_434 +
        fVar156 * fStack_3e4 + fVar82 * fStack_3f4 + fVar58 * fStack_404) -
       (fVar57 * fVar204 + fVar109 * fVar173 + fVar108 * fVar180)) * fVar181;
  auVar148._8_4_ =
       (fStack_1d0 - fVar220 * fStack_5e0) +
       ((fVar102 * fStack_410 + fVar231 * fStack_420 + fVar92 * fStack_430 +
        fVar273 * fStack_3e0 + fVar83 * fStack_3f0 + fVar89 * fStack_400) -
       (fVar87 * fVar197 + fVar53 * fVar213 + fVar52 * fVar193)) * fVar192;
  auVar148._12_4_ =
       (fStack_1cc - fVar179 * fStack_5dc) +
       ((fVar110 * fStack_40c + fVar99 * fStack_41c + fVar93 * fStack_42c +
        fVar157 * fStack_3dc + fVar84 * fStack_3ec + fVar97 * fStack_3fc) -
       (fVar96 * fVar161 + fVar55 * fVar214 + fVar54 * fVar196)) * fVar198;
  auVar207 = divps(auVar148,auVar259);
  fVar158 = (float)(-(uint)(param_9 <= (float)local_7c8._0_4_) & auVar207._0_4_);
  fVar174 = (float)(-(uint)(param_9 <= (float)local_7c8._4_4_) & auVar207._4_4_);
  fVar180 = (float)(-(uint)(param_9 <= fStack_7c0) & auVar207._8_4_);
  fVar181 = (float)(-(uint)(param_9 <= fStack_7bc) & auVar207._12_4_);
  auVar207 = divps(_local_798,_local_738);
  auVar136 = sqrtps(auVar259,auVar207);
  auVar149._0_4_ = param_8 * (float)local_798._0_4_ * param_8;
  auVar149._4_4_ = param_8 * (float)local_798._4_4_ * param_8;
  auVar149._8_4_ = param_8 * fStack_790 * param_8;
  auVar149._12_4_ = param_8 * fStack_78c * param_8;
  auVar207 = divps(auVar23,auVar149);
  fVar215 = auVar207._0_4_;
  fVar217 = auVar207._4_4_;
  fVar220 = auVar207._8_4_;
  fVar179 = auVar207._12_4_;
  fVar256 = auVar136._0_4_ * (float)local_818 * fVar215 * param_8;
  fVar260 = auVar136._4_4_ * local_818._4_4_ * fVar217 * param_8;
  fVar262 = auVar136._8_4_ * fStack_810 * fVar220 * param_8;
  param_8 = auVar136._12_4_ * fStack_80c * fVar179 * param_8;
  fVar193 = local_188 + local_1b8;
  fVar192 = fStack_184 + fStack_1b4;
  fVar196 = fStack_180 + fStack_1b0;
  fVar198 = fStack_17c + fStack_1ac;
  fVar206 = local_178 + local_1a8;
  fVar173 = fStack_174 + fStack_1a4;
  fVar213 = fStack_170 + fStack_1a0;
  fVar214 = fStack_16c + fStack_19c;
  fVar194 = local_168 + local_198;
  fVar204 = fStack_164 + fStack_194;
  fVar197 = fStack_160 + fStack_190;
  fVar161 = fStack_15c + fStack_18c;
  auVar188._0_4_ =
       ((local_198 * local_198 + local_1a8 * local_1a8 + local_1b8 * local_1b8) * local_828 +
       (local_168 * local_168 + local_178 * local_178 + local_188 * local_188) * local_7e8 +
       (fVar194 * fVar194 + fVar206 * fVar206 + fVar193 * fVar193) * local_7a8) *
       (fVar256 + ___xmm_3f8000003f8000003f8000003f800000) + fVar215;
  auVar188._4_4_ =
       ((fStack_194 * fStack_194 + fStack_1a4 * fStack_1a4 + fStack_1b4 * fStack_1b4) * fStack_824 +
       (fStack_164 * fStack_164 + fStack_174 * fStack_174 + fStack_184 * fStack_184) * fStack_7e4 +
       (fVar204 * fVar204 + fVar173 * fVar173 + fVar192 * fVar192) * fStack_7a4) *
       (fVar260 + _UNK_15076b1f4) + fVar217;
  auVar188._8_4_ =
       ((fStack_190 * fStack_190 + fStack_1a0 * fStack_1a0 + fStack_1b0 * fStack_1b0) * fStack_820 +
       (fStack_160 * fStack_160 + fStack_170 * fStack_170 + fStack_180 * fStack_180) * fStack_7e0 +
       (fVar197 * fVar197 + fVar213 * fVar213 + fVar196 * fVar196) * fStack_7a0) *
       (fVar262 + _UNK_15076b1f8) + fVar220;
  auVar188._12_4_ =
       ((fStack_18c * fStack_18c + fStack_19c * fStack_19c + fStack_1ac * fStack_1ac) * fStack_81c +
       (fStack_15c * fStack_15c + fStack_16c * fStack_16c + fStack_17c * fStack_17c) * fStack_7dc +
       (fVar161 * fVar161 + fVar214 * fVar214 + fVar198 * fVar198) * fStack_79c) *
       (param_8 + _UNK_15076b1fc) + fVar179;
  auVar150._0_4_ =
       (local_1e8 - fVar215 * (float)local_5f8._0_4_) +
       ((fVar100 * local_198 + fVar94 * local_1a8 + fVar85 * local_1b8 +
        fVar132 * local_168 + fVar56 * local_178 + fVar203 * local_188) -
       (fVar199 * fVar194 + fVar105 * fVar206 + fVar103 * fVar193)) * fVar256;
  auVar150._4_4_ =
       (fStack_1e4 - fVar217 * (float)local_5f8._4_4_) +
       ((fVar101 * fStack_194 + fVar95 * fStack_1a4 + fVar86 * fStack_1b4 +
        fVar156 * fStack_164 + fVar82 * fStack_174 + fVar58 * fStack_184) -
       (fVar57 * fVar204 + fVar109 * fVar173 + fVar108 * fVar192)) * fVar260;
  auVar150._8_4_ =
       (fStack_1e0 - fVar220 * fStack_5f0) +
       ((fVar102 * fStack_190 + fVar231 * fStack_1a0 + fVar92 * fStack_1b0 +
        fVar273 * fStack_160 + fVar83 * fStack_170 + fVar89 * fStack_180) -
       (fVar87 * fVar197 + fVar53 * fVar213 + fVar52 * fVar196)) * fVar262;
  auVar150._12_4_ =
       (fStack_1dc - fVar179 * fStack_5ec) +
       ((fVar110 * fStack_18c + fVar99 * fStack_19c + fVar93 * fStack_1ac +
        fVar157 * fStack_15c + fVar84 * fStack_16c + fVar97 * fStack_17c) -
       (fVar96 * fVar161 + fVar55 * fVar214 + fVar54 * fVar198)) * param_8;
  auVar207 = divps(auVar150,auVar188);
  fVar199 = (float)(-(uint)(param_9 <= (float)local_798._0_4_) & auVar207._0_4_);
  fVar203 = (float)(-(uint)(param_9 <= (float)local_798._4_4_) & auVar207._4_4_);
  fVar57 = (float)(-(uint)(param_9 <= fStack_790) & auVar207._8_4_);
  fVar58 = (float)(-(uint)(param_9 <= fStack_78c) & auVar207._12_4_);
  auVar151._0_4_ = (float)local_7d8._0_4_ + fVar182;
  auVar151._4_4_ = (float)local_7d8._4_4_ + fVar183;
  auVar151._8_4_ = fStack_7d0 + fVar191;
  auVar151._12_4_ = fStack_7cc + fVar159;
  auVar218._0_4_ = (float)local_5e8._0_4_ + fVar158;
  auVar218._4_4_ = (float)local_5e8._4_4_ + fVar174;
  auVar218._8_4_ = fStack_5e0 + fVar180;
  auVar218._12_4_ = fStack_5dc + fVar181;
  auVar211._0_4_ = (float)local_5f8._0_4_ + fVar199;
  auVar211._4_4_ = (float)local_5f8._4_4_ + fVar203;
  auVar211._8_4_ = fStack_5f0 + fVar57;
  auVar211._12_4_ = fStack_5ec + fVar58;
  if ((bVar43 & 0xf) == 0) {
    auVar226._4_4_ = auVar151._4_4_;
    auVar226._0_4_ = auVar151._0_4_;
    auVar226._8_4_ = auVar151._8_4_;
    auVar226._12_4_ = auVar151._12_4_;
    auVar207 = insertps(auVar151,auVar218,0x30);
    auVar170._4_4_ = auVar218._8_4_;
    auVar170._0_4_ = auVar218._4_4_;
    auVar170._8_4_ = auVar211._0_4_;
    auVar170._12_4_ = auVar211._4_4_;
    auVar207 = insertps(auVar207,auVar211,0x20);
    *(int *)*pauVar2 = auVar207._0_4_;
    *(int *)(*pauVar2 + 4) = auVar207._12_4_;
    *(int *)(*pauVar2 + 8) = auVar207._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar207._4_4_;
    auVar207 = blendps(auVar170,auVar226,4);
    *(int *)pauVar2[1] = auVar207._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar207._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar207._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar207._4_4_;
    *(float *)pauVar2[2] = auVar211._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar151._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar218._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar211._12_4_;
  }
  else {
    if ((bVar45 & 1) != 0) {
      *(float *)*pauVar2 = auVar151._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar151,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar19;
    }
    if ((bVar45 & 4) != 0) {
      uVar19 = extractps(auVar151,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar19;
    }
    if ((char)bVar45 < '\0') {
      uVar19 = extractps(auVar151,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar19;
    }
    if ((bVar45 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar218._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar218,1);
      *(undefined8 *)pauVar2[1] = uVar19;
    }
    if ((bVar45 & 4) != 0) {
      uVar19 = extractps(auVar218,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar19;
    }
    if ((char)bVar45 < '\0') {
      uVar19 = extractps(auVar218,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar19;
    }
    if ((bVar45 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar211._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar211,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar19;
    }
    if ((bVar45 & 4) != 0) {
      uVar19 = extractps(auVar211,2);
      *(undefined8 *)pauVar2[2] = uVar19;
    }
    if ((char)bVar45 < '\0') {
      uVar19 = extractps(auVar211,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar19;
    }
  }
  fVar87 = local_188 * fVar199 + local_408 * fVar158 + local_3a8 * fVar182;
  fVar89 = fStack_184 * fVar203 + fStack_404 * fVar174 + fStack_3a4 * fVar183;
  fVar96 = fStack_180 * fVar57 + fStack_400 * fVar180 + fStack_3a0 * fVar191;
  fVar97 = fStack_17c * fVar58 + fStack_3fc * fVar181 + fStack_39c * fVar159;
  fVar103 = local_178 * fVar199 + local_3f8 * fVar158 + local_398 * fVar182;
  fVar105 = fStack_174 * fVar203 + fStack_3f4 * fVar174 + fStack_394 * fVar183;
  fVar108 = fStack_170 * fVar57 + fStack_3f0 * fVar180 + fStack_390 * fVar191;
  fVar109 = fStack_16c * fVar58 + fStack_3ec * fVar181 + fStack_38c * fVar159;
  fVar52 = local_168 * fVar199 + local_3e8 * fVar158 + local_388 * fVar182;
  fVar53 = fStack_164 * fVar203 + fStack_3e4 * fVar174 + fStack_384 * fVar183;
  fVar54 = fStack_160 * fVar57 + fStack_3e0 * fVar180 + fStack_380 * fVar191;
  fVar55 = fStack_15c * fVar58 + fStack_3dc * fVar181 + fStack_37c * fVar159;
  fVar85 = local_1b8 * fVar199 + local_438 * fVar158 + local_3d8 * fVar182;
  fVar86 = fStack_1b4 * fVar203 + fStack_434 * fVar174 + fStack_3d4 * fVar183;
  fVar92 = fStack_1b0 * fVar57 + fStack_430 * fVar180 + fStack_3d0 * fVar191;
  fVar93 = fStack_1ac * fVar58 + fStack_42c * fVar181 + fStack_3cc * fVar159;
  fVar56 = local_1a8 * fVar199 + local_428 * fVar158 + local_3c8 * fVar182;
  fVar82 = fStack_1a4 * fVar203 + fStack_424 * fVar174 + fStack_3c4 * fVar183;
  fVar83 = fStack_1a0 * fVar57 + fStack_420 * fVar180 + fStack_3c0 * fVar191;
  fVar84 = fStack_19c * fVar58 + fStack_41c * fVar181 + fStack_3bc * fVar159;
  fVar199 = local_198 * fVar199 + fVar158 * local_418 + fVar182 * local_3b8;
  fVar203 = fStack_194 * fVar203 + fVar174 * fStack_414 + fVar183 * fStack_3b4;
  fVar57 = fStack_190 * fVar57 + fVar180 * fStack_410 + fVar191 * fStack_3b0;
  fVar58 = fStack_18c * fVar58 + fVar181 * fStack_40c + fVar159 * fStack_3ac;
  auVar124._0_4_ = -(uint)(0.0 < local_7a8) & local_5c8._0_4_;
  auVar124._4_4_ = -(uint)(0.0 < fStack_7a4) & local_5c8._4_4_;
  auVar124._8_4_ = -(uint)(0.0 < fStack_7a0) & (uint)fStack_5c0;
  auVar124._12_4_ = -(uint)(0.0 < fStack_79c) & (uint)fStack_5bc;
  iVar88 = movmskps((int)pauVar2,auVar124);
  iVar104 = 0;
  if (iVar88 != 0) {
    bVar45 = (char)((char)iVar88 << 4) >> 4;
    auVar152._0_4_ = (fVar87 + fVar85) * local_7a8 + local_628;
    auVar152._4_4_ = (fVar89 + fVar86) * fStack_7a4 + fStack_624;
    auVar152._8_4_ = (fVar96 + fVar92) * fStack_7a0 + fStack_620;
    auVar152._12_4_ = (fVar97 + fVar93) * fStack_79c + fStack_61c;
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + auVar165._0_4_) = auVar152._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar152,1);
      *(undefined8 *)(param_1 + auVar165._4_4_) = uVar19;
    }
    if ((bVar45 & 4) == 0) {
      if (-1 < (char)bVar45) goto LAB_1409cc43c;
LAB_1409cc73e:
      uVar19 = extractps(auVar152,3);
      *(undefined8 *)(param_1 + auVar165._12_4_) = uVar19;
      auVar125._0_4_ = (fVar103 + fVar56) * local_7a8 + local_618;
      auVar125._4_4_ = (fVar105 + fVar82) * fStack_7a4 + fStack_614;
      auVar125._8_4_ = (fVar108 + fVar83) * fStack_7a0 + fStack_610;
      auVar125._12_4_ = (fVar109 + fVar84) * fStack_79c + fStack_60c;
      if ((bVar45 & 1) != 0) goto LAB_1409cc761;
LAB_1409cc44d:
      if ((bVar45 & 2) == 0) goto LAB_1409cc456;
LAB_1409cc774:
      uVar19 = extractps(auVar125,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar165._4_4_) = uVar19;
      if ((bVar45 & 4) != 0) goto LAB_1409cc790;
LAB_1409cc466:
      fVar94 = (fVar52 + fVar199) * local_7a8;
      fStack_7a4 = (fVar53 + fVar203) * fStack_7a4;
      fStack_7a0 = (fVar54 + fVar57) * fStack_7a0;
      fStack_79c = (fVar55 + fVar58) * fStack_79c;
      if (-1 < (char)bVar45) goto LAB_1409cc472;
LAB_1409cc7a8:
      uVar19 = extractps(auVar125,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar165._12_4_) = uVar19;
      auVar153._0_4_ = fVar94 + local_608;
      auVar153._4_4_ = fStack_7a4 + fStack_604;
      auVar153._8_4_ = fStack_7a0 + fStack_600;
      auVar153._12_4_ = fStack_79c + fStack_5fc;
    }
    else {
      uVar19 = extractps(auVar152,2);
      *(undefined8 *)(param_1 + auVar165._8_4_) = uVar19;
      if ((char)bVar45 < '\0') goto LAB_1409cc73e;
LAB_1409cc43c:
      auVar125._0_4_ = (fVar103 + fVar56) * local_7a8 + local_618;
      auVar125._4_4_ = (fVar105 + fVar82) * fStack_7a4 + fStack_614;
      auVar125._8_4_ = (fVar108 + fVar83) * fStack_7a0 + fStack_610;
      auVar125._12_4_ = (fVar109 + fVar84) * fStack_79c + fStack_60c;
      if ((bVar45 & 1) == 0) goto LAB_1409cc44d;
LAB_1409cc761:
      *(int *)(param_1 + 4 + (longlong)auVar165._0_4_) = auVar125._0_4_;
      if ((bVar45 & 2) != 0) goto LAB_1409cc774;
LAB_1409cc456:
      if ((bVar45 & 4) == 0) goto LAB_1409cc466;
LAB_1409cc790:
      uVar19 = extractps(auVar125,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar165._8_4_) = uVar19;
      fVar94 = (fVar52 + fVar199) * local_7a8;
      fStack_7a4 = (fVar53 + fVar203) * fStack_7a4;
      fStack_7a0 = (fVar54 + fVar57) * fStack_7a0;
      fStack_79c = (fVar55 + fVar58) * fStack_79c;
      if ((char)bVar45 < '\0') goto LAB_1409cc7a8;
LAB_1409cc472:
      auVar153._0_4_ = fVar94 + local_608;
      auVar153._4_4_ = fStack_7a4 + fStack_604;
      auVar153._8_4_ = fStack_7a0 + fStack_600;
      auVar153._12_4_ = fStack_79c + fStack_5fc;
    }
    if ((bVar45 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)auVar165._0_4_) = auVar153._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar153,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar165._4_4_) = uVar19;
    }
    if ((bVar45 & 4) != 0) {
      uVar19 = extractps(auVar153,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar165._8_4_) = uVar19;
    }
    if ((char)bVar45 < '\0') {
      uVar19 = extractps(auVar153,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar165._12_4_) = uVar19;
    }
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar165._0_4_) = local_7a8;
    }
    if ((bVar45 & 2) != 0) {
      uVar19 = extractps(auVar134,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar165._4_4_) = uVar19;
    }
    if ((bVar45 & 4) != 0) {
      uVar19 = extractps(auVar134,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar165._8_4_) = uVar19;
    }
    iVar104 = CONCAT31((int3)((uint)iVar88 >> 8),bVar45);
    if ((char)bVar45 < '\0') {
      uVar19 = extractps(auVar134,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar165._12_4_) = uVar19;
      iVar104 = auVar165._12_4_;
    }
  }
  auVar76._0_4_ = -(uint)(0.0 < local_7e8) & local_5c8._0_4_;
  auVar76._4_4_ = -(uint)(0.0 < fStack_7e4) & local_5c8._4_4_;
  auVar76._8_4_ = -(uint)(0.0 < fStack_7e0) & (uint)fStack_5c0;
  auVar76._12_4_ = -(uint)(0.0 < fStack_7dc) & (uint)fStack_5bc;
  iVar88 = movmskps(iVar104,auVar76);
  iVar104 = 0;
  if (iVar88 == 0) goto LAB_1409cc5b7;
  bVar45 = (char)((char)iVar88 << 4) >> 4;
  auVar77._0_4_ = local_658 - fVar87 * local_7e8;
  auVar77._4_4_ = fStack_654 - fVar89 * fStack_7e4;
  auVar77._8_4_ = fStack_650 - fVar96 * fStack_7e0;
  auVar77._12_4_ = fStack_64c - fVar97 * fStack_7dc;
  if ((bVar45 & 1) == 0) {
    if ((bVar45 & 2) == 0) goto LAB_1409cc518;
LAB_1409cc890:
    uVar19 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + (int)local_528._4_4_) = uVar19;
    if ((bVar45 & 4) != 0) goto LAB_1409cc8ab;
LAB_1409cc528:
    if (-1 < (char)bVar45) goto LAB_1409cc53b;
LAB_1409cc8c9:
    uVar19 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + (int)local_528._12_4_) = uVar19;
    auVar126._0_4_ = local_648 - fVar103 * local_7e8;
    auVar126._4_4_ = fStack_644 - fVar105 * fStack_7e4;
    auVar126._8_4_ = fStack_640 - fVar108 * fStack_7e0;
    auVar126._12_4_ = fStack_63c - fVar109 * fStack_7dc;
    if ((bVar45 & 1) != 0) goto LAB_1409cc8e7;
LAB_1409cc547:
    if ((bVar45 & 2) == 0) goto LAB_1409cc550;
LAB_1409cc8fa:
    uVar19 = extractps(auVar126,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_528._4_4_) = uVar19;
    if ((bVar45 & 4) != 0) goto LAB_1409cc90f;
LAB_1409cc559:
    if (-1 < (char)bVar45) goto LAB_1409cc56d;
LAB_1409cc92f:
    uVar19 = extractps(auVar126,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_528._12_4_) = uVar19;
    auVar78._0_4_ = local_638 - fVar52 * local_7e8;
    auVar78._4_4_ = fStack_634 - fVar53 * fStack_7e4;
    auVar78._8_4_ = fStack_630 - fVar54 * fStack_7e0;
    auVar78._12_4_ = fStack_62c - fVar55 * fStack_7dc;
  }
  else {
    *(float *)(param_1 + (int)local_528._0_4_) = auVar77._0_4_;
    if ((bVar45 & 2) != 0) goto LAB_1409cc890;
LAB_1409cc518:
    if ((bVar45 & 4) == 0) goto LAB_1409cc528;
LAB_1409cc8ab:
    uVar19 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + (int)local_528._8_4_) = uVar19;
    if ((char)bVar45 < '\0') goto LAB_1409cc8c9;
LAB_1409cc53b:
    auVar126._0_4_ = local_648 - fVar103 * local_7e8;
    auVar126._4_4_ = fStack_644 - fVar105 * fStack_7e4;
    auVar126._8_4_ = fStack_640 - fVar108 * fStack_7e0;
    auVar126._12_4_ = fStack_63c - fVar109 * fStack_7dc;
    if ((bVar45 & 1) == 0) goto LAB_1409cc547;
LAB_1409cc8e7:
    *(int *)(param_1 + 4 + (longlong)(int)local_528._0_4_) = auVar126._0_4_;
    if ((bVar45 & 2) != 0) goto LAB_1409cc8fa;
LAB_1409cc550:
    if ((bVar45 & 4) == 0) goto LAB_1409cc559;
LAB_1409cc90f:
    uVar19 = extractps(auVar126,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_528._8_4_) = uVar19;
    if ((char)bVar45 < '\0') goto LAB_1409cc92f;
LAB_1409cc56d:
    auVar78._0_4_ = local_638 - fVar52 * local_7e8;
    auVar78._4_4_ = fStack_634 - fVar53 * fStack_7e4;
    auVar78._8_4_ = fStack_630 - fVar54 * fStack_7e0;
    auVar78._12_4_ = fStack_62c - fVar55 * fStack_7dc;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_528._0_4_) = auVar78._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar78,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_528._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar78,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_528._8_4_) = uVar19;
  }
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar78,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_528._12_4_) = uVar19;
  }
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_528._0_4_) = local_7e8;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar60,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_528._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar60,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_528._8_4_) = uVar19;
  }
  iVar104 = CONCAT31((int3)((uint)iVar88 >> 8),bVar45);
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar60,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_528._12_4_) = uVar19;
    iVar104 = local_528._12_4_;
  }
LAB_1409cc5b7:
  auVar79._0_4_ = -(uint)(0.0 < local_828) & local_5c8._0_4_;
  auVar79._4_4_ = -(uint)(0.0 < fStack_824) & local_5c8._4_4_;
  auVar79._8_4_ = -(uint)(0.0 < fStack_820) & (uint)fStack_5c0;
  auVar79._12_4_ = -(uint)(0.0 < fStack_81c) & (uint)fStack_5bc;
  iVar104 = movmskps(iVar104,auVar79);
  if (iVar104 == 0) {
    return;
  }
  bVar45 = (char)((char)iVar104 << 4) >> 4;
  auVar80._0_4_ = local_688 - fVar85 * local_828;
  auVar80._4_4_ = fStack_684 - fVar86 * fStack_824;
  auVar80._8_4_ = fStack_680 - fVar92 * fStack_820;
  auVar80._12_4_ = fStack_67c - fVar93 * fStack_81c;
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + (int)local_518._0_4_) = auVar80._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar80,1);
    *(undefined8 *)(param_1 + (int)local_518._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar80,2);
    *(undefined8 *)(param_1 + (int)local_518._8_4_) = uVar19;
  }
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar80,3);
    *(undefined8 *)(param_1 + (int)local_518._12_4_) = uVar19;
    auVar127._0_4_ = local_678 - fVar56 * local_828;
    auVar127._4_4_ = fStack_674 - fVar82 * fStack_824;
    auVar127._8_4_ = fStack_670 - fVar83 * fStack_820;
    auVar127._12_4_ = fStack_66c - fVar84 * fStack_81c;
  }
  else {
    auVar127._0_4_ = local_678 - fVar56 * local_828;
    auVar127._4_4_ = fStack_674 - fVar82 * fStack_824;
    auVar127._8_4_ = fStack_670 - fVar83 * fStack_820;
    auVar127._12_4_ = fStack_66c - fVar84 * fStack_81c;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_518._0_4_) = auVar127._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar127,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_518._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar127,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_518._8_4_) = uVar19;
  }
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar127,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)local_518._12_4_) = uVar19;
    auVar81._0_4_ = local_668 - fVar199 * local_828;
    auVar81._4_4_ = fStack_664 - fVar203 * fStack_824;
    auVar81._8_4_ = fStack_660 - fVar57 * fStack_820;
    auVar81._12_4_ = fStack_65c - fVar58 * fStack_81c;
  }
  else {
    auVar81._0_4_ = local_668 - fVar199 * local_828;
    auVar81._4_4_ = fStack_664 - fVar203 * fStack_824;
    auVar81._8_4_ = fStack_660 - fVar57 * fStack_820;
    auVar81._12_4_ = fStack_65c - fVar58 * fStack_81c;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_518._0_4_) = auVar81._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar81,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_518._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar81,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_518._8_4_) = uVar19;
  }
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar81,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)local_518._12_4_) = uVar19;
  }
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_518._0_4_) = local_828;
  }
  if ((bVar45 & 2) != 0) {
    uVar19 = extractps(auVar133,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_518._4_4_) = uVar19;
  }
  if ((bVar45 & 4) != 0) {
    uVar19 = extractps(auVar133,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_518._8_4_) = uVar19;
  }
  if ((char)bVar45 < '\0') {
    uVar19 = extractps(auVar133,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)local_518._12_4_) = uVar19;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// NormalizeRotations___un_3C_s_5B_unFTransform_5D__3E_Cuni_sse4 @ 140c76cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NormalizeRotations___un_3C_s_5B_unFTransform_5D__3E_Cuni_sse4
               (longlong param_1,uint param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  uint uVar28;
  longlong lVar29;
  double *pdVar30;
  int iVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  ulonglong uVar44;
  double dVar46;
  undefined1 auVar45 [16];
  ulonglong uVar47;
  double dVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
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
  
  dVar24 = _UNK_150aa88b8;
  dVar23 = ___xmm_3e45798ee2308c3a3e45798ee2308c3a;
  auVar27 = ___xmm_3ff00000000000003ff0000000000000;
  uVar26 = _UNK_15061cbc8;
  uVar25 = ___xmm_3ff00000000000000000000000000000;
  iVar31 = movmskps((int)param_3,*param_3);
  uVar28 = param_2 & 0xfffffffc;
  if (iVar31 == 0xf) {
    if (0 < (int)uVar28) {
      pdVar30 = (double *)(param_1 + 0x138);
      uVar32 = 0;
      do {
        dVar42 = pdVar30[-0x27];
        dVar9 = pdVar30[-0x26];
        dVar10 = pdVar30[-0x25];
        dVar11 = pdVar30[-0x24];
        dVar12 = pdVar30[-0x1b];
        dVar13 = pdVar30[-0x1a];
        dVar14 = pdVar30[-0x19];
        dVar15 = pdVar30[-0x18];
        dVar16 = pdVar30[-0xf];
        dVar48 = pdVar30[-0xe];
        dVar17 = pdVar30[-0xd];
        dVar18 = pdVar30[-0xc];
        dVar19 = pdVar30[-3];
        dVar20 = pdVar30[-2];
        dVar21 = pdVar30[-1];
        dVar22 = *pdVar30;
        dVar43 = dVar42 * dVar42 + dVar10 * dVar10;
        dVar46 = dVar9 * dVar9 + dVar11 * dVar11;
        auVar62._0_8_ = dVar46 + dVar43;
        auVar62._8_8_ = dVar43 + dVar46;
        auVar38._0_4_ = -(uint)(dVar23 <= auVar62._0_8_);
        auVar38._8_4_ = -(uint)(dVar24 <= auVar62._8_8_);
        auVar38._4_4_ = auVar38._0_4_;
        auVar38._12_4_ = auVar38._8_4_;
        auVar34._8_4_ = 0xffffffff;
        auVar34._0_8_ = 0xffffffffffffffff;
        auVar34._12_4_ = 0xffffffff;
        auVar45 = blendvps(ZEXT816(0),auVar34,auVar38);
        auVar34 = sqrtpd(auVar38,auVar62);
        auVar60 = divpd(auVar27,auVar34);
        uVar44 = auVar45._0_8_;
        uVar47 = auVar45._8_8_;
        dVar43 = dVar12 * dVar12 + dVar14 * dVar14;
        dVar46 = dVar13 * dVar13 + dVar15 * dVar15;
        auVar63._0_8_ = dVar46 + dVar43;
        auVar63._8_8_ = dVar43 + dVar46;
        auVar39._0_4_ = -(uint)(dVar23 <= auVar63._0_8_);
        auVar39._8_4_ = -(uint)(dVar24 <= auVar63._8_8_);
        auVar39._4_4_ = auVar39._0_4_;
        auVar39._12_4_ = auVar39._8_4_;
        auVar45._8_4_ = 0xffffffff;
        auVar45._0_8_ = 0xffffffffffffffff;
        auVar45._12_4_ = 0xffffffff;
        auVar45 = blendvps(ZEXT816(0),auVar45,auVar39);
        auVar34 = sqrtpd(auVar39,auVar63);
        auVar64 = divpd(auVar27,auVar34);
        uVar51 = auVar45._0_8_;
        uVar52 = auVar45._8_8_;
        dVar43 = dVar16 * dVar16 + dVar17 * dVar17;
        dVar46 = dVar48 * dVar48 + dVar18 * dVar18;
        auVar65._0_8_ = dVar46 + dVar43;
        auVar65._8_8_ = dVar43 + dVar46;
        auVar40._0_4_ = -(uint)(dVar23 <= auVar65._0_8_);
        auVar40._8_4_ = -(uint)(dVar24 <= auVar65._8_8_);
        auVar40._4_4_ = auVar40._0_4_;
        auVar40._12_4_ = auVar40._8_4_;
        auVar56._8_4_ = 0xffffffff;
        auVar56._0_8_ = 0xffffffffffffffff;
        auVar56._12_4_ = 0xffffffff;
        auVar45 = blendvps(ZEXT816(0),auVar56,auVar40);
        auVar34 = sqrtpd(auVar40,auVar65);
        auVar56 = divpd(auVar27,auVar34);
        uVar53 = auVar45._0_8_;
        uVar54 = auVar45._8_8_;
        uVar6 = (ulonglong)(dVar48 * auVar56._8_8_) & uVar54;
        dVar48 = dVar19 * dVar19 + dVar21 * dVar21;
        dVar43 = dVar20 * dVar20 + dVar22 * dVar22;
        auVar66._0_8_ = dVar43 + dVar48;
        auVar66._8_8_ = dVar48 + dVar43;
        auVar41._0_4_ = -(uint)(dVar23 <= auVar66._0_8_);
        auVar41._8_4_ = -(uint)(dVar24 <= auVar66._8_8_);
        auVar41._4_4_ = auVar41._0_4_;
        auVar41._12_4_ = auVar41._8_4_;
        auVar58._8_4_ = 0xffffffff;
        auVar58._0_8_ = 0xffffffffffffffff;
        auVar58._12_4_ = 0xffffffff;
        auVar45 = blendvps(ZEXT816(0),auVar58,auVar41);
        auVar34 = sqrtpd(auVar41,auVar66);
        auVar34 = divpd(auVar27,auVar34);
        uVar49 = auVar45._0_8_;
        uVar50 = auVar45._8_8_;
        uVar8 = (ulonglong)(dVar20 * auVar34._8_8_) & uVar50;
        pdVar30[-0x27] = (double)((ulonglong)(dVar42 * auVar60._0_8_) & uVar44);
        pdVar30[-0x26] = (double)((ulonglong)(dVar9 * auVar60._8_8_) & uVar47);
        pdVar30[-0x25] = (double)(~uVar44 & uVar25 | (ulonglong)(auVar60._0_8_ * dVar10) & uVar44);
        pdVar30[-0x24] = (double)(~uVar47 & uVar26 | (ulonglong)(auVar60._8_8_ * dVar11) & uVar47);
        pdVar30[-0x1b] = (double)((ulonglong)(dVar12 * auVar64._0_8_) & uVar51);
        pdVar30[-0x1a] = (double)((ulonglong)(dVar13 * auVar64._8_8_) & uVar52);
        pdVar30[-0x19] = (double)(~uVar51 & uVar25 | (ulonglong)(auVar64._0_8_ * dVar14) & uVar51);
        pdVar30[-0x18] = (double)(~uVar52 & uVar26 | (ulonglong)(auVar64._8_8_ * dVar15) & uVar52);
        auVar60._8_4_ = (int)uVar6;
        auVar60._0_8_ = (ulonglong)(dVar16 * auVar56._0_8_) & uVar53;
        auVar60._12_4_ = (int)(uVar6 >> 0x20);
        *(undefined1 (*) [16])(pdVar30 + -0xf) = auVar60;
        pdVar30[-0xd] = (double)(~uVar53 & uVar25 | (ulonglong)(auVar56._0_8_ * dVar17) & uVar53);
        pdVar30[-0xc] = (double)(~uVar54 & uVar26 | (ulonglong)(auVar56._8_8_ * dVar18) & uVar54);
        auVar64._8_4_ = (int)uVar8;
        auVar64._0_8_ = (ulonglong)(dVar19 * auVar34._0_8_) & uVar49;
        auVar64._12_4_ = (int)(uVar8 >> 0x20);
        *(undefined1 (*) [16])(pdVar30 + -3) = auVar64;
        pdVar30[-1] = (double)(~uVar49 & uVar25 | (ulonglong)(auVar34._0_8_ * dVar21) & uVar49);
        *pdVar30 = (double)(~uVar50 & uVar26 | (ulonglong)(auVar34._8_8_ * dVar22) & uVar50);
        uVar32 = uVar32 + 4;
        pdVar30 = pdVar30 + 0x30;
      } while (uVar32 < uVar28);
    }
    uVar32 = __real_ffffffffffffffff;
    uVar26 = _UNK_15061cbc8;
    uVar25 = ___xmm_3ff00000000000000000000000000000;
    dVar24 = __real_3e45798ee2308c3a;
    dVar23 = __real_3ff0000000000000;
    if ((int)uVar28 < (int)param_2) {
      pdVar30 = (double *)((longlong)(int)uVar28 * 0x60 + 0x18 + param_1);
      lVar29 = (longlong)(int)param_2 - (longlong)(int)uVar28;
      do {
        dVar9 = pdVar30[-3];
        dVar10 = pdVar30[-2];
        dVar11 = pdVar30[-1];
        dVar12 = *pdVar30;
        dVar42 = dVar10 * dVar10 + dVar12 * dVar12 + dVar9 * dVar9 + dVar11 * dVar11;
        uVar6 = ~-(ulonglong)(dVar42 < dVar24) & uVar32;
        dVar42 = dVar23 / SQRT(dVar42);
        pdVar30[-3] = (double)((ulonglong)(dVar9 * dVar42) & uVar6);
        pdVar30[-2] = (double)((ulonglong)(dVar10 * dVar42) & uVar6);
        pdVar30[-1] = (double)(~uVar6 & uVar25 | (ulonglong)(dVar11 * dVar42) & uVar6);
        *pdVar30 = (double)(~uVar6 & uVar26 | (ulonglong)(dVar12 * dVar42) & uVar6);
        pdVar30 = pdVar30 + 0xc;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
  }
  else {
    if (0 < (int)uVar28) {
      pdVar30 = (double *)(param_1 + 0x138);
      uVar32 = 0;
      do {
        dVar42 = pdVar30[-0x27];
        dVar9 = pdVar30[-0x26];
        dVar10 = pdVar30[-0x25];
        dVar11 = pdVar30[-0x24];
        dVar12 = pdVar30[-0x1b];
        dVar13 = pdVar30[-0x1a];
        dVar14 = pdVar30[-0x19];
        dVar15 = pdVar30[-0x18];
        dVar16 = pdVar30[-0xf];
        dVar48 = pdVar30[-0xe];
        dVar17 = pdVar30[-0xd];
        dVar18 = pdVar30[-0xc];
        dVar19 = pdVar30[-3];
        dVar20 = pdVar30[-2];
        dVar21 = pdVar30[-1];
        dVar22 = *pdVar30;
        dVar43 = dVar42 * dVar42 + dVar10 * dVar10;
        dVar46 = dVar9 * dVar9 + dVar11 * dVar11;
        auVar55._0_8_ = dVar46 + dVar43;
        auVar55._8_8_ = dVar43 + dVar46;
        auVar33._0_4_ = -(uint)(dVar23 <= auVar55._0_8_);
        auVar33._8_4_ = -(uint)(dVar24 <= auVar55._8_8_);
        auVar33._4_4_ = auVar33._0_4_;
        auVar33._12_4_ = auVar33._8_4_;
        auVar1._8_4_ = 0xffffffff;
        auVar1._0_8_ = 0xffffffffffffffff;
        auVar1._12_4_ = 0xffffffff;
        auVar45 = blendvps(ZEXT816(0),auVar1,auVar33);
        auVar34 = sqrtpd(auVar33,auVar55);
        auVar56 = divpd(auVar27,auVar34);
        uVar44 = auVar45._0_8_;
        uVar47 = auVar45._8_8_;
        dVar43 = dVar12 * dVar12 + dVar14 * dVar14;
        dVar46 = dVar13 * dVar13 + dVar15 * dVar15;
        auVar57._0_8_ = dVar46 + dVar43;
        auVar57._8_8_ = dVar43 + dVar46;
        auVar35._0_4_ = -(uint)(dVar23 <= auVar57._0_8_);
        auVar35._8_4_ = -(uint)(dVar24 <= auVar57._8_8_);
        auVar35._4_4_ = auVar35._0_4_;
        auVar35._12_4_ = auVar35._8_4_;
        auVar2._8_4_ = 0xffffffff;
        auVar2._0_8_ = 0xffffffffffffffff;
        auVar2._12_4_ = 0xffffffff;
        auVar45 = blendvps(ZEXT816(0),auVar2,auVar35);
        auVar34 = sqrtpd(auVar35,auVar57);
        auVar58 = divpd(auVar27,auVar34);
        uVar51 = auVar45._0_8_;
        uVar52 = auVar45._8_8_;
        dVar43 = dVar16 * dVar16 + dVar17 * dVar17;
        dVar46 = dVar48 * dVar48 + dVar18 * dVar18;
        auVar59._0_8_ = dVar46 + dVar43;
        auVar59._8_8_ = dVar43 + dVar46;
        auVar36._0_4_ = -(uint)(dVar23 <= auVar59._0_8_);
        auVar36._8_4_ = -(uint)(dVar24 <= auVar59._8_8_);
        auVar36._4_4_ = auVar36._0_4_;
        auVar36._12_4_ = auVar36._8_4_;
        auVar3._8_4_ = 0xffffffff;
        auVar3._0_8_ = 0xffffffffffffffff;
        auVar3._12_4_ = 0xffffffff;
        auVar45 = blendvps(ZEXT816(0),auVar3,auVar36);
        auVar34 = sqrtpd(auVar36,auVar59);
        auVar60 = divpd(auVar27,auVar34);
        uVar53 = auVar45._0_8_;
        uVar54 = auVar45._8_8_;
        uVar6 = (ulonglong)(dVar48 * auVar60._8_8_) & uVar54;
        dVar48 = dVar19 * dVar19 + dVar21 * dVar21;
        dVar43 = dVar20 * dVar20 + dVar22 * dVar22;
        auVar61._0_8_ = dVar43 + dVar48;
        auVar61._8_8_ = dVar48 + dVar43;
        auVar37._0_4_ = -(uint)(dVar23 <= auVar61._0_8_);
        auVar37._8_4_ = -(uint)(dVar24 <= auVar61._8_8_);
        auVar37._4_4_ = auVar37._0_4_;
        auVar37._12_4_ = auVar37._8_4_;
        auVar4._8_4_ = 0xffffffff;
        auVar4._0_8_ = 0xffffffffffffffff;
        auVar4._12_4_ = 0xffffffff;
        auVar45 = blendvps(ZEXT816(0),auVar4,auVar37);
        auVar34 = sqrtpd(auVar37,auVar61);
        auVar34 = divpd(auVar27,auVar34);
        uVar49 = auVar45._0_8_;
        uVar50 = auVar45._8_8_;
        uVar8 = (ulonglong)(dVar20 * auVar34._8_8_) & uVar50;
        pdVar30[-0x27] = (double)((ulonglong)(dVar42 * auVar56._0_8_) & uVar44);
        pdVar30[-0x26] = (double)((ulonglong)(dVar9 * auVar56._8_8_) & uVar47);
        pdVar30[-0x25] = (double)(~uVar44 & uVar25 | (ulonglong)(auVar56._0_8_ * dVar10) & uVar44);
        pdVar30[-0x24] = (double)(~uVar47 & uVar26 | (ulonglong)(auVar56._8_8_ * dVar11) & uVar47);
        pdVar30[-0x1b] = (double)((ulonglong)(dVar12 * auVar58._0_8_) & uVar51);
        pdVar30[-0x1a] = (double)((ulonglong)(dVar13 * auVar58._8_8_) & uVar52);
        pdVar30[-0x19] = (double)(~uVar51 & uVar25 | (ulonglong)(auVar58._0_8_ * dVar14) & uVar51);
        pdVar30[-0x18] = (double)(~uVar52 & uVar26 | (ulonglong)(auVar58._8_8_ * dVar15) & uVar52);
        auVar5._8_4_ = (int)uVar6;
        auVar5._0_8_ = (ulonglong)(dVar16 * auVar60._0_8_) & uVar53;
        auVar5._12_4_ = (int)(uVar6 >> 0x20);
        *(undefined1 (*) [16])(pdVar30 + -0xf) = auVar5;
        pdVar30[-0xd] = (double)(~uVar53 & uVar25 | (ulonglong)(auVar60._0_8_ * dVar17) & uVar53);
        pdVar30[-0xc] = (double)(~uVar54 & uVar26 | (ulonglong)(auVar60._8_8_ * dVar18) & uVar54);
        auVar7._8_4_ = (int)uVar8;
        auVar7._0_8_ = (ulonglong)(dVar19 * auVar34._0_8_) & uVar49;
        auVar7._12_4_ = (int)(uVar8 >> 0x20);
        *(undefined1 (*) [16])(pdVar30 + -3) = auVar7;
        pdVar30[-1] = (double)(~uVar49 & uVar25 | (ulonglong)(auVar34._0_8_ * dVar21) & uVar49);
        *pdVar30 = (double)(~uVar50 & uVar26 | (ulonglong)(auVar34._8_8_ * dVar22) & uVar50);
        uVar32 = uVar32 + 4;
        pdVar30 = pdVar30 + 0x30;
      } while (uVar32 < uVar28);
    }
    uVar32 = __real_ffffffffffffffff;
    uVar26 = _UNK_15061cbc8;
    uVar25 = ___xmm_3ff00000000000000000000000000000;
    dVar24 = __real_3e45798ee2308c3a;
    dVar23 = __real_3ff0000000000000;
    if ((int)uVar28 < (int)param_2) {
      pdVar30 = (double *)((longlong)(int)uVar28 * 0x60 + 0x18 + param_1);
      lVar29 = (longlong)(int)param_2 - (longlong)(int)uVar28;
      do {
        dVar9 = pdVar30[-3];
        dVar10 = pdVar30[-2];
        dVar11 = pdVar30[-1];
        dVar12 = *pdVar30;
        dVar42 = dVar10 * dVar10 + dVar12 * dVar12 + dVar9 * dVar9 + dVar11 * dVar11;
        uVar6 = ~-(ulonglong)(dVar42 < dVar24) & uVar32;
        dVar42 = dVar23 / SQRT(dVar42);
        pdVar30[-3] = (double)((ulonglong)(dVar9 * dVar42) & uVar6);
        pdVar30[-2] = (double)((ulonglong)(dVar10 * dVar42) & uVar6);
        pdVar30[-1] = (double)(~uVar6 & uVar25 | (ulonglong)(dVar11 * dVar42) & uVar6);
        *pdVar30 = (double)(~uVar6 & uVar26 | (ulonglong)(dVar12 * dVar42) & uVar6);
        pdVar30 = pdVar30 + 0xc;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
  }
  return;
}

// NormalizeRotations_sse4 @ 140c774c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NormalizeRotations_sse4(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  uint uVar23;
  longlong lVar24;
  double *pdVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  ulonglong uVar34;
  double dVar36;
  undefined1 auVar35 [16];
  ulonglong uVar37;
  double dVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  dVar19 = _UNK_150aa88b8;
  dVar18 = ___xmm_3e45798ee2308c3a3e45798ee2308c3a;
  auVar22 = ___xmm_3ff00000000000003ff0000000000000;
  uVar21 = _UNK_15061cbc8;
  uVar20 = ___xmm_3ff00000000000000000000000000000;
  uVar23 = param_2 & 0xfffffffc;
  if (0 < (int)uVar23) {
    pdVar25 = (double *)(param_1 + 0x138);
    uVar26 = 0;
    do {
      dVar32 = pdVar25[-0x27];
      dVar4 = pdVar25[-0x26];
      dVar5 = pdVar25[-0x25];
      dVar6 = pdVar25[-0x24];
      dVar7 = pdVar25[-0x1b];
      dVar8 = pdVar25[-0x1a];
      dVar9 = pdVar25[-0x19];
      dVar10 = pdVar25[-0x18];
      dVar11 = pdVar25[-0xf];
      dVar38 = pdVar25[-0xe];
      dVar12 = pdVar25[-0xd];
      dVar13 = pdVar25[-0xc];
      dVar14 = pdVar25[-3];
      dVar15 = pdVar25[-2];
      dVar16 = pdVar25[-1];
      dVar17 = *pdVar25;
      dVar33 = dVar32 * dVar32 + dVar5 * dVar5;
      dVar36 = dVar4 * dVar4 + dVar6 * dVar6;
      auVar45._0_8_ = dVar36 + dVar33;
      auVar45._8_8_ = dVar33 + dVar36;
      auVar27._0_4_ = -(uint)(dVar18 <= auVar45._0_8_);
      auVar27._8_4_ = -(uint)(dVar19 <= auVar45._8_8_);
      auVar27._4_4_ = auVar27._0_4_;
      auVar27._12_4_ = auVar27._8_4_;
      auVar28._8_4_ = 0xffffffff;
      auVar28._0_8_ = 0xffffffffffffffff;
      auVar28._12_4_ = 0xffffffff;
      auVar35 = blendvps(ZEXT816(0),auVar28,auVar27);
      auVar28 = sqrtpd(auVar27,auVar45);
      auVar46 = divpd(auVar22,auVar28);
      uVar34 = auVar35._0_8_;
      uVar37 = auVar35._8_8_;
      dVar33 = dVar7 * dVar7 + dVar9 * dVar9;
      dVar36 = dVar8 * dVar8 + dVar10 * dVar10;
      auVar47._0_8_ = dVar36 + dVar33;
      auVar47._8_8_ = dVar33 + dVar36;
      auVar29._0_4_ = -(uint)(dVar18 <= auVar47._0_8_);
      auVar29._8_4_ = -(uint)(dVar19 <= auVar47._8_8_);
      auVar29._4_4_ = auVar29._0_4_;
      auVar29._12_4_ = auVar29._8_4_;
      auVar35._8_4_ = 0xffffffff;
      auVar35._0_8_ = 0xffffffffffffffff;
      auVar35._12_4_ = 0xffffffff;
      auVar35 = blendvps(ZEXT816(0),auVar35,auVar29);
      auVar28 = sqrtpd(auVar29,auVar47);
      auVar48 = divpd(auVar22,auVar28);
      uVar41 = auVar35._0_8_;
      uVar42 = auVar35._8_8_;
      dVar33 = dVar11 * dVar11 + dVar12 * dVar12;
      dVar36 = dVar38 * dVar38 + dVar13 * dVar13;
      auVar49._0_8_ = dVar36 + dVar33;
      auVar49._8_8_ = dVar33 + dVar36;
      auVar30._0_4_ = -(uint)(dVar18 <= auVar49._0_8_);
      auVar30._8_4_ = -(uint)(dVar19 <= auVar49._8_8_);
      auVar30._4_4_ = auVar30._0_4_;
      auVar30._12_4_ = auVar30._8_4_;
      auVar50._8_4_ = 0xffffffff;
      auVar50._0_8_ = 0xffffffffffffffff;
      auVar50._12_4_ = 0xffffffff;
      auVar35 = blendvps(ZEXT816(0),auVar50,auVar30);
      auVar28 = sqrtpd(auVar30,auVar49);
      auVar50 = divpd(auVar22,auVar28);
      uVar43 = auVar35._0_8_;
      uVar44 = auVar35._8_8_;
      uVar2 = (ulonglong)(dVar38 * auVar50._8_8_) & uVar44;
      dVar38 = dVar14 * dVar14 + dVar16 * dVar16;
      dVar33 = dVar15 * dVar15 + dVar17 * dVar17;
      auVar51._0_8_ = dVar33 + dVar38;
      auVar51._8_8_ = dVar38 + dVar33;
      auVar31._0_4_ = -(uint)(dVar18 <= auVar51._0_8_);
      auVar31._8_4_ = -(uint)(dVar19 <= auVar51._8_8_);
      auVar31._4_4_ = auVar31._0_4_;
      auVar31._12_4_ = auVar31._8_4_;
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar35 = blendvps(ZEXT816(0),auVar1,auVar31);
      auVar28 = sqrtpd(auVar31,auVar51);
      auVar28 = divpd(auVar22,auVar28);
      uVar39 = auVar35._0_8_;
      uVar40 = auVar35._8_8_;
      uVar3 = (ulonglong)(dVar15 * auVar28._8_8_) & uVar40;
      pdVar25[-0x27] = (double)((ulonglong)(dVar32 * auVar46._0_8_) & uVar34);
      pdVar25[-0x26] = (double)((ulonglong)(dVar4 * auVar46._8_8_) & uVar37);
      pdVar25[-0x25] = (double)(~uVar34 & uVar20 | (ulonglong)(auVar46._0_8_ * dVar5) & uVar34);
      pdVar25[-0x24] = (double)(~uVar37 & uVar21 | (ulonglong)(auVar46._8_8_ * dVar6) & uVar37);
      pdVar25[-0x1b] = (double)((ulonglong)(dVar7 * auVar48._0_8_) & uVar41);
      pdVar25[-0x1a] = (double)((ulonglong)(dVar8 * auVar48._8_8_) & uVar42);
      pdVar25[-0x19] = (double)(~uVar41 & uVar20 | (ulonglong)(auVar48._0_8_ * dVar9) & uVar41);
      pdVar25[-0x18] = (double)(~uVar42 & uVar21 | (ulonglong)(auVar48._8_8_ * dVar10) & uVar42);
      auVar46._8_4_ = (int)uVar2;
      auVar46._0_8_ = (ulonglong)(dVar11 * auVar50._0_8_) & uVar43;
      auVar46._12_4_ = (int)(uVar2 >> 0x20);
      *(undefined1 (*) [16])(pdVar25 + -0xf) = auVar46;
      pdVar25[-0xd] = (double)(~uVar43 & uVar20 | (ulonglong)(auVar50._0_8_ * dVar12) & uVar43);
      pdVar25[-0xc] = (double)(~uVar44 & uVar21 | (ulonglong)(auVar50._8_8_ * dVar13) & uVar44);
      auVar48._8_4_ = (int)uVar3;
      auVar48._0_8_ = (ulonglong)(dVar14 * auVar28._0_8_) & uVar39;
      auVar48._12_4_ = (int)(uVar3 >> 0x20);
      *(undefined1 (*) [16])(pdVar25 + -3) = auVar48;
      pdVar25[-1] = (double)(~uVar39 & uVar20 | (ulonglong)(auVar28._0_8_ * dVar16) & uVar39);
      *pdVar25 = (double)(~uVar40 & uVar21 | (ulonglong)(auVar28._8_8_ * dVar17) & uVar40);
      uVar26 = uVar26 + 4;
      pdVar25 = pdVar25 + 0x30;
    } while (uVar26 < uVar23);
  }
  uVar26 = __real_ffffffffffffffff;
  uVar21 = _UNK_15061cbc8;
  uVar20 = ___xmm_3ff00000000000000000000000000000;
  dVar19 = __real_3e45798ee2308c3a;
  dVar18 = __real_3ff0000000000000;
  if ((int)uVar23 < (int)param_2) {
    pdVar25 = (double *)((longlong)(int)uVar23 * 0x60 + 0x18 + param_1);
    lVar24 = (longlong)(int)param_2 - (longlong)(int)uVar23;
    do {
      dVar4 = pdVar25[-3];
      dVar5 = pdVar25[-2];
      dVar6 = pdVar25[-1];
      dVar7 = *pdVar25;
      dVar32 = dVar5 * dVar5 + dVar7 * dVar7 + dVar4 * dVar4 + dVar6 * dVar6;
      uVar2 = ~-(ulonglong)(dVar32 < dVar19) & uVar26;
      dVar32 = dVar18 / SQRT(dVar32);
      pdVar25[-3] = (double)((ulonglong)(dVar4 * dVar32) & uVar2);
      pdVar25[-2] = (double)((ulonglong)(dVar5 * dVar32) & uVar2);
      pdVar25[-1] = (double)(~uVar2 & uVar20 | (ulonglong)(dVar6 * dVar32) & uVar2);
      *pdVar25 = (double)(~uVar2 & uVar21 | (ulonglong)(dVar7 * dVar32) & uVar2);
      pdVar25 = pdVar25 + 0xc;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  return;
}

// ResetToAdditiveIdentity_sse4 @ 140c77890

void ResetToAdditiveIdentity_sse4(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (0 < (int)param_2) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar2) = 0x3ff0000000000000;
      puVar1 = (undefined8 *)(param_1 + 0x20 + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x30 + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x40 + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x50 + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar2 = lVar2 + 0x60;
    } while ((ulonglong)param_2 * 0x60 != lVar2);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// BlendTransformOverwrite___un_3C_s_5B__c_unFTransform_5D__3E_un_3C_s_5B_unFTransform_5D__3E_CunfCuni_sse4 @ 140abf0e0

void BlendTransformOverwrite___un_3C_s_5B__c_unFTransform_5D__3E_un_3C_s_5B_unFTransform_5D__3E_CunfCuni_sse4
               (longlong param_1,longlong param_2,float param_3,uint param_4,
               undefined1 (*param_5) [16])

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  int iVar16;
  longlong lVar17;
  
  iVar16 = movmskps((int)param_5,*param_5);
  if (iVar16 == 0xf) {
    if (0 < (int)param_4) {
      dVar2 = (double)param_3;
      lVar17 = 0;
      do {
        dVar6 = ((double *)(param_1 + lVar17))[1];
        pdVar1 = (double *)(param_1 + 0x10 + lVar17);
        dVar7 = *pdVar1;
        dVar8 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x20 + lVar17);
        dVar9 = *pdVar1;
        dVar10 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x30 + lVar17);
        dVar11 = *pdVar1;
        dVar12 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x40 + lVar17);
        dVar13 = *pdVar1;
        dVar14 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x50 + lVar17);
        dVar15 = *pdVar1;
        dVar5 = pdVar1[1] * dVar2;
        *(double *)(param_2 + lVar17) = *(double *)(param_1 + lVar17) * dVar2;
        ((double *)(param_2 + lVar17))[1] = dVar6 * dVar2;
        pdVar1 = (double *)(param_2 + 0x10 + lVar17);
        *pdVar1 = dVar7 * dVar2;
        pdVar1[1] = dVar8 * dVar2;
        pdVar1 = (double *)(param_2 + 0x20 + lVar17);
        *pdVar1 = dVar9 * dVar2;
        pdVar1[1] = dVar10 * dVar2;
        pdVar1 = (double *)(param_2 + 0x30 + lVar17);
        *pdVar1 = dVar11 * dVar2;
        pdVar1[1] = dVar12 * dVar2;
        pdVar1 = (double *)(param_2 + 0x40 + lVar17);
        *pdVar1 = dVar13 * dVar2;
        pdVar1[1] = dVar14 * dVar2;
        auVar4._8_4_ = SUB84(dVar5,0);
        auVar4._0_8_ = dVar15 * dVar2;
        auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 0x50 + lVar17) = auVar4;
        lVar17 = lVar17 + 0x60;
      } while ((ulonglong)param_4 * 0x60 != lVar17);
    }
  }
  else if (0 < (int)param_4) {
    dVar2 = (double)param_3;
    lVar17 = 0;
    do {
      dVar6 = ((double *)(param_1 + lVar17))[1];
      pdVar1 = (double *)(param_1 + 0x10 + lVar17);
      dVar7 = *pdVar1;
      dVar8 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x20 + lVar17);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x30 + lVar17);
      dVar11 = *pdVar1;
      dVar12 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x40 + lVar17);
      dVar13 = *pdVar1;
      dVar14 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x50 + lVar17);
      dVar15 = *pdVar1;
      dVar5 = pdVar1[1] * dVar2;
      *(double *)(param_2 + lVar17) = *(double *)(param_1 + lVar17) * dVar2;
      ((double *)(param_2 + lVar17))[1] = dVar6 * dVar2;
      pdVar1 = (double *)(param_2 + 0x10 + lVar17);
      *pdVar1 = dVar7 * dVar2;
      pdVar1[1] = dVar8 * dVar2;
      pdVar1 = (double *)(param_2 + 0x20 + lVar17);
      *pdVar1 = dVar9 * dVar2;
      pdVar1[1] = dVar10 * dVar2;
      pdVar1 = (double *)(param_2 + 0x30 + lVar17);
      *pdVar1 = dVar11 * dVar2;
      pdVar1[1] = dVar12 * dVar2;
      pdVar1 = (double *)(param_2 + 0x40 + lVar17);
      *pdVar1 = dVar13 * dVar2;
      pdVar1[1] = dVar14 * dVar2;
      auVar3._8_4_ = SUB84(dVar5,0);
      auVar3._0_8_ = dVar15 * dVar2;
      auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0x50 + lVar17) = auVar3;
      lVar17 = lVar17 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar17);
  }
  return;
}

// BlendTransformAccumulate___un_3C_s_5B__c_unFTransform_5D__3E_un_3C_s_5B_unFTransform_5D__3E_CunfCuni_sse4 @ 140abf240

void BlendTransformAccumulate___un_3C_s_5B__c_unFTransform_5D__3E_un_3C_s_5B_unFTransform_5D__3E_CunfCuni_sse4
               (longlong param_1,longlong param_2,float param_3,uint param_4,
               undefined1 (*param_5) [16])

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  int iVar31;
  longlong lVar32;
  double dVar33;
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  ulonglong uVar38;
  int iVar42;
  double dVar43;
  undefined1 auVar39 [16];
  ulonglong uVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  iVar31 = movmskps((int)param_5,*param_5);
  if (iVar31 == 0xf) {
    if (0 < (int)param_4) {
      dVar8 = (double)param_3;
      lVar32 = 0;
      do {
        pdVar1 = (double *)(param_1 + 0x10 + lVar32);
        pdVar2 = (double *)(param_1 + 0x20 + lVar32);
        dVar19 = *pdVar2;
        dVar20 = pdVar2[1];
        pdVar2 = (double *)(param_1 + 0x30 + lVar32);
        dVar21 = *pdVar2;
        dVar22 = pdVar2[1];
        dVar33 = *(double *)(param_1 + lVar32) * dVar8;
        dVar36 = ((double *)(param_1 + lVar32))[1] * dVar8;
        dVar15 = *pdVar1 * dVar8;
        dVar16 = pdVar1[1] * dVar8;
        dVar23 = *(double *)(param_2 + lVar32);
        dVar24 = ((double *)(param_2 + lVar32))[1];
        pdVar1 = (double *)(param_2 + 0x10 + lVar32);
        dVar25 = *pdVar1;
        dVar26 = pdVar1[1];
        pdVar1 = (double *)(param_2 + 0x20 + lVar32);
        dVar27 = *pdVar1;
        dVar28 = pdVar1[1];
        pdVar1 = (double *)(param_2 + 0x30 + lVar32);
        dVar29 = *pdVar1;
        dVar30 = pdVar1[1];
        dVar37 = dVar33 * dVar23 + dVar15 * dVar25;
        dVar43 = dVar36 * dVar24 + dVar16 * dVar26;
        iVar31 = -(uint)(0.0 <= dVar43 + dVar37);
        iVar42 = -(uint)(0.0 <= dVar37 + dVar43);
        auVar39._4_4_ = iVar31;
        auVar39._0_4_ = iVar31;
        auVar39._8_4_ = iVar42;
        auVar39._12_4_ = iVar42;
        auVar10._8_4_ = 0xffffffff;
        auVar10._0_8_ = 0xffffffffffffffff;
        auVar10._12_4_ = 0xffffffff;
        auVar39 = blendvps(ZEXT816(0),auVar10,auVar39);
        uVar38 = auVar39._0_8_;
        auVar35._0_8_ = (ulonglong)dVar33 & uVar38;
        uVar44 = auVar39._8_8_;
        auVar35._8_8_ = (ulonglong)dVar36 & uVar44;
        auVar18._4_4_ = ~auVar39._4_4_ & (uint)((ulonglong)(0.0 - dVar33) >> 0x20);
        auVar18._0_4_ = ~auVar39._0_4_ & SUB84(0.0 - dVar33,0);
        auVar18._8_4_ = ~auVar39._8_4_ & SUB84(0.0 - dVar36,0);
        auVar18._12_4_ = ~auVar39._12_4_ & (uint)((ulonglong)(0.0 - dVar36) >> 0x20);
        auVar41._0_8_ = ~uVar38 & (ulonglong)(0.0 - dVar15);
        auVar41._8_8_ = ~uVar44 & (ulonglong)(0.0 - dVar16);
        auVar14._8_4_ = (int)((ulonglong)dVar16 & uVar44);
        auVar14._0_8_ = (ulonglong)dVar15 & uVar38;
        auVar14._12_4_ = (int)(((ulonglong)dVar16 & uVar44) >> 0x20);
        pdVar1 = (double *)(param_1 + 0x50 + lVar32);
        dVar33 = *pdVar1;
        pdVar2 = (double *)(param_1 + 0x40 + lVar32);
        dVar36 = *pdVar2;
        pdVar3 = (double *)(param_2 + 0x40 + lVar32);
        dVar37 = *pdVar3;
        pdVar4 = (double *)(param_2 + 0x50 + lVar32);
        dVar43 = *pdVar4;
        dVar16 = pdVar2[1] * dVar8 + pdVar3[1];
        dVar15 = pdVar1[1] * dVar8 + pdVar4[1];
        *(double *)(param_2 + lVar32) = SUB168(auVar35 | auVar18,0) + dVar23;
        ((double *)(param_2 + lVar32))[1] = SUB168(auVar35 | auVar18,8) + dVar24;
        pdVar1 = (double *)(param_2 + 0x10 + lVar32);
        *pdVar1 = SUB168(auVar41 | auVar14,0) + dVar25;
        pdVar1[1] = SUB168(auVar41 | auVar14,8) + dVar26;
        pdVar1 = (double *)(param_2 + 0x20 + lVar32);
        *pdVar1 = dVar19 * dVar8 + dVar27;
        pdVar1[1] = dVar20 * dVar8 + dVar28;
        pdVar1 = (double *)(param_2 + 0x30 + lVar32);
        *pdVar1 = dVar21 * dVar8 + dVar29;
        pdVar1[1] = dVar22 * dVar8 + dVar30;
        auVar12._8_4_ = SUB84(dVar16,0);
        auVar12._0_8_ = dVar36 * dVar8 + dVar37;
        auVar12._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 0x40 + lVar32) = auVar12;
        auVar7._8_4_ = SUB84(dVar15,0);
        auVar7._0_8_ = dVar33 * dVar8 + dVar43;
        auVar7._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 0x50 + lVar32) = auVar7;
        lVar32 = lVar32 + 0x60;
      } while ((ulonglong)param_4 * 0x60 != lVar32);
    }
  }
  else if (0 < (int)param_4) {
    dVar8 = (double)param_3;
    lVar32 = 0;
    do {
      pdVar1 = (double *)(param_1 + 0x10 + lVar32);
      pdVar2 = (double *)(param_1 + 0x20 + lVar32);
      dVar19 = *pdVar2;
      dVar20 = pdVar2[1];
      pdVar2 = (double *)(param_1 + 0x30 + lVar32);
      dVar21 = *pdVar2;
      dVar22 = pdVar2[1];
      dVar33 = *(double *)(param_1 + lVar32) * dVar8;
      dVar36 = ((double *)(param_1 + lVar32))[1] * dVar8;
      dVar15 = *pdVar1 * dVar8;
      dVar16 = pdVar1[1] * dVar8;
      dVar23 = *(double *)(param_2 + lVar32);
      dVar24 = ((double *)(param_2 + lVar32))[1];
      pdVar1 = (double *)(param_2 + 0x10 + lVar32);
      dVar25 = *pdVar1;
      dVar26 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x20 + lVar32);
      dVar27 = *pdVar1;
      dVar28 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x30 + lVar32);
      dVar29 = *pdVar1;
      dVar30 = pdVar1[1];
      dVar37 = dVar33 * dVar23 + dVar15 * dVar25;
      dVar43 = dVar36 * dVar24 + dVar16 * dVar26;
      iVar31 = -(uint)(0.0 <= dVar43 + dVar37);
      iVar42 = -(uint)(0.0 <= dVar37 + dVar43);
      auVar5._4_4_ = iVar31;
      auVar5._0_4_ = iVar31;
      auVar5._8_4_ = iVar42;
      auVar5._12_4_ = iVar42;
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar39 = blendvps(ZEXT816(0),auVar9,auVar5);
      uVar38 = auVar39._0_8_;
      auVar34._0_8_ = (ulonglong)dVar33 & uVar38;
      uVar44 = auVar39._8_8_;
      auVar34._8_8_ = (ulonglong)dVar36 & uVar44;
      auVar17._4_4_ = ~auVar39._4_4_ & (uint)((ulonglong)(0.0 - dVar33) >> 0x20);
      auVar17._0_4_ = ~auVar39._0_4_ & SUB84(0.0 - dVar33,0);
      auVar17._8_4_ = ~auVar39._8_4_ & SUB84(0.0 - dVar36,0);
      auVar17._12_4_ = ~auVar39._12_4_ & (uint)((ulonglong)(0.0 - dVar36) >> 0x20);
      auVar40._0_8_ = ~uVar38 & (ulonglong)(0.0 - dVar15);
      auVar40._8_8_ = ~uVar44 & (ulonglong)(0.0 - dVar16);
      auVar13._8_4_ = (int)((ulonglong)dVar16 & uVar44);
      auVar13._0_8_ = (ulonglong)dVar15 & uVar38;
      auVar13._12_4_ = (int)(((ulonglong)dVar16 & uVar44) >> 0x20);
      pdVar1 = (double *)(param_1 + 0x50 + lVar32);
      dVar33 = *pdVar1;
      pdVar2 = (double *)(param_1 + 0x40 + lVar32);
      dVar36 = *pdVar2;
      pdVar3 = (double *)(param_2 + 0x40 + lVar32);
      dVar37 = *pdVar3;
      pdVar4 = (double *)(param_2 + 0x50 + lVar32);
      dVar43 = *pdVar4;
      dVar16 = pdVar2[1] * dVar8 + pdVar3[1];
      dVar15 = pdVar1[1] * dVar8 + pdVar4[1];
      *(double *)(param_2 + lVar32) = SUB168(auVar34 | auVar17,0) + dVar23;
      ((double *)(param_2 + lVar32))[1] = SUB168(auVar34 | auVar17,8) + dVar24;
      pdVar1 = (double *)(param_2 + 0x10 + lVar32);
      *pdVar1 = SUB168(auVar40 | auVar13,0) + dVar25;
      pdVar1[1] = SUB168(auVar40 | auVar13,8) + dVar26;
      pdVar1 = (double *)(param_2 + 0x20 + lVar32);
      *pdVar1 = dVar19 * dVar8 + dVar27;
      pdVar1[1] = dVar20 * dVar8 + dVar28;
      pdVar1 = (double *)(param_2 + 0x30 + lVar32);
      *pdVar1 = dVar21 * dVar8 + dVar29;
      pdVar1[1] = dVar22 * dVar8 + dVar30;
      auVar11._8_4_ = SUB84(dVar16,0);
      auVar11._0_8_ = dVar36 * dVar8 + dVar37;
      auVar11._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0x40 + lVar32) = auVar11;
      auVar6._8_4_ = SUB84(dVar15,0);
      auVar6._0_8_ = dVar33 * dVar8 + dVar43;
      auVar6._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0x50 + lVar32) = auVar6;
      lVar32 = lVar32 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar32);
  }
  return;
}

// ConvertPoseToAdditive___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cuni_sse4 @ 140abf580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToAdditive___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cuni_sse4
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [16])

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  undefined1 auVar12 [16];
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 in_EAX;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  int in_R10D;
  int iVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar52;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar53;
  undefined1 auVar51 [16];
  undefined1 in_XMM1 [16];
  ulonglong uVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar61;
  undefined1 auVar60 [16];
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar68;
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  int iVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  int iVar74;
  int iVar78;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float fVar82;
  double dVar83;
  undefined1 unaff_XMM13 [16];
  double dVar84;
  undefined1 unaff_XMM15 [16];
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  
  dVar30 = _UNK_15076c6f8;
  dVar29 = ___xmm_bff00000000000003ff0000000000000;
  dVar5 = _UNK_15076b868;
  dVar52 = ___xmm_3ff0000000000000bff0000000000000;
  dVar28 = _UNK_150689698;
  dVar27 = ___xmm_40000000000000004000000000000000;
  auVar70 = *param_4;
  iVar31 = movmskps(in_EAX,auVar70);
  if (iVar31 == 0xf) {
    if (0 < (int)param_3) {
      lVar33 = 0;
      auVar70._8_4_ = 0xffffffff;
      auVar70._0_8_ = 0xffffffffffffffff;
      auVar70._12_4_ = 0xffffffff;
      do {
        dVar83 = *(double *)(param_2 + lVar33);
        dVar84 = ((double *)(param_2 + lVar33))[1];
        pdVar1 = (double *)(param_2 + 0x10 + lVar33);
        pdVar2 = (double *)(param_2 + 0x20 + lVar33);
        dVar24 = pdVar2[1];
        pdVar3 = (double *)(param_2 + 0x30 + lVar33);
        dVar25 = *pdVar3;
        dVar26 = pdVar3[1];
        dVar68 = *pdVar1 * dVar52;
        dVar61 = pdVar1[1] * dVar5;
        pdVar1 = (double *)(param_1 + 0x18 + lVar33);
        dVar6 = *pdVar1;
        dVar35 = *pdVar1;
        dVar62 = *(double *)(param_1 + lVar33);
        dVar53 = *(double *)(param_1 + lVar33);
        pdVar1 = (double *)(param_1 + 8 + lVar33);
        dVar55 = *pdVar1;
        dVar7 = *pdVar1;
        pdVar1 = (double *)(param_1 + 0x10 + lVar33);
        dVar21 = *pdVar1;
        dVar20 = *pdVar1;
        dVar22 = (dVar68 * dVar55 + (dVar62 * dVar61 * dVar29 - dVar83 * dVar6)) -
                 dVar84 * dVar21 * dVar52;
        dVar23 = (dVar61 * dVar7 + (dVar53 * dVar68 * dVar30 - dVar84 * dVar35)) -
                 dVar83 * dVar20 * dVar5;
        dVar6 = dVar61 * dVar21 * dVar29 +
                dVar83 * dVar55 + (dVar6 * dVar68 - dVar84 * dVar62 * dVar29);
        dVar35 = dVar68 * dVar20 * dVar30 +
                 dVar84 * dVar7 + (dVar35 * dVar61 - dVar83 * dVar53 * dVar30);
        pdVar1 = (double *)(param_1 + 0x20 + lVar33);
        dVar62 = pdVar1[1];
        pdVar3 = (double *)(param_1 + 0x30 + lVar33);
        dVar53 = *pdVar3;
        dVar55 = pdVar3[1];
        pdVar3 = (double *)(param_2 + 0x40 + lVar33);
        dVar7 = *pdVar3;
        dVar20 = pdVar3[1];
        pdVar3 = (double *)(param_2 + 0x50 + lVar33);
        dVar21 = *pdVar3;
        dVar68 = pdVar3[1];
        pdVar3 = (double *)(param_1 + 0x20 + lVar33);
        *pdVar3 = *pdVar1 - *pdVar2;
        pdVar3[1] = dVar62 - dVar24;
        pdVar1 = (double *)(param_1 + 0x30 + lVar33);
        *pdVar1 = dVar53 - dVar25;
        pdVar1[1] = dVar55 - dVar26;
        auVar66._0_4_ =
             -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar7 &&
                    dVar7 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
        auVar66._4_4_ = -(uint)(_UNK_150b51668 <= dVar20 && dVar20 <= _UNK_150b51658);
        auVar66._8_4_ =
             -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar21 &&
                    dVar21 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
        auVar66._12_4_ = -(uint)(_UNK_150b51668 <= dVar68 && dVar68 <= _UNK_150b51658);
        uVar32 = movmskps((int)param_4,auVar66);
        param_4 = (undefined1 (*) [16])(ulonglong)uVar32;
        if (uVar32 == 0) {
          auVar66 = ZEXT816(0);
LAB_140abfab3:
          auVar66 = auVar66 ^ auVar70;
          dVar62 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                           ((ulonglong)dVar7 & ___xmm_7fe00000000000007fe0000000000000));
          dVar53 = (double)(_UNK_150b51628 - ((ulonglong)dVar20 & _UNK_150b51678));
          dVar55 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                           ((ulonglong)dVar21 & ___xmm_7fe00000000000007fe0000000000000));
          dVar61 = (double)(_UNK_150b51628 - ((ulonglong)dVar68 & _UNK_150b51678));
          auVar79._0_4_ = (float)(dVar7 * dVar62);
          auVar79._4_4_ = (float)(dVar20 * dVar53);
          fVar81 = (float)(dVar21 * dVar55);
          fVar82 = (float)(dVar68 * dVar61);
          auVar45._0_8_ = CONCAT44(fVar82,fVar81);
          auVar45._8_8_ = 0;
          auVar79._8_8_ = auVar45._0_8_;
          auVar75 = rcpps(auVar45,auVar79);
          dVar55 = (double)((_UNK_15076ba38 - fVar81 * auVar75._8_4_) * auVar75._8_4_) * dVar55;
          dVar61 = (double)((_UNK_15076ba3c - fVar82 * auVar75._12_4_) * auVar75._12_4_) * dVar61;
          dVar62 = (double)((___xmm_40000000400000004000000040000000 - auVar79._0_4_ * auVar75._0_4_
                            ) * auVar75._0_4_) * dVar62;
          dVar53 = (double)((_UNK_15076ba34 - auVar79._4_4_ * auVar75._4_4_) * auVar75._4_4_) *
                   dVar53;
          dVar62 = (dVar27 - dVar7 * dVar62) * dVar62;
          dVar53 = (dVar28 - dVar20 * dVar53) * dVar53;
          dVar55 = (dVar27 - dVar21 * dVar55) * dVar55;
          dVar61 = (dVar28 - dVar68 * dVar61) * dVar61;
          auVar56._0_8_ = (dVar27 - dVar21 * dVar55) * dVar55;
          auVar56._8_8_ = (dVar28 - dVar68 * dVar61) * dVar61;
          auVar80._0_8_ = (dVar27 - dVar7 * dVar62) * dVar62;
          auVar80._8_8_ = (dVar28 - dVar20 * dVar53) * dVar53;
          auVar46._4_4_ = auVar66._0_4_;
          auVar46._0_4_ = auVar66._0_4_;
          auVar46._8_4_ = auVar66._4_4_;
          auVar46._12_4_ = auVar66._4_4_;
          unaff_XMM15 = blendvps(unaff_XMM15,auVar80,auVar46);
          auVar47._4_4_ = auVar66._8_4_;
          auVar47._0_4_ = auVar66._8_4_;
          auVar47._8_4_ = auVar66._12_4_;
          auVar47._12_4_ = auVar66._12_4_;
          in_XMM1 = blendvps(in_XMM1,auVar56,auVar47);
        }
        else {
          auVar75._0_4_ = (float)dVar7;
          auVar75._4_4_ = (float)dVar20;
          auVar58._0_8_ = CONCAT44((float)dVar68,(float)dVar21);
          auVar58._8_8_ = 0;
          auVar75._8_8_ = auVar58._0_8_;
          auVar59 = rcpps(auVar58,auVar75);
          dVar62 = (double)((___xmm_40000000400000004000000040000000 - auVar75._0_4_ * auVar59._0_4_
                            ) * auVar59._0_4_);
          dVar53 = (double)((_UNK_15076ba34 - auVar75._4_4_ * auVar59._4_4_) * auVar59._4_4_);
          dVar55 = (double)((_UNK_15076ba38 - (float)dVar21 * auVar59._8_4_) * auVar59._8_4_);
          dVar61 = (double)((_UNK_15076ba3c - (float)dVar68 * auVar59._12_4_) * auVar59._12_4_);
          dVar62 = (dVar27 - dVar7 * dVar62) * dVar62;
          dVar53 = (dVar28 - dVar20 * dVar53) * dVar53;
          dVar55 = (dVar27 - dVar21 * dVar55) * dVar55;
          dVar61 = (dVar28 - dVar68 * dVar61) * dVar61;
          auVar59._0_8_ = dVar21 * dVar55;
          auVar59._8_8_ = dVar68 * dVar61;
          auVar60._0_8_ = (dVar27 - auVar59._0_8_) * dVar55;
          auVar60._8_8_ = (dVar28 - auVar59._8_8_) * dVar61;
          auVar77._0_8_ = (dVar27 - dVar7 * dVar62) * dVar62;
          auVar77._8_8_ = (dVar28 - dVar20 * dVar53) * dVar53;
          auVar75 = pmovsxdq(auVar59,auVar66);
          unaff_XMM15 = blendvps(unaff_XMM15,auVar77,auVar75);
          auVar51._4_4_ = auVar66._8_4_;
          auVar51._0_4_ = auVar66._8_4_;
          auVar51._8_4_ = auVar66._12_4_;
          auVar51._12_4_ = auVar66._12_4_;
          in_XMM1 = blendvps(in_XMM1,auVar60,auVar51);
          if ((char)uVar32 != '\x0f') goto LAB_140abfab3;
        }
        dVar62 = in_XMM1._0_8_;
        dVar53 = in_XMM1._8_8_;
        dVar55 = unaff_XMM15._0_8_;
        dVar61 = unaff_XMM15._8_8_;
        dVar55 = (dVar55 + dVar55) - dVar55 * dVar55 * dVar7;
        dVar61 = (dVar61 + dVar61) - dVar61 * dVar61 * dVar20;
        dVar62 = (dVar62 + dVar62) - dVar62 * dVar62 * dVar21;
        dVar53 = (dVar53 + dVar53) - dVar53 * dVar53 * dVar68;
        dVar83 = (dVar62 + dVar62) - dVar62 * dVar62 * dVar21;
        dVar84 = (dVar53 + dVar53) - dVar53 * dVar53 * dVar68;
        dVar62 = (dVar55 + dVar55) - dVar55 * dVar55 * dVar7;
        dVar53 = (dVar61 + dVar61) - dVar61 * dVar61 * dVar20;
        iVar31 = -(uint)((double)((ulonglong)dVar21 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                        ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
        iVar34 = -(uint)((double)((ulonglong)dVar68 & _UNK_15061cc88) <= _UNK_150aa88b8);
        iVar71 = -(uint)((double)((ulonglong)dVar7 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                        ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
        iVar74 = -(uint)((double)((ulonglong)dVar20 & _UNK_15061cc88) <= _UNK_150aa88b8);
        auVar48._4_4_ = iVar71;
        auVar48._0_4_ = iVar71;
        auVar48._8_4_ = iVar74;
        auVar48._12_4_ = iVar74;
        auVar66 = blendvps(ZEXT816(0),auVar70,auVar48);
        auVar49._4_4_ = iVar31;
        auVar49._0_4_ = iVar31;
        auVar49._8_4_ = iVar34;
        auVar49._12_4_ = iVar34;
        auVar75 = blendvps(ZEXT816(0),auVar70,auVar49);
        auVar57._0_8_ =
             (double)CONCAT44(~auVar66._4_4_ & (uint)((ulonglong)dVar62 >> 0x20),
                              ~auVar66._0_4_ & SUB84(dVar62,0));
        auVar57._8_4_ = ~auVar66._8_4_ & SUB84(dVar53,0);
        auVar57._12_4_ = ~auVar66._12_4_ & (uint)((ulonglong)dVar53 >> 0x20);
        auVar73._0_8_ =
             (double)CONCAT44(~auVar75._4_4_ & (uint)((ulonglong)dVar83 >> 0x20),
                              ~auVar75._0_4_ & SUB84(dVar83,0));
        auVar73._8_4_ = ~auVar75._8_4_ & SUB84(dVar84,0);
        auVar73._12_4_ = ~auVar75._12_4_ & (uint)((ulonglong)dVar84 >> 0x20);
        pdVar1 = (double *)(param_1 + 0x40 + lVar33);
        pdVar2 = (double *)(param_1 + 0x50 + lVar33);
        dVar53 = *pdVar2 * auVar73._0_8_ + ___xmm_8000000000000000bff0000000000000;
        dVar55 = pdVar2[1] * auVar73._8_8_ + _UNK_15076c578;
        dVar62 = pdVar1[1] * auVar57._8_8_ + _UNK_15076c718;
        pdVar2 = (double *)(param_1 + 0x40 + lVar33);
        *pdVar2 = *pdVar1 * auVar57._0_8_ + ___xmm_bff0000000000000bff0000000000000;
        pdVar2[1] = dVar62;
        pdVar1 = (double *)(param_1 + 0x50 + lVar33);
        *pdVar1 = dVar53;
        pdVar1[1] = dVar55;
        dVar62 = dVar35 * dVar35 + dVar23 * dVar23 + dVar6 * dVar6 + dVar22 * dVar22;
        dVar53 = __real_3ff0000000000000 / SQRT(dVar62);
        uVar54 = ~-(ulonglong)(dVar62 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        uVar11 = (ulonglong)(dVar35 * dVar53) & uVar54;
        uVar13 = (ulonglong)(dVar23 * dVar53) & uVar54;
        auVar50._0_8_ = ~uVar54 & ___xmm_3ff00000000000000000000000000000;
        auVar50._8_8_ = ~uVar54 & _UNK_15061cbc8;
        auVar17._8_4_ = (int)uVar11;
        auVar17._0_8_ = (ulonglong)(dVar6 * dVar53) & uVar54;
        auVar17._12_4_ = (int)(uVar11 >> 0x20);
        auVar19._8_4_ = (int)uVar13;
        auVar19._0_8_ = (ulonglong)(dVar22 * dVar53) & uVar54;
        auVar19._12_4_ = (int)(uVar13 >> 0x20);
        *(undefined1 (*) [16])(param_1 + lVar33) = auVar19;
        *(undefined1 (*) [16])(param_1 + 0x10 + lVar33) = auVar50 | auVar17;
        lVar33 = lVar33 + 0x60;
      } while ((ulonglong)param_3 * 0x60 != lVar33);
    }
  }
  else if (0 < (int)param_3) {
    lVar33 = 0;
    auVar72._8_4_ = 0xffffffff;
    auVar72._0_8_ = 0xffffffffffffffff;
    auVar72._12_4_ = 0xffffffff;
    do {
      dVar61 = *(double *)(param_2 + lVar33);
      dVar23 = ((double *)(param_2 + lVar33))[1];
      pdVar1 = (double *)(param_2 + 0x10 + lVar33);
      pdVar2 = (double *)(param_2 + 0x20 + lVar33);
      dVar83 = pdVar2[1];
      pdVar3 = (double *)(param_2 + 0x30 + lVar33);
      dVar84 = *pdVar3;
      dVar20 = *pdVar1 * ___xmm_3ff0000000000000bff0000000000000;
      dVar68 = pdVar1[1] * _UNK_15076b868;
      pdVar1 = (double *)(param_1 + 0x18 + lVar33);
      dVar5 = *pdVar1;
      dVar52 = *pdVar1;
      dVar6 = *(double *)(param_1 + lVar33);
      dVar35 = *(double *)(param_1 + lVar33);
      pdVar1 = (double *)(param_1 + 8 + lVar33);
      dVar62 = *pdVar1;
      dVar53 = *pdVar1;
      pdVar1 = (double *)(param_1 + 0x10 + lVar33);
      dVar7 = *pdVar1;
      dVar55 = *pdVar1;
      dVar21 = (dVar20 * dVar62 + (dVar6 * dVar68 * dVar29 - dVar61 * dVar5)) -
               dVar23 * dVar7 * ___xmm_3ff0000000000000bff0000000000000;
      dVar22 = (dVar68 * dVar53 + (dVar35 * dVar20 * dVar30 - dVar23 * dVar52)) -
               dVar61 * dVar55 * _UNK_15076b868;
      dVar5 = dVar68 * dVar7 * dVar29 + dVar61 * dVar62 + (dVar5 * dVar20 - dVar23 * dVar6 * dVar29)
      ;
      dVar6 = dVar20 * dVar55 * dVar30 +
              dVar23 * dVar53 + (dVar52 * dVar68 - dVar61 * dVar35 * dVar30);
      pdVar1 = (double *)(param_1 + 0x20 + lVar33);
      dVar35 = pdVar1[1];
      pdVar4 = (double *)(param_1 + 0x30 + lVar33);
      dVar62 = *pdVar4;
      dVar52 = pdVar4[1] - pdVar3[1];
      pdVar3 = (double *)(param_2 + 0x40 + lVar33);
      dVar53 = *pdVar3;
      dVar55 = pdVar3[1];
      pdVar3 = (double *)(param_2 + 0x50 + lVar33);
      dVar7 = *pdVar3;
      dVar20 = pdVar3[1];
      pdVar3 = (double *)(param_1 + 0x20 + lVar33);
      *pdVar3 = *pdVar1 - *pdVar2;
      pdVar3[1] = dVar35 - dVar83;
      auVar8._8_4_ = SUB84(dVar52,0);
      auVar8._0_8_ = dVar62 - dVar84;
      auVar8._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x30 + lVar33) = auVar8;
      auVar69._0_4_ =
           -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar53 &&
                  dVar53 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
      auVar69._4_4_ = -(uint)(_UNK_150b51668 <= dVar55 && dVar55 <= _UNK_150b51658);
      auVar69._8_4_ =
           -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar7 &&
                  dVar7 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
      auVar69._12_4_ = -(uint)(_UNK_150b51668 <= dVar20 && dVar20 <= _UNK_150b51658);
      local_b8 = auVar70._0_4_;
      uStack_b4 = auVar70._4_4_;
      uStack_b0 = auVar70._8_4_;
      uStack_ac = auVar70._12_4_;
      local_b8 = auVar69._0_4_ & local_b8;
      uStack_b4 = auVar69._4_4_ & uStack_b4;
      uStack_b0 = auVar69._8_4_ & uStack_b0;
      uStack_ac = auVar69._12_4_ & uStack_ac;
      auVar9._4_4_ = uStack_b4;
      auVar9._0_4_ = local_b8;
      auVar9._8_4_ = uStack_b0;
      auVar9._12_4_ = uStack_ac;
      in_R10D = movmskps(in_R10D,auVar9);
      if (in_R10D == 0) {
        local_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
LAB_140abf623:
        dVar68 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                         ((ulonglong)dVar53 & ___xmm_7fe00000000000007fe0000000000000));
        dVar62 = (double)(_UNK_150b51628 - ((ulonglong)dVar55 & _UNK_150b51678));
        dVar52 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                         ((ulonglong)dVar7 & ___xmm_7fe00000000000007fe0000000000000));
        dVar35 = (double)(_UNK_150b51628 - ((ulonglong)dVar20 & _UNK_150b51678));
        fVar81 = (float)(dVar53 * dVar68);
        fVar82 = (float)(dVar55 * dVar62);
        auVar36._0_4_ = (float)(dVar7 * dVar52);
        auVar36._4_4_ = (float)(dVar20 * dVar35);
        auVar36._8_8_ = 0;
        auVar15._4_4_ = fVar82;
        auVar15._0_4_ = fVar81;
        auVar15._8_4_ = auVar36._0_4_;
        auVar15._12_4_ = auVar36._4_4_;
        auVar66 = rcpps(auVar36,auVar15);
        dVar52 = (double)((_UNK_15076ba38 - auVar36._0_4_ * auVar66._8_4_) * auVar66._8_4_) * dVar52
        ;
        dVar35 = (double)((_UNK_15076ba3c - auVar36._4_4_ * auVar66._12_4_) * auVar66._12_4_) *
                 dVar35;
        dVar68 = (double)((___xmm_40000000400000004000000040000000 - fVar81 * auVar66._0_4_) *
                         auVar66._0_4_) * dVar68;
        dVar62 = (double)((_UNK_15076ba34 - fVar82 * auVar66._4_4_) * auVar66._4_4_) * dVar62;
        dVar68 = (dVar27 - dVar53 * dVar68) * dVar68;
        dVar62 = (dVar28 - dVar55 * dVar62) * dVar62;
        dVar52 = (dVar27 - dVar7 * dVar52) * dVar52;
        dVar35 = (dVar28 - dVar20 * dVar35) * dVar35;
        auVar63._0_8_ = (dVar27 - dVar7 * dVar52) * dVar52;
        auVar63._8_8_ = (dVar28 - dVar20 * dVar35) * dVar35;
        dVar62 = (dVar28 - dVar55 * dVar62) * dVar62;
        auVar37._0_8_ = CONCAT44(local_b8,local_b8) ^ 0xffffffffffffffff;
        auVar37._8_4_ = uStack_b4 ^ 0xffffffff;
        auVar37._12_4_ = uStack_b4 ^ 0xffffffff;
        auVar16._8_4_ = SUB84(dVar62,0);
        auVar16._0_8_ = (dVar27 - dVar53 * dVar68) * dVar68;
        auVar16._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
        unaff_XMM13 = blendvps(unaff_XMM13,auVar16,auVar37);
        auVar38._0_8_ = CONCAT44(uStack_b0,uStack_b0) ^ 0xffffffffffffffff;
        auVar38._8_4_ = uStack_ac ^ 0xffffffff;
        auVar38._12_4_ = uStack_ac ^ 0xffffffff;
        unaff_XMM15 = blendvps(unaff_XMM15,auVar63,auVar38);
      }
      else {
        auVar42._0_4_ = (float)dVar53;
        auVar42._4_4_ = (float)dVar55;
        auVar65._0_8_ = CONCAT44((float)dVar20,(float)dVar7);
        auVar65._8_8_ = 0;
        auVar42._8_8_ = auVar65._0_8_;
        auVar66 = rcpps(auVar65,auVar42);
        dVar35 = (double)((___xmm_40000000400000004000000040000000 - auVar42._0_4_ * auVar66._0_4_)
                         * auVar66._0_4_);
        dVar52 = (double)((_UNK_15076ba34 - auVar42._4_4_ * auVar66._4_4_) * auVar66._4_4_);
        dVar62 = (double)((_UNK_15076ba38 - (float)dVar7 * auVar66._8_4_) * auVar66._8_4_);
        dVar68 = (double)((_UNK_15076ba3c - (float)dVar20 * auVar66._12_4_) * auVar66._12_4_);
        dVar35 = (dVar27 - dVar53 * dVar35) * dVar35;
        dVar52 = (dVar28 - dVar55 * dVar52) * dVar52;
        dVar62 = (dVar27 - dVar7 * dVar62) * dVar62;
        dVar68 = (dVar28 - dVar20 * dVar68) * dVar68;
        auVar43._0_8_ = dVar7 * dVar62;
        auVar43._8_8_ = dVar20 * dVar68;
        auVar67._0_8_ = (dVar27 - auVar43._0_8_) * dVar62;
        auVar67._8_8_ = (dVar28 - auVar43._8_8_) * dVar68;
        dVar52 = (dVar28 - dVar55 * dVar52) * dVar52;
        auVar66 = pmovsxdq(auVar43,auVar69);
        auVar14._8_4_ = SUB84(dVar52,0);
        auVar14._0_8_ = (dVar27 - dVar53 * dVar35) * dVar35;
        auVar14._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
        unaff_XMM13 = blendvps(unaff_XMM13,auVar14,auVar66);
        auVar44._4_4_ = auVar69._8_4_;
        auVar44._0_4_ = auVar69._8_4_;
        auVar44._8_4_ = auVar69._12_4_;
        auVar44._12_4_ = auVar69._12_4_;
        unaff_XMM15 = blendvps(unaff_XMM15,auVar67,auVar44);
        if ((char)iVar31 != (char)in_R10D) goto LAB_140abf623;
      }
      dVar62 = unaff_XMM15._0_8_;
      dVar68 = unaff_XMM15._8_8_;
      dVar52 = unaff_XMM13._0_8_;
      dVar35 = unaff_XMM13._8_8_;
      dVar52 = (dVar52 + dVar52) - dVar52 * dVar52 * dVar53;
      dVar35 = (dVar35 + dVar35) - dVar35 * dVar35 * dVar55;
      dVar62 = (dVar62 + dVar62) - dVar62 * dVar62 * dVar7;
      dVar68 = (dVar68 + dVar68) - dVar68 * dVar68 * dVar20;
      dVar62 = (dVar62 + dVar62) - dVar62 * dVar62 * dVar7;
      dVar68 = (dVar68 + dVar68) - dVar68 * dVar68 * dVar20;
      dVar52 = (dVar52 + dVar52) - dVar52 * dVar52 * dVar53;
      dVar35 = (dVar35 + dVar35) - dVar35 * dVar35 * dVar55;
      iVar74 = -(uint)((double)((ulonglong)dVar7 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                      ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
      iVar78 = -(uint)((double)((ulonglong)dVar20 & _UNK_15061cc88) <= _UNK_150aa88b8);
      iVar34 = -(uint)((double)((ulonglong)dVar53 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                      ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
      iVar71 = -(uint)((double)((ulonglong)dVar55 & _UNK_15061cc88) <= _UNK_150aa88b8);
      auVar39._4_4_ = iVar34;
      auVar39._0_4_ = iVar34;
      auVar39._8_4_ = iVar71;
      auVar39._12_4_ = iVar71;
      auVar66 = blendvps(ZEXT816(0),auVar72,auVar39);
      auVar40._4_4_ = iVar74;
      auVar40._0_4_ = iVar74;
      auVar40._8_4_ = iVar78;
      auVar40._12_4_ = iVar78;
      auVar75 = blendvps(ZEXT816(0),auVar72,auVar40);
      auVar64._0_8_ =
           (double)CONCAT44(~auVar66._4_4_ & (uint)((ulonglong)dVar52 >> 0x20),
                            ~auVar66._0_4_ & SUB84(dVar52,0));
      auVar64._8_4_ = ~auVar66._8_4_ & SUB84(dVar35,0);
      auVar64._12_4_ = ~auVar66._12_4_ & (uint)((ulonglong)dVar35 >> 0x20);
      auVar76._0_8_ =
           (double)CONCAT44(~auVar75._4_4_ & (uint)((ulonglong)dVar62 >> 0x20),
                            ~auVar75._0_4_ & SUB84(dVar62,0));
      auVar76._8_4_ = ~auVar75._8_4_ & SUB84(dVar68,0);
      auVar76._12_4_ = ~auVar75._12_4_ & (uint)((ulonglong)dVar68 >> 0x20);
      pdVar1 = (double *)(param_1 + 0x40 + lVar33);
      pdVar2 = (double *)(param_1 + 0x50 + lVar33);
      dVar52 = *pdVar2 * auVar76._0_8_ + ___xmm_8000000000000000bff0000000000000;
      dVar35 = pdVar2[1] * auVar76._8_8_ + _UNK_15076c578;
      dVar62 = pdVar1[1] * auVar64._8_8_ + _UNK_15076c718;
      pdVar2 = (double *)(param_1 + 0x40 + lVar33);
      *pdVar2 = *pdVar1 * auVar64._0_8_ + ___xmm_bff0000000000000bff0000000000000;
      pdVar2[1] = dVar62;
      auVar10._8_4_ = SUB84(dVar35,0);
      auVar10._0_8_ = dVar52;
      auVar10._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x50 + lVar33) = auVar10;
      dVar52 = dVar6 * dVar6 + dVar22 * dVar22 + dVar5 * dVar5 + dVar21 * dVar21;
      dVar35 = __real_3ff0000000000000 / SQRT(dVar52);
      uVar11 = ~-(ulonglong)(dVar52 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      uVar13 = (ulonglong)(dVar6 * dVar35) & uVar11;
      uVar54 = (ulonglong)(dVar22 * dVar35) & uVar11;
      auVar41._0_8_ = ~uVar11 & ___xmm_3ff00000000000000000000000000000;
      auVar41._8_8_ = ~uVar11 & _UNK_15061cbc8;
      auVar12._8_4_ = (int)uVar13;
      auVar12._0_8_ = (ulonglong)(dVar5 * dVar35) & uVar11;
      auVar12._12_4_ = (int)(uVar13 >> 0x20);
      auVar18._8_4_ = (int)uVar54;
      auVar18._0_8_ = (ulonglong)(dVar21 * dVar35) & uVar11;
      auVar18._12_4_ = (int)(uVar54 >> 0x20);
      *(undefined1 (*) [16])(param_1 + lVar33) = auVar18;
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar33) = auVar41 | auVar12;
      lVar33 = lVar33 + 0x60;
    } while ((ulonglong)param_3 * 0x60 != lVar33);
  }
  return;
}

// ConvertPoseToMeshRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_sse4 @ 140abff40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToMeshRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_sse4
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [16])

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar11;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 in_EAX;
  int iVar19;
  double *pdVar20;
  ulonglong uVar21;
  longlong lVar22;
  double dVar3;
  double dVar5;
  double dVar10;
  double dVar12;
  
  dVar18 = _UNK_15076c6f8;
  dVar17 = ___xmm_bff00000000000003ff0000000000000;
  dVar16 = _UNK_15076b868;
  dVar15 = ___xmm_3ff0000000000000bff0000000000000;
  iVar19 = movmskps(in_EAX,*param_4);
  if (iVar19 == 0xf) {
    if (1 < (int)param_3) {
      pdVar20 = (double *)(param_1 + 0x78);
      uVar21 = 1;
      do {
        lVar22 = (longlong)*(int *)(param_2 + uVar21 * 4) * 0x60;
        pdVar1 = (double *)(param_1 + 0x18 + lVar22);
        dVar3 = *pdVar1;
        dVar2 = *pdVar1;
        dVar13 = pdVar20[-3];
        dVar14 = pdVar20[-2];
        dVar5 = *(double *)(param_1 + lVar22);
        dVar4 = *(double *)(param_1 + lVar22);
        dVar6 = pdVar20[-2];
        dVar7 = pdVar20[-3];
        dVar8 = pdVar20[-1];
        pdVar1 = (double *)(param_1 + 8 + lVar22);
        dVar10 = *pdVar1;
        dVar9 = *pdVar1;
        pdVar1 = (double *)(param_1 + 0x10 + lVar22);
        dVar12 = *pdVar1;
        dVar11 = *pdVar1;
        pdVar20[-3] = dVar6 * dVar12 * dVar15 +
                      pdVar20[-1] * dVar10 + dVar5 * *pdVar20 * dVar17 + dVar13 * dVar3;
        pdVar20[-2] = dVar7 * dVar11 * dVar16 +
                      *pdVar20 * dVar9 + dVar4 * dVar8 * dVar18 + dVar14 * dVar2;
        pdVar20[-1] = *pdVar20 * dVar12 * dVar17 +
                      ((dVar5 * dVar6 * dVar17 + dVar3 * pdVar20[-1]) - dVar13 * dVar10);
        *pdVar20 = dVar8 * dVar11 * dVar18 +
                   ((dVar4 * dVar7 * dVar18 + dVar2 * *pdVar20) - dVar14 * dVar9);
        uVar21 = uVar21 + 1;
        pdVar20 = pdVar20 + 0xc;
      } while (param_3 != uVar21);
    }
  }
  else if (1 < (int)param_3) {
    pdVar20 = (double *)(param_1 + 0x78);
    uVar21 = 1;
    do {
      lVar22 = (longlong)*(int *)(param_2 + uVar21 * 4) * 0x60;
      pdVar1 = (double *)(param_1 + 0x18 + lVar22);
      dVar2 = *pdVar1;
      dVar3 = *pdVar1;
      dVar13 = pdVar20[-3];
      dVar14 = pdVar20[-2];
      dVar4 = *(double *)(param_1 + lVar22);
      dVar5 = *(double *)(param_1 + lVar22);
      dVar6 = pdVar20[-2];
      dVar7 = pdVar20[-3];
      dVar8 = pdVar20[-1];
      pdVar1 = (double *)(param_1 + 8 + lVar22);
      dVar9 = *pdVar1;
      dVar10 = *pdVar1;
      pdVar1 = (double *)(param_1 + 0x10 + lVar22);
      dVar11 = *pdVar1;
      dVar12 = *pdVar1;
      pdVar20[-3] = dVar6 * dVar11 * dVar15 +
                    pdVar20[-1] * dVar9 + dVar4 * *pdVar20 * dVar17 + dVar13 * dVar2;
      pdVar20[-2] = dVar7 * dVar12 * dVar16 +
                    *pdVar20 * dVar10 + dVar5 * dVar8 * dVar18 + dVar14 * dVar3;
      pdVar20[-1] = *pdVar20 * dVar11 * dVar17 +
                    ((dVar4 * dVar6 * dVar17 + dVar2 * pdVar20[-1]) - dVar13 * dVar9);
      *pdVar20 = dVar8 * dVar12 * dVar18 +
                 ((dVar5 * dVar7 * dVar18 + dVar3 * *pdVar20) - dVar14 * dVar10);
      uVar21 = uVar21 + 1;
      pdVar20 = pdVar20 + 0xc;
    } while (param_3 != uVar21);
  }
  return;
}

// ConvertMeshRotationPoseToLocalSpace___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_sse4 @ 140ac0190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertMeshRotationPoseToLocalSpace___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_sse4
               (longlong param_1,longlong param_2,int param_3,undefined1 (*param_4) [16])

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  ulonglong uVar16;
  double *pdVar17;
  int iVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar3;
  double dVar8;
  
  dVar14 = _UNK_15076c6f8;
  dVar13 = ___xmm_bff00000000000003ff0000000000000;
  dVar12 = _UNK_15076b868;
  dVar11 = ___xmm_3ff0000000000000bff0000000000000;
  iVar18 = movmskps((int)param_4,*param_4);
  uVar15 = param_3 - 1;
  if (iVar18 == 0xf) {
    if (1 < param_3) {
      uVar16 = (ulonglong)uVar15 + 1;
      pdVar17 = (double *)((ulonglong)uVar15 * 0x60 + 0x18 + param_1);
      do {
        lVar19 = (longlong)*(int *)(param_2 + -4 + uVar16 * 4) * 0x60;
        pdVar1 = (double *)(param_1 + 0x10 + lVar19);
        dVar20 = *pdVar1 * dVar11;
        dVar21 = pdVar1[1] * dVar12;
        dVar9 = pdVar17[-3];
        dVar10 = pdVar17[-2];
        dVar2 = *(double *)(param_1 + lVar19);
        dVar3 = *(double *)(param_1 + lVar19);
        dVar4 = pdVar17[-2];
        dVar5 = pdVar17[-3];
        dVar6 = pdVar17[-1];
        pdVar1 = (double *)(param_1 + 8 + lVar19);
        dVar7 = *pdVar1;
        dVar8 = *pdVar1;
        pdVar17[-3] = dVar4 * dVar20 * dVar11 +
                      ((dVar9 * dVar21 - dVar2 * *pdVar17 * dVar13) - pdVar17[-1] * dVar7);
        pdVar17[-2] = dVar5 * dVar20 * dVar12 +
                      ((dVar10 * dVar21 - dVar3 * dVar6 * dVar14) - *pdVar17 * dVar8);
        pdVar17[-1] = *pdVar17 * dVar20 * dVar13 +
                      dVar9 * dVar7 + (dVar21 * pdVar17[-1] - dVar4 * dVar2 * dVar13);
        *pdVar17 = dVar6 * dVar20 * dVar14 +
                   dVar10 * dVar8 + (dVar21 * *pdVar17 - dVar5 * dVar3 * dVar14);
        uVar16 = uVar16 - 1;
        pdVar17 = pdVar17 + -0xc;
      } while (1 < uVar16);
    }
  }
  else if (1 < param_3) {
    uVar16 = (ulonglong)uVar15 + 1;
    pdVar17 = (double *)((ulonglong)uVar15 * 0x60 + 0x18 + param_1);
    do {
      lVar19 = (longlong)*(int *)(param_2 + -4 + uVar16 * 4) * 0x60;
      pdVar1 = (double *)(param_1 + 0x10 + lVar19);
      dVar20 = *pdVar1 * dVar11;
      dVar21 = pdVar1[1] * dVar12;
      dVar9 = pdVar17[-3];
      dVar10 = pdVar17[-2];
      dVar2 = *(double *)(param_1 + lVar19);
      dVar3 = *(double *)(param_1 + lVar19);
      dVar4 = pdVar17[-2];
      dVar5 = pdVar17[-3];
      dVar6 = pdVar17[-1];
      pdVar1 = (double *)(param_1 + 8 + lVar19);
      dVar7 = *pdVar1;
      dVar8 = *pdVar1;
      pdVar17[-3] = dVar4 * dVar20 * dVar11 +
                    ((dVar9 * dVar21 - dVar2 * *pdVar17 * dVar13) - pdVar17[-1] * dVar7);
      pdVar17[-2] = dVar5 * dVar20 * dVar12 +
                    ((dVar10 * dVar21 - dVar3 * dVar6 * dVar14) - *pdVar17 * dVar8);
      pdVar17[-1] = *pdVar17 * dVar20 * dVar13 +
                    dVar9 * dVar7 + (dVar21 * pdVar17[-1] - dVar4 * dVar2 * dVar13);
      *pdVar17 = dVar6 * dVar20 * dVar14 +
                 dVar10 * dVar8 + (dVar21 * *pdVar17 - dVar5 * dVar3 * dVar14);
      uVar16 = uVar16 - 1;
      pdVar17 = pdVar17 + -0xc;
    } while (1 < uVar16);
  }
  return;
}

// AccumulateWithAdditiveScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_CunfCuni_sse4 @ 140ac0410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AccumulateWithAdditiveScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_CunfCuni_sse4
               (longlong param_1,longlong param_2,float param_3,uint param_4,
               undefined1 (*param_5) [16])

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  int iVar42;
  longlong lVar43;
  double dVar44;
  double dVar45;
  
  dVar41 = _UNK_15076c6f8;
  dVar40 = ___xmm_bff00000000000003ff0000000000000;
  dVar39 = _UNK_15076b868;
  dVar38 = ___xmm_3ff0000000000000bff0000000000000;
  iVar42 = movmskps((int)param_5,*param_5);
  if (iVar42 == 0xf) {
    if (0 < (int)param_4) {
      dVar8 = (double)param_3;
      lVar43 = 0;
      do {
        pdVar1 = (double *)(param_2 + 0x10 + lVar43);
        pdVar2 = (double *)(param_2 + 0x20 + lVar43);
        dVar28 = *pdVar2;
        pdVar3 = (double *)(param_2 + 0x30 + lVar43);
        dVar29 = *pdVar3;
        dVar44 = *(double *)(param_2 + lVar43) * dVar8;
        dVar45 = ((double *)(param_2 + lVar43))[1] * dVar8;
        dVar15 = *pdVar1 * dVar8;
        dVar16 = pdVar1[1] * dVar8;
        pdVar1 = (double *)(param_1 + 0x20 + lVar43);
        dVar30 = *pdVar1;
        dVar11 = pdVar1[1] + pdVar2[1] * dVar8;
        pdVar1 = (double *)(param_1 + 0x30 + lVar43);
        dVar31 = *pdVar1;
        dVar14 = pdVar1[1] + pdVar3[1] * dVar8;
        pdVar1 = (double *)(param_2 + 0x40 + lVar43);
        pdVar2 = (double *)(param_2 + 0x50 + lVar43);
        dVar24 = *pdVar2 * dVar8 + __real_3ff0000000000000;
        dVar22 = *pdVar1 * dVar8 + ___xmm_3ff00000000000003ff0000000000000;
        pdVar3 = (double *)(param_1 + 0x40 + lVar43);
        dVar32 = *pdVar3;
        dVar19 = pdVar3[1] * (pdVar1[1] * dVar8 + _UNK_150689688);
        pdVar1 = (double *)(param_1 + 0x50 + lVar43);
        dVar33 = *pdVar1;
        dVar23 = pdVar1[1] * (pdVar2[1] * dVar8 + 0.0);
        dVar34 = *(double *)(param_1 + lVar43);
        dVar35 = ((double *)(param_1 + lVar43))[1];
        pdVar1 = (double *)(param_1 + 0x10 + lVar43);
        dVar36 = *pdVar1;
        dVar37 = pdVar1[1];
        dVar4 = *(double *)(param_1 + 0x18 + lVar43);
        dVar5 = *(double *)(param_1 + 0x10 + lVar43);
        dVar6 = *(double *)(param_1 + 8 + lVar43);
        dVar7 = *(double *)(param_1 + lVar43);
        dVar27 = dVar5 * dVar15 * dVar41 +
                 ((dVar44 * dVar7 * dVar41 + dVar16 * dVar37) - dVar35 * dVar45);
        *(double *)(param_1 + lVar43) =
             dVar6 * dVar15 * dVar38 + dVar45 * dVar36 + dVar44 * dVar4 * dVar40 + dVar16 * dVar34;
        ((double *)(param_1 + lVar43))[1] =
             dVar7 * dVar15 * dVar39 + dVar45 * dVar37 + dVar44 * dVar5 * dVar41 + dVar16 * dVar35;
        auVar26._8_4_ = SUB84(dVar27,0);
        auVar26._0_8_ =
             dVar4 * dVar15 * dVar40 +
             ((dVar44 * dVar6 * dVar40 + dVar16 * dVar36) - dVar34 * dVar45);
        auVar26._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x10 + lVar43) = auVar26;
        auVar10._8_4_ = SUB84(dVar11,0);
        auVar10._0_8_ = dVar30 + dVar28 * dVar8;
        auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x20 + lVar43) = auVar10;
        auVar13._8_4_ = SUB84(dVar14,0);
        auVar13._0_8_ = dVar31 + dVar29 * dVar8;
        auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x30 + lVar43) = auVar13;
        auVar18._8_4_ = SUB84(dVar19,0);
        auVar18._0_8_ = dVar32 * dVar22;
        auVar18._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x40 + lVar43) = auVar18;
        auVar21._8_4_ = SUB84(dVar23,0);
        auVar21._0_8_ = dVar33 * dVar24;
        auVar21._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x50 + lVar43) = auVar21;
        lVar43 = lVar43 + 0x60;
      } while ((ulonglong)param_4 * 0x60 != lVar43);
    }
  }
  else if (0 < (int)param_4) {
    dVar8 = (double)param_3;
    lVar43 = 0;
    do {
      pdVar1 = (double *)(param_2 + 0x10 + lVar43);
      pdVar2 = (double *)(param_2 + 0x20 + lVar43);
      dVar28 = *pdVar2;
      pdVar3 = (double *)(param_2 + 0x30 + lVar43);
      dVar29 = *pdVar3;
      dVar44 = *(double *)(param_2 + lVar43) * dVar8;
      dVar45 = ((double *)(param_2 + lVar43))[1] * dVar8;
      dVar15 = *pdVar1 * dVar8;
      dVar16 = pdVar1[1] * dVar8;
      pdVar1 = (double *)(param_1 + 0x20 + lVar43);
      dVar30 = *pdVar1;
      dVar11 = pdVar1[1] + pdVar2[1] * dVar8;
      pdVar1 = (double *)(param_1 + 0x30 + lVar43);
      dVar31 = *pdVar1;
      dVar14 = pdVar1[1] + pdVar3[1] * dVar8;
      pdVar1 = (double *)(param_2 + 0x40 + lVar43);
      pdVar2 = (double *)(param_2 + 0x50 + lVar43);
      dVar24 = *pdVar2 * dVar8 + __real_3ff0000000000000;
      dVar22 = *pdVar1 * dVar8 + ___xmm_3ff00000000000003ff0000000000000;
      pdVar3 = (double *)(param_1 + 0x40 + lVar43);
      dVar32 = *pdVar3;
      dVar19 = pdVar3[1] * (pdVar1[1] * dVar8 + _UNK_150689688);
      pdVar1 = (double *)(param_1 + 0x50 + lVar43);
      dVar33 = *pdVar1;
      dVar23 = pdVar1[1] * (pdVar2[1] * dVar8 + 0.0);
      dVar34 = *(double *)(param_1 + lVar43);
      dVar35 = ((double *)(param_1 + lVar43))[1];
      pdVar1 = (double *)(param_1 + 0x10 + lVar43);
      dVar36 = *pdVar1;
      dVar37 = pdVar1[1];
      dVar4 = *(double *)(param_1 + 0x18 + lVar43);
      dVar5 = *(double *)(param_1 + 0x10 + lVar43);
      dVar6 = *(double *)(param_1 + 8 + lVar43);
      dVar7 = *(double *)(param_1 + lVar43);
      dVar27 = dVar5 * dVar15 * dVar41 +
               ((dVar44 * dVar7 * dVar41 + dVar16 * dVar37) - dVar35 * dVar45);
      *(double *)(param_1 + lVar43) =
           dVar6 * dVar15 * dVar38 + dVar45 * dVar36 + dVar44 * dVar4 * dVar40 + dVar16 * dVar34;
      ((double *)(param_1 + lVar43))[1] =
           dVar7 * dVar15 * dVar39 + dVar45 * dVar37 + dVar44 * dVar5 * dVar41 + dVar16 * dVar35;
      auVar25._8_4_ = SUB84(dVar27,0);
      auVar25._0_8_ =
           dVar4 * dVar15 * dVar40 + ((dVar44 * dVar6 * dVar40 + dVar16 * dVar36) - dVar34 * dVar45)
      ;
      auVar25._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar43) = auVar25;
      auVar9._8_4_ = SUB84(dVar11,0);
      auVar9._0_8_ = dVar30 + dVar28 * dVar8;
      auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x20 + lVar43) = auVar9;
      auVar12._8_4_ = SUB84(dVar14,0);
      auVar12._0_8_ = dVar31 + dVar29 * dVar8;
      auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x30 + lVar43) = auVar12;
      auVar17._8_4_ = SUB84(dVar19,0);
      auVar17._0_8_ = dVar32 * dVar22;
      auVar17._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x40 + lVar43) = auVar17;
      auVar20._8_4_ = SUB84(dVar23,0);
      auVar20._0_8_ = dVar33 * dVar24;
      auVar20._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x50 + lVar43) = auVar20;
      lVar43 = lVar43 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar43);
  }
  return;
}

// BlendPosesPerBoneFilterScaleRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_sse4 @ 140ac0800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScaleRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_sse4
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,longlong param_10
               ,longlong param_11,longlong param_12,uint param_13,undefined1 (*param_14) [16])

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double *pdVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar39;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar40;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar41;
  undefined1 auVar38 [16];
  double dVar42;
  undefined1 auVar44 [16];
  double dVar43;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar49;
  undefined1 auVar48 [16];
  ulonglong uVar50;
  double dVar51;
  ulonglong uVar52;
  undefined1 in_XMM4 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  int iVar56;
  double dVar57;
  double dVar58;
  ulonglong uVar59;
  int iVar62;
  double dVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  uint uVar64;
  uint uVar72;
  double dVar65;
  double dVar68;
  uint uVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar66;
  double dVar67;
  uint uVar74;
  undefined1 auVar71 [16];
  double dVar75;
  uint uVar77;
  undefined1 auVar76 [16];
  double dVar78;
  double dVar85;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar86;
  undefined1 unaff_XMM9 [16];
  double dVar88;
  undefined1 auVar87 [16];
  double dVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  double dVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  double dVar104;
  double dVar106;
  undefined1 auVar105 [16];
  double local_338;
  double local_328;
  double local_318;
  double local_308;
  double local_2f8;
  double local_2e8;
  double local_2d8;
  double local_2c8;
  double local_2b8;
  double local_2a8;
  double local_298;
  double local_288;
  double local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double local_238;
  double local_228;
  double local_218;
  double local_1f8;
  double local_1e8;
  double local_1d8;
  double local_1c8;
  double local_1b8;
  undefined1 local_198 [16];
  double local_178;
  double local_168;
  double local_158;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  double dVar5;
  
  auVar105 = *param_14;
  iVar13 = movmskps((int)param_1,auVar105);
  if (iVar13 == 0xf) {
    if (0 < (int)param_13) {
      lVar16 = 0;
      lVar17 = 0;
      iVar13 = 0;
      do {
        iVar56 = *(int *)(param_11 + lVar16 * 2);
        iVar20 = *(int *)(param_12 + lVar16);
        lVar18 = (longlong)iVar20;
        dVar47 = *(double *)(param_2 + lVar17 * 4);
        dVar65 = *(double *)(param_2 + 8 + lVar17 * 4);
        dVar42 = *(double *)(param_2 + 0x10 + lVar17 * 4);
        dVar78 = *(double *)(param_2 + 0x18 + lVar17 * 4);
        dVar46 = *(double *)(param_2 + 0x20 + lVar17 * 4);
        dVar21 = *(double *)(param_2 + 0x28 + lVar17 * 4);
        dVar39 = *(double *)(param_2 + 0x30 + lVar17 * 4);
        dVar40 = *(double *)(param_2 + 0x38 + lVar17 * 4);
        dVar41 = *(double *)(param_2 + 0x40 + lVar17 * 4);
        dVar51 = *(double *)(param_2 + 0x48 + lVar17 * 4);
        dVar55 = *(double *)(param_2 + 0x50 + lVar17 * 4);
        dVar3 = *(double *)(param_2 + 0x58 + lVar17 * 4);
        pdVar12 = (double *)GetTransformFromArray(param_3,iVar56,iVar13);
        dVar66 = *pdVar12;
        local_278 = pdVar12[1];
        dVar95 = pdVar12[2];
        local_168 = pdVar12[3];
        dVar68 = pdVar12[8];
        local_258 = pdVar12[9];
        dVar89 = pdVar12[10];
        if (lVar18 == -1) {
          local_2f8 = dVar78 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
          local_2a8 = dVar42 * 0.0 * _UNK_15076c6f8;
          local_1b8 = dVar65 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                      dVar42 * 0.0 + dVar47 + local_2f8;
          local_268 = dVar47 * 0.0 * _UNK_15076b868 + dVar78 * 0.0 + dVar65 + local_2a8;
          local_2f8 = ((dVar65 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + dVar42) -
                      dVar47 * 0.0) + local_2f8;
          local_2a8 = ((dVar47 * 0.0 * _UNK_15076c6f8 + dVar78) - dVar65 * 0.0) + local_2a8;
          dVar58 = local_168 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
          dVar85 = dVar95 * 0.0 * _UNK_15076c6f8;
          dVar86 = local_278 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                   dVar95 * 0.0 + dVar66 + dVar58;
          dVar88 = dVar66 * 0.0 * _UNK_15076b868 + local_168 * 0.0 + local_278 + dVar85;
          dVar58 = ((local_278 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + dVar95) -
                   dVar66 * 0.0) + dVar58;
          dVar85 = ((dVar66 * 0.0 * _UNK_15076c6f8 + local_168) - local_278 * 0.0) + dVar85;
          dVar4 = dVar41;
          dVar5 = dVar89;
          dVar57 = local_258;
          dVar63 = dVar51;
          dVar49 = dVar68;
          local_228 = dVar55;
        }
        else {
          lVar15 = lVar18 * 0x20;
          pdVar1 = (double *)(param_4 + 0x18 + lVar15);
          dVar5 = *pdVar1;
          dVar4 = *pdVar1;
          dVar88 = *(double *)(param_4 + lVar15);
          dVar57 = *(double *)(param_4 + lVar15);
          pdVar1 = (double *)(param_4 + 8 + lVar15);
          dVar63 = *pdVar1;
          dVar49 = *pdVar1;
          pdVar1 = (double *)(param_4 + 0x10 + lVar15);
          dVar58 = *pdVar1;
          dVar85 = *pdVar1;
          local_1b8 = dVar65 * dVar58 * ___xmm_3ff0000000000000bff0000000000000 +
                      dVar42 * dVar63 +
                      dVar88 * dVar78 * ___xmm_bff00000000000003ff0000000000000 + dVar47 * dVar5;
          local_268 = dVar47 * dVar85 * _UNK_15076b868 +
                      dVar78 * dVar49 + dVar57 * dVar42 * _UNK_15076c6f8 + dVar65 * dVar4;
          local_2f8 = dVar78 * dVar58 * ___xmm_bff00000000000003ff0000000000000 +
                      ((dVar65 * dVar88 * ___xmm_bff00000000000003ff0000000000000 + dVar5 * dVar42)
                      - dVar47 * dVar63);
          local_2a8 = dVar42 * dVar85 * _UNK_15076c6f8 +
                      ((dVar47 * dVar57 * _UNK_15076c6f8 + dVar4 * dVar78) - dVar65 * dVar49);
          pdVar1 = (double *)(param_6 + 0x18 + lVar15);
          dVar5 = *pdVar1;
          dVar4 = *pdVar1;
          dVar57 = *(double *)(param_6 + lVar15);
          dVar63 = *(double *)(param_6 + lVar15);
          pdVar1 = (double *)(param_6 + 8 + lVar15);
          dVar49 = *pdVar1;
          dVar85 = *pdVar1;
          pdVar1 = (double *)(param_6 + 0x10 + lVar15);
          dVar58 = *pdVar1;
          dVar104 = *pdVar1;
          dVar86 = local_278 * dVar58 * ___xmm_3ff0000000000000bff0000000000000 +
                   dVar95 * dVar49 +
                   dVar57 * local_168 * ___xmm_bff00000000000003ff0000000000000 + dVar66 * dVar5;
          dVar88 = dVar66 * dVar104 * _UNK_15076b868 +
                   local_168 * dVar85 + dVar63 * dVar95 * _UNK_15076c6f8 + local_278 * dVar4;
          dVar58 = local_168 * dVar58 * ___xmm_bff00000000000003ff0000000000000 +
                   ((local_278 * dVar57 * ___xmm_bff00000000000003ff0000000000000 + dVar5 * dVar95)
                   - dVar66 * dVar49);
          dVar85 = dVar95 * dVar104 * _UNK_15076c6f8 +
                   ((dVar66 * dVar63 * _UNK_15076c6f8 + dVar4 * local_168) - local_278 * dVar85);
          lVar15 = lVar18 * 0x18;
          dVar4 = dVar41 * *(double *)(param_5 + lVar15);
          dVar5 = *(double *)(param_7 + 0x10 + lVar15) * dVar89;
          dVar57 = local_258 * ((double *)(param_7 + lVar15))[1];
          dVar63 = dVar51 * ((double *)(param_5 + lVar15))[1];
          dVar49 = dVar68 * *(double *)(param_7 + lVar15);
          local_228 = *(double *)(param_5 + 0x10 + lVar15) * dVar55;
        }
        local_1c8 = pdVar12[4];
        local_1e8 = pdVar12[5];
        local_1d8 = pdVar12[6];
        local_2e8 = pdVar12[7];
        local_1f8 = pdVar12[0xb];
        fVar94 = *(float *)(param_11 + 4 + lVar16 * 2);
        if (fVar94 <= 0.0) {
          fVar94 = 0.0;
        }
        if (__real_3f800000 <= fVar94) {
          fVar94 = __real_3f800000;
        }
        fVar2 = *(float *)(param_10 + (longlong)iVar56 * 4);
        if (fVar2 <= fVar94) {
          fVar2 = fVar94;
        }
        *(float *)(param_10 + (longlong)iVar56 * 4) = fVar2;
        if (fVar94 <= __real_3727c5ac) {
          local_2b8 = local_228;
          local_238 = local_1b8;
          dVar68 = dVar41;
          dVar66 = dVar47;
          dVar95 = dVar42;
          dVar89 = dVar55;
          local_1e8 = dVar21;
          local_1d8 = dVar39;
          local_1c8 = dVar46;
          local_308 = local_268;
          local_198._0_8_ = dVar63;
          local_2c8 = local_2a8;
          local_318 = dVar4;
          local_338 = local_2f8;
          local_1f8 = dVar3;
          local_258 = dVar51;
          local_278 = dVar65;
          local_168 = dVar78;
          local_2e8 = dVar40;
        }
        else {
          local_2b8 = dVar5;
          local_238 = dVar86;
          local_308 = dVar88;
          local_198._0_8_ = dVar57;
          local_2c8 = dVar85;
          local_318 = dVar49;
          local_338 = dVar58;
          if (fVar94 < __real_3f7fff58) {
            dVar104 = dVar47 * dVar66 + dVar42 * dVar95;
            dVar106 = dVar65 * local_278 + dVar78 * local_168;
            iVar56 = -(uint)(0.0 <= dVar106 + dVar104);
            iVar62 = -(uint)(0.0 <= dVar104 + dVar106);
            auVar48._4_4_ = iVar56;
            auVar48._0_4_ = iVar56;
            auVar48._8_4_ = iVar62;
            auVar48._12_4_ = iVar62;
            auVar60._4_4_ = _UNK_15060db24;
            auVar60._0_4_ = ___xmm_ffffffffffffffffffffffffffffffff;
            auVar60._8_4_ = _UNK_15060db28;
            auVar60._12_4_ = _UNK_15060db2c;
            auVar105 = blendvps(ZEXT816(0),auVar60,auVar48);
            dVar43 = (double)fVar94;
            dVar104 = __real_3ff0000000000000 - dVar43;
            uVar52 = auVar105._0_8_;
            auVar91._0_4_ = ~auVar105._0_4_ & SUB84(0.0 - dVar47,0);
            uVar50 = auVar105._8_8_;
            auVar91._4_4_ = ~auVar105._4_4_ & (uint)((ulonglong)(0.0 - dVar47) >> 0x20);
            auVar91._8_4_ = ~auVar105._8_4_ & SUB84(0.0 - dVar65,0);
            auVar91._12_4_ = ~auVar105._12_4_ & (uint)((ulonglong)(0.0 - dVar65) >> 0x20);
            auVar103._0_8_ = (ulonglong)dVar47 & uVar52;
            auVar103._8_8_ = (ulonglong)dVar65 & uVar50;
            dVar65 = dVar95 * dVar43 +
                     (double)(~uVar52 & (ulonglong)(0.0 - dVar42) | (ulonglong)dVar42 & uVar52) *
                     dVar104;
            dVar95 = local_168 * dVar43 +
                     (double)(~uVar50 & (ulonglong)(0.0 - dVar78) | (ulonglong)dVar78 & uVar50) *
                     dVar104;
            dVar42 = dVar66 * dVar43 + SUB168(auVar103 | auVar91,0) * dVar104;
            dVar78 = local_278 * dVar43 + SUB168(auVar103 | auVar91,8) * dVar104;
            dVar47 = dVar78 * dVar78 + dVar95 * dVar95 + dVar42 * dVar42 + dVar65 * dVar65;
            dVar75 = __real_3ff0000000000000 / SQRT(dVar47);
            uVar50 = ~-(ulonglong)(dVar47 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
            auVar61._0_8_ = (ulonglong)(dVar65 * dVar75) & uVar50;
            auVar61._8_8_ = (ulonglong)(dVar95 * dVar75) & uVar50;
            auVar82._0_8_ = ~uVar50 & ___xmm_3ff00000000000000000000000000000;
            auVar82._8_8_ = ~uVar50 & _UNK_15061cbc8;
            uVar19 = -(uint)(0.0 <= (float)(dVar88 * local_268 + dVar85 * local_2a8 +
                                           dVar86 * local_1b8 + dVar58 * local_2f8));
            dVar66 = (double)(float)(~uVar19 & ((uint)(__real_3f800000 - fVar94) ^
                                               __xmm_80000000800000008000000080000000) |
                                    uVar19 & (uint)(__real_3f800000 - fVar94));
            dVar47 = local_2f8 * dVar66 + dVar58 * dVar43;
            dVar65 = local_2a8 * dVar66 + dVar85 * dVar43;
            dVar104 = local_1b8 * dVar66 + dVar86 * dVar43;
            dVar106 = local_268 * dVar66 + dVar88 * dVar43;
            dVar66 = dVar106 * dVar106 + dVar65 * dVar65 + dVar104 * dVar104 + dVar47 * dVar47;
            uVar59 = ~-(ulonglong)(dVar66 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
            dVar67 = __real_3ff0000000000000 / SQRT(dVar66);
            uVar52 = (ulonglong)(dVar65 * dVar67) & uVar59;
            auVar98._0_8_ = ~uVar59 & ___xmm_3ff00000000000000000000000000000;
            auVar98._8_8_ = ~uVar59 & _UNK_15061cbc8;
            auVar105._8_4_ = (int)uVar52;
            auVar105._0_8_ = (ulonglong)(dVar47 * dVar67) & uVar59;
            auVar105._12_4_ = (int)(uVar52 >> 0x20);
            dVar68 = dVar41 + (dVar68 - dVar41) * dVar43;
            dVar66 = (double)((ulonglong)(dVar42 * dVar75) & uVar50);
            dVar95 = SUB168(auVar82 | auVar61,0);
            dVar89 = dVar55 + (dVar89 - dVar55) * dVar43;
            local_2b8 = (dVar5 - local_228) * dVar43 + local_228;
            local_238 = (double)((ulonglong)(dVar104 * dVar67) & uVar59);
            local_1e8 = dVar21 + (local_1e8 - dVar21) * dVar43;
            local_1d8 = dVar39 + (local_1d8 - dVar39) * dVar43;
            local_1c8 = dVar46 + (local_1c8 - dVar46) * dVar43;
            local_308 = (double)((ulonglong)(dVar106 * dVar67) & uVar59);
            local_198._0_8_ = (dVar57 - dVar63) * dVar43 + dVar63;
            local_2c8 = SUB168(auVar98 | auVar105,8);
            local_318 = (dVar49 - dVar4) * dVar43 + dVar4;
            local_338 = SUB168(auVar98 | auVar105,0);
            local_1f8 = dVar3 + (local_1f8 - dVar3) * dVar43;
            local_258 = dVar51 + (local_258 - dVar51) * dVar43;
            local_278 = (double)((ulonglong)(dVar78 * dVar75) & uVar50);
            local_168 = SUB168(auVar82 | auVar61,8);
            local_2e8 = dVar40 + (local_2e8 - dVar40) * dVar43;
          }
        }
        *(double *)(param_4 + lVar16 * 8) = local_1b8;
        *(double *)(param_4 + 8 + lVar16 * 8) = local_268;
        *(double *)(param_4 + 0x10 + lVar16 * 8) = local_2f8;
        *(double *)(param_4 + 0x18 + lVar16 * 8) = local_2a8;
        *(double *)(param_6 + lVar16 * 8) = dVar86;
        *(double *)(param_6 + 8 + lVar16 * 8) = dVar88;
        *(double *)(param_6 + 0x10 + lVar16 * 8) = dVar58;
        *(double *)(param_6 + 0x18 + lVar16 * 8) = dVar85;
        *(double *)(param_5 + lVar17) = dVar4;
        *(double *)(param_5 + 8 + lVar17) = dVar63;
        *(double *)(param_5 + 0x10 + lVar17) = local_228;
        *(double *)(param_7 + lVar17) = dVar49;
        *(double *)(param_7 + 8 + lVar17) = dVar57;
        *(double *)(param_7 + 0x10 + lVar17) = dVar5;
        if (iVar20 != -1) {
          dVar47 = *(double *)(param_9 + 0x10 + lVar18 * 0x18);
          pdVar12 = (double *)(param_9 + lVar18 * 0x18);
          dVar65 = *pdVar12;
          dVar42 = pdVar12[1];
          uVar19 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                          (double)((ulonglong)dVar47 & __xmm_7fffffffffffffff7fffffffffffffff));
          uVar64 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                          (double)((ulonglong)dVar65 & __xmm_7fffffffffffffff7fffffffffffffff));
          uVar77 = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar42 & _UNK_15061cc88));
          auVar83._4_4_ = uVar77;
          auVar83._0_4_ = uVar64;
          auVar83._8_4_ = uVar19;
          auVar83._12_4_ = -(uint)(_UNK_150aa88b8 < 0.0);
          auVar87._0_4_ =
               -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar65 &&
                      dVar65 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
          auVar87._4_4_ = -(uint)(_UNK_150b51668 <= dVar42 && dVar42 <= _UNK_150b51658);
          auVar87._8_4_ =
               -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar47 &&
                      dVar47 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
          auVar87._12_4_ = -(uint)(_UNK_150b51668 <= 0.0 && 0.0 <= _UNK_150b51658);
          auVar76._0_4_ = auVar87._0_4_ & uVar64;
          auVar76._4_4_ = auVar87._4_4_ & uVar77;
          auVar76._8_4_ = auVar87._8_4_ & uVar19;
          auVar76._12_4_ = auVar87._12_4_ & -(uint)(_UNK_150aa88b8 < 0.0);
          iVar56 = movmskps(iVar20 * 3,auVar76);
          if (iVar56 == 0) {
            auVar76 = ZEXT816(0);
            auVar71._4_4_ = unaff_XMM14_Db;
            auVar71._0_4_ = unaff_XMM14_Da;
            auVar71._8_4_ = unaff_XMM14_Dc;
            auVar71._12_4_ = unaff_XMM14_Dd;
LAB_140ac2b23:
            dVar78 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                             ((ulonglong)dVar65 & ___xmm_7fe00000000000007fe0000000000000));
            dVar46 = (double)((longlong)_UNK_150b51628 - ((ulonglong)dVar42 & _UNK_150b51678));
            dVar21 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                             ((ulonglong)dVar47 & ___xmm_7fe00000000000007fe0000000000000));
            auVar93._0_4_ = (float)(dVar65 * dVar78);
            auVar93._4_4_ = (float)(dVar42 * dVar46);
            fVar94 = (float)(dVar47 * dVar21);
            auVar35._0_8_ = CONCAT44((float)(_UNK_150b51628 * 0.0),fVar94);
            auVar35._8_8_ = 0;
            auVar93._8_8_ = auVar35._0_8_;
            auVar105 = rcpps(auVar35,auVar93);
            uVar19 = auVar76._0_4_ ^ ___xmm_ffffffffffffffffffffffffffffffff;
            uVar64 = auVar76._4_4_ ^ _UNK_15060db24;
            uVar77 = auVar76._8_4_ ^ _UNK_15060db28;
            uVar72 = auVar76._12_4_ ^ _UNK_15060db2c;
            dVar21 = (double)((_UNK_15076ba38 - fVar94 * auVar105._8_4_) * auVar105._8_4_) * dVar21;
            dVar39 = (double)((_UNK_15076ba3c - (float)(_UNK_150b51628 * 0.0) * auVar105._12_4_) *
                             auVar105._12_4_) * _UNK_150b51628;
            dVar78 = (double)((___xmm_40000000400000004000000040000000 -
                              auVar93._0_4_ * auVar105._0_4_) * auVar105._0_4_) * dVar78;
            dVar46 = (double)((_UNK_15076ba34 - auVar93._4_4_ * auVar105._4_4_) * auVar105._4_4_) *
                     dVar46;
            dVar78 = (___xmm_40000000000000004000000000000000 - dVar65 * dVar78) * dVar78;
            dVar46 = (_UNK_150689698 - dVar42 * dVar46) * dVar46;
            dVar21 = (___xmm_40000000000000004000000000000000 - dVar47 * dVar21) * dVar21;
            dVar39 = (_UNK_150689698 - dVar39 * 0.0) * dVar39;
            auVar54._0_8_ = (___xmm_40000000000000004000000000000000 - dVar47 * dVar21) * dVar21;
            auVar54._8_8_ = (_UNK_150689698 - dVar39 * 0.0) * dVar39;
            auVar84._0_8_ = (___xmm_40000000000000004000000000000000 - dVar65 * dVar78) * dVar78;
            auVar84._8_8_ = (_UNK_150689698 - dVar42 * dVar46) * dVar46;
            auVar36._4_4_ = uVar19;
            auVar36._0_4_ = uVar19;
            auVar36._8_4_ = uVar64;
            auVar36._12_4_ = uVar64;
            unaff_XMM9 = blendvps(unaff_XMM9,auVar84,auVar36);
            auVar37._4_4_ = uVar77;
            auVar37._0_4_ = uVar77;
            auVar37._8_4_ = uVar72;
            auVar37._12_4_ = uVar72;
            auVar71 = blendvps(auVar71,auVar54,auVar37);
          }
          else {
            auVar32._0_4_ = (float)dVar65;
            auVar32._4_4_ = (float)dVar42;
            fVar94 = (float)dVar47;
            auVar32._8_4_ = fVar94;
            auVar32._12_4_ = 0;
            auVar105 = rcpps(ZEXT416((uint)fVar94),auVar32);
            dVar78 = (double)((___xmm_40000000400000004000000040000000 -
                              auVar32._0_4_ * auVar105._0_4_) * auVar105._0_4_);
            dVar46 = (double)((_UNK_15076ba34 - auVar32._4_4_ * auVar105._4_4_) * auVar105._4_4_);
            dVar21 = (double)((_UNK_15076ba38 - fVar94 * auVar105._8_4_) * auVar105._8_4_);
            dVar39 = (double)((_UNK_15076ba3c - auVar105._12_4_ * 0.0) * auVar105._12_4_);
            dVar78 = (___xmm_40000000000000004000000000000000 - dVar65 * dVar78) * dVar78;
            dVar46 = (_UNK_150689698 - dVar42 * dVar46) * dVar46;
            dVar21 = (___xmm_40000000000000004000000000000000 - dVar47 * dVar21) * dVar21;
            dVar39 = (_UNK_150689698 - dVar39 * 0.0) * dVar39;
            auVar33._0_8_ = dVar47 * dVar21;
            auVar33._8_8_ = dVar39 * 0.0;
            auVar92._0_8_ = (___xmm_40000000000000004000000000000000 - auVar33._0_8_) * dVar21;
            auVar92._8_8_ = (_UNK_150689698 - auVar33._8_8_) * dVar39;
            auVar99._0_8_ = (___xmm_40000000000000004000000000000000 - dVar65 * dVar78) * dVar78;
            auVar99._8_8_ = (_UNK_150689698 - dVar42 * dVar46) * dVar46;
            auVar105 = pmovsxdq(auVar33,auVar87);
            unaff_XMM9 = blendvps(unaff_XMM9,auVar99,auVar105);
            auVar34._4_4_ = auVar87._8_4_;
            auVar34._0_4_ = auVar87._8_4_;
            auVar34._8_4_ = auVar87._12_4_;
            auVar34._12_4_ = auVar87._12_4_;
            auVar11._4_4_ = unaff_XMM14_Db;
            auVar11._0_4_ = unaff_XMM14_Da;
            auVar11._8_4_ = unaff_XMM14_Dc;
            auVar11._12_4_ = unaff_XMM14_Dd;
            auVar71 = blendvps(auVar11,auVar92,auVar34);
            uVar14 = movmskps((int)param_9,auVar83);
            if ((char)uVar14 != (char)iVar56) goto LAB_140ac2b23;
          }
          lVar18 = lVar18 * 0x20;
          pdVar12 = (double *)(param_8 + 0x10 + lVar18);
          dVar51 = *pdVar12 * ___xmm_3ff0000000000000bff0000000000000;
          dVar55 = pdVar12[1] * _UNK_15076b868;
          dVar46 = *(double *)(param_8 + lVar18);
          dVar78 = *(double *)(param_8 + lVar18);
          pdVar12 = (double *)(param_8 + 8 + lVar18);
          dVar21 = *pdVar12;
          dVar39 = *pdVar12;
          dVar40 = local_2c8 * dVar51 * ___xmm_bff00000000000003ff0000000000000 +
                   local_238 * dVar21 +
                   (local_338 * dVar55 -
                   dVar46 * local_308 * ___xmm_bff00000000000003ff0000000000000);
          dVar41 = local_338 * dVar51 * _UNK_15076c6f8 +
                   local_308 * dVar39 + (local_2c8 * dVar55 - dVar78 * local_238 * _UNK_15076c6f8);
          unaff_XMM14_Da = auVar71._0_4_;
          unaff_XMM14_Db = auVar71._4_4_;
          unaff_XMM14_Dc = auVar71._8_4_;
          unaff_XMM14_Dd = auVar71._12_4_;
          dVar46 = local_308 * dVar51 * ___xmm_3ff0000000000000bff0000000000000 +
                   ((dVar55 * local_238 -
                    local_2c8 * dVar46 * ___xmm_bff00000000000003ff0000000000000) -
                   local_338 * dVar21);
          dVar21 = local_238 * dVar51 * _UNK_15076b868 +
                   ((dVar55 * local_308 - local_338 * dVar78 * _UNK_15076c6f8) - local_2c8 * dVar39)
          ;
          dVar78 = dVar21 * dVar21 + dVar41 * dVar41 + dVar46 * dVar46 + dVar40 * dVar40;
          uVar52 = ~-(ulonglong)(dVar78 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
          dVar78 = __real_3ff0000000000000 / SQRT(dVar78);
          dVar66 = (double)((ulonglong)(dVar46 * dVar78) & uVar52);
          local_278 = (double)((ulonglong)(dVar21 * dVar78) & uVar52);
          dVar95 = (double)(~uVar52 & ___xmm_3ff00000000000000000000000000000 |
                           (ulonglong)(dVar40 * dVar78) & uVar52);
          local_168 = (double)(~uVar52 & _UNK_15061cbc8 | (ulonglong)(dVar41 * dVar78) & uVar52);
          auVar10._8_8_ = _UNK_150aa88b8;
          auVar10._0_8_ = ___xmm_3e45798ee2308c3a3e45798ee2308c3a;
          iVar56 = -(uint)((double)((ulonglong)dVar47 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                          ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
          iVar20 = -(uint)(0.0 <= _UNK_150aa88b8);
          auVar45._4_4_ = -(uint)((double)((ulonglong)dVar42 & _UNK_15061cc88) <= _UNK_150aa88b8);
          auVar45._0_4_ =
               -(uint)((double)((ulonglong)dVar65 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                      ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
          auVar45._8_4_ = iVar56;
          auVar45._12_4_ = iVar20;
          auVar105 = pmovsxdq(auVar10,auVar45);
          auVar105 = blendvps(unaff_XMM9,ZEXT816(0),auVar105);
          auVar38._4_4_ = iVar56;
          auVar38._0_4_ = iVar56;
          auVar38._8_4_ = iVar20;
          auVar38._12_4_ = iVar20;
          auVar60 = blendvps(auVar71,ZEXT816(0),auVar38);
          dVar68 = local_318 * auVar105._0_8_;
          local_258 = (double)local_198._0_8_ * auVar105._8_8_;
          dVar89 = auVar60._0_8_ * local_2b8;
          local_1f8 = 0.0;
        }
        *(double *)(param_8 + lVar16 * 8) = local_238;
        *(double *)(param_8 + 8 + lVar16 * 8) = local_308;
        *(double *)(param_8 + 0x10 + lVar16 * 8) = local_338;
        *(double *)(param_8 + 0x18 + lVar16 * 8) = local_2c8;
        *(double *)(param_9 + lVar17) = local_318;
        *(undefined8 *)(param_9 + 8 + lVar17) = local_198._0_8_;
        *(double *)(param_9 + 0x10 + lVar17) = local_2b8;
        *(double *)(param_1 + lVar17 * 4) = dVar66;
        *(double *)(param_1 + 8 + lVar17 * 4) = local_278;
        *(double *)(param_1 + 0x10 + lVar17 * 4) = dVar95;
        *(double *)(param_1 + 0x18 + lVar17 * 4) = local_168;
        *(double *)(param_1 + 0x20 + lVar17 * 4) = local_1c8;
        *(double *)(param_1 + 0x28 + lVar17 * 4) = local_1e8;
        *(double *)(param_1 + 0x30 + lVar17 * 4) = local_1d8;
        *(double *)(param_1 + 0x38 + lVar17 * 4) = local_2e8;
        *(double *)(param_1 + 0x40 + lVar17 * 4) = dVar68;
        *(double *)(param_1 + 0x48 + lVar17 * 4) = local_258;
        *(double *)(param_1 + 0x50 + lVar17 * 4) = dVar89;
        *(double *)(param_1 + 0x58 + lVar17 * 4) = local_1f8;
        iVar13 = iVar13 + 1;
        lVar17 = lVar17 + 0x18;
        lVar16 = lVar16 + 4;
      } while ((ulonglong)param_13 * 0x18 != lVar17);
    }
  }
  else if (0 < (int)param_13) {
    lVar16 = 0;
    lVar17 = 0;
    iVar13 = 0;
    do {
      iVar56 = *(int *)(param_11 + lVar16 * 2);
      iVar20 = *(int *)(param_12 + lVar16);
      lVar18 = (longlong)iVar20;
      dVar47 = *(double *)(param_2 + lVar17 * 4);
      local_2a8 = *(double *)(param_2 + 8 + lVar17 * 4);
      local_268 = *(double *)(param_2 + 0x10 + lVar17 * 4);
      local_1f8 = *(double *)(param_2 + 0x18 + lVar17 * 4);
      local_1c8 = *(double *)(param_2 + 0x20 + lVar17 * 4);
      local_1e8 = *(double *)(param_2 + 0x28 + lVar17 * 4);
      local_1b8 = *(double *)(param_2 + 0x30 + lVar17 * 4);
      local_1d8 = *(double *)(param_2 + 0x38 + lVar17 * 4);
      local_338 = *(double *)(param_2 + 0x40 + lVar17 * 4);
      local_158 = *(double *)(param_2 + 0x48 + lVar17 * 4);
      local_2d8 = *(double *)(param_2 + 0x50 + lVar17 * 4);
      local_278 = *(double *)(param_2 + 0x58 + lVar17 * 4);
      pdVar12 = (double *)GetTransformFromArray(param_3,iVar56,iVar13);
      dVar65 = *pdVar12;
      dVar42 = pdVar12[1];
      dVar78 = pdVar12[2];
      dVar46 = pdVar12[3];
      dVar21 = pdVar12[8];
      dVar39 = pdVar12[9];
      dVar40 = pdVar12[10];
      if (lVar18 == -1) {
        local_258 = local_1f8 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        local_308 = local_268 * 0.0 * _UNK_15076c6f8;
        local_2e8 = local_2a8 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                    local_268 * 0.0 + dVar47 + local_258;
        local_248 = dVar47 * 0.0 * _UNK_15076b868 + local_1f8 * 0.0 + local_2a8 + local_308;
        local_258 = ((local_2a8 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + local_268) -
                    dVar47 * 0.0) + local_258;
        local_308 = ((dVar47 * 0.0 * _UNK_15076c6f8 + local_1f8) - local_2a8 * 0.0) + local_308;
        dVar95 = dVar46 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        local_178 = dVar78 * 0.0 * _UNK_15076c6f8;
        dVar41 = dVar42 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar78 * 0.0 + dVar65 + dVar95;
        dVar51 = dVar65 * 0.0 * _UNK_15076b868 + dVar46 * 0.0 + dVar42 + local_178;
        dVar95 = ((dVar42 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + dVar78) - dVar65 * 0.0)
                 + dVar95;
        local_178 = ((dVar65 * 0.0 * _UNK_15076c6f8 + dVar46) - dVar42 * 0.0) + local_178;
        dVar55 = dVar40;
        local_238 = dVar39;
        local_228 = dVar21;
        local_218 = local_158;
        dVar3 = local_2d8;
        dVar66 = local_338;
      }
      else {
        lVar15 = lVar18 * 0x20;
        pdVar1 = (double *)(param_4 + 0x18 + lVar15);
        dVar41 = *pdVar1;
        dVar51 = *pdVar1;
        dVar3 = *(double *)(param_4 + lVar15);
        dVar55 = *(double *)(param_4 + lVar15);
        pdVar1 = (double *)(param_4 + 8 + lVar15);
        dVar66 = *pdVar1;
        dVar95 = *pdVar1;
        pdVar1 = (double *)(param_4 + 0x10 + lVar15);
        dVar89 = *pdVar1;
        dVar68 = *pdVar1;
        local_2e8 = local_2a8 * dVar89 * ___xmm_3ff0000000000000bff0000000000000 +
                    local_268 * dVar66 +
                    dVar3 * local_1f8 * ___xmm_bff00000000000003ff0000000000000 + dVar47 * dVar41;
        local_248 = dVar47 * dVar68 * _UNK_15076b868 +
                    local_1f8 * dVar95 + dVar55 * local_268 * _UNK_15076c6f8 + local_2a8 * dVar51;
        local_258 = local_1f8 * dVar89 * ___xmm_bff00000000000003ff0000000000000 +
                    ((local_2a8 * dVar3 * ___xmm_bff00000000000003ff0000000000000 +
                     dVar41 * local_268) - dVar47 * dVar66);
        local_308 = local_268 * dVar68 * _UNK_15076c6f8 +
                    ((dVar47 * dVar55 * _UNK_15076c6f8 + dVar51 * local_1f8) - local_2a8 * dVar95);
        pdVar1 = (double *)(param_6 + 0x18 + lVar15);
        dVar3 = *pdVar1;
        dVar55 = *pdVar1;
        dVar95 = *(double *)(param_6 + lVar15);
        dVar66 = *(double *)(param_6 + lVar15);
        pdVar1 = (double *)(param_6 + 8 + lVar15);
        dVar89 = *pdVar1;
        dVar68 = *pdVar1;
        pdVar1 = (double *)(param_6 + 0x10 + lVar15);
        dVar4 = *pdVar1;
        dVar5 = *pdVar1;
        dVar41 = dVar42 * dVar4 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar78 * dVar89 +
                 dVar95 * dVar46 * ___xmm_bff00000000000003ff0000000000000 + dVar65 * dVar3;
        dVar51 = dVar65 * dVar5 * _UNK_15076b868 +
                 dVar46 * dVar68 + dVar66 * dVar78 * _UNK_15076c6f8 + dVar42 * dVar55;
        dVar95 = dVar46 * dVar4 * ___xmm_bff00000000000003ff0000000000000 +
                 ((dVar42 * dVar95 * ___xmm_bff00000000000003ff0000000000000 + dVar3 * dVar78) -
                 dVar65 * dVar89);
        local_178 = dVar78 * dVar5 * _UNK_15076c6f8 +
                    ((dVar65 * dVar66 * _UNK_15076c6f8 + dVar55 * dVar46) - dVar42 * dVar68);
        lVar15 = lVar18 * 0x18;
        dVar55 = *(double *)(param_7 + 0x10 + lVar15) * dVar40;
        local_238 = dVar39 * ((double *)(param_7 + lVar15))[1];
        local_228 = dVar21 * *(double *)(param_7 + lVar15);
        local_218 = local_158 * ((double *)(param_5 + lVar15))[1];
        dVar3 = *(double *)(param_5 + 0x10 + lVar15) * local_2d8;
        dVar66 = local_338 * *(double *)(param_5 + lVar15);
      }
      dVar68 = pdVar12[4];
      dVar89 = pdVar12[5];
      dVar4 = pdVar12[6];
      dVar5 = pdVar12[7];
      dVar88 = pdVar12[0xb];
      fVar94 = *(float *)(param_11 + 4 + lVar16 * 2);
      if (fVar94 <= 0.0) {
        fVar94 = 0.0;
      }
      if (__real_3f800000 <= fVar94) {
        fVar94 = __real_3f800000;
      }
      fVar2 = *(float *)(param_10 + (longlong)iVar56 * 4);
      if (fVar2 <= fVar94) {
        fVar2 = fVar94;
      }
      *(float *)(param_10 + (longlong)iVar56 * 4) = fVar2;
      dVar57 = local_218;
      local_2b8 = dVar3;
      local_298 = dVar66;
      local_318 = local_258;
      local_288 = local_248;
      local_2f8 = local_2e8;
      local_328 = local_308;
      if (__real_3727c5ac < fVar94) {
        if (__real_3f7fff58 <= fVar94) {
          local_298 = local_228;
          dVar47 = dVar65;
          dVar57 = local_238;
          local_2b8 = dVar55;
          local_1e8 = dVar89;
          local_1d8 = dVar5;
          local_1c8 = dVar68;
          local_158 = dVar39;
          local_318 = dVar95;
          local_288 = dVar51;
          local_2f8 = dVar41;
          local_328 = local_178;
          local_2d8 = dVar40;
          local_338 = dVar21;
          local_278 = dVar88;
          local_2a8 = dVar42;
          local_1f8 = dVar46;
          local_268 = dVar78;
          local_1b8 = dVar4;
        }
        else {
          auVar6._8_4_ = SUB84(local_1f8,0);
          auVar6._0_8_ = local_268;
          auVar6._12_4_ = (int)((ulonglong)local_1f8 >> 0x20);
          dVar57 = dVar47 * dVar65 + local_268 * dVar78;
          dVar63 = local_2a8 * dVar42 + local_1f8 * dVar46;
          iVar56 = -(uint)(0.0 <= dVar63 + dVar57);
          iVar62 = -(uint)(0.0 <= dVar57 + dVar63);
          auVar22._4_4_ = iVar56;
          auVar22._0_4_ = iVar56;
          auVar22._8_4_ = iVar62;
          auVar22._12_4_ = iVar62;
          auVar9._4_4_ = _UNK_15060db24;
          auVar9._0_4_ = ___xmm_ffffffffffffffffffffffffffffffff;
          auVar9._8_4_ = _UNK_15060db28;
          auVar9._12_4_ = _UNK_15060db2c;
          auVar60 = blendvps(ZEXT816(0),auVar9,auVar22);
          dVar63 = (double)fVar94;
          dVar57 = __real_3ff0000000000000 - dVar63;
          uVar52 = auVar60._0_8_;
          auVar69._0_4_ = ~auVar60._0_4_ & SUB84(0.0 - dVar47,0);
          uVar50 = auVar60._8_8_;
          auVar69._4_4_ = ~auVar60._4_4_ & (uint)((ulonglong)(0.0 - dVar47) >> 0x20);
          auVar69._8_4_ = ~auVar60._8_4_ & SUB84(0.0 - local_2a8,0);
          auVar69._12_4_ = ~auVar60._12_4_ & (uint)((ulonglong)(0.0 - local_2a8) >> 0x20);
          dStack_260 = auVar6._8_8_;
          auVar102._0_8_ = (ulonglong)dVar47 & uVar52;
          auVar102._8_8_ = (ulonglong)local_2a8 & uVar50;
          dVar78 = dVar78 * dVar63 +
                   (double)(~uVar52 & (ulonglong)(0.0 - local_268) | (ulonglong)local_268 & uVar52)
                   * dVar57;
          dVar85 = dVar46 * dVar63 +
                   (double)(~uVar50 & (ulonglong)(0.0 - dStack_260) | (ulonglong)dStack_260 & uVar50
                           ) * dVar57;
          dVar46 = dVar65 * dVar63 + SUB168(auVar102 | auVar69,0) * dVar57;
          dVar49 = dVar42 * dVar63 + SUB168(auVar102 | auVar69,8) * dVar57;
          dVar47 = dVar49 * dVar49 + dVar85 * dVar85 + dVar46 * dVar46 + dVar78 * dVar78;
          dVar58 = __real_3ff0000000000000 / SQRT(dVar47);
          uVar50 = ~-(ulonglong)(dVar47 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
          auVar79._0_8_ = (ulonglong)(dVar78 * dVar58) & uVar50;
          auVar79._8_8_ = (ulonglong)(dVar85 * dVar58) & uVar50;
          auVar23._0_8_ = ~uVar50 & ___xmm_3ff00000000000000000000000000000;
          auVar23._8_8_ = ~uVar50 & _UNK_15061cbc8;
          uVar19 = -(uint)(0.0 <= (float)(local_248 * dVar51 + local_308 * local_178 +
                                         local_2e8 * dVar41 + local_258 * dVar95));
          dVar78 = (double)(float)(~uVar19 & ((uint)(__real_3f800000 - fVar94) ^
                                             __xmm_80000000800000008000000080000000) |
                                  uVar19 & (uint)(__real_3f800000 - fVar94));
          dVar47 = local_258 * dVar78 + dVar95 * dVar63;
          dVar65 = local_308 * dVar78 + local_178 * dVar63;
          dVar42 = local_2e8 * dVar78 + dVar41 * dVar63;
          dVar78 = local_248 * dVar78 + dVar51 * dVar63;
          dVar57 = dVar78 * dVar78 + dVar65 * dVar65 + dVar42 * dVar42 + dVar47 * dVar47;
          uVar59 = ~-(ulonglong)(dVar57 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
          dVar85 = __real_3ff0000000000000 / SQRT(dVar57);
          uVar52 = (ulonglong)(dVar65 * dVar85) & uVar59;
          auVar53._0_8_ = ~uVar59 & ___xmm_3ff00000000000000000000000000000;
          auVar53._8_8_ = ~uVar59 & _UNK_15061cbc8;
          auVar7._8_4_ = (int)uVar52;
          auVar7._0_8_ = (ulonglong)(dVar47 * dVar85) & uVar59;
          auVar7._12_4_ = (int)(uVar52 >> 0x20);
          dVar47 = (double)((ulonglong)(dVar46 * dVar58) & uVar50);
          dVar57 = (local_238 - local_218) * dVar63 + local_218;
          local_2b8 = (dVar55 - dVar3) * dVar63 + dVar3;
          local_298 = (local_228 - dVar66) * dVar63 + dVar66;
          local_1e8 = local_1e8 + (dVar89 - local_1e8) * dVar63;
          local_1d8 = local_1d8 + (dVar5 - local_1d8) * dVar63;
          local_1c8 = local_1c8 + (dVar68 - local_1c8) * dVar63;
          local_158 = local_158 + (dVar39 - local_158) * dVar63;
          local_318 = SUB168(auVar53 | auVar7,0);
          local_288 = (double)((ulonglong)(dVar78 * dVar85) & uVar59);
          local_2f8 = (double)((ulonglong)(dVar42 * dVar85) & uVar59);
          local_328 = SUB168(auVar53 | auVar7,8);
          local_2d8 = local_2d8 + (dVar40 - local_2d8) * dVar63;
          local_338 = local_338 + (dVar21 - local_338) * dVar63;
          local_278 = local_278 + (dVar88 - local_278) * dVar63;
          local_2a8 = (double)((ulonglong)(dVar49 * dVar58) & uVar50);
          local_1f8 = SUB168(auVar23 | auVar79,8);
          local_268 = SUB168(auVar23 | auVar79,0);
          local_1b8 = local_1b8 + (dVar4 - local_1b8) * dVar63;
        }
      }
      *(double *)(param_4 + lVar16 * 8) = local_2e8;
      *(double *)(param_4 + 8 + lVar16 * 8) = local_248;
      *(double *)(param_4 + 0x10 + lVar16 * 8) = local_258;
      *(double *)(param_4 + 0x18 + lVar16 * 8) = local_308;
      *(double *)(param_6 + lVar16 * 8) = dVar41;
      *(double *)(param_6 + 8 + lVar16 * 8) = dVar51;
      *(double *)(param_6 + 0x10 + lVar16 * 8) = dVar95;
      *(double *)(param_6 + 0x18 + lVar16 * 8) = local_178;
      *(double *)(param_5 + lVar17) = dVar66;
      *(double *)(param_5 + 8 + lVar17) = local_218;
      *(double *)(param_5 + 0x10 + lVar17) = dVar3;
      *(double *)(param_7 + lVar17) = local_228;
      *(double *)(param_7 + 8 + lVar17) = local_238;
      *(double *)(param_7 + 0x10 + lVar17) = dVar55;
      if (iVar20 != -1) {
        dVar47 = *(double *)(param_9 + 0x10 + lVar18 * 0x18);
        pdVar12 = (double *)(param_9 + lVar18 * 0x18);
        dVar65 = *pdVar12;
        dVar42 = pdVar12[1];
        uVar19 = -(uint)((double)((ulonglong)dVar47 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                        ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
        uVar77 = -(uint)(0.0 <= _UNK_150aa88b8);
        uVar64 = -(uint)((double)((ulonglong)dVar65 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                        ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
        uVar72 = -(uint)((double)((ulonglong)dVar42 & _UNK_15061cc88) <= _UNK_150aa88b8);
        auVar44._4_4_ = uVar72;
        auVar44._0_4_ = uVar64;
        auVar44._8_4_ = uVar19;
        auVar44._12_4_ = uVar77;
        local_128 = auVar105._0_4_;
        uStack_124 = auVar105._4_4_;
        uStack_120 = auVar105._8_4_;
        uStack_11c = auVar105._12_4_;
        auVar80._0_4_ = ~uVar64 & local_128;
        auVar80._4_4_ = ~uVar72 & uStack_124;
        auVar80._8_4_ = ~uVar19 & uStack_120;
        auVar80._12_4_ = ~uVar77 & uStack_11c;
        auVar90._0_4_ =
             -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar65 &&
                    dVar65 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
        auVar90._4_4_ = -(uint)(_UNK_150b51668 <= dVar42 && dVar42 <= _UNK_150b51658);
        auVar90._8_4_ =
             -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar47 &&
                    dVar47 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
        auVar90._12_4_ = -(uint)(_UNK_150b51668 <= 0.0 && 0.0 <= _UNK_150b51658);
        auVar70._0_4_ = auVar80._0_4_ & auVar90._0_4_;
        auVar70._4_4_ = auVar80._4_4_ & auVar90._4_4_;
        auVar70._8_4_ = auVar80._8_4_ & auVar90._8_4_;
        auVar70._12_4_ = auVar80._12_4_ & auVar90._12_4_;
        iVar56 = movmskps(iVar20 * 3,auVar70);
        if (iVar56 == 0) {
          auVar70 = ZEXT816(0);
LAB_140ac1879:
          dVar46 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                           ((ulonglong)dVar65 & ___xmm_7fe00000000000007fe0000000000000));
          dVar21 = (double)((longlong)_UNK_150b51628 - ((ulonglong)dVar42 & _UNK_150b51678));
          dVar39 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                           ((ulonglong)dVar47 & ___xmm_7fe00000000000007fe0000000000000));
          auVar97._0_4_ = (float)(dVar65 * dVar46);
          auVar97._4_4_ = (float)(dVar42 * dVar21);
          fVar94 = (float)(dVar47 * dVar39);
          auVar27._0_8_ = CONCAT44((float)(_UNK_150b51628 * 0.0),fVar94);
          auVar27._8_8_ = 0;
          auVar97._8_8_ = auVar27._0_8_;
          auVar60 = rcpps(auVar27,auVar97);
          uVar64 = auVar70._0_4_ ^ ___xmm_ffffffffffffffffffffffffffffffff;
          uVar72 = auVar70._4_4_ ^ _UNK_15060db24;
          uVar73 = auVar70._8_4_ ^ _UNK_15060db28;
          uVar74 = auVar70._12_4_ ^ _UNK_15060db2c;
          dVar39 = (double)((_UNK_15076ba38 - fVar94 * auVar60._8_4_) * auVar60._8_4_) * dVar39;
          dVar78 = (double)((_UNK_15076ba3c - (float)(_UNK_150b51628 * 0.0) * auVar60._12_4_) *
                           auVar60._12_4_) * _UNK_150b51628;
          dVar46 = (double)((___xmm_40000000400000004000000040000000 - auVar97._0_4_ * auVar60._0_4_
                            ) * auVar60._0_4_) * dVar46;
          dVar21 = (double)((_UNK_15076ba34 - auVar97._4_4_ * auVar60._4_4_) * auVar60._4_4_) *
                   dVar21;
          dVar46 = (___xmm_40000000000000004000000000000000 - dVar65 * dVar46) * dVar46;
          dVar21 = (_UNK_150689698 - dVar42 * dVar21) * dVar21;
          dVar39 = (___xmm_40000000000000004000000000000000 - dVar47 * dVar39) * dVar39;
          dVar78 = (_UNK_150689698 - dVar78 * 0.0) * dVar78;
          dVar78 = (_UNK_150689698 - dVar78 * 0.0) * dVar78;
          auVar81._0_8_ = (___xmm_40000000000000004000000000000000 - dVar65 * dVar46) * dVar46;
          auVar81._8_8_ = (_UNK_150689698 - dVar42 * dVar21) * dVar21;
          auVar28._4_4_ = uVar64;
          auVar28._0_4_ = uVar64;
          auVar28._8_4_ = uVar72;
          auVar28._12_4_ = uVar72;
          local_198 = blendvps(local_198,auVar81,auVar28);
          auVar29._4_4_ = uVar73;
          auVar29._0_4_ = uVar73;
          auVar29._8_4_ = uVar74;
          auVar29._12_4_ = uVar74;
          auVar8._8_4_ = SUB84(dVar78,0);
          auVar8._0_8_ = (___xmm_40000000000000004000000000000000 - dVar47 * dVar39) * dVar39;
          auVar8._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
          in_XMM4 = blendvps(in_XMM4,auVar8,auVar29);
        }
        else {
          auVar24._0_4_ = (float)dVar65;
          auVar24._4_4_ = (float)dVar42;
          fVar94 = (float)dVar47;
          auVar24._8_4_ = fVar94;
          auVar24._12_4_ = 0;
          auVar60 = rcpps(ZEXT416((uint)fVar94),auVar24);
          dVar21 = (double)((___xmm_40000000400000004000000040000000 - auVar24._0_4_ * auVar60._0_4_
                            ) * auVar60._0_4_);
          dVar39 = (double)((_UNK_15076ba34 - auVar24._4_4_ * auVar60._4_4_) * auVar60._4_4_);
          dVar78 = (double)((_UNK_15076ba38 - fVar94 * auVar60._8_4_) * auVar60._8_4_);
          dVar46 = (double)((_UNK_15076ba3c - auVar60._12_4_ * 0.0) * auVar60._12_4_);
          dVar21 = (___xmm_40000000000000004000000000000000 - dVar65 * dVar21) * dVar21;
          dVar39 = (_UNK_150689698 - dVar42 * dVar39) * dVar39;
          dVar78 = (___xmm_40000000000000004000000000000000 - dVar47 * dVar78) * dVar78;
          dVar46 = (_UNK_150689698 - dVar46 * 0.0) * dVar46;
          auVar25._0_8_ = dVar47 * dVar78;
          auVar25._8_8_ = dVar46 * 0.0;
          auVar96._0_8_ = (___xmm_40000000000000004000000000000000 - auVar25._0_8_) * dVar78;
          auVar96._8_8_ = (_UNK_150689698 - auVar25._8_8_) * dVar46;
          auVar100._0_8_ = (___xmm_40000000000000004000000000000000 - dVar65 * dVar21) * dVar21;
          auVar100._8_8_ = (_UNK_150689698 - dVar42 * dVar39) * dVar39;
          auVar60 = pmovsxdq(auVar25,auVar90);
          local_198 = blendvps(local_198,auVar100,auVar60);
          auVar26._4_4_ = auVar90._8_4_;
          auVar26._0_4_ = auVar90._8_4_;
          auVar26._8_4_ = auVar90._12_4_;
          auVar26._12_4_ = auVar90._12_4_;
          in_XMM4 = blendvps(in_XMM4,auVar96,auVar26);
          uVar14 = movmskps((int)param_9,auVar80);
          if ((char)uVar14 != (char)iVar56) goto LAB_140ac1879;
        }
        lVar18 = lVar18 * 0x20;
        pdVar12 = (double *)(param_8 + 0x10 + lVar18);
        dVar46 = *pdVar12 * ___xmm_3ff0000000000000bff0000000000000;
        dVar21 = pdVar12[1] * _UNK_15076b868;
        dVar47 = *(double *)(param_8 + lVar18);
        dVar65 = *(double *)(param_8 + lVar18);
        pdVar12 = (double *)(param_8 + 8 + lVar18);
        dVar42 = *pdVar12;
        dVar78 = *pdVar12;
        dVar39 = local_328 * dVar46 * ___xmm_bff00000000000003ff0000000000000 +
                 local_2f8 * dVar42 +
                 (local_318 * dVar21 - dVar47 * local_288 * ___xmm_bff00000000000003ff0000000000000)
        ;
        dVar40 = local_318 * dVar46 * _UNK_15076c6f8 +
                 local_288 * dVar78 + (local_328 * dVar21 - dVar65 * local_2f8 * _UNK_15076c6f8);
        dVar42 = local_288 * dVar46 * ___xmm_3ff0000000000000bff0000000000000 +
                 ((dVar21 * local_2f8 - local_328 * dVar47 * ___xmm_bff00000000000003ff0000000000000
                  ) - local_318 * dVar42);
        dVar78 = local_2f8 * dVar46 * _UNK_15076b868 +
                 ((dVar21 * local_288 - local_318 * dVar65 * _UNK_15076c6f8) - local_328 * dVar78);
        dVar47 = dVar78 * dVar78 + dVar40 * dVar40 + dVar42 * dVar42 + dVar39 * dVar39;
        uVar52 = ~-(ulonglong)(dVar47 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        dVar65 = __real_3ff0000000000000 / SQRT(dVar47);
        auVar30._0_8_ = (ulonglong)(dVar39 * dVar65) & uVar52;
        auVar30._8_8_ = (ulonglong)(dVar40 * dVar65) & uVar52;
        dVar47 = (double)((ulonglong)(dVar42 * dVar65) & uVar52);
        local_2a8 = (double)((ulonglong)(dVar78 * dVar65) & uVar52);
        auVar101._0_8_ = ~uVar52 & ___xmm_3ff00000000000000000000000000000;
        auVar101._8_8_ = ~uVar52 & _UNK_15061cbc8;
        local_268 = SUB168(auVar101 | auVar30,0);
        auVar60 = pmovsxdq(auVar30,auVar44);
        auVar48 = blendvps(local_198,ZEXT816(0),auVar60);
        auVar31._4_4_ = uVar19;
        auVar31._0_4_ = uVar19;
        auVar31._8_4_ = uVar77;
        auVar31._12_4_ = uVar77;
        auVar60 = blendvps(in_XMM4,ZEXT816(0),auVar31);
        local_1f8 = SUB168(auVar101 | auVar30,8);
        local_338 = local_298 * auVar48._0_8_;
        local_158 = dVar57 * auVar48._8_8_;
        local_2d8 = auVar60._0_8_ * local_2b8;
        local_278 = 0.0;
      }
      *(double *)(param_8 + lVar16 * 8) = local_2f8;
      *(double *)(param_8 + 8 + lVar16 * 8) = local_288;
      *(double *)(param_8 + 0x10 + lVar16 * 8) = local_318;
      *(double *)(param_8 + 0x18 + lVar16 * 8) = local_328;
      *(double *)(param_9 + lVar17) = local_298;
      *(double *)(param_9 + 8 + lVar17) = dVar57;
      *(double *)(param_9 + 0x10 + lVar17) = local_2b8;
      *(double *)(param_1 + lVar17 * 4) = dVar47;
      *(double *)(param_1 + 8 + lVar17 * 4) = local_2a8;
      *(double *)(param_1 + 0x10 + lVar17 * 4) = local_268;
      *(double *)(param_1 + 0x18 + lVar17 * 4) = local_1f8;
      *(double *)(param_1 + 0x20 + lVar17 * 4) = local_1c8;
      *(double *)(param_1 + 0x28 + lVar17 * 4) = local_1e8;
      *(double *)(param_1 + 0x30 + lVar17 * 4) = local_1b8;
      *(double *)(param_1 + 0x38 + lVar17 * 4) = local_1d8;
      *(double *)(param_1 + 0x40 + lVar17 * 4) = local_338;
      *(double *)(param_1 + 0x48 + lVar17 * 4) = local_158;
      *(double *)(param_1 + 0x50 + lVar17 * 4) = local_2d8;
      *(double *)(param_1 + 0x58 + lVar17 * 4) = local_278;
      iVar13 = iVar13 + 1;
      lVar17 = lVar17 + 0x18;
      lVar16 = lVar16 + 4;
    } while ((ulonglong)param_13 * 0x18 != lVar17);
  }
  return;
}

// BlendPosesPerBoneFilterRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_sse4 @ 140ac2e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_sse4
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10,
               undefined1 (*param_11) [16])

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar11;
  double dVar13;
  double dVar15;
  int iVar16;
  double *pdVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  ulonglong uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  int iVar55;
  double dVar56;
  int iVar58;
  double dVar59;
  undefined1 auVar57 [16];
  double dVar60;
  double local_268;
  double local_258;
  double local_228;
  double local_218;
  double local_208;
  double local_1f8;
  double local_1e8;
  double local_1d8;
  double local_1c8;
  double local_1b8;
  double local_1a8;
  double local_198;
  double local_188;
  double local_178;
  double local_168;
  double dVar10;
  double dVar12;
  double dVar14;
  
  iVar18 = movmskps((int)param_1,*param_11);
  if (iVar18 == 0xf) {
    if (0 < (int)param_10) {
      lVar20 = 0;
      lVar22 = 0x2c;
      iVar18 = 0;
      do {
        iVar55 = *(int *)(param_8 + lVar20 * 2);
        iVar16 = *(int *)(param_9 + lVar20);
        lVar21 = (longlong)iVar16;
        dVar24 = *(double *)(param_2 + -0x58 + lVar22 * 2);
        dVar50 = *(double *)(param_2 + -0x50 + lVar22 * 2);
        dVar30 = *(double *)(param_2 + -0x48 + lVar22 * 2);
        dVar32 = *(double *)(param_2 + -0x40 + lVar22 * 2);
        dVar27 = *(double *)(param_2 + -0x38 + lVar22 * 2);
        dVar28 = *(double *)(param_2 + -0x30 + lVar22 * 2);
        dVar33 = *(double *)(param_2 + -0x28 + lVar22 * 2);
        dVar35 = *(double *)(param_2 + -0x20 + lVar22 * 2);
        dVar4 = *(double *)(param_2 + -0x18 + lVar22 * 2);
        dVar5 = *(double *)(param_2 + -0x10 + lVar22 * 2);
        dVar6 = *(double *)(param_2 + -8 + lVar22 * 2);
        dVar7 = *(double *)(param_2 + lVar22 * 2);
        pdVar17 = (double *)GetTransformFromArray(param_3,iVar55,iVar18);
        dVar39 = *pdVar17;
        dVar40 = pdVar17[1];
        dVar34 = pdVar17[2];
        dVar41 = pdVar17[3];
        if (lVar21 == -1) {
          local_228 = dVar32 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
          dVar29 = dVar30 * 0.0 * _UNK_15076c6f8;
          local_218 = dVar50 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                      dVar30 * 0.0 + dVar24 + local_228;
          local_1f8 = dVar24 * 0.0 * _UNK_15076b868 + dVar32 * 0.0 + dVar50 + dVar29;
          local_228 = ((dVar50 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + dVar30) -
                      dVar24 * 0.0) + local_228;
          dVar29 = ((dVar24 * 0.0 * _UNK_15076c6f8 + dVar32) - dVar50 * 0.0) + dVar29;
          dVar36 = dVar41 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
          local_208 = dVar34 * 0.0 * _UNK_15076c6f8;
          dVar37 = dVar40 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                   dVar34 * 0.0 + dVar39 + dVar36;
          dVar26 = dVar39 * 0.0 * _UNK_15076b868 + dVar41 * 0.0 + dVar40 + local_208;
          dVar36 = ((dVar40 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + dVar34) - dVar39 * 0.0
                   ) + dVar36;
          local_208 = ((dVar39 * 0.0 * _UNK_15076c6f8 + dVar41) - dVar40 * 0.0) + local_208;
        }
        else {
          lVar19 = lVar21 * 0x20;
          pdVar1 = (double *)(param_4 + 0x18 + lVar19);
          dVar26 = *pdVar1;
          dVar29 = *pdVar1;
          dVar37 = *(double *)(param_4 + lVar19);
          dVar36 = *(double *)(param_4 + lVar19);
          pdVar1 = (double *)(param_4 + 8 + lVar19);
          dVar8 = *pdVar1;
          dVar10 = *pdVar1;
          pdVar1 = (double *)(param_4 + 0x10 + lVar19);
          dVar11 = *pdVar1;
          dVar9 = *pdVar1;
          local_218 = dVar50 * dVar11 * ___xmm_3ff0000000000000bff0000000000000 +
                      dVar30 * dVar8 +
                      dVar37 * dVar32 * ___xmm_bff00000000000003ff0000000000000 + dVar24 * dVar26;
          local_1f8 = dVar24 * dVar9 * _UNK_15076b868 +
                      dVar32 * dVar10 + dVar36 * dVar30 * _UNK_15076c6f8 + dVar50 * dVar29;
          local_228 = dVar32 * dVar11 * ___xmm_bff00000000000003ff0000000000000 +
                      ((dVar50 * dVar37 * ___xmm_bff00000000000003ff0000000000000 + dVar26 * dVar30)
                      - dVar24 * dVar8);
          dVar29 = dVar30 * dVar9 * _UNK_15076c6f8 +
                   ((dVar24 * dVar36 * _UNK_15076c6f8 + dVar29 * dVar32) - dVar50 * dVar10);
          pdVar1 = (double *)(param_5 + 0x18 + lVar19);
          dVar36 = *pdVar1;
          dVar8 = *pdVar1;
          dVar9 = *(double *)(param_5 + lVar19);
          dVar10 = *(double *)(param_5 + lVar19);
          pdVar1 = (double *)(param_5 + 8 + lVar19);
          dVar11 = *pdVar1;
          dVar12 = *pdVar1;
          pdVar1 = (double *)(param_5 + 0x10 + lVar19);
          dVar14 = *pdVar1;
          dVar13 = *pdVar1;
          dVar37 = dVar40 * dVar14 * ___xmm_3ff0000000000000bff0000000000000 +
                   dVar34 * dVar11 +
                   dVar9 * dVar41 * ___xmm_bff00000000000003ff0000000000000 + dVar39 * dVar36;
          dVar26 = dVar39 * dVar13 * _UNK_15076b868 +
                   dVar41 * dVar12 + dVar10 * dVar34 * _UNK_15076c6f8 + dVar40 * dVar8;
          dVar36 = dVar41 * dVar14 * ___xmm_bff00000000000003ff0000000000000 +
                   ((dVar40 * dVar9 * ___xmm_bff00000000000003ff0000000000000 + dVar36 * dVar34) -
                   dVar39 * dVar11);
          local_208 = dVar34 * dVar13 * _UNK_15076c6f8 +
                      ((dVar39 * dVar10 * _UNK_15076c6f8 + dVar8 * dVar41) - dVar40 * dVar12);
        }
        dVar8 = pdVar17[4];
        dVar10 = pdVar17[5];
        dVar9 = pdVar17[6];
        dVar11 = pdVar17[7];
        dVar12 = pdVar17[8];
        dVar13 = pdVar17[9];
        dVar14 = pdVar17[10];
        dVar15 = pdVar17[0xb];
        fVar2 = *(float *)(param_8 + 4 + lVar20 * 2);
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
        if (__real_3f800000 <= fVar2) {
          fVar2 = __real_3f800000;
        }
        fVar3 = *(float *)(param_7 + (longlong)iVar55 * 4);
        if (fVar3 <= fVar2) {
          fVar3 = fVar2;
        }
        *(float *)(param_7 + (longlong)iVar55 * 4) = fVar3;
        dVar56 = local_1f8;
        dVar59 = local_228;
        dVar54 = dVar29;
        dVar45 = dVar27;
        dVar51 = local_218;
        dVar44 = dVar24;
        local_258 = dVar33;
        local_1b8 = dVar28;
        local_1a8 = dVar35;
        local_198 = dVar7;
        local_188 = dVar5;
        local_178 = dVar6;
        local_168 = dVar4;
        local_1c8 = dVar32;
        local_1d8 = dVar50;
        local_268 = dVar30;
        if ((__real_3727c5ac < fVar2) &&
           (dVar56 = dVar26, dVar59 = dVar36, dVar54 = local_208, dVar45 = dVar8, dVar51 = dVar37,
           dVar44 = dVar39, local_258 = dVar9, local_1b8 = dVar10, local_1a8 = dVar11,
           local_198 = dVar15, local_188 = dVar13, local_178 = dVar14, local_168 = dVar12,
           local_1c8 = dVar41, local_1d8 = dVar40, local_268 = dVar34, fVar2 < __real_3f7fff58)) {
          dVar56 = dVar24 * dVar39 + dVar30 * dVar34;
          dVar59 = dVar50 * dVar40 + dVar32 * dVar41;
          iVar55 = -(uint)(0.0 <= dVar59 + dVar56);
          iVar58 = -(uint)(0.0 <= dVar56 + dVar59);
          auVar57._4_4_ = iVar55;
          auVar57._0_4_ = iVar55;
          auVar57._8_4_ = iVar58;
          auVar57._12_4_ = iVar58;
          auVar57 = blendvps(ZEXT816(0),___xmm_ffffffffffffffffffffffffffffffff,auVar57);
          dVar42 = (double)fVar2;
          dVar56 = __real_3ff0000000000000 - dVar42;
          uVar31 = auVar57._0_8_;
          auVar52._0_4_ = ~auVar57._0_4_ & SUB84(0.0 - dVar24,0);
          uVar46 = auVar57._8_8_;
          auVar52._4_4_ = ~auVar57._4_4_ & (uint)((ulonglong)(0.0 - dVar24) >> 0x20);
          auVar52._8_4_ = ~auVar57._8_4_ & SUB84(0.0 - dVar50,0);
          auVar52._12_4_ = ~auVar57._12_4_ & (uint)((ulonglong)(0.0 - dVar50) >> 0x20);
          auVar48._0_8_ = (ulonglong)dVar24 & uVar31;
          auVar48._8_8_ = (ulonglong)dVar50 & uVar46;
          dVar50 = dVar34 * dVar42 +
                   (double)(~uVar31 & (ulonglong)(0.0 - dVar30) | (ulonglong)dVar30 & uVar31) *
                   dVar56;
          dVar30 = dVar41 * dVar42 +
                   (double)(~uVar46 & (ulonglong)(0.0 - dVar32) | (ulonglong)dVar32 & uVar46) *
                   dVar56;
          dVar41 = dVar39 * dVar42 + SUB168(auVar48 | auVar52,0) * dVar56;
          dVar60 = dVar40 * dVar42 + SUB168(auVar48 | auVar52,8) * dVar56;
          dVar24 = dVar60 * dVar60 + dVar30 * dVar30 + dVar41 * dVar41 + dVar50 * dVar50;
          dVar40 = __real_3ff0000000000000 / SQRT(dVar24);
          uVar31 = ~-(ulonglong)(dVar24 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
          auVar53._0_8_ = (ulonglong)(dVar50 * dVar40) & uVar31;
          auVar53._8_8_ = (ulonglong)(dVar30 * dVar40) & uVar31;
          auVar38._0_8_ = ~uVar31 & ___xmm_3ff00000000000000000000000000000;
          auVar38._8_8_ = ~uVar31 & _UNK_15061cbc8;
          uVar23 = -(uint)(0.0 <= (float)(dVar26 * local_1f8 + local_208 * dVar29 +
                                         dVar37 * local_218 + dVar36 * local_228));
          dVar24 = (double)(float)(~uVar23 & ((uint)(__real_3f800000 - fVar2) ^
                                             __xmm_80000000800000008000000080000000) |
                                  uVar23 & (uint)(__real_3f800000 - fVar2));
          dVar32 = local_228 * dVar24 + dVar36 * dVar42;
          dVar39 = dVar29 * dVar24 + local_208 * dVar42;
          dVar50 = local_218 * dVar24 + dVar37 * dVar42;
          dVar30 = local_1f8 * dVar24 + dVar26 * dVar42;
          dVar24 = dVar30 * dVar30 + dVar39 * dVar39 + dVar50 * dVar50 + dVar32 * dVar32;
          dVar34 = __real_3ff0000000000000 / SQRT(dVar24);
          uVar46 = ~-(ulonglong)(dVar24 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
          dVar56 = (double)((ulonglong)(dVar30 * dVar34) & uVar46);
          dVar59 = (double)(~uVar46 & ___xmm_3ff00000000000000000000000000000 |
                           (ulonglong)(dVar32 * dVar34) & uVar46);
          dVar54 = (double)(~uVar46 & _UNK_15061cbc8 | (ulonglong)(dVar39 * dVar34) & uVar46);
          dVar45 = dVar27 + (dVar8 - dVar27) * dVar42;
          dVar51 = (double)((ulonglong)(dVar50 * dVar34) & uVar46);
          dVar44 = (double)((ulonglong)(dVar41 * dVar40) & uVar31);
          local_258 = dVar33 + (dVar9 - dVar33) * dVar42;
          local_1b8 = dVar28 + (dVar10 - dVar28) * dVar42;
          local_1a8 = dVar35 + (dVar11 - dVar35) * dVar42;
          local_198 = dVar7 + (dVar15 - dVar7) * dVar42;
          local_188 = dVar5 + (dVar13 - dVar5) * dVar42;
          local_178 = dVar6 + (dVar14 - dVar6) * dVar42;
          local_168 = dVar4 + (dVar12 - dVar4) * dVar42;
          local_1c8 = SUB168(auVar38 | auVar53,8);
          local_1d8 = (double)((ulonglong)(dVar60 * dVar40) & uVar31);
          local_268 = SUB168(auVar38 | auVar53,0);
        }
        *(double *)(param_4 + lVar20 * 8) = local_218;
        *(double *)(param_4 + 8 + lVar20 * 8) = local_1f8;
        *(double *)(param_4 + 0x10 + lVar20 * 8) = local_228;
        *(double *)(param_4 + 0x18 + lVar20 * 8) = dVar29;
        *(double *)(param_5 + lVar20 * 8) = dVar37;
        *(double *)(param_5 + 8 + lVar20 * 8) = dVar26;
        *(double *)(param_5 + 0x10 + lVar20 * 8) = dVar36;
        *(double *)(param_5 + 0x18 + lVar20 * 8) = local_208;
        if (iVar16 != -1) {
          lVar21 = lVar21 * 0x20;
          pdVar17 = (double *)(param_6 + 0x10 + lVar21);
          dVar33 = *pdVar17 * ___xmm_3ff0000000000000bff0000000000000;
          dVar35 = pdVar17[1] * _UNK_15076b868;
          dVar24 = *(double *)(param_6 + lVar21);
          dVar50 = *(double *)(param_6 + lVar21);
          pdVar17 = (double *)(param_6 + 8 + lVar21);
          dVar32 = *pdVar17;
          dVar30 = *pdVar17;
          dVar27 = dVar54 * dVar33 * ___xmm_bff00000000000003ff0000000000000 +
                   dVar51 * dVar32 +
                   (dVar59 * dVar35 - dVar24 * dVar56 * ___xmm_bff00000000000003ff0000000000000);
          dVar28 = dVar59 * dVar33 * _UNK_15076c6f8 +
                   dVar56 * dVar30 + (dVar54 * dVar35 - dVar50 * dVar51 * _UNK_15076c6f8);
          dVar32 = dVar56 * dVar33 * ___xmm_3ff0000000000000bff0000000000000 +
                   ((dVar35 * dVar51 - dVar54 * dVar24 * ___xmm_bff00000000000003ff0000000000000) -
                   dVar59 * dVar32);
          dVar30 = dVar51 * dVar33 * _UNK_15076b868 +
                   ((dVar35 * dVar56 - dVar59 * dVar50 * _UNK_15076c6f8) - dVar54 * dVar30);
          dVar24 = dVar30 * dVar30 + dVar28 * dVar28 + dVar32 * dVar32 + dVar27 * dVar27;
          dVar50 = __real_3ff0000000000000 / SQRT(dVar24);
          uVar31 = ~-(ulonglong)(dVar24 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
          dVar44 = (double)((ulonglong)(dVar32 * dVar50) & uVar31);
          local_1d8 = (double)((ulonglong)(dVar30 * dVar50) & uVar31);
          local_268 = (double)(~uVar31 & ___xmm_3ff00000000000000000000000000000 |
                              (ulonglong)(dVar27 * dVar50) & uVar31);
          local_1c8 = (double)(~uVar31 & _UNK_15061cbc8 | (ulonglong)(dVar28 * dVar50) & uVar31);
        }
        *(double *)(param_6 + lVar20 * 8) = dVar51;
        *(double *)(param_6 + 8 + lVar20 * 8) = dVar56;
        *(double *)(param_6 + 0x10 + lVar20 * 8) = dVar59;
        *(double *)(param_6 + 0x18 + lVar20 * 8) = dVar54;
        *(double *)(param_1 + -0x58 + lVar22 * 2) = dVar44;
        *(double *)(param_1 + -0x50 + lVar22 * 2) = local_1d8;
        *(double *)(param_1 + -0x48 + lVar22 * 2) = local_268;
        *(double *)(param_1 + -0x40 + lVar22 * 2) = local_1c8;
        *(double *)(param_1 + -0x38 + lVar22 * 2) = dVar45;
        *(double *)(param_1 + -0x30 + lVar22 * 2) = local_1b8;
        *(double *)(param_1 + -0x28 + lVar22 * 2) = local_258;
        *(double *)(param_1 + -0x20 + lVar22 * 2) = local_1a8;
        *(double *)(param_1 + -0x18 + lVar22 * 2) = local_168;
        *(double *)(param_1 + -0x10 + lVar22 * 2) = local_188;
        *(double *)(param_1 + -8 + lVar22 * 2) = local_178;
        *(double *)(param_1 + lVar22 * 2) = local_198;
        iVar18 = iVar18 + 1;
        lVar22 = lVar22 + 0x30;
        lVar20 = lVar20 + 4;
      } while ((ulonglong)param_10 << 2 != lVar20);
    }
  }
  else if (0 < (int)param_10) {
    lVar20 = 0;
    lVar22 = 0x2c;
    iVar18 = 0;
    do {
      iVar55 = *(int *)(param_8 + lVar20 * 2);
      iVar16 = *(int *)(param_9 + lVar20);
      lVar21 = (longlong)iVar16;
      dVar24 = *(double *)(param_2 + -0x58 + lVar22 * 2);
      dVar50 = *(double *)(param_2 + -0x50 + lVar22 * 2);
      dVar30 = *(double *)(param_2 + -0x48 + lVar22 * 2);
      dVar32 = *(double *)(param_2 + -0x40 + lVar22 * 2);
      dVar27 = *(double *)(param_2 + -0x38 + lVar22 * 2);
      dVar28 = *(double *)(param_2 + -0x30 + lVar22 * 2);
      dVar33 = *(double *)(param_2 + -0x28 + lVar22 * 2);
      dVar35 = *(double *)(param_2 + -0x20 + lVar22 * 2);
      dVar4 = *(double *)(param_2 + -0x18 + lVar22 * 2);
      dVar5 = *(double *)(param_2 + -0x10 + lVar22 * 2);
      dVar6 = *(double *)(param_2 + -8 + lVar22 * 2);
      dVar7 = *(double *)(param_2 + lVar22 * 2);
      pdVar17 = (double *)GetTransformFromArray(param_3,iVar55,iVar18);
      dVar39 = *pdVar17;
      dVar40 = pdVar17[1];
      dVar34 = pdVar17[2];
      dVar41 = pdVar17[3];
      if (lVar21 == -1) {
        dVar29 = dVar32 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        local_228 = dVar30 * 0.0 * _UNK_15076c6f8;
        dVar26 = dVar50 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar30 * 0.0 + dVar24 + dVar29;
        local_218 = dVar24 * 0.0 * _UNK_15076b868 + dVar32 * 0.0 + dVar50 + local_228;
        dVar29 = ((dVar50 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + dVar30) - dVar24 * 0.0)
                 + dVar29;
        local_228 = ((dVar24 * 0.0 * _UNK_15076c6f8 + dVar32) - dVar50 * 0.0) + local_228;
        dVar37 = dVar41 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        local_1f8 = dVar34 * 0.0 * _UNK_15076c6f8;
        dVar36 = dVar40 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar34 * 0.0 + dVar39 + dVar37;
        local_1e8 = dVar39 * 0.0 * _UNK_15076b868 + dVar41 * 0.0 + dVar40 + local_1f8;
        dVar37 = ((dVar40 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + dVar34) - dVar39 * 0.0)
                 + dVar37;
        local_1f8 = ((dVar39 * 0.0 * _UNK_15076c6f8 + dVar41) - dVar40 * 0.0) + local_1f8;
      }
      else {
        lVar19 = lVar21 * 0x20;
        pdVar1 = (double *)(param_4 + 0x18 + lVar19);
        dVar29 = *pdVar1;
        dVar36 = *pdVar1;
        dVar8 = *(double *)(param_4 + lVar19);
        dVar37 = *(double *)(param_4 + lVar19);
        pdVar1 = (double *)(param_4 + 8 + lVar19);
        dVar9 = *pdVar1;
        dVar10 = *pdVar1;
        pdVar1 = (double *)(param_4 + 0x10 + lVar19);
        dVar11 = *pdVar1;
        dVar12 = *pdVar1;
        dVar26 = dVar50 * dVar11 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar30 * dVar9 +
                 dVar8 * dVar32 * ___xmm_bff00000000000003ff0000000000000 + dVar24 * dVar29;
        local_218 = dVar24 * dVar12 * _UNK_15076b868 +
                    dVar32 * dVar10 + dVar37 * dVar30 * _UNK_15076c6f8 + dVar50 * dVar36;
        dVar29 = dVar32 * dVar11 * ___xmm_bff00000000000003ff0000000000000 +
                 ((dVar50 * dVar8 * ___xmm_bff00000000000003ff0000000000000 + dVar29 * dVar30) -
                 dVar24 * dVar9);
        local_228 = dVar30 * dVar12 * _UNK_15076c6f8 +
                    ((dVar24 * dVar37 * _UNK_15076c6f8 + dVar36 * dVar32) - dVar50 * dVar10);
        pdVar1 = (double *)(param_5 + 0x18 + lVar19);
        dVar37 = *pdVar1;
        dVar8 = *pdVar1;
        dVar10 = *(double *)(param_5 + lVar19);
        dVar9 = *(double *)(param_5 + lVar19);
        pdVar1 = (double *)(param_5 + 8 + lVar19);
        dVar11 = *pdVar1;
        dVar12 = *pdVar1;
        pdVar1 = (double *)(param_5 + 0x10 + lVar19);
        dVar13 = *pdVar1;
        dVar14 = *pdVar1;
        dVar36 = dVar40 * dVar13 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar34 * dVar11 +
                 dVar10 * dVar41 * ___xmm_bff00000000000003ff0000000000000 + dVar39 * dVar37;
        local_1e8 = dVar39 * dVar14 * _UNK_15076b868 +
                    dVar41 * dVar12 + dVar9 * dVar34 * _UNK_15076c6f8 + dVar40 * dVar8;
        dVar37 = dVar41 * dVar13 * ___xmm_bff00000000000003ff0000000000000 +
                 ((dVar40 * dVar10 * ___xmm_bff00000000000003ff0000000000000 + dVar37 * dVar34) -
                 dVar39 * dVar11);
        local_1f8 = dVar34 * dVar14 * _UNK_15076c6f8 +
                    ((dVar39 * dVar9 * _UNK_15076c6f8 + dVar8 * dVar41) - dVar40 * dVar12);
      }
      dVar8 = pdVar17[4];
      dVar10 = pdVar17[5];
      dVar9 = pdVar17[6];
      dVar11 = pdVar17[7];
      dVar12 = pdVar17[8];
      dVar13 = pdVar17[9];
      dVar14 = pdVar17[10];
      dVar15 = pdVar17[0xb];
      fVar2 = *(float *)(param_8 + 4 + lVar20 * 2);
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      if (__real_3f800000 <= fVar2) {
        fVar2 = __real_3f800000;
      }
      fVar3 = *(float *)(param_7 + (longlong)iVar55 * 4);
      if (fVar3 <= fVar2) {
        fVar3 = fVar2;
      }
      *(float *)(param_7 + (longlong)iVar55 * 4) = fVar3;
      dVar56 = dVar26;
      dVar59 = local_218;
      dVar54 = dVar29;
      dVar45 = local_228;
      dVar51 = dVar24;
      dVar44 = dVar50;
      dVar42 = dVar30;
      dVar60 = dVar32;
      local_1b8 = dVar5;
      local_1a8 = dVar7;
      local_198 = dVar27;
      local_188 = dVar33;
      local_178 = dVar4;
      local_168 = dVar6;
      local_1d8 = dVar28;
      local_1c8 = dVar35;
      if ((__real_3727c5ac < fVar2) &&
         (dVar56 = dVar36, dVar59 = local_1e8, dVar54 = dVar37, dVar45 = local_1f8, dVar51 = dVar39,
         dVar44 = dVar40, dVar42 = dVar34, dVar60 = dVar41, local_1b8 = dVar13, local_1a8 = dVar15,
         local_198 = dVar8, local_188 = dVar9, local_178 = dVar12, local_168 = dVar14,
         local_1d8 = dVar10, local_1c8 = dVar11, fVar2 < __real_3f7fff58)) {
        dVar56 = dVar24 * dVar39 + dVar30 * dVar34;
        dVar59 = dVar50 * dVar40 + dVar32 * dVar41;
        iVar55 = -(uint)(0.0 <= dVar59 + dVar56);
        iVar58 = -(uint)(0.0 <= dVar56 + dVar59);
        auVar25._4_4_ = iVar55;
        auVar25._0_4_ = iVar55;
        auVar25._8_4_ = iVar58;
        auVar25._12_4_ = iVar58;
        auVar57 = blendvps(ZEXT816(0),___xmm_ffffffffffffffffffffffffffffffff,auVar25);
        dVar49 = (double)fVar2;
        dVar56 = __real_3ff0000000000000 - dVar49;
        uVar31 = auVar57._0_8_;
        auVar43._0_4_ = ~auVar57._0_4_ & SUB84(0.0 - dVar24,0);
        uVar46 = auVar57._8_8_;
        auVar43._4_4_ = ~auVar57._4_4_ & (uint)((ulonglong)(0.0 - dVar24) >> 0x20);
        auVar43._8_4_ = ~auVar57._8_4_ & SUB84(0.0 - dVar50,0);
        auVar43._12_4_ = ~auVar57._12_4_ & (uint)((ulonglong)(0.0 - dVar50) >> 0x20);
        auVar47._0_8_ = (ulonglong)dVar24 & uVar31;
        auVar47._8_8_ = (ulonglong)dVar50 & uVar46;
        dVar30 = dVar34 * dVar49 +
                 (double)(~uVar31 & (ulonglong)(0.0 - dVar30) | (ulonglong)dVar30 & uVar31) * dVar56
        ;
        dVar34 = dVar41 * dVar49 +
                 (double)(~uVar46 & (ulonglong)(0.0 - dVar32) | (ulonglong)dVar32 & uVar46) * dVar56
        ;
        dVar39 = dVar39 * dVar49 + SUB168(auVar47 | auVar43,0) * dVar56;
        dVar44 = dVar40 * dVar49 + SUB168(auVar47 | auVar43,8) * dVar56;
        dVar24 = dVar44 * dVar44 + dVar34 * dVar34 + dVar39 * dVar39 + dVar30 * dVar30;
        dVar40 = __real_3ff0000000000000 / SQRT(dVar24);
        uVar31 = ~-(ulonglong)(dVar24 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        uVar23 = -(uint)(0.0 <= (float)(local_218 * local_1e8 + local_228 * local_1f8 +
                                       dVar26 * dVar36 + dVar29 * dVar37));
        dVar50 = (double)(float)(~uVar23 & ((uint)(__real_3f800000 - fVar2) ^
                                           __xmm_80000000800000008000000080000000) |
                                uVar23 & (uint)(__real_3f800000 - fVar2));
        dVar41 = dVar29 * dVar50 + dVar37 * dVar49;
        dVar45 = local_228 * dVar50 + local_1f8 * dVar49;
        dVar24 = dVar26 * dVar50 + dVar36 * dVar49;
        dVar50 = local_218 * dVar50 + local_1e8 * dVar49;
        dVar32 = dVar50 * dVar50 + dVar45 * dVar45 + dVar24 * dVar24 + dVar41 * dVar41;
        dVar51 = __real_3ff0000000000000 / SQRT(dVar32);
        uVar46 = ~-(ulonglong)(dVar32 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        dVar56 = (double)((ulonglong)(dVar24 * dVar51) & uVar46);
        dVar59 = (double)((ulonglong)(dVar50 * dVar51) & uVar46);
        dVar54 = (double)(~uVar46 & ___xmm_3ff00000000000000000000000000000 |
                         (ulonglong)(dVar41 * dVar51) & uVar46);
        dVar45 = (double)(~uVar46 & _UNK_15061cbc8 | (ulonglong)(dVar45 * dVar51) & uVar46);
        dVar51 = (double)((ulonglong)(dVar39 * dVar40) & uVar31);
        dVar44 = (double)((ulonglong)(dVar44 * dVar40) & uVar31);
        dVar42 = (double)(~uVar31 & ___xmm_3ff00000000000000000000000000000 |
                         (ulonglong)(dVar30 * dVar40) & uVar31);
        dVar60 = (double)(~uVar31 & _UNK_15061cbc8 | (ulonglong)(dVar34 * dVar40) & uVar31);
        local_1b8 = dVar5 + (dVar13 - dVar5) * dVar49;
        local_1a8 = dVar7 + (dVar15 - dVar7) * dVar49;
        local_198 = dVar27 + (dVar8 - dVar27) * dVar49;
        local_188 = dVar33 + (dVar9 - dVar33) * dVar49;
        local_178 = dVar4 + (dVar12 - dVar4) * dVar49;
        local_168 = dVar6 + (dVar14 - dVar6) * dVar49;
        local_1d8 = dVar28 + (dVar10 - dVar28) * dVar49;
        local_1c8 = dVar35 + (dVar11 - dVar35) * dVar49;
      }
      *(double *)(param_4 + lVar20 * 8) = dVar26;
      *(double *)(param_4 + 8 + lVar20 * 8) = local_218;
      *(double *)(param_4 + 0x10 + lVar20 * 8) = dVar29;
      *(double *)(param_4 + 0x18 + lVar20 * 8) = local_228;
      *(double *)(param_5 + lVar20 * 8) = dVar36;
      *(double *)(param_5 + 8 + lVar20 * 8) = local_1e8;
      *(double *)(param_5 + 0x10 + lVar20 * 8) = dVar37;
      *(double *)(param_5 + 0x18 + lVar20 * 8) = local_1f8;
      if (iVar16 != -1) {
        lVar21 = lVar21 * 0x20;
        pdVar17 = (double *)(param_6 + 0x10 + lVar21);
        dVar33 = *pdVar17 * ___xmm_3ff0000000000000bff0000000000000;
        dVar35 = pdVar17[1] * _UNK_15076b868;
        dVar24 = *(double *)(param_6 + lVar21);
        dVar50 = *(double *)(param_6 + lVar21);
        pdVar17 = (double *)(param_6 + 8 + lVar21);
        dVar32 = *pdVar17;
        dVar30 = *pdVar17;
        dVar27 = dVar45 * dVar33 * ___xmm_bff00000000000003ff0000000000000 +
                 dVar56 * dVar32 +
                 (dVar54 * dVar35 - dVar24 * dVar59 * ___xmm_bff00000000000003ff0000000000000);
        dVar28 = dVar54 * dVar33 * _UNK_15076c6f8 +
                 dVar59 * dVar30 + (dVar45 * dVar35 - dVar50 * dVar56 * _UNK_15076c6f8);
        dVar32 = dVar59 * dVar33 * ___xmm_3ff0000000000000bff0000000000000 +
                 ((dVar35 * dVar56 - dVar45 * dVar24 * ___xmm_bff00000000000003ff0000000000000) -
                 dVar54 * dVar32);
        dVar30 = dVar56 * dVar33 * _UNK_15076b868 +
                 ((dVar35 * dVar59 - dVar54 * dVar50 * _UNK_15076c6f8) - dVar45 * dVar30);
        dVar24 = dVar30 * dVar30 + dVar28 * dVar28 + dVar32 * dVar32 + dVar27 * dVar27;
        dVar50 = __real_3ff0000000000000 / SQRT(dVar24);
        uVar31 = ~-(ulonglong)(dVar24 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        dVar51 = (double)((ulonglong)(dVar32 * dVar50) & uVar31);
        dVar44 = (double)((ulonglong)(dVar30 * dVar50) & uVar31);
        dVar42 = (double)(~uVar31 & ___xmm_3ff00000000000000000000000000000 |
                         (ulonglong)(dVar27 * dVar50) & uVar31);
        dVar60 = (double)(~uVar31 & _UNK_15061cbc8 | (ulonglong)(dVar28 * dVar50) & uVar31);
      }
      *(double *)(param_6 + lVar20 * 8) = dVar56;
      *(double *)(param_6 + 8 + lVar20 * 8) = dVar59;
      *(double *)(param_6 + 0x10 + lVar20 * 8) = dVar54;
      *(double *)(param_6 + 0x18 + lVar20 * 8) = dVar45;
      *(double *)(param_1 + -0x58 + lVar22 * 2) = dVar51;
      *(double *)(param_1 + -0x50 + lVar22 * 2) = dVar44;
      *(double *)(param_1 + -0x48 + lVar22 * 2) = dVar42;
      *(double *)(param_1 + -0x40 + lVar22 * 2) = dVar60;
      *(double *)(param_1 + -0x38 + lVar22 * 2) = local_198;
      *(double *)(param_1 + -0x30 + lVar22 * 2) = local_1d8;
      *(double *)(param_1 + -0x28 + lVar22 * 2) = local_188;
      *(double *)(param_1 + -0x20 + lVar22 * 2) = local_1c8;
      *(double *)(param_1 + -0x18 + lVar22 * 2) = local_178;
      *(double *)(param_1 + -0x10 + lVar22 * 2) = local_1b8;
      *(double *)(param_1 + -8 + lVar22 * 2) = local_168;
      *(double *)(param_1 + lVar22 * 2) = local_1a8;
      iVar18 = iVar18 + 1;
      lVar22 = lVar22 + 0x30;
      lVar20 = lVar20 + 4;
    } while ((ulonglong)param_10 << 2 != lVar20);
  }
  return;
}

// BlendPosesPerBoneFilterScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_sse4 @ 140ac47b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_sse4
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10,
               undefined1 (*param_11) [16])

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double *pdVar17;
  int iVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar40;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  double dVar45;
  undefined1 auVar43 [16];
  double dVar42;
  undefined1 auVar44 [16];
  double dVar46;
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  uint uVar50;
  uint uVar54;
  double dVar51;
  uint uVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar56;
  uint uVar57;
  double dVar58;
  ulonglong uVar59;
  double dVar60;
  uint uVar64;
  double dVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar66;
  int iVar74;
  double dVar75;
  undefined1 auVar69 [16];
  ulonglong uVar67;
  undefined1 auVar70 [16];
  double dVar68;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar76;
  double dVar81;
  undefined1 auVar78 [16];
  double dVar77;
  undefined1 auVar79 [16];
  double dVar82;
  undefined1 auVar80 [16];
  float fVar83;
  double dVar84;
  double dVar91;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar85;
  double dVar86;
  double dVar92;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  double dVar93;
  double dVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar97;
  double dVar98;
  undefined1 unaff_XMM12 [16];
  float fVar99;
  double dVar100;
  undefined1 unaff_XMM14 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  double dVar103;
  undefined1 auVar104 [16];
  double local_240;
  double local_238;
  double local_228;
  double dStack_220;
  double local_1f8;
  double local_1e8;
  double local_1d8;
  double local_1c8;
  double local_1b8;
  double local_1a8;
  double local_198;
  undefined8 local_188;
  undefined1 local_168 [16];
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  
  auVar79 = *param_11;
  iVar18 = movmskps((int)param_1,auVar79);
  if (iVar18 == 0xf) {
    if (0 < (int)param_10) {
      lVar20 = 0;
      lVar22 = 0;
      do {
        iVar18 = *(int *)(param_8 + lVar22 * 8);
        iVar23 = *(int *)(param_9 + lVar22 * 4);
        lVar21 = (longlong)iVar23;
        dVar41 = *(double *)(param_2 + lVar20 * 4);
        dVar45 = *(double *)(param_2 + 8 + lVar20 * 4);
        dVar48 = *(double *)(param_2 + 0x10 + lVar20 * 4);
        dVar85 = *(double *)(param_2 + 0x18 + lVar20 * 4);
        dVar92 = *(double *)(param_2 + 0x20 + lVar20 * 4);
        dVar93 = *(double *)(param_2 + 0x28 + lVar20 * 4);
        dVar82 = *(double *)(param_2 + 0x30 + lVar20 * 4);
        dVar60 = *(double *)(param_2 + 0x38 + lVar20 * 4);
        dVar84 = *(double *)(param_2 + 0x40 + lVar20 * 4);
        dVar91 = *(double *)(param_2 + 0x48 + lVar20 * 4);
        dVar24 = *(double *)(param_2 + 0x50 + lVar20 * 4);
        dVar40 = *(double *)(param_2 + 0x58 + lVar20 * 4);
        pdVar17 = (double *)GetTransformFromArray(param_3,iVar18,(int)lVar22);
        dVar46 = pdVar17[8];
        dVar58 = pdVar17[9];
        dVar65 = pdVar17[10];
        dVar42 = dVar84;
        dVar103 = dVar58;
        local_240 = dVar24;
        local_188 = dVar65;
        dVar68 = dVar91;
        dVar1 = dVar46;
        if (lVar21 != -1) {
          lVar14 = lVar21 * 0x18;
          dVar42 = dVar84 * *(double *)(param_4 + lVar14);
          dVar103 = dVar58 * ((double *)(param_5 + lVar14))[1];
          local_240 = *(double *)(param_4 + 0x10 + lVar14) * dVar24;
          local_188 = *(double *)(param_5 + 0x10 + lVar14) * dVar65;
          dVar68 = dVar91 * ((double *)(param_4 + lVar14))[1];
          dVar1 = dVar46 * *(double *)(param_5 + lVar14);
        }
        dVar2 = *pdVar17;
        dVar3 = pdVar17[1];
        dVar100 = pdVar17[2];
        dVar66 = pdVar17[3];
        dVar75 = pdVar17[4];
        dVar4 = pdVar17[5];
        dVar5 = pdVar17[6];
        dVar6 = pdVar17[7];
        dVar7 = pdVar17[0xb];
        fVar83 = *(float *)(param_8 + 4 + lVar22 * 8);
        if (fVar83 <= __xmm_00000000000000000000000000000000) {
          fVar83 = __xmm_00000000000000000000000000000000;
        }
        if (__real_3f800000 <= fVar83) {
          fVar83 = __real_3f800000;
        }
        fVar99 = *(float *)(param_7 + (longlong)iVar18 * 4);
        if (fVar99 <= fVar83) {
          fVar99 = fVar83;
        }
        *(float *)(param_7 + (longlong)iVar18 * 4) = fVar99;
        dVar76 = dVar84;
        dVar51 = dVar42;
        dVar86 = dVar68;
        dVar77 = local_240;
        dVar94 = dVar24;
        dVar81 = dVar91;
        local_1b8 = dVar92;
        local_228 = dVar41;
        local_1d8 = dVar48;
        local_238 = dVar85;
        local_1f8 = dVar93;
        local_1c8 = dVar82;
        local_1e8 = dVar60;
        dVar98 = dVar45;
        local_198 = dVar40;
        if ((__real_3727c5ac < fVar83) &&
           (dVar76 = dVar46, dVar51 = dVar1, dVar86 = dVar103, dVar77 = local_188, dVar94 = dVar65,
           dVar81 = dVar58, local_1b8 = dVar75, local_228 = dVar2, local_1d8 = dVar100,
           local_238 = dVar66, local_1f8 = dVar4, local_1c8 = dVar5, local_1e8 = dVar6,
           dVar98 = dVar3, local_198 = dVar7, fVar83 < __real_3f7fff58)) {
          dVar76 = dVar41 * dVar2 + dVar48 * dVar100;
          dVar81 = dVar45 * dVar3 + dVar85 * dVar66;
          iVar18 = -(uint)(0.0 <= dVar81 + dVar76);
          iVar74 = -(uint)(0.0 <= dVar76 + dVar81);
          auVar32._4_4_ = iVar18;
          auVar32._0_4_ = iVar18;
          auVar32._8_4_ = iVar74;
          auVar32._12_4_ = iVar74;
          auVar96._4_4_ = _UNK_15060db24;
          auVar96._0_4_ = ___xmm_ffffffffffffffffffffffffffffffff;
          auVar96._8_4_ = _UNK_15060db28;
          auVar96._12_4_ = _UNK_15060db2c;
          auVar69 = blendvps(ZEXT816(0),auVar96,auVar32);
          dVar97 = (double)fVar83;
          uVar67 = auVar69._0_8_;
          auVar104._0_8_ = (ulonglong)dVar41 & uVar67;
          uVar59 = auVar69._8_8_;
          auVar104._8_8_ = (ulonglong)dVar45 & uVar59;
          auVar79._4_4_ = ~auVar69._4_4_ & (uint)((ulonglong)(0.0 - dVar41) >> 0x20);
          auVar79._0_4_ = ~auVar69._0_4_ & SUB84(0.0 - dVar41,0);
          auVar79._8_4_ = ~auVar69._8_4_ & SUB84(0.0 - dVar45,0);
          auVar79._12_4_ = ~auVar69._12_4_ & (uint)((ulonglong)(0.0 - dVar45) >> 0x20);
          auVar78._0_8_ = ~uVar67 & (ulonglong)(0.0 - dVar48);
          auVar78._8_8_ = ~uVar59 & (ulonglong)(0.0 - dVar85);
          auVar69._8_4_ = (int)((ulonglong)dVar85 & uVar59);
          auVar69._0_8_ = (ulonglong)dVar48 & uVar67;
          auVar69._12_4_ = (int)(((ulonglong)dVar85 & uVar59) >> 0x20);
          dVar41 = __real_3ff0000000000000 - dVar97;
          dVar100 = dVar100 * dVar97 + SUB168(auVar78 | auVar69,0) * dVar41;
          dVar66 = dVar66 * dVar97 + SUB168(auVar78 | auVar69,8) * dVar41;
          dVar48 = dVar2 * dVar97 + SUB168(auVar104 | auVar79,0) * dVar41;
          dVar85 = dVar3 * dVar97 + SUB168(auVar104 | auVar79,8) * dVar41;
          dVar41 = dVar85 * dVar85 + dVar66 * dVar66 + dVar48 * dVar48 + dVar100 * dVar100;
          dVar45 = __real_3ff0000000000000 / SQRT(dVar41);
          uVar67 = ~-(ulonglong)(dVar41 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
          auVar102._0_8_ = (ulonglong)(dVar100 * dVar45) & uVar67;
          auVar102._8_8_ = (ulonglong)(dVar66 * dVar45) & uVar67;
          auVar49._0_8_ = ~uVar67 & ___xmm_3ff00000000000000000000000000000;
          auVar49._8_8_ = ~uVar67 & _UNK_15061cbc8;
          dVar76 = dVar84 + (dVar46 - dVar84) * dVar97;
          dVar51 = (dVar1 - dVar42) * dVar97 + dVar42;
          dVar86 = (dVar103 - dVar68) * dVar97 + dVar68;
          dVar77 = (local_188 - local_240) * dVar97 + local_240;
          dVar94 = dVar24 + (dVar65 - dVar24) * dVar97;
          dVar81 = dVar91 + (dVar58 - dVar91) * dVar97;
          local_1b8 = dVar92 + (dVar75 - dVar92) * dVar97;
          local_228 = (double)((ulonglong)(dVar48 * dVar45) & uVar67);
          local_1d8 = SUB168(auVar49 | auVar102,0);
          local_238 = SUB168(auVar49 | auVar102,8);
          local_1f8 = dVar93 + (dVar4 - dVar93) * dVar97;
          local_1c8 = dVar82 + (dVar5 - dVar82) * dVar97;
          local_1e8 = dVar60 + (dVar6 - dVar60) * dVar97;
          dVar98 = (double)((ulonglong)(dVar85 * dVar45) & uVar67);
          local_198 = dVar40 + (dVar7 - dVar40) * dVar97;
        }
        *(double *)(param_4 + lVar20) = dVar42;
        *(double *)(param_4 + 8 + lVar20) = dVar68;
        *(double *)(param_4 + 0x10 + lVar20) = local_240;
        *(double *)(param_5 + lVar20) = dVar1;
        *(double *)(param_5 + 8 + lVar20) = dVar103;
        *(double *)(param_5 + 0x10 + lVar20) = local_188;
        if (iVar23 != -1) {
          dVar41 = *(double *)(param_6 + 0x10 + lVar21 * 0x18);
          pdVar17 = (double *)(param_6 + lVar21 * 0x18);
          dVar45 = *pdVar17;
          dVar48 = pdVar17[1];
          uVar57 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                          (double)((ulonglong)dVar41 & __xmm_7fffffffffffffff7fffffffffffffff));
          uVar50 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                          (double)((ulonglong)dVar45 & __xmm_7fffffffffffffff7fffffffffffffff));
          uVar64 = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar48 & _UNK_15061cc88));
          auVar72._4_4_ = uVar64;
          auVar72._0_4_ = uVar50;
          auVar72._8_4_ = uVar57;
          auVar72._12_4_ = -(uint)(_UNK_150aa88b8 < 0.0);
          auVar89._0_4_ =
               -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar45 &&
                      dVar45 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
          auVar89._4_4_ = -(uint)(_UNK_150b51668 <= dVar48 && dVar48 <= _UNK_150b51658);
          auVar89._8_4_ =
               -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar41 &&
                      dVar41 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
          auVar89._12_4_ = -(uint)(_UNK_150b51668 <= 0.0 && 0.0 <= _UNK_150b51658);
          auVar63._0_4_ = auVar89._0_4_ & uVar50;
          auVar63._4_4_ = auVar89._4_4_ & uVar64;
          auVar63._8_4_ = auVar89._8_4_ & uVar57;
          auVar63._12_4_ = auVar89._12_4_ & -(uint)(_UNK_150aa88b8 < 0.0);
          iVar18 = movmskps(iVar23 * 3,auVar63);
          if (iVar18 == 0) {
            auVar63 = ZEXT816(0);
LAB_140ac5aac:
            dVar93 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                             ((ulonglong)dVar45 & ___xmm_7fe00000000000007fe0000000000000));
            dVar82 = (double)((longlong)_UNK_150b51628 - ((ulonglong)dVar48 & _UNK_150b51678));
            dVar92 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                             ((ulonglong)dVar41 & ___xmm_7fe00000000000007fe0000000000000));
            auVar90._0_4_ = (float)(dVar45 * dVar93);
            auVar90._4_4_ = (float)(dVar48 * dVar82);
            fVar83 = (float)(dVar41 * dVar92);
            auVar36._0_8_ = CONCAT44((float)(_UNK_150b51628 * 0.0),fVar83);
            auVar36._8_8_ = 0;
            auVar90._8_8_ = auVar36._0_8_;
            auVar79 = rcpps(auVar36,auVar90);
            uVar57 = auVar63._0_4_ ^ ___xmm_ffffffffffffffffffffffffffffffff;
            uVar50 = auVar63._4_4_ ^ _UNK_15060db24;
            uVar64 = auVar63._8_4_ ^ _UNK_15060db28;
            uVar54 = auVar63._12_4_ ^ _UNK_15060db2c;
            dVar92 = (double)((_UNK_15076ba38 - fVar83 * auVar79._8_4_) * auVar79._8_4_) * dVar92;
            dVar85 = (double)((_UNK_15076ba3c - (float)(_UNK_150b51628 * 0.0) * auVar79._12_4_) *
                             auVar79._12_4_) * _UNK_150b51628;
            dVar93 = (double)((___xmm_40000000400000004000000040000000 -
                              auVar90._0_4_ * auVar79._0_4_) * auVar79._0_4_) * dVar93;
            dVar82 = (double)((_UNK_15076ba34 - auVar90._4_4_ * auVar79._4_4_) * auVar79._4_4_) *
                     dVar82;
            dVar93 = (___xmm_40000000000000004000000000000000 - dVar45 * dVar93) * dVar93;
            dVar82 = (_UNK_150689698 - dVar48 * dVar82) * dVar82;
            dVar92 = (___xmm_40000000000000004000000000000000 - dVar41 * dVar92) * dVar92;
            dVar85 = (_UNK_150689698 - dVar85 * 0.0) * dVar85;
            dVar85 = (_UNK_150689698 - dVar85 * 0.0) * dVar85;
            auVar73._0_8_ = (___xmm_40000000000000004000000000000000 - dVar45 * dVar93) * dVar93;
            auVar73._8_8_ = (_UNK_150689698 - dVar48 * dVar82) * dVar82;
            auVar37._4_4_ = uVar57;
            auVar37._0_4_ = uVar57;
            auVar37._8_4_ = uVar50;
            auVar37._12_4_ = uVar50;
            local_168 = blendvps(local_168,auVar73,auVar37);
            auVar38._4_4_ = uVar64;
            auVar38._0_4_ = uVar64;
            auVar38._8_4_ = uVar54;
            auVar38._12_4_ = uVar54;
            auVar11._8_4_ = SUB84(dVar85,0);
            auVar11._0_8_ = (___xmm_40000000000000004000000000000000 - dVar41 * dVar92) * dVar92;
            auVar11._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
            unaff_XMM14 = blendvps(unaff_XMM14,auVar11,auVar38);
          }
          else {
            auVar33._0_4_ = (float)dVar45;
            auVar33._4_4_ = (float)dVar48;
            fVar83 = (float)dVar41;
            auVar33._8_4_ = fVar83;
            auVar33._12_4_ = 0;
            auVar79 = rcpps(ZEXT416((uint)fVar83),auVar33);
            dVar92 = (double)((___xmm_40000000400000004000000040000000 -
                              auVar33._0_4_ * auVar79._0_4_) * auVar79._0_4_);
            dVar85 = (double)((_UNK_15076ba34 - auVar33._4_4_ * auVar79._4_4_) * auVar79._4_4_);
            dVar93 = (double)((_UNK_15076ba38 - fVar83 * auVar79._8_4_) * auVar79._8_4_);
            dVar82 = (double)((_UNK_15076ba3c - auVar79._12_4_ * 0.0) * auVar79._12_4_);
            dVar92 = (___xmm_40000000000000004000000000000000 - dVar45 * dVar92) * dVar92;
            dVar85 = (_UNK_150689698 - dVar48 * dVar85) * dVar85;
            dVar93 = (___xmm_40000000000000004000000000000000 - dVar41 * dVar93) * dVar93;
            dVar82 = (_UNK_150689698 - dVar82 * 0.0) * dVar82;
            auVar34._0_8_ = dVar41 * dVar93;
            auVar34._8_8_ = dVar82 * 0.0;
            auVar80._0_8_ = (___xmm_40000000000000004000000000000000 - auVar34._0_8_) * dVar93;
            auVar80._8_8_ = (_UNK_150689698 - auVar34._8_8_) * dVar82;
            dVar85 = (_UNK_150689698 - dVar48 * dVar85) * dVar85;
            auVar79 = pmovsxdq(auVar34,auVar89);
            auVar12._8_4_ = SUB84(dVar85,0);
            auVar12._0_8_ = (___xmm_40000000000000004000000000000000 - dVar45 * dVar92) * dVar92;
            auVar12._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
            local_168 = blendvps(local_168,auVar12,auVar79);
            auVar35._4_4_ = auVar89._8_4_;
            auVar35._0_4_ = auVar89._8_4_;
            auVar35._8_4_ = auVar89._12_4_;
            auVar35._12_4_ = auVar89._12_4_;
            unaff_XMM14 = blendvps(unaff_XMM14,auVar80,auVar35);
            uVar19 = movmskps((int)param_6,auVar72);
            if ((char)uVar19 != (char)iVar18) goto LAB_140ac5aac;
          }
          auVar16._8_8_ = _UNK_150aa88b8;
          auVar16._0_8_ = ___xmm_3e45798ee2308c3a3e45798ee2308c3a;
          iVar18 = -(uint)((double)((ulonglong)dVar41 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                          ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
          iVar23 = -(uint)(0.0 <= _UNK_150aa88b8);
          auVar44._4_4_ = -(uint)((double)((ulonglong)dVar48 & _UNK_15061cc88) <= _UNK_150aa88b8);
          auVar44._0_4_ =
               -(uint)((double)((ulonglong)dVar45 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                      ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
          auVar44._8_4_ = iVar18;
          auVar44._12_4_ = iVar23;
          auVar79 = pmovsxdq(auVar16,auVar44);
          auVar79 = blendvps(local_168,ZEXT816(0),auVar79);
          auVar39._4_4_ = iVar18;
          auVar39._0_4_ = iVar18;
          auVar39._8_4_ = iVar23;
          auVar39._12_4_ = iVar23;
          auVar69 = blendvps(unaff_XMM14,ZEXT816(0),auVar39);
          dVar76 = dVar51 * auVar79._0_8_;
          dVar81 = dVar86 * auVar79._8_8_;
          dVar94 = auVar69._0_8_ * dVar77;
          local_198 = 0.0;
        }
        *(double *)(param_6 + lVar20) = dVar51;
        *(double *)(param_6 + 8 + lVar20) = dVar86;
        *(double *)(param_6 + 0x10 + lVar20) = dVar77;
        *(double *)(param_1 + lVar20 * 4) = local_228;
        *(double *)(param_1 + 8 + lVar20 * 4) = dVar98;
        *(double *)(param_1 + 0x10 + lVar20 * 4) = local_1d8;
        *(double *)(param_1 + 0x18 + lVar20 * 4) = local_238;
        *(double *)(param_1 + 0x20 + lVar20 * 4) = local_1b8;
        *(double *)(param_1 + 0x28 + lVar20 * 4) = local_1f8;
        *(double *)(param_1 + 0x30 + lVar20 * 4) = local_1c8;
        *(double *)(param_1 + 0x38 + lVar20 * 4) = local_1e8;
        *(double *)(param_1 + 0x40 + lVar20 * 4) = dVar76;
        *(double *)(param_1 + 0x48 + lVar20 * 4) = dVar81;
        *(double *)(param_1 + 0x50 + lVar20 * 4) = dVar94;
        *(double *)(param_1 + 0x58 + lVar20 * 4) = local_198;
        lVar22 = lVar22 + 1;
        lVar20 = lVar20 + 0x18;
      } while ((ulonglong)param_10 * 0x18 != lVar20);
    }
  }
  else if (0 < (int)param_10) {
    lVar20 = 0;
    lVar22 = 0;
    do {
      iVar18 = *(int *)(param_8 + lVar22 * 8);
      iVar23 = *(int *)(param_9 + lVar22 * 4);
      lVar21 = (longlong)iVar23;
      dVar41 = *(double *)(param_2 + lVar20 * 4);
      dVar45 = *(double *)(param_2 + 8 + lVar20 * 4);
      dVar48 = *(double *)(param_2 + 0x10 + lVar20 * 4);
      local_1f8 = *(double *)(param_2 + 0x18 + lVar20 * 4);
      local_1c8 = *(double *)(param_2 + 0x20 + lVar20 * 4);
      local_1e8 = *(double *)(param_2 + 0x28 + lVar20 * 4);
      local_1b8 = *(double *)(param_2 + 0x30 + lVar20 * 4);
      local_1d8 = *(double *)(param_2 + 0x38 + lVar20 * 4);
      dVar85 = *(double *)(param_2 + 0x40 + lVar20 * 4);
      dVar92 = *(double *)(param_2 + 0x48 + lVar20 * 4);
      dVar93 = *(double *)(param_2 + 0x50 + lVar20 * 4);
      local_238 = *(double *)(param_2 + 0x58 + lVar20 * 4);
      pdVar17 = (double *)GetTransformFromArray(param_3,iVar18,(int)lVar22);
      dVar82 = pdVar17[8];
      dVar60 = pdVar17[9];
      dVar84 = pdVar17[10];
      dVar91 = dVar93;
      dVar46 = dVar85;
      local_240 = dVar84;
      dVar24 = dVar82;
      dVar40 = dVar60;
      local_1a8 = dVar92;
      if (lVar21 != -1) {
        lVar14 = lVar21 * 0x18;
        dVar91 = *(double *)(param_4 + 0x10 + lVar14) * dVar93;
        dVar46 = dVar85 * *(double *)(param_4 + lVar14);
        local_240 = *(double *)(param_5 + 0x10 + lVar14) * dVar84;
        dVar24 = dVar82 * *(double *)(param_5 + lVar14);
        dVar40 = dVar60 * ((double *)(param_5 + lVar14))[1];
        local_1a8 = dVar92 * ((double *)(param_4 + lVar14))[1];
      }
      dVar58 = *pdVar17;
      dVar65 = pdVar17[1];
      dVar68 = pdVar17[2];
      dVar1 = pdVar17[3];
      dVar42 = pdVar17[4];
      dVar103 = pdVar17[5];
      dVar2 = pdVar17[6];
      dVar3 = pdVar17[7];
      dVar100 = pdVar17[0xb];
      fVar83 = *(float *)(param_8 + 4 + lVar22 * 8);
      if (fVar83 <= __xmm_00000000000000000000000000000000) {
        fVar83 = __xmm_00000000000000000000000000000000;
      }
      if (__real_3f800000 <= fVar83) {
        fVar83 = __real_3f800000;
      }
      fVar99 = *(float *)(param_7 + (longlong)iVar18 * 4);
      if (fVar99 <= fVar83) {
        fVar99 = fVar83;
      }
      *(float *)(param_7 + (longlong)iVar18 * 4) = fVar99;
      if (fVar83 <= __real_3727c5ac) {
        local_188._0_4_ = SUB84(dVar41,0);
        local_188._4_4_ = (undefined4)((ulonglong)dVar41 >> 0x20);
        dVar41 = dVar91;
        dVar82 = dVar46;
        dVar60 = local_1a8;
      }
      else if (__real_3f7fff58 <= fVar83) {
        local_188._0_4_ = SUB84(dVar58,0);
        local_188._4_4_ = (undefined4)((ulonglong)dVar58 >> 0x20);
        dVar41 = local_240;
        dVar48 = dVar68;
        dVar85 = dVar82;
        dVar92 = dVar60;
        dVar93 = dVar84;
        dVar45 = dVar65;
        dVar82 = dVar24;
        local_1b8 = dVar2;
        local_1f8 = dVar1;
        local_1c8 = dVar42;
        local_1e8 = dVar103;
        local_1d8 = dVar3;
        dVar60 = dVar40;
        local_238 = dVar100;
      }
      else {
        auVar13._8_4_ = SUB84(local_1f8,0);
        auVar13._0_8_ = dVar48;
        auVar13._12_4_ = (int)((ulonglong)local_1f8 >> 0x20);
        dVar66 = dVar41 * dVar58 + dVar48 * dVar68;
        dVar75 = dVar45 * dVar65 + local_1f8 * dVar1;
        iVar18 = -(uint)(0.0 <= dVar75 + dVar66);
        iVar74 = -(uint)(0.0 <= dVar66 + dVar75);
        auVar25._4_4_ = iVar18;
        auVar25._0_4_ = iVar18;
        auVar25._8_4_ = iVar74;
        auVar25._12_4_ = iVar74;
        auVar15._4_4_ = _UNK_15060db24;
        auVar15._0_4_ = ___xmm_ffffffffffffffffffffffffffffffff;
        auVar15._8_4_ = _UNK_15060db28;
        auVar15._12_4_ = _UNK_15060db2c;
        auVar69 = blendvps(ZEXT816(0),auVar15,auVar25);
        dVar66 = (double)fVar83;
        uVar67 = auVar69._0_8_;
        auVar52._0_8_ = (ulonglong)dVar41 & uVar67;
        uVar59 = auVar69._8_8_;
        auVar52._8_8_ = (ulonglong)dVar45 & uVar59;
        auVar8._4_4_ = ~auVar69._4_4_ & (uint)((ulonglong)(0.0 - dVar41) >> 0x20);
        auVar8._0_4_ = ~auVar69._0_4_ & SUB84(0.0 - dVar41,0);
        auVar8._8_4_ = ~auVar69._8_4_ & SUB84(0.0 - dVar45,0);
        auVar8._12_4_ = ~auVar69._12_4_ & (uint)((ulonglong)(0.0 - dVar45) >> 0x20);
        dStack_220 = auVar13._8_8_;
        auVar70._0_8_ = ~uVar67 & (ulonglong)(0.0 - dVar48);
        auVar70._8_8_ = ~uVar59 & (ulonglong)(0.0 - dStack_220);
        auVar9._8_4_ = (int)((ulonglong)dStack_220 & uVar59);
        auVar9._0_8_ = (ulonglong)dVar48 & uVar67;
        auVar9._12_4_ = (int)(((ulonglong)dStack_220 & uVar59) >> 0x20);
        dVar48 = __real_3ff0000000000000 - dVar66;
        dVar41 = dVar68 * dVar66 + SUB168(auVar70 | auVar9,0) * dVar48;
        dVar45 = dVar1 * dVar66 + SUB168(auVar70 | auVar9,8) * dVar48;
        dVar58 = dVar58 * dVar66 + SUB168(auVar52 | auVar8,0) * dVar48;
        dVar65 = dVar65 * dVar66 + SUB168(auVar52 | auVar8,8) * dVar48;
        dVar48 = dVar65 * dVar65 + dVar45 * dVar45 + dVar58 * dVar58 + dVar41 * dVar41;
        dVar68 = __real_3ff0000000000000 / SQRT(dVar48);
        uVar67 = ~-(ulonglong)(dVar48 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        uVar59 = (ulonglong)(dVar58 * dVar68) & uVar67;
        auVar43._0_8_ = (ulonglong)(dVar41 * dVar68) & uVar67;
        auVar43._8_8_ = (ulonglong)(dVar45 * dVar68) & uVar67;
        auVar101._0_8_ = ~uVar67 & ___xmm_3ff00000000000000000000000000000;
        auVar101._8_8_ = ~uVar67 & _UNK_15061cbc8;
        local_188._0_4_ = (undefined4)uVar59;
        local_188._4_4_ = (undefined4)(uVar59 >> 0x20);
        dVar41 = (local_240 - dVar91) * dVar66 + dVar91;
        dVar48 = SUB168(auVar101 | auVar43,0);
        dVar85 = dVar85 + (dVar82 - dVar85) * dVar66;
        dVar92 = dVar92 + (dVar60 - dVar92) * dVar66;
        dVar93 = dVar93 + (dVar84 - dVar93) * dVar66;
        dVar45 = (double)((ulonglong)(dVar65 * dVar68) & uVar67);
        dVar82 = (dVar24 - dVar46) * dVar66 + dVar46;
        local_1b8 = local_1b8 + (dVar2 - local_1b8) * dVar66;
        local_1f8 = SUB168(auVar101 | auVar43,8);
        local_1c8 = local_1c8 + (dVar42 - local_1c8) * dVar66;
        local_1e8 = local_1e8 + (dVar103 - local_1e8) * dVar66;
        local_1d8 = local_1d8 + (dVar3 - local_1d8) * dVar66;
        dVar60 = (dVar40 - local_1a8) * dVar66 + local_1a8;
        local_238 = local_238 + (dVar100 - local_238) * dVar66;
      }
      *(double *)(param_4 + lVar20) = dVar46;
      *(double *)(param_4 + 8 + lVar20) = local_1a8;
      *(double *)(param_4 + 0x10 + lVar20) = dVar91;
      *(double *)(param_5 + lVar20) = dVar24;
      *(double *)(param_5 + 8 + lVar20) = dVar40;
      *(double *)(param_5 + 0x10 + lVar20) = local_240;
      if (iVar23 != -1) {
        dVar85 = *(double *)(param_6 + 0x10 + lVar21 * 0x18);
        pdVar17 = (double *)(param_6 + lVar21 * 0x18);
        dVar92 = *pdVar17;
        dVar93 = pdVar17[1];
        uVar57 = -(uint)((double)((ulonglong)dVar85 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                        ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
        uVar64 = -(uint)(0.0 <= _UNK_150aa88b8);
        uVar50 = -(uint)((double)((ulonglong)dVar92 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                        ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
        uVar54 = -(uint)((double)((ulonglong)dVar93 & _UNK_15061cc88) <= _UNK_150aa88b8);
        auVar47._4_4_ = uVar54;
        auVar47._0_4_ = uVar50;
        auVar47._8_4_ = uVar57;
        auVar47._12_4_ = uVar64;
        local_108 = auVar79._0_4_;
        uStack_104 = auVar79._4_4_;
        uStack_100 = auVar79._8_4_;
        uStack_fc = auVar79._12_4_;
        auVar61._0_4_ = ~uVar50 & local_108;
        auVar61._4_4_ = ~uVar54 & uStack_104;
        auVar61._8_4_ = ~uVar57 & uStack_100;
        auVar61._12_4_ = ~uVar64 & uStack_fc;
        auVar71._0_4_ =
             -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar92 &&
                    dVar92 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
        auVar71._4_4_ = -(uint)(_UNK_150b51668 <= dVar93 && dVar93 <= _UNK_150b51658);
        auVar71._8_4_ =
             -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar85 &&
                    dVar85 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
        auVar71._12_4_ = -(uint)(_UNK_150b51668 <= 0.0 && 0.0 <= _UNK_150b51658);
        auVar53._0_4_ = auVar61._0_4_ & auVar71._0_4_;
        auVar53._4_4_ = auVar61._4_4_ & auVar71._4_4_;
        auVar53._8_4_ = auVar61._8_4_ & auVar71._8_4_;
        auVar53._12_4_ = auVar61._12_4_ & auVar71._12_4_;
        iVar18 = movmskps(iVar23 * 3,auVar53);
        if (iVar18 == 0) {
          auVar53 = ZEXT816(0);
LAB_140ac50dc:
          dVar91 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                           ((ulonglong)dVar92 & ___xmm_7fe00000000000007fe0000000000000));
          dVar24 = (double)((longlong)_UNK_150b51628 - ((ulonglong)dVar93 & _UNK_150b51678));
          dVar40 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                           ((ulonglong)dVar85 & ___xmm_7fe00000000000007fe0000000000000));
          auVar88._0_4_ = (float)(dVar92 * dVar91);
          auVar88._4_4_ = (float)(dVar93 * dVar24);
          fVar83 = (float)(dVar85 * dVar40);
          auVar29._0_8_ = CONCAT44((float)(_UNK_150b51628 * 0.0),fVar83);
          auVar29._8_8_ = 0;
          auVar88._8_8_ = auVar29._0_8_;
          auVar69 = rcpps(auVar29,auVar88);
          uVar50 = auVar53._0_4_ ^ ___xmm_ffffffffffffffffffffffffffffffff;
          uVar54 = auVar53._4_4_ ^ _UNK_15060db24;
          uVar55 = auVar53._8_4_ ^ _UNK_15060db28;
          uVar56 = auVar53._12_4_ ^ _UNK_15060db2c;
          dVar40 = (double)((_UNK_15076ba38 - fVar83 * auVar69._8_4_) * auVar69._8_4_) * dVar40;
          dVar84 = (double)((_UNK_15076ba3c - (float)(_UNK_150b51628 * 0.0) * auVar69._12_4_) *
                           auVar69._12_4_) * _UNK_150b51628;
          dVar91 = (double)((___xmm_40000000400000004000000040000000 - auVar88._0_4_ * auVar69._0_4_
                            ) * auVar69._0_4_) * dVar91;
          dVar24 = (double)((_UNK_15076ba34 - auVar88._4_4_ * auVar69._4_4_) * auVar69._4_4_) *
                   dVar24;
          dVar91 = (___xmm_40000000000000004000000000000000 - dVar92 * dVar91) * dVar91;
          dVar24 = (_UNK_150689698 - dVar93 * dVar24) * dVar24;
          dVar40 = (___xmm_40000000000000004000000000000000 - dVar85 * dVar40) * dVar40;
          dVar84 = (_UNK_150689698 - dVar84 * 0.0) * dVar84;
          dVar84 = (_UNK_150689698 - dVar84 * 0.0) * dVar84;
          auVar62._0_8_ = (___xmm_40000000000000004000000000000000 - dVar92 * dVar91) * dVar91;
          auVar62._8_8_ = (_UNK_150689698 - dVar93 * dVar24) * dVar24;
          auVar30._4_4_ = uVar50;
          auVar30._0_4_ = uVar50;
          auVar30._8_4_ = uVar54;
          auVar30._12_4_ = uVar54;
          unaff_XMM12 = blendvps(unaff_XMM12,auVar62,auVar30);
          auVar28._4_4_ = uVar55;
          auVar28._0_4_ = uVar55;
          auVar28._8_4_ = uVar56;
          auVar28._12_4_ = uVar56;
          auVar10._8_4_ = SUB84(dVar84,0);
          auVar10._0_8_ = (___xmm_40000000000000004000000000000000 - dVar85 * dVar40) * dVar40;
          auVar10._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
          local_168 = blendvps(local_168,auVar10,auVar28);
        }
        else {
          auVar26._0_4_ = (float)dVar92;
          auVar26._4_4_ = (float)dVar93;
          fVar83 = (float)dVar85;
          auVar26._8_4_ = fVar83;
          auVar26._12_4_ = 0;
          auVar69 = rcpps(ZEXT416((uint)fVar83),auVar26);
          dVar24 = (double)((___xmm_40000000400000004000000040000000 - auVar26._0_4_ * auVar69._0_4_
                            ) * auVar69._0_4_);
          dVar40 = (double)((_UNK_15076ba34 - auVar26._4_4_ * auVar69._4_4_) * auVar69._4_4_);
          dVar84 = (double)((_UNK_15076ba38 - fVar83 * auVar69._8_4_) * auVar69._8_4_);
          dVar91 = (double)((_UNK_15076ba3c - auVar69._12_4_ * 0.0) * auVar69._12_4_);
          dVar24 = (___xmm_40000000000000004000000000000000 - dVar92 * dVar24) * dVar24;
          dVar40 = (_UNK_150689698 - dVar93 * dVar40) * dVar40;
          dVar84 = (___xmm_40000000000000004000000000000000 - dVar85 * dVar84) * dVar84;
          dVar91 = (_UNK_150689698 - dVar91 * 0.0) * dVar91;
          auVar27._0_8_ = dVar85 * dVar84;
          auVar27._8_8_ = dVar91 * 0.0;
          auVar87._0_8_ = (___xmm_40000000000000004000000000000000 - auVar27._0_8_) * dVar84;
          auVar87._8_8_ = (_UNK_150689698 - auVar27._8_8_) * dVar91;
          auVar95._0_8_ = (___xmm_40000000000000004000000000000000 - dVar92 * dVar24) * dVar24;
          auVar95._8_8_ = (_UNK_150689698 - dVar93 * dVar40) * dVar40;
          auVar69 = pmovsxdq(auVar27,auVar71);
          unaff_XMM12 = blendvps(unaff_XMM12,auVar95,auVar69);
          auVar28._4_4_ = auVar71._8_4_;
          auVar28._0_4_ = auVar71._8_4_;
          auVar28._8_4_ = auVar71._12_4_;
          auVar28._12_4_ = auVar71._12_4_;
          local_168 = blendvps(local_168,auVar87,auVar28);
          uVar19 = movmskps((int)param_6,auVar61);
          if ((char)uVar19 != (char)iVar18) goto LAB_140ac50dc;
        }
        auVar69 = pmovsxdq(auVar28,auVar47);
        auVar69 = blendvps(unaff_XMM12,ZEXT816(0),auVar69);
        auVar31._4_4_ = uVar57;
        auVar31._0_4_ = uVar57;
        auVar31._8_4_ = uVar64;
        auVar31._12_4_ = uVar64;
        auVar96 = blendvps(local_168,ZEXT816(0),auVar31);
        dVar85 = dVar82 * auVar69._0_8_;
        dVar92 = dVar60 * auVar69._8_8_;
        dVar93 = auVar96._0_8_ * dVar41;
        local_238 = 0.0;
      }
      *(double *)(param_6 + lVar20) = dVar82;
      *(double *)(param_6 + 8 + lVar20) = dVar60;
      *(double *)(param_6 + 0x10 + lVar20) = dVar41;
      *(ulonglong *)(param_1 + lVar20 * 4) = CONCAT44(local_188._4_4_,(undefined4)local_188);
      *(double *)(param_1 + 8 + lVar20 * 4) = dVar45;
      *(double *)(param_1 + 0x10 + lVar20 * 4) = dVar48;
      *(double *)(param_1 + 0x18 + lVar20 * 4) = local_1f8;
      *(double *)(param_1 + 0x20 + lVar20 * 4) = local_1c8;
      *(double *)(param_1 + 0x28 + lVar20 * 4) = local_1e8;
      *(double *)(param_1 + 0x30 + lVar20 * 4) = local_1b8;
      *(double *)(param_1 + 0x38 + lVar20 * 4) = local_1d8;
      *(double *)(param_1 + 0x40 + lVar20 * 4) = dVar85;
      *(double *)(param_1 + 0x48 + lVar20 * 4) = dVar92;
      *(double *)(param_1 + 0x50 + lVar20 * 4) = dVar93;
      *(double *)(param_1 + 0x58 + lVar20 * 4) = local_238;
      lVar22 = lVar22 + 1;
      lVar20 = lVar20 + 0x18;
    } while ((ulonglong)param_10 * 0x18 != lVar20);
  }
  return;
}

// BlendPosesPerBoneFilter___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_sse4 @ 140ac5ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilter___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_sse4
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               undefined8 param_6,uint param_7,undefined1 (*param_8) [16])

{
  double dVar1;
  double dVar2;
  double dVar3;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double *pdVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  double dVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong uVar34;
  double dVar35;
  int iVar37;
  double dVar38;
  undefined1 auVar36 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  
  iVar22 = movmskps((int)param_1,*param_8);
  if (iVar22 == 0xf) {
    if (0 < (int)param_7) {
      lVar23 = 0xb;
      uVar24 = 0;
      do {
        iVar22 = *(int *)(param_5 + uVar24 * 8);
        dVar39 = *(double *)(param_2 + -0x58 + lVar23 * 8);
        dVar40 = *(double *)(param_2 + -0x50 + lVar23 * 8);
        dVar25 = *(double *)(param_2 + -0x48 + lVar23 * 8);
        dVar28 = *(double *)(param_2 + -0x40 + lVar23 * 8);
        uVar27 = SUB84(dVar28,0);
        uVar30 = (undefined4)((ulonglong)dVar28 >> 0x20);
        dVar1 = *(double *)(param_2 + -0x38 + lVar23 * 8);
        dVar35 = *(double *)(param_2 + -0x30 + lVar23 * 8);
        dVar2 = *(double *)(param_2 + -0x28 + lVar23 * 8);
        dVar3 = *(double *)(param_2 + -0x20 + lVar23 * 8);
        dVar45 = *(double *)(param_2 + -0x18 + lVar23 * 8);
        dVar26 = *(double *)(param_2 + -0x10 + lVar23 * 8);
        dVar4 = *(double *)(param_2 + -8 + lVar23 * 8);
        dVar5 = *(double *)(param_2 + lVar23 * 8);
        pdVar21 = (double *)GetTransformFromArray(param_3,iVar22,(int)uVar24);
        dVar6 = *pdVar21;
        dVar7 = pdVar21[1];
        dVar31 = pdVar21[2];
        dVar32 = pdVar21[3];
        dVar8 = pdVar21[4];
        dVar9 = pdVar21[5];
        dVar10 = pdVar21[6];
        dVar11 = pdVar21[7];
        dVar12 = pdVar21[8];
        dVar13 = pdVar21[9];
        dVar14 = pdVar21[10];
        dVar15 = pdVar21[0xb];
        fVar49 = *(float *)(param_5 + 4 + uVar24 * 8);
        if (fVar49 <= __xmm_00000000000000000000000000000000) {
          fVar49 = __xmm_00000000000000000000000000000000;
        }
        if (__real_3f800000 <= fVar49) {
          fVar49 = __real_3f800000;
        }
        fVar42 = *(float *)(param_4 + (longlong)iVar22 * 4);
        if (fVar42 <= fVar49) {
          fVar42 = fVar49;
        }
        *(float *)(param_4 + (longlong)iVar22 * 4) = fVar42;
        if (__real_3727c5ac < fVar49) {
          if (__real_3f7fff58 <= fVar49) {
            uVar27 = SUB84(dVar32,0);
            uVar30 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar26 = dVar13;
            dVar45 = dVar12;
            dVar4 = dVar14;
            dVar5 = dVar15;
            dVar1 = dVar8;
            dVar2 = dVar10;
            dVar3 = dVar11;
            dVar39 = dVar6;
            dVar40 = dVar7;
            dVar25 = dVar31;
            dVar35 = dVar9;
          }
          else {
            dVar33 = dVar39 * dVar6 + dVar25 * dVar31;
            dVar38 = dVar40 * dVar7 + dVar28 * dVar32;
            iVar22 = -(uint)(0.0 <= dVar38 + dVar33);
            iVar37 = -(uint)(0.0 <= dVar33 + dVar38);
            auVar36._4_4_ = iVar22;
            auVar36._0_4_ = iVar22;
            auVar36._8_4_ = iVar37;
            auVar36._12_4_ = iVar37;
            auVar36 = blendvps(ZEXT816(0),___xmm_ffffffffffffffffffffffffffffffff,auVar36);
            dVar38 = (double)fVar49;
            dVar33 = __real_3ff0000000000000 - dVar38;
            uVar34 = auVar36._0_8_;
            auVar48._0_8_ = (ulonglong)dVar39 & uVar34;
            uVar29 = auVar36._8_8_;
            auVar48._8_8_ = (ulonglong)dVar40 & uVar29;
            auVar20._4_4_ = ~auVar36._4_4_ & (uint)((ulonglong)(0.0 - dVar39) >> 0x20);
            auVar20._0_4_ = ~auVar36._0_4_ & SUB84(0.0 - dVar39,0);
            auVar20._8_4_ = ~auVar36._8_4_ & SUB84(0.0 - dVar40,0);
            auVar20._12_4_ = ~auVar36._12_4_ & (uint)((ulonglong)(0.0 - dVar40) >> 0x20);
            dVar31 = dVar31 * dVar38 +
                     (double)(~uVar34 & (ulonglong)(0.0 - dVar25) | (ulonglong)dVar25 & uVar34) *
                     dVar33;
            dVar32 = dVar32 * dVar38 +
                     (double)(~uVar29 & (ulonglong)(0.0 - dVar28) | (ulonglong)dVar28 & uVar29) *
                     dVar33;
            dVar25 = dVar6 * dVar38 + SUB168(auVar48 | auVar20,0) * dVar33;
            dVar28 = dVar7 * dVar38 + SUB168(auVar48 | auVar20,8) * dVar33;
            dVar39 = dVar28 * dVar28 + dVar32 * dVar32 + dVar25 * dVar25 + dVar31 * dVar31;
            dVar40 = __real_3ff0000000000000 / SQRT(dVar39);
            uVar34 = ~-(ulonglong)(dVar39 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
            auVar46._0_8_ = ~uVar34 & ___xmm_3ff00000000000000000000000000000;
            auVar46._8_8_ = ~uVar34 & _UNK_15061cbc8;
            auVar18._8_8_ = (ulonglong)(dVar32 * dVar40) & uVar34;
            auVar18._0_8_ = (ulonglong)(dVar31 * dVar40) & uVar34;
            auVar46 = auVar46 | auVar18;
            uVar27 = auVar46._8_4_;
            uVar30 = auVar46._12_4_;
            dVar26 = dVar26 + (dVar13 - dVar26) * dVar38;
            dVar45 = dVar45 + (dVar12 - dVar45) * dVar38;
            dVar4 = dVar4 + (dVar14 - dVar4) * dVar38;
            dVar5 = dVar5 + (dVar15 - dVar5) * dVar38;
            dVar1 = dVar1 + (dVar8 - dVar1) * dVar38;
            dVar2 = dVar2 + (dVar10 - dVar2) * dVar38;
            dVar3 = dVar3 + (dVar11 - dVar3) * dVar38;
            dVar39 = (double)((ulonglong)(dVar25 * dVar40) & uVar34);
            dVar40 = (double)((ulonglong)(dVar28 * dVar40) & uVar34);
            dVar25 = auVar46._0_8_;
            dVar35 = dVar35 + (dVar9 - dVar35) * dVar38;
          }
        }
        *(double *)(param_1 + -0x58 + lVar23 * 8) = dVar39;
        *(double *)(param_1 + -0x50 + lVar23 * 8) = dVar40;
        *(double *)(param_1 + -0x48 + lVar23 * 8) = dVar25;
        *(ulonglong *)(param_1 + -0x40 + lVar23 * 8) = CONCAT44(uVar30,uVar27);
        *(double *)(param_1 + -0x38 + lVar23 * 8) = dVar1;
        *(double *)(param_1 + -0x30 + lVar23 * 8) = dVar35;
        *(double *)(param_1 + -0x28 + lVar23 * 8) = dVar2;
        *(double *)(param_1 + -0x20 + lVar23 * 8) = dVar3;
        *(double *)(param_1 + -0x18 + lVar23 * 8) = dVar45;
        *(double *)(param_1 + -0x10 + lVar23 * 8) = dVar26;
        *(double *)(param_1 + -8 + lVar23 * 8) = dVar4;
        *(double *)(param_1 + lVar23 * 8) = dVar5;
        uVar24 = uVar24 + 1;
        lVar23 = lVar23 + 0xc;
      } while (param_7 != uVar24);
    }
  }
  else if (0 < (int)param_7) {
    lVar23 = 0xb;
    uVar24 = 0;
    do {
      iVar22 = *(int *)(param_5 + uVar24 * 8);
      dVar39 = *(double *)(param_2 + -0x58 + lVar23 * 8);
      dVar40 = *(double *)(param_2 + -0x50 + lVar23 * 8);
      uVar27 = SUB84(dVar40,0);
      uVar30 = (undefined4)((ulonglong)dVar40 >> 0x20);
      dVar25 = *(double *)(param_2 + -0x48 + lVar23 * 8);
      dVar28 = *(double *)(param_2 + -0x40 + lVar23 * 8);
      uVar43 = SUB84(dVar28,0);
      uVar44 = (undefined4)((ulonglong)dVar28 >> 0x20);
      dVar1 = *(double *)(param_2 + -0x38 + lVar23 * 8);
      dVar35 = *(double *)(param_2 + -0x30 + lVar23 * 8);
      dVar2 = *(double *)(param_2 + -0x28 + lVar23 * 8);
      dVar3 = *(double *)(param_2 + -0x20 + lVar23 * 8);
      dVar45 = *(double *)(param_2 + -0x18 + lVar23 * 8);
      dVar26 = *(double *)(param_2 + -0x10 + lVar23 * 8);
      dVar4 = *(double *)(param_2 + -8 + lVar23 * 8);
      dVar5 = *(double *)(param_2 + lVar23 * 8);
      pdVar21 = (double *)GetTransformFromArray(param_3,iVar22,(int)uVar24);
      dVar6 = *pdVar21;
      dVar7 = pdVar21[1];
      dVar31 = pdVar21[2];
      dVar32 = pdVar21[3];
      dVar8 = pdVar21[4];
      dVar9 = pdVar21[5];
      dVar10 = pdVar21[6];
      dVar11 = pdVar21[7];
      dVar12 = pdVar21[8];
      dVar13 = pdVar21[9];
      dVar14 = pdVar21[10];
      dVar15 = pdVar21[0xb];
      fVar49 = *(float *)(param_5 + 4 + uVar24 * 8);
      if (fVar49 <= __xmm_00000000000000000000000000000000) {
        fVar49 = __xmm_00000000000000000000000000000000;
      }
      if (__real_3f800000 <= fVar49) {
        fVar49 = __real_3f800000;
      }
      fVar42 = *(float *)(param_4 + (longlong)iVar22 * 4);
      if (fVar42 <= fVar49) {
        fVar42 = fVar49;
      }
      *(float *)(param_4 + (longlong)iVar22 * 4) = fVar42;
      if (__real_3727c5ac < fVar49) {
        if (__real_3f7fff58 <= fVar49) {
          uVar43 = SUB84(dVar32,0);
          uVar44 = (undefined4)((ulonglong)dVar32 >> 0x20);
          uVar27 = SUB84(dVar7,0);
          uVar30 = (undefined4)((ulonglong)dVar7 >> 0x20);
          dVar4 = dVar14;
          dVar5 = dVar15;
          dVar2 = dVar10;
          dVar1 = dVar8;
          dVar26 = dVar13;
          dVar3 = dVar11;
          dVar35 = dVar9;
          dVar39 = dVar6;
          dVar25 = dVar31;
          dVar45 = dVar12;
        }
        else {
          dVar33 = dVar39 * dVar6 + dVar25 * dVar31;
          dVar38 = dVar40 * dVar7 + dVar28 * dVar32;
          iVar22 = -(uint)(0.0 <= dVar38 + dVar33);
          iVar37 = -(uint)(0.0 <= dVar33 + dVar38);
          auVar16._4_4_ = iVar22;
          auVar16._0_4_ = iVar22;
          auVar16._8_4_ = iVar37;
          auVar16._12_4_ = iVar37;
          auVar36 = blendvps(ZEXT816(0),___xmm_ffffffffffffffffffffffffffffffff,auVar16);
          dVar38 = (double)fVar49;
          dVar33 = __real_3ff0000000000000 - dVar38;
          uVar34 = auVar36._0_8_;
          auVar41._0_8_ = (ulonglong)dVar39 & uVar34;
          uVar29 = auVar36._8_8_;
          auVar41._8_8_ = (ulonglong)dVar40 & uVar29;
          auVar19._4_4_ = ~auVar36._4_4_ & (uint)((ulonglong)(0.0 - dVar39) >> 0x20);
          auVar19._0_4_ = ~auVar36._0_4_ & SUB84(0.0 - dVar39,0);
          auVar19._8_4_ = ~auVar36._8_4_ & SUB84(0.0 - dVar40,0);
          auVar19._12_4_ = ~auVar36._12_4_ & (uint)((ulonglong)(0.0 - dVar40) >> 0x20);
          dVar31 = dVar31 * dVar38 +
                   (double)(~uVar34 & (ulonglong)(0.0 - dVar25) | (ulonglong)dVar25 & uVar34) *
                   dVar33;
          dVar32 = dVar32 * dVar38 +
                   (double)(~uVar29 & (ulonglong)(0.0 - dVar28) | (ulonglong)dVar28 & uVar29) *
                   dVar33;
          dVar25 = dVar6 * dVar38 + SUB168(auVar41 | auVar19,0) * dVar33;
          dVar28 = dVar7 * dVar38 + SUB168(auVar41 | auVar19,8) * dVar33;
          dVar39 = dVar28 * dVar28 + dVar32 * dVar32 + dVar25 * dVar25 + dVar31 * dVar31;
          dVar40 = __real_3ff0000000000000 / SQRT(dVar39);
          uVar34 = ~-(ulonglong)(dVar39 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
          uVar29 = (ulonglong)(dVar28 * dVar40) & uVar34;
          auVar47._0_8_ = ~uVar34 & ___xmm_3ff00000000000000000000000000000;
          auVar47._8_8_ = ~uVar34 & _UNK_15061cbc8;
          auVar17._8_8_ = (ulonglong)(dVar32 * dVar40) & uVar34;
          auVar17._0_8_ = (ulonglong)(dVar31 * dVar40) & uVar34;
          auVar47 = auVar47 | auVar17;
          uVar43 = auVar47._8_4_;
          uVar44 = auVar47._12_4_;
          uVar27 = (undefined4)uVar29;
          uVar30 = (undefined4)(uVar29 >> 0x20);
          dVar4 = dVar4 + (dVar14 - dVar4) * dVar38;
          dVar5 = dVar5 + (dVar15 - dVar5) * dVar38;
          dVar2 = dVar2 + (dVar10 - dVar2) * dVar38;
          dVar1 = dVar1 + (dVar8 - dVar1) * dVar38;
          dVar26 = dVar26 + (dVar13 - dVar26) * dVar38;
          dVar3 = dVar3 + (dVar11 - dVar3) * dVar38;
          dVar35 = dVar35 + (dVar9 - dVar35) * dVar38;
          dVar39 = (double)((ulonglong)(dVar25 * dVar40) & uVar34);
          dVar25 = auVar47._0_8_;
          dVar45 = dVar45 + (dVar12 - dVar45) * dVar38;
        }
      }
      *(double *)(param_1 + -0x58 + lVar23 * 8) = dVar39;
      *(ulonglong *)(param_1 + -0x50 + lVar23 * 8) = CONCAT44(uVar30,uVar27);
      *(double *)(param_1 + -0x48 + lVar23 * 8) = dVar25;
      *(ulonglong *)(param_1 + -0x40 + lVar23 * 8) = CONCAT44(uVar44,uVar43);
      *(double *)(param_1 + -0x38 + lVar23 * 8) = dVar1;
      *(double *)(param_1 + -0x30 + lVar23 * 8) = dVar35;
      *(double *)(param_1 + -0x28 + lVar23 * 8) = dVar2;
      *(double *)(param_1 + -0x20 + lVar23 * 8) = dVar3;
      *(double *)(param_1 + -0x18 + lVar23 * 8) = dVar45;
      *(double *)(param_1 + -0x10 + lVar23 * 8) = dVar26;
      *(double *)(param_1 + -8 + lVar23 * 8) = dVar4;
      *(double *)(param_1 + lVar23 * 8) = dVar5;
      uVar24 = uVar24 + 1;
      lVar23 = lVar23 + 0xc;
    } while (param_7 != uVar24);
  }
  return;
}

// BlendCurves___un_3C_Cunf_3E_un_3C_Cunu_3E_un_3C_unf_3E_un_3C_unu_3E_CuniCuniunf_sse4 @ 140ac6630

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendCurves___un_3C_Cunf_3E_un_3C_Cunu_3E_un_3C_unf_3E_un_3C_unu_3E_CuniCuniunf_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               int param_6,float param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  byte bVar19;
  undefined4 unaff_EBP;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint unaff_EDI;
  undefined4 uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  uint *puVar31;
  uint *puVar32;
  uint unaff_R15D;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar16 = _UNK_151c6b11c;
  uVar15 = _UNK_151c6b118;
  uVar14 = _UNK_151c6b114;
  uVar13 = ___xmm_0f8000000f8000000f8000000f800000;
  uVar12 = _UNK_151c6b10c;
  uVar22 = _UNK_151c6b108;
  uVar17 = _UNK_151c6b104;
  uVar24 = ___xmm_01800000010000000080000000000000;
  iVar11 = _UNK_15076b1fc;
  iVar10 = _UNK_15076b1f8;
  iVar9 = _UNK_15076b1f4;
  iVar28 = ___xmm_3f8000003f8000003f8000003f800000;
  fVar8 = __real_3727c5ac;
  if ((param_6 == 0) &&
     ((double)(float)((uint)(__real_bf800000 + param_7) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_3e45798ee2308c3a)) {
    param_7 = __real_3f800000;
  }
  uVar21 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar21 = param_5;
  }
  if ((int)(uVar21 & 0xfffffffc) < 1) {
    puVar31 = (uint *)0x0;
  }
  else {
    unaff_EDI = 0;
    puVar31 = (uint *)0x0;
    do {
      iVar30 = (int)puVar31;
      auVar38._0_4_ = (int)(float)(((iVar30 << 0x17 | uVar24) & uVar13) + iVar28);
      auVar38._4_4_ = (int)(float)(((iVar30 << 0x17 | uVar17) & uVar14) + iVar9);
      auVar38._8_4_ = (int)(float)(((iVar30 << 0x17 | uVar22) & uVar15) + iVar10);
      auVar38._12_4_ = (int)(float)(((iVar30 << 0x17 | uVar12) & uVar16) + iVar11);
      uVar23 = *(undefined4 *)(param_2 + (ulonglong)((uint)((ulonglong)puVar31 >> 3) & 0xffffffc));
      auVar39._4_4_ = uVar23;
      auVar39._0_4_ = uVar23;
      auVar39._8_4_ = uVar23;
      auVar39._12_4_ = uVar23;
      if ((auVar38 & auVar39) != (undefined1  [16])0x0) {
        auVar39 = auVar39 & auVar38;
        auVar40._0_4_ = -(uint)(auVar39._0_4_ == 0);
        auVar40._4_4_ = -(uint)(auVar39._4_4_ == 0);
        auVar40._8_4_ = -(uint)(auVar39._8_4_ == 0);
        auVar40._12_4_ = -(uint)(auVar39._12_4_ == 0);
        uVar29 = (ulonglong)unaff_EDI;
        puVar18 = (uint *)(param_3 + uVar29);
        uVar20 = movmskps(unaff_EBP,auVar40);
        if ((uVar20 & 9) == 0) {
          if (param_6 == 0) {
            auVar38 = *(undefined1 (*) [16])(param_1 + uVar29);
LAB_140ac6896:
            auVar41._0_4_ = auVar38._0_4_ * param_7;
            auVar41._4_4_ = auVar38._4_4_ * param_7;
            auVar41._8_4_ = auVar38._8_4_ * param_7;
            auVar41._12_4_ = auVar38._12_4_ * param_7;
          }
          else {
            auVar41 = *(undefined1 (*) [16])(param_3 + uVar29);
            if (fVar8 < param_7) {
              auVar38 = *(undefined1 (*) [16])(param_1 + uVar29);
              auVar39 = auVar41;
LAB_140ac68c6:
              auVar41._0_4_ = auVar39._0_4_ + auVar38._0_4_ * param_7;
              auVar41._4_4_ = auVar39._4_4_ + auVar38._4_4_ * param_7;
              auVar41._8_4_ = auVar39._8_4_ + auVar38._8_4_ * param_7;
              auVar41._12_4_ = auVar39._12_4_ + auVar38._12_4_ * param_7;
            }
          }
        }
        else {
          auVar4._8_4_ = 0xffffffff;
          auVar4._0_8_ = 0xffffffffffffffff;
          auVar4._12_4_ = 0xffffffff;
          auVar41 = auVar40 ^ auVar4;
          unaff_R15D = movmskps(unaff_R15D,auVar41);
          if ((unaff_R15D & 1) != 0) {
            auVar41 = ZEXT416(*puVar18);
          }
          if ((unaff_R15D & 2) != 0) {
            auVar41 = insertps(auVar41,puVar18[1],0x10);
          }
          if ((unaff_R15D & 4) != 0) {
            auVar41 = insertps(auVar41,puVar18[2],0x20);
          }
          if ((unaff_R15D & 8) != 0) {
            auVar41 = insertps(auVar41,puVar18[3],0x30);
          }
          if (param_6 == 0) {
            puVar32 = (uint *)(uVar29 + param_1);
            auVar38 = auVar41;
            if ((unaff_R15D & 1) != 0) {
              auVar38 = ZEXT416(*puVar32);
            }
            if ((unaff_R15D & 2) != 0) {
              auVar38 = insertps(auVar38,puVar32[1],0x10);
            }
            if ((unaff_R15D & 4) != 0) {
              auVar38 = insertps(auVar38,puVar32[2],0x20);
            }
            if ((unaff_R15D & 8) != 0) {
              auVar38 = insertps(auVar38,puVar32[3],0x30);
            }
            goto LAB_140ac6896;
          }
          if (fVar8 < param_7) {
            puVar32 = (uint *)(uVar29 + param_1);
            if ((unaff_R15D & 1) != 0) {
              auVar38 = ZEXT416(*puVar32);
            }
            if ((unaff_R15D & 2) != 0) {
              auVar38 = insertps(auVar38,puVar32[1],0x10);
            }
            if ((unaff_R15D & 4) != 0) {
              auVar38 = insertps(auVar38,puVar32[2],0x20);
            }
            auVar39 = auVar41;
            if ((unaff_R15D & 8) != 0) {
              auVar38 = insertps(auVar38,puVar32[3],0x30);
            }
            goto LAB_140ac68c6;
          }
        }
        bVar19 = (char)(((byte)uVar20 ^ 0xf) << 4) >> 4;
        unaff_EBP = CONCAT31((int3)(uVar20 >> 8),bVar19);
        if ((bVar19 & 1) != 0) {
          *puVar18 = auVar41._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar3 = extractps(auVar41,1);
          *(undefined8 *)(puVar18 + 1) = uVar3;
        }
        if ((bVar19 & 4) != 0) {
          uVar3 = extractps(auVar41,2);
          *(undefined8 *)(puVar18 + 2) = uVar3;
        }
        if ((char)bVar19 < '\0') {
          uVar3 = extractps(auVar41,3);
          *(undefined8 *)(puVar18 + 3) = uVar3;
        }
      }
      puVar31 = puVar31 + 1;
      unaff_EDI = unaff_EDI + 0x10;
    } while ((int)puVar31 < (int)(uVar21 & 0xfffffffc));
  }
  uVar24 = (uint)puVar31;
  if ((int)uVar24 < (int)param_5) {
    auVar35._0_4_ =
         (float)-(uint)((int)(uVar24 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5)
    ;
    auVar35._4_4_ =
         (float)-(uint)((int)(uVar24 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5)
    ;
    auVar35._8_4_ = (float)-(uint)((int)(uVar24 | _UNK_150631e08) < (int)param_5);
    auVar35._12_4_ = (float)-(uint)((int)(uVar24 | _UNK_150631e0c) < (int)param_5);
    uVar22 = (uint)((ulonglong)puVar31 >> 3) & 0xffffffc;
    uVar17 = *(uint *)(param_2 + (ulonglong)uVar22);
    auVar37._0_4_ =
         -(uint)((uVar17 & (int)(float)(((uVar24 | (uint)__xmm_00000003000000020000000100000000) <<
                                         0x17 & ___xmm_0f8000000f8000000f8000000f800000) +
                                       ___xmm_3f8000003f8000003f8000003f800000)) == 0);
    auVar37._4_4_ =
         -(uint)((uVar17 & (int)(float)(((uVar24 | __xmm_00000003000000020000000100000000._4_4_) <<
                                         0x17 & _UNK_151c6b114) + _UNK_15076b1f4)) == 0);
    auVar37._8_4_ =
         -(uint)((uVar17 & (int)(float)(((uVar24 | _UNK_150631e08) << 0x17 & _UNK_151c6b118) +
                                       _UNK_15076b1f8)) == 0);
    auVar37._12_4_ =
         -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) ==
                (uVar17 & (int)(float)(((uVar24 | _UNK_150631e0c) << 0x17 & _UNK_151c6b11c) +
                                      _UNK_15076b1fc)));
    uVar23 = movmskps(uVar22,auVar37 & auVar35);
    uVar26 = movmskps(unaff_EDI,auVar35);
    if ((char)uVar23 != (char)uVar26) {
      auVar38 = ~auVar37 & auVar35;
      lVar27 = (longlong)(int)(uVar24 << 2);
      puVar31 = (uint *)(param_3 + lVar27);
      uVar24 = movmskps(uVar23,auVar38);
      bVar19 = (char)((byte)uVar24 << 4) >> 4;
      if ((~(byte)uVar24 & 9) == 0) {
        if (param_6 == 0) {
          auVar38 = *(undefined1 (*) [16])(param_1 + lVar27);
LAB_140ac6ad9:
          auVar35._4_4_ = param_7 * auVar38._4_4_;
          auVar35._0_4_ = param_7 * auVar38._0_4_;
          auVar35._8_4_ = param_7 * auVar38._8_4_;
          auVar35._12_4_ = param_7 * auVar38._12_4_;
        }
        else {
          auVar35 = *(undefined1 (*) [16])(param_3 + lVar27);
          if (__real_3727c5ac < param_7) {
            auVar38 = *(undefined1 (*) [16])(param_1 + lVar27);
            auVar39 = auVar35;
LAB_140ac6b0d:
            auVar35._0_4_ = auVar39._0_4_ + param_7 * auVar38._0_4_;
            auVar35._4_4_ = auVar39._4_4_ + param_7 * auVar38._4_4_;
            auVar35._8_4_ = auVar39._8_4_ + param_7 * auVar38._8_4_;
            auVar35._12_4_ = auVar39._12_4_ + param_7 * auVar38._12_4_;
          }
        }
      }
      else {
        if ((uVar24 & 1) != 0) {
          auVar35 = ZEXT416(*puVar31);
        }
        if ((uVar24 & 2) != 0) {
          auVar35 = insertps(auVar35,puVar31[1],0x10);
        }
        if ((uVar24 & 4) != 0) {
          auVar35 = insertps(auVar35,puVar31[2],0x20);
        }
        if ((uVar24 & 8) != 0) {
          auVar35 = insertps(auVar35,puVar31[3],0x30);
        }
        if (param_6 == 0) {
          puVar18 = (uint *)(param_1 + lVar27);
          auVar38 = auVar35;
          if ((uVar24 & 1) != 0) {
            auVar38 = ZEXT416(*puVar18);
          }
          if ((uVar24 & 2) != 0) {
            auVar38 = insertps(auVar38,puVar18[1],0x10);
          }
          if ((uVar24 & 4) != 0) {
            auVar38 = insertps(auVar38,puVar18[2],0x20);
          }
          if ((uVar24 & 8) != 0) {
            auVar38 = insertps(auVar38,puVar18[3],0x30);
          }
          goto LAB_140ac6ad9;
        }
        if (__real_3727c5ac < param_7) {
          puVar18 = (uint *)(param_1 + lVar27);
          if ((uVar24 & 1) != 0) {
            auVar38 = ZEXT416(*puVar18);
          }
          if ((uVar24 & 2) != 0) {
            auVar38 = insertps(auVar38,puVar18[1],0x10);
          }
          if ((uVar24 & 4) != 0) {
            auVar38 = insertps(auVar38,puVar18[2],0x20);
          }
          auVar39 = auVar35;
          if ((uVar24 & 8) != 0) {
            auVar38 = insertps(auVar38,puVar18[3],0x30);
          }
          goto LAB_140ac6b0d;
        }
      }
      if ((bVar19 & 1) != 0) {
        *puVar31 = auVar35._0_4_;
      }
      if ((bVar19 & 2) != 0) {
        uVar3 = extractps(auVar35,1);
        *(undefined8 *)(puVar31 + 1) = uVar3;
      }
      if ((bVar19 & 4) != 0) {
        uVar3 = extractps(auVar35,2);
        *(undefined8 *)(puVar31 + 2) = uVar3;
      }
      if ((char)bVar19 < '\0') {
        uVar3 = extractps(auVar35,3);
        *(undefined8 *)(puVar31 + 3) = uVar3;
      }
    }
  }
  uVar22 = (uint)puVar31;
  auVar38 = roundss(ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),
                    ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),10);
  uVar17 = (uint)auVar38._0_4_;
  uVar24 = uVar17 + 3;
  if (-1 < (int)uVar17) {
    uVar24 = uVar17;
  }
  uVar24 = uVar24 & 0xfffffffc;
  if ((int)uVar24 < 1) {
    iVar28 = 0;
    if ((int)uVar17 < 1) {
      return;
    }
  }
  else {
    uVar22 = 0;
    uVar29 = 0;
    if (param_6 == 0) {
      do {
        puVar1 = (undefined8 *)(param_2 + (ulonglong)uVar22);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(param_4 + (ulonglong)uVar22);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        uVar29 = uVar29 + 4;
        uVar22 = uVar22 + 0x10;
      } while (uVar29 < uVar24);
    }
    else {
      do {
        uVar25 = (ulonglong)uVar22;
        uVar5 = ((ulonglong *)(param_4 + uVar25))[1];
        uVar6 = ((ulonglong *)(param_2 + uVar25))[1];
        *(ulonglong *)(param_4 + uVar25) =
             *(ulonglong *)(param_2 + uVar25) | *(ulonglong *)(param_4 + uVar25);
        ((ulonglong *)(param_4 + uVar25))[1] = uVar6 | uVar5;
        uVar29 = uVar29 + 4;
        uVar22 = uVar22 + 0x10;
      } while (uVar29 < uVar24);
    }
    iVar28 = (int)uVar29;
    if ((int)uVar17 <= iVar28) {
      return;
    }
  }
  auVar33._4_4_ = iVar28;
  auVar33._0_4_ = iVar28;
  auVar33._8_4_ = iVar28;
  auVar33._12_4_ = iVar28;
  auVar7._4_4_ = __xmm_00000003000000020000000100000000._4_4_;
  auVar7._0_4_ = (uint)__xmm_00000003000000020000000100000000;
  auVar7._8_4_ = _UNK_150631e08;
  auVar7._12_4_ = _UNK_150631e0c;
  auVar34 = auVar33 | auVar7;
  auVar36._0_4_ = -(uint)(auVar34._0_4_ < (int)uVar17);
  auVar36._4_4_ = -(uint)(auVar34._4_4_ < (int)uVar17);
  auVar36._8_4_ = -(uint)(auVar34._8_4_ < (int)uVar17);
  auVar36._12_4_ = -(uint)(auVar34._12_4_ < (int)uVar17);
  lVar27 = (longlong)(iVar28 << 2);
  uVar24 = movmskps(uVar22,auVar36);
  bVar19 = (char)((byte)uVar24 << 4) >> 4;
  puVar31 = (uint *)(param_4 + lVar27);
  if ((~(byte)uVar24 & 9) == 0) {
    auVar34 = *(undefined1 (*) [16])(param_2 + lVar27);
    if (param_6 == 0) {
LAB_140ac6cb1:
      if ((bVar19 & 1) != 0) {
        *(int *)(param_4 + lVar27) = auVar34._0_4_;
      }
      if ((bVar19 & 2) != 0) {
        *(int *)(param_4 + 4 + lVar27) = auVar34._4_4_;
      }
      if ((bVar19 & 4) != 0) {
        *(int *)(param_4 + 8 + lVar27) = auVar34._8_4_;
      }
      if (-1 < (char)bVar19) {
        return;
      }
      *(int *)(param_4 + 0xc + lVar27) = auVar34._12_4_;
      return;
    }
    auVar36 = *(undefined1 (*) [16])(param_4 + lVar27);
  }
  else {
    puVar18 = (uint *)(param_2 + lVar27);
    if ((uVar24 & 1) != 0) {
      auVar34 = ZEXT416(*puVar18);
    }
    if ((uVar24 & 2) != 0) {
      auVar34._0_8_ = auVar34._0_8_ & 0xffffffff | (ulonglong)puVar18[1] << 0x20;
    }
    if ((uVar24 & 4) != 0) {
      auVar34._8_8_ = auVar34._8_8_ & 0xffffffff00000000 | (ulonglong)puVar18[2];
    }
    if ((uVar24 & 8) != 0) {
      auVar34._8_8_ = auVar34._8_8_ & 0xffffffff | (ulonglong)puVar18[3] << 0x20;
    }
    if (param_6 == 0) goto LAB_140ac6cb1;
    if ((uVar24 & 1) != 0) {
      auVar36 = ZEXT416(*puVar31);
    }
    if ((uVar24 & 2) != 0) {
      auVar36._0_8_ = auVar36._0_8_ & 0xffffffff | (ulonglong)puVar31[1] << 0x20;
    }
    if ((uVar24 & 4) != 0) {
      auVar36._8_8_ = auVar36._8_8_ & 0xffffffff00000000 | (ulonglong)puVar31[2];
    }
    if ((uVar24 & 8) != 0) {
      auVar36._8_8_ = auVar36._8_8_ & 0xffffffff | (ulonglong)puVar31[3] << 0x20;
    }
  }
  auVar34 = auVar34 | auVar36;
  if ((bVar19 & 1) != 0) {
    *puVar31 = auVar34._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    puVar31[1] = auVar34._4_4_;
  }
  if ((bVar19 & 4) != 0) {
    puVar31[2] = auVar34._8_4_;
  }
  if ((char)bVar19 < '\0') {
    puVar31[3] = auVar34._12_4_;
  }
  return;
}

// LerpBoneTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cunfun_3C_CunS_3E_Cuni_sse4 @ 140ac6df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LerpBoneTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cunfun_3C_CunS_3E_Cuni_sse4
               (longlong param_1,longlong param_2,float param_3,longlong param_4,uint param_5,
               undefined1 (*param_6) [16])

{
  double *pdVar1;
  double *pdVar2;
  ulonglong *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lVar19;
  double dVar20;
  double dVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  undefined4 in_R10D;
  int iVar26;
  ulonglong uVar27;
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  int iVar41;
  double dVar42;
  undefined1 auVar40 [16];
  ulonglong uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar51;
  double dVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  dVar21 = _UNK_150aa88b8;
  dVar20 = ___xmm_3e45798ee2308c3a3e45798ee2308c3a;
  auVar34 = ___xmm_3ff00000000000003ff0000000000000;
  uVar23 = _UNK_15061cbc8;
  uVar22 = ___xmm_3ff00000000000000000000000000000;
  iVar26 = movmskps(in_R10D,*param_6);
  uVar24 = param_5 & 0xfffffffc;
  fVar28 = __real_3f800000 - param_3;
  if (iVar26 == 0xf) {
    if (0 < (int)uVar24) {
      dVar29 = (double)fVar28;
      dVar11 = (double)param_3;
      uVar27 = 0;
      do {
        uVar39 = (ulonglong)((uint)*(ushort *)(param_4 + uVar27 * 2) * 0x60);
        pdVar1 = (double *)(param_1 + 0x10 + uVar39);
        pdVar2 = (double *)(param_2 + 0x10 + uVar39);
        dVar47 = *(double *)(param_1 + uVar39) * dVar29;
        dVar50 = ((double *)(param_1 + uVar39))[1] * dVar29;
        dVar44 = *pdVar1 * dVar29;
        dVar46 = pdVar1[1] * dVar29;
        dVar51 = *(double *)(param_2 + uVar39) * dVar11;
        dVar56 = ((double *)(param_2 + uVar39))[1] * dVar11;
        dVar32 = *pdVar2 * dVar11;
        dVar36 = pdVar2[1] * dVar11;
        dVar37 = dVar47 * dVar51 + dVar44 * dVar32;
        dVar42 = dVar50 * dVar56 + dVar46 * dVar36;
        iVar26 = -(uint)(0.0 <= dVar42 + dVar37);
        iVar41 = -(uint)(0.0 <= dVar37 + dVar42);
        auVar40._4_4_ = iVar26;
        auVar40._0_4_ = iVar26;
        auVar40._8_4_ = iVar41;
        auVar40._12_4_ = iVar41;
        auVar54._8_4_ = 0xffffffff;
        auVar54._0_8_ = 0xffffffffffffffff;
        auVar54._12_4_ = 0xffffffff;
        auVar40 = blendvps(ZEXT816(0),auVar54,auVar40);
        uVar38 = auVar40._0_8_;
        auVar35._0_8_ = (ulonglong)dVar32 & uVar38;
        uVar43 = auVar40._8_8_;
        auVar35._8_8_ = (ulonglong)dVar36 & uVar43;
        auVar18._4_4_ = ~auVar40._4_4_ & (uint)((ulonglong)(0.0 - dVar32) >> 0x20);
        auVar18._0_4_ = ~auVar40._0_4_ & SUB84(0.0 - dVar32,0);
        auVar18._8_4_ = ~auVar40._8_4_ & SUB84(0.0 - dVar36,0);
        auVar18._12_4_ = ~auVar40._12_4_ & (uint)((ulonglong)(0.0 - dVar36) >> 0x20);
        dVar47 = (double)(~uVar38 & (ulonglong)(0.0 - dVar51) | (ulonglong)dVar51 & uVar38) + dVar47
        ;
        dVar50 = (double)(~uVar43 & (ulonglong)(0.0 - dVar56) | (ulonglong)dVar56 & uVar43) + dVar50
        ;
        dVar44 = SUB168(auVar35 | auVar18,0) + dVar44;
        dVar46 = SUB168(auVar35 | auVar18,8) + dVar46;
        dVar32 = dVar47 * dVar47 + dVar44 * dVar44;
        dVar36 = dVar50 * dVar50 + dVar46 * dVar46;
        auVar49._0_8_ = dVar36 + dVar32;
        auVar49._8_8_ = dVar32 + dVar36;
        iVar26 = -(uint)(dVar20 <= auVar49._0_8_);
        iVar41 = -(uint)(dVar21 <= auVar49._8_8_);
        auVar40 = sqrtpd(auVar49,auVar49);
        auVar54 = divpd(auVar34,auVar40);
        auVar52._4_4_ = iVar26;
        auVar52._0_4_ = iVar26;
        auVar52._8_4_ = iVar41;
        auVar52._12_4_ = iVar41;
        auVar16._8_4_ = 0xffffffff;
        auVar16._0_8_ = 0xffffffffffffffff;
        auVar16._12_4_ = 0xffffffff;
        auVar40 = blendvps(ZEXT816(0),auVar16,auVar52);
        uVar38 = auVar40._0_8_;
        uVar43 = auVar40._8_8_;
        *(ulonglong *)(param_1 + uVar39) = (ulonglong)(dVar47 * auVar54._0_8_) & uVar38;
        ((ulonglong *)(param_1 + uVar39))[1] = (ulonglong)(dVar50 * auVar54._8_8_) & uVar43;
        puVar3 = (ulonglong *)(param_1 + 0x10 + uVar39);
        *puVar3 = ~uVar38 & uVar22 | (ulonglong)(auVar54._0_8_ * dVar44) & uVar38;
        puVar3[1] = ~uVar43 & uVar23 | (ulonglong)(auVar54._8_8_ * dVar46) & uVar43;
        pdVar1 = (double *)(param_1 + 0x20 + uVar39);
        dVar32 = pdVar1[1];
        pdVar2 = (double *)(param_1 + 0x30 + uVar39);
        dVar44 = *pdVar2;
        dVar36 = pdVar2[1];
        pdVar2 = (double *)(param_2 + 0x20 + uVar39);
        dVar46 = pdVar2[1];
        pdVar4 = (double *)(param_2 + 0x30 + uVar39);
        dVar37 = *pdVar4;
        dVar47 = pdVar4[1];
        pdVar4 = (double *)(param_1 + 0x20 + uVar39);
        *pdVar4 = *pdVar2 * dVar11 + *pdVar1 * dVar29;
        pdVar4[1] = dVar46 * dVar11 + dVar32 * dVar29;
        pdVar1 = (double *)(param_1 + 0x30 + uVar39);
        *pdVar1 = dVar37 * dVar11 + dVar44 * dVar29;
        pdVar1[1] = dVar47 * dVar11 + dVar36 * dVar29;
        pdVar1 = (double *)(param_1 + 0x40 + uVar39);
        dVar32 = pdVar1[1];
        pdVar2 = (double *)(param_1 + 0x50 + uVar39);
        dVar44 = *pdVar2;
        dVar36 = pdVar2[1];
        pdVar2 = (double *)(param_2 + 0x40 + uVar39);
        dVar46 = pdVar2[1];
        pdVar4 = (double *)(param_2 + 0x50 + uVar39);
        dVar37 = *pdVar4;
        dVar47 = pdVar4[1];
        pdVar4 = (double *)(param_1 + 0x40 + uVar39);
        *pdVar4 = *pdVar2 * dVar11 + *pdVar1 * dVar29;
        pdVar4[1] = dVar46 * dVar11 + dVar32 * dVar29;
        pdVar1 = (double *)(param_1 + 0x50 + uVar39);
        *pdVar1 = dVar37 * dVar11 + dVar44 * dVar29;
        pdVar1[1] = dVar47 * dVar11 + dVar36 * dVar29;
        uVar27 = uVar27 + 1;
      } while (uVar24 != uVar27);
    }
    uVar27 = __real_ffffffffffffffff;
    uVar23 = _UNK_15061cbc8;
    uVar22 = ___xmm_3ff00000000000000000000000000000;
    dVar21 = __real_3e45798ee2308c3a;
    dVar20 = __real_3ff0000000000000;
    if ((int)uVar24 < (int)param_5) {
      dVar29 = (double)fVar28;
      dVar11 = (double)param_3;
      lVar25 = (longlong)(int)uVar24;
      do {
        lVar19 = (ulonglong)*(ushort *)(param_4 + lVar25 * 2) * 0x60;
        pdVar1 = (double *)(param_1 + 0x10 + lVar19);
        dVar42 = *(double *)(param_1 + lVar19) * dVar29;
        dVar50 = ((double *)(param_1 + lVar19))[1] * dVar29;
        dVar51 = *pdVar1 * dVar29;
        dVar56 = pdVar1[1] * dVar29;
        pdVar1 = (double *)(param_2 + 0x10 + lVar19);
        dVar37 = *(double *)(param_2 + lVar19) * dVar11;
        dVar47 = ((double *)(param_2 + lVar19))[1] * dVar11;
        dVar32 = *pdVar1 * dVar11;
        dVar44 = pdVar1[1] * dVar11;
        dVar36 = dVar42 * dVar37 + dVar51 * dVar32;
        dVar46 = dVar50 * dVar47 + dVar56 * dVar44;
        iVar26 = -(uint)(0.0 <= dVar46 + dVar36);
        iVar41 = -(uint)(0.0 <= dVar36 + dVar46);
        auVar34._4_4_ = iVar26;
        auVar34._0_4_ = iVar26;
        auVar34._8_4_ = iVar41;
        auVar34._12_4_ = iVar41;
        auVar13._8_4_ = 0xffffffff;
        auVar13._0_8_ = 0xffffffffffffffff;
        auVar13._12_4_ = 0xffffffff;
        auVar34 = blendvps(ZEXT816(0),auVar13,auVar34);
        uVar39 = auVar34._0_8_;
        auVar55._0_4_ = ~auVar34._0_4_ & SUB84(0.0 - dVar32,0);
        uVar38 = auVar34._8_8_;
        auVar55._4_4_ = ~auVar34._4_4_ & (uint)((ulonglong)(0.0 - dVar32) >> 0x20);
        auVar55._8_4_ = ~auVar34._8_4_ & SUB84(0.0 - dVar44,0);
        auVar55._12_4_ = ~auVar34._12_4_ & (uint)((ulonglong)(0.0 - dVar44) >> 0x20);
        auVar31._0_8_ = (ulonglong)dVar32 & uVar39;
        auVar31._8_8_ = (ulonglong)dVar44 & uVar38;
        dVar42 = (double)(~uVar39 & (ulonglong)(0.0 - dVar37) | (ulonglong)dVar37 & uVar39) + dVar42
        ;
        dVar50 = (double)(~uVar38 & (ulonglong)(0.0 - dVar47) | (ulonglong)dVar47 & uVar38) + dVar50
        ;
        dVar51 = SUB168(auVar31 | auVar55,0) + dVar51;
        dVar56 = SUB168(auVar31 | auVar55,8) + dVar56;
        dVar32 = dVar50 * dVar50 + dVar56 * dVar56 + dVar42 * dVar42 + dVar51 * dVar51;
        dVar45 = dVar20 / SQRT(dVar32);
        pdVar1 = (double *)(param_1 + 0x20 + lVar19);
        dVar44 = *pdVar1;
        dVar36 = pdVar1[1];
        uVar39 = ~-(ulonglong)(dVar32 < dVar21) & uVar27;
        pdVar1 = (double *)(param_2 + 0x20 + lVar19);
        dVar32 = *pdVar1;
        dVar46 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x30 + lVar19);
        dVar37 = *pdVar1;
        dVar47 = pdVar1[1];
        *(ulonglong *)(param_1 + lVar19) = (ulonglong)(dVar42 * dVar45) & uVar39;
        ((ulonglong *)(param_1 + lVar19))[1] = (ulonglong)(dVar50 * dVar45) & uVar39;
        pdVar1 = (double *)(param_2 + 0x30 + lVar19);
        dVar42 = *pdVar1;
        dVar50 = pdVar1[1];
        puVar3 = (ulonglong *)(param_1 + 0x10 + lVar19);
        *puVar3 = ~uVar39 & uVar22 | (ulonglong)(dVar51 * dVar45) & uVar39;
        puVar3[1] = ~uVar39 & uVar23 | (ulonglong)(dVar56 * dVar45) & uVar39;
        pdVar1 = (double *)(param_1 + 0x20 + lVar19);
        *pdVar1 = dVar32 * dVar11 + dVar44 * dVar29;
        pdVar1[1] = dVar46 * dVar11 + dVar36 * dVar29;
        pdVar1 = (double *)(param_1 + 0x30 + lVar19);
        *pdVar1 = dVar42 * dVar11 + dVar37 * dVar29;
        pdVar1[1] = dVar50 * dVar11 + dVar47 * dVar29;
        pdVar1 = (double *)(param_1 + 0x40 + lVar19);
        dVar44 = pdVar1[1];
        pdVar2 = (double *)(param_1 + 0x50 + lVar19);
        dVar36 = *pdVar2;
        pdVar4 = (double *)(param_2 + 0x40 + lVar19);
        dVar46 = pdVar4[1];
        pdVar5 = (double *)(param_2 + 0x50 + lVar19);
        dVar37 = *pdVar5;
        dVar32 = pdVar5[1] * dVar11 + pdVar2[1] * dVar29;
        pdVar2 = (double *)(param_1 + 0x40 + lVar19);
        *pdVar2 = *pdVar4 * dVar11 + *pdVar1 * dVar29;
        pdVar2[1] = dVar46 * dVar11 + dVar44 * dVar29;
        auVar10._8_4_ = SUB84(dVar32,0);
        auVar10._0_8_ = dVar37 * dVar11 + dVar36 * dVar29;
        auVar10._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x50 + lVar19) = auVar10;
        lVar25 = lVar25 + 1;
      } while ((int)param_5 != lVar25);
    }
  }
  else {
    dVar29 = (double)fVar28;
    if (0 < (int)uVar24) {
      dVar11 = (double)param_3;
      uVar27 = 0;
      do {
        uVar39 = (ulonglong)((uint)*(ushort *)(param_4 + uVar27 * 2) * 0x60);
        pdVar1 = (double *)(param_1 + 0x10 + uVar39);
        pdVar2 = (double *)(param_2 + 0x10 + uVar39);
        dVar47 = *(double *)(param_1 + uVar39) * dVar29;
        dVar50 = ((double *)(param_1 + uVar39))[1] * dVar29;
        dVar44 = *pdVar1 * dVar29;
        dVar46 = pdVar1[1] * dVar29;
        dVar51 = *(double *)(param_2 + uVar39) * dVar11;
        dVar56 = ((double *)(param_2 + uVar39))[1] * dVar11;
        dVar32 = *pdVar2 * dVar11;
        dVar36 = pdVar2[1] * dVar11;
        dVar37 = dVar47 * dVar51 + dVar44 * dVar32;
        dVar42 = dVar50 * dVar56 + dVar46 * dVar36;
        iVar26 = -(uint)(0.0 <= dVar42 + dVar37);
        iVar41 = -(uint)(0.0 <= dVar37 + dVar42);
        auVar6._4_4_ = iVar26;
        auVar6._0_4_ = iVar26;
        auVar6._8_4_ = iVar41;
        auVar6._12_4_ = iVar41;
        auVar14._8_4_ = 0xffffffff;
        auVar14._0_8_ = 0xffffffffffffffff;
        auVar14._12_4_ = 0xffffffff;
        auVar40 = blendvps(ZEXT816(0),auVar14,auVar6);
        uVar38 = auVar40._0_8_;
        auVar33._0_8_ = (ulonglong)dVar32 & uVar38;
        uVar43 = auVar40._8_8_;
        auVar33._8_8_ = (ulonglong)dVar36 & uVar43;
        auVar17._4_4_ = ~auVar40._4_4_ & (uint)((ulonglong)(0.0 - dVar32) >> 0x20);
        auVar17._0_4_ = ~auVar40._0_4_ & SUB84(0.0 - dVar32,0);
        auVar17._8_4_ = ~auVar40._8_4_ & SUB84(0.0 - dVar36,0);
        auVar17._12_4_ = ~auVar40._12_4_ & (uint)((ulonglong)(0.0 - dVar36) >> 0x20);
        dVar47 = (double)(~uVar38 & (ulonglong)(0.0 - dVar51) | (ulonglong)dVar51 & uVar38) + dVar47
        ;
        dVar50 = (double)(~uVar43 & (ulonglong)(0.0 - dVar56) | (ulonglong)dVar56 & uVar43) + dVar50
        ;
        dVar44 = SUB168(auVar33 | auVar17,0) + dVar44;
        dVar46 = SUB168(auVar33 | auVar17,8) + dVar46;
        dVar32 = dVar47 * dVar47 + dVar44 * dVar44;
        dVar36 = dVar50 * dVar50 + dVar46 * dVar46;
        auVar48._0_8_ = dVar36 + dVar32;
        auVar48._8_8_ = dVar32 + dVar36;
        iVar26 = -(uint)(dVar20 <= auVar48._0_8_);
        iVar41 = -(uint)(dVar21 <= auVar48._8_8_);
        auVar40 = sqrtpd(auVar48,auVar48);
        auVar52 = divpd(auVar34,auVar40);
        auVar7._4_4_ = iVar26;
        auVar7._0_4_ = iVar26;
        auVar7._8_4_ = iVar41;
        auVar7._12_4_ = iVar41;
        auVar15._8_4_ = 0xffffffff;
        auVar15._0_8_ = 0xffffffffffffffff;
        auVar15._12_4_ = 0xffffffff;
        auVar40 = blendvps(ZEXT816(0),auVar15,auVar7);
        uVar38 = auVar40._0_8_;
        uVar43 = auVar40._8_8_;
        *(ulonglong *)(param_1 + uVar39) = (ulonglong)(dVar47 * auVar52._0_8_) & uVar38;
        ((ulonglong *)(param_1 + uVar39))[1] = (ulonglong)(dVar50 * auVar52._8_8_) & uVar43;
        puVar3 = (ulonglong *)(param_1 + 0x10 + uVar39);
        *puVar3 = ~uVar38 & uVar22 | (ulonglong)(auVar52._0_8_ * dVar44) & uVar38;
        puVar3[1] = ~uVar43 & uVar23 | (ulonglong)(auVar52._8_8_ * dVar46) & uVar43;
        pdVar1 = (double *)(param_1 + 0x20 + uVar39);
        dVar32 = pdVar1[1];
        pdVar2 = (double *)(param_1 + 0x30 + uVar39);
        dVar44 = *pdVar2;
        dVar36 = pdVar2[1];
        pdVar2 = (double *)(param_2 + 0x20 + uVar39);
        dVar46 = pdVar2[1];
        pdVar4 = (double *)(param_2 + 0x30 + uVar39);
        dVar37 = *pdVar4;
        dVar47 = pdVar4[1];
        pdVar4 = (double *)(param_1 + 0x20 + uVar39);
        *pdVar4 = *pdVar2 * dVar11 + *pdVar1 * dVar29;
        pdVar4[1] = dVar46 * dVar11 + dVar32 * dVar29;
        pdVar1 = (double *)(param_1 + 0x30 + uVar39);
        *pdVar1 = dVar37 * dVar11 + dVar44 * dVar29;
        pdVar1[1] = dVar47 * dVar11 + dVar36 * dVar29;
        pdVar1 = (double *)(param_1 + 0x40 + uVar39);
        dVar32 = pdVar1[1];
        pdVar2 = (double *)(param_1 + 0x50 + uVar39);
        dVar44 = *pdVar2;
        dVar36 = pdVar2[1];
        pdVar2 = (double *)(param_2 + 0x40 + uVar39);
        dVar46 = pdVar2[1];
        pdVar4 = (double *)(param_2 + 0x50 + uVar39);
        dVar37 = *pdVar4;
        dVar47 = pdVar4[1];
        pdVar4 = (double *)(param_1 + 0x40 + uVar39);
        *pdVar4 = *pdVar2 * dVar11 + *pdVar1 * dVar29;
        pdVar4[1] = dVar46 * dVar11 + dVar32 * dVar29;
        pdVar1 = (double *)(param_1 + 0x50 + uVar39);
        *pdVar1 = dVar37 * dVar11 + dVar44 * dVar29;
        pdVar1[1] = dVar47 * dVar11 + dVar36 * dVar29;
        uVar27 = uVar27 + 1;
      } while (uVar24 != uVar27);
    }
    uVar27 = __real_ffffffffffffffff;
    uVar23 = _UNK_15061cbc8;
    uVar22 = ___xmm_3ff00000000000000000000000000000;
    dVar21 = __real_3e45798ee2308c3a;
    dVar20 = __real_3ff0000000000000;
    if ((int)uVar24 < (int)param_5) {
      dVar11 = (double)param_3;
      lVar25 = (longlong)(int)uVar24;
      do {
        lVar19 = (ulonglong)*(ushort *)(param_4 + lVar25 * 2) * 0x60;
        pdVar1 = (double *)(param_1 + 0x10 + lVar19);
        dVar42 = *(double *)(param_1 + lVar19) * dVar29;
        dVar50 = ((double *)(param_1 + lVar19))[1] * dVar29;
        dVar51 = *pdVar1 * dVar29;
        dVar56 = pdVar1[1] * dVar29;
        pdVar1 = (double *)(param_2 + 0x10 + lVar19);
        dVar37 = *(double *)(param_2 + lVar19) * dVar11;
        dVar47 = ((double *)(param_2 + lVar19))[1] * dVar11;
        dVar32 = *pdVar1 * dVar11;
        dVar44 = pdVar1[1] * dVar11;
        dVar36 = dVar42 * dVar37 + dVar51 * dVar32;
        dVar46 = dVar50 * dVar47 + dVar56 * dVar44;
        iVar26 = -(uint)(0.0 <= dVar46 + dVar36);
        iVar41 = -(uint)(0.0 <= dVar36 + dVar46);
        auVar8._4_4_ = iVar26;
        auVar8._0_4_ = iVar26;
        auVar8._8_4_ = iVar41;
        auVar8._12_4_ = iVar41;
        auVar12._8_4_ = 0xffffffff;
        auVar12._0_8_ = 0xffffffffffffffff;
        auVar12._12_4_ = 0xffffffff;
        auVar34 = blendvps(ZEXT816(0),auVar12,auVar8);
        uVar39 = auVar34._0_8_;
        auVar53._0_4_ = ~auVar34._0_4_ & SUB84(0.0 - dVar32,0);
        uVar38 = auVar34._8_8_;
        auVar53._4_4_ = ~auVar34._4_4_ & (uint)((ulonglong)(0.0 - dVar32) >> 0x20);
        auVar53._8_4_ = ~auVar34._8_4_ & SUB84(0.0 - dVar44,0);
        auVar53._12_4_ = ~auVar34._12_4_ & (uint)((ulonglong)(0.0 - dVar44) >> 0x20);
        auVar30._0_8_ = (ulonglong)dVar32 & uVar39;
        auVar30._8_8_ = (ulonglong)dVar44 & uVar38;
        dVar42 = (double)(~uVar39 & (ulonglong)(0.0 - dVar37) | (ulonglong)dVar37 & uVar39) + dVar42
        ;
        dVar50 = (double)(~uVar38 & (ulonglong)(0.0 - dVar47) | (ulonglong)dVar47 & uVar38) + dVar50
        ;
        dVar51 = SUB168(auVar30 | auVar53,0) + dVar51;
        dVar56 = SUB168(auVar30 | auVar53,8) + dVar56;
        dVar32 = dVar50 * dVar50 + dVar56 * dVar56 + dVar42 * dVar42 + dVar51 * dVar51;
        dVar45 = dVar20 / SQRT(dVar32);
        pdVar1 = (double *)(param_1 + 0x20 + lVar19);
        dVar44 = *pdVar1;
        dVar36 = pdVar1[1];
        uVar39 = ~-(ulonglong)(dVar32 < dVar21) & uVar27;
        pdVar1 = (double *)(param_2 + 0x20 + lVar19);
        dVar32 = *pdVar1;
        dVar46 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x30 + lVar19);
        dVar37 = *pdVar1;
        dVar47 = pdVar1[1];
        *(ulonglong *)(param_1 + lVar19) = (ulonglong)(dVar42 * dVar45) & uVar39;
        ((ulonglong *)(param_1 + lVar19))[1] = (ulonglong)(dVar50 * dVar45) & uVar39;
        pdVar1 = (double *)(param_2 + 0x30 + lVar19);
        dVar42 = *pdVar1;
        dVar50 = pdVar1[1];
        puVar3 = (ulonglong *)(param_1 + 0x10 + lVar19);
        *puVar3 = ~uVar39 & uVar22 | (ulonglong)(dVar51 * dVar45) & uVar39;
        puVar3[1] = ~uVar39 & uVar23 | (ulonglong)(dVar56 * dVar45) & uVar39;
        pdVar1 = (double *)(param_1 + 0x20 + lVar19);
        *pdVar1 = dVar32 * dVar11 + dVar44 * dVar29;
        pdVar1[1] = dVar46 * dVar11 + dVar36 * dVar29;
        pdVar1 = (double *)(param_1 + 0x30 + lVar19);
        *pdVar1 = dVar42 * dVar11 + dVar37 * dVar29;
        pdVar1[1] = dVar50 * dVar11 + dVar47 * dVar29;
        pdVar1 = (double *)(param_1 + 0x40 + lVar19);
        dVar44 = pdVar1[1];
        pdVar2 = (double *)(param_1 + 0x50 + lVar19);
        dVar36 = *pdVar2;
        pdVar4 = (double *)(param_2 + 0x40 + lVar19);
        dVar46 = pdVar4[1];
        pdVar5 = (double *)(param_2 + 0x50 + lVar19);
        dVar37 = *pdVar5;
        dVar32 = pdVar5[1] * dVar11 + pdVar2[1] * dVar29;
        pdVar2 = (double *)(param_1 + 0x40 + lVar19);
        *pdVar2 = *pdVar4 * dVar11 + *pdVar1 * dVar29;
        pdVar2[1] = dVar46 * dVar11 + dVar44 * dVar29;
        auVar9._8_4_ = SUB84(dVar32,0);
        auVar9._0_8_ = dVar37 * dVar11 + dVar36 * dVar29;
        auVar9._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x50 + lVar19) = auVar9;
        lVar25 = lVar25 + 1;
      } while ((int)param_5 != lVar25);
    }
  }
  return;
}

// BlendTransformOverwrite_sse4 @ 140ac7750

void BlendTransformOverwrite_sse4(longlong param_1,longlong param_2,float param_3,uint param_4)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
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
  longlong lVar14;
  double dVar15;
  
  if (0 < (int)param_4) {
    dVar15 = (double)param_3;
    lVar14 = 0;
    do {
      dVar4 = ((double *)(param_1 + lVar14))[1];
      pdVar1 = (double *)(param_1 + 0x10 + lVar14);
      dVar5 = *pdVar1;
      dVar6 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x20 + lVar14);
      dVar7 = *pdVar1;
      dVar8 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x30 + lVar14);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x40 + lVar14);
      dVar11 = *pdVar1;
      dVar12 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x50 + lVar14);
      dVar13 = *pdVar1;
      dVar3 = pdVar1[1] * dVar15;
      *(double *)(param_2 + lVar14) = *(double *)(param_1 + lVar14) * dVar15;
      ((double *)(param_2 + lVar14))[1] = dVar4 * dVar15;
      pdVar1 = (double *)(param_2 + 0x10 + lVar14);
      *pdVar1 = dVar5 * dVar15;
      pdVar1[1] = dVar6 * dVar15;
      pdVar1 = (double *)(param_2 + 0x20 + lVar14);
      *pdVar1 = dVar7 * dVar15;
      pdVar1[1] = dVar8 * dVar15;
      pdVar1 = (double *)(param_2 + 0x30 + lVar14);
      *pdVar1 = dVar9 * dVar15;
      pdVar1[1] = dVar10 * dVar15;
      pdVar1 = (double *)(param_2 + 0x40 + lVar14);
      *pdVar1 = dVar11 * dVar15;
      pdVar1[1] = dVar12 * dVar15;
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = dVar13 * dVar15;
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0x50 + lVar14) = auVar2;
      lVar14 = lVar14 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar14);
  }
  return;
}

// BlendTransformAccumulate_sse4 @ 140ac7800

void BlendTransformAccumulate_sse4(longlong param_1,longlong param_2,float param_3,uint param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
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
  longlong lVar25;
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  int iVar29;
  double dVar30;
  ulonglong uVar31;
  int iVar34;
  double dVar35;
  undefined1 auVar32 [16];
  ulonglong uVar36;
  undefined1 auVar33 [16];
  
  if (0 < (int)param_4) {
    dVar6 = (double)param_3;
    lVar25 = 0;
    do {
      pdVar1 = (double *)(param_1 + 0x10 + lVar25);
      pdVar2 = (double *)(param_1 + 0x20 + lVar25);
      dVar13 = *pdVar2;
      dVar14 = pdVar2[1];
      pdVar2 = (double *)(param_1 + 0x30 + lVar25);
      dVar15 = *pdVar2;
      dVar16 = pdVar2[1];
      dVar26 = *(double *)(param_1 + lVar25) * dVar6;
      dVar28 = ((double *)(param_1 + lVar25))[1] * dVar6;
      dVar10 = *pdVar1 * dVar6;
      dVar11 = pdVar1[1] * dVar6;
      dVar17 = *(double *)(param_2 + lVar25);
      dVar18 = ((double *)(param_2 + lVar25))[1];
      pdVar1 = (double *)(param_2 + 0x10 + lVar25);
      dVar19 = *pdVar1;
      dVar20 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x20 + lVar25);
      dVar21 = *pdVar1;
      dVar22 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x30 + lVar25);
      dVar23 = *pdVar1;
      dVar24 = pdVar1[1];
      dVar30 = dVar26 * dVar17 + dVar10 * dVar19;
      dVar35 = dVar28 * dVar18 + dVar11 * dVar20;
      iVar29 = -(uint)(0.0 <= dVar35 + dVar30);
      iVar34 = -(uint)(0.0 <= dVar30 + dVar35);
      auVar32._4_4_ = iVar29;
      auVar32._0_4_ = iVar29;
      auVar32._8_4_ = iVar34;
      auVar32._12_4_ = iVar34;
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar32 = blendvps(ZEXT816(0),auVar7,auVar32);
      uVar31 = auVar32._0_8_;
      auVar27._0_8_ = (ulonglong)dVar26 & uVar31;
      uVar36 = auVar32._8_8_;
      auVar27._8_8_ = (ulonglong)dVar28 & uVar36;
      auVar12._4_4_ = ~auVar32._4_4_ & (uint)((ulonglong)(0.0 - dVar26) >> 0x20);
      auVar12._0_4_ = ~auVar32._0_4_ & SUB84(0.0 - dVar26,0);
      auVar12._8_4_ = ~auVar32._8_4_ & SUB84(0.0 - dVar28,0);
      auVar12._12_4_ = ~auVar32._12_4_ & (uint)((ulonglong)(0.0 - dVar28) >> 0x20);
      auVar33._0_8_ = ~uVar31 & (ulonglong)(0.0 - dVar10);
      auVar33._8_8_ = ~uVar36 & (ulonglong)(0.0 - dVar11);
      auVar9._8_4_ = (int)((ulonglong)dVar11 & uVar36);
      auVar9._0_8_ = (ulonglong)dVar10 & uVar31;
      auVar9._12_4_ = (int)(((ulonglong)dVar11 & uVar36) >> 0x20);
      pdVar1 = (double *)(param_1 + 0x50 + lVar25);
      dVar26 = *pdVar1;
      pdVar2 = (double *)(param_1 + 0x40 + lVar25);
      dVar28 = *pdVar2;
      pdVar3 = (double *)(param_2 + 0x40 + lVar25);
      dVar30 = *pdVar3;
      pdVar4 = (double *)(param_2 + 0x50 + lVar25);
      dVar35 = *pdVar4;
      dVar11 = pdVar2[1] * dVar6 + pdVar3[1];
      dVar10 = pdVar1[1] * dVar6 + pdVar4[1];
      *(double *)(param_2 + lVar25) = SUB168(auVar27 | auVar12,0) + dVar17;
      ((double *)(param_2 + lVar25))[1] = SUB168(auVar27 | auVar12,8) + dVar18;
      pdVar1 = (double *)(param_2 + 0x10 + lVar25);
      *pdVar1 = SUB168(auVar33 | auVar9,0) + dVar19;
      pdVar1[1] = SUB168(auVar33 | auVar9,8) + dVar20;
      pdVar1 = (double *)(param_2 + 0x20 + lVar25);
      *pdVar1 = dVar13 * dVar6 + dVar21;
      pdVar1[1] = dVar14 * dVar6 + dVar22;
      pdVar1 = (double *)(param_2 + 0x30 + lVar25);
      *pdVar1 = dVar15 * dVar6 + dVar23;
      pdVar1[1] = dVar16 * dVar6 + dVar24;
      auVar8._8_4_ = SUB84(dVar11,0);
      auVar8._0_8_ = dVar28 * dVar6 + dVar30;
      auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0x40 + lVar25) = auVar8;
      auVar5._8_4_ = SUB84(dVar10,0);
      auVar5._0_8_ = dVar26 * dVar6 + dVar35;
      auVar5._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0x50 + lVar25) = auVar5;
      lVar25 = lVar25 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar25);
  }
  return;
}

// ConvertPoseToAdditive_sse4 @ 140ac79c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToAdditive_sse4(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar6;
  double dVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong uVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  longlong lVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  double dVar34;
  float fVar43;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 in_XMM1 [16];
  ulonglong uVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar53;
  undefined1 auVar52 [16];
  int iVar54;
  int iVar56;
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 unaff_XMM15 [16];
  double dVar5;
  double dVar8;
  undefined1 auVar35 [16];
  
  dVar29 = _UNK_15076c6f8;
  dVar28 = ___xmm_bff00000000000003ff0000000000000;
  dVar27 = _UNK_15076b868;
  dVar26 = ___xmm_3ff0000000000000bff0000000000000;
  dVar25 = _UNK_150689698;
  dVar24 = ___xmm_40000000000000004000000000000000;
  if (0 < (int)param_3) {
    lVar30 = 0;
    do {
      dVar19 = *(double *)(param_2 + lVar30);
      dVar20 = ((double *)(param_2 + lVar30))[1];
      pdVar1 = (double *)(param_2 + 0x10 + lVar30);
      pdVar2 = (double *)(param_2 + 0x20 + lVar30);
      dVar21 = pdVar2[1];
      pdVar3 = (double *)(param_2 + 0x30 + lVar30);
      dVar22 = *pdVar3;
      dVar23 = pdVar3[1];
      dVar15 = *pdVar1 * dVar26;
      dVar44 = pdVar1[1] * dVar27;
      pdVar1 = (double *)(param_1 + 0x18 + lVar30);
      dVar4 = *pdVar1;
      dVar5 = *pdVar1;
      dVar53 = *(double *)(param_1 + lVar30);
      dVar46 = *(double *)(param_1 + lVar30);
      pdVar1 = (double *)(param_1 + 8 + lVar30);
      dVar6 = *pdVar1;
      dVar34 = *pdVar1;
      pdVar1 = (double *)(param_1 + 0x10 + lVar30);
      dVar7 = *pdVar1;
      dVar8 = *pdVar1;
      dVar16 = (dVar15 * dVar6 + (dVar53 * dVar44 * dVar28 - dVar19 * dVar4)) -
               dVar20 * dVar7 * dVar26;
      dVar18 = (dVar44 * dVar34 + (dVar46 * dVar15 * dVar29 - dVar20 * dVar5)) -
               dVar19 * dVar8 * dVar27;
      dVar4 = dVar44 * dVar7 * dVar28 + dVar19 * dVar6 + (dVar4 * dVar15 - dVar20 * dVar53 * dVar28)
      ;
      dVar5 = dVar15 * dVar8 * dVar29 +
              dVar20 * dVar34 + (dVar5 * dVar44 - dVar19 * dVar46 * dVar29);
      pdVar1 = (double *)(param_1 + 0x20 + lVar30);
      dVar46 = pdVar1[1];
      pdVar3 = (double *)(param_1 + 0x30 + lVar30);
      dVar53 = *pdVar3;
      dVar34 = pdVar3[1];
      pdVar3 = (double *)(param_2 + 0x40 + lVar30);
      dVar6 = *pdVar3;
      dVar8 = pdVar3[1];
      pdVar3 = (double *)(param_2 + 0x50 + lVar30);
      dVar7 = *pdVar3;
      dVar15 = pdVar3[1];
      pdVar3 = (double *)(param_1 + 0x20 + lVar30);
      *pdVar3 = *pdVar1 - *pdVar2;
      pdVar3[1] = dVar46 - dVar21;
      pdVar1 = (double *)(param_1 + 0x30 + lVar30);
      *pdVar1 = dVar53 - dVar22;
      pdVar1[1] = dVar34 - dVar23;
      auVar48._0_4_ =
           -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar6 &&
                  dVar6 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
      auVar48._4_4_ = -(uint)(_UNK_150b51668 <= dVar8 && dVar8 <= _UNK_150b51658);
      auVar48._8_4_ =
           -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar7 &&
                  dVar7 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
      auVar48._12_4_ = -(uint)(_UNK_150b51668 <= dVar15 && dVar15 <= _UNK_150b51658);
      param_4 = movmskps(param_4,auVar48);
      if (param_4 == 0) {
        auVar48 = ZEXT816(0);
LAB_140ac7a53:
        auVar11._8_4_ = 0xffffffff;
        auVar11._0_8_ = 0xffffffffffffffff;
        auVar11._12_4_ = 0xffffffff;
        auVar48 = auVar48 ^ auVar11;
        dVar34 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                         ((ulonglong)dVar6 & ___xmm_7fe00000000000007fe0000000000000));
        dVar44 = (double)(_UNK_150b51628 - ((ulonglong)dVar8 & _UNK_150b51678));
        dVar46 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                         ((ulonglong)dVar7 & ___xmm_7fe00000000000007fe0000000000000));
        dVar53 = (double)(_UNK_150b51628 - ((ulonglong)dVar15 & _UNK_150b51678));
        auVar58._0_4_ = (float)(dVar6 * dVar34);
        auVar58._4_4_ = (float)(dVar8 * dVar44);
        fVar33 = (float)(dVar7 * dVar46);
        fVar43 = (float)(dVar15 * dVar53);
        auVar35._0_8_ = CONCAT44(fVar43,fVar33);
        auVar35._8_8_ = 0;
        auVar58._8_8_ = auVar35._0_8_;
        auVar41 = rcpps(auVar35,auVar58);
        dVar46 = (double)((_UNK_15076ba38 - fVar33 * auVar41._8_4_) * auVar41._8_4_) * dVar46;
        dVar53 = (double)((_UNK_15076ba3c - fVar43 * auVar41._12_4_) * auVar41._12_4_) * dVar53;
        dVar34 = (double)((___xmm_40000000400000004000000040000000 - auVar58._0_4_ * auVar41._0_4_)
                         * auVar41._0_4_) * dVar34;
        dVar44 = (double)((_UNK_15076ba34 - auVar58._4_4_ * auVar41._4_4_) * auVar41._4_4_) * dVar44
        ;
        dVar34 = (dVar24 - dVar6 * dVar34) * dVar34;
        dVar44 = (dVar25 - dVar8 * dVar44) * dVar44;
        dVar46 = (dVar24 - dVar7 * dVar46) * dVar46;
        dVar53 = (dVar25 - dVar15 * dVar53) * dVar53;
        auVar47._0_8_ = (dVar24 - dVar7 * dVar46) * dVar46;
        auVar47._8_8_ = (dVar25 - dVar15 * dVar53) * dVar53;
        auVar59._0_8_ = (dVar24 - dVar6 * dVar34) * dVar34;
        auVar59._8_8_ = (dVar25 - dVar8 * dVar44) * dVar44;
        auVar36._4_4_ = auVar48._0_4_;
        auVar36._0_4_ = auVar48._0_4_;
        auVar36._8_4_ = auVar48._4_4_;
        auVar36._12_4_ = auVar48._4_4_;
        unaff_XMM15 = blendvps(unaff_XMM15,auVar59,auVar36);
        auVar37._4_4_ = auVar48._8_4_;
        auVar37._0_4_ = auVar48._8_4_;
        auVar37._8_4_ = auVar48._12_4_;
        auVar37._12_4_ = auVar48._12_4_;
        in_XMM1 = blendvps(in_XMM1,auVar47,auVar37);
      }
      else {
        auVar41._0_4_ = (float)dVar6;
        auVar41._4_4_ = (float)dVar8;
        auVar50._0_8_ = CONCAT44((float)dVar15,(float)dVar7);
        auVar50._8_8_ = 0;
        auVar41._8_8_ = auVar50._0_8_;
        auVar51 = rcpps(auVar50,auVar41);
        dVar34 = (double)((___xmm_40000000400000004000000040000000 - auVar41._0_4_ * auVar51._0_4_)
                         * auVar51._0_4_);
        dVar44 = (double)((_UNK_15076ba34 - auVar41._4_4_ * auVar51._4_4_) * auVar51._4_4_);
        dVar46 = (double)((_UNK_15076ba38 - (float)dVar7 * auVar51._8_4_) * auVar51._8_4_);
        dVar53 = (double)((_UNK_15076ba3c - (float)dVar15 * auVar51._12_4_) * auVar51._12_4_);
        dVar34 = (dVar24 - dVar6 * dVar34) * dVar34;
        dVar44 = (dVar25 - dVar8 * dVar44) * dVar44;
        dVar46 = (dVar24 - dVar7 * dVar46) * dVar46;
        dVar53 = (dVar25 - dVar15 * dVar53) * dVar53;
        auVar51._0_8_ = dVar7 * dVar46;
        auVar51._8_8_ = dVar15 * dVar53;
        auVar52._0_8_ = (dVar24 - auVar51._0_8_) * dVar46;
        auVar52._8_8_ = (dVar25 - auVar51._8_8_) * dVar53;
        auVar57._0_8_ = (dVar24 - dVar6 * dVar34) * dVar34;
        auVar57._8_8_ = (dVar25 - dVar8 * dVar44) * dVar44;
        auVar41 = pmovsxdq(auVar51,auVar48);
        unaff_XMM15 = blendvps(unaff_XMM15,auVar57,auVar41);
        auVar42._4_4_ = auVar48._8_4_;
        auVar42._0_4_ = auVar48._8_4_;
        auVar42._8_4_ = auVar48._12_4_;
        auVar42._12_4_ = auVar48._12_4_;
        in_XMM1 = blendvps(in_XMM1,auVar52,auVar42);
        if ((char)param_4 != '\x0f') goto LAB_140ac7a53;
      }
      dVar46 = in_XMM1._0_8_;
      dVar53 = in_XMM1._8_8_;
      dVar34 = unaff_XMM15._0_8_;
      dVar44 = unaff_XMM15._8_8_;
      dVar34 = (dVar34 + dVar34) - dVar34 * dVar34 * dVar6;
      dVar44 = (dVar44 + dVar44) - dVar44 * dVar44 * dVar8;
      dVar46 = (dVar46 + dVar46) - dVar46 * dVar46 * dVar7;
      dVar53 = (dVar53 + dVar53) - dVar53 * dVar53 * dVar15;
      dVar46 = (dVar46 + dVar46) - dVar46 * dVar46 * dVar7;
      dVar53 = (dVar53 + dVar53) - dVar53 * dVar53 * dVar15;
      dVar34 = (dVar34 + dVar34) - dVar34 * dVar34 * dVar6;
      dVar44 = (dVar44 + dVar44) - dVar44 * dVar44 * dVar8;
      iVar31 = -(uint)((double)((ulonglong)dVar7 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                      ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
      iVar32 = -(uint)((double)((ulonglong)dVar15 & _UNK_15061cc88) <= _UNK_150aa88b8);
      iVar54 = -(uint)((double)((ulonglong)dVar6 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                      ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
      iVar56 = -(uint)((double)((ulonglong)dVar8 & _UNK_15061cc88) <= _UNK_150aa88b8);
      auVar38._4_4_ = iVar54;
      auVar38._0_4_ = iVar54;
      auVar38._8_4_ = iVar56;
      auVar38._12_4_ = iVar56;
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar48 = blendvps(ZEXT816(0),auVar9,auVar38);
      auVar39._4_4_ = iVar31;
      auVar39._0_4_ = iVar31;
      auVar39._8_4_ = iVar32;
      auVar39._12_4_ = iVar32;
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar41 = blendvps(ZEXT816(0),auVar10,auVar39);
      auVar49._0_8_ =
           (double)CONCAT44(~auVar48._4_4_ & (uint)((ulonglong)dVar34 >> 0x20),
                            ~auVar48._0_4_ & SUB84(dVar34,0));
      auVar49._8_4_ = ~auVar48._8_4_ & SUB84(dVar44,0);
      auVar49._12_4_ = ~auVar48._12_4_ & (uint)((ulonglong)dVar44 >> 0x20);
      auVar55._0_8_ =
           (double)CONCAT44(~auVar41._4_4_ & (uint)((ulonglong)dVar46 >> 0x20),
                            ~auVar41._0_4_ & SUB84(dVar46,0));
      auVar55._8_4_ = ~auVar41._8_4_ & SUB84(dVar53,0);
      auVar55._12_4_ = ~auVar41._12_4_ & (uint)((ulonglong)dVar53 >> 0x20);
      pdVar1 = (double *)(param_1 + 0x40 + lVar30);
      pdVar2 = (double *)(param_1 + 0x50 + lVar30);
      dVar53 = *pdVar2 * auVar55._0_8_ + ___xmm_8000000000000000bff0000000000000;
      dVar34 = pdVar2[1] * auVar55._8_8_ + _UNK_15076c578;
      dVar46 = pdVar1[1] * auVar49._8_8_ + _UNK_15076c718;
      pdVar2 = (double *)(param_1 + 0x40 + lVar30);
      *pdVar2 = *pdVar1 * auVar49._0_8_ + ___xmm_bff0000000000000bff0000000000000;
      pdVar2[1] = dVar46;
      pdVar1 = (double *)(param_1 + 0x50 + lVar30);
      *pdVar1 = dVar53;
      pdVar1[1] = dVar34;
      dVar46 = dVar5 * dVar5 + dVar18 * dVar18 + dVar4 * dVar4 + dVar16 * dVar16;
      dVar53 = __real_3ff0000000000000 / SQRT(dVar46);
      uVar45 = ~-(ulonglong)(dVar46 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      uVar13 = (ulonglong)(dVar5 * dVar53) & uVar45;
      uVar17 = (ulonglong)(dVar18 * dVar53) & uVar45;
      auVar40._0_8_ = ~uVar45 & ___xmm_3ff00000000000000000000000000000;
      auVar40._8_8_ = ~uVar45 & _UNK_15061cbc8;
      auVar12._8_4_ = (int)uVar13;
      auVar12._0_8_ = (ulonglong)(dVar4 * dVar53) & uVar45;
      auVar12._12_4_ = (int)(uVar13 >> 0x20);
      auVar14._8_4_ = (int)uVar17;
      auVar14._0_8_ = (ulonglong)(dVar16 * dVar53) & uVar45;
      auVar14._12_4_ = (int)(uVar17 >> 0x20);
      *(undefined1 (*) [16])(param_1 + lVar30) = auVar14;
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar30) = auVar40 | auVar12;
      lVar30 = lVar30 + 0x60;
    } while ((ulonglong)param_3 * 0x60 != lVar30);
  }
  return;
}

// ConvertPoseToMeshRotation_sse4 @ 140ac7ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToMeshRotation_sse4(longlong param_1,longlong param_2,uint param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar11;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double *pdVar19;
  ulonglong uVar20;
  longlong lVar21;
  double dVar3;
  double dVar5;
  double dVar10;
  double dVar12;
  
  dVar18 = _UNK_15076c6f8;
  dVar17 = ___xmm_bff00000000000003ff0000000000000;
  dVar16 = _UNK_15076b868;
  dVar15 = ___xmm_3ff0000000000000bff0000000000000;
  if (1 < (int)param_3) {
    pdVar19 = (double *)(param_1 + 0x78);
    uVar20 = 1;
    do {
      lVar21 = (longlong)*(int *)(param_2 + uVar20 * 4) * 0x60;
      pdVar1 = (double *)(param_1 + 0x18 + lVar21);
      dVar2 = *pdVar1;
      dVar3 = *pdVar1;
      dVar13 = pdVar19[-3];
      dVar14 = pdVar19[-2];
      dVar4 = *(double *)(param_1 + lVar21);
      dVar5 = *(double *)(param_1 + lVar21);
      dVar6 = pdVar19[-2];
      dVar7 = pdVar19[-3];
      dVar8 = pdVar19[-1];
      pdVar1 = (double *)(param_1 + 8 + lVar21);
      dVar9 = *pdVar1;
      dVar10 = *pdVar1;
      pdVar1 = (double *)(param_1 + 0x10 + lVar21);
      dVar11 = *pdVar1;
      dVar12 = *pdVar1;
      pdVar19[-3] = dVar6 * dVar11 * dVar15 +
                    pdVar19[-1] * dVar9 + dVar4 * *pdVar19 * dVar17 + dVar13 * dVar2;
      pdVar19[-2] = dVar7 * dVar12 * dVar16 +
                    *pdVar19 * dVar10 + dVar5 * dVar8 * dVar18 + dVar14 * dVar3;
      pdVar19[-1] = *pdVar19 * dVar11 * dVar17 +
                    ((dVar4 * dVar6 * dVar17 + dVar2 * pdVar19[-1]) - dVar13 * dVar9);
      *pdVar19 = dVar8 * dVar12 * dVar18 +
                 ((dVar5 * dVar7 * dVar18 + dVar3 * *pdVar19) - dVar14 * dVar10);
      uVar20 = uVar20 + 1;
      pdVar19 = pdVar19 + 0xc;
    } while (param_3 != uVar20);
  }
  return;
}

// ConvertMeshRotationPoseToLocalSpace_sse4 @ 140ac8020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertMeshRotationPoseToLocalSpace_sse4(longlong param_1,longlong param_2,uint param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  double *pdVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar3;
  double dVar8;
  
  dVar14 = _UNK_15076c6f8;
  dVar13 = ___xmm_bff00000000000003ff0000000000000;
  dVar12 = _UNK_15076b868;
  dVar11 = ___xmm_3ff0000000000000bff0000000000000;
  if (1 < (int)param_3) {
    uVar15 = (ulonglong)param_3 + 1;
    pdVar16 = (double *)((ulonglong)param_3 * 0x60 + -0x48 + param_1);
    do {
      lVar17 = (longlong)*(int *)(param_2 + -8 + uVar15 * 4) * 0x60;
      pdVar1 = (double *)(param_1 + 0x10 + lVar17);
      dVar18 = *pdVar1 * dVar11;
      dVar19 = pdVar1[1] * dVar12;
      dVar9 = pdVar16[-3];
      dVar10 = pdVar16[-2];
      dVar2 = *(double *)(param_1 + lVar17);
      dVar3 = *(double *)(param_1 + lVar17);
      dVar4 = pdVar16[-2];
      dVar5 = pdVar16[-3];
      dVar6 = pdVar16[-1];
      pdVar1 = (double *)(param_1 + 8 + lVar17);
      dVar7 = *pdVar1;
      dVar8 = *pdVar1;
      pdVar16[-3] = dVar4 * dVar18 * dVar11 +
                    ((dVar9 * dVar19 - dVar2 * *pdVar16 * dVar13) - pdVar16[-1] * dVar7);
      pdVar16[-2] = dVar5 * dVar18 * dVar12 +
                    ((dVar10 * dVar19 - dVar3 * dVar6 * dVar14) - *pdVar16 * dVar8);
      pdVar16[-1] = *pdVar16 * dVar18 * dVar13 +
                    dVar9 * dVar7 + (dVar19 * pdVar16[-1] - dVar4 * dVar2 * dVar13);
      *pdVar16 = dVar6 * dVar18 * dVar14 +
                 dVar10 * dVar8 + (dVar19 * *pdVar16 - dVar5 * dVar3 * dVar14);
      uVar15 = uVar15 - 1;
      pdVar16 = pdVar16 + -0xc;
    } while (2 < uVar15);
  }
  return;
}

// AccumulateWithAdditiveScale_sse4 @ 140ac8180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AccumulateWithAdditiveScale_sse4(longlong param_1,longlong param_2,float param_3,uint param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  
  dVar35 = _UNK_15076c6f8;
  dVar34 = ___xmm_bff00000000000003ff0000000000000;
  dVar33 = _UNK_15076b868;
  dVar32 = ___xmm_3ff0000000000000bff0000000000000;
  if (0 < (int)param_4) {
    dVar37 = (double)param_3;
    lVar36 = 0;
    do {
      pdVar1 = (double *)(param_2 + 0x10 + lVar36);
      pdVar2 = (double *)(param_2 + 0x20 + lVar36);
      dVar22 = *pdVar2;
      pdVar3 = (double *)(param_2 + 0x30 + lVar36);
      dVar23 = *pdVar3;
      dVar38 = *(double *)(param_2 + lVar36) * dVar37;
      dVar39 = ((double *)(param_2 + lVar36))[1] * dVar37;
      dVar12 = *pdVar1 * dVar37;
      dVar13 = pdVar1[1] * dVar37;
      pdVar1 = (double *)(param_1 + 0x20 + lVar36);
      dVar24 = *pdVar1;
      dVar9 = pdVar1[1] + pdVar2[1] * dVar37;
      pdVar1 = (double *)(param_1 + 0x30 + lVar36);
      dVar25 = *pdVar1;
      dVar11 = pdVar1[1] + pdVar3[1] * dVar37;
      pdVar1 = (double *)(param_2 + 0x40 + lVar36);
      pdVar2 = (double *)(param_2 + 0x50 + lVar36);
      dVar19 = *pdVar2 * dVar37 + __real_3ff0000000000000;
      dVar17 = *pdVar1 * dVar37 + ___xmm_3ff00000000000003ff0000000000000;
      pdVar3 = (double *)(param_1 + 0x40 + lVar36);
      dVar26 = *pdVar3;
      dVar15 = pdVar3[1] * (pdVar1[1] * dVar37 + _UNK_150689688);
      pdVar1 = (double *)(param_1 + 0x50 + lVar36);
      dVar27 = *pdVar1;
      dVar18 = pdVar1[1] * (pdVar2[1] * dVar37 + 0.0);
      dVar28 = *(double *)(param_1 + lVar36);
      dVar29 = ((double *)(param_1 + lVar36))[1];
      pdVar1 = (double *)(param_1 + 0x10 + lVar36);
      dVar30 = *pdVar1;
      dVar31 = pdVar1[1];
      dVar4 = *(double *)(param_1 + 0x18 + lVar36);
      dVar5 = *(double *)(param_1 + 0x10 + lVar36);
      dVar6 = *(double *)(param_1 + 8 + lVar36);
      dVar7 = *(double *)(param_1 + lVar36);
      dVar21 = dVar5 * dVar12 * dVar35 +
               ((dVar38 * dVar7 * dVar35 + dVar13 * dVar31) - dVar29 * dVar39);
      *(double *)(param_1 + lVar36) =
           dVar6 * dVar12 * dVar32 + dVar39 * dVar30 + dVar38 * dVar4 * dVar34 + dVar13 * dVar28;
      ((double *)(param_1 + lVar36))[1] =
           dVar7 * dVar12 * dVar33 + dVar39 * dVar31 + dVar38 * dVar5 * dVar35 + dVar13 * dVar29;
      auVar20._8_4_ = SUB84(dVar21,0);
      auVar20._0_8_ =
           dVar4 * dVar12 * dVar34 + ((dVar38 * dVar6 * dVar34 + dVar13 * dVar30) - dVar28 * dVar39)
      ;
      auVar20._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar36) = auVar20;
      auVar8._8_4_ = SUB84(dVar9,0);
      auVar8._0_8_ = dVar24 + dVar22 * dVar37;
      auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x20 + lVar36) = auVar8;
      auVar10._8_4_ = SUB84(dVar11,0);
      auVar10._0_8_ = dVar25 + dVar23 * dVar37;
      auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x30 + lVar36) = auVar10;
      auVar14._8_4_ = SUB84(dVar15,0);
      auVar14._0_8_ = dVar26 * dVar17;
      auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x40 + lVar36) = auVar14;
      auVar16._8_4_ = SUB84(dVar18,0);
      auVar16._0_8_ = dVar27 * dVar19;
      auVar16._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x50 + lVar36) = auVar16;
      lVar36 = lVar36 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar36);
  }
  return;
}

// BlendPosesPerBoneFilterScaleRotation_sse4 @ 140ac83b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScaleRotation_sse4
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,longlong param_10
               ,longlong param_11,longlong param_12,uint param_13)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double *pdVar11;
  undefined4 uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar29;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar30;
  undefined1 auVar28 [16];
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar39;
  double dVar40;
  ulonglong uVar41;
  int iVar44;
  double dVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar46;
  double dVar47;
  double dVar48;
  ulonglong uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  double dVar55;
  uint uVar57;
  uint uVar58;
  undefined1 auVar56 [16];
  uint uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  undefined1 auVar64 [16];
  double dVar66;
  undefined1 auVar65 [16];
  double dVar67;
  undefined1 auVar68 [16];
  double local_2f8;
  double local_2e8;
  double local_2d8;
  double local_2c8;
  double local_2b0;
  double local_2a8;
  double local_298;
  double local_288;
  double local_268;
  double local_258;
  double local_248;
  undefined1 local_238 [16];
  double local_218;
  double local_208;
  double local_1f8;
  double local_1e8;
  double local_1d8;
  double local_1c8;
  undefined8 local_1b8;
  double local_1a8;
  double local_178;
  double local_168;
  double local_158;
  double local_148;
  double local_138;
  undefined1 local_108 [16];
  double dVar7;
  ulonglong uVar53;
  
  if (0 < (int)param_13) {
    lVar15 = 0;
    lVar16 = 0;
    iVar14 = 0;
    do {
      iVar39 = *(int *)(param_11 + lVar15 * 2);
      iVar19 = *(int *)(param_12 + lVar15);
      lVar17 = (longlong)iVar19;
      dVar29 = *(double *)(param_2 + lVar16 * 4);
      dVar35 = *(double *)(param_2 + 8 + lVar16 * 4);
      local_1c8 = *(double *)(param_2 + 0x10 + lVar16 * 4);
      dVar38 = *(double *)(param_2 + 0x18 + lVar16 * 4);
      local_148 = *(double *)(param_2 + 0x20 + lVar16 * 4);
      local_168 = *(double *)(param_2 + 0x28 + lVar16 * 4);
      local_138 = *(double *)(param_2 + 0x30 + lVar16 * 4);
      local_158 = *(double *)(param_2 + 0x38 + lVar16 * 4);
      local_1a8 = *(double *)(param_2 + 0x40 + lVar16 * 4);
      local_258 = *(double *)(param_2 + 0x48 + lVar16 * 4);
      local_2a8 = *(double *)(param_2 + 0x50 + lVar16 * 4);
      local_1b8 = *(double *)(param_2 + 0x58 + lVar16 * 4);
      pdVar11 = (double *)GetTransformFromArray(param_3,iVar39,iVar14);
      dVar3 = *pdVar11;
      dVar4 = pdVar11[1];
      dVar31 = pdVar11[2];
      dVar33 = pdVar11[3];
      dVar66 = pdVar11[8];
      dVar20 = pdVar11[9];
      dVar30 = pdVar11[10];
      if (lVar17 == -1) {
        dVar34 = dVar38 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        local_1d8 = local_1c8 * 0.0 * _UNK_15076c6f8;
        local_268 = dVar35 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                    local_1c8 * 0.0 + dVar29 + dVar34;
        local_248 = dVar29 * 0.0 * _UNK_15076b868 + dVar38 * 0.0 + dVar35 + local_1d8;
        dVar34 = ((dVar35 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + local_1c8) -
                 dVar29 * 0.0) + dVar34;
        local_1d8 = ((dVar29 * 0.0 * _UNK_15076c6f8 + dVar38) - dVar35 * 0.0) + local_1d8;
        dVar54 = dVar33 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        local_178 = dVar31 * 0.0 * _UNK_15076c6f8;
        dVar55 = dVar4 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar31 * 0.0 + dVar3 + dVar54;
        local_1e8 = dVar3 * 0.0 * _UNK_15076b868 + dVar33 * 0.0 + dVar4 + local_178;
        dVar54 = ((dVar4 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + dVar31) - dVar3 * 0.0) +
                 dVar54;
        local_178 = ((dVar3 * 0.0 * _UNK_15076c6f8 + dVar33) - dVar4 * 0.0) + local_178;
        dVar5 = (double)((ulonglong)local_258 & 0xffffffff00000000);
        dVar48 = (double)((ulonglong)local_258 & 0xffffffff);
        dVar67 = local_2a8;
        local_2b0 = dVar30;
        local_218 = dVar20;
        local_1f8 = local_1a8;
        local_208 = dVar66;
      }
      else {
        lVar13 = lVar17 * 0x20;
        pdVar1 = (double *)(param_4 + 0x18 + lVar13);
        dVar54 = *pdVar1;
        dVar48 = *pdVar1;
        dVar67 = *(double *)(param_4 + lVar13);
        dVar5 = *(double *)(param_4 + lVar13);
        pdVar1 = (double *)(param_4 + 8 + lVar13);
        dVar34 = *pdVar1;
        dVar55 = *pdVar1;
        pdVar1 = (double *)(param_4 + 0x10 + lVar13);
        dVar6 = *pdVar1;
        dVar7 = *pdVar1;
        local_268 = dVar35 * dVar6 * ___xmm_3ff0000000000000bff0000000000000 +
                    local_1c8 * dVar34 +
                    dVar67 * dVar38 * ___xmm_bff00000000000003ff0000000000000 + dVar29 * dVar54;
        local_248 = dVar29 * dVar7 * _UNK_15076b868 +
                    dVar38 * dVar55 + dVar5 * local_1c8 * _UNK_15076c6f8 + dVar35 * dVar48;
        dVar34 = dVar38 * dVar6 * ___xmm_bff00000000000003ff0000000000000 +
                 ((dVar35 * dVar67 * ___xmm_bff00000000000003ff0000000000000 + dVar54 * local_1c8) -
                 dVar29 * dVar34);
        local_1d8 = local_1c8 * dVar7 * _UNK_15076c6f8 +
                    ((dVar29 * dVar5 * _UNK_15076c6f8 + dVar48 * dVar38) - dVar35 * dVar55);
        pdVar1 = (double *)(param_6 + 0x18 + lVar13);
        dVar54 = *pdVar1;
        dVar48 = *pdVar1;
        dVar67 = *(double *)(param_6 + lVar13);
        dVar5 = *(double *)(param_6 + lVar13);
        pdVar1 = (double *)(param_6 + 8 + lVar13);
        dVar6 = *pdVar1;
        dVar7 = *pdVar1;
        pdVar1 = (double *)(param_6 + 0x10 + lVar13);
        dVar40 = *pdVar1;
        dVar8 = *pdVar1;
        dVar55 = dVar4 * dVar40 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar31 * dVar6 +
                 dVar67 * dVar33 * ___xmm_bff00000000000003ff0000000000000 + dVar3 * dVar54;
        local_1e8 = dVar3 * dVar8 * _UNK_15076b868 +
                    dVar33 * dVar7 + dVar5 * dVar31 * _UNK_15076c6f8 + dVar4 * dVar48;
        dVar54 = dVar33 * dVar40 * ___xmm_bff00000000000003ff0000000000000 +
                 ((dVar4 * dVar67 * ___xmm_bff00000000000003ff0000000000000 + dVar54 * dVar31) -
                 dVar3 * dVar6);
        local_178 = dVar31 * dVar8 * _UNK_15076c6f8 +
                    ((dVar3 * dVar5 * _UNK_15076c6f8 + dVar48 * dVar33) - dVar4 * dVar7);
        lVar13 = lVar17 * 0x18;
        local_1f8 = local_1a8 * *(double *)(param_5 + lVar13);
        dVar48 = local_258 * ((double *)(param_5 + lVar13))[1];
        dVar5 = dVar48;
        dVar67 = *(double *)(param_5 + 0x10 + lVar13) * local_2a8;
        local_2b0 = *(double *)(param_7 + 0x10 + lVar13) * dVar30;
        local_218 = dVar20 * ((double *)(param_7 + lVar13))[1];
        local_208 = dVar66 * *(double *)(param_7 + lVar13);
      }
      uVar46 = (undefined4)((ulonglong)dVar5 >> 0x20);
      uVar12 = SUB84(dVar48,0);
      dVar48 = pdVar11[4];
      dVar5 = pdVar11[5];
      dVar7 = pdVar11[6];
      dVar6 = pdVar11[7];
      dVar8 = pdVar11[0xb];
      fVar63 = *(float *)(param_11 + 4 + lVar15 * 2);
      if (fVar63 <= 0.0) {
        fVar63 = 0.0;
      }
      if (__real_3f800000 <= fVar63) {
        fVar63 = __real_3f800000;
      }
      fVar2 = *(float *)(param_10 + (longlong)iVar39 * 4);
      if (fVar2 <= fVar63) {
        fVar2 = fVar63;
      }
      *(float *)(param_10 + (longlong)iVar39 * 4) = fVar2;
      local_2e8 = local_1e8;
      local_298 = local_218;
      if (fVar63 <= __real_3727c5ac) {
        local_298 = (double)CONCAT44(uVar46,uVar12);
        local_288 = dVar67;
        dVar3 = local_1f8;
        local_2c8 = local_268;
        local_2d8 = dVar34;
        local_2f8 = local_1d8;
        local_2e8 = local_248;
      }
      else if (__real_3f7fff58 <= fVar63) {
        local_288 = local_2b0;
        dVar29 = dVar3;
        dVar35 = dVar4;
        dVar38 = dVar33;
        local_2a8 = dVar30;
        local_1b8 = dVar8;
        local_168 = dVar5;
        local_158 = dVar6;
        local_148 = dVar48;
        local_138 = dVar7;
        dVar3 = local_208;
        local_2c8 = dVar55;
        local_2d8 = dVar54;
        local_2f8 = local_178;
        local_1a8 = dVar66;
        local_258 = dVar20;
        local_1c8 = dVar31;
      }
      else {
        dVar40 = dVar29 * dVar3 + local_1c8 * dVar31;
        dVar45 = dVar35 * dVar4 + dVar38 * dVar33;
        iVar39 = -(uint)(0.0 <= dVar45 + dVar40);
        iVar44 = -(uint)(0.0 <= dVar40 + dVar45);
        auVar21._4_4_ = iVar39;
        auVar21._0_4_ = iVar39;
        auVar21._8_4_ = iVar44;
        auVar21._12_4_ = iVar44;
        auVar37._4_4_ = _UNK_15060db24;
        auVar37._0_4_ = ___xmm_ffffffffffffffffffffffffffffffff;
        auVar37._8_4_ = _UNK_15060db28;
        auVar37._12_4_ = _UNK_15060db2c;
        auVar42 = blendvps(ZEXT816(0),auVar37,auVar21);
        dVar45 = (double)fVar63;
        dVar40 = __real_3ff0000000000000 - dVar45;
        uVar49 = auVar42._0_8_;
        auVar50._0_4_ = ~auVar42._0_4_ & SUB84(0.0 - dVar29,0);
        uVar53 = auVar42._8_8_;
        auVar50._4_4_ = ~auVar42._4_4_ & (uint)((ulonglong)(0.0 - dVar29) >> 0x20);
        auVar50._8_4_ = ~auVar42._8_4_ & SUB84(0.0 - dVar35,0);
        auVar50._12_4_ = ~auVar42._12_4_ & (uint)((ulonglong)(0.0 - dVar35) >> 0x20);
        auVar64._0_8_ = (ulonglong)dVar29 & uVar49;
        auVar64._8_8_ = (ulonglong)dVar35 & uVar53;
        dVar35 = dVar31 * dVar45 +
                 (double)(~uVar49 & (ulonglong)(0.0 - local_1c8) | (ulonglong)local_1c8 & uVar49) *
                 dVar40;
        dVar38 = dVar33 * dVar45 +
                 (double)(~uVar53 & (ulonglong)(0.0 - dVar38) | (ulonglong)dVar38 & uVar53) * dVar40
        ;
        dVar31 = dVar3 * dVar45 + SUB168(auVar64 | auVar50,0) * dVar40;
        dVar33 = dVar4 * dVar45 + SUB168(auVar64 | auVar50,8) * dVar40;
        dVar29 = dVar33 * dVar33 + dVar38 * dVar38 + dVar31 * dVar31 + dVar35 * dVar35;
        dVar40 = __real_3ff0000000000000 / SQRT(dVar29);
        uVar53 = ~-(ulonglong)(dVar29 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        auVar36._0_8_ = (ulonglong)(dVar35 * dVar40) & uVar53;
        auVar36._8_8_ = (ulonglong)(dVar38 * dVar40) & uVar53;
        auVar68._0_8_ = ~uVar53 & ___xmm_3ff00000000000000000000000000000;
        auVar68._8_8_ = ~uVar53 & _UNK_15061cbc8;
        uVar18 = -(uint)(0.0 <= (float)(local_1e8 * local_248 + local_178 * local_1d8 +
                                       dVar55 * local_268 + dVar54 * dVar34));
        dVar38 = (double)(float)(~uVar18 & ((uint)(__real_3f800000 - fVar63) ^
                                           __xmm_80000000800000008000000080000000) |
                                uVar18 & (uint)(__real_3f800000 - fVar63));
        dVar29 = dVar34 * dVar38 + dVar54 * dVar45;
        dVar35 = local_1d8 * dVar38 + local_178 * dVar45;
        dVar4 = local_268 * dVar38 + dVar55 * dVar45;
        dVar3 = local_248 * dVar38 + local_1e8 * dVar45;
        dVar38 = dVar3 * dVar3 + dVar35 * dVar35 + dVar4 * dVar4 + dVar29 * dVar29;
        uVar41 = ~-(ulonglong)(dVar38 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        dVar47 = __real_3ff0000000000000 / SQRT(dVar38);
        uVar49 = (ulonglong)(dVar35 * dVar47) & uVar41;
        local_2e8 = (double)((ulonglong)(dVar3 * dVar47) & uVar41);
        auVar51._0_8_ = ~uVar41 & ___xmm_3ff00000000000000000000000000000;
        auVar51._8_8_ = ~uVar41 & _UNK_15061cbc8;
        auVar42._8_4_ = (int)uVar49;
        auVar42._0_8_ = (ulonglong)(dVar29 * dVar47) & uVar41;
        auVar42._12_4_ = (int)(uVar49 >> 0x20);
        local_2f8 = SUB168(auVar51 | auVar42,8);
        local_298 = (local_218 - (double)CONCAT44(uVar46,uVar12)) * dVar45 +
                    (double)CONCAT44(uVar46,uVar12);
        dVar29 = (double)((ulonglong)(dVar31 * dVar40) & uVar53);
        dVar35 = (double)((ulonglong)(dVar33 * dVar40) & uVar53);
        dVar38 = SUB168(auVar68 | auVar36,8);
        local_2a8 = local_2a8 + (dVar30 - local_2a8) * dVar45;
        local_288 = (local_2b0 - dVar67) * dVar45 + dVar67;
        local_1b8 = local_1b8 + (dVar8 - local_1b8) * dVar45;
        local_168 = local_168 + (dVar5 - local_168) * dVar45;
        local_158 = local_158 + (dVar6 - local_158) * dVar45;
        local_148 = local_148 + (dVar48 - local_148) * dVar45;
        local_138 = local_138 + (dVar7 - local_138) * dVar45;
        dVar3 = (local_208 - local_1f8) * dVar45 + local_1f8;
        local_2c8 = (double)((ulonglong)(dVar4 * dVar47) & uVar41);
        local_2d8 = SUB168(auVar51 | auVar42,0);
        local_1a8 = local_1a8 + (dVar66 - local_1a8) * dVar45;
        local_258 = local_258 + (dVar20 - local_258) * dVar45;
        local_1c8 = SUB168(auVar68 | auVar36,0);
      }
      *(double *)(param_4 + lVar15 * 8) = local_268;
      *(double *)(param_4 + 8 + lVar15 * 8) = local_248;
      *(double *)(param_4 + 0x10 + lVar15 * 8) = dVar34;
      *(double *)(param_4 + 0x18 + lVar15 * 8) = local_1d8;
      *(double *)(param_6 + lVar15 * 8) = dVar55;
      *(double *)(param_6 + 8 + lVar15 * 8) = local_1e8;
      *(double *)(param_6 + 0x10 + lVar15 * 8) = dVar54;
      *(double *)(param_6 + 0x18 + lVar15 * 8) = local_178;
      *(double *)(param_5 + lVar16) = local_1f8;
      *(ulonglong *)(param_5 + 8 + lVar16) = CONCAT44(uVar46,uVar12);
      *(double *)(param_5 + 0x10 + lVar16) = dVar67;
      *(double *)(param_7 + lVar16) = local_208;
      *(double *)(param_7 + 8 + lVar16) = local_218;
      *(double *)(param_7 + 0x10 + lVar16) = local_2b0;
      if (iVar19 == -1) {
      }
      else {
        dVar4 = *(double *)(param_9 + 0x10 + lVar17 * 0x18);
        pdVar11 = (double *)(param_9 + lVar17 * 0x18);
        dVar31 = *pdVar11;
        dVar33 = pdVar11[1];
        uVar18 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                        (double)((ulonglong)dVar4 & __xmm_7fffffffffffffff7fffffffffffffff));
        uVar57 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                        (double)((ulonglong)dVar31 & __xmm_7fffffffffffffff7fffffffffffffff));
        uVar58 = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar33 & _UNK_15061cc88));
        auVar60._4_4_ = uVar58;
        auVar60._0_4_ = uVar57;
        auVar60._8_4_ = uVar18;
        auVar60._12_4_ = -(uint)(_UNK_150aa88b8 < 0.0);
        auVar62._0_4_ =
             -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar31 &&
                    dVar31 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
        auVar62._4_4_ = -(uint)(_UNK_150b51668 <= dVar33 && dVar33 <= _UNK_150b51658);
        auVar62._8_4_ =
             -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar4 &&
                    dVar4 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
        auVar62._12_4_ = -(uint)(_UNK_150b51668 <= 0.0 && 0.0 <= _UNK_150b51658);
        auVar56._0_4_ = auVar62._0_4_ & uVar57;
        auVar56._4_4_ = auVar62._4_4_ & uVar58;
        auVar56._8_4_ = auVar62._8_4_ & uVar18;
        auVar56._12_4_ = auVar62._12_4_ & -(uint)(_UNK_150aa88b8 < 0.0);
        iVar39 = movmskps(iVar19 * 3,auVar56);
        if (iVar39 == 0) {
          auVar56 = ZEXT816(0);
LAB_140ac941b:
          dVar38 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                           ((ulonglong)dVar31 & ___xmm_7fe00000000000007fe0000000000000));
          dVar66 = (double)((longlong)_UNK_150b51628 - ((ulonglong)dVar33 & _UNK_150b51678));
          dVar29 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                           ((ulonglong)dVar4 & ___xmm_7fe00000000000007fe0000000000000));
          auVar65._0_4_ = (float)(dVar31 * dVar38);
          auVar65._4_4_ = (float)(dVar33 * dVar66);
          fVar63 = (float)(dVar4 * dVar29);
          auVar25._0_8_ = CONCAT44((float)(_UNK_150b51628 * 0.0),fVar63);
          auVar25._8_8_ = 0;
          auVar65._8_8_ = auVar25._0_8_;
          auVar42 = rcpps(auVar25,auVar65);
          uVar18 = auVar56._0_4_ ^ ___xmm_ffffffffffffffffffffffffffffffff;
          uVar57 = auVar56._4_4_ ^ _UNK_15060db24;
          uVar58 = auVar56._8_4_ ^ _UNK_15060db28;
          uVar59 = auVar56._12_4_ ^ _UNK_15060db2c;
          dVar29 = (double)((_UNK_15076ba38 - fVar63 * auVar42._8_4_) * auVar42._8_4_) * dVar29;
          dVar35 = (double)((_UNK_15076ba3c - (float)(_UNK_150b51628 * 0.0) * auVar42._12_4_) *
                           auVar42._12_4_) * _UNK_150b51628;
          dVar38 = (double)((___xmm_40000000400000004000000040000000 - auVar65._0_4_ * auVar42._0_4_
                            ) * auVar42._0_4_) * dVar38;
          dVar66 = (double)((_UNK_15076ba34 - auVar65._4_4_ * auVar42._4_4_) * auVar42._4_4_) *
                   dVar66;
          dVar38 = (___xmm_40000000000000004000000000000000 - dVar31 * dVar38) * dVar38;
          dVar66 = (_UNK_150689698 - dVar33 * dVar66) * dVar66;
          dVar29 = (___xmm_40000000000000004000000000000000 - dVar4 * dVar29) * dVar29;
          dVar35 = (_UNK_150689698 - dVar35 * 0.0) * dVar35;
          auVar52._0_8_ = (___xmm_40000000000000004000000000000000 - dVar4 * dVar29) * dVar29;
          auVar52._8_8_ = (_UNK_150689698 - dVar35 * 0.0) * dVar35;
          auVar61._0_8_ = (___xmm_40000000000000004000000000000000 - dVar31 * dVar38) * dVar38;
          auVar61._8_8_ = (_UNK_150689698 - dVar33 * dVar66) * dVar66;
          auVar26._4_4_ = uVar18;
          auVar26._0_4_ = uVar18;
          auVar26._8_4_ = uVar57;
          auVar26._12_4_ = uVar57;
          local_238 = blendvps(local_238,auVar61,auVar26);
          auVar27._4_4_ = uVar58;
          auVar27._0_4_ = uVar58;
          auVar27._8_4_ = uVar59;
          auVar27._12_4_ = uVar59;
          local_108 = blendvps(local_108,auVar52,auVar27);
        }
        else {
          auVar22._0_4_ = (float)dVar31;
          auVar22._4_4_ = (float)dVar33;
          fVar63 = (float)dVar4;
          auVar22._8_4_ = fVar63;
          auVar22._12_4_ = 0;
          auVar42 = rcpps(ZEXT416((uint)fVar63),auVar22);
          dVar35 = (double)((___xmm_40000000400000004000000040000000 - auVar22._0_4_ * auVar42._0_4_
                            ) * auVar42._0_4_);
          dVar29 = (double)((_UNK_15076ba34 - auVar22._4_4_ * auVar42._4_4_) * auVar42._4_4_);
          dVar38 = (double)((_UNK_15076ba38 - fVar63 * auVar42._8_4_) * auVar42._8_4_);
          dVar66 = (double)((_UNK_15076ba3c - auVar42._12_4_ * 0.0) * auVar42._12_4_);
          dVar35 = (___xmm_40000000000000004000000000000000 - dVar31 * dVar35) * dVar35;
          dVar29 = (_UNK_150689698 - dVar33 * dVar29) * dVar29;
          dVar38 = (___xmm_40000000000000004000000000000000 - dVar4 * dVar38) * dVar38;
          dVar66 = (_UNK_150689698 - dVar66 * 0.0) * dVar66;
          auVar23._0_8_ = dVar4 * dVar38;
          auVar23._8_8_ = dVar66 * 0.0;
          auVar43._0_8_ = (___xmm_40000000000000004000000000000000 - auVar23._0_8_) * dVar38;
          auVar43._8_8_ = (_UNK_150689698 - auVar23._8_8_) * dVar66;
          dVar29 = (_UNK_150689698 - dVar33 * dVar29) * dVar29;
          auVar42 = pmovsxdq(auVar23,auVar62);
          auVar9._8_4_ = SUB84(dVar29,0);
          auVar9._0_8_ = (___xmm_40000000000000004000000000000000 - dVar31 * dVar35) * dVar35;
          auVar9._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
          local_238 = blendvps(local_238,auVar9,auVar42);
          auVar24._4_4_ = auVar62._8_4_;
          auVar24._0_4_ = auVar62._8_4_;
          auVar24._8_4_ = auVar62._12_4_;
          auVar24._12_4_ = auVar62._12_4_;
          local_108 = blendvps(local_108,auVar43,auVar24);
          uVar12 = movmskps((int)param_9,auVar60);
          if ((char)uVar12 != (char)iVar39) goto LAB_140ac941b;
        }
        lVar17 = lVar17 * 0x20;
        pdVar11 = (double *)(param_8 + 0x10 + lVar17);
        dVar48 = *pdVar11 * ___xmm_3ff0000000000000bff0000000000000;
        dVar54 = pdVar11[1] * _UNK_15076b868;
        dVar35 = *(double *)(param_8 + lVar17);
        dVar29 = *(double *)(param_8 + lVar17);
        pdVar11 = (double *)(param_8 + 8 + lVar17);
        dVar38 = *pdVar11;
        dVar66 = *pdVar11;
        dVar20 = local_2f8 * dVar48 * ___xmm_bff00000000000003ff0000000000000 +
                 local_2c8 * dVar38 +
                 (local_2d8 * dVar54 - dVar35 * local_2e8 * ___xmm_bff00000000000003ff0000000000000)
        ;
        dVar30 = local_2d8 * dVar48 * _UNK_15076c6f8 +
                 local_2e8 * dVar66 + (local_2f8 * dVar54 - dVar29 * local_2c8 * _UNK_15076c6f8);
        dVar35 = local_2e8 * dVar48 * ___xmm_3ff0000000000000bff0000000000000 +
                 ((dVar54 * local_2c8 - local_2f8 * dVar35 * ___xmm_bff00000000000003ff0000000000000
                  ) - local_2d8 * dVar38);
        dVar66 = local_2c8 * dVar48 * _UNK_15076b868 +
                 ((dVar54 * local_2e8 - local_2d8 * dVar29 * _UNK_15076c6f8) - local_2f8 * dVar66);
        dVar29 = dVar66 * dVar66 + dVar30 * dVar30 + dVar35 * dVar35 + dVar20 * dVar20;
        uVar49 = ~-(ulonglong)(dVar29 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        dVar38 = __real_3ff0000000000000 / SQRT(dVar29);
        dVar29 = (double)((ulonglong)(dVar35 * dVar38) & uVar49);
        dVar35 = (double)((ulonglong)(dVar66 * dVar38) & uVar49);
        local_1c8 = (double)(~uVar49 & ___xmm_3ff00000000000000000000000000000 |
                            (ulonglong)(dVar20 * dVar38) & uVar49);
        dVar38 = (double)(~uVar49 & _UNK_15061cbc8 | (ulonglong)(dVar30 * dVar38) & uVar49);
        auVar10._8_8_ = _UNK_150aa88b8;
        auVar10._0_8_ = ___xmm_3e45798ee2308c3a3e45798ee2308c3a;
        iVar39 = -(uint)((double)((ulonglong)dVar4 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                        ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
        iVar19 = -(uint)(0.0 <= _UNK_150aa88b8);
        auVar32._4_4_ = -(uint)((double)((ulonglong)dVar33 & _UNK_15061cc88) <= _UNK_150aa88b8);
        auVar32._0_4_ =
             -(uint)((double)((ulonglong)dVar31 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                    ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
        auVar32._8_4_ = iVar39;
        auVar32._12_4_ = iVar19;
        auVar42 = pmovsxdq(auVar10,auVar32);
        auVar37 = blendvps(local_238,ZEXT816(0),auVar42);
        auVar28._4_4_ = iVar39;
        auVar28._0_4_ = iVar39;
        auVar28._8_4_ = iVar19;
        auVar28._12_4_ = iVar19;
        auVar42 = blendvps(local_108,ZEXT816(0),auVar28);
        local_1a8 = dVar3 * auVar37._0_8_;
        local_258 = local_298 * auVar37._8_8_;
        local_2a8 = auVar42._0_8_ * local_288;
        local_1b8._0_4_ = 0;
        local_1b8._4_4_ = 0;
      }
      *(double *)(param_8 + lVar15 * 8) = local_2c8;
      *(double *)(param_8 + 8 + lVar15 * 8) = local_2e8;
      *(double *)(param_8 + 0x10 + lVar15 * 8) = local_2d8;
      *(double *)(param_8 + 0x18 + lVar15 * 8) = local_2f8;
      *(double *)(param_9 + lVar16) = dVar3;
      *(double *)(param_9 + 8 + lVar16) = local_298;
      *(double *)(param_9 + 0x10 + lVar16) = local_288;
      *(double *)(param_1 + lVar16 * 4) = dVar29;
      *(double *)(param_1 + 8 + lVar16 * 4) = dVar35;
      *(double *)(param_1 + 0x10 + lVar16 * 4) = local_1c8;
      *(double *)(param_1 + 0x18 + lVar16 * 4) = dVar38;
      *(double *)(param_1 + 0x20 + lVar16 * 4) = local_148;
      *(double *)(param_1 + 0x28 + lVar16 * 4) = local_168;
      *(double *)(param_1 + 0x30 + lVar16 * 4) = local_138;
      *(double *)(param_1 + 0x38 + lVar16 * 4) = local_158;
      *(double *)(param_1 + 0x40 + lVar16 * 4) = local_1a8;
      *(double *)(param_1 + 0x48 + lVar16 * 4) = local_258;
      *(double *)(param_1 + 0x50 + lVar16 * 4) = local_2a8;
      *(ulonglong *)(param_1 + 0x58 + lVar16 * 4) = CONCAT44(local_1b8._4_4_,(undefined4)local_1b8);
      iVar14 = iVar14 + 1;
      lVar16 = lVar16 + 0x18;
      lVar15 = lVar15 + 4;
    } while ((ulonglong)param_13 * 0x18 != lVar16);
  }
  return;
}

// BlendPosesPerBoneFilterRotation_sse4 @ 140ac9790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterRotation_sse4
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 (*pauVar14) [12];
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar37;
  ulonglong uVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar45;
  undefined1 auVar44 [16];
  int iVar46;
  double dVar47;
  double dVar48;
  int iVar50;
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double local_228;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined8 local_1f8;
  double local_1e8;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1b8;
  double dStack_190;
  double local_188;
  double local_178;
  double local_168;
  double local_158;
  double local_148;
  double dVar4;
  ulonglong uVar36;
  
  if (0 < (int)param_10) {
    lVar17 = 0;
    lVar19 = 0x2c;
    iVar16 = 0;
    do {
      iVar46 = *(int *)(param_8 + lVar17 * 2);
      iVar6 = *(int *)(param_9 + lVar17);
      lVar18 = (longlong)iVar6;
      dVar45 = *(double *)(param_2 + -0x58 + lVar19 * 2);
      local_228 = *(double *)(param_2 + -0x50 + lVar19 * 2);
      local_218 = *(double *)(param_2 + -0x48 + lVar19 * 2);
      dVar51 = *(double *)(param_2 + -0x40 + lVar19 * 2);
      dVar34 = *(double *)(param_2 + -0x38 + lVar19 * 2);
      local_188 = *(double *)(param_2 + -0x30 + lVar19 * 2);
      local_1d8 = *(double *)(param_2 + -0x28 + lVar19 * 2);
      local_178 = *(double *)(param_2 + -0x20 + lVar19 * 2);
      local_148 = *(double *)(param_2 + -0x18 + lVar19 * 2);
      local_168 = *(double *)(param_2 + -0x10 + lVar19 * 2);
      local_158 = *(double *)(param_2 + -8 + lVar19 * 2);
      dVar58 = *(double *)(param_2 + lVar19 * 2);
      pauVar14 = (undefined1 (*) [12])GetTransformFromArray(param_3,iVar46,iVar16);
      dVar47 = *(double *)*pauVar14;
      dVar40 = *(double *)(*pauVar14 + 8);
      auVar13 = *pauVar14;
      dVar31 = *(double *)(pauVar14[1] + 4);
      dVar32 = *(double *)pauVar14[2];
      if (lVar18 == -1) {
        dVar25 = dVar51 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        dVar26 = local_218 * 0.0 * _UNK_15076c6f8;
        dVar24 = local_228 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                 local_218 * 0.0 + dVar45 + dVar25;
        local_1e8 = dVar45 * 0.0 * _UNK_15076b868 + dVar51 * 0.0 + local_228 + dVar26;
        dVar25 = ((local_228 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + local_218) -
                 dVar45 * 0.0) + dVar25;
        dVar26 = ((dVar45 * 0.0 * _UNK_15076c6f8 + dVar51) - local_228 * 0.0) + dVar26;
        dVar28 = dVar32 * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        local_1b8 = dVar31 * 0.0 * _UNK_15076c6f8;
        uVar53 = SUB84(dVar26,0);
        uVar54 = (undefined4)((ulonglong)dVar26 >> 0x20);
        dVar26 = dVar40 * 0.0 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar31 * 0.0 + dVar47 + dVar28;
        dVar27 = dVar47 * 0.0 * _UNK_15076b868 + dVar32 * 0.0 + dVar40 + local_1b8;
        dVar28 = ((dVar40 * 0.0 * ___xmm_bff00000000000003ff0000000000000 + dVar31) - dVar47 * 0.0)
                 + dVar28;
        local_1b8 = ((dVar47 * 0.0 * _UNK_15076c6f8 + dVar32) - dVar40 * 0.0) + local_1b8;
      }
      else {
        lVar15 = lVar18 * 0x20;
        pdVar1 = (double *)(param_4 + 0x18 + lVar15);
        dVar25 = *pdVar1;
        dVar26 = *pdVar1;
        dVar28 = *(double *)(param_4 + lVar15);
        dVar27 = *(double *)(param_4 + lVar15);
        pdVar1 = (double *)(param_4 + 8 + lVar15);
        dVar33 = *pdVar1;
        dVar29 = *pdVar1;
        pdVar1 = (double *)(param_4 + 0x10 + lVar15);
        dVar41 = *pdVar1;
        dVar37 = *pdVar1;
        dVar24 = local_228 * dVar41 * ___xmm_3ff0000000000000bff0000000000000 +
                 local_218 * dVar33 +
                 dVar28 * dVar51 * ___xmm_bff00000000000003ff0000000000000 + dVar45 * dVar25;
        local_1e8 = dVar45 * dVar37 * _UNK_15076b868 +
                    dVar51 * dVar29 + dVar27 * local_218 * _UNK_15076c6f8 + local_228 * dVar26;
        dVar25 = dVar51 * dVar41 * ___xmm_bff00000000000003ff0000000000000 +
                 ((local_228 * dVar28 * ___xmm_bff00000000000003ff0000000000000 + dVar25 * local_218
                  ) - dVar45 * dVar33);
        dVar26 = local_218 * dVar37 * _UNK_15076c6f8 +
                 ((dVar45 * dVar27 * _UNK_15076c6f8 + dVar26 * dVar51) - local_228 * dVar29);
        pdVar1 = (double *)(param_5 + 0x18 + lVar15);
        dVar28 = *pdVar1;
        dVar29 = *pdVar1;
        dVar33 = *(double *)(param_5 + lVar15);
        dVar37 = *(double *)(param_5 + lVar15);
        pdVar1 = (double *)(param_5 + 8 + lVar15);
        dVar41 = *pdVar1;
        dVar2 = *pdVar1;
        pdVar1 = (double *)(param_5 + 0x10 + lVar15);
        dVar3 = *pdVar1;
        dVar4 = *pdVar1;
        uVar53 = SUB84(dVar26,0);
        uVar54 = (undefined4)((ulonglong)dVar26 >> 0x20);
        dVar26 = dVar40 * dVar3 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar31 * dVar41 +
                 dVar33 * dVar32 * ___xmm_bff00000000000003ff0000000000000 + dVar47 * dVar28;
        dVar27 = dVar47 * dVar4 * _UNK_15076b868 +
                 dVar32 * dVar2 + dVar37 * dVar31 * _UNK_15076c6f8 + dVar40 * dVar29;
        dVar28 = dVar32 * dVar3 * ___xmm_bff00000000000003ff0000000000000 +
                 ((dVar40 * dVar33 * ___xmm_bff00000000000003ff0000000000000 + dVar28 * dVar31) -
                 dVar47 * dVar41);
        local_1b8 = dVar31 * dVar4 * _UNK_15076c6f8 +
                    ((dVar47 * dVar37 * _UNK_15076c6f8 + dVar29 * dVar32) - dVar40 * dVar2);
      }
      dVar29 = *(double *)(pauVar14[2] + 8);
      dVar33 = *(double *)(pauVar14[3] + 4);
      dVar37 = *(double *)pauVar14[4];
      dVar41 = *(double *)(pauVar14[4] + 8);
      dVar2 = *(double *)(pauVar14[5] + 4);
      dVar3 = *(double *)pauVar14[6];
      dVar4 = *(double *)(pauVar14[6] + 8);
      dVar5 = *(double *)(pauVar14[7] + 4);
      fVar55 = *(float *)(param_8 + 4 + lVar17 * 2);
      if (fVar55 <= 0.0) {
        fVar55 = 0.0;
      }
      if (__real_3f800000 <= fVar55) {
        fVar55 = __real_3f800000;
      }
      fVar21 = *(float *)(param_7 + (longlong)iVar46 * 4);
      if (fVar21 <= fVar55) {
        fVar21 = fVar55;
      }
      *(float *)(param_7 + (longlong)iVar46 * 4) = fVar21;
      if (fVar55 <= __real_3727c5ac) {
        dVar48 = (double)CONCAT44(uVar54,uVar53);
        uVar22 = SUB84(dVar24,0);
        uVar23 = (undefined4)((ulonglong)dVar24 >> 0x20);
        dVar56 = local_1e8;
        dVar42 = dVar25;
      }
      else if (__real_3f7fff58 <= fVar55) {
        uVar22 = SUB84(dVar26,0);
        uVar23 = (undefined4)((ulonglong)dVar26 >> 0x20);
        dVar56 = dVar27;
        dVar42 = dVar28;
        dVar48 = local_1b8;
        dVar58 = dVar5;
        dVar34 = dVar29;
        dVar45 = dVar47;
        dVar51 = dVar32;
        local_1d8 = dVar37;
        local_188 = dVar33;
        local_178 = dVar41;
        local_158 = dVar4;
        local_148 = dVar2;
        local_168 = dVar3;
        local_228 = dVar40;
        local_218 = dVar31;
      }
      else {
        auVar7._8_4_ = SUB84(dVar51,0);
        auVar7._0_8_ = local_218;
        auVar7._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        auVar8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
        auVar8._0_12_ = auVar13;
        local_1f8 = (double)CONCAT44(uVar54,uVar53);
        dVar47 = dVar45 * dVar47 + local_218 * dVar31;
        dVar51 = local_228 * dVar40 + dVar51 * dVar32;
        iVar46 = -(uint)(0.0 <= dVar51 + dVar47);
        iVar50 = -(uint)(0.0 <= dVar47 + dVar51);
        auVar49._4_4_ = iVar46;
        auVar49._0_4_ = iVar46;
        auVar49._8_4_ = iVar50;
        auVar49._12_4_ = iVar50;
        auVar49 = blendvps(ZEXT816(0),___xmm_ffffffffffffffffffffffffffffffff,auVar49);
        dVar57 = (double)fVar55;
        dVar34 = dVar34 + (dVar29 - dVar34) * dVar57;
        local_188 = local_188 + (dVar33 - local_188) * dVar57;
        auVar9._8_4_ = SUB84(local_188,0);
        auVar9._0_8_ = dVar34;
        auVar9._12_4_ = (int)((ulonglong)local_188 >> 0x20);
        dVar29 = local_1d8 + (dVar37 - local_1d8) * dVar57;
        local_178 = local_178 + (dVar41 - local_178) * dVar57;
        dVar51 = __real_3ff0000000000000 - dVar57;
        uVar30 = auVar49._0_8_;
        auVar35._0_4_ = ~auVar49._0_4_ & SUB84(0.0 - dVar45,0);
        uVar36 = auVar49._8_8_;
        auVar35._4_4_ = ~auVar49._4_4_ & (uint)((ulonglong)(0.0 - dVar45) >> 0x20);
        auVar35._8_4_ = ~auVar49._8_4_ & SUB84(0.0 - local_228,0);
        auVar35._12_4_ = ~auVar49._12_4_ & (uint)((ulonglong)(0.0 - local_228) >> 0x20);
        dStack_210 = auVar7._8_8_;
        auVar39._0_8_ = (ulonglong)dVar45 & uVar30;
        auVar39._8_8_ = (ulonglong)local_228 & uVar36;
        dVar47 = dVar31 * dVar57 +
                 (double)(~uVar30 & (ulonglong)(0.0 - local_218) | (ulonglong)local_218 & uVar30) *
                 dVar51;
        dVar40 = dVar32 * dVar57 +
                 (double)(~uVar36 & (ulonglong)(0.0 - dStack_210) | (ulonglong)dStack_210 & uVar36)
                 * dVar51;
        local_208 = auVar13._0_8_;
        dStack_200 = auVar8._8_8_;
        dVar31 = local_208 * dVar57 + SUB168(auVar39 | auVar35,0) * dVar51;
        dVar37 = dStack_200 * dVar57 + SUB168(auVar39 | auVar35,8) * dVar51;
        dVar45 = dVar37 * dVar37 + dVar40 * dVar40 + dVar31 * dVar31 + dVar47 * dVar47;
        dVar32 = __real_3ff0000000000000 / SQRT(dVar45);
        uVar36 = ~-(ulonglong)(dVar45 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        uVar30 = (ulonglong)(dVar40 * dVar32) & uVar36;
        auVar52._0_8_ = ~uVar36 & ___xmm_3ff00000000000000000000000000000;
        auVar52._8_8_ = ~uVar36 & _UNK_15061cbc8;
        auVar12._8_4_ = (int)uVar30;
        auVar12._0_8_ = (ulonglong)(dVar47 * dVar32) & uVar36;
        auVar12._12_4_ = (int)(uVar30 >> 0x20);
        dVar45 = dVar27 * local_1e8 + local_1b8 * local_1f8;
        local_1d8._4_4_ = (undefined4)((ulonglong)dVar29 >> 0x20);
        uStack_1d0 = SUB84(local_178,0);
        uStack_1cc = (undefined4)((ulonglong)local_178 >> 0x20);
        auVar13._4_8_ = dVar45;
        auVar13._0_4_ = local_1d8._4_4_;
        auVar44._0_8_ = auVar13._0_8_ << 0x20;
        auVar44._8_4_ = uStack_1d0;
        auVar44._12_4_ = uStack_1cc;
        uVar20 = -(uint)(0.0 <= (float)(dVar45 + dVar26 * dVar24 + dVar28 * dVar25));
        dStack_190 = auVar9._8_8_;
        local_188 = dStack_190;
        dVar51 = (double)(float)(~uVar20 & ((uint)(__real_3f800000 - fVar55) ^
                                           __xmm_80000000800000008000000080000000) |
                                uVar20 & (uint)(__real_3f800000 - fVar55));
        dVar47 = dVar25 * dVar51 + dVar28 * dVar57;
        dVar40 = local_1f8 * dVar51 + local_1b8 * dVar57;
        dVar45 = dVar24 * dVar51 + dVar26 * dVar57;
        dVar51 = local_1e8 * dVar51 + dVar27 * dVar57;
        dVar33 = dVar51 * dVar51 + dVar40 * dVar40 + dVar45 * dVar45 + dVar47 * dVar47;
        dVar41 = __real_3ff0000000000000 / SQRT(dVar33);
        uVar38 = ~-(ulonglong)(dVar33 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        uVar11 = (ulonglong)(dVar40 * dVar41) & uVar38;
        uVar30 = (ulonglong)(dVar45 * dVar41) & uVar38;
        uVar22 = (undefined4)uVar30;
        uVar23 = (undefined4)(uVar30 >> 0x20);
        auVar43._0_8_ = ~uVar38 & ___xmm_3ff00000000000000000000000000000;
        auVar43._8_8_ = ~uVar38 & _UNK_15061cbc8;
        auVar10._8_4_ = (int)uVar11;
        auVar10._0_8_ = (ulonglong)(dVar47 * dVar41) & uVar38;
        auVar10._12_4_ = (int)(uVar11 >> 0x20);
        dVar56 = (double)((ulonglong)(dVar51 * dVar41) & uVar38);
        dVar42 = SUB168(auVar43 | auVar10,0);
        dVar48 = SUB168(auVar43 | auVar10,8);
        dVar58 = dVar58 + (dVar5 - dVar58) * dVar57;
        dVar45 = (double)((ulonglong)(dVar31 * dVar32) & uVar36);
        dVar51 = SUB168(auVar52 | auVar12,8);
        local_1d8 = dVar29;
        local_178 = auVar44._8_8_;
        local_158 = local_158 + (dVar4 - local_158) * dVar57;
        local_148 = local_148 + (dVar2 - local_148) * dVar57;
        local_168 = local_168 + (dVar3 - local_168) * dVar57;
        local_228 = (double)((ulonglong)(dVar37 * dVar32) & uVar36);
        local_218 = SUB168(auVar52 | auVar12,0);
      }
      *(double *)(param_4 + lVar17 * 8) = dVar24;
      *(double *)(param_4 + 8 + lVar17 * 8) = local_1e8;
      *(double *)(param_4 + 0x10 + lVar17 * 8) = dVar25;
      *(ulonglong *)(param_4 + 0x18 + lVar17 * 8) = CONCAT44(uVar54,uVar53);
      *(double *)(param_5 + lVar17 * 8) = dVar26;
      *(double *)(param_5 + 8 + lVar17 * 8) = dVar27;
      *(double *)(param_5 + 0x10 + lVar17 * 8) = dVar28;
      *(double *)(param_5 + 0x18 + lVar17 * 8) = local_1b8;
      if (iVar6 != -1) {
        lVar18 = lVar18 * 0x20;
        pdVar1 = (double *)(param_6 + 0x10 + lVar18);
        dVar31 = *pdVar1 * ___xmm_3ff0000000000000bff0000000000000;
        dVar32 = pdVar1[1] * _UNK_15076b868;
        dVar45 = *(double *)(param_6 + lVar18);
        dVar51 = *(double *)(param_6 + lVar18);
        pdVar1 = (double *)(param_6 + 8 + lVar18);
        dVar47 = *pdVar1;
        dVar40 = *pdVar1;
        dVar24 = dVar48 * dVar31 * ___xmm_bff00000000000003ff0000000000000 +
                 (double)CONCAT44(uVar23,uVar22) * dVar47 +
                 (dVar42 * dVar32 - dVar45 * dVar56 * ___xmm_bff00000000000003ff0000000000000);
        dVar25 = dVar42 * dVar31 * _UNK_15076c6f8 +
                 dVar56 * dVar40 +
                 (dVar48 * dVar32 - dVar51 * (double)CONCAT44(uVar23,uVar22) * _UNK_15076c6f8);
        dVar47 = dVar56 * dVar31 * ___xmm_3ff0000000000000bff0000000000000 +
                 ((dVar32 * (double)CONCAT44(uVar23,uVar22) -
                  dVar48 * dVar45 * ___xmm_bff00000000000003ff0000000000000) - dVar42 * dVar47);
        dVar40 = (double)CONCAT44(uVar23,uVar22) * dVar31 * _UNK_15076b868 +
                 ((dVar32 * dVar56 - dVar42 * dVar51 * _UNK_15076c6f8) - dVar48 * dVar40);
        dVar45 = dVar40 * dVar40 + dVar25 * dVar25 + dVar47 * dVar47 + dVar24 * dVar24;
        dVar51 = __real_3ff0000000000000 / SQRT(dVar45);
        uVar30 = ~-(ulonglong)(dVar45 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        dVar45 = (double)((ulonglong)(dVar47 * dVar51) & uVar30);
        local_228 = (double)((ulonglong)(dVar40 * dVar51) & uVar30);
        local_218 = (double)(~uVar30 & ___xmm_3ff00000000000000000000000000000 |
                            (ulonglong)(dVar24 * dVar51) & uVar30);
        dVar51 = (double)(~uVar30 & _UNK_15061cbc8 | (ulonglong)(dVar25 * dVar51) & uVar30);
      }
      *(ulonglong *)(param_6 + lVar17 * 8) = CONCAT44(uVar23,uVar22);
      *(double *)(param_6 + 8 + lVar17 * 8) = dVar56;
      *(double *)(param_6 + 0x10 + lVar17 * 8) = dVar42;
      *(double *)(param_6 + 0x18 + lVar17 * 8) = dVar48;
      *(double *)(param_1 + -0x58 + lVar19 * 2) = dVar45;
      *(double *)(param_1 + -0x50 + lVar19 * 2) = local_228;
      *(double *)(param_1 + -0x48 + lVar19 * 2) = local_218;
      *(double *)(param_1 + -0x40 + lVar19 * 2) = dVar51;
      *(double *)(param_1 + -0x38 + lVar19 * 2) = dVar34;
      *(double *)(param_1 + -0x30 + lVar19 * 2) = local_188;
      *(double *)(param_1 + -0x28 + lVar19 * 2) = local_1d8;
      *(double *)(param_1 + -0x20 + lVar19 * 2) = local_178;
      *(double *)(param_1 + -0x18 + lVar19 * 2) = local_148;
      *(double *)(param_1 + -0x10 + lVar19 * 2) = local_168;
      *(double *)(param_1 + -8 + lVar19 * 2) = local_158;
      *(double *)(param_1 + lVar19 * 2) = dVar58;
      iVar16 = iVar16 + 1;
      lVar19 = lVar19 + 0x30;
      lVar17 = lVar17 + 4;
    } while ((ulonglong)param_10 << 2 != lVar17);
  }
  return;
}

// BlendPosesPerBoneFilterScale_sse4 @ 140aca4c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScale_sse4
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10)

{
  float fVar1;
  double dVar2;
  double dVar3;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong lVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  int iVar30;
  double *pdVar31;
  undefined4 uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  int iVar36;
  double dVar37;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar38;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  undefined1 auVar62 [16];
  float fVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  double dVar69;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  int iVar70;
  double dVar71;
  undefined1 unaff_XMM14 [16];
  double dVar72;
  ulonglong uVar73;
  undefined1 auVar74 [16];
  ulonglong uVar76;
  undefined1 auVar75 [16];
  double local_220;
  double local_218;
  double local_1f8;
  double local_1d8;
  double local_1c8;
  double local_1a8;
  double local_198;
  double local_188;
  double local_178;
  double local_168;
  double local_158;
  double local_148;
  undefined1 local_118 [16];
  
  if (0 < (int)param_10) {
    lVar33 = 0;
    lVar35 = 0;
    do {
      iVar30 = *(int *)(param_8 + lVar35 * 8);
      iVar36 = *(int *)(param_9 + lVar35 * 4);
      lVar34 = (longlong)iVar36;
      dVar2 = *(double *)(param_2 + lVar33 * 4);
      dVar47 = *(double *)(param_2 + 8 + lVar33 * 4);
      dVar48 = *(double *)(param_2 + 0x10 + lVar33 * 4);
      dVar51 = *(double *)(param_2 + 0x18 + lVar33 * 4);
      dVar38 = *(double *)(param_2 + 0x20 + lVar33 * 4);
      dVar64 = *(double *)(param_2 + 0x28 + lVar33 * 4);
      dVar69 = *(double *)(param_2 + 0x30 + lVar33 * 4);
      dVar3 = *(double *)(param_2 + 0x38 + lVar33 * 4);
      dVar4 = *(double *)(param_2 + 0x40 + lVar33 * 4);
      dVar5 = *(double *)(param_2 + 0x48 + lVar33 * 4);
      dVar6 = *(double *)(param_2 + 0x50 + lVar33 * 4);
      dVar7 = *(double *)(param_2 + 0x58 + lVar33 * 4);
      pdVar31 = (double *)GetTransformFromArray(param_3,iVar30,(int)lVar35);
      dVar8 = pdVar31[8];
      dVar9 = pdVar31[9];
      dVar10 = pdVar31[10];
      dVar24 = dVar4;
      dVar25 = dVar6;
      local_220 = dVar10;
      local_1f8 = dVar5;
      dVar28 = dVar8;
      dVar29 = dVar9;
      if (lVar34 != -1) {
        lVar23 = lVar34 * 0x18;
        dVar24 = dVar4 * *(double *)(param_4 + lVar23);
        dVar25 = *(double *)(param_4 + 0x10 + lVar23) * dVar6;
        local_220 = *(double *)(param_5 + 0x10 + lVar23) * dVar10;
        local_1f8 = dVar5 * ((double *)(param_4 + lVar23))[1];
        dVar28 = dVar8 * *(double *)(param_5 + lVar23);
        dVar29 = dVar9 * ((double *)(param_5 + lVar23))[1];
      }
      dVar58 = *pdVar31;
      dVar11 = pdVar31[1];
      dVar53 = pdVar31[2];
      dVar12 = pdVar31[3];
      dVar13 = pdVar31[4];
      dVar14 = pdVar31[5];
      dVar15 = pdVar31[6];
      dVar16 = pdVar31[7];
      dVar17 = pdVar31[0xb];
      fVar63 = *(float *)(param_8 + 4 + lVar35 * 8);
      if (fVar63 <= __xmm_00000000000000000000000000000000) {
        fVar63 = __xmm_00000000000000000000000000000000;
      }
      if (__real_3f800000 <= fVar63) {
        fVar63 = __real_3f800000;
      }
      fVar1 = *(float *)(param_7 + (longlong)iVar30 * 4);
      if (fVar1 <= fVar63) {
        fVar1 = fVar63;
      }
      *(float *)(param_7 + (longlong)iVar30 * 4) = fVar1;
      dVar52 = dVar25;
      dVar71 = dVar24;
      dVar72 = local_1f8;
      dVar61 = dVar4;
      dVar65 = dVar6;
      local_1d8 = dVar7;
      local_1c8 = dVar5;
      local_168 = dVar3;
      local_148 = dVar69;
      local_188 = dVar2;
      local_1a8 = dVar47;
      local_218 = dVar48;
      local_198 = dVar51;
      local_158 = dVar38;
      local_178 = dVar64;
      if ((__real_3727c5ac < fVar63) &&
         (dVar52 = local_220, dVar71 = dVar28, dVar72 = dVar29, dVar61 = dVar8, dVar65 = dVar10,
         local_1d8 = dVar17, local_1c8 = dVar9, local_168 = dVar16, local_148 = dVar15,
         local_188 = dVar58, local_1a8 = dVar11, local_218 = dVar53, local_198 = dVar12,
         local_158 = dVar13, local_178 = dVar14, fVar63 < __real_3f7fff58)) {
        dVar71 = dVar2 * dVar58 + dVar48 * dVar53;
        dVar72 = dVar47 * dVar11 + dVar51 * dVar12;
        iVar70 = -(uint)(0.0 <= dVar72 + dVar71);
        iVar30 = -(uint)(0.0 <= dVar71 + dVar72);
        auVar39._4_4_ = iVar70;
        auVar39._0_4_ = iVar70;
        auVar39._8_4_ = iVar30;
        auVar39._12_4_ = iVar30;
        auVar26._4_4_ = _UNK_15060db24;
        auVar26._0_4_ = ___xmm_ffffffffffffffffffffffffffffffff;
        auVar26._8_4_ = _UNK_15060db28;
        auVar26._12_4_ = _UNK_15060db2c;
        auVar74 = blendvps(ZEXT816(0),auVar26,auVar39);
        dVar37 = (double)fVar63;
        uVar73 = auVar74._0_8_;
        auVar50._0_8_ = (ulonglong)dVar2 & uVar73;
        uVar76 = auVar74._8_8_;
        auVar50._8_8_ = (ulonglong)dVar47 & uVar76;
        auVar66._4_4_ = ~auVar74._4_4_ & (uint)((ulonglong)(0.0 - dVar2) >> 0x20);
        auVar66._0_4_ = ~auVar74._0_4_ & SUB84(0.0 - dVar2,0);
        auVar66._8_4_ = ~auVar74._8_4_ & SUB84(0.0 - dVar47,0);
        auVar66._12_4_ = ~auVar74._12_4_ & (uint)((ulonglong)(0.0 - dVar47) >> 0x20);
        auVar75._0_8_ = ~uVar73 & (ulonglong)(0.0 - dVar48);
        auVar75._8_8_ = ~uVar76 & (ulonglong)(0.0 - dVar51);
        auVar74._8_4_ = (int)((ulonglong)dVar51 & uVar76);
        auVar74._0_8_ = (ulonglong)dVar48 & uVar73;
        auVar74._12_4_ = (int)(((ulonglong)dVar51 & uVar76) >> 0x20);
        dVar47 = __real_3ff0000000000000 - dVar37;
        dVar51 = dVar53 * dVar37 + SUB168(auVar75 | auVar74,0) * dVar47;
        dVar53 = dVar12 * dVar37 + SUB168(auVar75 | auVar74,8) * dVar47;
        dVar2 = dVar58 * dVar37 + SUB168(auVar50 | auVar66,0) * dVar47;
        dVar47 = dVar11 * dVar37 + SUB168(auVar50 | auVar66,8) * dVar47;
        dVar48 = dVar47 * dVar47 + dVar53 * dVar53 + dVar2 * dVar2 + dVar51 * dVar51;
        dVar58 = __real_3ff0000000000000 / SQRT(dVar48);
        uVar73 = ~-(ulonglong)(dVar48 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        auVar49._0_8_ = ~uVar73 & ___xmm_3ff00000000000000000000000000000;
        auVar49._8_8_ = ~uVar73 & _UNK_15061cbc8;
        auVar20._8_8_ = (ulonglong)(dVar53 * dVar58) & uVar73;
        auVar20._0_8_ = (ulonglong)(dVar51 * dVar58) & uVar73;
        dVar52 = (local_220 - dVar25) * dVar37 + dVar25;
        dVar71 = (dVar28 - dVar24) * dVar37 + dVar24;
        dVar72 = (dVar29 - local_1f8) * dVar37 + local_1f8;
        dVar61 = dVar4 + (dVar8 - dVar4) * dVar37;
        dVar65 = dVar6 + (dVar10 - dVar6) * dVar37;
        local_1d8 = dVar7 + (dVar17 - dVar7) * dVar37;
        local_1c8 = dVar5 + (dVar9 - dVar5) * dVar37;
        local_168 = dVar3 + (dVar16 - dVar3) * dVar37;
        local_148 = dVar69 + (dVar15 - dVar69) * dVar37;
        local_188 = (double)((ulonglong)(dVar2 * dVar58) & uVar73);
        local_1a8 = (double)((ulonglong)(dVar47 * dVar58) & uVar73);
        local_218 = SUB168(auVar49 | auVar20,0);
        local_198 = SUB168(auVar49 | auVar20,8);
        local_158 = dVar38 + (dVar13 - dVar38) * dVar37;
        local_178 = dVar64 + (dVar14 - dVar64) * dVar37;
      }
      *(double *)(param_4 + lVar33) = dVar24;
      *(double *)(param_4 + 8 + lVar33) = local_1f8;
      *(double *)(param_4 + 0x10 + lVar33) = dVar25;
      *(double *)(param_5 + lVar33) = dVar28;
      *(double *)(param_5 + 8 + lVar33) = dVar29;
      *(double *)(param_5 + 0x10 + lVar33) = local_220;
      if (iVar36 != -1) {
        dVar2 = *(double *)(param_6 + 0x10 + lVar34 * 0x18);
        pdVar31 = (double *)(param_6 + lVar34 * 0x18);
        dVar47 = *pdVar31;
        dVar48 = pdVar31[1];
        uVar56 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                        (double)((ulonglong)dVar2 & __xmm_7fffffffffffffff7fffffffffffffff));
        uVar54 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                        (double)((ulonglong)dVar47 & __xmm_7fffffffffffffff7fffffffffffffff));
        uVar55 = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar48 & _UNK_15061cc88));
        auVar59._4_4_ = uVar55;
        auVar59._0_4_ = uVar54;
        auVar59._8_4_ = uVar56;
        auVar59._12_4_ = -(uint)(_UNK_150aa88b8 < 0.0);
        auVar62._0_4_ =
             -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar47 &&
                    dVar47 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
        auVar62._4_4_ = -(uint)(_UNK_150b51668 <= dVar48 && dVar48 <= _UNK_150b51658);
        auVar62._8_4_ =
             -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar2 &&
                    dVar2 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
        auVar62._12_4_ = -(uint)(_UNK_150b51668 <= 0.0 && 0.0 <= _UNK_150b51658);
        uVar54 = auVar62._0_4_ & uVar54;
        uVar55 = auVar62._4_4_ & uVar55;
        uVar56 = auVar62._8_4_ & uVar56;
        uVar57 = auVar62._12_4_ & -(uint)(_UNK_150aa88b8 < 0.0);
        auVar21._4_4_ = uVar55;
        auVar21._0_4_ = uVar54;
        auVar21._8_4_ = uVar56;
        auVar21._12_4_ = uVar57;
        iVar30 = movmskps(iVar36 * 3,auVar21);
        if (iVar30 == 0) {
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0;
LAB_140acaddc:
          dVar64 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                           ((ulonglong)dVar47 & ___xmm_7fe00000000000007fe0000000000000));
          dVar69 = (double)((longlong)_UNK_150b51628 - ((ulonglong)dVar48 & _UNK_150b51678));
          dVar38 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                           ((ulonglong)dVar2 & ___xmm_7fe00000000000007fe0000000000000));
          auVar68._0_4_ = (float)(dVar47 * dVar64);
          auVar68._4_4_ = (float)(dVar48 * dVar69);
          fVar63 = (float)(dVar2 * dVar38);
          auVar43._0_8_ = CONCAT44((float)(_UNK_150b51628 * 0.0),fVar63);
          auVar43._8_8_ = 0;
          auVar68._8_8_ = auVar43._0_8_;
          auVar66 = rcpps(auVar43,auVar68);
          dVar38 = (double)((_UNK_15076ba38 - fVar63 * auVar66._8_4_) * auVar66._8_4_) * dVar38;
          dVar51 = (double)((_UNK_15076ba3c - (float)(_UNK_150b51628 * 0.0) * auVar66._12_4_) *
                           auVar66._12_4_) * _UNK_150b51628;
          dVar64 = (double)((___xmm_40000000400000004000000040000000 - auVar68._0_4_ * auVar66._0_4_
                            ) * auVar66._0_4_) * dVar64;
          dVar69 = (double)((_UNK_15076ba34 - auVar68._4_4_ * auVar66._4_4_) * auVar66._4_4_) *
                   dVar69;
          dVar64 = (___xmm_40000000000000004000000000000000 - dVar47 * dVar64) * dVar64;
          dVar69 = (_UNK_150689698 - dVar48 * dVar69) * dVar69;
          dVar38 = (___xmm_40000000000000004000000000000000 - dVar2 * dVar38) * dVar38;
          dVar51 = (_UNK_150689698 - dVar51 * 0.0) * dVar51;
          dVar51 = (_UNK_150689698 - dVar51 * 0.0) * dVar51;
          auVar60._0_8_ = (___xmm_40000000000000004000000000000000 - dVar47 * dVar64) * dVar64;
          auVar60._8_8_ = (_UNK_150689698 - dVar48 * dVar69) * dVar69;
          auVar44._4_4_ = uVar54 ^ ___xmm_ffffffffffffffffffffffffffffffff;
          auVar44._0_4_ = uVar54 ^ ___xmm_ffffffffffffffffffffffffffffffff;
          auVar44._8_4_ = uVar55 ^ _UNK_15060db24;
          auVar44._12_4_ = uVar55 ^ _UNK_15060db24;
          unaff_XMM14 = blendvps(unaff_XMM14,auVar60,auVar44);
          auVar45._4_4_ = uVar56 ^ _UNK_15060db28;
          auVar45._0_4_ = uVar56 ^ _UNK_15060db28;
          auVar45._8_4_ = uVar57 ^ _UNK_15060db2c;
          auVar45._12_4_ = uVar57 ^ _UNK_15060db2c;
          auVar19._8_4_ = SUB84(dVar51,0);
          auVar19._0_8_ = (___xmm_40000000000000004000000000000000 - dVar2 * dVar38) * dVar38;
          auVar19._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          local_118 = blendvps(local_118,auVar19,auVar45);
        }
        else {
          auVar40._0_4_ = (float)dVar47;
          auVar40._4_4_ = (float)dVar48;
          fVar63 = (float)dVar2;
          auVar40._8_4_ = fVar63;
          auVar40._12_4_ = 0;
          auVar66 = rcpps(ZEXT416((uint)fVar63),auVar40);
          dVar38 = (double)((___xmm_40000000400000004000000040000000 - auVar40._0_4_ * auVar66._0_4_
                            ) * auVar66._0_4_);
          dVar51 = (double)((_UNK_15076ba34 - auVar40._4_4_ * auVar66._4_4_) * auVar66._4_4_);
          dVar64 = (double)((_UNK_15076ba38 - fVar63 * auVar66._8_4_) * auVar66._8_4_);
          dVar69 = (double)((_UNK_15076ba3c - auVar66._12_4_ * 0.0) * auVar66._12_4_);
          dVar38 = (___xmm_40000000000000004000000000000000 - dVar47 * dVar38) * dVar38;
          dVar51 = (_UNK_150689698 - dVar48 * dVar51) * dVar51;
          dVar64 = (___xmm_40000000000000004000000000000000 - dVar2 * dVar64) * dVar64;
          dVar69 = (_UNK_150689698 - dVar69 * 0.0) * dVar69;
          auVar41._0_8_ = dVar2 * dVar64;
          auVar41._8_8_ = dVar69 * 0.0;
          auVar67._0_8_ = (___xmm_40000000000000004000000000000000 - auVar41._0_8_) * dVar64;
          auVar67._8_8_ = (_UNK_150689698 - auVar41._8_8_) * dVar69;
          dVar51 = (_UNK_150689698 - dVar48 * dVar51) * dVar51;
          auVar66 = pmovsxdq(auVar41,auVar62);
          auVar22._8_4_ = SUB84(dVar51,0);
          auVar22._0_8_ = (___xmm_40000000000000004000000000000000 - dVar47 * dVar38) * dVar38;
          auVar22._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          unaff_XMM14 = blendvps(unaff_XMM14,auVar22,auVar66);
          auVar42._4_4_ = auVar62._8_4_;
          auVar42._0_4_ = auVar62._8_4_;
          auVar42._8_4_ = auVar62._12_4_;
          auVar42._12_4_ = auVar62._12_4_;
          local_118 = blendvps(local_118,auVar67,auVar42);
          uVar32 = movmskps((int)param_6,auVar59);
          if ((char)uVar32 != (char)iVar30) goto LAB_140acaddc;
        }
        auVar27._8_8_ = _UNK_150aa88b8;
        auVar27._0_8_ = ___xmm_3e45798ee2308c3a3e45798ee2308c3a;
        iVar30 = -(uint)((double)((ulonglong)dVar2 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                        ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
        iVar36 = -(uint)(0.0 <= _UNK_150aa88b8);
        auVar18._4_4_ = -(uint)((double)((ulonglong)dVar48 & _UNK_15061cc88) <= _UNK_150aa88b8);
        auVar18._0_4_ =
             -(uint)((double)((ulonglong)dVar47 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                    ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
        auVar18._8_4_ = iVar30;
        auVar18._12_4_ = iVar36;
        auVar66 = pmovsxdq(auVar27,auVar18);
        auVar66 = blendvps(unaff_XMM14,ZEXT816(0),auVar66);
        auVar46._4_4_ = iVar30;
        auVar46._0_4_ = iVar30;
        auVar46._8_4_ = iVar36;
        auVar46._12_4_ = iVar36;
        auVar74 = blendvps(local_118,ZEXT816(0),auVar46);
        dVar61 = dVar71 * auVar66._0_8_;
        local_1c8 = dVar72 * auVar66._8_8_;
        dVar65 = auVar74._0_8_ * dVar52;
        local_1d8 = 0.0;
      }
      *(double *)(param_6 + lVar33) = dVar71;
      *(double *)(param_6 + 8 + lVar33) = dVar72;
      *(double *)(param_6 + 0x10 + lVar33) = dVar52;
      *(double *)(param_1 + lVar33 * 4) = local_188;
      *(double *)(param_1 + 8 + lVar33 * 4) = local_1a8;
      *(double *)(param_1 + 0x10 + lVar33 * 4) = local_218;
      *(double *)(param_1 + 0x18 + lVar33 * 4) = local_198;
      *(double *)(param_1 + 0x20 + lVar33 * 4) = local_158;
      *(double *)(param_1 + 0x28 + lVar33 * 4) = local_178;
      *(double *)(param_1 + 0x30 + lVar33 * 4) = local_148;
      *(double *)(param_1 + 0x38 + lVar33 * 4) = local_168;
      *(double *)(param_1 + 0x40 + lVar33 * 4) = dVar61;
      *(double *)(param_1 + 0x48 + lVar33 * 4) = local_1c8;
      *(double *)(param_1 + 0x50 + lVar33 * 4) = dVar65;
      *(double *)(param_1 + 0x58 + lVar33 * 4) = local_1d8;
      lVar35 = lVar35 + 1;
      lVar33 = lVar33 + 0x18;
    } while ((ulonglong)param_10 * 0x18 != lVar33);
  }
  return;
}

// BlendPosesPerBoneFilter_sse4 @ 140acafc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilter_sse4
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               undefined8 param_6,uint param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double *pdVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  undefined4 uVar26;
  double dVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  ulonglong uVar32;
  int iVar33;
  double dVar34;
  int iVar36;
  double dVar37;
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  float fVar44;
  
  if (0 < (int)param_7) {
    lVar23 = 0xb;
    uVar24 = 0;
    do {
      iVar33 = *(int *)(param_5 + uVar24 * 8);
      dVar38 = *(double *)(param_2 + -0x58 + lVar23 * 8);
      dVar1 = *(double *)(param_2 + -0x50 + lVar23 * 8);
      uVar26 = SUB84(dVar1,0);
      uVar29 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar25 = *(double *)(param_2 + -0x48 + lVar23 * 8);
      dVar27 = *(double *)(param_2 + -0x40 + lVar23 * 8);
      uVar41 = SUB84(dVar27,0);
      uVar42 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar2 = *(double *)(param_2 + -0x38 + lVar23 * 8);
      dVar3 = *(double *)(param_2 + -0x30 + lVar23 * 8);
      dVar4 = *(double *)(param_2 + -0x28 + lVar23 * 8);
      dVar5 = *(double *)(param_2 + -0x20 + lVar23 * 8);
      dVar6 = *(double *)(param_2 + -0x18 + lVar23 * 8);
      dVar7 = *(double *)(param_2 + -0x10 + lVar23 * 8);
      dVar8 = *(double *)(param_2 + -8 + lVar23 * 8);
      dVar9 = *(double *)(param_2 + lVar23 * 8);
      pdVar22 = (double *)GetTransformFromArray(param_3,iVar33,(int)uVar24);
      dVar10 = *pdVar22;
      dVar11 = pdVar22[1];
      dVar30 = pdVar22[2];
      dVar31 = pdVar22[3];
      dVar12 = pdVar22[4];
      dVar13 = pdVar22[5];
      dVar14 = pdVar22[6];
      dVar15 = pdVar22[7];
      dVar16 = pdVar22[8];
      dVar17 = pdVar22[9];
      dVar18 = pdVar22[10];
      dVar19 = pdVar22[0xb];
      fVar44 = *(float *)(param_5 + 4 + uVar24 * 8);
      if (fVar44 <= __xmm_00000000000000000000000000000000) {
        fVar44 = __xmm_00000000000000000000000000000000;
      }
      if (__real_3f800000 <= fVar44) {
        fVar44 = __real_3f800000;
      }
      fVar40 = *(float *)(param_4 + (longlong)iVar33 * 4);
      if (fVar40 <= fVar44) {
        fVar40 = fVar44;
      }
      *(float *)(param_4 + (longlong)iVar33 * 4) = fVar40;
      if (__real_3727c5ac < fVar44) {
        if (__real_3f7fff58 <= fVar44) {
          uVar41 = SUB84(dVar31,0);
          uVar42 = (undefined4)((ulonglong)dVar31 >> 0x20);
          uVar26 = SUB84(dVar11,0);
          uVar29 = (undefined4)((ulonglong)dVar11 >> 0x20);
          dVar8 = dVar18;
          dVar9 = dVar19;
          dVar4 = dVar14;
          dVar2 = dVar12;
          dVar7 = dVar17;
          dVar6 = dVar16;
          dVar5 = dVar15;
          dVar3 = dVar13;
          dVar38 = dVar10;
          dVar25 = dVar30;
        }
        else {
          dVar34 = dVar38 * dVar10 + dVar25 * dVar30;
          dVar37 = dVar1 * dVar11 + dVar27 * dVar31;
          iVar33 = -(uint)(0.0 <= dVar37 + dVar34);
          iVar36 = -(uint)(0.0 <= dVar34 + dVar37);
          auVar35._4_4_ = iVar33;
          auVar35._0_4_ = iVar33;
          auVar35._8_4_ = iVar36;
          auVar35._12_4_ = iVar36;
          auVar35 = blendvps(ZEXT816(0),___xmm_ffffffffffffffffffffffffffffffff,auVar35);
          dVar34 = (double)fVar44;
          dVar37 = __real_3ff0000000000000 - dVar34;
          uVar28 = auVar35._0_8_;
          auVar39._0_8_ = (ulonglong)dVar38 & uVar28;
          uVar32 = auVar35._8_8_;
          auVar39._8_8_ = (ulonglong)dVar1 & uVar32;
          auVar21._4_4_ = ~auVar35._4_4_ & (uint)((ulonglong)(0.0 - dVar38) >> 0x20);
          auVar21._0_4_ = ~auVar35._0_4_ & SUB84(0.0 - dVar38,0);
          auVar21._8_4_ = ~auVar35._8_4_ & SUB84(0.0 - dVar1,0);
          auVar21._12_4_ = ~auVar35._12_4_ & (uint)((ulonglong)(0.0 - dVar1) >> 0x20);
          dVar30 = dVar30 * dVar34 +
                   (double)(~uVar28 & (ulonglong)(0.0 - dVar25) | (ulonglong)dVar25 & uVar28) *
                   dVar37;
          dVar31 = dVar31 * dVar34 +
                   (double)(~uVar32 & (ulonglong)(0.0 - dVar27) | (ulonglong)dVar27 & uVar32) *
                   dVar37;
          dVar25 = dVar10 * dVar34 + SUB168(auVar39 | auVar21,0) * dVar37;
          dVar27 = dVar11 * dVar34 + SUB168(auVar39 | auVar21,8) * dVar37;
          dVar38 = dVar27 * dVar27 + dVar31 * dVar31 + dVar25 * dVar25 + dVar30 * dVar30;
          dVar1 = __real_3ff0000000000000 / SQRT(dVar38);
          uVar32 = ~-(ulonglong)(dVar38 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
          uVar28 = (ulonglong)(dVar27 * dVar1) & uVar32;
          auVar43._0_8_ = ~uVar32 & ___xmm_3ff00000000000000000000000000000;
          auVar43._8_8_ = ~uVar32 & _UNK_15061cbc8;
          auVar20._8_8_ = (ulonglong)(dVar31 * dVar1) & uVar32;
          auVar20._0_8_ = (ulonglong)(dVar30 * dVar1) & uVar32;
          auVar43 = auVar43 | auVar20;
          uVar41 = auVar43._8_4_;
          uVar42 = auVar43._12_4_;
          uVar26 = (undefined4)uVar28;
          uVar29 = (undefined4)(uVar28 >> 0x20);
          dVar8 = dVar8 + (dVar18 - dVar8) * dVar34;
          dVar9 = dVar9 + (dVar19 - dVar9) * dVar34;
          dVar4 = dVar4 + (dVar14 - dVar4) * dVar34;
          dVar2 = dVar2 + (dVar12 - dVar2) * dVar34;
          dVar7 = dVar7 + (dVar17 - dVar7) * dVar34;
          dVar6 = dVar6 + (dVar16 - dVar6) * dVar34;
          dVar5 = dVar5 + (dVar15 - dVar5) * dVar34;
          dVar3 = dVar3 + (dVar13 - dVar3) * dVar34;
          dVar38 = (double)((ulonglong)(dVar25 * dVar1) & uVar32);
          dVar25 = auVar43._0_8_;
        }
      }
      *(double *)(param_1 + -0x58 + lVar23 * 8) = dVar38;
      *(ulonglong *)(param_1 + -0x50 + lVar23 * 8) = CONCAT44(uVar29,uVar26);
      *(double *)(param_1 + -0x48 + lVar23 * 8) = dVar25;
      *(ulonglong *)(param_1 + -0x40 + lVar23 * 8) = CONCAT44(uVar42,uVar41);
      *(double *)(param_1 + -0x38 + lVar23 * 8) = dVar2;
      *(double *)(param_1 + -0x30 + lVar23 * 8) = dVar3;
      *(double *)(param_1 + -0x28 + lVar23 * 8) = dVar4;
      *(double *)(param_1 + -0x20 + lVar23 * 8) = dVar5;
      *(double *)(param_1 + -0x18 + lVar23 * 8) = dVar6;
      *(double *)(param_1 + -0x10 + lVar23 * 8) = dVar7;
      *(double *)(param_1 + -8 + lVar23 * 8) = dVar8;
      *(double *)(param_1 + lVar23 * 8) = dVar9;
      uVar24 = uVar24 + 1;
      lVar23 = lVar23 + 0xc;
    } while (param_7 != uVar24);
  }
  return;
}

// BlendCurves_sse4 @ 140acb510

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendCurves_sse4(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                     uint param_5,int param_6,float param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  byte bVar19;
  undefined4 unaff_EBP;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint unaff_EDI;
  undefined4 uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  uint *puVar31;
  uint *puVar32;
  uint unaff_R15D;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar16 = _UNK_151c6b11c;
  uVar15 = _UNK_151c6b118;
  uVar14 = _UNK_151c6b114;
  uVar13 = ___xmm_0f8000000f8000000f8000000f800000;
  uVar12 = _UNK_151c6b10c;
  uVar22 = _UNK_151c6b108;
  uVar17 = _UNK_151c6b104;
  uVar24 = ___xmm_01800000010000000080000000000000;
  iVar11 = _UNK_15076b1fc;
  iVar10 = _UNK_15076b1f8;
  iVar9 = _UNK_15076b1f4;
  iVar28 = ___xmm_3f8000003f8000003f8000003f800000;
  fVar8 = __real_3727c5ac;
  if ((param_6 == 0) &&
     ((double)(float)((uint)(__real_bf800000 + param_7) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_3e45798ee2308c3a)) {
    param_7 = __real_3f800000;
  }
  uVar21 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar21 = param_5;
  }
  if ((int)(uVar21 & 0xfffffffc) < 1) {
    puVar31 = (uint *)0x0;
  }
  else {
    unaff_EDI = 0;
    puVar31 = (uint *)0x0;
    do {
      iVar30 = (int)puVar31;
      auVar38._0_4_ = (int)(float)(((iVar30 << 0x17 | uVar24) & uVar13) + iVar28);
      auVar38._4_4_ = (int)(float)(((iVar30 << 0x17 | uVar17) & uVar14) + iVar9);
      auVar38._8_4_ = (int)(float)(((iVar30 << 0x17 | uVar22) & uVar15) + iVar10);
      auVar38._12_4_ = (int)(float)(((iVar30 << 0x17 | uVar12) & uVar16) + iVar11);
      uVar23 = *(undefined4 *)(param_2 + (ulonglong)((uint)((ulonglong)puVar31 >> 3) & 0xffffffc));
      auVar39._4_4_ = uVar23;
      auVar39._0_4_ = uVar23;
      auVar39._8_4_ = uVar23;
      auVar39._12_4_ = uVar23;
      if ((auVar38 & auVar39) != (undefined1  [16])0x0) {
        auVar39 = auVar39 & auVar38;
        auVar40._0_4_ = -(uint)(auVar39._0_4_ == 0);
        auVar40._4_4_ = -(uint)(auVar39._4_4_ == 0);
        auVar40._8_4_ = -(uint)(auVar39._8_4_ == 0);
        auVar40._12_4_ = -(uint)(auVar39._12_4_ == 0);
        uVar29 = (ulonglong)unaff_EDI;
        puVar18 = (uint *)(param_3 + uVar29);
        uVar20 = movmskps(unaff_EBP,auVar40);
        if ((uVar20 & 9) == 0) {
          if (param_6 == 0) {
            auVar38 = *(undefined1 (*) [16])(param_1 + uVar29);
LAB_140acb776:
            auVar41._0_4_ = auVar38._0_4_ * param_7;
            auVar41._4_4_ = auVar38._4_4_ * param_7;
            auVar41._8_4_ = auVar38._8_4_ * param_7;
            auVar41._12_4_ = auVar38._12_4_ * param_7;
          }
          else {
            auVar41 = *(undefined1 (*) [16])(param_3 + uVar29);
            if (fVar8 < param_7) {
              auVar38 = *(undefined1 (*) [16])(param_1 + uVar29);
              auVar39 = auVar41;
LAB_140acb7a6:
              auVar41._0_4_ = auVar39._0_4_ + auVar38._0_4_ * param_7;
              auVar41._4_4_ = auVar39._4_4_ + auVar38._4_4_ * param_7;
              auVar41._8_4_ = auVar39._8_4_ + auVar38._8_4_ * param_7;
              auVar41._12_4_ = auVar39._12_4_ + auVar38._12_4_ * param_7;
            }
          }
        }
        else {
          auVar4._8_4_ = 0xffffffff;
          auVar4._0_8_ = 0xffffffffffffffff;
          auVar4._12_4_ = 0xffffffff;
          auVar41 = auVar40 ^ auVar4;
          unaff_R15D = movmskps(unaff_R15D,auVar41);
          if ((unaff_R15D & 1) != 0) {
            auVar41 = ZEXT416(*puVar18);
          }
          if ((unaff_R15D & 2) != 0) {
            auVar41 = insertps(auVar41,puVar18[1],0x10);
          }
          if ((unaff_R15D & 4) != 0) {
            auVar41 = insertps(auVar41,puVar18[2],0x20);
          }
          if ((unaff_R15D & 8) != 0) {
            auVar41 = insertps(auVar41,puVar18[3],0x30);
          }
          if (param_6 == 0) {
            puVar32 = (uint *)(uVar29 + param_1);
            auVar38 = auVar41;
            if ((unaff_R15D & 1) != 0) {
              auVar38 = ZEXT416(*puVar32);
            }
            if ((unaff_R15D & 2) != 0) {
              auVar38 = insertps(auVar38,puVar32[1],0x10);
            }
            if ((unaff_R15D & 4) != 0) {
              auVar38 = insertps(auVar38,puVar32[2],0x20);
            }
            if ((unaff_R15D & 8) != 0) {
              auVar38 = insertps(auVar38,puVar32[3],0x30);
            }
            goto LAB_140acb776;
          }
          if (fVar8 < param_7) {
            puVar32 = (uint *)(uVar29 + param_1);
            if ((unaff_R15D & 1) != 0) {
              auVar38 = ZEXT416(*puVar32);
            }
            if ((unaff_R15D & 2) != 0) {
              auVar38 = insertps(auVar38,puVar32[1],0x10);
            }
            if ((unaff_R15D & 4) != 0) {
              auVar38 = insertps(auVar38,puVar32[2],0x20);
            }
            auVar39 = auVar41;
            if ((unaff_R15D & 8) != 0) {
              auVar38 = insertps(auVar38,puVar32[3],0x30);
            }
            goto LAB_140acb7a6;
          }
        }
        bVar19 = (char)(((byte)uVar20 ^ 0xf) << 4) >> 4;
        unaff_EBP = CONCAT31((int3)(uVar20 >> 8),bVar19);
        if ((bVar19 & 1) != 0) {
          *puVar18 = auVar41._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar3 = extractps(auVar41,1);
          *(undefined8 *)(puVar18 + 1) = uVar3;
        }
        if ((bVar19 & 4) != 0) {
          uVar3 = extractps(auVar41,2);
          *(undefined8 *)(puVar18 + 2) = uVar3;
        }
        if ((char)bVar19 < '\0') {
          uVar3 = extractps(auVar41,3);
          *(undefined8 *)(puVar18 + 3) = uVar3;
        }
      }
      puVar31 = puVar31 + 1;
      unaff_EDI = unaff_EDI + 0x10;
    } while ((int)puVar31 < (int)(uVar21 & 0xfffffffc));
  }
  uVar24 = (uint)puVar31;
  if ((int)uVar24 < (int)param_5) {
    auVar35._0_4_ =
         (float)-(uint)((int)(uVar24 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5)
    ;
    auVar35._4_4_ =
         (float)-(uint)((int)(uVar24 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5)
    ;
    auVar35._8_4_ = (float)-(uint)((int)(uVar24 | _UNK_150631e08) < (int)param_5);
    auVar35._12_4_ = (float)-(uint)((int)(uVar24 | _UNK_150631e0c) < (int)param_5);
    uVar22 = (uint)((ulonglong)puVar31 >> 3) & 0xffffffc;
    uVar17 = *(uint *)(param_2 + (ulonglong)uVar22);
    auVar37._0_4_ =
         -(uint)((uVar17 & (int)(float)(((uVar24 | (uint)__xmm_00000003000000020000000100000000) <<
                                         0x17 & ___xmm_0f8000000f8000000f8000000f800000) +
                                       ___xmm_3f8000003f8000003f8000003f800000)) == 0);
    auVar37._4_4_ =
         -(uint)((uVar17 & (int)(float)(((uVar24 | __xmm_00000003000000020000000100000000._4_4_) <<
                                         0x17 & _UNK_151c6b114) + _UNK_15076b1f4)) == 0);
    auVar37._8_4_ =
         -(uint)((uVar17 & (int)(float)(((uVar24 | _UNK_150631e08) << 0x17 & _UNK_151c6b118) +
                                       _UNK_15076b1f8)) == 0);
    auVar37._12_4_ =
         -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) ==
                (uVar17 & (int)(float)(((uVar24 | _UNK_150631e0c) << 0x17 & _UNK_151c6b11c) +
                                      _UNK_15076b1fc)));
    uVar23 = movmskps(uVar22,auVar37 & auVar35);
    uVar26 = movmskps(unaff_EDI,auVar35);
    if ((char)uVar23 != (char)uVar26) {
      auVar38 = ~auVar37 & auVar35;
      lVar27 = (longlong)(int)(uVar24 << 2);
      puVar31 = (uint *)(param_3 + lVar27);
      uVar24 = movmskps(uVar23,auVar38);
      bVar19 = (char)((byte)uVar24 << 4) >> 4;
      if ((~(byte)uVar24 & 9) == 0) {
        if (param_6 == 0) {
          auVar38 = *(undefined1 (*) [16])(param_1 + lVar27);
LAB_140acb9b9:
          auVar35._4_4_ = param_7 * auVar38._4_4_;
          auVar35._0_4_ = param_7 * auVar38._0_4_;
          auVar35._8_4_ = param_7 * auVar38._8_4_;
          auVar35._12_4_ = param_7 * auVar38._12_4_;
        }
        else {
          auVar35 = *(undefined1 (*) [16])(param_3 + lVar27);
          if (__real_3727c5ac < param_7) {
            auVar38 = *(undefined1 (*) [16])(param_1 + lVar27);
            auVar39 = auVar35;
LAB_140acb9ed:
            auVar35._0_4_ = auVar39._0_4_ + param_7 * auVar38._0_4_;
            auVar35._4_4_ = auVar39._4_4_ + param_7 * auVar38._4_4_;
            auVar35._8_4_ = auVar39._8_4_ + param_7 * auVar38._8_4_;
            auVar35._12_4_ = auVar39._12_4_ + param_7 * auVar38._12_4_;
          }
        }
      }
      else {
        if ((uVar24 & 1) != 0) {
          auVar35 = ZEXT416(*puVar31);
        }
        if ((uVar24 & 2) != 0) {
          auVar35 = insertps(auVar35,puVar31[1],0x10);
        }
        if ((uVar24 & 4) != 0) {
          auVar35 = insertps(auVar35,puVar31[2],0x20);
        }
        if ((uVar24 & 8) != 0) {
          auVar35 = insertps(auVar35,puVar31[3],0x30);
        }
        if (param_6 == 0) {
          puVar18 = (uint *)(param_1 + lVar27);
          auVar38 = auVar35;
          if ((uVar24 & 1) != 0) {
            auVar38 = ZEXT416(*puVar18);
          }
          if ((uVar24 & 2) != 0) {
            auVar38 = insertps(auVar38,puVar18[1],0x10);
          }
          if ((uVar24 & 4) != 0) {
            auVar38 = insertps(auVar38,puVar18[2],0x20);
          }
          if ((uVar24 & 8) != 0) {
            auVar38 = insertps(auVar38,puVar18[3],0x30);
          }
          goto LAB_140acb9b9;
        }
        if (__real_3727c5ac < param_7) {
          puVar18 = (uint *)(param_1 + lVar27);
          if ((uVar24 & 1) != 0) {
            auVar38 = ZEXT416(*puVar18);
          }
          if ((uVar24 & 2) != 0) {
            auVar38 = insertps(auVar38,puVar18[1],0x10);
          }
          if ((uVar24 & 4) != 0) {
            auVar38 = insertps(auVar38,puVar18[2],0x20);
          }
          auVar39 = auVar35;
          if ((uVar24 & 8) != 0) {
            auVar38 = insertps(auVar38,puVar18[3],0x30);
          }
          goto LAB_140acb9ed;
        }
      }
      if ((bVar19 & 1) != 0) {
        *puVar31 = auVar35._0_4_;
      }
      if ((bVar19 & 2) != 0) {
        uVar3 = extractps(auVar35,1);
        *(undefined8 *)(puVar31 + 1) = uVar3;
      }
      if ((bVar19 & 4) != 0) {
        uVar3 = extractps(auVar35,2);
        *(undefined8 *)(puVar31 + 2) = uVar3;
      }
      if ((char)bVar19 < '\0') {
        uVar3 = extractps(auVar35,3);
        *(undefined8 *)(puVar31 + 3) = uVar3;
      }
    }
  }
  uVar22 = (uint)puVar31;
  auVar38 = roundss(ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),
                    ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),10);
  uVar17 = (uint)auVar38._0_4_;
  uVar24 = uVar17 + 3;
  if (-1 < (int)uVar17) {
    uVar24 = uVar17;
  }
  uVar24 = uVar24 & 0xfffffffc;
  if ((int)uVar24 < 1) {
    iVar28 = 0;
    if ((int)uVar17 < 1) {
      return;
    }
  }
  else {
    uVar22 = 0;
    uVar29 = 0;
    if (param_6 == 0) {
      do {
        puVar1 = (undefined8 *)(param_2 + (ulonglong)uVar22);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(param_4 + (ulonglong)uVar22);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        uVar29 = uVar29 + 4;
        uVar22 = uVar22 + 0x10;
      } while (uVar29 < uVar24);
    }
    else {
      do {
        uVar25 = (ulonglong)uVar22;
        uVar5 = ((ulonglong *)(param_4 + uVar25))[1];
        uVar6 = ((ulonglong *)(param_2 + uVar25))[1];
        *(ulonglong *)(param_4 + uVar25) =
             *(ulonglong *)(param_2 + uVar25) | *(ulonglong *)(param_4 + uVar25);
        ((ulonglong *)(param_4 + uVar25))[1] = uVar6 | uVar5;
        uVar29 = uVar29 + 4;
        uVar22 = uVar22 + 0x10;
      } while (uVar29 < uVar24);
    }
    iVar28 = (int)uVar29;
    if ((int)uVar17 <= iVar28) {
      return;
    }
  }
  auVar33._4_4_ = iVar28;
  auVar33._0_4_ = iVar28;
  auVar33._8_4_ = iVar28;
  auVar33._12_4_ = iVar28;
  auVar7._4_4_ = __xmm_00000003000000020000000100000000._4_4_;
  auVar7._0_4_ = (uint)__xmm_00000003000000020000000100000000;
  auVar7._8_4_ = _UNK_150631e08;
  auVar7._12_4_ = _UNK_150631e0c;
  auVar34 = auVar33 | auVar7;
  auVar36._0_4_ = -(uint)(auVar34._0_4_ < (int)uVar17);
  auVar36._4_4_ = -(uint)(auVar34._4_4_ < (int)uVar17);
  auVar36._8_4_ = -(uint)(auVar34._8_4_ < (int)uVar17);
  auVar36._12_4_ = -(uint)(auVar34._12_4_ < (int)uVar17);
  lVar27 = (longlong)(iVar28 << 2);
  uVar24 = movmskps(uVar22,auVar36);
  bVar19 = (char)((byte)uVar24 << 4) >> 4;
  puVar31 = (uint *)(param_4 + lVar27);
  if ((~(byte)uVar24 & 9) == 0) {
    auVar34 = *(undefined1 (*) [16])(param_2 + lVar27);
    if (param_6 == 0) {
LAB_140acbb91:
      if ((bVar19 & 1) != 0) {
        *(int *)(param_4 + lVar27) = auVar34._0_4_;
      }
      if ((bVar19 & 2) != 0) {
        *(int *)(param_4 + 4 + lVar27) = auVar34._4_4_;
      }
      if ((bVar19 & 4) != 0) {
        *(int *)(param_4 + 8 + lVar27) = auVar34._8_4_;
      }
      if (-1 < (char)bVar19) {
        return;
      }
      *(int *)(param_4 + 0xc + lVar27) = auVar34._12_4_;
      return;
    }
    auVar36 = *(undefined1 (*) [16])(param_4 + lVar27);
  }
  else {
    puVar18 = (uint *)(param_2 + lVar27);
    if ((uVar24 & 1) != 0) {
      auVar34 = ZEXT416(*puVar18);
    }
    if ((uVar24 & 2) != 0) {
      auVar34._0_8_ = auVar34._0_8_ & 0xffffffff | (ulonglong)puVar18[1] << 0x20;
    }
    if ((uVar24 & 4) != 0) {
      auVar34._8_8_ = auVar34._8_8_ & 0xffffffff00000000 | (ulonglong)puVar18[2];
    }
    if ((uVar24 & 8) != 0) {
      auVar34._8_8_ = auVar34._8_8_ & 0xffffffff | (ulonglong)puVar18[3] << 0x20;
    }
    if (param_6 == 0) goto LAB_140acbb91;
    if ((uVar24 & 1) != 0) {
      auVar36 = ZEXT416(*puVar31);
    }
    if ((uVar24 & 2) != 0) {
      auVar36._0_8_ = auVar36._0_8_ & 0xffffffff | (ulonglong)puVar31[1] << 0x20;
    }
    if ((uVar24 & 4) != 0) {
      auVar36._8_8_ = auVar36._8_8_ & 0xffffffff00000000 | (ulonglong)puVar31[2];
    }
    if ((uVar24 & 8) != 0) {
      auVar36._8_8_ = auVar36._8_8_ & 0xffffffff | (ulonglong)puVar31[3] << 0x20;
    }
  }
  auVar34 = auVar34 | auVar36;
  if ((bVar19 & 1) != 0) {
    *puVar31 = auVar34._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    puVar31[1] = auVar34._4_4_;
  }
  if ((bVar19 & 4) != 0) {
    puVar31[2] = auVar34._8_4_;
  }
  if ((char)bVar19 < '\0') {
    puVar31[3] = auVar34._12_4_;
  }
  return;
}

// LerpBoneTransforms_sse4 @ 140acbcd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LerpBoneTransforms_sse4
               (longlong param_1,longlong param_2,float param_3,longlong param_4,uint param_5)

{
  double *pdVar1;
  double *pdVar2;
  ulonglong *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar26;
  double dVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar31;
  double dVar32;
  undefined1 auVar30 [16];
  ulonglong uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  double dVar43;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  dVar14 = _UNK_150aa88b8;
  dVar13 = ___xmm_3e45798ee2308c3a3e45798ee2308c3a;
  auVar24 = ___xmm_3ff00000000000003ff0000000000000;
  uVar16 = _UNK_15061cbc8;
  uVar15 = ___xmm_3ff00000000000000000000000000000;
  dVar20 = (double)(__real_3f800000 - param_3);
  uVar17 = param_5 & 0xfffffffc;
  if (0 < (int)uVar17) {
    dVar8 = (double)param_3;
    uVar19 = 0;
    do {
      uVar29 = (ulonglong)((uint)*(ushort *)(param_4 + uVar19 * 2) * 0x60);
      pdVar1 = (double *)(param_1 + 0x10 + uVar29);
      pdVar2 = (double *)(param_2 + 0x10 + uVar29);
      dVar37 = *(double *)(param_1 + uVar29) * dVar20;
      dVar39 = ((double *)(param_1 + uVar29))[1] * dVar20;
      dVar34 = *pdVar1 * dVar20;
      dVar36 = pdVar1[1] * dVar20;
      dVar40 = *(double *)(param_2 + uVar29) * dVar8;
      dVar43 = ((double *)(param_2 + uVar29))[1] * dVar8;
      dVar22 = *pdVar2 * dVar8;
      dVar25 = pdVar2[1] * dVar8;
      dVar27 = dVar37 * dVar40 + dVar34 * dVar22;
      dVar32 = dVar39 * dVar43 + dVar36 * dVar25;
      iVar26 = -(uint)(0.0 <= dVar32 + dVar27);
      iVar31 = -(uint)(0.0 <= dVar27 + dVar32);
      auVar30._4_4_ = iVar26;
      auVar30._0_4_ = iVar26;
      auVar30._8_4_ = iVar31;
      auVar30._12_4_ = iVar31;
      auVar41._8_4_ = 0xffffffff;
      auVar41._0_8_ = 0xffffffffffffffff;
      auVar41._12_4_ = 0xffffffff;
      auVar30 = blendvps(ZEXT816(0),auVar41,auVar30);
      uVar28 = auVar30._0_8_;
      auVar23._0_8_ = (ulonglong)dVar22 & uVar28;
      uVar33 = auVar30._8_8_;
      auVar23._8_8_ = (ulonglong)dVar25 & uVar33;
      auVar11._4_4_ = ~auVar30._4_4_ & (uint)((ulonglong)(0.0 - dVar22) >> 0x20);
      auVar11._0_4_ = ~auVar30._0_4_ & SUB84(0.0 - dVar22,0);
      auVar11._8_4_ = ~auVar30._8_4_ & SUB84(0.0 - dVar25,0);
      auVar11._12_4_ = ~auVar30._12_4_ & (uint)((ulonglong)(0.0 - dVar25) >> 0x20);
      dVar37 = (double)(~uVar28 & (ulonglong)(0.0 - dVar40) | (ulonglong)dVar40 & uVar28) + dVar37;
      dVar39 = (double)(~uVar33 & (ulonglong)(0.0 - dVar43) | (ulonglong)dVar43 & uVar33) + dVar39;
      dVar34 = SUB168(auVar23 | auVar11,0) + dVar34;
      dVar36 = SUB168(auVar23 | auVar11,8) + dVar36;
      dVar22 = dVar37 * dVar37 + dVar34 * dVar34;
      dVar25 = dVar39 * dVar39 + dVar36 * dVar36;
      auVar38._0_8_ = dVar25 + dVar22;
      auVar38._8_8_ = dVar22 + dVar25;
      auVar30 = sqrtpd(auVar38,auVar38);
      auVar41 = divpd(auVar24,auVar30);
      auVar6._4_4_ = -(uint)(dVar13 <= auVar38._0_8_);
      auVar6._0_4_ = -(uint)(dVar13 <= auVar38._0_8_);
      auVar6._8_4_ = -(uint)(dVar14 <= auVar38._8_8_);
      auVar6._12_4_ = -(uint)(dVar14 <= auVar38._8_8_);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar30 = blendvps(ZEXT816(0),auVar10,auVar6);
      uVar28 = auVar30._0_8_;
      uVar33 = auVar30._8_8_;
      *(ulonglong *)(param_1 + uVar29) = (ulonglong)(dVar37 * auVar41._0_8_) & uVar28;
      ((ulonglong *)(param_1 + uVar29))[1] = (ulonglong)(dVar39 * auVar41._8_8_) & uVar33;
      puVar3 = (ulonglong *)(param_1 + 0x10 + uVar29);
      *puVar3 = ~uVar28 & uVar15 | (ulonglong)(auVar41._0_8_ * dVar34) & uVar28;
      puVar3[1] = ~uVar33 & uVar16 | (ulonglong)(auVar41._8_8_ * dVar36) & uVar33;
      pdVar1 = (double *)(param_1 + 0x20 + uVar29);
      dVar22 = pdVar1[1];
      pdVar2 = (double *)(param_1 + 0x30 + uVar29);
      dVar34 = *pdVar2;
      dVar25 = pdVar2[1];
      pdVar2 = (double *)(param_2 + 0x20 + uVar29);
      dVar36 = pdVar2[1];
      pdVar4 = (double *)(param_2 + 0x30 + uVar29);
      dVar27 = *pdVar4;
      dVar37 = pdVar4[1];
      pdVar4 = (double *)(param_1 + 0x20 + uVar29);
      *pdVar4 = *pdVar2 * dVar8 + *pdVar1 * dVar20;
      pdVar4[1] = dVar36 * dVar8 + dVar22 * dVar20;
      pdVar1 = (double *)(param_1 + 0x30 + uVar29);
      *pdVar1 = dVar27 * dVar8 + dVar34 * dVar20;
      pdVar1[1] = dVar37 * dVar8 + dVar25 * dVar20;
      pdVar1 = (double *)(param_1 + 0x40 + uVar29);
      dVar22 = pdVar1[1];
      pdVar2 = (double *)(param_1 + 0x50 + uVar29);
      dVar34 = *pdVar2;
      dVar25 = pdVar2[1];
      pdVar2 = (double *)(param_2 + 0x40 + uVar29);
      dVar36 = pdVar2[1];
      pdVar4 = (double *)(param_2 + 0x50 + uVar29);
      dVar27 = *pdVar4;
      dVar37 = pdVar4[1];
      pdVar4 = (double *)(param_1 + 0x40 + uVar29);
      *pdVar4 = *pdVar2 * dVar8 + *pdVar1 * dVar20;
      pdVar4[1] = dVar36 * dVar8 + dVar22 * dVar20;
      pdVar1 = (double *)(param_1 + 0x50 + uVar29);
      *pdVar1 = dVar27 * dVar8 + dVar34 * dVar20;
      pdVar1[1] = dVar37 * dVar8 + dVar25 * dVar20;
      uVar19 = uVar19 + 1;
    } while (uVar17 != uVar19);
  }
  uVar19 = __real_ffffffffffffffff;
  uVar16 = _UNK_15061cbc8;
  uVar15 = ___xmm_3ff00000000000000000000000000000;
  dVar14 = __real_3e45798ee2308c3a;
  dVar13 = __real_3ff0000000000000;
  if ((int)uVar17 < (int)param_5) {
    dVar8 = (double)param_3;
    lVar18 = (longlong)(int)uVar17;
    do {
      lVar12 = (ulonglong)*(ushort *)(param_4 + lVar18 * 2) * 0x60;
      pdVar1 = (double *)(param_1 + 0x10 + lVar12);
      dVar32 = *(double *)(param_1 + lVar12) * dVar20;
      dVar39 = ((double *)(param_1 + lVar12))[1] * dVar20;
      dVar40 = *pdVar1 * dVar20;
      dVar43 = pdVar1[1] * dVar20;
      pdVar1 = (double *)(param_2 + 0x10 + lVar12);
      dVar27 = *(double *)(param_2 + lVar12) * dVar8;
      dVar37 = ((double *)(param_2 + lVar12))[1] * dVar8;
      dVar22 = *pdVar1 * dVar8;
      dVar34 = pdVar1[1] * dVar8;
      dVar25 = dVar32 * dVar27 + dVar40 * dVar22;
      dVar36 = dVar39 * dVar37 + dVar43 * dVar34;
      iVar26 = -(uint)(0.0 <= dVar36 + dVar25);
      iVar31 = -(uint)(0.0 <= dVar25 + dVar36);
      auVar24._4_4_ = iVar26;
      auVar24._0_4_ = iVar26;
      auVar24._8_4_ = iVar31;
      auVar24._12_4_ = iVar31;
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar24 = blendvps(ZEXT816(0),auVar9,auVar24);
      uVar29 = auVar24._0_8_;
      auVar42._0_4_ = ~auVar24._0_4_ & SUB84(0.0 - dVar22,0);
      uVar28 = auVar24._8_8_;
      auVar42._4_4_ = ~auVar24._4_4_ & (uint)((ulonglong)(0.0 - dVar22) >> 0x20);
      auVar42._8_4_ = ~auVar24._8_4_ & SUB84(0.0 - dVar34,0);
      auVar42._12_4_ = ~auVar24._12_4_ & (uint)((ulonglong)(0.0 - dVar34) >> 0x20);
      auVar21._0_8_ = (ulonglong)dVar22 & uVar29;
      auVar21._8_8_ = (ulonglong)dVar34 & uVar28;
      dVar32 = (double)(~uVar29 & (ulonglong)(0.0 - dVar27) | (ulonglong)dVar27 & uVar29) + dVar32;
      dVar39 = (double)(~uVar28 & (ulonglong)(0.0 - dVar37) | (ulonglong)dVar37 & uVar28) + dVar39;
      dVar40 = SUB168(auVar21 | auVar42,0) + dVar40;
      dVar43 = SUB168(auVar21 | auVar42,8) + dVar43;
      dVar22 = dVar39 * dVar39 + dVar43 * dVar43 + dVar32 * dVar32 + dVar40 * dVar40;
      dVar35 = dVar13 / SQRT(dVar22);
      pdVar1 = (double *)(param_1 + 0x20 + lVar12);
      dVar34 = *pdVar1;
      dVar25 = pdVar1[1];
      uVar29 = ~-(ulonglong)(dVar22 < dVar14) & uVar19;
      pdVar1 = (double *)(param_2 + 0x20 + lVar12);
      dVar22 = *pdVar1;
      dVar36 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x30 + lVar12);
      dVar27 = *pdVar1;
      dVar37 = pdVar1[1];
      *(ulonglong *)(param_1 + lVar12) = (ulonglong)(dVar32 * dVar35) & uVar29;
      ((ulonglong *)(param_1 + lVar12))[1] = (ulonglong)(dVar39 * dVar35) & uVar29;
      pdVar1 = (double *)(param_2 + 0x30 + lVar12);
      dVar32 = *pdVar1;
      dVar39 = pdVar1[1];
      puVar3 = (ulonglong *)(param_1 + 0x10 + lVar12);
      *puVar3 = ~uVar29 & uVar15 | (ulonglong)(dVar40 * dVar35) & uVar29;
      puVar3[1] = ~uVar29 & uVar16 | (ulonglong)(dVar43 * dVar35) & uVar29;
      pdVar1 = (double *)(param_1 + 0x20 + lVar12);
      *pdVar1 = dVar22 * dVar8 + dVar34 * dVar20;
      pdVar1[1] = dVar36 * dVar8 + dVar25 * dVar20;
      pdVar1 = (double *)(param_1 + 0x30 + lVar12);
      *pdVar1 = dVar32 * dVar8 + dVar27 * dVar20;
      pdVar1[1] = dVar39 * dVar8 + dVar37 * dVar20;
      pdVar1 = (double *)(param_1 + 0x40 + lVar12);
      dVar34 = pdVar1[1];
      pdVar2 = (double *)(param_1 + 0x50 + lVar12);
      dVar25 = *pdVar2;
      pdVar4 = (double *)(param_2 + 0x40 + lVar12);
      dVar36 = pdVar4[1];
      pdVar5 = (double *)(param_2 + 0x50 + lVar12);
      dVar27 = *pdVar5;
      dVar22 = pdVar5[1] * dVar8 + pdVar2[1] * dVar20;
      pdVar2 = (double *)(param_1 + 0x40 + lVar12);
      *pdVar2 = *pdVar4 * dVar8 + *pdVar1 * dVar20;
      pdVar2[1] = dVar36 * dVar8 + dVar34 * dVar20;
      auVar7._8_4_ = SUB84(dVar22,0);
      auVar7._0_8_ = dVar27 * dVar8 + dVar25 * dVar20;
      auVar7._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x50 + lVar12) = auVar7;
      lVar18 = lVar18 + 1;
    } while ((int)param_5 != lVar18);
  }
  return;
}


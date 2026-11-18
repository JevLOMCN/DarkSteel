// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// BlendTransformAccumulate___un_3C_s_5B__c_unFTransform_5D__3E_un_3C_s_5B_unFTransform_5D__3E_CunfCuni_avx @ 140ab2a80

void BlendTransformAccumulate___un_3C_s_5B__c_unFTransform_5D__3E_un_3C_s_5B_unFTransform_5D__3E_CunfCuni_avx
               (longlong param_1,longlong param_2,float param_3,uint param_4,
               undefined1 (*param_5) [16])

{
  double *pdVar1;
  undefined1 auVar2 [32];
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
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  
  auVar3 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
  auVar4 = vpcmpgtd_avx(param_5[1],auVar3);
  auVar3 = vpcmpgtd_avx(*param_5,auVar3);
  auVar3 = vpor_avx(auVar3,auVar4);
  if ((((SUB161(auVar3 >> 0x1f,0) & 1) == 0 && (SUB161(auVar3 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar3 >> 0x5f,0) & 1) == 0) && -1 < auVar3[0xf]) {
    if (0 < (int)param_4) {
      dVar26 = (double)param_3;
      lVar25 = 0;
      auVar2 = vcmpps_avx(ZEXT1632((undefined1  [16])0x0),ZEXT1632((undefined1  [16])0x0),0xf);
      do {
        pdVar1 = (double *)(param_1 + 0x20 + lVar25);
        dVar9 = *pdVar1;
        dVar10 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x40 + lVar25);
        dVar5 = *pdVar1;
        dVar6 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x10 + lVar25);
        auVar32._0_8_ = dVar26 * *(double *)(param_1 + lVar25);
        auVar32._8_8_ = dVar26 * ((double *)(param_1 + lVar25))[1];
        auVar32._16_8_ = dVar26 * *pdVar1;
        auVar32._24_8_ = dVar26 * pdVar1[1];
        dVar13 = *(double *)(param_2 + lVar25);
        dVar14 = ((double *)(param_2 + lVar25))[1];
        pdVar1 = (double *)(param_2 + 0x20 + lVar25);
        dVar17 = *pdVar1;
        dVar18 = pdVar1[1];
        pdVar1 = (double *)(param_2 + 0x10 + lVar25);
        dVar15 = *pdVar1;
        dVar16 = pdVar1[1];
        pdVar1 = (double *)(param_2 + 0x40 + lVar25);
        dVar21 = *pdVar1;
        dVar22 = pdVar1[1];
        auVar38._0_8_ = auVar32._0_8_ * dVar13;
        auVar38._8_8_ = auVar32._8_8_ * dVar14;
        auVar38._16_8_ = auVar32._16_8_ * dVar15;
        auVar38._24_8_ = auVar32._24_8_ * dVar16;
        auVar27 = vperm2f128_avx(auVar38,auVar38,1);
        auVar39._0_8_ = auVar38._0_8_ + auVar27._0_8_;
        auVar39._8_8_ = auVar38._8_8_ + auVar27._8_8_;
        auVar39._16_8_ = auVar38._16_8_ + auVar27._16_8_;
        auVar39._24_8_ = auVar38._24_8_ + auVar27._24_8_;
        auVar27 = vperm2f128_avx(auVar39,auVar39,1);
        auVar27 = vshufpd_avx(auVar39,auVar27,5);
        auVar40._0_8_ = auVar39._0_8_ + auVar27._0_8_;
        auVar40._8_8_ = auVar39._8_8_ + auVar27._8_8_;
        auVar40._16_8_ = auVar39._16_8_ + auVar27._16_8_;
        auVar40._24_8_ = auVar39._24_8_ + auVar27._24_8_;
        auVar28 = ZEXT1632((undefined1  [16])0x0);
        auVar27 = vcmppd_avx(auVar28,auVar40,2);
        auVar3 = vpackssdw_avx(auVar27._0_16_,auVar27._16_16_);
        auVar4 = vpshufd_avx(auVar3,0x50);
        auVar3 = vpshufd_avx(auVar3,0xfa);
        auVar27._16_16_ = auVar3;
        auVar27._0_16_ = auVar4;
        auVar27 = vblendvps_avx(auVar28,auVar2,auVar27);
        auVar28 = vsubpd_avx(auVar28,auVar32);
        auVar33._0_4_ = ~auVar27._0_4_ & auVar28._0_4_;
        auVar33._4_4_ = ~auVar27._4_4_ & auVar28._4_4_;
        auVar33._8_4_ = ~auVar27._8_4_ & auVar28._8_4_;
        auVar33._12_4_ = ~auVar27._12_4_ & auVar28._12_4_;
        auVar33._16_4_ = ~auVar27._16_4_ & auVar28._16_4_;
        auVar33._20_4_ = ~auVar27._20_4_ & auVar28._20_4_;
        auVar33._24_4_ = ~auVar27._24_4_ & auVar28._24_4_;
        auVar33._28_4_ = ~auVar27._28_4_ & auVar28._28_4_;
        auVar28._0_8_ = auVar27._0_8_ & (ulonglong)auVar32._0_8_;
        auVar28._8_8_ = auVar27._8_8_ & (ulonglong)auVar32._8_8_;
        auVar28._16_8_ = auVar27._16_8_ & (ulonglong)auVar32._16_8_;
        auVar28._24_8_ = auVar27._24_8_ & (ulonglong)auVar32._24_8_;
        auVar33 = auVar33 | auVar28;
        pdVar1 = (double *)(param_1 + 0x30 + lVar25);
        dVar11 = *pdVar1;
        dVar12 = pdVar1[1];
        pdVar1 = (double *)(param_2 + 0x30 + lVar25);
        dVar19 = *pdVar1;
        dVar20 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x50 + lVar25);
        dVar7 = *pdVar1;
        dVar8 = pdVar1[1];
        pdVar1 = (double *)(param_2 + 0x50 + lVar25);
        dVar23 = *pdVar1;
        dVar24 = pdVar1[1];
        *(double *)(param_2 + lVar25) = dVar13 + auVar33._0_8_;
        ((double *)(param_2 + lVar25))[1] = dVar14 + auVar33._8_8_;
        pdVar1 = (double *)(param_2 + 0x10 + lVar25);
        *pdVar1 = dVar15 + auVar33._16_8_;
        pdVar1[1] = dVar16 + auVar33._24_8_;
        pdVar1 = (double *)(param_2 + 0x20 + lVar25);
        *pdVar1 = dVar26 * dVar9 + dVar17;
        pdVar1[1] = dVar26 * dVar10 + dVar18;
        pdVar1 = (double *)(param_2 + 0x30 + lVar25);
        *pdVar1 = dVar26 * dVar11 + dVar19;
        pdVar1[1] = dVar26 * dVar12 + dVar20;
        pdVar1 = (double *)(param_2 + 0x40 + lVar25);
        *pdVar1 = dVar26 * dVar5 + dVar21;
        pdVar1[1] = dVar26 * dVar6 + dVar22;
        pdVar1 = (double *)(param_2 + 0x50 + lVar25);
        *pdVar1 = dVar26 * dVar7 + dVar23;
        pdVar1[1] = dVar26 * dVar8 + dVar24;
        lVar25 = lVar25 + 0x60;
      } while ((ulonglong)param_4 * 0x60 != lVar25);
    }
  }
  else if (0 < (int)param_4) {
    dVar26 = (double)param_3;
    lVar25 = 0;
    auVar27 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    auVar2 = vcmpps_avx(auVar27,auVar27,0xf);
    do {
      pdVar1 = (double *)(param_1 + 0x20 + lVar25);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x40 + lVar25);
      dVar5 = *pdVar1;
      dVar6 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x10 + lVar25);
      auVar29._0_8_ = dVar26 * *(double *)(param_1 + lVar25);
      auVar29._8_8_ = dVar26 * ((double *)(param_1 + lVar25))[1];
      auVar29._16_8_ = dVar26 * *pdVar1;
      auVar29._24_8_ = dVar26 * pdVar1[1];
      dVar13 = *(double *)(param_2 + lVar25);
      dVar14 = ((double *)(param_2 + lVar25))[1];
      pdVar1 = (double *)(param_2 + 0x20 + lVar25);
      dVar17 = *pdVar1;
      dVar18 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x10 + lVar25);
      dVar15 = *pdVar1;
      dVar16 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x40 + lVar25);
      dVar21 = *pdVar1;
      dVar22 = pdVar1[1];
      auVar34._0_8_ = auVar29._0_8_ * dVar13;
      auVar34._8_8_ = auVar29._8_8_ * dVar14;
      auVar34._16_8_ = auVar29._16_8_ * dVar15;
      auVar34._24_8_ = auVar29._24_8_ * dVar16;
      auVar28 = vperm2f128_avx(auVar34,auVar34,1);
      auVar35._0_8_ = auVar34._0_8_ + auVar28._0_8_;
      auVar35._8_8_ = auVar34._8_8_ + auVar28._8_8_;
      auVar35._16_8_ = auVar34._16_8_ + auVar28._16_8_;
      auVar35._24_8_ = auVar34._24_8_ + auVar28._24_8_;
      auVar28 = vperm2f128_avx(auVar35,auVar35,1);
      auVar28 = vshufpd_avx(auVar35,auVar28,5);
      auVar36._0_8_ = auVar35._0_8_ + auVar28._0_8_;
      auVar36._8_8_ = auVar35._8_8_ + auVar28._8_8_;
      auVar36._16_8_ = auVar35._16_8_ + auVar28._16_8_;
      auVar36._24_8_ = auVar35._24_8_ + auVar28._24_8_;
      auVar28 = vcmppd_avx(auVar27,auVar36,2);
      auVar3 = vpackssdw_avx(auVar28._0_16_,auVar28._16_16_);
      auVar4 = vpshufd_avx(auVar3,0x50);
      auVar3 = vpshufd_avx(auVar3,0xfa);
      auVar37._16_16_ = auVar3;
      auVar37._0_16_ = auVar4;
      auVar28 = vblendvps_avx(auVar27,auVar2,auVar37);
      auVar32 = vsubpd_avx(auVar27,auVar29);
      auVar31._0_4_ = ~auVar28._0_4_ & auVar32._0_4_;
      auVar31._4_4_ = ~auVar28._4_4_ & auVar32._4_4_;
      auVar31._8_4_ = ~auVar28._8_4_ & auVar32._8_4_;
      auVar31._12_4_ = ~auVar28._12_4_ & auVar32._12_4_;
      auVar31._16_4_ = ~auVar28._16_4_ & auVar32._16_4_;
      auVar31._20_4_ = ~auVar28._20_4_ & auVar32._20_4_;
      auVar31._24_4_ = ~auVar28._24_4_ & auVar32._24_4_;
      auVar31._28_4_ = ~auVar28._28_4_ & auVar32._28_4_;
      auVar30._0_8_ = auVar28._0_8_ & (ulonglong)auVar29._0_8_;
      auVar30._8_8_ = auVar28._8_8_ & (ulonglong)auVar29._8_8_;
      auVar30._16_8_ = auVar28._16_8_ & (ulonglong)auVar29._16_8_;
      auVar30._24_8_ = auVar28._24_8_ & (ulonglong)auVar29._24_8_;
      auVar31 = auVar31 | auVar30;
      pdVar1 = (double *)(param_1 + 0x30 + lVar25);
      dVar11 = *pdVar1;
      dVar12 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x30 + lVar25);
      dVar19 = *pdVar1;
      dVar20 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x50 + lVar25);
      dVar7 = *pdVar1;
      dVar8 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x50 + lVar25);
      dVar23 = *pdVar1;
      dVar24 = pdVar1[1];
      *(double *)(param_2 + lVar25) = dVar13 + auVar31._0_8_;
      ((double *)(param_2 + lVar25))[1] = dVar14 + auVar31._8_8_;
      pdVar1 = (double *)(param_2 + 0x10 + lVar25);
      *pdVar1 = dVar15 + auVar31._16_8_;
      pdVar1[1] = dVar16 + auVar31._24_8_;
      pdVar1 = (double *)(param_2 + 0x20 + lVar25);
      *pdVar1 = dVar26 * dVar9 + dVar17;
      pdVar1[1] = dVar26 * dVar10 + dVar18;
      pdVar1 = (double *)(param_2 + 0x30 + lVar25);
      *pdVar1 = dVar26 * dVar11 + dVar19;
      pdVar1[1] = dVar26 * dVar12 + dVar20;
      pdVar1 = (double *)(param_2 + 0x40 + lVar25);
      *pdVar1 = dVar26 * dVar5 + dVar21;
      pdVar1[1] = dVar26 * dVar6 + dVar22;
      pdVar1 = (double *)(param_2 + 0x50 + lVar25);
      *pdVar1 = dVar26 * dVar7 + dVar23;
      pdVar1[1] = dVar26 * dVar8 + dVar24;
      lVar25 = lVar25 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar25);
  }
  return;
}

// ConvertPoseToAdditive___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cuni_avx @ 140ab2d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToAdditive___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cuni_avx
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [32])

{
  double *pdVar1;
  ulonglong *puVar2;
  double *pdVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auVar9 [16];
  undefined1 auVar13 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar43;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar10 [16];
  double dVar41;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar45;
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  double dVar42;
  double dVar44;
  double dVar46;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar48 [16];
  ulonglong uVar60;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  ulonglong uVar47;
  undefined1 auVar51 [16];
  ulonglong uVar61;
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  ulonglong uVar62;
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar65 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  double dVar79;
  undefined1 in_ZMM3 [64];
  undefined1 auVar80 [16];
  undefined1 auVar82 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar83 [16];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 in_ZMM5 [64];
  double dVar88;
  double dVar91;
  double dVar92;
  undefined1 auVar89 [32];
  double dVar93;
  undefined1 auVar90 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 in_ZMM7 [64];
  undefined1 auVar97 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [16];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar110 [16];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [16];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [16];
  undefined1 auVar129 [32];
  double dVar130;
  double dVar132;
  undefined1 auVar131 [16];
  double dVar133;
  double dVar134;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 auVar22 [32];
  undefined1 auVar17 [24];
  undefined1 auVar30 [32];
  undefined1 auVar18 [24];
  undefined1 auVar26 [32];
  undefined1 auVar38 [32];
  undefined1 auVar54 [32];
  undefined1 auVar68 [32];
  undefined1 auVar73 [32];
  undefined1 auVar81 [32];
  undefined1 auVar84 [32];
  undefined1 auVar105 [32];
  undefined1 auVar111 [32];
  undefined1 auVar124 [32];
  
  auVar127 = *param_4;
  auVar65 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
  auVar64 = vpcmpgtd_avx(*(undefined1 (*) [16])(*param_4 + 0x10),auVar65);
  auVar65 = vpcmpgtd_avx(auVar127._0_16_,auVar65);
  auVar65 = vpor_avx(auVar65,auVar64);
  if ((((SUB161(auVar65 >> 0x1f,0) & 1) == 0 && (SUB161(auVar65 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar65 >> 0x5f,0) & 1) == 0) && -1 < auVar65[0xf]) {
    if (0 < (int)param_3) {
      lVar5 = 0;
      auVar127._8_8_ = __real_4000000000000000;
      auVar127._0_8_ = __real_4000000000000000;
      auVar127._16_8_ = __real_4000000000000000;
      auVar127._24_8_ = __real_4000000000000000;
      do {
        auVar37 = in_ZMM4._0_32_;
        auVar36 = in_ZMM3._0_32_;
        auVar128._8_8_ = 0;
        auVar128._0_8_ = *(ulonglong *)(param_2 + 0x40 + lVar5);
        auVar131._8_8_ = 0;
        auVar131._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar5);
        auVar136._8_8_ = 0;
        auVar136._0_8_ = *(ulonglong *)(param_2 + 0x50 + lVar5);
        auVar138._8_8_ = 0;
        auVar138._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar5);
        auVar65 = *(undefined1 (*) [16])(param_2 + 0x40 + lVar5);
        pdVar3 = (double *)(param_2 + 0x10 + lVar5);
        auVar39._0_8_ =
             *(double *)(param_2 + lVar5) *
             ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
        auVar39._8_8_ = ((double *)(param_2 + lVar5))[1] * _UNK_150b543c8;
        auVar39._16_8_ = *pdVar3 * _UNK_150b543d0;
        auVar39._24_8_ = pdVar3[1] * _UNK_150b543d8;
        dVar41 = *(double *)(param_1 + 0x18 + lVar5);
        dVar43 = *(double *)(param_1 + lVar5);
        auVar71 = vperm2f128_avx(auVar39,auVar39,1);
        auVar70 = vshufpd_avx(auVar71,auVar71,5);
        dVar45 = *(double *)(param_1 + 8 + lVar5);
        dVar79 = *(double *)(param_1 + 0x10 + lVar5);
        auVar59 = vshufpd_avx(auVar39,auVar39,5);
        auVar14 = vsubpd_avx(*(undefined1 (*) [16])(param_1 + 0x20 + lVar5),
                             *(undefined1 (*) [16])(param_2 + 0x20 + lVar5));
        auVar83 = vsubpd_avx(*(undefined1 (*) [16])(param_1 + 0x30 + lVar5),
                             *(undefined1 (*) [16])(param_2 + 0x30 + lVar5));
        auVar64 = *(undefined1 (*) [16])(param_2 + 0x50 + lVar5);
        auVar40._16_16_ = auVar64;
        auVar40._0_16_ = auVar65;
        dVar130 = auVar59._0_8_ * dVar79 *
                  ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                  auVar71._0_8_ * dVar45 *
                  ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                  auVar39._0_8_ * dVar41 +
                  auVar70._0_8_ * dVar43 *
                  ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
        dVar132 = auVar59._8_8_ * dVar79 * _UNK_150b54428 +
                  auVar71._8_8_ * dVar45 * _UNK_150b54408 +
                  auVar39._8_8_ * dVar41 + auVar70._8_8_ * dVar43 * _UNK_150b543e8;
        dVar133 = auVar59._16_8_ * dVar79 * _UNK_150b54430 +
                  auVar71._16_8_ * dVar45 * _UNK_150b54410 +
                  auVar39._16_8_ * dVar41 + auVar70._16_8_ * dVar43 * _UNK_150b543f0;
        dVar134 = auVar59._24_8_ * dVar79 * _UNK_150b54438 +
                  auVar71._24_8_ * dVar45 * _UNK_150b54418 +
                  auVar39._24_8_ * dVar41 + auVar70._24_8_ * dVar43 * _UNK_150b543f8;
        *(undefined1 (*) [16])(param_1 + 0x20 + lVar5) = auVar14;
        *(undefined1 (*) [16])(param_1 + 0x30 + lVar5) = auVar83;
        auVar70 = vcmppd_avx(auVar40,
                             ___ymm_46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c
                             ,2);
        auVar14 = vpackssdw_avx(auVar70._0_16_,auVar70._16_16_);
        auVar70._8_8_ = __real_3914c4e977ba1f5c;
        auVar70._0_8_ = __real_3914c4e977ba1f5c;
        auVar70._16_8_ = __real_3914c4e977ba1f5c;
        auVar70._24_8_ = __real_3914c4e977ba1f5c;
        auVar70 = vcmppd_avx(auVar70,auVar40,2);
        auVar83 = vpackssdw_avx(auVar70._0_16_,auVar70._16_16_);
        auVar15 = vpand_avx(auVar14,auVar83);
        iVar6 = vmovmskps_avx(ZEXT1632(auVar15));
        dVar41 = auVar65._0_8_;
        dVar43 = auVar65._8_8_;
        dVar45 = auVar64._0_8_;
        dVar79 = auVar64._8_8_;
        if (iVar6 == 0) {
          auVar59 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
LAB_140ab3244:
          auVar70 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                               SUB6432(ZEXT1664((undefined1  [16])0x0),0),0xf);
          auVar50._0_4_ = auVar59._0_4_ ^ auVar70._0_4_;
          auVar50._4_4_ = auVar59._4_4_ ^ auVar70._4_4_;
          auVar50._8_4_ = auVar59._8_4_ ^ auVar70._8_4_;
          auVar50._12_4_ = auVar59._12_4_ ^ auVar70._12_4_;
          auVar54._16_4_ = auVar59._16_4_ ^ auVar70._16_4_;
          auVar54._0_16_ = auVar50;
          auVar54._20_4_ = auVar59._20_4_ ^ auVar70._20_4_;
          auVar54._24_4_ = auVar59._24_4_ ^ auVar70._24_4_;
          auVar54._28_4_ = auVar59._28_4_ ^ auVar70._28_4_;
          auVar64._0_8_ = (ulonglong)dVar41 & __real_7fe0000000000000;
          auVar64._8_8_ = (ulonglong)dVar43 & __real_7fe0000000000000;
          auVar68._16_8_ = (ulonglong)dVar45 & __real_7fe0000000000000;
          auVar68._0_16_ = auVar64;
          auVar68._24_8_ = (ulonglong)dVar79 & __real_7fe0000000000000;
          auVar83._0_8_ = (ulonglong)dVar41 & __real_7fe0000000000000;
          auVar83._8_8_ = (ulonglong)dVar43 & __real_7fe0000000000000;
          auVar84._16_8_ = (ulonglong)dVar45 & __real_7fe0000000000000;
          auVar84._0_16_ = auVar83;
          auVar84._24_8_ = (ulonglong)dVar79 & __real_7fe0000000000000;
          auVar110._8_8_ = __real_7fcfffffffffffff;
          auVar110._0_8_ = __real_7fcfffffffffffff;
          auVar14 = vpsubq_avx(auVar110,auVar84._16_16_);
          auVar83 = vpsubq_avx(auVar110,auVar83);
          auVar15 = vpsubq_avx(auVar110,auVar68._16_16_);
          auVar110 = vpsubq_avx(auVar110,auVar64);
          auVar102._0_8_ = dVar41 * auVar83._0_8_;
          auVar102._8_8_ = dVar43 * auVar83._8_8_;
          auVar102._16_8_ = dVar45 * auVar14._0_8_;
          auVar102._24_8_ = dVar79 * auVar14._8_8_;
          auVar65 = vcvtpd2ps_avx(auVar102);
          auVar120._0_8_ = dVar41 * auVar110._0_8_;
          auVar120._8_8_ = dVar43 * auVar110._8_8_;
          auVar120._16_8_ = dVar45 * auVar15._0_8_;
          auVar120._24_8_ = dVar79 * auVar15._8_8_;
          auVar64 = vcvtpd2ps_avx(auVar120);
          auVar103._16_16_ = auVar64;
          auVar103._0_16_ = auVar65;
          auVar70 = vrcpps_avx(auVar103);
          auVar104._0_4_ = auVar70._0_4_ * auVar65._0_4_;
          auVar104._4_4_ = auVar70._4_4_ * auVar65._4_4_;
          auVar104._8_4_ = auVar70._8_4_ * auVar65._8_4_;
          auVar104._12_4_ = auVar70._12_4_ * auVar65._12_4_;
          auVar104._16_4_ = auVar70._16_4_ * auVar64._0_4_;
          auVar104._20_4_ = auVar70._20_4_ * auVar64._4_4_;
          auVar104._24_4_ = auVar70._24_4_ * auVar64._8_4_;
          auVar104._28_4_ = auVar70._28_4_ * auVar64._12_4_;
          auVar116._4_4_ = __real_40000000;
          auVar116._0_4_ = __real_40000000;
          auVar116._8_4_ = __real_40000000;
          auVar116._12_4_ = __real_40000000;
          auVar116._16_4_ = __real_40000000;
          auVar116._20_4_ = __real_40000000;
          auVar116._24_4_ = __real_40000000;
          auVar116._28_4_ = __real_40000000;
          auVar59 = vsubps_avx(auVar116,auVar104);
          auVar97._0_4_ = auVar70._0_4_ * auVar59._0_4_;
          auVar97._4_4_ = auVar70._4_4_ * auVar59._4_4_;
          auVar97._8_4_ = auVar70._8_4_ * auVar59._8_4_;
          auVar97._12_4_ = auVar70._12_4_ * auVar59._12_4_;
          auVar105._16_4_ = auVar70._16_4_ * auVar59._16_4_;
          auVar105._0_16_ = auVar97;
          auVar105._20_4_ = auVar70._20_4_ * auVar59._20_4_;
          auVar105._24_4_ = auVar70._24_4_ * auVar59._24_4_;
          auVar105._28_4_ = auVar70._28_4_ * auVar59._28_4_;
          auVar70 = vcvtps2pd_avx(auVar97);
          auVar59 = vcvtps2pd_avx(auVar105._16_16_);
          dVar7 = auVar59._0_8_ * auVar110._0_8_;
          dVar42 = auVar59._8_8_ * auVar110._8_8_;
          dVar44 = auVar59._16_8_ * auVar15._0_8_;
          dVar46 = auVar59._24_8_ * auVar15._8_8_;
          dVar88 = auVar70._0_8_ * auVar83._0_8_;
          dVar91 = auVar70._8_8_ * auVar83._8_8_;
          dVar92 = auVar70._16_8_ * auVar14._0_8_;
          dVar93 = auVar70._24_8_ * auVar14._8_8_;
          auVar106._0_8_ = dVar41 * dVar88;
          auVar106._8_8_ = dVar43 * dVar91;
          auVar106._16_8_ = dVar45 * dVar92;
          auVar106._24_8_ = dVar79 * dVar93;
          auVar121._0_8_ = dVar41 * dVar7;
          auVar121._8_8_ = dVar43 * dVar42;
          auVar121._16_8_ = dVar45 * dVar44;
          auVar121._24_8_ = dVar79 * dVar46;
          auVar70 = vsubpd_avx(auVar127,auVar121);
          auVar59 = vsubpd_avx(auVar127,auVar106);
          dVar88 = auVar59._0_8_ * dVar88;
          dVar91 = auVar59._8_8_ * dVar91;
          dVar92 = auVar59._16_8_ * dVar92;
          dVar93 = auVar59._24_8_ * dVar93;
          dVar7 = auVar70._0_8_ * dVar7;
          dVar42 = auVar70._8_8_ * dVar42;
          dVar44 = auVar70._16_8_ * dVar44;
          dVar46 = auVar70._24_8_ * dVar46;
          auVar107._0_8_ = dVar41 * dVar7;
          auVar107._8_8_ = dVar43 * dVar42;
          auVar107._16_8_ = dVar45 * dVar44;
          auVar107._24_8_ = dVar79 * dVar46;
          auVar33._0_8_ = dVar41 * dVar88;
          auVar33._8_8_ = dVar43 * dVar91;
          auVar33._16_8_ = dVar45 * dVar92;
          auVar33._24_8_ = dVar79 * dVar93;
          auVar70 = vsubpd_avx(auVar127,auVar33);
          auVar59 = vsubpd_avx(auVar127,auVar107);
          auVar69._0_8_ = auVar59._0_8_ * dVar7;
          auVar69._8_8_ = auVar59._8_8_ * dVar42;
          auVar69._16_8_ = auVar59._16_8_ * dVar44;
          auVar69._24_8_ = auVar59._24_8_ * dVar46;
          auVar34._0_8_ = dVar88 * auVar70._0_8_;
          auVar34._8_8_ = dVar91 * auVar70._8_8_;
          auVar34._16_8_ = dVar92 * auVar70._16_8_;
          auVar34._24_8_ = dVar93 * auVar70._24_8_;
          auVar65 = vshufps_avx(auVar50,auVar50,0x50);
          auVar64 = vshufps_avx(auVar50,auVar50,0xfa);
          auVar85._16_16_ = auVar64;
          auVar85._0_16_ = auVar65;
          auVar36 = vblendvps_avx(auVar36,auVar34,auVar85);
          auVar65 = vpshufd_avx(auVar54._16_16_,0x50);
          auVar64 = vpshufd_avx(auVar54._16_16_,0xfa);
          auVar35._16_16_ = auVar64;
          auVar35._0_16_ = auVar65;
          auVar37 = vblendvps_avx(auVar37,auVar69,auVar35);
        }
        else {
          auVar65 = vpackssdw_avx(auVar14,(undefined1  [16])0x0);
          auVar64 = vpackssdw_avx(auVar83,(undefined1  [16])0x0);
          auVar14 = vpand_avx(auVar65,auVar64);
          auVar83 = vpmovsxwd_avx(auVar14);
          auVar65 = vcvtpd2ps_avx(auVar40);
          auVar64 = vcvtpd2ps_avx(auVar40);
          auVar71._16_16_ = auVar64;
          auVar71._0_16_ = auVar65;
          auVar70 = vrcpps_avx(auVar71);
          auVar72._0_4_ = auVar70._0_4_ * auVar65._0_4_;
          auVar72._4_4_ = auVar70._4_4_ * auVar65._4_4_;
          auVar72._8_4_ = auVar70._8_4_ * auVar65._8_4_;
          auVar72._12_4_ = auVar70._12_4_ * auVar65._12_4_;
          auVar72._16_4_ = auVar70._16_4_ * auVar64._0_4_;
          auVar72._20_4_ = auVar70._20_4_ * auVar64._4_4_;
          auVar72._24_4_ = auVar70._24_4_ * auVar64._8_4_;
          auVar72._28_4_ = auVar70._28_4_ * auVar64._12_4_;
          auVar94._4_4_ = __real_40000000;
          auVar94._0_4_ = __real_40000000;
          auVar94._8_4_ = __real_40000000;
          auVar94._12_4_ = __real_40000000;
          auVar94._16_4_ = __real_40000000;
          auVar94._20_4_ = __real_40000000;
          auVar94._24_4_ = __real_40000000;
          auVar94._28_4_ = __real_40000000;
          auVar59 = vsubps_avx(auVar94,auVar72);
          auVar65._0_4_ = auVar70._0_4_ * auVar59._0_4_;
          auVar65._4_4_ = auVar70._4_4_ * auVar59._4_4_;
          auVar65._8_4_ = auVar70._8_4_ * auVar59._8_4_;
          auVar65._12_4_ = auVar70._12_4_ * auVar59._12_4_;
          auVar73._16_4_ = auVar70._16_4_ * auVar59._16_4_;
          auVar73._0_16_ = auVar65;
          auVar73._20_4_ = auVar70._20_4_ * auVar59._20_4_;
          auVar73._24_4_ = auVar70._24_4_ * auVar59._24_4_;
          auVar73._28_4_ = auVar70._28_4_ * auVar59._28_4_;
          auVar70 = vcvtps2pd_avx(auVar73._16_16_);
          auVar59 = vcvtps2pd_avx(auVar65);
          auVar15 = vpunpckhwd_avx(auVar14,auVar14);
          auVar95._0_8_ = auVar59._0_8_ * dVar41;
          auVar95._8_8_ = auVar59._8_8_ * dVar43;
          auVar95._16_8_ = auVar59._16_8_ * dVar45;
          auVar95._24_8_ = auVar59._24_8_ * dVar79;
          auVar117._0_8_ = auVar70._0_8_ * dVar41;
          auVar117._8_8_ = auVar70._8_8_ * dVar43;
          auVar117._16_8_ = auVar70._16_8_ * dVar45;
          auVar117._24_8_ = auVar70._24_8_ * dVar79;
          auVar71 = vsubpd_avx(auVar127,auVar117);
          auVar39 = vsubpd_avx(auVar127,auVar95);
          dVar7 = auVar59._0_8_ * auVar39._0_8_;
          dVar42 = auVar59._8_8_ * auVar39._8_8_;
          dVar44 = auVar59._16_8_ * auVar39._16_8_;
          dVar46 = auVar59._24_8_ * auVar39._24_8_;
          dVar88 = auVar71._0_8_ * auVar70._0_8_;
          dVar91 = auVar71._8_8_ * auVar70._8_8_;
          dVar92 = auVar71._16_8_ * auVar70._16_8_;
          dVar93 = auVar71._24_8_ * auVar70._24_8_;
          auVar118._0_8_ = dVar88 * dVar41;
          auVar118._8_8_ = dVar91 * dVar43;
          auVar118._16_8_ = dVar92 * dVar45;
          auVar118._24_8_ = dVar93 * dVar79;
          auVar122._0_8_ = dVar41 * dVar7;
          auVar122._8_8_ = dVar43 * dVar42;
          auVar122._16_8_ = dVar45 * dVar44;
          auVar122._24_8_ = dVar79 * dVar46;
          auVar70 = vsubpd_avx(auVar127,auVar122);
          auVar59 = vsubpd_avx(auVar127,auVar118);
          auVar108._0_8_ = dVar88 * auVar59._0_8_;
          auVar108._8_8_ = dVar91 * auVar59._8_8_;
          auVar108._16_8_ = dVar92 * auVar59._16_8_;
          auVar108._24_8_ = dVar93 * auVar59._24_8_;
          auVar96._0_8_ = auVar70._0_8_ * dVar7;
          auVar96._8_8_ = auVar70._8_8_ * dVar42;
          auVar96._16_8_ = auVar70._16_8_ * dVar44;
          auVar96._24_8_ = auVar70._24_8_ * dVar46;
          auVar65 = vpmovsxwq_avx(auVar14);
          auVar64 = vpshufd_avx(auVar83,0xfa);
          auVar86._16_16_ = auVar64;
          auVar86._0_16_ = auVar65;
          auVar36 = vblendvps_avx(auVar36,auVar96,auVar86);
          auVar65 = vpshufd_avx(auVar15,0x50);
          auVar64 = vpshufd_avx(auVar15,0xfa);
          auVar87._16_16_ = auVar64;
          auVar87._0_16_ = auVar65;
          auVar37 = vblendvps_avx(auVar37,auVar108,auVar87);
          if ((char)iVar6 != -1) {
            auVar59._16_16_ = auVar15;
            auVar59._0_16_ = auVar83;
            goto LAB_140ab3244;
          }
        }
        in_ZMM4 = ZEXT3264(auVar37);
        in_ZMM3 = ZEXT3264(auVar36);
        dVar41 = auVar36._0_8_;
        dVar43 = auVar36._8_8_;
        dVar45 = auVar36._16_8_;
        dVar79 = auVar36._24_8_;
        auVar55._0_8_ = dVar41 + dVar41;
        auVar55._8_8_ = dVar43 + dVar43;
        auVar55._16_8_ = dVar45 + dVar45;
        auVar55._24_8_ = dVar79 + dVar79;
        auVar65 = vmovlhps_avx(auVar136,auVar138);
        auVar64 = vunpcklpd_avx(auVar128,auVar131);
        dVar7 = auVar64._0_8_;
        auVar36._0_8_ = dVar7 * dVar41 * dVar41;
        dVar42 = auVar64._8_8_;
        auVar36._8_8_ = dVar42 * dVar43 * dVar43;
        dVar44 = auVar65._0_8_;
        auVar36._16_8_ = dVar44 * dVar45 * dVar45;
        dVar46 = auVar65._8_8_;
        auVar36._24_8_ = dVar46 * dVar79 * dVar79;
        auVar36 = vsubpd_avx(auVar55,auVar36);
        dVar41 = auVar36._0_8_;
        dVar43 = auVar36._8_8_;
        dVar45 = auVar36._16_8_;
        dVar79 = auVar36._24_8_;
        auVar37._0_8_ = dVar41 + dVar41;
        auVar37._8_8_ = dVar43 + dVar43;
        auVar37._16_8_ = dVar45 + dVar45;
        auVar37._24_8_ = dVar79 + dVar79;
        auVar56._0_8_ = dVar7 * dVar41 * dVar41;
        auVar56._8_8_ = dVar42 * dVar43 * dVar43;
        auVar56._16_8_ = dVar44 * dVar45 * dVar45;
        auVar56._24_8_ = dVar46 * dVar79 * dVar79;
        auVar37 = vsubpd_avx(auVar37,auVar56);
        auVar57._0_8_ =
             (ulonglong)dVar7 &
             ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
        auVar57._8_8_ = (ulonglong)dVar42 & _UNK_150aa8f48;
        auVar57._16_8_ = (ulonglong)dVar44 & _UNK_150aa8f50;
        auVar57._24_8_ = (ulonglong)dVar46 & _UNK_150aa8f58;
        auVar36 = vcmppd_avx(auVar57,
                             ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a
                             ,2);
        auVar65 = vpackssdw_avx(auVar36._0_16_,auVar36._16_16_);
        auVar64 = vpshufd_avx(auVar65,0x50);
        auVar65 = vpshufd_avx(auVar65,0xfa);
        auVar58._16_16_ = auVar65;
        auVar58._0_16_ = auVar64;
        auVar70 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar36 = vcmpps_avx(auVar70,auVar70,0xf);
        auVar36 = vblendvps_avx(auVar70,auVar36,auVar58);
        auVar14._0_8_ =
             (double)CONCAT44(~auVar36._4_4_ & auVar37._4_4_,~auVar36._0_4_ & auVar37._0_4_);
        auVar14._8_4_ = ~auVar36._8_4_ & auVar37._8_4_;
        auVar14._12_4_ = ~auVar36._12_4_ & auVar37._12_4_;
        auVar18._16_4_ = ~auVar36._16_4_ & auVar37._16_4_;
        auVar18._0_16_ = auVar14;
        auVar18._20_4_ = ~auVar36._20_4_ & auVar37._20_4_;
        auVar38._24_4_ = ~auVar36._24_4_ & auVar37._24_4_;
        auVar38._0_24_ = auVar18;
        auVar38._28_4_ = ~auVar36._28_4_ & auVar37._28_4_;
        pdVar3 = (double *)(param_1 + 0x40 + lVar5);
        pdVar1 = (double *)(param_1 + 0x50 + lVar5);
        dVar41 = pdVar3[1] * auVar14._8_8_ + _UNK_151c6afc8;
        dVar43 = *pdVar1 * auVar18._16_8_ + _UNK_151c6afd0;
        dVar45 = pdVar1[1] * auVar38._24_8_ + _UNK_151c6afd8;
        pdVar1 = (double *)(param_1 + 0x40 + lVar5);
        *pdVar1 = *pdVar3 * auVar14._0_8_ +
                  ___ymm_8000000000000000bff0000000000000bff0000000000000bff0000000000000;
        pdVar1[1] = dVar41;
        pdVar3 = (double *)(param_1 + 0x50 + lVar5);
        *pdVar3 = dVar43;
        pdVar3[1] = dVar45;
        auVar15._0_8_ = dVar130 * dVar130 + dVar133 * dVar133;
        auVar15._8_8_ = dVar132 * dVar132 + dVar134 * dVar134;
        auVar65 = vshufpd_avx(auVar15,auVar15,1);
        dVar41 = auVar15._0_8_ + auVar65._0_8_;
        auVar51._8_8_ = 0;
        auVar51._0_8_ = __real_3e45798ee2308c3a;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = dVar41;
        auVar65 = vcmpsd_avx(auVar51,auVar16,6);
        uVar47 = ~auVar65._0_8_ & __real_ffffffffffffffff;
        dVar41 = __real_3ff0000000000000 / SQRT(dVar41);
        uVar60 = ~uVar47 & _UNK_150b54548;
        uVar61 = ~uVar47 & _UNK_150b54550;
        uVar62 = ~uVar47 & _UNK_150b54558;
        *(ulonglong *)(param_1 + lVar5) =
             (ulonglong)(dVar130 * dVar41) & uVar47 |
             ~uVar47 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        ((ulonglong *)(param_1 + lVar5))[1] = (ulonglong)(dVar132 * dVar41) & uVar47 | uVar60;
        puVar2 = (ulonglong *)(param_1 + 0x10 + lVar5);
        *puVar2 = (ulonglong)(dVar133 * dVar41) & uVar47 | uVar61;
        puVar2[1] = (ulonglong)(dVar134 * dVar41) & uVar47 | uVar62;
        lVar5 = lVar5 + 0x60;
      } while ((ulonglong)param_3 * 0x60 != lVar5);
    }
  }
  else if (0 < (int)param_3) {
    uVar4 = vmovmskps_avx(auVar127);
    lVar5 = 0;
    auVar129._8_8_ = __real_4000000000000000;
    auVar129._0_8_ = __real_4000000000000000;
    auVar129._16_8_ = __real_4000000000000000;
    auVar129._24_8_ = __real_4000000000000000;
    auVar119._4_4_ = __real_40000000;
    auVar119._0_4_ = __real_40000000;
    auVar119._8_4_ = __real_40000000;
    auVar119._12_4_ = __real_40000000;
    auVar119._16_4_ = __real_40000000;
    auVar119._20_4_ = __real_40000000;
    auVar119._24_4_ = __real_40000000;
    auVar119._28_4_ = __real_40000000;
    do {
      auVar36 = in_ZMM7._0_32_;
      auVar37 = in_ZMM5._0_32_;
      auVar135._8_8_ = 0;
      auVar135._0_8_ = *(ulonglong *)(param_2 + 0x40 + lVar5);
      auVar137._8_8_ = 0;
      auVar137._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar5);
      auVar49._8_8_ = 0;
      auVar49._0_8_ = *(ulonglong *)(param_2 + 0x50 + lVar5);
      pdVar3 = (double *)(param_2 + 0x10 + lVar5);
      auVar67._0_8_ =
           *(double *)(param_2 + lVar5) *
           ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar67._8_8_ = ((double *)(param_2 + lVar5))[1] * _UNK_150b543c8;
      auVar67._16_8_ = *pdVar3 * _UNK_150b543d0;
      auVar67._24_8_ = pdVar3[1] * _UNK_150b543d8;
      dVar41 = *(double *)(param_1 + 0x18 + lVar5);
      dVar43 = *(double *)(param_1 + lVar5);
      auVar71 = vperm2f128_avx(auVar67,auVar67,1);
      auVar70 = vshufpd_avx(auVar71,auVar71,5);
      dVar45 = *(double *)(param_1 + 8 + lVar5);
      auVar65 = *(undefined1 (*) [16])(param_2 + 0x40 + lVar5);
      dVar79 = *(double *)(param_1 + 0x10 + lVar5);
      auVar59 = vshufpd_avx(auVar67,auVar67,5);
      dVar130 = auVar59._0_8_ * dVar79 *
                ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                auVar71._0_8_ * dVar45 *
                ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                auVar67._0_8_ * dVar41 +
                auVar70._0_8_ * dVar43 *
                ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
      dVar132 = auVar59._8_8_ * dVar79 * _UNK_150b54428 +
                auVar71._8_8_ * dVar45 * _UNK_150b54408 +
                auVar67._8_8_ * dVar41 + auVar70._8_8_ * dVar43 * _UNK_150b543e8;
      dVar133 = auVar59._16_8_ * dVar79 * _UNK_150b54430 +
                auVar71._16_8_ * dVar45 * _UNK_150b54410 +
                auVar67._16_8_ * dVar41 + auVar70._16_8_ * dVar43 * _UNK_150b543f0;
      dVar134 = auVar59._24_8_ * dVar79 * _UNK_150b54438 +
                auVar71._24_8_ * dVar45 * _UNK_150b54418 +
                auVar67._24_8_ * dVar41 + auVar70._24_8_ * dVar43 * _UNK_150b543f8;
      auVar14 = vsubpd_avx(*(undefined1 (*) [16])(param_1 + 0x20 + lVar5),
                           *(undefined1 (*) [16])(param_2 + 0x20 + lVar5));
      auVar83 = vsubpd_avx(*(undefined1 (*) [16])(param_1 + 0x30 + lVar5),
                           *(undefined1 (*) [16])(param_2 + 0x30 + lVar5));
      auVar64 = *(undefined1 (*) [16])(param_2 + 0x50 + lVar5);
      auVar78._16_16_ = auVar64;
      auVar78._0_16_ = auVar65;
      *(undefined1 (*) [16])(param_1 + 0x20 + lVar5) = auVar14;
      *(undefined1 (*) [16])(param_1 + 0x30 + lVar5) = auVar83;
      auVar70 = vcmppd_avx(auVar78,
                           ___ymm_46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c,2
                          );
      auVar14 = vpackssdw_avx(auVar70._0_16_,auVar70._16_16_);
      auVar27._8_8_ = __real_3914c4e977ba1f5c;
      auVar27._0_8_ = __real_3914c4e977ba1f5c;
      auVar27._16_8_ = __real_3914c4e977ba1f5c;
      auVar27._24_8_ = __real_3914c4e977ba1f5c;
      auVar70 = vcmppd_avx(auVar27,auVar78,2);
      auVar83 = vpackssdw_avx(auVar70._0_16_,auVar70._16_16_);
      auVar63._8_8_ = 0;
      auVar63._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar5);
      auVar14 = vpackssdw_avx(auVar14,ZEXT816(0) << 0x40);
      auVar83 = vpackssdw_avx(auVar83,ZEXT816(0) << 0x40);
      auVar14 = vpand_avx(auVar83,auVar14);
      auVar83 = vpmovsxwd_avx(auVar14);
      auVar14 = vpunpckhwd_avx(auVar14,auVar14);
      local_c8 = auVar127._0_4_;
      uStack_c4 = auVar127._4_4_;
      uStack_c0 = auVar127._8_4_;
      uStack_bc = auVar127._12_4_;
      uStack_b8 = auVar127._16_4_;
      uStack_b4 = auVar127._20_4_;
      uStack_b0 = auVar127._24_4_;
      uStack_ac = auVar127._28_4_;
      auVar82._0_4_ = auVar83._0_4_ & local_c8;
      auVar82._4_4_ = auVar83._4_4_ & uStack_c4;
      auVar82._8_4_ = auVar83._8_4_ & uStack_c0;
      auVar82._12_4_ = auVar83._12_4_ & uStack_bc;
      auVar82._16_4_ = auVar14._0_4_ & uStack_b8;
      auVar82._20_4_ = auVar14._4_4_ & uStack_b4;
      auVar82._24_4_ = auVar14._8_4_ & uStack_b0;
      auVar82._28_4_ = auVar14._12_4_ & uStack_ac;
      iVar6 = vmovmskps_avx(auVar82);
      dVar41 = auVar65._0_8_;
      dVar43 = auVar65._8_8_;
      dVar45 = auVar64._0_8_;
      dVar79 = auVar64._8_8_;
      if (iVar6 == 0) {
        auVar82 = ZEXT432(0) << 0x20;
LAB_140ab2e34:
        auVar70 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                             SUB6432(ZEXT1664((undefined1  [16])0x0),0),0xf);
        auVar80._0_4_ = auVar70._0_4_ ^ auVar82._0_4_;
        auVar80._4_4_ = auVar70._4_4_ ^ auVar82._4_4_;
        auVar80._8_4_ = auVar70._8_4_ ^ auVar82._8_4_;
        auVar80._12_4_ = auVar70._12_4_ ^ auVar82._12_4_;
        auVar81._16_4_ = auVar70._16_4_ ^ auVar82._16_4_;
        auVar81._0_16_ = auVar80;
        auVar81._20_4_ = auVar70._20_4_ ^ auVar82._20_4_;
        auVar81._24_4_ = auVar70._24_4_ ^ auVar82._24_4_;
        auVar81._28_4_ = auVar70._28_4_ ^ auVar82._28_4_;
        auVar109._8_8_ = __real_7fe0000000000000;
        auVar109._0_8_ = __real_7fe0000000000000;
        auVar111._16_8_ = __real_7fe0000000000000;
        auVar111._0_16_ = auVar109;
        auVar111._24_8_ = __real_7fe0000000000000;
        auVar123._0_8_ = (ulonglong)dVar41 & __real_7fe0000000000000;
        auVar123._8_8_ = (ulonglong)dVar43 & __real_7fe0000000000000;
        auVar124._16_8_ = (ulonglong)dVar45 & __real_7fe0000000000000;
        auVar124._0_16_ = auVar123;
        auVar124._24_8_ = (ulonglong)dVar79 & __real_7fe0000000000000;
        auVar8._8_8_ = __real_7fcfffffffffffff;
        auVar8._0_8_ = __real_7fcfffffffffffff;
        auVar14 = vpsubq_avx(auVar8,auVar124._16_16_);
        auVar83 = vpsubq_avx(auVar8,auVar123);
        auVar15 = vpsubq_avx(auVar8,auVar111._16_16_);
        auVar128 = vpsubq_avx(auVar8,auVar109);
        auVar125._0_8_ = dVar41 * auVar83._0_8_;
        auVar125._8_8_ = dVar43 * auVar83._8_8_;
        auVar125._16_8_ = dVar45 * auVar14._0_8_;
        auVar125._24_8_ = dVar79 * auVar14._8_8_;
        auVar65 = vcvtpd2ps_avx(auVar125);
        auVar19._0_8_ = auVar128._0_8_ * __real_7fcfffffffffffff;
        auVar19._8_8_ = auVar128._8_8_ * __real_7fcfffffffffffff;
        auVar19._16_8_ = auVar15._0_8_ * 0.0;
        auVar19._24_8_ = auVar15._8_8_ * 0.0;
        auVar64 = vcvtpd2ps_avx(auVar19);
        auVar20._16_16_ = auVar64;
        auVar20._0_16_ = auVar65;
        auVar70 = vrcpps_avx(auVar20);
        auVar21._0_4_ = auVar70._0_4_ * auVar65._0_4_;
        auVar21._4_4_ = auVar70._4_4_ * auVar65._4_4_;
        auVar21._8_4_ = auVar70._8_4_ * auVar65._8_4_;
        auVar21._12_4_ = auVar70._12_4_ * auVar65._12_4_;
        auVar21._16_4_ = auVar70._16_4_ * auVar64._0_4_;
        auVar21._20_4_ = auVar70._20_4_ * auVar64._4_4_;
        auVar21._24_4_ = auVar70._24_4_ * auVar64._8_4_;
        auVar21._28_4_ = auVar70._28_4_ * auVar64._12_4_;
        auVar59 = vsubps_avx(auVar119,auVar21);
        auVar9._0_4_ = auVar70._0_4_ * auVar59._0_4_;
        auVar9._4_4_ = auVar70._4_4_ * auVar59._4_4_;
        auVar9._8_4_ = auVar70._8_4_ * auVar59._8_4_;
        auVar9._12_4_ = auVar70._12_4_ * auVar59._12_4_;
        auVar22._16_4_ = auVar70._16_4_ * auVar59._16_4_;
        auVar22._0_16_ = auVar9;
        auVar22._20_4_ = auVar70._20_4_ * auVar59._20_4_;
        auVar22._24_4_ = auVar70._24_4_ * auVar59._24_4_;
        auVar22._28_4_ = auVar70._28_4_ * auVar59._28_4_;
        auVar70 = vcvtps2pd_avx(auVar9);
        auVar59 = vcvtps2pd_avx(auVar22._16_16_);
        dVar7 = auVar128._0_8_ * auVar59._0_8_;
        dVar42 = auVar128._8_8_ * auVar59._8_8_;
        dVar44 = auVar15._0_8_ * auVar59._16_8_;
        dVar46 = auVar15._8_8_ * auVar59._24_8_;
        dVar88 = auVar70._0_8_ * auVar83._0_8_;
        dVar91 = auVar70._8_8_ * auVar83._8_8_;
        dVar92 = auVar70._16_8_ * auVar14._0_8_;
        dVar93 = auVar70._24_8_ * auVar14._8_8_;
        auVar112._0_8_ = dVar41 * dVar88;
        auVar112._8_8_ = dVar43 * dVar91;
        auVar112._16_8_ = dVar45 * dVar92;
        auVar112._24_8_ = dVar79 * dVar93;
        auVar126._0_8_ = dVar7 * dVar7;
        auVar126._8_8_ = dVar42 * dVar42;
        auVar126._16_8_ = dVar44 * dVar44;
        auVar126._24_8_ = dVar46 * dVar46;
        auVar70 = vsubpd_avx(auVar129,auVar126);
        auVar59 = vsubpd_avx(auVar129,auVar112);
        dVar88 = auVar59._0_8_ * dVar88;
        dVar91 = auVar59._8_8_ * dVar91;
        dVar92 = auVar59._16_8_ * dVar92;
        dVar93 = auVar59._24_8_ * dVar93;
        dVar7 = auVar70._0_8_ * dVar7;
        dVar42 = auVar70._8_8_ * dVar42;
        dVar44 = auVar70._16_8_ * dVar44;
        dVar46 = auVar70._24_8_ * dVar46;
        auVar113._0_8_ = dVar7 * dVar7;
        auVar113._8_8_ = dVar42 * dVar42;
        auVar113._16_8_ = dVar44 * dVar44;
        auVar113._24_8_ = dVar46 * dVar46;
        auVar74._0_8_ = dVar41 * dVar88;
        auVar74._8_8_ = dVar43 * dVar91;
        auVar74._16_8_ = dVar45 * dVar92;
        auVar74._24_8_ = dVar79 * dVar93;
        auVar70 = vsubpd_avx(auVar129,auVar74);
        auVar59 = vsubpd_avx(auVar129,auVar113);
        auVar23._0_8_ = auVar59._0_8_ * dVar7;
        auVar23._8_8_ = auVar59._8_8_ * dVar42;
        auVar23._16_8_ = auVar59._16_8_ * dVar44;
        auVar23._24_8_ = auVar59._24_8_ * dVar46;
        auVar75._0_8_ = dVar88 * auVar70._0_8_;
        auVar75._8_8_ = dVar91 * auVar70._8_8_;
        auVar75._16_8_ = dVar92 * auVar70._16_8_;
        auVar75._24_8_ = dVar93 * auVar70._24_8_;
        auVar65 = vshufps_avx(auVar80,auVar80,0x50);
        auVar64 = vshufps_avx(auVar80,auVar80,0xfa);
        auVar89._16_16_ = auVar64;
        auVar89._0_16_ = auVar65;
        auVar37 = vblendvps_avx(auVar37,auVar75,auVar89);
        auVar64 = auVar81._16_16_;
        auVar65 = vshufps_avx(auVar64,auVar64,0x50);
        auVar64 = vshufps_avx(auVar64,auVar64,0xfa);
        auVar76._16_16_ = auVar64;
        auVar76._0_16_ = auVar65;
        auVar36 = vblendvps_avx(auVar36,auVar23,auVar76);
      }
      else {
        auVar65 = vcvtpd2ps_avx(auVar78);
        auVar64 = vcvtpd2ps_avx(ZEXT1632(auVar65));
        auVar28._16_16_ = auVar64;
        auVar28._0_16_ = auVar65;
        auVar70 = vrcpps_avx(auVar28);
        auVar29._0_4_ = auVar70._0_4_ * auVar65._0_4_;
        auVar29._4_4_ = auVar70._4_4_ * auVar65._4_4_;
        auVar29._8_4_ = auVar70._8_4_ * auVar65._8_4_;
        auVar29._12_4_ = auVar70._12_4_ * auVar65._12_4_;
        auVar29._16_4_ = auVar70._16_4_ * auVar64._0_4_;
        auVar29._20_4_ = auVar70._20_4_ * auVar64._4_4_;
        auVar29._24_4_ = auVar70._24_4_ * auVar64._8_4_;
        auVar29._28_4_ = auVar70._28_4_ * auVar64._12_4_;
        auVar98._4_4_ = __real_40000000;
        auVar98._0_4_ = __real_40000000;
        auVar98._8_4_ = __real_40000000;
        auVar98._12_4_ = __real_40000000;
        auVar98._16_4_ = __real_40000000;
        auVar98._20_4_ = __real_40000000;
        auVar98._24_4_ = __real_40000000;
        auVar98._28_4_ = __real_40000000;
        auVar59 = vsubps_avx(auVar98,auVar29);
        auVar13._0_4_ = auVar70._0_4_ * auVar59._0_4_;
        auVar13._4_4_ = auVar70._4_4_ * auVar59._4_4_;
        auVar13._8_4_ = auVar70._8_4_ * auVar59._8_4_;
        auVar13._12_4_ = auVar70._12_4_ * auVar59._12_4_;
        auVar30._16_4_ = auVar70._16_4_ * auVar59._16_4_;
        auVar30._0_16_ = auVar13;
        auVar30._20_4_ = auVar70._20_4_ * auVar59._20_4_;
        auVar30._24_4_ = auVar70._24_4_ * auVar59._24_4_;
        auVar30._28_4_ = auVar70._28_4_ * auVar59._28_4_;
        auVar70 = vcvtps2pd_avx(auVar30._16_16_);
        auVar59 = vcvtps2pd_avx(auVar13);
        dVar7 = auVar59._0_8_;
        auVar114._0_8_ = dVar41 * dVar7;
        dVar42 = auVar59._8_8_;
        auVar114._8_8_ = dVar43 * dVar42;
        dVar44 = auVar59._16_8_;
        auVar114._16_8_ = dVar45 * dVar44;
        dVar46 = auVar59._24_8_;
        auVar114._24_8_ = dVar79 * dVar46;
        auVar99._0_8_ = dVar7 * auVar70._0_8_;
        auVar99._8_8_ = dVar42 * auVar70._8_8_;
        auVar99._16_8_ = dVar44 * auVar70._16_8_;
        auVar99._24_8_ = dVar46 * auVar70._24_8_;
        auVar59 = vsubpd_avx(auVar129,auVar99);
        auVar71 = vsubpd_avx(auVar129,auVar114);
        dVar7 = auVar71._0_8_ * dVar7;
        dVar42 = auVar71._8_8_ * dVar42;
        dVar44 = auVar71._16_8_ * dVar44;
        dVar46 = auVar71._24_8_ * dVar46;
        dVar88 = auVar59._0_8_ * auVar70._0_8_;
        dVar91 = auVar59._8_8_ * auVar70._8_8_;
        dVar92 = auVar59._16_8_ * auVar70._16_8_;
        dVar93 = auVar59._24_8_ * auVar70._24_8_;
        auVar100._0_8_ = dVar7 * dVar88;
        auVar100._8_8_ = dVar42 * dVar91;
        auVar100._16_8_ = dVar44 * dVar92;
        auVar100._24_8_ = dVar46 * dVar93;
        auVar115._0_8_ = dVar41 * dVar7;
        auVar115._8_8_ = dVar43 * dVar42;
        auVar115._16_8_ = dVar45 * dVar44;
        auVar115._24_8_ = dVar79 * dVar46;
        auVar70 = vsubpd_avx(auVar129,auVar115);
        auVar59 = vsubpd_avx(auVar129,auVar100);
        auVar90._0_8_ = auVar59._0_8_ * dVar88;
        auVar90._8_8_ = auVar59._8_8_ * dVar91;
        auVar90._16_8_ = auVar59._16_8_ * dVar92;
        auVar90._24_8_ = auVar59._24_8_ * dVar93;
        auVar31._0_8_ = auVar70._0_8_ * dVar7;
        auVar31._8_8_ = auVar70._8_8_ * dVar42;
        auVar31._16_8_ = auVar70._16_8_ * dVar44;
        auVar31._24_8_ = auVar70._24_8_ * dVar46;
        auVar65 = vshufps_avx(auVar83,auVar83,0x50);
        auVar64 = vshufps_avx(auVar83,auVar83,0xfa);
        auVar101._16_16_ = auVar64;
        auVar101._0_16_ = auVar65;
        auVar37 = vblendvps_avx(auVar37,auVar31,auVar101);
        auVar65 = vpshufd_avx(auVar14,0x50);
        auVar64 = vpshufd_avx(auVar14,0xfa);
        auVar32._16_16_ = auVar64;
        auVar32._0_16_ = auVar65;
        auVar36 = vblendvps_avx(auVar36,auVar90,auVar32);
        if ((char)uVar4 != (char)iVar6) goto LAB_140ab2e34;
      }
      in_ZMM7 = ZEXT3264(auVar36);
      in_ZMM5 = ZEXT3264(auVar37);
      dVar41 = auVar37._0_8_;
      dVar43 = auVar37._8_8_;
      dVar45 = auVar37._16_8_;
      dVar79 = auVar37._24_8_;
      auVar77._0_8_ = dVar41 + dVar41;
      auVar77._8_8_ = dVar43 + dVar43;
      auVar77._16_8_ = dVar45 + dVar45;
      auVar77._24_8_ = dVar79 + dVar79;
      auVar65 = vmovlhps_avx(auVar49,auVar63);
      auVar64 = vmovlhps_avx(auVar135,auVar137);
      dVar7 = auVar64._0_8_;
      auVar24._0_8_ = dVar7 * dVar41 * dVar41;
      dVar42 = auVar64._8_8_;
      auVar24._8_8_ = dVar42 * dVar43 * dVar43;
      dVar44 = auVar65._0_8_;
      auVar24._16_8_ = dVar44 * dVar45 * dVar45;
      dVar46 = auVar65._8_8_;
      auVar24._24_8_ = dVar46 * dVar79 * dVar79;
      auVar36 = vsubpd_avx(auVar77,auVar24);
      dVar41 = auVar36._0_8_;
      dVar43 = auVar36._8_8_;
      dVar45 = auVar36._16_8_;
      dVar79 = auVar36._24_8_;
      auVar25._0_8_ = dVar41 + dVar41;
      auVar25._8_8_ = dVar43 + dVar43;
      auVar25._16_8_ = dVar45 + dVar45;
      auVar25._24_8_ = dVar79 + dVar79;
      auVar66._0_8_ = dVar7 * dVar41 * dVar41;
      auVar66._8_8_ = dVar42 * dVar43 * dVar43;
      auVar66._16_8_ = dVar44 * dVar45 * dVar45;
      auVar66._24_8_ = dVar46 * dVar79 * dVar79;
      auVar37 = vsubpd_avx(auVar25,auVar66);
      auVar52._0_8_ =
           (ulonglong)dVar7 &
           ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar52._8_8_ = (ulonglong)dVar42 & _UNK_150aa8f48;
      auVar52._16_8_ = (ulonglong)dVar44 & _UNK_150aa8f50;
      auVar52._24_8_ = (ulonglong)dVar46 & _UNK_150aa8f58;
      auVar36 = vcmppd_avx(auVar52,
                           ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,2
                          );
      auVar65 = vpackssdw_avx(auVar36._0_16_,auVar36._16_16_);
      auVar64 = vpshufd_avx(auVar65,0x50);
      auVar65 = vpshufd_avx(auVar65,0xfa);
      auVar53._16_16_ = auVar65;
      auVar53._0_16_ = auVar64;
      auVar70 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar36 = vcmpps_avx(auVar70,auVar70,0xf);
      auVar36 = vblendvps_avx(auVar70,auVar36,auVar53);
      auVar10._0_8_ =
           (double)CONCAT44(~auVar36._4_4_ & auVar37._4_4_,~auVar36._0_4_ & auVar37._0_4_);
      auVar10._8_4_ = ~auVar36._8_4_ & auVar37._8_4_;
      auVar10._12_4_ = ~auVar36._12_4_ & auVar37._12_4_;
      auVar17._16_4_ = ~auVar36._16_4_ & auVar37._16_4_;
      auVar17._0_16_ = auVar10;
      auVar17._20_4_ = ~auVar36._20_4_ & auVar37._20_4_;
      auVar26._24_4_ = ~auVar36._24_4_ & auVar37._24_4_;
      auVar26._0_24_ = auVar17;
      auVar26._28_4_ = ~auVar36._28_4_ & auVar37._28_4_;
      pdVar3 = (double *)(param_1 + 0x40 + lVar5);
      pdVar1 = (double *)(param_1 + 0x50 + lVar5);
      dVar41 = pdVar3[1] * auVar10._8_8_ + _UNK_151c6afc8;
      dVar43 = *pdVar1 * auVar17._16_8_ + _UNK_151c6afd0;
      dVar45 = pdVar1[1] * auVar26._24_8_ + _UNK_151c6afd8;
      pdVar1 = (double *)(param_1 + 0x40 + lVar5);
      *pdVar1 = *pdVar3 * auVar10._0_8_ +
                ___ymm_8000000000000000bff0000000000000bff0000000000000bff0000000000000;
      pdVar1[1] = dVar41;
      pdVar3 = (double *)(param_1 + 0x50 + lVar5);
      *pdVar3 = dVar43;
      pdVar3[1] = dVar45;
      auVar11._0_8_ = dVar130 * dVar130 + dVar133 * dVar133;
      auVar11._8_8_ = dVar132 * dVar132 + dVar134 * dVar134;
      auVar65 = vshufpd_avx(auVar11,auVar11,1);
      dVar41 = auVar11._0_8_ + auVar65._0_8_;
      auVar48._8_8_ = 0;
      auVar48._0_8_ = __real_3e45798ee2308c3a;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar41;
      auVar65 = vcmpsd_avx(auVar48,auVar12,6);
      uVar47 = ~auVar65._0_8_ & __real_ffffffffffffffff;
      dVar41 = __real_3ff0000000000000 / SQRT(dVar41);
      uVar60 = ~uVar47 & _UNK_150b54548;
      uVar61 = ~uVar47 & _UNK_150b54550;
      uVar62 = ~uVar47 & _UNK_150b54558;
      *(ulonglong *)(param_1 + lVar5) =
           (ulonglong)(dVar130 * dVar41) & uVar47 |
           ~uVar47 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      ((ulonglong *)(param_1 + lVar5))[1] = (ulonglong)(dVar132 * dVar41) & uVar47 | uVar60;
      puVar2 = (ulonglong *)(param_1 + 0x10 + lVar5);
      *puVar2 = (ulonglong)(dVar133 * dVar41) & uVar47 | uVar61;
      puVar2[1] = (ulonglong)(dVar134 * dVar41) & uVar47 | uVar62;
      lVar5 = lVar5 + 0x60;
    } while ((ulonglong)param_3 * 0x60 != lVar5);
  }
  return;
}

// ConvertPoseToMeshRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_avx @ 140ab3690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToMeshRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_avx
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [16])

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
  double *pdVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 in_ZMM2 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  
  dVar14 = _UNK_150b54438;
  dVar13 = _UNK_150b54430;
  dVar12 = _UNK_150b54428;
  dVar11 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar10 = _UNK_150b54418;
  dVar9 = _UNK_150b54410;
  dVar8 = _UNK_150b54408;
  dVar7 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar6 = _UNK_15076c6f8;
  dVar5 = ___xmm_bff00000000000003ff0000000000000;
  auVar25 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
  auVar23 = vpcmpgtd_avx(param_4[1],auVar25);
  auVar25 = vpcmpgtd_avx(*param_4,auVar25);
  auVar25 = vpor_avx(auVar25,auVar23);
  if ((((SUB161(auVar25 >> 0x1f,0) & 1) == 0 && (SUB161(auVar25 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar25 >> 0x5f,0) & 1) == 0) && -1 < auVar25[0xf]) {
    if (1 < (int)param_3) {
      pdVar15 = (double *)(param_1 + 0x78);
      uVar16 = 1;
      do {
        lVar17 = (longlong)*(int *)(param_2 + uVar16 * 4) * 0x60;
        dVar1 = *(double *)(param_1 + 0x18 + lVar17);
        dVar2 = *(double *)(param_1 + lVar17);
        auVar25._8_8_ = 0;
        auVar25._0_8_ = *pdVar15;
        auVar25 = vmovhps_avx(auVar25,pdVar15[-1]);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = pdVar15[-2];
        auVar23 = vmovhps_avx(auVar23,pdVar15[-3]);
        dVar3 = *(double *)(param_1 + 8 + lVar17);
        dVar4 = *(double *)(param_1 + 0x10 + lVar17);
        auVar19._0_8_ =
             auVar23._0_8_ * dVar4 * dVar11 +
             pdVar15[-1] * dVar3 * dVar7 + auVar25._0_8_ * dVar2 * dVar5 + pdVar15[-3] * dVar1;
        auVar19._8_8_ =
             auVar23._8_8_ * dVar4 * dVar12 +
             *pdVar15 * dVar3 * dVar8 + auVar25._8_8_ * dVar2 * dVar6 + pdVar15[-2] * dVar1;
        auVar21._16_8_ =
             auVar25._0_8_ * dVar4 * dVar13 +
             pdVar15[-3] * dVar3 * dVar9 + auVar23._0_8_ * dVar2 * dVar5 + pdVar15[-1] * dVar1;
        auVar21._0_16_ = auVar19;
        auVar21._24_8_ =
             auVar25._8_8_ * dVar4 * dVar14 +
             pdVar15[-2] * dVar3 * dVar10 + auVar23._8_8_ * dVar2 * dVar6 + *pdVar15 * dVar1;
        dVar1 = (double)vmovlpd_avx(auVar19);
        pdVar15[-3] = dVar1;
        dVar1 = (double)vmovhpd_avx(auVar19);
        pdVar15[-2] = dVar1;
        dVar1 = (double)vmovlps_avx(auVar21._16_16_);
        pdVar15[-1] = dVar1;
        dVar1 = (double)vmovhps_avx(auVar21._16_16_);
        *pdVar15 = dVar1;
        uVar16 = uVar16 + 1;
        pdVar15 = pdVar15 + 0xc;
      } while (param_3 != uVar16);
    }
  }
  else if (1 < (int)param_3) {
    pdVar15 = (double *)(param_1 + 0x78);
    uVar16 = 1;
    do {
      lVar17 = (longlong)*(int *)(param_2 + uVar16 * 4) * 0x60;
      dVar1 = *(double *)(param_1 + 0x18 + lVar17);
      dVar2 = *(double *)(param_1 + lVar17);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = *pdVar15;
      auVar25 = vmovhps_avx(auVar24,pdVar15[-1]);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = pdVar15[-2];
      auVar23 = vmovhps_avx(auVar22,pdVar15[-3]);
      dVar3 = *(double *)(param_1 + 8 + lVar17);
      dVar4 = *(double *)(param_1 + 0x10 + lVar17);
      auVar18._0_8_ =
           auVar23._0_8_ * dVar4 * dVar11 +
           pdVar15[-1] * dVar3 * dVar7 + auVar25._0_8_ * dVar2 * dVar5 + pdVar15[-3] * dVar1;
      auVar18._8_8_ =
           auVar23._8_8_ * dVar4 * dVar12 +
           *pdVar15 * dVar3 * dVar8 + auVar25._8_8_ * dVar2 * dVar6 + pdVar15[-2] * dVar1;
      auVar20._16_8_ =
           auVar25._0_8_ * dVar4 * dVar13 +
           pdVar15[-3] * dVar3 * dVar9 + auVar23._0_8_ * dVar2 * dVar5 + pdVar15[-1] * dVar1;
      auVar20._0_16_ = auVar18;
      auVar20._24_8_ =
           auVar25._8_8_ * dVar4 * dVar14 +
           pdVar15[-2] * dVar3 * dVar10 + auVar23._8_8_ * dVar2 * dVar6 + *pdVar15 * dVar1;
      dVar1 = (double)vmovlpd_avx(auVar18);
      pdVar15[-3] = dVar1;
      dVar1 = (double)vmovhpd_avx(auVar18);
      pdVar15[-2] = dVar1;
      dVar1 = (double)vmovlps_avx(auVar20._16_16_);
      pdVar15[-1] = dVar1;
      dVar1 = (double)vmovhps_avx(auVar20._16_16_);
      *pdVar15 = dVar1;
      uVar16 = uVar16 + 1;
      pdVar15 = pdVar15 + 0xc;
    } while (param_3 != uVar16);
  }
  return;
}

// ConvertMeshRotationPoseToLocalSpace___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_avx @ 140ab38e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertMeshRotationPoseToLocalSpace___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_avx
               (longlong param_1,longlong param_2,int param_3,undefined1 (*param_4) [16])

{
  double *pdVar1;
  double *pdVar2;
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
  uint uVar18;
  ulonglong uVar19;
  double *pdVar20;
  longlong lVar21;
  undefined1 in_ZMM2 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  
  dVar17 = _UNK_150b54438;
  dVar16 = _UNK_150b54430;
  dVar15 = _UNK_150b54428;
  dVar14 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar13 = _UNK_150b54418;
  dVar12 = _UNK_150b54410;
  dVar11 = _UNK_150b54408;
  dVar10 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar9 = _UNK_150b543d8;
  dVar8 = _UNK_150b543d0;
  dVar7 = _UNK_150b543c8;
  dVar6 = ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
  dVar5 = _UNK_15076c6f8;
  dVar4 = ___xmm_bff00000000000003ff0000000000000;
  auVar31 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
  auVar33 = vpcmpgtd_avx(param_4[1],auVar31);
  auVar31 = vpcmpgtd_avx(*param_4,auVar31);
  auVar31 = vpor_avx(auVar31,auVar33);
  uVar18 = param_3 - 1;
  if ((((SUB161(auVar31 >> 0x1f,0) & 1) == 0 && (SUB161(auVar31 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar31 >> 0x5f,0) & 1) == 0) && -1 < auVar31[0xf]) {
    if (1 < param_3) {
      uVar19 = (ulonglong)uVar18 + 1;
      pdVar20 = (double *)((ulonglong)uVar18 * 0x60 + param_1 + 0x18);
      do {
        lVar21 = (longlong)*(int *)(param_2 + -4 + uVar19 * 4) * 0x60;
        pdVar1 = (double *)(param_1 + lVar21);
        pdVar2 = (double *)(param_1 + 0x10 + lVar21);
        auVar24._0_8_ = *pdVar1 * dVar6;
        auVar24._8_8_ = pdVar1[1] * dVar7;
        auVar28._16_8_ = *pdVar2 * dVar8;
        auVar28._0_16_ = auVar24;
        auVar28._24_8_ = pdVar2[1] * dVar9;
        auVar26 = vperm2f128_avx(auVar28,auVar28,0x11);
        auVar28 = vshufpd_avx(auVar26,auVar26,0xf);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = *pdVar20;
        auVar31 = vmovhps_avx(auVar31,pdVar20[-1]);
        auVar33._8_8_ = 0;
        auVar33._0_8_ = pdVar20[-2];
        auVar33 = vmovhps_avx(auVar33,pdVar20[-3]);
        auVar30 = vshufpd_avx(auVar24,auVar24,3);
        auVar25._0_8_ =
             auVar33._0_8_ * auVar26._0_8_ * dVar14 +
             pdVar20[-1] * auVar30._0_8_ * dVar10 +
             auVar31._0_8_ * auVar24._0_8_ * dVar4 + pdVar20[-3] * auVar28._0_8_;
        auVar25._8_8_ =
             auVar33._8_8_ * auVar26._0_8_ * dVar15 +
             *pdVar20 * auVar30._8_8_ * dVar11 +
             auVar31._8_8_ * auVar24._0_8_ * dVar5 + pdVar20[-2] * auVar28._8_8_;
        auVar29._16_8_ =
             auVar31._0_8_ * auVar26._16_8_ * dVar16 +
             pdVar20[-3] * auVar30._0_8_ * dVar12 +
             auVar33._0_8_ * auVar24._0_8_ * dVar4 + pdVar20[-1] * auVar28._16_8_;
        auVar29._0_16_ = auVar25;
        auVar29._24_8_ =
             auVar31._8_8_ * auVar26._16_8_ * dVar17 +
             pdVar20[-2] * auVar30._8_8_ * dVar13 +
             auVar33._8_8_ * auVar24._0_8_ * dVar5 + *pdVar20 * auVar28._24_8_;
        dVar3 = (double)vmovlpd_avx(auVar25);
        pdVar20[-3] = dVar3;
        dVar3 = (double)vmovhpd_avx(auVar25);
        pdVar20[-2] = dVar3;
        dVar3 = (double)vmovlps_avx(auVar29._16_16_);
        pdVar20[-1] = dVar3;
        dVar3 = (double)vmovhps_avx(auVar29._16_16_);
        *pdVar20 = dVar3;
        uVar19 = uVar19 - 1;
        pdVar20 = pdVar20 + -0xc;
      } while (1 < uVar19);
    }
  }
  else if (1 < param_3) {
    uVar19 = (ulonglong)uVar18 + 1;
    pdVar20 = (double *)((ulonglong)uVar18 * 0x60 + param_1 + 0x18);
    do {
      lVar21 = (longlong)*(int *)(param_2 + -4 + uVar19 * 4) * 0x60;
      pdVar1 = (double *)(param_1 + lVar21);
      pdVar2 = (double *)(param_1 + 0x10 + lVar21);
      auVar22._0_8_ = *pdVar1 * dVar6;
      auVar22._8_8_ = pdVar1[1] * dVar7;
      auVar26._16_8_ = *pdVar2 * dVar8;
      auVar26._0_16_ = auVar22;
      auVar26._24_8_ = pdVar2[1] * dVar9;
      auVar26 = vperm2f128_avx(auVar26,auVar26,0x11);
      auVar28 = vshufpd_avx(auVar26,auVar26,0xf);
      auVar30._8_8_ = 0;
      auVar30._0_8_ = *pdVar20;
      auVar31 = vmovhps_avx(auVar30,pdVar20[-1]);
      auVar32._8_8_ = 0;
      auVar32._0_8_ = pdVar20[-2];
      auVar33 = vmovhps_avx(auVar32,pdVar20[-3]);
      auVar30 = vshufpd_avx(auVar22,auVar22,3);
      auVar23._0_8_ =
           auVar33._0_8_ * auVar26._0_8_ * dVar14 +
           pdVar20[-1] * auVar30._0_8_ * dVar10 +
           auVar31._0_8_ * auVar22._0_8_ * dVar4 + pdVar20[-3] * auVar28._0_8_;
      auVar23._8_8_ =
           auVar33._8_8_ * auVar26._0_8_ * dVar15 +
           *pdVar20 * auVar30._8_8_ * dVar11 +
           auVar31._8_8_ * auVar22._0_8_ * dVar5 + pdVar20[-2] * auVar28._8_8_;
      auVar27._16_8_ =
           auVar31._0_8_ * auVar26._16_8_ * dVar16 +
           pdVar20[-3] * auVar30._0_8_ * dVar12 +
           auVar33._0_8_ * auVar22._0_8_ * dVar4 + pdVar20[-1] * auVar28._16_8_;
      auVar27._0_16_ = auVar23;
      auVar27._24_8_ =
           auVar31._8_8_ * auVar26._16_8_ * dVar17 +
           pdVar20[-2] * auVar30._8_8_ * dVar13 +
           auVar33._8_8_ * auVar22._0_8_ * dVar5 + *pdVar20 * auVar28._24_8_;
      dVar3 = (double)vmovlpd_avx(auVar23);
      pdVar20[-3] = dVar3;
      dVar3 = (double)vmovhpd_avx(auVar23);
      pdVar20[-2] = dVar3;
      dVar3 = (double)vmovlps_avx(auVar27._16_16_);
      pdVar20[-1] = dVar3;
      dVar3 = (double)vmovhps_avx(auVar27._16_16_);
      *pdVar20 = dVar3;
      uVar19 = uVar19 - 1;
      pdVar20 = pdVar20 + -0xc;
    } while (1 < uVar19);
  }
  return;
}

// AccumulateWithAdditiveScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_CunfCuni_avx @ 140ab3bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AccumulateWithAdditiveScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_CunfCuni_avx
               (longlong param_1,longlong param_2,float param_3,uint param_4,
               undefined1 (*param_5) [16])

{
  double *pdVar1;
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
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  longlong lVar36;
  double dVar37;
  undefined1 in_ZMM3 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  
  dVar35 = _UNK_150b54518;
  dVar34 = _UNK_150b54510;
  dVar33 = _UNK_150b54508;
  dVar32 = ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
  dVar31 = _UNK_150b54438;
  dVar30 = _UNK_150b54430;
  dVar29 = _UNK_150b54428;
  dVar28 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar27 = _UNK_150b54418;
  dVar26 = _UNK_150b54410;
  dVar25 = _UNK_150b54408;
  dVar24 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar23 = _UNK_15076c6f8;
  dVar22 = ___xmm_bff00000000000003ff0000000000000;
  auVar43 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
  auVar45 = vpcmpgtd_avx(param_5[1],auVar43);
  auVar43 = vpcmpgtd_avx(*param_5,auVar43);
  auVar43 = vpor_avx(auVar43,auVar45);
  if ((((SUB161(auVar43 >> 0x1f,0) & 1) == 0 && (SUB161(auVar43 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar43 >> 0x5f,0) & 1) == 0) && -1 < auVar43[0xf]) {
    if (0 < (int)param_4) {
      dVar37 = (double)param_3;
      lVar36 = 0;
      do {
        pdVar1 = (double *)(param_2 + 0x20 + lVar36);
        dVar6 = *pdVar1;
        dVar7 = pdVar1[1];
        pdVar1 = (double *)(param_2 + 0x40 + lVar36);
        dVar14 = *pdVar1;
        dVar15 = pdVar1[1];
        pdVar1 = (double *)(param_2 + 0x10 + lVar36);
        auVar39._0_8_ = dVar37 * *(double *)(param_2 + lVar36);
        auVar39._8_8_ = dVar37 * ((double *)(param_2 + lVar36))[1];
        auVar41._16_8_ = dVar37 * *pdVar1;
        auVar41._0_16_ = auVar39;
        auVar41._24_8_ = dVar37 * pdVar1[1];
        pdVar1 = (double *)(param_2 + 0x30 + lVar36);
        dVar8 = *pdVar1;
        dVar9 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x20 + lVar36);
        dVar10 = *pdVar1;
        dVar11 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x30 + lVar36);
        dVar12 = *pdVar1;
        dVar13 = pdVar1[1];
        pdVar1 = (double *)(param_2 + 0x50 + lVar36);
        dVar16 = *pdVar1;
        dVar17 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x40 + lVar36);
        dVar18 = *pdVar1;
        dVar19 = pdVar1[1];
        pdVar1 = (double *)(param_1 + 0x50 + lVar36);
        dVar20 = *pdVar1;
        dVar21 = pdVar1[1];
        auVar40 = vperm2f128_avx(auVar41,auVar41,0x11);
        auVar41 = vshufpd_avx(auVar40,auVar40,0xf);
        auVar43 = *(undefined1 (*) [16])(param_1 + 0x10 + lVar36);
        dVar2 = SUB168(*(undefined1 (*) [16])(param_1 + lVar36),0);
        dVar3 = SUB168(*(undefined1 (*) [16])(param_1 + lVar36),8);
        dVar4 = auVar43._0_8_;
        dVar5 = auVar43._8_8_;
        auVar43._8_8_ = 0;
        auVar43._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar36);
        auVar43 = vmovhps_avx(auVar43,*(undefined8 *)(param_1 + 0x10 + lVar36));
        auVar45._8_8_ = 0;
        auVar45._0_8_ = *(ulonglong *)(param_1 + 8 + lVar36);
        auVar45 = vmovhps_avx(auVar45,*(undefined8 *)(param_1 + lVar36));
        auVar42 = vshufpd_avx(auVar39,auVar39,3);
        *(double *)(param_1 + lVar36) =
             auVar40._0_8_ * auVar45._0_8_ * dVar28 +
             auVar41._0_8_ * dVar2 + auVar39._0_8_ * auVar43._0_8_ * dVar22 +
             dVar4 * auVar42._0_8_ * dVar24;
        ((double *)(param_1 + lVar36))[1] =
             auVar40._0_8_ * auVar45._8_8_ * dVar29 +
             auVar41._8_8_ * dVar3 + auVar39._0_8_ * auVar43._8_8_ * dVar23 +
             dVar5 * auVar42._8_8_ * dVar25;
        pdVar1 = (double *)(param_1 + 0x10 + lVar36);
        *pdVar1 = auVar40._16_8_ * auVar43._0_8_ * dVar30 +
                  auVar41._16_8_ * dVar4 + auVar39._0_8_ * auVar45._0_8_ * dVar22 +
                  dVar2 * auVar42._0_8_ * dVar26;
        pdVar1[1] = auVar40._16_8_ * auVar43._8_8_ * dVar31 +
                    auVar41._24_8_ * dVar5 + auVar39._0_8_ * auVar45._8_8_ * dVar23 +
                    dVar3 * auVar42._8_8_ * dVar27;
        pdVar1 = (double *)(param_1 + 0x20 + lVar36);
        *pdVar1 = dVar37 * dVar6 + dVar10;
        pdVar1[1] = dVar37 * dVar7 + dVar11;
        pdVar1 = (double *)(param_1 + 0x30 + lVar36);
        *pdVar1 = dVar37 * dVar8 + dVar12;
        pdVar1[1] = dVar37 * dVar9 + dVar13;
        pdVar1 = (double *)(param_1 + 0x40 + lVar36);
        *pdVar1 = dVar18 * (dVar14 * dVar37 + dVar32);
        pdVar1[1] = dVar19 * (dVar15 * dVar37 + dVar33);
        pdVar1 = (double *)(param_1 + 0x50 + lVar36);
        *pdVar1 = dVar20 * (dVar16 * dVar37 + dVar34);
        pdVar1[1] = dVar21 * (dVar17 * dVar37 + dVar35);
        lVar36 = lVar36 + 0x60;
      } while ((ulonglong)param_4 * 0x60 != lVar36);
    }
  }
  else if (0 < (int)param_4) {
    dVar37 = (double)param_3;
    lVar36 = 0;
    do {
      pdVar1 = (double *)(param_2 + 0x20 + lVar36);
      dVar6 = *pdVar1;
      dVar7 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x40 + lVar36);
      dVar14 = *pdVar1;
      dVar15 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x10 + lVar36);
      auVar38._0_8_ = dVar37 * *(double *)(param_2 + lVar36);
      auVar38._8_8_ = dVar37 * ((double *)(param_2 + lVar36))[1];
      auVar40._16_8_ = dVar37 * *pdVar1;
      auVar40._0_16_ = auVar38;
      auVar40._24_8_ = dVar37 * pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x30 + lVar36);
      dVar8 = *pdVar1;
      dVar9 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x20 + lVar36);
      dVar10 = *pdVar1;
      dVar11 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x30 + lVar36);
      dVar12 = *pdVar1;
      dVar13 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x50 + lVar36);
      dVar16 = *pdVar1;
      dVar17 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x40 + lVar36);
      dVar18 = *pdVar1;
      dVar19 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x50 + lVar36);
      dVar20 = *pdVar1;
      dVar21 = pdVar1[1];
      auVar40 = vperm2f128_avx(auVar40,auVar40,0x11);
      auVar41 = vshufpd_avx(auVar40,auVar40,0xf);
      auVar43 = *(undefined1 (*) [16])(param_1 + 0x10 + lVar36);
      dVar2 = SUB168(*(undefined1 (*) [16])(param_1 + lVar36),0);
      dVar3 = SUB168(*(undefined1 (*) [16])(param_1 + lVar36),8);
      dVar4 = auVar43._0_8_;
      dVar5 = auVar43._8_8_;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar36);
      auVar43 = vmovhps_avx(auVar42,*(undefined8 *)(param_1 + 0x10 + lVar36));
      auVar44._8_8_ = 0;
      auVar44._0_8_ = *(ulonglong *)(param_1 + 8 + lVar36);
      auVar45 = vmovhps_avx(auVar44,*(undefined8 *)(param_1 + lVar36));
      auVar42 = vshufpd_avx(auVar38,auVar38,3);
      *(double *)(param_1 + lVar36) =
           auVar40._0_8_ * auVar45._0_8_ * dVar28 +
           auVar41._0_8_ * dVar2 + auVar38._0_8_ * auVar43._0_8_ * dVar22 +
           dVar4 * auVar42._0_8_ * dVar24;
      ((double *)(param_1 + lVar36))[1] =
           auVar40._0_8_ * auVar45._8_8_ * dVar29 +
           auVar41._8_8_ * dVar3 + auVar38._0_8_ * auVar43._8_8_ * dVar23 +
           dVar5 * auVar42._8_8_ * dVar25;
      pdVar1 = (double *)(param_1 + 0x10 + lVar36);
      *pdVar1 = auVar40._16_8_ * auVar43._0_8_ * dVar30 +
                auVar41._16_8_ * dVar4 + auVar38._0_8_ * auVar45._0_8_ * dVar22 +
                dVar2 * auVar42._0_8_ * dVar26;
      pdVar1[1] = auVar40._16_8_ * auVar43._8_8_ * dVar31 +
                  auVar41._24_8_ * dVar5 + auVar38._0_8_ * auVar45._8_8_ * dVar23 +
                  dVar3 * auVar42._8_8_ * dVar27;
      pdVar1 = (double *)(param_1 + 0x20 + lVar36);
      *pdVar1 = dVar37 * dVar6 + dVar10;
      pdVar1[1] = dVar37 * dVar7 + dVar11;
      pdVar1 = (double *)(param_1 + 0x30 + lVar36);
      *pdVar1 = dVar37 * dVar8 + dVar12;
      pdVar1[1] = dVar37 * dVar9 + dVar13;
      pdVar1 = (double *)(param_1 + 0x40 + lVar36);
      *pdVar1 = dVar18 * (dVar14 * dVar37 + dVar32);
      pdVar1[1] = dVar19 * (dVar15 * dVar37 + dVar33);
      pdVar1 = (double *)(param_1 + 0x50 + lVar36);
      *pdVar1 = dVar20 * (dVar16 * dVar37 + dVar34);
      pdVar1[1] = dVar21 * (dVar17 * dVar37 + dVar35);
      lVar36 = lVar36 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar36);
  }
  return;
}

// BlendPosesPerBoneFilterScaleRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx @ 140ab3f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScaleRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,longlong param_10
               ,longlong param_11,longlong param_12,uint param_13,undefined1 (*param_14) [32])

{
  double *pdVar1;
  double *pdVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [24];
  int iVar14;
  ulonglong *puVar15;
  undefined4 uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  double dVar62;
  double dVar65;
  undefined1 auVar48 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  double dVar66;
  undefined1 auVar53 [32];
  undefined1 auVar39 [16];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar40 [16];
  undefined1 auVar64 [16];
  undefined1 auVar57 [32];
  undefined1 auVar41 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar42 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  double dVar63;
  undefined1 in_ZMM1 [64];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar82 [32];
  undefined8 uVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar108 [32];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [64];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined8 uVar136;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar142 [64];
  undefined1 auVar145 [16];
  undefined1 auVar149 [16];
  double dVar143;
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  double dVar144;
  double dVar164;
  double dVar166;
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  double dVar165;
  undefined1 auVar163 [64];
  undefined1 auVar167 [16];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar168 [16];
  undefined1 auVar172 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  double dVar182;
  undefined1 auVar181 [64];
  undefined1 auVar185 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [32];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar197 [32];
  undefined1 auVar198 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar199 [16];
  double dVar208;
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  double dVar209;
  undefined1 auVar205 [32];
  undefined1 auVar206 [32];
  undefined1 auVar207 [32];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [32];
  undefined1 auVar219 [16];
  undefined1 auVar214 [32];
  undefined1 auVar215 [32];
  undefined1 auVar216 [32];
  undefined1 auVar217 [32];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar224 [16];
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar229 [32];
  undefined1 auVar230 [32];
  undefined1 auVar231 [32];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  ulonglong local_438;
  ulonglong local_428;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  double dStack_3c8;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_398 [16];
  undefined1 local_378 [16];
  undefined1 local_358 [16];
  undefined1 auStack_348 [16];
  undefined1 local_338 [16];
  undefined1 local_318 [16];
  double dStack_308;
  double dStack_300;
  undefined1 local_2e8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_298 [32];
  undefined1 local_278 [16];
  undefined1 local_248 [16];
  undefined1 local_228 [16];
  undefined1 auStack_218 [16];
  undefined1 local_208 [32];
  undefined1 local_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 local_1b8 [32];
  undefined1 local_198 [16];
  float local_138;
  undefined1 local_128 [16];
  undefined1 local_108 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar34 [32];
  undefined1 auVar81 [32];
  undefined1 auVar99 [32];
  undefined1 auVar107 [32];
  undefined1 auVar132 [32];
  undefined1 auVar135 [32];
  undefined1 auVar141 [32];
  undefined1 auVar152 [32];
  undefined1 auVar160 [32];
  undefined1 auVar169 [32];
  undefined1 auVar173 [32];
  undefined1 auVar193 [32];
  undefined1 auVar196 [32];
  undefined1 auVar204 [32];
  undefined1 auVar218 [32];
  undefined1 auVar228 [32];
  
  auVar75 = *param_14;
  auVar146 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
  auVar40 = vpcmpgtd_avx(*(undefined1 (*) [16])(*param_14 + 0x10),auVar146);
  auVar146 = vpcmpgtd_avx(auVar75._0_16_,auVar146);
  auVar146 = vpor_avx(auVar146,auVar40);
  if ((((SUB161(auVar146 >> 0x1f,0) & 1) == 0 && (SUB161(auVar146 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar146 >> 0x5f,0) & 1) == 0) && -1 < auVar146[0xf]) {
    if (0 < (int)param_13) {
      lVar19 = 0;
      lVar20 = 0;
      iVar18 = 0;
      do {
        iVar14 = *(int *)(param_11 + lVar19 * 2);
        iVar7 = *(int *)(param_12 + lVar19);
        lVar21 = (longlong)iVar7;
        local_398._0_8_ = *(ulonglong *)(param_2 + lVar20 * 4);
        local_398._8_8_ = 0;
        local_3d8._8_8_ = 0;
        local_3d8._0_8_ = *(ulonglong *)(param_2 + 8 + lVar20 * 4);
        local_1e8._0_8_ = *(double *)(param_2 + 0x20 + lVar20 * 4);
        local_1e8._8_8_ = 0;
        local_4a8._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar20 * 4);
        local_4a8._8_8_ = 0;
        local_3e8._0_8_ = *(double *)(param_2 + 0x30 + lVar20 * 4);
        local_3e8._8_8_ = 0;
        local_3f8._0_8_ = *(ulonglong *)(param_2 + 0x38 + lVar20 * 4);
        local_3f8._8_8_ = 0;
        auVar227._0_8_ = *(double *)(param_2 + 0x40 + lVar20 * 4);
        local_338._8_8_ = 0;
        local_338._0_8_ = auVar227._0_8_;
        local_318._8_8_ = 0;
        local_318._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar20 * 4);
        auVar146._0_8_ = *(double *)(param_2 + 0x50 + lVar20 * 4);
        local_498._8_8_ = 0;
        local_498._0_8_ = auVar146._0_8_;
        auVar146 = local_498;
        local_418._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar20 * 4);
        local_418._8_8_ = 0;
        auVar126 = ZEXT864(*(ulonglong *)(param_2 + 0x18 + lVar20 * 4));
        auVar142 = ZEXT864(*(ulonglong *)(param_2 + 0x10 + lVar20 * 4));
        puVar15 = (ulonglong *)GetTransformFromArray(param_3,iVar14,iVar18);
        auVar130._0_8_ = *puVar15;
        auVar186._8_8_ = 0;
        auVar186._0_8_ = auVar130._0_8_;
        auVar129._8_8_ = 0;
        auVar129._0_8_ = puVar15[1];
        auVar103._0_8_ = puVar15[2];
        auVar72._8_8_ = 0;
        auVar72._0_8_ = auVar103._0_8_;
        uVar3 = puVar15[3];
        auVar40._8_8_ = 0;
        auVar40._0_8_ = uVar3;
        dVar35 = (double)puVar15[8];
        auVar64._8_8_ = 0;
        auVar64._0_8_ = dVar35;
        local_4b8._0_8_ = puVar15[9];
        local_4b8._8_8_ = 0;
        dVar62 = (double)puVar15[10];
        auVar26 = auVar126._0_16_;
        local_428 = auVar126._0_8_;
        auVar70 = auVar142._0_16_;
        local_438 = auVar142._0_8_;
        if (lVar21 == -1) {
          auVar105 = vmovlhps_avx(local_398,local_3d8);
          auVar41 = vmovlhps_avx(auVar70,auVar26);
          auVar200 = vmovlhps_avx(auVar26,auVar70);
          auVar73 = vmovlhps_avx(local_3d8,local_398);
          local_2e8._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar73._0_8_ * 0.0 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar41._0_8_ * 0.0 +
               auVar200._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar105._0_8_;
          local_2e8._8_8_ =
               _UNK_150b54428 * auVar73._8_8_ * 0.0 +
               _UNK_150b54408 * auVar41._8_8_ * 0.0 +
               auVar200._8_8_ * 0.0 * _UNK_15076c6f8 + auVar105._8_8_;
          auVar75._16_8_ =
               _UNK_150b54430 * auVar200._0_8_ * 0.0 +
               _UNK_150b54410 * auVar105._0_8_ * 0.0 +
               auVar73._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar41._0_8_;
          auVar75._0_16_ = local_2e8;
          auVar75._24_8_ =
               _UNK_150b54438 * auVar200._8_8_ * 0.0 +
               _UNK_150b54418 * auVar105._8_8_ * 0.0 +
               auVar73._8_8_ * 0.0 * _UNK_15076c6f8 + auVar41._8_8_;
          local_478 = vshufpd_avx(local_2e8,local_2e8,1);
          auVar87 = auVar75._16_16_;
          local_408 = vshufpd_avx(auVar87,auVar87,1);
          auVar105 = vunpcklpd_avx(auVar186,auVar129);
          auVar41 = vunpcklpd_avx(auVar72,auVar40);
          auVar200 = vunpcklpd_avx(auVar40,auVar72);
          auVar73 = vunpcklpd_avx(auVar129,auVar186);
          auVar187._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar73._0_8_ * 0.0 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar41._0_8_ * 0.0 +
               auVar105._0_8_ + auVar200._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
          auVar187._8_8_ =
               _UNK_150b54428 * auVar73._8_8_ * 0.0 +
               _UNK_150b54408 * auVar41._8_8_ * 0.0 +
               auVar105._8_8_ + auVar200._8_8_ * 0.0 * _UNK_15076c6f8;
          auVar197._16_8_ =
               _UNK_150b54430 * auVar200._0_8_ * 0.0 +
               _UNK_150b54410 * auVar105._0_8_ * 0.0 +
               auVar41._0_8_ + auVar73._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
          auVar197._0_16_ = auVar187;
          auVar197._24_8_ =
               _UNK_150b54438 * auVar200._8_8_ * 0.0 +
               _UNK_150b54418 * auVar105._8_8_ * 0.0 +
               auVar41._8_8_ + auVar73._8_8_ * 0.0 * _UNK_15076c6f8;
          auVar41 = vshufpd_avx(auVar187,auVar187,1);
          auVar73 = auVar197._16_16_;
          local_3b8 = vshufpd_avx(auVar73,auVar73,1);
          local_468 = local_318;
          auVar105 = local_4b8;
          local_378 = local_338;
          auVar200 = local_498;
          local_448 = auVar64;
          dVar63 = dVar62;
        }
        else {
          lVar17 = lVar21 * 0x20;
          dVar63 = *(double *)(param_4 + 0x18 + lVar17);
          auVar200 = vunpcklpd_avx(local_398,local_3d8);
          auVar105 = vmovlhps_avx(auVar70,auVar26);
          dVar65 = *(double *)(param_4 + lVar17);
          auVar41 = vmovlhps_avx(auVar26,auVar70);
          auVar73 = vunpcklpd_avx(local_3d8,local_398);
          dVar143 = *(double *)(param_4 + 8 + lVar17);
          dVar66 = *(double *)(param_4 + 0x10 + lVar17);
          local_2e8._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar73._0_8_ * dVar66 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               dVar143 * auVar105._0_8_ +
               auVar41._0_8_ * dVar65 * ___xmm_bff00000000000003ff0000000000000 +
               auVar200._0_8_ * dVar63;
          local_2e8._8_8_ =
               _UNK_150b54428 * auVar73._8_8_ * dVar66 +
               _UNK_150b54408 * dVar143 * auVar105._8_8_ +
               auVar41._8_8_ * dVar65 * _UNK_15076c6f8 + auVar200._8_8_ * dVar63;
          auVar74._16_8_ =
               _UNK_150b54430 * auVar41._0_8_ * dVar66 +
               _UNK_150b54410 * dVar143 * auVar200._0_8_ +
               auVar73._0_8_ * dVar65 * ___xmm_bff00000000000003ff0000000000000 +
               auVar105._0_8_ * dVar63;
          auVar74._0_16_ = local_2e8;
          auVar74._24_8_ =
               _UNK_150b54438 * auVar41._8_8_ * dVar66 +
               _UNK_150b54418 * dVar143 * auVar200._8_8_ +
               auVar73._8_8_ * dVar65 * _UNK_15076c6f8 + auVar105._8_8_ * dVar63;
          local_478 = vshufpd_avx(local_2e8,local_2e8,1);
          auVar87 = auVar74._16_16_;
          local_408 = vshufpd_avx(auVar87,auVar87,1);
          dVar63 = *(double *)(param_6 + 0x18 + lVar17);
          auVar105 = vunpcklpd_avx(auVar186,auVar129);
          auVar41 = vunpcklpd_avx(auVar72,auVar40);
          dVar65 = *(double *)(param_6 + lVar17);
          auVar200 = vunpcklpd_avx(auVar40,auVar72);
          auVar73 = vunpcklpd_avx(auVar129,auVar186);
          dVar143 = *(double *)(param_6 + 8 + lVar17);
          dVar66 = *(double *)(param_6 + 0x10 + lVar17);
          auVar187._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar73._0_8_ * dVar66 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               dVar143 * auVar41._0_8_ +
               auVar105._0_8_ * dVar63 +
               auVar200._0_8_ * dVar65 * ___xmm_bff00000000000003ff0000000000000;
          auVar187._8_8_ =
               _UNK_150b54428 * auVar73._8_8_ * dVar66 +
               _UNK_150b54408 * dVar143 * auVar41._8_8_ +
               auVar105._8_8_ * dVar63 + auVar200._8_8_ * dVar65 * _UNK_15076c6f8;
          auVar196._16_8_ =
               _UNK_150b54430 * auVar200._0_8_ * dVar66 +
               _UNK_150b54410 * dVar143 * auVar105._0_8_ +
               auVar41._0_8_ * dVar63 +
               auVar73._0_8_ * dVar65 * ___xmm_bff00000000000003ff0000000000000;
          auVar196._0_16_ = auVar187;
          auVar196._24_8_ =
               _UNK_150b54438 * auVar200._8_8_ * dVar66 +
               _UNK_150b54418 * dVar143 * auVar105._8_8_ +
               auVar41._8_8_ * dVar63 + auVar73._8_8_ * dVar65 * _UNK_15076c6f8;
          auVar41 = vshufpd_avx(auVar187,auVar187,1);
          auVar73 = auVar196._16_16_;
          lVar17 = lVar21 * 0x18;
          auVar105 = vunpcklpd_avx(local_338,local_318);
          local_378._0_8_ = auVar105._0_8_ * *(double *)(param_5 + lVar17);
          local_378._8_8_ = auVar105._8_8_ * ((double *)(param_5 + lVar17))[1];
          auVar200._8_8_ = 0;
          auVar200._0_8_ = auVar146._0_8_ * *(double *)(param_5 + 0x10 + lVar17);
          local_3b8 = vshufpd_avx(auVar73,auVar73,1);
          auVar105 = vunpcklpd_avx(auVar64,local_4b8);
          local_448._0_8_ = auVar105._0_8_ * *(double *)(param_7 + lVar17);
          local_448._8_8_ = auVar105._8_8_ * ((double *)(param_7 + lVar17))[1];
          local_468 = vshufpd_avx(local_378,local_378,1);
          auVar105 = vshufpd_avx(local_448,local_448,1);
          dVar63 = dVar62 * *(double *)(param_7 + 0x10 + lVar17);
        }
        dVar65 = auVar200._0_8_;
        uVar136 = local_378._0_8_;
        local_198._0_8_ = puVar15[4];
        local_278._0_8_ = puVar15[5];
        local_498._0_8_ = puVar15[6];
        local_498._8_8_ = 0;
        auVar91 = vmaxss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_11 + 4 + lVar19 * 2)));
        local_248._0_8_ = puVar15[7];
        local_248._8_8_ = 0;
        auVar10 = vminss_avx(auVar91,ZEXT416((uint)__real_3f800000));
        auVar91 = vmaxss_avx(auVar10,ZEXT416(*(uint *)(param_10 + (longlong)iVar14 * 4)));
        uVar4 = puVar15[0xb];
        auVar147._8_8_ = 0;
        auVar147._0_8_ = uVar4;
        *(int *)(param_10 + (longlong)iVar14 * 4) = auVar91._0_4_;
        fVar22 = auVar10._0_4_;
        local_208._0_8_ = auVar41._0_8_;
        uVar83 = auVar87._0_8_;
        if (fVar22 <= __real_3727c5ac) {
          local_358 = local_468;
          local_4b8 = local_478;
          local_488 = local_408;
          auVar26 = local_2e8;
          dVar35 = dVar65;
        }
        else {
          local_278._8_8_ = 0;
          local_198._8_8_ = 0;
          if (__real_3f7fff58 <= fVar22) {
            local_378 = local_448;
            local_358 = auVar105;
            local_3d8 = auVar129;
            local_318._8_8_ = 0;
            local_318._0_8_ = local_4b8._0_8_;
            local_488 = local_3b8;
            auVar26 = auVar187;
            auVar146._0_8_ = dVar62;
            auVar87 = auVar73;
            auVar227._0_8_ = dVar35;
            local_4b8 = auVar41;
            local_428 = uVar3;
            local_438 = auVar103._0_8_;
            local_418._0_8_ = uVar4;
            local_1e8._0_8_ = local_198._0_8_;
            local_4a8._0_8_ = local_278._0_8_;
            local_3e8._0_8_ = local_498._0_8_;
            local_3f8._0_8_ = local_248._0_8_;
            dVar35 = dVar63;
            local_398._0_8_ = auVar130._0_8_;
          }
          else {
            auVar87 = vunpcklpd_avx(auVar87,local_408);
            auVar91 = vunpcklpd_avx(local_2e8,local_478);
            auVar10 = vunpcklpd_avx(auVar73,local_3b8);
            auVar41 = vunpcklpd_avx(auVar187,auVar41);
            auVar89._0_8_ = auVar10._0_8_ * auVar87._0_8_ + auVar41._0_8_ * auVar91._0_8_;
            auVar89._8_8_ = auVar10._8_8_ * auVar87._8_8_ + auVar41._8_8_ * auVar91._8_8_;
            auVar103 = vshufpd_avx(auVar89,auVar89,1);
            auVar227._0_8_ = auVar103._0_8_ + auVar89._0_8_;
            auVar90._0_4_ = (float)auVar227._0_8_;
            auVar90._4_4_ = (int)((ulonglong)auVar227._0_8_ >> 0x20);
            auVar90._8_8_ = 0;
            auVar103 = vcmpss_avx(ZEXT816(0) << 0x40,auVar90,2);
            auVar69._0_4_ =
                 (uint)(__real_3f800000 - fVar22) ^ __xmm_80000000800000008000000080000000;
            auVar69._4_4_ = _UNK_150651574;
            auVar69._8_4_ = _UNK_150651578;
            auVar69._12_4_ = _UNK_15065157c;
            auVar103 = vblendvps_avx(auVar69,ZEXT416((uint)(__real_3f800000 - fVar22)),auVar103);
            auVar130 = vunpcklpd_avx(auVar70,auVar26);
            auVar26 = vunpcklpd_avx(local_398,local_3d8);
            auVar125._16_16_ = auVar130;
            auVar125._0_16_ = auVar26;
            auVar70 = vunpcklpd_avx(auVar72,auVar40);
            auVar186 = vunpcklpd_avx(auVar186,auVar129);
            auVar76._0_8_ = auVar26._0_8_ * auVar186._0_8_;
            auVar76._8_8_ = auVar26._8_8_ * auVar186._8_8_;
            auVar76._16_8_ = auVar130._0_8_ * auVar70._0_8_;
            auVar76._24_8_ = auVar130._8_8_ * auVar70._8_8_;
            auVar75 = vperm2f128_avx(auVar76,auVar76,1);
            auVar77._0_8_ = auVar76._0_8_ + auVar75._0_8_;
            auVar77._8_8_ = auVar76._8_8_ + auVar75._8_8_;
            auVar77._16_8_ = auVar76._16_8_ + auVar75._16_8_;
            auVar77._24_8_ = auVar76._24_8_ + auVar75._24_8_;
            auVar75 = vperm2f128_avx(auVar77,auVar77,1);
            auVar75 = vshufpd_avx(auVar77,auVar75,5);
            auVar78._0_8_ = auVar77._0_8_ + auVar75._0_8_;
            auVar78._8_8_ = auVar77._8_8_ + auVar75._8_8_;
            auVar78._16_8_ = auVar77._16_8_ + auVar75._16_8_;
            auVar78._24_8_ = auVar77._24_8_ + auVar75._24_8_;
            auVar72 = ZEXT816(0);
            auVar75 = vcmppd_avx(ZEXT1632(auVar72),auVar78,2);
            auVar40 = vpackssdw_avx(auVar75._0_16_,auVar75._16_16_);
            auVar129 = vpshufd_avx(auVar40,0x50);
            auVar40 = vpshufd_avx(auVar40,0xfa);
            auVar79._16_16_ = auVar40;
            auVar79._0_16_ = auVar129;
            auVar74 = ZEXT1632(auVar72);
            auVar75 = vcmpps_avx(ZEXT1632(auVar72),auVar74,0xf);
            auVar75 = vblendvps_avx(auVar74,auVar75,auVar79);
            auVar40 = vunpcklpd_avx(auVar146,local_418);
            auVar129 = vunpcklpd_avx(local_338,local_318);
            auVar93._16_16_ = auVar40;
            auVar93._0_16_ = auVar129;
            local_338._8_8_ = 0;
            local_338._0_8_ = dVar62;
            auVar146 = vmovlhps_avx(local_338,auVar147);
            auVar64 = vunpcklpd_avx(auVar64,local_4b8);
            auVar116._16_16_ = auVar146;
            auVar116._0_16_ = auVar64;
            auVar197 = vsubpd_avx(auVar116,auVar93);
            dVar66 = (double)fVar22;
            auVar138._0_8_ = auVar129._0_8_ + auVar197._0_8_ * dVar66;
            auVar138._8_8_ = auVar129._8_8_ + auVar197._8_8_ * dVar66;
            auVar141._16_8_ = auVar40._0_8_ + auVar197._16_8_ * dVar66;
            auVar141._0_16_ = auVar138;
            auVar141._24_8_ = auVar40._8_8_ + auVar197._24_8_ * dVar66;
            auVar146 = vunpcklpd_avx(local_3e8,local_3f8);
            auVar40 = vunpcklpd_avx(local_1e8,local_4a8);
            auVar94._16_16_ = auVar146;
            auVar94._0_16_ = auVar40;
            auVar129 = vunpcklpd_avx(local_498,local_248);
            auVar72 = vunpcklpd_avx(local_198,local_278);
            auVar64 = vshufpd_avx(auVar141._16_16_,auVar141._16_16_,1);
            auVar117._16_16_ = auVar129;
            auVar117._0_16_ = auVar72;
            local_318 = vshufpd_avx(auVar138,auVar138,1);
            auVar197 = vsubpd_avx(auVar117,auVar94);
            auVar201._0_8_ = auVar40._0_8_ + auVar197._0_8_ * dVar66;
            auVar201._8_8_ = auVar40._8_8_ + auVar197._8_8_ * dVar66;
            auVar204._16_8_ = auVar146._0_8_ + auVar197._16_8_ * dVar66;
            auVar204._0_16_ = auVar201;
            auVar204._24_8_ = auVar146._8_8_ + auVar197._24_8_ * dVar66;
            auVar197 = vsubpd_avx(auVar74,auVar125);
            auVar95._0_4_ = ~auVar75._0_4_ & auVar197._0_4_;
            auVar95._4_4_ = ~auVar75._4_4_ & auVar197._4_4_;
            auVar95._8_4_ = ~auVar75._8_4_ & auVar197._8_4_;
            auVar95._12_4_ = ~auVar75._12_4_ & auVar197._12_4_;
            auVar95._16_4_ = ~auVar75._16_4_ & auVar197._16_4_;
            auVar95._20_4_ = ~auVar75._20_4_ & auVar197._20_4_;
            auVar95._24_4_ = ~auVar75._24_4_ & auVar197._24_4_;
            auVar95._28_4_ = ~auVar75._28_4_ & auVar197._28_4_;
            auVar80._0_8_ = (ulonglong)auVar26._0_8_ & auVar75._0_8_;
            auVar80._8_8_ = (ulonglong)auVar26._8_8_ & auVar75._8_8_;
            auVar80._16_8_ = (ulonglong)auVar130._0_8_ & auVar75._16_8_;
            auVar80._24_8_ = (ulonglong)auVar130._8_8_ & auVar75._24_8_;
            auVar80 = auVar80 | auVar95;
            auVar129 = vshufpd_avx(auVar204._16_16_,auVar204._16_16_,1);
            auVar227._0_8_ = __real_3ff0000000000000 - dVar66;
            auVar146._0_8_ = auVar186._0_8_ * dVar66 + auVar227._0_8_ * auVar80._0_8_;
            dVar35 = auVar186._8_8_ * dVar66 + auVar227._0_8_ * auVar80._8_8_;
            dVar62 = auVar70._0_8_ * dVar66 + auVar227._0_8_ * auVar80._16_8_;
            dVar143 = auVar70._8_8_ * dVar66 + auVar227._0_8_ * auVar80._24_8_;
            auVar70._0_8_ = auVar146._0_8_ * auVar146._0_8_ + dVar62 * dVar62;
            auVar70._8_8_ = dVar35 * dVar35 + dVar143 * dVar143;
            auVar40 = vshufpd_avx(auVar70,auVar70,1);
            auVar227._0_8_ = auVar70._0_8_ + auVar40._0_8_;
            auVar71._8_8_ = 0;
            auVar71._0_8_ = auVar227._0_8_;
            auVar227._0_8_ = __real_3ff0000000000000 / SQRT(auVar227._0_8_);
            auVar148._8_8_ = 0;
            auVar148._0_8_ = __real_3e45798ee2308c3a;
            auVar40 = vcmpsd_avx(auVar148,auVar71,6);
            auVar130._0_8_ = ~auVar40._0_8_ & __real_ffffffffffffffff;
            auVar168._0_8_ = (ulonglong)(auVar146._0_8_ * auVar227._0_8_) & auVar130._0_8_;
            auVar168._8_8_ = (ulonglong)(dVar35 * auVar227._0_8_) & auVar130._0_8_;
            auVar173._16_8_ = (ulonglong)(dVar62 * auVar227._0_8_) & auVar130._0_8_;
            auVar173._0_16_ = auVar168;
            auVar173._24_8_ = (ulonglong)(dVar143 * auVar227._0_8_) & auVar130._0_8_;
            auVar57._0_8_ =
                 ~auVar130._0_8_ &
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
            auVar57._8_8_ = ~auVar130._0_8_ & _UNK_150b54548;
            auVar57._16_8_ = ~auVar130._0_8_ & _UNK_150b54550;
            auVar57._24_8_ = ~auVar130._0_8_ & _UNK_150b54558;
            auVar72 = auVar173._16_16_ | auVar57._16_16_;
            auVar70 = vshufpd_avx(auVar201,auVar201,1);
            auVar186 = vshufps_avx(auVar72,auVar72,0x4e);
            local_138 = auVar103._0_4_;
            auVar227._0_8_ = (double)local_138;
            auVar146._0_8_ = auVar41._0_8_ * dVar66 + auVar91._0_8_ * auVar227._0_8_;
            dVar35 = auVar41._8_8_ * dVar66 + auVar91._8_8_ * auVar227._0_8_;
            dVar62 = auVar10._0_8_ * dVar66 + auVar87._0_8_ * auVar227._0_8_;
            dVar143 = auVar10._8_8_ * dVar66 + auVar87._8_8_ * auVar227._0_8_;
            auVar41._0_8_ = auVar146._0_8_ * auVar146._0_8_ + dVar62 * dVar62;
            auVar41._8_8_ = dVar35 * dVar35 + dVar143 * dVar143;
            auVar40 = vshufpd_avx(auVar41,auVar41,1);
            auVar227._0_8_ = auVar41._0_8_ + auVar40._0_8_;
            auVar87._8_8_ = 0;
            auVar87._0_8_ = auVar227._0_8_;
            auVar227._0_8_ = __real_3ff0000000000000 / SQRT(auVar227._0_8_);
            auVar40 = vunpcklpd_avx(local_448,auVar105);
            auVar96._16_8_ = dVar63;
            auVar96._0_16_ = auVar40;
            auVar96._24_8_ = 0;
            auVar103 = vunpcklpd_avx(local_378,local_468);
            auVar118._16_16_ = auVar200;
            auVar118._0_16_ = auVar103;
            auVar75 = vsubpd_avx(auVar96,auVar118);
            local_3d8 = vshufps_avx(auVar168,auVar168,0x4e);
            auVar40 = vcmpsd_avx(auVar148,auVar87,6);
            auVar130._0_8_ = ~auVar40._0_8_ & __real_ffffffffffffffff;
            auVar26._0_8_ = (ulonglong)(auVar146._0_8_ * auVar227._0_8_) & auVar130._0_8_;
            auVar26._8_8_ = (ulonglong)(dVar35 * auVar227._0_8_) & auVar130._0_8_;
            auVar34._16_8_ = (ulonglong)(dVar62 * auVar227._0_8_) & auVar130._0_8_;
            auVar34._0_16_ = auVar26;
            auVar34._24_8_ = (ulonglong)(dVar143 * auVar227._0_8_) & auVar130._0_8_;
            auVar58._0_8_ =
                 ~auVar130._0_8_ &
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
            auVar58._8_8_ = ~auVar130._0_8_ & _UNK_150b54548;
            auVar58._16_8_ = ~auVar130._0_8_ & _UNK_150b54550;
            auVar58._24_8_ = ~auVar130._0_8_ & _UNK_150b54558;
            auVar87 = auVar34._16_16_ | auVar58._16_16_;
            local_378._0_8_ = auVar103._0_8_ + auVar75._0_8_ * dVar66;
            local_378._8_8_ = auVar103._8_8_ + auVar75._8_8_ * dVar66;
            local_4b8 = vshufps_avx(auVar26,auVar26,0x4e);
            local_488 = vshufps_avx(auVar87,auVar87,0x4e);
            local_358 = vshufpd_avx(local_378,local_378,1);
            auVar146._0_8_ = auVar141._16_8_;
            auVar227._0_8_ = auVar138._0_8_;
            local_428 = auVar186._0_8_;
            local_438 = auVar72._0_8_;
            local_418._0_8_ = auVar64._0_8_;
            local_1e8._0_8_ = auVar201._0_8_;
            local_4a8._0_8_ = auVar70._0_8_;
            local_3e8._0_8_ = auVar204._16_8_;
            local_3f8._0_8_ = auVar129._0_8_;
            dVar35 = dVar65 + auVar75._16_8_ * dVar66;
            local_398._0_8_ = auVar168._0_8_;
          }
        }
        *(undefined8 *)(param_4 + lVar19 * 8) = local_2e8._0_8_;
        *(undefined8 *)(param_4 + 8 + lVar19 * 8) = local_478._0_8_;
        *(undefined8 *)(param_4 + 0x10 + lVar19 * 8) = uVar83;
        *(longlong *)(param_4 + 0x18 + lVar19 * 8) = local_408._0_8_;
        local_228._0_8_ = auVar187._0_8_;
        *(undefined8 *)(param_6 + lVar19 * 8) = local_228._0_8_;
        *(undefined8 *)(param_6 + 8 + lVar19 * 8) = local_208._0_8_;
        *(longlong *)(param_6 + 0x10 + lVar19 * 8) = auVar73._0_8_;
        *(undefined8 *)(param_6 + 0x18 + lVar19 * 8) = local_3b8._0_8_;
        *(undefined8 *)(param_5 + lVar20) = uVar136;
        *(undefined8 *)(param_5 + 8 + lVar20) = local_468._0_8_;
        *(double *)(param_5 + 0x10 + lVar20) = dVar65;
        *(undefined8 *)(param_7 + lVar20) = local_448._0_8_;
        *(longlong *)(param_7 + 8 + lVar20) = auVar105._0_8_;
        *(double *)(param_7 + 0x10 + lVar20) = dVar63;
        if (iVar7 == -1) {
          uVar83 = local_318._0_8_;
          auVar130._0_8_ = local_398._0_8_;
        }
        else {
          pdVar1 = (double *)(param_8 + lVar21 * 0x20);
          pdVar2 = (double *)(param_8 + 0x10 + lVar21 * 0x20);
          auVar73._0_8_ =
               *pdVar1 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
          auVar73._8_8_ = pdVar1[1] * _UNK_150b543c8;
          auVar81._16_8_ = *pdVar2 * _UNK_150b543d0;
          auVar81._0_16_ = auVar73;
          auVar81._24_8_ = pdVar2[1] * _UNK_150b543d8;
          auVar197 = vperm2f128_avx(auVar81,auVar81,0x11);
          auVar186 = vunpcklpd_avx(auVar26,local_4b8);
          auVar72 = vunpcklpd_avx(auVar87,local_488);
          auVar105 = vunpcklpd_avx(local_488,auVar87);
          auVar41 = vunpcklpd_avx(local_4b8,auVar26);
          auVar70 = vshufpd_avx(auVar73,auVar73,3);
          auVar227._0_8_ = *(double *)(param_9 + 0x10 + lVar21 * 0x18);
          auVar146 = *(undefined1 (*) [16])(param_9 + lVar21 * 0x18);
          auVar205._16_8_ = auVar227._0_8_;
          auVar205._0_16_ = auVar146;
          auVar205._24_8_ = 0;
          auVar216._0_8_ =
               (ulonglong)auVar146._0_8_ &
               ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
          dVar62 = auVar146._8_8_;
          auVar216._8_8_ = (ulonglong)dVar62 & _UNK_150aa8f48;
          auVar216._16_8_ = (ulonglong)auVar227._0_8_ & _UNK_150aa8f50;
          auVar216._24_8_ = 0;
          auVar59._8_8_ = __real_3e45798ee2308c3a;
          auVar59._0_8_ = __real_3e45798ee2308c3a;
          auVar59._16_8_ = __real_3e45798ee2308c3a;
          auVar59._24_8_ = __real_3e45798ee2308c3a;
          auVar75 = vcmppd_avx(auVar216,auVar59,2);
          auVar40 = vpackssdw_avx(auVar75._0_16_,auVar75._16_16_);
          auVar130 = vpcmpeqd_avx(local_408,local_408);
          auVar75 = vcmppd_avx(auVar205,
                               ___ymm_46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c
                               ,2);
          auVar103 = vpackssdw_avx(auVar75._0_16_,auVar75._16_16_);
          auVar174._8_8_ = __real_3914c4e977ba1f5c;
          auVar174._0_8_ = __real_3914c4e977ba1f5c;
          auVar174._16_8_ = __real_3914c4e977ba1f5c;
          auVar174._24_8_ = __real_3914c4e977ba1f5c;
          auVar75 = vcmppd_avx(auVar174,auVar205,2);
          auVar64 = vpackssdw_avx(auVar75._0_16_,auVar75._16_16_);
          auVar129 = vpand_avx(auVar103,auVar64);
          iVar14 = vmovmskps_avx(ZEXT1632(CONCAT412(~auVar40._12_4_ & auVar129._12_4_,
                                                    CONCAT48(~auVar40._8_4_ & auVar129._8_4_,
                                                             CONCAT44(~auVar40._4_4_ &
                                                                      auVar129._4_4_,
                                                                      ~auVar40._0_4_ &
                                                                      auVar129._0_4_)))));
          local_3d8._0_8_ =
               auVar105._0_8_ * auVar73._0_8_ *
               ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
          local_3d8._8_8_ = auVar105._8_8_ * auVar73._0_8_ * _UNK_150b543e8;
          dStack_3c8 = auVar41._0_8_ * auVar73._0_8_ * _UNK_150b543f0;
          dStack_3c0 = auVar41._8_8_ * auVar73._0_8_ * _UNK_150b543f8;
          local_318._0_8_ =
               auVar72._0_8_ * auVar70._0_8_ *
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
          local_318._8_8_ = auVar72._8_8_ * auVar70._8_8_ * _UNK_150b54408;
          dStack_308 = auVar186._0_8_ * auVar70._0_8_ * _UNK_150b54410;
          dStack_300 = auVar186._8_8_ * auVar70._8_8_ * _UNK_150b54418;
          if (iVar14 == 0) {
            auVar217 = ZEXT832(0) << 0x40;
            auVar103 = ZEXT416(0) << 0x20;
LAB_140ab628e:
            auVar75 = vcmpps_avx(ZEXT1632(auVar103),ZEXT1632(auVar103),0xf);
            auVar212._0_8_ = auVar217._0_8_ ^ auVar75._0_8_;
            auVar212._8_8_ = auVar217._8_8_ ^ auVar75._8_8_;
            auVar218._16_8_ = auVar217._16_8_ ^ auVar75._16_8_;
            auVar218._0_16_ = auVar212;
            auVar218._24_8_ = auVar217._24_8_ ^ auVar75._24_8_;
            auVar10._4_4_ = auVar103._12_4_ & (uint)(__real_7fe0000000000000 >> 0x20);
            auVar10._0_4_ = auVar103._8_4_ & (uint)__real_7fe0000000000000;
            auVar10._8_8_ = 0;
            auVar221._0_8_ = (ulonglong)auVar146._0_8_ & __real_7fe0000000000000;
            auVar221._8_8_ = (ulonglong)dVar62 & __real_7fe0000000000000;
            auVar224._0_8_ = (ulonglong)auVar227._0_8_ & __real_7fe0000000000000;
            auVar224._8_8_ = 0;
            auVar42._8_8_ = __real_7fcfffffffffffff;
            auVar42._0_8_ = __real_7fcfffffffffffff;
            auVar129 = vpsubq_avx(auVar42,auVar224);
            auVar130 = vpsubq_avx(auVar42,auVar221);
            auVar70 = vpsubq_avx(auVar42,ZEXT1216((undefined1  [12])0x0));
            auVar200 = vpsubq_avx(auVar42,auVar10 << 0x40);
            auVar230._0_8_ = auVar146._0_8_ * auVar130._0_8_;
            auVar230._8_8_ = dVar62 * auVar130._8_8_;
            auVar230._16_8_ = auVar227._0_8_ * auVar129._0_8_;
            auVar230._24_8_ = auVar129._8_8_ * 0.0;
            auVar64 = vcvtpd2ps_avx(auVar230);
            auVar157._0_8_ = auVar200._0_8_ * 0.0;
            dVar182 = auVar103._8_8_;
            auVar157._8_8_ = dVar182 * auVar200._8_8_;
            auVar157._16_8_ = auVar70._0_8_ * 0.0;
            auVar157._24_8_ = auVar70._8_8_ * 0.0;
            auVar103 = vcvtpd2ps_avx(auVar157);
            auVar158._16_16_ = auVar103;
            auVar158._0_16_ = auVar64;
            auVar75 = vrcpps_avx(auVar158);
            auVar159._0_4_ = auVar75._0_4_ * auVar64._0_4_;
            auVar159._4_4_ = auVar75._4_4_ * auVar64._4_4_;
            auVar159._8_4_ = auVar75._8_4_ * auVar64._8_4_;
            auVar159._12_4_ = auVar75._12_4_ * auVar64._12_4_;
            auVar159._16_4_ = auVar75._16_4_ * auVar103._0_4_;
            auVar159._20_4_ = auVar75._20_4_ * auVar103._4_4_;
            auVar159._24_4_ = auVar75._24_4_ * auVar103._8_4_;
            auVar159._28_4_ = auVar75._28_4_ * auVar103._12_4_;
            auVar60._4_4_ = __real_40000000;
            auVar60._0_4_ = __real_40000000;
            auVar60._8_4_ = __real_40000000;
            auVar60._12_4_ = __real_40000000;
            auVar60._16_4_ = __real_40000000;
            auVar60._20_4_ = __real_40000000;
            auVar60._24_4_ = __real_40000000;
            auVar60._28_4_ = __real_40000000;
            auVar74 = vsubps_avx(auVar60,auVar159);
            auVar149._0_4_ = auVar75._0_4_ * auVar74._0_4_;
            auVar149._4_4_ = auVar75._4_4_ * auVar74._4_4_;
            auVar149._8_4_ = auVar75._8_4_ * auVar74._8_4_;
            auVar149._12_4_ = auVar75._12_4_ * auVar74._12_4_;
            auVar160._16_4_ = auVar75._16_4_ * auVar74._16_4_;
            auVar160._0_16_ = auVar149;
            auVar160._20_4_ = auVar75._20_4_ * auVar74._20_4_;
            auVar160._24_4_ = auVar75._24_4_ * auVar74._24_4_;
            auVar160._28_4_ = auVar75._28_4_ * auVar74._28_4_;
            auVar75 = vcvtps2pd_avx(auVar149);
            auVar74 = vcvtps2pd_avx(auVar160._16_16_);
            dVar63 = auVar74._0_8_ * auVar200._0_8_;
            dVar65 = auVar74._8_8_ * auVar200._8_8_;
            dVar143 = auVar74._16_8_ * auVar70._0_8_;
            dVar66 = auVar74._24_8_ * auVar70._8_8_;
            dVar144 = auVar130._0_8_ * auVar75._0_8_;
            dVar164 = auVar130._8_8_ * auVar75._8_8_;
            dVar165 = auVar129._0_8_ * auVar75._16_8_;
            dVar166 = auVar129._8_8_ * auVar75._24_8_;
            auVar222._0_8_ = auVar146._0_8_ * dVar144;
            auVar222._8_8_ = dVar62 * dVar164;
            auVar222._16_8_ = auVar227._0_8_ * dVar165;
            auVar222._24_8_ = dVar166 * 0.0;
            auVar231._0_8_ = dVar63 * 0.0;
            auVar231._8_8_ = dVar182 * dVar65;
            auVar231._16_8_ = dVar143 * 0.0;
            auVar231._24_8_ = dVar66 * 0.0;
            auVar61._8_8_ = __real_4000000000000000;
            auVar61._0_8_ = __real_4000000000000000;
            auVar61._16_8_ = __real_4000000000000000;
            auVar61._24_8_ = __real_4000000000000000;
            auVar75 = vsubpd_avx(auVar61,auVar231);
            auVar74 = vsubpd_avx(auVar61,auVar222);
            dVar144 = dVar144 * auVar74._0_8_;
            dVar164 = dVar164 * auVar74._8_8_;
            dVar165 = dVar165 * auVar74._16_8_;
            dVar166 = dVar166 * auVar74._24_8_;
            dVar63 = auVar75._0_8_ * dVar63;
            dVar65 = auVar75._8_8_ * dVar65;
            dVar143 = auVar75._16_8_ * dVar143;
            dVar66 = auVar75._24_8_ * dVar66;
            auVar223._0_8_ = dVar63 * 0.0;
            auVar223._8_8_ = dVar182 * dVar65;
            auVar223._16_8_ = dVar143 * 0.0;
            auVar223._24_8_ = dVar66 * 0.0;
            auVar206._0_8_ = auVar146._0_8_ * dVar144;
            auVar206._8_8_ = dVar62 * dVar164;
            auVar206._16_8_ = auVar227._0_8_ * dVar165;
            auVar206._24_8_ = dVar166 * 0.0;
            auVar75 = vsubpd_avx(auVar61,auVar206);
            auVar74 = vsubpd_avx(auVar61,auVar223);
            auVar101._0_8_ = auVar74._0_8_ * dVar63;
            auVar101._8_8_ = auVar74._8_8_ * dVar65;
            auVar101._16_8_ = auVar74._16_8_ * dVar143;
            auVar101._24_8_ = auVar74._24_8_ * dVar66;
            auVar161._0_8_ = dVar144 * auVar75._0_8_;
            auVar161._8_8_ = dVar164 * auVar75._8_8_;
            auVar161._16_8_ = dVar165 * auVar75._16_8_;
            auVar161._24_8_ = dVar166 * auVar75._24_8_;
            auVar146 = vshufps_avx(auVar212,auVar212,0x50);
            auVar103 = vshufps_avx(auVar212,auVar212,0xfa);
            auVar207._16_16_ = auVar103;
            auVar207._0_16_ = auVar146;
            local_298 = vblendvps_avx(local_298,auVar161,auVar207);
            auVar103 = auVar218._16_16_;
            auVar146 = vshufps_avx(auVar103,auVar103,0x50);
            auVar103 = vshufps_avx(auVar103,auVar103,0xfa);
            auVar162._16_16_ = auVar103;
            auVar162._0_16_ = auVar146;
            local_1b8 = vblendvps_avx(local_1b8,auVar101,auVar162);
            auVar64 = ZEXT816(0) << 0x20;
          }
          else {
            auVar103 = vpackssdw_avx(auVar103,auVar130);
            auVar64 = vpackssdw_avx(auVar64,(undefined1  [16])0x0);
            auVar129 = vpand_avx(auVar64,auVar103);
            auVar103 = vcvtpd2ps_avx(auVar205);
            auVar64 = vcvtpd2ps_avx(ZEXT832(0) << 0x40);
            auVar97._16_16_ = auVar64;
            auVar97._0_16_ = auVar103;
            auVar75 = vrcpps_avx(auVar97);
            auVar130 = vpmovsxwd_avx(auVar129);
            auVar98._0_4_ = auVar75._0_4_ * auVar103._0_4_;
            auVar98._4_4_ = auVar75._4_4_ * auVar103._4_4_;
            auVar98._8_4_ = auVar75._8_4_ * auVar103._8_4_;
            auVar98._12_4_ = auVar75._12_4_ * auVar103._12_4_;
            auVar98._16_4_ = auVar75._16_4_ * auVar64._0_4_;
            auVar98._20_4_ = auVar75._20_4_ * auVar64._4_4_;
            auVar98._24_4_ = auVar75._24_4_ * auVar64._8_4_;
            auVar98._28_4_ = auVar75._28_4_ * auVar64._12_4_;
            auVar175._4_4_ = __real_40000000;
            auVar175._0_4_ = __real_40000000;
            auVar175._8_4_ = __real_40000000;
            auVar175._12_4_ = __real_40000000;
            auVar175._16_4_ = __real_40000000;
            auVar175._20_4_ = __real_40000000;
            auVar175._24_4_ = __real_40000000;
            auVar175._28_4_ = __real_40000000;
            auVar74 = vsubps_avx(auVar175,auVar98);
            auVar91._0_4_ = auVar75._0_4_ * auVar74._0_4_;
            auVar91._4_4_ = auVar75._4_4_ * auVar74._4_4_;
            auVar91._8_4_ = auVar75._8_4_ * auVar74._8_4_;
            auVar91._12_4_ = auVar75._12_4_ * auVar74._12_4_;
            auVar99._16_4_ = auVar75._16_4_ * auVar74._16_4_;
            auVar99._0_16_ = auVar91;
            auVar99._20_4_ = auVar75._20_4_ * auVar74._20_4_;
            auVar99._24_4_ = auVar75._24_4_ * auVar74._24_4_;
            auVar99._28_4_ = auVar75._28_4_ * auVar74._28_4_;
            auVar75 = vcvtps2pd_avx(auVar91);
            auVar176._0_8_ = auVar146._0_8_ * auVar75._0_8_;
            auVar176._8_8_ = dVar62 * auVar75._8_8_;
            auVar176._16_8_ = auVar227._0_8_ * auVar75._16_8_;
            auVar176._24_8_ = auVar75._24_8_ * 0.0;
            auVar134._8_8_ = __real_4000000000000000;
            auVar134._0_8_ = __real_4000000000000000;
            auVar134._16_8_ = __real_4000000000000000;
            auVar134._24_8_ = __real_4000000000000000;
            auVar74 = vsubpd_avx(auVar134,auVar176);
            dVar63 = auVar74._0_8_ * auVar75._0_8_;
            dVar65 = auVar74._8_8_ * auVar75._8_8_;
            dVar143 = auVar74._16_8_ * auVar75._16_8_;
            dVar66 = auVar74._24_8_ * auVar75._24_8_;
            auVar177._0_8_ = auVar146._0_8_ * dVar63;
            auVar177._8_8_ = dVar62 * dVar65;
            auVar177._16_8_ = auVar227._0_8_ * dVar143;
            auVar177._24_8_ = dVar66 * 0.0;
            auVar75 = vsubpd_avx(auVar134,auVar177);
            auVar155._0_8_ = dVar63 * auVar75._0_8_;
            auVar155._8_8_ = dVar65 * auVar75._8_8_;
            auVar155._16_8_ = dVar143 * auVar75._16_8_;
            auVar155._24_8_ = dVar66 * auVar75._24_8_;
            auVar103 = vpmovsxwq_avx(auVar129);
            auVar64 = vpshufd_avx(auVar130,0xfa);
            auVar178._16_16_ = auVar64;
            auVar178._0_16_ = auVar103;
            auVar75 = vcvtps2pd_avx(auVar99._16_16_);
            local_298 = vblendvps_avx(local_298,auVar155,auVar178);
            auVar64 = vpunpckhwd_avx(auVar129,auVar129);
            auVar179._0_8_ = auVar75._0_8_ * 0.0;
            auVar179._8_8_ = auVar75._8_8_ * 0.0;
            auVar179._16_8_ = auVar75._16_8_ * 0.0;
            auVar179._24_8_ = auVar75._24_8_ * 0.0;
            auVar74 = vsubpd_avx(auVar134,auVar179);
            dVar63 = auVar74._0_8_ * auVar75._0_8_;
            dVar65 = auVar74._8_8_ * auVar75._8_8_;
            dVar143 = auVar74._16_8_ * auVar75._16_8_;
            dVar66 = auVar74._24_8_ * auVar75._24_8_;
            auVar180._0_8_ = dVar63 * 0.0;
            auVar180._8_8_ = dVar65 * 0.0;
            auVar180._16_8_ = dVar143 * 0.0;
            auVar180._24_8_ = dVar66 * 0.0;
            auVar75 = vsubpd_avx(auVar134,auVar180);
            auVar100._0_8_ = auVar75._0_8_ * dVar63;
            auVar100._8_8_ = auVar75._8_8_ * dVar65;
            auVar100._16_8_ = auVar75._16_8_ * dVar143;
            auVar100._24_8_ = auVar75._24_8_ * dVar66;
            auVar103 = vpshufd_avx(auVar64,0x50);
            auVar64 = vpshufd_avx(auVar64,0xfa);
            auVar156._16_16_ = auVar64;
            auVar156._0_16_ = auVar103;
            local_1b8 = vblendvps_avx(local_1b8,auVar100,auVar156);
            auVar75 = vcmppd_avx(auVar216,auVar59,6);
            auVar103 = vpackssdw_avx(auVar75._0_16_,auVar75._16_16_);
            auVar64 = vpackssdw_avx(auVar103,___xmm_00000000000000000000000000000000);
            auVar103 = vpacksswb_avx(auVar64,auVar64);
            if ((byte)(SUB161(auVar103 >> 7,0) & 1 | (SUB161(auVar103 >> 0xf,0) & 1) << 1 |
                       (SUB161(auVar103 >> 0x17,0) & 1) << 2 | (SUB161(auVar103 >> 0x1f,0) & 1) << 3
                       | (SUB161(auVar103 >> 0x27,0) & 1) << 4 |
                       (SUB161(auVar103 >> 0x2f,0) & 1) << 5 | (SUB161(auVar103 >> 0x37,0) & 1) << 6
                      | SUB161(auVar103 >> 0x3f,0) << 7) != (byte)iVar14) {
              auVar103 = vpand_avx(auVar129,auVar64);
              auVar64 = vpmovsxwd_avx(auVar103);
              auVar103 = vpunpckhwd_avx(auVar103,auVar103);
              auVar217._16_16_ = auVar103;
              auVar217._0_16_ = auVar64;
              auVar103 = (undefined1  [16])0x0;
              goto LAB_140ab628e;
            }
            auVar64 = (undefined1  [16])0x0;
          }
          auVar75 = vshufpd_avx(auVar197,auVar197,0xf);
          auVar146._0_8_ =
               auVar41._0_8_ * auVar197._0_8_ *
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
               auVar186._0_8_ * auVar75._0_8_ + (double)local_3d8._0_8_ + (double)local_318._0_8_;
          dVar62 = auVar41._8_8_ * auVar197._0_8_ * _UNK_150b54428 +
                   auVar186._8_8_ * auVar75._8_8_ + (double)local_3d8._8_8_ +
                   (double)local_318._8_8_;
          dVar63 = auVar105._0_8_ * auVar197._16_8_ * _UNK_150b54430 +
                   auVar72._0_8_ * auVar75._16_8_ + dStack_3c8 + dStack_308;
          dVar65 = auVar105._8_8_ * auVar197._16_8_ * _UNK_150b54438 +
                   auVar72._8_8_ * auVar75._24_8_ + dStack_3c0 + dStack_300;
          auVar105._0_8_ = auVar146._0_8_ * auVar146._0_8_ + dVar63 * dVar63;
          auVar105._8_8_ = dVar62 * dVar62 + dVar65 * dVar65;
          auVar103 = vshufpd_avx(auVar105,auVar105,1);
          auVar227._0_8_ = auVar105._0_8_ + auVar103._0_8_;
          auVar121._8_8_ = 0;
          auVar121._0_8_ = __real_3e45798ee2308c3a;
          auVar106._8_8_ = 0;
          auVar106._0_8_ = auVar227._0_8_;
          auVar103 = vcmpsd_avx(auVar121,auVar106,6);
          auVar103._0_8_ = ~auVar103._0_8_ & __real_ffffffffffffffff;
          auVar227._0_8_ = __real_3ff0000000000000 / SQRT(auVar227._0_8_);
          auVar130._0_8_ = (ulonglong)(auVar146._0_8_ * auVar227._0_8_) & auVar103._0_8_;
          auVar130._8_8_ = (ulonglong)(dVar62 * auVar227._0_8_) & auVar103._0_8_;
          auVar135._16_8_ = (ulonglong)(dVar63 * auVar227._0_8_) & auVar103._0_8_;
          auVar135._0_16_ = auVar130;
          auVar135._24_8_ = (ulonglong)(dVar65 * auVar227._0_8_) & auVar103._0_8_;
          auVar102._0_8_ =
               ~auVar103._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar102._8_8_ = ~auVar103._0_8_ & _UNK_150b54548;
          auVar102._16_8_ = ~auVar103._0_8_ & _UNK_150b54550;
          auVar102._24_8_ = ~auVar103._0_8_ & _UNK_150b54558;
          auVar103 = auVar135._16_16_ | auVar102._16_16_;
          auVar146 = vshufps_avx(auVar130,auVar130,0x4e);
          local_3d8 = auVar146;
          local_438 = auVar103._0_8_;
          auVar146 = vshufps_avx(auVar103,auVar103,0x4e);
          local_428 = auVar146._0_8_;
          auVar146 = vshufps_avx(auVar40,auVar40,0x50);
          auVar40 = vshufps_avx(auVar40,auVar40,0xfa);
          auVar82._16_16_ = auVar40;
          auVar82._0_16_ = auVar146;
          auVar75 = vblendvps_avx(local_298,ZEXT1632(auVar64),auVar82);
          auVar146 = vunpcklpd_avx(local_378,local_358);
          auVar227._0_8_ = auVar146._0_8_ * auVar75._0_8_;
          auVar227._8_8_ = auVar146._8_8_ * auVar75._8_8_;
          auVar146._0_8_ = dVar35 * auVar75._16_8_;
          auVar40 = vshufpd_avx(auVar227,auVar227,1);
          local_418._0_8_ = 0;
          uVar83 = auVar40._0_8_;
        }
        *(longlong *)(param_8 + lVar19 * 8) = auVar26._0_8_;
        *(undefined8 *)(param_8 + 8 + lVar19 * 8) = local_4b8._0_8_;
        *(longlong *)(param_8 + 0x10 + lVar19 * 8) = auVar87._0_8_;
        *(undefined8 *)(param_8 + 0x18 + lVar19 * 8) = local_488._0_8_;
        *(undefined8 *)(param_9 + lVar20) = local_378._0_8_;
        *(undefined8 *)(param_9 + 8 + lVar20) = local_358._0_8_;
        *(double *)(param_9 + 0x10 + lVar20) = dVar35;
        *(ulonglong *)(param_1 + lVar20 * 4) = auVar130._0_8_;
        *(undefined8 *)(param_1 + 8 + lVar20 * 4) = local_3d8._0_8_;
        *(ulonglong *)(param_1 + 0x10 + lVar20 * 4) = local_438;
        *(ulonglong *)(param_1 + 0x18 + lVar20 * 4) = local_428;
        *(undefined8 *)(param_1 + 0x20 + lVar20 * 4) = local_1e8._0_8_;
        *(undefined8 *)(param_1 + 0x28 + lVar20 * 4) = local_4a8._0_8_;
        *(undefined8 *)(param_1 + 0x30 + lVar20 * 4) = local_3e8._0_8_;
        *(undefined8 *)(param_1 + 0x38 + lVar20 * 4) = local_3f8._0_8_;
        *(double *)(param_1 + 0x40 + lVar20 * 4) = auVar227._0_8_;
        *(undefined8 *)(param_1 + 0x48 + lVar20 * 4) = uVar83;
        *(double *)(param_1 + 0x50 + lVar20 * 4) = auVar146._0_8_;
        *(undefined8 *)(param_1 + 0x58 + lVar20 * 4) = local_418._0_8_;
        iVar18 = iVar18 + 1;
        lVar20 = lVar20 + 0x18;
        lVar19 = lVar19 + 4;
      } while ((ulonglong)param_13 * 0x18 != lVar20);
    }
  }
  else if (0 < (int)param_13) {
    lVar19 = 0;
    lVar20 = 0;
    iVar18 = 0;
    do {
      iVar14 = *(int *)(param_11 + lVar19 * 2);
      iVar7 = *(int *)(param_12 + lVar19);
      lVar21 = (longlong)iVar7;
      local_3d8._0_8_ = *(ulonglong *)(param_2 + lVar20 * 4);
      local_3d8._8_8_ = 0;
      local_318._0_8_ = *(double *)(param_2 + 0x20 + lVar20 * 4);
      local_318._8_8_ = 0;
      local_3e8._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar20 * 4);
      local_3e8._8_8_ = 0;
      local_298._8_8_ = 0;
      local_298._0_8_ = *(ulonglong *)(param_2 + 0x30 + lVar20 * 4);
      local_1e8._8_8_ = 0;
      local_1e8._0_8_ = *(ulonglong *)(param_2 + 0x38 + lVar20 * 4);
      local_398._0_8_ = *(double *)(param_2 + 0x40 + lVar20 * 4);
      local_398._8_8_ = 0;
      local_488._0_8_ = *(double *)(param_2 + 0x50 + lVar20 * 4);
      local_418._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar20 * 4);
      local_418._8_8_ = 0;
      auVar126 = ZEXT864(*(ulonglong *)(param_2 + 0x18 + lVar20 * 4));
      local_488._8_8_ = 0;
      auVar142 = ZEXT864(*(ulonglong *)(param_2 + 8 + lVar20 * 4));
      auVar163 = ZEXT864(*(ulonglong *)(param_2 + 0x10 + lVar20 * 4));
      auVar181 = ZEXT864(*(ulonglong *)(param_2 + 0x48 + lVar20 * 4));
      puVar15 = (ulonglong *)GetTransformFromArray(param_3,iVar14,iVar18);
      auVar130._0_8_ = *puVar15;
      auVar198._8_8_ = 0;
      auVar198._0_8_ = auVar130._0_8_;
      auVar103._0_8_ = puVar15[1];
      auVar210._8_8_ = 0;
      auVar210._0_8_ = auVar103._0_8_;
      uVar3 = puVar15[2];
      auVar220._8_8_ = 0;
      auVar220._0_8_ = uVar3;
      uVar4 = puVar15[3];
      auVar84._8_8_ = 0;
      auVar84._0_8_ = uVar4;
      auVar227._0_8_ = (double)puVar15[8];
      auVar109._8_8_ = 0;
      auVar109._0_8_ = auVar227._0_8_;
      uVar5 = puVar15[9];
      local_3b8._8_8_ = 0;
      local_3b8._0_8_ = uVar5;
      auVar146._0_8_ = (double)puVar15[10];
      local_4a8._8_8_ = 0;
      local_4a8._0_8_ = auVar146._0_8_;
      auVar26 = auVar181._0_16_;
      local_408._0_8_ = auVar181._0_8_;
      auVar40 = auVar126._0_16_;
      local_428 = auVar126._0_8_;
      auVar64 = auVar142._0_16_;
      local_438 = auVar142._0_8_;
      auVar129 = auVar163._0_16_;
      local_448._0_8_ = auVar163._0_8_;
      if (lVar21 == -1) {
        auVar70 = vmovlhps_avx(local_3d8,auVar64);
        auVar186 = vmovlhps_avx(auVar129,auVar40);
        auVar72 = vmovlhps_avx(auVar40,auVar129);
        auVar105 = vmovlhps_avx(auVar64,local_3d8);
        local_2b8._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar105._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar186._0_8_ * 0.0 +
             auVar72._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar70._0_8_;
        local_2b8._8_8_ =
             _UNK_150b54428 * auVar105._8_8_ * 0.0 +
             _UNK_150b54408 * auVar186._8_8_ * 0.0 +
             auVar72._8_8_ * 0.0 * _UNK_15076c6f8 + auVar70._8_8_;
        auVar28._16_8_ =
             _UNK_150b54430 * auVar72._0_8_ * 0.0 +
             _UNK_150b54410 * auVar70._0_8_ * 0.0 +
             auVar105._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar186._0_8_;
        auVar28._0_16_ = local_2b8;
        auVar28._24_8_ =
             _UNK_150b54438 * auVar72._8_8_ * 0.0 +
             _UNK_150b54418 * auVar70._8_8_ * 0.0 +
             auVar105._8_8_ * 0.0 * _UNK_15076c6f8 + auVar186._8_8_;
        auVar72 = vshufpd_avx(local_2b8,local_2b8,1);
        local_498 = auVar28._16_16_;
        auVar105 = vshufpd_avx(local_498,local_498,1);
        auVar70 = vunpcklpd_avx(auVar198,auVar210);
        auVar186 = vunpcklpd_avx(auVar220,auVar84);
        auVar41 = vunpcklpd_avx(auVar84,auVar220);
        auVar200 = vunpcklpd_avx(auVar210,auVar198);
        auVar104._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar200._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar186._0_8_ * 0.0 +
             auVar70._0_8_ + auVar41._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        auVar104._8_8_ =
             _UNK_150b54428 * auVar200._8_8_ * 0.0 +
             _UNK_150b54408 * auVar186._8_8_ * 0.0 +
             auVar70._8_8_ + auVar41._8_8_ * 0.0 * _UNK_15076c6f8;
        auVar108._16_8_ =
             _UNK_150b54430 * auVar41._0_8_ * 0.0 +
             _UNK_150b54410 * auVar70._0_8_ * 0.0 +
             auVar186._0_8_ + auVar200._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        auVar108._0_16_ = auVar104;
        auVar108._24_8_ =
             _UNK_150b54438 * auVar41._8_8_ * 0.0 +
             _UNK_150b54418 * auVar70._8_8_ * 0.0 +
             auVar186._8_8_ + auVar200._8_8_ * 0.0 * _UNK_15076c6f8;
        local_478 = vshufpd_avx(auVar104,auVar104,1);
        local_3f8 = auVar108._16_16_;
        local_4b8 = vshufpd_avx(local_3f8,local_3f8,1);
        local_468._8_8_ = local_488._8_8_;
        local_468._0_8_ = local_488._0_8_;
        local_458 = local_398;
        auVar137 = auVar109;
        auVar186 = local_3b8;
        auVar23 = local_4a8;
        auVar70 = auVar26;
      }
      else {
        lVar17 = lVar21 * 0x20;
        dVar35 = *(double *)(param_4 + 0x18 + lVar17);
        auVar70 = vmovlhps_avx(local_3d8,auVar64);
        auVar186 = vmovlhps_avx(auVar129,auVar40);
        dVar62 = *(double *)(param_4 + lVar17);
        auVar72 = vmovlhps_avx(auVar40,auVar129);
        auVar105 = vmovlhps_avx(auVar64,local_3d8);
        dVar63 = *(double *)(param_4 + 8 + lVar17);
        dVar65 = *(double *)(param_4 + 0x10 + lVar17);
        local_2b8._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar105._0_8_ * dVar65 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             dVar63 * auVar186._0_8_ +
             auVar72._0_8_ * dVar62 * ___xmm_bff00000000000003ff0000000000000 +
             auVar70._0_8_ * dVar35;
        local_2b8._8_8_ =
             _UNK_150b54428 * auVar105._8_8_ * dVar65 +
             _UNK_150b54408 * dVar63 * auVar186._8_8_ +
             auVar72._8_8_ * dVar62 * _UNK_15076c6f8 + auVar70._8_8_ * dVar35;
        auVar27._16_8_ =
             _UNK_150b54430 * auVar72._0_8_ * dVar65 +
             _UNK_150b54410 * dVar63 * auVar70._0_8_ +
             auVar105._0_8_ * dVar62 * ___xmm_bff00000000000003ff0000000000000 +
             auVar186._0_8_ * dVar35;
        auVar27._0_16_ = local_2b8;
        auVar27._24_8_ =
             _UNK_150b54438 * auVar72._8_8_ * dVar65 +
             _UNK_150b54418 * dVar63 * auVar70._8_8_ +
             auVar105._8_8_ * dVar62 * _UNK_15076c6f8 + auVar186._8_8_ * dVar35;
        auVar72 = vshufpd_avx(local_2b8,local_2b8,1);
        local_498 = auVar27._16_16_;
        auVar105 = vshufpd_avx(local_498,local_498,1);
        dVar35 = *(double *)(param_6 + 0x18 + lVar17);
        auVar70 = vunpcklpd_avx(auVar198,auVar210);
        auVar186 = vunpcklpd_avx(auVar220,auVar84);
        dVar62 = *(double *)(param_6 + lVar17);
        auVar41 = vunpcklpd_avx(auVar84,auVar220);
        auVar200 = vunpcklpd_avx(auVar210,auVar198);
        dVar63 = *(double *)(param_6 + 8 + lVar17);
        dVar65 = *(double *)(param_6 + 0x10 + lVar17);
        auVar104._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar200._0_8_ * dVar65 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             dVar63 * auVar186._0_8_ +
             auVar70._0_8_ * dVar35 +
             auVar41._0_8_ * dVar62 * ___xmm_bff00000000000003ff0000000000000;
        auVar104._8_8_ =
             _UNK_150b54428 * auVar200._8_8_ * dVar65 +
             _UNK_150b54408 * dVar63 * auVar186._8_8_ +
             auVar70._8_8_ * dVar35 + auVar41._8_8_ * dVar62 * _UNK_15076c6f8;
        auVar107._16_8_ =
             _UNK_150b54430 * auVar41._0_8_ * dVar65 +
             _UNK_150b54410 * dVar63 * auVar70._0_8_ +
             auVar186._0_8_ * dVar35 +
             auVar200._0_8_ * dVar62 * ___xmm_bff00000000000003ff0000000000000;
        auVar107._0_16_ = auVar104;
        auVar107._24_8_ =
             _UNK_150b54438 * auVar41._8_8_ * dVar65 +
             _UNK_150b54418 * dVar63 * auVar70._8_8_ +
             auVar186._8_8_ * dVar35 + auVar200._8_8_ * dVar62 * _UNK_15076c6f8;
        local_478 = vshufpd_avx(auVar104,auVar104,1);
        local_3f8 = auVar107._16_16_;
        lVar17 = lVar21 * 0x18;
        auVar70 = vunpcklpd_avx(local_398,auVar26);
        local_458._0_8_ = auVar70._0_8_ * *(double *)(param_5 + lVar17);
        local_458._8_8_ = auVar70._8_8_ * ((double *)(param_5 + lVar17))[1];
        local_468._8_8_ = 0;
        local_468._0_8_ = (double)local_488._0_8_ * *(double *)(param_5 + 0x10 + lVar17);
        local_4b8 = vshufpd_avx(local_3f8,local_3f8,1);
        auVar70 = vunpcklpd_avx(auVar109,local_3b8);
        auVar137._0_8_ = auVar70._0_8_ * *(double *)(param_7 + lVar17);
        auVar137._8_8_ = auVar70._8_8_ * ((double *)(param_7 + lVar17))[1];
        auVar70 = vshufpd_avx(local_458,local_458,1);
        auVar186 = vshufpd_avx(auVar137,auVar137,1);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = auVar146._0_8_ * *(double *)(param_7 + 0x10 + lVar17);
      }
      local_108._0_8_ = puVar15[4];
      uVar6 = puVar15[5];
      auVar127._8_8_ = 0;
      auVar127._0_8_ = uVar6;
      auVar225._8_8_ = 0;
      auVar225._0_8_ = puVar15[6];
      auVar41 = vmaxss_avx(ZEXT816(0) << 0x40,ZEXT416(*(uint *)(param_11 + 4 + lVar19 * 2)));
      auVar183._8_8_ = 0;
      auVar183._0_8_ = puVar15[7];
      auVar200 = vminss_avx(auVar41,ZEXT416((uint)__real_3f800000));
      auVar41 = vmaxss_avx(auVar200,ZEXT416(*(uint *)(param_10 + (longlong)iVar14 * 4)));
      local_128._0_8_ = puVar15[0xb];
      *(int *)(param_10 + (longlong)iVar14 * 4) = auVar41._0_4_;
      fVar22 = auVar200._0_4_;
      local_2e8._0_8_ = auVar105._0_8_;
      dVar35 = local_468._0_8_;
      local_338._0_8_ = auVar72._0_8_;
      if (fVar22 <= __real_3727c5ac) {
        local_3b8 = local_498;
        local_358 = local_2b8;
        local_228 = auVar70;
        local_378 = local_458;
        local_4a8 = auVar105;
        auVar227._0_8_ = dVar35;
      }
      else if (__real_3f7fff58 <= fVar22) {
        local_1e8 = auVar183;
        local_298._0_16_ = auVar225;
        local_4a8 = local_4b8;
        local_3b8 = local_3f8;
        local_228 = auVar186;
        auVar72 = local_478;
        local_408._0_8_ = uVar5;
        local_428 = uVar4;
        local_438 = auVar103._0_8_;
        local_448._0_8_ = uVar3;
        local_418._0_8_ = local_128._0_8_;
        local_488._0_8_ = auVar146._0_8_;
        local_318._0_8_ = local_108._0_8_;
        local_3e8._0_8_ = uVar6;
        local_398._0_8_ = auVar227._0_8_;
        local_378 = auVar137;
        auVar227._0_8_ = auVar23._0_8_;
        local_358 = auVar104;
        local_3d8._0_8_ = auVar130._0_8_;
      }
      else {
        auVar41 = vunpcklpd_avx(local_498,auVar105);
        auVar72 = vunpcklpd_avx(local_2b8,auVar72);
        local_128._8_8_ = 0;
        auVar200 = vunpcklpd_avx(local_3f8,local_4b8);
        auVar73 = vunpcklpd_avx(auVar104,local_478);
        local_108._8_8_ = 0;
        auVar119._0_8_ = auVar72._0_8_ * auVar73._0_8_ + auVar41._0_8_ * auVar200._0_8_;
        auVar119._8_8_ = auVar72._8_8_ * auVar73._8_8_ + auVar41._8_8_ * auVar200._8_8_;
        auVar146 = vshufpd_avx(auVar119,auVar119,1);
        auVar227._0_8_ = auVar146._0_8_ + auVar119._0_8_;
        auVar120._0_4_ = (float)auVar227._0_8_;
        auVar120._4_4_ = (int)((ulonglong)auVar227._0_8_ >> 0x20);
        auVar120._8_8_ = 0;
        auVar146 = vcmpss_avx(ZEXT816(0) << 0x40,auVar120,2);
        auVar36._0_4_ = (uint)(__real_3f800000 - fVar22) ^ __xmm_80000000800000008000000080000000;
        auVar36._4_4_ = _UNK_150651574;
        auVar36._8_4_ = _UNK_150651578;
        auVar36._12_4_ = _UNK_15065157c;
        auVar103 = vblendvps_avx(auVar36,ZEXT416((uint)(__real_3f800000 - fVar22)),auVar146);
        auVar199._0_12_ = ZEXT812(0);
        auVar199._12_4_ = 0;
        auVar130 = vunpcklpd_avx(auVar129,auVar40);
        auVar227 = vunpcklpd_avx(local_3d8,auVar64);
        auVar131._16_16_ = auVar130;
        auVar131._0_16_ = auVar227;
        auVar105 = vunpcklpd_avx(auVar220,auVar84);
        auVar87 = vunpcklpd_avx(auVar198,auVar210);
        auVar43._0_8_ = auVar227._0_8_ * auVar87._0_8_;
        auVar43._8_8_ = auVar227._8_8_ * auVar87._8_8_;
        auVar43._16_8_ = auVar130._0_8_ * auVar105._0_8_;
        auVar43._24_8_ = auVar130._8_8_ * auVar105._8_8_;
        auVar197 = vperm2f128_avx(auVar43,auVar43,1);
        auVar44._0_8_ = auVar43._0_8_ + auVar197._0_8_;
        auVar44._8_8_ = auVar43._8_8_ + auVar197._8_8_;
        auVar44._16_8_ = auVar43._16_8_ + auVar197._16_8_;
        auVar44._24_8_ = auVar43._24_8_ + auVar197._24_8_;
        auVar197 = vperm2f128_avx(auVar44,auVar44,1);
        auVar197 = vshufpd_avx(auVar44,auVar197,5);
        auVar45._0_8_ = auVar44._0_8_ + auVar197._0_8_;
        auVar45._8_8_ = auVar44._8_8_ + auVar197._8_8_;
        auVar45._16_8_ = auVar44._16_8_ + auVar197._16_8_;
        auVar45._24_8_ = auVar44._24_8_ + auVar197._24_8_;
        auVar197 = vcmppd_avx(ZEXT1632(auVar199),auVar45,2);
        auVar146 = vpackssdw_avx(auVar197._0_16_,auVar197._16_16_);
        auVar40 = vpshufd_avx(auVar146,0x50);
        auVar146 = vpshufd_avx(auVar146,0xfa);
        auVar46._16_16_ = auVar146;
        auVar46._0_16_ = auVar40;
        auVar196 = ZEXT1632(auVar199);
        auVar197 = vcmpps_avx(ZEXT1632(auVar199),auVar196,0xf);
        auVar197 = vblendvps_avx(auVar196,auVar197,auVar46);
        auVar146 = vunpcklpd_avx(local_488,local_418);
        auVar40 = vunpcklpd_avx(local_398,auVar26);
        auVar111._16_16_ = auVar146;
        auVar111._0_16_ = auVar40;
        auVar64 = vunpcklpd_avx(local_4a8,local_128);
        auVar129 = vunpcklpd_avx(auVar109,local_3b8);
        auVar122._16_16_ = auVar64;
        auVar122._0_16_ = auVar129;
        auVar74 = vsubpd_avx(auVar122,auVar111);
        dVar143 = (double)fVar22;
        auVar24._0_8_ = auVar40._0_8_ + auVar74._0_8_ * dVar143;
        auVar24._8_8_ = auVar40._8_8_ + auVar74._8_8_ * dVar143;
        auVar29._16_8_ = auVar146._0_8_ + auVar74._16_8_ * dVar143;
        auVar29._0_16_ = auVar24;
        auVar29._24_8_ = auVar146._8_8_ + auVar74._24_8_ * dVar143;
        auVar26 = vunpcklpd_avx(local_298._0_16_,local_1e8);
        auVar187 = vunpcklpd_avx(local_318,local_3e8);
        auVar112._16_16_ = auVar26;
        auVar112._0_16_ = auVar187;
        auVar146 = vmovlhps_avx(auVar225,auVar183);
        auVar40 = vmovlhps_avx(local_108,auVar127);
        auVar64 = vshufpd_avx(auVar29._16_16_,auVar29._16_16_,1);
        auVar123._16_16_ = auVar146;
        auVar123._0_16_ = auVar40;
        auVar129 = vshufpd_avx(auVar24,auVar24,1);
        auVar74 = vsubpd_avx(auVar123,auVar112);
        auVar167._0_8_ = auVar187._0_8_ + auVar74._0_8_ * dVar143;
        auVar167._8_8_ = auVar187._8_8_ + auVar74._8_8_ * dVar143;
        auVar169._16_8_ = auVar26._0_8_ + auVar74._16_8_ * dVar143;
        auVar169._0_16_ = auVar167;
        auVar169._24_8_ = auVar26._8_8_ + auVar74._24_8_ * dVar143;
        auVar74 = vsubpd_avx(auVar196,auVar131);
        auVar113._0_4_ = ~auVar197._0_4_ & auVar74._0_4_;
        auVar113._4_4_ = ~auVar197._4_4_ & auVar74._4_4_;
        auVar113._8_4_ = ~auVar197._8_4_ & auVar74._8_4_;
        auVar113._12_4_ = ~auVar197._12_4_ & auVar74._12_4_;
        auVar113._16_4_ = ~auVar197._16_4_ & auVar74._16_4_;
        auVar113._20_4_ = ~auVar197._20_4_ & auVar74._20_4_;
        auVar113._24_4_ = ~auVar197._24_4_ & auVar74._24_4_;
        auVar113._28_4_ = ~auVar197._28_4_ & auVar74._28_4_;
        auVar47._0_8_ = (ulonglong)auVar227._0_8_ & auVar197._0_8_;
        auVar47._8_8_ = (ulonglong)auVar227._8_8_ & auVar197._8_8_;
        auVar47._16_8_ = (ulonglong)auVar130._0_8_ & auVar197._16_8_;
        auVar47._24_8_ = (ulonglong)auVar130._8_8_ & auVar197._24_8_;
        local_298._0_16_ = auVar169._16_16_;
        auVar47 = auVar47 | auVar113;
        local_1e8 = vshufpd_avx(local_298._0_16_,local_298._0_16_,1);
        auVar227._0_8_ = __real_3ff0000000000000 - dVar143;
        auVar146._0_8_ = auVar87._0_8_ * dVar143 + auVar227._0_8_ * auVar47._0_8_;
        dVar62 = auVar87._8_8_ * dVar143 + auVar227._0_8_ * auVar47._8_8_;
        dVar63 = auVar105._0_8_ * dVar143 + auVar227._0_8_ * auVar47._16_8_;
        dVar65 = auVar105._8_8_ * dVar143 + auVar227._0_8_ * auVar47._24_8_;
        auVar85._0_8_ = auVar146._0_8_ * auVar146._0_8_ + dVar63 * dVar63;
        auVar85._8_8_ = dVar62 * dVar62 + dVar65 * dVar65;
        auVar40 = vshufpd_avx(auVar85,auVar85,1);
        auVar227._0_8_ = auVar85._0_8_ + auVar40._0_8_;
        auVar86._8_8_ = 0;
        auVar86._0_8_ = auVar227._0_8_;
        auVar227._0_8_ = __real_3ff0000000000000 / SQRT(auVar227._0_8_);
        auVar184._8_8_ = 0;
        auVar184._0_8_ = __real_3e45798ee2308c3a;
        auVar40 = vcmpsd_avx(auVar184,auVar86,6);
        auVar130._0_8_ = ~auVar40._0_8_ & __real_ffffffffffffffff;
        auVar226._0_8_ = (ulonglong)(auVar146._0_8_ * auVar227._0_8_) & auVar130._0_8_;
        auVar226._8_8_ = (ulonglong)(dVar62 * auVar227._0_8_) & auVar130._0_8_;
        auVar228._16_8_ = (ulonglong)(dVar63 * auVar227._0_8_) & auVar130._0_8_;
        auVar228._0_16_ = auVar226;
        auVar228._24_8_ = (ulonglong)(dVar65 * auVar227._0_8_) & auVar130._0_8_;
        auVar48._0_8_ =
             ~auVar130._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar48._8_8_ = ~auVar130._0_8_ & _UNK_150b54548;
        auVar48._16_8_ = ~auVar130._0_8_ & _UNK_150b54550;
        auVar48._24_8_ = ~auVar130._0_8_ & _UNK_150b54558;
        auVar87 = auVar228._16_16_ | auVar48._16_16_;
        auVar26 = vshufpd_avx(auVar167,auVar167,1);
        auVar105 = vshufps_avx(auVar87,auVar87,0x4e);
        local_278._0_4_ = auVar103._0_4_;
        auVar227._0_8_ = (double)(float)local_278._0_4_;
        auVar146._0_8_ = auVar73._0_8_ * dVar143 + auVar72._0_8_ * auVar227._0_8_;
        dVar62 = auVar73._8_8_ * dVar143 + auVar72._8_8_ * auVar227._0_8_;
        dVar63 = auVar200._0_8_ * dVar143 + auVar41._0_8_ * auVar227._0_8_;
        dVar65 = auVar200._8_8_ * dVar143 + auVar41._8_8_ * auVar227._0_8_;
        auVar37._0_8_ = auVar146._0_8_ * auVar146._0_8_ + dVar63 * dVar63;
        auVar37._8_8_ = dVar62 * dVar62 + dVar65 * dVar65;
        auVar40 = vshufpd_avx(auVar37,auVar37,1);
        auVar227._0_8_ = auVar37._0_8_ + auVar40._0_8_;
        auVar38._8_8_ = 0;
        auVar38._0_8_ = auVar227._0_8_;
        auVar227._0_8_ = __real_3ff0000000000000 / SQRT(auVar227._0_8_);
        auVar40 = vunpcklpd_avx(auVar137,auVar186);
        auVar114._16_16_ = auVar23;
        auVar114._0_16_ = auVar40;
        auVar72 = vunpcklpd_avx(local_458,auVar70);
        auVar124._16_16_ = local_468;
        auVar124._0_16_ = auVar72;
        auVar197 = vsubpd_avx(auVar114,auVar124);
        auVar103 = vshufps_avx(auVar226,auVar226,0x4e);
        auVar110._8_8_ = 0;
        auVar110._0_8_ = __real_3e45798ee2308c3a;
        auVar40 = vcmpsd_avx(auVar110,auVar38,6);
        auVar130._0_8_ = ~auVar40._0_8_ & __real_ffffffffffffffff;
        local_358._0_8_ = (ulonglong)(auVar146._0_8_ * auVar227._0_8_) & auVar130._0_8_;
        local_358._8_8_ = (ulonglong)(dVar62 * auVar227._0_8_) & auVar130._0_8_;
        auVar115._16_8_ = (ulonglong)(dVar63 * auVar227._0_8_) & auVar130._0_8_;
        auVar115._0_16_ = local_358;
        auVar115._24_8_ = (ulonglong)(dVar65 * auVar227._0_8_) & auVar130._0_8_;
        auVar49._0_8_ =
             ~auVar130._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar49._8_8_ = ~auVar130._0_8_ & _UNK_150b54548;
        auVar49._16_8_ = ~auVar130._0_8_ & _UNK_150b54550;
        auVar49._24_8_ = ~auVar130._0_8_ & _UNK_150b54558;
        local_3b8 = auVar115._16_16_ | auVar49._16_16_;
        local_378._0_8_ = auVar72._0_8_ + auVar197._0_8_ * dVar143;
        local_378._8_8_ = auVar72._8_8_ + auVar197._8_8_ * dVar143;
        auVar72 = vshufps_avx(local_358,local_358,0x4e);
        local_4a8 = vshufps_avx(local_3b8,local_3b8,0x4e);
        local_228 = vshufpd_avx(local_378,local_378,1);
        local_408._0_8_ = auVar129._0_8_;
        local_428 = auVar105._0_8_;
        local_438 = auVar103._0_8_;
        local_448._0_8_ = auVar87._0_8_;
        local_418._0_8_ = auVar64._0_8_;
        local_488._0_8_ = auVar29._16_8_;
        local_318._0_8_ = auVar167._0_8_;
        local_3e8._0_8_ = auVar26._0_8_;
        local_398._0_8_ = auVar24._0_8_;
        auVar227._0_8_ = dVar35 + auVar197._16_8_ * dVar143;
        local_3d8._0_8_ = auVar226._0_8_;
      }
      *(undefined8 *)(param_4 + lVar19 * 8) = local_2b8._0_8_;
      *(undefined8 *)(param_4 + 8 + lVar19 * 8) = local_338._0_8_;
      *(undefined8 *)(param_4 + 0x10 + lVar19 * 8) = local_498._0_8_;
      *(undefined8 *)(param_4 + 0x18 + lVar19 * 8) = local_2e8._0_8_;
      *(longlong *)(param_6 + lVar19 * 8) = auVar104._0_8_;
      *(undefined8 *)(param_6 + 8 + lVar19 * 8) = local_478._0_8_;
      *(undefined8 *)(param_6 + 0x10 + lVar19 * 8) = local_3f8._0_8_;
      *(undefined8 *)(param_6 + 0x18 + lVar19 * 8) = local_4b8._0_8_;
      *(undefined8 *)(param_5 + lVar20) = local_458._0_8_;
      *(longlong *)(param_5 + 8 + lVar20) = auVar70._0_8_;
      *(double *)(param_5 + 0x10 + lVar20) = dVar35;
      *(longlong *)(param_7 + lVar20) = auVar137._0_8_;
      *(longlong *)(param_7 + 8 + lVar20) = auVar186._0_8_;
      *(double *)(param_7 + 0x10 + lVar20) = auVar23._0_8_;
      uVar83 = local_228._0_8_;
      auVar146._0_8_ = (double)local_398._0_8_;
      auVar103._0_8_ = local_3d8._0_8_;
      if (iVar7 != -1) {
        pdVar1 = (double *)(param_8 + lVar21 * 0x20);
        pdVar2 = (double *)(param_8 + 0x10 + lVar21 * 0x20);
        auVar25._0_8_ =
             *pdVar1 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
        auVar25._8_8_ = pdVar1[1] * _UNK_150b543c8;
        auVar30._16_8_ = *pdVar2 * _UNK_150b543d0;
        auVar30._0_16_ = auVar25;
        auVar30._24_8_ = pdVar2[1] * _UNK_150b543d8;
        auVar74 = vperm2f128_avx(auVar30,auVar30,0x11);
        auVar105 = vunpcklpd_avx(local_358,auVar72);
        auVar26 = vpunpcklqdq_avx(local_3b8,local_4a8);
        auVar70 = vpunpcklqdq_avx(local_4a8,local_3b8);
        auVar41 = vunpcklpd_avx(auVar72,local_358);
        auVar186 = vshufpd_avx(auVar25,auVar25,3);
        auVar146._0_8_ = *(double *)(param_9 + 0x10 + lVar21 * 0x18);
        auVar40 = *(undefined1 (*) [16])(param_9 + lVar21 * 0x18);
        auVar170._16_8_ = auVar146._0_8_;
        auVar170._0_16_ = auVar40;
        auVar170._24_8_ = 0;
        dVar35 = auVar40._0_8_;
        auVar31._0_8_ =
             (ulonglong)dVar35 &
             ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
        dVar62 = auVar40._8_8_;
        auVar31._8_8_ = (ulonglong)dVar62 & _UNK_150aa8f48;
        auVar31._16_8_ = (ulonglong)auVar146._0_8_ & _UNK_150aa8f50;
        auVar31._24_8_ = 0;
        auVar197 = vcmppd_avx(auVar31,
                              ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a
                              ,2);
        auVar40 = vpackssdw_avx(auVar197._0_16_,auVar197._16_16_);
        auVar129 = vpcmpeqd_avx(local_3b8,local_3b8);
        auVar32._16_16_ = auVar129;
        auVar32._0_16_ = auVar40;
        auVar197 = vcmppd_avx(auVar170,
                              ___ymm_46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c
                              ,2);
        auVar103 = vpackssdw_avx(auVar197._0_16_,auVar197._16_16_);
        auVar50._8_8_ = __real_3914c4e977ba1f5c;
        auVar50._0_8_ = __real_3914c4e977ba1f5c;
        auVar50._16_8_ = __real_3914c4e977ba1f5c;
        auVar50._24_8_ = __real_3914c4e977ba1f5c;
        auVar197 = vcmppd_avx(auVar50,auVar170,2);
        auVar64 = vpackssdw_avx(auVar197._0_16_,auVar197._16_16_);
        auVar197 = vblendvps_avx(auVar75,ZEXT832(0) << 0x40,auVar32);
        auVar103 = vpackssdw_avx(auVar103,auVar129);
        auVar64 = vpackssdw_avx(auVar64,___xmm_00000000000000000000000000000000);
        auVar103 = vpand_avx(auVar103,auVar64);
        auVar64 = vpmovsxwd_avx(auVar103);
        auVar103 = vpunpckhwd_avx(auVar103,auVar103);
        auVar213._0_4_ = auVar64._0_4_ & auVar197._0_4_;
        auVar213._4_4_ = auVar64._4_4_ & auVar197._4_4_;
        auVar213._8_4_ = auVar64._8_4_ & auVar197._8_4_;
        auVar213._12_4_ = auVar64._12_4_ & auVar197._12_4_;
        auVar213._16_4_ = auVar103._0_4_ & auVar197._16_4_;
        auVar213._20_4_ = auVar103._4_4_ & auVar197._20_4_;
        auVar213._24_4_ = auVar103._8_4_ & auVar197._24_4_;
        auVar213._28_4_ = auVar103._12_4_ & auVar197._28_4_;
        iVar14 = vmovmskps_avx(auVar213);
        if (iVar14 == 0) {
          auVar213 = ZEXT432(0) << 0x20;
          auVar197 = ZEXT1632(ZEXT816(0));
LAB_140ab5033:
          auVar196 = auVar197;
          auVar197 = vcmpps_avx(auVar196,auVar196,0xf);
          auVar128._0_4_ = auVar213._0_4_ ^ auVar197._0_4_;
          auVar128._4_4_ = auVar213._4_4_ ^ auVar197._4_4_;
          auVar128._8_4_ = auVar213._8_4_ ^ auVar197._8_4_;
          auVar128._12_4_ = auVar213._12_4_ ^ auVar197._12_4_;
          auVar132._16_4_ = auVar213._16_4_ ^ auVar197._16_4_;
          auVar132._0_16_ = auVar128;
          auVar132._20_4_ = auVar213._20_4_ ^ auVar197._20_4_;
          auVar132._24_4_ = auVar213._24_4_ ^ auVar197._24_4_;
          auVar132._28_4_ = auVar213._28_4_ ^ auVar197._28_4_;
          uVar8 = (uint)__real_7fe0000000000000;
          uVar9 = (uint)(__real_7fe0000000000000 >> 0x20);
          auVar130._0_8_ = CONCAT44(auVar196._12_4_ & uVar9,auVar196._8_4_ & uVar8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = auVar130._0_8_;
          auVar13._8_4_ = auVar196._16_4_ & uVar8;
          auVar13._0_8_ = auVar130._0_8_;
          auVar13._12_4_ = auVar196._20_4_ & uVar9;
          auVar13._16_4_ = auVar196._24_4_ & uVar8;
          auVar13._20_4_ = auVar196._28_4_ & uVar9;
          auVar211._0_8_ = (ulonglong)dVar35 & __real_7fe0000000000000;
          auVar211._8_8_ = (ulonglong)dVar62 & __real_7fe0000000000000;
          auVar219._0_8_ = (ulonglong)auVar146._0_8_ & __real_7fe0000000000000;
          auVar219._8_8_ = 0;
          auVar39._8_8_ = __real_7fcfffffffffffff;
          auVar39._0_8_ = __real_7fcfffffffffffff;
          auVar129 = vpsubq_avx(auVar39,auVar219);
          auVar130 = vpsubq_avx(auVar39,auVar211);
          auVar200 = vpsubq_avx(auVar39,auVar13._8_16_);
          auVar73 = vpsubq_avx(auVar39,auVar12 << 0x40);
          auVar214._0_8_ = dVar35 * auVar130._0_8_;
          auVar214._8_8_ = dVar62 * auVar130._8_8_;
          auVar214._16_8_ = auVar146._0_8_ * auVar129._0_8_;
          auVar214._24_8_ = auVar129._8_8_ * 0.0;
          auVar103 = vcvtpd2ps_avx(auVar214);
          auVar190._0_8_ = auVar73._0_8_ * 0.0;
          dVar182 = auVar196._8_8_;
          auVar190._8_8_ = dVar182 * auVar73._8_8_;
          dVar208 = auVar196._16_8_;
          auVar190._16_8_ = dVar208 * auVar200._0_8_;
          dVar209 = auVar196._24_8_;
          auVar190._24_8_ = dVar209 * auVar200._8_8_;
          auVar64 = vcvtpd2ps_avx(auVar190);
          auVar191._16_16_ = auVar64;
          auVar191._0_16_ = auVar103;
          auVar197 = vrcpps_avx(auVar191);
          auVar192._0_4_ = auVar197._0_4_ * auVar103._0_4_;
          auVar192._4_4_ = auVar197._4_4_ * auVar103._4_4_;
          auVar192._8_4_ = auVar197._8_4_ * auVar103._8_4_;
          auVar192._12_4_ = auVar197._12_4_ * auVar103._12_4_;
          auVar192._16_4_ = auVar197._16_4_ * auVar64._0_4_;
          auVar192._20_4_ = auVar197._20_4_ * auVar64._4_4_;
          auVar192._24_4_ = auVar197._24_4_ * auVar64._8_4_;
          auVar192._28_4_ = auVar197._28_4_ * auVar64._12_4_;
          auVar54._4_4_ = __real_40000000;
          auVar54._0_4_ = __real_40000000;
          auVar54._8_4_ = __real_40000000;
          auVar54._12_4_ = __real_40000000;
          auVar54._16_4_ = __real_40000000;
          auVar54._20_4_ = __real_40000000;
          auVar54._24_4_ = __real_40000000;
          auVar54._28_4_ = __real_40000000;
          auVar34 = vsubps_avx(auVar54,auVar192);
          auVar185._0_4_ = auVar197._0_4_ * auVar34._0_4_;
          auVar185._4_4_ = auVar197._4_4_ * auVar34._4_4_;
          auVar185._8_4_ = auVar197._8_4_ * auVar34._8_4_;
          auVar185._12_4_ = auVar197._12_4_ * auVar34._12_4_;
          auVar193._16_4_ = auVar197._16_4_ * auVar34._16_4_;
          auVar193._0_16_ = auVar185;
          auVar193._20_4_ = auVar197._20_4_ * auVar34._20_4_;
          auVar193._24_4_ = auVar197._24_4_ * auVar34._24_4_;
          auVar193._28_4_ = auVar197._28_4_ * auVar34._28_4_;
          auVar197 = vcvtps2pd_avx(auVar185);
          auVar34 = vcvtps2pd_avx(auVar193._16_16_);
          dVar63 = auVar73._0_8_ * auVar34._0_8_;
          dVar65 = auVar73._8_8_ * auVar34._8_8_;
          dVar143 = auVar200._0_8_ * auVar34._16_8_;
          dVar66 = auVar200._8_8_ * auVar34._24_8_;
          dVar144 = auVar130._0_8_ * auVar197._0_8_;
          dVar164 = auVar130._8_8_ * auVar197._8_8_;
          dVar165 = auVar129._0_8_ * auVar197._16_8_;
          dVar166 = auVar129._8_8_ * auVar197._24_8_;
          auVar194._0_8_ = dVar35 * dVar144;
          auVar194._8_8_ = dVar62 * dVar164;
          auVar194._16_8_ = auVar146._0_8_ * dVar165;
          auVar194._24_8_ = dVar166 * 0.0;
          auVar215._0_8_ = dVar63 * 0.0;
          auVar215._8_8_ = dVar182 * dVar65;
          auVar215._16_8_ = dVar208 * dVar143;
          auVar215._24_8_ = dVar209 * dVar66;
          auVar55._8_8_ = __real_4000000000000000;
          auVar55._0_8_ = __real_4000000000000000;
          auVar55._16_8_ = __real_4000000000000000;
          auVar55._24_8_ = __real_4000000000000000;
          auVar197 = vsubpd_avx(auVar55,auVar215);
          auVar34 = vsubpd_avx(auVar55,auVar194);
          dVar144 = dVar144 * auVar34._0_8_;
          dVar164 = dVar164 * auVar34._8_8_;
          dVar165 = dVar165 * auVar34._16_8_;
          dVar166 = dVar166 * auVar34._24_8_;
          dVar63 = dVar63 * auVar197._0_8_;
          dVar65 = dVar65 * auVar197._8_8_;
          dVar143 = dVar143 * auVar197._16_8_;
          dVar66 = dVar66 * auVar197._24_8_;
          auVar195._0_8_ = dVar63 * 0.0;
          auVar195._8_8_ = dVar182 * dVar65;
          auVar195._16_8_ = dVar208 * dVar143;
          auVar195._24_8_ = dVar209 * dVar66;
          auVar171._0_8_ = dVar35 * dVar144;
          auVar171._8_8_ = dVar62 * dVar164;
          auVar171._16_8_ = auVar146._0_8_ * dVar165;
          auVar171._24_8_ = dVar166 * 0.0;
          auVar197 = vsubpd_avx(auVar55,auVar171);
          auVar34 = vsubpd_avx(auVar55,auVar195);
          auVar140._0_8_ = dVar63 * auVar34._0_8_;
          auVar140._8_8_ = dVar65 * auVar34._8_8_;
          auVar140._16_8_ = dVar143 * auVar34._16_8_;
          auVar140._24_8_ = dVar66 * auVar34._24_8_;
          auVar154._0_8_ = dVar144 * auVar197._0_8_;
          auVar154._8_8_ = dVar164 * auVar197._8_8_;
          auVar154._16_8_ = dVar165 * auVar197._16_8_;
          auVar154._24_8_ = dVar166 * auVar197._24_8_;
          auVar146 = vshufps_avx(auVar128,auVar128,0x50);
          auVar103 = vshufps_avx(auVar128,auVar128,0xfa);
          auVar172._16_16_ = auVar103;
          auVar172._0_16_ = auVar146;
          local_208 = vblendvps_avx(local_208,auVar154,auVar172);
          auVar103 = auVar132._16_16_;
          auVar146 = vshufps_avx(auVar103,auVar103,0x50);
          auVar103 = vshufps_avx(auVar103,auVar103,0xfa);
          auVar133._16_16_ = auVar103;
          auVar133._0_16_ = auVar146;
          local_1b8 = vblendvps_avx(local_1b8,auVar140,auVar133);
        }
        else {
          auVar129 = vcvtpd2ps_avx(auVar170);
          auVar11._8_8_ = _UNK_150b50c88;
          auVar11._0_8_ = ___ymm_0000000000000000000000000000000000000000000000000000000000000000;
          auVar11._16_8_ = _UNK_150b50c90;
          auVar11._24_8_ = _UNK_150b50c98;
          auVar130 = vcvtpd2ps_avx(auVar11);
          auVar150._16_16_ = auVar130;
          auVar150._0_16_ = auVar129;
          auVar196 = vrcpps_avx(auVar150);
          auVar151._0_4_ = auVar196._0_4_ * auVar129._0_4_;
          auVar151._4_4_ = auVar196._4_4_ * auVar129._4_4_;
          auVar151._8_4_ = auVar196._8_4_ * auVar129._8_4_;
          auVar151._12_4_ = auVar196._12_4_ * auVar129._12_4_;
          auVar151._16_4_ = auVar196._16_4_ * auVar130._0_4_;
          auVar151._20_4_ = auVar196._20_4_ * auVar130._4_4_;
          auVar151._24_4_ = auVar196._24_4_ * auVar130._8_4_;
          auVar151._28_4_ = auVar196._28_4_ * auVar130._12_4_;
          auVar51._4_4_ = __real_40000000;
          auVar51._0_4_ = __real_40000000;
          auVar51._8_4_ = __real_40000000;
          auVar51._12_4_ = __real_40000000;
          auVar51._16_4_ = __real_40000000;
          auVar51._20_4_ = __real_40000000;
          auVar51._24_4_ = __real_40000000;
          auVar51._28_4_ = __real_40000000;
          auVar34 = vsubps_avx(auVar51,auVar151);
          auVar145._0_4_ = auVar196._0_4_ * auVar34._0_4_;
          auVar145._4_4_ = auVar196._4_4_ * auVar34._4_4_;
          auVar145._8_4_ = auVar196._8_4_ * auVar34._8_4_;
          auVar145._12_4_ = auVar196._12_4_ * auVar34._12_4_;
          auVar152._16_4_ = auVar196._16_4_ * auVar34._16_4_;
          auVar152._0_16_ = auVar145;
          auVar152._20_4_ = auVar196._20_4_ * auVar34._20_4_;
          auVar152._24_4_ = auVar196._24_4_ * auVar34._24_4_;
          auVar152._28_4_ = auVar196._28_4_ * auVar34._28_4_;
          auVar196 = vcvtps2pd_avx(auVar152._16_16_);
          auVar34 = vcvtps2pd_avx(auVar145);
          auVar202._0_8_ = dVar35 * auVar34._0_8_;
          auVar202._8_8_ = dVar62 * auVar34._8_8_;
          auVar202._16_8_ = auVar146._0_8_ * auVar34._16_8_;
          auVar202._24_8_ = auVar34._24_8_ * 0.0;
          auVar52._0_8_ =
               auVar196._0_8_ *
               ___ymm_0000000000000000000000000000000000000000000000000000000000000000;
          auVar52._8_8_ = auVar196._8_8_ * _UNK_150b50c88;
          auVar52._16_8_ = auVar196._16_8_ * _UNK_150b50c90;
          auVar52._24_8_ = auVar196._24_8_ * _UNK_150b50c98;
          auVar229._8_8_ = __real_4000000000000000;
          auVar229._0_8_ = __real_4000000000000000;
          auVar229._16_8_ = __real_4000000000000000;
          auVar229._24_8_ = __real_4000000000000000;
          auVar57 = vsubpd_avx(auVar229,auVar52);
          auVar58 = vsubpd_avx(auVar229,auVar202);
          dVar144 = auVar58._0_8_ * auVar34._0_8_;
          dVar164 = auVar58._8_8_ * auVar34._8_8_;
          dVar165 = auVar58._16_8_ * auVar34._16_8_;
          dVar166 = auVar58._24_8_ * auVar34._24_8_;
          dVar63 = auVar196._0_8_ * auVar57._0_8_;
          dVar65 = auVar196._8_8_ * auVar57._8_8_;
          dVar143 = auVar196._16_8_ * auVar57._16_8_;
          dVar66 = auVar196._24_8_ * auVar57._24_8_;
          auVar188._0_8_ =
               dVar63 * ___ymm_0000000000000000000000000000000000000000000000000000000000000000;
          auVar188._8_8_ = dVar65 * _UNK_150b50c88;
          auVar188._16_8_ = dVar143 * _UNK_150b50c90;
          auVar188._24_8_ = dVar66 * _UNK_150b50c98;
          auVar203._0_8_ = dVar35 * dVar144;
          auVar203._8_8_ = dVar62 * dVar164;
          auVar203._16_8_ = auVar146._0_8_ * dVar165;
          auVar203._24_8_ = dVar166 * 0.0;
          auVar196 = vsubpd_avx(auVar229,auVar203);
          auVar34 = vsubpd_avx(auVar229,auVar188);
          auVar53._0_8_ = auVar34._0_8_ * dVar63;
          auVar53._8_8_ = auVar34._8_8_ * dVar65;
          auVar53._16_8_ = auVar34._16_8_ * dVar143;
          auVar53._24_8_ = auVar34._24_8_ * dVar66;
          auVar153._0_8_ = dVar144 * auVar196._0_8_;
          auVar153._8_8_ = dVar164 * auVar196._8_8_;
          auVar153._16_8_ = dVar165 * auVar196._16_8_;
          auVar153._24_8_ = dVar166 * auVar196._24_8_;
          auVar129 = vshufps_avx(auVar64,auVar64,0x50);
          auVar64 = vshufps_avx(auVar64,auVar64,0xfa);
          auVar189._16_16_ = auVar64;
          auVar189._0_16_ = auVar129;
          auVar196 = ZEXT1232(ZEXT812(0)) << 0x20;
          local_208 = vblendvps_avx(local_208,auVar153,auVar189);
          auVar64 = vshufps_avx(auVar103,auVar103,0x50);
          auVar103 = vshufps_avx(auVar103,auVar103,0xfa);
          auVar139._16_16_ = auVar103;
          auVar139._0_16_ = auVar64;
          local_1b8 = vblendvps_avx(local_1b8,auVar53,auVar139);
          uVar16 = vmovmskps_avx(auVar197);
          auVar197 = ZEXT1232(ZEXT812(0)) << 0x20;
          if ((char)uVar16 != (char)iVar14) goto LAB_140ab5033;
        }
        auVar197 = vshufpd_avx(auVar74,auVar74,0xf);
        dVar35 = auVar26._0_8_ * auVar186._0_8_ *
                 ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                 auVar105._0_8_ * auVar197._0_8_ +
                 auVar70._0_8_ * auVar25._0_8_ *
                 ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000 +
                 auVar41._0_8_ * auVar74._0_8_ *
                 ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
        dVar62 = auVar26._8_8_ * auVar186._8_8_ * _UNK_150b54408 +
                 auVar105._8_8_ * auVar197._8_8_ + auVar70._8_8_ * auVar25._0_8_ * _UNK_150b543e8 +
                 auVar41._8_8_ * auVar74._0_8_ * _UNK_150b54428;
        dVar63 = auVar105._0_8_ * auVar186._0_8_ * _UNK_150b54410 +
                 auVar26._0_8_ * auVar197._16_8_ + auVar41._0_8_ * auVar25._0_8_ * _UNK_150b543f0 +
                 auVar70._0_8_ * auVar74._16_8_ * _UNK_150b54430;
        dVar65 = auVar105._8_8_ * auVar186._8_8_ * _UNK_150b54418 +
                 auVar26._8_8_ * auVar197._24_8_ + auVar41._8_8_ * auVar25._0_8_ * _UNK_150b543f8 +
                 auVar70._8_8_ * auVar74._16_8_ * _UNK_150b54438;
        auVar67._0_8_ = dVar35 * dVar35 + dVar63 * dVar63;
        auVar67._8_8_ = dVar62 * dVar62 + dVar65 * dVar65;
        auVar146 = vshufpd_avx(auVar67,auVar67,1);
        auVar146._0_8_ = auVar67._0_8_ + auVar146._0_8_;
        auVar88._8_8_ = 0;
        auVar88._0_8_ = __real_3e45798ee2308c3a;
        auVar68._8_8_ = 0;
        auVar68._0_8_ = auVar146._0_8_;
        auVar103 = vcmpsd_avx(auVar88,auVar68,6);
        auVar130._0_8_ = ~auVar103._0_8_ & __real_ffffffffffffffff;
        auVar146._0_8_ = __real_3ff0000000000000 / SQRT(auVar146._0_8_);
        auVar103._0_8_ = (ulonglong)(dVar35 * auVar146._0_8_) & auVar130._0_8_;
        auVar103._8_8_ = (ulonglong)(dVar62 * auVar146._0_8_) & auVar130._0_8_;
        auVar92._16_8_ = (ulonglong)(dVar63 * auVar146._0_8_) & auVar130._0_8_;
        auVar92._0_16_ = auVar103;
        auVar92._24_8_ = (ulonglong)(dVar65 * auVar146._0_8_) & auVar130._0_8_;
        auVar56._0_8_ =
             ~auVar130._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar56._8_8_ = ~auVar130._0_8_ & _UNK_150b54548;
        auVar56._16_8_ = ~auVar130._0_8_ & _UNK_150b54550;
        auVar56._24_8_ = ~auVar130._0_8_ & _UNK_150b54558;
        auVar64 = auVar92._16_16_ | auVar56._16_16_;
        auVar146 = vshufps_avx(auVar103,auVar103,0x4e);
        local_438 = auVar146._0_8_;
        local_448._0_8_ = auVar64._0_8_;
        auVar146 = vshufps_avx(auVar64,auVar64,0x4e);
        local_428 = auVar146._0_8_;
        auVar146 = vshufps_avx(auVar40,auVar40,0x50);
        auVar40 = vshufps_avx(auVar40,auVar40,0xfa);
        auVar33._16_16_ = auVar40;
        auVar33._0_16_ = auVar146;
        auVar197 = vblendvps_avx(local_208,auVar196,auVar33);
        auVar40 = vunpcklpd_avx(local_378,local_228);
        auVar146._0_8_ = auVar40._0_8_ * auVar197._0_8_;
        auVar146._8_8_ = auVar40._8_8_ * auVar197._8_8_;
        local_488._0_8_ = auVar227._0_8_ * auVar197._16_8_;
        auVar40 = vshufpd_avx(auVar146,auVar146,1);
        local_408._0_8_ = auVar40._0_8_;
        local_418._0_8_ = 0;
      }
      *(undefined8 *)(param_8 + lVar19 * 8) = local_358._0_8_;
      *(longlong *)(param_8 + 8 + lVar19 * 8) = auVar72._0_8_;
      *(undefined8 *)(param_8 + 0x10 + lVar19 * 8) = local_3b8._0_8_;
      *(undefined8 *)(param_8 + 0x18 + lVar19 * 8) = local_4a8._0_8_;
      *(undefined8 *)(param_9 + lVar20) = local_378._0_8_;
      *(undefined8 *)(param_9 + 8 + lVar20) = uVar83;
      *(double *)(param_9 + 0x10 + lVar20) = auVar227._0_8_;
      *(ulonglong *)(param_1 + lVar20 * 4) = auVar103._0_8_;
      *(ulonglong *)(param_1 + 8 + lVar20 * 4) = local_438;
      *(undefined8 *)(param_1 + 0x10 + lVar20 * 4) = local_448._0_8_;
      *(ulonglong *)(param_1 + 0x18 + lVar20 * 4) = local_428;
      *(undefined8 *)(param_1 + 0x20 + lVar20 * 4) = local_318._0_8_;
      *(undefined8 *)(param_1 + 0x28 + lVar20 * 4) = local_3e8._0_8_;
      *(undefined8 *)(param_1 + 0x30 + lVar20 * 4) = local_298._0_8_;
      *(undefined8 *)(param_1 + 0x38 + lVar20 * 4) = local_1e8._0_8_;
      *(double *)(param_1 + 0x40 + lVar20 * 4) = auVar146._0_8_;
      *(undefined8 *)(param_1 + 0x48 + lVar20 * 4) = local_408._0_8_;
      *(undefined8 *)(param_1 + 0x50 + lVar20 * 4) = local_488._0_8_;
      *(undefined8 *)(param_1 + 0x58 + lVar20 * 4) = local_418._0_8_;
      iVar18 = iVar18 + 1;
      lVar20 = lVar20 + 0x18;
      lVar19 = lVar19 + 4;
    } while ((ulonglong)param_13 * 0x18 != lVar20);
  }
  return;
}

// BlendPosesPerBoneFilterRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx @ 140ab6530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10,
               undefined1 (*param_11) [16])

{
  double *pdVar1;
  double *pdVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong *puVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  double dVar21;
  double dVar34;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar35;
  double dVar39;
  undefined1 auVar36 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar30 [32];
  undefined1 auVar37 [16];
  undefined1 auVar32 [32];
  undefined1 auVar38 [16];
  undefined1 auVar33 [32];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [32];
  undefined1 auVar71 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [16];
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar102 [64];
  undefined8 uVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined8 uVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar122 [64];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [64];
  undefined1 auVar132 [16];
  ulonglong uVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  ulonglong local_298;
  ulonglong local_288;
  undefined1 local_258 [16];
  undefined1 local_238 [16];
  undefined1 auStack_228 [16];
  ulonglong local_208;
  undefined1 local_1e8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_198 [16];
  undefined1 local_178 [16];
  undefined1 auStack_168 [16];
  undefined1 local_158 [16];
  undefined1 auStack_148 [16];
  undefined8 local_138;
  undefined1 auVar26 [32];
  undefined1 auVar29 [32];
  undefined1 auVar31 [32];
  undefined1 auVar61 [32];
  undefined1 auVar69 [32];
  undefined1 auVar77 [32];
  undefined1 auVar86 [32];
  undefined1 auVar101 [32];
  undefined1 auVar118 [32];
  undefined1 auVar121 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  
  auVar73 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
  auVar89 = vpcmpgtd_avx(param_11[1],auVar73);
  auVar73 = vpcmpgtd_avx(*param_11,auVar73);
  auVar73 = vpor_avx(auVar73,auVar89);
  if ((((SUB161(auVar73 >> 0x1f,0) & 1) == 0 && (SUB161(auVar73 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar73 >> 0x5f,0) & 1) == 0) && -1 < auVar73[0xf]) {
    if (0 < (int)param_10) {
      lVar17 = 0;
      lVar19 = 0x2c;
      iVar16 = 0;
      do {
        iVar7 = *(int *)(param_8 + lVar17 * 2);
        iVar8 = *(int *)(param_9 + lVar17);
        lVar18 = (longlong)iVar8;
        auVar126._0_8_ = *(ulonglong *)(param_2 + -0x58 + lVar19 * 2);
        local_178._0_8_ = *(double *)(param_2 + -0x38 + lVar19 * 2);
        local_178._8_8_ = 0;
        local_2d8._0_8_ = *(ulonglong *)(param_2 + -0x30 + lVar19 * 2);
        local_2d8._8_8_ = 0;
        local_258._0_8_ = *(double *)(param_2 + -0x28 + lVar19 * 2);
        local_258._8_8_ = 0;
        local_2c8._0_8_ = *(ulonglong *)(param_2 + -0x20 + lVar19 * 2);
        local_2c8._8_8_ = 0;
        local_1c8._0_8_ = *(double *)(param_2 + -0x18 + lVar19 * 2);
        local_1c8._8_8_ = 0;
        local_158._8_8_ = 0;
        local_158._0_8_ = *(ulonglong *)(param_2 + -0x10 + lVar19 * 2);
        local_1e8._0_8_ = *(double *)(param_2 + -8 + lVar19 * 2);
        local_1e8._8_8_ = 0;
        local_2b8._0_8_ = *(ulonglong *)(param_2 + lVar19 * 2);
        local_2b8._8_8_ = 0;
        auVar102 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar19 * 2));
        auVar122 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar19 * 2));
        auVar131 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar19 * 2));
        puVar14 = (ulonglong *)GetTransformFromArray(param_3,iVar7,iVar16);
        uVar133 = auVar102._0_8_;
        auVar73._0_8_ = *puVar14;
        auVar124._8_8_ = 0;
        auVar124._0_8_ = auVar73._0_8_;
        local_208 = puVar14[1];
        auVar140._8_8_ = 0;
        auVar140._0_8_ = local_208;
        uVar3 = puVar14[2];
        auVar135._8_8_ = 0;
        auVar135._0_8_ = uVar3;
        auVar107._8_8_ = 0;
        auVar107._0_8_ = puVar14[3];
        auVar38 = auVar122._0_16_;
        auVar134 = auVar131._0_16_;
        local_238 = auVar134;
        auVar89 = auVar102._0_16_;
        if (lVar18 == -1) {
          auVar37._8_8_ = 0;
          auVar37._0_8_ = auVar126._0_8_;
          auVar9 = vmovlhps_avx(auVar37,auVar38);
          auVar36 = vunpcklpd_avx(auVar89,auVar134);
          auVar93 = vunpcklpd_avx(auVar134,auVar89);
          auVar37 = vmovlhps_avx(auVar38,auVar37);
          local_198._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar37._0_8_ * 0.0 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar36._0_8_ * 0.0 +
               auVar93._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar9._0_8_;
          local_198._8_8_ =
               _UNK_150b54428 * auVar37._8_8_ * 0.0 +
               _UNK_150b54408 * auVar36._8_8_ * 0.0 +
               auVar93._8_8_ * 0.0 * _UNK_15076c6f8 + auVar9._8_8_;
          auVar120._16_8_ =
               _UNK_150b54430 * auVar93._0_8_ * 0.0 +
               _UNK_150b54410 * auVar9._0_8_ * 0.0 +
               auVar37._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar36._0_8_;
          auVar120._0_16_ = local_198;
          auVar120._24_8_ =
               _UNK_150b54438 * auVar93._8_8_ * 0.0 +
               _UNK_150b54418 * auVar9._8_8_ * 0.0 +
               auVar37._8_8_ * 0.0 * _UNK_15076c6f8 + auVar36._8_8_;
          local_2e8 = vshufpd_avx(local_198,local_198,1);
          auVar9 = vunpcklpd_avx(auVar124,auVar140);
          auVar37 = vunpcklpd_avx(auVar135,auVar107);
          auVar36 = vunpcklpd_avx(auVar107,auVar135);
          auVar93 = vunpcklpd_avx(auVar140,auVar124);
          auVar71 = auVar120._16_16_;
          local_2f8 = vshufpd_avx(auVar71,auVar71,1);
          dVar21 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                   auVar37._0_8_ * 0.0 +
                   auVar9._0_8_ + auVar36._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
          dVar34 = _UNK_150b54408 * auVar37._8_8_ * 0.0 +
                   auVar9._8_8_ + auVar36._8_8_ * 0.0 * _UNK_15076c6f8;
          dVar35 = _UNK_150b54410 * auVar9._0_8_ * 0.0 +
                   auVar37._0_8_ + auVar93._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
          dVar39 = _UNK_150b54418 * auVar9._8_8_ * 0.0 +
                   auVar37._8_8_ + auVar93._8_8_ * 0.0 * _UNK_15076c6f8;
          dVar40 = auVar93._0_8_ * 0.0;
          dVar63 = auVar93._8_8_ * 0.0;
          dVar64 = auVar36._0_8_ * 0.0;
          dVar65 = auVar36._8_8_ * 0.0;
        }
        else {
          lVar15 = lVar18 * 0x20;
          dVar65 = *(double *)(param_4 + 0x18 + lVar15);
          auVar71._8_8_ = 0;
          auVar71._0_8_ = auVar126._0_8_;
          auVar9 = vmovlhps_avx(auVar71,auVar38);
          auVar36 = vunpcklpd_avx(auVar89,auVar134);
          dVar21 = *(double *)(param_4 + lVar15);
          auVar93 = vunpcklpd_avx(auVar134,auVar89);
          auVar37 = vmovlhps_avx(auVar38,auVar71);
          dVar34 = *(double *)(param_4 + 8 + lVar15);
          dVar35 = *(double *)(param_4 + 0x10 + lVar15);
          local_198._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar37._0_8_ * dVar35 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               dVar34 * auVar36._0_8_ +
               auVar93._0_8_ * dVar21 * ___xmm_bff00000000000003ff0000000000000 +
               auVar9._0_8_ * dVar65;
          local_198._8_8_ =
               _UNK_150b54428 * auVar37._8_8_ * dVar35 +
               _UNK_150b54408 * dVar34 * auVar36._8_8_ +
               auVar93._8_8_ * dVar21 * _UNK_15076c6f8 + auVar9._8_8_ * dVar65;
          auVar119._16_8_ =
               _UNK_150b54430 * auVar93._0_8_ * dVar35 +
               _UNK_150b54410 * dVar34 * auVar9._0_8_ +
               auVar37._0_8_ * dVar21 * ___xmm_bff00000000000003ff0000000000000 +
               auVar36._0_8_ * dVar65;
          auVar119._0_16_ = local_198;
          auVar119._24_8_ =
               _UNK_150b54438 * auVar93._8_8_ * dVar35 +
               _UNK_150b54418 * dVar34 * auVar9._8_8_ +
               auVar37._8_8_ * dVar21 * _UNK_15076c6f8 + auVar36._8_8_ * dVar65;
          dVar65 = *(double *)(param_5 + 0x18 + lVar15);
          auVar9 = vunpcklpd_avx(auVar124,auVar140);
          auVar37 = vunpcklpd_avx(auVar135,auVar107);
          dVar39 = *(double *)(param_5 + lVar15);
          auVar36 = vunpcklpd_avx(auVar107,auVar135);
          auVar93 = vunpcklpd_avx(auVar140,auVar124);
          local_2e8 = vshufpd_avx(local_198,local_198,1);
          auVar71 = auVar119._16_16_;
          dVar40 = *(double *)(param_5 + 8 + lVar15);
          dVar21 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                   auVar37._0_8_ * dVar40 +
                   auVar9._0_8_ * dVar65 +
                   auVar36._0_8_ * dVar39 * ___xmm_bff00000000000003ff0000000000000;
          dVar34 = _UNK_150b54408 * auVar37._8_8_ * dVar40 +
                   auVar9._8_8_ * dVar65 + auVar36._8_8_ * dVar39 * _UNK_15076c6f8;
          dVar35 = _UNK_150b54410 * auVar9._0_8_ * dVar40 +
                   auVar37._0_8_ * dVar65 +
                   auVar93._0_8_ * dVar39 * ___xmm_bff00000000000003ff0000000000000;
          dVar39 = _UNK_150b54418 * auVar9._8_8_ * dVar40 +
                   auVar37._8_8_ * dVar65 + auVar93._8_8_ * dVar39 * _UNK_15076c6f8;
          dVar65 = *(double *)(param_5 + 0x10 + lVar15);
          local_2f8 = vshufpd_avx(auVar71,auVar71,1);
          dVar40 = auVar93._0_8_ * dVar65;
          dVar63 = auVar93._8_8_ * dVar65;
          dVar64 = auVar36._0_8_ * dVar65;
          dVar65 = auVar36._8_8_ * dVar65;
        }
        uVar110 = auVar71._0_8_;
        auVar68._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 * dVar40 +
             dVar21;
        auVar68._8_8_ = _UNK_150b54428 * dVar63 + dVar34;
        auVar69._16_8_ = _UNK_150b54430 * dVar64 + dVar35;
        auVar69._0_16_ = auVar68;
        auVar69._24_8_ = _UNK_150b54438 * dVar65 + dVar39;
        auVar36 = vshufpd_avx(auVar68,auVar68,1);
        auVar46 = auVar69._16_16_;
        auVar93 = vshufpd_avx(auVar46,auVar46,1);
        dVar65 = (double)puVar14[4];
        uVar4 = puVar14[5];
        dVar21 = (double)puVar14[6];
        auVar130._8_8_ = 0;
        auVar130._0_8_ = dVar21;
        uVar5 = puVar14[7];
        dVar34 = (double)puVar14[8];
        auVar85._8_8_ = 0;
        auVar85._0_8_ = dVar34;
        auVar137._8_8_ = 0;
        auVar137._0_8_ = puVar14[9];
        auVar9 = vmaxss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_8 + 4 + lVar17 * 2)));
        dVar35 = (double)puVar14[10];
        auVar92._8_8_ = 0;
        auVar92._0_8_ = dVar35;
        auVar37 = vminss_avx(auVar9,ZEXT416((uint)__real_3f800000));
        auVar9 = vmaxss_avx(auVar37,ZEXT416(*(uint *)(param_7 + (longlong)iVar7 * 4)));
        uVar6 = puVar14[0xb];
        auVar138._8_8_ = 0;
        auVar138._0_8_ = uVar6;
        *(int *)(param_7 + (longlong)iVar7 * 4) = auVar9._0_4_;
        fVar20 = auVar37._0_4_;
        uVar80 = local_198._0_8_;
        uVar90 = local_2e8._0_8_;
        uVar103 = local_2f8._0_8_;
        if (fVar20 <= __real_3727c5ac) {
          local_208 = auVar122._0_8_;
        }
        else if (__real_3f7fff58 <= fVar20) {
          local_238 = auVar107;
          local_158 = auVar137;
          local_2e8 = auVar36;
          auVar71 = auVar46;
          local_198 = auVar68;
          uVar133 = uVar3;
          local_1e8._0_8_ = dVar35;
          local_2f8 = auVar93;
          local_258._0_8_ = dVar21;
          local_178._0_8_ = dVar65;
          auVar126._0_8_ = auVar73._0_8_;
          local_2d8._0_8_ = uVar4;
          local_2c8._0_8_ = uVar5;
          local_1c8._0_8_ = dVar34;
          local_2b8._0_8_ = uVar6;
        }
        else {
          auVar134 = vunpcklpd_avx(auVar89,auVar134);
          auVar89._8_8_ = 0;
          auVar89._0_8_ = auVar126._0_8_;
          auVar38 = vunpcklpd_avx(auVar89,auVar38);
          auVar78._16_16_ = auVar134;
          auVar78._0_16_ = auVar38;
          auStack_228 = vunpcklpd_avx(auVar135,auVar107);
          auVar124 = vunpcklpd_avx(auVar124,auVar140);
          auVar56._0_8_ = auVar38._0_8_ * auVar124._0_8_;
          auVar56._8_8_ = auVar38._8_8_ * auVar124._8_8_;
          auVar56._16_8_ = auVar134._0_8_ * auStack_228._0_8_;
          auVar56._24_8_ = auVar134._8_8_ * auStack_228._8_8_;
          auVar120 = vperm2f128_avx(auVar56,auVar56,1);
          auVar57._0_8_ = auVar56._0_8_ + auVar120._0_8_;
          auVar57._8_8_ = auVar56._8_8_ + auVar120._8_8_;
          auVar57._16_8_ = auVar56._16_8_ + auVar120._16_8_;
          auVar57._24_8_ = auVar56._24_8_ + auVar120._24_8_;
          auVar120 = vperm2f128_avx(auVar57,auVar57,1);
          auVar120 = vshufpd_avx(auVar57,auVar120,5);
          auVar58._0_8_ = auVar57._0_8_ + auVar120._0_8_;
          auVar58._8_8_ = auVar57._8_8_ + auVar120._8_8_;
          auVar58._16_8_ = auVar57._16_8_ + auVar120._16_8_;
          auVar58._24_8_ = auVar57._24_8_ + auVar120._24_8_;
          auVar107 = ZEXT816(0);
          auVar120 = vcmppd_avx(ZEXT1632(auVar107),auVar58,2);
          auVar73 = vpackssdw_avx(auVar120._0_16_,auVar120._16_16_);
          auVar89 = vpshufd_avx(auVar73,0x50);
          auVar73 = vpshufd_avx(auVar73,0xfa);
          auVar59._16_16_ = auVar73;
          auVar59._0_16_ = auVar89;
          auVar33 = ZEXT1632(auVar107);
          auVar120 = vcmpps_avx(ZEXT1632(auVar107),auVar33,0xf);
          auVar120 = vblendvps_avx(auVar33,auVar120,auVar59);
          auVar89 = vunpcklpd_avx(local_1e8,local_2b8);
          auVar107 = vunpcklpd_avx(local_1c8,local_158);
          auVar108._16_16_ = auVar89;
          auVar108._0_16_ = auVar107;
          auVar126 = vunpcklpd_avx(auVar92,auVar138);
          auVar73 = vmovlhps_avx(auVar85,auVar137);
          auVar60._16_16_ = auVar126;
          auVar60._0_16_ = auVar73;
          auVar119 = vsubpd_avx(auVar60,auVar108);
          dVar40 = (double)fVar20;
          auVar113._0_8_ = auVar107._0_8_ + auVar119._0_8_ * dVar40;
          auVar113._8_8_ = auVar107._8_8_ + auVar119._8_8_ * dVar40;
          auVar121._16_8_ = auVar89._0_8_ + auVar119._16_8_ * dVar40;
          auVar121._0_16_ = auVar113;
          auVar121._24_8_ = auVar89._8_8_ + auVar119._24_8_ * dVar40;
          auVar73 = vunpcklpd_avx(local_258,local_2c8);
          auVar107 = vshufpd_avx(auVar121._16_16_,auVar121._16_16_,1);
          auVar89 = vunpcklpd_avx(local_178,local_2d8);
          local_158 = vshufpd_avx(auVar113,auVar113,1);
          auVar95._16_16_ = auVar73;
          auVar95._0_16_ = auVar89;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar5;
          auVar126 = vunpcklpd_avx(auVar130,auVar13);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = dVar65;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar4;
          auVar135 = vunpcklpd_avx(auVar9,auVar12);
          auVar109._16_16_ = auVar126;
          auVar109._0_16_ = auVar135;
          auVar119 = vsubpd_avx(auVar109,auVar95);
          auVar45._0_8_ = auVar89._0_8_ + dVar40 * auVar119._0_8_;
          auVar45._8_8_ = auVar89._8_8_ + dVar40 * auVar119._8_8_;
          auVar61._16_8_ = auVar73._0_8_ + dVar40 * auVar119._16_8_;
          auVar61._0_16_ = auVar45;
          auVar61._24_8_ = auVar73._8_8_ + dVar40 * auVar119._24_8_;
          dVar21 = __real_3ff0000000000000 - dVar40;
          auVar119 = vsubpd_avx(auVar33,auVar78);
          auVar96._0_4_ = ~auVar120._0_4_ & auVar119._0_4_;
          auVar96._4_4_ = ~auVar120._4_4_ & auVar119._4_4_;
          auVar96._8_4_ = ~auVar120._8_4_ & auVar119._8_4_;
          auVar96._12_4_ = ~auVar120._12_4_ & auVar119._12_4_;
          auVar96._16_4_ = ~auVar120._16_4_ & auVar119._16_4_;
          auVar96._20_4_ = ~auVar120._20_4_ & auVar119._20_4_;
          auVar96._24_4_ = ~auVar120._24_4_ & auVar119._24_4_;
          auVar96._28_4_ = ~auVar120._28_4_ & auVar119._28_4_;
          auVar79._0_8_ = (ulonglong)auVar38._0_8_ & auVar120._0_8_;
          auVar79._8_8_ = (ulonglong)auVar38._8_8_ & auVar120._8_8_;
          auVar79._16_8_ = (ulonglong)auVar134._0_8_ & auVar120._16_8_;
          auVar79._24_8_ = (ulonglong)auVar134._8_8_ & auVar120._24_8_;
          auVar79 = auVar79 | auVar96;
          auVar134 = vunpcklpd_avx(auVar71,local_2f8);
          auVar135 = vunpcklpd_avx(local_198,local_2e8);
          auVar140 = vunpcklpd_avx(auVar46,auVar93);
          auVar9 = vunpcklpd_avx(auVar68,auVar36);
          auVar38._0_8_ = auVar9._0_8_ * auVar135._0_8_ + auVar140._0_8_ * auVar134._0_8_;
          auVar38._8_8_ = auVar9._8_8_ * auVar135._8_8_ + auVar140._8_8_ * auVar134._8_8_;
          auVar73 = vshufpd_avx(auVar38,auVar38,1);
          dVar65 = auVar73._0_8_ + auVar38._0_8_;
          auVar38 = vshufpd_avx(auVar61._16_16_,auVar61._16_16_,1);
          auVar99._0_4_ = (float)dVar65;
          auVar99._4_4_ = (int)((ulonglong)dVar65 >> 0x20);
          auVar99._8_8_ = 0;
          dVar34 = dVar40 * auVar124._0_8_ + dVar21 * auVar79._0_8_;
          dVar35 = dVar40 * auVar124._8_8_ + dVar21 * auVar79._8_8_;
          dVar39 = dVar40 * auStack_228._0_8_ + dVar21 * auVar79._16_8_;
          dVar21 = dVar40 * auStack_228._8_8_ + dVar21 * auVar79._24_8_;
          auVar74._0_4_ = (uint)(__real_3f800000 - fVar20) ^ __xmm_80000000800000008000000080000000;
          auVar74._4_4_ = _UNK_150651574;
          auVar74._8_4_ = _UNK_150651578;
          auVar74._12_4_ = _UNK_15065157c;
          auVar73 = vcmpss_avx(ZEXT816(0) << 0x40,auVar99,2);
          auVar73 = vblendvps_avx(auVar74,ZEXT416((uint)(__real_3f800000 - fVar20)),auVar73);
          auVar75._0_8_ = dVar34 * dVar34 + dVar39 * dVar39;
          auVar75._8_8_ = dVar35 * dVar35 + dVar21 * dVar21;
          auVar89 = vshufpd_avx(auVar75,auVar75,1);
          dVar65 = auVar75._0_8_ + auVar89._0_8_;
          auVar76._8_8_ = 0;
          auVar76._0_8_ = dVar65;
          dVar65 = __real_3ff0000000000000 / SQRT(dVar65);
          auVar114._8_8_ = 0;
          auVar114._0_8_ = __real_3e45798ee2308c3a;
          auVar89 = vcmpsd_avx(auVar114,auVar76,6);
          auVar126._0_8_ = ~auVar89._0_8_ & __real_ffffffffffffffff;
          auVar125._0_8_ = (ulonglong)(dVar34 * dVar65) & auVar126._0_8_;
          auVar125._8_8_ = (ulonglong)(dVar35 * dVar65) & auVar126._0_8_;
          auVar127._16_8_ = (ulonglong)(dVar39 * dVar65) & auVar126._0_8_;
          auVar127._0_16_ = auVar125;
          auVar127._24_8_ = (ulonglong)(dVar21 * dVar65) & auVar126._0_8_;
          auVar70._0_8_ =
               ~auVar126._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar70._8_8_ = ~auVar126._0_8_ & _UNK_150b54548;
          auVar70._16_8_ = ~auVar126._0_8_ & _UNK_150b54550;
          auVar70._24_8_ = ~auVar126._0_8_ & _UNK_150b54558;
          auVar37 = auVar127._16_16_ | auVar70._16_16_;
          auVar89 = vshufpd_avx(auVar45,auVar45,1);
          local_238 = vshufps_avx(auVar37,auVar37,0x4e);
          auVar124 = vshufps_avx(auVar125,auVar125,0x4e);
          local_208 = auVar124._0_8_;
          dVar65 = (double)auVar73._0_4_;
          dVar21 = auVar9._0_8_ * dVar40 + auVar135._0_8_ * dVar65;
          dVar34 = auVar9._8_8_ * dVar40 + auVar135._8_8_ * dVar65;
          dVar35 = auVar140._0_8_ * dVar40 + auVar134._0_8_ * dVar65;
          dVar39 = auVar140._8_8_ * dVar40 + auVar134._8_8_ * dVar65;
          auVar134._0_8_ = dVar21 * dVar21 + dVar35 * dVar35;
          auVar134._8_8_ = dVar34 * dVar34 + dVar39 * dVar39;
          auVar73 = vshufpd_avx(auVar134,auVar134,1);
          dVar65 = auVar134._0_8_ + auVar73._0_8_;
          auVar46._8_8_ = 0;
          auVar46._0_8_ = dVar65;
          auVar73 = vcmpsd_avx(auVar114,auVar46,6);
          auVar126._0_8_ = ~auVar73._0_8_ & __real_ffffffffffffffff;
          dVar65 = __real_3ff0000000000000 / SQRT(dVar65);
          local_198._0_8_ = (double)((ulonglong)(dVar21 * dVar65) & auVar126._0_8_);
          local_198._8_8_ = (double)((ulonglong)(dVar34 * dVar65) & auVar126._0_8_);
          auVar33._16_8_ = (ulonglong)(dVar35 * dVar65) & auVar126._0_8_;
          auVar33._0_16_ = local_198;
          auVar33._24_8_ = (ulonglong)(dVar39 * dVar65) & auVar126._0_8_;
          auVar62._0_8_ =
               ~auVar126._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar62._8_8_ = ~auVar126._0_8_ & _UNK_150b54548;
          auVar62._16_8_ = ~auVar126._0_8_ & _UNK_150b54550;
          auVar62._24_8_ = ~auVar126._0_8_ & _UNK_150b54558;
          auVar71 = auVar33._16_16_ | auVar62._16_16_;
          local_2e8 = vshufps_avx(local_198,local_198,0x4e);
          local_2f8 = vshufps_avx(auVar71,auVar71,0x4e);
          uVar133 = auVar37._0_8_;
          local_1e8._0_8_ = auVar121._16_8_;
          local_258._0_8_ = auVar61._16_8_;
          local_178._0_8_ = auVar45._0_8_;
          auVar126._0_8_ = auVar125._0_8_;
          local_2d8._0_8_ = auVar89._0_8_;
          local_2c8._0_8_ = auVar38._0_8_;
          local_1c8._0_8_ = auVar113._0_8_;
          local_2b8._0_8_ = auVar107._0_8_;
        }
        *(undefined8 *)(param_4 + lVar17 * 8) = uVar80;
        *(undefined8 *)(param_4 + 8 + lVar17 * 8) = uVar90;
        *(undefined8 *)(param_4 + 0x10 + lVar17 * 8) = uVar110;
        *(undefined8 *)(param_4 + 0x18 + lVar17 * 8) = uVar103;
        *(double *)(param_5 + lVar17 * 8) = auVar68._0_8_;
        local_2a8._0_8_ = auVar36._0_8_;
        *(undefined8 *)(param_5 + 8 + lVar17 * 8) = local_2a8._0_8_;
        *(double *)(param_5 + 0x10 + lVar17 * 8) = auVar69._16_8_;
        *(longlong *)(param_5 + 0x18 + lVar17 * 8) = auVar93._0_8_;
        uVar80 = local_238._0_8_;
        if (iVar8 != -1) {
          pdVar1 = (double *)(param_6 + lVar18 * 0x20);
          pdVar2 = (double *)(param_6 + 0x10 + lVar18 * 0x20);
          auVar36._0_8_ =
               *pdVar1 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
          auVar36._8_8_ = pdVar1[1] * _UNK_150b543c8;
          auVar87._16_8_ = *pdVar2 * _UNK_150b543d0;
          auVar87._0_16_ = auVar36;
          auVar87._24_8_ = pdVar2[1] * _UNK_150b543d8;
          auVar119 = vperm2f128_avx(auVar87,auVar87,0x11);
          auVar120 = vshufpd_avx(auVar119,auVar119,0xf);
          auVar89 = vunpcklpd_avx(local_198,local_2e8);
          auVar107 = vunpcklpd_avx(auVar71,local_2f8);
          auVar38 = vunpcklpd_avx(local_2f8,auVar71);
          auVar124 = vunpcklpd_avx(local_2e8,local_198);
          auVar73 = vshufpd_avx(auVar36,auVar36,3);
          dVar21 = auVar124._0_8_ * auVar119._0_8_ *
                   ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                   auVar107._0_8_ * auVar73._0_8_ *
                   ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                   auVar38._0_8_ * auVar36._0_8_ *
                   ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000 +
                   auVar89._0_8_ * auVar120._0_8_;
          dVar34 = auVar124._8_8_ * auVar119._0_8_ * _UNK_150b54428 +
                   auVar107._8_8_ * auVar73._8_8_ * _UNK_150b54408 +
                   auVar38._8_8_ * auVar36._0_8_ * _UNK_150b543e8 + auVar89._8_8_ * auVar120._8_8_;
          dVar35 = auVar38._0_8_ * auVar119._16_8_ * _UNK_150b54430 +
                   auVar89._0_8_ * auVar73._0_8_ * _UNK_150b54410 +
                   auVar124._0_8_ * auVar36._0_8_ * _UNK_150b543f0 +
                   auVar107._0_8_ * auVar120._16_8_;
          dVar39 = auVar38._8_8_ * auVar119._16_8_ * _UNK_150b54438 +
                   auVar89._8_8_ * auVar73._8_8_ * _UNK_150b54418 +
                   auVar124._8_8_ * auVar36._0_8_ * _UNK_150b543f8 +
                   auVar107._8_8_ * auVar120._24_8_;
          auVar93._0_8_ = dVar21 * dVar21 + dVar35 * dVar35;
          auVar93._8_8_ = dVar34 * dVar34 + dVar39 * dVar39;
          auVar73 = vshufpd_avx(auVar93,auVar93,1);
          dVar65 = auVar93._0_8_ + auVar73._0_8_;
          auVar100._8_8_ = 0;
          auVar100._0_8_ = __real_3e45798ee2308c3a;
          auVar94._8_8_ = 0;
          auVar94._0_8_ = dVar65;
          auVar73 = vcmpsd_avx(auVar100,auVar94,6);
          auVar73._0_8_ = ~auVar73._0_8_ & __real_ffffffffffffffff;
          dVar65 = __real_3ff0000000000000 / SQRT(dVar65);
          auVar126._0_8_ = (ulonglong)(dVar21 * dVar65) & auVar73._0_8_;
          auVar126._8_8_ = (ulonglong)(dVar34 * dVar65) & auVar73._0_8_;
          auVar128._16_8_ = (ulonglong)(dVar35 * dVar65) & auVar73._0_8_;
          auVar128._0_16_ = auVar126;
          auVar128._24_8_ = (ulonglong)(dVar39 * dVar65) & auVar73._0_8_;
          auVar88._0_8_ =
               ~auVar73._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar88._8_8_ = ~auVar73._0_8_ & _UNK_150b54548;
          auVar88._16_8_ = ~auVar73._0_8_ & _UNK_150b54550;
          auVar88._24_8_ = ~auVar73._0_8_ & _UNK_150b54558;
          auVar89 = auVar128._16_16_ | auVar88._16_16_;
          auVar73 = vshufps_avx(auVar126,auVar126,0x4e);
          local_208 = auVar73._0_8_;
          uVar133 = auVar89._0_8_;
          auVar73 = vshufps_avx(auVar89,auVar89,0x4e);
          uVar80 = auVar73._0_8_;
        }
        *(longlong *)(param_6 + lVar17 * 8) = local_198._0_8_;
        *(longlong *)(param_6 + 8 + lVar17 * 8) = local_2e8._0_8_;
        *(longlong *)(param_6 + 0x10 + lVar17 * 8) = auVar71._0_8_;
        *(longlong *)(param_6 + 0x18 + lVar17 * 8) = local_2f8._0_8_;
        *(ulonglong *)(param_1 + -0x58 + lVar19 * 2) = auVar126._0_8_;
        *(ulonglong *)(param_1 + -0x50 + lVar19 * 2) = local_208;
        *(ulonglong *)(param_1 + -0x48 + lVar19 * 2) = uVar133;
        *(undefined8 *)(param_1 + -0x40 + lVar19 * 2) = uVar80;
        *(undefined8 *)(param_1 + -0x38 + lVar19 * 2) = local_178._0_8_;
        *(undefined8 *)(param_1 + -0x30 + lVar19 * 2) = local_2d8._0_8_;
        *(undefined8 *)(param_1 + -0x28 + lVar19 * 2) = local_258._0_8_;
        *(undefined8 *)(param_1 + -0x20 + lVar19 * 2) = local_2c8._0_8_;
        *(undefined8 *)(param_1 + -0x18 + lVar19 * 2) = local_1c8._0_8_;
        *(undefined8 *)(param_1 + -0x10 + lVar19 * 2) = local_158._0_8_;
        *(undefined8 *)(param_1 + -8 + lVar19 * 2) = local_1e8._0_8_;
        *(undefined8 *)(param_1 + lVar19 * 2) = local_2b8._0_8_;
        iVar16 = iVar16 + 1;
        lVar19 = lVar19 + 0x30;
        lVar17 = lVar17 + 4;
      } while ((ulonglong)param_10 << 2 != lVar17);
    }
  }
  else if (0 < (int)param_10) {
    lVar17 = 0;
    lVar19 = 0x2c;
    iVar16 = 0;
    do {
      iVar7 = *(int *)(param_8 + lVar17 * 2);
      iVar8 = *(int *)(param_9 + lVar17);
      lVar18 = (longlong)iVar8;
      auVar73._0_8_ = *(ulonglong *)(param_2 + -0x58 + lVar19 * 2);
      local_258._8_8_ = 0;
      local_258._0_8_ = auVar73._0_8_;
      local_1c8._0_8_ = *(double *)(param_2 + -0x38 + lVar19 * 2);
      local_1c8._8_8_ = 0;
      local_178._8_8_ = 0;
      local_178._0_8_ = *(ulonglong *)(param_2 + -0x30 + lVar19 * 2);
      local_2c8._0_8_ = *(double *)(param_2 + -0x28 + lVar19 * 2);
      local_2c8._8_8_ = 0;
      local_238._8_8_ = 0;
      local_238._0_8_ = *(ulonglong *)(param_2 + -0x20 + lVar19 * 2);
      local_158._0_8_ = *(double *)(param_2 + -0x18 + lVar19 * 2);
      local_158._8_8_ = 0;
      local_288 = *(ulonglong *)(param_2 + -0x10 + lVar19 * 2);
      local_2b8._0_8_ = *(double *)(param_2 + -8 + lVar19 * 2);
      local_2b8._8_8_ = 0;
      local_2d8._0_8_ = *(ulonglong *)(param_2 + lVar19 * 2);
      local_2d8._8_8_ = 0;
      auVar102 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar19 * 2));
      auVar122 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar19 * 2));
      auVar131 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar19 * 2));
      puVar14 = (ulonglong *)GetTransformFromArray(param_3,iVar7,iVar16);
      uVar133 = auVar131._0_8_;
      auVar126._0_8_ = *puVar14;
      auVar123._8_8_ = 0;
      auVar123._0_8_ = auVar126._0_8_;
      local_298 = puVar14[1];
      auVar97._8_8_ = 0;
      auVar97._0_8_ = local_298;
      uVar3 = puVar14[2];
      auVar139._8_8_ = 0;
      auVar139._0_8_ = uVar3;
      local_208 = puVar14[3];
      auVar104._8_8_ = 0;
      auVar104._0_8_ = local_208;
      auVar89 = auVar102._0_16_;
      auVar107 = auVar122._0_16_;
      auVar38 = auVar131._0_16_;
      if (lVar18 == -1) {
        auVar124 = vmovlhps_avx(local_258,auVar89);
        auVar135 = vunpcklpd_avx(auVar38,auVar107);
        auVar140 = vunpcklpd_avx(auVar107,auVar38);
        auVar134 = vmovlhps_avx(auVar89,local_258);
        local_1e8._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar134._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar135._0_8_ * 0.0 +
             auVar140._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar124._0_8_;
        local_1e8._8_8_ =
             _UNK_150b54428 * auVar134._8_8_ * 0.0 +
             _UNK_150b54408 * auVar135._8_8_ * 0.0 +
             auVar140._8_8_ * 0.0 * _UNK_15076c6f8 + auVar124._8_8_;
        auVar116._16_8_ =
             _UNK_150b54430 * auVar140._0_8_ * 0.0 +
             _UNK_150b54410 * auVar124._0_8_ * 0.0 +
             auVar134._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar135._0_8_;
        auVar116._0_16_ = local_1e8;
        auVar116._24_8_ =
             _UNK_150b54438 * auVar140._8_8_ * 0.0 +
             _UNK_150b54418 * auVar124._8_8_ * 0.0 +
             auVar134._8_8_ * 0.0 * _UNK_15076c6f8 + auVar135._8_8_;
        auVar124 = vshufpd_avx(local_1e8,local_1e8,1);
        auVar134 = vunpcklpd_avx(auVar123,auVar97);
        auVar135 = vunpcklpd_avx(auVar139,auVar104);
        auVar140 = vunpcklpd_avx(auVar104,auVar139);
        auVar9 = vunpcklpd_avx(auVar97,auVar123);
        auVar37 = auVar116._16_16_;
        local_2a8 = vshufpd_avx(auVar37,auVar37,1);
        dVar21 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                 auVar135._0_8_ * 0.0 +
                 auVar134._0_8_ + auVar140._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        dVar34 = _UNK_150b54408 * auVar135._8_8_ * 0.0 +
                 auVar134._8_8_ + auVar140._8_8_ * 0.0 * _UNK_15076c6f8;
        dVar35 = _UNK_150b54410 * auVar134._0_8_ * 0.0 +
                 auVar135._0_8_ + auVar9._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        dVar39 = _UNK_150b54418 * auVar134._8_8_ * 0.0 +
                 auVar135._8_8_ + auVar9._8_8_ * 0.0 * _UNK_15076c6f8;
        dVar40 = auVar9._0_8_ * 0.0;
        dVar63 = auVar9._8_8_ * 0.0;
        dVar64 = auVar140._0_8_ * 0.0;
        dVar65 = auVar140._8_8_ * 0.0;
      }
      else {
        lVar15 = lVar18 * 0x20;
        dVar65 = *(double *)(param_4 + 0x18 + lVar15);
        auVar124 = vmovlhps_avx(local_258,auVar89);
        auVar135 = vunpcklpd_avx(auVar38,auVar107);
        dVar21 = *(double *)(param_4 + lVar15);
        auVar140 = vunpcklpd_avx(auVar107,auVar38);
        auVar134 = vmovlhps_avx(auVar89,local_258);
        dVar34 = *(double *)(param_4 + 8 + lVar15);
        dVar35 = *(double *)(param_4 + 0x10 + lVar15);
        local_1e8._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar134._0_8_ * dVar35 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             dVar34 * auVar135._0_8_ +
             auVar140._0_8_ * dVar21 * ___xmm_bff00000000000003ff0000000000000 +
             auVar124._0_8_ * dVar65;
        local_1e8._8_8_ =
             _UNK_150b54428 * auVar134._8_8_ * dVar35 +
             _UNK_150b54408 * dVar34 * auVar135._8_8_ +
             auVar140._8_8_ * dVar21 * _UNK_15076c6f8 + auVar124._8_8_ * dVar65;
        auVar115._16_8_ =
             _UNK_150b54430 * auVar140._0_8_ * dVar35 +
             _UNK_150b54410 * dVar34 * auVar124._0_8_ +
             auVar134._0_8_ * dVar21 * ___xmm_bff00000000000003ff0000000000000 +
             auVar135._0_8_ * dVar65;
        auVar115._0_16_ = local_1e8;
        auVar115._24_8_ =
             _UNK_150b54438 * auVar140._8_8_ * dVar35 +
             _UNK_150b54418 * dVar34 * auVar124._8_8_ +
             auVar134._8_8_ * dVar21 * _UNK_15076c6f8 + auVar135._8_8_ * dVar65;
        dVar65 = *(double *)(param_5 + 0x18 + lVar15);
        auVar134 = vunpcklpd_avx(auVar123,auVar97);
        auVar135 = vunpcklpd_avx(auVar139,auVar104);
        dVar39 = *(double *)(param_5 + lVar15);
        auVar140 = vunpcklpd_avx(auVar104,auVar139);
        auVar9 = vunpcklpd_avx(auVar97,auVar123);
        auVar124 = vshufpd_avx(local_1e8,local_1e8,1);
        auVar37 = auVar115._16_16_;
        dVar40 = *(double *)(param_5 + 8 + lVar15);
        dVar21 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                 auVar135._0_8_ * dVar40 +
                 auVar134._0_8_ * dVar65 +
                 auVar140._0_8_ * dVar39 * ___xmm_bff00000000000003ff0000000000000;
        dVar34 = _UNK_150b54408 * auVar135._8_8_ * dVar40 +
                 auVar134._8_8_ * dVar65 + auVar140._8_8_ * dVar39 * _UNK_15076c6f8;
        dVar35 = _UNK_150b54410 * auVar134._0_8_ * dVar40 +
                 auVar135._0_8_ * dVar65 +
                 auVar9._0_8_ * dVar39 * ___xmm_bff00000000000003ff0000000000000;
        dVar39 = _UNK_150b54418 * auVar134._8_8_ * dVar40 +
                 auVar135._8_8_ * dVar65 + auVar9._8_8_ * dVar39 * _UNK_15076c6f8;
        dVar65 = *(double *)(param_5 + 0x10 + lVar15);
        local_2a8 = vshufpd_avx(auVar37,auVar37,1);
        dVar40 = auVar9._0_8_ * dVar65;
        dVar63 = auVar9._8_8_ * dVar65;
        dVar64 = auVar140._0_8_ * dVar65;
        dVar65 = auVar140._8_8_ * dVar65;
      }
      uVar80 = auVar37._0_8_;
      auVar22._0_8_ =
           ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 * dVar40 + dVar21
      ;
      auVar22._8_8_ = _UNK_150b54428 * dVar63 + dVar34;
      auVar26._16_8_ = _UNK_150b54430 * dVar64 + dVar35;
      auVar26._0_16_ = auVar22;
      auVar26._24_8_ = _UNK_150b54438 * dVar65 + dVar39;
      auVar140 = vshufpd_avx(auVar22,auVar22,1);
      auVar36 = auVar26._16_16_;
      auVar9 = vshufpd_avx(auVar36,auVar36,1);
      dVar65 = (double)puVar14[4];
      auVar91._8_8_ = 0;
      auVar91._0_8_ = puVar14[5];
      dVar21 = (double)puVar14[6];
      auVar136._8_8_ = 0;
      auVar136._0_8_ = dVar21;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = puVar14[7];
      dVar34 = (double)puVar14[8];
      auVar66._8_8_ = 0;
      auVar66._0_8_ = dVar34;
      uVar4 = puVar14[9];
      auVar129._8_8_ = 0;
      auVar129._0_8_ = uVar4;
      auVar134 = vmaxss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_8 + 4 + lVar17 * 2)));
      dVar35 = (double)puVar14[10];
      auVar23._8_8_ = 0;
      auVar23._0_8_ = dVar35;
      auVar135 = vminss_avx(auVar134,ZEXT416((uint)__real_3f800000));
      auVar134 = vmaxss_avx(auVar135,ZEXT416(*(uint *)(param_7 + (longlong)iVar7 * 4)));
      uVar5 = puVar14[0xb];
      auVar81._8_8_ = 0;
      auVar81._0_8_ = uVar5;
      *(int *)(param_7 + (longlong)iVar7 * 4) = auVar134._0_4_;
      fVar20 = auVar135._0_4_;
      local_138 = auVar124._0_8_;
      if (fVar20 <= __real_3727c5ac) {
        local_298 = auVar102._0_8_;
        local_208 = auVar122._0_8_;
        auVar98 = local_1e8;
        auVar89 = local_2a8;
      }
      else if (__real_3f7fff58 <= fVar20) {
        local_238 = auVar72;
        local_178 = auVar91;
        uVar133 = uVar3;
        auVar98 = auVar22;
        auVar124 = auVar140;
        auVar89 = auVar9;
        auVar37 = auVar36;
        auVar73._0_8_ = auVar126._0_8_;
        local_288 = uVar4;
        local_1c8._0_8_ = dVar65;
        local_2c8._0_8_ = dVar21;
        local_158._0_8_ = dVar34;
        local_2b8._0_8_ = dVar35;
        local_2d8._0_8_ = uVar5;
      }
      else {
        auVar38 = vunpcklpd_avx(auVar38,auVar107);
        auVar126 = vunpcklpd_avx(local_258,auVar89);
        auVar117._16_16_ = auVar38;
        auVar117._0_16_ = auVar126;
        auVar134 = vunpcklpd_avx(auVar139,auVar104);
        auVar135 = vunpcklpd_avx(auVar123,auVar97);
        auVar47._0_8_ = auVar126._0_8_ * auVar135._0_8_;
        auVar47._8_8_ = auVar126._8_8_ * auVar135._8_8_;
        auVar47._16_8_ = auVar38._0_8_ * auVar134._0_8_;
        auVar47._24_8_ = auVar38._8_8_ * auVar134._8_8_;
        auVar120 = vperm2f128_avx(auVar47,auVar47,1);
        auVar48._0_8_ = auVar47._0_8_ + auVar120._0_8_;
        auVar48._8_8_ = auVar47._8_8_ + auVar120._8_8_;
        auVar48._16_8_ = auVar47._16_8_ + auVar120._16_8_;
        auVar48._24_8_ = auVar47._24_8_ + auVar120._24_8_;
        auVar120 = vperm2f128_avx(auVar48,auVar48,1);
        auVar120 = vshufpd_avx(auVar48,auVar120,5);
        auVar49._0_8_ = auVar48._0_8_ + auVar120._0_8_;
        auVar49._8_8_ = auVar48._8_8_ + auVar120._8_8_;
        auVar49._16_8_ = auVar48._16_8_ + auVar120._16_8_;
        auVar49._24_8_ = auVar48._24_8_ + auVar120._24_8_;
        auVar107 = ZEXT816(0);
        auVar120 = vcmppd_avx(ZEXT1632(auVar107),auVar49,2);
        auVar73 = vpackssdw_avx(auVar120._0_16_,auVar120._16_16_);
        auVar89 = vpshufd_avx(auVar73,0x50);
        auVar73 = vpshufd_avx(auVar73,0xfa);
        auVar50._16_16_ = auVar73;
        auVar50._0_16_ = auVar89;
        auVar69 = ZEXT1632(auVar107);
        auVar120 = vcmpps_avx(ZEXT1632(auVar107),auVar69,0xf);
        auVar120 = vblendvps_avx(auVar69,auVar120,auVar50);
        auVar89 = vunpcklpd_avx(local_2b8,local_2d8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_288;
        auVar107 = vunpcklpd_avx(local_158,auVar10);
        auVar51._16_16_ = auVar89;
        auVar51._0_16_ = auVar107;
        auVar93 = vunpcklpd_avx(auVar23,auVar81);
        auVar73 = vmovlhps_avx(auVar66,auVar129);
        auVar27._16_16_ = auVar93;
        auVar27._0_16_ = auVar73;
        auVar119 = vsubpd_avx(auVar27,auVar51);
        dVar40 = (double)fVar20;
        auVar82._0_8_ = auVar107._0_8_ + dVar40 * auVar119._0_8_;
        auVar82._8_8_ = auVar107._8_8_ + dVar40 * auVar119._8_8_;
        auVar86._16_8_ = auVar89._0_8_ + dVar40 * auVar119._16_8_;
        auVar86._0_16_ = auVar82;
        auVar86._24_8_ = auVar89._8_8_ + dVar40 * auVar119._24_8_;
        auVar93 = vunpcklpd_avx(local_2c8,local_238);
        auVar107 = vshufpd_avx(auVar86._16_16_,auVar86._16_16_,1);
        auVar71 = vunpcklpd_avx(local_1c8,local_178);
        auVar73 = vshufpd_avx(auVar82,auVar82,1);
        local_288 = auVar73._0_8_;
        auVar28._16_16_ = auVar93;
        auVar28._0_16_ = auVar71;
        auVar73 = vmovlhps_avx(auVar136,auVar72);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = dVar65;
        auVar89 = vmovlhps_avx(auVar11,auVar91);
        auVar52._16_16_ = auVar73;
        auVar52._0_16_ = auVar89;
        auVar119 = vsubpd_avx(auVar52,auVar28);
        auVar24._0_8_ = auVar71._0_8_ + dVar40 * auVar119._0_8_;
        auVar24._8_8_ = auVar71._8_8_ + dVar40 * auVar119._8_8_;
        auVar29._16_8_ = auVar93._0_8_ + dVar40 * auVar119._16_8_;
        auVar29._0_16_ = auVar24;
        auVar29._24_8_ = auVar93._8_8_ + dVar40 * auVar119._24_8_;
        dVar21 = __real_3ff0000000000000 - dVar40;
        auVar119 = vsubpd_avx(auVar69,auVar117);
        auVar53._0_4_ = ~auVar120._0_4_ & auVar119._0_4_;
        auVar53._4_4_ = ~auVar120._4_4_ & auVar119._4_4_;
        auVar53._8_4_ = ~auVar120._8_4_ & auVar119._8_4_;
        auVar53._12_4_ = ~auVar120._12_4_ & auVar119._12_4_;
        auVar53._16_4_ = ~auVar120._16_4_ & auVar119._16_4_;
        auVar53._20_4_ = ~auVar120._20_4_ & auVar119._20_4_;
        auVar53._24_4_ = ~auVar120._24_4_ & auVar119._24_4_;
        auVar53._28_4_ = ~auVar120._28_4_ & auVar119._28_4_;
        auVar54._0_8_ = (ulonglong)auVar126._0_8_ & auVar120._0_8_;
        auVar54._8_8_ = (ulonglong)auVar126._8_8_ & auVar120._8_8_;
        auVar54._16_8_ = (ulonglong)auVar38._0_8_ & auVar120._16_8_;
        auVar54._24_8_ = (ulonglong)auVar38._8_8_ & auVar120._24_8_;
        auVar54 = auVar54 | auVar53;
        auVar37 = vunpcklpd_avx(auVar37,local_2a8);
        auVar124 = vunpcklpd_avx(local_1e8,auVar124);
        auVar36 = vunpcklpd_avx(auVar36,auVar9);
        auVar93 = vunpcklpd_avx(auVar22,auVar140);
        auVar83._0_8_ = auVar124._0_8_ * auVar93._0_8_ + auVar37._0_8_ * auVar36._0_8_;
        auVar83._8_8_ = auVar124._8_8_ * auVar93._8_8_ + auVar37._8_8_ * auVar36._8_8_;
        auVar73 = vshufpd_avx(auVar83,auVar83,1);
        dVar65 = auVar73._0_8_ + auVar83._0_8_;
        local_238 = vshufpd_avx(auVar29._16_16_,auVar29._16_16_,1);
        auVar84._0_4_ = (float)dVar65;
        auVar84._4_4_ = (int)((ulonglong)dVar65 >> 0x20);
        auVar84._8_8_ = 0;
        dVar34 = dVar40 * auVar135._0_8_ + dVar21 * auVar54._0_8_;
        dVar35 = dVar40 * auVar135._8_8_ + dVar21 * auVar54._8_8_;
        dVar39 = dVar40 * auVar134._0_8_ + dVar21 * auVar54._16_8_;
        dVar21 = dVar40 * auVar134._8_8_ + dVar21 * auVar54._24_8_;
        auVar111._0_4_ = (uint)(__real_3f800000 - fVar20) ^ __xmm_80000000800000008000000080000000;
        auVar111._4_4_ = _UNK_150651574;
        auVar111._8_4_ = _UNK_150651578;
        auVar111._12_4_ = _UNK_15065157c;
        auVar73 = vcmpss_avx(ZEXT816(0) << 0x20,auVar84,2);
        auVar73 = vblendvps_avx(auVar111,ZEXT416((uint)(__real_3f800000 - fVar20)),auVar73);
        auVar105._0_8_ = dVar39 * dVar39 + dVar34 * dVar34;
        auVar105._8_8_ = dVar21 * dVar21 + dVar35 * dVar35;
        auVar89 = vshufpd_avx(auVar105,auVar105,1);
        dVar65 = auVar89._0_8_ + auVar105._0_8_;
        auVar106._8_8_ = 0;
        auVar106._0_8_ = dVar65;
        dVar65 = __real_3ff0000000000000 / SQRT(dVar65);
        auVar132._8_8_ = 0;
        auVar132._0_8_ = __real_3e45798ee2308c3a;
        auVar89 = vcmpsd_avx(auVar132,auVar106,6);
        auVar126._0_8_ = ~auVar89._0_8_ & __real_ffffffffffffffff;
        auVar112._0_8_ = (ulonglong)(dVar65 * dVar34) & auVar126._0_8_;
        auVar112._8_8_ = (ulonglong)(dVar65 * dVar35) & auVar126._0_8_;
        auVar118._16_8_ = (ulonglong)(dVar65 * dVar39) & auVar126._0_8_;
        auVar118._0_16_ = auVar112;
        auVar118._24_8_ = (ulonglong)(dVar65 * dVar21) & auVar126._0_8_;
        auVar55._0_8_ =
             ~auVar126._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar55._8_8_ = ~auVar126._0_8_ & _UNK_150b54548;
        auVar55._16_8_ = ~auVar126._0_8_ & _UNK_150b54550;
        auVar55._24_8_ = ~auVar126._0_8_ & _UNK_150b54558;
        auVar134 = auVar118._16_16_ | auVar55._16_16_;
        local_178 = vpermilpd_avx(auVar24,1);
        auVar89 = vshufps_avx(auVar134,auVar134,0x4e);
        auVar38 = vshufps_avx(auVar112,auVar112,0x4e);
        dVar65 = (double)auVar73._0_4_;
        dVar21 = dVar40 * auVar93._0_8_ + auVar124._0_8_ * dVar65;
        dVar34 = dVar40 * auVar93._8_8_ + auVar124._8_8_ * dVar65;
        dVar35 = dVar40 * auVar36._0_8_ + auVar37._0_8_ * dVar65;
        dVar39 = dVar40 * auVar36._8_8_ + auVar37._8_8_ * dVar65;
        auVar41._0_8_ = dVar21 * dVar21 + dVar35 * dVar35;
        auVar41._8_8_ = dVar34 * dVar34 + dVar39 * dVar39;
        auVar73 = vshufpd_avx(auVar41,auVar41,1);
        dVar65 = auVar41._0_8_ + auVar73._0_8_;
        auVar42._8_8_ = 0;
        auVar42._0_8_ = dVar65;
        auVar73 = vcmpsd_avx(auVar132,auVar42,6);
        local_208 = auVar89._0_8_;
        local_298 = auVar38._0_8_;
        auVar126._0_8_ = ~auVar73._0_8_ & __real_ffffffffffffffff;
        dVar65 = __real_3ff0000000000000 / SQRT(dVar65);
        auVar98._0_8_ = (ulonglong)(dVar21 * dVar65) & auVar126._0_8_;
        auVar98._8_8_ = (ulonglong)(dVar34 * dVar65) & auVar126._0_8_;
        auVar101._16_8_ = (ulonglong)(dVar35 * dVar65) & auVar126._0_8_;
        auVar101._0_16_ = auVar98;
        auVar101._24_8_ = (ulonglong)(dVar39 * dVar65) & auVar126._0_8_;
        auVar30._0_8_ =
             ~auVar126._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar30._8_8_ = ~auVar126._0_8_ & _UNK_150b54548;
        auVar30._16_8_ = ~auVar126._0_8_ & _UNK_150b54550;
        auVar30._24_8_ = ~auVar126._0_8_ & _UNK_150b54558;
        auVar37 = auVar101._16_16_ | auVar30._16_16_;
        auVar124 = vshufps_avx(auVar98,auVar98,0x4e);
        auVar89 = vshufps_avx(auVar37,auVar37,0x4e);
        uVar133 = auVar134._0_8_;
        auVar73._0_8_ = auVar112._0_8_;
        local_1c8._0_8_ = auVar24._0_8_;
        local_2c8._0_8_ = auVar29._16_8_;
        local_158._0_8_ = auVar82._0_8_;
        local_2b8._0_8_ = auVar86._16_8_;
        local_2d8._0_8_ = auVar107._0_8_;
      }
      *(undefined8 *)(param_4 + lVar17 * 8) = local_1e8._0_8_;
      *(undefined8 *)(param_4 + 8 + lVar17 * 8) = local_138;
      *(undefined8 *)(param_4 + 0x10 + lVar17 * 8) = uVar80;
      *(undefined8 *)(param_4 + 0x18 + lVar17 * 8) = local_2a8._0_8_;
      *(double *)(param_5 + lVar17 * 8) = auVar22._0_8_;
      *(longlong *)(param_5 + 8 + lVar17 * 8) = auVar140._0_8_;
      *(double *)(param_5 + 0x10 + lVar17 * 8) = auVar26._16_8_;
      *(longlong *)(param_5 + 0x18 + lVar17 * 8) = auVar9._0_8_;
      if (iVar8 != -1) {
        pdVar1 = (double *)(param_6 + lVar18 * 0x20);
        pdVar2 = (double *)(param_6 + 0x10 + lVar18 * 0x20);
        auVar25._0_8_ =
             *pdVar1 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
        auVar25._8_8_ = pdVar1[1] * _UNK_150b543c8;
        auVar31._16_8_ = *pdVar2 * _UNK_150b543d0;
        auVar31._0_16_ = auVar25;
        auVar31._24_8_ = pdVar2[1] * _UNK_150b543d8;
        auVar119 = vperm2f128_avx(auVar31,auVar31,0x11);
        auVar120 = vshufpd_avx(auVar119,auVar119,0xf);
        auVar107 = vunpcklpd_avx(auVar98,auVar124);
        auVar38 = vunpcklpd_avx(auVar37,auVar89);
        auVar126 = vunpcklpd_avx(auVar89,auVar37);
        auVar134 = vunpcklpd_avx(auVar124,auVar98);
        auVar73 = vshufpd_avx(auVar25,auVar25,3);
        dVar21 = auVar134._0_8_ * auVar119._0_8_ *
                 ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                 auVar38._0_8_ * auVar73._0_8_ *
                 ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                 auVar107._0_8_ * auVar120._0_8_ +
                 auVar126._0_8_ * auVar25._0_8_ *
                 ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
        dVar34 = auVar134._8_8_ * auVar119._0_8_ * _UNK_150b54428 +
                 auVar38._8_8_ * auVar73._8_8_ * _UNK_150b54408 +
                 auVar107._8_8_ * auVar120._8_8_ + auVar126._8_8_ * auVar25._0_8_ * _UNK_150b543e8;
        dVar35 = auVar126._0_8_ * auVar119._16_8_ * _UNK_150b54430 +
                 auVar107._0_8_ * auVar73._0_8_ * _UNK_150b54410 +
                 auVar38._0_8_ * auVar120._16_8_ + auVar134._0_8_ * auVar25._0_8_ * _UNK_150b543f0;
        dVar39 = auVar126._8_8_ * auVar119._16_8_ * _UNK_150b54438 +
                 auVar107._8_8_ * auVar73._8_8_ * _UNK_150b54418 +
                 auVar38._8_8_ * auVar120._24_8_ + auVar134._8_8_ * auVar25._0_8_ * _UNK_150b543f8;
        auVar43._0_8_ = dVar21 * dVar21 + dVar35 * dVar35;
        auVar43._8_8_ = dVar34 * dVar34 + dVar39 * dVar39;
        auVar73 = vshufpd_avx(auVar43,auVar43,1);
        dVar65 = auVar43._0_8_ + auVar73._0_8_;
        auVar67._8_8_ = 0;
        auVar67._0_8_ = __real_3e45798ee2308c3a;
        auVar44._8_8_ = 0;
        auVar44._0_8_ = dVar65;
        auVar73 = vcmpsd_avx(auVar67,auVar44,6);
        auVar126._0_8_ = ~auVar73._0_8_ & __real_ffffffffffffffff;
        dVar65 = __real_3ff0000000000000 / SQRT(dVar65);
        auVar73._0_8_ = (ulonglong)(dVar21 * dVar65) & auVar126._0_8_;
        auVar73._8_8_ = (ulonglong)(dVar34 * dVar65) & auVar126._0_8_;
        auVar77._16_8_ = (ulonglong)(dVar35 * dVar65) & auVar126._0_8_;
        auVar77._0_16_ = auVar73;
        auVar77._24_8_ = (ulonglong)(dVar39 * dVar65) & auVar126._0_8_;
        auVar32._0_8_ =
             ~auVar126._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar32._8_8_ = ~auVar126._0_8_ & _UNK_150b54548;
        auVar32._16_8_ = ~auVar126._0_8_ & _UNK_150b54550;
        auVar32._24_8_ = ~auVar126._0_8_ & _UNK_150b54558;
        auVar38 = auVar77._16_16_ | auVar32._16_16_;
        auVar107 = vshufps_avx(auVar73,auVar73,0x4e);
        local_298 = auVar107._0_8_;
        uVar133 = auVar38._0_8_;
        auVar107 = vshufps_avx(auVar38,auVar38,0x4e);
        local_208 = auVar107._0_8_;
      }
      *(longlong *)(param_6 + lVar17 * 8) = auVar98._0_8_;
      *(longlong *)(param_6 + 8 + lVar17 * 8) = auVar124._0_8_;
      *(longlong *)(param_6 + 0x10 + lVar17 * 8) = auVar37._0_8_;
      *(longlong *)(param_6 + 0x18 + lVar17 * 8) = auVar89._0_8_;
      *(ulonglong *)(param_1 + -0x58 + lVar19 * 2) = auVar73._0_8_;
      *(ulonglong *)(param_1 + -0x50 + lVar19 * 2) = local_298;
      *(ulonglong *)(param_1 + -0x48 + lVar19 * 2) = uVar133;
      *(ulonglong *)(param_1 + -0x40 + lVar19 * 2) = local_208;
      *(undefined8 *)(param_1 + -0x38 + lVar19 * 2) = local_1c8._0_8_;
      *(undefined8 *)(param_1 + -0x30 + lVar19 * 2) = local_178._0_8_;
      *(undefined8 *)(param_1 + -0x28 + lVar19 * 2) = local_2c8._0_8_;
      *(undefined8 *)(param_1 + -0x20 + lVar19 * 2) = local_238._0_8_;
      *(undefined8 *)(param_1 + -0x18 + lVar19 * 2) = local_158._0_8_;
      *(ulonglong *)(param_1 + -0x10 + lVar19 * 2) = local_288;
      *(undefined8 *)(param_1 + -8 + lVar19 * 2) = local_2b8._0_8_;
      *(undefined8 *)(param_1 + lVar19 * 2) = local_2d8._0_8_;
      iVar16 = iVar16 + 1;
      lVar19 = lVar19 + 0x30;
      lVar17 = lVar17 + 4;
    } while ((ulonglong)param_10 << 2 != lVar17);
  }
  return;
}

// BlendPosesPerBoneFilterScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx @ 140ab7c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10,
               undefined1 (*param_11) [32])

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [24];
  undefined1 auVar14 [24];
  int iVar15;
  ulonglong *puVar16;
  undefined4 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auVar22 [16];
  double dVar35;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  double dVar34;
  double dVar36;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  ulonglong uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [32];
  undefined1 auVar97 [16];
  double dVar93;
  undefined1 auVar95 [16];
  undefined8 uVar94;
  undefined1 auVar98 [16];
  undefined1 auVar96 [16];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar103 [32];
  undefined1 auVar105 [16];
  double dVar106;
  undefined1 auVar104 [32];
  undefined1 auVar109 [16];
  undefined1 auVar107 [16];
  undefined1 auVar110 [32];
  undefined1 auVar108 [16];
  undefined1 auVar111 [32];
  undefined1 auVar121 [16];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  double dVar122;
  undefined1 auVar123 [16];
  undefined1 auVar126 [16];
  double dVar144;
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  double dVar143;
  double dVar145;
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  ulonglong uVar146;
  undefined1 auVar148 [16];
  double dVar147;
  double dVar158;
  double dVar160;
  undefined1 auVar150 [32];
  undefined1 auVar149 [16];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  double dVar159;
  undefined1 auVar157 [64];
  undefined1 auVar161 [16];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar162 [16];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [64];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [16];
  undefined1 auVar178 [32];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  ulonglong uVar187;
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [32];
  undefined1 auVar192 [64];
  ulonglong uVar193;
  undefined1 auVar194 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 auStack_248 [16];
  undefined1 local_238 [16];
  undefined1 auStack_228 [16];
  undefined1 local_218 [16];
  undefined1 local_1e8 [32];
  undefined1 local_1b8 [16];
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  undefined1 local_188 [32];
  double local_168;
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar88 [32];
  undefined1 auVar102 [32];
  undefined1 auVar118 [32];
  undefined1 auVar130 [32];
  undefined1 auVar135 [32];
  undefined1 auVar182 [32];
  undefined1 auVar191 [32];
  
  auVar178 = *param_11;
  auVar41 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
  auVar43 = vpcmpgtd_avx(*(undefined1 (*) [16])(*param_11 + 0x10),auVar41);
  auVar41 = vpcmpgtd_avx(auVar178._0_16_,auVar41);
  auVar41 = vpor_avx(auVar41,auVar43);
  if ((((SUB161(auVar41 >> 0x1f,0) & 1) == 0 && (SUB161(auVar41 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar41 >> 0x5f,0) & 1) == 0) && -1 < auVar41[0xf]) {
    if (0 < (int)param_10) {
      lVar18 = 0;
      lVar20 = 0;
      do {
        iVar15 = *(int *)(param_8 + lVar20 * 8);
        iVar8 = *(int *)(param_9 + lVar20 * 4);
        lVar19 = (longlong)iVar8;
        local_218._0_8_ = *(ulonglong *)(param_2 + lVar18 * 4);
        local_218._8_8_ = 0;
        local_2b8._0_8_ = *(ulonglong *)(param_2 + 8 + lVar18 * 4);
        local_2b8._8_8_ = 0;
        local_238._8_8_ = 0;
        local_238._0_8_ = *(ulonglong *)(param_2 + 0x10 + lVar18 * 4);
        local_2a8._0_8_ = *(ulonglong *)(param_2 + 0x18 + lVar18 * 4);
        local_2a8._8_8_ = 0;
        local_258._0_8_ = *(double *)(param_2 + 0x20 + lVar18 * 4);
        local_258._8_8_ = 0;
        local_278._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar18 * 4);
        local_1b8._0_8_ = *(double *)(param_2 + 0x30 + lVar18 * 4);
        local_1b8._8_8_ = 0;
        local_268._0_8_ = *(ulonglong *)(param_2 + 0x38 + lVar18 * 4);
        local_298._0_8_ = *(double *)(param_2 + 0x40 + lVar18 * 4);
        local_298._8_8_ = 0;
        local_128._8_8_ = 0;
        local_128._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar18 * 4);
        local_268._8_8_ = 0;
        auVar157 = ZEXT864(*(ulonglong *)(param_2 + 0x50 + lVar18 * 4));
        local_278._8_8_ = 0;
        auVar172 = ZEXT864(*(ulonglong *)(param_2 + 0x48 + lVar18 * 4));
        puVar16 = (ulonglong *)GetTransformFromArray(param_3,iVar15,(int)lVar20);
        auVar43._0_8_ = (double)puVar16[8];
        auVar91._8_8_ = 0;
        auVar91._0_8_ = auVar43._0_8_;
        uVar37 = puVar16[9];
        auVar61._8_8_ = 0;
        auVar61._0_8_ = uVar37;
        auVar41._0_8_ = (double)puVar16[10];
        auVar89._8_8_ = 0;
        auVar89._0_8_ = auVar41._0_8_;
        auVar22 = auVar172._0_16_;
        local_318._0_8_ = auVar172._0_8_;
        local_168 = auVar157._0_8_;
        if (lVar19 == -1) {
          local_2c8._8_8_ = 0;
          local_2c8._0_8_ = local_298._0_8_;
          auVar96 = auVar89;
          local_308 = auVar22;
          local_2f8 = auVar157._0_16_;
          local_2e8 = auVar61;
          local_2d8 = auVar91;
        }
        else {
          lVar9 = lVar19 * 0x18;
          auVar96 = vunpcklpd_avx(local_298,auVar22);
          local_2c8._0_8_ = auVar96._0_8_ * *(double *)(param_4 + lVar9);
          local_2c8._8_8_ = auVar96._8_8_ * ((double *)(param_4 + lVar9))[1];
          local_2f8._8_8_ = 0;
          local_2f8._0_8_ = local_168 * *(double *)(param_4 + 0x10 + lVar9);
          auVar96 = vunpcklpd_avx(auVar91,auVar61);
          local_2d8._0_8_ = auVar96._0_8_ * *(double *)(param_5 + lVar9);
          local_2d8._8_8_ = auVar96._8_8_ * ((double *)(param_5 + lVar9))[1];
          local_308 = vshufpd_avx(local_2c8,local_2c8,1);
          local_2e8 = vshufpd_avx(local_2d8,local_2d8,1);
          auVar96._8_8_ = 0;
          auVar96._0_8_ = auVar41._0_8_ * *(double *)(param_5 + 0x10 + lVar9);
        }
        uVar193 = *puVar16;
        auVar65._8_8_ = 0;
        auVar65._0_8_ = uVar193;
        uVar187 = puVar16[1];
        auVar42._8_8_ = 0;
        auVar42._0_8_ = uVar187;
        auVar181._8_8_ = 0;
        auVar181._0_8_ = puVar16[2];
        uVar146 = puVar16[3];
        auVar177._8_8_ = 0;
        auVar177._0_8_ = uVar146;
        local_188._0_8_ = puVar16[4];
        uVar1 = puVar16[5];
        auVar188._8_8_ = 0;
        auVar188._0_8_ = uVar1;
        dVar34 = (double)puVar16[6];
        auVar174._8_8_ = 0;
        auVar174._0_8_ = dVar34;
        auVar105 = vmaxss_avx(ZEXT816(0),ZEXT416(*(uint *)(param_8 + 4 + lVar20 * 8)));
        uVar2 = puVar16[7];
        auVar162._8_8_ = 0;
        auVar162._0_8_ = uVar2;
        auVar66 = vminss_avx(auVar105,ZEXT416(__real_3f800000));
        auVar105 = vmaxss_avx(auVar66,ZEXT416(*(uint *)(param_7 + (longlong)iVar15 * 4)));
        auVar186._8_8_ = 0;
        auVar186._0_8_ = puVar16[0xb];
        *(int *)(param_7 + (longlong)iVar15 * 4) = auVar105._0_4_;
        fVar21 = auVar66._0_4_;
        dVar35 = local_2f8._0_8_;
        if (fVar21 <= __real_3727c5ac) {
          auVar178 = ZEXT1632(ZEXT816(0));
          auVar22 = local_2c8;
          auVar91 = local_308;
          auVar41._0_8_ = dVar35;
        }
        else {
          local_188._8_8_ = 0;
          if (__real_3f7fff58 <= fVar21) {
            local_238 = auVar181;
            local_128._0_16_ = auVar186;
            auVar178 = ZEXT1632(ZEXT816(0));
            auVar22 = local_2d8;
            auVar91 = local_2e8;
            local_268._0_8_ = uVar2;
            local_1b8._0_8_ = dVar34;
            local_278._0_8_ = uVar1;
            local_168 = auVar41._0_8_;
            local_318._0_8_ = uVar37;
            local_218._0_8_ = uVar193;
            local_2b8._0_8_ = uVar187;
            local_2a8._0_8_ = uVar146;
            auVar41._0_8_ = auVar96._0_8_;
            local_298._0_8_ = auVar43._0_8_;
            local_258._0_8_ = local_188._0_8_;
          }
          else {
            auVar66 = vunpcklpd_avx(local_238,local_2a8);
            auVar67 = vunpcklpd_avx(local_218,local_2b8);
            auVar153._16_16_ = auVar66;
            auVar153._0_16_ = auVar67;
            auVar177 = vunpcklpd_avx(auVar181,auVar177);
            auVar42 = vunpcklpd_avx(auVar65,auVar42);
            auVar51._0_8_ = auVar67._0_8_ * auVar42._0_8_;
            auVar51._8_8_ = auVar67._8_8_ * auVar42._8_8_;
            auVar51._16_8_ = auVar66._0_8_ * auVar177._0_8_;
            auVar51._24_8_ = auVar66._8_8_ * auVar177._8_8_;
            auVar178 = vperm2f128_avx(auVar51,auVar51,1);
            auVar52._0_8_ = auVar51._0_8_ + auVar178._0_8_;
            auVar52._8_8_ = auVar51._8_8_ + auVar178._8_8_;
            auVar52._16_8_ = auVar51._16_8_ + auVar178._16_8_;
            auVar52._24_8_ = auVar51._24_8_ + auVar178._24_8_;
            auVar178 = vperm2f128_avx(auVar52,auVar52,1);
            auVar178 = vshufpd_avx(auVar52,auVar178,5);
            auVar53._0_8_ = auVar52._0_8_ + auVar178._0_8_;
            auVar53._8_8_ = auVar52._8_8_ + auVar178._8_8_;
            auVar53._16_8_ = auVar52._16_8_ + auVar178._16_8_;
            auVar53._24_8_ = auVar52._24_8_ + auVar178._24_8_;
            auVar105 = ZEXT816(0);
            auVar178 = ZEXT1632(auVar105);
            auVar51 = vcmppd_avx(ZEXT1632(auVar105),auVar53,2);
            auVar41 = vpackssdw_avx(auVar51._0_16_,auVar51._16_16_);
            auVar43 = vpshufd_avx(auVar41,0x50);
            auVar41 = vpshufd_avx(auVar41,0xfa);
            auVar54._16_16_ = auVar41;
            auVar54._0_16_ = auVar43;
            auVar53 = ZEXT1632(auVar105);
            auVar51 = vcmpps_avx(ZEXT1632(auVar105),auVar53,0xf);
            auVar51 = vblendvps_avx(auVar53,auVar51,auVar54);
            auVar41 = vunpcklpd_avx(auVar157._0_16_,local_128._0_16_);
            auVar43 = vunpcklpd_avx(local_298,auVar22);
            auVar55._16_16_ = auVar41;
            auVar55._0_16_ = auVar43;
            auVar22 = vunpcklpd_avx(auVar89,auVar186);
            auVar91 = vunpcklpd_avx(auVar91,auVar61);
            auVar70._16_16_ = auVar22;
            auVar70._0_16_ = auVar91;
            auVar52 = vsubpd_avx(auVar70,auVar55);
            dVar122 = (double)fVar21;
            auVar78._0_8_ = auVar43._0_8_ + auVar52._0_8_ * dVar122;
            auVar78._8_8_ = auVar43._8_8_ + auVar52._8_8_ * dVar122;
            auVar84._16_8_ = auVar41._0_8_ + auVar52._16_8_ * dVar122;
            auVar84._0_16_ = auVar78;
            auVar84._24_8_ = auVar41._8_8_ + auVar52._24_8_ * dVar122;
            auVar41 = vunpcklpd_avx(local_1b8,local_268);
            local_128._0_16_ = vshufpd_avx(auVar84._16_16_,auVar84._16_16_,1);
            auVar43 = vunpcklpd_avx(local_258,local_278);
            auVar61 = vshufpd_avx(auVar78,auVar78,1);
            auVar56._16_16_ = auVar41;
            auVar56._0_16_ = auVar43;
            auVar91 = vunpcklpd_avx(auVar174,auVar162);
            auVar22 = vunpcklpd_avx(local_188._0_16_,auVar188);
            auVar71._16_16_ = auVar91;
            auVar71._0_16_ = auVar22;
            auVar52 = vsubpd_avx(auVar71,auVar56);
            auVar189._0_8_ = auVar43._0_8_ + auVar52._0_8_ * dVar122;
            auVar189._8_8_ = auVar43._8_8_ + auVar52._8_8_ * dVar122;
            auVar191._16_8_ = auVar41._0_8_ + auVar52._16_8_ * dVar122;
            auVar191._0_16_ = auVar189;
            auVar191._24_8_ = auVar41._8_8_ + auVar52._24_8_ * dVar122;
            auVar89 = vshufpd_avx(auVar191._16_16_,auVar191._16_16_,1);
            auVar105 = vshufpd_avx(auVar189,auVar189,1);
            auVar43._0_8_ = __real_3ff0000000000000 - dVar122;
            auVar52 = vsubpd_avx(auVar53,auVar153);
            local_238._0_8_ = auVar51._0_8_;
            local_238._8_8_ = auVar51._8_8_;
            auStack_228._0_8_ = auVar51._16_8_;
            auStack_228._8_8_ = auVar51._24_8_;
            auVar41._0_8_ =
                 dVar122 * auVar42._0_8_ +
                 auVar43._0_8_ *
                 (double)((ulonglong)auVar67._0_8_ & local_238._0_8_ |
                         ~local_238._0_8_ & auVar52._0_8_);
            dVar34 = dVar122 * auVar42._8_8_ +
                     auVar43._0_8_ *
                     (double)((ulonglong)auVar67._8_8_ & local_238._8_8_ |
                             ~local_238._8_8_ & auVar52._8_8_);
            dVar36 = dVar122 * auVar177._0_8_ +
                     auVar43._0_8_ *
                     (double)((ulonglong)auVar66._0_8_ & auStack_228._0_8_ |
                             ~auStack_228._0_8_ & auVar52._16_8_);
            dVar93 = dVar122 * auVar177._8_8_ +
                     auVar43._0_8_ *
                     (double)((ulonglong)auVar66._8_8_ & auStack_228._8_8_ |
                             ~auStack_228._8_8_ & auVar52._24_8_);
            auVar66._0_8_ = auVar41._0_8_ * auVar41._0_8_ + dVar36 * dVar36;
            auVar66._8_8_ = dVar34 * dVar34 + dVar93 * dVar93;
            auVar43 = vshufpd_avx(auVar66,auVar66,1);
            auVar43._0_8_ = auVar66._0_8_ + auVar43._0_8_;
            auVar67._8_8_ = 0;
            auVar67._0_8_ = auVar43._0_8_;
            auVar43._0_8_ = __real_3ff0000000000000 / SQRT(auVar43._0_8_);
            auVar79._8_8_ = 0;
            auVar79._0_8_ = __real_3e45798ee2308c3a;
            auVar91 = vcmpsd_avx(auVar79,auVar67,6);
            uVar37 = ~auVar91._0_8_ & __real_ffffffffffffffff;
            auVar80._0_8_ = (ulonglong)(auVar41._0_8_ * auVar43._0_8_) & uVar37;
            auVar80._8_8_ = (ulonglong)(dVar34 * auVar43._0_8_) & uVar37;
            auVar85._16_8_ = (ulonglong)(dVar36 * auVar43._0_8_) & uVar37;
            auVar85._0_16_ = auVar80;
            auVar85._24_8_ = (ulonglong)(dVar93 * auVar43._0_8_) & uVar37;
            auVar57._0_8_ =
                 ~uVar37 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
            auVar57._8_8_ = ~uVar37 & _UNK_150b54548;
            auVar57._16_8_ = ~uVar37 & _UNK_150b54550;
            auVar57._24_8_ = ~uVar37 & _UNK_150b54558;
            local_238 = auVar85._16_16_ | auVar57._16_16_;
            auStack_228 = auVar51._16_16_;
            auVar41 = vshufps_avx(local_238,local_238,0x4e);
            auVar43 = vshufps_avx(auVar80,auVar80,0x4e);
            auVar91 = vunpcklpd_avx(local_2d8,local_2e8);
            auVar58._16_16_ = auVar96;
            auVar58._0_16_ = auVar91;
            auVar91 = vunpcklpd_avx(local_2c8,local_308);
            auVar72._16_16_ = local_2f8;
            auVar72._0_16_ = auVar91;
            auVar51 = vsubpd_avx(auVar58,auVar72);
            auVar22._0_8_ = auVar91._0_8_ + auVar51._0_8_ * dVar122;
            auVar22._8_8_ = auVar91._8_8_ + auVar51._8_8_ * dVar122;
            auVar91 = vshufpd_avx(auVar22,auVar22,1);
            local_268._0_8_ = auVar89._0_8_;
            local_1b8._0_8_ = auVar191._16_8_;
            local_278._0_8_ = auVar105._0_8_;
            local_168 = auVar84._16_8_;
            local_318._0_8_ = auVar61._0_8_;
            local_218._0_8_ = auVar80._0_8_;
            local_2b8._0_8_ = auVar43._0_8_;
            local_2a8._0_8_ = auVar41._0_8_;
            auVar41._0_8_ = dVar35 + auVar51._16_8_ * dVar122;
            local_298._0_8_ = auVar78._0_8_;
            local_258._0_8_ = auVar189._0_8_;
          }
        }
        *(longlong *)(param_4 + lVar18) = local_2c8._0_8_;
        *(longlong *)(param_4 + 8 + lVar18) = local_308._0_8_;
        *(double *)(param_4 + 0x10 + lVar18) = dVar35;
        *(undefined8 *)(param_5 + lVar18) = local_2d8._0_8_;
        *(undefined8 *)(param_5 + 8 + lVar18) = local_2e8._0_8_;
        *(double *)(param_5 + 0x10 + lVar18) = auVar96._0_8_;
        auVar169._8_8_ = __real_3e45798ee2308c3a;
        auVar169._0_8_ = __real_3e45798ee2308c3a;
        auVar169._16_8_ = __real_3e45798ee2308c3a;
        auVar169._24_8_ = __real_3e45798ee2308c3a;
        if (iVar8 == -1) {
          uVar94 = local_128._0_8_;
          auVar43._0_8_ = (double)local_298._0_8_;
        }
        else {
          auVar43._0_8_ = *(double *)(param_6 + 0x10 + lVar19 * 0x18);
          auVar61 = *(undefined1 (*) [16])(param_6 + lVar19 * 0x18);
          auVar73._16_8_ = auVar43._0_8_;
          auVar73._0_16_ = auVar61;
          auVar73._24_8_ = 0;
          dVar34 = auVar61._0_8_;
          auVar86._0_8_ =
               (ulonglong)dVar34 &
               ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
          dVar35 = auVar61._8_8_;
          auVar86._8_8_ = (ulonglong)dVar35 & _UNK_150aa8f48;
          auVar86._16_8_ = (ulonglong)auVar43._0_8_ & _UNK_150aa8f50;
          auVar86._24_8_ = 0;
          auVar51 = vcmppd_avx(auVar86,auVar169,2);
          auVar61 = vpackssdw_avx(auVar51._0_16_,auVar51._16_16_);
          auVar51 = vcmppd_avx(auVar73,
                               ___ymm_46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c
                               ,2);
          auVar89 = vpackssdw_avx(auVar51._0_16_,auVar51._16_16_);
          auVar99._8_8_ = __real_3914c4e977ba1f5c;
          auVar99._0_8_ = __real_3914c4e977ba1f5c;
          auVar99._16_8_ = __real_3914c4e977ba1f5c;
          auVar99._24_8_ = __real_3914c4e977ba1f5c;
          auVar51 = vcmppd_avx(auVar99,auVar73,2);
          auVar96 = vpackssdw_avx(auVar51._0_16_,auVar51._16_16_);
          auVar105 = vpand_avx(auVar89,auVar96);
          iVar15 = vmovmskps_avx(ZEXT1632(CONCAT412(~auVar61._12_4_ & auVar105._12_4_,
                                                    CONCAT48(~auVar61._8_4_ & auVar105._8_4_,
                                                             CONCAT44(~auVar61._4_4_ &
                                                                      auVar105._4_4_,
                                                                      ~auVar61._0_4_ &
                                                                      auVar105._0_4_)))));
          dVar36 = auVar178._8_8_;
          dVar93 = auVar178._16_8_;
          dVar122 = auVar178._24_8_;
          if (iVar15 == 0) {
            auVar87 = ZEXT832(0) << 0x40;
LAB_140ab8fd7:
            auVar51 = vcmpps_avx(auVar178,auVar178,0xf);
            auVar81._0_8_ = auVar87._0_8_ ^ auVar51._0_8_;
            auVar81._8_8_ = auVar87._8_8_ ^ auVar51._8_8_;
            auVar88._16_8_ = auVar87._16_8_ ^ auVar51._16_8_;
            auVar88._0_16_ = auVar81;
            auVar88._24_8_ = auVar87._24_8_ ^ auVar51._24_8_;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulonglong)dVar36 & __real_7fe0000000000000;
            auVar14._8_8_ = (ulonglong)dVar93 & __real_7fe0000000000000;
            auVar14._0_8_ = (ulonglong)dVar36 & __real_7fe0000000000000;
            auVar14._16_8_ = (ulonglong)dVar122 & __real_7fe0000000000000;
            auVar98._0_8_ = (ulonglong)dVar34 & __real_7fe0000000000000;
            auVar98._8_8_ = (ulonglong)dVar35 & __real_7fe0000000000000;
            auVar105._0_8_ = (ulonglong)auVar43._0_8_ & __real_7fe0000000000000;
            auVar105._8_8_ = 0;
            auVar126._8_8_ = __real_7fcfffffffffffff;
            auVar126._0_8_ = __real_7fcfffffffffffff;
            auVar105 = vpsubq_avx(auVar126,auVar105);
            auVar66 = vpsubq_avx(auVar126,auVar98);
            auVar42 = vpsubq_avx(auVar126,auVar14._8_16_);
            auVar65 = vpsubq_avx(auVar126,auVar12 << 0x40);
            auVar115._0_8_ = dVar34 * auVar66._0_8_;
            auVar115._8_8_ = dVar35 * auVar66._8_8_;
            auVar115._16_8_ = auVar43._0_8_ * auVar105._0_8_;
            auVar115._24_8_ = auVar105._8_8_ * 0.0;
            auVar89 = vcvtpd2ps_avx(auVar115);
            auVar141._0_8_ = auVar65._0_8_ * 0.0;
            auVar141._8_8_ = dVar36 * auVar65._8_8_;
            auVar141._16_8_ = dVar93 * auVar42._0_8_;
            auVar141._24_8_ = dVar122 * auVar42._8_8_;
            auVar96 = vcvtpd2ps_avx(auVar141);
            auVar116._16_16_ = auVar96;
            auVar116._0_16_ = auVar89;
            auVar51 = vrcpps_avx(auVar116);
            auVar117._0_4_ = auVar51._0_4_ * auVar89._0_4_;
            auVar117._4_4_ = auVar51._4_4_ * auVar89._4_4_;
            auVar117._8_4_ = auVar51._8_4_ * auVar89._8_4_;
            auVar117._12_4_ = auVar51._12_4_ * auVar89._12_4_;
            auVar117._16_4_ = auVar51._16_4_ * auVar96._0_4_;
            auVar117._20_4_ = auVar51._20_4_ * auVar96._4_4_;
            auVar117._24_4_ = auVar51._24_4_ * auVar96._8_4_;
            auVar117._28_4_ = auVar51._28_4_ * auVar96._12_4_;
            auVar170._4_4_ = __real_40000000;
            auVar170._0_4_ = __real_40000000;
            auVar170._8_4_ = __real_40000000;
            auVar170._12_4_ = __real_40000000;
            auVar170._16_4_ = __real_40000000;
            auVar170._20_4_ = __real_40000000;
            auVar170._24_4_ = __real_40000000;
            auVar170._28_4_ = __real_40000000;
            auVar52 = vsubps_avx(auVar170,auVar117);
            auVar109._0_4_ = auVar51._0_4_ * auVar52._0_4_;
            auVar109._4_4_ = auVar51._4_4_ * auVar52._4_4_;
            auVar109._8_4_ = auVar51._8_4_ * auVar52._8_4_;
            auVar109._12_4_ = auVar51._12_4_ * auVar52._12_4_;
            auVar118._16_4_ = auVar51._16_4_ * auVar52._16_4_;
            auVar118._0_16_ = auVar109;
            auVar118._20_4_ = auVar51._20_4_ * auVar52._20_4_;
            auVar118._24_4_ = auVar51._24_4_ * auVar52._24_4_;
            auVar118._28_4_ = auVar51._28_4_ * auVar52._28_4_;
            auVar51 = vcvtps2pd_avx(auVar109);
            auVar52 = vcvtps2pd_avx(auVar118._16_16_);
            dVar143 = auVar65._0_8_ * auVar52._0_8_;
            dVar144 = auVar65._8_8_ * auVar52._8_8_;
            dVar145 = auVar42._0_8_ * auVar52._16_8_;
            dVar147 = auVar42._8_8_ * auVar52._24_8_;
            dVar158 = auVar66._0_8_ * auVar51._0_8_;
            dVar159 = auVar66._8_8_ * auVar51._8_8_;
            dVar160 = auVar105._0_8_ * auVar51._16_8_;
            dVar106 = auVar105._8_8_ * auVar51._24_8_;
            auVar119._0_8_ = dVar34 * dVar158;
            auVar119._8_8_ = dVar35 * dVar159;
            auVar119._16_8_ = auVar43._0_8_ * dVar160;
            auVar119._24_8_ = dVar106 * 0.0;
            auVar142._0_8_ = dVar143 * 0.0;
            auVar142._8_8_ = dVar36 * dVar144;
            auVar142._16_8_ = dVar93 * dVar145;
            auVar142._24_8_ = dVar122 * dVar147;
            auVar171._8_8_ = __real_4000000000000000;
            auVar171._0_8_ = __real_4000000000000000;
            auVar171._16_8_ = __real_4000000000000000;
            auVar171._24_8_ = __real_4000000000000000;
            auVar51 = vsubpd_avx(auVar171,auVar142);
            auVar52 = vsubpd_avx(auVar171,auVar119);
            dVar158 = dVar158 * auVar52._0_8_;
            dVar159 = dVar159 * auVar52._8_8_;
            dVar160 = dVar160 * auVar52._16_8_;
            dVar106 = dVar106 * auVar52._24_8_;
            dVar143 = dVar143 * auVar51._0_8_;
            dVar144 = dVar144 * auVar51._8_8_;
            dVar145 = dVar145 * auVar51._16_8_;
            dVar147 = dVar147 * auVar51._24_8_;
            auVar120._0_8_ = dVar143 * 0.0;
            auVar120._8_8_ = dVar36 * dVar144;
            auVar120._16_8_ = dVar93 * dVar145;
            auVar120._24_8_ = dVar122 * dVar147;
            auVar74._0_8_ = dVar34 * dVar158;
            auVar74._8_8_ = dVar35 * dVar159;
            auVar74._16_8_ = auVar43._0_8_ * dVar160;
            auVar74._24_8_ = dVar106 * 0.0;
            auVar51 = vsubpd_avx(auVar171,auVar74);
            auVar52 = vsubpd_avx(auVar171,auVar120);
            auVar92._0_8_ = dVar143 * auVar52._0_8_;
            auVar92._8_8_ = dVar144 * auVar52._8_8_;
            auVar92._16_8_ = dVar145 * auVar52._16_8_;
            auVar92._24_8_ = dVar147 * auVar52._24_8_;
            auVar75._0_8_ = dVar158 * auVar51._0_8_;
            auVar75._8_8_ = dVar159 * auVar51._8_8_;
            auVar75._16_8_ = dVar160 * auVar51._16_8_;
            auVar75._24_8_ = dVar106 * auVar51._24_8_;
            auVar43 = vshufps_avx(auVar81,auVar81,0x50);
            auVar89 = vshufps_avx(auVar81,auVar81,0xfa);
            auVar104._16_16_ = auVar89;
            auVar104._0_16_ = auVar43;
            local_148 = vblendvps_avx(local_148,auVar75,auVar104);
            auVar89 = auVar88._16_16_;
            auVar43 = vshufps_avx(auVar89,auVar89,0x50);
            auVar89 = vshufps_avx(auVar89,auVar89,0xfa);
            auVar76._16_16_ = auVar89;
            auVar76._0_16_ = auVar43;
            local_1e8 = vblendvps_avx(local_1e8,auVar92,auVar76);
          }
          else {
            auVar89 = vpackssdw_avx(auVar89,___xmm_ffffffffffffffffffffffffffffffff);
            auVar96 = vpackssdw_avx(auVar96,ZEXT416(0) << 0x20);
            auVar105 = vpand_avx(auVar89,auVar96);
            auVar89 = vcvtpd2ps_avx(auVar73);
            auVar96 = vcvtpd2ps_avx(auVar178);
            auVar100._16_16_ = auVar96;
            auVar100._0_16_ = auVar89;
            auVar51 = vrcpps_avx(auVar100);
            auVar66 = vpmovsxwd_avx(auVar105);
            auVar101._0_4_ = auVar51._0_4_ * auVar89._0_4_;
            auVar101._4_4_ = auVar51._4_4_ * auVar89._4_4_;
            auVar101._8_4_ = auVar51._8_4_ * auVar89._8_4_;
            auVar101._12_4_ = auVar51._12_4_ * auVar89._12_4_;
            auVar101._16_4_ = auVar51._16_4_ * auVar96._0_4_;
            auVar101._20_4_ = auVar51._20_4_ * auVar96._4_4_;
            auVar101._24_4_ = auVar51._24_4_ * auVar96._8_4_;
            auVar101._28_4_ = auVar51._28_4_ * auVar96._12_4_;
            auVar154._4_4_ = __real_40000000;
            auVar154._0_4_ = __real_40000000;
            auVar154._8_4_ = __real_40000000;
            auVar154._12_4_ = __real_40000000;
            auVar154._16_4_ = __real_40000000;
            auVar154._20_4_ = __real_40000000;
            auVar154._24_4_ = __real_40000000;
            auVar154._28_4_ = __real_40000000;
            auVar52 = vsubps_avx(auVar154,auVar101);
            auVar97._0_4_ = auVar51._0_4_ * auVar52._0_4_;
            auVar97._4_4_ = auVar51._4_4_ * auVar52._4_4_;
            auVar97._8_4_ = auVar51._8_4_ * auVar52._8_4_;
            auVar97._12_4_ = auVar51._12_4_ * auVar52._12_4_;
            auVar102._16_4_ = auVar51._16_4_ * auVar52._16_4_;
            auVar102._0_16_ = auVar97;
            auVar102._20_4_ = auVar51._20_4_ * auVar52._20_4_;
            auVar102._24_4_ = auVar51._24_4_ * auVar52._24_4_;
            auVar102._28_4_ = auVar51._28_4_ * auVar52._28_4_;
            auVar51 = vcvtps2pd_avx(auVar97);
            auVar155._0_8_ = dVar34 * auVar51._0_8_;
            auVar155._8_8_ = dVar35 * auVar51._8_8_;
            auVar155._16_8_ = auVar43._0_8_ * auVar51._16_8_;
            auVar155._24_8_ = auVar51._24_8_ * 0.0;
            auVar184._8_8_ = __real_4000000000000000;
            auVar184._0_8_ = __real_4000000000000000;
            auVar184._16_8_ = __real_4000000000000000;
            auVar184._24_8_ = __real_4000000000000000;
            auVar52 = vsubpd_avx(auVar184,auVar155);
            dVar143 = auVar52._0_8_ * auVar51._0_8_;
            dVar144 = auVar52._8_8_ * auVar51._8_8_;
            dVar145 = auVar52._16_8_ * auVar51._16_8_;
            dVar147 = auVar52._24_8_ * auVar51._24_8_;
            auVar156._0_8_ = dVar34 * dVar143;
            auVar156._8_8_ = dVar35 * dVar144;
            auVar156._16_8_ = auVar43._0_8_ * dVar145;
            auVar156._24_8_ = dVar147 * 0.0;
            auVar51 = vsubpd_avx(auVar184,auVar156);
            auVar113._0_8_ = auVar51._0_8_ * dVar143;
            auVar113._8_8_ = auVar51._8_8_ * dVar144;
            auVar113._16_8_ = auVar51._16_8_ * dVar145;
            auVar113._24_8_ = auVar51._24_8_ * dVar147;
            auVar89 = vpmovsxwq_avx(auVar105);
            auVar96 = vpshufd_avx(auVar66,0xfa);
            auVar138._16_16_ = auVar96;
            auVar138._0_16_ = auVar89;
            auVar51 = vcvtps2pd_avx(auVar102._16_16_);
            local_148 = vblendvps_avx(local_148,auVar113,auVar138);
            auVar96 = vpunpckhwd_avx(auVar105,auVar105);
            auVar139._0_8_ = auVar51._0_8_ * 0.0;
            auVar139._8_8_ = dVar36 * auVar51._8_8_;
            auVar139._16_8_ = dVar93 * auVar51._16_8_;
            auVar139._24_8_ = dVar122 * auVar51._24_8_;
            auVar52 = vsubpd_avx(auVar184,auVar139);
            dVar143 = auVar52._0_8_ * auVar51._0_8_;
            dVar144 = auVar52._8_8_ * auVar51._8_8_;
            dVar145 = auVar52._16_8_ * auVar51._16_8_;
            dVar147 = auVar52._24_8_ * auVar51._24_8_;
            auVar140._0_8_ = dVar143 * 0.0;
            auVar140._8_8_ = dVar36 * dVar144;
            auVar140._16_8_ = dVar93 * dVar145;
            auVar140._24_8_ = dVar122 * dVar147;
            auVar51 = vsubpd_avx(auVar184,auVar140);
            auVar103._0_8_ = dVar143 * auVar51._0_8_;
            auVar103._8_8_ = dVar144 * auVar51._8_8_;
            auVar103._16_8_ = dVar145 * auVar51._16_8_;
            auVar103._24_8_ = dVar147 * auVar51._24_8_;
            auVar89 = vpshufd_avx(auVar96,0x50);
            auVar96 = vpshufd_avx(auVar96,0xfa);
            auVar114._16_16_ = auVar96;
            auVar114._0_16_ = auVar89;
            local_1e8 = vblendvps_avx(local_1e8,auVar103,auVar114);
            auVar51 = vcmppd_avx(auVar86,auVar169,6);
            auVar89 = vpackssdw_avx(auVar51._0_16_,auVar51._16_16_);
            auVar96 = vpackssdw_avx(auVar89,___xmm_00000000000000000000000000000000);
            auVar89 = vpacksswb_avx(auVar96,auVar96);
            if ((byte)(SUB161(auVar89 >> 7,0) & 1 | (SUB161(auVar89 >> 0xf,0) & 1) << 1 |
                       (SUB161(auVar89 >> 0x17,0) & 1) << 2 | (SUB161(auVar89 >> 0x1f,0) & 1) << 3 |
                       (SUB161(auVar89 >> 0x27,0) & 1) << 4 | (SUB161(auVar89 >> 0x2f,0) & 1) << 5 |
                       (SUB161(auVar89 >> 0x37,0) & 1) << 6 | SUB161(auVar89 >> 0x3f,0) << 7) !=
                (byte)iVar15) {
              auVar89 = vpand_avx(auVar105,auVar96);
              auVar96 = vpmovsxwd_avx(auVar89);
              auVar89 = vpunpckhwd_avx(auVar89,auVar89);
              auVar87._16_16_ = auVar89;
              auVar87._0_16_ = auVar96;
              goto LAB_140ab8fd7;
            }
          }
          auVar43 = vshufps_avx(auVar61,auVar61,0x50);
          auVar61 = vshufps_avx(auVar61,auVar61,0xfa);
          auVar59._16_16_ = auVar61;
          auVar59._0_16_ = auVar43;
          auVar178 = vblendvps_avx(local_148,auVar178,auVar59);
          auVar61 = vunpcklpd_avx(auVar22,auVar91);
          auVar43._0_8_ = auVar61._0_8_ * auVar178._0_8_;
          auVar43._8_8_ = auVar61._8_8_ * auVar178._8_8_;
          local_168 = auVar41._0_8_ * auVar178._16_8_;
          auVar61 = vshufpd_avx(auVar43,auVar43,1);
          local_318._0_8_ = auVar61._0_8_;
          uVar94 = 0;
        }
        *(longlong *)(param_6 + lVar18) = auVar22._0_8_;
        *(longlong *)(param_6 + 8 + lVar18) = auVar91._0_8_;
        *(double *)(param_6 + 0x10 + lVar18) = auVar41._0_8_;
        *(undefined8 *)(param_1 + lVar18 * 4) = local_218._0_8_;
        *(undefined8 *)(param_1 + 8 + lVar18 * 4) = local_2b8._0_8_;
        *(undefined8 *)(param_1 + 0x10 + lVar18 * 4) = local_238._0_8_;
        *(undefined8 *)(param_1 + 0x18 + lVar18 * 4) = local_2a8._0_8_;
        *(undefined8 *)(param_1 + 0x20 + lVar18 * 4) = local_258._0_8_;
        *(undefined8 *)(param_1 + 0x28 + lVar18 * 4) = local_278._0_8_;
        *(undefined8 *)(param_1 + 0x30 + lVar18 * 4) = local_1b8._0_8_;
        *(undefined8 *)(param_1 + 0x38 + lVar18 * 4) = local_268._0_8_;
        *(double *)(param_1 + 0x40 + lVar18 * 4) = auVar43._0_8_;
        *(undefined8 *)(param_1 + 0x48 + lVar18 * 4) = local_318._0_8_;
        *(double *)(param_1 + 0x50 + lVar18 * 4) = local_168;
        *(undefined8 *)(param_1 + 0x58 + lVar18 * 4) = uVar94;
        lVar20 = lVar20 + 1;
        lVar18 = lVar18 + 0x18;
      } while ((ulonglong)param_10 * 0x18 != lVar18);
    }
  }
  else if (0 < (int)param_10) {
    lVar18 = 0;
    lVar20 = 0;
    do {
      iVar15 = *(int *)(param_8 + lVar20 * 8);
      iVar8 = *(int *)(param_9 + lVar20 * 4);
      lVar19 = (longlong)iVar8;
      uVar37 = *(ulonglong *)(param_2 + lVar18 * 4);
      uVar193 = *(ulonglong *)(param_2 + 8 + lVar18 * 4);
      local_1e8._0_8_ = *(ulonglong *)(param_2 + 0x10 + lVar18 * 4);
      local_1e8._8_8_ = 0;
      local_218._8_8_ = 0;
      local_218._0_8_ = *(ulonglong *)(param_2 + 0x20 + lVar18 * 4);
      local_2a8._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar18 * 4);
      local_238._8_8_ = 0;
      local_238._0_8_ = *(ulonglong *)(param_2 + 0x30 + lVar18 * 4);
      local_298._0_8_ = *(double *)(param_2 + 0x40 + lVar18 * 4);
      local_298._8_8_ = 0;
      local_2b8._0_8_ = *(double *)(param_2 + 0x50 + lVar18 * 4);
      local_318._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar18 * 4);
      local_318._8_8_ = 0;
      local_2a8._8_8_ = 0;
      local_2b8._8_8_ = 0;
      auVar157 = ZEXT864(*(ulonglong *)(param_2 + 0x38 + lVar18 * 4));
      auVar172 = ZEXT864(*(ulonglong *)(param_2 + 0x48 + lVar18 * 4));
      auVar192 = ZEXT864(*(ulonglong *)(param_2 + 0x18 + lVar18 * 4));
      puVar16 = (ulonglong *)GetTransformFromArray(param_3,iVar15,(int)lVar20);
      uVar187 = auVar192._0_8_;
      uVar146 = auVar157._0_8_;
      auVar43._0_8_ = (double)puVar16[8];
      auVar90._8_8_ = 0;
      auVar90._0_8_ = auVar43._0_8_;
      auVar95._8_8_ = 0;
      auVar95._0_8_ = puVar16[9];
      auVar41._0_8_ = (double)puVar16[10];
      auVar194._8_8_ = 0;
      auVar194._0_8_ = auVar41._0_8_;
      auVar91 = auVar172._0_16_;
      local_258 = auVar91;
      if (lVar19 == -1) {
        local_2c8._8_8_ = local_2b8._8_8_;
        local_2c8._0_8_ = local_2b8._0_8_;
        local_148._8_8_ = 0;
        local_148._0_8_ = local_298._0_8_;
        local_308 = auVar194;
        local_2f8 = auVar95;
        local_2e8 = auVar90;
        local_2d8 = auVar91;
      }
      else {
        lVar9 = lVar19 * 0x18;
        auVar61 = vunpcklpd_avx(local_298,auVar91);
        local_148._0_8_ = auVar61._0_8_ * *(double *)(param_4 + lVar9);
        local_148._8_8_ = auVar61._8_8_ * ((double *)(param_4 + lVar9))[1];
        local_2c8._8_8_ = 0;
        local_2c8._0_8_ = (double)local_2b8._0_8_ * *(double *)(param_4 + 0x10 + lVar9);
        auVar61 = vunpcklpd_avx(auVar90,auVar95);
        local_2e8._0_8_ = auVar61._0_8_ * *(double *)(param_5 + lVar9);
        local_2e8._8_8_ = auVar61._8_8_ * ((double *)(param_5 + lVar9))[1];
        local_2d8 = vshufpd_avx(local_148._0_16_,local_148._0_16_,1);
        local_2f8 = vshufpd_avx(local_2e8,local_2e8,1);
        local_308._8_8_ = 0;
        local_308._0_8_ = auVar41._0_8_ * *(double *)(param_5 + 0x10 + lVar9);
      }
      uVar1 = *puVar16;
      auVar107._8_8_ = 0;
      auVar107._0_8_ = uVar1;
      uVar2 = puVar16[1];
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar2;
      uVar3 = puVar16[2];
      auVar60._8_8_ = 0;
      auVar60._0_8_ = uVar3;
      uVar4 = puVar16[3];
      auVar77._8_8_ = 0;
      auVar77._0_8_ = uVar4;
      auVar179._8_8_ = 0;
      auVar179._0_8_ = puVar16[4];
      uVar5 = puVar16[5];
      auVar173._8_8_ = 0;
      auVar173._0_8_ = uVar5;
      auVar123._8_8_ = 0;
      auVar123._0_8_ = puVar16[6];
      auVar61 = vmaxss_avx(ZEXT816(0),ZEXT416(*(uint *)(param_8 + 4 + lVar20 * 8)));
      uVar6 = puVar16[7];
      auVar161._8_8_ = 0;
      auVar161._0_8_ = uVar6;
      auVar22 = vminss_avx(auVar61,ZEXT416(__real_3f800000));
      auVar61 = vmaxss_avx(auVar22,ZEXT416(*(uint *)(param_7 + (longlong)iVar15 * 4)));
      uVar7 = puVar16[0xb];
      auVar185._8_8_ = 0;
      auVar185._0_8_ = uVar7;
      *(int *)(param_7 + (longlong)iVar15 * 4) = auVar61._0_4_;
      fVar21 = auVar22._0_4_;
      if (fVar21 <= __real_3727c5ac) {
        local_278 = local_2d8;
        auVar51 = ZEXT1232(ZEXT812(0)) << 0x20;
        local_1b8 = local_148._0_16_;
        local_268._0_8_ = local_2c8._0_8_;
      }
      else if (__real_3f7fff58 <= fVar21) {
        local_258 = auVar95;
        local_238 = auVar123;
        local_278 = local_2f8;
        local_1b8 = local_2e8;
        auVar51 = ZEXT1232(ZEXT812(0)) << 0x20;
        uVar187 = uVar4;
        uVar37 = uVar1;
        uVar193 = uVar2;
        local_1e8._0_8_ = uVar3;
        local_2a8._0_8_ = uVar5;
        local_2b8._0_8_ = auVar41._0_8_;
        local_318._0_8_ = uVar7;
        local_218 = auVar179;
        local_268._0_8_ = local_308._0_8_;
        local_298._0_8_ = auVar43._0_8_;
        uVar146 = uVar6;
      }
      else {
        auVar96 = vunpcklpd_avx(local_1e8._0_16_,auVar192._0_16_);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar193;
        auVar148._8_8_ = 0;
        auVar148._0_8_ = uVar37;
        auVar105 = vunpcklpd_avx(auVar148,auVar10);
        auVar190._16_16_ = auVar96;
        auVar190._0_16_ = auVar105;
        auVar66 = vunpcklpd_avx(auVar60,auVar77);
        auVar42 = vunpcklpd_avx(auVar107,auVar38);
        auVar23._0_8_ = auVar105._0_8_ * auVar42._0_8_;
        auVar23._8_8_ = auVar105._8_8_ * auVar42._8_8_;
        auVar23._16_8_ = auVar96._0_8_ * auVar66._0_8_;
        auVar23._24_8_ = auVar96._8_8_ * auVar66._8_8_;
        auVar51 = vperm2f128_avx(auVar23,auVar23,1);
        auVar24._0_8_ = auVar23._0_8_ + auVar51._0_8_;
        auVar24._8_8_ = auVar23._8_8_ + auVar51._8_8_;
        auVar24._16_8_ = auVar23._16_8_ + auVar51._16_8_;
        auVar24._24_8_ = auVar23._24_8_ + auVar51._24_8_;
        auVar51 = vperm2f128_avx(auVar24,auVar24,1);
        auVar51 = vshufpd_avx(auVar24,auVar51,5);
        auVar25._0_8_ = auVar24._0_8_ + auVar51._0_8_;
        auVar25._8_8_ = auVar24._8_8_ + auVar51._8_8_;
        auVar25._16_8_ = auVar24._16_8_ + auVar51._16_8_;
        auVar25._24_8_ = auVar24._24_8_ + auVar51._24_8_;
        auVar61 = ZEXT816(0);
        auVar51 = vcmppd_avx(ZEXT1632(auVar61),auVar25,2);
        auVar41 = vpackssdw_avx(auVar51._0_16_,auVar51._16_16_);
        auVar43 = vpshufd_avx(auVar41,0x50);
        auVar41 = vpshufd_avx(auVar41,0xfa);
        auVar26._16_16_ = auVar41;
        auVar26._0_16_ = auVar43;
        auVar51 = vcmpps_avx(ZEXT1632(auVar61),ZEXT1632(auVar61),0xf);
        auVar52 = vblendvps_avx(ZEXT1632(auVar61),auVar51,auVar26);
        auVar41 = vunpcklpd_avx(local_2b8,local_318);
        auVar43 = vunpcklpd_avx(local_298,auVar91);
        auVar27._16_16_ = auVar41;
        auVar27._0_16_ = auVar43;
        auVar91 = vunpcklpd_avx(auVar194,auVar185);
        auVar61 = vunpcklpd_avx(auVar90,auVar95);
        auVar44._16_16_ = auVar91;
        auVar44._0_16_ = auVar61;
        auVar53 = vsubpd_avx(auVar44,auVar27);
        dVar93 = (double)fVar21;
        auVar51 = ZEXT1232(ZEXT812(0)) << 0x20;
        auVar62._0_8_ = auVar43._0_8_ + auVar53._0_8_ * dVar93;
        auVar62._8_8_ = auVar43._8_8_ + auVar53._8_8_ * dVar93;
        auVar68._16_8_ = auVar41._0_8_ + auVar53._16_8_ * dVar93;
        auVar68._0_16_ = auVar62;
        auVar68._24_8_ = auVar41._8_8_ + auVar53._24_8_ * dVar93;
        auVar41 = vunpcklpd_avx(local_238,auVar157._0_16_);
        auVar61 = vshufpd_avx(auVar68._16_16_,auVar68._16_16_,1);
        auVar43 = vunpcklpd_avx(local_218,local_2a8);
        local_258 = vshufpd_avx(auVar62,auVar62,1);
        auVar28._16_16_ = auVar41;
        auVar28._0_16_ = auVar43;
        auVar91 = vunpcklpd_avx(auVar123,auVar161);
        auVar22 = vunpcklpd_avx(auVar179,auVar173);
        auVar45._16_16_ = auVar91;
        auVar45._0_16_ = auVar22;
        auVar53 = vsubpd_avx(auVar45,auVar28);
        local_218._0_8_ = auVar43._0_8_ + auVar53._0_8_ * dVar93;
        local_218._8_8_ = auVar43._8_8_ + auVar53._8_8_ * dVar93;
        auVar127._16_8_ = auVar41._0_8_ + auVar53._16_8_ * dVar93;
        auVar127._0_16_ = local_218;
        auVar127._24_8_ = auVar41._8_8_ + auVar53._24_8_ * dVar93;
        local_238 = auVar127._16_16_;
        auVar22 = vshufpd_avx(local_238,local_238,1);
        auVar89 = vshufpd_avx(local_218,local_218,1);
        auVar43._0_8_ = __real_3ff0000000000000 - dVar93;
        auVar53 = vsubpd_avx(ZEXT1232(ZEXT812(0)) << 0x20,auVar190);
        local_1b8._0_8_ = auVar52._0_8_;
        local_1b8._8_8_ = auVar52._8_8_;
        uStack_1a8 = auVar52._16_8_;
        uStack_1a0 = auVar52._24_8_;
        auVar41._0_8_ =
             auVar42._0_8_ * dVar93 +
             auVar43._0_8_ *
             (double)((ulonglong)auVar105._0_8_ & local_1b8._0_8_ | ~local_1b8._0_8_ & auVar53._0_8_
                     );
        dVar34 = auVar42._8_8_ * dVar93 +
                 auVar43._0_8_ *
                 (double)((ulonglong)auVar105._8_8_ & local_1b8._8_8_ |
                         ~local_1b8._8_8_ & auVar53._8_8_);
        dVar35 = auVar66._0_8_ * dVar93 +
                 auVar43._0_8_ *
                 (double)((ulonglong)auVar96._0_8_ & uStack_1a8 | ~uStack_1a8 & auVar53._16_8_);
        dVar36 = auVar66._8_8_ * dVar93 +
                 auVar43._0_8_ *
                 (double)((ulonglong)auVar96._8_8_ & uStack_1a0 | ~uStack_1a0 & auVar53._24_8_);
        auVar39._0_8_ = auVar41._0_8_ * auVar41._0_8_ + dVar35 * dVar35;
        auVar39._8_8_ = dVar34 * dVar34 + dVar36 * dVar36;
        auVar43 = vshufpd_avx(auVar39,auVar39,1);
        auVar43._0_8_ = auVar39._0_8_ + auVar43._0_8_;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = auVar43._0_8_;
        auVar43._0_8_ = __real_3ff0000000000000 / SQRT(auVar43._0_8_);
        auVar63._8_8_ = 0;
        auVar63._0_8_ = __real_3e45798ee2308c3a;
        auVar91 = vcmpsd_avx(auVar63,auVar40,6);
        uVar37 = ~auVar91._0_8_ & __real_ffffffffffffffff;
        auVar180._0_8_ = (ulonglong)(auVar41._0_8_ * auVar43._0_8_) & uVar37;
        auVar180._8_8_ = (ulonglong)(dVar34 * auVar43._0_8_) & uVar37;
        auVar182._16_8_ = (ulonglong)(dVar35 * auVar43._0_8_) & uVar37;
        auVar182._0_16_ = auVar180;
        auVar182._24_8_ = (ulonglong)(dVar36 * auVar43._0_8_) & uVar37;
        auVar29._0_8_ =
             ~uVar37 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar29._8_8_ = ~uVar37 & _UNK_150b54548;
        auVar29._16_8_ = ~uVar37 & _UNK_150b54550;
        auVar29._24_8_ = ~uVar37 & _UNK_150b54558;
        auVar96 = auVar182._16_16_ | auVar29._16_16_;
        auVar43 = vshufps_avx(auVar96,auVar96,0x4e);
        auVar91 = vshufps_avx(auVar180,auVar180,0x4e);
        auVar41 = vunpcklpd_avx(local_2e8,local_2f8);
        auVar30._16_16_ = local_308;
        auVar30._0_16_ = auVar41;
        auVar41 = vmovlhps_avx(local_148._0_16_,local_2d8);
        auVar46._16_16_ = local_2c8;
        auVar46._0_16_ = auVar41;
        auVar52 = vsubpd_avx(auVar30,auVar46);
        local_1b8._0_8_ = auVar41._0_8_ + auVar52._0_8_ * dVar93;
        local_1b8._8_8_ = auVar41._8_8_ + auVar52._8_8_ * dVar93;
        local_268._0_8_ = (double)local_2c8._0_8_ + auVar52._16_8_ * dVar93;
        local_2a8._0_8_ = auVar89._0_8_;
        local_278 = vshufpd_avx(local_1b8,local_1b8,1);
        uVar187 = auVar43._0_8_;
        uVar37 = auVar180._0_8_;
        uVar193 = auVar91._0_8_;
        local_1e8._0_8_ = auVar96._0_8_;
        local_2b8._0_8_ = auVar68._16_8_;
        local_318._0_8_ = auVar61._0_8_;
        local_298._0_8_ = auVar62._0_8_;
        uVar146 = auVar22._0_8_;
      }
      *(undefined8 *)(param_4 + lVar18) = local_148._0_8_;
      *(undefined8 *)(param_4 + 8 + lVar18) = local_2d8._0_8_;
      *(undefined8 *)(param_4 + 0x10 + lVar18) = local_2c8._0_8_;
      *(undefined8 *)(param_5 + lVar18) = local_2e8._0_8_;
      *(undefined8 *)(param_5 + 8 + lVar18) = local_2f8._0_8_;
      *(undefined8 *)(param_5 + 0x10 + lVar18) = local_308._0_8_;
      if (iVar8 == -1) {
        uVar94 = local_258._0_8_;
        auVar41._0_8_ = (double)local_298._0_8_;
      }
      else {
        auVar43._0_8_ = *(double *)(param_6 + 0x10 + lVar19 * 0x18);
        auVar41 = *(undefined1 (*) [16])(param_6 + lVar19 * 0x18);
        auVar47._16_8_ = auVar43._0_8_;
        auVar47._0_16_ = auVar41;
        auVar47._24_8_ = 0;
        auVar31._0_8_ =
             (ulonglong)auVar41._0_8_ &
             ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
        dVar34 = auVar41._8_8_;
        auVar31._8_8_ = (ulonglong)dVar34 & _UNK_150aa8f48;
        auVar31._16_8_ = (ulonglong)auVar43._0_8_ & _UNK_150aa8f50;
        auVar31._24_8_ = 0;
        auVar52 = vcmppd_avx(auVar31,
                             ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a
                             ,2);
        auVar91 = vpackssdw_avx(auVar52._0_16_,auVar52._16_16_);
        auVar22 = vpcmpeqd_avx(local_218,local_218);
        auVar32._16_16_ = auVar22;
        auVar32._0_16_ = auVar91;
        auVar52 = vblendvps_avx(auVar178,ZEXT1632((undefined1  [16])0x0),auVar32);
        auVar53 = vcmppd_avx(auVar47,
                             ___ymm_46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c
                             ,2);
        auVar61 = vpackssdw_avx(auVar53._0_16_,auVar53._16_16_);
        auVar61 = vpackssdw_avx(auVar61,auVar22);
        auVar110._8_8_ = __real_3914c4e977ba1f5c;
        auVar110._0_8_ = __real_3914c4e977ba1f5c;
        auVar110._16_8_ = __real_3914c4e977ba1f5c;
        auVar110._24_8_ = __real_3914c4e977ba1f5c;
        auVar53 = vcmppd_avx(auVar110,auVar47,2);
        auVar22 = vpackssdw_avx(auVar53._0_16_,auVar53._16_16_);
        auVar22 = vpackssdw_avx(auVar22,___xmm_00000000000000000000000000000000);
        auVar61 = vpand_avx(auVar61,auVar22);
        auVar22 = vpmovsxwd_avx(auVar61);
        auVar61 = vpunpckhwd_avx(auVar61,auVar61);
        auVar82._0_4_ = auVar52._0_4_ & auVar22._0_4_;
        auVar82._4_4_ = auVar52._4_4_ & auVar22._4_4_;
        auVar82._8_4_ = auVar52._8_4_ & auVar22._8_4_;
        auVar82._12_4_ = auVar52._12_4_ & auVar22._12_4_;
        auVar82._16_4_ = auVar52._16_4_ & auVar61._0_4_;
        auVar82._20_4_ = auVar52._20_4_ & auVar61._4_4_;
        auVar82._24_4_ = auVar52._24_4_ & auVar61._8_4_;
        auVar82._28_4_ = auVar52._28_4_ & auVar61._12_4_;
        iVar15 = vmovmskps_avx(auVar82);
        dVar35 = auVar51._8_8_;
        dVar36 = auVar51._16_8_;
        dVar93 = auVar51._24_8_;
        if (iVar15 == 0) {
          auVar82 = ZEXT432(0) << 0x20;
LAB_140ab85a4:
          auVar52 = vcmpps_avx(auVar51,auVar51,0xf);
          auVar64._0_4_ = auVar82._0_4_ ^ auVar52._0_4_;
          auVar64._4_4_ = auVar82._4_4_ ^ auVar52._4_4_;
          auVar64._8_4_ = auVar82._8_4_ ^ auVar52._8_4_;
          auVar64._12_4_ = auVar82._12_4_ ^ auVar52._12_4_;
          auVar69._16_4_ = auVar82._16_4_ ^ auVar52._16_4_;
          auVar69._0_16_ = auVar64;
          auVar69._20_4_ = auVar82._20_4_ ^ auVar52._20_4_;
          auVar69._24_4_ = auVar82._24_4_ ^ auVar52._24_4_;
          auVar69._28_4_ = auVar82._28_4_ ^ auVar52._28_4_;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulonglong)dVar35 & __real_7fe0000000000000;
          auVar13._8_8_ = (ulonglong)dVar36 & __real_7fe0000000000000;
          auVar13._0_8_ = (ulonglong)dVar35 & __real_7fe0000000000000;
          auVar13._16_8_ = (ulonglong)dVar93 & __real_7fe0000000000000;
          auVar108._0_8_ = (ulonglong)auVar41._0_8_ & __real_7fe0000000000000;
          auVar108._8_8_ = (ulonglong)dVar34 & __real_7fe0000000000000;
          auVar121._0_8_ = (ulonglong)auVar43._0_8_ & __real_7fe0000000000000;
          auVar121._8_8_ = 0;
          auVar149._8_8_ = __real_7fcfffffffffffff;
          auVar149._0_8_ = __real_7fcfffffffffffff;
          auVar89 = vpsubq_avx(auVar149,auVar121);
          auVar96 = vpsubq_avx(auVar149,auVar108);
          auVar105 = vpsubq_avx(auVar149,auVar13._8_16_);
          auVar66 = vpsubq_avx(auVar149,auVar11 << 0x40);
          auVar132._0_8_ = auVar41._0_8_ * auVar96._0_8_;
          auVar132._8_8_ = dVar34 * auVar96._8_8_;
          auVar132._16_8_ = auVar43._0_8_ * auVar89._0_8_;
          auVar132._24_8_ = auVar89._8_8_ * 0.0;
          auVar61 = vcvtpd2ps_avx(auVar132);
          auVar151._0_8_ = auVar66._0_8_ * 0.0;
          auVar151._8_8_ = dVar35 * auVar66._8_8_;
          auVar151._16_8_ = dVar36 * auVar105._0_8_;
          auVar151._24_8_ = dVar93 * auVar105._8_8_;
          auVar22 = vcvtpd2ps_avx(auVar151);
          auVar133._16_16_ = auVar22;
          auVar133._0_16_ = auVar61;
          auVar52 = vrcpps_avx(auVar133);
          auVar134._0_4_ = auVar52._0_4_ * auVar61._0_4_;
          auVar134._4_4_ = auVar52._4_4_ * auVar61._4_4_;
          auVar134._8_4_ = auVar52._8_4_ * auVar61._8_4_;
          auVar134._12_4_ = auVar52._12_4_ * auVar61._12_4_;
          auVar134._16_4_ = auVar52._16_4_ * auVar22._0_4_;
          auVar134._20_4_ = auVar52._20_4_ * auVar22._4_4_;
          auVar134._24_4_ = auVar52._24_4_ * auVar22._8_4_;
          auVar134._28_4_ = auVar52._28_4_ * auVar22._12_4_;
          auVar167._4_4_ = __real_40000000;
          auVar167._0_4_ = __real_40000000;
          auVar167._8_4_ = __real_40000000;
          auVar167._12_4_ = __real_40000000;
          auVar167._16_4_ = __real_40000000;
          auVar167._20_4_ = __real_40000000;
          auVar167._24_4_ = __real_40000000;
          auVar167._28_4_ = __real_40000000;
          auVar53 = vsubps_avx(auVar167,auVar134);
          auVar125._0_4_ = auVar52._0_4_ * auVar53._0_4_;
          auVar125._4_4_ = auVar52._4_4_ * auVar53._4_4_;
          auVar125._8_4_ = auVar52._8_4_ * auVar53._8_4_;
          auVar125._12_4_ = auVar52._12_4_ * auVar53._12_4_;
          auVar135._16_4_ = auVar52._16_4_ * auVar53._16_4_;
          auVar135._0_16_ = auVar125;
          auVar135._20_4_ = auVar52._20_4_ * auVar53._20_4_;
          auVar135._24_4_ = auVar52._24_4_ * auVar53._24_4_;
          auVar135._28_4_ = auVar52._28_4_ * auVar53._28_4_;
          auVar52 = vcvtps2pd_avx(auVar125);
          auVar53 = vcvtps2pd_avx(auVar135._16_16_);
          dVar122 = auVar66._0_8_ * auVar53._0_8_;
          dVar143 = auVar66._8_8_ * auVar53._8_8_;
          dVar144 = auVar105._0_8_ * auVar53._16_8_;
          dVar145 = auVar105._8_8_ * auVar53._24_8_;
          dVar147 = auVar52._0_8_ * auVar96._0_8_;
          dVar158 = auVar52._8_8_ * auVar96._8_8_;
          dVar159 = auVar52._16_8_ * auVar89._0_8_;
          dVar160 = auVar52._24_8_ * auVar89._8_8_;
          auVar136._0_8_ = auVar41._0_8_ * dVar147;
          auVar136._8_8_ = dVar34 * dVar158;
          auVar136._16_8_ = auVar43._0_8_ * dVar159;
          auVar136._24_8_ = dVar160 * 0.0;
          auVar152._0_8_ = dVar122 * 0.0;
          auVar152._8_8_ = dVar35 * dVar143;
          auVar152._16_8_ = dVar36 * dVar144;
          auVar152._24_8_ = dVar93 * dVar145;
          auVar168._8_8_ = __real_4000000000000000;
          auVar168._0_8_ = __real_4000000000000000;
          auVar168._16_8_ = __real_4000000000000000;
          auVar168._24_8_ = __real_4000000000000000;
          auVar52 = vsubpd_avx(auVar168,auVar152);
          auVar53 = vsubpd_avx(auVar168,auVar136);
          dVar147 = dVar147 * auVar53._0_8_;
          dVar158 = dVar158 * auVar53._8_8_;
          dVar159 = dVar159 * auVar53._16_8_;
          dVar160 = dVar160 * auVar53._24_8_;
          dVar122 = auVar52._0_8_ * dVar122;
          dVar143 = auVar52._8_8_ * dVar143;
          dVar144 = auVar52._16_8_ * dVar144;
          dVar145 = auVar52._24_8_ * dVar145;
          auVar137._0_8_ = dVar122 * 0.0;
          auVar137._8_8_ = dVar35 * dVar143;
          auVar137._16_8_ = dVar36 * dVar144;
          auVar137._24_8_ = dVar93 * dVar145;
          auVar48._0_8_ = auVar41._0_8_ * dVar147;
          auVar48._8_8_ = dVar34 * dVar158;
          auVar48._16_8_ = auVar43._0_8_ * dVar159;
          auVar48._24_8_ = dVar160 * 0.0;
          auVar52 = vsubpd_avx(auVar168,auVar48);
          auVar53 = vsubpd_avx(auVar168,auVar137);
          auVar83._0_8_ = dVar122 * auVar53._0_8_;
          auVar83._8_8_ = dVar143 * auVar53._8_8_;
          auVar83._16_8_ = dVar144 * auVar53._16_8_;
          auVar83._24_8_ = dVar145 * auVar53._24_8_;
          auVar49._0_8_ = dVar147 * auVar52._0_8_;
          auVar49._8_8_ = dVar158 * auVar52._8_8_;
          auVar49._16_8_ = dVar159 * auVar52._16_8_;
          auVar49._24_8_ = dVar160 * auVar52._24_8_;
          auVar41 = vshufps_avx(auVar64,auVar64,0x50);
          auVar43 = vshufps_avx(auVar64,auVar64,0xfa);
          auVar112._16_16_ = auVar43;
          auVar112._0_16_ = auVar41;
          local_128 = vblendvps_avx(local_128,auVar49,auVar112);
          auVar43 = auVar69._16_16_;
          auVar41 = vshufps_avx(auVar43,auVar43,0x50);
          auVar43 = vshufps_avx(auVar43,auVar43,0xfa);
          auVar50._16_16_ = auVar43;
          auVar50._0_16_ = auVar41;
          local_188 = vblendvps_avx(local_188,auVar83,auVar50);
        }
        else {
          auVar89 = vcvtpd2ps_avx(auVar47);
          auVar96 = vcvtpd2ps_avx(auVar51);
          auVar128._16_16_ = auVar96;
          auVar128._0_16_ = auVar89;
          auVar53 = vrcpps_avx(auVar128);
          auVar129._0_4_ = auVar53._0_4_ * auVar89._0_4_;
          auVar129._4_4_ = auVar53._4_4_ * auVar89._4_4_;
          auVar129._8_4_ = auVar53._8_4_ * auVar89._8_4_;
          auVar129._12_4_ = auVar53._12_4_ * auVar89._12_4_;
          auVar129._16_4_ = auVar53._16_4_ * auVar96._0_4_;
          auVar129._20_4_ = auVar53._20_4_ * auVar96._4_4_;
          auVar129._24_4_ = auVar53._24_4_ * auVar96._8_4_;
          auVar129._28_4_ = auVar53._28_4_ * auVar96._12_4_;
          auVar163._4_4_ = __real_40000000;
          auVar163._0_4_ = __real_40000000;
          auVar163._8_4_ = __real_40000000;
          auVar163._12_4_ = __real_40000000;
          auVar163._16_4_ = __real_40000000;
          auVar163._20_4_ = __real_40000000;
          auVar163._24_4_ = __real_40000000;
          auVar163._28_4_ = __real_40000000;
          auVar54 = vsubps_avx(auVar163,auVar129);
          auVar124._0_4_ = auVar53._0_4_ * auVar54._0_4_;
          auVar124._4_4_ = auVar53._4_4_ * auVar54._4_4_;
          auVar124._8_4_ = auVar53._8_4_ * auVar54._8_4_;
          auVar124._12_4_ = auVar53._12_4_ * auVar54._12_4_;
          auVar130._16_4_ = auVar53._16_4_ * auVar54._16_4_;
          auVar130._0_16_ = auVar124;
          auVar130._20_4_ = auVar53._20_4_ * auVar54._20_4_;
          auVar130._24_4_ = auVar53._24_4_ * auVar54._24_4_;
          auVar130._28_4_ = auVar53._28_4_ * auVar54._28_4_;
          auVar53 = vcvtps2pd_avx(auVar130._16_16_);
          auVar54 = vcvtps2pd_avx(auVar124);
          auVar164._0_8_ = auVar41._0_8_ * auVar54._0_8_;
          auVar164._8_8_ = dVar34 * auVar54._8_8_;
          auVar164._16_8_ = auVar43._0_8_ * auVar54._16_8_;
          auVar164._24_8_ = auVar54._24_8_ * 0.0;
          auVar175._0_8_ = auVar53._0_8_ * 0.0;
          auVar175._8_8_ = dVar35 * auVar53._8_8_;
          auVar175._16_8_ = dVar36 * auVar53._16_8_;
          auVar175._24_8_ = dVar93 * auVar53._24_8_;
          auVar183._8_8_ = __real_4000000000000000;
          auVar183._0_8_ = __real_4000000000000000;
          auVar183._16_8_ = __real_4000000000000000;
          auVar183._24_8_ = __real_4000000000000000;
          auVar55 = vsubpd_avx(auVar183,auVar175);
          auVar56 = vsubpd_avx(auVar183,auVar164);
          dVar122 = auVar56._0_8_ * auVar54._0_8_;
          dVar143 = auVar56._8_8_ * auVar54._8_8_;
          dVar144 = auVar56._16_8_ * auVar54._16_8_;
          dVar145 = auVar56._24_8_ * auVar54._24_8_;
          dVar147 = auVar55._0_8_ * auVar53._0_8_;
          dVar158 = auVar55._8_8_ * auVar53._8_8_;
          dVar159 = auVar55._16_8_ * auVar53._16_8_;
          dVar160 = auVar55._24_8_ * auVar53._24_8_;
          auVar165._0_8_ = dVar147 * 0.0;
          auVar165._8_8_ = dVar35 * dVar158;
          auVar165._16_8_ = dVar36 * dVar159;
          auVar165._24_8_ = dVar93 * dVar160;
          auVar176._0_8_ = auVar41._0_8_ * dVar122;
          auVar176._8_8_ = dVar34 * dVar143;
          auVar176._16_8_ = auVar43._0_8_ * dVar144;
          auVar176._24_8_ = dVar145 * 0.0;
          auVar53 = vsubpd_avx(auVar183,auVar176);
          auVar54 = vsubpd_avx(auVar183,auVar165);
          auVar150._0_8_ = dVar147 * auVar54._0_8_;
          auVar150._8_8_ = dVar158 * auVar54._8_8_;
          auVar150._16_8_ = dVar159 * auVar54._16_8_;
          auVar150._24_8_ = dVar160 * auVar54._24_8_;
          auVar131._0_8_ = auVar53._0_8_ * dVar122;
          auVar131._8_8_ = auVar53._8_8_ * dVar143;
          auVar131._16_8_ = auVar53._16_8_ * dVar144;
          auVar131._24_8_ = auVar53._24_8_ * dVar145;
          auVar89 = vshufps_avx(auVar22,auVar22,0x50);
          auVar22 = vshufps_avx(auVar22,auVar22,0xfa);
          auVar166._16_16_ = auVar22;
          auVar166._0_16_ = auVar89;
          local_128 = vblendvps_avx(local_128,auVar131,auVar166);
          auVar22 = vshufps_avx(auVar61,auVar61,0x50);
          auVar61 = vshufps_avx(auVar61,auVar61,0xfa);
          auVar111._16_16_ = auVar61;
          auVar111._0_16_ = auVar22;
          local_188 = vblendvps_avx(local_188,auVar150,auVar111);
          uVar17 = vmovmskps_avx(auVar52);
          if ((char)uVar17 != (char)iVar15) goto LAB_140ab85a4;
        }
        auVar41 = vshufps_avx(auVar91,auVar91,0x50);
        auVar43 = vshufps_avx(auVar91,auVar91,0xfa);
        auVar33._16_16_ = auVar43;
        auVar33._0_16_ = auVar41;
        auVar51 = vblendvps_avx(local_128,auVar51,auVar33);
        auVar43 = vmovlhps_avx(local_1b8,local_278);
        auVar41._0_8_ = auVar43._0_8_ * auVar51._0_8_;
        auVar41._8_8_ = auVar43._8_8_ * auVar51._8_8_;
        local_2b8._0_8_ = (double)local_268._0_8_ * auVar51._16_8_;
        auVar43 = vshufpd_avx(auVar41,auVar41,1);
        local_318._0_8_ = 0;
        uVar94 = auVar43._0_8_;
      }
      *(undefined8 *)(param_6 + lVar18) = local_1b8._0_8_;
      *(undefined8 *)(param_6 + 8 + lVar18) = local_278._0_8_;
      *(undefined8 *)(param_6 + 0x10 + lVar18) = local_268._0_8_;
      *(ulonglong *)(param_1 + lVar18 * 4) = uVar37;
      *(ulonglong *)(param_1 + 8 + lVar18 * 4) = uVar193;
      *(undefined8 *)(param_1 + 0x10 + lVar18 * 4) = local_1e8._0_8_;
      *(ulonglong *)(param_1 + 0x18 + lVar18 * 4) = uVar187;
      *(longlong *)(param_1 + 0x20 + lVar18 * 4) = local_218._0_8_;
      *(undefined8 *)(param_1 + 0x28 + lVar18 * 4) = local_2a8._0_8_;
      *(undefined8 *)(param_1 + 0x30 + lVar18 * 4) = local_238._0_8_;
      *(ulonglong *)(param_1 + 0x38 + lVar18 * 4) = uVar146;
      *(double *)(param_1 + 0x40 + lVar18 * 4) = auVar41._0_8_;
      *(undefined8 *)(param_1 + 0x48 + lVar18 * 4) = uVar94;
      *(undefined8 *)(param_1 + 0x50 + lVar18 * 4) = local_2b8._0_8_;
      *(undefined8 *)(param_1 + 0x58 + lVar18 * 4) = local_318._0_8_;
      lVar20 = lVar20 + 1;
      lVar18 = lVar18 + 0x18;
    } while ((ulonglong)param_10 * 0x18 != lVar18);
  }
  return;
}

// BlendPosesPerBoneFilter___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx @ 140ab91a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilter___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               undefined8 param_6,uint param_7,undefined1 (*param_8) [16])

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  ulonglong uVar12;
  double dVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  float fVar33;
  ulonglong uVar34;
  double dVar49;
  double dVar50;
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  double dVar35;
  undefined1 auVar43 [32];
  double dVar51;
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  ulonglong uVar52;
  ulonglong uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  ulonglong uVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 in_ZMM2 [64];
  ulonglong uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [32];
  ulonglong uVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [32];
  undefined1 auVar96 [64];
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  ulonglong uVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [32];
  undefined1 auVar109 [64];
  double dVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  double dVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  ulonglong uVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [32];
  double dVar121;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  ulonglong uVar124;
  undefined1 auVar125 [64];
  undefined1 auVar74 [32];
  undefined1 auVar79 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar101 [32];
  undefined1 auVar108 [32];
  
  auVar16 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
  auVar17 = vpcmpgtd_avx(param_8[1],auVar16);
  auVar16 = vpcmpgtd_avx(*param_8,auVar16);
  auVar16 = vpor_avx(auVar16,auVar17);
  if ((((SUB161(auVar16 >> 0x1f,0) & 1) == 0 && (SUB161(auVar16 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar16 >> 0x5f,0) & 1) == 0) && -1 < auVar16[0xf]) {
    if (0 < (int)param_7) {
      lVar31 = 0xb;
      uVar32 = 0;
      do {
        iVar15 = *(int *)(param_5 + uVar32 * 8);
        uVar53 = *(ulonglong *)(param_2 + -0x58 + lVar31 * 8);
        dVar68 = *(double *)(param_2 + -0x38 + lVar31 * 8);
        uVar1 = *(ulonglong *)(param_2 + -0x30 + lVar31 * 8);
        dVar35 = *(double *)(param_2 + -0x28 + lVar31 * 8);
        uVar2 = *(ulonglong *)(param_2 + -0x20 + lVar31 * 8);
        dVar49 = *(double *)(param_2 + -0x18 + lVar31 * 8);
        uVar3 = *(ulonglong *)(param_2 + -0x10 + lVar31 * 8);
        dVar50 = *(double *)(param_2 + -8 + lVar31 * 8);
        uVar4 = *(ulonglong *)(param_2 + lVar31 * 8);
        auVar96 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar31 * 8));
        auVar109 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar31 * 8));
        auVar125 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar31 * 8));
        puVar30 = (ulonglong *)GetTransformFromArray(param_3,iVar15,(int)uVar32);
        uVar5 = *puVar30;
        auVar85._8_8_ = 0;
        auVar85._0_8_ = uVar5;
        uVar6 = puVar30[1];
        auVar93._8_8_ = 0;
        auVar93._0_8_ = uVar6;
        uVar7 = puVar30[2];
        auVar112._8_8_ = 0;
        auVar112._0_8_ = uVar7;
        uVar8 = puVar30[3];
        auVar104._8_8_ = 0;
        auVar104._0_8_ = uVar8;
        dVar51 = (double)puVar30[4];
        uVar9 = puVar30[5];
        auVar71._8_8_ = 0;
        auVar71._0_8_ = uVar9;
        dVar110 = (double)puVar30[6];
        auVar78._8_8_ = 0;
        auVar78._0_8_ = dVar110;
        uVar10 = puVar30[7];
        auVar81._8_8_ = 0;
        auVar81._0_8_ = uVar10;
        dVar11 = (double)puVar30[8];
        auVar100._8_8_ = 0;
        auVar100._0_8_ = dVar11;
        uVar12 = puVar30[9];
        auVar117._8_8_ = 0;
        auVar117._0_8_ = uVar12;
        auVar16 = vmaxss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_5 + 4 + uVar32 * 8)));
        dVar13 = (double)puVar30[10];
        auVar115._8_8_ = 0;
        auVar115._0_8_ = dVar13;
        auVar17 = vminss_avx(auVar16,ZEXT416(__real_3f800000));
        auVar16 = vmaxss_avx(auVar17,ZEXT416(*(uint *)(param_4 + (longlong)iVar15 * 4)));
        uVar14 = puVar30[0xb];
        auVar105._8_8_ = 0;
        auVar105._0_8_ = uVar14;
        *(int *)(param_4 + (longlong)iVar15 * 4) = auVar16._0_4_;
        fVar33 = auVar17._0_4_;
        uVar67 = uVar3;
        uVar92 = auVar96._0_8_;
        uVar102 = auVar125._0_8_;
        uVar124 = auVar109._0_8_;
        uVar34 = uVar2;
        uVar75 = uVar53;
        dVar82 = dVar68;
        uVar52 = uVar1;
        dVar113 = dVar35;
        dVar97 = dVar49;
        dVar121 = dVar50;
        uVar118 = uVar4;
        if ((__real_3727c5ac < fVar33) &&
           (uVar67 = uVar12, uVar92 = uVar6, uVar102 = uVar7, uVar124 = uVar8, uVar34 = uVar10,
           uVar75 = uVar5, dVar82 = dVar51, uVar52 = uVar9, dVar113 = dVar110, dVar97 = dVar11,
           dVar121 = dVar13, uVar118 = uVar14, fVar33 < __real_3f7fff58)) {
          auVar58 = vunpcklpd_avx(auVar125._0_16_,auVar109._0_16_);
          auVar123._8_8_ = 0;
          auVar123._0_8_ = uVar53;
          auVar59 = vunpcklpd_avx(auVar123,auVar96._0_16_);
          auVar120._16_16_ = auVar58;
          auVar120._0_16_ = auVar59;
          auVar104 = vunpcklpd_avx(auVar112,auVar104);
          auVar85 = vunpcklpd_avx(auVar85,auVar93);
          auVar61._0_8_ = auVar59._0_8_ * auVar85._0_8_;
          auVar61._8_8_ = auVar59._8_8_ * auVar85._8_8_;
          auVar61._16_8_ = auVar58._0_8_ * auVar104._0_8_;
          auVar61._24_8_ = auVar58._8_8_ * auVar104._8_8_;
          auVar48 = vperm2f128_avx(auVar61,auVar61,1);
          auVar62._0_8_ = auVar61._0_8_ + auVar48._0_8_;
          auVar62._8_8_ = auVar61._8_8_ + auVar48._8_8_;
          auVar62._16_8_ = auVar61._16_8_ + auVar48._16_8_;
          auVar62._24_8_ = auVar61._24_8_ + auVar48._24_8_;
          auVar48 = vperm2f128_avx(auVar62,auVar62,1);
          auVar48 = vshufpd_avx(auVar62,auVar48,5);
          auVar63._0_8_ = auVar62._0_8_ + auVar48._0_8_;
          auVar63._8_8_ = auVar62._8_8_ + auVar48._8_8_;
          auVar63._16_8_ = auVar62._16_8_ + auVar48._16_8_;
          auVar63._24_8_ = auVar62._24_8_ + auVar48._24_8_;
          auVar93 = ZEXT816(0);
          auVar48 = vcmppd_avx(ZEXT1632(auVar93),auVar63,2);
          auVar16 = vpackssdw_avx(auVar48._0_16_,auVar48._16_16_);
          auVar17 = vpshufd_avx(auVar16,0x50);
          auVar16 = vpshufd_avx(auVar16,0xfa);
          auVar64._16_16_ = auVar16;
          auVar64._0_16_ = auVar17;
          auVar46 = ZEXT1632(auVar93);
          auVar48 = vcmpps_avx(ZEXT1632(auVar93),auVar46,0xf);
          auVar48 = vblendvps_avx(auVar46,auVar48,auVar64);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = dVar50;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar4;
          auVar17 = vunpcklpd_avx(auVar17,auVar16);
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar3;
          auVar94._8_8_ = 0;
          auVar94._0_8_ = dVar49;
          auVar93 = vunpcklpd_avx(auVar94,auVar22);
          auVar65._16_16_ = auVar17;
          auVar65._0_16_ = auVar93;
          auVar105 = vunpcklpd_avx(auVar115,auVar105);
          auVar16 = vmovlhps_avx(auVar100,auVar117);
          auVar95._16_16_ = auVar105;
          auVar95._0_16_ = auVar16;
          auVar45 = vsubpd_avx(auVar95,auVar65);
          dVar110 = (double)fVar33;
          auVar106._0_8_ = auVar93._0_8_ + auVar45._0_8_ * dVar110;
          auVar106._8_8_ = auVar93._8_8_ + auVar45._8_8_ * dVar110;
          auVar108._16_8_ = auVar17._0_8_ + auVar45._16_8_ * dVar110;
          auVar108._0_16_ = auVar106;
          auVar108._24_8_ = auVar17._8_8_ + auVar45._24_8_ * dVar110;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = dVar35;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar2;
          auVar16 = vunpcklpd_avx(auVar29,auVar25);
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar1;
          auVar57._8_8_ = 0;
          auVar57._0_8_ = dVar68;
          auVar93 = vunpcklpd_avx(auVar57,auVar27);
          auVar45._16_16_ = auVar16;
          auVar45._0_16_ = auVar93;
          auVar78 = vunpcklpd_avx(auVar78,auVar81);
          auVar17 = vshufpd_avx(auVar108._16_16_,auVar108._16_16_,1);
          auVar19._8_8_ = 0;
          auVar19._0_8_ = dVar51;
          auVar81 = vunpcklpd_avx(auVar19,auVar71);
          auVar71 = vshufpd_avx(auVar106,auVar106,1);
          auVar66._16_16_ = auVar78;
          auVar66._0_16_ = auVar81;
          auVar45 = vsubpd_avx(auVar66,auVar45);
          auVar72._0_8_ = auVar93._0_8_ + auVar45._0_8_ * dVar110;
          auVar72._8_8_ = auVar93._8_8_ + auVar45._8_8_ * dVar110;
          auVar74._16_8_ = auVar16._0_8_ + auVar45._16_8_ * dVar110;
          auVar74._0_16_ = auVar72;
          auVar74._24_8_ = auVar16._8_8_ + auVar45._24_8_ * dVar110;
          auVar45 = vsubpd_avx(auVar46,auVar120);
          auVar46._0_4_ = ~auVar48._0_4_ & auVar45._0_4_;
          auVar46._4_4_ = ~auVar48._4_4_ & auVar45._4_4_;
          auVar46._8_4_ = ~auVar48._8_4_ & auVar45._8_4_;
          auVar46._12_4_ = ~auVar48._12_4_ & auVar45._12_4_;
          auVar46._16_4_ = ~auVar48._16_4_ & auVar45._16_4_;
          auVar46._20_4_ = ~auVar48._20_4_ & auVar45._20_4_;
          auVar46._24_4_ = ~auVar48._24_4_ & auVar45._24_4_;
          auVar46._28_4_ = ~auVar48._28_4_ & auVar45._28_4_;
          auVar47._0_8_ = (ulonglong)auVar59._0_8_ & auVar48._0_8_;
          auVar47._8_8_ = (ulonglong)auVar59._8_8_ & auVar48._8_8_;
          auVar47._16_8_ = (ulonglong)auVar58._0_8_ & auVar48._16_8_;
          auVar47._24_8_ = (ulonglong)auVar58._8_8_ & auVar48._24_8_;
          auVar78 = vshufpd_avx(auVar74._16_16_,auVar74._16_16_,1);
          auVar47 = auVar47 | auVar46;
          auVar81 = vshufpd_avx(auVar72,auVar72,1);
          dVar68 = __real_3ff0000000000000 - dVar110;
          dVar35 = auVar85._0_8_ * dVar110 + dVar68 * auVar47._0_8_;
          dVar49 = auVar85._8_8_ * dVar110 + dVar68 * auVar47._8_8_;
          dVar50 = auVar104._0_8_ * dVar110 + dVar68 * auVar47._16_8_;
          dVar51 = auVar104._8_8_ * dVar110 + dVar68 * auVar47._24_8_;
          auVar58._0_8_ = dVar35 * dVar35 + dVar50 * dVar50;
          auVar58._8_8_ = dVar49 * dVar49 + dVar51 * dVar51;
          auVar16 = vshufpd_avx(auVar58,auVar58,1);
          dVar68 = auVar58._0_8_ + auVar16._0_8_;
          auVar59._8_8_ = 0;
          auVar59._0_8_ = dVar68;
          dVar68 = __real_3ff0000000000000 / SQRT(dVar68);
          auVar73._8_8_ = 0;
          auVar73._0_8_ = __real_3e45798ee2308c3a;
          auVar16 = vcmpsd_avx(auVar73,auVar59,6);
          uVar53 = ~auVar16._0_8_ & __real_ffffffffffffffff;
          auVar86._0_8_ = (ulonglong)(dVar35 * dVar68) & uVar53;
          auVar86._8_8_ = (ulonglong)(dVar49 * dVar68) & uVar53;
          auVar88._16_8_ = (ulonglong)(dVar50 * dVar68) & uVar53;
          auVar88._0_16_ = auVar86;
          auVar88._24_8_ = (ulonglong)(dVar51 * dVar68) & uVar53;
          auVar48._0_8_ =
               ~uVar53 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar48._8_8_ = ~uVar53 & _UNK_150b54548;
          auVar48._16_8_ = ~uVar53 & _UNK_150b54550;
          auVar48._24_8_ = ~uVar53 & _UNK_150b54558;
          auVar104 = auVar88._16_16_ | auVar48._16_16_;
          auVar16 = vshufps_avx(auVar104,auVar104,0x4e);
          auVar85 = vshufps_avx(auVar86,auVar86,0x4e);
          uVar67 = auVar71._0_8_;
          uVar92 = auVar85._0_8_;
          uVar102 = auVar104._0_8_;
          uVar124 = auVar16._0_8_;
          uVar34 = auVar78._0_8_;
          uVar75 = auVar86._0_8_;
          dVar82 = auVar72._0_8_;
          uVar52 = auVar81._0_8_;
          dVar113 = auVar74._16_8_;
          dVar97 = auVar106._0_8_;
          dVar121 = auVar108._16_8_;
          uVar118 = auVar17._0_8_;
        }
        *(ulonglong *)(param_1 + -0x58 + lVar31 * 8) = uVar75;
        *(ulonglong *)(param_1 + -0x50 + lVar31 * 8) = uVar92;
        *(ulonglong *)(param_1 + -0x48 + lVar31 * 8) = uVar102;
        *(ulonglong *)(param_1 + -0x40 + lVar31 * 8) = uVar124;
        *(double *)(param_1 + -0x38 + lVar31 * 8) = dVar82;
        *(ulonglong *)(param_1 + -0x30 + lVar31 * 8) = uVar52;
        *(double *)(param_1 + -0x28 + lVar31 * 8) = dVar113;
        *(ulonglong *)(param_1 + -0x20 + lVar31 * 8) = uVar34;
        *(double *)(param_1 + -0x18 + lVar31 * 8) = dVar97;
        *(ulonglong *)(param_1 + -0x10 + lVar31 * 8) = uVar67;
        *(double *)(param_1 + -8 + lVar31 * 8) = dVar121;
        *(ulonglong *)(param_1 + lVar31 * 8) = uVar118;
        uVar32 = uVar32 + 1;
        lVar31 = lVar31 + 0xc;
      } while (param_7 != uVar32);
    }
  }
  else if (0 < (int)param_7) {
    lVar31 = 0xb;
    uVar32 = 0;
    do {
      iVar15 = *(int *)(param_5 + uVar32 * 8);
      uVar53 = *(ulonglong *)(param_2 + -0x58 + lVar31 * 8);
      dVar68 = *(double *)(param_2 + -0x38 + lVar31 * 8);
      uVar1 = *(ulonglong *)(param_2 + -0x30 + lVar31 * 8);
      dVar35 = *(double *)(param_2 + -0x28 + lVar31 * 8);
      uVar2 = *(ulonglong *)(param_2 + -0x20 + lVar31 * 8);
      dVar49 = *(double *)(param_2 + -0x18 + lVar31 * 8);
      uVar3 = *(ulonglong *)(param_2 + -0x10 + lVar31 * 8);
      dVar50 = *(double *)(param_2 + -8 + lVar31 * 8);
      uVar4 = *(ulonglong *)(param_2 + lVar31 * 8);
      auVar96 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar31 * 8));
      auVar109 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar31 * 8));
      auVar125 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar31 * 8));
      puVar30 = (ulonglong *)GetTransformFromArray(param_3,iVar15,(int)uVar32);
      uVar5 = *puVar30;
      auVar80._8_8_ = 0;
      auVar80._0_8_ = uVar5;
      uVar6 = puVar30[1];
      auVar116._8_8_ = 0;
      auVar116._0_8_ = uVar6;
      uVar7 = puVar30[2];
      auVar89._8_8_ = 0;
      auVar89._0_8_ = uVar7;
      uVar8 = puVar30[3];
      auVar111._8_8_ = 0;
      auVar111._0_8_ = uVar8;
      dVar51 = (double)puVar30[4];
      uVar9 = puVar30[5];
      auVar54._8_8_ = 0;
      auVar54._0_8_ = uVar9;
      dVar110 = (double)puVar30[6];
      auVar76._8_8_ = 0;
      auVar76._0_8_ = dVar110;
      uVar10 = puVar30[7];
      auVar83._8_8_ = 0;
      auVar83._0_8_ = uVar10;
      dVar11 = (double)puVar30[8];
      auVar98._8_8_ = 0;
      auVar98._0_8_ = dVar11;
      uVar12 = puVar30[9];
      auVar114._8_8_ = 0;
      auVar114._0_8_ = uVar12;
      auVar16 = vmaxss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_5 + 4 + uVar32 * 8)));
      dVar13 = (double)puVar30[10];
      auVar122._8_8_ = 0;
      auVar122._0_8_ = dVar13;
      auVar17 = vminss_avx(auVar16,ZEXT416(__real_3f800000));
      auVar16 = vmaxss_avx(auVar17,ZEXT416(*(uint *)(param_4 + (longlong)iVar15 * 4)));
      uVar14 = puVar30[0xb];
      auVar119._8_8_ = 0;
      auVar119._0_8_ = uVar14;
      *(int *)(param_4 + (longlong)iVar15 * 4) = auVar16._0_4_;
      fVar33 = auVar17._0_4_;
      uVar67 = uVar2;
      uVar92 = auVar96._0_8_;
      uVar102 = auVar109._0_8_;
      uVar124 = auVar125._0_8_;
      uVar34 = uVar3;
      uVar75 = uVar53;
      dVar82 = dVar68;
      uVar52 = uVar1;
      dVar113 = dVar35;
      dVar97 = dVar49;
      dVar121 = dVar50;
      uVar118 = uVar4;
      if ((__real_3727c5ac < fVar33) &&
         (uVar67 = uVar10, uVar92 = uVar6, uVar102 = uVar7, uVar124 = uVar8, uVar34 = uVar12,
         uVar75 = uVar5, dVar82 = dVar51, uVar52 = uVar9, dVar113 = dVar110, dVar97 = dVar11,
         dVar121 = dVar13, uVar118 = uVar14, fVar33 < __real_3f7fff58)) {
        auVar78 = vunpcklpd_avx(auVar109._0_16_,auVar125._0_16_);
        auVar103._8_8_ = 0;
        auVar103._0_8_ = uVar53;
        auVar81 = vunpcklpd_avx(auVar103,auVar96._0_16_);
        auVar107._16_16_ = auVar78;
        auVar107._0_16_ = auVar81;
        auVar85 = vunpcklpd_avx(auVar89,auVar111);
        auVar104 = vunpcklpd_avx(auVar80,auVar116);
        auVar36._0_8_ = auVar81._0_8_ * auVar104._0_8_;
        auVar36._8_8_ = auVar81._8_8_ * auVar104._8_8_;
        auVar36._16_8_ = auVar78._0_8_ * auVar85._0_8_;
        auVar36._24_8_ = auVar78._8_8_ * auVar85._8_8_;
        auVar48 = vperm2f128_avx(auVar36,auVar36,1);
        auVar37._0_8_ = auVar36._0_8_ + auVar48._0_8_;
        auVar37._8_8_ = auVar36._8_8_ + auVar48._8_8_;
        auVar37._16_8_ = auVar36._16_8_ + auVar48._16_8_;
        auVar37._24_8_ = auVar36._24_8_ + auVar48._24_8_;
        auVar48 = vperm2f128_avx(auVar37,auVar37,1);
        auVar48 = vshufpd_avx(auVar37,auVar48,5);
        auVar38._0_8_ = auVar37._0_8_ + auVar48._0_8_;
        auVar38._8_8_ = auVar37._8_8_ + auVar48._8_8_;
        auVar38._16_8_ = auVar37._16_8_ + auVar48._16_8_;
        auVar38._24_8_ = auVar37._24_8_ + auVar48._24_8_;
        auVar71 = ZEXT816(0);
        auVar48 = vcmppd_avx(ZEXT1632(auVar71),auVar38,2);
        auVar16 = vpackssdw_avx(auVar48._0_16_,auVar48._16_16_);
        auVar17 = vpshufd_avx(auVar16,0x50);
        auVar16 = vpshufd_avx(auVar16,0xfa);
        auVar39._16_16_ = auVar16;
        auVar39._0_16_ = auVar17;
        auVar46 = ZEXT1632(auVar71);
        auVar48 = vcmpps_avx(ZEXT1632(auVar71),auVar46,0xf);
        auVar48 = vblendvps_avx(auVar46,auVar48,auVar39);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = dVar50;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar4;
        auVar16 = vunpcklpd_avx(auVar26,auVar24);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar3;
        auVar90._8_8_ = 0;
        auVar90._0_8_ = dVar49;
        auVar17 = vunpcklpd_avx(auVar90,auVar23);
        auVar40._16_16_ = auVar16;
        auVar40._0_16_ = auVar17;
        auVar71 = vunpcklpd_avx(auVar122,auVar119);
        auVar93 = vunpcklpd_avx(auVar98,auVar114);
        auVar91._16_16_ = auVar71;
        auVar91._0_16_ = auVar93;
        auVar45 = vsubpd_avx(auVar91,auVar40);
        dVar110 = (double)fVar33;
        auVar99._0_8_ = auVar17._0_8_ + auVar45._0_8_ * dVar110;
        auVar99._8_8_ = auVar17._8_8_ + auVar45._8_8_ * dVar110;
        auVar101._16_8_ = auVar16._0_8_ + auVar45._16_8_ * dVar110;
        auVar101._0_16_ = auVar99;
        auVar101._24_8_ = auVar16._8_8_ + auVar45._24_8_ * dVar110;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = dVar35;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar2;
        auVar16 = vunpcklpd_avx(auVar28,auVar21);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar1;
        auVar69._8_8_ = 0;
        auVar69._0_8_ = dVar68;
        auVar93 = vunpcklpd_avx(auVar69,auVar20);
        auVar41._16_16_ = auVar16;
        auVar41._0_16_ = auVar93;
        auVar100 = vunpcklpd_avx(auVar76,auVar83);
        auVar17 = vshufpd_avx(auVar101._16_16_,auVar101._16_16_,1);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = dVar51;
        auVar105 = vunpcklpd_avx(auVar18,auVar54);
        auVar71 = vshufpd_avx(auVar99,auVar99,1);
        auVar60._16_16_ = auVar100;
        auVar60._0_16_ = auVar105;
        auVar45 = vsubpd_avx(auVar60,auVar41);
        auVar84._0_8_ = auVar93._0_8_ + auVar45._0_8_ * dVar110;
        auVar84._8_8_ = auVar93._8_8_ + auVar45._8_8_ * dVar110;
        auVar87._16_8_ = auVar16._0_8_ + auVar45._16_8_ * dVar110;
        auVar87._0_16_ = auVar84;
        auVar87._24_8_ = auVar16._8_8_ + auVar45._24_8_ * dVar110;
        auVar45 = vsubpd_avx(auVar46,auVar107);
        auVar42._0_4_ = ~auVar48._0_4_ & auVar45._0_4_;
        auVar42._4_4_ = ~auVar48._4_4_ & auVar45._4_4_;
        auVar42._8_4_ = ~auVar48._8_4_ & auVar45._8_4_;
        auVar42._12_4_ = ~auVar48._12_4_ & auVar45._12_4_;
        auVar42._16_4_ = ~auVar48._16_4_ & auVar45._16_4_;
        auVar42._20_4_ = ~auVar48._20_4_ & auVar45._20_4_;
        auVar42._24_4_ = ~auVar48._24_4_ & auVar45._24_4_;
        auVar42._28_4_ = ~auVar48._28_4_ & auVar45._28_4_;
        auVar43._0_8_ = (ulonglong)auVar81._0_8_ & auVar48._0_8_;
        auVar43._8_8_ = (ulonglong)auVar81._8_8_ & auVar48._8_8_;
        auVar43._16_8_ = (ulonglong)auVar78._0_8_ & auVar48._16_8_;
        auVar43._24_8_ = (ulonglong)auVar78._8_8_ & auVar48._24_8_;
        auVar78 = vshufpd_avx(auVar87._16_16_,auVar87._16_16_,1);
        auVar43 = auVar43 | auVar42;
        auVar81 = vshufpd_avx(auVar84,auVar84,1);
        dVar68 = __real_3ff0000000000000 - dVar110;
        dVar35 = auVar104._0_8_ * dVar110 + dVar68 * auVar43._0_8_;
        dVar49 = auVar104._8_8_ * dVar110 + dVar68 * auVar43._8_8_;
        dVar50 = auVar85._0_8_ * dVar110 + dVar68 * auVar43._16_8_;
        dVar51 = auVar85._8_8_ * dVar110 + dVar68 * auVar43._24_8_;
        auVar55._0_8_ = dVar35 * dVar35 + dVar50 * dVar50;
        auVar55._8_8_ = dVar49 * dVar49 + dVar51 * dVar51;
        auVar16 = vshufpd_avx(auVar55,auVar55,1);
        dVar68 = auVar55._0_8_ + auVar16._0_8_;
        auVar56._8_8_ = 0;
        auVar56._0_8_ = dVar68;
        dVar68 = __real_3ff0000000000000 / SQRT(dVar68);
        auVar70._8_8_ = 0;
        auVar70._0_8_ = __real_3e45798ee2308c3a;
        auVar16 = vcmpsd_avx(auVar70,auVar56,6);
        uVar53 = ~auVar16._0_8_ & __real_ffffffffffffffff;
        auVar77._0_8_ = (ulonglong)(dVar35 * dVar68) & uVar53;
        auVar77._8_8_ = (ulonglong)(dVar49 * dVar68) & uVar53;
        auVar79._16_8_ = (ulonglong)(dVar50 * dVar68) & uVar53;
        auVar79._0_16_ = auVar77;
        auVar79._24_8_ = (ulonglong)(dVar51 * dVar68) & uVar53;
        auVar44._0_8_ =
             ~uVar53 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar44._8_8_ = ~uVar53 & _UNK_150b54548;
        auVar44._16_8_ = ~uVar53 & _UNK_150b54550;
        auVar44._24_8_ = ~uVar53 & _UNK_150b54558;
        auVar104 = auVar79._16_16_ | auVar44._16_16_;
        auVar16 = vshufps_avx(auVar104,auVar104,0x4e);
        auVar85 = vshufps_avx(auVar77,auVar77,0x4e);
        uVar67 = auVar78._0_8_;
        uVar92 = auVar85._0_8_;
        uVar102 = auVar104._0_8_;
        uVar124 = auVar16._0_8_;
        uVar34 = auVar71._0_8_;
        uVar75 = auVar77._0_8_;
        dVar82 = auVar84._0_8_;
        uVar52 = auVar81._0_8_;
        dVar113 = auVar87._16_8_;
        dVar97 = auVar99._0_8_;
        dVar121 = auVar101._16_8_;
        uVar118 = auVar17._0_8_;
      }
      *(ulonglong *)(param_1 + -0x58 + lVar31 * 8) = uVar75;
      *(ulonglong *)(param_1 + -0x50 + lVar31 * 8) = uVar92;
      *(ulonglong *)(param_1 + -0x48 + lVar31 * 8) = uVar102;
      *(ulonglong *)(param_1 + -0x40 + lVar31 * 8) = uVar124;
      *(double *)(param_1 + -0x38 + lVar31 * 8) = dVar82;
      *(ulonglong *)(param_1 + -0x30 + lVar31 * 8) = uVar52;
      *(double *)(param_1 + -0x28 + lVar31 * 8) = dVar113;
      *(ulonglong *)(param_1 + -0x20 + lVar31 * 8) = uVar67;
      *(double *)(param_1 + -0x18 + lVar31 * 8) = dVar97;
      *(ulonglong *)(param_1 + -0x10 + lVar31 * 8) = uVar34;
      *(double *)(param_1 + -8 + lVar31 * 8) = dVar121;
      *(ulonglong *)(param_1 + lVar31 * 8) = uVar118;
      uVar32 = uVar32 + 1;
      lVar31 = lVar31 + 0xc;
    } while (param_7 != uVar32);
  }
  return;
}

// BlendCurves___un_3C_Cunf_3E_un_3C_Cunu_3E_un_3C_unf_3E_un_3C_unu_3E_CuniCuniunf_avx @ 140ab9b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendCurves___un_3C_Cunf_3E_un_3C_Cunu_3E_un_3C_unf_3E_un_3C_unu_3E_CuniCuniunf_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               int param_6,float param_7)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined1 (*pauVar30) [32];
  uint uVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar48 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar47 [32];
  undefined1 auVar55 [32];
  
  uVar21 = __real_0000001f;
  auVar37 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  uVar29 = __real_3f800000;
  fVar20 = __real_3727c5ac;
  auVar33 = ZEXT416((uint)param_7);
  if ((param_6 == 0) &&
     ((double)(float)((uint)(param_7 + __real_bf800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_3e45798ee2308c3a)) {
    auVar33 = ZEXT416(__real_3f800000);
  }
  uVar31 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar31 = param_5;
  }
  if ((int)(uVar31 & 0xfffffff8) < 1) {
    uVar32 = 0;
  }
  else {
    auVar45 = vshufps_avx(auVar33,auVar33,0);
    uVar27 = 0;
    auVar39 = vpcmpeqd_avx(in_ZMM6._0_16_,in_ZMM6._0_16_);
    uVar22 = 0;
    uVar32 = 0;
    do {
      auVar49 = vpshufd_avx(ZEXT416((uint)uVar32),0);
      auVar52._16_16_ = auVar49;
      auVar52._0_16_ = auVar49;
      auVar52 = auVar52 | auVar37;
      auVar49._0_4_ = auVar52._0_4_ & uVar21;
      auVar49._4_4_ = auVar52._4_4_ & uVar21;
      auVar49._8_4_ = auVar52._8_4_ & uVar21;
      auVar49._12_4_ = auVar52._12_4_ & uVar21;
      auVar53._16_4_ = auVar52._16_4_ & uVar21;
      auVar53._0_16_ = auVar49;
      auVar53._20_4_ = auVar52._20_4_ & uVar21;
      auVar53._24_4_ = auVar52._24_4_ & uVar21;
      auVar53._28_4_ = auVar52._28_4_ & uVar21;
      auVar57 = vpslld_avx(auVar53._16_16_,0x17);
      auVar49 = vpslld_avx(auVar49,0x17);
      auVar54._0_4_ = (uint)(float)(auVar49._0_4_ + uVar29);
      auVar54._4_4_ = (uint)(float)(auVar49._4_4_ + uVar29);
      auVar54._8_4_ = (uint)(float)(auVar49._8_4_ + uVar29);
      auVar54._12_4_ = (uint)(float)(auVar49._12_4_ + uVar29);
      auVar54._16_4_ = (uint)(float)(auVar57._0_4_ + uVar29);
      auVar54._20_4_ = (uint)(float)(auVar57._4_4_ + uVar29);
      auVar54._24_4_ = (uint)(float)(auVar57._8_4_ + uVar29);
      auVar54._28_4_ = (uint)(float)(auVar57._12_4_ + uVar29);
      uVar6 = *(uint *)(param_2 + (ulonglong)(uVar27 & 0xffffffc));
      auVar58._4_4_ = uVar6;
      auVar58._0_4_ = uVar6;
      auVar58._8_4_ = uVar6;
      auVar58._12_4_ = uVar6;
      auVar58._16_4_ = uVar6;
      auVar58._20_4_ = uVar6;
      auVar58._24_4_ = uVar6;
      auVar58._28_4_ = uVar6;
      if ((auVar54 & auVar58) != (undefined1  [32])0x0) {
        auVar50._0_4_ = uVar6 & auVar54._0_4_;
        auVar50._4_4_ = uVar6 & auVar54._4_4_;
        auVar50._8_4_ = uVar6 & auVar54._8_4_;
        auVar50._12_4_ = uVar6 & auVar54._12_4_;
        auVar55._16_4_ = uVar6 & auVar54._16_4_;
        auVar55._0_16_ = auVar50;
        auVar55._20_4_ = uVar6 & auVar54._20_4_;
        auVar55._24_4_ = uVar6 & auVar54._24_4_;
        auVar55._28_4_ = uVar6 & auVar54._28_4_;
        uVar26 = (ulonglong)uVar22;
        auVar57 = vpcmpeqd_avx(auVar55._16_16_,(undefined1  [16])0x0);
        auVar50 = vpcmpeqd_avx(auVar50,(undefined1  [16])0x0);
        auVar49 = vpackssdw_avx(auVar50,auVar57);
        auVar49 = auVar49 ^ auVar39;
        auVar11 = vpmovsxwd_avx(auVar49);
        auVar49 = vpunpckhwd_avx(auVar49,auVar49);
        fVar7 = auVar45._0_4_;
        fVar8 = auVar45._4_4_;
        fVar9 = auVar45._8_4_;
        fVar10 = auVar45._12_4_;
        if (param_6 == 0) {
          auVar60._16_16_ = auVar49;
          auVar60._0_16_ = auVar11;
          auVar52 = vmaskmovps_avx(auVar60,*(undefined1 (*) [32])(param_1 + uVar26));
          auVar61._0_4_ = auVar52._0_4_ * fVar7;
          auVar61._4_4_ = auVar52._4_4_ * fVar8;
          auVar61._8_4_ = auVar52._8_4_ * fVar9;
          auVar61._12_4_ = auVar52._12_4_ * fVar10;
          auVar61._16_4_ = auVar52._16_4_ * fVar7;
          auVar61._20_4_ = auVar52._20_4_ * fVar8;
          auVar61._24_4_ = auVar52._24_4_ * fVar9;
          auVar61._28_4_ = auVar52._28_4_ * fVar10;
        }
        else {
          auVar62._16_16_ = auVar57 ^ auVar39;
          auVar62._0_16_ = auVar50 ^ auVar39;
          auVar52 = vmaskmovps_avx(auVar62,*(undefined1 (*) [32])(param_3 + uVar26));
          auVar61 = auVar52;
          if (fVar20 < auVar33._0_4_) {
            auVar63._16_16_ = auVar49;
            auVar63._0_16_ = auVar11;
            auVar53 = vmaskmovps_avx(auVar63,*(undefined1 (*) [32])(param_1 + uVar26));
            auVar61._0_4_ = auVar52._0_4_ + auVar53._0_4_ * fVar7;
            auVar61._4_4_ = auVar52._4_4_ + auVar53._4_4_ * fVar8;
            auVar61._8_4_ = auVar52._8_4_ + auVar53._8_4_ * fVar9;
            auVar61._12_4_ = auVar52._12_4_ + auVar53._12_4_ * fVar10;
            auVar61._16_4_ = auVar52._16_4_ + auVar53._16_4_ * fVar7;
            auVar61._20_4_ = auVar52._20_4_ + auVar53._20_4_ * fVar8;
            auVar61._24_4_ = auVar52._24_4_ + auVar53._24_4_ * fVar9;
            auVar61._28_4_ = auVar52._28_4_ + auVar53._28_4_ * fVar10;
          }
        }
        auVar51._16_16_ = auVar49;
        auVar51._0_16_ = auVar11;
        auVar52 = vmaskmovps_avx(auVar51,auVar61);
        *(undefined1 (*) [32])(uVar26 + param_3) = auVar52;
      }
      uVar32 = uVar32 + 8;
      uVar22 = uVar22 + 0x20;
      uVar27 = uVar27 + 1;
    } while (uVar32 < (uVar31 & 0xfffffff8));
  }
  uVar29 = (uint)uVar32;
  if ((int)uVar29 < (int)param_5) {
    auVar39 = vpshufd_avx(ZEXT416(uVar29),0);
    auVar37._16_16_ = auVar39;
    auVar37._0_16_ = auVar39;
    auVar37 = auVar37 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar50 = vpshufd_avx(ZEXT416(param_5),0);
    auVar39._0_4_ =
         auVar37._0_4_ & ___ymm_0000001f0000001f0000001f0000001f0000001f0000001f0000001f0000001f;
    auVar39._4_4_ = auVar37._4_4_ & _UNK_151c6b084;
    auVar39._8_4_ = auVar37._8_4_ & _UNK_151c6b088;
    auVar39._12_4_ = auVar37._12_4_ & _UNK_151c6b08c;
    auVar46._16_4_ = auVar37._16_4_ & _UNK_151c6b090;
    auVar46._0_16_ = auVar39;
    auVar46._20_4_ = auVar37._20_4_ & _UNK_151c6b094;
    auVar46._24_4_ = auVar37._24_4_ & _UNK_151c6b098;
    auVar46._28_4_ = auVar37._28_4_ & _UNK_151c6b09c;
    auVar39 = vpslld_avx(auVar39,0x17);
    auVar40._0_4_ = (uint)(float)(auVar39._0_4_ + __real_3f800000);
    auVar40._4_4_ = (uint)(float)(auVar39._4_4_ + __real_3f800000);
    auVar40._8_4_ = (uint)(float)(auVar39._8_4_ + __real_3f800000);
    auVar40._12_4_ = (uint)(float)(auVar39._12_4_ + __real_3f800000);
    auVar39 = vpslld_avx(auVar46._16_16_,0x17);
    auVar44._0_4_ = (uint)(float)(auVar39._0_4_ + __real_3f800000);
    auVar44._4_4_ = (uint)(float)(auVar39._4_4_ + __real_3f800000);
    auVar44._8_4_ = (uint)(float)(auVar39._8_4_ + __real_3f800000);
    auVar44._12_4_ = (uint)(float)(auVar39._12_4_ + __real_3f800000);
    auVar11 = vpshufd_avx(ZEXT416(*(uint *)(param_2 + (ulonglong)((uint)(uVar32 >> 3) & 0xffffffc)))
                          ,0);
    auVar39 = vpand_avx(auVar11,auVar44);
    auVar45 = vpcmpeqd_avx(auVar39,(undefined1  [16])0x0);
    auVar39 = vpand_avx(auVar11,auVar40);
    auVar39 = vpcmpeqd_avx(auVar39,(undefined1  [16])0x0);
    auVar49 = vpcmpgtd_avx(auVar50,auVar37._16_16_);
    auVar57 = vpcmpgtd_avx(auVar50,auVar37._0_16_);
    auVar59._16_16_ = auVar49;
    auVar59._0_16_ = auVar57;
    auVar56._0_4_ = auVar39._0_4_ & auVar57._0_4_;
    auVar56._4_4_ = auVar39._4_4_ & auVar57._4_4_;
    auVar56._8_4_ = auVar39._8_4_ & auVar57._8_4_;
    auVar56._12_4_ = auVar39._12_4_ & auVar57._12_4_;
    auVar56._16_4_ = auVar45._0_4_ & auVar49._0_4_;
    auVar56._20_4_ = auVar45._4_4_ & auVar49._4_4_;
    auVar56._24_4_ = auVar45._8_4_ & auVar49._8_4_;
    auVar56._28_4_ = auVar45._12_4_ & auVar49._12_4_;
    uVar23 = vmovmskps_avx(auVar56);
    uVar28 = vmovmskps_avx(auVar59);
    if ((char)uVar23 != (char)uVar28) {
      auVar45._0_4_ = auVar11._0_4_ & auVar40._0_4_;
      auVar45._4_4_ = auVar11._4_4_ & auVar40._4_4_;
      auVar45._8_4_ = auVar11._8_4_ & auVar40._8_4_;
      auVar45._12_4_ = auVar11._12_4_ & auVar40._12_4_;
      auVar47._16_4_ = auVar11._0_4_ & auVar44._0_4_;
      auVar47._0_16_ = auVar45;
      auVar47._20_4_ = auVar11._4_4_ & auVar44._4_4_;
      auVar47._24_4_ = auVar11._8_4_ & auVar44._8_4_;
      auVar47._28_4_ = auVar11._12_4_ & auVar44._12_4_;
      auVar49 = vpcmpeqd_avx(auVar47._16_16_,(undefined1  [16])0x0);
      auVar57 = vpcmpeqd_avx(auVar45,(undefined1  [16])0x0);
      auVar11 = vpcmpgtd_avx(auVar50,auVar37._16_16_);
      auVar50 = vpcmpgtd_avx(auVar50,auVar37._0_16_);
      lVar24 = (longlong)(int)(uVar29 << 2);
      auVar39 = vpandn_avx(auVar49,auVar11);
      auVar45 = vpandn_avx(auVar57,auVar50);
      auVar39 = vpackssdw_avx(auVar45,auVar39);
      auVar45 = vpmovsxwd_avx(auVar39);
      auVar39 = vpunpckhwd_avx(auVar39,auVar39);
      if (param_6 == 0) {
        auVar43._16_16_ = auVar39;
        auVar43._0_16_ = auVar45;
        auVar37 = vmaskmovps_avx(auVar43,*(undefined1 (*) [32])(param_1 + lVar24));
        auVar33 = vshufps_avx(auVar33,auVar33,0);
        auVar42._0_4_ = auVar33._0_4_ * auVar37._0_4_;
        auVar42._4_4_ = auVar33._4_4_ * auVar37._4_4_;
        auVar42._8_4_ = auVar33._8_4_ * auVar37._8_4_;
        auVar42._12_4_ = auVar33._12_4_ * auVar37._12_4_;
        auVar42._16_4_ = auVar33._0_4_ * auVar37._16_4_;
        auVar42._20_4_ = auVar33._4_4_ * auVar37._20_4_;
        auVar42._24_4_ = auVar33._8_4_ * auVar37._24_4_;
        auVar42._28_4_ = auVar33._12_4_ * auVar37._28_4_;
      }
      else {
        auVar41._0_4_ = ~auVar57._0_4_ & auVar50._0_4_;
        auVar41._4_4_ = ~auVar57._4_4_ & auVar50._4_4_;
        auVar41._8_4_ = ~auVar57._8_4_ & auVar50._8_4_;
        auVar41._12_4_ = ~auVar57._12_4_ & auVar50._12_4_;
        auVar41._16_4_ = ~auVar49._0_4_ & auVar11._0_4_;
        auVar41._20_4_ = ~auVar49._4_4_ & auVar11._4_4_;
        auVar41._24_4_ = ~auVar49._8_4_ & auVar11._8_4_;
        auVar41._28_4_ = ~auVar49._12_4_ & auVar11._12_4_;
        auVar37 = vmaskmovps_avx(auVar41,*(undefined1 (*) [32])(param_3 + lVar24));
        auVar42 = auVar37;
        if (__real_3727c5ac < auVar33._0_4_) {
          auVar48._16_16_ = auVar39;
          auVar48._0_16_ = auVar45;
          auVar52 = vmaskmovps_avx(auVar48,*(undefined1 (*) [32])(param_1 + lVar24));
          auVar33 = vshufps_avx(auVar33,auVar33,0);
          auVar42._0_4_ = auVar37._0_4_ + auVar33._0_4_ * auVar52._0_4_;
          auVar42._4_4_ = auVar37._4_4_ + auVar33._4_4_ * auVar52._4_4_;
          auVar42._8_4_ = auVar37._8_4_ + auVar33._8_4_ * auVar52._8_4_;
          auVar42._12_4_ = auVar37._12_4_ + auVar33._12_4_ * auVar52._12_4_;
          auVar42._16_4_ = auVar37._16_4_ + auVar33._0_4_ * auVar52._16_4_;
          auVar42._20_4_ = auVar37._20_4_ + auVar33._4_4_ * auVar52._20_4_;
          auVar42._24_4_ = auVar37._24_4_ + auVar33._8_4_ * auVar52._24_4_;
          auVar42._28_4_ = auVar37._28_4_ + auVar33._12_4_ * auVar52._28_4_;
        }
      }
      auVar34._16_16_ = auVar39;
      auVar34._0_16_ = auVar45;
      auVar37 = vmaskmovps_avx(auVar34,auVar42);
      *(undefined1 (*) [32])(param_3 + lVar24) = auVar37;
    }
  }
  auVar33 = vroundss_avx(ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),
                         ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),10);
  uVar21 = (uint)auVar33._0_4_;
  uVar29 = uVar21 + 7;
  if (-1 < (int)uVar21) {
    uVar29 = uVar21;
  }
  uVar29 = uVar29 & 0xfffffff8;
  if ((int)uVar29 < 1) {
    uVar29 = 0;
    if ((int)uVar21 < 1) {
      return;
    }
  }
  else {
    uVar31 = 0;
    uVar32 = 0;
    if (param_6 == 0) {
      do {
        uVar26 = (ulonglong)uVar31;
        uVar12 = *(undefined8 *)(param_2 + uVar26);
        uVar13 = ((undefined8 *)(param_2 + uVar26))[1];
        puVar4 = (undefined8 *)(param_2 + 0x10 + uVar26);
        uVar14 = puVar4[1];
        puVar5 = (undefined8 *)(param_4 + 0x10 + uVar26);
        *puVar5 = *puVar4;
        puVar5[1] = uVar14;
        *(undefined8 *)(param_4 + uVar26) = uVar12;
        ((undefined8 *)(param_4 + uVar26))[1] = uVar13;
        uVar32 = uVar32 + 8;
        uVar31 = uVar31 + 0x20;
      } while (uVar32 < uVar29);
    }
    else {
      do {
        uVar25 = (ulonglong)uVar31;
        uVar17 = *(ulonglong *)(param_4 + uVar25);
        uVar18 = ((ulonglong *)(param_4 + uVar25))[1];
        puVar1 = (ulonglong *)(param_4 + 0x10 + uVar25);
        uVar19 = puVar1[1];
        uVar26 = *(ulonglong *)(param_2 + uVar25);
        uVar15 = ((ulonglong *)(param_2 + uVar25))[1];
        puVar2 = (ulonglong *)(param_2 + 0x10 + uVar25);
        uVar16 = puVar2[1];
        puVar3 = (ulonglong *)(param_4 + 0x10 + uVar25);
        *puVar3 = *puVar1 | *puVar2;
        puVar3[1] = uVar19 | uVar16;
        *(ulonglong *)(param_4 + uVar25) = uVar17 | uVar26;
        ((ulonglong *)(param_4 + uVar25))[1] = uVar18 | uVar15;
        uVar32 = uVar32 + 8;
        uVar31 = uVar31 + 0x20;
      } while (uVar32 < uVar29);
    }
    uVar29 = (uint)uVar32;
    if ((int)uVar21 <= (int)uVar29) {
      return;
    }
  }
  auVar33 = vpshufd_avx(ZEXT416(uVar29),0);
  auVar35._16_16_ = auVar33;
  auVar35._0_16_ = auVar33;
  pauVar30 = (undefined1 (*) [32])(param_4 + (int)(uVar29 * 4));
  auVar45 = vpshufd_avx(ZEXT416(uVar21),0);
  auVar49 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar57 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar33 = vpcmpgtd_avx(auVar45,auVar57);
  auVar39 = vpcmpgtd_avx(auVar45,auVar49);
  auVar38._16_16_ = auVar33;
  auVar38._0_16_ = auVar39;
  auVar37 = vmaskmovps_avx(auVar38,*(undefined1 (*) [32])(param_2 + (int)(uVar29 * 4)));
  auVar33 = vpcmpgtd_avx(auVar45,auVar57);
  auVar39 = vpcmpgtd_avx(auVar45,auVar49);
  auVar36._16_16_ = auVar33;
  auVar36._0_16_ = auVar39;
  if (param_6 == 0) {
    auVar37 = vmaskmovps_avx(auVar36,auVar37);
    *pauVar30 = auVar37;
  }
  else {
    auVar52 = vmaskmovps_avx(auVar36,*pauVar30);
    auVar37 = vmaskmovps_avx(auVar36,auVar52 | auVar37);
    *pauVar30 = auVar37;
  }
  return;
}

// LerpBoneTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cunfun_3C_CunS_3E_Cuni_avx @ 140ab9fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LerpBoneTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cunfun_3C_CunS_3E_Cuni_avx
               (longlong param_1,longlong param_2,float param_3,longlong param_4,uint param_5,
               undefined1 (*param_6) [16])

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  ulonglong *puVar6;
  undefined1 auVar7 [32];
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  double dVar60;
  undefined1 in_ZMM3 [64];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  double dVar82;
  double dVar94;
  double dVar95;
  double dVar96;
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  ulonglong uVar83;
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  double dVar97;
  double dVar102;
  double dVar103;
  double dVar104;
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  
  auVar93 = _DAT_151c6b0e0;
  auVar7 = _DAT_151c6b0c0;
  uVar22 = _UNK_150b5455c;
  uVar21 = _UNK_150b54558;
  uVar20 = _UNK_150b54554;
  uVar19 = _UNK_150b54550;
  uVar18 = _UNK_150b5454c;
  uVar17 = _UNK_150b54548;
  uVar16 = _UNK_150b54544;
  uVar15 = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar49 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
  auVar62 = vpcmpgtd_avx(param_6[1],auVar49);
  auVar49 = vpcmpgtd_avx(*param_6,auVar49);
  auVar49 = vpor_avx(auVar49,auVar62);
  uVar23 = param_5 & 0xfffffff8;
  fVar8 = __real_3f800000 - param_3;
  if ((((SUB161(auVar49 >> 0x1f,0) & 1) == 0 && (SUB161(auVar49 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar49 >> 0x5f,0) & 1) == 0) && -1 < auVar49[0xf]) {
    if (0 < (int)uVar23) {
      dVar47 = (double)fVar8;
      dVar60 = (double)param_3;
      lVar24 = param_1 + 0x20;
      lVar1 = param_1 + 0x40;
      uVar26 = 0;
      auVar49 = ZEXT816(0);
      auVar81 = vcmpps_avx(ZEXT1632(auVar49),ZEXT1632(auVar49),0xf);
      auVar73._8_8_ = __real_3ff0000000000000;
      auVar73._0_8_ = __real_3ff0000000000000;
      auVar73._16_8_ = __real_3ff0000000000000;
      auVar73._24_8_ = __real_3ff0000000000000;
      do {
        uVar27 = (ulonglong)((uint)*(ushort *)(param_4 + uVar26 * 2) * 0x60);
        pdVar2 = (double *)(param_1 + 0x10 + uVar27);
        uVar25 = (ulonglong)((uint)*(ushort *)(param_4 + 2 + uVar26 * 2) * 0x60);
        pdVar3 = (double *)(param_1 + 0x10 + uVar25);
        pdVar4 = (double *)(param_2 + 0x10 + uVar27);
        pdVar5 = (double *)(param_2 + 0x10 + uVar25);
        dVar82 = *(double *)(param_1 + uVar25) * dVar47;
        dVar94 = ((double *)(param_1 + uVar25))[1] * dVar47;
        dVar95 = *pdVar3 * dVar47;
        dVar96 = pdVar3[1] * dVar47;
        dVar97 = *(double *)(param_1 + uVar27) * dVar47;
        dVar102 = ((double *)(param_1 + uVar27))[1] * dVar47;
        dVar103 = *pdVar2 * dVar47;
        dVar104 = pdVar2[1] * dVar47;
        auVar107._0_8_ = *(double *)(param_2 + uVar25) * dVar60;
        auVar107._8_8_ = ((double *)(param_2 + uVar25))[1] * dVar60;
        auVar107._16_8_ = *pdVar5 * dVar60;
        auVar107._24_8_ = pdVar5[1] * dVar60;
        auVar111._0_8_ = *(double *)(param_2 + uVar27) * dVar60;
        auVar111._8_8_ = ((double *)(param_2 + uVar27))[1] * dVar60;
        auVar111._16_8_ = *pdVar4 * dVar60;
        auVar111._24_8_ = pdVar4[1] * dVar60;
        auVar113._0_8_ = dVar97 * auVar111._0_8_;
        auVar113._8_8_ = dVar102 * auVar111._8_8_;
        auVar113._16_8_ = dVar103 * auVar111._16_8_;
        auVar113._24_8_ = dVar104 * auVar111._24_8_;
        auVar114._0_8_ = dVar82 * auVar107._0_8_;
        auVar114._8_8_ = dVar94 * auVar107._8_8_;
        auVar114._16_8_ = dVar95 * auVar107._16_8_;
        auVar114._24_8_ = dVar96 * auVar107._24_8_;
        auVar41 = vperm2f128_avx(auVar114,auVar114,1);
        auVar39 = vperm2f128_avx(auVar113,auVar113,1);
        auVar63._0_8_ = auVar113._0_8_ + auVar39._0_8_;
        auVar63._8_8_ = auVar113._8_8_ + auVar39._8_8_;
        auVar63._16_8_ = auVar113._16_8_ + auVar39._16_8_;
        auVar63._24_8_ = auVar113._24_8_ + auVar39._24_8_;
        auVar38._0_8_ = auVar114._0_8_ + auVar41._0_8_;
        auVar38._8_8_ = auVar114._8_8_ + auVar41._8_8_;
        auVar38._16_8_ = auVar114._16_8_ + auVar41._16_8_;
        auVar38._24_8_ = auVar114._24_8_ + auVar41._24_8_;
        auVar41 = vperm2f128_avx(auVar38,auVar38,1);
        auVar41 = vshufpd_avx(auVar38,auVar41,5);
        auVar39 = vperm2f128_avx(auVar63,auVar63,1);
        auVar39 = vshufpd_avx(auVar63,auVar39,5);
        auVar64._0_8_ = auVar39._0_8_ + auVar63._0_8_;
        auVar64._8_8_ = auVar39._8_8_ + auVar63._8_8_;
        auVar64._16_8_ = auVar39._16_8_ + auVar63._16_8_;
        auVar64._24_8_ = auVar39._24_8_ + auVar63._24_8_;
        auVar39._0_8_ = auVar41._0_8_ + auVar38._0_8_;
        auVar39._8_8_ = auVar41._8_8_ + auVar38._8_8_;
        auVar39._16_8_ = auVar41._16_8_ + auVar38._16_8_;
        auVar39._24_8_ = auVar41._24_8_ + auVar38._24_8_;
        auVar38 = ZEXT1632(auVar49);
        auVar41 = vcmppd_avx(auVar38,auVar39,2);
        auVar39 = vcmppd_avx(auVar38,auVar64,2);
        auVar62 = vpackssdw_avx(auVar41._0_16_,auVar41._16_16_);
        auVar77 = vpackssdw_avx(auVar39._0_16_,auVar39._16_16_);
        auVar76 = vpshufd_avx(auVar77,0x50);
        auVar77 = vpshufd_avx(auVar77,0xfa);
        auVar65._16_16_ = auVar77;
        auVar65._0_16_ = auVar76;
        auVar77 = vpshufd_avx(auVar62,0x50);
        auVar41 = vblendvps_avx(auVar38,auVar81,auVar65);
        auVar62 = vpshufd_avx(auVar62,0xfa);
        auVar40._16_16_ = auVar62;
        auVar40._0_16_ = auVar77;
        auVar39 = vblendvps_avx(auVar38,auVar81,auVar40);
        auVar46 = ZEXT1632(auVar49);
        auVar38 = vsubpd_avx(auVar46,auVar107);
        auVar40 = vsubpd_avx(auVar46,auVar111);
        auVar67._0_4_ = ~auVar41._0_4_ & auVar40._0_4_;
        auVar67._4_4_ = ~auVar41._4_4_ & auVar40._4_4_;
        auVar67._8_4_ = ~auVar41._8_4_ & auVar40._8_4_;
        auVar67._12_4_ = ~auVar41._12_4_ & auVar40._12_4_;
        auVar67._16_4_ = ~auVar41._16_4_ & auVar40._16_4_;
        auVar67._20_4_ = ~auVar41._20_4_ & auVar40._20_4_;
        auVar67._24_4_ = ~auVar41._24_4_ & auVar40._24_4_;
        auVar67._28_4_ = ~auVar41._28_4_ & auVar40._28_4_;
        auVar66._0_8_ = (ulonglong)auVar111._0_8_ & auVar41._0_8_;
        auVar66._8_8_ = (ulonglong)auVar111._8_8_ & auVar41._8_8_;
        auVar66._16_8_ = (ulonglong)auVar111._16_8_ & auVar41._16_8_;
        auVar66._24_8_ = (ulonglong)auVar111._24_8_ & auVar41._24_8_;
        auVar67 = auVar67 | auVar66;
        auVar42._0_4_ = ~auVar39._0_4_ & auVar38._0_4_;
        auVar42._4_4_ = ~auVar39._4_4_ & auVar38._4_4_;
        auVar42._8_4_ = ~auVar39._8_4_ & auVar38._8_4_;
        auVar42._12_4_ = ~auVar39._12_4_ & auVar38._12_4_;
        auVar42._16_4_ = ~auVar39._16_4_ & auVar38._16_4_;
        auVar42._20_4_ = ~auVar39._20_4_ & auVar38._20_4_;
        auVar42._24_4_ = ~auVar39._24_4_ & auVar38._24_4_;
        auVar42._28_4_ = ~auVar39._28_4_ & auVar38._28_4_;
        auVar41._0_8_ = (ulonglong)auVar107._0_8_ & auVar39._0_8_;
        auVar41._8_8_ = (ulonglong)auVar107._8_8_ & auVar39._8_8_;
        auVar41._16_8_ = (ulonglong)auVar107._16_8_ & auVar39._16_8_;
        auVar41._24_8_ = (ulonglong)auVar107._24_8_ & auVar39._24_8_;
        auVar42 = auVar42 | auVar41;
        dVar82 = dVar82 + auVar42._0_8_;
        dVar94 = dVar94 + auVar42._8_8_;
        dVar95 = dVar95 + auVar42._16_8_;
        dVar96 = dVar96 + auVar42._24_8_;
        dVar97 = dVar97 + auVar67._0_8_;
        dVar102 = dVar102 + auVar67._8_8_;
        dVar103 = dVar103 + auVar67._16_8_;
        dVar104 = dVar104 + auVar67._24_8_;
        auVar43._0_8_ = dVar97 * dVar97;
        auVar43._8_8_ = dVar102 * dVar102;
        auVar43._16_8_ = dVar103 * dVar103;
        auVar43._24_8_ = dVar104 * dVar104;
        auVar68._0_8_ = dVar82 * dVar82;
        auVar68._8_8_ = dVar94 * dVar94;
        auVar68._16_8_ = dVar95 * dVar95;
        auVar68._24_8_ = dVar96 * dVar96;
        auVar41 = vperm2f128_avx(auVar68,auVar68,1);
        auVar39 = vperm2f128_avx(auVar43,auVar43,1);
        auVar44._0_8_ = auVar39._0_8_ + auVar43._0_8_;
        auVar44._8_8_ = auVar39._8_8_ + auVar43._8_8_;
        auVar44._16_8_ = auVar39._16_8_ + auVar43._16_8_;
        auVar44._24_8_ = auVar39._24_8_ + auVar43._24_8_;
        auVar69._0_8_ = auVar41._0_8_ + auVar68._0_8_;
        auVar69._8_8_ = auVar41._8_8_ + auVar68._8_8_;
        auVar69._16_8_ = auVar41._16_8_ + auVar68._16_8_;
        auVar69._24_8_ = auVar41._24_8_ + auVar68._24_8_;
        auVar41 = vperm2f128_avx(auVar69,auVar69,1);
        auVar41 = vshufpd_avx(auVar69,auVar41,5);
        auVar39 = vperm2f128_avx(auVar44,auVar44,1);
        auVar39 = vshufpd_avx(auVar44,auVar39,5);
        auVar45._0_8_ = auVar39._0_8_ + auVar44._0_8_;
        auVar45._8_8_ = auVar39._8_8_ + auVar44._8_8_;
        auVar45._16_8_ = auVar39._16_8_ + auVar44._16_8_;
        auVar45._24_8_ = auVar39._24_8_ + auVar44._24_8_;
        auVar70._0_8_ = auVar41._0_8_ + auVar69._0_8_;
        auVar70._8_8_ = auVar41._8_8_ + auVar69._8_8_;
        auVar70._16_8_ = auVar41._16_8_ + auVar69._16_8_;
        auVar70._24_8_ = auVar41._24_8_ + auVar69._24_8_;
        auVar41 = vcmppd_avx(auVar93,auVar70,2);
        auVar62 = vpackssdw_avx(auVar41._0_16_,auVar41._16_16_);
        auVar41 = vcmppd_avx(auVar7,auVar45,2);
        auVar77 = vpackssdw_avx(auVar41._0_16_,auVar41._16_16_);
        auVar41 = vsqrtpd_avx(auVar45);
        auVar76 = vpshufd_avx(auVar77,0x50);
        auVar39 = vsqrtpd_avx(auVar70);
        auVar77 = vpshufd_avx(auVar77,0xfa);
        auVar48 = vpshufd_avx(auVar62,0x50);
        auVar38 = vdivpd_avx(auVar73,auVar39);
        auVar40 = vdivpd_avx(auVar73,auVar41);
        auVar112._16_16_ = auVar77;
        auVar112._0_16_ = auVar76;
        auVar62 = vpshufd_avx(auVar62,0xfa);
        auVar108._16_16_ = auVar62;
        auVar108._0_16_ = auVar48;
        auVar41 = vblendvps_avx(auVar46,auVar81,auVar112);
        auVar39 = vblendvps_avx(auVar46,auVar81,auVar108);
        auVar100._0_4_ = ~auVar39._0_4_ & uVar15;
        auVar100._4_4_ = ~auVar39._4_4_ & uVar16;
        auVar100._8_4_ = ~auVar39._8_4_ & uVar17;
        auVar100._12_4_ = ~auVar39._12_4_ & uVar18;
        auVar100._16_4_ = ~auVar39._16_4_ & uVar19;
        auVar100._20_4_ = ~auVar39._20_4_ & uVar20;
        auVar100._24_4_ = ~auVar39._24_4_ & uVar21;
        auVar100._28_4_ = ~auVar39._28_4_ & uVar22;
        auVar71._0_8_ = auVar39._0_8_ & (ulonglong)(dVar82 * auVar38._0_8_);
        auVar71._8_8_ = auVar39._8_8_ & (ulonglong)(dVar94 * auVar38._8_8_);
        auVar71._16_8_ = auVar39._16_8_ & (ulonglong)(dVar95 * auVar38._16_8_);
        auVar71._24_8_ = auVar39._24_8_ & (ulonglong)(dVar96 * auVar38._24_8_);
        auVar89._0_4_ = ~auVar41._0_4_ & uVar15;
        auVar89._4_4_ = ~auVar41._4_4_ & uVar16;
        auVar89._8_4_ = ~auVar41._8_4_ & uVar17;
        auVar89._12_4_ = ~auVar41._12_4_ & uVar18;
        auVar89._16_4_ = ~auVar41._16_4_ & uVar19;
        auVar89._20_4_ = ~auVar41._20_4_ & uVar20;
        auVar89._24_4_ = ~auVar41._24_4_ & uVar21;
        auVar89._28_4_ = ~auVar41._28_4_ & uVar22;
        auVar46._0_8_ = auVar41._0_8_ & (ulonglong)(dVar97 * auVar40._0_8_);
        auVar46._8_8_ = auVar41._8_8_ & (ulonglong)(dVar102 * auVar40._8_8_);
        auVar46._16_8_ = auVar41._16_8_ & (ulonglong)(dVar103 * auVar40._16_8_);
        auVar46._24_8_ = auVar41._24_8_ & (ulonglong)(dVar104 * auVar40._24_8_);
        *(undefined1 (*) [16])(param_1 + uVar27) = SUB3216(auVar89 | auVar46,0);
        *(undefined1 (*) [16])(param_1 + 0x10 + uVar27) = SUB3216(auVar89 | auVar46,0x10);
        *(undefined1 (*) [16])(param_1 + uVar25) = SUB3216(auVar100 | auVar71,0);
        *(undefined1 (*) [16])(param_1 + 0x10 + uVar25) = SUB3216(auVar100 | auVar71,0x10);
        pdVar2 = (double *)(param_2 + 0x20 + uVar25);
        dVar82 = *pdVar2;
        dVar94 = pdVar2[1];
        dVar97 = *(double *)(lVar24 + uVar25);
        dVar102 = ((double *)(lVar24 + uVar25))[1];
        pdVar2 = (double *)(param_2 + 0x30 + uVar25);
        dVar95 = *pdVar2;
        dVar96 = pdVar2[1];
        pdVar2 = (double *)(param_1 + 0x30 + uVar25);
        dVar103 = *pdVar2;
        dVar104 = pdVar2[1];
        dVar9 = ((double *)(lVar24 + uVar27))[1];
        pdVar2 = (double *)(param_2 + 0x20 + uVar27);
        dVar12 = pdVar2[1];
        pdVar3 = (double *)(param_1 + 0x30 + uVar27);
        dVar10 = *pdVar3;
        dVar11 = pdVar3[1];
        pdVar3 = (double *)(param_2 + 0x30 + uVar27);
        dVar13 = *pdVar3;
        dVar14 = pdVar3[1];
        *(double *)(lVar24 + uVar27) = *(double *)(lVar24 + uVar27) * dVar47 + *pdVar2 * dVar60;
        ((double *)(lVar24 + uVar27))[1] = dVar9 * dVar47 + dVar12 * dVar60;
        pdVar2 = (double *)(param_1 + 0x30 + uVar27);
        *pdVar2 = dVar10 * dVar47 + dVar13 * dVar60;
        pdVar2[1] = dVar11 * dVar47 + dVar14 * dVar60;
        *(double *)(lVar24 + uVar25) = dVar47 * dVar97 + dVar60 * dVar82;
        ((double *)(lVar24 + uVar25))[1] = dVar47 * dVar102 + dVar60 * dVar94;
        pdVar2 = (double *)(param_1 + 0x30 + uVar25);
        *pdVar2 = dVar47 * dVar103 + dVar60 * dVar95;
        pdVar2[1] = dVar47 * dVar104 + dVar60 * dVar96;
        pdVar2 = (double *)(param_2 + 0x40 + uVar25);
        dVar82 = *pdVar2;
        dVar94 = pdVar2[1];
        pdVar2 = (double *)(param_2 + 0x50 + uVar25);
        dVar95 = *pdVar2;
        dVar96 = pdVar2[1];
        dVar97 = *(double *)(lVar1 + uVar25);
        dVar102 = ((double *)(lVar1 + uVar25))[1];
        dVar9 = ((double *)(lVar1 + uVar27))[1];
        pdVar2 = (double *)(param_2 + 0x40 + uVar27);
        dVar12 = pdVar2[1];
        pdVar3 = (double *)(param_1 + 0x50 + uVar25);
        dVar103 = *pdVar3;
        dVar104 = pdVar3[1];
        pdVar3 = (double *)(param_2 + 0x50 + uVar27);
        dVar13 = *pdVar3;
        dVar14 = pdVar3[1];
        pdVar3 = (double *)(param_1 + 0x50 + uVar27);
        dVar10 = *pdVar3;
        dVar11 = pdVar3[1];
        *(double *)(lVar1 + uVar27) = *(double *)(lVar1 + uVar27) * dVar47 + *pdVar2 * dVar60;
        ((double *)(lVar1 + uVar27))[1] = dVar9 * dVar47 + dVar12 * dVar60;
        pdVar2 = (double *)(param_1 + 0x50 + uVar27);
        *pdVar2 = dVar10 * dVar47 + dVar13 * dVar60;
        pdVar2[1] = dVar11 * dVar47 + dVar14 * dVar60;
        *(double *)(lVar1 + uVar25) = dVar47 * dVar97 + dVar60 * dVar82;
        ((double *)(lVar1 + uVar25))[1] = dVar47 * dVar102 + dVar60 * dVar94;
        pdVar2 = (double *)(param_1 + 0x50 + uVar25);
        *pdVar2 = dVar47 * dVar103 + dVar60 * dVar95;
        pdVar2[1] = dVar47 * dVar104 + dVar60 * dVar96;
        uVar26 = uVar26 + 2;
      } while (uVar26 < uVar23);
    }
    uVar26 = __real_ffffffffffffffff;
    dVar47 = __real_3ff0000000000000;
    if ((int)uVar23 < (int)param_5) {
      dVar60 = (double)fVar8;
      dVar82 = (double)param_3;
      lVar24 = (longlong)(int)uVar23;
      auVar49._0_12_ = ZEXT812(0);
      auVar49._12_4_ = 0;
      auVar7 = vcmpps_avx(ZEXT1632(auVar49),ZEXT1632(auVar49),0xf);
      auVar62._8_8_ = 0;
      auVar62._0_8_ = __real_3e45798ee2308c3a;
      uVar25 = CONCAT44(_UNK_150b54554,_UNK_150b54550);
      uVar27 = CONCAT44(_UNK_150b5455c,_UNK_150b54558);
      do {
        lVar1 = (ulonglong)*(ushort *)(param_4 + lVar24 * 2) * 0x60;
        pdVar2 = (double *)(param_1 + 0x10 + lVar1);
        dVar95 = *(double *)(param_1 + lVar1) * dVar60;
        dVar96 = ((double *)(param_1 + lVar1))[1] * dVar60;
        dVar103 = *pdVar2 * dVar60;
        dVar104 = pdVar2[1] * dVar60;
        pdVar2 = (double *)(param_2 + 0x10 + lVar1);
        auVar80._0_8_ = *(double *)(param_2 + lVar1) * dVar82;
        auVar80._8_8_ = ((double *)(param_2 + lVar1))[1] * dVar82;
        auVar80._16_8_ = *pdVar2 * dVar82;
        auVar80._24_8_ = pdVar2[1] * dVar82;
        auVar90._0_8_ = dVar95 * auVar80._0_8_;
        auVar90._8_8_ = dVar96 * auVar80._8_8_;
        auVar90._16_8_ = dVar103 * auVar80._16_8_;
        auVar90._24_8_ = dVar104 * auVar80._24_8_;
        auVar93 = vperm2f128_avx(auVar90,auVar90,1);
        auVar91._0_8_ = auVar90._0_8_ + auVar93._0_8_;
        auVar91._8_8_ = auVar90._8_8_ + auVar93._8_8_;
        auVar91._16_8_ = auVar90._16_8_ + auVar93._16_8_;
        auVar91._24_8_ = auVar90._24_8_ + auVar93._24_8_;
        auVar93 = vperm2f128_avx(auVar91,auVar91,1);
        auVar93 = vshufpd_avx(auVar91,auVar93,5);
        auVar92._0_8_ = auVar91._0_8_ + auVar93._0_8_;
        auVar92._8_8_ = auVar91._8_8_ + auVar93._8_8_;
        auVar92._16_8_ = auVar91._16_8_ + auVar93._16_8_;
        auVar92._24_8_ = auVar91._24_8_ + auVar93._24_8_;
        auVar81 = ZEXT1632(auVar49);
        auVar93 = vcmppd_avx(auVar81,auVar92,2);
        auVar77 = vpackssdw_avx(auVar93._0_16_,auVar93._16_16_);
        auVar76 = vpshufd_avx(auVar77,0x50);
        auVar77 = vpshufd_avx(auVar77,0xfa);
        auVar93._16_16_ = auVar77;
        auVar93._0_16_ = auVar76;
        auVar93 = vblendvps_avx(auVar81,auVar7,auVar93);
        auVar81 = vsubpd_avx(auVar81,auVar80);
        auVar101._0_4_ = ~auVar93._0_4_ & auVar81._0_4_;
        auVar101._4_4_ = ~auVar93._4_4_ & auVar81._4_4_;
        auVar101._8_4_ = ~auVar93._8_4_ & auVar81._8_4_;
        auVar101._12_4_ = ~auVar93._12_4_ & auVar81._12_4_;
        auVar101._16_4_ = ~auVar93._16_4_ & auVar81._16_4_;
        auVar101._20_4_ = ~auVar93._20_4_ & auVar81._20_4_;
        auVar101._24_4_ = ~auVar93._24_4_ & auVar81._24_4_;
        auVar101._28_4_ = ~auVar93._28_4_ & auVar81._28_4_;
        auVar81._0_8_ = (ulonglong)auVar80._0_8_ & auVar93._0_8_;
        auVar81._8_8_ = (ulonglong)auVar80._8_8_ & auVar93._8_8_;
        auVar81._16_8_ = (ulonglong)auVar80._16_8_ & auVar93._16_8_;
        auVar81._24_8_ = (ulonglong)auVar80._24_8_ & auVar93._24_8_;
        auVar81 = auVar81 | auVar101;
        dVar95 = dVar95 + auVar81._0_8_;
        dVar96 = dVar96 + auVar81._8_8_;
        dVar103 = dVar103 + auVar81._16_8_;
        dVar104 = dVar104 + auVar81._24_8_;
        auVar76._0_8_ = dVar95 * dVar95 + dVar103 * dVar103;
        auVar76._8_8_ = dVar96 * dVar96 + dVar104 * dVar104;
        auVar77 = vshufpd_avx(auVar76,auVar76,1);
        dVar94 = auVar76._0_8_ + auVar77._0_8_;
        auVar77._8_8_ = 0;
        auVar77._0_8_ = dVar94;
        auVar77 = vcmpsd_avx(auVar62,auVar77,6);
        dVar94 = dVar47 / SQRT(dVar94);
        uVar83 = ~auVar77._0_8_ & uVar26;
        pdVar2 = (double *)(param_1 + 0x20 + lVar1);
        dVar97 = *pdVar2;
        dVar102 = pdVar2[1];
        *(ulonglong *)(param_1 + lVar1) = (ulonglong)(dVar95 * dVar94) & uVar83;
        ((ulonglong *)(param_1 + lVar1))[1] = (ulonglong)(dVar96 * dVar94) & uVar83;
        puVar6 = (ulonglong *)(param_1 + 0x10 + lVar1);
        *puVar6 = (ulonglong)(dVar103 * dVar94) & uVar83 | ~uVar83 & uVar25;
        puVar6[1] = (ulonglong)(dVar104 * dVar94) & uVar83 | ~uVar83 & uVar27;
        pdVar2 = (double *)(param_2 + 0x20 + lVar1);
        dVar94 = pdVar2[1];
        pdVar3 = (double *)(param_1 + 0x30 + lVar1);
        dVar103 = *pdVar3;
        dVar104 = pdVar3[1];
        pdVar3 = (double *)(param_2 + 0x30 + lVar1);
        dVar95 = *pdVar3;
        dVar96 = pdVar3[1];
        pdVar3 = (double *)(param_1 + 0x20 + lVar1);
        *pdVar3 = dVar97 * dVar60 + *pdVar2 * dVar82;
        pdVar3[1] = dVar102 * dVar60 + dVar94 * dVar82;
        pdVar2 = (double *)(param_1 + 0x30 + lVar1);
        *pdVar2 = dVar103 * dVar60 + dVar95 * dVar82;
        pdVar2[1] = dVar104 * dVar60 + dVar96 * dVar82;
        pdVar2 = (double *)(param_1 + 0x40 + lVar1);
        dVar94 = pdVar2[1];
        pdVar3 = (double *)(param_1 + 0x50 + lVar1);
        dVar95 = *pdVar3;
        dVar96 = pdVar3[1];
        pdVar3 = (double *)(param_2 + 0x40 + lVar1);
        dVar97 = pdVar3[1];
        pdVar4 = (double *)(param_2 + 0x50 + lVar1);
        dVar102 = *pdVar4;
        dVar103 = pdVar4[1];
        pdVar4 = (double *)(param_1 + 0x40 + lVar1);
        *pdVar4 = *pdVar2 * dVar60 + *pdVar3 * dVar82;
        pdVar4[1] = dVar94 * dVar60 + dVar97 * dVar82;
        pdVar2 = (double *)(param_1 + 0x50 + lVar1);
        *pdVar2 = dVar95 * dVar60 + dVar102 * dVar82;
        pdVar2[1] = dVar96 * dVar60 + dVar103 * dVar82;
        lVar24 = lVar24 + 1;
      } while ((int)param_5 != lVar24);
    }
  }
  else {
    if (0 < (int)uVar23) {
      dVar47 = (double)fVar8;
      dVar60 = (double)param_3;
      lVar24 = param_1 + 0x20;
      lVar1 = param_1 + 0x40;
      uVar26 = 0;
      auVar49 = ZEXT816(0);
      auVar81 = vcmpps_avx(ZEXT1632(auVar49),ZEXT1632(auVar49),0xf);
      auVar72._8_8_ = __real_3ff0000000000000;
      auVar72._0_8_ = __real_3ff0000000000000;
      auVar72._16_8_ = __real_3ff0000000000000;
      auVar72._24_8_ = __real_3ff0000000000000;
      do {
        uVar27 = (ulonglong)((uint)*(ushort *)(param_4 + uVar26 * 2) * 0x60);
        pdVar2 = (double *)(param_1 + 0x10 + uVar27);
        uVar25 = (ulonglong)((uint)*(ushort *)(param_4 + 2 + uVar26 * 2) * 0x60);
        pdVar3 = (double *)(param_1 + 0x10 + uVar25);
        pdVar4 = (double *)(param_2 + 0x10 + uVar27);
        pdVar5 = (double *)(param_2 + 0x10 + uVar25);
        dVar82 = dVar47 * *(double *)(param_1 + uVar25);
        dVar94 = dVar47 * ((double *)(param_1 + uVar25))[1];
        dVar95 = dVar47 * *pdVar3;
        dVar96 = dVar47 * pdVar3[1];
        dVar97 = dVar47 * *(double *)(param_1 + uVar27);
        dVar102 = dVar47 * ((double *)(param_1 + uVar27))[1];
        dVar103 = dVar47 * *pdVar2;
        dVar104 = dVar47 * pdVar2[1];
        auVar105._0_8_ = *(double *)(param_2 + uVar25) * dVar60;
        auVar105._8_8_ = ((double *)(param_2 + uVar25))[1] * dVar60;
        auVar105._16_8_ = *pdVar5 * dVar60;
        auVar105._24_8_ = pdVar5[1] * dVar60;
        auVar109._0_8_ = *(double *)(param_2 + uVar27) * dVar60;
        auVar109._8_8_ = ((double *)(param_2 + uVar27))[1] * dVar60;
        auVar109._16_8_ = *pdVar4 * dVar60;
        auVar109._24_8_ = pdVar4[1] * dVar60;
        auVar28._0_8_ = dVar97 * auVar109._0_8_;
        auVar28._8_8_ = dVar102 * auVar109._8_8_;
        auVar28._16_8_ = dVar103 * auVar109._16_8_;
        auVar28._24_8_ = dVar104 * auVar109._24_8_;
        auVar50._0_8_ = dVar82 * auVar105._0_8_;
        auVar50._8_8_ = dVar94 * auVar105._8_8_;
        auVar50._16_8_ = dVar95 * auVar105._16_8_;
        auVar50._24_8_ = dVar96 * auVar105._24_8_;
        auVar73 = vperm2f128_avx(auVar50,auVar50,1);
        auVar41 = vperm2f128_avx(auVar28,auVar28,1);
        auVar29._0_8_ = auVar41._0_8_ + auVar28._0_8_;
        auVar29._8_8_ = auVar41._8_8_ + auVar28._8_8_;
        auVar29._16_8_ = auVar41._16_8_ + auVar28._16_8_;
        auVar29._24_8_ = auVar41._24_8_ + auVar28._24_8_;
        auVar51._0_8_ = auVar73._0_8_ + auVar50._0_8_;
        auVar51._8_8_ = auVar73._8_8_ + auVar50._8_8_;
        auVar51._16_8_ = auVar73._16_8_ + auVar50._16_8_;
        auVar51._24_8_ = auVar73._24_8_ + auVar50._24_8_;
        auVar73 = vperm2f128_avx(auVar51,auVar51,1);
        auVar73 = vshufpd_avx(auVar51,auVar73,5);
        auVar41 = vperm2f128_avx(auVar29,auVar29,1);
        auVar41 = vshufpd_avx(auVar29,auVar41,5);
        auVar30._0_8_ = auVar41._0_8_ + auVar29._0_8_;
        auVar30._8_8_ = auVar41._8_8_ + auVar29._8_8_;
        auVar30._16_8_ = auVar41._16_8_ + auVar29._16_8_;
        auVar30._24_8_ = auVar41._24_8_ + auVar29._24_8_;
        auVar52._0_8_ = auVar73._0_8_ + auVar51._0_8_;
        auVar52._8_8_ = auVar73._8_8_ + auVar51._8_8_;
        auVar52._16_8_ = auVar73._16_8_ + auVar51._16_8_;
        auVar52._24_8_ = auVar73._24_8_ + auVar51._24_8_;
        auVar39 = ZEXT1632(auVar49);
        auVar73 = vcmppd_avx(auVar39,auVar52,2);
        auVar41 = vcmppd_avx(auVar39,auVar30,2);
        auVar62 = vpackssdw_avx(auVar73._0_16_,auVar73._16_16_);
        auVar77 = vpackssdw_avx(auVar41._0_16_,auVar41._16_16_);
        auVar76 = vpshufd_avx(auVar77,0x50);
        auVar77 = vpshufd_avx(auVar77,0xfa);
        auVar31._16_16_ = auVar77;
        auVar31._0_16_ = auVar76;
        auVar77 = vpshufd_avx(auVar62,0x50);
        auVar73 = vblendvps_avx(auVar39,auVar81,auVar31);
        auVar62 = vpshufd_avx(auVar62,0xfa);
        auVar53._16_16_ = auVar62;
        auVar53._0_16_ = auVar77;
        auVar41 = vblendvps_avx(auVar39,auVar81,auVar53);
        auVar40 = ZEXT1632(auVar49);
        auVar39 = vsubpd_avx(auVar40,auVar105);
        auVar38 = vsubpd_avx(auVar40,auVar109);
        auVar33._0_4_ = ~auVar73._0_4_ & auVar38._0_4_;
        auVar33._4_4_ = ~auVar73._4_4_ & auVar38._4_4_;
        auVar33._8_4_ = ~auVar73._8_4_ & auVar38._8_4_;
        auVar33._12_4_ = ~auVar73._12_4_ & auVar38._12_4_;
        auVar33._16_4_ = ~auVar73._16_4_ & auVar38._16_4_;
        auVar33._20_4_ = ~auVar73._20_4_ & auVar38._20_4_;
        auVar33._24_4_ = ~auVar73._24_4_ & auVar38._24_4_;
        auVar33._28_4_ = ~auVar73._28_4_ & auVar38._28_4_;
        auVar32._0_8_ = (ulonglong)auVar109._0_8_ & auVar73._0_8_;
        auVar32._8_8_ = (ulonglong)auVar109._8_8_ & auVar73._8_8_;
        auVar32._16_8_ = (ulonglong)auVar109._16_8_ & auVar73._16_8_;
        auVar32._24_8_ = (ulonglong)auVar109._24_8_ & auVar73._24_8_;
        auVar33 = auVar33 | auVar32;
        auVar55._0_4_ = ~auVar41._0_4_ & auVar39._0_4_;
        auVar55._4_4_ = ~auVar41._4_4_ & auVar39._4_4_;
        auVar55._8_4_ = ~auVar41._8_4_ & auVar39._8_4_;
        auVar55._12_4_ = ~auVar41._12_4_ & auVar39._12_4_;
        auVar55._16_4_ = ~auVar41._16_4_ & auVar39._16_4_;
        auVar55._20_4_ = ~auVar41._20_4_ & auVar39._20_4_;
        auVar55._24_4_ = ~auVar41._24_4_ & auVar39._24_4_;
        auVar55._28_4_ = ~auVar41._28_4_ & auVar39._28_4_;
        auVar54._0_8_ = (ulonglong)auVar105._0_8_ & auVar41._0_8_;
        auVar54._8_8_ = (ulonglong)auVar105._8_8_ & auVar41._8_8_;
        auVar54._16_8_ = (ulonglong)auVar105._16_8_ & auVar41._16_8_;
        auVar54._24_8_ = (ulonglong)auVar105._24_8_ & auVar41._24_8_;
        auVar55 = auVar55 | auVar54;
        dVar82 = dVar82 + auVar55._0_8_;
        dVar94 = dVar94 + auVar55._8_8_;
        dVar95 = dVar95 + auVar55._16_8_;
        dVar96 = dVar96 + auVar55._24_8_;
        dVar97 = dVar97 + auVar33._0_8_;
        dVar102 = dVar102 + auVar33._8_8_;
        dVar103 = dVar103 + auVar33._16_8_;
        dVar104 = dVar104 + auVar33._24_8_;
        auVar34._0_8_ = dVar97 * dVar97;
        auVar34._8_8_ = dVar102 * dVar102;
        auVar34._16_8_ = dVar103 * dVar103;
        auVar34._24_8_ = dVar104 * dVar104;
        auVar56._0_8_ = dVar82 * dVar82;
        auVar56._8_8_ = dVar94 * dVar94;
        auVar56._16_8_ = dVar95 * dVar95;
        auVar56._24_8_ = dVar96 * dVar96;
        auVar73 = vperm2f128_avx(auVar56,auVar56,1);
        auVar41 = vperm2f128_avx(auVar34,auVar34,1);
        auVar35._0_8_ = auVar41._0_8_ + auVar34._0_8_;
        auVar35._8_8_ = auVar41._8_8_ + auVar34._8_8_;
        auVar35._16_8_ = auVar41._16_8_ + auVar34._16_8_;
        auVar35._24_8_ = auVar41._24_8_ + auVar34._24_8_;
        auVar57._0_8_ = auVar73._0_8_ + auVar56._0_8_;
        auVar57._8_8_ = auVar73._8_8_ + auVar56._8_8_;
        auVar57._16_8_ = auVar73._16_8_ + auVar56._16_8_;
        auVar57._24_8_ = auVar73._24_8_ + auVar56._24_8_;
        auVar73 = vperm2f128_avx(auVar57,auVar57,1);
        auVar73 = vshufpd_avx(auVar57,auVar73,5);
        auVar41 = vperm2f128_avx(auVar35,auVar35,1);
        auVar41 = vshufpd_avx(auVar35,auVar41,5);
        auVar36._0_8_ = auVar41._0_8_ + auVar35._0_8_;
        auVar36._8_8_ = auVar41._8_8_ + auVar35._8_8_;
        auVar36._16_8_ = auVar41._16_8_ + auVar35._16_8_;
        auVar36._24_8_ = auVar41._24_8_ + auVar35._24_8_;
        auVar58._0_8_ = auVar73._0_8_ + auVar57._0_8_;
        auVar58._8_8_ = auVar73._8_8_ + auVar57._8_8_;
        auVar58._16_8_ = auVar73._16_8_ + auVar57._16_8_;
        auVar58._24_8_ = auVar73._24_8_ + auVar57._24_8_;
        auVar73 = vcmppd_avx(auVar93,auVar58,2);
        auVar62 = vpackssdw_avx(auVar73._0_16_,auVar73._16_16_);
        auVar73 = vcmppd_avx(auVar7,auVar36,2);
        auVar77 = vpackssdw_avx(auVar73._0_16_,auVar73._16_16_);
        auVar73 = vsqrtpd_avx(auVar36);
        auVar76 = vpshufd_avx(auVar77,0x50);
        auVar41 = vsqrtpd_avx(auVar58);
        auVar77 = vpshufd_avx(auVar77,0xfa);
        auVar48 = vpshufd_avx(auVar62,0x50);
        auVar39 = vdivpd_avx(auVar72,auVar41);
        auVar38 = vdivpd_avx(auVar72,auVar73);
        auVar110._16_16_ = auVar77;
        auVar110._0_16_ = auVar76;
        auVar62 = vpshufd_avx(auVar62,0xfa);
        auVar106._16_16_ = auVar62;
        auVar106._0_16_ = auVar48;
        auVar73 = vblendvps_avx(auVar40,auVar81,auVar110);
        auVar41 = vblendvps_avx(auVar40,auVar81,auVar106);
        auVar98._0_4_ = ~auVar41._0_4_ & uVar15;
        auVar98._4_4_ = ~auVar41._4_4_ & uVar16;
        auVar98._8_4_ = ~auVar41._8_4_ & uVar17;
        auVar98._12_4_ = ~auVar41._12_4_ & uVar18;
        auVar98._16_4_ = ~auVar41._16_4_ & uVar19;
        auVar98._20_4_ = ~auVar41._20_4_ & uVar20;
        auVar98._24_4_ = ~auVar41._24_4_ & uVar21;
        auVar98._28_4_ = ~auVar41._28_4_ & uVar22;
        auVar59._0_8_ = auVar41._0_8_ & (ulonglong)(dVar82 * auVar39._0_8_);
        auVar59._8_8_ = auVar41._8_8_ & (ulonglong)(dVar94 * auVar39._8_8_);
        auVar59._16_8_ = auVar41._16_8_ & (ulonglong)(dVar95 * auVar39._16_8_);
        auVar59._24_8_ = auVar41._24_8_ & (ulonglong)(dVar96 * auVar39._24_8_);
        auVar84._0_4_ = ~auVar73._0_4_ & uVar15;
        auVar84._4_4_ = ~auVar73._4_4_ & uVar16;
        auVar84._8_4_ = ~auVar73._8_4_ & uVar17;
        auVar84._12_4_ = ~auVar73._12_4_ & uVar18;
        auVar84._16_4_ = ~auVar73._16_4_ & uVar19;
        auVar84._20_4_ = ~auVar73._20_4_ & uVar20;
        auVar84._24_4_ = ~auVar73._24_4_ & uVar21;
        auVar84._28_4_ = ~auVar73._28_4_ & uVar22;
        auVar37._0_8_ = auVar73._0_8_ & (ulonglong)(dVar97 * auVar38._0_8_);
        auVar37._8_8_ = auVar73._8_8_ & (ulonglong)(dVar102 * auVar38._8_8_);
        auVar37._16_8_ = auVar73._16_8_ & (ulonglong)(dVar103 * auVar38._16_8_);
        auVar37._24_8_ = auVar73._24_8_ & (ulonglong)(dVar104 * auVar38._24_8_);
        *(undefined1 (*) [16])(param_1 + uVar27) = SUB3216(auVar84 | auVar37,0);
        *(undefined1 (*) [16])(param_1 + 0x10 + uVar27) = SUB3216(auVar84 | auVar37,0x10);
        *(undefined1 (*) [16])(param_1 + uVar25) = SUB3216(auVar98 | auVar59,0);
        *(undefined1 (*) [16])(param_1 + 0x10 + uVar25) = SUB3216(auVar98 | auVar59,0x10);
        pdVar2 = (double *)(param_2 + 0x20 + uVar25);
        dVar82 = *pdVar2;
        dVar94 = pdVar2[1];
        dVar97 = *(double *)(lVar24 + uVar25);
        dVar102 = ((double *)(lVar24 + uVar25))[1];
        pdVar2 = (double *)(param_2 + 0x30 + uVar25);
        dVar95 = *pdVar2;
        dVar96 = pdVar2[1];
        pdVar2 = (double *)(param_1 + 0x30 + uVar25);
        dVar103 = *pdVar2;
        dVar104 = pdVar2[1];
        dVar9 = ((double *)(lVar24 + uVar27))[1];
        pdVar2 = (double *)(param_2 + 0x20 + uVar27);
        dVar12 = pdVar2[1];
        pdVar3 = (double *)(param_1 + 0x30 + uVar27);
        dVar10 = *pdVar3;
        dVar11 = pdVar3[1];
        pdVar3 = (double *)(param_2 + 0x30 + uVar27);
        dVar13 = *pdVar3;
        dVar14 = pdVar3[1];
        *(double *)(lVar24 + uVar27) = *(double *)(lVar24 + uVar27) * dVar47 + *pdVar2 * dVar60;
        ((double *)(lVar24 + uVar27))[1] = dVar9 * dVar47 + dVar12 * dVar60;
        pdVar2 = (double *)(param_1 + 0x30 + uVar27);
        *pdVar2 = dVar10 * dVar47 + dVar13 * dVar60;
        pdVar2[1] = dVar11 * dVar47 + dVar14 * dVar60;
        *(double *)(lVar24 + uVar25) = dVar47 * dVar97 + dVar60 * dVar82;
        ((double *)(lVar24 + uVar25))[1] = dVar47 * dVar102 + dVar60 * dVar94;
        pdVar2 = (double *)(param_1 + 0x30 + uVar25);
        *pdVar2 = dVar47 * dVar103 + dVar60 * dVar95;
        pdVar2[1] = dVar47 * dVar104 + dVar60 * dVar96;
        pdVar2 = (double *)(param_2 + 0x40 + uVar25);
        dVar82 = *pdVar2;
        dVar94 = pdVar2[1];
        pdVar2 = (double *)(param_2 + 0x50 + uVar25);
        dVar95 = *pdVar2;
        dVar96 = pdVar2[1];
        dVar97 = *(double *)(lVar1 + uVar25);
        dVar102 = ((double *)(lVar1 + uVar25))[1];
        dVar9 = ((double *)(lVar1 + uVar27))[1];
        pdVar2 = (double *)(param_2 + 0x40 + uVar27);
        dVar12 = pdVar2[1];
        pdVar3 = (double *)(param_1 + 0x50 + uVar25);
        dVar103 = *pdVar3;
        dVar104 = pdVar3[1];
        pdVar3 = (double *)(param_2 + 0x50 + uVar27);
        dVar13 = *pdVar3;
        dVar14 = pdVar3[1];
        pdVar3 = (double *)(param_1 + 0x50 + uVar27);
        dVar10 = *pdVar3;
        dVar11 = pdVar3[1];
        *(double *)(lVar1 + uVar27) = *(double *)(lVar1 + uVar27) * dVar47 + *pdVar2 * dVar60;
        ((double *)(lVar1 + uVar27))[1] = dVar9 * dVar47 + dVar12 * dVar60;
        pdVar2 = (double *)(param_1 + 0x50 + uVar27);
        *pdVar2 = dVar10 * dVar47 + dVar13 * dVar60;
        pdVar2[1] = dVar11 * dVar47 + dVar14 * dVar60;
        *(double *)(lVar1 + uVar25) = dVar47 * dVar97 + dVar60 * dVar82;
        ((double *)(lVar1 + uVar25))[1] = dVar47 * dVar102 + dVar60 * dVar94;
        pdVar2 = (double *)(param_1 + 0x50 + uVar25);
        *pdVar2 = dVar47 * dVar103 + dVar60 * dVar95;
        pdVar2[1] = dVar47 * dVar104 + dVar60 * dVar96;
        uVar26 = uVar26 + 2;
      } while (uVar26 < uVar23);
    }
    uVar26 = __real_ffffffffffffffff;
    dVar47 = __real_3ff0000000000000;
    if ((int)uVar23 < (int)param_5) {
      dVar60 = (double)fVar8;
      dVar82 = (double)param_3;
      lVar24 = (longlong)(int)uVar23;
      auVar48._0_12_ = ZEXT812(0);
      auVar48._12_4_ = 0;
      auVar7 = vcmpps_avx(ZEXT1632(auVar48),ZEXT1632(auVar48),0xf);
      auVar61._8_8_ = 0;
      auVar61._0_8_ = __real_3e45798ee2308c3a;
      uVar25 = CONCAT44(_UNK_150b54554,_UNK_150b54550);
      uVar27 = CONCAT44(_UNK_150b5455c,_UNK_150b54558);
      do {
        lVar1 = (ulonglong)*(ushort *)(param_4 + lVar24 * 2) * 0x60;
        pdVar2 = (double *)(param_1 + 0x10 + lVar1);
        dVar95 = *(double *)(param_1 + lVar1) * dVar60;
        dVar96 = ((double *)(param_1 + lVar1))[1] * dVar60;
        dVar103 = *pdVar2 * dVar60;
        dVar104 = pdVar2[1] * dVar60;
        pdVar2 = (double *)(param_2 + 0x10 + lVar1);
        auVar78._0_8_ = *(double *)(param_2 + lVar1) * dVar82;
        auVar78._8_8_ = ((double *)(param_2 + lVar1))[1] * dVar82;
        auVar78._16_8_ = *pdVar2 * dVar82;
        auVar78._24_8_ = pdVar2[1] * dVar82;
        auVar85._0_8_ = dVar95 * auVar78._0_8_;
        auVar85._8_8_ = dVar96 * auVar78._8_8_;
        auVar85._16_8_ = dVar103 * auVar78._16_8_;
        auVar85._24_8_ = dVar104 * auVar78._24_8_;
        auVar93 = vperm2f128_avx(auVar85,auVar85,1);
        auVar86._0_8_ = auVar85._0_8_ + auVar93._0_8_;
        auVar86._8_8_ = auVar85._8_8_ + auVar93._8_8_;
        auVar86._16_8_ = auVar85._16_8_ + auVar93._16_8_;
        auVar86._24_8_ = auVar85._24_8_ + auVar93._24_8_;
        auVar93 = vperm2f128_avx(auVar86,auVar86,1);
        auVar93 = vshufpd_avx(auVar86,auVar93,5);
        auVar87._0_8_ = auVar86._0_8_ + auVar93._0_8_;
        auVar87._8_8_ = auVar86._8_8_ + auVar93._8_8_;
        auVar87._16_8_ = auVar86._16_8_ + auVar93._16_8_;
        auVar87._24_8_ = auVar86._24_8_ + auVar93._24_8_;
        auVar81 = ZEXT1632(auVar48);
        auVar93 = vcmppd_avx(auVar81,auVar87,2);
        auVar49 = vpackssdw_avx(auVar93._0_16_,auVar93._16_16_);
        auVar62 = vpshufd_avx(auVar49,0x50);
        auVar49 = vpshufd_avx(auVar49,0xfa);
        auVar88._16_16_ = auVar49;
        auVar88._0_16_ = auVar62;
        auVar93 = vblendvps_avx(auVar81,auVar7,auVar88);
        auVar81 = vsubpd_avx(auVar81,auVar78);
        auVar99._0_4_ = ~auVar93._0_4_ & auVar81._0_4_;
        auVar99._4_4_ = ~auVar93._4_4_ & auVar81._4_4_;
        auVar99._8_4_ = ~auVar93._8_4_ & auVar81._8_4_;
        auVar99._12_4_ = ~auVar93._12_4_ & auVar81._12_4_;
        auVar99._16_4_ = ~auVar93._16_4_ & auVar81._16_4_;
        auVar99._20_4_ = ~auVar93._20_4_ & auVar81._20_4_;
        auVar99._24_4_ = ~auVar93._24_4_ & auVar81._24_4_;
        auVar99._28_4_ = ~auVar93._28_4_ & auVar81._28_4_;
        auVar79._0_8_ = (ulonglong)auVar78._0_8_ & auVar93._0_8_;
        auVar79._8_8_ = (ulonglong)auVar78._8_8_ & auVar93._8_8_;
        auVar79._16_8_ = (ulonglong)auVar78._16_8_ & auVar93._16_8_;
        auVar79._24_8_ = (ulonglong)auVar78._24_8_ & auVar93._24_8_;
        auVar79 = auVar79 | auVar99;
        dVar95 = dVar95 + auVar79._0_8_;
        dVar96 = dVar96 + auVar79._8_8_;
        dVar103 = dVar103 + auVar79._16_8_;
        dVar104 = dVar104 + auVar79._24_8_;
        auVar74._0_8_ = dVar95 * dVar95 + dVar103 * dVar103;
        auVar74._8_8_ = dVar96 * dVar96 + dVar104 * dVar104;
        auVar49 = vshufpd_avx(auVar74,auVar74,1);
        dVar94 = auVar74._0_8_ + auVar49._0_8_;
        auVar75._8_8_ = 0;
        auVar75._0_8_ = dVar94;
        auVar49 = vcmpsd_avx(auVar61,auVar75,6);
        dVar94 = dVar47 / SQRT(dVar94);
        uVar83 = ~auVar49._0_8_ & uVar26;
        pdVar2 = (double *)(param_1 + 0x20 + lVar1);
        dVar97 = *pdVar2;
        dVar102 = pdVar2[1];
        *(ulonglong *)(param_1 + lVar1) = (ulonglong)(dVar95 * dVar94) & uVar83;
        ((ulonglong *)(param_1 + lVar1))[1] = (ulonglong)(dVar96 * dVar94) & uVar83;
        puVar6 = (ulonglong *)(param_1 + 0x10 + lVar1);
        *puVar6 = (ulonglong)(dVar103 * dVar94) & uVar83 | ~uVar83 & uVar25;
        puVar6[1] = (ulonglong)(dVar104 * dVar94) & uVar83 | ~uVar83 & uVar27;
        pdVar2 = (double *)(param_2 + 0x20 + lVar1);
        dVar94 = pdVar2[1];
        pdVar3 = (double *)(param_1 + 0x30 + lVar1);
        dVar103 = *pdVar3;
        dVar104 = pdVar3[1];
        pdVar3 = (double *)(param_2 + 0x30 + lVar1);
        dVar95 = *pdVar3;
        dVar96 = pdVar3[1];
        pdVar3 = (double *)(param_1 + 0x20 + lVar1);
        *pdVar3 = dVar97 * dVar60 + *pdVar2 * dVar82;
        pdVar3[1] = dVar102 * dVar60 + dVar94 * dVar82;
        pdVar2 = (double *)(param_1 + 0x30 + lVar1);
        *pdVar2 = dVar103 * dVar60 + dVar95 * dVar82;
        pdVar2[1] = dVar104 * dVar60 + dVar96 * dVar82;
        pdVar2 = (double *)(param_1 + 0x40 + lVar1);
        dVar94 = pdVar2[1];
        pdVar3 = (double *)(param_1 + 0x50 + lVar1);
        dVar95 = *pdVar3;
        dVar96 = pdVar3[1];
        pdVar3 = (double *)(param_2 + 0x40 + lVar1);
        dVar97 = pdVar3[1];
        pdVar4 = (double *)(param_2 + 0x50 + lVar1);
        dVar102 = *pdVar4;
        dVar103 = pdVar4[1];
        pdVar4 = (double *)(param_1 + 0x40 + lVar1);
        *pdVar4 = *pdVar2 * dVar60 + *pdVar3 * dVar82;
        pdVar4[1] = dVar94 * dVar60 + dVar97 * dVar82;
        pdVar2 = (double *)(param_1 + 0x50 + lVar1);
        *pdVar2 = dVar95 * dVar60 + dVar102 * dVar82;
        pdVar2[1] = dVar96 * dVar60 + dVar103 * dVar82;
        lVar24 = lVar24 + 1;
      } while ((int)param_5 != lVar24);
    }
  }
  return;
}

// BlendTransformOverwrite_avx @ 140abab40

void BlendTransformOverwrite_avx(longlong param_1,longlong param_2,float param_3,uint param_4)

{
  double *pdVar1;
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
  longlong lVar13;
  double dVar14;
  
  if (0 < (int)param_4) {
    dVar14 = (double)param_3;
    lVar13 = 0;
    do {
      dVar2 = ((double *)(param_1 + lVar13))[1];
      pdVar1 = (double *)(param_1 + 0x20 + lVar13);
      dVar5 = *pdVar1;
      dVar6 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x10 + lVar13);
      dVar3 = *pdVar1;
      dVar4 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x40 + lVar13);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x30 + lVar13);
      dVar7 = *pdVar1;
      dVar8 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x50 + lVar13);
      dVar11 = *pdVar1;
      dVar12 = pdVar1[1];
      *(double *)(param_2 + lVar13) = dVar14 * *(double *)(param_1 + lVar13);
      ((double *)(param_2 + lVar13))[1] = dVar14 * dVar2;
      pdVar1 = (double *)(param_2 + 0x10 + lVar13);
      *pdVar1 = dVar14 * dVar3;
      pdVar1[1] = dVar14 * dVar4;
      pdVar1 = (double *)(param_2 + 0x20 + lVar13);
      *pdVar1 = dVar14 * dVar5;
      pdVar1[1] = dVar14 * dVar6;
      pdVar1 = (double *)(param_2 + 0x30 + lVar13);
      *pdVar1 = dVar14 * dVar7;
      pdVar1[1] = dVar14 * dVar8;
      pdVar1 = (double *)(param_2 + 0x40 + lVar13);
      *pdVar1 = dVar14 * dVar9;
      pdVar1[1] = dVar14 * dVar10;
      pdVar1 = (double *)(param_2 + 0x50 + lVar13);
      *pdVar1 = dVar14 * dVar11;
      pdVar1[1] = dVar14 * dVar12;
      lVar13 = lVar13 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar13);
  }
  return;
}

// BlendTransformAccumulate_avx @ 140ababf0

void BlendTransformAccumulate_avx(longlong param_1,longlong param_2,float param_3,uint param_4)

{
  double *pdVar1;
  undefined1 auVar2 [32];
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  
  if (0 < (int)param_4) {
    dVar26 = (double)param_3;
    lVar25 = 0;
    auVar27._0_12_ = ZEXT812(0);
    auVar27._12_4_ = 0;
    auVar2 = vcmpps_avx(ZEXT1632(auVar27),ZEXT1632(auVar27),0xf);
    do {
      pdVar1 = (double *)(param_1 + 0x20 + lVar25);
      dVar9 = *pdVar1;
      dVar10 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x40 + lVar25);
      dVar5 = *pdVar1;
      dVar6 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x10 + lVar25);
      auVar29._0_8_ = dVar26 * *(double *)(param_1 + lVar25);
      auVar29._8_8_ = dVar26 * ((double *)(param_1 + lVar25))[1];
      auVar29._16_8_ = dVar26 * *pdVar1;
      auVar29._24_8_ = dVar26 * pdVar1[1];
      dVar13 = *(double *)(param_2 + lVar25);
      dVar14 = ((double *)(param_2 + lVar25))[1];
      pdVar1 = (double *)(param_2 + 0x20 + lVar25);
      dVar17 = *pdVar1;
      dVar18 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x10 + lVar25);
      dVar15 = *pdVar1;
      dVar16 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x40 + lVar25);
      dVar21 = *pdVar1;
      dVar22 = pdVar1[1];
      auVar31._0_8_ = auVar29._0_8_ * dVar13;
      auVar31._8_8_ = auVar29._8_8_ * dVar14;
      auVar31._16_8_ = auVar29._16_8_ * dVar15;
      auVar31._24_8_ = auVar29._24_8_ * dVar16;
      auVar34 = vperm2f128_avx(auVar31,auVar31,1);
      auVar32._0_8_ = auVar31._0_8_ + auVar34._0_8_;
      auVar32._8_8_ = auVar31._8_8_ + auVar34._8_8_;
      auVar32._16_8_ = auVar31._16_8_ + auVar34._16_8_;
      auVar32._24_8_ = auVar31._24_8_ + auVar34._24_8_;
      auVar34 = vperm2f128_avx(auVar32,auVar32,1);
      auVar34 = vshufpd_avx(auVar32,auVar34,5);
      auVar33._0_8_ = auVar32._0_8_ + auVar34._0_8_;
      auVar33._8_8_ = auVar32._8_8_ + auVar34._8_8_;
      auVar33._16_8_ = auVar32._16_8_ + auVar34._16_8_;
      auVar33._24_8_ = auVar32._24_8_ + auVar34._24_8_;
      auVar28 = ZEXT1632(auVar27);
      auVar34 = vcmppd_avx(auVar28,auVar33,2);
      auVar3 = vpackssdw_avx(auVar34._0_16_,auVar34._16_16_);
      auVar4 = vpshufd_avx(auVar3,0x50);
      auVar3 = vpshufd_avx(auVar3,0xfa);
      auVar34._16_16_ = auVar3;
      auVar34._0_16_ = auVar4;
      auVar34 = vblendvps_avx(auVar28,auVar2,auVar34);
      auVar28 = vsubpd_avx(auVar28,auVar29);
      auVar30._0_4_ = ~auVar34._0_4_ & auVar28._0_4_;
      auVar30._4_4_ = ~auVar34._4_4_ & auVar28._4_4_;
      auVar30._8_4_ = ~auVar34._8_4_ & auVar28._8_4_;
      auVar30._12_4_ = ~auVar34._12_4_ & auVar28._12_4_;
      auVar30._16_4_ = ~auVar34._16_4_ & auVar28._16_4_;
      auVar30._20_4_ = ~auVar34._20_4_ & auVar28._20_4_;
      auVar30._24_4_ = ~auVar34._24_4_ & auVar28._24_4_;
      auVar30._28_4_ = ~auVar34._28_4_ & auVar28._28_4_;
      auVar28._0_8_ = auVar34._0_8_ & (ulonglong)auVar29._0_8_;
      auVar28._8_8_ = auVar34._8_8_ & (ulonglong)auVar29._8_8_;
      auVar28._16_8_ = auVar34._16_8_ & (ulonglong)auVar29._16_8_;
      auVar28._24_8_ = auVar34._24_8_ & (ulonglong)auVar29._24_8_;
      auVar30 = auVar30 | auVar28;
      pdVar1 = (double *)(param_1 + 0x30 + lVar25);
      dVar11 = *pdVar1;
      dVar12 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x30 + lVar25);
      dVar19 = *pdVar1;
      dVar20 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x50 + lVar25);
      dVar7 = *pdVar1;
      dVar8 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x50 + lVar25);
      dVar23 = *pdVar1;
      dVar24 = pdVar1[1];
      *(double *)(param_2 + lVar25) = dVar13 + auVar30._0_8_;
      ((double *)(param_2 + lVar25))[1] = dVar14 + auVar30._8_8_;
      pdVar1 = (double *)(param_2 + 0x10 + lVar25);
      *pdVar1 = dVar15 + auVar30._16_8_;
      pdVar1[1] = dVar16 + auVar30._24_8_;
      pdVar1 = (double *)(param_2 + 0x20 + lVar25);
      *pdVar1 = dVar26 * dVar9 + dVar17;
      pdVar1[1] = dVar26 * dVar10 + dVar18;
      pdVar1 = (double *)(param_2 + 0x30 + lVar25);
      *pdVar1 = dVar26 * dVar11 + dVar19;
      pdVar1[1] = dVar26 * dVar12 + dVar20;
      pdVar1 = (double *)(param_2 + 0x40 + lVar25);
      *pdVar1 = dVar26 * dVar5 + dVar21;
      pdVar1[1] = dVar26 * dVar6 + dVar22;
      pdVar1 = (double *)(param_2 + 0x50 + lVar25);
      *pdVar1 = dVar26 * dVar7 + dVar23;
      pdVar1[1] = dVar26 * dVar8 + dVar24;
      lVar25 = lVar25 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar25);
  }
  return;
}

// ConvertPoseToAdditive_avx @ 140abad70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToAdditive_avx(longlong param_1,longlong param_2,uint param_3)

{
  double *pdVar1;
  ulonglong *puVar2;
  double *pdVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auVar6 [16];
  double dVar18;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar19;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  double dVar20;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  double dVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulonglong uVar32;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  ulonglong uVar31;
  ulonglong uVar33;
  undefined1 auVar30 [32];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 in_ZMM3 [64];
  undefined1 in_ZMM4 [64];
  undefined1 auVar42 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar55;
  double dVar56;
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  double dVar57;
  undefined1 auVar54 [32];
  undefined1 auVar59 [16];
  double dVar58;
  double dVar68;
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  double dVar67;
  double dVar69;
  undefined1 auVar66 [32];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar9 [24];
  undefined1 auVar15 [32];
  undefined1 auVar25 [32];
  undefined1 auVar36 [32];
  undefined1 auVar41 [32];
  undefined1 auVar43 [32];
  undefined1 auVar63 [32];
  
  if (0 < (int)param_3) {
    lVar4 = 0;
    auVar77._8_8_ = __real_4000000000000000;
    auVar77._0_8_ = __real_4000000000000000;
    auVar77._16_8_ = __real_4000000000000000;
    auVar77._24_8_ = __real_4000000000000000;
    do {
      auVar14 = in_ZMM4._0_32_;
      auVar13 = in_ZMM3._0_32_;
      auVar78._8_8_ = 0;
      auVar78._0_8_ = *(ulonglong *)(param_2 + 0x40 + lVar4);
      auVar79._8_8_ = 0;
      auVar79._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar4);
      auVar80._8_8_ = 0;
      auVar80._0_8_ = *(ulonglong *)(param_2 + 0x50 + lVar4);
      auVar81._8_8_ = 0;
      auVar81._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar4);
      auVar35 = *(undefined1 (*) [16])(param_2 + 0x40 + lVar4);
      pdVar3 = (double *)(param_2 + 0x10 + lVar4);
      auVar16._0_8_ =
           *(double *)(param_2 + lVar4) *
           ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar16._8_8_ = ((double *)(param_2 + lVar4))[1] * _UNK_150b543c8;
      auVar16._16_8_ = *pdVar3 * _UNK_150b543d0;
      auVar16._24_8_ = pdVar3[1] * _UNK_150b543d8;
      dVar18 = *(double *)(param_1 + 0x18 + lVar4);
      dVar19 = *(double *)(param_1 + lVar4);
      auVar39 = vperm2f128_avx(auVar16,auVar16,1);
      auVar38 = vshufpd_avx(auVar39,auVar39,5);
      dVar20 = *(double *)(param_1 + 8 + lVar4);
      dVar21 = *(double *)(param_1 + 0x10 + lVar4);
      auVar30 = vshufpd_avx(auVar16,auVar16,5);
      auVar6 = vsubpd_avx(*(undefined1 (*) [16])(param_1 + 0x20 + lVar4),
                          *(undefined1 (*) [16])(param_2 + 0x20 + lVar4));
      auVar42 = vsubpd_avx(*(undefined1 (*) [16])(param_1 + 0x30 + lVar4),
                           *(undefined1 (*) [16])(param_2 + 0x30 + lVar4));
      auVar34 = *(undefined1 (*) [16])(param_2 + 0x50 + lVar4);
      auVar17._16_16_ = auVar34;
      auVar17._0_16_ = auVar35;
      dVar47 = auVar30._0_8_ * dVar21 *
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
               auVar39._0_8_ * dVar20 *
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
               auVar16._0_8_ * dVar18 +
               auVar38._0_8_ * dVar19 *
               ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
      dVar48 = auVar30._8_8_ * dVar21 * _UNK_150b54428 +
               auVar39._8_8_ * dVar20 * _UNK_150b54408 +
               auVar16._8_8_ * dVar18 + auVar38._8_8_ * dVar19 * _UNK_150b543e8;
      dVar49 = auVar30._16_8_ * dVar21 * _UNK_150b54430 +
               auVar39._16_8_ * dVar20 * _UNK_150b54410 +
               auVar16._16_8_ * dVar18 + auVar38._16_8_ * dVar19 * _UNK_150b543f0;
      dVar50 = auVar30._24_8_ * dVar21 * _UNK_150b54438 +
               auVar39._24_8_ * dVar20 * _UNK_150b54418 +
               auVar16._24_8_ * dVar18 + auVar38._24_8_ * dVar19 * _UNK_150b543f8;
      *(undefined1 (*) [16])(param_1 + 0x20 + lVar4) = auVar6;
      *(undefined1 (*) [16])(param_1 + 0x30 + lVar4) = auVar42;
      auVar38 = vcmppd_avx(auVar17,
                           ___ymm_46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c,2
                          );
      auVar6 = vpackssdw_avx(auVar38._0_16_,auVar38._16_16_);
      auVar38._8_8_ = __real_3914c4e977ba1f5c;
      auVar38._0_8_ = __real_3914c4e977ba1f5c;
      auVar38._16_8_ = __real_3914c4e977ba1f5c;
      auVar38._24_8_ = __real_3914c4e977ba1f5c;
      auVar38 = vcmppd_avx(auVar38,auVar17,2);
      auVar42 = vpackssdw_avx(auVar38._0_16_,auVar38._16_16_);
      auVar7 = vpand_avx(auVar6,auVar42);
      iVar5 = vmovmskps_avx(ZEXT1632(auVar7));
      dVar18 = auVar35._0_8_;
      dVar19 = auVar35._8_8_;
      dVar20 = auVar34._0_8_;
      dVar21 = auVar34._8_8_;
      if (iVar5 == 0) {
        auVar30 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
LAB_140abadf4:
        auVar38 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                             SUB6432(ZEXT1664((undefined1  [16])0x0),0),0xf);
        auVar23._0_4_ = auVar30._0_4_ ^ auVar38._0_4_;
        auVar23._4_4_ = auVar30._4_4_ ^ auVar38._4_4_;
        auVar23._8_4_ = auVar30._8_4_ ^ auVar38._8_4_;
        auVar23._12_4_ = auVar30._12_4_ ^ auVar38._12_4_;
        auVar25._16_4_ = auVar30._16_4_ ^ auVar38._16_4_;
        auVar25._0_16_ = auVar23;
        auVar25._20_4_ = auVar30._20_4_ ^ auVar38._20_4_;
        auVar25._24_4_ = auVar30._24_4_ ^ auVar38._24_4_;
        auVar25._28_4_ = auVar30._28_4_ ^ auVar38._28_4_;
        auVar34._0_8_ = (ulonglong)dVar18 & __real_7fe0000000000000;
        auVar34._8_8_ = (ulonglong)dVar19 & __real_7fe0000000000000;
        auVar36._16_8_ = (ulonglong)dVar20 & __real_7fe0000000000000;
        auVar36._0_16_ = auVar34;
        auVar36._24_8_ = (ulonglong)dVar21 & __real_7fe0000000000000;
        auVar42._0_8_ = (ulonglong)dVar18 & __real_7fe0000000000000;
        auVar42._8_8_ = (ulonglong)dVar19 & __real_7fe0000000000000;
        auVar43._16_8_ = (ulonglong)dVar20 & __real_7fe0000000000000;
        auVar43._0_16_ = auVar42;
        auVar43._24_8_ = (ulonglong)dVar21 & __real_7fe0000000000000;
        auVar70._8_8_ = __real_7fcfffffffffffff;
        auVar70._0_8_ = __real_7fcfffffffffffff;
        auVar6 = vpsubq_avx(auVar70,auVar43._16_16_);
        auVar42 = vpsubq_avx(auVar70,auVar42);
        auVar7 = vpsubq_avx(auVar70,auVar36._16_16_);
        auVar70 = vpsubq_avx(auVar70,auVar34);
        auVar60._0_8_ = dVar18 * auVar42._0_8_;
        auVar60._8_8_ = dVar19 * auVar42._8_8_;
        auVar60._16_8_ = dVar20 * auVar6._0_8_;
        auVar60._24_8_ = dVar21 * auVar6._8_8_;
        auVar35 = vcvtpd2ps_avx(auVar60);
        auVar74._0_8_ = dVar18 * auVar70._0_8_;
        auVar74._8_8_ = dVar19 * auVar70._8_8_;
        auVar74._16_8_ = dVar20 * auVar7._0_8_;
        auVar74._24_8_ = dVar21 * auVar7._8_8_;
        auVar34 = vcvtpd2ps_avx(auVar74);
        auVar61._16_16_ = auVar34;
        auVar61._0_16_ = auVar35;
        auVar38 = vrcpps_avx(auVar61);
        auVar62._0_4_ = auVar38._0_4_ * auVar35._0_4_;
        auVar62._4_4_ = auVar38._4_4_ * auVar35._4_4_;
        auVar62._8_4_ = auVar38._8_4_ * auVar35._8_4_;
        auVar62._12_4_ = auVar38._12_4_ * auVar35._12_4_;
        auVar62._16_4_ = auVar38._16_4_ * auVar34._0_4_;
        auVar62._20_4_ = auVar38._20_4_ * auVar34._4_4_;
        auVar62._24_4_ = auVar38._24_4_ * auVar34._8_4_;
        auVar62._28_4_ = auVar38._28_4_ * auVar34._12_4_;
        auVar71._4_4_ = __real_40000000;
        auVar71._0_4_ = __real_40000000;
        auVar71._8_4_ = __real_40000000;
        auVar71._12_4_ = __real_40000000;
        auVar71._16_4_ = __real_40000000;
        auVar71._20_4_ = __real_40000000;
        auVar71._24_4_ = __real_40000000;
        auVar71._28_4_ = __real_40000000;
        auVar30 = vsubps_avx(auVar71,auVar62);
        auVar59._0_4_ = auVar38._0_4_ * auVar30._0_4_;
        auVar59._4_4_ = auVar38._4_4_ * auVar30._4_4_;
        auVar59._8_4_ = auVar38._8_4_ * auVar30._8_4_;
        auVar59._12_4_ = auVar38._12_4_ * auVar30._12_4_;
        auVar63._16_4_ = auVar38._16_4_ * auVar30._16_4_;
        auVar63._0_16_ = auVar59;
        auVar63._20_4_ = auVar38._20_4_ * auVar30._20_4_;
        auVar63._24_4_ = auVar38._24_4_ * auVar30._24_4_;
        auVar63._28_4_ = auVar38._28_4_ * auVar30._28_4_;
        auVar38 = vcvtps2pd_avx(auVar59);
        auVar30 = vcvtps2pd_avx(auVar63._16_16_);
        dVar51 = auVar30._0_8_ * auVar70._0_8_;
        dVar55 = auVar30._8_8_ * auVar70._8_8_;
        dVar56 = auVar30._16_8_ * auVar7._0_8_;
        dVar57 = auVar30._24_8_ * auVar7._8_8_;
        dVar58 = auVar38._0_8_ * auVar42._0_8_;
        dVar67 = auVar38._8_8_ * auVar42._8_8_;
        dVar68 = auVar38._16_8_ * auVar6._0_8_;
        dVar69 = auVar38._24_8_ * auVar6._8_8_;
        auVar64._0_8_ = dVar18 * dVar58;
        auVar64._8_8_ = dVar19 * dVar67;
        auVar64._16_8_ = dVar20 * dVar68;
        auVar64._24_8_ = dVar21 * dVar69;
        auVar75._0_8_ = dVar18 * dVar51;
        auVar75._8_8_ = dVar19 * dVar55;
        auVar75._16_8_ = dVar20 * dVar56;
        auVar75._24_8_ = dVar21 * dVar57;
        auVar38 = vsubpd_avx(auVar77,auVar75);
        auVar30 = vsubpd_avx(auVar77,auVar64);
        dVar58 = auVar30._0_8_ * dVar58;
        dVar67 = auVar30._8_8_ * dVar67;
        dVar68 = auVar30._16_8_ * dVar68;
        dVar69 = auVar30._24_8_ * dVar69;
        dVar51 = auVar38._0_8_ * dVar51;
        dVar55 = auVar38._8_8_ * dVar55;
        dVar56 = auVar38._16_8_ * dVar56;
        dVar57 = auVar38._24_8_ * dVar57;
        auVar65._0_8_ = dVar18 * dVar51;
        auVar65._8_8_ = dVar19 * dVar55;
        auVar65._16_8_ = dVar20 * dVar56;
        auVar65._24_8_ = dVar21 * dVar57;
        auVar10._0_8_ = dVar18 * dVar58;
        auVar10._8_8_ = dVar19 * dVar67;
        auVar10._16_8_ = dVar20 * dVar68;
        auVar10._24_8_ = dVar21 * dVar69;
        auVar38 = vsubpd_avx(auVar77,auVar10);
        auVar30 = vsubpd_avx(auVar77,auVar65);
        auVar37._0_8_ = auVar30._0_8_ * dVar51;
        auVar37._8_8_ = auVar30._8_8_ * dVar55;
        auVar37._16_8_ = auVar30._16_8_ * dVar56;
        auVar37._24_8_ = auVar30._24_8_ * dVar57;
        auVar11._0_8_ = dVar58 * auVar38._0_8_;
        auVar11._8_8_ = dVar67 * auVar38._8_8_;
        auVar11._16_8_ = dVar68 * auVar38._16_8_;
        auVar11._24_8_ = dVar69 * auVar38._24_8_;
        auVar35 = vshufps_avx(auVar23,auVar23,0x50);
        auVar34 = vshufps_avx(auVar23,auVar23,0xfa);
        auVar44._16_16_ = auVar34;
        auVar44._0_16_ = auVar35;
        auVar13 = vblendvps_avx(auVar13,auVar11,auVar44);
        auVar35 = vpshufd_avx(auVar25._16_16_,0x50);
        auVar34 = vpshufd_avx(auVar25._16_16_,0xfa);
        auVar12._16_16_ = auVar34;
        auVar12._0_16_ = auVar35;
        auVar14 = vblendvps_avx(auVar14,auVar37,auVar12);
      }
      else {
        auVar35 = vpackssdw_avx(auVar6,(undefined1  [16])0x0);
        auVar34 = vpackssdw_avx(auVar42,(undefined1  [16])0x0);
        auVar6 = vpand_avx(auVar35,auVar34);
        auVar42 = vpmovsxwd_avx(auVar6);
        auVar35 = vcvtpd2ps_avx(auVar17);
        auVar34 = vcvtpd2ps_avx(auVar17);
        auVar39._16_16_ = auVar34;
        auVar39._0_16_ = auVar35;
        auVar38 = vrcpps_avx(auVar39);
        auVar40._0_4_ = auVar38._0_4_ * auVar35._0_4_;
        auVar40._4_4_ = auVar38._4_4_ * auVar35._4_4_;
        auVar40._8_4_ = auVar38._8_4_ * auVar35._8_4_;
        auVar40._12_4_ = auVar38._12_4_ * auVar35._12_4_;
        auVar40._16_4_ = auVar38._16_4_ * auVar34._0_4_;
        auVar40._20_4_ = auVar38._20_4_ * auVar34._4_4_;
        auVar40._24_4_ = auVar38._24_4_ * auVar34._8_4_;
        auVar40._28_4_ = auVar38._28_4_ * auVar34._12_4_;
        auVar52._4_4_ = __real_40000000;
        auVar52._0_4_ = __real_40000000;
        auVar52._8_4_ = __real_40000000;
        auVar52._12_4_ = __real_40000000;
        auVar52._16_4_ = __real_40000000;
        auVar52._20_4_ = __real_40000000;
        auVar52._24_4_ = __real_40000000;
        auVar52._28_4_ = __real_40000000;
        auVar30 = vsubps_avx(auVar52,auVar40);
        auVar35._0_4_ = auVar38._0_4_ * auVar30._0_4_;
        auVar35._4_4_ = auVar38._4_4_ * auVar30._4_4_;
        auVar35._8_4_ = auVar38._8_4_ * auVar30._8_4_;
        auVar35._12_4_ = auVar38._12_4_ * auVar30._12_4_;
        auVar41._16_4_ = auVar38._16_4_ * auVar30._16_4_;
        auVar41._0_16_ = auVar35;
        auVar41._20_4_ = auVar38._20_4_ * auVar30._20_4_;
        auVar41._24_4_ = auVar38._24_4_ * auVar30._24_4_;
        auVar41._28_4_ = auVar38._28_4_ * auVar30._28_4_;
        auVar38 = vcvtps2pd_avx(auVar41._16_16_);
        auVar30 = vcvtps2pd_avx(auVar35);
        auVar7 = vpunpckhwd_avx(auVar6,auVar6);
        auVar53._0_8_ = auVar30._0_8_ * dVar18;
        auVar53._8_8_ = auVar30._8_8_ * dVar19;
        auVar53._16_8_ = auVar30._16_8_ * dVar20;
        auVar53._24_8_ = auVar30._24_8_ * dVar21;
        auVar72._0_8_ = auVar38._0_8_ * dVar18;
        auVar72._8_8_ = auVar38._8_8_ * dVar19;
        auVar72._16_8_ = auVar38._16_8_ * dVar20;
        auVar72._24_8_ = auVar38._24_8_ * dVar21;
        auVar39 = vsubpd_avx(auVar77,auVar72);
        auVar16 = vsubpd_avx(auVar77,auVar53);
        dVar51 = auVar30._0_8_ * auVar16._0_8_;
        dVar55 = auVar30._8_8_ * auVar16._8_8_;
        dVar56 = auVar30._16_8_ * auVar16._16_8_;
        dVar57 = auVar30._24_8_ * auVar16._24_8_;
        dVar58 = auVar39._0_8_ * auVar38._0_8_;
        dVar67 = auVar39._8_8_ * auVar38._8_8_;
        dVar68 = auVar39._16_8_ * auVar38._16_8_;
        dVar69 = auVar39._24_8_ * auVar38._24_8_;
        auVar73._0_8_ = dVar58 * dVar18;
        auVar73._8_8_ = dVar67 * dVar19;
        auVar73._16_8_ = dVar68 * dVar20;
        auVar73._24_8_ = dVar69 * dVar21;
        auVar76._0_8_ = dVar18 * dVar51;
        auVar76._8_8_ = dVar19 * dVar55;
        auVar76._16_8_ = dVar20 * dVar56;
        auVar76._24_8_ = dVar21 * dVar57;
        auVar38 = vsubpd_avx(auVar77,auVar76);
        auVar30 = vsubpd_avx(auVar77,auVar73);
        auVar66._0_8_ = dVar58 * auVar30._0_8_;
        auVar66._8_8_ = dVar67 * auVar30._8_8_;
        auVar66._16_8_ = dVar68 * auVar30._16_8_;
        auVar66._24_8_ = dVar69 * auVar30._24_8_;
        auVar54._0_8_ = auVar38._0_8_ * dVar51;
        auVar54._8_8_ = auVar38._8_8_ * dVar55;
        auVar54._16_8_ = auVar38._16_8_ * dVar56;
        auVar54._24_8_ = auVar38._24_8_ * dVar57;
        auVar35 = vpmovsxwq_avx(auVar6);
        auVar34 = vpshufd_avx(auVar42,0xfa);
        auVar45._16_16_ = auVar34;
        auVar45._0_16_ = auVar35;
        auVar13 = vblendvps_avx(auVar13,auVar54,auVar45);
        auVar35 = vpshufd_avx(auVar7,0x50);
        auVar34 = vpshufd_avx(auVar7,0xfa);
        auVar46._16_16_ = auVar34;
        auVar46._0_16_ = auVar35;
        auVar14 = vblendvps_avx(auVar14,auVar66,auVar46);
        if ((char)iVar5 != -1) {
          auVar30._16_16_ = auVar7;
          auVar30._0_16_ = auVar42;
          goto LAB_140abadf4;
        }
      }
      in_ZMM4 = ZEXT3264(auVar14);
      in_ZMM3 = ZEXT3264(auVar13);
      dVar18 = auVar13._0_8_;
      dVar19 = auVar13._8_8_;
      dVar20 = auVar13._16_8_;
      dVar21 = auVar13._24_8_;
      auVar26._0_8_ = dVar18 + dVar18;
      auVar26._8_8_ = dVar19 + dVar19;
      auVar26._16_8_ = dVar20 + dVar20;
      auVar26._24_8_ = dVar21 + dVar21;
      auVar35 = vmovlhps_avx(auVar80,auVar81);
      auVar34 = vmovlhps_avx(auVar78,auVar79);
      dVar51 = auVar34._0_8_;
      auVar13._0_8_ = dVar51 * dVar18 * dVar18;
      dVar55 = auVar34._8_8_;
      auVar13._8_8_ = dVar55 * dVar19 * dVar19;
      dVar56 = auVar35._0_8_;
      auVar13._16_8_ = dVar56 * dVar20 * dVar20;
      dVar57 = auVar35._8_8_;
      auVar13._24_8_ = dVar57 * dVar21 * dVar21;
      auVar13 = vsubpd_avx(auVar26,auVar13);
      dVar18 = auVar13._0_8_;
      dVar19 = auVar13._8_8_;
      dVar20 = auVar13._16_8_;
      dVar21 = auVar13._24_8_;
      auVar14._0_8_ = dVar18 + dVar18;
      auVar14._8_8_ = dVar19 + dVar19;
      auVar14._16_8_ = dVar20 + dVar20;
      auVar14._24_8_ = dVar21 + dVar21;
      auVar27._0_8_ = dVar51 * dVar18 * dVar18;
      auVar27._8_8_ = dVar55 * dVar19 * dVar19;
      auVar27._16_8_ = dVar56 * dVar20 * dVar20;
      auVar27._24_8_ = dVar57 * dVar21 * dVar21;
      auVar14 = vsubpd_avx(auVar14,auVar27);
      auVar28._0_8_ =
           (ulonglong)dVar51 &
           ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar28._8_8_ = (ulonglong)dVar55 & _UNK_150aa8f48;
      auVar28._16_8_ = (ulonglong)dVar56 & _UNK_150aa8f50;
      auVar28._24_8_ = (ulonglong)dVar57 & _UNK_150aa8f58;
      auVar13 = vcmppd_avx(auVar28,
                           ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,2
                          );
      auVar35 = vpackssdw_avx(auVar13._0_16_,auVar13._16_16_);
      auVar34 = vpshufd_avx(auVar35,0x50);
      auVar35 = vpshufd_avx(auVar35,0xfa);
      auVar29._16_16_ = auVar35;
      auVar29._0_16_ = auVar34;
      auVar38 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar13 = vcmpps_avx(auVar38,auVar38,0xf);
      auVar13 = vblendvps_avx(auVar38,auVar13,auVar29);
      auVar6._0_8_ = (double)CONCAT44(~auVar13._4_4_ & auVar14._4_4_,~auVar13._0_4_ & auVar14._0_4_)
      ;
      auVar6._8_4_ = ~auVar13._8_4_ & auVar14._8_4_;
      auVar6._12_4_ = ~auVar13._12_4_ & auVar14._12_4_;
      auVar9._16_4_ = ~auVar13._16_4_ & auVar14._16_4_;
      auVar9._0_16_ = auVar6;
      auVar9._20_4_ = ~auVar13._20_4_ & auVar14._20_4_;
      auVar15._24_4_ = ~auVar13._24_4_ & auVar14._24_4_;
      auVar15._0_24_ = auVar9;
      auVar15._28_4_ = ~auVar13._28_4_ & auVar14._28_4_;
      pdVar3 = (double *)(param_1 + 0x40 + lVar4);
      pdVar1 = (double *)(param_1 + 0x50 + lVar4);
      dVar18 = pdVar3[1] * auVar6._8_8_ + _UNK_151c6afc8;
      dVar19 = *pdVar1 * auVar9._16_8_ + _UNK_151c6afd0;
      dVar20 = pdVar1[1] * auVar15._24_8_ + _UNK_151c6afd8;
      pdVar1 = (double *)(param_1 + 0x40 + lVar4);
      *pdVar1 = *pdVar3 * auVar6._0_8_ +
                ___ymm_8000000000000000bff0000000000000bff0000000000000bff0000000000000;
      pdVar1[1] = dVar18;
      pdVar3 = (double *)(param_1 + 0x50 + lVar4);
      *pdVar3 = dVar19;
      pdVar3[1] = dVar20;
      auVar7._0_8_ = dVar47 * dVar47 + dVar49 * dVar49;
      auVar7._8_8_ = dVar48 * dVar48 + dVar50 * dVar50;
      auVar35 = vshufpd_avx(auVar7,auVar7,1);
      dVar18 = auVar7._0_8_ + auVar35._0_8_;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = __real_3e45798ee2308c3a;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar18;
      auVar35 = vcmpsd_avx(auVar24,auVar8,6);
      uVar22 = ~auVar35._0_8_ & __real_ffffffffffffffff;
      dVar18 = __real_3ff0000000000000 / SQRT(dVar18);
      uVar31 = ~uVar22 & _UNK_150b54548;
      uVar32 = ~uVar22 & _UNK_150b54550;
      uVar33 = ~uVar22 & _UNK_150b54558;
      *(ulonglong *)(param_1 + lVar4) =
           (ulonglong)(dVar47 * dVar18) & uVar22 |
           ~uVar22 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      ((ulonglong *)(param_1 + lVar4))[1] = (ulonglong)(dVar48 * dVar18) & uVar22 | uVar31;
      puVar2 = (ulonglong *)(param_1 + 0x10 + lVar4);
      *puVar2 = (ulonglong)(dVar49 * dVar18) & uVar22 | uVar32;
      puVar2[1] = (ulonglong)(dVar50 * dVar18) & uVar22 | uVar33;
      lVar4 = lVar4 + 0x60;
    } while ((ulonglong)param_3 * 0x60 != lVar4);
  }
  return;
}

// ConvertPoseToMeshRotation_avx @ 140abb240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToMeshRotation_avx(longlong param_1,longlong param_2,uint param_3)

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
  double *pdVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar19 [32];
  
  dVar14 = _UNK_150b54438;
  dVar13 = _UNK_150b54430;
  dVar12 = _UNK_150b54428;
  dVar11 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar10 = _UNK_150b54418;
  dVar9 = _UNK_150b54410;
  dVar8 = _UNK_150b54408;
  dVar7 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar6 = _UNK_15076c6f8;
  dVar5 = ___xmm_bff00000000000003ff0000000000000;
  if (1 < (int)param_3) {
    pdVar15 = (double *)(param_1 + 0x78);
    uVar16 = 1;
    do {
      lVar17 = (longlong)*(int *)(param_2 + uVar16 * 4) * 0x60;
      dVar1 = *(double *)(param_1 + 0x18 + lVar17);
      dVar2 = *(double *)(param_1 + lVar17);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = *pdVar15;
      auVar21 = vmovhps_avx(auVar21,pdVar15[-1]);
      auVar20._8_8_ = 0;
      auVar20._0_8_ = pdVar15[-2];
      auVar20 = vmovhps_avx(auVar20,pdVar15[-3]);
      dVar3 = *(double *)(param_1 + 8 + lVar17);
      dVar4 = *(double *)(param_1 + 0x10 + lVar17);
      auVar18._0_8_ =
           auVar20._0_8_ * dVar4 * dVar11 +
           pdVar15[-1] * dVar3 * dVar7 + auVar21._0_8_ * dVar2 * dVar5 + pdVar15[-3] * dVar1;
      auVar18._8_8_ =
           auVar20._8_8_ * dVar4 * dVar12 +
           *pdVar15 * dVar3 * dVar8 + auVar21._8_8_ * dVar2 * dVar6 + pdVar15[-2] * dVar1;
      auVar19._16_8_ =
           auVar21._0_8_ * dVar4 * dVar13 +
           pdVar15[-3] * dVar3 * dVar9 + auVar20._0_8_ * dVar2 * dVar5 + pdVar15[-1] * dVar1;
      auVar19._0_16_ = auVar18;
      auVar19._24_8_ =
           auVar21._8_8_ * dVar4 * dVar14 +
           pdVar15[-2] * dVar3 * dVar10 + auVar20._8_8_ * dVar2 * dVar6 + *pdVar15 * dVar1;
      dVar1 = (double)vmovlpd_avx(auVar18);
      pdVar15[-3] = dVar1;
      dVar1 = (double)vmovhpd_avx(auVar18);
      pdVar15[-2] = dVar1;
      dVar1 = (double)vmovlps_avx(auVar19._16_16_);
      pdVar15[-1] = dVar1;
      dVar1 = (double)vmovhps_avx(auVar19._16_16_);
      *pdVar15 = dVar1;
      uVar16 = uVar16 + 1;
      pdVar15 = pdVar15 + 0xc;
    } while (param_3 != uVar16);
  }
  return;
}

// ConvertMeshRotationPoseToLocalSpace_avx @ 140abb370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertMeshRotationPoseToLocalSpace_avx(longlong param_1,longlong param_2,uint param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
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
  double *pdVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  
  dVar19 = _UNK_150b54438;
  dVar18 = _UNK_150b54430;
  dVar17 = _UNK_150b54428;
  dVar16 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar15 = _UNK_150b54418;
  dVar14 = _UNK_150b54410;
  dVar13 = _UNK_150b54408;
  dVar12 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar11 = _UNK_150b543d8;
  dVar10 = _UNK_150b543d0;
  dVar9 = _UNK_150b543c8;
  dVar8 = ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
  dVar7 = _UNK_15076c6f8;
  dVar6 = ___xmm_bff00000000000003ff0000000000000;
  if (1 < (int)param_3) {
    uVar20 = (ulonglong)param_3 + 1;
    pdVar21 = (double *)((ulonglong)param_3 * 0x60 + param_1 + -0x48);
    do {
      lVar22 = (longlong)*(int *)(param_2 + -8 + uVar20 * 4) * 0x60;
      pdVar1 = (double *)(param_1 + lVar22);
      pdVar2 = (double *)(param_1 + 0x10 + lVar22);
      auVar23._0_8_ = *pdVar1 * dVar8;
      auVar23._8_8_ = pdVar1[1] * dVar9;
      auVar25._16_8_ = *pdVar2 * dVar10;
      auVar25._0_16_ = auVar23;
      auVar25._24_8_ = pdVar2[1] * dVar11;
      auVar5 = vperm2f128_avx(auVar25,auVar25,0x11);
      auVar25 = vshufpd_avx(auVar5,auVar5,0xf);
      auVar27._8_8_ = 0;
      auVar27._0_8_ = *pdVar21;
      auVar27 = vmovhps_avx(auVar27,pdVar21[-1]);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = pdVar21[-2];
      auVar28 = vmovhps_avx(auVar28,pdVar21[-3]);
      auVar4 = vshufpd_avx(auVar23,auVar23,3);
      auVar24._0_8_ =
           auVar28._0_8_ * auVar5._0_8_ * dVar16 +
           pdVar21[-1] * auVar4._0_8_ * dVar12 +
           auVar27._0_8_ * auVar23._0_8_ * dVar6 + pdVar21[-3] * auVar25._0_8_;
      auVar24._8_8_ =
           auVar28._8_8_ * auVar5._0_8_ * dVar17 +
           *pdVar21 * auVar4._8_8_ * dVar13 +
           auVar27._8_8_ * auVar23._0_8_ * dVar7 + pdVar21[-2] * auVar25._8_8_;
      auVar26._16_8_ =
           auVar27._0_8_ * auVar5._16_8_ * dVar18 +
           pdVar21[-3] * auVar4._0_8_ * dVar14 +
           auVar28._0_8_ * auVar23._0_8_ * dVar6 + pdVar21[-1] * auVar25._16_8_;
      auVar26._0_16_ = auVar24;
      auVar26._24_8_ =
           auVar27._8_8_ * auVar5._16_8_ * dVar19 +
           pdVar21[-2] * auVar4._8_8_ * dVar15 +
           auVar28._8_8_ * auVar23._0_8_ * dVar7 + *pdVar21 * auVar25._24_8_;
      dVar3 = (double)vmovlpd_avx(auVar24);
      pdVar21[-3] = dVar3;
      dVar3 = (double)vmovhpd_avx(auVar24);
      pdVar21[-2] = dVar3;
      dVar3 = (double)vmovlps_avx(auVar26._16_16_);
      pdVar21[-1] = dVar3;
      dVar3 = (double)vmovhps_avx(auVar26._16_16_);
      *pdVar21 = dVar3;
      uVar20 = uVar20 - 1;
      pdVar21 = pdVar21 + -0xc;
    } while (2 < uVar20);
  }
  return;
}

// AccumulateWithAdditiveScale_avx @ 140abb4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AccumulateWithAdditiveScale_avx(longlong param_1,longlong param_2,float param_3,uint param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
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
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  longlong lVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar41 [32];
  
  dVar37 = _UNK_150b54518;
  dVar36 = _UNK_150b54510;
  dVar35 = _UNK_150b54508;
  dVar34 = ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
  dVar33 = _UNK_150b54438;
  dVar32 = _UNK_150b54430;
  dVar31 = _UNK_150b54428;
  dVar30 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar29 = _UNK_150b54418;
  dVar28 = _UNK_150b54410;
  dVar27 = _UNK_150b54408;
  dVar26 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar25 = _UNK_15076c6f8;
  dVar24 = ___xmm_bff00000000000003ff0000000000000;
  if (0 < (int)param_4) {
    dVar39 = (double)param_3;
    lVar38 = 0;
    do {
      pdVar1 = (double *)(param_2 + 0x20 + lVar38);
      dVar8 = *pdVar1;
      dVar9 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x40 + lVar38);
      dVar16 = *pdVar1;
      dVar17 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x10 + lVar38);
      auVar40._0_8_ = dVar39 * *(double *)(param_2 + lVar38);
      auVar40._8_8_ = dVar39 * ((double *)(param_2 + lVar38))[1];
      auVar41._16_8_ = dVar39 * *pdVar1;
      auVar41._0_16_ = auVar40;
      auVar41._24_8_ = dVar39 * pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x30 + lVar38);
      dVar10 = *pdVar1;
      dVar11 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x20 + lVar38);
      dVar12 = *pdVar1;
      dVar13 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x30 + lVar38);
      dVar14 = *pdVar1;
      dVar15 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x50 + lVar38);
      dVar18 = *pdVar1;
      dVar19 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x40 + lVar38);
      dVar20 = *pdVar1;
      dVar21 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x50 + lVar38);
      dVar22 = *pdVar1;
      dVar23 = pdVar1[1];
      auVar7 = vperm2f128_avx(auVar41,auVar41,0x11);
      auVar41 = vshufpd_avx(auVar7,auVar7,0xf);
      auVar42 = *(undefined1 (*) [16])(param_1 + 0x10 + lVar38);
      dVar2 = SUB168(*(undefined1 (*) [16])(param_1 + lVar38),0);
      dVar3 = SUB168(*(undefined1 (*) [16])(param_1 + lVar38),8);
      dVar4 = auVar42._0_8_;
      dVar5 = auVar42._8_8_;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar38);
      auVar42 = vmovhps_avx(auVar42,*(undefined8 *)(param_1 + 0x10 + lVar38));
      auVar43._8_8_ = 0;
      auVar43._0_8_ = *(ulonglong *)(param_1 + 8 + lVar38);
      auVar43 = vmovhps_avx(auVar43,*(undefined8 *)(param_1 + lVar38));
      auVar6 = vshufpd_avx(auVar40,auVar40,3);
      *(double *)(param_1 + lVar38) =
           auVar7._0_8_ * auVar43._0_8_ * dVar30 +
           auVar41._0_8_ * dVar2 + auVar40._0_8_ * auVar42._0_8_ * dVar24 +
           dVar4 * auVar6._0_8_ * dVar26;
      ((double *)(param_1 + lVar38))[1] =
           auVar7._0_8_ * auVar43._8_8_ * dVar31 +
           auVar41._8_8_ * dVar3 + auVar40._0_8_ * auVar42._8_8_ * dVar25 +
           dVar5 * auVar6._8_8_ * dVar27;
      pdVar1 = (double *)(param_1 + 0x10 + lVar38);
      *pdVar1 = auVar7._16_8_ * auVar42._0_8_ * dVar32 +
                auVar41._16_8_ * dVar4 + auVar40._0_8_ * auVar43._0_8_ * dVar24 +
                dVar2 * auVar6._0_8_ * dVar28;
      pdVar1[1] = auVar7._16_8_ * auVar42._8_8_ * dVar33 +
                  auVar41._24_8_ * dVar5 + auVar40._0_8_ * auVar43._8_8_ * dVar25 +
                  dVar3 * auVar6._8_8_ * dVar29;
      pdVar1 = (double *)(param_1 + 0x20 + lVar38);
      *pdVar1 = dVar39 * dVar8 + dVar12;
      pdVar1[1] = dVar39 * dVar9 + dVar13;
      pdVar1 = (double *)(param_1 + 0x30 + lVar38);
      *pdVar1 = dVar39 * dVar10 + dVar14;
      pdVar1[1] = dVar39 * dVar11 + dVar15;
      pdVar1 = (double *)(param_1 + 0x40 + lVar38);
      *pdVar1 = dVar20 * (dVar16 * dVar39 + dVar34);
      pdVar1[1] = dVar21 * (dVar17 * dVar39 + dVar35);
      pdVar1 = (double *)(param_1 + 0x50 + lVar38);
      *pdVar1 = dVar22 * (dVar18 * dVar39 + dVar36);
      pdVar1[1] = dVar23 * (dVar19 * dVar39 + dVar37);
      lVar38 = lVar38 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar38);
  }
  return;
}

// BlendPosesPerBoneFilterScaleRotation_avx @ 140abb700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScaleRotation_avx
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,longlong param_10
               ,longlong param_11,longlong param_12,uint param_13)

{
  double *pdVar1;
  double *pdVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [32];
  undefined1 auVar22 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar26 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar47;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  double dVar46;
  double dVar50;
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar48 [16];
  undefined1 auVar45 [32];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [32];
  float fVar60;
  double dVar61;
  undefined1 auVar63 [16];
  ulonglong uVar62;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [64];
  undefined1 auVar73 [16];
  double dVar74;
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar81 [32];
  double dVar93;
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  double dVar91;
  double dVar94;
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  double dVar92;
  undefined1 auVar90 [64];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [64];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [64];
  undefined1 auVar119 [16];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [32];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 local_3f8 [16];
  double local_3e8;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  ulonglong local_378;
  undefined1 local_368 [16];
  undefined1 local_348 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  ulonglong local_2e8;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_268 [16];
  ulonglong local_1f8;
  ulonglong local_1e8;
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [16];
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined1 auVar19 [32];
  undefined1 auVar21 [32];
  undefined1 auVar23 [32];
  undefined1 auVar57 [32];
  undefined1 auVar80 [32];
  undefined1 auVar87 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar126 [32];
  
  if (0 < (int)param_13) {
    lVar13 = 0;
    lVar14 = 0;
    iVar12 = 0;
    do {
      iVar9 = *(int *)(param_11 + lVar13 * 2);
      iVar8 = *(int *)(param_12 + lVar13);
      lVar15 = (longlong)iVar8;
      auVar108._0_8_ = *(ulonglong *)(param_2 + lVar14 * 4);
      local_1b8._0_8_ = *(double *)(param_2 + 0x20 + lVar14 * 4);
      local_1b8._8_8_ = 0;
      local_2b8._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar14 * 4);
      local_2b8._8_8_ = 0;
      local_298._0_8_ = *(double *)(param_2 + 0x30 + lVar14 * 4);
      local_298._8_8_ = 0;
      local_2a8._0_8_ = *(ulonglong *)(param_2 + 0x38 + lVar14 * 4);
      local_2a8._8_8_ = 0;
      local_288._0_8_ = *(double *)(param_2 + 0x40 + lVar14 * 4);
      local_288._8_8_ = 0;
      local_368._0_8_ = *(double *)(param_2 + 0x50 + lVar14 * 4);
      local_368._8_8_ = 0;
      local_2d8._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar14 * 4);
      local_2d8._8_8_ = 0;
      auVar72 = ZEXT864(*(ulonglong *)(param_2 + 0x48 + lVar14 * 4));
      auVar90 = ZEXT864(*(ulonglong *)(param_2 + 0x18 + lVar14 * 4));
      auVar105 = ZEXT864(*(ulonglong *)(param_2 + 8 + lVar14 * 4));
      auVar118 = ZEXT864(*(ulonglong *)(param_2 + 0x10 + lVar14 * 4));
      puVar10 = (ulonglong *)GetTransformFromArray(param_3,iVar9,iVar12);
      uVar62 = *puVar10;
      auVar122._8_8_ = 0;
      auVar122._0_8_ = uVar62;
      local_1f8 = puVar10[1];
      auVar127._8_8_ = 0;
      auVar127._0_8_ = local_1f8;
      uVar3 = puVar10[2];
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar3;
      local_1e8 = puVar10[3];
      auVar73._8_8_ = 0;
      auVar73._0_8_ = local_1e8;
      auVar39._0_8_ = (double)puVar10[8];
      auVar25._8_8_ = 0;
      auVar25._0_8_ = auVar39._0_8_;
      uVar4 = puVar10[9];
      local_348._8_8_ = 0;
      local_348._0_8_ = uVar4;
      auVar48 = local_348;
      dVar35 = (double)puVar10[10];
      auVar49._8_8_ = 0;
      auVar49._0_8_ = dVar35;
      auVar52 = auVar90._0_16_;
      auVar95 = auVar105._0_16_;
      auVar106 = auVar118._0_16_;
      local_2e8 = auVar118._0_8_;
      auVar70 = auVar72._0_16_;
      local_378 = auVar72._0_8_;
      if (lVar15 == -1) {
        auVar36._8_8_ = 0;
        auVar36._0_8_ = auVar108._0_8_;
        auVar18 = vmovlhps_avx(auVar36,auVar95);
        auVar128 = vmovlhps_avx(auVar106,auVar52);
        auVar59 = vmovlhps_avx(auVar52,auVar106);
        auVar36 = vmovlhps_avx(auVar95,auVar36);
        auVar16._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar36._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar128._0_8_ * 0.0 +
             auVar59._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar18._0_8_;
        auVar16._8_8_ =
             _UNK_150b54428 * auVar36._8_8_ * 0.0 +
             _UNK_150b54408 * auVar128._8_8_ * 0.0 +
             auVar59._8_8_ * 0.0 * _UNK_15076c6f8 + auVar18._8_8_;
        auVar20._16_8_ =
             _UNK_150b54430 * auVar59._0_8_ * 0.0 +
             _UNK_150b54410 * auVar18._0_8_ * 0.0 +
             auVar36._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar128._0_8_;
        auVar20._0_16_ = auVar16;
        auVar20._24_8_ =
             _UNK_150b54438 * auVar59._8_8_ * 0.0 +
             _UNK_150b54418 * auVar18._8_8_ * 0.0 +
             auVar36._8_8_ * 0.0 * _UNK_15076c6f8 + auVar128._8_8_;
        local_388 = vshufpd_avx(auVar16,auVar16,1);
        local_398 = auVar20._16_16_;
        local_3a8 = vshufpd_avx(local_398,local_398,1);
        auVar18 = vunpcklpd_avx(auVar122,auVar127);
        auVar128 = vunpcklpd_avx(auVar53,auVar73);
        auVar59 = vunpcklpd_avx(auVar73,auVar53);
        auVar36 = vunpcklpd_avx(auVar127,auVar122);
        auVar54._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar36._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar128._0_8_ * 0.0 +
             auVar18._0_8_ + auVar59._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        auVar54._8_8_ =
             _UNK_150b54428 * auVar36._8_8_ * 0.0 +
             _UNK_150b54408 * auVar128._8_8_ * 0.0 +
             auVar18._8_8_ + auVar59._8_8_ * 0.0 * _UNK_15076c6f8;
        auVar58._16_8_ =
             _UNK_150b54430 * auVar59._0_8_ * 0.0 +
             _UNK_150b54410 * auVar18._0_8_ * 0.0 +
             auVar128._0_8_ + auVar36._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        auVar58._0_16_ = auVar54;
        auVar58._24_8_ =
             _UNK_150b54438 * auVar59._8_8_ * 0.0 +
             _UNK_150b54418 * auVar18._8_8_ * 0.0 +
             auVar128._8_8_ + auVar36._8_8_ * 0.0 * _UNK_15076c6f8;
        local_2c8 = vshufpd_avx(auVar54,auVar54,1);
        auVar59 = auVar58._16_16_;
        local_3b8 = vshufpd_avx(auVar59,auVar59,1);
        local_2f8._8_8_ = 0;
        local_2f8._0_8_ = local_288._0_8_;
        local_308 = local_368;
        auVar18 = local_348;
        auVar128 = auVar25;
        local_328 = auVar70;
        local_318 = auVar49;
      }
      else {
        lVar11 = lVar15 * 0x20;
        dVar46 = *(double *)(param_4 + 0x18 + lVar11);
        auVar119._8_8_ = 0;
        auVar119._0_8_ = auVar108._0_8_;
        auVar18 = vmovlhps_avx(auVar119,auVar95);
        auVar128 = vmovlhps_avx(auVar106,auVar52);
        dVar47 = *(double *)(param_4 + lVar11);
        auVar59 = vmovlhps_avx(auVar52,auVar106);
        auVar36 = vmovlhps_avx(auVar95,auVar119);
        dVar50 = *(double *)(param_4 + 8 + lVar11);
        dVar61 = *(double *)(param_4 + 0x10 + lVar11);
        auVar16._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar36._0_8_ * dVar61 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             dVar50 * auVar128._0_8_ +
             auVar59._0_8_ * dVar47 * ___xmm_bff00000000000003ff0000000000000 +
             auVar18._0_8_ * dVar46;
        auVar16._8_8_ =
             _UNK_150b54428 * auVar36._8_8_ * dVar61 +
             _UNK_150b54408 * dVar50 * auVar128._8_8_ +
             auVar59._8_8_ * dVar47 * _UNK_15076c6f8 + auVar18._8_8_ * dVar46;
        auVar19._16_8_ =
             _UNK_150b54430 * auVar59._0_8_ * dVar61 +
             _UNK_150b54410 * dVar50 * auVar18._0_8_ +
             auVar36._0_8_ * dVar47 * ___xmm_bff00000000000003ff0000000000000 +
             auVar128._0_8_ * dVar46;
        auVar19._0_16_ = auVar16;
        auVar19._24_8_ =
             _UNK_150b54438 * auVar59._8_8_ * dVar61 +
             _UNK_150b54418 * dVar50 * auVar18._8_8_ +
             auVar36._8_8_ * dVar47 * _UNK_15076c6f8 + auVar128._8_8_ * dVar46;
        local_388 = vshufpd_avx(auVar16,auVar16,1);
        local_398 = auVar19._16_16_;
        local_3a8 = vshufpd_avx(local_398,local_398,1);
        dVar46 = *(double *)(param_6 + 0x18 + lVar11);
        auVar18 = vunpcklpd_avx(auVar122,auVar127);
        auVar128 = vunpcklpd_avx(auVar53,auVar73);
        dVar47 = *(double *)(param_6 + lVar11);
        auVar59 = vunpcklpd_avx(auVar73,auVar53);
        auVar36 = vunpcklpd_avx(auVar127,auVar122);
        dVar50 = *(double *)(param_6 + 8 + lVar11);
        dVar61 = *(double *)(param_6 + 0x10 + lVar11);
        auVar54._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar36._0_8_ * dVar61 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             dVar50 * auVar128._0_8_ +
             auVar18._0_8_ * dVar46 +
             auVar59._0_8_ * dVar47 * ___xmm_bff00000000000003ff0000000000000;
        auVar54._8_8_ =
             _UNK_150b54428 * auVar36._8_8_ * dVar61 +
             _UNK_150b54408 * dVar50 * auVar128._8_8_ +
             auVar18._8_8_ * dVar46 + auVar59._8_8_ * dVar47 * _UNK_15076c6f8;
        auVar57._16_8_ =
             _UNK_150b54430 * auVar59._0_8_ * dVar61 +
             _UNK_150b54410 * dVar50 * auVar18._0_8_ +
             auVar128._0_8_ * dVar46 +
             auVar36._0_8_ * dVar47 * ___xmm_bff00000000000003ff0000000000000;
        auVar57._0_16_ = auVar54;
        auVar57._24_8_ =
             _UNK_150b54438 * auVar59._8_8_ * dVar61 +
             _UNK_150b54418 * dVar50 * auVar18._8_8_ +
             auVar128._8_8_ * dVar46 + auVar36._8_8_ * dVar47 * _UNK_15076c6f8;
        local_2c8 = vshufpd_avx(auVar54,auVar54,1);
        auVar59 = auVar57._16_16_;
        lVar11 = lVar15 * 0x18;
        auVar18 = vunpcklpd_avx(local_288,auVar70);
        local_2f8._0_8_ = auVar18._0_8_ * *(double *)(param_5 + lVar11);
        local_2f8._8_8_ = auVar18._8_8_ * ((double *)(param_5 + lVar11))[1];
        local_308._8_8_ = 0;
        local_308._0_8_ = (double)local_368._0_8_ * *(double *)(param_5 + 0x10 + lVar11);
        local_3b8 = vshufpd_avx(auVar59,auVar59,1);
        auVar18 = vunpcklpd_avx(auVar25,local_348);
        auVar128._0_8_ = auVar18._0_8_ * *(double *)(param_7 + lVar11);
        auVar128._8_8_ = auVar18._8_8_ * ((double *)(param_7 + lVar11))[1];
        local_328 = vshufpd_avx(local_2f8,local_2f8,1);
        auVar18 = vshufpd_avx(auVar128,auVar128,1);
        local_318._8_8_ = 0;
        local_318._0_8_ = dVar35 * *(double *)(param_7 + 0x10 + lVar11);
      }
      dVar46 = (double)puVar10[4];
      auVar51._8_8_ = 0;
      auVar51._0_8_ = dVar46;
      uVar5 = puVar10[5];
      local_3f8._8_8_ = 0;
      local_3f8._0_8_ = uVar5;
      local_348._0_8_ = puVar10[6];
      local_348._8_8_ = 0;
      auVar36 = vmaxss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_11 + 4 + lVar13 * 2)));
      uVar6 = puVar10[7];
      auVar119 = vminss_avx(auVar36,ZEXT416((uint)__real_3f800000));
      auVar36 = vmaxss_avx(auVar119,ZEXT416(*(uint *)(param_10 + (longlong)iVar9 * 4)));
      uVar7 = puVar10[0xb];
      *(int *)(param_10 + (longlong)iVar9 * 4) = auVar36._0_4_;
      fVar60 = auVar119._0_4_;
      if (fVar60 <= __real_3727c5ac) {
        local_3c8 = local_3a8;
        local_3d8 = local_388;
        local_3f8 = local_328;
        local_268 = local_2f8;
        local_1e8 = auVar90._0_8_;
        local_1f8 = auVar105._0_8_;
        auVar48 = local_398;
        local_3e8 = (double)local_308._0_8_;
        local_348 = auVar16;
      }
      else if (__real_3f7fff58 <= fVar60) {
        local_3c8 = local_3b8;
        local_3d8 = local_2c8;
        auVar48 = auVar59;
        auVar108._0_8_ = uVar62;
        local_3f8 = auVar18;
        local_2e8 = uVar3;
        local_378 = uVar4;
        local_368._0_8_ = dVar35;
        local_2d8._0_8_ = uVar7;
        local_1b8._0_8_ = dVar46;
        local_2b8._0_8_ = uVar5;
        local_298._0_8_ = local_348._0_8_;
        local_2a8._0_8_ = uVar6;
        local_3e8 = (double)local_318._0_8_;
        local_288._0_8_ = auVar39._0_8_;
        local_268 = auVar128;
        local_348 = auVar54;
      }
      else {
        auVar119 = vunpcklpd_avx(local_398,local_3a8);
        auVar37 = vunpcklpd_avx(auVar16,local_388);
        auVar38 = vunpcklpd_avx(auVar59,local_3b8);
        auVar97 = vunpcklpd_avx(auVar54,local_2c8);
        auVar111._0_8_ = auVar97._0_8_ * auVar37._0_8_ + auVar38._0_8_ * auVar119._0_8_;
        auVar111._8_8_ = auVar97._8_8_ * auVar37._8_8_ + auVar38._8_8_ * auVar119._8_8_;
        auVar39 = vshufpd_avx(auVar111,auVar111,1);
        auVar39._0_8_ = auVar111._0_8_ + auVar39._0_8_;
        auVar112._0_4_ = (float)auVar39._0_8_;
        auVar112._4_4_ = (int)((ulonglong)auVar39._0_8_ >> 0x20);
        auVar112._8_8_ = 0;
        auVar39 = vcmpss_avx(ZEXT816(0) << 0x40,auVar112,2);
        auVar75._0_4_ = (uint)(__real_3f800000 - fVar60) ^ __xmm_80000000800000008000000080000000;
        auVar75._4_4_ = _UNK_150651574;
        auVar75._8_4_ = _UNK_150651578;
        auVar75._12_4_ = _UNK_15065157c;
        auVar36 = vblendvps_avx(auVar75,ZEXT416((uint)(__real_3f800000 - fVar60)),auVar39);
        auVar52 = vunpcklpd_avx(auVar106,auVar52);
        auVar96._8_8_ = 0;
        auVar96._0_8_ = auVar108._0_8_;
        auVar95 = vunpcklpd_avx(auVar96,auVar95);
        auVar71._16_16_ = auVar52;
        auVar71._0_16_ = auVar95;
        auVar53 = vunpcklpd_avx(auVar53,auVar73);
        auVar108 = vunpcklpd_avx(auVar122,auVar127);
        auVar27._0_8_ = auVar95._0_8_ * auVar108._0_8_;
        auVar27._8_8_ = auVar95._8_8_ * auVar108._8_8_;
        auVar27._16_8_ = auVar52._0_8_ * auVar53._0_8_;
        auVar27._24_8_ = auVar52._8_8_ * auVar53._8_8_;
        auVar20 = vperm2f128_avx(auVar27,auVar27,1);
        auVar28._0_8_ = auVar27._0_8_ + auVar20._0_8_;
        auVar28._8_8_ = auVar27._8_8_ + auVar20._8_8_;
        auVar28._16_8_ = auVar27._16_8_ + auVar20._16_8_;
        auVar28._24_8_ = auVar27._24_8_ + auVar20._24_8_;
        auVar20 = vperm2f128_avx(auVar28,auVar28,1);
        auVar20 = vshufpd_avx(auVar28,auVar20,5);
        auVar29._0_8_ = auVar28._0_8_ + auVar20._0_8_;
        auVar29._8_8_ = auVar28._8_8_ + auVar20._8_8_;
        auVar29._16_8_ = auVar28._16_8_ + auVar20._16_8_;
        auVar29._24_8_ = auVar28._24_8_ + auVar20._24_8_;
        auVar106 = ZEXT816(0);
        auVar20 = vcmppd_avx(ZEXT1632(auVar106),auVar29,2);
        auVar39 = vpackssdw_avx(auVar20._0_16_,auVar20._16_16_);
        auVar73 = vpshufd_avx(auVar39,0x50);
        auVar39 = vpshufd_avx(auVar39,0xfa);
        auVar30._16_16_ = auVar39;
        auVar30._0_16_ = auVar73;
        auVar19 = ZEXT1632(auVar106);
        auVar20 = vcmpps_avx(ZEXT1632(auVar106),auVar19,0xf);
        auVar20 = vblendvps_avx(auVar19,auVar20,auVar30);
        auVar39 = vunpcklpd_avx(local_368,local_2d8);
        auVar70 = vunpcklpd_avx(local_288,auVar70);
        auVar78._16_16_ = auVar39;
        auVar78._0_16_ = auVar70;
        auVar106._8_8_ = 0;
        auVar106._0_8_ = uVar7;
        auVar49 = vunpcklpd_avx(auVar49,auVar106);
        auVar48 = vunpcklpd_avx(auVar25,auVar48);
        auVar31._16_16_ = auVar49;
        auVar31._0_16_ = auVar48;
        auVar58 = vsubpd_avx(auVar31,auVar78);
        dVar61 = (double)fVar60;
        auVar17._0_8_ = auVar70._0_8_ + auVar58._0_8_ * dVar61;
        auVar17._8_8_ = auVar70._8_8_ + auVar58._8_8_ * dVar61;
        auVar21._16_8_ = auVar39._0_8_ + auVar58._16_8_ * dVar61;
        auVar21._0_16_ = auVar17;
        auVar21._24_8_ = auVar39._8_8_ + auVar58._24_8_ * dVar61;
        auVar48 = vunpcklpd_avx(local_298,local_2a8);
        auVar25 = vunpcklpd_avx(local_1b8,local_2b8);
        auVar40._16_16_ = auVar48;
        auVar40._0_16_ = auVar25;
        auVar70._8_8_ = 0;
        auVar70._0_8_ = uVar6;
        auVar39 = vunpcklpd_avx(local_348,auVar70);
        auVar70 = vunpcklpd_avx(auVar51,local_3f8);
        auVar49 = vshufpd_avx(auVar21._16_16_,auVar21._16_16_,1);
        auVar79._16_16_ = auVar39;
        auVar79._0_16_ = auVar70;
        auVar70 = vshufpd_avx(auVar17,auVar17,1);
        auVar58 = vsubpd_avx(auVar79,auVar40);
        auVar76._0_8_ = auVar58._0_8_ * dVar61 + auVar25._0_8_;
        auVar76._8_8_ = auVar58._8_8_ * dVar61 + auVar25._8_8_;
        auVar80._16_8_ = auVar58._16_8_ * dVar61 + auVar48._0_8_;
        auVar80._0_16_ = auVar76;
        auVar80._24_8_ = auVar58._24_8_ * dVar61 + auVar48._8_8_;
        auVar58 = vsubpd_avx(auVar19,auVar71);
        auVar41._0_4_ = ~auVar20._0_4_ & auVar58._0_4_;
        auVar41._4_4_ = ~auVar20._4_4_ & auVar58._4_4_;
        auVar41._8_4_ = ~auVar20._8_4_ & auVar58._8_4_;
        auVar41._12_4_ = ~auVar20._12_4_ & auVar58._12_4_;
        auVar41._16_4_ = ~auVar20._16_4_ & auVar58._16_4_;
        auVar41._20_4_ = ~auVar20._20_4_ & auVar58._20_4_;
        auVar41._24_4_ = ~auVar20._24_4_ & auVar58._24_4_;
        auVar41._28_4_ = ~auVar20._28_4_ & auVar58._28_4_;
        auVar42._0_8_ = (ulonglong)auVar95._0_8_ & auVar20._0_8_;
        auVar42._8_8_ = (ulonglong)auVar95._8_8_ & auVar20._8_8_;
        auVar42._16_8_ = (ulonglong)auVar52._0_8_ & auVar20._16_8_;
        auVar42._24_8_ = (ulonglong)auVar52._8_8_ & auVar20._24_8_;
        auVar42 = auVar42 | auVar41;
        auVar73 = vshufpd_avx(auVar80._16_16_,auVar80._16_16_,1);
        auVar39._0_8_ = __real_3ff0000000000000 - dVar61;
        dVar35 = auVar108._0_8_ * dVar61 + auVar39._0_8_ * auVar42._0_8_;
        dVar46 = auVar108._8_8_ * dVar61 + auVar39._0_8_ * auVar42._8_8_;
        dVar47 = auVar53._0_8_ * dVar61 + auVar39._0_8_ * auVar42._16_8_;
        dVar50 = auVar53._8_8_ * dVar61 + auVar39._0_8_ * auVar42._24_8_;
        auVar52._0_8_ = dVar35 * dVar35 + dVar47 * dVar47;
        auVar52._8_8_ = dVar46 * dVar46 + dVar50 * dVar50;
        auVar48 = vshufpd_avx(auVar52,auVar52,1);
        auVar39._0_8_ = auVar52._0_8_ + auVar48._0_8_;
        auVar48._8_8_ = 0;
        auVar48._0_8_ = auVar39._0_8_;
        auVar39._0_8_ = __real_3ff0000000000000 / SQRT(auVar39._0_8_);
        auVar123._8_8_ = 0;
        auVar123._0_8_ = __real_3e45798ee2308c3a;
        auVar48 = vcmpsd_avx(auVar123,auVar48,6);
        auVar108._0_8_ = ~auVar48._0_8_ & __real_ffffffffffffffff;
        auVar107._0_8_ = (ulonglong)(dVar35 * auVar39._0_8_) & auVar108._0_8_;
        auVar107._8_8_ = (ulonglong)(dVar46 * auVar39._0_8_) & auVar108._0_8_;
        auVar109._16_8_ = (ulonglong)(dVar47 * auVar39._0_8_) & auVar108._0_8_;
        auVar109._0_16_ = auVar107;
        auVar109._24_8_ = (ulonglong)(dVar50 * auVar39._0_8_) & auVar108._0_8_;
        auVar43._0_8_ =
             ~auVar108._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar43._8_8_ = ~auVar108._0_8_ & _UNK_150b54548;
        auVar43._16_8_ = ~auVar108._0_8_ & _UNK_150b54550;
        auVar43._24_8_ = ~auVar108._0_8_ & _UNK_150b54558;
        auVar53 = auVar109._16_16_ | auVar43._16_16_;
        auVar52 = vshufpd_avx(auVar76,auVar76,1);
        auVar95 = vshufps_avx(auVar53,auVar53,0x4e);
        auVar39._0_8_ = (double)auVar36._0_4_;
        dVar35 = auVar97._0_8_ * dVar61 + auVar37._0_8_ * auVar39._0_8_;
        dVar46 = auVar97._8_8_ * dVar61 + auVar37._8_8_ * auVar39._0_8_;
        dVar47 = auVar38._0_8_ * dVar61 + auVar119._0_8_ * auVar39._0_8_;
        dVar50 = auVar38._8_8_ * dVar61 + auVar119._8_8_ * auVar39._0_8_;
        auVar37._0_8_ = dVar35 * dVar35 + dVar47 * dVar47;
        auVar37._8_8_ = dVar46 * dVar46 + dVar50 * dVar50;
        auVar48 = vshufpd_avx(auVar37,auVar37,1);
        auVar39._0_8_ = auVar37._0_8_ + auVar48._0_8_;
        auVar38._8_8_ = 0;
        auVar38._0_8_ = auVar39._0_8_;
        auVar39._0_8_ = __real_3ff0000000000000 / SQRT(auVar39._0_8_);
        auVar48 = vunpcklpd_avx(auVar128,auVar18);
        auVar64._16_16_ = local_318;
        auVar64._0_16_ = auVar48;
        auVar25 = vpunpcklqdq_avx(local_2f8,local_328);
        auVar81._16_16_ = local_308;
        auVar81._0_16_ = auVar25;
        auVar20 = vsubpd_avx(auVar64,auVar81);
        auVar48 = vshufps_avx(auVar107,auVar107,0x4e);
        local_1f8 = auVar48._0_8_;
        auVar48 = vcmpsd_avx(auVar123,auVar38,6);
        local_1e8 = auVar95._0_8_;
        auVar108._0_8_ = ~auVar48._0_8_ & __real_ffffffffffffffff;
        local_348._0_8_ = (ulonglong)(dVar35 * auVar39._0_8_) & auVar108._0_8_;
        local_348._8_8_ = (ulonglong)(dVar46 * auVar39._0_8_) & auVar108._0_8_;
        auVar22._16_8_ = (ulonglong)(dVar47 * auVar39._0_8_) & auVar108._0_8_;
        auVar22._0_16_ = local_348;
        auVar22._24_8_ = (ulonglong)(dVar50 * auVar39._0_8_) & auVar108._0_8_;
        auVar44._0_8_ =
             ~auVar108._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar44._8_8_ = ~auVar108._0_8_ & _UNK_150b54548;
        auVar44._16_8_ = ~auVar108._0_8_ & _UNK_150b54550;
        auVar44._24_8_ = ~auVar108._0_8_ & _UNK_150b54558;
        auVar48 = auVar22._16_16_ | auVar44._16_16_;
        local_268._0_8_ = auVar25._0_8_ + auVar20._0_8_ * dVar61;
        local_268._8_8_ = auVar25._8_8_ + auVar20._8_8_ * dVar61;
        local_3e8 = (double)local_308._0_8_ + auVar20._16_8_ * dVar61;
        local_3d8 = vshufps_avx(local_348,local_348,0x4e);
        local_3c8 = vshufps_avx(auVar48,auVar48,0x4e);
        local_3f8 = vshufpd_avx(local_268,local_268,1);
        auVar108._0_8_ = auVar107._0_8_;
        local_2e8 = auVar53._0_8_;
        local_378 = auVar70._0_8_;
        local_368._0_8_ = auVar21._16_8_;
        local_2d8._0_8_ = auVar49._0_8_;
        local_1b8._0_8_ = auVar76._0_8_;
        local_2b8._0_8_ = auVar52._0_8_;
        local_298._0_8_ = auVar80._16_8_;
        local_2a8._0_8_ = auVar73._0_8_;
        local_288._0_8_ = auVar17._0_8_;
      }
      *(longlong *)(param_4 + lVar13 * 8) = auVar16._0_8_;
      *(undefined8 *)(param_4 + 8 + lVar13 * 8) = local_388._0_8_;
      *(undefined8 *)(param_4 + 0x10 + lVar13 * 8) = local_398._0_8_;
      *(undefined8 *)(param_4 + 0x18 + lVar13 * 8) = local_3a8._0_8_;
      *(longlong *)(param_6 + lVar13 * 8) = auVar54._0_8_;
      *(undefined8 *)(param_6 + 8 + lVar13 * 8) = local_2c8._0_8_;
      local_138 = auVar59._0_8_;
      *(undefined8 *)(param_6 + 0x10 + lVar13 * 8) = local_138;
      *(undefined8 *)(param_6 + 0x18 + lVar13 * 8) = local_3b8._0_8_;
      *(undefined8 *)(param_5 + lVar14) = local_2f8._0_8_;
      *(longlong *)(param_5 + 8 + lVar14) = local_328._0_8_;
      *(undefined8 *)(param_5 + 0x10 + lVar14) = local_308._0_8_;
      *(longlong *)(param_7 + lVar14) = auVar128._0_8_;
      *(longlong *)(param_7 + 8 + lVar14) = auVar18._0_8_;
      *(undefined8 *)(param_7 + 0x10 + lVar14) = local_318._0_8_;
      auVar39._0_8_ = (double)local_288._0_8_;
      if (iVar8 != -1) {
        pdVar1 = (double *)(param_8 + lVar15 * 0x20);
        pdVar2 = (double *)(param_8 + 0x10 + lVar15 * 0x20);
        auVar18._0_8_ =
             *pdVar1 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
        auVar18._8_8_ = pdVar1[1] * _UNK_150b543c8;
        auVar23._16_8_ = *pdVar2 * _UNK_150b543d0;
        auVar23._0_16_ = auVar18;
        auVar23._24_8_ = pdVar2[1] * _UNK_150b543d8;
        auVar58 = vperm2f128_avx(auVar23,auVar23,0x11);
        auVar49 = vmovlhps_avx(local_348,local_3d8);
        auVar106 = vunpcklpd_avx(auVar48,local_3c8);
        auVar122 = vunpcklpd_avx(local_3c8,auVar48);
        auVar70 = vmovlhps_avx(local_3d8,local_348);
        auVar108 = vshufpd_avx(auVar18,auVar18,3);
        auVar39._0_8_ = *(double *)(param_9 + 0x10 + lVar15 * 0x18);
        auVar25 = *(undefined1 (*) [16])(param_9 + lVar15 * 0x18);
        auVar120._16_8_ = auVar39._0_8_;
        auVar120._0_16_ = auVar25;
        auVar120._24_8_ = 0;
        dVar35 = auVar25._0_8_;
        auVar125._0_8_ =
             (ulonglong)dVar35 &
             ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
        dVar46 = auVar25._8_8_;
        auVar125._8_8_ = (ulonglong)dVar46 & _UNK_150aa8f48;
        auVar125._16_8_ = (ulonglong)auVar39._0_8_ & _UNK_150aa8f50;
        auVar125._24_8_ = 0;
        auVar32._8_8_ = __real_3e45798ee2308c3a;
        auVar32._0_8_ = __real_3e45798ee2308c3a;
        auVar32._16_8_ = __real_3e45798ee2308c3a;
        auVar32._24_8_ = __real_3e45798ee2308c3a;
        auVar20 = vcmppd_avx(auVar125,auVar32,2);
        auVar25 = vpackssdw_avx(auVar20._0_16_,auVar20._16_16_);
        auVar53 = vpcmpeqd_avx(local_328,local_328);
        auVar20 = vcmppd_avx(auVar120,
                             ___ymm_46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c
                             ,2);
        auVar73 = vpackssdw_avx(auVar20._0_16_,auVar20._16_16_);
        auVar98._8_8_ = __real_3914c4e977ba1f5c;
        auVar98._0_8_ = __real_3914c4e977ba1f5c;
        auVar98._16_8_ = __real_3914c4e977ba1f5c;
        auVar98._24_8_ = __real_3914c4e977ba1f5c;
        auVar20 = vcmppd_avx(auVar98,auVar120,2);
        auVar52 = vpackssdw_avx(auVar20._0_16_,auVar20._16_16_);
        auVar95 = vpand_avx(auVar73,auVar52);
        iVar9 = vmovmskps_avx(ZEXT1632(CONCAT412(~auVar25._12_4_ & auVar95._12_4_,
                                                 CONCAT48(~auVar25._8_4_ & auVar95._8_4_,
                                                          CONCAT44(~auVar25._4_4_ & auVar95._4_4_,
                                                                   ~auVar25._0_4_ & auVar95._0_4_)))
                                      ));
        if (iVar9 == 0) {
          auVar114 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
LAB_140abc794:
          auVar97._0_12_ = ZEXT812(0);
          auVar97._12_4_ = 0;
          auVar20 = vcmpps_avx(ZEXT1632(auVar97),ZEXT1632(auVar97),0xf);
          auVar124._0_4_ = auVar114._0_4_ ^ auVar20._0_4_;
          auVar124._4_4_ = auVar114._4_4_ ^ auVar20._4_4_;
          auVar124._8_4_ = auVar114._8_4_ ^ auVar20._8_4_;
          auVar124._12_4_ = auVar114._12_4_ ^ auVar20._12_4_;
          auVar126._16_4_ = auVar114._16_4_ ^ auVar20._16_4_;
          auVar126._0_16_ = auVar124;
          auVar126._20_4_ = auVar114._20_4_ ^ auVar20._20_4_;
          auVar126._24_4_ = auVar114._24_4_ ^ auVar20._24_4_;
          auVar126._28_4_ = auVar114._28_4_ ^ auVar20._28_4_;
          auVar113._0_8_ = (ulonglong)dVar35 & __real_7fe0000000000000;
          auVar113._8_8_ = (ulonglong)dVar46 & __real_7fe0000000000000;
          auVar95._0_8_ = (ulonglong)auVar39._0_8_ & __real_7fe0000000000000;
          auVar95._8_8_ = 0;
          auVar26._8_8_ = __real_7fcfffffffffffff;
          auVar26._0_8_ = __real_7fcfffffffffffff;
          auVar95 = vpsubq_avx(auVar26,auVar95);
          auVar53 = vpsubq_avx(auVar26,auVar113);
          auVar127 = vpsubq_avx(auVar26,ZEXT1216((undefined1  [12])0x0));
          auVar128 = vpsubq_avx(auVar26,ZEXT816(0));
          auVar129._0_8_ = dVar35 * auVar53._0_8_;
          auVar129._8_8_ = dVar46 * auVar53._8_8_;
          auVar129._16_8_ = auVar39._0_8_ * auVar95._0_8_;
          auVar129._24_8_ = auVar95._8_8_ * 0.0;
          auVar73 = vcvtpd2ps_avx(auVar129);
          auVar84._0_8_ = auVar128._0_8_ * 0.0;
          auVar84._8_8_ = auVar128._8_8_ * 0.0;
          auVar84._16_8_ = auVar127._0_8_ * 0.0;
          auVar84._24_8_ = auVar127._8_8_ * 0.0;
          auVar52 = vcvtpd2ps_avx(auVar84);
          auVar85._16_16_ = auVar52;
          auVar85._0_16_ = auVar73;
          auVar20 = vrcpps_avx(auVar85);
          auVar86._0_4_ = auVar20._0_4_ * auVar73._0_4_;
          auVar86._4_4_ = auVar20._4_4_ * auVar73._4_4_;
          auVar86._8_4_ = auVar20._8_4_ * auVar73._8_4_;
          auVar86._12_4_ = auVar20._12_4_ * auVar73._12_4_;
          auVar86._16_4_ = auVar20._16_4_ * auVar52._0_4_;
          auVar86._20_4_ = auVar20._20_4_ * auVar52._4_4_;
          auVar86._24_4_ = auVar20._24_4_ * auVar52._8_4_;
          auVar86._28_4_ = auVar20._28_4_ * auVar52._12_4_;
          auVar33._4_4_ = __real_40000000;
          auVar33._0_4_ = __real_40000000;
          auVar33._8_4_ = __real_40000000;
          auVar33._12_4_ = __real_40000000;
          auVar33._16_4_ = __real_40000000;
          auVar33._20_4_ = __real_40000000;
          auVar33._24_4_ = __real_40000000;
          auVar33._28_4_ = __real_40000000;
          auVar19 = vsubps_avx(auVar33,auVar86);
          auVar77._0_4_ = auVar20._0_4_ * auVar19._0_4_;
          auVar77._4_4_ = auVar20._4_4_ * auVar19._4_4_;
          auVar77._8_4_ = auVar20._8_4_ * auVar19._8_4_;
          auVar77._12_4_ = auVar20._12_4_ * auVar19._12_4_;
          auVar87._16_4_ = auVar20._16_4_ * auVar19._16_4_;
          auVar87._0_16_ = auVar77;
          auVar87._20_4_ = auVar20._20_4_ * auVar19._20_4_;
          auVar87._24_4_ = auVar20._24_4_ * auVar19._24_4_;
          auVar87._28_4_ = auVar20._28_4_ * auVar19._28_4_;
          auVar20 = vcvtps2pd_avx(auVar77);
          auVar19 = vcvtps2pd_avx(auVar87._16_16_);
          dVar47 = auVar19._0_8_ * auVar128._0_8_;
          dVar50 = auVar19._8_8_ * auVar128._8_8_;
          dVar61 = auVar19._16_8_ * auVar127._0_8_;
          dVar93 = auVar19._24_8_ * auVar127._8_8_;
          dVar74 = auVar53._0_8_ * auVar20._0_8_;
          dVar91 = auVar53._8_8_ * auVar20._8_8_;
          dVar92 = auVar95._0_8_ * auVar20._16_8_;
          dVar94 = auVar95._8_8_ * auVar20._24_8_;
          auVar115._0_8_ = dVar35 * dVar74;
          auVar115._8_8_ = dVar46 * dVar91;
          auVar115._16_8_ = auVar39._0_8_ * dVar92;
          auVar115._24_8_ = dVar94 * 0.0;
          auVar130._0_8_ = dVar47 * 0.0;
          auVar130._8_8_ = dVar50 * 0.0;
          auVar130._16_8_ = dVar61 * 0.0;
          auVar130._24_8_ = dVar93 * 0.0;
          auVar34._8_8_ = __real_4000000000000000;
          auVar34._0_8_ = __real_4000000000000000;
          auVar34._16_8_ = __real_4000000000000000;
          auVar34._24_8_ = __real_4000000000000000;
          auVar20 = vsubpd_avx(auVar34,auVar130);
          auVar19 = vsubpd_avx(auVar34,auVar115);
          dVar74 = dVar74 * auVar19._0_8_;
          dVar91 = dVar91 * auVar19._8_8_;
          dVar92 = dVar92 * auVar19._16_8_;
          dVar94 = dVar94 * auVar19._24_8_;
          dVar47 = auVar20._0_8_ * dVar47;
          dVar50 = auVar20._8_8_ * dVar50;
          dVar61 = auVar20._16_8_ * dVar61;
          dVar93 = auVar20._24_8_ * dVar93;
          auVar116._0_8_ = dVar47 * 0.0;
          auVar116._8_8_ = dVar50 * 0.0;
          auVar116._16_8_ = dVar61 * 0.0;
          auVar116._24_8_ = dVar93 * 0.0;
          auVar121._0_8_ = dVar35 * dVar74;
          auVar121._8_8_ = dVar46 * dVar91;
          auVar121._16_8_ = auVar39._0_8_ * dVar92;
          auVar121._24_8_ = dVar94 * 0.0;
          auVar20 = vsubpd_avx(auVar34,auVar121);
          auVar19 = vsubpd_avx(auVar34,auVar116);
          auVar69._0_8_ = auVar19._0_8_ * dVar47;
          auVar69._8_8_ = auVar19._8_8_ * dVar50;
          auVar69._16_8_ = auVar19._16_8_ * dVar61;
          auVar69._24_8_ = auVar19._24_8_ * dVar93;
          auVar88._0_8_ = dVar74 * auVar20._0_8_;
          auVar88._8_8_ = dVar91 * auVar20._8_8_;
          auVar88._16_8_ = dVar92 * auVar20._16_8_;
          auVar88._24_8_ = dVar94 * auVar20._24_8_;
          auVar39 = vshufps_avx(auVar124,auVar124,0x50);
          auVar73 = vshufps_avx(auVar124,auVar124,0xfa);
          auVar117._16_16_ = auVar73;
          auVar117._0_16_ = auVar39;
          local_1d8 = vblendvps_avx(local_1d8,auVar88,auVar117);
          auVar39 = vpshufd_avx(auVar126._16_16_,0x50);
          auVar73 = vpshufd_avx(auVar126._16_16_,0xfa);
          auVar89._16_16_ = auVar73;
          auVar89._0_16_ = auVar39;
          local_158 = vblendvps_avx(local_158,auVar69,auVar89);
        }
        else {
          auVar73 = vpackssdw_avx(auVar73,auVar53);
          auVar52 = vpackssdw_avx(auVar52,ZEXT816(0) << 0x40);
          auVar95 = vpand_avx(auVar52,auVar73);
          auVar73 = vcvtpd2ps_avx(auVar120);
          auVar52 = vcvtpd2ps_avx(ZEXT832(0) << 0x40);
          auVar65._16_16_ = auVar52;
          auVar65._0_16_ = auVar73;
          auVar20 = vrcpps_avx(auVar65);
          auVar53 = vpmovsxwd_avx(auVar95);
          auVar66._0_4_ = auVar20._0_4_ * auVar73._0_4_;
          auVar66._4_4_ = auVar20._4_4_ * auVar73._4_4_;
          auVar66._8_4_ = auVar20._8_4_ * auVar73._8_4_;
          auVar66._12_4_ = auVar20._12_4_ * auVar73._12_4_;
          auVar66._16_4_ = auVar20._16_4_ * auVar52._0_4_;
          auVar66._20_4_ = auVar20._20_4_ * auVar52._4_4_;
          auVar66._24_4_ = auVar20._24_4_ * auVar52._8_4_;
          auVar66._28_4_ = auVar20._28_4_ * auVar52._12_4_;
          auVar99._4_4_ = __real_40000000;
          auVar99._0_4_ = __real_40000000;
          auVar99._8_4_ = __real_40000000;
          auVar99._12_4_ = __real_40000000;
          auVar99._16_4_ = __real_40000000;
          auVar99._20_4_ = __real_40000000;
          auVar99._24_4_ = __real_40000000;
          auVar99._28_4_ = __real_40000000;
          auVar19 = vsubps_avx(auVar99,auVar66);
          auVar59._0_4_ = auVar20._0_4_ * auVar19._0_4_;
          auVar59._4_4_ = auVar20._4_4_ * auVar19._4_4_;
          auVar59._8_4_ = auVar20._8_4_ * auVar19._8_4_;
          auVar59._12_4_ = auVar20._12_4_ * auVar19._12_4_;
          auVar67._16_4_ = auVar20._16_4_ * auVar19._16_4_;
          auVar67._0_16_ = auVar59;
          auVar67._20_4_ = auVar20._20_4_ * auVar19._20_4_;
          auVar67._24_4_ = auVar20._24_4_ * auVar19._24_4_;
          auVar67._28_4_ = auVar20._28_4_ * auVar19._28_4_;
          auVar20 = vcvtps2pd_avx(auVar59);
          auVar100._0_8_ = dVar35 * auVar20._0_8_;
          auVar100._8_8_ = dVar46 * auVar20._8_8_;
          auVar100._16_8_ = auVar39._0_8_ * auVar20._16_8_;
          auVar100._24_8_ = auVar20._24_8_ * 0.0;
          auVar131._8_8_ = __real_4000000000000000;
          auVar131._0_8_ = __real_4000000000000000;
          auVar131._16_8_ = __real_4000000000000000;
          auVar131._24_8_ = __real_4000000000000000;
          auVar19 = vsubpd_avx(auVar131,auVar100);
          dVar47 = auVar19._0_8_ * auVar20._0_8_;
          dVar50 = auVar19._8_8_ * auVar20._8_8_;
          dVar61 = auVar19._16_8_ * auVar20._16_8_;
          dVar93 = auVar19._24_8_ * auVar20._24_8_;
          auVar101._0_8_ = dVar35 * dVar47;
          auVar101._8_8_ = dVar46 * dVar50;
          auVar101._16_8_ = auVar39._0_8_ * dVar61;
          auVar101._24_8_ = dVar93 * 0.0;
          auVar20 = vsubpd_avx(auVar131,auVar101);
          auVar82._0_8_ = dVar47 * auVar20._0_8_;
          auVar82._8_8_ = dVar50 * auVar20._8_8_;
          auVar82._16_8_ = dVar61 * auVar20._16_8_;
          auVar82._24_8_ = dVar93 * auVar20._24_8_;
          auVar73 = vpmovsxwq_avx(auVar95);
          auVar52 = vpshufd_avx(auVar53,0xfa);
          auVar102._16_16_ = auVar52;
          auVar102._0_16_ = auVar73;
          auVar20 = vcvtps2pd_avx(auVar67._16_16_);
          local_1d8 = vblendvps_avx(local_1d8,auVar82,auVar102);
          auVar52 = vpunpckhwd_avx(auVar95,auVar95);
          auVar103._0_8_ = auVar20._0_8_ * 0.0;
          auVar103._8_8_ = auVar20._8_8_ * 0.0;
          auVar103._16_8_ = auVar20._16_8_ * 0.0;
          auVar103._24_8_ = auVar20._24_8_ * 0.0;
          auVar19 = vsubpd_avx(auVar131,auVar103);
          dVar47 = auVar19._0_8_ * auVar20._0_8_;
          dVar50 = auVar19._8_8_ * auVar20._8_8_;
          dVar61 = auVar19._16_8_ * auVar20._16_8_;
          dVar93 = auVar19._24_8_ * auVar20._24_8_;
          auVar104._0_8_ = dVar47 * 0.0;
          auVar104._8_8_ = dVar50 * 0.0;
          auVar104._16_8_ = dVar61 * 0.0;
          auVar104._24_8_ = dVar93 * 0.0;
          auVar20 = vsubpd_avx(auVar131,auVar104);
          auVar68._0_8_ = auVar20._0_8_ * dVar47;
          auVar68._8_8_ = auVar20._8_8_ * dVar50;
          auVar68._16_8_ = auVar20._16_8_ * dVar61;
          auVar68._24_8_ = auVar20._24_8_ * dVar93;
          auVar73 = vpshufd_avx(auVar52,0x50);
          auVar52 = vpshufd_avx(auVar52,0xfa);
          auVar83._16_16_ = auVar52;
          auVar83._0_16_ = auVar73;
          local_158 = vblendvps_avx(local_158,auVar68,auVar83);
          auVar20 = vcmppd_avx(auVar125,auVar32,6);
          auVar73 = vpackssdw_avx(auVar20._0_16_,auVar20._16_16_);
          auVar52 = vpackssdw_avx(auVar73,___xmm_00000000000000000000000000000000);
          auVar73 = vpacksswb_avx(auVar52,auVar52);
          if ((byte)(SUB161(auVar73 >> 7,0) & 1 | (SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar73 >> 0x17,0) & 1) << 2 | (SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar73 >> 0x27,0) & 1) << 4 | (SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar73 >> 0x37,0) & 1) << 6 | SUB161(auVar73 >> 0x3f,0) << 7) !=
              (byte)iVar9) {
            auVar73 = vpand_avx(auVar95,auVar52);
            auVar52 = vpmovsxwd_avx(auVar73);
            auVar73 = vpunpckhwd_avx(auVar73,auVar73);
            auVar114._16_16_ = auVar73;
            auVar114._0_16_ = auVar52;
            goto LAB_140abc794;
          }
          auVar97 = (undefined1  [16])0x0;
        }
        auVar20 = vshufpd_avx(auVar58,auVar58,0xf);
        dVar35 = auVar49._0_8_ * auVar20._0_8_ +
                 auVar122._0_8_ * auVar18._0_8_ *
                 ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000 +
                 auVar106._0_8_ * auVar108._0_8_ *
                 ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                 auVar70._0_8_ * auVar58._0_8_ *
                 ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
        dVar46 = auVar49._8_8_ * auVar20._8_8_ + auVar122._8_8_ * auVar18._0_8_ * _UNK_150b543e8 +
                 auVar106._8_8_ * auVar108._8_8_ * _UNK_150b54408 +
                 auVar70._8_8_ * auVar58._0_8_ * _UNK_150b54428;
        dVar47 = auVar106._0_8_ * auVar20._16_8_ + auVar70._0_8_ * auVar18._0_8_ * _UNK_150b543f0 +
                 auVar49._0_8_ * auVar108._0_8_ * _UNK_150b54410 +
                 auVar122._0_8_ * auVar58._16_8_ * _UNK_150b54430;
        dVar50 = auVar106._8_8_ * auVar20._24_8_ + auVar70._8_8_ * auVar18._0_8_ * _UNK_150b543f8 +
                 auVar49._8_8_ * auVar108._8_8_ * _UNK_150b54418 +
                 auVar122._8_8_ * auVar58._16_8_ * _UNK_150b54438;
        auVar55._0_8_ = dVar35 * dVar35 + dVar47 * dVar47;
        auVar55._8_8_ = dVar46 * dVar46 + dVar50 * dVar50;
        auVar39 = vshufpd_avx(auVar55,auVar55,1);
        auVar39._0_8_ = auVar55._0_8_ + auVar39._0_8_;
        auVar63._8_8_ = 0;
        auVar63._0_8_ = __real_3e45798ee2308c3a;
        auVar56._8_8_ = 0;
        auVar56._0_8_ = auVar39._0_8_;
        auVar49 = vcmpsd_avx(auVar63,auVar56,6);
        uVar62 = ~auVar49._0_8_ & __real_ffffffffffffffff;
        auVar39._0_8_ = __real_3ff0000000000000 / SQRT(auVar39._0_8_);
        auVar108._0_8_ = (ulonglong)(dVar35 * auVar39._0_8_) & uVar62;
        auVar108._8_8_ = (ulonglong)(dVar46 * auVar39._0_8_) & uVar62;
        auVar110._16_8_ = (ulonglong)(dVar47 * auVar39._0_8_) & uVar62;
        auVar110._0_16_ = auVar108;
        auVar110._24_8_ = (ulonglong)(dVar50 * auVar39._0_8_) & uVar62;
        auVar45._0_8_ =
             ~uVar62 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar45._8_8_ = ~uVar62 & _UNK_150b54548;
        auVar45._16_8_ = ~uVar62 & _UNK_150b54550;
        auVar45._24_8_ = ~uVar62 & _UNK_150b54558;
        auVar49 = auVar110._16_16_ | auVar45._16_16_;
        auVar39 = vshufps_avx(auVar108,auVar108,0x4e);
        local_1f8 = auVar39._0_8_;
        local_2e8 = auVar49._0_8_;
        auVar39 = vshufps_avx(auVar49,auVar49,0x4e);
        local_1e8 = auVar39._0_8_;
        auVar39 = vshufps_avx(auVar25,auVar25,0x50);
        auVar25 = vshufps_avx(auVar25,auVar25,0xfa);
        auVar24._16_16_ = auVar25;
        auVar24._0_16_ = auVar39;
        auVar20 = vblendvps_avx(local_1d8,ZEXT1632(auVar97),auVar24);
        auVar25 = vmovlhps_avx(local_268,local_3f8);
        auVar39._0_8_ = auVar25._0_8_ * auVar20._0_8_;
        auVar39._8_8_ = auVar25._8_8_ * auVar20._8_8_;
        local_368._0_8_ = local_3e8 * auVar20._16_8_;
        auVar25 = vshufpd_avx(auVar39,auVar39,1);
        local_378 = auVar25._0_8_;
        local_2d8._0_8_ = 0;
      }
      *(undefined8 *)(param_8 + lVar13 * 8) = local_348._0_8_;
      *(undefined8 *)(param_8 + 8 + lVar13 * 8) = local_3d8._0_8_;
      *(longlong *)(param_8 + 0x10 + lVar13 * 8) = auVar48._0_8_;
      *(undefined8 *)(param_8 + 0x18 + lVar13 * 8) = local_3c8._0_8_;
      *(undefined8 *)(param_9 + lVar14) = local_268._0_8_;
      *(undefined8 *)(param_9 + 8 + lVar14) = local_3f8._0_8_;
      *(double *)(param_9 + 0x10 + lVar14) = local_3e8;
      *(ulonglong *)(param_1 + lVar14 * 4) = auVar108._0_8_;
      *(ulonglong *)(param_1 + 8 + lVar14 * 4) = local_1f8;
      *(ulonglong *)(param_1 + 0x10 + lVar14 * 4) = local_2e8;
      *(ulonglong *)(param_1 + 0x18 + lVar14 * 4) = local_1e8;
      *(undefined8 *)(param_1 + 0x20 + lVar14 * 4) = local_1b8._0_8_;
      *(undefined8 *)(param_1 + 0x28 + lVar14 * 4) = local_2b8._0_8_;
      *(undefined8 *)(param_1 + 0x30 + lVar14 * 4) = local_298._0_8_;
      *(undefined8 *)(param_1 + 0x38 + lVar14 * 4) = local_2a8._0_8_;
      *(double *)(param_1 + 0x40 + lVar14 * 4) = auVar39._0_8_;
      *(ulonglong *)(param_1 + 0x48 + lVar14 * 4) = local_378;
      *(undefined8 *)(param_1 + 0x50 + lVar14 * 4) = local_368._0_8_;
      *(undefined8 *)(param_1 + 0x58 + lVar14 * 4) = local_2d8._0_8_;
      iVar12 = iVar12 + 1;
      lVar14 = lVar14 + 0x18;
      lVar13 = lVar13 + 4;
    } while ((ulonglong)param_13 * 0x18 != lVar14);
  }
  return;
}

// BlendPosesPerBoneFilterRotation_avx @ 140abca20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterRotation_avx
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10)

{
  double *pdVar1;
  double *pdVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar24;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar25;
  double dVar28;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar26 [16];
  undefined1 auVar23 [32];
  undefined1 auVar27 [16];
  double dVar29;
  double dVar40;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar36 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  ulonglong uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined8 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar70 [64];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar75 [64];
  float fVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [32];
  undefined1 auVar80 [64];
  undefined8 uVar81;
  undefined1 auVar82 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  ulonglong local_238;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1b8 [16];
  ulonglong local_188;
  ulonglong local_178;
  undefined1 local_168 [16];
  undefined1 local_148 [16];
  undefined1 local_108 [16];
  undefined1 auVar18 [32];
  undefined1 auVar22 [32];
  undefined1 auVar37 [32];
  undefined1 auVar57 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar74 [32];
  
  if (0 < (int)param_10) {
    lVar11 = 0;
    lVar13 = 0x2c;
    iVar10 = 0;
    do {
      iVar6 = *(int *)(param_8 + lVar11 * 2);
      iVar7 = *(int *)(param_9 + lVar11);
      lVar12 = (longlong)iVar7;
      local_1b8._0_8_ = *(ulonglong *)(param_2 + -0x58 + lVar13 * 2);
      local_1b8._8_8_ = 0;
      local_148._0_8_ = *(double *)(param_2 + -0x38 + lVar13 * 2);
      local_148._8_8_ = 0;
      local_228._0_8_ = *(ulonglong *)(param_2 + -0x30 + lVar13 * 2);
      local_228._8_8_ = 0;
      local_1d8._0_8_ = *(double *)(param_2 + -0x28 + lVar13 * 2);
      local_1d8._8_8_ = 0;
      local_218._0_8_ = *(ulonglong *)(param_2 + -0x20 + lVar13 * 2);
      local_218._8_8_ = 0;
      local_108._0_8_ = *(double *)(param_2 + -0x18 + lVar13 * 2);
      local_108._8_8_ = 0;
      local_1f8._0_8_ = *(ulonglong *)(param_2 + -0x10 + lVar13 * 2);
      local_1f8._8_8_ = 0;
      local_1e8._0_8_ = *(double *)(param_2 + -8 + lVar13 * 2);
      local_1e8._8_8_ = 0;
      local_208._0_8_ = *(ulonglong *)(param_2 + lVar13 * 2);
      local_208._8_8_ = 0;
      auVar70 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar13 * 2));
      auVar75 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar13 * 2));
      auVar80 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar13 * 2));
      puVar8 = (ulonglong *)GetTransformFromArray(param_3,iVar6,iVar10);
      auVar64._0_8_ = *puVar8;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = auVar64._0_8_;
      local_178 = puVar8[1];
      auVar51._8_8_ = 0;
      auVar51._0_8_ = local_178;
      local_238 = puVar8[2];
      auVar61._8_8_ = 0;
      auVar61._0_8_ = local_238;
      local_188 = puVar8[3];
      auVar27._8_8_ = 0;
      auVar27._0_8_ = local_188;
      auVar34 = auVar70._0_16_;
      auVar50 = auVar75._0_16_;
      auVar59 = auVar80._0_16_;
      if (lVar12 == -1) {
        auVar52 = vmovlhps_avx(local_1b8,auVar34);
        auVar32 = vmovlhps_avx(auVar59,auVar50);
        auVar33 = vmovlhps_avx(auVar50,auVar59);
        auVar78 = vmovlhps_avx(auVar34,local_1b8);
        local_168._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar78._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar32._0_8_ * 0.0 +
             auVar33._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar52._0_8_;
        local_168._8_8_ =
             _UNK_150b54428 * auVar78._8_8_ * 0.0 +
             _UNK_150b54408 * auVar32._8_8_ * 0.0 +
             auVar33._8_8_ * 0.0 * _UNK_15076c6f8 + auVar52._8_8_;
        auVar66._16_8_ =
             _UNK_150b54430 * auVar33._0_8_ * 0.0 +
             _UNK_150b54410 * auVar52._0_8_ * 0.0 +
             auVar78._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000 + auVar32._0_8_;
        auVar66._0_16_ = local_168;
        auVar66._24_8_ =
             _UNK_150b54438 * auVar33._8_8_ * 0.0 +
             _UNK_150b54418 * auVar52._8_8_ * 0.0 +
             auVar78._8_8_ * 0.0 * _UNK_15076c6f8 + auVar32._8_8_;
        local_278 = vshufpd_avx(local_168,local_168,1);
        auVar52 = vunpcklpd_avx(auVar71,auVar51);
        auVar32 = vunpcklpd_avx(auVar61,auVar27);
        auVar33 = vunpcklpd_avx(auVar27,auVar61);
        auVar78 = vunpcklpd_avx(auVar51,auVar71);
        auVar17 = auVar66._16_16_;
        local_288 = vshufpd_avx(auVar17,auVar17,1);
        dVar14 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                 auVar32._0_8_ * 0.0 +
                 auVar52._0_8_ + auVar33._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        dVar24 = _UNK_150b54408 * auVar32._8_8_ * 0.0 +
                 auVar52._8_8_ + auVar33._8_8_ * 0.0 * _UNK_15076c6f8;
        dVar25 = _UNK_150b54410 * auVar52._0_8_ * 0.0 +
                 auVar32._0_8_ + auVar78._0_8_ * 0.0 * ___xmm_bff00000000000003ff0000000000000;
        dVar28 = _UNK_150b54418 * auVar52._8_8_ * 0.0 +
                 auVar32._8_8_ + auVar78._8_8_ * 0.0 * _UNK_15076c6f8;
        dVar29 = auVar78._0_8_ * 0.0;
        dVar40 = auVar78._8_8_ * 0.0;
        dVar41 = auVar33._0_8_ * 0.0;
        dVar42 = auVar33._8_8_ * 0.0;
      }
      else {
        lVar9 = lVar12 * 0x20;
        dVar42 = *(double *)(param_4 + 0x18 + lVar9);
        auVar52 = vmovlhps_avx(local_1b8,auVar34);
        auVar32 = vmovlhps_avx(auVar59,auVar50);
        dVar14 = *(double *)(param_4 + lVar9);
        auVar33 = vmovlhps_avx(auVar50,auVar59);
        auVar78 = vmovlhps_avx(auVar34,local_1b8);
        dVar24 = *(double *)(param_4 + 8 + lVar9);
        dVar25 = *(double *)(param_4 + 0x10 + lVar9);
        local_168._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar78._0_8_ * dVar25 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             dVar24 * auVar32._0_8_ +
             auVar33._0_8_ * dVar14 * ___xmm_bff00000000000003ff0000000000000 +
             auVar52._0_8_ * dVar42;
        local_168._8_8_ =
             _UNK_150b54428 * auVar78._8_8_ * dVar25 +
             _UNK_150b54408 * dVar24 * auVar32._8_8_ +
             auVar33._8_8_ * dVar14 * _UNK_15076c6f8 + auVar52._8_8_ * dVar42;
        auVar65._16_8_ =
             _UNK_150b54430 * auVar33._0_8_ * dVar25 +
             _UNK_150b54410 * dVar24 * auVar52._0_8_ +
             auVar78._0_8_ * dVar14 * ___xmm_bff00000000000003ff0000000000000 +
             auVar32._0_8_ * dVar42;
        auVar65._0_16_ = local_168;
        auVar65._24_8_ =
             _UNK_150b54438 * auVar33._8_8_ * dVar25 +
             _UNK_150b54418 * dVar24 * auVar52._8_8_ +
             auVar78._8_8_ * dVar14 * _UNK_15076c6f8 + auVar32._8_8_ * dVar42;
        dVar42 = *(double *)(param_5 + 0x18 + lVar9);
        auVar52 = vunpcklpd_avx(auVar71,auVar51);
        auVar32 = vunpcklpd_avx(auVar61,auVar27);
        dVar28 = *(double *)(param_5 + lVar9);
        auVar33 = vunpcklpd_avx(auVar27,auVar61);
        auVar78 = vunpcklpd_avx(auVar51,auVar71);
        local_278 = vshufpd_avx(local_168,local_168,1);
        auVar17 = auVar65._16_16_;
        dVar29 = *(double *)(param_5 + 8 + lVar9);
        dVar14 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                 auVar32._0_8_ * dVar29 +
                 auVar52._0_8_ * dVar42 +
                 auVar33._0_8_ * dVar28 * ___xmm_bff00000000000003ff0000000000000;
        dVar24 = _UNK_150b54408 * auVar32._8_8_ * dVar29 +
                 auVar52._8_8_ * dVar42 + auVar33._8_8_ * dVar28 * _UNK_15076c6f8;
        dVar25 = _UNK_150b54410 * auVar52._0_8_ * dVar29 +
                 auVar32._0_8_ * dVar42 +
                 auVar78._0_8_ * dVar28 * ___xmm_bff00000000000003ff0000000000000;
        dVar28 = _UNK_150b54418 * auVar52._8_8_ * dVar29 +
                 auVar32._8_8_ * dVar42 + auVar78._8_8_ * dVar28 * _UNK_15076c6f8;
        dVar42 = *(double *)(param_5 + 0x10 + lVar9);
        local_288 = vshufpd_avx(auVar17,auVar17,1);
        dVar29 = auVar78._0_8_ * dVar42;
        dVar40 = auVar78._8_8_ * dVar42;
        dVar41 = auVar33._0_8_ * dVar42;
        dVar42 = auVar33._8_8_ * dVar42;
      }
      auVar15._0_8_ =
           ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 * dVar29 + dVar14
      ;
      auVar15._8_8_ = _UNK_150b54428 * dVar40 + dVar24;
      auVar18._16_8_ = _UNK_150b54430 * dVar41 + dVar25;
      auVar18._0_16_ = auVar15;
      auVar18._24_8_ = _UNK_150b54438 * dVar42 + dVar28;
      auVar33 = vshufpd_avx(auVar15,auVar15,1);
      auVar26 = auVar18._16_16_;
      auVar78 = vshufpd_avx(auVar26,auVar26,1);
      dVar42 = (double)puVar8[4];
      auVar30._8_8_ = 0;
      auVar30._0_8_ = dVar42;
      uVar43 = puVar8[5];
      auVar49._8_8_ = 0;
      auVar49._0_8_ = uVar43;
      dVar14 = (double)puVar8[6];
      auVar82._8_8_ = 0;
      auVar82._0_8_ = dVar14;
      uVar3 = puVar8[7];
      auVar47._8_8_ = 0;
      auVar47._0_8_ = uVar3;
      dVar24 = (double)puVar8[8];
      auVar44._8_8_ = 0;
      auVar44._0_8_ = dVar24;
      uVar4 = puVar8[9];
      auVar72._8_8_ = 0;
      auVar72._0_8_ = uVar4;
      auVar52 = vmaxss_avx(ZEXT816(0) << 0x40,ZEXT416(*(uint *)(param_8 + 4 + lVar11 * 2)));
      dVar25 = (double)puVar8[10];
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar25;
      auVar32 = vminss_avx(auVar52,ZEXT416((uint)__real_3f800000));
      auVar52 = vmaxss_avx(auVar32,ZEXT416(*(uint *)(param_7 + (longlong)iVar6 * 4)));
      uVar5 = puVar8[0xb];
      auVar48._8_8_ = 0;
      auVar48._0_8_ = uVar5;
      *(int *)(param_7 + (longlong)iVar6 * 4) = auVar52._0_4_;
      fVar76 = auVar32._0_4_;
      uVar81 = auVar33._0_8_;
      uVar58 = auVar78._0_8_;
      if (fVar76 <= __real_3727c5ac) {
        local_178 = auVar70._0_8_;
        local_188 = auVar75._0_8_;
        auVar78 = local_288;
        auVar64._0_8_ = local_1b8._0_8_;
        auVar52 = local_168;
        auVar33 = local_278;
        auVar26 = auVar17;
        local_238 = auVar80._0_8_;
        dVar42 = (double)local_148._0_8_;
        uVar43 = local_228._0_8_;
        dVar14 = (double)local_1d8._0_8_;
        uVar3 = local_218._0_8_;
        dVar24 = (double)local_108._0_8_;
        uVar4 = local_1f8._0_8_;
        dVar25 = (double)local_1e8._0_8_;
        uVar5 = local_208._0_8_;
      }
      else {
        auVar52 = auVar15;
        if (fVar76 < __real_3f7fff58) {
          auVar64 = vunpcklpd_avx(auVar59,auVar50);
          auVar50 = vunpcklpd_avx(local_1b8,auVar34);
          auVar67._16_16_ = auVar64;
          auVar67._0_16_ = auVar50;
          auVar59 = vunpcklpd_avx(auVar61,auVar27);
          auVar61 = vunpcklpd_avx(auVar71,auVar51);
          auVar53._0_8_ = auVar50._0_8_ * auVar61._0_8_;
          auVar53._8_8_ = auVar50._8_8_ * auVar61._8_8_;
          auVar53._16_8_ = auVar64._0_8_ * auVar59._0_8_;
          auVar53._24_8_ = auVar64._8_8_ * auVar59._8_8_;
          auVar66 = vperm2f128_avx(auVar53,auVar53,1);
          auVar54._0_8_ = auVar66._0_8_ + auVar53._0_8_;
          auVar54._8_8_ = auVar66._8_8_ + auVar53._8_8_;
          auVar54._16_8_ = auVar66._16_8_ + auVar53._16_8_;
          auVar54._24_8_ = auVar66._24_8_ + auVar53._24_8_;
          auVar66 = vperm2f128_avx(auVar54,auVar54,1);
          auVar66 = vshufpd_avx(auVar54,auVar66,5);
          auVar55._0_8_ = auVar66._0_8_ + auVar54._0_8_;
          auVar55._8_8_ = auVar66._8_8_ + auVar54._8_8_;
          auVar55._16_8_ = auVar66._16_8_ + auVar54._16_8_;
          auVar55._24_8_ = auVar66._24_8_ + auVar54._24_8_;
          auVar66 = vcmppd_avx(ZEXT832(0) << 0x20,auVar55,2);
          auVar51 = vpackssdw_avx(auVar66._0_16_,auVar66._16_16_);
          auVar27 = vpshufd_avx(auVar51,0x50);
          auVar51 = vpshufd_avx(auVar51,0xfa);
          auVar56._16_16_ = auVar51;
          auVar56._0_16_ = auVar27;
          auVar20 = ZEXT832(0) << 0x20;
          auVar66 = vcmpps_avx(ZEXT832(0) << 0x20,auVar20,0xf);
          auVar66 = vblendvps_avx(auVar20,auVar66,auVar56);
          auVar51 = vunpcklpd_avx(local_1e8,local_208);
          auVar27 = vunpcklpd_avx(local_108,local_1f8);
          auVar79._16_16_ = auVar51;
          auVar79._0_16_ = auVar27;
          auVar34 = vunpcklpd_avx(auVar16,auVar48);
          auVar71 = vunpcklpd_avx(auVar44,auVar72);
          auVar19._16_16_ = auVar34;
          auVar19._0_16_ = auVar71;
          auVar65 = vsubpd_avx(auVar19,auVar79);
          dVar24 = (double)fVar76;
          auVar73._0_8_ = auVar27._0_8_ + dVar24 * auVar65._0_8_;
          auVar73._8_8_ = auVar27._8_8_ + dVar24 * auVar65._8_8_;
          auVar74._16_8_ = auVar51._0_8_ + dVar24 * auVar65._16_8_;
          auVar74._0_16_ = auVar73;
          auVar74._24_8_ = auVar51._8_8_ + dVar24 * auVar65._24_8_;
          auVar52 = vunpcklpd_avx(local_1d8,local_218);
          auVar34 = vshufpd_avx(auVar74._16_16_,auVar74._16_16_,1);
          auVar32 = vunpcklpd_avx(local_148,local_228);
          auVar71 = vshufpd_avx(auVar73,auVar73,1);
          auVar46._16_16_ = auVar52;
          auVar46._0_16_ = auVar32;
          auVar51 = vmovlhps_avx(auVar82,auVar47);
          auVar27 = vmovlhps_avx(auVar30,auVar49);
          auVar36._16_16_ = auVar51;
          auVar36._0_16_ = auVar27;
          auVar65 = vsubpd_avx(auVar36,auVar46);
          auVar31._0_8_ = auVar32._0_8_ + dVar24 * auVar65._0_8_;
          auVar31._8_8_ = auVar32._8_8_ + dVar24 * auVar65._8_8_;
          auVar37._16_8_ = auVar52._0_8_ + dVar24 * auVar65._16_8_;
          auVar37._0_16_ = auVar31;
          auVar37._24_8_ = auVar52._8_8_ + dVar24 * auVar65._24_8_;
          dVar14 = __real_3ff0000000000000 - dVar24;
          auVar65 = vsubpd_avx(auVar20,auVar67);
          auVar38._0_4_ = ~auVar66._0_4_ & auVar65._0_4_;
          auVar38._4_4_ = ~auVar66._4_4_ & auVar65._4_4_;
          auVar38._8_4_ = ~auVar66._8_4_ & auVar65._8_4_;
          auVar38._12_4_ = ~auVar66._12_4_ & auVar65._12_4_;
          auVar38._16_4_ = ~auVar66._16_4_ & auVar65._16_4_;
          auVar38._20_4_ = ~auVar66._20_4_ & auVar65._20_4_;
          auVar38._24_4_ = ~auVar66._24_4_ & auVar65._24_4_;
          auVar38._28_4_ = ~auVar66._28_4_ & auVar65._28_4_;
          auVar39._0_8_ = (ulonglong)auVar50._0_8_ & auVar66._0_8_;
          auVar39._8_8_ = (ulonglong)auVar50._8_8_ & auVar66._8_8_;
          auVar39._16_8_ = (ulonglong)auVar64._0_8_ & auVar66._16_8_;
          auVar39._24_8_ = (ulonglong)auVar64._8_8_ & auVar66._24_8_;
          auVar39 = auVar39 | auVar38;
          auVar52 = vunpcklpd_avx(auVar17,local_288);
          auVar32 = vunpcklpd_avx(local_168,local_278);
          auVar78 = vunpcklpd_avx(auVar26,auVar78);
          auVar33 = vunpcklpd_avx(auVar15,auVar33);
          auVar50._0_8_ = auVar33._0_8_ * auVar32._0_8_ + auVar78._0_8_ * auVar52._0_8_;
          auVar50._8_8_ = auVar33._8_8_ * auVar32._8_8_ + auVar78._8_8_ * auVar52._8_8_;
          auVar51 = vshufpd_avx(auVar50,auVar50,1);
          dVar42 = auVar51._0_8_ + auVar50._0_8_;
          auVar50 = vshufpd_avx(auVar37._16_16_,auVar37._16_16_,1);
          auVar26._0_4_ = (float)dVar42;
          auVar26._4_4_ = (int)((ulonglong)dVar42 >> 0x20);
          auVar26._8_8_ = 0;
          dVar25 = dVar24 * auVar61._0_8_ + dVar14 * auVar39._0_8_;
          dVar28 = dVar24 * auVar61._8_8_ + dVar14 * auVar39._8_8_;
          dVar29 = dVar24 * auVar59._0_8_ + dVar14 * auVar39._16_8_;
          dVar14 = dVar24 * auVar59._8_8_ + dVar14 * auVar39._24_8_;
          auVar62._0_4_ = (uint)(__real_3f800000 - fVar76) ^ __xmm_80000000800000008000000080000000;
          auVar62._4_4_ = _UNK_150651574;
          auVar62._8_4_ = _UNK_150651578;
          auVar62._12_4_ = _UNK_15065157c;
          auVar51 = vcmpss_avx(ZEXT816(0) << 0x20,auVar26,2);
          auVar51 = vblendvps_avx(auVar62,ZEXT416((uint)(__real_3f800000 - fVar76)),auVar51);
          auVar59._0_8_ = dVar29 * dVar29 + dVar25 * dVar25;
          auVar59._8_8_ = dVar14 * dVar14 + dVar28 * dVar28;
          auVar27 = vshufpd_avx(auVar59,auVar59,1);
          dVar42 = auVar27._0_8_ + auVar59._0_8_;
          auVar60._8_8_ = 0;
          auVar60._0_8_ = dVar42;
          dVar42 = __real_3ff0000000000000 / SQRT(dVar42);
          auVar77._8_8_ = 0;
          auVar77._0_8_ = __real_3e45798ee2308c3a;
          auVar27 = vcmpsd_avx(auVar77,auVar60,6);
          auVar64._0_8_ = ~auVar27._0_8_ & __real_ffffffffffffffff;
          auVar63._0_8_ = (ulonglong)(dVar42 * dVar25) & auVar64._0_8_;
          auVar63._8_8_ = (ulonglong)(dVar42 * dVar28) & auVar64._0_8_;
          auVar68._16_8_ = (ulonglong)(dVar42 * dVar29) & auVar64._0_8_;
          auVar68._0_16_ = auVar63;
          auVar68._24_8_ = (ulonglong)(dVar42 * dVar14) & auVar64._0_8_;
          auVar20._0_8_ =
               ~auVar64._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar20._8_8_ = ~auVar64._0_8_ & _UNK_150b54548;
          auVar20._16_8_ = ~auVar64._0_8_ & _UNK_150b54550;
          auVar20._24_8_ = ~auVar64._0_8_ & _UNK_150b54558;
          auVar61 = auVar68._16_16_ | auVar20._16_16_;
          auVar59 = vpermilpd_avx(auVar31,1);
          auVar27 = vshufps_avx(auVar61,auVar61,0x4e);
          auVar64 = vshufps_avx(auVar63,auVar63,0x4e);
          local_178 = auVar64._0_8_;
          dVar42 = (double)auVar51._0_4_;
          dVar14 = dVar24 * auVar33._0_8_ + auVar32._0_8_ * dVar42;
          dVar25 = dVar24 * auVar33._8_8_ + auVar32._8_8_ * dVar42;
          dVar28 = dVar24 * auVar78._0_8_ + auVar52._0_8_ * dVar42;
          dVar24 = dVar24 * auVar78._8_8_ + auVar52._8_8_ * dVar42;
          auVar32._0_8_ = dVar14 * dVar14 + dVar28 * dVar28;
          auVar32._8_8_ = dVar25 * dVar25 + dVar24 * dVar24;
          auVar51 = vshufpd_avx(auVar32,auVar32,1);
          dVar42 = auVar32._0_8_ + auVar51._0_8_;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = dVar42;
          auVar51 = vcmpsd_avx(auVar77,auVar33,6);
          local_188 = auVar27._0_8_;
          auVar64._0_8_ = ~auVar51._0_8_ & __real_ffffffffffffffff;
          dVar42 = __real_3ff0000000000000 / SQRT(dVar42);
          auVar52._0_8_ = (ulonglong)(dVar14 * dVar42) & auVar64._0_8_;
          auVar52._8_8_ = (ulonglong)(dVar25 * dVar42) & auVar64._0_8_;
          auVar57._16_8_ = (ulonglong)(dVar28 * dVar42) & auVar64._0_8_;
          auVar57._0_16_ = auVar52;
          auVar57._24_8_ = (ulonglong)(dVar24 * dVar42) & auVar64._0_8_;
          auVar21._0_8_ =
               ~auVar64._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar21._8_8_ = ~auVar64._0_8_ & _UNK_150b54548;
          auVar21._16_8_ = ~auVar64._0_8_ & _UNK_150b54550;
          auVar21._24_8_ = ~auVar64._0_8_ & _UNK_150b54558;
          auVar26 = auVar57._16_16_ | auVar21._16_16_;
          auVar33 = vshufps_avx(auVar52,auVar52,0x4e);
          auVar78 = vshufps_avx(auVar26,auVar26,0x4e);
          auVar64._0_8_ = auVar63._0_8_;
          local_238 = auVar61._0_8_;
          dVar42 = auVar31._0_8_;
          uVar43 = auVar59._0_8_;
          dVar14 = auVar37._16_8_;
          uVar3 = auVar50._0_8_;
          dVar24 = auVar73._0_8_;
          uVar4 = auVar71._0_8_;
          dVar25 = auVar74._16_8_;
          uVar5 = auVar34._0_8_;
        }
      }
      local_208._0_8_ = uVar5;
      local_1e8._0_8_ = dVar25;
      local_1f8._0_8_ = uVar4;
      local_108._0_8_ = dVar24;
      local_218._0_8_ = uVar3;
      local_1d8._0_8_ = dVar14;
      local_228._0_8_ = uVar43;
      local_148._0_8_ = dVar42;
      *(undefined8 *)(param_4 + lVar11 * 8) = local_168._0_8_;
      *(undefined8 *)(param_4 + 8 + lVar11 * 8) = local_278._0_8_;
      *(longlong *)(param_4 + 0x10 + lVar11 * 8) = auVar17._0_8_;
      *(undefined8 *)(param_4 + 0x18 + lVar11 * 8) = local_288._0_8_;
      *(double *)(param_5 + lVar11 * 8) = auVar15._0_8_;
      *(undefined8 *)(param_5 + 8 + lVar11 * 8) = uVar81;
      *(double *)(param_5 + 0x10 + lVar11 * 8) = auVar18._16_8_;
      *(undefined8 *)(param_5 + 0x18 + lVar11 * 8) = uVar58;
      if (iVar7 != -1) {
        pdVar1 = (double *)(param_6 + lVar12 * 0x20);
        pdVar2 = (double *)(param_6 + 0x10 + lVar12 * 0x20);
        auVar17._0_8_ =
             *pdVar1 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
        auVar17._8_8_ = pdVar1[1] * _UNK_150b543c8;
        auVar22._16_8_ = *pdVar2 * _UNK_150b543d0;
        auVar22._0_16_ = auVar17;
        auVar22._24_8_ = pdVar2[1] * _UNK_150b543d8;
        auVar65 = vperm2f128_avx(auVar22,auVar22,0x11);
        auVar66 = vshufpd_avx(auVar65,auVar65,0xf);
        auVar27 = vunpcklpd_avx(auVar52,auVar33);
        auVar34 = vunpcklpd_avx(auVar26,auVar78);
        auVar64 = vunpcklpd_avx(auVar78,auVar26);
        auVar71 = vunpcklpd_avx(auVar33,auVar52);
        auVar51 = vshufpd_avx(auVar17,auVar17,3);
        dVar14 = auVar71._0_8_ * auVar65._0_8_ *
                 ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                 auVar34._0_8_ * auVar51._0_8_ *
                 ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                 auVar27._0_8_ * auVar66._0_8_ +
                 auVar64._0_8_ * auVar17._0_8_ *
                 ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
        dVar24 = auVar71._8_8_ * auVar65._0_8_ * _UNK_150b54428 +
                 auVar34._8_8_ * auVar51._8_8_ * _UNK_150b54408 +
                 auVar27._8_8_ * auVar66._8_8_ + auVar64._8_8_ * auVar17._0_8_ * _UNK_150b543e8;
        dVar25 = auVar64._0_8_ * auVar65._16_8_ * _UNK_150b54430 +
                 auVar27._0_8_ * auVar51._0_8_ * _UNK_150b54410 +
                 auVar34._0_8_ * auVar66._16_8_ + auVar71._0_8_ * auVar17._0_8_ * _UNK_150b543f0;
        dVar28 = auVar64._8_8_ * auVar65._16_8_ * _UNK_150b54438 +
                 auVar27._8_8_ * auVar51._8_8_ * _UNK_150b54418 +
                 auVar34._8_8_ * auVar66._24_8_ + auVar71._8_8_ * auVar17._0_8_ * _UNK_150b543f8;
        auVar34._0_8_ = dVar14 * dVar14 + dVar25 * dVar25;
        auVar34._8_8_ = dVar24 * dVar24 + dVar28 * dVar28;
        auVar51 = vshufpd_avx(auVar34,auVar34,1);
        dVar42 = auVar34._0_8_ + auVar51._0_8_;
        auVar45._8_8_ = 0;
        auVar45._0_8_ = __real_3e45798ee2308c3a;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = dVar42;
        auVar51 = vcmpsd_avx(auVar45,auVar35,6);
        uVar43 = ~auVar51._0_8_ & __real_ffffffffffffffff;
        dVar42 = __real_3ff0000000000000 / SQRT(dVar42);
        auVar64._0_8_ = (ulonglong)(dVar14 * dVar42) & uVar43;
        auVar64._8_8_ = (ulonglong)(dVar24 * dVar42) & uVar43;
        auVar69._16_8_ = (ulonglong)(dVar25 * dVar42) & uVar43;
        auVar69._0_16_ = auVar64;
        auVar69._24_8_ = (ulonglong)(dVar28 * dVar42) & uVar43;
        auVar23._0_8_ =
             ~uVar43 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar23._8_8_ = ~uVar43 & _UNK_150b54548;
        auVar23._16_8_ = ~uVar43 & _UNK_150b54550;
        auVar23._24_8_ = ~uVar43 & _UNK_150b54558;
        auVar27 = auVar69._16_16_ | auVar23._16_16_;
        local_238 = auVar27._0_8_;
        auVar51 = vshufps_avx(auVar64,auVar64,0x4e);
        local_178 = auVar51._0_8_;
        auVar51 = vshufps_avx(auVar27,auVar27,0x4e);
        local_188 = auVar51._0_8_;
      }
      *(longlong *)(param_6 + lVar11 * 8) = auVar52._0_8_;
      *(longlong *)(param_6 + 8 + lVar11 * 8) = auVar33._0_8_;
      *(longlong *)(param_6 + 0x10 + lVar11 * 8) = auVar26._0_8_;
      *(longlong *)(param_6 + 0x18 + lVar11 * 8) = auVar78._0_8_;
      *(ulonglong *)(param_1 + -0x58 + lVar13 * 2) = auVar64._0_8_;
      *(ulonglong *)(param_1 + -0x50 + lVar13 * 2) = local_178;
      *(ulonglong *)(param_1 + -0x48 + lVar13 * 2) = local_238;
      *(ulonglong *)(param_1 + -0x40 + lVar13 * 2) = local_188;
      *(undefined8 *)(param_1 + -0x38 + lVar13 * 2) = local_148._0_8_;
      *(undefined8 *)(param_1 + -0x30 + lVar13 * 2) = local_228._0_8_;
      *(undefined8 *)(param_1 + -0x28 + lVar13 * 2) = local_1d8._0_8_;
      *(undefined8 *)(param_1 + -0x20 + lVar13 * 2) = local_218._0_8_;
      *(undefined8 *)(param_1 + -0x18 + lVar13 * 2) = local_108._0_8_;
      *(undefined8 *)(param_1 + -0x10 + lVar13 * 2) = local_1f8._0_8_;
      *(undefined8 *)(param_1 + -8 + lVar13 * 2) = local_1e8._0_8_;
      *(undefined8 *)(param_1 + lVar13 * 2) = local_208._0_8_;
      iVar10 = iVar10 + 1;
      lVar13 = lVar13 + 0x30;
      lVar11 = lVar11 + 4;
    } while ((ulonglong)param_10 << 2 != lVar11);
  }
  return;
}

// BlendPosesPerBoneFilterScale_avx @ 140abd610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScale_avx
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [24];
  int iVar11;
  ulonglong *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar31;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  double dVar32;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  double dVar44;
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar57 [16];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [32];
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar71;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  double dVar70;
  undefined1 auVar72 [16];
  double dVar73;
  undefined1 auVar69 [32];
  undefined1 auVar76 [16];
  double dVar74;
  undefined1 auVar75 [16];
  double dVar85;
  double dVar86;
  double dVar87;
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar88 [16];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [64];
  ulonglong uVar95;
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [64];
  double dVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  double dVar106;
  undefined1 auVar105 [64];
  undefined1 auVar107 [16];
  undefined1 auVar108 [32];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [32];
  float fVar114;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  ulonglong local_208;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 local_188 [16];
  undefined1 local_168 [16];
  undefined1 local_148 [32];
  undefined1 local_108 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar56 [32];
  undefined1 auVar82 [32];
  undefined1 auVar111 [32];
  
  if (0 < (int)param_10) {
    lVar13 = 0;
    lVar15 = 0;
    do {
      iVar11 = *(int *)(param_8 + lVar15 * 8);
      iVar7 = *(int *)(param_9 + lVar15 * 4);
      lVar14 = (longlong)iVar7;
      local_188._0_8_ = *(ulonglong *)(param_2 + lVar13 * 4);
      local_188._8_8_ = 0;
      local_1f8._0_8_ = *(ulonglong *)(param_2 + 8 + lVar13 * 4);
      local_1f8._8_8_ = 0;
      local_1e8._0_8_ = *(ulonglong *)(param_2 + 0x10 + lVar13 * 4);
      local_1e8._8_8_ = 0;
      local_1a8._8_8_ = 0;
      local_1a8._0_8_ = *(ulonglong *)(param_2 + 0x18 + lVar13 * 4);
      dVar45 = *(double *)(param_2 + 0x20 + lVar13 * 4);
      local_1d8._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar13 * 4);
      local_1d8._8_8_ = 0;
      local_288._0_8_ = *(double *)(param_2 + 0x30 + lVar13 * 4);
      local_168._0_8_ = *(double *)(param_2 + 0x40 + lVar13 * 4);
      local_168._8_8_ = 0;
      local_218._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar13 * 4);
      local_218._8_8_ = 0;
      local_288._8_8_ = 0;
      auVar94 = ZEXT864(*(ulonglong *)(param_2 + 0x50 + lVar13 * 4));
      auVar101 = ZEXT864(*(ulonglong *)(param_2 + 0x38 + lVar13 * 4));
      auVar105 = ZEXT864(*(ulonglong *)(param_2 + 0x48 + lVar13 * 4));
      puVar12 = (ulonglong *)GetTransformFromArray(param_3,iVar11,(int)lVar15);
      uVar95 = auVar101._0_8_;
      dVar19 = (double)puVar12[8];
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar19;
      uVar33 = puVar12[9];
      auVar103._8_8_ = 0;
      auVar103._0_8_ = uVar33;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = puVar12[10];
      auVar17 = auVar105._0_16_;
      local_208 = auVar105._0_8_;
      auVar57 = auVar94._0_16_;
      if (lVar14 == -1) {
        local_228._8_8_ = 0;
        local_228._0_8_ = local_168._0_8_;
        local_278 = auVar17;
        local_268 = auVar58;
        local_258 = auVar57;
        local_248 = auVar103;
        local_238 = auVar16;
      }
      else {
        lVar8 = lVar14 * 0x18;
        auVar46 = vunpcklpd_avx(local_168,auVar17);
        local_228._0_8_ = auVar46._0_8_ * *(double *)(param_4 + lVar8);
        local_228._8_8_ = auVar46._8_8_ * ((double *)(param_4 + lVar8))[1];
        local_258._8_8_ = 0;
        local_258._0_8_ = auVar94._0_8_ * *(double *)(param_4 + 0x10 + lVar8);
        auVar46 = vunpcklpd_avx(auVar16,auVar103);
        local_238._0_8_ = auVar46._0_8_ * *(double *)(param_5 + lVar8);
        local_238._8_8_ = auVar46._8_8_ * ((double *)(param_5 + lVar8))[1];
        local_278 = vshufpd_avx(local_228,local_228,1);
        local_248 = vshufpd_avx(local_238,local_238,1);
        local_268._8_8_ = 0;
        local_268._0_8_ = (double)puVar12[10] * *(double *)(param_5 + 0x10 + lVar8);
      }
      uVar1 = *puVar12;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = uVar1;
      uVar2 = puVar12[1];
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar2;
      uVar3 = puVar12[2];
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar3;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = puVar12[3];
      auVar21._0_8_ = (double)puVar12[4];
      auVar107._8_8_ = 0;
      auVar107._0_8_ = auVar21._0_8_;
      uVar4 = puVar12[5];
      auVar104._8_8_ = 0;
      auVar104._0_8_ = uVar4;
      dVar31 = (double)puVar12[6];
      auVar112._8_8_ = 0;
      auVar112._0_8_ = dVar31;
      auVar46._0_12_ = ZEXT812(0);
      auVar46._12_4_ = 0;
      auVar46 = vmaxss_avx(auVar46,ZEXT416(*(uint *)(param_8 + 4 + lVar15 * 8)));
      uVar5 = puVar12[7];
      auVar62._8_8_ = 0;
      auVar62._0_8_ = uVar5;
      auVar35 = vminss_avx(auVar46,ZEXT416(__real_3f800000));
      auVar46 = vmaxss_avx(auVar35,ZEXT416(*(uint *)(param_7 + (longlong)iVar11 * 4)));
      uVar6 = puVar12[0xb];
      auVar109._8_8_ = 0;
      auVar109._0_8_ = uVar6;
      *(int *)(param_7 + (longlong)iVar11 * 4) = auVar46._0_4_;
      fVar114 = auVar35._0_4_;
      dVar44 = local_258._0_8_;
      if (fVar114 <= __real_3727c5ac) {
        auVar18 = ZEXT1632(ZEXT816(0));
        auVar17 = local_228;
        auVar16 = local_278;
        dVar19 = dVar44;
      }
      else if (__real_3f7fff58 <= fVar114) {
        local_1a8 = auVar59;
        auVar18 = ZEXT1632(ZEXT816(0));
        dVar45 = auVar21._0_8_;
        auVar17 = local_238;
        auVar57 = auVar58;
        auVar16 = local_248;
        local_208 = uVar33;
        local_168._0_8_ = dVar19;
        local_218._0_8_ = uVar6;
        local_188._0_8_ = uVar1;
        local_1f8._0_8_ = uVar2;
        local_1e8._0_8_ = uVar3;
        local_1d8._0_8_ = uVar4;
        dVar19 = (double)local_268._0_8_;
        local_288._0_8_ = dVar31;
        uVar95 = uVar5;
      }
      else {
        auVar36 = vunpcklpd_avx(local_1e8,local_1a8);
        auVar21 = vunpcklpd_avx(local_188,local_1f8);
        auVar51._16_16_ = auVar36;
        auVar51._0_16_ = auVar21;
        auVar34 = vunpcklpd_avx(auVar34,auVar59);
        auVar20 = vunpcklpd_avx(auVar75,auVar20);
        auVar22._0_8_ = auVar21._0_8_ * auVar20._0_8_;
        auVar22._8_8_ = auVar21._8_8_ * auVar20._8_8_;
        auVar22._16_8_ = auVar36._0_8_ * auVar34._0_8_;
        auVar22._24_8_ = auVar36._8_8_ * auVar34._8_8_;
        auVar18 = vperm2f128_avx(auVar22,auVar22,1);
        auVar23._0_8_ = auVar22._0_8_ + auVar18._0_8_;
        auVar23._8_8_ = auVar22._8_8_ + auVar18._8_8_;
        auVar23._16_8_ = auVar22._16_8_ + auVar18._16_8_;
        auVar23._24_8_ = auVar22._24_8_ + auVar18._24_8_;
        auVar18 = vperm2f128_avx(auVar23,auVar23,1);
        auVar18 = vshufpd_avx(auVar23,auVar18,5);
        auVar24._0_8_ = auVar23._0_8_ + auVar18._0_8_;
        auVar24._8_8_ = auVar23._8_8_ + auVar18._8_8_;
        auVar24._16_8_ = auVar23._16_8_ + auVar18._16_8_;
        auVar24._24_8_ = auVar23._24_8_ + auVar18._24_8_;
        auVar18 = vcmppd_avx(ZEXT832(0) << 0x40,auVar24,2);
        auVar46 = vpackssdw_avx(auVar18._0_16_,auVar18._16_16_);
        auVar35 = vpshufd_avx(auVar46,0x50);
        auVar46 = vpshufd_avx(auVar46,0xfa);
        auVar25._16_16_ = auVar46;
        auVar25._0_16_ = auVar35;
        auVar18 = vcmpps_avx(ZEXT832(0) << 0x40,ZEXT832(0) << 0x40,0xf);
        auVar22 = vblendvps_avx(ZEXT832(0) << 0x40,auVar18,auVar25);
        auVar57 = vunpcklpd_avx(auVar57,local_218);
        auVar17 = vunpcklpd_avx(local_168,auVar17);
        auVar26._16_16_ = auVar57;
        auVar26._0_16_ = auVar17;
        auVar58 = vunpcklpd_avx(auVar58,auVar109);
        auVar16 = vunpcklpd_avx(auVar16,auVar103);
        auVar18._16_16_ = auVar58;
        auVar18._0_16_ = auVar16;
        auVar18 = vsubpd_avx(auVar18,auVar26);
        dVar102 = (double)fVar114;
        auVar47._0_8_ = auVar17._0_8_ + auVar18._0_8_ * dVar102;
        auVar47._8_8_ = auVar17._8_8_ + auVar18._8_8_ * dVar102;
        auVar52._16_8_ = auVar57._0_8_ + auVar18._16_8_ * dVar102;
        auVar52._0_16_ = auVar47;
        auVar52._24_8_ = auVar57._8_8_ + auVar18._24_8_ * dVar102;
        auVar57 = auVar52._16_16_;
        auVar16 = vunpcklpd_avx(local_288,auVar101._0_16_);
        auVar103 = vshufpd_avx(auVar57,auVar57,1);
        auVar35._8_8_ = 0;
        auVar35._0_8_ = dVar45;
        auVar17 = vunpcklpd_avx(auVar35,local_1d8);
        auVar58 = vshufpd_avx(auVar47,auVar47,1);
        auVar27._16_16_ = auVar16;
        auVar27._0_16_ = auVar17;
        auVar46 = vunpcklpd_avx(auVar112,auVar62);
        auVar35 = vunpcklpd_avx(auVar107,auVar104);
        auVar18 = ZEXT1632(ZEXT816(0));
        auVar38._16_16_ = auVar46;
        auVar38._0_16_ = auVar35;
        auVar23 = vsubpd_avx(auVar38,auVar27);
        auVar110._0_8_ = auVar17._0_8_ + auVar23._0_8_ * dVar102;
        auVar110._8_8_ = auVar17._8_8_ + auVar23._8_8_ * dVar102;
        auVar111._16_8_ = auVar16._0_8_ + auVar23._16_8_ * dVar102;
        auVar111._0_16_ = auVar110;
        auVar111._24_8_ = auVar16._8_8_ + auVar23._24_8_ * dVar102;
        auVar46 = vshufpd_avx(auVar111._16_16_,auVar111._16_16_,1);
        auVar35 = vshufpd_avx(auVar110,auVar110,1);
        dVar45 = __real_3ff0000000000000 - dVar102;
        auVar23 = vsubpd_avx(ZEXT1632(ZEXT816(0)),auVar51);
        local_1a8._0_8_ = auVar22._0_8_;
        local_1a8._8_8_ = auVar22._8_8_;
        auStack_198._0_8_ = auVar22._16_8_;
        auStack_198._8_8_ = auVar22._24_8_;
        dVar19 = auVar20._0_8_ * dVar102 +
                 dVar45 * (double)((ulonglong)auVar21._0_8_ & local_1a8._0_8_ |
                                  ~local_1a8._0_8_ & auVar23._0_8_);
        auVar21._0_8_ =
             auVar20._8_8_ * dVar102 +
             dVar45 * (double)((ulonglong)auVar21._8_8_ & local_1a8._8_8_ |
                              ~local_1a8._8_8_ & auVar23._8_8_);
        dVar31 = auVar34._0_8_ * dVar102 +
                 dVar45 * (double)((ulonglong)auVar36._0_8_ & auStack_198._0_8_ |
                                  ~auStack_198._0_8_ & auVar23._16_8_);
        dVar32 = auVar34._8_8_ * dVar102 +
                 dVar45 * (double)((ulonglong)auVar36._8_8_ & auStack_198._8_8_ |
                                  ~auStack_198._8_8_ & auVar23._24_8_);
        auVar36._0_8_ = dVar19 * dVar19 + dVar31 * dVar31;
        auVar36._8_8_ = auVar21._0_8_ * auVar21._0_8_ + dVar32 * dVar32;
        auVar16 = vshufpd_avx(auVar36,auVar36,1);
        dVar45 = auVar36._0_8_ + auVar16._0_8_;
        auVar37._8_8_ = 0;
        auVar37._0_8_ = dVar45;
        dVar45 = __real_3ff0000000000000 / SQRT(dVar45);
        auVar48._8_8_ = 0;
        auVar48._0_8_ = __real_3e45798ee2308c3a;
        auVar16 = vcmpsd_avx(auVar48,auVar37,6);
        uVar33 = ~auVar16._0_8_ & __real_ffffffffffffffff;
        auVar49._0_8_ = (ulonglong)(dVar19 * dVar45) & uVar33;
        auVar49._8_8_ = (ulonglong)(auVar21._0_8_ * dVar45) & uVar33;
        auVar53._16_8_ = (ulonglong)(dVar31 * dVar45) & uVar33;
        auVar53._0_16_ = auVar49;
        auVar53._24_8_ = (ulonglong)(dVar32 * dVar45) & uVar33;
        auVar28._0_8_ =
             ~uVar33 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar28._8_8_ = ~uVar33 & _UNK_150b54548;
        auVar28._16_8_ = ~uVar33 & _UNK_150b54550;
        auVar28._24_8_ = ~uVar33 & _UNK_150b54558;
        auVar21 = auVar53._16_16_ | auVar28._16_16_;
        local_1a8 = vshufps_avx(auVar21,auVar21,0x4e);
        auStack_198 = auVar22._16_16_;
        auVar20 = vshufps_avx(auVar49,auVar49,0x4e);
        auVar16 = vunpcklpd_avx(local_238,local_248);
        auVar29._16_16_ = local_268;
        auVar29._0_16_ = auVar16;
        auVar16 = vunpcklpd_avx(local_228,local_278);
        auVar39._16_16_ = local_258;
        auVar39._0_16_ = auVar16;
        auVar22 = vsubpd_avx(auVar29,auVar39);
        auVar17._0_8_ = auVar16._0_8_ + auVar22._0_8_ * dVar102;
        auVar17._8_8_ = auVar16._8_8_ + auVar22._8_8_ * dVar102;
        auVar16 = vshufpd_avx(auVar17,auVar17,1);
        dVar45 = auVar110._0_8_;
        local_208 = auVar58._0_8_;
        local_168._0_8_ = auVar47._0_8_;
        local_218._0_8_ = auVar103._0_8_;
        local_188._0_8_ = auVar49._0_8_;
        local_1f8._0_8_ = auVar20._0_8_;
        local_1e8._0_8_ = auVar21._0_8_;
        local_1d8._0_8_ = auVar35._0_8_;
        dVar19 = dVar44 + auVar22._16_8_ * dVar102;
        local_288._0_8_ = auVar111._16_8_;
        uVar95 = auVar46._0_8_;
      }
      dVar31 = auVar57._0_8_;
      *(longlong *)(param_4 + lVar13) = local_228._0_8_;
      *(longlong *)(param_4 + 8 + lVar13) = local_278._0_8_;
      *(double *)(param_4 + 0x10 + lVar13) = dVar44;
      *(undefined8 *)(param_5 + lVar13) = local_238._0_8_;
      *(undefined8 *)(param_5 + 8 + lVar13) = local_248._0_8_;
      *(undefined8 *)(param_5 + 0x10 + lVar13) = local_268._0_8_;
      auVar108._8_8_ = __real_3e45798ee2308c3a;
      auVar108._0_8_ = __real_3e45798ee2308c3a;
      auVar108._16_8_ = __real_3e45798ee2308c3a;
      auVar108._24_8_ = __real_3e45798ee2308c3a;
      auVar21._0_8_ = (double)local_168._0_8_;
      if (iVar7 != -1) {
        auVar21._0_8_ = *(double *)(param_6 + 0x10 + lVar14 * 0x18);
        auVar103 = *(undefined1 (*) [16])(param_6 + lVar14 * 0x18);
        auVar40._16_8_ = auVar21._0_8_;
        auVar40._0_16_ = auVar103;
        auVar40._24_8_ = 0;
        dVar31 = auVar103._0_8_;
        auVar54._0_8_ =
             (ulonglong)dVar31 &
             ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
        dVar44 = auVar103._8_8_;
        auVar54._8_8_ = (ulonglong)dVar44 & _UNK_150aa8f48;
        auVar54._16_8_ = (ulonglong)auVar21._0_8_ & _UNK_150aa8f50;
        auVar54._24_8_ = 0;
        auVar22 = vcmppd_avx(auVar54,auVar108,2);
        auVar103 = vpackssdw_avx(auVar22._0_16_,auVar22._16_16_);
        auVar35 = vpcmpeqd_avx(auVar57,auVar57);
        auVar22 = vcmppd_avx(auVar40,
                             ___ymm_46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c46c8a6e32246c99c
                             ,2);
        auVar57 = vpackssdw_avx(auVar22._0_16_,auVar22._16_16_);
        auVar64._8_8_ = __real_3914c4e977ba1f5c;
        auVar64._0_8_ = __real_3914c4e977ba1f5c;
        auVar64._16_8_ = __real_3914c4e977ba1f5c;
        auVar64._24_8_ = __real_3914c4e977ba1f5c;
        auVar22 = vcmppd_avx(auVar64,auVar40,2);
        auVar58 = vpackssdw_avx(auVar22._0_16_,auVar22._16_16_);
        auVar46 = vpand_avx(auVar57,auVar58);
        iVar11 = vmovmskps_avx(ZEXT1632(CONCAT412(~auVar103._12_4_ & auVar46._12_4_,
                                                  CONCAT48(~auVar103._8_4_ & auVar46._8_4_,
                                                           CONCAT44(~auVar103._4_4_ & auVar46._4_4_,
                                                                    ~auVar103._0_4_ & auVar46._0_4_)
                                                          ))));
        dVar32 = auVar18._8_8_;
        dVar102 = auVar18._16_8_;
        dVar106 = auVar18._24_8_;
        if (iVar11 == 0) {
          auVar55 = ZEXT832(0) << 0x40;
LAB_140abdf2f:
          auVar22 = vcmpps_avx(auVar18,auVar18,0xf);
          auVar50._0_8_ = auVar55._0_8_ ^ auVar22._0_8_;
          auVar50._8_8_ = auVar55._8_8_ ^ auVar22._8_8_;
          auVar56._16_8_ = auVar55._16_8_ ^ auVar22._16_8_;
          auVar56._0_16_ = auVar50;
          auVar56._24_8_ = auVar55._24_8_ ^ auVar22._24_8_;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulonglong)dVar32 & __real_7fe0000000000000;
          auVar10._8_8_ = (ulonglong)dVar102 & __real_7fe0000000000000;
          auVar10._0_8_ = (ulonglong)dVar32 & __real_7fe0000000000000;
          auVar10._16_8_ = (ulonglong)dVar106 & __real_7fe0000000000000;
          auVar63._0_8_ = (ulonglong)dVar31 & __real_7fe0000000000000;
          auVar63._8_8_ = (ulonglong)dVar44 & __real_7fe0000000000000;
          auVar72._0_8_ = (ulonglong)auVar21._0_8_ & __real_7fe0000000000000;
          auVar72._8_8_ = 0;
          auVar88._8_8_ = __real_7fcfffffffffffff;
          auVar88._0_8_ = __real_7fcfffffffffffff;
          auVar46 = vpsubq_avx(auVar88,auVar72);
          auVar35 = vpsubq_avx(auVar88,auVar63);
          auVar20 = vpsubq_avx(auVar88,auVar10._8_16_);
          auVar34 = vpsubq_avx(auVar88,auVar9 << 0x40);
          auVar79._0_8_ = dVar31 * auVar35._0_8_;
          auVar79._8_8_ = dVar44 * auVar35._8_8_;
          auVar79._16_8_ = auVar21._0_8_ * auVar46._0_8_;
          auVar79._24_8_ = auVar46._8_8_ * 0.0;
          auVar57 = vcvtpd2ps_avx(auVar79);
          auVar92._0_8_ = auVar34._0_8_ * 0.0;
          auVar92._8_8_ = dVar32 * auVar34._8_8_;
          auVar92._16_8_ = dVar102 * auVar20._0_8_;
          auVar92._24_8_ = dVar106 * auVar20._8_8_;
          auVar58 = vcvtpd2ps_avx(auVar92);
          auVar80._16_16_ = auVar58;
          auVar80._0_16_ = auVar57;
          auVar22 = vrcpps_avx(auVar80);
          auVar81._0_4_ = auVar22._0_4_ * auVar57._0_4_;
          auVar81._4_4_ = auVar22._4_4_ * auVar57._4_4_;
          auVar81._8_4_ = auVar22._8_4_ * auVar57._8_4_;
          auVar81._12_4_ = auVar22._12_4_ * auVar57._12_4_;
          auVar81._16_4_ = auVar22._16_4_ * auVar58._0_4_;
          auVar81._20_4_ = auVar22._20_4_ * auVar58._4_4_;
          auVar81._24_4_ = auVar22._24_4_ * auVar58._8_4_;
          auVar81._28_4_ = auVar22._28_4_ * auVar58._12_4_;
          auVar99._4_4_ = __real_40000000;
          auVar99._0_4_ = __real_40000000;
          auVar99._8_4_ = __real_40000000;
          auVar99._12_4_ = __real_40000000;
          auVar99._16_4_ = __real_40000000;
          auVar99._20_4_ = __real_40000000;
          auVar99._24_4_ = __real_40000000;
          auVar99._28_4_ = __real_40000000;
          auVar23 = vsubps_avx(auVar99,auVar81);
          auVar76._0_4_ = auVar22._0_4_ * auVar23._0_4_;
          auVar76._4_4_ = auVar22._4_4_ * auVar23._4_4_;
          auVar76._8_4_ = auVar22._8_4_ * auVar23._8_4_;
          auVar76._12_4_ = auVar22._12_4_ * auVar23._12_4_;
          auVar82._16_4_ = auVar22._16_4_ * auVar23._16_4_;
          auVar82._0_16_ = auVar76;
          auVar82._20_4_ = auVar22._20_4_ * auVar23._20_4_;
          auVar82._24_4_ = auVar22._24_4_ * auVar23._24_4_;
          auVar82._28_4_ = auVar22._28_4_ * auVar23._28_4_;
          auVar22 = vcvtps2pd_avx(auVar76);
          auVar23 = vcvtps2pd_avx(auVar82._16_16_);
          dVar74 = auVar34._0_8_ * auVar23._0_8_;
          dVar85 = auVar34._8_8_ * auVar23._8_8_;
          dVar86 = auVar20._0_8_ * auVar23._16_8_;
          dVar87 = auVar20._8_8_ * auVar23._24_8_;
          dVar61 = auVar35._0_8_ * auVar22._0_8_;
          dVar70 = auVar35._8_8_ * auVar22._8_8_;
          dVar71 = auVar46._0_8_ * auVar22._16_8_;
          dVar73 = auVar46._8_8_ * auVar22._24_8_;
          auVar83._0_8_ = dVar31 * dVar61;
          auVar83._8_8_ = dVar44 * dVar70;
          auVar83._16_8_ = auVar21._0_8_ * dVar71;
          auVar83._24_8_ = dVar73 * 0.0;
          auVar93._0_8_ = dVar74 * 0.0;
          auVar93._8_8_ = dVar32 * dVar85;
          auVar93._16_8_ = dVar102 * dVar86;
          auVar93._24_8_ = dVar106 * dVar87;
          auVar100._8_8_ = __real_4000000000000000;
          auVar100._0_8_ = __real_4000000000000000;
          auVar100._16_8_ = __real_4000000000000000;
          auVar100._24_8_ = __real_4000000000000000;
          auVar22 = vsubpd_avx(auVar100,auVar93);
          auVar23 = vsubpd_avx(auVar100,auVar83);
          dVar61 = dVar61 * auVar23._0_8_;
          dVar70 = dVar70 * auVar23._8_8_;
          dVar71 = dVar71 * auVar23._16_8_;
          dVar73 = dVar73 * auVar23._24_8_;
          dVar74 = dVar74 * auVar22._0_8_;
          dVar85 = dVar85 * auVar22._8_8_;
          dVar86 = dVar86 * auVar22._16_8_;
          dVar87 = dVar87 * auVar22._24_8_;
          auVar84._0_8_ = dVar74 * 0.0;
          auVar84._8_8_ = dVar32 * dVar85;
          auVar84._16_8_ = dVar102 * dVar86;
          auVar84._24_8_ = dVar106 * dVar87;
          auVar41._0_8_ = dVar31 * dVar61;
          auVar41._8_8_ = dVar44 * dVar70;
          auVar41._16_8_ = auVar21._0_8_ * dVar71;
          auVar41._24_8_ = dVar73 * 0.0;
          auVar22 = vsubpd_avx(auVar100,auVar41);
          auVar23 = vsubpd_avx(auVar100,auVar84);
          auVar60._0_8_ = dVar74 * auVar23._0_8_;
          auVar60._8_8_ = dVar85 * auVar23._8_8_;
          auVar60._16_8_ = dVar86 * auVar23._16_8_;
          auVar60._24_8_ = dVar87 * auVar23._24_8_;
          auVar42._0_8_ = dVar61 * auVar22._0_8_;
          auVar42._8_8_ = dVar70 * auVar22._8_8_;
          auVar42._16_8_ = dVar71 * auVar22._16_8_;
          auVar42._24_8_ = dVar73 * auVar22._24_8_;
          auVar57 = vshufps_avx(auVar50,auVar50,0x50);
          auVar58 = vshufps_avx(auVar50,auVar50,0xfa);
          auVar69._16_16_ = auVar58;
          auVar69._0_16_ = auVar57;
          local_108 = vblendvps_avx(local_108,auVar42,auVar69);
          auVar58 = auVar56._16_16_;
          auVar57 = vshufps_avx(auVar58,auVar58,0x50);
          auVar58 = vshufps_avx(auVar58,auVar58,0xfa);
          auVar43._16_16_ = auVar58;
          auVar43._0_16_ = auVar57;
          local_148 = vblendvps_avx(local_148,auVar60,auVar43);
        }
        else {
          auVar57 = vpackssdw_avx(auVar57,auVar35);
          auVar58 = vpackssdw_avx(auVar58,ZEXT416(0) << 0x20);
          auVar46 = vpand_avx(auVar57,auVar58);
          auVar57 = vcvtpd2ps_avx(auVar40);
          auVar58 = vcvtpd2ps_avx(auVar18);
          auVar65._16_16_ = auVar58;
          auVar65._0_16_ = auVar57;
          auVar22 = vrcpps_avx(auVar65);
          auVar35 = vpmovsxwd_avx(auVar46);
          auVar66._0_4_ = auVar22._0_4_ * auVar57._0_4_;
          auVar66._4_4_ = auVar22._4_4_ * auVar57._4_4_;
          auVar66._8_4_ = auVar22._8_4_ * auVar57._8_4_;
          auVar66._12_4_ = auVar22._12_4_ * auVar57._12_4_;
          auVar66._16_4_ = auVar22._16_4_ * auVar58._0_4_;
          auVar66._20_4_ = auVar22._20_4_ * auVar58._4_4_;
          auVar66._24_4_ = auVar22._24_4_ * auVar58._8_4_;
          auVar66._28_4_ = auVar22._28_4_ * auVar58._12_4_;
          auVar96._4_4_ = __real_40000000;
          auVar96._0_4_ = __real_40000000;
          auVar96._8_4_ = __real_40000000;
          auVar96._12_4_ = __real_40000000;
          auVar96._16_4_ = __real_40000000;
          auVar96._20_4_ = __real_40000000;
          auVar96._24_4_ = __real_40000000;
          auVar96._28_4_ = __real_40000000;
          auVar23 = vsubps_avx(auVar96,auVar66);
          auVar57._0_4_ = auVar22._0_4_ * auVar23._0_4_;
          auVar57._4_4_ = auVar22._4_4_ * auVar23._4_4_;
          auVar57._8_4_ = auVar22._8_4_ * auVar23._8_4_;
          auVar57._12_4_ = auVar22._12_4_ * auVar23._12_4_;
          auVar67._16_4_ = auVar22._16_4_ * auVar23._16_4_;
          auVar67._0_16_ = auVar57;
          auVar67._20_4_ = auVar22._20_4_ * auVar23._20_4_;
          auVar67._24_4_ = auVar22._24_4_ * auVar23._24_4_;
          auVar67._28_4_ = auVar22._28_4_ * auVar23._28_4_;
          auVar22 = vcvtps2pd_avx(auVar57);
          auVar97._0_8_ = dVar31 * auVar22._0_8_;
          auVar97._8_8_ = dVar44 * auVar22._8_8_;
          auVar97._16_8_ = auVar21._0_8_ * auVar22._16_8_;
          auVar97._24_8_ = auVar22._24_8_ * 0.0;
          auVar113._8_8_ = __real_4000000000000000;
          auVar113._0_8_ = __real_4000000000000000;
          auVar113._16_8_ = __real_4000000000000000;
          auVar113._24_8_ = __real_4000000000000000;
          auVar23 = vsubpd_avx(auVar113,auVar97);
          dVar74 = auVar23._0_8_ * auVar22._0_8_;
          dVar85 = auVar23._8_8_ * auVar22._8_8_;
          dVar86 = auVar23._16_8_ * auVar22._16_8_;
          dVar87 = auVar23._24_8_ * auVar22._24_8_;
          auVar98._0_8_ = dVar31 * dVar74;
          auVar98._8_8_ = dVar44 * dVar85;
          auVar98._16_8_ = auVar21._0_8_ * dVar86;
          auVar98._24_8_ = dVar87 * 0.0;
          auVar22 = vsubpd_avx(auVar113,auVar98);
          auVar77._0_8_ = auVar22._0_8_ * dVar74;
          auVar77._8_8_ = auVar22._8_8_ * dVar85;
          auVar77._16_8_ = auVar22._16_8_ * dVar86;
          auVar77._24_8_ = auVar22._24_8_ * dVar87;
          auVar57 = vpmovsxwq_avx(auVar46);
          auVar58 = vpshufd_avx(auVar35,0xfa);
          auVar89._16_16_ = auVar58;
          auVar89._0_16_ = auVar57;
          auVar22 = vcvtps2pd_avx(auVar67._16_16_);
          local_108 = vblendvps_avx(local_108,auVar77,auVar89);
          auVar58 = vpunpckhwd_avx(auVar46,auVar46);
          auVar90._0_8_ = auVar22._0_8_ * 0.0;
          auVar90._8_8_ = dVar32 * auVar22._8_8_;
          auVar90._16_8_ = dVar102 * auVar22._16_8_;
          auVar90._24_8_ = dVar106 * auVar22._24_8_;
          auVar23 = vsubpd_avx(auVar113,auVar90);
          dVar74 = auVar23._0_8_ * auVar22._0_8_;
          dVar85 = auVar23._8_8_ * auVar22._8_8_;
          dVar86 = auVar23._16_8_ * auVar22._16_8_;
          dVar87 = auVar23._24_8_ * auVar22._24_8_;
          auVar91._0_8_ = dVar74 * 0.0;
          auVar91._8_8_ = dVar32 * dVar85;
          auVar91._16_8_ = dVar102 * dVar86;
          auVar91._24_8_ = dVar106 * dVar87;
          auVar22 = vsubpd_avx(auVar113,auVar91);
          auVar68._0_8_ = dVar74 * auVar22._0_8_;
          auVar68._8_8_ = dVar85 * auVar22._8_8_;
          auVar68._16_8_ = dVar86 * auVar22._16_8_;
          auVar68._24_8_ = dVar87 * auVar22._24_8_;
          auVar57 = vpshufd_avx(auVar58,0x50);
          auVar58 = vpshufd_avx(auVar58,0xfa);
          auVar78._16_16_ = auVar58;
          auVar78._0_16_ = auVar57;
          local_148 = vblendvps_avx(local_148,auVar68,auVar78);
          auVar22 = vcmppd_avx(auVar54,auVar108,6);
          auVar57 = vpackssdw_avx(auVar22._0_16_,auVar22._16_16_);
          auVar58 = vpackssdw_avx(auVar57,___xmm_00000000000000000000000000000000);
          auVar57 = vpacksswb_avx(auVar58,auVar58);
          if ((byte)(SUB161(auVar57 >> 7,0) & 1 | (SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar57 >> 0x17,0) & 1) << 2 | (SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar57 >> 0x27,0) & 1) << 4 | (SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar57 >> 0x37,0) & 1) << 6 | SUB161(auVar57 >> 0x3f,0) << 7) !=
              (byte)iVar11) {
            auVar57 = vpand_avx(auVar46,auVar58);
            auVar58 = vpmovsxwd_avx(auVar57);
            auVar57 = vpunpckhwd_avx(auVar57,auVar57);
            auVar55._16_16_ = auVar57;
            auVar55._0_16_ = auVar58;
            goto LAB_140abdf2f;
          }
        }
        auVar57 = vshufps_avx(auVar103,auVar103,0x50);
        auVar103 = vshufps_avx(auVar103,auVar103,0xfa);
        auVar30._16_16_ = auVar103;
        auVar30._0_16_ = auVar57;
        auVar18 = vblendvps_avx(local_108,auVar18,auVar30);
        auVar57 = vunpcklpd_avx(auVar17,auVar16);
        auVar21._0_8_ = auVar57._0_8_ * auVar18._0_8_;
        auVar21._8_8_ = auVar57._8_8_ * auVar18._8_8_;
        dVar31 = dVar19 * auVar18._16_8_;
        auVar57 = vshufpd_avx(auVar21,auVar21,1);
        local_208 = auVar57._0_8_;
        local_218._0_8_ = 0;
      }
      *(longlong *)(param_6 + lVar13) = auVar17._0_8_;
      *(longlong *)(param_6 + 8 + lVar13) = auVar16._0_8_;
      *(double *)(param_6 + 0x10 + lVar13) = dVar19;
      *(undefined8 *)(param_1 + lVar13 * 4) = local_188._0_8_;
      *(undefined8 *)(param_1 + 8 + lVar13 * 4) = local_1f8._0_8_;
      *(undefined8 *)(param_1 + 0x10 + lVar13 * 4) = local_1e8._0_8_;
      *(undefined8 *)(param_1 + 0x18 + lVar13 * 4) = local_1a8._0_8_;
      *(double *)(param_1 + 0x20 + lVar13 * 4) = dVar45;
      *(undefined8 *)(param_1 + 0x28 + lVar13 * 4) = local_1d8._0_8_;
      *(undefined8 *)(param_1 + 0x30 + lVar13 * 4) = local_288._0_8_;
      *(ulonglong *)(param_1 + 0x38 + lVar13 * 4) = uVar95;
      *(double *)(param_1 + 0x40 + lVar13 * 4) = auVar21._0_8_;
      *(ulonglong *)(param_1 + 0x48 + lVar13 * 4) = local_208;
      *(double *)(param_1 + 0x50 + lVar13 * 4) = dVar31;
      *(undefined8 *)(param_1 + 0x58 + lVar13 * 4) = local_218._0_8_;
      lVar15 = lVar15 + 1;
      lVar13 = lVar13 + 0x18;
    } while ((ulonglong)param_10 * 0x18 != lVar13);
  }
  return;
}

// BlendPosesPerBoneFilter_avx @ 140abe0f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilter_avx
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               undefined8 param_6,uint param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  ulonglong uVar12;
  double dVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulonglong *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar37;
  double dVar38;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  double dVar39;
  undefined1 auVar36 [32];
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  float fVar46;
  ulonglong uVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  ulonglong uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [32];
  ulonglong uVar62;
  undefined1 auVar63 [64];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  ulonglong uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [64];
  double dVar73;
  undefined1 auVar74 [16];
  double dVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  ulonglong uVar78;
  undefined1 auVar79 [16];
  double dVar80;
  undefined1 auVar81 [16];
  ulonglong uVar82;
  undefined1 auVar83 [64];
  undefined1 auVar54 [32];
  undefined1 auVar59 [32];
  undefined1 auVar67 [32];
  
  if (0 < (int)param_7) {
    lVar24 = 0xb;
    uVar25 = 0;
    do {
      iVar15 = *(int *)(param_5 + uVar25 * 8);
      uVar41 = *(ulonglong *)(param_2 + -0x58 + lVar24 * 8);
      dVar48 = *(double *)(param_2 + -0x38 + lVar24 * 8);
      uVar1 = *(ulonglong *)(param_2 + -0x30 + lVar24 * 8);
      dVar27 = *(double *)(param_2 + -0x28 + lVar24 * 8);
      uVar2 = *(ulonglong *)(param_2 + -0x20 + lVar24 * 8);
      dVar37 = *(double *)(param_2 + -0x18 + lVar24 * 8);
      uVar3 = *(ulonglong *)(param_2 + -0x10 + lVar24 * 8);
      dVar38 = *(double *)(param_2 + -8 + lVar24 * 8);
      uVar4 = *(ulonglong *)(param_2 + lVar24 * 8);
      auVar63 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar24 * 8));
      auVar72 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar24 * 8));
      auVar83 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar24 * 8));
      puVar23 = (ulonglong *)GetTransformFromArray(param_3,iVar15,(int)uVar25);
      uVar5 = *puVar23;
      auVar55._8_8_ = 0;
      auVar55._0_8_ = uVar5;
      uVar6 = puVar23[1];
      auVar77._8_8_ = 0;
      auVar77._0_8_ = uVar6;
      uVar7 = puVar23[2];
      auVar70._8_8_ = 0;
      auVar70._0_8_ = uVar7;
      uVar8 = puVar23[3];
      auVar74._8_8_ = 0;
      auVar74._0_8_ = uVar8;
      dVar39 = (double)puVar23[4];
      uVar9 = puVar23[5];
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar9;
      dVar73 = (double)puVar23[6];
      auVar52._8_8_ = 0;
      auVar52._0_8_ = dVar73;
      uVar10 = puVar23[7];
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar10;
      dVar11 = (double)puVar23[8];
      auVar65._8_8_ = 0;
      auVar65._0_8_ = dVar11;
      uVar12 = puVar23[9];
      auVar76._8_8_ = 0;
      auVar76._0_8_ = uVar12;
      auVar16 = vmaxss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_5 + 4 + uVar25 * 8)));
      dVar13 = (double)puVar23[10];
      auVar81._8_8_ = 0;
      auVar81._0_8_ = dVar13;
      auVar17 = vminss_avx(auVar16,ZEXT416(__real_3f800000));
      auVar16 = vmaxss_avx(auVar17,ZEXT416(*(uint *)(param_4 + (longlong)iVar15 * 4)));
      uVar14 = puVar23[0xb];
      auVar79._8_8_ = 0;
      auVar79._0_8_ = uVar14;
      *(int *)(param_4 + (longlong)iVar15 * 4) = auVar16._0_4_;
      fVar46 = auVar17._0_4_;
      uVar47 = uVar2;
      uVar62 = auVar63._0_8_;
      uVar68 = auVar72._0_8_;
      uVar82 = auVar83._0_8_;
      uVar26 = uVar3;
      uVar51 = uVar41;
      dVar56 = dVar48;
      uVar40 = uVar1;
      dVar75 = dVar27;
      dVar64 = dVar37;
      dVar80 = dVar38;
      uVar78 = uVar4;
      if ((__real_3727c5ac < fVar46) &&
         (uVar47 = uVar10, uVar62 = uVar6, uVar68 = uVar7, uVar82 = uVar8, uVar26 = uVar12,
         uVar51 = uVar5, dVar56 = dVar39, uVar40 = uVar9, dVar75 = dVar73, dVar64 = dVar11,
         dVar80 = dVar13, uVar78 = uVar14, fVar46 < __real_3f7fff58)) {
        auVar43 = vunpcklpd_avx(auVar72._0_16_,auVar83._0_16_);
        auVar69._8_8_ = 0;
        auVar69._0_8_ = uVar41;
        auVar44 = vunpcklpd_avx(auVar69,auVar63._0_16_);
        auVar71._16_16_ = auVar43;
        auVar71._0_16_ = auVar44;
        auVar70 = vunpcklpd_avx(auVar70,auVar74);
        auVar74 = vunpcklpd_avx(auVar55,auVar77);
        auVar28._0_8_ = auVar44._0_8_ * auVar74._0_8_;
        auVar28._8_8_ = auVar44._8_8_ * auVar74._8_8_;
        auVar28._16_8_ = auVar43._0_8_ * auVar70._0_8_;
        auVar28._24_8_ = auVar43._8_8_ * auVar70._8_8_;
        auVar36 = vperm2f128_avx(auVar28,auVar28,1);
        auVar29._0_8_ = auVar28._0_8_ + auVar36._0_8_;
        auVar29._8_8_ = auVar28._8_8_ + auVar36._8_8_;
        auVar29._16_8_ = auVar28._16_8_ + auVar36._16_8_;
        auVar29._24_8_ = auVar28._24_8_ + auVar36._24_8_;
        auVar36 = vperm2f128_avx(auVar29,auVar29,1);
        auVar36 = vshufpd_avx(auVar29,auVar36,5);
        auVar30._0_8_ = auVar29._0_8_ + auVar36._0_8_;
        auVar30._8_8_ = auVar29._8_8_ + auVar36._8_8_;
        auVar30._16_8_ = auVar29._16_8_ + auVar36._16_8_;
        auVar30._24_8_ = auVar29._24_8_ + auVar36._24_8_;
        auVar55 = ZEXT816(0);
        auVar36 = vcmppd_avx(ZEXT1632(auVar55),auVar30,2);
        auVar16 = vpackssdw_avx(auVar36._0_16_,auVar36._16_16_);
        auVar17 = vpshufd_avx(auVar16,0x50);
        auVar16 = vpshufd_avx(auVar16,0xfa);
        auVar31._16_16_ = auVar16;
        auVar31._0_16_ = auVar17;
        auVar29 = ZEXT1632(auVar55);
        auVar36 = vcmpps_avx(ZEXT1632(auVar55),auVar29,0xf);
        auVar36 = vblendvps_avx(auVar29,auVar36,auVar31);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar38;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar4;
        auVar16 = vunpcklpd_avx(auVar21,auVar20);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar3;
        auVar60._8_8_ = 0;
        auVar60._0_8_ = dVar37;
        auVar17 = vunpcklpd_avx(auVar60,auVar19);
        auVar32._16_16_ = auVar16;
        auVar32._0_16_ = auVar17;
        auVar55 = vunpcklpd_avx(auVar81,auVar79);
        auVar65 = vunpcklpd_avx(auVar65,auVar76);
        auVar61._16_16_ = auVar55;
        auVar61._0_16_ = auVar65;
        auVar28 = vsubpd_avx(auVar61,auVar32);
        dVar73 = (double)fVar46;
        auVar66._0_8_ = auVar17._0_8_ + auVar28._0_8_ * dVar73;
        auVar66._8_8_ = auVar17._8_8_ + auVar28._8_8_ * dVar73;
        auVar67._16_8_ = auVar16._0_8_ + auVar28._16_8_ * dVar73;
        auVar67._0_16_ = auVar66;
        auVar67._24_8_ = auVar16._8_8_ + auVar28._24_8_ * dVar73;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = dVar27;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar2;
        auVar16 = vunpcklpd_avx(auVar22,auVar16);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar1;
        auVar49._8_8_ = 0;
        auVar49._0_8_ = dVar48;
        auVar55 = vunpcklpd_avx(auVar49,auVar17);
        auVar33._16_16_ = auVar16;
        auVar33._0_16_ = auVar55;
        auVar52 = vunpcklpd_avx(auVar52,auVar57);
        auVar17 = vshufpd_avx(auVar67._16_16_,auVar67._16_16_,1);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = dVar39;
        auVar57 = vunpcklpd_avx(auVar18,auVar42);
        auVar42 = vshufpd_avx(auVar66,auVar66,1);
        auVar45._16_16_ = auVar52;
        auVar45._0_16_ = auVar57;
        auVar28 = vsubpd_avx(auVar45,auVar33);
        auVar58._0_8_ = auVar55._0_8_ + auVar28._0_8_ * dVar73;
        auVar58._8_8_ = auVar55._8_8_ + auVar28._8_8_ * dVar73;
        auVar59._16_8_ = auVar16._0_8_ + auVar28._16_8_ * dVar73;
        auVar59._0_16_ = auVar58;
        auVar59._24_8_ = auVar16._8_8_ + auVar28._24_8_ * dVar73;
        auVar28 = vsubpd_avx(auVar29,auVar71);
        auVar34._0_4_ = ~auVar36._0_4_ & auVar28._0_4_;
        auVar34._4_4_ = ~auVar36._4_4_ & auVar28._4_4_;
        auVar34._8_4_ = ~auVar36._8_4_ & auVar28._8_4_;
        auVar34._12_4_ = ~auVar36._12_4_ & auVar28._12_4_;
        auVar34._16_4_ = ~auVar36._16_4_ & auVar28._16_4_;
        auVar34._20_4_ = ~auVar36._20_4_ & auVar28._20_4_;
        auVar34._24_4_ = ~auVar36._24_4_ & auVar28._24_4_;
        auVar34._28_4_ = ~auVar36._28_4_ & auVar28._28_4_;
        auVar35._0_8_ = (ulonglong)auVar44._0_8_ & auVar36._0_8_;
        auVar35._8_8_ = (ulonglong)auVar44._8_8_ & auVar36._8_8_;
        auVar35._16_8_ = (ulonglong)auVar43._0_8_ & auVar36._16_8_;
        auVar35._24_8_ = (ulonglong)auVar43._8_8_ & auVar36._24_8_;
        auVar52 = vshufpd_avx(auVar59._16_16_,auVar59._16_16_,1);
        auVar35 = auVar35 | auVar34;
        auVar55 = vshufpd_avx(auVar58,auVar58,1);
        dVar48 = __real_3ff0000000000000 - dVar73;
        dVar27 = auVar74._0_8_ * dVar73 + dVar48 * auVar35._0_8_;
        dVar37 = auVar74._8_8_ * dVar73 + dVar48 * auVar35._8_8_;
        dVar38 = auVar70._0_8_ * dVar73 + dVar48 * auVar35._16_8_;
        dVar39 = auVar70._8_8_ * dVar73 + dVar48 * auVar35._24_8_;
        auVar43._0_8_ = dVar27 * dVar27 + dVar38 * dVar38;
        auVar43._8_8_ = dVar37 * dVar37 + dVar39 * dVar39;
        auVar16 = vshufpd_avx(auVar43,auVar43,1);
        dVar48 = auVar43._0_8_ + auVar16._0_8_;
        auVar44._8_8_ = 0;
        auVar44._0_8_ = dVar48;
        dVar48 = __real_3ff0000000000000 / SQRT(dVar48);
        auVar50._8_8_ = 0;
        auVar50._0_8_ = __real_3e45798ee2308c3a;
        auVar16 = vcmpsd_avx(auVar50,auVar44,6);
        uVar41 = ~auVar16._0_8_ & __real_ffffffffffffffff;
        auVar53._0_8_ = (ulonglong)(dVar27 * dVar48) & uVar41;
        auVar53._8_8_ = (ulonglong)(dVar37 * dVar48) & uVar41;
        auVar54._16_8_ = (ulonglong)(dVar38 * dVar48) & uVar41;
        auVar54._0_16_ = auVar53;
        auVar54._24_8_ = (ulonglong)(dVar39 * dVar48) & uVar41;
        auVar36._0_8_ =
             ~uVar41 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar36._8_8_ = ~uVar41 & _UNK_150b54548;
        auVar36._16_8_ = ~uVar41 & _UNK_150b54550;
        auVar36._24_8_ = ~uVar41 & _UNK_150b54558;
        auVar70 = auVar54._16_16_ | auVar36._16_16_;
        auVar16 = vshufps_avx(auVar70,auVar70,0x4e);
        auVar57 = vshufps_avx(auVar53,auVar53,0x4e);
        uVar47 = auVar52._0_8_;
        uVar62 = auVar57._0_8_;
        uVar68 = auVar70._0_8_;
        uVar82 = auVar16._0_8_;
        uVar26 = auVar42._0_8_;
        uVar51 = auVar53._0_8_;
        dVar56 = auVar58._0_8_;
        uVar40 = auVar55._0_8_;
        dVar75 = auVar59._16_8_;
        dVar64 = auVar66._0_8_;
        dVar80 = auVar67._16_8_;
        uVar78 = auVar17._0_8_;
      }
      *(ulonglong *)(param_1 + -0x58 + lVar24 * 8) = uVar51;
      *(ulonglong *)(param_1 + -0x50 + lVar24 * 8) = uVar62;
      *(ulonglong *)(param_1 + -0x48 + lVar24 * 8) = uVar68;
      *(ulonglong *)(param_1 + -0x40 + lVar24 * 8) = uVar82;
      *(double *)(param_1 + -0x38 + lVar24 * 8) = dVar56;
      *(ulonglong *)(param_1 + -0x30 + lVar24 * 8) = uVar40;
      *(double *)(param_1 + -0x28 + lVar24 * 8) = dVar75;
      *(ulonglong *)(param_1 + -0x20 + lVar24 * 8) = uVar47;
      *(double *)(param_1 + -0x18 + lVar24 * 8) = dVar64;
      *(ulonglong *)(param_1 + -0x10 + lVar24 * 8) = uVar26;
      *(double *)(param_1 + -8 + lVar24 * 8) = dVar80;
      *(ulonglong *)(param_1 + lVar24 * 8) = uVar78;
      uVar25 = uVar25 + 1;
      lVar24 = lVar24 + 0xc;
    } while (param_7 != uVar25);
  }
  return;
}

// BlendCurves_avx @ 140abe600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendCurves_avx(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                    uint param_5,int param_6,float param_7)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined1 (*pauVar30) [32];
  uint uVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar48 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar47 [32];
  undefined1 auVar55 [32];
  
  uVar21 = __real_0000001f;
  auVar37 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  uVar29 = __real_3f800000;
  fVar20 = __real_3727c5ac;
  auVar33 = ZEXT416((uint)param_7);
  if ((param_6 == 0) &&
     ((double)(float)((uint)(param_7 + __real_bf800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_3e45798ee2308c3a)) {
    auVar33 = ZEXT416(__real_3f800000);
  }
  uVar31 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar31 = param_5;
  }
  if ((int)(uVar31 & 0xfffffff8) < 1) {
    uVar32 = 0;
  }
  else {
    auVar45 = vshufps_avx(auVar33,auVar33,0);
    uVar27 = 0;
    auVar39 = vpcmpeqd_avx(in_ZMM6._0_16_,in_ZMM6._0_16_);
    uVar22 = 0;
    uVar32 = 0;
    do {
      auVar49 = vpshufd_avx(ZEXT416((uint)uVar32),0);
      auVar52._16_16_ = auVar49;
      auVar52._0_16_ = auVar49;
      auVar52 = auVar52 | auVar37;
      auVar49._0_4_ = auVar52._0_4_ & uVar21;
      auVar49._4_4_ = auVar52._4_4_ & uVar21;
      auVar49._8_4_ = auVar52._8_4_ & uVar21;
      auVar49._12_4_ = auVar52._12_4_ & uVar21;
      auVar53._16_4_ = auVar52._16_4_ & uVar21;
      auVar53._0_16_ = auVar49;
      auVar53._20_4_ = auVar52._20_4_ & uVar21;
      auVar53._24_4_ = auVar52._24_4_ & uVar21;
      auVar53._28_4_ = auVar52._28_4_ & uVar21;
      auVar57 = vpslld_avx(auVar53._16_16_,0x17);
      auVar49 = vpslld_avx(auVar49,0x17);
      auVar54._0_4_ = (uint)(float)(auVar49._0_4_ + uVar29);
      auVar54._4_4_ = (uint)(float)(auVar49._4_4_ + uVar29);
      auVar54._8_4_ = (uint)(float)(auVar49._8_4_ + uVar29);
      auVar54._12_4_ = (uint)(float)(auVar49._12_4_ + uVar29);
      auVar54._16_4_ = (uint)(float)(auVar57._0_4_ + uVar29);
      auVar54._20_4_ = (uint)(float)(auVar57._4_4_ + uVar29);
      auVar54._24_4_ = (uint)(float)(auVar57._8_4_ + uVar29);
      auVar54._28_4_ = (uint)(float)(auVar57._12_4_ + uVar29);
      uVar6 = *(uint *)(param_2 + (ulonglong)(uVar27 & 0xffffffc));
      auVar58._4_4_ = uVar6;
      auVar58._0_4_ = uVar6;
      auVar58._8_4_ = uVar6;
      auVar58._12_4_ = uVar6;
      auVar58._16_4_ = uVar6;
      auVar58._20_4_ = uVar6;
      auVar58._24_4_ = uVar6;
      auVar58._28_4_ = uVar6;
      if ((auVar54 & auVar58) != (undefined1  [32])0x0) {
        auVar50._0_4_ = uVar6 & auVar54._0_4_;
        auVar50._4_4_ = uVar6 & auVar54._4_4_;
        auVar50._8_4_ = uVar6 & auVar54._8_4_;
        auVar50._12_4_ = uVar6 & auVar54._12_4_;
        auVar55._16_4_ = uVar6 & auVar54._16_4_;
        auVar55._0_16_ = auVar50;
        auVar55._20_4_ = uVar6 & auVar54._20_4_;
        auVar55._24_4_ = uVar6 & auVar54._24_4_;
        auVar55._28_4_ = uVar6 & auVar54._28_4_;
        uVar26 = (ulonglong)uVar22;
        auVar57 = vpcmpeqd_avx(auVar55._16_16_,(undefined1  [16])0x0);
        auVar50 = vpcmpeqd_avx(auVar50,(undefined1  [16])0x0);
        auVar49 = vpackssdw_avx(auVar50,auVar57);
        auVar49 = auVar49 ^ auVar39;
        auVar11 = vpmovsxwd_avx(auVar49);
        auVar49 = vpunpckhwd_avx(auVar49,auVar49);
        fVar7 = auVar45._0_4_;
        fVar8 = auVar45._4_4_;
        fVar9 = auVar45._8_4_;
        fVar10 = auVar45._12_4_;
        if (param_6 == 0) {
          auVar60._16_16_ = auVar49;
          auVar60._0_16_ = auVar11;
          auVar52 = vmaskmovps_avx(auVar60,*(undefined1 (*) [32])(param_1 + uVar26));
          auVar61._0_4_ = auVar52._0_4_ * fVar7;
          auVar61._4_4_ = auVar52._4_4_ * fVar8;
          auVar61._8_4_ = auVar52._8_4_ * fVar9;
          auVar61._12_4_ = auVar52._12_4_ * fVar10;
          auVar61._16_4_ = auVar52._16_4_ * fVar7;
          auVar61._20_4_ = auVar52._20_4_ * fVar8;
          auVar61._24_4_ = auVar52._24_4_ * fVar9;
          auVar61._28_4_ = auVar52._28_4_ * fVar10;
        }
        else {
          auVar62._16_16_ = auVar57 ^ auVar39;
          auVar62._0_16_ = auVar50 ^ auVar39;
          auVar52 = vmaskmovps_avx(auVar62,*(undefined1 (*) [32])(param_3 + uVar26));
          auVar61 = auVar52;
          if (fVar20 < auVar33._0_4_) {
            auVar63._16_16_ = auVar49;
            auVar63._0_16_ = auVar11;
            auVar53 = vmaskmovps_avx(auVar63,*(undefined1 (*) [32])(param_1 + uVar26));
            auVar61._0_4_ = auVar52._0_4_ + auVar53._0_4_ * fVar7;
            auVar61._4_4_ = auVar52._4_4_ + auVar53._4_4_ * fVar8;
            auVar61._8_4_ = auVar52._8_4_ + auVar53._8_4_ * fVar9;
            auVar61._12_4_ = auVar52._12_4_ + auVar53._12_4_ * fVar10;
            auVar61._16_4_ = auVar52._16_4_ + auVar53._16_4_ * fVar7;
            auVar61._20_4_ = auVar52._20_4_ + auVar53._20_4_ * fVar8;
            auVar61._24_4_ = auVar52._24_4_ + auVar53._24_4_ * fVar9;
            auVar61._28_4_ = auVar52._28_4_ + auVar53._28_4_ * fVar10;
          }
        }
        auVar51._16_16_ = auVar49;
        auVar51._0_16_ = auVar11;
        auVar52 = vmaskmovps_avx(auVar51,auVar61);
        *(undefined1 (*) [32])(uVar26 + param_3) = auVar52;
      }
      uVar32 = uVar32 + 8;
      uVar22 = uVar22 + 0x20;
      uVar27 = uVar27 + 1;
    } while (uVar32 < (uVar31 & 0xfffffff8));
  }
  uVar29 = (uint)uVar32;
  if ((int)uVar29 < (int)param_5) {
    auVar39 = vpshufd_avx(ZEXT416(uVar29),0);
    auVar37._16_16_ = auVar39;
    auVar37._0_16_ = auVar39;
    auVar37 = auVar37 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar50 = vpshufd_avx(ZEXT416(param_5),0);
    auVar39._0_4_ =
         auVar37._0_4_ & ___ymm_0000001f0000001f0000001f0000001f0000001f0000001f0000001f0000001f;
    auVar39._4_4_ = auVar37._4_4_ & _UNK_151c6b084;
    auVar39._8_4_ = auVar37._8_4_ & _UNK_151c6b088;
    auVar39._12_4_ = auVar37._12_4_ & _UNK_151c6b08c;
    auVar46._16_4_ = auVar37._16_4_ & _UNK_151c6b090;
    auVar46._0_16_ = auVar39;
    auVar46._20_4_ = auVar37._20_4_ & _UNK_151c6b094;
    auVar46._24_4_ = auVar37._24_4_ & _UNK_151c6b098;
    auVar46._28_4_ = auVar37._28_4_ & _UNK_151c6b09c;
    auVar39 = vpslld_avx(auVar39,0x17);
    auVar40._0_4_ = (uint)(float)(auVar39._0_4_ + __real_3f800000);
    auVar40._4_4_ = (uint)(float)(auVar39._4_4_ + __real_3f800000);
    auVar40._8_4_ = (uint)(float)(auVar39._8_4_ + __real_3f800000);
    auVar40._12_4_ = (uint)(float)(auVar39._12_4_ + __real_3f800000);
    auVar39 = vpslld_avx(auVar46._16_16_,0x17);
    auVar44._0_4_ = (uint)(float)(auVar39._0_4_ + __real_3f800000);
    auVar44._4_4_ = (uint)(float)(auVar39._4_4_ + __real_3f800000);
    auVar44._8_4_ = (uint)(float)(auVar39._8_4_ + __real_3f800000);
    auVar44._12_4_ = (uint)(float)(auVar39._12_4_ + __real_3f800000);
    auVar11 = vpshufd_avx(ZEXT416(*(uint *)(param_2 + (ulonglong)((uint)(uVar32 >> 3) & 0xffffffc)))
                          ,0);
    auVar39 = vpand_avx(auVar11,auVar44);
    auVar45 = vpcmpeqd_avx(auVar39,(undefined1  [16])0x0);
    auVar39 = vpand_avx(auVar11,auVar40);
    auVar39 = vpcmpeqd_avx(auVar39,(undefined1  [16])0x0);
    auVar49 = vpcmpgtd_avx(auVar50,auVar37._16_16_);
    auVar57 = vpcmpgtd_avx(auVar50,auVar37._0_16_);
    auVar59._16_16_ = auVar49;
    auVar59._0_16_ = auVar57;
    auVar56._0_4_ = auVar39._0_4_ & auVar57._0_4_;
    auVar56._4_4_ = auVar39._4_4_ & auVar57._4_4_;
    auVar56._8_4_ = auVar39._8_4_ & auVar57._8_4_;
    auVar56._12_4_ = auVar39._12_4_ & auVar57._12_4_;
    auVar56._16_4_ = auVar45._0_4_ & auVar49._0_4_;
    auVar56._20_4_ = auVar45._4_4_ & auVar49._4_4_;
    auVar56._24_4_ = auVar45._8_4_ & auVar49._8_4_;
    auVar56._28_4_ = auVar45._12_4_ & auVar49._12_4_;
    uVar23 = vmovmskps_avx(auVar56);
    uVar28 = vmovmskps_avx(auVar59);
    if ((char)uVar23 != (char)uVar28) {
      auVar45._0_4_ = auVar11._0_4_ & auVar40._0_4_;
      auVar45._4_4_ = auVar11._4_4_ & auVar40._4_4_;
      auVar45._8_4_ = auVar11._8_4_ & auVar40._8_4_;
      auVar45._12_4_ = auVar11._12_4_ & auVar40._12_4_;
      auVar47._16_4_ = auVar11._0_4_ & auVar44._0_4_;
      auVar47._0_16_ = auVar45;
      auVar47._20_4_ = auVar11._4_4_ & auVar44._4_4_;
      auVar47._24_4_ = auVar11._8_4_ & auVar44._8_4_;
      auVar47._28_4_ = auVar11._12_4_ & auVar44._12_4_;
      auVar49 = vpcmpeqd_avx(auVar47._16_16_,(undefined1  [16])0x0);
      auVar57 = vpcmpeqd_avx(auVar45,(undefined1  [16])0x0);
      auVar11 = vpcmpgtd_avx(auVar50,auVar37._16_16_);
      auVar50 = vpcmpgtd_avx(auVar50,auVar37._0_16_);
      lVar24 = (longlong)(int)(uVar29 << 2);
      auVar39 = vpandn_avx(auVar49,auVar11);
      auVar45 = vpandn_avx(auVar57,auVar50);
      auVar39 = vpackssdw_avx(auVar45,auVar39);
      auVar45 = vpmovsxwd_avx(auVar39);
      auVar39 = vpunpckhwd_avx(auVar39,auVar39);
      if (param_6 == 0) {
        auVar43._16_16_ = auVar39;
        auVar43._0_16_ = auVar45;
        auVar37 = vmaskmovps_avx(auVar43,*(undefined1 (*) [32])(param_1 + lVar24));
        auVar33 = vshufps_avx(auVar33,auVar33,0);
        auVar42._0_4_ = auVar33._0_4_ * auVar37._0_4_;
        auVar42._4_4_ = auVar33._4_4_ * auVar37._4_4_;
        auVar42._8_4_ = auVar33._8_4_ * auVar37._8_4_;
        auVar42._12_4_ = auVar33._12_4_ * auVar37._12_4_;
        auVar42._16_4_ = auVar33._0_4_ * auVar37._16_4_;
        auVar42._20_4_ = auVar33._4_4_ * auVar37._20_4_;
        auVar42._24_4_ = auVar33._8_4_ * auVar37._24_4_;
        auVar42._28_4_ = auVar33._12_4_ * auVar37._28_4_;
      }
      else {
        auVar41._0_4_ = ~auVar57._0_4_ & auVar50._0_4_;
        auVar41._4_4_ = ~auVar57._4_4_ & auVar50._4_4_;
        auVar41._8_4_ = ~auVar57._8_4_ & auVar50._8_4_;
        auVar41._12_4_ = ~auVar57._12_4_ & auVar50._12_4_;
        auVar41._16_4_ = ~auVar49._0_4_ & auVar11._0_4_;
        auVar41._20_4_ = ~auVar49._4_4_ & auVar11._4_4_;
        auVar41._24_4_ = ~auVar49._8_4_ & auVar11._8_4_;
        auVar41._28_4_ = ~auVar49._12_4_ & auVar11._12_4_;
        auVar37 = vmaskmovps_avx(auVar41,*(undefined1 (*) [32])(param_3 + lVar24));
        auVar42 = auVar37;
        if (__real_3727c5ac < auVar33._0_4_) {
          auVar48._16_16_ = auVar39;
          auVar48._0_16_ = auVar45;
          auVar52 = vmaskmovps_avx(auVar48,*(undefined1 (*) [32])(param_1 + lVar24));
          auVar33 = vshufps_avx(auVar33,auVar33,0);
          auVar42._0_4_ = auVar37._0_4_ + auVar33._0_4_ * auVar52._0_4_;
          auVar42._4_4_ = auVar37._4_4_ + auVar33._4_4_ * auVar52._4_4_;
          auVar42._8_4_ = auVar37._8_4_ + auVar33._8_4_ * auVar52._8_4_;
          auVar42._12_4_ = auVar37._12_4_ + auVar33._12_4_ * auVar52._12_4_;
          auVar42._16_4_ = auVar37._16_4_ + auVar33._0_4_ * auVar52._16_4_;
          auVar42._20_4_ = auVar37._20_4_ + auVar33._4_4_ * auVar52._20_4_;
          auVar42._24_4_ = auVar37._24_4_ + auVar33._8_4_ * auVar52._24_4_;
          auVar42._28_4_ = auVar37._28_4_ + auVar33._12_4_ * auVar52._28_4_;
        }
      }
      auVar34._16_16_ = auVar39;
      auVar34._0_16_ = auVar45;
      auVar37 = vmaskmovps_avx(auVar34,auVar42);
      *(undefined1 (*) [32])(param_3 + lVar24) = auVar37;
    }
  }
  auVar33 = vroundss_avx(ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),
                         ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),10);
  uVar21 = (uint)auVar33._0_4_;
  uVar29 = uVar21 + 7;
  if (-1 < (int)uVar21) {
    uVar29 = uVar21;
  }
  uVar29 = uVar29 & 0xfffffff8;
  if ((int)uVar29 < 1) {
    uVar29 = 0;
    if ((int)uVar21 < 1) {
      return;
    }
  }
  else {
    uVar31 = 0;
    uVar32 = 0;
    if (param_6 == 0) {
      do {
        uVar26 = (ulonglong)uVar31;
        uVar12 = *(undefined8 *)(param_2 + uVar26);
        uVar13 = ((undefined8 *)(param_2 + uVar26))[1];
        puVar4 = (undefined8 *)(param_2 + 0x10 + uVar26);
        uVar14 = puVar4[1];
        puVar5 = (undefined8 *)(param_4 + 0x10 + uVar26);
        *puVar5 = *puVar4;
        puVar5[1] = uVar14;
        *(undefined8 *)(param_4 + uVar26) = uVar12;
        ((undefined8 *)(param_4 + uVar26))[1] = uVar13;
        uVar32 = uVar32 + 8;
        uVar31 = uVar31 + 0x20;
      } while (uVar32 < uVar29);
    }
    else {
      do {
        uVar25 = (ulonglong)uVar31;
        uVar17 = *(ulonglong *)(param_4 + uVar25);
        uVar18 = ((ulonglong *)(param_4 + uVar25))[1];
        puVar1 = (ulonglong *)(param_4 + 0x10 + uVar25);
        uVar19 = puVar1[1];
        uVar26 = *(ulonglong *)(param_2 + uVar25);
        uVar15 = ((ulonglong *)(param_2 + uVar25))[1];
        puVar2 = (ulonglong *)(param_2 + 0x10 + uVar25);
        uVar16 = puVar2[1];
        puVar3 = (ulonglong *)(param_4 + 0x10 + uVar25);
        *puVar3 = *puVar1 | *puVar2;
        puVar3[1] = uVar19 | uVar16;
        *(ulonglong *)(param_4 + uVar25) = uVar17 | uVar26;
        ((ulonglong *)(param_4 + uVar25))[1] = uVar18 | uVar15;
        uVar32 = uVar32 + 8;
        uVar31 = uVar31 + 0x20;
      } while (uVar32 < uVar29);
    }
    uVar29 = (uint)uVar32;
    if ((int)uVar21 <= (int)uVar29) {
      return;
    }
  }
  auVar33 = vpshufd_avx(ZEXT416(uVar29),0);
  auVar35._16_16_ = auVar33;
  auVar35._0_16_ = auVar33;
  pauVar30 = (undefined1 (*) [32])(param_4 + (int)(uVar29 * 4));
  auVar45 = vpshufd_avx(ZEXT416(uVar21),0);
  auVar49 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar57 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar33 = vpcmpgtd_avx(auVar45,auVar57);
  auVar39 = vpcmpgtd_avx(auVar45,auVar49);
  auVar38._16_16_ = auVar33;
  auVar38._0_16_ = auVar39;
  auVar37 = vmaskmovps_avx(auVar38,*(undefined1 (*) [32])(param_2 + (int)(uVar29 * 4)));
  auVar33 = vpcmpgtd_avx(auVar45,auVar57);
  auVar39 = vpcmpgtd_avx(auVar45,auVar49);
  auVar36._16_16_ = auVar33;
  auVar36._0_16_ = auVar39;
  if (param_6 == 0) {
    auVar37 = vmaskmovps_avx(auVar36,auVar37);
    *pauVar30 = auVar37;
  }
  else {
    auVar52 = vmaskmovps_avx(auVar36,*pauVar30);
    auVar37 = vmaskmovps_avx(auVar36,auVar52 | auVar37);
    *pauVar30 = auVar37;
  }
  return;
}

// LerpBoneTransforms_avx @ 140abeac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LerpBoneTransforms_avx
               (longlong param_1,longlong param_2,float param_3,longlong param_4,uint param_5)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  ulonglong *puVar6;
  undefined1 auVar7 [32];
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  double dVar56;
  ulonglong uVar57;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  double dVar66;
  double dVar69;
  double dVar70;
  double dVar71;
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  
  auVar62 = _DAT_151c6b0e0;
  auVar7 = _DAT_151c6b0c0;
  uVar22 = _UNK_150b5455c;
  uVar21 = _UNK_150b54558;
  uVar20 = _UNK_150b54554;
  uVar19 = _UNK_150b54550;
  uVar18 = _UNK_150b5454c;
  uVar17 = _UNK_150b54548;
  uVar16 = _UNK_150b54544;
  uVar15 = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  fVar8 = __real_3f800000 - param_3;
  uVar23 = param_5 & 0xfffffff8;
  if (0 < (int)uVar23) {
    dVar37 = (double)fVar8;
    dVar39 = (double)param_3;
    lVar24 = param_1 + 0x20;
    lVar1 = param_1 + 0x40;
    uVar26 = 0;
    auVar50._0_12_ = ZEXT812(0);
    auVar50._12_4_ = 0;
    auVar55 = vcmpps_avx(ZEXT1632(auVar50),ZEXT1632(auVar50),0xf);
    auVar51._8_8_ = __real_3ff0000000000000;
    auVar51._0_8_ = __real_3ff0000000000000;
    auVar51._16_8_ = __real_3ff0000000000000;
    auVar51._24_8_ = __real_3ff0000000000000;
    do {
      uVar27 = (ulonglong)((uint)*(ushort *)(param_4 + uVar26 * 2) * 0x60);
      pdVar2 = (double *)(param_1 + 0x10 + uVar27);
      uVar25 = (ulonglong)((uint)*(ushort *)(param_4 + 2 + uVar26 * 2) * 0x60);
      pdVar3 = (double *)(param_1 + 0x10 + uVar25);
      pdVar4 = (double *)(param_2 + 0x10 + uVar27);
      pdVar5 = (double *)(param_2 + 0x10 + uVar25);
      dVar56 = *(double *)(param_1 + uVar25) * dVar37;
      dVar63 = ((double *)(param_1 + uVar25))[1] * dVar37;
      dVar64 = *pdVar3 * dVar37;
      dVar65 = pdVar3[1] * dVar37;
      dVar66 = *(double *)(param_1 + uVar27) * dVar37;
      dVar69 = ((double *)(param_1 + uVar27))[1] * dVar37;
      dVar70 = *pdVar2 * dVar37;
      dVar71 = pdVar2[1] * dVar37;
      auVar72._0_8_ = *(double *)(param_2 + uVar25) * dVar39;
      auVar72._8_8_ = ((double *)(param_2 + uVar25))[1] * dVar39;
      auVar72._16_8_ = *pdVar5 * dVar39;
      auVar72._24_8_ = pdVar5[1] * dVar39;
      auVar74._0_8_ = *(double *)(param_2 + uVar27) * dVar39;
      auVar74._8_8_ = ((double *)(param_2 + uVar27))[1] * dVar39;
      auVar74._16_8_ = *pdVar4 * dVar39;
      auVar74._24_8_ = pdVar4[1] * dVar39;
      auVar76._0_8_ = dVar66 * auVar74._0_8_;
      auVar76._8_8_ = dVar69 * auVar74._8_8_;
      auVar76._16_8_ = dVar70 * auVar74._16_8_;
      auVar76._24_8_ = dVar71 * auVar74._24_8_;
      auVar77._0_8_ = dVar56 * auVar72._0_8_;
      auVar77._8_8_ = dVar63 * auVar72._8_8_;
      auVar77._16_8_ = dVar64 * auVar72._16_8_;
      auVar77._24_8_ = dVar65 * auVar72._24_8_;
      auVar31 = vperm2f128_avx(auVar77,auVar77,1);
      auVar29 = vperm2f128_avx(auVar76,auVar76,1);
      auVar41._0_8_ = auVar76._0_8_ + auVar29._0_8_;
      auVar41._8_8_ = auVar76._8_8_ + auVar29._8_8_;
      auVar41._16_8_ = auVar76._16_8_ + auVar29._16_8_;
      auVar41._24_8_ = auVar76._24_8_ + auVar29._24_8_;
      auVar28._0_8_ = auVar77._0_8_ + auVar31._0_8_;
      auVar28._8_8_ = auVar77._8_8_ + auVar31._8_8_;
      auVar28._16_8_ = auVar77._16_8_ + auVar31._16_8_;
      auVar28._24_8_ = auVar77._24_8_ + auVar31._24_8_;
      auVar31 = vperm2f128_avx(auVar28,auVar28,1);
      auVar31 = vshufpd_avx(auVar28,auVar31,5);
      auVar29 = vperm2f128_avx(auVar41,auVar41,1);
      auVar29 = vshufpd_avx(auVar41,auVar29,5);
      auVar42._0_8_ = auVar29._0_8_ + auVar41._0_8_;
      auVar42._8_8_ = auVar29._8_8_ + auVar41._8_8_;
      auVar42._16_8_ = auVar29._16_8_ + auVar41._16_8_;
      auVar42._24_8_ = auVar29._24_8_ + auVar41._24_8_;
      auVar29._0_8_ = auVar31._0_8_ + auVar28._0_8_;
      auVar29._8_8_ = auVar31._8_8_ + auVar28._8_8_;
      auVar29._16_8_ = auVar31._16_8_ + auVar28._16_8_;
      auVar29._24_8_ = auVar31._24_8_ + auVar28._24_8_;
      auVar28 = ZEXT1632(auVar50);
      auVar31 = vcmppd_avx(auVar28,auVar29,2);
      auVar29 = vcmppd_avx(auVar28,auVar42,2);
      auVar38 = vpackssdw_avx(auVar31._0_16_,auVar31._16_16_);
      auVar40 = vpackssdw_avx(auVar29._0_16_,auVar29._16_16_);
      auVar52 = vpshufd_avx(auVar40,0x50);
      auVar40 = vpshufd_avx(auVar40,0xfa);
      auVar43._16_16_ = auVar40;
      auVar43._0_16_ = auVar52;
      auVar40 = vpshufd_avx(auVar38,0x50);
      auVar31 = vblendvps_avx(auVar28,auVar55,auVar43);
      auVar38 = vpshufd_avx(auVar38,0xfa);
      auVar30._16_16_ = auVar38;
      auVar30._0_16_ = auVar40;
      auVar29 = vblendvps_avx(auVar28,auVar55,auVar30);
      auVar36 = ZEXT1632(auVar50);
      auVar28 = vsubpd_avx(auVar36,auVar72);
      auVar30 = vsubpd_avx(auVar36,auVar74);
      auVar45._0_4_ = ~auVar31._0_4_ & auVar30._0_4_;
      auVar45._4_4_ = ~auVar31._4_4_ & auVar30._4_4_;
      auVar45._8_4_ = ~auVar31._8_4_ & auVar30._8_4_;
      auVar45._12_4_ = ~auVar31._12_4_ & auVar30._12_4_;
      auVar45._16_4_ = ~auVar31._16_4_ & auVar30._16_4_;
      auVar45._20_4_ = ~auVar31._20_4_ & auVar30._20_4_;
      auVar45._24_4_ = ~auVar31._24_4_ & auVar30._24_4_;
      auVar45._28_4_ = ~auVar31._28_4_ & auVar30._28_4_;
      auVar44._0_8_ = (ulonglong)auVar74._0_8_ & auVar31._0_8_;
      auVar44._8_8_ = (ulonglong)auVar74._8_8_ & auVar31._8_8_;
      auVar44._16_8_ = (ulonglong)auVar74._16_8_ & auVar31._16_8_;
      auVar44._24_8_ = (ulonglong)auVar74._24_8_ & auVar31._24_8_;
      auVar45 = auVar45 | auVar44;
      auVar32._0_4_ = ~auVar29._0_4_ & auVar28._0_4_;
      auVar32._4_4_ = ~auVar29._4_4_ & auVar28._4_4_;
      auVar32._8_4_ = ~auVar29._8_4_ & auVar28._8_4_;
      auVar32._12_4_ = ~auVar29._12_4_ & auVar28._12_4_;
      auVar32._16_4_ = ~auVar29._16_4_ & auVar28._16_4_;
      auVar32._20_4_ = ~auVar29._20_4_ & auVar28._20_4_;
      auVar32._24_4_ = ~auVar29._24_4_ & auVar28._24_4_;
      auVar32._28_4_ = ~auVar29._28_4_ & auVar28._28_4_;
      auVar31._0_8_ = (ulonglong)auVar72._0_8_ & auVar29._0_8_;
      auVar31._8_8_ = (ulonglong)auVar72._8_8_ & auVar29._8_8_;
      auVar31._16_8_ = (ulonglong)auVar72._16_8_ & auVar29._16_8_;
      auVar31._24_8_ = (ulonglong)auVar72._24_8_ & auVar29._24_8_;
      auVar32 = auVar32 | auVar31;
      dVar56 = dVar56 + auVar32._0_8_;
      dVar63 = dVar63 + auVar32._8_8_;
      dVar64 = dVar64 + auVar32._16_8_;
      dVar65 = dVar65 + auVar32._24_8_;
      dVar66 = dVar66 + auVar45._0_8_;
      dVar69 = dVar69 + auVar45._8_8_;
      dVar70 = dVar70 + auVar45._16_8_;
      dVar71 = dVar71 + auVar45._24_8_;
      auVar33._0_8_ = dVar66 * dVar66;
      auVar33._8_8_ = dVar69 * dVar69;
      auVar33._16_8_ = dVar70 * dVar70;
      auVar33._24_8_ = dVar71 * dVar71;
      auVar46._0_8_ = dVar56 * dVar56;
      auVar46._8_8_ = dVar63 * dVar63;
      auVar46._16_8_ = dVar64 * dVar64;
      auVar46._24_8_ = dVar65 * dVar65;
      auVar31 = vperm2f128_avx(auVar46,auVar46,1);
      auVar29 = vperm2f128_avx(auVar33,auVar33,1);
      auVar34._0_8_ = auVar29._0_8_ + auVar33._0_8_;
      auVar34._8_8_ = auVar29._8_8_ + auVar33._8_8_;
      auVar34._16_8_ = auVar29._16_8_ + auVar33._16_8_;
      auVar34._24_8_ = auVar29._24_8_ + auVar33._24_8_;
      auVar47._0_8_ = auVar31._0_8_ + auVar46._0_8_;
      auVar47._8_8_ = auVar31._8_8_ + auVar46._8_8_;
      auVar47._16_8_ = auVar31._16_8_ + auVar46._16_8_;
      auVar47._24_8_ = auVar31._24_8_ + auVar46._24_8_;
      auVar31 = vperm2f128_avx(auVar47,auVar47,1);
      auVar31 = vshufpd_avx(auVar47,auVar31,5);
      auVar29 = vperm2f128_avx(auVar34,auVar34,1);
      auVar29 = vshufpd_avx(auVar34,auVar29,5);
      auVar35._0_8_ = auVar29._0_8_ + auVar34._0_8_;
      auVar35._8_8_ = auVar29._8_8_ + auVar34._8_8_;
      auVar35._16_8_ = auVar29._16_8_ + auVar34._16_8_;
      auVar35._24_8_ = auVar29._24_8_ + auVar34._24_8_;
      auVar48._0_8_ = auVar31._0_8_ + auVar47._0_8_;
      auVar48._8_8_ = auVar31._8_8_ + auVar47._8_8_;
      auVar48._16_8_ = auVar31._16_8_ + auVar47._16_8_;
      auVar48._24_8_ = auVar31._24_8_ + auVar47._24_8_;
      auVar31 = vcmppd_avx(auVar62,auVar48,2);
      auVar38 = vpackssdw_avx(auVar31._0_16_,auVar31._16_16_);
      auVar31 = vcmppd_avx(auVar7,auVar35,2);
      auVar40 = vpackssdw_avx(auVar31._0_16_,auVar31._16_16_);
      auVar31 = vsqrtpd_avx(auVar35);
      auVar52 = vpshufd_avx(auVar40,0x50);
      auVar29 = vsqrtpd_avx(auVar48);
      auVar40 = vpshufd_avx(auVar40,0xfa);
      auVar53 = vpshufd_avx(auVar38,0x50);
      auVar28 = vdivpd_avx(auVar51,auVar29);
      auVar30 = vdivpd_avx(auVar51,auVar31);
      auVar75._16_16_ = auVar40;
      auVar75._0_16_ = auVar52;
      auVar38 = vpshufd_avx(auVar38,0xfa);
      auVar73._16_16_ = auVar38;
      auVar73._0_16_ = auVar53;
      auVar31 = vblendvps_avx(auVar36,auVar55,auVar75);
      auVar29 = vblendvps_avx(auVar36,auVar55,auVar73);
      auVar67._0_4_ = ~auVar29._0_4_ & uVar15;
      auVar67._4_4_ = ~auVar29._4_4_ & uVar16;
      auVar67._8_4_ = ~auVar29._8_4_ & uVar17;
      auVar67._12_4_ = ~auVar29._12_4_ & uVar18;
      auVar67._16_4_ = ~auVar29._16_4_ & uVar19;
      auVar67._20_4_ = ~auVar29._20_4_ & uVar20;
      auVar67._24_4_ = ~auVar29._24_4_ & uVar21;
      auVar67._28_4_ = ~auVar29._28_4_ & uVar22;
      auVar49._0_8_ = auVar29._0_8_ & (ulonglong)(dVar56 * auVar28._0_8_);
      auVar49._8_8_ = auVar29._8_8_ & (ulonglong)(dVar63 * auVar28._8_8_);
      auVar49._16_8_ = auVar29._16_8_ & (ulonglong)(dVar64 * auVar28._16_8_);
      auVar49._24_8_ = auVar29._24_8_ & (ulonglong)(dVar65 * auVar28._24_8_);
      auVar58._0_4_ = ~auVar31._0_4_ & uVar15;
      auVar58._4_4_ = ~auVar31._4_4_ & uVar16;
      auVar58._8_4_ = ~auVar31._8_4_ & uVar17;
      auVar58._12_4_ = ~auVar31._12_4_ & uVar18;
      auVar58._16_4_ = ~auVar31._16_4_ & uVar19;
      auVar58._20_4_ = ~auVar31._20_4_ & uVar20;
      auVar58._24_4_ = ~auVar31._24_4_ & uVar21;
      auVar58._28_4_ = ~auVar31._28_4_ & uVar22;
      auVar36._0_8_ = auVar31._0_8_ & (ulonglong)(dVar66 * auVar30._0_8_);
      auVar36._8_8_ = auVar31._8_8_ & (ulonglong)(dVar69 * auVar30._8_8_);
      auVar36._16_8_ = auVar31._16_8_ & (ulonglong)(dVar70 * auVar30._16_8_);
      auVar36._24_8_ = auVar31._24_8_ & (ulonglong)(dVar71 * auVar30._24_8_);
      *(undefined1 (*) [16])(param_1 + uVar27) = SUB3216(auVar58 | auVar36,0);
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar27) = SUB3216(auVar58 | auVar36,0x10);
      *(undefined1 (*) [16])(param_1 + uVar25) = SUB3216(auVar67 | auVar49,0);
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar25) = SUB3216(auVar67 | auVar49,0x10);
      pdVar2 = (double *)(param_2 + 0x20 + uVar25);
      dVar56 = *pdVar2;
      dVar63 = pdVar2[1];
      dVar66 = *(double *)(lVar24 + uVar25);
      dVar69 = ((double *)(lVar24 + uVar25))[1];
      pdVar2 = (double *)(param_2 + 0x30 + uVar25);
      dVar64 = *pdVar2;
      dVar65 = pdVar2[1];
      pdVar2 = (double *)(param_1 + 0x30 + uVar25);
      dVar70 = *pdVar2;
      dVar71 = pdVar2[1];
      dVar9 = ((double *)(lVar24 + uVar27))[1];
      pdVar2 = (double *)(param_2 + 0x20 + uVar27);
      dVar12 = pdVar2[1];
      pdVar3 = (double *)(param_1 + 0x30 + uVar27);
      dVar10 = *pdVar3;
      dVar11 = pdVar3[1];
      pdVar3 = (double *)(param_2 + 0x30 + uVar27);
      dVar13 = *pdVar3;
      dVar14 = pdVar3[1];
      *(double *)(lVar24 + uVar27) = *(double *)(lVar24 + uVar27) * dVar37 + *pdVar2 * dVar39;
      ((double *)(lVar24 + uVar27))[1] = dVar9 * dVar37 + dVar12 * dVar39;
      pdVar2 = (double *)(param_1 + 0x30 + uVar27);
      *pdVar2 = dVar10 * dVar37 + dVar13 * dVar39;
      pdVar2[1] = dVar11 * dVar37 + dVar14 * dVar39;
      *(double *)(lVar24 + uVar25) = dVar37 * dVar66 + dVar39 * dVar56;
      ((double *)(lVar24 + uVar25))[1] = dVar37 * dVar69 + dVar39 * dVar63;
      pdVar2 = (double *)(param_1 + 0x30 + uVar25);
      *pdVar2 = dVar37 * dVar70 + dVar39 * dVar64;
      pdVar2[1] = dVar37 * dVar71 + dVar39 * dVar65;
      pdVar2 = (double *)(param_2 + 0x40 + uVar25);
      dVar56 = *pdVar2;
      dVar63 = pdVar2[1];
      pdVar2 = (double *)(param_2 + 0x50 + uVar25);
      dVar64 = *pdVar2;
      dVar65 = pdVar2[1];
      dVar66 = *(double *)(lVar1 + uVar25);
      dVar69 = ((double *)(lVar1 + uVar25))[1];
      dVar9 = ((double *)(lVar1 + uVar27))[1];
      pdVar2 = (double *)(param_2 + 0x40 + uVar27);
      dVar12 = pdVar2[1];
      pdVar3 = (double *)(param_1 + 0x50 + uVar25);
      dVar70 = *pdVar3;
      dVar71 = pdVar3[1];
      pdVar3 = (double *)(param_2 + 0x50 + uVar27);
      dVar13 = *pdVar3;
      dVar14 = pdVar3[1];
      pdVar3 = (double *)(param_1 + 0x50 + uVar27);
      dVar10 = *pdVar3;
      dVar11 = pdVar3[1];
      *(double *)(lVar1 + uVar27) = *(double *)(lVar1 + uVar27) * dVar37 + *pdVar2 * dVar39;
      ((double *)(lVar1 + uVar27))[1] = dVar9 * dVar37 + dVar12 * dVar39;
      pdVar2 = (double *)(param_1 + 0x50 + uVar27);
      *pdVar2 = dVar10 * dVar37 + dVar13 * dVar39;
      pdVar2[1] = dVar11 * dVar37 + dVar14 * dVar39;
      *(double *)(lVar1 + uVar25) = dVar37 * dVar66 + dVar39 * dVar56;
      ((double *)(lVar1 + uVar25))[1] = dVar37 * dVar69 + dVar39 * dVar63;
      pdVar2 = (double *)(param_1 + 0x50 + uVar25);
      *pdVar2 = dVar37 * dVar70 + dVar39 * dVar64;
      pdVar2[1] = dVar37 * dVar71 + dVar39 * dVar65;
      uVar26 = uVar26 + 2;
    } while (uVar26 < uVar23);
  }
  uVar26 = __real_ffffffffffffffff;
  dVar37 = __real_3ff0000000000000;
  if ((int)uVar23 < (int)param_5) {
    dVar39 = (double)fVar8;
    dVar56 = (double)param_3;
    lVar24 = (longlong)(int)uVar23;
    auVar38._0_12_ = ZEXT812(0);
    auVar38._12_4_ = 0;
    auVar7 = vcmpps_avx(ZEXT1632(auVar38),ZEXT1632(auVar38),0xf);
    auVar40._8_8_ = 0;
    auVar40._0_8_ = __real_3e45798ee2308c3a;
    uVar25 = CONCAT44(_UNK_150b54554,_UNK_150b54550);
    uVar27 = CONCAT44(_UNK_150b5455c,_UNK_150b54558);
    do {
      lVar1 = (ulonglong)*(ushort *)(param_4 + lVar24 * 2) * 0x60;
      pdVar2 = (double *)(param_1 + 0x10 + lVar1);
      dVar64 = *(double *)(param_1 + lVar1) * dVar39;
      dVar65 = ((double *)(param_1 + lVar1))[1] * dVar39;
      dVar70 = *pdVar2 * dVar39;
      dVar71 = pdVar2[1] * dVar39;
      pdVar2 = (double *)(param_2 + 0x10 + lVar1);
      auVar54._0_8_ = *(double *)(param_2 + lVar1) * dVar56;
      auVar54._8_8_ = ((double *)(param_2 + lVar1))[1] * dVar56;
      auVar54._16_8_ = *pdVar2 * dVar56;
      auVar54._24_8_ = pdVar2[1] * dVar56;
      auVar59._0_8_ = dVar64 * auVar54._0_8_;
      auVar59._8_8_ = dVar65 * auVar54._8_8_;
      auVar59._16_8_ = dVar70 * auVar54._16_8_;
      auVar59._24_8_ = dVar71 * auVar54._24_8_;
      auVar62 = vperm2f128_avx(auVar59,auVar59,1);
      auVar60._0_8_ = auVar59._0_8_ + auVar62._0_8_;
      auVar60._8_8_ = auVar59._8_8_ + auVar62._8_8_;
      auVar60._16_8_ = auVar59._16_8_ + auVar62._16_8_;
      auVar60._24_8_ = auVar59._24_8_ + auVar62._24_8_;
      auVar62 = vperm2f128_avx(auVar60,auVar60,1);
      auVar62 = vshufpd_avx(auVar60,auVar62,5);
      auVar61._0_8_ = auVar60._0_8_ + auVar62._0_8_;
      auVar61._8_8_ = auVar60._8_8_ + auVar62._8_8_;
      auVar61._16_8_ = auVar60._16_8_ + auVar62._16_8_;
      auVar61._24_8_ = auVar60._24_8_ + auVar62._24_8_;
      auVar55 = ZEXT1632(auVar38);
      auVar62 = vcmppd_avx(auVar55,auVar61,2);
      auVar50 = vpackssdw_avx(auVar62._0_16_,auVar62._16_16_);
      auVar52 = vpshufd_avx(auVar50,0x50);
      auVar50 = vpshufd_avx(auVar50,0xfa);
      auVar62._16_16_ = auVar50;
      auVar62._0_16_ = auVar52;
      auVar62 = vblendvps_avx(auVar55,auVar7,auVar62);
      auVar55 = vsubpd_avx(auVar55,auVar54);
      auVar68._0_4_ = ~auVar62._0_4_ & auVar55._0_4_;
      auVar68._4_4_ = ~auVar62._4_4_ & auVar55._4_4_;
      auVar68._8_4_ = ~auVar62._8_4_ & auVar55._8_4_;
      auVar68._12_4_ = ~auVar62._12_4_ & auVar55._12_4_;
      auVar68._16_4_ = ~auVar62._16_4_ & auVar55._16_4_;
      auVar68._20_4_ = ~auVar62._20_4_ & auVar55._20_4_;
      auVar68._24_4_ = ~auVar62._24_4_ & auVar55._24_4_;
      auVar68._28_4_ = ~auVar62._28_4_ & auVar55._28_4_;
      auVar55._0_8_ = (ulonglong)auVar54._0_8_ & auVar62._0_8_;
      auVar55._8_8_ = (ulonglong)auVar54._8_8_ & auVar62._8_8_;
      auVar55._16_8_ = (ulonglong)auVar54._16_8_ & auVar62._16_8_;
      auVar55._24_8_ = (ulonglong)auVar54._24_8_ & auVar62._24_8_;
      auVar55 = auVar55 | auVar68;
      dVar64 = dVar64 + auVar55._0_8_;
      dVar65 = dVar65 + auVar55._8_8_;
      dVar70 = dVar70 + auVar55._16_8_;
      dVar71 = dVar71 + auVar55._24_8_;
      auVar52._0_8_ = dVar64 * dVar64 + dVar70 * dVar70;
      auVar52._8_8_ = dVar65 * dVar65 + dVar71 * dVar71;
      auVar50 = vshufpd_avx(auVar52,auVar52,1);
      dVar63 = auVar52._0_8_ + auVar50._0_8_;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = dVar63;
      auVar50 = vcmpsd_avx(auVar40,auVar53,6);
      dVar63 = dVar37 / SQRT(dVar63);
      uVar57 = ~auVar50._0_8_ & uVar26;
      pdVar2 = (double *)(param_1 + 0x20 + lVar1);
      dVar66 = *pdVar2;
      dVar69 = pdVar2[1];
      *(ulonglong *)(param_1 + lVar1) = (ulonglong)(dVar64 * dVar63) & uVar57;
      ((ulonglong *)(param_1 + lVar1))[1] = (ulonglong)(dVar65 * dVar63) & uVar57;
      puVar6 = (ulonglong *)(param_1 + 0x10 + lVar1);
      *puVar6 = (ulonglong)(dVar70 * dVar63) & uVar57 | ~uVar57 & uVar25;
      puVar6[1] = (ulonglong)(dVar71 * dVar63) & uVar57 | ~uVar57 & uVar27;
      pdVar2 = (double *)(param_2 + 0x20 + lVar1);
      dVar63 = pdVar2[1];
      pdVar3 = (double *)(param_1 + 0x30 + lVar1);
      dVar70 = *pdVar3;
      dVar71 = pdVar3[1];
      pdVar3 = (double *)(param_2 + 0x30 + lVar1);
      dVar64 = *pdVar3;
      dVar65 = pdVar3[1];
      pdVar3 = (double *)(param_1 + 0x20 + lVar1);
      *pdVar3 = dVar66 * dVar39 + *pdVar2 * dVar56;
      pdVar3[1] = dVar69 * dVar39 + dVar63 * dVar56;
      pdVar2 = (double *)(param_1 + 0x30 + lVar1);
      *pdVar2 = dVar70 * dVar39 + dVar64 * dVar56;
      pdVar2[1] = dVar71 * dVar39 + dVar65 * dVar56;
      pdVar2 = (double *)(param_1 + 0x40 + lVar1);
      dVar63 = pdVar2[1];
      pdVar3 = (double *)(param_1 + 0x50 + lVar1);
      dVar64 = *pdVar3;
      dVar65 = pdVar3[1];
      pdVar3 = (double *)(param_2 + 0x40 + lVar1);
      dVar66 = pdVar3[1];
      pdVar4 = (double *)(param_2 + 0x50 + lVar1);
      dVar69 = *pdVar4;
      dVar70 = pdVar4[1];
      pdVar4 = (double *)(param_1 + 0x40 + lVar1);
      *pdVar4 = *pdVar2 * dVar39 + *pdVar3 * dVar56;
      pdVar4[1] = dVar63 * dVar39 + dVar66 * dVar56;
      pdVar2 = (double *)(param_1 + 0x50 + lVar1);
      *pdVar2 = dVar64 * dVar39 + dVar69 * dVar56;
      pdVar2[1] = dVar65 * dVar39 + dVar70 * dVar56;
      lVar24 = lVar24 + 1;
    } while ((int)param_5 != lVar24);
  }
  return;
}


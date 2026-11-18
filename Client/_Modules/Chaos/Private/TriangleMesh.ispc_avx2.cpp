// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// GetFaceNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx2 @ 1405bd680

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetFaceNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx2
               (longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
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
  undefined1 in_ZMM14 [64];
  undefined1 auVar46 [32];
  undefined1 in_ZMM15 [64];
  undefined1 auVar13 [32];
  undefined1 auVar21 [32];
  
  iVar4 = __real_00000008;
  iVar3 = __real_00000004;
  uVar7 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar7 = param_4;
  }
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar6 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar8 = 0x40;
    uVar6 = 0;
    auVar37._4_4_ = __real_0000000c;
    auVar37._0_4_ = __real_0000000c;
    auVar37._8_4_ = __real_0000000c;
    auVar37._12_4_ = __real_0000000c;
    auVar37._16_4_ = __real_0000000c;
    auVar37._20_4_ = __real_0000000c;
    auVar37._24_4_ = __real_0000000c;
    auVar37._28_4_ = __real_0000000c;
    auVar19._4_4_ = __real_00800000;
    auVar19._0_4_ = __real_00800000;
    auVar19._8_4_ = __real_00800000;
    auVar19._12_4_ = __real_00800000;
    auVar19._16_4_ = __real_00800000;
    auVar19._20_4_ = __real_00800000;
    auVar19._24_4_ = __real_00800000;
    auVar19._28_4_ = __real_00800000;
    auVar23._4_4_ = __real_3f800000;
    auVar23._0_4_ = __real_3f800000;
    auVar23._8_4_ = __real_3f800000;
    auVar23._12_4_ = __real_3f800000;
    auVar23._16_4_ = __real_3f800000;
    auVar23._20_4_ = __real_3f800000;
    auVar23._24_4_ = __real_3f800000;
    auVar23._28_4_ = __real_3f800000;
    do {
      auVar24 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar8);
      auVar28 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar8);
      auVar10 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar28);
      auVar43 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar24);
      auVar44 = vpblendd_avx2(auVar43,auVar10,0x88);
      auVar10 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar28);
      auVar43 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(param_3 + lVar8));
      auVar41 = vpblendd_avx2(auVar43,auVar10,0x13);
      auVar45._16_16_ = ZEXT116(0) * auVar44._16_16_ | ZEXT116(1) * auVar41._0_16_;
      auVar45._0_16_ = ZEXT116(0) * auVar41._0_16_ | ZEXT116(1) * auVar44._0_16_;
      auVar10 = vpcmpeqd_avx2(in_ZMM14._0_32_,in_ZMM14._0_32_);
      auVar17 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar10);
      auVar43 = vpmulld_avx2(auVar45,auVar37);
      auVar10 = vpcmpeqd_avx2(in_ZMM15._0_32_,in_ZMM15._0_32_);
      auVar26 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar10);
      auVar10._0_4_ = iVar4 + auVar43._0_4_;
      auVar10._4_4_ = iVar4 + auVar43._4_4_;
      auVar10._8_4_ = iVar4 + auVar43._8_4_;
      auVar10._12_4_ = iVar4 + auVar43._12_4_;
      auVar10._16_4_ = iVar4 + auVar43._16_4_;
      auVar10._20_4_ = iVar4 + auVar43._20_4_;
      auVar10._24_4_ = iVar4 + auVar43._24_4_;
      auVar10._28_4_ = iVar4 + auVar43._28_4_;
      auVar43 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar31 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar43);
      auVar43 = vperm2i128_avx2(auVar44,auVar41,0x31);
      auVar10 = vpcmpeqd_avx2(auVar10,auVar10);
      auVar46 = vgatherdps(ZEXT832(0),auVar10);
      in_ZMM15 = ZEXT3264(auVar46);
      auVar43 = vpmulld_avx2(auVar43,auVar37);
      auVar10 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar10 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar10);
      auVar24 = vpblendd_avx2(auVar28,auVar24,0x24);
      auVar28 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar24);
      auVar24 = vpcmpeqd_avx2(auVar43,auVar43);
      auVar44 = vgatherdps(ZEXT432(0) << 0x20,auVar24);
      auVar40._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar40._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar24 = vpermd_avx2(auVar40,*(undefined1 (*) [32])(param_3 + lVar8));
      auVar28 = vpblendd_avx2(auVar28,auVar24,0xe0);
      auVar24 = vpcmpeqd_avx2(auVar40,auVar40);
      auVar43 = vgatherdps(ZEXT832(0),auVar24);
      auVar28 = vpmulld_avx2(auVar28,auVar37);
      auVar24._0_4_ = auVar28._0_4_ + iVar3;
      auVar24._4_4_ = auVar28._4_4_ + iVar3;
      auVar24._8_4_ = auVar28._8_4_ + iVar3;
      auVar24._12_4_ = auVar28._12_4_ + iVar3;
      auVar24._16_4_ = auVar28._16_4_ + iVar3;
      auVar24._20_4_ = auVar28._20_4_ + iVar3;
      auVar24._24_4_ = auVar28._24_4_ + iVar3;
      auVar24._28_4_ = auVar28._28_4_ + iVar3;
      auVar28 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar45 = vgatherdps(ZEXT832(0),auVar28);
      in_ZMM14 = ZEXT3264(auVar45);
      auVar24 = vpcmpeqd_avx2(auVar24,auVar24);
      auVar41 = vgatherdps(ZEXT832(0),auVar24);
      auVar24 = vsubps_avx(auVar46,auVar17);
      auVar28 = vsubps_avx(auVar43,auVar17);
      auVar10 = vsubps_avx(auVar10,auVar26);
      auVar43 = vsubps_avx(auVar45,auVar26);
      auVar44 = vsubps_avx(auVar44,auVar31);
      auVar41 = vsubps_avx(auVar41,auVar31);
      auVar42._0_4_ = auVar10._0_4_ * auVar28._0_4_ - auVar24._0_4_ * auVar43._0_4_;
      auVar42._4_4_ = auVar10._4_4_ * auVar28._4_4_ - auVar24._4_4_ * auVar43._4_4_;
      auVar42._8_4_ = auVar10._8_4_ * auVar28._8_4_ - auVar24._8_4_ * auVar43._8_4_;
      auVar42._12_4_ = auVar10._12_4_ * auVar28._12_4_ - auVar24._12_4_ * auVar43._12_4_;
      auVar42._16_4_ = auVar10._16_4_ * auVar28._16_4_ - auVar24._16_4_ * auVar43._16_4_;
      auVar42._20_4_ = auVar10._20_4_ * auVar28._20_4_ - auVar24._20_4_ * auVar43._20_4_;
      auVar42._24_4_ = auVar10._24_4_ * auVar28._24_4_ - auVar24._24_4_ * auVar43._24_4_;
      auVar42._28_4_ = auVar10._28_4_ * auVar28._28_4_ - auVar24._28_4_ * auVar43._28_4_;
      auVar17._0_4_ = auVar44._0_4_ * auVar43._0_4_ - auVar10._0_4_ * auVar41._0_4_;
      auVar17._4_4_ = auVar44._4_4_ * auVar43._4_4_ - auVar10._4_4_ * auVar41._4_4_;
      auVar17._8_4_ = auVar44._8_4_ * auVar43._8_4_ - auVar10._8_4_ * auVar41._8_4_;
      auVar17._12_4_ = auVar44._12_4_ * auVar43._12_4_ - auVar10._12_4_ * auVar41._12_4_;
      auVar17._16_4_ = auVar44._16_4_ * auVar43._16_4_ - auVar10._16_4_ * auVar41._16_4_;
      auVar17._20_4_ = auVar44._20_4_ * auVar43._20_4_ - auVar10._20_4_ * auVar41._20_4_;
      auVar17._24_4_ = auVar44._24_4_ * auVar43._24_4_ - auVar10._24_4_ * auVar41._24_4_;
      auVar17._28_4_ = auVar44._28_4_ * auVar43._28_4_ - auVar10._28_4_ * auVar41._28_4_;
      auVar43._0_4_ = auVar24._0_4_ * auVar41._0_4_ - auVar44._0_4_ * auVar28._0_4_;
      auVar43._4_4_ = auVar24._4_4_ * auVar41._4_4_ - auVar44._4_4_ * auVar28._4_4_;
      auVar43._8_4_ = auVar24._8_4_ * auVar41._8_4_ - auVar44._8_4_ * auVar28._8_4_;
      auVar43._12_4_ = auVar24._12_4_ * auVar41._12_4_ - auVar44._12_4_ * auVar28._12_4_;
      auVar43._16_4_ = auVar24._16_4_ * auVar41._16_4_ - auVar44._16_4_ * auVar28._16_4_;
      auVar43._20_4_ = auVar24._20_4_ * auVar41._20_4_ - auVar44._20_4_ * auVar28._20_4_;
      auVar43._24_4_ = auVar24._24_4_ * auVar41._24_4_ - auVar44._24_4_ * auVar28._24_4_;
      auVar43._28_4_ = auVar24._28_4_ * auVar41._28_4_ - auVar44._28_4_ * auVar28._28_4_;
      auVar26._0_4_ =
           auVar42._0_4_ * auVar42._0_4_ +
           auVar17._0_4_ * auVar17._0_4_ + auVar43._0_4_ * auVar43._0_4_;
      auVar26._4_4_ =
           auVar42._4_4_ * auVar42._4_4_ +
           auVar17._4_4_ * auVar17._4_4_ + auVar43._4_4_ * auVar43._4_4_;
      auVar26._8_4_ =
           auVar42._8_4_ * auVar42._8_4_ +
           auVar17._8_4_ * auVar17._8_4_ + auVar43._8_4_ * auVar43._8_4_;
      auVar26._12_4_ =
           auVar42._12_4_ * auVar42._12_4_ +
           auVar17._12_4_ * auVar17._12_4_ + auVar43._12_4_ * auVar43._12_4_;
      auVar26._16_4_ =
           auVar42._16_4_ * auVar42._16_4_ +
           auVar17._16_4_ * auVar17._16_4_ + auVar43._16_4_ * auVar43._16_4_;
      auVar26._20_4_ =
           auVar42._20_4_ * auVar42._20_4_ +
           auVar17._20_4_ * auVar17._20_4_ + auVar43._20_4_ * auVar43._20_4_;
      auVar26._24_4_ =
           auVar42._24_4_ * auVar42._24_4_ +
           auVar17._24_4_ * auVar17._24_4_ + auVar43._24_4_ * auVar43._24_4_;
      auVar26._28_4_ =
           auVar42._28_4_ * auVar42._28_4_ +
           auVar17._28_4_ * auVar17._28_4_ + auVar43._28_4_ * auVar43._28_4_;
      auVar24 = vsqrtps_avx(auVar26);
      auVar28 = vdivps_avx(auVar17,auVar24);
      auVar43 = vdivps_avx(auVar43,auVar24);
      auVar44 = vdivps_avx(auVar42,auVar24);
      auVar24 = vcmpps_avx(auVar26,auVar19,2);
      auVar10 = vblendvps_avx(auVar28,auVar23,auVar24);
      auVar15._0_4_ = ~auVar24._0_4_ & auVar43._0_4_;
      auVar15._4_4_ = ~auVar24._4_4_ & auVar43._4_4_;
      auVar15._8_4_ = ~auVar24._8_4_ & auVar43._8_4_;
      auVar15._12_4_ = ~auVar24._12_4_ & auVar43._12_4_;
      auVar41._16_4_ = ~auVar24._16_4_ & auVar43._16_4_;
      auVar41._0_16_ = auVar15;
      auVar41._20_4_ = ~auVar24._20_4_ & auVar43._20_4_;
      auVar41._24_4_ = ~auVar24._24_4_ & auVar43._24_4_;
      auVar41._28_4_ = ~auVar24._28_4_ & auVar43._28_4_;
      auVar31._0_4_ = ~auVar24._0_4_ & auVar44._0_4_;
      auVar31._4_4_ = ~auVar24._4_4_ & auVar44._4_4_;
      auVar31._8_4_ = ~auVar24._8_4_ & auVar44._8_4_;
      auVar31._12_4_ = ~auVar24._12_4_ & auVar44._12_4_;
      auVar31._16_4_ = ~auVar24._16_4_ & auVar44._16_4_;
      auVar31._20_4_ = ~auVar24._20_4_ & auVar44._20_4_;
      auVar31._24_4_ = ~auVar24._24_4_ & auVar44._24_4_;
      auVar31._28_4_ = ~auVar24._28_4_ & auVar44._28_4_;
      auVar28._16_16_ = auVar15;
      auVar28._0_16_ = auVar10._0_16_;
      auVar24 = vshufpd_avx(auVar10,auVar28,2);
      auVar28 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar24);
      auVar43 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar31);
      auVar24 = vpermpd_avx2(auVar41,0xe9);
      auVar24 = vblendps_avx(auVar43,auVar24,7);
      auVar46._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar46._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar43 = vpermps_avx2(auVar46,auVar24);
      auVar28 = vblendps_avx(auVar28,auVar43,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar8) = auVar28;
      auVar28 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar24);
      auVar24 = vshufpd_avx(auVar10,auVar10,1);
      auVar24 = vblendps_avx(auVar28,auVar24,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar8) = auVar24;
      auVar44._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar44._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar28 = vpermps_avx2(auVar44,auVar41);
      auVar24 = vpermpd_avx2(auVar10,0xff);
      auVar24 = vblendps_avx(auVar28,auVar24,3);
      auVar24 = vblendps_avx(auVar24,auVar31,0xe0);
      auVar24 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar24);
      *(undefined1 (*) [32])(param_1 + lVar8) = auVar24;
      lVar8 = lVar8 + 0x60;
      uVar6 = uVar6 + 8;
    } while ((int)uVar6 < (int)(uVar7 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar6) {
      return;
    }
  }
  auVar11._4_4_ = uVar6;
  auVar11._0_4_ = uVar6;
  auVar11._8_4_ = uVar6;
  auVar11._12_4_ = uVar6;
  auVar11._16_4_ = uVar6;
  auVar11._20_4_ = uVar6;
  auVar11._24_4_ = uVar6;
  auVar11._28_4_ = uVar6;
  auVar37 = vpor_avx2(auVar11,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar18._4_4_ = param_4;
  auVar18._0_4_ = param_4;
  auVar18._8_4_ = param_4;
  auVar18._12_4_ = param_4;
  auVar18._16_4_ = param_4;
  auVar18._20_4_ = param_4;
  auVar18._24_4_ = param_4;
  auVar18._28_4_ = param_4;
  auVar37 = vpcmpgtd_avx2(auVar18,auVar37);
  pauVar1 = (undefined1 (*) [32])(param_3 + (ulonglong)uVar6 * 0xc);
  uVar7 = vmovmskps_avx(auVar37);
  if (uVar7 == 0xff) {
    auVar19 = pauVar1[1];
    auVar23 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                          auVar19);
    auVar24 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                          *pauVar1);
    auVar23 = vpblendd_avx2(auVar24,auVar23,0x88);
    auVar24 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                          auVar19);
    auVar28 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                          pauVar1[2]);
    auVar24 = vpblendd_avx2(auVar28,auVar24,0x13);
    auVar32._16_16_ = ZEXT116(0) * auVar23._16_16_ | ZEXT116(1) * auVar24._0_16_;
    auVar32._0_16_ = ZEXT116(0) * auVar24._0_16_ | ZEXT116(1) * auVar23._0_16_;
    auVar23 = vperm2i128_avx2(auVar23,auVar24,0x31);
    auVar19 = vpblendd_avx2(auVar19,*pauVar1,0x24);
    auVar19 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                          auVar19);
    auVar27._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar27._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar24 = vpermd_avx2(auVar27,pauVar1[2]);
    auVar19 = vpblendd_avx2(auVar19,auVar24,0xe0);
  }
  else {
    auVar32 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar37);
    auVar23 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
    auVar19 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  }
  cVar5 = (char)uVar7;
  auVar28 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  auVar38._4_4_ = __real_0000000c;
  auVar38._0_4_ = __real_0000000c;
  auVar38._8_4_ = __real_0000000c;
  auVar38._12_4_ = __real_0000000c;
  auVar38._16_4_ = __real_0000000c;
  auVar38._20_4_ = __real_0000000c;
  auVar38._24_4_ = __real_0000000c;
  auVar38._28_4_ = __real_0000000c;
  vpmulld_avx2(auVar32,auVar38);
  auVar43 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  auVar44 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  vpmulld_avx2(auVar23,auVar38);
  auVar23 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  auVar26 = vgatherdps(ZEXT832(0),auVar37);
  auVar17 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  vpmulld_avx2(auVar19,auVar38);
  auVar24 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  auVar41 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  auVar10 = vgatherdps(ZEXT432(0) << 0x20,auVar37);
  auVar37 = vsubps_avx(auVar23,auVar28);
  auVar19 = vsubps_avx(auVar26,auVar43);
  auVar23 = vsubps_avx(auVar17,auVar44);
  auVar24 = vsubps_avx(auVar24,auVar28);
  auVar28 = vsubps_avx(auVar41,auVar43);
  auVar10 = vsubps_avx(auVar10,auVar44);
  auVar33._0_4_ = auVar19._0_4_ * auVar24._0_4_ - auVar37._0_4_ * auVar28._0_4_;
  auVar33._4_4_ = auVar19._4_4_ * auVar24._4_4_ - auVar37._4_4_ * auVar28._4_4_;
  auVar33._8_4_ = auVar19._8_4_ * auVar24._8_4_ - auVar37._8_4_ * auVar28._8_4_;
  auVar33._12_4_ = auVar19._12_4_ * auVar24._12_4_ - auVar37._12_4_ * auVar28._12_4_;
  auVar33._16_4_ = auVar19._16_4_ * auVar24._16_4_ - auVar37._16_4_ * auVar28._16_4_;
  auVar33._20_4_ = auVar19._20_4_ * auVar24._20_4_ - auVar37._20_4_ * auVar28._20_4_;
  auVar33._24_4_ = auVar19._24_4_ * auVar24._24_4_ - auVar37._24_4_ * auVar28._24_4_;
  auVar33._28_4_ = auVar19._28_4_ * auVar24._28_4_ - auVar37._28_4_ * auVar28._28_4_;
  auVar34._0_4_ = auVar23._0_4_ * auVar28._0_4_ - auVar19._0_4_ * auVar10._0_4_;
  auVar34._4_4_ = auVar23._4_4_ * auVar28._4_4_ - auVar19._4_4_ * auVar10._4_4_;
  auVar34._8_4_ = auVar23._8_4_ * auVar28._8_4_ - auVar19._8_4_ * auVar10._8_4_;
  auVar34._12_4_ = auVar23._12_4_ * auVar28._12_4_ - auVar19._12_4_ * auVar10._12_4_;
  auVar34._16_4_ = auVar23._16_4_ * auVar28._16_4_ - auVar19._16_4_ * auVar10._16_4_;
  auVar34._20_4_ = auVar23._20_4_ * auVar28._20_4_ - auVar19._20_4_ * auVar10._20_4_;
  auVar34._24_4_ = auVar23._24_4_ * auVar28._24_4_ - auVar19._24_4_ * auVar10._24_4_;
  auVar34._28_4_ = auVar23._28_4_ * auVar28._28_4_ - auVar19._28_4_ * auVar10._28_4_;
  auVar39._0_4_ = auVar37._0_4_ * auVar10._0_4_ - auVar23._0_4_ * auVar24._0_4_;
  auVar39._4_4_ = auVar37._4_4_ * auVar10._4_4_ - auVar23._4_4_ * auVar24._4_4_;
  auVar39._8_4_ = auVar37._8_4_ * auVar10._8_4_ - auVar23._8_4_ * auVar24._8_4_;
  auVar39._12_4_ = auVar37._12_4_ * auVar10._12_4_ - auVar23._12_4_ * auVar24._12_4_;
  auVar39._16_4_ = auVar37._16_4_ * auVar10._16_4_ - auVar23._16_4_ * auVar24._16_4_;
  auVar39._20_4_ = auVar37._20_4_ * auVar10._20_4_ - auVar23._20_4_ * auVar24._20_4_;
  auVar39._24_4_ = auVar37._24_4_ * auVar10._24_4_ - auVar23._24_4_ * auVar24._24_4_;
  auVar39._28_4_ = auVar37._28_4_ * auVar10._28_4_ - auVar23._28_4_ * auVar24._28_4_;
  auVar12._0_4_ =
       auVar33._0_4_ * auVar33._0_4_ + auVar34._0_4_ * auVar34._0_4_ + auVar39._0_4_ * auVar39._0_4_
  ;
  auVar12._4_4_ =
       auVar33._4_4_ * auVar33._4_4_ + auVar34._4_4_ * auVar34._4_4_ + auVar39._4_4_ * auVar39._4_4_
  ;
  auVar12._8_4_ =
       auVar33._8_4_ * auVar33._8_4_ + auVar34._8_4_ * auVar34._8_4_ + auVar39._8_4_ * auVar39._8_4_
  ;
  auVar12._12_4_ =
       auVar33._12_4_ * auVar33._12_4_ +
       auVar34._12_4_ * auVar34._12_4_ + auVar39._12_4_ * auVar39._12_4_;
  auVar12._16_4_ =
       auVar33._16_4_ * auVar33._16_4_ +
       auVar34._16_4_ * auVar34._16_4_ + auVar39._16_4_ * auVar39._16_4_;
  auVar12._20_4_ =
       auVar33._20_4_ * auVar33._20_4_ +
       auVar34._20_4_ * auVar34._20_4_ + auVar39._20_4_ * auVar39._20_4_;
  auVar12._24_4_ =
       auVar33._24_4_ * auVar33._24_4_ +
       auVar34._24_4_ * auVar34._24_4_ + auVar39._24_4_ * auVar39._24_4_;
  auVar12._28_4_ =
       auVar33._28_4_ * auVar33._28_4_ +
       auVar34._28_4_ * auVar34._28_4_ + auVar39._28_4_ * auVar39._28_4_;
  auVar19 = vsqrtps_avx(auVar12);
  auVar37 = vdivps_avx(auVar34,auVar19);
  auVar23 = vdivps_avx(auVar39,auVar19);
  auVar35._4_4_ = __real_00800000;
  auVar35._0_4_ = __real_00800000;
  auVar35._8_4_ = __real_00800000;
  auVar35._12_4_ = __real_00800000;
  auVar35._16_4_ = __real_00800000;
  auVar35._20_4_ = __real_00800000;
  auVar35._24_4_ = __real_00800000;
  auVar35._28_4_ = __real_00800000;
  auVar24 = vdivps_avx(auVar33,auVar19);
  auVar19 = vcmpps_avx(auVar12,auVar35,2);
  auVar20._4_4_ = __real_3f800000;
  auVar20._0_4_ = __real_3f800000;
  auVar20._8_4_ = __real_3f800000;
  auVar20._12_4_ = __real_3f800000;
  auVar20._16_4_ = __real_3f800000;
  auVar20._20_4_ = __real_3f800000;
  auVar20._24_4_ = __real_3f800000;
  auVar20._28_4_ = __real_3f800000;
  auVar37 = vblendvps_avx(auVar37,auVar20,auVar19);
  auVar16._0_4_ = ~auVar19._0_4_ & auVar23._0_4_;
  auVar16._4_4_ = ~auVar19._4_4_ & auVar23._4_4_;
  auVar16._8_4_ = ~auVar19._8_4_ & auVar23._8_4_;
  auVar16._12_4_ = ~auVar19._12_4_ & auVar23._12_4_;
  auVar21._16_4_ = ~auVar19._16_4_ & auVar23._16_4_;
  auVar21._0_16_ = auVar16;
  auVar21._20_4_ = ~auVar19._20_4_ & auVar23._20_4_;
  auVar21._24_4_ = ~auVar19._24_4_ & auVar23._24_4_;
  auVar21._28_4_ = ~auVar19._28_4_ & auVar23._28_4_;
  auVar9._0_4_ = ~auVar19._0_4_ & auVar24._0_4_;
  auVar9._4_4_ = ~auVar19._4_4_ & auVar24._4_4_;
  auVar9._8_4_ = ~auVar19._8_4_ & auVar24._8_4_;
  auVar9._12_4_ = ~auVar19._12_4_ & auVar24._12_4_;
  auVar13._16_4_ = ~auVar19._16_4_ & auVar24._16_4_;
  auVar13._0_16_ = auVar9;
  auVar13._20_4_ = ~auVar19._20_4_ & auVar24._20_4_;
  auVar13._24_4_ = ~auVar19._24_4_ & auVar24._24_4_;
  auVar13._28_4_ = ~auVar19._28_4_ & auVar24._28_4_;
  pauVar1 = (undefined1 (*) [32])(param_1 + (ulonglong)uVar6 * 0xc);
  auVar15 = auVar37._0_16_;
  auVar25 = auVar37._16_16_;
  if (cVar5 == -1) {
    auVar29._16_16_ = auVar16;
    auVar29._0_16_ = auVar15;
    auVar23 = vshufpd_avx(auVar37,auVar29,2);
    auVar24 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar13);
    auVar19 = vpermpd_avx2(auVar21,0xe9);
    auVar19 = vblendps_avx(auVar24,auVar19,7);
    auVar36._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar36._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar24 = vpermps_avx2(auVar36,auVar19);
    auVar23 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar23);
    auVar23 = vblendps_avx(auVar23,auVar24,0xa4);
    *pauVar1 = auVar23;
    auVar23 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar19);
    auVar19 = vshufpd_avx(auVar37,auVar37,1);
    auVar19 = vblendps_avx(auVar23,auVar19,0x92);
    pauVar1[1] = auVar19;
    auVar30._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar30._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar19 = vpermps_avx2(auVar30,auVar21);
    auVar37 = vpermpd_avx2(auVar37,0xff);
    auVar37 = vblendps_avx(auVar19,auVar37,3);
    auVar37 = vblendps_avx(auVar37,auVar13,0xe0);
    auVar37 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar37);
    pauVar1[2] = auVar37;
  }
  else {
    auVar22 = auVar21._16_16_;
    auVar14 = auVar13._16_16_;
    if ((uVar7 & 1) != 0) {
      *(int *)*pauVar1 = auVar37._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar2 = vextractps_avx(auVar15,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
    }
    if ((uVar7 & 4) != 0) {
      uVar2 = vextractps_avx(auVar15,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
    }
    if ((uVar7 & 8) != 0) {
      uVar2 = vextractps_avx(auVar15,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar2;
    }
    if ((uVar7 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x10) = auVar37._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar25,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar25,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar2;
    }
    if (cVar5 < '\0') {
      uVar2 = vextractps_avx(auVar25,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
    }
    if ((uVar7 & 1) != 0) {
      *(uint *)(*pauVar1 + 4) = auVar16._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar2 = vextractps_avx(auVar16,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
    }
    if ((uVar7 & 4) != 0) {
      uVar2 = vextractps_avx(auVar16,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
    }
    if ((uVar7 & 8) != 0) {
      uVar2 = vextractps_avx(auVar16,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar2;
    }
    if ((uVar7 & 0x10) != 0) {
      *(uint *)(pauVar1[1] + 0x14) = auVar21._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar22,1);
      *(undefined4 *)pauVar1[2] = uVar2;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar22,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
    }
    if (cVar5 < '\0') {
      uVar2 = vextractps_avx(auVar22,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
    }
    if ((uVar7 & 1) != 0) {
      *(uint *)(*pauVar1 + 8) = auVar9._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar2 = vextractps_avx(auVar9,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
    }
    if ((uVar7 & 4) != 0) {
      uVar2 = vextractps_avx(auVar9,2);
      *(undefined4 *)pauVar1[1] = uVar2;
    }
    if ((uVar7 & 8) != 0) {
      uVar2 = vextractps_avx(auVar9,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
    }
    if ((uVar7 & 0x10) != 0) {
      *(uint *)(pauVar1[1] + 0x18) = auVar13._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar14,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar2;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar14,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
    }
    if (cVar5 < '\0') {
      uVar2 = vextractps_avx(auVar14,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
    }
  }
  return;
}

// GetPointNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unTArrayInt_5D__3E_CuniCuniCuni_avx2 @ 1405bdf50

void GetPointNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unTArrayInt_5D__3E_CuniCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
               uint param_6,undefined1 (*param_7) [32])

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [32];
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar14 [64];
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
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
  undefined1 auVar77 [16];
  
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  auVar13 = ZEXT3264(*param_7);
  auVar4 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  auVar14 = ZEXT3264(auVar4);
  auVar4 = auVar4 & ~*param_7;
  if ((((((((SUB321(auVar4 >> 0x1f,0) & 1) == 0 && (SUB321(auVar4 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar4 >> 0x5f,0) & 1) == 0) && SUB321(auVar4 >> 0x7f,0) == '\0') &&
        (SUB321(auVar4 >> 0x9f,0) & 1) == 0) && SUB321(auVar4 >> 0xbf,0) == '\0') &&
      (SUB321(auVar4 >> 0xdf,0) & 1) == 0) && -1 < auVar4[0x1f]) {
    if (0 < (int)param_6) {
      lVar10 = (longlong)param_4;
      if (param_6 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          uVar1 = *(uint *)(param_3 + 8 + uVar9 * 0x10);
          if ((int)uVar1 < 1) {
            auVar19 = SUB6416(ZEXT864(0),0);
          }
          else {
            lVar12 = *(longlong *)(param_3 + uVar9 * 0x10);
            if (uVar1 == 1) {
              lVar11 = 0;
              auVar37 = SUB6416(ZEXT864(0),0);
            }
            else {
              auVar21 = ZEXT864(0);
              lVar11 = 0;
              do {
                uVar2 = *(uint *)(lVar12 + lVar11 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar37._8_8_ = 0;
                  auVar37._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar19 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar21 = ZEXT1664(CONCAT412(auVar19._12_4_ + auVar21._12_4_,
                                               CONCAT48(auVar19._8_4_ + auVar21._8_4_,
                                                        CONCAT44(auVar19._4_4_ + auVar21._4_4_,
                                                                 auVar19._0_4_ + auVar21._0_4_))));
                }
                uVar2 = *(uint *)(lVar12 + 4 + lVar11 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar38._8_8_ = 0;
                  auVar38._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar19 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar21 = ZEXT1664(CONCAT412(auVar19._12_4_ + auVar21._12_4_,
                                               CONCAT48(auVar19._8_4_ + auVar21._8_4_,
                                                        CONCAT44(auVar19._4_4_ + auVar21._4_4_,
                                                                 auVar19._0_4_ + auVar21._0_4_))));
                }
                auVar19 = auVar21._0_16_;
                lVar11 = lVar11 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar11);
              auVar37 = auVar19;
              if ((uVar1 & 1) == 0) goto LAB_1405bec27;
            }
            uVar1 = *(uint *)(lVar12 + lVar11 * 4);
            auVar19 = auVar37;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar39._8_8_ = 0;
              auVar39._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar38 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc
                                                               )),0x28);
              auVar19._0_4_ = auVar38._0_4_ + auVar37._0_4_;
              auVar19._4_4_ = auVar38._4_4_ + auVar37._4_4_;
              auVar19._8_4_ = auVar38._8_4_ + auVar37._8_4_;
              auVar19._12_4_ = auVar38._12_4_ + auVar37._12_4_;
            }
          }
LAB_1405bec27:
          auVar62._0_4_ = auVar19._0_4_;
          auVar40._0_4_ = auVar62._0_4_ * auVar62._0_4_;
          auVar72._0_4_ = auVar19._4_4_;
          auVar40._4_4_ = auVar72._0_4_ * auVar72._0_4_;
          auVar77._0_4_ = auVar19._8_4_;
          auVar40._8_4_ = auVar77._0_4_ * auVar77._0_4_;
          auVar53._0_4_ = auVar19._12_4_;
          auVar40._12_4_ = auVar53._0_4_ * auVar53._0_4_;
          auVar37 = vmovshdup_avx(auVar40);
          auVar38 = vshufpd_avx(auVar40,auVar40,1);
          fVar3 = auVar38._0_4_ + auVar40._0_4_ + auVar37._0_4_;
          if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) {
            if (fVar5 <= fVar3) {
              auVar37 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
              auVar55._0_4_ = auVar37._0_4_;
              auVar55._0_4_ =
                   (-(fVar3 * fVar7 * auVar55._0_4_ * auVar55._0_4_) + fVar7) * auVar55._0_4_ +
                   auVar55._0_4_;
              auVar38 = ZEXT416((uint)((-(fVar3 * fVar7 * auVar55._0_4_ * auVar55._0_4_) + fVar7) *
                                       auVar55._0_4_ + auVar55._0_4_));
              auVar37 = vblendps_avx(auVar19,auVar13._0_16_,8);
              auVar13 = ZEXT1664(auVar37);
              auVar37 = vshufps_avx(auVar38,auVar14._0_16_,0xe0);
              auVar37 = vinsertps_avx(auVar37,auVar38,0x20);
              auVar14 = ZEXT1664(auVar37);
              auVar62._0_4_ = auVar62._0_4_ * auVar37._0_4_;
              auVar62._4_4_ = auVar72._0_4_ * auVar37._4_4_;
              auVar62._8_4_ = auVar77._0_4_ * auVar37._8_4_;
              auVar62._12_4_ = auVar53._0_4_ * auVar37._12_4_;
              auVar37 = vmovshdup_avx(auVar62);
              uVar22 = auVar37._0_4_;
              auVar37 = vshufpd_avx(auVar62,auVar62,1);
              uVar23 = auVar37._0_4_;
            }
            else {
              auVar62._0_4_ = 0.0;
              uVar22 = 0;
              uVar23 = 0;
            }
          }
          else {
            auVar37 = vshufpd_avx(auVar19,auVar19,1);
            uVar23 = auVar37._0_4_;
            auVar37 = vmovshdup_avx(auVar19);
            uVar22 = auVar37._0_4_;
          }
          lVar12 = param_1 + uVar9 * 0xc;
          *(float *)(lVar12 + lVar10 * 0xc) = auVar62._0_4_;
          *(undefined4 *)(lVar12 + 4 + lVar10 * 0xc) = uVar22;
          *(undefined4 *)(lVar12 + 8 + lVar10 * 0xc) = uVar23;
          lVar12 = (uVar9 | 1) * 0x10;
          uVar1 = *(uint *)(param_3 + 8 + lVar12);
          if ((int)uVar1 < 1) {
            auVar41 = ZEXT816(0);
          }
          else {
            lVar12 = *(longlong *)(param_3 + lVar12);
            if (uVar1 == 1) {
              lVar11 = 0;
              auVar37 = SUB6416(ZEXT864(0),0);
            }
            else {
              auVar21 = ZEXT864(0);
              lVar11 = 0;
              do {
                uVar2 = *(uint *)(lVar12 + lVar11 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar48._8_8_ = 0;
                  auVar48._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar37 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar37._12_4_,
                                               CONCAT48(auVar21._8_4_ + auVar37._8_4_,
                                                        CONCAT44(auVar21._4_4_ + auVar37._4_4_,
                                                                 auVar21._0_4_ + auVar37._0_4_))));
                }
                uVar2 = *(uint *)(lVar12 + 4 + lVar11 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar49._8_8_ = 0;
                  auVar49._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar37 = vinsertps_avx(auVar49,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar37._12_4_,
                                               CONCAT48(auVar21._8_4_ + auVar37._8_4_,
                                                        CONCAT44(auVar21._4_4_ + auVar37._4_4_,
                                                                 auVar21._0_4_ + auVar37._0_4_))));
                }
                auVar41 = auVar21._0_16_;
                lVar11 = lVar11 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar11);
              auVar37 = auVar41;
              if ((uVar1 & 1) == 0) goto LAB_1405bedcb;
            }
            uVar1 = *(uint *)(lVar12 + lVar11 * 4);
            auVar41 = auVar37;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar50._8_8_ = 0;
              auVar50._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar38 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc
                                                               )),0x28);
              auVar41._0_4_ = auVar37._0_4_ + auVar38._0_4_;
              auVar41._4_4_ = auVar37._4_4_ + auVar38._4_4_;
              auVar41._8_4_ = auVar37._8_4_ + auVar38._8_4_;
              auVar41._12_4_ = auVar37._12_4_ + auVar38._12_4_;
            }
          }
LAB_1405bedcb:
          auVar72._0_4_ = auVar41._0_4_;
          auVar51._0_4_ = auVar72._0_4_ * auVar72._0_4_;
          auVar62._0_4_ = auVar41._4_4_;
          auVar51._4_4_ = auVar62._0_4_ * auVar62._0_4_;
          auVar77._0_4_ = auVar41._8_4_;
          auVar51._8_4_ = auVar77._0_4_ * auVar77._0_4_;
          auVar53._0_4_ = auVar41._12_4_;
          auVar51._12_4_ = auVar53._0_4_ * auVar53._0_4_;
          auVar37 = vmovshdup_avx(auVar51);
          auVar38 = vshufpd_avx(auVar51,auVar51,1);
          fVar3 = auVar38._0_4_ + auVar51._0_4_ + auVar37._0_4_;
          if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) {
            if (fVar5 <= fVar3) {
              auVar37 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
              auVar55._0_4_ = auVar37._0_4_;
              auVar55._0_4_ =
                   (-(fVar3 * fVar7 * auVar55._0_4_ * auVar55._0_4_) + fVar7) * auVar55._0_4_ +
                   auVar55._0_4_;
              auVar38 = ZEXT416((uint)((-(fVar3 * fVar7 * auVar55._0_4_ * auVar55._0_4_) + fVar7) *
                                       auVar55._0_4_ + auVar55._0_4_));
              auVar37 = vblendps_avx(auVar41,auVar13._0_16_,8);
              auVar13 = ZEXT1664(auVar37);
              auVar37 = vshufps_avx(auVar38,auVar14._0_16_,0xe0);
              auVar37 = vinsertps_avx(auVar37,auVar38,0x20);
              auVar14 = ZEXT1664(auVar37);
              auVar72._0_4_ = auVar72._0_4_ * auVar37._0_4_;
              auVar72._4_4_ = auVar62._0_4_ * auVar37._4_4_;
              auVar72._8_4_ = auVar77._0_4_ * auVar37._8_4_;
              auVar72._12_4_ = auVar53._0_4_ * auVar37._12_4_;
              auVar37 = vmovshdup_avx(auVar72);
              uVar22 = auVar37._0_4_;
              auVar37 = vshufpd_avx(auVar72,auVar72,1);
              uVar23 = auVar37._0_4_;
            }
            else {
              auVar72._0_4_ = 0.0;
              uVar22 = 0;
              uVar23 = 0;
            }
          }
          else {
            auVar37 = vshufpd_avx(auVar41,auVar41,1);
            uVar23 = auVar37._0_4_;
            auVar37 = vmovshdup_avx(auVar41);
            uVar22 = auVar37._0_4_;
          }
          lVar12 = param_1 + (uVar9 | 1) * 0xc;
          *(float *)(lVar12 + lVar10 * 0xc) = auVar72._0_4_;
          *(undefined4 *)(lVar12 + 4 + lVar10 * 0xc) = uVar22;
          *(undefined4 *)(lVar12 + 8 + lVar10 * 0xc) = uVar23;
          lVar12 = (uVar9 | 2) * 0x10;
          uVar1 = *(uint *)(param_3 + 8 + lVar12);
          if ((int)uVar1 < 1) {
            auVar52 = ZEXT816(0);
          }
          else {
            lVar12 = *(longlong *)(param_3 + lVar12);
            if (uVar1 == 1) {
              lVar11 = 0;
              auVar37 = SUB6416(ZEXT864(0),0);
            }
            else {
              auVar21 = ZEXT864(0);
              lVar11 = 0;
              do {
                uVar2 = *(uint *)(lVar12 + lVar11 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar63._8_8_ = 0;
                  auVar63._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar37 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar37._12_4_,
                                               CONCAT48(auVar21._8_4_ + auVar37._8_4_,
                                                        CONCAT44(auVar21._4_4_ + auVar37._4_4_,
                                                                 auVar21._0_4_ + auVar37._0_4_))));
                }
                uVar2 = *(uint *)(lVar12 + 4 + lVar11 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar64._8_8_ = 0;
                  auVar64._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar37 = vinsertps_avx(auVar64,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar37._12_4_,
                                               CONCAT48(auVar21._8_4_ + auVar37._8_4_,
                                                        CONCAT44(auVar21._4_4_ + auVar37._4_4_,
                                                                 auVar21._0_4_ + auVar37._0_4_))));
                }
                auVar52 = auVar21._0_16_;
                lVar11 = lVar11 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar11);
              auVar37 = auVar52;
              if ((uVar1 & 1) == 0) goto LAB_1405bef6b;
            }
            uVar1 = *(uint *)(lVar12 + lVar11 * 4);
            auVar52 = auVar37;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar65._8_8_ = 0;
              auVar65._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar38 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc
                                                               )),0x28);
              auVar52._0_4_ = auVar37._0_4_ + auVar38._0_4_;
              auVar52._4_4_ = auVar37._4_4_ + auVar38._4_4_;
              auVar52._8_4_ = auVar37._8_4_ + auVar38._8_4_;
              auVar52._12_4_ = auVar37._12_4_ + auVar38._12_4_;
            }
          }
LAB_1405bef6b:
          auVar77._0_4_ = auVar52._0_4_;
          auVar66._0_4_ = auVar77._0_4_ * auVar77._0_4_;
          auVar62._0_4_ = auVar52._4_4_;
          auVar66._4_4_ = auVar62._0_4_ * auVar62._0_4_;
          auVar72._0_4_ = auVar52._8_4_;
          auVar66._8_4_ = auVar72._0_4_ * auVar72._0_4_;
          auVar53._0_4_ = auVar52._12_4_;
          auVar66._12_4_ = auVar53._0_4_ * auVar53._0_4_;
          auVar37 = vmovshdup_avx(auVar66);
          auVar38 = vshufpd_avx(auVar66,auVar66,1);
          fVar3 = auVar38._0_4_ + auVar66._0_4_ + auVar37._0_4_;
          if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) {
            if (fVar5 <= fVar3) {
              auVar37 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
              auVar55._0_4_ = auVar37._0_4_;
              auVar55._0_4_ =
                   (-(fVar3 * fVar7 * auVar55._0_4_ * auVar55._0_4_) + fVar7) * auVar55._0_4_ +
                   auVar55._0_4_;
              auVar38 = ZEXT416((uint)((-(fVar3 * fVar7 * auVar55._0_4_ * auVar55._0_4_) + fVar7) *
                                       auVar55._0_4_ + auVar55._0_4_));
              auVar37 = vblendps_avx(auVar52,auVar13._0_16_,8);
              auVar13 = ZEXT1664(auVar37);
              auVar37 = vshufps_avx(auVar38,auVar14._0_16_,0xe0);
              auVar37 = vinsertps_avx(auVar37,auVar38,0x20);
              auVar14 = ZEXT1664(auVar37);
              auVar77._0_4_ = auVar77._0_4_ * auVar37._0_4_;
              auVar77._4_4_ = auVar62._0_4_ * auVar37._4_4_;
              auVar77._8_4_ = auVar72._0_4_ * auVar37._8_4_;
              auVar77._12_4_ = auVar53._0_4_ * auVar37._12_4_;
              auVar37 = vmovshdup_avx(auVar77);
              uVar22 = auVar37._0_4_;
              auVar37 = vshufpd_avx(auVar77,auVar77,1);
              uVar23 = auVar37._0_4_;
            }
            else {
              auVar77._0_4_ = 0.0;
              uVar22 = 0;
              uVar23 = 0;
            }
          }
          else {
            auVar37 = vshufpd_avx(auVar52,auVar52,1);
            uVar23 = auVar37._0_4_;
            auVar37 = vmovshdup_avx(auVar52);
            uVar22 = auVar37._0_4_;
          }
          lVar12 = param_1 + (uVar9 | 2) * 0xc;
          *(float *)(lVar12 + lVar10 * 0xc) = auVar77._0_4_;
          *(undefined4 *)(lVar12 + 4 + lVar10 * 0xc) = uVar22;
          *(undefined4 *)(lVar12 + 8 + lVar10 * 0xc) = uVar23;
          lVar12 = (uVar9 | 3) * 0x10;
          uVar1 = *(uint *)(param_3 + 8 + lVar12);
          if ((int)uVar1 < 1) {
            auVar67 = ZEXT816(0);
          }
          else {
            lVar12 = *(longlong *)(param_3 + lVar12);
            if (uVar1 == 1) {
              lVar11 = 0;
              auVar37 = SUB6416(ZEXT864(0),0);
            }
            else {
              auVar21 = ZEXT864(0);
              lVar11 = 0;
              do {
                uVar2 = *(uint *)(lVar12 + lVar11 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar73._8_8_ = 0;
                  auVar73._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar37 = vinsertps_avx(auVar73,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar37._12_4_,
                                               CONCAT48(auVar21._8_4_ + auVar37._8_4_,
                                                        CONCAT44(auVar21._4_4_ + auVar37._4_4_,
                                                                 auVar21._0_4_ + auVar37._0_4_))));
                }
                uVar2 = *(uint *)(lVar12 + 4 + lVar11 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar74._8_8_ = 0;
                  auVar74._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar37 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar37._12_4_,
                                               CONCAT48(auVar21._8_4_ + auVar37._8_4_,
                                                        CONCAT44(auVar21._4_4_ + auVar37._4_4_,
                                                                 auVar21._0_4_ + auVar37._0_4_))));
                }
                auVar67 = auVar21._0_16_;
                lVar11 = lVar11 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar11);
              auVar37 = auVar67;
              if ((uVar1 & 1) == 0) goto LAB_1405bf10b;
            }
            uVar1 = *(uint *)(lVar12 + lVar11 * 4);
            auVar67 = auVar37;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar75._8_8_ = 0;
              auVar75._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar38 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc
                                                               )),0x28);
              auVar67._0_4_ = auVar37._0_4_ + auVar38._0_4_;
              auVar67._4_4_ = auVar37._4_4_ + auVar38._4_4_;
              auVar67._8_4_ = auVar37._8_4_ + auVar38._8_4_;
              auVar67._12_4_ = auVar37._12_4_ + auVar38._12_4_;
            }
          }
LAB_1405bf10b:
          auVar37 = vblendps_avx(auVar19,in_ZMM2._0_16_,8);
          auVar19 = vblendps_avx(auVar19,in_ZMM3._0_16_,8);
          auVar37 = vblendps_avx(auVar41,auVar37,8);
          auVar19 = vblendps_avx(auVar41,auVar19,8);
          auVar37 = vblendps_avx(auVar52,auVar37,8);
          auVar19 = vblendps_avx(auVar52,auVar19,8);
          auVar53._0_4_ = auVar67._0_4_;
          auVar20._0_4_ = auVar53._0_4_ * auVar53._0_4_;
          auVar62._0_4_ = auVar67._4_4_;
          auVar20._4_4_ = auVar62._0_4_ * auVar62._0_4_;
          auVar72._0_4_ = auVar67._8_4_;
          auVar20._8_4_ = auVar72._0_4_ * auVar72._0_4_;
          auVar77._0_4_ = auVar67._12_4_;
          auVar20._12_4_ = auVar77._0_4_ * auVar77._0_4_;
          auVar38 = vmovshdup_avx(auVar20);
          auVar39 = vshufpd_avx(auVar20,auVar20,1);
          fVar3 = auVar39._0_4_ + auVar38._0_4_ + auVar20._0_4_;
          if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) {
            if (fVar5 <= fVar3) {
              auVar38 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
              auVar55._0_4_ = auVar38._0_4_;
              auVar55._0_4_ =
                   (-(fVar3 * fVar7 * auVar55._0_4_ * auVar55._0_4_) + fVar7) * auVar55._0_4_ +
                   auVar55._0_4_;
              auVar39 = ZEXT416((uint)((-(fVar3 * fVar7 * auVar55._0_4_ * auVar55._0_4_) + fVar7) *
                                       auVar55._0_4_ + auVar55._0_4_));
              auVar38 = vblendps_avx(auVar67,auVar13._0_16_,8);
              auVar13 = ZEXT1664(auVar38);
              auVar38 = vshufps_avx(auVar39,auVar14._0_16_,0xe0);
              auVar38 = vinsertps_avx(auVar38,auVar39,0x20);
              auVar14 = ZEXT1664(auVar38);
              auVar53._0_4_ = auVar53._0_4_ * auVar38._0_4_;
              auVar53._4_4_ = auVar62._0_4_ * auVar38._4_4_;
              auVar53._8_4_ = auVar72._0_4_ * auVar38._8_4_;
              auVar53._12_4_ = auVar77._0_4_ * auVar38._12_4_;
              auVar38 = vmovshdup_avx(auVar53);
              uVar22 = auVar38._0_4_;
              auVar38 = vshufpd_avx(auVar53,auVar53,1);
              uVar23 = auVar38._0_4_;
            }
            else {
              auVar53._0_4_ = 0.0;
              uVar22 = 0;
              uVar23 = 0;
            }
          }
          else {
            auVar38 = vshufpd_avx(auVar67,auVar67,1);
            uVar23 = auVar38._0_4_;
            auVar38 = vmovshdup_avx(auVar67);
            uVar22 = auVar38._0_4_;
          }
          auVar37 = vblendps_avx(auVar67,auVar37,8);
          in_ZMM2 = ZEXT1664(auVar37);
          auVar19 = vblendps_avx(auVar67,auVar19,8);
          in_ZMM3 = ZEXT1664(auVar19);
          lVar12 = param_1 + (uVar9 | 3) * 0xc;
          *(float *)(lVar12 + lVar10 * 0xc) = auVar53._0_4_;
          *(undefined4 *)(lVar12 + 4 + lVar10 * 0xc) = uVar22;
          *(undefined4 *)(lVar12 + 8 + lVar10 * 0xc) = uVar23;
          uVar9 = uVar9 + 4;
        } while (uVar9 != (param_6 & 0x7ffffffc));
      }
      fVar7 = __real_3f000000;
      fVar6 = __real_3f800000;
      fVar5 = __real_322bcc77;
      if ((ulonglong)(param_6 & 3) != 0) {
        uVar8 = 0;
        do {
          uVar1 = *(uint *)(param_3 + 8 + uVar9 * 0x10);
          if ((int)uVar1 < 1) {
            auVar16 = SUB6416(ZEXT864(0),0);
          }
          else {
            lVar12 = *(longlong *)(param_3 + uVar9 * 0x10);
            if (uVar1 == 1) {
              lVar11 = 0;
              auVar19 = SUB6416(ZEXT864(0),0);
            }
            else {
              auVar21 = ZEXT864(0);
              lVar11 = 0;
              do {
                uVar2 = *(uint *)(lVar12 + lVar11 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar28._8_8_ = 0;
                  auVar28._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar19 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar21 = ZEXT1664(CONCAT412(auVar19._12_4_ + auVar21._12_4_,
                                               CONCAT48(auVar19._8_4_ + auVar21._8_4_,
                                                        CONCAT44(auVar19._4_4_ + auVar21._4_4_,
                                                                 auVar19._0_4_ + auVar21._0_4_))));
                }
                uVar2 = *(uint *)(lVar12 + 4 + lVar11 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar19 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar21 = ZEXT1664(CONCAT412(auVar19._12_4_ + auVar21._12_4_,
                                               CONCAT48(auVar19._8_4_ + auVar21._8_4_,
                                                        CONCAT44(auVar19._4_4_ + auVar21._4_4_,
                                                                 auVar19._0_4_ + auVar21._0_4_))));
                }
                auVar16 = auVar21._0_16_;
                lVar11 = lVar11 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar11);
              auVar19 = auVar16;
              if ((uVar1 & 1) == 0) goto LAB_1405be326;
            }
            uVar1 = *(uint *)(lVar12 + lVar11 * 4);
            auVar16 = auVar19;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar30._8_8_ = 0;
              auVar30._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar37 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc
                                                               )),0x28);
              auVar16._0_4_ = auVar37._0_4_ + auVar19._0_4_;
              auVar16._4_4_ = auVar37._4_4_ + auVar19._4_4_;
              auVar16._8_4_ = auVar37._8_4_ + auVar19._8_4_;
              auVar16._12_4_ = auVar37._12_4_ + auVar19._12_4_;
            }
          }
LAB_1405be326:
          auVar55._0_4_ = auVar16._0_4_;
          auVar31._0_4_ = auVar55._0_4_ * auVar55._0_4_;
          auVar62._0_4_ = auVar16._4_4_;
          auVar31._4_4_ = auVar62._0_4_ * auVar62._0_4_;
          auVar72._0_4_ = auVar16._8_4_;
          auVar31._8_4_ = auVar72._0_4_ * auVar72._0_4_;
          auVar77._0_4_ = auVar16._12_4_;
          auVar31._12_4_ = auVar77._0_4_ * auVar77._0_4_;
          auVar19 = vmovshdup_avx(auVar31);
          auVar37 = vshufpd_avx(auVar31,auVar31,1);
          fVar3 = auVar37._0_4_ + auVar31._0_4_ + auVar19._0_4_;
          if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) {
            if (fVar5 <= fVar3) {
              auVar19 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
              auVar53._0_4_ = auVar19._0_4_;
              auVar53._0_4_ =
                   (-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) * auVar53._0_4_ +
                   auVar53._0_4_;
              auVar37 = ZEXT416((uint)((-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) *
                                       auVar53._0_4_ + auVar53._0_4_));
              auVar19 = vblendps_avx(auVar16,auVar13._0_16_,8);
              auVar13 = ZEXT1664(auVar19);
              auVar19 = vshufps_avx(auVar37,auVar14._0_16_,0xe0);
              auVar19 = vinsertps_avx(auVar19,auVar37,0x20);
              auVar14 = ZEXT1664(auVar19);
              auVar55._0_4_ = auVar55._0_4_ * auVar19._0_4_;
              auVar55._4_4_ = auVar62._0_4_ * auVar19._4_4_;
              auVar55._8_4_ = auVar72._0_4_ * auVar19._8_4_;
              auVar55._12_4_ = auVar77._0_4_ * auVar19._12_4_;
              auVar19 = vmovshdup_avx(auVar55);
              uVar22 = auVar19._0_4_;
              auVar19 = vshufpd_avx(auVar55,auVar55,1);
              uVar23 = auVar19._0_4_;
            }
            else {
              auVar55._0_4_ = 0.0;
              uVar22 = 0;
              uVar23 = 0;
            }
          }
          else {
            auVar19 = vshufpd_avx(auVar16,auVar16,1);
            uVar23 = auVar19._0_4_;
            auVar19 = vmovshdup_avx(auVar16);
            uVar22 = auVar19._0_4_;
          }
          auVar19 = vblendps_avx(auVar16,in_ZMM2._0_16_,8);
          in_ZMM2 = ZEXT1664(auVar19);
          lVar12 = param_1 + uVar9 * 0xc;
          *(float *)(lVar12 + lVar10 * 0xc) = auVar55._0_4_;
          *(undefined4 *)(lVar12 + 4 + lVar10 * 0xc) = uVar22;
          *(undefined4 *)(lVar12 + 8 + lVar10 * 0xc) = uVar23;
          auVar19 = vblendps_avx(auVar16,in_ZMM3._0_16_,8);
          in_ZMM3 = ZEXT1664(auVar19);
          uVar9 = uVar9 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != (param_6 & 3));
      }
    }
  }
  else if (0 < (int)param_6) {
    lVar10 = (longlong)param_4;
    if (param_6 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar9 * 0x10);
        if ((int)uVar1 < 1) {
          auVar17 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar12 = *(longlong *)(param_3 + uVar9 * 0x10);
          if (uVar1 == 1) {
            lVar11 = 0;
            auVar19 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar21 = ZEXT864(0);
            lVar11 = 0;
            do {
              uVar2 = *(uint *)(lVar12 + lVar11 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar32._8_8_ = 0;
                auVar32._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar19 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar21 = ZEXT1664(CONCAT412(auVar19._12_4_ + auVar21._12_4_,
                                             CONCAT48(auVar19._8_4_ + auVar21._8_4_,
                                                      CONCAT44(auVar19._4_4_ + auVar21._4_4_,
                                                               auVar19._0_4_ + auVar21._0_4_))));
              }
              uVar2 = *(uint *)(lVar12 + 4 + lVar11 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar33._8_8_ = 0;
                auVar33._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar19 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar21 = ZEXT1664(CONCAT412(auVar19._12_4_ + auVar21._12_4_,
                                             CONCAT48(auVar19._8_4_ + auVar21._8_4_,
                                                      CONCAT44(auVar19._4_4_ + auVar21._4_4_,
                                                               auVar19._0_4_ + auVar21._0_4_))));
              }
              auVar17 = auVar21._0_16_;
              lVar11 = lVar11 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar11);
            auVar19 = auVar17;
            if ((uVar1 & 1) == 0) goto LAB_1405be547;
          }
          uVar1 = *(uint *)(lVar12 + lVar11 * 4);
          auVar17 = auVar19;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar34._8_8_ = 0;
            auVar34._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar37 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar17._0_4_ = auVar37._0_4_ + auVar19._0_4_;
            auVar17._4_4_ = auVar37._4_4_ + auVar19._4_4_;
            auVar17._8_4_ = auVar37._8_4_ + auVar19._8_4_;
            auVar17._12_4_ = auVar37._12_4_ + auVar19._12_4_;
          }
        }
LAB_1405be547:
        auVar56._0_4_ = auVar17._0_4_;
        auVar35._0_4_ = auVar56._0_4_ * auVar56._0_4_;
        auVar62._0_4_ = auVar17._4_4_;
        auVar35._4_4_ = auVar62._0_4_ * auVar62._0_4_;
        auVar72._0_4_ = auVar17._8_4_;
        auVar35._8_4_ = auVar72._0_4_ * auVar72._0_4_;
        auVar77._0_4_ = auVar17._12_4_;
        auVar35._12_4_ = auVar77._0_4_ * auVar77._0_4_;
        auVar19 = vmovshdup_avx(auVar35);
        auVar37 = vshufpd_avx(auVar35,auVar35,1);
        fVar3 = auVar37._0_4_ + auVar35._0_4_ + auVar19._0_4_;
        if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) {
          if (fVar5 <= fVar3) {
            auVar19 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar53._0_4_ = auVar19._0_4_;
            auVar53._0_4_ =
                 (-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) * auVar53._0_4_ +
                 auVar53._0_4_;
            auVar37 = ZEXT416((uint)((-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) *
                                     auVar53._0_4_ + auVar53._0_4_));
            auVar19 = vblendps_avx(auVar17,auVar13._0_16_,8);
            auVar13 = ZEXT1664(auVar19);
            auVar19 = vshufps_avx(auVar37,auVar14._0_16_,0xe0);
            auVar19 = vinsertps_avx(auVar19,auVar37,0x20);
            auVar14 = ZEXT1664(auVar19);
            auVar56._0_4_ = auVar56._0_4_ * auVar19._0_4_;
            auVar56._4_4_ = auVar62._0_4_ * auVar19._4_4_;
            auVar56._8_4_ = auVar72._0_4_ * auVar19._8_4_;
            auVar56._12_4_ = auVar77._0_4_ * auVar19._12_4_;
            auVar19 = vmovshdup_avx(auVar56);
            uVar22 = auVar19._0_4_;
            auVar19 = vshufpd_avx(auVar56,auVar56,1);
            uVar23 = auVar19._0_4_;
          }
          else {
            auVar56._0_4_ = 0.0;
            uVar22 = 0;
            uVar23 = 0;
          }
        }
        else {
          auVar19 = vshufpd_avx(auVar17,auVar17,1);
          uVar23 = auVar19._0_4_;
          auVar19 = vmovshdup_avx(auVar17);
          uVar22 = auVar19._0_4_;
        }
        lVar12 = param_1 + uVar9 * 0xc;
        *(float *)(lVar12 + lVar10 * 0xc) = auVar56._0_4_;
        *(undefined4 *)(lVar12 + 4 + lVar10 * 0xc) = uVar22;
        *(undefined4 *)(lVar12 + 8 + lVar10 * 0xc) = uVar23;
        lVar12 = (uVar9 | 1) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar12);
        if ((int)uVar1 < 1) {
          auVar36 = ZEXT816(0);
        }
        else {
          lVar12 = *(longlong *)(param_3 + lVar12);
          if (uVar1 == 1) {
            lVar11 = 0;
            auVar19 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar21 = ZEXT864(0);
            lVar11 = 0;
            do {
              uVar2 = *(uint *)(lVar12 + lVar11 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar42._8_8_ = 0;
                auVar42._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar19 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar19._12_4_,
                                             CONCAT48(auVar21._8_4_ + auVar19._8_4_,
                                                      CONCAT44(auVar21._4_4_ + auVar19._4_4_,
                                                               auVar21._0_4_ + auVar19._0_4_))));
              }
              uVar2 = *(uint *)(lVar12 + 4 + lVar11 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar43._8_8_ = 0;
                auVar43._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar19 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar19._12_4_,
                                             CONCAT48(auVar21._8_4_ + auVar19._8_4_,
                                                      CONCAT44(auVar21._4_4_ + auVar19._4_4_,
                                                               auVar21._0_4_ + auVar19._0_4_))));
              }
              auVar36 = auVar21._0_16_;
              lVar11 = lVar11 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar11);
            auVar19 = auVar36;
            if ((uVar1 & 1) == 0) goto LAB_1405be6eb;
          }
          uVar1 = *(uint *)(lVar12 + lVar11 * 4);
          auVar36 = auVar19;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar44._8_8_ = 0;
            auVar44._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar37 = vinsertps_avx(auVar44,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar36._0_4_ = auVar19._0_4_ + auVar37._0_4_;
            auVar36._4_4_ = auVar19._4_4_ + auVar37._4_4_;
            auVar36._8_4_ = auVar19._8_4_ + auVar37._8_4_;
            auVar36._12_4_ = auVar19._12_4_ + auVar37._12_4_;
          }
        }
LAB_1405be6eb:
        auVar68._0_4_ = auVar36._0_4_;
        auVar45._0_4_ = auVar68._0_4_ * auVar68._0_4_;
        auVar62._0_4_ = auVar36._4_4_;
        auVar45._4_4_ = auVar62._0_4_ * auVar62._0_4_;
        auVar72._0_4_ = auVar36._8_4_;
        auVar45._8_4_ = auVar72._0_4_ * auVar72._0_4_;
        auVar77._0_4_ = auVar36._12_4_;
        auVar45._12_4_ = auVar77._0_4_ * auVar77._0_4_;
        auVar19 = vmovshdup_avx(auVar45);
        auVar37 = vshufpd_avx(auVar45,auVar45,1);
        fVar3 = auVar37._0_4_ + auVar45._0_4_ + auVar19._0_4_;
        if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) {
          if (fVar5 <= fVar3) {
            auVar19 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar53._0_4_ = auVar19._0_4_;
            auVar53._0_4_ =
                 (-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) * auVar53._0_4_ +
                 auVar53._0_4_;
            auVar37 = ZEXT416((uint)((-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) *
                                     auVar53._0_4_ + auVar53._0_4_));
            auVar19 = vblendps_avx(auVar36,auVar13._0_16_,8);
            auVar13 = ZEXT1664(auVar19);
            auVar19 = vshufps_avx(auVar37,auVar14._0_16_,0xe0);
            auVar19 = vinsertps_avx(auVar19,auVar37,0x20);
            auVar14 = ZEXT1664(auVar19);
            auVar68._0_4_ = auVar68._0_4_ * auVar19._0_4_;
            auVar68._4_4_ = auVar62._0_4_ * auVar19._4_4_;
            auVar68._8_4_ = auVar72._0_4_ * auVar19._8_4_;
            auVar68._12_4_ = auVar77._0_4_ * auVar19._12_4_;
            auVar19 = vmovshdup_avx(auVar68);
            uVar22 = auVar19._0_4_;
            auVar19 = vshufpd_avx(auVar68,auVar68,1);
            uVar23 = auVar19._0_4_;
          }
          else {
            auVar68._0_4_ = 0.0;
            uVar22 = 0;
            uVar23 = 0;
          }
        }
        else {
          auVar19 = vshufpd_avx(auVar36,auVar36,1);
          uVar23 = auVar19._0_4_;
          auVar19 = vmovshdup_avx(auVar36);
          uVar22 = auVar19._0_4_;
        }
        lVar12 = param_1 + (uVar9 | 1) * 0xc;
        *(float *)(lVar12 + lVar10 * 0xc) = auVar68._0_4_;
        *(undefined4 *)(lVar12 + 4 + lVar10 * 0xc) = uVar22;
        *(undefined4 *)(lVar12 + 8 + lVar10 * 0xc) = uVar23;
        lVar12 = (uVar9 | 2) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar12);
        if ((int)uVar1 < 1) {
          auVar46 = ZEXT816(0);
        }
        else {
          lVar12 = *(longlong *)(param_3 + lVar12);
          if (uVar1 == 1) {
            lVar11 = 0;
            auVar19 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar21 = ZEXT864(0);
            lVar11 = 0;
            do {
              uVar2 = *(uint *)(lVar12 + lVar11 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar57._8_8_ = 0;
                auVar57._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar19 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar19._12_4_,
                                             CONCAT48(auVar21._8_4_ + auVar19._8_4_,
                                                      CONCAT44(auVar21._4_4_ + auVar19._4_4_,
                                                               auVar21._0_4_ + auVar19._0_4_))));
              }
              uVar2 = *(uint *)(lVar12 + 4 + lVar11 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar58._8_8_ = 0;
                auVar58._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar19 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar19._12_4_,
                                             CONCAT48(auVar21._8_4_ + auVar19._8_4_,
                                                      CONCAT44(auVar21._4_4_ + auVar19._4_4_,
                                                               auVar21._0_4_ + auVar19._0_4_))));
              }
              auVar46 = auVar21._0_16_;
              lVar11 = lVar11 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar11);
            auVar19 = auVar46;
            if ((uVar1 & 1) == 0) goto LAB_1405be88b;
          }
          uVar1 = *(uint *)(lVar12 + lVar11 * 4);
          auVar46 = auVar19;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar59._8_8_ = 0;
            auVar59._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar37 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar46._0_4_ = auVar19._0_4_ + auVar37._0_4_;
            auVar46._4_4_ = auVar19._4_4_ + auVar37._4_4_;
            auVar46._8_4_ = auVar19._8_4_ + auVar37._8_4_;
            auVar46._12_4_ = auVar19._12_4_ + auVar37._12_4_;
          }
        }
LAB_1405be88b:
        auVar76._0_4_ = auVar46._0_4_;
        auVar60._0_4_ = auVar76._0_4_ * auVar76._0_4_;
        auVar62._0_4_ = auVar46._4_4_;
        auVar60._4_4_ = auVar62._0_4_ * auVar62._0_4_;
        auVar72._0_4_ = auVar46._8_4_;
        auVar60._8_4_ = auVar72._0_4_ * auVar72._0_4_;
        auVar77._0_4_ = auVar46._12_4_;
        auVar60._12_4_ = auVar77._0_4_ * auVar77._0_4_;
        auVar19 = vmovshdup_avx(auVar60);
        auVar37 = vshufpd_avx(auVar60,auVar60,1);
        fVar3 = auVar37._0_4_ + auVar60._0_4_ + auVar19._0_4_;
        if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) {
          if (fVar5 <= fVar3) {
            auVar19 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar53._0_4_ = auVar19._0_4_;
            auVar53._0_4_ =
                 (-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) * auVar53._0_4_ +
                 auVar53._0_4_;
            auVar37 = ZEXT416((uint)((-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) *
                                     auVar53._0_4_ + auVar53._0_4_));
            auVar19 = vblendps_avx(auVar46,auVar13._0_16_,8);
            auVar13 = ZEXT1664(auVar19);
            auVar19 = vshufps_avx(auVar37,auVar14._0_16_,0xe0);
            auVar19 = vinsertps_avx(auVar19,auVar37,0x20);
            auVar14 = ZEXT1664(auVar19);
            auVar76._0_4_ = auVar76._0_4_ * auVar19._0_4_;
            auVar76._4_4_ = auVar62._0_4_ * auVar19._4_4_;
            auVar76._8_4_ = auVar72._0_4_ * auVar19._8_4_;
            auVar76._12_4_ = auVar77._0_4_ * auVar19._12_4_;
            auVar19 = vmovshdup_avx(auVar76);
            uVar22 = auVar19._0_4_;
            auVar19 = vshufpd_avx(auVar76,auVar76,1);
            uVar23 = auVar19._0_4_;
          }
          else {
            auVar76._0_4_ = 0.0;
            uVar22 = 0;
            uVar23 = 0;
          }
        }
        else {
          auVar19 = vshufpd_avx(auVar46,auVar46,1);
          uVar23 = auVar19._0_4_;
          auVar19 = vmovshdup_avx(auVar46);
          uVar22 = auVar19._0_4_;
        }
        lVar12 = param_1 + (uVar9 | 2) * 0xc;
        *(float *)(lVar12 + lVar10 * 0xc) = auVar76._0_4_;
        *(undefined4 *)(lVar12 + 4 + lVar10 * 0xc) = uVar22;
        *(undefined4 *)(lVar12 + 8 + lVar10 * 0xc) = uVar23;
        lVar12 = (uVar9 | 3) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar12);
        if ((int)uVar1 < 1) {
          auVar61 = ZEXT816(0);
        }
        else {
          lVar12 = *(longlong *)(param_3 + lVar12);
          if (uVar1 == 1) {
            lVar11 = 0;
            auVar19 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar21 = ZEXT864(0);
            lVar11 = 0;
            do {
              uVar2 = *(uint *)(lVar12 + lVar11 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar69._8_8_ = 0;
                auVar69._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar19 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar19._12_4_,
                                             CONCAT48(auVar21._8_4_ + auVar19._8_4_,
                                                      CONCAT44(auVar21._4_4_ + auVar19._4_4_,
                                                               auVar21._0_4_ + auVar19._0_4_))));
              }
              uVar2 = *(uint *)(lVar12 + 4 + lVar11 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar70._8_8_ = 0;
                auVar70._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar19 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar19._12_4_,
                                             CONCAT48(auVar21._8_4_ + auVar19._8_4_,
                                                      CONCAT44(auVar21._4_4_ + auVar19._4_4_,
                                                               auVar21._0_4_ + auVar19._0_4_))));
              }
              auVar61 = auVar21._0_16_;
              lVar11 = lVar11 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar11);
            auVar19 = auVar61;
            if ((uVar1 & 1) == 0) goto LAB_1405bea2b;
          }
          uVar1 = *(uint *)(lVar12 + lVar11 * 4);
          auVar61 = auVar19;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar71._8_8_ = 0;
            auVar71._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar37 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar61._0_4_ = auVar19._0_4_ + auVar37._0_4_;
            auVar61._4_4_ = auVar19._4_4_ + auVar37._4_4_;
            auVar61._8_4_ = auVar19._8_4_ + auVar37._8_4_;
            auVar61._12_4_ = auVar19._12_4_ + auVar37._12_4_;
          }
        }
LAB_1405bea2b:
        auVar19 = vblendps_avx(auVar17,in_ZMM2._0_16_,8);
        auVar37 = vblendps_avx(auVar17,in_ZMM3._0_16_,8);
        auVar19 = vblendps_avx(auVar36,auVar19,8);
        auVar37 = vblendps_avx(auVar36,auVar37,8);
        auVar19 = vblendps_avx(auVar46,auVar19,8);
        auVar37 = vblendps_avx(auVar46,auVar37,8);
        auVar47._0_4_ = auVar61._0_4_;
        auVar18._0_4_ = auVar47._0_4_ * auVar47._0_4_;
        auVar62._0_4_ = auVar61._4_4_;
        auVar18._4_4_ = auVar62._0_4_ * auVar62._0_4_;
        auVar72._0_4_ = auVar61._8_4_;
        auVar18._8_4_ = auVar72._0_4_ * auVar72._0_4_;
        auVar77._0_4_ = auVar61._12_4_;
        auVar18._12_4_ = auVar77._0_4_ * auVar77._0_4_;
        auVar38 = vmovshdup_avx(auVar18);
        auVar39 = vshufpd_avx(auVar18,auVar18,1);
        fVar3 = auVar39._0_4_ + auVar38._0_4_ + auVar18._0_4_;
        if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) {
          if (fVar5 <= fVar3) {
            auVar38 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar53._0_4_ = auVar38._0_4_;
            auVar53._0_4_ =
                 (-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) * auVar53._0_4_ +
                 auVar53._0_4_;
            auVar39 = ZEXT416((uint)((-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) *
                                     auVar53._0_4_ + auVar53._0_4_));
            auVar38 = vblendps_avx(auVar61,auVar13._0_16_,8);
            auVar13 = ZEXT1664(auVar38);
            auVar38 = vshufps_avx(auVar39,auVar14._0_16_,0xe0);
            auVar38 = vinsertps_avx(auVar38,auVar39,0x20);
            auVar14 = ZEXT1664(auVar38);
            auVar47._0_4_ = auVar47._0_4_ * auVar38._0_4_;
            auVar47._4_4_ = auVar62._0_4_ * auVar38._4_4_;
            auVar47._8_4_ = auVar72._0_4_ * auVar38._8_4_;
            auVar47._12_4_ = auVar77._0_4_ * auVar38._12_4_;
            auVar38 = vmovshdup_avx(auVar47);
            uVar22 = auVar38._0_4_;
            auVar38 = vshufpd_avx(auVar47,auVar47,1);
            uVar23 = auVar38._0_4_;
          }
          else {
            auVar47._0_4_ = 0.0;
            uVar22 = 0;
            uVar23 = 0;
          }
        }
        else {
          auVar38 = vshufpd_avx(auVar61,auVar61,1);
          uVar23 = auVar38._0_4_;
          auVar38 = vmovshdup_avx(auVar61);
          uVar22 = auVar38._0_4_;
        }
        auVar19 = vblendps_avx(auVar61,auVar19,8);
        in_ZMM2 = ZEXT1664(auVar19);
        auVar19 = vblendps_avx(auVar61,auVar37,8);
        in_ZMM3 = ZEXT1664(auVar19);
        lVar12 = param_1 + (uVar9 | 3) * 0xc;
        *(float *)(lVar12 + lVar10 * 0xc) = auVar47._0_4_;
        *(undefined4 *)(lVar12 + 4 + lVar10 * 0xc) = uVar22;
        *(undefined4 *)(lVar12 + 8 + lVar10 * 0xc) = uVar23;
        uVar9 = uVar9 + 4;
      } while (uVar9 != (param_6 & 0x7ffffffc));
    }
    fVar7 = __real_3f000000;
    fVar6 = __real_3f800000;
    fVar5 = __real_322bcc77;
    if ((ulonglong)(param_6 & 3) != 0) {
      uVar8 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar9 * 0x10);
        if ((int)uVar1 < 1) {
          auVar15 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar12 = *(longlong *)(param_3 + uVar9 * 0x10);
          if (uVar1 == 1) {
            lVar11 = 0;
            auVar19 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar21 = ZEXT864(0);
            lVar11 = 0;
            do {
              uVar2 = *(uint *)(lVar12 + lVar11 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar24._8_8_ = 0;
                auVar24._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar19 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar21 = ZEXT1664(CONCAT412(auVar19._12_4_ + auVar21._12_4_,
                                             CONCAT48(auVar19._8_4_ + auVar21._8_4_,
                                                      CONCAT44(auVar19._4_4_ + auVar21._4_4_,
                                                               auVar19._0_4_ + auVar21._0_4_))));
              }
              uVar2 = *(uint *)(lVar12 + 4 + lVar11 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar25._8_8_ = 0;
                auVar25._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar19 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar21 = ZEXT1664(CONCAT412(auVar19._12_4_ + auVar21._12_4_,
                                             CONCAT48(auVar19._8_4_ + auVar21._8_4_,
                                                      CONCAT44(auVar19._4_4_ + auVar21._4_4_,
                                                               auVar19._0_4_ + auVar21._0_4_))));
              }
              auVar15 = auVar21._0_16_;
              lVar11 = lVar11 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar11);
            auVar19 = auVar15;
            if ((uVar1 & 1) == 0) goto LAB_1405be126;
          }
          uVar1 = *(uint *)(lVar12 + lVar11 * 4);
          auVar15 = auVar19;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar26._8_8_ = 0;
            auVar26._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar37 = vinsertps_avx(auVar26,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar15._0_4_ = auVar37._0_4_ + auVar19._0_4_;
            auVar15._4_4_ = auVar37._4_4_ + auVar19._4_4_;
            auVar15._8_4_ = auVar37._8_4_ + auVar19._8_4_;
            auVar15._12_4_ = auVar37._12_4_ + auVar19._12_4_;
          }
        }
LAB_1405be126:
        auVar54._0_4_ = auVar15._0_4_;
        auVar27._0_4_ = auVar54._0_4_ * auVar54._0_4_;
        auVar62._0_4_ = auVar15._4_4_;
        auVar27._4_4_ = auVar62._0_4_ * auVar62._0_4_;
        auVar72._0_4_ = auVar15._8_4_;
        auVar27._8_4_ = auVar72._0_4_ * auVar72._0_4_;
        auVar77._0_4_ = auVar15._12_4_;
        auVar27._12_4_ = auVar77._0_4_ * auVar77._0_4_;
        auVar19 = vmovshdup_avx(auVar27);
        auVar37 = vshufpd_avx(auVar27,auVar27,1);
        fVar3 = auVar37._0_4_ + auVar27._0_4_ + auVar19._0_4_;
        if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) {
          if (fVar5 <= fVar3) {
            auVar19 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar53._0_4_ = auVar19._0_4_;
            auVar53._0_4_ =
                 (-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) * auVar53._0_4_ +
                 auVar53._0_4_;
            auVar37 = ZEXT416((uint)((-(fVar3 * fVar7 * auVar53._0_4_ * auVar53._0_4_) + fVar7) *
                                     auVar53._0_4_ + auVar53._0_4_));
            auVar19 = vblendps_avx(auVar15,auVar13._0_16_,8);
            auVar13 = ZEXT1664(auVar19);
            auVar19 = vshufps_avx(auVar37,auVar14._0_16_,0xe0);
            auVar19 = vinsertps_avx(auVar19,auVar37,0x20);
            auVar14 = ZEXT1664(auVar19);
            auVar54._0_4_ = auVar54._0_4_ * auVar19._0_4_;
            auVar54._4_4_ = auVar62._0_4_ * auVar19._4_4_;
            auVar54._8_4_ = auVar72._0_4_ * auVar19._8_4_;
            auVar54._12_4_ = auVar77._0_4_ * auVar19._12_4_;
            auVar19 = vmovshdup_avx(auVar54);
            uVar22 = auVar19._0_4_;
            auVar19 = vshufpd_avx(auVar54,auVar54,1);
            uVar23 = auVar19._0_4_;
          }
          else {
            auVar54._0_4_ = 0.0;
            uVar22 = 0;
            uVar23 = 0;
          }
        }
        else {
          auVar19 = vshufpd_avx(auVar15,auVar15,1);
          uVar23 = auVar19._0_4_;
          auVar19 = vmovshdup_avx(auVar15);
          uVar22 = auVar19._0_4_;
        }
        auVar19 = vblendps_avx(auVar15,in_ZMM2._0_16_,8);
        in_ZMM2 = ZEXT1664(auVar19);
        lVar12 = param_1 + uVar9 * 0xc;
        *(float *)(lVar12 + lVar10 * 0xc) = auVar54._0_4_;
        *(undefined4 *)(lVar12 + 4 + lVar10 * 0xc) = uVar22;
        *(undefined4 *)(lVar12 + 8 + lVar10 * 0xc) = uVar23;
        auVar19 = vblendps_avx(auVar15,in_ZMM3._0_16_,8);
        in_ZMM3 = ZEXT1664(auVar19);
        uVar9 = uVar9 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != (param_6 & 3));
    }
  }
  return;
}

// GetFaceNormals_avx2 @ 1405bf1c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetFaceNormals_avx2(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
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
  undefined1 in_ZMM14 [64];
  undefined1 auVar46 [32];
  undefined1 in_ZMM15 [64];
  undefined1 auVar13 [32];
  undefined1 auVar21 [32];
  
  iVar4 = __real_00000008;
  iVar3 = __real_00000004;
  uVar7 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar7 = param_4;
  }
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar6 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar8 = 0x40;
    uVar6 = 0;
    auVar37._4_4_ = __real_0000000c;
    auVar37._0_4_ = __real_0000000c;
    auVar37._8_4_ = __real_0000000c;
    auVar37._12_4_ = __real_0000000c;
    auVar37._16_4_ = __real_0000000c;
    auVar37._20_4_ = __real_0000000c;
    auVar37._24_4_ = __real_0000000c;
    auVar37._28_4_ = __real_0000000c;
    auVar19._4_4_ = __real_00800000;
    auVar19._0_4_ = __real_00800000;
    auVar19._8_4_ = __real_00800000;
    auVar19._12_4_ = __real_00800000;
    auVar19._16_4_ = __real_00800000;
    auVar19._20_4_ = __real_00800000;
    auVar19._24_4_ = __real_00800000;
    auVar19._28_4_ = __real_00800000;
    auVar23._4_4_ = __real_3f800000;
    auVar23._0_4_ = __real_3f800000;
    auVar23._8_4_ = __real_3f800000;
    auVar23._12_4_ = __real_3f800000;
    auVar23._16_4_ = __real_3f800000;
    auVar23._20_4_ = __real_3f800000;
    auVar23._24_4_ = __real_3f800000;
    auVar23._28_4_ = __real_3f800000;
    do {
      auVar24 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar8);
      auVar28 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar8);
      auVar10 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar28);
      auVar43 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar24);
      auVar44 = vpblendd_avx2(auVar43,auVar10,0x88);
      auVar10 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar28);
      auVar43 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(param_3 + lVar8));
      auVar41 = vpblendd_avx2(auVar43,auVar10,0x13);
      auVar45._16_16_ = ZEXT116(0) * auVar44._16_16_ | ZEXT116(1) * auVar41._0_16_;
      auVar45._0_16_ = ZEXT116(0) * auVar41._0_16_ | ZEXT116(1) * auVar44._0_16_;
      auVar10 = vpcmpeqd_avx2(in_ZMM14._0_32_,in_ZMM14._0_32_);
      auVar17 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar10);
      auVar43 = vpmulld_avx2(auVar45,auVar37);
      auVar10 = vpcmpeqd_avx2(in_ZMM15._0_32_,in_ZMM15._0_32_);
      auVar26 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar10);
      auVar10._0_4_ = iVar4 + auVar43._0_4_;
      auVar10._4_4_ = iVar4 + auVar43._4_4_;
      auVar10._8_4_ = iVar4 + auVar43._8_4_;
      auVar10._12_4_ = iVar4 + auVar43._12_4_;
      auVar10._16_4_ = iVar4 + auVar43._16_4_;
      auVar10._20_4_ = iVar4 + auVar43._20_4_;
      auVar10._24_4_ = iVar4 + auVar43._24_4_;
      auVar10._28_4_ = iVar4 + auVar43._28_4_;
      auVar43 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar31 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar43);
      auVar43 = vperm2i128_avx2(auVar44,auVar41,0x31);
      auVar10 = vpcmpeqd_avx2(auVar10,auVar10);
      auVar46 = vgatherdps(ZEXT832(0),auVar10);
      in_ZMM15 = ZEXT3264(auVar46);
      auVar43 = vpmulld_avx2(auVar43,auVar37);
      auVar10 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar10 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar10);
      auVar24 = vpblendd_avx2(auVar28,auVar24,0x24);
      auVar28 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar24);
      auVar24 = vpcmpeqd_avx2(auVar43,auVar43);
      auVar44 = vgatherdps(ZEXT432(0) << 0x20,auVar24);
      auVar40._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar40._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar24 = vpermd_avx2(auVar40,*(undefined1 (*) [32])(param_3 + lVar8));
      auVar28 = vpblendd_avx2(auVar28,auVar24,0xe0);
      auVar24 = vpcmpeqd_avx2(auVar40,auVar40);
      auVar43 = vgatherdps(ZEXT832(0),auVar24);
      auVar28 = vpmulld_avx2(auVar28,auVar37);
      auVar24._0_4_ = auVar28._0_4_ + iVar3;
      auVar24._4_4_ = auVar28._4_4_ + iVar3;
      auVar24._8_4_ = auVar28._8_4_ + iVar3;
      auVar24._12_4_ = auVar28._12_4_ + iVar3;
      auVar24._16_4_ = auVar28._16_4_ + iVar3;
      auVar24._20_4_ = auVar28._20_4_ + iVar3;
      auVar24._24_4_ = auVar28._24_4_ + iVar3;
      auVar24._28_4_ = auVar28._28_4_ + iVar3;
      auVar28 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar45 = vgatherdps(ZEXT832(0),auVar28);
      in_ZMM14 = ZEXT3264(auVar45);
      auVar24 = vpcmpeqd_avx2(auVar24,auVar24);
      auVar41 = vgatherdps(ZEXT832(0),auVar24);
      auVar24 = vsubps_avx(auVar46,auVar17);
      auVar28 = vsubps_avx(auVar43,auVar17);
      auVar10 = vsubps_avx(auVar10,auVar26);
      auVar43 = vsubps_avx(auVar45,auVar26);
      auVar44 = vsubps_avx(auVar44,auVar31);
      auVar41 = vsubps_avx(auVar41,auVar31);
      auVar42._0_4_ = auVar10._0_4_ * auVar28._0_4_ - auVar24._0_4_ * auVar43._0_4_;
      auVar42._4_4_ = auVar10._4_4_ * auVar28._4_4_ - auVar24._4_4_ * auVar43._4_4_;
      auVar42._8_4_ = auVar10._8_4_ * auVar28._8_4_ - auVar24._8_4_ * auVar43._8_4_;
      auVar42._12_4_ = auVar10._12_4_ * auVar28._12_4_ - auVar24._12_4_ * auVar43._12_4_;
      auVar42._16_4_ = auVar10._16_4_ * auVar28._16_4_ - auVar24._16_4_ * auVar43._16_4_;
      auVar42._20_4_ = auVar10._20_4_ * auVar28._20_4_ - auVar24._20_4_ * auVar43._20_4_;
      auVar42._24_4_ = auVar10._24_4_ * auVar28._24_4_ - auVar24._24_4_ * auVar43._24_4_;
      auVar42._28_4_ = auVar10._28_4_ * auVar28._28_4_ - auVar24._28_4_ * auVar43._28_4_;
      auVar17._0_4_ = auVar44._0_4_ * auVar43._0_4_ - auVar10._0_4_ * auVar41._0_4_;
      auVar17._4_4_ = auVar44._4_4_ * auVar43._4_4_ - auVar10._4_4_ * auVar41._4_4_;
      auVar17._8_4_ = auVar44._8_4_ * auVar43._8_4_ - auVar10._8_4_ * auVar41._8_4_;
      auVar17._12_4_ = auVar44._12_4_ * auVar43._12_4_ - auVar10._12_4_ * auVar41._12_4_;
      auVar17._16_4_ = auVar44._16_4_ * auVar43._16_4_ - auVar10._16_4_ * auVar41._16_4_;
      auVar17._20_4_ = auVar44._20_4_ * auVar43._20_4_ - auVar10._20_4_ * auVar41._20_4_;
      auVar17._24_4_ = auVar44._24_4_ * auVar43._24_4_ - auVar10._24_4_ * auVar41._24_4_;
      auVar17._28_4_ = auVar44._28_4_ * auVar43._28_4_ - auVar10._28_4_ * auVar41._28_4_;
      auVar43._0_4_ = auVar24._0_4_ * auVar41._0_4_ - auVar44._0_4_ * auVar28._0_4_;
      auVar43._4_4_ = auVar24._4_4_ * auVar41._4_4_ - auVar44._4_4_ * auVar28._4_4_;
      auVar43._8_4_ = auVar24._8_4_ * auVar41._8_4_ - auVar44._8_4_ * auVar28._8_4_;
      auVar43._12_4_ = auVar24._12_4_ * auVar41._12_4_ - auVar44._12_4_ * auVar28._12_4_;
      auVar43._16_4_ = auVar24._16_4_ * auVar41._16_4_ - auVar44._16_4_ * auVar28._16_4_;
      auVar43._20_4_ = auVar24._20_4_ * auVar41._20_4_ - auVar44._20_4_ * auVar28._20_4_;
      auVar43._24_4_ = auVar24._24_4_ * auVar41._24_4_ - auVar44._24_4_ * auVar28._24_4_;
      auVar43._28_4_ = auVar24._28_4_ * auVar41._28_4_ - auVar44._28_4_ * auVar28._28_4_;
      auVar26._0_4_ =
           auVar42._0_4_ * auVar42._0_4_ +
           auVar17._0_4_ * auVar17._0_4_ + auVar43._0_4_ * auVar43._0_4_;
      auVar26._4_4_ =
           auVar42._4_4_ * auVar42._4_4_ +
           auVar17._4_4_ * auVar17._4_4_ + auVar43._4_4_ * auVar43._4_4_;
      auVar26._8_4_ =
           auVar42._8_4_ * auVar42._8_4_ +
           auVar17._8_4_ * auVar17._8_4_ + auVar43._8_4_ * auVar43._8_4_;
      auVar26._12_4_ =
           auVar42._12_4_ * auVar42._12_4_ +
           auVar17._12_4_ * auVar17._12_4_ + auVar43._12_4_ * auVar43._12_4_;
      auVar26._16_4_ =
           auVar42._16_4_ * auVar42._16_4_ +
           auVar17._16_4_ * auVar17._16_4_ + auVar43._16_4_ * auVar43._16_4_;
      auVar26._20_4_ =
           auVar42._20_4_ * auVar42._20_4_ +
           auVar17._20_4_ * auVar17._20_4_ + auVar43._20_4_ * auVar43._20_4_;
      auVar26._24_4_ =
           auVar42._24_4_ * auVar42._24_4_ +
           auVar17._24_4_ * auVar17._24_4_ + auVar43._24_4_ * auVar43._24_4_;
      auVar26._28_4_ =
           auVar42._28_4_ * auVar42._28_4_ +
           auVar17._28_4_ * auVar17._28_4_ + auVar43._28_4_ * auVar43._28_4_;
      auVar24 = vsqrtps_avx(auVar26);
      auVar28 = vdivps_avx(auVar17,auVar24);
      auVar43 = vdivps_avx(auVar43,auVar24);
      auVar44 = vdivps_avx(auVar42,auVar24);
      auVar24 = vcmpps_avx(auVar26,auVar19,2);
      auVar10 = vblendvps_avx(auVar28,auVar23,auVar24);
      auVar15._0_4_ = ~auVar24._0_4_ & auVar43._0_4_;
      auVar15._4_4_ = ~auVar24._4_4_ & auVar43._4_4_;
      auVar15._8_4_ = ~auVar24._8_4_ & auVar43._8_4_;
      auVar15._12_4_ = ~auVar24._12_4_ & auVar43._12_4_;
      auVar41._16_4_ = ~auVar24._16_4_ & auVar43._16_4_;
      auVar41._0_16_ = auVar15;
      auVar41._20_4_ = ~auVar24._20_4_ & auVar43._20_4_;
      auVar41._24_4_ = ~auVar24._24_4_ & auVar43._24_4_;
      auVar41._28_4_ = ~auVar24._28_4_ & auVar43._28_4_;
      auVar31._0_4_ = ~auVar24._0_4_ & auVar44._0_4_;
      auVar31._4_4_ = ~auVar24._4_4_ & auVar44._4_4_;
      auVar31._8_4_ = ~auVar24._8_4_ & auVar44._8_4_;
      auVar31._12_4_ = ~auVar24._12_4_ & auVar44._12_4_;
      auVar31._16_4_ = ~auVar24._16_4_ & auVar44._16_4_;
      auVar31._20_4_ = ~auVar24._20_4_ & auVar44._20_4_;
      auVar31._24_4_ = ~auVar24._24_4_ & auVar44._24_4_;
      auVar31._28_4_ = ~auVar24._28_4_ & auVar44._28_4_;
      auVar28._16_16_ = auVar15;
      auVar28._0_16_ = auVar10._0_16_;
      auVar24 = vshufpd_avx(auVar10,auVar28,2);
      auVar28 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar24);
      auVar43 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar31);
      auVar24 = vpermpd_avx2(auVar41,0xe9);
      auVar24 = vblendps_avx(auVar43,auVar24,7);
      auVar46._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar46._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar43 = vpermps_avx2(auVar46,auVar24);
      auVar28 = vblendps_avx(auVar28,auVar43,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar8) = auVar28;
      auVar28 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar24);
      auVar24 = vshufpd_avx(auVar10,auVar10,1);
      auVar24 = vblendps_avx(auVar28,auVar24,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar8) = auVar24;
      auVar44._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar44._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar28 = vpermps_avx2(auVar44,auVar41);
      auVar24 = vpermpd_avx2(auVar10,0xff);
      auVar24 = vblendps_avx(auVar28,auVar24,3);
      auVar24 = vblendps_avx(auVar24,auVar31,0xe0);
      auVar24 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar24);
      *(undefined1 (*) [32])(param_1 + lVar8) = auVar24;
      lVar8 = lVar8 + 0x60;
      uVar6 = uVar6 + 8;
    } while ((int)uVar6 < (int)(uVar7 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar6) {
      return;
    }
  }
  auVar11._4_4_ = uVar6;
  auVar11._0_4_ = uVar6;
  auVar11._8_4_ = uVar6;
  auVar11._12_4_ = uVar6;
  auVar11._16_4_ = uVar6;
  auVar11._20_4_ = uVar6;
  auVar11._24_4_ = uVar6;
  auVar11._28_4_ = uVar6;
  auVar37 = vpor_avx2(auVar11,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar18._4_4_ = param_4;
  auVar18._0_4_ = param_4;
  auVar18._8_4_ = param_4;
  auVar18._12_4_ = param_4;
  auVar18._16_4_ = param_4;
  auVar18._20_4_ = param_4;
  auVar18._24_4_ = param_4;
  auVar18._28_4_ = param_4;
  auVar37 = vpcmpgtd_avx2(auVar18,auVar37);
  pauVar1 = (undefined1 (*) [32])(param_3 + (ulonglong)uVar6 * 0xc);
  uVar7 = vmovmskps_avx(auVar37);
  if (uVar7 == 0xff) {
    auVar19 = pauVar1[1];
    auVar23 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                          auVar19);
    auVar24 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                          *pauVar1);
    auVar23 = vpblendd_avx2(auVar24,auVar23,0x88);
    auVar24 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                          auVar19);
    auVar28 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                          pauVar1[2]);
    auVar24 = vpblendd_avx2(auVar28,auVar24,0x13);
    auVar32._16_16_ = ZEXT116(0) * auVar23._16_16_ | ZEXT116(1) * auVar24._0_16_;
    auVar32._0_16_ = ZEXT116(0) * auVar24._0_16_ | ZEXT116(1) * auVar23._0_16_;
    auVar23 = vperm2i128_avx2(auVar23,auVar24,0x31);
    auVar19 = vpblendd_avx2(auVar19,*pauVar1,0x24);
    auVar19 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                          auVar19);
    auVar27._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar27._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar24 = vpermd_avx2(auVar27,pauVar1[2]);
    auVar19 = vpblendd_avx2(auVar19,auVar24,0xe0);
  }
  else {
    auVar32 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar37);
    auVar23 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
    auVar19 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  }
  cVar5 = (char)uVar7;
  auVar28 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  auVar38._4_4_ = __real_0000000c;
  auVar38._0_4_ = __real_0000000c;
  auVar38._8_4_ = __real_0000000c;
  auVar38._12_4_ = __real_0000000c;
  auVar38._16_4_ = __real_0000000c;
  auVar38._20_4_ = __real_0000000c;
  auVar38._24_4_ = __real_0000000c;
  auVar38._28_4_ = __real_0000000c;
  vpmulld_avx2(auVar32,auVar38);
  auVar43 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  auVar44 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  vpmulld_avx2(auVar23,auVar38);
  auVar23 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  auVar26 = vgatherdps(ZEXT832(0),auVar37);
  auVar17 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  vpmulld_avx2(auVar19,auVar38);
  auVar24 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  auVar41 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar37);
  auVar10 = vgatherdps(ZEXT432(0) << 0x20,auVar37);
  auVar37 = vsubps_avx(auVar23,auVar28);
  auVar19 = vsubps_avx(auVar26,auVar43);
  auVar23 = vsubps_avx(auVar17,auVar44);
  auVar24 = vsubps_avx(auVar24,auVar28);
  auVar28 = vsubps_avx(auVar41,auVar43);
  auVar10 = vsubps_avx(auVar10,auVar44);
  auVar33._0_4_ = auVar19._0_4_ * auVar24._0_4_ - auVar37._0_4_ * auVar28._0_4_;
  auVar33._4_4_ = auVar19._4_4_ * auVar24._4_4_ - auVar37._4_4_ * auVar28._4_4_;
  auVar33._8_4_ = auVar19._8_4_ * auVar24._8_4_ - auVar37._8_4_ * auVar28._8_4_;
  auVar33._12_4_ = auVar19._12_4_ * auVar24._12_4_ - auVar37._12_4_ * auVar28._12_4_;
  auVar33._16_4_ = auVar19._16_4_ * auVar24._16_4_ - auVar37._16_4_ * auVar28._16_4_;
  auVar33._20_4_ = auVar19._20_4_ * auVar24._20_4_ - auVar37._20_4_ * auVar28._20_4_;
  auVar33._24_4_ = auVar19._24_4_ * auVar24._24_4_ - auVar37._24_4_ * auVar28._24_4_;
  auVar33._28_4_ = auVar19._28_4_ * auVar24._28_4_ - auVar37._28_4_ * auVar28._28_4_;
  auVar34._0_4_ = auVar23._0_4_ * auVar28._0_4_ - auVar19._0_4_ * auVar10._0_4_;
  auVar34._4_4_ = auVar23._4_4_ * auVar28._4_4_ - auVar19._4_4_ * auVar10._4_4_;
  auVar34._8_4_ = auVar23._8_4_ * auVar28._8_4_ - auVar19._8_4_ * auVar10._8_4_;
  auVar34._12_4_ = auVar23._12_4_ * auVar28._12_4_ - auVar19._12_4_ * auVar10._12_4_;
  auVar34._16_4_ = auVar23._16_4_ * auVar28._16_4_ - auVar19._16_4_ * auVar10._16_4_;
  auVar34._20_4_ = auVar23._20_4_ * auVar28._20_4_ - auVar19._20_4_ * auVar10._20_4_;
  auVar34._24_4_ = auVar23._24_4_ * auVar28._24_4_ - auVar19._24_4_ * auVar10._24_4_;
  auVar34._28_4_ = auVar23._28_4_ * auVar28._28_4_ - auVar19._28_4_ * auVar10._28_4_;
  auVar39._0_4_ = auVar37._0_4_ * auVar10._0_4_ - auVar23._0_4_ * auVar24._0_4_;
  auVar39._4_4_ = auVar37._4_4_ * auVar10._4_4_ - auVar23._4_4_ * auVar24._4_4_;
  auVar39._8_4_ = auVar37._8_4_ * auVar10._8_4_ - auVar23._8_4_ * auVar24._8_4_;
  auVar39._12_4_ = auVar37._12_4_ * auVar10._12_4_ - auVar23._12_4_ * auVar24._12_4_;
  auVar39._16_4_ = auVar37._16_4_ * auVar10._16_4_ - auVar23._16_4_ * auVar24._16_4_;
  auVar39._20_4_ = auVar37._20_4_ * auVar10._20_4_ - auVar23._20_4_ * auVar24._20_4_;
  auVar39._24_4_ = auVar37._24_4_ * auVar10._24_4_ - auVar23._24_4_ * auVar24._24_4_;
  auVar39._28_4_ = auVar37._28_4_ * auVar10._28_4_ - auVar23._28_4_ * auVar24._28_4_;
  auVar12._0_4_ =
       auVar33._0_4_ * auVar33._0_4_ + auVar34._0_4_ * auVar34._0_4_ + auVar39._0_4_ * auVar39._0_4_
  ;
  auVar12._4_4_ =
       auVar33._4_4_ * auVar33._4_4_ + auVar34._4_4_ * auVar34._4_4_ + auVar39._4_4_ * auVar39._4_4_
  ;
  auVar12._8_4_ =
       auVar33._8_4_ * auVar33._8_4_ + auVar34._8_4_ * auVar34._8_4_ + auVar39._8_4_ * auVar39._8_4_
  ;
  auVar12._12_4_ =
       auVar33._12_4_ * auVar33._12_4_ +
       auVar34._12_4_ * auVar34._12_4_ + auVar39._12_4_ * auVar39._12_4_;
  auVar12._16_4_ =
       auVar33._16_4_ * auVar33._16_4_ +
       auVar34._16_4_ * auVar34._16_4_ + auVar39._16_4_ * auVar39._16_4_;
  auVar12._20_4_ =
       auVar33._20_4_ * auVar33._20_4_ +
       auVar34._20_4_ * auVar34._20_4_ + auVar39._20_4_ * auVar39._20_4_;
  auVar12._24_4_ =
       auVar33._24_4_ * auVar33._24_4_ +
       auVar34._24_4_ * auVar34._24_4_ + auVar39._24_4_ * auVar39._24_4_;
  auVar12._28_4_ =
       auVar33._28_4_ * auVar33._28_4_ +
       auVar34._28_4_ * auVar34._28_4_ + auVar39._28_4_ * auVar39._28_4_;
  auVar19 = vsqrtps_avx(auVar12);
  auVar37 = vdivps_avx(auVar34,auVar19);
  auVar23 = vdivps_avx(auVar39,auVar19);
  auVar35._4_4_ = __real_00800000;
  auVar35._0_4_ = __real_00800000;
  auVar35._8_4_ = __real_00800000;
  auVar35._12_4_ = __real_00800000;
  auVar35._16_4_ = __real_00800000;
  auVar35._20_4_ = __real_00800000;
  auVar35._24_4_ = __real_00800000;
  auVar35._28_4_ = __real_00800000;
  auVar24 = vdivps_avx(auVar33,auVar19);
  auVar19 = vcmpps_avx(auVar12,auVar35,2);
  auVar20._4_4_ = __real_3f800000;
  auVar20._0_4_ = __real_3f800000;
  auVar20._8_4_ = __real_3f800000;
  auVar20._12_4_ = __real_3f800000;
  auVar20._16_4_ = __real_3f800000;
  auVar20._20_4_ = __real_3f800000;
  auVar20._24_4_ = __real_3f800000;
  auVar20._28_4_ = __real_3f800000;
  auVar37 = vblendvps_avx(auVar37,auVar20,auVar19);
  auVar16._0_4_ = ~auVar19._0_4_ & auVar23._0_4_;
  auVar16._4_4_ = ~auVar19._4_4_ & auVar23._4_4_;
  auVar16._8_4_ = ~auVar19._8_4_ & auVar23._8_4_;
  auVar16._12_4_ = ~auVar19._12_4_ & auVar23._12_4_;
  auVar21._16_4_ = ~auVar19._16_4_ & auVar23._16_4_;
  auVar21._0_16_ = auVar16;
  auVar21._20_4_ = ~auVar19._20_4_ & auVar23._20_4_;
  auVar21._24_4_ = ~auVar19._24_4_ & auVar23._24_4_;
  auVar21._28_4_ = ~auVar19._28_4_ & auVar23._28_4_;
  auVar9._0_4_ = ~auVar19._0_4_ & auVar24._0_4_;
  auVar9._4_4_ = ~auVar19._4_4_ & auVar24._4_4_;
  auVar9._8_4_ = ~auVar19._8_4_ & auVar24._8_4_;
  auVar9._12_4_ = ~auVar19._12_4_ & auVar24._12_4_;
  auVar13._16_4_ = ~auVar19._16_4_ & auVar24._16_4_;
  auVar13._0_16_ = auVar9;
  auVar13._20_4_ = ~auVar19._20_4_ & auVar24._20_4_;
  auVar13._24_4_ = ~auVar19._24_4_ & auVar24._24_4_;
  auVar13._28_4_ = ~auVar19._28_4_ & auVar24._28_4_;
  pauVar1 = (undefined1 (*) [32])(param_1 + (ulonglong)uVar6 * 0xc);
  auVar15 = auVar37._0_16_;
  auVar25 = auVar37._16_16_;
  if (cVar5 == -1) {
    auVar29._16_16_ = auVar16;
    auVar29._0_16_ = auVar15;
    auVar23 = vshufpd_avx(auVar37,auVar29,2);
    auVar24 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar13);
    auVar19 = vpermpd_avx2(auVar21,0xe9);
    auVar19 = vblendps_avx(auVar24,auVar19,7);
    auVar36._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar36._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar24 = vpermps_avx2(auVar36,auVar19);
    auVar23 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar23);
    auVar23 = vblendps_avx(auVar23,auVar24,0xa4);
    *pauVar1 = auVar23;
    auVar23 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar19);
    auVar19 = vshufpd_avx(auVar37,auVar37,1);
    auVar19 = vblendps_avx(auVar23,auVar19,0x92);
    pauVar1[1] = auVar19;
    auVar30._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar30._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar19 = vpermps_avx2(auVar30,auVar21);
    auVar37 = vpermpd_avx2(auVar37,0xff);
    auVar37 = vblendps_avx(auVar19,auVar37,3);
    auVar37 = vblendps_avx(auVar37,auVar13,0xe0);
    auVar37 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar37);
    pauVar1[2] = auVar37;
  }
  else {
    auVar22 = auVar21._16_16_;
    auVar14 = auVar13._16_16_;
    if ((uVar7 & 1) != 0) {
      *(int *)*pauVar1 = auVar37._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar2 = vextractps_avx(auVar15,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
    }
    if ((uVar7 & 4) != 0) {
      uVar2 = vextractps_avx(auVar15,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
    }
    if ((uVar7 & 8) != 0) {
      uVar2 = vextractps_avx(auVar15,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar2;
    }
    if ((uVar7 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x10) = auVar37._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar25,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar25,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar2;
    }
    if (cVar5 < '\0') {
      uVar2 = vextractps_avx(auVar25,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
    }
    if ((uVar7 & 1) != 0) {
      *(uint *)(*pauVar1 + 4) = auVar16._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar2 = vextractps_avx(auVar16,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
    }
    if ((uVar7 & 4) != 0) {
      uVar2 = vextractps_avx(auVar16,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
    }
    if ((uVar7 & 8) != 0) {
      uVar2 = vextractps_avx(auVar16,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar2;
    }
    if ((uVar7 & 0x10) != 0) {
      *(uint *)(pauVar1[1] + 0x14) = auVar21._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar22,1);
      *(undefined4 *)pauVar1[2] = uVar2;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar22,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
    }
    if (cVar5 < '\0') {
      uVar2 = vextractps_avx(auVar22,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
    }
    if ((uVar7 & 1) != 0) {
      *(uint *)(*pauVar1 + 8) = auVar9._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar2 = vextractps_avx(auVar9,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
    }
    if ((uVar7 & 4) != 0) {
      uVar2 = vextractps_avx(auVar9,2);
      *(undefined4 *)pauVar1[1] = uVar2;
    }
    if ((uVar7 & 8) != 0) {
      uVar2 = vextractps_avx(auVar9,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
    }
    if ((uVar7 & 0x10) != 0) {
      *(uint *)(pauVar1[1] + 0x18) = auVar13._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar14,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar2;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar14,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
    }
    if (cVar5 < '\0') {
      uVar2 = vextractps_avx(auVar14,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
    }
  }
  return;
}

// GetPointNormals_avx2 @ 1405bfa90

void GetPointNormals_avx2
               (longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
               uint param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined4 uVar16;
  undefined4 uVar17;
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  fVar4 = __real_322bcc77;
  if (0 < (int)param_6) {
    lVar9 = (longlong)param_4;
    if (param_6 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
        if ((int)uVar1 < 1) {
          auVar13 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar22 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar15 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar22._8_8_ = 0;
                auVar22._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = ZEXT1664(CONCAT412(auVar13._12_4_ + auVar15._12_4_,
                                             CONCAT48(auVar13._8_4_ + auVar15._8_4_,
                                                      CONCAT44(auVar13._4_4_ + auVar15._4_4_,
                                                               auVar13._0_4_ + auVar15._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar23._8_8_ = 0;
                auVar23._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = ZEXT1664(CONCAT412(auVar13._12_4_ + auVar15._12_4_,
                                             CONCAT48(auVar13._8_4_ + auVar15._8_4_,
                                                      CONCAT44(auVar13._4_4_ + auVar15._4_4_,
                                                               auVar13._0_4_ + auVar15._0_4_))));
              }
              auVar13 = auVar15._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar22 = auVar13;
            if ((uVar1 & 1) == 0) goto LAB_1405bfe77;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar13 = auVar22;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar24._8_8_ = 0;
            auVar24._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar23 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar13._0_4_ = auVar23._0_4_ + auVar22._0_4_;
            auVar13._4_4_ = auVar23._4_4_ + auVar22._4_4_;
            auVar13._8_4_ = auVar23._8_4_ + auVar22._8_4_;
            auVar13._12_4_ = auVar23._12_4_ + auVar22._12_4_;
          }
        }
LAB_1405bfe77:
        auVar34._0_4_ = auVar13._0_4_;
        auVar25._0_4_ = auVar34._0_4_ * auVar34._0_4_;
        auVar40._0_4_ = auVar13._4_4_;
        auVar25._4_4_ = auVar40._0_4_ * auVar40._0_4_;
        auVar44._0_4_ = auVar13._8_4_;
        auVar25._8_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar32._0_4_ = auVar13._12_4_;
        auVar25._12_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar22 = vmovshdup_avx(auVar25);
        auVar23 = vshufpd_avx(auVar25,auVar25,1);
        fVar3 = auVar23._0_4_ + auVar25._0_4_ + auVar22._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar22 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar33._0_4_ = auVar22._0_4_;
            auVar33._0_4_ =
                 (-(fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_) + fVar6) * auVar33._0_4_ +
                 auVar33._0_4_;
            auVar23 = ZEXT416((uint)((-(fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_) + fVar6) *
                                     auVar33._0_4_ + auVar33._0_4_));
            auVar22 = vblendps_avx(auVar13,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar22);
            auVar22 = vshufps_avx(auVar23,in_ZMM1._0_16_,0xe0);
            auVar22 = vinsertps_avx(auVar22,auVar23,0x20);
            in_ZMM1 = ZEXT1664(auVar22);
            auVar34._0_4_ = auVar34._0_4_ * auVar22._0_4_;
            auVar34._4_4_ = auVar40._0_4_ * auVar22._4_4_;
            auVar34._8_4_ = auVar44._0_4_ * auVar22._8_4_;
            auVar34._12_4_ = auVar32._0_4_ * auVar22._12_4_;
            auVar22 = vmovshdup_avx(auVar34);
            uVar16 = auVar22._0_4_;
            auVar22 = vshufpd_avx(auVar34,auVar34,1);
            uVar17 = auVar22._0_4_;
          }
          else {
            auVar34._0_4_ = 0.0;
            uVar16 = 0;
            uVar17 = 0;
          }
        }
        else {
          auVar22 = vshufpd_avx(auVar13,auVar13,1);
          uVar17 = auVar22._0_4_;
          auVar22 = vmovshdup_avx(auVar13);
          uVar16 = auVar22._0_4_;
        }
        lVar11 = param_1 + uVar8 * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar34._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar16;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar17;
        lVar11 = (uVar8 | 1) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar26 = ZEXT816(0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar22 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar15 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar27._8_8_ = 0;
                auVar27._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar22 = vinsertps_avx(auVar27,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = ZEXT1664(CONCAT412(auVar15._12_4_ + auVar22._12_4_,
                                             CONCAT48(auVar15._8_4_ + auVar22._8_4_,
                                                      CONCAT44(auVar15._4_4_ + auVar22._4_4_,
                                                               auVar15._0_4_ + auVar22._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar28._8_8_ = 0;
                auVar28._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar22 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = ZEXT1664(CONCAT412(auVar15._12_4_ + auVar22._12_4_,
                                             CONCAT48(auVar15._8_4_ + auVar22._8_4_,
                                                      CONCAT44(auVar15._4_4_ + auVar22._4_4_,
                                                               auVar15._0_4_ + auVar22._0_4_))));
              }
              auVar26 = auVar15._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar22 = auVar26;
            if ((uVar1 & 1) == 0) goto LAB_1405c001b;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar26 = auVar22;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar23 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar26._0_4_ = auVar22._0_4_ + auVar23._0_4_;
            auVar26._4_4_ = auVar22._4_4_ + auVar23._4_4_;
            auVar26._8_4_ = auVar22._8_4_ + auVar23._8_4_;
            auVar26._12_4_ = auVar22._12_4_ + auVar23._12_4_;
          }
        }
LAB_1405c001b:
        auVar40._0_4_ = auVar26._0_4_;
        auVar30._0_4_ = auVar40._0_4_ * auVar40._0_4_;
        auVar34._0_4_ = auVar26._4_4_;
        auVar30._4_4_ = auVar34._0_4_ * auVar34._0_4_;
        auVar44._0_4_ = auVar26._8_4_;
        auVar30._8_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar32._0_4_ = auVar26._12_4_;
        auVar30._12_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar22 = vmovshdup_avx(auVar30);
        auVar23 = vshufpd_avx(auVar30,auVar30,1);
        fVar3 = auVar23._0_4_ + auVar30._0_4_ + auVar22._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar22 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar33._0_4_ = auVar22._0_4_;
            auVar33._0_4_ =
                 (-(fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_) + fVar6) * auVar33._0_4_ +
                 auVar33._0_4_;
            auVar23 = ZEXT416((uint)((-(fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_) + fVar6) *
                                     auVar33._0_4_ + auVar33._0_4_));
            auVar22 = vblendps_avx(auVar26,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar22);
            auVar22 = vshufps_avx(auVar23,in_ZMM1._0_16_,0xe0);
            auVar22 = vinsertps_avx(auVar22,auVar23,0x20);
            in_ZMM1 = ZEXT1664(auVar22);
            auVar40._0_4_ = auVar40._0_4_ * auVar22._0_4_;
            auVar40._4_4_ = auVar34._0_4_ * auVar22._4_4_;
            auVar40._8_4_ = auVar44._0_4_ * auVar22._8_4_;
            auVar40._12_4_ = auVar32._0_4_ * auVar22._12_4_;
            auVar22 = vmovshdup_avx(auVar40);
            uVar16 = auVar22._0_4_;
            auVar22 = vshufpd_avx(auVar40,auVar40,1);
            uVar17 = auVar22._0_4_;
          }
          else {
            auVar40._0_4_ = 0.0;
            uVar16 = 0;
            uVar17 = 0;
          }
        }
        else {
          auVar22 = vshufpd_avx(auVar26,auVar26,1);
          uVar17 = auVar22._0_4_;
          auVar22 = vmovshdup_avx(auVar26);
          uVar16 = auVar22._0_4_;
        }
        lVar11 = param_1 + (uVar8 | 1) * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar40._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar16;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar17;
        lVar11 = (uVar8 | 2) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar31 = ZEXT816(0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar22 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar15 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar35._8_8_ = 0;
                auVar35._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar22 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = ZEXT1664(CONCAT412(auVar15._12_4_ + auVar22._12_4_,
                                             CONCAT48(auVar15._8_4_ + auVar22._8_4_,
                                                      CONCAT44(auVar15._4_4_ + auVar22._4_4_,
                                                               auVar15._0_4_ + auVar22._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar36._8_8_ = 0;
                auVar36._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar22 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = ZEXT1664(CONCAT412(auVar15._12_4_ + auVar22._12_4_,
                                             CONCAT48(auVar15._8_4_ + auVar22._8_4_,
                                                      CONCAT44(auVar15._4_4_ + auVar22._4_4_,
                                                               auVar15._0_4_ + auVar22._0_4_))));
              }
              auVar31 = auVar15._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar22 = auVar31;
            if ((uVar1 & 1) == 0) goto LAB_1405c01bb;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar31 = auVar22;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar37._8_8_ = 0;
            auVar37._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar23 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar31._0_4_ = auVar22._0_4_ + auVar23._0_4_;
            auVar31._4_4_ = auVar22._4_4_ + auVar23._4_4_;
            auVar31._8_4_ = auVar22._8_4_ + auVar23._8_4_;
            auVar31._12_4_ = auVar22._12_4_ + auVar23._12_4_;
          }
        }
LAB_1405c01bb:
        auVar44._0_4_ = auVar31._0_4_;
        auVar38._0_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar34._0_4_ = auVar31._4_4_;
        auVar38._4_4_ = auVar34._0_4_ * auVar34._0_4_;
        auVar40._0_4_ = auVar31._8_4_;
        auVar38._8_4_ = auVar40._0_4_ * auVar40._0_4_;
        auVar32._0_4_ = auVar31._12_4_;
        auVar38._12_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar22 = vmovshdup_avx(auVar38);
        auVar23 = vshufpd_avx(auVar38,auVar38,1);
        fVar3 = auVar23._0_4_ + auVar38._0_4_ + auVar22._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar22 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar33._0_4_ = auVar22._0_4_;
            auVar33._0_4_ =
                 (-(fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_) + fVar6) * auVar33._0_4_ +
                 auVar33._0_4_;
            auVar23 = ZEXT416((uint)((-(fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_) + fVar6) *
                                     auVar33._0_4_ + auVar33._0_4_));
            auVar22 = vblendps_avx(auVar31,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar22);
            auVar22 = vshufps_avx(auVar23,in_ZMM1._0_16_,0xe0);
            auVar22 = vinsertps_avx(auVar22,auVar23,0x20);
            in_ZMM1 = ZEXT1664(auVar22);
            auVar44._0_4_ = auVar44._0_4_ * auVar22._0_4_;
            auVar44._4_4_ = auVar34._0_4_ * auVar22._4_4_;
            auVar44._8_4_ = auVar40._0_4_ * auVar22._8_4_;
            auVar44._12_4_ = auVar32._0_4_ * auVar22._12_4_;
            auVar22 = vmovshdup_avx(auVar44);
            uVar16 = auVar22._0_4_;
            auVar22 = vshufpd_avx(auVar44,auVar44,1);
            uVar17 = auVar22._0_4_;
          }
          else {
            auVar44._0_4_ = 0.0;
            uVar16 = 0;
            uVar17 = 0;
          }
        }
        else {
          auVar22 = vshufpd_avx(auVar31,auVar31,1);
          uVar17 = auVar22._0_4_;
          auVar22 = vmovshdup_avx(auVar31);
          uVar16 = auVar22._0_4_;
        }
        lVar11 = param_1 + (uVar8 | 2) * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar44._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar16;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar17;
        lVar11 = (uVar8 | 3) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar39 = ZEXT816(0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar22 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar15 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar41._8_8_ = 0;
                auVar41._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar22 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = ZEXT1664(CONCAT412(auVar15._12_4_ + auVar22._12_4_,
                                             CONCAT48(auVar15._8_4_ + auVar22._8_4_,
                                                      CONCAT44(auVar15._4_4_ + auVar22._4_4_,
                                                               auVar15._0_4_ + auVar22._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar42._8_8_ = 0;
                auVar42._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar22 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = ZEXT1664(CONCAT412(auVar15._12_4_ + auVar22._12_4_,
                                             CONCAT48(auVar15._8_4_ + auVar22._8_4_,
                                                      CONCAT44(auVar15._4_4_ + auVar22._4_4_,
                                                               auVar15._0_4_ + auVar22._0_4_))));
              }
              auVar39 = auVar15._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar22 = auVar39;
            if ((uVar1 & 1) == 0) goto LAB_1405c035b;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar39 = auVar22;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar43._8_8_ = 0;
            auVar43._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar23 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar39._0_4_ = auVar22._0_4_ + auVar23._0_4_;
            auVar39._4_4_ = auVar22._4_4_ + auVar23._4_4_;
            auVar39._8_4_ = auVar22._8_4_ + auVar23._8_4_;
            auVar39._12_4_ = auVar22._12_4_ + auVar23._12_4_;
          }
        }
LAB_1405c035b:
        auVar22 = vblendps_avx(auVar13,in_ZMM2._0_16_,8);
        auVar13 = vblendps_avx(auVar13,in_ZMM3._0_16_,8);
        auVar22 = vblendps_avx(auVar26,auVar22,8);
        auVar13 = vblendps_avx(auVar26,auVar13,8);
        auVar22 = vblendps_avx(auVar31,auVar22,8);
        auVar13 = vblendps_avx(auVar31,auVar13,8);
        auVar32._0_4_ = auVar39._0_4_;
        auVar14._0_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar34._0_4_ = auVar39._4_4_;
        auVar14._4_4_ = auVar34._0_4_ * auVar34._0_4_;
        auVar40._0_4_ = auVar39._8_4_;
        auVar14._8_4_ = auVar40._0_4_ * auVar40._0_4_;
        auVar44._0_4_ = auVar39._12_4_;
        auVar14._12_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar23 = vmovshdup_avx(auVar14);
        auVar24 = vshufpd_avx(auVar14,auVar14,1);
        fVar3 = auVar24._0_4_ + auVar23._0_4_ + auVar14._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar23 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar33._0_4_ = auVar23._0_4_;
            auVar33._0_4_ =
                 (-(fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_) + fVar6) * auVar33._0_4_ +
                 auVar33._0_4_;
            auVar24 = ZEXT416((uint)((-(fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_) + fVar6) *
                                     auVar33._0_4_ + auVar33._0_4_));
            auVar23 = vblendps_avx(auVar39,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar23);
            auVar23 = vshufps_avx(auVar24,in_ZMM1._0_16_,0xe0);
            auVar23 = vinsertps_avx(auVar23,auVar24,0x20);
            in_ZMM1 = ZEXT1664(auVar23);
            auVar32._0_4_ = auVar32._0_4_ * auVar23._0_4_;
            auVar32._4_4_ = auVar34._0_4_ * auVar23._4_4_;
            auVar32._8_4_ = auVar40._0_4_ * auVar23._8_4_;
            auVar32._12_4_ = auVar44._0_4_ * auVar23._12_4_;
            auVar23 = vmovshdup_avx(auVar32);
            uVar16 = auVar23._0_4_;
            auVar23 = vshufpd_avx(auVar32,auVar32,1);
            uVar17 = auVar23._0_4_;
          }
          else {
            auVar32._0_4_ = 0.0;
            uVar16 = 0;
            uVar17 = 0;
          }
        }
        else {
          auVar23 = vshufpd_avx(auVar39,auVar39,1);
          uVar17 = auVar23._0_4_;
          auVar23 = vmovshdup_avx(auVar39);
          uVar16 = auVar23._0_4_;
        }
        auVar22 = vblendps_avx(auVar39,auVar22,8);
        in_ZMM2 = ZEXT1664(auVar22);
        auVar13 = vblendps_avx(auVar39,auVar13,8);
        in_ZMM3 = ZEXT1664(auVar13);
        lVar11 = param_1 + (uVar8 | 3) * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar32._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar16;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar17;
        uVar8 = uVar8 + 4;
      } while (uVar8 != (param_6 & 0x7ffffffc));
    }
    fVar6 = __real_3f000000;
    fVar5 = __real_3f800000;
    fVar4 = __real_322bcc77;
    if ((ulonglong)(param_6 & 3) != 0) {
      uVar7 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
        if ((int)uVar1 < 1) {
          auVar12 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar13 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar15 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar18._8_8_ = 0;
                auVar18._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = ZEXT1664(CONCAT412(auVar13._12_4_ + auVar15._12_4_,
                                             CONCAT48(auVar13._8_4_ + auVar15._8_4_,
                                                      CONCAT44(auVar13._4_4_ + auVar15._4_4_,
                                                               auVar13._0_4_ + auVar15._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar19._8_8_ = 0;
                auVar19._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = ZEXT1664(CONCAT412(auVar13._12_4_ + auVar15._12_4_,
                                             CONCAT48(auVar13._8_4_ + auVar15._8_4_,
                                                      CONCAT44(auVar13._4_4_ + auVar15._4_4_,
                                                               auVar13._0_4_ + auVar15._0_4_))));
              }
              auVar12 = auVar15._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar13 = auVar12;
            if ((uVar1 & 1) == 0) goto LAB_1405bfc56;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar12 = auVar13;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar22 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar12._0_4_ = auVar22._0_4_ + auVar13._0_4_;
            auVar12._4_4_ = auVar22._4_4_ + auVar13._4_4_;
            auVar12._8_4_ = auVar22._8_4_ + auVar13._8_4_;
            auVar12._12_4_ = auVar22._12_4_ + auVar13._12_4_;
          }
        }
LAB_1405bfc56:
        auVar33._0_4_ = auVar12._0_4_;
        auVar21._0_4_ = auVar33._0_4_ * auVar33._0_4_;
        auVar34._0_4_ = auVar12._4_4_;
        auVar21._4_4_ = auVar34._0_4_ * auVar34._0_4_;
        auVar40._0_4_ = auVar12._8_4_;
        auVar21._8_4_ = auVar40._0_4_ * auVar40._0_4_;
        auVar44._0_4_ = auVar12._12_4_;
        auVar21._12_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar13 = vmovshdup_avx(auVar21);
        auVar22 = vshufpd_avx(auVar21,auVar21,1);
        fVar3 = auVar22._0_4_ + auVar21._0_4_ + auVar13._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar13 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar32._0_4_ = auVar13._0_4_;
            auVar32._0_4_ =
                 (-(fVar3 * fVar6 * auVar32._0_4_ * auVar32._0_4_) + fVar6) * auVar32._0_4_ +
                 auVar32._0_4_;
            auVar22 = ZEXT416((uint)((-(fVar3 * fVar6 * auVar32._0_4_ * auVar32._0_4_) + fVar6) *
                                     auVar32._0_4_ + auVar32._0_4_));
            auVar13 = vblendps_avx(auVar12,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar13);
            auVar13 = vshufps_avx(auVar22,in_ZMM1._0_16_,0xe0);
            auVar13 = vinsertps_avx(auVar13,auVar22,0x20);
            in_ZMM1 = ZEXT1664(auVar13);
            auVar33._0_4_ = auVar33._0_4_ * auVar13._0_4_;
            auVar33._4_4_ = auVar34._0_4_ * auVar13._4_4_;
            auVar33._8_4_ = auVar40._0_4_ * auVar13._8_4_;
            auVar33._12_4_ = auVar44._0_4_ * auVar13._12_4_;
            auVar13 = vmovshdup_avx(auVar33);
            uVar16 = auVar13._0_4_;
            auVar13 = vshufpd_avx(auVar33,auVar33,1);
            uVar17 = auVar13._0_4_;
          }
          else {
            auVar33._0_4_ = 0.0;
            uVar16 = 0;
            uVar17 = 0;
          }
        }
        else {
          auVar13 = vshufpd_avx(auVar12,auVar12,1);
          uVar17 = auVar13._0_4_;
          auVar13 = vmovshdup_avx(auVar12);
          uVar16 = auVar13._0_4_;
        }
        auVar13 = vblendps_avx(auVar12,in_ZMM2._0_16_,8);
        in_ZMM2 = ZEXT1664(auVar13);
        lVar11 = param_1 + uVar8 * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar33._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar16;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar17;
        auVar13 = vblendps_avx(auVar12,in_ZMM3._0_16_,8);
        in_ZMM3 = ZEXT1664(auVar13);
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != (param_6 & 3));
    }
  }
  return;
}

